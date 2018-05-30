###
# (c) Atinea Sp. z o.o.
###


use hash;
use ptd;
use boolean_t;
use string;

def tct::arr(arr_type : @tct::meta_type) : @tct::meta_type {
	return :tct_arr(arr_type);
}

def tct::own_arr(arr_type : @tct::meta_type) : @tct::meta_type {
	return :tct_own_arr(arr_type);
}

def tct::rec(h : ptd::hash(@tct::meta_type)) : @tct::meta_type {
	return :tct_rec(h);
}

def tct::own_rec(h : ptd::hash(@tct::meta_type)) : @tct::meta_type {
	return :tct_own_rec(h);
}

def tct::ref(name : ptd::string()) : @tct::meta_type {
	return :tct_ref(name);
}

def tct::int() : @tct::meta_type {
	return :tct_int;
}

def tct::string() : @tct::meta_type {
	return :tct_string;
}

def tct::none() {
	return :tct_var_none;
}

def tct::void() : @tct::meta_type {
	return :tct_void;
}

def tct::empty() : @tct::meta_type {
	return :tct_empty;
}

def tct::hash(h : @tct::meta_type) : @tct::meta_type {
	return :tct_hash(h);
}

def tct::own_hash(h : @tct::meta_type) : @tct::meta_type {
	return :tct_own_hash(h);
}

def tct::tct_im() : @tct::meta_type {
	return :tct_im;
}

def tct::bool() : @tct::meta_type {
	return :tct_bool;
}

def tct::func() : @tct::meta_type {
	return tct::rec({module => tct::string(), name => tct::string()});
}

def tct::var(h) : @tct::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (value is :tct_var_none) {
			et = :no_param;
		} else {
			et = :with_param(ptd::ensure(@tct::meta_type, value));
		}
		hash::set_value(ref types, item, et);
	}
	return :tct_var(types);
}

def tct::own_var(h) : @tct::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (value is :tct_var_none) {
			et = :no_param;
		} else {
			et = :with_param(ptd::ensure(@tct::meta_type, value));
		}
		hash::set_value(ref types, item, et);
	}
	return :tct_own_var(types);
}

def tct::try_var_as_case(variant : @tct::meta_type, str_case : ptd::string()) : ptd::var({ok=>@tct::meta_type, err => ptd::string()}) {
	return :err('') unless variant is :tct_var;
	return :err('') unless hash::has_key(variant as :tct_var, str_case);
	var sub = hash::get_value(variant as :tct_var, str_case);
	return :err('') unless sub is :with_param;
	return :ok(sub as :with_param);
}

def tct::meta_type() {
	return ptd::var({
			tct_rec => ptd::hash(@tct::meta_type),
			tct_own_rec => ptd::hash(@tct::meta_type),
			tct_hash => @tct::meta_type,
			tct_own_hash => @tct::meta_type,
			tct_arr => @tct::meta_type,
			tct_own_arr => @tct::meta_type,
			tct_var => ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})),
			tct_own_var => ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})),
			tct_ref => ptd::string(),
			tct_sim => ptd::none(),
			tct_int => ptd::none(),
			tct_string => ptd::none(),
			tct_bool => ptd::none(),
			tct_empty => ptd::none(),
			tct_void => ptd::none(),
			tct_im => ptd::none()
		});
}

def tct::own_type_to_ptd(type : @tct::meta_type, defined_types : ptd::hash(@tct::meta_type)) : @tct::meta_type {
	match (type) case :tct_rec (var p) {
		return :tct_rec(p);
	} case :tct_own_rec (var p) {
		var h : ptd::hash(@tct::meta_type) = {};
		forh var name, var t (p) {
			hash::set_value(ref h, name, tct::own_type_to_ptd(t, defined_types));
		}
		return :tct_rec(h);
	} case :tct_hash (var p) {
		return :tct_hash(p);
	} case :tct_own_hash (var p) {
		return :tct_hash(tct::own_type_to_ptd(p, defined_types));
	} case :tct_arr (var p) {
		return :tct_arr(p);
	} case :tct_own_arr (var p) {
		return :tct_arr(tct::own_type_to_ptd(p, defined_types));
	} case :tct_var (var p) {
		return :tct_var(p);
	} case :tct_own_var (var p) {
		var h : ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})) = {};
		forh var name, var t (p) {
			match (t) case :no_param {
				hash::set_value(ref h, name, :no_param);
			} case :with_param(var param) {
				hash::set_value(ref h, name, :with_param(tct::own_type_to_ptd(param, defined_types)));
			}
		}
		return :tct_var(h);
	} case :tct_ref (var p) {
		return :tct_ref(p) unless hash::has_key(defined_types, p);
		return tct::own_type_to_ptd(defined_types{p}, defined_types);
	} case :tct_sim {
		return :tct_sim;
	} case :tct_int {
		return :tct_int;
	} case :tct_string {
		return :tct_string;
	} case :tct_bool {
		return :tct_bool;
	} case :tct_empty {
		return :tct_empty;
	} case :tct_void {
		return :tct_void;
	} case :tct_im {
		return :tct_im;
	}
}

def get_fun_name(fun : ptd::string()) : ptd::string() {
	return (string::split('::', fun))[1];
}

def tct::is_own_type(type : @tct::meta_type, defined_types : ptd::hash(@tct::meta_type)) : @boolean_t::type {
	match (type) case :tct_rec (var p) {
		return false;
	} case :tct_own_rec (var p) {
		return true;
	} case :tct_hash (var p) {
		return false;
	} case :tct_own_hash (var p) {
		return true;
	} case :tct_arr (var p) {
		return false;
	} case :tct_own_arr (var p) {
		return true;
	} case :tct_var (var p) {
		return false;
	} case :tct_own_var (var p) {
		return true;
	} case :tct_ref (var p) {
		if (hash::has_key(defined_types, p)) {
			return tct::is_own_type(defined_types{p}, defined_types);
		} elsif (hash::has_key(defined_types, get_fun_name(p))) {
			return tct::is_own_type(defined_types{get_fun_name(p)}, defined_types);
		}
		return false; #assume somebody else handles the problem
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
