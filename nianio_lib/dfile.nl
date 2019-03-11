###
# (c) Atinea Sp. z o.o.
###


use ov;
use c_std_lib;
use string;
use hash;
use array;
use nl;
use ptd;
use string_utils;

def dfile::deep_eq(left, right) {
	if (nl::is_hash(left)) {
		return false unless nl::is_hash(right);
		return false unless hash::size(left) == hash::size(right);
		forh var key, var value (left) {
			return false unless hash::has_key(right, key);
			return false unless dfile::deep_eq(value, right{key});
		}
	} elsif (nl::is_array(left)) {
		return false unless nl::is_array(right);
		return false unless array::len(left) == array::len(right);
		rep var i (array::len(left)) {
			return false unless dfile::deep_eq(left[i], right[i]);
		}
	} elsif (nl::is_variant(left)) {
		return false unless nl::is_variant(right);
		return false unless (ov::has_value(left) && ov::has_value(right)) ||
			(!ov::has_value(left) && !ov::has_value(right));
		return false unless ov::get_element(left) eq ov::get_element(right);
		if (ov::has_value(left)) {
			return false unless dfile::deep_eq(ov::get_value(left), ov::get_value(right));
		}
	} elsif (nl::is_string(left)) {
		return false unless nl::is_string(right);
		return left eq right;
	} elsif (nl::is_int(left)) {
		return false unless nl::is_int(right);
		return left == right;
	} else {
		die;
	}
	return true;
}

def dfile::rs(str, is_key) {
	var ret = {str => '', objects => {}};
	if (is_key != 0 && is_simple_string(str)) {
		sp(ref ret, str);
	} else {
		sprintstr(ref ret, str);
	}
	return ret->str;
}

def dfile::ssave(obj) : ptd::string() {
	var state = {str => '', objects => {}};
	sprint(ref state, obj, 0, false);
	return state->str;
}

def dfile::debug(obj) : ptd::string() {
	var state = {str => '', objects => {}};
	sprint(ref state, obj, 0, true);
	return state->str;
}

def dfile::ssave_net_format(obj) : ptd::string() {
	var state = {str => '', objects => {}};
	print_net_format(ref state, obj);
	return state->str;
}

def eat_ws(ref state : @dfile::state_t) {
	loop {
		return if (state->pos == state->len);
		var char = string::ord(get_char(ref state));
		if (char == 9 || char == 10 || char == 13 || char == 32) {
			state->pos++;
		} else {
			return;
		}
	}
}

def get_char(ref state : @dfile::state_t) : ptd::string() {
	return c_std_lib::fast_substr(state->str, state->pos, 1);
}

def is_ov(ref state : @dfile::state_t) : ptd::bool() {
	return c_std_lib::fast_substr(state->str, state->pos, 7) eq 'ov::mk(';
}

def eat_non_ws(ref state : @dfile::state_t, ref error : ptd::bool()) : ptd::string() {
	var ret = '';
	var l = state->len;
	if (state->pos >= l) {
		error = true;
		return 'pos ' . ptd::int_to_string(state->pos) . ': expected scalar';
	}
	loop {
		var char = get_char(ref state);
		break unless string::is_letter(char) || string::is_digit(char) || char eq '_';
		++state->pos;
		ret .= char;
		break if (state->pos >= l);
	}
	if (ret eq '') {
		error = true;
		return 'pos ' . ptd::int_to_string(state->pos) . ': expected scalar';
	}
	return ret;
}

def parse_scalar(ref state : @dfile::state_t, ref error : ptd::bool(), type : @ptd::meta_type) {
	eat_ws(ref state);
	var ret;
	if (get_char(ref state) eq '"') {
		++state->pos;
		ret = finish_quoted_scalar(ref state, ref error);
	} else {
		ret = eat_non_ws(ref state, ref error);
	}
	if (type is :ptd_string || type is :ptd_im) {
		return ret;
	} elsif (type is :ptd_int) {
		match (string_utils::get_integer(ret)) case :ok(var n) {
			return n;
		} case :err(var err) {
			error = true;
			return 'incorrect number';
		}
	} else {
		error = true;
		return 'expected ' . dfile::ssave(type) . ', got scalar';
	}
}


def finish_quoted_scalar(ref state : @dfile::state_t, ref error : ptd::bool()) : ptd::string() {
	var str = '';
	loop {
		if (state->pos >= state->len) {
			error = true;
			return 'pos ' . ptd::int_to_string(state->pos) . ': expected "';
		}
		var char = get_char(ref state);
		++state->pos;
		if (char eq '"') {
			break;
		} elsif (char eq '\') {
			var escaped_char = finish_escape_seq(ref state, ref error);
			return escaped_char if error;
			str .= escaped_char;
		} else {
			str .= char;
		}
	}
	return str;
}

def finish_escape_seq(ref state : @dfile::state_t, ref error : ptd::bool()) : ptd::string() {
	if (state->pos >= state->len) {
		error = true;
		return 'pos ' . ptd::int_to_string(state->pos) . ': expected escape sequence';
	}
	var char = get_char(ref state);
	++state->pos;
	if (char eq 'n') {
		return string::lf();
	} elsif (char eq 'r') {
		return string::r();
	} elsif (char eq 't') {
		return string::tab();
	} elsif (char eq '\' || char eq '"' || char eq '@' || char eq '$') {
		return char;
	} elsif (char eq 'x') {
		var hex_digit1 = eat_hex_digit(ref state, ref error);
		return hex_digit1 if error;
		var hex_digit2 = eat_hex_digit(ref state, ref error);
		return hex_digit2 if error;
		return ptd::ensure(ptd::string(), string_utils::hex2char(string::ord(hex_digit1), string::ord(hex_digit2)));
	} else {
		error = true;
		return 'pos ' . ptd::int_to_string(state->pos - 1) . ': expected escape sequence';
	}
}

def eat_hex_digit(ref state : @dfile::state_t, ref error : ptd::bool()) : ptd::string() {
	var char = get_char(ref state);
	if (!string::is_hex_digit(char)) {
		error = true;
		return 'pos ' . ptd::int_to_string(state->pos) . ': expected hexadecimal digit';
	}
	++state->pos;
	return char;
}

def match_s(ref state : @dfile::state_t, pattern : ptd::string()) : ptd::bool() {
	var len = string::length(pattern);
	if (c_std_lib::fast_substr(state->str, state->pos, len) eq pattern) {
		state->pos += len;
		return true;
	} else {
		return false;
	}
}

def dfile::state_t() {
	return ptd::rec({str => ptd::arr(ptd::string()), len => ptd::int(), pos => ptd::int()});
}

def parse(ref state : @dfile::state_t, ref error : ptd::bool(), type : @ptd::meta_type) : ptd::ptd_im() {
	eat_ws(ref state);
	var char = get_char(ref state);
	while (type is :ref) {
		var args = [];
		type = ptd::ensure(@ptd::meta_type, c_std_lib::exec(type, ref args));
	}
	if (char eq '{') {
		state->pos += 1;
		var hash = {};
		eat_ws(ref state);
		while (!match_s(ref state, '}')) {
			var key = parse_scalar(ref state, ref error, ptd::string());
			return key if error;
			eat_ws(ref state);
			if (!match_s(ref state, '=>')) {
				error = true;
				return 'pos ' . ptd::int_to_string(state->pos) . ': expected =>';
			}
			var field_type;
			if (type is :ptd_rec) {
				if (hash::has_key(type as :ptd_rec, key)) {
					field_type = (type as :ptd_rec){key};
				} else {
					error = true;
					return 'unexpected hash key ' . key;
				}
			} elsif (type is :ptd_hash) {
				field_type = type as :ptd_hash;
			} elsif (type is :ptd_im) {
				field_type = :ptd_im;
			} else {
				error = true;
				return 'expected ' . dfile::ssave(type) . ', got '  . dfile::ssave(:ptd_hash);
			}
			var value = parse(ref state, ref error, field_type);
			return value if error;
			hash::set_value(ref hash, key, value);
			eat_ws(ref state);
			if (!match_s(ref state, ',')) {
				error = true;
				return 'pos ' . ptd::int_to_string(state->pos) . ': expected ,';
			}
			eat_ws(ref state);
		}
		eat_ws(ref state);
		return hash;
	} elsif (char eq '[') {
		state->pos += 1;
		var arr = [];
		eat_ws(ref state);
		while (!match_s(ref state, ']')) {
			var field_type;
			if (type is :ptd_arr) {
				field_type = type as :ptd_arr;
			} elsif (type is :ptd_im) {
				field_type = :ptd_im;
			} else {
				error = true;
				return 'expected ' . dfile::ssave(type) . ', got '  . dfile::ssave(:ptd_hash);
			}
			var value = parse(ref state, ref error, field_type);
			return value if error;
			array::push(ref arr, value);
			eat_ws(ref state);
			if (!match_s(ref state, ',')) {
				error = true;
				return 'pos ' . ptd::int_to_string(state->pos) . ': expected ,';
			}
			eat_ws(ref state);
		}
		return arr;
	} elsif (char eq 'o' && is_ov(ref state)) {
		state->pos += 7;
		var key = parse_scalar(ref state, ref error, ptd::string());
		return key if error;
		eat_ws(ref state);
		if (match_s(ref state, ',')) {
			var inner_type;
			if (type is :ptd_var) {
				if (hash::has_key(type as :ptd_var, key)) {
					match ((type as :ptd_var){key}) case :with_param(var param_type) {
						inner_type = param_type;
					} case :no_param {
						error = true;
						return 'unexpected variant value';
					}
				} else {
					error = true;
					return 'unexpected variant label ' . key;
				}
			} elsif (type is :ptd_im) {
				inner_type = :ptd_im;
			} else {
				error = true;
				return 'expected ' . dfile::ssave(type) . ', got '  . dfile::ssave(:ptd_hash);
			}
			var val = parse(ref state, ref error, inner_type);
			return val if error;
			eat_ws(ref state);
			if (!match_s(ref state, ')')) {
				error = true;
				return 'pos ' . ptd::int_to_string(state->pos) . ': expected )';
			}
			return ov::mk_val(key, val);
		}
		eat_ws(ref state);
		if (!match_s(ref state, ')')) {
			error = true;
			return 'pos ' . ptd::int_to_string(state->pos) . ': expected )';
		}
		eat_ws(ref state);
		return ov::mk(key);
	} else {
		return parse_scalar(ref state, ref error, type);
	}
}

def dfile::sload(str_im) : ptd::ptd_im() {
	ensure var result = dfile::try_sload(str_im);
	return result;
}

def dfile::sload_with_type(type : @ptd::meta_type, str_im) : ptd::ptd_im() {
	ensure var result = dfile::try_sload_with_type(type, str_im);
	return result;
}

def dfile::sload_with_type_only_dynamic(type : @ptd::meta_type, str_im) : ptd::ptd_im() {
	ensure var result = dfile::try_sload_with_type(type, str_im);
	return result;
}

def dfile::try_sload(str_im) : ptd::var({ok => ptd::ptd_im(), err => ptd::string()}) {
	return dfile::try_sload_with_type(ptd::ptd_im(), str_im);
}

def dfile::try_sload_with_type(type : @ptd::meta_type, str_im) : ptd::var({ok => ptd::ptd_im(), err => ptd::string()}) {
	var str = ptd::ensure(ptd::string(), str_im);
	var state = {str => [str], pos => 0, len => string::length(str)};
	var error = false;
	eat_ws(ref state);
	var val = parse(ref state, ref error, type);
	eat_ws(ref state);
	if (!error && state->pos != state->len) {
		error = true;
		val = 'pos ' . ptd::int_to_string(state->pos) . ': expected eof';
	}
	if (error) {
		val = ptd::ensure(ptd::string(), val);
		return :err(val);
	} else {
		return :ok(val);
	}
}

def dfile::state_out() {
	return ptd::rec({str => ptd::string(), objects => ptd::hash(ptd::bool())});
}

def sp(ref state : @dfile::state_out, str) : ptd::void() {
	state->str .= str;
}

def sprintstr(ref state : @dfile::state_out, str) : ptd::void() {
	str .= '';
	str = string::replace(str, '\', '\\');
	str = string::replace(str, '"', '\"');
	sp(ref state, '"' . str . '"');
}

def is_simple_string(str) : ptd::bool() {
	var len = string::length(str);
	return false if len == 0;
	return false unless string::is_letter(string::substr(str, 0, 1)) || string::substr(str, 0, 1) eq '_';
	rep var i (len) {
		var c = string::substr(str, i, 1);
		return false unless string::is_letter(c) || string::is_digit(c) || c eq '_';
	}
	return true;
}

def sprint_hash_key(ref state : @dfile::state_out, str) : ptd::void() {
	if (is_simple_string(str)) {
		sp(ref state, str);
	} else {
		sprintstr(ref state, str);
	}
}

def get_ind(ind : ptd::int()) : ptd::string() {
	return string::char_times(string::tab(), ind);
}

def sprint_hash(ref state : @dfile::state_out, obj : ptd::ptd_im(), indent : ptd::int(), is_debug : ptd::bool()) :
		ptd::void() {
	sp(ref state, '{' . string::lf());
	var keys = hash::keys(obj);
	array::sort(ref keys);
	fora var key (keys) {
		var val = hash::get_value(obj, key);
		sp(ref state, get_ind(indent + 1));
		sprint_hash_key(ref state, key);
		sp(ref state, ' => ');
		sprint(ref state, val, indent + 1, is_debug);
		sp(ref state, ',' . string::lf());
	}
	sp(ref state, get_ind(indent) . '}');
}

def handle_debug(ref state : @dfile::state_out, obj) : ptd::bool() {
	if ((nl::is_hash(obj) || nl::is_array(obj)) && hash::has_key(state->objects, obj)) {
		sp(ref state, obj);
		return true;
	} else {
		hash::set_value(ref state->objects, obj, true);
		return false;
	}
}

def sprint(ref state : @dfile::state_out, obj : ptd::ptd_im(), indent : ptd::int(), is_debug : ptd::bool()) :
		ptd::void() {
	return if is_debug && handle_debug(ref state, obj);
	if (nl::is_sim(obj)) {
		sprintstr(ref state, obj);
	} elsif (nl::is_array(obj)) {
		sp(ref state, '[' . string::lf());
		fora var el (obj) {
			sp(ref state, get_ind(indent + 1));
			sprint(ref state, el, indent + 1, is_debug);
			sp(ref state, ',' . string::lf());
		}
		sp(ref state, get_ind(indent) . ']');
	} elsif (nl::is_hash(obj)) {
		sprint_hash(ref state, obj, indent, is_debug);
	} elsif (nl::is_variant(obj)) {
		sp(ref state, 'ov::mk(');
		sprintstr(ref state, ov::get_element(obj));
		if (ov::has_value(obj)) {
			sp(ref state, ', ');
			sprint(ref state, ov::get_value(obj), indent, is_debug);
		}
		sp(ref state, ')');
	} else {
		die;
	}
}

def print_net_formatstr(ref state : @dfile::state_out, str) : ptd::void() {
	str .= '';
	str = string::replace(str, '\', '\\');
	str = string::replace(str, string::lf(), '\n');
	str = string::replace(str, string::r(), '\r');
	str = string::replace(str, '"', '\"');
	str = string_utils::escape2hex31(str);
	sp(ref state, '"' . str . '"');
}

def print_net_format(ref state : @dfile::state_out, obj : ptd::ptd_im()) : ptd::void() {
	if (nl::is_sim(obj)) {
		print_net_formatstr(ref state, obj);
	} elsif (nl::is_array(obj)) {
		sp(ref state, '[');
		fora var el (obj) {
			print_net_format(ref state, el);
			sp(ref state, ',');
		}
		sp(ref state, ']');
	} elsif (nl::is_hash(obj)) {
		sp(ref state, '{');
		fora var key (hash::keys(obj)) {
			var val = hash::get_value(obj, key);
			if (is_simple_string(key . '')) {
				sp(ref state, key);
			} else {
				print_net_formatstr(ref state, key);
			}
			sp(ref state, '=>');
			print_net_format(ref state, val);
			sp(ref state, ',');
		}
		sp(ref state, '}');
	} elsif (nl::is_variant(obj)) {
		sp(ref state, 'ov::mk(');
		print_net_formatstr(ref state, ov::get_element(obj));
		if (ov::has_value(obj)) {
			sp(ref state, ',');
			print_net_format(ref state, ov::get_value(obj));
		}
		sp(ref state, ')');
	} else {
		die(obj);
	}
}

