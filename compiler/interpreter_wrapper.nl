###
# (c) Atinea Sp. z o.o.
###


use c_fe_lib;
use string;
use hash;
use array;
use ptd;
use nast;
use nparser;
use translator;
use nlasm;
use interpreter;
use nl;
use compiler_lib;

def interpreter_wrapper::errors_hash_t() {
	return ptd::hash(ptd::arr(@compiler_lib::error_t));
}

def interpreter_wrapper::errors_group_t() {
	return ptd::rec({
			module_errors => @interpreter_wrapper::errors_hash_t,
			module_warnings => @interpreter_wrapper::errors_hash_t,
		});
}

def interpreter_wrapper::module_t() {
	return ptd::hash(ptd::rec({src => ptd::string()}));
}

def get_known_func() : ptd::hash(@interpreter::known_exec_func_t) {
	var ret = {};
	hash::set_value(ref ret, 'nl::print', {func => @nl::print, type => :sequential, args => [ptd::string()], return => :no});
	return ret;
}


def interpreter_wrapper::compile(cmd_args : ptd::arr(ptd::string())) : ptd::int() {
	var input_path = [];
	var args = [];
	for (var i = 1; i < array::len(cmd_args); i++) {
		if (cmd_args[i] eq '--') {
			args = array::subarray(cmd_args, i+1, array::len(cmd_args)-i-1);
			break;
		}
		input_path []= cmd_args[i];
	}
	return interpreter_wrapper::exec_interpreter(input_path, [args]);
}

def interpreter_wrapper::exec_interpreter(input_path : ptd::arr(ptd::string()), args : ptd::arr(ptd::ptd_im()))
		: ptd::int() {
	var asts = {};
	var errors : @interpreter_wrapper::errors_group_t = {
			module_errors => {},
			module_warnings => {},
		};
	var error_file = 0;
	var nianio_files = get_files_to_parse(input_path);
	forh var module, var paths (nianio_files) {
		match (parse_module(module, paths->src, ref errors)) case :ok(var ast) {
			hash::set_value(ref asts, module, ast);
		} case :err(var m) {
			++error_file;
		}
	}
	if (error_file != 0) {
		show_and_count_errors(errors, {});
		return 1;
	}
	var modules = translate(asts);
	var modules_arr = [];
	var main_mod = '';
	forh var key, var val (modules) {
		fora var fun (val->functions) {
			if (fun->name eq 'main') {
				main_mod = key;
			}
		}
		array::push(ref modules_arr, val);
	}
	var interpreter_state = interpreter::init(modules_arr, get_known_func());
	ensure interpreter::start_args(ref interpreter_state, 'main', main_mod, args);
	ensure interpreter::exec_all_code(interpreter_state);
	return 0;
}

def get_module_name(path : ptd::string()) : ptd::string() {
	var pos = string::length(path) - 1;
	while (pos >= 0 && string::substr(path, pos, 1) ne '/' && string::substr(path, pos, 1) ne '\') {
		if (string::substr(path, pos, 1) eq '.') {
			--pos;
			break;
		}
		--pos;
	}
	var ret = '';
	while (pos >= 0 && string::substr(path, pos, 1) ne '/' && string::substr(path, pos, 1) ne '\') {
		ret = string::substr(path, pos, 1) . ret;
		--pos;
	}
	return ret;
}

def has_extension(path : ptd::string(), exten : ptd::string()) : ptd::bool() {
	var len = string::length(exten);
	return false if string::length(path) <= len;
	len = string::substr(path, string::length(path) - len, len);
	return len eq exten;
}

def get_all_nianio_file(path : ptd::string()) : ptd::arr(ptd::string()) {
	var ret = [];
	var module_files = ptd::ensure(ptd::arr(ptd::string()), c_fe_lib::get_module_files_rec(path));
	fora var file (module_files) {
		array::push(ref ret, file) if (has_extension(file, '.nl'));
	}
	return ret;
}

def get_files_to_parse(input_path : ptd::arr(ptd::string())) : @interpreter_wrapper::module_t {
	var files_to_parse : ptd::arr(ptd::rec({dir => ptd::string(), file => ptd::string()})) = [];
	fora var path (input_path) {
		if (has_extension(path, '.nl')) {
			array::push(ref files_to_parse, {dir => get_dir(path), file => path});
		} else {
			fora var module (get_all_nianio_file(path)) {
				array::push(ref files_to_parse, {dir => path, file => module});
			}
		}
	}
	var parse_file = {};
	fora var file (files_to_parse) {
		var module = get_module_name(file->file);
		var path_module = {src => file->file};
		hash::set_value(ref parse_file, module, path_module);
	}
	return parse_file;
}

def parse_module(module : ptd::string(), src : ptd::string(), ref errors : @interpreter_wrapper::errors_group_t) : ptd::var({
		err => ptd::string(),
		ok => @nast::module_t
	}) {
	try var file = ptd::ensure(ptd::var({ok => ptd::string(), err => ptd::string()}), c_fe_lib::file_to_string(src));
	var retpar = nparser::sparse(file, module, false);
	match (retpar) case :ok(var ast) {
		return :ok(ast);
	} case :error(var err) {
		hash::set_value(ref errors->module_warnings, module, []);
		hash::set_value(ref errors->module_errors, module, err);
		return :err('');
	}
}

def construct_error_message(error : @compiler_lib::error_t, path_dict) : ptd::string() {
	var msg = '';
	msg .= ' mod: ' . (hash::has_key(path_dict, error->module)
		? hash::get_value(path_dict, error->module)->src
		: error->module)
			unless (string::length(error->module) == 0);
	msg .= ' line: ' . ptd::int_to_string(error->line)
			unless (error->line == -1);
	msg .= string::lf() . '     ' . error->message;
	return msg;
}

def show_and_count_errors(all_errors : @interpreter_wrapper::errors_group_t, nianio_files) : ptd::int() {
	var num_warnings = 0;
	var num_errors = 0;
	forh var module, var module_warnings (all_errors->module_warnings) {
		var prefix = 'WAR';
		fora var warning (module_warnings) {
			c_fe_lib::print(prefix . construct_error_message(warning, nianio_files));
		}
		num_warnings += array::len(module_warnings);
		prefix = 'ERR';
		var module_errors = hash::get_value(all_errors->module_errors, module);
		fora var error (module_errors) {
			c_fe_lib::print('ERR' . construct_error_message(error, nianio_files));
		}
		num_errors += array::len(module_errors);
	}
	c_fe_lib::print('ERR: ' . ptd::int_to_string(num_errors) .
		' WAR: ' . ptd::int_to_string(num_warnings));
	return num_errors;
}

def translate(asts_to_translate : ptd::hash(@nast::module_t)) : ptd::hash(@nlasm::result_t) {
	var nlasm = {};
	forh var module, var ast (asts_to_translate) {
		var nla_asm = translator::translate(ast, {});
		hash::set_value(ref nlasm, module, nla_asm);
	}
	return nlasm;
}

def get_dir(path : ptd::string()) : ptd::string() {
	var pos = string::length(path) - 1;
	--pos if (string::substr(path, pos, 1) eq '/' || string::substr(path, pos, 1) eq '\');
	--pos while (pos >= 0 && string::substr(path, pos, 1) ne '/' && string::substr(path, pos, 1) ne '\');
	return '.' if (pos <= 0);
	return string::substr(path, 0, pos);
}
