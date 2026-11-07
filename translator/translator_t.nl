###
# (c) Atinea Sp. z o.o.
###


use nast;
use nlasm;
use own;
use ptd;
use tct;

def translator_t::function_logic_t() {
	return ptd::rec({
		registers => ptd::arr(@nlasm::reg_t),
		register => ptd::int(),
		register_to_clear => ptd::arr(ptd::bool()),
		variables => ptd::hash(@nlasm::reg_t),
		defined_types => ptd::hash(@tct::meta_type),
	});
}

def translator_t::loop() {
	return ptd::rec({label => @nlasm::label_t, logic => @translator_t::function_logic_t, used => ptd::bool()});
}

def translator_t::loop_label() {
	return ptd::rec({break => @translator_t::loop, continue => @translator_t::loop});
}

def translator_t::state_t() {
	return own::rec({
			label_nr => ptd::int(),
			debug => @nlasm::debug_t,
			logic => @translator_t::function_logic_t,
			module_name => ptd::string(),
			result => @nlasm::function_t,
			loop_label => @translator_t::loop_label
		});
}

def translator_t::string_t() {
	return ptd::rec({arr => ptd::arr(ptd::string()), last => ptd::var({end => ptd::none(), new_line => ptd::none()})});
}

def translator_t::lvalue_values_t() {
	return ptd::arr(ptd::var({
			value => @nlasm::reg_t,
			index => ptd::rec({value => @nlasm::reg_t, index => @nlasm::reg_t}),
			key => ptd::rec({value => @nlasm::reg_t, key => ptd::string()}),
			use_field => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, field_name => ptd::string()}),
			use_index => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, index => @nlasm::reg_t}),
			as => ptd::rec({value => @nlasm::reg_t, label => ptd::string()}),
			use_variant => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, label => ptd::string()}),
			hashkey => ptd::rec({value => @nlasm::reg_t, key => @nlasm::reg_t}),
			use_hash_index => ptd::rec({src_reg => @nlasm::reg_t, dest_reg => @nlasm::reg_t, index => @nlasm::reg_t}),
		}));
}

def translator_t::struct_of_lvalue_t() {
	return ptd::arr(ptd::var({
		index => @nast::value_t,
		use_index => ptd::rec({
			dest_type => @tct::meta_type,
			index => @nast::value_t,
		}),
		key => ptd::string(),
		use_field => ptd::rec({
			dest_type => @tct::meta_type,
			field_name => ptd::string(),
		}),
		hashkey => @nast::value_t,
		use_hash_index => ptd::rec({
			dest_type => @tct::meta_type,
			index => @nast::value_t,
		}),
		as => ptd::string(),
		use_variant => ptd::rec({
			dest_type => @tct::meta_type,
			label => ptd::string(),
		}),
	}));
}
