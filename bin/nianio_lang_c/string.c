
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "string.h"
#include "c_std_lib.h"
#include "array.h"
#include "boolean_t.h"
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
#line 12
___nl__int__1 = 10;
#line 12
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 12
//clear ___nl__int__1;
#line 12
//clear ___nl__int__1;
#line 12
return ___nl__im__0;
#line 12
c_rt_lib0clear(&___nl__im__0);
#line 12
//clear ___nl__int__1;
#line 12
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
#line 16
___nl__int__1 = 9;
#line 16
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 16
//clear ___nl__int__1;
#line 16
//clear ___nl__int__1;
#line 16
return ___nl__im__0;
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
//clear ___nl__int__1;
#line 16
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
#line 20
___nl__int__1 = 13;
#line 20
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 20
//clear ___nl__int__1;
#line 20
//clear ___nl__int__1;
#line 20
return ___nl__im__0;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
//clear ___nl__int__1;
#line 20
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
#line 24
___nl__int__1 = 12;
#line 24
c_rt_lib0move(&___nl__im__0, string0chr(___nl__int__1));
#line 24
//clear ___nl__int__1;
#line 24
//clear ___nl__int__1;
#line 24
return ___nl__im__0;
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
//clear ___nl__int__1;
#line 24
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
#line 28
___nl__int__2 = 194;
#line 28
c_rt_lib0move(&___nl__im__1, string0chr(___nl__int__2));
#line 28
//clear ___nl__int__2;
#line 28
___nl__int__4 = 160;
#line 28
c_rt_lib0move(&___nl__im__3, string0chr(___nl__int__4));
#line 28
//clear ___nl__int__4;
#line 28
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(2, ___nl__im__1, ___nl__im__3));
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
//clear ___nl__int__2;
#line 28
c_rt_lib0clear(&___nl__im__3);
#line 28
//clear ___nl__int__4;
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
//clear ___nl__int__2;
#line 28
c_rt_lib0clear(&___nl__im__3);
#line 28
//clear ___nl__int__4;
#line 28
return ___nl__im__0;
#line 28
c_rt_lib0clear(&___nl__im__0);
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
//clear ___nl__int__2;
#line 28
c_rt_lib0clear(&___nl__im__3);
#line 28
//clear ___nl__int__4;
#line 28
return NULL;
}

ImmT  string0char_times0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0char_times");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0char_times(var0, var1);
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
#line 32
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 33
___nl__int__3 = 0;
#line 33
___nl__int__4 = 1;
#line 33
label_3:
#line 33
___nl__int__6 = getIntFromImm(___nl__im__1);
#line 33
___nl__int__7 = ___nl__int__3 >= ___nl__int__6;
#line 33
___nl__bool__5 = ___nl__int__7;
#line 33
if(___nl__bool__5){ goto label_1;}
#line 33
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 33
label_2:
#line 33
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 33
goto label_3;
#line 33
label_1:
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__1);
#line 34
//clear ___nl__int__3;
#line 34
//clear ___nl__int__4;
#line 34
//clear ___nl__bool__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
return ___nl__im__2;
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
c_rt_lib0clear(&___nl__im__1);
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 34
//clear ___nl__int__3;
#line 34
//clear ___nl__int__4;
#line 34
//clear ___nl__bool__5;
#line 34
//clear ___nl__int__6;
#line 34
//clear ___nl__int__7;
#line 34
return NULL;
}

ImmT  string0split0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0split");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0split(var0, var1);
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
#line 38
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 39
___nl__int__3 = 0;
#line 40
___nl__int__4 = string0length(___nl__im__0);
#line 41
___nl__int__5 = string0length(___nl__im__1);
#line 42
label_2:
#line 43
___nl__int__7 = 1;
#line 43
___nl__int__6 = ___nl__int__3 + ___nl__int__7;
#line 43
//clear ___nl__int__7;
#line 44
___nl__int__9 = 0;
#line 44
___nl__int__10 = ___nl__int__4 == ___nl__int__9;
#line 44
___nl__bool__8 = ___nl__int__10;
#line 44
//clear ___nl__int__9;
#line 44
//clear ___nl__int__10;
#line 44
//clear ___nl__int__9;
#line 44
//clear ___nl__int__10;
#line 44
___nl__bool__8 = !___nl__bool__8;
#line 44
//clear ___nl__int__9;
#line 44
//clear ___nl__int__10;
#line 44
___nl__bool__8 = !___nl__bool__8;
#line 44
if(___nl__bool__8){ goto label_4;}
#line 44
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__3));
#line 44
c_rt_lib0move(&___nl__im__12, string0index(___nl__im__1, ___nl__im__0, ___nl__im__11));
#line 44
___nl__int__6 = getIntFromImm(___nl__im__12);
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
c_rt_lib0clear(&___nl__im__12);
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
c_rt_lib0clear(&___nl__im__12);
#line 44
goto label_3;
#line 44
label_4:
#line 44
label_3:
#line 44
//clear ___nl__bool__8;
#line 44
//clear ___nl__int__9;
#line 44
//clear ___nl__int__10;
#line 44
c_rt_lib0clear(&___nl__im__11);
#line 44
c_rt_lib0clear(&___nl__im__12);
#line 45
___nl__int__14 = ___nl__int__6 > ___nl__int__5;
#line 45
___nl__bool__13 = ___nl__int__14;
#line 45
//clear ___nl__int__14;
#line 45
___nl__bool__13 = !___nl__bool__13;
#line 45
if(___nl__bool__13){ goto label_6;}
#line 45
goto label_1;
#line 45
goto label_5;
#line 45
label_6:
#line 45
label_5:
#line 45
//clear ___nl__bool__13;
#line 45
//clear ___nl__int__14;
#line 46
___nl__int__16 = 0;
#line 46
___nl__int__17 = ___nl__int__6 < ___nl__int__16;
#line 46
___nl__bool__15 = ___nl__int__17;
#line 46
//clear ___nl__int__16;
#line 46
//clear ___nl__int__17;
#line 46
___nl__bool__15 = !___nl__bool__15;
#line 46
if(___nl__bool__15){ goto label_8;}
#line 47
___nl__int__19 = ___nl__int__5 - ___nl__int__3;
#line 47
c_rt_lib0move(&___nl__im__18, string0substr(___nl__im__1, ___nl__int__3, ___nl__int__19));
#line 47
//clear ___nl__int__19;
#line 47
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__18));
#line 47
c_rt_lib0clear(&___nl__im__18);
#line 47
//clear ___nl__int__19;
#line 48
goto label_1;
#line 49
goto label_7;
#line 49
label_8:
#line 50
___nl__int__21 = ___nl__int__6 - ___nl__int__3;
#line 50
c_rt_lib0move(&___nl__im__20, string0substr(___nl__im__1, ___nl__int__3, ___nl__int__21));
#line 50
//clear ___nl__int__21;
#line 50
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__20));
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 50
//clear ___nl__int__21;
#line 51
___nl__int__3 = ___nl__int__6 + ___nl__int__4;
#line 52
goto label_7;
#line 52
label_7:
#line 52
//clear ___nl__bool__15;
#line 52
//clear ___nl__int__16;
#line 52
//clear ___nl__int__17;
#line 52
c_rt_lib0clear(&___nl__im__18);
#line 52
//clear ___nl__int__19;
#line 52
c_rt_lib0clear(&___nl__im__20);
#line 52
//clear ___nl__int__21;
#line 42
goto label_2;
#line 42
label_1:
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
//clear ___nl__int__3;
#line 54
//clear ___nl__int__4;
#line 54
//clear ___nl__int__5;
#line 54
//clear ___nl__int__6;
#line 54
//clear ___nl__int__7;
#line 54
//clear ___nl__bool__8;
#line 54
//clear ___nl__int__9;
#line 54
//clear ___nl__int__10;
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
//clear ___nl__bool__13;
#line 54
//clear ___nl__int__14;
#line 54
//clear ___nl__bool__15;
#line 54
//clear ___nl__int__16;
#line 54
//clear ___nl__int__17;
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
//clear ___nl__int__19;
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
//clear ___nl__int__21;
#line 54
return ___nl__im__2;
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
c_rt_lib0clear(&___nl__im__1);
#line 54
c_rt_lib0clear(&___nl__im__2);
#line 54
//clear ___nl__int__3;
#line 54
//clear ___nl__int__4;
#line 54
//clear ___nl__int__5;
#line 54
//clear ___nl__int__6;
#line 54
//clear ___nl__int__7;
#line 54
//clear ___nl__bool__8;
#line 54
//clear ___nl__int__9;
#line 54
//clear ___nl__int__10;
#line 54
c_rt_lib0clear(&___nl__im__11);
#line 54
c_rt_lib0clear(&___nl__im__12);
#line 54
//clear ___nl__bool__13;
#line 54
//clear ___nl__int__14;
#line 54
//clear ___nl__bool__15;
#line 54
//clear ___nl__int__16;
#line 54
//clear ___nl__int__17;
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 54
//clear ___nl__int__19;
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
//clear ___nl__int__21;
#line 54
return NULL;
}

ImmT  string0split_limit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0split_limit");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return string0split_limit(var0, var1, var2);
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
#line 58
c_rt_lib0move(&___nl__im__3, string0split(___nl__im__0, ___nl__im__1));
#line 59
___nl__int__5 = c_rt_lib0array_len(___nl__im__3);
#line 59
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 59
___nl__int__7 = ___nl__int__5 > ___nl__int__6;
#line 59
___nl__bool__4 = ___nl__int__7;
#line 59
//clear ___nl__int__5;
#line 59
//clear ___nl__int__6;
#line 59
//clear ___nl__int__7;
#line 59
___nl__bool__4 = !___nl__bool__4;
#line 59
if(___nl__bool__4){ goto label_2;}
#line 60
___nl__int__11 = 1;
#line 60
___nl__int__12 = getIntFromImm(___nl__im__2);
#line 60
___nl__int__10 = ___nl__int__12 - ___nl__int__11;
#line 60
//clear ___nl__int__11;
#line 60
//clear ___nl__int__12;
#line 60
___nl__int__15 = c_rt_lib0array_len(___nl__im__3);
#line 60
___nl__int__16 = getIntFromImm(___nl__im__2);
#line 60
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 60
//clear ___nl__int__15;
#line 60
//clear ___nl__int__16;
#line 60
___nl__int__17 = 1;
#line 60
___nl__int__13 = ___nl__int__14 + ___nl__int__17;
#line 60
//clear ___nl__int__14;
#line 60
//clear ___nl__int__15;
#line 60
//clear ___nl__int__16;
#line 60
//clear ___nl__int__17;
#line 60
c_rt_lib0move(&___nl__im__9, array0subarray(___nl__im__3, ___nl__int__10, ___nl__int__13));
#line 60
//clear ___nl__int__10;
#line 60
//clear ___nl__int__11;
#line 60
//clear ___nl__int__12;
#line 60
//clear ___nl__int__13;
#line 60
//clear ___nl__int__14;
#line 60
//clear ___nl__int__15;
#line 60
//clear ___nl__int__16;
#line 60
//clear ___nl__int__17;
#line 60
c_rt_lib0move(&___nl__im__8, array0join(___nl__im__0, ___nl__im__9));
#line 60
c_rt_lib0clear(&___nl__im__9);
#line 60
//clear ___nl__int__10;
#line 60
//clear ___nl__int__11;
#line 60
//clear ___nl__int__12;
#line 60
//clear ___nl__int__13;
#line 60
//clear ___nl__int__14;
#line 60
//clear ___nl__int__15;
#line 60
//clear ___nl__int__16;
#line 60
//clear ___nl__int__17;
#line 61
___nl__int__19 = 0;
#line 61
___nl__int__21 = 1;
#line 61
___nl__int__22 = getIntFromImm(___nl__im__2);
#line 61
___nl__int__20 = ___nl__int__22 - ___nl__int__21;
#line 61
//clear ___nl__int__21;
#line 61
//clear ___nl__int__22;
#line 61
c_rt_lib0move(&___nl__im__18, array0subarray(___nl__im__3, ___nl__int__19, ___nl__int__20));
#line 61
//clear ___nl__int__19;
#line 61
//clear ___nl__int__20;
#line 61
//clear ___nl__int__21;
#line 61
//clear ___nl__int__22;
#line 62
c_rt_lib0delete(array0push(&___nl__im__18, ___nl__im__8));
#line 63
c_rt_lib0clear(&___nl__im__0);
#line 63
c_rt_lib0clear(&___nl__im__1);
#line 63
c_rt_lib0clear(&___nl__im__2);
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
//clear ___nl__bool__4;
#line 63
//clear ___nl__int__5;
#line 63
//clear ___nl__int__6;
#line 63
//clear ___nl__int__7;
#line 63
c_rt_lib0clear(&___nl__im__8);
#line 63
c_rt_lib0clear(&___nl__im__9);
#line 63
//clear ___nl__int__10;
#line 63
//clear ___nl__int__11;
#line 63
//clear ___nl__int__12;
#line 63
//clear ___nl__int__13;
#line 63
//clear ___nl__int__14;
#line 63
//clear ___nl__int__15;
#line 63
//clear ___nl__int__16;
#line 63
//clear ___nl__int__17;
#line 63
//clear ___nl__int__19;
#line 63
//clear ___nl__int__20;
#line 63
//clear ___nl__int__21;
#line 63
//clear ___nl__int__22;
#line 63
return ___nl__im__18;
#line 64
goto label_1;
#line 64
label_2:
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
//clear ___nl__bool__4;
#line 65
//clear ___nl__int__5;
#line 65
//clear ___nl__int__6;
#line 65
//clear ___nl__int__7;
#line 65
c_rt_lib0clear(&___nl__im__8);
#line 65
c_rt_lib0clear(&___nl__im__9);
#line 65
//clear ___nl__int__10;
#line 65
//clear ___nl__int__11;
#line 65
//clear ___nl__int__12;
#line 65
//clear ___nl__int__13;
#line 65
//clear ___nl__int__14;
#line 65
//clear ___nl__int__15;
#line 65
//clear ___nl__int__16;
#line 65
//clear ___nl__int__17;
#line 65
c_rt_lib0clear(&___nl__im__18);
#line 65
//clear ___nl__int__19;
#line 65
//clear ___nl__int__20;
#line 65
//clear ___nl__int__21;
#line 65
//clear ___nl__int__22;
#line 65
return ___nl__im__3;
#line 66
goto label_1;
#line 66
label_1:
#line 66
//clear ___nl__bool__4;
#line 66
//clear ___nl__int__5;
#line 66
//clear ___nl__int__6;
#line 66
//clear ___nl__int__7;
#line 66
c_rt_lib0clear(&___nl__im__8);
#line 66
c_rt_lib0clear(&___nl__im__9);
#line 66
//clear ___nl__int__10;
#line 66
//clear ___nl__int__11;
#line 66
//clear ___nl__int__12;
#line 66
//clear ___nl__int__13;
#line 66
//clear ___nl__int__14;
#line 66
//clear ___nl__int__15;
#line 66
//clear ___nl__int__16;
#line 66
//clear ___nl__int__17;
#line 66
c_rt_lib0clear(&___nl__im__18);
#line 66
//clear ___nl__int__19;
#line 66
//clear ___nl__int__20;
#line 66
//clear ___nl__int__21;
#line 66
//clear ___nl__int__22;
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
c_rt_lib0clear(&___nl__im__2);
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
//clear ___nl__bool__4;
#line 66
//clear ___nl__int__5;
#line 66
//clear ___nl__int__6;
#line 66
//clear ___nl__int__7;
#line 66
c_rt_lib0clear(&___nl__im__8);
#line 66
c_rt_lib0clear(&___nl__im__9);
#line 66
//clear ___nl__int__10;
#line 66
//clear ___nl__int__11;
#line 66
//clear ___nl__int__12;
#line 66
//clear ___nl__int__13;
#line 66
//clear ___nl__int__14;
#line 66
//clear ___nl__int__15;
#line 66
//clear ___nl__int__16;
#line 66
//clear ___nl__int__17;
#line 66
c_rt_lib0clear(&___nl__im__18);
#line 66
//clear ___nl__int__19;
#line 66
//clear ___nl__int__20;
#line 66
//clear ___nl__int__21;
#line 66
//clear ___nl__int__22;
#line 66
return NULL;
}

ImmT  string0to_array0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0to_array");
ImmT  var0 = (_tab[0]);
return string0to_array(var0);
}
ImmT  string0to_array(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 70
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 70
c_rt_lib0move(&___nl__im__1, string0split(___nl__im__2, ___nl__im__0));
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
return ___nl__im__1;
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 70
return NULL;
}

INT  string0length0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0length");
ImmT  var0 = (_tab[0]);
return string0length(var0);
}
INT  string0length(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
#line 74
c_rt_lib0move(&___nl__im__1, c_std_lib0string_length(___nl__im__0));
#line 74
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
return ___nl__int__2;
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
//clear ___nl__int__2;
#line 74
return 0;
}

ImmT  string0get_char_code0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0get_char_code");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0get_char_code(var0, var1);
}
ImmT  string0get_char_code(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 78
c_rt_lib0move(&___nl__im__2, c_std_lib0string_get_char_code(___nl__im__0, ___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
return ___nl__im__2;
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
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
#line 82
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__1));
#line 82
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__2));
#line 82
c_rt_lib0move(&___nl__im__4, c_std_lib0string_sub(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 82
c_rt_lib0clear(&___nl__im__5);
#line 82
c_rt_lib0clear(&___nl__im__6);
#line 82
c_rt_lib0move(&___nl__im__7,___get_global_const(37));
#line 82
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__7));
#line 82
c_rt_lib0clear(&___nl__im__4);
#line 82
c_rt_lib0clear(&___nl__im__5);
#line 82
c_rt_lib0clear(&___nl__im__6);
#line 82
c_rt_lib0clear(&___nl__im__7);
#line 82
c_rt_lib0clear(&___nl__im__0);
#line 82
//clear ___nl__int__1;
#line 82
//clear ___nl__int__2;
#line 82
c_rt_lib0clear(&___nl__im__4);
#line 82
c_rt_lib0clear(&___nl__im__5);
#line 82
c_rt_lib0clear(&___nl__im__6);
#line 82
c_rt_lib0clear(&___nl__im__7);
#line 82
return ___nl__im__3;
#line 82
c_rt_lib0clear(&___nl__im__0);
#line 82
//clear ___nl__int__1;
#line 82
//clear ___nl__int__2;
#line 82
c_rt_lib0clear(&___nl__im__3);
#line 82
c_rt_lib0clear(&___nl__im__4);
#line 82
c_rt_lib0clear(&___nl__im__5);
#line 82
c_rt_lib0clear(&___nl__im__6);
#line 82
c_rt_lib0clear(&___nl__im__7);
#line 82
return NULL;
}

ImmT  string0substr20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0substr2");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0substr2(var0, var1);
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
#line 86
___nl__int__5 = string0length(___nl__im__0);
#line 86
___nl__int__6 = getIntFromImm(___nl__im__1);
#line 86
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 86
//clear ___nl__int__5;
#line 86
//clear ___nl__int__6;
#line 86
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__4));
#line 86
c_rt_lib0move(&___nl__im__3, c_std_lib0string_sub(___nl__im__0, ___nl__im__1, ___nl__im__7));
#line 86
//clear ___nl__int__4;
#line 86
//clear ___nl__int__5;
#line 86
//clear ___nl__int__6;
#line 86
c_rt_lib0clear(&___nl__im__7);
#line 86
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 86
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 86
c_rt_lib0clear(&___nl__im__3);
#line 86
//clear ___nl__int__4;
#line 86
//clear ___nl__int__5;
#line 86
//clear ___nl__int__6;
#line 86
c_rt_lib0clear(&___nl__im__7);
#line 86
c_rt_lib0clear(&___nl__im__8);
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
c_rt_lib0clear(&___nl__im__3);
#line 86
//clear ___nl__int__4;
#line 86
//clear ___nl__int__5;
#line 86
//clear ___nl__int__6;
#line 86
c_rt_lib0clear(&___nl__im__7);
#line 86
c_rt_lib0clear(&___nl__im__8);
#line 86
return ___nl__im__2;
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 86
c_rt_lib0clear(&___nl__im__3);
#line 86
//clear ___nl__int__4;
#line 86
//clear ___nl__int__5;
#line 86
//clear ___nl__int__6;
#line 86
c_rt_lib0clear(&___nl__im__7);
#line 86
c_rt_lib0clear(&___nl__im__8);
#line 86
return NULL;
}

ImmT  string0lc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0lc");
ImmT  var0 = (_tab[0]);
return string0lc(var0);
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
#line 90
c_rt_lib0move(&___nl__im__1, string0to_array(___nl__im__0));
#line 91
___nl__int__2 = c_rt_lib0array_len(___nl__im__1);
#line 91
___nl__int__3 = 0;
#line 91
___nl__int__4 = 1;
#line 91
label_3:
#line 91
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 91
___nl__bool__5 = ___nl__int__6;
#line 91
if(___nl__bool__5){ goto label_1;}
#line 92
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 92
___nl__int__7 = string0ord(___nl__im__8);
#line 92
c_rt_lib0clear(&___nl__im__8);
#line 93
___nl__int__11 = 65;
#line 93
___nl__int__12 = ___nl__int__7 >= ___nl__int__11;
#line 93
___nl__bool__9 = ___nl__int__12;
#line 93
//clear ___nl__int__11;
#line 93
//clear ___nl__int__12;
#line 93
___nl__bool__10 = !___nl__bool__9;
#line 93
if(___nl__bool__10){ goto label_6;}
#line 93
___nl__int__13 = 90;
#line 93
___nl__int__14 = ___nl__int__7 <= ___nl__int__13;
#line 93
___nl__bool__9 = ___nl__int__14;
#line 93
//clear ___nl__int__13;
#line 93
//clear ___nl__int__14;
#line 93
label_6:
#line 93
//clear ___nl__bool__10;
#line 93
//clear ___nl__int__11;
#line 93
//clear ___nl__int__12;
#line 93
//clear ___nl__int__13;
#line 93
//clear ___nl__int__14;
#line 93
___nl__bool__9 = !___nl__bool__9;
#line 93
if(___nl__bool__9){ goto label_5;}
#line 94
___nl__int__15 = 32;
#line 94
___nl__int__7 = ___nl__int__7 + ___nl__int__15;
#line 94
//clear ___nl__int__15;
#line 95
c_rt_lib0move(&___nl__im__17, string0chr(___nl__int__7));
#line 95
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 95
c_rt_lib0array_set(&___nl__im__1, ___nl__int__3, ___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0clear(&___nl__im__17);
#line 96
goto label_4;
#line 96
label_5:
#line 96
label_4:
#line 96
//clear ___nl__bool__9;
#line 96
//clear ___nl__bool__10;
#line 96
//clear ___nl__int__11;
#line 96
//clear ___nl__int__12;
#line 96
//clear ___nl__int__13;
#line 96
//clear ___nl__int__14;
#line 96
//clear ___nl__int__15;
#line 96
c_rt_lib0clear(&___nl__im__16);
#line 96
c_rt_lib0clear(&___nl__im__17);
#line 96
label_2:
#line 97
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 97
goto label_3;
#line 97
label_1:
#line 98
c_rt_lib0move(&___nl__im__19,___get_global_const(37));
#line 98
c_rt_lib0move(&___nl__im__18, array0join(___nl__im__19, ___nl__im__1));
#line 98
c_rt_lib0clear(&___nl__im__19);
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
c_rt_lib0clear(&___nl__im__1);
#line 98
//clear ___nl__int__2;
#line 98
//clear ___nl__int__3;
#line 98
//clear ___nl__int__4;
#line 98
//clear ___nl__bool__5;
#line 98
//clear ___nl__int__6;
#line 98
//clear ___nl__int__7;
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 98
//clear ___nl__bool__9;
#line 98
//clear ___nl__bool__10;
#line 98
//clear ___nl__int__11;
#line 98
//clear ___nl__int__12;
#line 98
//clear ___nl__int__13;
#line 98
//clear ___nl__int__14;
#line 98
//clear ___nl__int__15;
#line 98
c_rt_lib0clear(&___nl__im__16);
#line 98
c_rt_lib0clear(&___nl__im__17);
#line 98
c_rt_lib0clear(&___nl__im__19);
#line 98
return ___nl__im__18;
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
c_rt_lib0clear(&___nl__im__1);
#line 98
//clear ___nl__int__2;
#line 98
//clear ___nl__int__3;
#line 98
//clear ___nl__int__4;
#line 98
//clear ___nl__bool__5;
#line 98
//clear ___nl__int__6;
#line 98
//clear ___nl__int__7;
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 98
//clear ___nl__bool__9;
#line 98
//clear ___nl__bool__10;
#line 98
//clear ___nl__int__11;
#line 98
//clear ___nl__int__12;
#line 98
//clear ___nl__int__13;
#line 98
//clear ___nl__int__14;
#line 98
//clear ___nl__int__15;
#line 98
c_rt_lib0clear(&___nl__im__16);
#line 98
c_rt_lib0clear(&___nl__im__17);
#line 98
c_rt_lib0clear(&___nl__im__18);
#line 98
c_rt_lib0clear(&___nl__im__19);
#line 98
return NULL;
}

ImmT  string0uc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0uc");
ImmT  var0 = (_tab[0]);
return string0uc(var0);
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
#line 102
c_rt_lib0move(&___nl__im__1, string0to_array(___nl__im__0));
#line 103
___nl__int__2 = c_rt_lib0array_len(___nl__im__1);
#line 103
___nl__int__3 = 0;
#line 103
___nl__int__4 = 1;
#line 103
label_3:
#line 103
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 103
___nl__bool__5 = ___nl__int__6;
#line 103
if(___nl__bool__5){ goto label_1;}
#line 104
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 104
___nl__int__7 = string0ord(___nl__im__8);
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 105
___nl__int__11 = 97;
#line 105
___nl__int__12 = ___nl__int__7 >= ___nl__int__11;
#line 105
___nl__bool__9 = ___nl__int__12;
#line 105
//clear ___nl__int__11;
#line 105
//clear ___nl__int__12;
#line 105
___nl__bool__10 = !___nl__bool__9;
#line 105
if(___nl__bool__10){ goto label_6;}
#line 105
___nl__int__13 = 122;
#line 105
___nl__int__14 = ___nl__int__7 <= ___nl__int__13;
#line 105
___nl__bool__9 = ___nl__int__14;
#line 105
//clear ___nl__int__13;
#line 105
//clear ___nl__int__14;
#line 105
label_6:
#line 105
//clear ___nl__bool__10;
#line 105
//clear ___nl__int__11;
#line 105
//clear ___nl__int__12;
#line 105
//clear ___nl__int__13;
#line 105
//clear ___nl__int__14;
#line 105
___nl__bool__9 = !___nl__bool__9;
#line 105
if(___nl__bool__9){ goto label_5;}
#line 106
___nl__int__15 = 32;
#line 106
___nl__int__7 = ___nl__int__7 - ___nl__int__15;
#line 106
//clear ___nl__int__15;
#line 107
c_rt_lib0move(&___nl__im__17, string0chr(___nl__int__7));
#line 107
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 107
c_rt_lib0array_set(&___nl__im__1, ___nl__int__3, ___nl__im__16);
#line 107
c_rt_lib0clear(&___nl__im__16);
#line 107
c_rt_lib0clear(&___nl__im__17);
#line 108
goto label_4;
#line 108
label_5:
#line 108
label_4:
#line 108
//clear ___nl__bool__9;
#line 108
//clear ___nl__bool__10;
#line 108
//clear ___nl__int__11;
#line 108
//clear ___nl__int__12;
#line 108
//clear ___nl__int__13;
#line 108
//clear ___nl__int__14;
#line 108
//clear ___nl__int__15;
#line 108
c_rt_lib0clear(&___nl__im__16);
#line 108
c_rt_lib0clear(&___nl__im__17);
#line 108
label_2:
#line 109
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 109
goto label_3;
#line 109
label_1:
#line 110
c_rt_lib0move(&___nl__im__19,___get_global_const(37));
#line 110
c_rt_lib0move(&___nl__im__18, array0join(___nl__im__19, ___nl__im__1));
#line 110
c_rt_lib0clear(&___nl__im__19);
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
c_rt_lib0clear(&___nl__im__1);
#line 110
//clear ___nl__int__2;
#line 110
//clear ___nl__int__3;
#line 110
//clear ___nl__int__4;
#line 110
//clear ___nl__bool__5;
#line 110
//clear ___nl__int__6;
#line 110
//clear ___nl__int__7;
#line 110
c_rt_lib0clear(&___nl__im__8);
#line 110
//clear ___nl__bool__9;
#line 110
//clear ___nl__bool__10;
#line 110
//clear ___nl__int__11;
#line 110
//clear ___nl__int__12;
#line 110
//clear ___nl__int__13;
#line 110
//clear ___nl__int__14;
#line 110
//clear ___nl__int__15;
#line 110
c_rt_lib0clear(&___nl__im__16);
#line 110
c_rt_lib0clear(&___nl__im__17);
#line 110
c_rt_lib0clear(&___nl__im__19);
#line 110
return ___nl__im__18;
#line 110
c_rt_lib0clear(&___nl__im__0);
#line 110
c_rt_lib0clear(&___nl__im__1);
#line 110
//clear ___nl__int__2;
#line 110
//clear ___nl__int__3;
#line 110
//clear ___nl__int__4;
#line 110
//clear ___nl__bool__5;
#line 110
//clear ___nl__int__6;
#line 110
//clear ___nl__int__7;
#line 110
c_rt_lib0clear(&___nl__im__8);
#line 110
//clear ___nl__bool__9;
#line 110
//clear ___nl__bool__10;
#line 110
//clear ___nl__int__11;
#line 110
//clear ___nl__int__12;
#line 110
//clear ___nl__int__13;
#line 110
//clear ___nl__int__14;
#line 110
//clear ___nl__int__15;
#line 110
c_rt_lib0clear(&___nl__im__16);
#line 110
c_rt_lib0clear(&___nl__im__17);
#line 110
c_rt_lib0clear(&___nl__im__18);
#line 110
c_rt_lib0clear(&___nl__im__19);
#line 110
return NULL;
}

ImmT  string0index20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0index2");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0index2(var0, var1);
}
ImmT  string0index2(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
#line 114
___nl__int__3 = 0;
#line 114
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__3));
#line 114
c_rt_lib0move(&___nl__im__2, c_std_lib0string_index(___nl__im__0, ___nl__im__1, ___nl__im__4));
#line 114
//clear ___nl__int__3;
#line 114
c_rt_lib0clear(&___nl__im__4);
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__1);
#line 114
//clear ___nl__int__3;
#line 114
c_rt_lib0clear(&___nl__im__4);
#line 114
return ___nl__im__2;
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__1);
#line 114
c_rt_lib0clear(&___nl__im__2);
#line 114
//clear ___nl__int__3;
#line 114
c_rt_lib0clear(&___nl__im__4);
#line 114
return NULL;
}

ImmT  string0index0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0index");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return string0index(var0, var1, var2);
}
ImmT  string0index(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
string_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 118
c_rt_lib0move(&___nl__im__3, c_std_lib0string_index(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
c_rt_lib0clear(&___nl__im__1);
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
return ___nl__im__3;
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
c_rt_lib0clear(&___nl__im__1);
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__3);
#line 118
return NULL;
}

ImmT  string0contain_lc0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0contain_lc");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0contain_lc(var0, var1);
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
#line 122
c_rt_lib0move(&___nl__im__0, string0lc(___nl__im__0));
#line 123
c_rt_lib0move(&___nl__im__3, string0index2(___nl__im__0, ___nl__im__1));
#line 123
___nl__int__4 = 0;
#line 123
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 123
___nl__int__6 = ___nl__int__5 >= ___nl__int__4;
#line 123
___nl__bool__2 = ___nl__int__6;
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
//clear ___nl__int__4;
#line 123
//clear ___nl__int__5;
#line 123
//clear ___nl__int__6;
#line 123
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
c_rt_lib0clear(&___nl__im__1);
#line 123
//clear ___nl__bool__2;
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
//clear ___nl__int__4;
#line 123
//clear ___nl__int__5;
#line 123
//clear ___nl__int__6;
#line 123
return ___nl__im__7;
#line 123
c_rt_lib0clear(&___nl__im__0);
#line 123
c_rt_lib0clear(&___nl__im__1);
#line 123
//clear ___nl__bool__2;
#line 123
c_rt_lib0clear(&___nl__im__3);
#line 123
//clear ___nl__int__4;
#line 123
//clear ___nl__int__5;
#line 123
//clear ___nl__int__6;
#line 123
c_rt_lib0clear(&___nl__im__7);
#line 123
return NULL;
}

ImmT  string0replace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0replace");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return string0replace(var0, var1, var2);
}
ImmT  string0replace(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
string_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 127
c_rt_lib0move(&___nl__im__3, c_std_lib0string_replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 127
c_rt_lib0clear(&___nl__im__0);
#line 127
c_rt_lib0clear(&___nl__im__1);
#line 127
c_rt_lib0clear(&___nl__im__2);
#line 127
return ___nl__im__3;
#line 127
c_rt_lib0clear(&___nl__im__0);
#line 127
c_rt_lib0clear(&___nl__im__1);
#line 127
c_rt_lib0clear(&___nl__im__2);
#line 127
c_rt_lib0clear(&___nl__im__3);
#line 127
return NULL;
}

ImmT  string0replace_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0replace_arr");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
ImmT  var2 = (_tab[2]);
return string0replace_arr(var0, var1, var2);
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
#line 131
___nl__int__3 = c_rt_lib0array_len(___nl__im__1);
#line 132
___nl__int__5 = c_rt_lib0array_len(___nl__im__2);
#line 132
___nl__int__6 = ___nl__int__3 == ___nl__int__5;
#line 132
___nl__bool__4 = ___nl__int__6;
#line 132
//clear ___nl__int__5;
#line 132
//clear ___nl__int__6;
#line 132
//clear ___nl__int__5;
#line 132
//clear ___nl__int__6;
#line 132
___nl__bool__4 = !___nl__bool__4;
#line 132
//clear ___nl__int__5;
#line 132
//clear ___nl__int__6;
#line 132
___nl__bool__4 = !___nl__bool__4;
#line 132
if(___nl__bool__4){ goto label_2;}
#line 132
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 132
nl_die_arg(___nl__im__7);
#line 132
goto label_1;
#line 132
label_2:
#line 132
label_1:
#line 132
//clear ___nl__bool__4;
#line 132
//clear ___nl__int__5;
#line 132
//clear ___nl__int__6;
#line 132
c_rt_lib0clear(&___nl__im__7);
#line 133
___nl__int__8 = 0;
#line 133
label_4:
#line 133
___nl__int__10 = ___nl__int__8 < ___nl__int__3;
#line 133
___nl__bool__9 = ___nl__int__10;
#line 133
//clear ___nl__int__10;
#line 133
___nl__bool__9 = !___nl__bool__9;
#line 133
if(___nl__bool__9){ goto label_3;}
#line 134
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__1, ___nl__int__8));
#line 134
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__2, ___nl__int__8));
#line 134
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 134
c_rt_lib0clear(&___nl__im__11);
#line 134
c_rt_lib0clear(&___nl__im__12);
#line 134
c_rt_lib0clear(&___nl__im__11);
#line 134
c_rt_lib0clear(&___nl__im__12);
#line 134
label_5:
#line 133
___nl__int__13 = 1;
#line 133
___nl__int__8 = ___nl__int__8 + ___nl__int__13;
#line 133
//clear ___nl__int__13;
#line 135
goto label_4;
#line 135
label_3:
#line 136
c_rt_lib0clear(&___nl__im__1);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
//clear ___nl__int__3;
#line 136
//clear ___nl__bool__4;
#line 136
//clear ___nl__int__5;
#line 136
//clear ___nl__int__6;
#line 136
c_rt_lib0clear(&___nl__im__7);
#line 136
//clear ___nl__int__8;
#line 136
//clear ___nl__bool__9;
#line 136
//clear ___nl__int__10;
#line 136
c_rt_lib0clear(&___nl__im__11);
#line 136
c_rt_lib0clear(&___nl__im__12);
#line 136
//clear ___nl__int__13;
#line 136
return ___nl__im__0;
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
c_rt_lib0clear(&___nl__im__1);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
//clear ___nl__int__3;
#line 136
//clear ___nl__bool__4;
#line 136
//clear ___nl__int__5;
#line 136
//clear ___nl__int__6;
#line 136
c_rt_lib0clear(&___nl__im__7);
#line 136
//clear ___nl__int__8;
#line 136
//clear ___nl__bool__9;
#line 136
//clear ___nl__int__10;
#line 136
c_rt_lib0clear(&___nl__im__11);
#line 136
c_rt_lib0clear(&___nl__im__12);
#line 136
//clear ___nl__int__13;
#line 136
return NULL;
}

INT  string0ord0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0ord");
ImmT  var0 = (_tab[0]);
return string0ord(var0);
}
INT  string0ord(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
#line 140
c_rt_lib0move(&___nl__im__1, c_std_lib0string_ord(___nl__im__0));
#line 140
___nl__int__2 = getIntFromImm(___nl__im__1);
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
return ___nl__int__2;
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
//clear ___nl__int__2;
#line 140
return 0;
}

bool  string0is_digit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_digit");
ImmT  var0 = (_tab[0]);
return string0is_digit(var0);
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
#line 144
___nl__int__1 = string0ord(___nl__im__0);
#line 145
___nl__int__4 = 48;
#line 145
___nl__int__5 = ___nl__int__1 >= ___nl__int__4;
#line 145
___nl__bool__2 = ___nl__int__5;
#line 145
//clear ___nl__int__4;
#line 145
//clear ___nl__int__5;
#line 145
___nl__bool__3 = !___nl__bool__2;
#line 145
if(___nl__bool__3){ goto label_1;}
#line 145
___nl__int__6 = 57;
#line 145
___nl__int__7 = ___nl__int__1 <= ___nl__int__6;
#line 145
___nl__bool__2 = ___nl__int__7;
#line 145
//clear ___nl__int__6;
#line 145
//clear ___nl__int__7;
#line 145
label_1:
#line 145
//clear ___nl__bool__3;
#line 145
//clear ___nl__int__4;
#line 145
//clear ___nl__int__5;
#line 145
//clear ___nl__int__6;
#line 145
//clear ___nl__int__7;
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
//clear ___nl__int__1;
#line 145
//clear ___nl__bool__3;
#line 145
//clear ___nl__int__4;
#line 145
//clear ___nl__int__5;
#line 145
//clear ___nl__int__6;
#line 145
//clear ___nl__int__7;
#line 145
return ___nl__bool__2;
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
//clear ___nl__int__1;
#line 145
//clear ___nl__bool__2;
#line 145
//clear ___nl__bool__3;
#line 145
//clear ___nl__int__4;
#line 145
//clear ___nl__int__5;
#line 145
//clear ___nl__int__6;
#line 145
//clear ___nl__int__7;
#line 145
return false;
}

bool  string0is_letter0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_letter");
ImmT  var0 = (_tab[0]);
return string0is_letter(var0);
}
bool  string0is_letter(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
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
#line 149
___nl__int__1 = string0ord(___nl__im__0);
#line 150
___nl__int__5 = 97;
#line 150
___nl__int__6 = ___nl__int__1 >= ___nl__int__5;
#line 150
___nl__bool__2 = ___nl__int__6;
#line 150
//clear ___nl__int__5;
#line 150
//clear ___nl__int__6;
#line 150
___nl__bool__4 = !___nl__bool__2;
#line 150
if(___nl__bool__4){ goto label_2;}
#line 150
___nl__int__7 = 122;
#line 150
___nl__int__8 = ___nl__int__1 <= ___nl__int__7;
#line 150
___nl__bool__2 = ___nl__int__8;
#line 150
//clear ___nl__int__7;
#line 150
//clear ___nl__int__8;
#line 150
label_2:
#line 150
//clear ___nl__bool__4;
#line 150
//clear ___nl__int__5;
#line 150
//clear ___nl__int__6;
#line 150
//clear ___nl__int__7;
#line 150
//clear ___nl__int__8;
#line 150
//clear ___nl__bool__4;
#line 150
//clear ___nl__int__5;
#line 150
//clear ___nl__int__6;
#line 150
//clear ___nl__int__7;
#line 150
//clear ___nl__int__8;
#line 150
if(___nl__bool__2){ goto label_1;}
#line 150
___nl__int__10 = 65;
#line 150
___nl__int__11 = ___nl__int__1 >= ___nl__int__10;
#line 150
___nl__bool__2 = ___nl__int__11;
#line 150
//clear ___nl__int__10;
#line 150
//clear ___nl__int__11;
#line 150
___nl__bool__9 = !___nl__bool__2;
#line 150
if(___nl__bool__9){ goto label_3;}
#line 150
___nl__int__12 = 90;
#line 150
___nl__int__13 = ___nl__int__1 <= ___nl__int__12;
#line 150
___nl__bool__2 = ___nl__int__13;
#line 150
//clear ___nl__int__12;
#line 150
//clear ___nl__int__13;
#line 150
label_3:
#line 150
//clear ___nl__bool__9;
#line 150
//clear ___nl__int__10;
#line 150
//clear ___nl__int__11;
#line 150
//clear ___nl__int__12;
#line 150
//clear ___nl__int__13;
#line 150
//clear ___nl__bool__9;
#line 150
//clear ___nl__int__10;
#line 150
//clear ___nl__int__11;
#line 150
//clear ___nl__int__12;
#line 150
//clear ___nl__int__13;
#line 150
label_1:
#line 150
//clear ___nl__bool__3;
#line 150
//clear ___nl__bool__4;
#line 150
//clear ___nl__int__5;
#line 150
//clear ___nl__int__6;
#line 150
//clear ___nl__int__7;
#line 150
//clear ___nl__int__8;
#line 150
//clear ___nl__bool__9;
#line 150
//clear ___nl__int__10;
#line 150
//clear ___nl__int__11;
#line 150
//clear ___nl__int__12;
#line 150
//clear ___nl__int__13;
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
//clear ___nl__int__1;
#line 150
//clear ___nl__bool__3;
#line 150
//clear ___nl__bool__4;
#line 150
//clear ___nl__int__5;
#line 150
//clear ___nl__int__6;
#line 150
//clear ___nl__int__7;
#line 150
//clear ___nl__int__8;
#line 150
//clear ___nl__bool__9;
#line 150
//clear ___nl__int__10;
#line 150
//clear ___nl__int__11;
#line 150
//clear ___nl__int__12;
#line 150
//clear ___nl__int__13;
#line 150
return ___nl__bool__2;
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
//clear ___nl__int__1;
#line 150
//clear ___nl__bool__2;
#line 150
//clear ___nl__bool__3;
#line 150
//clear ___nl__bool__4;
#line 150
//clear ___nl__int__5;
#line 150
//clear ___nl__int__6;
#line 150
//clear ___nl__int__7;
#line 150
//clear ___nl__int__8;
#line 150
//clear ___nl__bool__9;
#line 150
//clear ___nl__int__10;
#line 150
//clear ___nl__int__11;
#line 150
//clear ___nl__int__12;
#line 150
//clear ___nl__int__13;
#line 150
return false;
}

ImmT  string0encode_utf160ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0encode_utf16");
ImmT  var0 = (_tab[0]);
return string0encode_utf16(var0);
}
ImmT  string0encode_utf16(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 154
c_rt_lib0move(&___nl__im__1, c_std_lib0string_encode_utf16(___nl__im__0));
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
return ___nl__im__1;
#line 154
c_rt_lib0clear(&___nl__im__0);
#line 154
c_rt_lib0clear(&___nl__im__1);
#line 154
return NULL;
}

ImmT  string0decode_utf160ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0decode_utf16");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0decode_utf16(var0, var1);
}
ImmT  string0decode_utf16(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 158
c_rt_lib0move(&___nl__im__2, c_std_lib0string_decode_utf16(___nl__im__0, ___nl__im__1));
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
return ___nl__im__2;
#line 158
c_rt_lib0clear(&___nl__im__0);
#line 158
c_rt_lib0clear(&___nl__im__1);
#line 158
c_rt_lib0clear(&___nl__im__2);
#line 158
return NULL;
}

ImmT  string0is_empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_empty");
ImmT  var0 = (_tab[0]);
return string0is_empty(var0);
}
ImmT  string0is_empty(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
string_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
#line 162
___nl__int__2 = string0length(___nl__im__0);
#line 162
___nl__int__3 = 0;
#line 162
___nl__int__4 = ___nl__int__2 == ___nl__int__3;
#line 162
___nl__bool__1 = ___nl__int__4;
#line 162
//clear ___nl__int__2;
#line 162
//clear ___nl__int__3;
#line 162
//clear ___nl__int__4;
#line 162
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
//clear ___nl__bool__1;
#line 162
//clear ___nl__int__2;
#line 162
//clear ___nl__int__3;
#line 162
//clear ___nl__int__4;
#line 162
return ___nl__im__5;
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
//clear ___nl__bool__1;
#line 162
//clear ___nl__int__2;
#line 162
//clear ___nl__int__3;
#line 162
//clear ___nl__int__4;
#line 162
c_rt_lib0clear(&___nl__im__5);
#line 162
return NULL;
}

ImmT  string0chr(INT  ___nl__int__0) {
string_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 166
c_rt_lib0move(&___nl__im__2, c_rt_lib0int_new(___nl__int__0));
#line 166
c_rt_lib0move(&___nl__im__1, c_std_lib0string_chr(___nl__im__2));
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
//clear ___nl__int__0;
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
return ___nl__im__1;
#line 166
//clear ___nl__int__0;
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
return NULL;
}

ImmT  string0lt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0lt");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0lt(var0, var1);
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
#line 170
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 170
___nl__int__4 = 0;
#line 170
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 170
___nl__int__6 = ___nl__int__5 < ___nl__int__4;
#line 170
___nl__bool__2 = ___nl__int__6;
#line 170
c_rt_lib0clear(&___nl__im__3);
#line 170
//clear ___nl__int__4;
#line 170
//clear ___nl__int__5;
#line 170
//clear ___nl__int__6;
#line 170
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 170
c_rt_lib0clear(&___nl__im__0);
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
//clear ___nl__bool__2;
#line 170
c_rt_lib0clear(&___nl__im__3);
#line 170
//clear ___nl__int__4;
#line 170
//clear ___nl__int__5;
#line 170
//clear ___nl__int__6;
#line 170
return ___nl__im__7;
#line 170
c_rt_lib0clear(&___nl__im__0);
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
//clear ___nl__bool__2;
#line 170
c_rt_lib0clear(&___nl__im__3);
#line 170
//clear ___nl__int__4;
#line 170
//clear ___nl__int__5;
#line 170
//clear ___nl__int__6;
#line 170
c_rt_lib0clear(&___nl__im__7);
#line 170
return NULL;
}

ImmT  string0gt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0gt");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0gt(var0, var1);
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
#line 174
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 174
___nl__int__4 = 0;
#line 174
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 174
___nl__int__6 = ___nl__int__5 > ___nl__int__4;
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
c_rt_lib0clear(&___nl__im__3);
#line 174
//clear ___nl__int__4;
#line 174
//clear ___nl__int__5;
#line 174
//clear ___nl__int__6;
#line 174
return ___nl__im__7;
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
//clear ___nl__bool__2;
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
//clear ___nl__int__4;
#line 174
//clear ___nl__int__5;
#line 174
//clear ___nl__int__6;
#line 174
c_rt_lib0clear(&___nl__im__7);
#line 174
return NULL;
}

ImmT  string0compare0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0compare");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0compare(var0, var1);
}
ImmT  string0compare(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
string_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
#line 178
___nl__int__2 = c_std_lib0string_compare(___nl__im__0, ___nl__im__1);
#line 178
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
c_rt_lib0clear(&___nl__im__1);
#line 178
//clear ___nl__int__2;
#line 178
return ___nl__im__3;
#line 178
c_rt_lib0clear(&___nl__im__0);
#line 178
c_rt_lib0clear(&___nl__im__1);
#line 178
//clear ___nl__int__2;
#line 178
c_rt_lib0clear(&___nl__im__3);
#line 178
return NULL;
}

ImmT  string0le0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0le");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0le(var0, var1);
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
#line 182
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 182
___nl__int__4 = 0;
#line 182
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 182
___nl__int__6 = ___nl__int__5 <= ___nl__int__4;
#line 182
___nl__bool__2 = ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__bool__2;
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
return ___nl__im__7;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__bool__2;
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
//clear ___nl__int__4;
#line 182
//clear ___nl__int__5;
#line 182
//clear ___nl__int__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
return NULL;
}

ImmT  string0ge0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0ge");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return string0ge(var0, var1);
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
#line 186
c_rt_lib0move(&___nl__im__3, string0compare(___nl__im__0, ___nl__im__1));
#line 186
___nl__int__4 = 0;
#line 186
___nl__int__5 = getIntFromImm(___nl__im__3);
#line 186
___nl__int__6 = ___nl__int__5 >= ___nl__int__4;
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
c_rt_lib0clear(&___nl__im__3);
#line 186
//clear ___nl__int__4;
#line 186
//clear ___nl__int__5;
#line 186
//clear ___nl__int__6;
#line 186
return ___nl__im__7;
#line 186
c_rt_lib0clear(&___nl__im__0);
#line 186
c_rt_lib0clear(&___nl__im__1);
#line 186
//clear ___nl__bool__2;
#line 186
c_rt_lib0clear(&___nl__im__3);
#line 186
//clear ___nl__int__4;
#line 186
//clear ___nl__int__5;
#line 186
//clear ___nl__int__6;
#line 186
c_rt_lib0clear(&___nl__im__7);
#line 186
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
