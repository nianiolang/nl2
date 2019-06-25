
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "array.h"
#include "c_std_lib.h"
#include "array.h"
#line 1 "array.nl"

static ImmT *__const__f = NULL;
void array_priv0__const__init();
ImmT array_priv0__const__sim(int __nr);
ImmT array_priv0__const__sing(int __nr);

ImmT  array_priv0sort(ImmT * ___ref___im__0,ImmT  ___nl__im__1);
ImmT  array_priv0exec(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);


ImmT  array0subarray0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "array0subarray");
ImmT  *var0 = &(_tab[0]);
INT  var1 = getIntFromImm((_tab[1]));
INT  var2 = getIntFromImm((_tab[2]));
ImmT  res = array0subarray(*var0, var1, var2);
c_rt_lib0move(&_tab[1], c_rt_lib0int_new(var1));
c_rt_lib0move(&_tab[2], c_rt_lib0int_new(var2));
return res;
}
ImmT  array0subarray(ImmT  ___nl__im__0,INT  ___nl__int__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__0);
array_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 9
c_rt_lib0move(&___nl__im__3, c_std_lib0array_sub(___nl__im__0, ___nl__int__1, ___nl__int__2));
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
//clear ___nl__int__1;
#line 9
//clear ___nl__int__2;
#line 9
return ___nl__im__3;
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
//clear ___nl__int__1;
#line 9
//clear ___nl__int__2;
#line 9
c_rt_lib0clear(&___nl__im__3);
#line 9
return NULL;
return NULL;

}

ImmT  array0reverse0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0reverse");
ImmT  *var0 = &(_tab[0]);
ImmT  res = array0reverse(var0);
return res;
}
ImmT  array0reverse(ImmT * ___ref___im__0) {
array_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
#line 13
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 14
___nl__int__2 = c_rt_lib0array_len((*___ref___im__0));
#line 14
___nl__int__3 = 0;
#line 14
___nl__int__4 = 1;
#line 14
label_4:
;
#line 14
___nl__bool__5 = ___nl__int__3 >= ___nl__int__2;
#line 14
if(___nl__bool__5){ goto label_20;}
#line 15
___nl__int__9 = c_rt_lib0array_len((*___ref___im__0));
#line 15
___nl__int__8 = ___nl__int__9 - ___nl__int__3;
#line 15
//clear ___nl__int__9;
#line 15
___nl__int__10 = 1;
#line 15
___nl__int__7 = ___nl__int__8 - ___nl__int__10;
#line 15
//clear ___nl__int__8;
#line 15
//clear ___nl__int__10;
#line 15
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_get((*___ref___im__0), ___nl__int__7));
#line 15
//clear ___nl__int__7;
#line 15
c_rt_lib0array_push(&___nl__im__1, ___nl__im__6);
#line 15
c_rt_lib0clear(&___nl__im__6);
#line 16
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 16
goto label_4;
#line 16
label_20:
;
#line 17
c_rt_lib0copy(___ref___im__0, ___nl__im__1);
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
//clear ___nl__int__2;
#line 17
//clear ___nl__int__3;
#line 17
//clear ___nl__int__4;
#line 17
//clear ___nl__bool__5;
#line 17
return NULL;
return NULL;

}

ImmT  array0join0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0join");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0join(*var0, *var1);
return res;
}
ImmT  array0join(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
#line 21
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 22
___nl__bool__3 = true;
#line 23
___nl__int__5 = 0;
#line 23
___nl__int__6 = 1;
#line 23
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 23
label_5:
;
#line 23
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 23
if(___nl__bool__8){ goto label_23;}
#line 23
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 23
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 24
___nl__bool__10 = ___nl__bool__3;
#line 24
___nl__bool__10 = !___nl__bool__10;
#line 24
___nl__bool__10 = !___nl__bool__10;
#line 24
if(___nl__bool__10){ goto label_16;}
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 24
goto label_16;
#line 24
label_16:
;
#line 24
//clear ___nl__bool__10;
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 26
___nl__bool__3 = false;
#line 26
c_rt_lib0clear(&___nl__im__4);
#line 27
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 27
goto label_5;
#line 27
label_23:
;
#line 28
c_rt_lib0clear(&___nl__im__0);
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
//clear ___nl__bool__3;
#line 28
c_rt_lib0clear(&___nl__im__4);
#line 28
//clear ___nl__int__5;
#line 28
//clear ___nl__int__6;
#line 28
//clear ___nl__int__7;
#line 28
//clear ___nl__bool__8;
#line 28
c_rt_lib0clear(&___nl__im__9);
#line 28
return ___nl__im__2;
#line 28
c_rt_lib0clear(&___nl__im__0);
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 28
//clear ___nl__bool__3;
#line 28
c_rt_lib0clear(&___nl__im__4);
#line 28
//clear ___nl__int__5;
#line 28
//clear ___nl__int__6;
#line 28
//clear ___nl__int__7;
#line 28
//clear ___nl__bool__8;
#line 28
c_rt_lib0clear(&___nl__im__9);
#line 28
return NULL;
return NULL;

}

ImmT  array0remove0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0remove");
ImmT  *var0 = &(_tab[0]);
INT  var1 = getIntFromImm((_tab[1]));
ImmT  res = array0remove(var0, var1);
c_rt_lib0move(&_tab[1], c_rt_lib0int_new(var1));
return res;
}
ImmT  array0remove(ImmT * ___ref___im__0,INT  ___nl__int__1) {
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
#line 32
___nl__int__3 = 0;
#line 32
c_rt_lib0move(&___nl__im__2, array0subarray((*___ref___im__0), ___nl__int__3, ___nl__int__1));
#line 32
//clear ___nl__int__3;
#line 33
___nl__int__5 = 1;
#line 33
___nl__int__4 = ___nl__int__1 + ___nl__int__5;
#line 33
//clear ___nl__int__5;
#line 33
label_6:
;
#line 33
___nl__int__7 = c_rt_lib0array_len((*___ref___im__0));
#line 33
___nl__bool__6 = ___nl__int__4 < ___nl__int__7;
#line 33
//clear ___nl__int__7;
#line 33
___nl__bool__6 = !___nl__bool__6;
#line 33
if(___nl__bool__6){ goto label_19;}
#line 34
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get((*___ref___im__0), ___nl__int__4));
#line 34
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__8));
#line 34
c_rt_lib0clear(&___nl__im__8);
#line 33
___nl__int__9 = 1;
#line 33
___nl__int__4 = ___nl__int__4 + ___nl__int__9;
#line 33
//clear ___nl__int__9;
#line 35
goto label_6;
#line 35
label_19:
;
#line 36
c_rt_lib0copy(___ref___im__0, ___nl__im__2);
#line 36
//clear ___nl__int__1;
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 36
//clear ___nl__int__4;
#line 36
//clear ___nl__bool__6;
#line 36
return NULL;

}

ImmT  array0insert0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "array0insert");
ImmT  *var0 = &(_tab[0]);
INT  var1 = getIntFromImm((_tab[1]));
ImmT  *var2 = &(_tab[2]);
ImmT  res = array0insert(var0, var1, *var2);
c_rt_lib0move(&_tab[1], c_rt_lib0int_new(var1));
return res;
}
ImmT  array0insert(ImmT * ___ref___im__0,INT  ___nl__int__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
array_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
#line 40
___nl__int__4 = 0;
#line 40
c_rt_lib0move(&___nl__im__3, array0subarray((*___ref___im__0), ___nl__int__4, ___nl__int__1));
#line 40
//clear ___nl__int__4;
#line 41
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__2));
#line 42
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__1));
#line 42
label_5:
;
#line 42
___nl__int__7 = c_rt_lib0array_len((*___ref___im__0));
#line 42
___nl__int__8 = getIntFromImm(___nl__im__5);
#line 42
___nl__bool__6 = ___nl__int__8 < ___nl__int__7;
#line 42
//clear ___nl__int__7;
#line 42
//clear ___nl__int__8;
#line 42
___nl__bool__6 = !___nl__bool__6;
#line 42
if(___nl__bool__6){ goto label_26;}
#line 43
___nl__int__10 = getIntFromImm(___nl__im__5);
#line 43
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get((*___ref___im__0), ___nl__int__10));
#line 43
//clear ___nl__int__10;
#line 43
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__9));
#line 43
c_rt_lib0clear(&___nl__im__9);
#line 42
___nl__int__11 = 1;
#line 42
___nl__int__12 = getIntFromImm(___nl__im__5);
#line 42
___nl__int__13 = ___nl__int__12 + ___nl__int__11;
#line 42
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__13));
#line 42
//clear ___nl__int__11;
#line 42
//clear ___nl__int__12;
#line 42
//clear ___nl__int__13;
#line 44
goto label_5;
#line 44
label_26:
;
#line 45
c_rt_lib0copy(___ref___im__0, ___nl__im__3);
#line 45
//clear ___nl__int__1;
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
c_rt_lib0clear(&___nl__im__3);
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
//clear ___nl__bool__6;
#line 45
return NULL;

}

ImmT  array0push0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0push");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0push(var0, *var1);
return res;
}
ImmT  array0push(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
#line 49
c_rt_lib0delete(c_std_lib0array_push(___ref___im__0, ___nl__im__1));
#line 49
c_rt_lib0clear(&___nl__im__1);
#line 49
return NULL;

}

ImmT  array0add0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0add");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0add(*var0, *var1);
return res;
}
ImmT  array0add(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 53
c_rt_lib0copy(&___nl__im__2, ___nl__im__0);
#line 54
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__1));
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
c_rt_lib0clear(&___nl__im__1);
#line 55
return ___nl__im__2;
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
c_rt_lib0clear(&___nl__im__1);
#line 55
c_rt_lib0clear(&___nl__im__2);
#line 55
return NULL;
return NULL;

}

ImmT  array0unshift0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0unshift");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0unshift(var0, *var1);
return res;
}
ImmT  array0unshift(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 59
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(1, ___nl__im__1));
#line 60
c_rt_lib0delete(array0append(&___nl__im__2, (*___ref___im__0)));
#line 61
c_rt_lib0copy(___ref___im__0, ___nl__im__2);
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
return NULL;
return NULL;

}

ImmT  array0shift0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0shift");
ImmT  *var0 = &(_tab[0]);
ImmT  res = array0shift(var0);
return res;
}
ImmT  array0shift(ImmT * ___ref___im__0) {
array_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
#line 65
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 66
___nl__int__2 = 1;
#line 66
label_2:
;
#line 66
___nl__int__4 = c_rt_lib0array_len((*___ref___im__0));
#line 66
___nl__bool__3 = ___nl__int__2 < ___nl__int__4;
#line 66
//clear ___nl__int__4;
#line 66
___nl__bool__3 = !___nl__bool__3;
#line 66
if(___nl__bool__3){ goto label_15;}
#line 67
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get((*___ref___im__0), ___nl__int__2));
#line 67
c_rt_lib0array_push(&___nl__im__1, ___nl__im__5);
#line 67
c_rt_lib0clear(&___nl__im__5);
#line 66
___nl__int__6 = 1;
#line 66
___nl__int__2 = ___nl__int__2 + ___nl__int__6;
#line 66
//clear ___nl__int__6;
#line 68
goto label_2;
#line 68
label_15:
;
#line 69
//clear ___nl__int__2;
#line 69
//clear ___nl__bool__3;
#line 69
return ___nl__im__1;
#line 69
c_rt_lib0clear(&___nl__im__1);
#line 69
//clear ___nl__int__2;
#line 69
//clear ___nl__bool__3;
#line 69
return NULL;
return NULL;

}

ImmT  array0pop0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0pop");
ImmT  *var0 = &(_tab[0]);
ImmT  res = array0pop(var0);
return res;
}
ImmT  array0pop(ImmT * ___ref___im__0) {
array_priv0__const__init();
#line 73
c_rt_lib0delete(c_std_lib0array_pop(___ref___im__0));
#line 73
return NULL;

}

ImmT  array0append0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0append");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0append(var0, *var1);
return res;
}
ImmT  array0append(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
#line 77
___nl__int__3 = 0;
#line 77
___nl__int__4 = 1;
#line 77
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 77
label_3:
;
#line 77
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 77
if(___nl__bool__6){ goto label_12;}
#line 77
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 77
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 78
c_rt_lib0delete(array0push(___ref___im__0, ___nl__im__2));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 79
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 79
goto label_3;
#line 79
label_12:
;
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
c_rt_lib0clear(&___nl__im__2);
#line 79
//clear ___nl__int__3;
#line 79
//clear ___nl__int__4;
#line 79
//clear ___nl__int__5;
#line 79
//clear ___nl__bool__6;
#line 79
c_rt_lib0clear(&___nl__im__7);
#line 79
return NULL;

}

ImmT  array0join_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0join_arr");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0join_arr(*var0, *var1);
return res;
}
ImmT  array0join_arr(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 83
c_rt_lib0copy(&___nl__im__2, ___nl__im__0);
#line 84
c_rt_lib0delete(array0append(&___nl__im__2, ___nl__im__1));
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
c_rt_lib0clear(&___nl__im__1);
#line 85
return ___nl__im__2;
#line 85
c_rt_lib0clear(&___nl__im__0);
#line 85
c_rt_lib0clear(&___nl__im__1);
#line 85
c_rt_lib0clear(&___nl__im__2);
#line 85
return NULL;
return NULL;

}

ImmT  array0len0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0len");
ImmT  *var0 = &(_tab[0]);
INT  res = array0len(*var0);
return c_rt_lib0int_new(res);
}
INT  array0len(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
array_priv0__const__init();
INT  ___nl__int__1 = 0;
#line 89
___nl__int__1 = c_std_lib0array_len(___nl__im__0);
#line 89
c_rt_lib0clear(&___nl__im__0);
#line 89
return ___nl__int__1;
#line 89
c_rt_lib0clear(&___nl__im__0);
#line 89
//clear ___nl__int__1;
#line 89
return 0;
return 0;

}

ImmT  array0is_empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0is_empty");
ImmT  *var0 = &(_tab[0]);
ImmT  res = array0is_empty(*var0);
return res;
}
ImmT  array0is_empty(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
array_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
#line 93
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 93
___nl__int__3 = 0;
#line 93
___nl__bool__1 = ___nl__int__2 == ___nl__int__3;
#line 93
//clear ___nl__int__2;
#line 93
//clear ___nl__int__3;
#line 93
c_rt_lib0move(&___nl__im__4, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
//clear ___nl__bool__1;
#line 93
return ___nl__im__4;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
//clear ___nl__bool__1;
#line 93
c_rt_lib0clear(&___nl__im__4);
#line 93
return NULL;
return NULL;

}

ImmT  array0cmp0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0cmp");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0cmp(*var0, *var1);
return res;
}
ImmT  array0cmp(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
#line 97
___nl__int__3 = c_std_lib0string_compare(___nl__im__0, ___nl__im__1);
#line 97
___nl__int__4 = 0;
#line 97
___nl__bool__2 = ___nl__int__3 < ___nl__int__4;
#line 97
//clear ___nl__int__3;
#line 97
//clear ___nl__int__4;
#line 97
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__bool__2;
#line 97
return ___nl__im__5;
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__bool__2;
#line 97
c_rt_lib0clear(&___nl__im__5);
#line 97
return NULL;
return NULL;

}

ImmT  array0sort0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0sort");
ImmT  *var0 = &(_tab[0]);
ImmT  res = array0sort(var0);
return res;
}
ImmT  array0sort(ImmT * ___ref___im__0) {
array_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 101
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(array0cmp0ptr, ___get_global_string_const(37), ___get_global_string_const(38)));
#line 101
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
#line 101
c_rt_lib0delete(array_priv0sort(___ref___im__0, ___nl__im__1));
#line 101
c_rt_lib0clear(&___nl__im__1);
#line 101
return NULL;

}

ImmT  array0sort_comparator0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0sort_comparator");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = array0sort_comparator(var0, *var1);
return res;
}
ImmT  array0sort_comparator(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
#line 105
c_rt_lib0delete(array_priv0sort(___ref___im__0, ___nl__im__1));
#line 105
c_rt_lib0clear(&___nl__im__1);
#line 105
return NULL;
return NULL;

}

ImmT  array0equal0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0equal");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
bool  res = array0equal(*var0, *var1);
return c_rt_lib0bool_to_nl_native(res);
}
bool  array0equal(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
#line 109
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 109
___nl__int__4 = c_rt_lib0array_len(___nl__im__1);
#line 109
___nl__bool__2 = ___nl__int__3 == ___nl__int__4;
#line 109
//clear ___nl__int__3;
#line 109
//clear ___nl__int__4;
#line 109
___nl__bool__2 = !___nl__bool__2;
#line 109
___nl__bool__2 = !___nl__bool__2;
#line 109
if(___nl__bool__2){ goto label_14;}
#line 109
___nl__bool__5 = false;
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
c_rt_lib0clear(&___nl__im__1);
#line 109
//clear ___nl__bool__2;
#line 109
return ___nl__bool__5;
#line 109
goto label_14;
#line 109
label_14:
;
#line 109
//clear ___nl__bool__2;
#line 109
//clear ___nl__bool__5;
#line 110
___nl__int__6 = c_rt_lib0array_len(___nl__im__0);
#line 110
___nl__int__7 = 0;
#line 110
___nl__int__8 = 1;
#line 110
label_20:
;
#line 110
___nl__bool__9 = ___nl__int__7 >= ___nl__int__6;
#line 110
if(___nl__bool__9){ goto label_46;}
#line 111
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__0, ___nl__int__7));
#line 111
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__1, ___nl__int__7));
#line 111
___nl__bool__10 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 111
c_rt_lib0clear(&___nl__im__11);
#line 111
c_rt_lib0clear(&___nl__im__12);
#line 111
___nl__bool__10 = !___nl__bool__10;
#line 111
___nl__bool__10 = !___nl__bool__10;
#line 111
if(___nl__bool__10){ goto label_41;}
#line 111
___nl__bool__13 = false;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
//clear ___nl__int__6;
#line 111
//clear ___nl__int__7;
#line 111
//clear ___nl__int__8;
#line 111
//clear ___nl__bool__9;
#line 111
//clear ___nl__bool__10;
#line 111
return ___nl__bool__13;
#line 111
goto label_41;
#line 111
label_41:
;
#line 111
//clear ___nl__bool__10;
#line 111
//clear ___nl__bool__13;
#line 112
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 112
goto label_20;
#line 112
label_46:
;
#line 113
___nl__bool__14 = true;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
//clear ___nl__int__6;
#line 113
//clear ___nl__int__7;
#line 113
//clear ___nl__int__8;
#line 113
//clear ___nl__bool__9;
#line 113
return ___nl__bool__14;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
//clear ___nl__int__6;
#line 113
//clear ___nl__int__7;
#line 113
//clear ___nl__int__8;
#line 113
//clear ___nl__bool__9;
#line 113
//clear ___nl__bool__14;
#line 113
return false;
return false;

}

ImmT  array_priv0sort(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
bool  ___nl__bool__35 = false;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
bool  ___nl__bool__42 = false;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
bool  ___nl__bool__58 = false;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
#line 117
___nl__int__2 = c_rt_lib0array_len((*___ref___im__0));
#line 118
___nl__int__3 = 2;
#line 118
label_2:
;
#line 118
___nl__int__6 = 2;
#line 118
___nl__int__5 = ___nl__int__6 * ___nl__int__2;
#line 118
//clear ___nl__int__6;
#line 118
___nl__bool__4 = ___nl__int__3 < ___nl__int__5;
#line 118
//clear ___nl__int__5;
#line 118
___nl__bool__4 = !___nl__bool__4;
#line 118
if(___nl__bool__4){ goto label_217;}
#line 119
___nl__int__7 = 0;
#line 119
label_11:
;
#line 119
___nl__bool__8 = ___nl__int__7 < ___nl__int__2;
#line 119
___nl__bool__8 = !___nl__bool__8;
#line 119
if(___nl__bool__8){ goto label_200;}
#line 120
___nl__int__10 = ___nl__int__7 + ___nl__int__3;
#line 120
___nl__int__11 = 1;
#line 120
___nl__int__9 = ___nl__int__10 - ___nl__int__11;
#line 120
//clear ___nl__int__10;
#line 120
//clear ___nl__int__11;
#line 121
___nl__int__14 = 1;
#line 121
___nl__int__13 = ___nl__int__2 - ___nl__int__14;
#line 121
//clear ___nl__int__14;
#line 121
___nl__bool__12 = ___nl__int__9 > ___nl__int__13;
#line 121
//clear ___nl__int__13;
#line 121
___nl__bool__12 = !___nl__bool__12;
#line 121
if(___nl__bool__12){ goto label_31;}
#line 121
___nl__int__15 = 1;
#line 121
___nl__int__9 = ___nl__int__2 - ___nl__int__15;
#line 121
//clear ___nl__int__15;
#line 121
goto label_31;
#line 121
label_31:
;
#line 121
//clear ___nl__bool__12;
#line 122
___nl__int__17 = ___nl__int__9 - ___nl__int__7;
#line 122
___nl__int__18 = 0;
#line 122
___nl__bool__16 = ___nl__int__17 <= ___nl__int__18;
#line 122
//clear ___nl__int__17;
#line 122
//clear ___nl__int__18;
#line 122
___nl__bool__16 = !___nl__bool__16;
#line 122
if(___nl__bool__16){ goto label_44;}
#line 122
//clear ___nl__int__9;
#line 122
//clear ___nl__bool__16;
#line 122
goto label_197;
#line 122
goto label_44;
#line 122
label_44:
;
#line 122
//clear ___nl__bool__16;
#line 123
___nl__int__20 = ___nl__int__9 - ___nl__int__7;
#line 123
___nl__int__21 = 1;
#line 123
___nl__bool__19 = ___nl__int__20 == ___nl__int__21;
#line 123
//clear ___nl__int__20;
#line 123
//clear ___nl__int__21;
#line 123
___nl__bool__19 = !___nl__bool__19;
#line 123
if(___nl__bool__19){ goto label_83;}
#line 124
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get((*___ref___im__0), ___nl__int__7));
#line 124
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get((*___ref___im__0), ___nl__int__9));
#line 124
c_rt_lib0move(&___nl__im__25, array_priv0exec(___nl__im__1, ___nl__im__23, ___nl__im__24));
#line 124
___nl__bool__22 = c_rt_lib0check_true_native(___nl__im__25);
#line 124
c_rt_lib0clear(&___nl__im__23);
#line 124
c_rt_lib0clear(&___nl__im__24);
#line 124
c_rt_lib0clear(&___nl__im__25);
#line 124
___nl__bool__22 = !___nl__bool__22;
#line 124
if(___nl__bool__22){ goto label_67;}
#line 124
//clear ___nl__int__9;
#line 124
//clear ___nl__bool__19;
#line 124
//clear ___nl__bool__22;
#line 124
goto label_197;
#line 124
goto label_67;
#line 124
label_67:
;
#line 124
//clear ___nl__bool__22;
#line 125
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get((*___ref___im__0), ___nl__int__7));
#line 126
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get((*___ref___im__0), ___nl__int__9));
#line 126
c_rt_lib0copy(&___nl__im__28, ___nl__im__27);
#line 126
c_rt_lib0array_set(___ref___im__0, ___nl__int__7, ___nl__im__28);
#line 126
c_rt_lib0clear(&___nl__im__27);
#line 126
c_rt_lib0clear(&___nl__im__28);
#line 127
c_rt_lib0copy(&___nl__im__29, ___nl__im__26);
#line 127
c_rt_lib0array_set(___ref___im__0, ___nl__int__9, ___nl__im__29);
#line 127
c_rt_lib0clear(&___nl__im__29);
#line 128
//clear ___nl__int__9;
#line 128
//clear ___nl__bool__19;
#line 128
c_rt_lib0clear(&___nl__im__26);
#line 128
goto label_197;
#line 129
goto label_83;
#line 129
label_83:
;
#line 129
//clear ___nl__bool__19;
#line 129
c_rt_lib0clear(&___nl__im__26);
#line 130
___nl__int__33 = 1;
#line 130
___nl__int__32 = ___nl__int__3 - ___nl__int__33;
#line 130
//clear ___nl__int__33;
#line 130
___nl__int__34 = 2;
#line 130
___nl__int__31 = ___nl__int__32 / ___nl__int__34;
#line 130
//clear ___nl__int__32;
#line 130
//clear ___nl__int__34;
#line 130
___nl__int__30 = ___nl__int__7 + ___nl__int__31;
#line 130
//clear ___nl__int__31;
#line 131
___nl__int__37 = 1;
#line 131
___nl__int__36 = ___nl__int__2 - ___nl__int__37;
#line 131
//clear ___nl__int__37;
#line 131
___nl__bool__35 = ___nl__int__30 > ___nl__int__36;
#line 131
//clear ___nl__int__36;
#line 131
___nl__bool__35 = !___nl__bool__35;
#line 131
if(___nl__bool__35){ goto label_107;}
#line 131
//clear ___nl__int__9;
#line 131
//clear ___nl__int__30;
#line 131
//clear ___nl__bool__35;
#line 131
goto label_197;
#line 131
goto label_107;
#line 131
label_107:
;
#line 131
//clear ___nl__bool__35;
#line 132
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(0));
#line 133
___nl__int__39 = ___nl__int__7;
#line 134
___nl__int__41 = 1;
#line 134
___nl__int__40 = ___nl__int__30 + ___nl__int__41;
#line 134
//clear ___nl__int__41;
#line 135
label_114:
;
#line 135
___nl__bool__42 = ___nl__int__39 <= ___nl__int__30;
#line 135
if(___nl__bool__42){ goto label_118;}
#line 135
___nl__bool__42 = ___nl__int__40 <= ___nl__int__9;
#line 135
label_118:
;
#line 135
___nl__bool__42 = !___nl__bool__42;
#line 135
if(___nl__bool__42){ goto label_170;}
#line 136
___nl__bool__43 = ___nl__int__39 > ___nl__int__30;
#line 136
___nl__bool__43 = !___nl__bool__43;
#line 136
if(___nl__bool__43){ goto label_131;}
#line 137
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get((*___ref___im__0), ___nl__int__40));
#line 137
c_rt_lib0delete(array0push(&___nl__im__38, ___nl__im__44));
#line 137
c_rt_lib0clear(&___nl__im__44);
#line 138
___nl__int__45 = 1;
#line 138
___nl__int__40 = ___nl__int__40 + ___nl__int__45;
#line 138
//clear ___nl__int__45;
#line 139
goto label_167;
#line 139
label_131:
;
#line 139
___nl__bool__43 = ___nl__int__40 > ___nl__int__9;
#line 139
___nl__bool__43 = !___nl__bool__43;
#line 139
if(___nl__bool__43){ goto label_142;}
#line 140
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get((*___ref___im__0), ___nl__int__39));
#line 140
c_rt_lib0delete(array0push(&___nl__im__38, ___nl__im__46));
#line 140
c_rt_lib0clear(&___nl__im__46);
#line 141
___nl__int__47 = 1;
#line 141
___nl__int__39 = ___nl__int__39 + ___nl__int__47;
#line 141
//clear ___nl__int__47;
#line 142
goto label_167;
#line 142
label_142:
;
#line 142
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_get((*___ref___im__0), ___nl__int__39));
#line 142
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get((*___ref___im__0), ___nl__int__40));
#line 142
c_rt_lib0move(&___nl__im__50, array_priv0exec(___nl__im__1, ___nl__im__48, ___nl__im__49));
#line 142
___nl__bool__43 = c_rt_lib0check_true_native(___nl__im__50);
#line 142
c_rt_lib0clear(&___nl__im__48);
#line 142
c_rt_lib0clear(&___nl__im__49);
#line 142
c_rt_lib0clear(&___nl__im__50);
#line 142
___nl__bool__43 = !___nl__bool__43;
#line 142
if(___nl__bool__43){ goto label_159;}
#line 143
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get((*___ref___im__0), ___nl__int__39));
#line 143
c_rt_lib0delete(array0push(&___nl__im__38, ___nl__im__51));
#line 143
c_rt_lib0clear(&___nl__im__51);
#line 144
___nl__int__52 = 1;
#line 144
___nl__int__39 = ___nl__int__39 + ___nl__int__52;
#line 144
//clear ___nl__int__52;
#line 145
goto label_167;
#line 145
label_159:
;
#line 146
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get((*___ref___im__0), ___nl__int__40));
#line 146
c_rt_lib0delete(array0push(&___nl__im__38, ___nl__im__53));
#line 146
c_rt_lib0clear(&___nl__im__53);
#line 147
___nl__int__54 = 1;
#line 147
___nl__int__40 = ___nl__int__40 + ___nl__int__54;
#line 147
//clear ___nl__int__54;
#line 148
goto label_167;
#line 148
label_167:
;
#line 148
//clear ___nl__bool__43;
#line 149
goto label_114;
#line 149
label_170:
;
#line 150
___nl__int__55 = c_rt_lib0array_len(___nl__im__38);
#line 150
___nl__int__56 = 0;
#line 150
___nl__int__57 = 1;
#line 150
label_174:
;
#line 150
___nl__bool__58 = ___nl__int__56 >= ___nl__int__55;
#line 150
if(___nl__bool__58){ goto label_186;}
#line 150
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_get(___nl__im__38, ___nl__int__56));
#line 150
___nl__int__61 = ___nl__int__7 + ___nl__int__56;
#line 150
c_rt_lib0copy(&___nl__im__60, ___nl__im__59);
#line 150
c_rt_lib0array_set(___ref___im__0, ___nl__int__61, ___nl__im__60);
#line 150
c_rt_lib0clear(&___nl__im__59);
#line 150
c_rt_lib0clear(&___nl__im__60);
#line 150
//clear ___nl__int__61;
#line 150
___nl__int__56 = ___nl__int__56 + ___nl__int__57;
#line 150
goto label_174;
#line 150
label_186:
;
#line 150
//clear ___nl__int__9;
#line 150
//clear ___nl__int__30;
#line 150
c_rt_lib0clear(&___nl__im__38);
#line 150
//clear ___nl__int__39;
#line 150
//clear ___nl__int__40;
#line 150
//clear ___nl__bool__42;
#line 150
//clear ___nl__int__55;
#line 150
//clear ___nl__int__56;
#line 150
//clear ___nl__int__57;
#line 150
//clear ___nl__bool__58;
#line 150
label_197:
;
#line 119
___nl__int__7 = ___nl__int__7 + ___nl__int__3;
#line 151
goto label_11;
#line 151
label_200:
;
#line 151
//clear ___nl__int__7;
#line 151
//clear ___nl__bool__8;
#line 151
//clear ___nl__int__9;
#line 151
//clear ___nl__int__30;
#line 151
c_rt_lib0clear(&___nl__im__38);
#line 151
//clear ___nl__int__39;
#line 151
//clear ___nl__int__40;
#line 151
//clear ___nl__bool__42;
#line 151
//clear ___nl__int__55;
#line 151
//clear ___nl__int__56;
#line 151
//clear ___nl__int__57;
#line 151
//clear ___nl__bool__58;
#line 118
___nl__int__62 = 2;
#line 118
___nl__int__3 = ___nl__int__3 * ___nl__int__62;
#line 118
//clear ___nl__int__62;
#line 152
goto label_2;
#line 152
label_217:
;
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
//clear ___nl__int__2;
#line 152
//clear ___nl__int__3;
#line 152
//clear ___nl__bool__4;
#line 152
//clear ___nl__int__7;
#line 152
//clear ___nl__bool__8;
#line 152
//clear ___nl__int__9;
#line 152
//clear ___nl__int__30;
#line 152
c_rt_lib0clear(&___nl__im__38);
#line 152
//clear ___nl__int__39;
#line 152
//clear ___nl__int__40;
#line 152
//clear ___nl__bool__42;
#line 152
//clear ___nl__int__55;
#line 152
//clear ___nl__int__56;
#line 152
//clear ___nl__int__57;
#line 152
//clear ___nl__bool__58;
#line 152
return NULL;
return NULL;

}

ImmT  array_priv0exec(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
array_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 156
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__1, ___nl__im__2));
#line 157
c_rt_lib0move(&___nl__im__4, c_std_lib0exec(___nl__im__0, &___nl__im__3));
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
return ___nl__im__4;
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 157
return NULL;
return NULL;

}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void array_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT array_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT array_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
