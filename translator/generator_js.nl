###
# (c) Atinea Sp. z o.o.
###


use array;
use nl;
use string;
use ov;
use nlasm;
use ptd;
use hash;

def generator_js::state_t() {
	return ptd::rec({
		js => ptd::string(),
		consts => ptd::rec({
			arr => ptd::arr(ptd::ptd_im()),
			hash => ptd::hash(ptd::int()),
			name => ptd::string(),
		}),
		module_name => ptd::string(),
		sourcemap => @generator_js::sourcemap_t,
		js_lines => ptd::int(),
	});
}

def generator_js::sourcemap_opt_t() {
	return ptd::var({
		yes => ptd::string(),
		no => ptd::none(),
	});
}

def generator_js::sourcemap_t() {
	return ptd::rec({
		names => ptd::arr(ptd::string()),
		names_hash => ptd::hash(ptd::int()),
		entries => ptd::arr(@generator_js::sourcemap_entry_t),
	});
}

def generator_js::sourcemap_entry_t() {
	return ptd::rec({
		line_js => ptd::int(),
		line_nl => ptd::int(),
		symbol => ptd::var({
			yes => ptd::rec({
				begin => ptd::int(),
				end => ptd::int(),
				name_idx => ptd::int(),
			}),
			no => ptd::none(),
		}),
	});
}

def get_namespace_name() {
	return 'n';
}

def generator_js::generate(nlasm : @nlasm::result_t, namespace : ptd::string(), sourcemap : @generator_js::sourcemap_opt_t)
		: ptd::rec({js => ptd::string(), sourcemap => ptd::string()}) {
	var state = {
		js => '',
		consts => {arr => [], hash => {}, name => 'c'},
		module_name => nlasm->module_name,
		sourcemap => {names => [], names_hash => {}, entries => []},
		js_lines => 0,
	};

	print_module_prolog(namespace, ref state);
	fora var function (nlasm->functions) {
		print_function_or_singleton(function, ref state);
	}
	print_consts(ref state);
	print_module_epilog(namespace, sourcemap, ref state);

	return {
		js => state->js,
		sourcemap => (sourcemap is :yes) ? generate_sourcemap(state->sourcemap, state->module_name) : '',
	};
}

def print_module_prolog(namespace : ptd::string(), ref state : @generator_js::state_t) {
	println('var ' . namespace . ';', ref state);
	println('(function(' . get_namespace_name() . ' , undefined) {', ref state);
	println(get_namespace_name() . '.' . state->module_name . '={};', ref state);
	println('if (' . namespace . '.c_rt_lib === undefined) { nl_init.c_rt_lib_init(' .
		namespace . '=' . namespace . ' || {}); }', ref state);
	println('if (' . namespace . '.c_std_lib === undefined) { nl_init.c_std_lib_init(' .
		namespace . '=' . namespace . ' || {}); }', ref state);
}

def print_module_epilog(namespace : ptd::string(), sourcemap : @generator_js::sourcemap_opt_t,
		ref state : @generator_js::state_t) {
	println('})(' . namespace . '=' . namespace . ' || {}); ', ref state);
	match (sourcemap) case :yes(var filename) {
		println('//# sourceMappingURL=' . filename, ref state);
	} case :no {
	}
}

def print_consts(ref state : @generator_js::state_t) {
	println('var ' . state->consts->name . '=[];', ref state);
	var no = 0;
	fora var el (state->consts->arr) {
		print(state->consts->name . '[' . no . '] = ' . get_const_value(el) . ';', ref state);
		++no;
	}
}

def get_const_value_aggr(const_val, ref state : @generator_js::state_t) : ptd::string() {
	var index;
	if (nl::is_string(const_val)) {
		var const_str = ptd::ensure(ptd::string(), const_val);
 		if (hash::has_key(state->consts->hash, const_str)) {
			index = state->consts->hash{const_str};
		} else {
			state->consts->arr []= const_val;
			index = array::len(state->consts->arr) - 1;
			state->consts->hash{const_str} = index;
		}
	} else {
		state->consts->arr []= const_val;
		index = array::len(state->consts->arr) - 1;
	}
	return state->consts->name . '[' . index . ']';
}

def get_function_name(function : @nlasm::function_t, module_name : ptd::string()) {
	match (function->access) case :pub {
		return module_name . '.' . function->name;
	} case :priv {
		return '_prv_' . function->name;
	}
}

def get_function_call_name(function : @nlasm::function_t, module_name : ptd::string()) : ptd::string() {
	var cmodule = ''; match (function->access) case :pub {
		cmodule = module_name;
	} case :priv {
		cmodule = '';
	}
	return get_function_call_name_raw(function->name, cmodule);
}

def get_function_call_name_raw(function_name : ptd::string(), module_name : ptd::string()) : ptd::string() {
	if (module_name eq '') {
		return '_prv_' . function_name;
	} else {
		return get_namespace_name() . '.' . module_name . '.' . function_name;
	}
}

def escape_string(string) : ptd::string() {
	string = string::replace(string, '\', '\\');
	string = string::replace(string, '"', '\"');
	string = string::replace(string, string::lf(), '\n');
	string = string::replace(string, string::r(), '\r');
	string = string::replace(string, string::chr(0), '\0');
	string = string::replace(string, string::tab(), '\t');

	return '"' . string::replace(string, string::lf(), '\n') . '"';
}

def get_str_imm(string : ptd::string(), ref state : @generator_js::state_t) : ptd::string() {
	return get_const_value_aggr(string, ref state);
}

def is_singleton_use_function(function : @nlasm::function_t) : ptd::bool() {
	return false if (array::len(function->args_type) > 0);
	return true if function->annotation is :math;
	var was_singleton = false;
	var dest = {type => :im, reg_no => -1, access_type => :value};
	fora var cmd (function->commands) {
		var command = cmd->cmd;
		if (command is :call) {
			var call = command as :call;
			continue unless (call->fun_name eq 'sigleton_do_not_use_without_approval');
			continue unless (call->mod eq 'singleton');
			was_singleton = true;
			dest = call->dest;
		} elsif (command is :return) {
			return false unless was_singleton;
			var ret = command as :return;
			return false unless (ret is :val);
			return nlasm::eq_reg(ret as :val, dest);
		} elsif (command is :prt_lbl) {
		} elsif (command is :clear) {
		} else {
			return false if (was_singleton);
		}
	}
	return false;
}

def print_function_or_singleton(function : @nlasm::function_t, ref state : @generator_js::state_t) {
	if (is_singleton_use_function(function)) {
		print_singleton(function, ref state);
	} else {
		print_function(function, ref state);
	}

	if (function->access is :pub && !takes_own_arg(function)) {
		print_dyn_function_wrapper(function, ref state);
	}
}

def print_singleton(function : @nlasm::function_t, ref state : @generator_js::state_t) {
	var fun_name = get_function_name(function, state->module_name);
	var sin_fun = function;
	if (sin_fun->access is :priv) {
		sin_fun->name = '_singleton_fun_' . function->name;
	} else {
		sin_fun->name = '_singleton_prv_fun_' . function->name;
	}
	sin_fun->access = :priv;
	var var_name = '_singleton_val_' . get_function_name(sin_fun, state->module_name);

	print_function(sin_fun, ref state);
	println('var ' . var_name . ';', ref state);
	match (function->access) case :pub {
		println(get_namespace_name() . '.' . fun_name . '=function() {', ref state);
	} case :priv {
		println('function ' . fun_name . '() {', ref state);
	}
	println('if (' . var_name . '===undefined) {', ref state);
	println(var_name . '=' . get_function_call_name(sin_fun, state->module_name) . '();', ref state);
	println('}', ref state);
	println('return ' . var_name . ';', ref state);
	println('}', ref state);
}

def print_dyn_function_wrapper(function : @nlasm::function_t, ref state : @generator_js::state_t) {
	var i = 0;
	var call_args = '';
	var before_call = [];
	var after_call = [];
	fora var arg (function->args_type) {
		call_args .= ', ' unless i == 0;
		call_args .= 'arg' . i;
		var arg_val = get_value_from_im(arg->register->type, 'arr.value.get_index(' . i . ')');
		match (arg->by) case :ref {
			arg_val = 'new ' . imm_call('ref') . '(' . arg_val . ');';
			var ref_val = get_im_from_value(arg->register->type, 'arg' . i . '.value');
			after_call []= 'arr.value = arr.value.set_index(' . i . ', ' . ref_val . ');'; 
		} case :val {
		}
		before_call []= 'var arg' . i . '=' . arg_val . ';';
		++i;
	}
	var fun_name = state->module_name . '.__dyn_' . function->name;
	var call = get_function_call_name(function, state->module_name) . '(' . call_args . ')';

	println('', ref state);
	println(get_namespace_name() . '.' .  fun_name . '=function(arr) {', ref state);
	fora var line (before_call) {
		println(line, ref state);
	}
	println('var ret = ' . get_im_from_value(function->ret_reg_type, call), ref state);
	fora var line (after_call) {
		println(line, ref state);
	}
	println('return ret;', ref state);
	println('}', ref state);
}

def print_function(function : @nlasm::function_t, ref state : @generator_js::state_t) {
	println('', ref state);
	print_sourcemap_line_marker(function->line, ref state);
	println(get_function_header(function, state->module_name) . ' {', ref state);
	print_function_registers(function, ref state);
	println('var label=null;', ref state);
	print_sourcemap_line_marker(function->line, ref state);
	println('while (1) { switch (label) {', ref state);
	println('default:', ref state);
	var call_counter = 0;
	fora var command (function->commands) {
		print_command(command, function->args_type, ref call_counter, ref state);
	}
	println('}}}', ref state);
}

def get_function_header(function : @nlasm::function_t, module_name : ptd::string()) : ptd::string() {
	var function_header;
	match (function->access) case :pub {
		function_header = get_namespace_name() . '.' . get_function_name(function, module_name) . '=function(';
	} case :priv {
		function_header = 'function ' . get_function_name(function, module_name) . '(';
	}
	rep var i (array::len(function->args_type)) {
		function_header .= ', ' unless i == 0;
		function_header .= '___arg__' . i;
	}
	function_header .= ')';
	return function_header;
}

def print_function_registers(function : @nlasm::function_t, ref state : @generator_js::state_t) { 
	var reg_decl = 'var ';
	rep var i (array::len(function->args_type)) {
		var reg_name = get_register(function->registers[i]);

		var js_name_begin = string::length(reg_decl);
		var js_name_end = js_name_begin + string::length(reg_name);
		print_sourcemap_line_marker_with_symbol(function->line, js_name_begin, js_name_end,
			function->args_type[i]->name, ref state);

		match (function->args_type[i]->by) case :val {
			println(reg_decl. reg_name . '=___arg__' . i . ';', ref state);
		} case :ref {
			println(reg_decl. reg_name . '=___arg__' . i . '.value;', ref state);
		}
		println(get_namespace_name() . '.check_null(' . get_register_value(function->registers[i]) . ');', ref state);
	}
	var j = 0;
	for(var i = array::len(function->args_type); i < array::len(function->registers); ++i) {
		var reg_name = get_register(function->registers[i]);

		if (j < array::len(function->variables) &&
				nlasm::eq_reg(function->registers[i], function->variables[j]->register)) {
			var js_name_begin = string::length(reg_decl);
			var js_name_end = js_name_begin + string::length(reg_name);
			print_sourcemap_line_marker_with_symbol(function->line, js_name_begin, js_name_end,
				function->variables[j]->name, ref state);
			j++;
		}
		println(reg_decl . reg_name. '=null;', ref state);
	}
}

def print_command(command : @nlasm::cmd_t, fun_args : @nlasm::args_type, ref call_counter : ptd::int(),
		ref state : @generator_js::state_t) {
	var result = '';
	println('//line ' . command->debug->nast_debug->begin->line, ref state);
	match (command->cmd) case :arr_decl(var arr_decl) {
		result = get_register_value_to_assign(arr_decl->dest) . get_arr(arr_decl->src, arr_decl->dest->type) . ';';
	} case :hash_decl(var hash_decl) {
		result = get_register_value_to_assign(hash_decl->dest) . get_hash(hash_decl->src, hash_decl->dest->type) . ';';
	} case :empty_hash_decl(var hash_decl) {
		result = get_register_value_to_assign(hash_decl->dest) .
			get_empty_hash(hash_decl->fields, hash_decl->dest->type) . ';';
	} case :call(var call) {
		result = get_call(call->mod, call->fun_name, call->args, call->dest, ref call_counter);
	} case :func(var func) {
		result = get_register_value_to_assign(func->dest) .
			get_const_hash({module => func->module, name => func->name}) . ';';
	} case :una_op(var una_op) {
		result = get_una_op(una_op);
	} case :bin_op(var bin_op) {
		result = get_bin_op(bin_op, ref call_counter);
	} case :ov_is(var ov_is) {
		result = get_ov_is(ov_is->dest, ov_is->src, ov_is->label, ov_is->label_no, ref call_counter, ref state);
	} case :ov_as(var ov_as) {
		result = get_register_value_to_assign(ov_as->dest) . get_internal_call('c_rt_lib', 'ov_as', 
			[:reg(ov_as->src), :str(get_str_imm(ov_as->label, ref state))], ref call_counter) . ';';
	} case :return(var return_i) {
		result = get_return(return_i, fun_args);
	} case :die(var die_i) {
		result = get_namespace_name() . '.nl_die();';
	} case :move(var move) {
		result = get_move(move->dest, move->src, ref call_counter);
	} case :load_const(var const) {
		result = get_load_const(const->dest, const->val, ref state);
	} case :get_frm_idx(var get_frm_idx) {
		result = get_register_value_to_assign(get_frm_idx->dest) .
			get_register_value(get_frm_idx->src) . '.get_index(' . get_register_value(get_frm_idx->idx) . ');';
	} case :set_at_idx(var set_at_idx) {
		result = get_internal_call('c_rt_lib', 'set_ref_arr', [:ref(set_at_idx->src),
			:str(get_register_value(set_at_idx->idx)),
			:str(get_register_value(set_at_idx->val))], ref call_counter) . ';';
	} case :array_push(var push) {
		result = get_array_push(push->dest, push->val, ref call_counter);
	} case :array_len(var array_len) {
		result = get_array_len(array_len->dest, array_len->src, ref call_counter);
	} case :get_val(var get_val) {
		result = get_register_value_to_assign(get_val->dest) . get_internal_call('c_rt_lib', 'hash_get_value',
			[:str(get_register_value(get_val->src)), :str(get_str_imm(get_val->key, ref state))],
			ref call_counter) . ';';
	} case :set_val(var set_val) {
		result = get_internal_call('c_rt_lib', 'hash_set_value', [:ref(set_val->src),
			:str(get_str_imm(set_val->key, ref state)), :str(get_register_value(set_val->val))],
			ref call_counter) . ';';
	} case :ov_mk(var ov_mk) {
		result = get_ov_mk(ov_mk, ref state, ref call_counter);
	} case :prt_lbl(var prt_lbl) {
		result = 'case ' . prt_lbl . ':';
	} case :if_goto(var if_goto) {
		result = 'if (' . get_register_value(if_goto->src) . ') {' . get_goto(if_goto->dest) . 
			'}';
	} case :goto(var goto) {
		result = get_goto(goto);
	} case :clear(var reg) {
		result = get_register_to_assign(reg) . 'null;';
	} case :var_decl(var decl) {
	} case :use_field(var use_field) {
		result = get_register_to_assign(use_field->new_owner) .
			get_register_value(use_field->old_owner) . '.' . use_field->field_name . ';';
	} case :release_field(var release_field) {
		result = get_register_to_assign(release_field->current_owner) . 'null;';
	} case :use_index(var use_index) {
		result = get_use_index(use_index);
	} case :release_index(var release_index) {
		result = get_register_to_assign(release_index->current_owner) . 'null;';
	} case :use_hash_index(var use_hash_index) {
		result = get_use_hash_index(use_hash_index);
	} case :release_hash_index(var release_hash_index) {
		result = get_register_to_assign(release_hash_index->current_owner) . 'null;';
	} case :use_variant(var use_variant) {
		print_sourcemap_line_marker(command->debug->nast_debug->begin->line, ref state);
		println('if (' . get_register_value(use_variant->old_owner) . '.ov_label != ' . use_variant->label_no . ')' .
			 get_namespace_name() . '.nl_die();', ref state);
		result .= get_register_to_assign(use_variant->new_owner) .
			get_register_value(use_variant->old_owner) . '.ov_value;';
	} case :release_variant(var release_variant) {
		result = get_register_to_assign(release_variant->current_owner) . 'null;';
	} case :hash_init_iter(var init_iter) {
		result = get_hash_init_iter(init_iter, ref call_counter);
	} case :hash_next_iter(var next_iter) {
		result = get_hash_next_iter(next_iter, ref call_counter);
	} case :hash_get_key_iter(var get_key_iter) {
		result = get_hash_get_key_iter(get_key_iter, ref call_counter);
	} case :hash_is_end(var is_end) {
		result = get_hash_is_end(is_end, ref call_counter);
	}
	print_sourcemap_line_marker(command->debug->nast_debug->begin->line, ref state);
	println(result, ref state);
}

def get_move(dest : @nlasm::reg_t, src : @nlasm::reg_t, ref call_counter : ptd::int()) : ptd::string() {
	return '' if nlasm::is_empty(dest);
	if (src->access_type is :reference && dest->access_type is :reference) {
		return get_register_to_assign(dest) . get_register(src) . ';';
	}
	match (dest->type) case :im {
		return get_register_value_to_assign(dest) . get_im_from_value(src->type, get_register_value(src));
	} case :int {
		if(src->type is :im) {
			return get_register_value_to_assign(dest) . get_register_value(src) . '.as_int();';
		} else {
			return get_register_value_to_assign(dest) .  get_register_value(src);
		}
	} case :string {
		return get_register_value_to_assign(dest) . get_im_from_value(src->type, get_register_value(src));
	} case :bool {
		if(src->type is :im) {
			return get_register_value_to_assign(dest) . get_internal_call('c_rt_lib', 'check_true_native', [:reg(src)], ref call_counter) . ';';
		} else {
			return get_register_value_to_assign(dest) . get_register_value(src);
		}
	} case :rec(var type) {
		if(src->type is :rec) {
			return get_register_value_to_assign(dest) . get_register_value(src);
		} else {
			die;
		}
	} case :arr(var type) {
		if(src->type is :arr) {
			return get_register_value_to_assign(dest) . get_register_value(src);
		} else {
			die;
		}
	} case :variant(var type) {
		die;
	} case :hash(var type) {
		die;
	}
}

def get_load_const(dest : @nlasm::reg_t, val : ptd::ptd_im(), ref state : @generator_js::state_t) : ptd::string() {
		match (dest->type) case :im {
			return get_register_value_to_assign(dest) . get_const_value_aggr(val, ref state) . ';';
		} case :int {
			return get_register_value_to_assign(dest) . val . ';';
		} case :string {
			return get_register_value_to_assign(dest) . get_const_value_aggr(val, ref state) . ';';
		} case :bool {
			return get_register_value_to_assign(dest) . (val ? 'true' : 'false') . ';';
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

def get_array_push(dest : @nlasm::reg_t, val : @nlasm::reg_t, ref call_counter : ptd::int()) : ptd::string() {
	if (dest->type is :im) {
		return get_internal_call('c_rt_lib', 'array_push',
			[:ref(dest), :reg(val)], ref call_counter) .  ';';
	} elsif (dest->type is :arr) {
		return get_register_value(dest) . '.push(' . get_register_reference(val) . ');';
	} else {
		die;
	}
}

def get_array_len(dest : @nlasm::reg_t, arr : @nlasm::reg_t, ref call_counter : ptd::int()) : ptd::string() {
	if (arr->type is :im) {
		return get_register_value_to_assign(dest) . get_internal_call('c_rt_lib', 'array_len',
			[:str(get_register_value(arr))], ref call_counter) . ';';
	} elsif (arr->type is :arr) {
		return get_register_value_to_assign(dest) . get_register_value(arr) . '.length;';
	} else {
		die;
	}
}

def get_use_index(use_index : @nlasm::use_index_t) : ptd::string() {
	if (use_index->old_owner->type is :arr) {
		return get_register_to_assign(use_index->new_owner) . get_register_value(use_index->old_owner) . '[' . 
			get_register_value(use_index->index) . '];';
	} elsif (use_index->old_owner->type is :im) {
		return get_register_to_assign(use_index->new_owner) . get_register_value(use_index->old_owner) .
			'.get_index(' .  get_register_value(use_index->index) . ');';
	} else {
		die;
	}
}

def get_use_hash_index(use_hash_index : @nlasm::use_hash_index_t) : ptd::string() {
		var result = '';
		var index_str = get_register_value(use_hash_index->index) . '.as_js_str()';
		result .= get_register_to_assign(use_hash_index->new_owner) .
			get_register_value(use_hash_index->old_owner) . '[' . index_str . ']';
		if (use_hash_index->create_if_not_exist) {
			result .=  '={"value": {}}';
		}
		result .= ';';
		return result;
}

def get_hash_init_iter(init_iter : @nlasm::hash_iter_t, ref call_counter : ptd::int()) : ptd::string() {
	if (init_iter->hash->type is :im) {
		return get_register_value_to_assign(init_iter->iter) .
				get_internal_call('c_rt_lib', 'init_iter', [:reg(init_iter->hash)], ref call_counter) . ';';
	} elsif (init_iter->hash->type is :hash) {
		return get_register_value_to_assign(init_iter->iter) . '0';
	} else {
		die;
	}
}

def get_hash_next_iter(next_iter : @nlasm::hash_iter_t, ref call_counter : ptd::int()) : ptd::string() {
	if (next_iter->hash->type is :im) {
		return get_register_to_assign(next_iter->iter) .
				get_internal_call('c_rt_lib', 'next_iter', [:reg(next_iter->iter)], ref call_counter) . ';';
	} elsif (next_iter->hash->type is :hash) {
		return get_register_value(next_iter->iter) . '++';
	} else {
		die;
	}
}

def get_hash_get_key_iter(get_key_iter : @nlasm::hash_dest_iter_t, ref call_counter : ptd::int()) : ptd::string() {
	if (get_key_iter->hash->type is :im) {
		return get_register_to_assign(get_key_iter->dest) .
				get_internal_call('c_rt_lib', 'get_key_iter', [:reg(get_key_iter->iter)], ref call_counter) . ';';
	} elsif (get_key_iter->hash->type is :hash) {
		var hash = get_register_value(get_key_iter->hash);
		return get_register_value_to_assign(get_key_iter->dest) .
			imm_call('str') . '(Object.keys(' . hash . ')[' . get_register_value(get_key_iter->iter) . ']);';
	} else {
		die;
	}
}

def get_hash_is_end(is_end : @nlasm::hash_dest_iter_t, ref call_counter : ptd::int()) : ptd::string() {
	if (is_end->hash->type is :im) {
		return get_register_to_assign(is_end->dest) .
				get_internal_call('c_rt_lib', 'is_end_hash', [:reg(is_end->iter)], ref call_counter) . ';';
	} elsif (is_end->hash->type is :hash) {
		return get_register_value_to_assign(is_end->dest) .
			get_register_value(is_end->iter) . '>=Object.keys(' . get_register_value(is_end->hash) . ').length;';
	} else {
		die;
	}
}

def get_arr(arr : ptd::arr(@nlasm::reg_t), arr_reg_type : @nlasm::reg_type) : ptd::string() {
	var result = '';
	if (arr_reg_type is :im) {
		result .= imm_call('arr') . '([';
		result .= get_register_value(reg) . ',' fora var reg (arr);
		result .= '])';
	} elsif (arr_reg_type is :arr) {
		result .= '[';
		result .= get_register_reference(reg) . ',' fora var reg (arr);
		result .= ']';
	} else {
		die;
	}
	return result;
}

def imm_call(name : ptd::string()) {
	return get_namespace_name() . '.imm_' . name;
}

def get_bin_op(bin_op : @nlasm::bin_op, ref call_counter : ptd::int()) : ptd::string() {
	var result = get_register_value_to_assign(bin_op->dest);
	if (bin_op->op eq '>=' || bin_op->op eq '<=' || bin_op->op eq '<' || bin_op->op eq '>' || bin_op->op eq '==' || 
		bin_op->op eq '!=') {
		var left = get_register_value(bin_op->left);
		var right = get_register_value(bin_op->right);
		return result . left . bin_op->op . right . ';';
	} elsif (bin_op->op eq 'eq' || bin_op->op eq 'ne') {
		return result . get_int_call_sim('c_rt_lib', bin_op->op, [bin_op->left, bin_op->right]);
	} elsif (bin_op->op eq '.') {
		return result . get_internal_call('c_rt_lib', 'concat', [
			:str(get_register_value(bin_op->left)), :str(get_register_value(bin_op->right))], ref call_counter) . ';';
	} else {
		var left = get_register_value(bin_op->left);
		var right = get_register_value(bin_op->right);
		return result . 'Math.floor(' . left . bin_op->op . right . ');';
	}
}

def get_call(cmodule : ptd::string(), cname : ptd::string(),
		cargs : ptd::arr(ptd::var({ref => @nlasm::reg_t, val => @nlasm::reg_t})),
		dest : @nlasm::reg_t, ref call_counter : ptd::int()) : ptd::string() {
	var result = get_register_value_to_assign(dest) . get_function_call_name_raw(cname, cmodule) . '(';
	var i = 0;
	var pre = '';
	var after = '';
	fora var arg (cargs) {
		result .= ',' unless i == 0;
		++i;
		match (arg) case :ref(var reg) {
			process_ref_reg(ref pre, ref result, ref after, reg, i, call_counter);
		} case :val(var reg) {
			result .= get_register_value(reg);
		}
	}
	++call_counter;
	return pre . result . ');' . after;
}

def get_ov_mk(ov_mk : @nlasm::ov_mk_t, ref state : @generator_js::state_t, ref call_counter : ptd::int())
		: ptd::string() {
	var result = get_register_value_to_assign(ov_mk->dest);
	if (ov_mk->dest->type is :im) {
		match (ov_mk->src) case :arg(var arg) {
			return result . get_internal_call('c_rt_lib', 'ov_mk_arg',
				[:str(get_const_value_aggr(ov_mk->label, ref state)), :reg(arg)], ref call_counter) . ';';
		} case :emp {
			return result . get_const_value_aggr(ov::mk(ov_mk->label), ref state);
		}
	} elsif (ov_mk->dest->type is :variant) {
		result .= '{"ov_label": ' . ov_mk->label_no;
		match (ov_mk->src) case :arg(var arg) {
			result .= ', "ov_value": ' . get_register_reference(arg);
		} case :emp {
		}
		result .= '}';
		return result;
	} else {
		die;
	}
}

def get_ov_is(dest : @nlasm::reg_t, src : @nlasm::reg_t, label : ptd::string(), label_no : ptd::int(),
		ref call_counter : ptd::int(), ref state : @generator_js::state_t) : ptd::string() {
	if (src->type is :im) {
		return get_register_value_to_assign(dest) . get_internal_call('c_rt_lib', 'ov_is', 
			[:reg(src), :str(get_str_imm(label, ref state))], ref call_counter) . ';';
	} elsif (src->type is :variant) {
		return get_register_value_to_assign(dest) . get_register_value(src) . '.ov_label == ' . label_no;
	} else {
		die;
	}
}

def process_ref_reg(ref pre : ptd::string(), ref result : ptd::string(), ref after : ptd::string(), reg : @nlasm::reg_t,
		i : ptd::int(), call_counter : ptd::int()) {
	var reg_name = 'call_' . call_counter . '_' . i;
	pre .= 'var ' . reg_name . '=new ' . imm_call('ref') . '(' . get_register_value(reg) . ');';
	result .= reg_name;
	after .= get_register_value_to_assign(reg) . reg_name . '.value;'; 
	after .= reg_name . '=null;';
}

def get_internal_call(module_name : ptd::string(), fun_name : ptd::string(),
		args : ptd::arr(ptd::var({ref => @nlasm::reg_t, str => ptd::string(), reg => @nlasm::reg_t})), 
		ref call_counter : ptd::int()) : ptd::string() {	
	var i = 0;
	var pre = '';
	var after = '';
	var result = get_namespace_name() . '.' . module_name . '.' . fun_name . '(';
	fora var arg (args) {
		result .= ',' unless i == 0;
		++i;
		match (arg) case :ref(var reg) {
			process_ref_reg(ref pre, ref result, ref after, reg, i, call_counter);
		} case :reg(var reg) {
			result .= get_register_value(reg);
		} case :str(var str) {
			result .= str;
		}
	}
	++call_counter;
	return pre . result . ');' . after;
}

def get_int_call_sim(mod_name : ptd::string(), fun_name : ptd::string(), args : ptd::arr(@nlasm::reg_t)) {
	var regs = [];
	fora var reg (args) {
		regs []= get_register_value(reg);
	}
	return get_namespace_name() . '.' . mod_name . '.' . fun_name . '(' . array::join(', ', regs) . ')';
}

def get_const_arr(arr) : ptd::string() { 
	var result = imm_call('arr') . '([';
	result .= get_const_value(val) . ',' fora var val (arr);
	return result . '])';
}

def get_const_hash(hash) : ptd::string() {
	var result = imm_call('hash') . '({';
	result .= '' . escape_string(key) . ':' . get_const_value(val) . ',' forh var key, var val (hash);
	return result . '})';
}

def get_const_ov(variant) : ptd::string() {
	if (ov::has_value(variant)) {
		return imm_call('ov_js_str') . '(' . escape_string(ov::get_element(variant)) . ', ' . 
			get_const_value(ov::get_value(variant)) . ')';
	} else {
		return imm_call('ov_js_str') . '(' . escape_string(ov::get_element(variant)) . ',null)';
	}
}

def get_const_value(value) {
	if (nl::is_int(value)) {
		return imm_call('int') . '(' . value . ')';
	} elsif (nl::is_string(value)) {
		return imm_call('str') . '(' . escape_string(value) . ')';
	} elsif (nl::is_array(value)) {
		return get_const_arr(value);
	} elsif (nl::is_hash(value)) {
		return get_const_hash(value);
	} elsif (nl::is_bool(value)) {
		if (value) {
			return get_int_call_sim('c_rt_lib', 'get_true', []);
		} else {
			return get_int_call_sim('c_rt_lib', 'get_false', []);
		}
	} elsif (nl::is_variant(value)) {
		return get_const_ov(value);
	} else {
		die;
	}
}

def get_goto(goto : ptd::int()) : ptd::string() {
	return 'label = ' . goto . '; continue;';
}

def get_hash(harr : ptd::arr(ptd::rec({key => ptd::string(), val => @nlasm::reg_t})), hash_reg_type : @nlasm::reg_type)
		: ptd::string() {
	var result = '';
	if (hash_reg_type is :im) {
		result .= imm_call('hash') . '({';
	} elsif (hash_reg_type is :hash) {
		result .= '{';
	} else {
		die;
	}
	result .= escape_string(map->key) . ':' . get_register_value(map->val) . ',' fora var map (harr);
	if (hash_reg_type is :im) {
		result .= '})';
	} elsif (hash_reg_type is :hash) {
		result .= '}';
	} else {
		die;
	}
	return result;
}

def get_empty_hash(fields : ptd::arr(ptd::string()), hash_reg_type : @nlasm::reg_type) : ptd::string() {
	var result = '';
	if (hash_reg_type is :im) {
		result .= imm_call('hash') . '({';
		result .= escape_string(field) . ': {},' fora var field (fields);
		result .= '})';
	} elsif (hash_reg_type is :rec) {
		result .= '{';
		result .= escape_string(field) . ': {"value": {}},' fora var field (fields);
		result .= '}';
	} else {
		die;
	}
	return result;
}

def get_register(register : @nlasm::reg_t) : ptd::string() {
	return reg_suffix(register);
}

def get_register_value(register : @nlasm::reg_t) : ptd::string() {
	var register_str = get_register(register);
	match (register->access_type) case :value {
	} case :reference {
		register_str .= '.value';
	}
	return register_str;
}

def get_register_reference(register : @nlasm::reg_t) : ptd::string() {
	var register_str = get_register(register);
	match (register->access_type) case :value {
		register_str = '{"value": ' . register_str . '}';
	} case :reference {
	}
	return register_str;
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
	ret .= ptd::int_to_string(reg->reg_no);
	return ret;
}


def get_register_to_assign(register : @nlasm::reg_t) : ptd::string() {
	return '' if nlasm::is_empty(register);
	return get_register(register) . '=';
}

def get_register_value_to_assign(register : @nlasm::reg_t) : ptd::string() {
	return '' if nlasm::is_empty(register);
	return get_register_value(register) . '=';
}

def get_return(return_i : @nlasm::return, fun_args : @nlasm::args_type) : ptd::string() {
	var result = '';
	var no = 0;
	fora var arg (fun_args) {
		match (arg->by) case :ref {
			result .= '___arg__' . no . '.value = ' . get_register_value(arg->register) . ';';
		} case :val {
		}
		++no;
	}
	match (return_i) case :val(var val) {
		return result . 'return ' . get_register_value(val) . ';';
	} case :emp {
		return result . 'return null;';
	}
}

def get_una_op(una_op : @nlasm::una_op_t) : ptd::string() {
	var result = get_register_value_to_assign(una_op->dest);
	if (una_op->op eq '!') {
		return result . '!' . get_register_value(una_op->src);
	} else {
		return result . '-' . get_register_value(una_op->src);
	}
}

def get_im_from_value(type : @nlasm::reg_type, value : ptd::string()) : ptd::string() {
	match (type) case :im {
		return value;
	} case :int {
		return imm_call('int') . '(' . value . ')';
	} case :bool {
		return get_namespace_name() . '.c_rt_lib.native_to_nl(' . value . ')';
	} case :string {
		return value;
	} case :rec(var innter) {
		die;
	} case :arr(var innter) {
		die;
	} case :variant(var innter) {
		die;
	} case :hash(var innter) {
		die;
	}
}

def get_value_from_im(type : @nlasm::reg_type, im : ptd::string()) : ptd::string() {
	match (type) case :im {
		return im;
	} case :int {
		return im . '.as_int()';
	} case :bool {
		return get_namespace_name() . '.c_rt_lib.check_true_native(' . im . ')';
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

def takes_own_arg(function : @nlasm::function_t) : ptd::bool() {
	fora var arg (function->args_type) {
		return true if is_own(arg->register->type);
	}
	return false;
}

def is_own(type : @nlasm::reg_type) : ptd::bool() {
	return false if type is :im;
	return false if type is :int;
	return false if type is :bool;
	return true;
}

def print(s : ptd::string(), ref state : @generator_js::state_t) {
	state->js .= s;
}

def println(s : ptd::string(), ref state : @generator_js::state_t) {
	print(s . string::lf(), ref state);
	state->js_lines++;
}

def print_sourcemap_line_marker(line : ptd::int(), ref state: @generator_js::state_t) {
	state->sourcemap->entries []= {line_js => state->js_lines + 1, line_nl => line, symbol => :no};
}

def print_sourcemap_line_marker_with_symbol(line : ptd::int(), begin : ptd::int(), end : ptd::int(),
		name : ptd::string(), ref state: @generator_js::state_t) {
	var name_idx;
	if (hash::has_key(state->sourcemap->names_hash, name)) {
		name_idx = state->sourcemap->names_hash{name};
	} else {
		state->sourcemap->names []= name;
		name_idx = array::len(state->sourcemap->names) - 1;
		state->sourcemap->names_hash{name} = name_idx;
	}
	state->sourcemap->entries []= {
		line_js => state->js_lines + 1,
		line_nl => line,
		symbol => :yes({
			begin => begin,
			end => end,
			name_idx => name_idx,
		}),
	};
}

def generate_sourcemap(sourcemap : @generator_js::sourcemap_t, module_name : ptd::string()) : ptd::string() {
	var mappings = generate_sourcemap_mappings(sourcemap->entries);
	var names = '';
	rep var i (array::len(sourcemap->names)) {
		if (i != 0) {
			names .= ',';
		}
		names .= '"' . sourcemap->names[i] . '"';
	}
	return '{
		'    "version": 3,
		'    "file": "' . module_name . '.js",
		'    "sources": ["' . module_name . '.nl"],
		'    "names": [' . names . '],
		'    "mappings": "' . mappings . '"
		'}';
}

def generate_sourcemap_mappings(sourcemap : ptd::arr(@generator_js::sourcemap_entry_t)) : ptd::string(){
	var result = '';
	var i = 1;
	var last_line = 1;
	var last_name_idx = 0;
	fora var entry (sourcemap) {
		while (i < entry->line_js) {
			result .= ';';
			i++;
		}
		var line_nl_rel = entry->line_nl - last_line;
		match (entry->symbol) case :no {
			result .= mapping_to_base64_vlq(0, line_nl_rel, 0);
		} case :yes(var symbol) {
			var name_idx_rel = symbol->name_idx - last_name_idx;
			var begin = mapping_with_name_to_base64_vlq(symbol->begin, line_nl_rel, 0, name_idx_rel);
			var end = mapping_to_base64_vlq(symbol->end - symbol->begin, 0, 0);
			result .= begin . ',' . end;
			last_name_idx = symbol->name_idx;
		}
		last_line = entry->line_nl;
	}
	return result;
}

def mapping_to_base64_vlq(col_js : ptd::int(), line_nl : ptd::int(), col_nl : ptd::int()) : ptd::string() {
	return numbers_to_base64_vlq([col_js, 0, line_nl, col_nl]);
}

def mapping_with_name_to_base64_vlq(col_js : ptd::int(), line_nl : ptd::int(), col_nl : ptd::int(), name_idx : ptd::int())
		: ptd::string() {
	return numbers_to_base64_vlq([col_js, 0, line_nl, col_nl, name_idx]);
}

def numbers_to_base64_vlq(numbers : ptd::arr(ptd::int())) : ptd::string() {
	var vlq = '';
	fora var number (numbers) {
		vlq .= number_to_base64_vlq(number);
	}
	return vlq;
}

def number_to_base64_vlq(number : ptd::int()) {
	var vlq = '';
	vlq .= get_base64_vlq_digit(ref number, true);
	while (number > 0) {
		vlq .= get_base64_vlq_digit(ref number, false);
	}
	return vlq;
}

# Bits of the first base64 digit: |continuation|value0|value1|value2|value3| sign |
# Bits of non-first base64 digit: |continuation|value0|value1|value2|value3|value4|
def get_base64_vlq_digit(ref number : ptd::int(), first_digit : ptd::bool()) : ptd::string() {
	var digit_bitmap = 0;

	# Set sign bit if necessary
	if (first_digit && number < 0) {
		digit_bitmap += 1;
		number = -number;
	}

	# Set value bits and calculate remaining part
	if (first_digit) {
		digit_bitmap += 2 * (number % 16);
		number /= 16;
	} else {
		digit_bitmap += number % 32;
		number /= 32;
	}

	# Set continuation bit if necessary
	if (number > 0) {
		digit_bitmap += 32;
	}

	return base64_table()[digit_bitmap];
}

def base64_table() : ptd::arr(ptd::string()) {
	return ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
		'0','1','2','3','4','5','6','7','8','9','+','/'];
}
