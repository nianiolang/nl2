###
# (c) Atinea Sp. z o.o.
###


use ov;
use string;
use hash;
use array;
use nl;
use ptd;

def dfile_dbg::ssave(obj) : ptd::string() {
	var state = {str => '', objects => {}};
	sprint(ref state, obj, 0, false);
	return state->str;
}

def dfile_dbg::state_out() {
	return ptd::rec({str => ptd::string(), objects => ptd::hash(ptd::bool())});
}

def sp(ref state : @dfile_dbg::state_out, str) : ptd::void() {
	state->str .= str;
}

def sprintstr(ref state : @dfile_dbg::state_out, str) : ptd::void() {
	str .= '';
	str = string::replace(str, '\', '\\');
	str = string::replace(str, '$', '\$');
	str = string::replace(str, '@', '\@');
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

def sprint_hash_key(ref state : @dfile_dbg::state_out, str) : ptd::void() {
	if (is_simple_string(str)) {
		sp(ref state, str);
	} else {
		sprintstr(ref state, str);
	}
}

def get_ind(ind : ptd::int()) : ptd::string() {
	return string::char_times(string::tab(), ind);
}

def sprint_hash(ref state : @dfile_dbg::state_out, obj : ptd::ptd_im(), indent : ptd::int(), is_debug : ptd::bool()) :
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

def sprint(ref state : @dfile_dbg::state_out, obj : ptd::ptd_im(), indent : ptd::int(), is_debug : ptd::bool()) :
		ptd::void() {
	if (nl::is_sim(obj)) {
		if (nl::is_int(obj)) {
			sp(ref state, 'int(');
			sprintstr(ref state, obj);
		} else {
			sp(ref state, 'string(');
			sprintstr(ref state, obj);
		}
		sp(ref state, ')');
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

