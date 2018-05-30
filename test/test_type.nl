###
# (c) Atinea Sp. z o.o.
###


use ptd;
use array;
use hash;
use boolean_t;

def test_type::test() {
	var a : @test_type::typ2 = funkcja(:a('nothing'));
	var b : @test_type::typ3 = 'a';
	var c = {a => []};
	array::push(ref c->a, a);
	hash::set_value(ref c, 'a', [a]);
	var d;
	d = :a('nic');
	var e = {g => ''};
	if (true) {
		e->h = '';
	} else {
		e->h = 's';
	}
	if (false) {
		d = :a('nic');
	} else {
		d = :d(e);
	}
	if (true) {
		d = :b({a => 'ss', c => 'ff'});
	} else {
		die;
	}
	funkcja(d);
}

def cos() : @test_type::typ2 {
	return '';
}

def f(a : @test_type::rekord) : ptd::rec({g => ptd::string(), h => @test_type::typ2}) {
	var b = a;
	b->h = cos();
	return b;
}

def test_type::typ1() {
	return ptd::var({g => @test_type::typ2, h => ptd::string()});
}

def test_type::typ2() {
	return ptd::string();
}

def test_type::typ3() {
	return ptd::string();
}

def test_type::rekord() {
	return ptd::rec({g => ptd::string(), h => ptd::string()});
}

def test_is(arg) : @boolean_t::type {
	return arg is :h;
}

def funkcja(a : ptd::var({a => ptd::string(), b => ptd::rec({a => ptd::string(), c => ptd::string()}), d => @test_type::rekord})) 
	: @test_type::typ2 {
	var ret = '';
	var emp : @test_type::rekord;
	match (a) case :a(var t) {
		return '';
	} case :b(var b_param) {
		ret = '';
		return ret;
	} case :d(var dd) {
		var cop = dd;
		emp = cop;
		emp = a as :d;
		cop->g = '';
		die;
	}
}

