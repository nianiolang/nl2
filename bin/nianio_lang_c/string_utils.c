
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "string_utils.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd.h"
#include "array.h"
#line 1 "string_utils.nl"

static ImmT *__const__f = NULL;
void string_utils_priv0__const__init();
ImmT string_utils_priv0__const__sim(int __nr);
ImmT string_utils_priv0__const__sing(int __nr);

ImmT  string_utils_priv0eat_ws(ImmT  ___nl__im__0,ImmT * ___ref___im__1);
ImmT  string_utils_priv0get_number(ImmT  ___nl__im__0,ImmT * ___ref___im__1);
ImmT  string_utils_priv0cal_expr(ImmT  ___nl__im__0,ImmT * ___ref___im__1,ImmT  ___nl__im__2);
ImmT  string_utils_priv0max(ImmT  ___nl__im__0,ImmT  ___nl__im__1);


ImmT  string_utils0is_int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_int");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_int(*var0);
}
ImmT  string_utils0is_int(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
#line 11
___nl__int__3 = string0ord(___nl__im__0);
#line 11
___nl__int__4 = 47;
#line 11
___nl__int__5 = ___nl__int__3 > ___nl__int__4;
#line 11
___nl__bool__1 = ___nl__int__5;
#line 11
//clear ___nl__int__3;
#line 11
//clear ___nl__int__4;
#line 11
//clear ___nl__int__5;
#line 11
___nl__bool__2 = !___nl__bool__1;
#line 11
if(___nl__bool__2){ goto label_1;}
#line 11
___nl__int__6 = string0ord(___nl__im__0);
#line 11
___nl__int__7 = 58;
#line 11
___nl__int__8 = ___nl__int__6 < ___nl__int__7;
#line 11
___nl__bool__1 = ___nl__int__8;
#line 11
//clear ___nl__int__6;
#line 11
//clear ___nl__int__7;
#line 11
//clear ___nl__int__8;
#line 11
label_1:
;
#line 11
//clear ___nl__bool__2;
#line 11
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
//clear ___nl__bool__1;
#line 11
return ___nl__im__9;
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
//clear ___nl__bool__1;
#line 11
c_rt_lib0clear(&___nl__im__9);
#line 11
return NULL;
}

ImmT  string_utils0is_whitespace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_whitespace");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_whitespace(*var0);
}
ImmT  string_utils0is_whitespace(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 15
c_rt_lib0move(&___nl__im__6,___get_global_const(429));
#line 15
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 15
c_rt_lib0clear(&___nl__im__6);
#line 15
if(___nl__bool__1){ goto label_4;}
#line 15
c_rt_lib0move(&___nl__im__7, string0lf());
#line 15
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__7);
#line 15
c_rt_lib0clear(&___nl__im__7);
#line 15
label_4:
;
#line 15
//clear ___nl__bool__5;
#line 15
if(___nl__bool__1){ goto label_3;}
#line 15
c_rt_lib0move(&___nl__im__8, string0tab());
#line 15
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__8);
#line 15
c_rt_lib0clear(&___nl__im__8);
#line 15
label_3:
;
#line 15
//clear ___nl__bool__4;
#line 15
if(___nl__bool__1){ goto label_2;}
#line 15
c_rt_lib0move(&___nl__im__9, string0r());
#line 15
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__9);
#line 15
c_rt_lib0clear(&___nl__im__9);
#line 15
label_2:
;
#line 15
//clear ___nl__bool__3;
#line 15
if(___nl__bool__1){ goto label_1;}
#line 15
c_rt_lib0move(&___nl__im__10, string0f());
#line 15
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__10);
#line 15
c_rt_lib0clear(&___nl__im__10);
#line 15
label_1:
;
#line 15
//clear ___nl__bool__2;
#line 15
c_rt_lib0move(&___nl__im__11, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 15
c_rt_lib0clear(&___nl__im__0);
#line 15
//clear ___nl__bool__1;
#line 15
return ___nl__im__11;
#line 15
c_rt_lib0clear(&___nl__im__0);
#line 15
//clear ___nl__bool__1;
#line 15
c_rt_lib0clear(&___nl__im__11);
#line 15
return NULL;
}

ImmT  string_utils0is_alpha0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_alpha");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_alpha(*var0);
}
ImmT  string_utils0is_alpha(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
INT  ___nl__int__1 = 0;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
#line 19
___nl__int__1 = string0ord(___nl__im__0);
#line 20
___nl__int__5 = 64;
#line 20
___nl__int__6 = ___nl__int__1 > ___nl__int__5;
#line 20
___nl__bool__2 = ___nl__int__6;
#line 20
//clear ___nl__int__5;
#line 20
//clear ___nl__int__6;
#line 20
___nl__bool__4 = !___nl__bool__2;
#line 20
if(___nl__bool__4){ goto label_2;}
#line 20
___nl__int__7 = 91;
#line 20
___nl__int__8 = ___nl__int__1 < ___nl__int__7;
#line 20
___nl__bool__2 = ___nl__int__8;
#line 20
//clear ___nl__int__7;
#line 20
//clear ___nl__int__8;
#line 20
label_2:
;
#line 20
//clear ___nl__bool__4;
#line 20
if(___nl__bool__2){ goto label_1;}
#line 20
___nl__int__10 = 96;
#line 20
___nl__int__11 = ___nl__int__1 > ___nl__int__10;
#line 20
___nl__bool__2 = ___nl__int__11;
#line 20
//clear ___nl__int__10;
#line 20
//clear ___nl__int__11;
#line 20
___nl__bool__9 = !___nl__bool__2;
#line 20
if(___nl__bool__9){ goto label_3;}
#line 20
___nl__int__12 = 123;
#line 20
___nl__int__13 = ___nl__int__1 < ___nl__int__12;
#line 20
___nl__bool__2 = ___nl__int__13;
#line 20
//clear ___nl__int__12;
#line 20
//clear ___nl__int__13;
#line 20
label_3:
;
#line 20
//clear ___nl__bool__9;
#line 20
label_1:
;
#line 20
//clear ___nl__bool__3;
#line 20
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
//clear ___nl__int__1;
#line 20
//clear ___nl__bool__2;
#line 20
return ___nl__im__14;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
//clear ___nl__int__1;
#line 20
//clear ___nl__bool__2;
#line 20
c_rt_lib0clear(&___nl__im__14);
#line 20
return NULL;
}

ImmT  string_utils0get_integer0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0get_integer");
ImmT  *var0 = &(_tab[0]);
return string_utils0get_integer(*var0);
}
ImmT  string_utils0get_integer(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
#line 24
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 24
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
if(___nl__bool__1){ goto label_3;}
#line 24
c_rt_lib0move(&___nl__im__4,___get_global_const(339));
#line 24
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 24
label_3:
;
#line 24
//clear ___nl__bool__2;
#line 24
___nl__bool__1 = !___nl__bool__1;
#line 24
if(___nl__bool__1){ goto label_2;}
#line 24
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 24
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__6));
#line 24
c_rt_lib0clear(&___nl__im__6);
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
//clear ___nl__bool__1;
#line 24
return ___nl__im__5;
#line 24
goto label_1;
#line 24
label_2:
;
#line 24
label_1:
;
#line 24
//clear ___nl__bool__1;
#line 24
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 25
c_rt_lib0move(&___nl__im__7, string0split(___nl__im__8, ___nl__im__0));
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 26
___nl__int__9 = 0;
#line 27
___nl__int__10 = 1;
#line 28
___nl__int__13 = 0;
#line 28
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__7, ___nl__int__13));
#line 28
//clear ___nl__int__13;
#line 28
c_rt_lib0move(&___nl__im__14,___get_global_const(339));
#line 28
___nl__bool__11 = c_rt_lib0eq(___nl__im__12, ___nl__im__14);
#line 28
c_rt_lib0clear(&___nl__im__12);
#line 28
c_rt_lib0clear(&___nl__im__14);
#line 28
___nl__bool__11 = !___nl__bool__11;
#line 28
if(___nl__bool__11){ goto label_5;}
#line 29
___nl__int__15 = 1;
#line 29
___nl__int__17 = c_rt_lib0array_len(___nl__im__7);
#line 29
___nl__int__18 = 1;
#line 29
___nl__int__16 = ___nl__int__17 - ___nl__int__18;
#line 29
//clear ___nl__int__17;
#line 29
//clear ___nl__int__18;
#line 29
c_rt_lib0move(&___nl__im__7, array0subarray(___nl__im__7, ___nl__int__15, ___nl__int__16));
#line 29
//clear ___nl__int__15;
#line 29
//clear ___nl__int__16;
#line 30
___nl__int__10 = 1;
#line 30
___nl__int__10 = -___nl__int__10;
#line 31
goto label_4;
#line 31
label_5:
;
#line 31
label_4:
;
#line 31
//clear ___nl__bool__11;
#line 32
___nl__int__20 = 0;
#line 32
___nl__int__21 = 1;
#line 32
___nl__int__22 = c_rt_lib0array_len(___nl__im__7);
#line 32
label_8:
;
#line 32
___nl__int__24 = ___nl__int__20 >= ___nl__int__22;
#line 32
___nl__bool__23 = ___nl__int__24;
#line 32
if(___nl__bool__23){ goto label_6;}
#line 32
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__7, ___nl__int__20));
#line 32
c_rt_lib0copy(&___nl__im__19, ___nl__im__25);
#line 33
c_rt_lib0move(&___nl__im__27, string_utils0is_int(___nl__im__19));
#line 33
___nl__bool__26 = c_rt_lib0check_true_native(___nl__im__27);
#line 33
c_rt_lib0clear(&___nl__im__27);
#line 33
___nl__bool__26 = !___nl__bool__26;
#line 33
___nl__bool__26 = !___nl__bool__26;
#line 33
if(___nl__bool__26){ goto label_10;}
#line 33
c_rt_lib0move(&___nl__im__29,___get_global_const(37));
#line 33
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__29));
#line 33
c_rt_lib0clear(&___nl__im__29);
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__7);
#line 33
//clear ___nl__int__9;
#line 33
//clear ___nl__int__10;
#line 33
c_rt_lib0clear(&___nl__im__19);
#line 33
//clear ___nl__int__20;
#line 33
//clear ___nl__int__21;
#line 33
//clear ___nl__int__22;
#line 33
//clear ___nl__bool__23;
#line 33
//clear ___nl__int__24;
#line 33
c_rt_lib0clear(&___nl__im__25);
#line 33
//clear ___nl__bool__26;
#line 33
return ___nl__im__28;
#line 33
goto label_9;
#line 33
label_10:
;
#line 33
label_9:
;
#line 33
//clear ___nl__bool__26;
#line 33
c_rt_lib0clear(&___nl__im__28);
#line 34
___nl__int__30 = 10;
#line 34
___nl__int__9 = ___nl__int__9 * ___nl__int__30;
#line 34
//clear ___nl__int__30;
#line 35
___nl__int__32 = string0ord(___nl__im__19);
#line 35
c_rt_lib0move(&___nl__im__34,___get_global_const(21));
#line 35
___nl__int__33 = string0ord(___nl__im__34);
#line 35
c_rt_lib0clear(&___nl__im__34);
#line 35
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 35
//clear ___nl__int__32;
#line 35
//clear ___nl__int__33;
#line 35
___nl__int__9 = ___nl__int__9 + ___nl__int__31;
#line 35
//clear ___nl__int__31;
#line 35
c_rt_lib0clear(&___nl__im__19);
#line 35
label_7:
;
#line 36
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 36
goto label_8;
#line 36
label_6:
;
#line 37
___nl__int__36 = ___nl__int__10 * ___nl__int__9;
#line 37
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__36));
#line 37
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__37));
#line 37
//clear ___nl__int__36;
#line 37
c_rt_lib0clear(&___nl__im__37);
#line 37
c_rt_lib0clear(&___nl__im__0);
#line 37
c_rt_lib0clear(&___nl__im__7);
#line 37
//clear ___nl__int__9;
#line 37
//clear ___nl__int__10;
#line 37
c_rt_lib0clear(&___nl__im__19);
#line 37
//clear ___nl__int__20;
#line 37
//clear ___nl__int__21;
#line 37
//clear ___nl__int__22;
#line 37
//clear ___nl__bool__23;
#line 37
//clear ___nl__int__24;
#line 37
c_rt_lib0clear(&___nl__im__25);
#line 37
return ___nl__im__35;
}

bool string_utils0is_integer0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_integer");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_integer(*var0);
}
bool string_utils0is_integer(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
bool  ___nl__bool__18 = false;
#line 41
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 41
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_add(___nl__im__0, ___nl__im__1));
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 42
___nl__bool__2 = string_utils0is_integer_possibly_leading_zeros(___nl__im__0);
#line 42
___nl__bool__2 = !___nl__bool__2;
#line 42
___nl__bool__2 = !___nl__bool__2;
#line 42
if(___nl__bool__2){ goto label_2;}
#line 42
___nl__bool__3 = false;
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
//clear ___nl__bool__2;
#line 42
return ___nl__bool__3;
#line 42
goto label_1;
#line 42
label_2:
;
#line 42
label_1:
;
#line 42
//clear ___nl__bool__2;
#line 42
//clear ___nl__bool__3;
#line 43
c_rt_lib0move(&___nl__im__5,___get_global_const(21));
#line 43
___nl__bool__4 = c_rt_lib0eq(___nl__im__0, ___nl__im__5);
#line 43
c_rt_lib0clear(&___nl__im__5);
#line 43
___nl__bool__4 = !___nl__bool__4;
#line 43
if(___nl__bool__4){ goto label_4;}
#line 43
___nl__bool__6 = true;
#line 43
c_rt_lib0clear(&___nl__im__0);
#line 43
//clear ___nl__bool__4;
#line 43
return ___nl__bool__6;
#line 43
goto label_3;
#line 43
label_4:
;
#line 43
label_3:
;
#line 43
//clear ___nl__bool__4;
#line 43
//clear ___nl__bool__6;
#line 44
___nl__int__7 = 0;
#line 45
___nl__int__10 = 1;
#line 45
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__10));
#line 45
//clear ___nl__int__10;
#line 45
c_rt_lib0move(&___nl__im__11,___get_global_const(339));
#line 45
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 45
c_rt_lib0clear(&___nl__im__9);
#line 45
c_rt_lib0clear(&___nl__im__11);
#line 45
___nl__bool__8 = !___nl__bool__8;
#line 45
if(___nl__bool__8){ goto label_6;}
#line 45
___nl__int__12 = 1;
#line 45
___nl__int__7 = ___nl__int__7 + ___nl__int__12;
#line 45
//clear ___nl__int__12;
#line 45
goto label_5;
#line 45
label_6:
;
#line 45
label_5:
;
#line 45
//clear ___nl__bool__8;
#line 46
___nl__int__15 = 1;
#line 46
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__15));
#line 46
//clear ___nl__int__15;
#line 46
c_rt_lib0move(&___nl__im__16,___get_global_const(21));
#line 46
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__16);
#line 46
c_rt_lib0clear(&___nl__im__14);
#line 46
c_rt_lib0clear(&___nl__im__16);
#line 46
___nl__bool__13 = !___nl__bool__13;
#line 46
if(___nl__bool__13){ goto label_8;}
#line 46
___nl__bool__17 = false;
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
//clear ___nl__int__7;
#line 46
//clear ___nl__bool__13;
#line 46
return ___nl__bool__17;
#line 46
goto label_7;
#line 46
label_8:
;
#line 46
label_7:
;
#line 46
//clear ___nl__bool__13;
#line 46
//clear ___nl__bool__17;
#line 47
___nl__bool__18 = true;
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
//clear ___nl__int__7;
#line 47
return ___nl__bool__18;
}

bool string_utils0is_integer_possibly_leading_zeros0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_integer_possibly_leading_zeros");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_integer_possibly_leading_zeros(*var0);
}
bool string_utils0is_integer_possibly_leading_zeros(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
#line 51
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 51
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 51
c_rt_lib0clear(&___nl__im__2);
#line 52
___nl__int__3 = string0length(___nl__im__1);
#line 53
___nl__int__4 = 0;
#line 54
___nl__int__7 = 1;
#line 54
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__7));
#line 54
//clear ___nl__int__7;
#line 54
c_rt_lib0move(&___nl__im__8,___get_global_const(339));
#line 54
___nl__bool__5 = c_rt_lib0eq(___nl__im__6, ___nl__im__8);
#line 54
c_rt_lib0clear(&___nl__im__6);
#line 54
c_rt_lib0clear(&___nl__im__8);
#line 54
___nl__bool__5 = !___nl__bool__5;
#line 54
if(___nl__bool__5){ goto label_2;}
#line 54
___nl__int__9 = 1;
#line 54
___nl__int__4 = ___nl__int__4 + ___nl__int__9;
#line 54
//clear ___nl__int__9;
#line 54
goto label_1;
#line 54
label_2:
;
#line 54
label_1:
;
#line 54
//clear ___nl__bool__5;
#line 55
___nl__int__11 = ___nl__int__4 == ___nl__int__3;
#line 55
___nl__bool__10 = ___nl__int__11;
#line 55
//clear ___nl__int__11;
#line 55
___nl__bool__10 = !___nl__bool__10;
#line 55
if(___nl__bool__10){ goto label_4;}
#line 55
___nl__bool__12 = false;
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
c_rt_lib0clear(&___nl__im__1);
#line 55
//clear ___nl__int__3;
#line 55
//clear ___nl__int__4;
#line 55
//clear ___nl__bool__10;
#line 55
return ___nl__bool__12;
#line 55
goto label_3;
#line 55
label_4:
;
#line 55
label_3:
;
#line 55
//clear ___nl__bool__10;
#line 55
//clear ___nl__bool__12;
#line 56
label_6:
;
#line 56
___nl__int__14 = ___nl__int__4 < ___nl__int__3;
#line 56
___nl__bool__13 = ___nl__int__14;
#line 56
//clear ___nl__int__14;
#line 56
___nl__bool__13 = !___nl__bool__13;
#line 56
if(___nl__bool__13){ goto label_5;}
#line 57
___nl__int__17 = 1;
#line 57
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__17));
#line 57
//clear ___nl__int__17;
#line 57
___nl__bool__15 = string0is_digit(___nl__im__16);
#line 57
c_rt_lib0clear(&___nl__im__16);
#line 57
___nl__bool__15 = !___nl__bool__15;
#line 57
___nl__bool__15 = !___nl__bool__15;
#line 57
if(___nl__bool__15){ goto label_9;}
#line 57
___nl__bool__18 = false;
#line 57
c_rt_lib0clear(&___nl__im__0);
#line 57
c_rt_lib0clear(&___nl__im__1);
#line 57
//clear ___nl__int__3;
#line 57
//clear ___nl__int__4;
#line 57
//clear ___nl__bool__13;
#line 57
//clear ___nl__bool__15;
#line 57
return ___nl__bool__18;
#line 57
goto label_8;
#line 57
label_9:
;
#line 57
label_8:
;
#line 57
//clear ___nl__bool__15;
#line 57
//clear ___nl__bool__18;
#line 57
label_7:
;
#line 56
___nl__int__19 = 1;
#line 56
___nl__int__4 = ___nl__int__4 + ___nl__int__19;
#line 56
//clear ___nl__int__19;
#line 58
goto label_6;
#line 58
label_5:
;
#line 59
___nl__bool__20 = true;
#line 59
c_rt_lib0clear(&___nl__im__0);
#line 59
c_rt_lib0clear(&___nl__im__1);
#line 59
//clear ___nl__int__3;
#line 59
//clear ___nl__int__4;
#line 59
//clear ___nl__bool__13;
#line 59
return ___nl__bool__20;
}

bool string_utils0is_float0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_float");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_float(*var0);
}
bool string_utils0is_float(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
bool  ___nl__bool__27 = false;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
INT  ___nl__int__33 = 0;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
INT  ___nl__int__40 = 0;
bool  ___nl__bool__41 = false;
#line 63
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 63
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 63
c_rt_lib0clear(&___nl__im__2);
#line 64
___nl__int__3 = string0length(___nl__im__1);
#line 65
___nl__int__5 = 3;
#line 65
___nl__int__6 = ___nl__int__3 < ___nl__int__5;
#line 65
___nl__bool__4 = ___nl__int__6;
#line 65
//clear ___nl__int__5;
#line 65
//clear ___nl__int__6;
#line 65
___nl__bool__4 = !___nl__bool__4;
#line 65
if(___nl__bool__4){ goto label_2;}
#line 65
___nl__bool__7 = false;
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
//clear ___nl__int__3;
#line 65
//clear ___nl__bool__4;
#line 65
return ___nl__bool__7;
#line 65
goto label_1;
#line 65
label_2:
;
#line 65
label_1:
;
#line 65
//clear ___nl__bool__4;
#line 65
//clear ___nl__bool__7;
#line 66
___nl__int__8 = 0;
#line 67
___nl__int__11 = 1;
#line 67
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__11));
#line 67
//clear ___nl__int__11;
#line 67
c_rt_lib0move(&___nl__im__12,___get_global_const(339));
#line 67
___nl__bool__9 = c_rt_lib0eq(___nl__im__10, ___nl__im__12);
#line 67
c_rt_lib0clear(&___nl__im__10);
#line 67
c_rt_lib0clear(&___nl__im__12);
#line 67
___nl__bool__9 = !___nl__bool__9;
#line 67
if(___nl__bool__9){ goto label_4;}
#line 67
___nl__int__13 = 1;
#line 67
___nl__int__8 = ___nl__int__8 + ___nl__int__13;
#line 67
//clear ___nl__int__13;
#line 67
goto label_3;
#line 67
label_4:
;
#line 67
label_3:
;
#line 67
//clear ___nl__bool__9;
#line 68
___nl__int__8 = ___nl__int__8;
#line 68
label_6:
;
#line 68
___nl__int__15 = ___nl__int__8 < ___nl__int__3;
#line 68
___nl__bool__14 = ___nl__int__15;
#line 68
//clear ___nl__int__15;
#line 68
___nl__bool__14 = !___nl__bool__14;
#line 68
if(___nl__bool__14){ goto label_5;}
#line 69
___nl__int__18 = 1;
#line 69
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__18));
#line 69
//clear ___nl__int__18;
#line 69
___nl__bool__16 = string0is_digit(___nl__im__17);
#line 69
c_rt_lib0clear(&___nl__im__17);
#line 69
___nl__bool__16 = !___nl__bool__16;
#line 69
___nl__bool__16 = !___nl__bool__16;
#line 69
if(___nl__bool__16){ goto label_9;}
#line 69
goto label_5;
#line 69
goto label_8;
#line 69
label_9:
;
#line 69
label_8:
;
#line 69
//clear ___nl__bool__16;
#line 69
label_7:
;
#line 68
___nl__int__19 = 1;
#line 68
___nl__int__8 = ___nl__int__8 + ___nl__int__19;
#line 68
//clear ___nl__int__19;
#line 70
goto label_6;
#line 70
label_5:
;
#line 71
___nl__int__22 = 1;
#line 71
___nl__int__23 = ___nl__int__8 < ___nl__int__22;
#line 71
___nl__bool__20 = ___nl__int__23;
#line 71
//clear ___nl__int__22;
#line 71
//clear ___nl__int__23;
#line 71
if(___nl__bool__20){ goto label_12;}
#line 71
___nl__int__25 = 2;
#line 71
___nl__int__24 = ___nl__int__8 + ___nl__int__25;
#line 71
//clear ___nl__int__25;
#line 71
___nl__int__26 = ___nl__int__24 > ___nl__int__3;
#line 71
___nl__bool__20 = ___nl__int__26;
#line 71
//clear ___nl__int__24;
#line 71
//clear ___nl__int__26;
#line 71
label_12:
;
#line 71
//clear ___nl__bool__21;
#line 71
___nl__bool__20 = !___nl__bool__20;
#line 71
if(___nl__bool__20){ goto label_11;}
#line 71
___nl__bool__27 = false;
#line 71
c_rt_lib0clear(&___nl__im__0);
#line 71
c_rt_lib0clear(&___nl__im__1);
#line 71
//clear ___nl__int__3;
#line 71
//clear ___nl__int__8;
#line 71
//clear ___nl__bool__14;
#line 71
//clear ___nl__bool__20;
#line 71
return ___nl__bool__27;
#line 71
goto label_10;
#line 71
label_11:
;
#line 71
label_10:
;
#line 71
//clear ___nl__bool__20;
#line 71
//clear ___nl__bool__27;
#line 72
___nl__int__30 = 1;
#line 72
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__30));
#line 72
//clear ___nl__int__30;
#line 72
c_rt_lib0move(&___nl__im__31,___get_global_const(114));
#line 72
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__31);
#line 72
c_rt_lib0clear(&___nl__im__29);
#line 72
c_rt_lib0clear(&___nl__im__31);
#line 72
___nl__bool__28 = !___nl__bool__28;
#line 72
___nl__bool__28 = !___nl__bool__28;
#line 72
if(___nl__bool__28){ goto label_14;}
#line 72
___nl__bool__32 = false;
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
c_rt_lib0clear(&___nl__im__1);
#line 72
//clear ___nl__int__3;
#line 72
//clear ___nl__int__8;
#line 72
//clear ___nl__bool__14;
#line 72
//clear ___nl__bool__28;
#line 72
return ___nl__bool__32;
#line 72
goto label_13;
#line 72
label_14:
;
#line 72
label_13:
;
#line 72
//clear ___nl__bool__28;
#line 72
//clear ___nl__bool__32;
#line 73
___nl__int__33 = 1;
#line 73
___nl__int__8 = ___nl__int__8 + ___nl__int__33;
#line 73
//clear ___nl__int__33;
#line 73
label_16:
;
#line 73
___nl__int__35 = ___nl__int__8 < ___nl__int__3;
#line 73
___nl__bool__34 = ___nl__int__35;
#line 73
//clear ___nl__int__35;
#line 73
___nl__bool__34 = !___nl__bool__34;
#line 73
if(___nl__bool__34){ goto label_15;}
#line 74
___nl__int__38 = 1;
#line 74
c_rt_lib0move(&___nl__im__37, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__38));
#line 74
//clear ___nl__int__38;
#line 74
___nl__bool__36 = string0is_digit(___nl__im__37);
#line 74
c_rt_lib0clear(&___nl__im__37);
#line 74
___nl__bool__36 = !___nl__bool__36;
#line 74
___nl__bool__36 = !___nl__bool__36;
#line 74
if(___nl__bool__36){ goto label_19;}
#line 74
___nl__bool__39 = false;
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
//clear ___nl__int__3;
#line 74
//clear ___nl__int__8;
#line 74
//clear ___nl__bool__14;
#line 74
//clear ___nl__bool__34;
#line 74
//clear ___nl__bool__36;
#line 74
return ___nl__bool__39;
#line 74
goto label_18;
#line 74
label_19:
;
#line 74
label_18:
;
#line 74
//clear ___nl__bool__36;
#line 74
//clear ___nl__bool__39;
#line 74
label_17:
;
#line 73
___nl__int__40 = 1;
#line 73
___nl__int__8 = ___nl__int__8 + ___nl__int__40;
#line 73
//clear ___nl__int__40;
#line 75
goto label_16;
#line 75
label_15:
;
#line 76
___nl__bool__41 = true;
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
c_rt_lib0clear(&___nl__im__1);
#line 76
//clear ___nl__int__3;
#line 76
//clear ___nl__int__8;
#line 76
//clear ___nl__bool__14;
#line 76
//clear ___nl__bool__34;
#line 76
return ___nl__bool__41;
}

bool string_utils0is_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_number");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_number(*var0);
}
bool string_utils0is_number(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
#line 80
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 80
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 80
c_rt_lib0clear(&___nl__im__2);
#line 81
___nl__bool__3 = string_utils0is_integer(___nl__im__1);
#line 81
if(___nl__bool__3){ goto label_1;}
#line 81
___nl__bool__3 = string_utils0is_float(___nl__im__1);
#line 81
label_1:
;
#line 81
//clear ___nl__bool__4;
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
c_rt_lib0clear(&___nl__im__1);
#line 81
return ___nl__bool__3;
}

ImmT  string_utils0get_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0get_number");
ImmT  *var0 = &(_tab[0]);
return string_utils0get_number(*var0);
}
ImmT  string_utils0get_number(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
bool  ___nl__bool__27 = false;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
#line 85
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 85
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 85
c_rt_lib0clear(&___nl__im__3);
#line 85
if(___nl__bool__1){ goto label_3;}
#line 85
c_rt_lib0move(&___nl__im__4,___get_global_const(339));
#line 85
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 85
c_rt_lib0clear(&___nl__im__4);
#line 85
label_3:
;
#line 85
//clear ___nl__bool__2;
#line 85
___nl__bool__1 = !___nl__bool__1;
#line 85
if(___nl__bool__1){ goto label_2;}
#line 85
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
//clear ___nl__bool__1;
#line 85
return ___nl__im__5;
#line 85
goto label_1;
#line 85
label_2:
;
#line 85
label_1:
;
#line 85
//clear ___nl__bool__1;
#line 85
c_rt_lib0clear(&___nl__im__5);
#line 86
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 86
c_rt_lib0move(&___nl__im__6, string0split(___nl__im__7, ___nl__im__0));
#line 86
c_rt_lib0clear(&___nl__im__7);
#line 87
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 88
___nl__int__11 = 0;
#line 88
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__6, ___nl__int__11));
#line 88
//clear ___nl__int__11;
#line 88
c_rt_lib0move(&___nl__im__12,___get_global_const(339));
#line 88
___nl__bool__9 = c_rt_lib0eq(___nl__im__10, ___nl__im__12);
#line 88
c_rt_lib0clear(&___nl__im__10);
#line 88
c_rt_lib0clear(&___nl__im__12);
#line 88
___nl__bool__9 = !___nl__bool__9;
#line 88
if(___nl__bool__9){ goto label_5;}
#line 89
___nl__int__13 = 1;
#line 89
___nl__int__15 = c_rt_lib0array_len(___nl__im__6);
#line 89
___nl__int__16 = 1;
#line 89
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 89
//clear ___nl__int__15;
#line 89
//clear ___nl__int__16;
#line 89
c_rt_lib0move(&___nl__im__6, array0subarray(___nl__im__6, ___nl__int__13, ___nl__int__14));
#line 89
//clear ___nl__int__13;
#line 89
//clear ___nl__int__14;
#line 90
___nl__int__19 = 0;
#line 90
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 90
//clear ___nl__int__19;
#line 90
c_rt_lib0move(&___nl__im__20, string_utils0is_int(___nl__im__18));
#line 90
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__20);
#line 90
c_rt_lib0clear(&___nl__im__18);
#line 90
c_rt_lib0clear(&___nl__im__20);
#line 90
___nl__bool__17 = !___nl__bool__17;
#line 90
___nl__bool__17 = !___nl__bool__17;
#line 90
if(___nl__bool__17){ goto label_7;}
#line 90
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
c_rt_lib0clear(&___nl__im__6);
#line 90
c_rt_lib0clear(&___nl__im__8);
#line 90
//clear ___nl__bool__9;
#line 90
//clear ___nl__bool__17;
#line 90
return ___nl__im__21;
#line 90
goto label_6;
#line 90
label_7:
;
#line 90
label_6:
;
#line 90
//clear ___nl__bool__17;
#line 90
c_rt_lib0clear(&___nl__im__21);
#line 91
c_rt_lib0move(&___nl__im__8,___get_global_const(339));
#line 92
goto label_4;
#line 92
label_5:
;
#line 92
label_4:
;
#line 92
//clear ___nl__bool__9;
#line 93
___nl__bool__22 = false;
#line 94
___nl__int__24 = 0;
#line 94
___nl__int__25 = 1;
#line 94
___nl__int__26 = c_rt_lib0array_len(___nl__im__6);
#line 94
label_10:
;
#line 94
___nl__int__28 = ___nl__int__24 >= ___nl__int__26;
#line 94
___nl__bool__27 = ___nl__int__28;
#line 94
if(___nl__bool__27){ goto label_8;}
#line 94
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__6, ___nl__int__24));
#line 94
c_rt_lib0copy(&___nl__im__23, ___nl__im__29);
#line 95
c_rt_lib0move(&___nl__im__31, string_utils0is_int(___nl__im__23));
#line 95
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 95
c_rt_lib0clear(&___nl__im__31);
#line 95
___nl__bool__30 = !___nl__bool__30;
#line 95
___nl__bool__30 = !___nl__bool__30;
#line 95
if(___nl__bool__30){ goto label_12;}
#line 96
c_rt_lib0move(&___nl__im__34,___get_global_const(114));
#line 96
___nl__bool__32 = c_rt_lib0eq(___nl__im__23, ___nl__im__34);
#line 96
c_rt_lib0clear(&___nl__im__34);
#line 96
___nl__bool__33 = !___nl__bool__32;
#line 96
if(___nl__bool__33){ goto label_15;}
#line 96
___nl__bool__32 = ___nl__bool__22;
#line 96
___nl__bool__32 = !___nl__bool__32;
#line 96
label_15:
;
#line 96
//clear ___nl__bool__33;
#line 96
___nl__bool__32 = !___nl__bool__32;
#line 96
if(___nl__bool__32){ goto label_14;}
#line 97
___nl__bool__22 = true;
#line 98
goto label_13;
#line 98
label_14:
;
#line 99
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 99
c_rt_lib0clear(&___nl__im__0);
#line 99
c_rt_lib0clear(&___nl__im__6);
#line 99
c_rt_lib0clear(&___nl__im__8);
#line 99
//clear ___nl__bool__22;
#line 99
c_rt_lib0clear(&___nl__im__23);
#line 99
//clear ___nl__int__24;
#line 99
//clear ___nl__int__25;
#line 99
//clear ___nl__int__26;
#line 99
//clear ___nl__bool__27;
#line 99
//clear ___nl__int__28;
#line 99
c_rt_lib0clear(&___nl__im__29);
#line 99
//clear ___nl__bool__30;
#line 99
//clear ___nl__bool__32;
#line 99
return ___nl__im__35;
#line 100
goto label_13;
#line 100
label_13:
;
#line 100
//clear ___nl__bool__32;
#line 100
c_rt_lib0clear(&___nl__im__35);
#line 101
goto label_11;
#line 101
label_12:
;
#line 101
label_11:
;
#line 101
//clear ___nl__bool__30;
#line 102
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_add(___nl__im__8, ___nl__im__23));
#line 102
c_rt_lib0clear(&___nl__im__23);
#line 102
label_9:
;
#line 103
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 103
goto label_10;
#line 103
label_8:
;
#line 104
c_rt_lib0move(&___nl__im__37,___get_global_const(114));
#line 104
___nl__bool__36 = c_rt_lib0eq(___nl__im__8, ___nl__im__37);
#line 104
c_rt_lib0clear(&___nl__im__37);
#line 104
___nl__bool__36 = !___nl__bool__36;
#line 104
if(___nl__bool__36){ goto label_17;}
#line 104
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 104
//clear ___nl__bool__22;
#line 104
c_rt_lib0clear(&___nl__im__23);
#line 104
//clear ___nl__int__24;
#line 104
//clear ___nl__int__25;
#line 104
//clear ___nl__int__26;
#line 104
//clear ___nl__bool__27;
#line 104
//clear ___nl__int__28;
#line 104
c_rt_lib0clear(&___nl__im__29);
#line 104
//clear ___nl__bool__36;
#line 104
return ___nl__im__38;
#line 104
goto label_16;
#line 104
label_17:
;
#line 104
label_16:
;
#line 104
//clear ___nl__bool__36;
#line 104
c_rt_lib0clear(&___nl__im__38);
#line 105
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__8));
#line 105
c_rt_lib0clear(&___nl__im__0);
#line 105
c_rt_lib0clear(&___nl__im__6);
#line 105
c_rt_lib0clear(&___nl__im__8);
#line 105
//clear ___nl__bool__22;
#line 105
c_rt_lib0clear(&___nl__im__23);
#line 105
//clear ___nl__int__24;
#line 105
//clear ___nl__int__25;
#line 105
//clear ___nl__int__26;
#line 105
//clear ___nl__bool__27;
#line 105
//clear ___nl__int__28;
#line 105
c_rt_lib0clear(&___nl__im__29);
#line 105
return ___nl__im__39;
#line 105
c_rt_lib0clear(&___nl__im__0);
#line 105
c_rt_lib0clear(&___nl__im__6);
#line 105
c_rt_lib0clear(&___nl__im__8);
#line 105
//clear ___nl__bool__22;
#line 105
c_rt_lib0clear(&___nl__im__23);
#line 105
//clear ___nl__int__24;
#line 105
//clear ___nl__int__25;
#line 105
//clear ___nl__int__26;
#line 105
//clear ___nl__bool__27;
#line 105
//clear ___nl__int__28;
#line 105
c_rt_lib0clear(&___nl__im__29);
#line 105
c_rt_lib0clear(&___nl__im__39);
#line 105
return NULL;
}

ImmT  string_utils_priv0eat_ws(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
#line 109
label_2:
;
#line 109
___nl__int__4 = c_rt_lib0array_len(___nl__im__0);
#line 109
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 109
___nl__int__6 = ___nl__int__5 < ___nl__int__4;
#line 109
___nl__bool__2 = ___nl__int__6;
#line 109
//clear ___nl__int__4;
#line 109
//clear ___nl__int__5;
#line 109
//clear ___nl__int__6;
#line 109
___nl__bool__3 = !___nl__bool__2;
#line 109
if(___nl__bool__3){ goto label_3;}
#line 109
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 109
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 109
//clear ___nl__int__8;
#line 109
c_rt_lib0move(&___nl__im__9, string_utils0is_whitespace(___nl__im__7));
#line 109
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__9);
#line 109
c_rt_lib0clear(&___nl__im__7);
#line 109
c_rt_lib0clear(&___nl__im__9);
#line 109
label_3:
;
#line 109
//clear ___nl__bool__3;
#line 109
___nl__bool__2 = !___nl__bool__2;
#line 109
if(___nl__bool__2){ goto label_1;}
#line 109
___nl__int__10 = 1;
#line 109
___nl__int__11 = getIntFromImm((*___ref___im__1));
#line 109
___nl__int__12 = ___nl__int__11 + ___nl__int__10;
#line 109
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__12));
#line 109
//clear ___nl__int__10;
#line 109
//clear ___nl__int__11;
#line 109
//clear ___nl__int__12;
#line 109
goto label_2;
#line 109
label_1:
;
#line 110
___nl__int__14 = c_rt_lib0array_len(___nl__im__0);
#line 110
___nl__int__15 = getIntFromImm((*___ref___im__1));
#line 110
___nl__int__16 = ___nl__int__15 == ___nl__int__14;
#line 110
___nl__bool__13 = ___nl__int__16;
#line 110
//clear ___nl__int__14;
#line 110
//clear ___nl__int__15;
#line 110
//clear ___nl__int__16;
#line 110
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
//clear ___nl__bool__2;
#line 110
//clear ___nl__bool__13;
#line 110
return ___nl__im__17;
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
//clear ___nl__bool__2;
#line 110
//clear ___nl__bool__13;
#line 110
c_rt_lib0clear(&___nl__im__17);
#line 110
return NULL;
}

ImmT  string_utils_priv0get_number(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 114
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 115
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 115
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 115
//clear ___nl__int__5;
#line 115
c_rt_lib0move(&___nl__im__6,___get_global_const(339));
#line 115
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__6);
#line 115
c_rt_lib0clear(&___nl__im__4);
#line 115
c_rt_lib0clear(&___nl__im__6);
#line 115
___nl__bool__3 = !___nl__bool__3;
#line 115
if(___nl__bool__3){ goto label_2;}
#line 116
___nl__int__7 = 1;
#line 116
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 116
___nl__int__9 = ___nl__int__8 + ___nl__int__7;
#line 116
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__9));
#line 116
//clear ___nl__int__7;
#line 116
//clear ___nl__int__8;
#line 116
//clear ___nl__int__9;
#line 117
c_rt_lib0move(&___nl__im__2,___get_global_const(339));
#line 118
goto label_1;
#line 118
label_2:
;
#line 118
label_1:
;
#line 118
//clear ___nl__bool__3;
#line 119
___nl__bool__10 = false;
#line 120
label_4:
;
#line 120
___nl__int__12 = c_rt_lib0array_len(___nl__im__0);
#line 120
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 120
___nl__int__14 = ___nl__int__13 < ___nl__int__12;
#line 120
___nl__bool__11 = ___nl__int__14;
#line 120
//clear ___nl__int__12;
#line 120
//clear ___nl__int__13;
#line 120
//clear ___nl__int__14;
#line 120
___nl__bool__11 = !___nl__bool__11;
#line 120
if(___nl__bool__11){ goto label_3;}
#line 121
___nl__int__16 = getIntFromImm((*___ref___im__1));
#line 121
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 121
//clear ___nl__int__16;
#line 122
c_rt_lib0move(&___nl__im__18, string_utils0is_int(___nl__im__15));
#line 122
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 122
c_rt_lib0clear(&___nl__im__18);
#line 122
___nl__bool__17 = !___nl__bool__17;
#line 122
___nl__bool__17 = !___nl__bool__17;
#line 122
if(___nl__bool__17){ goto label_6;}
#line 123
c_rt_lib0move(&___nl__im__21,___get_global_const(114));
#line 123
___nl__bool__19 = c_rt_lib0ne(___nl__im__15, ___nl__im__21);
#line 123
c_rt_lib0clear(&___nl__im__21);
#line 123
if(___nl__bool__19){ goto label_9;}
#line 123
___nl__bool__19 = ___nl__bool__10;
#line 123
label_9:
;
#line 123
//clear ___nl__bool__20;
#line 123
___nl__bool__19 = !___nl__bool__19;
#line 123
if(___nl__bool__19){ goto label_8;}
#line 123
goto label_3;
#line 123
goto label_7;
#line 123
label_8:
;
#line 123
label_7:
;
#line 123
//clear ___nl__bool__19;
#line 124
___nl__bool__10 = true;
#line 125
goto label_5;
#line 125
label_6:
;
#line 125
label_5:
;
#line 125
//clear ___nl__bool__17;
#line 126
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 127
___nl__int__22 = 1;
#line 127
___nl__int__23 = getIntFromImm((*___ref___im__1));
#line 127
___nl__int__24 = ___nl__int__23 + ___nl__int__22;
#line 127
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__24));
#line 127
//clear ___nl__int__22;
#line 127
//clear ___nl__int__23;
#line 127
//clear ___nl__int__24;
#line 128
goto label_4;
#line 128
label_3:
;
#line 129
c_rt_lib0move(&___nl__im__27,___get_global_const(37));
#line 129
___nl__bool__25 = c_rt_lib0eq(___nl__im__2, ___nl__im__27);
#line 129
c_rt_lib0clear(&___nl__im__27);
#line 129
if(___nl__bool__25){ goto label_12;}
#line 129
c_rt_lib0move(&___nl__im__28,___get_global_const(339));
#line 129
___nl__bool__25 = c_rt_lib0eq(___nl__im__2, ___nl__im__28);
#line 129
c_rt_lib0clear(&___nl__im__28);
#line 129
label_12:
;
#line 129
//clear ___nl__bool__26;
#line 129
___nl__bool__25 = !___nl__bool__25;
#line 129
if(___nl__bool__25){ goto label_11;}
#line 129
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 129
c_rt_lib0clear(&___nl__im__0);
#line 129
c_rt_lib0clear(&___nl__im__2);
#line 129
//clear ___nl__bool__10;
#line 129
//clear ___nl__bool__11;
#line 129
c_rt_lib0clear(&___nl__im__15);
#line 129
//clear ___nl__bool__25;
#line 129
return ___nl__im__29;
#line 129
goto label_10;
#line 129
label_11:
;
#line 129
label_10:
;
#line 129
//clear ___nl__bool__25;
#line 129
c_rt_lib0clear(&___nl__im__29);
#line 130
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__2));
#line 130
c_rt_lib0clear(&___nl__im__0);
#line 130
c_rt_lib0clear(&___nl__im__2);
#line 130
//clear ___nl__bool__10;
#line 130
//clear ___nl__bool__11;
#line 130
c_rt_lib0clear(&___nl__im__15);
#line 130
return ___nl__im__30;
#line 130
c_rt_lib0clear(&___nl__im__0);
#line 130
c_rt_lib0clear(&___nl__im__2);
#line 130
//clear ___nl__bool__10;
#line 130
//clear ___nl__bool__11;
#line 130
c_rt_lib0clear(&___nl__im__15);
#line 130
c_rt_lib0clear(&___nl__im__30);
#line 130
return NULL;
}

ImmT  string_utils_priv0cal_expr(ImmT  ___nl__im__0,ImmT * ___ref___im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__2);
string_utils_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
INT  ___nl__int__60 = 0;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
ImmT  ___nl__im__63 = NULL;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
INT  ___nl__int__66 = 0;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
bool  ___nl__bool__72 = false;
INT  ___nl__int__73 = 0;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
ImmT  ___nl__im__76 = NULL;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
ImmT  ___nl__im__80 = NULL;
bool  ___nl__bool__81 = false;
ImmT  ___nl__im__82 = NULL;
INT  ___nl__int__83 = 0;
ImmT  ___nl__im__84 = NULL;
INT  ___nl__int__85 = 0;
INT  ___nl__int__86 = 0;
INT  ___nl__int__87 = 0;
ImmT  ___nl__im__88 = NULL;
bool  ___nl__bool__89 = false;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
INT  ___nl__int__92 = 0;
ImmT  ___nl__im__93 = NULL;
INT  ___nl__int__94 = 0;
INT  ___nl__int__95 = 0;
INT  ___nl__int__96 = 0;
ImmT  ___nl__im__97 = NULL;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
INT  ___nl__int__102 = 0;
INT  ___nl__int__103 = 0;
INT  ___nl__int__104 = 0;
ImmT  ___nl__im__105 = NULL;
bool  ___nl__bool__106 = false;
INT  ___nl__int__107 = 0;
INT  ___nl__int__108 = 0;
INT  ___nl__int__109 = 0;
ImmT  ___nl__im__110 = NULL;
INT  ___nl__int__111 = 0;
INT  ___nl__int__112 = 0;
INT  ___nl__int__113 = 0;
ImmT  ___nl__im__114 = NULL;
bool  ___nl__bool__115 = false;
ImmT  ___nl__im__116 = NULL;
INT  ___nl__int__117 = 0;
ImmT  ___nl__im__118 = NULL;
INT  ___nl__int__119 = 0;
INT  ___nl__int__120 = 0;
INT  ___nl__int__121 = 0;
ImmT  ___nl__im__122 = NULL;
bool  ___nl__bool__123 = false;
INT  ___nl__int__124 = 0;
INT  ___nl__int__125 = 0;
INT  ___nl__int__126 = 0;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
#line 134
c_rt_lib0move(&___nl__im__4, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 134
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 134
c_rt_lib0clear(&___nl__im__4);
#line 134
___nl__bool__3 = !___nl__bool__3;
#line 134
if(___nl__bool__3){ goto label_2;}
#line 134
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
//clear ___nl__bool__3;
#line 134
return ___nl__im__5;
#line 134
goto label_1;
#line 134
label_2:
;
#line 134
label_1:
;
#line 134
//clear ___nl__bool__3;
#line 134
c_rt_lib0clear(&___nl__im__5);
#line 136
___nl__int__9 = getIntFromImm((*___ref___im__1));
#line 136
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 136
//clear ___nl__int__9;
#line 136
c_rt_lib0move(&___nl__im__10,___get_global_const(420));
#line 136
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 136
c_rt_lib0clear(&___nl__im__8);
#line 136
c_rt_lib0clear(&___nl__im__10);
#line 136
___nl__bool__7 = !___nl__bool__7;
#line 136
if(___nl__bool__7){ goto label_4;}
#line 137
___nl__int__11 = 1;
#line 137
___nl__int__12 = getIntFromImm((*___ref___im__1));
#line 137
___nl__int__13 = ___nl__int__12 + ___nl__int__11;
#line 137
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__13));
#line 137
//clear ___nl__int__11;
#line 137
//clear ___nl__int__12;
#line 137
//clear ___nl__int__13;
#line 138
___nl__int__16 = 0;
#line 138
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__16));
#line 138
c_rt_lib0move(&___nl__im__15, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__17));
#line 138
//clear ___nl__int__16;
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(80));
#line 138
if(___nl__bool__14){ goto label_5;}
#line 138
c_rt_lib0clear(&___nl__im__0);
#line 138
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0clear(&___nl__im__6);
#line 138
//clear ___nl__bool__7;
#line 138
//clear ___nl__bool__14;
#line 138
return ___nl__im__15;
#line 138
label_5:
;
#line 138
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(80)));
#line 139
c_rt_lib0move(&___nl__im__19, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 139
___nl__bool__18 = c_rt_lib0check_true_native(___nl__im__19);
#line 139
c_rt_lib0clear(&___nl__im__19);
#line 139
___nl__bool__18 = !___nl__bool__18;
#line 139
if(___nl__bool__18){ goto label_7;}
#line 139
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__6);
#line 139
//clear ___nl__bool__7;
#line 139
//clear ___nl__bool__14;
#line 139
c_rt_lib0clear(&___nl__im__15);
#line 139
//clear ___nl__bool__18;
#line 139
return ___nl__im__20;
#line 139
goto label_6;
#line 139
label_7:
;
#line 139
label_6:
;
#line 139
//clear ___nl__bool__18;
#line 139
c_rt_lib0clear(&___nl__im__20);
#line 140
___nl__int__23 = getIntFromImm((*___ref___im__1));
#line 140
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__0, ___nl__int__23));
#line 140
//clear ___nl__int__23;
#line 140
c_rt_lib0move(&___nl__im__24,___get_global_const(299));
#line 140
___nl__bool__21 = c_rt_lib0eq(___nl__im__22, ___nl__im__24);
#line 140
c_rt_lib0clear(&___nl__im__22);
#line 140
c_rt_lib0clear(&___nl__im__24);
#line 140
___nl__bool__21 = !___nl__bool__21;
#line 140
___nl__bool__21 = !___nl__bool__21;
#line 140
if(___nl__bool__21){ goto label_9;}
#line 140
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
c_rt_lib0clear(&___nl__im__2);
#line 140
c_rt_lib0clear(&___nl__im__6);
#line 140
//clear ___nl__bool__7;
#line 140
//clear ___nl__bool__14;
#line 140
c_rt_lib0clear(&___nl__im__15);
#line 140
//clear ___nl__bool__21;
#line 140
return ___nl__im__25;
#line 140
goto label_8;
#line 140
label_9:
;
#line 140
label_8:
;
#line 140
//clear ___nl__bool__21;
#line 140
c_rt_lib0clear(&___nl__im__25);
#line 141
___nl__int__26 = 1;
#line 141
___nl__int__27 = getIntFromImm((*___ref___im__1));
#line 141
___nl__int__28 = ___nl__int__27 + ___nl__int__26;
#line 141
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__28));
#line 141
//clear ___nl__int__26;
#line 141
//clear ___nl__int__27;
#line 141
//clear ___nl__int__28;
#line 142
goto label_3;
#line 142
label_4:
;
#line 143
c_rt_lib0move(&___nl__im__30, string_utils_priv0get_number(___nl__im__0, ___ref___im__1));
#line 143
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_const(80));
#line 143
if(___nl__bool__29){ goto label_10;}
#line 143
c_rt_lib0clear(&___nl__im__0);
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
c_rt_lib0clear(&___nl__im__6);
#line 143
//clear ___nl__bool__7;
#line 143
//clear ___nl__bool__14;
#line 143
c_rt_lib0clear(&___nl__im__15);
#line 143
//clear ___nl__bool__29;
#line 143
return ___nl__im__30;
#line 143
label_10:
;
#line 143
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(80)));
#line 144
goto label_3;
#line 144
label_3:
;
#line 144
//clear ___nl__bool__7;
#line 144
//clear ___nl__bool__14;
#line 144
c_rt_lib0clear(&___nl__im__15);
#line 144
//clear ___nl__bool__29;
#line 144
c_rt_lib0clear(&___nl__im__30);
#line 145
label_12:
;
#line 146
c_rt_lib0move(&___nl__im__32, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 146
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__32);
#line 146
c_rt_lib0clear(&___nl__im__32);
#line 146
___nl__bool__31 = !___nl__bool__31;
#line 146
if(___nl__bool__31){ goto label_14;}
#line 146
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 146
c_rt_lib0clear(&___nl__im__0);
#line 146
c_rt_lib0clear(&___nl__im__2);
#line 146
c_rt_lib0clear(&___nl__im__6);
#line 146
//clear ___nl__bool__31;
#line 146
return ___nl__im__33;
#line 146
goto label_13;
#line 146
label_14:
;
#line 146
label_13:
;
#line 146
//clear ___nl__bool__31;
#line 146
c_rt_lib0clear(&___nl__im__33);
#line 147
___nl__int__35 = getIntFromImm((*___ref___im__1));
#line 147
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__0, ___nl__int__35));
#line 147
//clear ___nl__int__35;
#line 148
c_rt_lib0move(&___nl__im__37,___get_global_const(347));
#line 148
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__37);
#line 148
c_rt_lib0clear(&___nl__im__37);
#line 148
___nl__bool__36 = !___nl__bool__36;
#line 148
if(___nl__bool__36){ goto label_16;}
#line 149
___nl__int__39 = 5;
#line 149
___nl__int__40 = getIntFromImm(___nl__im__2);
#line 149
___nl__int__41 = ___nl__int__40 >= ___nl__int__39;
#line 149
___nl__bool__38 = ___nl__int__41;
#line 149
//clear ___nl__int__39;
#line 149
//clear ___nl__int__40;
#line 149
//clear ___nl__int__41;
#line 149
___nl__bool__38 = !___nl__bool__38;
#line 149
if(___nl__bool__38){ goto label_18;}
#line 149
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 149
c_rt_lib0clear(&___nl__im__0);
#line 149
c_rt_lib0clear(&___nl__im__2);
#line 149
c_rt_lib0clear(&___nl__im__6);
#line 149
c_rt_lib0clear(&___nl__im__34);
#line 149
//clear ___nl__bool__36;
#line 149
//clear ___nl__bool__38;
#line 149
return ___nl__im__42;
#line 149
goto label_17;
#line 149
label_18:
;
#line 149
label_17:
;
#line 149
//clear ___nl__bool__38;
#line 149
c_rt_lib0clear(&___nl__im__42);
#line 150
___nl__int__43 = 1;
#line 150
___nl__int__44 = getIntFromImm((*___ref___im__1));
#line 150
___nl__int__45 = ___nl__int__44 + ___nl__int__43;
#line 150
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__45));
#line 150
//clear ___nl__int__43;
#line 150
//clear ___nl__int__44;
#line 150
//clear ___nl__int__45;
#line 151
___nl__int__49 = 5;
#line 151
c_rt_lib0move(&___nl__im__50, c_rt_lib0int_new(___nl__int__49));
#line 151
c_rt_lib0move(&___nl__im__48, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__50));
#line 151
//clear ___nl__int__49;
#line 151
c_rt_lib0clear(&___nl__im__50);
#line 151
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_const(80));
#line 151
if(___nl__bool__47){ goto label_19;}
#line 151
c_rt_lib0clear(&___nl__im__0);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
c_rt_lib0clear(&___nl__im__6);
#line 151
c_rt_lib0clear(&___nl__im__34);
#line 151
//clear ___nl__bool__36;
#line 151
c_rt_lib0clear(&___nl__im__46);
#line 151
//clear ___nl__bool__47;
#line 151
return ___nl__im__48;
#line 151
label_19:
;
#line 151
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(80)));
#line 152
___nl__int__51 = getIntFromImm(___nl__im__6);
#line 152
___nl__int__52 = getIntFromImm(___nl__im__46);
#line 152
___nl__int__53 = ___nl__int__51 * ___nl__int__52;
#line 152
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__53));
#line 152
//clear ___nl__int__51;
#line 152
//clear ___nl__int__52;
#line 152
//clear ___nl__int__53;
#line 153
goto label_15;
#line 153
label_16:
;
#line 153
c_rt_lib0move(&___nl__im__54,___get_global_const(109));
#line 153
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__54);
#line 153
c_rt_lib0clear(&___nl__im__54);
#line 153
___nl__bool__36 = !___nl__bool__36;
#line 153
if(___nl__bool__36){ goto label_20;}
#line 154
___nl__int__56 = 5;
#line 154
___nl__int__57 = getIntFromImm(___nl__im__2);
#line 154
___nl__int__58 = ___nl__int__57 >= ___nl__int__56;
#line 154
___nl__bool__55 = ___nl__int__58;
#line 154
//clear ___nl__int__56;
#line 154
//clear ___nl__int__57;
#line 154
//clear ___nl__int__58;
#line 154
___nl__bool__55 = !___nl__bool__55;
#line 154
if(___nl__bool__55){ goto label_22;}
#line 154
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
c_rt_lib0clear(&___nl__im__2);
#line 154
c_rt_lib0clear(&___nl__im__6);
#line 154
c_rt_lib0clear(&___nl__im__34);
#line 154
//clear ___nl__bool__36;
#line 154
c_rt_lib0clear(&___nl__im__46);
#line 154
//clear ___nl__bool__47;
#line 154
c_rt_lib0clear(&___nl__im__48);
#line 154
//clear ___nl__bool__55;
#line 154
return ___nl__im__59;
#line 154
goto label_21;
#line 154
label_22:
;
#line 154
label_21:
;
#line 154
//clear ___nl__bool__55;
#line 154
c_rt_lib0clear(&___nl__im__59);
#line 155
___nl__int__60 = 1;
#line 155
___nl__int__61 = getIntFromImm((*___ref___im__1));
#line 155
___nl__int__62 = ___nl__int__61 + ___nl__int__60;
#line 155
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__62));
#line 155
//clear ___nl__int__60;
#line 155
//clear ___nl__int__61;
#line 155
//clear ___nl__int__62;
#line 156
___nl__int__66 = 5;
#line 156
c_rt_lib0move(&___nl__im__67, c_rt_lib0int_new(___nl__int__66));
#line 156
c_rt_lib0move(&___nl__im__65, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__67));
#line 156
//clear ___nl__int__66;
#line 156
c_rt_lib0clear(&___nl__im__67);
#line 156
___nl__bool__64 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(80));
#line 156
if(___nl__bool__64){ goto label_23;}
#line 156
c_rt_lib0clear(&___nl__im__0);
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 156
c_rt_lib0clear(&___nl__im__6);
#line 156
c_rt_lib0clear(&___nl__im__34);
#line 156
//clear ___nl__bool__36;
#line 156
c_rt_lib0clear(&___nl__im__46);
#line 156
//clear ___nl__bool__47;
#line 156
c_rt_lib0clear(&___nl__im__48);
#line 156
c_rt_lib0clear(&___nl__im__63);
#line 156
//clear ___nl__bool__64;
#line 156
return ___nl__im__65;
#line 156
label_23:
;
#line 156
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__65, ___get_global_const(80)));
#line 157
___nl__int__68 = getIntFromImm(___nl__im__6);
#line 157
___nl__int__69 = getIntFromImm(___nl__im__63);
#line 157
___nl__int__70 = ___nl__int__68 / ___nl__int__69;
#line 157
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__70));
#line 157
//clear ___nl__int__68;
#line 157
//clear ___nl__int__69;
#line 157
//clear ___nl__int__70;
#line 158
goto label_15;
#line 158
label_20:
;
#line 158
c_rt_lib0move(&___nl__im__71,___get_global_const(350));
#line 158
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__71);
#line 158
c_rt_lib0clear(&___nl__im__71);
#line 158
___nl__bool__36 = !___nl__bool__36;
#line 158
if(___nl__bool__36){ goto label_24;}
#line 159
___nl__int__73 = 5;
#line 159
___nl__int__74 = getIntFromImm(___nl__im__2);
#line 159
___nl__int__75 = ___nl__int__74 >= ___nl__int__73;
#line 159
___nl__bool__72 = ___nl__int__75;
#line 159
//clear ___nl__int__73;
#line 159
//clear ___nl__int__74;
#line 159
//clear ___nl__int__75;
#line 159
___nl__bool__72 = !___nl__bool__72;
#line 159
if(___nl__bool__72){ goto label_26;}
#line 159
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 159
c_rt_lib0clear(&___nl__im__0);
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 159
c_rt_lib0clear(&___nl__im__34);
#line 159
//clear ___nl__bool__36;
#line 159
c_rt_lib0clear(&___nl__im__46);
#line 159
//clear ___nl__bool__47;
#line 159
c_rt_lib0clear(&___nl__im__48);
#line 159
c_rt_lib0clear(&___nl__im__63);
#line 159
//clear ___nl__bool__64;
#line 159
c_rt_lib0clear(&___nl__im__65);
#line 159
//clear ___nl__bool__72;
#line 159
return ___nl__im__76;
#line 159
goto label_25;
#line 159
label_26:
;
#line 159
label_25:
;
#line 159
//clear ___nl__bool__72;
#line 159
c_rt_lib0clear(&___nl__im__76);
#line 160
___nl__int__77 = 1;
#line 160
___nl__int__78 = getIntFromImm((*___ref___im__1));
#line 160
___nl__int__79 = ___nl__int__78 + ___nl__int__77;
#line 160
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__79));
#line 160
//clear ___nl__int__77;
#line 160
//clear ___nl__int__78;
#line 160
//clear ___nl__int__79;
#line 161
___nl__int__83 = 5;
#line 161
c_rt_lib0move(&___nl__im__84, c_rt_lib0int_new(___nl__int__83));
#line 161
c_rt_lib0move(&___nl__im__82, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__84));
#line 161
//clear ___nl__int__83;
#line 161
c_rt_lib0clear(&___nl__im__84);
#line 161
___nl__bool__81 = c_rt_lib0priv_is(___nl__im__82, ___get_global_const(80));
#line 161
if(___nl__bool__81){ goto label_27;}
#line 161
c_rt_lib0clear(&___nl__im__0);
#line 161
c_rt_lib0clear(&___nl__im__2);
#line 161
c_rt_lib0clear(&___nl__im__6);
#line 161
c_rt_lib0clear(&___nl__im__34);
#line 161
//clear ___nl__bool__36;
#line 161
c_rt_lib0clear(&___nl__im__46);
#line 161
//clear ___nl__bool__47;
#line 161
c_rt_lib0clear(&___nl__im__48);
#line 161
c_rt_lib0clear(&___nl__im__63);
#line 161
//clear ___nl__bool__64;
#line 161
c_rt_lib0clear(&___nl__im__65);
#line 161
c_rt_lib0clear(&___nl__im__80);
#line 161
//clear ___nl__bool__81;
#line 161
return ___nl__im__82;
#line 161
label_27:
;
#line 161
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__82, ___get_global_const(80)));
#line 162
___nl__int__85 = getIntFromImm(___nl__im__6);
#line 162
___nl__int__86 = getIntFromImm(___nl__im__80);
#line 162
___nl__int__87 = ___nl__int__85 % ___nl__int__86;
#line 162
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__87));
#line 162
//clear ___nl__int__85;
#line 162
//clear ___nl__int__86;
#line 162
//clear ___nl__int__87;
#line 163
goto label_15;
#line 163
label_24:
;
#line 163
c_rt_lib0move(&___nl__im__88,___get_global_const(341));
#line 163
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__88);
#line 163
c_rt_lib0clear(&___nl__im__88);
#line 163
___nl__bool__36 = !___nl__bool__36;
#line 163
if(___nl__bool__36){ goto label_28;}
#line 164
___nl__int__90 = 2;
#line 164
___nl__int__91 = getIntFromImm(___nl__im__2);
#line 164
___nl__int__92 = ___nl__int__91 >= ___nl__int__90;
#line 164
___nl__bool__89 = ___nl__int__92;
#line 164
//clear ___nl__int__90;
#line 164
//clear ___nl__int__91;
#line 164
//clear ___nl__int__92;
#line 164
___nl__bool__89 = !___nl__bool__89;
#line 164
if(___nl__bool__89){ goto label_30;}
#line 164
c_rt_lib0move(&___nl__im__93, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 164
c_rt_lib0clear(&___nl__im__0);
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
c_rt_lib0clear(&___nl__im__6);
#line 164
c_rt_lib0clear(&___nl__im__34);
#line 164
//clear ___nl__bool__36;
#line 164
c_rt_lib0clear(&___nl__im__46);
#line 164
//clear ___nl__bool__47;
#line 164
c_rt_lib0clear(&___nl__im__48);
#line 164
c_rt_lib0clear(&___nl__im__63);
#line 164
//clear ___nl__bool__64;
#line 164
c_rt_lib0clear(&___nl__im__65);
#line 164
c_rt_lib0clear(&___nl__im__80);
#line 164
//clear ___nl__bool__81;
#line 164
c_rt_lib0clear(&___nl__im__82);
#line 164
//clear ___nl__bool__89;
#line 164
return ___nl__im__93;
#line 164
goto label_29;
#line 164
label_30:
;
#line 164
label_29:
;
#line 164
//clear ___nl__bool__89;
#line 164
c_rt_lib0clear(&___nl__im__93);
#line 165
___nl__int__94 = 1;
#line 165
___nl__int__95 = getIntFromImm((*___ref___im__1));
#line 165
___nl__int__96 = ___nl__int__95 + ___nl__int__94;
#line 165
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__96));
#line 165
//clear ___nl__int__94;
#line 165
//clear ___nl__int__95;
#line 165
//clear ___nl__int__96;
#line 166
___nl__int__100 = 2;
#line 166
c_rt_lib0move(&___nl__im__101, c_rt_lib0int_new(___nl__int__100));
#line 166
c_rt_lib0move(&___nl__im__99, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__101));
#line 166
//clear ___nl__int__100;
#line 166
c_rt_lib0clear(&___nl__im__101);
#line 166
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__99, ___get_global_const(80));
#line 166
if(___nl__bool__98){ goto label_31;}
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
c_rt_lib0clear(&___nl__im__34);
#line 166
//clear ___nl__bool__36;
#line 166
c_rt_lib0clear(&___nl__im__46);
#line 166
//clear ___nl__bool__47;
#line 166
c_rt_lib0clear(&___nl__im__48);
#line 166
c_rt_lib0clear(&___nl__im__63);
#line 166
//clear ___nl__bool__64;
#line 166
c_rt_lib0clear(&___nl__im__65);
#line 166
c_rt_lib0clear(&___nl__im__80);
#line 166
//clear ___nl__bool__81;
#line 166
c_rt_lib0clear(&___nl__im__82);
#line 166
c_rt_lib0clear(&___nl__im__97);
#line 166
//clear ___nl__bool__98;
#line 166
return ___nl__im__99;
#line 166
label_31:
;
#line 166
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__99, ___get_global_const(80)));
#line 167
___nl__int__102 = getIntFromImm(___nl__im__6);
#line 167
___nl__int__103 = getIntFromImm(___nl__im__97);
#line 167
___nl__int__104 = ___nl__int__102 + ___nl__int__103;
#line 167
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__104));
#line 167
//clear ___nl__int__102;
#line 167
//clear ___nl__int__103;
#line 167
//clear ___nl__int__104;
#line 168
goto label_15;
#line 168
label_28:
;
#line 168
c_rt_lib0move(&___nl__im__105,___get_global_const(339));
#line 168
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__105);
#line 168
c_rt_lib0clear(&___nl__im__105);
#line 168
___nl__bool__36 = !___nl__bool__36;
#line 168
if(___nl__bool__36){ goto label_32;}
#line 169
___nl__int__107 = 2;
#line 169
___nl__int__108 = getIntFromImm(___nl__im__2);
#line 169
___nl__int__109 = ___nl__int__108 >= ___nl__int__107;
#line 169
___nl__bool__106 = ___nl__int__109;
#line 169
//clear ___nl__int__107;
#line 169
//clear ___nl__int__108;
#line 169
//clear ___nl__int__109;
#line 169
___nl__bool__106 = !___nl__bool__106;
#line 169
if(___nl__bool__106){ goto label_34;}
#line 169
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 169
c_rt_lib0clear(&___nl__im__0);
#line 169
c_rt_lib0clear(&___nl__im__2);
#line 169
c_rt_lib0clear(&___nl__im__6);
#line 169
c_rt_lib0clear(&___nl__im__34);
#line 169
//clear ___nl__bool__36;
#line 169
c_rt_lib0clear(&___nl__im__46);
#line 169
//clear ___nl__bool__47;
#line 169
c_rt_lib0clear(&___nl__im__48);
#line 169
c_rt_lib0clear(&___nl__im__63);
#line 169
//clear ___nl__bool__64;
#line 169
c_rt_lib0clear(&___nl__im__65);
#line 169
c_rt_lib0clear(&___nl__im__80);
#line 169
//clear ___nl__bool__81;
#line 169
c_rt_lib0clear(&___nl__im__82);
#line 169
c_rt_lib0clear(&___nl__im__97);
#line 169
//clear ___nl__bool__98;
#line 169
c_rt_lib0clear(&___nl__im__99);
#line 169
//clear ___nl__bool__106;
#line 169
return ___nl__im__110;
#line 169
goto label_33;
#line 169
label_34:
;
#line 169
label_33:
;
#line 169
//clear ___nl__bool__106;
#line 169
c_rt_lib0clear(&___nl__im__110);
#line 170
___nl__int__111 = 1;
#line 170
___nl__int__112 = getIntFromImm((*___ref___im__1));
#line 170
___nl__int__113 = ___nl__int__112 + ___nl__int__111;
#line 170
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__113));
#line 170
//clear ___nl__int__111;
#line 170
//clear ___nl__int__112;
#line 170
//clear ___nl__int__113;
#line 171
___nl__int__117 = 2;
#line 171
c_rt_lib0move(&___nl__im__118, c_rt_lib0int_new(___nl__int__117));
#line 171
c_rt_lib0move(&___nl__im__116, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__118));
#line 171
//clear ___nl__int__117;
#line 171
c_rt_lib0clear(&___nl__im__118);
#line 171
___nl__bool__115 = c_rt_lib0priv_is(___nl__im__116, ___get_global_const(80));
#line 171
if(___nl__bool__115){ goto label_35;}
#line 171
c_rt_lib0clear(&___nl__im__0);
#line 171
c_rt_lib0clear(&___nl__im__2);
#line 171
c_rt_lib0clear(&___nl__im__6);
#line 171
c_rt_lib0clear(&___nl__im__34);
#line 171
//clear ___nl__bool__36;
#line 171
c_rt_lib0clear(&___nl__im__46);
#line 171
//clear ___nl__bool__47;
#line 171
c_rt_lib0clear(&___nl__im__48);
#line 171
c_rt_lib0clear(&___nl__im__63);
#line 171
//clear ___nl__bool__64;
#line 171
c_rt_lib0clear(&___nl__im__65);
#line 171
c_rt_lib0clear(&___nl__im__80);
#line 171
//clear ___nl__bool__81;
#line 171
c_rt_lib0clear(&___nl__im__82);
#line 171
c_rt_lib0clear(&___nl__im__97);
#line 171
//clear ___nl__bool__98;
#line 171
c_rt_lib0clear(&___nl__im__99);
#line 171
c_rt_lib0clear(&___nl__im__114);
#line 171
//clear ___nl__bool__115;
#line 171
return ___nl__im__116;
#line 171
label_35:
;
#line 171
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__116, ___get_global_const(80)));
#line 172
___nl__int__119 = getIntFromImm(___nl__im__6);
#line 172
___nl__int__120 = getIntFromImm(___nl__im__114);
#line 172
___nl__int__121 = ___nl__int__119 - ___nl__int__120;
#line 172
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__121));
#line 172
//clear ___nl__int__119;
#line 172
//clear ___nl__int__120;
#line 172
//clear ___nl__int__121;
#line 173
goto label_15;
#line 173
label_32:
;
#line 173
c_rt_lib0move(&___nl__im__122,___get_global_const(299));
#line 173
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__122);
#line 173
c_rt_lib0clear(&___nl__im__122);
#line 173
___nl__bool__36 = !___nl__bool__36;
#line 173
if(___nl__bool__36){ goto label_36;}
#line 174
___nl__int__124 = 0;
#line 174
___nl__int__125 = getIntFromImm(___nl__im__2);
#line 174
___nl__int__126 = ___nl__int__125 < ___nl__int__124;
#line 174
___nl__bool__123 = ___nl__int__126;
#line 174
//clear ___nl__int__124;
#line 174
//clear ___nl__int__125;
#line 174
//clear ___nl__int__126;
#line 174
___nl__bool__123 = !___nl__bool__123;
#line 174
if(___nl__bool__123){ goto label_38;}
#line 174
c_rt_lib0move(&___nl__im__127, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
c_rt_lib0clear(&___nl__im__2);
#line 174
c_rt_lib0clear(&___nl__im__6);
#line 174
c_rt_lib0clear(&___nl__im__34);
#line 174
//clear ___nl__bool__36;
#line 174
c_rt_lib0clear(&___nl__im__46);
#line 174
//clear ___nl__bool__47;
#line 174
c_rt_lib0clear(&___nl__im__48);
#line 174
c_rt_lib0clear(&___nl__im__63);
#line 174
//clear ___nl__bool__64;
#line 174
c_rt_lib0clear(&___nl__im__65);
#line 174
c_rt_lib0clear(&___nl__im__80);
#line 174
//clear ___nl__bool__81;
#line 174
c_rt_lib0clear(&___nl__im__82);
#line 174
c_rt_lib0clear(&___nl__im__97);
#line 174
//clear ___nl__bool__98;
#line 174
c_rt_lib0clear(&___nl__im__99);
#line 174
c_rt_lib0clear(&___nl__im__114);
#line 174
//clear ___nl__bool__115;
#line 174
c_rt_lib0clear(&___nl__im__116);
#line 174
//clear ___nl__bool__123;
#line 174
return ___nl__im__127;
#line 174
goto label_37;
#line 174
label_38:
;
#line 174
label_37:
;
#line 174
//clear ___nl__bool__123;
#line 174
c_rt_lib0clear(&___nl__im__127);
#line 175
c_rt_lib0move(&___nl__im__128, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
c_rt_lib0clear(&___nl__im__2);
#line 175
c_rt_lib0clear(&___nl__im__6);
#line 175
c_rt_lib0clear(&___nl__im__34);
#line 175
//clear ___nl__bool__36;
#line 175
c_rt_lib0clear(&___nl__im__46);
#line 175
//clear ___nl__bool__47;
#line 175
c_rt_lib0clear(&___nl__im__48);
#line 175
c_rt_lib0clear(&___nl__im__63);
#line 175
//clear ___nl__bool__64;
#line 175
c_rt_lib0clear(&___nl__im__65);
#line 175
c_rt_lib0clear(&___nl__im__80);
#line 175
//clear ___nl__bool__81;
#line 175
c_rt_lib0clear(&___nl__im__82);
#line 175
c_rt_lib0clear(&___nl__im__97);
#line 175
//clear ___nl__bool__98;
#line 175
c_rt_lib0clear(&___nl__im__99);
#line 175
c_rt_lib0clear(&___nl__im__114);
#line 175
//clear ___nl__bool__115;
#line 175
c_rt_lib0clear(&___nl__im__116);
#line 175
return ___nl__im__128;
#line 176
goto label_15;
#line 176
label_36:
;
#line 177
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
c_rt_lib0clear(&___nl__im__2);
#line 177
c_rt_lib0clear(&___nl__im__6);
#line 177
c_rt_lib0clear(&___nl__im__34);
#line 177
//clear ___nl__bool__36;
#line 177
c_rt_lib0clear(&___nl__im__46);
#line 177
//clear ___nl__bool__47;
#line 177
c_rt_lib0clear(&___nl__im__48);
#line 177
c_rt_lib0clear(&___nl__im__63);
#line 177
//clear ___nl__bool__64;
#line 177
c_rt_lib0clear(&___nl__im__65);
#line 177
c_rt_lib0clear(&___nl__im__80);
#line 177
//clear ___nl__bool__81;
#line 177
c_rt_lib0clear(&___nl__im__82);
#line 177
c_rt_lib0clear(&___nl__im__97);
#line 177
//clear ___nl__bool__98;
#line 177
c_rt_lib0clear(&___nl__im__99);
#line 177
c_rt_lib0clear(&___nl__im__114);
#line 177
//clear ___nl__bool__115;
#line 177
c_rt_lib0clear(&___nl__im__116);
#line 177
c_rt_lib0clear(&___nl__im__128);
#line 177
return ___nl__im__129;
#line 178
goto label_15;
#line 178
label_15:
;
#line 178
//clear ___nl__bool__36;
#line 178
c_rt_lib0clear(&___nl__im__46);
#line 178
//clear ___nl__bool__47;
#line 178
c_rt_lib0clear(&___nl__im__48);
#line 178
c_rt_lib0clear(&___nl__im__63);
#line 178
//clear ___nl__bool__64;
#line 178
c_rt_lib0clear(&___nl__im__65);
#line 178
c_rt_lib0clear(&___nl__im__80);
#line 178
//clear ___nl__bool__81;
#line 178
c_rt_lib0clear(&___nl__im__82);
#line 178
c_rt_lib0clear(&___nl__im__97);
#line 178
//clear ___nl__bool__98;
#line 178
c_rt_lib0clear(&___nl__im__99);
#line 178
c_rt_lib0clear(&___nl__im__114);
#line 178
//clear ___nl__bool__115;
#line 178
c_rt_lib0clear(&___nl__im__116);
#line 178
c_rt_lib0clear(&___nl__im__128);
#line 178
c_rt_lib0clear(&___nl__im__129);
#line 145
goto label_12;
#line 145
label_11:
;
#line 180
c_rt_lib0move(&___nl__im__130, c_rt_lib0array_mk(0));
#line 180
nl_die_arg(___nl__im__130);
#line 180
c_rt_lib0clear(&___nl__im__0);
#line 180
c_rt_lib0clear(&___nl__im__2);
#line 180
c_rt_lib0clear(&___nl__im__6);
#line 180
c_rt_lib0clear(&___nl__im__34);
#line 180
c_rt_lib0clear(&___nl__im__130);
#line 180
return NULL;
}

ImmT  string_utils0eval_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0eval_number");
ImmT  *var0 = &(_tab[0]);
return string_utils0eval_number(*var0);
}
ImmT  string_utils0eval_number(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
bool  ___nl__bool__27 = false;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
#line 184
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 184
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 184
c_rt_lib0clear(&___nl__im__2);
#line 184
___nl__bool__1 = !___nl__bool__1;
#line 184
if(___nl__bool__1){ goto label_2;}
#line 184
//clear ___nl__bool__1;
#line 184
return ___nl__im__0;
#line 184
goto label_1;
#line 184
label_2:
;
#line 184
label_1:
;
#line 184
//clear ___nl__bool__1;
#line 185
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 185
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__4, ___nl__im__0));
#line 185
c_rt_lib0clear(&___nl__im__4);
#line 186
___nl__int__7 = 0;
#line 186
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_get(___nl__im__3, ___nl__int__7));
#line 186
//clear ___nl__int__7;
#line 186
c_rt_lib0move(&___nl__im__8,___get_global_const(889));
#line 186
___nl__bool__5 = c_rt_lib0ne(___nl__im__6, ___nl__im__8);
#line 186
c_rt_lib0clear(&___nl__im__6);
#line 186
c_rt_lib0clear(&___nl__im__8);
#line 186
___nl__bool__5 = !___nl__bool__5;
#line 186
if(___nl__bool__5){ goto label_4;}
#line 186
c_rt_lib0clear(&___nl__im__3);
#line 186
//clear ___nl__bool__5;
#line 186
return ___nl__im__0;
#line 186
goto label_3;
#line 186
label_4:
;
#line 186
label_3:
;
#line 186
//clear ___nl__bool__5;
#line 187
___nl__int__9 = 1;
#line 187
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 187
___nl__int__12 = 1;
#line 187
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 187
//clear ___nl__int__11;
#line 187
//clear ___nl__int__12;
#line 187
c_rt_lib0move(&___nl__im__3, array0subarray(___nl__im__3, ___nl__int__9, ___nl__int__10));
#line 187
//clear ___nl__int__9;
#line 187
//clear ___nl__int__10;
#line 188
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 189
___nl__int__15 = 0;
#line 189
___nl__int__16 = 1;
#line 189
___nl__int__17 = c_rt_lib0array_len(___nl__im__3);
#line 189
label_7:
;
#line 189
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 189
___nl__bool__18 = ___nl__int__19;
#line 189
if(___nl__bool__18){ goto label_5;}
#line 189
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__3, ___nl__int__15));
#line 189
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 192
c_rt_lib0move(&___nl__im__29, string_utils0is_int(___nl__im__14));
#line 192
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__29);
#line 192
c_rt_lib0clear(&___nl__im__29);
#line 192
if(___nl__bool__21){ goto label_16;}
#line 192
c_rt_lib0move(&___nl__im__30,___get_global_const(339));
#line 192
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__30);
#line 192
c_rt_lib0clear(&___nl__im__30);
#line 192
label_16:
;
#line 192
//clear ___nl__bool__28;
#line 192
if(___nl__bool__21){ goto label_15;}
#line 192
c_rt_lib0move(&___nl__im__31,___get_global_const(114));
#line 192
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__31);
#line 192
c_rt_lib0clear(&___nl__im__31);
#line 192
label_15:
;
#line 192
//clear ___nl__bool__27;
#line 192
if(___nl__bool__21){ goto label_14;}
#line 192
c_rt_lib0move(&___nl__im__32,___get_global_const(341));
#line 192
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__32);
#line 192
c_rt_lib0clear(&___nl__im__32);
#line 192
label_14:
;
#line 192
//clear ___nl__bool__26;
#line 192
if(___nl__bool__21){ goto label_13;}
#line 192
c_rt_lib0move(&___nl__im__33,___get_global_const(109));
#line 192
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__33);
#line 192
c_rt_lib0clear(&___nl__im__33);
#line 192
label_13:
;
#line 192
//clear ___nl__bool__25;
#line 192
if(___nl__bool__21){ goto label_12;}
#line 192
c_rt_lib0move(&___nl__im__34,___get_global_const(420));
#line 192
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__34);
#line 192
c_rt_lib0clear(&___nl__im__34);
#line 192
label_12:
;
#line 192
//clear ___nl__bool__24;
#line 192
if(___nl__bool__21){ goto label_11;}
#line 193
c_rt_lib0move(&___nl__im__35,___get_global_const(299));
#line 193
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__35);
#line 193
c_rt_lib0clear(&___nl__im__35);
#line 193
label_11:
;
#line 193
//clear ___nl__bool__23;
#line 193
if(___nl__bool__21){ goto label_10;}
#line 193
c_rt_lib0move(&___nl__im__36,___get_global_const(347));
#line 193
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__36);
#line 193
c_rt_lib0clear(&___nl__im__36);
#line 193
label_10:
;
#line 193
//clear ___nl__bool__22;
#line 193
___nl__bool__21 = !___nl__bool__21;
#line 193
___nl__bool__21 = !___nl__bool__21;
#line 193
if(___nl__bool__21){ goto label_9;}
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__13);
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
//clear ___nl__int__15;
#line 190
//clear ___nl__int__16;
#line 190
//clear ___nl__int__17;
#line 190
//clear ___nl__bool__18;
#line 190
//clear ___nl__int__19;
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
//clear ___nl__bool__21;
#line 190
return ___nl__im__0;
#line 190
goto label_8;
#line 190
label_9:
;
#line 190
label_8:
;
#line 190
//clear ___nl__bool__21;
#line 194
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_add(___nl__im__13, ___nl__im__14));
#line 194
c_rt_lib0clear(&___nl__im__14);
#line 194
label_6:
;
#line 195
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 195
goto label_7;
#line 195
label_5:
;
#line 196
c_rt_lib0move(&___nl__im__38,___get_global_const(37));
#line 196
c_rt_lib0move(&___nl__im__37, string0split(___nl__im__38, ___nl__im__13));
#line 196
c_rt_lib0clear(&___nl__im__38);
#line 197
c_rt_lib0move(&___nl__im__39,___get_global_const(21));
#line 198
c_rt_lib0move(&___nl__im__41,___get_global_const(41));
#line 198
c_rt_lib0move(&___nl__im__41, c_rt_lib0unary_minus(___nl__im__41));
#line 198
c_rt_lib0move(&___nl__im__40, string_utils_priv0cal_expr(___nl__im__37, &___nl__im__39, ___nl__im__41));
#line 198
c_rt_lib0clear(&___nl__im__41);
#line 198
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__40, ___get_global_const(79));
#line 198
if(___nl__bool__42){ goto label_18;}
#line 200
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__40, ___get_global_const(80));
#line 200
if(___nl__bool__42){ goto label_19;}
#line 200
c_rt_lib0move(&___nl__im__43,___get_global_const(16));
#line 200
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(2, ___nl__im__43, ___nl__im__40));
#line 200
nl_die_arg(___nl__im__43);
#line 198
label_18:
;
#line 199
c_rt_lib0move(&___nl__im__44,___get_global_const(37));
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
c_rt_lib0clear(&___nl__im__3);
#line 199
c_rt_lib0clear(&___nl__im__13);
#line 199
c_rt_lib0clear(&___nl__im__14);
#line 199
//clear ___nl__int__15;
#line 199
//clear ___nl__int__16;
#line 199
//clear ___nl__int__17;
#line 199
//clear ___nl__bool__18;
#line 199
//clear ___nl__int__19;
#line 199
c_rt_lib0clear(&___nl__im__20);
#line 199
c_rt_lib0clear(&___nl__im__37);
#line 199
c_rt_lib0clear(&___nl__im__39);
#line 199
c_rt_lib0clear(&___nl__im__40);
#line 199
//clear ___nl__bool__42;
#line 199
c_rt_lib0clear(&___nl__im__43);
#line 199
return ___nl__im__44;
#line 200
goto label_17;
#line 200
label_19:
;
#line 200
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__40, ___get_global_const(80)));
#line 200
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 201
c_rt_lib0clear(&___nl__im__0);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__13);
#line 201
c_rt_lib0clear(&___nl__im__14);
#line 201
//clear ___nl__int__15;
#line 201
//clear ___nl__int__16;
#line 201
//clear ___nl__int__17;
#line 201
//clear ___nl__bool__18;
#line 201
//clear ___nl__int__19;
#line 201
c_rt_lib0clear(&___nl__im__20);
#line 201
c_rt_lib0clear(&___nl__im__37);
#line 201
c_rt_lib0clear(&___nl__im__39);
#line 201
c_rt_lib0clear(&___nl__im__40);
#line 201
//clear ___nl__bool__42;
#line 201
c_rt_lib0clear(&___nl__im__43);
#line 201
c_rt_lib0clear(&___nl__im__44);
#line 201
c_rt_lib0clear(&___nl__im__46);
#line 201
return ___nl__im__45;
#line 202
goto label_17;
#line 202
label_17:
;
#line 202
c_rt_lib0clear(&___nl__im__0);
#line 202
c_rt_lib0clear(&___nl__im__3);
#line 202
c_rt_lib0clear(&___nl__im__13);
#line 202
c_rt_lib0clear(&___nl__im__14);
#line 202
//clear ___nl__int__15;
#line 202
//clear ___nl__int__16;
#line 202
//clear ___nl__int__17;
#line 202
//clear ___nl__bool__18;
#line 202
//clear ___nl__int__19;
#line 202
c_rt_lib0clear(&___nl__im__20);
#line 202
c_rt_lib0clear(&___nl__im__37);
#line 202
c_rt_lib0clear(&___nl__im__39);
#line 202
c_rt_lib0clear(&___nl__im__40);
#line 202
//clear ___nl__bool__42;
#line 202
c_rt_lib0clear(&___nl__im__43);
#line 202
c_rt_lib0clear(&___nl__im__44);
#line 202
c_rt_lib0clear(&___nl__im__45);
#line 202
c_rt_lib0clear(&___nl__im__46);
#line 202
return NULL;
}

ImmT  string_utils0get_date0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0get_date");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string_utils0get_date(*var0, *var1);
}
ImmT  string_utils0get_date(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_utils_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
#line 209
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__1, ___nl__im__0));
#line 212
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 212
___nl__int__8 = 3;
#line 212
___nl__int__9 = ___nl__int__7 == ___nl__int__8;
#line 212
___nl__bool__3 = ___nl__int__9;
#line 212
//clear ___nl__int__7;
#line 212
//clear ___nl__int__8;
#line 212
//clear ___nl__int__9;
#line 212
___nl__bool__6 = !___nl__bool__3;
#line 212
if(___nl__bool__6){ goto label_5;}
#line 213
___nl__int__11 = 0;
#line 213
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__11));
#line 213
//clear ___nl__int__11;
#line 213
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__10);
#line 213
c_rt_lib0clear(&___nl__im__10);
#line 213
label_5:
;
#line 213
//clear ___nl__bool__6;
#line 213
___nl__bool__5 = !___nl__bool__3;
#line 213
if(___nl__bool__5){ goto label_4;}
#line 214
___nl__int__13 = 1;
#line 214
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__13));
#line 214
//clear ___nl__int__13;
#line 214
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__12);
#line 214
c_rt_lib0clear(&___nl__im__12);
#line 214
label_4:
;
#line 214
//clear ___nl__bool__5;
#line 214
___nl__bool__4 = !___nl__bool__3;
#line 214
if(___nl__bool__4){ goto label_3;}
#line 215
___nl__int__15 = 2;
#line 215
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__2, ___nl__int__15));
#line 215
//clear ___nl__int__15;
#line 215
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__14);
#line 215
c_rt_lib0clear(&___nl__im__14);
#line 215
label_3:
;
#line 215
//clear ___nl__bool__4;
#line 215
___nl__bool__3 = !___nl__bool__3;
#line 215
___nl__bool__3 = !___nl__bool__3;
#line 215
if(___nl__bool__3){ goto label_2;}
#line 210
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 210
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__17));
#line 210
c_rt_lib0clear(&___nl__im__17);
#line 210
c_rt_lib0clear(&___nl__im__0);
#line 210
c_rt_lib0clear(&___nl__im__1);
#line 210
c_rt_lib0clear(&___nl__im__2);
#line 210
//clear ___nl__bool__3;
#line 210
return ___nl__im__16;
#line 210
goto label_1;
#line 210
label_2:
;
#line 210
label_1:
;
#line 210
//clear ___nl__bool__3;
#line 210
c_rt_lib0clear(&___nl__im__16);
#line 216
___nl__int__21 = 0;
#line 216
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__2, ___nl__int__21));
#line 216
//clear ___nl__int__21;
#line 216
___nl__int__23 = 1;
#line 216
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__2, ___nl__int__23));
#line 216
//clear ___nl__int__23;
#line 216
___nl__int__25 = 2;
#line 216
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__2, ___nl__int__25));
#line 216
//clear ___nl__int__25;
#line 216
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(3, ___get_global_const(1171), ___nl__im__20, ___get_global_const(1172), ___nl__im__22, ___get_global_const(1173), ___nl__im__24));
#line 216
c_rt_lib0clear(&___nl__im__20);
#line 216
c_rt_lib0clear(&___nl__im__22);
#line 216
c_rt_lib0clear(&___nl__im__24);
#line 216
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__19));
#line 216
c_rt_lib0clear(&___nl__im__19);
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
c_rt_lib0clear(&___nl__im__1);
#line 216
c_rt_lib0clear(&___nl__im__2);
#line 216
return ___nl__im__18;
}

ImmT  string_utils0change0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string_utils0change");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return string_utils0change(*var0, *var1, *var2);
}
ImmT  string_utils0change(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
string_utils_priv0__const__init();
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
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
#line 220
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 221
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 221
c_rt_lib0move(&___nl__im__4, string0split(___nl__im__5, ___nl__im__0));
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
___nl__int__7 = 0;
#line 221
___nl__int__8 = 1;
#line 221
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 221
label_3:
;
#line 221
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 221
___nl__bool__10 = ___nl__int__11;
#line 221
if(___nl__bool__10){ goto label_1;}
#line 221
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__4, ___nl__int__7));
#line 221
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 222
___nl__bool__14 = c_rt_lib0eq(___nl__im__6, ___nl__im__1);
#line 222
if(___nl__bool__14){ goto label_5;}
#line 222
c_rt_lib0copy(&___nl__im__13, ___nl__im__6);
#line 222
goto label_4;
#line 222
label_5:
;
#line 222
c_rt_lib0copy(&___nl__im__13, ___nl__im__2);
#line 222
label_4:
;
#line 222
//clear ___nl__bool__14;
#line 222
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 222
c_rt_lib0clear(&___nl__im__13);
#line 222
c_rt_lib0clear(&___nl__im__6);
#line 222
label_2:
;
#line 223
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 223
goto label_3;
#line 223
label_1:
;
#line 224
c_rt_lib0clear(&___nl__im__0);
#line 224
c_rt_lib0clear(&___nl__im__1);
#line 224
c_rt_lib0clear(&___nl__im__2);
#line 224
c_rt_lib0clear(&___nl__im__4);
#line 224
c_rt_lib0clear(&___nl__im__6);
#line 224
//clear ___nl__int__7;
#line 224
//clear ___nl__int__8;
#line 224
//clear ___nl__int__9;
#line 224
//clear ___nl__bool__10;
#line 224
//clear ___nl__int__11;
#line 224
c_rt_lib0clear(&___nl__im__12);
#line 224
return ___nl__im__3;
#line 224
c_rt_lib0clear(&___nl__im__0);
#line 224
c_rt_lib0clear(&___nl__im__1);
#line 224
c_rt_lib0clear(&___nl__im__2);
#line 224
c_rt_lib0clear(&___nl__im__3);
#line 224
c_rt_lib0clear(&___nl__im__4);
#line 224
c_rt_lib0clear(&___nl__im__6);
#line 224
//clear ___nl__int__7;
#line 224
//clear ___nl__int__8;
#line 224
//clear ___nl__int__9;
#line 224
//clear ___nl__bool__10;
#line 224
//clear ___nl__int__11;
#line 224
c_rt_lib0clear(&___nl__im__12);
#line 224
return NULL;
}

ImmT  string_utils0erase_tail_whitespace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0erase_tail_whitespace");
ImmT  *var0 = &(_tab[0]);
return string_utils0erase_tail_whitespace(*var0);
}
ImmT  string_utils0erase_tail_whitespace(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
#line 228
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 228
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 228
c_rt_lib0clear(&___nl__im__2);
#line 228
___nl__bool__1 = !___nl__bool__1;
#line 228
if(___nl__bool__1){ goto label_2;}
#line 228
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
//clear ___nl__bool__1;
#line 228
return ___nl__im__3;
#line 228
goto label_1;
#line 228
label_2:
;
#line 228
label_1:
;
#line 228
//clear ___nl__bool__1;
#line 228
c_rt_lib0clear(&___nl__im__3);
#line 229
___nl__int__5 = string0length(___nl__im__0);
#line 229
___nl__int__6 = 1;
#line 229
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 229
//clear ___nl__int__5;
#line 229
//clear ___nl__int__6;
#line 230
label_4:
;
#line 230
___nl__int__9 = 0;
#line 230
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 230
___nl__bool__7 = ___nl__int__10;
#line 230
//clear ___nl__int__9;
#line 230
//clear ___nl__int__10;
#line 230
___nl__bool__8 = !___nl__bool__7;
#line 230
if(___nl__bool__8){ goto label_5;}
#line 230
___nl__int__12 = 1;
#line 230
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__12));
#line 230
//clear ___nl__int__12;
#line 230
c_rt_lib0move(&___nl__im__13, string_utils0is_whitespace(___nl__im__11));
#line 230
___nl__bool__7 = c_rt_lib0check_true_native(___nl__im__13);
#line 230
c_rt_lib0clear(&___nl__im__11);
#line 230
c_rt_lib0clear(&___nl__im__13);
#line 230
label_5:
;
#line 230
//clear ___nl__bool__8;
#line 230
___nl__bool__7 = !___nl__bool__7;
#line 230
if(___nl__bool__7){ goto label_3;}
#line 231
___nl__int__14 = 1;
#line 231
___nl__int__4 = ___nl__int__4 - ___nl__int__14;
#line 231
//clear ___nl__int__14;
#line 232
goto label_4;
#line 232
label_3:
;
#line 233
___nl__int__16 = 0;
#line 233
___nl__int__18 = 1;
#line 233
___nl__int__17 = ___nl__int__4 + ___nl__int__18;
#line 233
//clear ___nl__int__18;
#line 233
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__16, ___nl__int__17));
#line 233
//clear ___nl__int__16;
#line 233
//clear ___nl__int__17;
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
//clear ___nl__int__4;
#line 233
//clear ___nl__bool__7;
#line 233
return ___nl__im__15;
}

ImmT  string_utils0erase_tail_zeroes0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0erase_tail_zeroes");
ImmT  *var0 = &(_tab[0]);
return string_utils0erase_tail_zeroes(*var0);
}
ImmT  string_utils0erase_tail_zeroes(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
#line 237
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 237
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 237
c_rt_lib0clear(&___nl__im__2);
#line 237
___nl__bool__1 = !___nl__bool__1;
#line 237
if(___nl__bool__1){ goto label_2;}
#line 237
//clear ___nl__bool__1;
#line 237
return ___nl__im__0;
#line 237
goto label_1;
#line 237
label_2:
;
#line 237
label_1:
;
#line 237
//clear ___nl__bool__1;
#line 238
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 239
___nl__int__5 = c_rt_lib0array_len(___nl__im__3);
#line 239
___nl__int__6 = 1;
#line 239
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 239
//clear ___nl__int__5;
#line 239
//clear ___nl__int__6;
#line 240
label_4:
;
#line 240
___nl__int__9 = 0;
#line 240
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 240
___nl__bool__7 = ___nl__int__10;
#line 240
//clear ___nl__int__9;
#line 240
//clear ___nl__int__10;
#line 240
___nl__bool__8 = !___nl__bool__7;
#line 240
if(___nl__bool__8){ goto label_5;}
#line 240
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 240
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 240
___nl__bool__7 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 240
c_rt_lib0clear(&___nl__im__11);
#line 240
c_rt_lib0clear(&___nl__im__12);
#line 240
label_5:
;
#line 240
//clear ___nl__bool__8;
#line 240
___nl__bool__7 = !___nl__bool__7;
#line 240
if(___nl__bool__7){ goto label_3;}
#line 241
___nl__int__13 = 1;
#line 241
___nl__int__4 = ___nl__int__4 - ___nl__int__13;
#line 241
//clear ___nl__int__13;
#line 242
goto label_4;
#line 242
label_3:
;
#line 243
___nl__int__15 = 0;
#line 243
___nl__int__17 = 1;
#line 243
___nl__int__16 = ___nl__int__4 + ___nl__int__17;
#line 243
//clear ___nl__int__17;
#line 243
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__16));
#line 243
//clear ___nl__int__15;
#line 243
//clear ___nl__int__16;
#line 243
c_rt_lib0clear(&___nl__im__0);
#line 243
c_rt_lib0clear(&___nl__im__3);
#line 243
//clear ___nl__int__4;
#line 243
//clear ___nl__bool__7;
#line 243
return ___nl__im__14;
}

ImmT  string_utils0erase_leading_zeroes0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0erase_leading_zeroes");
ImmT  *var0 = &(_tab[0]);
return string_utils0erase_leading_zeroes(*var0);
}
ImmT  string_utils0erase_leading_zeroes(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
#line 247
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 247
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 247
c_rt_lib0clear(&___nl__im__2);
#line 247
___nl__bool__1 = !___nl__bool__1;
#line 247
if(___nl__bool__1){ goto label_2;}
#line 247
//clear ___nl__bool__1;
#line 247
return ___nl__im__0;
#line 247
goto label_1;
#line 247
label_2:
;
#line 247
label_1:
;
#line 247
//clear ___nl__bool__1;
#line 248
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 249
___nl__int__4 = 0;
#line 250
label_4:
;
#line 250
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 250
___nl__int__8 = ___nl__int__4 < ___nl__int__7;
#line 250
___nl__bool__5 = ___nl__int__8;
#line 250
//clear ___nl__int__7;
#line 250
//clear ___nl__int__8;
#line 250
___nl__bool__6 = !___nl__bool__5;
#line 250
if(___nl__bool__6){ goto label_5;}
#line 250
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 250
c_rt_lib0move(&___nl__im__10,___get_global_const(21));
#line 250
___nl__bool__5 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 250
c_rt_lib0clear(&___nl__im__9);
#line 250
c_rt_lib0clear(&___nl__im__10);
#line 250
label_5:
;
#line 250
//clear ___nl__bool__6;
#line 250
___nl__bool__5 = !___nl__bool__5;
#line 250
if(___nl__bool__5){ goto label_3;}
#line 251
___nl__int__11 = 1;
#line 251
___nl__int__4 = ___nl__int__4 + ___nl__int__11;
#line 251
//clear ___nl__int__11;
#line 252
goto label_4;
#line 252
label_3:
;
#line 253
___nl__int__14 = c_rt_lib0array_len(___nl__im__3);
#line 253
___nl__int__15 = ___nl__int__4 != ___nl__int__14;
#line 253
___nl__bool__13 = ___nl__int__15;
#line 253
//clear ___nl__int__14;
#line 253
//clear ___nl__int__15;
#line 253
if(___nl__bool__13){ goto label_7;}
#line 255
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 255
goto label_6;
#line 255
label_7:
;
#line 254
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__4));
#line 254
c_rt_lib0move(&___nl__im__12, string0substr2(___nl__im__0, ___nl__im__16));
#line 254
c_rt_lib0clear(&___nl__im__16);
#line 254
label_6:
;
#line 254
//clear ___nl__bool__13;
#line 254
c_rt_lib0clear(&___nl__im__0);
#line 254
c_rt_lib0clear(&___nl__im__3);
#line 254
//clear ___nl__int__4;
#line 254
//clear ___nl__bool__5;
#line 254
return ___nl__im__12;
}

ImmT  string_utils0char2hex0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0char2hex");
ImmT  *var0 = &(_tab[0]);
return string_utils0char2hex(*var0);
}
ImmT  string_utils0char2hex(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
#line 259
c_rt_lib0move(&___nl__im__2,___get_global_const(21));
#line 259
c_rt_lib0move(&___nl__im__3,___get_global_const(41));
#line 259
c_rt_lib0move(&___nl__im__4,___get_global_const(1174));
#line 259
c_rt_lib0move(&___nl__im__5,___get_global_const(1175));
#line 259
c_rt_lib0move(&___nl__im__6,___get_global_const(1176));
#line 259
c_rt_lib0move(&___nl__im__7,___get_global_const(1177));
#line 259
c_rt_lib0move(&___nl__im__8,___get_global_const(1178));
#line 259
c_rt_lib0move(&___nl__im__9,___get_global_const(1179));
#line 259
c_rt_lib0move(&___nl__im__10,___get_global_const(1180));
#line 259
c_rt_lib0move(&___nl__im__11,___get_global_const(1181));
#line 259
c_rt_lib0move(&___nl__im__12,___get_global_const(1182));
#line 259
c_rt_lib0move(&___nl__im__13,___get_global_const(1183));
#line 259
c_rt_lib0move(&___nl__im__14,___get_global_const(65));
#line 259
c_rt_lib0move(&___nl__im__15,___get_global_const(1184));
#line 259
c_rt_lib0move(&___nl__im__16,___get_global_const(1185));
#line 259
c_rt_lib0move(&___nl__im__17,___get_global_const(1186));
#line 259
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(16, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17));
#line 259
c_rt_lib0clear(&___nl__im__2);
#line 259
c_rt_lib0clear(&___nl__im__3);
#line 259
c_rt_lib0clear(&___nl__im__4);
#line 259
c_rt_lib0clear(&___nl__im__5);
#line 259
c_rt_lib0clear(&___nl__im__6);
#line 259
c_rt_lib0clear(&___nl__im__7);
#line 259
c_rt_lib0clear(&___nl__im__8);
#line 259
c_rt_lib0clear(&___nl__im__9);
#line 259
c_rt_lib0clear(&___nl__im__10);
#line 259
c_rt_lib0clear(&___nl__im__11);
#line 259
c_rt_lib0clear(&___nl__im__12);
#line 259
c_rt_lib0clear(&___nl__im__13);
#line 259
c_rt_lib0clear(&___nl__im__14);
#line 259
c_rt_lib0clear(&___nl__im__15);
#line 259
c_rt_lib0clear(&___nl__im__16);
#line 259
c_rt_lib0clear(&___nl__im__17);
#line 260
___nl__int__21 = 16;
#line 260
___nl__int__22 = getIntFromImm(___nl__im__0);
#line 260
___nl__int__20 = ___nl__int__22 / ___nl__int__21;
#line 260
//clear ___nl__int__21;
#line 260
//clear ___nl__int__22;
#line 260
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__1, ___nl__int__20));
#line 260
//clear ___nl__int__20;
#line 260
___nl__int__25 = 16;
#line 260
___nl__int__26 = getIntFromImm(___nl__im__0);
#line 260
___nl__int__24 = ___nl__int__26 % ___nl__int__25;
#line 260
//clear ___nl__int__25;
#line 260
//clear ___nl__int__26;
#line 260
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 260
//clear ___nl__int__24;
#line 260
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 260
c_rt_lib0clear(&___nl__im__19);
#line 260
c_rt_lib0clear(&___nl__im__23);
#line 260
c_rt_lib0clear(&___nl__im__0);
#line 260
c_rt_lib0clear(&___nl__im__1);
#line 260
return ___nl__im__18;
#line 260
c_rt_lib0clear(&___nl__im__0);
#line 260
c_rt_lib0clear(&___nl__im__1);
#line 260
c_rt_lib0clear(&___nl__im__18);
#line 260
return NULL;
}

ImmT  string_utils0hex2char0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0hex2char");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string_utils0hex2char(*var0, *var1);
}
ImmT  string_utils0hex2char(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_utils_priv0__const__init();
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
bool  ___nl__bool__33 = false;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
bool  ___nl__bool__43 = false;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
bool  ___nl__bool__52 = false;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
#line 264
___nl__int__2 = 0;
#line 265
___nl__int__5 = 48;
#line 265
___nl__int__6 = getIntFromImm(___nl__im__0);
#line 265
___nl__int__7 = ___nl__int__6 >= ___nl__int__5;
#line 265
___nl__bool__3 = ___nl__int__7;
#line 265
//clear ___nl__int__5;
#line 265
//clear ___nl__int__6;
#line 265
//clear ___nl__int__7;
#line 265
___nl__bool__4 = !___nl__bool__3;
#line 265
if(___nl__bool__4){ goto label_3;}
#line 265
___nl__int__8 = 57;
#line 265
___nl__int__9 = getIntFromImm(___nl__im__0);
#line 265
___nl__int__10 = ___nl__int__9 <= ___nl__int__8;
#line 265
___nl__bool__3 = ___nl__int__10;
#line 265
//clear ___nl__int__8;
#line 265
//clear ___nl__int__9;
#line 265
//clear ___nl__int__10;
#line 265
label_3:
;
#line 265
//clear ___nl__bool__4;
#line 265
___nl__bool__3 = !___nl__bool__3;
#line 265
if(___nl__bool__3){ goto label_2;}
#line 266
___nl__int__11 = getIntFromImm(___nl__im__0);
#line 266
___nl__int__2 = ___nl__int__2 + ___nl__int__11;
#line 266
//clear ___nl__int__11;
#line 267
___nl__int__12 = 48;
#line 267
___nl__int__2 = ___nl__int__2 - ___nl__int__12;
#line 267
//clear ___nl__int__12;
#line 268
goto label_1;
#line 268
label_2:
;
#line 268
___nl__int__14 = 65;
#line 268
___nl__int__15 = getIntFromImm(___nl__im__0);
#line 268
___nl__int__16 = ___nl__int__15 >= ___nl__int__14;
#line 268
___nl__bool__3 = ___nl__int__16;
#line 268
//clear ___nl__int__14;
#line 268
//clear ___nl__int__15;
#line 268
//clear ___nl__int__16;
#line 268
___nl__bool__13 = !___nl__bool__3;
#line 268
if(___nl__bool__13){ goto label_5;}
#line 268
___nl__int__17 = 70;
#line 268
___nl__int__18 = getIntFromImm(___nl__im__0);
#line 268
___nl__int__19 = ___nl__int__18 <= ___nl__int__17;
#line 268
___nl__bool__3 = ___nl__int__19;
#line 268
//clear ___nl__int__17;
#line 268
//clear ___nl__int__18;
#line 268
//clear ___nl__int__19;
#line 268
label_5:
;
#line 268
//clear ___nl__bool__13;
#line 268
___nl__bool__3 = !___nl__bool__3;
#line 268
if(___nl__bool__3){ goto label_4;}
#line 269
___nl__int__20 = getIntFromImm(___nl__im__0);
#line 269
___nl__int__2 = ___nl__int__2 + ___nl__int__20;
#line 269
//clear ___nl__int__20;
#line 270
___nl__int__21 = 55;
#line 270
___nl__int__2 = ___nl__int__2 - ___nl__int__21;
#line 270
//clear ___nl__int__21;
#line 271
goto label_1;
#line 271
label_4:
;
#line 271
___nl__int__23 = 97;
#line 271
___nl__int__24 = getIntFromImm(___nl__im__0);
#line 271
___nl__int__25 = ___nl__int__24 >= ___nl__int__23;
#line 271
___nl__bool__3 = ___nl__int__25;
#line 271
//clear ___nl__int__23;
#line 271
//clear ___nl__int__24;
#line 271
//clear ___nl__int__25;
#line 271
___nl__bool__22 = !___nl__bool__3;
#line 271
if(___nl__bool__22){ goto label_7;}
#line 271
___nl__int__26 = 102;
#line 271
___nl__int__27 = getIntFromImm(___nl__im__0);
#line 271
___nl__int__28 = ___nl__int__27 <= ___nl__int__26;
#line 271
___nl__bool__3 = ___nl__int__28;
#line 271
//clear ___nl__int__26;
#line 271
//clear ___nl__int__27;
#line 271
//clear ___nl__int__28;
#line 271
label_7:
;
#line 271
//clear ___nl__bool__22;
#line 271
___nl__bool__3 = !___nl__bool__3;
#line 271
if(___nl__bool__3){ goto label_6;}
#line 272
___nl__int__29 = getIntFromImm(___nl__im__0);
#line 272
___nl__int__2 = ___nl__int__2 + ___nl__int__29;
#line 272
//clear ___nl__int__29;
#line 273
___nl__int__30 = 87;
#line 273
___nl__int__2 = ___nl__int__2 - ___nl__int__30;
#line 273
//clear ___nl__int__30;
#line 274
goto label_1;
#line 274
label_6:
;
#line 275
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 275
nl_die_arg(___nl__im__31);
#line 276
goto label_1;
#line 276
label_1:
;
#line 276
//clear ___nl__bool__3;
#line 276
c_rt_lib0clear(&___nl__im__31);
#line 277
___nl__int__32 = 16;
#line 277
___nl__int__2 = ___nl__int__2 * ___nl__int__32;
#line 277
//clear ___nl__int__32;
#line 278
___nl__int__35 = 48;
#line 278
___nl__int__36 = getIntFromImm(___nl__im__1);
#line 278
___nl__int__37 = ___nl__int__36 >= ___nl__int__35;
#line 278
___nl__bool__33 = ___nl__int__37;
#line 278
//clear ___nl__int__35;
#line 278
//clear ___nl__int__36;
#line 278
//clear ___nl__int__37;
#line 278
___nl__bool__34 = !___nl__bool__33;
#line 278
if(___nl__bool__34){ goto label_10;}
#line 278
___nl__int__38 = 57;
#line 278
___nl__int__39 = getIntFromImm(___nl__im__1);
#line 278
___nl__int__40 = ___nl__int__39 <= ___nl__int__38;
#line 278
___nl__bool__33 = ___nl__int__40;
#line 278
//clear ___nl__int__38;
#line 278
//clear ___nl__int__39;
#line 278
//clear ___nl__int__40;
#line 278
label_10:
;
#line 278
//clear ___nl__bool__34;
#line 278
___nl__bool__33 = !___nl__bool__33;
#line 278
if(___nl__bool__33){ goto label_9;}
#line 279
___nl__int__41 = getIntFromImm(___nl__im__1);
#line 279
___nl__int__2 = ___nl__int__2 + ___nl__int__41;
#line 279
//clear ___nl__int__41;
#line 280
___nl__int__42 = 48;
#line 280
___nl__int__2 = ___nl__int__2 - ___nl__int__42;
#line 280
//clear ___nl__int__42;
#line 281
goto label_8;
#line 281
label_9:
;
#line 281
___nl__int__44 = 65;
#line 281
___nl__int__45 = getIntFromImm(___nl__im__1);
#line 281
___nl__int__46 = ___nl__int__45 >= ___nl__int__44;
#line 281
___nl__bool__33 = ___nl__int__46;
#line 281
//clear ___nl__int__44;
#line 281
//clear ___nl__int__45;
#line 281
//clear ___nl__int__46;
#line 281
___nl__bool__43 = !___nl__bool__33;
#line 281
if(___nl__bool__43){ goto label_12;}
#line 281
___nl__int__47 = 70;
#line 281
___nl__int__48 = getIntFromImm(___nl__im__1);
#line 281
___nl__int__49 = ___nl__int__48 <= ___nl__int__47;
#line 281
___nl__bool__33 = ___nl__int__49;
#line 281
//clear ___nl__int__47;
#line 281
//clear ___nl__int__48;
#line 281
//clear ___nl__int__49;
#line 281
label_12:
;
#line 281
//clear ___nl__bool__43;
#line 281
___nl__bool__33 = !___nl__bool__33;
#line 281
if(___nl__bool__33){ goto label_11;}
#line 282
___nl__int__50 = getIntFromImm(___nl__im__1);
#line 282
___nl__int__2 = ___nl__int__2 + ___nl__int__50;
#line 282
//clear ___nl__int__50;
#line 283
___nl__int__51 = 55;
#line 283
___nl__int__2 = ___nl__int__2 - ___nl__int__51;
#line 283
//clear ___nl__int__51;
#line 284
goto label_8;
#line 284
label_11:
;
#line 284
___nl__int__53 = 97;
#line 284
___nl__int__54 = getIntFromImm(___nl__im__1);
#line 284
___nl__int__55 = ___nl__int__54 >= ___nl__int__53;
#line 284
___nl__bool__33 = ___nl__int__55;
#line 284
//clear ___nl__int__53;
#line 284
//clear ___nl__int__54;
#line 284
//clear ___nl__int__55;
#line 284
___nl__bool__52 = !___nl__bool__33;
#line 284
if(___nl__bool__52){ goto label_14;}
#line 284
___nl__int__56 = 102;
#line 284
___nl__int__57 = getIntFromImm(___nl__im__1);
#line 284
___nl__int__58 = ___nl__int__57 <= ___nl__int__56;
#line 284
___nl__bool__33 = ___nl__int__58;
#line 284
//clear ___nl__int__56;
#line 284
//clear ___nl__int__57;
#line 284
//clear ___nl__int__58;
#line 284
label_14:
;
#line 284
//clear ___nl__bool__52;
#line 284
___nl__bool__33 = !___nl__bool__33;
#line 284
if(___nl__bool__33){ goto label_13;}
#line 285
___nl__int__59 = getIntFromImm(___nl__im__1);
#line 285
___nl__int__2 = ___nl__int__2 + ___nl__int__59;
#line 285
//clear ___nl__int__59;
#line 286
___nl__int__60 = 87;
#line 286
___nl__int__2 = ___nl__int__2 - ___nl__int__60;
#line 286
//clear ___nl__int__60;
#line 287
goto label_8;
#line 287
label_13:
;
#line 288
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(0));
#line 288
nl_die_arg(___nl__im__61);
#line 289
goto label_8;
#line 289
label_8:
;
#line 289
//clear ___nl__bool__33;
#line 289
c_rt_lib0clear(&___nl__im__61);
#line 290
c_rt_lib0move(&___nl__im__62, string0chr(___nl__int__2));
#line 290
c_rt_lib0clear(&___nl__im__0);
#line 290
c_rt_lib0clear(&___nl__im__1);
#line 290
//clear ___nl__int__2;
#line 290
return ___nl__im__62;
#line 290
c_rt_lib0clear(&___nl__im__0);
#line 290
c_rt_lib0clear(&___nl__im__1);
#line 290
//clear ___nl__int__2;
#line 290
c_rt_lib0clear(&___nl__im__62);
#line 290
return NULL;
}

ImmT  string_utils0int2str_leading_digits0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0int2str_leading_digits");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string_utils0int2str_leading_digits(*var0, *var1);
}
ImmT  string_utils0int2str_leading_digits(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_utils_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
#line 294
c_rt_lib0move(&___nl__im__3,___get_global_const(1187));
#line 294
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 294
c_rt_lib0clear(&___nl__im__3);
#line 295
___nl__int__6 = string0length(___nl__im__2);
#line 295
___nl__int__8 = string0length(___nl__im__0);
#line 295
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 295
c_rt_lib0move(&___nl__im__7, string_utils_priv0max(___nl__im__1, ___nl__im__9));
#line 295
//clear ___nl__int__8;
#line 295
c_rt_lib0clear(&___nl__im__9);
#line 295
___nl__int__10 = getIntFromImm(___nl__im__7);
#line 295
___nl__int__5 = ___nl__int__6 - ___nl__int__10;
#line 295
//clear ___nl__int__6;
#line 295
c_rt_lib0clear(&___nl__im__7);
#line 295
//clear ___nl__int__10;
#line 295
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__5));
#line 295
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__11));
#line 295
//clear ___nl__int__5;
#line 295
c_rt_lib0clear(&___nl__im__11);
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
c_rt_lib0clear(&___nl__im__2);
#line 295
return ___nl__im__4;
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
c_rt_lib0clear(&___nl__im__2);
#line 295
c_rt_lib0clear(&___nl__im__4);
#line 295
return NULL;
}

ImmT  string_utils_priv0max(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_utils_priv0__const__init();
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 299
___nl__int__4 = getIntFromImm(___nl__im__0);
#line 299
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 299
___nl__int__6 = ___nl__int__4 > ___nl__int__5;
#line 299
___nl__bool__3 = ___nl__int__6;
#line 299
//clear ___nl__int__4;
#line 299
//clear ___nl__int__5;
#line 299
//clear ___nl__int__6;
#line 299
if(___nl__bool__3){ goto label_2;}
#line 299
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 299
goto label_1;
#line 299
label_2:
;
#line 299
___nl__int__2 = getIntFromImm(___nl__im__0);
#line 299
label_1:
;
#line 299
//clear ___nl__bool__3;
#line 299
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
//clear ___nl__int__2;
#line 299
return ___nl__im__7;
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
//clear ___nl__int__2;
#line 299
c_rt_lib0clear(&___nl__im__7);
#line 299
return NULL;
}

ImmT  string_utils0int2str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0int2str");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string_utils0int2str(*var0, *var1);
}
ImmT  string_utils0int2str(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_utils_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
#line 303
c_rt_lib0move(&___nl__im__3,___get_global_const(1187));
#line 303
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 303
c_rt_lib0clear(&___nl__im__3);
#line 304
___nl__int__6 = string0length(___nl__im__2);
#line 304
___nl__int__7 = getIntFromImm(___nl__im__1);
#line 304
___nl__int__5 = ___nl__int__6 - ___nl__int__7;
#line 304
//clear ___nl__int__6;
#line 304
//clear ___nl__int__7;
#line 304
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__5));
#line 304
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__8));
#line 304
//clear ___nl__int__5;
#line 304
c_rt_lib0clear(&___nl__im__8);
#line 304
c_rt_lib0clear(&___nl__im__0);
#line 304
c_rt_lib0clear(&___nl__im__1);
#line 304
c_rt_lib0clear(&___nl__im__2);
#line 304
return ___nl__im__4;
#line 304
c_rt_lib0clear(&___nl__im__0);
#line 304
c_rt_lib0clear(&___nl__im__1);
#line 304
c_rt_lib0clear(&___nl__im__2);
#line 304
c_rt_lib0clear(&___nl__im__4);
#line 304
return NULL;
}

ImmT  string_utils0starts_with0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0starts_with");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string_utils0starts_with(*var0, *var1);
}
ImmT  string_utils0starts_with(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_utils_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
#line 308
___nl__int__4 = string0length(___nl__im__0);
#line 308
___nl__int__5 = string0length(___nl__im__1);
#line 308
___nl__int__6 = ___nl__int__4 >= ___nl__int__5;
#line 308
___nl__bool__2 = ___nl__int__6;
#line 308
//clear ___nl__int__4;
#line 308
//clear ___nl__int__5;
#line 308
//clear ___nl__int__6;
#line 308
___nl__bool__3 = !___nl__bool__2;
#line 308
if(___nl__bool__3){ goto label_1;}
#line 308
___nl__int__8 = 0;
#line 308
___nl__int__9 = string0length(___nl__im__1);
#line 308
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 308
//clear ___nl__int__8;
#line 308
//clear ___nl__int__9;
#line 308
___nl__bool__2 = c_rt_lib0eq(___nl__im__7, ___nl__im__1);
#line 308
c_rt_lib0clear(&___nl__im__7);
#line 308
label_1:
;
#line 308
//clear ___nl__bool__3;
#line 308
c_rt_lib0move(&___nl__im__10, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 308
c_rt_lib0clear(&___nl__im__0);
#line 308
c_rt_lib0clear(&___nl__im__1);
#line 308
//clear ___nl__bool__2;
#line 308
return ___nl__im__10;
#line 308
c_rt_lib0clear(&___nl__im__0);
#line 308
c_rt_lib0clear(&___nl__im__1);
#line 308
//clear ___nl__bool__2;
#line 308
c_rt_lib0clear(&___nl__im__10);
#line 308
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void string_utils_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT string_utils_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_utils_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
