
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "compiler_lib.h"
#include "ptd.h"
#include "compiler_lib.h"
#line 1 "compiler_lib.nl"

static ImmT *__const__f = NULL;
void compiler_lib_priv0__const__init();
ImmT compiler_lib_priv0__const__sim(int __nr);
ImmT compiler_lib_priv0__const__sing(int __nr);



ImmT  compiler_lib0error_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0error_type_t");
return compiler_lib0error_type_t();
}
ImmT  compiler_lib0error_type_t() {
compiler_lib_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 6
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 7
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 7
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(125), ___nl__im__2, ___get_global_const(203), ___nl__im__3));
#line 7
c_rt_lib0clear(&___nl__im__2);
#line 7
c_rt_lib0clear(&___nl__im__3);
#line 7
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 7
c_rt_lib0clear(&___nl__im__1);
#line 7
return ___nl__im__0;
#line 7
c_rt_lib0clear(&___nl__im__0);
#line 7
return NULL;
}

ImmT  compiler_lib0error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0error_t");
return compiler_lib0error_t();
}
ImmT  compiler_lib0error_t() {
compiler_lib_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 13
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 14
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 15
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 16
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 17
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(compiler_lib0error_type_t0ptr, ___get_global_const(53), ___get_global_const(204)));
#line 17
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 17
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(154), ___nl__im__2, ___get_global_const(205), ___nl__im__3, ___get_global_const(157), ___nl__im__4, ___get_global_const(152), ___nl__im__5, ___get_global_const(95), ___nl__im__6));
#line 17
c_rt_lib0clear(&___nl__im__2);
#line 17
c_rt_lib0clear(&___nl__im__3);
#line 17
c_rt_lib0clear(&___nl__im__4);
#line 17
c_rt_lib0clear(&___nl__im__5);
#line 17
c_rt_lib0clear(&___nl__im__6);
#line 17
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
return ___nl__im__0;
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
return NULL;
}

ImmT  compiler_lib0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0errors_t");
return compiler_lib0errors_t();
}
ImmT  compiler_lib0errors_t() {
compiler_lib_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 22
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(53), ___get_global_const(54)));
#line 22
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 22
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
return ___nl__im__0;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void compiler_lib_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT compiler_lib_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT compiler_lib_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
