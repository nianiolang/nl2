
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
#include "float.h"
#include "c_rt_lib.h"
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
#line 12
___nl__int__3 = string0ord(___nl__im__0);
#line 12
___nl__int__4 = 47;
#line 12
___nl__int__5 = ___nl__int__3 > ___nl__int__4;
#line 12
___nl__bool__1 = ___nl__int__5;
#line 12
//clear ___nl__int__3;
#line 12
//clear ___nl__int__4;
#line 12
//clear ___nl__int__5;
#line 12
___nl__bool__2 = !___nl__bool__1;
#line 12
if(___nl__bool__2){ goto label_1;}
#line 12
___nl__int__6 = string0ord(___nl__im__0);
#line 12
___nl__int__7 = 58;
#line 12
___nl__int__8 = ___nl__int__6 < ___nl__int__7;
#line 12
___nl__bool__1 = ___nl__int__8;
#line 12
//clear ___nl__int__6;
#line 12
//clear ___nl__int__7;
#line 12
//clear ___nl__int__8;
#line 12
label_1:
;
#line 12
//clear ___nl__bool__2;
#line 12
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
//clear ___nl__bool__1;
#line 12
return ___nl__im__9;
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
//clear ___nl__bool__1;
#line 12
c_rt_lib0clear(&___nl__im__9);
#line 12
return NULL;
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
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 16
c_rt_lib0move(&___nl__im__2,___get_global_const(445));
#line 16
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 16
c_rt_lib0clear(&___nl__im__2);
#line 16
if(___nl__bool__1){ goto label_4;}
#line 16
c_rt_lib0move(&___nl__im__3, string0lf());
#line 16
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
label_4:
;
#line 16
if(___nl__bool__1){ goto label_3;}
#line 16
c_rt_lib0move(&___nl__im__4, string0tab());
#line 16
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
label_3:
;
#line 16
if(___nl__bool__1){ goto label_2;}
#line 16
c_rt_lib0move(&___nl__im__5, string0r());
#line 16
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__5);
#line 16
c_rt_lib0clear(&___nl__im__5);
#line 16
label_2:
;
#line 16
if(___nl__bool__1){ goto label_1;}
#line 16
c_rt_lib0move(&___nl__im__6, string0f());
#line 16
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
label_1:
;
#line 16
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
//clear ___nl__bool__1;
#line 16
return ___nl__im__7;
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
//clear ___nl__bool__1;
#line 16
c_rt_lib0clear(&___nl__im__7);
#line 16
return NULL;
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
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
#line 20
___nl__int__1 = string0ord(___nl__im__0);
#line 21
___nl__int__4 = 64;
#line 21
___nl__int__5 = ___nl__int__1 > ___nl__int__4;
#line 21
___nl__bool__2 = ___nl__int__5;
#line 21
//clear ___nl__int__4;
#line 21
//clear ___nl__int__5;
#line 21
___nl__bool__3 = !___nl__bool__2;
#line 21
if(___nl__bool__3){ goto label_2;}
#line 21
___nl__int__6 = 91;
#line 21
___nl__int__7 = ___nl__int__1 < ___nl__int__6;
#line 21
___nl__bool__2 = ___nl__int__7;
#line 21
//clear ___nl__int__6;
#line 21
//clear ___nl__int__7;
#line 21
label_2:
;
#line 21
//clear ___nl__bool__3;
#line 21
if(___nl__bool__2){ goto label_1;}
#line 21
___nl__int__9 = 96;
#line 21
___nl__int__10 = ___nl__int__1 > ___nl__int__9;
#line 21
___nl__bool__2 = ___nl__int__10;
#line 21
//clear ___nl__int__9;
#line 21
//clear ___nl__int__10;
#line 21
___nl__bool__8 = !___nl__bool__2;
#line 21
if(___nl__bool__8){ goto label_3;}
#line 21
___nl__int__11 = 123;
#line 21
___nl__int__12 = ___nl__int__1 < ___nl__int__11;
#line 21
___nl__bool__2 = ___nl__int__12;
#line 21
//clear ___nl__int__11;
#line 21
//clear ___nl__int__12;
#line 21
label_3:
;
#line 21
//clear ___nl__bool__8;
#line 21
label_1:
;
#line 21
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
//clear ___nl__int__1;
#line 21
//clear ___nl__bool__2;
#line 21
return ___nl__im__13;
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
//clear ___nl__int__1;
#line 21
//clear ___nl__bool__2;
#line 21
c_rt_lib0clear(&___nl__im__13);
#line 21
return NULL;
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
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
#line 25
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 25
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
if(___nl__bool__1){ goto label_3;}
#line 25
c_rt_lib0move(&___nl__im__3,___get_global_const(354));
#line 25
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
label_3:
;
#line 25
___nl__bool__1 = !___nl__bool__1;
#line 25
if(___nl__bool__1){ goto label_2;}
#line 25
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 25
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__5));
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
//clear ___nl__bool__1;
#line 25
return ___nl__im__4;
#line 25
goto label_1;
#line 25
label_2:
;
#line 25
label_1:
;
#line 25
//clear ___nl__bool__1;
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 26
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 26
c_rt_lib0move(&___nl__im__6, string0split(___nl__im__7, ___nl__im__0));
#line 26
c_rt_lib0clear(&___nl__im__7);
#line 27
___nl__int__8 = 0;
#line 28
___nl__int__9 = 1;
#line 29
___nl__int__12 = 0;
#line 29
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__12));
#line 29
//clear ___nl__int__12;
#line 29
c_rt_lib0move(&___nl__im__13,___get_global_const(354));
#line 29
___nl__bool__10 = c_rt_lib0eq(___nl__im__11, ___nl__im__13);
#line 29
c_rt_lib0clear(&___nl__im__11);
#line 29
c_rt_lib0clear(&___nl__im__13);
#line 29
___nl__bool__10 = !___nl__bool__10;
#line 29
if(___nl__bool__10){ goto label_5;}
#line 30
___nl__int__14 = 1;
#line 30
___nl__int__16 = c_rt_lib0array_len(___nl__im__6);
#line 30
___nl__int__17 = 1;
#line 30
___nl__int__15 = ___nl__int__16 - ___nl__int__17;
#line 30
//clear ___nl__int__16;
#line 30
//clear ___nl__int__17;
#line 30
c_rt_lib0move(&___nl__im__6, array0subarray(___nl__im__6, ___nl__int__14, ___nl__int__15));
#line 30
//clear ___nl__int__14;
#line 30
//clear ___nl__int__15;
#line 31
___nl__int__9 = 1;
#line 31
___nl__int__9 = -___nl__int__9;
#line 32
goto label_4;
#line 32
label_5:
;
#line 32
label_4:
;
#line 32
//clear ___nl__bool__10;
#line 33
___nl__int__19 = 0;
#line 33
___nl__int__20 = 1;
#line 33
___nl__int__21 = c_rt_lib0array_len(___nl__im__6);
#line 33
label_8:
;
#line 33
___nl__int__23 = ___nl__int__19 >= ___nl__int__21;
#line 33
___nl__bool__22 = ___nl__int__23;
#line 33
if(___nl__bool__22){ goto label_6;}
#line 33
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 33
c_rt_lib0copy(&___nl__im__18, ___nl__im__24);
#line 34
c_rt_lib0move(&___nl__im__26, string_utils0is_int(___nl__im__18));
#line 34
___nl__bool__25 = c_rt_lib0check_true_native(___nl__im__26);
#line 34
c_rt_lib0clear(&___nl__im__26);
#line 34
___nl__bool__25 = !___nl__bool__25;
#line 34
___nl__bool__25 = !___nl__bool__25;
#line 34
if(___nl__bool__25){ goto label_10;}
#line 34
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 34
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__28));
#line 34
c_rt_lib0clear(&___nl__im__28);
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__6);
#line 34
//clear ___nl__int__8;
#line 34
//clear ___nl__int__9;
#line 34
c_rt_lib0clear(&___nl__im__18);
#line 34
//clear ___nl__int__19;
#line 34
//clear ___nl__int__20;
#line 34
//clear ___nl__int__21;
#line 34
//clear ___nl__bool__22;
#line 34
//clear ___nl__int__23;
#line 34
c_rt_lib0clear(&___nl__im__24);
#line 34
//clear ___nl__bool__25;
#line 34
return ___nl__im__27;
#line 34
goto label_9;
#line 34
label_10:
;
#line 34
label_9:
;
#line 34
//clear ___nl__bool__25;
#line 34
c_rt_lib0clear(&___nl__im__27);
#line 35
___nl__int__29 = 10;
#line 35
___nl__int__8 = ___nl__int__8 * ___nl__int__29;
#line 35
//clear ___nl__int__29;
#line 36
___nl__int__31 = string0ord(___nl__im__18);
#line 36
c_rt_lib0move(&___nl__im__33,___get_global_const(21));
#line 36
___nl__int__32 = string0ord(___nl__im__33);
#line 36
c_rt_lib0clear(&___nl__im__33);
#line 36
___nl__int__30 = ___nl__int__31 - ___nl__int__32;
#line 36
//clear ___nl__int__31;
#line 36
//clear ___nl__int__32;
#line 36
___nl__int__8 = ___nl__int__8 + ___nl__int__30;
#line 36
//clear ___nl__int__30;
#line 36
c_rt_lib0clear(&___nl__im__18);
#line 37
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 37
goto label_8;
#line 37
label_6:
;
#line 38
___nl__int__35 = ___nl__int__9 * ___nl__int__8;
#line 38
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__35));
#line 38
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__36));
#line 38
//clear ___nl__int__35;
#line 38
c_rt_lib0clear(&___nl__im__36);
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__6);
#line 38
//clear ___nl__int__8;
#line 38
//clear ___nl__int__9;
#line 38
c_rt_lib0clear(&___nl__im__18);
#line 38
//clear ___nl__int__19;
#line 38
//clear ___nl__int__20;
#line 38
//clear ___nl__int__21;
#line 38
//clear ___nl__bool__22;
#line 38
//clear ___nl__int__23;
#line 38
c_rt_lib0clear(&___nl__im__24);
#line 38
return ___nl__im__34;
return NULL;
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
#line 42
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 42
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_add(___nl__im__0, ___nl__im__1));
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 43
___nl__bool__2 = string_utils0is_integer_possibly_leading_zeros(___nl__im__0);
#line 43
___nl__bool__2 = !___nl__bool__2;
#line 43
___nl__bool__2 = !___nl__bool__2;
#line 43
if(___nl__bool__2){ goto label_2;}
#line 43
___nl__bool__3 = false;
#line 43
c_rt_lib0clear(&___nl__im__0);
#line 43
//clear ___nl__bool__2;
#line 43
return ___nl__bool__3;
#line 43
goto label_1;
#line 43
label_2:
;
#line 43
label_1:
;
#line 43
//clear ___nl__bool__2;
#line 43
//clear ___nl__bool__3;
#line 44
c_rt_lib0move(&___nl__im__5,___get_global_const(21));
#line 44
___nl__bool__4 = c_rt_lib0eq(___nl__im__0, ___nl__im__5);
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
___nl__bool__4 = !___nl__bool__4;
#line 44
if(___nl__bool__4){ goto label_4;}
#line 44
___nl__bool__6 = true;
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
//clear ___nl__bool__4;
#line 44
return ___nl__bool__6;
#line 44
goto label_3;
#line 44
label_4:
;
#line 44
label_3:
;
#line 44
//clear ___nl__bool__4;
#line 44
//clear ___nl__bool__6;
#line 45
___nl__int__7 = 0;
#line 46
___nl__int__10 = 1;
#line 46
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__10));
#line 46
//clear ___nl__int__10;
#line 46
c_rt_lib0move(&___nl__im__11,___get_global_const(354));
#line 46
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 46
c_rt_lib0clear(&___nl__im__9);
#line 46
c_rt_lib0clear(&___nl__im__11);
#line 46
___nl__bool__8 = !___nl__bool__8;
#line 46
if(___nl__bool__8){ goto label_6;}
#line 46
___nl__int__12 = 1;
#line 46
___nl__int__7 = ___nl__int__7 + ___nl__int__12;
#line 46
//clear ___nl__int__12;
#line 46
goto label_5;
#line 46
label_6:
;
#line 46
label_5:
;
#line 46
//clear ___nl__bool__8;
#line 47
___nl__int__15 = 1;
#line 47
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__15));
#line 47
//clear ___nl__int__15;
#line 47
c_rt_lib0move(&___nl__im__16,___get_global_const(21));
#line 47
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__16);
#line 47
c_rt_lib0clear(&___nl__im__14);
#line 47
c_rt_lib0clear(&___nl__im__16);
#line 47
___nl__bool__13 = !___nl__bool__13;
#line 47
if(___nl__bool__13){ goto label_8;}
#line 47
___nl__bool__17 = false;
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
//clear ___nl__int__7;
#line 47
//clear ___nl__bool__13;
#line 47
return ___nl__bool__17;
#line 47
goto label_7;
#line 47
label_8:
;
#line 47
label_7:
;
#line 47
//clear ___nl__bool__13;
#line 47
//clear ___nl__bool__17;
#line 48
___nl__bool__18 = true;
#line 48
c_rt_lib0clear(&___nl__im__0);
#line 48
//clear ___nl__int__7;
#line 48
return ___nl__bool__18;
return false;
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
#line 52
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 52
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 52
c_rt_lib0clear(&___nl__im__2);
#line 53
___nl__int__3 = string0length(___nl__im__1);
#line 54
___nl__int__4 = 0;
#line 55
___nl__int__7 = 1;
#line 55
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__7));
#line 55
//clear ___nl__int__7;
#line 55
c_rt_lib0move(&___nl__im__8,___get_global_const(354));
#line 55
___nl__bool__5 = c_rt_lib0eq(___nl__im__6, ___nl__im__8);
#line 55
c_rt_lib0clear(&___nl__im__6);
#line 55
c_rt_lib0clear(&___nl__im__8);
#line 55
___nl__bool__5 = !___nl__bool__5;
#line 55
if(___nl__bool__5){ goto label_2;}
#line 55
___nl__int__9 = 1;
#line 55
___nl__int__4 = ___nl__int__4 + ___nl__int__9;
#line 55
//clear ___nl__int__9;
#line 55
goto label_1;
#line 55
label_2:
;
#line 55
label_1:
;
#line 55
//clear ___nl__bool__5;
#line 56
___nl__int__11 = ___nl__int__4 == ___nl__int__3;
#line 56
___nl__bool__10 = ___nl__int__11;
#line 56
//clear ___nl__int__11;
#line 56
___nl__bool__10 = !___nl__bool__10;
#line 56
if(___nl__bool__10){ goto label_4;}
#line 56
___nl__bool__12 = false;
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
//clear ___nl__int__3;
#line 56
//clear ___nl__int__4;
#line 56
//clear ___nl__bool__10;
#line 56
return ___nl__bool__12;
#line 56
goto label_3;
#line 56
label_4:
;
#line 56
label_3:
;
#line 56
//clear ___nl__bool__10;
#line 56
//clear ___nl__bool__12;
#line 57
label_6:
;
#line 57
___nl__int__14 = ___nl__int__4 < ___nl__int__3;
#line 57
___nl__bool__13 = ___nl__int__14;
#line 57
//clear ___nl__int__14;
#line 57
___nl__bool__13 = !___nl__bool__13;
#line 57
if(___nl__bool__13){ goto label_5;}
#line 58
___nl__int__17 = 1;
#line 58
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__17));
#line 58
//clear ___nl__int__17;
#line 58
___nl__bool__15 = string0is_digit(___nl__im__16);
#line 58
c_rt_lib0clear(&___nl__im__16);
#line 58
___nl__bool__15 = !___nl__bool__15;
#line 58
___nl__bool__15 = !___nl__bool__15;
#line 58
if(___nl__bool__15){ goto label_9;}
#line 58
___nl__bool__18 = false;
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
//clear ___nl__bool__15;
#line 58
return ___nl__bool__18;
#line 58
goto label_8;
#line 58
label_9:
;
#line 58
label_8:
;
#line 58
//clear ___nl__bool__15;
#line 58
//clear ___nl__bool__18;
#line 57
___nl__int__19 = 1;
#line 57
___nl__int__4 = ___nl__int__4 + ___nl__int__19;
#line 57
//clear ___nl__int__19;
#line 59
goto label_6;
#line 59
label_5:
;
#line 60
___nl__bool__20 = true;
#line 60
c_rt_lib0clear(&___nl__im__0);
#line 60
c_rt_lib0clear(&___nl__im__1);
#line 60
//clear ___nl__int__3;
#line 60
//clear ___nl__int__4;
#line 60
//clear ___nl__bool__13;
#line 60
return ___nl__bool__20;
return false;
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
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
bool  ___nl__bool__33 = false;
INT  ___nl__int__34 = 0;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
bool  ___nl__bool__40 = false;
#line 64
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 64
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 65
___nl__int__3 = string0length(___nl__im__1);
#line 66
___nl__int__5 = 3;
#line 66
___nl__int__6 = ___nl__int__3 < ___nl__int__5;
#line 66
___nl__bool__4 = ___nl__int__6;
#line 66
//clear ___nl__int__5;
#line 66
//clear ___nl__int__6;
#line 66
___nl__bool__4 = !___nl__bool__4;
#line 66
if(___nl__bool__4){ goto label_2;}
#line 66
___nl__bool__7 = false;
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
//clear ___nl__int__3;
#line 66
//clear ___nl__bool__4;
#line 66
return ___nl__bool__7;
#line 66
goto label_1;
#line 66
label_2:
;
#line 66
label_1:
;
#line 66
//clear ___nl__bool__4;
#line 66
//clear ___nl__bool__7;
#line 67
___nl__int__8 = 0;
#line 68
___nl__int__11 = 1;
#line 68
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__11));
#line 68
//clear ___nl__int__11;
#line 68
c_rt_lib0move(&___nl__im__12,___get_global_const(354));
#line 68
___nl__bool__9 = c_rt_lib0eq(___nl__im__10, ___nl__im__12);
#line 68
c_rt_lib0clear(&___nl__im__10);
#line 68
c_rt_lib0clear(&___nl__im__12);
#line 68
___nl__bool__9 = !___nl__bool__9;
#line 68
if(___nl__bool__9){ goto label_4;}
#line 68
___nl__int__13 = 1;
#line 68
___nl__int__8 = ___nl__int__8 + ___nl__int__13;
#line 68
//clear ___nl__int__13;
#line 68
goto label_3;
#line 68
label_4:
;
#line 68
label_3:
;
#line 68
//clear ___nl__bool__9;
#line 69
___nl__int__8 = ___nl__int__8;
#line 69
label_6:
;
#line 69
___nl__int__15 = ___nl__int__8 < ___nl__int__3;
#line 69
___nl__bool__14 = ___nl__int__15;
#line 69
//clear ___nl__int__15;
#line 69
___nl__bool__14 = !___nl__bool__14;
#line 69
if(___nl__bool__14){ goto label_5;}
#line 70
___nl__int__18 = 1;
#line 70
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__18));
#line 70
//clear ___nl__int__18;
#line 70
___nl__bool__16 = string0is_digit(___nl__im__17);
#line 70
c_rt_lib0clear(&___nl__im__17);
#line 70
___nl__bool__16 = !___nl__bool__16;
#line 70
___nl__bool__16 = !___nl__bool__16;
#line 70
if(___nl__bool__16){ goto label_9;}
#line 70
goto label_5;
#line 70
goto label_8;
#line 70
label_9:
;
#line 70
label_8:
;
#line 70
//clear ___nl__bool__16;
#line 69
___nl__int__19 = 1;
#line 69
___nl__int__8 = ___nl__int__8 + ___nl__int__19;
#line 69
//clear ___nl__int__19;
#line 71
goto label_6;
#line 71
label_5:
;
#line 72
___nl__int__21 = 1;
#line 72
___nl__int__22 = ___nl__int__8 < ___nl__int__21;
#line 72
___nl__bool__20 = ___nl__int__22;
#line 72
//clear ___nl__int__21;
#line 72
//clear ___nl__int__22;
#line 72
if(___nl__bool__20){ goto label_12;}
#line 72
___nl__int__24 = 2;
#line 72
___nl__int__23 = ___nl__int__8 + ___nl__int__24;
#line 72
//clear ___nl__int__24;
#line 72
___nl__int__25 = ___nl__int__23 > ___nl__int__3;
#line 72
___nl__bool__20 = ___nl__int__25;
#line 72
//clear ___nl__int__23;
#line 72
//clear ___nl__int__25;
#line 72
label_12:
;
#line 72
___nl__bool__20 = !___nl__bool__20;
#line 72
if(___nl__bool__20){ goto label_11;}
#line 72
___nl__bool__26 = false;
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
//clear ___nl__bool__20;
#line 72
return ___nl__bool__26;
#line 72
goto label_10;
#line 72
label_11:
;
#line 72
label_10:
;
#line 72
//clear ___nl__bool__20;
#line 72
//clear ___nl__bool__26;
#line 73
___nl__int__29 = 1;
#line 73
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__29));
#line 73
//clear ___nl__int__29;
#line 73
c_rt_lib0move(&___nl__im__30,___get_global_const(111));
#line 73
___nl__bool__27 = c_rt_lib0eq(___nl__im__28, ___nl__im__30);
#line 73
c_rt_lib0clear(&___nl__im__28);
#line 73
c_rt_lib0clear(&___nl__im__30);
#line 73
___nl__bool__27 = !___nl__bool__27;
#line 73
___nl__bool__27 = !___nl__bool__27;
#line 73
if(___nl__bool__27){ goto label_14;}
#line 73
___nl__bool__31 = false;
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
//clear ___nl__bool__27;
#line 73
return ___nl__bool__31;
#line 73
goto label_13;
#line 73
label_14:
;
#line 73
label_13:
;
#line 73
//clear ___nl__bool__27;
#line 73
//clear ___nl__bool__31;
#line 74
___nl__int__32 = 1;
#line 74
___nl__int__8 = ___nl__int__8 + ___nl__int__32;
#line 74
//clear ___nl__int__32;
#line 74
label_16:
;
#line 74
___nl__int__34 = ___nl__int__8 < ___nl__int__3;
#line 74
___nl__bool__33 = ___nl__int__34;
#line 74
//clear ___nl__int__34;
#line 74
___nl__bool__33 = !___nl__bool__33;
#line 74
if(___nl__bool__33){ goto label_15;}
#line 75
___nl__int__37 = 1;
#line 75
c_rt_lib0move(&___nl__im__36, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__37));
#line 75
//clear ___nl__int__37;
#line 75
___nl__bool__35 = string0is_digit(___nl__im__36);
#line 75
c_rt_lib0clear(&___nl__im__36);
#line 75
___nl__bool__35 = !___nl__bool__35;
#line 75
___nl__bool__35 = !___nl__bool__35;
#line 75
if(___nl__bool__35){ goto label_19;}
#line 75
___nl__bool__38 = false;
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
//clear ___nl__bool__33;
#line 75
//clear ___nl__bool__35;
#line 75
return ___nl__bool__38;
#line 75
goto label_18;
#line 75
label_19:
;
#line 75
label_18:
;
#line 75
//clear ___nl__bool__35;
#line 75
//clear ___nl__bool__38;
#line 74
___nl__int__39 = 1;
#line 74
___nl__int__8 = ___nl__int__8 + ___nl__int__39;
#line 74
//clear ___nl__int__39;
#line 76
goto label_16;
#line 76
label_15:
;
#line 77
___nl__bool__40 = true;
#line 77
c_rt_lib0clear(&___nl__im__0);
#line 77
c_rt_lib0clear(&___nl__im__1);
#line 77
//clear ___nl__int__3;
#line 77
//clear ___nl__int__8;
#line 77
//clear ___nl__bool__14;
#line 77
//clear ___nl__bool__33;
#line 77
return ___nl__bool__40;
return false;
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
#line 81
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 81
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 81
c_rt_lib0clear(&___nl__im__2);
#line 82
___nl__bool__3 = string_utils0is_integer(___nl__im__1);
#line 82
if(___nl__bool__3){ goto label_1;}
#line 82
___nl__bool__3 = string_utils0is_float(___nl__im__1);
#line 82
label_1:
;
#line 82
c_rt_lib0clear(&___nl__im__0);
#line 82
c_rt_lib0clear(&___nl__im__1);
#line 82
return ___nl__bool__3;
return false;
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
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
#line 86
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 86
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
if(___nl__bool__1){ goto label_3;}
#line 86
c_rt_lib0move(&___nl__im__3,___get_global_const(354));
#line 86
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 86
c_rt_lib0clear(&___nl__im__3);
#line 86
label_3:
;
#line 86
___nl__bool__1 = !___nl__bool__1;
#line 86
if(___nl__bool__1){ goto label_2;}
#line 86
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
//clear ___nl__bool__1;
#line 86
return ___nl__im__4;
#line 86
goto label_1;
#line 86
label_2:
;
#line 86
label_1:
;
#line 86
//clear ___nl__bool__1;
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 87
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 87
c_rt_lib0move(&___nl__im__5, string0split(___nl__im__6, ___nl__im__0));
#line 87
c_rt_lib0clear(&___nl__im__6);
#line 88
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 89
___nl__int__10 = 0;
#line 89
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 89
//clear ___nl__int__10;
#line 89
c_rt_lib0move(&___nl__im__11,___get_global_const(354));
#line 89
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 89
c_rt_lib0clear(&___nl__im__9);
#line 89
c_rt_lib0clear(&___nl__im__11);
#line 89
___nl__bool__8 = !___nl__bool__8;
#line 89
if(___nl__bool__8){ goto label_5;}
#line 90
___nl__int__12 = 1;
#line 90
___nl__int__14 = c_rt_lib0array_len(___nl__im__5);
#line 90
___nl__int__15 = 1;
#line 90
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 90
//clear ___nl__int__14;
#line 90
//clear ___nl__int__15;
#line 90
c_rt_lib0move(&___nl__im__5, array0subarray(___nl__im__5, ___nl__int__12, ___nl__int__13));
#line 90
//clear ___nl__int__12;
#line 90
//clear ___nl__int__13;
#line 91
___nl__int__18 = 0;
#line 91
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__5, ___nl__int__18));
#line 91
//clear ___nl__int__18;
#line 91
c_rt_lib0move(&___nl__im__19, string_utils0is_int(___nl__im__17));
#line 91
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__19);
#line 91
c_rt_lib0clear(&___nl__im__17);
#line 91
c_rt_lib0clear(&___nl__im__19);
#line 91
___nl__bool__16 = !___nl__bool__16;
#line 91
___nl__bool__16 = !___nl__bool__16;
#line 91
if(___nl__bool__16){ goto label_7;}
#line 91
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 91
c_rt_lib0clear(&___nl__im__0);
#line 91
c_rt_lib0clear(&___nl__im__5);
#line 91
c_rt_lib0clear(&___nl__im__7);
#line 91
//clear ___nl__bool__8;
#line 91
//clear ___nl__bool__16;
#line 91
return ___nl__im__20;
#line 91
goto label_6;
#line 91
label_7:
;
#line 91
label_6:
;
#line 91
//clear ___nl__bool__16;
#line 91
c_rt_lib0clear(&___nl__im__20);
#line 92
c_rt_lib0move(&___nl__im__7,___get_global_const(354));
#line 93
goto label_4;
#line 93
label_5:
;
#line 93
label_4:
;
#line 93
//clear ___nl__bool__8;
#line 94
___nl__bool__21 = false;
#line 95
___nl__int__23 = 0;
#line 95
___nl__int__24 = 1;
#line 95
___nl__int__25 = c_rt_lib0array_len(___nl__im__5);
#line 95
label_10:
;
#line 95
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 95
___nl__bool__26 = ___nl__int__27;
#line 95
if(___nl__bool__26){ goto label_8;}
#line 95
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__5, ___nl__int__23));
#line 95
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 96
c_rt_lib0move(&___nl__im__30, string_utils0is_int(___nl__im__22));
#line 96
___nl__bool__29 = c_rt_lib0check_true_native(___nl__im__30);
#line 96
c_rt_lib0clear(&___nl__im__30);
#line 96
___nl__bool__29 = !___nl__bool__29;
#line 96
___nl__bool__29 = !___nl__bool__29;
#line 96
if(___nl__bool__29){ goto label_12;}
#line 97
c_rt_lib0move(&___nl__im__33,___get_global_const(111));
#line 97
___nl__bool__31 = c_rt_lib0eq(___nl__im__22, ___nl__im__33);
#line 97
c_rt_lib0clear(&___nl__im__33);
#line 97
___nl__bool__32 = !___nl__bool__31;
#line 97
if(___nl__bool__32){ goto label_15;}
#line 97
___nl__bool__31 = ___nl__bool__21;
#line 97
___nl__bool__31 = !___nl__bool__31;
#line 97
label_15:
;
#line 97
//clear ___nl__bool__32;
#line 97
___nl__bool__31 = !___nl__bool__31;
#line 97
if(___nl__bool__31){ goto label_14;}
#line 98
___nl__bool__21 = true;
#line 99
goto label_13;
#line 99
label_14:
;
#line 100
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 100
c_rt_lib0clear(&___nl__im__0);
#line 100
c_rt_lib0clear(&___nl__im__5);
#line 100
c_rt_lib0clear(&___nl__im__7);
#line 100
//clear ___nl__bool__21;
#line 100
c_rt_lib0clear(&___nl__im__22);
#line 100
//clear ___nl__int__23;
#line 100
//clear ___nl__int__24;
#line 100
//clear ___nl__int__25;
#line 100
//clear ___nl__bool__26;
#line 100
//clear ___nl__int__27;
#line 100
c_rt_lib0clear(&___nl__im__28);
#line 100
//clear ___nl__bool__29;
#line 100
//clear ___nl__bool__31;
#line 100
return ___nl__im__34;
#line 101
goto label_13;
#line 101
label_13:
;
#line 101
//clear ___nl__bool__31;
#line 101
c_rt_lib0clear(&___nl__im__34);
#line 102
goto label_11;
#line 102
label_12:
;
#line 102
label_11:
;
#line 102
//clear ___nl__bool__29;
#line 103
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__22));
#line 103
c_rt_lib0clear(&___nl__im__22);
#line 104
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 104
goto label_10;
#line 104
label_8:
;
#line 105
c_rt_lib0move(&___nl__im__36,___get_global_const(111));
#line 105
___nl__bool__35 = c_rt_lib0eq(___nl__im__7, ___nl__im__36);
#line 105
c_rt_lib0clear(&___nl__im__36);
#line 105
___nl__bool__35 = !___nl__bool__35;
#line 105
if(___nl__bool__35){ goto label_17;}
#line 105
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 105
c_rt_lib0clear(&___nl__im__0);
#line 105
c_rt_lib0clear(&___nl__im__5);
#line 105
c_rt_lib0clear(&___nl__im__7);
#line 105
//clear ___nl__bool__21;
#line 105
c_rt_lib0clear(&___nl__im__22);
#line 105
//clear ___nl__int__23;
#line 105
//clear ___nl__int__24;
#line 105
//clear ___nl__int__25;
#line 105
//clear ___nl__bool__26;
#line 105
//clear ___nl__int__27;
#line 105
c_rt_lib0clear(&___nl__im__28);
#line 105
//clear ___nl__bool__35;
#line 105
return ___nl__im__37;
#line 105
goto label_16;
#line 105
label_17:
;
#line 105
label_16:
;
#line 105
//clear ___nl__bool__35;
#line 105
c_rt_lib0clear(&___nl__im__37);
#line 106
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 106
c_rt_lib0clear(&___nl__im__0);
#line 106
c_rt_lib0clear(&___nl__im__5);
#line 106
c_rt_lib0clear(&___nl__im__7);
#line 106
//clear ___nl__bool__21;
#line 106
c_rt_lib0clear(&___nl__im__22);
#line 106
//clear ___nl__int__23;
#line 106
//clear ___nl__int__24;
#line 106
//clear ___nl__int__25;
#line 106
//clear ___nl__bool__26;
#line 106
//clear ___nl__int__27;
#line 106
c_rt_lib0clear(&___nl__im__28);
#line 106
return ___nl__im__38;
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
#line 110
label_2:
;
#line 110
___nl__int__4 = c_rt_lib0array_len(___nl__im__0);
#line 110
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 110
___nl__int__6 = ___nl__int__5 < ___nl__int__4;
#line 110
___nl__bool__2 = ___nl__int__6;
#line 110
//clear ___nl__int__4;
#line 110
//clear ___nl__int__5;
#line 110
//clear ___nl__int__6;
#line 110
___nl__bool__3 = !___nl__bool__2;
#line 110
if(___nl__bool__3){ goto label_3;}
#line 110
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 110
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 110
//clear ___nl__int__8;
#line 110
c_rt_lib0move(&___nl__im__9, string_utils0is_whitespace(___nl__im__7));
#line 110
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__9);
#line 110
c_rt_lib0clear(&___nl__im__7);
#line 110
c_rt_lib0clear(&___nl__im__9);
#line 110
label_3:
;
#line 110
//clear ___nl__bool__3;
#line 110
___nl__bool__2 = !___nl__bool__2;
#line 110
if(___nl__bool__2){ goto label_1;}
#line 110
___nl__int__10 = 1;
#line 110
___nl__int__11 = getIntFromImm((*___ref___im__1));
#line 110
___nl__int__12 = ___nl__int__11 + ___nl__int__10;
#line 110
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__12));
#line 110
//clear ___nl__int__10;
#line 110
//clear ___nl__int__11;
#line 110
//clear ___nl__int__12;
#line 110
goto label_2;
#line 110
label_1:
;
#line 111
___nl__int__14 = c_rt_lib0array_len(___nl__im__0);
#line 111
___nl__int__15 = getIntFromImm((*___ref___im__1));
#line 111
___nl__int__16 = ___nl__int__15 == ___nl__int__14;
#line 111
___nl__bool__13 = ___nl__int__16;
#line 111
//clear ___nl__int__14;
#line 111
//clear ___nl__int__15;
#line 111
//clear ___nl__int__16;
#line 111
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
//clear ___nl__bool__2;
#line 111
//clear ___nl__bool__13;
#line 111
return ___nl__im__17;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
//clear ___nl__bool__2;
#line 111
//clear ___nl__bool__13;
#line 111
c_rt_lib0clear(&___nl__im__17);
#line 111
return NULL;
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
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 115
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 116
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 116
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 116
//clear ___nl__int__5;
#line 116
c_rt_lib0move(&___nl__im__6,___get_global_const(354));
#line 116
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__6);
#line 116
c_rt_lib0clear(&___nl__im__4);
#line 116
c_rt_lib0clear(&___nl__im__6);
#line 116
___nl__bool__3 = !___nl__bool__3;
#line 116
if(___nl__bool__3){ goto label_2;}
#line 117
___nl__int__7 = 1;
#line 117
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 117
___nl__int__9 = ___nl__int__8 + ___nl__int__7;
#line 117
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__9));
#line 117
//clear ___nl__int__7;
#line 117
//clear ___nl__int__8;
#line 117
//clear ___nl__int__9;
#line 118
c_rt_lib0move(&___nl__im__2,___get_global_const(354));
#line 119
goto label_1;
#line 119
label_2:
;
#line 119
label_1:
;
#line 119
//clear ___nl__bool__3;
#line 120
___nl__bool__10 = false;
#line 121
label_4:
;
#line 121
___nl__int__12 = c_rt_lib0array_len(___nl__im__0);
#line 121
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 121
___nl__int__14 = ___nl__int__13 < ___nl__int__12;
#line 121
___nl__bool__11 = ___nl__int__14;
#line 121
//clear ___nl__int__12;
#line 121
//clear ___nl__int__13;
#line 121
//clear ___nl__int__14;
#line 121
___nl__bool__11 = !___nl__bool__11;
#line 121
if(___nl__bool__11){ goto label_3;}
#line 122
___nl__int__16 = getIntFromImm((*___ref___im__1));
#line 122
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 122
//clear ___nl__int__16;
#line 123
c_rt_lib0move(&___nl__im__18, string_utils0is_int(___nl__im__15));
#line 123
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 123
c_rt_lib0clear(&___nl__im__18);
#line 123
___nl__bool__17 = !___nl__bool__17;
#line 123
___nl__bool__17 = !___nl__bool__17;
#line 123
if(___nl__bool__17){ goto label_6;}
#line 124
c_rt_lib0move(&___nl__im__20,___get_global_const(111));
#line 124
___nl__bool__19 = c_rt_lib0ne(___nl__im__15, ___nl__im__20);
#line 124
c_rt_lib0clear(&___nl__im__20);
#line 124
if(___nl__bool__19){ goto label_9;}
#line 124
___nl__bool__19 = ___nl__bool__10;
#line 124
label_9:
;
#line 124
___nl__bool__19 = !___nl__bool__19;
#line 124
if(___nl__bool__19){ goto label_8;}
#line 124
goto label_3;
#line 124
goto label_7;
#line 124
label_8:
;
#line 124
label_7:
;
#line 124
//clear ___nl__bool__19;
#line 125
___nl__bool__10 = true;
#line 126
goto label_5;
#line 126
label_6:
;
#line 126
label_5:
;
#line 126
//clear ___nl__bool__17;
#line 127
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 128
___nl__int__21 = 1;
#line 128
___nl__int__22 = getIntFromImm((*___ref___im__1));
#line 128
___nl__int__23 = ___nl__int__22 + ___nl__int__21;
#line 128
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__23));
#line 128
//clear ___nl__int__21;
#line 128
//clear ___nl__int__22;
#line 128
//clear ___nl__int__23;
#line 128
c_rt_lib0clear(&___nl__im__15);
#line 129
goto label_4;
#line 129
label_3:
;
#line 130
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 130
___nl__bool__24 = c_rt_lib0eq(___nl__im__2, ___nl__im__25);
#line 130
c_rt_lib0clear(&___nl__im__25);
#line 130
if(___nl__bool__24){ goto label_12;}
#line 130
c_rt_lib0move(&___nl__im__26,___get_global_const(354));
#line 130
___nl__bool__24 = c_rt_lib0eq(___nl__im__2, ___nl__im__26);
#line 130
c_rt_lib0clear(&___nl__im__26);
#line 130
label_12:
;
#line 130
___nl__bool__24 = !___nl__bool__24;
#line 130
if(___nl__bool__24){ goto label_11;}
#line 130
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 130
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__28));
#line 130
c_rt_lib0clear(&___nl__im__28);
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
//clear ___nl__bool__24;
#line 130
return ___nl__im__27;
#line 130
goto label_10;
#line 130
label_11:
;
#line 130
label_10:
;
#line 130
//clear ___nl__bool__24;
#line 130
c_rt_lib0clear(&___nl__im__27);
#line 131
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__2));
#line 131
c_rt_lib0clear(&___nl__im__0);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
//clear ___nl__bool__10;
#line 131
//clear ___nl__bool__11;
#line 131
c_rt_lib0clear(&___nl__im__15);
#line 131
return ___nl__im__29;
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
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
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
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
INT  ___nl__int__86 = 0;
ImmT  ___nl__im__87 = NULL;
INT  ___nl__int__88 = 0;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
INT  ___nl__int__94 = 0;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
bool  ___nl__bool__97 = false;
INT  ___nl__int__98 = 0;
INT  ___nl__int__99 = 0;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
INT  ___nl__int__102 = 0;
INT  ___nl__int__103 = 0;
INT  ___nl__int__104 = 0;
ImmT  ___nl__im__105 = NULL;
bool  ___nl__bool__106 = false;
ImmT  ___nl__im__107 = NULL;
INT  ___nl__int__108 = 0;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
INT  ___nl__int__112 = 0;
INT  ___nl__int__113 = 0;
INT  ___nl__int__114 = 0;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
#line 135
c_rt_lib0move(&___nl__im__4, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 135
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
___nl__bool__3 = !___nl__bool__3;
#line 135
if(___nl__bool__3){ goto label_2;}
#line 135
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 135
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__6));
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
//clear ___nl__bool__3;
#line 135
return ___nl__im__5;
#line 135
goto label_1;
#line 135
label_2:
;
#line 135
label_1:
;
#line 135
//clear ___nl__bool__3;
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 137
___nl__int__10 = getIntFromImm((*___ref___im__1));
#line 137
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__10));
#line 137
//clear ___nl__int__10;
#line 137
c_rt_lib0move(&___nl__im__11,___get_global_const(435));
#line 137
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
c_rt_lib0clear(&___nl__im__11);
#line 137
___nl__bool__8 = !___nl__bool__8;
#line 137
if(___nl__bool__8){ goto label_4;}
#line 138
___nl__int__12 = 1;
#line 138
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 138
___nl__int__14 = ___nl__int__13 + ___nl__int__12;
#line 138
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__14));
#line 138
//clear ___nl__int__12;
#line 138
//clear ___nl__int__13;
#line 138
//clear ___nl__int__14;
#line 139
___nl__int__17 = 0;
#line 139
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__17));
#line 139
c_rt_lib0move(&___nl__im__16, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__18));
#line 139
//clear ___nl__int__17;
#line 139
c_rt_lib0clear(&___nl__im__18);
#line 139
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(79));
#line 139
if(___nl__bool__15){ goto label_5;}
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__7);
#line 139
//clear ___nl__bool__8;
#line 139
//clear ___nl__bool__15;
#line 139
return ___nl__im__16;
#line 139
label_5:
;
#line 139
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(79)));
#line 140
c_rt_lib0move(&___nl__im__20, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 140
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__20);
#line 140
c_rt_lib0clear(&___nl__im__20);
#line 140
___nl__bool__19 = !___nl__bool__19;
#line 140
if(___nl__bool__19){ goto label_7;}
#line 140
c_rt_lib0move(&___nl__im__22,___get_global_const(37));
#line 140
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__22));
#line 140
c_rt_lib0clear(&___nl__im__22);
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
c_rt_lib0clear(&___nl__im__2);
#line 140
c_rt_lib0clear(&___nl__im__7);
#line 140
//clear ___nl__bool__8;
#line 140
//clear ___nl__bool__15;
#line 140
c_rt_lib0clear(&___nl__im__16);
#line 140
//clear ___nl__bool__19;
#line 140
return ___nl__im__21;
#line 140
goto label_6;
#line 140
label_7:
;
#line 140
label_6:
;
#line 140
//clear ___nl__bool__19;
#line 140
c_rt_lib0clear(&___nl__im__21);
#line 141
___nl__int__25 = getIntFromImm((*___ref___im__1));
#line 141
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__25));
#line 141
//clear ___nl__int__25;
#line 141
c_rt_lib0move(&___nl__im__26,___get_global_const(315));
#line 141
___nl__bool__23 = c_rt_lib0eq(___nl__im__24, ___nl__im__26);
#line 141
c_rt_lib0clear(&___nl__im__24);
#line 141
c_rt_lib0clear(&___nl__im__26);
#line 141
___nl__bool__23 = !___nl__bool__23;
#line 141
___nl__bool__23 = !___nl__bool__23;
#line 141
if(___nl__bool__23){ goto label_9;}
#line 141
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 141
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__28));
#line 141
c_rt_lib0clear(&___nl__im__28);
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
c_rt_lib0clear(&___nl__im__2);
#line 141
c_rt_lib0clear(&___nl__im__7);
#line 141
//clear ___nl__bool__8;
#line 141
//clear ___nl__bool__15;
#line 141
c_rt_lib0clear(&___nl__im__16);
#line 141
//clear ___nl__bool__23;
#line 141
return ___nl__im__27;
#line 141
goto label_8;
#line 141
label_9:
;
#line 141
label_8:
;
#line 141
//clear ___nl__bool__23;
#line 141
c_rt_lib0clear(&___nl__im__27);
#line 142
___nl__int__29 = 1;
#line 142
___nl__int__30 = getIntFromImm((*___ref___im__1));
#line 142
___nl__int__31 = ___nl__int__30 + ___nl__int__29;
#line 142
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__31));
#line 142
//clear ___nl__int__29;
#line 142
//clear ___nl__int__30;
#line 142
//clear ___nl__int__31;
#line 143
goto label_3;
#line 143
label_4:
;
#line 144
c_rt_lib0move(&___nl__im__33, string_utils_priv0get_number(___nl__im__0, ___ref___im__1));
#line 144
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(79));
#line 144
if(___nl__bool__32){ goto label_10;}
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
//clear ___nl__bool__8;
#line 144
//clear ___nl__bool__15;
#line 144
c_rt_lib0clear(&___nl__im__16);
#line 144
//clear ___nl__bool__32;
#line 144
return ___nl__im__33;
#line 144
label_10:
;
#line 144
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(79)));
#line 145
goto label_3;
#line 145
label_3:
;
#line 145
//clear ___nl__bool__8;
#line 145
//clear ___nl__bool__15;
#line 145
c_rt_lib0clear(&___nl__im__16);
#line 145
//clear ___nl__bool__32;
#line 145
c_rt_lib0clear(&___nl__im__33);
#line 146
label_12:
;
#line 147
c_rt_lib0move(&___nl__im__35, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 147
___nl__bool__34 = c_rt_lib0check_true_native(___nl__im__35);
#line 147
c_rt_lib0clear(&___nl__im__35);
#line 147
___nl__bool__34 = !___nl__bool__34;
#line 147
if(___nl__bool__34){ goto label_14;}
#line 147
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 147
c_rt_lib0clear(&___nl__im__0);
#line 147
c_rt_lib0clear(&___nl__im__2);
#line 147
c_rt_lib0clear(&___nl__im__7);
#line 147
//clear ___nl__bool__34;
#line 147
return ___nl__im__36;
#line 147
goto label_13;
#line 147
label_14:
;
#line 147
label_13:
;
#line 147
//clear ___nl__bool__34;
#line 147
c_rt_lib0clear(&___nl__im__36);
#line 148
___nl__int__38 = getIntFromImm((*___ref___im__1));
#line 148
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__0, ___nl__int__38));
#line 148
//clear ___nl__int__38;
#line 149
c_rt_lib0move(&___nl__im__40,___get_global_const(362));
#line 149
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__40);
#line 149
c_rt_lib0clear(&___nl__im__40);
#line 149
___nl__bool__39 = !___nl__bool__39;
#line 149
if(___nl__bool__39){ goto label_16;}
#line 150
___nl__int__42 = 5;
#line 150
___nl__int__43 = getIntFromImm(___nl__im__2);
#line 150
___nl__int__44 = ___nl__int__43 >= ___nl__int__42;
#line 150
___nl__bool__41 = ___nl__int__44;
#line 150
//clear ___nl__int__42;
#line 150
//clear ___nl__int__43;
#line 150
//clear ___nl__int__44;
#line 150
___nl__bool__41 = !___nl__bool__41;
#line 150
if(___nl__bool__41){ goto label_18;}
#line 150
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
c_rt_lib0clear(&___nl__im__2);
#line 150
c_rt_lib0clear(&___nl__im__7);
#line 150
c_rt_lib0clear(&___nl__im__37);
#line 150
//clear ___nl__bool__39;
#line 150
//clear ___nl__bool__41;
#line 150
return ___nl__im__45;
#line 150
goto label_17;
#line 150
label_18:
;
#line 150
label_17:
;
#line 150
//clear ___nl__bool__41;
#line 150
c_rt_lib0clear(&___nl__im__45);
#line 151
___nl__int__46 = 1;
#line 151
___nl__int__47 = getIntFromImm((*___ref___im__1));
#line 151
___nl__int__48 = ___nl__int__47 + ___nl__int__46;
#line 151
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__48));
#line 151
//clear ___nl__int__46;
#line 151
//clear ___nl__int__47;
#line 151
//clear ___nl__int__48;
#line 152
___nl__int__52 = 5;
#line 152
c_rt_lib0move(&___nl__im__53, c_rt_lib0int_new(___nl__int__52));
#line 152
c_rt_lib0move(&___nl__im__51, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__53));
#line 152
//clear ___nl__int__52;
#line 152
c_rt_lib0clear(&___nl__im__53);
#line 152
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(79));
#line 152
if(___nl__bool__50){ goto label_19;}
#line 152
c_rt_lib0clear(&___nl__im__0);
#line 152
c_rt_lib0clear(&___nl__im__2);
#line 152
c_rt_lib0clear(&___nl__im__7);
#line 152
c_rt_lib0clear(&___nl__im__37);
#line 152
//clear ___nl__bool__39;
#line 152
c_rt_lib0clear(&___nl__im__49);
#line 152
//clear ___nl__bool__50;
#line 152
return ___nl__im__51;
#line 152
label_19:
;
#line 152
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(79)));
#line 153
c_rt_lib0move(&___nl__im__7, float0mul(___nl__im__7, ___nl__im__49));
#line 154
goto label_15;
#line 154
label_16:
;
#line 154
c_rt_lib0move(&___nl__im__54,___get_global_const(106));
#line 154
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__54);
#line 154
c_rt_lib0clear(&___nl__im__54);
#line 154
___nl__bool__39 = !___nl__bool__39;
#line 154
if(___nl__bool__39){ goto label_20;}
#line 155
___nl__int__56 = 5;
#line 155
___nl__int__57 = getIntFromImm(___nl__im__2);
#line 155
___nl__int__58 = ___nl__int__57 >= ___nl__int__56;
#line 155
___nl__bool__55 = ___nl__int__58;
#line 155
//clear ___nl__int__56;
#line 155
//clear ___nl__int__57;
#line 155
//clear ___nl__int__58;
#line 155
___nl__bool__55 = !___nl__bool__55;
#line 155
if(___nl__bool__55){ goto label_22;}
#line 155
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0clear(&___nl__im__7);
#line 155
c_rt_lib0clear(&___nl__im__37);
#line 155
//clear ___nl__bool__39;
#line 155
c_rt_lib0clear(&___nl__im__49);
#line 155
//clear ___nl__bool__50;
#line 155
c_rt_lib0clear(&___nl__im__51);
#line 155
//clear ___nl__bool__55;
#line 155
return ___nl__im__59;
#line 155
goto label_21;
#line 155
label_22:
;
#line 155
label_21:
;
#line 155
//clear ___nl__bool__55;
#line 155
c_rt_lib0clear(&___nl__im__59);
#line 156
___nl__int__60 = 1;
#line 156
___nl__int__61 = getIntFromImm((*___ref___im__1));
#line 156
___nl__int__62 = ___nl__int__61 + ___nl__int__60;
#line 156
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__62));
#line 156
//clear ___nl__int__60;
#line 156
//clear ___nl__int__61;
#line 156
//clear ___nl__int__62;
#line 157
___nl__int__66 = 5;
#line 157
c_rt_lib0move(&___nl__im__67, c_rt_lib0int_new(___nl__int__66));
#line 157
c_rt_lib0move(&___nl__im__65, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__67));
#line 157
//clear ___nl__int__66;
#line 157
c_rt_lib0clear(&___nl__im__67);
#line 157
___nl__bool__64 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(79));
#line 157
if(___nl__bool__64){ goto label_23;}
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
c_rt_lib0clear(&___nl__im__7);
#line 157
c_rt_lib0clear(&___nl__im__37);
#line 157
//clear ___nl__bool__39;
#line 157
c_rt_lib0clear(&___nl__im__49);
#line 157
//clear ___nl__bool__50;
#line 157
c_rt_lib0clear(&___nl__im__51);
#line 157
c_rt_lib0clear(&___nl__im__63);
#line 157
//clear ___nl__bool__64;
#line 157
return ___nl__im__65;
#line 157
label_23:
;
#line 157
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__65, ___get_global_const(79)));
#line 158
c_rt_lib0move(&___nl__im__7, float0div(___nl__im__7, ___nl__im__63));
#line 159
goto label_15;
#line 159
label_20:
;
#line 159
c_rt_lib0move(&___nl__im__68,___get_global_const(365));
#line 159
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__68);
#line 159
c_rt_lib0clear(&___nl__im__68);
#line 159
___nl__bool__39 = !___nl__bool__39;
#line 159
if(___nl__bool__39){ goto label_24;}
#line 160
___nl__int__70 = 5;
#line 160
___nl__int__71 = getIntFromImm(___nl__im__2);
#line 160
___nl__int__72 = ___nl__int__71 >= ___nl__int__70;
#line 160
___nl__bool__69 = ___nl__int__72;
#line 160
//clear ___nl__int__70;
#line 160
//clear ___nl__int__71;
#line 160
//clear ___nl__int__72;
#line 160
___nl__bool__69 = !___nl__bool__69;
#line 160
if(___nl__bool__69){ goto label_26;}
#line 160
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 160
c_rt_lib0clear(&___nl__im__0);
#line 160
c_rt_lib0clear(&___nl__im__2);
#line 160
c_rt_lib0clear(&___nl__im__7);
#line 160
c_rt_lib0clear(&___nl__im__37);
#line 160
//clear ___nl__bool__39;
#line 160
c_rt_lib0clear(&___nl__im__49);
#line 160
//clear ___nl__bool__50;
#line 160
c_rt_lib0clear(&___nl__im__51);
#line 160
c_rt_lib0clear(&___nl__im__63);
#line 160
//clear ___nl__bool__64;
#line 160
c_rt_lib0clear(&___nl__im__65);
#line 160
//clear ___nl__bool__69;
#line 160
return ___nl__im__73;
#line 160
goto label_25;
#line 160
label_26:
;
#line 160
label_25:
;
#line 160
//clear ___nl__bool__69;
#line 160
c_rt_lib0clear(&___nl__im__73);
#line 161
___nl__int__74 = 1;
#line 161
___nl__int__75 = getIntFromImm((*___ref___im__1));
#line 161
___nl__int__76 = ___nl__int__75 + ___nl__int__74;
#line 161
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__76));
#line 161
//clear ___nl__int__74;
#line 161
//clear ___nl__int__75;
#line 161
//clear ___nl__int__76;
#line 162
___nl__int__80 = 5;
#line 162
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__80));
#line 162
c_rt_lib0move(&___nl__im__79, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__81));
#line 162
//clear ___nl__int__80;
#line 162
c_rt_lib0clear(&___nl__im__81);
#line 162
___nl__bool__78 = c_rt_lib0priv_is(___nl__im__79, ___get_global_const(79));
#line 162
if(___nl__bool__78){ goto label_27;}
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 162
c_rt_lib0clear(&___nl__im__7);
#line 162
c_rt_lib0clear(&___nl__im__37);
#line 162
//clear ___nl__bool__39;
#line 162
c_rt_lib0clear(&___nl__im__49);
#line 162
//clear ___nl__bool__50;
#line 162
c_rt_lib0clear(&___nl__im__51);
#line 162
c_rt_lib0clear(&___nl__im__63);
#line 162
//clear ___nl__bool__64;
#line 162
c_rt_lib0clear(&___nl__im__65);
#line 162
c_rt_lib0clear(&___nl__im__77);
#line 162
//clear ___nl__bool__78;
#line 162
return ___nl__im__79;
#line 162
label_27:
;
#line 162
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__79, ___get_global_const(79)));
#line 163
c_rt_lib0move(&___nl__im__7, float0mod(___nl__im__7, ___nl__im__77));
#line 164
goto label_15;
#line 164
label_24:
;
#line 164
c_rt_lib0move(&___nl__im__82,___get_global_const(356));
#line 164
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__82);
#line 164
c_rt_lib0clear(&___nl__im__82);
#line 164
___nl__bool__39 = !___nl__bool__39;
#line 164
if(___nl__bool__39){ goto label_28;}
#line 165
___nl__int__84 = 2;
#line 165
___nl__int__85 = getIntFromImm(___nl__im__2);
#line 165
___nl__int__86 = ___nl__int__85 >= ___nl__int__84;
#line 165
___nl__bool__83 = ___nl__int__86;
#line 165
//clear ___nl__int__84;
#line 165
//clear ___nl__int__85;
#line 165
//clear ___nl__int__86;
#line 165
___nl__bool__83 = !___nl__bool__83;
#line 165
if(___nl__bool__83){ goto label_30;}
#line 165
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
c_rt_lib0clear(&___nl__im__2);
#line 165
c_rt_lib0clear(&___nl__im__7);
#line 165
c_rt_lib0clear(&___nl__im__37);
#line 165
//clear ___nl__bool__39;
#line 165
c_rt_lib0clear(&___nl__im__49);
#line 165
//clear ___nl__bool__50;
#line 165
c_rt_lib0clear(&___nl__im__51);
#line 165
c_rt_lib0clear(&___nl__im__63);
#line 165
//clear ___nl__bool__64;
#line 165
c_rt_lib0clear(&___nl__im__65);
#line 165
c_rt_lib0clear(&___nl__im__77);
#line 165
//clear ___nl__bool__78;
#line 165
c_rt_lib0clear(&___nl__im__79);
#line 165
//clear ___nl__bool__83;
#line 165
return ___nl__im__87;
#line 165
goto label_29;
#line 165
label_30:
;
#line 165
label_29:
;
#line 165
//clear ___nl__bool__83;
#line 165
c_rt_lib0clear(&___nl__im__87);
#line 166
___nl__int__88 = 1;
#line 166
___nl__int__89 = getIntFromImm((*___ref___im__1));
#line 166
___nl__int__90 = ___nl__int__89 + ___nl__int__88;
#line 166
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__90));
#line 166
//clear ___nl__int__88;
#line 166
//clear ___nl__int__89;
#line 166
//clear ___nl__int__90;
#line 167
___nl__int__94 = 2;
#line 167
c_rt_lib0move(&___nl__im__95, c_rt_lib0int_new(___nl__int__94));
#line 167
c_rt_lib0move(&___nl__im__93, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__95));
#line 167
//clear ___nl__int__94;
#line 167
c_rt_lib0clear(&___nl__im__95);
#line 167
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__93, ___get_global_const(79));
#line 167
if(___nl__bool__92){ goto label_31;}
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
c_rt_lib0clear(&___nl__im__2);
#line 167
c_rt_lib0clear(&___nl__im__7);
#line 167
c_rt_lib0clear(&___nl__im__37);
#line 167
//clear ___nl__bool__39;
#line 167
c_rt_lib0clear(&___nl__im__49);
#line 167
//clear ___nl__bool__50;
#line 167
c_rt_lib0clear(&___nl__im__51);
#line 167
c_rt_lib0clear(&___nl__im__63);
#line 167
//clear ___nl__bool__64;
#line 167
c_rt_lib0clear(&___nl__im__65);
#line 167
c_rt_lib0clear(&___nl__im__77);
#line 167
//clear ___nl__bool__78;
#line 167
c_rt_lib0clear(&___nl__im__79);
#line 167
c_rt_lib0clear(&___nl__im__91);
#line 167
//clear ___nl__bool__92;
#line 167
return ___nl__im__93;
#line 167
label_31:
;
#line 167
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__93, ___get_global_const(79)));
#line 168
c_rt_lib0move(&___nl__im__7, float0add(___nl__im__7, ___nl__im__91));
#line 169
goto label_15;
#line 169
label_28:
;
#line 169
c_rt_lib0move(&___nl__im__96,___get_global_const(354));
#line 169
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__96);
#line 169
c_rt_lib0clear(&___nl__im__96);
#line 169
___nl__bool__39 = !___nl__bool__39;
#line 169
if(___nl__bool__39){ goto label_32;}
#line 170
___nl__int__98 = 2;
#line 170
___nl__int__99 = getIntFromImm(___nl__im__2);
#line 170
___nl__int__100 = ___nl__int__99 >= ___nl__int__98;
#line 170
___nl__bool__97 = ___nl__int__100;
#line 170
//clear ___nl__int__98;
#line 170
//clear ___nl__int__99;
#line 170
//clear ___nl__int__100;
#line 170
___nl__bool__97 = !___nl__bool__97;
#line 170
if(___nl__bool__97){ goto label_34;}
#line 170
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 170
c_rt_lib0clear(&___nl__im__0);
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
c_rt_lib0clear(&___nl__im__7);
#line 170
c_rt_lib0clear(&___nl__im__37);
#line 170
//clear ___nl__bool__39;
#line 170
c_rt_lib0clear(&___nl__im__49);
#line 170
//clear ___nl__bool__50;
#line 170
c_rt_lib0clear(&___nl__im__51);
#line 170
c_rt_lib0clear(&___nl__im__63);
#line 170
//clear ___nl__bool__64;
#line 170
c_rt_lib0clear(&___nl__im__65);
#line 170
c_rt_lib0clear(&___nl__im__77);
#line 170
//clear ___nl__bool__78;
#line 170
c_rt_lib0clear(&___nl__im__79);
#line 170
c_rt_lib0clear(&___nl__im__91);
#line 170
//clear ___nl__bool__92;
#line 170
c_rt_lib0clear(&___nl__im__93);
#line 170
//clear ___nl__bool__97;
#line 170
return ___nl__im__101;
#line 170
goto label_33;
#line 170
label_34:
;
#line 170
label_33:
;
#line 170
//clear ___nl__bool__97;
#line 170
c_rt_lib0clear(&___nl__im__101);
#line 171
___nl__int__102 = 1;
#line 171
___nl__int__103 = getIntFromImm((*___ref___im__1));
#line 171
___nl__int__104 = ___nl__int__103 + ___nl__int__102;
#line 171
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__104));
#line 171
//clear ___nl__int__102;
#line 171
//clear ___nl__int__103;
#line 171
//clear ___nl__int__104;
#line 172
___nl__int__108 = 2;
#line 172
c_rt_lib0move(&___nl__im__109, c_rt_lib0int_new(___nl__int__108));
#line 172
c_rt_lib0move(&___nl__im__107, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__109));
#line 172
//clear ___nl__int__108;
#line 172
c_rt_lib0clear(&___nl__im__109);
#line 172
___nl__bool__106 = c_rt_lib0priv_is(___nl__im__107, ___get_global_const(79));
#line 172
if(___nl__bool__106){ goto label_35;}
#line 172
c_rt_lib0clear(&___nl__im__0);
#line 172
c_rt_lib0clear(&___nl__im__2);
#line 172
c_rt_lib0clear(&___nl__im__7);
#line 172
c_rt_lib0clear(&___nl__im__37);
#line 172
//clear ___nl__bool__39;
#line 172
c_rt_lib0clear(&___nl__im__49);
#line 172
//clear ___nl__bool__50;
#line 172
c_rt_lib0clear(&___nl__im__51);
#line 172
c_rt_lib0clear(&___nl__im__63);
#line 172
//clear ___nl__bool__64;
#line 172
c_rt_lib0clear(&___nl__im__65);
#line 172
c_rt_lib0clear(&___nl__im__77);
#line 172
//clear ___nl__bool__78;
#line 172
c_rt_lib0clear(&___nl__im__79);
#line 172
c_rt_lib0clear(&___nl__im__91);
#line 172
//clear ___nl__bool__92;
#line 172
c_rt_lib0clear(&___nl__im__93);
#line 172
c_rt_lib0clear(&___nl__im__105);
#line 172
//clear ___nl__bool__106;
#line 172
return ___nl__im__107;
#line 172
label_35:
;
#line 172
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__107, ___get_global_const(79)));
#line 173
c_rt_lib0move(&___nl__im__7, float0sub(___nl__im__7, ___nl__im__105));
#line 174
goto label_15;
#line 174
label_32:
;
#line 174
c_rt_lib0move(&___nl__im__110,___get_global_const(315));
#line 174
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__110);
#line 174
c_rt_lib0clear(&___nl__im__110);
#line 174
___nl__bool__39 = !___nl__bool__39;
#line 174
if(___nl__bool__39){ goto label_36;}
#line 175
___nl__int__112 = 0;
#line 175
___nl__int__113 = getIntFromImm(___nl__im__2);
#line 175
___nl__int__114 = ___nl__int__113 < ___nl__int__112;
#line 175
___nl__bool__111 = ___nl__int__114;
#line 175
//clear ___nl__int__112;
#line 175
//clear ___nl__int__113;
#line 175
//clear ___nl__int__114;
#line 175
___nl__bool__111 = !___nl__bool__111;
#line 175
if(___nl__bool__111){ goto label_38;}
#line 175
c_rt_lib0move(&___nl__im__116,___get_global_const(37));
#line 175
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__116));
#line 175
c_rt_lib0clear(&___nl__im__116);
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
c_rt_lib0clear(&___nl__im__2);
#line 175
c_rt_lib0clear(&___nl__im__7);
#line 175
c_rt_lib0clear(&___nl__im__37);
#line 175
//clear ___nl__bool__39;
#line 175
c_rt_lib0clear(&___nl__im__49);
#line 175
//clear ___nl__bool__50;
#line 175
c_rt_lib0clear(&___nl__im__51);
#line 175
c_rt_lib0clear(&___nl__im__63);
#line 175
//clear ___nl__bool__64;
#line 175
c_rt_lib0clear(&___nl__im__65);
#line 175
c_rt_lib0clear(&___nl__im__77);
#line 175
//clear ___nl__bool__78;
#line 175
c_rt_lib0clear(&___nl__im__79);
#line 175
c_rt_lib0clear(&___nl__im__91);
#line 175
//clear ___nl__bool__92;
#line 175
c_rt_lib0clear(&___nl__im__93);
#line 175
c_rt_lib0clear(&___nl__im__105);
#line 175
//clear ___nl__bool__106;
#line 175
c_rt_lib0clear(&___nl__im__107);
#line 175
//clear ___nl__bool__111;
#line 175
return ___nl__im__115;
#line 175
goto label_37;
#line 175
label_38:
;
#line 175
label_37:
;
#line 175
//clear ___nl__bool__111;
#line 175
c_rt_lib0clear(&___nl__im__115);
#line 176
c_rt_lib0move(&___nl__im__117, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 176
c_rt_lib0clear(&___nl__im__0);
#line 176
c_rt_lib0clear(&___nl__im__2);
#line 176
c_rt_lib0clear(&___nl__im__7);
#line 176
c_rt_lib0clear(&___nl__im__37);
#line 176
//clear ___nl__bool__39;
#line 176
c_rt_lib0clear(&___nl__im__49);
#line 176
//clear ___nl__bool__50;
#line 176
c_rt_lib0clear(&___nl__im__51);
#line 176
c_rt_lib0clear(&___nl__im__63);
#line 176
//clear ___nl__bool__64;
#line 176
c_rt_lib0clear(&___nl__im__65);
#line 176
c_rt_lib0clear(&___nl__im__77);
#line 176
//clear ___nl__bool__78;
#line 176
c_rt_lib0clear(&___nl__im__79);
#line 176
c_rt_lib0clear(&___nl__im__91);
#line 176
//clear ___nl__bool__92;
#line 176
c_rt_lib0clear(&___nl__im__93);
#line 176
c_rt_lib0clear(&___nl__im__105);
#line 176
//clear ___nl__bool__106;
#line 176
c_rt_lib0clear(&___nl__im__107);
#line 176
return ___nl__im__117;
#line 177
goto label_15;
#line 177
label_36:
;
#line 178
c_rt_lib0move(&___nl__im__119,___get_global_const(37));
#line 178
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__119));
#line 178
c_rt_lib0clear(&___nl__im__119);
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
c_rt_lib0clear(&___nl__im__2);
#line 178
c_rt_lib0clear(&___nl__im__7);
#line 178
c_rt_lib0clear(&___nl__im__37);
#line 178
//clear ___nl__bool__39;
#line 178
c_rt_lib0clear(&___nl__im__49);
#line 178
//clear ___nl__bool__50;
#line 178
c_rt_lib0clear(&___nl__im__51);
#line 178
c_rt_lib0clear(&___nl__im__63);
#line 178
//clear ___nl__bool__64;
#line 178
c_rt_lib0clear(&___nl__im__65);
#line 178
c_rt_lib0clear(&___nl__im__77);
#line 178
//clear ___nl__bool__78;
#line 178
c_rt_lib0clear(&___nl__im__79);
#line 178
c_rt_lib0clear(&___nl__im__91);
#line 178
//clear ___nl__bool__92;
#line 178
c_rt_lib0clear(&___nl__im__93);
#line 178
c_rt_lib0clear(&___nl__im__105);
#line 178
//clear ___nl__bool__106;
#line 178
c_rt_lib0clear(&___nl__im__107);
#line 178
c_rt_lib0clear(&___nl__im__117);
#line 178
return ___nl__im__118;
#line 179
goto label_15;
#line 179
label_15:
;
#line 179
//clear ___nl__bool__39;
#line 179
c_rt_lib0clear(&___nl__im__49);
#line 179
//clear ___nl__bool__50;
#line 179
c_rt_lib0clear(&___nl__im__51);
#line 179
c_rt_lib0clear(&___nl__im__63);
#line 179
//clear ___nl__bool__64;
#line 179
c_rt_lib0clear(&___nl__im__65);
#line 179
c_rt_lib0clear(&___nl__im__77);
#line 179
//clear ___nl__bool__78;
#line 179
c_rt_lib0clear(&___nl__im__79);
#line 179
c_rt_lib0clear(&___nl__im__91);
#line 179
//clear ___nl__bool__92;
#line 179
c_rt_lib0clear(&___nl__im__93);
#line 179
c_rt_lib0clear(&___nl__im__105);
#line 179
//clear ___nl__bool__106;
#line 179
c_rt_lib0clear(&___nl__im__107);
#line 179
c_rt_lib0clear(&___nl__im__117);
#line 179
c_rt_lib0clear(&___nl__im__118);
#line 179
c_rt_lib0clear(&___nl__im__37);
#line 146
goto label_12;
#line 181
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(0));
#line 181
nl_die_arg(___nl__im__120);
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
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
#line 185
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 185
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 185
c_rt_lib0clear(&___nl__im__2);
#line 185
___nl__bool__1 = !___nl__bool__1;
#line 185
if(___nl__bool__1){ goto label_2;}
#line 185
//clear ___nl__bool__1;
#line 185
return ___nl__im__0;
#line 185
goto label_1;
#line 185
label_2:
;
#line 185
label_1:
;
#line 185
//clear ___nl__bool__1;
#line 186
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 186
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__4, ___nl__im__0));
#line 186
c_rt_lib0clear(&___nl__im__4);
#line 187
___nl__int__7 = 0;
#line 187
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_get(___nl__im__3, ___nl__int__7));
#line 187
//clear ___nl__int__7;
#line 187
c_rt_lib0move(&___nl__im__8,___get_global_const(992));
#line 187
___nl__bool__5 = c_rt_lib0ne(___nl__im__6, ___nl__im__8);
#line 187
c_rt_lib0clear(&___nl__im__6);
#line 187
c_rt_lib0clear(&___nl__im__8);
#line 187
___nl__bool__5 = !___nl__bool__5;
#line 187
if(___nl__bool__5){ goto label_4;}
#line 187
c_rt_lib0clear(&___nl__im__3);
#line 187
//clear ___nl__bool__5;
#line 187
return ___nl__im__0;
#line 187
goto label_3;
#line 187
label_4:
;
#line 187
label_3:
;
#line 187
//clear ___nl__bool__5;
#line 188
___nl__int__9 = 1;
#line 188
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 188
___nl__int__12 = 1;
#line 188
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 188
//clear ___nl__int__11;
#line 188
//clear ___nl__int__12;
#line 188
c_rt_lib0move(&___nl__im__3, array0subarray(___nl__im__3, ___nl__int__9, ___nl__int__10));
#line 188
//clear ___nl__int__9;
#line 188
//clear ___nl__int__10;
#line 189
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 190
___nl__int__15 = 0;
#line 190
___nl__int__16 = 1;
#line 190
___nl__int__17 = c_rt_lib0array_len(___nl__im__3);
#line 190
label_7:
;
#line 190
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 190
___nl__bool__18 = ___nl__int__19;
#line 190
if(___nl__bool__18){ goto label_5;}
#line 190
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__3, ___nl__int__15));
#line 190
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 193
c_rt_lib0move(&___nl__im__22, string_utils0is_int(___nl__im__14));
#line 193
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__22);
#line 193
c_rt_lib0clear(&___nl__im__22);
#line 193
if(___nl__bool__21){ goto label_16;}
#line 193
c_rt_lib0move(&___nl__im__23,___get_global_const(354));
#line 193
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__23);
#line 193
c_rt_lib0clear(&___nl__im__23);
#line 193
label_16:
;
#line 193
if(___nl__bool__21){ goto label_15;}
#line 193
c_rt_lib0move(&___nl__im__24,___get_global_const(111));
#line 193
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__24);
#line 193
c_rt_lib0clear(&___nl__im__24);
#line 193
label_15:
;
#line 193
if(___nl__bool__21){ goto label_14;}
#line 193
c_rt_lib0move(&___nl__im__25,___get_global_const(356));
#line 193
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__25);
#line 193
c_rt_lib0clear(&___nl__im__25);
#line 193
label_14:
;
#line 193
if(___nl__bool__21){ goto label_13;}
#line 193
c_rt_lib0move(&___nl__im__26,___get_global_const(106));
#line 193
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__26);
#line 193
c_rt_lib0clear(&___nl__im__26);
#line 193
label_13:
;
#line 193
if(___nl__bool__21){ goto label_12;}
#line 193
c_rt_lib0move(&___nl__im__27,___get_global_const(435));
#line 193
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__27);
#line 193
c_rt_lib0clear(&___nl__im__27);
#line 193
label_12:
;
#line 193
if(___nl__bool__21){ goto label_11;}
#line 194
c_rt_lib0move(&___nl__im__28,___get_global_const(315));
#line 194
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__28);
#line 194
c_rt_lib0clear(&___nl__im__28);
#line 194
label_11:
;
#line 194
if(___nl__bool__21){ goto label_10;}
#line 194
c_rt_lib0move(&___nl__im__29,___get_global_const(362));
#line 194
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__29);
#line 194
c_rt_lib0clear(&___nl__im__29);
#line 194
label_10:
;
#line 194
___nl__bool__21 = !___nl__bool__21;
#line 194
___nl__bool__21 = !___nl__bool__21;
#line 194
if(___nl__bool__21){ goto label_9;}
#line 191
c_rt_lib0clear(&___nl__im__3);
#line 191
c_rt_lib0clear(&___nl__im__13);
#line 191
c_rt_lib0clear(&___nl__im__14);
#line 191
//clear ___nl__int__15;
#line 191
//clear ___nl__int__16;
#line 191
//clear ___nl__int__17;
#line 191
//clear ___nl__bool__18;
#line 191
//clear ___nl__int__19;
#line 191
c_rt_lib0clear(&___nl__im__20);
#line 191
//clear ___nl__bool__21;
#line 191
return ___nl__im__0;
#line 191
goto label_8;
#line 191
label_9:
;
#line 191
label_8:
;
#line 191
//clear ___nl__bool__21;
#line 195
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_add(___nl__im__13, ___nl__im__14));
#line 195
c_rt_lib0clear(&___nl__im__14);
#line 196
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 196
goto label_7;
#line 196
label_5:
;
#line 197
c_rt_lib0move(&___nl__im__31,___get_global_const(37));
#line 197
c_rt_lib0move(&___nl__im__30, string0split(___nl__im__31, ___nl__im__13));
#line 197
c_rt_lib0clear(&___nl__im__31);
#line 198
c_rt_lib0move(&___nl__im__32,___get_global_const(21));
#line 199
___nl__int__34 = 1;
#line 199
___nl__int__34 = -___nl__int__34;
#line 199
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 199
c_rt_lib0move(&___nl__im__33, string_utils_priv0cal_expr(___nl__im__30, &___nl__im__32, ___nl__im__35));
#line 199
//clear ___nl__int__34;
#line 199
c_rt_lib0clear(&___nl__im__35);
#line 199
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(78));
#line 199
if(___nl__bool__36){ goto label_18;}
#line 201
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(79));
#line 201
if(___nl__bool__36){ goto label_19;}
#line 201
c_rt_lib0move(&___nl__im__37,___get_global_const(16));
#line 201
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__33));
#line 201
nl_die_arg(___nl__im__37);
#line 199
label_18:
;
#line 199
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(78)));
#line 199
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 200
c_rt_lib0move(&___nl__im__40,___get_global_const(37));
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
c_rt_lib0clear(&___nl__im__30);
#line 200
c_rt_lib0clear(&___nl__im__32);
#line 200
c_rt_lib0clear(&___nl__im__33);
#line 200
//clear ___nl__bool__36;
#line 200
c_rt_lib0clear(&___nl__im__37);
#line 200
c_rt_lib0clear(&___nl__im__38);
#line 200
c_rt_lib0clear(&___nl__im__39);
#line 200
return ___nl__im__40;
#line 201
goto label_17;
#line 201
label_19:
;
#line 201
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(79)));
#line 201
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
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
c_rt_lib0clear(&___nl__im__30);
#line 202
c_rt_lib0clear(&___nl__im__32);
#line 202
c_rt_lib0clear(&___nl__im__33);
#line 202
//clear ___nl__bool__36;
#line 202
c_rt_lib0clear(&___nl__im__37);
#line 202
c_rt_lib0clear(&___nl__im__38);
#line 202
c_rt_lib0clear(&___nl__im__39);
#line 202
c_rt_lib0clear(&___nl__im__40);
#line 202
c_rt_lib0clear(&___nl__im__42);
#line 202
return ___nl__im__41;
#line 203
goto label_17;
#line 203
label_17:
;
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
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
#line 210
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__1, ___nl__im__0));
#line 213
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 213
___nl__int__8 = 3;
#line 213
___nl__int__9 = ___nl__int__7 == ___nl__int__8;
#line 213
___nl__bool__3 = ___nl__int__9;
#line 213
//clear ___nl__int__7;
#line 213
//clear ___nl__int__8;
#line 213
//clear ___nl__int__9;
#line 213
___nl__bool__6 = !___nl__bool__3;
#line 213
if(___nl__bool__6){ goto label_5;}
#line 214
___nl__int__11 = 0;
#line 214
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__11));
#line 214
//clear ___nl__int__11;
#line 214
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__10);
#line 214
c_rt_lib0clear(&___nl__im__10);
#line 214
label_5:
;
#line 214
//clear ___nl__bool__6;
#line 214
___nl__bool__5 = !___nl__bool__3;
#line 214
if(___nl__bool__5){ goto label_4;}
#line 215
___nl__int__13 = 1;
#line 215
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__13));
#line 215
//clear ___nl__int__13;
#line 215
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__12);
#line 215
c_rt_lib0clear(&___nl__im__12);
#line 215
label_4:
;
#line 215
//clear ___nl__bool__5;
#line 215
___nl__bool__4 = !___nl__bool__3;
#line 215
if(___nl__bool__4){ goto label_3;}
#line 216
___nl__int__15 = 2;
#line 216
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__2, ___nl__int__15));
#line 216
//clear ___nl__int__15;
#line 216
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__14);
#line 216
c_rt_lib0clear(&___nl__im__14);
#line 216
label_3:
;
#line 216
//clear ___nl__bool__4;
#line 216
___nl__bool__3 = !___nl__bool__3;
#line 216
___nl__bool__3 = !___nl__bool__3;
#line 216
if(___nl__bool__3){ goto label_2;}
#line 211
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 211
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__17));
#line 211
c_rt_lib0clear(&___nl__im__17);
#line 211
c_rt_lib0clear(&___nl__im__0);
#line 211
c_rt_lib0clear(&___nl__im__1);
#line 211
c_rt_lib0clear(&___nl__im__2);
#line 211
//clear ___nl__bool__3;
#line 211
return ___nl__im__16;
#line 211
goto label_1;
#line 211
label_2:
;
#line 211
label_1:
;
#line 211
//clear ___nl__bool__3;
#line 211
c_rt_lib0clear(&___nl__im__16);
#line 217
___nl__int__22 = 0;
#line 217
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__22));
#line 217
//clear ___nl__int__22;
#line 217
c_rt_lib0move(&___nl__im__20, string_utils0get_integer(___nl__im__21));
#line 217
c_rt_lib0clear(&___nl__im__21);
#line 217
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(79));
#line 217
if(___nl__bool__19){ goto label_6;}
#line 217
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__20));
#line 217
nl_die_arg(___nl__im__20);
#line 217
label_6:
;
#line 217
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(79)));
#line 218
___nl__int__27 = 1;
#line 218
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__2, ___nl__int__27));
#line 218
//clear ___nl__int__27;
#line 218
c_rt_lib0move(&___nl__im__25, string_utils0get_integer(___nl__im__26));
#line 218
c_rt_lib0clear(&___nl__im__26);
#line 218
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(79));
#line 218
if(___nl__bool__24){ goto label_7;}
#line 218
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__25));
#line 218
nl_die_arg(___nl__im__25);
#line 218
label_7:
;
#line 218
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_const(79)));
#line 219
___nl__int__32 = 2;
#line 219
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__2, ___nl__int__32));
#line 219
//clear ___nl__int__32;
#line 219
c_rt_lib0move(&___nl__im__30, string_utils0get_integer(___nl__im__31));
#line 219
c_rt_lib0clear(&___nl__im__31);
#line 219
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_const(79));
#line 219
if(___nl__bool__29){ goto label_8;}
#line 219
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__30));
#line 219
nl_die_arg(___nl__im__30);
#line 219
label_8:
;
#line 219
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(79)));
#line 220
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(3, ___get_global_const(1267), ___nl__im__18, ___get_global_const(1268), ___nl__im__23, ___get_global_const(1269), ___nl__im__28));
#line 220
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__34));
#line 220
c_rt_lib0clear(&___nl__im__34);
#line 220
c_rt_lib0clear(&___nl__im__0);
#line 220
c_rt_lib0clear(&___nl__im__1);
#line 220
c_rt_lib0clear(&___nl__im__2);
#line 220
c_rt_lib0clear(&___nl__im__18);
#line 220
//clear ___nl__bool__19;
#line 220
c_rt_lib0clear(&___nl__im__20);
#line 220
c_rt_lib0clear(&___nl__im__23);
#line 220
//clear ___nl__bool__24;
#line 220
c_rt_lib0clear(&___nl__im__25);
#line 220
c_rt_lib0clear(&___nl__im__28);
#line 220
//clear ___nl__bool__29;
#line 220
c_rt_lib0clear(&___nl__im__30);
#line 220
return ___nl__im__33;
return NULL;
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
#line 224
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 225
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 225
c_rt_lib0move(&___nl__im__4, string0split(___nl__im__5, ___nl__im__0));
#line 225
c_rt_lib0clear(&___nl__im__5);
#line 225
___nl__int__7 = 0;
#line 225
___nl__int__8 = 1;
#line 225
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 225
label_3:
;
#line 225
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 225
___nl__bool__10 = ___nl__int__11;
#line 225
if(___nl__bool__10){ goto label_1;}
#line 225
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__4, ___nl__int__7));
#line 225
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 226
___nl__bool__14 = c_rt_lib0eq(___nl__im__6, ___nl__im__1);
#line 226
if(___nl__bool__14){ goto label_5;}
#line 226
c_rt_lib0copy(&___nl__im__13, ___nl__im__6);
#line 226
goto label_4;
#line 226
label_5:
;
#line 226
c_rt_lib0copy(&___nl__im__13, ___nl__im__2);
#line 226
label_4:
;
#line 226
//clear ___nl__bool__14;
#line 226
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 226
c_rt_lib0clear(&___nl__im__13);
#line 226
c_rt_lib0clear(&___nl__im__6);
#line 227
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 227
goto label_3;
#line 227
label_1:
;
#line 228
c_rt_lib0clear(&___nl__im__0);
#line 228
c_rt_lib0clear(&___nl__im__1);
#line 228
c_rt_lib0clear(&___nl__im__2);
#line 228
c_rt_lib0clear(&___nl__im__4);
#line 228
c_rt_lib0clear(&___nl__im__6);
#line 228
//clear ___nl__int__7;
#line 228
//clear ___nl__int__8;
#line 228
//clear ___nl__int__9;
#line 228
//clear ___nl__bool__10;
#line 228
//clear ___nl__int__11;
#line 228
c_rt_lib0clear(&___nl__im__12);
#line 228
return ___nl__im__3;
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
#line 232
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 232
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 232
c_rt_lib0clear(&___nl__im__2);
#line 232
___nl__bool__1 = !___nl__bool__1;
#line 232
if(___nl__bool__1){ goto label_2;}
#line 232
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 232
c_rt_lib0clear(&___nl__im__0);
#line 232
//clear ___nl__bool__1;
#line 232
return ___nl__im__3;
#line 232
goto label_1;
#line 232
label_2:
;
#line 232
label_1:
;
#line 232
//clear ___nl__bool__1;
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 233
___nl__int__5 = string0length(___nl__im__0);
#line 233
___nl__int__6 = 1;
#line 233
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 233
//clear ___nl__int__5;
#line 233
//clear ___nl__int__6;
#line 234
label_4:
;
#line 234
___nl__int__9 = 0;
#line 234
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 234
___nl__bool__7 = ___nl__int__10;
#line 234
//clear ___nl__int__9;
#line 234
//clear ___nl__int__10;
#line 234
___nl__bool__8 = !___nl__bool__7;
#line 234
if(___nl__bool__8){ goto label_5;}
#line 234
___nl__int__12 = 1;
#line 234
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__12));
#line 234
//clear ___nl__int__12;
#line 234
c_rt_lib0move(&___nl__im__13, string_utils0is_whitespace(___nl__im__11));
#line 234
___nl__bool__7 = c_rt_lib0check_true_native(___nl__im__13);
#line 234
c_rt_lib0clear(&___nl__im__11);
#line 234
c_rt_lib0clear(&___nl__im__13);
#line 234
label_5:
;
#line 234
//clear ___nl__bool__8;
#line 234
___nl__bool__7 = !___nl__bool__7;
#line 234
if(___nl__bool__7){ goto label_3;}
#line 235
___nl__int__14 = 1;
#line 235
___nl__int__4 = ___nl__int__4 - ___nl__int__14;
#line 235
//clear ___nl__int__14;
#line 236
goto label_4;
#line 236
label_3:
;
#line 237
___nl__int__16 = 0;
#line 237
___nl__int__18 = 1;
#line 237
___nl__int__17 = ___nl__int__4 + ___nl__int__18;
#line 237
//clear ___nl__int__18;
#line 237
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__16, ___nl__int__17));
#line 237
//clear ___nl__int__16;
#line 237
//clear ___nl__int__17;
#line 237
c_rt_lib0clear(&___nl__im__0);
#line 237
//clear ___nl__int__4;
#line 237
//clear ___nl__bool__7;
#line 237
return ___nl__im__15;
return NULL;
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
#line 241
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 241
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
___nl__bool__1 = !___nl__bool__1;
#line 241
if(___nl__bool__1){ goto label_2;}
#line 241
//clear ___nl__bool__1;
#line 241
return ___nl__im__0;
#line 241
goto label_1;
#line 241
label_2:
;
#line 241
label_1:
;
#line 241
//clear ___nl__bool__1;
#line 242
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 243
___nl__int__5 = c_rt_lib0array_len(___nl__im__3);
#line 243
___nl__int__6 = 1;
#line 243
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 243
//clear ___nl__int__5;
#line 243
//clear ___nl__int__6;
#line 244
label_4:
;
#line 244
___nl__int__9 = 0;
#line 244
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 244
___nl__bool__7 = ___nl__int__10;
#line 244
//clear ___nl__int__9;
#line 244
//clear ___nl__int__10;
#line 244
___nl__bool__8 = !___nl__bool__7;
#line 244
if(___nl__bool__8){ goto label_5;}
#line 244
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 244
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 244
___nl__bool__7 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 244
c_rt_lib0clear(&___nl__im__11);
#line 244
c_rt_lib0clear(&___nl__im__12);
#line 244
label_5:
;
#line 244
//clear ___nl__bool__8;
#line 244
___nl__bool__7 = !___nl__bool__7;
#line 244
if(___nl__bool__7){ goto label_3;}
#line 245
___nl__int__13 = 1;
#line 245
___nl__int__4 = ___nl__int__4 - ___nl__int__13;
#line 245
//clear ___nl__int__13;
#line 246
goto label_4;
#line 246
label_3:
;
#line 247
___nl__int__15 = 0;
#line 247
___nl__int__17 = 1;
#line 247
___nl__int__16 = ___nl__int__4 + ___nl__int__17;
#line 247
//clear ___nl__int__17;
#line 247
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__16));
#line 247
//clear ___nl__int__15;
#line 247
//clear ___nl__int__16;
#line 247
c_rt_lib0clear(&___nl__im__0);
#line 247
c_rt_lib0clear(&___nl__im__3);
#line 247
//clear ___nl__int__4;
#line 247
//clear ___nl__bool__7;
#line 247
return ___nl__im__14;
return NULL;
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
#line 251
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 251
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 251
c_rt_lib0clear(&___nl__im__2);
#line 251
___nl__bool__1 = !___nl__bool__1;
#line 251
if(___nl__bool__1){ goto label_2;}
#line 251
//clear ___nl__bool__1;
#line 251
return ___nl__im__0;
#line 251
goto label_1;
#line 251
label_2:
;
#line 251
label_1:
;
#line 251
//clear ___nl__bool__1;
#line 252
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 253
___nl__int__4 = 0;
#line 254
label_4:
;
#line 254
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 254
___nl__int__8 = ___nl__int__4 < ___nl__int__7;
#line 254
___nl__bool__5 = ___nl__int__8;
#line 254
//clear ___nl__int__7;
#line 254
//clear ___nl__int__8;
#line 254
___nl__bool__6 = !___nl__bool__5;
#line 254
if(___nl__bool__6){ goto label_5;}
#line 254
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 254
c_rt_lib0move(&___nl__im__10,___get_global_const(21));
#line 254
___nl__bool__5 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 254
c_rt_lib0clear(&___nl__im__9);
#line 254
c_rt_lib0clear(&___nl__im__10);
#line 254
label_5:
;
#line 254
//clear ___nl__bool__6;
#line 254
___nl__bool__5 = !___nl__bool__5;
#line 254
if(___nl__bool__5){ goto label_3;}
#line 255
___nl__int__11 = 1;
#line 255
___nl__int__4 = ___nl__int__4 + ___nl__int__11;
#line 255
//clear ___nl__int__11;
#line 256
goto label_4;
#line 256
label_3:
;
#line 257
___nl__int__14 = c_rt_lib0array_len(___nl__im__3);
#line 257
___nl__int__15 = ___nl__int__4 != ___nl__int__14;
#line 257
___nl__bool__13 = ___nl__int__15;
#line 257
//clear ___nl__int__14;
#line 257
//clear ___nl__int__15;
#line 257
if(___nl__bool__13){ goto label_7;}
#line 259
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 259
goto label_6;
#line 259
label_7:
;
#line 258
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__4));
#line 258
c_rt_lib0move(&___nl__im__12, string0substr2(___nl__im__0, ___nl__im__16));
#line 258
c_rt_lib0clear(&___nl__im__16);
#line 258
label_6:
;
#line 258
//clear ___nl__bool__13;
#line 258
c_rt_lib0clear(&___nl__im__0);
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
//clear ___nl__int__4;
#line 258
//clear ___nl__bool__5;
#line 258
return ___nl__im__12;
return NULL;
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
#line 263
c_rt_lib0move(&___nl__im__2,___get_global_const(21));
#line 263
c_rt_lib0move(&___nl__im__3,___get_global_const(41));
#line 263
c_rt_lib0move(&___nl__im__4,___get_global_const(1270));
#line 263
c_rt_lib0move(&___nl__im__5,___get_global_const(1271));
#line 263
c_rt_lib0move(&___nl__im__6,___get_global_const(1272));
#line 263
c_rt_lib0move(&___nl__im__7,___get_global_const(1273));
#line 263
c_rt_lib0move(&___nl__im__8,___get_global_const(1274));
#line 263
c_rt_lib0move(&___nl__im__9,___get_global_const(1275));
#line 263
c_rt_lib0move(&___nl__im__10,___get_global_const(1276));
#line 263
c_rt_lib0move(&___nl__im__11,___get_global_const(1277));
#line 263
c_rt_lib0move(&___nl__im__12,___get_global_const(1278));
#line 263
c_rt_lib0move(&___nl__im__13,___get_global_const(1279));
#line 263
c_rt_lib0move(&___nl__im__14,___get_global_const(66));
#line 263
c_rt_lib0move(&___nl__im__15,___get_global_const(1280));
#line 263
c_rt_lib0move(&___nl__im__16,___get_global_const(1281));
#line 263
c_rt_lib0move(&___nl__im__17,___get_global_const(1282));
#line 263
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(16, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17));
#line 263
c_rt_lib0clear(&___nl__im__2);
#line 263
c_rt_lib0clear(&___nl__im__3);
#line 263
c_rt_lib0clear(&___nl__im__4);
#line 263
c_rt_lib0clear(&___nl__im__5);
#line 263
c_rt_lib0clear(&___nl__im__6);
#line 263
c_rt_lib0clear(&___nl__im__7);
#line 263
c_rt_lib0clear(&___nl__im__8);
#line 263
c_rt_lib0clear(&___nl__im__9);
#line 263
c_rt_lib0clear(&___nl__im__10);
#line 263
c_rt_lib0clear(&___nl__im__11);
#line 263
c_rt_lib0clear(&___nl__im__12);
#line 263
c_rt_lib0clear(&___nl__im__13);
#line 263
c_rt_lib0clear(&___nl__im__14);
#line 263
c_rt_lib0clear(&___nl__im__15);
#line 263
c_rt_lib0clear(&___nl__im__16);
#line 263
c_rt_lib0clear(&___nl__im__17);
#line 264
___nl__int__21 = 16;
#line 264
___nl__int__22 = getIntFromImm(___nl__im__0);
#line 264
___nl__int__20 = ___nl__int__22 / ___nl__int__21;
#line 264
//clear ___nl__int__21;
#line 264
//clear ___nl__int__22;
#line 264
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__1, ___nl__int__20));
#line 264
//clear ___nl__int__20;
#line 264
___nl__int__25 = 16;
#line 264
___nl__int__26 = getIntFromImm(___nl__im__0);
#line 264
___nl__int__24 = ___nl__int__26 % ___nl__int__25;
#line 264
//clear ___nl__int__25;
#line 264
//clear ___nl__int__26;
#line 264
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 264
//clear ___nl__int__24;
#line 264
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 264
c_rt_lib0clear(&___nl__im__19);
#line 264
c_rt_lib0clear(&___nl__im__23);
#line 264
c_rt_lib0clear(&___nl__im__0);
#line 264
c_rt_lib0clear(&___nl__im__1);
#line 264
return ___nl__im__18;
#line 264
c_rt_lib0clear(&___nl__im__0);
#line 264
c_rt_lib0clear(&___nl__im__1);
#line 264
c_rt_lib0clear(&___nl__im__18);
#line 264
return NULL;
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
#line 268
___nl__int__2 = 0;
#line 269
___nl__int__5 = 48;
#line 269
___nl__int__6 = getIntFromImm(___nl__im__0);
#line 269
___nl__int__7 = ___nl__int__6 >= ___nl__int__5;
#line 269
___nl__bool__3 = ___nl__int__7;
#line 269
//clear ___nl__int__5;
#line 269
//clear ___nl__int__6;
#line 269
//clear ___nl__int__7;
#line 269
___nl__bool__4 = !___nl__bool__3;
#line 269
if(___nl__bool__4){ goto label_3;}
#line 269
___nl__int__8 = 57;
#line 269
___nl__int__9 = getIntFromImm(___nl__im__0);
#line 269
___nl__int__10 = ___nl__int__9 <= ___nl__int__8;
#line 269
___nl__bool__3 = ___nl__int__10;
#line 269
//clear ___nl__int__8;
#line 269
//clear ___nl__int__9;
#line 269
//clear ___nl__int__10;
#line 269
label_3:
;
#line 269
//clear ___nl__bool__4;
#line 269
___nl__bool__3 = !___nl__bool__3;
#line 269
if(___nl__bool__3){ goto label_2;}
#line 270
___nl__int__11 = getIntFromImm(___nl__im__0);
#line 270
___nl__int__2 = ___nl__int__2 + ___nl__int__11;
#line 270
//clear ___nl__int__11;
#line 271
___nl__int__12 = 48;
#line 271
___nl__int__2 = ___nl__int__2 - ___nl__int__12;
#line 271
//clear ___nl__int__12;
#line 272
goto label_1;
#line 272
label_2:
;
#line 272
___nl__int__14 = 65;
#line 272
___nl__int__15 = getIntFromImm(___nl__im__0);
#line 272
___nl__int__16 = ___nl__int__15 >= ___nl__int__14;
#line 272
___nl__bool__3 = ___nl__int__16;
#line 272
//clear ___nl__int__14;
#line 272
//clear ___nl__int__15;
#line 272
//clear ___nl__int__16;
#line 272
___nl__bool__13 = !___nl__bool__3;
#line 272
if(___nl__bool__13){ goto label_5;}
#line 272
___nl__int__17 = 70;
#line 272
___nl__int__18 = getIntFromImm(___nl__im__0);
#line 272
___nl__int__19 = ___nl__int__18 <= ___nl__int__17;
#line 272
___nl__bool__3 = ___nl__int__19;
#line 272
//clear ___nl__int__17;
#line 272
//clear ___nl__int__18;
#line 272
//clear ___nl__int__19;
#line 272
label_5:
;
#line 272
//clear ___nl__bool__13;
#line 272
___nl__bool__3 = !___nl__bool__3;
#line 272
if(___nl__bool__3){ goto label_4;}
#line 273
___nl__int__20 = getIntFromImm(___nl__im__0);
#line 273
___nl__int__2 = ___nl__int__2 + ___nl__int__20;
#line 273
//clear ___nl__int__20;
#line 274
___nl__int__21 = 55;
#line 274
___nl__int__2 = ___nl__int__2 - ___nl__int__21;
#line 274
//clear ___nl__int__21;
#line 275
goto label_1;
#line 275
label_4:
;
#line 275
___nl__int__23 = 97;
#line 275
___nl__int__24 = getIntFromImm(___nl__im__0);
#line 275
___nl__int__25 = ___nl__int__24 >= ___nl__int__23;
#line 275
___nl__bool__3 = ___nl__int__25;
#line 275
//clear ___nl__int__23;
#line 275
//clear ___nl__int__24;
#line 275
//clear ___nl__int__25;
#line 275
___nl__bool__22 = !___nl__bool__3;
#line 275
if(___nl__bool__22){ goto label_7;}
#line 275
___nl__int__26 = 102;
#line 275
___nl__int__27 = getIntFromImm(___nl__im__0);
#line 275
___nl__int__28 = ___nl__int__27 <= ___nl__int__26;
#line 275
___nl__bool__3 = ___nl__int__28;
#line 275
//clear ___nl__int__26;
#line 275
//clear ___nl__int__27;
#line 275
//clear ___nl__int__28;
#line 275
label_7:
;
#line 275
//clear ___nl__bool__22;
#line 275
___nl__bool__3 = !___nl__bool__3;
#line 275
if(___nl__bool__3){ goto label_6;}
#line 276
___nl__int__29 = getIntFromImm(___nl__im__0);
#line 276
___nl__int__2 = ___nl__int__2 + ___nl__int__29;
#line 276
//clear ___nl__int__29;
#line 277
___nl__int__30 = 87;
#line 277
___nl__int__2 = ___nl__int__2 - ___nl__int__30;
#line 277
//clear ___nl__int__30;
#line 278
goto label_1;
#line 278
label_6:
;
#line 279
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 279
nl_die_arg(___nl__im__31);
#line 280
goto label_1;
#line 280
label_1:
;
#line 280
//clear ___nl__bool__3;
#line 280
c_rt_lib0clear(&___nl__im__31);
#line 281
___nl__int__32 = 16;
#line 281
___nl__int__2 = ___nl__int__2 * ___nl__int__32;
#line 281
//clear ___nl__int__32;
#line 282
___nl__int__35 = 48;
#line 282
___nl__int__36 = getIntFromImm(___nl__im__1);
#line 282
___nl__int__37 = ___nl__int__36 >= ___nl__int__35;
#line 282
___nl__bool__33 = ___nl__int__37;
#line 282
//clear ___nl__int__35;
#line 282
//clear ___nl__int__36;
#line 282
//clear ___nl__int__37;
#line 282
___nl__bool__34 = !___nl__bool__33;
#line 282
if(___nl__bool__34){ goto label_10;}
#line 282
___nl__int__38 = 57;
#line 282
___nl__int__39 = getIntFromImm(___nl__im__1);
#line 282
___nl__int__40 = ___nl__int__39 <= ___nl__int__38;
#line 282
___nl__bool__33 = ___nl__int__40;
#line 282
//clear ___nl__int__38;
#line 282
//clear ___nl__int__39;
#line 282
//clear ___nl__int__40;
#line 282
label_10:
;
#line 282
//clear ___nl__bool__34;
#line 282
___nl__bool__33 = !___nl__bool__33;
#line 282
if(___nl__bool__33){ goto label_9;}
#line 283
___nl__int__41 = getIntFromImm(___nl__im__1);
#line 283
___nl__int__2 = ___nl__int__2 + ___nl__int__41;
#line 283
//clear ___nl__int__41;
#line 284
___nl__int__42 = 48;
#line 284
___nl__int__2 = ___nl__int__2 - ___nl__int__42;
#line 284
//clear ___nl__int__42;
#line 285
goto label_8;
#line 285
label_9:
;
#line 285
___nl__int__44 = 65;
#line 285
___nl__int__45 = getIntFromImm(___nl__im__1);
#line 285
___nl__int__46 = ___nl__int__45 >= ___nl__int__44;
#line 285
___nl__bool__33 = ___nl__int__46;
#line 285
//clear ___nl__int__44;
#line 285
//clear ___nl__int__45;
#line 285
//clear ___nl__int__46;
#line 285
___nl__bool__43 = !___nl__bool__33;
#line 285
if(___nl__bool__43){ goto label_12;}
#line 285
___nl__int__47 = 70;
#line 285
___nl__int__48 = getIntFromImm(___nl__im__1);
#line 285
___nl__int__49 = ___nl__int__48 <= ___nl__int__47;
#line 285
___nl__bool__33 = ___nl__int__49;
#line 285
//clear ___nl__int__47;
#line 285
//clear ___nl__int__48;
#line 285
//clear ___nl__int__49;
#line 285
label_12:
;
#line 285
//clear ___nl__bool__43;
#line 285
___nl__bool__33 = !___nl__bool__33;
#line 285
if(___nl__bool__33){ goto label_11;}
#line 286
___nl__int__50 = getIntFromImm(___nl__im__1);
#line 286
___nl__int__2 = ___nl__int__2 + ___nl__int__50;
#line 286
//clear ___nl__int__50;
#line 287
___nl__int__51 = 55;
#line 287
___nl__int__2 = ___nl__int__2 - ___nl__int__51;
#line 287
//clear ___nl__int__51;
#line 288
goto label_8;
#line 288
label_11:
;
#line 288
___nl__int__53 = 97;
#line 288
___nl__int__54 = getIntFromImm(___nl__im__1);
#line 288
___nl__int__55 = ___nl__int__54 >= ___nl__int__53;
#line 288
___nl__bool__33 = ___nl__int__55;
#line 288
//clear ___nl__int__53;
#line 288
//clear ___nl__int__54;
#line 288
//clear ___nl__int__55;
#line 288
___nl__bool__52 = !___nl__bool__33;
#line 288
if(___nl__bool__52){ goto label_14;}
#line 288
___nl__int__56 = 102;
#line 288
___nl__int__57 = getIntFromImm(___nl__im__1);
#line 288
___nl__int__58 = ___nl__int__57 <= ___nl__int__56;
#line 288
___nl__bool__33 = ___nl__int__58;
#line 288
//clear ___nl__int__56;
#line 288
//clear ___nl__int__57;
#line 288
//clear ___nl__int__58;
#line 288
label_14:
;
#line 288
//clear ___nl__bool__52;
#line 288
___nl__bool__33 = !___nl__bool__33;
#line 288
if(___nl__bool__33){ goto label_13;}
#line 289
___nl__int__59 = getIntFromImm(___nl__im__1);
#line 289
___nl__int__2 = ___nl__int__2 + ___nl__int__59;
#line 289
//clear ___nl__int__59;
#line 290
___nl__int__60 = 87;
#line 290
___nl__int__2 = ___nl__int__2 - ___nl__int__60;
#line 290
//clear ___nl__int__60;
#line 291
goto label_8;
#line 291
label_13:
;
#line 292
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(0));
#line 292
nl_die_arg(___nl__im__61);
#line 293
goto label_8;
#line 293
label_8:
;
#line 293
//clear ___nl__bool__33;
#line 293
c_rt_lib0clear(&___nl__im__61);
#line 294
c_rt_lib0move(&___nl__im__62, string0chr(___nl__int__2));
#line 294
c_rt_lib0clear(&___nl__im__0);
#line 294
c_rt_lib0clear(&___nl__im__1);
#line 294
//clear ___nl__int__2;
#line 294
return ___nl__im__62;
#line 294
c_rt_lib0clear(&___nl__im__0);
#line 294
c_rt_lib0clear(&___nl__im__1);
#line 294
//clear ___nl__int__2;
#line 294
c_rt_lib0clear(&___nl__im__62);
#line 294
return NULL;
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
#line 298
c_rt_lib0move(&___nl__im__3,___get_global_const(1283));
#line 298
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 298
c_rt_lib0clear(&___nl__im__3);
#line 299
___nl__int__6 = string0length(___nl__im__2);
#line 299
___nl__int__8 = string0length(___nl__im__0);
#line 299
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 299
c_rt_lib0move(&___nl__im__7, string_utils_priv0max(___nl__im__1, ___nl__im__9));
#line 299
//clear ___nl__int__8;
#line 299
c_rt_lib0clear(&___nl__im__9);
#line 299
___nl__int__10 = getIntFromImm(___nl__im__7);
#line 299
___nl__int__5 = ___nl__int__6 - ___nl__int__10;
#line 299
//clear ___nl__int__6;
#line 299
c_rt_lib0clear(&___nl__im__7);
#line 299
//clear ___nl__int__10;
#line 299
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__5));
#line 299
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__11));
#line 299
//clear ___nl__int__5;
#line 299
c_rt_lib0clear(&___nl__im__11);
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
c_rt_lib0clear(&___nl__im__2);
#line 299
return ___nl__im__4;
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
c_rt_lib0clear(&___nl__im__2);
#line 299
c_rt_lib0clear(&___nl__im__4);
#line 299
return NULL;
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
#line 303
___nl__int__4 = getIntFromImm(___nl__im__0);
#line 303
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 303
___nl__int__6 = ___nl__int__4 > ___nl__int__5;
#line 303
___nl__bool__3 = ___nl__int__6;
#line 303
//clear ___nl__int__4;
#line 303
//clear ___nl__int__5;
#line 303
//clear ___nl__int__6;
#line 303
if(___nl__bool__3){ goto label_2;}
#line 303
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 303
goto label_1;
#line 303
label_2:
;
#line 303
___nl__int__2 = getIntFromImm(___nl__im__0);
#line 303
label_1:
;
#line 303
//clear ___nl__bool__3;
#line 303
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
//clear ___nl__int__2;
#line 303
return ___nl__im__7;
#line 303
c_rt_lib0clear(&___nl__im__0);
#line 303
c_rt_lib0clear(&___nl__im__1);
#line 303
//clear ___nl__int__2;
#line 303
c_rt_lib0clear(&___nl__im__7);
#line 303
return NULL;
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
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
#line 307
c_rt_lib0move(&___nl__im__3,___get_global_const(1283));
#line 307
c_rt_lib0move(&___nl__im__4, ptd0int_to_string(___nl__im__0));
#line 307
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 307
c_rt_lib0clear(&___nl__im__3);
#line 307
c_rt_lib0clear(&___nl__im__4);
#line 308
___nl__int__7 = string0length(___nl__im__2);
#line 308
___nl__int__8 = getIntFromImm(___nl__im__1);
#line 308
___nl__int__6 = ___nl__int__7 - ___nl__int__8;
#line 308
//clear ___nl__int__7;
#line 308
//clear ___nl__int__8;
#line 308
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__6));
#line 308
c_rt_lib0move(&___nl__im__5, string0substr2(___nl__im__2, ___nl__im__9));
#line 308
//clear ___nl__int__6;
#line 308
c_rt_lib0clear(&___nl__im__9);
#line 308
c_rt_lib0clear(&___nl__im__0);
#line 308
c_rt_lib0clear(&___nl__im__1);
#line 308
c_rt_lib0clear(&___nl__im__2);
#line 308
return ___nl__im__5;
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
#line 312
___nl__int__4 = string0length(___nl__im__0);
#line 312
___nl__int__5 = string0length(___nl__im__1);
#line 312
___nl__int__6 = ___nl__int__4 >= ___nl__int__5;
#line 312
___nl__bool__2 = ___nl__int__6;
#line 312
//clear ___nl__int__4;
#line 312
//clear ___nl__int__5;
#line 312
//clear ___nl__int__6;
#line 312
___nl__bool__3 = !___nl__bool__2;
#line 312
if(___nl__bool__3){ goto label_1;}
#line 312
___nl__int__8 = 0;
#line 312
___nl__int__9 = string0length(___nl__im__1);
#line 312
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 312
//clear ___nl__int__8;
#line 312
//clear ___nl__int__9;
#line 312
___nl__bool__2 = c_rt_lib0eq(___nl__im__7, ___nl__im__1);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
label_1:
;
#line 312
//clear ___nl__bool__3;
#line 312
c_rt_lib0move(&___nl__im__10, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
//clear ___nl__bool__2;
#line 312
return ___nl__im__10;
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
//clear ___nl__bool__2;
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
return NULL;
return NULL;
}

ImmT  string_utils0normalize_newlines0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0normalize_newlines");
ImmT  *var0 = &(_tab[0]);
return string_utils0normalize_newlines(*var0);
}
ImmT  string_utils0normalize_newlines(ImmT  ___nl__im__0) {
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
#line 317
c_rt_lib0move(&___nl__im__4, string0r());
#line 317
c_rt_lib0move(&___nl__im__5, string0lf());
#line 317
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 317
c_rt_lib0clear(&___nl__im__4);
#line 317
c_rt_lib0clear(&___nl__im__5);
#line 317
c_rt_lib0move(&___nl__im__6, string0r());
#line 317
c_rt_lib0move(&___nl__im__7, string0lf());
#line 317
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(3, ___nl__im__3, ___nl__im__6, ___nl__im__7));
#line 317
c_rt_lib0clear(&___nl__im__3);
#line 317
c_rt_lib0clear(&___nl__im__6);
#line 317
c_rt_lib0clear(&___nl__im__7);
#line 318
c_rt_lib0move(&___nl__im__9, string0lf());
#line 318
c_rt_lib0move(&___nl__im__10, string0lf());
#line 318
c_rt_lib0move(&___nl__im__12, string0r());
#line 318
c_rt_lib0move(&___nl__im__13, string0lf());
#line 318
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 318
c_rt_lib0clear(&___nl__im__12);
#line 318
c_rt_lib0clear(&___nl__im__13);
#line 318
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__10, ___nl__im__11));
#line 318
c_rt_lib0clear(&___nl__im__9);
#line 318
c_rt_lib0clear(&___nl__im__10);
#line 318
c_rt_lib0clear(&___nl__im__11);
#line 318
c_rt_lib0move(&___nl__im__1, string0replace_arr(___nl__im__0, ___nl__im__2, ___nl__im__8));
#line 318
c_rt_lib0clear(&___nl__im__2);
#line 318
c_rt_lib0clear(&___nl__im__8);
#line 320
c_rt_lib0move(&___nl__im__15, ptd0string());
#line 320
c_rt_lib0move(&___nl__im__14, ptd0ensure(___nl__im__15, ___nl__im__1));
#line 320
c_rt_lib0clear(&___nl__im__15);
#line 320
c_rt_lib0clear(&___nl__im__0);
#line 320
c_rt_lib0clear(&___nl__im__1);
#line 320
return ___nl__im__14;
return NULL;
}

ImmT  string_utils0float2str(ImmT  ___nl__im__0,INT  ___nl__int__1) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
bool  ___nl__bool__25 = false;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
#line 324
___nl__int__2 = 1;
#line 325
___nl__int__3 = 0;
#line 325
___nl__int__4 = 1;
#line 325
label_3:
;
#line 325
___nl__int__6 = ___nl__int__3 >= ___nl__int__1;
#line 325
___nl__bool__5 = ___nl__int__6;
#line 325
if(___nl__bool__5){ goto label_1;}
#line 326
___nl__int__7 = 10;
#line 326
___nl__int__2 = ___nl__int__2 * ___nl__int__7;
#line 326
//clear ___nl__int__7;
#line 327
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 327
goto label_3;
#line 327
label_1:
;
#line 328
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 328
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__2));
#line 328
c_rt_lib0move(&___nl__im__10, ptd0int_to_string(___nl__im__11));
#line 328
c_rt_lib0clear(&___nl__im__11);
#line 328
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__10));
#line 328
c_rt_lib0clear(&___nl__im__9);
#line 328
c_rt_lib0clear(&___nl__im__10);
#line 328
c_rt_lib0move(&___nl__im__0, float0mul(___nl__im__0, ___nl__im__8));
#line 328
c_rt_lib0clear(&___nl__im__8);
#line 329
c_rt_lib0move(&___nl__im__0, float0round(___nl__im__0));
#line 330
c_rt_lib0move(&___nl__im__12,___get_global_const(37));
#line 331
___nl__int__15 = 0;
#line 331
___nl__int__16 = 1;
#line 331
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__16));
#line 331
//clear ___nl__int__15;
#line 331
//clear ___nl__int__16;
#line 331
c_rt_lib0move(&___nl__im__17,___get_global_const(354));
#line 331
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__17);
#line 331
c_rt_lib0clear(&___nl__im__14);
#line 331
c_rt_lib0clear(&___nl__im__17);
#line 331
___nl__bool__13 = !___nl__bool__13;
#line 331
if(___nl__bool__13){ goto label_5;}
#line 332
c_rt_lib0move(&___nl__im__12,___get_global_const(354));
#line 333
___nl__int__18 = 1;
#line 333
c_rt_lib0move(&___nl__im__19, c_rt_lib0int_new(___nl__int__18));
#line 333
c_rt_lib0move(&___nl__im__0, string0substr2(___nl__im__0, ___nl__im__19));
#line 333
//clear ___nl__int__18;
#line 333
c_rt_lib0clear(&___nl__im__19);
#line 334
goto label_4;
#line 334
label_5:
;
#line 334
label_4:
;
#line 334
//clear ___nl__bool__13;
#line 335
___nl__int__22 = 1;
#line 335
___nl__int__21 = ___nl__int__1 + ___nl__int__22;
#line 335
//clear ___nl__int__22;
#line 335
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__21));
#line 335
c_rt_lib0move(&___nl__im__20, string_utils0int2str_leading_digits(___nl__im__0, ___nl__im__23));
#line 335
//clear ___nl__int__21;
#line 335
c_rt_lib0clear(&___nl__im__23);
#line 336
___nl__int__24 = string0length(___nl__im__20);
#line 337
___nl__int__26 = 0;
#line 337
___nl__int__27 = ___nl__int__1 == ___nl__int__26;
#line 337
___nl__bool__25 = ___nl__int__27;
#line 337
//clear ___nl__int__26;
#line 337
//clear ___nl__int__27;
#line 337
___nl__bool__25 = !___nl__bool__25;
#line 337
if(___nl__bool__25){ goto label_7;}
#line 337
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__12, ___nl__im__20));
#line 337
c_rt_lib0clear(&___nl__im__0);
#line 337
//clear ___nl__int__1;
#line 337
//clear ___nl__int__2;
#line 337
//clear ___nl__int__3;
#line 337
//clear ___nl__int__4;
#line 337
//clear ___nl__bool__5;
#line 337
//clear ___nl__int__6;
#line 337
c_rt_lib0clear(&___nl__im__12);
#line 337
c_rt_lib0clear(&___nl__im__20);
#line 337
//clear ___nl__int__24;
#line 337
//clear ___nl__bool__25;
#line 337
return ___nl__im__28;
#line 337
goto label_6;
#line 337
label_7:
;
#line 337
label_6:
;
#line 337
//clear ___nl__bool__25;
#line 337
c_rt_lib0clear(&___nl__im__28);
#line 338
___nl__int__33 = 0;
#line 338
___nl__int__34 = ___nl__int__24 - ___nl__int__1;
#line 338
c_rt_lib0move(&___nl__im__32, string0substr(___nl__im__20, ___nl__int__33, ___nl__int__34));
#line 338
//clear ___nl__int__33;
#line 338
//clear ___nl__int__34;
#line 338
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__12, ___nl__im__32));
#line 338
c_rt_lib0clear(&___nl__im__32);
#line 338
c_rt_lib0move(&___nl__im__35,___get_global_const(111));
#line 338
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__35));
#line 338
c_rt_lib0clear(&___nl__im__31);
#line 338
c_rt_lib0clear(&___nl__im__35);
#line 338
___nl__int__37 = ___nl__int__24 - ___nl__int__1;
#line 338
c_rt_lib0move(&___nl__im__36, string0substr(___nl__im__20, ___nl__int__37, ___nl__int__1));
#line 338
//clear ___nl__int__37;
#line 338
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__36));
#line 338
c_rt_lib0clear(&___nl__im__30);
#line 338
c_rt_lib0clear(&___nl__im__36);
#line 338
c_rt_lib0clear(&___nl__im__0);
#line 338
//clear ___nl__int__1;
#line 338
//clear ___nl__int__2;
#line 338
//clear ___nl__int__3;
#line 338
//clear ___nl__int__4;
#line 338
//clear ___nl__bool__5;
#line 338
//clear ___nl__int__6;
#line 338
c_rt_lib0clear(&___nl__im__12);
#line 338
c_rt_lib0clear(&___nl__im__20);
#line 338
//clear ___nl__int__24;
#line 338
return ___nl__im__29;
return NULL;
}

ImmT  string_utils0float2str_fixed0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0float2str_fixed");
ImmT  *var0 = &(_tab[0]);
return string_utils0float2str_fixed(*var0);
}
ImmT  string_utils0float2str_fixed(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 342
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 342
c_rt_lib0move(&___nl__im__3, c_rt_lib0float_fixed_str(___nl__im__0));
#line 342
c_rt_lib0move(&___nl__im__1, ptd0ensure(___nl__im__2, ___nl__im__3));
#line 342
c_rt_lib0clear(&___nl__im__2);
#line 342
c_rt_lib0clear(&___nl__im__3);
#line 342
c_rt_lib0clear(&___nl__im__0);
#line 342
return ___nl__im__1;
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
