###
# (c) Atinea Sp. z o.o.
###


use c_fe_lib;
use string;
use hash;
use array;
use dfile;
use dfile_dbg;
use ptd;
use nast;
use nparser;
use pretty_printer;
use generator_c;
use generator_js;
use translator;
use nlasm;
use post_processing;
use post_processing_t;
use tc_types;
use type_checker;
use module_checker;
use compiler_lib;
use profile;
use nsystem;
use string_utils;
use reference_generator;
use tct;
use interpreter_wrapper;

def get_dir_cache_name() : ptd::string() {
	return 'cache_nl';
}

def get_dir_pretty_name() : ptd::string() {
	return 'pretty_nl';
}

def get_default_deref_file() : ptd::string() {
	return 'deref.gr';
}

def get_default_math_file() : ptd::string() {
	return 'math_fun.gr';
}

def compiler::parse_check_t() {
	return ptd::rec({
			asts => ptd::hash(@nast::module_t),
			errors => ptd::arr(ptd::string()),
			deref_type => @tc_types::deref_types
		});
}

def compiler::errors_hash_t() {
	return ptd::hash(ptd::arr(@compiler_lib::error_t));
}

def compiler::errors_group_t() {
	return ptd::rec({
			module_errors => @compiler::errors_hash_t,
			module_warnings => @compiler::errors_hash_t,
			type_errors => @compiler::errors_hash_t,
			type_warnings => @compiler::errors_hash_t,
			loop_error => @module_checker::ret_t
		});
}

def compiler::language_t() {
	return ptd::var({
			nla => ptd::none(),
			c => ptd::none(),
			js => @compiler::js_opts,
			nl => ptd::none(),
			ast => ptd::none(),
			call_graph => ptd::none(),
		});
}

def compiler::js_opts() {
	return ptd::rec({
		namespace => ptd::string(),
		sourcemap => ptd::bool(),
	});
}

def compiler::destination_t() {
	return ptd::var({
			nla => ptd::string(),
			c => ptd::rec({c => ptd::string(), h => ptd::string()}),
			nl => ptd::string(),
			ast => ptd::string(),
			js => ptd::rec({
				js => ptd::string(),
				map_dir => ptd::string(),
				map_dir_js => ptd::string(),
				map => ptd::string(),
				nl => ptd::string()}),
			none => ptd::none(),
			call_graph => ptd::none(),
		});
}

def compiler::module_t() {
	return ptd::hash(ptd::rec({src => ptd::string(), dst => @compiler::destination_t}));
}

def compiler::deref_t() {
	return ptd::var({yes => ptd::string(), no => ptd::none()});
}

def compiler::try_t() {
	return ptd::var({err => ptd::string(), ok => ptd::string()});
}

def compiler::input_type() {
	return ptd::rec({
			input_path => ptd::arr(ptd::string()),
			cache_path => ptd::string(),
			deref => @compiler::deref_t,
			optimization => ptd::var({
					o0 => ptd::none(),
					o1 => ptd::none(),
					o2 => ptd::none(),
					o3 => ptd::none(),
					o4 => ptd::none()
				}),
			math_fun => ptd::string(),
			mode => ptd::var({strict => ptd::none(), exec => ptd::none(), ide => ptd::none(), idex => ptd::string()}),
			language => @compiler::language_t,
			alarm => ptd::var({norm => ptd::none(), wall => ptd::none()}),
			check_public_fun => ptd::bool(),
			profile => ptd::bool(),
		});
}

def compiler::file_t() {
	return ptd::var({ok => ptd::string(), err => ptd::string()});
}

def compiler::functions_t() {
	return ptd::hash(@compiler::module_functions_t);
}

def compiler::module_functions_t() {
	return ptd::hash(
		ptd::rec({
			ret => @tct::meta_type,
			args => ptd::arr(ptd::rec({
				type => @tct::meta_type,
				mod => ptd::var({none => ptd::none(), ref => ptd::none()}),
			}))
		})
	);
}

def compiler::compile(cmd_args : ptd::arr(ptd::string())) : ptd::int() {
	var opt_cli = parse_command_line_args(cmd_args);
	c_fe_lib::mk_path(opt_cli->cache_path);
	var ret : ptd::int() = 0;
	if (opt_cli->mode is :strict) {
		c_fe_lib::print('strict mode processing...');
		ret = compile_strict_file(opt_cli);
	} elsif (opt_cli->mode is :ide || opt_cli->mode is :idex) {
		c_fe_lib::print('ide mode processing...');
		compile_ide(opt_cli);
		ret = 0;
	} elsif (opt_cli->mode is :exec) {
		ret = interpreter_wrapper::exec_interpreter(opt_cli->input_path, []);
	} else {
		die;
	}
	if (opt_cli->profile) {
		var prof_path = opt_cli->cache_path . '/profile';
		c_fe_lib::mk_path(prof_path);
		profile::save(get_profile_file_name(prof_path));
	}
	return ret;
}

def get_profile_file_name(dir) {
	var path = dir . '/';
	var date = nsystem::localtime(nsystem::time());
	var pid = nsystem::get_pid();
	var time = nsystem::time_microsec();
	rep var i (5) {
		date[i] = string_utils::int2str(date[i], 2);
	}
	var msec = string_utils::int2str(time[1] / 1000, 3);
	return path . 'prof_' . date[5] . '' . date[4] . '' . date[3] . '_' . date[2] . date[1] . date[0] . msec . '_' . pid 
		. '.txt';
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

def get_out_ext(language : @compiler::language_t) : ptd::string() {
	match (language) case :nla {
		return '.nla';
	} case :c {
		return '.c';
	} case :js(var params) {
		return '.js';
	} case :ast {
		return '.ast';
	} case :nl {
		return '.nl';
	} case :call_graph {
		return '_call_graph.df';
	}
}

def mk_path(cache_path : ptd::string(), path : ptd::string()) {
	return if (path eq '.');
	mk_path(cache_path, get_dir(path));
	c_fe_lib::mk_path(cache_path . path);
}

def mk_path_module(file : ptd::rec({dir => ptd::string(), file => ptd::string()}), module : ptd::string(), input : 
	@compiler::input_type) : ptd::rec({src => ptd::string(), dst => @compiler::destination_t}) {
	var dst = input->cache_path . module;
	var src = file->file;
	match (input->language) case :nla {
		return {src => src, dst => :nla(dst . '.nla')};
	} case :c {
		return {src => src, dst => :c({c => dst . '.c', h => dst . '.h'})};
	} case :js(var params) {
		var map_dir = input->cache_path . 'maps/';
		var map_dir_js = 'maps/' . module . '.js.map';
		var map = map_dir . module . '.js.map';
		var nl = map_dir . module . '.nl';
		return {
			src => src,
			dst => :js({js => dst . '.js', map_dir => map_dir, map_dir_js => map_dir_js, map => map, nl => nl})
		};
	} case :nl {
		var len = string::length(file->dir);
		var dir = get_dir(src);
		dst = input->cache_path . dir . '/' . module;
		if (len < string::length(dir)) {
			mk_path(input->cache_path, string::substr2(dir, len + 1));
		}
		return {src => src, dst => :nl(dst . '.nl')};
	} case :ast {
		return {src => src, dst => :ast(dst . '.ast')};
	} case :call_graph {
		return {src => src, dst => :call_graph};
	}
}

def get_all_nianio_file(path : ptd::string()) : ptd::arr(ptd::string()) {
	var ret = [];
	var module_files = ptd::ensure(ptd::arr(ptd::string()), c_fe_lib::get_module_files_rec(path));
	fora var file (module_files) {
		array::push(ref ret, file) if (has_extension(file, '.nl'));
	}
	return ret;
}

def get_files_to_parse(input : @compiler::input_type) : @compiler::module_t {
	var cache_path = input->cache_path;
	var files_to_parse : ptd::arr(ptd::rec({dir => ptd::string(), file => ptd::string()})) = [];
	fora var path (input->input_path) {
		if (has_extension(path, '.nl')) {
			array::push(ref files_to_parse, {dir => get_dir(path), file => path});
		} else {
			fora var module (get_all_nianio_file(path)) {
				array::push(ref files_to_parse, {dir => path, file => module});
			}
		}
	}
	var out_ext = get_out_ext(input->language);
	var file_in_cache = {};
	match (c_fe_lib::get_module_files(cache_path)) case :ok(var ok) {
		fora var file (ptd::ensure(ptd::arr(ptd::string()), ok)) {
			continue unless (has_extension(file, out_ext));
			hash::set_value(ref file_in_cache, get_module_name(file), file);
		}
	} case :err(var err) {
		return {};
	}
	var parse_file = {};
	fora var file (files_to_parse) {
		var module = get_module_name(file->file);
		var path_module = mk_path_module(file, module, input);
		hash::set_value(ref parse_file, module, path_module);
	}
	return parse_file;
}

def parse_module(module : ptd::string(), src : ptd::string(), ref errors : @compiler::errors_group_t) : ptd::var({
		err => ptd::string(),
		ok => @nast::module_t
	}) {
	c_fe_lib::print('processing ' . module . '...');
	try var file = ptd::ensure(ptd::var({ok => ptd::string(), err => ptd::string()}), c_fe_lib::file_to_string(src));
	var retpar = nparser::sparse(file, module, true);
	match (retpar) case :ok(var ast) {
		var r = {};
		var ret = module_checker::check_module(ast, false, ref r);
		hash::set_value(ref errors->module_warnings, module, ret->warnings);
		hash::set_value(ref errors->module_errors, module, ret->errors);
		return :err('') unless array::len(ret->errors) == 0;
		return :ok(ast);
	} case :error(var err) {
		hash::set_value(ref errors->module_warnings, module, []);
		hash::set_value(ref errors->module_errors, module, err);
		return :err('');
	}
}

def get_mathematical_func(opt_cli : @compiler::input_type) : ptd::hash(ptd::int()) {
	var hash = {};
	match (c_fe_lib::file_to_string(opt_cli->math_fun)) case :ok(var file) {
		c_fe_lib::print('list of mathematical functions loaded');
		var parsed_list = dfile::try_sload(file);
		var list = [];
		match (parsed_list) case :ok(var as_list) {
			list = as_list;
		} case :err(var as_err) {
			c_fe_lib::print('could not parse list of mathematical functions:');
			c_fe_lib::print(as_err);
		}
		fora var name (list) {
			hash::set_value(ref hash, name, 1);
		}
	} case :err(var info) {
		c_fe_lib::print('NOT LOAD: list of mathematical functions');
	}
	return hash;
}

def compile_ide(opt_cli : @compiler::input_type) : ptd::void() {
	var cache_time = {};
	var asts = {};
	var asts_all = {};
	var to_save = {};
	var to_parse = {};
	var errors : @compiler::errors_group_t = {
			module_errors => {},
			module_warnings => {},
			type_errors => {},
			type_warnings => {},
			loop_error => :ok
		};
	var const_state = post_processing::init(get_mathematical_func(opt_cli), opt_cli->optimization);
	var old_files = {};
	var generator_state : @generator_c::state_t = {
			global_int_const => {arr => [], hash => {}, holes => [], module_consts => {}},
			global_string_const => {arr => [], hash => {}, holes => [], module_consts => {}},
			ret => '',
			header => '',
			fun_args => [],
			ret_reg_type => :im,
			const => {
				dynamic_nr => 0,
				int => {arr => [], hash => {}},
				string => {arr => [], hash => {}},
				singleton => {arr => [], hash => {}}
			},
			mod_name => '',
			additional_imports => {},
			defined_types => {},
		};
	var functions : @compiler::functions_t = {};
	var called_from = {};
	loop {
		errors->type_errors = {};
		errors->type_warnings = {};
		errors->loop_error = :ok;
		var nianio_files = get_files_to_parse(opt_cli);
		forh var module, var paths (nianio_files) {
			var n_time = c_fe_lib::get_modif_time(paths->src);
			continue if (n_time is :err);
			n_time = n_time as :ok;
			if (hash::has_key(cache_time, module)) {
				var time = hash::get_value(cache_time, module);
				continue unless (n_time > time);
			}
			hash::set_value(ref cache_time, module, n_time);
			hash::set_value(ref to_parse, module, paths);
		}
		forh var module, var none (old_files) {
			if (!hash::has_key(nianio_files, module)) {
				hash::delete(ref errors->module_errors, module);
				hash::delete(ref errors->module_warnings, module);
				hash::delete(ref asts, module);
				hash::delete(ref cache_time, module);
				hash::delete(ref to_parse, module);
				hash::delete(ref to_save, module);
				post_processing::clear_module_from_state(ref const_state, module);
				if (opt_cli->language is :c) {
					generator_c::clear_module_from_state(ref generator_state, module);
				}
			}
		}
		old_files = nianio_files;
		if (hash::size(to_parse) == 0) {
			c_fe_lib::sleep(1);
			continue;
		}
		var new_to_parse = {};
		forh var module, var paths (to_parse) {
			match (parse_module(module, paths->src, ref errors)) case :ok(var ast) {
				hash::set_value(ref asts, module, ast);
				hash::set_value(ref to_save, module, ast);
			} case :err(var m) {
				hash::set_value(ref new_to_parse, module, paths);
			}
		}
		to_parse = new_to_parse;
		if (hash::size(to_parse) > 0) {
			show_and_count_errors(errors, opt_cli, nianio_files);
			c_fe_lib::print(string::lf() . 'ERROR: while parsing ' . hash::size(to_parse) . ' modules');
			c_fe_lib::print('############################################################');
			continue;
		}
		check_modules(ref asts, ref errors, opt_cli->deref, opt_cli->check_public_fun);
		forh var module, var ast (asts) {
			hash::set_value(ref asts_all, module, ast);
		}
		var changed_signatures = {};
		forh var module, var old_ast (to_save) {
			hash::set_value(ref to_save, module, asts{module});
			    var old_functions = {};
			    var new_functions = get_functions(asts{module});
			    if (hash::has_key(functions, module)) {
				    old_functions = functions{module};
			    }
			    forh var name, var function (old_functions) {
				    if (hash::has_key(new_functions, name) && !dfile::deep_eq(function, new_functions{name})) {
					    changed_signatures{module . '::' . name} = 1;
				    }
			    }
			    functions{module} = new_functions;
		}
		if (hash::size(changed_signatures) != 0) {
			var all_files = get_files_to_parse(opt_cli);
			forh var function, var none1 (changed_signatures) {
				forh var module, var none2 (called_from{function}) {
					to_parse{module} = all_files{module};
					c_fe_lib::print('to recompile: ' . module);
				}
			}
			continue;
		}
		if (show_and_count_errors(errors, opt_cli, nianio_files) > 0) {
			c_fe_lib::print('############################################################');
			continue;
		}
		forh var module, var old_ast (to_save) {
			hash::set_value(ref to_save, module, asts{module});
		}
		if (!(opt_cli->language is :ast || opt_cli->language is :nl)) {
			c_fe_lib::print('search constants...');
			var new_to_save = {};
			var modules = translate(to_save, asts_all, ref const_state);
			add_to_called_from(ref called_from, modules);
			match (generate_modules_to_files(modules, nianio_files, opt_cli->cache_path,
				    ref generator_state, opt_cli->language)) case :err(var err) {
				forh var module, var none (err) {
					hash::set_value(ref new_to_save, module, hash::get_value(asts, module));
				}
			} case :ok(var ok) {
			}
			to_save = new_to_save;
		} else {
			var new_to_save = {};
			forh var module, var ast (to_save) {
				c_fe_lib::print('saving file: ' . module);
				match (save_module_to_file(ast, hash::get_value(nianio_files, module)->dst)) case :err(var err) {
					c_fe_lib::print('ERROR: ' . err);
					hash::set_value(ref new_to_save, module, ast);
				} case :ok(var ok) {
				}
			}
			to_save = new_to_save;
		}
		if (hash::size(to_save) > 0) {
			var msg = 'Can not save ' . hash::size(to_save) . ' files. ';
			c_fe_lib::print(string::lf() . 'ERROR: ' . msg);
		} else {
			 if (opt_cli->mode is :idex) {
				c_fe_lib::exec_cmd(opt_cli->mode as :idex);
			}
			c_fe_lib::print(string::lf() . 'OK: compile, check types and save changes without errors');
		}
		c_fe_lib::print('############################################################');
	}
}

def compile_strict_file(opt_cli : @compiler::input_type) : ptd::int() {
	var asts = {};
	var errors : @compiler::errors_group_t = {
			module_errors => {},
			module_warnings => {},
			type_errors => {},
			type_warnings => {},
			loop_error => :ok
		};
	
	profile::begin('module parsing');
	var error_file = 0;
	var nianio_files = get_files_to_parse(opt_cli);
	forh var module, var paths (nianio_files) {
		match (parse_module(module, paths->src, ref errors)) case :ok(var ast) {
			hash::set_value(ref asts, module, ast);
		} case :err(var m) {
			++error_file;
		}
	}
	profile::end('module parsing');
	if (error_file != 0) {
		show_and_count_errors(errors, opt_cli, nianio_files);
		return 1;
	}

	profile::begin('module checking');
	check_modules(ref asts, ref errors, opt_cli->deref, opt_cli->check_public_fun);
	profile::end('module_checking');
	if (hash::has_key(asts, 'main')) {
		c_fe_lib::string_to_file('asts.df', dfile_dbg::ssave(asts->main));
	}
	if (show_and_count_errors(errors, opt_cli, nianio_files) > 0) {
		return 1;
	}
	if (!(opt_cli->language is :ast || opt_cli->language is :nl)) {
		profile::begin('post processing');
		var generator_state : @generator_c::state_t = {
			global_int_const => {arr => [], hash => {}, holes => [], module_consts => {}},
			global_string_const => {arr => [], hash => {}, holes => [], module_consts => {}},
			ret => '',
			header => '',
			fun_args => [],
			ret_reg_type => :im,
			const => {
				dynamic_nr => 0,
				int => {arr => [], hash => {}},
				string => {arr => [], hash => {}},
				singleton => {arr => [], hash => {}}
			},
			mod_name => '',
			additional_imports => {},
			defined_types => {},
		};
		c_fe_lib::print('search constants...');
		var const_state = post_processing::init(get_mathematical_func(opt_cli), opt_cli->optimization);
		profile::end('post processing');

		profile::begin('translate to nlasm');
		var modules = translate(asts, asts, ref const_state);
		profile::end('translate to nlasm');

		if (hash::has_key(modules, 'main')) {
			c_fe_lib::string_to_file('nlasm.df', dfile_dbg::ssave(modules->main));
		}

		profile::begin('save files');
		generate_modules_to_files(modules, nianio_files, opt_cli->cache_path, ref generator_state, opt_cli->language);
		profile::end('save files');
	} else {
		forh var module, var ast (asts) {
			c_fe_lib::print('saving file: ' . module);
			match (save_module_to_file(ast, hash::get_value(nianio_files, module)->dst)) case :err(var err) {
				c_fe_lib::print('ERROR: ' . err);
				return 1;
			} case :ok(var ok) {
			}
		}
	}
	return 0;
}

def construct_error_message(error : @compiler_lib::error_t, path_dict) : ptd::string() {
	var msg = '';
	msg .= ' mod: ' . (hash::has_key(path_dict, error->module)
		? hash::get_value(path_dict, error->module)->src
		: error->module)
			unless (string::length(error->module) == 0);
	msg .= ' line: ' . error->line unless (error->line == -1);
	msg .= string::lf() . '     ' . error->message;
	return msg;
}

def show_and_count_errors(all_errors : @compiler::errors_group_t, opt_cli : @compiler::input_type, nianio_files) : ptd::int() {
	var num_warnings = 0;
	var num_errors = 0;
	forh var module, var module_warnings (all_errors->module_warnings) {
		var prefix = 'WAR';
		prefix = 'ERR' if (opt_cli->alarm is :wall);
		fora var warning (module_warnings) {
			c_fe_lib::print(prefix . construct_error_message(warning, nianio_files));
		}
		num_warnings += array::len(module_warnings);
		if (hash::has_key(all_errors->type_warnings, module)) {
			var type_warnings = hash::get_value(all_errors->type_warnings, module);
			fora var warning (type_warnings) {
				c_fe_lib::print(prefix . construct_error_message(warning, nianio_files));
			}
			num_warnings += array::len(type_warnings);
		}
		prefix = 'ERR';
		var module_errors = hash::get_value(all_errors->module_errors, module);
		fora var error (module_errors) {
			c_fe_lib::print('ERR' . construct_error_message(error, nianio_files));
		}
		num_errors += array::len(module_errors);
		if (hash::has_key(all_errors->type_errors, module)) {
			var type_errors = hash::get_value(all_errors->type_errors, module);
			fora var error (type_errors) {
				c_fe_lib::print('ERR' . construct_error_message(error, nianio_files));
			}
			num_errors += array::len(type_errors);
		}
	}
	match (all_errors->loop_error) case :loop(var loops) {
		var loop_str = '';
		fora var el (loops) {
			loop_str .= el . ' -> ';
		}
		c_fe_lib::print('ERR Loop found in module imports: ' . loop_str . '. ');
		++num_errors;
	} case :ok {
	}
	if (opt_cli->alarm is :wall) {
		num_errors += num_warnings;
		num_warnings = 0;
	}
	c_fe_lib::print('ERR: ' . num_errors .  ' WAR: ' . num_warnings);
	return num_errors;
}

def translate(asts_to_translate : ptd::hash(@nast::module_t), asts_all : ptd::hash(@nast::module_t),
		ref post_proc : @post_processing_t::state_t) : ptd::hash(@nlasm::result_t) {
	var nlasm = {};
	var defined_types : ptd::hash(@tct::meta_type) = {};
	forh var module, var ast (asts_all) {
		fora var func (ast->fun_def) {
			match (func->defines_type) case :no {
			} case :yes(var type) {
				defined_types{module . '::' . func->name} = type;
			}
		}
	}
	forh var module, var ast (asts_to_translate) {
		var nla_asm = translator::translate(ast, defined_types);
		hash::set_value(ref nlasm, module, nla_asm);
	}
	post_processing::find(ref post_proc, ref nlasm);
	return nlasm;
}

def check_modules(ref asts : ptd::hash(@nast::module_t), ref errors : @compiler::errors_group_t, deref : @compiler::deref_t, check_public_fun : ptd::bool())
	: ptd::void() {
	c_fe_lib::print('type checking...');
	var ret = type_checker::check_modules(ref asts, asts);
	if (check_public_fun) {
		var used_functions = {};
		match (c_fe_lib::file_to_string('public_functions.df')) case :ok(var ok) {
			used_functions = dfile::sload(ok);
			used_functions = ptd::ensure(ptd::hash(ptd::int()), used_functions);
		} case :err(var err) {
		}
		var functions = {};
		var modules = [];
		forh var module_name, var ast (asts) {
			module_checker::check_module(ast, true, ref functions);
			array::push(ref modules, ast);
		}

		module_checker::check_used_functions(used_functions, functions, modules, ref ret);
	}
	var type_errors = array::len(ret->errors);
	fora var err (ret->errors) {
		var old_errors = [];
		if (hash::has_key(errors->type_errors, err->module)) {
			old_errors = hash::get_value(errors->type_errors, err->module);
		}
		array::push(ref old_errors, err);
		hash::set_value(ref errors->type_errors, err->module, old_errors);
	}
	fora var warning (ret->warnings) {
		var old_warnings = [];
		if (hash::has_key(errors->type_warnings, warning->module)) {
			old_warnings = hash::get_value(errors->type_warnings, warning->module);
		}
		array::push(ref old_warnings, warning);
		hash::set_value(ref errors->type_warnings, warning->module, old_warnings);
	}
	c_fe_lib::print('Found ' . type_errors . ' errors of types. ') unless (type_errors == 0);
	var imports = {};
	forh var module, var ast (asts) {
		var mod_import = [];
		fora var import (ast->import) {
			array::push(ref mod_import, import->name);
		}
		hash::set_value(ref imports, module, mod_import);
	}
	errors->loop_error = module_checker::search_loops(imports);
	if (deref is :yes) {
		c_fe_lib::print('deleted types: ' . array::len(ret->deref->delete));
		c_fe_lib::print('created types: ' . array::len(ret->deref->create));
		var references = reference_generator::generate(asts);
		ensure c_fe_lib::string_to_file(deref as :yes, serialize_deref(ret->deref, references));
	}
}

def serialize_deref(deref : @tc_types::deref_types, references : @reference_generator::refs) : ptd::string() {	
	var ret = [];
	array::append(ref ret, process_deref(deref));
	array::append(ref ret, references);
	return dfile::ssave_net_format(ptd::ensure(@reference_generator::refs, ret));
}


def process_deref(deref : @tc_types::deref_types) : @reference_generator::refs {
	var ret = [];
	fora var cmd (deref->create) {
		ret []= :deref(:delete(cmd));
	}

	fora var cmd (deref->delete) {
		ret []= :deref(:create(cmd));
	}
	return ret;
}

def try_save_file(content : ptd::string(), path : ptd::string(), ref error) {
	match (c_fe_lib::string_to_file(path, content)) case :ok(var ok) {
	} case :err(var as_error) {
		c_fe_lib::print('ERROR: ' . as_error);
		error = true;
	}
}

def generate_modules_to_files(modules : ptd::hash(@nlasm::result_t), nianio_files : @compiler::module_t, cache_path : 
		ptd::string(), ref generator_state : @generator_c::state_t, language : @compiler::language_t) : ptd::var({
		ok => ptd::string(),
		err => ptd::hash(ptd::string())
	}) {
	var error_modules = {};
	match (language) case :nla {
		forh var module, var nlasm (modules) {
			var error = false;
			var path = hash::get_value(nianio_files, module)->dst as :nla;
			c_fe_lib::print('saving file: ' . module);
			try_save_file(dfile::ssave(nlasm), path, ref error);
			hash::set_value(ref error_modules, module, '') if (error);
		}
	} case :c {
		var ret = generator_c::generate(modules, ref generator_state);
		var error = false;
		forh var module, var files (ret->modules) {
			error = false;
			var paths = hash::get_value(nianio_files, module)->dst as :c;
			c_fe_lib::print('saving file: ' . module);
			try_save_file(files->c, paths->c, ref error);
			try_save_file(files->h, paths->h, ref error);
			hash::set_value(ref error_modules, module, '') if (error);
		}
		c_fe_lib::print('saving global const file');
		try_save_file(ret->global_const->c, cache_path . 'c_global_const.c', ref error);
		try_save_file(ret->global_const->h, cache_path . 'c_global_const.h', ref error);
	} case :js(var params) {
		forh var module, var nlasm (modules) {
			var error = false;
			var sourcemap = :no;
			var paths = nianio_files{module}->dst as :js;
			if (params->sourcemap) {
				sourcemap = :yes(paths->map_dir_js);
			}
			var ret = generator_js::generate(nlasm, params->namespace, sourcemap);
			c_fe_lib::print('saving file: ' . module);
			try_save_file(ret->js, paths->js, ref error);
			if (params->sourcemap) {
				c_fe_lib::mk_path(paths->map_dir);
				try_save_file(ret->sourcemap, paths->map, ref error);
				c_fe_lib::exec_cmd('cp ''' . nianio_files{module}->src . ''' ''' . paths->nl . '''');
			}
			hash::set_value(ref error_modules, module, '') if (error);
		}
	} case :nl {
		die;
	} case :ast {
		die;
	} case :call_graph {
		var call_graph = post_processing::get_call_graph(modules);
		var error = false;
		c_fe_lib::print('Saving call_graph file...');
		try_save_file(dfile::ssave(call_graph), cache_path . '_call_graph.df', ref error);
		if (error) {
			c_fe_lib::print('Error while saving to file.');
		}
	}
	if (hash::size(error_modules) > 0) {
		return :err(error_modules);
	} else {
		return :ok('');
	}
}

def save_module_to_file(ast : @nast::module_t, mod_dst : @compiler::destination_t) : @compiler::file_t {
	match (mod_dst) case :nla(var path) {
		die;
	} case :c(var paths) {
		die;
	} case :js(var path) {
		die;
	} case :nl(var path) {
		return ptd::ensure(@compiler::file_t, c_fe_lib::string_to_file(path, pretty_printer::print_module_to_str(ast)));
	} case :ast(var path) {
		return ptd::ensure(@compiler::file_t, c_fe_lib::string_to_file(path, dfile::ssave(ast)));
	} case :none {
		die;
	} case :call_graph {
		die;
	}
}

def get_dir(path : ptd::string()) : ptd::string() {
	var pos = string::length(path) - 1;
	--pos if (string::substr(path, pos, 1) eq '/' || string::substr(path, pos, 1) eq '\');
	--pos while (pos >= 0 && string::substr(path, pos, 1) ne '/' && string::substr(path, pos, 1) ne '\');
	return '.' if (pos <= 0);
	return string::substr(path, 0, pos);
}

def parse_command_line_args(args : ptd::arr(ptd::string())) : @compiler::input_type {
	var ret : @compiler::input_type = {
			language => :c,
			mode => :strict,
			input_path => ['.'],
			optimization => :o1,
			deref => :no,
			math_fun => get_default_math_file(),
			cache_path => '',
			alarm => :norm,
			check_public_fun => false,
			profile => false,
		};
	var was_input = false;
	var sub_patch_out = get_dir_cache_name();
	for(var i = 1; i < array::len(args); ++i) {
		var el = args[i];
		if (string::length(el) >= 2 && (string::substr(el, 0, 2) eq '--')) {
			var opt = string::substr(el, 2, string::length(el) - 2);
			if (opt eq 'deref') {
				ret->deref = :yes('');
			} elsif (opt eq 'nla') {
				ret->language = :nla;
			} elsif (opt eq 'ast') {
				ret->language = :ast;
			} elsif (opt eq 'c') {
				ret->language = :c;
			} elsif (opt eq 'js') {
				if (!ret->language is :js) {
					ret->language = :js(get_default_js_opts());
				}
			} elsif (opt eq 'call_graph') {
				ret->language = :call_graph;
			} elsif (opt eq 'nl') {
				ret->language = :nl;
				sub_patch_out = get_dir_pretty_name();
			} elsif (opt eq 'ide') {
				ret->mode = :ide;
			} elsif (opt eq 'idex') {
				++i;
				die unless (i < array::len(args));
				ret->mode = :idex(args[i]);
			} elsif (opt eq 'strict') {
				ret->mode = :strict;
			} elsif (opt eq 'exec') {
				ret->mode = :exec;
			} elsif (opt eq 'o' || opt eq 'out') {
				++i;
				die unless (i < array::len(args));
				ret->cache_path = args[i] . '/';
			} elsif (opt eq 'math') {
				++i;
				die unless (i < array::len(args));
				ret->math_fun = args[i];
			} elsif (opt eq 'O0') {
				ret->optimization = :o0;
			} elsif (opt eq 'O1') {
				ret->optimization = :o1;
			} elsif (opt eq 'O2') {
				ret->optimization = :o2;
			} elsif (opt eq 'O3') {
				ret->optimization = :o3;
			} elsif (opt eq 'O4') {
				ret->optimization = :o4;
			} elsif (opt eq 'Wall') {
				ret->alarm = :wall;
			} elsif (opt eq 'check_public_fun') {
				ret->check_public_fun = true;
			} elsif (opt eq 'profile') {
				ret->profile = true;
			} elsif (opt eq 'namespace') {
				++i;
				die unless (i < array::len(args));
				var as_js;
				if (ret->language is :js) {
					as_js = ret->language as :js;
				} else {
					as_js = get_default_js_opts();
				}
				as_js->namespace = args[i];
				ret->language = :js(as_js);
			} elsif (opt eq 'debug') {
				var as_js;
				if (ret->language is :js) {
					as_js = ret->language as :js;
				} else {
					as_js = get_default_js_opts();
				}
				as_js->sourcemap = true;
				ret->language = :js(as_js);
			} else {
				c_fe_lib::print('unknown compiler option: ' . el);
			}
		} else {
			ret->input_path = [] unless was_input;
			array::push(ref ret->input_path, el);
			was_input = true;
		}
	}
	if (ret->cache_path eq '') {
		ret->cache_path = './' . sub_patch_out . '/';
	}
	ret->deref = :yes(ret->cache_path . get_default_deref_file()) if ret->deref is :yes;
	return ret;
}

def get_default_js_opts() : @compiler::js_opts {
	return {
		namespace => 'nl',
		sourcemap => false,
	};
}

def get_functions(ast : @nast::module_t) : @compiler::module_functions_t {
	var result : @compiler::module_functions_t = {};
	fora var function (ast->fun_def) {
		var ret = function->ret_type->tct_type;
		var args = [];
		fora var arg (function->args) {
			args []= {type => arg->tct_type, mod => arg->mod};
		}
		result{function->name} = {ret => ret, args => args};
	}
	return result;
}

def add_to_called_from(ref called_from : ptd::hash(ptd::hash(ptd::int())), modules : ptd::hash(@nlasm::result_t)) {
	forh var module_name, var module (modules) {
		fora var function (module->functions) {
			fora var cmd (function->commands) {
				add_cmd_to_called_from(ref called_from, cmd, module_name);
			}
		}
	}
}

def add_cmd_to_called_from(ref called_from : ptd::hash(ptd::hash(ptd::int())), cmd : @nlasm::cmd_t,
		module_name : ptd::string()) {
	if (cmd->cmd is :call) {
		var call = cmd->cmd as :call;
		var fun_name = call->mod . '::' . call->fun_name;
		if (!hash::has_key(called_from, fun_name)) {
			called_from{fun_name} = {};
		}
		called_from{fun_name}{module_name} = 1;
	}
}
