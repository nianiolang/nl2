###
# (c) Atinea Sp. z o.o.
###


use test_forh;
use test_hash_oper;
use test_mod;
use test_op;
use test_pub;
use test_ref;
use test_str;
use test_type;
use test_fun;
use test_ensure;
use test_own_rec;
use test_own_arr;
use test_own_var;
use test_own_hash;
use test_own_to_im;
use nl;
use string;

def p(arg) {
	nl::print('Test ' . arg . string::lf());
}

def test_nl::test() {
	test_nl::test_compile_and_run();
}

def test_nl::test_only_compile() {
	#TODO remove when all test run correctly
	p('function');
	test_fun::test();
}

def test_nl::test_compile_and_run() {
	p('op');
	test_op::test();
	p('pub');
	test_pub::test();
	p('ref');
	test_ref::test();
	p('test_own_rec');
	test_own_rec::test();
	p('test_own_arr');
	test_own_rec::test();
	p('test_own_var');
	test_own_var::test();
	p('test_own_hash');
	test_own_hash::test();
	p('test_own_to_im');
	test_own_to_im::test();
	p('str');
	test_str::test();
	p('forh');
	test_forh::test();
	p('test_hash_oper');
	test_hash_oper::test();
	p('ensure');
	test_ensure::test();
	p('type');
	test_type::test();
	p('mod');
	test_mod::test();
}
