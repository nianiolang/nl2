
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "nlasm.h"
#include "ptd.h"
#include "nast.h"
#include "tct.h"
#include "tct.h"
#include "nast.h"
#include "nlasm.h"
#line 1 "nlasm.nl"

static ImmT *__const__f = NULL;
void nlasm_priv0__const__init();
ImmT nlasm_priv0__const__sim(int __nr);
ImmT nlasm_priv0__const__sing(int __nr);



ImmT  nlasm0result_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0result_t");
return nlasm0result_t();
}
ImmT  nlasm0result_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 12
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 13
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(311), ___get_global_const(698)));
#line 13
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 13
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 13
c_rt_lib0clear(&___nl__im__4);
#line 14
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 14
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 14
c_rt_lib0clear(&___nl__im__6);
#line 14
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(211), ___nl__im__2, ___get_global_const(207), ___nl__im__3, ___get_global_const(437), ___nl__im__5));
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0clear(&___nl__im__5);
#line 14
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 14
c_rt_lib0clear(&___nl__im__1);
#line 14
return ___nl__im__0;
#line 14
c_rt_lib0clear(&___nl__im__0);
#line 14
return NULL;
}

ImmT  nlasm0access_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0access_t");
return nlasm0access_t();
}
ImmT  nlasm0access_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 19
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 19
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(209), ___nl__im__2, ___get_global_const(427), ___nl__im__3));
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 19
c_rt_lib0clear(&___nl__im__1);
#line 19
return ___nl__im__0;
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
return NULL;
}

ImmT  nlasm0arg_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0arg_type_t");
return nlasm0arg_type_t();
}
ImmT  nlasm0arg_type_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 24
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__4, ___get_global_const(40), ___nl__im__5));
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 24
c_rt_lib0clear(&___nl__im__5);
#line 24
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 25
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 26
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 26
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 26
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(331), ___nl__im__2, ___get_global_const(430), ___nl__im__6, ___get_global_const(204), ___nl__im__7));
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__6);
#line 26
c_rt_lib0clear(&___nl__im__7);
#line 26
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
return ___nl__im__0;
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
return NULL;
}

ImmT  nlasm0function_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0function_t");
return nlasm0function_t();
}
ImmT  nlasm0function_t() {
nlasm_priv0__const__init();
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
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 32
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_const(73), ___nl__im__4, ___get_global_const(192), ___nl__im__5, ___get_global_const(964), ___nl__im__6));
#line 32
c_rt_lib0clear(&___nl__im__4);
#line 32
c_rt_lib0clear(&___nl__im__5);
#line 32
c_rt_lib0clear(&___nl__im__6);
#line 32
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 33
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0access_t0ptr, ___get_global_const(311), ___get_global_const(965)));
#line 33
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 34
c_rt_lib0move(&___nl__im__8, ptd0arr(___nl__im__9));
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0args_type0ptr, ___get_global_const(311), ___get_global_const(213)));
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 37
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(nlasm0cmds_t0ptr, ___get_global_const(311), ___get_global_const(966)));
#line 37
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__12));
#line 38
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 39
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 39
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 39
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__17));
#line 39
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__im__16, ___get_global_const(77), ___nl__im__17));
#line 39
c_rt_lib0clear(&___nl__im__16);
#line 39
c_rt_lib0clear(&___nl__im__17);
#line 39
c_rt_lib0move(&___nl__im__14, ptd0var(___nl__im__15));
#line 39
c_rt_lib0clear(&___nl__im__15);
#line 40
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0var_decl_t0ptr, ___get_global_const(311), ___get_global_const(967)));
#line 40
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 40
c_rt_lib0move(&___nl__im__18, ptd0arr(___nl__im__19));
#line 40
c_rt_lib0clear(&___nl__im__19);
#line 40
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(9, ___get_global_const(225), ___nl__im__2, ___get_global_const(208), ___nl__im__7, ___get_global_const(214), ___nl__im__8, ___get_global_const(213), ___nl__im__10, ___get_global_const(386), ___nl__im__11, ___get_global_const(212), ___nl__im__12, ___get_global_const(166), ___nl__im__13, ___get_global_const(165), ___nl__im__14, ___get_global_const(719), ___nl__im__18));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
c_rt_lib0clear(&___nl__im__8);
#line 40
c_rt_lib0clear(&___nl__im__10);
#line 40
c_rt_lib0clear(&___nl__im__11);
#line 40
c_rt_lib0clear(&___nl__im__12);
#line 40
c_rt_lib0clear(&___nl__im__13);
#line 40
c_rt_lib0clear(&___nl__im__14);
#line 40
c_rt_lib0clear(&___nl__im__18);
#line 40
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 40
return ___nl__im__0;
#line 40
c_rt_lib0clear(&___nl__im__0);
#line 40
return NULL;
}

ImmT  nlasm0cmds_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0cmds_t");
return nlasm0cmds_t();
}
ImmT  nlasm0cmds_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 45
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0cmd_t0ptr, ___get_global_const(311), ___get_global_const(312)));
#line 45
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 45
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
return ___nl__im__0;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
return NULL;
}

ImmT  nlasm0args_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0args_type");
return nlasm0args_type();
}
ImmT  nlasm0args_type() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 49
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0arg_type_t0ptr, ___get_global_const(311), ___get_global_const(369)));
#line 49
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 49
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 49
c_rt_lib0clear(&___nl__im__1);
#line 49
return ___nl__im__0;
#line 49
c_rt_lib0clear(&___nl__im__0);
#line 49
return NULL;
}

ImmT  nlasm0reg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0reg_t");
return nlasm0reg_t();
}
ImmT  nlasm0reg_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 54
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_const(311), ___get_global_const(968)));
#line 54
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 55
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 56
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_access_type_t0ptr, ___get_global_const(311), ___get_global_const(969)));
#line 56
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 56
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__2, ___get_global_const(217), ___nl__im__3, ___get_global_const(329), ___nl__im__4));
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
return ___nl__im__0;
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
return NULL;
}

ImmT  nlasm0debug_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0debug_t");
return nlasm0debug_t();
}
ImmT  nlasm0debug_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 61
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(46), ___get_global_const(718)));
#line 61
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 61
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 61
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 61
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 61
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 61
c_rt_lib0clear(&___nl__im__5);
#line 61
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(504), ___nl__im__2, ___get_global_const(708), ___nl__im__3, ___get_global_const(732), ___nl__im__4));
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 61
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 61
c_rt_lib0clear(&___nl__im__1);
#line 61
return ___nl__im__0;
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
return NULL;
}

nlasm0debug_t0type nlasm0empty_debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0empty_debug");
return nlasm0empty_debug();
}
nlasm0debug_t0type nlasm0empty_debug() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 65
c_rt_lib0move(&___nl__im__1, nast0empty_debug());
#line 65
___nl__int__2 = 0;
#line 65
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 65
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 65
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(3, ___get_global_const(504), ___nl__im__1, ___get_global_const(708), ___nl__im__3, ___get_global_const(732), ___nl__im__4));
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
//clear ___nl__int__2;
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__im__4);
#line 65
return ___nl__im__0;
}

ImmT  nlasm0cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0cmd_t");
return nlasm0cmd_t();
}
ImmT  nlasm0cmd_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 70
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(311), ___get_global_const(718)));
#line 70
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 71
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0annotation_t0ptr, ___get_global_const(311), ___get_global_const(970)));
#line 71
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 72
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0order_t0ptr, ___get_global_const(311), ___get_global_const(971)));
#line 72
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 72
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__2, ___get_global_const(225), ___nl__im__3, ___get_global_const(226), ___nl__im__4));
#line 72
c_rt_lib0clear(&___nl__im__2);
#line 72
c_rt_lib0clear(&___nl__im__3);
#line 72
c_rt_lib0clear(&___nl__im__4);
#line 72
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 72
c_rt_lib0clear(&___nl__im__1);
#line 72
return ___nl__im__0;
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
return NULL;
}

ImmT  nlasm0annotation_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0annotation_t");
return nlasm0annotation_t();
}
ImmT  nlasm0annotation_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 77
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 77
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 77
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 77
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 77
c_rt_lib0clear(&___nl__im__4);
#line 77
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__im__2, ___get_global_const(221), ___nl__im__3));
#line 77
c_rt_lib0clear(&___nl__im__2);
#line 77
c_rt_lib0clear(&___nl__im__3);
#line 77
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 77
c_rt_lib0clear(&___nl__im__1);
#line 77
return ___nl__im__0;
#line 77
c_rt_lib0clear(&___nl__im__0);
#line 77
return NULL;
}

ImmT  nlasm0order_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0order_t");
return nlasm0order_t();
}
ImmT  nlasm0order_t() {
nlasm_priv0__const__init();
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
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
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
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
#line 82
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 82
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 82
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 82
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 82
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 82
c_rt_lib0clear(&___nl__im__6);
#line 82
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__4, ___get_global_const(75), ___nl__im__5));
#line 82
c_rt_lib0clear(&___nl__im__4);
#line 82
c_rt_lib0clear(&___nl__im__5);
#line 82
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__3));
#line 82
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0hash_decl_t0ptr, ___get_global_const(311), ___get_global_const(941)));
#line 83
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 84
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 84
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 84
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 84
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 84
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__10, ___get_global_const(150), ___nl__im__11, ___get_global_const(166), ___nl__im__12));
#line 84
c_rt_lib0clear(&___nl__im__10);
#line 84
c_rt_lib0clear(&___nl__im__11);
#line 84
c_rt_lib0clear(&___nl__im__12);
#line 84
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 84
c_rt_lib0clear(&___nl__im__9);
#line 85
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nlasm0call_t0ptr, ___get_global_const(311), ___get_global_const(716)));
#line 85
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 86
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0una_op_t0ptr, ___get_global_const(311), ___get_global_const(972)));
#line 86
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 87
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0bin_op0ptr, ___get_global_const(311), ___get_global_const(233)));
#line 87
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__15));
#line 88
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 88
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__18));
#line 88
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 88
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 88
c_rt_lib0move(&___nl__im__20, ptd0string());
#line 88
c_rt_lib0move(&___nl__im__21, ptd0int());
#line 88
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__18, ___get_global_const(75), ___nl__im__19, ___get_global_const(204), ___nl__im__20, ___get_global_const(520), ___nl__im__21));
#line 88
c_rt_lib0clear(&___nl__im__18);
#line 88
c_rt_lib0clear(&___nl__im__19);
#line 88
c_rt_lib0clear(&___nl__im__20);
#line 88
c_rt_lib0clear(&___nl__im__21);
#line 88
c_rt_lib0move(&___nl__im__16, ptd0rec(___nl__im__17));
#line 88
c_rt_lib0clear(&___nl__im__17);
#line 89
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 89
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 89
c_rt_lib0move(&___nl__im__25, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 89
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__25));
#line 89
c_rt_lib0move(&___nl__im__26, ptd0string());
#line 89
c_rt_lib0move(&___nl__im__27, ptd0int());
#line 89
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__24, ___get_global_const(75), ___nl__im__25, ___get_global_const(204), ___nl__im__26, ___get_global_const(520), ___nl__im__27));
#line 89
c_rt_lib0clear(&___nl__im__24);
#line 89
c_rt_lib0clear(&___nl__im__25);
#line 89
c_rt_lib0clear(&___nl__im__26);
#line 89
c_rt_lib0clear(&___nl__im__27);
#line 89
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 89
c_rt_lib0clear(&___nl__im__23);
#line 90
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0return0ptr, ___get_global_const(311), ___get_global_const(245)));
#line 90
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__28));
#line 91
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 91
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__29));
#line 92
c_rt_lib0move(&___nl__im__32, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 92
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__32));
#line 92
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 92
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__33));
#line 92
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__32, ___get_global_const(75), ___nl__im__33));
#line 92
c_rt_lib0clear(&___nl__im__32);
#line 92
c_rt_lib0clear(&___nl__im__33);
#line 92
c_rt_lib0move(&___nl__im__30, ptd0rec(___nl__im__31));
#line 92
c_rt_lib0clear(&___nl__im__31);
#line 93
c_rt_lib0move(&___nl__im__36, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 93
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__36));
#line 93
c_rt_lib0move(&___nl__im__37, ptd0ptd_im());
#line 93
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__36, ___get_global_const(223), ___nl__im__37));
#line 93
c_rt_lib0clear(&___nl__im__36);
#line 93
c_rt_lib0clear(&___nl__im__37);
#line 93
c_rt_lib0move(&___nl__im__34, ptd0rec(___nl__im__35));
#line 93
c_rt_lib0clear(&___nl__im__35);
#line 94
c_rt_lib0move(&___nl__im__40, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 94
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__40));
#line 94
c_rt_lib0move(&___nl__im__41, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 94
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__41));
#line 94
c_rt_lib0move(&___nl__im__42, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 94
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__42));
#line 94
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__40, ___get_global_const(75), ___nl__im__41, ___get_global_const(275), ___nl__im__42));
#line 94
c_rt_lib0clear(&___nl__im__40);
#line 94
c_rt_lib0clear(&___nl__im__41);
#line 94
c_rt_lib0clear(&___nl__im__42);
#line 94
c_rt_lib0move(&___nl__im__38, ptd0rec(___nl__im__39));
#line 94
c_rt_lib0clear(&___nl__im__39);
#line 95
c_rt_lib0move(&___nl__im__45, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 95
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__45));
#line 95
c_rt_lib0move(&___nl__im__46, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 95
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__46));
#line 95
c_rt_lib0move(&___nl__im__47, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 95
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__47));
#line 95
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(3, ___get_global_const(75), ___nl__im__45, ___get_global_const(275), ___nl__im__46, ___get_global_const(223), ___nl__im__47));
#line 95
c_rt_lib0clear(&___nl__im__45);
#line 95
c_rt_lib0clear(&___nl__im__46);
#line 95
c_rt_lib0clear(&___nl__im__47);
#line 95
c_rt_lib0move(&___nl__im__43, ptd0rec(___nl__im__44));
#line 95
c_rt_lib0clear(&___nl__im__44);
#line 96
c_rt_lib0move(&___nl__im__50, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 96
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__50));
#line 96
c_rt_lib0move(&___nl__im__51, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 96
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__51));
#line 96
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__50, ___get_global_const(223), ___nl__im__51));
#line 96
c_rt_lib0clear(&___nl__im__50);
#line 96
c_rt_lib0clear(&___nl__im__51);
#line 96
c_rt_lib0move(&___nl__im__48, ptd0rec(___nl__im__49));
#line 96
c_rt_lib0clear(&___nl__im__49);
#line 97
c_rt_lib0move(&___nl__im__54, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 97
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__54));
#line 97
c_rt_lib0move(&___nl__im__55, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 97
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__55));
#line 97
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__54, ___get_global_const(75), ___nl__im__55));
#line 97
c_rt_lib0clear(&___nl__im__54);
#line 97
c_rt_lib0clear(&___nl__im__55);
#line 97
c_rt_lib0move(&___nl__im__52, ptd0rec(___nl__im__53));
#line 97
c_rt_lib0clear(&___nl__im__53);
#line 98
c_rt_lib0move(&___nl__im__58, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 98
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__58));
#line 98
c_rt_lib0move(&___nl__im__59, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 98
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__59));
#line 98
c_rt_lib0move(&___nl__im__60, ptd0string());
#line 98
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__58, ___get_global_const(75), ___nl__im__59, ___get_global_const(370), ___nl__im__60));
#line 98
c_rt_lib0clear(&___nl__im__58);
#line 98
c_rt_lib0clear(&___nl__im__59);
#line 98
c_rt_lib0clear(&___nl__im__60);
#line 98
c_rt_lib0move(&___nl__im__56, ptd0rec(___nl__im__57));
#line 98
c_rt_lib0clear(&___nl__im__57);
#line 99
c_rt_lib0move(&___nl__im__63, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 99
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__63));
#line 99
c_rt_lib0move(&___nl__im__64, ptd0string());
#line 99
c_rt_lib0move(&___nl__im__65, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 99
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__65));
#line 99
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(3, ___get_global_const(75), ___nl__im__63, ___get_global_const(370), ___nl__im__64, ___get_global_const(223), ___nl__im__65));
#line 99
c_rt_lib0clear(&___nl__im__63);
#line 99
c_rt_lib0clear(&___nl__im__64);
#line 99
c_rt_lib0clear(&___nl__im__65);
#line 99
c_rt_lib0move(&___nl__im__61, ptd0rec(___nl__im__62));
#line 99
c_rt_lib0clear(&___nl__im__62);
#line 100
c_rt_lib0move(&___nl__im__66, c_rt_lib0func_new(nlasm0ov_mk_t0ptr, ___get_global_const(311), ___get_global_const(973)));
#line 100
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__66));
#line 101
c_rt_lib0move(&___nl__im__67, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(311), ___get_global_const(974)));
#line 101
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__67));
#line 102
c_rt_lib0move(&___nl__im__70, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(311), ___get_global_const(974)));
#line 102
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__70));
#line 102
c_rt_lib0move(&___nl__im__71, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 102
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__71));
#line 102
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__70, ___get_global_const(75), ___nl__im__71));
#line 102
c_rt_lib0clear(&___nl__im__70);
#line 102
c_rt_lib0clear(&___nl__im__71);
#line 102
c_rt_lib0move(&___nl__im__68, ptd0rec(___nl__im__69));
#line 102
c_rt_lib0clear(&___nl__im__69);
#line 103
c_rt_lib0move(&___nl__im__72, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(311), ___get_global_const(974)));
#line 103
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__72));
#line 104
c_rt_lib0move(&___nl__im__73, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 104
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__73));
#line 105
c_rt_lib0move(&___nl__im__74, c_rt_lib0func_new(nlasm0var_decl_t0ptr, ___get_global_const(311), ___get_global_const(967)));
#line 105
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__74));
#line 106
c_rt_lib0move(&___nl__im__75, c_rt_lib0func_new(nlasm0use_field_t0ptr, ___get_global_const(311), ___get_global_const(975)));
#line 106
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__75));
#line 107
c_rt_lib0move(&___nl__im__76, c_rt_lib0func_new(nlasm0release_field_t0ptr, ___get_global_const(311), ___get_global_const(976)));
#line 107
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__76));
#line 108
c_rt_lib0move(&___nl__im__77, c_rt_lib0func_new(nlasm0use_index_t0ptr, ___get_global_const(311), ___get_global_const(977)));
#line 108
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__77));
#line 109
c_rt_lib0move(&___nl__im__78, c_rt_lib0func_new(nlasm0release_index_t0ptr, ___get_global_const(311), ___get_global_const(978)));
#line 109
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__78));
#line 110
c_rt_lib0move(&___nl__im__79, c_rt_lib0func_new(nlasm0use_hash_index_t0ptr, ___get_global_const(311), ___get_global_const(979)));
#line 110
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__79));
#line 111
c_rt_lib0move(&___nl__im__80, c_rt_lib0func_new(nlasm0release_hash_index_t0ptr, ___get_global_const(311), ___get_global_const(980)));
#line 111
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__80));
#line 112
c_rt_lib0move(&___nl__im__81, c_rt_lib0func_new(nlasm0use_variant_t0ptr, ___get_global_const(311), ___get_global_const(981)));
#line 112
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__81));
#line 113
c_rt_lib0move(&___nl__im__82, c_rt_lib0func_new(nlasm0release_variant_t0ptr, ___get_global_const(311), ___get_global_const(982)));
#line 113
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__82));
#line 114
c_rt_lib0move(&___nl__im__83, c_rt_lib0func_new(nlasm0hash_iter_t0ptr, ___get_global_const(311), ___get_global_const(983)));
#line 114
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__83));
#line 115
c_rt_lib0move(&___nl__im__84, c_rt_lib0func_new(nlasm0hash_iter_t0ptr, ___get_global_const(311), ___get_global_const(983)));
#line 115
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__84));
#line 116
c_rt_lib0move(&___nl__im__85, c_rt_lib0func_new(nlasm0hash_dest_iter_t0ptr, ___get_global_const(311), ___get_global_const(984)));
#line 116
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__85));
#line 117
c_rt_lib0move(&___nl__im__86, c_rt_lib0func_new(nlasm0hash_dest_iter_t0ptr, ___get_global_const(311), ___get_global_const(984)));
#line 117
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__86));
#line 117
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(36, ___get_global_const(229), ___nl__im__2, ___get_global_const(230), ___nl__im__7, ___get_global_const(236), ___nl__im__8, ___get_global_const(231), ___nl__im__13, ___get_global_const(232), ___nl__im__14, ___get_global_const(233), ___nl__im__15, ___get_global_const(234), ___nl__im__16, ___get_global_const(235), ___nl__im__22, ___get_global_const(245), ___nl__im__28, ___get_global_const(246), ___nl__im__29, ___get_global_const(237), ___nl__im__30, ___get_global_const(224), ___nl__im__34, ___get_global_const(238), ___nl__im__38, ___get_global_const(239), ___nl__im__43, ___get_global_const(240), ___nl__im__48, ___get_global_const(241), ___nl__im__52, ___get_global_const(242), ___nl__im__56, ___get_global_const(243), ___nl__im__61, ___get_global_const(244), ___nl__im__66, ___get_global_const(247), ___nl__im__67, ___get_global_const(248), ___nl__im__68, ___get_global_const(249), ___nl__im__72, ___get_global_const(250), ___nl__im__73, ___get_global_const(251), ___nl__im__74, ___get_global_const(252), ___nl__im__75, ___get_global_const(253), ___nl__im__76, ___get_global_const(254), ___nl__im__77, ___get_global_const(255), ___nl__im__78, ___get_global_const(256), ___nl__im__79, ___get_global_const(257), ___nl__im__80, ___get_global_const(258), ___nl__im__81, ___get_global_const(259), ___nl__im__82, ___get_global_const(260), ___nl__im__83, ___get_global_const(261), ___nl__im__84, ___get_global_const(262), ___nl__im__85, ___get_global_const(263), ___nl__im__86));
#line 117
c_rt_lib0clear(&___nl__im__2);
#line 117
c_rt_lib0clear(&___nl__im__7);
#line 117
c_rt_lib0clear(&___nl__im__8);
#line 117
c_rt_lib0clear(&___nl__im__13);
#line 117
c_rt_lib0clear(&___nl__im__14);
#line 117
c_rt_lib0clear(&___nl__im__15);
#line 117
c_rt_lib0clear(&___nl__im__16);
#line 117
c_rt_lib0clear(&___nl__im__22);
#line 117
c_rt_lib0clear(&___nl__im__28);
#line 117
c_rt_lib0clear(&___nl__im__29);
#line 117
c_rt_lib0clear(&___nl__im__30);
#line 117
c_rt_lib0clear(&___nl__im__34);
#line 117
c_rt_lib0clear(&___nl__im__38);
#line 117
c_rt_lib0clear(&___nl__im__43);
#line 117
c_rt_lib0clear(&___nl__im__48);
#line 117
c_rt_lib0clear(&___nl__im__52);
#line 117
c_rt_lib0clear(&___nl__im__56);
#line 117
c_rt_lib0clear(&___nl__im__61);
#line 117
c_rt_lib0clear(&___nl__im__66);
#line 117
c_rt_lib0clear(&___nl__im__67);
#line 117
c_rt_lib0clear(&___nl__im__68);
#line 117
c_rt_lib0clear(&___nl__im__72);
#line 117
c_rt_lib0clear(&___nl__im__73);
#line 117
c_rt_lib0clear(&___nl__im__74);
#line 117
c_rt_lib0clear(&___nl__im__75);
#line 117
c_rt_lib0clear(&___nl__im__76);
#line 117
c_rt_lib0clear(&___nl__im__77);
#line 117
c_rt_lib0clear(&___nl__im__78);
#line 117
c_rt_lib0clear(&___nl__im__79);
#line 117
c_rt_lib0clear(&___nl__im__80);
#line 117
c_rt_lib0clear(&___nl__im__81);
#line 117
c_rt_lib0clear(&___nl__im__82);
#line 117
c_rt_lib0clear(&___nl__im__83);
#line 117
c_rt_lib0clear(&___nl__im__84);
#line 117
c_rt_lib0clear(&___nl__im__85);
#line 117
c_rt_lib0clear(&___nl__im__86);
#line 117
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 117
c_rt_lib0clear(&___nl__im__1);
#line 117
return ___nl__im__0;
#line 117
c_rt_lib0clear(&___nl__im__0);
#line 117
return NULL;
}

ImmT  nlasm0var_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0var_decl_t");
return nlasm0var_decl_t();
}
ImmT  nlasm0var_decl_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 123
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 123
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 124
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 124
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 124
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(204), ___nl__im__2, ___get_global_const(430), ___nl__im__3));
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 124
c_rt_lib0clear(&___nl__im__1);
#line 124
return ___nl__im__0;
#line 124
c_rt_lib0clear(&___nl__im__0);
#line 124
return NULL;
}

ImmT  nlasm0use_field_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_field_t");
return nlasm0use_field_t();
}
ImmT  nlasm0use_field_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 130
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 130
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 132
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 132
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(559), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(561), ___nl__im__4));
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
c_rt_lib0clear(&___nl__im__3);
#line 132
c_rt_lib0clear(&___nl__im__4);
#line 132
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 132
c_rt_lib0clear(&___nl__im__1);
#line 132
return ___nl__im__0;
#line 132
c_rt_lib0clear(&___nl__im__0);
#line 132
return NULL;
}

ImmT  nlasm0release_field_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_field_t");
return nlasm0release_field_t();
}
ImmT  nlasm0release_field_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 138
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 138
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 140
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 140
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(545), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(561), ___nl__im__4));
#line 140
c_rt_lib0clear(&___nl__im__2);
#line 140
c_rt_lib0clear(&___nl__im__3);
#line 140
c_rt_lib0clear(&___nl__im__4);
#line 140
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
return ___nl__im__0;
#line 140
c_rt_lib0clear(&___nl__im__0);
#line 140
return NULL;
}

ImmT  nlasm0use_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_index_t");
return nlasm0use_index_t();
}
ImmT  nlasm0use_index_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 146
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 146
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 148
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 148
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 148
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(559), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(563), ___nl__im__4));
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
c_rt_lib0clear(&___nl__im__3);
#line 148
c_rt_lib0clear(&___nl__im__4);
#line 148
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
return ___nl__im__0;
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
return NULL;
}

ImmT  nlasm0release_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_index_t");
return nlasm0release_index_t();
}
ImmT  nlasm0release_index_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 154
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 154
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 155
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 155
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 156
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 156
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 156
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(545), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(563), ___nl__im__4));
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 156
c_rt_lib0clear(&___nl__im__3);
#line 156
c_rt_lib0clear(&___nl__im__4);
#line 156
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 156
c_rt_lib0clear(&___nl__im__1);
#line 156
return ___nl__im__0;
#line 156
c_rt_lib0clear(&___nl__im__0);
#line 156
return NULL;
}

ImmT  nlasm0use_hash_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_hash_index_t");
return nlasm0use_hash_index_t();
}
ImmT  nlasm0use_hash_index_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 162
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 162
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 163
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 163
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 164
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 164
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 165
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 165
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(559), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(563), ___nl__im__4, ___get_global_const(564), ___nl__im__5));
#line 165
c_rt_lib0clear(&___nl__im__2);
#line 165
c_rt_lib0clear(&___nl__im__3);
#line 165
c_rt_lib0clear(&___nl__im__4);
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 165
c_rt_lib0clear(&___nl__im__1);
#line 165
return ___nl__im__0;
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
return NULL;
}

ImmT  nlasm0release_hash_index_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_hash_index_t");
return nlasm0release_hash_index_t();
}
ImmT  nlasm0release_hash_index_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 171
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 171
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 173
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 173
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 173
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(545), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(563), ___nl__im__4));
#line 173
c_rt_lib0clear(&___nl__im__2);
#line 173
c_rt_lib0clear(&___nl__im__3);
#line 173
c_rt_lib0clear(&___nl__im__4);
#line 173
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 173
c_rt_lib0clear(&___nl__im__1);
#line 173
return ___nl__im__0;
#line 173
c_rt_lib0clear(&___nl__im__0);
#line 173
return NULL;
}

ImmT  nlasm0use_variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0use_variant_t");
return nlasm0use_variant_t();
}
ImmT  nlasm0use_variant_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 179
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 179
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 180
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 180
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 181
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 182
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 182
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(559), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(533), ___nl__im__4, ___get_global_const(520), ___nl__im__5));
#line 182
c_rt_lib0clear(&___nl__im__2);
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
c_rt_lib0clear(&___nl__im__4);
#line 182
c_rt_lib0clear(&___nl__im__5);
#line 182
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
return ___nl__im__0;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
return NULL;
}

ImmT  nlasm0release_variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0release_variant_t");
return nlasm0release_variant_t();
}
ImmT  nlasm0release_variant_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 188
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 188
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 189
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 189
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 190
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 191
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 191
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(545), ___nl__im__2, ___get_global_const(558), ___nl__im__3, ___get_global_const(533), ___nl__im__4, ___get_global_const(520), ___nl__im__5));
#line 191
c_rt_lib0clear(&___nl__im__2);
#line 191
c_rt_lib0clear(&___nl__im__3);
#line 191
c_rt_lib0clear(&___nl__im__4);
#line 191
c_rt_lib0clear(&___nl__im__5);
#line 191
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 191
c_rt_lib0clear(&___nl__im__1);
#line 191
return ___nl__im__0;
#line 191
c_rt_lib0clear(&___nl__im__0);
#line 191
return NULL;
}

ImmT  nlasm0hash_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0hash_decl_t");
return nlasm0hash_decl_t();
}
ImmT  nlasm0hash_decl_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 197
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 197
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 198
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 198
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 198
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 198
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(370), ___nl__im__6, ___get_global_const(223), ___nl__im__7));
#line 198
c_rt_lib0clear(&___nl__im__6);
#line 198
c_rt_lib0clear(&___nl__im__7);
#line 198
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 198
c_rt_lib0clear(&___nl__im__5);
#line 198
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 198
c_rt_lib0clear(&___nl__im__4);
#line 198
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__2, ___get_global_const(75), ___nl__im__3));
#line 198
c_rt_lib0clear(&___nl__im__2);
#line 198
c_rt_lib0clear(&___nl__im__3);
#line 198
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 198
c_rt_lib0clear(&___nl__im__1);
#line 198
return ___nl__im__0;
#line 198
c_rt_lib0clear(&___nl__im__0);
#line 198
return NULL;
}

ImmT  nlasm0hash_iter_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0hash_iter_t");
return nlasm0hash_iter_t();
}
ImmT  nlasm0hash_iter_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 204
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 204
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 205
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 205
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 205
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(568), ___nl__im__2, ___get_global_const(129), ___nl__im__3));
#line 205
c_rt_lib0clear(&___nl__im__2);
#line 205
c_rt_lib0clear(&___nl__im__3);
#line 205
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 205
c_rt_lib0clear(&___nl__im__1);
#line 205
return ___nl__im__0;
#line 205
c_rt_lib0clear(&___nl__im__0);
#line 205
return NULL;
}

ImmT  nlasm0hash_dest_iter_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0hash_dest_iter_t");
return nlasm0hash_dest_iter_t();
}
ImmT  nlasm0hash_dest_iter_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 211
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 211
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 212
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 212
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 213
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__2, ___get_global_const(568), ___nl__im__3, ___get_global_const(129), ___nl__im__4));
#line 213
c_rt_lib0clear(&___nl__im__2);
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 213
c_rt_lib0clear(&___nl__im__1);
#line 213
return ___nl__im__0;
#line 213
c_rt_lib0clear(&___nl__im__0);
#line 213
return NULL;
}

ImmT  nlasm0label_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0label_t");
return nlasm0label_t();
}
ImmT  nlasm0label_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 218
c_rt_lib0move(&___nl__im__0, ptd0int());
#line 218
return ___nl__im__0;
#line 218
c_rt_lib0clear(&___nl__im__0);
#line 218
return NULL;
}

ImmT  nlasm0una_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0una_op_t");
return nlasm0una_op_t();
}
ImmT  nlasm0una_op_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 222
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 222
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 222
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 222
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 222
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 222
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__2, ___get_global_const(75), ___nl__im__3, ___get_global_const(513), ___nl__im__4));
#line 222
c_rt_lib0clear(&___nl__im__2);
#line 222
c_rt_lib0clear(&___nl__im__3);
#line 222
c_rt_lib0clear(&___nl__im__4);
#line 222
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 222
c_rt_lib0clear(&___nl__im__1);
#line 222
return ___nl__im__0;
#line 222
c_rt_lib0clear(&___nl__im__0);
#line 222
return NULL;
}

ImmT  nlasm0bin_op0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0bin_op");
return nlasm0bin_op();
}
ImmT  nlasm0bin_op() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 226
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 226
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 226
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 226
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 226
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 226
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 226
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 226
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__2, ___get_global_const(273), ___nl__im__3, ___get_global_const(274), ___nl__im__4, ___get_global_const(513), ___nl__im__5));
#line 226
c_rt_lib0clear(&___nl__im__2);
#line 226
c_rt_lib0clear(&___nl__im__3);
#line 226
c_rt_lib0clear(&___nl__im__4);
#line 226
c_rt_lib0clear(&___nl__im__5);
#line 226
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
return ___nl__im__0;
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
return NULL;
}

ImmT  nlasm0return0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0return");
return nlasm0return();
}
ImmT  nlasm0return() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 230
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 230
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 230
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 230
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__2, ___get_global_const(327), ___nl__im__3));
#line 230
c_rt_lib0clear(&___nl__im__2);
#line 230
c_rt_lib0clear(&___nl__im__3);
#line 230
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 230
return ___nl__im__0;
#line 230
c_rt_lib0clear(&___nl__im__0);
#line 230
return NULL;
}

ImmT  nlasm0ov_mk_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0ov_mk_t");
return nlasm0ov_mk_t();
}
ImmT  nlasm0ov_mk_t() {
nlasm_priv0__const__init();
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
#line 235
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 235
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 236
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 236
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 236
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 236
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(276), ___nl__im__5, ___get_global_const(327), ___nl__im__6));
#line 236
c_rt_lib0clear(&___nl__im__5);
#line 236
c_rt_lib0clear(&___nl__im__6);
#line 236
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 236
c_rt_lib0clear(&___nl__im__4);
#line 237
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 238
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 239
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 239
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 239
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(222), ___nl__im__2, ___get_global_const(75), ___nl__im__3, ___get_global_const(533), ___nl__im__7, ___get_global_const(520), ___nl__im__8, ___get_global_const(538), ___nl__im__9));
#line 239
c_rt_lib0clear(&___nl__im__2);
#line 239
c_rt_lib0clear(&___nl__im__3);
#line 239
c_rt_lib0clear(&___nl__im__7);
#line 239
c_rt_lib0clear(&___nl__im__8);
#line 239
c_rt_lib0clear(&___nl__im__9);
#line 239
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 239
c_rt_lib0clear(&___nl__im__1);
#line 239
return ___nl__im__0;
#line 239
c_rt_lib0clear(&___nl__im__0);
#line 239
return NULL;
}

ImmT  nlasm0call_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0call_t");
return nlasm0call_t();
}
ImmT  nlasm0call_t() {
nlasm_priv0__const__init();
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
#line 245
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 245
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 246
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 247
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 248
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 248
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 248
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 248
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 248
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__8, ___get_global_const(40), ___nl__im__9));
#line 248
c_rt_lib0clear(&___nl__im__8);
#line 248
c_rt_lib0clear(&___nl__im__9);
#line 248
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__7));
#line 248
c_rt_lib0clear(&___nl__im__7);
#line 248
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 248
c_rt_lib0clear(&___nl__im__6);
#line 248
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__2, ___get_global_const(265), ___nl__im__3, ___get_global_const(267), ___nl__im__4, ___get_global_const(264), ___nl__im__5));
#line 248
c_rt_lib0clear(&___nl__im__2);
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
c_rt_lib0clear(&___nl__im__4);
#line 248
c_rt_lib0clear(&___nl__im__5);
#line 248
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 248
c_rt_lib0clear(&___nl__im__1);
#line 248
return ___nl__im__0;
#line 248
c_rt_lib0clear(&___nl__im__0);
#line 248
return NULL;
}

ImmT  nlasm0reg_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0reg_type");
return nlasm0reg_type();
}
ImmT  nlasm0reg_type() {
nlasm_priv0__const__init();
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
#line 254
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 255
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 256
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 257
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 258
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 258
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 259
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 259
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 260
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 260
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 261
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 261
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 261
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(8, ___get_global_const(328), ___nl__im__2, ___get_global_const(514), ___nl__im__3, ___get_global_const(526), ___nl__im__4, ___get_global_const(34), ___nl__im__5, ___get_global_const(512), ___nl__im__6, ___get_global_const(128), ___nl__im__7, ___get_global_const(516), ___nl__im__8, ___get_global_const(129), ___nl__im__9));
#line 261
c_rt_lib0clear(&___nl__im__2);
#line 261
c_rt_lib0clear(&___nl__im__3);
#line 261
c_rt_lib0clear(&___nl__im__4);
#line 261
c_rt_lib0clear(&___nl__im__5);
#line 261
c_rt_lib0clear(&___nl__im__6);
#line 261
c_rt_lib0clear(&___nl__im__7);
#line 261
c_rt_lib0clear(&___nl__im__8);
#line 261
c_rt_lib0clear(&___nl__im__9);
#line 261
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 261
c_rt_lib0clear(&___nl__im__1);
#line 261
return ___nl__im__0;
#line 261
c_rt_lib0clear(&___nl__im__0);
#line 261
return NULL;
}

ImmT  nlasm0reg_access_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0reg_access_type_t");
return nlasm0reg_access_type_t();
}
ImmT  nlasm0reg_access_type_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 267
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 268
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 268
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__2, ___get_global_const(391), ___nl__im__3));
#line 268
c_rt_lib0clear(&___nl__im__2);
#line 268
c_rt_lib0clear(&___nl__im__3);
#line 268
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 268
c_rt_lib0clear(&___nl__im__1);
#line 268
return ___nl__im__0;
#line 268
c_rt_lib0clear(&___nl__im__0);
#line 268
return NULL;
}

ImmT  nlasm0is_empty0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nlasm0is_empty");
nlasm0reg_t0type *var0 = &(_tab[0]);
return nlasm0is_empty(*var0);
}
ImmT  nlasm0is_empty(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nlasm_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
#line 273
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(217)));
#line 273
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 273
c_rt_lib0clear(&___nl__im__3);
#line 273
___nl__int__4 = 1;
#line 273
___nl__int__4 = -___nl__int__4;
#line 273
___nl__int__5 = ___nl__int__2 == ___nl__int__4;
#line 273
___nl__bool__1 = ___nl__int__5;
#line 273
//clear ___nl__int__2;
#line 273
//clear ___nl__int__4;
#line 273
//clear ___nl__int__5;
#line 273
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
//clear ___nl__bool__1;
#line 273
return ___nl__im__6;
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
//clear ___nl__bool__1;
#line 273
c_rt_lib0clear(&___nl__im__6);
#line 273
return NULL;
}

bool  nlasm0eq_reg0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "nlasm0eq_reg");
nlasm0reg_t0type *var0 = &(_tab[0]);
nlasm0reg_t0type *var1 = &(_tab[1]);
return nlasm0eq_reg(*var0, *var1);
}
bool  nlasm0eq_reg(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
nlasm_priv0__const__init();
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
#line 277
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(217)));
#line 277
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 277
c_rt_lib0clear(&___nl__im__4);
#line 277
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(217)));
#line 277
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 277
c_rt_lib0clear(&___nl__im__6);
#line 277
___nl__int__7 = ___nl__int__3 == ___nl__int__5;
#line 277
___nl__bool__2 = ___nl__int__7;
#line 277
//clear ___nl__int__3;
#line 277
//clear ___nl__int__5;
#line 277
//clear ___nl__int__7;
#line 277
c_rt_lib0clear(&___nl__im__0);
#line 277
c_rt_lib0clear(&___nl__im__1);
#line 277
return ___nl__bool__2;
}

bool  nlasm0eq_reg_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "nlasm0eq_reg_type");
nlasm0reg_type0type *var0 = &(_tab[0]);
nlasm0reg_type0type *var1 = &(_tab[1]);
return nlasm0eq_reg_type(*var0, *var1);
}
bool  nlasm0eq_reg_type(nlasm0reg_type0type ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
nlasm_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
#line 281
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(328));
#line 281
if(___nl__bool__2){ goto label_2;}
#line 283
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(514));
#line 283
if(___nl__bool__2){ goto label_3;}
#line 285
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(34));
#line 285
if(___nl__bool__2){ goto label_4;}
#line 287
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(526));
#line 287
if(___nl__bool__2){ goto label_5;}
#line 289
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(512));
#line 289
if(___nl__bool__2){ goto label_6;}
#line 291
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(128));
#line 291
if(___nl__bool__2){ goto label_7;}
#line 293
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(516));
#line 293
if(___nl__bool__2){ goto label_8;}
#line 295
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(129));
#line 295
if(___nl__bool__2){ goto label_9;}
#line 295
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 295
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 295
nl_die_arg(___nl__im__3);
#line 281
label_2:
;
#line 282
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(328));
#line 282
if(___nl__bool__4){ goto label_10;}
#line 282
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(526));
#line 282
label_10:
;
#line 282
//clear ___nl__bool__5;
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
//clear ___nl__bool__2;
#line 282
c_rt_lib0clear(&___nl__im__3);
#line 282
return ___nl__bool__4;
#line 283
goto label_1;
#line 283
label_3:
;
#line 284
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(514));
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
c_rt_lib0clear(&___nl__im__1);
#line 284
//clear ___nl__bool__2;
#line 284
c_rt_lib0clear(&___nl__im__3);
#line 284
//clear ___nl__bool__4;
#line 284
return ___nl__bool__6;
#line 285
goto label_1;
#line 285
label_4:
;
#line 286
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(34));
#line 286
c_rt_lib0clear(&___nl__im__0);
#line 286
c_rt_lib0clear(&___nl__im__1);
#line 286
//clear ___nl__bool__2;
#line 286
c_rt_lib0clear(&___nl__im__3);
#line 286
//clear ___nl__bool__4;
#line 286
//clear ___nl__bool__6;
#line 286
return ___nl__bool__7;
#line 287
goto label_1;
#line 287
label_5:
;
#line 288
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(526));
#line 288
if(___nl__bool__8){ goto label_11;}
#line 288
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(328));
#line 288
label_11:
;
#line 288
//clear ___nl__bool__9;
#line 288
c_rt_lib0clear(&___nl__im__0);
#line 288
c_rt_lib0clear(&___nl__im__1);
#line 288
//clear ___nl__bool__2;
#line 288
c_rt_lib0clear(&___nl__im__3);
#line 288
//clear ___nl__bool__4;
#line 288
//clear ___nl__bool__6;
#line 288
//clear ___nl__bool__7;
#line 288
return ___nl__bool__8;
#line 289
goto label_1;
#line 289
label_6:
;
#line 289
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(512)));
#line 289
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 290
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(512));
#line 290
c_rt_lib0clear(&___nl__im__0);
#line 290
c_rt_lib0clear(&___nl__im__1);
#line 290
//clear ___nl__bool__2;
#line 290
c_rt_lib0clear(&___nl__im__3);
#line 290
//clear ___nl__bool__4;
#line 290
//clear ___nl__bool__6;
#line 290
//clear ___nl__bool__7;
#line 290
//clear ___nl__bool__8;
#line 290
c_rt_lib0clear(&___nl__im__10);
#line 290
c_rt_lib0clear(&___nl__im__11);
#line 290
return ___nl__bool__12;
#line 291
goto label_1;
#line 291
label_7:
;
#line 291
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(128)));
#line 291
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 292
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(128));
#line 292
c_rt_lib0clear(&___nl__im__0);
#line 292
c_rt_lib0clear(&___nl__im__1);
#line 292
//clear ___nl__bool__2;
#line 292
c_rt_lib0clear(&___nl__im__3);
#line 292
//clear ___nl__bool__4;
#line 292
//clear ___nl__bool__6;
#line 292
//clear ___nl__bool__7;
#line 292
//clear ___nl__bool__8;
#line 292
c_rt_lib0clear(&___nl__im__10);
#line 292
c_rt_lib0clear(&___nl__im__11);
#line 292
//clear ___nl__bool__12;
#line 292
c_rt_lib0clear(&___nl__im__13);
#line 292
c_rt_lib0clear(&___nl__im__14);
#line 292
return ___nl__bool__15;
#line 293
goto label_1;
#line 293
label_8:
;
#line 293
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(516)));
#line 293
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 294
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(516));
#line 294
c_rt_lib0clear(&___nl__im__0);
#line 294
c_rt_lib0clear(&___nl__im__1);
#line 294
//clear ___nl__bool__2;
#line 294
c_rt_lib0clear(&___nl__im__3);
#line 294
//clear ___nl__bool__4;
#line 294
//clear ___nl__bool__6;
#line 294
//clear ___nl__bool__7;
#line 294
//clear ___nl__bool__8;
#line 294
c_rt_lib0clear(&___nl__im__10);
#line 294
c_rt_lib0clear(&___nl__im__11);
#line 294
//clear ___nl__bool__12;
#line 294
c_rt_lib0clear(&___nl__im__13);
#line 294
c_rt_lib0clear(&___nl__im__14);
#line 294
//clear ___nl__bool__15;
#line 294
c_rt_lib0clear(&___nl__im__16);
#line 294
c_rt_lib0clear(&___nl__im__17);
#line 294
return ___nl__bool__18;
#line 295
goto label_1;
#line 295
label_9:
;
#line 295
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(129)));
#line 295
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 296
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(129));
#line 296
c_rt_lib0clear(&___nl__im__0);
#line 296
c_rt_lib0clear(&___nl__im__1);
#line 296
//clear ___nl__bool__2;
#line 296
c_rt_lib0clear(&___nl__im__3);
#line 296
//clear ___nl__bool__4;
#line 296
//clear ___nl__bool__6;
#line 296
//clear ___nl__bool__7;
#line 296
//clear ___nl__bool__8;
#line 296
c_rt_lib0clear(&___nl__im__10);
#line 296
c_rt_lib0clear(&___nl__im__11);
#line 296
//clear ___nl__bool__12;
#line 296
c_rt_lib0clear(&___nl__im__13);
#line 296
c_rt_lib0clear(&___nl__im__14);
#line 296
//clear ___nl__bool__15;
#line 296
c_rt_lib0clear(&___nl__im__16);
#line 296
c_rt_lib0clear(&___nl__im__17);
#line 296
//clear ___nl__bool__18;
#line 296
c_rt_lib0clear(&___nl__im__19);
#line 296
c_rt_lib0clear(&___nl__im__20);
#line 296
return ___nl__bool__21;
#line 297
goto label_1;
#line 297
label_1:
;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nlasm_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT nlasm_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nlasm_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
