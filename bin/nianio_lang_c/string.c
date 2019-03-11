
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "string.h"
#include "c_std_lib.h"
#include "array.h"
#include "ptd.h"
#line 1 "string.nl"

static ImmT *__const__f = NULL;
void string_priv0__const__init();
ImmT string_priv0__const__sim(int __nr);
ImmT string_priv0__const__sing(int __nr);



ImmT  string0lf0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0lf");
return string0lf();
}
ImmT  string0lf() {
string_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
INT  ___nl__int__1 = 0;
#line 11
___nl__int__1 = 10;
#line 11
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 11
//clear ___nl__int__1;
#line 11
return ___nl__im__0;
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
return NULL;
return NULL;
}

ImmT  string0tab0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0tab");
return string0tab();
}
ImmT  string0tab() {
string_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
INT  ___nl__int__1 = 0;
#line 15
___nl__int__1 = 9;
#line 15
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 15
//clear ___nl__int__1;
#line 15
return ___nl__im__0;
return NULL;
}

ImmT  string0r0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0r");
return string0r();
}
ImmT  string0r() {
string_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
INT  ___nl__int__1 = 0;
#line 19
___nl__int__1 = 13;
#line 19
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 19
//clear ___nl__int__1;
#line 19
return ___nl__im__0;
return NULL;
}

ImmT  string0f0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0f");
return string0f();
}
ImmT  string0f() {
string_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
INT  ___nl__int__1 = 0;
#line 23
___nl__int__1 = 12;
#line 23
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 23
//clear ___nl__int__1;
#line 23
return ___nl__im__0;
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
return NULL;
return NULL;
}

ImmT  string0non_breaking_space0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0non_breaking_space");
return string0non_breaking_space();
}
ImmT  string0non_breaking_space() {
string_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 27
___nl__int__2 = 194;
#line 27
c_rt_lib0move(&___nl__im__1, string0chr(___nl__int__2));
#line 27
//clear ___nl__int__2;
#line 27
___nl__int__4 = 160;
#line 27
c_rt_lib0move(&___nl__im__3, string0chr(___nl__int__4));
#line 27
//clear ___nl__int__4;
#line 27
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(2, ___nl__im__1, ___nl__im__3));
#line 27
c_rt_lib0clear(&___nl__im__1);
#line 27
c_rt_lib0clear(&___nl__im__3);
#line 27
return ___nl__im__0;
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
return NULL;
return NULL;
}

ImmT  string0char_times0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0char_times");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0char_times(*var0, *var1);
}
ImmT  string0char_times(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
#line 31
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 32
___nl__int__3 = 0;
#line 32
___nl__int__4 = 1;
#line 32
label_3:
;
#line 32
___nl__int__6 = getIntFromImm(___nl__im__1);
#line 32
___nl__int__7 = ___nl__int__3 >= ___nl__int__6;
#line 32
___nl__bool__5 = ___nl__int__7;
#line 32
if(___nl__bool__5){ goto label_1;}
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 32
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 32
goto label_3;
#line 32
label_1:
;
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
//clear ___nl__int__3;
#line 33
//clear ___nl__int__4;
#line 33
//clear ___nl__bool__5;
#line 33
//clear ___nl__int__6;
#line 33
//clear ___nl__int__7;
#line 33
return ___nl__im__2;
return NULL;
}

ImmT  string0split0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0split");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0split(*var0, *var1);
}
ImmT  string0split(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
#line 37
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 38
___nl__int__3 = 0;
#line 39
___nl__int__4 = string0length(___nl__im__0);
#line 40
___nl__int__5 = string0length(___nl__im__1);
#line 41
label_2:
;
#line 42
___nl__int__7 = 1;
#line 42
___nl__int__6 = ___nl__int__3 + ___nl__int__7;
#line 42
//clear ___nl__int__7;
#line 43
___nl__int__9 = 0;
#line 43
___nl__int__10 = ___nl__int__4 == ___nl__int__9;
#line 43
___nl__bool__8 = ___nl__int__10;
#line 43
//clear ___nl__int__9;
#line 43
//clear ___nl__int__10;
#line 43
___nl__bool__8 = !___nl__bool__8;
#line 43
___nl__bool__8 = !___nl__bool__8;
#line 43
if(___nl__bool__8){ goto label_4;}
#line 43
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__3));
#line 43
c_rt_lib0move(&___nl__im__12, string0index(___nl__im__1, ___nl__im__0, ___nl__im__11));
#line 43
___nl__int__6 = getIntFromImm(___nl__im__12);
#line 43
c_rt_lib0clear(&___nl__im__11);
#line 43
c_rt_lib0clear(&___nl__im__12);
#line 43
goto label_3;
#line 43
label_4:
;
#line 43
label_3:
;
#line 43
//clear ___nl__bool__8;
#line 44
___nl__int__14 = ___nl__int__6 > ___nl__int__5;
#line 44
___nl__bool__13 = ___nl__int__14;
#line 44
//clear ___nl__int__14;
#line 44
___nl__bool__13 = !___nl__bool__13;
#line 44
if(___nl__bool__13){ goto label_6;}
#line 44
goto label_1;
#line 44
goto label_5;
#line 44
label_6:
;
#line 44
label_5:
;
#line 44
//clear ___nl__bool__13;
#line 45
___nl__int__16 = 0;
#line 45
___nl__int__17 = ___nl__int__6 < ___nl__int__16;
#line 45
___nl__bool__15 = ___nl__int__17;
#line 45
//clear ___nl__int__16;
#line 45
//clear ___nl__int__17;
#line 45
___nl__bool__15 = !___nl__bool__15;
#line 45
if(___nl__bool__15){ goto label_8;}
#line 46
___nl__int__19 = ___nl__int__5 - ___nl__int__3;
#line 46
c_rt_lib0move(&___nl__im__18, string0substr(___nl__im__1, ___nl__int__3, ___nl__int__19));
#line 46
//clear ___nl__int__19;
#line 46
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__18));
#line 46
c_rt_lib0clear(&___nl__im__18);
#line 47
goto label_1;
#line 48
goto label_7;
#line 48
label_8:
;
#line 49
___nl__int__21 = ___nl__int__6 - ___nl__int__3;
#line 49
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__1, ___nl__int__3, ___nl__int__21));
#line 49
//clear ___nl__int__21;
#line 49
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__20));
#line 49
c_rt_lib0clear(&___nl__im__20);
#line 50
___nl__int__3 = ___nl__int__6 + ___nl__int__4;
#line 51
goto label_7;
#line 51
label_7:
;
#line 51
//clear ___nl__bool__15;
#line 51
//clear ___nl__int__6;
#line 41
goto label_2;
#line 41
label_1:
;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
//clear ___nl__int__3;
#line 53
//clear ___nl__int__4;
#line 53
//clear ___nl__int__5;
#line 53
//clear ___nl__int__6;
#line 53
return ___nl__im__2;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 53
//clear ___nl__int__3;
#line 53
//clear ___nl__int__4;
#line 53
//clear ___nl__int__5;
#line 53
//clear ___nl__int__6;
#line 53
return NULL;
return NULL;
}

ImmT  string0split_limit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0split_limit");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return string0split_limit(*var0, *var1, *var2);
}
ImmT  string0split_limit(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
string_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
#line 57
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__0, ___nl__im__1));
#line 58
___nl__int__5 = c_rt_lib0array_len(___nl__im__3);
#line 58
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 58
___nl__int__7 = ___nl__int__5 > ___nl__int__6;
#line 58
___nl__bool__4 = ___nl__int__7;
#line 58
//clear ___nl__int__5;
#line 58
//clear ___nl__int__6;
#line 58
//clear ___nl__int__7;
#line 58
___nl__bool__4 = !___nl__bool__4;
#line 58
if(___nl__bool__4){ goto label_2;}
#line 59
___nl__int__11 = 1;
#line 59
___nl__int__12 = getIntFromImm(___nl__im__2);
#line 59
___nl__int__10 = ___nl__int__12 - ___nl__int__11;
#line 59
//clear ___nl__int__11;
#line 59
//clear ___nl__int__12;
#line 59
___nl__int__15 = c_rt_lib0array_len(___nl__im__3);
#line 59
___nl__int__16 = getIntFromImm(___nl__im__2);
#line 59
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 59
//clear ___nl__int__15;
#line 59
//clear ___nl__int__16;
#line 59
___nl__int__17 = 1;
#line 59
___nl__int__13 = ___nl__int__14 + ___nl__int__17;
#line 59
//clear ___nl__int__14;
#line 59
//clear ___nl__int__17;
#line 59
c_rt_lib0move(&___nl__im__9, array0subarray(___nl__im__3, ___nl__int__10, ___nl__int__13));
#line 59
//clear ___nl__int__10;
#line 59
//clear ___nl__int__13;
#line 59
c_rt_lib0move(&___nl__im__8, array0join(___nl__im__0, ___nl__im__9));
#line 59
c_rt_lib0clear(&___nl__im__9);
#line 60
___nl__int__19 = 0;
#line 60
___nl__int__21 = 1;
#line 60
___nl__int__22 = getIntFromImm(___nl__im__2);
#line 60
___nl__int__20 = ___nl__int__22 - ___nl__int__21;
#line 60
//clear ___nl__int__21;
#line 60
//clear ___nl__int__22;
#line 60
c_rt_lib0move(&___nl__im__18, array0subarray(___nl__im__3, ___nl__int__19, ___nl__int__20));
#line 60
//clear ___nl__int__19;
#line 60
//clear ___nl__int__20;
#line 61
c_rt_lib0delete(array0push(&___nl__im__18, ___nl__im__8));
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
c_rt_lib0clear(&___nl__im__2);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
//clear ___nl__bool__4;
#line 62
c_rt_lib0clear(&___nl__im__8);
#line 62
return ___nl__im__18;
#line 63
goto label_1;
#line 63
label_2:
;
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
//clear ___nl__bool__4;
#line 64
c_rt_lib0clear(&___nl__im__8);
#line 64
c_rt_lib0clear(&___nl__im__18);
#line 64
return ___nl__im__3;
#line 65
goto label_1;
#line 65
label_1:
;
#line 65
//clear ___nl__bool__4;
#line 65
c_rt_lib0clear(&___nl__im__8);
#line 65
c_rt_lib0clear(&___nl__im__18);
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
return NULL;
return NULL;
}

ImmT  string0to_array0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0to_array");
ImmT  *var0 = &(_tab[0]);
return string0to_array(*var0);
}
ImmT  string0to_array(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 69
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 69
c_rt_lib0move(&___nl__im__1, string0split(___nl__im__2, ___nl__im__0));
#line 69
c_rt_lib0clear(&___nl__im__2);
#line 69
c_rt_lib0clear(&___nl__im__0);
#line 69
return ___nl__im__1;
#line 69
c_rt_lib0clear(&___nl__im__0);
#line 69
c_rt_lib0clear(&___nl__im__1);
#line 69
return NULL;
return NULL;
}

INT  string0length0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0length");
ImmT  *var0 = &(_tab[0]);
return string0length(*var0);
}
INT  string0length(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
#line 73
c_rt_lib0move(&___nl__im__1, c_std_lib0string_length(___nl__im__0));
#line 73
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
return ___nl__int__2;
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
//clear ___nl__int__2;
#line 73
return 0;
return 0;
}

ImmT  string0get_char_code0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0get_char_code");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0get_char_code(*var0, *var1);
}
ImmT  string0get_char_code(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 77
c_rt_lib0move(&___nl__im__2, c_std_lib0string_get_char_code(___nl__im__0, ___nl__im__1));
#line 77
c_rt_lib0clear(&___nl__im__0);
#line 77
c_rt_lib0clear(&___nl__im__1);
#line 77
return ___nl__im__2;
#line 77
c_rt_lib0clear(&___nl__im__0);
#line 77
c_rt_lib0clear(&___nl__im__1);
#line 77
c_rt_lib0clear(&___nl__im__2);
#line 77
return NULL;
return NULL;
}

ImmT  string0substr(ImmT  ___nl__im__0,INT  ___nl__int__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 81
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__1));
#line 81
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__2));
#line 81
c_rt_lib0move(&___nl__im__4, c_std_lib0string_sub(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 81
c_rt_lib0clear(&___nl__im__5);
#line 81
c_rt_lib0clear(&___nl__im__6);
#line 81
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 81
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__7));
#line 81
c_rt_lib0clear(&___nl__im__4);
#line 81
c_rt_lib0clear(&___nl__im__7);
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
//clear ___nl__int__1;
#line 81
//clear ___nl__int__2;
#line 81
return ___nl__im__3;
return NULL;
}

ImmT  string0substr20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0substr2");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0substr2(*var0, *var1);
}
ImmT  string0substr2(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 85
___nl__int__5 = string0length(___nl__im__0);
#line 85
___nl__int__6 = getIntFromImm(___nl__im__1);
#line 85
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 85
//clear ___nl__int__5;
#line 85
//clear ___nl__int__6;
#line 85
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__4));
#line 85
c_rt_lib0move(&___nl__im__3, c_std_lib0string_sub(___nl__im__0, ___nl__im__1, ___nl__im__7));
#line 85
//clear ___nl__int__4;
#line 85
c_rt_lib0clear(&___nl__im__7);
#line 85
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 85
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 85
c_rt_lib0clear(&___nl__im__3);
#line 85
c_rt_lib0clear(&___nl__im__8);
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
c_rt_lib0clear(&___nl__im__1);
#line 85
return ___nl__im__2;
return NULL;
}

ImmT  string0lc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0lc");
ImmT  *var0 = &(_tab[0]);
return string0lc(*var0);
}
ImmT  string0lc(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 89
c_rt_lib0move(&___nl__im__1, string0to_array(___nl__im__0));
#line 90
___nl__int__2 = c_rt_lib0array_len(___nl__im__1);
#line 90
___nl__int__3 = 0;
#line 90
___nl__int__4 = 1;
#line 90
label_3:
;
#line 90
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 90
___nl__bool__5 = ___nl__int__6;
#line 90
if(___nl__bool__5){ goto label_1;}
#line 91
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 91
___nl__int__7 = string0ord(___nl__im__8);
#line 91
c_rt_lib0clear(&___nl__im__8);
#line 92
___nl__int__11 = 65;
#line 92
___nl__int__12 = ___nl__int__7 >= ___nl__int__11;
#line 92
___nl__bool__9 = ___nl__int__12;
#line 92
//clear ___nl__int__11;
#line 92
//clear ___nl__int__12;
#line 92
___nl__bool__10 = !___nl__bool__9;
#line 92
if(___nl__bool__10){ goto label_6;}
#line 92
___nl__int__13 = 90;
#line 92
___nl__int__14 = ___nl__int__7 <= ___nl__int__13;
#line 92
___nl__bool__9 = ___nl__int__14;
#line 92
//clear ___nl__int__13;
#line 92
//clear ___nl__int__14;
#line 92
label_6:
;
#line 92
//clear ___nl__bool__10;
#line 92
___nl__bool__9 = !___nl__bool__9;
#line 92
if(___nl__bool__9){ goto label_5;}
#line 93
___nl__int__15 = 32;
#line 93
___nl__int__7 = ___nl__int__7 + ___nl__int__15;
#line 93
//clear ___nl__int__15;
#line 94
c_rt_lib0move(&___nl__im__16, string0chr(___nl__int__7));
#line 94
c_rt_lib0copy(&___nl__im__17, ___nl__im__16);
#line 94
c_rt_lib0array_set(&___nl__im__1, ___nl__int__3, ___nl__im__17);
#line 94
c_rt_lib0clear(&___nl__im__16);
#line 94
c_rt_lib0clear(&___nl__im__17);
#line 95
goto label_4;
#line 95
label_5:
;
#line 95
label_4:
;
#line 95
//clear ___nl__bool__9;
#line 95
//clear ___nl__int__7;
#line 96
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 96
goto label_3;
#line 96
label_1:
;
#line 97
c_rt_lib0move(&___nl__im__19,___get_global_const(37));
#line 97
c_rt_lib0move(&___nl__im__18, array0join(___nl__im__19, ___nl__im__1));
#line 97
c_rt_lib0clear(&___nl__im__19);
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__int__2;
#line 97
//clear ___nl__int__3;
#line 97
//clear ___nl__int__4;
#line 97
//clear ___nl__bool__5;
#line 97
//clear ___nl__int__6;
#line 97
//clear ___nl__int__7;
#line 97
return ___nl__im__18;
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__int__2;
#line 97
//clear ___nl__int__3;
#line 97
//clear ___nl__int__4;
#line 97
//clear ___nl__bool__5;
#line 97
//clear ___nl__int__6;
#line 97
//clear ___nl__int__7;
#line 97
c_rt_lib0clear(&___nl__im__18);
#line 97
return NULL;
return NULL;
}

ImmT  string0uc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0uc");
ImmT  *var0 = &(_tab[0]);
return string0uc(*var0);
}
ImmT  string0uc(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 101
c_rt_lib0move(&___nl__im__1, string0to_array(___nl__im__0));
#line 102
___nl__int__2 = c_rt_lib0array_len(___nl__im__1);
#line 102
___nl__int__3 = 0;
#line 102
___nl__int__4 = 1;
#line 102
label_3:
;
#line 102
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 102
___nl__bool__5 = ___nl__int__6;
#line 102
if(___nl__bool__5){ goto label_1;}
#line 103
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 103
___nl__int__7 = string0ord(___nl__im__8);
#line 103
c_rt_lib0clear(&___nl__im__8);
#line 104
___nl__int__11 = 97;
#line 104
___nl__int__12 = ___nl__int__7 >= ___nl__int__11;
#line 104
___nl__bool__9 = ___nl__int__12;
#line 104
//clear ___nl__int__11;
#line 104
//clear ___nl__int__12;
#line 104
___nl__bool__10 = !___nl__bool__9;
#line 104
if(___nl__bool__10){ goto label_6;}
#line 104
___nl__int__13 = 122;
#line 104
___nl__int__14 = ___nl__int__7 <= ___nl__int__13;
#line 104
___nl__bool__9 = ___nl__int__14;
#line 104
//clear ___nl__int__13;
#line 104
//clear ___nl__int__14;
#line 104
label_6:
;
#line 104
//clear ___nl__bool__10;
#line 104
___nl__bool__9 = !___nl__bool__9;
#line 104
if(___nl__bool__9){ goto label_5;}
#line 105
___nl__int__15 = 32;
#line 105
___nl__int__7 = ___nl__int__7 - ___nl__int__15;
#line 105
//clear ___nl__int__15;
#line 106
c_rt_lib0move(&___nl__im__16, string0chr(___nl__int__7));
#line 106
c_rt_lib0copy(&___nl__im__17, ___nl__im__16);
#line 106
c_rt_lib0array_set(&___nl__im__1, ___nl__int__3, ___nl__im__17);
#line 106
c_rt_lib0clear(&___nl__im__16);
#line 106
c_rt_lib0clear(&___nl__im__17);
#line 107
goto label_4;
#line 107
label_5:
;
#line 107
label_4:
;
#line 107
//clear ___nl__bool__9;
#line 107
//clear ___nl__int__7;
#line 108
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 108
goto label_3;
#line 108
label_1:
;
#line 109
c_rt_lib0move(&___nl__im__19,___get_global_const(37));
#line 109
c_rt_lib0move(&___nl__im__18, array0join(___nl__im__19, ___nl__im__1));
#line 109
c_rt_lib0clear(&___nl__im__19);
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
c_rt_lib0clear(&___nl__im__1);
#line 109
//clear ___nl__int__2;
#line 109
//clear ___nl__int__3;
#line 109
//clear ___nl__int__4;
#line 109
//clear ___nl__bool__5;
#line 109
//clear ___nl__int__6;
#line 109
//clear ___nl__int__7;
#line 109
return ___nl__im__18;
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
c_rt_lib0clear(&___nl__im__1);
#line 109
//clear ___nl__int__2;
#line 109
//clear ___nl__int__3;
#line 109
//clear ___nl__int__4;
#line 109
//clear ___nl__bool__5;
#line 109
//clear ___nl__int__6;
#line 109
//clear ___nl__int__7;
#line 109
c_rt_lib0clear(&___nl__im__18);
#line 109
return NULL;
return NULL;
}

ImmT  string0index20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0index2");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0index2(*var0, *var1);
}
ImmT  string0index2(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
#line 113
___nl__int__3 = 0;
#line 113
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__3));
#line 113
c_rt_lib0move(&___nl__im__2, c_std_lib0string_index(___nl__im__0, ___nl__im__1, ___nl__im__4));
#line 113
//clear ___nl__int__3;
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
return ___nl__im__2;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
return NULL;
return NULL;
}

ImmT  string0index0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0index");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return string0index(*var0, *var1, *var2);
}
ImmT  string0index(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
string_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 117
c_rt_lib0move(&___nl__im__3, c_std_lib0string_index(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 117
c_rt_lib0clear(&___nl__im__0);
#line 117
c_rt_lib0clear(&___nl__im__1);
#line 117
c_rt_lib0clear(&___nl__im__2);
#line 117
return ___nl__im__3;
#line 117
c_rt_lib0clear(&___nl__im__0);
#line 117
c_rt_lib0clear(&___nl__im__1);
#line 117
c_rt_lib0clear(&___nl__im__2);
#line 117
c_rt_lib0clear(&___nl__im__3);
#line 117
return NULL;
return NULL;
}

ImmT  string0contain_lc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0contain_lc");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0contain_lc(*var0, *var1);
}
ImmT  string0contain_lc(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 121
c_rt_lib0move(&___nl__im__0, string0lc(___nl__im__0));
#line 122
c_rt_lib0move(&___nl__im__3, string0index2(___nl__im__0, ___nl__im__1));
#line 122
___nl__int__4 = 0;
#line 122
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 122
___nl__int__6 = ___nl__int__5 >= ___nl__int__4;
#line 122
___nl__bool__2 = ___nl__int__6;
#line 122
c_rt_lib0clear(&___nl__im__3);
#line 122
//clear ___nl__int__4;
#line 122
//clear ___nl__int__5;
#line 122
//clear ___nl__int__6;
#line 122
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
c_rt_lib0clear(&___nl__im__1);
#line 122
//clear ___nl__bool__2;
#line 122
return ___nl__im__7;
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
c_rt_lib0clear(&___nl__im__1);
#line 122
//clear ___nl__bool__2;
#line 122
c_rt_lib0clear(&___nl__im__7);
#line 122
return NULL;
return NULL;
}

ImmT  string0replace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0replace");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return string0replace(*var0, *var1, *var2);
}
ImmT  string0replace(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
string_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 126
c_rt_lib0move(&___nl__im__3, c_std_lib0string_replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
return ___nl__im__3;
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
return NULL;
return NULL;
}

ImmT  string0replace_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0replace_arr");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
return string0replace_arr(*var0, *var1, *var2);
}
ImmT  string0replace_arr(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
string_priv0__const__init();
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
#line 130
___nl__int__3 = c_rt_lib0array_len(___nl__im__1);
#line 131
___nl__int__5 = c_rt_lib0array_len(___nl__im__2);
#line 131
___nl__int__6 = ___nl__int__3 == ___nl__int__5;
#line 131
___nl__bool__4 = ___nl__int__6;
#line 131
//clear ___nl__int__5;
#line 131
//clear ___nl__int__6;
#line 131
___nl__bool__4 = !___nl__bool__4;
#line 131
___nl__bool__4 = !___nl__bool__4;
#line 131
if(___nl__bool__4){ goto label_2;}
#line 131
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 131
nl_die_arg(___nl__im__7);
#line 131
goto label_1;
#line 131
label_2:
;
#line 131
label_1:
;
#line 131
//clear ___nl__bool__4;
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 132
___nl__int__8 = 0;
#line 132
label_4:
;
#line 132
___nl__int__10 = ___nl__int__8 < ___nl__int__3;
#line 132
___nl__bool__9 = ___nl__int__10;
#line 132
//clear ___nl__int__10;
#line 132
___nl__bool__9 = !___nl__bool__9;
#line 132
if(___nl__bool__9){ goto label_3;}
#line 133
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__8));
#line 133
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__8));
#line 133
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 133
c_rt_lib0clear(&___nl__im__11);
#line 133
c_rt_lib0clear(&___nl__im__12);
#line 132
___nl__int__13 = 1;
#line 132
___nl__int__8 = ___nl__int__8 + ___nl__int__13;
#line 132
//clear ___nl__int__13;
#line 134
goto label_4;
#line 134
label_3:
;
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
//clear ___nl__int__3;
#line 135
//clear ___nl__int__8;
#line 135
//clear ___nl__bool__9;
#line 135
return ___nl__im__0;
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
//clear ___nl__int__3;
#line 135
//clear ___nl__int__8;
#line 135
//clear ___nl__bool__9;
#line 135
return NULL;
return NULL;
}

INT  string0ord0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0ord");
ImmT  *var0 = &(_tab[0]);
return string0ord(*var0);
}
INT  string0ord(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
#line 139
c_rt_lib0move(&___nl__im__1, c_std_lib0string_ord(___nl__im__0));
#line 139
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
return ___nl__int__2;
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
//clear ___nl__int__2;
#line 139
return 0;
return 0;
}

bool  string0is_digit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_digit");
ImmT  *var0 = &(_tab[0]);
return string0is_digit(*var0);
}
bool  string0is_digit(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
INT  ___nl__int__1 = 0;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
#line 143
___nl__int__1 = string0ord(___nl__im__0);
#line 144
___nl__int__4 = 48;
#line 144
___nl__int__5 = ___nl__int__1 >= ___nl__int__4;
#line 144
___nl__bool__2 = ___nl__int__5;
#line 144
//clear ___nl__int__4;
#line 144
//clear ___nl__int__5;
#line 144
___nl__bool__3 = !___nl__bool__2;
#line 144
if(___nl__bool__3){ goto label_1;}
#line 144
___nl__int__6 = 57;
#line 144
___nl__int__7 = ___nl__int__1 <= ___nl__int__6;
#line 144
___nl__bool__2 = ___nl__int__7;
#line 144
//clear ___nl__int__6;
#line 144
//clear ___nl__int__7;
#line 144
label_1:
;
#line 144
//clear ___nl__bool__3;
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
//clear ___nl__int__1;
#line 144
return ___nl__bool__2;
return false;
}

bool  string0is_hex_digit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_hex_digit");
ImmT  *var0 = &(_tab[0]);
return string0is_hex_digit(*var0);
}
bool  string0is_hex_digit(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
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
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
#line 148
___nl__int__1 = string0ord(___nl__im__0);
#line 149
___nl__int__4 = 48;
#line 149
___nl__int__5 = ___nl__int__1 >= ___nl__int__4;
#line 149
___nl__bool__2 = ___nl__int__5;
#line 149
//clear ___nl__int__4;
#line 149
//clear ___nl__int__5;
#line 149
___nl__bool__3 = !___nl__bool__2;
#line 149
if(___nl__bool__3){ goto label_3;}
#line 149
___nl__int__6 = 57;
#line 149
___nl__int__7 = ___nl__int__1 <= ___nl__int__6;
#line 149
___nl__bool__2 = ___nl__int__7;
#line 149
//clear ___nl__int__6;
#line 149
//clear ___nl__int__7;
#line 149
label_3:
;
#line 149
//clear ___nl__bool__3;
#line 149
if(___nl__bool__2){ goto label_2;}
#line 149
___nl__int__9 = 65;
#line 149
___nl__int__10 = ___nl__int__1 >= ___nl__int__9;
#line 149
___nl__bool__2 = ___nl__int__10;
#line 149
//clear ___nl__int__9;
#line 149
//clear ___nl__int__10;
#line 149
___nl__bool__8 = !___nl__bool__2;
#line 149
if(___nl__bool__8){ goto label_4;}
#line 149
___nl__int__11 = 70;
#line 149
___nl__int__12 = ___nl__int__1 <= ___nl__int__11;
#line 149
___nl__bool__2 = ___nl__int__12;
#line 149
//clear ___nl__int__11;
#line 149
//clear ___nl__int__12;
#line 149
label_4:
;
#line 149
//clear ___nl__bool__8;
#line 149
label_2:
;
#line 149
if(___nl__bool__2){ goto label_1;}
#line 149
___nl__int__14 = 97;
#line 149
___nl__int__15 = ___nl__int__1 >= ___nl__int__14;
#line 149
___nl__bool__2 = ___nl__int__15;
#line 149
//clear ___nl__int__14;
#line 149
//clear ___nl__int__15;
#line 149
___nl__bool__13 = !___nl__bool__2;
#line 149
if(___nl__bool__13){ goto label_5;}
#line 149
___nl__int__16 = 102;
#line 149
___nl__int__17 = ___nl__int__1 <= ___nl__int__16;
#line 149
___nl__bool__2 = ___nl__int__17;
#line 149
//clear ___nl__int__16;
#line 149
//clear ___nl__int__17;
#line 149
label_5:
;
#line 149
//clear ___nl__bool__13;
#line 149
label_1:
;
#line 149
c_rt_lib0clear(&___nl__im__0);
#line 149
//clear ___nl__int__1;
#line 149
return ___nl__bool__2;
return false;
}

bool  string0is_letter0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_letter");
ImmT  *var0 = &(_tab[0]);
return string0is_letter(*var0);
}
bool  string0is_letter(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
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
#line 153
___nl__int__1 = string0ord(___nl__im__0);
#line 154
___nl__int__4 = 97;
#line 154
___nl__int__5 = ___nl__int__1 >= ___nl__int__4;
#line 154
___nl__bool__2 = ___nl__int__5;
#line 154
//clear ___nl__int__4;
#line 154
//clear ___nl__int__5;
#line 154
___nl__bool__3 = !___nl__bool__2;
#line 154
if(___nl__bool__3){ goto label_2;}
#line 154
___nl__int__6 = 122;
#line 154
___nl__int__7 = ___nl__int__1 <= ___nl__int__6;
#line 154
___nl__bool__2 = ___nl__int__7;
#line 154
//clear ___nl__int__6;
#line 154
//clear ___nl__int__7;
#line 154
label_2:
;
#line 154
//clear ___nl__bool__3;
#line 154
if(___nl__bool__2){ goto label_1;}
#line 154
___nl__int__9 = 65;
#line 154
___nl__int__10 = ___nl__int__1 >= ___nl__int__9;
#line 154
___nl__bool__2 = ___nl__int__10;
#line 154
//clear ___nl__int__9;
#line 154
//clear ___nl__int__10;
#line 154
___nl__bool__8 = !___nl__bool__2;
#line 154
if(___nl__bool__8){ goto label_3;}
#line 154
___nl__int__11 = 90;
#line 154
___nl__int__12 = ___nl__int__1 <= ___nl__int__11;
#line 154
___nl__bool__2 = ___nl__int__12;
#line 154
//clear ___nl__int__11;
#line 154
//clear ___nl__int__12;
#line 154
label_3:
;
#line 154
//clear ___nl__bool__8;
#line 154
label_1:
;
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
//clear ___nl__int__1;
#line 154
return ___nl__bool__2;
return false;
}

ImmT  string0encode_utf160ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0encode_utf16");
ImmT  *var0 = &(_tab[0]);
return string0encode_utf16(*var0);
}
ImmT  string0encode_utf16(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 158
c_rt_lib0move(&___nl__im__1, c_std_lib0string_encode_utf16(___nl__im__0));
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
return ___nl__im__1;
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
return NULL;
return NULL;
}

ImmT  string0decode_utf160ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0decode_utf16");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0decode_utf16(*var0, *var1);
}
ImmT  string0decode_utf16(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 162
c_rt_lib0move(&___nl__im__2, c_std_lib0string_decode_utf16(___nl__im__0, ___nl__im__1));
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
return ___nl__im__2;
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 162
return NULL;
return NULL;
}

ImmT  string0is_empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_empty");
ImmT  *var0 = &(_tab[0]);
return string0is_empty(*var0);
}
ImmT  string0is_empty(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
#line 166
___nl__int__2 = string0length(___nl__im__0);
#line 166
___nl__int__3 = 0;
#line 166
___nl__int__4 = ___nl__int__2 == ___nl__int__3;
#line 166
___nl__bool__1 = ___nl__int__4;
#line 166
//clear ___nl__int__2;
#line 166
//clear ___nl__int__3;
#line 166
//clear ___nl__int__4;
#line 166
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
//clear ___nl__bool__1;
#line 166
return ___nl__im__5;
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
//clear ___nl__bool__1;
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
return NULL;
return NULL;
}

ImmT  string0chr(INT  ___nl__int__0) {
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 170
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__0));
#line 170
c_rt_lib0move(&___nl__im__1, c_std_lib0string_chr(___nl__im__2));
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
//clear ___nl__int__0;
#line 170
return ___nl__im__1;
#line 170
//clear ___nl__int__0;
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
return NULL;
return NULL;
}

ImmT  string0lt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0lt");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0lt(*var0, *var1);
}
ImmT  string0lt(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 174
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 174
___nl__int__4 = 0;
#line 174
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 174
___nl__int__6 = ___nl__int__5 < ___nl__int__4;
#line 174
___nl__bool__2 = ___nl__int__6;
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
//clear ___nl__int__4;
#line 174
//clear ___nl__int__5;
#line 174
//clear ___nl__int__6;
#line 174
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
//clear ___nl__bool__2;
#line 174
return ___nl__im__7;
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
//clear ___nl__bool__2;
#line 174
c_rt_lib0clear(&___nl__im__7);
#line 174
return NULL;
return NULL;
}

ImmT  string0gt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0gt");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0gt(*var0, *var1);
}
ImmT  string0gt(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 178
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 178
___nl__int__4 = 0;
#line 178
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 178
___nl__int__6 = ___nl__int__5 > ___nl__int__4;
#line 178
___nl__bool__2 = ___nl__int__6;
#line 178
c_rt_lib0clear(&___nl__im__3);
#line 178
//clear ___nl__int__4;
#line 178
//clear ___nl__int__5;
#line 178
//clear ___nl__int__6;
#line 178
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
c_rt_lib0clear(&___nl__im__1);
#line 178
//clear ___nl__bool__2;
#line 178
return ___nl__im__7;
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
c_rt_lib0clear(&___nl__im__1);
#line 178
//clear ___nl__bool__2;
#line 178
c_rt_lib0clear(&___nl__im__7);
#line 178
return NULL;
return NULL;
}

ImmT  string0compare0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0compare");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0compare(*var0, *var1);
}
ImmT  string0compare(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
#line 182
___nl__int__2 = c_std_lib0string_compare(___nl__im__0, ___nl__im__1);
#line 182
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__int__2;
#line 182
return ___nl__im__3;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__int__2;
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
return NULL;
return NULL;
}

ImmT  string0le0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0le");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0le(*var0, *var1);
}
ImmT  string0le(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 186
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 186
___nl__int__4 = 0;
#line 186
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 186
___nl__int__6 = ___nl__int__5 <= ___nl__int__4;
#line 186
___nl__bool__2 = ___nl__int__6;
#line 186
c_rt_lib0clear(&___nl__im__3);
#line 186
//clear ___nl__int__4;
#line 186
//clear ___nl__int__5;
#line 186
//clear ___nl__int__6;
#line 186
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 186
c_rt_lib0clear(&___nl__im__0);
#line 186
c_rt_lib0clear(&___nl__im__1);
#line 186
//clear ___nl__bool__2;
#line 186
return ___nl__im__7;
#line 186
c_rt_lib0clear(&___nl__im__0);
#line 186
c_rt_lib0clear(&___nl__im__1);
#line 186
//clear ___nl__bool__2;
#line 186
c_rt_lib0clear(&___nl__im__7);
#line 186
return NULL;
return NULL;
}

ImmT  string0ge0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0ge");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return string0ge(*var0, *var1);
}
ImmT  string0ge(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 190
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 190
___nl__int__4 = 0;
#line 190
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 190
___nl__int__6 = ___nl__int__5 >= ___nl__int__4;
#line 190
___nl__bool__2 = ___nl__int__6;
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
//clear ___nl__int__4;
#line 190
//clear ___nl__int__5;
#line 190
//clear ___nl__int__6;
#line 190
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__bool__2;
#line 190
return ___nl__im__7;
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__bool__2;
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
return NULL;
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void string_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT string_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
