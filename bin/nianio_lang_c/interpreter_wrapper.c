
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "interpreter_wrapper.h"
#include "c_fe_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "nparser.h"
#include "boolean_t.h"
#include "translator.h"
#include "nlasm.h"
#include "interpreter.h"
#include "nl.h"
#include "compiler_lib.h"
#include "nl.h"
#include "compiler_lib.h"
#include "interpreter_wrapper.h"
#line 1 "interpreter_wrapper.nl"

static ImmT *__const__f = NULL;
void interpreter_wrapper_priv0__const__init();
ImmT interpreter_wrapper_priv0__const__sim(int __nr);
ImmT interpreter_wrapper_priv0__const__sing(int __nr);

ImmT  interpreter_wrapper_priv0get_known_func();
ImmT  interpreter_wrapper_priv0get_module_name(ImmT  ___nl__im__0);
bool interpreter_wrapper_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  interpreter_wrapper_priv0get_all_nianio_file(ImmT  ___nl__im__0);
interpreter_wrapper0module_t0type interpreter_wrapper_priv0get_files_to_parse(ImmT  ___nl__im__0);
ImmT  interpreter_wrapper_priv0parse_module(ImmT  ___nl__im__0,ImmT  ___nl__im__1,interpreter_wrapper0errors_group_t0type* ___ref___im__2);
ImmT  interpreter_wrapper_priv0construct_error_message(compiler_lib0error_t0type ___nl__im__0,ImmT  ___nl__im__1);
INT  interpreter_wrapper_priv0show_and_count_errors(interpreter_wrapper0errors_group_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  interpreter_wrapper_priv0translate(ImmT  ___nl__im__0);
ImmT  interpreter_wrapper_priv0get_dir(ImmT  ___nl__im__0);


ImmT  interpreter_wrapper0errors_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter_wrapper0errors_hash_t");
return interpreter_wrapper0errors_hash_t();
}
ImmT  interpreter_wrapper0errors_hash_t() {
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 21
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(53), ___get_global_const(54)));
#line 21
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 21
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 21
c_rt_lib0clear(&___nl__im__2);
#line 21
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
return ___nl__im__0;
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
return NULL;
}

ImmT  interpreter_wrapper0errors_group_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter_wrapper0errors_group_t");
return interpreter_wrapper0errors_group_t();
}
ImmT  interpreter_wrapper0errors_group_t() {
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 26
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_const(827), ___get_global_const(56)));
#line 26
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 27
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_const(827), ___get_global_const(56)));
#line 27
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 27
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(59), ___nl__im__2, ___get_global_const(60), ___nl__im__3));
#line 27
c_rt_lib0clear(&___nl__im__2);
#line 27
c_rt_lib0clear(&___nl__im__3);
#line 27
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 27
c_rt_lib0clear(&___nl__im__1);
#line 27
return ___nl__im__0;
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
return NULL;
}

ImmT  interpreter_wrapper0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "interpreter_wrapper0module_t");
return interpreter_wrapper0module_t();
}
ImmT  interpreter_wrapper0module_t() {
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 32
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(1, ___get_global_const(75), ___nl__im__3));
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 32
c_rt_lib0clear(&___nl__im__2);
#line 32
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
return ___nl__im__0;
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
return NULL;
}

ImmT  interpreter_wrapper_priv0get_known_func() {
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 36
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 37
c_rt_lib0move(&___nl__im__1,___get_global_const(828));
#line 37
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_const(66), ___get_global_const(829)));
#line 37
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 37
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(696)));
#line 37
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 37
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__6));
#line 37
c_rt_lib0clear(&___nl__im__6);
#line 37
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 37
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__im__3, ___get_global_const(95), ___nl__im__4, ___get_global_const(265), ___nl__im__5, ___get_global_const(246), ___nl__im__7));
#line 37
c_rt_lib0clear(&___nl__im__3);
#line 37
c_rt_lib0clear(&___nl__im__4);
#line 37
c_rt_lib0clear(&___nl__im__5);
#line 37
c_rt_lib0clear(&___nl__im__7);
#line 37
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 37
c_rt_lib0clear(&___nl__im__1);
#line 37
c_rt_lib0clear(&___nl__im__2);
#line 38
return ___nl__im__0;
}

INT  interpreter_wrapper0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "interpreter_wrapper0compile");
ImmT  *var0 = &(_tab[0]);
return interpreter_wrapper0compile(*var0);
}
INT  interpreter_wrapper0compile(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
#line 43
___nl__int__2 = 1;
#line 43
___nl__int__4 = c_rt_lib0array_len(___nl__im__0);
#line 43
___nl__int__5 = 1;
#line 43
___nl__int__3 = ___nl__int__4 - ___nl__int__5;
#line 43
//clear ___nl__int__4;
#line 43
//clear ___nl__int__5;
#line 43
c_rt_lib0move(&___nl__im__1, array0subarray(___nl__im__0, ___nl__int__2, ___nl__int__3));
#line 43
//clear ___nl__int__2;
#line 43
//clear ___nl__int__3;
#line 44
___nl__int__6 = interpreter_wrapper0exec_interpreter(___nl__im__1);
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
return ___nl__int__6;
}

INT  interpreter_wrapper0exec_interpreter0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "interpreter_wrapper0exec_interpreter");
ImmT  *var0 = &(_tab[0]);
return interpreter_wrapper0exec_interpreter(*var0);
}
INT  interpreter_wrapper0exec_interpreter(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
#line 48
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 50
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 51
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 51
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(59), ___nl__im__3, ___get_global_const(60), ___nl__im__4));
#line 51
c_rt_lib0clear(&___nl__im__3);
#line 51
c_rt_lib0clear(&___nl__im__4);
#line 53
___nl__int__5 = 0;
#line 54
c_rt_lib0move(&___nl__im__6, interpreter_wrapper_priv0get_files_to_parse(___nl__im__0));
#line 55
c_rt_lib0move(&___nl__im__10, c_rt_lib0init_iter(___nl__im__6));
#line 55
label_3:
;
#line 55
___nl__bool__8 = c_rt_lib0is_end_hash(___nl__im__10);
#line 55
if(___nl__bool__8){ goto label_1;}
#line 55
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_key_iter(___nl__im__10));
#line 55
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__7));
#line 56
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(75)));
#line 56
c_rt_lib0move(&___nl__im__11, interpreter_wrapper_priv0parse_module(___nl__im__7, ___nl__im__12, &___nl__im__2));
#line 56
c_rt_lib0clear(&___nl__im__12);
#line 56
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(80));
#line 56
if(___nl__bool__13){ goto label_5;}
#line 58
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(79));
#line 58
if(___nl__bool__13){ goto label_6;}
#line 58
c_rt_lib0move(&___nl__im__14,___get_global_const(16));
#line 58
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__11));
#line 58
nl_die_arg(___nl__im__14);
#line 56
label_5:
;
#line 56
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(80)));
#line 56
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 57
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__7, ___nl__im__15));
#line 58
goto label_4;
#line 58
label_6:
;
#line 58
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(79)));
#line 58
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 59
___nl__int__19 = 1;
#line 59
___nl__int__5 = ___nl__int__5 + ___nl__int__19;
#line 59
//clear ___nl__int__19;
#line 60
goto label_4;
#line 60
label_4:
;
#line 60
c_rt_lib0clear(&___nl__im__11);
#line 60
//clear ___nl__bool__13;
#line 60
c_rt_lib0clear(&___nl__im__14);
#line 60
c_rt_lib0clear(&___nl__im__15);
#line 60
c_rt_lib0clear(&___nl__im__16);
#line 60
c_rt_lib0clear(&___nl__im__17);
#line 60
c_rt_lib0clear(&___nl__im__18);
#line 60
label_2:
;
#line 61
c_rt_lib0move(&___nl__im__10, c_rt_lib0next_iter(___nl__im__10));
#line 61
goto label_3;
#line 61
label_1:
;
#line 62
___nl__int__21 = 0;
#line 62
___nl__int__22 = ___nl__int__5 != ___nl__int__21;
#line 62
___nl__bool__20 = ___nl__int__22;
#line 62
//clear ___nl__int__21;
#line 62
//clear ___nl__int__22;
#line 62
___nl__bool__20 = !___nl__bool__20;
#line 62
if(___nl__bool__20){ goto label_8;}
#line 63
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(0));
#line 63
___nl__int__24 = interpreter_wrapper_priv0show_and_count_errors(___nl__im__2, ___nl__im__23);
#line 63
c_rt_lib0clear(&___nl__im__23);
#line 63
//clear ___nl__int__24;
#line 64
___nl__int__25 = 1;
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
//clear ___nl__int__5;
#line 64
c_rt_lib0clear(&___nl__im__6);
#line 64
c_rt_lib0clear(&___nl__im__7);
#line 64
//clear ___nl__bool__8;
#line 64
c_rt_lib0clear(&___nl__im__9);
#line 64
c_rt_lib0clear(&___nl__im__10);
#line 64
c_rt_lib0clear(&___nl__im__11);
#line 64
//clear ___nl__bool__13;
#line 64
c_rt_lib0clear(&___nl__im__14);
#line 64
c_rt_lib0clear(&___nl__im__15);
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
c_rt_lib0clear(&___nl__im__17);
#line 64
c_rt_lib0clear(&___nl__im__18);
#line 64
//clear ___nl__bool__20;
#line 64
return ___nl__int__25;
#line 65
goto label_7;
#line 65
label_8:
;
#line 65
label_7:
;
#line 65
//clear ___nl__bool__20;
#line 65
//clear ___nl__int__25;
#line 66
c_rt_lib0move(&___nl__im__26, interpreter_wrapper_priv0translate(___nl__im__1));
#line 67
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 69
c_rt_lib0move(&___nl__im__32, c_rt_lib0init_iter(___nl__im__26));
#line 69
label_11:
;
#line 69
___nl__bool__30 = c_rt_lib0is_end_hash(___nl__im__32);
#line 69
if(___nl__bool__30){ goto label_9;}
#line 69
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_key_iter(___nl__im__32));
#line 69
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value(___nl__im__26, ___nl__im__29));
#line 70
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_const(208)));
#line 70
___nl__int__35 = 0;
#line 70
___nl__int__36 = 1;
#line 70
___nl__int__37 = c_rt_lib0array_len(___nl__im__33);
#line 70
label_14:
;
#line 70
___nl__int__39 = ___nl__int__35 >= ___nl__int__37;
#line 70
___nl__bool__38 = ___nl__int__39;
#line 70
if(___nl__bool__38){ goto label_12;}
#line 70
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__33, ___nl__int__35));
#line 70
c_rt_lib0copy(&___nl__im__34, ___nl__im__40);
#line 71
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(168)));
#line 71
c_rt_lib0move(&___nl__im__43,___get_global_const(146));
#line 71
___nl__bool__41 = c_rt_lib0eq(___nl__im__42, ___nl__im__43);
#line 71
c_rt_lib0clear(&___nl__im__42);
#line 71
c_rt_lib0clear(&___nl__im__43);
#line 71
___nl__bool__41 = !___nl__bool__41;
#line 71
if(___nl__bool__41){ goto label_16;}
#line 72
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 73
goto label_15;
#line 73
label_16:
;
#line 73
label_15:
;
#line 73
//clear ___nl__bool__41;
#line 73
c_rt_lib0clear(&___nl__im__34);
#line 73
label_13:
;
#line 74
___nl__int__35 = ___nl__int__35 + ___nl__int__36;
#line 74
goto label_14;
#line 74
label_12:
;
#line 75
c_rt_lib0delete(array0push(&___nl__im__27, ___nl__im__31));
#line 75
c_rt_lib0clear(&___nl__im__33);
#line 75
c_rt_lib0clear(&___nl__im__34);
#line 75
//clear ___nl__int__35;
#line 75
//clear ___nl__int__36;
#line 75
//clear ___nl__int__37;
#line 75
//clear ___nl__bool__38;
#line 75
//clear ___nl__int__39;
#line 75
c_rt_lib0clear(&___nl__im__40);
#line 75
label_10:
;
#line 76
c_rt_lib0move(&___nl__im__32, c_rt_lib0next_iter(___nl__im__32));
#line 76
goto label_11;
#line 76
label_9:
;
#line 77
c_rt_lib0move(&___nl__im__45, interpreter_wrapper_priv0get_known_func());
#line 77
c_rt_lib0move(&___nl__im__44, interpreter0init(___nl__im__27, ___nl__im__45));
#line 77
c_rt_lib0clear(&___nl__im__45);
#line 78
c_rt_lib0move(&___nl__im__48,___get_global_const(146));
#line 78
c_rt_lib0move(&___nl__im__47, interpreter0start(&___nl__im__44, ___nl__im__48, ___nl__im__28));
#line 78
c_rt_lib0clear(&___nl__im__48);
#line 78
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__47, ___get_global_const(80));
#line 78
if(___nl__bool__46){ goto label_17;}
#line 78
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__47));
#line 78
nl_die_arg(___nl__im__47);
#line 78
label_17:
;
#line 79
c_rt_lib0move(&___nl__im__50, interpreter0exec_all_code(___nl__im__44));
#line 79
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(80));
#line 79
if(___nl__bool__49){ goto label_18;}
#line 79
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__50));
#line 79
nl_die_arg(___nl__im__50);
#line 79
label_18:
;
#line 80
___nl__int__51 = 0;
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
c_rt_lib0clear(&___nl__im__1);
#line 80
c_rt_lib0clear(&___nl__im__2);
#line 80
//clear ___nl__int__5;
#line 80
c_rt_lib0clear(&___nl__im__6);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 80
//clear ___nl__bool__8;
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0clear(&___nl__im__11);
#line 80
//clear ___nl__bool__13;
#line 80
c_rt_lib0clear(&___nl__im__14);
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0clear(&___nl__im__16);
#line 80
c_rt_lib0clear(&___nl__im__17);
#line 80
c_rt_lib0clear(&___nl__im__18);
#line 80
c_rt_lib0clear(&___nl__im__26);
#line 80
c_rt_lib0clear(&___nl__im__27);
#line 80
c_rt_lib0clear(&___nl__im__28);
#line 80
c_rt_lib0clear(&___nl__im__29);
#line 80
//clear ___nl__bool__30;
#line 80
c_rt_lib0clear(&___nl__im__31);
#line 80
c_rt_lib0clear(&___nl__im__32);
#line 80
c_rt_lib0clear(&___nl__im__33);
#line 80
c_rt_lib0clear(&___nl__im__34);
#line 80
//clear ___nl__int__35;
#line 80
//clear ___nl__int__36;
#line 80
//clear ___nl__int__37;
#line 80
//clear ___nl__bool__38;
#line 80
//clear ___nl__int__39;
#line 80
c_rt_lib0clear(&___nl__im__40);
#line 80
c_rt_lib0clear(&___nl__im__44);
#line 80
//clear ___nl__bool__46;
#line 80
c_rt_lib0clear(&___nl__im__47);
#line 80
//clear ___nl__bool__49;
#line 80
c_rt_lib0clear(&___nl__im__50);
#line 80
return ___nl__int__51;
}

ImmT  interpreter_wrapper_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
#line 84
___nl__int__2 = string0length(___nl__im__0);
#line 84
___nl__int__3 = 1;
#line 84
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 84
//clear ___nl__int__2;
#line 84
//clear ___nl__int__3;
#line 85
label_2:
;
#line 85
___nl__int__7 = 0;
#line 85
___nl__int__8 = ___nl__int__1 >= ___nl__int__7;
#line 85
___nl__bool__4 = ___nl__int__8;
#line 85
//clear ___nl__int__7;
#line 85
//clear ___nl__int__8;
#line 85
___nl__bool__6 = !___nl__bool__4;
#line 85
if(___nl__bool__6){ goto label_4;}
#line 85
___nl__int__10 = 1;
#line 85
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 85
//clear ___nl__int__10;
#line 85
c_rt_lib0move(&___nl__im__11,___get_global_const(109));
#line 85
___nl__bool__4 = c_rt_lib0ne(___nl__im__9, ___nl__im__11);
#line 85
c_rt_lib0clear(&___nl__im__9);
#line 85
c_rt_lib0clear(&___nl__im__11);
#line 85
label_4:
;
#line 85
//clear ___nl__bool__6;
#line 85
___nl__bool__5 = !___nl__bool__4;
#line 85
if(___nl__bool__5){ goto label_3;}
#line 85
___nl__int__13 = 1;
#line 85
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__13));
#line 85
//clear ___nl__int__13;
#line 85
c_rt_lib0move(&___nl__im__14,___get_global_const(113));
#line 85
___nl__bool__4 = c_rt_lib0ne(___nl__im__12, ___nl__im__14);
#line 85
c_rt_lib0clear(&___nl__im__12);
#line 85
c_rt_lib0clear(&___nl__im__14);
#line 85
label_3:
;
#line 85
//clear ___nl__bool__5;
#line 85
___nl__bool__4 = !___nl__bool__4;
#line 85
if(___nl__bool__4){ goto label_1;}
#line 86
___nl__int__17 = 1;
#line 86
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 86
//clear ___nl__int__17;
#line 86
c_rt_lib0move(&___nl__im__18,___get_global_const(114));
#line 86
___nl__bool__15 = c_rt_lib0eq(___nl__im__16, ___nl__im__18);
#line 86
c_rt_lib0clear(&___nl__im__16);
#line 86
c_rt_lib0clear(&___nl__im__18);
#line 86
___nl__bool__15 = !___nl__bool__15;
#line 86
if(___nl__bool__15){ goto label_6;}
#line 87
___nl__int__19 = 1;
#line 87
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 87
//clear ___nl__int__19;
#line 88
goto label_1;
#line 89
goto label_5;
#line 89
label_6:
;
#line 89
label_5:
;
#line 89
//clear ___nl__bool__15;
#line 90
___nl__int__20 = 1;
#line 90
___nl__int__1 = ___nl__int__1 - ___nl__int__20;
#line 90
//clear ___nl__int__20;
#line 91
goto label_2;
#line 91
label_1:
;
#line 92
c_rt_lib0move(&___nl__im__21,___get_global_const(37));
#line 93
label_8:
;
#line 93
___nl__int__25 = 0;
#line 93
___nl__int__26 = ___nl__int__1 >= ___nl__int__25;
#line 93
___nl__bool__22 = ___nl__int__26;
#line 93
//clear ___nl__int__25;
#line 93
//clear ___nl__int__26;
#line 93
___nl__bool__24 = !___nl__bool__22;
#line 93
if(___nl__bool__24){ goto label_10;}
#line 93
___nl__int__28 = 1;
#line 93
c_rt_lib0move(&___nl__im__27, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__28));
#line 93
//clear ___nl__int__28;
#line 93
c_rt_lib0move(&___nl__im__29,___get_global_const(109));
#line 93
___nl__bool__22 = c_rt_lib0ne(___nl__im__27, ___nl__im__29);
#line 93
c_rt_lib0clear(&___nl__im__27);
#line 93
c_rt_lib0clear(&___nl__im__29);
#line 93
label_10:
;
#line 93
//clear ___nl__bool__24;
#line 93
___nl__bool__23 = !___nl__bool__22;
#line 93
if(___nl__bool__23){ goto label_9;}
#line 93
___nl__int__31 = 1;
#line 93
c_rt_lib0move(&___nl__im__30, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__31));
#line 93
//clear ___nl__int__31;
#line 93
c_rt_lib0move(&___nl__im__32,___get_global_const(113));
#line 93
___nl__bool__22 = c_rt_lib0ne(___nl__im__30, ___nl__im__32);
#line 93
c_rt_lib0clear(&___nl__im__30);
#line 93
c_rt_lib0clear(&___nl__im__32);
#line 93
label_9:
;
#line 93
//clear ___nl__bool__23;
#line 93
___nl__bool__22 = !___nl__bool__22;
#line 93
if(___nl__bool__22){ goto label_7;}
#line 94
___nl__int__34 = 1;
#line 94
c_rt_lib0move(&___nl__im__33, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__34));
#line 94
//clear ___nl__int__34;
#line 94
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__33, ___nl__im__21));
#line 94
c_rt_lib0clear(&___nl__im__33);
#line 95
___nl__int__35 = 1;
#line 95
___nl__int__1 = ___nl__int__1 - ___nl__int__35;
#line 95
//clear ___nl__int__35;
#line 96
goto label_8;
#line 96
label_7:
;
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
//clear ___nl__int__1;
#line 97
//clear ___nl__bool__4;
#line 97
//clear ___nl__bool__22;
#line 97
return ___nl__im__21;
}

bool interpreter_wrapper_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
#line 101
___nl__int__3 = string0length(___nl__im__1);
#line 101
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__3));
#line 101
//clear ___nl__int__3;
#line 102
___nl__int__5 = string0length(___nl__im__0);
#line 102
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 102
___nl__int__7 = ___nl__int__5 <= ___nl__int__6;
#line 102
___nl__bool__4 = ___nl__int__7;
#line 102
//clear ___nl__int__5;
#line 102
//clear ___nl__int__6;
#line 102
//clear ___nl__int__7;
#line 102
___nl__bool__4 = !___nl__bool__4;
#line 102
if(___nl__bool__4){ goto label_2;}
#line 102
___nl__bool__8 = false;
#line 102
c_rt_lib0clear(&___nl__im__0);
#line 102
c_rt_lib0clear(&___nl__im__1);
#line 102
c_rt_lib0clear(&___nl__im__2);
#line 102
//clear ___nl__bool__4;
#line 102
return ___nl__bool__8;
#line 102
goto label_1;
#line 102
label_2:
;
#line 102
label_1:
;
#line 102
//clear ___nl__bool__4;
#line 102
//clear ___nl__bool__8;
#line 103
___nl__int__10 = string0length(___nl__im__0);
#line 103
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 103
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 103
//clear ___nl__int__10;
#line 103
//clear ___nl__int__11;
#line 103
___nl__int__12 = getIntFromImm(___nl__im__2);
#line 103
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__9, ___nl__int__12));
#line 103
//clear ___nl__int__9;
#line 103
//clear ___nl__int__12;
#line 104
___nl__bool__13 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
return ___nl__bool__13;
}

ImmT  interpreter_wrapper_priv0get_all_nianio_file(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
#line 108
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 109
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 109
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 109
c_rt_lib0clear(&___nl__im__4);
#line 109
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 109
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 109
c_rt_lib0clear(&___nl__im__3);
#line 109
c_rt_lib0clear(&___nl__im__5);
#line 110
___nl__int__7 = 0;
#line 110
___nl__int__8 = 1;
#line 110
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 110
label_3:
;
#line 110
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 110
___nl__bool__10 = ___nl__int__11;
#line 110
if(___nl__bool__10){ goto label_1;}
#line 110
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 110
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 111
c_rt_lib0move(&___nl__im__14,___get_global_const(118));
#line 111
___nl__bool__13 = interpreter_wrapper_priv0has_extension(___nl__im__6, ___nl__im__14);
#line 111
c_rt_lib0clear(&___nl__im__14);
#line 111
___nl__bool__13 = !___nl__bool__13;
#line 111
if(___nl__bool__13){ goto label_5;}
#line 111
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 111
goto label_4;
#line 111
label_5:
;
#line 111
label_4:
;
#line 111
//clear ___nl__bool__13;
#line 111
c_rt_lib0clear(&___nl__im__6);
#line 111
label_2:
;
#line 112
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 112
goto label_3;
#line 112
label_1:
;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
//clear ___nl__int__7;
#line 113
//clear ___nl__int__8;
#line 113
//clear ___nl__int__9;
#line 113
//clear ___nl__bool__10;
#line 113
//clear ___nl__int__11;
#line 113
c_rt_lib0clear(&___nl__im__12);
#line 113
return ___nl__im__1;
}

interpreter_wrapper0module_t0type interpreter_wrapper_priv0get_files_to_parse(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
bool  ___nl__bool__27 = false;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
#line 117
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 118
___nl__int__3 = 0;
#line 118
___nl__int__4 = 1;
#line 118
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 118
label_3:
;
#line 118
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 118
___nl__bool__6 = ___nl__int__7;
#line 118
if(___nl__bool__6){ goto label_1;}
#line 118
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 118
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 119
c_rt_lib0move(&___nl__im__10,___get_global_const(118));
#line 119
___nl__bool__9 = interpreter_wrapper_priv0has_extension(___nl__im__2, ___nl__im__10);
#line 119
c_rt_lib0clear(&___nl__im__10);
#line 119
___nl__bool__9 = !___nl__bool__9;
#line 119
if(___nl__bool__9){ goto label_5;}
#line 120
c_rt_lib0move(&___nl__im__12, interpreter_wrapper_priv0get_dir(___nl__im__2));
#line 120
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(122), ___nl__im__12, ___get_global_const(120), ___nl__im__2));
#line 120
c_rt_lib0clear(&___nl__im__12);
#line 120
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__11));
#line 120
c_rt_lib0clear(&___nl__im__11);
#line 121
goto label_4;
#line 121
label_5:
;
#line 122
c_rt_lib0move(&___nl__im__13, interpreter_wrapper_priv0get_all_nianio_file(___nl__im__2));
#line 122
___nl__int__15 = 0;
#line 122
___nl__int__16 = 1;
#line 122
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 122
label_8:
;
#line 122
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 122
___nl__bool__18 = ___nl__int__19;
#line 122
if(___nl__bool__18){ goto label_6;}
#line 122
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 122
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 123
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(122), ___nl__im__2, ___get_global_const(120), ___nl__im__14));
#line 123
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__21));
#line 123
c_rt_lib0clear(&___nl__im__21);
#line 123
c_rt_lib0clear(&___nl__im__14);
#line 123
label_7:
;
#line 124
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 124
goto label_8;
#line 124
label_6:
;
#line 125
goto label_4;
#line 125
label_4:
;
#line 125
//clear ___nl__bool__9;
#line 125
c_rt_lib0clear(&___nl__im__13);
#line 125
c_rt_lib0clear(&___nl__im__14);
#line 125
//clear ___nl__int__15;
#line 125
//clear ___nl__int__16;
#line 125
//clear ___nl__int__17;
#line 125
//clear ___nl__bool__18;
#line 125
//clear ___nl__int__19;
#line 125
c_rt_lib0clear(&___nl__im__20);
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
label_2:
;
#line 126
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 126
goto label_3;
#line 126
label_1:
;
#line 127
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 128
___nl__int__24 = 0;
#line 128
___nl__int__25 = 1;
#line 128
___nl__int__26 = c_rt_lib0array_len(___nl__im__1);
#line 128
label_11:
;
#line 128
___nl__int__28 = ___nl__int__24 >= ___nl__int__26;
#line 128
___nl__bool__27 = ___nl__int__28;
#line 128
if(___nl__bool__27){ goto label_9;}
#line 128
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 128
c_rt_lib0copy(&___nl__im__23, ___nl__im__29);
#line 129
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(120)));
#line 129
c_rt_lib0move(&___nl__im__30, interpreter_wrapper_priv0get_module_name(___nl__im__31));
#line 129
c_rt_lib0clear(&___nl__im__31);
#line 130
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(120)));
#line 130
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(1, ___get_global_const(75), ___nl__im__33));
#line 130
c_rt_lib0clear(&___nl__im__33);
#line 131
c_rt_lib0delete(hash0set_value(&___nl__im__22, ___nl__im__30, ___nl__im__32));
#line 131
c_rt_lib0clear(&___nl__im__23);
#line 131
label_10:
;
#line 132
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 132
goto label_11;
#line 132
label_9:
;
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
c_rt_lib0clear(&___nl__im__1);
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
//clear ___nl__int__3;
#line 133
//clear ___nl__int__4;
#line 133
//clear ___nl__int__5;
#line 133
//clear ___nl__bool__6;
#line 133
//clear ___nl__int__7;
#line 133
c_rt_lib0clear(&___nl__im__8);
#line 133
c_rt_lib0clear(&___nl__im__23);
#line 133
//clear ___nl__int__24;
#line 133
//clear ___nl__int__25;
#line 133
//clear ___nl__int__26;
#line 133
//clear ___nl__bool__27;
#line 133
//clear ___nl__int__28;
#line 133
c_rt_lib0clear(&___nl__im__29);
#line 133
c_rt_lib0clear(&___nl__im__30);
#line 133
c_rt_lib0clear(&___nl__im__32);
#line 133
return ___nl__im__22;
}

ImmT  interpreter_wrapper_priv0parse_module(ImmT  ___nl__im__0,ImmT  ___nl__im__1,interpreter_wrapper0errors_group_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__string__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__string__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 140
c_rt_lib0move(&___nl__im__5,___get_global_const(123));
#line 140
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 140
c_rt_lib0clear(&___nl__im__5);
#line 140
c_rt_lib0move(&___nl__im__6,___get_global_const(124));
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 140
c_rt_lib0clear(&___nl__im__4);
#line 140
c_rt_lib0clear(&___nl__im__6);
#line 140
c_rt_lib0delete(c_fe_lib0print(___nl__im__3));
#line 140
c_rt_lib0clear(&___nl__im__3);
#line 141
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 141
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 141
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__12, ___get_global_const(79), ___nl__im__13));
#line 141
c_rt_lib0clear(&___nl__im__12);
#line 141
c_rt_lib0clear(&___nl__im__13);
#line 141
c_rt_lib0move(&___nl__im__10, ptd0var(___nl__im__11));
#line 141
c_rt_lib0clear(&___nl__im__11);
#line 141
c_rt_lib0move(&___nl__im__14, c_fe_lib0file_to_string(___nl__im__1));
#line 141
c_rt_lib0move(&___nl__im__9, ptd0ensure(___nl__im__10, ___nl__im__14));
#line 141
c_rt_lib0clear(&___nl__im__10);
#line 141
c_rt_lib0clear(&___nl__im__14);
#line 141
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 141
if(___nl__bool__8){ goto label_1;}
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
c_rt_lib0clear(&___nl__im__7);
#line 141
//clear ___nl__bool__8;
#line 141
return ___nl__im__9;
#line 141
label_1:
;
#line 141
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 142
___nl__bool__16 = false;
#line 142
c_rt_lib0move(&___nl__im__15, nparser0sparse(___nl__im__7, ___nl__im__0, ___nl__bool__16));
#line 142
//clear ___nl__bool__16;
#line 143
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(80));
#line 143
if(___nl__bool__17){ goto label_3;}
#line 145
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(125));
#line 145
if(___nl__bool__17){ goto label_4;}
#line 145
c_rt_lib0move(&___nl__im__18,___get_global_const(16));
#line 145
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__15));
#line 145
nl_die_arg(___nl__im__18);
#line 143
label_3:
;
#line 143
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(80)));
#line 143
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 144
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__19));
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
c_rt_lib0clear(&___nl__im__1);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
//clear ___nl__bool__8;
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
c_rt_lib0clear(&___nl__im__15);
#line 144
//clear ___nl__bool__17;
#line 144
c_rt_lib0clear(&___nl__im__18);
#line 144
c_rt_lib0clear(&___nl__im__19);
#line 144
c_rt_lib0clear(&___nl__im__20);
#line 144
return ___nl__im__21;
#line 145
goto label_2;
#line 145
label_4:
;
#line 145
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(125)));
#line 145
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 146
c_rt_lib0move(&___nl__im__24,___get_global_const(60));
#line 146
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__24));
#line 146
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 146
c_rt_lib0delete(hash0set_value(&___nl__im__24, ___nl__im__0, ___nl__im__25));
#line 146
c_rt_lib0move(&___nl__string__26,___get_global_const(60));
#line 146
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__26, ___nl__im__24));
#line 146
c_rt_lib0clear(&___nl__im__24);
#line 146
c_rt_lib0clear(&___nl__im__25);
#line 146
c_rt_lib0clear(&___nl__string__26);
#line 147
c_rt_lib0move(&___nl__im__27,___get_global_const(59));
#line 147
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__27));
#line 147
c_rt_lib0delete(hash0set_value(&___nl__im__27, ___nl__im__0, ___nl__im__22));
#line 147
c_rt_lib0move(&___nl__string__28,___get_global_const(59));
#line 147
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__28, ___nl__im__27));
#line 147
c_rt_lib0clear(&___nl__im__27);
#line 147
c_rt_lib0clear(&___nl__string__28);
#line 148
c_rt_lib0move(&___nl__im__30,___get_global_const(37));
#line 148
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__30));
#line 148
c_rt_lib0clear(&___nl__im__30);
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
c_rt_lib0clear(&___nl__im__7);
#line 148
//clear ___nl__bool__8;
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0clear(&___nl__im__15);
#line 148
//clear ___nl__bool__17;
#line 148
c_rt_lib0clear(&___nl__im__18);
#line 148
c_rt_lib0clear(&___nl__im__19);
#line 148
c_rt_lib0clear(&___nl__im__20);
#line 148
c_rt_lib0clear(&___nl__im__21);
#line 148
c_rt_lib0clear(&___nl__im__22);
#line 148
c_rt_lib0clear(&___nl__im__23);
#line 148
return ___nl__im__29;
#line 149
goto label_2;
#line 149
label_2:
;
}

ImmT  interpreter_wrapper_priv0construct_error_message(compiler_lib0error_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 153
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 157
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 157
___nl__int__4 = string0length(___nl__im__5);
#line 157
c_rt_lib0clear(&___nl__im__5);
#line 157
___nl__int__6 = 0;
#line 157
___nl__int__7 = ___nl__int__4 == ___nl__int__6;
#line 157
___nl__bool__3 = ___nl__int__7;
#line 157
//clear ___nl__int__4;
#line 157
//clear ___nl__int__6;
#line 157
//clear ___nl__int__7;
#line 157
___nl__bool__3 = !___nl__bool__3;
#line 157
___nl__bool__3 = !___nl__bool__3;
#line 157
if(___nl__bool__3){ goto label_2;}
#line 154
c_rt_lib0move(&___nl__im__9,___get_global_const(153));
#line 154
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 154
___nl__bool__11 = hash0has_key(___nl__im__1, ___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
if(___nl__bool__11){ goto label_4;}
#line 156
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 156
goto label_3;
#line 156
label_4:
;
#line 155
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 155
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__1, ___nl__im__14));
#line 155
c_rt_lib0clear(&___nl__im__14);
#line 155
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(75)));
#line 155
c_rt_lib0clear(&___nl__im__13);
#line 155
label_3:
;
#line 155
//clear ___nl__bool__11;
#line 155
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 155
c_rt_lib0clear(&___nl__im__9);
#line 155
c_rt_lib0clear(&___nl__im__10);
#line 155
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 155
c_rt_lib0clear(&___nl__im__8);
#line 155
goto label_1;
#line 155
label_2:
;
#line 155
label_1:
;
#line 155
//clear ___nl__bool__3;
#line 159
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(154)));
#line 159
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 159
c_rt_lib0clear(&___nl__im__17);
#line 159
c_rt_lib0move(&___nl__im__18,___get_global_const(41));
#line 159
c_rt_lib0move(&___nl__im__18, c_rt_lib0unary_minus(___nl__im__18));
#line 159
___nl__int__19 = getIntFromImm(___nl__im__18);
#line 159
___nl__int__20 = ___nl__int__16 == ___nl__int__19;
#line 159
___nl__bool__15 = ___nl__int__20;
#line 159
//clear ___nl__int__16;
#line 159
c_rt_lib0clear(&___nl__im__18);
#line 159
//clear ___nl__int__19;
#line 159
//clear ___nl__int__20;
#line 159
___nl__bool__15 = !___nl__bool__15;
#line 159
___nl__bool__15 = !___nl__bool__15;
#line 159
if(___nl__bool__15){ goto label_6;}
#line 158
c_rt_lib0move(&___nl__im__22,___get_global_const(155));
#line 158
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(154)));
#line 158
___nl__int__24 = getIntFromImm(___nl__im__25);
#line 158
c_rt_lib0clear(&___nl__im__25);
#line 158
c_rt_lib0move(&___nl__im__23, ptd0int_to_string(___nl__int__24));
#line 158
//clear ___nl__int__24;
#line 158
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 158
c_rt_lib0clear(&___nl__im__22);
#line 158
c_rt_lib0clear(&___nl__im__23);
#line 158
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__21));
#line 158
c_rt_lib0clear(&___nl__im__21);
#line 158
goto label_5;
#line 158
label_6:
;
#line 158
label_5:
;
#line 158
//clear ___nl__bool__15;
#line 160
c_rt_lib0move(&___nl__im__28, string0lf());
#line 160
c_rt_lib0move(&___nl__im__29,___get_global_const(156));
#line 160
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 160
c_rt_lib0clear(&___nl__im__28);
#line 160
c_rt_lib0clear(&___nl__im__29);
#line 160
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(157)));
#line 160
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 160
c_rt_lib0clear(&___nl__im__27);
#line 160
c_rt_lib0clear(&___nl__im__30);
#line 160
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 160
c_rt_lib0clear(&___nl__im__26);
#line 161
c_rt_lib0clear(&___nl__im__0);
#line 161
c_rt_lib0clear(&___nl__im__1);
#line 161
return ___nl__im__2;
}

INT  interpreter_wrapper_priv0show_and_count_errors(interpreter_wrapper0errors_group_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
interpreter_wrapper_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
#line 165
___nl__int__2 = 0;
#line 166
___nl__int__3 = 0;
#line 167
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(60)));
#line 167
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__4));
#line 167
label_3:
;
#line 167
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 167
if(___nl__bool__6){ goto label_1;}
#line 167
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 167
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__5));
#line 168
c_rt_lib0move(&___nl__im__9,___get_global_const(158));
#line 169
___nl__int__11 = 0;
#line 169
___nl__int__12 = 1;
#line 169
___nl__int__13 = c_rt_lib0array_len(___nl__im__7);
#line 169
label_6:
;
#line 169
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 169
___nl__bool__14 = ___nl__int__15;
#line 169
if(___nl__bool__14){ goto label_4;}
#line 169
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 169
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 170
c_rt_lib0move(&___nl__im__18, interpreter_wrapper_priv0construct_error_message(___nl__im__10, ___nl__im__1));
#line 170
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 170
c_rt_lib0clear(&___nl__im__18);
#line 170
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 170
c_rt_lib0clear(&___nl__im__17);
#line 170
c_rt_lib0clear(&___nl__im__10);
#line 170
label_5:
;
#line 171
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 171
goto label_6;
#line 171
label_4:
;
#line 172
___nl__int__19 = c_rt_lib0array_len(___nl__im__7);
#line 172
___nl__int__2 = ___nl__int__2 + ___nl__int__19;
#line 172
//clear ___nl__int__19;
#line 173
c_rt_lib0move(&___nl__im__9,___get_global_const(159));
#line 174
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(59)));
#line 174
c_rt_lib0move(&___nl__im__20, hash0get_value(___nl__im__21, ___nl__im__5));
#line 174
c_rt_lib0clear(&___nl__im__21);
#line 175
___nl__int__23 = 0;
#line 175
___nl__int__24 = 1;
#line 175
___nl__int__25 = c_rt_lib0array_len(___nl__im__20);
#line 175
label_9:
;
#line 175
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 175
___nl__bool__26 = ___nl__int__27;
#line 175
if(___nl__bool__26){ goto label_7;}
#line 175
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__20, ___nl__int__23));
#line 175
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 176
c_rt_lib0move(&___nl__im__30,___get_global_const(159));
#line 176
c_rt_lib0move(&___nl__im__31, interpreter_wrapper_priv0construct_error_message(___nl__im__22, ___nl__im__1));
#line 176
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 176
c_rt_lib0clear(&___nl__im__30);
#line 176
c_rt_lib0clear(&___nl__im__31);
#line 176
c_rt_lib0delete(c_fe_lib0print(___nl__im__29));
#line 176
c_rt_lib0clear(&___nl__im__29);
#line 176
c_rt_lib0clear(&___nl__im__22);
#line 176
label_8:
;
#line 177
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 177
goto label_9;
#line 177
label_7:
;
#line 178
___nl__int__32 = c_rt_lib0array_len(___nl__im__20);
#line 178
___nl__int__3 = ___nl__int__3 + ___nl__int__32;
#line 178
//clear ___nl__int__32;
#line 178
c_rt_lib0clear(&___nl__im__9);
#line 178
c_rt_lib0clear(&___nl__im__10);
#line 178
//clear ___nl__int__11;
#line 178
//clear ___nl__int__12;
#line 178
//clear ___nl__int__13;
#line 178
//clear ___nl__bool__14;
#line 178
//clear ___nl__int__15;
#line 178
c_rt_lib0clear(&___nl__im__16);
#line 178
c_rt_lib0clear(&___nl__im__20);
#line 178
c_rt_lib0clear(&___nl__im__22);
#line 178
//clear ___nl__int__23;
#line 178
//clear ___nl__int__24;
#line 178
//clear ___nl__int__25;
#line 178
//clear ___nl__bool__26;
#line 178
//clear ___nl__int__27;
#line 178
c_rt_lib0clear(&___nl__im__28);
#line 178
label_2:
;
#line 179
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 179
goto label_3;
#line 179
label_1:
;
#line 180
c_rt_lib0move(&___nl__im__36,___get_global_const(164));
#line 180
c_rt_lib0move(&___nl__im__37, ptd0int_to_string(___nl__int__3));
#line 180
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 180
c_rt_lib0clear(&___nl__im__36);
#line 180
c_rt_lib0clear(&___nl__im__37);
#line 181
c_rt_lib0move(&___nl__im__38,___get_global_const(165));
#line 181
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__38));
#line 181
c_rt_lib0clear(&___nl__im__35);
#line 181
c_rt_lib0clear(&___nl__im__38);
#line 181
c_rt_lib0move(&___nl__im__39, ptd0int_to_string(___nl__int__2));
#line 181
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__39));
#line 181
c_rt_lib0clear(&___nl__im__34);
#line 181
c_rt_lib0clear(&___nl__im__39);
#line 181
c_rt_lib0delete(c_fe_lib0print(___nl__im__33));
#line 181
c_rt_lib0clear(&___nl__im__33);
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__int__2;
#line 182
c_rt_lib0clear(&___nl__im__4);
#line 182
c_rt_lib0clear(&___nl__im__5);
#line 182
//clear ___nl__bool__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
c_rt_lib0clear(&___nl__im__8);
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
c_rt_lib0clear(&___nl__im__10);
#line 182
//clear ___nl__int__11;
#line 182
//clear ___nl__int__12;
#line 182
//clear ___nl__int__13;
#line 182
//clear ___nl__bool__14;
#line 182
//clear ___nl__int__15;
#line 182
c_rt_lib0clear(&___nl__im__16);
#line 182
c_rt_lib0clear(&___nl__im__20);
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
//clear ___nl__int__23;
#line 182
//clear ___nl__int__24;
#line 182
//clear ___nl__int__25;
#line 182
//clear ___nl__bool__26;
#line 182
//clear ___nl__int__27;
#line 182
c_rt_lib0clear(&___nl__im__28);
#line 182
return ___nl__int__3;
}

ImmT  interpreter_wrapper_priv0translate(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 186
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 187
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 187
label_3:
;
#line 187
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 187
if(___nl__bool__3){ goto label_1;}
#line 187
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 187
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 188
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 188
c_rt_lib0move(&___nl__im__6, translator0translate(___nl__im__4, ___nl__im__7));
#line 188
c_rt_lib0clear(&___nl__im__7);
#line 189
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 189
c_rt_lib0clear(&___nl__im__6);
#line 189
label_2:
;
#line 190
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 190
goto label_3;
#line 190
label_1:
;
#line 191
c_rt_lib0clear(&___nl__im__0);
#line 191
c_rt_lib0clear(&___nl__im__2);
#line 191
//clear ___nl__bool__3;
#line 191
c_rt_lib0clear(&___nl__im__4);
#line 191
c_rt_lib0clear(&___nl__im__5);
#line 191
c_rt_lib0clear(&___nl__im__6);
#line 191
return ___nl__im__1;
}

ImmT  interpreter_wrapper_priv0get_dir(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
#line 195
___nl__int__2 = string0length(___nl__im__0);
#line 195
___nl__int__3 = 1;
#line 195
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 195
//clear ___nl__int__2;
#line 195
//clear ___nl__int__3;
#line 196
___nl__int__7 = 1;
#line 196
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__7));
#line 196
//clear ___nl__int__7;
#line 196
c_rt_lib0move(&___nl__im__8,___get_global_const(109));
#line 196
___nl__bool__4 = c_rt_lib0eq(___nl__im__6, ___nl__im__8);
#line 196
c_rt_lib0clear(&___nl__im__6);
#line 196
c_rt_lib0clear(&___nl__im__8);
#line 196
if(___nl__bool__4){ goto label_3;}
#line 196
___nl__int__10 = 1;
#line 196
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 196
//clear ___nl__int__10;
#line 196
c_rt_lib0move(&___nl__im__11,___get_global_const(113));
#line 196
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 196
c_rt_lib0clear(&___nl__im__9);
#line 196
c_rt_lib0clear(&___nl__im__11);
#line 196
label_3:
;
#line 196
//clear ___nl__bool__5;
#line 196
___nl__bool__4 = !___nl__bool__4;
#line 196
if(___nl__bool__4){ goto label_2;}
#line 196
___nl__int__12 = 1;
#line 196
___nl__int__1 = ___nl__int__1 - ___nl__int__12;
#line 196
//clear ___nl__int__12;
#line 196
goto label_1;
#line 196
label_2:
;
#line 196
label_1:
;
#line 196
//clear ___nl__bool__4;
#line 197
label_5:
;
#line 197
___nl__int__16 = 0;
#line 197
___nl__int__17 = ___nl__int__1 >= ___nl__int__16;
#line 197
___nl__bool__13 = ___nl__int__17;
#line 197
//clear ___nl__int__16;
#line 197
//clear ___nl__int__17;
#line 197
___nl__bool__15 = !___nl__bool__13;
#line 197
if(___nl__bool__15){ goto label_7;}
#line 197
___nl__int__19 = 1;
#line 197
c_rt_lib0move(&___nl__im__18, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__19));
#line 197
//clear ___nl__int__19;
#line 197
c_rt_lib0move(&___nl__im__20,___get_global_const(109));
#line 197
___nl__bool__13 = c_rt_lib0ne(___nl__im__18, ___nl__im__20);
#line 197
c_rt_lib0clear(&___nl__im__18);
#line 197
c_rt_lib0clear(&___nl__im__20);
#line 197
label_7:
;
#line 197
//clear ___nl__bool__15;
#line 197
___nl__bool__14 = !___nl__bool__13;
#line 197
if(___nl__bool__14){ goto label_6;}
#line 197
___nl__int__22 = 1;
#line 197
c_rt_lib0move(&___nl__im__21, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__22));
#line 197
//clear ___nl__int__22;
#line 197
c_rt_lib0move(&___nl__im__23,___get_global_const(113));
#line 197
___nl__bool__13 = c_rt_lib0ne(___nl__im__21, ___nl__im__23);
#line 197
c_rt_lib0clear(&___nl__im__21);
#line 197
c_rt_lib0clear(&___nl__im__23);
#line 197
label_6:
;
#line 197
//clear ___nl__bool__14;
#line 197
___nl__bool__13 = !___nl__bool__13;
#line 197
if(___nl__bool__13){ goto label_4;}
#line 197
___nl__int__24 = 1;
#line 197
___nl__int__1 = ___nl__int__1 - ___nl__int__24;
#line 197
//clear ___nl__int__24;
#line 197
goto label_5;
#line 197
label_4:
;
#line 198
___nl__int__26 = 0;
#line 198
___nl__int__27 = ___nl__int__1 <= ___nl__int__26;
#line 198
___nl__bool__25 = ___nl__int__27;
#line 198
//clear ___nl__int__26;
#line 198
//clear ___nl__int__27;
#line 198
___nl__bool__25 = !___nl__bool__25;
#line 198
if(___nl__bool__25){ goto label_9;}
#line 198
c_rt_lib0move(&___nl__im__28,___get_global_const(114));
#line 198
c_rt_lib0clear(&___nl__im__0);
#line 198
//clear ___nl__int__1;
#line 198
//clear ___nl__bool__13;
#line 198
//clear ___nl__bool__25;
#line 198
return ___nl__im__28;
#line 198
goto label_8;
#line 198
label_9:
;
#line 198
label_8:
;
#line 198
//clear ___nl__bool__25;
#line 198
c_rt_lib0clear(&___nl__im__28);
#line 199
___nl__int__30 = 0;
#line 199
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__0, ___nl__int__30, ___nl__int__1));
#line 199
//clear ___nl__int__30;
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
//clear ___nl__int__1;
#line 199
//clear ___nl__bool__13;
#line 199
return ___nl__im__29;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void interpreter_wrapper_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT interpreter_wrapper_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT interpreter_wrapper_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
