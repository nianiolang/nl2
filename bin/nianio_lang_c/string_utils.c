
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "string_utils.h"
#include "string.h"
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
#line 10
___nl__int__3 = string0ord(___nl__im__0);
#line 10
___nl__int__4 = 47;
#line 10
___nl__int__5 = ___nl__int__3 > ___nl__int__4;
#line 10
___nl__bool__1 = ___nl__int__5;
#line 10
//clear ___nl__int__3;
#line 10
//clear ___nl__int__4;
#line 10
//clear ___nl__int__5;
#line 10
___nl__bool__2 = !___nl__bool__1;
#line 10
if(___nl__bool__2){ goto label_1;}
#line 10
___nl__int__6 = string0ord(___nl__im__0);
#line 10
___nl__int__7 = 58;
#line 10
___nl__int__8 = ___nl__int__6 < ___nl__int__7;
#line 10
___nl__bool__1 = ___nl__int__8;
#line 10
//clear ___nl__int__6;
#line 10
//clear ___nl__int__7;
#line 10
//clear ___nl__int__8;
#line 10
label_1:
;
#line 10
//clear ___nl__bool__2;
#line 10
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 10
c_rt_lib0clear(&___nl__im__0);
#line 10
//clear ___nl__bool__1;
#line 10
return ___nl__im__9;
#line 10
c_rt_lib0clear(&___nl__im__0);
#line 10
//clear ___nl__bool__1;
#line 10
c_rt_lib0clear(&___nl__im__9);
#line 10
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
#line 14
c_rt_lib0move(&___nl__im__6,___get_global_const(428));
#line 14
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 14
c_rt_lib0clear(&___nl__im__6);
#line 14
if(___nl__bool__1){ goto label_4;}
#line 14
c_rt_lib0move(&___nl__im__7, string0lf());
#line 14
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__7);
#line 14
c_rt_lib0clear(&___nl__im__7);
#line 14
label_4:
;
#line 14
//clear ___nl__bool__5;
#line 14
if(___nl__bool__1){ goto label_3;}
#line 14
c_rt_lib0move(&___nl__im__8, string0tab());
#line 14
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__8);
#line 14
c_rt_lib0clear(&___nl__im__8);
#line 14
label_3:
;
#line 14
//clear ___nl__bool__4;
#line 14
if(___nl__bool__1){ goto label_2;}
#line 14
c_rt_lib0move(&___nl__im__9, string0r());
#line 14
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__9);
#line 14
c_rt_lib0clear(&___nl__im__9);
#line 14
label_2:
;
#line 14
//clear ___nl__bool__3;
#line 14
if(___nl__bool__1){ goto label_1;}
#line 14
c_rt_lib0move(&___nl__im__10, string0f());
#line 14
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__10);
#line 14
c_rt_lib0clear(&___nl__im__10);
#line 14
label_1:
;
#line 14
//clear ___nl__bool__2;
#line 14
c_rt_lib0move(&___nl__im__11, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
//clear ___nl__bool__1;
#line 14
return ___nl__im__11;
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
//clear ___nl__bool__1;
#line 14
c_rt_lib0clear(&___nl__im__11);
#line 14
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
#line 18
___nl__int__1 = string0ord(___nl__im__0);
#line 19
___nl__int__5 = 64;
#line 19
___nl__int__6 = ___nl__int__1 > ___nl__int__5;
#line 19
___nl__bool__2 = ___nl__int__6;
#line 19
//clear ___nl__int__5;
#line 19
//clear ___nl__int__6;
#line 19
___nl__bool__4 = !___nl__bool__2;
#line 19
if(___nl__bool__4){ goto label_2;}
#line 19
___nl__int__7 = 91;
#line 19
___nl__int__8 = ___nl__int__1 < ___nl__int__7;
#line 19
___nl__bool__2 = ___nl__int__8;
#line 19
//clear ___nl__int__7;
#line 19
//clear ___nl__int__8;
#line 19
label_2:
;
#line 19
//clear ___nl__bool__4;
#line 19
if(___nl__bool__2){ goto label_1;}
#line 19
___nl__int__10 = 96;
#line 19
___nl__int__11 = ___nl__int__1 > ___nl__int__10;
#line 19
___nl__bool__2 = ___nl__int__11;
#line 19
//clear ___nl__int__10;
#line 19
//clear ___nl__int__11;
#line 19
___nl__bool__9 = !___nl__bool__2;
#line 19
if(___nl__bool__9){ goto label_3;}
#line 19
___nl__int__12 = 123;
#line 19
___nl__int__13 = ___nl__int__1 < ___nl__int__12;
#line 19
___nl__bool__2 = ___nl__int__13;
#line 19
//clear ___nl__int__12;
#line 19
//clear ___nl__int__13;
#line 19
label_3:
;
#line 19
//clear ___nl__bool__9;
#line 19
label_1:
;
#line 19
//clear ___nl__bool__3;
#line 19
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
//clear ___nl__int__1;
#line 19
//clear ___nl__bool__2;
#line 19
return ___nl__im__14;
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
//clear ___nl__int__1;
#line 19
//clear ___nl__bool__2;
#line 19
c_rt_lib0clear(&___nl__im__14);
#line 19
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
#line 23
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 23
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
if(___nl__bool__1){ goto label_3;}
#line 23
c_rt_lib0move(&___nl__im__4,___get_global_const(338));
#line 23
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 23
c_rt_lib0clear(&___nl__im__4);
#line 23
label_3:
;
#line 23
//clear ___nl__bool__2;
#line 23
___nl__bool__1 = !___nl__bool__1;
#line 23
if(___nl__bool__1){ goto label_2;}
#line 23
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 23
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__6));
#line 23
c_rt_lib0clear(&___nl__im__6);
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
//clear ___nl__bool__1;
#line 23
return ___nl__im__5;
#line 23
goto label_1;
#line 23
label_2:
;
#line 23
label_1:
;
#line 23
//clear ___nl__bool__1;
#line 23
c_rt_lib0clear(&___nl__im__5);
#line 24
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 24
c_rt_lib0move(&___nl__im__7, string0split(___nl__im__8, ___nl__im__0));
#line 24
c_rt_lib0clear(&___nl__im__8);
#line 25
___nl__int__9 = 0;
#line 26
___nl__int__10 = 1;
#line 27
___nl__int__13 = 0;
#line 27
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__7, ___nl__int__13));
#line 27
//clear ___nl__int__13;
#line 27
c_rt_lib0move(&___nl__im__14,___get_global_const(338));
#line 27
___nl__bool__11 = c_rt_lib0eq(___nl__im__12, ___nl__im__14);
#line 27
c_rt_lib0clear(&___nl__im__12);
#line 27
c_rt_lib0clear(&___nl__im__14);
#line 27
___nl__bool__11 = !___nl__bool__11;
#line 27
if(___nl__bool__11){ goto label_5;}
#line 28
___nl__int__15 = 1;
#line 28
___nl__int__17 = c_rt_lib0array_len(___nl__im__7);
#line 28
___nl__int__18 = 1;
#line 28
___nl__int__16 = ___nl__int__17 - ___nl__int__18;
#line 28
//clear ___nl__int__17;
#line 28
//clear ___nl__int__18;
#line 28
c_rt_lib0move(&___nl__im__7, array0subarray(___nl__im__7, ___nl__int__15, ___nl__int__16));
#line 28
//clear ___nl__int__15;
#line 28
//clear ___nl__int__16;
#line 29
___nl__int__10 = 1;
#line 29
___nl__int__10 = -___nl__int__10;
#line 30
goto label_4;
#line 30
label_5:
;
#line 30
label_4:
;
#line 30
//clear ___nl__bool__11;
#line 31
___nl__int__20 = 0;
#line 31
___nl__int__21 = 1;
#line 31
___nl__int__22 = c_rt_lib0array_len(___nl__im__7);
#line 31
label_8:
;
#line 31
___nl__int__24 = ___nl__int__20 >= ___nl__int__22;
#line 31
___nl__bool__23 = ___nl__int__24;
#line 31
if(___nl__bool__23){ goto label_6;}
#line 31
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__7, ___nl__int__20));
#line 31
c_rt_lib0copy(&___nl__im__19, ___nl__im__25);
#line 32
c_rt_lib0move(&___nl__im__27, string_utils0is_int(___nl__im__19));
#line 32
___nl__bool__26 = c_rt_lib0check_true_native(___nl__im__27);
#line 32
c_rt_lib0clear(&___nl__im__27);
#line 32
___nl__bool__26 = !___nl__bool__26;
#line 32
___nl__bool__26 = !___nl__bool__26;
#line 32
if(___nl__bool__26){ goto label_10;}
#line 32
c_rt_lib0move(&___nl__im__29,___get_global_const(37));
#line 32
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__29));
#line 32
c_rt_lib0clear(&___nl__im__29);
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
c_rt_lib0clear(&___nl__im__7);
#line 32
//clear ___nl__int__9;
#line 32
//clear ___nl__int__10;
#line 32
c_rt_lib0clear(&___nl__im__19);
#line 32
//clear ___nl__int__20;
#line 32
//clear ___nl__int__21;
#line 32
//clear ___nl__int__22;
#line 32
//clear ___nl__bool__23;
#line 32
//clear ___nl__int__24;
#line 32
c_rt_lib0clear(&___nl__im__25);
#line 32
//clear ___nl__bool__26;
#line 32
return ___nl__im__28;
#line 32
goto label_9;
#line 32
label_10:
;
#line 32
label_9:
;
#line 32
//clear ___nl__bool__26;
#line 32
c_rt_lib0clear(&___nl__im__28);
#line 33
___nl__int__30 = 10;
#line 33
___nl__int__9 = ___nl__int__9 * ___nl__int__30;
#line 33
//clear ___nl__int__30;
#line 34
___nl__int__32 = string0ord(___nl__im__19);
#line 34
c_rt_lib0move(&___nl__im__34,___get_global_const(21));
#line 34
___nl__int__33 = string0ord(___nl__im__34);
#line 34
c_rt_lib0clear(&___nl__im__34);
#line 34
___nl__int__31 = ___nl__int__32 - ___nl__int__33;
#line 34
//clear ___nl__int__32;
#line 34
//clear ___nl__int__33;
#line 34
___nl__int__9 = ___nl__int__9 + ___nl__int__31;
#line 34
//clear ___nl__int__31;
#line 34
c_rt_lib0clear(&___nl__im__19);
#line 34
label_7:
;
#line 35
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 35
goto label_8;
#line 35
label_6:
;
#line 36
___nl__int__36 = ___nl__int__10 * ___nl__int__9;
#line 36
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__36));
#line 36
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__37));
#line 36
//clear ___nl__int__36;
#line 36
c_rt_lib0clear(&___nl__im__37);
#line 36
c_rt_lib0clear(&___nl__im__0);
#line 36
c_rt_lib0clear(&___nl__im__7);
#line 36
//clear ___nl__int__9;
#line 36
//clear ___nl__int__10;
#line 36
c_rt_lib0clear(&___nl__im__19);
#line 36
//clear ___nl__int__20;
#line 36
//clear ___nl__int__21;
#line 36
//clear ___nl__int__22;
#line 36
//clear ___nl__bool__23;
#line 36
//clear ___nl__int__24;
#line 36
c_rt_lib0clear(&___nl__im__25);
#line 36
return ___nl__im__35;
}

bool  string_utils0is_integer0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_integer");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_integer(*var0);
}
bool  string_utils0is_integer(ImmT  ___nl__im__0) {
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
#line 40
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 40
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_add(___nl__im__0, ___nl__im__1));
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 41
___nl__bool__2 = string_utils0is_integer_possibly_leading_zeros(___nl__im__0);
#line 41
___nl__bool__2 = !___nl__bool__2;
#line 41
___nl__bool__2 = !___nl__bool__2;
#line 41
if(___nl__bool__2){ goto label_2;}
#line 41
___nl__bool__3 = false;
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
//clear ___nl__bool__2;
#line 41
return ___nl__bool__3;
#line 41
goto label_1;
#line 41
label_2:
;
#line 41
label_1:
;
#line 41
//clear ___nl__bool__2;
#line 41
//clear ___nl__bool__3;
#line 42
c_rt_lib0move(&___nl__im__5,___get_global_const(21));
#line 42
___nl__bool__4 = c_rt_lib0eq(___nl__im__0, ___nl__im__5);
#line 42
c_rt_lib0clear(&___nl__im__5);
#line 42
___nl__bool__4 = !___nl__bool__4;
#line 42
if(___nl__bool__4){ goto label_4;}
#line 42
___nl__bool__6 = true;
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
//clear ___nl__bool__4;
#line 42
return ___nl__bool__6;
#line 42
goto label_3;
#line 42
label_4:
;
#line 42
label_3:
;
#line 42
//clear ___nl__bool__4;
#line 42
//clear ___nl__bool__6;
#line 43
___nl__int__7 = 0;
#line 44
___nl__int__10 = 1;
#line 44
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__10));
#line 44
//clear ___nl__int__10;
#line 44
c_rt_lib0move(&___nl__im__11,___get_global_const(338));
#line 44
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 44
c_rt_lib0clear(&___nl__im__9);
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
___nl__bool__8 = !___nl__bool__8;
#line 44
if(___nl__bool__8){ goto label_6;}
#line 44
___nl__int__12 = 1;
#line 44
___nl__int__7 = ___nl__int__7 + ___nl__int__12;
#line 44
//clear ___nl__int__12;
#line 44
goto label_5;
#line 44
label_6:
;
#line 44
label_5:
;
#line 44
//clear ___nl__bool__8;
#line 45
___nl__int__15 = 1;
#line 45
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__15));
#line 45
//clear ___nl__int__15;
#line 45
c_rt_lib0move(&___nl__im__16,___get_global_const(21));
#line 45
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__16);
#line 45
c_rt_lib0clear(&___nl__im__14);
#line 45
c_rt_lib0clear(&___nl__im__16);
#line 45
___nl__bool__13 = !___nl__bool__13;
#line 45
if(___nl__bool__13){ goto label_8;}
#line 45
___nl__bool__17 = false;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
//clear ___nl__int__7;
#line 45
//clear ___nl__bool__13;
#line 45
return ___nl__bool__17;
#line 45
goto label_7;
#line 45
label_8:
;
#line 45
label_7:
;
#line 45
//clear ___nl__bool__13;
#line 45
//clear ___nl__bool__17;
#line 46
___nl__bool__18 = true;
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
//clear ___nl__int__7;
#line 46
return ___nl__bool__18;
}

bool  string_utils0is_integer_possibly_leading_zeros0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_integer_possibly_leading_zeros");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_integer_possibly_leading_zeros(*var0);
}
bool  string_utils0is_integer_possibly_leading_zeros(ImmT  ___nl__im__0) {
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
#line 50
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 50
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 50
c_rt_lib0clear(&___nl__im__2);
#line 51
___nl__int__3 = string0length(___nl__im__1);
#line 52
___nl__int__4 = 0;
#line 53
___nl__int__7 = 1;
#line 53
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__7));
#line 53
//clear ___nl__int__7;
#line 53
c_rt_lib0move(&___nl__im__8,___get_global_const(338));
#line 53
___nl__bool__5 = c_rt_lib0eq(___nl__im__6, ___nl__im__8);
#line 53
c_rt_lib0clear(&___nl__im__6);
#line 53
c_rt_lib0clear(&___nl__im__8);
#line 53
___nl__bool__5 = !___nl__bool__5;
#line 53
if(___nl__bool__5){ goto label_2;}
#line 53
___nl__int__9 = 1;
#line 53
___nl__int__4 = ___nl__int__4 + ___nl__int__9;
#line 53
//clear ___nl__int__9;
#line 53
goto label_1;
#line 53
label_2:
;
#line 53
label_1:
;
#line 53
//clear ___nl__bool__5;
#line 54
___nl__int__11 = ___nl__int__4 == ___nl__int__3;
#line 54
___nl__bool__10 = ___nl__int__11;
#line 54
//clear ___nl__int__11;
#line 54
___nl__bool__10 = !___nl__bool__10;
#line 54
if(___nl__bool__10){ goto label_4;}
#line 54
___nl__bool__12 = false;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
//clear ___nl__int__3;
#line 54
//clear ___nl__int__4;
#line 54
//clear ___nl__bool__10;
#line 54
return ___nl__bool__12;
#line 54
goto label_3;
#line 54
label_4:
;
#line 54
label_3:
;
#line 54
//clear ___nl__bool__10;
#line 54
//clear ___nl__bool__12;
#line 55
label_6:
;
#line 55
___nl__int__14 = ___nl__int__4 < ___nl__int__3;
#line 55
___nl__bool__13 = ___nl__int__14;
#line 55
//clear ___nl__int__14;
#line 55
___nl__bool__13 = !___nl__bool__13;
#line 55
if(___nl__bool__13){ goto label_5;}
#line 56
___nl__int__17 = 1;
#line 56
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__17));
#line 56
//clear ___nl__int__17;
#line 56
___nl__bool__15 = string0is_digit(___nl__im__16);
#line 56
c_rt_lib0clear(&___nl__im__16);
#line 56
___nl__bool__15 = !___nl__bool__15;
#line 56
___nl__bool__15 = !___nl__bool__15;
#line 56
if(___nl__bool__15){ goto label_9;}
#line 56
___nl__bool__18 = false;
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
//clear ___nl__int__3;
#line 56
//clear ___nl__int__4;
#line 56
//clear ___nl__bool__13;
#line 56
//clear ___nl__bool__15;
#line 56
return ___nl__bool__18;
#line 56
goto label_8;
#line 56
label_9:
;
#line 56
label_8:
;
#line 56
//clear ___nl__bool__15;
#line 56
//clear ___nl__bool__18;
#line 56
label_7:
;
#line 55
___nl__int__19 = 1;
#line 55
___nl__int__4 = ___nl__int__4 + ___nl__int__19;
#line 55
//clear ___nl__int__19;
#line 57
goto label_6;
#line 57
label_5:
;
#line 58
___nl__bool__20 = true;
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
//clear ___nl__int__3;
#line 58
//clear ___nl__int__4;
#line 58
//clear ___nl__bool__13;
#line 58
return ___nl__bool__20;
}

bool  string_utils0is_float0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_float");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_float(*var0);
}
bool  string_utils0is_float(ImmT  ___nl__im__0) {
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
#line 62
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 62
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 62
c_rt_lib0clear(&___nl__im__2);
#line 63
___nl__int__3 = string0length(___nl__im__1);
#line 64
___nl__int__5 = 3;
#line 64
___nl__int__6 = ___nl__int__3 < ___nl__int__5;
#line 64
___nl__bool__4 = ___nl__int__6;
#line 64
//clear ___nl__int__5;
#line 64
//clear ___nl__int__6;
#line 64
___nl__bool__4 = !___nl__bool__4;
#line 64
if(___nl__bool__4){ goto label_2;}
#line 64
___nl__bool__7 = false;
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
//clear ___nl__int__3;
#line 64
//clear ___nl__bool__4;
#line 64
return ___nl__bool__7;
#line 64
goto label_1;
#line 64
label_2:
;
#line 64
label_1:
;
#line 64
//clear ___nl__bool__4;
#line 64
//clear ___nl__bool__7;
#line 65
___nl__int__8 = 0;
#line 66
___nl__int__11 = 1;
#line 66
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__11));
#line 66
//clear ___nl__int__11;
#line 66
c_rt_lib0move(&___nl__im__12,___get_global_const(338));
#line 66
___nl__bool__9 = c_rt_lib0eq(___nl__im__10, ___nl__im__12);
#line 66
c_rt_lib0clear(&___nl__im__10);
#line 66
c_rt_lib0clear(&___nl__im__12);
#line 66
___nl__bool__9 = !___nl__bool__9;
#line 66
if(___nl__bool__9){ goto label_4;}
#line 66
___nl__int__13 = 1;
#line 66
___nl__int__8 = ___nl__int__8 + ___nl__int__13;
#line 66
//clear ___nl__int__13;
#line 66
goto label_3;
#line 66
label_4:
;
#line 66
label_3:
;
#line 66
//clear ___nl__bool__9;
#line 67
___nl__int__8 = ___nl__int__8;
#line 67
label_6:
;
#line 67
___nl__int__15 = ___nl__int__8 < ___nl__int__3;
#line 67
___nl__bool__14 = ___nl__int__15;
#line 67
//clear ___nl__int__15;
#line 67
___nl__bool__14 = !___nl__bool__14;
#line 67
if(___nl__bool__14){ goto label_5;}
#line 68
___nl__int__18 = 1;
#line 68
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__18));
#line 68
//clear ___nl__int__18;
#line 68
___nl__bool__16 = string0is_digit(___nl__im__17);
#line 68
c_rt_lib0clear(&___nl__im__17);
#line 68
___nl__bool__16 = !___nl__bool__16;
#line 68
___nl__bool__16 = !___nl__bool__16;
#line 68
if(___nl__bool__16){ goto label_9;}
#line 68
goto label_5;
#line 68
goto label_8;
#line 68
label_9:
;
#line 68
label_8:
;
#line 68
//clear ___nl__bool__16;
#line 68
label_7:
;
#line 67
___nl__int__19 = 1;
#line 67
___nl__int__8 = ___nl__int__8 + ___nl__int__19;
#line 67
//clear ___nl__int__19;
#line 69
goto label_6;
#line 69
label_5:
;
#line 70
___nl__int__22 = 1;
#line 70
___nl__int__23 = ___nl__int__8 < ___nl__int__22;
#line 70
___nl__bool__20 = ___nl__int__23;
#line 70
//clear ___nl__int__22;
#line 70
//clear ___nl__int__23;
#line 70
if(___nl__bool__20){ goto label_12;}
#line 70
___nl__int__25 = 2;
#line 70
___nl__int__24 = ___nl__int__8 + ___nl__int__25;
#line 70
//clear ___nl__int__25;
#line 70
___nl__int__26 = ___nl__int__24 > ___nl__int__3;
#line 70
___nl__bool__20 = ___nl__int__26;
#line 70
//clear ___nl__int__24;
#line 70
//clear ___nl__int__26;
#line 70
label_12:
;
#line 70
//clear ___nl__bool__21;
#line 70
___nl__bool__20 = !___nl__bool__20;
#line 70
if(___nl__bool__20){ goto label_11;}
#line 70
___nl__bool__27 = false;
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
//clear ___nl__int__3;
#line 70
//clear ___nl__int__8;
#line 70
//clear ___nl__bool__14;
#line 70
//clear ___nl__bool__20;
#line 70
return ___nl__bool__27;
#line 70
goto label_10;
#line 70
label_11:
;
#line 70
label_10:
;
#line 70
//clear ___nl__bool__20;
#line 70
//clear ___nl__bool__27;
#line 71
___nl__int__30 = 1;
#line 71
c_rt_lib0move(&___nl__im__29, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__30));
#line 71
//clear ___nl__int__30;
#line 71
c_rt_lib0move(&___nl__im__31,___get_global_const(112));
#line 71
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__31);
#line 71
c_rt_lib0clear(&___nl__im__29);
#line 71
c_rt_lib0clear(&___nl__im__31);
#line 71
___nl__bool__28 = !___nl__bool__28;
#line 71
___nl__bool__28 = !___nl__bool__28;
#line 71
if(___nl__bool__28){ goto label_14;}
#line 71
___nl__bool__32 = false;
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
//clear ___nl__bool__28;
#line 71
return ___nl__bool__32;
#line 71
goto label_13;
#line 71
label_14:
;
#line 71
label_13:
;
#line 71
//clear ___nl__bool__28;
#line 71
//clear ___nl__bool__32;
#line 72
___nl__int__33 = 1;
#line 72
___nl__int__8 = ___nl__int__8 + ___nl__int__33;
#line 72
//clear ___nl__int__33;
#line 72
label_16:
;
#line 72
___nl__int__35 = ___nl__int__8 < ___nl__int__3;
#line 72
___nl__bool__34 = ___nl__int__35;
#line 72
//clear ___nl__int__35;
#line 72
___nl__bool__34 = !___nl__bool__34;
#line 72
if(___nl__bool__34){ goto label_15;}
#line 73
___nl__int__38 = 1;
#line 73
c_rt_lib0move(&___nl__im__37, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__38));
#line 73
//clear ___nl__int__38;
#line 73
___nl__bool__36 = string0is_digit(___nl__im__37);
#line 73
c_rt_lib0clear(&___nl__im__37);
#line 73
___nl__bool__36 = !___nl__bool__36;
#line 73
___nl__bool__36 = !___nl__bool__36;
#line 73
if(___nl__bool__36){ goto label_19;}
#line 73
___nl__bool__39 = false;
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
//clear ___nl__int__3;
#line 73
//clear ___nl__int__8;
#line 73
//clear ___nl__bool__14;
#line 73
//clear ___nl__bool__34;
#line 73
//clear ___nl__bool__36;
#line 73
return ___nl__bool__39;
#line 73
goto label_18;
#line 73
label_19:
;
#line 73
label_18:
;
#line 73
//clear ___nl__bool__36;
#line 73
//clear ___nl__bool__39;
#line 73
label_17:
;
#line 72
___nl__int__40 = 1;
#line 72
___nl__int__8 = ___nl__int__8 + ___nl__int__40;
#line 72
//clear ___nl__int__40;
#line 74
goto label_16;
#line 74
label_15:
;
#line 75
___nl__bool__41 = true;
#line 75
c_rt_lib0clear(&___nl__im__0);
#line 75
c_rt_lib0clear(&___nl__im__1);
#line 75
//clear ___nl__int__3;
#line 75
//clear ___nl__int__8;
#line 75
//clear ___nl__bool__14;
#line 75
//clear ___nl__bool__34;
#line 75
return ___nl__bool__41;
}

bool  string_utils0is_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_number");
ImmT  *var0 = &(_tab[0]);
return string_utils0is_number(*var0);
}
bool  string_utils0is_number(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
#line 79
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 79
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 80
___nl__bool__3 = string_utils0is_integer(___nl__im__1);
#line 80
if(___nl__bool__3){ goto label_1;}
#line 80
___nl__bool__3 = string_utils0is_float(___nl__im__1);
#line 80
label_1:
;
#line 80
//clear ___nl__bool__4;
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
c_rt_lib0clear(&___nl__im__1);
#line 80
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
#line 84
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 84
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
if(___nl__bool__1){ goto label_3;}
#line 84
c_rt_lib0move(&___nl__im__4,___get_global_const(338));
#line 84
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
label_3:
;
#line 84
//clear ___nl__bool__2;
#line 84
___nl__bool__1 = !___nl__bool__1;
#line 84
if(___nl__bool__1){ goto label_2;}
#line 84
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
//clear ___nl__bool__1;
#line 84
return ___nl__im__5;
#line 84
goto label_1;
#line 84
label_2:
;
#line 84
label_1:
;
#line 84
//clear ___nl__bool__1;
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 85
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 85
c_rt_lib0move(&___nl__im__6, string0split(___nl__im__7, ___nl__im__0));
#line 85
c_rt_lib0clear(&___nl__im__7);
#line 86
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 87
___nl__int__11 = 0;
#line 87
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__6, ___nl__int__11));
#line 87
//clear ___nl__int__11;
#line 87
c_rt_lib0move(&___nl__im__12,___get_global_const(338));
#line 87
___nl__bool__9 = c_rt_lib0eq(___nl__im__10, ___nl__im__12);
#line 87
c_rt_lib0clear(&___nl__im__10);
#line 87
c_rt_lib0clear(&___nl__im__12);
#line 87
___nl__bool__9 = !___nl__bool__9;
#line 87
if(___nl__bool__9){ goto label_5;}
#line 88
___nl__int__13 = 1;
#line 88
___nl__int__15 = c_rt_lib0array_len(___nl__im__6);
#line 88
___nl__int__16 = 1;
#line 88
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 88
//clear ___nl__int__15;
#line 88
//clear ___nl__int__16;
#line 88
c_rt_lib0move(&___nl__im__6, array0subarray(___nl__im__6, ___nl__int__13, ___nl__int__14));
#line 88
//clear ___nl__int__13;
#line 88
//clear ___nl__int__14;
#line 89
___nl__int__19 = 0;
#line 89
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 89
//clear ___nl__int__19;
#line 89
c_rt_lib0move(&___nl__im__20, string_utils0is_int(___nl__im__18));
#line 89
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__20);
#line 89
c_rt_lib0clear(&___nl__im__18);
#line 89
c_rt_lib0clear(&___nl__im__20);
#line 89
___nl__bool__17 = !___nl__bool__17;
#line 89
___nl__bool__17 = !___nl__bool__17;
#line 89
if(___nl__bool__17){ goto label_7;}
#line 89
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 89
c_rt_lib0clear(&___nl__im__0);
#line 89
c_rt_lib0clear(&___nl__im__6);
#line 89
c_rt_lib0clear(&___nl__im__8);
#line 89
//clear ___nl__bool__9;
#line 89
//clear ___nl__bool__17;
#line 89
return ___nl__im__21;
#line 89
goto label_6;
#line 89
label_7:
;
#line 89
label_6:
;
#line 89
//clear ___nl__bool__17;
#line 89
c_rt_lib0clear(&___nl__im__21);
#line 90
c_rt_lib0move(&___nl__im__8,___get_global_const(338));
#line 91
goto label_4;
#line 91
label_5:
;
#line 91
label_4:
;
#line 91
//clear ___nl__bool__9;
#line 92
___nl__bool__22 = false;
#line 93
___nl__int__24 = 0;
#line 93
___nl__int__25 = 1;
#line 93
___nl__int__26 = c_rt_lib0array_len(___nl__im__6);
#line 93
label_10:
;
#line 93
___nl__int__28 = ___nl__int__24 >= ___nl__int__26;
#line 93
___nl__bool__27 = ___nl__int__28;
#line 93
if(___nl__bool__27){ goto label_8;}
#line 93
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__6, ___nl__int__24));
#line 93
c_rt_lib0copy(&___nl__im__23, ___nl__im__29);
#line 94
c_rt_lib0move(&___nl__im__31, string_utils0is_int(___nl__im__23));
#line 94
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__31);
#line 94
c_rt_lib0clear(&___nl__im__31);
#line 94
___nl__bool__30 = !___nl__bool__30;
#line 94
___nl__bool__30 = !___nl__bool__30;
#line 94
if(___nl__bool__30){ goto label_12;}
#line 95
c_rt_lib0move(&___nl__im__34,___get_global_const(112));
#line 95
___nl__bool__32 = c_rt_lib0eq(___nl__im__23, ___nl__im__34);
#line 95
c_rt_lib0clear(&___nl__im__34);
#line 95
___nl__bool__33 = !___nl__bool__32;
#line 95
if(___nl__bool__33){ goto label_15;}
#line 95
___nl__bool__32 = ___nl__bool__22;
#line 95
___nl__bool__32 = !___nl__bool__32;
#line 95
label_15:
;
#line 95
//clear ___nl__bool__33;
#line 95
___nl__bool__32 = !___nl__bool__32;
#line 95
if(___nl__bool__32){ goto label_14;}
#line 96
___nl__bool__22 = true;
#line 97
goto label_13;
#line 97
label_14:
;
#line 98
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
c_rt_lib0clear(&___nl__im__6);
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 98
//clear ___nl__bool__22;
#line 98
c_rt_lib0clear(&___nl__im__23);
#line 98
//clear ___nl__int__24;
#line 98
//clear ___nl__int__25;
#line 98
//clear ___nl__int__26;
#line 98
//clear ___nl__bool__27;
#line 98
//clear ___nl__int__28;
#line 98
c_rt_lib0clear(&___nl__im__29);
#line 98
//clear ___nl__bool__30;
#line 98
//clear ___nl__bool__32;
#line 98
return ___nl__im__35;
#line 99
goto label_13;
#line 99
label_13:
;
#line 99
//clear ___nl__bool__32;
#line 99
c_rt_lib0clear(&___nl__im__35);
#line 100
goto label_11;
#line 100
label_12:
;
#line 100
label_11:
;
#line 100
//clear ___nl__bool__30;
#line 101
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_add(___nl__im__8, ___nl__im__23));
#line 101
c_rt_lib0clear(&___nl__im__23);
#line 101
label_9:
;
#line 102
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 102
goto label_10;
#line 102
label_8:
;
#line 103
c_rt_lib0move(&___nl__im__37,___get_global_const(112));
#line 103
___nl__bool__36 = c_rt_lib0eq(___nl__im__8, ___nl__im__37);
#line 103
c_rt_lib0clear(&___nl__im__37);
#line 103
___nl__bool__36 = !___nl__bool__36;
#line 103
if(___nl__bool__36){ goto label_17;}
#line 103
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
c_rt_lib0clear(&___nl__im__6);
#line 103
c_rt_lib0clear(&___nl__im__8);
#line 103
//clear ___nl__bool__22;
#line 103
c_rt_lib0clear(&___nl__im__23);
#line 103
//clear ___nl__int__24;
#line 103
//clear ___nl__int__25;
#line 103
//clear ___nl__int__26;
#line 103
//clear ___nl__bool__27;
#line 103
//clear ___nl__int__28;
#line 103
c_rt_lib0clear(&___nl__im__29);
#line 103
//clear ___nl__bool__36;
#line 103
return ___nl__im__38;
#line 103
goto label_16;
#line 103
label_17:
;
#line 103
label_16:
;
#line 103
//clear ___nl__bool__36;
#line 103
c_rt_lib0clear(&___nl__im__38);
#line 104
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__8));
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
return ___nl__im__39;
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
c_rt_lib0clear(&___nl__im__39);
#line 104
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
#line 108
label_2:
;
#line 108
___nl__int__4 = c_rt_lib0array_len(___nl__im__0);
#line 108
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 108
___nl__int__6 = ___nl__int__5 < ___nl__int__4;
#line 108
___nl__bool__2 = ___nl__int__6;
#line 108
//clear ___nl__int__4;
#line 108
//clear ___nl__int__5;
#line 108
//clear ___nl__int__6;
#line 108
___nl__bool__3 = !___nl__bool__2;
#line 108
if(___nl__bool__3){ goto label_3;}
#line 108
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 108
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 108
//clear ___nl__int__8;
#line 108
c_rt_lib0move(&___nl__im__9, string_utils0is_whitespace(___nl__im__7));
#line 108
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__9);
#line 108
c_rt_lib0clear(&___nl__im__7);
#line 108
c_rt_lib0clear(&___nl__im__9);
#line 108
label_3:
;
#line 108
//clear ___nl__bool__3;
#line 108
___nl__bool__2 = !___nl__bool__2;
#line 108
if(___nl__bool__2){ goto label_1;}
#line 108
___nl__int__10 = 1;
#line 108
___nl__int__11 = getIntFromImm((*___ref___im__1));
#line 108
___nl__int__12 = ___nl__int__11 + ___nl__int__10;
#line 108
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__12));
#line 108
//clear ___nl__int__10;
#line 108
//clear ___nl__int__11;
#line 108
//clear ___nl__int__12;
#line 108
goto label_2;
#line 108
label_1:
;
#line 109
___nl__int__14 = c_rt_lib0array_len(___nl__im__0);
#line 109
___nl__int__15 = getIntFromImm((*___ref___im__1));
#line 109
___nl__int__16 = ___nl__int__15 == ___nl__int__14;
#line 109
___nl__bool__13 = ___nl__int__16;
#line 109
//clear ___nl__int__14;
#line 109
//clear ___nl__int__15;
#line 109
//clear ___nl__int__16;
#line 109
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
//clear ___nl__bool__2;
#line 109
//clear ___nl__bool__13;
#line 109
return ___nl__im__17;
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
//clear ___nl__bool__2;
#line 109
//clear ___nl__bool__13;
#line 109
c_rt_lib0clear(&___nl__im__17);
#line 109
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
#line 113
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 114
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 114
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 114
//clear ___nl__int__5;
#line 114
c_rt_lib0move(&___nl__im__6,___get_global_const(338));
#line 114
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__6);
#line 114
c_rt_lib0clear(&___nl__im__4);
#line 114
c_rt_lib0clear(&___nl__im__6);
#line 114
___nl__bool__3 = !___nl__bool__3;
#line 114
if(___nl__bool__3){ goto label_2;}
#line 115
___nl__int__7 = 1;
#line 115
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 115
___nl__int__9 = ___nl__int__8 + ___nl__int__7;
#line 115
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__9));
#line 115
//clear ___nl__int__7;
#line 115
//clear ___nl__int__8;
#line 115
//clear ___nl__int__9;
#line 116
c_rt_lib0move(&___nl__im__2,___get_global_const(338));
#line 117
goto label_1;
#line 117
label_2:
;
#line 117
label_1:
;
#line 117
//clear ___nl__bool__3;
#line 118
___nl__bool__10 = false;
#line 119
label_4:
;
#line 119
___nl__int__12 = c_rt_lib0array_len(___nl__im__0);
#line 119
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 119
___nl__int__14 = ___nl__int__13 < ___nl__int__12;
#line 119
___nl__bool__11 = ___nl__int__14;
#line 119
//clear ___nl__int__12;
#line 119
//clear ___nl__int__13;
#line 119
//clear ___nl__int__14;
#line 119
___nl__bool__11 = !___nl__bool__11;
#line 119
if(___nl__bool__11){ goto label_3;}
#line 120
___nl__int__16 = getIntFromImm((*___ref___im__1));
#line 120
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 120
//clear ___nl__int__16;
#line 121
c_rt_lib0move(&___nl__im__18, string_utils0is_int(___nl__im__15));
#line 121
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 121
c_rt_lib0clear(&___nl__im__18);
#line 121
___nl__bool__17 = !___nl__bool__17;
#line 121
___nl__bool__17 = !___nl__bool__17;
#line 121
if(___nl__bool__17){ goto label_6;}
#line 122
c_rt_lib0move(&___nl__im__21,___get_global_const(112));
#line 122
___nl__bool__19 = c_rt_lib0ne(___nl__im__15, ___nl__im__21);
#line 122
c_rt_lib0clear(&___nl__im__21);
#line 122
if(___nl__bool__19){ goto label_9;}
#line 122
___nl__bool__19 = ___nl__bool__10;
#line 122
label_9:
;
#line 122
//clear ___nl__bool__20;
#line 122
___nl__bool__19 = !___nl__bool__19;
#line 122
if(___nl__bool__19){ goto label_8;}
#line 122
goto label_3;
#line 122
goto label_7;
#line 122
label_8:
;
#line 122
label_7:
;
#line 122
//clear ___nl__bool__19;
#line 123
___nl__bool__10 = true;
#line 124
goto label_5;
#line 124
label_6:
;
#line 124
label_5:
;
#line 124
//clear ___nl__bool__17;
#line 125
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 126
___nl__int__22 = 1;
#line 126
___nl__int__23 = getIntFromImm((*___ref___im__1));
#line 126
___nl__int__24 = ___nl__int__23 + ___nl__int__22;
#line 126
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__24));
#line 126
//clear ___nl__int__22;
#line 126
//clear ___nl__int__23;
#line 126
//clear ___nl__int__24;
#line 126
c_rt_lib0clear(&___nl__im__15);
#line 127
goto label_4;
#line 127
label_3:
;
#line 128
c_rt_lib0move(&___nl__im__27,___get_global_const(37));
#line 128
___nl__bool__25 = c_rt_lib0eq(___nl__im__2, ___nl__im__27);
#line 128
c_rt_lib0clear(&___nl__im__27);
#line 128
if(___nl__bool__25){ goto label_12;}
#line 128
c_rt_lib0move(&___nl__im__28,___get_global_const(338));
#line 128
___nl__bool__25 = c_rt_lib0eq(___nl__im__2, ___nl__im__28);
#line 128
c_rt_lib0clear(&___nl__im__28);
#line 128
label_12:
;
#line 128
//clear ___nl__bool__26;
#line 128
___nl__bool__25 = !___nl__bool__25;
#line 128
if(___nl__bool__25){ goto label_11;}
#line 128
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 128
c_rt_lib0clear(&___nl__im__0);
#line 128
c_rt_lib0clear(&___nl__im__2);
#line 128
//clear ___nl__bool__10;
#line 128
//clear ___nl__bool__11;
#line 128
c_rt_lib0clear(&___nl__im__15);
#line 128
//clear ___nl__bool__25;
#line 128
return ___nl__im__29;
#line 128
goto label_10;
#line 128
label_11:
;
#line 128
label_10:
;
#line 128
//clear ___nl__bool__25;
#line 128
c_rt_lib0clear(&___nl__im__29);
#line 129
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__2));
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
return ___nl__im__30;
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
c_rt_lib0clear(&___nl__im__30);
#line 129
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
#line 133
c_rt_lib0move(&___nl__im__4, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 133
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
___nl__bool__3 = !___nl__bool__3;
#line 133
if(___nl__bool__3){ goto label_2;}
#line 133
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
//clear ___nl__bool__3;
#line 133
return ___nl__im__5;
#line 133
goto label_1;
#line 133
label_2:
;
#line 133
label_1:
;
#line 133
//clear ___nl__bool__3;
#line 133
c_rt_lib0clear(&___nl__im__5);
#line 135
___nl__int__9 = getIntFromImm((*___ref___im__1));
#line 135
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 135
//clear ___nl__int__9;
#line 135
c_rt_lib0move(&___nl__im__10,___get_global_const(419));
#line 135
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__10);
#line 135
c_rt_lib0clear(&___nl__im__8);
#line 135
c_rt_lib0clear(&___nl__im__10);
#line 135
___nl__bool__7 = !___nl__bool__7;
#line 135
if(___nl__bool__7){ goto label_4;}
#line 136
___nl__int__11 = 1;
#line 136
___nl__int__12 = getIntFromImm((*___ref___im__1));
#line 136
___nl__int__13 = ___nl__int__12 + ___nl__int__11;
#line 136
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__13));
#line 136
//clear ___nl__int__11;
#line 136
//clear ___nl__int__12;
#line 136
//clear ___nl__int__13;
#line 137
___nl__int__16 = 0;
#line 137
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__16));
#line 137
c_rt_lib0move(&___nl__im__15, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__17));
#line 137
//clear ___nl__int__16;
#line 137
c_rt_lib0clear(&___nl__im__17);
#line 137
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(80));
#line 137
if(___nl__bool__14){ goto label_5;}
#line 137
c_rt_lib0clear(&___nl__im__0);
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
//clear ___nl__bool__7;
#line 137
//clear ___nl__bool__14;
#line 137
return ___nl__im__15;
#line 137
label_5:
;
#line 137
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(80)));
#line 138
c_rt_lib0move(&___nl__im__19, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 138
___nl__bool__18 = c_rt_lib0check_true_native(___nl__im__19);
#line 138
c_rt_lib0clear(&___nl__im__19);
#line 138
___nl__bool__18 = !___nl__bool__18;
#line 138
if(___nl__bool__18){ goto label_7;}
#line 138
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(79)));
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
c_rt_lib0clear(&___nl__im__15);
#line 138
//clear ___nl__bool__18;
#line 138
return ___nl__im__20;
#line 138
goto label_6;
#line 138
label_7:
;
#line 138
label_6:
;
#line 138
//clear ___nl__bool__18;
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 139
___nl__int__23 = getIntFromImm((*___ref___im__1));
#line 139
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__0, ___nl__int__23));
#line 139
//clear ___nl__int__23;
#line 139
c_rt_lib0move(&___nl__im__24,___get_global_const(298));
#line 139
___nl__bool__21 = c_rt_lib0eq(___nl__im__22, ___nl__im__24);
#line 139
c_rt_lib0clear(&___nl__im__22);
#line 139
c_rt_lib0clear(&___nl__im__24);
#line 139
___nl__bool__21 = !___nl__bool__21;
#line 139
___nl__bool__21 = !___nl__bool__21;
#line 139
if(___nl__bool__21){ goto label_9;}
#line 139
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_none(___get_global_const(79)));
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
//clear ___nl__bool__21;
#line 139
return ___nl__im__25;
#line 139
goto label_8;
#line 139
label_9:
;
#line 139
label_8:
;
#line 139
//clear ___nl__bool__21;
#line 139
c_rt_lib0clear(&___nl__im__25);
#line 140
___nl__int__26 = 1;
#line 140
___nl__int__27 = getIntFromImm((*___ref___im__1));
#line 140
___nl__int__28 = ___nl__int__27 + ___nl__int__26;
#line 140
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__28));
#line 140
//clear ___nl__int__26;
#line 140
//clear ___nl__int__27;
#line 140
//clear ___nl__int__28;
#line 141
goto label_3;
#line 141
label_4:
;
#line 142
c_rt_lib0move(&___nl__im__30, string_utils_priv0get_number(___nl__im__0, ___ref___im__1));
#line 142
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_const(80));
#line 142
if(___nl__bool__29){ goto label_10;}
#line 142
c_rt_lib0clear(&___nl__im__0);
#line 142
c_rt_lib0clear(&___nl__im__2);
#line 142
c_rt_lib0clear(&___nl__im__6);
#line 142
//clear ___nl__bool__7;
#line 142
//clear ___nl__bool__14;
#line 142
c_rt_lib0clear(&___nl__im__15);
#line 142
//clear ___nl__bool__29;
#line 142
return ___nl__im__30;
#line 142
label_10:
;
#line 142
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(80)));
#line 143
goto label_3;
#line 143
label_3:
;
#line 143
//clear ___nl__bool__7;
#line 143
//clear ___nl__bool__14;
#line 143
c_rt_lib0clear(&___nl__im__15);
#line 143
//clear ___nl__bool__29;
#line 143
c_rt_lib0clear(&___nl__im__30);
#line 144
label_12:
;
#line 145
c_rt_lib0move(&___nl__im__32, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 145
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__32);
#line 145
c_rt_lib0clear(&___nl__im__32);
#line 145
___nl__bool__31 = !___nl__bool__31;
#line 145
if(___nl__bool__31){ goto label_14;}
#line 145
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 145
c_rt_lib0clear(&___nl__im__6);
#line 145
//clear ___nl__bool__31;
#line 145
return ___nl__im__33;
#line 145
goto label_13;
#line 145
label_14:
;
#line 145
label_13:
;
#line 145
//clear ___nl__bool__31;
#line 145
c_rt_lib0clear(&___nl__im__33);
#line 146
___nl__int__35 = getIntFromImm((*___ref___im__1));
#line 146
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__0, ___nl__int__35));
#line 146
//clear ___nl__int__35;
#line 147
c_rt_lib0move(&___nl__im__37,___get_global_const(346));
#line 147
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__37);
#line 147
c_rt_lib0clear(&___nl__im__37);
#line 147
___nl__bool__36 = !___nl__bool__36;
#line 147
if(___nl__bool__36){ goto label_16;}
#line 148
___nl__int__39 = 5;
#line 148
___nl__int__40 = getIntFromImm(___nl__im__2);
#line 148
___nl__int__41 = ___nl__int__40 >= ___nl__int__39;
#line 148
___nl__bool__38 = ___nl__int__41;
#line 148
//clear ___nl__int__39;
#line 148
//clear ___nl__int__40;
#line 148
//clear ___nl__int__41;
#line 148
___nl__bool__38 = !___nl__bool__38;
#line 148
if(___nl__bool__38){ goto label_18;}
#line 148
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
c_rt_lib0clear(&___nl__im__6);
#line 148
c_rt_lib0clear(&___nl__im__34);
#line 148
//clear ___nl__bool__36;
#line 148
//clear ___nl__bool__38;
#line 148
return ___nl__im__42;
#line 148
goto label_17;
#line 148
label_18:
;
#line 148
label_17:
;
#line 148
//clear ___nl__bool__38;
#line 148
c_rt_lib0clear(&___nl__im__42);
#line 149
___nl__int__43 = 1;
#line 149
___nl__int__44 = getIntFromImm((*___ref___im__1));
#line 149
___nl__int__45 = ___nl__int__44 + ___nl__int__43;
#line 149
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__45));
#line 149
//clear ___nl__int__43;
#line 149
//clear ___nl__int__44;
#line 149
//clear ___nl__int__45;
#line 150
___nl__int__49 = 5;
#line 150
c_rt_lib0move(&___nl__im__50, c_rt_lib0int_new(___nl__int__49));
#line 150
c_rt_lib0move(&___nl__im__48, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__50));
#line 150
//clear ___nl__int__49;
#line 150
c_rt_lib0clear(&___nl__im__50);
#line 150
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_const(80));
#line 150
if(___nl__bool__47){ goto label_19;}
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
c_rt_lib0clear(&___nl__im__2);
#line 150
c_rt_lib0clear(&___nl__im__6);
#line 150
c_rt_lib0clear(&___nl__im__34);
#line 150
//clear ___nl__bool__36;
#line 150
c_rt_lib0clear(&___nl__im__46);
#line 150
//clear ___nl__bool__47;
#line 150
return ___nl__im__48;
#line 150
label_19:
;
#line 150
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(80)));
#line 151
___nl__int__51 = getIntFromImm(___nl__im__6);
#line 151
___nl__int__52 = getIntFromImm(___nl__im__46);
#line 151
___nl__int__53 = ___nl__int__51 * ___nl__int__52;
#line 151
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__53));
#line 151
//clear ___nl__int__51;
#line 151
//clear ___nl__int__52;
#line 151
//clear ___nl__int__53;
#line 152
goto label_15;
#line 152
label_16:
;
#line 152
c_rt_lib0move(&___nl__im__54,___get_global_const(107));
#line 152
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__54);
#line 152
c_rt_lib0clear(&___nl__im__54);
#line 152
___nl__bool__36 = !___nl__bool__36;
#line 152
if(___nl__bool__36){ goto label_20;}
#line 153
___nl__int__56 = 5;
#line 153
___nl__int__57 = getIntFromImm(___nl__im__2);
#line 153
___nl__int__58 = ___nl__int__57 >= ___nl__int__56;
#line 153
___nl__bool__55 = ___nl__int__58;
#line 153
//clear ___nl__int__56;
#line 153
//clear ___nl__int__57;
#line 153
//clear ___nl__int__58;
#line 153
___nl__bool__55 = !___nl__bool__55;
#line 153
if(___nl__bool__55){ goto label_22;}
#line 153
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
c_rt_lib0clear(&___nl__im__6);
#line 153
c_rt_lib0clear(&___nl__im__34);
#line 153
//clear ___nl__bool__36;
#line 153
c_rt_lib0clear(&___nl__im__46);
#line 153
//clear ___nl__bool__47;
#line 153
c_rt_lib0clear(&___nl__im__48);
#line 153
//clear ___nl__bool__55;
#line 153
return ___nl__im__59;
#line 153
goto label_21;
#line 153
label_22:
;
#line 153
label_21:
;
#line 153
//clear ___nl__bool__55;
#line 153
c_rt_lib0clear(&___nl__im__59);
#line 154
___nl__int__60 = 1;
#line 154
___nl__int__61 = getIntFromImm((*___ref___im__1));
#line 154
___nl__int__62 = ___nl__int__61 + ___nl__int__60;
#line 154
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__62));
#line 154
//clear ___nl__int__60;
#line 154
//clear ___nl__int__61;
#line 154
//clear ___nl__int__62;
#line 155
___nl__int__66 = 5;
#line 155
c_rt_lib0move(&___nl__im__67, c_rt_lib0int_new(___nl__int__66));
#line 155
c_rt_lib0move(&___nl__im__65, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__67));
#line 155
//clear ___nl__int__66;
#line 155
c_rt_lib0clear(&___nl__im__67);
#line 155
___nl__bool__64 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(80));
#line 155
if(___nl__bool__64){ goto label_23;}
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0clear(&___nl__im__6);
#line 155
c_rt_lib0clear(&___nl__im__34);
#line 155
//clear ___nl__bool__36;
#line 155
c_rt_lib0clear(&___nl__im__46);
#line 155
//clear ___nl__bool__47;
#line 155
c_rt_lib0clear(&___nl__im__48);
#line 155
c_rt_lib0clear(&___nl__im__63);
#line 155
//clear ___nl__bool__64;
#line 155
return ___nl__im__65;
#line 155
label_23:
;
#line 155
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__65, ___get_global_const(80)));
#line 156
___nl__int__68 = getIntFromImm(___nl__im__6);
#line 156
___nl__int__69 = getIntFromImm(___nl__im__63);
#line 156
___nl__int__70 = ___nl__int__68 / ___nl__int__69;
#line 156
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__70));
#line 156
//clear ___nl__int__68;
#line 156
//clear ___nl__int__69;
#line 156
//clear ___nl__int__70;
#line 157
goto label_15;
#line 157
label_20:
;
#line 157
c_rt_lib0move(&___nl__im__71,___get_global_const(349));
#line 157
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__71);
#line 157
c_rt_lib0clear(&___nl__im__71);
#line 157
___nl__bool__36 = !___nl__bool__36;
#line 157
if(___nl__bool__36){ goto label_24;}
#line 158
___nl__int__73 = 5;
#line 158
___nl__int__74 = getIntFromImm(___nl__im__2);
#line 158
___nl__int__75 = ___nl__int__74 >= ___nl__int__73;
#line 158
___nl__bool__72 = ___nl__int__75;
#line 158
//clear ___nl__int__73;
#line 158
//clear ___nl__int__74;
#line 158
//clear ___nl__int__75;
#line 158
___nl__bool__72 = !___nl__bool__72;
#line 158
if(___nl__bool__72){ goto label_26;}
#line 158
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__6);
#line 158
c_rt_lib0clear(&___nl__im__34);
#line 158
//clear ___nl__bool__36;
#line 158
c_rt_lib0clear(&___nl__im__46);
#line 158
//clear ___nl__bool__47;
#line 158
c_rt_lib0clear(&___nl__im__48);
#line 158
c_rt_lib0clear(&___nl__im__63);
#line 158
//clear ___nl__bool__64;
#line 158
c_rt_lib0clear(&___nl__im__65);
#line 158
//clear ___nl__bool__72;
#line 158
return ___nl__im__76;
#line 158
goto label_25;
#line 158
label_26:
;
#line 158
label_25:
;
#line 158
//clear ___nl__bool__72;
#line 158
c_rt_lib0clear(&___nl__im__76);
#line 159
___nl__int__77 = 1;
#line 159
___nl__int__78 = getIntFromImm((*___ref___im__1));
#line 159
___nl__int__79 = ___nl__int__78 + ___nl__int__77;
#line 159
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__79));
#line 159
//clear ___nl__int__77;
#line 159
//clear ___nl__int__78;
#line 159
//clear ___nl__int__79;
#line 160
___nl__int__83 = 5;
#line 160
c_rt_lib0move(&___nl__im__84, c_rt_lib0int_new(___nl__int__83));
#line 160
c_rt_lib0move(&___nl__im__82, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__84));
#line 160
//clear ___nl__int__83;
#line 160
c_rt_lib0clear(&___nl__im__84);
#line 160
___nl__bool__81 = c_rt_lib0priv_is(___nl__im__82, ___get_global_const(80));
#line 160
if(___nl__bool__81){ goto label_27;}
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
c_rt_lib0clear(&___nl__im__2);
#line 160
c_rt_lib0clear(&___nl__im__6);
#line 160
c_rt_lib0clear(&___nl__im__34);
#line 160
//clear ___nl__bool__36;
#line 160
c_rt_lib0clear(&___nl__im__46);
#line 160
//clear ___nl__bool__47;
#line 160
c_rt_lib0clear(&___nl__im__48);
#line 160
c_rt_lib0clear(&___nl__im__63);
#line 160
//clear ___nl__bool__64;
#line 160
c_rt_lib0clear(&___nl__im__65);
#line 160
c_rt_lib0clear(&___nl__im__80);
#line 160
//clear ___nl__bool__81;
#line 160
return ___nl__im__82;
#line 160
label_27:
;
#line 160
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__82, ___get_global_const(80)));
#line 161
___nl__int__85 = getIntFromImm(___nl__im__6);
#line 161
___nl__int__86 = getIntFromImm(___nl__im__80);
#line 161
___nl__int__87 = ___nl__int__85 % ___nl__int__86;
#line 161
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__87));
#line 161
//clear ___nl__int__85;
#line 161
//clear ___nl__int__86;
#line 161
//clear ___nl__int__87;
#line 162
goto label_15;
#line 162
label_24:
;
#line 162
c_rt_lib0move(&___nl__im__88,___get_global_const(340));
#line 162
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__88);
#line 162
c_rt_lib0clear(&___nl__im__88);
#line 162
___nl__bool__36 = !___nl__bool__36;
#line 162
if(___nl__bool__36){ goto label_28;}
#line 163
___nl__int__90 = 2;
#line 163
___nl__int__91 = getIntFromImm(___nl__im__2);
#line 163
___nl__int__92 = ___nl__int__91 >= ___nl__int__90;
#line 163
___nl__bool__89 = ___nl__int__92;
#line 163
//clear ___nl__int__90;
#line 163
//clear ___nl__int__91;
#line 163
//clear ___nl__int__92;
#line 163
___nl__bool__89 = !___nl__bool__89;
#line 163
if(___nl__bool__89){ goto label_30;}
#line 163
c_rt_lib0move(&___nl__im__93, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 163
c_rt_lib0clear(&___nl__im__0);
#line 163
c_rt_lib0clear(&___nl__im__2);
#line 163
c_rt_lib0clear(&___nl__im__6);
#line 163
c_rt_lib0clear(&___nl__im__34);
#line 163
//clear ___nl__bool__36;
#line 163
c_rt_lib0clear(&___nl__im__46);
#line 163
//clear ___nl__bool__47;
#line 163
c_rt_lib0clear(&___nl__im__48);
#line 163
c_rt_lib0clear(&___nl__im__63);
#line 163
//clear ___nl__bool__64;
#line 163
c_rt_lib0clear(&___nl__im__65);
#line 163
c_rt_lib0clear(&___nl__im__80);
#line 163
//clear ___nl__bool__81;
#line 163
c_rt_lib0clear(&___nl__im__82);
#line 163
//clear ___nl__bool__89;
#line 163
return ___nl__im__93;
#line 163
goto label_29;
#line 163
label_30:
;
#line 163
label_29:
;
#line 163
//clear ___nl__bool__89;
#line 163
c_rt_lib0clear(&___nl__im__93);
#line 164
___nl__int__94 = 1;
#line 164
___nl__int__95 = getIntFromImm((*___ref___im__1));
#line 164
___nl__int__96 = ___nl__int__95 + ___nl__int__94;
#line 164
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__96));
#line 164
//clear ___nl__int__94;
#line 164
//clear ___nl__int__95;
#line 164
//clear ___nl__int__96;
#line 165
___nl__int__100 = 2;
#line 165
c_rt_lib0move(&___nl__im__101, c_rt_lib0int_new(___nl__int__100));
#line 165
c_rt_lib0move(&___nl__im__99, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__101));
#line 165
//clear ___nl__int__100;
#line 165
c_rt_lib0clear(&___nl__im__101);
#line 165
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__99, ___get_global_const(80));
#line 165
if(___nl__bool__98){ goto label_31;}
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
c_rt_lib0clear(&___nl__im__2);
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 165
c_rt_lib0clear(&___nl__im__34);
#line 165
//clear ___nl__bool__36;
#line 165
c_rt_lib0clear(&___nl__im__46);
#line 165
//clear ___nl__bool__47;
#line 165
c_rt_lib0clear(&___nl__im__48);
#line 165
c_rt_lib0clear(&___nl__im__63);
#line 165
//clear ___nl__bool__64;
#line 165
c_rt_lib0clear(&___nl__im__65);
#line 165
c_rt_lib0clear(&___nl__im__80);
#line 165
//clear ___nl__bool__81;
#line 165
c_rt_lib0clear(&___nl__im__82);
#line 165
c_rt_lib0clear(&___nl__im__97);
#line 165
//clear ___nl__bool__98;
#line 165
return ___nl__im__99;
#line 165
label_31:
;
#line 165
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__99, ___get_global_const(80)));
#line 166
___nl__int__102 = getIntFromImm(___nl__im__6);
#line 166
___nl__int__103 = getIntFromImm(___nl__im__97);
#line 166
___nl__int__104 = ___nl__int__102 + ___nl__int__103;
#line 166
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__104));
#line 166
//clear ___nl__int__102;
#line 166
//clear ___nl__int__103;
#line 166
//clear ___nl__int__104;
#line 167
goto label_15;
#line 167
label_28:
;
#line 167
c_rt_lib0move(&___nl__im__105,___get_global_const(338));
#line 167
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__105);
#line 167
c_rt_lib0clear(&___nl__im__105);
#line 167
___nl__bool__36 = !___nl__bool__36;
#line 167
if(___nl__bool__36){ goto label_32;}
#line 168
___nl__int__107 = 2;
#line 168
___nl__int__108 = getIntFromImm(___nl__im__2);
#line 168
___nl__int__109 = ___nl__int__108 >= ___nl__int__107;
#line 168
___nl__bool__106 = ___nl__int__109;
#line 168
//clear ___nl__int__107;
#line 168
//clear ___nl__int__108;
#line 168
//clear ___nl__int__109;
#line 168
___nl__bool__106 = !___nl__bool__106;
#line 168
if(___nl__bool__106){ goto label_34;}
#line 168
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
#line 168
c_rt_lib0clear(&___nl__im__0);
#line 168
c_rt_lib0clear(&___nl__im__2);
#line 168
c_rt_lib0clear(&___nl__im__6);
#line 168
c_rt_lib0clear(&___nl__im__34);
#line 168
//clear ___nl__bool__36;
#line 168
c_rt_lib0clear(&___nl__im__46);
#line 168
//clear ___nl__bool__47;
#line 168
c_rt_lib0clear(&___nl__im__48);
#line 168
c_rt_lib0clear(&___nl__im__63);
#line 168
//clear ___nl__bool__64;
#line 168
c_rt_lib0clear(&___nl__im__65);
#line 168
c_rt_lib0clear(&___nl__im__80);
#line 168
//clear ___nl__bool__81;
#line 168
c_rt_lib0clear(&___nl__im__82);
#line 168
c_rt_lib0clear(&___nl__im__97);
#line 168
//clear ___nl__bool__98;
#line 168
c_rt_lib0clear(&___nl__im__99);
#line 168
//clear ___nl__bool__106;
#line 168
return ___nl__im__110;
#line 168
goto label_33;
#line 168
label_34:
;
#line 168
label_33:
;
#line 168
//clear ___nl__bool__106;
#line 168
c_rt_lib0clear(&___nl__im__110);
#line 169
___nl__int__111 = 1;
#line 169
___nl__int__112 = getIntFromImm((*___ref___im__1));
#line 169
___nl__int__113 = ___nl__int__112 + ___nl__int__111;
#line 169
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__113));
#line 169
//clear ___nl__int__111;
#line 169
//clear ___nl__int__112;
#line 169
//clear ___nl__int__113;
#line 170
___nl__int__117 = 2;
#line 170
c_rt_lib0move(&___nl__im__118, c_rt_lib0int_new(___nl__int__117));
#line 170
c_rt_lib0move(&___nl__im__116, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__118));
#line 170
//clear ___nl__int__117;
#line 170
c_rt_lib0clear(&___nl__im__118);
#line 170
___nl__bool__115 = c_rt_lib0priv_is(___nl__im__116, ___get_global_const(80));
#line 170
if(___nl__bool__115){ goto label_35;}
#line 170
c_rt_lib0clear(&___nl__im__0);
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
c_rt_lib0clear(&___nl__im__6);
#line 170
c_rt_lib0clear(&___nl__im__34);
#line 170
//clear ___nl__bool__36;
#line 170
c_rt_lib0clear(&___nl__im__46);
#line 170
//clear ___nl__bool__47;
#line 170
c_rt_lib0clear(&___nl__im__48);
#line 170
c_rt_lib0clear(&___nl__im__63);
#line 170
//clear ___nl__bool__64;
#line 170
c_rt_lib0clear(&___nl__im__65);
#line 170
c_rt_lib0clear(&___nl__im__80);
#line 170
//clear ___nl__bool__81;
#line 170
c_rt_lib0clear(&___nl__im__82);
#line 170
c_rt_lib0clear(&___nl__im__97);
#line 170
//clear ___nl__bool__98;
#line 170
c_rt_lib0clear(&___nl__im__99);
#line 170
c_rt_lib0clear(&___nl__im__114);
#line 170
//clear ___nl__bool__115;
#line 170
return ___nl__im__116;
#line 170
label_35:
;
#line 170
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__116, ___get_global_const(80)));
#line 171
___nl__int__119 = getIntFromImm(___nl__im__6);
#line 171
___nl__int__120 = getIntFromImm(___nl__im__114);
#line 171
___nl__int__121 = ___nl__int__119 - ___nl__int__120;
#line 171
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__121));
#line 171
//clear ___nl__int__119;
#line 171
//clear ___nl__int__120;
#line 171
//clear ___nl__int__121;
#line 172
goto label_15;
#line 172
label_32:
;
#line 172
c_rt_lib0move(&___nl__im__122,___get_global_const(298));
#line 172
___nl__bool__36 = c_rt_lib0eq(___nl__im__34, ___nl__im__122);
#line 172
c_rt_lib0clear(&___nl__im__122);
#line 172
___nl__bool__36 = !___nl__bool__36;
#line 172
if(___nl__bool__36){ goto label_36;}
#line 173
___nl__int__124 = 0;
#line 173
___nl__int__125 = getIntFromImm(___nl__im__2);
#line 173
___nl__int__126 = ___nl__int__125 < ___nl__int__124;
#line 173
___nl__bool__123 = ___nl__int__126;
#line 173
//clear ___nl__int__124;
#line 173
//clear ___nl__int__125;
#line 173
//clear ___nl__int__126;
#line 173
___nl__bool__123 = !___nl__bool__123;
#line 173
if(___nl__bool__123){ goto label_38;}
#line 173
c_rt_lib0move(&___nl__im__127, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 173
c_rt_lib0clear(&___nl__im__0);
#line 173
c_rt_lib0clear(&___nl__im__2);
#line 173
c_rt_lib0clear(&___nl__im__6);
#line 173
c_rt_lib0clear(&___nl__im__34);
#line 173
//clear ___nl__bool__36;
#line 173
c_rt_lib0clear(&___nl__im__46);
#line 173
//clear ___nl__bool__47;
#line 173
c_rt_lib0clear(&___nl__im__48);
#line 173
c_rt_lib0clear(&___nl__im__63);
#line 173
//clear ___nl__bool__64;
#line 173
c_rt_lib0clear(&___nl__im__65);
#line 173
c_rt_lib0clear(&___nl__im__80);
#line 173
//clear ___nl__bool__81;
#line 173
c_rt_lib0clear(&___nl__im__82);
#line 173
c_rt_lib0clear(&___nl__im__97);
#line 173
//clear ___nl__bool__98;
#line 173
c_rt_lib0clear(&___nl__im__99);
#line 173
c_rt_lib0clear(&___nl__im__114);
#line 173
//clear ___nl__bool__115;
#line 173
c_rt_lib0clear(&___nl__im__116);
#line 173
//clear ___nl__bool__123;
#line 173
return ___nl__im__127;
#line 173
goto label_37;
#line 173
label_38:
;
#line 173
label_37:
;
#line 173
//clear ___nl__bool__123;
#line 173
c_rt_lib0clear(&___nl__im__127);
#line 174
c_rt_lib0move(&___nl__im__128, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__6));
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
return ___nl__im__128;
#line 175
goto label_15;
#line 175
label_36:
;
#line 176
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_none(___get_global_const(79)));
#line 176
c_rt_lib0clear(&___nl__im__0);
#line 176
c_rt_lib0clear(&___nl__im__2);
#line 176
c_rt_lib0clear(&___nl__im__6);
#line 176
c_rt_lib0clear(&___nl__im__34);
#line 176
//clear ___nl__bool__36;
#line 176
c_rt_lib0clear(&___nl__im__46);
#line 176
//clear ___nl__bool__47;
#line 176
c_rt_lib0clear(&___nl__im__48);
#line 176
c_rt_lib0clear(&___nl__im__63);
#line 176
//clear ___nl__bool__64;
#line 176
c_rt_lib0clear(&___nl__im__65);
#line 176
c_rt_lib0clear(&___nl__im__80);
#line 176
//clear ___nl__bool__81;
#line 176
c_rt_lib0clear(&___nl__im__82);
#line 176
c_rt_lib0clear(&___nl__im__97);
#line 176
//clear ___nl__bool__98;
#line 176
c_rt_lib0clear(&___nl__im__99);
#line 176
c_rt_lib0clear(&___nl__im__114);
#line 176
//clear ___nl__bool__115;
#line 176
c_rt_lib0clear(&___nl__im__116);
#line 176
c_rt_lib0clear(&___nl__im__128);
#line 176
return ___nl__im__129;
#line 177
goto label_15;
#line 177
label_15:
;
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
c_rt_lib0clear(&___nl__im__129);
#line 177
c_rt_lib0clear(&___nl__im__34);
#line 144
goto label_12;
#line 144
label_11:
;
#line 179
c_rt_lib0move(&___nl__im__130, c_rt_lib0array_mk(0));
#line 179
nl_die_arg(___nl__im__130);
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
c_rt_lib0clear(&___nl__im__2);
#line 179
c_rt_lib0clear(&___nl__im__6);
#line 179
c_rt_lib0clear(&___nl__im__34);
#line 179
c_rt_lib0clear(&___nl__im__130);
#line 179
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
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
#line 183
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 183
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 183
c_rt_lib0clear(&___nl__im__2);
#line 183
___nl__bool__1 = !___nl__bool__1;
#line 183
if(___nl__bool__1){ goto label_2;}
#line 183
//clear ___nl__bool__1;
#line 183
return ___nl__im__0;
#line 183
goto label_1;
#line 183
label_2:
;
#line 183
label_1:
;
#line 183
//clear ___nl__bool__1;
#line 184
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 184
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__4, ___nl__im__0));
#line 184
c_rt_lib0clear(&___nl__im__4);
#line 185
___nl__int__7 = 0;
#line 185
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_get(___nl__im__3, ___nl__int__7));
#line 185
//clear ___nl__int__7;
#line 185
c_rt_lib0move(&___nl__im__8,___get_global_const(911));
#line 185
___nl__bool__5 = c_rt_lib0ne(___nl__im__6, ___nl__im__8);
#line 185
c_rt_lib0clear(&___nl__im__6);
#line 185
c_rt_lib0clear(&___nl__im__8);
#line 185
___nl__bool__5 = !___nl__bool__5;
#line 185
if(___nl__bool__5){ goto label_4;}
#line 185
c_rt_lib0clear(&___nl__im__3);
#line 185
//clear ___nl__bool__5;
#line 185
return ___nl__im__0;
#line 185
goto label_3;
#line 185
label_4:
;
#line 185
label_3:
;
#line 185
//clear ___nl__bool__5;
#line 186
___nl__int__9 = 1;
#line 186
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 186
___nl__int__12 = 1;
#line 186
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 186
//clear ___nl__int__11;
#line 186
//clear ___nl__int__12;
#line 186
c_rt_lib0move(&___nl__im__3, array0subarray(___nl__im__3, ___nl__int__9, ___nl__int__10));
#line 186
//clear ___nl__int__9;
#line 186
//clear ___nl__int__10;
#line 187
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 188
___nl__int__15 = 0;
#line 188
___nl__int__16 = 1;
#line 188
___nl__int__17 = c_rt_lib0array_len(___nl__im__3);
#line 188
label_7:
;
#line 188
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 188
___nl__bool__18 = ___nl__int__19;
#line 188
if(___nl__bool__18){ goto label_5;}
#line 188
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__3, ___nl__int__15));
#line 188
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 191
c_rt_lib0move(&___nl__im__29, string_utils0is_int(___nl__im__14));
#line 191
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__29);
#line 191
c_rt_lib0clear(&___nl__im__29);
#line 191
if(___nl__bool__21){ goto label_16;}
#line 191
c_rt_lib0move(&___nl__im__30,___get_global_const(338));
#line 191
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__30);
#line 191
c_rt_lib0clear(&___nl__im__30);
#line 191
label_16:
;
#line 191
//clear ___nl__bool__28;
#line 191
if(___nl__bool__21){ goto label_15;}
#line 191
c_rt_lib0move(&___nl__im__31,___get_global_const(112));
#line 191
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__31);
#line 191
c_rt_lib0clear(&___nl__im__31);
#line 191
label_15:
;
#line 191
//clear ___nl__bool__27;
#line 191
if(___nl__bool__21){ goto label_14;}
#line 191
c_rt_lib0move(&___nl__im__32,___get_global_const(340));
#line 191
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__32);
#line 191
c_rt_lib0clear(&___nl__im__32);
#line 191
label_14:
;
#line 191
//clear ___nl__bool__26;
#line 191
if(___nl__bool__21){ goto label_13;}
#line 191
c_rt_lib0move(&___nl__im__33,___get_global_const(107));
#line 191
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__33);
#line 191
c_rt_lib0clear(&___nl__im__33);
#line 191
label_13:
;
#line 191
//clear ___nl__bool__25;
#line 191
if(___nl__bool__21){ goto label_12;}
#line 191
c_rt_lib0move(&___nl__im__34,___get_global_const(419));
#line 191
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__34);
#line 191
c_rt_lib0clear(&___nl__im__34);
#line 191
label_12:
;
#line 191
//clear ___nl__bool__24;
#line 191
if(___nl__bool__21){ goto label_11;}
#line 192
c_rt_lib0move(&___nl__im__35,___get_global_const(298));
#line 192
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__35);
#line 192
c_rt_lib0clear(&___nl__im__35);
#line 192
label_11:
;
#line 192
//clear ___nl__bool__23;
#line 192
if(___nl__bool__21){ goto label_10;}
#line 192
c_rt_lib0move(&___nl__im__36,___get_global_const(346));
#line 192
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__36);
#line 192
c_rt_lib0clear(&___nl__im__36);
#line 192
label_10:
;
#line 192
//clear ___nl__bool__22;
#line 192
___nl__bool__21 = !___nl__bool__21;
#line 192
___nl__bool__21 = !___nl__bool__21;
#line 192
if(___nl__bool__21){ goto label_9;}
#line 189
c_rt_lib0clear(&___nl__im__3);
#line 189
c_rt_lib0clear(&___nl__im__13);
#line 189
c_rt_lib0clear(&___nl__im__14);
#line 189
//clear ___nl__int__15;
#line 189
//clear ___nl__int__16;
#line 189
//clear ___nl__int__17;
#line 189
//clear ___nl__bool__18;
#line 189
//clear ___nl__int__19;
#line 189
c_rt_lib0clear(&___nl__im__20);
#line 189
//clear ___nl__bool__21;
#line 189
return ___nl__im__0;
#line 189
goto label_8;
#line 189
label_9:
;
#line 189
label_8:
;
#line 189
//clear ___nl__bool__21;
#line 193
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_add(___nl__im__13, ___nl__im__14));
#line 193
c_rt_lib0clear(&___nl__im__14);
#line 193
label_6:
;
#line 194
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 194
goto label_7;
#line 194
label_5:
;
#line 195
c_rt_lib0move(&___nl__im__38,___get_global_const(37));
#line 195
c_rt_lib0move(&___nl__im__37, string0split(___nl__im__38, ___nl__im__13));
#line 195
c_rt_lib0clear(&___nl__im__38);
#line 196
c_rt_lib0move(&___nl__im__39,___get_global_const(21));
#line 197
___nl__int__41 = 1;
#line 197
___nl__int__41 = -___nl__int__41;
#line 197
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__41));
#line 197
c_rt_lib0move(&___nl__im__40, string_utils_priv0cal_expr(___nl__im__37, &___nl__im__39, ___nl__im__42));
#line 197
//clear ___nl__int__41;
#line 197
c_rt_lib0clear(&___nl__im__42);
#line 197
___nl__bool__43 = c_rt_lib0priv_is(___nl__im__40, ___get_global_const(79));
#line 197
if(___nl__bool__43){ goto label_18;}
#line 199
___nl__bool__43 = c_rt_lib0priv_is(___nl__im__40, ___get_global_const(80));
#line 199
if(___nl__bool__43){ goto label_19;}
#line 199
c_rt_lib0move(&___nl__im__44,___get_global_const(16));
#line 199
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(2, ___nl__im__44, ___nl__im__40));
#line 199
nl_die_arg(___nl__im__44);
#line 197
label_18:
;
#line 198
c_rt_lib0move(&___nl__im__45,___get_global_const(37));
#line 198
c_rt_lib0clear(&___nl__im__0);
#line 198
c_rt_lib0clear(&___nl__im__3);
#line 198
c_rt_lib0clear(&___nl__im__13);
#line 198
c_rt_lib0clear(&___nl__im__14);
#line 198
//clear ___nl__int__15;
#line 198
//clear ___nl__int__16;
#line 198
//clear ___nl__int__17;
#line 198
//clear ___nl__bool__18;
#line 198
//clear ___nl__int__19;
#line 198
c_rt_lib0clear(&___nl__im__20);
#line 198
c_rt_lib0clear(&___nl__im__37);
#line 198
c_rt_lib0clear(&___nl__im__39);
#line 198
c_rt_lib0clear(&___nl__im__40);
#line 198
//clear ___nl__bool__43;
#line 198
c_rt_lib0clear(&___nl__im__44);
#line 198
return ___nl__im__45;
#line 199
goto label_17;
#line 199
label_19:
;
#line 199
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__40, ___get_global_const(80)));
#line 199
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 200
c_rt_lib0clear(&___nl__im__0);
#line 200
c_rt_lib0clear(&___nl__im__3);
#line 200
c_rt_lib0clear(&___nl__im__13);
#line 200
c_rt_lib0clear(&___nl__im__14);
#line 200
//clear ___nl__int__15;
#line 200
//clear ___nl__int__16;
#line 200
//clear ___nl__int__17;
#line 200
//clear ___nl__bool__18;
#line 200
//clear ___nl__int__19;
#line 200
c_rt_lib0clear(&___nl__im__20);
#line 200
c_rt_lib0clear(&___nl__im__37);
#line 200
c_rt_lib0clear(&___nl__im__39);
#line 200
c_rt_lib0clear(&___nl__im__40);
#line 200
//clear ___nl__bool__43;
#line 200
c_rt_lib0clear(&___nl__im__44);
#line 200
c_rt_lib0clear(&___nl__im__45);
#line 200
c_rt_lib0clear(&___nl__im__47);
#line 200
return ___nl__im__46;
#line 201
goto label_17;
#line 201
label_17:
;
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
//clear ___nl__bool__43;
#line 201
c_rt_lib0clear(&___nl__im__44);
#line 201
c_rt_lib0clear(&___nl__im__45);
#line 201
c_rt_lib0clear(&___nl__im__46);
#line 201
c_rt_lib0clear(&___nl__im__47);
#line 201
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
#line 208
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__1, ___nl__im__0));
#line 211
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 211
___nl__int__8 = 3;
#line 211
___nl__int__9 = ___nl__int__7 == ___nl__int__8;
#line 211
___nl__bool__3 = ___nl__int__9;
#line 211
//clear ___nl__int__7;
#line 211
//clear ___nl__int__8;
#line 211
//clear ___nl__int__9;
#line 211
___nl__bool__6 = !___nl__bool__3;
#line 211
if(___nl__bool__6){ goto label_5;}
#line 212
___nl__int__11 = 0;
#line 212
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__11));
#line 212
//clear ___nl__int__11;
#line 212
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__10);
#line 212
c_rt_lib0clear(&___nl__im__10);
#line 212
label_5:
;
#line 212
//clear ___nl__bool__6;
#line 212
___nl__bool__5 = !___nl__bool__3;
#line 212
if(___nl__bool__5){ goto label_4;}
#line 213
___nl__int__13 = 1;
#line 213
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__13));
#line 213
//clear ___nl__int__13;
#line 213
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__12);
#line 213
c_rt_lib0clear(&___nl__im__12);
#line 213
label_4:
;
#line 213
//clear ___nl__bool__5;
#line 213
___nl__bool__4 = !___nl__bool__3;
#line 213
if(___nl__bool__4){ goto label_3;}
#line 214
___nl__int__15 = 2;
#line 214
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__2, ___nl__int__15));
#line 214
//clear ___nl__int__15;
#line 214
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__14);
#line 214
c_rt_lib0clear(&___nl__im__14);
#line 214
label_3:
;
#line 214
//clear ___nl__bool__4;
#line 214
___nl__bool__3 = !___nl__bool__3;
#line 214
___nl__bool__3 = !___nl__bool__3;
#line 214
if(___nl__bool__3){ goto label_2;}
#line 209
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 209
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__17));
#line 209
c_rt_lib0clear(&___nl__im__17);
#line 209
c_rt_lib0clear(&___nl__im__0);
#line 209
c_rt_lib0clear(&___nl__im__1);
#line 209
c_rt_lib0clear(&___nl__im__2);
#line 209
//clear ___nl__bool__3;
#line 209
return ___nl__im__16;
#line 209
goto label_1;
#line 209
label_2:
;
#line 209
label_1:
;
#line 209
//clear ___nl__bool__3;
#line 209
c_rt_lib0clear(&___nl__im__16);
#line 215
___nl__int__21 = 0;
#line 215
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__2, ___nl__int__21));
#line 215
//clear ___nl__int__21;
#line 215
___nl__int__23 = 1;
#line 215
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__2, ___nl__int__23));
#line 215
//clear ___nl__int__23;
#line 215
___nl__int__25 = 2;
#line 215
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__2, ___nl__int__25));
#line 215
//clear ___nl__int__25;
#line 215
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(3, ___get_global_const(1192), ___nl__im__20, ___get_global_const(1193), ___nl__im__22, ___get_global_const(1194), ___nl__im__24));
#line 215
c_rt_lib0clear(&___nl__im__20);
#line 215
c_rt_lib0clear(&___nl__im__22);
#line 215
c_rt_lib0clear(&___nl__im__24);
#line 215
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__19));
#line 215
c_rt_lib0clear(&___nl__im__19);
#line 215
c_rt_lib0clear(&___nl__im__0);
#line 215
c_rt_lib0clear(&___nl__im__1);
#line 215
c_rt_lib0clear(&___nl__im__2);
#line 215
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
#line 219
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 220
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 220
c_rt_lib0move(&___nl__im__4, string0split(___nl__im__5, ___nl__im__0));
#line 220
c_rt_lib0clear(&___nl__im__5);
#line 220
___nl__int__7 = 0;
#line 220
___nl__int__8 = 1;
#line 220
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 220
label_3:
;
#line 220
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 220
___nl__bool__10 = ___nl__int__11;
#line 220
if(___nl__bool__10){ goto label_1;}
#line 220
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__4, ___nl__int__7));
#line 220
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 221
___nl__bool__14 = c_rt_lib0eq(___nl__im__6, ___nl__im__1);
#line 221
if(___nl__bool__14){ goto label_5;}
#line 221
c_rt_lib0copy(&___nl__im__13, ___nl__im__6);
#line 221
goto label_4;
#line 221
label_5:
;
#line 221
c_rt_lib0copy(&___nl__im__13, ___nl__im__2);
#line 221
label_4:
;
#line 221
//clear ___nl__bool__14;
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 221
c_rt_lib0clear(&___nl__im__13);
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
label_2:
;
#line 222
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 222
goto label_3;
#line 222
label_1:
;
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 223
c_rt_lib0clear(&___nl__im__4);
#line 223
c_rt_lib0clear(&___nl__im__6);
#line 223
//clear ___nl__int__7;
#line 223
//clear ___nl__int__8;
#line 223
//clear ___nl__int__9;
#line 223
//clear ___nl__bool__10;
#line 223
//clear ___nl__int__11;
#line 223
c_rt_lib0clear(&___nl__im__12);
#line 223
return ___nl__im__3;
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 223
c_rt_lib0clear(&___nl__im__3);
#line 223
c_rt_lib0clear(&___nl__im__4);
#line 223
c_rt_lib0clear(&___nl__im__6);
#line 223
//clear ___nl__int__7;
#line 223
//clear ___nl__int__8;
#line 223
//clear ___nl__int__9;
#line 223
//clear ___nl__bool__10;
#line 223
//clear ___nl__int__11;
#line 223
c_rt_lib0clear(&___nl__im__12);
#line 223
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
#line 227
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 227
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
___nl__bool__1 = !___nl__bool__1;
#line 227
if(___nl__bool__1){ goto label_2;}
#line 227
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
//clear ___nl__bool__1;
#line 227
return ___nl__im__3;
#line 227
goto label_1;
#line 227
label_2:
;
#line 227
label_1:
;
#line 227
//clear ___nl__bool__1;
#line 227
c_rt_lib0clear(&___nl__im__3);
#line 228
___nl__int__5 = string0length(___nl__im__0);
#line 228
___nl__int__6 = 1;
#line 228
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 228
//clear ___nl__int__5;
#line 228
//clear ___nl__int__6;
#line 229
label_4:
;
#line 229
___nl__int__9 = 0;
#line 229
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 229
___nl__bool__7 = ___nl__int__10;
#line 229
//clear ___nl__int__9;
#line 229
//clear ___nl__int__10;
#line 229
___nl__bool__8 = !___nl__bool__7;
#line 229
if(___nl__bool__8){ goto label_5;}
#line 229
___nl__int__12 = 1;
#line 229
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__12));
#line 229
//clear ___nl__int__12;
#line 229
c_rt_lib0move(&___nl__im__13, string_utils0is_whitespace(___nl__im__11));
#line 229
___nl__bool__7 = c_rt_lib0check_true_native(___nl__im__13);
#line 229
c_rt_lib0clear(&___nl__im__11);
#line 229
c_rt_lib0clear(&___nl__im__13);
#line 229
label_5:
;
#line 229
//clear ___nl__bool__8;
#line 229
___nl__bool__7 = !___nl__bool__7;
#line 229
if(___nl__bool__7){ goto label_3;}
#line 230
___nl__int__14 = 1;
#line 230
___nl__int__4 = ___nl__int__4 - ___nl__int__14;
#line 230
//clear ___nl__int__14;
#line 231
goto label_4;
#line 231
label_3:
;
#line 232
___nl__int__16 = 0;
#line 232
___nl__int__18 = 1;
#line 232
___nl__int__17 = ___nl__int__4 + ___nl__int__18;
#line 232
//clear ___nl__int__18;
#line 232
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__16, ___nl__int__17));
#line 232
//clear ___nl__int__16;
#line 232
//clear ___nl__int__17;
#line 232
c_rt_lib0clear(&___nl__im__0);
#line 232
//clear ___nl__int__4;
#line 232
//clear ___nl__bool__7;
#line 232
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
#line 236
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 236
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 236
c_rt_lib0clear(&___nl__im__2);
#line 236
___nl__bool__1 = !___nl__bool__1;
#line 236
if(___nl__bool__1){ goto label_2;}
#line 236
//clear ___nl__bool__1;
#line 236
return ___nl__im__0;
#line 236
goto label_1;
#line 236
label_2:
;
#line 236
label_1:
;
#line 236
//clear ___nl__bool__1;
#line 237
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 238
___nl__int__5 = c_rt_lib0array_len(___nl__im__3);
#line 238
___nl__int__6 = 1;
#line 238
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 238
//clear ___nl__int__5;
#line 238
//clear ___nl__int__6;
#line 239
label_4:
;
#line 239
___nl__int__9 = 0;
#line 239
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 239
___nl__bool__7 = ___nl__int__10;
#line 239
//clear ___nl__int__9;
#line 239
//clear ___nl__int__10;
#line 239
___nl__bool__8 = !___nl__bool__7;
#line 239
if(___nl__bool__8){ goto label_5;}
#line 239
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 239
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 239
___nl__bool__7 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 239
c_rt_lib0clear(&___nl__im__11);
#line 239
c_rt_lib0clear(&___nl__im__12);
#line 239
label_5:
;
#line 239
//clear ___nl__bool__8;
#line 239
___nl__bool__7 = !___nl__bool__7;
#line 239
if(___nl__bool__7){ goto label_3;}
#line 240
___nl__int__13 = 1;
#line 240
___nl__int__4 = ___nl__int__4 - ___nl__int__13;
#line 240
//clear ___nl__int__13;
#line 241
goto label_4;
#line 241
label_3:
;
#line 242
___nl__int__15 = 0;
#line 242
___nl__int__17 = 1;
#line 242
___nl__int__16 = ___nl__int__4 + ___nl__int__17;
#line 242
//clear ___nl__int__17;
#line 242
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__16));
#line 242
//clear ___nl__int__15;
#line 242
//clear ___nl__int__16;
#line 242
c_rt_lib0clear(&___nl__im__0);
#line 242
c_rt_lib0clear(&___nl__im__3);
#line 242
//clear ___nl__int__4;
#line 242
//clear ___nl__bool__7;
#line 242
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
#line 246
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 246
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
___nl__bool__1 = !___nl__bool__1;
#line 246
if(___nl__bool__1){ goto label_2;}
#line 246
//clear ___nl__bool__1;
#line 246
return ___nl__im__0;
#line 246
goto label_1;
#line 246
label_2:
;
#line 246
label_1:
;
#line 246
//clear ___nl__bool__1;
#line 247
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 248
___nl__int__4 = 0;
#line 249
label_4:
;
#line 249
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 249
___nl__int__8 = ___nl__int__4 < ___nl__int__7;
#line 249
___nl__bool__5 = ___nl__int__8;
#line 249
//clear ___nl__int__7;
#line 249
//clear ___nl__int__8;
#line 249
___nl__bool__6 = !___nl__bool__5;
#line 249
if(___nl__bool__6){ goto label_5;}
#line 249
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 249
c_rt_lib0move(&___nl__im__10,___get_global_const(21));
#line 249
___nl__bool__5 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 249
c_rt_lib0clear(&___nl__im__9);
#line 249
c_rt_lib0clear(&___nl__im__10);
#line 249
label_5:
;
#line 249
//clear ___nl__bool__6;
#line 249
___nl__bool__5 = !___nl__bool__5;
#line 249
if(___nl__bool__5){ goto label_3;}
#line 250
___nl__int__11 = 1;
#line 250
___nl__int__4 = ___nl__int__4 + ___nl__int__11;
#line 250
//clear ___nl__int__11;
#line 251
goto label_4;
#line 251
label_3:
;
#line 252
___nl__int__14 = c_rt_lib0array_len(___nl__im__3);
#line 252
___nl__int__15 = ___nl__int__4 != ___nl__int__14;
#line 252
___nl__bool__13 = ___nl__int__15;
#line 252
//clear ___nl__int__14;
#line 252
//clear ___nl__int__15;
#line 252
if(___nl__bool__13){ goto label_7;}
#line 254
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 254
goto label_6;
#line 254
label_7:
;
#line 253
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__4));
#line 253
c_rt_lib0move(&___nl__im__12, string0substr2(___nl__im__0, ___nl__im__16));
#line 253
c_rt_lib0clear(&___nl__im__16);
#line 253
label_6:
;
#line 253
//clear ___nl__bool__13;
#line 253
c_rt_lib0clear(&___nl__im__0);
#line 253
c_rt_lib0clear(&___nl__im__3);
#line 253
//clear ___nl__int__4;
#line 253
//clear ___nl__bool__5;
#line 253
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
#line 258
c_rt_lib0move(&___nl__im__2,___get_global_const(21));
#line 258
c_rt_lib0move(&___nl__im__3,___get_global_const(41));
#line 258
c_rt_lib0move(&___nl__im__4,___get_global_const(1195));
#line 258
c_rt_lib0move(&___nl__im__5,___get_global_const(1196));
#line 258
c_rt_lib0move(&___nl__im__6,___get_global_const(1197));
#line 258
c_rt_lib0move(&___nl__im__7,___get_global_const(1198));
#line 258
c_rt_lib0move(&___nl__im__8,___get_global_const(1199));
#line 258
c_rt_lib0move(&___nl__im__9,___get_global_const(1200));
#line 258
c_rt_lib0move(&___nl__im__10,___get_global_const(1201));
#line 258
c_rt_lib0move(&___nl__im__11,___get_global_const(1202));
#line 258
c_rt_lib0move(&___nl__im__12,___get_global_const(1203));
#line 258
c_rt_lib0move(&___nl__im__13,___get_global_const(1204));
#line 258
c_rt_lib0move(&___nl__im__14,___get_global_const(65));
#line 258
c_rt_lib0move(&___nl__im__15,___get_global_const(1205));
#line 258
c_rt_lib0move(&___nl__im__16,___get_global_const(1206));
#line 258
c_rt_lib0move(&___nl__im__17,___get_global_const(1207));
#line 258
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(16, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17));
#line 258
c_rt_lib0clear(&___nl__im__2);
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 258
c_rt_lib0clear(&___nl__im__5);
#line 258
c_rt_lib0clear(&___nl__im__6);
#line 258
c_rt_lib0clear(&___nl__im__7);
#line 258
c_rt_lib0clear(&___nl__im__8);
#line 258
c_rt_lib0clear(&___nl__im__9);
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
c_rt_lib0clear(&___nl__im__11);
#line 258
c_rt_lib0clear(&___nl__im__12);
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 258
c_rt_lib0clear(&___nl__im__14);
#line 258
c_rt_lib0clear(&___nl__im__15);
#line 258
c_rt_lib0clear(&___nl__im__16);
#line 258
c_rt_lib0clear(&___nl__im__17);
#line 259
___nl__int__21 = 16;
#line 259
___nl__int__22 = getIntFromImm(___nl__im__0);
#line 259
___nl__int__20 = ___nl__int__22 / ___nl__int__21;
#line 259
//clear ___nl__int__21;
#line 259
//clear ___nl__int__22;
#line 259
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__1, ___nl__int__20));
#line 259
//clear ___nl__int__20;
#line 259
___nl__int__25 = 16;
#line 259
___nl__int__26 = getIntFromImm(___nl__im__0);
#line 259
___nl__int__24 = ___nl__int__26 % ___nl__int__25;
#line 259
//clear ___nl__int__25;
#line 259
//clear ___nl__int__26;
#line 259
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 259
//clear ___nl__int__24;
#line 259
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 259
c_rt_lib0clear(&___nl__im__19);
#line 259
c_rt_lib0clear(&___nl__im__23);
#line 259
c_rt_lib0clear(&___nl__im__0);
#line 259
c_rt_lib0clear(&___nl__im__1);
#line 259
return ___nl__im__18;
#line 259
c_rt_lib0clear(&___nl__im__0);
#line 259
c_rt_lib0clear(&___nl__im__1);
#line 259
c_rt_lib0clear(&___nl__im__18);
#line 259
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
#line 263
___nl__int__2 = 0;
#line 264
___nl__int__5 = 48;
#line 264
___nl__int__6 = getIntFromImm(___nl__im__0);
#line 264
___nl__int__7 = ___nl__int__6 >= ___nl__int__5;
#line 264
___nl__bool__3 = ___nl__int__7;
#line 264
//clear ___nl__int__5;
#line 264
//clear ___nl__int__6;
#line 264
//clear ___nl__int__7;
#line 264
___nl__bool__4 = !___nl__bool__3;
#line 264
if(___nl__bool__4){ goto label_3;}
#line 264
___nl__int__8 = 57;
#line 264
___nl__int__9 = getIntFromImm(___nl__im__0);
#line 264
___nl__int__10 = ___nl__int__9 <= ___nl__int__8;
#line 264
___nl__bool__3 = ___nl__int__10;
#line 264
//clear ___nl__int__8;
#line 264
//clear ___nl__int__9;
#line 264
//clear ___nl__int__10;
#line 264
label_3:
;
#line 264
//clear ___nl__bool__4;
#line 264
___nl__bool__3 = !___nl__bool__3;
#line 264
if(___nl__bool__3){ goto label_2;}
#line 265
___nl__int__11 = getIntFromImm(___nl__im__0);
#line 265
___nl__int__2 = ___nl__int__2 + ___nl__int__11;
#line 265
//clear ___nl__int__11;
#line 266
___nl__int__12 = 48;
#line 266
___nl__int__2 = ___nl__int__2 - ___nl__int__12;
#line 266
//clear ___nl__int__12;
#line 267
goto label_1;
#line 267
label_2:
;
#line 267
___nl__int__14 = 65;
#line 267
___nl__int__15 = getIntFromImm(___nl__im__0);
#line 267
___nl__int__16 = ___nl__int__15 >= ___nl__int__14;
#line 267
___nl__bool__3 = ___nl__int__16;
#line 267
//clear ___nl__int__14;
#line 267
//clear ___nl__int__15;
#line 267
//clear ___nl__int__16;
#line 267
___nl__bool__13 = !___nl__bool__3;
#line 267
if(___nl__bool__13){ goto label_5;}
#line 267
___nl__int__17 = 70;
#line 267
___nl__int__18 = getIntFromImm(___nl__im__0);
#line 267
___nl__int__19 = ___nl__int__18 <= ___nl__int__17;
#line 267
___nl__bool__3 = ___nl__int__19;
#line 267
//clear ___nl__int__17;
#line 267
//clear ___nl__int__18;
#line 267
//clear ___nl__int__19;
#line 267
label_5:
;
#line 267
//clear ___nl__bool__13;
#line 267
___nl__bool__3 = !___nl__bool__3;
#line 267
if(___nl__bool__3){ goto label_4;}
#line 268
___nl__int__20 = getIntFromImm(___nl__im__0);
#line 268
___nl__int__2 = ___nl__int__2 + ___nl__int__20;
#line 268
//clear ___nl__int__20;
#line 269
___nl__int__21 = 55;
#line 269
___nl__int__2 = ___nl__int__2 - ___nl__int__21;
#line 269
//clear ___nl__int__21;
#line 270
goto label_1;
#line 270
label_4:
;
#line 270
___nl__int__23 = 97;
#line 270
___nl__int__24 = getIntFromImm(___nl__im__0);
#line 270
___nl__int__25 = ___nl__int__24 >= ___nl__int__23;
#line 270
___nl__bool__3 = ___nl__int__25;
#line 270
//clear ___nl__int__23;
#line 270
//clear ___nl__int__24;
#line 270
//clear ___nl__int__25;
#line 270
___nl__bool__22 = !___nl__bool__3;
#line 270
if(___nl__bool__22){ goto label_7;}
#line 270
___nl__int__26 = 102;
#line 270
___nl__int__27 = getIntFromImm(___nl__im__0);
#line 270
___nl__int__28 = ___nl__int__27 <= ___nl__int__26;
#line 270
___nl__bool__3 = ___nl__int__28;
#line 270
//clear ___nl__int__26;
#line 270
//clear ___nl__int__27;
#line 270
//clear ___nl__int__28;
#line 270
label_7:
;
#line 270
//clear ___nl__bool__22;
#line 270
___nl__bool__3 = !___nl__bool__3;
#line 270
if(___nl__bool__3){ goto label_6;}
#line 271
___nl__int__29 = getIntFromImm(___nl__im__0);
#line 271
___nl__int__2 = ___nl__int__2 + ___nl__int__29;
#line 271
//clear ___nl__int__29;
#line 272
___nl__int__30 = 87;
#line 272
___nl__int__2 = ___nl__int__2 - ___nl__int__30;
#line 272
//clear ___nl__int__30;
#line 273
goto label_1;
#line 273
label_6:
;
#line 274
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 274
nl_die_arg(___nl__im__31);
#line 275
goto label_1;
#line 275
label_1:
;
#line 275
//clear ___nl__bool__3;
#line 275
c_rt_lib0clear(&___nl__im__31);
#line 276
___nl__int__32 = 16;
#line 276
___nl__int__2 = ___nl__int__2 * ___nl__int__32;
#line 276
//clear ___nl__int__32;
#line 277
___nl__int__35 = 48;
#line 277
___nl__int__36 = getIntFromImm(___nl__im__1);
#line 277
___nl__int__37 = ___nl__int__36 >= ___nl__int__35;
#line 277
___nl__bool__33 = ___nl__int__37;
#line 277
//clear ___nl__int__35;
#line 277
//clear ___nl__int__36;
#line 277
//clear ___nl__int__37;
#line 277
___nl__bool__34 = !___nl__bool__33;
#line 277
if(___nl__bool__34){ goto label_10;}
#line 277
___nl__int__38 = 57;
#line 277
___nl__int__39 = getIntFromImm(___nl__im__1);
#line 277
___nl__int__40 = ___nl__int__39 <= ___nl__int__38;
#line 277
___nl__bool__33 = ___nl__int__40;
#line 277
//clear ___nl__int__38;
#line 277
//clear ___nl__int__39;
#line 277
//clear ___nl__int__40;
#line 277
label_10:
;
#line 277
//clear ___nl__bool__34;
#line 277
___nl__bool__33 = !___nl__bool__33;
#line 277
if(___nl__bool__33){ goto label_9;}
#line 278
___nl__int__41 = getIntFromImm(___nl__im__1);
#line 278
___nl__int__2 = ___nl__int__2 + ___nl__int__41;
#line 278
//clear ___nl__int__41;
#line 279
___nl__int__42 = 48;
#line 279
___nl__int__2 = ___nl__int__2 - ___nl__int__42;
#line 279
//clear ___nl__int__42;
#line 280
goto label_8;
#line 280
label_9:
;
#line 280
___nl__int__44 = 65;
#line 280
___nl__int__45 = getIntFromImm(___nl__im__1);
#line 280
___nl__int__46 = ___nl__int__45 >= ___nl__int__44;
#line 280
___nl__bool__33 = ___nl__int__46;
#line 280
//clear ___nl__int__44;
#line 280
//clear ___nl__int__45;
#line 280
//clear ___nl__int__46;
#line 280
___nl__bool__43 = !___nl__bool__33;
#line 280
if(___nl__bool__43){ goto label_12;}
#line 280
___nl__int__47 = 70;
#line 280
___nl__int__48 = getIntFromImm(___nl__im__1);
#line 280
___nl__int__49 = ___nl__int__48 <= ___nl__int__47;
#line 280
___nl__bool__33 = ___nl__int__49;
#line 280
//clear ___nl__int__47;
#line 280
//clear ___nl__int__48;
#line 280
//clear ___nl__int__49;
#line 280
label_12:
;
#line 280
//clear ___nl__bool__43;
#line 280
___nl__bool__33 = !___nl__bool__33;
#line 280
if(___nl__bool__33){ goto label_11;}
#line 281
___nl__int__50 = getIntFromImm(___nl__im__1);
#line 281
___nl__int__2 = ___nl__int__2 + ___nl__int__50;
#line 281
//clear ___nl__int__50;
#line 282
___nl__int__51 = 55;
#line 282
___nl__int__2 = ___nl__int__2 - ___nl__int__51;
#line 282
//clear ___nl__int__51;
#line 283
goto label_8;
#line 283
label_11:
;
#line 283
___nl__int__53 = 97;
#line 283
___nl__int__54 = getIntFromImm(___nl__im__1);
#line 283
___nl__int__55 = ___nl__int__54 >= ___nl__int__53;
#line 283
___nl__bool__33 = ___nl__int__55;
#line 283
//clear ___nl__int__53;
#line 283
//clear ___nl__int__54;
#line 283
//clear ___nl__int__55;
#line 283
___nl__bool__52 = !___nl__bool__33;
#line 283
if(___nl__bool__52){ goto label_14;}
#line 283
___nl__int__56 = 102;
#line 283
___nl__int__57 = getIntFromImm(___nl__im__1);
#line 283
___nl__int__58 = ___nl__int__57 <= ___nl__int__56;
#line 283
___nl__bool__33 = ___nl__int__58;
#line 283
//clear ___nl__int__56;
#line 283
//clear ___nl__int__57;
#line 283
//clear ___nl__int__58;
#line 283
label_14:
;
#line 283
//clear ___nl__bool__52;
#line 283
___nl__bool__33 = !___nl__bool__33;
#line 283
if(___nl__bool__33){ goto label_13;}
#line 284
___nl__int__59 = getIntFromImm(___nl__im__1);
#line 284
___nl__int__2 = ___nl__int__2 + ___nl__int__59;
#line 284
//clear ___nl__int__59;
#line 285
___nl__int__60 = 87;
#line 285
___nl__int__2 = ___nl__int__2 - ___nl__int__60;
#line 285
//clear ___nl__int__60;
#line 286
goto label_8;
#line 286
label_13:
;
#line 287
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(0));
#line 287
nl_die_arg(___nl__im__61);
#line 288
goto label_8;
#line 288
label_8:
;
#line 288
//clear ___nl__bool__33;
#line 288
c_rt_lib0clear(&___nl__im__61);
#line 289
c_rt_lib0move(&___nl__im__62, string0chr(___nl__int__2));
#line 289
c_rt_lib0clear(&___nl__im__0);
#line 289
c_rt_lib0clear(&___nl__im__1);
#line 289
//clear ___nl__int__2;
#line 289
return ___nl__im__62;
#line 289
c_rt_lib0clear(&___nl__im__0);
#line 289
c_rt_lib0clear(&___nl__im__1);
#line 289
//clear ___nl__int__2;
#line 289
c_rt_lib0clear(&___nl__im__62);
#line 289
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
#line 293
c_rt_lib0move(&___nl__im__3,___get_global_const(1208));
#line 293
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 293
c_rt_lib0clear(&___nl__im__3);
#line 294
___nl__int__6 = string0length(___nl__im__2);
#line 294
___nl__int__8 = string0length(___nl__im__0);
#line 294
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 294
c_rt_lib0move(&___nl__im__7, string_utils_priv0max(___nl__im__1, ___nl__im__9));
#line 294
//clear ___nl__int__8;
#line 294
c_rt_lib0clear(&___nl__im__9);
#line 294
___nl__int__10 = getIntFromImm(___nl__im__7);
#line 294
___nl__int__5 = ___nl__int__6 - ___nl__int__10;
#line 294
//clear ___nl__int__6;
#line 294
c_rt_lib0clear(&___nl__im__7);
#line 294
//clear ___nl__int__10;
#line 294
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__5));
#line 294
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__11));
#line 294
//clear ___nl__int__5;
#line 294
c_rt_lib0clear(&___nl__im__11);
#line 294
c_rt_lib0clear(&___nl__im__0);
#line 294
c_rt_lib0clear(&___nl__im__1);
#line 294
c_rt_lib0clear(&___nl__im__2);
#line 294
return ___nl__im__4;
#line 294
c_rt_lib0clear(&___nl__im__0);
#line 294
c_rt_lib0clear(&___nl__im__1);
#line 294
c_rt_lib0clear(&___nl__im__2);
#line 294
c_rt_lib0clear(&___nl__im__4);
#line 294
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
#line 298
___nl__int__4 = getIntFromImm(___nl__im__0);
#line 298
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 298
___nl__int__6 = ___nl__int__4 > ___nl__int__5;
#line 298
___nl__bool__3 = ___nl__int__6;
#line 298
//clear ___nl__int__4;
#line 298
//clear ___nl__int__5;
#line 298
//clear ___nl__int__6;
#line 298
if(___nl__bool__3){ goto label_2;}
#line 298
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 298
goto label_1;
#line 298
label_2:
;
#line 298
___nl__int__2 = getIntFromImm(___nl__im__0);
#line 298
label_1:
;
#line 298
//clear ___nl__bool__3;
#line 298
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 298
c_rt_lib0clear(&___nl__im__0);
#line 298
c_rt_lib0clear(&___nl__im__1);
#line 298
//clear ___nl__int__2;
#line 298
return ___nl__im__7;
#line 298
c_rt_lib0clear(&___nl__im__0);
#line 298
c_rt_lib0clear(&___nl__im__1);
#line 298
//clear ___nl__int__2;
#line 298
c_rt_lib0clear(&___nl__im__7);
#line 298
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
#line 302
c_rt_lib0move(&___nl__im__3,___get_global_const(1208));
#line 302
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 302
c_rt_lib0clear(&___nl__im__3);
#line 303
___nl__int__6 = string0length(___nl__im__2);
#line 303
___nl__int__7 = getIntFromImm(___nl__im__1);
#line 303
___nl__int__5 = ___nl__int__6 - ___nl__int__7;
#line 303
//clear ___nl__int__6;
#line 303
//clear ___nl__int__7;
#line 303
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__5));
#line 303
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__8));
#line 303
//clear ___nl__int__5;
#line 303
c_rt_lib0clear(&___nl__im__8);
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
c_rt_lib0clear(&___nl__im__2);
#line 303
return ___nl__im__4;
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
c_rt_lib0clear(&___nl__im__2);
#line 303
c_rt_lib0clear(&___nl__im__4);
#line 303
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
#line 307
___nl__int__4 = string0length(___nl__im__0);
#line 307
___nl__int__5 = string0length(___nl__im__1);
#line 307
___nl__int__6 = ___nl__int__4 >= ___nl__int__5;
#line 307
___nl__bool__2 = ___nl__int__6;
#line 307
//clear ___nl__int__4;
#line 307
//clear ___nl__int__5;
#line 307
//clear ___nl__int__6;
#line 307
___nl__bool__3 = !___nl__bool__2;
#line 307
if(___nl__bool__3){ goto label_1;}
#line 307
___nl__int__8 = 0;
#line 307
___nl__int__9 = string0length(___nl__im__1);
#line 307
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 307
//clear ___nl__int__8;
#line 307
//clear ___nl__int__9;
#line 307
___nl__bool__2 = c_rt_lib0eq(___nl__im__7, ___nl__im__1);
#line 307
c_rt_lib0clear(&___nl__im__7);
#line 307
label_1:
;
#line 307
//clear ___nl__bool__3;
#line 307
c_rt_lib0move(&___nl__im__10, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 307
c_rt_lib0clear(&___nl__im__0);
#line 307
c_rt_lib0clear(&___nl__im__1);
#line 307
//clear ___nl__bool__2;
#line 307
return ___nl__im__10;
#line 307
c_rt_lib0clear(&___nl__im__0);
#line 307
c_rt_lib0clear(&___nl__im__1);
#line 307
//clear ___nl__bool__2;
#line 307
c_rt_lib0clear(&___nl__im__10);
#line 307
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
