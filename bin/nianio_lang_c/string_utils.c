
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
#include "c_std_lib.h"
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
#line 13
___nl__int__3 = string0ord(___nl__im__0);
#line 13
___nl__int__4 = 47;
#line 13
___nl__int__5 = ___nl__int__3 > ___nl__int__4;
#line 13
___nl__bool__1 = ___nl__int__5;
#line 13
//clear ___nl__int__3;
#line 13
//clear ___nl__int__4;
#line 13
//clear ___nl__int__5;
#line 13
___nl__bool__2 = !___nl__bool__1;
#line 13
if(___nl__bool__2){ goto label_16;}
#line 13
___nl__int__6 = string0ord(___nl__im__0);
#line 13
___nl__int__7 = 58;
#line 13
___nl__int__8 = ___nl__int__6 < ___nl__int__7;
#line 13
___nl__bool__1 = ___nl__int__8;
#line 13
//clear ___nl__int__6;
#line 13
//clear ___nl__int__7;
#line 13
//clear ___nl__int__8;
#line 13
label_16:
;
#line 13
//clear ___nl__bool__2;
#line 13
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
//clear ___nl__bool__1;
#line 13
return ___nl__im__9;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
//clear ___nl__bool__1;
#line 13
c_rt_lib0clear(&___nl__im__9);
#line 13
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
#line 17
c_rt_lib0move(&___nl__im__2,___get_global_string_const(467));
#line 17
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 17
c_rt_lib0clear(&___nl__im__2);
#line 17
if(___nl__bool__1){ goto label_7;}
#line 17
c_rt_lib0move(&___nl__im__3, string0lf());
#line 17
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 17
c_rt_lib0clear(&___nl__im__3);
#line 17
label_7:
;
#line 17
if(___nl__bool__1){ goto label_12;}
#line 17
c_rt_lib0move(&___nl__im__4, string0tab());
#line 17
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 17
c_rt_lib0clear(&___nl__im__4);
#line 17
label_12:
;
#line 17
if(___nl__bool__1){ goto label_17;}
#line 17
c_rt_lib0move(&___nl__im__5, string0r());
#line 17
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__5);
#line 17
c_rt_lib0clear(&___nl__im__5);
#line 17
label_17:
;
#line 17
if(___nl__bool__1){ goto label_22;}
#line 17
c_rt_lib0move(&___nl__im__6, string0f());
#line 17
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 17
c_rt_lib0clear(&___nl__im__6);
#line 17
label_22:
;
#line 17
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
//clear ___nl__bool__1;
#line 17
return ___nl__im__7;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
//clear ___nl__bool__1;
#line 17
c_rt_lib0clear(&___nl__im__7);
#line 17
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
#line 21
___nl__int__1 = string0ord(___nl__im__0);
#line 22
___nl__int__4 = 64;
#line 22
___nl__int__5 = ___nl__int__1 > ___nl__int__4;
#line 22
___nl__bool__2 = ___nl__int__5;
#line 22
//clear ___nl__int__4;
#line 22
//clear ___nl__int__5;
#line 22
___nl__bool__3 = !___nl__bool__2;
#line 22
if(___nl__bool__3){ goto label_13;}
#line 22
___nl__int__6 = 91;
#line 22
___nl__int__7 = ___nl__int__1 < ___nl__int__6;
#line 22
___nl__bool__2 = ___nl__int__7;
#line 22
//clear ___nl__int__6;
#line 22
//clear ___nl__int__7;
#line 22
label_13:
;
#line 22
//clear ___nl__bool__3;
#line 22
if(___nl__bool__2){ goto label_30;}
#line 22
___nl__int__9 = 96;
#line 22
___nl__int__10 = ___nl__int__1 > ___nl__int__9;
#line 22
___nl__bool__2 = ___nl__int__10;
#line 22
//clear ___nl__int__9;
#line 22
//clear ___nl__int__10;
#line 22
___nl__bool__8 = !___nl__bool__2;
#line 22
if(___nl__bool__8){ goto label_28;}
#line 22
___nl__int__11 = 123;
#line 22
___nl__int__12 = ___nl__int__1 < ___nl__int__11;
#line 22
___nl__bool__2 = ___nl__int__12;
#line 22
//clear ___nl__int__11;
#line 22
//clear ___nl__int__12;
#line 22
label_28:
;
#line 22
//clear ___nl__bool__8;
#line 22
label_30:
;
#line 22
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
//clear ___nl__int__1;
#line 22
//clear ___nl__bool__2;
#line 22
return ___nl__im__13;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
//clear ___nl__int__1;
#line 22
//clear ___nl__bool__2;
#line 22
c_rt_lib0clear(&___nl__im__13);
#line 22
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
#line 26
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 26
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
if(___nl__bool__1){ goto label_7;}
#line 26
c_rt_lib0move(&___nl__im__3,___get_global_string_const(365));
#line 26
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 26
c_rt_lib0clear(&___nl__im__3);
#line 26
label_7:
;
#line 26
___nl__bool__1 = !___nl__bool__1;
#line 26
if(___nl__bool__1){ goto label_17;}
#line 26
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 26
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__5));
#line 26
c_rt_lib0clear(&___nl__im__5);
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
//clear ___nl__bool__1;
#line 26
return ___nl__im__4;
#line 26
goto label_17;
#line 26
label_17:
;
#line 26
//clear ___nl__bool__1;
#line 26
c_rt_lib0clear(&___nl__im__4);
#line 27
c_rt_lib0move(&___nl__im__7,___get_global_string_const(36));
#line 27
c_rt_lib0move(&___nl__im__6, string0split(___nl__im__7, ___nl__im__0));
#line 27
c_rt_lib0clear(&___nl__im__7);
#line 28
___nl__int__8 = 0;
#line 29
___nl__int__9 = 1;
#line 30
___nl__int__12 = 0;
#line 30
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__12));
#line 30
//clear ___nl__int__12;
#line 30
c_rt_lib0move(&___nl__im__13,___get_global_string_const(365));
#line 30
___nl__bool__10 = c_rt_lib0eq(___nl__im__11, ___nl__im__13);
#line 30
c_rt_lib0clear(&___nl__im__11);
#line 30
c_rt_lib0clear(&___nl__im__13);
#line 30
___nl__bool__10 = !___nl__bool__10;
#line 30
if(___nl__bool__10){ goto label_46;}
#line 31
___nl__int__14 = 1;
#line 31
___nl__int__16 = c_rt_lib0array_len(___nl__im__6);
#line 31
___nl__int__17 = 1;
#line 31
___nl__int__15 = ___nl__int__16 - ___nl__int__17;
#line 31
//clear ___nl__int__16;
#line 31
//clear ___nl__int__17;
#line 31
c_rt_lib0move(&___nl__im__6, array0subarray(___nl__im__6, ___nl__int__14, ___nl__int__15));
#line 31
//clear ___nl__int__14;
#line 31
//clear ___nl__int__15;
#line 32
___nl__int__9 = 1;
#line 32
___nl__int__9 = -___nl__int__9;
#line 33
goto label_46;
#line 33
label_46:
;
#line 33
//clear ___nl__bool__10;
#line 34
___nl__int__19 = 0;
#line 34
___nl__int__20 = 1;
#line 34
___nl__int__21 = c_rt_lib0array_len(___nl__im__6);
#line 34
label_51:
;
#line 34
___nl__int__23 = ___nl__int__19 >= ___nl__int__21;
#line 34
___nl__bool__22 = ___nl__int__23;
#line 34
if(___nl__bool__22){ goto label_98;}
#line 34
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__6, ___nl__int__19));
#line 34
c_rt_lib0copy(&___nl__im__18, ___nl__im__24);
#line 35
c_rt_lib0move(&___nl__im__26, string_utils0is_int(___nl__im__18));
#line 35
___nl__bool__25 = c_rt_lib0check_true_native(___nl__im__26);
#line 35
c_rt_lib0clear(&___nl__im__26);
#line 35
___nl__bool__25 = !___nl__bool__25;
#line 35
___nl__bool__25 = !___nl__bool__25;
#line 35
if(___nl__bool__25){ goto label_80;}
#line 35
c_rt_lib0move(&___nl__im__28,___get_global_string_const(36));
#line 35
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__28));
#line 35
c_rt_lib0clear(&___nl__im__28);
#line 35
c_rt_lib0clear(&___nl__im__0);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
//clear ___nl__int__8;
#line 35
//clear ___nl__int__9;
#line 35
c_rt_lib0clear(&___nl__im__18);
#line 35
//clear ___nl__int__19;
#line 35
//clear ___nl__int__20;
#line 35
//clear ___nl__int__21;
#line 35
//clear ___nl__bool__22;
#line 35
//clear ___nl__int__23;
#line 35
c_rt_lib0clear(&___nl__im__24);
#line 35
//clear ___nl__bool__25;
#line 35
return ___nl__im__27;
#line 35
goto label_80;
#line 35
label_80:
;
#line 35
//clear ___nl__bool__25;
#line 35
c_rt_lib0clear(&___nl__im__27);
#line 36
___nl__int__29 = 10;
#line 36
___nl__int__8 = ___nl__int__8 * ___nl__int__29;
#line 36
//clear ___nl__int__29;
#line 37
___nl__int__31 = string0ord(___nl__im__18);
#line 37
c_rt_lib0move(&___nl__im__33,___get_global_string_const(20));
#line 37
___nl__int__32 = string0ord(___nl__im__33);
#line 37
c_rt_lib0clear(&___nl__im__33);
#line 37
___nl__int__30 = ___nl__int__31 - ___nl__int__32;
#line 37
//clear ___nl__int__31;
#line 37
//clear ___nl__int__32;
#line 37
___nl__int__8 = ___nl__int__8 + ___nl__int__30;
#line 37
//clear ___nl__int__30;
#line 37
c_rt_lib0clear(&___nl__im__18);
#line 38
___nl__int__19 = ___nl__int__19 + ___nl__int__20;
#line 38
goto label_51;
#line 38
label_98:
;
#line 39
___nl__int__35 = ___nl__int__9 * ___nl__int__8;
#line 39
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__35));
#line 39
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__36));
#line 39
//clear ___nl__int__35;
#line 39
c_rt_lib0clear(&___nl__im__36);
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
c_rt_lib0clear(&___nl__im__6);
#line 39
//clear ___nl__int__8;
#line 39
//clear ___nl__int__9;
#line 39
c_rt_lib0clear(&___nl__im__18);
#line 39
//clear ___nl__int__19;
#line 39
//clear ___nl__int__20;
#line 39
//clear ___nl__int__21;
#line 39
//clear ___nl__bool__22;
#line 39
//clear ___nl__int__23;
#line 39
c_rt_lib0clear(&___nl__im__24);
#line 39
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
#line 43
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 43
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_add(___nl__im__0, ___nl__im__1));
#line 43
c_rt_lib0clear(&___nl__im__1);
#line 44
___nl__bool__2 = string_utils0is_integer_possibly_leading_zeros(___nl__im__0);
#line 44
___nl__bool__2 = !___nl__bool__2;
#line 44
___nl__bool__2 = !___nl__bool__2;
#line 44
if(___nl__bool__2){ goto label_12;}
#line 44
___nl__bool__3 = false;
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
//clear ___nl__bool__2;
#line 44
return ___nl__bool__3;
#line 44
goto label_12;
#line 44
label_12:
;
#line 44
//clear ___nl__bool__2;
#line 44
//clear ___nl__bool__3;
#line 45
c_rt_lib0move(&___nl__im__5,___get_global_string_const(20));
#line 45
___nl__bool__4 = c_rt_lib0eq(___nl__im__0, ___nl__im__5);
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
___nl__bool__4 = !___nl__bool__4;
#line 45
if(___nl__bool__4){ goto label_25;}
#line 45
___nl__bool__6 = true;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
//clear ___nl__bool__4;
#line 45
return ___nl__bool__6;
#line 45
goto label_25;
#line 45
label_25:
;
#line 45
//clear ___nl__bool__4;
#line 45
//clear ___nl__bool__6;
#line 46
___nl__int__7 = 0;
#line 47
___nl__int__10 = 1;
#line 47
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__10));
#line 47
//clear ___nl__int__10;
#line 47
c_rt_lib0move(&___nl__im__11,___get_global_string_const(365));
#line 47
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 47
c_rt_lib0clear(&___nl__im__9);
#line 47
c_rt_lib0clear(&___nl__im__11);
#line 47
___nl__bool__8 = !___nl__bool__8;
#line 47
if(___nl__bool__8){ goto label_42;}
#line 47
___nl__int__12 = 1;
#line 47
___nl__int__7 = ___nl__int__7 + ___nl__int__12;
#line 47
//clear ___nl__int__12;
#line 47
goto label_42;
#line 47
label_42:
;
#line 47
//clear ___nl__bool__8;
#line 48
___nl__int__15 = 1;
#line 48
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__15));
#line 48
//clear ___nl__int__15;
#line 48
c_rt_lib0move(&___nl__im__16,___get_global_string_const(20));
#line 48
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__16);
#line 48
c_rt_lib0clear(&___nl__im__14);
#line 48
c_rt_lib0clear(&___nl__im__16);
#line 48
___nl__bool__13 = !___nl__bool__13;
#line 48
if(___nl__bool__13){ goto label_59;}
#line 48
___nl__bool__17 = false;
#line 48
c_rt_lib0clear(&___nl__im__0);
#line 48
//clear ___nl__int__7;
#line 48
//clear ___nl__bool__13;
#line 48
return ___nl__bool__17;
#line 48
goto label_59;
#line 48
label_59:
;
#line 48
//clear ___nl__bool__13;
#line 48
//clear ___nl__bool__17;
#line 49
___nl__bool__18 = true;
#line 49
c_rt_lib0clear(&___nl__im__0);
#line 49
//clear ___nl__int__7;
#line 49
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
#line 53
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 53
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 54
___nl__int__3 = string0length(___nl__im__1);
#line 55
___nl__int__4 = 0;
#line 56
___nl__int__7 = 1;
#line 56
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__7));
#line 56
//clear ___nl__int__7;
#line 56
c_rt_lib0move(&___nl__im__8,___get_global_string_const(365));
#line 56
___nl__bool__5 = c_rt_lib0eq(___nl__im__6, ___nl__im__8);
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 56
c_rt_lib0clear(&___nl__im__8);
#line 56
___nl__bool__5 = !___nl__bool__5;
#line 56
if(___nl__bool__5){ goto label_18;}
#line 56
___nl__int__9 = 1;
#line 56
___nl__int__4 = ___nl__int__4 + ___nl__int__9;
#line 56
//clear ___nl__int__9;
#line 56
goto label_18;
#line 56
label_18:
;
#line 56
//clear ___nl__bool__5;
#line 57
___nl__int__11 = ___nl__int__4 == ___nl__int__3;
#line 57
___nl__bool__10 = ___nl__int__11;
#line 57
//clear ___nl__int__11;
#line 57
___nl__bool__10 = !___nl__bool__10;
#line 57
if(___nl__bool__10){ goto label_33;}
#line 57
___nl__bool__12 = false;
#line 57
c_rt_lib0clear(&___nl__im__0);
#line 57
c_rt_lib0clear(&___nl__im__1);
#line 57
//clear ___nl__int__3;
#line 57
//clear ___nl__int__4;
#line 57
//clear ___nl__bool__10;
#line 57
return ___nl__bool__12;
#line 57
goto label_33;
#line 57
label_33:
;
#line 57
//clear ___nl__bool__10;
#line 57
//clear ___nl__bool__12;
#line 58
label_36:
;
#line 58
___nl__int__14 = ___nl__int__4 < ___nl__int__3;
#line 58
___nl__bool__13 = ___nl__int__14;
#line 58
//clear ___nl__int__14;
#line 58
___nl__bool__13 = !___nl__bool__13;
#line 58
if(___nl__bool__13){ goto label_66;}
#line 59
___nl__int__17 = 1;
#line 59
c_rt_lib0move(&___nl__im__16, string0substr(___nl__im__1, ___nl__int__4, ___nl__int__17));
#line 59
//clear ___nl__int__17;
#line 59
___nl__bool__15 = string0is_digit(___nl__im__16);
#line 59
c_rt_lib0clear(&___nl__im__16);
#line 59
___nl__bool__15 = !___nl__bool__15;
#line 59
___nl__bool__15 = !___nl__bool__15;
#line 59
if(___nl__bool__15){ goto label_59;}
#line 59
___nl__bool__18 = false;
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
//clear ___nl__bool__15;
#line 59
return ___nl__bool__18;
#line 59
goto label_59;
#line 59
label_59:
;
#line 59
//clear ___nl__bool__15;
#line 59
//clear ___nl__bool__18;
#line 58
___nl__int__19 = 1;
#line 58
___nl__int__4 = ___nl__int__4 + ___nl__int__19;
#line 58
//clear ___nl__int__19;
#line 60
goto label_36;
#line 60
label_66:
;
#line 61
___nl__bool__20 = true;
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
//clear ___nl__int__3;
#line 61
//clear ___nl__int__4;
#line 61
//clear ___nl__bool__13;
#line 61
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
#line 65
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 65
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 66
___nl__int__3 = string0length(___nl__im__1);
#line 67
___nl__int__5 = 3;
#line 67
___nl__int__6 = ___nl__int__3 < ___nl__int__5;
#line 67
___nl__bool__4 = ___nl__int__6;
#line 67
//clear ___nl__int__5;
#line 67
//clear ___nl__int__6;
#line 67
___nl__bool__4 = !___nl__bool__4;
#line 67
if(___nl__bool__4){ goto label_18;}
#line 67
___nl__bool__7 = false;
#line 67
c_rt_lib0clear(&___nl__im__0);
#line 67
c_rt_lib0clear(&___nl__im__1);
#line 67
//clear ___nl__int__3;
#line 67
//clear ___nl__bool__4;
#line 67
return ___nl__bool__7;
#line 67
goto label_18;
#line 67
label_18:
;
#line 67
//clear ___nl__bool__4;
#line 67
//clear ___nl__bool__7;
#line 68
___nl__int__8 = 0;
#line 69
___nl__int__11 = 1;
#line 69
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__11));
#line 69
//clear ___nl__int__11;
#line 69
c_rt_lib0move(&___nl__im__12,___get_global_string_const(365));
#line 69
___nl__bool__9 = c_rt_lib0eq(___nl__im__10, ___nl__im__12);
#line 69
c_rt_lib0clear(&___nl__im__10);
#line 69
c_rt_lib0clear(&___nl__im__12);
#line 69
___nl__bool__9 = !___nl__bool__9;
#line 69
if(___nl__bool__9){ goto label_35;}
#line 69
___nl__int__13 = 1;
#line 69
___nl__int__8 = ___nl__int__8 + ___nl__int__13;
#line 69
//clear ___nl__int__13;
#line 69
goto label_35;
#line 69
label_35:
;
#line 69
//clear ___nl__bool__9;
#line 70
___nl__int__8 = ___nl__int__8;
#line 70
label_38:
;
#line 70
___nl__int__15 = ___nl__int__8 < ___nl__int__3;
#line 70
___nl__bool__14 = ___nl__int__15;
#line 70
//clear ___nl__int__15;
#line 70
___nl__bool__14 = !___nl__bool__14;
#line 70
if(___nl__bool__14){ goto label_61;}
#line 71
___nl__int__18 = 1;
#line 71
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__18));
#line 71
//clear ___nl__int__18;
#line 71
___nl__bool__16 = string0is_digit(___nl__im__17);
#line 71
c_rt_lib0clear(&___nl__im__17);
#line 71
___nl__bool__16 = !___nl__bool__16;
#line 71
___nl__bool__16 = !___nl__bool__16;
#line 71
if(___nl__bool__16){ goto label_55;}
#line 71
//clear ___nl__bool__16;
#line 71
goto label_61;
#line 71
goto label_55;
#line 71
label_55:
;
#line 71
//clear ___nl__bool__16;
#line 70
___nl__int__19 = 1;
#line 70
___nl__int__8 = ___nl__int__8 + ___nl__int__19;
#line 70
//clear ___nl__int__19;
#line 72
goto label_38;
#line 72
label_61:
;
#line 73
___nl__int__21 = 1;
#line 73
___nl__int__22 = ___nl__int__8 < ___nl__int__21;
#line 73
___nl__bool__20 = ___nl__int__22;
#line 73
//clear ___nl__int__21;
#line 73
//clear ___nl__int__22;
#line 73
if(___nl__bool__20){ goto label_75;}
#line 73
___nl__int__24 = 2;
#line 73
___nl__int__23 = ___nl__int__8 + ___nl__int__24;
#line 73
//clear ___nl__int__24;
#line 73
___nl__int__25 = ___nl__int__23 > ___nl__int__3;
#line 73
___nl__bool__20 = ___nl__int__25;
#line 73
//clear ___nl__int__23;
#line 73
//clear ___nl__int__25;
#line 73
label_75:
;
#line 73
___nl__bool__20 = !___nl__bool__20;
#line 73
if(___nl__bool__20){ goto label_87;}
#line 73
___nl__bool__26 = false;
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
//clear ___nl__bool__20;
#line 73
return ___nl__bool__26;
#line 73
goto label_87;
#line 73
label_87:
;
#line 73
//clear ___nl__bool__20;
#line 73
//clear ___nl__bool__26;
#line 74
___nl__int__29 = 1;
#line 74
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__29));
#line 74
//clear ___nl__int__29;
#line 74
c_rt_lib0move(&___nl__im__30,___get_global_string_const(110));
#line 74
___nl__bool__27 = c_rt_lib0eq(___nl__im__28, ___nl__im__30);
#line 74
c_rt_lib0clear(&___nl__im__28);
#line 74
c_rt_lib0clear(&___nl__im__30);
#line 74
___nl__bool__27 = !___nl__bool__27;
#line 74
___nl__bool__27 = !___nl__bool__27;
#line 74
if(___nl__bool__27){ goto label_109;}
#line 74
___nl__bool__31 = false;
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
//clear ___nl__bool__27;
#line 74
return ___nl__bool__31;
#line 74
goto label_109;
#line 74
label_109:
;
#line 74
//clear ___nl__bool__27;
#line 74
//clear ___nl__bool__31;
#line 75
___nl__int__32 = 1;
#line 75
___nl__int__8 = ___nl__int__8 + ___nl__int__32;
#line 75
//clear ___nl__int__32;
#line 75
label_115:
;
#line 75
___nl__int__34 = ___nl__int__8 < ___nl__int__3;
#line 75
___nl__bool__33 = ___nl__int__34;
#line 75
//clear ___nl__int__34;
#line 75
___nl__bool__33 = !___nl__bool__33;
#line 75
if(___nl__bool__33){ goto label_146;}
#line 76
___nl__int__37 = 1;
#line 76
c_rt_lib0move(&___nl__im__36, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__37));
#line 76
//clear ___nl__int__37;
#line 76
___nl__bool__35 = string0is_digit(___nl__im__36);
#line 76
c_rt_lib0clear(&___nl__im__36);
#line 76
___nl__bool__35 = !___nl__bool__35;
#line 76
___nl__bool__35 = !___nl__bool__35;
#line 76
if(___nl__bool__35){ goto label_139;}
#line 76
___nl__bool__38 = false;
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
//clear ___nl__bool__33;
#line 76
//clear ___nl__bool__35;
#line 76
return ___nl__bool__38;
#line 76
goto label_139;
#line 76
label_139:
;
#line 76
//clear ___nl__bool__35;
#line 76
//clear ___nl__bool__38;
#line 75
___nl__int__39 = 1;
#line 75
___nl__int__8 = ___nl__int__8 + ___nl__int__39;
#line 75
//clear ___nl__int__39;
#line 77
goto label_115;
#line 77
label_146:
;
#line 78
___nl__bool__40 = true;
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
//clear ___nl__int__3;
#line 78
//clear ___nl__int__8;
#line 78
//clear ___nl__bool__14;
#line 78
//clear ___nl__bool__33;
#line 78
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
#line 82
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 82
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 82
c_rt_lib0clear(&___nl__im__2);
#line 83
___nl__bool__3 = string_utils0is_integer(___nl__im__1);
#line 83
if(___nl__bool__3){ goto label_6;}
#line 83
___nl__bool__3 = string_utils0is_float(___nl__im__1);
#line 83
label_6:
;
#line 83
c_rt_lib0clear(&___nl__im__0);
#line 83
c_rt_lib0clear(&___nl__im__1);
#line 83
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
#line 87
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 87
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 87
c_rt_lib0clear(&___nl__im__2);
#line 87
if(___nl__bool__1){ goto label_7;}
#line 87
c_rt_lib0move(&___nl__im__3,___get_global_string_const(365));
#line 87
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 87
c_rt_lib0clear(&___nl__im__3);
#line 87
label_7:
;
#line 87
___nl__bool__1 = !___nl__bool__1;
#line 87
if(___nl__bool__1){ goto label_15;}
#line 87
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(77)));
#line 87
c_rt_lib0clear(&___nl__im__0);
#line 87
//clear ___nl__bool__1;
#line 87
return ___nl__im__4;
#line 87
goto label_15;
#line 87
label_15:
;
#line 87
//clear ___nl__bool__1;
#line 87
c_rt_lib0clear(&___nl__im__4);
#line 88
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 88
c_rt_lib0move(&___nl__im__5, string0split(___nl__im__6, ___nl__im__0));
#line 88
c_rt_lib0clear(&___nl__im__6);
#line 89
c_rt_lib0move(&___nl__im__7,___get_global_string_const(36));
#line 90
___nl__int__10 = 0;
#line 90
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 90
//clear ___nl__int__10;
#line 90
c_rt_lib0move(&___nl__im__11,___get_global_string_const(365));
#line 90
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 90
c_rt_lib0clear(&___nl__im__9);
#line 90
c_rt_lib0clear(&___nl__im__11);
#line 90
___nl__bool__8 = !___nl__bool__8;
#line 90
if(___nl__bool__8){ goto label_63;}
#line 91
___nl__int__12 = 1;
#line 91
___nl__int__14 = c_rt_lib0array_len(___nl__im__5);
#line 91
___nl__int__15 = 1;
#line 91
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 91
//clear ___nl__int__14;
#line 91
//clear ___nl__int__15;
#line 91
c_rt_lib0move(&___nl__im__5, array0subarray(___nl__im__5, ___nl__int__12, ___nl__int__13));
#line 91
//clear ___nl__int__12;
#line 91
//clear ___nl__int__13;
#line 92
___nl__int__18 = 0;
#line 92
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__5, ___nl__int__18));
#line 92
//clear ___nl__int__18;
#line 92
c_rt_lib0move(&___nl__im__19, string_utils0is_int(___nl__im__17));
#line 92
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__19);
#line 92
c_rt_lib0clear(&___nl__im__17);
#line 92
c_rt_lib0clear(&___nl__im__19);
#line 92
___nl__bool__16 = !___nl__bool__16;
#line 92
___nl__bool__16 = !___nl__bool__16;
#line 92
if(___nl__bool__16){ goto label_58;}
#line 92
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(77)));
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__5);
#line 92
c_rt_lib0clear(&___nl__im__7);
#line 92
//clear ___nl__bool__8;
#line 92
//clear ___nl__bool__16;
#line 92
return ___nl__im__20;
#line 92
goto label_58;
#line 92
label_58:
;
#line 92
//clear ___nl__bool__16;
#line 92
c_rt_lib0clear(&___nl__im__20);
#line 93
c_rt_lib0move(&___nl__im__7,___get_global_string_const(365));
#line 94
goto label_63;
#line 94
label_63:
;
#line 94
//clear ___nl__bool__8;
#line 95
___nl__bool__21 = false;
#line 96
___nl__int__23 = 0;
#line 96
___nl__int__24 = 1;
#line 96
___nl__int__25 = c_rt_lib0array_len(___nl__im__5);
#line 96
label_69:
;
#line 96
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 96
___nl__bool__26 = ___nl__int__27;
#line 96
if(___nl__bool__26){ goto label_121;}
#line 96
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__5, ___nl__int__23));
#line 96
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 97
c_rt_lib0move(&___nl__im__30, string_utils0is_int(___nl__im__22));
#line 97
___nl__bool__29 = c_rt_lib0check_true_native(___nl__im__30);
#line 97
c_rt_lib0clear(&___nl__im__30);
#line 97
___nl__bool__29 = !___nl__bool__29;
#line 97
___nl__bool__29 = !___nl__bool__29;
#line 97
if(___nl__bool__29){ goto label_115;}
#line 98
c_rt_lib0move(&___nl__im__33,___get_global_string_const(110));
#line 98
___nl__bool__31 = c_rt_lib0eq(___nl__im__22, ___nl__im__33);
#line 98
c_rt_lib0clear(&___nl__im__33);
#line 98
___nl__bool__32 = !___nl__bool__31;
#line 98
if(___nl__bool__32){ goto label_88;}
#line 98
___nl__bool__31 = ___nl__bool__21;
#line 98
___nl__bool__31 = !___nl__bool__31;
#line 98
label_88:
;
#line 98
//clear ___nl__bool__32;
#line 98
___nl__bool__31 = !___nl__bool__31;
#line 98
if(___nl__bool__31){ goto label_94;}
#line 99
___nl__bool__21 = true;
#line 100
goto label_111;
#line 100
label_94:
;
#line 101
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_string_const(77)));
#line 101
c_rt_lib0clear(&___nl__im__0);
#line 101
c_rt_lib0clear(&___nl__im__5);
#line 101
c_rt_lib0clear(&___nl__im__7);
#line 101
//clear ___nl__bool__21;
#line 101
c_rt_lib0clear(&___nl__im__22);
#line 101
//clear ___nl__int__23;
#line 101
//clear ___nl__int__24;
#line 101
//clear ___nl__int__25;
#line 101
//clear ___nl__bool__26;
#line 101
//clear ___nl__int__27;
#line 101
c_rt_lib0clear(&___nl__im__28);
#line 101
//clear ___nl__bool__29;
#line 101
//clear ___nl__bool__31;
#line 101
return ___nl__im__34;
#line 102
goto label_111;
#line 102
label_111:
;
#line 102
//clear ___nl__bool__31;
#line 102
c_rt_lib0clear(&___nl__im__34);
#line 103
goto label_115;
#line 103
label_115:
;
#line 103
//clear ___nl__bool__29;
#line 104
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__22));
#line 104
c_rt_lib0clear(&___nl__im__22);
#line 105
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 105
goto label_69;
#line 105
label_121:
;
#line 106
c_rt_lib0move(&___nl__im__36,___get_global_string_const(110));
#line 106
___nl__bool__35 = c_rt_lib0eq(___nl__im__7, ___nl__im__36);
#line 106
c_rt_lib0clear(&___nl__im__36);
#line 106
___nl__bool__35 = !___nl__bool__35;
#line 106
if(___nl__bool__35){ goto label_142;}
#line 106
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_string_const(77)));
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
//clear ___nl__bool__35;
#line 106
return ___nl__im__37;
#line 106
goto label_142;
#line 106
label_142:
;
#line 106
//clear ___nl__bool__35;
#line 106
c_rt_lib0clear(&___nl__im__37);
#line 107
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 107
c_rt_lib0clear(&___nl__im__0);
#line 107
c_rt_lib0clear(&___nl__im__5);
#line 107
c_rt_lib0clear(&___nl__im__7);
#line 107
//clear ___nl__bool__21;
#line 107
c_rt_lib0clear(&___nl__im__22);
#line 107
//clear ___nl__int__23;
#line 107
//clear ___nl__int__24;
#line 107
//clear ___nl__int__25;
#line 107
//clear ___nl__bool__26;
#line 107
//clear ___nl__int__27;
#line 107
c_rt_lib0clear(&___nl__im__28);
#line 107
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
#line 111
label_0:
;
#line 111
___nl__int__4 = c_rt_lib0array_len(___nl__im__0);
#line 111
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 111
___nl__int__6 = ___nl__int__5 < ___nl__int__4;
#line 111
___nl__bool__2 = ___nl__int__6;
#line 111
//clear ___nl__int__4;
#line 111
//clear ___nl__int__5;
#line 111
//clear ___nl__int__6;
#line 111
___nl__bool__3 = !___nl__bool__2;
#line 111
if(___nl__bool__3){ goto label_17;}
#line 111
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 111
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 111
//clear ___nl__int__8;
#line 111
c_rt_lib0move(&___nl__im__9, string_utils0is_whitespace(___nl__im__7));
#line 111
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__9);
#line 111
c_rt_lib0clear(&___nl__im__7);
#line 111
c_rt_lib0clear(&___nl__im__9);
#line 111
label_17:
;
#line 111
//clear ___nl__bool__3;
#line 111
___nl__bool__2 = !___nl__bool__2;
#line 111
if(___nl__bool__2){ goto label_29;}
#line 111
___nl__int__10 = 1;
#line 111
___nl__int__11 = getIntFromImm((*___ref___im__1));
#line 111
___nl__int__12 = ___nl__int__11 + ___nl__int__10;
#line 111
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__12));
#line 111
//clear ___nl__int__10;
#line 111
//clear ___nl__int__11;
#line 111
//clear ___nl__int__12;
#line 111
goto label_0;
#line 111
label_29:
;
#line 112
___nl__int__14 = c_rt_lib0array_len(___nl__im__0);
#line 112
___nl__int__15 = getIntFromImm((*___ref___im__1));
#line 112
___nl__int__16 = ___nl__int__15 == ___nl__int__14;
#line 112
___nl__bool__13 = ___nl__int__16;
#line 112
//clear ___nl__int__14;
#line 112
//clear ___nl__int__15;
#line 112
//clear ___nl__int__16;
#line 112
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 112
c_rt_lib0clear(&___nl__im__0);
#line 112
//clear ___nl__bool__2;
#line 112
//clear ___nl__bool__13;
#line 112
return ___nl__im__17;
#line 112
c_rt_lib0clear(&___nl__im__0);
#line 112
//clear ___nl__bool__2;
#line 112
//clear ___nl__bool__13;
#line 112
c_rt_lib0clear(&___nl__im__17);
#line 112
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
#line 116
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 117
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 117
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 117
//clear ___nl__int__5;
#line 117
c_rt_lib0move(&___nl__im__6,___get_global_string_const(365));
#line 117
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__6);
#line 117
c_rt_lib0clear(&___nl__im__4);
#line 117
c_rt_lib0clear(&___nl__im__6);
#line 117
___nl__bool__3 = !___nl__bool__3;
#line 117
if(___nl__bool__3){ goto label_19;}
#line 118
___nl__int__7 = 1;
#line 118
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 118
___nl__int__9 = ___nl__int__8 + ___nl__int__7;
#line 118
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__9));
#line 118
//clear ___nl__int__7;
#line 118
//clear ___nl__int__8;
#line 118
//clear ___nl__int__9;
#line 119
c_rt_lib0move(&___nl__im__2,___get_global_string_const(365));
#line 120
goto label_19;
#line 120
label_19:
;
#line 120
//clear ___nl__bool__3;
#line 121
___nl__bool__10 = false;
#line 122
label_22:
;
#line 122
___nl__int__12 = c_rt_lib0array_len(___nl__im__0);
#line 122
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 122
___nl__int__14 = ___nl__int__13 < ___nl__int__12;
#line 122
___nl__bool__11 = ___nl__int__14;
#line 122
//clear ___nl__int__12;
#line 122
//clear ___nl__int__13;
#line 122
//clear ___nl__int__14;
#line 122
___nl__bool__11 = !___nl__bool__11;
#line 122
if(___nl__bool__11){ goto label_70;}
#line 123
___nl__int__16 = getIntFromImm((*___ref___im__1));
#line 123
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 123
//clear ___nl__int__16;
#line 124
c_rt_lib0move(&___nl__im__18, string_utils0is_int(___nl__im__15));
#line 124
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 124
c_rt_lib0clear(&___nl__im__18);
#line 124
___nl__bool__17 = !___nl__bool__17;
#line 124
___nl__bool__17 = !___nl__bool__17;
#line 124
if(___nl__bool__17){ goto label_58;}
#line 125
c_rt_lib0move(&___nl__im__20,___get_global_string_const(110));
#line 125
___nl__bool__19 = c_rt_lib0ne(___nl__im__15, ___nl__im__20);
#line 125
c_rt_lib0clear(&___nl__im__20);
#line 125
if(___nl__bool__19){ goto label_46;}
#line 125
___nl__bool__19 = ___nl__bool__10;
#line 125
label_46:
;
#line 125
___nl__bool__19 = !___nl__bool__19;
#line 125
if(___nl__bool__19){ goto label_54;}
#line 125
c_rt_lib0clear(&___nl__im__15);
#line 125
//clear ___nl__bool__17;
#line 125
//clear ___nl__bool__19;
#line 125
goto label_70;
#line 125
goto label_54;
#line 125
label_54:
;
#line 125
//clear ___nl__bool__19;
#line 126
___nl__bool__10 = true;
#line 127
goto label_58;
#line 127
label_58:
;
#line 127
//clear ___nl__bool__17;
#line 128
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 129
___nl__int__21 = 1;
#line 129
___nl__int__22 = getIntFromImm((*___ref___im__1));
#line 129
___nl__int__23 = ___nl__int__22 + ___nl__int__21;
#line 129
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__23));
#line 129
//clear ___nl__int__21;
#line 129
//clear ___nl__int__22;
#line 129
//clear ___nl__int__23;
#line 129
c_rt_lib0clear(&___nl__im__15);
#line 130
goto label_22;
#line 130
label_70:
;
#line 131
c_rt_lib0move(&___nl__im__25,___get_global_string_const(36));
#line 131
___nl__bool__24 = c_rt_lib0eq(___nl__im__2, ___nl__im__25);
#line 131
c_rt_lib0clear(&___nl__im__25);
#line 131
if(___nl__bool__24){ goto label_78;}
#line 131
c_rt_lib0move(&___nl__im__26,___get_global_string_const(365));
#line 131
___nl__bool__24 = c_rt_lib0eq(___nl__im__2, ___nl__im__26);
#line 131
c_rt_lib0clear(&___nl__im__26);
#line 131
label_78:
;
#line 131
___nl__bool__24 = !___nl__bool__24;
#line 131
if(___nl__bool__24){ goto label_92;}
#line 131
c_rt_lib0move(&___nl__im__28,___get_global_string_const(36));
#line 131
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__28));
#line 131
c_rt_lib0clear(&___nl__im__28);
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
//clear ___nl__bool__24;
#line 131
return ___nl__im__27;
#line 131
goto label_92;
#line 131
label_92:
;
#line 131
//clear ___nl__bool__24;
#line 131
c_rt_lib0clear(&___nl__im__27);
#line 132
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__2));
#line 132
c_rt_lib0clear(&___nl__im__0);
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
//clear ___nl__bool__10;
#line 132
//clear ___nl__bool__11;
#line 132
c_rt_lib0clear(&___nl__im__15);
#line 132
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
#line 136
c_rt_lib0move(&___nl__im__4, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 136
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 136
c_rt_lib0clear(&___nl__im__4);
#line 136
___nl__bool__3 = !___nl__bool__3;
#line 136
if(___nl__bool__3){ goto label_13;}
#line 136
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 136
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__6));
#line 136
c_rt_lib0clear(&___nl__im__6);
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
//clear ___nl__bool__3;
#line 136
return ___nl__im__5;
#line 136
goto label_13;
#line 136
label_13:
;
#line 136
//clear ___nl__bool__3;
#line 136
c_rt_lib0clear(&___nl__im__5);
#line 138
___nl__int__10 = getIntFromImm((*___ref___im__1));
#line 138
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__10));
#line 138
//clear ___nl__int__10;
#line 138
c_rt_lib0move(&___nl__im__11,___get_global_string_const(455));
#line 138
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
___nl__bool__8 = !___nl__bool__8;
#line 138
if(___nl__bool__8){ goto label_100;}
#line 139
___nl__int__12 = 1;
#line 139
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 139
___nl__int__14 = ___nl__int__13 + ___nl__int__12;
#line 139
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__14));
#line 139
//clear ___nl__int__12;
#line 139
//clear ___nl__int__13;
#line 139
//clear ___nl__int__14;
#line 140
___nl__int__17 = 0;
#line 140
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__17));
#line 140
c_rt_lib0move(&___nl__im__16, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__18));
#line 140
//clear ___nl__int__17;
#line 140
c_rt_lib0clear(&___nl__im__18);
#line 140
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(78));
#line 140
if(___nl__bool__15){ goto label_45;}
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
return ___nl__im__16;
#line 140
label_45:
;
#line 140
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(78)));
#line 141
c_rt_lib0move(&___nl__im__20, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 141
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__20);
#line 141
c_rt_lib0clear(&___nl__im__20);
#line 141
___nl__bool__19 = !___nl__bool__19;
#line 141
if(___nl__bool__19){ goto label_64;}
#line 141
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 141
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__22));
#line 141
c_rt_lib0clear(&___nl__im__22);
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
//clear ___nl__bool__19;
#line 141
return ___nl__im__21;
#line 141
goto label_64;
#line 141
label_64:
;
#line 141
//clear ___nl__bool__19;
#line 141
c_rt_lib0clear(&___nl__im__21);
#line 142
___nl__int__25 = getIntFromImm((*___ref___im__1));
#line 142
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__25));
#line 142
//clear ___nl__int__25;
#line 142
c_rt_lib0move(&___nl__im__26,___get_global_string_const(320));
#line 142
___nl__bool__23 = c_rt_lib0eq(___nl__im__24, ___nl__im__26);
#line 142
c_rt_lib0clear(&___nl__im__24);
#line 142
c_rt_lib0clear(&___nl__im__26);
#line 142
___nl__bool__23 = !___nl__bool__23;
#line 142
___nl__bool__23 = !___nl__bool__23;
#line 142
if(___nl__bool__23){ goto label_89;}
#line 142
c_rt_lib0move(&___nl__im__28,___get_global_string_const(36));
#line 142
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__28));
#line 142
c_rt_lib0clear(&___nl__im__28);
#line 142
c_rt_lib0clear(&___nl__im__0);
#line 142
c_rt_lib0clear(&___nl__im__2);
#line 142
c_rt_lib0clear(&___nl__im__7);
#line 142
//clear ___nl__bool__8;
#line 142
//clear ___nl__bool__15;
#line 142
c_rt_lib0clear(&___nl__im__16);
#line 142
//clear ___nl__bool__23;
#line 142
return ___nl__im__27;
#line 142
goto label_89;
#line 142
label_89:
;
#line 142
//clear ___nl__bool__23;
#line 142
c_rt_lib0clear(&___nl__im__27);
#line 143
___nl__int__29 = 1;
#line 143
___nl__int__30 = getIntFromImm((*___ref___im__1));
#line 143
___nl__int__31 = ___nl__int__30 + ___nl__int__29;
#line 143
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__31));
#line 143
//clear ___nl__int__29;
#line 143
//clear ___nl__int__30;
#line 143
//clear ___nl__int__31;
#line 144
goto label_115;
#line 144
label_100:
;
#line 145
c_rt_lib0move(&___nl__im__33, string_utils_priv0get_number(___nl__im__0, ___ref___im__1));
#line 145
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(78));
#line 145
if(___nl__bool__32){ goto label_112;}
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 145
c_rt_lib0clear(&___nl__im__7);
#line 145
//clear ___nl__bool__8;
#line 145
//clear ___nl__bool__15;
#line 145
c_rt_lib0clear(&___nl__im__16);
#line 145
//clear ___nl__bool__32;
#line 145
return ___nl__im__33;
#line 145
label_112:
;
#line 145
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(78)));
#line 146
goto label_115;
#line 146
label_115:
;
#line 146
//clear ___nl__bool__8;
#line 146
//clear ___nl__bool__15;
#line 146
c_rt_lib0clear(&___nl__im__16);
#line 146
//clear ___nl__bool__32;
#line 146
c_rt_lib0clear(&___nl__im__33);
#line 147
label_121:
;
#line 148
c_rt_lib0move(&___nl__im__35, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 148
___nl__bool__34 = c_rt_lib0check_true_native(___nl__im__35);
#line 148
c_rt_lib0clear(&___nl__im__35);
#line 148
___nl__bool__34 = !___nl__bool__34;
#line 148
if(___nl__bool__34){ goto label_134;}
#line 148
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
c_rt_lib0clear(&___nl__im__7);
#line 148
//clear ___nl__bool__34;
#line 148
return ___nl__im__36;
#line 148
goto label_134;
#line 148
label_134:
;
#line 148
//clear ___nl__bool__34;
#line 148
c_rt_lib0clear(&___nl__im__36);
#line 149
___nl__int__38 = getIntFromImm((*___ref___im__1));
#line 149
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__0, ___nl__int__38));
#line 149
//clear ___nl__int__38;
#line 150
c_rt_lib0move(&___nl__im__40,___get_global_string_const(373));
#line 150
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__40);
#line 150
c_rt_lib0clear(&___nl__im__40);
#line 150
___nl__bool__39 = !___nl__bool__39;
#line 150
if(___nl__bool__39){ goto label_192;}
#line 151
___nl__int__42 = 5;
#line 151
___nl__int__43 = getIntFromImm(___nl__im__2);
#line 151
___nl__int__44 = ___nl__int__43 >= ___nl__int__42;
#line 151
___nl__bool__41 = ___nl__int__44;
#line 151
//clear ___nl__int__42;
#line 151
//clear ___nl__int__43;
#line 151
//clear ___nl__int__44;
#line 151
___nl__bool__41 = !___nl__bool__41;
#line 151
if(___nl__bool__41){ goto label_163;}
#line 151
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 151
c_rt_lib0clear(&___nl__im__0);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
c_rt_lib0clear(&___nl__im__7);
#line 151
c_rt_lib0clear(&___nl__im__37);
#line 151
//clear ___nl__bool__39;
#line 151
//clear ___nl__bool__41;
#line 151
return ___nl__im__45;
#line 151
goto label_163;
#line 151
label_163:
;
#line 151
//clear ___nl__bool__41;
#line 151
c_rt_lib0clear(&___nl__im__45);
#line 152
___nl__int__46 = 1;
#line 152
___nl__int__47 = getIntFromImm((*___ref___im__1));
#line 152
___nl__int__48 = ___nl__int__47 + ___nl__int__46;
#line 152
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__48));
#line 152
//clear ___nl__int__46;
#line 152
//clear ___nl__int__47;
#line 152
//clear ___nl__int__48;
#line 153
___nl__int__52 = 5;
#line 153
c_rt_lib0move(&___nl__im__53, c_rt_lib0int_new(___nl__int__52));
#line 153
c_rt_lib0move(&___nl__im__51, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__53));
#line 153
//clear ___nl__int__52;
#line 153
c_rt_lib0clear(&___nl__im__53);
#line 153
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_string_const(78));
#line 153
if(___nl__bool__50){ goto label_188;}
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
c_rt_lib0clear(&___nl__im__7);
#line 153
c_rt_lib0clear(&___nl__im__37);
#line 153
//clear ___nl__bool__39;
#line 153
c_rt_lib0clear(&___nl__im__49);
#line 153
//clear ___nl__bool__50;
#line 153
return ___nl__im__51;
#line 153
label_188:
;
#line 153
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__51, ___get_global_string_const(78)));
#line 154
c_rt_lib0move(&___nl__im__7, float0mul(___nl__im__7, ___nl__im__49));
#line 155
goto label_558;
#line 155
label_192:
;
#line 155
c_rt_lib0move(&___nl__im__54,___get_global_string_const(105));
#line 155
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__54);
#line 155
c_rt_lib0clear(&___nl__im__54);
#line 155
___nl__bool__39 = !___nl__bool__39;
#line 155
if(___nl__bool__39){ goto label_251;}
#line 156
___nl__int__56 = 5;
#line 156
___nl__int__57 = getIntFromImm(___nl__im__2);
#line 156
___nl__int__58 = ___nl__int__57 >= ___nl__int__56;
#line 156
___nl__bool__55 = ___nl__int__58;
#line 156
//clear ___nl__int__56;
#line 156
//clear ___nl__int__57;
#line 156
//clear ___nl__int__58;
#line 156
___nl__bool__55 = !___nl__bool__55;
#line 156
if(___nl__bool__55){ goto label_219;}
#line 156
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 156
c_rt_lib0clear(&___nl__im__0);
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 156
c_rt_lib0clear(&___nl__im__7);
#line 156
c_rt_lib0clear(&___nl__im__37);
#line 156
//clear ___nl__bool__39;
#line 156
c_rt_lib0clear(&___nl__im__49);
#line 156
//clear ___nl__bool__50;
#line 156
c_rt_lib0clear(&___nl__im__51);
#line 156
//clear ___nl__bool__55;
#line 156
return ___nl__im__59;
#line 156
goto label_219;
#line 156
label_219:
;
#line 156
//clear ___nl__bool__55;
#line 156
c_rt_lib0clear(&___nl__im__59);
#line 157
___nl__int__60 = 1;
#line 157
___nl__int__61 = getIntFromImm((*___ref___im__1));
#line 157
___nl__int__62 = ___nl__int__61 + ___nl__int__60;
#line 157
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__62));
#line 157
//clear ___nl__int__60;
#line 157
//clear ___nl__int__61;
#line 157
//clear ___nl__int__62;
#line 158
___nl__int__66 = 5;
#line 158
c_rt_lib0move(&___nl__im__67, c_rt_lib0int_new(___nl__int__66));
#line 158
c_rt_lib0move(&___nl__im__65, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__67));
#line 158
//clear ___nl__int__66;
#line 158
c_rt_lib0clear(&___nl__im__67);
#line 158
___nl__bool__64 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(78));
#line 158
if(___nl__bool__64){ goto label_247;}
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0clear(&___nl__im__7);
#line 158
c_rt_lib0clear(&___nl__im__37);
#line 158
//clear ___nl__bool__39;
#line 158
c_rt_lib0clear(&___nl__im__49);
#line 158
//clear ___nl__bool__50;
#line 158
c_rt_lib0clear(&___nl__im__51);
#line 158
c_rt_lib0clear(&___nl__im__63);
#line 158
//clear ___nl__bool__64;
#line 158
return ___nl__im__65;
#line 158
label_247:
;
#line 158
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__65, ___get_global_string_const(78)));
#line 159
c_rt_lib0move(&___nl__im__7, float0div(___nl__im__7, ___nl__im__63));
#line 160
goto label_558;
#line 160
label_251:
;
#line 160
c_rt_lib0move(&___nl__im__68,___get_global_string_const(376));
#line 160
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__68);
#line 160
c_rt_lib0clear(&___nl__im__68);
#line 160
___nl__bool__39 = !___nl__bool__39;
#line 160
if(___nl__bool__39){ goto label_316;}
#line 161
___nl__int__70 = 5;
#line 161
___nl__int__71 = getIntFromImm(___nl__im__2);
#line 161
___nl__int__72 = ___nl__int__71 >= ___nl__int__70;
#line 161
___nl__bool__69 = ___nl__int__72;
#line 161
//clear ___nl__int__70;
#line 161
//clear ___nl__int__71;
#line 161
//clear ___nl__int__72;
#line 161
___nl__bool__69 = !___nl__bool__69;
#line 161
if(___nl__bool__69){ goto label_281;}
#line 161
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 161
c_rt_lib0clear(&___nl__im__0);
#line 161
c_rt_lib0clear(&___nl__im__2);
#line 161
c_rt_lib0clear(&___nl__im__7);
#line 161
c_rt_lib0clear(&___nl__im__37);
#line 161
//clear ___nl__bool__39;
#line 161
c_rt_lib0clear(&___nl__im__49);
#line 161
//clear ___nl__bool__50;
#line 161
c_rt_lib0clear(&___nl__im__51);
#line 161
c_rt_lib0clear(&___nl__im__63);
#line 161
//clear ___nl__bool__64;
#line 161
c_rt_lib0clear(&___nl__im__65);
#line 161
//clear ___nl__bool__69;
#line 161
return ___nl__im__73;
#line 161
goto label_281;
#line 161
label_281:
;
#line 161
//clear ___nl__bool__69;
#line 161
c_rt_lib0clear(&___nl__im__73);
#line 162
___nl__int__74 = 1;
#line 162
___nl__int__75 = getIntFromImm((*___ref___im__1));
#line 162
___nl__int__76 = ___nl__int__75 + ___nl__int__74;
#line 162
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__76));
#line 162
//clear ___nl__int__74;
#line 162
//clear ___nl__int__75;
#line 162
//clear ___nl__int__76;
#line 163
___nl__int__80 = 5;
#line 163
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__80));
#line 163
c_rt_lib0move(&___nl__im__79, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__81));
#line 163
//clear ___nl__int__80;
#line 163
c_rt_lib0clear(&___nl__im__81);
#line 163
___nl__bool__78 = c_rt_lib0priv_is(___nl__im__79, ___get_global_string_const(78));
#line 163
if(___nl__bool__78){ goto label_312;}
#line 163
c_rt_lib0clear(&___nl__im__0);
#line 163
c_rt_lib0clear(&___nl__im__2);
#line 163
c_rt_lib0clear(&___nl__im__7);
#line 163
c_rt_lib0clear(&___nl__im__37);
#line 163
//clear ___nl__bool__39;
#line 163
c_rt_lib0clear(&___nl__im__49);
#line 163
//clear ___nl__bool__50;
#line 163
c_rt_lib0clear(&___nl__im__51);
#line 163
c_rt_lib0clear(&___nl__im__63);
#line 163
//clear ___nl__bool__64;
#line 163
c_rt_lib0clear(&___nl__im__65);
#line 163
c_rt_lib0clear(&___nl__im__77);
#line 163
//clear ___nl__bool__78;
#line 163
return ___nl__im__79;
#line 163
label_312:
;
#line 163
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__79, ___get_global_string_const(78)));
#line 164
c_rt_lib0move(&___nl__im__7, float0mod(___nl__im__7, ___nl__im__77));
#line 165
goto label_558;
#line 165
label_316:
;
#line 165
c_rt_lib0move(&___nl__im__82,___get_global_string_const(367));
#line 165
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__82);
#line 165
c_rt_lib0clear(&___nl__im__82);
#line 165
___nl__bool__39 = !___nl__bool__39;
#line 165
if(___nl__bool__39){ goto label_387;}
#line 166
___nl__int__84 = 2;
#line 166
___nl__int__85 = getIntFromImm(___nl__im__2);
#line 166
___nl__int__86 = ___nl__int__85 >= ___nl__int__84;
#line 166
___nl__bool__83 = ___nl__int__86;
#line 166
//clear ___nl__int__84;
#line 166
//clear ___nl__int__85;
#line 166
//clear ___nl__int__86;
#line 166
___nl__bool__83 = !___nl__bool__83;
#line 166
if(___nl__bool__83){ goto label_349;}
#line 166
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__7);
#line 166
c_rt_lib0clear(&___nl__im__37);
#line 166
//clear ___nl__bool__39;
#line 166
c_rt_lib0clear(&___nl__im__49);
#line 166
//clear ___nl__bool__50;
#line 166
c_rt_lib0clear(&___nl__im__51);
#line 166
c_rt_lib0clear(&___nl__im__63);
#line 166
//clear ___nl__bool__64;
#line 166
c_rt_lib0clear(&___nl__im__65);
#line 166
c_rt_lib0clear(&___nl__im__77);
#line 166
//clear ___nl__bool__78;
#line 166
c_rt_lib0clear(&___nl__im__79);
#line 166
//clear ___nl__bool__83;
#line 166
return ___nl__im__87;
#line 166
goto label_349;
#line 166
label_349:
;
#line 166
//clear ___nl__bool__83;
#line 166
c_rt_lib0clear(&___nl__im__87);
#line 167
___nl__int__88 = 1;
#line 167
___nl__int__89 = getIntFromImm((*___ref___im__1));
#line 167
___nl__int__90 = ___nl__int__89 + ___nl__int__88;
#line 167
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__90));
#line 167
//clear ___nl__int__88;
#line 167
//clear ___nl__int__89;
#line 167
//clear ___nl__int__90;
#line 168
___nl__int__94 = 2;
#line 168
c_rt_lib0move(&___nl__im__95, c_rt_lib0int_new(___nl__int__94));
#line 168
c_rt_lib0move(&___nl__im__93, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__95));
#line 168
//clear ___nl__int__94;
#line 168
c_rt_lib0clear(&___nl__im__95);
#line 168
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__93, ___get_global_string_const(78));
#line 168
if(___nl__bool__92){ goto label_383;}
#line 168
c_rt_lib0clear(&___nl__im__0);
#line 168
c_rt_lib0clear(&___nl__im__2);
#line 168
c_rt_lib0clear(&___nl__im__7);
#line 168
c_rt_lib0clear(&___nl__im__37);
#line 168
//clear ___nl__bool__39;
#line 168
c_rt_lib0clear(&___nl__im__49);
#line 168
//clear ___nl__bool__50;
#line 168
c_rt_lib0clear(&___nl__im__51);
#line 168
c_rt_lib0clear(&___nl__im__63);
#line 168
//clear ___nl__bool__64;
#line 168
c_rt_lib0clear(&___nl__im__65);
#line 168
c_rt_lib0clear(&___nl__im__77);
#line 168
//clear ___nl__bool__78;
#line 168
c_rt_lib0clear(&___nl__im__79);
#line 168
c_rt_lib0clear(&___nl__im__91);
#line 168
//clear ___nl__bool__92;
#line 168
return ___nl__im__93;
#line 168
label_383:
;
#line 168
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__93, ___get_global_string_const(78)));
#line 169
c_rt_lib0move(&___nl__im__7, float0add(___nl__im__7, ___nl__im__91));
#line 170
goto label_558;
#line 170
label_387:
;
#line 170
c_rt_lib0move(&___nl__im__96,___get_global_string_const(365));
#line 170
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__96);
#line 170
c_rt_lib0clear(&___nl__im__96);
#line 170
___nl__bool__39 = !___nl__bool__39;
#line 170
if(___nl__bool__39){ goto label_464;}
#line 171
___nl__int__98 = 2;
#line 171
___nl__int__99 = getIntFromImm(___nl__im__2);
#line 171
___nl__int__100 = ___nl__int__99 >= ___nl__int__98;
#line 171
___nl__bool__97 = ___nl__int__100;
#line 171
//clear ___nl__int__98;
#line 171
//clear ___nl__int__99;
#line 171
//clear ___nl__int__100;
#line 171
___nl__bool__97 = !___nl__bool__97;
#line 171
if(___nl__bool__97){ goto label_423;}
#line 171
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 171
c_rt_lib0clear(&___nl__im__0);
#line 171
c_rt_lib0clear(&___nl__im__2);
#line 171
c_rt_lib0clear(&___nl__im__7);
#line 171
c_rt_lib0clear(&___nl__im__37);
#line 171
//clear ___nl__bool__39;
#line 171
c_rt_lib0clear(&___nl__im__49);
#line 171
//clear ___nl__bool__50;
#line 171
c_rt_lib0clear(&___nl__im__51);
#line 171
c_rt_lib0clear(&___nl__im__63);
#line 171
//clear ___nl__bool__64;
#line 171
c_rt_lib0clear(&___nl__im__65);
#line 171
c_rt_lib0clear(&___nl__im__77);
#line 171
//clear ___nl__bool__78;
#line 171
c_rt_lib0clear(&___nl__im__79);
#line 171
c_rt_lib0clear(&___nl__im__91);
#line 171
//clear ___nl__bool__92;
#line 171
c_rt_lib0clear(&___nl__im__93);
#line 171
//clear ___nl__bool__97;
#line 171
return ___nl__im__101;
#line 171
goto label_423;
#line 171
label_423:
;
#line 171
//clear ___nl__bool__97;
#line 171
c_rt_lib0clear(&___nl__im__101);
#line 172
___nl__int__102 = 1;
#line 172
___nl__int__103 = getIntFromImm((*___ref___im__1));
#line 172
___nl__int__104 = ___nl__int__103 + ___nl__int__102;
#line 172
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__104));
#line 172
//clear ___nl__int__102;
#line 172
//clear ___nl__int__103;
#line 172
//clear ___nl__int__104;
#line 173
___nl__int__108 = 2;
#line 173
c_rt_lib0move(&___nl__im__109, c_rt_lib0int_new(___nl__int__108));
#line 173
c_rt_lib0move(&___nl__im__107, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__109));
#line 173
//clear ___nl__int__108;
#line 173
c_rt_lib0clear(&___nl__im__109);
#line 173
___nl__bool__106 = c_rt_lib0priv_is(___nl__im__107, ___get_global_string_const(78));
#line 173
if(___nl__bool__106){ goto label_460;}
#line 173
c_rt_lib0clear(&___nl__im__0);
#line 173
c_rt_lib0clear(&___nl__im__2);
#line 173
c_rt_lib0clear(&___nl__im__7);
#line 173
c_rt_lib0clear(&___nl__im__37);
#line 173
//clear ___nl__bool__39;
#line 173
c_rt_lib0clear(&___nl__im__49);
#line 173
//clear ___nl__bool__50;
#line 173
c_rt_lib0clear(&___nl__im__51);
#line 173
c_rt_lib0clear(&___nl__im__63);
#line 173
//clear ___nl__bool__64;
#line 173
c_rt_lib0clear(&___nl__im__65);
#line 173
c_rt_lib0clear(&___nl__im__77);
#line 173
//clear ___nl__bool__78;
#line 173
c_rt_lib0clear(&___nl__im__79);
#line 173
c_rt_lib0clear(&___nl__im__91);
#line 173
//clear ___nl__bool__92;
#line 173
c_rt_lib0clear(&___nl__im__93);
#line 173
c_rt_lib0clear(&___nl__im__105);
#line 173
//clear ___nl__bool__106;
#line 173
return ___nl__im__107;
#line 173
label_460:
;
#line 173
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__107, ___get_global_string_const(78)));
#line 174
c_rt_lib0move(&___nl__im__7, float0sub(___nl__im__7, ___nl__im__105));
#line 175
goto label_558;
#line 175
label_464:
;
#line 175
c_rt_lib0move(&___nl__im__110,___get_global_string_const(320));
#line 175
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__110);
#line 175
c_rt_lib0clear(&___nl__im__110);
#line 175
___nl__bool__39 = !___nl__bool__39;
#line 175
if(___nl__bool__39){ goto label_531;}
#line 176
___nl__int__112 = 0;
#line 176
___nl__int__113 = getIntFromImm(___nl__im__2);
#line 176
___nl__int__114 = ___nl__int__113 < ___nl__int__112;
#line 176
___nl__bool__111 = ___nl__int__114;
#line 176
//clear ___nl__int__112;
#line 176
//clear ___nl__int__113;
#line 176
//clear ___nl__int__114;
#line 176
___nl__bool__111 = !___nl__bool__111;
#line 176
if(___nl__bool__111){ goto label_505;}
#line 176
c_rt_lib0move(&___nl__im__116,___get_global_string_const(36));
#line 176
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__116));
#line 176
c_rt_lib0clear(&___nl__im__116);
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
//clear ___nl__bool__111;
#line 176
return ___nl__im__115;
#line 176
goto label_505;
#line 176
label_505:
;
#line 176
//clear ___nl__bool__111;
#line 176
c_rt_lib0clear(&___nl__im__115);
#line 177
c_rt_lib0move(&___nl__im__117, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__7));
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
c_rt_lib0clear(&___nl__im__2);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 177
c_rt_lib0clear(&___nl__im__37);
#line 177
//clear ___nl__bool__39;
#line 177
c_rt_lib0clear(&___nl__im__49);
#line 177
//clear ___nl__bool__50;
#line 177
c_rt_lib0clear(&___nl__im__51);
#line 177
c_rt_lib0clear(&___nl__im__63);
#line 177
//clear ___nl__bool__64;
#line 177
c_rt_lib0clear(&___nl__im__65);
#line 177
c_rt_lib0clear(&___nl__im__77);
#line 177
//clear ___nl__bool__78;
#line 177
c_rt_lib0clear(&___nl__im__79);
#line 177
c_rt_lib0clear(&___nl__im__91);
#line 177
//clear ___nl__bool__92;
#line 177
c_rt_lib0clear(&___nl__im__93);
#line 177
c_rt_lib0clear(&___nl__im__105);
#line 177
//clear ___nl__bool__106;
#line 177
c_rt_lib0clear(&___nl__im__107);
#line 177
return ___nl__im__117;
#line 178
goto label_558;
#line 178
label_531:
;
#line 179
c_rt_lib0move(&___nl__im__119,___get_global_string_const(36));
#line 179
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__119));
#line 179
c_rt_lib0clear(&___nl__im__119);
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
c_rt_lib0clear(&___nl__im__2);
#line 179
c_rt_lib0clear(&___nl__im__7);
#line 179
c_rt_lib0clear(&___nl__im__37);
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
return ___nl__im__118;
#line 180
goto label_558;
#line 180
label_558:
;
#line 180
//clear ___nl__bool__39;
#line 180
c_rt_lib0clear(&___nl__im__49);
#line 180
//clear ___nl__bool__50;
#line 180
c_rt_lib0clear(&___nl__im__51);
#line 180
c_rt_lib0clear(&___nl__im__63);
#line 180
//clear ___nl__bool__64;
#line 180
c_rt_lib0clear(&___nl__im__65);
#line 180
c_rt_lib0clear(&___nl__im__77);
#line 180
//clear ___nl__bool__78;
#line 180
c_rt_lib0clear(&___nl__im__79);
#line 180
c_rt_lib0clear(&___nl__im__91);
#line 180
//clear ___nl__bool__92;
#line 180
c_rt_lib0clear(&___nl__im__93);
#line 180
c_rt_lib0clear(&___nl__im__105);
#line 180
//clear ___nl__bool__106;
#line 180
c_rt_lib0clear(&___nl__im__107);
#line 180
c_rt_lib0clear(&___nl__im__117);
#line 180
c_rt_lib0clear(&___nl__im__118);
#line 180
c_rt_lib0clear(&___nl__im__37);
#line 147
goto label_121;
#line 182
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(0));
#line 182
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
#line 186
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 186
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 186
c_rt_lib0clear(&___nl__im__2);
#line 186
___nl__bool__1 = !___nl__bool__1;
#line 186
if(___nl__bool__1){ goto label_8;}
#line 186
//clear ___nl__bool__1;
#line 186
return ___nl__im__0;
#line 186
goto label_8;
#line 186
label_8:
;
#line 186
//clear ___nl__bool__1;
#line 187
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 187
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__4, ___nl__im__0));
#line 187
c_rt_lib0clear(&___nl__im__4);
#line 188
___nl__int__7 = 0;
#line 188
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_get(___nl__im__3, ___nl__int__7));
#line 188
//clear ___nl__int__7;
#line 188
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1012));
#line 188
___nl__bool__5 = c_rt_lib0ne(___nl__im__6, ___nl__im__8);
#line 188
c_rt_lib0clear(&___nl__im__6);
#line 188
c_rt_lib0clear(&___nl__im__8);
#line 188
___nl__bool__5 = !___nl__bool__5;
#line 188
if(___nl__bool__5){ goto label_26;}
#line 188
c_rt_lib0clear(&___nl__im__3);
#line 188
//clear ___nl__bool__5;
#line 188
return ___nl__im__0;
#line 188
goto label_26;
#line 188
label_26:
;
#line 188
//clear ___nl__bool__5;
#line 189
___nl__int__9 = 1;
#line 189
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 189
___nl__int__12 = 1;
#line 189
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 189
//clear ___nl__int__11;
#line 189
//clear ___nl__int__12;
#line 189
c_rt_lib0move(&___nl__im__3, array0subarray(___nl__im__3, ___nl__int__9, ___nl__int__10));
#line 189
//clear ___nl__int__9;
#line 189
//clear ___nl__int__10;
#line 190
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 191
___nl__int__15 = 0;
#line 191
___nl__int__16 = 1;
#line 191
___nl__int__17 = c_rt_lib0array_len(___nl__im__3);
#line 191
label_41:
;
#line 191
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 191
___nl__bool__18 = ___nl__int__19;
#line 191
if(___nl__bool__18){ goto label_106;}
#line 191
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__3, ___nl__int__15));
#line 191
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 194
c_rt_lib0move(&___nl__im__22, string_utils0is_int(___nl__im__14));
#line 194
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__22);
#line 194
c_rt_lib0clear(&___nl__im__22);
#line 194
if(___nl__bool__21){ goto label_54;}
#line 194
c_rt_lib0move(&___nl__im__23,___get_global_string_const(365));
#line 194
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__23);
#line 194
c_rt_lib0clear(&___nl__im__23);
#line 194
label_54:
;
#line 194
if(___nl__bool__21){ goto label_59;}
#line 194
c_rt_lib0move(&___nl__im__24,___get_global_string_const(110));
#line 194
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__24);
#line 194
c_rt_lib0clear(&___nl__im__24);
#line 194
label_59:
;
#line 194
if(___nl__bool__21){ goto label_64;}
#line 194
c_rt_lib0move(&___nl__im__25,___get_global_string_const(367));
#line 194
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__25);
#line 194
c_rt_lib0clear(&___nl__im__25);
#line 194
label_64:
;
#line 194
if(___nl__bool__21){ goto label_69;}
#line 194
c_rt_lib0move(&___nl__im__26,___get_global_string_const(105));
#line 194
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__26);
#line 194
c_rt_lib0clear(&___nl__im__26);
#line 194
label_69:
;
#line 194
if(___nl__bool__21){ goto label_74;}
#line 194
c_rt_lib0move(&___nl__im__27,___get_global_string_const(455));
#line 194
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__27);
#line 194
c_rt_lib0clear(&___nl__im__27);
#line 194
label_74:
;
#line 194
if(___nl__bool__21){ goto label_79;}
#line 195
c_rt_lib0move(&___nl__im__28,___get_global_string_const(320));
#line 195
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__28);
#line 195
c_rt_lib0clear(&___nl__im__28);
#line 195
label_79:
;
#line 195
if(___nl__bool__21){ goto label_84;}
#line 195
c_rt_lib0move(&___nl__im__29,___get_global_string_const(373));
#line 195
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__29);
#line 195
c_rt_lib0clear(&___nl__im__29);
#line 195
label_84:
;
#line 195
___nl__bool__21 = !___nl__bool__21;
#line 195
___nl__bool__21 = !___nl__bool__21;
#line 195
if(___nl__bool__21){ goto label_100;}
#line 192
c_rt_lib0clear(&___nl__im__3);
#line 192
c_rt_lib0clear(&___nl__im__13);
#line 192
c_rt_lib0clear(&___nl__im__14);
#line 192
//clear ___nl__int__15;
#line 192
//clear ___nl__int__16;
#line 192
//clear ___nl__int__17;
#line 192
//clear ___nl__bool__18;
#line 192
//clear ___nl__int__19;
#line 192
c_rt_lib0clear(&___nl__im__20);
#line 192
//clear ___nl__bool__21;
#line 192
return ___nl__im__0;
#line 192
goto label_100;
#line 192
label_100:
;
#line 192
//clear ___nl__bool__21;
#line 196
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_add(___nl__im__13, ___nl__im__14));
#line 196
c_rt_lib0clear(&___nl__im__14);
#line 197
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 197
goto label_41;
#line 197
label_106:
;
#line 198
c_rt_lib0move(&___nl__im__31,___get_global_string_const(36));
#line 198
c_rt_lib0move(&___nl__im__30, string0split(___nl__im__31, ___nl__im__13));
#line 198
c_rt_lib0clear(&___nl__im__31);
#line 199
c_rt_lib0move(&___nl__im__32,___get_global_int_const(0));
#line 200
___nl__int__34 = 1;
#line 200
___nl__int__34 = -___nl__int__34;
#line 200
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 200
c_rt_lib0move(&___nl__im__33, string_utils_priv0cal_expr(___nl__im__30, &___nl__im__32, ___nl__im__35));
#line 200
//clear ___nl__int__34;
#line 200
c_rt_lib0clear(&___nl__im__35);
#line 200
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(77));
#line 200
if(___nl__bool__36){ goto label_124;}
#line 202
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(78));
#line 202
if(___nl__bool__36){ goto label_147;}
#line 202
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 202
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__33));
#line 202
nl_die_arg(___nl__im__37);
#line 200
label_124:
;
#line 200
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(77)));
#line 200
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 201
c_rt_lib0move(&___nl__im__40,___get_global_string_const(36));
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
c_rt_lib0clear(&___nl__im__30);
#line 201
c_rt_lib0clear(&___nl__im__32);
#line 201
c_rt_lib0clear(&___nl__im__33);
#line 201
//clear ___nl__bool__36;
#line 201
c_rt_lib0clear(&___nl__im__37);
#line 201
c_rt_lib0clear(&___nl__im__38);
#line 201
c_rt_lib0clear(&___nl__im__39);
#line 201
return ___nl__im__40;
#line 202
goto label_171;
#line 202
label_147:
;
#line 202
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(78)));
#line 202
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 203
c_rt_lib0clear(&___nl__im__0);
#line 203
c_rt_lib0clear(&___nl__im__3);
#line 203
c_rt_lib0clear(&___nl__im__13);
#line 203
c_rt_lib0clear(&___nl__im__14);
#line 203
//clear ___nl__int__15;
#line 203
//clear ___nl__int__16;
#line 203
//clear ___nl__int__17;
#line 203
//clear ___nl__bool__18;
#line 203
//clear ___nl__int__19;
#line 203
c_rt_lib0clear(&___nl__im__20);
#line 203
c_rt_lib0clear(&___nl__im__30);
#line 203
c_rt_lib0clear(&___nl__im__32);
#line 203
c_rt_lib0clear(&___nl__im__33);
#line 203
//clear ___nl__bool__36;
#line 203
c_rt_lib0clear(&___nl__im__37);
#line 203
c_rt_lib0clear(&___nl__im__38);
#line 203
c_rt_lib0clear(&___nl__im__39);
#line 203
c_rt_lib0clear(&___nl__im__40);
#line 203
c_rt_lib0clear(&___nl__im__42);
#line 203
return ___nl__im__41;
#line 204
goto label_171;
#line 204
label_171:
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
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
#line 211
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__1, ___nl__im__0));
#line 214
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 214
___nl__int__8 = 3;
#line 214
___nl__int__9 = ___nl__int__7 == ___nl__int__8;
#line 214
___nl__bool__3 = ___nl__int__9;
#line 214
//clear ___nl__int__7;
#line 214
//clear ___nl__int__8;
#line 214
//clear ___nl__int__9;
#line 214
___nl__bool__6 = !___nl__bool__3;
#line 214
if(___nl__bool__6){ goto label_15;}
#line 215
___nl__int__11 = 0;
#line 215
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__11));
#line 215
//clear ___nl__int__11;
#line 215
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__10);
#line 215
c_rt_lib0clear(&___nl__im__10);
#line 215
label_15:
;
#line 215
//clear ___nl__bool__6;
#line 215
___nl__bool__5 = !___nl__bool__3;
#line 215
if(___nl__bool__5){ goto label_24;}
#line 216
___nl__int__13 = 1;
#line 216
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__13));
#line 216
//clear ___nl__int__13;
#line 216
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__12);
#line 216
c_rt_lib0clear(&___nl__im__12);
#line 216
label_24:
;
#line 216
//clear ___nl__bool__5;
#line 216
___nl__bool__4 = !___nl__bool__3;
#line 216
if(___nl__bool__4){ goto label_33;}
#line 217
___nl__int__15 = 2;
#line 217
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__2, ___nl__int__15));
#line 217
//clear ___nl__int__15;
#line 217
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__14);
#line 217
c_rt_lib0clear(&___nl__im__14);
#line 217
label_33:
;
#line 217
//clear ___nl__bool__4;
#line 217
___nl__bool__3 = !___nl__bool__3;
#line 217
___nl__bool__3 = !___nl__bool__3;
#line 217
if(___nl__bool__3){ goto label_47;}
#line 212
c_rt_lib0move(&___nl__im__17,___get_global_string_const(36));
#line 212
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__17));
#line 212
c_rt_lib0clear(&___nl__im__17);
#line 212
c_rt_lib0clear(&___nl__im__0);
#line 212
c_rt_lib0clear(&___nl__im__1);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
//clear ___nl__bool__3;
#line 212
return ___nl__im__16;
#line 212
goto label_47;
#line 212
label_47:
;
#line 212
//clear ___nl__bool__3;
#line 212
c_rt_lib0clear(&___nl__im__16);
#line 218
___nl__int__20 = 0;
#line 218
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__2, ___nl__int__20));
#line 218
//clear ___nl__int__20;
#line 218
___nl__int__18 = ptd0string_to_int(___nl__im__19);
#line 218
c_rt_lib0clear(&___nl__im__19);
#line 219
___nl__int__23 = 1;
#line 219
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__2, ___nl__int__23));
#line 219
//clear ___nl__int__23;
#line 219
___nl__int__21 = ptd0string_to_int(___nl__im__22);
#line 219
c_rt_lib0clear(&___nl__im__22);
#line 220
___nl__int__26 = 2;
#line 220
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__2, ___nl__int__26));
#line 220
//clear ___nl__int__26;
#line 220
___nl__int__24 = ptd0string_to_int(___nl__im__25);
#line 220
c_rt_lib0clear(&___nl__im__25);
#line 221
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__18));
#line 221
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__21));
#line 221
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__24));
#line 221
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_string_const(1288), ___nl__im__29, ___get_global_string_const(1289), ___nl__im__30, ___get_global_string_const(1290), ___nl__im__31));
#line 221
c_rt_lib0clear(&___nl__im__29);
#line 221
c_rt_lib0clear(&___nl__im__30);
#line 221
c_rt_lib0clear(&___nl__im__31);
#line 221
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__28));
#line 221
c_rt_lib0clear(&___nl__im__28);
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
//clear ___nl__int__18;
#line 221
//clear ___nl__int__21;
#line 221
//clear ___nl__int__24;
#line 221
return ___nl__im__27;
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
#line 225
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 226
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 226
c_rt_lib0move(&___nl__im__4, string0split(___nl__im__5, ___nl__im__0));
#line 226
c_rt_lib0clear(&___nl__im__5);
#line 226
___nl__int__7 = 0;
#line 226
___nl__int__8 = 1;
#line 226
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 226
label_7:
;
#line 226
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 226
___nl__bool__10 = ___nl__int__11;
#line 226
if(___nl__bool__10){ goto label_26;}
#line 226
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__4, ___nl__int__7));
#line 226
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 227
___nl__bool__14 = c_rt_lib0eq(___nl__im__6, ___nl__im__1);
#line 227
if(___nl__bool__14){ goto label_17;}
#line 227
c_rt_lib0copy(&___nl__im__13, ___nl__im__6);
#line 227
goto label_19;
#line 227
label_17:
;
#line 227
c_rt_lib0copy(&___nl__im__13, ___nl__im__2);
#line 227
label_19:
;
#line 227
//clear ___nl__bool__14;
#line 227
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 227
c_rt_lib0clear(&___nl__im__13);
#line 227
c_rt_lib0clear(&___nl__im__6);
#line 228
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 228
goto label_7;
#line 228
label_26:
;
#line 229
c_rt_lib0clear(&___nl__im__0);
#line 229
c_rt_lib0clear(&___nl__im__1);
#line 229
c_rt_lib0clear(&___nl__im__2);
#line 229
c_rt_lib0clear(&___nl__im__4);
#line 229
c_rt_lib0clear(&___nl__im__6);
#line 229
//clear ___nl__int__7;
#line 229
//clear ___nl__int__8;
#line 229
//clear ___nl__int__9;
#line 229
//clear ___nl__bool__10;
#line 229
//clear ___nl__int__11;
#line 229
c_rt_lib0clear(&___nl__im__12);
#line 229
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
#line 233
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 233
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 233
c_rt_lib0clear(&___nl__im__2);
#line 233
___nl__bool__1 = !___nl__bool__1;
#line 233
if(___nl__bool__1){ goto label_10;}
#line 233
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
//clear ___nl__bool__1;
#line 233
return ___nl__im__3;
#line 233
goto label_10;
#line 233
label_10:
;
#line 233
//clear ___nl__bool__1;
#line 233
c_rt_lib0clear(&___nl__im__3);
#line 234
___nl__int__5 = string0length(___nl__im__0);
#line 234
___nl__int__6 = 1;
#line 234
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 234
//clear ___nl__int__5;
#line 234
//clear ___nl__int__6;
#line 235
label_18:
;
#line 235
___nl__int__9 = 0;
#line 235
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 235
___nl__bool__7 = ___nl__int__10;
#line 235
//clear ___nl__int__9;
#line 235
//clear ___nl__int__10;
#line 235
___nl__bool__8 = !___nl__bool__7;
#line 235
if(___nl__bool__8){ goto label_33;}
#line 235
___nl__int__12 = 1;
#line 235
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__12));
#line 235
//clear ___nl__int__12;
#line 235
c_rt_lib0move(&___nl__im__13, string_utils0is_whitespace(___nl__im__11));
#line 235
___nl__bool__7 = c_rt_lib0check_true_native(___nl__im__13);
#line 235
c_rt_lib0clear(&___nl__im__11);
#line 235
c_rt_lib0clear(&___nl__im__13);
#line 235
label_33:
;
#line 235
//clear ___nl__bool__8;
#line 235
___nl__bool__7 = !___nl__bool__7;
#line 235
if(___nl__bool__7){ goto label_41;}
#line 236
___nl__int__14 = 1;
#line 236
___nl__int__4 = ___nl__int__4 - ___nl__int__14;
#line 236
//clear ___nl__int__14;
#line 237
goto label_18;
#line 237
label_41:
;
#line 238
___nl__int__16 = 0;
#line 238
___nl__int__18 = 1;
#line 238
___nl__int__17 = ___nl__int__4 + ___nl__int__18;
#line 238
//clear ___nl__int__18;
#line 238
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__16, ___nl__int__17));
#line 238
//clear ___nl__int__16;
#line 238
//clear ___nl__int__17;
#line 238
c_rt_lib0clear(&___nl__im__0);
#line 238
//clear ___nl__int__4;
#line 238
//clear ___nl__bool__7;
#line 238
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
#line 242
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 242
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 242
c_rt_lib0clear(&___nl__im__2);
#line 242
___nl__bool__1 = !___nl__bool__1;
#line 242
if(___nl__bool__1){ goto label_8;}
#line 242
//clear ___nl__bool__1;
#line 242
return ___nl__im__0;
#line 242
goto label_8;
#line 242
label_8:
;
#line 242
//clear ___nl__bool__1;
#line 243
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 244
___nl__int__5 = c_rt_lib0array_len(___nl__im__3);
#line 244
___nl__int__6 = 1;
#line 244
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 244
//clear ___nl__int__5;
#line 244
//clear ___nl__int__6;
#line 245
label_16:
;
#line 245
___nl__int__9 = 0;
#line 245
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 245
___nl__bool__7 = ___nl__int__10;
#line 245
//clear ___nl__int__9;
#line 245
//clear ___nl__int__10;
#line 245
___nl__bool__8 = !___nl__bool__7;
#line 245
if(___nl__bool__8){ goto label_29;}
#line 245
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 245
c_rt_lib0move(&___nl__im__12,___get_global_string_const(20));
#line 245
___nl__bool__7 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 245
c_rt_lib0clear(&___nl__im__11);
#line 245
c_rt_lib0clear(&___nl__im__12);
#line 245
label_29:
;
#line 245
//clear ___nl__bool__8;
#line 245
___nl__bool__7 = !___nl__bool__7;
#line 245
if(___nl__bool__7){ goto label_37;}
#line 246
___nl__int__13 = 1;
#line 246
___nl__int__4 = ___nl__int__4 - ___nl__int__13;
#line 246
//clear ___nl__int__13;
#line 247
goto label_16;
#line 247
label_37:
;
#line 248
___nl__int__15 = 0;
#line 248
___nl__int__17 = 1;
#line 248
___nl__int__16 = ___nl__int__4 + ___nl__int__17;
#line 248
//clear ___nl__int__17;
#line 248
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__16));
#line 248
//clear ___nl__int__15;
#line 248
//clear ___nl__int__16;
#line 248
c_rt_lib0clear(&___nl__im__0);
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
//clear ___nl__int__4;
#line 248
//clear ___nl__bool__7;
#line 248
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
#line 252
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 252
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 252
c_rt_lib0clear(&___nl__im__2);
#line 252
___nl__bool__1 = !___nl__bool__1;
#line 252
if(___nl__bool__1){ goto label_8;}
#line 252
//clear ___nl__bool__1;
#line 252
return ___nl__im__0;
#line 252
goto label_8;
#line 252
label_8:
;
#line 252
//clear ___nl__bool__1;
#line 253
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 254
___nl__int__4 = 0;
#line 255
label_12:
;
#line 255
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 255
___nl__int__8 = ___nl__int__4 < ___nl__int__7;
#line 255
___nl__bool__5 = ___nl__int__8;
#line 255
//clear ___nl__int__7;
#line 255
//clear ___nl__int__8;
#line 255
___nl__bool__6 = !___nl__bool__5;
#line 255
if(___nl__bool__6){ goto label_25;}
#line 255
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 255
c_rt_lib0move(&___nl__im__10,___get_global_string_const(20));
#line 255
___nl__bool__5 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 255
c_rt_lib0clear(&___nl__im__9);
#line 255
c_rt_lib0clear(&___nl__im__10);
#line 255
label_25:
;
#line 255
//clear ___nl__bool__6;
#line 255
___nl__bool__5 = !___nl__bool__5;
#line 255
if(___nl__bool__5){ goto label_33;}
#line 256
___nl__int__11 = 1;
#line 256
___nl__int__4 = ___nl__int__4 + ___nl__int__11;
#line 256
//clear ___nl__int__11;
#line 257
goto label_12;
#line 257
label_33:
;
#line 258
___nl__int__14 = c_rt_lib0array_len(___nl__im__3);
#line 258
___nl__int__15 = ___nl__int__4 != ___nl__int__14;
#line 258
___nl__bool__13 = ___nl__int__15;
#line 258
//clear ___nl__int__14;
#line 258
//clear ___nl__int__15;
#line 258
if(___nl__bool__13){ goto label_42;}
#line 260
c_rt_lib0move(&___nl__im__12,___get_global_string_const(20));
#line 260
goto label_46;
#line 260
label_42:
;
#line 259
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__4));
#line 259
c_rt_lib0move(&___nl__im__12, string0substr2(___nl__im__0, ___nl__im__16));
#line 259
c_rt_lib0clear(&___nl__im__16);
#line 259
label_46:
;
#line 259
//clear ___nl__bool__13;
#line 259
c_rt_lib0clear(&___nl__im__0);
#line 259
c_rt_lib0clear(&___nl__im__3);
#line 259
//clear ___nl__int__4;
#line 259
//clear ___nl__bool__5;
#line 259
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
#line 264
c_rt_lib0move(&___nl__im__2,___get_global_string_const(20));
#line 264
c_rt_lib0move(&___nl__im__3,___get_global_string_const(40));
#line 264
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1291));
#line 264
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1292));
#line 264
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1293));
#line 264
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1294));
#line 264
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1295));
#line 264
c_rt_lib0move(&___nl__im__9,___get_global_string_const(1296));
#line 264
c_rt_lib0move(&___nl__im__10,___get_global_string_const(1297));
#line 264
c_rt_lib0move(&___nl__im__11,___get_global_string_const(1298));
#line 264
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1299));
#line 264
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1300));
#line 264
c_rt_lib0move(&___nl__im__14,___get_global_string_const(65));
#line 264
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1301));
#line 264
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1302));
#line 264
c_rt_lib0move(&___nl__im__17,___get_global_string_const(1303));
#line 264
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(16, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17));
#line 264
c_rt_lib0clear(&___nl__im__2);
#line 264
c_rt_lib0clear(&___nl__im__3);
#line 264
c_rt_lib0clear(&___nl__im__4);
#line 264
c_rt_lib0clear(&___nl__im__5);
#line 264
c_rt_lib0clear(&___nl__im__6);
#line 264
c_rt_lib0clear(&___nl__im__7);
#line 264
c_rt_lib0clear(&___nl__im__8);
#line 264
c_rt_lib0clear(&___nl__im__9);
#line 264
c_rt_lib0clear(&___nl__im__10);
#line 264
c_rt_lib0clear(&___nl__im__11);
#line 264
c_rt_lib0clear(&___nl__im__12);
#line 264
c_rt_lib0clear(&___nl__im__13);
#line 264
c_rt_lib0clear(&___nl__im__14);
#line 264
c_rt_lib0clear(&___nl__im__15);
#line 264
c_rt_lib0clear(&___nl__im__16);
#line 264
c_rt_lib0clear(&___nl__im__17);
#line 265
___nl__int__21 = 16;
#line 265
___nl__int__22 = getIntFromImm(___nl__im__0);
#line 265
___nl__int__20 = ___nl__int__22 / ___nl__int__21;
#line 265
//clear ___nl__int__21;
#line 265
//clear ___nl__int__22;
#line 265
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__1, ___nl__int__20));
#line 265
//clear ___nl__int__20;
#line 265
___nl__int__25 = 16;
#line 265
___nl__int__26 = getIntFromImm(___nl__im__0);
#line 265
___nl__int__24 = ___nl__int__26 % ___nl__int__25;
#line 265
//clear ___nl__int__25;
#line 265
//clear ___nl__int__26;
#line 265
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 265
//clear ___nl__int__24;
#line 265
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 265
c_rt_lib0clear(&___nl__im__19);
#line 265
c_rt_lib0clear(&___nl__im__23);
#line 265
c_rt_lib0clear(&___nl__im__0);
#line 265
c_rt_lib0clear(&___nl__im__1);
#line 265
return ___nl__im__18;
#line 265
c_rt_lib0clear(&___nl__im__0);
#line 265
c_rt_lib0clear(&___nl__im__1);
#line 265
c_rt_lib0clear(&___nl__im__18);
#line 265
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
#line 269
___nl__int__2 = 0;
#line 270
___nl__int__5 = 48;
#line 270
___nl__int__6 = getIntFromImm(___nl__im__0);
#line 270
___nl__int__7 = ___nl__int__6 >= ___nl__int__5;
#line 270
___nl__bool__3 = ___nl__int__7;
#line 270
//clear ___nl__int__5;
#line 270
//clear ___nl__int__6;
#line 270
//clear ___nl__int__7;
#line 270
___nl__bool__4 = !___nl__bool__3;
#line 270
if(___nl__bool__4){ goto label_17;}
#line 270
___nl__int__8 = 57;
#line 270
___nl__int__9 = getIntFromImm(___nl__im__0);
#line 270
___nl__int__10 = ___nl__int__9 <= ___nl__int__8;
#line 270
___nl__bool__3 = ___nl__int__10;
#line 270
//clear ___nl__int__8;
#line 270
//clear ___nl__int__9;
#line 270
//clear ___nl__int__10;
#line 270
label_17:
;
#line 270
//clear ___nl__bool__4;
#line 270
___nl__bool__3 = !___nl__bool__3;
#line 270
if(___nl__bool__3){ goto label_28;}
#line 271
___nl__int__11 = getIntFromImm(___nl__im__0);
#line 271
___nl__int__2 = ___nl__int__2 + ___nl__int__11;
#line 271
//clear ___nl__int__11;
#line 272
___nl__int__12 = 48;
#line 272
___nl__int__2 = ___nl__int__2 - ___nl__int__12;
#line 272
//clear ___nl__int__12;
#line 273
goto label_88;
#line 273
label_28:
;
#line 273
___nl__int__14 = 65;
#line 273
___nl__int__15 = getIntFromImm(___nl__im__0);
#line 273
___nl__int__16 = ___nl__int__15 >= ___nl__int__14;
#line 273
___nl__bool__3 = ___nl__int__16;
#line 273
//clear ___nl__int__14;
#line 273
//clear ___nl__int__15;
#line 273
//clear ___nl__int__16;
#line 273
___nl__bool__13 = !___nl__bool__3;
#line 273
if(___nl__bool__13){ goto label_45;}
#line 273
___nl__int__17 = 70;
#line 273
___nl__int__18 = getIntFromImm(___nl__im__0);
#line 273
___nl__int__19 = ___nl__int__18 <= ___nl__int__17;
#line 273
___nl__bool__3 = ___nl__int__19;
#line 273
//clear ___nl__int__17;
#line 273
//clear ___nl__int__18;
#line 273
//clear ___nl__int__19;
#line 273
label_45:
;
#line 273
//clear ___nl__bool__13;
#line 273
___nl__bool__3 = !___nl__bool__3;
#line 273
if(___nl__bool__3){ goto label_56;}
#line 274
___nl__int__20 = getIntFromImm(___nl__im__0);
#line 274
___nl__int__2 = ___nl__int__2 + ___nl__int__20;
#line 274
//clear ___nl__int__20;
#line 275
___nl__int__21 = 55;
#line 275
___nl__int__2 = ___nl__int__2 - ___nl__int__21;
#line 275
//clear ___nl__int__21;
#line 276
goto label_88;
#line 276
label_56:
;
#line 276
___nl__int__23 = 97;
#line 276
___nl__int__24 = getIntFromImm(___nl__im__0);
#line 276
___nl__int__25 = ___nl__int__24 >= ___nl__int__23;
#line 276
___nl__bool__3 = ___nl__int__25;
#line 276
//clear ___nl__int__23;
#line 276
//clear ___nl__int__24;
#line 276
//clear ___nl__int__25;
#line 276
___nl__bool__22 = !___nl__bool__3;
#line 276
if(___nl__bool__22){ goto label_73;}
#line 276
___nl__int__26 = 102;
#line 276
___nl__int__27 = getIntFromImm(___nl__im__0);
#line 276
___nl__int__28 = ___nl__int__27 <= ___nl__int__26;
#line 276
___nl__bool__3 = ___nl__int__28;
#line 276
//clear ___nl__int__26;
#line 276
//clear ___nl__int__27;
#line 276
//clear ___nl__int__28;
#line 276
label_73:
;
#line 276
//clear ___nl__bool__22;
#line 276
___nl__bool__3 = !___nl__bool__3;
#line 276
if(___nl__bool__3){ goto label_84;}
#line 277
___nl__int__29 = getIntFromImm(___nl__im__0);
#line 277
___nl__int__2 = ___nl__int__2 + ___nl__int__29;
#line 277
//clear ___nl__int__29;
#line 278
___nl__int__30 = 87;
#line 278
___nl__int__2 = ___nl__int__2 - ___nl__int__30;
#line 278
//clear ___nl__int__30;
#line 279
goto label_88;
#line 279
label_84:
;
#line 280
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 280
nl_die_arg(___nl__im__31);
#line 281
goto label_88;
#line 281
label_88:
;
#line 281
//clear ___nl__bool__3;
#line 281
c_rt_lib0clear(&___nl__im__31);
#line 282
___nl__int__32 = 16;
#line 282
___nl__int__2 = ___nl__int__2 * ___nl__int__32;
#line 282
//clear ___nl__int__32;
#line 283
___nl__int__35 = 48;
#line 283
___nl__int__36 = getIntFromImm(___nl__im__1);
#line 283
___nl__int__37 = ___nl__int__36 >= ___nl__int__35;
#line 283
___nl__bool__33 = ___nl__int__37;
#line 283
//clear ___nl__int__35;
#line 283
//clear ___nl__int__36;
#line 283
//clear ___nl__int__37;
#line 283
___nl__bool__34 = !___nl__bool__33;
#line 283
if(___nl__bool__34){ goto label_110;}
#line 283
___nl__int__38 = 57;
#line 283
___nl__int__39 = getIntFromImm(___nl__im__1);
#line 283
___nl__int__40 = ___nl__int__39 <= ___nl__int__38;
#line 283
___nl__bool__33 = ___nl__int__40;
#line 283
//clear ___nl__int__38;
#line 283
//clear ___nl__int__39;
#line 283
//clear ___nl__int__40;
#line 283
label_110:
;
#line 283
//clear ___nl__bool__34;
#line 283
___nl__bool__33 = !___nl__bool__33;
#line 283
if(___nl__bool__33){ goto label_121;}
#line 284
___nl__int__41 = getIntFromImm(___nl__im__1);
#line 284
___nl__int__2 = ___nl__int__2 + ___nl__int__41;
#line 284
//clear ___nl__int__41;
#line 285
___nl__int__42 = 48;
#line 285
___nl__int__2 = ___nl__int__2 - ___nl__int__42;
#line 285
//clear ___nl__int__42;
#line 286
goto label_181;
#line 286
label_121:
;
#line 286
___nl__int__44 = 65;
#line 286
___nl__int__45 = getIntFromImm(___nl__im__1);
#line 286
___nl__int__46 = ___nl__int__45 >= ___nl__int__44;
#line 286
___nl__bool__33 = ___nl__int__46;
#line 286
//clear ___nl__int__44;
#line 286
//clear ___nl__int__45;
#line 286
//clear ___nl__int__46;
#line 286
___nl__bool__43 = !___nl__bool__33;
#line 286
if(___nl__bool__43){ goto label_138;}
#line 286
___nl__int__47 = 70;
#line 286
___nl__int__48 = getIntFromImm(___nl__im__1);
#line 286
___nl__int__49 = ___nl__int__48 <= ___nl__int__47;
#line 286
___nl__bool__33 = ___nl__int__49;
#line 286
//clear ___nl__int__47;
#line 286
//clear ___nl__int__48;
#line 286
//clear ___nl__int__49;
#line 286
label_138:
;
#line 286
//clear ___nl__bool__43;
#line 286
___nl__bool__33 = !___nl__bool__33;
#line 286
if(___nl__bool__33){ goto label_149;}
#line 287
___nl__int__50 = getIntFromImm(___nl__im__1);
#line 287
___nl__int__2 = ___nl__int__2 + ___nl__int__50;
#line 287
//clear ___nl__int__50;
#line 288
___nl__int__51 = 55;
#line 288
___nl__int__2 = ___nl__int__2 - ___nl__int__51;
#line 288
//clear ___nl__int__51;
#line 289
goto label_181;
#line 289
label_149:
;
#line 289
___nl__int__53 = 97;
#line 289
___nl__int__54 = getIntFromImm(___nl__im__1);
#line 289
___nl__int__55 = ___nl__int__54 >= ___nl__int__53;
#line 289
___nl__bool__33 = ___nl__int__55;
#line 289
//clear ___nl__int__53;
#line 289
//clear ___nl__int__54;
#line 289
//clear ___nl__int__55;
#line 289
___nl__bool__52 = !___nl__bool__33;
#line 289
if(___nl__bool__52){ goto label_166;}
#line 289
___nl__int__56 = 102;
#line 289
___nl__int__57 = getIntFromImm(___nl__im__1);
#line 289
___nl__int__58 = ___nl__int__57 <= ___nl__int__56;
#line 289
___nl__bool__33 = ___nl__int__58;
#line 289
//clear ___nl__int__56;
#line 289
//clear ___nl__int__57;
#line 289
//clear ___nl__int__58;
#line 289
label_166:
;
#line 289
//clear ___nl__bool__52;
#line 289
___nl__bool__33 = !___nl__bool__33;
#line 289
if(___nl__bool__33){ goto label_177;}
#line 290
___nl__int__59 = getIntFromImm(___nl__im__1);
#line 290
___nl__int__2 = ___nl__int__2 + ___nl__int__59;
#line 290
//clear ___nl__int__59;
#line 291
___nl__int__60 = 87;
#line 291
___nl__int__2 = ___nl__int__2 - ___nl__int__60;
#line 291
//clear ___nl__int__60;
#line 292
goto label_181;
#line 292
label_177:
;
#line 293
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(0));
#line 293
nl_die_arg(___nl__im__61);
#line 294
goto label_181;
#line 294
label_181:
;
#line 294
//clear ___nl__bool__33;
#line 294
c_rt_lib0clear(&___nl__im__61);
#line 295
c_rt_lib0move(&___nl__im__62, string0chr(___nl__int__2));
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
//clear ___nl__int__2;
#line 295
return ___nl__im__62;
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
//clear ___nl__int__2;
#line 295
c_rt_lib0clear(&___nl__im__62);
#line 295
return NULL;
return NULL;

}

ImmT  string_utils0escape2hex310ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0escape2hex31");
ImmT  *var0 = &(_tab[0]);
return string_utils0escape2hex31(*var0);
}
ImmT  string_utils0escape2hex31(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_utils_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 299
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 299
c_rt_lib0move(&___nl__im__3, c_std_lib0string_escape2hex31(___nl__im__0));
#line 299
c_rt_lib0move(&___nl__im__1, ptd0ensure(___nl__im__2, ___nl__im__3));
#line 299
c_rt_lib0clear(&___nl__im__2);
#line 299
c_rt_lib0clear(&___nl__im__3);
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
return ___nl__im__1;
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
#line 303
___nl__int__2 = 1;
#line 304
___nl__int__3 = 0;
#line 304
___nl__int__4 = 1;
#line 304
label_3:
;
#line 304
___nl__int__6 = ___nl__int__3 >= ___nl__int__1;
#line 304
___nl__bool__5 = ___nl__int__6;
#line 304
if(___nl__bool__5){ goto label_12;}
#line 305
___nl__int__7 = 10;
#line 305
___nl__int__2 = ___nl__int__2 * ___nl__int__7;
#line 305
//clear ___nl__int__7;
#line 306
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 306
goto label_3;
#line 306
label_12:
;
#line 307
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 307
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__2));
#line 307
c_rt_lib0move(&___nl__im__10, ptd0int_to_string(___nl__im__11));
#line 307
c_rt_lib0clear(&___nl__im__11);
#line 307
c_rt_lib0move(&___nl__im__8, ptd0ensure(___nl__im__9, ___nl__im__10));
#line 307
c_rt_lib0clear(&___nl__im__9);
#line 307
c_rt_lib0clear(&___nl__im__10);
#line 307
c_rt_lib0move(&___nl__im__0, float0mul(___nl__im__0, ___nl__im__8));
#line 307
c_rt_lib0clear(&___nl__im__8);
#line 308
c_rt_lib0move(&___nl__im__0, float0round(___nl__im__0));
#line 309
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 310
___nl__int__15 = 0;
#line 310
___nl__int__16 = 1;
#line 310
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__16));
#line 310
//clear ___nl__int__15;
#line 310
//clear ___nl__int__16;
#line 310
c_rt_lib0move(&___nl__im__17,___get_global_string_const(365));
#line 310
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__17);
#line 310
c_rt_lib0clear(&___nl__im__14);
#line 310
c_rt_lib0clear(&___nl__im__17);
#line 310
___nl__bool__13 = !___nl__bool__13;
#line 310
if(___nl__bool__13){ goto label_42;}
#line 311
c_rt_lib0move(&___nl__im__12,___get_global_string_const(365));
#line 312
___nl__int__18 = 1;
#line 312
c_rt_lib0move(&___nl__im__19, c_rt_lib0int_new(___nl__int__18));
#line 312
c_rt_lib0move(&___nl__im__0, string0substr2(___nl__im__0, ___nl__im__19));
#line 312
//clear ___nl__int__18;
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 313
goto label_42;
#line 313
label_42:
;
#line 313
//clear ___nl__bool__13;
#line 314
___nl__int__22 = 1;
#line 314
___nl__int__21 = ___nl__int__1 + ___nl__int__22;
#line 314
//clear ___nl__int__22;
#line 314
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__21));
#line 314
c_rt_lib0move(&___nl__im__20, string_utils0int2str_leading_digits(___nl__im__0, ___nl__im__23));
#line 314
//clear ___nl__int__21;
#line 314
c_rt_lib0clear(&___nl__im__23);
#line 315
___nl__int__24 = string0length(___nl__im__20);
#line 316
___nl__int__26 = 0;
#line 316
___nl__int__27 = ___nl__int__1 == ___nl__int__26;
#line 316
___nl__bool__25 = ___nl__int__27;
#line 316
//clear ___nl__int__26;
#line 316
//clear ___nl__int__27;
#line 316
___nl__bool__25 = !___nl__bool__25;
#line 316
if(___nl__bool__25){ goto label_73;}
#line 316
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__12, ___nl__im__20));
#line 316
c_rt_lib0clear(&___nl__im__0);
#line 316
//clear ___nl__int__1;
#line 316
//clear ___nl__int__2;
#line 316
//clear ___nl__int__3;
#line 316
//clear ___nl__int__4;
#line 316
//clear ___nl__bool__5;
#line 316
//clear ___nl__int__6;
#line 316
c_rt_lib0clear(&___nl__im__12);
#line 316
c_rt_lib0clear(&___nl__im__20);
#line 316
//clear ___nl__int__24;
#line 316
//clear ___nl__bool__25;
#line 316
return ___nl__im__28;
#line 316
goto label_73;
#line 316
label_73:
;
#line 316
//clear ___nl__bool__25;
#line 316
c_rt_lib0clear(&___nl__im__28);
#line 317
___nl__int__33 = 0;
#line 317
___nl__int__34 = ___nl__int__24 - ___nl__int__1;
#line 317
c_rt_lib0move(&___nl__im__32, string0substr(___nl__im__20, ___nl__int__33, ___nl__int__34));
#line 317
//clear ___nl__int__33;
#line 317
//clear ___nl__int__34;
#line 317
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__12, ___nl__im__32));
#line 317
c_rt_lib0clear(&___nl__im__32);
#line 317
c_rt_lib0move(&___nl__im__35,___get_global_string_const(110));
#line 317
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__35));
#line 317
c_rt_lib0clear(&___nl__im__31);
#line 317
c_rt_lib0clear(&___nl__im__35);
#line 317
___nl__int__37 = ___nl__int__24 - ___nl__int__1;
#line 317
c_rt_lib0move(&___nl__im__36, string0substr(___nl__im__20, ___nl__int__37, ___nl__int__1));
#line 317
//clear ___nl__int__37;
#line 317
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__36));
#line 317
c_rt_lib0clear(&___nl__im__30);
#line 317
c_rt_lib0clear(&___nl__im__36);
#line 317
c_rt_lib0clear(&___nl__im__0);
#line 317
//clear ___nl__int__1;
#line 317
//clear ___nl__int__2;
#line 317
//clear ___nl__int__3;
#line 317
//clear ___nl__int__4;
#line 317
//clear ___nl__bool__5;
#line 317
//clear ___nl__int__6;
#line 317
c_rt_lib0clear(&___nl__im__12);
#line 317
c_rt_lib0clear(&___nl__im__20);
#line 317
//clear ___nl__int__24;
#line 317
return ___nl__im__29;
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
#line 321
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1304));
#line 321
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 321
c_rt_lib0clear(&___nl__im__3);
#line 322
___nl__int__6 = string0length(___nl__im__2);
#line 322
___nl__int__8 = string0length(___nl__im__0);
#line 322
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 322
c_rt_lib0move(&___nl__im__7, string_utils_priv0max(___nl__im__1, ___nl__im__9));
#line 322
//clear ___nl__int__8;
#line 322
c_rt_lib0clear(&___nl__im__9);
#line 322
___nl__int__10 = getIntFromImm(___nl__im__7);
#line 322
___nl__int__5 = ___nl__int__6 - ___nl__int__10;
#line 322
//clear ___nl__int__6;
#line 322
c_rt_lib0clear(&___nl__im__7);
#line 322
//clear ___nl__int__10;
#line 322
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__5));
#line 322
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__11));
#line 322
//clear ___nl__int__5;
#line 322
c_rt_lib0clear(&___nl__im__11);
#line 322
c_rt_lib0clear(&___nl__im__0);
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
c_rt_lib0clear(&___nl__im__2);
#line 322
return ___nl__im__4;
#line 322
c_rt_lib0clear(&___nl__im__0);
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
c_rt_lib0clear(&___nl__im__2);
#line 322
c_rt_lib0clear(&___nl__im__4);
#line 322
return NULL;
return NULL;

}

ImmT  string_utils_priv0max(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_utils_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
#line 326
___nl__int__4 = getIntFromImm(___nl__im__0);
#line 326
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 326
___nl__int__6 = ___nl__int__4 > ___nl__int__5;
#line 326
___nl__bool__3 = ___nl__int__6;
#line 326
//clear ___nl__int__4;
#line 326
//clear ___nl__int__5;
#line 326
//clear ___nl__int__6;
#line 326
if(___nl__bool__3){ goto label_10;}
#line 326
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 326
goto label_12;
#line 326
label_10:
;
#line 326
c_rt_lib0copy(&___nl__im__2, ___nl__im__0);
#line 326
label_12:
;
#line 326
//clear ___nl__bool__3;
#line 326
c_rt_lib0clear(&___nl__im__0);
#line 326
c_rt_lib0clear(&___nl__im__1);
#line 326
return ___nl__im__2;
#line 326
c_rt_lib0clear(&___nl__im__0);
#line 326
c_rt_lib0clear(&___nl__im__1);
#line 326
c_rt_lib0clear(&___nl__im__2);
#line 326
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
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
#line 330
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1304));
#line 330
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 331
___nl__int__6 = string0length(___nl__im__2);
#line 331
___nl__int__7 = getIntFromImm(___nl__im__1);
#line 331
___nl__int__5 = ___nl__int__6 - ___nl__int__7;
#line 331
//clear ___nl__int__6;
#line 331
//clear ___nl__int__7;
#line 331
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__5));
#line 331
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__8));
#line 331
//clear ___nl__int__5;
#line 331
c_rt_lib0clear(&___nl__im__8);
#line 331
c_rt_lib0clear(&___nl__im__0);
#line 331
c_rt_lib0clear(&___nl__im__1);
#line 331
c_rt_lib0clear(&___nl__im__2);
#line 331
return ___nl__im__4;
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
#line 335
___nl__int__4 = string0length(___nl__im__0);
#line 335
___nl__int__5 = string0length(___nl__im__1);
#line 335
___nl__int__6 = ___nl__int__4 >= ___nl__int__5;
#line 335
___nl__bool__2 = ___nl__int__6;
#line 335
//clear ___nl__int__4;
#line 335
//clear ___nl__int__5;
#line 335
//clear ___nl__int__6;
#line 335
___nl__bool__3 = !___nl__bool__2;
#line 335
if(___nl__bool__3){ goto label_16;}
#line 335
___nl__int__8 = 0;
#line 335
___nl__int__9 = string0length(___nl__im__1);
#line 335
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 335
//clear ___nl__int__8;
#line 335
//clear ___nl__int__9;
#line 335
___nl__bool__2 = c_rt_lib0eq(___nl__im__7, ___nl__im__1);
#line 335
c_rt_lib0clear(&___nl__im__7);
#line 335
label_16:
;
#line 335
//clear ___nl__bool__3;
#line 335
c_rt_lib0move(&___nl__im__10, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 335
c_rt_lib0clear(&___nl__im__0);
#line 335
c_rt_lib0clear(&___nl__im__1);
#line 335
//clear ___nl__bool__2;
#line 335
return ___nl__im__10;
#line 335
c_rt_lib0clear(&___nl__im__0);
#line 335
c_rt_lib0clear(&___nl__im__1);
#line 335
//clear ___nl__bool__2;
#line 335
c_rt_lib0clear(&___nl__im__10);
#line 335
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
#line 340
c_rt_lib0move(&___nl__im__4, string0r());
#line 340
c_rt_lib0move(&___nl__im__5, string0lf());
#line 340
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 340
c_rt_lib0clear(&___nl__im__4);
#line 340
c_rt_lib0clear(&___nl__im__5);
#line 340
c_rt_lib0move(&___nl__im__6, string0r());
#line 340
c_rt_lib0move(&___nl__im__7, string0lf());
#line 340
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(3, ___nl__im__3, ___nl__im__6, ___nl__im__7));
#line 340
c_rt_lib0clear(&___nl__im__3);
#line 340
c_rt_lib0clear(&___nl__im__6);
#line 340
c_rt_lib0clear(&___nl__im__7);
#line 341
c_rt_lib0move(&___nl__im__9, string0lf());
#line 341
c_rt_lib0move(&___nl__im__10, string0lf());
#line 341
c_rt_lib0move(&___nl__im__12, string0r());
#line 341
c_rt_lib0move(&___nl__im__13, string0lf());
#line 341
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 341
c_rt_lib0clear(&___nl__im__12);
#line 341
c_rt_lib0clear(&___nl__im__13);
#line 341
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__10, ___nl__im__11));
#line 341
c_rt_lib0clear(&___nl__im__9);
#line 341
c_rt_lib0clear(&___nl__im__10);
#line 341
c_rt_lib0clear(&___nl__im__11);
#line 341
c_rt_lib0move(&___nl__im__1, string0replace_arr(___nl__im__0, ___nl__im__2, ___nl__im__8));
#line 341
c_rt_lib0clear(&___nl__im__2);
#line 341
c_rt_lib0clear(&___nl__im__8);
#line 343
c_rt_lib0move(&___nl__im__15, ptd0string());
#line 343
c_rt_lib0move(&___nl__im__14, ptd0ensure(___nl__im__15, ___nl__im__1));
#line 343
c_rt_lib0clear(&___nl__im__15);
#line 343
c_rt_lib0clear(&___nl__im__0);
#line 343
c_rt_lib0clear(&___nl__im__1);
#line 343
return ___nl__im__14;
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
#line 347
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 347
c_rt_lib0move(&___nl__im__3, c_rt_lib0float_fixed_str(___nl__im__0));
#line 347
c_rt_lib0move(&___nl__im__1, ptd0ensure(___nl__im__2, ___nl__im__3));
#line 347
c_rt_lib0clear(&___nl__im__2);
#line 347
c_rt_lib0clear(&___nl__im__3);
#line 347
c_rt_lib0clear(&___nl__im__0);
#line 347
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
