###
# (c) Atinea Sp. z o.o.
###


use string;
use array;
use hash;
use ptd;
use own;
use nast;
use ntokenizer;
use singleton;
use compiler_lib;
use ptd_parser;
use string_utils;

def get_end_list() : ptd::arr(ptd::string()) {
	return singleton::sigleton_do_not_use_without_approval([';', 'if', 'unless', 'fora', 'forh', 'rep', 'while']);
}

def nparser::state_t() {
	return own::rec({
		state => @ntokenizer::state_t,
		errors => @compiler_lib::errors_t,
		module_name => ptd::string(),
		parse_types => ptd::bool(),
	});
}

def nparser::try_value_t() {
	return ptd::var({ok => @nast::value_t, err => ptd::string()});
}

def nparser::try_cmd_t() {
	return ptd::var({ok => @nast::cmd_t, err => ptd::string()});
}

def nparser::sparse(s : ptd::string(), module_name : ptd::string(), parse_types : ptd::bool()) : ptd::var({
		ok => @nast::module_t,
		error => @compiler_lib::errors_t
	}) {
	var state : @nparser::state_t = {
		errors => [],
		state => {
			text => [s],
			len => string::length(s),
			pos => 0,
			type => :end,
			next_token => '',
			ln_nr => 1,
			ln_pos => 1,
			place => {line => 1, position => 0},
			place_ws => {line => 1, position => 0},
			last_comment => [],
			next_comment => [],
		},
		module_name => module_name,
		parse_types => parse_types
	};
	ntokenizer::init(ref state->state);
	var ret = parse_module(ref state, module_name);
	return :error(state->errors) if array::len(state->errors) > 0;
	return :ok(ret);
}

def add_error(ref state : @nparser::state_t, message : ptd::string()) : ptd::void() {
	var current_line = ntokenizer::get_line(ref state->state);
	var pos = ntokenizer::get_column(ref state->state);
	array::push(ref state->errors, {line => current_line, module => state->module_name, column => pos, message => message, type => :error});
}

def eat(ref state : @nparser::state_t, token : ptd::string()) : ptd::bool() {
	return true if ntokenizer::eat_token(ref state->state, token);
	add_error(ref state, 'expected: ' . token . string::lf() . ntokenizer::info(ref state->state));
	return false;
}

def try_eat(ref state : @nparser::state_t, token : ptd::string()) : ptd::bool() {
	return ntokenizer::eat_token(ref state->state, token);
}

def parse_module(ref state : @nparser::state_t, name : ptd::string()) : @nast::module_t {
	var mod : @nast::module_t = {name => name, import => [], fun_def => [], stamp => '', ending_comment => []};
	mod->stamp = array::join(string::lf(), ntokenizer::pop_last_comment(ref state->state));
	while (try_eat(ref state, 'use')) {
		var line : ptd::int() = ntokenizer::get_line(ref state->state);
		if (ntokenizer::is_type(ref state->state, :word)) {
			array::push(ref mod->import, {
				name => ntokenizer::eat_type(ref state->state, :word),
				line => line
			});
		} else {
			add_error(ref state, 'expected word as name of module');
		}
		eat(ref state, ';');
	}
	while (ntokenizer::next_is(ref state->state, 'def')) {
		match (parse_fun_def(ref state, name)) case :ok(var ok) {
			array::push(ref mod->fun_def, ok);
		} case :err(var err) {
			add_error(ref state, err);
			return mod;
		}
	}
	add_error(ref state, 'expected function definition') unless ntokenizer::is_type(ref state->state, :end);
	mod->ending_comment = ntokenizer::get_next_comment(ref state->state);
	return mod;
}

def parse_fun_arg_list(ref state : @nparser::state_t) : ptd::var({
		ok => ptd::arr(@nast::fun_def_arg_t),
		err => ptd::string()
	}) {
	eat(ref state, '(');
	var ret : ptd::arr(@nast::fun_def_arg_t) = [];
	while (!ntokenizer::next_is(ref state->state, ')')) {
		var el : @nast::fun_def_arg_t = {mod => :none, type => :none, name => '', tct_type => :tct_im};
		el->mod = :ref if try_eat(ref state, 'ref');
		if (ntokenizer::is_type(ref state->state, :word)) {
			el->name = ntokenizer::eat_type(ref state->state, :word);
		} else {
			add_error(ref state, 'word expected as fun arg name');
		}
		if (try_eat(ref state, ':')) {
			try var tmp = parse_type(ref state);
			el->type = :type(tmp);
		}
		array::push(ref ret, el);
		break unless try_eat(ref state, ',');
	}
	eat(ref state, ')');
	return :ok(ret);
}

def parse_fun_def(ref state : @nparser::state_t, module_name : ptd::string()) : ptd::var({
		ok => @nast::fun_def_t,
		err => ptd::string()
	}) {
	var ret : @nast::fun_def_t = {
			ret_type => {type => :none, tct_type => :tct_im},
			line => ntokenizer::get_line(ref state->state),
			args => [],
			name => '',
			cmd => {debug => get_debug_from_begin(ref state), cmd => :nop},
			access => :priv,
			defines_type => :no,
			comment => [],
		};
	eat(ref state, 'def');
	try ret->name = eat_text(ref state);
	if (try_eat(ref state, '::')) {
		if (ret->name ne module_name) {
			add_error(ref state, 'incorrect module name: ' . ret->name . ' of function, expected: ' . module_name);
		}
		try ret->name = eat_text(ref state);
		ret->access = :pub;
	}
	try ret->args = parse_fun_arg_list(ref state);
	if (ntokenizer::next_is(ref state->state, ':')) {
		eat(ref state, ':');
		try var tmp = parse_type(ref state);
		ret->ret_type->type = :type(tmp);
	}
	ret->comment = ntokenizer::pop_last_comment(ref state->state);
	try ret->cmd = parse_block(ref state);
	match (ptd_parser::fun_def_to_ptd(ret->cmd)) case :err(var err) {
		#here we either have an error (will be checked again in the type checker, so no worries)
		#or the function doesn't define a type
		ret->defines_type = :no;
	} case :ok(var ok) {
		ret->defines_type = :yes(ok);
	}
	return :ok(ret);
}

def parse_fun_val_arg_list(ref state : @nparser::state_t) : ptd::var({
		ok => ptd::arr(@nast::fun_val_arg_t),
		err => ptd::string()
	}) {
	var res : ptd::arr(@nast::fun_val_arg_t) = [];
	while (!ntokenizer::next_is(ref state->state, ')')) {
		try var tmp = parse_fun_val_arg(ref state);
		array::push(ref res, tmp);
		break unless try_eat(ref state, ',');
	}
	eat(ref state, ')');
	return :ok(res);
}

def parse_expr_list(ref state : @nparser::state_t) : ptd::var({ok => ptd::arr(@nast::value_t), err => ptd::string()}) {
	var res : ptd::arr(@nast::value_t) = [];
	while (!ntokenizer::next_is(ref state->state, ')')) {
		try var tmp = parse_expr(ref state);
		array::push(ref res, tmp);
		break unless try_eat(ref state, ',');
	}
	eat(ref state, ')');
	return :ok(res);
}

def parse_fun_val_arg(ref state : @nparser::state_t) : ptd::var({ok => @nast::fun_val_arg_t, err => ptd::string()}) {
	var el = {};
	el->mod = try_eat(ref state, 'ref') ? :ref : :none;
	try el->val = parse_expr(ref state);
	el->expected_type = :tct_im;
	return :ok(el);
}

def parse_fun_label(ref state : @nparser::state_t) : @nast::fun_label_t {
	var ret : @nast::fun_label_t = {name => '', module => ''};
	if (!ntokenizer::is_type(ref state->state, :word)) {
		add_error(ref state, 'after ''@'' module name of function expacted');
		return ret;
	}
	ret->module = ntokenizer::eat_type(ref state->state, :word);
	if (try_eat(ref state, '::') && ntokenizer::is_text(ref state->state)) {
		ret->name = ntokenizer::eat_text(ref state->state);
	} else {
		add_error(ref state, 'reference of function can be taken only to public function');
	}
	return ret;
}

def parse_label(ref state : @nparser::state_t) : ptd::var({
		ok => ptd::var({var => ptd::string(), fun_val => @nast::fun_val_t}),
		err => ptd::string()
	}) {
	var word : ptd::string() = ntokenizer::eat_type(ref state->state, :word);
	return :ok(:var(word))
		if !ntokenizer::next_is(ref state->state, '(') && !ntokenizer::next_is(ref state->state, '::');
	var fun_val : @nast::fun_val_t = {module => '', name => '', args => []};
	if (try_eat(ref state, '::')) {
		fun_val->module = word;
		try fun_val->name = eat_text(ref state);
	} else {
		fun_val->name = word;
	}
	eat(ref state, '(');
	try fun_val->args = parse_fun_val_arg_list(ref state);
	return :ok(:fun_val(fun_val));
}

def parse_hash_key(ref state : @nparser::state_t) : @nast::value_t {
	var begin_place = ntokenizer::get_place(ref state->state);
	var ret = :hash_key('');
	if (ntokenizer::is_text(ref state->state)) {
		ret = :hash_key(ntokenizer::eat_text(ref state->state));
	} elsif (ntokenizer::is_type(ref state->state, :string)) {
		ret = :hash_key(ntokenizer::eat_type(ref state->state, :string));
	}
	return {
		debug => {begin => begin_place, end => ntokenizer::get_place(ref state->state), comment => []},
		value => ret,
		type => :tct_im,
	};
}

def parse_hash(ref state : @nparser::state_t) : ptd::var({ok => @nast::hash_decl_t, err => ptd::string()}) {
	var ret : @nast::hash_decl_t = [];
	eat(ref state, '{');
	while (!ntokenizer::next_is(ref state->state, '}')) {
		var key = parse_hash_key(ref state);
		eat(ref state, '=>');
		try var val = parse_expr(ref state);
		array::push(ref ret, {key => key, val => val});
		break unless try_eat(ref state, ',');
	}
	eat(ref state, '}');
	return :ok(ret);
}

def parse_arr(ref state : @nparser::state_t) : ptd::var({ok => ptd::arr(@nast::value_t), err => ptd::string()}) {
	var ret : ptd::arr(@nast::value_t) = [];
	eat(ref state, '[');
	while (!ntokenizer::next_is(ref state->state, ']')) {
		try var tmp = parse_expr(ref state);
		array::push(ref ret, tmp);
		break unless try_eat(ref state, ',');
	}
	eat(ref state, ']');
	return :ok(ret);
}

def parse_expr(ref state : @nparser::state_t) : @nparser::try_value_t {
	try var left : @nast::value_t = parse_expr_rec(ref state, 0);
	return parse_expr_rec_left(ref state, left, 0);
}

def parse_type(ref state : @nparser::state_t) : @nparser::try_value_t {
	var begin = ntokenizer::get_place(ref state->state);
	if (try_eat(ref state, '@')) {
		var fun_label_begin = ntokenizer::get_place(ref state->state);
		var fun_label = :fun_label(parse_fun_label(ref state));
		var fun_label_end = ntokenizer::get_place(ref state->state);
		return :ok({
			debug => {
				begin => begin,
				end => ntokenizer::get_place(ref state->state),
				comment => [],
			},
			value => :unary_op({
				op => '@',
				val => {
					debug => {begin => fun_label_begin, end => fun_label_end, comment => []},
					value => fun_label,
					type => :tct_im,
				},
			}),
			type => :tct_im,
		});
	}
	if (ntokenizer::is_type(ref state->state, :word)) {
		try var ret = parse_label(ref state);
		 if (ret is :fun_val) {
			return :ok({
				debug => {begin => begin, end => ntokenizer::get_place(ref state->state), comment => []},
				value => ret,
				type => :tct_im,
			});
		}
	}
	add_error(ref state, 'wrong format of type, expected ''@'' or function call');
	return :ok({
		debug => {begin => begin, end => ntokenizer::get_place(ref state->state), comment => []},
		value => :nop,
		type => :tct_im,
	});
}

def parse_expr_rec_left(ref state : @nparser::state_t, left : @nast::value_t, prec : ptd::int()) : @nparser::try_value_t {
	loop {
		var new_left : @nast::value_only_t;
		var new_begin = ntokenizer::get_place(ref state->state);
		var token : ptd::string() = ntokenizer::get_token(ref state->state);
		var op : ptd::string();
		if (hash::has_key(nast::get_ternary_ops(), token)) {
			op = token;
			if (op eq '?') {
				var op_st : @nast::op_t = hash::get_value(nast::get_ternary_ops(), '?');
				return :ok(left) if op_st->prec < prec || (op_st->prec == prec && op_st->assoc is :left);
				eat(ref state, op);
				try var snd : @nast::value_t = parse_expr(ref state);
				eat(ref state, ':');
				try var thrd : @nast::value_t = parse_expr_rec(ref state, op_st->prec);
				new_left = :ternary_op({fst => left, snd => snd, thrd => thrd, op => '?'});
			} else {
				return :err('ternary op: ' . op);
			}
		} elsif (hash::has_key(nast::get_bin_ops(), token)) {
			op = token;
			var op_st : @nast::op_t = hash::get_value(nast::get_bin_ops(), token);
			return :ok(left) if op_st->prec < prec || (op_st->prec == prec && op_st->assoc is :left);
			eat(ref state, token);
			if (op eq '->') {
				new_left = :bin_op({op => op, left => left, right => parse_hash_key(ref state)});
			} elsif (op eq 'as') {
				eat(ref state, ':');
				var name = parse_hash_key(ref state);
				new_left = :bin_op({op => 'OV_AS', left => left, right => name});
			} elsif (op eq 'is') {
				eat(ref state, ':');
				var name = parse_hash_key(ref state);
				new_left = :bin_op({op => 'OV_IS', left => left, right => name});
			} else {
				check_lvalue(ref state, left) if (op eq '=');
				try var tmp = parse_expr_rec(ref state, hash::get_value(nast::get_bin_ops(), op)->prec);
				new_left = :bin_op({left => left, op => op, right => tmp});
			}
		} elsif (try_eat(ref state, '[')) {
			op = 'ARRAY_INDEX';
			try var right : @nast::value_t = parse_expr(ref state);
			eat(ref state, ']');
			new_left = :bin_op({op => op, left => left, right => right});
		} elsif (try_eat(ref state, '{')) {
			op = 'HASH_INDEX';
			try var right : @nast::value_t = parse_expr(ref state);
			eat(ref state, '}');
			new_left = :bin_op({op => op, left => left, right => right});
		} elsif (try_eat(ref state, '++')) {
			new_left = :post_inc(left);
		} elsif (try_eat(ref state, '--')) {
			new_left = :post_dec(left);
		} else {
			return :ok(left);
		}
		left = {
			debug => {begin => new_begin, end => ntokenizer::get_place(ref state->state), comment => []},
			value => new_left,
			type => :tct_im,
		};
	}
	die;
}

def parse_expr_rec(ref state : @nparser::state_t, prec : ptd::int()) : @nparser::try_value_t {
	var expr : @nast::value_only_t;
	var begin = ntokenizer::get_place(ref state->state);
	if (try_eat(ref state, '(')) {
		try var tmp = parse_expr(ref state);
		expr = :parenthesis(tmp);
		eat(ref state, ')');
	} elsif (ntokenizer::next_is(ref state->state, '{')) {
		try var tmp = parse_hash(ref state);
		expr = :hash_decl(tmp);
	} elsif (ntokenizer::next_is(ref state->state, '[')) {
		try var tmp = parse_arr(ref state);
		expr = :arr_decl(tmp);
	} elsif (ntokenizer::next_is(ref state->state, ':')) {
		try var tmp = parse_variant(ref state);
		expr = :variant(tmp);
	} elsif (ntokenizer::is_type(ref state->state, :number)) {
		var const_str = ntokenizer::eat_type(ref state->state, :number); 
		var const_int;
		match (string_utils::get_integer(const_str)) case :ok(var int) {
			const_int = int;
		} case :err(var err) {
			return :err('Invalid number: ' . const_str);
		}
		expr = :const(const_int);
	} elsif (ntokenizer::is_type(ref state->state, :multi_string) || ntokenizer::is_type(ref state->state, :string)) {
		var ret = {arr => []};
		while (ntokenizer::is_type(ref state->state, :multi_string)) {
			array::push(ref ret->arr, ntokenizer::eat_type(ref state->state, :multi_string));
		}
		if (ntokenizer::is_type(ref state->state, :string)) {
			array::push(ref ret->arr, ntokenizer::eat_type(ref state->state, :string));
			ret->last = :end;
		} else {
			ret->last = :new_line;
		}
		expr = :string(ret);
	} elsif (ntokenizer::is_type(ref state->state, :word)) {
		try expr = parse_label(ref state);
	} elsif (ntokenizer::is_type(ref state->state, :operator) && hash::has_key(nast::get_unary_ops(), 
				ntokenizer::get_token(ref state->state))) {
		var op : ptd::string() = ntokenizer::eat_type(ref state->state, :operator);
		var value : @nast::value_t;
		if (op eq '@') {
			var fun_label_begin = ntokenizer::get_place(ref state->state);
			var fun_label = :fun_label(parse_fun_label(ref state));
			var fun_label_end = ntokenizer::get_place(ref state->state);
			value = {
				debug => {
					begin => fun_label_begin,
					end => fun_label_end,
					comment => [],
				},
				value => fun_label,
				type => :tct_im,
			};
		} else {
			try value = parse_expr_rec(ref state, hash::get_value(nast::get_unary_ops(), op)->prec);
			add_error(ref state, 'unary operator after unary operator') if (value->value is :unary_op);
		}
		expr = :unary_op({op => op, val => value});
	} elsif (ntokenizer::is_type(ref state->state, :keyword)) {
		if (try_eat(ref state, 'true')) {
			expr = :bool(true);
		} elsif (try_eat(ref state, 'false')) {
			expr = :bool(false);
		} else {
			var err : ptd::string() = 'use keyword in wrong context:' . string::lf() . ntokenizer::info(ref state->state);
			add_error(ref state, err);
			return :err(err);
		}
	} else {
		var err : ptd::string() = 'error in parse_expr:' . string::lf() . ntokenizer::info(ref state->state);
		add_error(ref state, err);
		return :err(err);
	}
	var left = {
		debug => {begin => begin, end => ntokenizer::get_place(ref state->state), comment => []}, 
		value => expr,
		type => :tct_im,
	};
	return parse_expr_rec_left(ref state, left, prec);
}

def get_value_nop(ref state : @nparser::state_t) : @nast::value_t {
	return {
		debug => {
			begin => ntokenizer::get_place(ref state->state),
			end => ntokenizer::get_place(ref state->state),
			comment => [],
		},
		value => :nop,
		type => :tct_im,
	};
}

def eat_text(ref state : @nparser::state_t) : ptd::var({ok => ptd::string(), err => ptd::string()}) {
	if (ntokenizer::is_text(ref state->state)) {
		return :ok(ntokenizer::eat_text(ref state->state));
	} else {
		add_error(ref state, 'word expected');
		return :err('word expected');
	}
}

def parse_variant_label(ref state : @nparser::state_t) : ptd::string() {
	if (ntokenizer::is_text(ref state->state)) {
		return ntokenizer::eat_text(ref state->state);
	} else {
		add_error(ref state, 'word expected');
		return '';
	}
}

def parse_variant(ref state : @nparser::state_t) : ptd::var({ok => @nast::variant_t, err => ptd::string()}) {
	eat(ref state, ':');
	var name : ptd::string() = parse_variant_label(ref state);
	var decl = get_value_nop(ref state);
	if (try_eat(ref state, '(')) {
		try decl = parse_expr(ref state);
		eat(ref state, ')');
	} else {
		decl = get_value_nop(ref state);
	}
	return :ok({name => name, var => decl});
}

def check_lvalue(ref state : @nparser::state_t, lval : @nast::value_t) : ptd::void() {
	if (lval->value is :var) {
		return;
	} elsif (lval->value is :bin_op) {
		var bin_op = lval->value as :bin_op;
		if (bin_op->op eq '->' || bin_op->op eq 'ARRAY_INDEX' || bin_op->op eq 'HASH_INDEX' || bin_op->op eq 'OV_AS') {
			check_lvalue(ref state, bin_op->left);
			return;
		}
	} elsif (lval->value is :parenthesis) {
		check_lvalue(ref state, lval->value as :parenthesis);
		return;
	}
	add_error(ref state, 'invalid expr for lvalue');
}

def parse_variant_decl(ref state : @nparser::state_t) : @nast::variant_decl_t {
	eat(ref state, ':');
	var ret : @nast::variant_decl_t = {name => parse_variant_label(ref state), value => :none};
	if (try_eat(ref state, '(')) {
		if (ntokenizer::next_is(ref state->state, 'var')) {
			ret->value = :value({declaration => parse_var_decl_sim(ref state), mod => :none});
		} else {
			ret->value = :value({declaration => parse_ref_var_decl_sim(ref state), mod => :ref});
		}
		eat(ref state, ')');
	}
	return ret;
}

def parse_var_decl(ref state : @nparser::state_t) : ptd::var({ok => @nast::variable_declaration_t, err => ptd::string()}) {
	eat(ref state, 'var');
	var ret : @nast::variable_declaration_t = {name => '', type => :none, tct_type => :tct_im, value => :none};
	if (ntokenizer::is_type(ref state->state, :word)) {
		ret->name = ntokenizer::eat_type(ref state->state, :word);
	} else {
		add_error(ref state, 'variable name expected');
	}
	if (try_eat(ref state, ':')) {
		try var tmp = parse_type(ref state);
		ret->type = :type(tmp);
		if (state->parse_types) {
			try var tct_type = ptd_parser::try_value_to_ptd(tmp);
			ret->tct_type = tct_type;
		}
	}
	if (try_eat(ref state, '=')) {
		try var tmp = parse_expr(ref state);
		ret->value = :value(tmp);
	}
	return :ok(ret);
}

def parse_var_decl_sim(ref state : @nparser::state_t) : @nast::variable_declaration_t {
	eat(ref state, 'var');
	var ret = {name => '', type => :none, tct_type => :tct_im, value => :none};
	if (ntokenizer::is_type(ref state->state, :word)) {
		ret->name = ntokenizer::eat_type(ref state->state, :word);
	} else {
		add_error(ref state, 'variable name expected');
	}
	return ret;
}

def parse_ref_var_decl_sim(ref state : @nparser::state_t) : @nast::variable_declaration_t {
	eat(ref state, 'ref');
	var ret = {name => '', type => :none, tct_type => :tct_im, value => :none};
	if (ntokenizer::is_type(ref state->state, :word)) {
		ret->name = ntokenizer::eat_type(ref state->state, :word);
	} else {
		add_error(ref state, 'variable name expected');
	}
	return ret;
}

def parse_cond(ref state : @nparser::state_t) : ptd::var({ok => @nast::value_t, err => ptd::string()}) {
	eat(ref state, '(');
	try var tmp = parse_expr(ref state);
	eat(ref state, ')');
	return :ok(tmp);
}

def parse_block(ref state : @nparser::state_t) : @nparser::try_cmd_t {
	var begin_place : @nast::place_t = ntokenizer::get_place(ref state->state);
	eat(ref state, '{');
	var cmds : ptd::arr(@nast::cmd_t) = [];
	while (!try_eat(ref state, '}')) {
		continue if try_eat(ref state, ';');
		try var tmp = parse_cmd(ref state);
		array::push(ref cmds, tmp);
	}
	var end_place : @nast::place_t = ntokenizer::get_place_ws(ref state->state);
	var debug : @nast::debug_t = {begin => begin_place, end => end_place, comment => []};
	var ending_comment = ntokenizer::pop_last_comment(ref state->state);
	return :ok({debug => debug, cmd => :block({cmds => cmds, ending_comment => ending_comment})});
}

def parse_try_ensure(ref state : @nparser::state_t) : ptd::var({ok => @nast::try_ensure_t, err => ptd::string()}) {
	if (ntokenizer::next_is(ref state->state, 'var')) {
		try var tmp = parse_var_decl(ref state);
		return :ok(:decl(tmp));
	} else {
		try var expr = parse_expr(ref state);
		if (expr->value is :bin_op && (expr->value as :bin_op)->op eq '=') {
			return :ok(:lval(expr->value as :bin_op));
		} else {
			return :ok(:expr(expr));
		}
	}
}

def get_debug_from_begin(ref state : @nparser::state_t) : @nast::debug_t {
	return {
		begin => ntokenizer::get_place(ref state->state),
		end => ntokenizer::get_place(ref state->state),
		comment => ntokenizer::pop_last_comment(ref state->state),
	};
}

def parse_cmd(ref state : @nparser::state_t) : @nparser::try_cmd_t {
	var begin_place : @nast::place_t = ntokenizer::get_place(ref state->state);
	var ret;
	var comment;
	if (try_eat(ref state, 'if')) {
		var tmp = {};
		try tmp->cond = parse_cond(ref state);
		comment = ntokenizer::pop_last_comment(ref state->state);
		try tmp->if = parse_block(ref state);
		var elseif = [];
		tmp->elsif = [];
		while (try_eat(ref state, 'elsif')) {
			var tmp2 = {};
			var begin_place2 : @nast::place_t = ntokenizer::get_place(ref state->state);
			try tmp2->cond = parse_cond(ref state);
			var end_place2 : @nast::place_t = ntokenizer::get_place_ws(ref state->state);
			tmp2->debug = {
				begin => begin_place2,
				end => end_place2,
				comment => ntokenizer::pop_last_comment(ref state->state),
			};
			try tmp2->cmd = parse_block(ref state);
			array::push(ref elseif, tmp2);
		}
		tmp->elsif = elseif;
		if (try_eat(ref state, 'else')) {
			try tmp->else = parse_block(ref state);
		} else {
			tmp->else = {debug => get_debug_from_begin(ref state), cmd => :nop};
		}
		ret = :if(tmp);
	} elsif (try_eat(ref state, 'fora')) {
		var tmp = {};
		tmp->short = false;
		tmp->iter = parse_var_decl_sim(ref state);
		try tmp->array = parse_cond(ref state);
		comment = ntokenizer::pop_last_comment(ref state->state);
		try tmp->cmd = parse_block(ref state);
		ret = :fora(tmp);
	} elsif (try_eat(ref state, 'rep')) {
		var tmp = {};
		tmp->short = false;
		tmp->iter = parse_var_decl_sim(ref state);
		try tmp->count = parse_cond(ref state);
		comment = ntokenizer::pop_last_comment(ref state->state);
		try tmp->cmd = parse_block(ref state);
		ret = :rep(tmp);
	} elsif (try_eat(ref state, 'loop')) {
		comment = ntokenizer::pop_last_comment(ref state->state);
		try var tmp = parse_block(ref state);
		ret = :loop(tmp);
	} elsif (try_eat(ref state, 'forh')) {
		var tmp = {};
		tmp->short = false;
		tmp->key = parse_var_decl_sim(ref state);
		eat(ref state, ',');
		if (ntokenizer::next_is(ref state->state, 'var')) {
			tmp->val = parse_var_decl_sim(ref state);
			tmp->val_mod = :none;
		} else {
			tmp->val = parse_ref_var_decl_sim(ref state);
			tmp->val_mod = :ref;
		}
		try tmp->hash = parse_cond(ref state);
		comment = ntokenizer::pop_last_comment(ref state->state);
		try tmp->cmd = parse_block(ref state);
		ret = :forh(tmp);
	} elsif (try_eat(ref state, 'while')) {
		var tmp = {};
		tmp->short = false;
		try tmp->cond = parse_cond(ref state);
		comment = ntokenizer::pop_last_comment(ref state->state);
		try tmp->cmd = parse_block(ref state);
		ret = :while(tmp);
	} elsif (try_eat(ref state, 'for')) {
		var tmp = {};
		eat(ref state, '(');
		if (ntokenizer::next_is(ref state->state, 'var')) {
			try var tmp2 = parse_var_decl(ref state);
			tmp->start = :var_decl(tmp2);
		} elsif (ntokenizer::next_is(ref state->state, ';')) {
			tmp->start = :value(get_value_nop(ref state));
		} else {
			try var tmp2 = parse_expr(ref state);
			tmp->start = :value(tmp2);
		}
		eat(ref state, ';');
		tmp->cond = get_value_nop(ref state);
		try tmp->cond = parse_expr(ref state) if (!ntokenizer::next_is(ref state->state, ';'));
		eat(ref state, ';');
		tmp->iter = get_value_nop(ref state);
		try tmp->iter = parse_expr(ref state) if (!ntokenizer::next_is(ref state->state, ')'));
		eat(ref state, ')');
		comment = ntokenizer::pop_last_comment(ref state->state);
		try tmp->cmd = parse_block(ref state);
		ret = :for(tmp);
	} elsif (ntokenizer::next_is(ref state->state, '{')) {
		comment = ntokenizer::pop_last_comment(ref state->state);
		try var tmp = parse_block(ref state);
		ret = tmp->cmd;
	} elsif (try_eat(ref state, 'break')) {
		comment = ntokenizer::pop_last_comment(ref state->state);
		ret = :break;
	} elsif (try_eat(ref state, 'continue')) {
		comment = ntokenizer::pop_last_comment(ref state->state);
		ret = :continue;
	} elsif (try_eat(ref state, 'return')) {
		var tok = ntokenizer::get_token(ref state->state);
		var found = false;
		fora var el (get_end_list()) {
			if (tok eq el) {
				found = true;
				break;
			}
		}
		if (found) {
			ret = :return(get_value_nop(ref state));
		} else {
			try var tmp = parse_expr(ref state);
			ret = :return(tmp);
		}
		comment = ntokenizer::pop_last_comment(ref state->state);
	} elsif (try_eat(ref state, 'match')) {
		eat(ref state, '(');
		try var tmp = parse_expr(ref state);
		var ret2 = {val => tmp, branch_list => []};
		eat(ref state, ')');
		var begin_case = ntokenizer::get_place(ref state->state);
		comment = ntokenizer::pop_last_comment(ref state->state);
		while (try_eat(ref state, 'case')) {
			var elem = {variant => parse_variant_decl(ref state)};
			elem->debug = {begin => begin_case, end => ntokenizer::get_place_ws(ref state->state), comment => []};
			try elem->cmd = parse_block(ref state);
			array::push(ref ret2->branch_list, elem);
			begin_case = ntokenizer::get_place(ref state->state);
		}
		ret = :match(ret2);
	} elsif (try_eat(ref state, 'die')) {
		var args = [];
		if (try_eat(ref state, '(')) {
			try args = parse_expr_list(ref state);
		}
		ret = :die(args);
		comment = ntokenizer::pop_last_comment(ref state->state);
	} elsif (ntokenizer::next_is(ref state->state, 'var')) {
		try var tmp = parse_var_decl(ref state);
		ret = :var_decl(tmp);
		eat(ref state, ';');
		comment = ntokenizer::pop_last_comment(ref state->state);
	} elsif (ntokenizer::next_is(ref state->state, 'try')) {
		eat(ref state, 'try');
		try var tmp = parse_try_ensure(ref state);
		ret = :try(tmp);
		comment = ntokenizer::pop_last_comment(ref state->state);
	} elsif (ntokenizer::next_is(ref state->state, 'ensure')) {
		eat(ref state, 'ensure');
		try var tmp = parse_try_ensure(ref state);
		ret = :ensure(tmp);
		comment = ntokenizer::pop_last_comment(ref state->state);
	} else {
		try var expr = parse_expr(ref state);
		ret = :value(expr);
		comment = ntokenizer::pop_last_comment(ref state->state);
	}
	if (ret is :break || ret is :continue || ret is :value || ret is :return || ret is :die || ret is :ensure || ret is 
		:try) {
		var cmd_debug : @nast::debug_t = {
			begin => begin_place,
			end => ntokenizer::get_place_ws(ref state->state),
			comment => [],
			};
		var el = {cmd => {debug => cmd_debug, cmd => ret}};
		if (try_eat(ref state, 'fora')) {
			el->short = true;
			el->iter = parse_var_decl_sim(ref state);
			eat(ref state, '(');
			try el->array = parse_expr(ref state);
			eat(ref state, ')');
			ret = :fora(el);
		} elsif (try_eat(ref state, 'rep')) {
			el->short = true;
			el->iter = parse_var_decl_sim(ref state);
			eat(ref state, '(');
			try el->count = parse_expr(ref state);
			eat(ref state, ')');
			ret = :rep(el);
		} elsif (try_eat(ref state, 'forh')) {
			el->short = true;
			el->key = parse_var_decl_sim(ref state);
			eat(ref state, ',');
			if (ntokenizer::next_is(ref state->state, 'var')) {
				el->val = parse_var_decl_sim(ref state);
				el->val_mod = :none;
			} else {
				el->val = parse_ref_var_decl_sim(ref state);
				el->val_mod = :ref;
			}
			eat(ref state, '(');
			try el->hash = parse_expr(ref state);
			eat(ref state, ')');
			ret = :forh(el);
		} elsif (try_eat(ref state, 'if')) {
			try el->cond = parse_expr(ref state);
			ret = :if_mod(el);
		} elsif (try_eat(ref state, 'unless')) {
			try el->cond = parse_expr(ref state);
			ret = :unless_mod(el);
		} elsif (try_eat(ref state, 'while')) {
			el->short = true;
			try el->cond = parse_expr(ref state);
			ret = :while(el);
		}
		eat(ref state, ';');
	}
	var end_place : @nast::place_t = ntokenizer::get_place_ws(ref state->state);
	var debug : @nast::debug_t = {begin => begin_place, end => end_place, comment => comment};
	return :ok({cmd => ret, debug => debug});
}

