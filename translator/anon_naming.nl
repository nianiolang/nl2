###
# (c) Atinea Sp. z o.o.
###

use ptd;
use tct;
use string;

def anon_naming::get_anon_name_loop(type : @tct::meta_type) : ptd::string() {
	match (type) case :tct_im {
		return '0im';
	} case :tct_arr(var arr_type) {
		return '0im';
	} case :tct_own_arr(var arr_type) {
		return '0ownarr' . anon_naming::get_anon_name(arr_type);
	} case :tct_hash(var hash_type) {
		return '0im';
	} case :tct_own_hash(var hash_type) {
		return '0ownhash' . anon_naming::get_anon_name(hash_type);
	} case :tct_rec(var records) {
		return '0im';
	} case :tct_own_rec(var records) {
		var ret = '0RB';
		forh var r_name, var r_type (records) {
			ret .= anon_naming::get_anon_name(r_type) . '0' . r_name . '0';
		}
		ret .= 'RE';
		return ret;
	} case :tct_ref(var ref_name) {
		return '0ref' . anon_naming::func_ref_to_struct_name(ref_name);
	} case :tct_void {
		return '0void';
	} case :tct_int {
		return '0int';
	} case :tct_string {
		return '0im';
	} case :tct_bool {
		return '0bool';
	} case :tct_var(var vars) {
		return '0im';
	} case :tct_own_var(var vars) {
		var ret = '0VB';
		forh var v_name, var v_type (vars) {
			match (v_type) case :with_param(var param_type) {
				ret .= anon_naming::get_anon_name(param_type) . '0' . v_name . '0';
			} case :no_param {
				ret .= 'none0' . v_name . '0';
			}
		}
		ret .= 'VE';
		return ret;
	} case :tct_empty {
		return '0im';
	}
}

def anon_naming::get_anon_name(type : @tct::meta_type) : ptd::string() {
	return 'anon_type0' . anon_naming::get_anon_name_loop(type);
}

def anon_naming::func_ref_to_struct_name(f : ptd::string()) : ptd::string() {
	if(f eq 'boolean_t::type') {
		return 'bool';
	}
	return string::replace(f, '::', '0') . '0type';
}
