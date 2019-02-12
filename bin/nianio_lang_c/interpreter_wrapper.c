
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
bool  interpreter_wrapper_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
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
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(53), ___get_global_const(54)));
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 20
c_rt_lib0move(&___nl__im__1, ptd0arr(___nl__im__2));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
return ___nl__im__0;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
return NULL;
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
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_const(900), ___get_global_const(56)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_const(900), ___get_global_const(56)));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 26
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(59), ___nl__im__2, ___get_global_const(60), ___nl__im__3));
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__3);
#line 26
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
return ___nl__im__0;
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
return NULL;
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
#line 31
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 31
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(1, ___get_global_const(74), ___nl__im__3));
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
return ___nl__im__0;
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
return NULL;
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
#line 35
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 36
c_rt_lib0move(&___nl__im__1,___get_global_const(901));
#line 36
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_const(68), ___get_global_const(902)));
#line 36
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(761)));
#line 36
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 36
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__6));
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(77)));
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__im__3, ___get_global_const(205), ___nl__im__4, ___get_global_const(265), ___nl__im__5, ___get_global_const(246), ___nl__im__7));
#line 36
c_rt_lib0clear(&___nl__im__3);
#line 36
c_rt_lib0clear(&___nl__im__4);
#line 36
c_rt_lib0clear(&___nl__im__5);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 36
c_rt_lib0clear(&___nl__im__1);
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 37
return ___nl__im__0;
return NULL;
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
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
#line 42
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 43
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 44
___nl__int__3 = 1;
#line 44
label_2:
;
#line 44
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 44
___nl__int__6 = ___nl__int__3 < ___nl__int__5;
#line 44
___nl__bool__4 = ___nl__int__6;
#line 44
//clear ___nl__int__5;
#line 44
//clear ___nl__int__6;
#line 44
___nl__bool__4 = !___nl__bool__4;
#line 44
if(___nl__bool__4){ goto label_1;}
#line 45
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 45
c_rt_lib0move(&___nl__im__9,___get_global_const(190));
#line 45
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 45
c_rt_lib0clear(&___nl__im__8);
#line 45
c_rt_lib0clear(&___nl__im__9);
#line 45
___nl__bool__7 = !___nl__bool__7;
#line 45
if(___nl__bool__7){ goto label_5;}
#line 46
___nl__int__11 = 1;
#line 46
___nl__int__10 = ___nl__int__3 + ___nl__int__11;
#line 46
//clear ___nl__int__11;
#line 46
___nl__int__14 = c_rt_lib0array_len(___nl__im__0);
#line 46
___nl__int__13 = ___nl__int__14 - ___nl__int__3;
#line 46
//clear ___nl__int__14;
#line 46
___nl__int__15 = 1;
#line 46
___nl__int__12 = ___nl__int__13 - ___nl__int__15;
#line 46
//clear ___nl__int__13;
#line 46
//clear ___nl__int__15;
#line 46
c_rt_lib0move(&___nl__im__2, array0subarray(___nl__im__0, ___nl__int__10, ___nl__int__12));
#line 46
//clear ___nl__int__10;
#line 46
//clear ___nl__int__12;
#line 47
goto label_1;
#line 48
goto label_4;
#line 48
label_5:
;
#line 48
label_4:
;
#line 48
//clear ___nl__bool__7;
#line 49
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 49
c_rt_lib0array_push(&___nl__im__1, ___nl__im__16);
#line 49
c_rt_lib0clear(&___nl__im__16);
#line 44
___nl__int__17 = 1;
#line 44
___nl__int__3 = ___nl__int__3 + ___nl__int__17;
#line 44
//clear ___nl__int__17;
#line 50
goto label_2;
#line 50
label_1:
;
#line 51
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__2));
#line 51
___nl__int__18 = interpreter_wrapper0exec_interpreter(___nl__im__1, ___nl__im__19);
#line 51
c_rt_lib0clear(&___nl__im__19);
#line 51
c_rt_lib0clear(&___nl__im__0);
#line 51
c_rt_lib0clear(&___nl__im__1);
#line 51
c_rt_lib0clear(&___nl__im__2);
#line 51
//clear ___nl__int__3;
#line 51
//clear ___nl__bool__4;
#line 51
return ___nl__int__18;
return 0;
}

INT  interpreter_wrapper0exec_interpreter0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "interpreter_wrapper0exec_interpreter");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return interpreter_wrapper0exec_interpreter(*var0, *var1);
}
INT  interpreter_wrapper0exec_interpreter(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
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
#line 56
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 58
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 59
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 59
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(59), ___nl__im__4, ___get_global_const(60), ___nl__im__5));
#line 59
c_rt_lib0clear(&___nl__im__4);
#line 59
c_rt_lib0clear(&___nl__im__5);
#line 61
___nl__int__6 = 0;
#line 62
c_rt_lib0move(&___nl__im__7, interpreter_wrapper_priv0get_files_to_parse(___nl__im__0));
#line 63
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__7));
#line 63
label_3:
;
#line 63
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 63
if(___nl__bool__9){ goto label_1;}
#line 63
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 63
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__7, ___nl__im__8));
#line 64
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(74)));
#line 64
c_rt_lib0move(&___nl__im__12, interpreter_wrapper_priv0parse_module(___nl__im__8, ___nl__im__13, &___nl__im__3));
#line 64
c_rt_lib0clear(&___nl__im__13);
#line 64
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(79));
#line 64
if(___nl__bool__14){ goto label_5;}
#line 66
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(78));
#line 66
if(___nl__bool__14){ goto label_6;}
#line 66
c_rt_lib0move(&___nl__im__15,___get_global_const(16));
#line 66
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 66
nl_die_arg(___nl__im__15);
#line 64
label_5:
;
#line 64
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(79)));
#line 64
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 65
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__8, ___nl__im__16));
#line 66
goto label_4;
#line 66
label_6:
;
#line 66
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(78)));
#line 66
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 67
___nl__int__20 = 1;
#line 67
___nl__int__6 = ___nl__int__6 + ___nl__int__20;
#line 67
//clear ___nl__int__20;
#line 68
goto label_4;
#line 68
label_4:
;
#line 68
c_rt_lib0clear(&___nl__im__12);
#line 68
//clear ___nl__bool__14;
#line 68
c_rt_lib0clear(&___nl__im__15);
#line 68
c_rt_lib0clear(&___nl__im__16);
#line 68
c_rt_lib0clear(&___nl__im__17);
#line 68
c_rt_lib0clear(&___nl__im__18);
#line 68
c_rt_lib0clear(&___nl__im__19);
#line 69
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 69
goto label_3;
#line 69
label_1:
;
#line 70
___nl__int__22 = 0;
#line 70
___nl__int__23 = ___nl__int__6 != ___nl__int__22;
#line 70
___nl__bool__21 = ___nl__int__23;
#line 70
//clear ___nl__int__22;
#line 70
//clear ___nl__int__23;
#line 70
___nl__bool__21 = !___nl__bool__21;
#line 70
if(___nl__bool__21){ goto label_8;}
#line 71
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 71
interpreter_wrapper_priv0show_and_count_errors(___nl__im__3, ___nl__im__24);
#line 71
c_rt_lib0clear(&___nl__im__24);
#line 72
___nl__int__25 = 1;
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
c_rt_lib0clear(&___nl__im__1);
#line 72
c_rt_lib0clear(&___nl__im__2);
#line 72
c_rt_lib0clear(&___nl__im__3);
#line 72
//clear ___nl__int__6;
#line 72
c_rt_lib0clear(&___nl__im__7);
#line 72
c_rt_lib0clear(&___nl__im__8);
#line 72
//clear ___nl__bool__9;
#line 72
c_rt_lib0clear(&___nl__im__10);
#line 72
c_rt_lib0clear(&___nl__im__11);
#line 72
c_rt_lib0clear(&___nl__im__12);
#line 72
//clear ___nl__bool__14;
#line 72
c_rt_lib0clear(&___nl__im__15);
#line 72
c_rt_lib0clear(&___nl__im__16);
#line 72
c_rt_lib0clear(&___nl__im__17);
#line 72
c_rt_lib0clear(&___nl__im__18);
#line 72
c_rt_lib0clear(&___nl__im__19);
#line 72
//clear ___nl__bool__21;
#line 72
return ___nl__int__25;
#line 73
goto label_7;
#line 73
label_8:
;
#line 73
label_7:
;
#line 73
//clear ___nl__bool__21;
#line 73
//clear ___nl__int__25;
#line 74
c_rt_lib0move(&___nl__im__26, interpreter_wrapper_priv0translate(___nl__im__2));
#line 75
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 76
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 77
c_rt_lib0move(&___nl__im__32, c_rt_lib0init_iter(___nl__im__26));
#line 77
label_11:
;
#line 77
___nl__bool__30 = c_rt_lib0is_end_hash(___nl__im__32);
#line 77
if(___nl__bool__30){ goto label_9;}
#line 77
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_key_iter(___nl__im__32));
#line 77
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value(___nl__im__26, ___nl__im__29));
#line 78
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_const(208)));
#line 78
___nl__int__35 = 0;
#line 78
___nl__int__36 = 1;
#line 78
___nl__int__37 = c_rt_lib0array_len(___nl__im__33);
#line 78
label_14:
;
#line 78
___nl__int__39 = ___nl__int__35 >= ___nl__int__37;
#line 78
___nl__bool__38 = ___nl__int__39;
#line 78
if(___nl__bool__38){ goto label_12;}
#line 78
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__33, ___nl__int__35));
#line 78
c_rt_lib0copy(&___nl__im__34, ___nl__im__40);
#line 79
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(167)));
#line 79
c_rt_lib0move(&___nl__im__43,___get_global_const(145));
#line 79
___nl__bool__41 = c_rt_lib0eq(___nl__im__42, ___nl__im__43);
#line 79
c_rt_lib0clear(&___nl__im__42);
#line 79
c_rt_lib0clear(&___nl__im__43);
#line 79
___nl__bool__41 = !___nl__bool__41;
#line 79
if(___nl__bool__41){ goto label_16;}
#line 80
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 81
goto label_15;
#line 81
label_16:
;
#line 81
label_15:
;
#line 81
//clear ___nl__bool__41;
#line 81
c_rt_lib0clear(&___nl__im__34);
#line 82
___nl__int__35 = ___nl__int__35 + ___nl__int__36;
#line 82
goto label_14;
#line 82
label_12:
;
#line 83
c_rt_lib0delete(array0push(&___nl__im__27, ___nl__im__31));
#line 83
c_rt_lib0clear(&___nl__im__33);
#line 83
c_rt_lib0clear(&___nl__im__34);
#line 83
//clear ___nl__int__35;
#line 83
//clear ___nl__int__36;
#line 83
//clear ___nl__int__37;
#line 83
//clear ___nl__bool__38;
#line 83
//clear ___nl__int__39;
#line 83
c_rt_lib0clear(&___nl__im__40);
#line 84
c_rt_lib0move(&___nl__im__32, c_rt_lib0next_iter(___nl__im__32));
#line 84
goto label_11;
#line 84
label_9:
;
#line 85
c_rt_lib0move(&___nl__im__45, interpreter_wrapper_priv0get_known_func());
#line 85
c_rt_lib0move(&___nl__im__44, interpreter0init(___nl__im__27, ___nl__im__45));
#line 85
c_rt_lib0clear(&___nl__im__45);
#line 86
c_rt_lib0move(&___nl__im__48,___get_global_const(145));
#line 86
c_rt_lib0move(&___nl__im__47, interpreter0start_args(&___nl__im__44, ___nl__im__48, ___nl__im__28, ___nl__im__1));
#line 86
c_rt_lib0clear(&___nl__im__48);
#line 86
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__47, ___get_global_const(79));
#line 86
if(___nl__bool__46){ goto label_17;}
#line 86
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__47));
#line 86
nl_die_arg(___nl__im__47);
#line 86
label_17:
;
#line 87
c_rt_lib0move(&___nl__im__50, interpreter0exec_all_code(___nl__im__44));
#line 87
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(79));
#line 87
if(___nl__bool__49){ goto label_18;}
#line 87
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__50));
#line 87
nl_die_arg(___nl__im__50);
#line 87
label_18:
;
#line 88
___nl__int__51 = 0;
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
c_rt_lib0clear(&___nl__im__1);
#line 88
c_rt_lib0clear(&___nl__im__2);
#line 88
c_rt_lib0clear(&___nl__im__3);
#line 88
//clear ___nl__int__6;
#line 88
c_rt_lib0clear(&___nl__im__7);
#line 88
c_rt_lib0clear(&___nl__im__8);
#line 88
//clear ___nl__bool__9;
#line 88
c_rt_lib0clear(&___nl__im__10);
#line 88
c_rt_lib0clear(&___nl__im__11);
#line 88
c_rt_lib0clear(&___nl__im__12);
#line 88
//clear ___nl__bool__14;
#line 88
c_rt_lib0clear(&___nl__im__15);
#line 88
c_rt_lib0clear(&___nl__im__16);
#line 88
c_rt_lib0clear(&___nl__im__17);
#line 88
c_rt_lib0clear(&___nl__im__18);
#line 88
c_rt_lib0clear(&___nl__im__19);
#line 88
c_rt_lib0clear(&___nl__im__26);
#line 88
c_rt_lib0clear(&___nl__im__27);
#line 88
c_rt_lib0clear(&___nl__im__28);
#line 88
c_rt_lib0clear(&___nl__im__29);
#line 88
//clear ___nl__bool__30;
#line 88
c_rt_lib0clear(&___nl__im__31);
#line 88
c_rt_lib0clear(&___nl__im__32);
#line 88
c_rt_lib0clear(&___nl__im__33);
#line 88
c_rt_lib0clear(&___nl__im__34);
#line 88
//clear ___nl__int__35;
#line 88
//clear ___nl__int__36;
#line 88
//clear ___nl__int__37;
#line 88
//clear ___nl__bool__38;
#line 88
//clear ___nl__int__39;
#line 88
c_rt_lib0clear(&___nl__im__40);
#line 88
c_rt_lib0clear(&___nl__im__44);
#line 88
//clear ___nl__bool__46;
#line 88
c_rt_lib0clear(&___nl__im__47);
#line 88
//clear ___nl__bool__49;
#line 88
c_rt_lib0clear(&___nl__im__50);
#line 88
return ___nl__int__51;
return 0;
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
#line 92
___nl__int__2 = string0length(___nl__im__0);
#line 92
___nl__int__3 = 1;
#line 92
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 92
//clear ___nl__int__2;
#line 92
//clear ___nl__int__3;
#line 93
label_2:
;
#line 93
___nl__int__7 = 0;
#line 93
___nl__int__8 = ___nl__int__1 >= ___nl__int__7;
#line 93
___nl__bool__4 = ___nl__int__8;
#line 93
//clear ___nl__int__7;
#line 93
//clear ___nl__int__8;
#line 93
___nl__bool__6 = !___nl__bool__4;
#line 93
if(___nl__bool__6){ goto label_4;}
#line 93
___nl__int__10 = 1;
#line 93
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 93
//clear ___nl__int__10;
#line 93
c_rt_lib0move(&___nl__im__11,___get_global_const(106));
#line 93
___nl__bool__4 = c_rt_lib0ne(___nl__im__9, ___nl__im__11);
#line 93
c_rt_lib0clear(&___nl__im__9);
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
label_4:
;
#line 93
//clear ___nl__bool__6;
#line 93
___nl__bool__5 = !___nl__bool__4;
#line 93
if(___nl__bool__5){ goto label_3;}
#line 93
___nl__int__13 = 1;
#line 93
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__13));
#line 93
//clear ___nl__int__13;
#line 93
c_rt_lib0move(&___nl__im__14,___get_global_const(110));
#line 93
___nl__bool__4 = c_rt_lib0ne(___nl__im__12, ___nl__im__14);
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
c_rt_lib0clear(&___nl__im__14);
#line 93
label_3:
;
#line 93
//clear ___nl__bool__5;
#line 93
___nl__bool__4 = !___nl__bool__4;
#line 93
if(___nl__bool__4){ goto label_1;}
#line 94
___nl__int__17 = 1;
#line 94
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 94
//clear ___nl__int__17;
#line 94
c_rt_lib0move(&___nl__im__18,___get_global_const(111));
#line 94
___nl__bool__15 = c_rt_lib0eq(___nl__im__16, ___nl__im__18);
#line 94
c_rt_lib0clear(&___nl__im__16);
#line 94
c_rt_lib0clear(&___nl__im__18);
#line 94
___nl__bool__15 = !___nl__bool__15;
#line 94
if(___nl__bool__15){ goto label_6;}
#line 95
___nl__int__19 = 1;
#line 95
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 95
//clear ___nl__int__19;
#line 96
goto label_1;
#line 97
goto label_5;
#line 97
label_6:
;
#line 97
label_5:
;
#line 97
//clear ___nl__bool__15;
#line 98
___nl__int__20 = 1;
#line 98
___nl__int__1 = ___nl__int__1 - ___nl__int__20;
#line 98
//clear ___nl__int__20;
#line 99
goto label_2;
#line 99
label_1:
;
#line 100
c_rt_lib0move(&___nl__im__21,___get_global_const(37));
#line 101
label_8:
;
#line 101
___nl__int__25 = 0;
#line 101
___nl__int__26 = ___nl__int__1 >= ___nl__int__25;
#line 101
___nl__bool__22 = ___nl__int__26;
#line 101
//clear ___nl__int__25;
#line 101
//clear ___nl__int__26;
#line 101
___nl__bool__24 = !___nl__bool__22;
#line 101
if(___nl__bool__24){ goto label_10;}
#line 101
___nl__int__28 = 1;
#line 101
c_rt_lib0move(&___nl__im__27, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__28));
#line 101
//clear ___nl__int__28;
#line 101
c_rt_lib0move(&___nl__im__29,___get_global_const(106));
#line 101
___nl__bool__22 = c_rt_lib0ne(___nl__im__27, ___nl__im__29);
#line 101
c_rt_lib0clear(&___nl__im__27);
#line 101
c_rt_lib0clear(&___nl__im__29);
#line 101
label_10:
;
#line 101
//clear ___nl__bool__24;
#line 101
___nl__bool__23 = !___nl__bool__22;
#line 101
if(___nl__bool__23){ goto label_9;}
#line 101
___nl__int__31 = 1;
#line 101
c_rt_lib0move(&___nl__im__30, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__31));
#line 101
//clear ___nl__int__31;
#line 101
c_rt_lib0move(&___nl__im__32,___get_global_const(110));
#line 101
___nl__bool__22 = c_rt_lib0ne(___nl__im__30, ___nl__im__32);
#line 101
c_rt_lib0clear(&___nl__im__30);
#line 101
c_rt_lib0clear(&___nl__im__32);
#line 101
label_9:
;
#line 101
//clear ___nl__bool__23;
#line 101
___nl__bool__22 = !___nl__bool__22;
#line 101
if(___nl__bool__22){ goto label_7;}
#line 102
___nl__int__34 = 1;
#line 102
c_rt_lib0move(&___nl__im__33, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__34));
#line 102
//clear ___nl__int__34;
#line 102
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__33, ___nl__im__21));
#line 102
c_rt_lib0clear(&___nl__im__33);
#line 103
___nl__int__35 = 1;
#line 103
___nl__int__1 = ___nl__int__1 - ___nl__int__35;
#line 103
//clear ___nl__int__35;
#line 104
goto label_8;
#line 104
label_7:
;
#line 105
c_rt_lib0clear(&___nl__im__0);
#line 105
//clear ___nl__int__1;
#line 105
//clear ___nl__bool__4;
#line 105
//clear ___nl__bool__22;
#line 105
return ___nl__im__21;
return NULL;
}

bool  interpreter_wrapper_priv0has_extension(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
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
#line 109
___nl__int__3 = string0length(___nl__im__1);
#line 109
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__3));
#line 109
//clear ___nl__int__3;
#line 110
___nl__int__5 = string0length(___nl__im__0);
#line 110
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 110
___nl__int__7 = ___nl__int__5 <= ___nl__int__6;
#line 110
___nl__bool__4 = ___nl__int__7;
#line 110
//clear ___nl__int__5;
#line 110
//clear ___nl__int__6;
#line 110
//clear ___nl__int__7;
#line 110
___nl__bool__4 = !___nl__bool__4;
#line 110
if(___nl__bool__4){ goto label_2;}
#line 110
___nl__bool__8 = false;
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
c_rt_lib0clear(&___nl__im__1);
#line 110
c_rt_lib0clear(&___nl__im__2);
#line 110
//clear ___nl__bool__4;
#line 110
return ___nl__bool__8;
#line 110
goto label_1;
#line 110
label_2:
;
#line 110
label_1:
;
#line 110
//clear ___nl__bool__4;
#line 110
//clear ___nl__bool__8;
#line 111
___nl__int__10 = string0length(___nl__im__0);
#line 111
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 111
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 111
//clear ___nl__int__10;
#line 111
//clear ___nl__int__11;
#line 111
___nl__int__12 = getIntFromImm(___nl__im__2);
#line 111
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__9, ___nl__int__12));
#line 111
//clear ___nl__int__9;
#line 111
//clear ___nl__int__12;
#line 112
___nl__bool__13 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 112
c_rt_lib0clear(&___nl__im__0);
#line 112
c_rt_lib0clear(&___nl__im__1);
#line 112
c_rt_lib0clear(&___nl__im__2);
#line 112
return ___nl__bool__13;
return false;
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
#line 116
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 117
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 117
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 117
c_rt_lib0clear(&___nl__im__4);
#line 117
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 117
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 117
c_rt_lib0clear(&___nl__im__3);
#line 117
c_rt_lib0clear(&___nl__im__5);
#line 118
___nl__int__7 = 0;
#line 118
___nl__int__8 = 1;
#line 118
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 118
label_3:
;
#line 118
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 118
___nl__bool__10 = ___nl__int__11;
#line 118
if(___nl__bool__10){ goto label_1;}
#line 118
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 118
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 119
c_rt_lib0move(&___nl__im__14,___get_global_const(116));
#line 119
___nl__bool__13 = interpreter_wrapper_priv0has_extension(___nl__im__6, ___nl__im__14);
#line 119
c_rt_lib0clear(&___nl__im__14);
#line 119
___nl__bool__13 = !___nl__bool__13;
#line 119
if(___nl__bool__13){ goto label_5;}
#line 119
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 119
goto label_4;
#line 119
label_5:
;
#line 119
label_4:
;
#line 119
//clear ___nl__bool__13;
#line 119
c_rt_lib0clear(&___nl__im__6);
#line 120
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 120
goto label_3;
#line 120
label_1:
;
#line 121
c_rt_lib0clear(&___nl__im__0);
#line 121
c_rt_lib0clear(&___nl__im__2);
#line 121
c_rt_lib0clear(&___nl__im__6);
#line 121
//clear ___nl__int__7;
#line 121
//clear ___nl__int__8;
#line 121
//clear ___nl__int__9;
#line 121
//clear ___nl__bool__10;
#line 121
//clear ___nl__int__11;
#line 121
c_rt_lib0clear(&___nl__im__12);
#line 121
return ___nl__im__1;
return NULL;
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
#line 125
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 126
___nl__int__3 = 0;
#line 126
___nl__int__4 = 1;
#line 126
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 126
label_3:
;
#line 126
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 126
___nl__bool__6 = ___nl__int__7;
#line 126
if(___nl__bool__6){ goto label_1;}
#line 126
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 126
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 127
c_rt_lib0move(&___nl__im__10,___get_global_const(116));
#line 127
___nl__bool__9 = interpreter_wrapper_priv0has_extension(___nl__im__2, ___nl__im__10);
#line 127
c_rt_lib0clear(&___nl__im__10);
#line 127
___nl__bool__9 = !___nl__bool__9;
#line 127
if(___nl__bool__9){ goto label_5;}
#line 128
c_rt_lib0move(&___nl__im__12, interpreter_wrapper_priv0get_dir(___nl__im__2));
#line 128
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(120), ___nl__im__12, ___get_global_const(118), ___nl__im__2));
#line 128
c_rt_lib0clear(&___nl__im__12);
#line 128
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__11));
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 129
goto label_4;
#line 129
label_5:
;
#line 130
c_rt_lib0move(&___nl__im__13, interpreter_wrapper_priv0get_all_nianio_file(___nl__im__2));
#line 130
___nl__int__15 = 0;
#line 130
___nl__int__16 = 1;
#line 130
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 130
label_8:
;
#line 130
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 130
___nl__bool__18 = ___nl__int__19;
#line 130
if(___nl__bool__18){ goto label_6;}
#line 130
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 130
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 131
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(120), ___nl__im__2, ___get_global_const(118), ___nl__im__14));
#line 131
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__21));
#line 131
c_rt_lib0clear(&___nl__im__21);
#line 131
c_rt_lib0clear(&___nl__im__14);
#line 132
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 132
goto label_8;
#line 132
label_6:
;
#line 133
goto label_4;
#line 133
label_4:
;
#line 133
//clear ___nl__bool__9;
#line 133
c_rt_lib0clear(&___nl__im__13);
#line 133
c_rt_lib0clear(&___nl__im__14);
#line 133
//clear ___nl__int__15;
#line 133
//clear ___nl__int__16;
#line 133
//clear ___nl__int__17;
#line 133
//clear ___nl__bool__18;
#line 133
//clear ___nl__int__19;
#line 133
c_rt_lib0clear(&___nl__im__20);
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 134
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 134
goto label_3;
#line 134
label_1:
;
#line 135
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 136
___nl__int__24 = 0;
#line 136
___nl__int__25 = 1;
#line 136
___nl__int__26 = c_rt_lib0array_len(___nl__im__1);
#line 136
label_11:
;
#line 136
___nl__int__28 = ___nl__int__24 >= ___nl__int__26;
#line 136
___nl__bool__27 = ___nl__int__28;
#line 136
if(___nl__bool__27){ goto label_9;}
#line 136
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 136
c_rt_lib0copy(&___nl__im__23, ___nl__im__29);
#line 137
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(118)));
#line 137
c_rt_lib0move(&___nl__im__30, interpreter_wrapper_priv0get_module_name(___nl__im__31));
#line 137
c_rt_lib0clear(&___nl__im__31);
#line 138
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(118)));
#line 138
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(1, ___get_global_const(74), ___nl__im__33));
#line 138
c_rt_lib0clear(&___nl__im__33);
#line 139
c_rt_lib0delete(hash0set_value(&___nl__im__22, ___nl__im__30, ___nl__im__32));
#line 139
c_rt_lib0clear(&___nl__im__23);
#line 140
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 140
goto label_11;
#line 140
label_9:
;
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
c_rt_lib0clear(&___nl__im__2);
#line 141
//clear ___nl__int__3;
#line 141
//clear ___nl__int__4;
#line 141
//clear ___nl__int__5;
#line 141
//clear ___nl__bool__6;
#line 141
//clear ___nl__int__7;
#line 141
c_rt_lib0clear(&___nl__im__8);
#line 141
c_rt_lib0clear(&___nl__im__23);
#line 141
//clear ___nl__int__24;
#line 141
//clear ___nl__int__25;
#line 141
//clear ___nl__int__26;
#line 141
//clear ___nl__bool__27;
#line 141
//clear ___nl__int__28;
#line 141
c_rt_lib0clear(&___nl__im__29);
#line 141
c_rt_lib0clear(&___nl__im__30);
#line 141
c_rt_lib0clear(&___nl__im__32);
#line 141
return ___nl__im__22;
return NULL;
}

ImmT  interpreter_wrapper_priv0parse_module(ImmT  ___nl__im__0,ImmT  ___nl__im__1,interpreter_wrapper0errors_group_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 148
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 148
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 148
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__8, ___get_global_const(78), ___nl__im__9));
#line 148
c_rt_lib0clear(&___nl__im__8);
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__7));
#line 148
c_rt_lib0clear(&___nl__im__7);
#line 148
c_rt_lib0move(&___nl__im__10, c_fe_lib0file_to_string(___nl__im__1));
#line 148
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__10));
#line 148
c_rt_lib0clear(&___nl__im__6);
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(79));
#line 148
if(___nl__bool__4){ goto label_1;}
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
c_rt_lib0clear(&___nl__im__3);
#line 148
//clear ___nl__bool__4;
#line 148
return ___nl__im__5;
#line 148
label_1:
;
#line 148
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(79)));
#line 149
___nl__bool__12 = false;
#line 149
c_rt_lib0move(&___nl__im__11, nparser0sparse(___nl__im__3, ___nl__im__0, ___nl__bool__12));
#line 149
//clear ___nl__bool__12;
#line 150
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(79));
#line 150
if(___nl__bool__13){ goto label_3;}
#line 152
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(123));
#line 152
if(___nl__bool__13){ goto label_4;}
#line 152
c_rt_lib0move(&___nl__im__14,___get_global_const(16));
#line 152
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__11));
#line 152
nl_die_arg(___nl__im__14);
#line 150
label_3:
;
#line 150
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(79)));
#line 150
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 151
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__15));
#line 151
c_rt_lib0clear(&___nl__im__0);
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__3);
#line 151
//clear ___nl__bool__4;
#line 151
c_rt_lib0clear(&___nl__im__5);
#line 151
c_rt_lib0clear(&___nl__im__11);
#line 151
//clear ___nl__bool__13;
#line 151
c_rt_lib0clear(&___nl__im__14);
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
return ___nl__im__17;
#line 152
goto label_2;
#line 152
label_4:
;
#line 152
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(123)));
#line 152
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 153
c_rt_lib0move(&___nl__im__20,___get_global_const(60));
#line 153
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__20));
#line 153
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 153
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__0, ___nl__im__21));
#line 153
c_rt_lib0move(&___nl__string__22,___get_global_const(60));
#line 153
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__22, ___nl__im__20));
#line 153
c_rt_lib0clear(&___nl__im__20);
#line 153
c_rt_lib0clear(&___nl__im__21);
#line 153
c_rt_lib0clear(&___nl__string__22);
#line 154
c_rt_lib0move(&___nl__im__23,___get_global_const(59));
#line 154
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__23));
#line 154
c_rt_lib0delete(hash0set_value(&___nl__im__23, ___nl__im__0, ___nl__im__18));
#line 154
c_rt_lib0move(&___nl__string__24,___get_global_const(59));
#line 154
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__24, ___nl__im__23));
#line 154
c_rt_lib0clear(&___nl__im__23);
#line 154
c_rt_lib0clear(&___nl__string__24);
#line 155
c_rt_lib0move(&___nl__im__26,___get_global_const(37));
#line 155
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__26));
#line 155
c_rt_lib0clear(&___nl__im__26);
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
//clear ___nl__bool__4;
#line 155
c_rt_lib0clear(&___nl__im__5);
#line 155
c_rt_lib0clear(&___nl__im__11);
#line 155
//clear ___nl__bool__13;
#line 155
c_rt_lib0clear(&___nl__im__14);
#line 155
c_rt_lib0clear(&___nl__im__15);
#line 155
c_rt_lib0clear(&___nl__im__16);
#line 155
c_rt_lib0clear(&___nl__im__17);
#line 155
c_rt_lib0clear(&___nl__im__18);
#line 155
c_rt_lib0clear(&___nl__im__19);
#line 155
return ___nl__im__25;
#line 156
goto label_2;
#line 156
label_2:
;
return NULL;
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
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 160
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 164
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 164
___nl__int__4 = string0length(___nl__im__5);
#line 164
c_rt_lib0clear(&___nl__im__5);
#line 164
___nl__int__6 = 0;
#line 164
___nl__int__7 = ___nl__int__4 == ___nl__int__6;
#line 164
___nl__bool__3 = ___nl__int__7;
#line 164
//clear ___nl__int__4;
#line 164
//clear ___nl__int__6;
#line 164
//clear ___nl__int__7;
#line 164
___nl__bool__3 = !___nl__bool__3;
#line 164
___nl__bool__3 = !___nl__bool__3;
#line 164
if(___nl__bool__3){ goto label_2;}
#line 161
c_rt_lib0move(&___nl__im__9,___get_global_const(152));
#line 161
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 161
___nl__bool__11 = hash0has_key(___nl__im__1, ___nl__im__12);
#line 161
c_rt_lib0clear(&___nl__im__12);
#line 161
if(___nl__bool__11){ goto label_4;}
#line 163
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 163
goto label_3;
#line 163
label_4:
;
#line 162
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 162
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__1, ___nl__im__14));
#line 162
c_rt_lib0clear(&___nl__im__14);
#line 162
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(74)));
#line 162
c_rt_lib0clear(&___nl__im__13);
#line 162
label_3:
;
#line 162
//clear ___nl__bool__11;
#line 162
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 162
c_rt_lib0clear(&___nl__im__9);
#line 162
c_rt_lib0clear(&___nl__im__10);
#line 162
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 162
c_rt_lib0clear(&___nl__im__8);
#line 162
goto label_1;
#line 162
label_2:
;
#line 162
label_1:
;
#line 162
//clear ___nl__bool__3;
#line 166
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(153)));
#line 166
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
___nl__int__18 = 1;
#line 166
___nl__int__18 = -___nl__int__18;
#line 166
___nl__int__19 = ___nl__int__16 == ___nl__int__18;
#line 166
___nl__bool__15 = ___nl__int__19;
#line 166
//clear ___nl__int__16;
#line 166
//clear ___nl__int__18;
#line 166
//clear ___nl__int__19;
#line 166
___nl__bool__15 = !___nl__bool__15;
#line 166
___nl__bool__15 = !___nl__bool__15;
#line 166
if(___nl__bool__15){ goto label_6;}
#line 165
c_rt_lib0move(&___nl__im__21,___get_global_const(154));
#line 165
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(153)));
#line 165
___nl__int__23 = getIntFromImm(___nl__im__24);
#line 165
c_rt_lib0clear(&___nl__im__24);
#line 165
c_rt_lib0move(&___nl__im__22, ptd0int_to_string(___nl__int__23));
#line 165
//clear ___nl__int__23;
#line 165
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 165
c_rt_lib0clear(&___nl__im__21);
#line 165
c_rt_lib0clear(&___nl__im__22);
#line 165
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__20));
#line 165
c_rt_lib0clear(&___nl__im__20);
#line 165
goto label_5;
#line 165
label_6:
;
#line 165
label_5:
;
#line 165
//clear ___nl__bool__15;
#line 167
c_rt_lib0move(&___nl__im__27, string0lf());
#line 167
c_rt_lib0move(&___nl__im__28,___get_global_const(155));
#line 167
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 167
c_rt_lib0clear(&___nl__im__27);
#line 167
c_rt_lib0clear(&___nl__im__28);
#line 167
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(156)));
#line 167
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 167
c_rt_lib0clear(&___nl__im__26);
#line 167
c_rt_lib0clear(&___nl__im__29);
#line 167
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 167
c_rt_lib0clear(&___nl__im__25);
#line 168
c_rt_lib0clear(&___nl__im__0);
#line 168
c_rt_lib0clear(&___nl__im__1);
#line 168
return ___nl__im__2;
return NULL;
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
#line 172
___nl__int__2 = 0;
#line 173
___nl__int__3 = 0;
#line 174
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(60)));
#line 174
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__4));
#line 174
label_3:
;
#line 174
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 174
if(___nl__bool__6){ goto label_1;}
#line 174
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 174
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__5));
#line 175
c_rt_lib0move(&___nl__im__9,___get_global_const(157));
#line 176
___nl__int__11 = 0;
#line 176
___nl__int__12 = 1;
#line 176
___nl__int__13 = c_rt_lib0array_len(___nl__im__7);
#line 176
label_6:
;
#line 176
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 176
___nl__bool__14 = ___nl__int__15;
#line 176
if(___nl__bool__14){ goto label_4;}
#line 176
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 176
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 177
c_rt_lib0move(&___nl__im__18, interpreter_wrapper_priv0construct_error_message(___nl__im__10, ___nl__im__1));
#line 177
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 177
c_rt_lib0clear(&___nl__im__18);
#line 177
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 177
c_rt_lib0clear(&___nl__im__17);
#line 177
c_rt_lib0clear(&___nl__im__10);
#line 178
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 178
goto label_6;
#line 178
label_4:
;
#line 179
___nl__int__19 = c_rt_lib0array_len(___nl__im__7);
#line 179
___nl__int__2 = ___nl__int__2 + ___nl__int__19;
#line 179
//clear ___nl__int__19;
#line 180
c_rt_lib0move(&___nl__im__9,___get_global_const(158));
#line 181
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(59)));
#line 181
c_rt_lib0move(&___nl__im__20, hash0get_value(___nl__im__21, ___nl__im__5));
#line 181
c_rt_lib0clear(&___nl__im__21);
#line 182
___nl__int__23 = 0;
#line 182
___nl__int__24 = 1;
#line 182
___nl__int__25 = c_rt_lib0array_len(___nl__im__20);
#line 182
label_9:
;
#line 182
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 182
___nl__bool__26 = ___nl__int__27;
#line 182
if(___nl__bool__26){ goto label_7;}
#line 182
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__20, ___nl__int__23));
#line 182
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 183
c_rt_lib0move(&___nl__im__30,___get_global_const(158));
#line 183
c_rt_lib0move(&___nl__im__31, interpreter_wrapper_priv0construct_error_message(___nl__im__22, ___nl__im__1));
#line 183
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 183
c_rt_lib0clear(&___nl__im__30);
#line 183
c_rt_lib0clear(&___nl__im__31);
#line 183
c_rt_lib0delete(c_fe_lib0print(___nl__im__29));
#line 183
c_rt_lib0clear(&___nl__im__29);
#line 183
c_rt_lib0clear(&___nl__im__22);
#line 184
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 184
goto label_9;
#line 184
label_7:
;
#line 185
___nl__int__32 = c_rt_lib0array_len(___nl__im__20);
#line 185
___nl__int__3 = ___nl__int__3 + ___nl__int__32;
#line 185
//clear ___nl__int__32;
#line 185
c_rt_lib0clear(&___nl__im__9);
#line 185
c_rt_lib0clear(&___nl__im__10);
#line 185
//clear ___nl__int__11;
#line 185
//clear ___nl__int__12;
#line 185
//clear ___nl__int__13;
#line 185
//clear ___nl__bool__14;
#line 185
//clear ___nl__int__15;
#line 185
c_rt_lib0clear(&___nl__im__16);
#line 185
c_rt_lib0clear(&___nl__im__20);
#line 185
c_rt_lib0clear(&___nl__im__22);
#line 185
//clear ___nl__int__23;
#line 185
//clear ___nl__int__24;
#line 185
//clear ___nl__int__25;
#line 185
//clear ___nl__bool__26;
#line 185
//clear ___nl__int__27;
#line 185
c_rt_lib0clear(&___nl__im__28);
#line 186
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 186
goto label_3;
#line 186
label_1:
;
#line 187
c_rt_lib0move(&___nl__im__36,___get_global_const(163));
#line 187
c_rt_lib0move(&___nl__im__37, ptd0int_to_string(___nl__int__3));
#line 187
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 187
c_rt_lib0clear(&___nl__im__36);
#line 187
c_rt_lib0clear(&___nl__im__37);
#line 188
c_rt_lib0move(&___nl__im__38,___get_global_const(164));
#line 188
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__38));
#line 188
c_rt_lib0clear(&___nl__im__35);
#line 188
c_rt_lib0clear(&___nl__im__38);
#line 188
c_rt_lib0move(&___nl__im__39, ptd0int_to_string(___nl__int__2));
#line 188
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__39));
#line 188
c_rt_lib0clear(&___nl__im__34);
#line 188
c_rt_lib0clear(&___nl__im__39);
#line 188
c_rt_lib0delete(c_fe_lib0print(___nl__im__33));
#line 188
c_rt_lib0clear(&___nl__im__33);
#line 189
c_rt_lib0clear(&___nl__im__0);
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
//clear ___nl__int__2;
#line 189
c_rt_lib0clear(&___nl__im__4);
#line 189
c_rt_lib0clear(&___nl__im__5);
#line 189
//clear ___nl__bool__6;
#line 189
c_rt_lib0clear(&___nl__im__7);
#line 189
c_rt_lib0clear(&___nl__im__8);
#line 189
c_rt_lib0clear(&___nl__im__9);
#line 189
c_rt_lib0clear(&___nl__im__10);
#line 189
//clear ___nl__int__11;
#line 189
//clear ___nl__int__12;
#line 189
//clear ___nl__int__13;
#line 189
//clear ___nl__bool__14;
#line 189
//clear ___nl__int__15;
#line 189
c_rt_lib0clear(&___nl__im__16);
#line 189
c_rt_lib0clear(&___nl__im__20);
#line 189
c_rt_lib0clear(&___nl__im__22);
#line 189
//clear ___nl__int__23;
#line 189
//clear ___nl__int__24;
#line 189
//clear ___nl__int__25;
#line 189
//clear ___nl__bool__26;
#line 189
//clear ___nl__int__27;
#line 189
c_rt_lib0clear(&___nl__im__28);
#line 189
return ___nl__int__3;
return 0;
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
#line 193
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 194
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 194
label_3:
;
#line 194
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 194
if(___nl__bool__3){ goto label_1;}
#line 194
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 194
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 195
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 195
c_rt_lib0move(&___nl__im__6, translator0translate(___nl__im__4, ___nl__im__7));
#line 195
c_rt_lib0clear(&___nl__im__7);
#line 196
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 196
c_rt_lib0clear(&___nl__im__6);
#line 197
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 197
goto label_3;
#line 197
label_1:
;
#line 198
c_rt_lib0clear(&___nl__im__0);
#line 198
c_rt_lib0clear(&___nl__im__2);
#line 198
//clear ___nl__bool__3;
#line 198
c_rt_lib0clear(&___nl__im__4);
#line 198
c_rt_lib0clear(&___nl__im__5);
#line 198
c_rt_lib0clear(&___nl__im__6);
#line 198
return ___nl__im__1;
return NULL;
}

ImmT  interpreter_wrapper_priv0get_dir(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
INT  ___nl__int__1 = 0;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
#line 202
___nl__int__2 = string0length(___nl__im__0);
#line 202
___nl__int__3 = 1;
#line 202
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 202
//clear ___nl__int__2;
#line 202
//clear ___nl__int__3;
#line 203
___nl__int__6 = 1;
#line 203
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__6));
#line 203
//clear ___nl__int__6;
#line 203
c_rt_lib0move(&___nl__im__7,___get_global_const(106));
#line 203
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__7);
#line 203
c_rt_lib0clear(&___nl__im__5);
#line 203
c_rt_lib0clear(&___nl__im__7);
#line 203
if(___nl__bool__4){ goto label_3;}
#line 203
___nl__int__9 = 1;
#line 203
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 203
//clear ___nl__int__9;
#line 203
c_rt_lib0move(&___nl__im__10,___get_global_const(110));
#line 203
___nl__bool__4 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 203
c_rt_lib0clear(&___nl__im__8);
#line 203
c_rt_lib0clear(&___nl__im__10);
#line 203
label_3:
;
#line 203
___nl__bool__4 = !___nl__bool__4;
#line 203
if(___nl__bool__4){ goto label_2;}
#line 203
___nl__int__11 = 1;
#line 203
___nl__int__1 = ___nl__int__1 - ___nl__int__11;
#line 203
//clear ___nl__int__11;
#line 203
goto label_1;
#line 203
label_2:
;
#line 203
label_1:
;
#line 203
//clear ___nl__bool__4;
#line 204
label_5:
;
#line 204
___nl__int__15 = 0;
#line 204
___nl__int__16 = ___nl__int__1 >= ___nl__int__15;
#line 204
___nl__bool__12 = ___nl__int__16;
#line 204
//clear ___nl__int__15;
#line 204
//clear ___nl__int__16;
#line 204
___nl__bool__14 = !___nl__bool__12;
#line 204
if(___nl__bool__14){ goto label_7;}
#line 204
___nl__int__18 = 1;
#line 204
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__18));
#line 204
//clear ___nl__int__18;
#line 204
c_rt_lib0move(&___nl__im__19,___get_global_const(106));
#line 204
___nl__bool__12 = c_rt_lib0ne(___nl__im__17, ___nl__im__19);
#line 204
c_rt_lib0clear(&___nl__im__17);
#line 204
c_rt_lib0clear(&___nl__im__19);
#line 204
label_7:
;
#line 204
//clear ___nl__bool__14;
#line 204
___nl__bool__13 = !___nl__bool__12;
#line 204
if(___nl__bool__13){ goto label_6;}
#line 204
___nl__int__21 = 1;
#line 204
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__21));
#line 204
//clear ___nl__int__21;
#line 204
c_rt_lib0move(&___nl__im__22,___get_global_const(110));
#line 204
___nl__bool__12 = c_rt_lib0ne(___nl__im__20, ___nl__im__22);
#line 204
c_rt_lib0clear(&___nl__im__20);
#line 204
c_rt_lib0clear(&___nl__im__22);
#line 204
label_6:
;
#line 204
//clear ___nl__bool__13;
#line 204
___nl__bool__12 = !___nl__bool__12;
#line 204
if(___nl__bool__12){ goto label_4;}
#line 204
___nl__int__23 = 1;
#line 204
___nl__int__1 = ___nl__int__1 - ___nl__int__23;
#line 204
//clear ___nl__int__23;
#line 204
goto label_5;
#line 204
label_4:
;
#line 205
___nl__int__25 = 0;
#line 205
___nl__int__26 = ___nl__int__1 <= ___nl__int__25;
#line 205
___nl__bool__24 = ___nl__int__26;
#line 205
//clear ___nl__int__25;
#line 205
//clear ___nl__int__26;
#line 205
___nl__bool__24 = !___nl__bool__24;
#line 205
if(___nl__bool__24){ goto label_9;}
#line 205
c_rt_lib0move(&___nl__im__27,___get_global_const(111));
#line 205
c_rt_lib0clear(&___nl__im__0);
#line 205
//clear ___nl__int__1;
#line 205
//clear ___nl__bool__12;
#line 205
//clear ___nl__bool__24;
#line 205
return ___nl__im__27;
#line 205
goto label_8;
#line 205
label_9:
;
#line 205
label_8:
;
#line 205
//clear ___nl__bool__24;
#line 205
c_rt_lib0clear(&___nl__im__27);
#line 206
___nl__int__29 = 0;
#line 206
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__0, ___nl__int__29, ___nl__int__1));
#line 206
//clear ___nl__int__29;
#line 206
c_rt_lib0clear(&___nl__im__0);
#line 206
//clear ___nl__int__1;
#line 206
//clear ___nl__bool__12;
#line 206
return ___nl__im__28;
return NULL;
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
