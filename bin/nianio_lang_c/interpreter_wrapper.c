
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_const(834), ___get_global_const(56)));
#line 26
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 27
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_const(834), ___get_global_const(56)));
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
c_rt_lib0move(&___nl__im__1,___get_global_const(835));
#line 37
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_const(66), ___get_global_const(836)));
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
#line 43
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 44
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 45
___nl__int__3 = 1;
#line 45
label_2:
;
#line 45
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 45
___nl__int__6 = ___nl__int__3 < ___nl__int__5;
#line 45
___nl__bool__4 = ___nl__int__6;
#line 45
//clear ___nl__int__5;
#line 45
//clear ___nl__int__6;
#line 45
___nl__bool__4 = !___nl__bool__4;
#line 45
if(___nl__bool__4){ goto label_1;}
#line 46
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 46
c_rt_lib0move(&___nl__im__9,___get_global_const(191));
#line 46
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 46
c_rt_lib0clear(&___nl__im__8);
#line 46
c_rt_lib0clear(&___nl__im__9);
#line 46
___nl__bool__7 = !___nl__bool__7;
#line 46
if(___nl__bool__7){ goto label_5;}
#line 47
___nl__int__11 = 1;
#line 47
___nl__int__10 = ___nl__int__3 + ___nl__int__11;
#line 47
//clear ___nl__int__11;
#line 47
___nl__int__14 = c_rt_lib0array_len(___nl__im__0);
#line 47
___nl__int__13 = ___nl__int__14 - ___nl__int__3;
#line 47
//clear ___nl__int__14;
#line 47
___nl__int__15 = 1;
#line 47
___nl__int__12 = ___nl__int__13 - ___nl__int__15;
#line 47
//clear ___nl__int__13;
#line 47
//clear ___nl__int__15;
#line 47
c_rt_lib0move(&___nl__im__2, array0subarray(___nl__im__0, ___nl__int__10, ___nl__int__12));
#line 47
//clear ___nl__int__10;
#line 47
//clear ___nl__int__12;
#line 48
goto label_1;
#line 49
goto label_4;
#line 49
label_5:
;
#line 49
label_4:
;
#line 49
//clear ___nl__bool__7;
#line 50
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 50
c_rt_lib0array_push(&___nl__im__1, ___nl__im__16);
#line 50
c_rt_lib0clear(&___nl__im__16);
#line 50
label_3:
;
#line 45
___nl__int__17 = 1;
#line 45
___nl__int__3 = ___nl__int__3 + ___nl__int__17;
#line 45
//clear ___nl__int__17;
#line 51
goto label_2;
#line 51
label_1:
;
#line 52
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__2));
#line 52
___nl__int__18 = interpreter_wrapper0exec_interpreter(___nl__im__1, ___nl__im__19);
#line 52
c_rt_lib0clear(&___nl__im__19);
#line 52
c_rt_lib0clear(&___nl__im__0);
#line 52
c_rt_lib0clear(&___nl__im__1);
#line 52
c_rt_lib0clear(&___nl__im__2);
#line 52
//clear ___nl__int__3;
#line 52
//clear ___nl__bool__4;
#line 52
return ___nl__int__18;
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
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
#line 57
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 59
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(59), ___nl__im__4, ___get_global_const(60), ___nl__im__5));
#line 60
c_rt_lib0clear(&___nl__im__4);
#line 60
c_rt_lib0clear(&___nl__im__5);
#line 62
___nl__int__6 = 0;
#line 63
c_rt_lib0move(&___nl__im__7, interpreter_wrapper_priv0get_files_to_parse(___nl__im__0));
#line 64
c_rt_lib0move(&___nl__im__11, c_rt_lib0init_iter(___nl__im__7));
#line 64
label_3:
;
#line 64
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 64
if(___nl__bool__9){ goto label_1;}
#line 64
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 64
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__7, ___nl__im__8));
#line 65
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(75)));
#line 65
c_rt_lib0move(&___nl__im__12, interpreter_wrapper_priv0parse_module(___nl__im__8, ___nl__im__13, &___nl__im__3));
#line 65
c_rt_lib0clear(&___nl__im__13);
#line 65
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(80));
#line 65
if(___nl__bool__14){ goto label_5;}
#line 67
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(79));
#line 67
if(___nl__bool__14){ goto label_6;}
#line 67
c_rt_lib0move(&___nl__im__15,___get_global_const(16));
#line 67
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 67
nl_die_arg(___nl__im__15);
#line 65
label_5:
;
#line 65
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(80)));
#line 65
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 66
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__8, ___nl__im__16));
#line 67
goto label_4;
#line 67
label_6:
;
#line 67
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(79)));
#line 67
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 68
___nl__int__20 = 1;
#line 68
___nl__int__6 = ___nl__int__6 + ___nl__int__20;
#line 68
//clear ___nl__int__20;
#line 69
goto label_4;
#line 69
label_4:
;
#line 69
c_rt_lib0clear(&___nl__im__12);
#line 69
//clear ___nl__bool__14;
#line 69
c_rt_lib0clear(&___nl__im__15);
#line 69
c_rt_lib0clear(&___nl__im__16);
#line 69
c_rt_lib0clear(&___nl__im__17);
#line 69
c_rt_lib0clear(&___nl__im__18);
#line 69
c_rt_lib0clear(&___nl__im__19);
#line 69
label_2:
;
#line 70
c_rt_lib0move(&___nl__im__11, c_rt_lib0next_iter(___nl__im__11));
#line 70
goto label_3;
#line 70
label_1:
;
#line 71
___nl__int__22 = 0;
#line 71
___nl__int__23 = ___nl__int__6 != ___nl__int__22;
#line 71
___nl__bool__21 = ___nl__int__23;
#line 71
//clear ___nl__int__22;
#line 71
//clear ___nl__int__23;
#line 71
___nl__bool__21 = !___nl__bool__21;
#line 71
if(___nl__bool__21){ goto label_8;}
#line 72
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(0));
#line 72
___nl__int__25 = interpreter_wrapper_priv0show_and_count_errors(___nl__im__3, ___nl__im__24);
#line 72
c_rt_lib0clear(&___nl__im__24);
#line 72
//clear ___nl__int__25;
#line 73
___nl__int__26 = 1;
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
c_rt_lib0clear(&___nl__im__2);
#line 73
c_rt_lib0clear(&___nl__im__3);
#line 73
//clear ___nl__int__6;
#line 73
c_rt_lib0clear(&___nl__im__7);
#line 73
c_rt_lib0clear(&___nl__im__8);
#line 73
//clear ___nl__bool__9;
#line 73
c_rt_lib0clear(&___nl__im__10);
#line 73
c_rt_lib0clear(&___nl__im__11);
#line 73
c_rt_lib0clear(&___nl__im__12);
#line 73
//clear ___nl__bool__14;
#line 73
c_rt_lib0clear(&___nl__im__15);
#line 73
c_rt_lib0clear(&___nl__im__16);
#line 73
c_rt_lib0clear(&___nl__im__17);
#line 73
c_rt_lib0clear(&___nl__im__18);
#line 73
c_rt_lib0clear(&___nl__im__19);
#line 73
//clear ___nl__bool__21;
#line 73
return ___nl__int__26;
#line 74
goto label_7;
#line 74
label_8:
;
#line 74
label_7:
;
#line 74
//clear ___nl__bool__21;
#line 74
//clear ___nl__int__26;
#line 75
c_rt_lib0move(&___nl__im__27, interpreter_wrapper_priv0translate(___nl__im__2));
#line 76
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 77
c_rt_lib0move(&___nl__im__29,___get_global_const(37));
#line 78
c_rt_lib0move(&___nl__im__33, c_rt_lib0init_iter(___nl__im__27));
#line 78
label_11:
;
#line 78
___nl__bool__31 = c_rt_lib0is_end_hash(___nl__im__33);
#line 78
if(___nl__bool__31){ goto label_9;}
#line 78
c_rt_lib0move(&___nl__im__30, c_rt_lib0get_key_iter(___nl__im__33));
#line 78
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value(___nl__im__27, ___nl__im__30));
#line 79
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(208)));
#line 79
___nl__int__36 = 0;
#line 79
___nl__int__37 = 1;
#line 79
___nl__int__38 = c_rt_lib0array_len(___nl__im__34);
#line 79
label_14:
;
#line 79
___nl__int__40 = ___nl__int__36 >= ___nl__int__38;
#line 79
___nl__bool__39 = ___nl__int__40;
#line 79
if(___nl__bool__39){ goto label_12;}
#line 79
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__34, ___nl__int__36));
#line 79
c_rt_lib0copy(&___nl__im__35, ___nl__im__41);
#line 80
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(168)));
#line 80
c_rt_lib0move(&___nl__im__44,___get_global_const(146));
#line 80
___nl__bool__42 = c_rt_lib0eq(___nl__im__43, ___nl__im__44);
#line 80
c_rt_lib0clear(&___nl__im__43);
#line 80
c_rt_lib0clear(&___nl__im__44);
#line 80
___nl__bool__42 = !___nl__bool__42;
#line 80
if(___nl__bool__42){ goto label_16;}
#line 81
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 82
goto label_15;
#line 82
label_16:
;
#line 82
label_15:
;
#line 82
//clear ___nl__bool__42;
#line 82
c_rt_lib0clear(&___nl__im__35);
#line 82
label_13:
;
#line 83
___nl__int__36 = ___nl__int__36 + ___nl__int__37;
#line 83
goto label_14;
#line 83
label_12:
;
#line 84
c_rt_lib0delete(array0push(&___nl__im__28, ___nl__im__32));
#line 84
c_rt_lib0clear(&___nl__im__34);
#line 84
c_rt_lib0clear(&___nl__im__35);
#line 84
//clear ___nl__int__36;
#line 84
//clear ___nl__int__37;
#line 84
//clear ___nl__int__38;
#line 84
//clear ___nl__bool__39;
#line 84
//clear ___nl__int__40;
#line 84
c_rt_lib0clear(&___nl__im__41);
#line 84
label_10:
;
#line 85
c_rt_lib0move(&___nl__im__33, c_rt_lib0next_iter(___nl__im__33));
#line 85
goto label_11;
#line 85
label_9:
;
#line 86
c_rt_lib0move(&___nl__im__46, interpreter_wrapper_priv0get_known_func());
#line 86
c_rt_lib0move(&___nl__im__45, interpreter0init(___nl__im__28, ___nl__im__46));
#line 86
c_rt_lib0clear(&___nl__im__46);
#line 87
c_rt_lib0move(&___nl__im__49,___get_global_const(146));
#line 87
c_rt_lib0move(&___nl__im__48, interpreter0start_args(&___nl__im__45, ___nl__im__49, ___nl__im__29, ___nl__im__1));
#line 87
c_rt_lib0clear(&___nl__im__49);
#line 87
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_const(80));
#line 87
if(___nl__bool__47){ goto label_17;}
#line 87
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__48));
#line 87
nl_die_arg(___nl__im__48);
#line 87
label_17:
;
#line 88
c_rt_lib0move(&___nl__im__51, interpreter0exec_all_code(___nl__im__45));
#line 88
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(80));
#line 88
if(___nl__bool__50){ goto label_18;}
#line 88
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__51));
#line 88
nl_die_arg(___nl__im__51);
#line 88
label_18:
;
#line 89
___nl__int__52 = 0;
#line 89
c_rt_lib0clear(&___nl__im__0);
#line 89
c_rt_lib0clear(&___nl__im__1);
#line 89
c_rt_lib0clear(&___nl__im__2);
#line 89
c_rt_lib0clear(&___nl__im__3);
#line 89
//clear ___nl__int__6;
#line 89
c_rt_lib0clear(&___nl__im__7);
#line 89
c_rt_lib0clear(&___nl__im__8);
#line 89
//clear ___nl__bool__9;
#line 89
c_rt_lib0clear(&___nl__im__10);
#line 89
c_rt_lib0clear(&___nl__im__11);
#line 89
c_rt_lib0clear(&___nl__im__12);
#line 89
//clear ___nl__bool__14;
#line 89
c_rt_lib0clear(&___nl__im__15);
#line 89
c_rt_lib0clear(&___nl__im__16);
#line 89
c_rt_lib0clear(&___nl__im__17);
#line 89
c_rt_lib0clear(&___nl__im__18);
#line 89
c_rt_lib0clear(&___nl__im__19);
#line 89
c_rt_lib0clear(&___nl__im__27);
#line 89
c_rt_lib0clear(&___nl__im__28);
#line 89
c_rt_lib0clear(&___nl__im__29);
#line 89
c_rt_lib0clear(&___nl__im__30);
#line 89
//clear ___nl__bool__31;
#line 89
c_rt_lib0clear(&___nl__im__32);
#line 89
c_rt_lib0clear(&___nl__im__33);
#line 89
c_rt_lib0clear(&___nl__im__34);
#line 89
c_rt_lib0clear(&___nl__im__35);
#line 89
//clear ___nl__int__36;
#line 89
//clear ___nl__int__37;
#line 89
//clear ___nl__int__38;
#line 89
//clear ___nl__bool__39;
#line 89
//clear ___nl__int__40;
#line 89
c_rt_lib0clear(&___nl__im__41);
#line 89
c_rt_lib0clear(&___nl__im__45);
#line 89
//clear ___nl__bool__47;
#line 89
c_rt_lib0clear(&___nl__im__48);
#line 89
//clear ___nl__bool__50;
#line 89
c_rt_lib0clear(&___nl__im__51);
#line 89
return ___nl__int__52;
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
#line 93
___nl__int__2 = string0length(___nl__im__0);
#line 93
___nl__int__3 = 1;
#line 93
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 93
//clear ___nl__int__2;
#line 93
//clear ___nl__int__3;
#line 94
label_2:
;
#line 94
___nl__int__7 = 0;
#line 94
___nl__int__8 = ___nl__int__1 >= ___nl__int__7;
#line 94
___nl__bool__4 = ___nl__int__8;
#line 94
//clear ___nl__int__7;
#line 94
//clear ___nl__int__8;
#line 94
___nl__bool__6 = !___nl__bool__4;
#line 94
if(___nl__bool__6){ goto label_4;}
#line 94
___nl__int__10 = 1;
#line 94
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 94
//clear ___nl__int__10;
#line 94
c_rt_lib0move(&___nl__im__11,___get_global_const(109));
#line 94
___nl__bool__4 = c_rt_lib0ne(___nl__im__9, ___nl__im__11);
#line 94
c_rt_lib0clear(&___nl__im__9);
#line 94
c_rt_lib0clear(&___nl__im__11);
#line 94
label_4:
;
#line 94
//clear ___nl__bool__6;
#line 94
___nl__bool__5 = !___nl__bool__4;
#line 94
if(___nl__bool__5){ goto label_3;}
#line 94
___nl__int__13 = 1;
#line 94
c_rt_lib0move(&___nl__im__12, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__13));
#line 94
//clear ___nl__int__13;
#line 94
c_rt_lib0move(&___nl__im__14,___get_global_const(113));
#line 94
___nl__bool__4 = c_rt_lib0ne(___nl__im__12, ___nl__im__14);
#line 94
c_rt_lib0clear(&___nl__im__12);
#line 94
c_rt_lib0clear(&___nl__im__14);
#line 94
label_3:
;
#line 94
//clear ___nl__bool__5;
#line 94
___nl__bool__4 = !___nl__bool__4;
#line 94
if(___nl__bool__4){ goto label_1;}
#line 95
___nl__int__17 = 1;
#line 95
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 95
//clear ___nl__int__17;
#line 95
c_rt_lib0move(&___nl__im__18,___get_global_const(114));
#line 95
___nl__bool__15 = c_rt_lib0eq(___nl__im__16, ___nl__im__18);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__18);
#line 95
___nl__bool__15 = !___nl__bool__15;
#line 95
if(___nl__bool__15){ goto label_6;}
#line 96
___nl__int__19 = 1;
#line 96
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 96
//clear ___nl__int__19;
#line 97
goto label_1;
#line 98
goto label_5;
#line 98
label_6:
;
#line 98
label_5:
;
#line 98
//clear ___nl__bool__15;
#line 99
___nl__int__20 = 1;
#line 99
___nl__int__1 = ___nl__int__1 - ___nl__int__20;
#line 99
//clear ___nl__int__20;
#line 100
goto label_2;
#line 100
label_1:
;
#line 101
c_rt_lib0move(&___nl__im__21,___get_global_const(37));
#line 102
label_8:
;
#line 102
___nl__int__25 = 0;
#line 102
___nl__int__26 = ___nl__int__1 >= ___nl__int__25;
#line 102
___nl__bool__22 = ___nl__int__26;
#line 102
//clear ___nl__int__25;
#line 102
//clear ___nl__int__26;
#line 102
___nl__bool__24 = !___nl__bool__22;
#line 102
if(___nl__bool__24){ goto label_10;}
#line 102
___nl__int__28 = 1;
#line 102
c_rt_lib0move(&___nl__im__27, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__28));
#line 102
//clear ___nl__int__28;
#line 102
c_rt_lib0move(&___nl__im__29,___get_global_const(109));
#line 102
___nl__bool__22 = c_rt_lib0ne(___nl__im__27, ___nl__im__29);
#line 102
c_rt_lib0clear(&___nl__im__27);
#line 102
c_rt_lib0clear(&___nl__im__29);
#line 102
label_10:
;
#line 102
//clear ___nl__bool__24;
#line 102
___nl__bool__23 = !___nl__bool__22;
#line 102
if(___nl__bool__23){ goto label_9;}
#line 102
___nl__int__31 = 1;
#line 102
c_rt_lib0move(&___nl__im__30, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__31));
#line 102
//clear ___nl__int__31;
#line 102
c_rt_lib0move(&___nl__im__32,___get_global_const(113));
#line 102
___nl__bool__22 = c_rt_lib0ne(___nl__im__30, ___nl__im__32);
#line 102
c_rt_lib0clear(&___nl__im__30);
#line 102
c_rt_lib0clear(&___nl__im__32);
#line 102
label_9:
;
#line 102
//clear ___nl__bool__23;
#line 102
___nl__bool__22 = !___nl__bool__22;
#line 102
if(___nl__bool__22){ goto label_7;}
#line 103
___nl__int__34 = 1;
#line 103
c_rt_lib0move(&___nl__im__33, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__34));
#line 103
//clear ___nl__int__34;
#line 103
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__33, ___nl__im__21));
#line 103
c_rt_lib0clear(&___nl__im__33);
#line 104
___nl__int__35 = 1;
#line 104
___nl__int__1 = ___nl__int__1 - ___nl__int__35;
#line 104
//clear ___nl__int__35;
#line 105
goto label_8;
#line 105
label_7:
;
#line 106
c_rt_lib0clear(&___nl__im__0);
#line 106
//clear ___nl__int__1;
#line 106
//clear ___nl__bool__4;
#line 106
//clear ___nl__bool__22;
#line 106
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
#line 110
___nl__int__3 = string0length(___nl__im__1);
#line 110
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__3));
#line 110
//clear ___nl__int__3;
#line 111
___nl__int__5 = string0length(___nl__im__0);
#line 111
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 111
___nl__int__7 = ___nl__int__5 <= ___nl__int__6;
#line 111
___nl__bool__4 = ___nl__int__7;
#line 111
//clear ___nl__int__5;
#line 111
//clear ___nl__int__6;
#line 111
//clear ___nl__int__7;
#line 111
___nl__bool__4 = !___nl__bool__4;
#line 111
if(___nl__bool__4){ goto label_2;}
#line 111
___nl__bool__8 = false;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
c_rt_lib0clear(&___nl__im__2);
#line 111
//clear ___nl__bool__4;
#line 111
return ___nl__bool__8;
#line 111
goto label_1;
#line 111
label_2:
;
#line 111
label_1:
;
#line 111
//clear ___nl__bool__4;
#line 111
//clear ___nl__bool__8;
#line 112
___nl__int__10 = string0length(___nl__im__0);
#line 112
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 112
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 112
//clear ___nl__int__10;
#line 112
//clear ___nl__int__11;
#line 112
___nl__int__12 = getIntFromImm(___nl__im__2);
#line 112
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__9, ___nl__int__12));
#line 112
//clear ___nl__int__9;
#line 112
//clear ___nl__int__12;
#line 113
___nl__bool__13 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
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
#line 117
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 118
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 118
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 118
c_rt_lib0clear(&___nl__im__4);
#line 118
c_rt_lib0move(&___nl__im__5, c_fe_lib0get_module_files_rec(___nl__im__0));
#line 118
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__5));
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
c_rt_lib0clear(&___nl__im__5);
#line 119
___nl__int__7 = 0;
#line 119
___nl__int__8 = 1;
#line 119
___nl__int__9 = c_rt_lib0array_len(___nl__im__2);
#line 119
label_3:
;
#line 119
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 119
___nl__bool__10 = ___nl__int__11;
#line 119
if(___nl__bool__10){ goto label_1;}
#line 119
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 119
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 120
c_rt_lib0move(&___nl__im__14,___get_global_const(118));
#line 120
___nl__bool__13 = interpreter_wrapper_priv0has_extension(___nl__im__6, ___nl__im__14);
#line 120
c_rt_lib0clear(&___nl__im__14);
#line 120
___nl__bool__13 = !___nl__bool__13;
#line 120
if(___nl__bool__13){ goto label_5;}
#line 120
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 120
goto label_4;
#line 120
label_5:
;
#line 120
label_4:
;
#line 120
//clear ___nl__bool__13;
#line 120
c_rt_lib0clear(&___nl__im__6);
#line 120
label_2:
;
#line 121
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 121
goto label_3;
#line 121
label_1:
;
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
c_rt_lib0clear(&___nl__im__2);
#line 122
c_rt_lib0clear(&___nl__im__6);
#line 122
//clear ___nl__int__7;
#line 122
//clear ___nl__int__8;
#line 122
//clear ___nl__int__9;
#line 122
//clear ___nl__bool__10;
#line 122
//clear ___nl__int__11;
#line 122
c_rt_lib0clear(&___nl__im__12);
#line 122
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
#line 126
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 127
___nl__int__3 = 0;
#line 127
___nl__int__4 = 1;
#line 127
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 127
label_3:
;
#line 127
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 127
___nl__bool__6 = ___nl__int__7;
#line 127
if(___nl__bool__6){ goto label_1;}
#line 127
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 127
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 128
c_rt_lib0move(&___nl__im__10,___get_global_const(118));
#line 128
___nl__bool__9 = interpreter_wrapper_priv0has_extension(___nl__im__2, ___nl__im__10);
#line 128
c_rt_lib0clear(&___nl__im__10);
#line 128
___nl__bool__9 = !___nl__bool__9;
#line 128
if(___nl__bool__9){ goto label_5;}
#line 129
c_rt_lib0move(&___nl__im__12, interpreter_wrapper_priv0get_dir(___nl__im__2));
#line 129
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(122), ___nl__im__12, ___get_global_const(120), ___nl__im__2));
#line 129
c_rt_lib0clear(&___nl__im__12);
#line 129
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__11));
#line 129
c_rt_lib0clear(&___nl__im__11);
#line 130
goto label_4;
#line 130
label_5:
;
#line 131
c_rt_lib0move(&___nl__im__13, interpreter_wrapper_priv0get_all_nianio_file(___nl__im__2));
#line 131
___nl__int__15 = 0;
#line 131
___nl__int__16 = 1;
#line 131
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 131
label_8:
;
#line 131
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 131
___nl__bool__18 = ___nl__int__19;
#line 131
if(___nl__bool__18){ goto label_6;}
#line 131
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 131
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 132
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(122), ___nl__im__2, ___get_global_const(120), ___nl__im__14));
#line 132
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__21));
#line 132
c_rt_lib0clear(&___nl__im__21);
#line 132
c_rt_lib0clear(&___nl__im__14);
#line 132
label_7:
;
#line 133
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 133
goto label_8;
#line 133
label_6:
;
#line 134
goto label_4;
#line 134
label_4:
;
#line 134
//clear ___nl__bool__9;
#line 134
c_rt_lib0clear(&___nl__im__13);
#line 134
c_rt_lib0clear(&___nl__im__14);
#line 134
//clear ___nl__int__15;
#line 134
//clear ___nl__int__16;
#line 134
//clear ___nl__int__17;
#line 134
//clear ___nl__bool__18;
#line 134
//clear ___nl__int__19;
#line 134
c_rt_lib0clear(&___nl__im__20);
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
label_2:
;
#line 135
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 135
goto label_3;
#line 135
label_1:
;
#line 136
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_mk(0));
#line 137
___nl__int__24 = 0;
#line 137
___nl__int__25 = 1;
#line 137
___nl__int__26 = c_rt_lib0array_len(___nl__im__1);
#line 137
label_11:
;
#line 137
___nl__int__28 = ___nl__int__24 >= ___nl__int__26;
#line 137
___nl__bool__27 = ___nl__int__28;
#line 137
if(___nl__bool__27){ goto label_9;}
#line 137
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 137
c_rt_lib0copy(&___nl__im__23, ___nl__im__29);
#line 138
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(120)));
#line 138
c_rt_lib0move(&___nl__im__30, interpreter_wrapper_priv0get_module_name(___nl__im__31));
#line 138
c_rt_lib0clear(&___nl__im__31);
#line 139
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(120)));
#line 139
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(1, ___get_global_const(75), ___nl__im__33));
#line 139
c_rt_lib0clear(&___nl__im__33);
#line 140
c_rt_lib0delete(hash0set_value(&___nl__im__22, ___nl__im__30, ___nl__im__32));
#line 140
c_rt_lib0clear(&___nl__im__23);
#line 140
label_10:
;
#line 141
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 141
goto label_11;
#line 141
label_9:
;
#line 142
c_rt_lib0clear(&___nl__im__0);
#line 142
c_rt_lib0clear(&___nl__im__1);
#line 142
c_rt_lib0clear(&___nl__im__2);
#line 142
//clear ___nl__int__3;
#line 142
//clear ___nl__int__4;
#line 142
//clear ___nl__int__5;
#line 142
//clear ___nl__bool__6;
#line 142
//clear ___nl__int__7;
#line 142
c_rt_lib0clear(&___nl__im__8);
#line 142
c_rt_lib0clear(&___nl__im__23);
#line 142
//clear ___nl__int__24;
#line 142
//clear ___nl__int__25;
#line 142
//clear ___nl__int__26;
#line 142
//clear ___nl__bool__27;
#line 142
//clear ___nl__int__28;
#line 142
c_rt_lib0clear(&___nl__im__29);
#line 142
c_rt_lib0clear(&___nl__im__30);
#line 142
c_rt_lib0clear(&___nl__im__32);
#line 142
return ___nl__im__22;
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
#line 149
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 149
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 149
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__8, ___get_global_const(79), ___nl__im__9));
#line 149
c_rt_lib0clear(&___nl__im__8);
#line 149
c_rt_lib0clear(&___nl__im__9);
#line 149
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__7));
#line 149
c_rt_lib0clear(&___nl__im__7);
#line 149
c_rt_lib0move(&___nl__im__10, c_fe_lib0file_to_string(___nl__im__1));
#line 149
c_rt_lib0move(&___nl__im__5, ptd0ensure(___nl__im__6, ___nl__im__10));
#line 149
c_rt_lib0clear(&___nl__im__6);
#line 149
c_rt_lib0clear(&___nl__im__10);
#line 149
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(80));
#line 149
if(___nl__bool__4){ goto label_1;}
#line 149
c_rt_lib0clear(&___nl__im__0);
#line 149
c_rt_lib0clear(&___nl__im__1);
#line 149
c_rt_lib0clear(&___nl__im__3);
#line 149
//clear ___nl__bool__4;
#line 149
return ___nl__im__5;
#line 149
label_1:
;
#line 149
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(80)));
#line 150
___nl__bool__12 = false;
#line 150
c_rt_lib0move(&___nl__im__11, nparser0sparse(___nl__im__3, ___nl__im__0, ___nl__bool__12));
#line 150
//clear ___nl__bool__12;
#line 151
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(80));
#line 151
if(___nl__bool__13){ goto label_3;}
#line 153
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(125));
#line 153
if(___nl__bool__13){ goto label_4;}
#line 153
c_rt_lib0move(&___nl__im__14,___get_global_const(16));
#line 153
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__11));
#line 153
nl_die_arg(___nl__im__14);
#line 151
label_3:
;
#line 151
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(80)));
#line 151
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 152
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__15));
#line 152
c_rt_lib0clear(&___nl__im__0);
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
c_rt_lib0clear(&___nl__im__3);
#line 152
//clear ___nl__bool__4;
#line 152
c_rt_lib0clear(&___nl__im__5);
#line 152
c_rt_lib0clear(&___nl__im__11);
#line 152
//clear ___nl__bool__13;
#line 152
c_rt_lib0clear(&___nl__im__14);
#line 152
c_rt_lib0clear(&___nl__im__15);
#line 152
c_rt_lib0clear(&___nl__im__16);
#line 152
return ___nl__im__17;
#line 153
goto label_2;
#line 153
label_4:
;
#line 153
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(125)));
#line 153
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 154
c_rt_lib0move(&___nl__im__20,___get_global_const(60));
#line 154
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__20));
#line 154
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 154
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__0, ___nl__im__21));
#line 154
c_rt_lib0move(&___nl__string__22,___get_global_const(60));
#line 154
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__22, ___nl__im__20));
#line 154
c_rt_lib0clear(&___nl__im__20);
#line 154
c_rt_lib0clear(&___nl__im__21);
#line 154
c_rt_lib0clear(&___nl__string__22);
#line 155
c_rt_lib0move(&___nl__im__23,___get_global_const(59));
#line 155
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__23));
#line 155
c_rt_lib0delete(hash0set_value(&___nl__im__23, ___nl__im__0, ___nl__im__18));
#line 155
c_rt_lib0move(&___nl__string__24,___get_global_const(59));
#line 155
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__24, ___nl__im__23));
#line 155
c_rt_lib0clear(&___nl__im__23);
#line 155
c_rt_lib0clear(&___nl__string__24);
#line 156
c_rt_lib0move(&___nl__im__26,___get_global_const(37));
#line 156
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__26));
#line 156
c_rt_lib0clear(&___nl__im__26);
#line 156
c_rt_lib0clear(&___nl__im__0);
#line 156
c_rt_lib0clear(&___nl__im__1);
#line 156
c_rt_lib0clear(&___nl__im__3);
#line 156
//clear ___nl__bool__4;
#line 156
c_rt_lib0clear(&___nl__im__5);
#line 156
c_rt_lib0clear(&___nl__im__11);
#line 156
//clear ___nl__bool__13;
#line 156
c_rt_lib0clear(&___nl__im__14);
#line 156
c_rt_lib0clear(&___nl__im__15);
#line 156
c_rt_lib0clear(&___nl__im__16);
#line 156
c_rt_lib0clear(&___nl__im__17);
#line 156
c_rt_lib0clear(&___nl__im__18);
#line 156
c_rt_lib0clear(&___nl__im__19);
#line 156
return ___nl__im__25;
#line 157
goto label_2;
#line 157
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
#line 161
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 165
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 165
___nl__int__4 = string0length(___nl__im__5);
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
___nl__int__6 = 0;
#line 165
___nl__int__7 = ___nl__int__4 == ___nl__int__6;
#line 165
___nl__bool__3 = ___nl__int__7;
#line 165
//clear ___nl__int__4;
#line 165
//clear ___nl__int__6;
#line 165
//clear ___nl__int__7;
#line 165
___nl__bool__3 = !___nl__bool__3;
#line 165
___nl__bool__3 = !___nl__bool__3;
#line 165
if(___nl__bool__3){ goto label_2;}
#line 162
c_rt_lib0move(&___nl__im__9,___get_global_const(153));
#line 162
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 162
___nl__bool__11 = hash0has_key(___nl__im__1, ___nl__im__12);
#line 162
c_rt_lib0clear(&___nl__im__12);
#line 162
if(___nl__bool__11){ goto label_4;}
#line 164
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 164
goto label_3;
#line 164
label_4:
;
#line 163
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 163
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__1, ___nl__im__14));
#line 163
c_rt_lib0clear(&___nl__im__14);
#line 163
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(75)));
#line 163
c_rt_lib0clear(&___nl__im__13);
#line 163
label_3:
;
#line 163
//clear ___nl__bool__11;
#line 163
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__10);
#line 163
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
goto label_1;
#line 163
label_2:
;
#line 163
label_1:
;
#line 163
//clear ___nl__bool__3;
#line 167
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(154)));
#line 167
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 167
c_rt_lib0clear(&___nl__im__17);
#line 167
c_rt_lib0move(&___nl__im__18,___get_global_const(41));
#line 167
c_rt_lib0move(&___nl__im__18, c_rt_lib0unary_minus(___nl__im__18));
#line 167
___nl__int__19 = getIntFromImm(___nl__im__18);
#line 167
___nl__int__20 = ___nl__int__16 == ___nl__int__19;
#line 167
___nl__bool__15 = ___nl__int__20;
#line 167
//clear ___nl__int__16;
#line 167
c_rt_lib0clear(&___nl__im__18);
#line 167
//clear ___nl__int__19;
#line 167
//clear ___nl__int__20;
#line 167
___nl__bool__15 = !___nl__bool__15;
#line 167
___nl__bool__15 = !___nl__bool__15;
#line 167
if(___nl__bool__15){ goto label_6;}
#line 166
c_rt_lib0move(&___nl__im__22,___get_global_const(155));
#line 166
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(154)));
#line 166
___nl__int__24 = getIntFromImm(___nl__im__25);
#line 166
c_rt_lib0clear(&___nl__im__25);
#line 166
c_rt_lib0move(&___nl__im__23, ptd0int_to_string(___nl__int__24));
#line 166
//clear ___nl__int__24;
#line 166
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 166
c_rt_lib0clear(&___nl__im__22);
#line 166
c_rt_lib0clear(&___nl__im__23);
#line 166
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__21));
#line 166
c_rt_lib0clear(&___nl__im__21);
#line 166
goto label_5;
#line 166
label_6:
;
#line 166
label_5:
;
#line 166
//clear ___nl__bool__15;
#line 168
c_rt_lib0move(&___nl__im__28, string0lf());
#line 168
c_rt_lib0move(&___nl__im__29,___get_global_const(156));
#line 168
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 168
c_rt_lib0clear(&___nl__im__28);
#line 168
c_rt_lib0clear(&___nl__im__29);
#line 168
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(157)));
#line 168
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 168
c_rt_lib0clear(&___nl__im__27);
#line 168
c_rt_lib0clear(&___nl__im__30);
#line 168
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 168
c_rt_lib0clear(&___nl__im__26);
#line 169
c_rt_lib0clear(&___nl__im__0);
#line 169
c_rt_lib0clear(&___nl__im__1);
#line 169
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
#line 173
___nl__int__2 = 0;
#line 174
___nl__int__3 = 0;
#line 175
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(60)));
#line 175
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__4));
#line 175
label_3:
;
#line 175
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 175
if(___nl__bool__6){ goto label_1;}
#line 175
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 175
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__5));
#line 176
c_rt_lib0move(&___nl__im__9,___get_global_const(158));
#line 177
___nl__int__11 = 0;
#line 177
___nl__int__12 = 1;
#line 177
___nl__int__13 = c_rt_lib0array_len(___nl__im__7);
#line 177
label_6:
;
#line 177
___nl__int__15 = ___nl__int__11 >= ___nl__int__13;
#line 177
___nl__bool__14 = ___nl__int__15;
#line 177
if(___nl__bool__14){ goto label_4;}
#line 177
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 177
c_rt_lib0copy(&___nl__im__10, ___nl__im__16);
#line 178
c_rt_lib0move(&___nl__im__18, interpreter_wrapper_priv0construct_error_message(___nl__im__10, ___nl__im__1));
#line 178
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 178
c_rt_lib0clear(&___nl__im__18);
#line 178
c_rt_lib0delete(c_fe_lib0print(___nl__im__17));
#line 178
c_rt_lib0clear(&___nl__im__17);
#line 178
c_rt_lib0clear(&___nl__im__10);
#line 178
label_5:
;
#line 179
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 179
goto label_6;
#line 179
label_4:
;
#line 180
___nl__int__19 = c_rt_lib0array_len(___nl__im__7);
#line 180
___nl__int__2 = ___nl__int__2 + ___nl__int__19;
#line 180
//clear ___nl__int__19;
#line 181
c_rt_lib0move(&___nl__im__9,___get_global_const(159));
#line 182
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(59)));
#line 182
c_rt_lib0move(&___nl__im__20, hash0get_value(___nl__im__21, ___nl__im__5));
#line 182
c_rt_lib0clear(&___nl__im__21);
#line 183
___nl__int__23 = 0;
#line 183
___nl__int__24 = 1;
#line 183
___nl__int__25 = c_rt_lib0array_len(___nl__im__20);
#line 183
label_9:
;
#line 183
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 183
___nl__bool__26 = ___nl__int__27;
#line 183
if(___nl__bool__26){ goto label_7;}
#line 183
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__20, ___nl__int__23));
#line 183
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 184
c_rt_lib0move(&___nl__im__30,___get_global_const(159));
#line 184
c_rt_lib0move(&___nl__im__31, interpreter_wrapper_priv0construct_error_message(___nl__im__22, ___nl__im__1));
#line 184
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__31));
#line 184
c_rt_lib0clear(&___nl__im__30);
#line 184
c_rt_lib0clear(&___nl__im__31);
#line 184
c_rt_lib0delete(c_fe_lib0print(___nl__im__29));
#line 184
c_rt_lib0clear(&___nl__im__29);
#line 184
c_rt_lib0clear(&___nl__im__22);
#line 184
label_8:
;
#line 185
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 185
goto label_9;
#line 185
label_7:
;
#line 186
___nl__int__32 = c_rt_lib0array_len(___nl__im__20);
#line 186
___nl__int__3 = ___nl__int__3 + ___nl__int__32;
#line 186
//clear ___nl__int__32;
#line 186
c_rt_lib0clear(&___nl__im__9);
#line 186
c_rt_lib0clear(&___nl__im__10);
#line 186
//clear ___nl__int__11;
#line 186
//clear ___nl__int__12;
#line 186
//clear ___nl__int__13;
#line 186
//clear ___nl__bool__14;
#line 186
//clear ___nl__int__15;
#line 186
c_rt_lib0clear(&___nl__im__16);
#line 186
c_rt_lib0clear(&___nl__im__20);
#line 186
c_rt_lib0clear(&___nl__im__22);
#line 186
//clear ___nl__int__23;
#line 186
//clear ___nl__int__24;
#line 186
//clear ___nl__int__25;
#line 186
//clear ___nl__bool__26;
#line 186
//clear ___nl__int__27;
#line 186
c_rt_lib0clear(&___nl__im__28);
#line 186
label_2:
;
#line 187
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 187
goto label_3;
#line 187
label_1:
;
#line 188
c_rt_lib0move(&___nl__im__36,___get_global_const(164));
#line 188
c_rt_lib0move(&___nl__im__37, ptd0int_to_string(___nl__int__3));
#line 188
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 188
c_rt_lib0clear(&___nl__im__36);
#line 188
c_rt_lib0clear(&___nl__im__37);
#line 189
c_rt_lib0move(&___nl__im__38,___get_global_const(165));
#line 189
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__38));
#line 189
c_rt_lib0clear(&___nl__im__35);
#line 189
c_rt_lib0clear(&___nl__im__38);
#line 189
c_rt_lib0move(&___nl__im__39, ptd0int_to_string(___nl__int__2));
#line 189
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__39));
#line 189
c_rt_lib0clear(&___nl__im__34);
#line 189
c_rt_lib0clear(&___nl__im__39);
#line 189
c_rt_lib0delete(c_fe_lib0print(___nl__im__33));
#line 189
c_rt_lib0clear(&___nl__im__33);
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__int__2;
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
//clear ___nl__bool__6;
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
c_rt_lib0clear(&___nl__im__10);
#line 190
//clear ___nl__int__11;
#line 190
//clear ___nl__int__12;
#line 190
//clear ___nl__int__13;
#line 190
//clear ___nl__bool__14;
#line 190
//clear ___nl__int__15;
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
c_rt_lib0clear(&___nl__im__22);
#line 190
//clear ___nl__int__23;
#line 190
//clear ___nl__int__24;
#line 190
//clear ___nl__int__25;
#line 190
//clear ___nl__bool__26;
#line 190
//clear ___nl__int__27;
#line 190
c_rt_lib0clear(&___nl__im__28);
#line 190
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
#line 194
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 195
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 195
label_3:
;
#line 195
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 195
if(___nl__bool__3){ goto label_1;}
#line 195
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 195
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 196
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 196
c_rt_lib0move(&___nl__im__6, translator0translate(___nl__im__4, ___nl__im__7));
#line 196
c_rt_lib0clear(&___nl__im__7);
#line 197
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 197
c_rt_lib0clear(&___nl__im__6);
#line 197
label_2:
;
#line 198
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 198
goto label_3;
#line 198
label_1:
;
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
//clear ___nl__bool__3;
#line 199
c_rt_lib0clear(&___nl__im__4);
#line 199
c_rt_lib0clear(&___nl__im__5);
#line 199
c_rt_lib0clear(&___nl__im__6);
#line 199
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
#line 203
___nl__int__2 = string0length(___nl__im__0);
#line 203
___nl__int__3 = 1;
#line 203
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 203
//clear ___nl__int__2;
#line 203
//clear ___nl__int__3;
#line 204
___nl__int__7 = 1;
#line 204
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__7));
#line 204
//clear ___nl__int__7;
#line 204
c_rt_lib0move(&___nl__im__8,___get_global_const(109));
#line 204
___nl__bool__4 = c_rt_lib0eq(___nl__im__6, ___nl__im__8);
#line 204
c_rt_lib0clear(&___nl__im__6);
#line 204
c_rt_lib0clear(&___nl__im__8);
#line 204
if(___nl__bool__4){ goto label_3;}
#line 204
___nl__int__10 = 1;
#line 204
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__10));
#line 204
//clear ___nl__int__10;
#line 204
c_rt_lib0move(&___nl__im__11,___get_global_const(113));
#line 204
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 204
c_rt_lib0clear(&___nl__im__9);
#line 204
c_rt_lib0clear(&___nl__im__11);
#line 204
label_3:
;
#line 204
//clear ___nl__bool__5;
#line 204
___nl__bool__4 = !___nl__bool__4;
#line 204
if(___nl__bool__4){ goto label_2;}
#line 204
___nl__int__12 = 1;
#line 204
___nl__int__1 = ___nl__int__1 - ___nl__int__12;
#line 204
//clear ___nl__int__12;
#line 204
goto label_1;
#line 204
label_2:
;
#line 204
label_1:
;
#line 204
//clear ___nl__bool__4;
#line 205
label_5:
;
#line 205
___nl__int__16 = 0;
#line 205
___nl__int__17 = ___nl__int__1 >= ___nl__int__16;
#line 205
___nl__bool__13 = ___nl__int__17;
#line 205
//clear ___nl__int__16;
#line 205
//clear ___nl__int__17;
#line 205
___nl__bool__15 = !___nl__bool__13;
#line 205
if(___nl__bool__15){ goto label_7;}
#line 205
___nl__int__19 = 1;
#line 205
c_rt_lib0move(&___nl__im__18, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__19));
#line 205
//clear ___nl__int__19;
#line 205
c_rt_lib0move(&___nl__im__20,___get_global_const(109));
#line 205
___nl__bool__13 = c_rt_lib0ne(___nl__im__18, ___nl__im__20);
#line 205
c_rt_lib0clear(&___nl__im__18);
#line 205
c_rt_lib0clear(&___nl__im__20);
#line 205
label_7:
;
#line 205
//clear ___nl__bool__15;
#line 205
___nl__bool__14 = !___nl__bool__13;
#line 205
if(___nl__bool__14){ goto label_6;}
#line 205
___nl__int__22 = 1;
#line 205
c_rt_lib0move(&___nl__im__21, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__22));
#line 205
//clear ___nl__int__22;
#line 205
c_rt_lib0move(&___nl__im__23,___get_global_const(113));
#line 205
___nl__bool__13 = c_rt_lib0ne(___nl__im__21, ___nl__im__23);
#line 205
c_rt_lib0clear(&___nl__im__21);
#line 205
c_rt_lib0clear(&___nl__im__23);
#line 205
label_6:
;
#line 205
//clear ___nl__bool__14;
#line 205
___nl__bool__13 = !___nl__bool__13;
#line 205
if(___nl__bool__13){ goto label_4;}
#line 205
___nl__int__24 = 1;
#line 205
___nl__int__1 = ___nl__int__1 - ___nl__int__24;
#line 205
//clear ___nl__int__24;
#line 205
goto label_5;
#line 205
label_4:
;
#line 206
___nl__int__26 = 0;
#line 206
___nl__int__27 = ___nl__int__1 <= ___nl__int__26;
#line 206
___nl__bool__25 = ___nl__int__27;
#line 206
//clear ___nl__int__26;
#line 206
//clear ___nl__int__27;
#line 206
___nl__bool__25 = !___nl__bool__25;
#line 206
if(___nl__bool__25){ goto label_9;}
#line 206
c_rt_lib0move(&___nl__im__28,___get_global_const(114));
#line 206
c_rt_lib0clear(&___nl__im__0);
#line 206
//clear ___nl__int__1;
#line 206
//clear ___nl__bool__13;
#line 206
//clear ___nl__bool__25;
#line 206
return ___nl__im__28;
#line 206
goto label_8;
#line 206
label_9:
;
#line 206
label_8:
;
#line 206
//clear ___nl__bool__25;
#line 206
c_rt_lib0clear(&___nl__im__28);
#line 207
___nl__int__30 = 0;
#line 207
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__0, ___nl__int__30, ___nl__int__1));
#line 207
//clear ___nl__int__30;
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
//clear ___nl__int__1;
#line 207
//clear ___nl__bool__13;
#line 207
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
