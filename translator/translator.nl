###
# (c) Atinea Sp. z o.o.
###

use own;
use tct;
use array;
use string;
use ptd;
use nast;
use hash;
use nlasm;

def translator::function_logic_t() {
	return ptd::rec({
		registers => ptd::arr(@nlasm::reg_t),
		register => ptd::int(),
		register_to_clear => ptd::arr(ptd::bool()),
		variables => ptd::hash(@nlasm::reg_t),
		defined_types => ptd::hash(@tct::meta_type),
	});
}

def translator::loop() {
	return ptd::rec({label => @nlasm::label_t, logic => @translator::function_logic_t, used => ptd::bool()});
}

def translator::loop_label() {
	return ptd::rec({break => @translator::loop, continue => @translator::loop});
}

def translator::state_t() {
	return own::rec({
			label_nr => ptd::int(),
			debug => @nlasm::debug_t,
			logic => @translator::function_logic_t,
			module_name => ptd::string(),
			result => @nlasm::function_t,
			loop_label => @translator::loop_label
		});
}

def translator::string_t() {
	return ptd::rec({arr => ptd::arr(ptd::string()), last => ptd::var({end => ptd::none(), new_line => ptd::none()})});
}

def translator::lvalue_values_t() {
	return ptd::arr(ptd::var({
			value => @nlasm::reg_t,
			index => ptd::rec({value => @nlasm::reg_t, index => @nlasm::reg_t}),
			key => ptd::rec({value => @nlasm::reg_t, key => ptd::string()}),
			use_field => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, field_name => ptd::string()}),
			use_index => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, index => @nlasm::reg_t}),
			as => ptd::rec({value => @nlasm::reg_t, label => ptd::string()}),
			use_variant => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, label => ptd::string()}),
			hashkey => ptd::rec({value => @nlasm::reg_t, key => @nlasm::reg_t}),
			use_hash_index => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, index => @nlasm::reg_t}),
		}));
}

def translator::last_debug_char(debug : @nast::debug_t) : @nast::debug_t {
	var begin : @nast::place_t = {line => debug->end->line, position => debug->end->position - 1};
	var end : @nast::place_t = {line => debug->end->line, position => debug->end->position};
	return {begin => begin, end => end};
}

def translator::translate(ast : @nast::module_t, defined_types : ptd::hash(@tct::meta_type)) : @nlasm::result_t {
	var result : @nlasm::result_t = {module_name => ast->name, functions => [], imports => []};
	result->imports = [];
	fora var imp (ast->import) {
		array::push(ref result->imports, imp->name);
	}
	fora var function (ast->fun_def) {
		var logic = {
			variables => {},
			registers => [],
			register => 0,
			register_to_clear => [],
			defined_types => defined_types,
		};
		var state : @translator::state_t = {
				label_nr => 0,
				debug => nlasm::empty_debug(),
				module_name => ast->name,
				logic => logic,
				result => {
					annotation => :none,
					access => function->access,
					registers => [],
					args_type => [],
					ret_type => :tct_im,
					ret_reg_type => :im,
					commands => [],
					name => function->name,
					defines_type => function->defines_type,
					variables => []
				},
				loop_label => {
					break => { label => -1, logic => logic, used => false},
					continue => {label => -1, logic => logic, used => false},
				}
			};
		print_fun_def(function, ref state);
		array::push(ref result->functions, state->result);
	}
	return result;
}

def print_fun_def(function : @nast::fun_def_t, ref state : @translator::state_t) {
	fora var fun_arg (function->args) {
		match (fun_arg->mod) case :none {
			var rim = new_declaration(fun_arg->name, ref state, var_type_to_reg_type(fun_arg->tct_type, state->logic->defined_types), :value);
			var arg_type_rim = {by => :val, register => rim, type => fun_arg->tct_type};
			array::push(ref state->result->args_type, arg_type_rim);
		} case :ref {
			var rref = new_declaration(fun_arg->name, ref state, var_type_to_reg_type(fun_arg->tct_type, state->logic->defined_types), :value);
			var arg_type_rref = {by => :ref, register => rref, type => fun_arg->tct_type};			
			array::push(ref state->result->args_type, arg_type_rref);
		}
	}
	state->result->ret_type = function->ret_type->tct_type;
	state->result->ret_reg_type = var_type_to_reg_type(function->ret_type->tct_type, state->logic->defined_types);
	print_cmd(function->cmd, ref state);
	var default_return = {
		debug => {begin => function->cmd->debug->end, end => function->cmd->debug->end},
		value => :nop,
		type => :tct_empty
	};
	match (function->ret_type->type) case :type(var type) {
		var ret_type = unwrap_ref(function->ret_type->tct_type, state->logic->defined_types);
		if (ret_type is :tct_void || ret_type is :tct_im) {
			print_return(default_return, ref state);
		}
	} case :none {
		print_return(default_return, ref state);
	}
}

def print_array_declaration(arr : ptd::arr(@nast::value_t), destination : @nlasm::reg_t, ref state : 
	@translator::state_t) {
	var args : ptd::arr(@nlasm::reg_t) = [];
	fora var elem (arr) {
		var elem_reg = calc_val(elem, ref state);
		if (destination->type is :im) {
			elem_reg = get_cast(elem_reg, :im, ref state);
		}
		array::push(ref args, elem_reg);
	}
	if (destination->type is :arr) {
		fora var arg (args) {
			print_array_push(destination, arg, ref state);
		}
	} elsif (destination->type is :im) {
		print(ref state, :arr_decl({dest => destination, src => args}));
	} else {
		die;
	}
}

def print_hash_declaration(hash : ptd::arr(@nast::hash_elem_t), destination : @nlasm::reg_t, ref state : 
	@translator::state_t) {
	var elems_array = [];
	die if destination->type is :rec;
	fora var elem (hash) {
		var inner_type = :im;
		var key = elem->key->value as :hash_key;
		if (destination->type is :hash) {
			var unwrapped_inner = unwrap_ref(destination->type as :hash, state->logic->defined_types) as :tct_own_hash;
			unwrapped_inner = unwrap_ref(unwrapped_inner, state->logic->defined_types);
			inner_type = var_type_to_reg_type(unwrapped_inner, state->logic->defined_types);
		} elsif (destination->type is :rec) {
			var unwrapped_rec = unwrap_ref(destination->type as :rec, state->logic->defined_types) as :tct_own_rec;
			var unwrapped_inner = unwrap_ref(unwrapped_rec{key}, state->logic->defined_types);
			inner_type = var_type_to_reg_type(unwrapped_inner, state->logic->defined_types);
		}
		var elem_reg = get_cast(calc_val(elem->val, ref state), inner_type, ref state);
		array::push(ref elems_array, {key => key, val => elem_reg});
	}
	print(ref state, :hash_decl({dest => destination, src => elems_array}));
}

def print_variant(variant : @nast::variant_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var arg = :emp;
	var variant_type;
	if (destination->type is :variant) {
		variant_type = unwrap_ref(destination->type as :variant, state->logic->defined_types);
	} else {
		variant_type = :tct_im;
	}
	if (!variant->var->value is :nop) {
		var expected_type;
		if (destination->type is :variant) {
			var params_type =  variant_type as :tct_own_var;
			expected_type = var_type_to_reg_type(params_type{variant->name} as :with_param, state->logic->defined_types);
		} else {
			expected_type = :im;
		}
		arg = :arg(get_cast(dest_val(variant->var, ref state), expected_type, ref state));
	}
	var label_no = get_label_number(ref state, variant_type, variant->name);
	print(ref state, :ov_mk({dest => destination, src => arg, label => variant->name, label_no => label_no, inner_type => variant->var->type}));
}

def print_var_decl(var_decl : @nast::variable_declaration_t, ref state : @translator::state_t,
		access_type : @nlasm::reg_access_type_t) : @nlasm::reg_t {
	var reg_type = var_type_to_reg_type(var_decl->tct_type, state->logic->defined_types);
	var reg = new_declaration(var_decl->name, ref state, reg_type, access_type);
	array::push(ref state->result->variables, {type => var_decl->tct_type, register => reg});
	match (var_decl->value) case :none {
	} case :value(var value) {
		if (tct::is_own_type(value->type, state->logic->defined_types)) {
			print_val_init(value, reg, ref state);
		} else {
			print_val(value, reg, ref state);
		}
	}
	return reg;
}

def load_const(const : ptd::ptd_im(), destination : @nlasm::reg_t, ref state : @translator::state_t) {
	print(ref state, :load_const({dest => destination, val => const}));
}

def translator::ref_rec_args_t() {
	return ptd::arr(ptd::rec({var_name => ptd::string(), list_name => ptd::string(), lvalue_var_name => ptd::string()}));
}

def print_fun_val(fun_val : @nast::fun_val_t, destination : @nlasm::reg_t, type : @tct::meta_type, ref state : @translator::state_t) {
	var args : ptd::arr(ptd::var({val => @nlasm::reg_t, ref => @nlasm::reg_t})) = [];
	var lvalues : ptd::hash(@translator::lvalue_values_t) = {};
	var casts : ptd::hash(ptd::rec({original => @nlasm::reg_t, casted => @nlasm::reg_t})) = {};
	var ref_var = {};
	var ref_was = {};
	for(var i = array::len(fun_val->args) - 1; i >= 0; --i) {
		continue unless fun_val->args[i]->mod is :ref;
		var src = fun_val->args[i]->val;
		get_struct_of_lvalue(ref src, ref state);
		continue if hash::has_key(ref_was, src->value as :var);
		hash::set_value(ref ref_was, src->value as :var, 0);
		hash::set_value(ref ref_var, ptd::int_to_string(i), 0);
	}
	var registers = [];
	rep var i (array::len(fun_val->args)) {
		var fun_arg = fun_val->args[i];
		match (fun_arg->mod) case :none {
			var arg_src = calc_val(fun_arg->val, ref state);
			var arg_dst = get_cast(arg_src, var_type_to_reg_type(fun_arg->expected_type, state->logic->defined_types), ref state);
			array::push(ref args, :val(arg_dst));
		} case :ref {
			if (hash::has_key(ref_var, ptd::int_to_string(i))) {
				var lvalue = get_value_of_lvalue(fun_arg->val, true, ref state);
				var arg_src = lvalue[array::len(lvalue) - 1] as :value;
				var expected_type = var_type_to_reg_type(fun_arg->expected_type,
					state->logic->defined_types);
				var arg_dst = get_cast(arg_src, expected_type, ref state);
				array::push(ref args, :ref(arg_dst));
				lvalues{ptd::int_to_string(i)} = lvalue;
				if (!nlasm::eq_reg(arg_src, arg_dst)) {
					casts{ptd::int_to_string(i)} = {original => arg_src, casted => arg_dst};
				}
			} else {
				var arg = new_register(ref state, value_type_to_reg_type(fun_arg->val, ref state));
				print_val(fun_arg->val, arg, ref state);
				array::push(ref args, :ref(arg));
			}
		}
		array::push(ref registers, save_registers(ref state));
	}
	if (fun_val->module eq 'own_array' && fun_val->name eq 'len') {
		print(ref state, :array_len({dest => destination, src => args[0] as :ref}));
	} elsif (fun_val->module eq 'array' && fun_val->name eq 'len') {
		var return_reg_type = :int;
		var cast_needed = !nlasm::eq_reg_type(return_reg_type, destination->type);
		var tmp_destination = destination;
		tmp_destination = new_register(ref state, return_reg_type) if cast_needed;
		print(ref state, :array_len({dest => tmp_destination, src => args[0] as :val}));
		move(destination, tmp_destination, ref state) if cast_needed;
	} elsif (!type is :tct_void && !nlasm::is_empty(destination)) {
		var return_reg_type = var_type_to_reg_type(type, state->logic->defined_types);
		var cast_needed = !nlasm::eq_reg_type(return_reg_type, destination->type);
		var tmp_destination = destination;
		tmp_destination = new_register(ref state, return_reg_type) if cast_needed;
		print(ref state, :call({dest => tmp_destination, mod => fun_val->module, fun_name => fun_val->name, args => args}));
		move(destination, tmp_destination, ref state) if cast_needed;
	} else {
		print(ref state, :call({dest => destination, mod => fun_val->module, fun_name => fun_val->name, args => args}));
	}
	for(var i = array::len(registers) - 1; i >= 0; --i) {
		var i_str = ptd::int_to_string(i);
		continue unless hash::has_key(lvalues, i_str);
		if (hash::has_key(casts, i_str)) {
			move(casts{i_str}->original, casts{i_str}->casted, ref state);
		}
		set_value_of_lvalue(hash::get_value(lvalues, ptd::int_to_string(i)), true, ref state);
	}
}

def print_val(val : @nast::value_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	state->debug->nast_debug = val->debug;
	var register_old = save_registers(ref state);
	match (val->value) case :const(var const) {
		load_const(const, destination, ref state);
	} case :string(var str) {
		load_const(make_string(str, ref state), destination, ref state);
	} case :bool(var bool) {
		load_const(bool, destination, ref state);
	} case :ternary_op(var op) {
		print_ternary_op(op, destination, ref state);
	} case :hash_key(var key) {
		load_const(key, destination, ref state);
	} case :variant(var variant) {
		print_variant(variant, destination, ref state);
	} case :var(var variable) {
		print_variable(variable, destination, ref state);
	} case :parenthesis(var parenthesis) {
		print_val(parenthesis, destination, ref state);
	} case :bin_op(var bin_op) {
		print_bin_op(val, destination, ref state);
	} case :unary_op(var unary_op) {
		print_unary_op(unary_op, destination, ref state);
	} case :fun_val(var fun_val) {
		print_fun_val(fun_val, destination, val->type, ref state);
	} case :arr_decl(var arr_decl) {
		print_array_declaration(arr_decl, destination, ref state);
	} case :hash_decl(var hash_decl) {
		print_hash_declaration(hash_decl, destination, ref state);
	} case :nop {
	} case :fun_label(var fun_label) {
		die;
	} case :post_inc(var inc) {
		print_post_operator(inc, '++', destination, ref state);
	} case :post_dec(var dec) {
		print_post_operator(dec, '--', destination, ref state);
	}
	restore_registers(register_old, ref state);
}

def print_variable(variable : ptd::string(), destination : @nlasm::reg_t, ref state : @translator::state_t) {
	move(destination, get_var_register(variable, ref state), ref state);
}

def print_post_operator(value : @nast::value_t, sign : ptd::string(), destination : @nlasm::reg_t, ref state : 
	@translator::state_t) {
	var lvalue = get_value_of_lvalue(value, true, ref state);
	var dest = lvalue[array::len(lvalue) - 1] as :value;
	move(destination, dest, ref state);
	var const_reg = calc_val({debug => value->debug, value => :const(1), type => :tct_int}, ref state);
	print_bin_op_operator_command(dest, dest, const_reg, sign eq '++' ? '+' : '-', ref state);
	set_value_of_lvalue(lvalue, true, ref state);
}

def print_unary_op(unary_op : @nast::unary_op_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	if (unary_op->op eq '!' || unary_op->op eq '-' || unary_op->op eq '+') {
		return if nlasm::is_empty(destination);
		print_val(unary_op->val, destination, ref state);
		print(ref state, :una_op({dest => destination, src => destination, op => unary_op->op}));
	} elsif (unary_op->op eq '++' || unary_op->op eq '--') {
		var lvalue = get_value_of_lvalue(unary_op->val, true, ref state);
		var dest = lvalue[array::len(lvalue) - 1] as :value;
		var src = dest_val({debug => unary_op->val->debug, value => :const(1), type => :tct_int}, ref state);
		print_bin_op_operator_command(dest, dest, src, unary_op->op eq '++' ? '+' : '-', ref state);
		move(destination, dest, ref state);
		set_value_of_lvalue(lvalue, true, ref state);
	} elsif (unary_op->op eq '@') {
		return if nlasm::is_empty(destination);
		var func = unary_op->val->value as :fun_label;
		print(ref state, :func({dest => destination, module => func->module, name => func->name}));
		print(ref state, :ov_mk({dest => destination, src => :arg(destination), label => 'ref', label_no => -1, inner_type => :tct_im}));
	} else {
		die;
	}
}

def print_bin_op(as_bin_op : @nast::value_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var bin_op : @nast::bin_op_t = as_bin_op->value as :bin_op;
	if (bin_op->op eq '=') {
		var lvalue;
		var dest;
		if (tct::is_own_type(bin_op->left->type, state->logic->defined_types)) {
			lvalue = get_value_of_lvalue(bin_op->left, false, ref state);
			dest = lvalue[array::len(lvalue) - 1] as :value;
			print_val_init(bin_op->right, dest, ref state);
		} elsif (bin_op->left->value is :var) {
			lvalue = get_value_of_lvalue(bin_op->left, false, ref state);
			dest = lvalue[array::len(lvalue) - 1] as :value;
			print_val(bin_op->right, dest, ref state);
		} else {
			var destination_empty = nlasm::is_empty(destination);
			if (destination_empty) {
				destination = {type => :im, reg_no => -1, access_type => :value};
			}
			var right = dest_val(bin_op->right, ref state);
			lvalue = get_value_of_lvalue(bin_op->left, false, ref state);
			dest = lvalue[array::len(lvalue) - 1] as :value;
			move(dest, right, ref state);
			if (!destination_empty) {
				move(destination, dest, ref state);
			}
		}
		set_value_of_lvalue(lvalue, false, ref state);
	} elsif (bin_op->op eq '[]=') {
		var lvalue = get_value_of_lvalue(bin_op->left, true, ref state);
		var left = lvalue[array::len(lvalue) - 1] as :value;
		var right = calc_val(bin_op->right, ref state);
		print_array_push(left, right, ref state);
		set_value_of_lvalue(lvalue, true, ref state);
	} elsif (bin_op->op eq 'ARRAY_INDEX' || bin_op->op eq 'HASH_INDEX' || bin_op->op eq '->' || bin_op->op eq 'OV_AS') {
		if (tct::is_own_type(bin_op->left->type, state->logic->defined_types)) {
			var lvalue = get_value_of_lvalue(as_bin_op, true, ref state);
			move(destination, lvalue[array::len(lvalue) - 1] as :value, ref state);
			for(var i = array::len(lvalue) - 1; i >= 0; --i) {
				match (lvalue[i]) case :value(var reg) {
				} case :index(var arr) {
				} case :hashkey(var hash) {
				} case :key(var hash) {
				} case :as(var as_val) {
				} case :use_field(var use_field) {
					release_field(use_field->dest_reg, use_field->src_reg, use_field->field_name, ref state);
				} case :use_index(var use_index) {
					release_index(use_index->dest_reg, use_index->src_reg, use_index->index, ref state);
				} case :use_variant(var use_variant) {
					release_variant(use_variant->dest_reg, use_variant->src_reg, use_variant->label, ref state);
				} case :use_hash_index(var use_hash_index) {
					release_hash_index(use_hash_index->dest_reg, use_hash_index->src_reg, use_hash_index->index, ref state);
				}
			}
		} else {
			var left_val = dest_val(bin_op->left, ref state);
			if (bin_op->op eq 'ARRAY_INDEX') {
				var index_val = calc_val(bin_op->right, ref state);
				print_get_from_index(destination, left_val, index_val, ref state);
			} elsif (bin_op->op eq 'HASH_INDEX') {
				var key_val = calc_val(bin_op->right, ref state);
				var dest_cast_needed = !nlasm::eq_reg_type(:im, destination->type);
				var tmp_destination = destination;
				tmp_destination = new_register(ref state, :im) if dest_cast_needed;
				print_call_base(tmp_destination, 'hash_get_value', [:val(left_val), :val(key_val)], ref state);
				move(destination, tmp_destination, ref state) if dest_cast_needed;
			} elsif (bin_op->op eq '->') {
				var field_name = bin_op->right->value as :hash_key;
				print_get_value(destination, left_val, field_name, ref state);
			} elsif (bin_op->op eq 'OV_AS') {
				var temporary = dest_val(bin_op->left, ref state);
				var right_val = bin_op->right->value as :hash_key;
				var label_no = get_label_number(ref state, bin_op->left->type, right_val);
				var expected_dest_type = :im;
				var current_destination = destination;
				if (!nlasm::eq_reg_type(destination->type, expected_dest_type)) {
					current_destination = new_register(ref state, expected_dest_type);
				}
				print(ref state, :ov_as({dest => current_destination, src => temporary, type => right_val, label_no => label_no}));
				if (!nlasm::eq_reg_type(destination->type, expected_dest_type)) {
					move(destination, current_destination, ref state);
				}
			} else {
				die;
			}
		}
	} elsif (bin_op->op eq 'OV_IS') {
		var temporary = dest_val(bin_op->left, ref state);
		var right_val = bin_op->right->value as :hash_key;
		var label_no = get_label_number(ref state, bin_op->left->type, right_val);
		print(ref state, :ov_is({dest => destination, src => temporary, type => right_val, label_no => label_no}));
	} elsif (bin_op->op eq '+=' || bin_op->op eq '-=' || bin_op->op eq '/=' || bin_op->op eq '*=' || bin_op->op eq '.=') {
		var right = calc_val(bin_op->right, ref state);
		var lvalue = get_value_of_lvalue(bin_op->left, true, ref state);
		var dest = lvalue[array::len(lvalue) - 1] as :value;
		print_bin_op_operator_command(dest, dest, right, bin_op->op, ref state);
		move(destination, dest, ref state);
		set_value_of_lvalue(lvalue, true, ref state);
	} elsif (bin_op->op eq '&&') {
		var after = get_sim_label(ref state);
		var new = new_register(ref state, :bool);
		var condi = def_val(bin_op->left, destination, new, ref state);
		print(ref state, :una_op({dest => new, src => condi, op => '!'}));
		print_if_goto(after, new, ref state);
		def_val(bin_op->right, destination, new, ref state);
		print_sim_label(after, ref state);
	} elsif (bin_op->op eq '||') {
		var after = get_sim_label(ref state);
		var new;
		if (nlasm::is_empty(destination)) {
			new = new_register(ref state, :bool);
		} else {
			new = destination;
		}
		var condi = def_val(bin_op->left, destination, new, ref state);
		print_if_goto(after, condi, ref state);
		def_val(bin_op->right, destination, new, ref state);
		print_sim_label(after, ref state);
	} else {
		var left = calc_val(bin_op->left, ref state);
		var right = calc_val(bin_op->right, ref state);
		print_bin_op_operator_command(destination, left, right, bin_op->op, ref state);
	}
}

def print_cmd_array(arr : ptd::arr(@nast::cmd_t), ref state : @translator::state_t) {
	fora var c (arr) {
		print_cmd(c, ref state);
	}
}

def print_try_ensure(try_ensure : @nast::try_ensure_t, is_try : ptd::bool(), ref state : @translator::state_t) {
	match (try_ensure) case :decl(var decl) {
		print_var_decl({name => decl->name, type => decl->type, tct_type => decl->tct_type, value => :none},
			ref state, :value);
	} case :lval(var lval) {
	} case :expr(var expr) {
	}
	var ov_is_register = new_register(ref state, :bool);
	var arg : @nlasm::reg_t;
	match (try_ensure) case :decl(var decl) {
		match (decl->value) case :value(var value) {
			arg = calc_val(value, ref state);
		} case :none {
			die;
		}
	} case :lval(var lval) {
		arg = calc_val(lval->right, ref state);
	} case :expr(var expr) {
		arg = calc_val(expr, ref state);
	}
	var ok_label = get_sim_label(ref state);
	print(ref state, :ov_is({dest => ov_is_register, src => arg, type => 'ok', label_no => -1}));
	print_if_goto(ok_label, ov_is_register, ref state);
	if (is_try) {
		print_safe_return(:val(arg), ref state);
	} else {
		print(ref state, :ov_mk({dest => arg, src => :arg(arg), label => 'ensure', label_no => -1, inner_type => :tct_im}));
		print(ref state, :die(arg));
	}
	print_sim_label(ok_label, ref state);
	match (try_ensure) case :decl(var decl) {
		var var_reg = get_var_register(decl->name, ref state);
		var as_dest = get_cast(var_reg, state->logic->variables{decl->name}->type, ref state);
		print(ref state, :ov_as({dest => as_dest, src => arg, type => 'ok', label_no => -1}));
		if (!nlasm::eq_reg(as_dest, var_reg)) {
			move(var_reg, as_dest, ref state);
		}
	} case :lval(var lval) {
		var lvalue = get_value_of_lvalue(lval->left, false, ref state);
		var dest = lvalue[array::len(lvalue) - 1] as :value;
		var real_dest = get_cast(dest, :im, ref state);
		print(ref state, :ov_as({dest => real_dest, src => arg, type => 'ok', label_no => -1}));
		if (!nlasm::eq_reg(dest, real_dest)) {
			move(dest, real_dest, ref state);
		}
		set_value_of_lvalue(lvalue, false, ref state);
	} case :expr(var expr) {
	}
}

def start_new_instruction(debug : @nast::debug_t, ref state : @translator::state_t) : ptd::void() {
	state->debug->nast_debug = debug;
	state->debug->instruction_nr++;
}

def print_cmd(cmd : @nast::cmd_t, ref state : @translator::state_t) {
	start_new_instruction(cmd->debug, ref state);
	match (cmd->cmd) case :if(var as_if) {
		print_if(as_if, false, ref state);
	} case :fora(var as_fora) {
		print_fora(as_fora, ref state);
	} case :loop(var as_loop) {
		print_loop(as_loop, ref state);
	} case :rep(var as_rep) {
		print_rep(as_rep, ref state);
	} case :forh(var as_forh) {
		print_forh(as_forh, ref state);
	} case :while(var as_while) {
		print_while(as_while, ref state);
	} case :for(var as_for) {
		print_for(as_for, ref state);
	} case :nop {
	} case :value(var value) {
		var val_type = var_type_to_reg_type(value->type, state->logic->defined_types);
		print_val(value, {type => val_type, reg_no => -1, access_type => :value}, ref state);
	} case :block(var block) {
		print_cmd_array(block, ref state);
	} case :return(var as_return) {
		print_return(as_return, ref state);
	} case :match(var as_match) {
		print_match(as_match, ref state);
	} case :try(var as_try) {
		print_try_ensure(as_try, true, ref state);
	} case :ensure(var as_match) {
		print_try_ensure(as_match, false, ref state);
	} case :break {
		state->loop_label->break->used = true;
		print_loop_break(ref state, state->loop_label->break);
	} case :continue {
		state->loop_label->continue->used = true;
		print_loop_break(ref state, state->loop_label->continue);
	} case :die(var value) {
		print_die(value, cmd->debug, ref state);
	} case :var_decl(var var_decl) {
		print_var_decl(var_decl, ref state, :value);
	} case :if_mod(var as_if_mod) {
		print_if_mod(as_if_mod, ref state);
	} case :unless_mod(var as_unless_mod) {
		print_unless_mod(as_unless_mod, ref state);
	}
}

def print_loop_break(ref state : @translator::state_t, info : @translator::loop) {
	restore_registers_only_clear(info->logic, ref state);
	print(ref state, :goto(info->label));
}

def print_if_mod(as_if_mod : ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t}), ref state : @translator::state_t) {
	var as_if = {
			cond => as_if_mod->cond,
			if => as_if_mod->cmd,
			elsif => [],
			else => {debug => as_if_mod->cmd->debug, cmd => :nop}
		};
	print_if(as_if, true, ref state);
}

def print_unless_mod(as_unless_mod : ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t}), ref state : 
	@translator::state_t) {
	var as_if = {
			cond => {
				debug => as_unless_mod->cond->debug,
				value => :unary_op({
					val => {
						debug => as_unless_mod->cond->debug,
						value => :parenthesis(as_unless_mod->cond),
						type => :tct_bool
					},
					op => '!',
				}),
				type => :tct_bool
			},
			if => as_unless_mod->cmd,
			elsif => [],
			else => {debug => as_unless_mod->cmd->debug, cmd => :nop}
		};
	print_if(as_if, true, ref state);
}

def print_if(as_if : @nast::if_t, short : ptd::bool(), ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	var after_all_ifs_instruction_no = get_sim_label(ref state);
	var after_if_instruction_no = get_sim_label(ref state);
	var neg_condition = new_register(ref state, :bool);
	print_val(as_if->cond, neg_condition, ref state);
	print(ref state, :una_op({dest => neg_condition, src => neg_condition, op => '!'}));
	print_if_goto(after_if_instruction_no, neg_condition, ref state);
	print_cmd(as_if->if, ref state);
	start_new_instruction(translator::last_debug_char(as_if->if->debug), ref state) unless short;
	print(ref state, :goto(after_all_ifs_instruction_no));
	print_sim_label(after_if_instruction_no, ref state);
	fora var else_if (as_if->elsif) {
		start_new_instruction(else_if->debug, ref state);
		after_if_instruction_no = get_sim_label(ref state);
		print_val(else_if->cond, neg_condition, ref state);
		print(ref state, :una_op({dest => neg_condition, src => neg_condition, op => '!'}));
		print_if_goto(after_if_instruction_no, neg_condition, ref state);
		print_cmd(else_if->cmd, ref state);
		start_new_instruction(translator::last_debug_char(else_if->cmd->debug), ref state);
		print(ref state, :goto(after_all_ifs_instruction_no));
		print_sim_label(after_if_instruction_no, ref state);
	}
	if (!(as_if->else->cmd is :nop)) {
		print_cmd(as_if->else, ref state);
		start_new_instruction(translator::last_debug_char(as_if->else->debug), ref state);
		print(ref state, :goto(after_all_ifs_instruction_no));
	}
	print_sim_label(after_all_ifs_instruction_no, ref state);
	restore_registers(register_old, ref state);
}

def print_call_base(dest : @nlasm::reg_t, fun_name : ptd::string(), args : ptd::arr(ptd::var({
		val => @nlasm::reg_t,
		ref => @nlasm::reg_t
	})), ref state : @translator::state_t) {
	print(ref state, :call({dest => dest, mod => 'c_rt_lib', fun_name => fun_name, args => args}));
}

def save_loop_break(ref state : @translator::state_t, b : @nlasm::label_t, c : @nlasm::label_t) : @translator::loop_label {
	var loop_label = state->loop_label;
	var register = save_registers(ref state);
	state->loop_label->break = {label => b, logic => register, used => false};
	state->loop_label->continue = {label => c, logic => register, used => false};
	return loop_label;
}

def break_used(ref state : @translator::state_t) : ptd::bool() {
	return state->loop_label->break->used;
}

def continue_used(ref state : @translator::state_t) : ptd::bool() {
	return state->loop_label->continue->used;
}

def print_fora(as_fora : @nast::fora_t, ref state : @translator::state_t) {
	if (tct::is_own_type(as_fora->array->type, state->logic->defined_types)) {
		print_own_fora(as_fora, ref state);
	} else {
		print_ptd_fora(as_fora, ref state);
	}
}

def print_ptd_fora(as_fora : @nast::fora_t, ref state : @translator::state_t) {
	var fora_debug = state->debug->nast_debug;
	var arg = calc_val(as_fora->array, ref state);
	var iter_reg = print_var_decl(as_fora->iter, ref state, :value);
	var after_fora_instruction_no = get_sim_label(ref state);
	var increment_instruction_no = get_sim_label(ref state);
	var condition_instruction_no = get_sim_label(ref state);
	var index_register = new_register(ref state, :int);
	load_const(0, index_register, ref state);
	var one_register = new_register(ref state, :int);
	load_const(1, one_register, ref state);
	var arr_size = new_register(ref state, :int);
	print(ref state, :array_len({dest => arr_size, src => arg}));
	var condition_register = new_register(ref state, :bool);
	print_sim_label(condition_instruction_no, ref state);
	print_bin_op_operator_command(condition_register, index_register, arr_size, '>=', ref state);
	print_if_goto(after_fora_instruction_no, condition_register, ref state);
	var new_owner = new_register(ref state, :im);
	use_index(new_owner, arg, index_register, ref state);
	move(iter_reg, new_owner, ref state);
	var loop_label = save_loop_break(ref state, after_fora_instruction_no, increment_instruction_no);
	print_cmd(as_fora->cmd, ref state);
	undef_reg(iter_reg, ref state);
	print_sim_label(increment_instruction_no, ref state) if continue_used(ref state);
	start_new_instruction(translator::last_debug_char(fora_debug), ref state) unless as_fora->short;
	print(ref state, :bin_op({dest => index_register, left => index_register, right => one_register, op => '+'}));
	print(ref state, :goto(condition_instruction_no));
	print_sim_label(after_fora_instruction_no, ref state);
	state->loop_label = loop_label;
}

def print_own_fora(as_fora : @nast::fora_t, ref state : @translator::state_t) {
	var fora_debug = state->debug->nast_debug;
	var array_lvalue = get_value_of_lvalue(as_fora->array, true, ref state);
	var arg = array_lvalue[array::len(array_lvalue) - 1] as :value;
	var iter_reg = print_var_decl(as_fora->iter, ref state, :reference);
	var after_fora_instruction_no = get_sim_label(ref state);
	var increment_instruction_no = get_sim_label(ref state);
	var condition_instruction_no = get_sim_label(ref state);
	var index_register = new_register(ref state, :int);
	load_const(0, index_register, ref state);
	var one_register = new_register(ref state, :int);
	load_const(1, one_register, ref state);
	var arr_size = new_register(ref state, :int);
	print(ref state, :array_len({dest => arr_size, src => arg}));
	var condition_register = new_register(ref state, :bool);
	print_sim_label(condition_instruction_no, ref state);
	print_bin_op_operator_command(condition_register, index_register, arr_size, '>=', ref state);
	print_if_goto(after_fora_instruction_no, condition_register, ref state);
	var new_owner = iter_reg;
	use_index(new_owner, arg, index_register, ref state);
	var loop_label = save_loop_break(ref state, after_fora_instruction_no, increment_instruction_no);
	print_cmd(as_fora->cmd, ref state);
	print_sim_label(increment_instruction_no, ref state) if continue_used(ref state);
	start_new_instruction(translator::last_debug_char(fora_debug), ref state) unless as_fora->short;
	print(ref state, :bin_op({dest => index_register, left => index_register, right => one_register, op => '+'}));
	print(ref state, :goto(condition_instruction_no));
	print_sim_label(after_fora_instruction_no, ref state);
	set_value_of_lvalue(array_lvalue, false, ref state);
	state->loop_label = loop_label;
}

def print_loop(as_loop : @nast::cmd_t, ref state : @translator::state_t) {
	var after_loop_instruction_no = get_sim_label(ref state);
	var first_instruction_no = get_sim_label(ref state);
	print_sim_label(first_instruction_no, ref state);
	var loop_label = save_loop_break(ref state, after_loop_instruction_no, first_instruction_no);
	var register_old = save_registers(ref state);
	print_cmd(as_loop, ref state);
	restore_registers_only_clear(register_old, ref state);
	start_new_instruction(as_loop->debug, ref state);
	print(ref state, :goto(first_instruction_no));
	print_sim_label(after_loop_instruction_no, ref state) if break_used(ref state);
	state->loop_label = loop_label;
}

def print_rep(as_rep : @nast::rep_t, ref state : @translator::state_t) {
	var after_rep_label = get_sim_label(ref state);
	var increase_index_label = get_sim_label(ref state);
	var condition_label = get_sim_label(ref state);
	var max_rep = calc_val(as_rep->count, ref state);
	var iter_register = print_var_decl(as_rep->iter, ref state, :value);
	load_const(0, iter_register, ref state);
	var one_register = new_register(ref state, :int);
	load_const(1, one_register, ref state);
	var condition_register = new_register(ref state, :bool);
	print_sim_label(condition_label, ref state);
	print_bin_op_operator_command(condition_register, iter_register, max_rep, '>=', ref state);
	print_if_goto(after_rep_label, condition_register, ref state);
	var loop_label = save_loop_break(ref state, after_rep_label, increase_index_label);
	var register_old = save_registers(ref state);
	print_cmd(as_rep->cmd, ref state);
	restore_registers_only_clear(register_old, ref state);
	print_sim_label(increase_index_label, ref state) if continue_used(ref state);
	start_new_instruction(translator::last_debug_char(as_rep->cmd->debug), ref state) unless as_rep->short;
	print(ref state, :bin_op({dest => iter_register, left => iter_register, right => one_register, op => '+'}));
	print(ref state, :goto(condition_label));
	print_sim_label(after_rep_label, ref state);
	state->loop_label = loop_label;
}

def print_forh(as_forh : @nast::forh_t, ref state : @translator::state_t) {
	if (tct::is_own_type(as_forh->hash->type, state->logic->defined_types)) {
		print_own_forh(as_forh, ref state);
	} else {
		print_ptd_forh(as_forh, ref state);
	}
}

def print_ptd_forh(as_forh : @nast::forh_t, ref state : @translator::state_t) {
	var forh_debug = state->debug->nast_debug;
	var after_forh_label = get_sim_label(ref state);
	var next_iterator_label = get_sim_label(ref state);
	var condition_label = get_sim_label(ref state);
	var hash = calc_val(as_forh->hash, ref state);
	var key_register = print_var_decl(as_forh->key, ref state, :value);
	var condition_register = new_register(ref state, :bool);
	var value_register = print_var_decl(as_forh->val, ref state, :value);
	var keys_arr = new_register(ref state, :im);
	print(ref state, :hash_init_iter({iter => keys_arr, hash => hash}));
	print_sim_label(condition_label, ref state);
	print(ref state, :hash_is_end({dest => condition_register, iter => keys_arr, hash => hash}));
	print_if_goto(after_forh_label, condition_register, ref state);
	print(ref state, :hash_get_key_iter({dest => key_register, iter => keys_arr, hash => hash}));

	var dest_cast_needed = !nlasm::eq_reg_type(:im, value_register->type);
	var tmp_destination = value_register;
	tmp_destination = new_register(ref state, :im) if dest_cast_needed;
	print_call_base(tmp_destination, 'hash_get_value', [:val(hash), :val(key_register)], ref state);
	move(value_register, tmp_destination, ref state) if dest_cast_needed;

	var loop_label = save_loop_break(ref state, after_forh_label, next_iterator_label);
	var register_old = save_registers(ref state);
	print_cmd(as_forh->cmd, ref state);
	restore_registers_only_clear(register_old, ref state);
	print_sim_label(next_iterator_label, ref state) if continue_used(ref state);
	start_new_instruction(translator::last_debug_char(forh_debug), ref state) unless as_forh->short;
	print(ref state, :hash_next_iter({iter => keys_arr, hash => hash}));
	print(ref state, :goto(condition_label));
	print_sim_label(after_forh_label, ref state);
	state->loop_label = loop_label;
}

def print_own_forh(as_forh : @nast::forh_t, ref state : @translator::state_t) {
	var forh_debug = state->debug->nast_debug;
	var after_forh_label = get_sim_label(ref state);
	var next_iterator_label = get_sim_label(ref state);
	var condition_label = get_sim_label(ref state);
	var hash_lvalue = get_value_of_lvalue(as_forh->hash, true, ref state);
	var hash = hash_lvalue[array::len(hash_lvalue) - 1] as :value;
	var key_register = print_var_decl(as_forh->key, ref state, :value);
	var condition_register = new_register(ref state, :bool);
	var value_register = print_var_decl(as_forh->val, ref state, :reference);
	var iter = new_register(ref state, :int);
	print(ref state, :hash_init_iter({iter => iter, hash => hash}));
	print_sim_label(condition_label, ref state);
	print(ref state, :hash_is_end({dest => condition_register, iter => iter, hash => hash}));
	print_if_goto(after_forh_label, condition_register, ref state);
	print(ref state, :hash_get_key_iter({dest => key_register, iter => iter, hash => hash}));

	use_hash_index(value_register, hash, key_register, false, ref state);

	var loop_label = save_loop_break(ref state, after_forh_label, next_iterator_label);
	var register_old = save_registers(ref state);
	print_cmd(as_forh->cmd, ref state);
	restore_registers_only_clear(register_old, ref state);
	release_hash_index(value_register, hash, key_register, ref state);
	print_sim_label(next_iterator_label, ref state) if continue_used(ref state);
	start_new_instruction(translator::last_debug_char(forh_debug), ref state) unless as_forh->short;
	print(ref state, :hash_next_iter({iter => iter, hash => hash}));
	print(ref state, :goto(condition_label));
	print_sim_label(after_forh_label, ref state);
	set_value_of_lvalue(hash_lvalue, false, ref state);
	state->loop_label = loop_label;
}

def print_while(as_while : @nast::while_t, ref state : @translator::state_t) {
	var after_l = get_sim_label(ref state);
	var condition_l = get_sim_label(ref state);
	var while_debug = state->debug->nast_debug;
	print_sim_label(condition_l, ref state);
	var condition = calc_val(as_while->cond, ref state);
	var bool_condition = get_cast(condition, :bool, ref state);
	print(ref state, :una_op({dest => bool_condition, src => bool_condition, op => '!'}));
	print_if_goto(after_l, bool_condition, ref state);
	var loop_label = save_loop_break(ref state, after_l, condition_l);
	var register_old = save_registers(ref state);
	print_cmd(as_while->cmd, ref state);
	restore_registers_only_clear(register_old, ref state);
	start_new_instruction(translator::last_debug_char(while_debug), ref state) unless as_while->short;
	print(ref state, :goto(condition_l));
	print_sim_label(after_l, ref state);
	state->loop_label = loop_label;
}

def print_for(as_for : @nast::for_t, ref state : @translator::state_t) {
	var after_for_instruction_no = get_sim_label(ref state);
	var condition_instruction_no = get_sim_label(ref state);
	var increase_index_instruction_no = get_sim_label(ref state);
	match (as_for->start) case :value(var value) {
		print_val(value, {type => :im, reg_no => -1, access_type => :value}, ref state);
	} case :var_decl(var var_decl) {
		print_var_decl(var_decl, ref state, :value);
	}
	print_sim_label(condition_instruction_no, ref state);
	var cond_checked = false;
	if (!(as_for->cond->value is :nop)) {
		var condition_register = calc_val(as_for->cond, ref state);
		print(ref state, :una_op({dest => condition_register, src => condition_register, op => '!'}));
		print_if_goto(after_for_instruction_no, condition_register, ref state);
		cond_checked = true;
	}
	var loop_label = save_loop_break(ref state, after_for_instruction_no, increase_index_instruction_no);
	var register_old = save_registers(ref state);
	print_cmd(as_for->cmd, ref state);
	restore_registers_only_clear(register_old, ref state);
	print_sim_label(increase_index_instruction_no, ref state) if continue_used(ref state);
	print_val(as_for->iter, {type => :im, reg_no => -1, access_type => :value}, ref state);
	start_new_instruction(translator::last_debug_char(as_for->cmd->debug), ref state);
	print(ref state, :goto(condition_instruction_no));
	print_sim_label(after_for_instruction_no, ref state) if cond_checked || break_used(ref state);
	state->loop_label = loop_label;
}

def print_match(as_match : @nast::match_t, ref state : @translator::state_t) {
	var case_labels : ptd::arr(ptd::int()) = [];
	var arg : @nlasm::reg_t = calc_val(as_match->val, ref state);
	var ov_is_register = new_register(ref state, :bool);
	var nomatch_register = new_register(ref state, :im);
	var end_label = get_sim_label(ref state);
	fora var case_el (as_match->branch_list) {
		start_new_instruction(case_el->debug, ref state);
		var label_no = get_label_number(ref state, as_match->val->type, case_el->variant->name);
		print(ref state, :ov_is({dest => ov_is_register, src => arg, type => case_el->variant->name, label_no => label_no}));
		var label = get_sim_label(ref state);
		print_if_goto(label, ov_is_register, ref state);
		array::push(ref case_labels, label);
	}
	load_const('NOMATCHALERT', nomatch_register, ref state);
	print(ref state, :arr_decl({dest => nomatch_register, src => [nomatch_register, arg]}));
	print(ref state, :die(nomatch_register));
	var i = 0;
	var var_reg;
	fora var case_el (as_match->branch_list) {
		start_new_instruction(case_el->cmd->debug, ref state);
		print_sim_label(case_labels[i], ref state);
		match (case_el->variant->value) case :value(var variant_value) {
			match (variant_value->mod) case :none {
				var_reg = print_var_decl(variant_value->declaration, ref state, :value);
				var cast_needed = !tct::is_own_type(as_match->val->type, state->logic->defined_types);
				var tmp_destination = var_reg;
				tmp_destination = new_register(ref state, :im) if cast_needed;
				print(ref state, :ov_as({dest => tmp_destination, src => arg, type => case_el->variant->name, label_no => -1}));
				move(var_reg, tmp_destination, ref state) if cast_needed;
			} case :ref {
				var_reg = print_var_decl(variant_value->declaration, ref state, :reference);
				use_variant(var_reg, arg, case_el->variant->name, ref state);
			}
		} case :none {
			var_reg = { type => :im, reg_no => -1, access_type => :value };
		}
		print_cmd(case_el->cmd, ref state);
		match (case_el->variant->value) case :value(var variant_value) {
			match (variant_value->mod) case :none {
			} case :ref {
				release_variant(var_reg, arg, case_el->variant->name, ref state);
			}
		} case :none {
		}
		start_new_instruction(translator::last_debug_char(case_el->cmd->debug), ref state);
		print(ref state, :goto(end_label));
		++i;
	}
	print_sim_label(end_label, ref state);
}

def move(destination : @nlasm::reg_t, source : @nlasm::reg_t, ref state : @translator::state_t) {
	return if nlasm::is_empty(destination);
	print(ref state, :move({dest => destination, src => source}));
}

def use_field(new_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, field_name : ptd::string(), ref state : @translator::state_t) : ptd::void() {
	print(ref state, :use_field({new_owner => new_owner, old_owner => old_owner, field_name => field_name}));
}

def release_field(current_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, field_name : ptd::string(), ref state : @translator::state_t) : ptd::void() {
	print(ref state, :release_field({current_owner => current_owner, old_owner => old_owner, field_name => field_name}));
}

def use_index(new_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, index : @nlasm::reg_t, ref state : @translator::state_t) : ptd::void() {
	var real_index = get_cast(index, :int, ref state);
	print(ref state, :use_index({new_owner => new_owner, old_owner => old_owner, index => real_index}));
}

def release_index(current_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, index : @nlasm::reg_t, ref state : @translator::state_t) : ptd::void() {
	var real_index = get_cast(index, :int, ref state);
	print(ref state, :release_index({current_owner => current_owner, old_owner => old_owner, index => real_index}));
}

def use_hash_index(new_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, index : @nlasm::reg_t,
		create_if_not_exist : ptd::bool(), ref state : @translator::state_t) : ptd::void() {
	print(ref state, :use_hash_index({new_owner => new_owner, old_owner => old_owner, index => index, create_if_not_exist => create_if_not_exist}));
}

def release_hash_index(current_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, index : @nlasm::reg_t, ref state : @translator::state_t) : ptd::void() {
	print(ref state, :release_hash_index({current_owner => current_owner, old_owner => old_owner, index => index}));
}
def use_variant(new_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, label : ptd::string(), ref state : @translator::state_t) : ptd::void() {
	var label_no = -1;
	label_no = get_label_number(ref state, old_owner->type as :variant, label) if old_owner->type is :variant;
	print(ref state, :use_variant({new_owner => new_owner, old_owner => old_owner, label => label, label_no => label_no}));
}

def release_variant(current_owner : @nlasm::reg_t, old_owner : @nlasm::reg_t, label : ptd::string(),  ref state : @translator::state_t) : ptd::void() {
	var label_no = -1;
	label_no = get_label_number(ref state, old_owner->type as :variant, label) if old_owner->type is :variant;
	print(ref state, :release_variant({current_owner => current_owner, old_owner => old_owner, label => label, label_no => label_no}));
}

def print_bin_op_operator_command(destination : @nlasm::reg_t, arg_1 : @nlasm::reg_t, arg_2 : @nlasm::reg_t, operator : 
		ptd::string(), ref state : @translator::state_t) {
	var real_arg_1 = arg_1;
	var real_arg_2 = arg_2;
	var real_dest = destination;
	var real_dest_different = false;
	var expected_type = :int;
	var expected_dest_type = :int;
	if (operator eq '.' || operator eq '.=' || operator eq 'eq' || operator eq 'ne') {
		expected_type = :string;
		if(operator eq '.' || operator eq '.=') {
			expected_dest_type = :string;
		} else {
			expected_dest_type = :bool;
		}
	}
	if (operator eq '<' || operator eq '<=' || operator eq '>' || operator eq '>=' ||
			operator eq '==' || operator eq '!=') {
		expected_dest_type = :bool;
	}
	if (!nlasm::eq_reg_type(arg_1->type, expected_type)) {
		real_arg_1 = new_register(ref state, expected_type);
		move(real_arg_1, arg_1, ref state);
	}
	if (!nlasm::eq_reg_type(arg_2->type, expected_type)) {
		real_arg_2 = new_register(ref state, expected_type);
		move(real_arg_2, arg_2, ref state);
	}
	if (!nlasm::eq_reg_type(destination->type, expected_dest_type)) {
		real_dest = new_register(ref state, expected_dest_type);
		real_dest_different = true;
	}
	if (operator eq '+' || operator eq '+=') {
		operator = '+';
	} elsif (operator eq '-' || operator eq '-=') {
		operator = '-';
	} elsif (operator eq '*' || operator eq '*=') {
		operator = '*';
	} elsif (operator eq '/' || operator eq '/=') {
		operator = '/';
	} elsif (operator eq '.' || operator eq '.=') {
		operator = '.';
	}
	print(ref state, :bin_op({dest => real_dest, left => real_arg_1, right => real_arg_2, op => operator}));
	if (real_dest_different) {
		move(destination, real_dest, ref state);
	}
}

def print(ref state : @translator::state_t, ord : @nlasm::order_t) {
	var cmd = {cmd => ord, debug => state->debug, annotation => :none};
	array::push(ref state->result->commands, cmd);
	state->debug->declarations = {};
}

def print_if_goto(destination : @nlasm::label_t, reg : @nlasm::reg_t, ref state : @translator::state_t) {
	print(ref state, :if_goto({dest => destination, src => reg}));
}

def print_get_from_index(destination : @nlasm::reg_t, src : @nlasm::reg_t, index : @nlasm::reg_t, ref state : 
	@translator::state_t) {
	var real_index = get_cast(index, :int, ref state);
	var type_from_src;
	if (src->type is :im) {
		type_from_src = :im;
	} elsif (src->type is :arr) {
		type_from_src = var_type_to_reg_type((src->type as :arr) as :tct_own_arr, state->logic->defined_types);
	} else {
		die;
	}
	var dest_cast_needed = !nlasm::eq_reg_type(type_from_src, destination->type);
	var tmp_destination = destination;
	tmp_destination = new_register(ref state, type_from_src) if dest_cast_needed;
	print(ref state, :get_frm_idx({dest => tmp_destination, src => src, idx => real_index}));
	move(destination, tmp_destination, ref state) if dest_cast_needed;
}

def print_set_at_index(label : @nlasm::reg_t, index : @nlasm::reg_t, value : @nlasm::reg_t, ref state : 
	@translator::state_t) {
	var real_index = get_cast(index, :int, ref state);
	print(ref state, :set_at_idx({src => label, idx => real_index, val => value}));
}

def print_array_push(dest : @nlasm::reg_t, value : @nlasm::reg_t, ref state : @translator::state_t) {
	var real_value = value;
	if (dest->type is :im) {
		real_value = get_cast(value, :im, ref state);
	}
	if (!value->type is :im && !value->type is :string)	{
		state->logic->register_to_clear[value->reg_no] = false;
	}
	print(ref state, :array_push({dest => dest, val => real_value}));
}

def print_get_value(destination : @nlasm::reg_t, src : @nlasm::reg_t, key : ptd::string(), ref state : 
	@translator::state_t) {
	var type_from_src;
	if (src->type is :im) {
		type_from_src = :im;
	} elsif (src->type is :hash) {
		var unwrapped_inner = unwrap_ref(src->type as :hash, state->logic->defined_types) as :tct_own_hash;
		unwrapped_inner = unwrap_ref(unwrapped_inner, state->logic->defined_types);
		type_from_src = var_type_to_reg_type(unwrapped_inner, state->logic->defined_types);
	} else {
		die;
	}
	var dest_cast_needed = !nlasm::eq_reg_type(type_from_src, destination->type);
	var tmp_destination = destination;
	tmp_destination = new_register(ref state, type_from_src) if dest_cast_needed;
	print(ref state, :get_val({dest => tmp_destination, src => src, key => key}));
	move(destination, tmp_destination, ref state) if dest_cast_needed;
}

def print_set_value(label : @nlasm::reg_t, key : ptd::string(), value : @nlasm::reg_t, ref state : @translator::state_t) {
	print(ref state, :set_val({src => label, key => key, val => value}));
}

def translator::struct_of_lvalue_t() {
	return ptd::arr(ptd::var({
		index => @nast::value_t,
		use_index => ptd::rec({
			dest_type => @tct::meta_type,
			index => @nast::value_t,
		}),
		key => ptd::string(),
		use_field => ptd::rec({
			dest_type => @tct::meta_type,
			field_name => ptd::string(),
		}),
		hashkey => @nast::value_t,
		use_hash_index => ptd::rec({
			dest_type => @tct::meta_type,
			index => @nast::value_t,
		}),
		as => ptd::string(),
		use_variant => ptd::rec({
			dest_type => @tct::meta_type,
			label => ptd::string(),
		}),
	}));
}

def get_struct_of_lvalue(ref left : @nast::value_t, ref state : @translator::state_t) : @translator::struct_of_lvalue_t {
	var ret = [];
	while (true) {
		if (left->value is :bin_op) {
			var bin_op : @nast::bin_op_t = left->value as :bin_op;
			var op = bin_op->op;
			die unless op eq 'ARRAY_INDEX' || op eq 'HASH_INDEX' || op eq '->' || op eq 'OV_AS';
			var new_ret = [];
			if (bin_op->op eq 'ARRAY_INDEX') {
				var left_type = unwrap_ref(bin_op->left->type, state->logic->defined_types);
				if (left_type is :tct_own_arr) {
					new_ret = [:use_index({
						dest_type => (left_type as :tct_own_arr),
						index => bin_op->right
					})];
				} else {
					new_ret = [:index(bin_op->right)];
				}
			} elsif (bin_op->op eq 'HASH_INDEX') {
				var left_type = unwrap_ref(bin_op->left->type, state->logic->defined_types);
				if (left_type is :tct_own_hash) {
					new_ret = [:use_hash_index({
						dest_type => (left_type as :tct_own_hash),
						index => bin_op->right,
					})];
				} else {
				new_ret = [:hashkey(bin_op->right)];
				}
			} elsif (bin_op->op eq '->') {
				var left_type = unwrap_ref(bin_op->left->type, state->logic->defined_types);
				if (left_type is :tct_own_rec) {
					var field_name = bin_op->right->value as :hash_key;
					new_ret = [:use_field({
						dest_type => (left_type as :tct_own_rec){field_name},
						field_name => field_name,
					})];
				} elsif (left_type is :tct_own_hash) {
					new_ret = [:use_hash_index({
						dest_type => (left_type as :tct_own_hash),
						index => bin_op->right,
					})];
				} else {
					new_ret = [:key(bin_op->right->value as :hash_key)];
				}
			} elsif (bin_op->op eq 'OV_AS') {
				var left_type = unwrap_ref(bin_op->left->type, state->logic->defined_types);
				var right_val = bin_op->right->value as :hash_key;
				if (left_type is :tct_own_var) {
					new_ret = [:use_variant({
						dest_type => (left_type as :tct_own_var){right_val} as :with_param,
						label => right_val,
					})];
				} elsif (left_type is :tct_var || left_type is :tct_im) {
					new_ret = [:as(right_val)];
				} else {
					die;
				}
			} else {
				die;
			}
			array::append(ref new_ret, ret);
			ret = new_ret;
			left = bin_op->left;
		} elsif (left->value is :parenthesis) {
			left = left->value as :parenthesis;
		} else {
			break;
		}
	}
	return ret;
}

def get_value_of_lvalue(left : @nast::value_t, get_value : ptd::bool(), ref state : @translator::state_t) :
	@translator::lvalue_values_t {
	var ret = get_struct_of_lvalue(ref left, ref state);
	var label : ptd::string() = left->value as :var;
	var temp_structures = [get_var_register(label, ref state)];
	var lvalue_values = [];
	rep var i (array::len(ret)) {
		match (ret[i]) case :index(var value) {
			array::push(ref temp_structures, new_register(ref state, :im));
			var arg = get_cast(calc_val(value, ref state), :int, ref state);
			array::push(ref lvalue_values, :index({value => temp_structures[i], index => arg}));
			break if (!get_value && i == array::len(ret) - 1);
			print_call_base(temp_structures[i + 1], 'get_ref_arr', [:val(temp_structures[i]), :val(arg)], ref state);
		} case :use_index(var value) {
			var new_reg_type = var_type_to_reg_type(value->dest_type, state->logic->defined_types);
			var index = calc_val(value->index, ref state);
			array::push(ref temp_structures, new_reference_register(ref state, new_reg_type));
			array::push(ref lvalue_values, :use_index({src_reg => temp_structures[i], dest_reg => temp_structures[i + 1], index => index}));
			use_index(temp_structures[i + 1], temp_structures[i], index, ref state);
		} case :hashkey(var value) {
			array::push(ref temp_structures, new_register(ref state, :im));
			var arg = calc_val(value, ref state);
			array::push(ref lvalue_values, :hashkey({value => temp_structures[i], key => arg}));
			break if (!get_value && i == array::len(ret) - 1);
			print_call_base(temp_structures[i + 1], 'get_ref_hash', [:val(temp_structures[i]), :val(arg)], ref state);
		} case :key(var value) {
			array::push(ref temp_structures, new_register(ref state, :im));
			array::push(ref lvalue_values, :key({value => temp_structures[i], key => value}));
			break if (!get_value && i == array::len(ret) - 1);
			load_const(value, temp_structures[i + 1], ref state);
			print_call_base(temp_structures[i + 1], 'get_ref_hash', [
					:val(temp_structures[i]),
					:val(temp_structures[i + 1])
				], ref state);
		} case :use_field(var value) {
			var new_reg_type = var_type_to_reg_type(value->dest_type, state->logic->defined_types);
			array::push(ref temp_structures, new_reference_register(ref state, new_reg_type));
			array::push(ref lvalue_values, :use_field({src_reg => temp_structures[i], dest_reg => temp_structures[i + 1], field_name => value->field_name}));
			use_field(temp_structures[i + 1], temp_structures[i], value->field_name, ref state);
		} case :as(var as_label) {
			array::push(ref temp_structures, new_register(ref state, :im));
			array::push(ref lvalue_values, :as({value => temp_structures[i], label => as_label}));
			print(ref state, :ov_as({dest => temp_structures[i + 1], src => temp_structures[i], type => as_label, label_no => -1}));
		} case :use_variant(var value ){
			var new_reg_type = var_type_to_reg_type(value->dest_type, state->logic->defined_types);
			array::push(ref temp_structures, new_reference_register(ref state, new_reg_type));
			array::push(ref lvalue_values, :use_variant({src_reg => temp_structures[i], dest_reg => temp_structures[i + 1], label => value->label}));
			use_variant(temp_structures[i + 1], temp_structures[i], value->label, ref state);
		} case :use_hash_index(var value) {
			var new_reg_type = var_type_to_reg_type(value->dest_type, state->logic->defined_types);
			var index = calc_val(value->index, ref state);
			array::push(ref temp_structures, new_reference_register(ref state, new_reg_type));
			array::push(ref lvalue_values, :use_hash_index({src_reg => temp_structures[i], dest_reg => temp_structures[i + 1], index => index}));
			use_hash_index(temp_structures[i + 1], temp_structures[i], index, !get_value, ref state);
		}
	}
	array::push(ref lvalue_values, :value(temp_structures[array::len(temp_structures) - 1]));
	return lvalue_values;
}

def set_value_of_lvalue(lvalue_values : @translator::lvalue_values_t, get_value : ptd::bool(), ref state :
	@translator::state_t) {
	var list_size = array::len(lvalue_values);
	var last_reg : @nlasm::reg_t = lvalue_values[list_size - 1] as :value;
	var key_reg : @nlasm::reg_t = {type => :im, reg_no => -1, access_type => :value};
	for(var i = list_size - 2; i >= 0; --i) {
		match (lvalue_values[i]) case :value(var reg) {
			die;
		} case :index(var arr) {
			if (!get_value && i == list_size - 2) {
				print_set_at_index(arr->value, arr->index, last_reg, ref state);
			} else {
				print_call_base({type => :im, reg_no => -1, access_type => :value}, 'set_ref_arr', [:ref(arr->value), :val(arr->index), :val(last_reg)], ref state);
			}
			last_reg = arr->value;
		} case :use_index(var use_index) {
			release_index(use_index->dest_reg, use_index->src_reg, use_index->index, ref state);
		} case :hashkey(var hash) {
			if (!get_value && i == list_size - 2) {
				print_call_base({type => :im, reg_no => -1, access_type => :value}, 'hash_set_value', [:ref(hash->value), :val(hash->key), :val(last_reg)], ref state);
			} else {
				print_call_base({type => :im, reg_no => -1, access_type => :value}, 'set_ref_hash', [:ref(hash->value), :val(hash->key), :val(last_reg)], ref state);
			}
			last_reg = hash->value;
		} case :key(var hash) {
			if (!get_value && i == list_size - 2) {
				print_set_value(hash->value, hash->key, last_reg, ref state);
			} else {
				key_reg = new_register(ref state, :string) if nlasm::is_empty(key_reg);
				load_const(hash->key, key_reg, ref state);
				print_call_base({type => :im, reg_no => -1, access_type => :value}, 'set_ref_hash', [:ref(hash->value), :val(key_reg), :val(last_reg)], ref state);
			}
			last_reg = hash->value;
		} case :use_field(var use_field) {
			release_field(use_field->dest_reg, use_field->src_reg, use_field->field_name, ref state);
		} case :as (var as_value) {
			print(ref state, :ov_mk({dest => as_value->value, src => :arg(last_reg), label => as_value->label, label_no => -1, inner_type => :tct_im}));
			last_reg = as_value->value;
		} case :use_variant(var use_variant) {
			release_variant(use_variant->dest_reg, use_variant->src_reg, use_variant->label, ref state);
		} case :use_hash_index(var use_hash_index) {
			release_hash_index(use_hash_index->dest_reg, use_hash_index->src_reg, use_hash_index->index, ref state);
		}
	}
}

def make_string(string : @translator::string_t, ref state : @translator::state_t) : ptd::string() {
	var result = '';
	var index = 0;
	fora var str_line (string->arr) {
		result .= string::lf() if (index > 0);
		result .= str_line;
		++index;
	}
	match (string->last) case :new_line {
		result .= string::lf();
	} case :end {
	}
	return result;
}

def print_ternary_op(op : @nast::ternary_op_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	die unless op->op eq '?';
	var end_label = get_sim_label(ref state);
	var first_label = get_sim_label(ref state);
	var condition = get_cast(dest_val(op->fst, ref state), :bool, ref state);
	print_if_goto(first_label, condition, ref state);
	print_val(op->thrd, destination, ref state);
	print(ref state, :goto(end_label));
	print_sim_label(first_label, ref state);
	print_val(op->snd, destination, ref state);
	print_sim_label(end_label, ref state);
}

def print_die(value : ptd::arr(@nast::value_t), debug : @nast::debug_t, ref state : @translator::state_t) {
	var arg = new_register(ref state, :im);
	print_val({debug => debug, value => :arr_decl(value), type => :tct_arr(:tct_im)}, arg, ref state);
	print(ref state, :die(arg));
}

def print_return(as_return : @nast::value_t, ref state : @translator::state_t) {
	var ret = :emp;
	if (!(as_return->value is :nop)) {
		var src_return_reg = calc_val(as_return, ref state);
		var dst_return_reg = get_cast(src_return_reg, var_type_to_reg_type(state->result->ret_type, state->logic->defined_types), ref state);
		ret = :val(dst_return_reg);
	}
	print_safe_return(ret, ref state);
}

def print_safe_return(to_return : ptd::var({val => @nlasm::reg_t, emp => ptd::none()}), ref state : @translator::state_t) {
	var return_value : @nlasm::reg_t = {type => :im, reg_no => -1, access_type => :value};
	var args = state->result->args_type;
	if (to_return is :val) {
		return_value = to_return as :val;
		if (return_value->reg_no < array::len(args) && args[return_value->reg_no]->by is :ref) {
			return_value = new_register(ref state, var_type_to_reg_type(state->result->ret_type, state->logic->defined_types));
			move(return_value, to_return as :val, ref state);
			to_return = :val(return_value);
		}
	}
	fora var reg (state->logic->registers) {
		continue if (reg->reg_no < array::len(args) && args[reg->reg_no]->by is :ref);
		continue if (reg->reg_no == return_value->reg_no);
		undef_reg(reg, ref state);
	}
	print(ref state, :return(to_return));
}

def dest_val(value : @nast::value_t, ref state : @translator::state_t) : @nlasm::reg_t {
	if (value->value is :var) {
		return get_var_register(value->value as :var, ref state);
	}
	var reg_type = value_type_to_reg_type(value, ref state);
	var value_type = value->type;
	while (value_type is :tct_ref) {
		value_type = state->logic->defined_types{value_type as :tct_ref};
	}
	var destination;
	if (value->value is :bin_op && tct::is_own_type(value->type, state->logic->defined_types)) {
		destination = new_reference_register(ref state, reg_type);
	} else {
		destination = new_register(ref state, reg_type);
	}
	print_val(value, destination, ref state);
	return destination;
}

def def_val(value : @nast::value_t, first : @nlasm::reg_t, second : @nlasm::reg_t, ref state : @translator::state_t) : 
	@nlasm::reg_t {
	first = second if nlasm::is_empty(first);
	print_val(value, first, ref state);
	return first;
}

def calc_val(value : @nast::value_t, ref state : @translator::state_t) : @nlasm::reg_t {
	var val_reg_type = value_type_to_reg_type(value, ref state);
	if (value->value is :var) {
		return get_var_register(value->value as :var, ref state);
	}

	var ready_value : @nlasm::reg_t;
	ready_value = new_register(ref state, val_reg_type);
	if (tct::is_own_type(value->type, state->logic->defined_types)) {
		print_val_init(value, ready_value, ref state);
	} else {
		print_val(value, ready_value, ref state);
	}
	
	return ready_value;
}

def get_var_register(label : ptd::string(), ref state : @translator::state_t) : @nlasm::reg_t {
	return hash::get_value(state->logic->variables, label);
}

def new_declaration(fun_arg_name : ptd::string(), ref state : @translator::state_t, type : @nlasm::reg_type,
		access_type : @nlasm::reg_access_type_t) : @nlasm::reg_t {
	var reg;
	match (access_type) case :value {
		reg = new_register(ref state, type);
	} case :reference {
		reg = new_reference_register(ref state, type);
	}
	hash::set_value(ref state->logic->variables, fun_arg_name, reg);
	hash::set_value(ref state->debug->declarations, fun_arg_name, reg);
	return reg;
}

def new_register(ref state : @translator::state_t, type : @nlasm::reg_type) : @nlasm::reg_t {
	var new_reg_no = array::len(state->logic->registers);
	var register = {type => type, reg_no => new_reg_no, access_type => :value};
	state->logic->registers []= register;
	state->logic->register++;
	state->logic->register_to_clear []= true;
	state->result->registers []= register;
	return state->logic->registers[new_reg_no];
}

def new_reference_register(ref state : @translator::state_t, type : @nlasm::reg_type) : @nlasm::reg_t {
	var new_reg_no = array::len(state->logic->registers);
	var register = {type => type, reg_no => new_reg_no, access_type => :reference};
	state->logic->registers []= register;
	state->logic->register++;
	state->logic->register_to_clear []= true;
	state->result->registers []= register;
	return state->logic->registers[new_reg_no];
}

def save_registers(ref state : @translator::state_t) : @translator::function_logic_t {
	return state->logic;
}

def undef_reg(reg : @nlasm::reg_t, ref state : @translator::state_t) {
	match (reg->access_type) case :value {
		print(ref state, :clear(reg)) if state->logic->register_to_clear[reg->reg_no];
	} case :reference {
	}
}

def restore_registers_only_clear(register_old : @translator::function_logic_t, ref state : @translator::state_t) {
	for(var i = register_old->register; i < state->logic->register; ++i) {
		undef_reg(state->logic->registers[i], ref state);
	}
}

def restore_registers(register_old : @translator::function_logic_t, ref state : @translator::state_t) {
	for(var i = register_old->register; i < state->logic->register; ++i) {
		undef_reg(state->logic->registers[i], ref state);
		state->logic->register_to_clear[i] = false;
	}
}

def print_sim_label(label : @nlasm::label_t, ref state : @translator::state_t) {
	print(ref state, :prt_lbl(label));
}

def get_sim_label(ref state : @translator::state_t) : @nlasm::label_t {
	++state->label_nr;
	return state->label_nr;
}

def value_type_to_reg_type(value : @nast::value_t, ref state : @translator::state_t) : @nlasm::reg_type {
	return var_type_to_reg_type(value->type, state->logic->defined_types);
}

def get_cast(reg : @nlasm::reg_t, expected_type : @nlasm::reg_type, ref state : @translator::state_t) : @nlasm::reg_t {
	if (nlasm::eq_reg_type(reg->type, expected_type))  {
		return reg;
	}
	var reg_after_cast;
	match (reg->access_type) case :value {
		reg_after_cast = new_register(ref state, expected_type);
	} case :reference {
		reg_after_cast = new_reference_register(ref state, expected_type);
	}
	move(reg_after_cast, reg, ref state);
	return reg_after_cast;
}

def var_type_to_reg_type(type : @tct::meta_type, defined_types : ptd::hash(@tct::meta_type)) : @nlasm::reg_type {
	match (type) case :tct_rec(var rec_type) {
		return :im;
	} case :tct_own_rec(var rec_type) {
		return :rec(type);
	} case :tct_hash(var hash_type) {
		return :im;
	} case :tct_own_hash(var hash_type) {
		return :hash(type);
	} case :tct_arr(var arr_type) {
		return :im;
	} case :tct_own_arr(var arr_type) {
		return :arr(type);
	} case :tct_var(var var_type) {
		return :im;
	} case :tct_own_var(var var_type) {
		return :variant(type);
	} case :tct_ref(var ref_type) {
		if (ref_type eq 'boolean_t::type') {
			return :bool;
		} elsif (defined_types{ref_type} is :tct_own_rec) {
			return :rec(type);
		} elsif (defined_types{ref_type} is :tct_own_arr) {
			return :arr(type);
		} elsif (defined_types{ref_type} is :tct_own_var) {
			return :variant(type);
		} elsif (defined_types{ref_type} is :tct_own_hash) {
			return :hash(type);
		} elsif (defined_types{ref_type} is :tct_int) {
			return :int;
		}
		return :im;
	} case :tct_int {
		return :int;
	} case :tct_string {
		return :im;
	} case :tct_bool {
		return :bool;
	} case :tct_empty {
		return :im;
	} case :tct_void {
		return :im;
	} case :tct_im {
		return :im;
	}
}

def print_val_init(val : @nast::value_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	state->debug->nast_debug = val->debug;
	if (!tct::is_own_type(val->type, state->logic->defined_types)) {
		print_val(val, destination, ref state);
		return;
	}
	match (val->value) case :const(var const) {
		load_const(const, destination, ref state);
	} case :string(var str) {
		die;
	} case :bool(var bool) {
		load_const(bool, destination, ref state);
	} case :ternary_op(var op) {
		die;
	} case :hash_key(var key) {
		die;
	} case :variant(var variant) {
		var var_value;
		var inner_type;
		if (variant->var->value is :nop) {
			var_value = :emp;
			inner_type = :tct_void;
		} else {
			var variant_values = unwrap_ref(val->type, state->logic->defined_types) as :tct_own_var;
			inner_type = variant_values{variant->name} as :with_param;
			var var_value_reg = new_register(ref state, var_type_to_reg_type(inner_type, state->logic->defined_types));
			print_val_init(variant->var, var_value_reg, ref state);
			state->logic->register_to_clear[var_value_reg->reg_no] = false;
			var_value = :arg(var_value_reg);
		}
		print(ref state, :ov_mk({
			dest => destination,
			src => var_value,
			label => variant->name,
			label_no => get_label_number(ref state, val->type, variant->name),
			inner_type => inner_type
		}));
	} case :var(var variable) {
		die;
	} case :parenthesis(var parenthesis) {
		die;
	} case :bin_op(var bin_op) {
		die;
	} case :unary_op(var unary_op) {
		die;
	} case :fun_val(var fun_val) {
		die;
	} case :arr_decl(var arr_decl) {
		print(ref state, :arr_decl({dest => destination, src => []}));
		var inner_type = unwrap_ref(val->type, state->logic->defined_types) as :tct_own_arr;
		fora var el (arr_decl) {
			var el_value_reg = new_register(ref state, var_type_to_reg_type(inner_type, state->logic->defined_types));
			print_val_init(el, el_value_reg, ref state);
			print_array_push(destination, el_value_reg, ref state);
		}
	} case :hash_decl(var hash_decl) {
		var hash_type = unwrap_ref(val->type, state->logic->defined_types);
		if (hash_type is :tct_own_rec) {
			var fields = [];
			fields []= field->key->value as :hash_key fora var field (hash_decl);
			print(ref state, :empty_hash_decl({dest => destination, fields => fields}));
			fora var hash_el (hash_decl) {
				var new_reg = new_reference_register(ref state, var_type_to_reg_type(hash_el->val->type, state->logic->defined_types));
				var field_name = hash_el->key->value as :hash_key;
				use_field(new_reg, destination, field_name, ref state);
				print_val_init(hash_el->val, new_reg, ref state);
				release_field(new_reg, destination, field_name, ref state);
			}
		} elsif (hash_type is :tct_own_hash) {
			print(ref state, :hash_decl({dest => destination, src => []}));
			fora var hash_el (hash_decl) {
				var new_reg = new_reference_register(ref state, var_type_to_reg_type(hash_el->val->type, state->logic->defined_types));
				var key = new_register(ref state, :string);
				load_const(hash_el->key->value as :hash_key, key, ref state);
				use_hash_index(new_reg, destination, key, true, ref state);
				print_val_init(hash_el->val, new_reg, ref state);
				release_hash_index(new_reg, destination, key, ref state);
			}
		} else {
			die;
		}
	} case :nop {
		die;
	} case :fun_label(var fun_label) {
		die;
	} case :post_inc(var inc) {
		die;
	} case :post_dec(var dec) {
		die;
	}
}

def unwrap_ref(type : @tct::meta_type, defined_types : ptd::hash(@tct::meta_type)) : @tct::meta_type {
	while (type is :tct_ref) {
		var type_name = type as :tct_ref;
		type = defined_types{type_name};
	}
	return type;
}

def get_label_number(ref state : @translator::state_t, variant : @tct::meta_type, label : ptd::string()) : ptd::int() {
	var i = 0;
	var variant_type = unwrap_ref(variant, state->logic->defined_types);
	if (!tct::is_own_type(variant, state->logic->defined_types)) {
		return -1;
	}
	forh var key, var value (variant_type as :tct_own_var) {
		return i if key eq label;
		i++;
	}
	die;
}
