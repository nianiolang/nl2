###
# (c) Atinea Sp. z o.o.
###

use string;
use ptd;
use array;
use float;
use c_rt_lib;
use c_std_lib;

def string_utils::is_int(char) {
	return (string::ord(char) > 47 && string::ord(char) < 58);
}

def string_utils::is_whitespace(char) {
	return (char eq ' ' || char eq string::lf() || char eq string::tab() || char eq string::r() || char eq string::f());
}

def string_utils::is_alpha(char) {
	var int = string::ord(char);
	return ((int > 64 && int < 91) || (int > 96 && int < 123));
}

def string_utils::get_integer(str) : ptd::var({ok => ptd::int(), err => ptd::string()}) {
	return :err('') if str eq '' || str eq '-';
	var split_res = string::split('', str);
	var ret = 0;
	var sign = 1;
	if (split_res[0] eq '-') {
		split_res = array::subarray(split_res, 1, array::len(split_res) - 1);
		sign = -1;
	}
	fora var char (split_res) {
		return :err('') unless string_utils::is_int(char);
		ret *= 10;
		ret += string::ord(char) - string::ord('0');
	}
	return :ok(sign * ret);
}

def string_utils::is_integer(obj : ptd::string()) : ptd::bool() {
	obj = obj . '';
	return false unless string_utils::is_integer_possibly_leading_zeros(obj);
	return true if obj eq '0';
	var i = 0;
	++i if (string::substr(obj, i, 1) eq '-');
	return false if string::substr(obj, i, 1) eq '0';
	return true;
}

def string_utils::is_integer_possibly_leading_zeros(obj : ptd::string()) : ptd::bool() {
	var string = obj . '';
	var len = string::length(string);
	var i = 0;
	++i if (string::substr(string, i, 1) eq '-');
	return false if i == len;
	for(; i < len; ++i) {
		return false unless string::is_digit(string::substr(string, i, 1));
	}
	return true;
}

def string_utils::is_float(obj : ptd::string()) : ptd::bool() {
	var string = obj . '';
	var len = string::length(string);
	return false if len < 3;
	var i = 0;
	++i if (string::substr(string, i, 1) eq '-');
	for(i = i; i < len; ++i) {
		break unless string::is_digit(string::substr(string, i, 1));
	}
	return false if i < 1 || i + 2 > len;
	return false unless string::substr(string, i, 1) eq '.';
	for(++i; i < len; ++i) {
		return false unless string::is_digit(string::substr(string, i, 1));
	}
	return true;
}

def string_utils::is_number(string) : ptd::bool() {
	var str : ptd::string() = string . '';
	return string_utils::is_integer(str) || string_utils::is_float(str);
}

def string_utils::get_number(str) : ptd::var({ok => ptd::string(), err => ptd::none()}) {
	return :err if str eq '' || str eq '-';
	var split_res = string::split('', str);
	var ret = '';
	if (split_res[0] eq '-') {
		split_res = array::subarray(split_res, 1, array::len(split_res) - 1);
		return :err unless string_utils::is_int(split_res[0]);
		ret = '-';
	}
	var comma = false;
	fora var char (split_res) {
		if (!string_utils::is_int(char)) {
			if (char eq '.' && !comma) {
				comma = true;
			} else {
				return :err;
			}
		}
		ret .= char;
	}
	return :err if ret eq '.';
	return :ok(ret);
}

def eat_ws(str, ref pos) {
	++pos while (pos < array::len(str) && string_utils::is_whitespace(str[pos]));
	return pos == array::len(str);
}

def get_number(str, ref pos) : ptd::var({ok => ptd::string(), err => ptd::string()}) {
	var num = '';
	if (str[pos] eq '-') {
		++pos;
		num = '-';
	}
	var comma = false;
	while (pos < array::len(str)) {
		var char = str[pos];
		if (!string_utils::is_int(char)) {
			break if (char ne '.' || comma);
			comma = true;
		}
		num .= char;
		++pos;
	}
	return :err('') if (num eq '' || num eq '-');
	return :ok(num);
}

def cal_expr(str, ref pos, prio) : ptd::var({ok => ptd::string(), err => ptd::string()}) {
	return :err('') if eat_ws(str, ref pos);
	var ret : ptd::string();
	if (str[pos] eq '(') {
		++pos;
		try ret = cal_expr(str, ref pos, 0);
		return :err('') if eat_ws(str, ref pos);
		return :err('') unless str[pos] eq ')';
		++pos;
	} else {
		try ret = get_number(str, ref pos);
	}
	loop {
		return :ok(ret) if eat_ws(str, ref pos);
		var char = str[pos];
		if (char eq '*') {
			return :ok(ret) if prio >= 5;
			++pos;
			try var tmp = cal_expr(str, ref pos, 5);
			ret = float::mul(ret, tmp);
		} elsif (char eq '/') {
			return :ok(ret) if prio >= 5;
			++pos;
			try var tmp = cal_expr(str, ref pos, 5);
			ret = float::div(ret, tmp);
		} elsif (char eq '%') {
			return :ok(ret) if prio >= 5;
			++pos;
			try var tmp = cal_expr(str, ref pos, 5);
			ret = float::mod(ret, tmp);
		} elsif (char eq '+') {
			return :ok(ret) if prio >= 2;
			++pos;
			try var tmp = cal_expr(str, ref pos, 2);
			ret = float::add(ret, tmp);
		} elsif (char eq '-') {
			return :ok(ret) if prio >= 2;
			++pos;
			try var tmp = cal_expr(str, ref pos, 2);
			ret = float::sub(ret, tmp);
		} elsif (char eq ')') {
			return :err('') if prio < 0;
			return :ok(ret);
		} else {
			return :err('');
		}
	}
	die;
}

def string_utils::eval_number(string : ptd::string()) : ptd::string() {
	return string if string eq '';
	var split_res = string::split('', string);
	return string if split_res[0] ne '=';
	split_res = array::subarray(split_res, 1, array::len(split_res) - 1);
	var ret = '';
	fora var char (split_res) {
		return string
			unless 
			string_utils::is_int(char) || char eq '-' || char eq '.' || char eq '+' || char eq '/' || char eq '(' || 
			char eq ')' || char eq '*';
		ret .= char;
	}
	var str = string::split('', ret);
	var pos = 0;
	match (cal_expr(str, ref pos, -1)) case :err(var err) {
		return '';
	} case :ok(var val) {
		return val;
	}
}

def string_utils::get_date(string, char) : ptd::var({
		ok => ptd::rec({first => ptd::int(), second => ptd::int(), third => ptd::int()}),
		err => ptd::string()
	}) {
	var split_result = string::split(char, string);
	return :err('')
		unless 
		array::len(split_result) == 3 && 
			string_utils::is_integer_possibly_leading_zeros(split_result[0]) && 
			string_utils::is_integer_possibly_leading_zeros(split_result[1]) && 
			string_utils::is_integer_possibly_leading_zeros(split_result[2]);
	var first = ptd::string_to_int(split_result[0]);
	var second = ptd::string_to_int(split_result[1]);
	var third = ptd::string_to_int(split_result[2]);
	return :ok({first => first, second => second, third => third});
}

def string_utils::change(str, from, to) : ptd::string() {
	var ret = '';
	fora var char (string::split('', str)) {
		ret .= char eq from ? to : char;
	}
	return ret;
}

def string_utils::erase_tail_whitespace(str) : ptd::string() {
	return '' if str eq '';
	var str_end_index = string::length(str) - 1;
	while (str_end_index >= 0 && string_utils::is_whitespace(string::substr(str, str_end_index, 1))) {
		--str_end_index;
	}
	return string::substr(str, 0, str_end_index + 1);
}

def string_utils::erase_tail_zeroes(str : ptd::string()) : ptd::string() {
	return str if str eq '';
	var chars = string::to_array(str);
	var str_end_index = array::len(chars) - 1;
	while (str_end_index >= 0 && chars[str_end_index] eq '0') {
		--str_end_index;
	}
	return string::substr(str, 0, str_end_index + 1);
}

def string_utils::erase_leading_zeroes(str : ptd::string()) : ptd::string() {
	return str if str eq '';
	var chars = string::to_array(str);
	var str_start_index = 0;
	while (str_start_index < array::len(chars) && chars[str_start_index] eq '0') {
		++str_start_index;
	}
	return str_start_index != array::len(chars)
		? string::substr2(str, str_start_index)
		: '0';
}

def string_utils::char2hex(char) {
	var tab = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'];
	return tab[char / 16] . tab[char % 16];
}

def string_utils::hex2char(a, b) {
	var ret = 0;
	if (a >= 48 && a <= 57) {
		ret += a;
		ret -= 48;
	} elsif (a >= 65 && a <= 70) {
		ret += a;
		ret -= 55;
	} elsif (a >= 97 && a <= 102) {
		ret += a;
		ret -= 87;
	} else {
		die;
	}
	ret *= 16;
	if (b >= 48 && b <= 57) {
		ret += b;
		ret -= 48;
	} elsif (b >= 65 && b <= 70) {
		ret += b;
		ret -= 55;
	} elsif (b >= 97 && b <= 102) {
		ret += b;
		ret -= 87;
	} else {
		die;
	}
	return string::chr(ret);
}

def string_utils::escape2hex31(str: ptd::string()) : ptd::string() {
	return ptd::ensure(ptd::string(), c_std_lib::string_escape2hex31(str));
}

def string_utils::float2str(float : ptd::string(), prec : ptd::int()) : ptd::string() {
	var pot = 1;
	rep var i (prec) {
		pot *= 10;
	}
	float = float::mul(float, ptd::ensure(ptd::string(), ptd::int_to_string(pot)));
	float = float::round(float);
	var sign = '';
	if (string::substr(float, 0, 1) eq '-') {
		sign = '-';
		float = string::substr2(float, 1);
	}
	var str = string_utils::int2str_leading_digits(float, prec + 1);
	var len = string::length(str);
	return sign . str if prec == 0;
	return sign . string::substr(str, 0, len - prec) . '.' . string::substr(str, len - prec, prec);
}

def string_utils::int2str_leading_digits(int, digits) {
	var str = '000000000000000000000000' . int;
	return string::substr2(str, string::length(str) - max(digits, string::length(int)));
}

def max(a, b) {
	return a > b ? a : b;
}

def string_utils::int2str(int, len) : ptd::string() {
	var str = '000000000000000000000000' . int;
	return string::substr2(str, string::length(str) - len);
}

def string_utils::starts_with(el, prefix) {
	return string::length(el) >= string::length(prefix) && string::substr(el, 0, string::length(prefix)) eq prefix;
}

def string_utils::normalize_newlines(str : ptd::string()) : ptd::string() {
	var res = string::replace_arr(str,
			[string::r() . string::lf(), string::r() , string::lf()],
			[string::lf()              , string::lf(), string::r() . string::lf()]
		);
	return ptd::ensure(ptd::string(), res);
}

def string_utils::float2str_fixed(num : ptd::string()) : ptd::string() {
	return ptd::ensure(ptd::string(), c_rt_lib::float_fixed_str(num));
}
