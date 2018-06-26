###
# (c) Atinea Sp. z o.o.
###

use own;
use own_array;
use ptd;
use nlasm;
use string;
use array;
use hash;
use ov;
use singleton;
use nl;
use string_utils;
use tct;
use generator_c_struct_dependence_sort;
use anon_naming;

def get_bin_ops() : ptd::hash(ptd::string()) {
	return singleton::sigleton_do_not_use_without_approval(gen_bin_ops());
}

def get_bin_ops_mod() : ptd::hash(ptd::string()) {
	return singleton::sigleton_do_not_use_without_approval(gen_bin_ops_mod());
}

def get_unary_ops() : ptd::hash(ptd::string()) {
	return singleton::sigleton_do_not_use_without_approval(gen_unary_ops());
}

def gen_unary_ops() : ptd::hash(ptd::string()) {
	var ret = {};
	hash::set_value(ref ret, '!', 'not');
	hash::set_value(ref ret, '-', 'unary_minus');
	hash::set_value(ref ret, '+', 'unary_plus');
	return ret;
}

def gen_bin_ops() : ptd::hash(ptd::string()) {
	var ret = {};
	hash::set_value(ref ret, 'eq', 'eq');
	hash::set_value(ref ret, 'ne', 'ne');
	hash::set_value(ref ret, '+', 'add');
	hash::set_value(ref ret, '-', 'sub');
	hash::set_value(ref ret, '*', 'mul');
	hash::set_value(ref ret, '/', 'div');
	hash::set_value(ref ret, '%', 'mod');
	hash::set_value(ref ret, '<=', 'le');
	hash::set_value(ref ret, '<', 'lt');
	hash::set_value(ref ret, '==', 'num_eq');
	hash::set_value(ref ret, '!=', 'num_ne');
	hash::set_value(ref ret, '>', 'gt');
	hash::set_value(ref ret, '>=', 'ge');
	hash::set_value(ref ret, '.', 'concat_new');
	return ret;
}

def gen_bin_ops_mod() : ptd::hash(ptd::string()) {
	var ret = {};
	hash::set_value(ref ret, '+', 'add_mod');
	hash::set_value(ref ret, '-', 'sub_mod');
	hash::set_value(ref ret, '*', 'mul_mod');
	hash::set_value(ref ret, '/', 'div_mod');
	hash::set_value(ref ret, '%', 'mod_mod');
	hash::set_value(ref ret, '.', 'concat_add');
	return ret;
}

def generator_c::const_dict() {
	return ptd::rec({arr => ptd::arr(ptd::string()), hash => ptd::hash(ptd::string())});
}

def generator_c::fun_args_t() {
	return ptd::arr(@nlasm::arg_type_t);
}

def generator_c::const_t() {
	return own::rec({arr => own::arr(ptd::string()), hash => ptd::hash(ptd::int())});
}

def generator_c::global_const_t() {
	return ptd::rec({
			arr => ptd::arr(ptd::rec({key => ptd::string(), uses => ptd::int()})),
			hash => ptd::hash(ptd::int()),
			holes => ptd::arr(ptd::int()),
			module_consts => ptd::hash(ptd::hash(ptd::string()))
		});
}

def generator_c::state_t() {
	return own::rec({
			global_const => @generator_c::global_const_t,
			header => ptd::string(),
			ret => ptd::string(),
			additional_imports => own::hash(ptd::bool()),
			mod_name => ptd::string(),
			fun_args => @generator_c::fun_args_t,
			ret_type => @tct::meta_type,
			const => own::rec({
					sim => @generator_c::const_t,
					singleton => @generator_c::const_t,
					dynamic_nr => ptd::int()
				}),
			defined_types => ptd::hash(@tct::meta_type),
		});
}

def print(ref state : @generator_c::state_t, s : ptd::string()) : ptd::void() {
	state->ret .= s;
}

def print_to_header(ref state : @generator_c::state_t, s : ptd::string()) {
	state->header .= s;
}

def println_to_header(ref state : @generator_c::state_t, s : ptd::string()) {
	state->header .= s . string::lf();
}

def im_t() : ptd::string() {
	return 'ImmT ';
}

def int_t() : ptd::string() {
	return 'INT ';
}

def bool_t() : ptd::string() {
	return 'bool ';
}

def println(ref state : @generator_c::state_t, s : ptd::string()) {
	state->ret .= s;
	state->ret .= string::lf();
}

def get_reg_value(ref state : @generator_c::state_t, reg : @nlasm::reg_t) : ptd::string() {
	match (reg->access_type) case :value {
		return get_reg(ref state, reg);
	} case :reference {
		return '(*' . get_reg(ref state, reg) . ')';
	}
}

def get_reg(ref state : @generator_c::state_t, reg : @nlasm::reg_t) : ptd::string() {
	var args = state->fun_args;
	var reg_no = reg->reg_no;
	if (array::len(args) > reg_no && args[reg_no]->by is :ref) {
		return '(*___ref___' . reg_suffix(reg) . ')';
	} else {
		return '___nl__' . reg_suffix(reg);
	}
}

def get_reg_ref(ref state : @generator_c::state_t, reg : @nlasm::reg_t) : ptd::string() {
	var args = state->fun_args;
	var reg_no = reg->reg_no;
	match (reg->access_type) case :value {
		if (array::len(args) > reg_no && args[reg_no]->by is :ref) {
			return '___ref___' . reg_suffix(reg);
		} else {
			return '&___nl__' . reg_suffix(reg);
		}
	} case :reference {
		if (array::len(args) > reg_no && args[reg_no]->by is :ref) {
			return '*___ref___' . reg_suffix(reg);
		} else {
			return '___nl__' . reg_suffix(reg);
		}
	}
}

def get_string(s : ptd::string()) : ptd::string() {
	return '"' . s . '"';
}

def generator_c::module_out_t() {
	return ptd::rec({c => ptd::string(), h => ptd::string()});
}

def generator_c::out_t() {
	return ptd::rec({modules => ptd::hash(@generator_c::module_out_t), global_const => @generator_c::module_out_t});
}

def generator_c::generate(nlasms : ptd::hash(@nlasm::result_t), ref state : @generator_c::state_t) : @generator_c::out_t {
	var modules_out = {};
	var modules_names = [];
	forh var module, var none (nlasms) {
		array::push(ref modules_names, module);
	}
	gather_types(nlasms, ref state->defined_types);
	array::sort(ref modules_names);
	fora var module (modules_names) {
		var nlasm = hash::get_value(nlasms, module);
		generator_c::clear_module_from_state(ref state, module);
		hash::set_value(ref state->global_const->module_consts, module, {});
		state->ret = '';
		state->header = '';
		state->fun_args = [];
		state->const = {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}};
		state->mod_name = module;
		state->additional_imports = {};
		print_mod(ref state, nlasm, state->defined_types);
		hash::set_value(ref modules_out, module, {c => state->ret, h => state->header});
	}
	return {modules => modules_out, global_const => generate_global_const_files(ref state)};
}

def gather_types(nlasms : ptd::hash(@nlasm::result_t), ref defined_types : ptd::hash(@tct::meta_type)) {
	forh var module, var res (nlasms) {
		fora var func (res->functions) {
			match (func->defines_type) case :no {
			} case :yes(var type) {
				defined_types{module . '::' . func->name} = type;
			}
		}
	}
	return defined_types;
}

def generate_global_const_files(ref state : @generator_c::state_t) : @generator_c::module_out_t {
	state->ret = '';
	state->header = '';
	state->fun_args = [];
	state->const = {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}};
	state->mod_name = '';
	print_to_header(ref state, get_cr());
	println_to_header(ref state, '#pragma once');
	println_to_header(ref state, get_include('c_rt_lib'));
	print(ref state, get_cr());
	println(ref state, get_include('c_global_const'));
	var sim = state->global_const->arr;
	var const_len = array::len(sim);
	println_to_header(ref state, 'void ___global_const_init();');
	println_to_header(ref state, im_t() . ' ___get_global_const(int __nr);');
	println(ref state, '
		'static ' . im_t() . ' ___global_const__ = NULL;
		'static int ___global_const_init__ = 1;
		'static int ___global_const_offset;');
	println(ref state, 'void ___global_const_init(){
		'if(___global_const_init__) {
		'___global_const_init__ = 0;
		'___global_const_offset = c_rt_lib0get_global_const_offset();
		'___global_const__ = alloc_mem(' . ptd::int_to_string(const_len) . ' * ___global_const_offset);
		'');
	rep var i (const_len) {
		println(ref state, create_sim_to_memory(sim[i]->key, '___global_const__ + ___global_const_offset * ' . ptd::int_to_string(i)) . ';');
	}
	println(ref state, '
		'' . get_lib_fun('register_global_const') . '((' . im_t() . ')___global_const__,(' . im_t() . 
		')___global_const__ + ' . ptd::int_to_string(const_len) . ' * ___global_const_offset);
		'}}');
	println(ref state, im_t() . '___get_global_const(int __nr) {
		'' . im_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '(' . im_t() . ')___global_const__ + ___global_const_offset * __nr']) . ';
		'return ret;
		'}');
	return {c => state->ret, h => state->header};
}

def get_include(import : ptd::string()) : ptd::string() {
	return '#include "' . import . '.h"';
}

def get_system_include(import : ptd::string()) : ptd::string() {
	return '#include <' . import . '.h>';
}

def get_cr() : ptd::string() {
	return '
		'/* (c) Atinea Sp z o. o.
		' *  Stamp: nianio lang
		' */
		'';
}

def get_function_name(func : @nlasm::function_t, mod_name : ptd::string()) : ptd::string() {
	var nmode;
	match (func->access) case :pub {
		nmode = mod_name;
	} case :priv {
		nmode = '';
	}
	return get_fun_name(nmode, func->name, mod_name);
}

def get_function_header(func : @nlasm::function_t, mod_name : ptd::string()) : ptd::string() {
	var fun_header = '';
	var fun_name = get_function_name(func, mod_name);
	fun_header .= get_type_name(func->ret_type) . ' ' . fun_name . '(';
	var reg_mem = 0;
	fora var arg_type (func->args_type) {
		fun_header .= ',' unless 0 == reg_mem;
		match (arg_type->by) case :val {
			fun_header .=  get_type_name(arg_type->type) . ' ___nl__' . reg_suffix(arg_type->register);
		} case :ref {
			fun_header .= get_type_name(arg_type->type) . '* ___ref___' . reg_suffix(arg_type->register);
		}
		reg_mem++;
	}
	fun_header .= ')';
	return fun_header;
}

def get_const(ref type : @generator_c::const_t, key : ptd::string()) : ptd::int() {
	var nr : ptd::int() = -1;
	if (!hash::has_key(type->hash, key)) {
		nr = own_array::len(ref type->arr);
		type->arr []= key;
		hash::set_value(ref type->hash, key, nr);
	} else {
		nr = hash::get_value(type->hash, key);
	}
	return nr;
}

def insert_const_to_modules_hash(ref global_const : @generator_c::global_const_t, key : ptd::string(), module : ptd::string()) {
	var hash = hash::get_value(global_const->module_consts, module);
	hash::set_value(ref hash, key, '');
	hash::set_value(ref global_const->module_consts, module, hash);
}

def get_global_const(ref global_const : @generator_c::global_const_t, key : ptd::string(), module : ptd::string()) : ptd::int() {
	var nr = -1;
	if (!hash::has_key(global_const->hash, key)) {
		if (array::len(global_const->holes) > 0) {
			nr = global_const->holes[array::len(global_const->holes) - 1];
			array::pop(ref global_const->holes);
			global_const->arr[nr] = {key => key, uses => 1};
		} else {
			nr = array::len(global_const->arr);
			array::push(ref global_const->arr, {key => key, uses => 1});
		}
		insert_const_to_modules_hash(ref global_const, key, module);
		hash::set_value(ref global_const->hash, key, nr);
	} else {
		nr = hash::get_value(global_const->hash, key);
		var module_hash = hash::get_value(global_const->module_consts, module);
		if (!hash::has_key(module_hash, key)) {
			++global_const->arr[nr]->uses;
			insert_const_to_modules_hash(ref global_const, key, module);
		}
	}
	return nr;
}

def generator_c::clear_module_from_state(ref state : @generator_c::state_t, module : ptd::string()) {
	if (hash::has_key(state->global_const->module_consts, module)) {
		var consts = hash::get_value(state->global_const->module_consts, module);
		forh var key, var none (consts) {
			var nr = hash::get_value(state->global_const->hash, key);
			--state->global_const->arr[nr]->uses;
			if (state->global_const->arr[nr]->uses == 0) {
				hash::delete(ref state->global_const->hash, key);
				array::push(ref state->global_const->holes, nr);
			}
		}
		hash::delete(ref state->global_const->module_consts, module);
	}
}

def get_const_sim(ref state : @generator_c::state_t, sim : ptd::string()) : ptd::string() {
	var nr = get_global_const(ref state->global_const, sim, state->mod_name);
	return '___get_global_const(' . ptd::int_to_string(nr) . ')';
}

def get_const_singleton(ref state : @generator_c::state_t, sim : ptd::string()) : ptd::string() {
	var nr = get_const(ref state->const->singleton, sim);
	return get_fun_name('', '__const__sing', state->mod_name) . '(' . ptd::int_to_string(nr) . ')';
}

def get_func_ptr_header(func : @nlasm::function_t, mod_name : ptd::string()) : ptd::string() {
	return get_type_name(func->ret_type) . ' ' . get_function_name(func, mod_name) . '0ptr(int _num, ImmT *_tab)';
}

def print_mod(ref state : @generator_c::state_t, asm : @nlasm::result_t, defined_types : ptd::hash(@tct::meta_type)) {
	print_to_header(ref state, get_cr());
	print_to_header(ref state, '#pragma once' . string::lf());
	print_to_header(ref state, get_include('c_rt_lib') . string::lf());
	print_to_header(ref state, get_system_include('stdbool') . string::lf());
	print(ref state, get_cr());
	println(ref state, get_include('c_rt_lib'));
	println(ref state, get_include('c_global_const'));
	println(ref state, get_system_include('/usr/include/string'));
	println(ref state, get_include(state->mod_name));
	fora var import (asm->imports) {
		println(ref state, get_include(import));
		print_to_header(ref state, get_include(import) . string::lf());
	}
	var ret = state->ret;
	state->ret = '';
	println(ref state, '#line 1 "' . state->mod_name . '.nl"' . string::lf());
	println(ref state, 'static ' . im_t() . '*__const__f = NULL;');
	println(ref state, 'void ' . get_fun_name('', '__const__init', state->mod_name) . '();');
	println(ref state, im_t() . get_fun_name('', '__const__sim', state->mod_name) . '(int __nr);');
	println(ref state, im_t() . get_fun_name('', '__const__sing', state->mod_name) . '(int __nr);' . string::lf());
	var struct_order = generator_c_struct_dependence_sort::sort(asm->functions, state->mod_name);
	var hash_typedef_funs : ptd::hash(ptd::string()) = {};
	fora var f (asm->functions) {
		match (f->access) case :pub {
			match (f->defines_type) case :yes(var type) {
				hash::set_value(ref hash_typedef_funs, f->name, '');
			} case :no {
			}
		} case :priv {
		}
	}
	match (struct_order) case :result(var s) {
		fora var func (s) {
			var anon : ptd::bool() = !hash::has_key(hash_typedef_funs, func->name);
			match (func->c_type) case :definition {
				print_func_type_struct_def(ref state, func->name, func->tct_type, state->mod_name, anon);
			} case :declaration {
				print_func_type_struct_decl(ref state, func->name, func->tct_type, state->mod_name, anon, defined_types);
			} case :both {
				print_func_type_struct_def(ref state, func->name, func->tct_type, state->mod_name, anon);
				print_func_type_struct_decl(ref state, func->name, func->tct_type, state->mod_name, anon, defined_types);
			}
		}
	} case :cycle {
		nl::print('C generation error: struct reference cycle' . string::lf());
		die;
	}
	fora var func (asm->functions) {
		var fun_header = get_function_header(func, state->mod_name);
		match (func->access) case :pub {
			print_to_header(ref state, fun_header . ';' . string::lf());
			if (!takes_own_arg(func)) {
				print_to_header(ref state, get_func_ptr_header(func, state->mod_name) . ';' . string::lf());
			}
		} case :priv {
			println(ref state, fun_header . ';');
		}
	}
	
	println(ref state, string::lf());
	fora var func (asm->functions) {
		if (func->access is :pub && !takes_own_arg(func)) {
			var fun_name = get_function_name(func, state->mod_name);
			println(ref state, get_func_ptr_header(func, state->mod_name) . '{');
			var number = array::len(func->args_type);
			println(ref state, get_fun_lib('func_num_args', ['_num', ptd::int_to_string(number), get_string(fun_name)]) . ';');
			rep var arg_id (number) {
				var type = get_type_to_c(func->args_type[arg_id]->type, '');
				var value = get_value_from_im(func->args_type[arg_id]->register->type, '(_tab[' . ptd::int_to_string(arg_id) . '])');
				print(ref state, type . ' *var' . ptd::int_to_string(arg_id) . ' = &' . value . ';' . string::lf());
			}
			print(ref state, 'return ' . fun_name . '(');
			rep var arg_id (number) {
				print(ref state, ', ') if (arg_id > 0);
				var ref_mark;
				match (func->args_type[arg_id]->by) case :ref {
					ref_mark = '';
				} case :val {
					ref_mark = '*';
				}
				print (ref state, ref_mark . 'var' . ptd::int_to_string(arg_id));
			}
			println(ref state, ');');
			println(ref state, '}');
		}
		if (is_singleton_use_function(func)) {
			var fun_name = get_function_name(func, state->mod_name);
			println(ref state, im_t() . fun_name . '(){');
			println(ref state, get_fun_name('', '__const__init', state->mod_name) . '();');
			println(ref state, 'return ' . get_const_singleton(ref state, fun_name) . ';}');
			print(ref state, im_t() . fun_name . '0cal()');
		} else {
			print(ref state, get_function_header(func, state->mod_name));
		}
		print_function_block(ref state, func, defined_types);
	}
	print_init_const(ref state);
	forh var import, ref none (state->additional_imports) {
		ret .= get_include(import) . string::lf();
	}
	state->ret = ret  . state->ret;
}

def print_init_const(ref state : @generator_c::state_t) : ptd::void() {
	var sim_len = own_array::len(ref state->const->sim->arr);
	var sing_len = own_array::len(ref state->const->singleton->arr);
	var dyna_len = state->const->dynamic_nr;
	var const_len = sim_len + sing_len + dyna_len;
	println(ref state, '
		'static ' . im_t() . '___const__[' . ptd::int_to_string(1 + const_len) . '];
		'static int ___const_init__ = 1;');
	println(ref state, 'void ' . get_fun_name('', '__const__init', state->mod_name) . '(){
		'if(___const_init__) {
		'___const_init__ = 0;
		'__const__f = &___const__[' . ptd::int_to_string(sim_len + sing_len) . '];
		'');
	rep var i (sim_len) {
		println(ref state, '___const__[' . ptd::int_to_string(i) . '] = ' . create_sim(state->const->sim->arr[i]) . ';');
	}
	println(ref state, '
		'for(int i=' . ptd::int_to_string(sim_len) . ';i<' . ptd::int_to_string(const_len) . ';++i) ___const__[i] = NULL;
		'' . get_lib_fun('register_const') . '(___const__, ' . ptd::int_to_string(const_len) . ');
		'}}');
	println(ref state, im_t() . get_fun_name('', '__const__sim', state->mod_name) . '(int __nr) {
		'' . im_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '___const__[__nr]']) . ';
		'return ret;
		'}');
	println(ref state, im_t() . get_fun_name('', '__const__sing', state->mod_name) . '(int __nr) {
		'if(___const__[__nr+' . ptd::int_to_string(sim_len) . ']==NULL) {
		'switch(__nr){');
	rep var i (sing_len) {
		println(ref state, 'case ' . ptd::int_to_string(i) . ':');
		println(ref state, '	___const__[' . ptd::int_to_string(i + sim_len) . '] = ' . state->const->singleton->arr[i] . '0cal();');
		println(ref state, '	break;');
	}
	println(ref state, 'default:
		'	nl_die();
		'}}
		'' . im_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '___const__[__nr+' . ptd::int_to_string(sim_len) . ']']) . ';
		'return ret;
		'}');
}

def print_function_block(ref state : @generator_c::state_t, func : @nlasm::function_t, defined_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	println(ref state, ' {');
	state->fun_args = func->args_type;
	state->ret_type = func->ret_type;
	move_args_to_register(ref state);
	println(ref state, get_fun_name('', '__const__init', state->mod_name) . '();');
	
	for(var i = array::len(func->args_type); i < array::len(func->registers); i++) {
		print_declaration(ref state, func->registers[i]);
	}
	fora var cmd (func->commands) {
		match (cmd->annotation) case :none {
			print_cmd(ref state, cmd, defined_types);
		} case :const(var tab) {
			if (cmd->cmd is :load_const) {
				var value = (cmd->cmd as :load_const)->val;
				if (nl::is_sim(value)) {
					print_cmd(ref state, cmd, defined_types);
					continue;
				}
			}
			var len = array::len(tab);
			if (len == 0) {
				print_cmd(ref state, cmd, defined_types);
				continue;
			} else {
				var nr = state->const->dynamic_nr;
				println(ref state, 'if(__const__f[' . ptd::int_to_string(nr) . '] == NULL) {');
				print_cmd(ref state, cmd, defined_types);
				fora var reg (tab) {
					println(ref state, get_fun_lib('copy', ['&__const__f[' . ptd::int_to_string(nr) . ']', get_reg(ref state, reg)]) . ';');
					nr++;
				}
				println(ref state, '}');
				nr -= len;
				fora var reg (tab) {
					println(ref state, get_fun_lib('copy', [get_reg_ref(ref state, reg), '__const__f[' . ptd::int_to_string(nr) . ']']) . 
						';');
					nr++;
				}
				state->const->dynamic_nr = nr;
			}
		}
	}
	println(ref state, '}' . string::lf());
}

def is_singleton_use_function(function : @nlasm::function_t) : ptd::bool() {
	return false if (array::len(function->args_type) > 0);
	var is_math = function->annotation is :math;
	var was_singleton = false;
	var dest = -1;
	fora var cmd (function->commands) {
		var command = cmd->cmd;
		if (command is :call) {
			var call = command as :call;
			continue unless (call->fun_name eq 'sigleton_do_not_use_without_approval');
			continue unless (call->mod eq 'singleton');
			was_singleton = true;
			dest = call->dest->reg_no;
		} elsif (command is :return) {
			var ret = command as :return;
			return false unless (ret is :val);
			return true if is_math;
			return false unless was_singleton;
			return ret as :val->reg_no == dest;
		} elsif (command is :prt_lbl) {
		} elsif (command is :clear) {
		} else {
			return false if (was_singleton);
		}
	}
	return false;
}

def move_args_to_register(ref state : @generator_c::state_t) {
	rep var arg_id (array::len(state->fun_args)) {
		match (state->fun_args[arg_id]->by) case :val {
			if (state->fun_args[arg_id]->register->type is :im) {
				print(ref state, get_fun_lib('arg_val', [get_reg(ref state, state->fun_args[arg_id]->register)]));
				println(ref state, ';');
			}
		} case :ref {
		}
	}
}

def move_register_to_ref_args(ref state : @generator_c::state_t) {
#	rep var arg_id (array::len(state->fun_args)) {
#		match (state->fun_args[arg_id]) case :val {
#		} case :ref {
#		}
#	}
}

def get_fun_lib(fun_name : ptd::string(), args : ptd::arr(ptd::string())) : ptd::string() {
	var ret = get_lib_fun(fun_name) . '(';
	var i = 0;
	fora var arg (args) {
		ret .= ', ' unless 0 == i;
		ret .= arg;
		++i;
	}
	return ret . ')';
}

def get_module_name(mod : ptd::string()) : ptd::string() {
	return string::replace(mod, '0', '00');
}

def get_fun_name(mod : ptd::string(), fun_name : ptd::string(), mod_name : ptd::string()) : ptd::string() {
	mod = mod_name . '_priv' if mod eq '';
	return get_module_name(mod) . '0' . string::replace(fun_name, '0', '00');
}

def get_lib_fun(fun_name : ptd::string()) : ptd::string() {
	return get_fun_name('c_rt_lib', fun_name, '');
}

def generate_imm(ref state : @generator_c::state_t, obj) : ptd::void() {
	if (nl::is_hash(obj)) {
		print(ref state, get_lib_fun('hash_mk_dec') . '(' . ptd::int_to_string(hash::size(obj)));
		forh var key, var value (obj) {
			print(ref state, ', ');
			print(ref state, get_const_sim(ref state, key));
			print(ref state, ', ');
			generate_imm(ref state, value);
		}
		print(ref state, ')');
	} elsif (nl::is_array(obj)) {
		print(ref state, get_lib_fun('array_mk_dec') . '(' . ptd::int_to_string(array::len(obj)));
		fora var el (obj) {
			print(ref state, ', ');
			generate_imm(ref state, el);
		}
		print(ref state, ')');
	} elsif (nl::is_variant(obj)) {

		var variant_label = get_const_sim(ref state, ptd::ensure(ptd::string(), ov::get_element(obj)));
		if (ov::has_value(obj)) {
			print(ref state, get_lib_fun('ov_mk_arg_dec') . '(' . variant_label . ', ');

			var obj_val = ov::get_value(obj);
			if ((obj is :ref) && nl::is_hash(obj_val) && (hash::size(obj_val) == 2) && hash::has_key(obj_val, 'name') && hash::has_key(obj_val, 'module')) {
				if (nl::is_sim(obj_val->name) && nl::is_sim(obj_val->module)) {
					print(ref state, get_func_pointer(ref state, ptd::ensure(ptd::string(), obj_val->module), ptd::ensure(ptd::string(), obj_val->name)));
				} else {
					generate_imm(ref state, obj_val);	
				}
			} else {
				generate_imm(ref state, obj_val);
			}

			print(ref state, ')');
		} else {
			print(ref state, get_lib_fun('ov_mk_none') . '(' . variant_label . ')');
		}
	} elsif (nl::is_sim(obj)) {
		print(ref state, get_const_sim(ref state, ptd::ensure(ptd::string(), obj)));
	} else {
		die;
	}
}


def get_func_pointer(ref state : @generator_c::state_t, module_name : ptd::string(), fun_name : ptd::string()) : ptd::string() {
	state->additional_imports{module_name} = true;
	return get_fun_lib('func_new', [
		get_fun_name(module_name, fun_name, state->mod_name) . '0ptr',
		get_const_sim(ref state, module_name),
		get_const_sim(ref state, fun_name),
	]);
}

def print_cmd(ref state : @generator_c::state_t, asm : @nlasm::cmd_t, defined_types : ptd::hash(@tct::meta_type)) : ptd::void() {
	print(ref state, '#line ' . ptd::int_to_string(asm->debug->nast_debug->begin->line) . string::lf());
	var is_nop = false;
	match (asm->cmd) case :arr_decl(var decl) {
		if (decl->dest->type is :im) {
			var args = [ptd::int_to_string(array::len(decl->src))];
			array::push(ref args, get_reg(ref state, el)) fora var el (decl->src);
			var r = get_fun_lib('array_mk', args);
			print(ref state, get_assign(ref state, decl->dest, r));
		} elsif (decl->dest->type is :arr) {
			var clean = get_clean_fun_call(decl->dest->type as :arr, state->mod_name, get_reg_value(ref state, decl->dest),
				defined_types);
			print(ref state, clean . string::lf());
			print(ref state, get_reg_value(ref state, decl->dest) . '.size = 0;' . string::lf());
			print(ref state, get_reg_value(ref state, decl->dest) . '.capacity = 0;' . string::lf());
			print(ref state, get_reg_value(ref state, decl->dest) . '.value = NULL');
		} else {
			die;
		}
	} case :hash_decl(var hash_decl) {
		if (hash_decl->dest->type is :im) {
			print_hash_declaration(ref state, hash_decl);
		} elsif (hash_decl->dest->type is :hash) {
			var clean = get_clean_fun_call(hash_decl->dest->type as :hash, state->mod_name, get_reg_value(ref state, hash_decl->dest),
				defined_types);
			print(ref state, clean . string::lf());
			print(ref state, get_reg_value(ref state, hash_decl->dest) . '.size = 0;' . string::lf());
			print(ref state, get_reg_value(ref state, hash_decl->dest) . '.capacity = 0;' . string::lf());
			print(ref state, get_reg_value(ref state, hash_decl->dest) . '.keys = NULL;' . string::lf());
			print(ref state, get_reg_value(ref state, hash_decl->dest) . '.values = NULL');
		} elsif (hash_decl->dest->type is :rec) {
		} else {
			die;
		}
	} case :func(var func) {
		var r = get_func_pointer(ref state, func->module, func->name);
		print(ref state, get_assign(ref state, func->dest, r));
	} case :call(var call) {
		generate_call(ref state, call);
	} case :una_op(var una_op) {
		var op = hash::get_value(get_unary_ops(), una_op->op);
		var r;
		if (op eq 'not') {
			r = '!' . get_reg(ref state, una_op->src);
		} elsif (op eq 'unary_minus' && una_op->src->type is :int) {
			r = '-' . get_reg(ref state, una_op->src);
		} else {
			r = get_fun_lib(op, [get_reg(ref state, una_op->src)]);
		}
		print(ref state, get_assign(ref state, una_op->dest, r));
	} case :bin_op(var bin_op) {
		print_bin_op(ref state, bin_op);
	} case :ov_is(var ov_is) {
		if (ov_is->src->type is :im) {
			var r = get_fun_lib('priv_is', [get_reg(ref state, ov_is->src), get_const_sim(ref state, ov_is->type)]);
			print(ref state, get_assign(ref state, ov_is->dest, r));
		} elsif (ov_is->src->type is :variant) {
			print(ref state, get_reg_value(ref state, ov_is->dest) . ' = (' .
				get_reg_value(ref state, ov_is->src) . '.label' . ' == ' . ptd::int_to_string(ov_is->label_no) . ')');
		} else {
			die;
		}
	} case :ov_as(var ov_as) {
		if (ov_as->src->type is :im) {
			var r = get_fun_lib('priv_as', [get_reg_value(ref state, ov_as->src), get_const_sim(ref state, ov_as->type)]);
			print(ref state, get_assign(ref state, ov_as->dest, r));
		} elsif (ov_as->src->type is :variant) {
			var access_op = get_access_op(ov_as->src);
			var right = '*('.  get_reg(ref state, ov_as->src) . access_op . 'value.' . get_case_name(ov_as->type) . ')';
			if (ov_as->dest->type is :im) {
				var left = get_reg_ref(ref state, ov_as->dest);
				print(ref state, get_fun_lib('copy', [left, right]));
			} else {
				var left = get_reg_value(ref state, ov_as->dest);
				print(ref state,  left . ' = ' . right);
			}
		} else {
			die;
		}
	} case :return(var rr) {
		move_register_to_ref_args(ref state);
		match (rr) case :val(var v) {
			print(ref state, 'return ');
			print(ref state, get_reg(ref state, v));
		} case :emp {
			print(ref state, 'return ');
			print(ref state, get_empty_value(state->ret_type));
		}
	} case :die(var dd) {
		print(ref state, 'nl_die_arg(' . get_reg(ref state, dd) . ')');
	} case :move(var move) {
		print_move(ref state, move->src, move->dest);
	} case :load_const(var const) {
		return if nlasm::is_empty(const->dest);
		match (const->dest->type) case :im {
			print(ref state, get_lib_fun('move') . '(' . get_reg_ref(ref state, const->dest) . ',');
			generate_imm(ref state, const->val);
			print(ref state, ')');
		} case :int {
			print(ref state, get_reg_value(ref state, const->dest) . ' = ' . const->val);
		} case :string {
			print(ref state, get_lib_fun('move') . '(' . get_reg_ref(ref state, const->dest) . ',');
			generate_imm(ref state, const->val);
			print(ref state, ')');
		} case :bool {
			print(ref state, get_reg_value(ref state, const->dest) . ' = ');
			generate_imm(ref state, const->val);			
		} case :rec(var type) {
			die;
		} case :arr(var type) {
			die;
		} case :variant(var type) {
			die;
		} case :hash(var type) {
			die;
		}
	} case :get_frm_idx(var get) {
		var r = get_fun_lib('array_get', [get_reg_value(ref state, get->src), get_reg(ref state, get->idx)]);
		print(ref state, get_assign(ref state, get->dest, r));
	} case :set_at_idx(var set) {
		print(ref state, get_fun_lib('array_set', [
					get_reg_ref(ref state, set->src),
					get_reg(ref state, set->idx),
					get_reg(ref state, set->val)
				]));
	} case :array_push(var push) {
		if (push->dest->type is :arr) {
			var type_name = get_type_name(push->dest->type as :arr);
			print(ref state, get_array_push_fun_name(type_name, state->mod_name, is_anon(push->dest->type as :arr)) . '(' .
				get_reg_ref(ref state, push->dest) . ', ' .
				get_reg(ref state, push->val) . ')');
		} elsif (push->dest->type is :im) {
			print(ref state, get_fun_lib('array_push', [
				get_reg_ref(ref state, push->dest),
				get_reg(ref state, push->val),
			]));
		} else {
			die;
		}
	} case :array_len(var len) {
		var right;
		if (len->src->type is :arr) {
			var type_name = get_type_name(len->src->type as :arr);
			var anon = is_anon(len->src->type as :arr);
			right = get_array_len_fun_name(type_name, state->mod_name, anon) . '(' .
				get_reg_ref(ref state, len->src) . ')';
		} elsif (len->src->type is :im) {
			right = get_fun_lib('array_len', [get_reg(ref state, len->src)]);
		} else {
			die;
		}
		if (len->dest->type is :int) {
			print(ref state, get_reg(ref state, len->dest) . ' = ' . right);
		} elsif (len->dest->type is :im) {
			print(ref state, get_assign(ref state, len->dest, get_lib_fun('int_new') . '(' . right . ')'));
		}
	} case :get_val(var get) {
		var r;
		match (get->src->access_type) case :value {
			r = get_fun_lib('hash_get_value_dec', [get_reg(ref state, get->src), get_const_sim(ref state, get->key)]);
		} case :reference {
			if (get->src->type is :rec) {
				r = get_reg(ref state, get->src) . '->' . get_field_name(get->key);
			} elsif (get->src->type is :im){
				r = get_fun_lib('hash_get_value_dec', ['*' . get_reg(ref state, get->src), get_const_sim(ref state, get->key)]);
			} else {
				die;
			}
		}
		print(ref state, get_assign(ref state, get->dest, r));
	} case :set_val(var set) {
		print(ref state, get_fun_lib('hash_set_value_dec', [
					get_reg_ref(ref state, set->src),
					get_const_sim(ref state, set->key),
					get_reg(ref state, set->val)
				]));
	} case :ov_mk(var mk) {
		if (mk->src is :emp && (mk->label eq 'TRUE')) {
			if (mk->dest->type is :im) {
				print(ref state, get_assign(ref state, mk->dest,
					get_fun_lib('ov_mk_none', [get_const_sim(ref state, 'TRUE')])));
			} elsif (mk->dest->type is :bool) {
				print(ref state, get_assign(ref state, mk->dest, 'true'));
			}
		} elsif (mk->src is :emp && (mk->label eq 'FALSE')) {
			if (mk->dest->type is :im) {
				print(ref state, get_assign(ref state, mk->dest,
					get_fun_lib('ov_mk_none', [get_const_sim(ref state, 'FALSE')])));
			} elsif (mk->dest->type is :bool) {
				print(ref state, get_assign(ref state, mk->dest, 'false'));
			}
		} else {
			if (mk->dest->type is :im) {
				var r;
				match (mk->src) case :arg(var a) {
					r = get_fun_lib('ov_mk_arg', [get_const_sim(ref state, mk->label), get_reg(ref state, a)]);
				} case :emp {
					r = get_fun_lib('ov_mk_none', [get_const_sim(ref state, mk->label)]);
				}
				print(ref state, get_assign(ref state, mk->dest, r));
			} elsif (mk->dest->type is :variant) {
				var type_name = get_type_name(mk->dest->type as :variant);
				var anon = is_anon(mk->dest->type as :variant);
				var val;
				var size;
				match (mk->src) case :arg(var a) {
					val = get_reg_ref(ref state, a);
					size = 'sizeof(' . get_type_name(mk->inner_type) . ')';
				} case :emp {
					val = 'NULL';
					size = '0';
				}
				print(ref state, get_variant_make_fun_name(type_name, state->mod_name, anon) . '(' .
					get_reg_ref(ref state, mk->dest) . ', ' . ptd::int_to_string(mk->label_no) . ', ' .
					val . ', ' . size .  ')');
			}
		}
	} case :prt_lbl(var l) {
		print(ref state, 'label_' . ptd::int_to_string(l) . ':' . string::lf() . ';' . string::lf());
		return;
	} case :if_goto(var ifgoto) {
		print(ref state, 'if(');
		print(ref state, get_reg(ref state, ifgoto->src));
		print(ref state, '){ goto label_' . ptd::int_to_string(ifgoto->dest) . ';}' . string::lf());
		return;
	} case :goto(var goto) {
		print(ref state, 'goto label_' . ptd::int_to_string(goto));
	} case :clear(var reg) {
		match (reg->type) case :im {
			print(ref state, get_fun_lib('clear', [get_reg_ref(ref state, reg)]));
		} case :int {
			print(ref state, '//clear ' . get_reg(ref state, reg));
		} case :bool {
			print(ref state, '//clear ' . get_reg(ref state, reg));			
		} case :string {
			print(ref state, get_fun_lib('clear', [get_reg_ref(ref state, reg)]));
		} case :rec(var type) {
			#print(ref state, '//clear ' . get_reg(ref state, reg));
			print(ref state, get_clean_fun_call(type, state->mod_name, get_reg(ref state, reg), defined_types));
		} case :arr(var type) {
			#var type_name = get_type_name(type);
			print(ref state, string::lf() . get_clean_fun_call(type, state->mod_name, get_reg(ref state, reg), defined_types));
			# print(ref state, 'free_mem(' . get_reg(ref state, reg) . '.value, ' . get_reg(ref state, reg) . '.capacity*sizeof(' . type_name . '))');
		} case :variant(var type) {
			#print(ref state, '//clear ' . get_reg(ref state, reg));
			print(ref state, get_clean_fun_call(type, state->mod_name, get_reg(ref state, reg), defined_types));
		} case :hash(var type) {
			#print(ref state, '//clear ' . get_reg(ref state, reg));
			print(ref state, get_clean_fun_call(type, state->mod_name, get_reg(ref state, reg), defined_types));
		}
	} case :var_decl(var decl) {
	} case :use_field(var use_field) {
		print_use_field(ref state, use_field);
	} case :release_field(var release_field) {
		print(ref state, get_reg(ref state, release_field->current_owner) . ' = NULL');
	} case :use_index(var use_index) {
		print_use_index(ref state, use_index);
	} case :release_index(var release_index) {
		if (release_index->current_owner->type is :im) {
			print(ref state, '//release ' . get_reg(ref state, release_index->current_owner));
		} else {
			print(ref state, get_reg(ref state, release_index->current_owner) . ' = NULL');
		}
	} case :use_hash_index(var use_hash_index) {
		print_use_hash_index(ref state, use_hash_index);
	} case :release_hash_index(var release_hash_index) {
		print(ref state, get_reg(ref state, release_hash_index->current_owner) . ' = NULL');
	} case :use_variant(var use_variant) {
		print_use_variant(ref state, use_variant);
	} case :release_variant(var release_variant) {
		if (release_variant->current_owner->type is :im || release_variant->current_owner->access_type is :reference) {
			print(ref state, get_reg(ref state, release_variant->current_owner) . ' = NULL');
		}
	} case :hash_init_iter(var init_iter) {
		print_hash_init_iter(ref state, init_iter);
	} case :hash_next_iter(var next_iter) {
		print_hash_next_iter(ref state, next_iter);
	} case :hash_get_key_iter(var get_key_iter) {
		print_hash_get_key_iter(ref state, get_key_iter);
	} case :hash_is_end(var is_end) {
		print_hash_is_end(ref state, is_end);
	}
	print(ref state, ';' . string::lf()) unless is_nop;
}

def print_declaration(ref state : @generator_c::state_t, reg : @nlasm::reg_t){
	var target_type_name;
	var default_value;
	match (reg->type) case :im {
		target_type_name = im_t();
		default_value = 'NULL';
	} case :int {
		target_type_name = int_t();
		default_value = '0';
	} case :bool {
		target_type_name = bool_t();
		default_value = 'false';
	} case :string {
		target_type_name = im_t();
		default_value = 'NULL';
	} case :rec(var type) {
		target_type_name = get_type_name(type);
		default_value = '{}';
	} case :arr(var type) {
		target_type_name = get_type_name(type);
		default_value = '{
			'.capacity = 0,
			'.size = 0,
			'.value = NULL
			'}';
	} case :variant(var type) {
		target_type_name = get_type_name(type);
		default_value = '{}';
	} case :hash(var type) {
		target_type_name = get_type_name(type);
		default_value = '{
			'.capacity = 0,
			'.size = 0,
			'.values = NULL,
			'.keys = NULL
			'}';
	}
	match (reg->access_type) case :value {
	} case :reference {
		target_type_name .= '*';
		default_value = 'NULL';
	}
	println(ref state, target_type_name . ' ' . get_reg(ref state, reg) . ' = ' . default_value .';');
}

def print_move(ref state : @generator_c::state_t, src : @nlasm::reg_t, dest : @nlasm::reg_t) {
	return if nlasm::is_empty(dest);
	if (src->access_type is :reference && dest->access_type is :reference) {
		print(ref state, get_reg(ref state, dest) . ' = ' . get_reg(ref state, src));
		return;
	}
	match (dest->type) case :im {
		print_move_to_im(ref state, src, dest);
	} case :int {
		if(src->type is :im) {
			print(ref state, get_reg_value(ref state, dest) . ' = getIntFromImm(' . get_reg_value(ref state, src) . ')');
		} else {
			print(ref state, get_reg_value(ref state, dest) . ' = ' . get_reg_value(ref state, src));
		}
	} case :string {
		var arg = [get_reg_ref(ref state, dest), get_reg_value(ref state, src)];
		print(ref state, get_fun_lib('copy', arg));
	} case :bool {
		if(src->type is :im) {
			print(ref state, get_reg_value(ref state, dest) . ' = c_rt_lib0check_true_native(' . get_reg_value(ref state, src) . ')');
		} else {
			print(ref state, get_reg_value(ref state, dest) . ' = ' . get_reg_value(ref state, src));
		}
	} case :rec(var type) {
		if(src->type is :rec) {
			print(ref state, get_reg_value(ref state, dest) . ' = ' . get_reg(ref state, src));
		} else {
			die;
		}
	} case :arr(var type) {
		if(src->type is :arr) {
			print(ref state, get_reg_value(ref state, dest) . ' = ' . get_reg(ref state, src));
		} else {
			die;
		}
	} case :variant(var type) {
		die;
	} case :hash(var type) {
		die;
	}
}

def print_move_to_im(ref state : @generator_c::state_t, src : @nlasm::reg_t, dest : @nlasm::reg_t) {
	match (src->type) case :im {
		var arg = [get_reg_ref(ref state, dest), get_im_from_reg(ref state, src)];
		print(ref state, get_fun_lib('copy', arg));
	} case :int {
		var arg = [get_reg_ref(ref state, dest), get_im_from_reg(ref state, src)];
		print(ref state, get_fun_lib('move', arg));
	} case :bool {
		var arg = [get_reg_ref(ref state, dest), get_im_from_reg(ref state, src)];
		print(ref state, get_fun_lib('move', arg));
	} case :string {
		var arg = [get_reg_ref(ref state, dest), get_im_from_reg(ref state, src)];
		print(ref state, get_fun_lib('copy', arg));
	} case :rec(var type) {
		die;
	} case :arr(var type) {
		die;
	} case :variant(var type) {
		die;
	} case :hash(var type) {
		die;
	}
}

def get_im_from_reg(ref state : @generator_c::state_t, reg : @nlasm::reg_t) : ptd::string() {
	match (reg->type) case :im {
		return get_reg_value(ref state, reg);
	} case :int {
		return get_fun_lib('int_new', [get_reg_value(ref state, reg)]);
	} case :bool {
		return get_fun_lib('bool_to_nl_native', [get_reg_value(ref state, reg)]);
	} case :string {
		return get_reg_value(ref state, reg);
	} case :rec(var type) {
		die;
	} case :arr(var type) {
		die;
	} case :variant(var type) {
		die;
	} case :hash(var type) {
		die;
	}
}

def get_value_from_im(type : @nlasm::reg_type, im : ptd::string()) : ptd::string() {
	match (type) case :im {
		return im;
	} case :int {
		return 'getIntFromImm(' . im . ')';
	} case :bool {
		return get_fun_lib('check_true_native', [im]);
	} case :string {
		return im;
	} case :rec(var rec_type) {
		die;
	} case :arr(var arr_type) {
		die;
	} case :variant(var var_type) {
		die;
	} case :hash(var hash_type) {
		die;
	}
}

def print_bin_op(ref state : @generator_c::state_t, bin_op : @nlasm::bin_op) : ptd::void() {
	var op = hash::get_value(get_bin_ops(), bin_op->op);
	if (nlasm::eq_reg(bin_op->dest, bin_op->left) && hash::has_key(get_bin_ops_mod(), bin_op->op)) {
		op = hash::get_value(get_bin_ops_mod(), bin_op->op);
	}
	var r;
	if (bin_op->op eq 'eq') {
		if(bin_op->left->type is :im || bin_op->left->type is :string) {
			r = get_fun_lib(op, [get_reg_value(ref state, bin_op->left), get_reg_value(ref state, bin_op->right)]);		
		} else {
			r = get_inline_bin_op(ref state, bin_op->left, bin_op->right, '==');			
		}
	} elsif (bin_op->op eq 'ne') {
		if(bin_op->left->type is :im || bin_op->left->type is :string) {
			r = get_fun_lib(op, [get_reg_value(ref state, bin_op->left), get_reg_value(ref state, bin_op->right)]);		
		} else {
			r = get_inline_bin_op(ref state, bin_op->left, bin_op->right, '!=');			
		}
	} else {
		if(bin_op->left->type is :im || bin_op->left->type is :string) {
			r = get_fun_lib(op, [get_reg_value(ref state, bin_op->left), get_reg_value(ref state, bin_op->right)]);		
		} else {
			r = get_inline_bin_op(ref state, bin_op->left, bin_op->right, bin_op->op);			
		}
	}
	print(ref state, get_assign(ref state, bin_op->dest, r));
}

def print_hash_declaration(ref state : @generator_c::state_t, hash_decl : @nlasm::hash_decl_t) : ptd::void() {
	if (hash_decl->dest->type is :im) {
		var args = [ptd::int_to_string(array::len(hash_decl->src))];
		fora var el (hash_decl->src) {
			die unless el->val->type is :im;
			array::push(ref args, get_const_sim(ref state, el->key));
			array::push(ref args, get_reg_value(ref state, el->val));
		}
		var r = get_fun_lib('hash_mk', args);
		print(ref state, get_assign(ref state, hash_decl->dest, r));
	} elsif (hash_decl->dest->type is :rec)  {
		var fields = [];
		fora var el (hash_decl->src) {
			var lhs = get_reg(ref state, hash_decl->dest) . '.' . get_field_name(el->key);
			var rhs = get_reg(ref state, el->val);
			if (el->val->type is :im) {
				fields []= lhs . ' = NULL';
				fields []=  get_fun_lib('copy', ['&(' . lhs . ')', rhs]);
			} else {
				fields []= lhs . ' = ' . rhs;
			}
		}
		print(ref state, array::join(';' . string::lf(), fields));
	} else {
		die;
	}
}

def print_use_field(ref state : @generator_c::state_t, use_field : @nlasm::use_field_t) : ptd::void() {
	if (use_field->old_owner->type is :rec) {
		var ret =  get_reg(ref state, use_field->new_owner) . ' = &(' . get_reg(ref state, use_field->old_owner);
		match (use_field->old_owner->access_type) case :value {
			ret .= '.';
		} case :reference {
			ret .= '->';
		}
		ret .=  get_field_name(use_field->field_name) . ')';
		print(ref state, ret);
	} elsif (use_field->old_owner->type is :im) {
		print_get_val(ref state, use_field->old_owner, use_field->new_owner, use_field->field_name);
	} else {
		die;
	}
}

def print_use_index(ref state : @generator_c::state_t, use_index : @nlasm::use_index_t) : ptd::void() {
	if (use_index->old_owner->type is :arr) {
		var anon = is_anon(use_index->old_owner->type as :arr);
		var ret =  get_reg(ref state, use_index->new_owner) . ' = ' .
			get_array_get_fun_name(get_type_name(use_index->old_owner->type as :arr), state->mod_name, anon)
				. '(';
		match (use_index->old_owner->access_type) case :value {
			ret .= '&';
		} case :reference {
		}
		ret .= get_reg(ref state, use_index->old_owner) . ', ';
		ret .=  get_reg_value(ref state, use_index->index) . ')';
		print(ref state, ret);
	} elsif (use_index->old_owner->type is :im) {
		print(ref state, get_fun_lib('move', [get_reg_ref(ref state, use_index->new_owner), 
			get_fun_lib('array_get', [get_reg(ref state, use_index->old_owner), get_reg_value(ref state, use_index->index)])
		]));
	} else {
		die;
	}
}

def print_use_hash_index(ref state : @generator_c::state_t, use_hash_index : @nlasm::use_hash_index_t) : ptd::void() {
	if (use_hash_index->old_owner->type is :hash) {
		var anon = is_anon(use_hash_index->old_owner->type as :hash);
		var ret =  get_reg(ref state, use_hash_index->new_owner) . ' = ' .
			get_hash_get_fun_name(get_type_name(use_hash_index->old_owner->type as :hash), state->mod_name,
				anon) . '(';
		match (use_hash_index->old_owner->access_type) case :value {
			ret .= '&';
		} case :reference {
		}
		ret .= get_reg(ref state, use_hash_index->old_owner) . ', ';
		ret .=  get_reg_value(ref state, use_hash_index->index) . ', ';
		ret .=  (use_hash_index->create_if_not_exist ? 'true' : 'false') . ')';
		print(ref state, ret);
	} elsif (use_hash_index->old_owner->type is :im) {
	} else {
		die;
	}
}

def print_use_variant(ref state : @generator_c::state_t, use_variant : @nlasm::use_variant_t) : ptd::void() {
	var access_op = get_access_op(use_variant->old_owner);
	var ret = 'if (' . get_reg(ref state, use_variant->old_owner) . access_op . 'label != ' . ptd::int_to_string(use_variant->label_no) . ') nl_die();' . string::lf();
	ret .= get_reg(ref state, use_variant->new_owner) . ' = ' . get_reg(ref state, use_variant->old_owner) . access_op;
	ret .= 'value.' . get_case_name(use_variant->label);
	print(ref state, ret);
}

def print_hash_init_iter(ref state : @generator_c::state_t, init_iter : @nlasm::hash_iter_t) : ptd::void() {
	if (init_iter->hash->type is :im) {
		generate_call(ref state, {
			dest => init_iter->iter,
			mod => 'c_rt_lib',
			fun_name => 'init_iter',
			args => [:val(init_iter->hash)],
		});
	} else {
		var anon = is_anon(init_iter->hash->type as :hash);
		var new_iter = get_hash_next_iter_fun_name(get_type_name(init_iter->hash->type as :hash), state->mod_name,
			anon) . '(' .  get_reg_ref(ref state, init_iter->hash) . ', -1)';
		print(ref state, get_assign(ref state, init_iter->iter, new_iter));
	}
}

def print_hash_next_iter(ref state : @generator_c::state_t, next_iter : @nlasm::hash_iter_t) : ptd::void() {
	if (next_iter->hash->type is :im) {
		generate_call(ref state, {
			dest => next_iter->iter,
			mod => 'c_rt_lib',
			fun_name => 'next_iter',
			args => [:val(next_iter->iter)],
		});
	} else {
		var anon = is_anon(next_iter->hash->type as :hash);
		var new_iter = get_hash_next_iter_fun_name(get_type_name(next_iter->hash->type as :hash), state->mod_name,
			anon) . '(' .  get_reg_ref(ref state, next_iter->hash) . ', ' .
			get_reg_value(ref state, next_iter->iter) . ')';
		print(ref state, get_assign(ref state, next_iter->iter, new_iter));
	}
}

def print_hash_get_key_iter(ref state : @generator_c::state_t, get_key_iter : @nlasm::hash_dest_iter_t) : ptd::void() {
	if (get_key_iter->hash->type is :im) {
		generate_call(ref state, {
			dest => get_key_iter->dest,
			mod => 'c_rt_lib',
			fun_name => 'get_key_iter',
			args => [:val(get_key_iter->iter)],
		});
	} else {
		var key = get_reg_value(ref state, get_key_iter->hash) . '.keys[' . get_reg_value(ref state, get_key_iter->iter) . ']';
		print(ref state, get_fun_lib('copy', [get_reg_ref(ref state, get_key_iter->dest), key]));
	}
}

def print_hash_is_end(ref state : @generator_c::state_t, is_end : @nlasm::hash_dest_iter_t) : ptd::void() {
	if (is_end->hash->type is :im) {
		generate_call(ref state, {
			dest => is_end->dest,
			mod => 'c_rt_lib',
			fun_name => 'is_end_hash',
			args => [:val(is_end->iter)],
		});
	} else {
		var result = get_reg_value(ref state, is_end->iter) . ' == -1';
		print(ref state, get_assign(ref state, is_end->dest, result));
	}
}

def print_get_val(ref state : @generator_c::state_t, src : @nlasm::reg_t, dest : @nlasm::reg_t, key : ptd::sim()) : ptd::void() {
	var r;
	match (src->access_type) case :value {
		r = get_value_from_im(dest->type,
			get_fun_lib('hash_get_value_dec', [get_reg(ref state, src), get_const_sim(ref state, key)]));
	} case :reference {
		if (src->type is :rec) {
			r = get_reg(ref state, src) . '->' . get_field_name(key);
		} elsif (src->type is :im){
			r = get_value_from_im(dest->type,
				get_fun_lib('hash_get_value_dec', ['*' . get_reg(ref state, src), get_const_sim(ref state, key)]));
		} else {
			die;
		}
	}
	print(ref state, get_assign(ref state, dest, r));
}

def get_assign(ref state : @generator_c::state_t, reg : @nlasm::reg_t, right : ptd::string()) : ptd::string() {
	if (nlasm::is_empty(reg)) {
		return get_fun_lib('delete', [right]);
	} else {
		match (reg->type) case :im {
			return get_fun_lib('move', [get_reg_ref(ref state, reg), right]);
		} case :int {
			return get_reg_value(ref state, reg) . ' = ' . right;
		} case :string {
			return get_fun_lib('move', [get_reg_ref(ref state, reg), right]);
		} case :bool {
			return get_reg_value(ref state, reg) . ' = ' . right;
		} case :rec(var type) {
			return get_reg_value(ref state, reg) . ' = ' . right;
		} case :arr(var type) {
			return get_reg_value(ref state, reg) . ' = ' . right;
		} case :variant(var type) {
			return get_reg_value(ref state, reg) . ' = ' . right;
		} case :hash(var type) {
			return get_reg_value(ref state, reg) . ' = ' . right;
		}
	}
}

def generate_call(ref state : @generator_c::state_t, call : @nlasm::call_t) : ptd::void() {
	var ret = get_fun_name(call->mod, call->fun_name, state->mod_name) . '(';
	rep var i (array::len(call->args)) {
		ret .= ', ' unless 0 == i;
		match (call->args[i]) case :val(var val) {
			ret .= get_reg_value(ref state, val);
		} case :ref(var ref_val) {
			ret .= get_reg_ref(ref state, ref_val);
		}
	}
	ret .= ')';
	if (nlasm::is_empty(call->dest)) {
		print(ref state, get_assign(ref state, call->dest, ret));
	} else {
		print(ref state, get_assign(ref state, call->dest, ret));
	}
}

def create_sim(obj : ptd::string()) : ptd::string() {
	if (string_utils::is_integer(obj)) {
		return get_lib_fun('int_new') . '(' . obj . ')';
	} elsif (string_utils::is_float(obj)) {
		return get_lib_fun('float_new') . '(' . obj . ')';
	} else {
		var str = obj . '';
		str = string::replace(str, '\', '\\');
		str = string::replace(str, string::lf(), '\n');
		str = string::replace(str, string::r(), '\r');
		str = string::replace(str, string::tab(), '\t');
		str = string::replace(str, '"', '\"');
		str = string::replace(str, '''', '\''');
		return get_lib_fun('string_new') . '("' . str . '")';
	}
}

def create_sim_to_memory(obj : ptd::string(), memory : ptd::string()) : ptd::string() {
	if (string_utils::is_integer(obj)) {
		return get_lib_fun('int_new_to_memory') . '(' . obj . ',' . memory . ')';
	} elsif (string_utils::is_float(obj)) {
		return get_lib_fun('float_new_to_memory') . '(' . obj . ',' . memory . ')';
	} else {
		var str = obj . '';
		str = string::replace(str, '\', '\\');
		str = string::replace(str, string::lf(), '\n');
		str = string::replace(str, string::r(), '\r');
		str = string::replace(str, string::tab(), '\t');
		str = string::replace(str, '"', '\"');
		str = string::replace(str, '''', '\''');
		str = string::replace(str, string::chr(0), '\0');
		return get_lib_fun('string_new_to_memory') . '("' . str . '",' . memory . ')';
	}
}

def get_type_to_c(type : @tct::meta_type, name : ptd::string()) : ptd::string() {
	match (type) case :tct_im {
		return im_t();
	} case :tct_arr(var arr_type) {
		return im_t();
	} case :tct_own_arr(var arr_type) {
		var ret = 'struct ' . name . ' {
			'INT capacity;
			'INT size;
			'' . get_type_name(arr_type) . ' *value;
			'}';
		return ret;
	} case :tct_hash(var hash_type) {
		return im_t();
	} case :tct_own_hash(var hash_type) {
		var ret = 'struct ' . name . ' {
			'INT capacity;
			'INT size;
			'' . get_type_name(hash_type) . ' *values;
			'' . im_t() . ' *keys;
			'}';
		return ret;
	} case :tct_rec(var records) {
		return im_t();
	} case :tct_own_rec(var records) {
		var ret = 'struct ' . name . ' {' . string::lf();
		forh var r_name, var r_type (records) {
			ret .= get_type_name(r_type) . ' ' . get_field_name(r_name) . ';' . string::lf();
		}
		ret .= '}';
		return ret;
	} case :tct_ref(var ref_name) {
		return anon_naming::func_ref_to_struct_name(ref_name);
	} case :tct_void {
		return im_t();
	} case :tct_sim {
		return im_t();
	} case :tct_int {
		return int_t();
	} case :tct_string {
		return im_t();
	} case :tct_bool {
		return bool_t();
	} case :tct_var(var vars) {
		return im_t();
	} case :tct_own_var(var var_values) {
		var ret = 'struct ' . name . ' {
			'' . int_t() . ' label;
			'union {' . string::lf();
		forh var var_name, var var_value (var_values) {
			match (var_value) case :with_param(var inner_type) {
				ret .= get_type_name(inner_type) . ' *' . get_case_name(var_name) . ';' . string::lf();
			} case :no_param {
			}
		}
		ret .=  'void *internal;
			'} value;
			'' . int_t() . ' size;
			'}';
		return ret;
	} case :tct_empty {
		return im_t();
	}
}

def get_field_name(field : ptd::string()) : ptd::string() {
	return field . '0field';
}

def get_case_name(field : ptd::string()) : ptd::string() {
	return field . '0case';
}

def get_type_name(type : @tct::meta_type) : ptd::string() {
	if (is_anon(type)) {
		return anon_naming::get_anon_name(type);
	} else {
		return get_type_to_c(type, '');
	}
}

def print_func_type_struct_decl(ref state : @generator_c::state_t, name : ptd::string(), type : @tct::meta_type,
		mod_name : ptd::string(), anon : ptd::bool(), defined_types : ptd::hash(@tct::meta_type)) {
	var c_def = '';
	if (anon) {
		c_def .= '#ifndef ANON_TYPE_DECL' . name . string::lf();
		c_def .= '#define ANON_TYPE_DECL' . name . string::lf();
	}
	var c_name = '';
	if (anon) {
		c_name = name;
	} else {
		c_name = get_fun_name(mod_name, name, mod_name) . '0type';
	}
	if (generator_c_struct_dependence_sort::is_divisible(type)) {
		c_def .= 'typedef struct ' . c_name . ' ' . c_name . ';' . string::lf();
	} else {
		c_def .= 'typedef ' . get_type_to_c(type, '') . ' ' . c_name . ';' . string::lf();
	}
	if (anon) {
		c_def .= '#endif' . string::lf();
	}
	c_def .= get_additional_type_functions_decl(c_name, type, ref state, anon);
	print_to_header(ref state, c_def . string::lf());
	print(ref state, get_additional_type_functions_def(c_name, type, ref state, defined_types, anon));
}

def print_func_type_struct_def(ref state : @generator_c::state_t, name : ptd::string(), type : @tct::meta_type,
		mod_name : ptd::string(), anon : ptd::bool()) {
	if (!generator_c_struct_dependence_sort::is_divisible(type)) {
		return;
	}
	var c_def = '';
	if (anon) {
		c_def .= '#ifndef ANON_TYPE_DEF' . name . string::lf();
		c_def .= '#define ANON_TYPE_DEF' . name . string::lf();
	}
	var c_name = '';
	if (anon) {
		c_name = name;
	} else {
		c_name = get_fun_name(mod_name, name, mod_name) . '0type';
	}
	c_def .= get_type_to_c(type, c_name);
	c_def .= ';' . string::lf();
	if (anon) {
		c_def .= '#endif';
	}
	print_to_header(ref state, c_def . string::lf());
}

def get_inline_bin_op(ref state : @generator_c::state_t, left : @nlasm::reg_t, right : @nlasm::reg_t, op : ptd::string()) : ptd::string(){
	return get_reg_value(ref state, left) . ' ' . op . ' ' . get_reg_value(ref state, right);
}

def reg_suffix(reg : @nlasm::reg_t) : ptd::string() {
	var ret;
	match (reg->type) case :im {
		ret = 'im';
	} case :int {
		ret = 'int';
	} case :bool {
		ret = 'bool';
	} case :string {
		ret = 'string';
	} case :rec(var type) {
		ret = 'rec';
	} case :arr(var type) {
		ret = 'arr';
	} case :variant(var type) {
		ret = 'var';
	} case :hash(var type) {
		ret = 'hash';
	}
	match (reg->access_type) case :value {
	} case :reference {
		ret .= '_ptr';
	}
	ret .= '__' . ptd::int_to_string(reg->reg_no);
	return ret;
}

def get_empty_value(type : @tct::meta_type) : ptd::string() {
	match (type) case :tct_im {
		return 'NULL';
	} case :tct_arr(var arr_type) {
		return 'NULL';
	} case :tct_own_arr(var arr_type) {
		return 'NULL';
	} case :tct_hash(var hash_type) {
		return 'NULL';
	} case :tct_own_hash(var hash_type) {
		return 'NULL';
	} case :tct_rec(var records) {
		return 'NULL';
	} case :tct_own_rec(var records) {
		return 'NULL';
	} case :tct_ref(var ref_name) {
		return 'NULL';
	} case :tct_void {
		return 'NULL';
	} case :tct_sim {
		return 'NULL';
	} case :tct_int {
		return '0';
	} case :tct_string {
		return 'NULL';
	} case :tct_bool {
		return 'false';
	} case :tct_var(var vars) {
		return 'NULL';
	} case :tct_own_var(var vars) {
		return 'NULL';
	} case :tct_empty {
		return 'NULL';
	}
}

def get_additional_type_functions_decl(type_name : ptd::string(), type : @tct::meta_type, ref state : @generator_c::state_t,
		anon : ptd::bool()) : ptd::string() {
	var ret = '';
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
	} case :tct_own_arr(var arr_type) {
		ret .= get_array_push_fun_header(type_name, arr_type, state->mod_name, anon) . ';' . string::lf();
		ret .= get_array_get_fun_header(type_name, arr_type, state->mod_name, anon) . ';' . string::lf();
		ret .= get_array_len_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
		ret .= get_array_clean_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
		ret .= get_array_free_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
	} case :tct_hash(var hash_type) {
	} case :tct_own_hash(var hash_type) {
		ret .= get_hash_get_fun_header(type_name, hash_type, state->mod_name, anon) . ';' . string::lf();
		ret .= get_hash_next_iter_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
		ret .= get_hash_clean_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
		ret .= get_hash_free_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
	} case :tct_rec(var records) {
	} case :tct_own_rec(var records) {
		ret .= get_rec_clean_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
		ret .= get_rec_free_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
	} case :tct_ref(var ref_name) {
	} case :tct_void {
	} case :tct_sim {
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_var(var vars) {
	} case :tct_own_var(var vars) {
		ret .= get_variant_make_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
		ret .= get_variant_clean_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
		ret .= get_variant_free_fun_header(type_name, state->mod_name, anon) . ';' . string::lf();
	} case :tct_empty {
	}
	return ret;
}

def get_additional_type_functions_def(type_name : ptd::string(), type : @tct::meta_type, ref state : @generator_c::state_t,
		defined_types : ptd::hash(@tct::meta_type), anon : ptd::bool()) : ptd::string() {
	var ret = '';
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
	} case :tct_own_arr(var arr_type) {
		ret .= get_array_push_fun_def(type_name, arr_type, state->mod_name, anon) . string::lf();
		ret .= get_array_get_fun_def(type_name, arr_type, state->mod_name, anon) . string::lf();
		ret .= get_array_len_fun_def(type_name, state->mod_name, anon) . string::lf();
		ret .= get_array_clean_fun_def(type_name, arr_type, state->mod_name, defined_types, anon) . string::lf();
		ret .= get_array_free_fun_def(type_name, state->mod_name, anon) . string::lf();
	} case :tct_hash(var hash_type) {
	} case :tct_own_hash(var hash_type) {
		ret .= get_hash_get_fun_def(type_name, hash_type, state->mod_name, anon) . string::lf();
		ret .= get_hash_next_iter_fun_def(type_name, state->mod_name, anon) . string::lf();
		ret .= get_hash_clean_fun_def(type_name, hash_type, state->mod_name, defined_types, anon) . string::lf();
		ret .= get_hash_free_fun_def(type_name, state->mod_name, anon) . string::lf();
	} case :tct_rec(var records) {
	} case :tct_own_rec(var records) {
		ret .= get_rec_clean_fun_def(type_name, records, state->mod_name, defined_types, anon) . string::lf();
		ret .= get_rec_free_fun_def(type_name, state->mod_name, anon) . string::lf();
	} case :tct_ref(var ref_name) {
	} case :tct_void {
	} case :tct_sim {
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_var(var vars) {
	} case :tct_own_var(var var_type) {
		ret .= get_variant_make_fun_def(type_name, state->mod_name, anon) . string::lf();
		ret .= get_variant_clean_fun_def(type_name, var_type, state->mod_name, anon)
			. string::lf();
		ret .= get_variant_free_fun_def(type_name, state->mod_name, anon) . string::lf();
	} case :tct_empty {
	}
	return ret;
}

def get_spec_fun_name(type_name : ptd::sim(), mod_name : ptd::sim(), fun_name : ptd::sim(), anon : ptd::bool())
		: ptd::sim() {
	return (anon ? mod_name . '0' : '') . type_name . '0' . fun_name;
}

def get_array_push_fun_name(array_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) {
	return get_spec_fun_name(array_type_name, anon ? mod_name : '', 'push', anon);
}

def get_array_push_fun_header(array_type_name : ptd::string(), array_type : @tct::meta_type, mod_name : ptd::string(),
		anon : ptd::bool()) {
	var ret = '';
	ret .= 'void ' . get_array_push_fun_name(array_type_name, mod_name, anon) . '(';
	ret .= array_type_name . ' *arr, ';
	ret .= get_type_name(array_type) . ' arg)';
	return ret;
}

def get_array_push_fun_def(array_type_name : ptd::string(), array_type : @tct::meta_type, mod_name : ptd::string(),
		anon : ptd::bool()) {
	var ret = '';
	var default_size = '16';
	var sizeof = 'sizeof(' . get_type_name(array_type) . ')';
	ret .= get_array_push_fun_header(array_type_name, array_type, mod_name, anon) . ' {
		'if (arr->value == NULL) {
		'arr->value = alloc_mem(' . default_size . '*' . sizeof .');
		'arr->capacity = ' . default_size . ';
		'arr->size = 0;
		'}
		'if (arr->size+1 == arr->capacity) {
		'arr->value = realloc_mem(arr->value, arr->capacity*' . sizeof . ', arr->capacity*2*' . sizeof .');
		'arr->capacity *= 2;
		'} 
		'';
	if (array_type is :tct_own_rec || array_type is :tct_own_hash || array_type is :tct_own_arr
			||array_type is :tct_own_var || array_type is :tct_int || array_type is :tct_bool) {
		ret .= 'arr->value[arr->size++] = arg;';
	} else {
		ret .= 'arr->value[arr->size] = NULL;
			'' . get_fun_lib('copy', ['&(arr->value[arr->size++])', 'arg']) .';';
	}
	ret .= '
		'}';
	return ret;
}

def get_array_get_fun_name(array_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	return get_spec_fun_name(array_type_name, mod_name, 'get_ptr', anon);
}

def get_array_get_fun_header(array_type_name : ptd::string(), array_type : @tct::meta_type, mod_name : ptd::string(),
		anon : ptd::bool()) {
	var ret = '';
	ret .= get_type_name(array_type) . ' *' . get_array_get_fun_name(array_type_name, mod_name, anon) . '(';
	ret .= array_type_name . ' *arr, ';
	ret .= int_t() . 'index)';
	return ret;
}

def get_array_get_fun_def(array_type_name : ptd::string(), array_type : @tct::meta_type, mod_name : ptd::string(),
		anon : ptd::bool()) {
	var ret = '';
	ret .= get_array_get_fun_header(array_type_name, array_type, mod_name, anon) . ' {
		'if (index < 0 || index >= arr->size) {
		'nl_die();
		'}
		'return &(arr->value[index]);
		'}';
	return ret;
}

def get_array_len_fun_name(array_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	return get_spec_fun_name(array_type_name, mod_name, 'len', anon);
}

def get_array_len_fun_header(array_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	var ret = '';
	ret .= int_t() . get_array_len_fun_name(array_type_name, mod_name, anon) . '(';
	ret .= array_type_name . ' *arr)';
	return ret;
}

def get_array_len_fun_def(array_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	var ret = '';
	ret .= get_array_len_fun_header(array_type_name, mod_name, anon) . ' {
		'return arr->size;
		'}';
	return ret;
}

def get_hash_get_fun_name(hash_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	return get_spec_fun_name(hash_type_name, mod_name, 'get_ptr', anon);
}

def get_hash_get_fun_header(hash_type_name : ptd::string(), hash_type : @tct::meta_type, mod_name : ptd::string(),
		anon : ptd::bool()) {
	var ret = '';
	ret .= get_type_name(hash_type) . ' *' . get_hash_get_fun_name(hash_type_name, mod_name, anon) . '(';
	ret .= hash_type_name . ' *hash, ';
	ret .= im_t() . 'key, ';
	ret .= bool_t() . 'create_if_not_exist)';
	return ret;
}

def get_hash_get_fun_def(hash_type_name : ptd::string(), hash_type : @tct::meta_type, mod_name : ptd::string(),
		anon : ptd::bool()) {
	var ret = '';
	var default_size = '16';
	var type = get_type_name(hash_type);
	var sizeof = 'sizeof(' . type . ')';
	ret .= get_hash_get_fun_header(hash_type_name, hash_type, mod_name, anon) . ' {
		'if (hash->values == NULL) {
		'	hash->capacity = ' . default_size . ';
		'	hash->size = 0;
		'	hash->values = alloc_mem(hash->capacity*' . sizeof .');
		'	hash->keys = alloc_mem(hash->capacity*sizeof(' . im_t() .'));
		'	memset(hash->values, 0, hash->capacity*' . sizeof .');
		'	memset(hash->keys, 0, hash->capacity*sizeof(' . im_t() .'));
		'} else if (2*hash->size >= hash->capacity) {
		'	' . int_t() . ' old_capacity = hash->capacity;
		'	' . im_t() . ' *old_keys = hash->keys;
		'	' . type . ' *old_values = hash->values;
		'	hash->capacity *= 2;
		'	hash->values = alloc_mem(hash->capacity*' . sizeof . ');
		'	hash->keys = alloc_mem(hash->capacity*sizeof(' . im_t() .'));
		'	memset(hash->values, 0, hash->capacity*' . sizeof .');
		'	memset(hash->keys, 0, hash->capacity*sizeof(' . im_t() .'));
		'	for (int i = 0; i < old_capacity; i++) {
		'		if (old_keys[i] != NULL) {
		'		unsigned nr = get_hash_key(old_keys[i]) % hash->capacity;
		'		while (hash->keys[nr] != NULL && !nl_compare_internal(hash->keys[nr], old_keys[i])) {
		'			nr = (nr + 1) % hash->capacity;
		'		}
		'		hash->keys[nr] = old_keys[i];
		'		hash->values[nr] = old_values[i];
		'		}
		'	}
		'free_mem(old_keys, old_capacity*sizeof(' . im_t() . '));
		'free_mem(old_values, old_capacity*sizeof(' . type . '));
		'}
		'unsigned nr = get_hash_key(key) % hash->capacity;
		'while (hash->keys[nr] != NULL && !nl_compare_internal(hash->keys[nr], key)) {
		'	nr = (nr + 1) % hash->capacity;
		'}
		'if (hash->keys[nr] == NULL) {
		'	if (create_if_not_exist) {
		'		c_rt_lib0copy(&hash->keys[nr], key);
		'		hash->size++;
		'	} else {
		'		nl_die();
		'	}
		'}
		'return &(hash->values[nr]);
		'}';
	return ret;
}

def get_hash_next_iter_fun_name(hash_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	return get_spec_fun_name(hash_type_name, mod_name, 'next_iter', anon);
}

def get_hash_next_iter_fun_header(hash_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	var ret = '';
	ret .= 'INT ' . get_hash_next_iter_fun_name(hash_type_name, mod_name, anon) . '(';
	ret .= hash_type_name . ' *hash, ';
	ret .= 'INT last_iter)';
	return ret;
}

def get_hash_next_iter_fun_def(hash_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	var ret = get_hash_next_iter_fun_header(hash_type_name, mod_name, anon) . '{
	'	INT iter = last_iter + 1;
	'	while (iter + 1 < hash->capacity && hash->keys[iter] == NULL) {
	'		iter++;
	'	}
	'	if (iter == hash->capacity || hash->keys[iter] == NULL) return -1;
	'	return iter;
	'}';
	return ret;
}

def get_variant_make_fun_name(variant_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool())
		: ptd::string() {
	return get_spec_fun_name(variant_type_name, mod_name, 'ov_mk', anon);
}

def get_variant_make_fun_header(variant_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	var ret = '';
	ret .= 'void ' . get_variant_make_fun_name(variant_type_name, mod_name, anon) . '(';
	ret .= variant_type_name . ' *var, ';
	ret .= 'int label, ';
	ret .= 'void *value, ';
	ret .= int_t() . ' size)';
	return ret;
}

def get_variant_make_fun_def(variant_type_name : ptd::string(), mod_name : ptd::string(), anon : ptd::bool()) {
	var ret = get_variant_make_fun_header(variant_type_name, mod_name, anon) . ' {
		'if (var->value.internal != NULL) {
		'' .  get_clean_fun_name(variant_type_name, mod_name, anon) . '(*var);
		'var->value.internal = NULL;
		'}
		'var->label = label;
		'if (value != NULL) {
		'var->value.internal = alloc_mem(size);
		'memcpy(var->value.internal, value, size);
		'}
		'var->size = size;
		'}';
	return ret;
}

def takes_own_arg(function : @nlasm::function_t) : ptd::bool() {
	fora var arg (function->args_type) {
		return true unless arg->register->type is :im;
	}
	return false;
}

def get_access_op(reg : @nlasm::reg_t) : ptd::string() {
	match (reg->access_type) case :value {
		return '.';
	} case :reference {
		return '->';
	}
}

def get_type_module_name(type_name : ptd::sim()) : ptd::sim() {
	var idx = string::index2(type_name, '::');
	return string::substr(type_name, 0, idx);
}

#CLEANING
#*clean functions:	frees all members, but preserves itself - 'private'
#*free funcions:	frees all members + itself

def get_clean_fun_call(type : @tct::meta_type, mod_name : ptd::sim(), var_name : ptd::sim(), defined_types 
		: ptd::hash(@tct::meta_type)) : ptd::sim() {
	return get_clean_fun_call_exact(type, '', mod_name, var_name, defined_types, is_anon(type));
}

def get_clean_fun_call_exact(type : @tct::meta_type, type_name : ptd::sim(), mod_name : ptd::sim(), var_name 
		: ptd::sim(), defined_types : ptd::hash(@tct::meta_type), anon : ptd::bool()) : ptd::sim() {
	var ret = '';
	type_name = type_name eq '' ? get_type_name(type) : type_name;
	match (type) case :tct_own_rec(var rec_types) {
		ret = get_clean_fun_name(type_name, mod_name, anon) . '(' . var_name . ');';
	} case :tct_own_hash(var hash_type) {
		ret = get_clean_fun_name(type_name, mod_name, anon) . '(' . var_name . ');';
	} case :tct_own_arr(var arr_type) {
		ret = get_clean_fun_name(type_name, mod_name, anon) . '(' . var_name . ');';
	} case :tct_own_var(var var_types) {
		ret = get_clean_fun_name(type_name, mod_name, anon) . '(' . var_name . ');';
	} case :tct_im {
		ret = get_fun_lib('delete', [var_name]);
	} case :tct_rec(var rec_types) {
		ret = get_fun_lib('delete', [var_name]);
	} case :tct_hash(var hash_type) {
		ret = get_fun_lib('delete', [var_name]);
	} case :tct_arr(var arr_type) {
		ret = get_fun_lib('delete', [var_name]);
	} case :tct_var(var var_types) {
		ret = get_fun_lib('delete', [var_name]);
	} case :tct_int {
	} case :tct_ref(var ref_type) {
		if (defined_types{ref_type} is :tct_own_rec || type is :tct_own_hash || type is :tct_own_arr
				||type is :tct_own_var) {
			ret = get_clean_fun_name(type_name, mod_name, anon) . '(' . var_name . ');';
		} else  {
			ret = get_clean_fun_call_exact(defined_types{ref_type}, get_type_name(type),
				get_type_module_name(ref_type), var_name, defined_types, false);
		}
	} case :tct_string {
		ret = get_fun_lib('delete', [var_name]);
	} case :tct_sim {
		ret = get_fun_lib('delete', [var_name]);
	} case :tct_bool {
	} case :tct_void {
	} case :tct_empty {
	}
	return ret;
}

def get_clean_fun_name(rec_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	return get_spec_fun_name(rec_type_name, mod_name, 'clean', anon);
}

def get_rec_clean_fun_header(rec_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	var ret = '';
	ret .= 'void ' . get_clean_fun_name(rec_type_name, mod_name, anon) . '(';
	ret .= rec_type_name . ' rec)';
	return ret;
}

def get_rec_clean_fun_def(rec_type_name : ptd::sim(), rec_types : ptd::hash(@tct::meta_type), mod_name : ptd::sim(),
		 defined_types : ptd::hash(@tct::meta_type), anon : ptd::bool()) : ptd::sim() {
	var ret = get_rec_clean_fun_header(rec_type_name, mod_name, anon) . ' {' . string::lf();
	forh var key, var value (rec_types) {
		var field_name = get_field_name(key);
		ret .= get_clean_fun_call(value, mod_name, 'rec.' . field_name, defined_types) . ';' . string::lf();
	}
	ret .= '}';
	return ret;
}


def get_hash_clean_fun_header(hash_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	var ret = '';
	ret .= 'void ' . get_clean_fun_name(hash_type_name, mod_name, anon) . '(';
	ret .= hash_type_name . ' hash)';
	return ret;
}

def get_hash_clean_fun_def(hash_type_name : ptd::sim(), hash_type : @tct::meta_type, mod_name : ptd::sim(),
		defined_types : ptd::hash(@tct::meta_type), anon : ptd::bool()) : ptd::sim() {
	return get_hash_clean_fun_header(hash_type_name, mod_name, anon) . ' {
		'for (unsigned int i = 0; i < hash.capacity; i++) {
		'	if (hash.keys[i] != NULL) {
		'		' . get_clean_fun_call(:tct_sim, mod_name, 'hash.keys[i]', defined_types) . ';
		'		' . get_clean_fun_call(hash_type, mod_name, 'hash.values[i]', defined_types) . ';
		'	}
		'}
		'free_mem(hash.values, sizeof('. get_type_name(hash_type) .')*hash.capacity);
		'free_mem(hash.keys, sizeof(ImmT)*hash.capacity);
		'}';
}

def get_array_clean_fun_header(array_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	var ret = '';
	ret .= 'void ' . get_clean_fun_name(array_type_name, mod_name, anon) . '(';
	ret .= array_type_name . ' arr)';
	return ret;
}

def get_array_clean_fun_def(array_type_name : ptd::sim(), array_type : @tct::meta_type, mod_name : ptd::sim(),
		defined_types : ptd::hash(@tct::meta_type), anon : ptd::bool()) : ptd::sim() {
	return get_array_clean_fun_header(array_type_name, mod_name, anon) . ' {
		'if (arr.value == NULL) return;
		'for (unsigned int i = 0; i < arr.size; i++) {
		'	' . get_clean_fun_call(array_type, mod_name, 'arr.value[i]', defined_types) . ';
		'}
		'free_mem(arr.value, sizeof(' . get_type_name(array_type) . ')*arr.capacity);
		'}';
}

def get_variant_clean_fun_header(variant_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) {
	var ret = '';
	ret .= 'void ' . get_clean_fun_name(variant_type_name, mod_name, anon) . '(';
	ret .= variant_type_name . ' var)';
	return ret;
}

def get_variant_clean_fun_def(variant_type_name : ptd::sim(), 
		variant_type : ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})), 
		mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	var ret = get_variant_clean_fun_header(variant_type_name, mod_name, anon) . ' {
		'switch (var.label) {' . string::lf();
	var i = 0;
	forh var key, var value (variant_type) {
		match (value) case :no_param {
		} case :with_param(var param_type) {
			ret .= 'case ' . ptd::int_to_string(i) . ':
				'' . get_free_fun_call(param_type, mod_name, 'var.value.' . get_case_name(key)) . ';
				'break;' . string::lf();
		}
		i++;
	}
	ret .= '}
		'}';
	return ret;
}


def get_free_fun_call(type : @tct::meta_type, mod_name : ptd::sim(), var_name : ptd::sim()) : ptd::sim() {
	return get_free_fun_call_exact(type, '', mod_name, var_name);
}

def get_free_fun_call_exact(type : @tct::meta_type, type_name : ptd::sim(), mod_name : ptd::sim(), var_name : ptd::sim())
		: ptd::sim() {
	var ret = '';
	type_name = type_name eq '' ? get_type_name(type) : type_name;
	var anon = is_anon(type);
	match (type) case :tct_own_rec(var rec_types) {
		ret = get_free_fun_name(type_name, mod_name, anon) . '(' . var_name . ')';
	} case :tct_own_hash(var hash_type) {
		ret = get_free_fun_name(type_name, mod_name, anon) . '(' . var_name . ')';
	} case :tct_own_arr(var arr_type) {
		ret = get_free_fun_name(type_name, mod_name, anon) . '(' . var_name . ')';
	} case :tct_own_var(var var_types) {
		ret = get_free_fun_name(type_name, mod_name, anon) . '(' . var_name . ')';
	} case :tct_im {
		ret = get_fun_lib('clear', [var_name]) . ';
			'free_mem(var.value.internal, sizeof(ImmT))';
	} case :tct_rec(var rec_types) {
		ret = get_fun_lib('clear', [var_name]) . ';
			'free_mem(var.value.internal, sizeof(ImmT))';
	} case :tct_hash(var hash_type) {
		ret = get_fun_lib('clear', [var_name]) . ';
			'free_mem(var.value.internal, sizeof(ImmT))';
	} case :tct_arr(var arr_type) {
		ret = get_fun_lib('clear', [var_name]) . ';
			'free_mem(var.value.internal, sizeof(ImmT))';
	} case :tct_var(var var_types) {
		ret = get_fun_lib('clear', [var_name]) . ';
			'free_mem(var.value.internal, sizeof(ImmT))';
	} case :tct_int {
		ret = 'free_mem(' . var_name . ', sizeof(INT))';
	} case :tct_ref(var ref_type) {
		ret = get_free_fun_name(type_name, mod_name, anon) . '(' . var_name . ')';
	} case :tct_string {
		ret = get_fun_lib('clear', [var_name]) . ';
			'free_mem(var.value.internal, sizeof(ImmT))';
	} case :tct_sim {
		ret = get_fun_lib('clear', [var_name]) . ';
			'free_mem(var.value.internal, sizeof(ImmT))';
	} case :tct_bool {
		ret = 'free_mem(' . var_name . ', sizeof(bool))';
	} case :tct_void {
	} case :tct_empty {
	}
	return ret;
}



def get_free_fun_name(type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	return get_spec_fun_name(type_name, mod_name, 'free', anon);
}

def get_rec_free_fun_header(rec_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	var ret = '';
	ret .= 'void ' . get_free_fun_name(rec_type_name, mod_name, anon) . '(';
	ret .= rec_type_name . ' *rec)';
	return ret;
}

def get_rec_free_fun_def(rec_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	return get_rec_free_fun_header(rec_type_name, mod_name, anon) . ' {
		''	. get_clean_fun_name(rec_type_name, mod_name, anon) . '(*rec);
		'free_mem(rec, sizeof(*rec));
		'}';
}

def get_hash_free_fun_header(hash_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	var ret = '';
	ret .= 'void ' . get_free_fun_name(hash_type_name, mod_name, anon) . '(';
	ret .= hash_type_name . ' *hash)';
	return ret;
}

def get_hash_free_fun_def(hash_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	return get_hash_free_fun_header(hash_type_name, mod_name, anon) . ' {
		'' . get_clean_fun_name(hash_type_name, mod_name, anon) . '(*hash);
		'free_mem(hash, sizeof(*hash));
		'}';
}


def get_array_free_fun_header(array_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	var ret = '';
	ret .= 'void ' . get_free_fun_name(array_type_name, mod_name, anon) . '(';
	ret .= array_type_name . ' *arr)';
	return ret;
}

def get_array_free_fun_def(array_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	return get_array_free_fun_header(array_type_name, mod_name, anon) . ' {
		'' . get_clean_fun_name(array_type_name, mod_name, anon) . '(*arr);
		'free_mem(arr, sizeof(*arr));
		'}';
}


def get_variant_free_fun_header(variant_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) {
	var ret = '';
	ret .= 'void ' . get_free_fun_name(variant_type_name, mod_name, anon) . '(';
	ret .= variant_type_name . ' *var)';
	return ret;
}

def get_variant_free_fun_def(variant_type_name : ptd::sim(), mod_name : ptd::sim(), anon : ptd::bool()) : ptd::sim() {
	return get_variant_free_fun_header(variant_type_name, mod_name, anon) . '{
		'' .  get_clean_fun_name(variant_type_name, mod_name, anon) . '(*var);
		'free_mem(var, sizeof(*var));
		'}';
}

def is_anon(type : @tct::meta_type) : ptd::bool() {
	match (type) case :tct_rec(var inner_type) {
		return false;
	} case :tct_own_rec(var inner_type) {
		return true;
	} case :tct_hash(var inner_type) {
		return false;
	} case :tct_own_hash(var inner_type) {
		return true;
	} case :tct_arr(var inner_type) {
		return false;
	} case :tct_own_arr(var inner_type) {
		return true;
	} case :tct_var(var inner_type) {
		return false;
	} case :tct_own_var(var inner_type) {
		return true;
	} case :tct_ref(var inner_type) {
		return false;
	} case :tct_sim {
		return false;
	} case :tct_int {
		return false;
	} case :tct_string {
		return false;
	} case :tct_bool {
		return false;
	} case :tct_empty {
		return false;
	} case :tct_void {
		return false;
	} case :tct_im {
		return false;
	}
}
