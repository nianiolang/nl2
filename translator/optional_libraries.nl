###
# (c) Atinea Sp. z o.o.
###

use ptd;
use nl;
use array;
use c_olympic_io;

def optional_libraries::c_olympic_io(key : ptd::string(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) 
		: ptd::var({ ok => ptd::string(), err => ptd::string() }) {
	var error_message = :err('incorrect command');
	if (key eq 'c_olympic_io::print') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		c_olympic_io::print(args[0]);
	} elsif (key eq 'c_olympic_io::readln') {
		return error_message unless array::len(args) == 0;
		ret_val = c_olympic_io::readln();
	} elsif (key eq 'c_olympic_io::read_int') {
		return error_message unless array::len(args) == 0;
		ret_val = c_olympic_io::read_int();
	} else {
		die;
	}
	return :ok('');
}
