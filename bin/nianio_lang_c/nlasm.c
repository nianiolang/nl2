
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(312), ___get_global_const(764)));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(212), ___nl__im__2, ___get_global_const(208), ___nl__im__3, ___get_global_const(439), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(210), ___nl__im__2, ___get_global_const(428), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__4, ___get_global_const(40), ___nl__im__5));
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 24
c_rt_lib0clear(&___nl__im__5);
#line 24
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 25
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 26
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 26
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 26
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(331), ___nl__im__2, ___get_global_const(432), ___nl__im__6, ___get_global_const(205), ___nl__im__7));
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
ImmT  ___nl__im__20 = NULL;
#line 32
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 32
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_const(72), ___nl__im__4, ___get_global_const(193), ___nl__im__5, ___get_global_const(1031), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0access_t0ptr, ___get_global_const(312), ___get_global_const(1032)));
#line 33
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 34
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 34
c_rt_lib0move(&___nl__im__8, ptd0arr(___nl__im__9));
#line 34
c_rt_lib0clear(&___nl__im__9);
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0args_type0ptr, ___get_global_const(312), ___get_global_const(214)));
#line 35
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 36
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 37
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_const(312), ___get_global_const(375)));
#line 37
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__12));
#line 38
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nlasm0cmds_t0ptr, ___get_global_const(312), ___get_global_const(1033)));
#line 38
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 39
c_rt_lib0move(&___nl__im__14, ptd0string());
#line 40
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 40
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 40
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__18));
#line 40
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_const(77), ___nl__im__17, ___get_global_const(76), ___nl__im__18));
#line 40
c_rt_lib0clear(&___nl__im__17);
#line 40
c_rt_lib0clear(&___nl__im__18);
#line 40
c_rt_lib0move(&___nl__im__15, ptd0var(___nl__im__16));
#line 40
c_rt_lib0clear(&___nl__im__16);
#line 41
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0var_decl_t0ptr, ___get_global_const(312), ___get_global_const(1034)));
#line 41
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 41
c_rt_lib0move(&___nl__im__19, ptd0arr(___nl__im__20));
#line 41
c_rt_lib0clear(&___nl__im__20);
#line 41
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_const(226), ___nl__im__2, ___get_global_const(209), ___nl__im__7, ___get_global_const(215), ___nl__im__8, ___get_global_const(214), ___nl__im__10, ___get_global_const(429), ___nl__im__11, ___get_global_const(387), ___nl__im__12, ___get_global_const(213), ___nl__im__13, ___get_global_const(167), ___nl__im__14, ___get_global_const(166), ___nl__im__15, ___get_global_const(785), ___nl__im__19));
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 41
c_rt_lib0clear(&___nl__im__7);
#line 41
c_rt_lib0clear(&___nl__im__8);
#line 41
c_rt_lib0clear(&___nl__im__10);
#line 41
c_rt_lib0clear(&___nl__im__11);
#line 41
c_rt_lib0clear(&___nl__im__12);
#line 41
c_rt_lib0clear(&___nl__im__13);
#line 41
c_rt_lib0clear(&___nl__im__14);
#line 41
c_rt_lib0clear(&___nl__im__15);
#line 41
c_rt_lib0clear(&___nl__im__19);
#line 41
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
return ___nl__im__0;
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
return NULL;
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
#line 46
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0cmd_t0ptr, ___get_global_const(312), ___get_global_const(313)));
#line 46
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 46
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 46
c_rt_lib0clear(&___nl__im__1);
#line 46
return ___nl__im__0;
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
return NULL;
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
#line 50
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0arg_type_t0ptr, ___get_global_const(312), ___get_global_const(369)));
#line 50
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 50
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 50
c_rt_lib0clear(&___nl__im__1);
#line 50
return ___nl__im__0;
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
return NULL;
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
#line 55
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_const(312), ___get_global_const(375)));
#line 55
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 56
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 57
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_access_type_t0ptr, ___get_global_const(312), ___get_global_const(1035)));
#line 57
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 57
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__2, ___get_global_const(218), ___nl__im__3, ___get_global_const(329), ___nl__im__4));
#line 57
c_rt_lib0clear(&___nl__im__2);
#line 57
c_rt_lib0clear(&___nl__im__3);
#line 57
c_rt_lib0clear(&___nl__im__4);
#line 57
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 57
c_rt_lib0clear(&___nl__im__1);
#line 57
return ___nl__im__0;
#line 57
c_rt_lib0clear(&___nl__im__0);
#line 57
return NULL;
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
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(46), ___get_global_const(784)));
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 62
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 62
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(506), ___nl__im__2, ___get_global_const(774), ___nl__im__3, ___get_global_const(798), ___nl__im__4));
#line 62
c_rt_lib0clear(&___nl__im__2);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
return ___nl__im__0;
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
return NULL;
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
#line 66
c_rt_lib0move(&___nl__im__1, nast0empty_debug());
#line 66
___nl__int__2 = 0;
#line 66
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 66
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 66
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(3, ___get_global_const(506), ___nl__im__1, ___get_global_const(774), ___nl__im__3, ___get_global_const(798), ___nl__im__4));
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
//clear ___nl__int__2;
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
c_rt_lib0clear(&___nl__im__4);
#line 66
return ___nl__im__0;
return NULL;
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
#line 71
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(312), ___get_global_const(784)));
#line 71
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 72
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0annotation_t0ptr, ___get_global_const(312), ___get_global_const(1036)));
#line 72
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 73
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0order_t0ptr, ___get_global_const(312), ___get_global_const(1037)));
#line 73
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 73
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__2, ___get_global_const(226), ___nl__im__3, ___get_global_const(227), ___nl__im__4));
#line 73
c_rt_lib0clear(&___nl__im__2);
#line 73
c_rt_lib0clear(&___nl__im__3);
#line 73
c_rt_lib0clear(&___nl__im__4);
#line 73
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
return ___nl__im__0;
#line 73
c_rt_lib0clear(&___nl__im__0);
#line 73
return NULL;
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
#line 78
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 78
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 78
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 78
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__im__2, ___get_global_const(222), ___nl__im__3));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
c_rt_lib0clear(&___nl__im__3);
#line 78
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
return ___nl__im__0;
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
return NULL;
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
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 83
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 83
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 83
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 83
c_rt_lib0clear(&___nl__im__6);
#line 83
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__4, ___get_global_const(74), ___nl__im__5));
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 83
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__3));
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0hash_decl_t0ptr, ___get_global_const(312), ___get_global_const(1008)));
#line 84
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 85
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 85
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 85
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 85
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 85
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__10, ___get_global_const(151), ___nl__im__11, ___get_global_const(167), ___nl__im__12));
#line 85
c_rt_lib0clear(&___nl__im__10);
#line 85
c_rt_lib0clear(&___nl__im__11);
#line 85
c_rt_lib0clear(&___nl__im__12);
#line 85
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 85
c_rt_lib0clear(&___nl__im__9);
#line 86
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nlasm0call_t0ptr, ___get_global_const(312), ___get_global_const(782)));
#line 86
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 87
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0una_op_t0ptr, ___get_global_const(312), ___get_global_const(1038)));
#line 87
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 88
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0bin_op0ptr, ___get_global_const(312), ___get_global_const(234)));
#line 88
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__15));
#line 89
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 89
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__18));
#line 89
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 89
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 89
c_rt_lib0move(&___nl__im__20, ptd0string());
#line 89
c_rt_lib0move(&___nl__im__21, ptd0int());
#line 89
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__18, ___get_global_const(74), ___nl__im__19, ___get_global_const(205), ___nl__im__20, ___get_global_const(522), ___nl__im__21));
#line 89
c_rt_lib0clear(&___nl__im__18);
#line 89
c_rt_lib0clear(&___nl__im__19);
#line 89
c_rt_lib0clear(&___nl__im__20);
#line 89
c_rt_lib0clear(&___nl__im__21);
#line 89
c_rt_lib0move(&___nl__im__16, ptd0rec(___nl__im__17));
#line 89
c_rt_lib0clear(&___nl__im__17);
#line 90
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 90
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 90
c_rt_lib0move(&___nl__im__25, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 90
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__25));
#line 90
c_rt_lib0move(&___nl__im__26, ptd0string());
#line 90
c_rt_lib0move(&___nl__im__27, ptd0int());
#line 90
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__24, ___get_global_const(74), ___nl__im__25, ___get_global_const(205), ___nl__im__26, ___get_global_const(522), ___nl__im__27));
#line 90
c_rt_lib0clear(&___nl__im__24);
#line 90
c_rt_lib0clear(&___nl__im__25);
#line 90
c_rt_lib0clear(&___nl__im__26);
#line 90
c_rt_lib0clear(&___nl__im__27);
#line 90
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 90
c_rt_lib0clear(&___nl__im__23);
#line 91
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0return0ptr, ___get_global_const(312), ___get_global_const(246)));
#line 91
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__28));
#line 92
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 92
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__29));
#line 93
c_rt_lib0move(&___nl__im__32, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 93
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__32));
#line 93
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 93
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__33));
#line 93
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__32, ___get_global_const(74), ___nl__im__33));
#line 93
c_rt_lib0clear(&___nl__im__32);
#line 93
c_rt_lib0clear(&___nl__im__33);
#line 93
c_rt_lib0move(&___nl__im__30, ptd0rec(___nl__im__31));
#line 93
c_rt_lib0clear(&___nl__im__31);
#line 94
c_rt_lib0move(&___nl__im__36, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 94
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__36));
#line 94
c_rt_lib0move(&___nl__im__37, ptd0ptd_im());
#line 94
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__36, ___get_global_const(224), ___nl__im__37));
#line 94
c_rt_lib0clear(&___nl__im__36);
#line 94
c_rt_lib0clear(&___nl__im__37);
#line 94
c_rt_lib0move(&___nl__im__34, ptd0rec(___nl__im__35));
#line 94
c_rt_lib0clear(&___nl__im__35);
#line 95
c_rt_lib0move(&___nl__im__40, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 95
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__40));
#line 95
c_rt_lib0move(&___nl__im__41, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 95
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__41));
#line 95
c_rt_lib0move(&___nl__im__42, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 95
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__42));
#line 95
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__40, ___get_global_const(74), ___nl__im__41, ___get_global_const(276), ___nl__im__42));
#line 95
c_rt_lib0clear(&___nl__im__40);
#line 95
c_rt_lib0clear(&___nl__im__41);
#line 95
c_rt_lib0clear(&___nl__im__42);
#line 95
c_rt_lib0move(&___nl__im__38, ptd0rec(___nl__im__39));
#line 95
c_rt_lib0clear(&___nl__im__39);
#line 96
c_rt_lib0move(&___nl__im__45, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 96
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__45));
#line 96
c_rt_lib0move(&___nl__im__46, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 96
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__46));
#line 96
c_rt_lib0move(&___nl__im__47, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 96
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__47));
#line 96
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(3, ___get_global_const(74), ___nl__im__45, ___get_global_const(276), ___nl__im__46, ___get_global_const(224), ___nl__im__47));
#line 96
c_rt_lib0clear(&___nl__im__45);
#line 96
c_rt_lib0clear(&___nl__im__46);
#line 96
c_rt_lib0clear(&___nl__im__47);
#line 96
c_rt_lib0move(&___nl__im__43, ptd0rec(___nl__im__44));
#line 96
c_rt_lib0clear(&___nl__im__44);
#line 97
c_rt_lib0move(&___nl__im__50, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 97
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__50));
#line 97
c_rt_lib0move(&___nl__im__51, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 97
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__51));
#line 97
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__50, ___get_global_const(224), ___nl__im__51));
#line 97
c_rt_lib0clear(&___nl__im__50);
#line 97
c_rt_lib0clear(&___nl__im__51);
#line 97
c_rt_lib0move(&___nl__im__48, ptd0rec(___nl__im__49));
#line 97
c_rt_lib0clear(&___nl__im__49);
#line 98
c_rt_lib0move(&___nl__im__54, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 98
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__54));
#line 98
c_rt_lib0move(&___nl__im__55, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 98
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__55));
#line 98
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__54, ___get_global_const(74), ___nl__im__55));
#line 98
c_rt_lib0clear(&___nl__im__54);
#line 98
c_rt_lib0clear(&___nl__im__55);
#line 98
c_rt_lib0move(&___nl__im__52, ptd0rec(___nl__im__53));
#line 98
c_rt_lib0clear(&___nl__im__53);
#line 99
c_rt_lib0move(&___nl__im__58, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 99
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__58));
#line 99
c_rt_lib0move(&___nl__im__59, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 99
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__59));
#line 99
c_rt_lib0move(&___nl__im__60, ptd0string());
#line 99
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__58, ___get_global_const(74), ___nl__im__59, ___get_global_const(370), ___nl__im__60));
#line 99
c_rt_lib0clear(&___nl__im__58);
#line 99
c_rt_lib0clear(&___nl__im__59);
#line 99
c_rt_lib0clear(&___nl__im__60);
#line 99
c_rt_lib0move(&___nl__im__56, ptd0rec(___nl__im__57));
#line 99
c_rt_lib0clear(&___nl__im__57);
#line 100
c_rt_lib0move(&___nl__im__63, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 100
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__63));
#line 100
c_rt_lib0move(&___nl__im__64, ptd0string());
#line 100
c_rt_lib0move(&___nl__im__65, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 100
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__65));
#line 100
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(3, ___get_global_const(74), ___nl__im__63, ___get_global_const(370), ___nl__im__64, ___get_global_const(224), ___nl__im__65));
#line 100
c_rt_lib0clear(&___nl__im__63);
#line 100
c_rt_lib0clear(&___nl__im__64);
#line 100
c_rt_lib0clear(&___nl__im__65);
#line 100
c_rt_lib0move(&___nl__im__61, ptd0rec(___nl__im__62));
#line 100
c_rt_lib0clear(&___nl__im__62);
#line 101
c_rt_lib0move(&___nl__im__66, c_rt_lib0func_new(nlasm0ov_mk_t0ptr, ___get_global_const(312), ___get_global_const(1039)));
#line 101
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__66));
#line 102
c_rt_lib0move(&___nl__im__67, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(312), ___get_global_const(1040)));
#line 102
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__67));
#line 103
c_rt_lib0move(&___nl__im__70, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(312), ___get_global_const(1040)));
#line 103
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__70));
#line 103
c_rt_lib0move(&___nl__im__71, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 103
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__71));
#line 103
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__70, ___get_global_const(74), ___nl__im__71));
#line 103
c_rt_lib0clear(&___nl__im__70);
#line 103
c_rt_lib0clear(&___nl__im__71);
#line 103
c_rt_lib0move(&___nl__im__68, ptd0rec(___nl__im__69));
#line 103
c_rt_lib0clear(&___nl__im__69);
#line 104
c_rt_lib0move(&___nl__im__72, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(312), ___get_global_const(1040)));
#line 104
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__72));
#line 105
c_rt_lib0move(&___nl__im__73, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 105
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__73));
#line 106
c_rt_lib0move(&___nl__im__74, c_rt_lib0func_new(nlasm0var_decl_t0ptr, ___get_global_const(312), ___get_global_const(1034)));
#line 106
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__74));
#line 107
c_rt_lib0move(&___nl__im__75, c_rt_lib0func_new(nlasm0use_field_t0ptr, ___get_global_const(312), ___get_global_const(1041)));
#line 107
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__75));
#line 108
c_rt_lib0move(&___nl__im__76, c_rt_lib0func_new(nlasm0release_field_t0ptr, ___get_global_const(312), ___get_global_const(1042)));
#line 108
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__76));
#line 109
c_rt_lib0move(&___nl__im__77, c_rt_lib0func_new(nlasm0use_index_t0ptr, ___get_global_const(312), ___get_global_const(1043)));
#line 109
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__77));
#line 110
c_rt_lib0move(&___nl__im__78, c_rt_lib0func_new(nlasm0release_index_t0ptr, ___get_global_const(312), ___get_global_const(1044)));
#line 110
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__78));
#line 111
c_rt_lib0move(&___nl__im__79, c_rt_lib0func_new(nlasm0use_hash_index_t0ptr, ___get_global_const(312), ___get_global_const(1045)));
#line 111
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__79));
#line 112
c_rt_lib0move(&___nl__im__80, c_rt_lib0func_new(nlasm0release_hash_index_t0ptr, ___get_global_const(312), ___get_global_const(1046)));
#line 112
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__80));
#line 113
c_rt_lib0move(&___nl__im__81, c_rt_lib0func_new(nlasm0use_variant_t0ptr, ___get_global_const(312), ___get_global_const(1047)));
#line 113
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__81));
#line 114
c_rt_lib0move(&___nl__im__82, c_rt_lib0func_new(nlasm0release_variant_t0ptr, ___get_global_const(312), ___get_global_const(1048)));
#line 114
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__82));
#line 115
c_rt_lib0move(&___nl__im__83, c_rt_lib0func_new(nlasm0hash_iter_t0ptr, ___get_global_const(312), ___get_global_const(1049)));
#line 115
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__83));
#line 116
c_rt_lib0move(&___nl__im__84, c_rt_lib0func_new(nlasm0hash_iter_t0ptr, ___get_global_const(312), ___get_global_const(1049)));
#line 116
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__84));
#line 117
c_rt_lib0move(&___nl__im__85, c_rt_lib0func_new(nlasm0hash_dest_iter_t0ptr, ___get_global_const(312), ___get_global_const(1050)));
#line 117
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__85));
#line 118
c_rt_lib0move(&___nl__im__86, c_rt_lib0func_new(nlasm0hash_dest_iter_t0ptr, ___get_global_const(312), ___get_global_const(1050)));
#line 118
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__86));
#line 118
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(36, ___get_global_const(230), ___nl__im__2, ___get_global_const(231), ___nl__im__7, ___get_global_const(237), ___nl__im__8, ___get_global_const(232), ___nl__im__13, ___get_global_const(233), ___nl__im__14, ___get_global_const(234), ___nl__im__15, ___get_global_const(235), ___nl__im__16, ___get_global_const(236), ___nl__im__22, ___get_global_const(246), ___nl__im__28, ___get_global_const(247), ___nl__im__29, ___get_global_const(238), ___nl__im__30, ___get_global_const(225), ___nl__im__34, ___get_global_const(239), ___nl__im__38, ___get_global_const(240), ___nl__im__43, ___get_global_const(241), ___nl__im__48, ___get_global_const(242), ___nl__im__52, ___get_global_const(243), ___nl__im__56, ___get_global_const(244), ___nl__im__61, ___get_global_const(245), ___nl__im__66, ___get_global_const(248), ___nl__im__67, ___get_global_const(249), ___nl__im__68, ___get_global_const(250), ___nl__im__72, ___get_global_const(251), ___nl__im__73, ___get_global_const(252), ___nl__im__74, ___get_global_const(253), ___nl__im__75, ___get_global_const(254), ___nl__im__76, ___get_global_const(255), ___nl__im__77, ___get_global_const(256), ___nl__im__78, ___get_global_const(257), ___nl__im__79, ___get_global_const(258), ___nl__im__80, ___get_global_const(259), ___nl__im__81, ___get_global_const(260), ___nl__im__82, ___get_global_const(261), ___nl__im__83, ___get_global_const(262), ___nl__im__84, ___get_global_const(263), ___nl__im__85, ___get_global_const(264), ___nl__im__86));
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__7);
#line 118
c_rt_lib0clear(&___nl__im__8);
#line 118
c_rt_lib0clear(&___nl__im__13);
#line 118
c_rt_lib0clear(&___nl__im__14);
#line 118
c_rt_lib0clear(&___nl__im__15);
#line 118
c_rt_lib0clear(&___nl__im__16);
#line 118
c_rt_lib0clear(&___nl__im__22);
#line 118
c_rt_lib0clear(&___nl__im__28);
#line 118
c_rt_lib0clear(&___nl__im__29);
#line 118
c_rt_lib0clear(&___nl__im__30);
#line 118
c_rt_lib0clear(&___nl__im__34);
#line 118
c_rt_lib0clear(&___nl__im__38);
#line 118
c_rt_lib0clear(&___nl__im__43);
#line 118
c_rt_lib0clear(&___nl__im__48);
#line 118
c_rt_lib0clear(&___nl__im__52);
#line 118
c_rt_lib0clear(&___nl__im__56);
#line 118
c_rt_lib0clear(&___nl__im__61);
#line 118
c_rt_lib0clear(&___nl__im__66);
#line 118
c_rt_lib0clear(&___nl__im__67);
#line 118
c_rt_lib0clear(&___nl__im__68);
#line 118
c_rt_lib0clear(&___nl__im__72);
#line 118
c_rt_lib0clear(&___nl__im__73);
#line 118
c_rt_lib0clear(&___nl__im__74);
#line 118
c_rt_lib0clear(&___nl__im__75);
#line 118
c_rt_lib0clear(&___nl__im__76);
#line 118
c_rt_lib0clear(&___nl__im__77);
#line 118
c_rt_lib0clear(&___nl__im__78);
#line 118
c_rt_lib0clear(&___nl__im__79);
#line 118
c_rt_lib0clear(&___nl__im__80);
#line 118
c_rt_lib0clear(&___nl__im__81);
#line 118
c_rt_lib0clear(&___nl__im__82);
#line 118
c_rt_lib0clear(&___nl__im__83);
#line 118
c_rt_lib0clear(&___nl__im__84);
#line 118
c_rt_lib0clear(&___nl__im__85);
#line 118
c_rt_lib0clear(&___nl__im__86);
#line 118
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 118
c_rt_lib0clear(&___nl__im__1);
#line 118
return ___nl__im__0;
#line 118
c_rt_lib0clear(&___nl__im__0);
#line 118
return NULL;
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
#line 124
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 124
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 125
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 125
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 125
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(205), ___nl__im__2, ___get_global_const(432), ___nl__im__3));
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 125
c_rt_lib0clear(&___nl__im__1);
#line 125
return ___nl__im__0;
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
return NULL;
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
#line 131
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 131
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 132
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 132
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 133
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 133
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(561), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(563), ___nl__im__4));
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
c_rt_lib0clear(&___nl__im__3);
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 133
c_rt_lib0clear(&___nl__im__1);
#line 133
return ___nl__im__0;
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
return NULL;
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
#line 139
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 139
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 141
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 141
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(547), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(563), ___nl__im__4));
#line 141
c_rt_lib0clear(&___nl__im__2);
#line 141
c_rt_lib0clear(&___nl__im__3);
#line 141
c_rt_lib0clear(&___nl__im__4);
#line 141
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 141
c_rt_lib0clear(&___nl__im__1);
#line 141
return ___nl__im__0;
#line 141
c_rt_lib0clear(&___nl__im__0);
#line 141
return NULL;
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
#line 147
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 147
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 148
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 148
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 149
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 149
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 149
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(561), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(565), ___nl__im__4));
#line 149
c_rt_lib0clear(&___nl__im__2);
#line 149
c_rt_lib0clear(&___nl__im__3);
#line 149
c_rt_lib0clear(&___nl__im__4);
#line 149
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 149
c_rt_lib0clear(&___nl__im__1);
#line 149
return ___nl__im__0;
#line 149
c_rt_lib0clear(&___nl__im__0);
#line 149
return NULL;
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
#line 155
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 155
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 156
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 156
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 157
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 157
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 157
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(547), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(565), ___nl__im__4));
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 157
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
return ___nl__im__0;
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
return NULL;
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
#line 163
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 163
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 164
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 164
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 165
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 165
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 166
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 166
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(561), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(565), ___nl__im__4, ___get_global_const(566), ___nl__im__5));
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
return ___nl__im__0;
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
return NULL;
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
#line 172
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 172
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 173
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 173
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 174
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 174
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 174
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(547), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(565), ___nl__im__4));
#line 174
c_rt_lib0clear(&___nl__im__2);
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
c_rt_lib0clear(&___nl__im__4);
#line 174
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
return ___nl__im__0;
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
return NULL;
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
#line 180
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 180
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 181
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 181
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 182
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 183
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 183
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(561), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(535), ___nl__im__4, ___get_global_const(522), ___nl__im__5));
#line 183
c_rt_lib0clear(&___nl__im__2);
#line 183
c_rt_lib0clear(&___nl__im__3);
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
return ___nl__im__0;
#line 183
c_rt_lib0clear(&___nl__im__0);
#line 183
return NULL;
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
#line 189
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 189
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 190
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 190
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 191
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 192
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 192
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(547), ___nl__im__2, ___get_global_const(560), ___nl__im__3, ___get_global_const(535), ___nl__im__4, ___get_global_const(522), ___nl__im__5));
#line 192
c_rt_lib0clear(&___nl__im__2);
#line 192
c_rt_lib0clear(&___nl__im__3);
#line 192
c_rt_lib0clear(&___nl__im__4);
#line 192
c_rt_lib0clear(&___nl__im__5);
#line 192
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
return ___nl__im__0;
#line 192
c_rt_lib0clear(&___nl__im__0);
#line 192
return NULL;
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
#line 198
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 198
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 199
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 199
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 199
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 199
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(370), ___nl__im__6, ___get_global_const(224), ___nl__im__7));
#line 199
c_rt_lib0clear(&___nl__im__6);
#line 199
c_rt_lib0clear(&___nl__im__7);
#line 199
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 199
c_rt_lib0clear(&___nl__im__5);
#line 199
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 199
c_rt_lib0clear(&___nl__im__4);
#line 199
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__2, ___get_global_const(74), ___nl__im__3));
#line 199
c_rt_lib0clear(&___nl__im__2);
#line 199
c_rt_lib0clear(&___nl__im__3);
#line 199
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
return ___nl__im__0;
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
return NULL;
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
#line 205
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 205
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 206
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 206
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 206
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(570), ___nl__im__2, ___get_global_const(129), ___nl__im__3));
#line 206
c_rt_lib0clear(&___nl__im__2);
#line 206
c_rt_lib0clear(&___nl__im__3);
#line 206
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 206
c_rt_lib0clear(&___nl__im__1);
#line 206
return ___nl__im__0;
#line 206
c_rt_lib0clear(&___nl__im__0);
#line 206
return NULL;
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
#line 212
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 212
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 213
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 213
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 214
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 214
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 214
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__2, ___get_global_const(570), ___nl__im__3, ___get_global_const(129), ___nl__im__4));
#line 214
c_rt_lib0clear(&___nl__im__2);
#line 214
c_rt_lib0clear(&___nl__im__3);
#line 214
c_rt_lib0clear(&___nl__im__4);
#line 214
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 214
c_rt_lib0clear(&___nl__im__1);
#line 214
return ___nl__im__0;
#line 214
c_rt_lib0clear(&___nl__im__0);
#line 214
return NULL;
return NULL;
}

ImmT  nlasm0label_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nlasm0label_t");
return nlasm0label_t();
}
ImmT  nlasm0label_t() {
nlasm_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 219
c_rt_lib0move(&___nl__im__0, ptd0int());
#line 219
return ___nl__im__0;
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
return NULL;
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
#line 223
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 223
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 223
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 223
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 223
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 223
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__2, ___get_global_const(74), ___nl__im__3, ___get_global_const(515), ___nl__im__4));
#line 223
c_rt_lib0clear(&___nl__im__2);
#line 223
c_rt_lib0clear(&___nl__im__3);
#line 223
c_rt_lib0clear(&___nl__im__4);
#line 223
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
return ___nl__im__0;
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
return NULL;
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
#line 227
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 227
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 227
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 227
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 227
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 227
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 227
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 227
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__2, ___get_global_const(274), ___nl__im__3, ___get_global_const(275), ___nl__im__4, ___get_global_const(515), ___nl__im__5));
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
c_rt_lib0clear(&___nl__im__3);
#line 227
c_rt_lib0clear(&___nl__im__4);
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 227
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 227
c_rt_lib0clear(&___nl__im__1);
#line 227
return ___nl__im__0;
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
return NULL;
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
#line 231
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 231
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 231
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 231
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__2, ___get_global_const(328), ___nl__im__3));
#line 231
c_rt_lib0clear(&___nl__im__2);
#line 231
c_rt_lib0clear(&___nl__im__3);
#line 231
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
return ___nl__im__0;
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
return NULL;
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
#line 236
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 236
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 237
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 237
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 237
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 237
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__im__5, ___get_global_const(328), ___nl__im__6));
#line 237
c_rt_lib0clear(&___nl__im__5);
#line 237
c_rt_lib0clear(&___nl__im__6);
#line 237
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 237
c_rt_lib0clear(&___nl__im__4);
#line 238
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 239
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 240
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 240
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 240
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__2, ___get_global_const(74), ___nl__im__3, ___get_global_const(535), ___nl__im__7, ___get_global_const(522), ___nl__im__8, ___get_global_const(540), ___nl__im__9));
#line 240
c_rt_lib0clear(&___nl__im__2);
#line 240
c_rt_lib0clear(&___nl__im__3);
#line 240
c_rt_lib0clear(&___nl__im__7);
#line 240
c_rt_lib0clear(&___nl__im__8);
#line 240
c_rt_lib0clear(&___nl__im__9);
#line 240
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 240
c_rt_lib0clear(&___nl__im__1);
#line 240
return ___nl__im__0;
#line 240
c_rt_lib0clear(&___nl__im__0);
#line 240
return NULL;
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
#line 246
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 246
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 247
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 248
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 249
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 249
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 249
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 249
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 249
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__8, ___get_global_const(40), ___nl__im__9));
#line 249
c_rt_lib0clear(&___nl__im__8);
#line 249
c_rt_lib0clear(&___nl__im__9);
#line 249
c_rt_lib0move(&___nl__im__6, ptd0var(___nl__im__7));
#line 249
c_rt_lib0clear(&___nl__im__7);
#line 249
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 249
c_rt_lib0clear(&___nl__im__6);
#line 249
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__2, ___get_global_const(266), ___nl__im__3, ___get_global_const(268), ___nl__im__4, ___get_global_const(265), ___nl__im__5));
#line 249
c_rt_lib0clear(&___nl__im__2);
#line 249
c_rt_lib0clear(&___nl__im__3);
#line 249
c_rt_lib0clear(&___nl__im__4);
#line 249
c_rt_lib0clear(&___nl__im__5);
#line 249
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 249
c_rt_lib0clear(&___nl__im__1);
#line 249
return ___nl__im__0;
#line 249
c_rt_lib0clear(&___nl__im__0);
#line 249
return NULL;
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
#line 255
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 256
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 257
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 258
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 259
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 259
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 260
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 260
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 261
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 261
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 262
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 262
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__9));
#line 262
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(8, ___get_global_const(132), ___nl__im__2, ___get_global_const(516), ___nl__im__3, ___get_global_const(528), ___nl__im__4, ___get_global_const(34), ___nl__im__5, ___get_global_const(514), ___nl__im__6, ___get_global_const(128), ___nl__im__7, ___get_global_const(518), ___nl__im__8, ___get_global_const(129), ___nl__im__9));
#line 262
c_rt_lib0clear(&___nl__im__2);
#line 262
c_rt_lib0clear(&___nl__im__3);
#line 262
c_rt_lib0clear(&___nl__im__4);
#line 262
c_rt_lib0clear(&___nl__im__5);
#line 262
c_rt_lib0clear(&___nl__im__6);
#line 262
c_rt_lib0clear(&___nl__im__7);
#line 262
c_rt_lib0clear(&___nl__im__8);
#line 262
c_rt_lib0clear(&___nl__im__9);
#line 262
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 262
c_rt_lib0clear(&___nl__im__1);
#line 262
return ___nl__im__0;
#line 262
c_rt_lib0clear(&___nl__im__0);
#line 262
return NULL;
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
#line 268
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 269
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 269
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__2, ___get_global_const(392), ___nl__im__3));
#line 269
c_rt_lib0clear(&___nl__im__2);
#line 269
c_rt_lib0clear(&___nl__im__3);
#line 269
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 269
c_rt_lib0clear(&___nl__im__1);
#line 269
return ___nl__im__0;
#line 269
c_rt_lib0clear(&___nl__im__0);
#line 269
return NULL;
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
#line 274
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 274
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 274
c_rt_lib0clear(&___nl__im__3);
#line 274
___nl__int__4 = 1;
#line 274
___nl__int__4 = -___nl__int__4;
#line 274
___nl__int__5 = ___nl__int__2 == ___nl__int__4;
#line 274
___nl__bool__1 = ___nl__int__5;
#line 274
//clear ___nl__int__2;
#line 274
//clear ___nl__int__4;
#line 274
//clear ___nl__int__5;
#line 274
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__1));
#line 274
c_rt_lib0clear(&___nl__im__0);
#line 274
//clear ___nl__bool__1;
#line 274
return ___nl__im__6;
#line 274
c_rt_lib0clear(&___nl__im__0);
#line 274
//clear ___nl__bool__1;
#line 274
c_rt_lib0clear(&___nl__im__6);
#line 274
return NULL;
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
#line 278
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 278
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 278
c_rt_lib0clear(&___nl__im__4);
#line 278
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 278
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 278
c_rt_lib0clear(&___nl__im__6);
#line 278
___nl__int__7 = ___nl__int__3 == ___nl__int__5;
#line 278
___nl__bool__2 = ___nl__int__7;
#line 278
//clear ___nl__int__3;
#line 278
//clear ___nl__int__5;
#line 278
//clear ___nl__int__7;
#line 278
c_rt_lib0clear(&___nl__im__0);
#line 278
c_rt_lib0clear(&___nl__im__1);
#line 278
return ___nl__bool__2;
return false;
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
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
#line 282
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(132));
#line 282
if(___nl__bool__2){ goto label_2;}
#line 284
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(516));
#line 284
if(___nl__bool__2){ goto label_3;}
#line 286
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(34));
#line 286
if(___nl__bool__2){ goto label_4;}
#line 288
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(528));
#line 288
if(___nl__bool__2){ goto label_5;}
#line 290
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(514));
#line 290
if(___nl__bool__2){ goto label_6;}
#line 292
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(128));
#line 292
if(___nl__bool__2){ goto label_7;}
#line 294
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(518));
#line 294
if(___nl__bool__2){ goto label_8;}
#line 296
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(129));
#line 296
if(___nl__bool__2){ goto label_9;}
#line 296
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 296
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 296
nl_die_arg(___nl__im__3);
#line 282
label_2:
;
#line 283
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(132));
#line 283
if(___nl__bool__4){ goto label_10;}
#line 283
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(528));
#line 283
label_10:
;
#line 283
c_rt_lib0clear(&___nl__im__0);
#line 283
c_rt_lib0clear(&___nl__im__1);
#line 283
//clear ___nl__bool__2;
#line 283
c_rt_lib0clear(&___nl__im__3);
#line 283
return ___nl__bool__4;
#line 284
goto label_1;
#line 284
label_3:
;
#line 285
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(516));
#line 285
c_rt_lib0clear(&___nl__im__0);
#line 285
c_rt_lib0clear(&___nl__im__1);
#line 285
//clear ___nl__bool__2;
#line 285
c_rt_lib0clear(&___nl__im__3);
#line 285
//clear ___nl__bool__4;
#line 285
return ___nl__bool__5;
#line 286
goto label_1;
#line 286
label_4:
;
#line 287
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(34));
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
//clear ___nl__bool__2;
#line 287
c_rt_lib0clear(&___nl__im__3);
#line 287
//clear ___nl__bool__4;
#line 287
//clear ___nl__bool__5;
#line 287
return ___nl__bool__6;
#line 288
goto label_1;
#line 288
label_5:
;
#line 289
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(528));
#line 289
if(___nl__bool__7){ goto label_11;}
#line 289
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(132));
#line 289
label_11:
;
#line 289
c_rt_lib0clear(&___nl__im__0);
#line 289
c_rt_lib0clear(&___nl__im__1);
#line 289
//clear ___nl__bool__2;
#line 289
c_rt_lib0clear(&___nl__im__3);
#line 289
//clear ___nl__bool__4;
#line 289
//clear ___nl__bool__5;
#line 289
//clear ___nl__bool__6;
#line 289
return ___nl__bool__7;
#line 290
goto label_1;
#line 290
label_6:
;
#line 290
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(514)));
#line 290
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 291
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(514));
#line 291
c_rt_lib0clear(&___nl__im__0);
#line 291
c_rt_lib0clear(&___nl__im__1);
#line 291
//clear ___nl__bool__2;
#line 291
c_rt_lib0clear(&___nl__im__3);
#line 291
//clear ___nl__bool__4;
#line 291
//clear ___nl__bool__5;
#line 291
//clear ___nl__bool__6;
#line 291
//clear ___nl__bool__7;
#line 291
c_rt_lib0clear(&___nl__im__8);
#line 291
c_rt_lib0clear(&___nl__im__9);
#line 291
return ___nl__bool__10;
#line 292
goto label_1;
#line 292
label_7:
;
#line 292
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(128)));
#line 292
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 293
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(128));
#line 293
c_rt_lib0clear(&___nl__im__0);
#line 293
c_rt_lib0clear(&___nl__im__1);
#line 293
//clear ___nl__bool__2;
#line 293
c_rt_lib0clear(&___nl__im__3);
#line 293
//clear ___nl__bool__4;
#line 293
//clear ___nl__bool__5;
#line 293
//clear ___nl__bool__6;
#line 293
//clear ___nl__bool__7;
#line 293
c_rt_lib0clear(&___nl__im__8);
#line 293
c_rt_lib0clear(&___nl__im__9);
#line 293
//clear ___nl__bool__10;
#line 293
c_rt_lib0clear(&___nl__im__11);
#line 293
c_rt_lib0clear(&___nl__im__12);
#line 293
return ___nl__bool__13;
#line 294
goto label_1;
#line 294
label_8:
;
#line 294
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(518)));
#line 294
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 295
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(518));
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
//clear ___nl__bool__2;
#line 295
c_rt_lib0clear(&___nl__im__3);
#line 295
//clear ___nl__bool__4;
#line 295
//clear ___nl__bool__5;
#line 295
//clear ___nl__bool__6;
#line 295
//clear ___nl__bool__7;
#line 295
c_rt_lib0clear(&___nl__im__8);
#line 295
c_rt_lib0clear(&___nl__im__9);
#line 295
//clear ___nl__bool__10;
#line 295
c_rt_lib0clear(&___nl__im__11);
#line 295
c_rt_lib0clear(&___nl__im__12);
#line 295
//clear ___nl__bool__13;
#line 295
c_rt_lib0clear(&___nl__im__14);
#line 295
c_rt_lib0clear(&___nl__im__15);
#line 295
return ___nl__bool__16;
#line 296
goto label_1;
#line 296
label_9:
;
#line 296
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(129)));
#line 296
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 297
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(129));
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
c_rt_lib0clear(&___nl__im__1);
#line 297
//clear ___nl__bool__2;
#line 297
c_rt_lib0clear(&___nl__im__3);
#line 297
//clear ___nl__bool__4;
#line 297
//clear ___nl__bool__5;
#line 297
//clear ___nl__bool__6;
#line 297
//clear ___nl__bool__7;
#line 297
c_rt_lib0clear(&___nl__im__8);
#line 297
c_rt_lib0clear(&___nl__im__9);
#line 297
//clear ___nl__bool__10;
#line 297
c_rt_lib0clear(&___nl__im__11);
#line 297
c_rt_lib0clear(&___nl__im__12);
#line 297
//clear ___nl__bool__13;
#line 297
c_rt_lib0clear(&___nl__im__14);
#line 297
c_rt_lib0clear(&___nl__im__15);
#line 297
//clear ___nl__bool__16;
#line 297
c_rt_lib0clear(&___nl__im__17);
#line 297
c_rt_lib0clear(&___nl__im__18);
#line 297
return ___nl__bool__19;
#line 298
goto label_1;
#line 298
label_1:
;
return false;
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
