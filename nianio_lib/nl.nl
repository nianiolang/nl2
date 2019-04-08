###
# (c) Atinea Sp. z o.o.
###

use c_std_lib;
use ptd;
use ov;

def nl::is_array(variable) : ptd::bool() {
	return c_std_lib::is_array(variable) ? true : false;
}

def nl::is_hash(variable) : ptd::bool() {
	return c_std_lib::is_hash(variable) ? true : false;
}

def nl::is_int(variable) : ptd::bool() {
	return c_std_lib::is_int(variable) ? true : false;
}

def nl::is_string(variable) : ptd::bool() {
	return c_std_lib::is_string(variable) ? true : false;
}

def nl::is_printable(variable) : ptd::bool() {
	return c_std_lib::is_printable(variable) ? true : false;
}

def nl::is_variant(variable) : ptd::bool() {
	return c_std_lib::is_variant(variable) ? true : false;
}

def nl::is_bool(variable) : ptd::bool() {
	return c_std_lib::is_variant(variable) &&
		(ov::get_element(variable) eq 'TRUE' || ov::get_element(variable) eq 'FALSE');
}

def nl::print(str) {
	c_std_lib::print(str);
}

def nl::debug_die(arg) {
	arg;
	die;
}
