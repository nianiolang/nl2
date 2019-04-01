###
# (c) Atinea Sp. z o.o.
###


use func;
use ptd;
use nassert;

def test_fun::change(ref a, b, ref c) {
	a += 10;
	b += 20;
	c = 20;
	return a if (a < 10);
	return c;
}

def test_fun::change_int(ref x : ptd::int(), y) : ptd::int() {
	x++;
	y++;
	return x + y;
}

def test_fun::change_bool(ref x : ptd::bool(), y) : ptd::bool() {
	x = !x;
	y = true;
	return x && y;
}


def test_fun::test() {
	var arg = [1, 3, -4];
	var res;
	func::exec(@test_fun::change, arg);
	nassert::a(arg[0], 1);
	nassert::a(arg[1], 3);
	nassert::a(arg[2], -4);
	func::exec_ref(@test_fun::change, ref arg);
	nassert::a(arg[0], 11);
	nassert::a(arg[1], 3);
	nassert::a(arg[2], 20);

	arg = [1, 1];
	res = func::exec_ref(@test_fun::change_int, ref arg);
	nassert::a(arg[0], 2);
	nassert::a(arg[1], 1);
	nassert::a(res, 4);
	res = func::exec(@test_fun::change_int, arg);
	nassert::a(arg[0], 2);
	nassert::a(arg[1], 1);
	nassert::a(res, 5);

	
	arg = [false, false];
	res = func::exec_ref(@test_fun::change_bool, ref arg);
	nassert::a(arg[0], true);
	nassert::a(arg[1], false);
	nassert::a(res, true);
	res = func::exec(@test_fun::change_bool, arg);
	nassert::a(arg[0], true);
	nassert::a(arg[1], false);
	nassert::a(res, false);
}
