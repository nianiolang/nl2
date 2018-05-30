###
# (c) Atinea Sp. z o.o.
###

use tct;
use anon_naming;
use ptd;
use hash;
use boolean_t;
use array;
use string;

def conv_priv_prefix() : ptd::string() {
	return 'conv_to_im';
}

def own_to_im_converter::res_t() {
	return ptd::rec({
		body => ptd::string(),
		required_functions => ptd::hash(@tct::meta_type),
	});
}

def own_to_im_converter::name_t() {
	return ptd::var({
		name => ptd::string(),
		nameless => ptd::none(),
	});
}

def own_to_im_converter::get_function_name(type : @tct::meta_type, known_types : ptd::hash(@tct::meta_type)) : ptd::string() {
	if (type is :tct_ref) {
		if(!tct::is_own_type(type, known_types)) {
			return '';
		}
		var ref_name = type as :tct_ref;
		var ix = string::index2(ref_name, '::');
		var module_name = string::substr(ref_name, 0, ix);
		var fun_name = string::substr(ref_name, ix + 2, string::length(ref_name) - ix - 2);
		return module_name . '::' . conv_priv_prefix() . '0' . fun_name;
	}
	if (tct::is_own_type(type, {})) {
		return conv_priv_prefix() . anon_naming::get_anon_name_loop(type);
	}
	return '';
}

def own_to_im_converter::get_required_arg_type(type : @tct::meta_type, known_types : ptd::hash(@tct::meta_type)) : ptd::string() {
	match (type) case :tct_rec (var p) {
		return '';
	} case :tct_own_rec (var p) {
		return 'ref';
	} case :tct_hash (var p) {
		return '';
	} case :tct_own_hash (var p) {
		return 'ref';
	} case :tct_arr (var p) {
		return '';
	} case :tct_own_arr (var p) {
		return 'ref';
	} case :tct_var (var p) {
		return '';
	} case :tct_own_var (var p) {
		return 'ref';
	} case :tct_ref (var p) {
		return own_to_im_converter::get_required_arg_type(known_types{p}, known_types);
	} case :tct_sim {
		return '';
	} case :tct_int {
		return '';
	} case :tct_string {
		return '';
	} case :tct_bool {
		return '';
	} case :tct_empty {
		die;
	} case :tct_void {
		die;
	} case :tct_im {
		return '';
	}
}

def get_type_constructor(type : @tct::meta_type, remove_owns : @boolean_t::type, known_types : ptd::hash(@tct::meta_type)) : ptd::string() {
	var res : ptd::string() = '';
	var own : ptd::string() = 'own';
	if (remove_owns) {
		own = 'ptd';
	}
	match (type) case :tct_rec (var p) {
		res = 'ptd::rec({';
		forh var name, var p_type (p) {
			res .= name . ' => ' . get_type_constructor(p_type, remove_owns, known_types) . ', ';
		}
		res .= '})';
	} case :tct_own_rec (var p) {
		res = own . '::rec({';
		forh var name, var p_type (p) {
			res .= name . ' => ' . get_type_constructor(p_type, remove_owns, known_types) . ', ';
		}
		res .= '})';
	} case :tct_hash (var p) {
		res = 'ptd::hash(' . get_type_constructor(p, remove_owns, known_types) . ')';
	} case :tct_own_hash (var p) {
		res = own . '::hash(' . get_type_constructor(p, remove_owns, known_types) . ')';
	} case :tct_arr (var p) {
		res = 'ptd::arr(' . get_type_constructor(p, remove_owns, known_types) . ')';
	} case :tct_own_arr (var p) {
		res = own . '::arr(' . get_type_constructor(p, remove_owns, known_types) . ')';
	} case :tct_var (var p) {
		res = 'ptd::var({';
		forh var name, var p_type (p) {
			match (p_type) case :with_param (var v) {
				res .= name . ' => ' . get_type_constructor(v, remove_owns, known_types) . ', ';
			} case :no_param {
				res .= name . ' => ptd::none(), ';
			}
		}
		res .= '})';
	} case :tct_own_var (var p) {
		res = own . '::var({';
		forh var name, var p_type (p) {
			match (p_type) case :with_param (var v) {
				res .= name . ' => ' . get_type_constructor(v, remove_owns, known_types) . ', ';
			} case :no_param {
				res .= name . ' => ptd::none(), ';
			}
		}
		res .= '})';
	} case :tct_ref (var p) {
		if (remove_owns) {
			res = get_type_constructor(known_types{p}, remove_owns, known_types);
		} else {
			res = '@' . p;
		}
	} case :tct_sim {
		res = 'ptd::string()';
	} case :tct_int {
		res = 'ptd::int()';
	} case :tct_string {
		res = 'ptd::string()';
	} case :tct_bool {
		res = 'ptd::bool()';
	} case :tct_empty {
		die;
	} case :tct_void {
		die;
	} case :tct_im {
		res = 'ptd::ptd_im()';
	}
	return res;
}

def own_to_im_converter::get_function(type : @tct::meta_type, known_types : ptd::hash(@tct::meta_type))
	: @own_to_im_converter::res_t {
	var ret_type : ptd::string() = get_type_constructor(type, true, known_types);
	var body : ptd::string() = 'def ' . own_to_im_converter::get_function_name(type, known_types)
		. '(ref arg : ' . get_type_constructor(type, false, known_types) . ') : ' . ret_type . ' {';
	if (type is :tct_ref) {
		type = known_types{type as :tct_ref};
	}
	var required_functions : ptd::hash(@tct::meta_type) = {};
	var conv_fun_name : ptd::string() = '';
	match (type) case :tct_rec (var p) {
		die;
	} case :tct_own_rec (var p) {
		body .= 'var r : ' . ret_type . ' = {';
		forh var name, var p_type (p) {
			conv_fun_name = own_to_im_converter::get_function_name(p_type, known_types);
			body .= name . ' => ' . conv_fun_name . '(' . own_to_im_converter::get_required_arg_type(p_type, known_types) . ' arg->' . name . '), ';
			hash::set_value(ref required_functions, conv_fun_name, p_type);
		}
		body .= '}; return r;';
	} case :tct_hash (var p) {
		die;
	} case :tct_own_hash (var p) {
		conv_fun_name = own_to_im_converter::get_function_name(p, known_types);
		body .= 'var h : ' . ret_type . ' = {};';
		body .= 'forh var key, ref value (arg) {';
		body .= 'h{key} = ' . conv_fun_name . '('. own_to_im_converter::get_required_arg_type(p, known_types)
			. ' value);';
		body .= '} return h;';
		hash::set_value(ref required_functions, conv_fun_name, p);
	} case :tct_arr (var p) {
		die;
	} case :tct_own_arr (var p) {
		conv_fun_name = own_to_im_converter::get_function_name(p, known_types);
		hash::set_value(ref required_functions, conv_fun_name, p);
		body .= 'var a : ' . ret_type . ' = [];';
		body .= 'fora var elem (arg) {';
		body .= 'a []= ' . conv_fun_name . '(' . own_to_im_converter::get_required_arg_type(p, known_types)
			. ' elem);';
		body .= '} return a;';
	} case :tct_var (var p) {
		die;
	} case :tct_own_var (var p) {
		body .= 'match (arg) ';
		forh var name, var p_type (p) {
			match (p_type) case :with_param (var v) {
				conv_fun_name = own_to_im_converter::get_function_name(v, known_types);
				hash::set_value(ref required_functions, conv_fun_name, v);
				body .= 'case :' . name . '(ref v_p){return :'. name . '(' . own_to_im_converter::get_function_name(v, known_types)
					. '(' . own_to_im_converter::get_required_arg_type(v, known_types) . ' v_p));} ';
			} case :no_param {
				body .= 'case :' . name . '{return :' . name . ';} ';
			}
		}
	} case :tct_ref (var p) {
		die;
	} case :tct_sim {
		die;
	} case :tct_int {
		die;
	} case :tct_string {
		die;
	} case :tct_bool {
		die;
	} case :tct_empty {
		die;
	} case :tct_void {
		die;
	} case :tct_im {
		die;
	}
	body .= '}';
	var funs_to_remove : ptd::arr(ptd::string()) = [];
	forh var r_name, var r_type (required_functions) {
		if (!tct::is_own_type(r_type, {})) {
			array::push(ref funs_to_remove, r_name);
		}
	}
	fora var r_f (funs_to_remove) {
		hash::delete(ref required_functions, r_f);
	}
	var result : @own_to_im_converter::res_t = {body => body, required_functions => required_functions};
	return result;
}
