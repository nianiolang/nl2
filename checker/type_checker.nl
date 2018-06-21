###
# (c) Atinea Sp. z o.o.
###

use array;
use ptd;
use tct;
use tc_types;
use hash;
use enum;
use string;
use nast;
use ptd_parser;
use ptd_system;
use singleton;
use own_to_im_converter;
use nparser;

def type_to_ptd(type : @nast::variable_type_t, ref errors : @tc_types::errors_t) : @tct::meta_type {
	match (type) case :type(var tt) {
		match (ptd_parser::try_value_to_ptd(tt)) case :err(var err) {
			add_error(ref errors, err);
			return tct::tct_im();
		} case :ok(var ok) {
			return ok;
		}
	} case :none {
		return tct::tct_im();
	}
}

def get_fun_def_key(func : @tc_types::def_fun_t) : ptd::string() {
	match (func->access) case :pub {
		return func->name;
	} case :priv {
		return 'priv::' . func->name;
	}
}

def get_fun_key(fun_name : ptd::string(), fun_module : ptd::string()) : ptd::string() {
	var ret = '';
	ret .= 'priv::' if fun_module eq '';
	return ret . fun_name;
}

def return_type_to_tct(type : @nast::variable_type_t, ref errors : @tc_types::errors_t) : @tct::meta_type {
	match (type) case :type(var tt) {
		if (tt->value is :fun_val) {
			var fun_val = tt->value as :fun_val;
			if (fun_val->module eq 'ptd' && fun_val->name eq 'void') {
				return tct::void();
			}
		}
		return type_to_ptd(type, ref errors);
	} case :none {
		return tct::tct_im();
	}
}

def check_types_imported(type : @tct::meta_type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : 
		ptd::void() {
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
		check_types_imported(arr_type, ref modules, ref errors);
	} case :tct_own_arr(var arr_type) {
		check_types_imported(arr_type, ref modules, ref errors);
	} case :tct_hash(var hash_type) {
		check_types_imported(hash_type, ref modules, ref errors);
	} case :tct_own_hash(var hash_type) {
		check_types_imported(hash_type, ref modules, ref errors);
	} case :tct_rec(var records) {
		forh var name, var record (records) {
			check_types_imported(record, ref modules, ref errors);
		}
	} case :tct_own_rec(var records) {
		forh var name, var record (records) {
			check_types_imported(record, ref modules, ref errors);
		}
	} case :tct_ref(var ref_name) {
		var ix = string::index2(ref_name, '::');
		if (ix >= 0) {
			var module_name = string::substr(ref_name, 0, ix);
			var fun_name = string::substr(ref_name, ix + 2, string::length(ref_name) - ix - 2);
			check_function_exists(module_name, fun_name, ref modules, ref errors);
		} else {
			add_error(ref errors, 'wrong type name ''' . ref_name . ''' ');
		}
	} case :tct_void {
	} case :tct_sim {
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_var(var vars) {
		forh var name, var from_type (vars) {
			match (from_type) case :no_param {
			} case :with_param(var param) {
				check_types_imported(param, ref modules, ref errors);
			}
		}
	} case :tct_own_var(var vars) {
		forh var name, var from_type (vars) {
			match (from_type) case :no_param {
			} case :with_param(var param) {
				check_types_imported(param, ref modules, ref errors);
			}
		}
	} case :tct_empty {
	}
}

def prepare_def_fun(modules : ptd::hash(@nast::module_t), ref errors : @tc_types::errors_t) : @tc_types::defs_funs_t {
	var def_fun : @tc_types::defs_funs_t = {};
	forh var module_name, var ast (modules) {
		errors->current_line = -1;
		errors->module = module_name;
		var funs : ptd::hash(@tc_types::def_fun_t) = {};
		fora var fun_def (ast->fun_def) {
			var new_args : ptd::arr(@tc_types::fun_arg_t) = [];
			fora var fun_arg (fun_def->args) {
				array::push(ref new_args, {
						name => fun_arg->name,
						mod => fun_arg->mod,
						type => type_to_ptd(fun_arg->type, ref errors)
					});
			}
			var new_fun_def : @tc_types::def_fun_t = {
					cmd => fun_def->cmd,
					is_type => :no,
					ref_types => :no,
					name => fun_def->name,
					module => module_name,
					access => fun_def->access,
					args => new_args,
					ret_type => return_type_to_tct(fun_def->ret_type->type, ref errors)
				};
			var name = get_fun_def_key(new_fun_def);
			add_error(ref errors, 'redefine function: ' . name) if (hash::has_key(funs, name));
			hash::set_value(ref funs, name, new_fun_def);
		}
		hash::set_value(ref def_fun, module_name, funs);
	}
	return def_fun;
}

def type_checker::check(modules : ptd::hash(@nast::module_t), lib_modules : ptd::hash(@nast::module_t)) :
		@tc_types::return_t {
	return type_checker::check_modules(ref modules, lib_modules);
}

def gather_types(modules : ptd::hash(@nast::module_t)) : ptd::hash(@tct::meta_type) {
	var known_types = {};
	forh var module_name, var ast (modules) {
		fora var func (ast->fun_def) {
			match (func->defines_type) case :yes(var type) {
				hash::set_value(ref known_types, module_name . '::' . func->name, type);
			} case :no {
			}
		}
	}
	return known_types;
}

def type_checker::check_modules(ref modules : ptd::hash(@nast::module_t), lib_modules : ptd::hash(@nast::module_t)) :
		@tc_types::return_t {
	var errors : @tc_types::errors_t = {errors => [], warnings => [], current_line => -1, module => ''};
	var known_types : ptd::hash(@tct::meta_type) = gather_types(modules);
	
	forh var module_name, var ast (modules) {
		var own_conv : ptd::hash(@tct::meta_type) = {};
		fora var func (ast->fun_def) {
			match (func->defines_type) case :yes(var type) {
				if (tct::is_own_type(type, known_types)) {
					var ref_type : @tct::meta_type = :tct_ref(module_name . '::' . func->name);
					hash::set_value(ref own_conv, own_to_im_converter::get_function_name(ref_type, known_types), ref_type);
				}
			} case :no {
			}
		}
		var new_module : @nast::module_t = create_own_convertions_module(own_conv, known_types, module_name);
		var found = false;
		var new_fun_def : ptd::arr(@nast::fun_def_t) = ast->fun_def;
		fora var new_fun (new_module->fun_def) {
			found = false;
			rep var i (array::len(ast->fun_def)) {
				if (new_fun_def[i]->name eq new_fun->name) {
					found = true;
					new_fun_def[i] = new_fun;
					break;
				}
			}
			if (!found) {
				new_fun_def []= new_fun;
			}
		}
		modules{module_name}->fun_def = new_fun_def;
		lib_modules{module_name}->fun_def = new_fun_def;
	}
	
	var def_fun : @tc_types::defs_funs_t = prepare_def_fun(lib_modules, ref errors);
	var deref : @tc_types::deref_types = {delete => [], create => []};

	forh var module_name, var ast (modules) {
		errors->current_line = -1;
		errors->module = module_name;
		check_module(ref modules{module_name}, ref def_fun, ref errors, ref deref, known_types);
	}
	
	return {errors => errors->errors, deref => deref, warnings => errors->warnings};
}

def get_own_conv_defs(ref defs : ptd::hash(ptd::string()), types : ptd::hash(@tct::meta_type),
		known_types : ptd::hash(@tct::meta_type)) {
	var r : @own_to_im_converter::res_t;
	forh var name, var type (types) {
		if (hash::has_key(defs, name)) {
			continue;
		}
		r = own_to_im_converter::get_function(type, known_types);
		hash::set_value(ref defs, name, r->body);
		get_own_conv_defs(ref defs, r->required_functions, known_types);
	}
}

def create_own_convertions_module(own_conv : ptd::hash(@tct::meta_type), known_types : ptd::hash(@tct::meta_type),
		moudule_name : ptd::string()) : @nast::module_t {
	var own_conv_defs : ptd::hash(ptd::string()) = {};
	get_own_conv_defs(ref own_conv_defs, own_conv, known_types);

	var new_code : ptd::string() = ''; 
	forh var name, var body (own_conv_defs) {
		new_code .= body . string::lf();
	}
	match (nparser::sparse(new_code, moudule_name, true)) case :error(var e) {
		die;
	} case :ok(var new_module) {
		var errors : @tc_types::errors_t = {errors => [], warnings => [], current_line => -1, module => ''};
		rep var i (array::len(new_module->fun_def)) {
			var tct_type = type_to_ptd(new_module->fun_def[i]->args[0]->type, ref errors);
			new_module->fun_def[i]->args[0]->tct_type = tct_type;
		}
		die if !array::is_empty(errors->errors);
		return new_module;
	}
}

def check_func(i : ptd::int(), ref modules : @tc_types::modules_t, ref own_conv : ptd::hash(@tct::meta_type), ref module : @nast::module_t, ref def_fun : @tc_types::defs_funs_t, ref errors : @tc_types::errors_t, ref deref : @tc_types::deref_types, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var fun_vars : @tc_types::vars_t = {};
	var fun_def : @nast::fun_def_t = module->fun_def[i];
	rep var j (array::len(fun_def->args)) {
		var fun_arg = fun_def->args[j];
		var arg_type = type_to_ptd(fun_arg->type, ref errors);
		if (tct::is_own_type(arg_type, known_types)) {
			match (fun_arg->mod) case :ref {
			} case :none {
				add_error(ref errors, 'Function ' . fun_def->name . ' takes non-ref own argument '
					. fun_arg->name);
			}
		}
		check_types_imported(arg_type, ref modules, ref errors);
		add_var_decl_to_vars(arg_type, fun_arg->name, ref fun_vars);
		module->fun_def[i]->args[j]->tct_type = arg_type;
	}
	modules->env->ret_type = return_type_to_tct(fun_def->ret_type->type, ref errors);
	if (tct::is_own_type(modules->env->ret_type, known_types)) {
			add_error(ref errors, 'Function ' . fun_def->name . ' returns own type.');
	}
	check_cmd(ref module->fun_def[i]->cmd, ref modules, ref fun_vars, ref errors, known_types);
	check_types_imported(modules->env->ret_type, ref modules, ref errors);
	var fun_name = get_function_name(module->name, fun_def->name);
	if (hash::has_key(get_special_functions(), fun_name)) {
		var special_fun_def = get_special_functions(){fun_name};
		module->fun_def[i]->ret_type->tct_type = special_fun_def->r;
		rep var j (array::len(module->fun_def[i]->args)) {
			module->fun_def[i]->args[j]->tct_type = special_fun_def->a[j]->type;
			fun_vars{module->fun_def[i]->args[j]->name} = {overwrited => :no, type => special_fun_def->a[j]->type, referenced_by => :none};
		}
	} else {
		module->fun_def[i]->ret_type->tct_type = modules->env->ret_type;
	}
	if (array::is_empty(errors->errors)) {
		fill_value_types_in_cmd(ref module->fun_def[i]->cmd, fun_vars, modules, ref errors, known_types, ref own_conv, module->name);
	}
}

def check_module(ref module : @nast::module_t, ref def_fun : @tc_types::defs_funs_t, ref errors : @tc_types::errors_t, ref
		deref : @tc_types::deref_types, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var modules : @tc_types::modules_t = {
			env => {
				deref => deref,
				current_module => module->name,
				breaks => {vars => {}, is => false},
				ret_type => tct::empty()
			},
			imports => {},
			funs => def_fun
		};
	fora var import (module->import) {
		hash::set_value(ref modules->imports, import->name, true);
	}
	hash::set_value(ref modules->imports, module->name, true);
	var own_conv : ptd::hash(@tct::meta_type) = {};
	
	rep var i (array::len(module->fun_def)) {
		check_func(i, ref modules, ref own_conv, ref module, ref def_fun, ref errors, ref deref, known_types);
	}

	var i_offset : ptd::int() = array::len(module->fun_def);

	var new_module : @nast::module_t = create_own_convertions_module(own_conv, known_types, module->name);
	var to_delete : ptd::arr(ptd::int()) = [];

	var exist_name_hash : ptd::hash(ptd::string()) = {};
	fora var f (module->fun_def) {
		exist_name_hash{f->name} = f->name;
	}
	
	rep var f (array::len(new_module->fun_def)) {
		if(hash::has_key(exist_name_hash, new_module->fun_def[f]->name)) {
			to_delete []= f;
		}
	}

	var n_offset = 0;
	fora var n (to_delete) {
		array::remove(ref new_module->fun_def, n - n_offset);
		n_offset += 1;
	}

	var h_new_module : ptd::hash(@nast::module_t) = {};
	hash::set_value(ref h_new_module, module->name, new_module);
	forh var a, var b (prepare_def_fun(h_new_module, ref errors)) {
		forh var c, var d (b) {
			modules->funs{a}{c} = d;
			def_fun{a}{c} = d;
		}
	}
	var m : ptd::arr(@nast::fun_def_t) = module->fun_def;
	array::append(ref m, new_module->fun_def);
	module->fun_def = m;	
	
	rep var i (array::len(new_module->fun_def)) {
		check_func(i + i_offset, ref modules, ref own_conv, ref module, ref def_fun, ref errors, ref deref, known_types);
	}
}

def join_vars(ref vars : @tc_types::vars_t, vars_op : @tc_types::vars_t, ref modules : @tc_types::modules_t, ref errors
		: @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	return if hash::has_key(vars_op, '__END');
	if (hash::has_key(vars, '__END')) {
		vars = vars_op;
		return;
	}
	forh var var_name, var var_ (vars) {
		match (var_->overwrited) case :yes {
			var t1 = var_->type;
			var t2 = hash::get_value(vars_op, var_name)->type;
			set_type_to_variable(ref vars, var_name, ptd_system::cross_type(t1, t2, ref modules, ref errors, known_types));
		} case :no {
		}
	}
}

def set_end_function(ref vars : @tc_types::vars_t) : ptd::void() {
	set_type_to_variable(ref vars, '__END', tct::empty());
}

def check_cmd(ref cmd : @nast::cmd_t, ref modules : @tc_types::modules_t, ref b_vars : @tc_types::vars_t, ref errors :
		@tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::hash(@tc_types::var_t) {
	errors->current_line = cmd->debug->begin->line;
	var ret : ptd::hash(@tc_types::var_t) = {};
	var vars : @tc_types::vars_t = b_vars;
	match (cmd->cmd) case :if(var as_if) {
		var if_cond_type : @tc_types::type = check_val(as_if->cond, ref modules, ref vars, ref errors, known_types);
		add_error(ref errors, 'if argument should be sim or boolean instead of ' . 
				get_print_tct_type_name(if_cond_type->type))
			unless ptd_system::is_condition_type(if_cond_type, ref modules, ref errors);
		var vars_op : @tc_types::vars_t = vars;
		check_cmd(ref as_if->if, ref modules, ref vars_op, ref errors, known_types);

		rep var i (array::len(as_if->elsif)) {
			var elsif_s = as_if->elsif[i];
			errors->current_line = elsif_s->cmd->debug->begin->line;
			var elsif_cond : @tc_types::type = check_val(elsif_s->cond, ref modules, ref vars, ref errors, known_types);
			add_error(ref errors, 'elsif condition should be sim or boolean instead of ' . 
					get_print_tct_type_name(elsif_cond->type))
				unless ptd_system::is_condition_type(elsif_cond, ref modules, ref errors);
			var vars_cmd : @tc_types::vars_t = vars;
			check_cmd(ref as_if->elsif[i]->cmd, ref modules, ref vars_cmd, ref errors, known_types);
			join_vars(ref vars_op, vars_cmd, ref modules, ref errors, known_types);
		}
		check_cmd(ref as_if->else, ref modules, ref vars, ref errors, known_types);
		join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
		cmd->cmd = :if(as_if);
	} case :for(var as_for) {
		match (as_for->start) case :value(var value) {
			check_val(value, ref modules, ref vars, ref errors, known_types);
		} case :var_decl(var var_decl) {
			add_var_to_vars(check_var_decl(var_decl, ref modules, ref vars, ref errors, known_types), var_decl->name, ref vars);
		}
		var vars_op : @tc_types::vars_t = vars;
		if (!(as_for->cond->value is :nop)) {
			var for_cond : @tc_types::type = check_val(as_for->cond, ref modules, ref vars_op, ref errors, known_types);
			add_error(ref errors, 'for condition should be sim or boolean instead of ' . 
					get_print_tct_type_name(for_cond->type))
				unless ptd_system::is_condition_type(for_cond, ref modules, ref errors);
			join_vars(ref vars_op, vars, ref modules, ref errors, known_types);
		}
		break_continue_block(ref as_for->cmd, ref modules, ref vars_op, ref errors, known_types);
		check_val(as_for->iter, ref modules, ref vars_op, ref errors, known_types);
		join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
		if (as_for->start is :var_decl) {
			var var_decl = as_for->start as :var_decl;
			var_decl->tct_type = vars{var_decl->name}->type;
			as_for->start = :var_decl(var_decl);
		}
		cmd->cmd = :for(as_for);
	} case :fora(var as_fora) {
		check_fora(ref as_fora, ref modules, ref vars, ref errors, known_types);
		cmd->cmd = :fora(as_fora);
	} case :forh(var as_forh) {
		check_forh(ref as_forh, ref modules, ref vars, ref errors, known_types);
		cmd->cmd = :forh(as_forh);
	} case :loop(var as_loop) {
		break_continue_block(ref as_loop, ref modules, ref vars, ref errors, known_types);
		cmd->cmd = :loop(as_loop);
	} case :rep(var as_rep) {
		check_rep(ref as_rep, ref modules, ref vars, ref errors, known_types);
		cmd->cmd = :rep(as_rep);
	} case :while(var as_while) {
		check_while(ref as_while, ref modules, ref vars, ref errors, known_types);
		cmd->cmd = :while(as_while);
	} case :if_mod(var if_mod) {
		var if_cond_type : @tc_types::type = check_val(if_mod->cond, ref modules, ref vars, ref errors, known_types);
		add_error(ref errors, 'if argument should be sim or boolean type instead of ' . 
				get_print_tct_type_name(if_cond_type->type))
			unless ptd_system::is_condition_type(if_cond_type, ref modules, ref errors);
		var vars_op : @tc_types::vars_t = vars;
		check_cmd(ref if_mod->cmd, ref modules, ref vars_op, ref errors, known_types);
		join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
		cmd->cmd = :if_mod(if_mod);
	} case :unless_mod(var unless_mod) {
		var unless_cond_type : @tc_types::type = check_val(unless_mod->cond, ref modules, ref vars, ref errors, known_types);
		add_error(ref errors, 'unless argument should be sim or boolean type instead of ' . 
				get_print_tct_type_name(unless_cond_type->type))
			unless ptd_system::is_condition_type(unless_cond_type, ref modules, ref errors);
		var vars_op : @tc_types::vars_t = vars;
		check_cmd(ref unless_mod->cmd, ref modules, ref vars_op, ref errors, known_types);
		join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
		cmd->cmd = :unless_mod(unless_mod);
	} case :break {
		if (!modules->env->breaks->is) {
			add_error(ref errors, 'command break can be used only in cyclic block');
		} else {
			var tmp = modules->env->breaks->vars;
			join_vars(ref tmp, vars, ref modules, ref errors, known_types);
			modules->env->breaks->vars = tmp;
		}
	} case :continue {
		if (!modules->env->breaks->is) {
			add_error(ref errors, 'command continue can be used only in cyclic block');
		} else {
			var tmp = modules->env->breaks->vars;
			join_vars(ref tmp, vars, ref modules, ref errors, known_types);
			modules->env->breaks->vars = tmp;
		}
	} case :match(var as_match) {
		check_match(ref as_match, ref modules, ref vars, ref errors, known_types);
		cmd->cmd = :match(as_match);
	} case :value(var val) {
		check_val(val, ref modules, ref vars, ref errors, known_types);
	} case :return(var as_return) {
		var ret_type = check_val(as_return, ref modules, ref vars, ref errors, known_types);
		if (tct::is_own_type(ret_type->type, known_types)) {
			add_error(ref errors, 'can''t return own value');
		} elsif (modules->env->ret_type is :tct_void && !ret_type->type is :tct_empty) {
			add_error(ref errors, 'can''t return value in void function');
		} elsif (!modules->env->ret_type is :tct_void && !modules->env->ret_type is :tct_im && ret_type->type is 
			:tct_empty) {
			add_error(ref errors, 'must be returned value in non void function');
		} elsif (!modules->env->ret_type is :tct_void && !ret_type->type is :tct_empty) {
			var check_info = ptd_system::check_assignment(modules->env->ret_type, ret_type, ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'return value has the wrong type: ' . get_print_check_info(check_info));
			}
		}
		set_end_function(ref vars);
	} case :block(var block) {
		rep var i (array::len(block)) {
			forh var var_name, var var_ (check_cmd(ref block[i], ref modules, ref vars, ref errors, known_types)) {
				add_var_to_vars(var_, var_name, ref vars);
			}
		}
		rep var i (array::len(block)) {
			if (block[i]->cmd is :var_decl) {
				var var_decl = block[i]->cmd as :var_decl;
				var_decl->tct_type = vars{var_decl->name}->type;
				block[i]->cmd = :var_decl(var_decl);
			}
		}
		cmd->cmd = :block(block);
	} case :die(var as_die) {
		fora var arg (as_die) {
			check_val(arg, ref modules, ref vars, ref errors, known_types);
		}
		set_end_function(ref vars);
	} case :var_decl(var var_decl) {
		hash::set_value(ref ret, var_decl->name, check_var_decl(var_decl, ref modules, ref vars, ref errors, known_types));
	} case :try(var as_try) {
		var type = {type => modules->env->ret_type, src => :speculation};
		add_error(ref errors, 'function in which is used ''try'' must return variant: ok, err ')
			unless ptd_system::is_try_ensure_type(type, ref modules, ref errors);
		var vars_err_type = check_try_ensure(as_try, ref modules, ref vars, ref errors, known_types);
		var ok_err_types = ptd_system::try_get_ensure_sub_types({type=>modules->env->ret_type, src=>:known}, ref modules, ref errors);
		var check_info = ptd_system::check_assignment(ok_err_types->err, vars_err_type->err_type, ref modules, ref errors);
		if (check_info is :err) {
			add_error(ref errors, 'the return value have the wrong type: ' . get_print_check_info(check_info));
		}
		ret = vars_err_type->vars;
	} case :ensure(var as_ensure) {
		var vars_err_type = check_try_ensure(as_ensure, ref modules, ref vars, ref errors, known_types);
		
		ret = vars_err_type->vars;
	} case :nop {
	}
	forh var var_name, var var_ (b_vars) {
		hash::set_value(ref b_vars, var_name, hash::get_value(vars, var_name));
	}
	if (hash::has_key(vars, '__END')) {
		hash::set_value(ref b_vars, '__END', {overwrited => :yes, type => tct::empty(), referenced_by => :none});
	}
	return ret;
}

def break_continue_block(ref cmd : @nast::cmd_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref
		errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var old = modules->env->breaks;
	modules->env->breaks = {is => true, vars => vars};
	check_cmd(ref cmd, ref modules, ref vars, ref errors, known_types);
	join_vars(ref vars, modules->env->breaks->vars, ref modules, ref errors, known_types);
	modules->env->breaks = old;
}

def check_try_ensure(try_ensure : @nast::try_ensure_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type))
		: ptd::rec({vars => ptd::hash(@tc_types::var_t), err_type => @tc_types::type}) {
	var ret : ptd::hash(@tc_types::var_t) = {};
	var err_type : @tc_types::type = {type => tct::empty(), src => :speculation};
	var ok_type : @tct::meta_type = tct::tct_im();
	match (try_ensure) case :decl(var decl) {
		var ok_err_types = check_var_decl_try(decl, true, ref modules, ref vars, ref errors, known_types);
		hash::set_value(ref ret, decl->name, ok_err_types->ok);
		err_type = ok_err_types->err;
		ok_type = ok_err_types->ok->type;
	} case :lval(var lval) {
		var type = check_val(lval->right, ref modules, ref vars, ref errors, known_types);
		var err_left_len = array::len(errors->errors);
		var left_type : @tc_types::type = get_type_left_side_equation(lval->left, ref modules, ref vars, ref errors, known_types);
		err_left_len = array::len(errors->errors) - err_left_len;
		if (err_left_len == 0) {
			var ok_err_types = ptd_system::try_get_ensure_sub_types(type, ref modules, ref errors);
			type->type = ok_err_types->ok;
			set_type_to_lval(lval->left, left_type, type, ref modules, ref vars, ref errors, known_types);
			err_type = {type => ok_err_types->err, src => type->src};
			ok_type = ok_err_types->ok;
		}
	} case :expr(var expr) {
		var type = check_val(expr, ref modules, ref vars, ref errors, known_types);
		var ok_err_types = ptd_system::try_get_ensure_sub_types(type, ref modules, ref errors);
		err_type = {type => ok_err_types->err, src => type->src};
		ok_type = ok_err_types->ok;
	}
	add_error(ref errors, 'empty, no value used as variant in try/ensure') if(err_type->type is :tct_empty && ok_type is :tct_empty);
	return {vars => ret, err_type => err_type};
}

def check_forh(ref as_forh : @nast::forh_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors :
		@tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var hash_type : @tc_types::type = ptd_system::can_delete(check_val(as_forh->hash, ref modules, ref vars, ref errors, known_types),
			ref modules, ref errors);
	if (ptd_system::is_accepted(hash_type, tct::hash(tct::tct_im()), ref modules, ref errors) ||
		ptd_system::is_accepted(hash_type, tct::own_hash(tct::empty()), ref modules, ref errors)) {
	} elsif (ptd_system::is_accepted(hash_type, tct::rec({}), ref modules, ref errors) ||
		ptd_system::is_accepted(hash_type, tct::own_rec({}), ref modules, ref errors)) {
		add_error(ref errors, 'forh argument should be a hash not rec') if is_known(hash_type);
	} else {
		add_error(ref errors, 'forh argument should be a hash type instead of ' . 
			get_print_tct_type_name(hash_type->type));
	}
	match (as_forh->val_mod) case :none {
		if (tct::is_own_type(hash_type->type, known_types)) {
			add_error(ref errors, 'value iterator of own hash has to be ref');
		}
	} case :ref {
		if (!tct::is_own_type(hash_type->type, known_types)) {
			add_error(ref errors, 'value iterator of non-own hash cannot be ref');
		}
	}
	if (hash_type->type is :tct_hash) {
		hash_type->type = hash_type->type as :tct_hash;
	} elsif (hash_type->type is :tct_own_hash) {
		hash_type->type = hash_type->type as :tct_own_hash;
	} else {
		hash_type->type = tct::tct_im();
	}
	var vars_op : @tc_types::vars_t = vars;
	add_var_decl_with_type_and_check(ref as_forh->key, {type => tct::string(), src => :speculation}, ref vars_op, ref errors);
	add_var_decl_with_type_and_check(ref as_forh->val, hash_type, ref vars_op, ref errors);
	var var_tab = [];
	match (as_forh->val_mod) case :none {
	} case :ref {
		var_tab = rec_get_var_from_lval(as_forh->hash, ref errors);
		vars{var_tab[0] as :var}->referenced_by = :variable(as_forh->val->name);
	}
	break_continue_block(ref as_forh->cmd, ref modules, ref vars_op, ref errors, known_types);
	match (as_forh->val_mod) case :none {
	} case :ref {
		vars{var_tab[0] as :var}->referenced_by = :none;
	}
	join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
}

def check_fora(ref as_fora : @nast::fora_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors :
		@tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var fora_arr_type : @tc_types::type = ptd_system::can_delete(check_val(as_fora->array, ref modules, ref vars, ref 
				errors, known_types), ref modules, ref errors);
	if (!ptd_system::is_accepted(fora_arr_type, tct::arr(tct::tct_im()), ref modules, ref errors) &&
			!ptd_system::is_accepted(fora_arr_type, tct::own_arr(tct::empty()), ref modules, ref errors)) {
		add_error(ref errors, 'fora argument should be an array instead of ' . get_print_tct_type_name(fora_arr_type->type));
	}
	if (fora_arr_type->type is :tct_arr) {
		fora_arr_type->type = fora_arr_type->type as :tct_arr;
	} elsif (fora_arr_type->type is :tct_own_arr) {
		fora_arr_type->type = fora_arr_type->type as :tct_own_arr;
	} else {
		fora_arr_type->type = tct::tct_im();
	}
	var vars_op : @tc_types::vars_t = vars;
	add_var_decl_with_type_and_check(ref as_fora->iter, fora_arr_type, ref vars_op, ref errors);
	break_continue_block(ref as_fora->cmd, ref modules, ref vars_op, ref errors, known_types);
	join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
}

def check_while(ref as_while : @nast::while_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors
		: @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var cond_type : @tc_types::type = check_val(as_while->cond, ref modules, ref vars, ref errors, known_types);
	add_error(ref errors, 'while argument should be sim or boolean type insteand of ' . 
			get_print_tct_type_name(cond_type->type))
		unless ptd_system::is_condition_type(cond_type, ref modules, ref errors);
	var vars_op : @tc_types::vars_t = vars;
	break_continue_block(ref as_while->cmd, ref modules, ref vars_op, ref errors, known_types);
	join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
}

def check_rep(ref as_rep : @nast::rep_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors :
		@tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var count_type : @tc_types::type = check_val(as_rep->count, ref modules, ref vars, ref errors, known_types);
	add_error(ref errors, 'rep argument should be a number instead of ' . get_print_tct_type_name(count_type->type))
		unless ptd_system::is_accepted(count_type, tct::int(), ref modules, ref errors);
	var vars_op : @tc_types::vars_t = vars;
	add_var_decl_with_type_and_check(ref as_rep->iter, {type => tct::int(), src => :speculation}, ref vars_op, ref errors);
	break_continue_block(ref as_rep->cmd, ref modules, ref vars_op, ref errors, known_types);
	join_vars(ref vars, vars_op, ref modules, ref errors, known_types);
}

def check_match(ref as_match : @nast::match_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors
		: @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	var val_type : @tc_types::type = ptd_system::can_delete(check_val(as_match->val, ref modules, ref vars, ref errors, known_types), 
			ref modules, ref errors);
	var branches : ptd::arr(@nast::match_branch_t) = as_match->branch_list;
	var type_is_match : ptd::bool() = false;
	var branch_var_types : ptd::hash(@tct::meta_type) = {};
	var variants : ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})) = {};
	if (!ptd_system::is_accepted(val_type, tct::var({}), ref modules, ref errors) &&
			!ptd_system::is_accepted(val_type, tct::own_var({}), ref modules, ref errors)) {
		add_error(ref errors, 'wrong type used as match argument: ' . get_print_tct_type_name(val_type->type));
	}
	if (val_type->type is :tct_var || val_type->type is :tct_own_var) {
		if (val_type->type is :tct_var) {
			variants = val_type->type as :tct_var;
		} else {
			variants = val_type->type as :tct_own_var;
		}
		var used_variants : ptd::hash(ptd::bool()) = {};
		fora var branch (branches) {
			var variant_name : ptd::string() = branch->variant->name;
			if (!hash::has_key(variants, variant_name)) {
				add_error(ref errors, 'variant definition `:' . variant_name . ''' does not exist')
					if is_known(val_type);
				continue;
			}
			hash::set_value(ref used_variants, variant_name, true);
			match (hash::get_value(variants, variant_name)) case :with_param(var param_type) {
				hash::set_value(ref branch_var_types, variant_name, param_type);
			} case :no_param {
			}
		}
		forh var name, var type (variants) {
			if (!hash::has_key(used_variants, name)) {
				add_error(ref errors, 'unchecked match variants: ' . name);
			}
		}
		type_is_match = true;
	}
	var vars_op : @tc_types::vars_t = vars;
	var first = true;
	var hash_b = {};
	rep var i (array::len(branches)) {
		var branch = branches[i];
		var vars_case : @tc_types::vars_t = vars;
		var variant_name : ptd::string() = branch->variant->name;
		add_error(ref errors, 'repeated the case name in match: ' . variant_name)
			if (hash::has_key(hash_b, variant_name));
		hash::set_value(ref hash_b, variant_name, 1);
		match (branch->variant->value) case :value(var var_decl) {
			check_var_decl(var_decl->declaration, ref modules, ref vars_case, ref errors, known_types);
			var branch_var_type : @tct::meta_type;
			if (type_is_match) {
				continue if (!hash::has_key(variants, variant_name));
				if (!hash::has_key(branch_var_types, variant_name)) {
					add_error(ref errors, 'variant `:' . variant_name . ''' should has no param');
					continue;
				}
				branch_var_type = hash::get_value(branch_var_types, variant_name);
			} else {
				branch_var_type = tct::tct_im();
			}
			add_var_decl_to_vars(tct::tct_im(), var_decl->declaration->name, ref vars_case);
			set_type_to_variable(ref vars_case, var_decl->declaration->name, branch_var_type);
			match (var_decl->mod) case :none {
				if (tct::is_own_type(val_type->type, known_types)) {
					add_error(ref errors, 'case param of own variant has to be ref');
				}
			} case :ref {
				if (!tct::is_own_type(val_type->type, known_types)) {
					add_error(ref errors, 'case param of non-own variant cannot be ref');
				}
				vars_case{as_match->val->value as :var}->referenced_by = :variable(var_decl->declaration->name);
			}
		} case :none {
			if (hash::has_key(branch_var_types, variant_name)) {
				add_error(ref errors, 'variant `:' . variant_name . ' should has param');
			}
		}
		check_cmd(ref as_match->branch_list[i]->cmd, ref modules, ref vars_case, ref errors, known_types);
		match (branch->variant->value) case :value(var var_decl) {
			var_decl->declaration->tct_type = vars_case{var_decl->declaration->name}->type;
			as_match->branch_list[i]->variant->value = :value(var_decl);
			hash::delete(ref vars_case, var_decl->declaration->name) unless hash::has_key(vars_op, var_decl->declaration->name);
		} case :none {
		}
		if (as_match->val->value is :var) {
			vars_case{as_match->val->value as :var}->referenced_by = :none;
		}
		if (first) {
			vars_op = vars_case;
		} else {
			join_vars(ref vars_op, vars_case, ref modules, ref errors, known_types);
		}
		first = false;
	}
	vars = vars_op;
}

def check_val(val : @nast::value_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors :
		@tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : @tc_types::type {
	var ret = tc_types::get_default_type();
	match (val->value) case :ternary_op(var ternary_op) {
		var cond_type = check_val(ternary_op->fst, ref modules, ref vars, ref errors, known_types);
		add_error(ref errors, 'ternary op first argument should be sim or boolean type instead of ' . 
				get_print_tct_type_name(cond_type->type))
			unless ptd_system::is_condition_type(cond_type, ref modules, ref errors);
		var rt = check_val(ternary_op->snd, ref modules, ref vars, ref errors, known_types)->type;
		if (rt is :tct_void) {
			ret->type = rt;
		} else {
			var rt2 = check_val(ternary_op->thrd, ref modules, ref vars, ref errors, known_types)->type;
			if (rt2 is :tct_void) {
				ret->type = rt2;
			} else {
				ret->type = ptd_system::cross_type(rt, rt2, ref modules, ref errors, known_types);
			}
		}
	} case :hash_key(var hash_key) {
		ret->type = tct::string();
	} case :nop {
		ret->type = tct::empty();
	} case :parenthesis(var parenthesis) {
		return check_val(parenthesis, ref modules, ref vars, ref errors, known_types);
	} case :variant(var variant) {
		if (variant->name eq 'TRUE' || variant->name eq 'FALSE') {
			ret->type = tct::bool();
			return ret;
		}
		var ret_variants = {};
		if (variant->var->value is :nop) {
			hash::set_value(ref ret_variants, variant->name, tct::none());
		} else {
			var ty = check_val(variant->var, ref modules, ref vars, ref errors, known_types);
			hash::set_value(ref ret_variants, variant->name, ty->type);
			ret->src = ty->src;
		}
		ret->type = tct::var(ret_variants);
	} case :const(var as_const) {
		ret->type = tct::int();
	} case :arr_decl(var arr_decl) {
		if (array::len(arr_decl) == 0) {
			ret->type = tct::arr(tct::empty());
			return ret;
		}
		var types : ptd::arr(@tc_types::type) = [];
		fora var dec (arr_decl) {
			var t = check_val(dec, ref modules, ref vars, ref errors, known_types);
			array::push(ref types, t);
		}
		var rt = types[0]->type;
		for(var i = 1; i < array::len(types); ++i) {
			rt = ptd_system::cross_type(rt, types[i]->type, ref modules, ref errors, known_types);
		}
		ret->type = tct::arr(rt);
	} case :hash_decl(var hash_decl) {
		var rt = {};
		fora var el (hash_decl) {
			var label = el->key->value as :hash_key;
			var ty = check_val(el->val, ref modules, ref vars, ref errors, known_types);
			hash::set_value(ref rt, label, ty);
		}
		var retur = {};
		forh var key, var ty (rt) {
			hash::set_value(ref retur, key, ty->type);
		}
		ret->type = tct::rec(retur);
	} case :var(var variable_name) {
		if (!hash::has_key(vars, variable_name)) {
			add_error(ref errors, 'variable ''' . variable_name . ''' does not exist');
			return ret;
		}
		var var_ = hash::get_value(vars, variable_name);
		match (var_->referenced_by) case :variable(var name){
			add_error(ref errors, 'variable ''' . variable_name . ''' cannot be accessed, because it is referenced by ''' . name . '''');
			return ret;
		} case :none {
		}
		match (var_->overwrited) case :yes {
			return {type => var_->type, src => :speculation};
		} case :no {
			return {type => var_->type, src => :known};
		}
	} case :bin_op(var bin_op) {
		return get_type_from_bin_op_and_check(bin_op, ref modules, ref vars, ref errors, known_types);
	} case :unary_op(var unary_op) {
		var type = check_val(unary_op->val, ref modules, ref vars, ref errors, known_types);
		if (unary_op->op eq '!') {
			if (!ptd_system::is_condition_type(type, ref modules, ref errors)) {
				add_error(ref errors, 'incorrect type of argument operator ''!'' : ' . 
					get_print_tct_type_name(type->type));
			}
			ret->type = tct::bool();
			return ret;
		} elsif (unary_op->op eq '@') {
			if (!ptd_system::is_accepted(type, tct::func(), ref modules, ref errors)) {
				add_error(ref errors, 'incorrect type of argument operator ''' . unary_op->op . ''' : ' . 
					get_print_tct_type_name(type->type));
			}
			ret->type = tct::var({ref => tct::func()});
			return ret;
		} elsif (unary_op->op eq '--' || unary_op->op eq '++') {
			return unary_op_dec_inc(unary_op->val, 'incorrect type of argument operator ''' . unary_op->op . ''' : ', 
					ref modules, ref vars, ref errors, known_types);
		} else {
			if (!ptd_system::is_accepted(type, tct::int(), ref modules, ref errors)) {
				add_error(ref errors, 'incorrect type of argument operator ''' . unary_op->op . ''' : ' . 
					get_print_tct_type_name(type->type));
			}
		}
		ret->type = tct::int();
	} case :fun_label(var fun_label) {
		return ret unless check_function_exists(fun_label->module, fun_label->name, ref modules, ref errors);
		if (takes_own_arg(get_function(fun_label->module, fun_label->name, ref modules), known_types)) {
			add_error(ref errors, 'cannot reference functions which takes own argument');
		}
		ret->type = tct::func();
	} case :fun_val(var fun_val) {
		ret = check_fun_val(fun_val, ref modules, ref vars, ref errors, known_types);
	} case :string(var str) {
		ret->type = tct::string();
	} case :post_inc(var inc) {
		return unary_op_dec_inc(inc, 'wrong type in post increment : ', ref modules, ref vars, ref errors, known_types);
	} case :post_dec(var dec) {
		return unary_op_dec_inc(dec, 'wrong type in post decrement : ', ref modules, ref vars, ref errors, known_types);
	}
	return ret;
}


def check_fun_val(fun_val : @nast::fun_val_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, 
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type))  : @tc_types::type {
	var ret = tc_types::get_default_type();
	var args_values_types : ptd::arr(@tc_types::type) = [];
	fora var fun_val_arg (fun_val->args) {
		array::push(ref args_values_types, check_val(fun_val_arg->val, ref modules, ref vars, ref errors, known_types));
	}
	var fun_def : @tc_types::def_fun_t = get_special_function_def(fun_val->module, fun_val->name);
	var is_spec = false;
	match (fun_def->access) case :pub {
		is_spec = true;
		if (!hash::has_key(modules->imports, fun_val->module)) {
			add_error(ref errors, 'module ''' . fun_val->module . ''' not imported');
			hash::set_value(ref modules->imports, fun_val->module, false);
		}
	} case :priv {
		return ret unless check_function_exists(fun_val->module, fun_val->name, ref modules, ref errors);
		fun_def = get_function_def(fun_val->module, fun_val->name, modules);
	}
	if (array::len(fun_val->args) != array::len(fun_def->args)) {
		add_error(ref errors, 'wrong number ' .
			ptd::int_to_string(array::len(fun_val->args)) .
			' of function arguments : ' . 
			get_function_name(fun_val->module, fun_val->name));
		return ret;
	}
	var prev_ref = {};
	rep var i (array::len(fun_val->args)) {
		var fun_val_arg : @nast::fun_val_arg_t = fun_val->args[i];
		var fun_def_arg : @tc_types::fun_arg_t = fun_def->args[i];
		add_error(ref errors, 'arg no. ' . ptd::int_to_string(i + 1) .
				' ''' . fun_def_arg->name . 
				''' ref mismatched with function prototype')
			unless 
			enum::eq(fun_def_arg->mod, fun_val_arg->mod) || 
			(enum::eq(fun_def_arg->mod, :fun) && enum::eq(fun_val_arg->mod, :none));
		var check_info;
		if (is_spec) {
			var ist = args_values_types[i];
			ist->src = :speculation;
			check_info = ptd_system::is_accepted_info(ist, fun_def_arg->type, ref modules, ref errors);
		} else {
			if (fun_def_arg->mod is :ref) {
				var err_len = array::len(errors->errors);
				var var_tab = rec_get_var_from_lval(fun_val_arg->val, ref errors);
				if (err_len == array::len(errors->errors)) {
					var var_name = var_tab[0] as :var;
					if (hash::has_key(prev_ref, var_name)) {
						if(tct::is_own_type(vars{var_name}->type, known_types)) {
							add_error(ref errors, 'many ref-arguments come from the same own-type variable: ' . var_name);
						} else {
							add_warning(ref errors, 'many ref-arguments come from the same variable: ' . var_name);
						}
					}
					hash::set_value(ref prev_ref, var_name, 0);
					set_type_to_lval(fun_val_arg->val, args_values_types[i], 
						{type => fun_def_arg->type, src => :known}, ref modules, ref vars, ref errors, known_types);
				}
			}
			check_info = ptd_system::check_assignment(fun_def_arg->type, args_values_types[i], ref modules, ref 
					errors);
		}
		if (check_info is :err) {
			add_error(ref errors, 'In function call: ' . get_function_name(fun_val->module, fun_val->name) . 
				' argument no.' . ptd::int_to_string(i + 1) .
				' ''' . fun_def_arg->name . ''' has invalid type: ' . 
				get_print_check_info(check_info));
		}
	}
	return check_special_function({type => fun_def->ret_type, src => :known}, fun_val, args_values_types, ref modules, 
			ref vars, ref errors, known_types);
}

def unary_op_dec_inc(type : @nast::value_t, err_str : ptd::string(), ref modules : @tc_types::modules_t, ref vars : 
		@tc_types::vars_t, ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : @tc_types::type {
	var vtype = check_val(type, ref modules, ref vars, ref errors, known_types);
	if (!ptd_system::is_accepted(vtype, tct::int(), ref modules, ref errors)) {
		add_error(ref errors, err_str . get_print_tct_type_name(vtype->type));
	}
	vtype->type = tct::int();
	var err_left_len = array::len(errors->errors);
	var left_type : @tc_types::type = get_type_left_side_equation(type, ref modules, ref vars, ref errors, known_types);
	if (array::len(errors->errors) - err_left_len > 0){
		return left_type;
	}
	return set_type_to_lval(type, left_type, vtype, ref modules, ref vars, ref errors, known_types);
}

def get_special_functions() : @tc_types::special_functions {
	var f : @tc_types::special_functions = {};
	hash::set_value(ref f, 'ptd::ensure', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::tct_im(), name => ''}, {mod => :none, type => tct::tct_im(), name => ''}]
		});
	# hash::set_value(ref f, 'ptd::try_cast', {
	# 		r => tct::var({ok => :tct_var_none, err => :tct_var_none}),
	# 		a => [{mod => :none, type => tct::tct_im(), name => ''}, {mod => :none, type => tct::tct_im(), name => ''}]
	# 	});
	hash::set_value(ref f, 'ptd::ensure_only_static_do_not_touch_without_permission', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::tct_im(), name => ''}, {mod => :none, type => tct::tct_im(), name => ''}]
		});
	hash::set_value(ref f, 'ptd::int_to_string', {
			r => tct::string(),
			a => [{mod => :none, type => tct::int(), name => ''}]
	});
	hash::set_value(ref f, 'array::push', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''}
			]
		});
	hash::set_value(ref f, 'array::insert', {
		r => tct::void(),
		a => [
			{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
			{mod => :none, type => tct::int(), name => ''},
			{mod => :none, type => tct::tct_im(), name => ''},
		]
	});
	hash::set_value(ref f, 'array::remove', {
		r => tct::void(),
		a => [
			{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
			{mod => :none, type => tct::int(), name => ''},
		]
	});


	hash::set_value(ref f, 'array::subarray', {
			r => tct::arr(tct::tct_im()),
			a => [
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::int(), name => ''},
				{mod => :none, type => tct::int(), name => ''}
			]
		});
	hash::set_value(ref f, 'array::join', {
			r => tct::string(),
			a => [
				{mod => :none, type => tct::string(), name => ''},
				{mod => :none, type => tct::arr(tct::string()), name => ''}
			]
		});
	hash::set_value(ref f, 'array::append', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''}
			]
		});
	hash::set_value(ref f, 'array::len', {
			r => tct::int(),
			a => [{mod => :none, type => tct::arr(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'array::sort', {
			r => tct::void(),
			a => [{mod => :ref, type => tct::tct_im(), name => ''}]
		});
	hash::set_value(ref f, 'array::pop', {
			r => tct::void(),
			a => [{mod => :ref, type => tct::arr(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'array::equal', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''}
			]
		});
	hash::set_value(ref f, 'array::part_sort', {
			r => tct::void(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'own_array::len', {
			r => tct::int(),
			a => [
				{mod => :ref, type => tct::own_arr(tct::empty()), name => ''},
			]
		});
	hash::set_value(ref f, 'hash::set_value', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::string(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::get_value', {
			r => tct::tct_im(),
			a => [
				{mod => :none, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::string(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::has_key', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::string(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::delete', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::string(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::size', {
			r => tct::int(),
			a => [{mod => :none, type => tct::hash(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'hash::values', {
			r => tct::arr(tct::tct_im()),
			a => [{mod => :none, type => tct::hash(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'hash::keys', {
			r => tct::arr(tct::string()),
			a => [{mod => :none, type => tct::hash(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'hash::add_all', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::hash(tct::tct_im()), name => ''},
			]
		});
	hash::set_value(ref f, 'ov::is', {
			r => tct::bool(),
			a => [{mod => :none, type => tct::var({}), name => ''}, {mod => :none, type => tct::string(), name => ''}]
		});
	hash::set_value(ref f, 'ov::as', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::var({}), name => ''}, {mod => :none, type => tct::string(), name => ''}]
		});
	hash::set_value(ref f, 'dfile::ssave', {r => tct::string(), a => [{mod => :none, type => tct::tct_im(), name => ''}]});
	hash::set_value(ref f, 'string::lf', {r => tct::string(), a => []});
	hash::set_value(ref f, 'string::length', {r => tct::int(), a => [{mod => :none, type => tct::string(), name => ''}]});
	hash::set_value(ref f, 'string::substr', {
			r => tct::string(),
			a => [
				{mod => :none, type => tct::string(), name => ''},
				{mod => :none, type => tct::int(), name => ''},
				{mod => :none, type => tct::int(), name => ''}
			]
		});
	hash::set_value(ref f, 'string::replace', {
			r => tct::string(),
			a => [
				{mod => :none, type => tct::string(), name => ''},
				{mod => :none, type => tct::string(), name => ''},
				{mod => :none, type => tct::string(), name => ''}
			]
		});
	hash::set_value(ref f, 'string::chr', {r => tct::string(), a => [{mod => :none, type => tct::int(), name => ''}]});
	hash::set_value(ref f, 'string::ord', {r => tct::int(), a => [{mod => :none, type => tct::string(), name => ''}]});
	hash::set_value(ref f, 'string::is_letter', {r => tct::bool(), a => [{mod => :none, type => tct::string(), name => ''}]});
	hash::set_value(ref f, 'string::is_digit', {r => tct::bool(), a => [{mod => :none, type => tct::string(), name => ''}]});
	hash::set_value(ref f, 'string::split', {
			r => tct::arr(tct::string()),
			a => [{mod => :none, type => tct::string(), name => ''}, {mod => :none, type => tct::string(), name => ''}]
		});
	hash::set_value(ref f, 'string::to_array', {
			r => tct::arr(tct::string()),
			a => [{mod => :none, type => tct::string(), name => ''}]
		});
	hash::set_value(ref f, 'c_std_lib::fast_substr', {
			r => tct::string(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''}
			]
		});
	hash::set_value(ref f, 'c_std_lib::int_to_string', {
			r => tct::string(),
			a => [
				{mod => :none, type => tct::int(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::array_sub', {
			r => tct::arr(tct::tct_im()),
			a => [
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::int(), name => ''},
				{mod => :none, type => tct::int(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::array_len', {
			r => tct::int(),
			a => [
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::is_sim', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::is_array', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::is_hash', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::is_variant', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::string_compare', {
			r => tct::int(),
			a => [
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::hash_has_key', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_std_lib::hash_size', {
			r => tct::int(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::ov_is', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::priv_is', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::is_end_hash', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::get_ref_arr', {
			r => tct::tct_im(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::int(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::set_ref_arr', {
			r => tct::tct_im(),
			a => [
				{mod => :ref, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::int(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::array_len', {
			r => tct::int(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::is_sim', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::is_array', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::is_hash', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_rt_lib::is_variant', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_olympic_io::print', {
			r => tct::void(),
			a => [
				{mod => :none, type => tct::string(), name => ''},
			]
		});
	hash::set_value(ref f, 'c_olympic_io::readln', {
			r => tct::string(),
			a => [
			]
		});
	hash::set_value(ref f, 'c_olympic_io::read_int', {
			r => tct::int(),
			a => [
			]
		});
	hash::set_value(ref f, 'c_singleton::sigleton_do_not_use_without_approval', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::tct_im(), name => ''}]
		});
	return singleton::sigleton_do_not_use_without_approval(f);
}

def get_special_function_def(module : ptd::string(), name : ptd::string()) : @tc_types::def_fun_t {
	var f = get_special_functions();
	var ret : @tc_types::def_fun_t = {
			cmd => {debug => nast::empty_debug(), cmd => :nop},
			is_type => :no,
			ref_types => :no,
			name => name,
			module => module,
			access => :pub,
			args => [],
			ret_type => tct::empty()
		};
	name = get_function_name(module, name);
	if (hash::has_key(f, name)) {
		var t = hash::get_value(f, name);
		ret->args = t->a;
		ret->ret_type = t->r;
	} else {
		ret->access = :priv;
	}
	return ret;
}

def check_special_function(ret_type : @tc_types::type, fun_val : @nast::fun_val_t, fun_val_type : ptd::arr(
		@tc_types::type), ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : 
	@tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : @tc_types::type {
	var name = get_function_name(fun_val->module, fun_val->name);
	if (name eq 'ptd::ensure' || name eq 'ptd::ensure_only_static_do_not_touch_without_permission') {
		match (ptd_parser::try_value_to_ptd(fun_val->args[0]->val)) case :err(var err) {
			add_error(ref errors, err);
			ret_type->type = tct::tct_im();
		} case :ok(var ok) {
			var check_info = ptd_system::cast_type(ok, fun_val_type[1], ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'this casting of type cannot be correct: ' . get_print_check_info(check_info));
			}
			ret_type->type = ok;
			check_types_imported(ok, ref modules, ref errors);
		}
	}
	if (name eq 'own::to_im') {
		var type : @tc_types::type = fun_val_type[0];
		if (!tct::is_own_type(type->type, known_types)) {
			add_error(ref errors, 'own::to_im takes only own arguments');
		}
		ret_type->src = type->src;
		ret_type->type = tct::own_type_to_ptd(type->type, known_types);
	}
	if (name eq 'ptd::try_cast') {
		match (ptd_parser::try_value_to_ptd(fun_val->args[0]->val)) case :err(var err) {
			add_error(ref errors, err);
			ret_type->type = tct::tct_im();
		} case :ok(var ok) {
			return ret_type unless check_function_exists(fun_val->module, fun_val->name, ref modules, ref errors);
			var fun_def = get_function_def(fun_val->module, fun_val->name, modules);
			var ok_err_var = {type => fun_def->ret_type, src=> :known};
			ret_type->type = ptd_system::can_delete(ok_err_var, ref modules, ref errors)->type;
			if(ptd_system::is_try_ensure_type(ret_type, ref modules, ref errors)){
				ensure var err_type = tct::try_var_as_case(ret_type->type, 'err');
				ret_type->type = tct::var({ok => ok, err => err_type});
			} else {
				add_error(ref errors, 'function ptd::try_cast must return variant: ok, err ');
			}
			check_types_imported(ok, ref modules, ref errors);
		}
	}
	if (name eq 'array::push') {
		fun_val_type[1]->type = tct::arr(fun_val_type[1]->type);
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[1], tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors, known_types);
	}
	if (name eq 'array::insert') {
		fun_val_type[2]->type = tct::arr(fun_val_type[2]->type);
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[2], tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors, known_types);
	}
	if (name eq 'array::append') {
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[1], tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors, known_types);
	}
	if (name eq 'array::subarray') {
		return fun_val_type[0];
	}
	if (name eq 'hash::set_value') {
		fun_val_type[2]->type = tct::hash(fun_val_type[2]->type);
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[2], tct::rec({}), ref modules, ref 
			vars, ref errors, known_types);
	}
	if (name eq 'hash::delete') {
		var type = ptd_system::can_delete(fun_val_type[0], ref modules, ref errors);
		if (type->type is :tct_rec) {
			var cross = type;
			cross->type = ptd_system::cross_type(tct::hash(tct::empty()), type->type, ref modules, ref errors, known_types);
			set_type_to_lval_spec(fun_val->args[0]->val, type, cross, tct::rec({}), ref modules, ref vars, ref errors, known_types);
		}
	}
	if (name eq 'hash::get_value') {
		var type = ptd_system::can_delete(fun_val_type[0], ref modules, ref errors);
		ret_type->src = type->src;
		ret_type->type = type->type as :tct_hash if type->type is :tct_hash;
	}
	if (name eq 'hash::values') {
		var type = ptd_system::can_delete(fun_val_type[0], ref modules, ref errors);
		ret_type->src = type->src;
		ret_type->type = tct::arr(type->type as :tct_hash) if type->type is :tct_hash;
	}
	if (name eq 'hash::add_all') {
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[1], tct::rec({}), ref modules, ref 
			vars, ref errors, known_types);
	}
	
	if (name eq 'ov::as') {
		ptd_system::check_assignment(tct::tct_im(), fun_val_type[0], ref modules, ref errors);
	}
	if (name eq 'dfile::ssave') {
		ptd_system::check_assignment(tct::tct_im(), fun_val_type[0], ref modules, ref errors);
	}
	if (name eq 'singleton::sigleton_do_not_use_without_approval') {
		return fun_val_type[0];
	}
	return ret_type;
}

def rec_get_var_from_lval(lval : @nast::value_t, ref errors : @tc_types::errors_t) : @tc_types::lval_path {
	var a : @tc_types::lval_path = [];
	if (lval->value is :var) {
		array::push(ref a, :var(lval->value as :var));
	} elsif (lval->value is :bin_op) {
		var bin_op = lval->value as :bin_op;
		if (bin_op->op eq '->') {
			a = rec_get_var_from_lval(bin_op->left, ref errors);
			array::push(ref a, :rec(bin_op->right->value as :hash_key));
		} elsif (bin_op->op eq 'ARRAY_INDEX') {
			a = rec_get_var_from_lval(bin_op->left, ref errors);
			array::push(ref a, :arr);
		} elsif (bin_op->op eq 'HASH_INDEX') {
			a = rec_get_var_from_lval(bin_op->left, ref errors);
			array::push(ref a, :hashkey);
		} elsif (bin_op->op eq 'OV_AS') {
			var right_val = bin_op->right->value as :hash_key;
			a = rec_get_var_from_lval(bin_op->left, ref errors);
			a []= :variant(right_val);
		} else {
			add_error(ref errors, 'invalid operator ' . (bin_op->op) . ' used in lvalue');
		}
	} elsif (lval->value is :parenthesis) {
		a = rec_get_var_from_lval(lval->value as :parenthesis, ref errors);
	} else {
		add_error(ref errors, 'invalid type for lvalue');
	}
	return a;
}

def mk_new_type_lval(var_tab : @tc_types::lval_path, rtype : @tc_types::type, ltype : @tc_types::type, empty_type : 
		@tct::meta_type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t,
	known_types : ptd::hash(@tct::meta_type)) : @tct::meta_type {
	var_tab = array::subarray(var_tab, 1, array::len(var_tab) - 1);
	if (array::len(var_tab) == 0) {
		if (is_known(ltype)) {
			var check_info = ptd_system::check_assignment(ltype->type, rtype, ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'invalid type in assignment: ' . get_print_check_info(check_info));
			}
			return ltype->type;
		} else {
			ptd_system::check_assignment(tct::tct_im(), rtype, ref modules, ref errors);
			ltype = ptd_system::can_create(ltype, ref modules, ref errors);
			return rtype->type if ptd_system::is_equal(ltype->type, empty_type);
			return ptd_system::cross_type(ltype->type, rtype->type, ref modules, ref errors, known_types);
		}
	} else {
		ltype = ptd_system::can_create(ltype, ref modules, ref errors);
		match (var_tab[0]) case :var(var name) {
			die(var_tab);
		} case :arr {
			return tct::tct_im() unless ltype->type is :tct_arr;
			ltype->type = ltype->type as :tct_arr;
			return tct::arr(mk_new_type_lval(var_tab, rtype, ltype, empty_type, ref modules, ref errors, known_types));
		} case :hashkey {
			return tct::tct_im() unless ltype->type is :tct_hash;
			ltype->type = ltype->type as :tct_hash;
			return tct::hash(mk_new_type_lval(var_tab, rtype, ltype, empty_type, ref modules, ref errors, known_types));
		} case :rec(var name) {
			return tct::tct_im() unless ltype->type is :tct_rec;
			var tt : ptd::hash(@tct::meta_type) = ltype->type as :tct_rec;
			if (hash::has_key(tt, name)) {
				ltype->type = hash::get_value(tt, name);
				hash::set_value(ref tt, name, mk_new_type_lval(var_tab, rtype, ltype, empty_type, ref modules, ref 
						errors, known_types));
			} else {
				if (array::len(var_tab) != 1) {
					return tct::tct_im();
				}
				ptd_system::check_assignment(tct::tct_im(), rtype, ref modules, ref errors);
				hash::set_value(ref tt, name, rtype->type);
			}
			return tct::rec(tt);
		} case :variant(var label) {
			return tct::tct_im() unless ltype->type is :tct_var;
			var variant = ltype->type as :tct_var;
			if (hash::has_key(variant, label)) {
				ltype->type = (ltype->type as :tct_var){label} as :with_param;
				hash::set_value(ref variant, label, mk_new_type_lval(var_tab, rtype, ltype, empty_type, ref modules, ref 
						errors, known_types));
			} else {
				if (array::len(var_tab) != 1) {
					return tct::tct_im();
				}
				ptd_system::check_assignment(tct::tct_im(), rtype, ref modules, ref errors);
				variant{label} = rtype->type;
			}
			return tct::var(variant);
		}
	}
}

def set_type_to_lval(lval : @nast::value_t, ltype : @tc_types::type, rtype : @tc_types::type, ref modules : 
		@tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : @tc_types::errors_t,
	known_types : ptd::hash(@tct::meta_type)) : @tc_types::type {
	var empty_type = ptd_system::can_delete(ltype, ref modules, ref errors);
	return set_type_to_lval_spec(lval, ltype, rtype, empty_type->type, ref modules, ref vars, ref errors, known_types);
}

def set_type_to_lval_spec(lval : @nast::value_t, ltype : @tc_types::type, rtype : @tc_types::type, empty_type : 
		@tct::meta_type, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : @tc_types::errors_t,
	known_types : ptd::hash(@tct::meta_type)) 
	: @tc_types::type {
	var err_len = array::len(errors->errors);
	var var_tab = rec_get_var_from_lval(lval, ref errors);
	return ltype if (err_len != array::len(errors->errors));
	var var_name = var_tab[0] as :var;
	if (!hash::has_key(vars, var_name)) {
		add_error(ref errors, 'variable ' . var_name . ' does not exist');
		return ltype;
	}
	var var_ = hash::get_value(vars, var_name);
	match (var_->overwrited) case :yes {
		var new_type = mk_new_type_lval(var_tab, rtype, {type => var_->type, src => :speculation}, empty_type, ref 
				modules, ref errors, known_types);
		set_type_to_variable(ref vars, var_name, new_type);
		return rtype;
	} case :no {
		mk_new_type_lval(var_tab, rtype, {type => var_->type, src => :known}, empty_type, ref modules, ref errors, known_types);
		return ltype;
	}
}

def get_type_left_side_equation(left : @nast::value_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, 
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : @tc_types::type {
	if (left->value is :bin_op && (left->value as :bin_op)->op eq '->') {
		return get_type_record_key(left->value as :bin_op, ref modules, ref vars, ref errors, known_types);
	} else {
		return check_val(left, ref modules, ref vars, ref errors, known_types);
	}
}

def get_type_record_key(bin_op : @nast::bin_op_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref 
		errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : @tc_types::type {
	var left_type = check_val(bin_op->left, ref modules, ref vars, ref errors, known_types);
	left_type = ptd_system::can_delete(left_type, ref modules, ref errors);
	if (left_type->type is :tct_rec) {
		var fields = left_type->type as :tct_rec;
		var field = bin_op->right->value as :hash_key;
		if (!hash::has_key(fields, field)) {
			add_error(ref errors, 'unknown record key: ' . field) if is_known(left_type);
			left_type->type = tct::tct_im();
			return left_type;
		}
		left_type->type = hash::get_value(fields, field);
		return left_type;
	}
	if (left_type->type is :tct_own_rec) {
		var fields = left_type->type as :tct_own_rec;
		var field = bin_op->right->value as :hash_key;
		if (!hash::has_key(fields, field)) {
			add_error(ref errors, 'unknown record key: ' . field) if is_known(left_type);
			left_type->type = tct::tct_im();
			return left_type;
		}
		left_type->type = hash::get_value(fields, field);
		return left_type;
	}
	if (left_type->type is :tct_hash) {
		left_type->type = left_type->type as :tct_hash;
		return left_type;
	}
	if (left_type->type is :tct_own_hash) {
		left_type->type = left_type->type as :tct_own_hash;
		return left_type;
	}
	if (!ptd_system::is_accepted(left_type, tct::rec({}), ref modules, ref errors)
			&& !ptd_system::is_accepted(left_type, tct::own_rec({}), ref modules, ref errors)) {
		add_error(ref errors, 'binary operator -> can be applied only to record : ' . 
			get_print_tct_type_name(left_type->type));
	}
	left_type->type = tct::tct_im();
	return left_type;
}

def get_type_from_bin_op_and_check(bin_op : @nast::bin_op_t, ref modules : @tc_types::modules_t, ref vars : 
		@tc_types::vars_t, ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : @tc_types::type {
	var op : ptd::string() = bin_op->op;
	var right_type : @tc_types::type = check_val(bin_op->right, ref modules, ref vars, ref errors, known_types);
	if (op eq '=') {
		if (right_type->type is :tct_void) {
			add_error(ref errors, 'cannot use ''void'' type returned from function as value');
			return {type => tct::tct_im(), src => :speculation};
		}
		var err_left_len = array::len(errors->errors);
		var left_type : @tc_types::type = get_type_left_side_equation(bin_op->left, ref modules, ref vars, ref errors, known_types);
		left_type->type = ptd_system::cross_type(left_type->type, right_type->type, ref modules, ref errors, known_types);
		return left_type if (array::len(errors->errors) - err_left_len > 0);
		return set_type_to_lval(bin_op->left, left_type, right_type, ref modules, ref vars, ref errors, known_types);
	}
	var left_type2 : @tc_types::type = ptd_system::can_delete(check_val(bin_op->left, ref modules, ref vars, ref errors, known_types), 
			ref modules, ref errors);
	var ret_type = {type => tct::tct_im(), src => left_type2->src};
	if (op eq '->') {
		return get_type_record_key(bin_op, ref modules, ref vars, ref errors, known_types);
	}
	if (op eq 'ARRAY_INDEX') {
		if (!ptd_system::is_accepted(left_type2, tct::arr(tct::tct_im()), ref modules, ref errors) &&
				!ptd_system::is_accepted(left_type2, tct::own_arr(tct::tct_im()), ref modules, ref errors)) {
			add_error(ref errors, 'array operator ''[]'' can be applied only to array, not for: '.
				get_print_tct_type_name(left_type2->type));
			return ret_type;
		}
		if (!ptd_system::is_accepted(right_type, tct::int(), ref modules, ref errors)) {
			add_error(ref errors, 'array index should be number');
		}
		left_type2->type = left_type2->type as :tct_arr if left_type2->type is :tct_arr;
		left_type2->type = left_type2->type as :tct_own_arr if left_type2->type is :tct_own_arr;
		return left_type2;
	}
	if (op eq 'HASH_INDEX') {
		if (!ptd_system::is_accepted(left_type2, tct::hash(tct::tct_im()), ref modules, ref errors) &&
			!ptd_system::is_accepted(left_type2, tct::own_hash(tct::empty()), ref modules, ref errors)) {
			add_error(ref errors, 'hash operator ''{}'' can be applied only to hash');
			return ret_type;
		}
		if (!ptd_system::is_accepted(right_type, tct::string(), ref modules, ref errors)) {
			add_error(ref errors, 'hash index should be string');
		}
		left_type2->type = left_type2->type as :tct_hash if left_type2->type is :tct_hash;
		left_type2->type = left_type2->type as :tct_own_hash if left_type2->type is :tct_own_hash;
		return left_type2;
	}
	if (op eq '[]=') {
		if (!ptd_system::is_accepted(left_type2, tct::arr(tct::tct_im()), ref modules, ref errors) &&
				!ptd_system::is_accepted(left_type2, tct::own_arr(tct::tct_im()), ref modules, ref errors)) {
			add_error(ref errors, 'array operator ''[]='' can be applied only to array');
			return ret_type;
		}
		right_type->type = tct::arr(right_type->type);
		set_type_to_lval_spec(bin_op->left, left_type2, right_type, tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors, known_types);
		left_type2->type = left_type2->type as :tct_arr if left_type2->type is :tct_arr;
		return left_type2;

	}
	if (op eq 'OV_AS') {
		ret_type = {type => tct::tct_im(), src => left_type2->src};
		if (ptd_system::is_accepted(left_type2, tct::var({}), ref modules, ref errors) ||
				ptd_system::is_accepted(left_type2, tct::own_var({}), ref modules, ref errors)) {
			var variants;
			if (left_type2->type is :tct_var) {
				variants = left_type2->type as :tct_var;
			} elsif (left_type2->type is :tct_own_var) {
				variants = left_type2->type as :tct_own_var;
			} else {
				return ret_type;
			}
			var right_val = bin_op->right->value as :hash_key;
			if (!hash::has_key(variants, right_val)) {
				add_error(ref errors, 'case ' . right_val . ' doesn''t exist is: ' . 
					get_print_tct_type_name(left_type2->type));
				return ret_type;
			}
			var t = hash::get_value(variants, right_val);
			match (t) case :with_param(var sub_type) {
				ret_type->type = sub_type;
			} case :no_param {
				add_error(ref errors, 'case ' . right_val . ' don''t have value: ' . 
					get_print_tct_type_name(left_type2->type));
			}
			return ret_type;
		} else {
			add_error(ref errors, 'binary operator ''as/is'' can be applied only to variant: ' . 
				get_print_tct_type_name(left_type2->type));
			return ret_type;
		}
	}
	if (op eq 'OV_IS') {
		ret_type = {type => tct::bool(), src => :speculation};
		if (ptd_system::is_accepted(left_type2, tct::var({}), ref modules, ref errors) ||
				ptd_system::is_accepted(left_type2, tct::own_var({}), ref modules, ref errors)) {
			return ret_type unless left_type2->type is :tct_var;
			var variants = left_type2->type as :tct_var;
			var right_val = bin_op->right->value as :hash_key;
			if (!hash::has_key(variants, right_val)) {
				add_error(ref errors, 'case ' . right_val . ' doesn''t exist is: ' . 
					get_print_tct_type_name(left_type2->type));
				return ret_type;
			}
			return ret_type;
		} else {
			add_error(ref errors, 'binary operator ''as/is'' can be applied only to variant: ' . 
				get_print_tct_type_name(left_type2->type));
			return ret_type;
		}
	}
	var op_def2 = tc_types::get_bin_op_def(op);
	if (!ptd_system::is_accepted(left_type2, op_def2->arg1, ref modules, ref errors)) {
		add_error(ref errors, 'incorrect type of the first argument operator ''' . op . ''': ' .
			get_print_tct_type_name(left_type2->type));
	} elsif(bin_op->left->value is :var) {
		vars{bin_op->left->value as :var}->type = op_def2->arg1;
	}
	if (!ptd_system::is_accepted(right_type, op_def2->arg2, ref modules, ref errors)) {
		add_error(ref errors, 'incorrect type of the second argument operator ''' . op . ''': ' . 
			get_print_tct_type_name(right_type->type));
	} elsif(bin_op->right->value is :var) {
		vars{bin_op->right->value as :var}->type = op_def2->arg2;
	}
	return {type => op_def2->ret, src => :speculation};
}

def get_print_tct_type_name(type : @tct::meta_type) : ptd::string() {
	match (type) case :tct_empty {
		return '';
	} case :tct_im {
		return 'ptd::ptd_im()';
	} case :tct_void {
		return 'ptd::void()';
	} case :tct_sim {
		return 'ptd::string()';
	} case :tct_int {
		return 'ptd::int()';
	} case :tct_string {
		return 'ptd::string()';
	} case :tct_bool {
		return 'ptd::bool()';
	} case :tct_ref(var ref_name) {
		return '@' . ref_name;
	} case :tct_arr(var arr) {
		return 'ptd::arr(' . get_print_tct_type_name(arr) . ')';
	} case :tct_own_arr(var arr) {
		return 'own::arr(' . get_print_tct_type_name(arr) . ')';
	} case :tct_var(var variants) {
		var ret = 'ptd::var(';
		forh var field, var tt (variants) {
			match (tt) case :with_param(var typ) {
				ret .= field . ' => ' . get_print_tct_type_name(typ) . ', ';
			} case :no_param {
				ret .= field . ', ';
			}
		}
		return ret . ')';
	} case :tct_own_var(var variants) {
		var ret = 'own::var(';
		forh var field, var tt (variants) {
			match (tt) case :with_param(var typ) {
				ret .= field . ' => ' . get_print_tct_type_name(typ) . ', ';
			} case :no_param {
				ret .= field . ', ';
			}
		}
		return ret . ')';
	} case :tct_rec(var recs) {
		var ret = 'ptd::rec(';
		forh var field, var tt (recs) {
			ret .= field . ' => ' . get_print_tct_type_name(tt) . ', ';
		}
		return ret . ')';
	} case :tct_own_rec(var recs) {
		var ret = 'own::rec(';
		forh var field, var tt (recs) {
			ret .= field . ' => ' . get_print_tct_type_name(tt) . ', ';
		}
		return ret . ')';

	} case :tct_hash(var hash) {
		return 'ptd::hash(' . get_print_tct_type_name(hash) . ')';
	} case :tct_own_hash(var hash) {
		return 'own::hash(' . get_print_tct_type_name(hash) . ')';
	}
}

def get_print_tct_label(type : @tct::meta_type) : ptd::string() {
	match (type) case :tct_empty {
		return 'ptd::ptd_empty';
	} case :tct_im {
		return 'ptd::ptd_im';
	} case :tct_void {
		return 'ptd::void';
	} case :tct_sim {
		return 'ptd::string';
	} case :tct_int {
		return 'ptd::int';
	} case :tct_string {
		return 'ptd::string';
	} case :tct_bool {
		return 'ptd::bool';
	} case :tct_ref(var ref_name) {
		return 'ptd::ref';
	} case :tct_arr(var arr) {
		return 'ptd::arr';
	} case :tct_own_arr(var arr) {
		return 'own::arr';
	} case :tct_var(var variants) {
		return 'ptd::var';
	} case :tct_own_var(var variants) {
		return 'own::var';
	} case :tct_rec(var recs) {
		return 'ptd::rec';
	} case :tct_own_rec(var recs) {
		return 'own::rec';
	} case :tct_hash(var hash) {
		return 'ptd::hash';
	} case :tct_own_hash(var hash) {
		return 'own::hash';
	}
}

def get_print_check_info(check_info : @tc_types::check_info) : ptd::string() {
	match (check_info) case :ok {
		die;
	} case :err(var info) {
		var ret = ' ';
		for(var i = array::len(info->stack) - 1; i >= 0; i -= 1) {
			match (info->stack[i]) case :ptd_arr {
				ret .= 'ptd::arr';
			} case :own_arr {
				ret .= 'own::arr';
			} case :ptd_var(var variant) {
				ret .= 'ptd::var(' . variant . ')';
			} case :own_var(var variant) {
				ret .= 'own::var(' . variant . ')';
			} case :ptd_rec(var field) {
				ret .= 'ptd::rec(' . field . ')';
			} case :own_rec(var field) {
				ret .= 'own::rec(' . field . ')';
			} case :ptd_hash {
				ret .= 'ptd::hash';
			} case :own_hash {
				ret .= 'own::hash';
			}
			ret .= '->';
		}
		if (info->from is :tct_rec && info->to is :tct_rec) {
			forh var name, var record (info->from as :tct_rec) {
				continue if hash::has_key(info->to as :tct_rec, name);
				return ret . '(ptd::rec with field: ''' . name . ''' instead of ptd::rec without field: ''' . name . 
					''')';
			}
			forh var name, var record (info->to as :tct_rec) {
				continue if hash::has_key(info->from as :tct_rec, name);
				return ret . '(ptd::rec without field: ''' . name . ''' instead of ptd::rec with field: ''' . name . 
					''')';
			}
		} elsif (info->from is :tct_var && info->to is :tct_var) {
			forh var name, var from_type (info->from as :tct_var) {
				var to_types = info->to as :tct_var;
				if (hash::has_key(to_types, name)) {
					match (from_type) case :no_param {
						if (hash::get_value(to_types, name) is :with_param) {
							return ret . '(ptd::var case: ''' . name . ''' no_param instead of ptd::var case: ''' . name 
								. ''' with_param)';
						}
					} case :with_param(var f_t) {
						if (hash::get_value(to_types, name) is :no_param) {
							return ret . '(ptd::var case: ''' . name . ''' with_param instead of ptd::var case: ''' . 
								name . ''' no_param)';
						}
					}
				} else {
					return ret . '(ptd::var with case: ''' . name . ''' instead of ptd::var without case: ''' . name . 
						''')';
				}
			}
		} elsif (info->from is :tct_own_var && info->to is :tct_own_var) {
			forh var name, var from_type (info->from as :tct_own_var) {
				var to_types = info->to as :tct_own_var;
				if (hash::has_key(to_types, name)) {
					match (from_type) case :no_param {
						if (hash::get_value(to_types, name) is :with_param) {
							return ret . '(own::var case: ''' . name . ''' no_param instead of own::var case: ''' . name 
								. ''' with_param)';
						}
					} case :with_param(var f_t) {
						if (hash::get_value(to_types, name) is :no_param) {
							return ret . '(own::var case: ''' . name . ''' with_param instead of own::var case: ''' . 
								name . ''' no_param)';
						}
					}
				} else {
					return ret . '(own::var with case: ''' . name . ''' instead of own::var without case: ''' . name . 
						''')';
				}
			}
		} else {
			ret .= '(' . get_print_tct_label(info->from) . ' instead of ' . get_print_tct_label(info->to) . ')';
		}
		return ret;
	}
}

def check_var_decl(var_decl : @nast::variable_declaration_t, ref modules : @tc_types::modules_t, ref vars : 
		@tc_types::vars_t, ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type)) : @tc_types::var_t {
	return check_var_decl_try(var_decl, false, ref modules, ref vars, ref errors, known_types)->ok;
}

def check_var_decl_try(var_decl : @nast::variable_declaration_t, is_try : ptd::bool(), ref modules : 
		@tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type))
	: ptd::rec({ok => @tc_types::var_t, err => @tc_types::type}) {
	add_error(ref errors, 'variable ''' . var_decl->name . ''' already exists') if hash::has_key(vars, var_decl->name);
	var ret_types : ptd::rec({ok => @tc_types::var_t, err => @tc_types::type}) = {
			ok => {overwrited => :yes, type => tct::empty(), referenced_by => :none},
			err => {type => tct::empty(), src => :speculation}
		};
	match (var_decl->type) case :type(var tt) {
		match (ptd_parser::try_value_to_ptd(tt)) case :err(var err) {
			add_error(ref errors, err);
			ret_types->ok->type = tct::tct_im();
		} case :ok(var ok) {
			ret_types->ok->type = ok;
			check_types_imported(ok, ref modules, ref errors);
			if (tct::is_own_type(ok, known_types)) {
				match (var_decl->value) case :value(var value){
				} case :none {
					add_error(ref errors, 'own types must be initialized');
				}
			}
		}
		ret_types->ok->overwrited = :no;
	} case :none {
	}
	match (var_decl->value) case :value(var value) {
		var assign_type : @tc_types::type = check_val(value, ref modules, ref vars, ref errors, known_types);
		if (assign_type->type is :tct_void) {
			add_error(ref errors, 'cannot use ''void'' type returned from function as value');
			return ret_types;
		}
		if (is_try) {
			var ok_err_types = ptd_system::try_get_ensure_sub_types(assign_type, ref modules, ref errors);
			ret_types->err = {type => ok_err_types->err, src => assign_type->src};
			assign_type->type = ok_err_types->ok;
		}
		if (ret_types->ok->type is :tct_empty) {
			ptd_system::check_assignment(tct::tct_im(), assign_type, ref modules, ref errors);
			ret_types->ok->type = assign_type->type;
		} else {
			var check_info = ptd_system::check_assignment(ret_types->ok->type, assign_type, ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'invalid type in variable declaration: ' . get_print_check_info(check_info));
			}
		}
	} case :none {
	}
	return ret_types;
}

def add_var_to_vars(var_ : @tc_types::var_t, name : ptd::string(), ref vars : @tc_types::vars_t) : ptd::void() {
	hash::set_value(ref vars, name, var_);
}

def set_type_to_variable(ref vars : @tc_types::vars_t, var_name : ptd::string(), type : @tct::meta_type) : ptd::void() {
	add_var_to_vars({overwrited => :yes, type => type, referenced_by => :none}, var_name, ref vars);
}

def add_var_decl_to_vars(var_type : @tct::meta_type, name : ptd::string(), ref vars : @tc_types::vars_t) : ptd::void() {
	if (var_type is :tct_im || var_type is :tct_empty) {
		add_var_to_vars({overwrited => :yes, type => var_type, referenced_by => :none}, name, ref vars);
	} else {
		add_var_to_vars({overwrited => :no, type => var_type, referenced_by => :none}, name, ref vars);
	}
}

def add_var_decl_with_type_and_check(ref var_decl : @nast::variable_declaration_t, type : @tc_types::type, ref vars : 
		@tc_types::vars_t, ref errors : @tc_types::errors_t) : ptd::void() {
	add_error(ref errors, 'variable `' . var_decl->name . ''' already exists') if hash::has_key(vars, var_decl->name);
	if (is_known(type)) {
		add_var_to_vars({overwrited => :no, type => type->type, referenced_by => :none}, var_decl->name, ref vars);
		var_decl->tct_type = type->type;
	} else {
		add_var_to_vars({overwrited => :yes, type => type->type, referenced_by => :none}, var_decl->name, ref vars);
		var_decl->tct_type = type->type;
	}
}

def is_known(vtype : @tc_types::type) : ptd::bool() {
	return ptd_system::is_known(vtype->src);
}

def get_function_name(fun_module : ptd::string(), fun_name : ptd::string()) : ptd::string() {
	return ((fun_module ne '') ? (fun_module . '::') : '') . fun_name;
}

def get_fun_module(fun_module : ptd::string(), module : ptd::string()) : ptd::string() {
	return fun_module eq '' ? module : fun_module;
}

def get_function_def(fun_module : ptd::string(), fun_name : ptd::string(), modules : @tc_types::modules_t) : 
		@tc_types::def_fun_t {
	return hash::get_value(hash::get_value(modules->funs, get_fun_module(fun_module, modules->env->current_module)), 
				get_fun_key(fun_name, fun_module));
}

def check_function_exists(fun_module : ptd::string(), fun_name : ptd::string(), ref modules : @tc_types::modules_t, ref errors 
		: @tc_types::errors_t) : ptd::bool() {
	var module : ptd::string() = get_fun_module(fun_module, modules->env->current_module);
	if (!hash::has_key(modules->imports, module) || !hash::get_value(modules->imports, module)) {
		add_error(ref errors, 'module ''' . module . ''' not imported') if !hash::has_key(modules->imports, module);
		hash::set_value(ref modules->imports, module, false);
		return false;
	} elsif (!hash::has_key(modules->funs, module)) {
		return false;
	}
	if (!hash::has_key(hash::get_value(modules->funs, module), get_fun_key(fun_name, fun_module))) {
		add_error(ref errors, 'function `' . get_function_name(fun_module, fun_name) . ''' does not exist');
		return false;
	}
	return true;
}

def get_function(fun_module : ptd::string(), fun_name : ptd::string(), ref modules : @tc_types::modules_t) : @tc_types::def_fun_t {
	var module : ptd::string() = get_fun_module(fun_module, modules->env->current_module);
	return modules->funs{module}{get_fun_key(fun_name, fun_module)};
}


def add_error(ref errors : @tc_types::errors_t, msg : ptd::string()) : ptd::void() {
	array::push(ref errors->errors, {message => msg, line => errors->current_line, module => errors->module, column => -1, type => :error});
}

def add_warning(ref errors : @tc_types::errors_t, msg : ptd::string()) : ptd::void() {
	array::push(ref errors->warnings, {message => msg, line => errors->current_line, module => errors->module, column => -1, type => :warning});
}

def fill_value_types_in_cmd(ref cmd : @nast::cmd_t, b_vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) : ptd::hash(@tc_types::var_t) {
	var vars : @tc_types::vars_t = b_vars;
	var ret : ptd::hash(@tc_types::var_t) = {};
	match (cmd->cmd) case :if(var as_if) {
		fill_value_types_in_if(ref as_if, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :if(as_if);
	} case :for(var as_for) {
		fill_value_types_in_for(ref as_for, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :for(as_for);
	} case :fora(var as_fora) {
		fill_value_types_in_fora(ref as_fora, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :fora(as_fora);
	} case :forh(var as_forh) {
		fill_value_types_in_forh(ref as_forh, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :forh(as_forh);
	} case :loop(var as_loop) {
		fill_value_types_in_cmd(ref as_loop, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :loop(as_loop);
	} case :rep(var as_rep) {
		fill_value_types_in_rep(ref as_rep, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :rep(as_rep);
	} case :while(var as_while) {
		fill_value_types_in_while(ref as_while, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :while(as_while);
	} case :if_mod(var if_mod) {
		fill_value_types_in_if_mod(ref if_mod, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :if_mod(if_mod);
	} case :unless_mod(var unless_mod) {
		fill_value_types_in_unless_mod(ref unless_mod, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :unless_mod(unless_mod);
	} case :break {
	} case :continue {
	} case :match(var as_match) {
		fill_value_types_in_match(ref as_match, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :match(as_match);
	} case :value(var val) {
		fill_value_types(ref val, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :value(val);
	} case :return(var as_return) {
		fill_value_types(ref as_return, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :return(as_return);
	} case :block(var block) {
		rep var i (array::len(block)) {
			forh var var_name, var var_ (fill_value_types_in_cmd(ref block[i], vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name)) {
				add_var_to_vars(var_, var_name, ref vars);
			}
		}
		cmd->cmd = :block(block);
	} case :die(var as_die) {
	} case :var_decl(var var_decl) {
		match (var_decl->value) case :none {
		} case :value(var value) {
			value->type = var_decl->tct_type;
			fill_value_types(ref value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
			var_decl->value = :value(value);
			cmd->cmd = :var_decl(var_decl);
		}
		hash::set_value(ref ret, var_decl->name, {overwrited => :no, type => var_decl->tct_type, referenced_by => :none});
	} case :try(var as_try) {
		ret = fill_try_ensure_type(ref as_try, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :try(as_try);
	} case :ensure(var as_ensure) {
		ret = fill_try_ensure_type(ref as_ensure, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		cmd->cmd = :ensure(as_ensure);
	} case :nop {
	}
	return ret;
}

def fill_value_types_in_if(ref as_if : @nast::if_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref as_if->cond, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types_in_cmd(ref as_if->if, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	rep var i (array::len(as_if->elsif)) {
		fill_value_types(ref as_if->elsif[i]->cond, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		fill_value_types_in_cmd(ref as_if->elsif[i]->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	}
	fill_value_types_in_cmd(ref as_if->else, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_for(ref as_for : @nast::for_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	match (as_for->start) case :var_decl(var var_decl) {
		add_var_to_vars({overwrited => :no, type => var_decl->tct_type, referenced_by => :none}, var_decl->name, ref vars);
		var var_decl_value = var_decl->value as :value;
		fill_value_types(ref var_decl_value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		var_decl->value = :value(var_decl_value);
		as_for->start = :var_decl(var_decl);
	} case :value(var value) {
		fill_value_types(ref value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		as_for->start = :value(value);

	}
	fill_value_types(ref as_for->iter, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types(ref as_for->cond, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types_in_cmd(ref as_for->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_fora(ref as_fora : @nast::fora_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref as_fora->array, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	var arr_type = unwrap_ref(as_fora->array->type, ref modules, ref errors);
	var inner_type;
	if (arr_type is :tct_arr || arr_type is :tct_im) {
		inner_type = :tct_im;
	} elsif (arr_type is :tct_own_arr) {
		inner_type = arr_type as :tct_own_arr;
	} else {
		die;
	}

	add_var_to_vars({overwrited => :no, type => inner_type, referenced_by => :none}, as_fora->iter->name , ref vars);
	fill_value_types_in_cmd(ref as_fora->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_forh(ref as_forh : @nast::forh_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref as_forh->hash, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	add_var_to_vars({overwrited => :no, type => as_forh->key->tct_type, referenced_by => :none}, as_forh->key->name , ref vars);
	var value_type;
	var hash_type = unwrap_ref(as_forh->hash->type, ref modules, ref errors);
	if (hash_type is :tct_hash) {
		value_type = hash_type as :tct_hash;
	} elsif (hash_type is :tct_own_hash) {
		value_type = hash_type as :tct_own_hash;
	} else {
		value_type = :tct_im;
	}
	as_forh->val->tct_type = value_type;
	add_var_to_vars({overwrited => :no, type => value_type, referenced_by => :none}, as_forh->val->name , ref vars);
	fill_value_types_in_cmd(ref as_forh->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_rep(ref as_rep : @nast::rep_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref as_rep->count, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	add_var_to_vars({overwrited => :no, type => as_rep->iter->tct_type, referenced_by => :none}, as_rep->iter->name , ref vars);
	fill_value_types_in_cmd(ref as_rep->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_while(ref as_while : @nast::while_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref as_while->cond, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types_in_cmd(ref as_while->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_if_mod(ref if_mod : @nast::if_mod_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref if_mod->cond, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types_in_cmd(ref if_mod->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_unless_mod(ref unless_mod : @nast::unless_mod_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref unless_mod->cond, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types_in_cmd(ref unless_mod->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
}

def fill_value_types_in_match(ref as_match : @nast::match_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	fill_value_types(ref as_match->val, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	var variant_type = unwrap_ref(as_match->val->type, ref modules, ref errors);
	rep var i (array::len(as_match->branch_list)) {
		match (as_match->branch_list[i]->variant->value) case :none {
		} case :value(var value) {
			if (variant_type is :tct_own_var) {
				var label = as_match->branch_list[i]->variant->name;
				value->declaration->tct_type = (variant_type as :tct_own_var){label} as :with_param;
				as_match->branch_list[i]->variant->value = :value(value);
			}
			add_var_to_vars({overwrited => :no, type => value->declaration->tct_type, referenced_by => :none}, value->declaration->name, ref vars);
		}
		fill_value_types_in_cmd(ref as_match->branch_list[i]->cmd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	}
}

def fill_value_types(ref value : @nast::value_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	match (value->value) case :ternary_op(var ternary_op) {
		fill_ternary_op_type(ref value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	} case :hash_key(var hash_key) {
		value->type = :tct_string;
	} case :nop {
		value->type = :tct_void;
	} case :parenthesis(var parenthesis) {
		fill_value_types(ref parenthesis, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		value->value = :parenthesis(parenthesis);
		value->type = parenthesis->type;
	} case :variant(var variant) {
		var value_type = unwrap_ref(value->type, ref modules, ref errors);
		if (variant->name eq 'TRUE' || variant->name eq 'FALSE') {
			value->type = :tct_bool;
		}
		if (value_type is :tct_own_var) {
			match ((value_type as :tct_own_var){variant->name}) case :with_param(var param_type) {
				variant->var->type = param_type;
			} case :no_param {
			}
		}
		fill_value_types(ref variant->var, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		value->value = :variant(variant);
	} case :const(var as_const) {
		value->type = :tct_int;
	} case :arr_decl(var arr_decl) {
		var value_type = unwrap_ref(value->type, ref modules, ref errors);
		rep var i (array::len(arr_decl)) {
			if (value_type is :tct_own_arr) {
				arr_decl[i]->type = value_type as :tct_own_arr;
			}
			fill_value_types(ref arr_decl[i], vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		}
		value->value = :arr_decl(arr_decl);
	} case :hash_decl(var hash_decl) {
		var value_type = unwrap_ref(value->type, ref modules, ref errors);
		rep var i (array::len(hash_decl)) {
			hash_decl[i]->key->type = :tct_string;
			if (value_type is :tct_own_rec) {
				hash_decl[i]->val->type = (value_type as :tct_own_rec){hash_decl[i]->key->value as :hash_key};
			} elsif (value_type is :tct_own_hash) {
				hash_decl[i]->val->type = (value_type as :tct_own_hash);
			}
			fill_value_types(ref hash_decl[i]->val, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		}
		value->value = :hash_decl(hash_decl);
	} case :var(var variable_name) {
		value->type = vars{variable_name}->type;
	} case :bin_op(var bin_op) {
		fill_binary_op_type(ref value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	} case :unary_op(var unary_op) {
		fill_unary_op_type(ref value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	} case :fun_label(var fun_label) {
		value->type = :tct_im;
	} case :fun_val(var fun_val) {
		fill_fun_val_type(ref value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	} case :string(var str) {
		value->type = :tct_string;
	} case :post_inc(var inc) {
		fill_value_types(ref inc, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		value->value = :post_inc(inc);
		value->type = :tct_int;
	} case :post_dec(var dec) {
		fill_value_types(ref dec, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		value->value = :post_dec(dec);
		value->type = :tct_int;
	}
}

def fill_unary_op_type(ref unary_op_val : @nast::value_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
		curr_module_name : ptd::string()) {
	var unary_op = unary_op_val->value as :unary_op;

	fill_value_types(ref unary_op->val, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	unary_op_val->value = :unary_op(unary_op);

	if (unary_op->op eq '!') {
		unary_op_val->type = :tct_bool;
	} elsif (unary_op->op eq '@') {
		unary_op_val->type = :tct_im;
	} elsif (unary_op->op eq '--' || unary_op->op eq '++') {
		unary_op_val->type = :tct_int;
	} else {
		unary_op_val->type = :tct_im;
	}
}

def fill_binary_op_type(ref binary_op_val : @nast::value_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	var binary_op = binary_op_val->value as :bin_op;

	fill_value_types(ref binary_op->left, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	binary_op_val->value = :bin_op(binary_op);

	if (binary_op->op eq '=') {
		binary_op_val->type = binary_op->left->type;
		binary_op->right->type = binary_op->left->type;
	} elsif (binary_op->op eq 'ARRAY_INDEX') {
		binary_op_val->type = get_type_from_bin_op_and_check(binary_op, ref modules, ref vars, ref errors, known_types)->type;
	} elsif (binary_op->op eq 'HASH_INDEX') {
		binary_op_val->type = get_type_from_bin_op_and_check(binary_op, ref modules, ref vars, ref errors, known_types)->type;
	} elsif (binary_op->op eq '->') {
		binary_op_val->type = get_type_from_bin_op_and_check(binary_op, ref modules, ref vars, ref errors, known_types)->type;
	} elsif (binary_op->op eq '[]=') {
		if (unwrap_ref(binary_op->left->type, ref modules, ref errors) is :tct_own_arr) {
			binary_op->right->type = unwrap_ref(binary_op->left->type, ref modules, ref errors) as :tct_own_arr;
		}
		binary_op_val->type = :tct_void;
	} elsif (binary_op->op eq 'OV_AS') {
		binary_op_val->type = get_type_from_bin_op_and_check(binary_op, ref modules, ref vars, ref errors, known_types)->type;
	} elsif (binary_op->op eq 'OV_IS') {
		binary_op_val->type = get_type_from_bin_op_and_check(binary_op, ref modules, ref vars, ref errors, known_types)->type;
	} else {
		var op_def = tc_types::get_bin_op_def(binary_op->op);
		binary_op_val->type = op_def->ret;
	}
	fill_value_types(ref binary_op->right, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	binary_op_val->value = :bin_op(binary_op);
}

def fill_ternary_op_type(ref ternary_op_val : @nast::value_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	var ternary_op = ternary_op_val->value as :ternary_op;
	fill_value_types(ref ternary_op->fst, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types(ref ternary_op->snd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	fill_value_types(ref ternary_op->thrd, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	ternary_op_val->value = :ternary_op(ternary_op);
	ternary_op_val->type = ptd_system::cross_type(ternary_op->snd->type, ternary_op->thrd->type, ref modules, ref errors, known_types);
}

def fill_fun_val_type(ref fun_val : @nast::value_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string()) {
	var as_fun = fun_val->value as :fun_val;
	var fun_name = get_function_name(as_fun->module, as_fun->name);
	rep var i (array::len(as_fun->args)) {
		fill_value_types(ref as_fun->args[i]->val, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
	}
	if (hash::has_key(get_special_functions(), fun_name)) {
		var fun_def = get_special_functions(){fun_name};
		fun_val->type = fun_def->r;
		rep var i (array::len(as_fun->args)) {
			as_fun->args[i]->expected_type = fun_def->a[i]->type;
		}
	} elsif (as_fun->module eq 'c_std_lib' || as_fun->module eq 'c_rt_lib' || as_fun->module eq 'c_fe_lib') {
		fun_val->type = :tct_im;
	} elsif (as_fun->module eq 'own' && as_fun->name eq 'to_im') {
		fun_val->type = :tct_im;
		var type : @tct::meta_type = as_fun->args[0]->val->type;
		if (type is :tct_ref) {
			as_fun->module = curr_module_name;
		} else {
			as_fun->module = '';
		}
		var arg_type : ptd::string() = own_to_im_converter::get_required_arg_type(type, known_types);
		var arg_type_var : ptd::var({none => ptd::none(), ref => ptd::none()});
		if (arg_type eq '') {
			arg_type_var = :none;
		}
		arg_type_var = :ref;
		as_fun->args[0]->mod = arg_type_var;
		as_fun->args[0]->expected_type = type;
		var name : ptd::string() = own_to_im_converter::get_function_name(type, known_types);
		if (type is :tct_ref) {
			var ix = string::index2(name, '::');
			as_fun->name = string::substr(name, ix + 2, string::length(name) - ix - 2);
		} else {
			as_fun->name = name;
		}
		if (!hash::has_key(anon_own_conv, name) && !(type is :tct_ref)) {
			hash::set_value(ref anon_own_conv, name, type);
		}
	} else {
		return unless check_function_exists(as_fun->module, as_fun->name, ref modules, ref errors);
		var fun_def = get_function_def(as_fun->module, as_fun->name, modules);
		fun_val->type = fun_def->ret_type;
		rep var i (array::len(as_fun->args)) {
			as_fun->args[i]->expected_type = fun_def->args[i]->type;
		}
	}

	fun_val->value = :fun_val(as_fun);
}

def fill_try_ensure_type(ref try_ensure : @nast::try_ensure_t, vars : @tc_types::vars_t, modules : @tc_types::modules_t,
		ref errors : @tc_types::errors_t, known_types : ptd::hash(@tct::meta_type), ref anon_own_conv : ptd::hash(@tct::meta_type),
	curr_module_name : ptd::string())
		: ptd::hash(@tc_types::var_t) {
	var ret : ptd::hash(@tc_types::var_t) = {};
	match (try_ensure) case :decl(var decl) {
		match (decl->value) case :value(var value) {
			vars{decl->name} = {overwrited => :no, type => decl->tct_type, referenced_by => :none};
			fill_value_types(ref value, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
			decl->value = :value(value);
		} case :none {
		}
		ret{decl->name} = {overwrited => :no, type => decl->tct_type, referenced_by => :none};
		try_ensure = :decl(decl);
	} case :lval(var lval) {
		fill_value_types(ref lval->left, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		fill_value_types(ref lval->right, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		try_ensure = :lval(lval);
	} case :expr(var expr) {
		fill_value_types(ref expr, vars, modules, ref errors, known_types, ref anon_own_conv, curr_module_name);
		try_ensure = :expr(expr);
	}
	return ret;
}

def unwrap_ref(type : @tct::meta_type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t)
		: @tct::meta_type {
	while (type is :tct_ref) {
		type = ptd_system::get_ref_type(type as :tct_ref, ref modules, ref errors);
	}
	return type;
}

def takes_own_arg(function : @tc_types::def_fun_t, defined_types : ptd::hash(@tct::meta_type)) : ptd::bool() {
	fora var arg (function->args) {
		return true if tct::is_own_type(arg->type, defined_types);
	}
	return false;
}
