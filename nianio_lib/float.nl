###
# (c) Atinea Sp. z o.o.
###


use ptd;
use c_rt_lib;

def float::add(lhs, rhs) : ptd::string() {
	return ptd::ensure(ptd::string(), c_rt_lib::str_float_add(lhs, rhs));
}

def float::mul(lhs, rhs) : ptd::string() {
	return ptd::ensure(ptd::string(), c_rt_lib::str_float_mul(lhs, rhs));
}

def float::sub(lhs, rhs) : ptd::string() {
	return ptd::ensure(ptd::string(), c_rt_lib::str_float_sub(lhs, rhs));
}

def float::div(lhs, rhs) : ptd::string() {
	return ptd::ensure(ptd::string(), c_rt_lib::str_float_div(lhs, rhs));
}

def float::mod(lhs, rhs) : ptd::string() {
	return ptd::ensure(ptd::string(), c_rt_lib::str_float_mod(lhs, rhs));
}

def float::round(float) : ptd::string() {
	return ptd::ensure(ptd::string(), c_rt_lib::float_round(float));
}
