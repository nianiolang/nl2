use c_rt_lib;
use string;
use array;
use ptd;
use nast;
use wprinter;
use boolean_t;
sub pretty_printer_priv::state_print;
sub pretty_printer::struct_t;
sub pretty_printer::print_module_to_struct;
sub pretty_printer::print_module_to_str;
sub pretty_printer_priv::print_fun_def;
sub pretty_printer_priv::print_fun_def_head;
sub pretty_printer_priv::join_print_var_decl;
sub pretty_printer_priv::print_var_decl;
sub pretty_printer_priv::pind;
sub pretty_printer_priv::join_print_hash_elem;
sub pretty_printer_priv::print_hash_elem;
sub pretty_printer_priv::print_variant;
sub pretty_printer_priv::print_variant_case_decl;
sub pretty_printer_priv::join_print_fun_arg;
sub pretty_printer_priv::print_fun_arg;
sub pretty_printer_priv::count_structs;
sub pretty_printer_priv::get_compressed_fun_val;
sub pretty_printer_priv::print_st;
sub pretty_printer_priv::get_fun_label;
sub pretty_printer_priv::string_to_nl;
sub pretty_printer_priv::join_print_val;
sub pretty_printer_priv::is_to_change_ov;
sub pretty_printer_priv::print_val;
sub pretty_printer_priv::print_cond_mod;
sub pretty_printer_priv::print_loop;
sub pretty_printer_priv::print_loop_or_mod;
sub pretty_printer_priv::print_try_ensure;
sub pretty_printer_priv::print_return;
sub pretty_printer_priv::print_sim_value;
sub pretty_printer_priv::print_break;
sub pretty_printer_priv::print_continue;
sub pretty_printer_priv::print_die;
sub pretty_printer_priv::print_simple_statement;
sub pretty_printer_priv::flush_sim_statement;
sub pretty_printer_priv::print_cmd;

return 1;

sub pretty_printer_priv::state_print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 14
$memory_2 = "out";
#line 14
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 14
$memory_2 = $memory_2 . $memory_1;
#line 14
$memory_3 = "out";
#line 14
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 14
undef($memory_3);
#line 14
undef($memory_2);
#line 14
undef($memory_1);
#line 14
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer::__struct_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 19
$memory_3 = ptd::sim();
#line 19
$memory_2 = ptd::arr($memory_3);
#line 19
undef($memory_3);
#line 20
$memory_6 = ptd::sim();
#line 20
$memory_7 = ptd::sim();
#line 20
$memory_8 = ptd::sim();
#line 20
$memory_5 = {name => $memory_6,head => $memory_7,body => $memory_8,};
#line 20
undef($memory_6);
#line 20
undef($memory_7);
#line 20
undef($memory_8);
#line 20
$memory_4 = ptd::rec($memory_5);
#line 20
undef($memory_5);
#line 20
$memory_3 = ptd::arr($memory_4);
#line 20
undef($memory_4);
#line 20
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
$memory_0 = ptd::rec($memory_1);
#line 20
undef($memory_1);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_struct_t;
sub pretty_printer::struct_t() {
	$_struct_t = pretty_printer::__struct_t() unless defined $_struct_t;
	return $_struct_t;
}

sub pretty_printer::print_module_to_struct($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];
#line 25
$memory_2 = [];
#line 25
$memory_3 = [];
#line 25
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 26
$memory_2 = $memory_0->{'import'};
#line 26
$memory_4 = 0;
#line 26
$memory_5 = 1;
#line 26
$memory_6 = c_rt_lib::array_len($memory_2);
#line 26
label_9:
#line 26
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 26
if (c_rt_lib::check_true($memory_7)) {goto label_33;}
#line 26
$memory_3 = $memory_2->[$memory_4];
#line 27
$memory_8 = "imports";
#line 27
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 27
$memory_9 = "use ";
#line 27
$memory_10 = $memory_3->{'name'};
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
$memory_10 = ";";
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
$memory_10 = string::lf();
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
array::push($memory_8, $memory_9);
#line 27
undef($memory_9);
#line 27
$memory_9 = "imports";
#line 27
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 27
undef($memory_9);
#line 27
undef($memory_8);
#line 28
$memory_4 = $memory_4 + $memory_5;
#line 28
goto label_9;
#line 28
label_33:
#line 28
undef($memory_2);
#line 28
undef($memory_3);
#line 28
undef($memory_4);
#line 28
undef($memory_5);
#line 28
undef($memory_6);
#line 28
undef($memory_7);
#line 29
$memory_2 = $memory_0->{'fun_def'};
#line 29
$memory_4 = 0;
#line 29
$memory_5 = 1;
#line 29
$memory_6 = c_rt_lib::array_len($memory_2);
#line 29
label_44:
#line 29
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 29
if (c_rt_lib::check_true($memory_7)) {goto label_120;}
#line 29
$memory_3 = $memory_2->[$memory_4];
#line 30
$memory_9 = "";
#line 30
$memory_8 = {out => $memory_9,};
#line 30
undef($memory_9);
#line 31
$memory_9 = string::lf();
#line 31
pretty_printer_priv::state_print($memory_8, $memory_9);
#line 31
undef($memory_9);
#line 32
$memory_9 = $memory_0->{'name'};
#line 32
pretty_printer_priv::print_fun_def_head($memory_8, $memory_3, $memory_9);
#line 32
undef($memory_9);
#line 33
$memory_9 = $memory_8->{'out'};
#line 34
$memory_10 = "";
#line 34
$memory_11 = $memory_10;
#line 34
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'out'} = $memory_11;
#line 34
undef($memory_10);
#line 34
undef($memory_11);
#line 35
$memory_10 = $memory_3->{'cmd'};
#line 35
$memory_10 = $memory_10->{'cmd'};
#line 35
$memory_10 = c_rt_lib::ov_as($memory_10, 'block');
#line 35
$memory_12 = 0;
#line 35
$memory_13 = 1;
#line 35
$memory_14 = c_rt_lib::array_len($memory_10);
#line 35
label_69:
#line 35
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 35
if (c_rt_lib::check_true($memory_15)) {goto label_86;}
#line 35
$memory_11 = $memory_10->[$memory_12];
#line 36
$memory_16 = string::lf();
#line 36
$memory_18 = 1;
#line 36
$memory_17 = pretty_printer_priv::pind($memory_18);
#line 36
undef($memory_18);
#line 36
$memory_16 = $memory_16 . $memory_17;
#line 36
undef($memory_17);
#line 36
pretty_printer_priv::state_print($memory_8, $memory_16);
#line 36
undef($memory_16);
#line 37
$memory_16 = 1;
#line 37
pretty_printer_priv::print_cmd($memory_8, $memory_11, $memory_16);
#line 37
undef($memory_16);
#line 38
$memory_12 = $memory_12 + $memory_13;
#line 38
goto label_69;
#line 38
label_86:
#line 38
undef($memory_10);
#line 38
undef($memory_11);
#line 38
undef($memory_12);
#line 38
undef($memory_13);
#line 38
undef($memory_14);
#line 38
undef($memory_15);
#line 39
$memory_10 = "functions";
#line 39
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 40
$memory_12 = $memory_3->{'access'};
#line 40
$memory_12 = c_rt_lib::ov_is($memory_12, 'priv');
#line 40
if (c_rt_lib::check_true($memory_12)) {goto label_100;}
#line 40
$memory_12 = "";
#line 40
goto label_102;
#line 40
label_100:
#line 40
$memory_12 = "::";
#line 40
label_102:
#line 40
$memory_13 = $memory_3->{'name'};
#line 40
$memory_12 = $memory_12 . $memory_13;
#line 40
undef($memory_13);
#line 42
$memory_13 = $memory_8->{'out'};
#line 42
$memory_11 = {name => $memory_12,head => $memory_9,body => $memory_13,};
#line 42
undef($memory_12);
#line 42
undef($memory_13);
#line 42
array::push($memory_10, $memory_11);
#line 42
undef($memory_11);
#line 42
$memory_11 = "functions";
#line 42
c_rt_lib::set_ref_hash($memory_1, $memory_11, $memory_10);
#line 42
undef($memory_11);
#line 42
undef($memory_10);
#line 42
undef($memory_8);
#line 42
undef($memory_9);
#line 44
$memory_4 = $memory_4 + $memory_5;
#line 44
goto label_44;
#line 44
label_120:
#line 44
undef($memory_2);
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
undef($memory_5);
#line 44
undef($memory_6);
#line 44
undef($memory_7);
#line 45
undef($memory_0);
#line 45
return $memory_1;
#line 45
undef($memory_1);
#line 45
undef($memory_0);
#line 45
return;
}

sub pretty_printer::print_module_to_str($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 49
$memory_2 = "";
#line 49
$memory_1 = {out => $memory_2,};
#line 49
undef($memory_2);
#line 50
$memory_2 = $memory_0->{'stamp'};
#line 50
$memory_3 = "";
#line 50
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_3);
#line 50
undef($memory_3);
#line 50
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 50
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 51
$memory_3 = $memory_0->{'stamp'};
#line 51
$memory_4 = string::lf();
#line 51
$memory_3 = $memory_3 . $memory_4;
#line 51
undef($memory_4);
#line 51
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 51
undef($memory_3);
#line 52
goto label_42;
#line 52
label_16:
#line 53
$memory_3 = "###";
#line 53
$memory_4 = string::lf();
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = "# (c) Atinea Sp. z o.o.";
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = string::lf();
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = "###";
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = string::lf();
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 54
$memory_4 = string::lf();
#line 54
$memory_3 = $memory_3 . $memory_4;
#line 54
undef($memory_4);
#line 54
$memory_4 = string::lf();
#line 54
$memory_3 = $memory_3 . $memory_4;
#line 54
undef($memory_4);
#line 54
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 54
undef($memory_3);
#line 55
goto label_42;
#line 55
label_42:
#line 55
undef($memory_2);
#line 56
$memory_2 = [];
#line 57
$memory_3 = $memory_0->{'import'};
#line 57
$memory_5 = 0;
#line 57
$memory_6 = 1;
#line 57
$memory_7 = c_rt_lib::array_len($memory_3);
#line 57
label_49:
#line 57
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 57
if (c_rt_lib::check_true($memory_8)) {goto label_64;}
#line 57
$memory_4 = $memory_3->[$memory_5];
#line 58
$memory_9 = "use ";
#line 58
$memory_10 = $memory_4->{'name'};
#line 58
$memory_9 = $memory_9 . $memory_10;
#line 58
undef($memory_10);
#line 58
$memory_10 = ";";
#line 58
$memory_9 = $memory_9 . $memory_10;
#line 58
undef($memory_10);
#line 58
array::push($memory_2, $memory_9);
#line 58
undef($memory_9);
#line 59
$memory_5 = $memory_5 + $memory_6;
#line 59
goto label_49;
#line 59
label_64:
#line 59
undef($memory_3);
#line 59
undef($memory_4);
#line 59
undef($memory_5);
#line 59
undef($memory_6);
#line 59
undef($memory_7);
#line 59
undef($memory_8);
#line 60
$memory_4 = string::lf();
#line 60
$memory_3 = array::join($memory_4, $memory_2);
#line 60
undef($memory_4);
#line 60
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 60
undef($memory_3);
#line 61
$memory_3 = string::lf();
#line 61
$memory_4 = string::lf();
#line 61
$memory_3 = $memory_3 . $memory_4;
#line 61
undef($memory_4);
#line 61
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 61
undef($memory_3);
#line 62
$memory_3 = $memory_0->{'fun_def'};
#line 62
$memory_5 = 0;
#line 62
$memory_6 = 1;
#line 62
$memory_7 = c_rt_lib::array_len($memory_3);
#line 62
label_86:
#line 62
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 62
if (c_rt_lib::check_true($memory_8)) {goto label_101;}
#line 62
$memory_4 = $memory_3->[$memory_5];
#line 63
$memory_9 = $memory_0->{'name'};
#line 63
pretty_printer_priv::print_fun_def($memory_1, $memory_4, $memory_9);
#line 63
undef($memory_9);
#line 64
$memory_9 = string::lf();
#line 64
$memory_10 = string::lf();
#line 64
$memory_9 = $memory_9 . $memory_10;
#line 64
undef($memory_10);
#line 64
pretty_printer_priv::state_print($memory_1, $memory_9);
#line 64
undef($memory_9);
#line 65
$memory_5 = $memory_5 + $memory_6;
#line 65
goto label_86;
#line 65
label_101:
#line 65
undef($memory_3);
#line 65
undef($memory_4);
#line 65
undef($memory_5);
#line 65
undef($memory_6);
#line 65
undef($memory_7);
#line 65
undef($memory_8);
#line 66
$memory_3 = $memory_1->{'out'};
#line 66
undef($memory_0);
#line 66
undef($memory_1);
#line 66
undef($memory_2);
#line 66
return $memory_3;
#line 66
undef($memory_3);
#line 66
undef($memory_1);
#line 66
undef($memory_2);
#line 66
undef($memory_0);
#line 66
return;
}

sub pretty_printer_priv::print_fun_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 70
pretty_printer_priv::print_fun_def_head($memory_0, $memory_1, $memory_2);
#line 71
$memory_3 = $memory_1->{'cmd'};
#line 71
$memory_4 = 0;
#line 71
pretty_printer_priv::print_st($memory_0, $memory_3, $memory_4);
#line 71
undef($memory_4);
#line 71
undef($memory_3);
#line 71
undef($memory_1);
#line 71
undef($memory_2);
#line 71
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_fun_def_head($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 75
$memory_3 = "";
#line 76
$memory_4 = $memory_1->{'access'};
#line 76
$memory_5 = c_rt_lib::ov_is($memory_4, 'pub');
#line 76
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 78
$memory_5 = c_rt_lib::ov_is($memory_4, 'priv');
#line 78
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 78
$memory_5 = "NOMATCHALERT";
#line 78
$memory_5 = [$memory_5,$memory_4];
#line 78
die(dfile::ssave($memory_5));
#line 76
label_9:
#line 77
$memory_6 = "::";
#line 77
$memory_6 = $memory_2 . $memory_6;
#line 77
$memory_3 = $memory_3 . $memory_6;
#line 77
undef($memory_6);
#line 78
goto label_17;
#line 78
label_15:
#line 79
goto label_17;
#line 79
label_17:
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 80
$memory_4 = $memory_1->{'name'};
#line 80
$memory_3 = $memory_3 . $memory_4;
#line 80
undef($memory_4);
#line 82
$memory_6 = "def";
#line 82
$memory_5 = wprinter::build_sim($memory_6);
#line 82
undef($memory_6);
#line 83
$memory_6 = wprinter::get_sep();
#line 84
$memory_7 = wprinter::build_sim($memory_3);
#line 85
$memory_9 = "(";
#line 85
$memory_8 = wprinter::build_sim($memory_9);
#line 85
undef($memory_9);
#line 85
$memory_4 = [$memory_5,$memory_6,$memory_7,$memory_8];
#line 85
undef($memory_5);
#line 85
undef($memory_6);
#line 85
undef($memory_7);
#line 85
undef($memory_8);
#line 87
$memory_6 = $memory_1->{'args'};
#line 87
$memory_5 = array::len($memory_6);
#line 87
undef($memory_6);
#line 87
$memory_6 = 0;
#line 87
$memory_7 = 1;
#line 87
label_41:
#line 87
$memory_8 = c_rt_lib::to_nl($memory_6 >= $memory_5);
#line 87
if (c_rt_lib::check_true($memory_8)) {goto label_129;}
#line 88
$memory_9 = $memory_1->{'args'};
#line 88
$memory_9 = $memory_9->[$memory_6];
#line 89
$memory_10 = $memory_9->{'mod'};
#line 89
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 89
if (c_rt_lib::check_true($memory_11)) {goto label_54;}
#line 91
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 91
if (c_rt_lib::check_true($memory_11)) {goto label_65;}
#line 91
$memory_11 = "NOMATCHALERT";
#line 91
$memory_11 = [$memory_11,$memory_10];
#line 91
die(dfile::ssave($memory_11));
#line 89
label_54:
#line 90
$memory_14 = "ref";
#line 90
$memory_13 = wprinter::build_sim($memory_14);
#line 90
undef($memory_14);
#line 90
$memory_14 = wprinter::get_sep();
#line 90
$memory_12 = [$memory_13,$memory_14];
#line 90
undef($memory_13);
#line 90
undef($memory_14);
#line 90
array::append($memory_4, $memory_12);
#line 90
undef($memory_12);
#line 91
goto label_67;
#line 91
label_65:
#line 92
goto label_67;
#line 92
label_67:
#line 92
undef($memory_10);
#line 92
undef($memory_11);
#line 93
$memory_11 = $memory_9->{'name'};
#line 93
$memory_10 = wprinter::build_sim($memory_11);
#line 93
undef($memory_11);
#line 93
array::push($memory_4, $memory_10);
#line 93
undef($memory_10);
#line 94
$memory_10 = $memory_9->{'type'};
#line 94
$memory_11 = c_rt_lib::ov_is($memory_10, 'type');
#line 94
if (c_rt_lib::check_true($memory_11)) {goto label_83;}
#line 96
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 96
if (c_rt_lib::check_true($memory_11)) {goto label_100;}
#line 96
$memory_11 = "NOMATCHALERT";
#line 96
$memory_11 = [$memory_11,$memory_10];
#line 96
die(dfile::ssave($memory_11));
#line 94
label_83:
#line 94
$memory_12 = c_rt_lib::ov_as($memory_10, 'type');
#line 95
$memory_14 = wprinter::get_sep();
#line 95
$memory_16 = ":";
#line 95
$memory_15 = wprinter::build_sim($memory_16);
#line 95
undef($memory_16);
#line 95
$memory_16 = wprinter::get_sep();
#line 95
$memory_17 = pretty_printer_priv::print_val($memory_12);
#line 95
$memory_13 = [$memory_14,$memory_15,$memory_16,$memory_17];
#line 95
undef($memory_14);
#line 95
undef($memory_15);
#line 95
undef($memory_16);
#line 95
undef($memory_17);
#line 95
array::append($memory_4, $memory_13);
#line 95
undef($memory_13);
#line 95
undef($memory_12);
#line 96
goto label_102;
#line 96
label_100:
#line 97
goto label_102;
#line 97
label_102:
#line 97
undef($memory_10);
#line 97
undef($memory_11);
#line 98
$memory_11 = $memory_1->{'args'};
#line 98
$memory_10 = array::len($memory_11);
#line 98
undef($memory_11);
#line 98
$memory_11 = 1;
#line 98
$memory_10 = $memory_10 - $memory_11;
#line 98
undef($memory_11);
#line 98
$memory_10 = c_rt_lib::to_nl($memory_6 != $memory_10);
#line 98
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 98
if (c_rt_lib::check_true($memory_10)) {goto label_124;}
#line 98
$memory_13 = ",";
#line 98
$memory_12 = wprinter::build_sim($memory_13);
#line 98
undef($memory_13);
#line 98
$memory_13 = wprinter::get_sep();
#line 98
$memory_11 = [$memory_12,$memory_13];
#line 98
undef($memory_12);
#line 98
undef($memory_13);
#line 98
array::append($memory_4, $memory_11);
#line 98
undef($memory_11);
#line 98
goto label_124;
#line 98
label_124:
#line 98
undef($memory_10);
#line 98
undef($memory_9);
#line 99
$memory_6 = $memory_6 + $memory_7;
#line 99
goto label_41;
#line 99
label_129:
#line 99
undef($memory_5);
#line 99
undef($memory_6);
#line 99
undef($memory_7);
#line 99
undef($memory_8);
#line 100
$memory_6 = ")";
#line 100
$memory_5 = wprinter::build_sim($memory_6);
#line 100
undef($memory_6);
#line 100
array::push($memory_4, $memory_5);
#line 100
undef($memory_5);
#line 101
$memory_5 = $memory_1->{'ret_type'};
#line 101
$memory_6 = c_rt_lib::ov_is($memory_5, 'type');
#line 101
if (c_rt_lib::check_true($memory_6)) {goto label_147;}
#line 108
$memory_6 = c_rt_lib::ov_is($memory_5, 'none');
#line 108
if (c_rt_lib::check_true($memory_6)) {goto label_164;}
#line 108
$memory_6 = "NOMATCHALERT";
#line 108
$memory_6 = [$memory_6,$memory_5];
#line 108
die(dfile::ssave($memory_6));
#line 101
label_147:
#line 101
$memory_7 = c_rt_lib::ov_as($memory_5, 'type');
#line 103
$memory_9 = wprinter::get_sep();
#line 104
$memory_11 = ":";
#line 104
$memory_10 = wprinter::build_sim($memory_11);
#line 104
undef($memory_11);
#line 105
$memory_11 = wprinter::get_sep();
#line 106
$memory_12 = pretty_printer_priv::print_sim_value($memory_7);
#line 106
$memory_8 = [$memory_9,$memory_10,$memory_11,$memory_12];
#line 106
undef($memory_9);
#line 106
undef($memory_10);
#line 106
undef($memory_11);
#line 106
undef($memory_12);
#line 106
array::append($memory_4, $memory_8);
#line 106
undef($memory_8);
#line 106
undef($memory_7);
#line 108
goto label_166;
#line 108
label_164:
#line 109
goto label_166;
#line 109
label_166:
#line 109
undef($memory_5);
#line 109
undef($memory_6);
#line 110
$memory_5 = wprinter::build_pretty_l($memory_4);
#line 110
$memory_6 = 0;
#line 110
wprinter::print_t($memory_0, $memory_5, $memory_6);
#line 110
undef($memory_6);
#line 110
undef($memory_5);
#line 110
undef($memory_3);
#line 110
undef($memory_4);
#line 110
undef($memory_1);
#line 110
undef($memory_2);
#line 110
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::join_print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 114
$memory_1 = [];
#line 115
$memory_2 = array::len($memory_0);
#line 115
$memory_3 = 0;
#line 115
$memory_4 = 1;
#line 115
label_4:
#line 115
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 115
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 116
$memory_7 = $memory_0->[$memory_3];
#line 116
$memory_6 = pretty_printer_priv::print_var_decl($memory_7);
#line 116
undef($memory_7);
#line 116
array::push($memory_1, $memory_6);
#line 116
undef($memory_6);
#line 117
$memory_6 = array::len($memory_0);
#line 117
$memory_7 = 1;
#line 117
$memory_6 = $memory_6 - $memory_7;
#line 117
undef($memory_7);
#line 117
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 117
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 117
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 117
$memory_9 = ",";
#line 117
$memory_8 = wprinter::build_sim($memory_9);
#line 117
undef($memory_9);
#line 117
$memory_9 = wprinter::get_sep();
#line 117
$memory_7 = [$memory_8,$memory_9];
#line 117
undef($memory_8);
#line 117
undef($memory_9);
#line 117
array::append($memory_1, $memory_7);
#line 117
undef($memory_7);
#line 117
goto label_29;
#line 117
label_29:
#line 117
undef($memory_6);
#line 118
$memory_3 = $memory_3 + $memory_4;
#line 118
goto label_4;
#line 118
label_33:
#line 118
undef($memory_2);
#line 118
undef($memory_3);
#line 118
undef($memory_4);
#line 118
undef($memory_5);
#line 119
undef($memory_0);
#line 119
return $memory_1;
#line 119
undef($memory_1);
#line 119
undef($memory_0);
#line 119
return;
}

sub pretty_printer_priv::print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 123
$memory_3 = "var";
#line 123
$memory_2 = wprinter::build_sim($memory_3);
#line 123
undef($memory_3);
#line 123
$memory_3 = wprinter::get_sep();
#line 123
$memory_1 = [$memory_2,$memory_3];
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 124
$memory_2 = $memory_0->{'type'};
#line 124
$memory_3 = c_rt_lib::ov_is($memory_2, 'type');
#line 124
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 132
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 132
if (c_rt_lib::check_true($memory_3)) {goto label_36;}
#line 132
$memory_3 = "NOMATCHALERT";
#line 132
$memory_3 = [$memory_3,$memory_2];
#line 132
die(dfile::ssave($memory_3));
#line 124
label_15:
#line 124
$memory_4 = c_rt_lib::ov_as($memory_2, 'type');
#line 126
$memory_7 = $memory_0->{'name'};
#line 126
$memory_6 = wprinter::build_sim($memory_7);
#line 126
undef($memory_7);
#line 127
$memory_7 = wprinter::get_sep();
#line 128
$memory_9 = ":";
#line 128
$memory_8 = wprinter::build_sim($memory_9);
#line 128
undef($memory_9);
#line 129
$memory_9 = wprinter::get_sep();
#line 130
$memory_10 = pretty_printer_priv::print_val($memory_4);
#line 130
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10];
#line 130
undef($memory_6);
#line 130
undef($memory_7);
#line 130
undef($memory_8);
#line 130
undef($memory_9);
#line 130
undef($memory_10);
#line 130
array::append($memory_1, $memory_5);
#line 130
undef($memory_5);
#line 130
undef($memory_4);
#line 132
goto label_43;
#line 132
label_36:
#line 133
$memory_5 = $memory_0->{'name'};
#line 133
$memory_4 = wprinter::build_sim($memory_5);
#line 133
undef($memory_5);
#line 133
array::push($memory_1, $memory_4);
#line 133
undef($memory_4);
#line 134
goto label_43;
#line 134
label_43:
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 135
$memory_2 = $memory_0->{'value'};
#line 135
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 135
if (c_rt_lib::check_true($memory_3)) {goto label_54;}
#line 137
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 137
if (c_rt_lib::check_true($memory_3)) {goto label_71;}
#line 137
$memory_3 = "NOMATCHALERT";
#line 137
$memory_3 = [$memory_3,$memory_2];
#line 137
die(dfile::ssave($memory_3));
#line 135
label_54:
#line 135
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 136
$memory_6 = wprinter::get_sep();
#line 136
$memory_8 = "=";
#line 136
$memory_7 = wprinter::build_sim($memory_8);
#line 136
undef($memory_8);
#line 136
$memory_8 = wprinter::get_sep();
#line 136
$memory_9 = pretty_printer_priv::print_val($memory_4);
#line 136
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9];
#line 136
undef($memory_6);
#line 136
undef($memory_7);
#line 136
undef($memory_8);
#line 136
undef($memory_9);
#line 136
array::append($memory_1, $memory_5);
#line 136
undef($memory_5);
#line 136
undef($memory_4);
#line 137
goto label_73;
#line 137
label_71:
#line 138
goto label_73;
#line 138
label_73:
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 139
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
return $memory_2;
#line 139
undef($memory_2);
#line 139
undef($memory_1);
#line 139
undef($memory_0);
#line 139
return;
}

sub pretty_printer_priv::pind($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 143
$memory_1 = "";
#line 144
$memory_2 = 0;
#line 144
$memory_3 = 1;
#line 144
label_3:
#line 144
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 144
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 144
$memory_6 = 9;
#line 144
$memory_5 = string::chr($memory_6);
#line 144
undef($memory_6);
#line 144
$memory_1 = $memory_1 . $memory_5;
#line 144
undef($memory_5);
#line 144
$memory_2 = $memory_2 + $memory_3;
#line 144
goto label_3;
#line 144
label_13:
#line 144
undef($memory_2);
#line 144
undef($memory_3);
#line 144
undef($memory_4);
#line 145
undef($memory_0);
#line 145
return $memory_1;
#line 145
undef($memory_1);
#line 145
undef($memory_0);
#line 145
return;
}

sub pretty_printer_priv::join_print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 149
$memory_1 = [];
#line 150
$memory_2 = array::len($memory_0);
#line 150
$memory_3 = 0;
#line 150
$memory_4 = 1;
#line 150
label_4:
#line 150
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 150
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 151
$memory_7 = $memory_0->[$memory_3];
#line 151
$memory_6 = pretty_printer_priv::print_hash_elem($memory_7);
#line 151
undef($memory_7);
#line 151
array::push($memory_1, $memory_6);
#line 151
undef($memory_6);
#line 152
$memory_6 = array::len($memory_0);
#line 152
$memory_7 = 1;
#line 152
$memory_6 = $memory_6 - $memory_7;
#line 152
undef($memory_7);
#line 152
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 152
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 152
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 152
$memory_9 = ",";
#line 152
$memory_8 = wprinter::build_sim($memory_9);
#line 152
undef($memory_9);
#line 152
$memory_9 = wprinter::get_sep();
#line 152
$memory_7 = [$memory_8,$memory_9];
#line 152
undef($memory_8);
#line 152
undef($memory_9);
#line 152
array::append($memory_1, $memory_7);
#line 152
undef($memory_7);
#line 152
goto label_29;
#line 152
label_29:
#line 152
undef($memory_6);
#line 153
$memory_3 = $memory_3 + $memory_4;
#line 153
goto label_4;
#line 153
label_33:
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
undef($memory_5);
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

sub pretty_printer_priv::print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 158
$memory_1 = $memory_0->{'val'};
#line 158
$memory_1 = $memory_1->{'value'};
#line 158
$memory_1 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 158
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 158
$memory_1 = $memory_0->{'val'};
#line 158
$memory_1 = $memory_1->{'value'};
#line 158
$memory_1 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 158
label_7:
#line 158
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 158
if (c_rt_lib::check_true($memory_1)) {goto label_28;}
#line 159
$memory_2 = $memory_0->{'key'};
#line 159
$memory_2 = $memory_2->{'value'};
#line 159
$memory_2 = c_rt_lib::ov_as($memory_2, 'hash_key');
#line 160
$memory_4 = $memory_0->{'val'};
#line 160
$memory_5 = " => ";
#line 160
$memory_5 = $memory_2 . $memory_5;
#line 160
$memory_6 = "";
#line 160
$memory_3 = pretty_printer_priv::get_compressed_fun_val($memory_4, $memory_5, $memory_6);
#line 160
undef($memory_6);
#line 160
undef($memory_5);
#line 160
undef($memory_4);
#line 160
undef($memory_0);
#line 160
undef($memory_1);
#line 160
undef($memory_2);
#line 160
return $memory_3;
#line 160
undef($memory_3);
#line 160
undef($memory_2);
#line 161
goto label_28;
#line 161
label_28:
#line 161
undef($memory_1);
#line 163
$memory_4 = $memory_0->{'key'};
#line 163
$memory_3 = pretty_printer_priv::print_val($memory_4);
#line 163
undef($memory_4);
#line 164
$memory_4 = wprinter::get_sep();
#line 165
$memory_6 = "=>";
#line 165
$memory_5 = wprinter::build_sim($memory_6);
#line 165
undef($memory_6);
#line 166
$memory_6 = wprinter::get_sep();
#line 167
$memory_8 = $memory_0->{'val'};
#line 167
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 167
undef($memory_8);
#line 167
$memory_2 = [$memory_3,$memory_4,$memory_5,$memory_6,$memory_7];
#line 167
undef($memory_3);
#line 167
undef($memory_4);
#line 167
undef($memory_5);
#line 167
undef($memory_6);
#line 167
undef($memory_7);
#line 167
$memory_1 = wprinter::build_pretty_l($memory_2);
#line 167
undef($memory_2);
#line 167
undef($memory_0);
#line 167
return $memory_1;
#line 167
undef($memory_1);
#line 167
undef($memory_0);
#line 167
return;
}

sub pretty_printer_priv::print_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 172
$memory_1 = $memory_0->{'name'};
#line 172
$memory_3 = "TRUE";
#line 172
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 172
undef($memory_3);
#line 172
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 172
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 172
$memory_1 = $memory_0->{'var'};
#line 172
$memory_1 = $memory_1->{'value'};
#line 172
$memory_1 = c_rt_lib::ov_is($memory_1, 'nop');
#line 172
label_9:
#line 172
undef($memory_2);
#line 172
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 172
if (c_rt_lib::check_true($memory_1)) {goto label_21;}
#line 173
$memory_3 = "true";
#line 173
$memory_2 = wprinter::build_sim($memory_3);
#line 173
undef($memory_3);
#line 173
undef($memory_0);
#line 173
undef($memory_1);
#line 173
return $memory_2;
#line 173
undef($memory_2);
#line 174
goto label_43;
#line 174
label_21:
#line 174
$memory_1 = $memory_0->{'name'};
#line 174
$memory_3 = "FALSE";
#line 174
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 174
undef($memory_3);
#line 174
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 174
if (c_rt_lib::check_true($memory_2)) {goto label_31;}
#line 174
$memory_1 = $memory_0->{'var'};
#line 174
$memory_1 = $memory_1->{'value'};
#line 174
$memory_1 = c_rt_lib::ov_is($memory_1, 'nop');
#line 174
label_31:
#line 174
undef($memory_2);
#line 174
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 174
if (c_rt_lib::check_true($memory_1)) {goto label_43;}
#line 175
$memory_3 = "false";
#line 175
$memory_2 = wprinter::build_sim($memory_3);
#line 175
undef($memory_3);
#line 175
undef($memory_0);
#line 175
undef($memory_1);
#line 175
return $memory_2;
#line 175
undef($memory_2);
#line 176
goto label_43;
#line 176
label_43:
#line 176
undef($memory_1);
#line 177
$memory_1 = $memory_0->{'var'};
#line 177
$memory_1 = $memory_1->{'value'};
#line 177
$memory_1 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 177
if (c_rt_lib::check_true($memory_1)) {goto label_52;}
#line 177
$memory_1 = $memory_0->{'var'};
#line 177
$memory_1 = $memory_1->{'value'};
#line 177
$memory_1 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 177
label_52:
#line 177
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 177
if (c_rt_lib::check_true($memory_1)) {goto label_73;}
#line 178
$memory_3 = $memory_0->{'var'};
#line 178
$memory_4 = ":";
#line 178
$memory_5 = $memory_0->{'name'};
#line 178
$memory_4 = $memory_4 . $memory_5;
#line 178
undef($memory_5);
#line 178
$memory_5 = "(";
#line 178
$memory_4 = $memory_4 . $memory_5;
#line 178
undef($memory_5);
#line 178
$memory_5 = ")";
#line 178
$memory_2 = pretty_printer_priv::get_compressed_fun_val($memory_3, $memory_4, $memory_5);
#line 178
undef($memory_5);
#line 178
undef($memory_4);
#line 178
undef($memory_3);
#line 178
undef($memory_0);
#line 178
undef($memory_1);
#line 178
return $memory_2;
#line 178
undef($memory_2);
#line 179
goto label_73;
#line 179
label_73:
#line 179
undef($memory_1);
#line 180
$memory_1 = [];
#line 181
$memory_3 = ":";
#line 181
$memory_4 = $memory_0->{'name'};
#line 181
$memory_3 = $memory_3 . $memory_4;
#line 181
undef($memory_4);
#line 181
$memory_2 = wprinter::build_sim($memory_3);
#line 181
undef($memory_3);
#line 181
array::push($memory_1, $memory_2);
#line 181
undef($memory_2);
#line 183
$memory_2 = $memory_0->{'var'};
#line 183
$memory_2 = $memory_2->{'value'};
#line 183
$memory_2 = c_rt_lib::ov_is($memory_2, 'nop');
#line 183
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 183
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 183
if (c_rt_lib::check_true($memory_2)) {goto label_106;}
#line 182
$memory_5 = "(";
#line 182
$memory_4 = wprinter::build_sim($memory_5);
#line 182
undef($memory_5);
#line 182
$memory_6 = $memory_0->{'var'};
#line 182
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 182
undef($memory_6);
#line 182
$memory_7 = ")";
#line 182
$memory_6 = wprinter::build_sim($memory_7);
#line 182
undef($memory_7);
#line 182
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 182
undef($memory_4);
#line 182
undef($memory_5);
#line 182
undef($memory_6);
#line 182
array::append($memory_1, $memory_3);
#line 182
undef($memory_3);
#line 182
goto label_106;
#line 182
label_106:
#line 182
undef($memory_2);
#line 184
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 184
undef($memory_0);
#line 184
undef($memory_1);
#line 184
return $memory_2;
#line 184
undef($memory_2);
#line 184
undef($memory_1);
#line 184
undef($memory_0);
#line 184
return;
}

sub pretty_printer_priv::print_variant_case_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 188
$memory_3 = ":";
#line 188
$memory_4 = $memory_0->{'name'};
#line 188
$memory_3 = $memory_3 . $memory_4;
#line 188
undef($memory_4);
#line 188
$memory_2 = wprinter::build_sim($memory_3);
#line 188
undef($memory_3);
#line 188
$memory_1 = [$memory_2];
#line 188
undef($memory_2);
#line 189
$memory_2 = $memory_0->{'value'};
#line 189
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 189
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 191
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 191
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 191
$memory_3 = "NOMATCHALERT";
#line 191
$memory_3 = [$memory_3,$memory_2];
#line 191
die(dfile::ssave($memory_3));
#line 189
label_16:
#line 189
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 190
$memory_7 = "(";
#line 190
$memory_6 = wprinter::build_sim($memory_7);
#line 190
undef($memory_7);
#line 190
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 190
$memory_9 = ")";
#line 190
$memory_8 = wprinter::build_sim($memory_9);
#line 190
undef($memory_9);
#line 190
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 190
undef($memory_6);
#line 190
undef($memory_7);
#line 190
undef($memory_8);
#line 190
array::append($memory_1, $memory_5);
#line 190
undef($memory_5);
#line 190
undef($memory_4);
#line 191
goto label_35;
#line 191
label_33:
#line 192
goto label_35;
#line 192
label_35:
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 193
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 193
undef($memory_0);
#line 193
undef($memory_1);
#line 193
return $memory_2;
#line 193
undef($memory_2);
#line 193
undef($memory_1);
#line 193
undef($memory_0);
#line 193
return;
}

sub pretty_printer_priv::join_print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 197
$memory_1 = [];
#line 198
$memory_2 = array::len($memory_0);
#line 198
$memory_3 = 0;
#line 198
$memory_4 = 1;
#line 198
label_4:
#line 198
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 198
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 199
$memory_7 = $memory_0->[$memory_3];
#line 199
$memory_6 = pretty_printer_priv::print_fun_arg($memory_7);
#line 199
undef($memory_7);
#line 199
array::push($memory_1, $memory_6);
#line 199
undef($memory_6);
#line 200
$memory_6 = array::len($memory_0);
#line 200
$memory_7 = 1;
#line 200
$memory_6 = $memory_6 - $memory_7;
#line 200
undef($memory_7);
#line 200
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 200
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 200
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 200
$memory_9 = ",";
#line 200
$memory_8 = wprinter::build_sim($memory_9);
#line 200
undef($memory_9);
#line 200
$memory_9 = wprinter::get_sep();
#line 200
$memory_7 = [$memory_8,$memory_9];
#line 200
undef($memory_8);
#line 200
undef($memory_9);
#line 200
array::append($memory_1, $memory_7);
#line 200
undef($memory_7);
#line 200
goto label_29;
#line 200
label_29:
#line 200
undef($memory_6);
#line 201
$memory_3 = $memory_3 + $memory_4;
#line 201
goto label_4;
#line 201
label_33:
#line 201
undef($memory_2);
#line 201
undef($memory_3);
#line 201
undef($memory_4);
#line 201
undef($memory_5);
#line 202
undef($memory_0);
#line 202
return $memory_1;
#line 202
undef($memory_1);
#line 202
undef($memory_0);
#line 202
return;
}

sub pretty_printer_priv::print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 206
$memory_1 = [];
#line 207
$memory_2 = $memory_0->{'mod'};
#line 207
$memory_3 = c_rt_lib::ov_is($memory_2, 'ref');
#line 207
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 209
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 209
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 209
$memory_3 = "NOMATCHALERT";
#line 209
$memory_3 = [$memory_3,$memory_2];
#line 209
die(dfile::ssave($memory_3));
#line 207
label_9:
#line 208
$memory_6 = "ref";
#line 208
$memory_5 = wprinter::build_sim($memory_6);
#line 208
undef($memory_6);
#line 208
$memory_6 = wprinter::get_sep();
#line 208
$memory_4 = [$memory_5,$memory_6];
#line 208
undef($memory_5);
#line 208
undef($memory_6);
#line 208
array::append($memory_1, $memory_4);
#line 208
undef($memory_4);
#line 209
goto label_22;
#line 209
label_20:
#line 210
goto label_22;
#line 210
label_22:
#line 210
undef($memory_2);
#line 210
undef($memory_3);
#line 211
$memory_3 = $memory_0->{'val'};
#line 211
$memory_2 = pretty_printer_priv::print_val($memory_3);
#line 211
undef($memory_3);
#line 211
array::push($memory_1, $memory_2);
#line 211
undef($memory_2);
#line 212
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 212
undef($memory_0);
#line 212
undef($memory_1);
#line 212
return $memory_2;
#line 212
undef($memory_2);
#line 212
undef($memory_1);
#line 212
undef($memory_0);
#line 212
return;
}

sub pretty_printer_priv::count_structs($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 216
$memory_1 = 0;
#line 217
$memory_3 = 0;
#line 217
$memory_4 = 1;
#line 217
$memory_5 = c_rt_lib::array_len($memory_0);
#line 217
label_4:
#line 217
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 217
if (c_rt_lib::check_true($memory_6)) {goto label_26;}
#line 217
$memory_2 = $memory_0->[$memory_3];
#line 218
$memory_7 = $memory_2->{'val'};
#line 218
$memory_7 = $memory_7->{'value'};
#line 218
$memory_7 = c_rt_lib::ov_is($memory_7, 'arr_decl');
#line 218
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 218
$memory_7 = $memory_2->{'val'};
#line 218
$memory_7 = $memory_7->{'value'};
#line 218
$memory_7 = c_rt_lib::ov_is($memory_7, 'hash_decl');
#line 218
label_15:
#line 218
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 218
if (c_rt_lib::check_true($memory_7)) {goto label_22;}
#line 218
$memory_8 = 1;
#line 218
$memory_1 = $memory_1 + $memory_8;
#line 218
undef($memory_8);
#line 218
goto label_22;
#line 218
label_22:
#line 218
undef($memory_7);
#line 219
$memory_3 = $memory_3 + $memory_4;
#line 219
goto label_4;
#line 219
label_26:
#line 219
undef($memory_2);
#line 219
undef($memory_3);
#line 219
undef($memory_4);
#line 219
undef($memory_5);
#line 219
undef($memory_6);
#line 220
undef($memory_0);
#line 220
return $memory_1;
#line 220
undef($memory_1);
#line 220
undef($memory_0);
#line 220
return;
}

sub pretty_printer_priv::get_compressed_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 225
$memory_4 = $memory_1;
#line 226
$memory_5 = $memory_2;
#line 227
label_2:
#line 228
$memory_6 = $memory_0->{'value'};
#line 228
$memory_6 = c_rt_lib::ov_is($memory_6, 'arr_decl');
#line 228
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 228
if (c_rt_lib::check_true($memory_6)) {goto label_39;}
#line 229
$memory_7 = $memory_0->{'value'};
#line 229
$memory_7 = c_rt_lib::ov_as($memory_7, 'arr_decl');
#line 230
$memory_8 = "[";
#line 230
$memory_4 = $memory_4 . $memory_8;
#line 230
undef($memory_8);
#line 231
$memory_8 = "]";
#line 231
$memory_8 = $memory_8 . $memory_5;
#line 231
$memory_5 = $memory_8;
#line 231
undef($memory_8);
#line 232
$memory_8 = array::len($memory_7);
#line 232
$memory_9 = 1;
#line 232
$memory_8 = c_rt_lib::to_nl($memory_8 != $memory_9);
#line 232
undef($memory_9);
#line 232
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 232
if (c_rt_lib::check_true($memory_8)) {goto label_30;}
#line 233
$memory_9 = pretty_printer_priv::join_print_val($memory_7);
#line 233
$memory_3 = $memory_9;
#line 233
undef($memory_9);
#line 234
undef($memory_6);
#line 234
undef($memory_7);
#line 234
undef($memory_8);
#line 234
goto label_73;
#line 235
goto label_30;
#line 235
label_30:
#line 235
undef($memory_8);
#line 236
$memory_9 = 0;
#line 236
$memory_8 = $memory_7->[$memory_9];
#line 236
undef($memory_9);
#line 236
$memory_0 = $memory_8;
#line 236
undef($memory_8);
#line 236
undef($memory_7);
#line 237
goto label_70;
#line 237
label_39:
#line 237
$memory_6 = $memory_0->{'value'};
#line 237
$memory_6 = c_rt_lib::ov_is($memory_6, 'hash_decl');
#line 237
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 237
if (c_rt_lib::check_true($memory_6)) {goto label_61;}
#line 238
$memory_7 = $memory_0->{'value'};
#line 238
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_decl');
#line 239
$memory_8 = "{";
#line 239
$memory_4 = $memory_4 . $memory_8;
#line 239
undef($memory_8);
#line 240
$memory_8 = "}";
#line 240
$memory_8 = $memory_8 . $memory_5;
#line 240
$memory_5 = $memory_8;
#line 240
undef($memory_8);
#line 241
$memory_8 = pretty_printer_priv::join_print_hash_elem($memory_7);
#line 241
$memory_3 = $memory_8;
#line 241
undef($memory_8);
#line 242
undef($memory_6);
#line 242
undef($memory_7);
#line 242
goto label_73;
#line 242
undef($memory_7);
#line 243
goto label_70;
#line 243
label_61:
#line 244
$memory_8 = pretty_printer_priv::print_val($memory_0);
#line 244
$memory_7 = [$memory_8];
#line 244
undef($memory_8);
#line 244
$memory_3 = $memory_7;
#line 244
undef($memory_7);
#line 245
undef($memory_6);
#line 245
goto label_73;
#line 246
goto label_70;
#line 246
label_70:
#line 246
undef($memory_6);
#line 227
goto label_2;
#line 227
label_73:
#line 248
$memory_6 = wprinter::build_pretty_arr_decl($memory_3, $memory_4, $memory_5);
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
undef($memory_3);
#line 248
undef($memory_4);
#line 248
undef($memory_5);
#line 248
return $memory_6;
#line 248
undef($memory_6);
#line 248
undef($memory_3);
#line 248
undef($memory_4);
#line 248
undef($memory_5);
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
return;
}

sub pretty_printer_priv::print_st($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 252
$memory_3 = " ";
#line 252
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 252
undef($memory_3);
#line 253
pretty_printer_priv::print_cmd($memory_0, $memory_1, $memory_2);
#line 253
undef($memory_1);
#line 253
undef($memory_2);
#line 253
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::get_fun_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 257
$memory_2 = "";
#line 257
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 257
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 257
$memory_2 = "::";
#line 257
$memory_2 = $memory_1 . $memory_2;
#line 257
$memory_2 = $memory_2 . $memory_0;
#line 257
goto label_9;
#line 257
label_7:
#line 257
$memory_2 = $memory_0;
#line 257
label_9:
#line 257
undef($memory_0);
#line 257
undef($memory_1);
#line 257
return $memory_2;
#line 257
undef($memory_2);
#line 257
undef($memory_0);
#line 257
undef($memory_1);
#line 257
return;
}

sub pretty_printer_priv::string_to_nl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 261
$memory_2 = "'";
#line 261
$memory_3 = "''";
#line 261
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 261
undef($memory_3);
#line 261
undef($memory_2);
#line 261
undef($memory_0);
#line 261
return $memory_1;
#line 261
undef($memory_1);
#line 261
undef($memory_0);
#line 261
return;
}

sub pretty_printer_priv::join_print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 265
$memory_1 = [];
#line 266
$memory_2 = array::len($memory_0);
#line 266
$memory_3 = 0;
#line 266
$memory_4 = 1;
#line 266
label_4:
#line 266
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 266
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 267
$memory_7 = $memory_0->[$memory_3];
#line 267
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 267
undef($memory_7);
#line 267
array::push($memory_1, $memory_6);
#line 267
undef($memory_6);
#line 268
$memory_6 = array::len($memory_0);
#line 268
$memory_7 = 1;
#line 268
$memory_6 = $memory_6 - $memory_7;
#line 268
undef($memory_7);
#line 268
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 268
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 268
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 268
$memory_9 = ",";
#line 268
$memory_8 = wprinter::build_sim($memory_9);
#line 268
undef($memory_9);
#line 268
$memory_9 = wprinter::get_sep();
#line 268
$memory_7 = [$memory_8,$memory_9];
#line 268
undef($memory_8);
#line 268
undef($memory_9);
#line 268
array::append($memory_1, $memory_7);
#line 268
undef($memory_7);
#line 268
goto label_29;
#line 268
label_29:
#line 268
undef($memory_6);
#line 269
$memory_3 = $memory_3 + $memory_4;
#line 269
goto label_4;
#line 269
label_33:
#line 269
undef($memory_2);
#line 269
undef($memory_3);
#line 269
undef($memory_4);
#line 269
undef($memory_5);
#line 270
undef($memory_0);
#line 270
return $memory_1;
#line 270
undef($memory_1);
#line 270
undef($memory_0);
#line 270
return;
}

sub pretty_printer_priv::is_to_change_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 274
$memory_1 = $memory_0->{'value'};
#line 274
$memory_1 = c_rt_lib::ov_is($memory_1, 'fun_val');
#line 274
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 274
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 274
if (c_rt_lib::check_true($memory_1)) {goto label_11;}
#line 274
$memory_2 = c_rt_lib::to_nl(0);
#line 274
undef($memory_0);
#line 274
undef($memory_1);
#line 274
return $memory_2;
#line 274
undef($memory_2);
#line 274
goto label_11;
#line 274
label_11:
#line 274
undef($memory_1);
#line 275
$memory_1 = $memory_0->{'value'};
#line 275
$memory_1 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 276
$memory_4 = $memory_1->{'args'};
#line 276
$memory_2 = array::len($memory_4);
#line 276
undef($memory_4);
#line 276
$memory_4 = 2;
#line 276
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 276
undef($memory_4);
#line 276
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 276
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 276
$memory_2 = $memory_1->{'module'};
#line 276
$memory_4 = "ov";
#line 276
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 276
undef($memory_4);
#line 276
if (c_rt_lib::check_true($memory_2)) {goto label_32;}
#line 276
$memory_2 = $memory_1->{'module'};
#line 276
$memory_4 = "c_ov";
#line 276
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 276
undef($memory_4);
#line 276
label_32:
#line 276
undef($memory_3);
#line 276
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 276
if (c_rt_lib::check_true($memory_2)) {goto label_106;}
#line 277
$memory_3 = $memory_1->{'name'};
#line 277
$memory_5 = "as";
#line 277
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 277
undef($memory_5);
#line 277
if (c_rt_lib::check_true($memory_3)) {goto label_45;}
#line 277
$memory_3 = $memory_1->{'name'};
#line 277
$memory_5 = "is";
#line 277
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 277
undef($memory_5);
#line 277
label_45:
#line 277
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 277
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 277
$memory_3 = $memory_1->{'args'};
#line 277
$memory_5 = 1;
#line 277
$memory_3 = $memory_3->[$memory_5];
#line 277
undef($memory_5);
#line 277
$memory_3 = $memory_3->{'val'};
#line 277
$memory_3 = $memory_3->{'value'};
#line 277
$memory_3 = c_rt_lib::ov_is($memory_3, 'string');
#line 277
label_55:
#line 277
undef($memory_4);
#line 277
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 277
if (c_rt_lib::check_true($memory_3)) {goto label_103;}
#line 278
$memory_4 = $memory_1->{'args'};
#line 278
$memory_5 = 1;
#line 278
$memory_4 = $memory_4->[$memory_5];
#line 278
undef($memory_5);
#line 278
$memory_4 = $memory_4->{'val'};
#line 278
$memory_4 = $memory_4->{'value'};
#line 278
$memory_4 = c_rt_lib::ov_as($memory_4, 'string');
#line 279
$memory_7 = $memory_4->{'arr'};
#line 279
$memory_5 = array::len($memory_7);
#line 279
undef($memory_7);
#line 279
$memory_7 = 1;
#line 279
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 279
undef($memory_7);
#line 279
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 279
if (c_rt_lib::check_true($memory_6)) {goto label_85;}
#line 279
$memory_7 = $memory_4->{'arr'};
#line 279
$memory_8 = 0;
#line 279
$memory_7 = $memory_7->[$memory_8];
#line 279
undef($memory_8);
#line 279
$memory_8 = " ";
#line 279
$memory_5 = string::index2($memory_7, $memory_8);
#line 279
undef($memory_8);
#line 279
undef($memory_7);
#line 279
$memory_7 = 0;
#line 279
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 279
undef($memory_7);
#line 279
label_85:
#line 279
undef($memory_6);
#line 279
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 279
if (c_rt_lib::check_true($memory_5)) {goto label_99;}
#line 280
$memory_6 = c_rt_lib::to_nl(1);
#line 280
undef($memory_0);
#line 280
undef($memory_1);
#line 280
undef($memory_2);
#line 280
undef($memory_3);
#line 280
undef($memory_4);
#line 280
undef($memory_5);
#line 280
return $memory_6;
#line 280
undef($memory_6);
#line 281
goto label_99;
#line 281
label_99:
#line 281
undef($memory_5);
#line 281
undef($memory_4);
#line 282
goto label_103;
#line 282
label_103:
#line 282
undef($memory_3);
#line 283
goto label_106;
#line 283
label_106:
#line 283
undef($memory_2);
#line 284
$memory_2 = c_rt_lib::to_nl(0);
#line 284
undef($memory_0);
#line 284
undef($memory_1);
#line 284
return $memory_2;
#line 284
undef($memory_2);
#line 284
undef($memory_1);
#line 284
undef($memory_0);
#line 284
return;
}

sub pretty_printer_priv::print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];
#line 288
$memory_1 = $memory_0->{'value'};
#line 288
$memory_2 = c_rt_lib::ov_is($memory_1, 'const');
#line 288
if (c_rt_lib::check_true($memory_2)) {goto label_38;}
#line 290
$memory_2 = c_rt_lib::ov_is($memory_1, 'string');
#line 290
if (c_rt_lib::check_true($memory_2)) {goto label_49;}
#line 300
$memory_2 = c_rt_lib::ov_is($memory_1, 'hash_key');
#line 300
if (c_rt_lib::check_true($memory_2)) {goto label_121;}
#line 302
$memory_2 = c_rt_lib::ov_is($memory_1, 'variant');
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_132;}
#line 304
$memory_2 = c_rt_lib::ov_is($memory_1, 'var');
#line 304
if (c_rt_lib::check_true($memory_2)) {goto label_143;}
#line 306
$memory_2 = c_rt_lib::ov_is($memory_1, 'parenthesis');
#line 306
if (c_rt_lib::check_true($memory_2)) {goto label_154;}
#line 308
$memory_2 = c_rt_lib::ov_is($memory_1, 'ternary_op');
#line 308
if (c_rt_lib::check_true($memory_2)) {goto label_177;}
#line 316
$memory_2 = c_rt_lib::ov_is($memory_1, 'bin_op');
#line 316
if (c_rt_lib::check_true($memory_2)) {goto label_222;}
#line 349
$memory_2 = c_rt_lib::ov_is($memory_1, 'var_op');
#line 349
if (c_rt_lib::check_true($memory_2)) {goto label_391;}
#line 364
$memory_2 = c_rt_lib::ov_is($memory_1, 'post_dec');
#line 364
if (c_rt_lib::check_true($memory_2)) {goto label_445;}
#line 366
$memory_2 = c_rt_lib::ov_is($memory_1, 'post_inc');
#line 366
if (c_rt_lib::check_true($memory_2)) {goto label_464;}
#line 368
$memory_2 = c_rt_lib::ov_is($memory_1, 'unary_op');
#line 368
if (c_rt_lib::check_true($memory_2)) {goto label_483;}
#line 370
$memory_2 = c_rt_lib::ov_is($memory_1, 'fun_val');
#line 370
if (c_rt_lib::check_true($memory_2)) {goto label_502;}
#line 394
$memory_2 = c_rt_lib::ov_is($memory_1, 'nop');
#line 394
if (c_rt_lib::check_true($memory_2)) {goto label_680;}
#line 396
$memory_2 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 396
if (c_rt_lib::check_true($memory_2)) {goto label_693;}
#line 398
$memory_2 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 398
if (c_rt_lib::check_true($memory_2)) {goto label_708;}
#line 400
$memory_2 = c_rt_lib::ov_is($memory_1, 'fun_label');
#line 400
if (c_rt_lib::check_true($memory_2)) {goto label_725;}
#line 400
$memory_2 = "NOMATCHALERT";
#line 400
$memory_2 = [$memory_2,$memory_1];
#line 400
die(dfile::ssave($memory_2));
#line 288
label_38:
#line 288
$memory_3 = c_rt_lib::ov_as($memory_1, 'const');
#line 289
$memory_4 = wprinter::build_sim($memory_3);
#line 289
undef($memory_0);
#line 289
undef($memory_1);
#line 289
undef($memory_2);
#line 289
undef($memory_3);
#line 289
return $memory_4;
#line 289
undef($memory_4);
#line 289
undef($memory_3);
#line 290
goto label_742;
#line 290
label_49:
#line 290
$memory_3 = c_rt_lib::ov_as($memory_1, 'string');
#line 291
$memory_4 = [];
#line 292
$memory_5 = $memory_3->{'arr'};
#line 292
$memory_7 = 0;
#line 292
$memory_8 = 1;
#line 292
$memory_9 = c_rt_lib::array_len($memory_5);
#line 292
label_56:
#line 292
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 292
if (c_rt_lib::check_true($memory_10)) {goto label_68;}
#line 292
$memory_6 = $memory_5->[$memory_7];
#line 293
$memory_11 = "'";
#line 293
$memory_12 = pretty_printer_priv::string_to_nl($memory_6);
#line 293
$memory_11 = $memory_11 . $memory_12;
#line 293
undef($memory_12);
#line 293
array::push($memory_4, $memory_11);
#line 293
undef($memory_11);
#line 294
$memory_7 = $memory_7 + $memory_8;
#line 294
goto label_56;
#line 294
label_68:
#line 294
undef($memory_5);
#line 294
undef($memory_6);
#line 294
undef($memory_7);
#line 294
undef($memory_8);
#line 294
undef($memory_9);
#line 294
undef($memory_10);
#line 295
$memory_5 = $memory_3->{'last'};
#line 295
$memory_6 = c_rt_lib::ov_is($memory_5, 'new_line');
#line 295
if (c_rt_lib::check_true($memory_6)) {goto label_83;}
#line 296
$memory_6 = c_rt_lib::ov_is($memory_5, 'end');
#line 296
if (c_rt_lib::check_true($memory_6)) {goto label_85;}
#line 296
$memory_6 = "NOMATCHALERT";
#line 296
$memory_6 = [$memory_6,$memory_5];
#line 296
die(dfile::ssave($memory_6));
#line 295
label_83:
#line 296
goto label_105;
#line 296
label_85:
#line 297
$memory_8 = array::len($memory_4);
#line 297
$memory_9 = 1;
#line 297
$memory_8 = $memory_8 - $memory_9;
#line 297
undef($memory_9);
#line 297
$memory_7 = $memory_4->[$memory_8];
#line 297
undef($memory_8);
#line 297
$memory_8 = "'";
#line 297
$memory_7 = $memory_7 . $memory_8;
#line 297
undef($memory_8);
#line 297
$memory_9 = array::len($memory_4);
#line 297
$memory_10 = 1;
#line 297
$memory_9 = $memory_9 - $memory_10;
#line 297
undef($memory_10);
#line 297
$memory_8 = $memory_7;
#line 297
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_9] = $memory_8;
#line 297
undef($memory_7);
#line 297
undef($memory_8);
#line 297
undef($memory_9);
#line 298
goto label_105;
#line 298
label_105:
#line 298
undef($memory_5);
#line 298
undef($memory_6);
#line 299
$memory_6 = $memory_3->{'last'};
#line 299
$memory_5 = wprinter::build_str_arr($memory_4, $memory_6);
#line 299
undef($memory_6);
#line 299
undef($memory_0);
#line 299
undef($memory_1);
#line 299
undef($memory_2);
#line 299
undef($memory_3);
#line 299
undef($memory_4);
#line 299
return $memory_5;
#line 299
undef($memory_5);
#line 299
undef($memory_4);
#line 299
undef($memory_3);
#line 300
goto label_742;
#line 300
label_121:
#line 300
$memory_3 = c_rt_lib::ov_as($memory_1, 'hash_key');
#line 301
$memory_4 = wprinter::build_sim($memory_3);
#line 301
undef($memory_0);
#line 301
undef($memory_1);
#line 301
undef($memory_2);
#line 301
undef($memory_3);
#line 301
return $memory_4;
#line 301
undef($memory_4);
#line 301
undef($memory_3);
#line 302
goto label_742;
#line 302
label_132:
#line 302
$memory_3 = c_rt_lib::ov_as($memory_1, 'variant');
#line 303
$memory_4 = pretty_printer_priv::print_variant($memory_3);
#line 303
undef($memory_0);
#line 303
undef($memory_1);
#line 303
undef($memory_2);
#line 303
undef($memory_3);
#line 303
return $memory_4;
#line 303
undef($memory_4);
#line 303
undef($memory_3);
#line 304
goto label_742;
#line 304
label_143:
#line 304
$memory_3 = c_rt_lib::ov_as($memory_1, 'var');
#line 305
$memory_4 = wprinter::build_sim($memory_3);
#line 305
undef($memory_0);
#line 305
undef($memory_1);
#line 305
undef($memory_2);
#line 305
undef($memory_3);
#line 305
return $memory_4;
#line 305
undef($memory_4);
#line 305
undef($memory_3);
#line 306
goto label_742;
#line 306
label_154:
#line 306
$memory_3 = c_rt_lib::ov_as($memory_1, 'parenthesis');
#line 307
$memory_7 = "(";
#line 307
$memory_6 = wprinter::build_sim($memory_7);
#line 307
undef($memory_7);
#line 307
$memory_7 = pretty_printer_priv::print_val($memory_3);
#line 307
$memory_9 = ")";
#line 307
$memory_8 = wprinter::build_sim($memory_9);
#line 307
undef($memory_9);
#line 307
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 307
undef($memory_6);
#line 307
undef($memory_7);
#line 307
undef($memory_8);
#line 307
$memory_4 = wprinter::build_pretty_a($memory_5);
#line 307
undef($memory_5);
#line 307
undef($memory_0);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 307
return $memory_4;
#line 307
undef($memory_4);
#line 307
undef($memory_3);
#line 308
goto label_742;
#line 308
label_177:
#line 308
$memory_3 = c_rt_lib::ov_as($memory_1, 'ternary_op');
#line 310
$memory_7 = $memory_3->{'fst'};
#line 310
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 310
undef($memory_7);
#line 311
$memory_7 = wprinter::get_sep();
#line 312
$memory_11 = "? ";
#line 312
$memory_10 = wprinter::build_sim($memory_11);
#line 312
undef($memory_11);
#line 312
$memory_12 = $memory_3->{'snd'};
#line 312
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 312
undef($memory_12);
#line 312
$memory_9 = [$memory_10,$memory_11];
#line 312
undef($memory_10);
#line 312
undef($memory_11);
#line 312
$memory_8 = wprinter::build_pretty_op_l($memory_9);
#line 312
undef($memory_9);
#line 313
$memory_9 = wprinter::get_sep();
#line 314
$memory_13 = ": ";
#line 314
$memory_12 = wprinter::build_sim($memory_13);
#line 314
undef($memory_13);
#line 314
$memory_14 = $memory_3->{'thrd'};
#line 314
$memory_13 = pretty_printer_priv::print_val($memory_14);
#line 314
undef($memory_14);
#line 314
$memory_11 = [$memory_12,$memory_13];
#line 314
undef($memory_12);
#line 314
undef($memory_13);
#line 314
$memory_10 = wprinter::build_pretty_op_l($memory_11);
#line 314
undef($memory_11);
#line 314
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10];
#line 314
undef($memory_6);
#line 314
undef($memory_7);
#line 314
undef($memory_8);
#line 314
undef($memory_9);
#line 314
undef($memory_10);
#line 314
$memory_4 = wprinter::build_pretty_a($memory_5);
#line 314
undef($memory_5);
#line 314
undef($memory_0);
#line 314
undef($memory_1);
#line 314
undef($memory_2);
#line 314
undef($memory_3);
#line 314
return $memory_4;
#line 314
undef($memory_4);
#line 314
undef($memory_3);
#line 316
goto label_742;
#line 316
label_222:
#line 316
$memory_3 = c_rt_lib::ov_as($memory_1, 'bin_op');
#line 317
$memory_4 = $memory_3->{'op'};
#line 318
$memory_5 = "ARRAY_INDEX";
#line 318
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 318
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 318
if (c_rt_lib::check_true($memory_5)) {goto label_261;}
#line 320
$memory_11 = $memory_3->{'left'};
#line 320
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 320
undef($memory_11);
#line 320
$memory_12 = "[";
#line 320
$memory_11 = wprinter::build_sim($memory_12);
#line 320
undef($memory_12);
#line 320
$memory_9 = [$memory_10,$memory_11];
#line 320
undef($memory_10);
#line 320
undef($memory_11);
#line 320
$memory_8 = wprinter::build_pretty_l($memory_9);
#line 320
undef($memory_9);
#line 321
$memory_10 = $memory_3->{'right'};
#line 321
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 321
undef($memory_10);
#line 322
$memory_11 = "]";
#line 322
$memory_10 = wprinter::build_sim($memory_11);
#line 322
undef($memory_11);
#line 322
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 322
undef($memory_8);
#line 322
undef($memory_9);
#line 322
undef($memory_10);
#line 322
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 322
undef($memory_7);
#line 322
undef($memory_0);
#line 322
undef($memory_1);
#line 322
undef($memory_2);
#line 322
undef($memory_3);
#line 322
undef($memory_4);
#line 322
undef($memory_5);
#line 322
return $memory_6;
#line 322
undef($memory_6);
#line 324
goto label_386;
#line 324
label_261:
#line 324
$memory_5 = "HASH_INDEX";
#line 324
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 324
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 324
if (c_rt_lib::check_true($memory_5)) {goto label_298;}
#line 326
$memory_11 = $memory_3->{'left'};
#line 326
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 326
undef($memory_11);
#line 326
$memory_12 = "{";
#line 326
$memory_11 = wprinter::build_sim($memory_12);
#line 326
undef($memory_12);
#line 326
$memory_9 = [$memory_10,$memory_11];
#line 326
undef($memory_10);
#line 326
undef($memory_11);
#line 326
$memory_8 = wprinter::build_pretty_l($memory_9);
#line 326
undef($memory_9);
#line 327
$memory_10 = $memory_3->{'right'};
#line 327
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 327
undef($memory_10);
#line 328
$memory_11 = "}";
#line 328
$memory_10 = wprinter::build_sim($memory_11);
#line 328
undef($memory_11);
#line 328
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 328
undef($memory_8);
#line 328
undef($memory_9);
#line 328
undef($memory_10);
#line 328
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 328
undef($memory_7);
#line 328
undef($memory_0);
#line 328
undef($memory_1);
#line 328
undef($memory_2);
#line 328
undef($memory_3);
#line 328
undef($memory_4);
#line 328
undef($memory_5);
#line 328
return $memory_6;
#line 328
undef($memory_6);
#line 330
goto label_386;
#line 330
label_298:
#line 330
$memory_5 = "->";
#line 330
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 330
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 330
if (c_rt_lib::check_true($memory_5)) {goto label_355;}
#line 332
$memory_8 = $memory_3->{'left'};
#line 332
$memory_7 = pretty_printer_priv::is_to_change_ov($memory_8);
#line 332
undef($memory_8);
#line 332
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 332
if (c_rt_lib::check_true($memory_7)) {goto label_326;}
#line 334
$memory_11 = "(";
#line 334
$memory_10 = wprinter::build_sim($memory_11);
#line 334
undef($memory_11);
#line 335
$memory_12 = $memory_3->{'left'};
#line 335
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 335
undef($memory_12);
#line 336
$memory_13 = ")";
#line 336
$memory_12 = wprinter::build_sim($memory_13);
#line 336
undef($memory_13);
#line 336
$memory_9 = [$memory_10,$memory_11,$memory_12];
#line 336
undef($memory_10);
#line 336
undef($memory_11);
#line 336
undef($memory_12);
#line 336
$memory_8 = wprinter::build_pretty_a($memory_9);
#line 336
undef($memory_9);
#line 336
$memory_6 = $memory_8;
#line 336
undef($memory_8);
#line 338
goto label_333;
#line 338
label_326:
#line 339
$memory_9 = $memory_3->{'left'};
#line 339
$memory_8 = pretty_printer_priv::print_val($memory_9);
#line 339
undef($memory_9);
#line 339
$memory_6 = $memory_8;
#line 339
undef($memory_8);
#line 340
goto label_333;
#line 340
label_333:
#line 340
undef($memory_7);
#line 341
$memory_9 = wprinter::build_sim($memory_4);
#line 341
$memory_11 = $memory_3->{'right'};
#line 341
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 341
undef($memory_11);
#line 341
$memory_8 = [$memory_6,$memory_9,$memory_10];
#line 341
undef($memory_9);
#line 341
undef($memory_10);
#line 341
$memory_7 = wprinter::build_pretty_op_l($memory_8);
#line 341
undef($memory_8);
#line 341
undef($memory_0);
#line 341
undef($memory_1);
#line 341
undef($memory_2);
#line 341
undef($memory_3);
#line 341
undef($memory_4);
#line 341
undef($memory_5);
#line 341
undef($memory_6);
#line 341
return $memory_7;
#line 341
undef($memory_7);
#line 341
undef($memory_6);
#line 342
goto label_386;
#line 342
label_355:
#line 344
$memory_11 = $memory_3->{'left'};
#line 344
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 344
undef($memory_11);
#line 344
$memory_11 = wprinter::get_sep();
#line 344
$memory_12 = wprinter::build_sim($memory_4);
#line 344
$memory_9 = [$memory_10,$memory_11,$memory_12];
#line 344
undef($memory_10);
#line 344
undef($memory_11);
#line 344
undef($memory_12);
#line 344
$memory_8 = wprinter::build_pretty_op_l($memory_9);
#line 344
undef($memory_9);
#line 345
$memory_9 = wprinter::get_sep();
#line 346
$memory_11 = $memory_3->{'right'};
#line 346
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 346
undef($memory_11);
#line 346
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 346
undef($memory_8);
#line 346
undef($memory_9);
#line 346
undef($memory_10);
#line 346
$memory_6 = wprinter::build_pretty_op_l($memory_7);
#line 346
undef($memory_7);
#line 346
undef($memory_0);
#line 346
undef($memory_1);
#line 346
undef($memory_2);
#line 346
undef($memory_3);
#line 346
undef($memory_4);
#line 346
undef($memory_5);
#line 346
return $memory_6;
#line 346
undef($memory_6);
#line 348
goto label_386;
#line 348
label_386:
#line 348
undef($memory_5);
#line 348
undef($memory_4);
#line 348
undef($memory_3);
#line 349
goto label_742;
#line 349
label_391:
#line 349
$memory_3 = c_rt_lib::ov_as($memory_1, 'var_op');
#line 351
$memory_5 = $memory_3->{'op'};
#line 351
$memory_6 = c_rt_lib::ov_is($memory_5, 'ov_as');
#line 351
if (c_rt_lib::check_true($memory_6)) {goto label_401;}
#line 353
$memory_6 = c_rt_lib::ov_is($memory_5, 'ov_is');
#line 353
if (c_rt_lib::check_true($memory_6)) {goto label_406;}
#line 353
$memory_6 = "NOMATCHALERT";
#line 353
$memory_6 = [$memory_6,$memory_5];
#line 353
die(dfile::ssave($memory_6));
#line 351
label_401:
#line 352
$memory_7 = "as";
#line 352
$memory_4 = $memory_7;
#line 352
undef($memory_7);
#line 353
goto label_411;
#line 353
label_406:
#line 354
$memory_7 = "is";
#line 354
$memory_4 = $memory_7;
#line 354
undef($memory_7);
#line 355
goto label_411;
#line 355
label_411:
#line 355
undef($memory_5);
#line 355
undef($memory_6);
#line 357
$memory_8 = $memory_3->{'left'};
#line 357
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 357
undef($memory_8);
#line 358
$memory_8 = wprinter::get_sep();
#line 359
$memory_9 = wprinter::build_sim($memory_4);
#line 360
$memory_10 = wprinter::get_sep();
#line 361
$memory_12 = ":";
#line 361
$memory_11 = wprinter::build_sim($memory_12);
#line 361
undef($memory_12);
#line 362
$memory_13 = $memory_3->{'case'};
#line 362
$memory_12 = wprinter::build_sim($memory_13);
#line 362
undef($memory_13);
#line 362
$memory_6 = [$memory_7,$memory_8,$memory_9,$memory_10,$memory_11,$memory_12];
#line 362
undef($memory_7);
#line 362
undef($memory_8);
#line 362
undef($memory_9);
#line 362
undef($memory_10);
#line 362
undef($memory_11);
#line 362
undef($memory_12);
#line 362
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 362
undef($memory_6);
#line 362
undef($memory_0);
#line 362
undef($memory_1);
#line 362
undef($memory_2);
#line 362
undef($memory_3);
#line 362
undef($memory_4);
#line 362
return $memory_5;
#line 362
undef($memory_5);
#line 362
undef($memory_4);
#line 362
undef($memory_3);
#line 364
goto label_742;
#line 364
label_445:
#line 364
$memory_3 = c_rt_lib::ov_as($memory_1, 'post_dec');
#line 365
$memory_6 = pretty_printer_priv::print_val($memory_3);
#line 365
$memory_8 = "--";
#line 365
$memory_7 = wprinter::build_sim($memory_8);
#line 365
undef($memory_8);
#line 365
$memory_5 = [$memory_6,$memory_7];
#line 365
undef($memory_6);
#line 365
undef($memory_7);
#line 365
$memory_4 = wprinter::build_pretty_op_l($memory_5);
#line 365
undef($memory_5);
#line 365
undef($memory_0);
#line 365
undef($memory_1);
#line 365
undef($memory_2);
#line 365
undef($memory_3);
#line 365
return $memory_4;
#line 365
undef($memory_4);
#line 365
undef($memory_3);
#line 366
goto label_742;
#line 366
label_464:
#line 366
$memory_3 = c_rt_lib::ov_as($memory_1, 'post_inc');
#line 367
$memory_6 = pretty_printer_priv::print_val($memory_3);
#line 367
$memory_8 = "++";
#line 367
$memory_7 = wprinter::build_sim($memory_8);
#line 367
undef($memory_8);
#line 367
$memory_5 = [$memory_6,$memory_7];
#line 367
undef($memory_6);
#line 367
undef($memory_7);
#line 367
$memory_4 = wprinter::build_pretty_op_l($memory_5);
#line 367
undef($memory_5);
#line 367
undef($memory_0);
#line 367
undef($memory_1);
#line 367
undef($memory_2);
#line 367
undef($memory_3);
#line 367
return $memory_4;
#line 367
undef($memory_4);
#line 367
undef($memory_3);
#line 368
goto label_742;
#line 368
label_483:
#line 368
$memory_3 = c_rt_lib::ov_as($memory_1, 'unary_op');
#line 369
$memory_6 = $memory_3->{'op'};
#line 369
$memory_5 = wprinter::build_sim($memory_6);
#line 369
undef($memory_6);
#line 369
$memory_7 = $memory_3->{'val'};
#line 369
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 369
undef($memory_7);
#line 369
$memory_4 = wprinter::build_pretty_bind($memory_5, $memory_6);
#line 369
undef($memory_6);
#line 369
undef($memory_5);
#line 369
undef($memory_0);
#line 369
undef($memory_1);
#line 369
undef($memory_2);
#line 369
undef($memory_3);
#line 369
return $memory_4;
#line 369
undef($memory_4);
#line 369
undef($memory_3);
#line 370
goto label_742;
#line 370
label_502:
#line 370
$memory_3 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 371
$memory_5 = $memory_3->{'name'};
#line 371
$memory_6 = $memory_3->{'module'};
#line 371
$memory_4 = pretty_printer_priv::get_fun_label($memory_5, $memory_6);
#line 371
undef($memory_6);
#line 371
undef($memory_5);
#line 371
$memory_5 = "(";
#line 371
$memory_4 = $memory_4 . $memory_5;
#line 371
undef($memory_5);
#line 372
$memory_6 = $memory_3->{'args'};
#line 372
$memory_5 = array::len($memory_6);
#line 372
undef($memory_6);
#line 372
$memory_6 = 1;
#line 372
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 372
undef($memory_6);
#line 372
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 372
if (c_rt_lib::check_true($memory_5)) {goto label_551;}
#line 373
$memory_6 = $memory_3->{'args'};
#line 373
$memory_7 = 0;
#line 373
$memory_6 = $memory_6->[$memory_7];
#line 373
undef($memory_7);
#line 373
$memory_6 = $memory_6->{'val'};
#line 374
$memory_7 = $memory_6->{'value'};
#line 374
$memory_7 = c_rt_lib::ov_is($memory_7, 'hash_decl');
#line 374
if (c_rt_lib::check_true($memory_7)) {goto label_530;}
#line 374
$memory_7 = $memory_6->{'value'};
#line 374
$memory_7 = c_rt_lib::ov_is($memory_7, 'arr_decl');
#line 374
label_530:
#line 374
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 374
if (c_rt_lib::check_true($memory_7)) {goto label_547;}
#line 375
$memory_9 = ")";
#line 375
$memory_8 = pretty_printer_priv::get_compressed_fun_val($memory_6, $memory_4, $memory_9);
#line 375
undef($memory_9);
#line 375
undef($memory_0);
#line 375
undef($memory_1);
#line 375
undef($memory_2);
#line 375
undef($memory_3);
#line 375
undef($memory_4);
#line 375
undef($memory_5);
#line 375
undef($memory_6);
#line 375
undef($memory_7);
#line 375
return $memory_8;
#line 375
undef($memory_8);
#line 376
goto label_547;
#line 376
label_547:
#line 376
undef($memory_7);
#line 376
undef($memory_6);
#line 377
goto label_600;
#line 377
label_551:
#line 377
$memory_5 = pretty_printer_priv::is_to_change_ov($memory_0);
#line 377
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 377
if (c_rt_lib::check_true($memory_5)) {goto label_600;}
#line 379
$memory_9 = $memory_3->{'args'};
#line 379
$memory_10 = 0;
#line 379
$memory_9 = $memory_9->[$memory_10];
#line 379
undef($memory_10);
#line 379
$memory_9 = $memory_9->{'val'};
#line 379
$memory_8 = pretty_printer_priv::print_val($memory_9);
#line 379
undef($memory_9);
#line 380
$memory_9 = wprinter::get_sep();
#line 381
$memory_11 = $memory_3->{'name'};
#line 381
$memory_10 = wprinter::build_sim($memory_11);
#line 381
undef($memory_11);
#line 382
$memory_11 = wprinter::get_sep();
#line 383
$memory_13 = ":";
#line 383
$memory_14 = $memory_3->{'args'};
#line 383
$memory_15 = 1;
#line 383
$memory_14 = $memory_14->[$memory_15];
#line 383
undef($memory_15);
#line 383
$memory_14 = $memory_14->{'val'};
#line 383
$memory_14 = $memory_14->{'value'};
#line 383
$memory_14 = c_rt_lib::ov_as($memory_14, 'string');
#line 383
$memory_14 = $memory_14->{'arr'};
#line 383
$memory_15 = 0;
#line 383
$memory_14 = $memory_14->[$memory_15];
#line 383
undef($memory_15);
#line 383
$memory_13 = $memory_13 . $memory_14;
#line 383
undef($memory_14);
#line 383
$memory_12 = wprinter::build_sim($memory_13);
#line 383
undef($memory_13);
#line 383
$memory_7 = [$memory_8,$memory_9,$memory_10,$memory_11,$memory_12];
#line 383
undef($memory_8);
#line 383
undef($memory_9);
#line 383
undef($memory_10);
#line 383
undef($memory_11);
#line 383
undef($memory_12);
#line 383
$memory_6 = wprinter::build_pretty_op_l($memory_7);
#line 383
undef($memory_7);
#line 383
undef($memory_0);
#line 383
undef($memory_1);
#line 383
undef($memory_2);
#line 383
undef($memory_3);
#line 383
undef($memory_4);
#line 383
undef($memory_5);
#line 383
return $memory_6;
#line 383
undef($memory_6);
#line 385
goto label_600;
#line 385
label_600:
#line 385
undef($memory_5);
#line 386
$memory_6 = wprinter::build_sim($memory_4);
#line 386
$memory_5 = [$memory_6];
#line 386
undef($memory_6);
#line 387
$memory_7 = $memory_3->{'args'};
#line 387
$memory_6 = pretty_printer_priv::join_print_fun_arg($memory_7);
#line 387
undef($memory_7);
#line 387
array::append($memory_5, $memory_6);
#line 387
undef($memory_6);
#line 388
$memory_7 = ")";
#line 388
$memory_6 = wprinter::build_sim($memory_7);
#line 388
undef($memory_7);
#line 388
array::push($memory_5, $memory_6);
#line 388
undef($memory_6);
#line 391
$memory_8 = $memory_3->{'args'};
#line 391
$memory_6 = pretty_printer_priv::count_structs($memory_8);
#line 391
undef($memory_8);
#line 391
$memory_9 = $memory_3->{'args'};
#line 391
$memory_8 = array::len($memory_9);
#line 391
undef($memory_9);
#line 391
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_8);
#line 391
undef($memory_8);
#line 391
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 391
if (c_rt_lib::check_true($memory_7)) {goto label_631;}
#line 391
$memory_8 = $memory_3->{'args'};
#line 391
$memory_6 = array::len($memory_8);
#line 391
undef($memory_8);
#line 391
$memory_8 = 0;
#line 391
$memory_6 = c_rt_lib::to_nl($memory_6 > $memory_8);
#line 391
undef($memory_8);
#line 391
label_631:
#line 391
undef($memory_7);
#line 391
if (c_rt_lib::check_true($memory_6)) {goto label_651;}
#line 392
$memory_8 = $memory_3->{'args'};
#line 392
$memory_6 = array::len($memory_8);
#line 392
undef($memory_8);
#line 392
$memory_8 = 1;
#line 392
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_8);
#line 392
undef($memory_8);
#line 392
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 392
if (c_rt_lib::check_true($memory_7)) {goto label_649;}
#line 392
$memory_6 = $memory_3->{'args'};
#line 392
$memory_8 = 0;
#line 392
$memory_6 = $memory_6->[$memory_8];
#line 392
undef($memory_8);
#line 392
$memory_6 = $memory_6->{'val'};
#line 392
$memory_6 = $memory_6->{'value'};
#line 392
$memory_6 = c_rt_lib::ov_is($memory_6, 'fun_val');
#line 392
label_649:
#line 392
undef($memory_7);
#line 392
label_651:
#line 392
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 392
if (c_rt_lib::check_true($memory_6)) {goto label_665;}
#line 389
$memory_7 = wprinter::build_pretty_op_l($memory_5);
#line 389
undef($memory_0);
#line 389
undef($memory_1);
#line 389
undef($memory_2);
#line 389
undef($memory_3);
#line 389
undef($memory_4);
#line 389
undef($memory_5);
#line 389
undef($memory_6);
#line 389
return $memory_7;
#line 389
undef($memory_7);
#line 389
goto label_665;
#line 389
label_665:
#line 389
undef($memory_6);
#line 393
$memory_6 = wprinter::build_pretty_l($memory_5);
#line 393
undef($memory_0);
#line 393
undef($memory_1);
#line 393
undef($memory_2);
#line 393
undef($memory_3);
#line 393
undef($memory_4);
#line 393
undef($memory_5);
#line 393
return $memory_6;
#line 393
undef($memory_6);
#line 393
undef($memory_4);
#line 393
undef($memory_5);
#line 393
undef($memory_3);
#line 394
goto label_742;
#line 394
label_680:
#line 395
$memory_4 = 0;
#line 395
$memory_5 = "";
#line 395
$memory_5 = c_rt_lib::ov_mk_arg('sim', $memory_5);
#line 395
$memory_3 = {len => $memory_4,el => $memory_5,};
#line 395
undef($memory_4);
#line 395
undef($memory_5);
#line 395
undef($memory_0);
#line 395
undef($memory_1);
#line 395
undef($memory_2);
#line 395
return $memory_3;
#line 395
undef($memory_3);
#line 396
goto label_742;
#line 396
label_693:
#line 396
$memory_3 = c_rt_lib::ov_as($memory_1, 'arr_decl');
#line 397
$memory_5 = "";
#line 397
$memory_6 = "";
#line 397
$memory_4 = pretty_printer_priv::get_compressed_fun_val($memory_0, $memory_5, $memory_6);
#line 397
undef($memory_6);
#line 397
undef($memory_5);
#line 397
undef($memory_0);
#line 397
undef($memory_1);
#line 397
undef($memory_2);
#line 397
undef($memory_3);
#line 397
return $memory_4;
#line 397
undef($memory_4);
#line 397
undef($memory_3);
#line 398
goto label_742;
#line 398
label_708:
#line 398
$memory_3 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 399
$memory_5 = pretty_printer_priv::join_print_hash_elem($memory_3);
#line 399
$memory_6 = "{";
#line 399
$memory_7 = "}";
#line 399
$memory_4 = wprinter::build_pretty_arr_decl($memory_5, $memory_6, $memory_7);
#line 399
undef($memory_7);
#line 399
undef($memory_6);
#line 399
undef($memory_5);
#line 399
undef($memory_0);
#line 399
undef($memory_1);
#line 399
undef($memory_2);
#line 399
undef($memory_3);
#line 399
return $memory_4;
#line 399
undef($memory_4);
#line 399
undef($memory_3);
#line 400
goto label_742;
#line 400
label_725:
#line 400
$memory_3 = c_rt_lib::ov_as($memory_1, 'fun_label');
#line 401
$memory_6 = $memory_3->{'name'};
#line 401
$memory_7 = $memory_3->{'module'};
#line 401
$memory_5 = pretty_printer_priv::get_fun_label($memory_6, $memory_7);
#line 401
undef($memory_7);
#line 401
undef($memory_6);
#line 401
$memory_4 = wprinter::build_sim($memory_5);
#line 401
undef($memory_5);
#line 401
undef($memory_0);
#line 401
undef($memory_1);
#line 401
undef($memory_2);
#line 401
undef($memory_3);
#line 401
return $memory_4;
#line 401
undef($memory_4);
#line 401
undef($memory_3);
#line 402
goto label_742;
#line 402
label_742:
#line 402
undef($memory_1);
#line 402
undef($memory_2);
#line 402
undef($memory_0);
#line 402
return;
}

sub pretty_printer_priv::print_cond_mod($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 408
$memory_7 = wprinter::build_sim($memory_1);
#line 409
$memory_8 = wprinter::get_sep();
#line 410
$memory_10 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 410
$memory_9 = wprinter::build_pretty_l($memory_10);
#line 410
undef($memory_10);
#line 410
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 410
undef($memory_7);
#line 410
undef($memory_8);
#line 410
undef($memory_9);
#line 412
$memory_7 = array::len($memory_3);
#line 412
$memory_8 = 0;
#line 412
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 412
undef($memory_8);
#line 412
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 412
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 412
$memory_9 = " ";
#line 412
$memory_8 = wprinter::build_sim($memory_9);
#line 412
undef($memory_9);
#line 412
array::push($memory_6, $memory_8);
#line 412
undef($memory_8);
#line 412
goto label_21;
#line 412
label_21:
#line 412
undef($memory_7);
#line 413
$memory_7 = array::len($memory_3);
#line 413
$memory_8 = 0;
#line 413
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 413
undef($memory_8);
#line 413
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 413
if (c_rt_lib::check_true($memory_7)) {goto label_35;}
#line 413
$memory_9 = "(";
#line 413
$memory_8 = wprinter::build_sim($memory_9);
#line 413
undef($memory_9);
#line 413
array::push($memory_6, $memory_8);
#line 413
undef($memory_8);
#line 413
goto label_35;
#line 413
label_35:
#line 413
undef($memory_7);
#line 414
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 414
array::push($memory_6, $memory_7);
#line 414
undef($memory_7);
#line 415
$memory_7 = array::len($memory_3);
#line 415
$memory_8 = 0;
#line 415
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 415
undef($memory_8);
#line 415
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 415
if (c_rt_lib::check_true($memory_7)) {goto label_52;}
#line 415
$memory_9 = ")";
#line 415
$memory_8 = wprinter::build_sim($memory_9);
#line 415
undef($memory_9);
#line 415
array::push($memory_6, $memory_8);
#line 415
undef($memory_8);
#line 415
goto label_52;
#line 415
label_52:
#line 415
undef($memory_7);
#line 417
$memory_9 = pretty_printer_priv::print_simple_statement($memory_2);
#line 418
$memory_10 = wprinter::get_sep();
#line 419
$memory_11 = wprinter::build_pretty_op_l($memory_6);
#line 419
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 419
undef($memory_9);
#line 419
undef($memory_10);
#line 419
undef($memory_11);
#line 419
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 419
undef($memory_8);
#line 419
wprinter::print_t($memory_0, $memory_7, $memory_5);
#line 419
undef($memory_7);
#line 421
$memory_7 = ";";
#line 421
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 421
undef($memory_7);
#line 421
undef($memory_6);
#line 421
undef($memory_1);
#line 421
undef($memory_2);
#line 421
undef($memory_3);
#line 421
undef($memory_4);
#line 421
undef($memory_5);
#line 421
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 426
$memory_7 = wprinter::build_sim($memory_1);
#line 426
$memory_8 = wprinter::get_sep();
#line 426
$memory_6 = [$memory_7,$memory_8];
#line 426
undef($memory_7);
#line 426
undef($memory_8);
#line 427
$memory_7 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 427
array::append($memory_6, $memory_7);
#line 427
undef($memory_7);
#line 428
$memory_7 = array::len($memory_3);
#line 428
$memory_8 = 0;
#line 428
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 428
undef($memory_8);
#line 428
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 428
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 428
$memory_9 = " ";
#line 428
$memory_8 = wprinter::build_sim($memory_9);
#line 428
undef($memory_9);
#line 428
array::push($memory_6, $memory_8);
#line 428
undef($memory_8);
#line 428
goto label_20;
#line 428
label_20:
#line 428
undef($memory_7);
#line 429
$memory_8 = "(";
#line 429
$memory_7 = wprinter::build_sim($memory_8);
#line 429
undef($memory_8);
#line 429
array::push($memory_6, $memory_7);
#line 429
undef($memory_7);
#line 430
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 431
$memory_8 = $memory_7->{'el'};
#line 431
$memory_8 = c_rt_lib::ov_is($memory_8, 'arr');
#line 431
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 431
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 432
$memory_9 = $memory_7->{'el'};
#line 432
$memory_9 = c_rt_lib::ov_as($memory_9, 'arr');
#line 432
$memory_9 = $memory_9->{'arr'};
#line 432
array::append($memory_6, $memory_9);
#line 432
undef($memory_9);
#line 433
goto label_41;
#line 433
label_38:
#line 434
array::push($memory_6, $memory_7);
#line 435
goto label_41;
#line 435
label_41:
#line 435
undef($memory_8);
#line 436
$memory_9 = ")";
#line 436
$memory_8 = wprinter::build_sim($memory_9);
#line 436
undef($memory_9);
#line 436
array::push($memory_6, $memory_8);
#line 436
undef($memory_8);
#line 437
$memory_8 = wprinter::build_pretty_l($memory_6);
#line 437
wprinter::print_t($memory_0, $memory_8, $memory_5);
#line 437
undef($memory_8);
#line 438
pretty_printer_priv::print_st($memory_0, $memory_2, $memory_5);
#line 438
undef($memory_6);
#line 438
undef($memory_7);
#line 438
undef($memory_1);
#line 438
undef($memory_2);
#line 438
undef($memory_3);
#line 438
undef($memory_4);
#line 438
undef($memory_5);
#line 438
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop_or_mod($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];$memory_6 = $_[6];
#line 443
$memory_7 = $memory_1;
#line 443
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 443
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 444
pretty_printer_priv::print_cond_mod($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 445
goto label_8;
#line 445
label_5:
#line 446
pretty_printer_priv::print_loop($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 447
goto label_8;
#line 447
label_8:
#line 447
undef($memory_7);
#line 447
undef($memory_1);
#line 447
undef($memory_2);
#line 447
undef($memory_3);
#line 447
undef($memory_4);
#line 447
undef($memory_5);
#line 447
undef($memory_6);
#line 447
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_try_ensure($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];
#line 451
$memory_3 = wprinter::build_sim($memory_1);
#line 451
$memory_2 = [$memory_3];
#line 451
undef($memory_3);
#line 452
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 452
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 454
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 454
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 456
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 456
if (c_rt_lib::check_true($memory_3)) {goto label_34;}
#line 456
$memory_3 = "NOMATCHALERT";
#line 456
$memory_3 = [$memory_3,$memory_0];
#line 456
die(dfile::ssave($memory_3));
#line 452
label_12:
#line 452
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 453
$memory_6 = wprinter::get_sep();
#line 453
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 453
$memory_5 = [$memory_6,$memory_7];
#line 453
undef($memory_6);
#line 453
undef($memory_7);
#line 453
array::append($memory_2, $memory_5);
#line 453
undef($memory_5);
#line 453
undef($memory_4);
#line 454
goto label_59;
#line 454
label_23:
#line 454
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 455
$memory_6 = wprinter::get_sep();
#line 455
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 455
$memory_5 = [$memory_6,$memory_7];
#line 455
undef($memory_6);
#line 455
undef($memory_7);
#line 455
array::append($memory_2, $memory_5);
#line 455
undef($memory_5);
#line 455
undef($memory_4);
#line 456
goto label_59;
#line 456
label_34:
#line 456
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 458
$memory_6 = wprinter::get_sep();
#line 459
$memory_8 = $memory_4->{'left'};
#line 459
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 459
undef($memory_8);
#line 460
$memory_8 = wprinter::get_sep();
#line 461
$memory_10 = $memory_4->{'op'};
#line 461
$memory_9 = wprinter::build_sim($memory_10);
#line 461
undef($memory_10);
#line 462
$memory_10 = wprinter::get_sep();
#line 463
$memory_12 = $memory_4->{'right'};
#line 463
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 463
undef($memory_12);
#line 463
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 463
undef($memory_6);
#line 463
undef($memory_7);
#line 463
undef($memory_8);
#line 463
undef($memory_9);
#line 463
undef($memory_10);
#line 463
undef($memory_11);
#line 463
array::append($memory_2, $memory_5);
#line 463
undef($memory_5);
#line 463
undef($memory_4);
#line 465
goto label_59;
#line 465
label_59:
#line 465
undef($memory_3);
#line 466
$memory_3 = wprinter::build_pretty_l($memory_2);
#line 466
undef($memory_0);
#line 466
undef($memory_1);
#line 466
undef($memory_2);
#line 466
return $memory_3;
#line 466
undef($memory_3);
#line 466
undef($memory_2);
#line 466
undef($memory_0);
#line 466
undef($memory_1);
#line 466
return;
}

sub pretty_printer_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 470
$memory_3 = "return";
#line 470
$memory_2 = wprinter::build_sim($memory_3);
#line 470
undef($memory_3);
#line 470
$memory_1 = [$memory_2];
#line 470
undef($memory_2);
#line 471
$memory_2 = $memory_0->{'value'};
#line 471
$memory_2 = c_rt_lib::ov_is($memory_2, 'nop');
#line 471
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 471
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 471
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 472
$memory_4 = wprinter::get_sep();
#line 472
$memory_5 = pretty_printer_priv::print_val($memory_0);
#line 472
$memory_3 = [$memory_4,$memory_5];
#line 472
undef($memory_4);
#line 472
undef($memory_5);
#line 472
array::append($memory_1, $memory_3);
#line 472
undef($memory_3);
#line 473
goto label_18;
#line 473
label_18:
#line 473
undef($memory_2);
#line 474
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 474
undef($memory_0);
#line 474
undef($memory_1);
#line 474
return $memory_2;
#line 474
undef($memory_2);
#line 474
undef($memory_1);
#line 474
undef($memory_0);
#line 474
return;
}

sub pretty_printer_priv::print_sim_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 478
$memory_1 = pretty_printer_priv::print_val($memory_0);
#line 479
$memory_2 = $memory_1->{'el'};
#line 479
$memory_2 = c_rt_lib::ov_is($memory_2, 'arr');
#line 479
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 479
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 480
$memory_4 = $memory_1->{'el'};
#line 480
$memory_4 = c_rt_lib::ov_as($memory_4, 'arr');
#line 480
$memory_4 = $memory_4->{'arr'};
#line 480
$memory_3 = wprinter::build_pretty_l($memory_4);
#line 480
undef($memory_4);
#line 480
$memory_1 = $memory_3;
#line 480
undef($memory_3);
#line 481
goto label_13;
#line 481
label_13:
#line 481
undef($memory_2);
#line 482
undef($memory_0);
#line 482
return $memory_1;
#line 482
undef($memory_1);
#line 482
undef($memory_0);
#line 482
return;
}

sub pretty_printer_priv::__print_break() {
my $memory_0;my $memory_1;
#line 486
$memory_1 = "break";
#line 486
$memory_0 = wprinter::build_sim($memory_1);
#line 486
undef($memory_1);
#line 486
return $memory_0;
#line 486
undef($memory_0);
#line 486
return;
}

my $_print_break;
sub pretty_printer_priv::print_break() {
	$_print_break = pretty_printer_priv::__print_break() unless defined $_print_break;
	return $_print_break;
}

sub pretty_printer_priv::__print_continue() {
my $memory_0;my $memory_1;
#line 490
$memory_1 = "continue";
#line 490
$memory_0 = wprinter::build_sim($memory_1);
#line 490
undef($memory_1);
#line 490
return $memory_0;
#line 490
undef($memory_0);
#line 490
return;
}

my $_print_continue;
sub pretty_printer_priv::print_continue() {
	$_print_continue = pretty_printer_priv::__print_continue() unless defined $_print_continue;
	return $_print_continue;
}

sub pretty_printer_priv::print_die($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 494
$memory_3 = "die";
#line 494
$memory_2 = wprinter::build_sim($memory_3);
#line 494
undef($memory_3);
#line 494
$memory_1 = [$memory_2];
#line 494
undef($memory_2);
#line 500
$memory_2 = array::len($memory_0);
#line 500
$memory_3 = 0;
#line 500
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 500
undef($memory_3);
#line 500
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 500
if (c_rt_lib::check_true($memory_2)) {goto label_27;}
#line 496
$memory_5 = "(";
#line 496
$memory_4 = wprinter::build_sim($memory_5);
#line 496
undef($memory_5);
#line 497
$memory_6 = pretty_printer_priv::join_print_val($memory_0);
#line 497
$memory_5 = wprinter::build_pretty_l($memory_6);
#line 497
undef($memory_6);
#line 498
$memory_7 = ")";
#line 498
$memory_6 = wprinter::build_sim($memory_7);
#line 498
undef($memory_7);
#line 498
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 498
undef($memory_4);
#line 498
undef($memory_5);
#line 498
undef($memory_6);
#line 498
array::append($memory_1, $memory_3);
#line 498
undef($memory_3);
#line 498
goto label_27;
#line 498
label_27:
#line 498
undef($memory_2);
#line 501
$memory_2 = wprinter::build_pretty_a($memory_1);
#line 501
undef($memory_0);
#line 501
undef($memory_1);
#line 501
return $memory_2;
#line 501
undef($memory_2);
#line 501
undef($memory_1);
#line 501
undef($memory_0);
#line 501
return;
}

sub pretty_printer_priv::print_simple_statement($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 505
$memory_1 = $memory_0->{'cmd'};
#line 505
$memory_1 = c_rt_lib::ov_is($memory_1, 'value');
#line 505
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 505
if (c_rt_lib::check_true($memory_1)) {goto label_13;}
#line 506
$memory_3 = $memory_0->{'cmd'};
#line 506
$memory_3 = c_rt_lib::ov_as($memory_3, 'value');
#line 506
$memory_2 = pretty_printer_priv::print_sim_value($memory_3);
#line 506
undef($memory_3);
#line 506
undef($memory_0);
#line 506
undef($memory_1);
#line 506
return $memory_2;
#line 506
undef($memory_2);
#line 507
goto label_100;
#line 507
label_13:
#line 507
$memory_1 = $memory_0->{'cmd'};
#line 507
$memory_1 = c_rt_lib::ov_is($memory_1, 'return');
#line 507
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 507
if (c_rt_lib::check_true($memory_1)) {goto label_27;}
#line 508
$memory_3 = $memory_0->{'cmd'};
#line 508
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 508
$memory_2 = pretty_printer_priv::print_return($memory_3);
#line 508
undef($memory_3);
#line 508
undef($memory_0);
#line 508
undef($memory_1);
#line 508
return $memory_2;
#line 508
undef($memory_2);
#line 509
goto label_100;
#line 509
label_27:
#line 509
$memory_1 = $memory_0->{'cmd'};
#line 509
$memory_1 = c_rt_lib::ov_is($memory_1, 'break');
#line 509
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 509
if (c_rt_lib::check_true($memory_1)) {goto label_38;}
#line 510
$memory_2 = pretty_printer_priv::print_break();
#line 510
undef($memory_0);
#line 510
undef($memory_1);
#line 510
return $memory_2;
#line 510
undef($memory_2);
#line 511
goto label_100;
#line 511
label_38:
#line 511
$memory_1 = $memory_0->{'cmd'};
#line 511
$memory_1 = c_rt_lib::ov_is($memory_1, 'continue');
#line 511
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 511
if (c_rt_lib::check_true($memory_1)) {goto label_49;}
#line 512
$memory_2 = pretty_printer_priv::print_continue();
#line 512
undef($memory_0);
#line 512
undef($memory_1);
#line 512
return $memory_2;
#line 512
undef($memory_2);
#line 513
goto label_100;
#line 513
label_49:
#line 513
$memory_1 = $memory_0->{'cmd'};
#line 513
$memory_1 = c_rt_lib::ov_is($memory_1, 'die');
#line 513
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 513
if (c_rt_lib::check_true($memory_1)) {goto label_63;}
#line 514
$memory_3 = $memory_0->{'cmd'};
#line 514
$memory_3 = c_rt_lib::ov_as($memory_3, 'die');
#line 514
$memory_2 = pretty_printer_priv::print_die($memory_3);
#line 514
undef($memory_3);
#line 514
undef($memory_0);
#line 514
undef($memory_1);
#line 514
return $memory_2;
#line 514
undef($memory_2);
#line 515
goto label_100;
#line 515
label_63:
#line 515
$memory_1 = $memory_0->{'cmd'};
#line 515
$memory_1 = c_rt_lib::ov_is($memory_1, 'try');
#line 515
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 515
if (c_rt_lib::check_true($memory_1)) {goto label_79;}
#line 516
$memory_3 = $memory_0->{'cmd'};
#line 516
$memory_3 = c_rt_lib::ov_as($memory_3, 'try');
#line 516
$memory_4 = "try";
#line 516
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 516
undef($memory_4);
#line 516
undef($memory_3);
#line 516
undef($memory_0);
#line 516
undef($memory_1);
#line 516
return $memory_2;
#line 516
undef($memory_2);
#line 517
goto label_100;
#line 517
label_79:
#line 517
$memory_1 = $memory_0->{'cmd'};
#line 517
$memory_1 = c_rt_lib::ov_is($memory_1, 'ensure');
#line 517
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 517
if (c_rt_lib::check_true($memory_1)) {goto label_95;}
#line 518
$memory_3 = $memory_0->{'cmd'};
#line 518
$memory_3 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 518
$memory_4 = "ensure";
#line 518
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 518
undef($memory_4);
#line 518
undef($memory_3);
#line 518
undef($memory_0);
#line 518
undef($memory_1);
#line 518
return $memory_2;
#line 518
undef($memory_2);
#line 519
goto label_100;
#line 519
label_95:
#line 520
$memory_2 = [$memory_0];
#line 520
die(dfile::ssave($memory_2));
#line 520
undef($memory_2);
#line 521
goto label_100;
#line 521
label_100:
#line 521
undef($memory_1);
#line 521
undef($memory_0);
#line 521
return;
}

sub pretty_printer_priv::flush_sim_statement($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 525
wprinter::print_t($memory_0, $memory_1, $memory_2);
#line 526
$memory_3 = ";";
#line 526
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 526
undef($memory_3);
#line 526
undef($memory_1);
#line 526
undef($memory_2);
#line 526
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_cmd($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 530
$memory_3 = $memory_1->{'cmd'};
#line 530
$memory_4 = c_rt_lib::ov_is($memory_3, 'if');
#line 530
if (c_rt_lib::check_true($memory_4)) {goto label_44;}
#line 540
$memory_4 = c_rt_lib::ov_is($memory_3, 'while');
#line 540
if (c_rt_lib::check_true($memory_4)) {goto label_101;}
#line 542
$memory_4 = c_rt_lib::ov_is($memory_3, 'for');
#line 542
if (c_rt_lib::check_true($memory_4)) {goto label_116;}
#line 561
$memory_4 = c_rt_lib::ov_is($memory_3, 'block');
#line 561
if (c_rt_lib::check_true($memory_4)) {goto label_182;}
#line 568
$memory_4 = c_rt_lib::ov_is($memory_3, 'nop');
#line 568
if (c_rt_lib::check_true($memory_4)) {goto label_226;}
#line 570
$memory_4 = c_rt_lib::ov_is($memory_3, 'match');
#line 570
if (c_rt_lib::check_true($memory_4)) {goto label_231;}
#line 581
$memory_4 = c_rt_lib::ov_is($memory_3, 'fora');
#line 581
if (c_rt_lib::check_true($memory_4)) {goto label_283;}
#line 583
$memory_4 = c_rt_lib::ov_is($memory_3, 'forh');
#line 583
if (c_rt_lib::check_true($memory_4)) {goto label_300;}
#line 586
$memory_4 = c_rt_lib::ov_is($memory_3, 'rep');
#line 586
if (c_rt_lib::check_true($memory_4)) {goto label_319;}
#line 588
$memory_4 = c_rt_lib::ov_is($memory_3, 'loop');
#line 588
if (c_rt_lib::check_true($memory_4)) {goto label_336;}
#line 591
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_mod');
#line 591
if (c_rt_lib::check_true($memory_4)) {goto label_344;}
#line 593
$memory_4 = c_rt_lib::ov_is($memory_3, 'unless_mod');
#line 593
if (c_rt_lib::check_true($memory_4)) {goto label_357;}
#line 595
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 595
if (c_rt_lib::check_true($memory_4)) {goto label_370;}
#line 597
$memory_4 = c_rt_lib::ov_is($memory_3, 'try');
#line 597
if (c_rt_lib::check_true($memory_4)) {goto label_377;}
#line 599
$memory_4 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 599
if (c_rt_lib::check_true($memory_4)) {goto label_386;}
#line 601
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 601
if (c_rt_lib::check_true($memory_4)) {goto label_395;}
#line 603
$memory_4 = c_rt_lib::ov_is($memory_3, 'break');
#line 603
if (c_rt_lib::check_true($memory_4)) {goto label_402;}
#line 605
$memory_4 = c_rt_lib::ov_is($memory_3, 'continue');
#line 605
if (c_rt_lib::check_true($memory_4)) {goto label_407;}
#line 607
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 607
if (c_rt_lib::check_true($memory_4)) {goto label_412;}
#line 609
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_decl');
#line 609
if (c_rt_lib::check_true($memory_4)) {goto label_419;}
#line 609
$memory_4 = "NOMATCHALERT";
#line 609
$memory_4 = [$memory_4,$memory_3];
#line 609
die(dfile::ssave($memory_4));
#line 530
label_44:
#line 530
$memory_5 = c_rt_lib::ov_as($memory_3, 'if');
#line 531
$memory_6 = "if";
#line 531
$memory_7 = $memory_5->{'if'};
#line 531
$memory_8 = [];
#line 531
$memory_9 = $memory_5->{'cond'};
#line 531
pretty_printer_priv::print_loop($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 531
undef($memory_9);
#line 531
undef($memory_8);
#line 531
undef($memory_7);
#line 531
undef($memory_6);
#line 532
$memory_6 = $memory_5->{'elsif'};
#line 532
$memory_8 = 0;
#line 532
$memory_9 = 1;
#line 532
$memory_10 = c_rt_lib::array_len($memory_6);
#line 532
label_59:
#line 532
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 532
if (c_rt_lib::check_true($memory_11)) {goto label_77;}
#line 532
$memory_7 = $memory_6->[$memory_8];
#line 533
$memory_12 = " ";
#line 533
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 533
undef($memory_12);
#line 534
$memory_12 = "elsif";
#line 534
$memory_13 = $memory_7->{'cmd'};
#line 534
$memory_14 = [];
#line 534
$memory_15 = $memory_7->{'cond'};
#line 534
pretty_printer_priv::print_loop($memory_0, $memory_12, $memory_13, $memory_14, $memory_15, $memory_2);
#line 534
undef($memory_15);
#line 534
undef($memory_14);
#line 534
undef($memory_13);
#line 534
undef($memory_12);
#line 535
$memory_8 = $memory_8 + $memory_9;
#line 535
goto label_59;
#line 535
label_77:
#line 535
undef($memory_6);
#line 535
undef($memory_7);
#line 535
undef($memory_8);
#line 535
undef($memory_9);
#line 535
undef($memory_10);
#line 535
undef($memory_11);
#line 536
$memory_6 = $memory_5->{'else'};
#line 536
$memory_6 = $memory_6->{'cmd'};
#line 536
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 536
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 536
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 536
if (c_rt_lib::check_true($memory_6)) {goto label_97;}
#line 537
$memory_7 = " else";
#line 537
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 537
undef($memory_7);
#line 538
$memory_7 = $memory_5->{'else'};
#line 538
pretty_printer_priv::print_st($memory_0, $memory_7, $memory_2);
#line 538
undef($memory_7);
#line 539
goto label_97;
#line 539
label_97:
#line 539
undef($memory_6);
#line 539
undef($memory_5);
#line 540
goto label_426;
#line 540
label_101:
#line 540
$memory_5 = c_rt_lib::ov_as($memory_3, 'while');
#line 541
$memory_6 = $memory_5->{'short'};
#line 541
$memory_7 = "while";
#line 541
$memory_8 = $memory_5->{'cmd'};
#line 541
$memory_9 = [];
#line 541
$memory_10 = $memory_5->{'cond'};
#line 541
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 541
undef($memory_10);
#line 541
undef($memory_9);
#line 541
undef($memory_8);
#line 541
undef($memory_7);
#line 541
undef($memory_6);
#line 541
undef($memory_5);
#line 542
goto label_426;
#line 542
label_116:
#line 542
$memory_5 = c_rt_lib::ov_as($memory_3, 'for');
#line 544
$memory_7 = $memory_5->{'start'};
#line 544
$memory_8 = c_rt_lib::ov_is($memory_7, 'value');
#line 544
if (c_rt_lib::check_true($memory_8)) {goto label_126;}
#line 546
$memory_8 = c_rt_lib::ov_is($memory_7, 'var_decl');
#line 546
if (c_rt_lib::check_true($memory_8)) {goto label_133;}
#line 546
$memory_8 = "NOMATCHALERT";
#line 546
$memory_8 = [$memory_8,$memory_7];
#line 546
die(dfile::ssave($memory_8));
#line 544
label_126:
#line 544
$memory_9 = c_rt_lib::ov_as($memory_7, 'value');
#line 545
$memory_10 = pretty_printer_priv::print_val($memory_9);
#line 545
$memory_6 = $memory_10;
#line 545
undef($memory_10);
#line 545
undef($memory_9);
#line 546
goto label_140;
#line 546
label_133:
#line 546
$memory_9 = c_rt_lib::ov_as($memory_7, 'var_decl');
#line 547
$memory_10 = pretty_printer_priv::print_var_decl($memory_9);
#line 547
$memory_6 = $memory_10;
#line 547
undef($memory_10);
#line 547
undef($memory_9);
#line 548
goto label_140;
#line 548
label_140:
#line 548
undef($memory_7);
#line 548
undef($memory_8);
#line 550
$memory_10 = "for(";
#line 550
$memory_9 = wprinter::build_sim($memory_10);
#line 550
undef($memory_10);
#line 552
$memory_11 = ";";
#line 552
$memory_10 = wprinter::build_sim($memory_11);
#line 552
undef($memory_11);
#line 553
$memory_11 = wprinter::get_sep();
#line 554
$memory_13 = $memory_5->{'cond'};
#line 554
$memory_12 = pretty_printer_priv::print_val($memory_13);
#line 554
undef($memory_13);
#line 555
$memory_14 = ";";
#line 555
$memory_13 = wprinter::build_sim($memory_14);
#line 555
undef($memory_14);
#line 556
$memory_14 = wprinter::get_sep();
#line 557
$memory_16 = $memory_5->{'iter'};
#line 557
$memory_15 = pretty_printer_priv::print_val($memory_16);
#line 557
undef($memory_16);
#line 558
$memory_17 = ") ";
#line 558
$memory_16 = wprinter::build_sim($memory_17);
#line 558
undef($memory_17);
#line 558
$memory_8 = [$memory_9,$memory_6,$memory_10,$memory_11,$memory_12,$memory_13,$memory_14,$memory_15,$memory_16];
#line 558
undef($memory_9);
#line 558
undef($memory_10);
#line 558
undef($memory_11);
#line 558
undef($memory_12);
#line 558
undef($memory_13);
#line 558
undef($memory_14);
#line 558
undef($memory_15);
#line 558
undef($memory_16);
#line 558
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 558
undef($memory_8);
#line 558
wprinter::print_t($memory_0, $memory_7, $memory_2);
#line 558
undef($memory_7);
#line 560
$memory_7 = $memory_5->{'cmd'};
#line 560
pretty_printer_priv::print_cmd($memory_0, $memory_7, $memory_2);
#line 560
undef($memory_7);
#line 560
undef($memory_6);
#line 560
undef($memory_5);
#line 561
goto label_426;
#line 561
label_182:
#line 561
$memory_5 = c_rt_lib::ov_as($memory_3, 'block');
#line 562
$memory_6 = "{";
#line 562
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 562
undef($memory_6);
#line 563
$memory_7 = 0;
#line 563
$memory_8 = 1;
#line 563
$memory_9 = c_rt_lib::array_len($memory_5);
#line 563
label_190:
#line 563
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 563
if (c_rt_lib::check_true($memory_10)) {goto label_209;}
#line 563
$memory_6 = $memory_5->[$memory_7];
#line 564
$memory_11 = string::lf();
#line 564
$memory_13 = 1;
#line 564
$memory_13 = $memory_2 + $memory_13;
#line 564
$memory_12 = pretty_printer_priv::pind($memory_13);
#line 564
undef($memory_13);
#line 564
$memory_11 = $memory_11 . $memory_12;
#line 564
undef($memory_12);
#line 564
pretty_printer_priv::state_print($memory_0, $memory_11);
#line 564
undef($memory_11);
#line 565
$memory_11 = 1;
#line 565
$memory_11 = $memory_2 + $memory_11;
#line 565
pretty_printer_priv::print_cmd($memory_0, $memory_6, $memory_11);
#line 565
undef($memory_11);
#line 566
$memory_7 = $memory_7 + $memory_8;
#line 566
goto label_190;
#line 566
label_209:
#line 566
undef($memory_6);
#line 566
undef($memory_7);
#line 566
undef($memory_8);
#line 566
undef($memory_9);
#line 566
undef($memory_10);
#line 567
$memory_6 = string::lf();
#line 567
$memory_7 = pretty_printer_priv::pind($memory_2);
#line 567
$memory_6 = $memory_6 . $memory_7;
#line 567
undef($memory_7);
#line 567
$memory_7 = "}";
#line 567
$memory_6 = $memory_6 . $memory_7;
#line 567
undef($memory_7);
#line 567
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 567
undef($memory_6);
#line 567
undef($memory_5);
#line 568
goto label_426;
#line 568
label_226:
#line 569
$memory_5 = ";";
#line 569
pretty_printer_priv::state_print($memory_0, $memory_5);
#line 569
undef($memory_5);
#line 570
goto label_426;
#line 570
label_231:
#line 570
$memory_5 = c_rt_lib::ov_as($memory_3, 'match');
#line 572
$memory_9 = "match (";
#line 572
$memory_8 = wprinter::build_sim($memory_9);
#line 572
undef($memory_9);
#line 573
$memory_10 = $memory_5->{'val'};
#line 573
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 573
undef($memory_10);
#line 574
$memory_11 = ")";
#line 574
$memory_10 = wprinter::build_sim($memory_11);
#line 574
undef($memory_11);
#line 574
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 574
undef($memory_8);
#line 574
undef($memory_9);
#line 574
undef($memory_10);
#line 574
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 574
undef($memory_7);
#line 574
wprinter::print_t($memory_0, $memory_6, $memory_2);
#line 574
undef($memory_6);
#line 576
$memory_6 = $memory_5->{'branch_list'};
#line 576
$memory_8 = 0;
#line 576
$memory_9 = 1;
#line 576
$memory_10 = c_rt_lib::array_len($memory_6);
#line 576
label_254:
#line 576
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 576
if (c_rt_lib::check_true($memory_11)) {goto label_274;}
#line 576
$memory_7 = $memory_6->[$memory_8];
#line 577
$memory_12 = " case ";
#line 577
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 577
undef($memory_12);
#line 578
$memory_13 = $memory_7->{'variant'};
#line 578
$memory_12 = pretty_printer_priv::print_variant_case_decl($memory_13);
#line 578
undef($memory_13);
#line 578
$memory_13 = 1;
#line 578
$memory_13 = $memory_2 + $memory_13;
#line 578
wprinter::print_t($memory_0, $memory_12, $memory_13);
#line 578
undef($memory_13);
#line 578
undef($memory_12);
#line 579
$memory_12 = $memory_7->{'cmd'};
#line 579
pretty_printer_priv::print_st($memory_0, $memory_12, $memory_2);
#line 579
undef($memory_12);
#line 580
$memory_8 = $memory_8 + $memory_9;
#line 580
goto label_254;
#line 580
label_274:
#line 580
undef($memory_6);
#line 580
undef($memory_7);
#line 580
undef($memory_8);
#line 580
undef($memory_9);
#line 580
undef($memory_10);
#line 580
undef($memory_11);
#line 580
undef($memory_5);
#line 581
goto label_426;
#line 581
label_283:
#line 581
$memory_5 = c_rt_lib::ov_as($memory_3, 'fora');
#line 582
$memory_6 = $memory_5->{'short'};
#line 582
$memory_7 = "fora";
#line 582
$memory_8 = $memory_5->{'cmd'};
#line 582
$memory_10 = $memory_5->{'iter'};
#line 582
$memory_9 = [$memory_10];
#line 582
undef($memory_10);
#line 582
$memory_10 = $memory_5->{'array'};
#line 582
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 582
undef($memory_10);
#line 582
undef($memory_9);
#line 582
undef($memory_8);
#line 582
undef($memory_7);
#line 582
undef($memory_6);
#line 582
undef($memory_5);
#line 583
goto label_426;
#line 583
label_300:
#line 583
$memory_5 = c_rt_lib::ov_as($memory_3, 'forh');
#line 584
$memory_6 = $memory_5->{'short'};
#line 584
$memory_7 = "forh";
#line 584
$memory_8 = $memory_5->{'cmd'};
#line 584
$memory_10 = $memory_5->{'key'};
#line 584
$memory_11 = $memory_5->{'val'};
#line 584
$memory_9 = [$memory_10,$memory_11];
#line 584
undef($memory_10);
#line 584
undef($memory_11);
#line 584
$memory_10 = $memory_5->{'hash'};
#line 584
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 584
undef($memory_10);
#line 584
undef($memory_9);
#line 584
undef($memory_8);
#line 584
undef($memory_7);
#line 584
undef($memory_6);
#line 584
undef($memory_5);
#line 586
goto label_426;
#line 586
label_319:
#line 586
$memory_5 = c_rt_lib::ov_as($memory_3, 'rep');
#line 587
$memory_6 = $memory_5->{'short'};
#line 587
$memory_7 = "rep";
#line 587
$memory_8 = $memory_5->{'cmd'};
#line 587
$memory_10 = $memory_5->{'iter'};
#line 587
$memory_9 = [$memory_10];
#line 587
undef($memory_10);
#line 587
$memory_10 = $memory_5->{'count'};
#line 587
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 587
undef($memory_10);
#line 587
undef($memory_9);
#line 587
undef($memory_8);
#line 587
undef($memory_7);
#line 587
undef($memory_6);
#line 587
undef($memory_5);
#line 588
goto label_426;
#line 588
label_336:
#line 588
$memory_5 = c_rt_lib::ov_as($memory_3, 'loop');
#line 589
$memory_6 = "loop";
#line 589
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 589
undef($memory_6);
#line 590
pretty_printer_priv::print_st($memory_0, $memory_5, $memory_2);
#line 590
undef($memory_5);
#line 591
goto label_426;
#line 591
label_344:
#line 591
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_mod');
#line 592
$memory_6 = "if";
#line 592
$memory_7 = $memory_5->{'cmd'};
#line 592
$memory_8 = [];
#line 592
$memory_9 = $memory_5->{'cond'};
#line 592
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 592
undef($memory_9);
#line 592
undef($memory_8);
#line 592
undef($memory_7);
#line 592
undef($memory_6);
#line 592
undef($memory_5);
#line 593
goto label_426;
#line 593
label_357:
#line 593
$memory_5 = c_rt_lib::ov_as($memory_3, 'unless_mod');
#line 594
$memory_6 = "unless";
#line 594
$memory_7 = $memory_5->{'cmd'};
#line 594
$memory_8 = [];
#line 594
$memory_9 = $memory_5->{'cond'};
#line 594
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 594
undef($memory_9);
#line 594
undef($memory_8);
#line 594
undef($memory_7);
#line 594
undef($memory_6);
#line 594
undef($memory_5);
#line 595
goto label_426;
#line 595
label_370:
#line 595
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 596
$memory_6 = pretty_printer_priv::print_sim_value($memory_5);
#line 596
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 596
undef($memory_6);
#line 596
undef($memory_5);
#line 597
goto label_426;
#line 597
label_377:
#line 597
$memory_5 = c_rt_lib::ov_as($memory_3, 'try');
#line 598
$memory_7 = "try";
#line 598
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 598
undef($memory_7);
#line 598
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 598
undef($memory_6);
#line 598
undef($memory_5);
#line 599
goto label_426;
#line 599
label_386:
#line 599
$memory_5 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 600
$memory_7 = "ensure";
#line 600
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 600
undef($memory_7);
#line 600
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 600
undef($memory_6);
#line 600
undef($memory_5);
#line 601
goto label_426;
#line 601
label_395:
#line 601
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 602
$memory_6 = pretty_printer_priv::print_return($memory_5);
#line 602
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 602
undef($memory_6);
#line 602
undef($memory_5);
#line 603
goto label_426;
#line 603
label_402:
#line 604
$memory_5 = pretty_printer_priv::print_break();
#line 604
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 604
undef($memory_5);
#line 605
goto label_426;
#line 605
label_407:
#line 606
$memory_5 = pretty_printer_priv::print_continue();
#line 606
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 606
undef($memory_5);
#line 607
goto label_426;
#line 607
label_412:
#line 607
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 608
$memory_6 = pretty_printer_priv::print_die($memory_5);
#line 608
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 608
undef($memory_6);
#line 608
undef($memory_5);
#line 609
goto label_426;
#line 609
label_419:
#line 609
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_decl');
#line 610
$memory_6 = pretty_printer_priv::print_var_decl($memory_5);
#line 610
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 610
undef($memory_6);
#line 610
undef($memory_5);
#line 611
goto label_426;
#line 611
label_426:
#line 611
undef($memory_3);
#line 611
undef($memory_4);
#line 611
undef($memory_1);
#line 611
undef($memory_2);
#line 611
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
