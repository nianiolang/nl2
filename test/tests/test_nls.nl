###
# (c) Atinea Sp. z o.o.
###
use c_fe_lib;
use c_olympic_io;
use string;
use ptd;

def test_nls::main(args) {
	c_fe_lib::print('c_fe_lib::print');
	var n = c_olympic_io::read_int();
	c_olympic_io::print('c_olympic_io::read_int=' . n . string::lf());
}
