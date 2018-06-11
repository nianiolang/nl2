###
# (c) Atinea Sp. z o.o.
###


use nlasm;
use translator;
use nparser;
use module_checker;
use type_checker;
use array;
use hash;
use post_processing;
use ptd;
use pretty_printer;
use nast;
use compiler_lib;

def string_compiler::compile(program : ptd::string(), module_name : ptd::string()) : ptd::var({
		ok => @nlasm::result_t,
		err => @compiler_lib::errors_t,
	}) {
	var retpar = nparser::sparse(program, module_name, true);
	match (retpar) case :ok(var ast) {
		var errors = [];
		var r = {};
		var module_ret = module_checker::check_module(ast, false, ref r);
		errors = module_ret->errors;
		if (array::len(errors) == 0) {
			var asts = {};
			hash::set_value(ref asts, ast->name, ast);
			var types_ret = type_checker::check_modules(ref asts, asts);
			errors = types_ret->errors;
		}
		return :ok(translator::translate(ast, {})) if array::len(errors) == 0;
		return :err(errors);
	} case :error(var errors) {
		return :err(errors);
	}
}

def string_compiler::modules_t() {
	return ptd::hash(ptd::rec({code => ptd::string(), module_name => ptd::string()}));
}

def string_compiler::type_check_t() {
	return ptd::arr(ptd::rec({check => ptd::arr(ptd::string()), lib => ptd::arr(ptd::string())}));
}

def string_compiler::printed_struct_t() {
	return ptd::rec({
			imports => ptd::arr(ptd::string()),
			functions => ptd::arr(ptd::rec({name => ptd::string(), head => ptd::string(), body => ptd::string()}))
		});
}

def string_compiler::error_t() {
	return ptd::rec({error => @compiler_lib::error_t, key => ptd::string()});
}

def string_compiler::print_modules(asts : ptd::hash(@nast::module_t)) : ptd::hash(@string_compiler::printed_struct_t) {
	var printed = {};
	forh var key, var ast (asts) {
		hash::set_value(ref printed, key, pretty_printer::print_module_to_struct(ast));
	}
	return printed;
}

def string_compiler::parse_module(modules : @string_compiler::modules_t) : ptd::var({
		ok => ptd::hash(@nast::module_t),
		err => ptd::arr(@string_compiler::error_t)
	}) {
	var errors = [];
	var asts = {};
	forh var key, var data (modules) {
		match (nparser::sparse(data->code, data->module_name, true)) case :ok(var ast) {
			var r = {};
			var ret = module_checker::check_module(ast, false, ref r);
			fora var a (ret->errors){
				array::push(ref errors, {error => a, key => key});
			}
			hash::set_value(ref asts, key, ast);
		} case :error(var err) {		
			fora var a (err){
				array::push(ref errors, {error=> a, key => key});
			}
		}
	}
	return :err(errors) if array::len(errors) > 0;
	return :ok(asts);
}

def string_compiler::check_type(type_check : @string_compiler::type_check_t, asts : ptd::hash(@nast::module_t)) : ptd::var({
		ok => ptd::string(),
		err => ptd::arr(@string_compiler::error_t)
	}) {
	var errors = [];
	fora var data (type_check) {
		var lib = {};
		var check = {};
		var keys = {};
		fora var key (data->lib) {
			hash::set_value(ref lib, hash::get_value(asts, key)->name, hash::get_value(asts, key));
			hash::set_value(ref keys, hash::get_value(asts, key)->name, key);
		}
		fora var key (data->check) {
			hash::set_value(ref check, hash::get_value(asts, key)->name, hash::get_value(asts, key));
			hash::set_value(ref keys, hash::get_value(asts, key)->name, key);
		}
		var types_ret = type_checker::check_modules(ref check, lib);
		fora var err (types_ret->errors) {
			array::push(ref errors, {error=> err, key => hash::get_value(keys, err->module)});
		}
		return :err(errors) if array::len(types_ret->errors) > 0;
	}
	return :ok('');
}

def string_compiler::compile_to_nlasm(modules : ptd::hash(ptd::string())) : ptd::var({
		ok => ptd::hash(@nlasm::result_t),
		err => @compiler_lib::errors_t
	}) {
	var errors = [];
	var asts = {};
	forh var module_name, var code (modules) {
		match (nparser::sparse(code, module_name, true)) case :ok(var ast) {
			var r = {};	
			var ret = module_checker::check_module(ast, false, ref r);
			array::append(ref errors, ret->errors);
			hash::set_value(ref asts, module_name, ast);
		} case :error(var err) {
			array::append(ref errors, err);
		}
	}
	return :err(errors) if array::len(errors) > 0;
	var types_ret = type_checker::check_modules(ref asts, asts);
	return :err(types_ret->errors) if array::len(types_ret->errors) > 0;
	var nlasms = {};
	forh var module_name, var ast (asts) {
		hash::set_value(ref nlasms, module_name, translator::translate(ast, {}));
	}
	var state = post_processing::init({}, :o0);
	post_processing::find(ref state, ref nlasms);
	return :ok(nlasms);
}
