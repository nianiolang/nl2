
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
ImmT  array_priv0part_sort(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3);


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
return array0reverse(var0);
}
ImmT  array0reverse(ImmT * ___ref___im__0) {
array_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
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
___nl__int__6 = ___nl__int__3 >= ___nl__int__2;
#line 14
___nl__bool__5 = ___nl__int__6;
#line 14
if(___nl__bool__5){ goto label_21;}
#line 15
___nl__int__10 = c_rt_lib0array_len((*___ref___im__0));
#line 15
___nl__int__9 = ___nl__int__10 - ___nl__int__3;
#line 15
//clear ___nl__int__10;
#line 15
___nl__int__11 = 1;
#line 15
___nl__int__8 = ___nl__int__9 - ___nl__int__11;
#line 15
//clear ___nl__int__9;
#line 15
//clear ___nl__int__11;
#line 15
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get((*___ref___im__0), ___nl__int__8));
#line 15
//clear ___nl__int__8;
#line 15
c_rt_lib0array_push(&___nl__im__1, ___nl__im__7);
#line 15
c_rt_lib0clear(&___nl__im__7);
#line 16
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 16
goto label_4;
#line 16
label_21:
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
//clear ___nl__int__6;
#line 17
return NULL;
return NULL;

}

ImmT  array0join0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0join");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return array0join(*var0, *var1);
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
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
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
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 23
___nl__bool__8 = ___nl__int__9;
#line 23
if(___nl__bool__8){ goto label_24;}
#line 23
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 23
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 24
___nl__bool__11 = ___nl__bool__3;
#line 24
___nl__bool__11 = !___nl__bool__11;
#line 24
___nl__bool__11 = !___nl__bool__11;
#line 24
if(___nl__bool__11){ goto label_17;}
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 24
goto label_17;
#line 24
label_17:
;
#line 24
//clear ___nl__bool__11;
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
label_24:
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
//clear ___nl__int__9;
#line 28
c_rt_lib0clear(&___nl__im__10);
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
//clear ___nl__int__9;
#line 28
c_rt_lib0clear(&___nl__im__10);
#line 28
return NULL;
return NULL;

}

ImmT  array0remove(ImmT * ___ref___im__0,INT  ___nl__int__1) {
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
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
___nl__int__8 = ___nl__int__4 < ___nl__int__7;
#line 33
___nl__bool__6 = ___nl__int__8;
#line 33
//clear ___nl__int__7;
#line 33
//clear ___nl__int__8;
#line 33
___nl__bool__6 = !___nl__bool__6;
#line 33
if(___nl__bool__6){ goto label_21;}
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get((*___ref___im__0), ___nl__int__4));
#line 34
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__9));
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 33
___nl__int__10 = 1;
#line 33
___nl__int__4 = ___nl__int__4 + ___nl__int__10;
#line 33
//clear ___nl__int__10;
#line 35
goto label_6;
#line 35
label_21:
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

ImmT  array0insert(ImmT * ___ref___im__0,INT  ___nl__int__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
array_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
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
___nl__int__9 = ___nl__int__8 < ___nl__int__7;
#line 42
___nl__bool__6 = ___nl__int__9;
#line 42
//clear ___nl__int__7;
#line 42
//clear ___nl__int__8;
#line 42
//clear ___nl__int__9;
#line 42
___nl__bool__6 = !___nl__bool__6;
#line 42
if(___nl__bool__6){ goto label_28;}
#line 43
___nl__int__11 = getIntFromImm(___nl__im__5);
#line 43
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get((*___ref___im__0), ___nl__int__11));
#line 43
//clear ___nl__int__11;
#line 43
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__10));
#line 43
c_rt_lib0clear(&___nl__im__10);
#line 42
___nl__int__12 = 1;
#line 42
___nl__int__13 = getIntFromImm(___nl__im__5);
#line 42
___nl__int__14 = ___nl__int__13 + ___nl__int__12;
#line 42
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__14));
#line 42
//clear ___nl__int__12;
#line 42
//clear ___nl__int__13;
#line 42
//clear ___nl__int__14;
#line 44
goto label_5;
#line 44
label_28:
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
return array0push(var0, *var1);
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
return array0add(*var0, *var1);
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
return array0unshift(var0, *var1);
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
return array0shift(var0);
}
ImmT  array0shift(ImmT * ___ref___im__0) {
array_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
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
___nl__int__5 = ___nl__int__2 < ___nl__int__4;
#line 66
___nl__bool__3 = ___nl__int__5;
#line 66
//clear ___nl__int__4;
#line 66
//clear ___nl__int__5;
#line 66
___nl__bool__3 = !___nl__bool__3;
#line 66
if(___nl__bool__3){ goto label_17;}
#line 67
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_get((*___ref___im__0), ___nl__int__2));
#line 67
c_rt_lib0array_push(&___nl__im__1, ___nl__im__6);
#line 67
c_rt_lib0clear(&___nl__im__6);
#line 66
___nl__int__7 = 1;
#line 66
___nl__int__2 = ___nl__int__2 + ___nl__int__7;
#line 66
//clear ___nl__int__7;
#line 68
goto label_2;
#line 68
label_17:
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
return array0pop(var0);
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
return array0append(var0, *var1);
}
ImmT  array0append(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
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
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 77
___nl__bool__6 = ___nl__int__7;
#line 77
if(___nl__bool__6){ goto label_13;}
#line 77
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 77
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 78
c_rt_lib0delete(array0push(___ref___im__0, ___nl__im__2));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 79
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 79
goto label_3;
#line 79
label_13:
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
//clear ___nl__int__7;
#line 79
c_rt_lib0clear(&___nl__im__8);
#line 79
return NULL;

}

ImmT  array0join_arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0join_arr");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return array0join_arr(*var0, *var1);
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

INT  array0len0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0len");
ImmT  *var0 = &(_tab[0]);
return array0len(*var0);
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
return array0is_empty(*var0);
}
ImmT  array0is_empty(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
array_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
#line 93
___nl__int__2 = c_rt_lib0array_len(___nl__im__0);
#line 93
___nl__int__3 = 0;
#line 93
___nl__int__4 = ___nl__int__2 == ___nl__int__3;
#line 93
___nl__bool__1 = ___nl__int__4;
#line 93
//clear ___nl__int__2;
#line 93
//clear ___nl__int__3;
#line 93
//clear ___nl__int__4;
#line 93
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
//clear ___nl__bool__1;
#line 93
return ___nl__im__5;
#line 93
c_rt_lib0clear(&___nl__im__0);
#line 93
//clear ___nl__bool__1;
#line 93
c_rt_lib0clear(&___nl__im__5);
#line 93
return NULL;
return NULL;

}

ImmT  array0cmp0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0cmp");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return array0cmp(*var0, *var1);
}
ImmT  array0cmp(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
#line 97
___nl__int__3 = c_std_lib0string_compare(___nl__im__0, ___nl__im__1);
#line 97
___nl__int__4 = 0;
#line 97
___nl__int__5 = ___nl__int__3 < ___nl__int__4;
#line 97
___nl__bool__2 = ___nl__int__5;
#line 97
//clear ___nl__int__3;
#line 97
//clear ___nl__int__4;
#line 97
//clear ___nl__int__5;
#line 97
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__bool__2;
#line 97
return ___nl__im__6;
#line 97
c_rt_lib0clear(&___nl__im__0);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__bool__2;
#line 97
c_rt_lib0clear(&___nl__im__6);
#line 97
return NULL;
return NULL;

}

ImmT  array0sort0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "array0sort");
ImmT  *var0 = &(_tab[0]);
return array0sort(var0);
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
return array0sort_comparator(var0, *var1);
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

bool  array0equal0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "array0equal");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return array0equal(*var0, *var1);
}
bool  array0equal(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
#line 109
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 109
___nl__int__4 = c_rt_lib0array_len(___nl__im__1);
#line 109
___nl__int__5 = ___nl__int__3 == ___nl__int__4;
#line 109
___nl__bool__2 = ___nl__int__5;
#line 109
//clear ___nl__int__3;
#line 109
//clear ___nl__int__4;
#line 109
//clear ___nl__int__5;
#line 109
___nl__bool__2 = !___nl__bool__2;
#line 109
___nl__bool__2 = !___nl__bool__2;
#line 109
if(___nl__bool__2){ goto label_16;}
#line 109
___nl__bool__6 = false;
#line 109
c_rt_lib0clear(&___nl__im__0);
#line 109
c_rt_lib0clear(&___nl__im__1);
#line 109
//clear ___nl__bool__2;
#line 109
return ___nl__bool__6;
#line 109
goto label_16;
#line 109
label_16:
;
#line 109
//clear ___nl__bool__2;
#line 109
//clear ___nl__bool__6;
#line 110
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 110
___nl__int__8 = 0;
#line 110
___nl__int__9 = 1;
#line 110
label_22:
;
#line 110
___nl__int__11 = ___nl__int__8 >= ___nl__int__7;
#line 110
___nl__bool__10 = ___nl__int__11;
#line 110
if(___nl__bool__10){ goto label_56;}
#line 111
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 111
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__1, ___nl__int__8));
#line 111
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 111
___nl__int__16 = getIntFromImm(___nl__im__14);
#line 111
___nl__int__17 = ___nl__int__15 == ___nl__int__16;
#line 111
___nl__bool__12 = ___nl__int__17;
#line 111
c_rt_lib0clear(&___nl__im__13);
#line 111
c_rt_lib0clear(&___nl__im__14);
#line 111
//clear ___nl__int__15;
#line 111
//clear ___nl__int__16;
#line 111
//clear ___nl__int__17;
#line 111
___nl__bool__12 = !___nl__bool__12;
#line 111
___nl__bool__12 = !___nl__bool__12;
#line 111
if(___nl__bool__12){ goto label_51;}
#line 111
___nl__bool__18 = false;
#line 111
c_rt_lib0clear(&___nl__im__0);
#line 111
c_rt_lib0clear(&___nl__im__1);
#line 111
//clear ___nl__int__7;
#line 111
//clear ___nl__int__8;
#line 111
//clear ___nl__int__9;
#line 111
//clear ___nl__bool__10;
#line 111
//clear ___nl__int__11;
#line 111
//clear ___nl__bool__12;
#line 111
return ___nl__bool__18;
#line 111
goto label_51;
#line 111
label_51:
;
#line 111
//clear ___nl__bool__12;
#line 111
//clear ___nl__bool__18;
#line 112
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 112
goto label_22;
#line 112
label_56:
;
#line 113
___nl__bool__19 = true;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
//clear ___nl__int__7;
#line 113
//clear ___nl__int__8;
#line 113
//clear ___nl__int__9;
#line 113
//clear ___nl__bool__10;
#line 113
//clear ___nl__int__11;
#line 113
return ___nl__bool__19;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
//clear ___nl__int__7;
#line 113
//clear ___nl__int__8;
#line 113
//clear ___nl__int__9;
#line 113
//clear ___nl__bool__10;
#line 113
//clear ___nl__int__11;
#line 113
//clear ___nl__bool__19;
#line 113
return false;
return false;

}

ImmT  array_priv0sort(ImmT * ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
array_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 117
___nl__int__2 = 0;
#line 117
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 117
___nl__int__5 = c_rt_lib0array_len((*___ref___im__0));
#line 117
___nl__int__6 = 1;
#line 117
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 117
//clear ___nl__int__5;
#line 117
//clear ___nl__int__6;
#line 117
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__4));
#line 117
c_rt_lib0delete(array_priv0part_sort(___ref___im__0, ___nl__im__3, ___nl__im__7, ___nl__im__1));
#line 117
//clear ___nl__int__2;
#line 117
c_rt_lib0clear(&___nl__im__3);
#line 117
//clear ___nl__int__4;
#line 117
c_rt_lib0clear(&___nl__im__7);
#line 117
c_rt_lib0clear(&___nl__im__1);
#line 117
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
#line 121
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__1, ___nl__im__2));
#line 122
c_rt_lib0move(&___nl__im__4, c_std_lib0exec(___nl__im__0, &___nl__im__3));
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
c_rt_lib0clear(&___nl__im__1);
#line 122
c_rt_lib0clear(&___nl__im__2);
#line 122
c_rt_lib0clear(&___nl__im__3);
#line 122
return ___nl__im__4;
#line 122
c_rt_lib0clear(&___nl__im__0);
#line 122
c_rt_lib0clear(&___nl__im__1);
#line 122
c_rt_lib0clear(&___nl__im__2);
#line 122
c_rt_lib0clear(&___nl__im__3);
#line 122
c_rt_lib0clear(&___nl__im__4);
#line 122
return NULL;
return NULL;

}

ImmT  array_priv0part_sort(ImmT * ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
array_priv0__const__init();
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
bool  ___nl__bool__55 = false;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
INT  ___nl__int__59 = 0;
bool  ___nl__bool__60 = false;
INT  ___nl__int__61 = 0;
INT  ___nl__int__62 = 0;
ImmT  ___nl__im__63 = NULL;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
INT  ___nl__int__66 = 0;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
ImmT  ___nl__im__72 = NULL;
INT  ___nl__int__73 = 0;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
INT  ___nl__int__86 = 0;
INT  ___nl__int__87 = 0;
INT  ___nl__int__88 = 0;
INT  ___nl__int__89 = 0;
bool  ___nl__bool__90 = false;
INT  ___nl__int__91 = 0;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
INT  ___nl__int__94 = 0;
INT  ___nl__int__95 = 0;
#line 126
___nl__int__6 = getIntFromImm(___nl__im__2);
#line 126
___nl__int__7 = getIntFromImm(___nl__im__1);
#line 126
___nl__int__5 = ___nl__int__6 - ___nl__int__7;
#line 126
//clear ___nl__int__6;
#line 126
//clear ___nl__int__7;
#line 126
___nl__int__8 = 0;
#line 126
___nl__int__9 = ___nl__int__5 <= ___nl__int__8;
#line 126
___nl__bool__4 = ___nl__int__9;
#line 126
//clear ___nl__int__5;
#line 126
//clear ___nl__int__8;
#line 126
//clear ___nl__int__9;
#line 126
___nl__bool__4 = !___nl__bool__4;
#line 126
if(___nl__bool__4){ goto label_19;}
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
//clear ___nl__bool__4;
#line 126
return NULL;
#line 126
goto label_19;
#line 126
label_19:
;
#line 126
//clear ___nl__bool__4;
#line 127
___nl__int__12 = getIntFromImm(___nl__im__2);
#line 127
___nl__int__13 = getIntFromImm(___nl__im__1);
#line 127
___nl__int__11 = ___nl__int__12 - ___nl__int__13;
#line 127
//clear ___nl__int__12;
#line 127
//clear ___nl__int__13;
#line 127
___nl__int__14 = 1;
#line 127
___nl__int__15 = ___nl__int__11 == ___nl__int__14;
#line 127
___nl__bool__10 = ___nl__int__15;
#line 127
//clear ___nl__int__11;
#line 127
//clear ___nl__int__14;
#line 127
//clear ___nl__int__15;
#line 127
___nl__bool__10 = !___nl__bool__10;
#line 127
if(___nl__bool__10){ goto label_80;}
#line 128
___nl__int__18 = getIntFromImm(___nl__im__1);
#line 128
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get((*___ref___im__0), ___nl__int__18));
#line 128
//clear ___nl__int__18;
#line 128
___nl__int__20 = getIntFromImm(___nl__im__2);
#line 128
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get((*___ref___im__0), ___nl__int__20));
#line 128
//clear ___nl__int__20;
#line 128
c_rt_lib0move(&___nl__im__21, array_priv0exec(___nl__im__3, ___nl__im__17, ___nl__im__19));
#line 128
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__21);
#line 128
c_rt_lib0clear(&___nl__im__17);
#line 128
c_rt_lib0clear(&___nl__im__19);
#line 128
c_rt_lib0clear(&___nl__im__21);
#line 128
___nl__bool__16 = !___nl__bool__16;
#line 128
if(___nl__bool__16){ goto label_54;}
#line 128
c_rt_lib0clear(&___nl__im__1);
#line 128
c_rt_lib0clear(&___nl__im__2);
#line 128
c_rt_lib0clear(&___nl__im__3);
#line 128
//clear ___nl__bool__10;
#line 128
//clear ___nl__bool__16;
#line 128
return NULL;
#line 128
goto label_54;
#line 128
label_54:
;
#line 128
//clear ___nl__bool__16;
#line 129
___nl__int__23 = getIntFromImm(___nl__im__1);
#line 129
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get((*___ref___im__0), ___nl__int__23));
#line 129
//clear ___nl__int__23;
#line 130
___nl__int__25 = getIntFromImm(___nl__im__2);
#line 130
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get((*___ref___im__0), ___nl__int__25));
#line 130
//clear ___nl__int__25;
#line 130
___nl__int__27 = getIntFromImm(___nl__im__1);
#line 130
c_rt_lib0copy(&___nl__im__26, ___nl__im__24);
#line 130
c_rt_lib0array_set(___ref___im__0, ___nl__int__27, ___nl__im__26);
#line 130
c_rt_lib0clear(&___nl__im__24);
#line 130
c_rt_lib0clear(&___nl__im__26);
#line 130
//clear ___nl__int__27;
#line 131
___nl__int__29 = getIntFromImm(___nl__im__2);
#line 131
c_rt_lib0copy(&___nl__im__28, ___nl__im__22);
#line 131
c_rt_lib0array_set(___ref___im__0, ___nl__int__29, ___nl__im__28);
#line 131
c_rt_lib0clear(&___nl__im__28);
#line 131
//clear ___nl__int__29;
#line 132
c_rt_lib0clear(&___nl__im__1);
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
c_rt_lib0clear(&___nl__im__3);
#line 132
//clear ___nl__bool__10;
#line 132
c_rt_lib0clear(&___nl__im__22);
#line 132
return NULL;
#line 133
goto label_80;
#line 133
label_80:
;
#line 133
//clear ___nl__bool__10;
#line 133
c_rt_lib0clear(&___nl__im__22);
#line 134
___nl__int__35 = getIntFromImm(___nl__im__2);
#line 134
___nl__int__36 = getIntFromImm(___nl__im__1);
#line 134
___nl__int__34 = ___nl__int__35 - ___nl__int__36;
#line 134
//clear ___nl__int__35;
#line 134
//clear ___nl__int__36;
#line 134
___nl__int__37 = 1;
#line 134
___nl__int__33 = ___nl__int__34 + ___nl__int__37;
#line 134
//clear ___nl__int__34;
#line 134
//clear ___nl__int__37;
#line 134
___nl__int__41 = getIntFromImm(___nl__im__2);
#line 134
___nl__int__42 = getIntFromImm(___nl__im__1);
#line 134
___nl__int__40 = ___nl__int__41 - ___nl__int__42;
#line 134
//clear ___nl__int__41;
#line 134
//clear ___nl__int__42;
#line 134
___nl__int__43 = 1;
#line 134
___nl__int__39 = ___nl__int__40 + ___nl__int__43;
#line 134
//clear ___nl__int__40;
#line 134
//clear ___nl__int__43;
#line 134
___nl__int__44 = 2;
#line 134
___nl__int__38 = ___nl__int__39 % ___nl__int__44;
#line 134
//clear ___nl__int__39;
#line 134
//clear ___nl__int__44;
#line 134
___nl__int__32 = ___nl__int__33 - ___nl__int__38;
#line 134
//clear ___nl__int__33;
#line 134
//clear ___nl__int__38;
#line 134
___nl__int__45 = 2;
#line 134
___nl__int__31 = ___nl__int__32 / ___nl__int__45;
#line 134
//clear ___nl__int__32;
#line 134
//clear ___nl__int__45;
#line 134
___nl__int__46 = getIntFromImm(___nl__im__1);
#line 134
___nl__int__30 = ___nl__int__46 + ___nl__int__31;
#line 134
//clear ___nl__int__31;
#line 134
//clear ___nl__int__46;
#line 135
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__30));
#line 135
c_rt_lib0delete(array_priv0part_sort(___ref___im__0, ___nl__im__1, ___nl__im__47, ___nl__im__3));
#line 135
c_rt_lib0clear(&___nl__im__47);
#line 136
___nl__int__49 = 1;
#line 136
___nl__int__48 = ___nl__int__30 + ___nl__int__49;
#line 136
//clear ___nl__int__49;
#line 136
c_rt_lib0move(&___nl__im__50, c_rt_lib0int_new(___nl__int__48));
#line 136
c_rt_lib0delete(array_priv0part_sort(___ref___im__0, ___nl__im__50, ___nl__im__2, ___nl__im__3));
#line 136
//clear ___nl__int__48;
#line 136
c_rt_lib0clear(&___nl__im__50);
#line 137
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(0));
#line 138
c_rt_lib0copy(&___nl__im__52, ___nl__im__1);
#line 139
___nl__int__54 = 1;
#line 139
___nl__int__53 = ___nl__int__30 + ___nl__int__54;
#line 139
//clear ___nl__int__54;
#line 140
label_131:
;
#line 140
___nl__int__56 = getIntFromImm(___nl__im__52);
#line 140
___nl__int__57 = ___nl__int__56 <= ___nl__int__30;
#line 140
___nl__bool__55 = ___nl__int__57;
#line 140
//clear ___nl__int__56;
#line 140
//clear ___nl__int__57;
#line 140
if(___nl__bool__55){ goto label_143;}
#line 140
___nl__int__58 = getIntFromImm(___nl__im__2);
#line 140
___nl__int__59 = ___nl__int__53 <= ___nl__int__58;
#line 140
___nl__bool__55 = ___nl__int__59;
#line 140
//clear ___nl__int__58;
#line 140
//clear ___nl__int__59;
#line 140
label_143:
;
#line 140
___nl__bool__55 = !___nl__bool__55;
#line 140
if(___nl__bool__55){ goto label_217;}
#line 141
___nl__int__61 = getIntFromImm(___nl__im__52);
#line 141
___nl__int__62 = ___nl__int__61 > ___nl__int__30;
#line 141
___nl__bool__60 = ___nl__int__62;
#line 141
//clear ___nl__int__61;
#line 141
//clear ___nl__int__62;
#line 141
___nl__bool__60 = !___nl__bool__60;
#line 141
if(___nl__bool__60){ goto label_160;}
#line 142
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_get((*___ref___im__0), ___nl__int__53));
#line 142
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__63));
#line 142
c_rt_lib0clear(&___nl__im__63);
#line 143
___nl__int__64 = 1;
#line 143
___nl__int__53 = ___nl__int__53 + ___nl__int__64;
#line 143
//clear ___nl__int__64;
#line 144
goto label_214;
#line 144
label_160:
;
#line 144
___nl__int__65 = getIntFromImm(___nl__im__2);
#line 144
___nl__int__66 = ___nl__int__53 > ___nl__int__65;
#line 144
___nl__bool__60 = ___nl__int__66;
#line 144
//clear ___nl__int__65;
#line 144
//clear ___nl__int__66;
#line 144
___nl__bool__60 = !___nl__bool__60;
#line 144
if(___nl__bool__60){ goto label_181;}
#line 145
___nl__int__68 = getIntFromImm(___nl__im__52);
#line 145
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get((*___ref___im__0), ___nl__int__68));
#line 145
//clear ___nl__int__68;
#line 145
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__67));
#line 145
c_rt_lib0clear(&___nl__im__67);
#line 146
___nl__int__69 = 1;
#line 146
___nl__int__70 = getIntFromImm(___nl__im__52);
#line 146
___nl__int__71 = ___nl__int__70 + ___nl__int__69;
#line 146
c_rt_lib0move(&___nl__im__52, c_rt_lib0int_new(___nl__int__71));
#line 146
//clear ___nl__int__69;
#line 146
//clear ___nl__int__70;
#line 146
//clear ___nl__int__71;
#line 147
goto label_214;
#line 147
label_181:
;
#line 147
___nl__int__73 = getIntFromImm(___nl__im__52);
#line 147
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get((*___ref___im__0), ___nl__int__73));
#line 147
//clear ___nl__int__73;
#line 147
c_rt_lib0move(&___nl__im__74, c_rt_lib0array_get((*___ref___im__0), ___nl__int__53));
#line 147
c_rt_lib0move(&___nl__im__75, array_priv0exec(___nl__im__3, ___nl__im__72, ___nl__im__74));
#line 147
___nl__bool__60 = c_rt_lib0check_true_native(___nl__im__75);
#line 147
c_rt_lib0clear(&___nl__im__72);
#line 147
c_rt_lib0clear(&___nl__im__74);
#line 147
c_rt_lib0clear(&___nl__im__75);
#line 147
___nl__bool__60 = !___nl__bool__60;
#line 147
if(___nl__bool__60){ goto label_206;}
#line 148
___nl__int__77 = getIntFromImm(___nl__im__52);
#line 148
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get((*___ref___im__0), ___nl__int__77));
#line 148
//clear ___nl__int__77;
#line 148
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__76));
#line 148
c_rt_lib0clear(&___nl__im__76);
#line 149
___nl__int__78 = 1;
#line 149
___nl__int__79 = getIntFromImm(___nl__im__52);
#line 149
___nl__int__80 = ___nl__int__79 + ___nl__int__78;
#line 149
c_rt_lib0move(&___nl__im__52, c_rt_lib0int_new(___nl__int__80));
#line 149
//clear ___nl__int__78;
#line 149
//clear ___nl__int__79;
#line 149
//clear ___nl__int__80;
#line 150
goto label_214;
#line 150
label_206:
;
#line 151
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_get((*___ref___im__0), ___nl__int__53));
#line 151
c_rt_lib0delete(array0push(&___nl__im__51, ___nl__im__81));
#line 151
c_rt_lib0clear(&___nl__im__81);
#line 152
___nl__int__82 = 1;
#line 152
___nl__int__53 = ___nl__int__53 + ___nl__int__82;
#line 152
//clear ___nl__int__82;
#line 153
goto label_214;
#line 153
label_214:
;
#line 153
//clear ___nl__bool__60;
#line 154
goto label_131;
#line 154
label_217:
;
#line 155
___nl__int__85 = getIntFromImm(___nl__im__2);
#line 155
___nl__int__86 = getIntFromImm(___nl__im__1);
#line 155
___nl__int__84 = ___nl__int__85 - ___nl__int__86;
#line 155
//clear ___nl__int__85;
#line 155
//clear ___nl__int__86;
#line 155
___nl__int__87 = 1;
#line 155
___nl__int__83 = ___nl__int__84 + ___nl__int__87;
#line 155
//clear ___nl__int__84;
#line 155
//clear ___nl__int__87;
#line 155
___nl__int__88 = 0;
#line 155
___nl__int__89 = 1;
#line 155
label_229:
;
#line 155
___nl__int__91 = ___nl__int__88 >= ___nl__int__83;
#line 155
___nl__bool__90 = ___nl__int__91;
#line 155
if(___nl__bool__90){ goto label_244;}
#line 155
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_get(___nl__im__51, ___nl__int__88));
#line 155
___nl__int__95 = getIntFromImm(___nl__im__1);
#line 155
___nl__int__94 = ___nl__int__95 + ___nl__int__88;
#line 155
//clear ___nl__int__95;
#line 155
c_rt_lib0copy(&___nl__im__93, ___nl__im__92);
#line 155
c_rt_lib0array_set(___ref___im__0, ___nl__int__94, ___nl__im__93);
#line 155
c_rt_lib0clear(&___nl__im__92);
#line 155
c_rt_lib0clear(&___nl__im__93);
#line 155
//clear ___nl__int__94;
#line 155
___nl__int__88 = ___nl__int__88 + ___nl__int__89;
#line 155
goto label_229;
#line 155
label_244:
;
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
//clear ___nl__int__30;
#line 155
c_rt_lib0clear(&___nl__im__51);
#line 155
c_rt_lib0clear(&___nl__im__52);
#line 155
//clear ___nl__int__53;
#line 155
//clear ___nl__bool__55;
#line 155
//clear ___nl__int__83;
#line 155
//clear ___nl__int__88;
#line 155
//clear ___nl__int__89;
#line 155
//clear ___nl__bool__90;
#line 155
//clear ___nl__int__91;
#line 155
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
