###
# (c) Atinea Sp. z o.o.
###


use ov;
use nast;
use ptd;
use own;
use array;
use hash;
use string;
use enum;
use c_std_lib;
use boolean_t;
use singleton;

def get_keywords() : ptd::hash(ptd::string()) {
	return singleton::sigleton_do_not_use_without_approval({
			use => '',
			fora => '',
			forh => '',
			for => '',
			rep => '',
			loop => '',
			while => '',
			if => '',
			elsif => '',
			else => '',
			var => '',
			def => '',
			ref => '',
			match => '',
			case => '',
			unless => '',
			true => '',
			false => '',
			continue => '',
			break => '',
			return => '',
			try => '',
			ensure => '',
			die => ''
		});
}

def get_char_oper() : ptd::arr(ptd::string()) {
	var ret = [[], [], []];
	fora var hash ([nast::get_unary_ops(), nast::get_bin_ops(), nast::get_ternary_ops()]) {
		forh var oper, var tmp (hash) {
			array::push(ref ret[string::length(oper) - 1], oper) unless (string::is_letter(string::substr(oper, 0, 1)));
		}
	}
	array::append(ref ret[2], ret[1]);
	array::append(ref ret[2], ret[0]);
	return singleton::sigleton_do_not_use_without_approval(ret[2]);
}

def get_lett_oper() : ptd::hash(ptd::string()) {
	var ret = {};
	fora var hash ([nast::get_unary_ops(), nast::get_bin_ops(), nast::get_ternary_ops()]) {
		forh var oper, var tmp (hash) {
			hash::set_value(ref ret, oper, '') if (string::is_letter(string::substr(oper, 0, 1)));
		}
	}
	return singleton::sigleton_do_not_use_without_approval(ret);
}

def ntokenizer::state_t() {
	return own::rec({
			text => ptd::arr(ptd::string()),
			pos => ptd::int(),
			len => ptd::int(),
			type => @ntokenizer::token_t,
			next_token => ptd::string(),
			ln_nr => ptd::int(),
			ln_pos => ptd::int(),
			place => ptd::rec({line => ptd::int(), position => ptd::int()}),
			place_ws => ptd::rec({line => ptd::int(), position => ptd::int()}),
			last_comment => ptd::string(),
		});
}

def ntokenizer::token_t() {
	return ptd::var({
			end => ptd::none(),
			delimiter => ptd::none(),
			operator => ptd::none(),
			number => ptd::none(),
			keyword => ptd::none(),
			word => ptd::none(),
			multi_string => ptd::none(),
			string => ptd::none(),
			error => ptd::none()
		});
}

def ntokenizer::init(ref state : @ntokenizer::state_t) : ptd::void() {
	get_next_token(ref state);
}

def ntokenizer::get_last_comment(ref state : @ntokenizer::state_t) : ptd::string() {
	return state->last_comment;
}

def get_char(ref state : @ntokenizer::state_t) : ptd::string() {
	return c_std_lib::fast_substr(state->text, state->pos, 1) . '';
}

def get_next_char(ref state : @ntokenizer::state_t) : ptd::string() {
	return '' if (state->len <= state->pos + 1);
	return c_std_lib::fast_substr(state->text, state->pos + 1, 1);
}

def eat_ws(ref state : @ntokenizer::state_t) {
	state->last_comment = '';
	var is_comment_block = true;
	loop {
		return if (state->pos == state->len);
		var cchar = get_char(ref state);
		var char = string::ord(cchar);
		if (char == 9 || char == 13 || char == 32) {
			state->pos++;
			is_comment_block = false;
		} elsif (char == 10) {
			state->pos++;
			state->ln_pos = state->pos;
			state->ln_nr++;
			is_comment_block = false;
		} elsif (char == 35) {
			if (is_comment_block) {
				state->last_comment .= cchar;
			}
			++state->pos;
			loop {
				return if (state->pos == state->len);
				var c = get_char(ref state);
				state->pos++;
				if (is_comment_block) {
					state->last_comment .= c;
				}
				break if string::ord(c) == 10;
			}
			state->ln_nr++;
		} else {
			return;
		}
	}
}

def is_token(ref state : @ntokenizer::state_t) : @boolean_t::type {
	return true if state->type is :delimiter;
	return true if state->type is :operator;
	return true if state->type is :keyword;
	return false;
}

def ntokenizer::eat_token(ref state : @ntokenizer::state_t, token : ptd::string()) : @boolean_t::type {
	if (token eq state->next_token && is_token(ref state)) {
		get_next_token(ref state);
		return true;
	}
	return false;
}

def ntokenizer::get_line(ref state : @ntokenizer::state_t) : ptd::int() {
	return state->ln_nr;
}
def ntokenizer::get_column(ref state : @ntokenizer::state_t) : ptd::int() {
	return (1 + state->pos - state->ln_pos - string::length(state->next_token));
}
def ntokenizer::get_place(ref state : @ntokenizer::state_t) : ptd::rec({line => ptd::int(), position => ptd::int()}) {
	return state->place;
}

def ntokenizer::get_place_ws(ref state : @ntokenizer::state_t) : ptd::rec({line => ptd::int(), position => ptd::int()}) {
	return state->place_ws;
}

def ntokenizer::get_token(ref state : @ntokenizer::state_t) : ptd::string() {
	return state->next_token;
}

def ntokenizer::is_type(ref state : @ntokenizer::state_t, type : @ntokenizer::token_t) : @boolean_t::type {
	return enum::eq(state->type, type);
}

def ntokenizer::next_is(ref state : @ntokenizer::state_t, token : ptd::string()) : @boolean_t::type {
	return token eq state->next_token && is_token(ref state);
}

def ntokenizer::eat_type(ref state : @ntokenizer::state_t, type : @ntokenizer::token_t) : ptd::string() {
	die unless ntokenizer::is_type(ref state, type);
	var ret = state->next_token;
	get_next_token(ref state);
	return ret;
}

def ntokenizer::is_text(ref state : @ntokenizer::state_t) : @boolean_t::type {
	return true if (ntokenizer::is_type(ref state, :word));
	return true if (ntokenizer::is_type(ref state, :keyword));
	if (ntokenizer::is_type(ref state, :operator)) {
		return true if (string::is_letter(string::substr(state->next_token, 0, 1)));
	}
	return false;
}

def ntokenizer::eat_text(ref state : @ntokenizer::state_t) : ptd::string() {
	return ntokenizer::eat_type(ref state, :word) if (ntokenizer::is_type(ref state, :word));
	return ntokenizer::eat_type(ref state, :keyword) if (ntokenizer::is_type(ref state, :keyword));
	if (ntokenizer::is_type(ref state, :operator)) {
		return ntokenizer::eat_type(ref state, :operator)
			if (string::is_letter(string::substr(state->next_token, 0, 1)));
	}
	die;
}

def ntokenizer::info(ref state : @ntokenizer::state_t) : ptd::string() {
	return 'token: ''' . state->next_token . '''
		'line:  ' . ptd::int_to_string(state->ln_nr) . '
		'pos:   ' . ptd::int_to_string(1 + state->pos - state->ln_pos - string::length(state->next_token)) . '
		'type: ' . ov::get_element(state->type) . '
		'';
}

def is_hex_number(char : ptd::string()) : @boolean_t::type {
	return string::is_digit(char) || (string::ord(char) >= 65 && string::ord(char) <= 70) || 
		(string::ord(char) >= 97 && string::ord(char) <= 102);
}

def try_get_operator(ref state : @ntokenizer::state_t, ref char : ptd::string()) {
	fora var oper (get_char_oper()) {
		continue if (state->len < 1 + state->pos + string::length(oper));
		if (c_std_lib::fast_substr(state->text, state->pos, string::length(oper)) eq oper) {
			continue
				if 
				(string::is_letter(get_char(ref state)) && 
					string::is_letter(c_std_lib::fast_substr(state->text, state->pos + string::length(oper), 1)));
			char = oper;
			return true;
		}
	}
	return false;
}

def get_next_token(ref state : @ntokenizer::state_t) : ptd::void() {
	state->place_ws = {line => state->ln_nr, position => state->pos - state->ln_pos + 1};
	eat_ws(ref state);
	state->place = {line => state->ln_nr, position => state->pos - state->ln_pos + 1};
	return if state->type is :error;
	if (state->pos == state->len) {
		state->type = :end;
		state->next_token = '';
		return;
	}
	var char = get_char(ref state);
	if (char eq '''') {
		state->next_token = '';
		state->type = :string;
		loop {
			state->pos += 1;
			char = get_char(ref state);
			if (char eq '''') {
				state->pos += 1;
				return unless (get_char(ref state) eq '''');
			} elsif (string::ord(char) == 10) {
				state->type = :multi_string;
				return;
			}
			state->next_token .= char;
		}
	} elsif (char . get_next_char(ref state) eq '=>' || char . get_next_char(ref state) eq '::') {
		state->type = :delimiter;
		state->next_token = char . get_next_char(ref state);
		state->pos += 2;
	} elsif (string::is_letter(char)) {
		state->next_token = char;
		state->pos++;
		char = get_char(ref state);
		while (char ne '' && (string::is_letter(char) || string::is_digit(char) || char eq '_')) {
			state->next_token .= char;
			state->pos++;
			char = get_char(ref state);
		}
		if (hash::has_key(get_lett_oper(), state->next_token)) {
			state->type = :operator;
		} else {
			state->type = hash::has_key(get_keywords(), state->next_token) ? :keyword : :word;
		}
	} elsif (try_get_operator(ref state, ref char)) {
		state->type = :operator;
		state->next_token = char;
		state->pos += string::length(char);
	} elsif (string::index2(';:,[]{}()', char) >= 0) {
		state->type = :delimiter;
		state->next_token = char;
		state->pos++;
	} elsif (string::is_digit(char) || ((char eq '-' || char eq '+') && string::is_digit(get_next_char(ref state)))) {
		state->next_token = char;
		state->type = :number;
		state->pos++;
		if (char eq '-' || char eq '+') {
			char = get_char(ref state);
			state->next_token .= char;
			state->pos++;
		}
		if (char eq '0' && get_char(ref state) eq 'x' && is_hex_number(get_next_char(ref state))) {
			state->next_token .= get_char(ref state);
			state->pos++;
			char = get_char(ref state);
			while (is_hex_number(char)) {
				state->next_token .= char;
				state->pos++;
				char = get_char(ref state);
			}
		} else {
			var dot = 0;
			loop {
				char = get_char(ref state);
				dot++ if (dot == 1);
				dot = 1 if char eq '.' && string::is_digit(get_next_char(ref state)) && dot == 0;
				break if char eq '' || !(string::is_digit(char) || dot == 1);
				state->next_token .= char;
				state->pos++;
			}
		}
	} else {
		state->type = :error;
		state->next_token = char;
	}
}

