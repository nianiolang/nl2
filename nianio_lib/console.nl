###
# (c) Atinea Sp. z o.o.
###

use ptd;
use string;
use c_olympic_io;

def console::println(str : ptd::string()) : ptd::void() {
	c_olympic_io::print(str . string::lf());
}

def console::print(str : ptd::string()) : ptd::void() {
	c_olympic_io::print(str);
}

def console::readln() : ptd::string() {
	return c_olympic_io::readln();
}

def console::read_int() : ptd::int() {
	return c_olympic_io::read_int();
}
