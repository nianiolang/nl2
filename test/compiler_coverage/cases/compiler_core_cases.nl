###
# Compiler-core coverage cases. Every exercised command is translated from NL.
###


use boolean_t;
use own;
use ptd;
use singleton;

def compiler_core_cases::own_arr_t() {
	return own::arr(ptd::int());
}

def compiler_core_cases::own_hash_t() {
	return own::hash(ptd::int());
}

def compiler_core_cases::own_rec_t() {
	return own::rec({number => ptd::int()});
}

def compiler_core_cases::own_var_t() {
	return own::var({
		none => ptd::none(),
		number => ptd::int(),
		record => @compiler_core_cases::own_rec_t,
	});
}

def compiler_core_cases::result_t() {
	return ptd::var({ok => ptd::int(), err => ptd::string()});
}

def compiler_core_cases::mixed_array_t() {
	return ptd::arr(@compiler_core_cases::own_rec_t);
}

def compiler_core_cases::mixed_hash_t() {
	return ptd::hash(@compiler_core_cases::own_rec_t);
}

def compiler_core_cases::mixed_record_t() {
	return ptd::rec({record => @compiler_core_cases::own_rec_t});
}

def compiler_core_cases::mixed_variant_t() {
	return ptd::var({record => @compiler_core_cases::own_rec_t});
}

def compiler_core_cases::static_inner_t() {
	return ptd::rec({number => ptd::int()});
}

def compiler_core_cases::static_outer_t() {
	return ptd::rec({inner => @compiler_core_cases::static_inner_t});
}

def compiler_core_cases::shared_descriptor_t() {
	return ptd::rec({shared => ptd::bool()});
}

def compiler_core_cases::unused_descriptor_t() {
	return ptd::rec({unused => @compiler_core_cases::shared_descriptor_t});
}

def compiler_core_cases::runtime_descriptor_t() {
	return ptd::rec({runtime => ptd::bool()});
}

def compiler_core_cases::static_type_identity(value : @compiler_core_cases::static_outer_t)
		: @compiler_core_cases::static_outer_t {
	return value;
}

def compiler_core_cases::shared_type_identity(value : @compiler_core_cases::shared_descriptor_t)
		: @compiler_core_cases::shared_descriptor_t {
	return value;
}

def compiler_core_cases::runtime_descriptor_value(value : @compiler_core_cases::runtime_descriptor_t) {
	compiler_core_cases::runtime_descriptor_t();
	return value;
}

def compiler_core_cases::typed_void_fallthrough() : ptd::void() {
}

def compiler_core_cases::native_bool(value : @boolean_t::type) : @boolean_t::type {
	var copy : @boolean_t::type = value;
	return copy;
}

def compiler_core_cases::sigleton_do_not_use_without_approval(data) {
	return data;
}

def compiler_core_cases::local_singleton_name() {
	return compiler_core_cases::sigleton_do_not_use_without_approval([]);
}

def compiler_core_cases::singleton_then_empty_return() {
	singleton::sigleton_do_not_use_without_approval([]);
	return;
}

def compiler_core_cases::singleton_then_command() {
	var value = singleton::sigleton_do_not_use_without_approval([]);
	value = [];
	return value;
}

def compiler_core_cases::zero_arg_terminal_function() {
	die;
}

def compiler_core_cases::loop_break_shapes(array : ptd::arr(ptd::int()), dictionary : ptd::hash(ptd::int()),
		condition : ptd::bool(), result : @compiler_core_cases::result_t) {
	loop {
		fora var item (array) {
		}
		break;
	}
	loop {
		loop {
			break;
		}
		break;
	}
	loop {
		rep var i (1) {
		}
		break;
	}
	loop {
		forh var key, var value (dictionary) {
		}
		break;
	}
	loop {
		while (condition) {
			break;
		}
		break;
	}
	loop {
		for (; condition; ) {
			break;
		}
		break;
	}
	loop {
		if (condition) {
		} elsif (condition) {
			break;
		}
	}
	loop {
		match (result) case :ok(var value) {
		} case :err(var error) {
			break;
		}
	}
	for (;;) {
		break;
	}
}

def compiler_core_cases::conditionless_for_without_break() {
	for (;;) {
	}
}

def compiler_core_cases::try_loop_shapes() : @compiler_core_cases::result_t {
	loop {
		try :ok(1);
		break;
	}
	loop {
		ensure :ok(1);
		break;
	}
	return :ok(0);
}

def compiler_core_cases::terminal_loop_shape() {
	loop {
		die;
	}
}

def compiler_core_cases::own_loop_shapes(ref array : @compiler_core_cases::own_arr_t,
		ref dictionary : @compiler_core_cases::own_hash_t) {
	fora var item (array) {
		array []= item;
		continue;
	}
	var count = 0;
	++count fora var item (array);
	forh var key, ref value (dictionary) {
		continue;
	}
	++count forh var key, ref value (dictionary);
}

def compiler_core_cases::operator_shapes(condition : ptd::bool(), number : ptd::int()) {
	number--;
	!condition;
	@compiler_core_cases::typed_void_fallthrough;
	condition || false;
	condition && true;
}

def compiler_core_cases::own_match(ref value : @compiler_core_cases::own_var_t) {
	match (value) case :none {
	} case :number(ref number) {
		number;
	} case :record(ref record) {
		record->number;
	}
}

def make_result(value : ptd::int()) : @compiler_core_cases::result_t {
	return :ok(value);
}

def compiler_core_cases::try_lvalue(ref record : @compiler_core_cases::own_rec_t)
		: @compiler_core_cases::result_t {
	try record->number = make_result(1);
	return :ok(record->number);
}

def compiler_core_cases::mixed_own_reads(array : @compiler_core_cases::mixed_array_t,
		hash : @compiler_core_cases::mixed_hash_t, record : @compiler_core_cases::mixed_record_t,
		variant : @compiler_core_cases::mixed_variant_t) {
	array[0]->number;
	hash{'record'}->number;
	record->record->number;
	(variant as :record)->number;
}

def compiler_core_cases::dynamic_variant_write(variant : ptd::ptd_im()) {
	(variant as :record)->number = 1;
}

def compiler_core_cases::alias_refs(ref first : ptd::int(), ref second : ptd::int()) {
	first = 1;
	second = 2;
}

def compiler_core_cases::integer_ref(ref value : ptd::int()) {
	++value;
}

def compiler_core_cases::remaining_expression_shapes() {
	var number : ptd::int() = 0;
	compiler_core_cases::alias_refs(ref number, ref number);
	var record : ptd::rec({number => ptd::int()}) = {number => 0};
	compiler_core_cases::integer_ref(ref record->number);
	var unresolved;
	var left = 0;
	var right = 0;
	left = right = 1;
	var trailing_newline = 'coverage
		;
	return [left, right, trailing_newline];
}
