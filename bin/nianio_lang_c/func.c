
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "func.h"
#include "c_std_lib.h"
#include "ptd.h"
#include "array.h"
#line 1 "func.nl"

static ImmT *__const__f = NULL;
void func_priv0__const__init();
ImmT func_priv0__const__sim(int __nr);
ImmT func_priv0__const__sing(int __nr);



ImmT  func0func_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "func0func_t");
ImmT  res = func0func_t();
return res;
}
ImmT func0func_t(){
func_priv0__const__init();
return func_priv0__const__sing(0);
}
ImmT func0func_t0cal() {
func_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 13
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 14
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 14
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(150), ___nl__im__4, ___get_global_string_const(166), ___nl__im__5));
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__3));
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(1, ___get_global_string_const(39), ___nl__im__2));
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
return ___nl__im__0;
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
return NULL;
return NULL;

}

ImmT  func0exec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "func0exec");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = func0exec(*var0, *var1);
return res;
}
ImmT  func0exec(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
func_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 20
c_rt_lib0move(&___nl__im__2, c_std_lib0exec(___nl__im__0, &___nl__im__1));
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
return ___nl__im__2;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
return NULL;
return NULL;

}

ImmT  func0exec_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "func0exec_ref");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = func0exec_ref(*var0, var1);
return res;
}
ImmT  func0exec_ref(ImmT  ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
func_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 24
c_rt_lib0move(&___nl__im__2, c_std_lib0exec(___nl__im__0, ___ref___im__1));
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
return ___nl__im__2;
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
return NULL;
return NULL;

}

ImmT  func0exec_with_ref_arg0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "func0exec_with_ref_arg");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
ImmT  res = func0exec_with_ref_arg(*var0, *var1, var2);
return res;
}
ImmT  func0exec_with_ref_arg(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
func_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
#line 28
c_rt_lib0delete(array0push(&___nl__im__1, (*___ref___im__2)));
#line 29
c_rt_lib0move(___ref___im__2,___get_global_int_const(0));
#line 30
c_rt_lib0move(&___nl__im__3, func0exec_ref(___nl__im__0, &___nl__im__1));
#line 31
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 31
___nl__int__6 = 1;
#line 31
___nl__int__4 = ___nl__int__5 - ___nl__int__6;
#line 31
//clear ___nl__int__5;
#line 31
//clear ___nl__int__6;
#line 31
c_rt_lib0move(___ref___im__2, c_rt_lib0array_get(___nl__im__1, ___nl__int__4));
#line 31
//clear ___nl__int__4;
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
return ___nl__im__3;
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
return NULL;
return NULL;

}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void func_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT func_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT func_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = func0func_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
