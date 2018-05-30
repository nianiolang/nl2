use c_rt_lib;
use string;
use array;
use hash;
use boolean_t;
use ptd;
use nast;
use ntokenizer;
use singleton;
use compiler_lib;
sub nparser_priv::get_end_list;
sub nparser::parse_ret_t;
sub nparser::state_t;
sub nparser::try_value_t;
sub nparser::try_cmd_t;
sub nparser::sparse;
sub nparser_priv::add_error;
sub nparser_priv::eat;
sub nparser_priv::try_eat;
sub nparser_priv::parse_module;
sub nparser_priv::parse_fun_arg_list;
sub nparser_priv::parse_fun_def;
sub nparser_priv::parse_fun_val_arg_list;
sub nparser_priv::parse_expr_list;
sub nparser_priv::parse_fun_val_arg;
sub nparser_priv::parse_fun_label;
sub nparser_priv::parse_label;
sub nparser_priv::parse_hash_key;
sub nparser_priv::parse_hash;
sub nparser_priv::parse_arr;
sub nparser_priv::parse_expr;
sub nparser_priv::parse_type;
sub nparser_priv::parse_expr_rec_left;
sub nparser_priv::parse_expr_rec;
sub nparser_priv::get_value_nop;
sub nparser_priv::eat_text;
sub nparser_priv::parse_variant_label;
sub nparser_priv::parse_variant;
sub nparser_priv::check_lvalue;
sub nparser_priv::parse_variant_decl;
sub nparser_priv::parse_var_decl;
sub nparser_priv::parse_var_decl_sim;
sub nparser_priv::parse_cond;
sub nparser_priv::parse_block;
sub nparser_priv::parse_try_ensure;
sub nparser_priv::get_debug_from_begin;
sub nparser_priv::parse_cmd;

return 1;

sub nparser_priv::__get_end_list() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 17
$memory_2 = ";";
#line 17
$memory_3 = "if";
#line 17
$memory_4 = "unless";
#line 17
$memory_5 = "fora";
#line 17
$memory_6 = "forh";
#line 17
$memory_7 = "rep";
#line 17
$memory_8 = "while";
#line 17
$memory_1 = [$memory_2,$memory_3,$memory_4,$memory_5,$memory_6,$memory_7,$memory_8];
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_4);
#line 17
undef($memory_5);
#line 17
undef($memory_6);
#line 17
undef($memory_7);
#line 17
undef($memory_8);
#line 17
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_get_end_list;
sub nparser_priv::get_end_list() {
	$_get_end_list = nparser_priv::__get_end_list() unless defined $_get_end_list;
	return $_get_end_list;
}

sub nparser::__parse_ret_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 21
$memory_2 = {
	module => "nast",
	name => "module_t",
};
#line 21
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 21
$memory_3 = {
	module => "compiler_lib",
	name => "errors_t",
};
#line 21
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 21
$memory_1 = {ok => $memory_2,error => $memory_3,};
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
$memory_0 = ptd::var($memory_1);
#line 21
undef($memory_1);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_parse_ret_t;
sub nparser::parse_ret_t() {
	$_parse_ret_t = nparser::__parse_ret_t() unless defined $_parse_ret_t;
	return $_parse_ret_t;
}

sub nparser::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 25
$memory_2 = {
	module => "ntokenizer",
	name => "state_t",
};
#line 25
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 25
$memory_3 = {
	module => "compiler_lib",
	name => "errors_t",
};
#line 25
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 25
$memory_4 = ptd::sim();
#line 25
$memory_1 = {state => $memory_2,errors => $memory_3,module_name => $memory_4,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
undef($memory_4);
#line 25
$memory_0 = ptd::rec($memory_1);
#line 25
undef($memory_1);
#line 25
return $memory_0;
#line 25
undef($memory_0);
#line 25
return;
}

my $_state_t;
sub nparser::state_t() {
	$_state_t = nparser::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub nparser::__try_value_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 29
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 29
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 29
$memory_3 = ptd::sim();
#line 29
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 29
undef($memory_2);
#line 29
undef($memory_3);
#line 29
$memory_0 = ptd::var($memory_1);
#line 29
undef($memory_1);
#line 29
return $memory_0;
#line 29
undef($memory_0);
#line 29
return;
}

my $_try_value_t;
sub nparser::try_value_t() {
	$_try_value_t = nparser::__try_value_t() unless defined $_try_value_t;
	return $_try_value_t;
}

sub nparser::__try_cmd_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 33
$memory_2 = {
	module => "nast",
	name => "cmd_t",
};
#line 33
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 33
$memory_3 = ptd::sim();
#line 33
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 33
undef($memory_2);
#line 33
undef($memory_3);
#line 33
$memory_0 = ptd::var($memory_1);
#line 33
undef($memory_1);
#line 33
return $memory_0;
#line 33
undef($memory_0);
#line 33
return;
}

my $_try_cmd_t;
sub nparser::try_cmd_t() {
	$_try_cmd_t = nparser::__try_cmd_t() unless defined $_try_cmd_t;
	return $_try_cmd_t;
}

sub nparser::sparse($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 40
$memory_3 = [];
#line 40
$memory_4 = ntokenizer::init($memory_0);
#line 40
$memory_2 = {errors => $memory_3,state => $memory_4,module_name => $memory_1,};
#line 40
undef($memory_3);
#line 40
undef($memory_4);
#line 41
$memory_3 = nparser_priv::parse_module($memory_2, $memory_1);
#line 42
$memory_5 = $memory_2->{'errors'};
#line 42
$memory_4 = array::len($memory_5);
#line 42
undef($memory_5);
#line 42
$memory_5 = 0;
#line 42
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_5);
#line 42
undef($memory_5);
#line 42
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 42
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 42
$memory_5 = $memory_2->{'errors'};
#line 42
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 42
return $memory_5;
#line 42
undef($memory_5);
#line 42
goto label_24;
#line 42
label_24:
#line 42
undef($memory_4);
#line 43
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
return $memory_4;
#line 43
undef($memory_4);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
return;
}

sub nparser_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 47
$memory_3 = $memory_0->{'state'};
#line 47
$memory_2 = ntokenizer::get_line($memory_3);
#line 47
undef($memory_3);
#line 48
$memory_4 = $memory_0->{'state'};
#line 48
$memory_3 = ntokenizer::get_column($memory_4);
#line 48
undef($memory_4);
#line 49
$memory_4 = "errors";
#line 49
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 49
$memory_6 = $memory_0->{'module_name'};
#line 49
$memory_7 = c_rt_lib::ov_mk_none('error');
#line 49
$memory_5 = {line => $memory_2,module => $memory_6,column => $memory_3,message => $memory_1,type => $memory_7,};
#line 49
undef($memory_6);
#line 49
undef($memory_7);
#line 49
array::push($memory_4, $memory_5);
#line 49
undef($memory_5);
#line 49
$memory_5 = "errors";
#line 49
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 49
undef($memory_5);
#line 49
undef($memory_4);
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_1);
#line 49
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 53
$memory_3 = "state";
#line 53
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 53
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 53
$memory_4 = "state";
#line 53
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 53
undef($memory_4);
#line 53
undef($memory_3);
#line 53
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 53
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 53
$memory_3 = c_rt_lib::to_nl(1);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
$_[0] = $memory_0;return $memory_3;
#line 53
undef($memory_3);
#line 53
goto label_15;
#line 53
label_15:
#line 53
undef($memory_2);
#line 54
$memory_2 = "expected: ";
#line 54
$memory_2 = $memory_2 . $memory_1;
#line 54
$memory_3 = string::lf();
#line 54
$memory_2 = $memory_2 . $memory_3;
#line 54
undef($memory_3);
#line 54
$memory_4 = $memory_0->{'state'};
#line 54
$memory_3 = ntokenizer::info($memory_4);
#line 54
undef($memory_4);
#line 54
$memory_2 = $memory_2 . $memory_3;
#line 54
undef($memory_3);
#line 54
nparser_priv::add_error($memory_0, $memory_2);
#line 54
undef($memory_2);
#line 55
$memory_2 = c_rt_lib::to_nl(0);
#line 55
undef($memory_1);
#line 55
$_[0] = $memory_0;return $memory_2;
#line 55
undef($memory_2);
#line 55
undef($memory_1);
#line 55
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::try_eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 59
$memory_3 = "state";
#line 59
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 59
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 59
$memory_4 = "state";
#line 59
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 59
undef($memory_4);
#line 59
undef($memory_3);
#line 59
undef($memory_1);
#line 59
$_[0] = $memory_0;return $memory_2;
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 59
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_module($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 63
$memory_3 = [];
#line 63
$memory_4 = [];
#line 63
$memory_5 = "";
#line 63
$memory_2 = {name => $memory_1,import => $memory_3,fun_def => $memory_4,stamp => $memory_5,};
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 63
undef($memory_5);
#line 64
$memory_4 = $memory_0->{'state'};
#line 64
$memory_3 = ntokenizer::get_last_comment($memory_4);
#line 64
undef($memory_4);
#line 64
$memory_4 = $memory_3;
#line 64
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'stamp'} = $memory_4;
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 65
label_14:
#line 65
$memory_4 = "use";
#line 65
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 65
undef($memory_4);
#line 65
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 65
if (c_rt_lib::check_true($memory_3)) {goto label_66;}
#line 66
$memory_5 = $memory_0->{'state'};
#line 66
$memory_4 = ntokenizer::get_line($memory_5);
#line 66
undef($memory_5);
#line 67
$memory_6 = "state";
#line 67
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 67
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 67
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 67
undef($memory_7);
#line 67
$memory_7 = "state";
#line 67
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 67
undef($memory_7);
#line 67
undef($memory_6);
#line 67
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 67
if (c_rt_lib::check_true($memory_5)) {goto label_54;}
#line 68
$memory_6 = "import";
#line 68
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 68
$memory_9 = "state";
#line 68
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 68
$memory_10 = c_rt_lib::ov_mk_none('word');
#line 68
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 68
undef($memory_10);
#line 68
$memory_10 = "state";
#line 68
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 68
undef($memory_10);
#line 68
undef($memory_9);
#line 68
$memory_7 = {name => $memory_8,line => $memory_4,};
#line 68
undef($memory_8);
#line 68
array::push($memory_6, $memory_7);
#line 68
undef($memory_7);
#line 68
$memory_7 = "import";
#line 68
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 68
undef($memory_7);
#line 68
undef($memory_6);
#line 69
goto label_59;
#line 69
label_54:
#line 70
$memory_6 = "expected word as name of module";
#line 70
nparser_priv::add_error($memory_0, $memory_6);
#line 70
undef($memory_6);
#line 71
goto label_59;
#line 71
label_59:
#line 71
undef($memory_5);
#line 72
$memory_5 = ";";
#line 72
nparser_priv::eat($memory_0, $memory_5);
#line 72
undef($memory_5);
#line 72
undef($memory_4);
#line 73
goto label_14;
#line 73
label_66:
#line 73
undef($memory_3);
#line 74
label_68:
#line 74
$memory_4 = "state";
#line 74
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 74
$memory_5 = "def";
#line 74
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 74
undef($memory_5);
#line 74
$memory_5 = "state";
#line 74
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 74
undef($memory_5);
#line 74
undef($memory_4);
#line 74
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 74
if (c_rt_lib::check_true($memory_3)) {goto label_114;}
#line 75
$memory_4 = nparser_priv::parse_fun_def($memory_0, $memory_1);
#line 75
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 75
if (c_rt_lib::check_true($memory_5)) {goto label_88;}
#line 77
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 77
if (c_rt_lib::check_true($memory_5)) {goto label_99;}
#line 77
$memory_5 = "NOMATCHALERT";
#line 77
$memory_5 = [$memory_5,$memory_4];
#line 77
die(dfile::ssave($memory_5));
#line 75
label_88:
#line 75
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 76
$memory_7 = "fun_def";
#line 76
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 76
array::push($memory_7, $memory_6);
#line 76
$memory_8 = "fun_def";
#line 76
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 76
undef($memory_8);
#line 76
undef($memory_7);
#line 76
undef($memory_6);
#line 77
goto label_110;
#line 77
label_99:
#line 77
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 78
nparser_priv::add_error($memory_0, $memory_6);
#line 79
undef($memory_1);
#line 79
undef($memory_3);
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 79
undef($memory_6);
#line 79
$_[0] = $memory_0;return $memory_2;
#line 79
undef($memory_6);
#line 80
goto label_110;
#line 80
label_110:
#line 80
undef($memory_4);
#line 80
undef($memory_5);
#line 81
goto label_68;
#line 81
label_114:
#line 81
undef($memory_3);
#line 82
$memory_4 = "state";
#line 82
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 82
$memory_5 = c_rt_lib::ov_mk_none('end');
#line 82
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 82
undef($memory_5);
#line 82
$memory_5 = "state";
#line 82
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 82
undef($memory_5);
#line 82
undef($memory_4);
#line 82
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 82
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 82
if (c_rt_lib::check_true($memory_3)) {goto label_132;}
#line 82
$memory_4 = "expected function definition";
#line 82
nparser_priv::add_error($memory_0, $memory_4);
#line 82
undef($memory_4);
#line 82
goto label_132;
#line 82
label_132:
#line 82
undef($memory_3);
#line 83
undef($memory_1);
#line 83
$_[0] = $memory_0;return $memory_2;
#line 83
undef($memory_2);
#line 83
undef($memory_1);
#line 83
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_arg_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 90
$memory_1 = "(";
#line 90
nparser_priv::eat($memory_0, $memory_1);
#line 90
undef($memory_1);
#line 91
$memory_1 = [];
#line 92
label_4:
#line 92
$memory_3 = "state";
#line 92
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 92
$memory_4 = ")";
#line 92
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 92
undef($memory_4);
#line 92
$memory_4 = "state";
#line 92
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 92
undef($memory_4);
#line 92
undef($memory_3);
#line 92
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 92
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 92
if (c_rt_lib::check_true($memory_2)) {goto label_112;}
#line 93
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 93
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 93
$memory_6 = "";
#line 93
$memory_3 = {mod => $memory_4,type => $memory_5,name => $memory_6,};
#line 93
undef($memory_4);
#line 93
undef($memory_5);
#line 93
undef($memory_6);
#line 94
$memory_5 = "ref";
#line 94
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 94
undef($memory_5);
#line 94
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 94
if (c_rt_lib::check_true($memory_4)) {goto label_35;}
#line 94
$memory_5 = c_rt_lib::ov_mk_none('ref');
#line 94
$memory_6 = $memory_5;
#line 94
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'mod'} = $memory_6;
#line 94
undef($memory_5);
#line 94
undef($memory_6);
#line 94
goto label_35;
#line 94
label_35:
#line 94
undef($memory_4);
#line 95
$memory_5 = "state";
#line 95
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 95
$memory_6 = c_rt_lib::ov_mk_none('word');
#line 95
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 95
undef($memory_6);
#line 95
$memory_6 = "state";
#line 95
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 95
undef($memory_6);
#line 95
undef($memory_5);
#line 95
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 95
if (c_rt_lib::check_true($memory_4)) {goto label_62;}
#line 96
$memory_6 = "state";
#line 96
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 96
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 96
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 96
undef($memory_7);
#line 96
$memory_7 = "state";
#line 96
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 96
undef($memory_7);
#line 96
undef($memory_6);
#line 96
$memory_6 = $memory_5;
#line 96
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'name'} = $memory_6;
#line 96
undef($memory_5);
#line 96
undef($memory_6);
#line 97
goto label_67;
#line 97
label_62:
#line 98
$memory_5 = "word expected as fun arg name";
#line 98
nparser_priv::add_error($memory_0, $memory_5);
#line 98
undef($memory_5);
#line 99
goto label_67;
#line 99
label_67:
#line 99
undef($memory_4);
#line 100
$memory_5 = ":";
#line 100
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 100
undef($memory_5);
#line 100
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 100
if (c_rt_lib::check_true($memory_4)) {goto label_95;}
#line 101
$memory_7 = nparser_priv::parse_type($memory_0);
#line 101
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 101
if (c_rt_lib::check_true($memory_6)) {goto label_84;}
#line 101
undef($memory_1);
#line 101
undef($memory_2);
#line 101
undef($memory_3);
#line 101
undef($memory_4);
#line 101
undef($memory_5);
#line 101
undef($memory_6);
#line 101
$_[0] = $memory_0;return $memory_7;
#line 101
label_84:
#line 101
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 101
undef($memory_6);
#line 101
undef($memory_7);
#line 102
$memory_6 = c_rt_lib::ov_mk_arg('type', $memory_5);
#line 102
$memory_7 = $memory_6;
#line 102
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'type'} = $memory_7;
#line 102
undef($memory_6);
#line 102
undef($memory_7);
#line 102
undef($memory_5);
#line 103
goto label_95;
#line 103
label_95:
#line 103
undef($memory_4);
#line 104
array::push($memory_1, $memory_3);
#line 105
$memory_5 = ",";
#line 105
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 105
undef($memory_5);
#line 105
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 105
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 105
if (c_rt_lib::check_true($memory_4)) {goto label_108;}
#line 105
undef($memory_3);
#line 105
undef($memory_4);
#line 105
goto label_112;
#line 105
goto label_108;
#line 105
label_108:
#line 105
undef($memory_4);
#line 105
undef($memory_3);
#line 106
goto label_4;
#line 106
label_112:
#line 106
undef($memory_2);
#line 107
$memory_2 = ")";
#line 107
nparser_priv::eat($memory_0, $memory_2);
#line 107
undef($memory_2);
#line 108
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 108
undef($memory_1);
#line 108
$_[0] = $memory_0;return $memory_2;
#line 108
undef($memory_2);
#line 108
undef($memory_1);
#line 108
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 116
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 117
$memory_5 = $memory_0->{'state'};
#line 117
$memory_4 = ntokenizer::get_line($memory_5);
#line 117
undef($memory_5);
#line 118
$memory_5 = [];
#line 119
$memory_6 = "";
#line 120
$memory_8 = nparser_priv::get_debug_from_begin($memory_0);
#line 120
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 120
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 120
undef($memory_8);
#line 120
undef($memory_9);
#line 121
$memory_8 = c_rt_lib::ov_mk_none('priv');
#line 121
$memory_2 = {ret_type => $memory_3,line => $memory_4,args => $memory_5,name => $memory_6,cmd => $memory_7,access => $memory_8,};
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 121
undef($memory_5);
#line 121
undef($memory_6);
#line 121
undef($memory_7);
#line 121
undef($memory_8);
#line 123
$memory_3 = "def";
#line 123
nparser_priv::eat($memory_0, $memory_3);
#line 123
undef($memory_3);
#line 124
$memory_4 = nparser_priv::eat_text($memory_0);
#line 124
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 124
if (c_rt_lib::check_true($memory_3)) {goto label_29;}
#line 124
undef($memory_1);
#line 124
undef($memory_2);
#line 124
undef($memory_3);
#line 124
$_[0] = $memory_0;return $memory_4;
#line 124
label_29:
#line 124
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 124
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_5;
#line 124
undef($memory_3);
#line 124
undef($memory_4);
#line 124
undef($memory_5);
#line 125
$memory_4 = "::";
#line 125
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 125
undef($memory_4);
#line 125
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 125
if (c_rt_lib::check_true($memory_3)) {goto label_77;}
#line 126
$memory_4 = $memory_2->{'name'};
#line 126
$memory_4 = c_rt_lib::to_nl($memory_4 ne $memory_1);
#line 126
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 126
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 127
$memory_5 = "incorrect module name: ";
#line 127
$memory_6 = $memory_2->{'name'};
#line 127
$memory_5 = $memory_5 . $memory_6;
#line 127
undef($memory_6);
#line 127
$memory_6 = " of function, expected: ";
#line 127
$memory_5 = $memory_5 . $memory_6;
#line 127
undef($memory_6);
#line 127
$memory_5 = $memory_5 . $memory_1;
#line 127
nparser_priv::add_error($memory_0, $memory_5);
#line 127
undef($memory_5);
#line 128
goto label_55;
#line 128
label_55:
#line 128
undef($memory_4);
#line 129
$memory_5 = nparser_priv::eat_text($memory_0);
#line 129
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 129
if (c_rt_lib::check_true($memory_4)) {goto label_65;}
#line 129
undef($memory_1);
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 129
$_[0] = $memory_0;return $memory_5;
#line 129
label_65:
#line 129
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 129
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 129
undef($memory_4);
#line 129
undef($memory_5);
#line 129
undef($memory_6);
#line 130
$memory_4 = c_rt_lib::ov_mk_none('pub');
#line 130
$memory_5 = $memory_4;
#line 130
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'access'} = $memory_5;
#line 130
undef($memory_4);
#line 130
undef($memory_5);
#line 131
goto label_77;
#line 131
label_77:
#line 131
undef($memory_3);
#line 132
$memory_4 = nparser_priv::parse_fun_arg_list($memory_0);
#line 132
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 132
if (c_rt_lib::check_true($memory_3)) {goto label_86;}
#line 132
undef($memory_1);
#line 132
undef($memory_2);
#line 132
undef($memory_3);
#line 132
$_[0] = $memory_0;return $memory_4;
#line 132
label_86:
#line 132
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 132
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 132
undef($memory_3);
#line 132
undef($memory_4);
#line 132
undef($memory_5);
#line 133
$memory_4 = "state";
#line 133
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 133
$memory_5 = ":";
#line 133
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 133
undef($memory_5);
#line 133
$memory_5 = "state";
#line 133
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 133
undef($memory_5);
#line 133
undef($memory_4);
#line 133
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 133
if (c_rt_lib::check_true($memory_3)) {goto label_126;}
#line 134
$memory_4 = ":";
#line 134
nparser_priv::eat($memory_0, $memory_4);
#line 134
undef($memory_4);
#line 135
$memory_6 = nparser_priv::parse_type($memory_0);
#line 135
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 135
if (c_rt_lib::check_true($memory_5)) {goto label_115;}
#line 135
undef($memory_1);
#line 135
undef($memory_2);
#line 135
undef($memory_3);
#line 135
undef($memory_4);
#line 135
undef($memory_5);
#line 135
$_[0] = $memory_0;return $memory_6;
#line 135
label_115:
#line 135
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 135
undef($memory_5);
#line 135
undef($memory_6);
#line 136
$memory_5 = c_rt_lib::ov_mk_arg('type', $memory_4);
#line 136
$memory_6 = $memory_5;
#line 136
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'ret_type'} = $memory_6;
#line 136
undef($memory_5);
#line 136
undef($memory_6);
#line 136
undef($memory_4);
#line 137
goto label_126;
#line 137
label_126:
#line 137
undef($memory_3);
#line 138
$memory_4 = nparser_priv::parse_block($memory_0);
#line 138
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 138
if (c_rt_lib::check_true($memory_3)) {goto label_135;}
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 138
$_[0] = $memory_0;return $memory_4;
#line 138
label_135:
#line 138
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 138
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'cmd'} = $memory_5;
#line 138
undef($memory_3);
#line 138
undef($memory_4);
#line 138
undef($memory_5);
#line 139
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 139
undef($memory_1);
#line 139
undef($memory_2);
#line 139
$_[0] = $memory_0;return $memory_3;
#line 139
undef($memory_3);
#line 139
undef($memory_2);
#line 139
undef($memory_1);
#line 139
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 146
$memory_1 = [];
#line 147
label_1:
#line 147
$memory_3 = "state";
#line 147
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 147
$memory_4 = ")";
#line 147
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 147
undef($memory_4);
#line 147
$memory_4 = "state";
#line 147
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 147
undef($memory_4);
#line 147
undef($memory_3);
#line 147
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 147
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 147
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
#line 148
$memory_5 = nparser_priv::parse_fun_val_arg($memory_0);
#line 148
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 148
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
undef($memory_4);
#line 148
$_[0] = $memory_0;return $memory_5;
#line 148
label_22:
#line 148
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 148
undef($memory_4);
#line 148
undef($memory_5);
#line 149
array::push($memory_1, $memory_3);
#line 150
$memory_5 = ",";
#line 150
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 150
undef($memory_5);
#line 150
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 150
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 150
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 150
undef($memory_3);
#line 150
undef($memory_4);
#line 150
goto label_41;
#line 150
goto label_37;
#line 150
label_37:
#line 150
undef($memory_4);
#line 150
undef($memory_3);
#line 151
goto label_1;
#line 151
label_41:
#line 151
undef($memory_2);
#line 152
$memory_2 = ")";
#line 152
nparser_priv::eat($memory_0, $memory_2);
#line 152
undef($memory_2);
#line 153
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 153
undef($memory_1);
#line 153
$_[0] = $memory_0;return $memory_2;
#line 153
undef($memory_2);
#line 153
undef($memory_1);
#line 153
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 157
$memory_1 = [];
#line 158
label_1:
#line 158
$memory_3 = "state";
#line 158
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 158
$memory_4 = ")";
#line 158
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 158
undef($memory_4);
#line 158
$memory_4 = "state";
#line 158
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 158
undef($memory_4);
#line 158
undef($memory_3);
#line 158
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 158
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 158
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
#line 159
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 159
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 159
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 159
undef($memory_1);
#line 159
undef($memory_2);
#line 159
undef($memory_3);
#line 159
undef($memory_4);
#line 159
$_[0] = $memory_0;return $memory_5;
#line 159
label_22:
#line 159
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 159
undef($memory_4);
#line 159
undef($memory_5);
#line 160
array::push($memory_1, $memory_3);
#line 161
$memory_5 = ",";
#line 161
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 161
undef($memory_5);
#line 161
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 161
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 161
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 161
undef($memory_3);
#line 161
undef($memory_4);
#line 161
goto label_41;
#line 161
goto label_37;
#line 161
label_37:
#line 161
undef($memory_4);
#line 161
undef($memory_3);
#line 162
goto label_1;
#line 162
label_41:
#line 162
undef($memory_2);
#line 163
$memory_2 = ")";
#line 163
nparser_priv::eat($memory_0, $memory_2);
#line 163
undef($memory_2);
#line 164
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 164
undef($memory_1);
#line 164
$_[0] = $memory_0;return $memory_2;
#line 164
undef($memory_2);
#line 164
undef($memory_1);
#line 164
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 168
$memory_1 = {};
#line 169
$memory_3 = "ref";
#line 169
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 169
undef($memory_3);
#line 169
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 169
$memory_2 = c_rt_lib::ov_mk_none('none');
#line 169
goto label_9;
#line 169
label_7:
#line 169
$memory_2 = c_rt_lib::ov_mk_none('ref');
#line 169
label_9:
#line 169
$memory_3 = $memory_2;
#line 169
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod'} = $memory_3;
#line 169
undef($memory_2);
#line 169
undef($memory_3);
#line 170
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 170
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 170
if (c_rt_lib::check_true($memory_2)) {goto label_20;}
#line 170
undef($memory_1);
#line 170
undef($memory_2);
#line 170
$_[0] = $memory_0;return $memory_3;
#line 170
label_20:
#line 170
$memory_4 = c_rt_lib::ov_as($memory_3, 'ok');
#line 170
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'val'} = $memory_4;
#line 170
undef($memory_2);
#line 170
undef($memory_3);
#line 170
undef($memory_4);
#line 171
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 171
undef($memory_1);
#line 171
$_[0] = $memory_0;return $memory_2;
#line 171
undef($memory_2);
#line 171
undef($memory_1);
#line 171
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 175
$memory_2 = "";
#line 175
$memory_3 = "";
#line 175
$memory_1 = {name => $memory_2,module => $memory_3,};
#line 175
undef($memory_2);
#line 175
undef($memory_3);
#line 176
$memory_3 = "state";
#line 176
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 176
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 176
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 176
undef($memory_4);
#line 176
$memory_4 = "state";
#line 176
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 176
undef($memory_4);
#line 176
undef($memory_3);
#line 176
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 176
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 176
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 177
$memory_3 = "after '\@' module name of function expacted";
#line 177
nparser_priv::add_error($memory_0, $memory_3);
#line 177
undef($memory_3);
#line 178
undef($memory_2);
#line 178
$_[0] = $memory_0;return $memory_1;
#line 179
goto label_23;
#line 179
label_23:
#line 179
undef($memory_2);
#line 180
$memory_3 = "state";
#line 180
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 180
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 180
$memory_2 = ntokenizer::eat_type($memory_3, $memory_4);
#line 180
undef($memory_4);
#line 180
$memory_4 = "state";
#line 180
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 180
undef($memory_4);
#line 180
undef($memory_3);
#line 180
$memory_3 = $memory_2;
#line 180
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'module'} = $memory_3;
#line 180
undef($memory_2);
#line 180
undef($memory_3);
#line 181
$memory_4 = "::";
#line 181
$memory_2 = nparser_priv::try_eat($memory_0, $memory_4);
#line 181
undef($memory_4);
#line 181
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 181
if (c_rt_lib::check_true($memory_3)) {goto label_50;}
#line 181
$memory_4 = "state";
#line 181
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 181
$memory_2 = ntokenizer::is_text($memory_4);
#line 181
$memory_5 = "state";
#line 181
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_4);
#line 181
label_50:
#line 181
undef($memory_3);
#line 181
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 181
if (c_rt_lib::check_true($memory_2)) {goto label_66;}
#line 182
$memory_4 = "state";
#line 182
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 182
$memory_3 = ntokenizer::eat_text($memory_4);
#line 182
$memory_5 = "state";
#line 182
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 182
undef($memory_5);
#line 182
undef($memory_4);
#line 182
$memory_4 = $memory_3;
#line 182
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 182
undef($memory_3);
#line 182
undef($memory_4);
#line 183
goto label_71;
#line 183
label_66:
#line 184
$memory_3 = "reference of function can be taken only to public function";
#line 184
nparser_priv::add_error($memory_0, $memory_3);
#line 184
undef($memory_3);
#line 185
goto label_71;
#line 185
label_71:
#line 185
undef($memory_2);
#line 186
$_[0] = $memory_0;return $memory_1;
#line 186
undef($memory_1);
#line 186
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 193
$memory_2 = "state";
#line 193
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 193
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 193
$memory_1 = ntokenizer::eat_type($memory_2, $memory_3);
#line 193
undef($memory_3);
#line 193
$memory_3 = "state";
#line 193
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 193
undef($memory_3);
#line 193
undef($memory_2);
#line 195
$memory_4 = "state";
#line 195
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 195
$memory_5 = "(";
#line 195
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 195
undef($memory_5);
#line 195
$memory_5 = "state";
#line 195
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 195
undef($memory_5);
#line 195
undef($memory_4);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_3)) {goto label_31;}
#line 195
$memory_4 = "state";
#line 195
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 195
$memory_5 = "::";
#line 195
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 195
undef($memory_5);
#line 195
$memory_5 = "state";
#line 195
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 195
undef($memory_5);
#line 195
undef($memory_4);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
label_31:
#line 195
undef($memory_3);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_2)) {goto label_42;}
#line 194
$memory_3 = c_rt_lib::ov_mk_arg('var', $memory_1);
#line 194
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 194
undef($memory_1);
#line 194
undef($memory_2);
#line 194
$_[0] = $memory_0;return $memory_3;
#line 194
undef($memory_3);
#line 194
goto label_42;
#line 194
label_42:
#line 194
undef($memory_2);
#line 196
$memory_3 = "";
#line 196
$memory_4 = "";
#line 196
$memory_5 = [];
#line 196
$memory_2 = {module => $memory_3,name => $memory_4,args => $memory_5,};
#line 196
undef($memory_3);
#line 196
undef($memory_4);
#line 196
undef($memory_5);
#line 197
$memory_4 = "::";
#line 197
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 197
undef($memory_4);
#line 197
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 197
if (c_rt_lib::check_true($memory_3)) {goto label_74;}
#line 198
$memory_4 = $memory_1;
#line 198
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'module'} = $memory_4;
#line 198
undef($memory_4);
#line 199
$memory_5 = nparser_priv::eat_text($memory_0);
#line 199
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 199
if (c_rt_lib::check_true($memory_4)) {goto label_67;}
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
undef($memory_3);
#line 199
undef($memory_4);
#line 199
$_[0] = $memory_0;return $memory_5;
#line 199
label_67:
#line 199
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 199
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 199
undef($memory_4);
#line 199
undef($memory_5);
#line 199
undef($memory_6);
#line 200
goto label_79;
#line 200
label_74:
#line 201
$memory_4 = $memory_1;
#line 201
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_4;
#line 201
undef($memory_4);
#line 202
goto label_79;
#line 202
label_79:
#line 202
undef($memory_3);
#line 203
$memory_3 = "(";
#line 203
nparser_priv::eat($memory_0, $memory_3);
#line 203
undef($memory_3);
#line 204
$memory_4 = nparser_priv::parse_fun_val_arg_list($memory_0);
#line 204
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 204
if (c_rt_lib::check_true($memory_3)) {goto label_91;}
#line 204
undef($memory_1);
#line 204
undef($memory_2);
#line 204
undef($memory_3);
#line 204
$_[0] = $memory_0;return $memory_4;
#line 204
label_91:
#line 204
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 204
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 204
undef($memory_3);
#line 204
undef($memory_4);
#line 204
undef($memory_5);
#line 205
$memory_3 = c_rt_lib::ov_mk_arg('fun_val', $memory_2);
#line 205
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
$_[0] = $memory_0;return $memory_3;
#line 205
undef($memory_3);
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash_key($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 209
$memory_2 = "state";
#line 209
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 209
$memory_1 = ntokenizer::get_place($memory_2);
#line 209
$memory_3 = "state";
#line 209
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 209
undef($memory_3);
#line 209
undef($memory_2);
#line 210
$memory_3 = "state";
#line 210
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 210
$memory_2 = ntokenizer::is_text($memory_3);
#line 210
$memory_4 = "state";
#line 210
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 210
undef($memory_4);
#line 210
undef($memory_3);
#line 210
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 211
$memory_2 = "";
#line 211
goto label_25;
#line 211
label_17:
#line 211
$memory_3 = "state";
#line 211
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 211
$memory_2 = ntokenizer::eat_text($memory_3);
#line 211
$memory_4 = "state";
#line 211
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 211
undef($memory_4);
#line 211
undef($memory_3);
#line 211
label_25:
#line 211
$memory_2 = c_rt_lib::ov_mk_arg('hash_key', $memory_2);
#line 213
$memory_6 = "state";
#line 213
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 213
$memory_5 = ntokenizer::get_place($memory_6);
#line 213
$memory_7 = "state";
#line 213
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 213
undef($memory_7);
#line 213
undef($memory_6);
#line 213
$memory_4 = {begin => $memory_1,end => $memory_5,};
#line 213
undef($memory_5);
#line 213
$memory_3 = {debug => $memory_4,value => $memory_2,};
#line 213
undef($memory_4);
#line 213
undef($memory_1);
#line 213
undef($memory_2);
#line 213
$_[0] = $memory_0;return $memory_3;
#line 213
undef($memory_3);
#line 213
undef($memory_1);
#line 213
undef($memory_2);
#line 213
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 219
$memory_1 = [];
#line 220
$memory_2 = "{";
#line 220
nparser_priv::eat($memory_0, $memory_2);
#line 220
undef($memory_2);
#line 221
label_4:
#line 221
$memory_3 = "state";
#line 221
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 221
$memory_4 = "}";
#line 221
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 221
undef($memory_4);
#line 221
$memory_4 = "state";
#line 221
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 221
undef($memory_4);
#line 221
undef($memory_3);
#line 221
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 221
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 221
if (c_rt_lib::check_true($memory_2)) {goto label_53;}
#line 222
$memory_3 = nparser_priv::parse_hash_key($memory_0);
#line 223
$memory_4 = "=>";
#line 223
nparser_priv::eat($memory_0, $memory_4);
#line 223
undef($memory_4);
#line 224
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 224
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 224
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 224
undef($memory_1);
#line 224
undef($memory_2);
#line 224
undef($memory_3);
#line 224
undef($memory_4);
#line 224
undef($memory_5);
#line 224
$_[0] = $memory_0;return $memory_6;
#line 224
label_30:
#line 224
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 224
undef($memory_5);
#line 224
undef($memory_6);
#line 225
$memory_5 = {key => $memory_3,val => $memory_4,};
#line 225
array::push($memory_1, $memory_5);
#line 225
undef($memory_5);
#line 226
$memory_6 = ",";
#line 226
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 226
undef($memory_6);
#line 226
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 226
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 226
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 226
undef($memory_3);
#line 226
undef($memory_4);
#line 226
undef($memory_5);
#line 226
goto label_53;
#line 226
goto label_48;
#line 226
label_48:
#line 226
undef($memory_5);
#line 226
undef($memory_3);
#line 226
undef($memory_4);
#line 227
goto label_4;
#line 227
label_53:
#line 227
undef($memory_2);
#line 228
$memory_2 = "}";
#line 228
nparser_priv::eat($memory_0, $memory_2);
#line 228
undef($memory_2);
#line 229
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 229
undef($memory_1);
#line 229
$_[0] = $memory_0;return $memory_2;
#line 229
undef($memory_2);
#line 229
undef($memory_1);
#line 229
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 233
$memory_1 = [];
#line 234
$memory_2 = "[";
#line 234
nparser_priv::eat($memory_0, $memory_2);
#line 234
undef($memory_2);
#line 235
label_4:
#line 235
$memory_3 = "state";
#line 235
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 235
$memory_4 = "]";
#line 235
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 235
undef($memory_4);
#line 235
$memory_4 = "state";
#line 235
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 235
undef($memory_4);
#line 235
undef($memory_3);
#line 235
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 235
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 235
if (c_rt_lib::check_true($memory_2)) {goto label_44;}
#line 236
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 236
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 236
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 236
undef($memory_1);
#line 236
undef($memory_2);
#line 236
undef($memory_3);
#line 236
undef($memory_4);
#line 236
$_[0] = $memory_0;return $memory_5;
#line 236
label_25:
#line 236
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 236
undef($memory_4);
#line 236
undef($memory_5);
#line 237
array::push($memory_1, $memory_3);
#line 238
$memory_5 = ",";
#line 238
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 238
undef($memory_5);
#line 238
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 238
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 238
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 238
undef($memory_3);
#line 238
undef($memory_4);
#line 238
goto label_44;
#line 238
goto label_40;
#line 238
label_40:
#line 238
undef($memory_4);
#line 238
undef($memory_3);
#line 239
goto label_4;
#line 239
label_44:
#line 239
undef($memory_2);
#line 240
$memory_2 = "]";
#line 240
nparser_priv::eat($memory_0, $memory_2);
#line 240
undef($memory_2);
#line 241
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 241
undef($memory_1);
#line 241
$_[0] = $memory_0;return $memory_2;
#line 241
undef($memory_2);
#line 241
undef($memory_1);
#line 241
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 245
$memory_4 = 0;
#line 245
$memory_3 = nparser_priv::parse_expr_rec($memory_0, $memory_4);
#line 245
undef($memory_4);
#line 245
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 245
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 245
undef($memory_1);
#line 245
undef($memory_2);
#line 245
$_[0] = $memory_0;return $memory_3;
#line 245
label_8:
#line 245
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 245
undef($memory_2);
#line 245
undef($memory_3);
#line 246
$memory_3 = 0;
#line 246
$memory_2 = nparser_priv::parse_expr_rec_left($memory_0, $memory_1, $memory_3);
#line 246
undef($memory_3);
#line 246
undef($memory_1);
#line 246
$_[0] = $memory_0;return $memory_2;
#line 246
undef($memory_2);
#line 246
undef($memory_1);
#line 246
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_type($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 250
$memory_2 = "state";
#line 250
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 250
$memory_1 = ntokenizer::get_place($memory_2);
#line 250
$memory_3 = "state";
#line 250
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 250
undef($memory_3);
#line 250
undef($memory_2);
#line 251
$memory_3 = "\@";
#line 251
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 251
undef($memory_3);
#line 251
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 251
if (c_rt_lib::check_true($memory_2)) {goto label_60;}
#line 252
$memory_4 = "state";
#line 252
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 252
$memory_3 = ntokenizer::get_place($memory_4);
#line 252
$memory_5 = "state";
#line 252
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 252
undef($memory_5);
#line 252
undef($memory_4);
#line 253
$memory_4 = nparser_priv::parse_fun_label($memory_0);
#line 253
$memory_4 = c_rt_lib::ov_mk_arg('fun_label', $memory_4);
#line 254
$memory_6 = "state";
#line 254
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 254
$memory_5 = ntokenizer::get_place($memory_6);
#line 254
$memory_7 = "state";
#line 254
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 254
undef($memory_7);
#line 254
undef($memory_6);
#line 258
$memory_9 = "state";
#line 258
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 258
$memory_8 = ntokenizer::get_place($memory_9);
#line 258
$memory_10 = "state";
#line 258
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 258
undef($memory_10);
#line 258
undef($memory_9);
#line 258
$memory_7 = {begin => $memory_1,end => $memory_8,};
#line 258
undef($memory_8);
#line 260
$memory_9 = "\@";
#line 260
$memory_11 = {begin => $memory_3,end => $memory_5,};
#line 260
$memory_10 = {debug => $memory_11,value => $memory_4,};
#line 260
undef($memory_11);
#line 260
$memory_8 = {op => $memory_9,val => $memory_10,};
#line 260
undef($memory_9);
#line 260
undef($memory_10);
#line 260
$memory_8 = c_rt_lib::ov_mk_arg('unary_op', $memory_8);
#line 260
$memory_6 = {debug => $memory_7,value => $memory_8,};
#line 260
undef($memory_7);
#line 260
undef($memory_8);
#line 260
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_6);
#line 260
undef($memory_1);
#line 260
undef($memory_2);
#line 260
undef($memory_3);
#line 260
undef($memory_4);
#line 260
undef($memory_5);
#line 260
$_[0] = $memory_0;return $memory_6;
#line 260
undef($memory_6);
#line 260
undef($memory_3);
#line 260
undef($memory_4);
#line 260
undef($memory_5);
#line 262
goto label_60;
#line 262
label_60:
#line 262
undef($memory_2);
#line 263
$memory_3 = "state";
#line 263
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 263
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 263
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 263
undef($memory_4);
#line 263
$memory_4 = "state";
#line 263
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 263
undef($memory_4);
#line 263
undef($memory_3);
#line 263
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 263
if (c_rt_lib::check_true($memory_2)) {goto label_112;}
#line 264
$memory_5 = nparser_priv::parse_label($memory_0);
#line 264
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 264
if (c_rt_lib::check_true($memory_4)) {goto label_81;}
#line 264
undef($memory_1);
#line 264
undef($memory_2);
#line 264
undef($memory_3);
#line 264
undef($memory_4);
#line 264
$_[0] = $memory_0;return $memory_5;
#line 264
label_81:
#line 264
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 264
undef($memory_4);
#line 264
undef($memory_5);
#line 265
$memory_4 = $memory_3;
#line 265
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 265
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 265
if (c_rt_lib::check_true($memory_4)) {goto label_108;}
#line 265
$memory_8 = "state";
#line 265
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 265
$memory_7 = ntokenizer::get_place($memory_8);
#line 265
$memory_9 = "state";
#line 265
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 265
undef($memory_9);
#line 265
undef($memory_8);
#line 265
$memory_6 = {begin => $memory_1,end => $memory_7,};
#line 265
undef($memory_7);
#line 265
$memory_5 = {debug => $memory_6,value => $memory_3,};
#line 265
undef($memory_6);
#line 265
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 265
undef($memory_1);
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 265
undef($memory_4);
#line 265
$_[0] = $memory_0;return $memory_5;
#line 265
undef($memory_5);
#line 265
goto label_108;
#line 265
label_108:
#line 265
undef($memory_4);
#line 265
undef($memory_3);
#line 266
goto label_112;
#line 266
label_112:
#line 266
undef($memory_2);
#line 267
$memory_2 = "wrong format of type, expected '\@' or function call";
#line 267
nparser_priv::add_error($memory_0, $memory_2);
#line 267
undef($memory_2);
#line 268
$memory_5 = "state";
#line 268
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 268
$memory_4 = ntokenizer::get_place($memory_5);
#line 268
$memory_6 = "state";
#line 268
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 268
undef($memory_6);
#line 268
undef($memory_5);
#line 268
$memory_3 = {begin => $memory_1,end => $memory_4,};
#line 268
undef($memory_4);
#line 268
$memory_4 = c_rt_lib::ov_mk_none('nop');
#line 268
$memory_2 = {debug => $memory_3,value => $memory_4,};
#line 268
undef($memory_3);
#line 268
undef($memory_4);
#line 268
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 268
undef($memory_1);
#line 268
$_[0] = $memory_0;return $memory_2;
#line 268
undef($memory_2);
#line 268
undef($memory_1);
#line 268
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec_left($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 272
label_0:
#line 274
$memory_5 = "state";
#line 274
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 274
$memory_4 = ntokenizer::get_place($memory_5);
#line 274
$memory_6 = "state";
#line 274
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 274
undef($memory_6);
#line 274
undef($memory_5);
#line 275
$memory_6 = "state";
#line 275
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 275
$memory_5 = ntokenizer::get_token($memory_6);
#line 275
$memory_7 = "state";
#line 275
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 275
undef($memory_7);
#line 275
undef($memory_6);
#line 277
$memory_8 = nast::get_ternary_ops();
#line 277
$memory_7 = hash::has_key($memory_8, $memory_5);
#line 277
undef($memory_8);
#line 277
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 277
if (c_rt_lib::check_true($memory_7)) {goto label_133;}
#line 278
$memory_6 = $memory_5;
#line 279
$memory_8 = "?";
#line 279
$memory_8 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 279
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 279
if (c_rt_lib::check_true($memory_8)) {goto label_115;}
#line 280
$memory_10 = nast::get_ternary_ops();
#line 280
$memory_11 = "?";
#line 280
$memory_9 = hash::get_value($memory_10, $memory_11);
#line 280
undef($memory_11);
#line 280
undef($memory_10);
#line 281
$memory_10 = $memory_9->{'prec'};
#line 281
$memory_10 = c_rt_lib::to_nl($memory_10 < $memory_2);
#line 281
if (c_rt_lib::check_true($memory_10)) {goto label_41;}
#line 281
$memory_10 = $memory_9->{'prec'};
#line 281
$memory_10 = c_rt_lib::to_nl($memory_10 == $memory_2);
#line 281
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 281
if (c_rt_lib::check_true($memory_11)) {goto label_39;}
#line 281
$memory_10 = $memory_9->{'assoc'};
#line 281
$memory_10 = c_rt_lib::ov_is($memory_10, 'left');
#line 281
label_39:
#line 281
undef($memory_11);
#line 281
label_41:
#line 281
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 281
if (c_rt_lib::check_true($memory_10)) {goto label_58;}
#line 281
$memory_11 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 281
undef($memory_1);
#line 281
undef($memory_2);
#line 281
undef($memory_3);
#line 281
undef($memory_4);
#line 281
undef($memory_5);
#line 281
undef($memory_6);
#line 281
undef($memory_7);
#line 281
undef($memory_8);
#line 281
undef($memory_9);
#line 281
undef($memory_10);
#line 281
$_[0] = $memory_0;return $memory_11;
#line 281
undef($memory_11);
#line 281
goto label_58;
#line 281
label_58:
#line 281
undef($memory_10);
#line 282
nparser_priv::eat($memory_0, $memory_6);
#line 283
$memory_12 = nparser_priv::parse_expr($memory_0);
#line 283
$memory_11 = c_rt_lib::ov_is($memory_12, 'ok');
#line 283
if (c_rt_lib::check_true($memory_11)) {goto label_76;}
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
undef($memory_3);
#line 283
undef($memory_4);
#line 283
undef($memory_5);
#line 283
undef($memory_6);
#line 283
undef($memory_7);
#line 283
undef($memory_8);
#line 283
undef($memory_9);
#line 283
undef($memory_10);
#line 283
undef($memory_11);
#line 283
$_[0] = $memory_0;return $memory_12;
#line 283
label_76:
#line 283
$memory_10 = c_rt_lib::ov_as($memory_12, 'ok');
#line 283
undef($memory_11);
#line 283
undef($memory_12);
#line 284
$memory_11 = ":";
#line 284
nparser_priv::eat($memory_0, $memory_11);
#line 284
undef($memory_11);
#line 285
$memory_14 = $memory_9->{'prec'};
#line 285
$memory_13 = nparser_priv::parse_expr_rec($memory_0, $memory_14);
#line 285
undef($memory_14);
#line 285
$memory_12 = c_rt_lib::ov_is($memory_13, 'ok');
#line 285
if (c_rt_lib::check_true($memory_12)) {goto label_101;}
#line 285
undef($memory_1);
#line 285
undef($memory_2);
#line 285
undef($memory_3);
#line 285
undef($memory_4);
#line 285
undef($memory_5);
#line 285
undef($memory_6);
#line 285
undef($memory_7);
#line 285
undef($memory_8);
#line 285
undef($memory_9);
#line 285
undef($memory_10);
#line 285
undef($memory_11);
#line 285
undef($memory_12);
#line 285
$_[0] = $memory_0;return $memory_13;
#line 285
label_101:
#line 285
$memory_11 = c_rt_lib::ov_as($memory_13, 'ok');
#line 285
undef($memory_12);
#line 285
undef($memory_13);
#line 286
$memory_13 = "?";
#line 286
$memory_12 = {fst => $memory_1,snd => $memory_10,thrd => $memory_11,op => $memory_13,};
#line 286
undef($memory_13);
#line 286
$memory_12 = c_rt_lib::ov_mk_arg('ternary_op', $memory_12);
#line 286
$memory_3 = $memory_12;
#line 286
undef($memory_12);
#line 286
undef($memory_9);
#line 286
undef($memory_10);
#line 286
undef($memory_11);
#line 287
goto label_130;
#line 287
label_115:
#line 288
$memory_9 = "ternary op: ";
#line 288
$memory_9 = $memory_9 . $memory_6;
#line 288
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 288
undef($memory_1);
#line 288
undef($memory_2);
#line 288
undef($memory_3);
#line 288
undef($memory_4);
#line 288
undef($memory_5);
#line 288
undef($memory_6);
#line 288
undef($memory_7);
#line 288
undef($memory_8);
#line 288
$_[0] = $memory_0;return $memory_9;
#line 288
undef($memory_9);
#line 289
goto label_130;
#line 289
label_130:
#line 289
undef($memory_8);
#line 290
goto label_363;
#line 290
label_133:
#line 290
$memory_8 = nast::get_bin_ops();
#line 290
$memory_7 = hash::has_key($memory_8, $memory_5);
#line 290
undef($memory_8);
#line 290
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 290
if (c_rt_lib::check_true($memory_7)) {goto label_261;}
#line 291
$memory_6 = $memory_5;
#line 292
$memory_9 = nast::get_bin_ops();
#line 292
$memory_8 = hash::get_value($memory_9, $memory_5);
#line 292
undef($memory_9);
#line 293
$memory_9 = $memory_8->{'prec'};
#line 293
$memory_9 = c_rt_lib::to_nl($memory_9 < $memory_2);
#line 293
if (c_rt_lib::check_true($memory_9)) {goto label_154;}
#line 293
$memory_9 = $memory_8->{'prec'};
#line 293
$memory_9 = c_rt_lib::to_nl($memory_9 == $memory_2);
#line 293
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 293
if (c_rt_lib::check_true($memory_10)) {goto label_152;}
#line 293
$memory_9 = $memory_8->{'assoc'};
#line 293
$memory_9 = c_rt_lib::ov_is($memory_9, 'left');
#line 293
label_152:
#line 293
undef($memory_10);
#line 293
label_154:
#line 293
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 293
if (c_rt_lib::check_true($memory_9)) {goto label_170;}
#line 293
$memory_10 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 293
undef($memory_1);
#line 293
undef($memory_2);
#line 293
undef($memory_3);
#line 293
undef($memory_4);
#line 293
undef($memory_5);
#line 293
undef($memory_6);
#line 293
undef($memory_7);
#line 293
undef($memory_8);
#line 293
undef($memory_9);
#line 293
$_[0] = $memory_0;return $memory_10;
#line 293
undef($memory_10);
#line 293
goto label_170;
#line 293
label_170:
#line 293
undef($memory_9);
#line 294
nparser_priv::eat($memory_0, $memory_5);
#line 295
$memory_9 = "->";
#line 295
$memory_9 = c_rt_lib::to_nl($memory_6 eq $memory_9);
#line 295
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 295
if (c_rt_lib::check_true($memory_9)) {goto label_184;}
#line 296
$memory_11 = nparser_priv::parse_hash_key($memory_0);
#line 296
$memory_10 = {op => $memory_6,left => $memory_1,right => $memory_11,};
#line 296
undef($memory_11);
#line 296
$memory_10 = c_rt_lib::ov_mk_arg('bin_op', $memory_10);
#line 296
$memory_3 = $memory_10;
#line 296
undef($memory_10);
#line 297
goto label_257;
#line 297
label_184:
#line 297
$memory_9 = "as";
#line 297
$memory_9 = c_rt_lib::to_nl($memory_6 eq $memory_9);
#line 297
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 297
if (c_rt_lib::check_true($memory_9)) {goto label_201;}
#line 298
$memory_10 = ":";
#line 298
nparser_priv::eat($memory_0, $memory_10);
#line 298
undef($memory_10);
#line 299
$memory_10 = nparser_priv::parse_variant_label($memory_0);
#line 300
$memory_12 = c_rt_lib::ov_mk_none('ov_as');
#line 300
$memory_11 = {op => $memory_12,left => $memory_1,case => $memory_10,};
#line 300
undef($memory_12);
#line 300
$memory_11 = c_rt_lib::ov_mk_arg('var_op', $memory_11);
#line 300
$memory_3 = $memory_11;
#line 300
undef($memory_11);
#line 300
undef($memory_10);
#line 301
goto label_257;
#line 301
label_201:
#line 301
$memory_9 = "is";
#line 301
$memory_9 = c_rt_lib::to_nl($memory_6 eq $memory_9);
#line 301
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 301
if (c_rt_lib::check_true($memory_9)) {goto label_218;}
#line 302
$memory_10 = ":";
#line 302
nparser_priv::eat($memory_0, $memory_10);
#line 302
undef($memory_10);
#line 303
$memory_10 = nparser_priv::parse_variant_label($memory_0);
#line 304
$memory_12 = c_rt_lib::ov_mk_none('ov_is');
#line 304
$memory_11 = {op => $memory_12,left => $memory_1,case => $memory_10,};
#line 304
undef($memory_12);
#line 304
$memory_11 = c_rt_lib::ov_mk_arg('var_op', $memory_11);
#line 304
$memory_3 = $memory_11;
#line 304
undef($memory_11);
#line 304
undef($memory_10);
#line 305
goto label_257;
#line 305
label_218:
#line 306
$memory_10 = "=";
#line 306
$memory_10 = c_rt_lib::to_nl($memory_6 eq $memory_10);
#line 306
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 306
if (c_rt_lib::check_true($memory_10)) {goto label_225;}
#line 306
nparser_priv::check_lvalue($memory_0, $memory_1);
#line 306
goto label_225;
#line 306
label_225:
#line 306
undef($memory_10);
#line 307
$memory_14 = nast::get_bin_ops();
#line 307
$memory_13 = hash::get_value($memory_14, $memory_6);
#line 307
undef($memory_14);
#line 307
$memory_13 = $memory_13->{'prec'};
#line 307
$memory_12 = nparser_priv::parse_expr_rec($memory_0, $memory_13);
#line 307
undef($memory_13);
#line 307
$memory_11 = c_rt_lib::ov_is($memory_12, 'ok');
#line 307
if (c_rt_lib::check_true($memory_11)) {goto label_247;}
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 307
undef($memory_4);
#line 307
undef($memory_5);
#line 307
undef($memory_6);
#line 307
undef($memory_7);
#line 307
undef($memory_8);
#line 307
undef($memory_9);
#line 307
undef($memory_10);
#line 307
undef($memory_11);
#line 307
$_[0] = $memory_0;return $memory_12;
#line 307
label_247:
#line 307
$memory_10 = c_rt_lib::ov_as($memory_12, 'ok');
#line 307
undef($memory_11);
#line 307
undef($memory_12);
#line 308
$memory_11 = {left => $memory_1,op => $memory_6,right => $memory_10,};
#line 308
$memory_11 = c_rt_lib::ov_mk_arg('bin_op', $memory_11);
#line 308
$memory_3 = $memory_11;
#line 308
undef($memory_11);
#line 308
undef($memory_10);
#line 309
goto label_257;
#line 309
label_257:
#line 309
undef($memory_9);
#line 309
undef($memory_8);
#line 310
goto label_363;
#line 310
label_261:
#line 310
$memory_8 = "[";
#line 310
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 310
undef($memory_8);
#line 310
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 310
if (c_rt_lib::check_true($memory_7)) {goto label_296;}
#line 311
$memory_8 = "ARRAY_INDEX";
#line 311
$memory_6 = $memory_8;
#line 311
undef($memory_8);
#line 312
$memory_10 = nparser_priv::parse_expr($memory_0);
#line 312
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 312
if (c_rt_lib::check_true($memory_9)) {goto label_283;}
#line 312
undef($memory_1);
#line 312
undef($memory_2);
#line 312
undef($memory_3);
#line 312
undef($memory_4);
#line 312
undef($memory_5);
#line 312
undef($memory_6);
#line 312
undef($memory_7);
#line 312
undef($memory_8);
#line 312
undef($memory_9);
#line 312
$_[0] = $memory_0;return $memory_10;
#line 312
label_283:
#line 312
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 312
undef($memory_9);
#line 312
undef($memory_10);
#line 313
$memory_9 = "]";
#line 313
nparser_priv::eat($memory_0, $memory_9);
#line 313
undef($memory_9);
#line 314
$memory_9 = {op => $memory_6,left => $memory_1,right => $memory_8,};
#line 314
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_9);
#line 314
$memory_3 = $memory_9;
#line 314
undef($memory_9);
#line 314
undef($memory_8);
#line 315
goto label_363;
#line 315
label_296:
#line 315
$memory_8 = "{";
#line 315
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 315
undef($memory_8);
#line 315
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 315
if (c_rt_lib::check_true($memory_7)) {goto label_331;}
#line 316
$memory_8 = "HASH_INDEX";
#line 316
$memory_6 = $memory_8;
#line 316
undef($memory_8);
#line 317
$memory_10 = nparser_priv::parse_expr($memory_0);
#line 317
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 317
if (c_rt_lib::check_true($memory_9)) {goto label_318;}
#line 317
undef($memory_1);
#line 317
undef($memory_2);
#line 317
undef($memory_3);
#line 317
undef($memory_4);
#line 317
undef($memory_5);
#line 317
undef($memory_6);
#line 317
undef($memory_7);
#line 317
undef($memory_8);
#line 317
undef($memory_9);
#line 317
$_[0] = $memory_0;return $memory_10;
#line 317
label_318:
#line 317
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 317
undef($memory_9);
#line 317
undef($memory_10);
#line 318
$memory_9 = "}";
#line 318
nparser_priv::eat($memory_0, $memory_9);
#line 318
undef($memory_9);
#line 319
$memory_9 = {op => $memory_6,left => $memory_1,right => $memory_8,};
#line 319
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_9);
#line 319
$memory_3 = $memory_9;
#line 319
undef($memory_9);
#line 319
undef($memory_8);
#line 320
goto label_363;
#line 320
label_331:
#line 320
$memory_8 = "++";
#line 320
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 320
undef($memory_8);
#line 320
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 320
if (c_rt_lib::check_true($memory_7)) {goto label_341;}
#line 321
$memory_8 = c_rt_lib::ov_mk_arg('post_inc', $memory_1);
#line 321
$memory_3 = $memory_8;
#line 321
undef($memory_8);
#line 322
goto label_363;
#line 322
label_341:
#line 322
$memory_8 = "--";
#line 322
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 322
undef($memory_8);
#line 322
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 322
if (c_rt_lib::check_true($memory_7)) {goto label_351;}
#line 323
$memory_8 = c_rt_lib::ov_mk_arg('post_dec', $memory_1);
#line 323
$memory_3 = $memory_8;
#line 323
undef($memory_8);
#line 324
goto label_363;
#line 324
label_351:
#line 325
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 325
undef($memory_1);
#line 325
undef($memory_2);
#line 325
undef($memory_3);
#line 325
undef($memory_4);
#line 325
undef($memory_5);
#line 325
undef($memory_6);
#line 325
undef($memory_7);
#line 325
$_[0] = $memory_0;return $memory_8;
#line 325
undef($memory_8);
#line 326
goto label_363;
#line 326
label_363:
#line 326
undef($memory_7);
#line 327
$memory_10 = "state";
#line 327
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 327
$memory_9 = ntokenizer::get_place($memory_10);
#line 327
$memory_11 = "state";
#line 327
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 327
undef($memory_11);
#line 327
undef($memory_10);
#line 327
$memory_8 = {begin => $memory_4,end => $memory_9,};
#line 327
undef($memory_9);
#line 327
$memory_7 = {debug => $memory_8,value => $memory_3,};
#line 327
undef($memory_8);
#line 327
$memory_1 = $memory_7;
#line 327
undef($memory_7);
#line 327
undef($memory_3);
#line 327
undef($memory_4);
#line 327
undef($memory_5);
#line 327
undef($memory_6);
#line 272
goto label_0;
#line 329
$memory_3 = [];
#line 329
die(dfile::ssave($memory_3));
#line 329
undef($memory_3);
#line 329
undef($memory_1);
#line 329
undef($memory_2);
#line 329
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 334
$memory_4 = "state";
#line 334
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 334
$memory_3 = ntokenizer::get_place($memory_4);
#line 334
$memory_5 = "state";
#line 334
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 334
undef($memory_5);
#line 334
undef($memory_4);
#line 335
$memory_5 = "(";
#line 335
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 335
undef($memory_5);
#line 335
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 335
if (c_rt_lib::check_true($memory_4)) {goto label_34;}
#line 336
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 336
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 336
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 336
undef($memory_1);
#line 336
undef($memory_2);
#line 336
undef($memory_3);
#line 336
undef($memory_4);
#line 336
undef($memory_5);
#line 336
undef($memory_6);
#line 336
$_[0] = $memory_0;return $memory_7;
#line 336
label_22:
#line 336
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 336
undef($memory_6);
#line 336
undef($memory_7);
#line 337
$memory_6 = c_rt_lib::ov_mk_arg('parenthesis', $memory_5);
#line 337
$memory_2 = $memory_6;
#line 337
undef($memory_6);
#line 338
$memory_6 = ")";
#line 338
nparser_priv::eat($memory_0, $memory_6);
#line 338
undef($memory_6);
#line 338
undef($memory_5);
#line 339
goto label_478;
#line 339
label_34:
#line 339
$memory_5 = "state";
#line 339
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 339
$memory_6 = "{";
#line 339
$memory_4 = ntokenizer::next_is($memory_5, $memory_6);
#line 339
undef($memory_6);
#line 339
$memory_6 = "state";
#line 339
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 339
undef($memory_6);
#line 339
undef($memory_5);
#line 339
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 339
if (c_rt_lib::check_true($memory_4)) {goto label_65;}
#line 340
$memory_7 = nparser_priv::parse_hash($memory_0);
#line 340
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 340
if (c_rt_lib::check_true($memory_6)) {goto label_56;}
#line 340
undef($memory_1);
#line 340
undef($memory_2);
#line 340
undef($memory_3);
#line 340
undef($memory_4);
#line 340
undef($memory_5);
#line 340
undef($memory_6);
#line 340
$_[0] = $memory_0;return $memory_7;
#line 340
label_56:
#line 340
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 340
undef($memory_6);
#line 340
undef($memory_7);
#line 341
$memory_6 = c_rt_lib::ov_mk_arg('hash_decl', $memory_5);
#line 341
$memory_2 = $memory_6;
#line 341
undef($memory_6);
#line 341
undef($memory_5);
#line 342
goto label_478;
#line 342
label_65:
#line 342
$memory_5 = "state";
#line 342
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 342
$memory_6 = "[";
#line 342
$memory_4 = ntokenizer::next_is($memory_5, $memory_6);
#line 342
undef($memory_6);
#line 342
$memory_6 = "state";
#line 342
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 342
undef($memory_6);
#line 342
undef($memory_5);
#line 342
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 342
if (c_rt_lib::check_true($memory_4)) {goto label_96;}
#line 343
$memory_7 = nparser_priv::parse_arr($memory_0);
#line 343
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 343
if (c_rt_lib::check_true($memory_6)) {goto label_87;}
#line 343
undef($memory_1);
#line 343
undef($memory_2);
#line 343
undef($memory_3);
#line 343
undef($memory_4);
#line 343
undef($memory_5);
#line 343
undef($memory_6);
#line 343
$_[0] = $memory_0;return $memory_7;
#line 343
label_87:
#line 343
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 343
undef($memory_6);
#line 343
undef($memory_7);
#line 344
$memory_6 = c_rt_lib::ov_mk_arg('arr_decl', $memory_5);
#line 344
$memory_2 = $memory_6;
#line 344
undef($memory_6);
#line 344
undef($memory_5);
#line 345
goto label_478;
#line 345
label_96:
#line 345
$memory_5 = "state";
#line 345
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 345
$memory_6 = ":";
#line 345
$memory_4 = ntokenizer::next_is($memory_5, $memory_6);
#line 345
undef($memory_6);
#line 345
$memory_6 = "state";
#line 345
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 345
undef($memory_6);
#line 345
undef($memory_5);
#line 345
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 345
if (c_rt_lib::check_true($memory_4)) {goto label_127;}
#line 346
$memory_7 = nparser_priv::parse_variant($memory_0);
#line 346
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 346
if (c_rt_lib::check_true($memory_6)) {goto label_118;}
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
undef($memory_6);
#line 346
$_[0] = $memory_0;return $memory_7;
#line 346
label_118:
#line 346
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 347
$memory_6 = c_rt_lib::ov_mk_arg('variant', $memory_5);
#line 347
$memory_2 = $memory_6;
#line 347
undef($memory_6);
#line 347
undef($memory_5);
#line 348
goto label_478;
#line 348
label_127:
#line 348
$memory_5 = "state";
#line 348
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 348
$memory_6 = c_rt_lib::ov_mk_none('number');
#line 348
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 348
undef($memory_6);
#line 348
$memory_6 = "state";
#line 348
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 348
undef($memory_6);
#line 348
undef($memory_5);
#line 348
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 348
if (c_rt_lib::check_true($memory_4)) {goto label_152;}
#line 349
$memory_6 = "state";
#line 349
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 349
$memory_7 = c_rt_lib::ov_mk_none('number');
#line 349
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 349
undef($memory_7);
#line 349
$memory_7 = "state";
#line 349
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 349
undef($memory_7);
#line 349
undef($memory_6);
#line 349
$memory_5 = c_rt_lib::ov_mk_arg('const', $memory_5);
#line 349
$memory_2 = $memory_5;
#line 349
undef($memory_5);
#line 350
goto label_478;
#line 350
label_152:
#line 350
$memory_5 = "state";
#line 350
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 350
$memory_6 = c_rt_lib::ov_mk_none('multi_string');
#line 350
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 350
undef($memory_6);
#line 350
$memory_6 = "state";
#line 350
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 350
undef($memory_6);
#line 350
undef($memory_5);
#line 350
if (c_rt_lib::check_true($memory_4)) {goto label_172;}
#line 350
$memory_5 = "state";
#line 350
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 350
$memory_6 = c_rt_lib::ov_mk_none('string');
#line 350
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 350
undef($memory_6);
#line 350
$memory_6 = "state";
#line 350
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 350
undef($memory_6);
#line 350
undef($memory_5);
#line 350
label_172:
#line 350
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 350
if (c_rt_lib::check_true($memory_4)) {goto label_258;}
#line 351
$memory_6 = [];
#line 351
$memory_5 = {arr => $memory_6,};
#line 351
undef($memory_6);
#line 352
label_178:
#line 352
$memory_7 = "state";
#line 352
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 352
$memory_8 = c_rt_lib::ov_mk_none('multi_string');
#line 352
$memory_6 = ntokenizer::is_type($memory_7, $memory_8);
#line 352
undef($memory_8);
#line 352
$memory_8 = "state";
#line 352
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 352
undef($memory_8);
#line 352
undef($memory_7);
#line 352
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 352
if (c_rt_lib::check_true($memory_6)) {goto label_208;}
#line 353
$memory_7 = "arr";
#line 353
$memory_7 = c_rt_lib::get_ref_hash($memory_5, $memory_7);
#line 353
$memory_9 = "state";
#line 353
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 353
$memory_10 = c_rt_lib::ov_mk_none('multi_string');
#line 353
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 353
undef($memory_10);
#line 353
$memory_10 = "state";
#line 353
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 353
undef($memory_10);
#line 353
undef($memory_9);
#line 353
array::push($memory_7, $memory_8);
#line 353
undef($memory_8);
#line 353
$memory_8 = "arr";
#line 353
c_rt_lib::set_ref_hash($memory_5, $memory_8, $memory_7);
#line 353
undef($memory_8);
#line 353
undef($memory_7);
#line 354
goto label_178;
#line 354
label_208:
#line 354
undef($memory_6);
#line 355
$memory_7 = "state";
#line 355
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 355
$memory_8 = c_rt_lib::ov_mk_none('string');
#line 355
$memory_6 = ntokenizer::is_type($memory_7, $memory_8);
#line 355
undef($memory_8);
#line 355
$memory_8 = "state";
#line 355
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 355
undef($memory_8);
#line 355
undef($memory_7);
#line 355
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 355
if (c_rt_lib::check_true($memory_6)) {goto label_244;}
#line 356
$memory_7 = "arr";
#line 356
$memory_7 = c_rt_lib::get_ref_hash($memory_5, $memory_7);
#line 356
$memory_9 = "state";
#line 356
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 356
$memory_10 = c_rt_lib::ov_mk_none('string');
#line 356
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 356
undef($memory_10);
#line 356
$memory_10 = "state";
#line 356
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 356
undef($memory_10);
#line 356
undef($memory_9);
#line 356
array::push($memory_7, $memory_8);
#line 356
undef($memory_8);
#line 356
$memory_8 = "arr";
#line 356
c_rt_lib::set_ref_hash($memory_5, $memory_8, $memory_7);
#line 356
undef($memory_8);
#line 356
undef($memory_7);
#line 357
$memory_7 = c_rt_lib::ov_mk_none('end');
#line 357
$memory_8 = $memory_7;
#line 357
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'last'} = $memory_8;
#line 357
undef($memory_7);
#line 357
undef($memory_8);
#line 358
goto label_251;
#line 358
label_244:
#line 359
$memory_7 = c_rt_lib::ov_mk_none('new_line');
#line 359
$memory_8 = $memory_7;
#line 359
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'last'} = $memory_8;
#line 359
undef($memory_7);
#line 359
undef($memory_8);
#line 360
goto label_251;
#line 360
label_251:
#line 360
undef($memory_6);
#line 361
$memory_6 = c_rt_lib::ov_mk_arg('string', $memory_5);
#line 361
$memory_2 = $memory_6;
#line 361
undef($memory_6);
#line 361
undef($memory_5);
#line 362
goto label_478;
#line 362
label_258:
#line 362
$memory_5 = "state";
#line 362
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 362
$memory_6 = c_rt_lib::ov_mk_none('word');
#line 362
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 362
undef($memory_6);
#line 362
$memory_6 = "state";
#line 362
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 362
undef($memory_6);
#line 362
undef($memory_5);
#line 362
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 362
if (c_rt_lib::check_true($memory_4)) {goto label_284;}
#line 363
$memory_6 = nparser_priv::parse_label($memory_0);
#line 363
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 363
if (c_rt_lib::check_true($memory_5)) {goto label_279;}
#line 363
undef($memory_1);
#line 363
undef($memory_2);
#line 363
undef($memory_3);
#line 363
undef($memory_4);
#line 363
undef($memory_5);
#line 363
$_[0] = $memory_0;return $memory_6;
#line 363
label_279:
#line 363
$memory_2 = c_rt_lib::ov_as($memory_6, 'ok');
#line 363
undef($memory_5);
#line 363
undef($memory_6);
#line 364
goto label_478;
#line 364
label_284:
#line 364
$memory_6 = "state";
#line 364
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 364
$memory_7 = c_rt_lib::ov_mk_none('operator');
#line 364
$memory_4 = ntokenizer::is_type($memory_6, $memory_7);
#line 364
undef($memory_7);
#line 364
$memory_7 = "state";
#line 364
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 364
undef($memory_7);
#line 364
undef($memory_6);
#line 364
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 364
if (c_rt_lib::check_true($memory_5)) {goto label_307;}
#line 364
$memory_6 = nast::get_unary_ops();
#line 365
$memory_8 = "state";
#line 365
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 365
$memory_7 = ntokenizer::get_token($memory_8);
#line 365
$memory_9 = "state";
#line 365
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 365
undef($memory_9);
#line 365
undef($memory_8);
#line 365
$memory_4 = hash::has_key($memory_6, $memory_7);
#line 365
undef($memory_7);
#line 365
undef($memory_6);
#line 365
label_307:
#line 365
undef($memory_5);
#line 365
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 365
if (c_rt_lib::check_true($memory_4)) {goto label_391;}
#line 366
$memory_6 = "state";
#line 366
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 366
$memory_7 = c_rt_lib::ov_mk_none('operator');
#line 366
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 366
undef($memory_7);
#line 366
$memory_7 = "state";
#line 366
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 366
undef($memory_7);
#line 366
undef($memory_6);
#line 368
$memory_7 = "\@";
#line 368
$memory_7 = c_rt_lib::to_nl($memory_5 eq $memory_7);
#line 368
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 368
if (c_rt_lib::check_true($memory_7)) {goto label_349;}
#line 369
$memory_9 = "state";
#line 369
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 369
$memory_8 = ntokenizer::get_place($memory_9);
#line 369
$memory_10 = "state";
#line 369
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 369
undef($memory_10);
#line 369
undef($memory_9);
#line 370
$memory_9 = nparser_priv::parse_fun_label($memory_0);
#line 370
$memory_9 = c_rt_lib::ov_mk_arg('fun_label', $memory_9);
#line 371
$memory_11 = "state";
#line 371
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 371
$memory_10 = ntokenizer::get_place($memory_11);
#line 371
$memory_12 = "state";
#line 371
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 371
undef($memory_12);
#line 371
undef($memory_11);
#line 373
$memory_12 = {begin => $memory_8,end => $memory_10,};
#line 373
$memory_11 = {debug => $memory_12,value => $memory_9,};
#line 373
undef($memory_12);
#line 373
$memory_6 = $memory_11;
#line 373
undef($memory_11);
#line 373
undef($memory_8);
#line 373
undef($memory_9);
#line 373
undef($memory_10);
#line 379
goto label_382;
#line 379
label_349:
#line 380
$memory_11 = nast::get_unary_ops();
#line 380
$memory_10 = hash::get_value($memory_11, $memory_5);
#line 380
undef($memory_11);
#line 380
$memory_10 = $memory_10->{'prec'};
#line 380
$memory_9 = nparser_priv::parse_expr_rec($memory_0, $memory_10);
#line 380
undef($memory_10);
#line 380
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 380
if (c_rt_lib::check_true($memory_8)) {goto label_367;}
#line 380
undef($memory_1);
#line 380
undef($memory_2);
#line 380
undef($memory_3);
#line 380
undef($memory_4);
#line 380
undef($memory_5);
#line 380
undef($memory_6);
#line 380
undef($memory_7);
#line 380
undef($memory_8);
#line 380
$_[0] = $memory_0;return $memory_9;
#line 380
label_367:
#line 380
$memory_6 = c_rt_lib::ov_as($memory_9, 'ok');
#line 380
undef($memory_8);
#line 380
undef($memory_9);
#line 381
$memory_8 = $memory_6->{'value'};
#line 381
$memory_8 = c_rt_lib::ov_is($memory_8, 'unary_op');
#line 381
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 381
if (c_rt_lib::check_true($memory_8)) {goto label_379;}
#line 381
$memory_9 = "unary operator after unary operator";
#line 381
nparser_priv::add_error($memory_0, $memory_9);
#line 381
undef($memory_9);
#line 381
goto label_379;
#line 381
label_379:
#line 381
undef($memory_8);
#line 382
goto label_382;
#line 382
label_382:
#line 382
undef($memory_7);
#line 383
$memory_7 = {op => $memory_5,val => $memory_6,};
#line 383
$memory_7 = c_rt_lib::ov_mk_arg('unary_op', $memory_7);
#line 383
$memory_2 = $memory_7;
#line 383
undef($memory_7);
#line 383
undef($memory_5);
#line 383
undef($memory_6);
#line 384
goto label_478;
#line 384
label_391:
#line 384
$memory_5 = "state";
#line 384
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 384
$memory_6 = c_rt_lib::ov_mk_none('keyword');
#line 384
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 384
undef($memory_6);
#line 384
$memory_6 = "state";
#line 384
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 384
undef($memory_6);
#line 384
undef($memory_5);
#line 384
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 384
if (c_rt_lib::check_true($memory_4)) {goto label_457;}
#line 385
$memory_6 = "true";
#line 385
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 385
undef($memory_6);
#line 385
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 385
if (c_rt_lib::check_true($memory_5)) {goto label_417;}
#line 386
$memory_7 = "TRUE";
#line 386
$memory_8 = nparser_priv::get_value_nop($memory_0);
#line 386
$memory_6 = {name => $memory_7,var => $memory_8,};
#line 386
undef($memory_7);
#line 386
undef($memory_8);
#line 386
$memory_6 = c_rt_lib::ov_mk_arg('variant', $memory_6);
#line 386
$memory_2 = $memory_6;
#line 386
undef($memory_6);
#line 387
goto label_454;
#line 387
label_417:
#line 387
$memory_6 = "false";
#line 387
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 387
undef($memory_6);
#line 387
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 387
if (c_rt_lib::check_true($memory_5)) {goto label_432;}
#line 388
$memory_7 = "FALSE";
#line 388
$memory_8 = nparser_priv::get_value_nop($memory_0);
#line 388
$memory_6 = {name => $memory_7,var => $memory_8,};
#line 388
undef($memory_7);
#line 388
undef($memory_8);
#line 388
$memory_6 = c_rt_lib::ov_mk_arg('variant', $memory_6);
#line 388
$memory_2 = $memory_6;
#line 388
undef($memory_6);
#line 389
goto label_454;
#line 389
label_432:
#line 390
$memory_6 = "use keyword in wrong context:";
#line 390
$memory_7 = string::lf();
#line 390
$memory_6 = $memory_6 . $memory_7;
#line 390
undef($memory_7);
#line 390
$memory_8 = $memory_0->{'state'};
#line 390
$memory_7 = ntokenizer::info($memory_8);
#line 390
undef($memory_8);
#line 390
$memory_6 = $memory_6 . $memory_7;
#line 390
undef($memory_7);
#line 391
nparser_priv::add_error($memory_0, $memory_6);
#line 392
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 392
undef($memory_1);
#line 392
undef($memory_2);
#line 392
undef($memory_3);
#line 392
undef($memory_4);
#line 392
undef($memory_5);
#line 392
undef($memory_6);
#line 392
$_[0] = $memory_0;return $memory_7;
#line 392
undef($memory_7);
#line 392
undef($memory_6);
#line 393
goto label_454;
#line 393
label_454:
#line 393
undef($memory_5);
#line 394
goto label_478;
#line 394
label_457:
#line 395
$memory_5 = "error in parse_expr:";
#line 395
$memory_6 = string::lf();
#line 395
$memory_5 = $memory_5 . $memory_6;
#line 395
undef($memory_6);
#line 395
$memory_7 = $memory_0->{'state'};
#line 395
$memory_6 = ntokenizer::info($memory_7);
#line 395
undef($memory_7);
#line 395
$memory_5 = $memory_5 . $memory_6;
#line 395
undef($memory_6);
#line 396
nparser_priv::add_error($memory_0, $memory_5);
#line 397
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 397
undef($memory_1);
#line 397
undef($memory_2);
#line 397
undef($memory_3);
#line 397
undef($memory_4);
#line 397
undef($memory_5);
#line 397
$_[0] = $memory_0;return $memory_6;
#line 397
undef($memory_6);
#line 397
undef($memory_5);
#line 398
goto label_478;
#line 398
label_478:
#line 398
undef($memory_4);
#line 399
$memory_8 = "state";
#line 399
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 399
$memory_7 = ntokenizer::get_place($memory_8);
#line 399
$memory_9 = "state";
#line 399
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 399
undef($memory_9);
#line 399
undef($memory_8);
#line 399
$memory_6 = {begin => $memory_3,end => $memory_7,};
#line 399
undef($memory_7);
#line 399
$memory_5 = {debug => $memory_6,value => $memory_2,};
#line 399
undef($memory_6);
#line 399
$memory_4 = nparser_priv::parse_expr_rec_left($memory_0, $memory_5, $memory_1);
#line 399
undef($memory_5);
#line 399
undef($memory_1);
#line 399
undef($memory_2);
#line 399
undef($memory_3);
#line 399
$_[0] = $memory_0;return $memory_4;
#line 399
undef($memory_4);
#line 399
undef($memory_2);
#line 399
undef($memory_3);
#line 399
undef($memory_1);
#line 399
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::get_value_nop($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 406
$memory_4 = "state";
#line 406
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 406
$memory_3 = ntokenizer::get_place($memory_4);
#line 406
$memory_5 = "state";
#line 406
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 406
undef($memory_5);
#line 406
undef($memory_4);
#line 407
$memory_5 = "state";
#line 407
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 407
$memory_4 = ntokenizer::get_place($memory_5);
#line 407
$memory_6 = "state";
#line 407
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 407
undef($memory_6);
#line 407
undef($memory_5);
#line 407
$memory_2 = {begin => $memory_3,end => $memory_4,};
#line 407
undef($memory_3);
#line 407
undef($memory_4);
#line 409
$memory_3 = c_rt_lib::ov_mk_none('nop');
#line 409
$memory_1 = {debug => $memory_2,value => $memory_3,};
#line 409
undef($memory_2);
#line 409
undef($memory_3);
#line 409
$_[0] = $memory_0;return $memory_1;
#line 409
undef($memory_1);
#line 409
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 416
$memory_2 = "state";
#line 416
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 416
$memory_1 = ntokenizer::is_text($memory_2);
#line 416
$memory_3 = "state";
#line 416
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 416
undef($memory_3);
#line 416
undef($memory_2);
#line 416
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 416
if (c_rt_lib::check_true($memory_1)) {goto label_21;}
#line 417
$memory_3 = "state";
#line 417
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 417
$memory_2 = ntokenizer::eat_text($memory_3);
#line 417
$memory_4 = "state";
#line 417
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 417
undef($memory_4);
#line 417
undef($memory_3);
#line 417
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 417
undef($memory_1);
#line 417
$_[0] = $memory_0;return $memory_2;
#line 417
undef($memory_2);
#line 418
goto label_31;
#line 418
label_21:
#line 419
$memory_2 = "word expected";
#line 419
nparser_priv::add_error($memory_0, $memory_2);
#line 419
undef($memory_2);
#line 420
$memory_2 = "word expected";
#line 420
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 420
undef($memory_1);
#line 420
$_[0] = $memory_0;return $memory_2;
#line 420
undef($memory_2);
#line 421
goto label_31;
#line 421
label_31:
#line 421
undef($memory_1);
#line 421
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 425
$memory_2 = "state";
#line 425
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 425
$memory_1 = ntokenizer::is_text($memory_2);
#line 425
$memory_3 = "state";
#line 425
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 425
undef($memory_3);
#line 425
undef($memory_2);
#line 425
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 425
if (c_rt_lib::check_true($memory_1)) {goto label_20;}
#line 426
$memory_3 = "state";
#line 426
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 426
$memory_2 = ntokenizer::eat_text($memory_3);
#line 426
$memory_4 = "state";
#line 426
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 426
undef($memory_4);
#line 426
undef($memory_3);
#line 426
undef($memory_1);
#line 426
$_[0] = $memory_0;return $memory_2;
#line 426
undef($memory_2);
#line 427
goto label_29;
#line 427
label_20:
#line 428
$memory_2 = "word expected";
#line 428
nparser_priv::add_error($memory_0, $memory_2);
#line 428
undef($memory_2);
#line 429
$memory_2 = "";
#line 429
undef($memory_1);
#line 429
$_[0] = $memory_0;return $memory_2;
#line 429
undef($memory_2);
#line 430
goto label_29;
#line 430
label_29:
#line 430
undef($memory_1);
#line 430
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 434
$memory_1 = ":";
#line 434
nparser_priv::eat($memory_0, $memory_1);
#line 434
undef($memory_1);
#line 435
$memory_1 = nparser_priv::parse_variant_label($memory_0);
#line 436
$memory_2 = nparser_priv::get_value_nop($memory_0);
#line 437
$memory_4 = "(";
#line 437
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 437
undef($memory_4);
#line 437
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 437
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 438
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 438
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 438
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 438
undef($memory_1);
#line 438
undef($memory_2);
#line 438
undef($memory_3);
#line 438
undef($memory_4);
#line 438
$_[0] = $memory_0;return $memory_5;
#line 438
label_18:
#line 438
$memory_2 = c_rt_lib::ov_as($memory_5, 'ok');
#line 438
undef($memory_4);
#line 438
undef($memory_5);
#line 439
$memory_4 = ")";
#line 439
nparser_priv::eat($memory_0, $memory_4);
#line 439
undef($memory_4);
#line 440
goto label_31;
#line 440
label_26:
#line 441
$memory_4 = nparser_priv::get_value_nop($memory_0);
#line 441
$memory_2 = $memory_4;
#line 441
undef($memory_4);
#line 442
goto label_31;
#line 442
label_31:
#line 442
undef($memory_3);
#line 443
$memory_3 = {name => $memory_1,var => $memory_2,};
#line 443
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 443
undef($memory_1);
#line 443
undef($memory_2);
#line 443
$_[0] = $memory_0;return $memory_3;
#line 443
undef($memory_3);
#line 443
undef($memory_1);
#line 443
undef($memory_2);
#line 443
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::check_lvalue($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 447
$memory_2 = $memory_1->{'value'};
#line 447
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 447
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 447
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 448
undef($memory_1);
#line 448
undef($memory_2);
#line 448
$_[0] = $memory_0;return;
#line 449
goto label_46;
#line 449
label_8:
#line 449
$memory_2 = $memory_1->{'value'};
#line 449
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 449
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 449
if (c_rt_lib::check_true($memory_2)) {goto label_46;}
#line 450
$memory_3 = $memory_1->{'value'};
#line 450
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 451
$memory_4 = $memory_3->{'op'};
#line 451
$memory_5 = "->";
#line 451
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 451
undef($memory_5);
#line 451
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 451
$memory_4 = $memory_3->{'op'};
#line 451
$memory_5 = "ARRAY_INDEX";
#line 451
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 451
undef($memory_5);
#line 451
label_24:
#line 451
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 451
$memory_4 = $memory_3->{'op'};
#line 451
$memory_5 = "HASH_INDEX";
#line 451
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 451
undef($memory_5);
#line 451
label_30:
#line 451
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 451
if (c_rt_lib::check_true($memory_4)) {goto label_42;}
#line 452
$memory_5 = $memory_3->{'left'};
#line 452
nparser_priv::check_lvalue($memory_0, $memory_5);
#line 452
undef($memory_5);
#line 453
undef($memory_1);
#line 453
undef($memory_2);
#line 453
undef($memory_3);
#line 453
undef($memory_4);
#line 453
$_[0] = $memory_0;return;
#line 454
goto label_42;
#line 454
label_42:
#line 454
undef($memory_4);
#line 454
undef($memory_3);
#line 455
goto label_46;
#line 455
label_46:
#line 455
undef($memory_2);
#line 456
$memory_2 = "invalid expr for lvalue";
#line 456
nparser_priv::add_error($memory_0, $memory_2);
#line 456
undef($memory_2);
#line 456
undef($memory_1);
#line 456
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 460
$memory_1 = ":";
#line 460
nparser_priv::eat($memory_0, $memory_1);
#line 460
undef($memory_1);
#line 461
$memory_2 = nparser_priv::parse_variant_label($memory_0);
#line 461
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 461
$memory_1 = {name => $memory_2,value => $memory_3,};
#line 461
undef($memory_2);
#line 461
undef($memory_3);
#line 462
$memory_3 = "(";
#line 462
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 462
undef($memory_3);
#line 462
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 462
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 463
$memory_3 = nparser_priv::parse_var_decl_sim($memory_0);
#line 463
$memory_3 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 463
$memory_4 = $memory_3;
#line 463
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_4;
#line 463
undef($memory_3);
#line 463
undef($memory_4);
#line 464
$memory_3 = ")";
#line 464
nparser_priv::eat($memory_0, $memory_3);
#line 464
undef($memory_3);
#line 465
goto label_23;
#line 465
label_23:
#line 465
undef($memory_2);
#line 466
$_[0] = $memory_0;return $memory_1;
#line 466
undef($memory_1);
#line 466
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 470
$memory_1 = "var";
#line 470
nparser_priv::eat($memory_0, $memory_1);
#line 470
undef($memory_1);
#line 471
$memory_2 = "";
#line 471
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 471
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 471
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 471
undef($memory_2);
#line 471
undef($memory_3);
#line 471
undef($memory_4);
#line 472
$memory_3 = "state";
#line 472
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 472
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 472
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 472
undef($memory_4);
#line 472
$memory_4 = "state";
#line 472
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 472
undef($memory_4);
#line 472
undef($memory_3);
#line 472
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 472
if (c_rt_lib::check_true($memory_2)) {goto label_35;}
#line 473
$memory_4 = "state";
#line 473
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 473
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 473
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 473
undef($memory_5);
#line 473
$memory_5 = "state";
#line 473
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 473
undef($memory_5);
#line 473
undef($memory_4);
#line 473
$memory_4 = $memory_3;
#line 473
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 473
undef($memory_3);
#line 473
undef($memory_4);
#line 474
goto label_40;
#line 474
label_35:
#line 475
$memory_3 = "variable name expected";
#line 475
nparser_priv::add_error($memory_0, $memory_3);
#line 475
undef($memory_3);
#line 476
goto label_40;
#line 476
label_40:
#line 476
undef($memory_2);
#line 477
$memory_3 = ":";
#line 477
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 477
undef($memory_3);
#line 477
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 477
if (c_rt_lib::check_true($memory_2)) {goto label_66;}
#line 478
$memory_5 = nparser_priv::parse_type($memory_0);
#line 478
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 478
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 478
undef($memory_1);
#line 478
undef($memory_2);
#line 478
undef($memory_3);
#line 478
undef($memory_4);
#line 478
$_[0] = $memory_0;return $memory_5;
#line 478
label_55:
#line 478
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 478
undef($memory_4);
#line 478
undef($memory_5);
#line 479
$memory_4 = c_rt_lib::ov_mk_arg('type', $memory_3);
#line 479
$memory_5 = $memory_4;
#line 479
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'type'} = $memory_5;
#line 479
undef($memory_4);
#line 479
undef($memory_5);
#line 479
undef($memory_3);
#line 480
goto label_66;
#line 480
label_66:
#line 480
undef($memory_2);
#line 481
$memory_3 = "=";
#line 481
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 481
undef($memory_3);
#line 481
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 481
if (c_rt_lib::check_true($memory_2)) {goto label_92;}
#line 482
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 482
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 482
if (c_rt_lib::check_true($memory_4)) {goto label_81;}
#line 482
undef($memory_1);
#line 482
undef($memory_2);
#line 482
undef($memory_3);
#line 482
undef($memory_4);
#line 482
$_[0] = $memory_0;return $memory_5;
#line 482
label_81:
#line 482
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 482
undef($memory_4);
#line 482
undef($memory_5);
#line 483
$memory_4 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 483
$memory_5 = $memory_4;
#line 483
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_5;
#line 483
undef($memory_4);
#line 483
undef($memory_5);
#line 483
undef($memory_3);
#line 484
goto label_92;
#line 484
label_92:
#line 484
undef($memory_2);
#line 485
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 485
undef($memory_1);
#line 485
$_[0] = $memory_0;return $memory_2;
#line 485
undef($memory_2);
#line 485
undef($memory_1);
#line 485
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 489
$memory_1 = "var";
#line 489
nparser_priv::eat($memory_0, $memory_1);
#line 489
undef($memory_1);
#line 490
$memory_2 = "";
#line 490
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 490
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 490
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 490
undef($memory_2);
#line 490
undef($memory_3);
#line 490
undef($memory_4);
#line 491
$memory_3 = "state";
#line 491
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 491
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 491
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 491
undef($memory_4);
#line 491
$memory_4 = "state";
#line 491
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 491
undef($memory_4);
#line 491
undef($memory_3);
#line 491
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 491
if (c_rt_lib::check_true($memory_2)) {goto label_35;}
#line 492
$memory_4 = "state";
#line 492
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 492
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 492
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 492
undef($memory_5);
#line 492
$memory_5 = "state";
#line 492
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 492
undef($memory_5);
#line 492
undef($memory_4);
#line 492
$memory_4 = $memory_3;
#line 492
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 492
undef($memory_3);
#line 492
undef($memory_4);
#line 493
goto label_40;
#line 493
label_35:
#line 494
$memory_3 = "variable name expected";
#line 494
nparser_priv::add_error($memory_0, $memory_3);
#line 494
undef($memory_3);
#line 495
goto label_40;
#line 495
label_40:
#line 495
undef($memory_2);
#line 496
$_[0] = $memory_0;return $memory_1;
#line 496
undef($memory_1);
#line 496
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_cond($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 500
$memory_1 = "(";
#line 500
nparser_priv::eat($memory_0, $memory_1);
#line 500
undef($memory_1);
#line 501
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 501
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 501
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 501
undef($memory_1);
#line 501
undef($memory_2);
#line 501
$_[0] = $memory_0;return $memory_3;
#line 501
label_9:
#line 501
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 501
undef($memory_2);
#line 501
undef($memory_3);
#line 502
$memory_2 = ")";
#line 502
nparser_priv::eat($memory_0, $memory_2);
#line 502
undef($memory_2);
#line 503
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 503
undef($memory_1);
#line 503
$_[0] = $memory_0;return $memory_2;
#line 503
undef($memory_2);
#line 503
undef($memory_1);
#line 503
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 507
$memory_2 = "state";
#line 507
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 507
$memory_1 = ntokenizer::get_place($memory_2);
#line 507
$memory_3 = "state";
#line 507
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 507
undef($memory_3);
#line 507
undef($memory_2);
#line 508
$memory_2 = "{";
#line 508
nparser_priv::eat($memory_0, $memory_2);
#line 508
undef($memory_2);
#line 509
$memory_2 = [];
#line 510
label_11:
#line 510
$memory_4 = "}";
#line 510
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 510
undef($memory_4);
#line 510
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 510
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 510
if (c_rt_lib::check_true($memory_3)) {goto label_44;}
#line 511
$memory_5 = ";";
#line 511
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 511
undef($memory_5);
#line 511
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 511
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 511
undef($memory_4);
#line 511
goto label_11;
#line 511
goto label_26;
#line 511
label_26:
#line 511
undef($memory_4);
#line 512
$memory_6 = nparser_priv::parse_cmd($memory_0);
#line 512
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 512
if (c_rt_lib::check_true($memory_5)) {goto label_37;}
#line 512
undef($memory_1);
#line 512
undef($memory_2);
#line 512
undef($memory_3);
#line 512
undef($memory_4);
#line 512
undef($memory_5);
#line 512
$_[0] = $memory_0;return $memory_6;
#line 512
label_37:
#line 512
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 512
undef($memory_5);
#line 512
undef($memory_6);
#line 513
array::push($memory_2, $memory_4);
#line 513
undef($memory_4);
#line 514
goto label_11;
#line 514
label_44:
#line 514
undef($memory_3);
#line 515
$memory_4 = "state";
#line 515
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 515
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 515
$memory_5 = "state";
#line 515
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 515
undef($memory_5);
#line 515
undef($memory_4);
#line 516
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 517
$memory_6 = c_rt_lib::ov_mk_arg('block', $memory_2);
#line 517
$memory_5 = {debug => $memory_4,cmd => $memory_6,};
#line 517
undef($memory_6);
#line 517
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 517
undef($memory_1);
#line 517
undef($memory_2);
#line 517
undef($memory_3);
#line 517
undef($memory_4);
#line 517
$_[0] = $memory_0;return $memory_5;
#line 517
undef($memory_5);
#line 517
undef($memory_1);
#line 517
undef($memory_2);
#line 517
undef($memory_3);
#line 517
undef($memory_4);
#line 517
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_try_ensure($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 521
$memory_2 = "state";
#line 521
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 521
$memory_3 = "var";
#line 521
$memory_1 = ntokenizer::next_is($memory_2, $memory_3);
#line 521
undef($memory_3);
#line 521
$memory_3 = "state";
#line 521
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 521
undef($memory_3);
#line 521
undef($memory_2);
#line 521
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 521
if (c_rt_lib::check_true($memory_1)) {goto label_30;}
#line 522
$memory_4 = nparser_priv::parse_var_decl($memory_0);
#line 522
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 522
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 522
undef($memory_1);
#line 522
undef($memory_2);
#line 522
undef($memory_3);
#line 522
$_[0] = $memory_0;return $memory_4;
#line 522
label_18:
#line 522
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 522
undef($memory_3);
#line 522
undef($memory_4);
#line 523
$memory_3 = c_rt_lib::ov_mk_arg('decl', $memory_2);
#line 523
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 523
undef($memory_1);
#line 523
undef($memory_2);
#line 523
$_[0] = $memory_0;return $memory_3;
#line 523
undef($memory_3);
#line 523
undef($memory_2);
#line 524
goto label_79;
#line 524
label_30:
#line 525
$memory_4 = nparser_priv::parse_expr($memory_0);
#line 525
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 525
if (c_rt_lib::check_true($memory_3)) {goto label_38;}
#line 525
undef($memory_1);
#line 525
undef($memory_2);
#line 525
undef($memory_3);
#line 525
$_[0] = $memory_0;return $memory_4;
#line 525
label_38:
#line 525
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 525
undef($memory_3);
#line 525
undef($memory_4);
#line 526
$memory_3 = $memory_2->{'value'};
#line 526
$memory_3 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 526
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 526
if (c_rt_lib::check_true($memory_4)) {goto label_52;}
#line 526
$memory_3 = $memory_2->{'value'};
#line 526
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 526
$memory_3 = $memory_3->{'op'};
#line 526
$memory_5 = "=";
#line 526
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 526
undef($memory_5);
#line 526
label_52:
#line 526
undef($memory_4);
#line 526
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 526
if (c_rt_lib::check_true($memory_3)) {goto label_66;}
#line 527
$memory_4 = $memory_2->{'value'};
#line 527
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 527
$memory_4 = c_rt_lib::ov_mk_arg('lval', $memory_4);
#line 527
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 527
undef($memory_1);
#line 527
undef($memory_2);
#line 527
undef($memory_3);
#line 527
$_[0] = $memory_0;return $memory_4;
#line 527
undef($memory_4);
#line 528
goto label_75;
#line 528
label_66:
#line 529
$memory_4 = c_rt_lib::ov_mk_arg('expr', $memory_2);
#line 529
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 529
undef($memory_1);
#line 529
undef($memory_2);
#line 529
undef($memory_3);
#line 529
$_[0] = $memory_0;return $memory_4;
#line 529
undef($memory_4);
#line 530
goto label_75;
#line 530
label_75:
#line 530
undef($memory_3);
#line 530
undef($memory_2);
#line 531
goto label_79;
#line 531
label_79:
#line 531
undef($memory_1);
#line 531
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::get_debug_from_begin($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 535
$memory_3 = "state";
#line 535
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 535
$memory_2 = ntokenizer::get_place($memory_3);
#line 535
$memory_4 = "state";
#line 535
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 535
undef($memory_4);
#line 535
undef($memory_3);
#line 535
$memory_4 = "state";
#line 535
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 535
$memory_3 = ntokenizer::get_place($memory_4);
#line 535
$memory_5 = "state";
#line 535
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 535
undef($memory_5);
#line 535
undef($memory_4);
#line 535
$memory_1 = {begin => $memory_2,end => $memory_3,};
#line 535
undef($memory_2);
#line 535
undef($memory_3);
#line 535
undef($memory_0);
#line 535
return $memory_1;
#line 535
undef($memory_1);
#line 535
undef($memory_0);
#line 535
return;
}

sub nparser_priv::parse_cmd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 539
$memory_2 = "state";
#line 539
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 539
$memory_1 = ntokenizer::get_place($memory_2);
#line 539
$memory_3 = "state";
#line 539
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 539
undef($memory_3);
#line 539
undef($memory_2);
#line 541
$memory_4 = "if";
#line 541
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 541
undef($memory_4);
#line 541
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 541
if (c_rt_lib::check_true($memory_3)) {goto label_166;}
#line 542
$memory_4 = {};
#line 543
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 543
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 543
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 543
undef($memory_1);
#line 543
undef($memory_2);
#line 543
undef($memory_3);
#line 543
undef($memory_4);
#line 543
undef($memory_5);
#line 543
$_[0] = $memory_0;return $memory_6;
#line 543
label_22:
#line 543
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 543
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 543
undef($memory_5);
#line 543
undef($memory_6);
#line 543
undef($memory_7);
#line 544
$memory_6 = nparser_priv::parse_block($memory_0);
#line 544
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 544
if (c_rt_lib::check_true($memory_5)) {goto label_37;}
#line 544
undef($memory_1);
#line 544
undef($memory_2);
#line 544
undef($memory_3);
#line 544
undef($memory_4);
#line 544
undef($memory_5);
#line 544
$_[0] = $memory_0;return $memory_6;
#line 544
label_37:
#line 544
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 544
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'if'} = $memory_7;
#line 544
undef($memory_5);
#line 544
undef($memory_6);
#line 544
undef($memory_7);
#line 545
$memory_5 = [];
#line 546
$memory_6 = [];
#line 546
$memory_7 = $memory_6;
#line 546
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_7;
#line 546
undef($memory_6);
#line 546
undef($memory_7);
#line 547
label_49:
#line 547
$memory_7 = "elsif";
#line 547
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 547
undef($memory_7);
#line 547
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 547
if (c_rt_lib::check_true($memory_6)) {goto label_119;}
#line 548
$memory_7 = {};
#line 549
$memory_9 = "state";
#line 549
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 549
$memory_8 = ntokenizer::get_place($memory_9);
#line 549
$memory_10 = "state";
#line 549
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 549
undef($memory_10);
#line 549
undef($memory_9);
#line 550
$memory_10 = nparser_priv::parse_cond($memory_0);
#line 550
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 550
if (c_rt_lib::check_true($memory_9)) {goto label_76;}
#line 550
undef($memory_1);
#line 550
undef($memory_2);
#line 550
undef($memory_3);
#line 550
undef($memory_4);
#line 550
undef($memory_5);
#line 550
undef($memory_6);
#line 550
undef($memory_7);
#line 550
undef($memory_8);
#line 550
undef($memory_9);
#line 550
$_[0] = $memory_0;return $memory_10;
#line 550
label_76:
#line 550
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 550
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cond'} = $memory_11;
#line 550
undef($memory_9);
#line 550
undef($memory_10);
#line 550
undef($memory_11);
#line 551
$memory_10 = "state";
#line 551
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 551
$memory_9 = ntokenizer::get_place_ws($memory_10);
#line 551
$memory_11 = "state";
#line 551
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 551
undef($memory_11);
#line 551
undef($memory_10);
#line 552
$memory_10 = {begin => $memory_8,end => $memory_9,};
#line 552
$memory_11 = $memory_10;
#line 552
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'debug'} = $memory_11;
#line 552
undef($memory_10);
#line 552
undef($memory_11);
#line 553
$memory_11 = nparser_priv::parse_block($memory_0);
#line 553
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 553
if (c_rt_lib::check_true($memory_10)) {goto label_108;}
#line 553
undef($memory_1);
#line 553
undef($memory_2);
#line 553
undef($memory_3);
#line 553
undef($memory_4);
#line 553
undef($memory_5);
#line 553
undef($memory_6);
#line 553
undef($memory_7);
#line 553
undef($memory_8);
#line 553
undef($memory_9);
#line 553
undef($memory_10);
#line 553
$_[0] = $memory_0;return $memory_11;
#line 553
label_108:
#line 553
$memory_12 = c_rt_lib::ov_as($memory_11, 'ok');
#line 553
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cmd'} = $memory_12;
#line 553
undef($memory_10);
#line 553
undef($memory_11);
#line 553
undef($memory_12);
#line 554
array::push($memory_5, $memory_7);
#line 554
undef($memory_7);
#line 554
undef($memory_8);
#line 554
undef($memory_9);
#line 555
goto label_49;
#line 555
label_119:
#line 555
undef($memory_6);
#line 556
$memory_6 = $memory_5;
#line 556
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_6;
#line 556
undef($memory_6);
#line 557
$memory_7 = "else";
#line 557
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 557
undef($memory_7);
#line 557
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 557
if (c_rt_lib::check_true($memory_6)) {goto label_147;}
#line 558
$memory_8 = nparser_priv::parse_block($memory_0);
#line 558
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 558
if (c_rt_lib::check_true($memory_7)) {goto label_140;}
#line 558
undef($memory_1);
#line 558
undef($memory_2);
#line 558
undef($memory_3);
#line 558
undef($memory_4);
#line 558
undef($memory_5);
#line 558
undef($memory_6);
#line 558
undef($memory_7);
#line 558
$_[0] = $memory_0;return $memory_8;
#line 558
label_140:
#line 558
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 558
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_9;
#line 558
undef($memory_7);
#line 558
undef($memory_8);
#line 558
undef($memory_9);
#line 559
goto label_158;
#line 559
label_147:
#line 560
$memory_8 = nparser_priv::get_debug_from_begin($memory_0);
#line 560
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 560
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 560
undef($memory_8);
#line 560
undef($memory_9);
#line 560
$memory_8 = $memory_7;
#line 560
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_8;
#line 560
undef($memory_7);
#line 560
undef($memory_8);
#line 561
goto label_158;
#line 561
label_158:
#line 561
undef($memory_6);
#line 562
$memory_6 = c_rt_lib::ov_mk_arg('if', $memory_4);
#line 562
$memory_2 = $memory_6;
#line 562
undef($memory_6);
#line 562
undef($memory_4);
#line 562
undef($memory_5);
#line 563
goto label_971;
#line 563
label_166:
#line 563
$memory_4 = "fora";
#line 563
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 563
undef($memory_4);
#line 563
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 563
if (c_rt_lib::check_true($memory_3)) {goto label_218;}
#line 564
$memory_4 = {};
#line 565
$memory_5 = c_rt_lib::to_nl(0);
#line 565
$memory_6 = $memory_5;
#line 565
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 565
undef($memory_5);
#line 565
undef($memory_6);
#line 566
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 566
$memory_6 = $memory_5;
#line 566
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 566
undef($memory_5);
#line 566
undef($memory_6);
#line 567
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 567
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 567
if (c_rt_lib::check_true($memory_5)) {goto label_192;}
#line 567
undef($memory_1);
#line 567
undef($memory_2);
#line 567
undef($memory_3);
#line 567
undef($memory_4);
#line 567
undef($memory_5);
#line 567
$_[0] = $memory_0;return $memory_6;
#line 567
label_192:
#line 567
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 567
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'array'} = $memory_7;
#line 567
undef($memory_5);
#line 567
undef($memory_6);
#line 567
undef($memory_7);
#line 568
$memory_6 = nparser_priv::parse_block($memory_0);
#line 568
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 568
if (c_rt_lib::check_true($memory_5)) {goto label_207;}
#line 568
undef($memory_1);
#line 568
undef($memory_2);
#line 568
undef($memory_3);
#line 568
undef($memory_4);
#line 568
undef($memory_5);
#line 568
$_[0] = $memory_0;return $memory_6;
#line 568
label_207:
#line 568
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 568
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 568
undef($memory_5);
#line 568
undef($memory_6);
#line 568
undef($memory_7);
#line 569
$memory_5 = c_rt_lib::ov_mk_arg('fora', $memory_4);
#line 569
$memory_2 = $memory_5;
#line 569
undef($memory_5);
#line 569
undef($memory_4);
#line 570
goto label_971;
#line 570
label_218:
#line 570
$memory_4 = "rep";
#line 570
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 570
undef($memory_4);
#line 570
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 570
if (c_rt_lib::check_true($memory_3)) {goto label_270;}
#line 571
$memory_4 = {};
#line 572
$memory_5 = c_rt_lib::to_nl(0);
#line 572
$memory_6 = $memory_5;
#line 572
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 572
undef($memory_5);
#line 572
undef($memory_6);
#line 573
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 573
$memory_6 = $memory_5;
#line 573
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 573
undef($memory_5);
#line 573
undef($memory_6);
#line 574
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 574
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 574
if (c_rt_lib::check_true($memory_5)) {goto label_244;}
#line 574
undef($memory_1);
#line 574
undef($memory_2);
#line 574
undef($memory_3);
#line 574
undef($memory_4);
#line 574
undef($memory_5);
#line 574
$_[0] = $memory_0;return $memory_6;
#line 574
label_244:
#line 574
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 574
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'count'} = $memory_7;
#line 574
undef($memory_5);
#line 574
undef($memory_6);
#line 574
undef($memory_7);
#line 575
$memory_6 = nparser_priv::parse_block($memory_0);
#line 575
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 575
if (c_rt_lib::check_true($memory_5)) {goto label_259;}
#line 575
undef($memory_1);
#line 575
undef($memory_2);
#line 575
undef($memory_3);
#line 575
undef($memory_4);
#line 575
undef($memory_5);
#line 575
$_[0] = $memory_0;return $memory_6;
#line 575
label_259:
#line 575
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 575
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 575
undef($memory_5);
#line 575
undef($memory_6);
#line 575
undef($memory_7);
#line 576
$memory_5 = c_rt_lib::ov_mk_arg('rep', $memory_4);
#line 576
$memory_2 = $memory_5;
#line 576
undef($memory_5);
#line 576
undef($memory_4);
#line 577
goto label_971;
#line 577
label_270:
#line 577
$memory_4 = "loop";
#line 577
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 577
undef($memory_4);
#line 577
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 577
if (c_rt_lib::check_true($memory_3)) {goto label_294;}
#line 578
$memory_6 = nparser_priv::parse_block($memory_0);
#line 578
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 578
if (c_rt_lib::check_true($memory_5)) {goto label_285;}
#line 578
undef($memory_1);
#line 578
undef($memory_2);
#line 578
undef($memory_3);
#line 578
undef($memory_4);
#line 578
undef($memory_5);
#line 578
$_[0] = $memory_0;return $memory_6;
#line 578
label_285:
#line 578
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 578
undef($memory_5);
#line 578
undef($memory_6);
#line 579
$memory_5 = c_rt_lib::ov_mk_arg('loop', $memory_4);
#line 579
$memory_2 = $memory_5;
#line 579
undef($memory_5);
#line 579
undef($memory_4);
#line 580
goto label_971;
#line 580
label_294:
#line 580
$memory_4 = "forh";
#line 580
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 580
undef($memory_4);
#line 580
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 580
if (c_rt_lib::check_true($memory_3)) {goto label_354;}
#line 581
$memory_4 = {};
#line 582
$memory_5 = c_rt_lib::to_nl(0);
#line 582
$memory_6 = $memory_5;
#line 582
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 582
undef($memory_5);
#line 582
undef($memory_6);
#line 583
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 583
$memory_6 = $memory_5;
#line 583
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'key'} = $memory_6;
#line 583
undef($memory_5);
#line 583
undef($memory_6);
#line 584
$memory_5 = ",";
#line 584
nparser_priv::eat($memory_0, $memory_5);
#line 584
undef($memory_5);
#line 585
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 585
$memory_6 = $memory_5;
#line 585
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'val'} = $memory_6;
#line 585
undef($memory_5);
#line 585
undef($memory_6);
#line 586
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 586
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 586
if (c_rt_lib::check_true($memory_5)) {goto label_328;}
#line 586
undef($memory_1);
#line 586
undef($memory_2);
#line 586
undef($memory_3);
#line 586
undef($memory_4);
#line 586
undef($memory_5);
#line 586
$_[0] = $memory_0;return $memory_6;
#line 586
label_328:
#line 586
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 586
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'hash'} = $memory_7;
#line 586
undef($memory_5);
#line 586
undef($memory_6);
#line 586
undef($memory_7);
#line 587
$memory_6 = nparser_priv::parse_block($memory_0);
#line 587
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 587
if (c_rt_lib::check_true($memory_5)) {goto label_343;}
#line 587
undef($memory_1);
#line 587
undef($memory_2);
#line 587
undef($memory_3);
#line 587
undef($memory_4);
#line 587
undef($memory_5);
#line 587
$_[0] = $memory_0;return $memory_6;
#line 587
label_343:
#line 587
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 587
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 587
undef($memory_5);
#line 587
undef($memory_6);
#line 587
undef($memory_7);
#line 588
$memory_5 = c_rt_lib::ov_mk_arg('forh', $memory_4);
#line 588
$memory_2 = $memory_5;
#line 588
undef($memory_5);
#line 588
undef($memory_4);
#line 589
goto label_971;
#line 589
label_354:
#line 589
$memory_4 = "while";
#line 589
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 589
undef($memory_4);
#line 589
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 589
if (c_rt_lib::check_true($memory_3)) {goto label_401;}
#line 590
$memory_4 = {};
#line 591
$memory_5 = c_rt_lib::to_nl(0);
#line 591
$memory_6 = $memory_5;
#line 591
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 591
undef($memory_5);
#line 591
undef($memory_6);
#line 592
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 592
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 592
if (c_rt_lib::check_true($memory_5)) {goto label_375;}
#line 592
undef($memory_1);
#line 592
undef($memory_2);
#line 592
undef($memory_3);
#line 592
undef($memory_4);
#line 592
undef($memory_5);
#line 592
$_[0] = $memory_0;return $memory_6;
#line 592
label_375:
#line 592
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 592
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 592
undef($memory_5);
#line 592
undef($memory_6);
#line 592
undef($memory_7);
#line 593
$memory_6 = nparser_priv::parse_block($memory_0);
#line 593
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 593
if (c_rt_lib::check_true($memory_5)) {goto label_390;}
#line 593
undef($memory_1);
#line 593
undef($memory_2);
#line 593
undef($memory_3);
#line 593
undef($memory_4);
#line 593
undef($memory_5);
#line 593
$_[0] = $memory_0;return $memory_6;
#line 593
label_390:
#line 593
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 593
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 593
undef($memory_5);
#line 593
undef($memory_6);
#line 593
undef($memory_7);
#line 594
$memory_5 = c_rt_lib::ov_mk_arg('while', $memory_4);
#line 594
$memory_2 = $memory_5;
#line 594
undef($memory_5);
#line 594
undef($memory_4);
#line 595
goto label_971;
#line 595
label_401:
#line 595
$memory_4 = "for";
#line 595
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 595
undef($memory_4);
#line 595
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 595
if (c_rt_lib::check_true($memory_3)) {goto label_589;}
#line 596
$memory_4 = {};
#line 597
$memory_5 = "(";
#line 597
nparser_priv::eat($memory_0, $memory_5);
#line 597
undef($memory_5);
#line 598
$memory_6 = "state";
#line 598
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 598
$memory_7 = "var";
#line 598
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 598
undef($memory_7);
#line 598
$memory_7 = "state";
#line 598
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 598
undef($memory_7);
#line 598
undef($memory_6);
#line 598
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 598
if (c_rt_lib::check_true($memory_5)) {goto label_444;}
#line 599
$memory_8 = nparser_priv::parse_var_decl($memory_0);
#line 599
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 599
if (c_rt_lib::check_true($memory_7)) {goto label_433;}
#line 599
undef($memory_1);
#line 599
undef($memory_2);
#line 599
undef($memory_3);
#line 599
undef($memory_4);
#line 599
undef($memory_5);
#line 599
undef($memory_6);
#line 599
undef($memory_7);
#line 599
$_[0] = $memory_0;return $memory_8;
#line 599
label_433:
#line 599
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 599
undef($memory_7);
#line 599
undef($memory_8);
#line 600
$memory_7 = c_rt_lib::ov_mk_arg('var_decl', $memory_6);
#line 600
$memory_8 = $memory_7;
#line 600
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 600
undef($memory_7);
#line 600
undef($memory_8);
#line 600
undef($memory_6);
#line 601
goto label_486;
#line 601
label_444:
#line 601
$memory_6 = "state";
#line 601
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 601
$memory_7 = ";";
#line 601
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 601
undef($memory_7);
#line 601
$memory_7 = "state";
#line 601
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 601
undef($memory_7);
#line 601
undef($memory_6);
#line 601
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 601
if (c_rt_lib::check_true($memory_5)) {goto label_463;}
#line 602
$memory_6 = nparser_priv::get_value_nop($memory_0);
#line 602
$memory_6 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 602
$memory_7 = $memory_6;
#line 602
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_7;
#line 602
undef($memory_6);
#line 602
undef($memory_7);
#line 603
goto label_486;
#line 603
label_463:
#line 604
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 604
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 604
if (c_rt_lib::check_true($memory_7)) {goto label_475;}
#line 604
undef($memory_1);
#line 604
undef($memory_2);
#line 604
undef($memory_3);
#line 604
undef($memory_4);
#line 604
undef($memory_5);
#line 604
undef($memory_6);
#line 604
undef($memory_7);
#line 604
$_[0] = $memory_0;return $memory_8;
#line 604
label_475:
#line 604
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 604
undef($memory_7);
#line 604
undef($memory_8);
#line 605
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 605
$memory_8 = $memory_7;
#line 605
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 605
undef($memory_7);
#line 605
undef($memory_8);
#line 605
undef($memory_6);
#line 606
goto label_486;
#line 606
label_486:
#line 606
undef($memory_5);
#line 607
$memory_5 = ";";
#line 607
nparser_priv::eat($memory_0, $memory_5);
#line 607
undef($memory_5);
#line 608
$memory_5 = nparser_priv::get_value_nop($memory_0);
#line 608
$memory_6 = $memory_5;
#line 608
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_6;
#line 608
undef($memory_5);
#line 608
undef($memory_6);
#line 609
$memory_6 = "state";
#line 609
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 609
$memory_7 = ";";
#line 609
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 609
undef($memory_7);
#line 609
$memory_7 = "state";
#line 609
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 609
undef($memory_7);
#line 609
undef($memory_6);
#line 609
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 609
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 609
if (c_rt_lib::check_true($memory_5)) {goto label_525;}
#line 609
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 609
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 609
if (c_rt_lib::check_true($memory_6)) {goto label_518;}
#line 609
undef($memory_1);
#line 609
undef($memory_2);
#line 609
undef($memory_3);
#line 609
undef($memory_4);
#line 609
undef($memory_5);
#line 609
undef($memory_6);
#line 609
$_[0] = $memory_0;return $memory_7;
#line 609
label_518:
#line 609
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 609
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_8;
#line 609
undef($memory_6);
#line 609
undef($memory_7);
#line 609
undef($memory_8);
#line 609
goto label_525;
#line 609
label_525:
#line 609
undef($memory_5);
#line 610
$memory_5 = ";";
#line 610
nparser_priv::eat($memory_0, $memory_5);
#line 610
undef($memory_5);
#line 611
$memory_5 = nparser_priv::get_value_nop($memory_0);
#line 611
$memory_6 = $memory_5;
#line 611
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 611
undef($memory_5);
#line 611
undef($memory_6);
#line 612
$memory_6 = "state";
#line 612
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 612
$memory_7 = ")";
#line 612
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 612
undef($memory_7);
#line 612
$memory_7 = "state";
#line 612
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 612
undef($memory_7);
#line 612
undef($memory_6);
#line 612
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 612
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 612
if (c_rt_lib::check_true($memory_5)) {goto label_564;}
#line 612
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 612
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 612
if (c_rt_lib::check_true($memory_6)) {goto label_557;}
#line 612
undef($memory_1);
#line 612
undef($memory_2);
#line 612
undef($memory_3);
#line 612
undef($memory_4);
#line 612
undef($memory_5);
#line 612
undef($memory_6);
#line 612
$_[0] = $memory_0;return $memory_7;
#line 612
label_557:
#line 612
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 612
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_8;
#line 612
undef($memory_6);
#line 612
undef($memory_7);
#line 612
undef($memory_8);
#line 612
goto label_564;
#line 612
label_564:
#line 612
undef($memory_5);
#line 613
$memory_5 = ")";
#line 613
nparser_priv::eat($memory_0, $memory_5);
#line 613
undef($memory_5);
#line 614
$memory_6 = nparser_priv::parse_block($memory_0);
#line 614
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 614
if (c_rt_lib::check_true($memory_5)) {goto label_578;}
#line 614
undef($memory_1);
#line 614
undef($memory_2);
#line 614
undef($memory_3);
#line 614
undef($memory_4);
#line 614
undef($memory_5);
#line 614
$_[0] = $memory_0;return $memory_6;
#line 614
label_578:
#line 614
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 614
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 614
undef($memory_5);
#line 614
undef($memory_6);
#line 614
undef($memory_7);
#line 615
$memory_5 = c_rt_lib::ov_mk_arg('for', $memory_4);
#line 615
$memory_2 = $memory_5;
#line 615
undef($memory_5);
#line 615
undef($memory_4);
#line 616
goto label_971;
#line 616
label_589:
#line 616
$memory_4 = "state";
#line 616
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 616
$memory_5 = "{";
#line 616
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 616
undef($memory_5);
#line 616
$memory_5 = "state";
#line 616
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 616
undef($memory_5);
#line 616
undef($memory_4);
#line 616
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 616
if (c_rt_lib::check_true($memory_3)) {goto label_619;}
#line 617
$memory_6 = nparser_priv::parse_block($memory_0);
#line 617
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 617
if (c_rt_lib::check_true($memory_5)) {goto label_610;}
#line 617
undef($memory_1);
#line 617
undef($memory_2);
#line 617
undef($memory_3);
#line 617
undef($memory_4);
#line 617
undef($memory_5);
#line 617
$_[0] = $memory_0;return $memory_6;
#line 617
label_610:
#line 617
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 617
undef($memory_5);
#line 617
undef($memory_6);
#line 618
$memory_5 = $memory_4->{'cmd'};
#line 618
$memory_2 = $memory_5;
#line 618
undef($memory_5);
#line 618
undef($memory_4);
#line 619
goto label_971;
#line 619
label_619:
#line 619
$memory_4 = "break";
#line 619
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 619
undef($memory_4);
#line 619
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 619
if (c_rt_lib::check_true($memory_3)) {goto label_629;}
#line 620
$memory_4 = c_rt_lib::ov_mk_none('break');
#line 620
$memory_2 = $memory_4;
#line 620
undef($memory_4);
#line 621
goto label_971;
#line 621
label_629:
#line 621
$memory_4 = "continue";
#line 621
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 621
undef($memory_4);
#line 621
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 621
if (c_rt_lib::check_true($memory_3)) {goto label_639;}
#line 622
$memory_4 = c_rt_lib::ov_mk_none('continue');
#line 622
$memory_2 = $memory_4;
#line 622
undef($memory_4);
#line 623
goto label_971;
#line 623
label_639:
#line 623
$memory_4 = "return";
#line 623
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 623
undef($memory_4);
#line 623
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 623
if (c_rt_lib::check_true($memory_3)) {goto label_716;}
#line 624
$memory_5 = "state";
#line 624
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 624
$memory_4 = ntokenizer::get_token($memory_5);
#line 624
$memory_6 = "state";
#line 624
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 624
undef($memory_6);
#line 624
undef($memory_5);
#line 625
$memory_5 = c_rt_lib::to_nl(0);
#line 626
$memory_6 = nparser_priv::get_end_list();
#line 626
$memory_8 = 0;
#line 626
$memory_9 = 1;
#line 626
$memory_10 = c_rt_lib::array_len($memory_6);
#line 626
label_657:
#line 626
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 626
if (c_rt_lib::check_true($memory_11)) {goto label_674;}
#line 626
$memory_7 = $memory_6->[$memory_8];
#line 627
$memory_12 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 627
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 627
if (c_rt_lib::check_true($memory_12)) {goto label_670;}
#line 628
$memory_13 = c_rt_lib::to_nl(1);
#line 628
$memory_5 = $memory_13;
#line 628
undef($memory_13);
#line 629
undef($memory_12);
#line 629
goto label_674;
#line 630
goto label_670;
#line 630
label_670:
#line 630
undef($memory_12);
#line 631
$memory_8 = $memory_8 + $memory_9;
#line 631
goto label_657;
#line 631
label_674:
#line 631
undef($memory_6);
#line 631
undef($memory_7);
#line 631
undef($memory_8);
#line 631
undef($memory_9);
#line 631
undef($memory_10);
#line 631
undef($memory_11);
#line 632
$memory_6 = $memory_5;
#line 632
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 632
if (c_rt_lib::check_true($memory_6)) {goto label_689;}
#line 633
$memory_7 = nparser_priv::get_value_nop($memory_0);
#line 633
$memory_7 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 633
$memory_2 = $memory_7;
#line 633
undef($memory_7);
#line 634
goto label_711;
#line 634
label_689:
#line 635
$memory_9 = nparser_priv::parse_expr($memory_0);
#line 635
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 635
if (c_rt_lib::check_true($memory_8)) {goto label_702;}
#line 635
undef($memory_1);
#line 635
undef($memory_2);
#line 635
undef($memory_3);
#line 635
undef($memory_4);
#line 635
undef($memory_5);
#line 635
undef($memory_6);
#line 635
undef($memory_7);
#line 635
undef($memory_8);
#line 635
$_[0] = $memory_0;return $memory_9;
#line 635
label_702:
#line 635
$memory_7 = c_rt_lib::ov_as($memory_9, 'ok');
#line 635
undef($memory_8);
#line 635
undef($memory_9);
#line 636
$memory_8 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 636
$memory_2 = $memory_8;
#line 636
undef($memory_8);
#line 636
undef($memory_7);
#line 637
goto label_711;
#line 637
label_711:
#line 637
undef($memory_6);
#line 637
undef($memory_4);
#line 637
undef($memory_5);
#line 638
goto label_971;
#line 638
label_716:
#line 638
$memory_4 = "match";
#line 638
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 638
undef($memory_4);
#line 638
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 638
if (c_rt_lib::check_true($memory_3)) {goto label_819;}
#line 639
$memory_4 = "(";
#line 639
nparser_priv::eat($memory_0, $memory_4);
#line 639
undef($memory_4);
#line 640
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 640
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 640
if (c_rt_lib::check_true($memory_5)) {goto label_734;}
#line 640
undef($memory_1);
#line 640
undef($memory_2);
#line 640
undef($memory_3);
#line 640
undef($memory_4);
#line 640
undef($memory_5);
#line 640
$_[0] = $memory_0;return $memory_6;
#line 640
label_734:
#line 640
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 640
undef($memory_5);
#line 640
undef($memory_6);
#line 641
$memory_6 = [];
#line 641
$memory_5 = {val => $memory_4,branch_list => $memory_6,};
#line 641
undef($memory_6);
#line 642
$memory_6 = ")";
#line 642
nparser_priv::eat($memory_0, $memory_6);
#line 642
undef($memory_6);
#line 643
$memory_7 = "state";
#line 643
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 643
$memory_6 = ntokenizer::get_place($memory_7);
#line 643
$memory_8 = "state";
#line 643
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 643
undef($memory_8);
#line 643
undef($memory_7);
#line 644
label_751:
#line 644
$memory_8 = "case";
#line 644
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 644
undef($memory_8);
#line 644
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 644
if (c_rt_lib::check_true($memory_7)) {goto label_810;}
#line 645
$memory_9 = nparser_priv::parse_variant_decl($memory_0);
#line 645
$memory_8 = {variant => $memory_9,};
#line 645
undef($memory_9);
#line 646
$memory_11 = "state";
#line 646
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 646
$memory_10 = ntokenizer::get_place_ws($memory_11);
#line 646
$memory_12 = "state";
#line 646
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 646
undef($memory_12);
#line 646
undef($memory_11);
#line 646
$memory_9 = {begin => $memory_6,end => $memory_10,};
#line 646
undef($memory_10);
#line 646
$memory_10 = $memory_9;
#line 646
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'debug'} = $memory_10;
#line 646
undef($memory_9);
#line 646
undef($memory_10);
#line 647
$memory_10 = nparser_priv::parse_block($memory_0);
#line 647
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 647
if (c_rt_lib::check_true($memory_9)) {goto label_786;}
#line 647
undef($memory_1);
#line 647
undef($memory_2);
#line 647
undef($memory_3);
#line 647
undef($memory_4);
#line 647
undef($memory_5);
#line 647
undef($memory_6);
#line 647
undef($memory_7);
#line 647
undef($memory_8);
#line 647
undef($memory_9);
#line 647
$_[0] = $memory_0;return $memory_10;
#line 647
label_786:
#line 647
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 647
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'cmd'} = $memory_11;
#line 647
undef($memory_9);
#line 647
undef($memory_10);
#line 647
undef($memory_11);
#line 648
$memory_9 = "branch_list";
#line 648
$memory_9 = c_rt_lib::get_ref_hash($memory_5, $memory_9);
#line 648
array::push($memory_9, $memory_8);
#line 648
$memory_10 = "branch_list";
#line 648
c_rt_lib::set_ref_hash($memory_5, $memory_10, $memory_9);
#line 648
undef($memory_10);
#line 648
undef($memory_9);
#line 649
$memory_10 = "state";
#line 649
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 649
$memory_9 = ntokenizer::get_place($memory_10);
#line 649
$memory_11 = "state";
#line 649
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 649
undef($memory_11);
#line 649
undef($memory_10);
#line 649
$memory_6 = $memory_9;
#line 649
undef($memory_9);
#line 649
undef($memory_8);
#line 650
goto label_751;
#line 650
label_810:
#line 650
undef($memory_7);
#line 651
$memory_7 = c_rt_lib::ov_mk_arg('match', $memory_5);
#line 651
$memory_2 = $memory_7;
#line 651
undef($memory_7);
#line 651
undef($memory_4);
#line 651
undef($memory_5);
#line 651
undef($memory_6);
#line 652
goto label_971;
#line 652
label_819:
#line 652
$memory_4 = "die";
#line 652
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 652
undef($memory_4);
#line 652
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 652
if (c_rt_lib::check_true($memory_3)) {goto label_853;}
#line 653
$memory_4 = [];
#line 654
$memory_6 = "(";
#line 654
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 654
undef($memory_6);
#line 654
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 654
if (c_rt_lib::check_true($memory_5)) {goto label_846;}
#line 655
$memory_7 = nparser_priv::parse_expr_list($memory_0);
#line 655
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 655
if (c_rt_lib::check_true($memory_6)) {goto label_841;}
#line 655
undef($memory_1);
#line 655
undef($memory_2);
#line 655
undef($memory_3);
#line 655
undef($memory_4);
#line 655
undef($memory_5);
#line 655
undef($memory_6);
#line 655
$_[0] = $memory_0;return $memory_7;
#line 655
label_841:
#line 655
$memory_4 = c_rt_lib::ov_as($memory_7, 'ok');
#line 655
undef($memory_6);
#line 655
undef($memory_7);
#line 656
goto label_846;
#line 656
label_846:
#line 656
undef($memory_5);
#line 657
$memory_5 = c_rt_lib::ov_mk_arg('die', $memory_4);
#line 657
$memory_2 = $memory_5;
#line 657
undef($memory_5);
#line 657
undef($memory_4);
#line 658
goto label_971;
#line 658
label_853:
#line 658
$memory_4 = "state";
#line 658
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 658
$memory_5 = "var";
#line 658
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 658
undef($memory_5);
#line 658
$memory_5 = "state";
#line 658
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 658
undef($memory_5);
#line 658
undef($memory_4);
#line 658
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 658
if (c_rt_lib::check_true($memory_3)) {goto label_886;}
#line 659
$memory_6 = nparser_priv::parse_var_decl($memory_0);
#line 659
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 659
if (c_rt_lib::check_true($memory_5)) {goto label_874;}
#line 659
undef($memory_1);
#line 659
undef($memory_2);
#line 659
undef($memory_3);
#line 659
undef($memory_4);
#line 659
undef($memory_5);
#line 659
$_[0] = $memory_0;return $memory_6;
#line 659
label_874:
#line 659
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 659
undef($memory_5);
#line 659
undef($memory_6);
#line 660
$memory_5 = c_rt_lib::ov_mk_arg('var_decl', $memory_4);
#line 660
$memory_2 = $memory_5;
#line 660
undef($memory_5);
#line 661
$memory_5 = ";";
#line 661
nparser_priv::eat($memory_0, $memory_5);
#line 661
undef($memory_5);
#line 661
undef($memory_4);
#line 662
goto label_971;
#line 662
label_886:
#line 662
$memory_4 = "state";
#line 662
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 662
$memory_5 = "try";
#line 662
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 662
undef($memory_5);
#line 662
$memory_5 = "state";
#line 662
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 662
undef($memory_5);
#line 662
undef($memory_4);
#line 662
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 662
if (c_rt_lib::check_true($memory_3)) {goto label_919;}
#line 663
$memory_4 = "try";
#line 663
nparser_priv::eat($memory_0, $memory_4);
#line 663
undef($memory_4);
#line 664
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 664
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 664
if (c_rt_lib::check_true($memory_5)) {goto label_910;}
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
$_[0] = $memory_0;return $memory_6;
#line 664
label_910:
#line 664
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 664
undef($memory_5);
#line 664
undef($memory_6);
#line 665
$memory_5 = c_rt_lib::ov_mk_arg('try', $memory_4);
#line 665
$memory_2 = $memory_5;
#line 665
undef($memory_5);
#line 665
undef($memory_4);
#line 666
goto label_971;
#line 666
label_919:
#line 666
$memory_4 = "state";
#line 666
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 666
$memory_5 = "ensure";
#line 666
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 666
undef($memory_5);
#line 666
$memory_5 = "state";
#line 666
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 666
undef($memory_5);
#line 666
undef($memory_4);
#line 666
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 666
if (c_rt_lib::check_true($memory_3)) {goto label_952;}
#line 667
$memory_4 = "ensure";
#line 667
nparser_priv::eat($memory_0, $memory_4);
#line 667
undef($memory_4);
#line 668
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 668
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 668
if (c_rt_lib::check_true($memory_5)) {goto label_943;}
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
$_[0] = $memory_0;return $memory_6;
#line 668
label_943:
#line 668
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 668
undef($memory_5);
#line 668
undef($memory_6);
#line 669
$memory_5 = c_rt_lib::ov_mk_arg('ensure', $memory_4);
#line 669
$memory_2 = $memory_5;
#line 669
undef($memory_5);
#line 669
undef($memory_4);
#line 670
goto label_971;
#line 670
label_952:
#line 671
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 671
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 671
if (c_rt_lib::check_true($memory_5)) {goto label_962;}
#line 671
undef($memory_1);
#line 671
undef($memory_2);
#line 671
undef($memory_3);
#line 671
undef($memory_4);
#line 671
undef($memory_5);
#line 671
$_[0] = $memory_0;return $memory_6;
#line 671
label_962:
#line 671
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 671
undef($memory_5);
#line 671
undef($memory_6);
#line 672
$memory_5 = c_rt_lib::ov_mk_arg('value', $memory_4);
#line 672
$memory_2 = $memory_5;
#line 672
undef($memory_5);
#line 672
undef($memory_4);
#line 673
goto label_971;
#line 673
label_971:
#line 673
undef($memory_3);
#line 674
$memory_3 = $memory_2;
#line 674
$memory_3 = c_rt_lib::ov_is($memory_3, 'break');
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_978;}
#line 674
$memory_3 = $memory_2;
#line 674
$memory_3 = c_rt_lib::ov_is($memory_3, 'continue');
#line 674
label_978:
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_982;}
#line 674
$memory_3 = $memory_2;
#line 674
$memory_3 = c_rt_lib::ov_is($memory_3, 'value');
#line 674
label_982:
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_986;}
#line 674
$memory_3 = $memory_2;
#line 674
$memory_3 = c_rt_lib::ov_is($memory_3, 'return');
#line 674
label_986:
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_990;}
#line 674
$memory_3 = $memory_2;
#line 674
$memory_3 = c_rt_lib::ov_is($memory_3, 'die');
#line 674
label_990:
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_994;}
#line 674
$memory_3 = $memory_2;
#line 674
$memory_3 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 674
label_994:
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_998;}
#line 674
$memory_3 = $memory_2;
#line 674
$memory_3 = c_rt_lib::ov_is($memory_3, 'try');
#line 674
label_998:
#line 674
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_1243;}
#line 676
$memory_6 = "state";
#line 676
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 676
$memory_5 = ntokenizer::get_place_ws($memory_6);
#line 676
$memory_7 = "state";
#line 676
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 676
undef($memory_7);
#line 676
undef($memory_6);
#line 676
$memory_4 = {begin => $memory_1,end => $memory_5,};
#line 676
undef($memory_5);
#line 677
$memory_6 = {debug => $memory_4,cmd => $memory_2,};
#line 677
$memory_5 = {cmd => $memory_6,};
#line 677
undef($memory_6);
#line 678
$memory_7 = "fora";
#line 678
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 678
undef($memory_7);
#line 678
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 678
if (c_rt_lib::check_true($memory_6)) {goto label_1055;}
#line 679
$memory_7 = c_rt_lib::to_nl(1);
#line 679
$memory_8 = $memory_7;
#line 679
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 679
undef($memory_7);
#line 679
undef($memory_8);
#line 680
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 680
$memory_8 = $memory_7;
#line 680
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 680
undef($memory_7);
#line 680
undef($memory_8);
#line 681
$memory_7 = "(";
#line 681
nparser_priv::eat($memory_0, $memory_7);
#line 681
undef($memory_7);
#line 682
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 682
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 682
if (c_rt_lib::check_true($memory_7)) {goto label_1042;}
#line 682
undef($memory_1);
#line 682
undef($memory_2);
#line 682
undef($memory_3);
#line 682
undef($memory_4);
#line 682
undef($memory_5);
#line 682
undef($memory_6);
#line 682
undef($memory_7);
#line 682
$_[0] = $memory_0;return $memory_8;
#line 682
label_1042:
#line 682
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 682
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'array'} = $memory_9;
#line 682
undef($memory_7);
#line 682
undef($memory_8);
#line 682
undef($memory_9);
#line 683
$memory_7 = ")";
#line 683
nparser_priv::eat($memory_0, $memory_7);
#line 683
undef($memory_7);
#line 684
$memory_7 = c_rt_lib::ov_mk_arg('fora', $memory_5);
#line 684
$memory_2 = $memory_7;
#line 684
undef($memory_7);
#line 685
goto label_1235;
#line 685
label_1055:
#line 685
$memory_7 = "rep";
#line 685
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 685
undef($memory_7);
#line 685
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 685
if (c_rt_lib::check_true($memory_6)) {goto label_1098;}
#line 686
$memory_7 = c_rt_lib::to_nl(1);
#line 686
$memory_8 = $memory_7;
#line 686
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 686
undef($memory_7);
#line 686
undef($memory_8);
#line 687
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 687
$memory_8 = $memory_7;
#line 687
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 687
undef($memory_7);
#line 687
undef($memory_8);
#line 688
$memory_7 = "(";
#line 688
nparser_priv::eat($memory_0, $memory_7);
#line 688
undef($memory_7);
#line 689
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 689
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 689
if (c_rt_lib::check_true($memory_7)) {goto label_1085;}
#line 689
undef($memory_1);
#line 689
undef($memory_2);
#line 689
undef($memory_3);
#line 689
undef($memory_4);
#line 689
undef($memory_5);
#line 689
undef($memory_6);
#line 689
undef($memory_7);
#line 689
$_[0] = $memory_0;return $memory_8;
#line 689
label_1085:
#line 689
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 689
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'count'} = $memory_9;
#line 689
undef($memory_7);
#line 689
undef($memory_8);
#line 689
undef($memory_9);
#line 690
$memory_7 = ")";
#line 690
nparser_priv::eat($memory_0, $memory_7);
#line 690
undef($memory_7);
#line 691
$memory_7 = c_rt_lib::ov_mk_arg('rep', $memory_5);
#line 691
$memory_2 = $memory_7;
#line 691
undef($memory_7);
#line 692
goto label_1235;
#line 692
label_1098:
#line 692
$memory_7 = "forh";
#line 692
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 692
undef($memory_7);
#line 692
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 692
if (c_rt_lib::check_true($memory_6)) {goto label_1149;}
#line 693
$memory_7 = c_rt_lib::to_nl(1);
#line 693
$memory_8 = $memory_7;
#line 693
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 693
undef($memory_7);
#line 693
undef($memory_8);
#line 694
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 694
$memory_8 = $memory_7;
#line 694
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'key'} = $memory_8;
#line 694
undef($memory_7);
#line 694
undef($memory_8);
#line 695
$memory_7 = ",";
#line 695
nparser_priv::eat($memory_0, $memory_7);
#line 695
undef($memory_7);
#line 696
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 696
$memory_8 = $memory_7;
#line 696
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'val'} = $memory_8;
#line 696
undef($memory_7);
#line 696
undef($memory_8);
#line 697
$memory_7 = "(";
#line 697
nparser_priv::eat($memory_0, $memory_7);
#line 697
undef($memory_7);
#line 698
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 698
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 698
if (c_rt_lib::check_true($memory_7)) {goto label_1136;}
#line 698
undef($memory_1);
#line 698
undef($memory_2);
#line 698
undef($memory_3);
#line 698
undef($memory_4);
#line 698
undef($memory_5);
#line 698
undef($memory_6);
#line 698
undef($memory_7);
#line 698
$_[0] = $memory_0;return $memory_8;
#line 698
label_1136:
#line 698
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 698
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'hash'} = $memory_9;
#line 698
undef($memory_7);
#line 698
undef($memory_8);
#line 698
undef($memory_9);
#line 699
$memory_7 = ")";
#line 699
nparser_priv::eat($memory_0, $memory_7);
#line 699
undef($memory_7);
#line 700
$memory_7 = c_rt_lib::ov_mk_arg('forh', $memory_5);
#line 700
$memory_2 = $memory_7;
#line 700
undef($memory_7);
#line 701
goto label_1235;
#line 701
label_1149:
#line 701
$memory_7 = "if";
#line 701
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 701
undef($memory_7);
#line 701
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 701
if (c_rt_lib::check_true($memory_6)) {goto label_1176;}
#line 702
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 702
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 702
if (c_rt_lib::check_true($memory_7)) {goto label_1166;}
#line 702
undef($memory_1);
#line 702
undef($memory_2);
#line 702
undef($memory_3);
#line 702
undef($memory_4);
#line 702
undef($memory_5);
#line 702
undef($memory_6);
#line 702
undef($memory_7);
#line 702
$_[0] = $memory_0;return $memory_8;
#line 702
label_1166:
#line 702
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 702
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 702
undef($memory_7);
#line 702
undef($memory_8);
#line 702
undef($memory_9);
#line 703
$memory_7 = c_rt_lib::ov_mk_arg('if_mod', $memory_5);
#line 703
$memory_2 = $memory_7;
#line 703
undef($memory_7);
#line 704
goto label_1235;
#line 704
label_1176:
#line 704
$memory_7 = "unless";
#line 704
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 704
undef($memory_7);
#line 704
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 704
if (c_rt_lib::check_true($memory_6)) {goto label_1203;}
#line 705
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 705
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 705
if (c_rt_lib::check_true($memory_7)) {goto label_1193;}
#line 705
undef($memory_1);
#line 705
undef($memory_2);
#line 705
undef($memory_3);
#line 705
undef($memory_4);
#line 705
undef($memory_5);
#line 705
undef($memory_6);
#line 705
undef($memory_7);
#line 705
$_[0] = $memory_0;return $memory_8;
#line 705
label_1193:
#line 705
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 705
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 705
undef($memory_7);
#line 705
undef($memory_8);
#line 705
undef($memory_9);
#line 706
$memory_7 = c_rt_lib::ov_mk_arg('unless_mod', $memory_5);
#line 706
$memory_2 = $memory_7;
#line 706
undef($memory_7);
#line 707
goto label_1235;
#line 707
label_1203:
#line 707
$memory_7 = "while";
#line 707
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 707
undef($memory_7);
#line 707
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 707
if (c_rt_lib::check_true($memory_6)) {goto label_1235;}
#line 708
$memory_7 = c_rt_lib::to_nl(1);
#line 708
$memory_8 = $memory_7;
#line 708
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 708
undef($memory_7);
#line 708
undef($memory_8);
#line 709
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 709
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 709
if (c_rt_lib::check_true($memory_7)) {goto label_1225;}
#line 709
undef($memory_1);
#line 709
undef($memory_2);
#line 709
undef($memory_3);
#line 709
undef($memory_4);
#line 709
undef($memory_5);
#line 709
undef($memory_6);
#line 709
undef($memory_7);
#line 709
$_[0] = $memory_0;return $memory_8;
#line 709
label_1225:
#line 709
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 709
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 709
undef($memory_7);
#line 709
undef($memory_8);
#line 709
undef($memory_9);
#line 710
$memory_7 = c_rt_lib::ov_mk_arg('while', $memory_5);
#line 710
$memory_2 = $memory_7;
#line 710
undef($memory_7);
#line 711
goto label_1235;
#line 711
label_1235:
#line 711
undef($memory_6);
#line 712
$memory_6 = ";";
#line 712
nparser_priv::eat($memory_0, $memory_6);
#line 712
undef($memory_6);
#line 712
undef($memory_4);
#line 712
undef($memory_5);
#line 713
goto label_1243;
#line 713
label_1243:
#line 713
undef($memory_3);
#line 714
$memory_4 = "state";
#line 714
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 714
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 714
$memory_5 = "state";
#line 714
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 714
undef($memory_5);
#line 714
undef($memory_4);
#line 715
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 716
$memory_5 = {cmd => $memory_2,debug => $memory_4,};
#line 716
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 716
undef($memory_1);
#line 716
undef($memory_2);
#line 716
undef($memory_3);
#line 716
undef($memory_4);
#line 716
$_[0] = $memory_0;return $memory_5;
#line 716
undef($memory_5);
#line 716
undef($memory_1);
#line 716
undef($memory_2);
#line 716
undef($memory_3);
#line 716
undef($memory_4);
#line 716
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
