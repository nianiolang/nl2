
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
c_rt_lib0move(&___nl__im__2,___get_global_const(447));
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
ImmT  ___nl__im__1 = NULL;
#line 25
c_rt_lib0move(&___nl__im__1, ptd0try_string_to_int(___nl__im__0));
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
return ___nl__im__1;
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
#line 29
c_rt_lib0move(&___nl__im__1,___get_global_const(37));
#line 29
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_add(___nl__im__0, ___nl__im__1));
#line 29
c_rt_lib0clear(&___nl__im__1);
#line 30
___nl__bool__2 = string_utils0is_integer_possibly_leading_zeros(___nl__im__0);
#line 30
___nl__bool__2 = !___nl__bool__2;
#line 30
___nl__bool__2 = !___nl__bool__2;
#line 30
if(___nl__bool__2){ goto label_2;}
#line 30
___nl__bool__3 = false;
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
//clear ___nl__bool__2;
#line 30
return ___nl__bool__3;
#line 30
goto label_1;
#line 30
label_2:
;
#line 30
label_1:
;
#line 30
//clear ___nl__bool__2;
#line 30
//clear ___nl__bool__3;
#line 31
c_rt_lib0move(&___nl__im__5,___get_global_const(21));
#line 31
___nl__bool__4 = c_rt_lib0eq(___nl__im__0, ___nl__im__5);
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
___nl__bool__4 = !___nl__bool__4;
#line 31
if(___nl__bool__4){ goto label_4;}
#line 31
___nl__bool__6 = true;
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
//clear ___nl__bool__4;
#line 31
return ___nl__bool__6;
#line 31
goto label_3;
#line 31
label_4:
;
#line 31
label_3:
;
#line 31
//clear ___nl__bool__4;
#line 31
//clear ___nl__bool__6;
#line 32
___nl__int__7 = 0;
#line 33
___nl__int__10 = 1;
#line 33
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__10));
#line 33
//clear ___nl__int__10;
#line 33
c_rt_lib0move(&___nl__im__11,___get_global_const(356));
#line 33
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 33
c_rt_lib0clear(&___nl__im__9);
#line 33
c_rt_lib0clear(&___nl__im__11);
#line 33
___nl__bool__8 = !___nl__bool__8;
#line 33
if(___nl__bool__8){ goto label_6;}
#line 33
___nl__int__12 = 1;
#line 33
___nl__int__7 = ___nl__int__7 + ___nl__int__12;
#line 33
//clear ___nl__int__12;
#line 33
goto label_5;
#line 33
label_6:
;
#line 33
label_5:
;
#line 33
//clear ___nl__bool__8;
#line 34
___nl__int__15 = 1;
#line 34
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__15));
#line 34
//clear ___nl__int__15;
#line 34
c_rt_lib0move(&___nl__im__16,___get_global_const(21));
#line 34
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__16);
#line 34
c_rt_lib0clear(&___nl__im__14);
#line 34
c_rt_lib0clear(&___nl__im__16);
#line 34
___nl__bool__13 = !___nl__bool__13;
#line 34
if(___nl__bool__13){ goto label_8;}
#line 34
___nl__bool__17 = false;
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
//clear ___nl__int__7;
#line 34
//clear ___nl__bool__13;
#line 34
return ___nl__bool__17;
#line 34
goto label_7;
#line 34
label_8:
;
#line 34
label_7:
;
#line 34
//clear ___nl__bool__13;
#line 34
//clear ___nl__bool__17;
#line 35
___nl__bool__18 = true;
#line 35
c_rt_lib0clear(&___nl__im__0);
#line 35
//clear ___nl__int__7;
#line 35
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
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
#line 39
c_rt_lib0move(&___nl__im__2, ptd0try_string_to_int(___nl__im__0));
#line 39
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(79));
#line 39
c_rt_lib0clear(&___nl__im__2);
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
return ___nl__bool__1;
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
#line 43
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 43
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 43
c_rt_lib0clear(&___nl__im__2);
#line 44
___nl__int__3 = string0length(___nl__im__1);
#line 45
___nl__int__5 = 3;
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
if(___nl__bool__4){ goto label_2;}
#line 45
___nl__bool__7 = false;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
//clear ___nl__int__3;
#line 45
//clear ___nl__bool__4;
#line 45
return ___nl__bool__7;
#line 45
goto label_1;
#line 45
label_2:
;
#line 45
label_1:
;
#line 45
//clear ___nl__bool__4;
#line 45
//clear ___nl__bool__7;
#line 46
___nl__int__8 = 0;
#line 47
___nl__int__11 = 1;
#line 47
c_rt_lib0move(&___nl__im__10, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__11));
#line 47
//clear ___nl__int__11;
#line 47
c_rt_lib0move(&___nl__im__12,___get_global_const(356));
#line 47
___nl__bool__9 = c_rt_lib0eq(___nl__im__10, ___nl__im__12);
#line 47
c_rt_lib0clear(&___nl__im__10);
#line 47
c_rt_lib0clear(&___nl__im__12);
#line 47
___nl__bool__9 = !___nl__bool__9;
#line 47
if(___nl__bool__9){ goto label_4;}
#line 47
___nl__int__13 = 1;
#line 47
___nl__int__8 = ___nl__int__8 + ___nl__int__13;
#line 47
//clear ___nl__int__13;
#line 47
goto label_3;
#line 47
label_4:
;
#line 47
label_3:
;
#line 47
//clear ___nl__bool__9;
#line 48
___nl__int__8 = ___nl__int__8;
#line 48
label_6:
;
#line 48
___nl__int__15 = ___nl__int__8 < ___nl__int__3;
#line 48
___nl__bool__14 = ___nl__int__15;
#line 48
//clear ___nl__int__15;
#line 48
___nl__bool__14 = !___nl__bool__14;
#line 48
if(___nl__bool__14){ goto label_5;}
#line 49
___nl__int__18 = 1;
#line 49
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__18));
#line 49
//clear ___nl__int__18;
#line 49
___nl__bool__16 = string0is_digit(___nl__im__17);
#line 49
c_rt_lib0clear(&___nl__im__17);
#line 49
___nl__bool__16 = !___nl__bool__16;
#line 49
___nl__bool__16 = !___nl__bool__16;
#line 49
if(___nl__bool__16){ goto label_9;}
#line 49
goto label_5;
#line 49
goto label_8;
#line 49
label_9:
;
#line 49
label_8:
;
#line 49
//clear ___nl__bool__16;
#line 48
___nl__int__19 = 1;
#line 48
___nl__int__8 = ___nl__int__8 + ___nl__int__19;
#line 48
//clear ___nl__int__19;
#line 50
goto label_6;
#line 50
label_5:
;
#line 51
___nl__int__21 = 1;
#line 51
___nl__int__22 = ___nl__int__8 < ___nl__int__21;
#line 51
___nl__bool__20 = ___nl__int__22;
#line 51
//clear ___nl__int__21;
#line 51
//clear ___nl__int__22;
#line 51
if(___nl__bool__20){ goto label_12;}
#line 51
___nl__int__24 = 2;
#line 51
___nl__int__23 = ___nl__int__8 + ___nl__int__24;
#line 51
//clear ___nl__int__24;
#line 51
___nl__int__25 = ___nl__int__23 > ___nl__int__3;
#line 51
___nl__bool__20 = ___nl__int__25;
#line 51
//clear ___nl__int__23;
#line 51
//clear ___nl__int__25;
#line 51
label_12:
;
#line 51
___nl__bool__20 = !___nl__bool__20;
#line 51
if(___nl__bool__20){ goto label_11;}
#line 51
___nl__bool__26 = false;
#line 51
c_rt_lib0clear(&___nl__im__0);
#line 51
c_rt_lib0clear(&___nl__im__1);
#line 51
//clear ___nl__int__3;
#line 51
//clear ___nl__int__8;
#line 51
//clear ___nl__bool__14;
#line 51
//clear ___nl__bool__20;
#line 51
return ___nl__bool__26;
#line 51
goto label_10;
#line 51
label_11:
;
#line 51
label_10:
;
#line 51
//clear ___nl__bool__20;
#line 51
//clear ___nl__bool__26;
#line 52
___nl__int__29 = 1;
#line 52
c_rt_lib0move(&___nl__im__28, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__29));
#line 52
//clear ___nl__int__29;
#line 52
c_rt_lib0move(&___nl__im__30,___get_global_const(111));
#line 52
___nl__bool__27 = c_rt_lib0eq(___nl__im__28, ___nl__im__30);
#line 52
c_rt_lib0clear(&___nl__im__28);
#line 52
c_rt_lib0clear(&___nl__im__30);
#line 52
___nl__bool__27 = !___nl__bool__27;
#line 52
___nl__bool__27 = !___nl__bool__27;
#line 52
if(___nl__bool__27){ goto label_14;}
#line 52
___nl__bool__31 = false;
#line 52
c_rt_lib0clear(&___nl__im__0);
#line 52
c_rt_lib0clear(&___nl__im__1);
#line 52
//clear ___nl__int__3;
#line 52
//clear ___nl__int__8;
#line 52
//clear ___nl__bool__14;
#line 52
//clear ___nl__bool__27;
#line 52
return ___nl__bool__31;
#line 52
goto label_13;
#line 52
label_14:
;
#line 52
label_13:
;
#line 52
//clear ___nl__bool__27;
#line 52
//clear ___nl__bool__31;
#line 53
___nl__int__32 = 1;
#line 53
___nl__int__8 = ___nl__int__8 + ___nl__int__32;
#line 53
//clear ___nl__int__32;
#line 53
label_16:
;
#line 53
___nl__int__34 = ___nl__int__8 < ___nl__int__3;
#line 53
___nl__bool__33 = ___nl__int__34;
#line 53
//clear ___nl__int__34;
#line 53
___nl__bool__33 = !___nl__bool__33;
#line 53
if(___nl__bool__33){ goto label_15;}
#line 54
___nl__int__37 = 1;
#line 54
c_rt_lib0move(&___nl__im__36, string0substr(___nl__im__1, ___nl__int__8, ___nl__int__37));
#line 54
//clear ___nl__int__37;
#line 54
___nl__bool__35 = string0is_digit(___nl__im__36);
#line 54
c_rt_lib0clear(&___nl__im__36);
#line 54
___nl__bool__35 = !___nl__bool__35;
#line 54
___nl__bool__35 = !___nl__bool__35;
#line 54
if(___nl__bool__35){ goto label_19;}
#line 54
___nl__bool__38 = false;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
//clear ___nl__int__3;
#line 54
//clear ___nl__int__8;
#line 54
//clear ___nl__bool__14;
#line 54
//clear ___nl__bool__33;
#line 54
//clear ___nl__bool__35;
#line 54
return ___nl__bool__38;
#line 54
goto label_18;
#line 54
label_19:
;
#line 54
label_18:
;
#line 54
//clear ___nl__bool__35;
#line 54
//clear ___nl__bool__38;
#line 53
___nl__int__39 = 1;
#line 53
___nl__int__8 = ___nl__int__8 + ___nl__int__39;
#line 53
//clear ___nl__int__39;
#line 55
goto label_16;
#line 55
label_15:
;
#line 56
___nl__bool__40 = true;
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
//clear ___nl__int__3;
#line 56
//clear ___nl__int__8;
#line 56
//clear ___nl__bool__14;
#line 56
//clear ___nl__bool__33;
#line 56
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
#line 60
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 60
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 61
___nl__bool__3 = string_utils0is_integer(___nl__im__1);
#line 61
if(___nl__bool__3){ goto label_1;}
#line 61
___nl__bool__3 = string_utils0is_float(___nl__im__1);
#line 61
label_1:
;
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
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
#line 65
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 65
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
if(___nl__bool__1){ goto label_3;}
#line 65
c_rt_lib0move(&___nl__im__3,___get_global_const(356));
#line 65
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
label_3:
;
#line 65
___nl__bool__1 = !___nl__bool__1;
#line 65
if(___nl__bool__1){ goto label_2;}
#line 65
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
//clear ___nl__bool__1;
#line 65
return ___nl__im__4;
#line 65
goto label_1;
#line 65
label_2:
;
#line 65
label_1:
;
#line 65
//clear ___nl__bool__1;
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 66
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 66
c_rt_lib0move(&___nl__im__5, string0split(___nl__im__6, ___nl__im__0));
#line 66
c_rt_lib0clear(&___nl__im__6);
#line 67
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 68
___nl__int__10 = 0;
#line 68
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 68
//clear ___nl__int__10;
#line 68
c_rt_lib0move(&___nl__im__11,___get_global_const(356));
#line 68
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 68
c_rt_lib0clear(&___nl__im__9);
#line 68
c_rt_lib0clear(&___nl__im__11);
#line 68
___nl__bool__8 = !___nl__bool__8;
#line 68
if(___nl__bool__8){ goto label_5;}
#line 69
___nl__int__12 = 1;
#line 69
___nl__int__14 = c_rt_lib0array_len(___nl__im__5);
#line 69
___nl__int__15 = 1;
#line 69
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 69
//clear ___nl__int__14;
#line 69
//clear ___nl__int__15;
#line 69
c_rt_lib0move(&___nl__im__5, array0subarray(___nl__im__5, ___nl__int__12, ___nl__int__13));
#line 69
//clear ___nl__int__12;
#line 69
//clear ___nl__int__13;
#line 70
___nl__int__18 = 0;
#line 70
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__5, ___nl__int__18));
#line 70
//clear ___nl__int__18;
#line 70
c_rt_lib0move(&___nl__im__19, string_utils0is_int(___nl__im__17));
#line 70
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__19);
#line 70
c_rt_lib0clear(&___nl__im__17);
#line 70
c_rt_lib0clear(&___nl__im__19);
#line 70
___nl__bool__16 = !___nl__bool__16;
#line 70
___nl__bool__16 = !___nl__bool__16;
#line 70
if(___nl__bool__16){ goto label_7;}
#line 70
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0clear(&___nl__im__7);
#line 70
//clear ___nl__bool__8;
#line 70
//clear ___nl__bool__16;
#line 70
return ___nl__im__20;
#line 70
goto label_6;
#line 70
label_7:
;
#line 70
label_6:
;
#line 70
//clear ___nl__bool__16;
#line 70
c_rt_lib0clear(&___nl__im__20);
#line 71
c_rt_lib0move(&___nl__im__7,___get_global_const(356));
#line 72
goto label_4;
#line 72
label_5:
;
#line 72
label_4:
;
#line 72
//clear ___nl__bool__8;
#line 73
___nl__bool__21 = false;
#line 74
___nl__int__23 = 0;
#line 74
___nl__int__24 = 1;
#line 74
___nl__int__25 = c_rt_lib0array_len(___nl__im__5);
#line 74
label_10:
;
#line 74
___nl__int__27 = ___nl__int__23 >= ___nl__int__25;
#line 74
___nl__bool__26 = ___nl__int__27;
#line 74
if(___nl__bool__26){ goto label_8;}
#line 74
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__5, ___nl__int__23));
#line 74
c_rt_lib0copy(&___nl__im__22, ___nl__im__28);
#line 75
c_rt_lib0move(&___nl__im__30, string_utils0is_int(___nl__im__22));
#line 75
___nl__bool__29 = c_rt_lib0check_true_native(___nl__im__30);
#line 75
c_rt_lib0clear(&___nl__im__30);
#line 75
___nl__bool__29 = !___nl__bool__29;
#line 75
___nl__bool__29 = !___nl__bool__29;
#line 75
if(___nl__bool__29){ goto label_12;}
#line 76
c_rt_lib0move(&___nl__im__33,___get_global_const(111));
#line 76
___nl__bool__31 = c_rt_lib0eq(___nl__im__22, ___nl__im__33);
#line 76
c_rt_lib0clear(&___nl__im__33);
#line 76
___nl__bool__32 = !___nl__bool__31;
#line 76
if(___nl__bool__32){ goto label_15;}
#line 76
___nl__bool__31 = ___nl__bool__21;
#line 76
___nl__bool__31 = !___nl__bool__31;
#line 76
label_15:
;
#line 76
//clear ___nl__bool__32;
#line 76
___nl__bool__31 = !___nl__bool__31;
#line 76
if(___nl__bool__31){ goto label_14;}
#line 77
___nl__bool__21 = true;
#line 78
goto label_13;
#line 78
label_14:
;
#line 79
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 79
c_rt_lib0clear(&___nl__im__0);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__7);
#line 79
//clear ___nl__bool__21;
#line 79
c_rt_lib0clear(&___nl__im__22);
#line 79
//clear ___nl__int__23;
#line 79
//clear ___nl__int__24;
#line 79
//clear ___nl__int__25;
#line 79
//clear ___nl__bool__26;
#line 79
//clear ___nl__int__27;
#line 79
c_rt_lib0clear(&___nl__im__28);
#line 79
//clear ___nl__bool__29;
#line 79
//clear ___nl__bool__31;
#line 79
return ___nl__im__34;
#line 80
goto label_13;
#line 80
label_13:
;
#line 80
//clear ___nl__bool__31;
#line 80
c_rt_lib0clear(&___nl__im__34);
#line 81
goto label_11;
#line 81
label_12:
;
#line 81
label_11:
;
#line 81
//clear ___nl__bool__29;
#line 82
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__22));
#line 82
c_rt_lib0clear(&___nl__im__22);
#line 83
___nl__int__23 = ___nl__int__23 + ___nl__int__24;
#line 83
goto label_10;
#line 83
label_8:
;
#line 84
c_rt_lib0move(&___nl__im__36,___get_global_const(111));
#line 84
___nl__bool__35 = c_rt_lib0eq(___nl__im__7, ___nl__im__36);
#line 84
c_rt_lib0clear(&___nl__im__36);
#line 84
___nl__bool__35 = !___nl__bool__35;
#line 84
if(___nl__bool__35){ goto label_17;}
#line 84
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
c_rt_lib0clear(&___nl__im__7);
#line 84
//clear ___nl__bool__21;
#line 84
c_rt_lib0clear(&___nl__im__22);
#line 84
//clear ___nl__int__23;
#line 84
//clear ___nl__int__24;
#line 84
//clear ___nl__int__25;
#line 84
//clear ___nl__bool__26;
#line 84
//clear ___nl__int__27;
#line 84
c_rt_lib0clear(&___nl__im__28);
#line 84
//clear ___nl__bool__35;
#line 84
return ___nl__im__37;
#line 84
goto label_16;
#line 84
label_17:
;
#line 84
label_16:
;
#line 84
//clear ___nl__bool__35;
#line 84
c_rt_lib0clear(&___nl__im__37);
#line 85
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
c_rt_lib0clear(&___nl__im__5);
#line 85
c_rt_lib0clear(&___nl__im__7);
#line 85
//clear ___nl__bool__21;
#line 85
c_rt_lib0clear(&___nl__im__22);
#line 85
//clear ___nl__int__23;
#line 85
//clear ___nl__int__24;
#line 85
//clear ___nl__int__25;
#line 85
//clear ___nl__bool__26;
#line 85
//clear ___nl__int__27;
#line 85
c_rt_lib0clear(&___nl__im__28);
#line 85
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
#line 89
label_2:
;
#line 89
___nl__int__4 = c_rt_lib0array_len(___nl__im__0);
#line 89
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 89
___nl__int__6 = ___nl__int__5 < ___nl__int__4;
#line 89
___nl__bool__2 = ___nl__int__6;
#line 89
//clear ___nl__int__4;
#line 89
//clear ___nl__int__5;
#line 89
//clear ___nl__int__6;
#line 89
___nl__bool__3 = !___nl__bool__2;
#line 89
if(___nl__bool__3){ goto label_3;}
#line 89
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 89
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 89
//clear ___nl__int__8;
#line 89
c_rt_lib0move(&___nl__im__9, string_utils0is_whitespace(___nl__im__7));
#line 89
___nl__bool__2 = c_rt_lib0check_true_native(___nl__im__9);
#line 89
c_rt_lib0clear(&___nl__im__7);
#line 89
c_rt_lib0clear(&___nl__im__9);
#line 89
label_3:
;
#line 89
//clear ___nl__bool__3;
#line 89
___nl__bool__2 = !___nl__bool__2;
#line 89
if(___nl__bool__2){ goto label_1;}
#line 89
___nl__int__10 = 1;
#line 89
___nl__int__11 = getIntFromImm((*___ref___im__1));
#line 89
___nl__int__12 = ___nl__int__11 + ___nl__int__10;
#line 89
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__12));
#line 89
//clear ___nl__int__10;
#line 89
//clear ___nl__int__11;
#line 89
//clear ___nl__int__12;
#line 89
goto label_2;
#line 89
label_1:
;
#line 90
___nl__int__14 = c_rt_lib0array_len(___nl__im__0);
#line 90
___nl__int__15 = getIntFromImm((*___ref___im__1));
#line 90
___nl__int__16 = ___nl__int__15 == ___nl__int__14;
#line 90
___nl__bool__13 = ___nl__int__16;
#line 90
//clear ___nl__int__14;
#line 90
//clear ___nl__int__15;
#line 90
//clear ___nl__int__16;
#line 90
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
//clear ___nl__bool__2;
#line 90
//clear ___nl__bool__13;
#line 90
return ___nl__im__17;
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
//clear ___nl__bool__2;
#line 90
//clear ___nl__bool__13;
#line 90
c_rt_lib0clear(&___nl__im__17);
#line 90
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
#line 94
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 95
___nl__int__5 = getIntFromImm((*___ref___im__1));
#line 95
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 95
//clear ___nl__int__5;
#line 95
c_rt_lib0move(&___nl__im__6,___get_global_const(356));
#line 95
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__6);
#line 95
c_rt_lib0clear(&___nl__im__4);
#line 95
c_rt_lib0clear(&___nl__im__6);
#line 95
___nl__bool__3 = !___nl__bool__3;
#line 95
if(___nl__bool__3){ goto label_2;}
#line 96
___nl__int__7 = 1;
#line 96
___nl__int__8 = getIntFromImm((*___ref___im__1));
#line 96
___nl__int__9 = ___nl__int__8 + ___nl__int__7;
#line 96
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__9));
#line 96
//clear ___nl__int__7;
#line 96
//clear ___nl__int__8;
#line 96
//clear ___nl__int__9;
#line 97
c_rt_lib0move(&___nl__im__2,___get_global_const(356));
#line 98
goto label_1;
#line 98
label_2:
;
#line 98
label_1:
;
#line 98
//clear ___nl__bool__3;
#line 99
___nl__bool__10 = false;
#line 100
label_4:
;
#line 100
___nl__int__12 = c_rt_lib0array_len(___nl__im__0);
#line 100
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 100
___nl__int__14 = ___nl__int__13 < ___nl__int__12;
#line 100
___nl__bool__11 = ___nl__int__14;
#line 100
//clear ___nl__int__12;
#line 100
//clear ___nl__int__13;
#line 100
//clear ___nl__int__14;
#line 100
___nl__bool__11 = !___nl__bool__11;
#line 100
if(___nl__bool__11){ goto label_3;}
#line 101
___nl__int__16 = getIntFromImm((*___ref___im__1));
#line 101
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 101
//clear ___nl__int__16;
#line 102
c_rt_lib0move(&___nl__im__18, string_utils0is_int(___nl__im__15));
#line 102
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 102
c_rt_lib0clear(&___nl__im__18);
#line 102
___nl__bool__17 = !___nl__bool__17;
#line 102
___nl__bool__17 = !___nl__bool__17;
#line 102
if(___nl__bool__17){ goto label_6;}
#line 103
c_rt_lib0move(&___nl__im__20,___get_global_const(111));
#line 103
___nl__bool__19 = c_rt_lib0ne(___nl__im__15, ___nl__im__20);
#line 103
c_rt_lib0clear(&___nl__im__20);
#line 103
if(___nl__bool__19){ goto label_9;}
#line 103
___nl__bool__19 = ___nl__bool__10;
#line 103
label_9:
;
#line 103
___nl__bool__19 = !___nl__bool__19;
#line 103
if(___nl__bool__19){ goto label_8;}
#line 103
goto label_3;
#line 103
goto label_7;
#line 103
label_8:
;
#line 103
label_7:
;
#line 103
//clear ___nl__bool__19;
#line 104
___nl__bool__10 = true;
#line 105
goto label_5;
#line 105
label_6:
;
#line 105
label_5:
;
#line 105
//clear ___nl__bool__17;
#line 106
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 107
___nl__int__21 = 1;
#line 107
___nl__int__22 = getIntFromImm((*___ref___im__1));
#line 107
___nl__int__23 = ___nl__int__22 + ___nl__int__21;
#line 107
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__23));
#line 107
//clear ___nl__int__21;
#line 107
//clear ___nl__int__22;
#line 107
//clear ___nl__int__23;
#line 107
c_rt_lib0clear(&___nl__im__15);
#line 108
goto label_4;
#line 108
label_3:
;
#line 109
c_rt_lib0move(&___nl__im__25,___get_global_const(37));
#line 109
___nl__bool__24 = c_rt_lib0eq(___nl__im__2, ___nl__im__25);
#line 109
c_rt_lib0clear(&___nl__im__25);
#line 109
if(___nl__bool__24){ goto label_12;}
#line 109
c_rt_lib0move(&___nl__im__26,___get_global_const(356));
#line 109
___nl__bool__24 = c_rt_lib0eq(___nl__im__2, ___nl__im__26);
#line 109
c_rt_lib0clear(&___nl__im__26);
#line 109
label_12:
;
#line 109
___nl__bool__24 = !___nl__bool__24;
#line 109
if(___nl__bool__24){ goto label_11;}
#line 109
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 109
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__28));
#line 109
c_rt_lib0clear(&___nl__im__28);
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
c_rt_lib0clear(&___nl__im__2);
#line 109
//clear ___nl__bool__10;
#line 109
//clear ___nl__bool__11;
#line 109
c_rt_lib0clear(&___nl__im__15);
#line 109
//clear ___nl__bool__24;
#line 109
return ___nl__im__27;
#line 109
goto label_10;
#line 109
label_11:
;
#line 109
label_10:
;
#line 109
//clear ___nl__bool__24;
#line 109
c_rt_lib0clear(&___nl__im__27);
#line 110
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__2));
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
c_rt_lib0clear(&___nl__im__2);
#line 110
//clear ___nl__bool__10;
#line 110
//clear ___nl__bool__11;
#line 110
c_rt_lib0clear(&___nl__im__15);
#line 110
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
#line 114
c_rt_lib0move(&___nl__im__4, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 114
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 114
c_rt_lib0clear(&___nl__im__4);
#line 114
___nl__bool__3 = !___nl__bool__3;
#line 114
if(___nl__bool__3){ goto label_2;}
#line 114
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 114
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__6));
#line 114
c_rt_lib0clear(&___nl__im__6);
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__2);
#line 114
//clear ___nl__bool__3;
#line 114
return ___nl__im__5;
#line 114
goto label_1;
#line 114
label_2:
;
#line 114
label_1:
;
#line 114
//clear ___nl__bool__3;
#line 114
c_rt_lib0clear(&___nl__im__5);
#line 116
___nl__int__10 = getIntFromImm((*___ref___im__1));
#line 116
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__10));
#line 116
//clear ___nl__int__10;
#line 116
c_rt_lib0move(&___nl__im__11,___get_global_const(437));
#line 116
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 116
c_rt_lib0clear(&___nl__im__9);
#line 116
c_rt_lib0clear(&___nl__im__11);
#line 116
___nl__bool__8 = !___nl__bool__8;
#line 116
if(___nl__bool__8){ goto label_4;}
#line 117
___nl__int__12 = 1;
#line 117
___nl__int__13 = getIntFromImm((*___ref___im__1));
#line 117
___nl__int__14 = ___nl__int__13 + ___nl__int__12;
#line 117
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__14));
#line 117
//clear ___nl__int__12;
#line 117
//clear ___nl__int__13;
#line 117
//clear ___nl__int__14;
#line 118
___nl__int__17 = 0;
#line 118
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__17));
#line 118
c_rt_lib0move(&___nl__im__16, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__18));
#line 118
//clear ___nl__int__17;
#line 118
c_rt_lib0clear(&___nl__im__18);
#line 118
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(79));
#line 118
if(___nl__bool__15){ goto label_5;}
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__7);
#line 118
//clear ___nl__bool__8;
#line 118
//clear ___nl__bool__15;
#line 118
return ___nl__im__16;
#line 118
label_5:
;
#line 118
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(79)));
#line 119
c_rt_lib0move(&___nl__im__20, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 119
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__20);
#line 119
c_rt_lib0clear(&___nl__im__20);
#line 119
___nl__bool__19 = !___nl__bool__19;
#line 119
if(___nl__bool__19){ goto label_7;}
#line 119
c_rt_lib0move(&___nl__im__22,___get_global_const(37));
#line 119
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__22));
#line 119
c_rt_lib0clear(&___nl__im__22);
#line 119
c_rt_lib0clear(&___nl__im__0);
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
//clear ___nl__bool__8;
#line 119
//clear ___nl__bool__15;
#line 119
c_rt_lib0clear(&___nl__im__16);
#line 119
//clear ___nl__bool__19;
#line 119
return ___nl__im__21;
#line 119
goto label_6;
#line 119
label_7:
;
#line 119
label_6:
;
#line 119
//clear ___nl__bool__19;
#line 119
c_rt_lib0clear(&___nl__im__21);
#line 120
___nl__int__25 = getIntFromImm((*___ref___im__1));
#line 120
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__25));
#line 120
//clear ___nl__int__25;
#line 120
c_rt_lib0move(&___nl__im__26,___get_global_const(315));
#line 120
___nl__bool__23 = c_rt_lib0eq(___nl__im__24, ___nl__im__26);
#line 120
c_rt_lib0clear(&___nl__im__24);
#line 120
c_rt_lib0clear(&___nl__im__26);
#line 120
___nl__bool__23 = !___nl__bool__23;
#line 120
___nl__bool__23 = !___nl__bool__23;
#line 120
if(___nl__bool__23){ goto label_9;}
#line 120
c_rt_lib0move(&___nl__im__28,___get_global_const(37));
#line 120
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__28));
#line 120
c_rt_lib0clear(&___nl__im__28);
#line 120
c_rt_lib0clear(&___nl__im__0);
#line 120
c_rt_lib0clear(&___nl__im__2);
#line 120
c_rt_lib0clear(&___nl__im__7);
#line 120
//clear ___nl__bool__8;
#line 120
//clear ___nl__bool__15;
#line 120
c_rt_lib0clear(&___nl__im__16);
#line 120
//clear ___nl__bool__23;
#line 120
return ___nl__im__27;
#line 120
goto label_8;
#line 120
label_9:
;
#line 120
label_8:
;
#line 120
//clear ___nl__bool__23;
#line 120
c_rt_lib0clear(&___nl__im__27);
#line 121
___nl__int__29 = 1;
#line 121
___nl__int__30 = getIntFromImm((*___ref___im__1));
#line 121
___nl__int__31 = ___nl__int__30 + ___nl__int__29;
#line 121
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__31));
#line 121
//clear ___nl__int__29;
#line 121
//clear ___nl__int__30;
#line 121
//clear ___nl__int__31;
#line 122
goto label_3;
#line 122
label_4:
;
#line 123
c_rt_lib0move(&___nl__im__33, string_utils_priv0get_number(___nl__im__0, ___ref___im__1));
#line 123
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(79));
#line 123
if(___nl__bool__32){ goto label_10;}
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
c_rt_lib0clear(&___nl__im__2);
#line 123
c_rt_lib0clear(&___nl__im__7);
#line 123
//clear ___nl__bool__8;
#line 123
//clear ___nl__bool__15;
#line 123
c_rt_lib0clear(&___nl__im__16);
#line 123
//clear ___nl__bool__32;
#line 123
return ___nl__im__33;
#line 123
label_10:
;
#line 123
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(79)));
#line 124
goto label_3;
#line 124
label_3:
;
#line 124
//clear ___nl__bool__8;
#line 124
//clear ___nl__bool__15;
#line 124
c_rt_lib0clear(&___nl__im__16);
#line 124
//clear ___nl__bool__32;
#line 124
c_rt_lib0clear(&___nl__im__33);
#line 125
label_12:
;
#line 126
c_rt_lib0move(&___nl__im__35, string_utils_priv0eat_ws(___nl__im__0, ___ref___im__1));
#line 126
___nl__bool__34 = c_rt_lib0check_true_native(___nl__im__35);
#line 126
c_rt_lib0clear(&___nl__im__35);
#line 126
___nl__bool__34 = !___nl__bool__34;
#line 126
if(___nl__bool__34){ goto label_14;}
#line 126
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
//clear ___nl__bool__34;
#line 126
return ___nl__im__36;
#line 126
goto label_13;
#line 126
label_14:
;
#line 126
label_13:
;
#line 126
//clear ___nl__bool__34;
#line 126
c_rt_lib0clear(&___nl__im__36);
#line 127
___nl__int__38 = getIntFromImm((*___ref___im__1));
#line 127
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__0, ___nl__int__38));
#line 127
//clear ___nl__int__38;
#line 128
c_rt_lib0move(&___nl__im__40,___get_global_const(364));
#line 128
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__40);
#line 128
c_rt_lib0clear(&___nl__im__40);
#line 128
___nl__bool__39 = !___nl__bool__39;
#line 128
if(___nl__bool__39){ goto label_16;}
#line 129
___nl__int__42 = 5;
#line 129
___nl__int__43 = getIntFromImm(___nl__im__2);
#line 129
___nl__int__44 = ___nl__int__43 >= ___nl__int__42;
#line 129
___nl__bool__41 = ___nl__int__44;
#line 129
//clear ___nl__int__42;
#line 129
//clear ___nl__int__43;
#line 129
//clear ___nl__int__44;
#line 129
___nl__bool__41 = !___nl__bool__41;
#line 129
if(___nl__bool__41){ goto label_18;}
#line 129
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 129
c_rt_lib0clear(&___nl__im__0);
#line 129
c_rt_lib0clear(&___nl__im__2);
#line 129
c_rt_lib0clear(&___nl__im__7);
#line 129
c_rt_lib0clear(&___nl__im__37);
#line 129
//clear ___nl__bool__39;
#line 129
//clear ___nl__bool__41;
#line 129
return ___nl__im__45;
#line 129
goto label_17;
#line 129
label_18:
;
#line 129
label_17:
;
#line 129
//clear ___nl__bool__41;
#line 129
c_rt_lib0clear(&___nl__im__45);
#line 130
___nl__int__46 = 1;
#line 130
___nl__int__47 = getIntFromImm((*___ref___im__1));
#line 130
___nl__int__48 = ___nl__int__47 + ___nl__int__46;
#line 130
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__48));
#line 130
//clear ___nl__int__46;
#line 130
//clear ___nl__int__47;
#line 130
//clear ___nl__int__48;
#line 131
___nl__int__52 = 5;
#line 131
c_rt_lib0move(&___nl__im__53, c_rt_lib0int_new(___nl__int__52));
#line 131
c_rt_lib0move(&___nl__im__51, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__53));
#line 131
//clear ___nl__int__52;
#line 131
c_rt_lib0clear(&___nl__im__53);
#line 131
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(79));
#line 131
if(___nl__bool__50){ goto label_19;}
#line 131
c_rt_lib0clear(&___nl__im__0);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0clear(&___nl__im__37);
#line 131
//clear ___nl__bool__39;
#line 131
c_rt_lib0clear(&___nl__im__49);
#line 131
//clear ___nl__bool__50;
#line 131
return ___nl__im__51;
#line 131
label_19:
;
#line 131
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(79)));
#line 132
c_rt_lib0move(&___nl__im__7, float0mul(___nl__im__7, ___nl__im__49));
#line 133
goto label_15;
#line 133
label_16:
;
#line 133
c_rt_lib0move(&___nl__im__54,___get_global_const(106));
#line 133
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__54);
#line 133
c_rt_lib0clear(&___nl__im__54);
#line 133
___nl__bool__39 = !___nl__bool__39;
#line 133
if(___nl__bool__39){ goto label_20;}
#line 134
___nl__int__56 = 5;
#line 134
___nl__int__57 = getIntFromImm(___nl__im__2);
#line 134
___nl__int__58 = ___nl__int__57 >= ___nl__int__56;
#line 134
___nl__bool__55 = ___nl__int__58;
#line 134
//clear ___nl__int__56;
#line 134
//clear ___nl__int__57;
#line 134
//clear ___nl__int__58;
#line 134
___nl__bool__55 = !___nl__bool__55;
#line 134
if(___nl__bool__55){ goto label_22;}
#line 134
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
c_rt_lib0clear(&___nl__im__7);
#line 134
c_rt_lib0clear(&___nl__im__37);
#line 134
//clear ___nl__bool__39;
#line 134
c_rt_lib0clear(&___nl__im__49);
#line 134
//clear ___nl__bool__50;
#line 134
c_rt_lib0clear(&___nl__im__51);
#line 134
//clear ___nl__bool__55;
#line 134
return ___nl__im__59;
#line 134
goto label_21;
#line 134
label_22:
;
#line 134
label_21:
;
#line 134
//clear ___nl__bool__55;
#line 134
c_rt_lib0clear(&___nl__im__59);
#line 135
___nl__int__60 = 1;
#line 135
___nl__int__61 = getIntFromImm((*___ref___im__1));
#line 135
___nl__int__62 = ___nl__int__61 + ___nl__int__60;
#line 135
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__62));
#line 135
//clear ___nl__int__60;
#line 135
//clear ___nl__int__61;
#line 135
//clear ___nl__int__62;
#line 136
___nl__int__66 = 5;
#line 136
c_rt_lib0move(&___nl__im__67, c_rt_lib0int_new(___nl__int__66));
#line 136
c_rt_lib0move(&___nl__im__65, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__67));
#line 136
//clear ___nl__int__66;
#line 136
c_rt_lib0clear(&___nl__im__67);
#line 136
___nl__bool__64 = c_rt_lib0priv_is(___nl__im__65, ___get_global_const(79));
#line 136
if(___nl__bool__64){ goto label_23;}
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
c_rt_lib0clear(&___nl__im__7);
#line 136
c_rt_lib0clear(&___nl__im__37);
#line 136
//clear ___nl__bool__39;
#line 136
c_rt_lib0clear(&___nl__im__49);
#line 136
//clear ___nl__bool__50;
#line 136
c_rt_lib0clear(&___nl__im__51);
#line 136
c_rt_lib0clear(&___nl__im__63);
#line 136
//clear ___nl__bool__64;
#line 136
return ___nl__im__65;
#line 136
label_23:
;
#line 136
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__65, ___get_global_const(79)));
#line 137
c_rt_lib0move(&___nl__im__7, float0div(___nl__im__7, ___nl__im__63));
#line 138
goto label_15;
#line 138
label_20:
;
#line 138
c_rt_lib0move(&___nl__im__68,___get_global_const(367));
#line 138
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__68);
#line 138
c_rt_lib0clear(&___nl__im__68);
#line 138
___nl__bool__39 = !___nl__bool__39;
#line 138
if(___nl__bool__39){ goto label_24;}
#line 139
___nl__int__70 = 5;
#line 139
___nl__int__71 = getIntFromImm(___nl__im__2);
#line 139
___nl__int__72 = ___nl__int__71 >= ___nl__int__70;
#line 139
___nl__bool__69 = ___nl__int__72;
#line 139
//clear ___nl__int__70;
#line 139
//clear ___nl__int__71;
#line 139
//clear ___nl__int__72;
#line 139
___nl__bool__69 = !___nl__bool__69;
#line 139
if(___nl__bool__69){ goto label_26;}
#line 139
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__7);
#line 139
c_rt_lib0clear(&___nl__im__37);
#line 139
//clear ___nl__bool__39;
#line 139
c_rt_lib0clear(&___nl__im__49);
#line 139
//clear ___nl__bool__50;
#line 139
c_rt_lib0clear(&___nl__im__51);
#line 139
c_rt_lib0clear(&___nl__im__63);
#line 139
//clear ___nl__bool__64;
#line 139
c_rt_lib0clear(&___nl__im__65);
#line 139
//clear ___nl__bool__69;
#line 139
return ___nl__im__73;
#line 139
goto label_25;
#line 139
label_26:
;
#line 139
label_25:
;
#line 139
//clear ___nl__bool__69;
#line 139
c_rt_lib0clear(&___nl__im__73);
#line 140
___nl__int__74 = 1;
#line 140
___nl__int__75 = getIntFromImm((*___ref___im__1));
#line 140
___nl__int__76 = ___nl__int__75 + ___nl__int__74;
#line 140
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__76));
#line 140
//clear ___nl__int__74;
#line 140
//clear ___nl__int__75;
#line 140
//clear ___nl__int__76;
#line 141
___nl__int__80 = 5;
#line 141
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__80));
#line 141
c_rt_lib0move(&___nl__im__79, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__81));
#line 141
//clear ___nl__int__80;
#line 141
c_rt_lib0clear(&___nl__im__81);
#line 141
___nl__bool__78 = c_rt_lib0priv_is(___nl__im__79, ___get_global_const(79));
#line 141
if(___nl__bool__78){ goto label_27;}
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
c_rt_lib0clear(&___nl__im__2);
#line 141
c_rt_lib0clear(&___nl__im__7);
#line 141
c_rt_lib0clear(&___nl__im__37);
#line 141
//clear ___nl__bool__39;
#line 141
c_rt_lib0clear(&___nl__im__49);
#line 141
//clear ___nl__bool__50;
#line 141
c_rt_lib0clear(&___nl__im__51);
#line 141
c_rt_lib0clear(&___nl__im__63);
#line 141
//clear ___nl__bool__64;
#line 141
c_rt_lib0clear(&___nl__im__65);
#line 141
c_rt_lib0clear(&___nl__im__77);
#line 141
//clear ___nl__bool__78;
#line 141
return ___nl__im__79;
#line 141
label_27:
;
#line 141
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__79, ___get_global_const(79)));
#line 142
c_rt_lib0move(&___nl__im__7, float0mod(___nl__im__7, ___nl__im__77));
#line 143
goto label_15;
#line 143
label_24:
;
#line 143
c_rt_lib0move(&___nl__im__82,___get_global_const(358));
#line 143
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__82);
#line 143
c_rt_lib0clear(&___nl__im__82);
#line 143
___nl__bool__39 = !___nl__bool__39;
#line 143
if(___nl__bool__39){ goto label_28;}
#line 144
___nl__int__84 = 2;
#line 144
___nl__int__85 = getIntFromImm(___nl__im__2);
#line 144
___nl__int__86 = ___nl__int__85 >= ___nl__int__84;
#line 144
___nl__bool__83 = ___nl__int__86;
#line 144
//clear ___nl__int__84;
#line 144
//clear ___nl__int__85;
#line 144
//clear ___nl__int__86;
#line 144
___nl__bool__83 = !___nl__bool__83;
#line 144
if(___nl__bool__83){ goto label_30;}
#line 144
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
c_rt_lib0clear(&___nl__im__2);
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 144
c_rt_lib0clear(&___nl__im__37);
#line 144
//clear ___nl__bool__39;
#line 144
c_rt_lib0clear(&___nl__im__49);
#line 144
//clear ___nl__bool__50;
#line 144
c_rt_lib0clear(&___nl__im__51);
#line 144
c_rt_lib0clear(&___nl__im__63);
#line 144
//clear ___nl__bool__64;
#line 144
c_rt_lib0clear(&___nl__im__65);
#line 144
c_rt_lib0clear(&___nl__im__77);
#line 144
//clear ___nl__bool__78;
#line 144
c_rt_lib0clear(&___nl__im__79);
#line 144
//clear ___nl__bool__83;
#line 144
return ___nl__im__87;
#line 144
goto label_29;
#line 144
label_30:
;
#line 144
label_29:
;
#line 144
//clear ___nl__bool__83;
#line 144
c_rt_lib0clear(&___nl__im__87);
#line 145
___nl__int__88 = 1;
#line 145
___nl__int__89 = getIntFromImm((*___ref___im__1));
#line 145
___nl__int__90 = ___nl__int__89 + ___nl__int__88;
#line 145
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__90));
#line 145
//clear ___nl__int__88;
#line 145
//clear ___nl__int__89;
#line 145
//clear ___nl__int__90;
#line 146
___nl__int__94 = 2;
#line 146
c_rt_lib0move(&___nl__im__95, c_rt_lib0int_new(___nl__int__94));
#line 146
c_rt_lib0move(&___nl__im__93, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__95));
#line 146
//clear ___nl__int__94;
#line 146
c_rt_lib0clear(&___nl__im__95);
#line 146
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__93, ___get_global_const(79));
#line 146
if(___nl__bool__92){ goto label_31;}
#line 146
c_rt_lib0clear(&___nl__im__0);
#line 146
c_rt_lib0clear(&___nl__im__2);
#line 146
c_rt_lib0clear(&___nl__im__7);
#line 146
c_rt_lib0clear(&___nl__im__37);
#line 146
//clear ___nl__bool__39;
#line 146
c_rt_lib0clear(&___nl__im__49);
#line 146
//clear ___nl__bool__50;
#line 146
c_rt_lib0clear(&___nl__im__51);
#line 146
c_rt_lib0clear(&___nl__im__63);
#line 146
//clear ___nl__bool__64;
#line 146
c_rt_lib0clear(&___nl__im__65);
#line 146
c_rt_lib0clear(&___nl__im__77);
#line 146
//clear ___nl__bool__78;
#line 146
c_rt_lib0clear(&___nl__im__79);
#line 146
c_rt_lib0clear(&___nl__im__91);
#line 146
//clear ___nl__bool__92;
#line 146
return ___nl__im__93;
#line 146
label_31:
;
#line 146
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__93, ___get_global_const(79)));
#line 147
c_rt_lib0move(&___nl__im__7, float0add(___nl__im__7, ___nl__im__91));
#line 148
goto label_15;
#line 148
label_28:
;
#line 148
c_rt_lib0move(&___nl__im__96,___get_global_const(356));
#line 148
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__96);
#line 148
c_rt_lib0clear(&___nl__im__96);
#line 148
___nl__bool__39 = !___nl__bool__39;
#line 148
if(___nl__bool__39){ goto label_32;}
#line 149
___nl__int__98 = 2;
#line 149
___nl__int__99 = getIntFromImm(___nl__im__2);
#line 149
___nl__int__100 = ___nl__int__99 >= ___nl__int__98;
#line 149
___nl__bool__97 = ___nl__int__100;
#line 149
//clear ___nl__int__98;
#line 149
//clear ___nl__int__99;
#line 149
//clear ___nl__int__100;
#line 149
___nl__bool__97 = !___nl__bool__97;
#line 149
if(___nl__bool__97){ goto label_34;}
#line 149
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
#line 149
c_rt_lib0clear(&___nl__im__0);
#line 149
c_rt_lib0clear(&___nl__im__2);
#line 149
c_rt_lib0clear(&___nl__im__7);
#line 149
c_rt_lib0clear(&___nl__im__37);
#line 149
//clear ___nl__bool__39;
#line 149
c_rt_lib0clear(&___nl__im__49);
#line 149
//clear ___nl__bool__50;
#line 149
c_rt_lib0clear(&___nl__im__51);
#line 149
c_rt_lib0clear(&___nl__im__63);
#line 149
//clear ___nl__bool__64;
#line 149
c_rt_lib0clear(&___nl__im__65);
#line 149
c_rt_lib0clear(&___nl__im__77);
#line 149
//clear ___nl__bool__78;
#line 149
c_rt_lib0clear(&___nl__im__79);
#line 149
c_rt_lib0clear(&___nl__im__91);
#line 149
//clear ___nl__bool__92;
#line 149
c_rt_lib0clear(&___nl__im__93);
#line 149
//clear ___nl__bool__97;
#line 149
return ___nl__im__101;
#line 149
goto label_33;
#line 149
label_34:
;
#line 149
label_33:
;
#line 149
//clear ___nl__bool__97;
#line 149
c_rt_lib0clear(&___nl__im__101);
#line 150
___nl__int__102 = 1;
#line 150
___nl__int__103 = getIntFromImm((*___ref___im__1));
#line 150
___nl__int__104 = ___nl__int__103 + ___nl__int__102;
#line 150
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__104));
#line 150
//clear ___nl__int__102;
#line 150
//clear ___nl__int__103;
#line 150
//clear ___nl__int__104;
#line 151
___nl__int__108 = 2;
#line 151
c_rt_lib0move(&___nl__im__109, c_rt_lib0int_new(___nl__int__108));
#line 151
c_rt_lib0move(&___nl__im__107, string_utils_priv0cal_expr(___nl__im__0, ___ref___im__1, ___nl__im__109));
#line 151
//clear ___nl__int__108;
#line 151
c_rt_lib0clear(&___nl__im__109);
#line 151
___nl__bool__106 = c_rt_lib0priv_is(___nl__im__107, ___get_global_const(79));
#line 151
if(___nl__bool__106){ goto label_35;}
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
c_rt_lib0clear(&___nl__im__49);
#line 151
//clear ___nl__bool__50;
#line 151
c_rt_lib0clear(&___nl__im__51);
#line 151
c_rt_lib0clear(&___nl__im__63);
#line 151
//clear ___nl__bool__64;
#line 151
c_rt_lib0clear(&___nl__im__65);
#line 151
c_rt_lib0clear(&___nl__im__77);
#line 151
//clear ___nl__bool__78;
#line 151
c_rt_lib0clear(&___nl__im__79);
#line 151
c_rt_lib0clear(&___nl__im__91);
#line 151
//clear ___nl__bool__92;
#line 151
c_rt_lib0clear(&___nl__im__93);
#line 151
c_rt_lib0clear(&___nl__im__105);
#line 151
//clear ___nl__bool__106;
#line 151
return ___nl__im__107;
#line 151
label_35:
;
#line 151
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__107, ___get_global_const(79)));
#line 152
c_rt_lib0move(&___nl__im__7, float0sub(___nl__im__7, ___nl__im__105));
#line 153
goto label_15;
#line 153
label_32:
;
#line 153
c_rt_lib0move(&___nl__im__110,___get_global_const(315));
#line 153
___nl__bool__39 = c_rt_lib0eq(___nl__im__37, ___nl__im__110);
#line 153
c_rt_lib0clear(&___nl__im__110);
#line 153
___nl__bool__39 = !___nl__bool__39;
#line 153
if(___nl__bool__39){ goto label_36;}
#line 154
___nl__int__112 = 0;
#line 154
___nl__int__113 = getIntFromImm(___nl__im__2);
#line 154
___nl__int__114 = ___nl__int__113 < ___nl__int__112;
#line 154
___nl__bool__111 = ___nl__int__114;
#line 154
//clear ___nl__int__112;
#line 154
//clear ___nl__int__113;
#line 154
//clear ___nl__int__114;
#line 154
___nl__bool__111 = !___nl__bool__111;
#line 154
if(___nl__bool__111){ goto label_38;}
#line 154
c_rt_lib0move(&___nl__im__116,___get_global_const(37));
#line 154
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__116));
#line 154
c_rt_lib0clear(&___nl__im__116);
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
c_rt_lib0clear(&___nl__im__2);
#line 154
c_rt_lib0clear(&___nl__im__7);
#line 154
c_rt_lib0clear(&___nl__im__37);
#line 154
//clear ___nl__bool__39;
#line 154
c_rt_lib0clear(&___nl__im__49);
#line 154
//clear ___nl__bool__50;
#line 154
c_rt_lib0clear(&___nl__im__51);
#line 154
c_rt_lib0clear(&___nl__im__63);
#line 154
//clear ___nl__bool__64;
#line 154
c_rt_lib0clear(&___nl__im__65);
#line 154
c_rt_lib0clear(&___nl__im__77);
#line 154
//clear ___nl__bool__78;
#line 154
c_rt_lib0clear(&___nl__im__79);
#line 154
c_rt_lib0clear(&___nl__im__91);
#line 154
//clear ___nl__bool__92;
#line 154
c_rt_lib0clear(&___nl__im__93);
#line 154
c_rt_lib0clear(&___nl__im__105);
#line 154
//clear ___nl__bool__106;
#line 154
c_rt_lib0clear(&___nl__im__107);
#line 154
//clear ___nl__bool__111;
#line 154
return ___nl__im__115;
#line 154
goto label_37;
#line 154
label_38:
;
#line 154
label_37:
;
#line 154
//clear ___nl__bool__111;
#line 154
c_rt_lib0clear(&___nl__im__115);
#line 155
c_rt_lib0move(&___nl__im__117, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__7));
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
c_rt_lib0clear(&___nl__im__63);
#line 155
//clear ___nl__bool__64;
#line 155
c_rt_lib0clear(&___nl__im__65);
#line 155
c_rt_lib0clear(&___nl__im__77);
#line 155
//clear ___nl__bool__78;
#line 155
c_rt_lib0clear(&___nl__im__79);
#line 155
c_rt_lib0clear(&___nl__im__91);
#line 155
//clear ___nl__bool__92;
#line 155
c_rt_lib0clear(&___nl__im__93);
#line 155
c_rt_lib0clear(&___nl__im__105);
#line 155
//clear ___nl__bool__106;
#line 155
c_rt_lib0clear(&___nl__im__107);
#line 155
return ___nl__im__117;
#line 156
goto label_15;
#line 156
label_36:
;
#line 157
c_rt_lib0move(&___nl__im__119,___get_global_const(37));
#line 157
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__119));
#line 157
c_rt_lib0clear(&___nl__im__119);
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
c_rt_lib0clear(&___nl__im__65);
#line 157
c_rt_lib0clear(&___nl__im__77);
#line 157
//clear ___nl__bool__78;
#line 157
c_rt_lib0clear(&___nl__im__79);
#line 157
c_rt_lib0clear(&___nl__im__91);
#line 157
//clear ___nl__bool__92;
#line 157
c_rt_lib0clear(&___nl__im__93);
#line 157
c_rt_lib0clear(&___nl__im__105);
#line 157
//clear ___nl__bool__106;
#line 157
c_rt_lib0clear(&___nl__im__107);
#line 157
c_rt_lib0clear(&___nl__im__117);
#line 157
return ___nl__im__118;
#line 158
goto label_15;
#line 158
label_15:
;
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
c_rt_lib0clear(&___nl__im__65);
#line 158
c_rt_lib0clear(&___nl__im__77);
#line 158
//clear ___nl__bool__78;
#line 158
c_rt_lib0clear(&___nl__im__79);
#line 158
c_rt_lib0clear(&___nl__im__91);
#line 158
//clear ___nl__bool__92;
#line 158
c_rt_lib0clear(&___nl__im__93);
#line 158
c_rt_lib0clear(&___nl__im__105);
#line 158
//clear ___nl__bool__106;
#line 158
c_rt_lib0clear(&___nl__im__107);
#line 158
c_rt_lib0clear(&___nl__im__117);
#line 158
c_rt_lib0clear(&___nl__im__118);
#line 158
c_rt_lib0clear(&___nl__im__37);
#line 125
goto label_12;
#line 160
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(0));
#line 160
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
#line 164
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 164
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 164
c_rt_lib0clear(&___nl__im__2);
#line 164
___nl__bool__1 = !___nl__bool__1;
#line 164
if(___nl__bool__1){ goto label_2;}
#line 164
//clear ___nl__bool__1;
#line 164
return ___nl__im__0;
#line 164
goto label_1;
#line 164
label_2:
;
#line 164
label_1:
;
#line 164
//clear ___nl__bool__1;
#line 165
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 165
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__4, ___nl__im__0));
#line 165
c_rt_lib0clear(&___nl__im__4);
#line 166
___nl__int__7 = 0;
#line 166
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_get(___nl__im__3, ___nl__int__7));
#line 166
//clear ___nl__int__7;
#line 166
c_rt_lib0move(&___nl__im__8,___get_global_const(994));
#line 166
___nl__bool__5 = c_rt_lib0ne(___nl__im__6, ___nl__im__8);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
c_rt_lib0clear(&___nl__im__8);
#line 166
___nl__bool__5 = !___nl__bool__5;
#line 166
if(___nl__bool__5){ goto label_4;}
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
//clear ___nl__bool__5;
#line 166
return ___nl__im__0;
#line 166
goto label_3;
#line 166
label_4:
;
#line 166
label_3:
;
#line 166
//clear ___nl__bool__5;
#line 167
___nl__int__9 = 1;
#line 167
___nl__int__11 = c_rt_lib0array_len(___nl__im__3);
#line 167
___nl__int__12 = 1;
#line 167
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 167
//clear ___nl__int__11;
#line 167
//clear ___nl__int__12;
#line 167
c_rt_lib0move(&___nl__im__3, array0subarray(___nl__im__3, ___nl__int__9, ___nl__int__10));
#line 167
//clear ___nl__int__9;
#line 167
//clear ___nl__int__10;
#line 168
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 169
___nl__int__15 = 0;
#line 169
___nl__int__16 = 1;
#line 169
___nl__int__17 = c_rt_lib0array_len(___nl__im__3);
#line 169
label_7:
;
#line 169
___nl__int__19 = ___nl__int__15 >= ___nl__int__17;
#line 169
___nl__bool__18 = ___nl__int__19;
#line 169
if(___nl__bool__18){ goto label_5;}
#line 169
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__3, ___nl__int__15));
#line 169
c_rt_lib0copy(&___nl__im__14, ___nl__im__20);
#line 172
c_rt_lib0move(&___nl__im__22, string_utils0is_int(___nl__im__14));
#line 172
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__22);
#line 172
c_rt_lib0clear(&___nl__im__22);
#line 172
if(___nl__bool__21){ goto label_16;}
#line 172
c_rt_lib0move(&___nl__im__23,___get_global_const(356));
#line 172
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__23);
#line 172
c_rt_lib0clear(&___nl__im__23);
#line 172
label_16:
;
#line 172
if(___nl__bool__21){ goto label_15;}
#line 172
c_rt_lib0move(&___nl__im__24,___get_global_const(111));
#line 172
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__24);
#line 172
c_rt_lib0clear(&___nl__im__24);
#line 172
label_15:
;
#line 172
if(___nl__bool__21){ goto label_14;}
#line 172
c_rt_lib0move(&___nl__im__25,___get_global_const(358));
#line 172
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__25);
#line 172
c_rt_lib0clear(&___nl__im__25);
#line 172
label_14:
;
#line 172
if(___nl__bool__21){ goto label_13;}
#line 172
c_rt_lib0move(&___nl__im__26,___get_global_const(106));
#line 172
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__26);
#line 172
c_rt_lib0clear(&___nl__im__26);
#line 172
label_13:
;
#line 172
if(___nl__bool__21){ goto label_12;}
#line 172
c_rt_lib0move(&___nl__im__27,___get_global_const(437));
#line 172
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__27);
#line 172
c_rt_lib0clear(&___nl__im__27);
#line 172
label_12:
;
#line 172
if(___nl__bool__21){ goto label_11;}
#line 173
c_rt_lib0move(&___nl__im__28,___get_global_const(315));
#line 173
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__28);
#line 173
c_rt_lib0clear(&___nl__im__28);
#line 173
label_11:
;
#line 173
if(___nl__bool__21){ goto label_10;}
#line 173
c_rt_lib0move(&___nl__im__29,___get_global_const(364));
#line 173
___nl__bool__21 = c_rt_lib0eq(___nl__im__14, ___nl__im__29);
#line 173
c_rt_lib0clear(&___nl__im__29);
#line 173
label_10:
;
#line 173
___nl__bool__21 = !___nl__bool__21;
#line 173
___nl__bool__21 = !___nl__bool__21;
#line 173
if(___nl__bool__21){ goto label_9;}
#line 170
c_rt_lib0clear(&___nl__im__3);
#line 170
c_rt_lib0clear(&___nl__im__13);
#line 170
c_rt_lib0clear(&___nl__im__14);
#line 170
//clear ___nl__int__15;
#line 170
//clear ___nl__int__16;
#line 170
//clear ___nl__int__17;
#line 170
//clear ___nl__bool__18;
#line 170
//clear ___nl__int__19;
#line 170
c_rt_lib0clear(&___nl__im__20);
#line 170
//clear ___nl__bool__21;
#line 170
return ___nl__im__0;
#line 170
goto label_8;
#line 170
label_9:
;
#line 170
label_8:
;
#line 170
//clear ___nl__bool__21;
#line 174
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_add(___nl__im__13, ___nl__im__14));
#line 174
c_rt_lib0clear(&___nl__im__14);
#line 175
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 175
goto label_7;
#line 175
label_5:
;
#line 176
c_rt_lib0move(&___nl__im__31,___get_global_const(37));
#line 176
c_rt_lib0move(&___nl__im__30, string0split(___nl__im__31, ___nl__im__13));
#line 176
c_rt_lib0clear(&___nl__im__31);
#line 177
c_rt_lib0move(&___nl__im__32,___get_global_const(21));
#line 178
___nl__int__34 = 1;
#line 178
___nl__int__34 = -___nl__int__34;
#line 178
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 178
c_rt_lib0move(&___nl__im__33, string_utils_priv0cal_expr(___nl__im__30, &___nl__im__32, ___nl__im__35));
#line 178
//clear ___nl__int__34;
#line 178
c_rt_lib0clear(&___nl__im__35);
#line 178
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(78));
#line 178
if(___nl__bool__36){ goto label_18;}
#line 180
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(79));
#line 180
if(___nl__bool__36){ goto label_19;}
#line 180
c_rt_lib0move(&___nl__im__37,___get_global_const(16));
#line 180
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__33));
#line 180
nl_die_arg(___nl__im__37);
#line 178
label_18:
;
#line 178
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(78)));
#line 178
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 179
c_rt_lib0move(&___nl__im__40,___get_global_const(37));
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
c_rt_lib0clear(&___nl__im__3);
#line 179
c_rt_lib0clear(&___nl__im__13);
#line 179
c_rt_lib0clear(&___nl__im__14);
#line 179
//clear ___nl__int__15;
#line 179
//clear ___nl__int__16;
#line 179
//clear ___nl__int__17;
#line 179
//clear ___nl__bool__18;
#line 179
//clear ___nl__int__19;
#line 179
c_rt_lib0clear(&___nl__im__20);
#line 179
c_rt_lib0clear(&___nl__im__30);
#line 179
c_rt_lib0clear(&___nl__im__32);
#line 179
c_rt_lib0clear(&___nl__im__33);
#line 179
//clear ___nl__bool__36;
#line 179
c_rt_lib0clear(&___nl__im__37);
#line 179
c_rt_lib0clear(&___nl__im__38);
#line 179
c_rt_lib0clear(&___nl__im__39);
#line 179
return ___nl__im__40;
#line 180
goto label_17;
#line 180
label_19:
;
#line 180
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(79)));
#line 180
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 181
c_rt_lib0clear(&___nl__im__0);
#line 181
c_rt_lib0clear(&___nl__im__3);
#line 181
c_rt_lib0clear(&___nl__im__13);
#line 181
c_rt_lib0clear(&___nl__im__14);
#line 181
//clear ___nl__int__15;
#line 181
//clear ___nl__int__16;
#line 181
//clear ___nl__int__17;
#line 181
//clear ___nl__bool__18;
#line 181
//clear ___nl__int__19;
#line 181
c_rt_lib0clear(&___nl__im__20);
#line 181
c_rt_lib0clear(&___nl__im__30);
#line 181
c_rt_lib0clear(&___nl__im__32);
#line 181
c_rt_lib0clear(&___nl__im__33);
#line 181
//clear ___nl__bool__36;
#line 181
c_rt_lib0clear(&___nl__im__37);
#line 181
c_rt_lib0clear(&___nl__im__38);
#line 181
c_rt_lib0clear(&___nl__im__39);
#line 181
c_rt_lib0clear(&___nl__im__40);
#line 181
c_rt_lib0clear(&___nl__im__42);
#line 181
return ___nl__im__41;
#line 182
goto label_17;
#line 182
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
#line 189
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__1, ___nl__im__0));
#line 192
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 192
___nl__int__8 = 3;
#line 192
___nl__int__9 = ___nl__int__7 == ___nl__int__8;
#line 192
___nl__bool__3 = ___nl__int__9;
#line 192
//clear ___nl__int__7;
#line 192
//clear ___nl__int__8;
#line 192
//clear ___nl__int__9;
#line 192
___nl__bool__6 = !___nl__bool__3;
#line 192
if(___nl__bool__6){ goto label_5;}
#line 193
___nl__int__11 = 0;
#line 193
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__2, ___nl__int__11));
#line 193
//clear ___nl__int__11;
#line 193
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__10);
#line 193
c_rt_lib0clear(&___nl__im__10);
#line 193
label_5:
;
#line 193
//clear ___nl__bool__6;
#line 193
___nl__bool__5 = !___nl__bool__3;
#line 193
if(___nl__bool__5){ goto label_4;}
#line 194
___nl__int__13 = 1;
#line 194
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__13));
#line 194
//clear ___nl__int__13;
#line 194
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__12);
#line 194
c_rt_lib0clear(&___nl__im__12);
#line 194
label_4:
;
#line 194
//clear ___nl__bool__5;
#line 194
___nl__bool__4 = !___nl__bool__3;
#line 194
if(___nl__bool__4){ goto label_3;}
#line 195
___nl__int__15 = 2;
#line 195
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__2, ___nl__int__15));
#line 195
//clear ___nl__int__15;
#line 195
___nl__bool__3 = string_utils0is_integer_possibly_leading_zeros(___nl__im__14);
#line 195
c_rt_lib0clear(&___nl__im__14);
#line 195
label_3:
;
#line 195
//clear ___nl__bool__4;
#line 195
___nl__bool__3 = !___nl__bool__3;
#line 195
___nl__bool__3 = !___nl__bool__3;
#line 195
if(___nl__bool__3){ goto label_2;}
#line 190
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 190
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__17));
#line 190
c_rt_lib0clear(&___nl__im__17);
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 190
//clear ___nl__bool__3;
#line 190
return ___nl__im__16;
#line 190
goto label_1;
#line 190
label_2:
;
#line 190
label_1:
;
#line 190
//clear ___nl__bool__3;
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 196
___nl__int__20 = 0;
#line 196
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__2, ___nl__int__20));
#line 196
//clear ___nl__int__20;
#line 196
___nl__int__18 = ptd0string_to_int(___nl__im__19);
#line 196
c_rt_lib0clear(&___nl__im__19);
#line 197
___nl__int__23 = 1;
#line 197
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__2, ___nl__int__23));
#line 197
//clear ___nl__int__23;
#line 197
___nl__int__21 = ptd0string_to_int(___nl__im__22);
#line 197
c_rt_lib0clear(&___nl__im__22);
#line 198
___nl__int__26 = 2;
#line 198
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__2, ___nl__int__26));
#line 198
//clear ___nl__int__26;
#line 198
___nl__int__24 = ptd0string_to_int(___nl__im__25);
#line 198
c_rt_lib0clear(&___nl__im__25);
#line 199
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__18));
#line 199
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__21));
#line 199
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__24));
#line 199
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_const(1269), ___nl__im__29, ___get_global_const(1270), ___nl__im__30, ___get_global_const(1271), ___nl__im__31));
#line 199
c_rt_lib0clear(&___nl__im__29);
#line 199
c_rt_lib0clear(&___nl__im__30);
#line 199
c_rt_lib0clear(&___nl__im__31);
#line 199
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__28));
#line 199
c_rt_lib0clear(&___nl__im__28);
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
//clear ___nl__int__18;
#line 199
//clear ___nl__int__21;
#line 199
//clear ___nl__int__24;
#line 199
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
#line 203
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 204
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 204
c_rt_lib0move(&___nl__im__4, string0split(___nl__im__5, ___nl__im__0));
#line 204
c_rt_lib0clear(&___nl__im__5);
#line 204
___nl__int__7 = 0;
#line 204
___nl__int__8 = 1;
#line 204
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 204
label_3:
;
#line 204
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 204
___nl__bool__10 = ___nl__int__11;
#line 204
if(___nl__bool__10){ goto label_1;}
#line 204
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__4, ___nl__int__7));
#line 204
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 205
___nl__bool__14 = c_rt_lib0eq(___nl__im__6, ___nl__im__1);
#line 205
if(___nl__bool__14){ goto label_5;}
#line 205
c_rt_lib0copy(&___nl__im__13, ___nl__im__6);
#line 205
goto label_4;
#line 205
label_5:
;
#line 205
c_rt_lib0copy(&___nl__im__13, ___nl__im__2);
#line 205
label_4:
;
#line 205
//clear ___nl__bool__14;
#line 205
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 205
c_rt_lib0clear(&___nl__im__13);
#line 205
c_rt_lib0clear(&___nl__im__6);
#line 206
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 206
goto label_3;
#line 206
label_1:
;
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
c_rt_lib0clear(&___nl__im__2);
#line 207
c_rt_lib0clear(&___nl__im__4);
#line 207
c_rt_lib0clear(&___nl__im__6);
#line 207
//clear ___nl__int__7;
#line 207
//clear ___nl__int__8;
#line 207
//clear ___nl__int__9;
#line 207
//clear ___nl__bool__10;
#line 207
//clear ___nl__int__11;
#line 207
c_rt_lib0clear(&___nl__im__12);
#line 207
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
#line 211
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 211
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 211
c_rt_lib0clear(&___nl__im__2);
#line 211
___nl__bool__1 = !___nl__bool__1;
#line 211
if(___nl__bool__1){ goto label_2;}
#line 211
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 211
c_rt_lib0clear(&___nl__im__0);
#line 211
//clear ___nl__bool__1;
#line 211
return ___nl__im__3;
#line 211
goto label_1;
#line 211
label_2:
;
#line 211
label_1:
;
#line 211
//clear ___nl__bool__1;
#line 211
c_rt_lib0clear(&___nl__im__3);
#line 212
___nl__int__5 = string0length(___nl__im__0);
#line 212
___nl__int__6 = 1;
#line 212
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 212
//clear ___nl__int__5;
#line 212
//clear ___nl__int__6;
#line 213
label_4:
;
#line 213
___nl__int__9 = 0;
#line 213
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 213
___nl__bool__7 = ___nl__int__10;
#line 213
//clear ___nl__int__9;
#line 213
//clear ___nl__int__10;
#line 213
___nl__bool__8 = !___nl__bool__7;
#line 213
if(___nl__bool__8){ goto label_5;}
#line 213
___nl__int__12 = 1;
#line 213
c_rt_lib0move(&___nl__im__11, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__12));
#line 213
//clear ___nl__int__12;
#line 213
c_rt_lib0move(&___nl__im__13, string_utils0is_whitespace(___nl__im__11));
#line 213
___nl__bool__7 = c_rt_lib0check_true_native(___nl__im__13);
#line 213
c_rt_lib0clear(&___nl__im__11);
#line 213
c_rt_lib0clear(&___nl__im__13);
#line 213
label_5:
;
#line 213
//clear ___nl__bool__8;
#line 213
___nl__bool__7 = !___nl__bool__7;
#line 213
if(___nl__bool__7){ goto label_3;}
#line 214
___nl__int__14 = 1;
#line 214
___nl__int__4 = ___nl__int__4 - ___nl__int__14;
#line 214
//clear ___nl__int__14;
#line 215
goto label_4;
#line 215
label_3:
;
#line 216
___nl__int__16 = 0;
#line 216
___nl__int__18 = 1;
#line 216
___nl__int__17 = ___nl__int__4 + ___nl__int__18;
#line 216
//clear ___nl__int__18;
#line 216
c_rt_lib0move(&___nl__im__15, string0substr(___nl__im__0, ___nl__int__16, ___nl__int__17));
#line 216
//clear ___nl__int__16;
#line 216
//clear ___nl__int__17;
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
//clear ___nl__int__4;
#line 216
//clear ___nl__bool__7;
#line 216
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
#line 220
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 220
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 220
c_rt_lib0clear(&___nl__im__2);
#line 220
___nl__bool__1 = !___nl__bool__1;
#line 220
if(___nl__bool__1){ goto label_2;}
#line 220
//clear ___nl__bool__1;
#line 220
return ___nl__im__0;
#line 220
goto label_1;
#line 220
label_2:
;
#line 220
label_1:
;
#line 220
//clear ___nl__bool__1;
#line 221
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 222
___nl__int__5 = c_rt_lib0array_len(___nl__im__3);
#line 222
___nl__int__6 = 1;
#line 222
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 222
//clear ___nl__int__5;
#line 222
//clear ___nl__int__6;
#line 223
label_4:
;
#line 223
___nl__int__9 = 0;
#line 223
___nl__int__10 = ___nl__int__4 >= ___nl__int__9;
#line 223
___nl__bool__7 = ___nl__int__10;
#line 223
//clear ___nl__int__9;
#line 223
//clear ___nl__int__10;
#line 223
___nl__bool__8 = !___nl__bool__7;
#line 223
if(___nl__bool__8){ goto label_5;}
#line 223
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 223
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 223
___nl__bool__7 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 223
c_rt_lib0clear(&___nl__im__11);
#line 223
c_rt_lib0clear(&___nl__im__12);
#line 223
label_5:
;
#line 223
//clear ___nl__bool__8;
#line 223
___nl__bool__7 = !___nl__bool__7;
#line 223
if(___nl__bool__7){ goto label_3;}
#line 224
___nl__int__13 = 1;
#line 224
___nl__int__4 = ___nl__int__4 - ___nl__int__13;
#line 224
//clear ___nl__int__13;
#line 225
goto label_4;
#line 225
label_3:
;
#line 226
___nl__int__15 = 0;
#line 226
___nl__int__17 = 1;
#line 226
___nl__int__16 = ___nl__int__4 + ___nl__int__17;
#line 226
//clear ___nl__int__17;
#line 226
c_rt_lib0move(&___nl__im__14, string0substr(___nl__im__0, ___nl__int__15, ___nl__int__16));
#line 226
//clear ___nl__int__15;
#line 226
//clear ___nl__int__16;
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
c_rt_lib0clear(&___nl__im__3);
#line 226
//clear ___nl__int__4;
#line 226
//clear ___nl__bool__7;
#line 226
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
#line 230
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 230
___nl__bool__1 = c_rt_lib0eq(___nl__im__0, ___nl__im__2);
#line 230
c_rt_lib0clear(&___nl__im__2);
#line 230
___nl__bool__1 = !___nl__bool__1;
#line 230
if(___nl__bool__1){ goto label_2;}
#line 230
//clear ___nl__bool__1;
#line 230
return ___nl__im__0;
#line 230
goto label_1;
#line 230
label_2:
;
#line 230
label_1:
;
#line 230
//clear ___nl__bool__1;
#line 231
c_rt_lib0move(&___nl__im__3, string0to_array(___nl__im__0));
#line 232
___nl__int__4 = 0;
#line 233
label_4:
;
#line 233
___nl__int__7 = c_rt_lib0array_len(___nl__im__3);
#line 233
___nl__int__8 = ___nl__int__4 < ___nl__int__7;
#line 233
___nl__bool__5 = ___nl__int__8;
#line 233
//clear ___nl__int__7;
#line 233
//clear ___nl__int__8;
#line 233
___nl__bool__6 = !___nl__bool__5;
#line 233
if(___nl__bool__6){ goto label_5;}
#line 233
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__3, ___nl__int__4));
#line 233
c_rt_lib0move(&___nl__im__10,___get_global_const(21));
#line 233
___nl__bool__5 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 233
c_rt_lib0clear(&___nl__im__9);
#line 233
c_rt_lib0clear(&___nl__im__10);
#line 233
label_5:
;
#line 233
//clear ___nl__bool__6;
#line 233
___nl__bool__5 = !___nl__bool__5;
#line 233
if(___nl__bool__5){ goto label_3;}
#line 234
___nl__int__11 = 1;
#line 234
___nl__int__4 = ___nl__int__4 + ___nl__int__11;
#line 234
//clear ___nl__int__11;
#line 235
goto label_4;
#line 235
label_3:
;
#line 236
___nl__int__14 = c_rt_lib0array_len(___nl__im__3);
#line 236
___nl__int__15 = ___nl__int__4 != ___nl__int__14;
#line 236
___nl__bool__13 = ___nl__int__15;
#line 236
//clear ___nl__int__14;
#line 236
//clear ___nl__int__15;
#line 236
if(___nl__bool__13){ goto label_7;}
#line 238
c_rt_lib0move(&___nl__im__12,___get_global_const(21));
#line 238
goto label_6;
#line 238
label_7:
;
#line 237
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__4));
#line 237
c_rt_lib0move(&___nl__im__12, string0substr2(___nl__im__0, ___nl__im__16));
#line 237
c_rt_lib0clear(&___nl__im__16);
#line 237
label_6:
;
#line 237
//clear ___nl__bool__13;
#line 237
c_rt_lib0clear(&___nl__im__0);
#line 237
c_rt_lib0clear(&___nl__im__3);
#line 237
//clear ___nl__int__4;
#line 237
//clear ___nl__bool__5;
#line 237
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
#line 242
c_rt_lib0move(&___nl__im__2,___get_global_const(21));
#line 242
c_rt_lib0move(&___nl__im__3,___get_global_const(41));
#line 242
c_rt_lib0move(&___nl__im__4,___get_global_const(1272));
#line 242
c_rt_lib0move(&___nl__im__5,___get_global_const(1273));
#line 242
c_rt_lib0move(&___nl__im__6,___get_global_const(1274));
#line 242
c_rt_lib0move(&___nl__im__7,___get_global_const(1275));
#line 242
c_rt_lib0move(&___nl__im__8,___get_global_const(1276));
#line 242
c_rt_lib0move(&___nl__im__9,___get_global_const(1277));
#line 242
c_rt_lib0move(&___nl__im__10,___get_global_const(1278));
#line 242
c_rt_lib0move(&___nl__im__11,___get_global_const(1279));
#line 242
c_rt_lib0move(&___nl__im__12,___get_global_const(1280));
#line 242
c_rt_lib0move(&___nl__im__13,___get_global_const(1281));
#line 242
c_rt_lib0move(&___nl__im__14,___get_global_const(66));
#line 242
c_rt_lib0move(&___nl__im__15,___get_global_const(1282));
#line 242
c_rt_lib0move(&___nl__im__16,___get_global_const(1283));
#line 242
c_rt_lib0move(&___nl__im__17,___get_global_const(1284));
#line 242
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(16, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17));
#line 242
c_rt_lib0clear(&___nl__im__2);
#line 242
c_rt_lib0clear(&___nl__im__3);
#line 242
c_rt_lib0clear(&___nl__im__4);
#line 242
c_rt_lib0clear(&___nl__im__5);
#line 242
c_rt_lib0clear(&___nl__im__6);
#line 242
c_rt_lib0clear(&___nl__im__7);
#line 242
c_rt_lib0clear(&___nl__im__8);
#line 242
c_rt_lib0clear(&___nl__im__9);
#line 242
c_rt_lib0clear(&___nl__im__10);
#line 242
c_rt_lib0clear(&___nl__im__11);
#line 242
c_rt_lib0clear(&___nl__im__12);
#line 242
c_rt_lib0clear(&___nl__im__13);
#line 242
c_rt_lib0clear(&___nl__im__14);
#line 242
c_rt_lib0clear(&___nl__im__15);
#line 242
c_rt_lib0clear(&___nl__im__16);
#line 242
c_rt_lib0clear(&___nl__im__17);
#line 243
___nl__int__21 = 16;
#line 243
___nl__int__22 = getIntFromImm(___nl__im__0);
#line 243
___nl__int__20 = ___nl__int__22 / ___nl__int__21;
#line 243
//clear ___nl__int__21;
#line 243
//clear ___nl__int__22;
#line 243
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__1, ___nl__int__20));
#line 243
//clear ___nl__int__20;
#line 243
___nl__int__25 = 16;
#line 243
___nl__int__26 = getIntFromImm(___nl__im__0);
#line 243
___nl__int__24 = ___nl__int__26 % ___nl__int__25;
#line 243
//clear ___nl__int__25;
#line 243
//clear ___nl__int__26;
#line 243
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__1, ___nl__int__24));
#line 243
//clear ___nl__int__24;
#line 243
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 243
c_rt_lib0clear(&___nl__im__19);
#line 243
c_rt_lib0clear(&___nl__im__23);
#line 243
c_rt_lib0clear(&___nl__im__0);
#line 243
c_rt_lib0clear(&___nl__im__1);
#line 243
return ___nl__im__18;
#line 243
c_rt_lib0clear(&___nl__im__0);
#line 243
c_rt_lib0clear(&___nl__im__1);
#line 243
c_rt_lib0clear(&___nl__im__18);
#line 243
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
#line 247
___nl__int__2 = 0;
#line 248
___nl__int__5 = 48;
#line 248
___nl__int__6 = getIntFromImm(___nl__im__0);
#line 248
___nl__int__7 = ___nl__int__6 >= ___nl__int__5;
#line 248
___nl__bool__3 = ___nl__int__7;
#line 248
//clear ___nl__int__5;
#line 248
//clear ___nl__int__6;
#line 248
//clear ___nl__int__7;
#line 248
___nl__bool__4 = !___nl__bool__3;
#line 248
if(___nl__bool__4){ goto label_3;}
#line 248
___nl__int__8 = 57;
#line 248
___nl__int__9 = getIntFromImm(___nl__im__0);
#line 248
___nl__int__10 = ___nl__int__9 <= ___nl__int__8;
#line 248
___nl__bool__3 = ___nl__int__10;
#line 248
//clear ___nl__int__8;
#line 248
//clear ___nl__int__9;
#line 248
//clear ___nl__int__10;
#line 248
label_3:
;
#line 248
//clear ___nl__bool__4;
#line 248
___nl__bool__3 = !___nl__bool__3;
#line 248
if(___nl__bool__3){ goto label_2;}
#line 249
___nl__int__11 = getIntFromImm(___nl__im__0);
#line 249
___nl__int__2 = ___nl__int__2 + ___nl__int__11;
#line 249
//clear ___nl__int__11;
#line 250
___nl__int__12 = 48;
#line 250
___nl__int__2 = ___nl__int__2 - ___nl__int__12;
#line 250
//clear ___nl__int__12;
#line 251
goto label_1;
#line 251
label_2:
;
#line 251
___nl__int__14 = 65;
#line 251
___nl__int__15 = getIntFromImm(___nl__im__0);
#line 251
___nl__int__16 = ___nl__int__15 >= ___nl__int__14;
#line 251
___nl__bool__3 = ___nl__int__16;
#line 251
//clear ___nl__int__14;
#line 251
//clear ___nl__int__15;
#line 251
//clear ___nl__int__16;
#line 251
___nl__bool__13 = !___nl__bool__3;
#line 251
if(___nl__bool__13){ goto label_5;}
#line 251
___nl__int__17 = 70;
#line 251
___nl__int__18 = getIntFromImm(___nl__im__0);
#line 251
___nl__int__19 = ___nl__int__18 <= ___nl__int__17;
#line 251
___nl__bool__3 = ___nl__int__19;
#line 251
//clear ___nl__int__17;
#line 251
//clear ___nl__int__18;
#line 251
//clear ___nl__int__19;
#line 251
label_5:
;
#line 251
//clear ___nl__bool__13;
#line 251
___nl__bool__3 = !___nl__bool__3;
#line 251
if(___nl__bool__3){ goto label_4;}
#line 252
___nl__int__20 = getIntFromImm(___nl__im__0);
#line 252
___nl__int__2 = ___nl__int__2 + ___nl__int__20;
#line 252
//clear ___nl__int__20;
#line 253
___nl__int__21 = 55;
#line 253
___nl__int__2 = ___nl__int__2 - ___nl__int__21;
#line 253
//clear ___nl__int__21;
#line 254
goto label_1;
#line 254
label_4:
;
#line 254
___nl__int__23 = 97;
#line 254
___nl__int__24 = getIntFromImm(___nl__im__0);
#line 254
___nl__int__25 = ___nl__int__24 >= ___nl__int__23;
#line 254
___nl__bool__3 = ___nl__int__25;
#line 254
//clear ___nl__int__23;
#line 254
//clear ___nl__int__24;
#line 254
//clear ___nl__int__25;
#line 254
___nl__bool__22 = !___nl__bool__3;
#line 254
if(___nl__bool__22){ goto label_7;}
#line 254
___nl__int__26 = 102;
#line 254
___nl__int__27 = getIntFromImm(___nl__im__0);
#line 254
___nl__int__28 = ___nl__int__27 <= ___nl__int__26;
#line 254
___nl__bool__3 = ___nl__int__28;
#line 254
//clear ___nl__int__26;
#line 254
//clear ___nl__int__27;
#line 254
//clear ___nl__int__28;
#line 254
label_7:
;
#line 254
//clear ___nl__bool__22;
#line 254
___nl__bool__3 = !___nl__bool__3;
#line 254
if(___nl__bool__3){ goto label_6;}
#line 255
___nl__int__29 = getIntFromImm(___nl__im__0);
#line 255
___nl__int__2 = ___nl__int__2 + ___nl__int__29;
#line 255
//clear ___nl__int__29;
#line 256
___nl__int__30 = 87;
#line 256
___nl__int__2 = ___nl__int__2 - ___nl__int__30;
#line 256
//clear ___nl__int__30;
#line 257
goto label_1;
#line 257
label_6:
;
#line 258
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 258
nl_die_arg(___nl__im__31);
#line 259
goto label_1;
#line 259
label_1:
;
#line 259
//clear ___nl__bool__3;
#line 259
c_rt_lib0clear(&___nl__im__31);
#line 260
___nl__int__32 = 16;
#line 260
___nl__int__2 = ___nl__int__2 * ___nl__int__32;
#line 260
//clear ___nl__int__32;
#line 261
___nl__int__35 = 48;
#line 261
___nl__int__36 = getIntFromImm(___nl__im__1);
#line 261
___nl__int__37 = ___nl__int__36 >= ___nl__int__35;
#line 261
___nl__bool__33 = ___nl__int__37;
#line 261
//clear ___nl__int__35;
#line 261
//clear ___nl__int__36;
#line 261
//clear ___nl__int__37;
#line 261
___nl__bool__34 = !___nl__bool__33;
#line 261
if(___nl__bool__34){ goto label_10;}
#line 261
___nl__int__38 = 57;
#line 261
___nl__int__39 = getIntFromImm(___nl__im__1);
#line 261
___nl__int__40 = ___nl__int__39 <= ___nl__int__38;
#line 261
___nl__bool__33 = ___nl__int__40;
#line 261
//clear ___nl__int__38;
#line 261
//clear ___nl__int__39;
#line 261
//clear ___nl__int__40;
#line 261
label_10:
;
#line 261
//clear ___nl__bool__34;
#line 261
___nl__bool__33 = !___nl__bool__33;
#line 261
if(___nl__bool__33){ goto label_9;}
#line 262
___nl__int__41 = getIntFromImm(___nl__im__1);
#line 262
___nl__int__2 = ___nl__int__2 + ___nl__int__41;
#line 262
//clear ___nl__int__41;
#line 263
___nl__int__42 = 48;
#line 263
___nl__int__2 = ___nl__int__2 - ___nl__int__42;
#line 263
//clear ___nl__int__42;
#line 264
goto label_8;
#line 264
label_9:
;
#line 264
___nl__int__44 = 65;
#line 264
___nl__int__45 = getIntFromImm(___nl__im__1);
#line 264
___nl__int__46 = ___nl__int__45 >= ___nl__int__44;
#line 264
___nl__bool__33 = ___nl__int__46;
#line 264
//clear ___nl__int__44;
#line 264
//clear ___nl__int__45;
#line 264
//clear ___nl__int__46;
#line 264
___nl__bool__43 = !___nl__bool__33;
#line 264
if(___nl__bool__43){ goto label_12;}
#line 264
___nl__int__47 = 70;
#line 264
___nl__int__48 = getIntFromImm(___nl__im__1);
#line 264
___nl__int__49 = ___nl__int__48 <= ___nl__int__47;
#line 264
___nl__bool__33 = ___nl__int__49;
#line 264
//clear ___nl__int__47;
#line 264
//clear ___nl__int__48;
#line 264
//clear ___nl__int__49;
#line 264
label_12:
;
#line 264
//clear ___nl__bool__43;
#line 264
___nl__bool__33 = !___nl__bool__33;
#line 264
if(___nl__bool__33){ goto label_11;}
#line 265
___nl__int__50 = getIntFromImm(___nl__im__1);
#line 265
___nl__int__2 = ___nl__int__2 + ___nl__int__50;
#line 265
//clear ___nl__int__50;
#line 266
___nl__int__51 = 55;
#line 266
___nl__int__2 = ___nl__int__2 - ___nl__int__51;
#line 266
//clear ___nl__int__51;
#line 267
goto label_8;
#line 267
label_11:
;
#line 267
___nl__int__53 = 97;
#line 267
___nl__int__54 = getIntFromImm(___nl__im__1);
#line 267
___nl__int__55 = ___nl__int__54 >= ___nl__int__53;
#line 267
___nl__bool__33 = ___nl__int__55;
#line 267
//clear ___nl__int__53;
#line 267
//clear ___nl__int__54;
#line 267
//clear ___nl__int__55;
#line 267
___nl__bool__52 = !___nl__bool__33;
#line 267
if(___nl__bool__52){ goto label_14;}
#line 267
___nl__int__56 = 102;
#line 267
___nl__int__57 = getIntFromImm(___nl__im__1);
#line 267
___nl__int__58 = ___nl__int__57 <= ___nl__int__56;
#line 267
___nl__bool__33 = ___nl__int__58;
#line 267
//clear ___nl__int__56;
#line 267
//clear ___nl__int__57;
#line 267
//clear ___nl__int__58;
#line 267
label_14:
;
#line 267
//clear ___nl__bool__52;
#line 267
___nl__bool__33 = !___nl__bool__33;
#line 267
if(___nl__bool__33){ goto label_13;}
#line 268
___nl__int__59 = getIntFromImm(___nl__im__1);
#line 268
___nl__int__2 = ___nl__int__2 + ___nl__int__59;
#line 268
//clear ___nl__int__59;
#line 269
___nl__int__60 = 87;
#line 269
___nl__int__2 = ___nl__int__2 - ___nl__int__60;
#line 269
//clear ___nl__int__60;
#line 270
goto label_8;
#line 270
label_13:
;
#line 271
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_mk(0));
#line 271
nl_die_arg(___nl__im__61);
#line 272
goto label_8;
#line 272
label_8:
;
#line 272
//clear ___nl__bool__33;
#line 272
c_rt_lib0clear(&___nl__im__61);
#line 273
c_rt_lib0move(&___nl__im__62, string0chr(___nl__int__2));
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
//clear ___nl__int__2;
#line 273
return ___nl__im__62;
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
//clear ___nl__int__2;
#line 273
c_rt_lib0clear(&___nl__im__62);
#line 273
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
#line 277
c_rt_lib0move(&___nl__im__3,___get_global_const(1285));
#line 277
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 277
c_rt_lib0clear(&___nl__im__3);
#line 278
___nl__int__6 = string0length(___nl__im__2);
#line 278
___nl__int__8 = string0length(___nl__im__0);
#line 278
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 278
c_rt_lib0move(&___nl__im__7, string_utils_priv0max(___nl__im__1, ___nl__im__9));
#line 278
//clear ___nl__int__8;
#line 278
c_rt_lib0clear(&___nl__im__9);
#line 278
___nl__int__10 = getIntFromImm(___nl__im__7);
#line 278
___nl__int__5 = ___nl__int__6 - ___nl__int__10;
#line 278
//clear ___nl__int__6;
#line 278
c_rt_lib0clear(&___nl__im__7);
#line 278
//clear ___nl__int__10;
#line 278
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__5));
#line 278
c_rt_lib0move(&___nl__im__4, string0substr2(___nl__im__2, ___nl__im__11));
#line 278
//clear ___nl__int__5;
#line 278
c_rt_lib0clear(&___nl__im__11);
#line 278
c_rt_lib0clear(&___nl__im__0);
#line 278
c_rt_lib0clear(&___nl__im__1);
#line 278
c_rt_lib0clear(&___nl__im__2);
#line 278
return ___nl__im__4;
#line 278
c_rt_lib0clear(&___nl__im__0);
#line 278
c_rt_lib0clear(&___nl__im__1);
#line 278
c_rt_lib0clear(&___nl__im__2);
#line 278
c_rt_lib0clear(&___nl__im__4);
#line 278
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
#line 282
___nl__int__4 = getIntFromImm(___nl__im__0);
#line 282
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 282
___nl__int__6 = ___nl__int__4 > ___nl__int__5;
#line 282
___nl__bool__3 = ___nl__int__6;
#line 282
//clear ___nl__int__4;
#line 282
//clear ___nl__int__5;
#line 282
//clear ___nl__int__6;
#line 282
if(___nl__bool__3){ goto label_2;}
#line 282
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 282
goto label_1;
#line 282
label_2:
;
#line 282
___nl__int__2 = getIntFromImm(___nl__im__0);
#line 282
label_1:
;
#line 282
//clear ___nl__bool__3;
#line 282
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
//clear ___nl__int__2;
#line 282
return ___nl__im__7;
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
//clear ___nl__int__2;
#line 282
c_rt_lib0clear(&___nl__im__7);
#line 282
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
#line 286
c_rt_lib0move(&___nl__im__3,___get_global_const(1285));
#line 286
c_rt_lib0move(&___nl__im__4, ptd0int_to_string(___nl__im__0));
#line 286
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 286
c_rt_lib0clear(&___nl__im__3);
#line 286
c_rt_lib0clear(&___nl__im__4);
#line 287
___nl__int__7 = string0length(___nl__im__2);
#line 287
___nl__int__8 = getIntFromImm(___nl__im__1);
#line 287
___nl__int__6 = ___nl__int__7 - ___nl__int__8;
#line 287
//clear ___nl__int__7;
#line 287
//clear ___nl__int__8;
#line 287
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__6));
#line 287
c_rt_lib0move(&___nl__im__5, string0substr2(___nl__im__2, ___nl__im__9));
#line 287
//clear ___nl__int__6;
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
c_rt_lib0clear(&___nl__im__2);
#line 287
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
#line 291
___nl__int__4 = string0length(___nl__im__0);
#line 291
___nl__int__5 = string0length(___nl__im__1);
#line 291
___nl__int__6 = ___nl__int__4 >= ___nl__int__5;
#line 291
___nl__bool__2 = ___nl__int__6;
#line 291
//clear ___nl__int__4;
#line 291
//clear ___nl__int__5;
#line 291
//clear ___nl__int__6;
#line 291
___nl__bool__3 = !___nl__bool__2;
#line 291
if(___nl__bool__3){ goto label_1;}
#line 291
___nl__int__8 = 0;
#line 291
___nl__int__9 = string0length(___nl__im__1);
#line 291
c_rt_lib0move(&___nl__im__7, string0substr(___nl__im__0, ___nl__int__8, ___nl__int__9));
#line 291
//clear ___nl__int__8;
#line 291
//clear ___nl__int__9;
#line 291
___nl__bool__2 = c_rt_lib0eq(___nl__im__7, ___nl__im__1);
#line 291
c_rt_lib0clear(&___nl__im__7);
#line 291
label_1:
;
#line 291
//clear ___nl__bool__3;
#line 291
c_rt_lib0move(&___nl__im__10, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__2;
#line 291
return ___nl__im__10;
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__2;
#line 291
c_rt_lib0clear(&___nl__im__10);
#line 291
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
#line 296
c_rt_lib0move(&___nl__im__4, string0r());
#line 296
c_rt_lib0move(&___nl__im__5, string0lf());
#line 296
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 296
c_rt_lib0clear(&___nl__im__4);
#line 296
c_rt_lib0clear(&___nl__im__5);
#line 296
c_rt_lib0move(&___nl__im__6, string0r());
#line 296
c_rt_lib0move(&___nl__im__7, string0lf());
#line 296
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(3, ___nl__im__3, ___nl__im__6, ___nl__im__7));
#line 296
c_rt_lib0clear(&___nl__im__3);
#line 296
c_rt_lib0clear(&___nl__im__6);
#line 296
c_rt_lib0clear(&___nl__im__7);
#line 297
c_rt_lib0move(&___nl__im__9, string0lf());
#line 297
c_rt_lib0move(&___nl__im__10, string0lf());
#line 297
c_rt_lib0move(&___nl__im__12, string0r());
#line 297
c_rt_lib0move(&___nl__im__13, string0lf());
#line 297
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 297
c_rt_lib0clear(&___nl__im__12);
#line 297
c_rt_lib0clear(&___nl__im__13);
#line 297
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__10, ___nl__im__11));
#line 297
c_rt_lib0clear(&___nl__im__9);
#line 297
c_rt_lib0clear(&___nl__im__10);
#line 297
c_rt_lib0clear(&___nl__im__11);
#line 297
c_rt_lib0move(&___nl__im__1, string0replace_arr(___nl__im__0, ___nl__im__2, ___nl__im__8));
#line 297
c_rt_lib0clear(&___nl__im__2);
#line 297
c_rt_lib0clear(&___nl__im__8);
#line 299
c_rt_lib0move(&___nl__im__15, ptd0string());
#line 299
c_rt_lib0move(&___nl__im__14, ptd0ensure(___nl__im__15, ___nl__im__1));
#line 299
c_rt_lib0clear(&___nl__im__15);
#line 299
c_rt_lib0clear(&___nl__im__0);
#line 299
c_rt_lib0clear(&___nl__im__1);
#line 299
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
if(___nl__bool__5){ goto label_1;}
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
label_1:
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
c_rt_lib0move(&___nl__im__12,___get_global_const(37));
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
c_rt_lib0move(&___nl__im__17,___get_global_const(356));
#line 310
___nl__bool__13 = c_rt_lib0eq(___nl__im__14, ___nl__im__17);
#line 310
c_rt_lib0clear(&___nl__im__14);
#line 310
c_rt_lib0clear(&___nl__im__17);
#line 310
___nl__bool__13 = !___nl__bool__13;
#line 310
if(___nl__bool__13){ goto label_5;}
#line 311
c_rt_lib0move(&___nl__im__12,___get_global_const(356));
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
goto label_4;
#line 313
label_5:
;
#line 313
label_4:
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
if(___nl__bool__25){ goto label_7;}
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
goto label_6;
#line 316
label_7:
;
#line 316
label_6:
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
c_rt_lib0move(&___nl__im__35,___get_global_const(111));
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
#line 321
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 321
c_rt_lib0move(&___nl__im__3, c_rt_lib0float_fixed_str(___nl__im__0));
#line 321
c_rt_lib0move(&___nl__im__1, ptd0ensure(___nl__im__2, ___nl__im__3));
#line 321
c_rt_lib0clear(&___nl__im__2);
#line 321
c_rt_lib0clear(&___nl__im__3);
#line 321
c_rt_lib0clear(&___nl__im__0);
#line 321
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
