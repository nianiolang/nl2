###
# (c) Atinea Sp. z o.o.
###


use c_std_lib;
use array;
use ptd;

def string::lf() : ptd::string() {
	return string::chr(10);
}

def string::tab() : ptd::string() {
	return string::chr(9);
}

def string::r() : ptd::string() {
	return string::chr(13);
}

def string::f() : ptd::string() {
	return string::chr(12);
}

def string::non_breaking_space() : ptd::arr(ptd::string()) {
	return [string::chr(194), string::chr(160)];
}

def string::char_times(char, time) : ptd::string() {
	var ret = '';
	ret .= char rep var i (time);
	return ret;
}

def string::split(pattern, string) : ptd::arr(ptd::string()) {
	var ret = [];
	var beg = 0;
	var lenPat = string::length(pattern);
	var len = string::length(string);
	loop {
		var index = beg + 1;
		index = string::index(string, pattern, beg) unless lenPat == 0;
		break if index > len;
		if (index < 0) {
			array::push(ref ret, string::substr(string, beg, len - beg));
			break;
		} else {
			array::push(ref ret, string::substr(string, beg, index - beg));
			beg = index + lenPat;
		}
	}
	return ret;
}

def string::split_limit(pattern, string, limit) : ptd::arr(ptd::string()) {
	var arr = string::split(pattern, string);
	if (array::len(arr) > limit) {
		var last = array::join(pattern, array::subarray(arr, limit - 1, array::len(arr) - limit + 1));
		var ret = array::subarray(arr, 0, limit - 1);
		array::push(ref ret, last);
		return ret;
	} else {
		return arr;
	}
}

def string::to_array(string) : ptd::arr(ptd::string()) {
	return string::split('', string);
}

def string::length(s) : ptd::int() {
	return c_std_lib::string_length(s);
}

def string::get_char_code(string, position) : ptd::int() {
	return c_std_lib::string_get_char_code(string, position);
}

def string::substr(s, offset, length) : ptd::string() {
	return c_std_lib::string_sub(s, offset, length) . '';
}

def string::substr2(s, offset) : ptd::string() {
	return c_std_lib::string_sub(s, offset, string::length(s) - offset) . '';
}

def string::lc(string) : ptd::string() {
	var arr = string::to_array(string);
	rep var i (array::len(arr)) {
		var n = string::ord(arr[i]);
		if (n >= 65 && n <= 90) {
			n += 32;
			arr[i] = string::chr(n);
		}
	}
	return array::join('', arr);
}

def string::uc(string) : ptd::string() {
	var arr = string::to_array(string);
	rep var i (array::len(arr)) {
		var n = string::ord(arr[i]);
		if (n >= 97 && n <= 122) {
			n -= 32;
			arr[i] = string::chr(n);
		}
	}
	return array::join('', arr);
}

def string::index2(string, search) : ptd::int() {
	return c_std_lib::string_index(string, search, 0);
}

def string::index(string, search, position) : ptd::int() {
	return c_std_lib::string_index(string, search, position);
}

def string::contain_lc(string, search) : ptd::bool() {
	string = string::lc(string);
	return string::index2(string, search) >= 0;
}

def string::replace(string, old, new) : ptd::string() {
	return c_std_lib::string_replace(string, old, new);
}

def string::replace_arr(string, search_arr, replace_arr) : ptd::string() {
	var len = array::len(search_arr);
	die unless len == array::len(replace_arr);
	for(var i = 0; i < len; ++i) {
		string = string::replace(string, search_arr[i], replace_arr[i]);
	}
	return ptd::ensure(ptd::string(), string);
}

def string::ord(char) : ptd::int() {
	return c_std_lib::string_ord(char);
}

def string::is_digit(char) : ptd::bool() {
	var o = string::ord(char);
	return o >= 48 && o <= 57;
}

def string::is_hex_digit(char : ptd::string()) : ptd::bool() {
	var code = string::ord(char);
	return (code >= 48 && code <= 57) || (code >= 65 && code <= 70) || (code >= 97 && code <= 102);
}

def string::is_letter(char) : ptd::bool() {
	var o = string::ord(char);
	return (o >= 97 && o <= 122) || (o >= 65 && o <= 90);
}

def string::encode_utf16(str) {
	return c_std_lib::string_encode_utf16(str);
}

def string::decode_utf16(str, le_en) {
	return c_std_lib::string_decode_utf16(str, le_en);
}

def string::is_empty(string) : ptd::bool() {
	return string::length(string) == 0;
}

def string::chr(character) : ptd::string() {
	return c_std_lib::string_chr(character);
}

def string::lt(left, right) : ptd::bool() {
	return string::compare(left, right) < 0;
}

def string::gt(left, right) : ptd::bool() {
	return string::compare(left, right) > 0;
}

def string::compare(string_1, string_2) : ptd::int() {
	return c_std_lib::string_compare(string_1, string_2);
}

def string::le(string_1, string_2) : ptd::bool() {
	return string::compare(string_1, string_2) <= 0;
}

def string::ge(string_1, string_2) : ptd::bool() {
	return string::compare(string_1, string_2) >= 0;
}
