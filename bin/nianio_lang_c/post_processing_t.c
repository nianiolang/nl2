
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "post_processing_t.h"
#include "ptd.h"
#include "nlasm.h"
#include "interpreter.h"
#include "interpreter.h"
#include "post_processing_t.h"
#include "nlasm.h"
#line 1 "post_processing_t.nl"

static ImmT *__const__f = NULL;
void post_processing_t_priv0__const__init();
ImmT post_processing_t_priv0__const__sim(int __nr);
ImmT post_processing_t_priv0__const__sing(int __nr);



ImmT  post_processing_t0fun_tree_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0fun_tree_t");
return post_processing_t0fun_tree_t();
}
ImmT  post_processing_t0fun_tree_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 11
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 11
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 11
c_rt_lib0clear(&___nl__im__4);
#line 11
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 11
c_rt_lib0clear(&___nl__im__3);
#line 11
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__2));
#line 11
c_rt_lib0clear(&___nl__im__2);
#line 11
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 11
c_rt_lib0clear(&___nl__im__1);
#line 11
return ___nl__im__0;
#line 11
c_rt_lib0clear(&___nl__im__0);
#line 11
return NULL;
return NULL;
}

ImmT  post_processing_t0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0state_t");
return post_processing_t0state_t();
}
ImmT  post_processing_t0state_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
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
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0result_t0ptr, ___get_global_const(330), ___get_global_const(1160)));
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 16
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 17
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 17
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 17
c_rt_lib0clear(&___nl__im__5);
#line 18
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(post_processing_t0math_funs_t0ptr, ___get_global_const(1161), ___get_global_const(1162)));
#line 18
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 19
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(post_processing_t0fun_tree_t0ptr, ___get_global_const(1161), ___get_global_const(1163)));
#line 19
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 20
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(post_processing_t0math_funs_t0ptr, ___get_global_const(1161), ___get_global_const(1162)));
#line 20
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 21
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(post_processing_t0optimization_t0ptr, ___get_global_const(1161), ___get_global_const(1164)));
#line 21
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 22
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(interpreter0state_t0ptr, ___get_global_const(778), ___get_global_const(1069)));
#line 22
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 22
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(7, ___get_global_const(206), ___nl__im__2, ___get_global_const(1158), ___nl__im__4, ___get_global_const(1157), ___nl__im__6, ___get_global_const(1156), ___nl__im__7, ___get_global_const(1159), ___nl__im__8, ___get_global_const(96), ___nl__im__9, ___get_global_const(207), ___nl__im__10));
#line 22
c_rt_lib0clear(&___nl__im__2);
#line 22
c_rt_lib0clear(&___nl__im__4);
#line 22
c_rt_lib0clear(&___nl__im__6);
#line 22
c_rt_lib0clear(&___nl__im__7);
#line 22
c_rt_lib0clear(&___nl__im__8);
#line 22
c_rt_lib0clear(&___nl__im__9);
#line 22
c_rt_lib0clear(&___nl__im__10);
#line 22
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 22
c_rt_lib0clear(&___nl__im__1);
#line 22
return ___nl__im__0;
#line 22
c_rt_lib0clear(&___nl__im__0);
#line 22
return NULL;
return NULL;
}

ImmT  post_processing_t0math_funs_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0math_funs_t");
return post_processing_t0math_funs_t();
}
ImmT  post_processing_t0math_funs_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 27
c_rt_lib0move(&___nl__im__1, ptd0bool());
#line 27
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 27
c_rt_lib0clear(&___nl__im__1);
#line 27
return ___nl__im__0;
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
return NULL;
return NULL;
}

ImmT  post_processing_t0reg_const0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0reg_const");
return post_processing_t0reg_const();
}
ImmT  post_processing_t0reg_const() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 31
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 31
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 31
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(77), ___nl__im__2, ___get_global_const(76), ___nl__im__3));
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
return ___nl__im__0;
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
return NULL;
return NULL;
}

ImmT  post_processing_t0reg_val_const0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0reg_val_const");
return post_processing_t0reg_val_const();
}
ImmT  post_processing_t0reg_val_const() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 35
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 35
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 35
c_rt_lib0move(&___nl__im__6, ptd0ptd_im());
#line 35
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(220), ___nl__im__5, ___get_global_const(219), ___nl__im__6));
#line 35
c_rt_lib0clear(&___nl__im__5);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 35
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(77), ___nl__im__2, ___get_global_const(76), ___nl__im__3));
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__im__3);
#line 35
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 35
c_rt_lib0clear(&___nl__im__1);
#line 35
return ___nl__im__0;
#line 35
c_rt_lib0clear(&___nl__im__0);
#line 35
return NULL;
return NULL;
}

ImmT  post_processing_t0optimization_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0optimization_t");
return post_processing_t0optimization_t();
}
ImmT  post_processing_t0optimization_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 39
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 39
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 39
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 39
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 39
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(81), ___nl__im__2, ___get_global_const(82), ___nl__im__3, ___get_global_const(83), ___nl__im__4, ___get_global_const(84), ___nl__im__5, ___get_global_const(85), ___nl__im__6));
#line 39
c_rt_lib0clear(&___nl__im__2);
#line 39
c_rt_lib0clear(&___nl__im__3);
#line 39
c_rt_lib0clear(&___nl__im__4);
#line 39
c_rt_lib0clear(&___nl__im__5);
#line 39
c_rt_lib0clear(&___nl__im__6);
#line 39
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 39
c_rt_lib0clear(&___nl__im__1);
#line 39
return ___nl__im__0;
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
return NULL;
return NULL;
}

ImmT  post_processing_t0const_reg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0const_reg_t");
return post_processing_t0const_reg_t();
}
ImmT  post_processing_t0const_reg_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 43
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(post_processing_t0reg_const0ptr, ___get_global_const(1161), ___get_global_const(1165)));
#line 43
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 43
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 43
c_rt_lib0clear(&___nl__im__4);
#line 43
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 43
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__im__3, ___get_global_const(216), ___nl__im__5));
#line 43
c_rt_lib0clear(&___nl__im__3);
#line 43
c_rt_lib0clear(&___nl__im__5);
#line 43
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 43
c_rt_lib0clear(&___nl__im__2);
#line 43
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 43
c_rt_lib0clear(&___nl__im__1);
#line 43
return ___nl__im__0;
#line 43
c_rt_lib0clear(&___nl__im__0);
#line 43
return NULL;
return NULL;
}

ImmT  post_processing_t0const_reg_val_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "post_processing_t0const_reg_val_t");
return post_processing_t0const_reg_val_t();
}
ImmT  post_processing_t0const_reg_val_t() {
post_processing_t_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 47
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(post_processing_t0reg_val_const0ptr, ___get_global_const(1161), ___get_global_const(1166)));
#line 47
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 47
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 47
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__im__3, ___get_global_const(216), ___nl__im__5));
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 47
c_rt_lib0clear(&___nl__im__5);
#line 47
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
return ___nl__im__0;
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
return NULL;
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void post_processing_t_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT post_processing_t_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT post_processing_t_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
