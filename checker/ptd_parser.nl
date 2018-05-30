###
# (c) Atinea Sp. z o.o.
###


use tct;
use array;
use hash;
use ov;
use nast;
use ptd;

def ptd_parser::fun_def_to_ptd(ast : @nast::cmd_t) : ptd::var({ok => @tct::meta_type, err => ptd::string()}) {
	var cmd = ast->cmd as :block;
	return :err('type function should have only a return command') unless array::len(cmd) == 1 && cmd[0]->cmd is :return;
	return ptd_parser::try_value_to_ptd(cmd[0]->cmd as :return);
}

def ptd_parser::try_value_to_ptd(ast_arg : @nast::value_t) : ptd::var({ok => @tct::meta_type, err => ptd::string()}) {
	var ast = ast_arg->value;
	if (ast is :unary_op) {
		var op = ast as :unary_op;
		return :err('ptd function argument can be other ptd function or reference type start witch @: ' . op->op)
			unless op->op eq '@';
		var fun_str = op->val->value as :fun_label;
		return :ok(tct::ref(fun_str->module . '::' . fun_str->name));
	}
	return :err('can parse only function: ' . ov::get_element(ast)) unless ast is :fun_val;
	var fun_val : @nast::fun_val_t = ast as :fun_val;
	return :err('can parse only ptd function: ' . fun_val->module . '::' . fun_val->name)
		unless fun_val->module eq 'ptd' || fun_val->module eq 'own';
	var args_size : ptd::int() = array::len(fun_val->args);
	var args_size_str = ptd::int_to_string(args_size);
	var mod_name : ptd::string() = fun_val->module;
	var fun_name : ptd::string() = fun_val->name;
	if (mod_name eq 'ptd') {
		if (fun_name eq 'sim') {
			return :err('sim can''t have arguments: ' . args_size_str) unless args_size == 0;
			return :ok(tct::string());
		} elsif (fun_name eq 'ptd_im') {
			return :err('im can''t have arguments: ' . args_size_str) unless args_size == 0;
			return :ok(tct::tct_im());
		} elsif (fun_name eq 'void') {
			return :err('Void type can be used only as a return type of function');
		} elsif (fun_name eq 'int') {
			return :err('int can''t have arguments: ' . args_size_str) unless args_size == 0;
			return :ok(tct::int());
		} elsif (fun_name eq 'string') {
			return :err('string can''t have arguments: ' . args_size_str) unless args_size == 0;
			return :ok(tct::string());
		} elsif (fun_name eq 'bool') {
			return :err('sim can''t have arguments: ' . args_size_str) unless args_size == 0;
			return :ok(tct::bool());
		}
	}
	return :err('''none'' type can be used only in ''var'' type') if fun_name eq 'none';
	return :err('expected one argument in ' . fun_name . ' function call') unless array::len(fun_val->args) == 1;
	var fun_arg : @nast::value_t = fun_val->args[0]->val;
	if (fun_name eq 'rec') {
		return :err('rec must have hash: ' . ov::get_element(fun_arg)) unless fun_arg->value is :hash_decl;
		try var ret = parse_hash(fun_arg);
		if (mod_name eq 'ptd') {
			return :ok(tct::rec(ret));
		} else {
			return :ok(tct::own_rec(ret));
		}
	} elsif (fun_name eq 'hash') {
		try var ret = ptd_parser::try_value_to_ptd(fun_arg);
		if (mod_name eq 'ptd') {
			return :ok(tct::hash(ret));
		} else {
			return :ok(tct::own_hash(ret));
		}
	} elsif (fun_name eq 'arr') {
		try var ret = ptd_parser::try_value_to_ptd(fun_arg);
		if (mod_name eq 'ptd') {
			return :ok(tct::arr(ret));
		} else {
			return :ok(tct::own_arr(ret));
		}
	} elsif (fun_name eq 'var') {
		return :err('var must have hash' . args_size_str) unless args_size == 1;
		return :err('var must have hash: ' . ov::get_element(fun_arg)) unless fun_arg->value is :hash_decl;
		var hash_decl = fun_arg->value as :hash_decl;
		var elems = {};
		fora var hash_elem (hash_decl) {
			if (hash_elem->val->value is :fun_val) {
				fun_val = hash_elem->val->value as :fun_val;
				if (fun_val->module eq 'ptd' && fun_val->name eq 'none') {
					hash::set_value(ref elems, hash_elem->key->value as :hash_key, tct::none());
					continue;
				}
			}
			try var ret = ptd_parser::try_value_to_ptd(hash_elem->val);
			hash::set_value(ref elems, hash_elem->key->value as :hash_key, ret);
		}
		if (mod_name eq 'ptd') {
			return :ok(tct::var(elems));
		} else {
			return :ok(tct::own_var(elems));
		}
	} else {
		return :err('it is not type function : ' . fun_name);
	}
}

def parse_hash(fun_arg : @nast::value_t) : ptd::var({ok => ptd::hash(@tct::meta_type), err => ptd::string()}) {
	var hash_decl = fun_arg->value as :hash_decl;
	var elems = {};
	fora var hash_elem (hash_decl) {
		try var ret = ptd_parser::try_value_to_ptd(hash_elem->val);
		hash::set_value(ref elems, hash_elem->key->value as :hash_key, ret);
	}
	return :ok(elems);
}

