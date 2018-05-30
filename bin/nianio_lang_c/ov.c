
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "ov.h"
#include "c_rt_lib.h"
#line 1 "ov.nl"

static ImmT *__const__f = NULL;
void ov_priv0__const__init();
ImmT ov_priv0__const__sim(int __nr);
ImmT ov_priv0__const__sing(int __nr);



ImmT  ov0mk0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ov0mk");
ImmT  var0 = (_tab[0]);
return ov0mk(var0);
}
ImmT  ov0mk(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ov_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 9
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_none_new(___nl__im__0));
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
return ___nl__im__1;
#line 9
c_rt_lib0clear(&___nl__im__0);
#line 9
c_rt_lib0clear(&___nl__im__1);
#line 9
return NULL;
}

ImmT  ov0mk_val0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ov0mk_val");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return ov0mk_val(var0, var1);
}
ImmT  ov0mk_val(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ov_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 13
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_arg_new(___nl__im__0, ___nl__im__1));
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
c_rt_lib0clear(&___nl__im__1);
#line 13
return ___nl__im__2;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
c_rt_lib0clear(&___nl__im__1);
#line 13
c_rt_lib0clear(&___nl__im__2);
#line 13
return NULL;
}

ImmT  ov0has_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ov0has_value");
ImmT  var0 = (_tab[0]);
return ov0has_value(var0);
}
ImmT  ov0has_value(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ov_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 17
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_has_value(___nl__im__0));
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
return ___nl__im__1;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
return NULL;
}

ImmT  ov0get_element0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ov0get_element");
ImmT  var0 = (_tab[0]);
return ov0get_element(var0);
}
ImmT  ov0get_element(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ov_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 21
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_get_element(___nl__im__0));
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
return ___nl__im__1;
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
return NULL;
}

ImmT  ov0get_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ov0get_value");
ImmT  var0 = (_tab[0]);
return ov0get_value(var0);
}
ImmT  ov0get_value(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
ov_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_get_value(___nl__im__0));
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
return ___nl__im__1;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
return NULL;
}

bool  ov0is0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ov0is");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return ov0is(var0, var1);
}
bool  ov0is(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ov_priv0__const__init();
bool  ___nl__bool__2 = false;
#line 29
___nl__bool__2 = c_rt_lib0ov_is(___nl__im__0, ___nl__im__1);
#line 29
c_rt_lib0clear(&___nl__im__0);
#line 29
c_rt_lib0clear(&___nl__im__1);
#line 29
return ___nl__bool__2;
#line 29
c_rt_lib0clear(&___nl__im__0);
#line 29
c_rt_lib0clear(&___nl__im__1);
#line 29
//clear ___nl__bool__2;
#line 29
return false;
}

ImmT  ov0as0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ov0as");
ImmT  var0 = (_tab[0]);
ImmT  var1 = (_tab[1]);
return ov0as(var0, var1);
}
ImmT  ov0as(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
ov_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 33
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_as(___nl__im__0, ___nl__im__1));
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
return ___nl__im__2;
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
c_rt_lib0clear(&___nl__im__2);
#line 33
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ov_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT ov_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ov_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
