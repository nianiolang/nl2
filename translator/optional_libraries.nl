###
# (c) Atinea Sp. z o.o.
###

use ptd;
use nl;
use array;
use string_utils;
use c_olympic_io;
use c_fe_lib;

def optional_libraries::c_olympic_io(key : ptd::string(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) 
		: ptd::var({ ok => ptd::string(), err => ptd::string() }) {
	var error_message = :err('incorrect command');
# c_olympic_io BEGIN
	if (key eq 'c_olympic_io::print') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		c_olympic_io::print(args[0]);
		return :ok('');
	} elsif (key eq 'c_olympic_io::readln') {
		return error_message unless array::len(args) == 0;
		ret_val = c_olympic_io::readln();
		return :ok('');
	} elsif (key eq 'c_olympic_io::read_int') {
		return error_message unless array::len(args) == 0;
		ret_val = c_olympic_io::read_int();
		return :ok('');
	} elsif (key eq 'c_olympic_io::read_char') {
		return error_message unless array::len(args) == 0;
		ret_val = c_olympic_io::read_char();
		return :ok('');
	}
# c_olympic_io END
	return error_message;
}

def optional_libraries::c_fe_lib(key : ptd::string(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) 
		: ptd::var({ ok => ptd::string(), err => ptd::string() }) {
	var error_message = :err('incorrect command');
# c_fe_lib BEGIN
	if (key eq 'c_fe_lib::print') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		c_fe_lib::print(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::file_to_string') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		ret_val = c_fe_lib::file_to_string(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::string_to_file') {
		return error_message unless array::len(args) == 2 && nl::is_sim(args[0]) && nl::is_sim(args[1]);
		ret_val = c_fe_lib::string_to_file(args[0], args[1]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::get_file_size') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		ret_val = c_fe_lib::get_file_size(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::get_modif_time') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		ret_val = c_fe_lib::get_modif_time(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::get_module_files') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		ret_val = c_fe_lib::get_module_files(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::get_module_files_rec') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		ret_val = c_fe_lib::get_module_files_rec(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::mk_path') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		ret_val = c_fe_lib::mk_path(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::get_time') {
		return error_message unless array::len(args) == 0;
		ret_val = c_fe_lib::get_time();
		return :ok('');
	} elsif (key eq 'c_fe_lib::get_pid') {
		return error_message unless array::len(args) == 0;
		ret_val = c_fe_lib::get_pid();
		return :ok('');
	} elsif (key eq 'c_fe_lib::time') {
		return error_message unless array::len(args) == 0;
		ret_val = c_fe_lib::time();
		return :ok('');
	} elsif (key eq 'c_fe_lib::localtime') {
		return error_message unless array::len(args) == 1 && string_utils::is_number(args[0]);
		ret_val = c_fe_lib::localtime(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::sleep') {
		return error_message unless array::len(args) == 1 && string_utils::is_number(args[0]);
		ret_val = c_fe_lib::sleep(args[0]);
		return :ok('');
	} elsif (key eq 'c_fe_lib::exec_cmd') {
		return error_message unless array::len(args) == 1 && nl::is_sim(args[0]);
		ret_val = c_fe_lib::exec_cmd(args[0]);
		return :ok('');
	}
# c_fe_lib END
	return error_message;
}
