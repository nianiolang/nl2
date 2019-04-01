
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "float.h"
#include "ptd.h"
#include "c_rt_lib.h"
#line 1 "float.nl"

static ImmT *__const__f = NULL;
void float_priv0__const__init();
ImmT float_priv0__const__sim(int __nr);
ImmT float_priv0__const__sing(int __nr);



ImmT  float0add0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "float0add");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = float0add(*var0, *var1);
return res;
}
ImmT  float0add(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
float_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 10
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 10
c_rt_lib0move(&___nl__im__4, c_rt_lib0str_float_add(___nl__im__0, ___nl__im__1));
#line 10
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__4));
#line 10
c_rt_lib0clear(&___nl__im__3);
#line 10
c_rt_lib0clear(&___nl__im__4);
#line 10
c_rt_lib0clear(&___nl__im__0);
#line 10
c_rt_lib0clear(&___nl__im__1);
#line 10
return ___nl__im__2;
return NULL;

}

ImmT  float0mul0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "float0mul");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = float0mul(*var0, *var1);
return res;
}
ImmT  float0mul(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
float_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 14
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 14
c_rt_lib0move(&___nl__im__4, c_rt_lib0str_float_mul(___nl__im__0, ___nl__im__1));
#line 14
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__4));
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
return ___nl__im__2;
return NULL;

}

ImmT  float0sub0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "float0sub");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = float0sub(*var0, *var1);
return res;
}
ImmT  float0sub(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
float_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 18
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 18
c_rt_lib0move(&___nl__im__4, c_rt_lib0str_float_sub(___nl__im__0, ___nl__im__1));
#line 18
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__4));
#line 18
c_rt_lib0clear(&___nl__im__3);
#line 18
c_rt_lib0clear(&___nl__im__4);
#line 18
c_rt_lib0clear(&___nl__im__0);
#line 18
c_rt_lib0clear(&___nl__im__1);
#line 18
return ___nl__im__2;
return NULL;

}

ImmT  float0div0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "float0div");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = float0div(*var0, *var1);
return res;
}
ImmT  float0div(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
float_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 22
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 22
c_rt_lib0move(&___nl__im__4, c_rt_lib0str_float_div(___nl__im__0, ___nl__im__1));
#line 22
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__4));
#line 22
c_rt_lib0clear(&___nl__im__3);
#line 22
c_rt_lib0clear(&___nl__im__4);
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
return ___nl__im__2;
return NULL;

}

ImmT  float0mod0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "float0mod");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = float0mod(*var0, *var1);
return res;
}
ImmT  float0mod(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
float_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 26
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 26
c_rt_lib0move(&___nl__im__4, c_rt_lib0str_float_mod(___nl__im__0, ___nl__im__1));
#line 26
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__4));
#line 26
c_rt_lib0clear(&___nl__im__3);
#line 26
c_rt_lib0clear(&___nl__im__4);
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
return ___nl__im__2;
return NULL;

}

ImmT  float0round0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "float0round");
ImmT  *var0 = &(_tab[0]);
ImmT  res = float0round(*var0);
return res;
}
ImmT  float0round(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
float_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 30
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 30
c_rt_lib0move(&___nl__im__3, c_rt_lib0float_round(___nl__im__0));
#line 30
c_rt_lib0move(&___nl__im__1, ptd0ensure(___nl__im__2, ___nl__im__3));
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
return ___nl__im__1;
return NULL;

}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void float_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT float_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT float_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
