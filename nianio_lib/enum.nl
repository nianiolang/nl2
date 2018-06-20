###
# (c) Atinea Sp. z o.o.
###


use ov;
use ptd;

def enum::eq(x, y) : ptd::bool() {
	die if ov::has_value(x) || ov::has_value(y);
	return ov::get_element(x) eq ov::get_element(y);
}

