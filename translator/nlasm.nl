###
# (c) Atinea Sp. z o.o.
###


use ptd;
use nast;
use tct;
use boolean_t;

def nlasm::result_t() {
	return ptd::rec({
			module_name => ptd::string(),
			functions => ptd::arr(@nlasm::function_t),
			imports => ptd::arr(ptd::string())
		});
}

def nlasm::access_t() {
	return ptd::var({pub => ptd::none(), priv => ptd::none()});
}

def nlasm::arg_type_t() {
	return ptd::rec({
			by => ptd::var({val => ptd::none(), ref => ptd::none()}),
			register => @nlasm::reg_t,
			type => ptd::var({none => ptd::none(), type => @tct::meta_type})
		});
}

def nlasm::function_t() {
	return ptd::rec({
			annotation => ptd::var({none => ptd::none(), math => ptd::none(), state => ptd::none()}),
			access => @nlasm::access_t,
			registers => ptd::arr(@nlasm::reg_t),
			args_type => @nlasm::args_type,
			ret_type => @tct::meta_type,
			commands => @nlasm::cmds_t,
			name => ptd::string(),
			defines_type => ptd::var({no => ptd::none(), yes => @tct::meta_type}),
			variables => ptd::arr(@nlasm::var_decl_t),
		});
}

def nlasm::cmds_t() {
	return ptd::arr(@nlasm::cmd_t);
}

def nlasm::args_type() {
	return ptd::arr(@nlasm::arg_type_t);
}

def nlasm::reg_t() {
	return ptd::rec({
		type => @nlasm::reg_type,
		reg_no => ptd::int(),
		access_type => @nlasm::reg_access_type_t,
	});
}

def nlasm::debug_t() {
	return ptd::rec({nast_debug => @nast::debug_t, instruction_nr => ptd::int(), declarations => ptd::hash(@nlasm::reg_t)});
}

def nlasm::empty_debug() : @nlasm::debug_t {
	return {nast_debug => nast::empty_debug(), instruction_nr => 0, declarations => {}};
}

def nlasm::cmd_t() {
	return ptd::rec({
			debug => @nlasm::debug_t,
			annotation => @nlasm::annotation_t,
			cmd => @nlasm::order_t,
		});
}

def nlasm::annotation_t() {
	return ptd::var({none => ptd::none(), const => ptd::arr(@nlasm::reg_t)});
}

def nlasm::order_t() {
	return ptd::var({
			arr_decl => ptd::rec({dest => @nlasm::reg_t, src => ptd::arr(@nlasm::reg_t)}),
			hash_decl => @nlasm::hash_decl_t,
			func => ptd::rec({dest => @nlasm::reg_t, module => ptd::string(), name => ptd::string()}),
			call => @nlasm::call_t,
			una_op => @nlasm::una_op_t,
			bin_op => @nlasm::bin_op,
			ov_is => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, type => ptd::string(), label_no => ptd::int()}),
			ov_as => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, type => ptd::string(), label_no => ptd::int()}),
			return => @nlasm::return,
			die => @nlasm::reg_t,
			move => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t}),
			load_const => ptd::rec({dest => @nlasm::reg_t, val => ptd::ptd_im()}),
			get_frm_idx => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, idx => @nlasm::reg_t}),
			set_at_idx => ptd::rec({src => @nlasm::reg_t, idx => @nlasm::reg_t, val => @nlasm::reg_t}),
			array_push => ptd::rec({dest => @nlasm::reg_t, val => @nlasm::reg_t}),
			array_len => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t}),
			get_val => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, key => ptd::string()}),
			set_val => ptd::rec({src => @nlasm::reg_t, key => ptd::string(), val => @nlasm::reg_t}),
			ov_mk => @nlasm::ov_mk_t,
			prt_lbl => @nlasm::label_t,
			if_goto => ptd::rec({dest => @nlasm::label_t, src => @nlasm::reg_t}),
			goto => @nlasm::label_t,
			clear => @nlasm::reg_t,
			var_decl => @nlasm::var_decl_t,
			use_field => @nlasm::use_field_t,
			release_field => @nlasm::release_field_t,
			use_index => @nlasm::use_index_t,
			release_index => @nlasm::release_index_t,
			use_hash_index => @nlasm::use_hash_index_t,
			release_hash_index => @nlasm::release_hash_index_t,
			use_variant => @nlasm::use_variant_t,
			release_variant => @nlasm::release_variant_t,
			hash_init_iter => @nlasm::hash_iter_t,
			hash_next_iter => @nlasm::hash_iter_t,
			hash_get_key_iter => @nlasm::hash_dest_iter_t,
			hash_is_end => @nlasm::hash_dest_iter_t,
		});
}

def nlasm::var_decl_t() {
	return ptd::rec({
		type => @tct::meta_type,
		register => @nlasm::reg_t
	});
}

def nlasm::use_field_t() {
	return ptd::rec({
		new_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		field_name => ptd::string(),
	});
}

def nlasm::release_field_t() {
	return ptd::rec({
		current_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		field_name => ptd::string(),
	});
}

def nlasm::use_index_t() {
	return ptd::rec({
		new_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		index => @nlasm::reg_t,
	});
}

def nlasm::release_index_t() {
	return ptd::rec({
		current_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		index => @nlasm::reg_t,
	});
}

def nlasm::use_hash_index_t() {
	return ptd::rec({
		new_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		index => @nlasm::reg_t,
		create_if_not_exist => @boolean_t::type,
	});
}

def nlasm::release_hash_index_t() {
	return ptd::rec({
		current_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		index => @nlasm::reg_t,
	});
}

def nlasm::use_variant_t() {
	return ptd::rec({
		new_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		label => ptd::string(),
		label_no => ptd::int(),
	});
}

def nlasm::release_variant_t() {
	return ptd::rec({
		current_owner => @nlasm::reg_t,
		old_owner => @nlasm::reg_t,
		label => ptd::string(),
		label_no => ptd::int(),
	});
}

def nlasm::hash_decl_t() {
	return ptd::rec({
		dest => @nlasm::reg_t,
		src => ptd::arr(ptd::rec({key => ptd::string(), val => @nlasm::reg_t}))
	});
}

def nlasm::hash_iter_t() {
	return ptd::rec({
		iter => @nlasm::reg_t,
		hash => @nlasm::reg_t
	});
}

def nlasm::hash_dest_iter_t() {
	return ptd::rec({
		dest => @nlasm::reg_t,
		iter => @nlasm::reg_t,
		hash => @nlasm::reg_t
	});
}

def nlasm::label_t() {
	return ptd::int();
}

def nlasm::una_op_t() {
	return ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, op => ptd::string()});
}

def nlasm::bin_op() {
	return ptd::rec({dest => @nlasm::reg_t, left => @nlasm::reg_t, right => @nlasm::reg_t, op => ptd::string()});
}

def nlasm::return() {
	return ptd::var({val => @nlasm::reg_t, emp => ptd::none()});
}

def nlasm::ov_mk_t() {
	return ptd::rec({
			dest => @nlasm::reg_t,
			src => ptd::var({arg => @nlasm::reg_t, emp => ptd::none()}),
			label => ptd::string(),
			label_no => ptd::int(),
			inner_type => @tct::meta_type,
		});
}

def nlasm::call_t() {
	return ptd::rec({
			dest => @nlasm::reg_t,
			mod => ptd::string(),
			fun_name => ptd::string(),
			args => ptd::arr(ptd::var({val => @nlasm::reg_t, ref => @nlasm::reg_t}))
		});
}

def nlasm::reg_type() {
	return ptd::var({
		im => ptd::none(),
		int => ptd::none(),
		string => ptd::none(),
		bool => ptd::none(),
		rec => @tct::meta_type,
		arr => @tct::meta_type,
		variant => @tct::meta_type,
		hash => @tct::meta_type,
	});
}

def nlasm::reg_access_type_t() {
	return ptd::var({
		value => ptd::none(),
		reference => ptd::none(),
	});
}

def nlasm::is_empty(reg : @nlasm::reg_t) {
	return reg->reg_no == -1;
}

def nlasm::eq_reg(reg1 : @nlasm::reg_t, reg2 : @nlasm::reg_t) : @boolean_t::type {
	return reg1->reg_no == reg2->reg_no;
}

def nlasm::eq_reg_type(reg1 : @nlasm::reg_type, reg2 : @nlasm::reg_type) : @boolean_t::type {
	match (reg1) case :im {
		return reg2 is :im || reg2 is :string;
	} case :int {
		return reg2 is :int;
	} case :bool {
		return reg2 is :bool;
	} case :string {
		return reg2 is :string || reg2 is :im;
	} case :rec(var type) {
		return reg2 is :rec;
	} case :arr(var type) {
		return reg2 is :arr;
	} case :variant(var type) {
		return reg2 is :variant;
	} case :hash (var type) {
		return reg2 is :hash;
	}
}

