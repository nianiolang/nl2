use own;
use ptd;

def language_tour::result_t() {
	return ptd::var({
		ok => ptd::int(),
		err => ptd::string(),
	});
}

def language_tour::counter_t() {
	return own::rec({value => ptd::int()});
}

def add(ref counter : @language_tour::counter_t, value : ptd::int()) : ptd::void() {
	counter->value += value;
}

def language_tour::sum_nonnegative(numbers : ptd::arr(ptd::int()))
	: @language_tour::result_t {
	var counter : @language_tour::counter_t = {value => 0};
	fora var number (numbers) {
		return :err('negative number') if number < 0;
		add(ref counter, number);
	}
	return :ok(counter->value);
}

def language_tour::double_sum(numbers : ptd::arr(ptd::int()))
	: @language_tour::result_t {
	try var total = language_tour::sum_nonnegative(numbers);
	return :ok(total * 2);
}

def language_tour::value_or_zero(result : @language_tour::result_t) : ptd::int() {
	match (result) case :ok(var value) {
		return value;
	} case :err(var message) {
		message;
		return 0;
	}
}
