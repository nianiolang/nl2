###
# (c) Atinea Sp. z o.o.
###


use generator_js;
use hash;
use post_processing;
use ptd;
use string_compiler;

def compiler_coverage_driver::run(modules : ptd::hash(ptd::string())) {
	match (string_compiler::compile_to_nlasm(modules)) case :ok(var nlasms) {
		var generated = 0;
		forh var module_name, var module (nlasms) {
			generator_js::generate(module, 'nl', :no);
			generator_js::generate_with_coverage(module, 'nl', :yes(module_name . '.map'), true);
			++generated;
		}
		var optimization = post_processing::init({}, :o3);
		post_processing::find(ref optimization, ref nlasms);
		forh var module_name, var module (nlasms) {
			generator_js::generate(module, 'nl', :no);
			generator_js::generate_with_coverage(module, 'nl', :yes(module_name . '.optimized.map'), true);
		}
		match (string_compiler::compile_to_nlasm(modules)) case :ok(var o4_nlasms) {
			var constant_modules = {};
			hash::set_value(ref constant_modules, 'compiler_constant_cases',
				hash::get_value(o4_nlasms, 'compiler_constant_cases'));
			var o4 = post_processing::init({}, :o4);
			post_processing::find(ref o4, ref constant_modules);
			generator_js::generate(hash::get_value(constant_modules, 'compiler_constant_cases'), 'nl', :no);
			generator_js::generate_with_coverage(hash::get_value(constant_modules, 'compiler_constant_cases'),
				'nl', :yes('compiler_constant_cases.o4.map'), true);
		} case :err(var errors) {
			die(errors);
		}
		return generated;
	} case :err(var errors) {
		die(errors);
	}
}
