
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
ImmT  res = interpreter_wrapper0errors_hash_t();
return res;
}
ImmT interpreter_wrapper0errors_hash_t(){
interpreter_wrapper_priv0__const__init();
return interpreter_wrapper_priv0__const__sing(0);
}
ImmT interpreter_wrapper0errors_hash_t0cal() {
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_string_const(52), ___get_global_string_const(53)));
#line 20
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
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
ImmT  res = interpreter_wrapper0errors_group_t();
return res;
}
ImmT interpreter_wrapper0errors_group_t(){
interpreter_wrapper_priv0__const__init();
return interpreter_wrapper_priv0__const__sing(1);
}
ImmT interpreter_wrapper0errors_group_t0cal() {
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_string_const(1030), ___get_global_string_const(55)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(interpreter_wrapper0errors_hash_t0ptr, ___get_global_string_const(1030), ___get_global_string_const(55)));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 26
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(58), ___nl__im__2, ___get_global_string_const(59), ___nl__im__3));
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
ImmT  res = interpreter_wrapper0module_t();
return res;
}
ImmT interpreter_wrapper0module_t(){
interpreter_wrapper_priv0__const__init();
return interpreter_wrapper_priv0__const__sing(2);
}
ImmT interpreter_wrapper0module_t0cal() {
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 31
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 31
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(1, ___get_global_string_const(78), ___nl__im__3));
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

ImmT interpreter_wrapper_priv0get_known_func(){
interpreter_wrapper_priv0__const__init();
return interpreter_wrapper_priv0__const__sing(3);
}
ImmT interpreter_wrapper_priv0get_known_func0cal() {
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(1031));
#line 36
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_string_const(67), ___get_global_string_const(1032)));
#line 36
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(889)));
#line 36
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 36
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__6));
#line 36
c_rt_lib0clear(&___nl__im__6);
#line 36
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(248), ___nl__im__3, ___get_global_string_const(215), ___nl__im__4, ___get_global_string_const(276), ___nl__im__5, ___get_global_string_const(257), ___nl__im__7));
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

ImmT  interpreter_wrapper0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "interpreter_wrapper0compile");
ImmT  *var0 = &(_tab[0]);
INT  res = interpreter_wrapper0compile(*var0);
return c_rt_lib0int_new(res);
}
INT  interpreter_wrapper0compile(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
interpreter_wrapper_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
#line 42
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 43
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 44
___nl__int__3 = 1;
#line 44
label_3:
;
#line 44
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 44
___nl__bool__4 = ___nl__int__3 < ___nl__int__5;
#line 44
//clear ___nl__int__5;
#line 44
___nl__bool__4 = !___nl__bool__4;
#line 44
if(___nl__bool__4){ goto label_41;}
#line 45
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 45
c_rt_lib0move(&___nl__im__8,___get_global_string_const(200));
#line 45
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 45
c_rt_lib0clear(&___nl__im__7);
#line 45
c_rt_lib0clear(&___nl__im__8);
#line 45
___nl__bool__6 = !___nl__bool__6;
#line 45
if(___nl__bool__6){ goto label_32;}
#line 46
___nl__int__10 = 1;
#line 46
___nl__int__9 = ___nl__int__3 + ___nl__int__10;
#line 46
//clear ___nl__int__10;
#line 46
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 46
___nl__int__12 = ___nl__int__13 - ___nl__int__3;
#line 46
//clear ___nl__int__13;
#line 46
___nl__int__14 = 1;
#line 46
___nl__int__11 = ___nl__int__12 - ___nl__int__14;
#line 46
//clear ___nl__int__12;
#line 46
//clear ___nl__int__14;
#line 46
c_rt_lib0move(&___nl__im__2, array0subarray(___nl__im__0, ___nl__int__9, ___nl__int__11));
#line 46
//clear ___nl__int__9;
#line 46
//clear ___nl__int__11;
#line 47
//clear ___nl__bool__6;
#line 47
goto label_41;
#line 48
goto label_32;
#line 48
label_32:
;
#line 48
//clear ___nl__bool__6;
#line 49
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 49
c_rt_lib0array_push(&___nl__im__1, ___nl__im__15);
#line 49
c_rt_lib0clear(&___nl__im__15);
#line 44
___nl__int__16 = 1;
#line 44
___nl__int__3 = ___nl__int__3 + ___nl__int__16;
#line 44
//clear ___nl__int__16;
#line 50
goto label_3;
#line 50
label_41:
;
#line 51
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(1, ___nl__im__2));
#line 51
___nl__int__17 = interpreter_wrapper0exec_interpreter(___nl__im__1, ___nl__im__18);
#line 51
c_rt_lib0clear(&___nl__im__18);
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
return ___nl__int__17;
return 0;

}

ImmT  interpreter_wrapper0exec_interpreter0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "interpreter_wrapper0exec_interpreter");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
INT  res = interpreter_wrapper0exec_interpreter(*var0, *var1);
return c_rt_lib0int_new(res);
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
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
#line 56
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 58
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 59
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 59
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(58), ___nl__im__4, ___get_global_string_const(59), ___nl__im__5));
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
label_9:
;
#line 63
___nl__bool__9 = c_rt_lib0is_end_hash(___nl__im__11);
#line 63
if(___nl__bool__9){ goto label_46;}
#line 63
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_key_iter(___nl__im__11));
#line 63
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value(___nl__im__7, ___nl__im__8));
#line 64
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(78)));
#line 64
c_rt_lib0move(&___nl__im__12, interpreter_wrapper_priv0parse_module(___nl__im__8, ___nl__im__13, &___nl__im__3));
#line 64
c_rt_lib0clear(&___nl__im__13);
#line 64
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(83));
#line 64
if(___nl__bool__14){ goto label_24;}
#line 66
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(82));
#line 66
if(___nl__bool__14){ goto label_29;}
#line 66
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 66
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 66
nl_die_arg(___nl__im__15);
#line 64
label_24:
;
#line 64
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(83)));
#line 64
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 65
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__8, ___nl__im__16));
#line 66
goto label_36;
#line 66
label_29:
;
#line 66
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(82)));
#line 66
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 67
___nl__int__20 = 1;
#line 67
___nl__int__6 = ___nl__int__6 + ___nl__int__20;
#line 67
//clear ___nl__int__20;
#line 68
goto label_36;
#line 68
label_36:
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
goto label_9;
#line 69
label_46:
;
#line 70
___nl__int__22 = 0;
#line 70
___nl__bool__21 = ___nl__int__6 != ___nl__int__22;
#line 70
//clear ___nl__int__22;
#line 70
___nl__bool__21 = !___nl__bool__21;
#line 70
if(___nl__bool__21){ goto label_76;}
#line 71
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(0));
#line 71
interpreter_wrapper_priv0show_and_count_errors(___nl__im__3, ___nl__im__23);
#line 71
c_rt_lib0clear(&___nl__im__23);
#line 72
___nl__int__24 = 1;
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
return ___nl__int__24;
#line 73
goto label_76;
#line 73
label_76:
;
#line 73
//clear ___nl__bool__21;
#line 73
//clear ___nl__int__24;
#line 74
c_rt_lib0move(&___nl__im__25, interpreter_wrapper_priv0translate(___nl__im__2));
#line 75
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 76
c_rt_lib0move(&___nl__im__27,___get_global_string_const(36));
#line 77
c_rt_lib0move(&___nl__im__31, c_rt_lib0init_iter(___nl__im__25));
#line 77
label_83:
;
#line 77
___nl__bool__29 = c_rt_lib0is_end_hash(___nl__im__31);
#line 77
if(___nl__bool__29){ goto label_122;}
#line 77
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_key_iter(___nl__im__31));
#line 77
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value(___nl__im__25, ___nl__im__28));
#line 78
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(218)));
#line 78
___nl__int__34 = 0;
#line 78
___nl__int__35 = 1;
#line 78
___nl__int__36 = c_rt_lib0array_len(___nl__im__32);
#line 78
label_92:
;
#line 78
___nl__bool__37 = ___nl__int__34 >= ___nl__int__36;
#line 78
if(___nl__bool__37){ goto label_111;}
#line 78
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__32, ___nl__int__34));
#line 78
c_rt_lib0copy(&___nl__im__33, ___nl__im__38);
#line 79
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_string_const(175)));
#line 79
c_rt_lib0move(&___nl__im__41,___get_global_string_const(153));
#line 79
___nl__bool__39 = c_rt_lib0eq(___nl__im__40, ___nl__im__41);
#line 79
c_rt_lib0clear(&___nl__im__40);
#line 79
c_rt_lib0clear(&___nl__im__41);
#line 79
___nl__bool__39 = !___nl__bool__39;
#line 79
if(___nl__bool__39){ goto label_106;}
#line 80
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 81
goto label_106;
#line 81
label_106:
;
#line 81
//clear ___nl__bool__39;
#line 81
c_rt_lib0clear(&___nl__im__33);
#line 82
___nl__int__34 = ___nl__int__34 + ___nl__int__35;
#line 82
goto label_92;
#line 82
label_111:
;
#line 83
c_rt_lib0delete(array0push(&___nl__im__26, ___nl__im__30));
#line 83
c_rt_lib0clear(&___nl__im__32);
#line 83
c_rt_lib0clear(&___nl__im__33);
#line 83
//clear ___nl__int__34;
#line 83
//clear ___nl__int__35;
#line 83
//clear ___nl__int__36;
#line 83
//clear ___nl__bool__37;
#line 83
c_rt_lib0clear(&___nl__im__38);
#line 84
c_rt_lib0move(&___nl__im__31, c_rt_lib0next_iter(___nl__im__31));
#line 84
goto label_83;
#line 84
label_122:
;
#line 85
c_rt_lib0move(&___nl__im__43, interpreter_wrapper_priv0get_known_func());
#line 85
c_rt_lib0move(&___nl__im__42, interpreter0init(___nl__im__26, ___nl__im__43));
#line 85
c_rt_lib0clear(&___nl__im__43);
#line 86
c_rt_lib0move(&___nl__im__46,___get_global_string_const(153));
#line 86
c_rt_lib0move(&___nl__im__45, interpreter0start_args(&___nl__im__42, ___nl__im__46, ___nl__im__27, ___nl__im__1));
#line 86
c_rt_lib0clear(&___nl__im__46);
#line 86
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__45, ___get_global_string_const(83));
#line 86
if(___nl__bool__44){ goto label_133;}
#line 86
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(185), ___nl__im__45));
#line 86
nl_die_arg(___nl__im__45);
#line 86
label_133:
;
#line 87
c_rt_lib0move(&___nl__im__48, interpreter0exec_all_code(___nl__im__42));
#line 87
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(83));
#line 87
if(___nl__bool__47){ goto label_139;}
#line 87
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(185), ___nl__im__48));
#line 87
nl_die_arg(___nl__im__48);
#line 87
label_139:
;
#line 88
___nl__int__49 = 0;
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
c_rt_lib0clear(&___nl__im__25);
#line 88
c_rt_lib0clear(&___nl__im__26);
#line 88
c_rt_lib0clear(&___nl__im__27);
#line 88
c_rt_lib0clear(&___nl__im__28);
#line 88
//clear ___nl__bool__29;
#line 88
c_rt_lib0clear(&___nl__im__30);
#line 88
c_rt_lib0clear(&___nl__im__31);
#line 88
c_rt_lib0clear(&___nl__im__32);
#line 88
c_rt_lib0clear(&___nl__im__33);
#line 88
//clear ___nl__int__34;
#line 88
//clear ___nl__int__35;
#line 88
//clear ___nl__int__36;
#line 88
//clear ___nl__bool__37;
#line 88
c_rt_lib0clear(&___nl__im__38);
#line 88
c_rt_lib0clear(&___nl__im__42);
#line 88
//clear ___nl__bool__44;
#line 88
c_rt_lib0clear(&___nl__im__45);
#line 88
//clear ___nl__bool__47;
#line 88
c_rt_lib0clear(&___nl__im__48);
#line 88
return ___nl__int__49;
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
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
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
label_5:
;
#line 93
___nl__int__7 = 0;
#line 93
___nl__bool__4 = ___nl__int__1 >= ___nl__int__7;
#line 93
//clear ___nl__int__7;
#line 93
___nl__bool__6 = !___nl__bool__4;
#line 93
if(___nl__bool__6){ goto label_18;}
#line 93
___nl__int__9 = 1;
#line 93
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 93
//clear ___nl__int__9;
#line 93
c_rt_lib0move(&___nl__im__10,___get_global_string_const(110));
#line 93
___nl__bool__4 = c_rt_lib0ne(___nl__im__8, ___nl__im__10);
#line 93
c_rt_lib0clear(&___nl__im__8);
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 93
label_18:
;
#line 93
//clear ___nl__bool__6;
#line 93
___nl__bool__5 = !___nl__bool__4;
#line 93
if(___nl__bool__5){ goto label_29;}
#line 93
___nl__int__12 = 1;
#line 93
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__12));
#line 93
//clear ___nl__int__12;
#line 93
c_rt_lib0move(&___nl__im__13,___get_global_string_const(114));
#line 93
___nl__bool__4 = c_rt_lib0ne(___nl__im__11, ___nl__im__13);
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
c_rt_lib0clear(&___nl__im__13);
#line 93
label_29:
;
#line 93
//clear ___nl__bool__5;
#line 93
___nl__bool__4 = !___nl__bool__4;
#line 93
if(___nl__bool__4){ goto label_54;}
#line 94
___nl__int__16 = 1;
#line 94
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__16));
#line 94
//clear ___nl__int__16;
#line 94
c_rt_lib0move(&___nl__im__17,___get_global_string_const(115));
#line 94
___nl__bool__14 = c_rt_lib0eq(___nl__im__15, ___nl__im__17);
#line 94
c_rt_lib0clear(&___nl__im__15);
#line 94
c_rt_lib0clear(&___nl__im__17);
#line 94
___nl__bool__14 = !___nl__bool__14;
#line 94
if(___nl__bool__14){ goto label_48;}
#line 95
___nl__int__18 = 1;
#line 95
___nl__int__1 = ___nl__int__1 - ___nl__int__18;
#line 95
//clear ___nl__int__18;
#line 96
//clear ___nl__bool__14;
#line 96
goto label_54;
#line 97
goto label_48;
#line 97
label_48:
;
#line 97
//clear ___nl__bool__14;
#line 98
___nl__int__19 = 1;
#line 98
___nl__int__1 = ___nl__int__1 - ___nl__int__19;
#line 98
//clear ___nl__int__19;
#line 99
goto label_5;
#line 99
label_54:
;
#line 100
c_rt_lib0move(&___nl__im__20,___get_global_string_const(36));
#line 101
label_56:
;
#line 101
___nl__int__24 = 0;
#line 101
___nl__bool__21 = ___nl__int__1 >= ___nl__int__24;
#line 101
//clear ___nl__int__24;
#line 101
___nl__bool__23 = !___nl__bool__21;
#line 101
if(___nl__bool__23){ goto label_69;}
#line 101
___nl__int__26 = 1;
#line 101
c_rt_lib0move(&___nl__im__25, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__26));
#line 101
//clear ___nl__int__26;
#line 101
c_rt_lib0move(&___nl__im__27,___get_global_string_const(110));
#line 101
___nl__bool__21 = c_rt_lib0ne(___nl__im__25, ___nl__im__27);
#line 101
c_rt_lib0clear(&___nl__im__25);
#line 101
c_rt_lib0clear(&___nl__im__27);
#line 101
label_69:
;
#line 101
//clear ___nl__bool__23;
#line 101
___nl__bool__22 = !___nl__bool__21;
#line 101
if(___nl__bool__22){ goto label_80;}
#line 101
___nl__int__29 = 1;
#line 101
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__29));
#line 101
//clear ___nl__int__29;
#line 101
c_rt_lib0move(&___nl__im__30,___get_global_string_const(114));
#line 101
___nl__bool__21 = c_rt_lib0ne(___nl__im__28, ___nl__im__30);
#line 101
c_rt_lib0clear(&___nl__im__28);
#line 101
c_rt_lib0clear(&___nl__im__30);
#line 101
label_80:
;
#line 101
//clear ___nl__bool__22;
#line 101
___nl__bool__21 = !___nl__bool__21;
#line 101
if(___nl__bool__21){ goto label_93;}
#line 102
___nl__int__32 = 1;
#line 102
c_rt_lib0move(&___nl__im__31, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__32));
#line 102
//clear ___nl__int__32;
#line 102
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__31, ___nl__im__20));
#line 102
c_rt_lib0clear(&___nl__im__31);
#line 103
___nl__int__33 = 1;
#line 103
___nl__int__1 = ___nl__int__1 - ___nl__int__33;
#line 103
//clear ___nl__int__33;
#line 104
goto label_56;
#line 104
label_93:
;
#line 105
c_rt_lib0clear(&___nl__im__0);
#line 105
//clear ___nl__int__1;
#line 105
//clear ___nl__bool__4;
#line 105
//clear ___nl__bool__21;
#line 105
return ___nl__im__20;
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
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
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
___nl__bool__4 = ___nl__int__5 <= ___nl__int__6;
#line 110
//clear ___nl__int__5;
#line 110
//clear ___nl__int__6;
#line 110
___nl__bool__4 = !___nl__bool__4;
#line 110
if(___nl__bool__4){ goto label_17;}
#line 110
___nl__bool__7 = false;
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
c_rt_lib0clear(&___nl__im__1);
#line 110
c_rt_lib0clear(&___nl__im__2);
#line 110
//clear ___nl__bool__4;
#line 110
return ___nl__bool__7;
#line 110
goto label_17;
#line 110
label_17:
;
#line 110
//clear ___nl__bool__4;
#line 110
//clear ___nl__bool__7;
#line 111
___nl__int__9 = string0length(___nl__im__0);
#line 111
___nl__int__10 = getIntFromImm(___nl__im__2);
#line 111
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 111
//clear ___nl__int__9;
#line 111
//clear ___nl__int__10;
#line 111
___nl__int__11 = getIntFromImm(___nl__im__2);
#line 111
c_rt_lib0move(&___nl__im__2, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__11));
#line 111
//clear ___nl__int__8;
#line 111
//clear ___nl__int__11;
#line 112
___nl__bool__12 = c_rt_lib0eq(___nl__im__2, ___nl__im__1);
#line 112
c_rt_lib0clear(&___nl__im__0);
#line 112
c_rt_lib0clear(&___nl__im__1);
#line 112
c_rt_lib0clear(&___nl__im__2);
#line 112
return ___nl__bool__12;
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
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
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
label_11:
;
#line 118
___nl__bool__10 = ___nl__int__7 >= ___nl__int__9;
#line 118
if(___nl__bool__10){ goto label_28;}
#line 118
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__2, ___nl__int__7));
#line 118
c_rt_lib0copy(&___nl__im__6, ___nl__im__11);
#line 119
c_rt_lib0move(&___nl__im__13,___get_global_string_const(120));
#line 119
___nl__bool__12 = interpreter_wrapper_priv0has_extension(___nl__im__6, ___nl__im__13);
#line 119
c_rt_lib0clear(&___nl__im__13);
#line 119
___nl__bool__12 = !___nl__bool__12;
#line 119
if(___nl__bool__12){ goto label_23;}
#line 119
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 119
goto label_23;
#line 119
label_23:
;
#line 119
//clear ___nl__bool__12;
#line 119
c_rt_lib0clear(&___nl__im__6);
#line 120
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 120
goto label_11;
#line 120
label_28:
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
c_rt_lib0clear(&___nl__im__11);
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
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 125
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 126
___nl__int__3 = 0;
#line 126
___nl__int__4 = 1;
#line 126
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 126
label_4:
;
#line 126
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 126
if(___nl__bool__6){ goto label_50;}
#line 126
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 126
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 127
c_rt_lib0move(&___nl__im__9,___get_global_string_const(120));
#line 127
___nl__bool__8 = interpreter_wrapper_priv0has_extension(___nl__im__2, ___nl__im__9);
#line 127
c_rt_lib0clear(&___nl__im__9);
#line 127
___nl__bool__8 = !___nl__bool__8;
#line 127
if(___nl__bool__8){ goto label_20;}
#line 128
c_rt_lib0move(&___nl__im__11, interpreter_wrapper_priv0get_dir(___nl__im__2));
#line 128
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(126), ___nl__im__11, ___get_global_string_const(122), ___nl__im__2));
#line 128
c_rt_lib0clear(&___nl__im__11);
#line 128
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__10));
#line 128
c_rt_lib0clear(&___nl__im__10);
#line 129
goto label_38;
#line 129
label_20:
;
#line 130
c_rt_lib0move(&___nl__im__12, interpreter_wrapper_priv0get_all_nianio_file(___nl__im__2));
#line 130
___nl__int__14 = 0;
#line 130
___nl__int__15 = 1;
#line 130
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 130
label_25:
;
#line 130
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 130
if(___nl__bool__17){ goto label_36;}
#line 130
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 130
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 131
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(126), ___nl__im__2, ___get_global_string_const(122), ___nl__im__13));
#line 131
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__19));
#line 131
c_rt_lib0clear(&___nl__im__19);
#line 131
c_rt_lib0clear(&___nl__im__13);
#line 132
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 132
goto label_25;
#line 132
label_36:
;
#line 133
goto label_38;
#line 133
label_38:
;
#line 133
//clear ___nl__bool__8;
#line 133
c_rt_lib0clear(&___nl__im__12);
#line 133
c_rt_lib0clear(&___nl__im__13);
#line 133
//clear ___nl__int__14;
#line 133
//clear ___nl__int__15;
#line 133
//clear ___nl__int__16;
#line 133
//clear ___nl__bool__17;
#line 133
c_rt_lib0clear(&___nl__im__18);
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 134
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 134
goto label_4;
#line 134
label_50:
;
#line 135
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 136
___nl__int__22 = 0;
#line 136
___nl__int__23 = 1;
#line 136
___nl__int__24 = c_rt_lib0array_len(___nl__im__1);
#line 136
label_55:
;
#line 136
___nl__bool__25 = ___nl__int__22 >= ___nl__int__24;
#line 136
if(___nl__bool__25){ goto label_70;}
#line 136
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__1, ___nl__int__22));
#line 136
c_rt_lib0copy(&___nl__im__21, ___nl__im__26);
#line 137
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(122)));
#line 137
c_rt_lib0move(&___nl__im__27, interpreter_wrapper_priv0get_module_name(___nl__im__28));
#line 137
c_rt_lib0clear(&___nl__im__28);
#line 138
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(122)));
#line 138
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(1, ___get_global_string_const(78), ___nl__im__30));
#line 138
c_rt_lib0clear(&___nl__im__30);
#line 139
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__27, ___nl__im__29));
#line 139
c_rt_lib0clear(&___nl__im__21);
#line 140
___nl__int__22 = ___nl__int__22 + ___nl__int__23;
#line 140
goto label_55;
#line 140
label_70:
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
c_rt_lib0clear(&___nl__im__7);
#line 141
c_rt_lib0clear(&___nl__im__21);
#line 141
//clear ___nl__int__22;
#line 141
//clear ___nl__int__23;
#line 141
//clear ___nl__int__24;
#line 141
//clear ___nl__bool__25;
#line 141
c_rt_lib0clear(&___nl__im__26);
#line 141
c_rt_lib0clear(&___nl__im__27);
#line 141
c_rt_lib0clear(&___nl__im__29);
#line 141
return ___nl__im__20;
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_string_const(83), ___nl__im__8, ___get_global_string_const(82), ___nl__im__9));
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
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(83));
#line 148
if(___nl__bool__4){ goto label_18;}
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
label_18:
;
#line 148
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(83)));
#line 149
___nl__bool__12 = false;
#line 149
c_rt_lib0move(&___nl__im__11, nparser0sparse(___nl__im__3, ___nl__im__0, ___nl__bool__12));
#line 149
//clear ___nl__bool__12;
#line 150
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(83));
#line 150
if(___nl__bool__13){ goto label_30;}
#line 152
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(129));
#line 152
if(___nl__bool__13){ goto label_46;}
#line 152
c_rt_lib0move(&___nl__im__14,___get_global_string_const(15));
#line 152
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__11));
#line 152
nl_die_arg(___nl__im__14);
#line 150
label_30:
;
#line 150
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(83)));
#line 150
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 151
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__15));
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
goto label_83;
#line 152
label_46:
;
#line 152
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(129)));
#line 152
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 153
c_rt_lib0move(&___nl__im__20,___get_global_string_const(59));
#line 153
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__20));
#line 153
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 153
c_rt_lib0delete(hash0set_value(&___nl__im__20, ___nl__im__0, ___nl__im__21));
#line 153
c_rt_lib0move(&___nl__string__22,___get_global_string_const(59));
#line 153
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__22, ___nl__im__20));
#line 153
c_rt_lib0clear(&___nl__im__20);
#line 153
c_rt_lib0clear(&___nl__im__21);
#line 153
c_rt_lib0clear(&___nl__string__22);
#line 154
c_rt_lib0move(&___nl__im__23,___get_global_string_const(58));
#line 154
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__23));
#line 154
c_rt_lib0delete(hash0set_value(&___nl__im__23, ___nl__im__0, ___nl__im__18));
#line 154
c_rt_lib0move(&___nl__string__24,___get_global_string_const(58));
#line 154
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__24, ___nl__im__23));
#line 154
c_rt_lib0clear(&___nl__im__23);
#line 154
c_rt_lib0clear(&___nl__string__24);
#line 155
c_rt_lib0move(&___nl__im__26,___get_global_string_const(36));
#line 155
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__26));
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
goto label_83;
#line 156
label_83:
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
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 160
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 164
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 164
___nl__int__4 = string0length(___nl__im__5);
#line 164
c_rt_lib0clear(&___nl__im__5);
#line 164
___nl__int__6 = 0;
#line 164
___nl__bool__3 = ___nl__int__4 == ___nl__int__6;
#line 164
//clear ___nl__int__4;
#line 164
//clear ___nl__int__6;
#line 164
___nl__bool__3 = !___nl__bool__3;
#line 164
___nl__bool__3 = !___nl__bool__3;
#line 164
if(___nl__bool__3){ goto label_32;}
#line 161
c_rt_lib0move(&___nl__im__8,___get_global_string_const(160));
#line 161
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 161
___nl__bool__10 = hash0has_key(___nl__im__1, ___nl__im__11);
#line 161
c_rt_lib0clear(&___nl__im__11);
#line 161
if(___nl__bool__10){ goto label_18;}
#line 163
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 163
goto label_24;
#line 163
label_18:
;
#line 162
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(159)));
#line 162
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__1, ___nl__im__13));
#line 162
c_rt_lib0clear(&___nl__im__13);
#line 162
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(78)));
#line 162
c_rt_lib0clear(&___nl__im__12);
#line 162
label_24:
;
#line 162
//clear ___nl__bool__10;
#line 162
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 162
c_rt_lib0clear(&___nl__im__8);
#line 162
c_rt_lib0clear(&___nl__im__9);
#line 162
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__7));
#line 162
c_rt_lib0clear(&___nl__im__7);
#line 162
goto label_32;
#line 162
label_32:
;
#line 162
//clear ___nl__bool__3;
#line 165
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 165
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 165
c_rt_lib0clear(&___nl__im__16);
#line 165
___nl__int__17 = 1;
#line 165
___nl__int__17 = -___nl__int__17;
#line 165
___nl__bool__14 = ___nl__int__15 == ___nl__int__17;
#line 165
//clear ___nl__int__15;
#line 165
//clear ___nl__int__17;
#line 165
___nl__bool__14 = !___nl__bool__14;
#line 165
___nl__bool__14 = !___nl__bool__14;
#line 165
if(___nl__bool__14){ goto label_57;}
#line 165
c_rt_lib0move(&___nl__im__19,___get_global_string_const(162));
#line 165
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 165
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 165
c_rt_lib0clear(&___nl__im__21);
#line 165
c_rt_lib0move(&___nl__string__22, c_rt_lib0int_to_string(___nl__int__20));
#line 165
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__22));
#line 165
c_rt_lib0clear(&___nl__im__19);
#line 165
//clear ___nl__int__20;
#line 165
c_rt_lib0clear(&___nl__string__22);
#line 165
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 165
c_rt_lib0clear(&___nl__im__18);
#line 165
goto label_57;
#line 165
label_57:
;
#line 165
//clear ___nl__bool__14;
#line 166
c_rt_lib0move(&___nl__im__25, string0lf());
#line 166
c_rt_lib0move(&___nl__im__26,___get_global_string_const(163));
#line 166
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 166
c_rt_lib0clear(&___nl__im__25);
#line 166
c_rt_lib0clear(&___nl__im__26);
#line 166
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(164)));
#line 166
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__27));
#line 166
c_rt_lib0clear(&___nl__im__24);
#line 166
c_rt_lib0clear(&___nl__im__27);
#line 166
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 166
c_rt_lib0clear(&___nl__im__23);
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
c_rt_lib0clear(&___nl__im__1);
#line 167
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__string__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__string__37 = NULL;
#line 171
___nl__int__2 = 0;
#line 172
___nl__int__3 = 0;
#line 173
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(59)));
#line 173
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__4));
#line 173
label_4:
;
#line 173
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 173
if(___nl__bool__6){ goto label_72;}
#line 173
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 173
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__5));
#line 174
c_rt_lib0move(&___nl__im__9,___get_global_string_const(165));
#line 175
___nl__int__11 = 0;
#line 175
___nl__int__12 = 1;
#line 175
___nl__int__13 = c_rt_lib0array_len(___nl__im__7);
#line 175
label_13:
;
#line 175
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 175
if(___nl__bool__14){ goto label_26;}
#line 175
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 175
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 176
c_rt_lib0move(&___nl__im__17, interpreter_wrapper_priv0construct_error_message(___nl__im__10, ___nl__im__1));
#line 176
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__9, ___nl__im__17));
#line 176
c_rt_lib0clear(&___nl__im__17);
#line 176
c_rt_lib0delete(c_fe_lib0print(___nl__im__16));
#line 176
c_rt_lib0clear(&___nl__im__16);
#line 176
c_rt_lib0clear(&___nl__im__10);
#line 177
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 177
goto label_13;
#line 177
label_26:
;
#line 178
___nl__int__18 = c_rt_lib0array_len(___nl__im__7);
#line 178
___nl__int__2 = ___nl__int__2 + ___nl__int__18;
#line 178
//clear ___nl__int__18;
#line 179
c_rt_lib0move(&___nl__im__9,___get_global_string_const(166));
#line 180
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(58)));
#line 180
c_rt_lib0move(&___nl__im__19, hash0get_value(___nl__im__20, ___nl__im__5));
#line 180
c_rt_lib0clear(&___nl__im__20);
#line 181
___nl__int__22 = 0;
#line 181
___nl__int__23 = 1;
#line 181
___nl__int__24 = c_rt_lib0array_len(___nl__im__19);
#line 181
label_37:
;
#line 181
___nl__bool__25 = ___nl__int__22 >= ___nl__int__24;
#line 181
if(___nl__bool__25){ goto label_52;}
#line 181
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__22));
#line 181
c_rt_lib0copy(&___nl__im__21, ___nl__im__26);
#line 182
c_rt_lib0move(&___nl__im__28,___get_global_string_const(166));
#line 182
c_rt_lib0move(&___nl__im__29, interpreter_wrapper_priv0construct_error_message(___nl__im__21, ___nl__im__1));
#line 182
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 182
c_rt_lib0clear(&___nl__im__28);
#line 182
c_rt_lib0clear(&___nl__im__29);
#line 182
c_rt_lib0delete(c_fe_lib0print(___nl__im__27));
#line 182
c_rt_lib0clear(&___nl__im__27);
#line 182
c_rt_lib0clear(&___nl__im__21);
#line 183
___nl__int__22 = ___nl__int__22 + ___nl__int__23;
#line 183
goto label_37;
#line 183
label_52:
;
#line 184
___nl__int__30 = c_rt_lib0array_len(___nl__im__19);
#line 184
___nl__int__3 = ___nl__int__3 + ___nl__int__30;
#line 184
//clear ___nl__int__30;
#line 184
c_rt_lib0clear(&___nl__im__9);
#line 184
c_rt_lib0clear(&___nl__im__10);
#line 184
//clear ___nl__int__11;
#line 184
//clear ___nl__int__12;
#line 184
//clear ___nl__int__13;
#line 184
//clear ___nl__bool__14;
#line 184
c_rt_lib0clear(&___nl__im__15);
#line 184
c_rt_lib0clear(&___nl__im__19);
#line 184
c_rt_lib0clear(&___nl__im__21);
#line 184
//clear ___nl__int__22;
#line 184
//clear ___nl__int__23;
#line 184
//clear ___nl__int__24;
#line 184
//clear ___nl__bool__25;
#line 184
c_rt_lib0clear(&___nl__im__26);
#line 185
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 185
goto label_4;
#line 185
label_72:
;
#line 186
c_rt_lib0move(&___nl__im__34,___get_global_string_const(171));
#line 186
c_rt_lib0move(&___nl__string__35, c_rt_lib0int_to_string(___nl__int__3));
#line 186
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__string__35));
#line 186
c_rt_lib0clear(&___nl__im__34);
#line 186
c_rt_lib0clear(&___nl__string__35);
#line 186
c_rt_lib0move(&___nl__im__36,___get_global_string_const(172));
#line 186
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__36));
#line 186
c_rt_lib0clear(&___nl__im__33);
#line 186
c_rt_lib0clear(&___nl__im__36);
#line 186
c_rt_lib0move(&___nl__string__37, c_rt_lib0int_to_string(___nl__int__2));
#line 186
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__37));
#line 186
c_rt_lib0clear(&___nl__im__32);
#line 186
c_rt_lib0clear(&___nl__string__37);
#line 186
c_rt_lib0delete(c_fe_lib0print(___nl__im__31));
#line 186
c_rt_lib0clear(&___nl__im__31);
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
//clear ___nl__int__2;
#line 187
c_rt_lib0clear(&___nl__im__4);
#line 187
c_rt_lib0clear(&___nl__im__5);
#line 187
//clear ___nl__bool__6;
#line 187
c_rt_lib0clear(&___nl__im__7);
#line 187
c_rt_lib0clear(&___nl__im__8);
#line 187
c_rt_lib0clear(&___nl__im__9);
#line 187
c_rt_lib0clear(&___nl__im__10);
#line 187
//clear ___nl__int__11;
#line 187
//clear ___nl__int__12;
#line 187
//clear ___nl__int__13;
#line 187
//clear ___nl__bool__14;
#line 187
c_rt_lib0clear(&___nl__im__15);
#line 187
c_rt_lib0clear(&___nl__im__19);
#line 187
c_rt_lib0clear(&___nl__im__21);
#line 187
//clear ___nl__int__22;
#line 187
//clear ___nl__int__23;
#line 187
//clear ___nl__int__24;
#line 187
//clear ___nl__bool__25;
#line 187
c_rt_lib0clear(&___nl__im__26);
#line 187
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
#line 191
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 192
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 192
label_2:
;
#line 192
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 192
if(___nl__bool__3){ goto label_14;}
#line 192
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 192
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 193
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 193
c_rt_lib0move(&___nl__im__6, translator0translate(___nl__im__4, ___nl__im__7));
#line 193
c_rt_lib0clear(&___nl__im__7);
#line 194
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__2, ___nl__im__6));
#line 194
c_rt_lib0clear(&___nl__im__6);
#line 195
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 195
goto label_2;
#line 195
label_14:
;
#line 196
c_rt_lib0clear(&___nl__im__0);
#line 196
c_rt_lib0clear(&___nl__im__2);
#line 196
//clear ___nl__bool__3;
#line 196
c_rt_lib0clear(&___nl__im__4);
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 196
c_rt_lib0clear(&___nl__im__6);
#line 196
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
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
#line 200
___nl__int__2 = string0length(___nl__im__0);
#line 200
___nl__int__3 = 1;
#line 200
___nl__int__1 = ___nl__int__2 - ___nl__int__3;
#line 200
//clear ___nl__int__2;
#line 200
//clear ___nl__int__3;
#line 201
___nl__int__6 = 1;
#line 201
c_rt_lib0move(&___nl__im__5, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__6));
#line 201
//clear ___nl__int__6;
#line 201
c_rt_lib0move(&___nl__im__7,___get_global_string_const(110));
#line 201
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
if(___nl__bool__4){ goto label_20;}
#line 201
___nl__int__9 = 1;
#line 201
c_rt_lib0move(&___nl__im__8, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__9));
#line 201
//clear ___nl__int__9;
#line 201
c_rt_lib0move(&___nl__im__10,___get_global_string_const(114));
#line 201
___nl__bool__4 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
c_rt_lib0clear(&___nl__im__10);
#line 201
label_20:
;
#line 201
___nl__bool__4 = !___nl__bool__4;
#line 201
if(___nl__bool__4){ goto label_27;}
#line 201
___nl__int__11 = 1;
#line 201
___nl__int__1 = ___nl__int__1 - ___nl__int__11;
#line 201
//clear ___nl__int__11;
#line 201
goto label_27;
#line 201
label_27:
;
#line 201
//clear ___nl__bool__4;
#line 202
label_29:
;
#line 202
___nl__int__15 = 0;
#line 202
___nl__bool__12 = ___nl__int__1 >= ___nl__int__15;
#line 202
//clear ___nl__int__15;
#line 202
___nl__bool__14 = !___nl__bool__12;
#line 202
if(___nl__bool__14){ goto label_42;}
#line 202
___nl__int__17 = 1;
#line 202
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__17));
#line 202
//clear ___nl__int__17;
#line 202
c_rt_lib0move(&___nl__im__18,___get_global_string_const(110));
#line 202
___nl__bool__12 = c_rt_lib0ne(___nl__im__16, ___nl__im__18);
#line 202
c_rt_lib0clear(&___nl__im__16);
#line 202
c_rt_lib0clear(&___nl__im__18);
#line 202
label_42:
;
#line 202
//clear ___nl__bool__14;
#line 202
___nl__bool__13 = !___nl__bool__12;
#line 202
if(___nl__bool__13){ goto label_53;}
#line 202
___nl__int__20 = 1;
#line 202
c_rt_lib0move(&___nl__im__19, string0substr(___nl__im__0, ___nl__int__1, ___nl__int__20));
#line 202
//clear ___nl__int__20;
#line 202
c_rt_lib0move(&___nl__im__21,___get_global_string_const(114));
#line 202
___nl__bool__12 = c_rt_lib0ne(___nl__im__19, ___nl__im__21);
#line 202
c_rt_lib0clear(&___nl__im__19);
#line 202
c_rt_lib0clear(&___nl__im__21);
#line 202
label_53:
;
#line 202
//clear ___nl__bool__13;
#line 202
___nl__bool__12 = !___nl__bool__12;
#line 202
if(___nl__bool__12){ goto label_61;}
#line 202
___nl__int__22 = 1;
#line 202
___nl__int__1 = ___nl__int__1 - ___nl__int__22;
#line 202
//clear ___nl__int__22;
#line 202
goto label_29;
#line 202
label_61:
;
#line 203
___nl__int__24 = 0;
#line 203
___nl__bool__23 = ___nl__int__1 <= ___nl__int__24;
#line 203
//clear ___nl__int__24;
#line 203
___nl__bool__23 = !___nl__bool__23;
#line 203
if(___nl__bool__23){ goto label_74;}
#line 203
c_rt_lib0move(&___nl__im__25,___get_global_string_const(115));
#line 203
c_rt_lib0clear(&___nl__im__0);
#line 203
//clear ___nl__int__1;
#line 203
//clear ___nl__bool__12;
#line 203
//clear ___nl__bool__23;
#line 203
return ___nl__im__25;
#line 203
goto label_74;
#line 203
label_74:
;
#line 203
//clear ___nl__bool__23;
#line 203
c_rt_lib0clear(&___nl__im__25);
#line 204
___nl__int__27 = 0;
#line 204
c_rt_lib0move(&___nl__im__26, string0substr(___nl__im__0, ___nl__int__27, ___nl__int__1));
#line 204
//clear ___nl__int__27;
#line 204
c_rt_lib0clear(&___nl__im__0);
#line 204
//clear ___nl__int__1;
#line 204
//clear ___nl__bool__12;
#line 204
return ___nl__im__26;
return NULL;

}


static ImmT ___const__[5];
static int ___const_init__ = 1;
void interpreter_wrapper_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[4];


for(int i=0;i<4;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 4);
}}
ImmT interpreter_wrapper_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT interpreter_wrapper_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = interpreter_wrapper0errors_hash_t0cal();
	break;
case 1:
	___const__[1] = interpreter_wrapper0errors_group_t0cal();
	break;
case 2:
	___const__[2] = interpreter_wrapper0module_t0cal();
	break;
case 3:
	___const__[3] = interpreter_wrapper_priv0get_known_func0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
