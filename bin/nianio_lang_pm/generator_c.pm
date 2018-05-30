use c_rt_lib;
use ptd;
use nlasm;
use string;
use array;
use hash;
use ov;
use singleton;
use nl;
use boolean_t;
use string_utils;
sub generator_c_priv::get_bin_ops;
sub generator_c_priv::get_bin_ops_mod;
sub generator_c_priv::get_unary_ops;
sub generator_c_priv::gen_unary_ops;
sub generator_c_priv::gen_bin_ops;
sub generator_c_priv::gen_bin_ops_mod;
sub generator_c::const_dict;
sub generator_c::fun_args_t;
sub generator_c::const_t;
sub generator_c::global_const_t;
sub generator_c::state_t;
sub generator_c::get_empty_state;
sub generator_c_priv::print;
sub generator_c_priv::print_to_header;
sub generator_c_priv::println_to_header;
sub generator_c_priv::arg_t;
sub generator_c_priv::println;
sub generator_c_priv::get_reg;
sub generator_c_priv::get_reg_ref;
sub generator_c_priv::get_string;
sub generator_c::module_out_t;
sub generator_c::out_t;
sub generator_c::generate;
sub generator_c_priv::generate_global_const_files;
sub generator_c_priv::get_include;
sub generator_c_priv::get_cr;
sub generator_c_priv::get_function_name;
sub generator_c_priv::get_function_header;
sub generator_c_priv::get_const;
sub generator_c_priv::insert_const_to_modules_hash;
sub generator_c_priv::get_global_const;
sub generator_c::clear_module_from_state;
sub generator_c_priv::get_const_sim;
sub generator_c_priv::get_const_singleton;
sub generator_c_priv::get_func_ptr_header;
sub generator_c_priv::print_mod;
sub generator_c_priv::print_init_const;
sub generator_c_priv::print_function_block;
sub generator_c_priv::is_singleton_use_function;
sub generator_c_priv::move_args_to_register;
sub generator_c_priv::move_register_to_ref_args;
sub generator_c_priv::get_fun_lib;
sub generator_c_priv::get_module_name;
sub generator_c_priv::get_fun_name;
sub generator_c_priv::get_lib_fun;
sub generator_c_priv::generate_imm;
sub generator_c_priv::get_func_pointer;
sub generator_c_priv::print_cmd;
sub generator_c_priv::get_assign;
sub generator_c_priv::generate_call;
sub generator_c_priv::create_sim;
sub generator_c_priv::create_sim_to_memory;

return 1;

sub generator_c_priv::__get_bin_ops() {
my $memory_0;my $memory_1;
#line 18
$memory_1 = generator_c_priv::gen_bin_ops();
#line 18
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_get_bin_ops;
sub generator_c_priv::get_bin_ops() {
	$_get_bin_ops = generator_c_priv::__get_bin_ops() unless defined $_get_bin_ops;
	return $_get_bin_ops;
}

sub generator_c_priv::__get_bin_ops_mod() {
my $memory_0;my $memory_1;
#line 22
$memory_1 = generator_c_priv::gen_bin_ops_mod();
#line 22
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 22
undef($memory_1);
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_get_bin_ops_mod;
sub generator_c_priv::get_bin_ops_mod() {
	$_get_bin_ops_mod = generator_c_priv::__get_bin_ops_mod() unless defined $_get_bin_ops_mod;
	return $_get_bin_ops_mod;
}

sub generator_c_priv::__get_unary_ops() {
my $memory_0;my $memory_1;
#line 26
$memory_1 = generator_c_priv::gen_unary_ops();
#line 26
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 26
undef($memory_1);
#line 26
return $memory_0;
#line 26
undef($memory_0);
#line 26
return;
}

my $_get_unary_ops;
sub generator_c_priv::get_unary_ops() {
	$_get_unary_ops = generator_c_priv::__get_unary_ops() unless defined $_get_unary_ops;
	return $_get_unary_ops;
}

sub generator_c_priv::__gen_unary_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 30
$memory_0 = {};
#line 31
$memory_1 = "!";
#line 31
$memory_2 = "not";
#line 31
hash::set_value($memory_0, $memory_1, $memory_2);
#line 31
undef($memory_2);
#line 31
undef($memory_1);
#line 32
$memory_1 = "-";
#line 32
$memory_2 = "unary_minus";
#line 32
hash::set_value($memory_0, $memory_1, $memory_2);
#line 32
undef($memory_2);
#line 32
undef($memory_1);
#line 33
$memory_1 = "+";
#line 33
$memory_2 = "unary_plus";
#line 33
hash::set_value($memory_0, $memory_1, $memory_2);
#line 33
undef($memory_2);
#line 33
undef($memory_1);
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_gen_unary_ops;
sub generator_c_priv::gen_unary_ops() {
	$_gen_unary_ops = generator_c_priv::__gen_unary_ops() unless defined $_gen_unary_ops;
	return $_gen_unary_ops;
}

sub generator_c_priv::__gen_bin_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 38
$memory_0 = {};
#line 39
$memory_1 = "eq";
#line 39
$memory_2 = "eq";
#line 39
hash::set_value($memory_0, $memory_1, $memory_2);
#line 39
undef($memory_2);
#line 39
undef($memory_1);
#line 40
$memory_1 = "ne";
#line 40
$memory_2 = "ne";
#line 40
hash::set_value($memory_0, $memory_1, $memory_2);
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 41
$memory_1 = "+";
#line 41
$memory_2 = "add";
#line 41
hash::set_value($memory_0, $memory_1, $memory_2);
#line 41
undef($memory_2);
#line 41
undef($memory_1);
#line 42
$memory_1 = "-";
#line 42
$memory_2 = "sub";
#line 42
hash::set_value($memory_0, $memory_1, $memory_2);
#line 42
undef($memory_2);
#line 42
undef($memory_1);
#line 43
$memory_1 = "*";
#line 43
$memory_2 = "mul";
#line 43
hash::set_value($memory_0, $memory_1, $memory_2);
#line 43
undef($memory_2);
#line 43
undef($memory_1);
#line 44
$memory_1 = "/";
#line 44
$memory_2 = "div";
#line 44
hash::set_value($memory_0, $memory_1, $memory_2);
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 45
$memory_1 = "%";
#line 45
$memory_2 = "mod";
#line 45
hash::set_value($memory_0, $memory_1, $memory_2);
#line 45
undef($memory_2);
#line 45
undef($memory_1);
#line 46
$memory_1 = "<=";
#line 46
$memory_2 = "le";
#line 46
hash::set_value($memory_0, $memory_1, $memory_2);
#line 46
undef($memory_2);
#line 46
undef($memory_1);
#line 47
$memory_1 = "<";
#line 47
$memory_2 = "lt";
#line 47
hash::set_value($memory_0, $memory_1, $memory_2);
#line 47
undef($memory_2);
#line 47
undef($memory_1);
#line 48
$memory_1 = "==";
#line 48
$memory_2 = "num_eq";
#line 48
hash::set_value($memory_0, $memory_1, $memory_2);
#line 48
undef($memory_2);
#line 48
undef($memory_1);
#line 49
$memory_1 = "!=";
#line 49
$memory_2 = "num_ne";
#line 49
hash::set_value($memory_0, $memory_1, $memory_2);
#line 49
undef($memory_2);
#line 49
undef($memory_1);
#line 50
$memory_1 = ">";
#line 50
$memory_2 = "gt";
#line 50
hash::set_value($memory_0, $memory_1, $memory_2);
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 51
$memory_1 = ">=";
#line 51
$memory_2 = "ge";
#line 51
hash::set_value($memory_0, $memory_1, $memory_2);
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 52
$memory_1 = ".";
#line 52
$memory_2 = "concat_new";
#line 52
hash::set_value($memory_0, $memory_1, $memory_2);
#line 52
undef($memory_2);
#line 52
undef($memory_1);
#line 53
return $memory_0;
#line 53
undef($memory_0);
#line 53
return;
}

my $_gen_bin_ops;
sub generator_c_priv::gen_bin_ops() {
	$_gen_bin_ops = generator_c_priv::__gen_bin_ops() unless defined $_gen_bin_ops;
	return $_gen_bin_ops;
}

sub generator_c_priv::__gen_bin_ops_mod() {
my $memory_0;my $memory_1;my $memory_2;
#line 57
$memory_0 = {};
#line 58
$memory_1 = "+";
#line 58
$memory_2 = "add_mod";
#line 58
hash::set_value($memory_0, $memory_1, $memory_2);
#line 58
undef($memory_2);
#line 58
undef($memory_1);
#line 59
$memory_1 = "-";
#line 59
$memory_2 = "sub_mod";
#line 59
hash::set_value($memory_0, $memory_1, $memory_2);
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 60
$memory_1 = "*";
#line 60
$memory_2 = "mul_mod";
#line 60
hash::set_value($memory_0, $memory_1, $memory_2);
#line 60
undef($memory_2);
#line 60
undef($memory_1);
#line 61
$memory_1 = "/";
#line 61
$memory_2 = "div_mod";
#line 61
hash::set_value($memory_0, $memory_1, $memory_2);
#line 61
undef($memory_2);
#line 61
undef($memory_1);
#line 62
$memory_1 = "%";
#line 62
$memory_2 = "mod_mod";
#line 62
hash::set_value($memory_0, $memory_1, $memory_2);
#line 62
undef($memory_2);
#line 62
undef($memory_1);
#line 63
$memory_1 = ".";
#line 63
$memory_2 = "concat_add";
#line 63
hash::set_value($memory_0, $memory_1, $memory_2);
#line 63
undef($memory_2);
#line 63
undef($memory_1);
#line 64
return $memory_0;
#line 64
undef($memory_0);
#line 64
return;
}

my $_gen_bin_ops_mod;
sub generator_c_priv::gen_bin_ops_mod() {
	$_gen_bin_ops_mod = generator_c_priv::__gen_bin_ops_mod() unless defined $_gen_bin_ops_mod;
	return $_gen_bin_ops_mod;
}

sub generator_c::__const_dict() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 68
$memory_3 = ptd::sim();
#line 68
$memory_2 = ptd::arr($memory_3);
#line 68
undef($memory_3);
#line 68
$memory_4 = ptd::sim();
#line 68
$memory_3 = ptd::hash($memory_4);
#line 68
undef($memory_4);
#line 68
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 68
undef($memory_2);
#line 68
undef($memory_3);
#line 68
$memory_0 = ptd::rec($memory_1);
#line 68
undef($memory_1);
#line 68
return $memory_0;
#line 68
undef($memory_0);
#line 68
return;
}

my $_const_dict;
sub generator_c::const_dict() {
	$_const_dict = generator_c::__const_dict() unless defined $_const_dict;
	return $_const_dict;
}

sub generator_c::__fun_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 72
$memory_3 = ptd::none();
#line 72
$memory_4 = ptd::none();
#line 72
$memory_2 = {val => $memory_3,ref => $memory_4,};
#line 72
undef($memory_3);
#line 72
undef($memory_4);
#line 72
$memory_1 = ptd::var($memory_2);
#line 72
undef($memory_2);
#line 72
$memory_0 = ptd::arr($memory_1);
#line 72
undef($memory_1);
#line 72
return $memory_0;
#line 72
undef($memory_0);
#line 72
return;
}

my $_fun_args_t;
sub generator_c::fun_args_t() {
	$_fun_args_t = generator_c::__fun_args_t() unless defined $_fun_args_t;
	return $_fun_args_t;
}

sub generator_c::__const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 76
$memory_3 = ptd::sim();
#line 76
$memory_2 = ptd::arr($memory_3);
#line 76
undef($memory_3);
#line 76
$memory_4 = ptd::sim();
#line 76
$memory_3 = ptd::hash($memory_4);
#line 76
undef($memory_4);
#line 76
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 76
undef($memory_2);
#line 76
undef($memory_3);
#line 76
$memory_0 = ptd::rec($memory_1);
#line 76
undef($memory_1);
#line 76
return $memory_0;
#line 76
undef($memory_0);
#line 76
return;
}

my $_const_t;
sub generator_c::const_t() {
	$_const_t = generator_c::__const_t() unless defined $_const_t;
	return $_const_t;
}

sub generator_c::__global_const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 81
$memory_5 = ptd::sim();
#line 81
$memory_6 = ptd::sim();
#line 81
$memory_4 = {key => $memory_5,uses => $memory_6,};
#line 81
undef($memory_5);
#line 81
undef($memory_6);
#line 81
$memory_3 = ptd::rec($memory_4);
#line 81
undef($memory_4);
#line 81
$memory_2 = ptd::arr($memory_3);
#line 81
undef($memory_3);
#line 82
$memory_4 = ptd::sim();
#line 82
$memory_3 = ptd::hash($memory_4);
#line 82
undef($memory_4);
#line 83
$memory_5 = ptd::sim();
#line 83
$memory_4 = ptd::arr($memory_5);
#line 83
undef($memory_5);
#line 84
$memory_7 = ptd::sim();
#line 84
$memory_6 = ptd::hash($memory_7);
#line 84
undef($memory_7);
#line 84
$memory_5 = ptd::hash($memory_6);
#line 84
undef($memory_6);
#line 84
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 84
undef($memory_2);
#line 84
undef($memory_3);
#line 84
undef($memory_4);
#line 84
undef($memory_5);
#line 84
$memory_0 = ptd::rec($memory_1);
#line 84
undef($memory_1);
#line 84
return $memory_0;
#line 84
undef($memory_0);
#line 84
return;
}

my $_global_const_t;
sub generator_c::global_const_t() {
	$_global_const_t = generator_c::__global_const_t() unless defined $_global_const_t;
	return $_global_const_t;
}

sub generator_c::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;
#line 90
$memory_2 = {
	module => "generator_c",
	name => "global_const_t",
};
#line 90
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 91
$memory_3 = ptd::sim();
#line 92
$memory_4 = ptd::sim();
#line 93
$memory_6 = {
	module => "boolean_t",
	name => "type",
};
#line 93
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 93
$memory_5 = ptd::hash($memory_6);
#line 93
undef($memory_6);
#line 94
$memory_6 = ptd::sim();
#line 95
$memory_7 = {
	module => "generator_c",
	name => "fun_args_t",
};
#line 95
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 97
$memory_10 = {
	module => "generator_c",
	name => "const_t",
};
#line 97
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 98
$memory_11 = {
	module => "generator_c",
	name => "const_t",
};
#line 98
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 99
$memory_12 = ptd::sim();
#line 99
$memory_9 = {sim => $memory_10,singleton => $memory_11,dynamic_nr => $memory_12,};
#line 99
undef($memory_10);
#line 99
undef($memory_11);
#line 99
undef($memory_12);
#line 99
$memory_8 = ptd::rec($memory_9);
#line 99
undef($memory_9);
#line 99
$memory_1 = {global_const => $memory_2,header => $memory_3,ret => $memory_4,additional_imports => $memory_5,mod_name => $memory_6,fun_args => $memory_7,const => $memory_8,};
#line 99
undef($memory_2);
#line 99
undef($memory_3);
#line 99
undef($memory_4);
#line 99
undef($memory_5);
#line 99
undef($memory_6);
#line 99
undef($memory_7);
#line 99
undef($memory_8);
#line 99
$memory_0 = ptd::rec($memory_1);
#line 99
undef($memory_1);
#line 99
return $memory_0;
#line 99
undef($memory_0);
#line 99
return;
}

my $_state_t;
sub generator_c::state_t() {
	$_state_t = generator_c::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub generator_c::__get_empty_state() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 106
$memory_2 = [];
#line 106
$memory_3 = {};
#line 106
$memory_4 = [];
#line 106
$memory_5 = {};
#line 106
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 106
undef($memory_2);
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 106
undef($memory_5);
#line 107
$memory_2 = "";
#line 108
$memory_3 = "";
#line 109
$memory_4 = [];
#line 110
$memory_6 = 0;
#line 110
$memory_8 = [];
#line 110
$memory_9 = {};
#line 110
$memory_7 = {arr => $memory_8,hash => $memory_9,};
#line 110
undef($memory_8);
#line 110
undef($memory_9);
#line 110
$memory_9 = [];
#line 110
$memory_10 = {};
#line 110
$memory_8 = {arr => $memory_9,hash => $memory_10,};
#line 110
undef($memory_9);
#line 110
undef($memory_10);
#line 110
$memory_5 = {dynamic_nr => $memory_6,sim => $memory_7,singleton => $memory_8,};
#line 110
undef($memory_6);
#line 110
undef($memory_7);
#line 110
undef($memory_8);
#line 111
$memory_6 = "";
#line 112
$memory_7 = {};
#line 112
$memory_0 = {global_const => $memory_1,ret => $memory_2,header => $memory_3,fun_args => $memory_4,const => $memory_5,mod_name => $memory_6,additional_imports => $memory_7,};
#line 112
undef($memory_1);
#line 112
undef($memory_2);
#line 112
undef($memory_3);
#line 112
undef($memory_4);
#line 112
undef($memory_5);
#line 112
undef($memory_6);
#line 112
undef($memory_7);
#line 112
return $memory_0;
#line 112
undef($memory_0);
#line 112
return;
}

my $_get_empty_state;
sub generator_c::get_empty_state() {
	$_get_empty_state = generator_c::__get_empty_state() unless defined $_get_empty_state;
	return $_get_empty_state;
}

sub generator_c_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 117
$memory_2 = "ret";
#line 117
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 117
$memory_2 = $memory_2 . $memory_1;
#line 117
$memory_3 = "ret";
#line 117
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 117
undef($memory_3);
#line 117
undef($memory_2);
#line 117
undef($memory_1);
#line 117
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 121
$memory_2 = "header";
#line 121
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 121
$memory_2 = $memory_2 . $memory_1;
#line 121
$memory_3 = "header";
#line 121
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 121
undef($memory_3);
#line 121
undef($memory_2);
#line 121
undef($memory_1);
#line 121
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::println_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 125
$memory_2 = string::lf();
#line 125
$memory_2 = $memory_1 . $memory_2;
#line 125
$memory_3 = "header";
#line 125
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 125
$memory_3 = $memory_3 . $memory_2;
#line 125
$memory_4 = "header";
#line 125
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 125
undef($memory_4);
#line 125
undef($memory_2);
#line 125
undef($memory_3);
#line 125
undef($memory_1);
#line 125
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::__arg_t() {
my $memory_0;
#line 129
$memory_0 = "ImmT ";
#line 129
return $memory_0;
#line 129
undef($memory_0);
#line 129
return;
}

my $_arg_t;
sub generator_c_priv::arg_t() {
	$_arg_t = generator_c_priv::__arg_t() unless defined $_arg_t;
	return $_arg_t;
}

sub generator_c_priv::println($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 133
$memory_2 = "ret";
#line 133
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 133
$memory_2 = $memory_2 . $memory_1;
#line 133
$memory_3 = "ret";
#line 133
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 133
undef($memory_3);
#line 133
undef($memory_2);
#line 134
$memory_2 = string::lf();
#line 134
$memory_3 = "ret";
#line 134
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 134
$memory_3 = $memory_3 . $memory_2;
#line 134
$memory_4 = "ret";
#line 134
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 134
undef($memory_4);
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
undef($memory_1);
#line 134
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 138
$memory_2 = $memory_0->{'fun_args'};
#line 139
$memory_3 = array::len($memory_2);
#line 139
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 139
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 139
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 139
$memory_3 = $memory_2->[$memory_1];
#line 139
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 139
label_7:
#line 139
undef($memory_4);
#line 139
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 139
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 140
$memory_4 = "*___ref___";
#line 140
$memory_4 = $memory_4 . $memory_1;
#line 140
undef($memory_1);
#line 140
undef($memory_2);
#line 140
undef($memory_3);
#line 140
$_[0] = $memory_0;return $memory_4;
#line 140
undef($memory_4);
#line 141
goto label_19;
#line 141
label_19:
#line 141
undef($memory_3);
#line 142
$memory_3 = "___nl__";
#line 142
$memory_3 = $memory_3 . $memory_1;
#line 142
undef($memory_1);
#line 142
undef($memory_2);
#line 142
$_[0] = $memory_0;return $memory_3;
#line 142
undef($memory_3);
#line 142
undef($memory_2);
#line 142
undef($memory_1);
#line 142
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg_ref($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 146
$memory_2 = $memory_0->{'fun_args'};
#line 147
$memory_3 = array::len($memory_2);
#line 147
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 147
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 147
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 147
$memory_3 = $memory_2->[$memory_1];
#line 147
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 147
label_7:
#line 147
undef($memory_4);
#line 147
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 147
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 148
$memory_4 = "___ref___";
#line 148
$memory_4 = $memory_4 . $memory_1;
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
$_[0] = $memory_0;return $memory_4;
#line 148
undef($memory_4);
#line 149
goto label_19;
#line 149
label_19:
#line 149
undef($memory_3);
#line 150
$memory_3 = "&___nl__";
#line 150
$memory_3 = $memory_3 . $memory_1;
#line 150
undef($memory_1);
#line 150
undef($memory_2);
#line 150
$_[0] = $memory_0;return $memory_3;
#line 150
undef($memory_3);
#line 150
undef($memory_2);
#line 150
undef($memory_1);
#line 150
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_string($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 154
$memory_1 = "\"";
#line 154
$memory_1 = $memory_1 . $memory_0;
#line 154
$memory_2 = "\"";
#line 154
$memory_1 = $memory_1 . $memory_2;
#line 154
undef($memory_2);
#line 154
undef($memory_0);
#line 154
return $memory_1;
#line 154
undef($memory_1);
#line 154
undef($memory_0);
#line 154
return;
}

sub generator_c::__module_out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 158
$memory_2 = ptd::sim();
#line 158
$memory_3 = ptd::sim();
#line 158
$memory_1 = {c => $memory_2,h => $memory_3,};
#line 158
undef($memory_2);
#line 158
undef($memory_3);
#line 158
$memory_0 = ptd::rec($memory_1);
#line 158
undef($memory_1);
#line 158
return $memory_0;
#line 158
undef($memory_0);
#line 158
return;
}

my $_module_out_t;
sub generator_c::module_out_t() {
	$_module_out_t = generator_c::__module_out_t() unless defined $_module_out_t;
	return $_module_out_t;
}

sub generator_c::__out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 162
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 162
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 162
$memory_2 = ptd::hash($memory_3);
#line 162
undef($memory_3);
#line 162
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 162
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 162
$memory_1 = {modules => $memory_2,global_const => $memory_3,};
#line 162
undef($memory_2);
#line 162
undef($memory_3);
#line 162
$memory_0 = ptd::rec($memory_1);
#line 162
undef($memory_1);
#line 162
return $memory_0;
#line 162
undef($memory_0);
#line 162
return;
}

my $_out_t;
sub generator_c::out_t() {
	$_out_t = generator_c::__out_t() unless defined $_out_t;
	return $_out_t;
}

sub generator_c::generate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 166
$memory_2 = {};
#line 167
$memory_3 = [];
#line 168
$memory_6 = c_rt_lib::init_iter($memory_0);
#line 168
label_3:
#line 168
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 168
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 168
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 168
$memory_5 = c_rt_lib::hash_get_value($memory_0, $memory_4);
#line 169
array::push($memory_3, $memory_4);
#line 170
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 170
goto label_3;
#line 170
label_11:
#line 170
undef($memory_4);
#line 170
undef($memory_5);
#line 170
undef($memory_6);
#line 171
array::sort($memory_3);
#line 172
$memory_5 = 0;
#line 172
$memory_6 = 1;
#line 172
$memory_7 = c_rt_lib::array_len($memory_3);
#line 172
label_19:
#line 172
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 172
if (c_rt_lib::check_true($memory_8)) {goto label_92;}
#line 172
$memory_4 = $memory_3->[$memory_5];
#line 173
$memory_9 = hash::get_value($memory_0, $memory_4);
#line 174
generator_c::clear_module_from_state($memory_1, $memory_4);
#line 175
$memory_10 = "global_const";
#line 175
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 175
$memory_11 = "module_consts";
#line 175
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 175
$memory_12 = {};
#line 175
hash::set_value($memory_11, $memory_4, $memory_12);
#line 175
undef($memory_12);
#line 175
$memory_12 = "module_consts";
#line 175
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 175
$memory_12 = "global_const";
#line 175
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 175
undef($memory_12);
#line 175
undef($memory_10);
#line 175
undef($memory_11);
#line 176
$memory_10 = "";
#line 176
$memory_11 = $memory_10;
#line 176
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'ret'} = $memory_11;
#line 176
undef($memory_10);
#line 176
undef($memory_11);
#line 177
$memory_10 = "";
#line 177
$memory_11 = $memory_10;
#line 177
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'header'} = $memory_11;
#line 177
undef($memory_10);
#line 177
undef($memory_11);
#line 178
$memory_10 = [];
#line 178
$memory_11 = $memory_10;
#line 178
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'fun_args'} = $memory_11;
#line 178
undef($memory_10);
#line 178
undef($memory_11);
#line 179
$memory_11 = 0;
#line 179
$memory_13 = [];
#line 179
$memory_14 = {};
#line 179
$memory_12 = {arr => $memory_13,hash => $memory_14,};
#line 179
undef($memory_13);
#line 179
undef($memory_14);
#line 179
$memory_14 = [];
#line 179
$memory_15 = {};
#line 179
$memory_13 = {arr => $memory_14,hash => $memory_15,};
#line 179
undef($memory_14);
#line 179
undef($memory_15);
#line 179
$memory_10 = {dynamic_nr => $memory_11,sim => $memory_12,singleton => $memory_13,};
#line 179
undef($memory_11);
#line 179
undef($memory_12);
#line 179
undef($memory_13);
#line 179
$memory_11 = $memory_10;
#line 179
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'const'} = $memory_11;
#line 179
undef($memory_10);
#line 179
undef($memory_11);
#line 180
$memory_10 = $memory_4;
#line 180
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod_name'} = $memory_10;
#line 180
undef($memory_10);
#line 181
$memory_10 = {};
#line 181
$memory_11 = $memory_10;
#line 181
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'additional_imports'} = $memory_11;
#line 181
undef($memory_10);
#line 181
undef($memory_11);
#line 182
generator_c_priv::print_mod($memory_1, $memory_9);
#line 183
$memory_11 = $memory_1->{'ret'};
#line 183
$memory_12 = $memory_1->{'header'};
#line 183
$memory_10 = {c => $memory_11,h => $memory_12,};
#line 183
undef($memory_11);
#line 183
undef($memory_12);
#line 183
hash::set_value($memory_2, $memory_4, $memory_10);
#line 183
undef($memory_10);
#line 183
undef($memory_9);
#line 184
$memory_5 = $memory_5 + $memory_6;
#line 184
goto label_19;
#line 184
label_92:
#line 184
undef($memory_4);
#line 184
undef($memory_5);
#line 184
undef($memory_6);
#line 184
undef($memory_7);
#line 184
undef($memory_8);
#line 185
$memory_5 = generator_c_priv::generate_global_const_files($memory_1);
#line 185
$memory_4 = {modules => $memory_2,global_const => $memory_5,};
#line 185
undef($memory_5);
#line 185
undef($memory_0);
#line 185
undef($memory_2);
#line 185
undef($memory_3);
#line 185
$_[1] = $memory_1;return $memory_4;
#line 185
undef($memory_4);
#line 185
undef($memory_2);
#line 185
undef($memory_3);
#line 185
undef($memory_0);
#line 185
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_c_priv::generate_global_const_files($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 189
$memory_1 = "";
#line 189
$memory_2 = $memory_1;
#line 189
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_2;
#line 189
undef($memory_1);
#line 189
undef($memory_2);
#line 190
$memory_1 = "";
#line 190
$memory_2 = $memory_1;
#line 190
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'header'} = $memory_2;
#line 190
undef($memory_1);
#line 190
undef($memory_2);
#line 191
$memory_1 = [];
#line 191
$memory_2 = $memory_1;
#line 191
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_2;
#line 191
undef($memory_1);
#line 191
undef($memory_2);
#line 192
$memory_2 = 0;
#line 192
$memory_4 = [];
#line 192
$memory_5 = {};
#line 192
$memory_3 = {arr => $memory_4,hash => $memory_5,};
#line 192
undef($memory_4);
#line 192
undef($memory_5);
#line 192
$memory_5 = [];
#line 192
$memory_6 = {};
#line 192
$memory_4 = {arr => $memory_5,hash => $memory_6,};
#line 192
undef($memory_5);
#line 192
undef($memory_6);
#line 192
$memory_1 = {dynamic_nr => $memory_2,sim => $memory_3,singleton => $memory_4,};
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 192
undef($memory_4);
#line 192
$memory_2 = $memory_1;
#line 192
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'const'} = $memory_2;
#line 192
undef($memory_1);
#line 192
undef($memory_2);
#line 193
$memory_1 = "";
#line 193
$memory_2 = $memory_1;
#line 193
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'mod_name'} = $memory_2;
#line 193
undef($memory_1);
#line 193
undef($memory_2);
#line 194
$memory_1 = generator_c_priv::get_cr();
#line 194
generator_c_priv::print_to_header($memory_0, $memory_1);
#line 194
undef($memory_1);
#line 195
$memory_1 = "#pragma once";
#line 195
generator_c_priv::println_to_header($memory_0, $memory_1);
#line 195
undef($memory_1);
#line 196
$memory_2 = "c_rt_lib";
#line 196
$memory_1 = generator_c_priv::get_include($memory_2);
#line 196
undef($memory_2);
#line 196
generator_c_priv::println_to_header($memory_0, $memory_1);
#line 196
undef($memory_1);
#line 197
$memory_1 = generator_c_priv::get_cr();
#line 197
generator_c_priv::print($memory_0, $memory_1);
#line 197
undef($memory_1);
#line 198
$memory_2 = "c_global_const";
#line 198
$memory_1 = generator_c_priv::get_include($memory_2);
#line 198
undef($memory_2);
#line 198
generator_c_priv::println($memory_0, $memory_1);
#line 198
undef($memory_1);
#line 199
$memory_1 = $memory_0->{'global_const'};
#line 199
$memory_1 = $memory_1->{'arr'};
#line 200
$memory_2 = array::len($memory_1);
#line 201
$memory_3 = "void ___global_const_init();";
#line 201
generator_c_priv::println_to_header($memory_0, $memory_3);
#line 201
undef($memory_3);
#line 202
$memory_3 = generator_c_priv::arg_t();
#line 202
$memory_4 = " ___get_global_const(int __nr);";
#line 202
$memory_3 = $memory_3 . $memory_4;
#line 202
undef($memory_4);
#line 202
generator_c_priv::println_to_header($memory_0, $memory_3);
#line 202
undef($memory_3);
#line 203
$memory_3 = "
static ";
#line 204
$memory_4 = generator_c_priv::arg_t();
#line 204
$memory_3 = $memory_3 . $memory_4;
#line 204
undef($memory_4);
#line 204
$memory_4 = " ___global_const__ = NULL;
static int ___global_const_init__ = 1;
static int ___global_const_offset;";
#line 204
$memory_3 = $memory_3 . $memory_4;
#line 204
undef($memory_4);
#line 204
generator_c_priv::println($memory_0, $memory_3);
#line 204
undef($memory_3);
#line 207
$memory_3 = "void ___global_const_init(){
if(___global_const_init__) {
___global_const_init__ = 0;
___global_const_offset = c_rt_lib0get_global_const_offset();
___global_const__ = alloc_mem(";
#line 207
$memory_3 = $memory_3 . $memory_2;
#line 211
$memory_4 = " * ___global_const_offset);
";
#line 211
$memory_3 = $memory_3 . $memory_4;
#line 211
undef($memory_4);
#line 211
generator_c_priv::println($memory_0, $memory_3);
#line 211
undef($memory_3);
#line 213
$memory_3 = 0;
#line 213
$memory_4 = 1;
#line 213
label_88:
#line 213
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 213
if (c_rt_lib::check_true($memory_5)) {goto label_105;}
#line 214
$memory_7 = $memory_1->[$memory_3];
#line 214
$memory_7 = $memory_7->{'key'};
#line 214
$memory_8 = "___global_const__ + ___global_const_offset * ";
#line 214
$memory_8 = $memory_8 . $memory_3;
#line 214
$memory_6 = generator_c_priv::create_sim_to_memory($memory_7, $memory_8);
#line 214
undef($memory_8);
#line 214
undef($memory_7);
#line 214
$memory_7 = ";";
#line 214
$memory_6 = $memory_6 . $memory_7;
#line 214
undef($memory_7);
#line 214
generator_c_priv::println($memory_0, $memory_6);
#line 214
undef($memory_6);
#line 215
$memory_3 = $memory_3 + $memory_4;
#line 215
goto label_88;
#line 215
label_105:
#line 215
undef($memory_3);
#line 215
undef($memory_4);
#line 215
undef($memory_5);
#line 216
$memory_3 = "
";
#line 217
$memory_5 = "register_global_const";
#line 217
$memory_4 = generator_c_priv::get_lib_fun($memory_5);
#line 217
undef($memory_5);
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_4 = "((";
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_4 = generator_c_priv::arg_t();
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_4 = ")___global_const__,(";
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_4 = generator_c_priv::arg_t();
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 218
$memory_4 = ")___global_const__ + ";
#line 218
$memory_3 = $memory_3 . $memory_4;
#line 218
undef($memory_4);
#line 218
$memory_3 = $memory_3 . $memory_2;
#line 218
$memory_4 = " * ___global_const_offset);
}}";
#line 218
$memory_3 = $memory_3 . $memory_4;
#line 218
undef($memory_4);
#line 218
generator_c_priv::println($memory_0, $memory_3);
#line 218
undef($memory_3);
#line 220
$memory_3 = generator_c_priv::arg_t();
#line 220
$memory_4 = "___get_global_const(int __nr) {
";
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 221
$memory_4 = generator_c_priv::arg_t();
#line 221
$memory_3 = $memory_3 . $memory_4;
#line 221
undef($memory_4);
#line 221
$memory_4 = "ret = NULL;
";
#line 221
$memory_3 = $memory_3 . $memory_4;
#line 221
undef($memory_4);
#line 222
$memory_5 = "copy";
#line 222
$memory_7 = "&ret";
#line 222
$memory_8 = "(";
#line 222
$memory_9 = generator_c_priv::arg_t();
#line 222
$memory_8 = $memory_8 . $memory_9;
#line 222
undef($memory_9);
#line 222
$memory_9 = ")___global_const__ + ___global_const_offset * __nr";
#line 222
$memory_8 = $memory_8 . $memory_9;
#line 222
undef($memory_9);
#line 222
$memory_6 = [$memory_7,$memory_8];
#line 222
undef($memory_7);
#line 222
undef($memory_8);
#line 222
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 222
undef($memory_6);
#line 222
undef($memory_5);
#line 222
$memory_3 = $memory_3 . $memory_4;
#line 222
undef($memory_4);
#line 222
$memory_4 = ";
return ret;
}";
#line 222
$memory_3 = $memory_3 . $memory_4;
#line 222
undef($memory_4);
#line 222
generator_c_priv::println($memory_0, $memory_3);
#line 222
undef($memory_3);
#line 225
$memory_4 = $memory_0->{'ret'};
#line 225
$memory_5 = $memory_0->{'header'};
#line 225
$memory_3 = {c => $memory_4,h => $memory_5,};
#line 225
undef($memory_4);
#line 225
undef($memory_5);
#line 225
undef($memory_1);
#line 225
undef($memory_2);
#line 225
$_[0] = $memory_0;return $memory_3;
#line 225
undef($memory_3);
#line 225
undef($memory_1);
#line 225
undef($memory_2);
#line 225
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_include($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 229
$memory_1 = "#include \"";
#line 229
$memory_1 = $memory_1 . $memory_0;
#line 229
$memory_2 = ".h\"";
#line 229
$memory_1 = $memory_1 . $memory_2;
#line 229
undef($memory_2);
#line 229
undef($memory_0);
#line 229
return $memory_1;
#line 229
undef($memory_1);
#line 229
undef($memory_0);
#line 229
return;
}

sub generator_c_priv::__get_cr() {
my $memory_0;
#line 233
$memory_0 = "
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
";
#line 233
return $memory_0;
#line 233
undef($memory_0);
#line 233
return;
}

my $_get_cr;
sub generator_c_priv::get_cr() {
	$_get_cr = generator_c_priv::__get_cr() unless defined $_get_cr;
	return $_get_cr;
}

sub generator_c_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 242
$memory_3 = $memory_0->{'access'};
#line 242
$memory_4 = c_rt_lib::ov_is($memory_3, 'pub');
#line 242
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 244
$memory_4 = c_rt_lib::ov_is($memory_3, 'priv');
#line 244
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 244
$memory_4 = "NOMATCHALERT";
#line 244
$memory_4 = [$memory_4,$memory_3];
#line 244
die(dfile::ssave($memory_4));
#line 242
label_8:
#line 243
$memory_2 = $memory_1;
#line 244
goto label_16;
#line 244
label_11:
#line 245
$memory_5 = "";
#line 245
$memory_2 = $memory_5;
#line 245
undef($memory_5);
#line 246
goto label_16;
#line 246
label_16:
#line 246
undef($memory_3);
#line 246
undef($memory_4);
#line 247
$memory_4 = $memory_0->{'name'};
#line 247
$memory_3 = generator_c_priv::get_fun_name($memory_2, $memory_4, $memory_1);
#line 247
undef($memory_4);
#line 247
undef($memory_0);
#line 247
undef($memory_1);
#line 247
undef($memory_2);
#line 247
return $memory_3;
#line 247
undef($memory_3);
#line 247
undef($memory_2);
#line 247
undef($memory_0);
#line 247
undef($memory_1);
#line 247
return;
}

sub generator_c_priv::get_function_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];
#line 251
$memory_2 = "";
#line 252
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 253
$memory_4 = generator_c_priv::arg_t();
#line 253
$memory_4 = $memory_4 . $memory_3;
#line 253
$memory_5 = "(";
#line 253
$memory_4 = $memory_4 . $memory_5;
#line 253
undef($memory_5);
#line 253
$memory_2 = $memory_2 . $memory_4;
#line 253
undef($memory_4);
#line 254
$memory_4 = 0;
#line 255
$memory_5 = $memory_0->{'args_type'};
#line 255
$memory_7 = 0;
#line 255
$memory_8 = 1;
#line 255
$memory_9 = c_rt_lib::array_len($memory_5);
#line 255
label_14:
#line 255
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 255
if (c_rt_lib::check_true($memory_10)) {goto label_61;}
#line 255
$memory_6 = $memory_5->[$memory_7];
#line 256
$memory_11 = 0;
#line 256
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_4);
#line 256
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 256
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 256
if (c_rt_lib::check_true($memory_11)) {goto label_27;}
#line 256
$memory_12 = ",";
#line 256
$memory_2 = $memory_2 . $memory_12;
#line 256
undef($memory_12);
#line 256
goto label_27;
#line 256
label_27:
#line 256
undef($memory_11);
#line 257
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 257
if (c_rt_lib::check_true($memory_11)) {goto label_36;}
#line 259
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 259
if (c_rt_lib::check_true($memory_11)) {goto label_45;}
#line 259
$memory_11 = "NOMATCHALERT";
#line 259
$memory_11 = [$memory_11,$memory_6];
#line 259
die(dfile::ssave($memory_11));
#line 257
label_36:
#line 258
$memory_12 = generator_c_priv::arg_t();
#line 258
$memory_13 = "___nl__";
#line 258
$memory_12 = $memory_12 . $memory_13;
#line 258
undef($memory_13);
#line 258
$memory_12 = $memory_12 . $memory_4;
#line 258
$memory_2 = $memory_2 . $memory_12;
#line 258
undef($memory_12);
#line 259
goto label_54;
#line 259
label_45:
#line 260
$memory_12 = generator_c_priv::arg_t();
#line 260
$memory_13 = "* ___ref___";
#line 260
$memory_12 = $memory_12 . $memory_13;
#line 260
undef($memory_13);
#line 260
$memory_12 = $memory_12 . $memory_4;
#line 260
$memory_2 = $memory_2 . $memory_12;
#line 260
undef($memory_12);
#line 261
goto label_54;
#line 261
label_54:
#line 261
undef($memory_11);
#line 262
$memory_11 = 1;
#line 262
$memory_4 = $memory_4 + $memory_11;
#line 262
undef($memory_11);
#line 263
$memory_7 = $memory_7 + $memory_8;
#line 263
goto label_14;
#line 263
label_61:
#line 263
undef($memory_5);
#line 263
undef($memory_6);
#line 263
undef($memory_7);
#line 263
undef($memory_8);
#line 263
undef($memory_9);
#line 263
undef($memory_10);
#line 264
$memory_5 = ")";
#line 264
$memory_2 = $memory_2 . $memory_5;
#line 264
undef($memory_5);
#line 265
undef($memory_0);
#line 265
undef($memory_1);
#line 265
undef($memory_3);
#line 265
undef($memory_4);
#line 265
return $memory_2;
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 265
undef($memory_4);
#line 265
undef($memory_0);
#line 265
undef($memory_1);
#line 265
return;
}

sub generator_c_priv::get_const($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 269
$memory_2 = 1;
#line 269
$memory_2 = -$memory_2;
#line 270
$memory_4 = $memory_0->{'hash'};
#line 270
$memory_3 = hash::has_key($memory_4, $memory_1);
#line 270
undef($memory_4);
#line 270
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 270
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 270
if (c_rt_lib::check_true($memory_3)) {goto label_28;}
#line 271
$memory_5 = $memory_0->{'arr'};
#line 271
$memory_4 = array::len($memory_5);
#line 271
undef($memory_5);
#line 271
$memory_2 = $memory_4;
#line 271
undef($memory_4);
#line 272
$memory_4 = "arr";
#line 272
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 272
array::push($memory_4, $memory_1);
#line 272
$memory_5 = "arr";
#line 272
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 272
undef($memory_5);
#line 272
undef($memory_4);
#line 273
$memory_4 = "hash";
#line 273
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 273
hash::set_value($memory_4, $memory_1, $memory_2);
#line 273
$memory_5 = "hash";
#line 273
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 273
undef($memory_5);
#line 273
undef($memory_4);
#line 274
goto label_35;
#line 274
label_28:
#line 275
$memory_5 = $memory_0->{'hash'};
#line 275
$memory_4 = hash::get_value($memory_5, $memory_1);
#line 275
undef($memory_5);
#line 275
$memory_2 = $memory_4;
#line 275
undef($memory_4);
#line 276
goto label_35;
#line 276
label_35:
#line 276
undef($memory_3);
#line 277
undef($memory_1);
#line 277
$_[0] = $memory_0;return $memory_2;
#line 277
undef($memory_2);
#line 277
undef($memory_1);
#line 277
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::insert_const_to_modules_hash($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 281
$memory_4 = $memory_0->{'module_consts'};
#line 281
$memory_3 = hash::get_value($memory_4, $memory_2);
#line 281
undef($memory_4);
#line 282
$memory_4 = "";
#line 282
hash::set_value($memory_3, $memory_1, $memory_4);
#line 282
undef($memory_4);
#line 283
$memory_4 = "module_consts";
#line 283
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 283
hash::set_value($memory_4, $memory_2, $memory_3);
#line 283
$memory_5 = "module_consts";
#line 283
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 283
undef($memory_5);
#line 283
undef($memory_4);
#line 283
undef($memory_3);
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_global_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 287
$memory_3 = 1;
#line 287
$memory_3 = -$memory_3;
#line 288
$memory_5 = $memory_0->{'hash'};
#line 288
$memory_4 = hash::has_key($memory_5, $memory_1);
#line 288
undef($memory_5);
#line 288
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 288
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 288
if (c_rt_lib::check_true($memory_4)) {goto label_77;}
#line 289
$memory_6 = $memory_0->{'holes'};
#line 289
$memory_5 = array::len($memory_6);
#line 289
undef($memory_6);
#line 289
$memory_6 = 0;
#line 289
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 289
undef($memory_6);
#line 289
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 289
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 290
$memory_6 = $memory_0->{'holes'};
#line 290
$memory_8 = $memory_0->{'holes'};
#line 290
$memory_7 = array::len($memory_8);
#line 290
undef($memory_8);
#line 290
$memory_8 = 1;
#line 290
$memory_7 = $memory_7 - $memory_8;
#line 290
undef($memory_8);
#line 290
$memory_6 = $memory_6->[$memory_7];
#line 290
undef($memory_7);
#line 290
$memory_3 = $memory_6;
#line 290
undef($memory_6);
#line 291
$memory_6 = "holes";
#line 291
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 291
array::pop($memory_6);
#line 291
$memory_7 = "holes";
#line 291
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 291
undef($memory_7);
#line 291
undef($memory_6);
#line 292
$memory_7 = 1;
#line 292
$memory_6 = {key => $memory_1,uses => $memory_7,};
#line 292
undef($memory_7);
#line 292
$memory_7 = "arr";
#line 292
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 292
$memory_8 = $memory_6;
#line 292
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_3] = $memory_8;
#line 292
$memory_9 = "arr";
#line 292
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_7);
#line 292
undef($memory_9);
#line 292
undef($memory_6);
#line 292
undef($memory_7);
#line 292
undef($memory_8);
#line 293
goto label_66;
#line 293
label_48:
#line 294
$memory_7 = $memory_0->{'arr'};
#line 294
$memory_6 = array::len($memory_7);
#line 294
undef($memory_7);
#line 294
$memory_3 = $memory_6;
#line 294
undef($memory_6);
#line 295
$memory_6 = "arr";
#line 295
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 295
$memory_8 = 1;
#line 295
$memory_7 = {key => $memory_1,uses => $memory_8,};
#line 295
undef($memory_8);
#line 295
array::push($memory_6, $memory_7);
#line 295
undef($memory_7);
#line 295
$memory_7 = "arr";
#line 295
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 295
undef($memory_7);
#line 295
undef($memory_6);
#line 296
goto label_66;
#line 296
label_66:
#line 296
undef($memory_5);
#line 297
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 298
$memory_5 = "hash";
#line 298
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 298
hash::set_value($memory_5, $memory_1, $memory_3);
#line 298
$memory_6 = "hash";
#line 298
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 298
undef($memory_6);
#line 298
undef($memory_5);
#line 299
goto label_113;
#line 299
label_77:
#line 300
$memory_6 = $memory_0->{'hash'};
#line 300
$memory_5 = hash::get_value($memory_6, $memory_1);
#line 300
undef($memory_6);
#line 300
$memory_3 = $memory_5;
#line 300
undef($memory_5);
#line 301
$memory_6 = $memory_0->{'module_consts'};
#line 301
$memory_5 = hash::get_value($memory_6, $memory_2);
#line 301
undef($memory_6);
#line 302
$memory_6 = hash::has_key($memory_5, $memory_1);
#line 302
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 302
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 302
if (c_rt_lib::check_true($memory_6)) {goto label_109;}
#line 303
$memory_7 = "arr";
#line 303
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 303
$memory_8 = c_rt_lib::get_ref_arr($memory_7, $memory_3);
#line 303
$memory_9 = "uses";
#line 303
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 303
$memory_10 = 1;
#line 303
$memory_9 = $memory_9 + $memory_10;
#line 303
$memory_11 = "uses";
#line 303
c_rt_lib::set_ref_hash($memory_8, $memory_11, $memory_9);
#line 303
c_rt_lib::set_ref_arr($memory_7, $memory_3, $memory_8);
#line 303
$memory_11 = "arr";
#line 303
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 303
undef($memory_11);
#line 303
undef($memory_7);
#line 303
undef($memory_8);
#line 303
undef($memory_9);
#line 303
undef($memory_10);
#line 304
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 305
goto label_109;
#line 305
label_109:
#line 305
undef($memory_6);
#line 305
undef($memory_5);
#line 306
goto label_113;
#line 306
label_113:
#line 306
undef($memory_4);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
$_[0] = $memory_0;return $memory_3;
#line 307
undef($memory_3);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c::clear_module_from_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 311
$memory_3 = $memory_0->{'global_const'};
#line 311
$memory_3 = $memory_3->{'module_consts'};
#line 311
$memory_2 = hash::has_key($memory_3, $memory_1);
#line 311
undef($memory_3);
#line 311
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 311
if (c_rt_lib::check_true($memory_2)) {goto label_99;}
#line 312
$memory_4 = $memory_0->{'global_const'};
#line 312
$memory_4 = $memory_4->{'module_consts'};
#line 312
$memory_3 = hash::get_value($memory_4, $memory_1);
#line 312
undef($memory_4);
#line 313
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 313
label_11:
#line 313
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 313
if (c_rt_lib::check_true($memory_4)) {goto label_81;}
#line 313
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 313
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 314
$memory_8 = $memory_0->{'global_const'};
#line 314
$memory_8 = $memory_8->{'hash'};
#line 314
$memory_7 = hash::get_value($memory_8, $memory_4);
#line 314
undef($memory_8);
#line 315
$memory_8 = "global_const";
#line 315
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 315
$memory_9 = "arr";
#line 315
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 315
$memory_10 = c_rt_lib::get_ref_arr($memory_9, $memory_7);
#line 315
$memory_11 = "uses";
#line 315
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 315
$memory_12 = 1;
#line 315
$memory_11 = $memory_11 - $memory_12;
#line 315
$memory_13 = "uses";
#line 315
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 315
c_rt_lib::set_ref_arr($memory_9, $memory_7, $memory_10);
#line 315
$memory_13 = "arr";
#line 315
c_rt_lib::set_ref_hash($memory_8, $memory_13, $memory_9);
#line 315
$memory_13 = "global_const";
#line 315
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_8);
#line 315
undef($memory_13);
#line 315
undef($memory_8);
#line 315
undef($memory_9);
#line 315
undef($memory_10);
#line 315
undef($memory_11);
#line 315
undef($memory_12);
#line 316
$memory_8 = $memory_0->{'global_const'};
#line 316
$memory_8 = $memory_8->{'arr'};
#line 316
$memory_8 = $memory_8->[$memory_7];
#line 316
$memory_8 = $memory_8->{'uses'};
#line 316
$memory_9 = 0;
#line 316
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 316
undef($memory_9);
#line 316
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 316
if (c_rt_lib::check_true($memory_8)) {goto label_76;}
#line 317
$memory_9 = "global_const";
#line 317
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 317
$memory_10 = "hash";
#line 317
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 317
hash::delete($memory_10, $memory_4);
#line 317
$memory_11 = "hash";
#line 317
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 317
$memory_11 = "global_const";
#line 317
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 317
undef($memory_11);
#line 317
undef($memory_9);
#line 317
undef($memory_10);
#line 318
$memory_9 = "global_const";
#line 318
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 318
$memory_10 = "holes";
#line 318
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 318
array::push($memory_10, $memory_7);
#line 318
$memory_11 = "holes";
#line 318
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 318
$memory_11 = "global_const";
#line 318
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 318
undef($memory_11);
#line 318
undef($memory_9);
#line 318
undef($memory_10);
#line 319
goto label_76;
#line 319
label_76:
#line 319
undef($memory_8);
#line 319
undef($memory_7);
#line 320
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 320
goto label_11;
#line 320
label_81:
#line 320
undef($memory_4);
#line 320
undef($memory_5);
#line 320
undef($memory_6);
#line 321
$memory_4 = "global_const";
#line 321
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 321
$memory_5 = "module_consts";
#line 321
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 321
hash::delete($memory_5, $memory_1);
#line 321
$memory_6 = "module_consts";
#line 321
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 321
$memory_6 = "global_const";
#line 321
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 321
undef($memory_6);
#line 321
undef($memory_4);
#line 321
undef($memory_5);
#line 321
undef($memory_3);
#line 322
goto label_99;
#line 322
label_99:
#line 322
undef($memory_2);
#line 322
undef($memory_1);
#line 322
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_sim($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 326
$memory_3 = "global_const";
#line 326
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 326
$memory_4 = $memory_0->{'mod_name'};
#line 326
$memory_2 = generator_c_priv::get_global_const($memory_3, $memory_1, $memory_4);
#line 326
undef($memory_4);
#line 326
$memory_4 = "global_const";
#line 326
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 326
undef($memory_4);
#line 326
undef($memory_3);
#line 327
$memory_3 = "___get_global_const(";
#line 327
$memory_3 = $memory_3 . $memory_2;
#line 327
$memory_4 = ")";
#line 327
$memory_3 = $memory_3 . $memory_4;
#line 327
undef($memory_4);
#line 327
undef($memory_1);
#line 327
undef($memory_2);
#line 327
$_[0] = $memory_0;return $memory_3;
#line 327
undef($memory_3);
#line 327
undef($memory_2);
#line 327
undef($memory_1);
#line 327
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 331
$memory_3 = "const";
#line 331
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 331
$memory_4 = "singleton";
#line 331
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 331
$memory_2 = generator_c_priv::get_const($memory_4, $memory_1);
#line 331
$memory_5 = "singleton";
#line 331
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 331
$memory_5 = "const";
#line 331
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 331
undef($memory_5);
#line 331
undef($memory_3);
#line 331
undef($memory_4);
#line 332
$memory_4 = "";
#line 332
$memory_5 = "__const__sing";
#line 332
$memory_6 = $memory_0->{'mod_name'};
#line 332
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 332
undef($memory_6);
#line 332
undef($memory_5);
#line 332
undef($memory_4);
#line 332
$memory_4 = "(";
#line 332
$memory_3 = $memory_3 . $memory_4;
#line 332
undef($memory_4);
#line 332
$memory_3 = $memory_3 . $memory_2;
#line 332
$memory_4 = ")";
#line 332
$memory_3 = $memory_3 . $memory_4;
#line 332
undef($memory_4);
#line 332
undef($memory_1);
#line 332
undef($memory_2);
#line 332
$_[0] = $memory_0;return $memory_3;
#line 332
undef($memory_3);
#line 332
undef($memory_2);
#line 332
undef($memory_1);
#line 332
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_func_ptr_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 336
$memory_2 = generator_c_priv::arg_t();
#line 336
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 336
$memory_2 = $memory_2 . $memory_3;
#line 336
undef($memory_3);
#line 336
$memory_3 = "0ptr(int _num, ImmT *_tab)";
#line 336
$memory_2 = $memory_2 . $memory_3;
#line 336
undef($memory_3);
#line 336
undef($memory_0);
#line 336
undef($memory_1);
#line 336
return $memory_2;
#line 336
undef($memory_2);
#line 336
undef($memory_0);
#line 336
undef($memory_1);
#line 336
return;
}

sub generator_c_priv::print_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 340
$memory_2 = generator_c_priv::get_cr();
#line 340
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 340
undef($memory_2);
#line 341
$memory_2 = "#pragma once";
#line 341
$memory_3 = string::lf();
#line 341
$memory_2 = $memory_2 . $memory_3;
#line 341
undef($memory_3);
#line 341
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 341
undef($memory_2);
#line 342
$memory_3 = "c_rt_lib";
#line 342
$memory_2 = generator_c_priv::get_include($memory_3);
#line 342
undef($memory_3);
#line 342
$memory_3 = string::lf();
#line 342
$memory_2 = $memory_2 . $memory_3;
#line 342
undef($memory_3);
#line 342
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 342
undef($memory_2);
#line 343
$memory_2 = generator_c_priv::get_cr();
#line 343
generator_c_priv::print($memory_0, $memory_2);
#line 343
undef($memory_2);
#line 344
$memory_3 = "c_rt_lib";
#line 344
$memory_2 = generator_c_priv::get_include($memory_3);
#line 344
undef($memory_3);
#line 344
generator_c_priv::println($memory_0, $memory_2);
#line 344
undef($memory_2);
#line 345
$memory_3 = "c_global_const";
#line 345
$memory_2 = generator_c_priv::get_include($memory_3);
#line 345
undef($memory_3);
#line 345
generator_c_priv::println($memory_0, $memory_2);
#line 345
undef($memory_2);
#line 346
$memory_3 = $memory_0->{'mod_name'};
#line 346
$memory_2 = generator_c_priv::get_include($memory_3);
#line 346
undef($memory_3);
#line 346
generator_c_priv::println($memory_0, $memory_2);
#line 346
undef($memory_2);
#line 347
$memory_2 = $memory_1->{'imports'};
#line 347
$memory_4 = 0;
#line 347
$memory_5 = 1;
#line 347
$memory_6 = c_rt_lib::array_len($memory_2);
#line 347
label_39:
#line 347
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 347
if (c_rt_lib::check_true($memory_7)) {goto label_48;}
#line 347
$memory_3 = $memory_2->[$memory_4];
#line 348
$memory_8 = generator_c_priv::get_include($memory_3);
#line 348
generator_c_priv::println($memory_0, $memory_8);
#line 348
undef($memory_8);
#line 349
$memory_4 = $memory_4 + $memory_5;
#line 349
goto label_39;
#line 349
label_48:
#line 349
undef($memory_2);
#line 349
undef($memory_3);
#line 349
undef($memory_4);
#line 349
undef($memory_5);
#line 349
undef($memory_6);
#line 349
undef($memory_7);
#line 350
$memory_2 = $memory_0->{'ret'};
#line 351
$memory_3 = "";
#line 351
$memory_4 = $memory_3;
#line 351
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_4;
#line 351
undef($memory_3);
#line 351
undef($memory_4);
#line 352
$memory_3 = "#line 1 \"";
#line 352
$memory_4 = $memory_0->{'mod_name'};
#line 352
$memory_3 = $memory_3 . $memory_4;
#line 352
undef($memory_4);
#line 352
$memory_4 = ".nl\"";
#line 352
$memory_3 = $memory_3 . $memory_4;
#line 352
undef($memory_4);
#line 352
$memory_4 = string::lf();
#line 352
$memory_3 = $memory_3 . $memory_4;
#line 352
undef($memory_4);
#line 352
generator_c_priv::println($memory_0, $memory_3);
#line 352
undef($memory_3);
#line 353
$memory_3 = "static ";
#line 353
$memory_4 = generator_c_priv::arg_t();
#line 353
$memory_3 = $memory_3 . $memory_4;
#line 353
undef($memory_4);
#line 353
$memory_4 = "*__const__f = NULL;";
#line 353
$memory_3 = $memory_3 . $memory_4;
#line 353
undef($memory_4);
#line 353
generator_c_priv::println($memory_0, $memory_3);
#line 353
undef($memory_3);
#line 354
$memory_3 = "void ";
#line 354
$memory_5 = "";
#line 354
$memory_6 = "__const__init";
#line 354
$memory_7 = $memory_0->{'mod_name'};
#line 354
$memory_4 = generator_c_priv::get_fun_name($memory_5, $memory_6, $memory_7);
#line 354
undef($memory_7);
#line 354
undef($memory_6);
#line 354
undef($memory_5);
#line 354
$memory_3 = $memory_3 . $memory_4;
#line 354
undef($memory_4);
#line 354
$memory_4 = "();";
#line 354
$memory_3 = $memory_3 . $memory_4;
#line 354
undef($memory_4);
#line 354
generator_c_priv::println($memory_0, $memory_3);
#line 354
undef($memory_3);
#line 355
$memory_3 = generator_c_priv::arg_t();
#line 355
$memory_5 = "";
#line 355
$memory_6 = "__const__sim";
#line 355
$memory_7 = $memory_0->{'mod_name'};
#line 355
$memory_4 = generator_c_priv::get_fun_name($memory_5, $memory_6, $memory_7);
#line 355
undef($memory_7);
#line 355
undef($memory_6);
#line 355
undef($memory_5);
#line 355
$memory_3 = $memory_3 . $memory_4;
#line 355
undef($memory_4);
#line 355
$memory_4 = "(int __nr);";
#line 355
$memory_3 = $memory_3 . $memory_4;
#line 355
undef($memory_4);
#line 355
generator_c_priv::println($memory_0, $memory_3);
#line 355
undef($memory_3);
#line 356
$memory_3 = generator_c_priv::arg_t();
#line 356
$memory_5 = "";
#line 356
$memory_6 = "__const__sing";
#line 356
$memory_7 = $memory_0->{'mod_name'};
#line 356
$memory_4 = generator_c_priv::get_fun_name($memory_5, $memory_6, $memory_7);
#line 356
undef($memory_7);
#line 356
undef($memory_6);
#line 356
undef($memory_5);
#line 356
$memory_3 = $memory_3 . $memory_4;
#line 356
undef($memory_4);
#line 356
$memory_4 = "(int __nr);";
#line 356
$memory_3 = $memory_3 . $memory_4;
#line 356
undef($memory_4);
#line 356
$memory_4 = string::lf();
#line 356
$memory_3 = $memory_3 . $memory_4;
#line 356
undef($memory_4);
#line 356
generator_c_priv::println($memory_0, $memory_3);
#line 356
undef($memory_3);
#line 357
$memory_3 = $memory_1->{'functions'};
#line 357
$memory_5 = 0;
#line 357
$memory_6 = 1;
#line 357
$memory_7 = c_rt_lib::array_len($memory_3);
#line 357
label_134:
#line 357
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 357
if (c_rt_lib::check_true($memory_8)) {goto label_181;}
#line 357
$memory_4 = $memory_3->[$memory_5];
#line 358
$memory_10 = $memory_0->{'mod_name'};
#line 358
$memory_9 = generator_c_priv::get_function_header($memory_4, $memory_10);
#line 358
undef($memory_10);
#line 359
$memory_10 = $memory_4->{'access'};
#line 359
$memory_11 = c_rt_lib::ov_is($memory_10, 'pub');
#line 359
if (c_rt_lib::check_true($memory_11)) {goto label_149;}
#line 362
$memory_11 = c_rt_lib::ov_is($memory_10, 'priv');
#line 362
if (c_rt_lib::check_true($memory_11)) {goto label_169;}
#line 362
$memory_11 = "NOMATCHALERT";
#line 362
$memory_11 = [$memory_11,$memory_10];
#line 362
die(dfile::ssave($memory_11));
#line 359
label_149:
#line 360
$memory_12 = ";";
#line 360
$memory_12 = $memory_9 . $memory_12;
#line 360
$memory_13 = string::lf();
#line 360
$memory_12 = $memory_12 . $memory_13;
#line 360
undef($memory_13);
#line 360
generator_c_priv::print_to_header($memory_0, $memory_12);
#line 360
undef($memory_12);
#line 361
$memory_13 = $memory_0->{'mod_name'};
#line 361
$memory_12 = generator_c_priv::get_func_ptr_header($memory_4, $memory_13);
#line 361
undef($memory_13);
#line 361
$memory_13 = ";";
#line 361
$memory_12 = $memory_12 . $memory_13;
#line 361
undef($memory_13);
#line 361
$memory_13 = string::lf();
#line 361
$memory_12 = $memory_12 . $memory_13;
#line 361
undef($memory_13);
#line 361
generator_c_priv::print_to_header($memory_0, $memory_12);
#line 361
undef($memory_12);
#line 362
goto label_175;
#line 362
label_169:
#line 363
$memory_12 = ";";
#line 363
$memory_12 = $memory_9 . $memory_12;
#line 363
generator_c_priv::println($memory_0, $memory_12);
#line 363
undef($memory_12);
#line 364
goto label_175;
#line 364
label_175:
#line 364
undef($memory_10);
#line 364
undef($memory_11);
#line 364
undef($memory_9);
#line 365
$memory_5 = $memory_5 + $memory_6;
#line 365
goto label_134;
#line 365
label_181:
#line 365
undef($memory_3);
#line 365
undef($memory_4);
#line 365
undef($memory_5);
#line 365
undef($memory_6);
#line 365
undef($memory_7);
#line 365
undef($memory_8);
#line 366
$memory_3 = string::lf();
#line 366
generator_c_priv::println($memory_0, $memory_3);
#line 366
undef($memory_3);
#line 367
$memory_3 = $memory_1->{'functions'};
#line 367
$memory_5 = 0;
#line 367
$memory_6 = 1;
#line 367
$memory_7 = c_rt_lib::array_len($memory_3);
#line 367
label_195:
#line 367
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 367
if (c_rt_lib::check_true($memory_8)) {goto label_352;}
#line 367
$memory_4 = $memory_3->[$memory_5];
#line 368
$memory_9 = $memory_4->{'access'};
#line 368
$memory_9 = c_rt_lib::ov_is($memory_9, 'pub');
#line 368
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 368
if (c_rt_lib::check_true($memory_9)) {goto label_295;}
#line 369
$memory_11 = $memory_0->{'mod_name'};
#line 369
$memory_10 = generator_c_priv::get_function_name($memory_4, $memory_11);
#line 369
undef($memory_11);
#line 370
$memory_12 = $memory_0->{'mod_name'};
#line 370
$memory_11 = generator_c_priv::get_func_ptr_header($memory_4, $memory_12);
#line 370
undef($memory_12);
#line 370
$memory_12 = "{";
#line 370
$memory_11 = $memory_11 . $memory_12;
#line 370
undef($memory_12);
#line 370
generator_c_priv::println($memory_0, $memory_11);
#line 370
undef($memory_11);
#line 371
$memory_12 = $memory_4->{'args_type'};
#line 371
$memory_11 = array::len($memory_12);
#line 371
undef($memory_12);
#line 372
$memory_13 = "func_num_args";
#line 372
$memory_15 = "_num";
#line 372
$memory_16 = generator_c_priv::get_string($memory_10);
#line 372
$memory_14 = [$memory_15,$memory_11,$memory_16];
#line 372
undef($memory_15);
#line 372
undef($memory_16);
#line 372
$memory_12 = generator_c_priv::get_fun_lib($memory_13, $memory_14);
#line 372
undef($memory_14);
#line 372
undef($memory_13);
#line 372
$memory_13 = ";";
#line 372
$memory_12 = $memory_12 . $memory_13;
#line 372
undef($memory_13);
#line 372
generator_c_priv::println($memory_0, $memory_12);
#line 372
undef($memory_12);
#line 373
$memory_12 = "return ";
#line 373
$memory_12 = $memory_12 . $memory_10;
#line 373
$memory_13 = "(";
#line 373
$memory_12 = $memory_12 . $memory_13;
#line 373
undef($memory_13);
#line 373
generator_c_priv::print($memory_0, $memory_12);
#line 373
undef($memory_12);
#line 374
$memory_12 = 0;
#line 374
$memory_13 = 1;
#line 374
label_240:
#line 374
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 374
if (c_rt_lib::check_true($memory_14)) {goto label_285;}
#line 375
$memory_15 = 0;
#line 375
$memory_15 = c_rt_lib::to_nl($memory_12 > $memory_15);
#line 375
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 375
if (c_rt_lib::check_true($memory_15)) {goto label_251;}
#line 375
$memory_16 = ", ";
#line 375
generator_c_priv::print($memory_0, $memory_16);
#line 375
undef($memory_16);
#line 375
goto label_251;
#line 375
label_251:
#line 375
undef($memory_15);
#line 376
$memory_15 = $memory_4->{'args_type'};
#line 376
$memory_15 = $memory_15->[$memory_12];
#line 376
$memory_16 = c_rt_lib::ov_is($memory_15, 'val');
#line 376
if (c_rt_lib::check_true($memory_16)) {goto label_262;}
#line 378
$memory_16 = c_rt_lib::ov_is($memory_15, 'ref');
#line 378
if (c_rt_lib::check_true($memory_16)) {goto label_271;}
#line 378
$memory_16 = "NOMATCHALERT";
#line 378
$memory_16 = [$memory_16,$memory_15];
#line 378
die(dfile::ssave($memory_16));
#line 376
label_262:
#line 377
$memory_17 = "_tab[";
#line 377
$memory_17 = $memory_17 . $memory_12;
#line 377
$memory_18 = "]";
#line 377
$memory_17 = $memory_17 . $memory_18;
#line 377
undef($memory_18);
#line 377
generator_c_priv::print($memory_0, $memory_17);
#line 377
undef($memory_17);
#line 378
goto label_280;
#line 378
label_271:
#line 379
$memory_17 = "&_tab[";
#line 379
$memory_17 = $memory_17 . $memory_12;
#line 379
$memory_18 = "]";
#line 379
$memory_17 = $memory_17 . $memory_18;
#line 379
undef($memory_18);
#line 379
generator_c_priv::print($memory_0, $memory_17);
#line 379
undef($memory_17);
#line 380
goto label_280;
#line 380
label_280:
#line 380
undef($memory_15);
#line 380
undef($memory_16);
#line 381
$memory_12 = $memory_12 + $memory_13;
#line 381
goto label_240;
#line 381
label_285:
#line 381
undef($memory_12);
#line 381
undef($memory_13);
#line 381
undef($memory_14);
#line 382
$memory_12 = ");}";
#line 382
generator_c_priv::println($memory_0, $memory_12);
#line 382
undef($memory_12);
#line 382
undef($memory_10);
#line 382
undef($memory_11);
#line 383
goto label_295;
#line 383
label_295:
#line 383
undef($memory_9);
#line 384
$memory_9 = generator_c_priv::is_singleton_use_function($memory_4);
#line 384
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 384
if (c_rt_lib::check_true($memory_9)) {goto label_340;}
#line 385
$memory_11 = $memory_0->{'mod_name'};
#line 385
$memory_10 = generator_c_priv::get_function_name($memory_4, $memory_11);
#line 385
undef($memory_11);
#line 386
$memory_11 = generator_c_priv::arg_t();
#line 386
$memory_11 = $memory_11 . $memory_10;
#line 386
$memory_12 = "(){";
#line 386
$memory_11 = $memory_11 . $memory_12;
#line 386
undef($memory_12);
#line 386
generator_c_priv::println($memory_0, $memory_11);
#line 386
undef($memory_11);
#line 387
$memory_12 = "";
#line 387
$memory_13 = "__const__init";
#line 387
$memory_14 = $memory_0->{'mod_name'};
#line 387
$memory_11 = generator_c_priv::get_fun_name($memory_12, $memory_13, $memory_14);
#line 387
undef($memory_14);
#line 387
undef($memory_13);
#line 387
undef($memory_12);
#line 387
$memory_12 = "();";
#line 387
$memory_11 = $memory_11 . $memory_12;
#line 387
undef($memory_12);
#line 387
generator_c_priv::println($memory_0, $memory_11);
#line 387
undef($memory_11);
#line 388
$memory_11 = "return ";
#line 388
$memory_12 = generator_c_priv::get_const_singleton($memory_0, $memory_10);
#line 388
$memory_11 = $memory_11 . $memory_12;
#line 388
undef($memory_12);
#line 388
$memory_12 = ";}";
#line 388
$memory_11 = $memory_11 . $memory_12;
#line 388
undef($memory_12);
#line 388
generator_c_priv::println($memory_0, $memory_11);
#line 388
undef($memory_11);
#line 389
$memory_11 = generator_c_priv::arg_t();
#line 389
$memory_11 = $memory_11 . $memory_10;
#line 389
$memory_12 = "0cal()";
#line 389
$memory_11 = $memory_11 . $memory_12;
#line 389
undef($memory_12);
#line 389
generator_c_priv::print($memory_0, $memory_11);
#line 389
undef($memory_11);
#line 389
undef($memory_10);
#line 390
goto label_347;
#line 390
label_340:
#line 391
$memory_11 = $memory_0->{'mod_name'};
#line 391
$memory_10 = generator_c_priv::get_function_header($memory_4, $memory_11);
#line 391
undef($memory_11);
#line 391
generator_c_priv::print($memory_0, $memory_10);
#line 391
undef($memory_10);
#line 392
goto label_347;
#line 392
label_347:
#line 392
undef($memory_9);
#line 393
generator_c_priv::print_function_block($memory_0, $memory_4);
#line 394
$memory_5 = $memory_5 + $memory_6;
#line 394
goto label_195;
#line 394
label_352:
#line 394
undef($memory_3);
#line 394
undef($memory_4);
#line 394
undef($memory_5);
#line 394
undef($memory_6);
#line 394
undef($memory_7);
#line 394
undef($memory_8);
#line 395
generator_c_priv::print_init_const($memory_0);
#line 396
$memory_3 = $memory_0->{'additional_imports'};
#line 396
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 396
label_362:
#line 396
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 396
if (c_rt_lib::check_true($memory_4)) {goto label_375;}
#line 396
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 396
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 397
$memory_7 = generator_c_priv::get_include($memory_4);
#line 397
$memory_8 = string::lf();
#line 397
$memory_7 = $memory_7 . $memory_8;
#line 397
undef($memory_8);
#line 397
$memory_2 = $memory_2 . $memory_7;
#line 397
undef($memory_7);
#line 398
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 398
goto label_362;
#line 398
label_375:
#line 398
undef($memory_3);
#line 398
undef($memory_4);
#line 398
undef($memory_5);
#line 398
undef($memory_6);
#line 399
$memory_3 = $memory_0->{'ret'};
#line 399
$memory_3 = $memory_2 . $memory_3;
#line 399
$memory_4 = $memory_3;
#line 399
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_4;
#line 399
undef($memory_3);
#line 399
undef($memory_4);
#line 399
undef($memory_2);
#line 399
undef($memory_1);
#line 399
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_init_const($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 403
$memory_1 = $memory_0->{'const'};
#line 403
$memory_1 = $memory_1->{'sim'};
#line 403
$memory_1 = $memory_1->{'arr'};
#line 404
$memory_2 = $memory_0->{'const'};
#line 404
$memory_2 = $memory_2->{'singleton'};
#line 404
$memory_2 = $memory_2->{'arr'};
#line 405
$memory_3 = array::len($memory_1);
#line 406
$memory_4 = array::len($memory_2);
#line 407
$memory_5 = $memory_0->{'const'};
#line 407
$memory_5 = $memory_5->{'dynamic_nr'};
#line 408
$memory_6 = $memory_3 + $memory_4;
#line 408
$memory_6 = $memory_6 + $memory_5;
#line 409
$memory_7 = "
static ";
#line 410
$memory_8 = generator_c_priv::arg_t();
#line 410
$memory_7 = $memory_7 . $memory_8;
#line 410
undef($memory_8);
#line 410
$memory_8 = "___const__[";
#line 410
$memory_7 = $memory_7 . $memory_8;
#line 410
undef($memory_8);
#line 410
$memory_8 = 1;
#line 410
$memory_8 = $memory_8 + $memory_6;
#line 410
$memory_7 = $memory_7 . $memory_8;
#line 410
undef($memory_8);
#line 410
$memory_8 = "];
static int ___const_init__ = 1;";
#line 410
$memory_7 = $memory_7 . $memory_8;
#line 410
undef($memory_8);
#line 410
generator_c_priv::println($memory_0, $memory_7);
#line 410
undef($memory_7);
#line 412
$memory_7 = "void ";
#line 412
$memory_9 = "";
#line 412
$memory_10 = "__const__init";
#line 412
$memory_11 = $memory_0->{'mod_name'};
#line 412
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 412
undef($memory_11);
#line 412
undef($memory_10);
#line 412
undef($memory_9);
#line 412
$memory_7 = $memory_7 . $memory_8;
#line 412
undef($memory_8);
#line 412
$memory_8 = "(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[";
#line 412
$memory_7 = $memory_7 . $memory_8;
#line 412
undef($memory_8);
#line 415
$memory_8 = $memory_3 + $memory_4;
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
$memory_8 = "];
";
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
generator_c_priv::println($memory_0, $memory_7);
#line 415
undef($memory_7);
#line 417
$memory_7 = 0;
#line 417
$memory_8 = 1;
#line 417
label_51:
#line 417
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_3);
#line 417
if (c_rt_lib::check_true($memory_9)) {goto label_71;}
#line 418
$memory_10 = "___const__[";
#line 418
$memory_10 = $memory_10 . $memory_7;
#line 418
$memory_11 = "] = ";
#line 418
$memory_10 = $memory_10 . $memory_11;
#line 418
undef($memory_11);
#line 418
$memory_12 = $memory_1->[$memory_7];
#line 418
$memory_11 = generator_c_priv::create_sim($memory_12);
#line 418
undef($memory_12);
#line 418
$memory_10 = $memory_10 . $memory_11;
#line 418
undef($memory_11);
#line 418
$memory_11 = ";";
#line 418
$memory_10 = $memory_10 . $memory_11;
#line 418
undef($memory_11);
#line 418
generator_c_priv::println($memory_0, $memory_10);
#line 418
undef($memory_10);
#line 419
$memory_7 = $memory_7 + $memory_8;
#line 419
goto label_51;
#line 419
label_71:
#line 419
undef($memory_7);
#line 419
undef($memory_8);
#line 419
undef($memory_9);
#line 420
$memory_7 = "
for(int i=";
#line 420
$memory_7 = $memory_7 . $memory_3;
#line 421
$memory_8 = ";i<";
#line 421
$memory_7 = $memory_7 . $memory_8;
#line 421
undef($memory_8);
#line 421
$memory_7 = $memory_7 . $memory_6;
#line 421
$memory_8 = ";++i) ___const__[i] = NULL;
";
#line 421
$memory_7 = $memory_7 . $memory_8;
#line 421
undef($memory_8);
#line 422
$memory_9 = "register_const";
#line 422
$memory_8 = generator_c_priv::get_lib_fun($memory_9);
#line 422
undef($memory_9);
#line 422
$memory_7 = $memory_7 . $memory_8;
#line 422
undef($memory_8);
#line 422
$memory_8 = "(___const__, ";
#line 422
$memory_7 = $memory_7 . $memory_8;
#line 422
undef($memory_8);
#line 422
$memory_7 = $memory_7 . $memory_6;
#line 422
$memory_8 = ");
}}";
#line 422
$memory_7 = $memory_7 . $memory_8;
#line 422
undef($memory_8);
#line 422
generator_c_priv::println($memory_0, $memory_7);
#line 422
undef($memory_7);
#line 424
$memory_7 = generator_c_priv::arg_t();
#line 424
$memory_9 = "";
#line 424
$memory_10 = "__const__sim";
#line 424
$memory_11 = $memory_0->{'mod_name'};
#line 424
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 424
undef($memory_11);
#line 424
undef($memory_10);
#line 424
undef($memory_9);
#line 424
$memory_7 = $memory_7 . $memory_8;
#line 424
undef($memory_8);
#line 424
$memory_8 = "(int __nr) {
";
#line 424
$memory_7 = $memory_7 . $memory_8;
#line 424
undef($memory_8);
#line 425
$memory_8 = generator_c_priv::arg_t();
#line 425
$memory_7 = $memory_7 . $memory_8;
#line 425
undef($memory_8);
#line 425
$memory_8 = "ret = NULL;
";
#line 425
$memory_7 = $memory_7 . $memory_8;
#line 425
undef($memory_8);
#line 426
$memory_9 = "copy";
#line 426
$memory_11 = "&ret";
#line 426
$memory_12 = "___const__[__nr]";
#line 426
$memory_10 = [$memory_11,$memory_12];
#line 426
undef($memory_11);
#line 426
undef($memory_12);
#line 426
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 426
undef($memory_10);
#line 426
undef($memory_9);
#line 426
$memory_7 = $memory_7 . $memory_8;
#line 426
undef($memory_8);
#line 426
$memory_8 = ";
return ret;
}";
#line 426
$memory_7 = $memory_7 . $memory_8;
#line 426
undef($memory_8);
#line 426
generator_c_priv::println($memory_0, $memory_7);
#line 426
undef($memory_7);
#line 429
$memory_7 = generator_c_priv::arg_t();
#line 429
$memory_9 = "";
#line 429
$memory_10 = "__const__sing";
#line 429
$memory_11 = $memory_0->{'mod_name'};
#line 429
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 429
undef($memory_11);
#line 429
undef($memory_10);
#line 429
undef($memory_9);
#line 429
$memory_7 = $memory_7 . $memory_8;
#line 429
undef($memory_8);
#line 429
$memory_8 = "(int __nr) {
if(___const__[__nr+";
#line 429
$memory_7 = $memory_7 . $memory_8;
#line 429
undef($memory_8);
#line 429
$memory_7 = $memory_7 . $memory_3;
#line 430
$memory_8 = "]==NULL) {
switch(__nr){";
#line 430
$memory_7 = $memory_7 . $memory_8;
#line 430
undef($memory_8);
#line 430
generator_c_priv::println($memory_0, $memory_7);
#line 430
undef($memory_7);
#line 432
$memory_7 = array::len($memory_2);
#line 432
$memory_8 = 0;
#line 432
$memory_9 = 1;
#line 432
label_155:
#line 432
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 432
if (c_rt_lib::check_true($memory_10)) {goto label_185;}
#line 433
$memory_11 = "case ";
#line 433
$memory_11 = $memory_11 . $memory_8;
#line 433
$memory_12 = ":";
#line 433
$memory_11 = $memory_11 . $memory_12;
#line 433
undef($memory_12);
#line 433
generator_c_priv::println($memory_0, $memory_11);
#line 433
undef($memory_11);
#line 434
$memory_11 = "	___const__[";
#line 434
$memory_12 = $memory_8 + $memory_3;
#line 434
$memory_11 = $memory_11 . $memory_12;
#line 434
undef($memory_12);
#line 434
$memory_12 = "] = ";
#line 434
$memory_11 = $memory_11 . $memory_12;
#line 434
undef($memory_12);
#line 434
$memory_12 = $memory_2->[$memory_8];
#line 434
$memory_11 = $memory_11 . $memory_12;
#line 434
undef($memory_12);
#line 434
$memory_12 = "0cal();";
#line 434
$memory_11 = $memory_11 . $memory_12;
#line 434
undef($memory_12);
#line 434
generator_c_priv::println($memory_0, $memory_11);
#line 434
undef($memory_11);
#line 435
$memory_11 = "	break;";
#line 435
generator_c_priv::println($memory_0, $memory_11);
#line 435
undef($memory_11);
#line 436
$memory_8 = $memory_8 + $memory_9;
#line 436
goto label_155;
#line 436
label_185:
#line 436
undef($memory_7);
#line 436
undef($memory_8);
#line 436
undef($memory_9);
#line 436
undef($memory_10);
#line 437
$memory_7 = "default:
	nl_die();
}}
";
#line 440
$memory_8 = generator_c_priv::arg_t();
#line 440
$memory_7 = $memory_7 . $memory_8;
#line 440
undef($memory_8);
#line 440
$memory_8 = "ret = NULL;
";
#line 440
$memory_7 = $memory_7 . $memory_8;
#line 440
undef($memory_8);
#line 441
$memory_9 = "copy";
#line 441
$memory_11 = "&ret";
#line 441
$memory_12 = "___const__[__nr+";
#line 441
$memory_12 = $memory_12 . $memory_3;
#line 441
$memory_13 = "]";
#line 441
$memory_12 = $memory_12 . $memory_13;
#line 441
undef($memory_13);
#line 441
$memory_10 = [$memory_11,$memory_12];
#line 441
undef($memory_11);
#line 441
undef($memory_12);
#line 441
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 441
undef($memory_10);
#line 441
undef($memory_9);
#line 441
$memory_7 = $memory_7 . $memory_8;
#line 441
undef($memory_8);
#line 441
$memory_8 = ";
return ret;
}";
#line 441
$memory_7 = $memory_7 . $memory_8;
#line 441
undef($memory_8);
#line 441
generator_c_priv::println($memory_0, $memory_7);
#line 441
undef($memory_7);
#line 441
undef($memory_1);
#line 441
undef($memory_2);
#line 441
undef($memory_3);
#line 441
undef($memory_4);
#line 441
undef($memory_5);
#line 441
undef($memory_6);
#line 441
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_function_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 447
$memory_2 = " {";
#line 447
generator_c_priv::println($memory_0, $memory_2);
#line 447
undef($memory_2);
#line 448
$memory_2 = $memory_1->{'args_type'};
#line 448
$memory_3 = $memory_2;
#line 448
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_3;
#line 448
undef($memory_2);
#line 448
undef($memory_3);
#line 449
generator_c_priv::move_args_to_register($memory_0);
#line 450
$memory_3 = "";
#line 450
$memory_4 = "__const__init";
#line 450
$memory_5 = $memory_0->{'mod_name'};
#line 450
$memory_2 = generator_c_priv::get_fun_name($memory_3, $memory_4, $memory_5);
#line 450
undef($memory_5);
#line 450
undef($memory_4);
#line 450
undef($memory_3);
#line 450
$memory_3 = "();";
#line 450
$memory_2 = $memory_2 . $memory_3;
#line 450
undef($memory_3);
#line 450
generator_c_priv::println($memory_0, $memory_2);
#line 450
undef($memory_2);
#line 451
$memory_3 = $memory_1->{'args_type'};
#line 451
$memory_2 = array::len($memory_3);
#line 451
undef($memory_3);
#line 451
label_24:
#line 451
$memory_3 = $memory_1->{'reg_size'};
#line 451
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 451
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 451
if (c_rt_lib::check_true($memory_3)) {goto label_42;}
#line 452
$memory_4 = generator_c_priv::arg_t();
#line 452
$memory_5 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 452
$memory_4 = $memory_4 . $memory_5;
#line 452
undef($memory_5);
#line 452
$memory_5 = " = NULL;";
#line 452
$memory_4 = $memory_4 . $memory_5;
#line 452
undef($memory_5);
#line 452
generator_c_priv::println($memory_0, $memory_4);
#line 452
undef($memory_4);
#line 451
$memory_4 = 1;
#line 451
$memory_2 = $memory_2 + $memory_4;
#line 451
undef($memory_4);
#line 453
goto label_24;
#line 453
label_42:
#line 453
undef($memory_2);
#line 453
undef($memory_3);
#line 454
$memory_2 = $memory_1->{'commands'};
#line 454
$memory_4 = 0;
#line 454
$memory_5 = 1;
#line 454
$memory_6 = c_rt_lib::array_len($memory_2);
#line 454
label_49:
#line 454
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 454
if (c_rt_lib::check_true($memory_7)) {goto label_213;}
#line 454
$memory_3 = $memory_2->[$memory_4];
#line 455
$memory_8 = $memory_3->{'annotation'};
#line 455
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 455
if (c_rt_lib::check_true($memory_9)) {goto label_61;}
#line 457
$memory_9 = c_rt_lib::ov_is($memory_8, 'const');
#line 457
if (c_rt_lib::check_true($memory_9)) {goto label_64;}
#line 457
$memory_9 = "NOMATCHALERT";
#line 457
$memory_9 = [$memory_9,$memory_8];
#line 457
die(dfile::ssave($memory_9));
#line 455
label_61:
#line 456
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 457
goto label_207;
#line 457
label_64:
#line 457
$memory_10 = c_rt_lib::ov_as($memory_8, 'const');
#line 458
$memory_11 = $memory_3->{'cmd'};
#line 458
$memory_11 = c_rt_lib::ov_is($memory_11, 'load_const');
#line 458
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 458
if (c_rt_lib::check_true($memory_11)) {goto label_89;}
#line 459
$memory_12 = $memory_3->{'cmd'};
#line 459
$memory_12 = c_rt_lib::ov_as($memory_12, 'load_const');
#line 459
$memory_12 = $memory_12->{'val'};
#line 460
$memory_13 = nl::is_sim($memory_12);
#line 460
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 460
if (c_rt_lib::check_true($memory_13)) {goto label_85;}
#line 461
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 462
undef($memory_8);
#line 462
undef($memory_9);
#line 462
undef($memory_10);
#line 462
undef($memory_11);
#line 462
undef($memory_12);
#line 462
undef($memory_13);
#line 462
goto label_210;
#line 463
goto label_85;
#line 463
label_85:
#line 463
undef($memory_13);
#line 463
undef($memory_12);
#line 464
goto label_89;
#line 464
label_89:
#line 464
undef($memory_11);
#line 465
$memory_11 = array::len($memory_10);
#line 466
$memory_12 = 0;
#line 466
$memory_12 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 466
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 466
if (c_rt_lib::check_true($memory_12)) {goto label_104;}
#line 467
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 468
undef($memory_8);
#line 468
undef($memory_9);
#line 468
undef($memory_10);
#line 468
undef($memory_11);
#line 468
undef($memory_12);
#line 468
goto label_210;
#line 469
goto label_202;
#line 469
label_104:
#line 470
$memory_13 = $memory_0->{'const'};
#line 470
$memory_13 = $memory_13->{'dynamic_nr'};
#line 471
$memory_14 = "if(__const__f[";
#line 471
$memory_14 = $memory_14 . $memory_13;
#line 471
$memory_15 = "] == NULL) {";
#line 471
$memory_14 = $memory_14 . $memory_15;
#line 471
undef($memory_15);
#line 471
generator_c_priv::println($memory_0, $memory_14);
#line 471
undef($memory_14);
#line 472
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 473
$memory_15 = 0;
#line 473
$memory_16 = 1;
#line 473
$memory_17 = c_rt_lib::array_len($memory_10);
#line 473
label_118:
#line 473
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 473
if (c_rt_lib::check_true($memory_18)) {goto label_145;}
#line 473
$memory_14 = $memory_10->[$memory_15];
#line 474
$memory_20 = "copy";
#line 474
$memory_22 = "&__const__f[";
#line 474
$memory_22 = $memory_22 . $memory_13;
#line 474
$memory_23 = "]";
#line 474
$memory_22 = $memory_22 . $memory_23;
#line 474
undef($memory_23);
#line 474
$memory_23 = generator_c_priv::get_reg($memory_0, $memory_14);
#line 474
$memory_21 = [$memory_22,$memory_23];
#line 474
undef($memory_22);
#line 474
undef($memory_23);
#line 474
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 474
undef($memory_21);
#line 474
undef($memory_20);
#line 474
$memory_20 = ";";
#line 474
$memory_19 = $memory_19 . $memory_20;
#line 474
undef($memory_20);
#line 474
generator_c_priv::println($memory_0, $memory_19);
#line 474
undef($memory_19);
#line 475
$memory_19 = 1;
#line 475
$memory_13 = $memory_13 + $memory_19;
#line 475
undef($memory_19);
#line 476
$memory_15 = $memory_15 + $memory_16;
#line 476
goto label_118;
#line 476
label_145:
#line 476
undef($memory_14);
#line 476
undef($memory_15);
#line 476
undef($memory_16);
#line 476
undef($memory_17);
#line 476
undef($memory_18);
#line 477
$memory_14 = "}";
#line 477
generator_c_priv::println($memory_0, $memory_14);
#line 477
undef($memory_14);
#line 478
$memory_13 = $memory_13 - $memory_11;
#line 479
$memory_15 = 0;
#line 479
$memory_16 = 1;
#line 479
$memory_17 = c_rt_lib::array_len($memory_10);
#line 479
label_158:
#line 479
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 479
if (c_rt_lib::check_true($memory_18)) {goto label_185;}
#line 479
$memory_14 = $memory_10->[$memory_15];
#line 480
$memory_20 = "copy";
#line 480
$memory_22 = generator_c_priv::get_reg_ref($memory_0, $memory_14);
#line 480
$memory_23 = "__const__f[";
#line 480
$memory_23 = $memory_23 . $memory_13;
#line 480
$memory_24 = "]";
#line 480
$memory_23 = $memory_23 . $memory_24;
#line 480
undef($memory_24);
#line 480
$memory_21 = [$memory_22,$memory_23];
#line 480
undef($memory_22);
#line 480
undef($memory_23);
#line 480
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 480
undef($memory_21);
#line 480
undef($memory_20);
#line 481
$memory_20 = ";";
#line 481
$memory_19 = $memory_19 . $memory_20;
#line 481
undef($memory_20);
#line 481
generator_c_priv::println($memory_0, $memory_19);
#line 481
undef($memory_19);
#line 482
$memory_19 = 1;
#line 482
$memory_13 = $memory_13 + $memory_19;
#line 482
undef($memory_19);
#line 483
$memory_15 = $memory_15 + $memory_16;
#line 483
goto label_158;
#line 483
label_185:
#line 483
undef($memory_14);
#line 483
undef($memory_15);
#line 483
undef($memory_16);
#line 483
undef($memory_17);
#line 483
undef($memory_18);
#line 484
$memory_14 = "const";
#line 484
$memory_14 = c_rt_lib::get_ref_hash($memory_0, $memory_14);
#line 484
$memory_15 = $memory_13;
#line 484
 if (c_rt_lib::get_hashcount($memory_14) > 1) {$memory_14 = {%{$memory_14}};}$memory_14->{'dynamic_nr'} = $memory_15;
#line 484
$memory_16 = "const";
#line 484
c_rt_lib::set_ref_hash($memory_0, $memory_16, $memory_14);
#line 484
undef($memory_16);
#line 484
undef($memory_14);
#line 484
undef($memory_15);
#line 484
undef($memory_13);
#line 485
goto label_202;
#line 485
label_202:
#line 485
undef($memory_12);
#line 485
undef($memory_11);
#line 485
undef($memory_10);
#line 486
goto label_207;
#line 486
label_207:
#line 486
undef($memory_8);
#line 486
undef($memory_9);
#line 486
label_210:
#line 487
$memory_4 = $memory_4 + $memory_5;
#line 487
goto label_49;
#line 487
label_213:
#line 487
undef($memory_2);
#line 487
undef($memory_3);
#line 487
undef($memory_4);
#line 487
undef($memory_5);
#line 487
undef($memory_6);
#line 487
undef($memory_7);
#line 488
$memory_2 = "}";
#line 488
$memory_3 = string::lf();
#line 488
$memory_2 = $memory_2 . $memory_3;
#line 488
undef($memory_3);
#line 488
generator_c_priv::println($memory_0, $memory_2);
#line 488
undef($memory_2);
#line 488
undef($memory_1);
#line 488
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 492
$memory_2 = $memory_0->{'args_type'};
#line 492
$memory_1 = array::len($memory_2);
#line 492
undef($memory_2);
#line 492
$memory_2 = 0;
#line 492
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 492
undef($memory_2);
#line 492
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 492
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 492
$memory_2 = c_rt_lib::to_nl(0);
#line 492
undef($memory_0);
#line 492
undef($memory_1);
#line 492
return $memory_2;
#line 492
undef($memory_2);
#line 492
goto label_14;
#line 492
label_14:
#line 492
undef($memory_1);
#line 493
$memory_1 = $memory_0->{'annotation'};
#line 493
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 494
$memory_2 = c_rt_lib::to_nl(0);
#line 496
$memory_4 = $memory_0->{'commands'};
#line 496
$memory_6 = 0;
#line 496
$memory_7 = 1;
#line 496
$memory_8 = c_rt_lib::array_len($memory_4);
#line 496
label_23:
#line 496
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 496
if (c_rt_lib::check_true($memory_9)) {goto label_213;}
#line 496
$memory_5 = $memory_4->[$memory_6];
#line 497
$memory_10 = $memory_5->{'cmd'};
#line 498
$memory_11 = $memory_10;
#line 498
$memory_11 = c_rt_lib::ov_is($memory_11, 'call');
#line 498
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 498
if (c_rt_lib::check_true($memory_11)) {goto label_72;}
#line 499
$memory_12 = $memory_10;
#line 499
$memory_12 = c_rt_lib::ov_as($memory_12, 'call');
#line 500
$memory_13 = $memory_12->{'fun_name'};
#line 500
$memory_14 = "sigleton_do_not_use_without_approval";
#line 500
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 500
undef($memory_14);
#line 500
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 500
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 500
if (c_rt_lib::check_true($memory_13)) {goto label_47;}
#line 500
undef($memory_10);
#line 500
undef($memory_11);
#line 500
undef($memory_12);
#line 500
undef($memory_13);
#line 500
goto label_210;
#line 500
goto label_47;
#line 500
label_47:
#line 500
undef($memory_13);
#line 501
$memory_13 = $memory_12->{'mod'};
#line 501
$memory_14 = "singleton";
#line 501
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 501
undef($memory_14);
#line 501
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 501
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 501
if (c_rt_lib::check_true($memory_13)) {goto label_62;}
#line 501
undef($memory_10);
#line 501
undef($memory_11);
#line 501
undef($memory_12);
#line 501
undef($memory_13);
#line 501
goto label_210;
#line 501
goto label_62;
#line 501
label_62:
#line 501
undef($memory_13);
#line 502
$memory_13 = c_rt_lib::to_nl(1);
#line 502
$memory_2 = $memory_13;
#line 502
undef($memory_13);
#line 503
$memory_13 = $memory_12->{'dest'};
#line 503
$memory_3 = $memory_13;
#line 503
undef($memory_13);
#line 503
undef($memory_12);
#line 504
goto label_207;
#line 504
label_72:
#line 504
$memory_11 = $memory_10;
#line 504
$memory_11 = c_rt_lib::ov_is($memory_11, 'return');
#line 504
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 504
if (c_rt_lib::check_true($memory_11)) {goto label_171;}
#line 505
$memory_12 = $memory_10;
#line 505
$memory_12 = c_rt_lib::ov_as($memory_12, 'return');
#line 506
$memory_13 = $memory_12;
#line 506
$memory_13 = c_rt_lib::ov_is($memory_13, 'val');
#line 506
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 506
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 506
if (c_rt_lib::check_true($memory_13)) {goto label_102;}
#line 506
$memory_14 = c_rt_lib::to_nl(0);
#line 506
undef($memory_0);
#line 506
undef($memory_1);
#line 506
undef($memory_2);
#line 506
undef($memory_3);
#line 506
undef($memory_4);
#line 506
undef($memory_5);
#line 506
undef($memory_6);
#line 506
undef($memory_7);
#line 506
undef($memory_8);
#line 506
undef($memory_9);
#line 506
undef($memory_10);
#line 506
undef($memory_11);
#line 506
undef($memory_12);
#line 506
undef($memory_13);
#line 506
return $memory_14;
#line 506
undef($memory_14);
#line 506
goto label_102;
#line 506
label_102:
#line 506
undef($memory_13);
#line 507
$memory_13 = $memory_1;
#line 507
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 507
if (c_rt_lib::check_true($memory_13)) {goto label_125;}
#line 507
$memory_14 = c_rt_lib::to_nl(1);
#line 507
undef($memory_0);
#line 507
undef($memory_1);
#line 507
undef($memory_2);
#line 507
undef($memory_3);
#line 507
undef($memory_4);
#line 507
undef($memory_5);
#line 507
undef($memory_6);
#line 507
undef($memory_7);
#line 507
undef($memory_8);
#line 507
undef($memory_9);
#line 507
undef($memory_10);
#line 507
undef($memory_11);
#line 507
undef($memory_12);
#line 507
undef($memory_13);
#line 507
return $memory_14;
#line 507
undef($memory_14);
#line 507
goto label_125;
#line 507
label_125:
#line 507
undef($memory_13);
#line 508
$memory_13 = $memory_2;
#line 508
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 508
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 508
if (c_rt_lib::check_true($memory_13)) {goto label_149;}
#line 508
$memory_14 = c_rt_lib::to_nl(0);
#line 508
undef($memory_0);
#line 508
undef($memory_1);
#line 508
undef($memory_2);
#line 508
undef($memory_3);
#line 508
undef($memory_4);
#line 508
undef($memory_5);
#line 508
undef($memory_6);
#line 508
undef($memory_7);
#line 508
undef($memory_8);
#line 508
undef($memory_9);
#line 508
undef($memory_10);
#line 508
undef($memory_11);
#line 508
undef($memory_12);
#line 508
undef($memory_13);
#line 508
return $memory_14;
#line 508
undef($memory_14);
#line 508
goto label_149;
#line 508
label_149:
#line 508
undef($memory_13);
#line 509
$memory_13 = $memory_12;
#line 509
$memory_13 = c_rt_lib::ov_as($memory_13, 'val');
#line 509
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_3);
#line 509
undef($memory_0);
#line 509
undef($memory_1);
#line 509
undef($memory_2);
#line 509
undef($memory_3);
#line 509
undef($memory_4);
#line 509
undef($memory_5);
#line 509
undef($memory_6);
#line 509
undef($memory_7);
#line 509
undef($memory_8);
#line 509
undef($memory_9);
#line 509
undef($memory_10);
#line 509
undef($memory_11);
#line 509
undef($memory_12);
#line 509
return $memory_13;
#line 509
undef($memory_13);
#line 509
undef($memory_12);
#line 510
goto label_207;
#line 510
label_171:
#line 510
$memory_11 = $memory_10;
#line 510
$memory_11 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 510
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 510
if (c_rt_lib::check_true($memory_11)) {goto label_177;}
#line 511
goto label_207;
#line 511
label_177:
#line 511
$memory_11 = $memory_10;
#line 511
$memory_11 = c_rt_lib::ov_is($memory_11, 'clear');
#line 511
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 511
if (c_rt_lib::check_true($memory_11)) {goto label_183;}
#line 512
goto label_207;
#line 512
label_183:
#line 513
$memory_12 = $memory_2;
#line 513
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 513
if (c_rt_lib::check_true($memory_12)) {goto label_204;}
#line 513
$memory_13 = c_rt_lib::to_nl(0);
#line 513
undef($memory_0);
#line 513
undef($memory_1);
#line 513
undef($memory_2);
#line 513
undef($memory_3);
#line 513
undef($memory_4);
#line 513
undef($memory_5);
#line 513
undef($memory_6);
#line 513
undef($memory_7);
#line 513
undef($memory_8);
#line 513
undef($memory_9);
#line 513
undef($memory_10);
#line 513
undef($memory_11);
#line 513
undef($memory_12);
#line 513
return $memory_13;
#line 513
undef($memory_13);
#line 513
goto label_204;
#line 513
label_204:
#line 513
undef($memory_12);
#line 514
goto label_207;
#line 514
label_207:
#line 514
undef($memory_11);
#line 514
undef($memory_10);
#line 514
label_210:
#line 515
$memory_6 = $memory_6 + $memory_7;
#line 515
goto label_23;
#line 515
label_213:
#line 515
undef($memory_4);
#line 515
undef($memory_5);
#line 515
undef($memory_6);
#line 515
undef($memory_7);
#line 515
undef($memory_8);
#line 515
undef($memory_9);
#line 516
$memory_4 = c_rt_lib::to_nl(0);
#line 516
undef($memory_0);
#line 516
undef($memory_1);
#line 516
undef($memory_2);
#line 516
undef($memory_3);
#line 516
return $memory_4;
#line 516
undef($memory_4);
#line 516
undef($memory_1);
#line 516
undef($memory_2);
#line 516
undef($memory_3);
#line 516
undef($memory_0);
#line 516
return;
}

sub generator_c_priv::move_args_to_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 520
$memory_2 = $memory_0->{'fun_args'};
#line 520
$memory_1 = array::len($memory_2);
#line 520
undef($memory_2);
#line 520
$memory_2 = 0;
#line 520
$memory_3 = 1;
#line 520
label_5:
#line 520
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 520
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 521
$memory_5 = $memory_0->{'fun_args'};
#line 521
$memory_5 = $memory_5->[$memory_2];
#line 521
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 521
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 524
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 524
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 524
$memory_6 = "NOMATCHALERT";
#line 524
$memory_6 = [$memory_6,$memory_5];
#line 524
die(dfile::ssave($memory_6));
#line 521
label_17:
#line 522
$memory_8 = "arg_val";
#line 522
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 522
$memory_9 = [$memory_10];
#line 522
undef($memory_10);
#line 522
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 522
undef($memory_9);
#line 522
undef($memory_8);
#line 522
generator_c_priv::print($memory_0, $memory_7);
#line 522
undef($memory_7);
#line 523
$memory_7 = ";";
#line 523
generator_c_priv::println($memory_0, $memory_7);
#line 523
undef($memory_7);
#line 524
goto label_33;
#line 524
label_31:
#line 525
goto label_33;
#line 525
label_33:
#line 525
undef($memory_5);
#line 525
undef($memory_6);
#line 526
$memory_2 = $memory_2 + $memory_3;
#line 526
goto label_5;
#line 526
label_38:
#line 526
undef($memory_1);
#line 526
undef($memory_2);
#line 526
undef($memory_3);
#line 526
undef($memory_4);
#line 526
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::move_register_to_ref_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 530
$memory_2 = $memory_0->{'fun_args'};
#line 530
$memory_1 = array::len($memory_2);
#line 530
undef($memory_2);
#line 530
$memory_2 = 0;
#line 530
$memory_3 = 1;
#line 530
label_5:
#line 530
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 530
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 531
$memory_5 = $memory_0->{'fun_args'};
#line 531
$memory_5 = $memory_5->[$memory_2];
#line 531
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 531
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 532
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 532
$memory_6 = "NOMATCHALERT";
#line 532
$memory_6 = [$memory_6,$memory_5];
#line 532
die(dfile::ssave($memory_6));
#line 531
label_17:
#line 532
goto label_21;
#line 532
label_19:
#line 533
goto label_21;
#line 533
label_21:
#line 533
undef($memory_5);
#line 533
undef($memory_6);
#line 534
$memory_2 = $memory_2 + $memory_3;
#line 534
goto label_5;
#line 534
label_26:
#line 534
undef($memory_1);
#line 534
undef($memory_2);
#line 534
undef($memory_3);
#line 534
undef($memory_4);
#line 534
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_fun_lib($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 538
$memory_2 = generator_c_priv::get_lib_fun($memory_0);
#line 538
$memory_3 = "(";
#line 538
$memory_2 = $memory_2 . $memory_3;
#line 538
undef($memory_3);
#line 539
$memory_3 = 0;
#line 540
$memory_5 = 0;
#line 540
$memory_6 = 1;
#line 540
$memory_7 = c_rt_lib::array_len($memory_1);
#line 540
label_8:
#line 540
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 540
if (c_rt_lib::check_true($memory_8)) {goto label_29;}
#line 540
$memory_4 = $memory_1->[$memory_5];
#line 541
$memory_9 = 0;
#line 541
$memory_9 = c_rt_lib::to_nl($memory_9 == $memory_3);
#line 541
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 541
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 541
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 541
$memory_10 = ", ";
#line 541
$memory_2 = $memory_2 . $memory_10;
#line 541
undef($memory_10);
#line 541
goto label_21;
#line 541
label_21:
#line 541
undef($memory_9);
#line 542
$memory_2 = $memory_2 . $memory_4;
#line 543
$memory_9 = 1;
#line 543
$memory_3 = $memory_3 + $memory_9;
#line 543
undef($memory_9);
#line 544
$memory_5 = $memory_5 + $memory_6;
#line 544
goto label_8;
#line 544
label_29:
#line 544
undef($memory_4);
#line 544
undef($memory_5);
#line 544
undef($memory_6);
#line 544
undef($memory_7);
#line 544
undef($memory_8);
#line 545
$memory_4 = ")";
#line 545
$memory_4 = $memory_2 . $memory_4;
#line 545
undef($memory_0);
#line 545
undef($memory_1);
#line 545
undef($memory_2);
#line 545
undef($memory_3);
#line 545
return $memory_4;
#line 545
undef($memory_4);
#line 545
undef($memory_2);
#line 545
undef($memory_3);
#line 545
undef($memory_0);
#line 545
undef($memory_1);
#line 545
return;
}

sub generator_c_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 549
$memory_2 = 0;
#line 549
$memory_3 = "00";
#line 549
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 549
undef($memory_3);
#line 549
undef($memory_2);
#line 549
undef($memory_0);
#line 549
return $memory_1;
#line 549
undef($memory_1);
#line 549
undef($memory_0);
#line 549
return;
}

sub generator_c_priv::get_fun_name($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 553
$memory_3 = "";
#line 553
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 553
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 553
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 553
$memory_4 = "_priv";
#line 553
$memory_4 = $memory_2 . $memory_4;
#line 553
$memory_0 = $memory_4;
#line 553
undef($memory_4);
#line 553
goto label_9;
#line 553
label_9:
#line 553
undef($memory_3);
#line 554
$memory_3 = generator_c_priv::get_module_name($memory_0);
#line 554
$memory_4 = 0;
#line 554
$memory_3 = $memory_3 . $memory_4;
#line 554
undef($memory_4);
#line 554
$memory_5 = 0;
#line 554
$memory_6 = "00";
#line 554
$memory_4 = string::replace($memory_1, $memory_5, $memory_6);
#line 554
undef($memory_6);
#line 554
undef($memory_5);
#line 554
$memory_3 = $memory_3 . $memory_4;
#line 554
undef($memory_4);
#line 554
undef($memory_0);
#line 554
undef($memory_1);
#line 554
undef($memory_2);
#line 554
return $memory_3;
#line 554
undef($memory_3);
#line 554
undef($memory_0);
#line 554
undef($memory_1);
#line 554
undef($memory_2);
#line 554
return;
}

sub generator_c_priv::get_lib_fun($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 558
$memory_2 = "c_rt_lib";
#line 558
$memory_3 = "";
#line 558
$memory_1 = generator_c_priv::get_fun_name($memory_2, $memory_0, $memory_3);
#line 558
undef($memory_3);
#line 558
undef($memory_2);
#line 558
undef($memory_0);
#line 558
return $memory_1;
#line 558
undef($memory_1);
#line 558
undef($memory_0);
#line 558
return;
}

sub generator_c_priv::generate_imm($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 562
$memory_2 = nl::is_hash($memory_1);
#line 562
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 562
if (c_rt_lib::check_true($memory_2)) {goto label_40;}
#line 563
$memory_4 = "hash_mk_dec";
#line 563
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 563
undef($memory_4);
#line 563
$memory_4 = "(";
#line 563
$memory_3 = $memory_3 . $memory_4;
#line 563
undef($memory_4);
#line 563
$memory_4 = hash::size($memory_1);
#line 563
$memory_3 = $memory_3 . $memory_4;
#line 563
undef($memory_4);
#line 563
generator_c_priv::print($memory_0, $memory_3);
#line 563
undef($memory_3);
#line 564
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 564
label_15:
#line 564
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 564
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 564
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 564
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 565
$memory_6 = ", ";
#line 565
generator_c_priv::print($memory_0, $memory_6);
#line 565
undef($memory_6);
#line 566
$memory_6 = generator_c_priv::get_const_sim($memory_0, $memory_3);
#line 566
generator_c_priv::print($memory_0, $memory_6);
#line 566
undef($memory_6);
#line 567
$memory_6 = ", ";
#line 567
generator_c_priv::print($memory_0, $memory_6);
#line 567
undef($memory_6);
#line 568
generator_c_priv::generate_imm($memory_0, $memory_4);
#line 569
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 569
goto label_15;
#line 569
label_32:
#line 569
undef($memory_3);
#line 569
undef($memory_4);
#line 569
undef($memory_5);
#line 570
$memory_3 = ")";
#line 570
generator_c_priv::print($memory_0, $memory_3);
#line 570
undef($memory_3);
#line 571
goto label_215;
#line 571
label_40:
#line 571
$memory_2 = nl::is_array($memory_1);
#line 571
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 571
if (c_rt_lib::check_true($memory_2)) {goto label_78;}
#line 572
$memory_4 = "array_mk_dec";
#line 572
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 572
undef($memory_4);
#line 572
$memory_4 = "(";
#line 572
$memory_3 = $memory_3 . $memory_4;
#line 572
undef($memory_4);
#line 572
$memory_4 = array::len($memory_1);
#line 572
$memory_3 = $memory_3 . $memory_4;
#line 572
undef($memory_4);
#line 572
generator_c_priv::print($memory_0, $memory_3);
#line 572
undef($memory_3);
#line 573
$memory_4 = 0;
#line 573
$memory_5 = 1;
#line 573
$memory_6 = c_rt_lib::array_len($memory_1);
#line 573
label_58:
#line 573
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 573
if (c_rt_lib::check_true($memory_7)) {goto label_68;}
#line 573
$memory_3 = $memory_1->[$memory_4];
#line 574
$memory_8 = ", ";
#line 574
generator_c_priv::print($memory_0, $memory_8);
#line 574
undef($memory_8);
#line 575
generator_c_priv::generate_imm($memory_0, $memory_3);
#line 576
$memory_4 = $memory_4 + $memory_5;
#line 576
goto label_58;
#line 576
label_68:
#line 576
undef($memory_3);
#line 576
undef($memory_4);
#line 576
undef($memory_5);
#line 576
undef($memory_6);
#line 576
undef($memory_7);
#line 577
$memory_3 = ")";
#line 577
generator_c_priv::print($memory_0, $memory_3);
#line 577
undef($memory_3);
#line 578
goto label_215;
#line 578
label_78:
#line 578
$memory_2 = nl::is_variant($memory_1);
#line 578
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 578
if (c_rt_lib::check_true($memory_2)) {goto label_198;}
#line 580
$memory_5 = ptd::sim();
#line 580
$memory_6 = ov::get_element($memory_1);
#line 580
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 580
undef($memory_6);
#line 580
undef($memory_5);
#line 580
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 580
undef($memory_4);
#line 581
$memory_4 = ov::has_value($memory_1);
#line 581
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 581
if (c_rt_lib::check_true($memory_4)) {goto label_180;}
#line 582
$memory_6 = "ov_mk_arg_dec";
#line 582
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 582
undef($memory_6);
#line 582
$memory_6 = "(";
#line 582
$memory_5 = $memory_5 . $memory_6;
#line 582
undef($memory_6);
#line 582
$memory_5 = $memory_5 . $memory_3;
#line 582
$memory_6 = ", ";
#line 582
$memory_5 = $memory_5 . $memory_6;
#line 582
undef($memory_6);
#line 582
generator_c_priv::print($memory_0, $memory_5);
#line 582
undef($memory_5);
#line 584
$memory_5 = ov::get_value($memory_1);
#line 585
$memory_6 = $memory_1;
#line 585
$memory_6 = c_rt_lib::ov_is($memory_6, 'ref');
#line 585
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 585
if (c_rt_lib::check_true($memory_10)) {goto label_110;}
#line 585
$memory_6 = nl::is_hash($memory_5);
#line 585
label_110:
#line 585
undef($memory_10);
#line 585
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 585
if (c_rt_lib::check_true($memory_9)) {goto label_118;}
#line 585
$memory_6 = hash::size($memory_5);
#line 585
$memory_10 = 2;
#line 585
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_10);
#line 585
undef($memory_10);
#line 585
label_118:
#line 585
undef($memory_9);
#line 585
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 585
if (c_rt_lib::check_true($memory_8)) {goto label_125;}
#line 585
$memory_9 = "name";
#line 585
$memory_6 = hash::has_key($memory_5, $memory_9);
#line 585
undef($memory_9);
#line 585
label_125:
#line 585
undef($memory_8);
#line 585
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 585
if (c_rt_lib::check_true($memory_7)) {goto label_132;}
#line 585
$memory_8 = "module";
#line 585
$memory_6 = hash::has_key($memory_5, $memory_8);
#line 585
undef($memory_8);
#line 585
label_132:
#line 585
undef($memory_7);
#line 585
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 585
if (c_rt_lib::check_true($memory_6)) {goto label_170;}
#line 586
$memory_9 = $memory_5->{'name'};
#line 586
$memory_7 = nl::is_sim($memory_9);
#line 586
undef($memory_9);
#line 586
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 586
if (c_rt_lib::check_true($memory_8)) {goto label_144;}
#line 586
$memory_9 = $memory_5->{'module'};
#line 586
$memory_7 = nl::is_sim($memory_9);
#line 586
undef($memory_9);
#line 586
label_144:
#line 586
undef($memory_8);
#line 586
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 586
if (c_rt_lib::check_true($memory_7)) {goto label_164;}
#line 587
$memory_10 = ptd::sim();
#line 587
$memory_11 = $memory_5->{'module'};
#line 587
$memory_9 = ptd::ensure($memory_10, $memory_11);
#line 587
undef($memory_11);
#line 587
undef($memory_10);
#line 587
$memory_11 = ptd::sim();
#line 587
$memory_12 = $memory_5->{'name'};
#line 587
$memory_10 = ptd::ensure($memory_11, $memory_12);
#line 587
undef($memory_12);
#line 587
undef($memory_11);
#line 587
$memory_8 = generator_c_priv::get_func_pointer($memory_0, $memory_9, $memory_10);
#line 587
undef($memory_10);
#line 587
undef($memory_9);
#line 587
generator_c_priv::print($memory_0, $memory_8);
#line 587
undef($memory_8);
#line 588
goto label_167;
#line 588
label_164:
#line 589
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 590
goto label_167;
#line 590
label_167:
#line 590
undef($memory_7);
#line 591
goto label_173;
#line 591
label_170:
#line 592
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 593
goto label_173;
#line 593
label_173:
#line 593
undef($memory_6);
#line 595
$memory_6 = ")";
#line 595
generator_c_priv::print($memory_0, $memory_6);
#line 595
undef($memory_6);
#line 595
undef($memory_5);
#line 596
goto label_194;
#line 596
label_180:
#line 597
$memory_6 = "ov_mk_none";
#line 597
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 597
undef($memory_6);
#line 597
$memory_6 = "(";
#line 597
$memory_5 = $memory_5 . $memory_6;
#line 597
undef($memory_6);
#line 597
$memory_5 = $memory_5 . $memory_3;
#line 597
$memory_6 = ")";
#line 597
$memory_5 = $memory_5 . $memory_6;
#line 597
undef($memory_6);
#line 597
generator_c_priv::print($memory_0, $memory_5);
#line 597
undef($memory_5);
#line 598
goto label_194;
#line 598
label_194:
#line 598
undef($memory_4);
#line 598
undef($memory_3);
#line 599
goto label_215;
#line 599
label_198:
#line 599
$memory_2 = nl::is_sim($memory_1);
#line 599
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 599
if (c_rt_lib::check_true($memory_2)) {goto label_210;}
#line 600
$memory_5 = ptd::sim();
#line 600
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 600
undef($memory_5);
#line 600
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 600
undef($memory_4);
#line 600
generator_c_priv::print($memory_0, $memory_3);
#line 600
undef($memory_3);
#line 601
goto label_215;
#line 601
label_210:
#line 602
$memory_3 = [];
#line 602
die(dfile::ssave($memory_3));
#line 602
undef($memory_3);
#line 603
goto label_215;
#line 603
label_215:
#line 603
undef($memory_2);
#line 603
undef($memory_1);
#line 603
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_func_pointer($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 608
$memory_3 = c_rt_lib::to_nl(1);
#line 608
$memory_4 = "additional_imports";
#line 608
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 608
$memory_5 = $memory_3;
#line 608
c_rt_lib::hash_set_value($memory_4, $memory_1, $memory_5);
#line 608
$memory_6 = "additional_imports";
#line 608
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 608
undef($memory_6);
#line 608
undef($memory_3);
#line 608
undef($memory_4);
#line 608
undef($memory_5);
#line 609
$memory_4 = "func_new";
#line 610
$memory_7 = $memory_0->{'mod_name'};
#line 610
$memory_6 = generator_c_priv::get_fun_name($memory_1, $memory_2, $memory_7);
#line 610
undef($memory_7);
#line 610
$memory_7 = "0ptr";
#line 610
$memory_6 = $memory_6 . $memory_7;
#line 610
undef($memory_7);
#line 611
$memory_7 = generator_c_priv::get_const_sim($memory_0, $memory_1);
#line 612
$memory_8 = generator_c_priv::get_const_sim($memory_0, $memory_2);
#line 612
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 612
undef($memory_6);
#line 612
undef($memory_7);
#line 612
undef($memory_8);
#line 612
$memory_3 = generator_c_priv::get_fun_lib($memory_4, $memory_5);
#line 612
undef($memory_5);
#line 612
undef($memory_4);
#line 612
undef($memory_1);
#line 612
undef($memory_2);
#line 612
$_[0] = $memory_0;return $memory_3;
#line 612
undef($memory_3);
#line 612
undef($memory_1);
#line 612
undef($memory_2);
#line 612
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 617
$memory_2 = "#line ";
#line 617
$memory_3 = $memory_1->{'debug'};
#line 617
$memory_3 = $memory_3->{'nast_debug'};
#line 617
$memory_3 = $memory_3->{'begin'};
#line 617
$memory_3 = $memory_3->{'line'};
#line 617
$memory_2 = $memory_2 . $memory_3;
#line 617
undef($memory_3);
#line 617
$memory_3 = string::lf();
#line 617
$memory_2 = $memory_2 . $memory_3;
#line 617
undef($memory_3);
#line 617
generator_c_priv::print($memory_0, $memory_2);
#line 617
undef($memory_2);
#line 618
$memory_2 = $memory_1->{'cmd'};
#line 618
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 618
if (c_rt_lib::check_true($memory_3)) {goto label_58;}
#line 623
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 623
if (c_rt_lib::check_true($memory_3)) {goto label_97;}
#line 631
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 631
if (c_rt_lib::check_true($memory_3)) {goto label_143;}
#line 634
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 634
if (c_rt_lib::check_true($memory_3)) {goto label_158;}
#line 636
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 636
if (c_rt_lib::check_true($memory_3)) {goto label_163;}
#line 640
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 640
if (c_rt_lib::check_true($memory_3)) {goto label_186;}
#line 647
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 647
if (c_rt_lib::check_true($memory_3)) {goto label_238;}
#line 650
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 650
if (c_rt_lib::check_true($memory_3)) {goto label_261;}
#line 653
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 653
if (c_rt_lib::check_true($memory_3)) {goto label_284;}
#line 661
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 661
if (c_rt_lib::check_true($memory_3)) {goto label_313;}
#line 663
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 663
if (c_rt_lib::check_true($memory_3)) {goto label_326;}
#line 667
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 667
if (c_rt_lib::check_true($memory_3)) {goto label_360;}
#line 672
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 672
if (c_rt_lib::check_true($memory_3)) {goto label_401;}
#line 675
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 675
if (c_rt_lib::check_true($memory_3)) {goto label_424;}
#line 681
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 681
if (c_rt_lib::check_true($memory_3)) {goto label_447;}
#line 684
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 684
if (c_rt_lib::check_true($memory_3)) {goto label_470;}
#line 690
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 690
if (c_rt_lib::check_true($memory_3)) {goto label_493;}
#line 704
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 704
if (c_rt_lib::check_true($memory_3)) {goto label_589;}
#line 707
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 707
if (c_rt_lib::check_true($memory_3)) {goto label_608;}
#line 712
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 712
if (c_rt_lib::check_true($memory_3)) {goto label_643;}
#line 714
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 714
if (c_rt_lib::check_true($memory_3)) {goto label_651;}
#line 714
$memory_3 = "NOMATCHALERT";
#line 714
$memory_3 = [$memory_3,$memory_2];
#line 714
die(dfile::ssave($memory_3));
#line 618
label_58:
#line 618
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 619
$memory_7 = $memory_4->{'src'};
#line 619
$memory_6 = array::len($memory_7);
#line 619
undef($memory_7);
#line 619
$memory_5 = [$memory_6];
#line 619
undef($memory_6);
#line 620
$memory_6 = $memory_4->{'src'};
#line 620
$memory_8 = 0;
#line 620
$memory_9 = 1;
#line 620
$memory_10 = c_rt_lib::array_len($memory_6);
#line 620
label_69:
#line 620
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 620
if (c_rt_lib::check_true($memory_11)) {goto label_78;}
#line 620
$memory_7 = $memory_6->[$memory_8];
#line 620
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_7);
#line 620
array::push($memory_5, $memory_12);
#line 620
undef($memory_12);
#line 620
$memory_8 = $memory_8 + $memory_9;
#line 620
goto label_69;
#line 620
label_78:
#line 620
undef($memory_6);
#line 620
undef($memory_7);
#line 620
undef($memory_8);
#line 620
undef($memory_9);
#line 620
undef($memory_10);
#line 620
undef($memory_11);
#line 621
$memory_7 = "array_mk";
#line 621
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 621
undef($memory_7);
#line 622
$memory_8 = $memory_4->{'dest'};
#line 622
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 622
undef($memory_8);
#line 622
generator_c_priv::print($memory_0, $memory_7);
#line 622
undef($memory_7);
#line 622
undef($memory_5);
#line 622
undef($memory_6);
#line 622
undef($memory_4);
#line 623
goto label_664;
#line 623
label_97:
#line 623
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 624
$memory_7 = $memory_4->{'src'};
#line 624
$memory_6 = array::len($memory_7);
#line 624
undef($memory_7);
#line 624
$memory_5 = [$memory_6];
#line 624
undef($memory_6);
#line 625
$memory_6 = $memory_4->{'src'};
#line 625
$memory_8 = 0;
#line 625
$memory_9 = 1;
#line 625
$memory_10 = c_rt_lib::array_len($memory_6);
#line 625
label_108:
#line 625
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 625
if (c_rt_lib::check_true($memory_11)) {goto label_124;}
#line 625
$memory_7 = $memory_6->[$memory_8];
#line 626
$memory_13 = $memory_7->{'key'};
#line 626
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 626
undef($memory_13);
#line 626
array::push($memory_5, $memory_12);
#line 626
undef($memory_12);
#line 627
$memory_13 = $memory_7->{'val'};
#line 627
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_13);
#line 627
undef($memory_13);
#line 627
array::push($memory_5, $memory_12);
#line 627
undef($memory_12);
#line 628
$memory_8 = $memory_8 + $memory_9;
#line 628
goto label_108;
#line 628
label_124:
#line 628
undef($memory_6);
#line 628
undef($memory_7);
#line 628
undef($memory_8);
#line 628
undef($memory_9);
#line 628
undef($memory_10);
#line 628
undef($memory_11);
#line 629
$memory_7 = "hash_mk";
#line 629
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 629
undef($memory_7);
#line 630
$memory_8 = $memory_4->{'dest'};
#line 630
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 630
undef($memory_8);
#line 630
generator_c_priv::print($memory_0, $memory_7);
#line 630
undef($memory_7);
#line 630
undef($memory_5);
#line 630
undef($memory_6);
#line 630
undef($memory_4);
#line 631
goto label_664;
#line 631
label_143:
#line 631
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 632
$memory_6 = $memory_4->{'module'};
#line 632
$memory_7 = $memory_4->{'name'};
#line 632
$memory_5 = generator_c_priv::get_func_pointer($memory_0, $memory_6, $memory_7);
#line 632
undef($memory_7);
#line 632
undef($memory_6);
#line 633
$memory_7 = $memory_4->{'dest'};
#line 633
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 633
undef($memory_7);
#line 633
generator_c_priv::print($memory_0, $memory_6);
#line 633
undef($memory_6);
#line 633
undef($memory_5);
#line 633
undef($memory_4);
#line 634
goto label_664;
#line 634
label_158:
#line 634
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 635
generator_c_priv::generate_call($memory_0, $memory_4);
#line 635
undef($memory_4);
#line 636
goto label_664;
#line 636
label_163:
#line 636
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 637
$memory_6 = generator_c_priv::get_unary_ops();
#line 637
$memory_7 = $memory_4->{'op'};
#line 637
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 637
undef($memory_7);
#line 637
undef($memory_6);
#line 638
$memory_9 = $memory_4->{'src'};
#line 638
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 638
undef($memory_9);
#line 638
$memory_7 = [$memory_8];
#line 638
undef($memory_8);
#line 638
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 638
undef($memory_7);
#line 639
$memory_8 = $memory_4->{'dest'};
#line 639
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 639
undef($memory_8);
#line 639
generator_c_priv::print($memory_0, $memory_7);
#line 639
undef($memory_7);
#line 639
undef($memory_5);
#line 639
undef($memory_6);
#line 639
undef($memory_4);
#line 640
goto label_664;
#line 640
label_186:
#line 640
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 641
$memory_6 = generator_c_priv::get_bin_ops();
#line 641
$memory_7 = $memory_4->{'op'};
#line 641
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 641
undef($memory_7);
#line 641
undef($memory_6);
#line 642
$memory_6 = $memory_4->{'dest'};
#line 642
$memory_8 = $memory_4->{'left'};
#line 642
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 642
undef($memory_8);
#line 642
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 642
if (c_rt_lib::check_true($memory_7)) {goto label_204;}
#line 642
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 642
$memory_9 = $memory_4->{'op'};
#line 642
$memory_6 = hash::has_key($memory_8, $memory_9);
#line 642
undef($memory_9);
#line 642
undef($memory_8);
#line 642
label_204:
#line 642
undef($memory_7);
#line 642
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 642
if (c_rt_lib::check_true($memory_6)) {goto label_216;}
#line 643
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 643
$memory_9 = $memory_4->{'op'};
#line 643
$memory_7 = hash::get_value($memory_8, $memory_9);
#line 643
undef($memory_9);
#line 643
undef($memory_8);
#line 643
$memory_5 = $memory_7;
#line 643
undef($memory_7);
#line 644
goto label_216;
#line 644
label_216:
#line 644
undef($memory_6);
#line 645
$memory_9 = $memory_4->{'left'};
#line 645
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 645
undef($memory_9);
#line 645
$memory_10 = $memory_4->{'right'};
#line 645
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 645
undef($memory_10);
#line 645
$memory_7 = [$memory_8,$memory_9];
#line 645
undef($memory_8);
#line 645
undef($memory_9);
#line 645
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 645
undef($memory_7);
#line 646
$memory_8 = $memory_4->{'dest'};
#line 646
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 646
undef($memory_8);
#line 646
generator_c_priv::print($memory_0, $memory_7);
#line 646
undef($memory_7);
#line 646
undef($memory_5);
#line 646
undef($memory_6);
#line 646
undef($memory_4);
#line 647
goto label_664;
#line 647
label_238:
#line 647
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 648
$memory_6 = "priv_is";
#line 648
$memory_9 = $memory_4->{'src'};
#line 648
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 648
undef($memory_9);
#line 648
$memory_10 = $memory_4->{'type'};
#line 648
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 648
undef($memory_10);
#line 648
$memory_7 = [$memory_8,$memory_9];
#line 648
undef($memory_8);
#line 648
undef($memory_9);
#line 648
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 648
undef($memory_7);
#line 648
undef($memory_6);
#line 649
$memory_7 = $memory_4->{'dest'};
#line 649
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 649
undef($memory_7);
#line 649
generator_c_priv::print($memory_0, $memory_6);
#line 649
undef($memory_6);
#line 649
undef($memory_5);
#line 649
undef($memory_4);
#line 650
goto label_664;
#line 650
label_261:
#line 650
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 651
$memory_6 = "priv_as";
#line 651
$memory_9 = $memory_4->{'src'};
#line 651
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 651
undef($memory_9);
#line 651
$memory_10 = $memory_4->{'type'};
#line 651
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 651
undef($memory_10);
#line 651
$memory_7 = [$memory_8,$memory_9];
#line 651
undef($memory_8);
#line 651
undef($memory_9);
#line 651
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 651
undef($memory_7);
#line 651
undef($memory_6);
#line 652
$memory_7 = $memory_4->{'dest'};
#line 652
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 652
undef($memory_7);
#line 652
generator_c_priv::print($memory_0, $memory_6);
#line 652
undef($memory_6);
#line 652
undef($memory_5);
#line 652
undef($memory_4);
#line 653
goto label_664;
#line 653
label_284:
#line 653
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 654
generator_c_priv::move_register_to_ref_args($memory_0);
#line 655
$memory_5 = "return ";
#line 655
generator_c_priv::print($memory_0, $memory_5);
#line 655
undef($memory_5);
#line 656
$memory_5 = c_rt_lib::ov_is($memory_4, 'val');
#line 656
if (c_rt_lib::check_true($memory_5)) {goto label_297;}
#line 658
$memory_5 = c_rt_lib::ov_is($memory_4, 'emp');
#line 658
if (c_rt_lib::check_true($memory_5)) {goto label_304;}
#line 658
$memory_5 = "NOMATCHALERT";
#line 658
$memory_5 = [$memory_5,$memory_4];
#line 658
die(dfile::ssave($memory_5));
#line 656
label_297:
#line 656
$memory_6 = c_rt_lib::ov_as($memory_4, 'val');
#line 657
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_6);
#line 657
generator_c_priv::print($memory_0, $memory_7);
#line 657
undef($memory_7);
#line 657
undef($memory_6);
#line 658
goto label_309;
#line 658
label_304:
#line 659
$memory_6 = "NULL";
#line 659
generator_c_priv::print($memory_0, $memory_6);
#line 659
undef($memory_6);
#line 660
goto label_309;
#line 660
label_309:
#line 660
undef($memory_5);
#line 660
undef($memory_4);
#line 661
goto label_664;
#line 661
label_313:
#line 661
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 662
$memory_5 = "nl_die_arg(";
#line 662
$memory_6 = generator_c_priv::get_reg($memory_0, $memory_4);
#line 662
$memory_5 = $memory_5 . $memory_6;
#line 662
undef($memory_6);
#line 662
$memory_6 = ")";
#line 662
$memory_5 = $memory_5 . $memory_6;
#line 662
undef($memory_6);
#line 662
generator_c_priv::print($memory_0, $memory_5);
#line 662
undef($memory_5);
#line 662
undef($memory_4);
#line 663
goto label_664;
#line 663
label_326:
#line 663
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 664
$memory_5 = $memory_4->{'dest'};
#line 664
$memory_6 = "";
#line 664
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 664
undef($memory_6);
#line 664
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 664
if (c_rt_lib::check_true($memory_5)) {goto label_341;}
#line 664
undef($memory_1);
#line 664
undef($memory_2);
#line 664
undef($memory_3);
#line 664
undef($memory_4);
#line 664
undef($memory_5);
#line 664
$_[0] = $memory_0;return;
#line 664
goto label_341;
#line 664
label_341:
#line 664
undef($memory_5);
#line 665
$memory_7 = $memory_4->{'dest'};
#line 665
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 665
undef($memory_7);
#line 665
$memory_8 = $memory_4->{'src'};
#line 665
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_8);
#line 665
undef($memory_8);
#line 665
$memory_5 = [$memory_6,$memory_7];
#line 665
undef($memory_6);
#line 665
undef($memory_7);
#line 666
$memory_7 = "copy";
#line 666
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 666
undef($memory_7);
#line 666
generator_c_priv::print($memory_0, $memory_6);
#line 666
undef($memory_6);
#line 666
undef($memory_5);
#line 666
undef($memory_4);
#line 667
goto label_664;
#line 667
label_360:
#line 667
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 668
$memory_5 = $memory_4->{'dest'};
#line 668
$memory_6 = "";
#line 668
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 668
undef($memory_6);
#line 668
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 668
if (c_rt_lib::check_true($memory_5)) {goto label_375;}
#line 668
undef($memory_1);
#line 668
undef($memory_2);
#line 668
undef($memory_3);
#line 668
undef($memory_4);
#line 668
undef($memory_5);
#line 668
$_[0] = $memory_0;return;
#line 668
goto label_375;
#line 668
label_375:
#line 668
undef($memory_5);
#line 669
$memory_6 = "move";
#line 669
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 669
undef($memory_6);
#line 669
$memory_6 = "(";
#line 669
$memory_5 = $memory_5 . $memory_6;
#line 669
undef($memory_6);
#line 669
$memory_7 = $memory_4->{'dest'};
#line 669
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 669
undef($memory_7);
#line 669
$memory_5 = $memory_5 . $memory_6;
#line 669
undef($memory_6);
#line 669
$memory_6 = ",";
#line 669
$memory_5 = $memory_5 . $memory_6;
#line 669
undef($memory_6);
#line 669
generator_c_priv::print($memory_0, $memory_5);
#line 669
undef($memory_5);
#line 670
$memory_5 = $memory_4->{'val'};
#line 670
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 670
undef($memory_5);
#line 671
$memory_5 = ")";
#line 671
generator_c_priv::print($memory_0, $memory_5);
#line 671
undef($memory_5);
#line 671
undef($memory_4);
#line 672
goto label_664;
#line 672
label_401:
#line 672
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 673
$memory_6 = "array_get";
#line 673
$memory_9 = $memory_4->{'src'};
#line 673
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 673
undef($memory_9);
#line 673
$memory_10 = $memory_4->{'idx'};
#line 673
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 673
undef($memory_10);
#line 673
$memory_7 = [$memory_8,$memory_9];
#line 673
undef($memory_8);
#line 673
undef($memory_9);
#line 673
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 673
undef($memory_7);
#line 673
undef($memory_6);
#line 674
$memory_7 = $memory_4->{'dest'};
#line 674
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 674
undef($memory_7);
#line 674
generator_c_priv::print($memory_0, $memory_6);
#line 674
undef($memory_6);
#line 674
undef($memory_5);
#line 674
undef($memory_4);
#line 675
goto label_664;
#line 675
label_424:
#line 675
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 676
$memory_6 = "array_set";
#line 677
$memory_9 = $memory_4->{'src'};
#line 677
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 677
undef($memory_9);
#line 678
$memory_10 = $memory_4->{'idx'};
#line 678
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 678
undef($memory_10);
#line 679
$memory_11 = $memory_4->{'val'};
#line 679
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 679
undef($memory_11);
#line 679
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 679
undef($memory_8);
#line 679
undef($memory_9);
#line 679
undef($memory_10);
#line 679
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 679
undef($memory_7);
#line 679
undef($memory_6);
#line 679
generator_c_priv::print($memory_0, $memory_5);
#line 679
undef($memory_5);
#line 679
undef($memory_4);
#line 681
goto label_664;
#line 681
label_447:
#line 681
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 682
$memory_6 = "hash_get_value_dec";
#line 682
$memory_9 = $memory_4->{'src'};
#line 682
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 682
undef($memory_9);
#line 682
$memory_10 = $memory_4->{'key'};
#line 682
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 682
undef($memory_10);
#line 682
$memory_7 = [$memory_8,$memory_9];
#line 682
undef($memory_8);
#line 682
undef($memory_9);
#line 682
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 682
undef($memory_7);
#line 682
undef($memory_6);
#line 683
$memory_7 = $memory_4->{'dest'};
#line 683
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 683
undef($memory_7);
#line 683
generator_c_priv::print($memory_0, $memory_6);
#line 683
undef($memory_6);
#line 683
undef($memory_5);
#line 683
undef($memory_4);
#line 684
goto label_664;
#line 684
label_470:
#line 684
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 685
$memory_6 = "hash_set_value_dec";
#line 686
$memory_9 = $memory_4->{'src'};
#line 686
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 686
undef($memory_9);
#line 687
$memory_10 = $memory_4->{'key'};
#line 687
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 687
undef($memory_10);
#line 688
$memory_11 = $memory_4->{'val'};
#line 688
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 688
undef($memory_11);
#line 688
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 688
undef($memory_8);
#line 688
undef($memory_9);
#line 688
undef($memory_10);
#line 688
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 688
undef($memory_7);
#line 688
undef($memory_6);
#line 688
generator_c_priv::print($memory_0, $memory_5);
#line 688
undef($memory_5);
#line 688
undef($memory_4);
#line 690
goto label_664;
#line 690
label_493:
#line 690
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 692
$memory_6 = $memory_4->{'src'};
#line 692
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 692
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 692
if (c_rt_lib::check_true($memory_7)) {goto label_503;}
#line 692
$memory_6 = $memory_4->{'name'};
#line 692
$memory_8 = "TRUE";
#line 692
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 692
undef($memory_8);
#line 692
label_503:
#line 692
undef($memory_7);
#line 692
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 692
if (c_rt_lib::check_true($memory_6)) {goto label_515;}
#line 693
$memory_8 = "get_true";
#line 693
$memory_9 = [];
#line 693
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 693
undef($memory_9);
#line 693
undef($memory_8);
#line 693
$memory_5 = $memory_7;
#line 693
undef($memory_7);
#line 694
goto label_579;
#line 694
label_515:
#line 694
$memory_6 = $memory_4->{'src'};
#line 694
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 694
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 694
if (c_rt_lib::check_true($memory_7)) {goto label_524;}
#line 694
$memory_6 = $memory_4->{'name'};
#line 694
$memory_8 = "FALSE";
#line 694
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 694
undef($memory_8);
#line 694
label_524:
#line 694
undef($memory_7);
#line 694
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 694
if (c_rt_lib::check_true($memory_6)) {goto label_536;}
#line 695
$memory_8 = "get_false";
#line 695
$memory_9 = [];
#line 695
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 695
undef($memory_9);
#line 695
undef($memory_8);
#line 695
$memory_5 = $memory_7;
#line 695
undef($memory_7);
#line 696
goto label_579;
#line 696
label_536:
#line 697
$memory_7 = $memory_4->{'src'};
#line 697
$memory_8 = c_rt_lib::ov_is($memory_7, 'arg');
#line 697
if (c_rt_lib::check_true($memory_8)) {goto label_545;}
#line 699
$memory_8 = c_rt_lib::ov_is($memory_7, 'emp');
#line 699
if (c_rt_lib::check_true($memory_8)) {goto label_562;}
#line 699
$memory_8 = "NOMATCHALERT";
#line 699
$memory_8 = [$memory_8,$memory_7];
#line 699
die(dfile::ssave($memory_8));
#line 697
label_545:
#line 697
$memory_9 = c_rt_lib::ov_as($memory_7, 'arg');
#line 698
$memory_11 = "ov_mk_arg";
#line 698
$memory_14 = $memory_4->{'name'};
#line 698
$memory_13 = generator_c_priv::get_const_sim($memory_0, $memory_14);
#line 698
undef($memory_14);
#line 698
$memory_14 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 698
$memory_12 = [$memory_13,$memory_14];
#line 698
undef($memory_13);
#line 698
undef($memory_14);
#line 698
$memory_10 = generator_c_priv::get_fun_lib($memory_11, $memory_12);
#line 698
undef($memory_12);
#line 698
undef($memory_11);
#line 698
$memory_5 = $memory_10;
#line 698
undef($memory_10);
#line 698
undef($memory_9);
#line 699
goto label_575;
#line 699
label_562:
#line 700
$memory_10 = "ov_mk_none";
#line 700
$memory_13 = $memory_4->{'name'};
#line 700
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 700
undef($memory_13);
#line 700
$memory_11 = [$memory_12];
#line 700
undef($memory_12);
#line 700
$memory_9 = generator_c_priv::get_fun_lib($memory_10, $memory_11);
#line 700
undef($memory_11);
#line 700
undef($memory_10);
#line 700
$memory_5 = $memory_9;
#line 700
undef($memory_9);
#line 701
goto label_575;
#line 701
label_575:
#line 701
undef($memory_7);
#line 701
undef($memory_8);
#line 702
goto label_579;
#line 702
label_579:
#line 702
undef($memory_6);
#line 703
$memory_7 = $memory_4->{'dest'};
#line 703
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 703
undef($memory_7);
#line 703
generator_c_priv::print($memory_0, $memory_6);
#line 703
undef($memory_6);
#line 703
undef($memory_5);
#line 703
undef($memory_4);
#line 704
goto label_664;
#line 704
label_589:
#line 704
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 705
$memory_5 = "label_";
#line 705
$memory_5 = $memory_5 . $memory_4;
#line 705
$memory_6 = ":";
#line 705
$memory_5 = $memory_5 . $memory_6;
#line 705
undef($memory_6);
#line 705
$memory_6 = string::lf();
#line 705
$memory_5 = $memory_5 . $memory_6;
#line 705
undef($memory_6);
#line 705
generator_c_priv::print($memory_0, $memory_5);
#line 705
undef($memory_5);
#line 706
undef($memory_1);
#line 706
undef($memory_2);
#line 706
undef($memory_3);
#line 706
undef($memory_4);
#line 706
$_[0] = $memory_0;return;
#line 706
undef($memory_4);
#line 707
goto label_664;
#line 707
label_608:
#line 707
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 708
$memory_5 = "if(";
#line 708
generator_c_priv::print($memory_0, $memory_5);
#line 708
undef($memory_5);
#line 709
$memory_6 = "check_true_native";
#line 709
$memory_9 = $memory_4->{'src'};
#line 709
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 709
undef($memory_9);
#line 709
$memory_7 = [$memory_8];
#line 709
undef($memory_8);
#line 709
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 709
undef($memory_7);
#line 709
undef($memory_6);
#line 709
generator_c_priv::print($memory_0, $memory_5);
#line 709
undef($memory_5);
#line 710
$memory_5 = "){ goto label_";
#line 710
$memory_6 = $memory_4->{'dest'};
#line 710
$memory_5 = $memory_5 . $memory_6;
#line 710
undef($memory_6);
#line 710
$memory_6 = ";}";
#line 710
$memory_5 = $memory_5 . $memory_6;
#line 710
undef($memory_6);
#line 710
$memory_6 = string::lf();
#line 710
$memory_5 = $memory_5 . $memory_6;
#line 710
undef($memory_6);
#line 710
generator_c_priv::print($memory_0, $memory_5);
#line 710
undef($memory_5);
#line 711
undef($memory_1);
#line 711
undef($memory_2);
#line 711
undef($memory_3);
#line 711
undef($memory_4);
#line 711
$_[0] = $memory_0;return;
#line 711
undef($memory_4);
#line 712
goto label_664;
#line 712
label_643:
#line 712
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 713
$memory_5 = "goto label_";
#line 713
$memory_5 = $memory_5 . $memory_4;
#line 713
generator_c_priv::print($memory_0, $memory_5);
#line 713
undef($memory_5);
#line 713
undef($memory_4);
#line 714
goto label_664;
#line 714
label_651:
#line 714
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 715
$memory_6 = "clear";
#line 715
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_4);
#line 715
$memory_7 = [$memory_8];
#line 715
undef($memory_8);
#line 715
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 715
undef($memory_7);
#line 715
undef($memory_6);
#line 715
generator_c_priv::print($memory_0, $memory_5);
#line 715
undef($memory_5);
#line 715
undef($memory_4);
#line 716
goto label_664;
#line 716
label_664:
#line 716
undef($memory_2);
#line 716
undef($memory_3);
#line 717
$memory_2 = ";";
#line 717
$memory_3 = string::lf();
#line 717
$memory_2 = $memory_2 . $memory_3;
#line 717
undef($memory_3);
#line 717
generator_c_priv::print($memory_0, $memory_2);
#line 717
undef($memory_2);
#line 717
undef($memory_1);
#line 717
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_assign($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 721
$memory_3 = "";
#line 721
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 721
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 721
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 722
$memory_5 = "delete";
#line 722
$memory_6 = [$memory_2];
#line 722
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 722
undef($memory_6);
#line 722
undef($memory_5);
#line 722
undef($memory_1);
#line 722
undef($memory_2);
#line 722
undef($memory_3);
#line 722
$_[0] = $memory_0;return $memory_4;
#line 722
undef($memory_4);
#line 723
goto label_29;
#line 723
label_15:
#line 724
$memory_5 = "move";
#line 724
$memory_7 = generator_c_priv::get_reg_ref($memory_0, $memory_1);
#line 724
$memory_6 = [$memory_7,$memory_2];
#line 724
undef($memory_7);
#line 724
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 724
undef($memory_6);
#line 724
undef($memory_5);
#line 724
undef($memory_1);
#line 724
undef($memory_2);
#line 724
undef($memory_3);
#line 724
$_[0] = $memory_0;return $memory_4;
#line 724
undef($memory_4);
#line 725
goto label_29;
#line 725
label_29:
#line 725
undef($memory_3);
#line 725
undef($memory_1);
#line 725
undef($memory_2);
#line 725
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::generate_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 729
$memory_3 = $memory_1->{'mod'};
#line 729
$memory_4 = $memory_1->{'fun_name'};
#line 729
$memory_5 = $memory_0->{'mod_name'};
#line 729
$memory_2 = generator_c_priv::get_fun_name($memory_3, $memory_4, $memory_5);
#line 729
undef($memory_5);
#line 729
undef($memory_4);
#line 729
undef($memory_3);
#line 729
$memory_3 = "(";
#line 729
$memory_2 = $memory_2 . $memory_3;
#line 729
undef($memory_3);
#line 730
$memory_4 = $memory_1->{'args'};
#line 730
$memory_3 = array::len($memory_4);
#line 730
undef($memory_4);
#line 730
$memory_4 = 0;
#line 730
$memory_5 = 1;
#line 730
label_15:
#line 730
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 730
if (c_rt_lib::check_true($memory_6)) {goto label_57;}
#line 731
$memory_7 = 0;
#line 731
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_4);
#line 731
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 731
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 731
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 731
$memory_8 = ", ";
#line 731
$memory_2 = $memory_2 . $memory_8;
#line 731
undef($memory_8);
#line 731
goto label_27;
#line 731
label_27:
#line 731
undef($memory_7);
#line 732
$memory_7 = $memory_1->{'args'};
#line 732
$memory_7 = $memory_7->[$memory_4];
#line 732
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 732
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 734
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 734
if (c_rt_lib::check_true($memory_8)) {goto label_45;}
#line 734
$memory_8 = "NOMATCHALERT";
#line 734
$memory_8 = [$memory_8,$memory_7];
#line 734
die(dfile::ssave($memory_8));
#line 732
label_38:
#line 732
$memory_9 = c_rt_lib::ov_as($memory_7, 'val');
#line 733
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 733
$memory_2 = $memory_2 . $memory_10;
#line 733
undef($memory_10);
#line 733
undef($memory_9);
#line 734
goto label_52;
#line 734
label_45:
#line 734
$memory_9 = c_rt_lib::ov_as($memory_7, 'ref');
#line 735
$memory_10 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 735
$memory_2 = $memory_2 . $memory_10;
#line 735
undef($memory_10);
#line 735
undef($memory_9);
#line 736
goto label_52;
#line 736
label_52:
#line 736
undef($memory_7);
#line 736
undef($memory_8);
#line 737
$memory_4 = $memory_4 + $memory_5;
#line 737
goto label_15;
#line 737
label_57:
#line 737
undef($memory_3);
#line 737
undef($memory_4);
#line 737
undef($memory_5);
#line 737
undef($memory_6);
#line 738
$memory_3 = ")";
#line 738
$memory_2 = $memory_2 . $memory_3;
#line 738
undef($memory_3);
#line 739
$memory_4 = $memory_1->{'dest'};
#line 739
$memory_3 = generator_c_priv::get_assign($memory_0, $memory_4, $memory_2);
#line 739
undef($memory_4);
#line 739
generator_c_priv::print($memory_0, $memory_3);
#line 739
undef($memory_3);
#line 739
undef($memory_2);
#line 739
undef($memory_1);
#line 739
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::create_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 743
$memory_1 = string_utils::is_integer($memory_0);
#line 743
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 743
if (c_rt_lib::check_true($memory_1)) {goto label_18;}
#line 744
$memory_3 = "int_new";
#line 744
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 744
undef($memory_3);
#line 744
$memory_3 = "(";
#line 744
$memory_2 = $memory_2 . $memory_3;
#line 744
undef($memory_3);
#line 744
$memory_2 = $memory_2 . $memory_0;
#line 744
$memory_3 = ")";
#line 744
$memory_2 = $memory_2 . $memory_3;
#line 744
undef($memory_3);
#line 744
undef($memory_0);
#line 744
undef($memory_1);
#line 744
return $memory_2;
#line 744
undef($memory_2);
#line 745
goto label_99;
#line 745
label_18:
#line 745
$memory_1 = string_utils::is_float($memory_0);
#line 745
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 745
if (c_rt_lib::check_true($memory_1)) {goto label_37;}
#line 746
$memory_3 = "float_new";
#line 746
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 746
undef($memory_3);
#line 746
$memory_3 = "(";
#line 746
$memory_2 = $memory_2 . $memory_3;
#line 746
undef($memory_3);
#line 746
$memory_2 = $memory_2 . $memory_0;
#line 746
$memory_3 = ")";
#line 746
$memory_2 = $memory_2 . $memory_3;
#line 746
undef($memory_3);
#line 746
undef($memory_0);
#line 746
undef($memory_1);
#line 746
return $memory_2;
#line 746
undef($memory_2);
#line 747
goto label_99;
#line 747
label_37:
#line 748
$memory_2 = "";
#line 748
$memory_2 = $memory_0 . $memory_2;
#line 749
$memory_4 = "\\";
#line 749
$memory_5 = "\\\\";
#line 749
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 749
undef($memory_5);
#line 749
undef($memory_4);
#line 749
$memory_2 = $memory_3;
#line 749
undef($memory_3);
#line 750
$memory_4 = string::lf();
#line 750
$memory_5 = "\\n";
#line 750
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 750
undef($memory_5);
#line 750
undef($memory_4);
#line 750
$memory_2 = $memory_3;
#line 750
undef($memory_3);
#line 751
$memory_4 = string::r();
#line 751
$memory_5 = "\\r";
#line 751
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 751
undef($memory_5);
#line 751
undef($memory_4);
#line 751
$memory_2 = $memory_3;
#line 751
undef($memory_3);
#line 752
$memory_4 = string::tab();
#line 752
$memory_5 = "\\t";
#line 752
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 752
undef($memory_5);
#line 752
undef($memory_4);
#line 752
$memory_2 = $memory_3;
#line 752
undef($memory_3);
#line 753
$memory_4 = "\"";
#line 753
$memory_5 = "\\\"";
#line 753
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 753
undef($memory_5);
#line 753
undef($memory_4);
#line 753
$memory_2 = $memory_3;
#line 753
undef($memory_3);
#line 754
$memory_4 = "'";
#line 754
$memory_5 = "\\'";
#line 754
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 754
undef($memory_5);
#line 754
undef($memory_4);
#line 754
$memory_2 = $memory_3;
#line 754
undef($memory_3);
#line 755
$memory_4 = "string_new";
#line 755
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 755
undef($memory_4);
#line 755
$memory_4 = "(\"";
#line 755
$memory_3 = $memory_3 . $memory_4;
#line 755
undef($memory_4);
#line 755
$memory_3 = $memory_3 . $memory_2;
#line 755
$memory_4 = "\")";
#line 755
$memory_3 = $memory_3 . $memory_4;
#line 755
undef($memory_4);
#line 755
undef($memory_0);
#line 755
undef($memory_1);
#line 755
undef($memory_2);
#line 755
return $memory_3;
#line 755
undef($memory_3);
#line 755
undef($memory_2);
#line 756
goto label_99;
#line 756
label_99:
#line 756
undef($memory_1);
#line 756
undef($memory_0);
#line 756
return;
}

sub generator_c_priv::create_sim_to_memory($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 760
$memory_2 = string_utils::is_integer($memory_0);
#line 760
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 760
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 761
$memory_4 = "int_new_to_memory";
#line 761
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 761
undef($memory_4);
#line 761
$memory_4 = "(";
#line 761
$memory_3 = $memory_3 . $memory_4;
#line 761
undef($memory_4);
#line 761
$memory_3 = $memory_3 . $memory_0;
#line 761
$memory_4 = ",";
#line 761
$memory_3 = $memory_3 . $memory_4;
#line 761
undef($memory_4);
#line 761
$memory_3 = $memory_3 . $memory_1;
#line 761
$memory_4 = ")";
#line 761
$memory_3 = $memory_3 . $memory_4;
#line 761
undef($memory_4);
#line 761
undef($memory_0);
#line 761
undef($memory_1);
#line 761
undef($memory_2);
#line 761
return $memory_3;
#line 761
undef($memory_3);
#line 762
goto label_123;
#line 762
label_23:
#line 762
$memory_2 = string_utils::is_float($memory_0);
#line 762
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 762
if (c_rt_lib::check_true($memory_2)) {goto label_47;}
#line 763
$memory_4 = "float_new_to_memory";
#line 763
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 763
undef($memory_4);
#line 763
$memory_4 = "(";
#line 763
$memory_3 = $memory_3 . $memory_4;
#line 763
undef($memory_4);
#line 763
$memory_3 = $memory_3 . $memory_0;
#line 763
$memory_4 = ",";
#line 763
$memory_3 = $memory_3 . $memory_4;
#line 763
undef($memory_4);
#line 763
$memory_3 = $memory_3 . $memory_1;
#line 763
$memory_4 = ")";
#line 763
$memory_3 = $memory_3 . $memory_4;
#line 763
undef($memory_4);
#line 763
undef($memory_0);
#line 763
undef($memory_1);
#line 763
undef($memory_2);
#line 763
return $memory_3;
#line 763
undef($memory_3);
#line 764
goto label_123;
#line 764
label_47:
#line 765
$memory_3 = "";
#line 765
$memory_3 = $memory_0 . $memory_3;
#line 766
$memory_5 = "\\";
#line 766
$memory_6 = "\\\\";
#line 766
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 766
undef($memory_6);
#line 766
undef($memory_5);
#line 766
$memory_3 = $memory_4;
#line 766
undef($memory_4);
#line 767
$memory_5 = string::lf();
#line 767
$memory_6 = "\\n";
#line 767
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 767
undef($memory_6);
#line 767
undef($memory_5);
#line 767
$memory_3 = $memory_4;
#line 767
undef($memory_4);
#line 768
$memory_5 = string::r();
#line 768
$memory_6 = "\\r";
#line 768
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 768
undef($memory_6);
#line 768
undef($memory_5);
#line 768
$memory_3 = $memory_4;
#line 768
undef($memory_4);
#line 769
$memory_5 = string::tab();
#line 769
$memory_6 = "\\t";
#line 769
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 769
undef($memory_6);
#line 769
undef($memory_5);
#line 769
$memory_3 = $memory_4;
#line 769
undef($memory_4);
#line 770
$memory_5 = "\"";
#line 770
$memory_6 = "\\\"";
#line 770
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 770
undef($memory_6);
#line 770
undef($memory_5);
#line 770
$memory_3 = $memory_4;
#line 770
undef($memory_4);
#line 771
$memory_5 = "'";
#line 771
$memory_6 = "\\'";
#line 771
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 771
undef($memory_6);
#line 771
undef($memory_5);
#line 771
$memory_3 = $memory_4;
#line 771
undef($memory_4);
#line 772
$memory_6 = 0;
#line 772
$memory_5 = string::chr($memory_6);
#line 772
undef($memory_6);
#line 772
$memory_6 = "\\0";
#line 772
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 772
undef($memory_6);
#line 772
undef($memory_5);
#line 772
$memory_3 = $memory_4;
#line 772
undef($memory_4);
#line 773
$memory_5 = "string_new_to_memory";
#line 773
$memory_4 = generator_c_priv::get_lib_fun($memory_5);
#line 773
undef($memory_5);
#line 773
$memory_5 = "(\"";
#line 773
$memory_4 = $memory_4 . $memory_5;
#line 773
undef($memory_5);
#line 773
$memory_4 = $memory_4 . $memory_3;
#line 773
$memory_5 = "\",";
#line 773
$memory_4 = $memory_4 . $memory_5;
#line 773
undef($memory_5);
#line 773
$memory_4 = $memory_4 . $memory_1;
#line 773
$memory_5 = ")";
#line 773
$memory_4 = $memory_4 . $memory_5;
#line 773
undef($memory_5);
#line 773
undef($memory_0);
#line 773
undef($memory_1);
#line 773
undef($memory_2);
#line 773
undef($memory_3);
#line 773
return $memory_4;
#line 773
undef($memory_4);
#line 773
undef($memory_3);
#line 774
goto label_123;
#line 774
label_123:
#line 774
undef($memory_2);
#line 774
undef($memory_0);
#line 774
undef($memory_1);
#line 774
return;
}
