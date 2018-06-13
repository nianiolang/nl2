
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "generator_c_struct_dependence_sort.h"
#include "hash.h"
#include "tct.h"
#include "array.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd.h"
#include "nlasm.h"
#include "ov.h"
#include "anon_naming.h"
#include "boolean_t.h"
#include "tct.h"
#include "generator_c_struct_dependence_sort.h"
#line 1 "generator_c_struct_dependence_sort.nl"

static ImmT *__const__f = NULL;
void generator_c_struct_dependence_sort_priv0__const__init();
ImmT generator_c_struct_dependence_sort_priv0__const__sim(int __nr);
ImmT generator_c_struct_dependence_sort_priv0__const__sing(int __nr);

ImmT  generator_c_struct_dependence_sort_priv0get_module_name(ImmT  ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0get_fun_name(ImmT  ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0get_name(tct0meta_type0type ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0get_required_types_list(tct0meta_type0type ___nl__im__0,generator_c_struct_dependence_sort0graph_node0type* ___ref___im__1,ImmT  ___nl__im__2);
generator_c_struct_dependence_sort0graph0type generator_c_struct_dependence_sort_priv0in_funs_to_graph(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_c_struct_dependence_sort_priv0remove_dups(ImmT * ___ref___im__0);
generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0join_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0common_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0split_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
generator_c_struct_dependence_sort0sorted_element0type generator_c_struct_dependence_sort_priv0type_to_var(ImmT  ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1);
ImmT  generator_c_struct_dependence_sort_priv0sort_graph_help(generator_c_struct_dependence_sort0graph0type ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,ImmT * ___ref___im__3,generator_c_struct_dependence_sort0sorted_element0type ___nl__im__4,bool* ___ref___bool__5);
generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort_priv0sort_graph(generator_c_struct_dependence_sort0graph0type ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1);
ImmT  generator_c_struct_dependence_sort_priv0deep_anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1);
ImmT  generator_c_struct_dependence_sort_priv0get_anons(ImmT  ___nl__im__0);
ImmT  generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(ImmT  ___nl__im__0);


ImmT  generator_c_struct_dependence_sort0result_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0result_t");
return generator_c_struct_dependence_sort0result_t();
}
ImmT  generator_c_struct_dependence_sort0result_t() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 13
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c_struct_dependence_sort0result_element0ptr, ___get_global_const(682), ___get_global_const(683)));
#line 13
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 13
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 13
c_rt_lib0clear(&___nl__im__3);
#line 14
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 14
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(448), ___nl__im__2, ___get_global_const(449), ___nl__im__4));
#line 14
c_rt_lib0clear(&___nl__im__2);
#line 14
c_rt_lib0clear(&___nl__im__4);
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
}

ImmT  generator_c_struct_dependence_sort0result_element0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0result_element");
return generator_c_struct_dependence_sort0result_element();
}
ImmT  generator_c_struct_dependence_sort0result_element() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 20
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 21
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 21
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 23
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 25
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 25
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(451), ___nl__im__6, ___get_global_const(452), ___nl__im__7, ___get_global_const(453), ___nl__im__8));
#line 25
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 25
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(168), ___nl__im__2, ___get_global_const(454), ___nl__im__3, ___get_global_const(450), ___nl__im__4));
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
return ___nl__im__0;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
return NULL;
}

ImmT  generator_c_struct_dependence_sort0graph_node0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0graph_node");
return generator_c_struct_dependence_sort0graph_node();
}
ImmT  generator_c_struct_dependence_sort0graph_node() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 32
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 32
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 33
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 33
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 33
c_rt_lib0clear(&___nl__im__5);
#line 34
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(94), ___get_global_const(95)));
#line 34
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 35
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 35
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 35
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(684), ___nl__im__2, ___get_global_const(685), ___nl__im__4, ___get_global_const(686), ___nl__im__6, ___get_global_const(95), ___nl__im__7));
#line 35
c_rt_lib0clear(&___nl__im__2);
#line 35
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0clear(&___nl__im__6);
#line 35
c_rt_lib0clear(&___nl__im__7);
#line 35
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 35
c_rt_lib0clear(&___nl__im__1);
#line 35
return ___nl__im__0;
#line 35
c_rt_lib0clear(&___nl__im__0);
#line 35
return NULL;
}

ImmT  generator_c_struct_dependence_sort0graph0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0graph");
return generator_c_struct_dependence_sort0graph();
}
ImmT  generator_c_struct_dependence_sort0graph() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 40
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(generator_c_struct_dependence_sort0graph_node0ptr, ___get_global_const(682), ___get_global_const(687)));
#line 40
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 40
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 40
return ___nl__im__0;
#line 40
c_rt_lib0clear(&___nl__im__0);
#line 40
return NULL;
}

ImmT  generator_c_struct_dependence_sort0sorted_element0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0sorted_element");
return generator_c_struct_dependence_sort0sorted_element();
}
ImmT  generator_c_struct_dependence_sort0sorted_element() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 45
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 46
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 47
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 47
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(451), ___nl__im__2, ___get_global_const(452), ___nl__im__3, ___get_global_const(453), ___nl__im__4));
#line 47
c_rt_lib0clear(&___nl__im__2);
#line 47
c_rt_lib0clear(&___nl__im__3);
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 47
c_rt_lib0clear(&___nl__im__1);
#line 47
return ___nl__im__0;
#line 47
c_rt_lib0clear(&___nl__im__0);
#line 47
return NULL;
}

ImmT  generator_c_struct_dependence_sort0decl_def_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0decl_def_type");
return generator_c_struct_dependence_sort0decl_def_type();
}
ImmT  generator_c_struct_dependence_sort0decl_def_type() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 53
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 54
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 55
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 56
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 56
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(688), ___nl__im__2, ___get_global_const(689), ___nl__im__3, ___get_global_const(453), ___nl__im__4, ___get_global_const(73), ___nl__im__5));
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
c_rt_lib0clear(&___nl__im__4);
#line 56
c_rt_lib0clear(&___nl__im__5);
#line 56
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
return ___nl__im__0;
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 61
c_rt_lib0move(&___nl__im__3,___get_global_const(35));
#line 61
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__3, ___nl__im__0));
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
___nl__int__4 = 0;
#line 61
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 61
c_rt_lib0clear(&___nl__im__2);
#line 61
//clear ___nl__int__4;
#line 61
c_rt_lib0clear(&___nl__im__0);
#line 61
return ___nl__im__1;
}

ImmT  generator_c_struct_dependence_sort_priv0get_fun_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 65
c_rt_lib0move(&___nl__im__3,___get_global_const(35));
#line 65
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__3, ___nl__im__0));
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
___nl__int__4 = 1;
#line 65
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
//clear ___nl__int__4;
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
return ___nl__im__1;
}

ImmT  generator_c_struct_dependence_sort_priv0get_name(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 69
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 69
___nl__bool__1 = !___nl__bool__1;
#line 69
if(___nl__bool__1){ goto label_2;}
#line 70
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 70
c_rt_lib0move(&___nl__im__2, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__3));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
//clear ___nl__bool__1;
#line 70
return ___nl__im__2;
#line 71
goto label_1;
#line 71
label_2:
;
#line 71
label_1:
;
#line 71
//clear ___nl__bool__1;
#line 71
c_rt_lib0clear(&___nl__im__2);
#line 72
c_rt_lib0move(&___nl__im__4, anon_naming0get_anon_name(___nl__im__0));
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
return ___nl__im__4;
}

ImmT  generator_c_struct_dependence_sort_priv0get_required_types_list(tct0meta_type0type ___nl__im__0,generator_c_struct_dependence_sort0graph_node0type* ___ref___im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__2);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__string__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__string__43 = NULL;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
bool  ___nl__bool__48 = false;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
bool  ___nl__bool__53 = false;
bool  ___nl__bool__54 = false;
bool  ___nl__bool__55 = false;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__string__59 = NULL;
#line 77
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 77
if(___nl__bool__3){ goto label_2;}
#line 78
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 78
if(___nl__bool__3){ goto label_3;}
#line 79
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 79
if(___nl__bool__3){ goto label_4;}
#line 82
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 82
if(___nl__bool__3){ goto label_5;}
#line 83
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 83
if(___nl__bool__3){ goto label_6;}
#line 86
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 86
if(___nl__bool__3){ goto label_7;}
#line 87
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 87
if(___nl__bool__3){ goto label_8;}
#line 92
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 92
if(___nl__bool__3){ goto label_9;}
#line 96
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 96
if(___nl__bool__3){ goto label_10;}
#line 97
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 97
if(___nl__bool__3){ goto label_11;}
#line 98
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 98
if(___nl__bool__3){ goto label_12;}
#line 99
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 99
if(___nl__bool__3){ goto label_13;}
#line 100
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 100
if(___nl__bool__3){ goto label_14;}
#line 101
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 101
if(___nl__bool__3){ goto label_15;}
#line 102
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 102
if(___nl__bool__3){ goto label_16;}
#line 114
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 114
if(___nl__bool__3){ goto label_17;}
#line 114
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 114
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 114
nl_die_arg(___nl__im__4);
#line 77
label_2:
;
#line 78
goto label_1;
#line 78
label_3:
;
#line 78
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 78
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 79
goto label_1;
#line 79
label_4:
;
#line 79
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 79
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 80
c_rt_lib0move(&___nl__im__9,___get_global_const(685));
#line 80
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__9));
#line 80
c_rt_lib0move(&___nl__im__10, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 80
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__10));
#line 80
c_rt_lib0move(&___nl__string__11,___get_global_const(685));
#line 80
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__11, ___nl__im__9));
#line 80
c_rt_lib0clear(&___nl__im__9);
#line 80
c_rt_lib0clear(&___nl__im__10);
#line 80
c_rt_lib0clear(&___nl__string__11);
#line 81
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__7, ___ref___im__1, ___nl__im__2));
#line 82
goto label_1;
#line 82
label_5:
;
#line 82
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 82
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 83
goto label_1;
#line 83
label_6:
;
#line 83
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 83
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 84
c_rt_lib0move(&___nl__im__16,___get_global_const(685));
#line 84
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__16));
#line 84
c_rt_lib0move(&___nl__im__17, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 84
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 84
c_rt_lib0move(&___nl__string__18,___get_global_const(685));
#line 84
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__18, ___nl__im__16));
#line 84
c_rt_lib0clear(&___nl__im__16);
#line 84
c_rt_lib0clear(&___nl__im__17);
#line 84
c_rt_lib0clear(&___nl__string__18);
#line 85
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__14, ___ref___im__1, ___nl__im__2));
#line 86
goto label_1;
#line 86
label_7:
;
#line 86
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 86
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 87
goto label_1;
#line 87
label_8:
;
#line 87
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 87
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 88
c_rt_lib0move(&___nl__im__23,___get_global_const(685));
#line 88
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__23));
#line 88
c_rt_lib0move(&___nl__im__24, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 88
c_rt_lib0delete(array0push(&___nl__im__23, ___nl__im__24));
#line 88
c_rt_lib0move(&___nl__string__25,___get_global_const(685));
#line 88
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__25, ___nl__im__23));
#line 88
c_rt_lib0clear(&___nl__im__23);
#line 88
c_rt_lib0clear(&___nl__im__24);
#line 88
c_rt_lib0clear(&___nl__string__25);
#line 89
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__21));
#line 89
label_20:
;
#line 89
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 89
if(___nl__bool__27){ goto label_18;}
#line 89
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 89
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__21, ___nl__im__26));
#line 90
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__28, ___ref___im__1, ___nl__im__2));
#line 90
label_19:
;
#line 91
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 91
goto label_20;
#line 91
label_18:
;
#line 92
goto label_1;
#line 92
label_9:
;
#line 92
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 92
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 93
c_rt_lib0move(&___nl__im__33, generator_c_struct_dependence_sort_priv0get_module_name(___nl__im__30));
#line 93
___nl__bool__32 = c_rt_lib0eq(___nl__im__33, ___nl__im__2);
#line 93
c_rt_lib0clear(&___nl__im__33);
#line 93
___nl__bool__32 = !___nl__bool__32;
#line 93
if(___nl__bool__32){ goto label_22;}
#line 94
c_rt_lib0move(&___nl__im__34,___get_global_const(685));
#line 94
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__34));
#line 94
c_rt_lib0move(&___nl__im__35, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__30));
#line 94
c_rt_lib0delete(array0push(&___nl__im__34, ___nl__im__35));
#line 94
c_rt_lib0move(&___nl__string__36,___get_global_const(685));
#line 94
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__36, ___nl__im__34));
#line 94
c_rt_lib0clear(&___nl__im__34);
#line 94
c_rt_lib0clear(&___nl__im__35);
#line 94
c_rt_lib0clear(&___nl__string__36);
#line 95
goto label_21;
#line 95
label_22:
;
#line 95
label_21:
;
#line 95
//clear ___nl__bool__32;
#line 96
goto label_1;
#line 96
label_10:
;
#line 97
goto label_1;
#line 97
label_11:
;
#line 98
goto label_1;
#line 98
label_12:
;
#line 99
goto label_1;
#line 99
label_13:
;
#line 100
goto label_1;
#line 100
label_14:
;
#line 101
goto label_1;
#line 101
label_15:
;
#line 101
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 101
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 102
goto label_1;
#line 102
label_16:
;
#line 102
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 102
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 103
c_rt_lib0move(&___nl__im__41,___get_global_const(685));
#line 103
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__41));
#line 103
c_rt_lib0move(&___nl__im__42, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 103
c_rt_lib0delete(array0push(&___nl__im__41, ___nl__im__42));
#line 103
c_rt_lib0move(&___nl__string__43,___get_global_const(685));
#line 103
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__41));
#line 103
c_rt_lib0clear(&___nl__im__41);
#line 103
c_rt_lib0clear(&___nl__im__42);
#line 103
c_rt_lib0clear(&___nl__string__43);
#line 104
c_rt_lib0move(&___nl__im__47, c_rt_lib0init_iter(___nl__im__39));
#line 104
label_25:
;
#line 104
___nl__bool__45 = c_rt_lib0is_end_hash(___nl__im__47);
#line 104
if(___nl__bool__45){ goto label_23;}
#line 104
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_key_iter(___nl__im__47));
#line 104
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value(___nl__im__39, ___nl__im__44));
#line 105
___nl__bool__48 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(28));
#line 105
if(___nl__bool__48){ goto label_27;}
#line 111
___nl__bool__48 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(29));
#line 111
if(___nl__bool__48){ goto label_28;}
#line 111
c_rt_lib0move(&___nl__im__49,___get_global_const(16));
#line 111
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(2, ___nl__im__49, ___nl__im__46));
#line 111
nl_die_arg(___nl__im__49);
#line 105
label_27:
;
#line 105
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__46, ___get_global_const(28)));
#line 105
c_rt_lib0copy(&___nl__im__50, ___nl__im__51);
#line 106
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(6));
#line 106
if(___nl__bool__52){ goto label_34;}
#line 106
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(2));
#line 106
label_34:
;
#line 106
//clear ___nl__bool__56;
#line 106
if(___nl__bool__52){ goto label_33;}
#line 107
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(14));
#line 107
label_33:
;
#line 107
//clear ___nl__bool__55;
#line 107
if(___nl__bool__52){ goto label_32;}
#line 107
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(4));
#line 107
label_32:
;
#line 107
//clear ___nl__bool__54;
#line 107
if(___nl__bool__52){ goto label_31;}
#line 108
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(7));
#line 108
label_31:
;
#line 108
//clear ___nl__bool__53;
#line 108
___nl__bool__52 = !___nl__bool__52;
#line 108
if(___nl__bool__52){ goto label_30;}
#line 109
c_rt_lib0move(&___nl__im__57,___get_global_const(684));
#line 109
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__57));
#line 109
c_rt_lib0move(&___nl__im__58, generator_c_struct_dependence_sort_priv0get_name(___nl__im__50));
#line 109
c_rt_lib0delete(array0push(&___nl__im__57, ___nl__im__58));
#line 109
c_rt_lib0move(&___nl__string__59,___get_global_const(684));
#line 109
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__59, ___nl__im__57));
#line 109
c_rt_lib0clear(&___nl__im__57);
#line 109
c_rt_lib0clear(&___nl__im__58);
#line 109
c_rt_lib0clear(&___nl__string__59);
#line 110
goto label_29;
#line 110
label_30:
;
#line 110
label_29:
;
#line 110
//clear ___nl__bool__52;
#line 111
goto label_26;
#line 111
label_28:
;
#line 112
goto label_26;
#line 112
label_26:
;
#line 112
label_24:
;
#line 113
c_rt_lib0move(&___nl__im__47, c_rt_lib0next_iter(___nl__im__47));
#line 113
goto label_25;
#line 113
label_23:
;
#line 114
goto label_1;
#line 114
label_17:
;
#line 115
goto label_1;
#line 115
label_1:
;
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__2);
#line 115
//clear ___nl__bool__3;
#line 115
c_rt_lib0clear(&___nl__im__4);
#line 115
c_rt_lib0clear(&___nl__im__5);
#line 115
c_rt_lib0clear(&___nl__im__6);
#line 115
c_rt_lib0clear(&___nl__im__7);
#line 115
c_rt_lib0clear(&___nl__im__8);
#line 115
c_rt_lib0clear(&___nl__im__12);
#line 115
c_rt_lib0clear(&___nl__im__13);
#line 115
c_rt_lib0clear(&___nl__im__14);
#line 115
c_rt_lib0clear(&___nl__im__15);
#line 115
c_rt_lib0clear(&___nl__im__19);
#line 115
c_rt_lib0clear(&___nl__im__20);
#line 115
c_rt_lib0clear(&___nl__im__21);
#line 115
c_rt_lib0clear(&___nl__im__22);
#line 115
c_rt_lib0clear(&___nl__im__26);
#line 115
//clear ___nl__bool__27;
#line 115
c_rt_lib0clear(&___nl__im__28);
#line 115
c_rt_lib0clear(&___nl__im__29);
#line 115
c_rt_lib0clear(&___nl__im__30);
#line 115
c_rt_lib0clear(&___nl__im__31);
#line 115
c_rt_lib0clear(&___nl__im__37);
#line 115
c_rt_lib0clear(&___nl__im__38);
#line 115
c_rt_lib0clear(&___nl__im__39);
#line 115
c_rt_lib0clear(&___nl__im__40);
#line 115
c_rt_lib0clear(&___nl__im__44);
#line 115
//clear ___nl__bool__45;
#line 115
c_rt_lib0clear(&___nl__im__46);
#line 115
c_rt_lib0clear(&___nl__im__47);
#line 115
//clear ___nl__bool__48;
#line 115
c_rt_lib0clear(&___nl__im__49);
#line 115
c_rt_lib0clear(&___nl__im__50);
#line 115
c_rt_lib0clear(&___nl__im__51);
#line 115
return NULL;
}

bool generator_c_struct_dependence_sort0is_divisible0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_c_struct_dependence_sort0is_divisible");
tct0meta_type0type *var0 = &(_tab[0]);
return generator_c_struct_dependence_sort0is_divisible(*var0);
}
bool generator_c_struct_dependence_sort0is_divisible(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__1 = false;
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
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
#line 119
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 119
if(___nl__bool__1){ goto label_2;}
#line 120
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 120
if(___nl__bool__1){ goto label_3;}
#line 121
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 121
if(___nl__bool__1){ goto label_4;}
#line 122
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 122
if(___nl__bool__1){ goto label_5;}
#line 123
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 123
if(___nl__bool__1){ goto label_6;}
#line 124
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 124
if(___nl__bool__1){ goto label_7;}
#line 125
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 125
if(___nl__bool__1){ goto label_8;}
#line 127
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 127
if(___nl__bool__1){ goto label_9;}
#line 128
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 128
if(___nl__bool__1){ goto label_10;}
#line 129
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 129
if(___nl__bool__1){ goto label_11;}
#line 130
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 130
if(___nl__bool__1){ goto label_12;}
#line 131
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 131
if(___nl__bool__1){ goto label_13;}
#line 132
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 132
if(___nl__bool__1){ goto label_14;}
#line 133
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 133
if(___nl__bool__1){ goto label_15;}
#line 134
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 134
if(___nl__bool__1){ goto label_16;}
#line 136
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 136
if(___nl__bool__1){ goto label_17;}
#line 136
c_rt_lib0move(&___nl__im__2,___get_global_const(16));
#line 136
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 136
nl_die_arg(___nl__im__2);
#line 119
label_2:
;
#line 120
goto label_1;
#line 120
label_3:
;
#line 120
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 120
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 121
goto label_1;
#line 121
label_4:
;
#line 121
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 121
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 122
goto label_1;
#line 122
label_5:
;
#line 122
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 122
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 123
goto label_1;
#line 123
label_6:
;
#line 123
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 123
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 124
goto label_1;
#line 124
label_7:
;
#line 124
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 124
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 125
goto label_1;
#line 125
label_8:
;
#line 125
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 125
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 126
___nl__bool__15 = true;
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
//clear ___nl__bool__1;
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0clear(&___nl__im__4);
#line 126
c_rt_lib0clear(&___nl__im__5);
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
c_rt_lib0clear(&___nl__im__8);
#line 126
c_rt_lib0clear(&___nl__im__9);
#line 126
c_rt_lib0clear(&___nl__im__10);
#line 126
c_rt_lib0clear(&___nl__im__11);
#line 126
c_rt_lib0clear(&___nl__im__12);
#line 126
c_rt_lib0clear(&___nl__im__13);
#line 126
c_rt_lib0clear(&___nl__im__14);
#line 126
return ___nl__bool__15;
#line 127
goto label_1;
#line 127
label_9:
;
#line 127
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 127
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 128
goto label_1;
#line 128
label_10:
;
#line 129
goto label_1;
#line 129
label_11:
;
#line 130
goto label_1;
#line 130
label_12:
;
#line 131
goto label_1;
#line 131
label_13:
;
#line 132
goto label_1;
#line 132
label_14:
;
#line 133
goto label_1;
#line 133
label_15:
;
#line 133
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 133
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 134
goto label_1;
#line 134
label_16:
;
#line 134
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 134
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 135
___nl__bool__22 = true;
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
//clear ___nl__bool__1;
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0clear(&___nl__im__6);
#line 135
c_rt_lib0clear(&___nl__im__7);
#line 135
c_rt_lib0clear(&___nl__im__8);
#line 135
c_rt_lib0clear(&___nl__im__9);
#line 135
c_rt_lib0clear(&___nl__im__10);
#line 135
c_rt_lib0clear(&___nl__im__11);
#line 135
c_rt_lib0clear(&___nl__im__12);
#line 135
c_rt_lib0clear(&___nl__im__13);
#line 135
c_rt_lib0clear(&___nl__im__14);
#line 135
//clear ___nl__bool__15;
#line 135
c_rt_lib0clear(&___nl__im__16);
#line 135
c_rt_lib0clear(&___nl__im__17);
#line 135
c_rt_lib0clear(&___nl__im__18);
#line 135
c_rt_lib0clear(&___nl__im__19);
#line 135
c_rt_lib0clear(&___nl__im__20);
#line 135
c_rt_lib0clear(&___nl__im__21);
#line 135
return ___nl__bool__22;
#line 136
goto label_1;
#line 136
label_17:
;
#line 137
goto label_1;
#line 137
label_1:
;
#line 138
___nl__bool__23 = false;
#line 138
c_rt_lib0clear(&___nl__im__0);
#line 138
//clear ___nl__bool__1;
#line 138
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0clear(&___nl__im__3);
#line 138
c_rt_lib0clear(&___nl__im__4);
#line 138
c_rt_lib0clear(&___nl__im__5);
#line 138
c_rt_lib0clear(&___nl__im__6);
#line 138
c_rt_lib0clear(&___nl__im__7);
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
c_rt_lib0clear(&___nl__im__10);
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
c_rt_lib0clear(&___nl__im__14);
#line 138
//clear ___nl__bool__15;
#line 138
c_rt_lib0clear(&___nl__im__16);
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
c_rt_lib0clear(&___nl__im__18);
#line 138
c_rt_lib0clear(&___nl__im__19);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
c_rt_lib0clear(&___nl__im__21);
#line 138
//clear ___nl__bool__22;
#line 138
return ___nl__bool__23;
}

generator_c_struct_dependence_sort0graph0type generator_c_struct_dependence_sort_priv0in_funs_to_graph(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__string__19 = NULL;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__string__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__string__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__string__37 = NULL;
#line 142
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 143
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 143
label_3:
;
#line 143
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 143
if(___nl__bool__4){ goto label_1;}
#line 143
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 143
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 144
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 144
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 145
___nl__bool__10 = generator_c_struct_dependence_sort0is_divisible(___nl__im__5);
#line 145
c_rt_lib0move(&___nl__im__11, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 145
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(684), ___nl__im__8, ___get_global_const(685), ___nl__im__9, ___get_global_const(686), ___nl__im__11, ___get_global_const(95), ___nl__im__5));
#line 145
c_rt_lib0clear(&___nl__im__8);
#line 145
c_rt_lib0clear(&___nl__im__9);
#line 145
//clear ___nl__bool__10;
#line 145
c_rt_lib0clear(&___nl__im__11);
#line 146
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__5, &___nl__im__7, ___nl__im__1));
#line 147
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(684)));
#line 147
___nl__int__13 = c_rt_lib0array_len(___nl__im__14);
#line 147
c_rt_lib0clear(&___nl__im__14);
#line 147
___nl__int__15 = 0;
#line 147
___nl__int__16 = ___nl__int__13 > ___nl__int__15;
#line 147
___nl__bool__12 = ___nl__int__16;
#line 147
//clear ___nl__int__13;
#line 147
//clear ___nl__int__15;
#line 147
//clear ___nl__int__16;
#line 147
___nl__bool__12 = !___nl__bool__12;
#line 147
if(___nl__bool__12){ goto label_5;}
#line 148
c_rt_lib0move(&___nl__im__17,___get_global_const(684));
#line 148
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__17));
#line 148
___nl__int__18 = 0;
#line 148
c_rt_lib0delete(array0remove(&___nl__im__17, ___nl__int__18));
#line 148
c_rt_lib0move(&___nl__string__19,___get_global_const(684));
#line 148
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__19, ___nl__im__17));
#line 148
c_rt_lib0clear(&___nl__im__17);
#line 148
//clear ___nl__int__18;
#line 148
c_rt_lib0clear(&___nl__string__19);
#line 149
goto label_4;
#line 149
label_5:
;
#line 149
label_4:
;
#line 149
//clear ___nl__bool__12;
#line 150
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(685)));
#line 150
___nl__int__21 = c_rt_lib0array_len(___nl__im__22);
#line 150
c_rt_lib0clear(&___nl__im__22);
#line 150
___nl__int__23 = 0;
#line 150
___nl__int__24 = ___nl__int__21 > ___nl__int__23;
#line 150
___nl__bool__20 = ___nl__int__24;
#line 150
//clear ___nl__int__21;
#line 150
//clear ___nl__int__23;
#line 150
//clear ___nl__int__24;
#line 150
___nl__bool__20 = !___nl__bool__20;
#line 150
if(___nl__bool__20){ goto label_7;}
#line 151
c_rt_lib0move(&___nl__im__25,___get_global_const(685));
#line 151
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__25));
#line 151
___nl__int__26 = 0;
#line 151
c_rt_lib0delete(array0remove(&___nl__im__25, ___nl__int__26));
#line 151
c_rt_lib0move(&___nl__string__27,___get_global_const(685));
#line 151
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__27, ___nl__im__25));
#line 151
c_rt_lib0clear(&___nl__im__25);
#line 151
//clear ___nl__int__26;
#line 151
c_rt_lib0clear(&___nl__string__27);
#line 152
goto label_6;
#line 152
label_7:
;
#line 152
label_6:
;
#line 152
//clear ___nl__bool__20;
#line 153
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__3, ___nl__im__7));
#line 153
label_2:
;
#line 154
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 154
goto label_3;
#line 154
label_1:
;
#line 155
c_rt_lib0copy(&___nl__im__28, ___nl__im__2);
#line 156
c_rt_lib0move(&___nl__im__32, c_rt_lib0init_iter(___nl__im__28));
#line 156
label_10:
;
#line 156
___nl__bool__30 = c_rt_lib0is_end_hash(___nl__im__32);
#line 156
if(___nl__bool__30){ goto label_8;}
#line 156
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_key_iter(___nl__im__32));
#line 156
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value(___nl__im__28, ___nl__im__29));
#line 157
c_rt_lib0copy(&___nl__im__33, ___nl__im__31);
#line 158
c_rt_lib0move(&___nl__im__34,___get_global_const(684));
#line 158
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_ref_hash(___nl__im__33, ___nl__im__34));
#line 158
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__34));
#line 158
c_rt_lib0move(&___nl__string__35,___get_global_const(684));
#line 158
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__33, ___nl__string__35, ___nl__im__34));
#line 158
c_rt_lib0clear(&___nl__im__34);
#line 158
c_rt_lib0clear(&___nl__string__35);
#line 159
c_rt_lib0move(&___nl__im__36,___get_global_const(685));
#line 159
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_ref_hash(___nl__im__33, ___nl__im__36));
#line 159
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__36));
#line 159
c_rt_lib0move(&___nl__string__37,___get_global_const(685));
#line 159
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__33, ___nl__string__37, ___nl__im__36));
#line 159
c_rt_lib0clear(&___nl__im__36);
#line 159
c_rt_lib0clear(&___nl__string__37);
#line 160
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__29, ___nl__im__33));
#line 160
label_9:
;
#line 161
c_rt_lib0move(&___nl__im__32, c_rt_lib0next_iter(___nl__im__32));
#line 161
goto label_10;
#line 161
label_8:
;
#line 162
c_rt_lib0clear(&___nl__im__0);
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
c_rt_lib0clear(&___nl__im__3);
#line 162
//clear ___nl__bool__4;
#line 162
c_rt_lib0clear(&___nl__im__5);
#line 162
c_rt_lib0clear(&___nl__im__6);
#line 162
c_rt_lib0clear(&___nl__im__7);
#line 162
c_rt_lib0clear(&___nl__im__28);
#line 162
c_rt_lib0clear(&___nl__im__29);
#line 162
//clear ___nl__bool__30;
#line 162
c_rt_lib0clear(&___nl__im__31);
#line 162
c_rt_lib0clear(&___nl__im__32);
#line 162
c_rt_lib0clear(&___nl__im__33);
#line 162
return ___nl__im__2;
}

ImmT  generator_c_struct_dependence_sort_priv0remove_dups(ImmT * ___ref___im__0) {
generator_c_struct_dependence_sort_priv0__const__init();
INT  ___nl__int__1 = 0;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
#line 166
c_rt_lib0delete(array0sort(___ref___im__0));
#line 167
___nl__int__1 = 0;
#line 168
label_2:
;
#line 169
___nl__int__4 = c_rt_lib0array_len((*___ref___im__0));
#line 169
___nl__int__5 = 1;
#line 169
___nl__int__3 = ___nl__int__4 - ___nl__int__5;
#line 169
//clear ___nl__int__4;
#line 169
//clear ___nl__int__5;
#line 169
___nl__int__6 = ___nl__int__1 >= ___nl__int__3;
#line 169
___nl__bool__2 = ___nl__int__6;
#line 169
//clear ___nl__int__3;
#line 169
//clear ___nl__int__6;
#line 169
___nl__bool__2 = !___nl__bool__2;
#line 169
if(___nl__bool__2){ goto label_4;}
#line 170
goto label_1;
#line 171
goto label_3;
#line 171
label_4:
;
#line 171
label_3:
;
#line 171
//clear ___nl__bool__2;
#line 172
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get((*___ref___im__0), ___nl__int__1));
#line 172
___nl__int__11 = 1;
#line 172
___nl__int__10 = ___nl__int__1 + ___nl__int__11;
#line 172
//clear ___nl__int__11;
#line 172
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get((*___ref___im__0), ___nl__int__10));
#line 172
//clear ___nl__int__10;
#line 172
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 172
c_rt_lib0clear(&___nl__im__8);
#line 172
c_rt_lib0clear(&___nl__im__9);
#line 172
___nl__bool__7 = !___nl__bool__7;
#line 172
if(___nl__bool__7){ goto label_6;}
#line 173
___nl__int__13 = 1;
#line 173
___nl__int__12 = ___nl__int__1 + ___nl__int__13;
#line 173
//clear ___nl__int__13;
#line 173
c_rt_lib0delete(array0remove(___ref___im__0, ___nl__int__12));
#line 173
//clear ___nl__int__12;
#line 174
goto label_5;
#line 174
label_6:
;
#line 175
___nl__int__14 = 1;
#line 175
___nl__int__1 = ___nl__int__1 + ___nl__int__14;
#line 175
//clear ___nl__int__14;
#line 176
goto label_5;
#line 176
label_5:
;
#line 176
//clear ___nl__bool__7;
#line 168
goto label_2;
#line 168
label_1:
;
#line 168
//clear ___nl__int__1;
#line 168
return NULL;
}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0join_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 182
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(453));
#line 182
if(___nl__bool__2){ goto label_3;}
#line 182
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(453));
#line 182
label_3:
;
#line 182
//clear ___nl__bool__3;
#line 182
___nl__bool__2 = !___nl__bool__2;
#line 182
if(___nl__bool__2){ goto label_2;}
#line 183
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(453)));
#line 183
c_rt_lib0clear(&___nl__im__0);
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
//clear ___nl__bool__2;
#line 183
return ___nl__im__4;
#line 184
goto label_1;
#line 184
label_2:
;
#line 184
label_1:
;
#line 184
//clear ___nl__bool__2;
#line 184
c_rt_lib0clear(&___nl__im__4);
#line 185
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(73));
#line 185
___nl__bool__5 = !___nl__bool__5;
#line 185
if(___nl__bool__5){ goto label_5;}
#line 186
c_rt_lib0clear(&___nl__im__0);
#line 186
//clear ___nl__bool__5;
#line 186
return ___nl__im__1;
#line 187
goto label_4;
#line 187
label_5:
;
#line 187
label_4:
;
#line 187
//clear ___nl__bool__5;
#line 188
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(73));
#line 188
___nl__bool__6 = !___nl__bool__6;
#line 188
if(___nl__bool__6){ goto label_7;}
#line 189
c_rt_lib0clear(&___nl__im__1);
#line 189
//clear ___nl__bool__6;
#line 189
return ___nl__im__0;
#line 190
goto label_6;
#line 190
label_7:
;
#line 190
label_6:
;
#line 190
//clear ___nl__bool__6;
#line 191
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__0));
#line 191
c_rt_lib0move(&___nl__im__9, ov0get_element(___nl__im__1));
#line 191
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 191
c_rt_lib0clear(&___nl__im__8);
#line 191
c_rt_lib0clear(&___nl__im__9);
#line 191
___nl__bool__7 = !___nl__bool__7;
#line 191
if(___nl__bool__7){ goto label_9;}
#line 192
c_rt_lib0clear(&___nl__im__1);
#line 192
//clear ___nl__bool__7;
#line 192
return ___nl__im__0;
#line 193
goto label_8;
#line 193
label_9:
;
#line 193
label_8:
;
#line 193
//clear ___nl__bool__7;
#line 194
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(453)));
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
c_rt_lib0clear(&___nl__im__1);
#line 194
return ___nl__im__10;
}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0common_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 199
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(73));
#line 199
if(___nl__bool__2){ goto label_3;}
#line 199
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(73));
#line 199
label_3:
;
#line 199
//clear ___nl__bool__3;
#line 199
___nl__bool__2 = !___nl__bool__2;
#line 199
if(___nl__bool__2){ goto label_2;}
#line 200
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 200
c_rt_lib0clear(&___nl__im__0);
#line 200
c_rt_lib0clear(&___nl__im__1);
#line 200
//clear ___nl__bool__2;
#line 200
return ___nl__im__4;
#line 201
goto label_1;
#line 201
label_2:
;
#line 201
label_1:
;
#line 201
//clear ___nl__bool__2;
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 202
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(453));
#line 202
___nl__bool__5 = !___nl__bool__5;
#line 202
if(___nl__bool__5){ goto label_5;}
#line 203
c_rt_lib0clear(&___nl__im__0);
#line 203
//clear ___nl__bool__5;
#line 203
return ___nl__im__1;
#line 204
goto label_4;
#line 204
label_5:
;
#line 204
label_4:
;
#line 204
//clear ___nl__bool__5;
#line 205
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(453));
#line 205
___nl__bool__6 = !___nl__bool__6;
#line 205
if(___nl__bool__6){ goto label_7;}
#line 206
c_rt_lib0clear(&___nl__im__1);
#line 206
//clear ___nl__bool__6;
#line 206
return ___nl__im__0;
#line 207
goto label_6;
#line 207
label_7:
;
#line 207
label_6:
;
#line 207
//clear ___nl__bool__6;
#line 208
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__0));
#line 208
c_rt_lib0move(&___nl__im__9, ov0get_element(___nl__im__1));
#line 208
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 208
c_rt_lib0clear(&___nl__im__8);
#line 208
c_rt_lib0clear(&___nl__im__9);
#line 208
___nl__bool__7 = !___nl__bool__7;
#line 208
if(___nl__bool__7){ goto label_9;}
#line 209
c_rt_lib0clear(&___nl__im__1);
#line 209
//clear ___nl__bool__7;
#line 209
return ___nl__im__0;
#line 210
goto label_8;
#line 210
label_9:
;
#line 210
label_8:
;
#line 210
//clear ___nl__bool__7;
#line 211
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 211
c_rt_lib0clear(&___nl__im__0);
#line 211
c_rt_lib0clear(&___nl__im__1);
#line 211
return ___nl__im__10;
}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0split_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 216
c_rt_lib0move(&___nl__im__3, ov0get_element(___nl__im__0));
#line 216
c_rt_lib0move(&___nl__im__4, ov0get_element(___nl__im__1));
#line 216
___nl__bool__2 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 216
c_rt_lib0clear(&___nl__im__3);
#line 216
c_rt_lib0clear(&___nl__im__4);
#line 216
___nl__bool__2 = !___nl__bool__2;
#line 216
if(___nl__bool__2){ goto label_2;}
#line 217
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
//clear ___nl__bool__2;
#line 217
return ___nl__im__5;
#line 218
goto label_1;
#line 218
label_2:
;
#line 218
label_1:
;
#line 218
//clear ___nl__bool__2;
#line 218
c_rt_lib0clear(&___nl__im__5);
#line 219
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(73));
#line 219
___nl__bool__6 = !___nl__bool__6;
#line 219
if(___nl__bool__6){ goto label_4;}
#line 220
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 220
c_rt_lib0clear(&___nl__im__0);
#line 220
c_rt_lib0clear(&___nl__im__1);
#line 220
//clear ___nl__bool__6;
#line 220
return ___nl__im__7;
#line 221
goto label_3;
#line 221
label_4:
;
#line 221
label_3:
;
#line 221
//clear ___nl__bool__6;
#line 221
c_rt_lib0clear(&___nl__im__7);
#line 222
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(73));
#line 222
___nl__bool__8 = !___nl__bool__8;
#line 222
if(___nl__bool__8){ goto label_6;}
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
//clear ___nl__bool__8;
#line 223
return ___nl__im__0;
#line 224
goto label_5;
#line 224
label_6:
;
#line 224
label_5:
;
#line 224
//clear ___nl__bool__8;
#line 225
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(453));
#line 225
___nl__bool__9 = !___nl__bool__9;
#line 225
if(___nl__bool__9){ goto label_8;}
#line 226
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 226
c_rt_lib0clear(&___nl__im__0);
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
//clear ___nl__bool__9;
#line 226
return ___nl__im__10;
#line 227
goto label_7;
#line 227
label_8:
;
#line 227
label_7:
;
#line 227
//clear ___nl__bool__9;
#line 227
c_rt_lib0clear(&___nl__im__10);
#line 228
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(453));
#line 228
___nl__bool__11 = !___nl__bool__11;
#line 228
if(___nl__bool__11){ goto label_10;}
#line 229
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(688));
#line 229
___nl__bool__12 = !___nl__bool__12;
#line 229
if(___nl__bool__12){ goto label_12;}
#line 230
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(689)));
#line 230
c_rt_lib0clear(&___nl__im__0);
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 230
//clear ___nl__bool__11;
#line 230
//clear ___nl__bool__12;
#line 230
return ___nl__im__13;
#line 231
goto label_11;
#line 231
label_12:
;
#line 231
label_11:
;
#line 231
//clear ___nl__bool__12;
#line 231
c_rt_lib0clear(&___nl__im__13);
#line 232
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(688)));
#line 232
c_rt_lib0clear(&___nl__im__0);
#line 232
c_rt_lib0clear(&___nl__im__1);
#line 232
//clear ___nl__bool__11;
#line 232
return ___nl__im__14;
#line 233
goto label_9;
#line 233
label_10:
;
#line 233
label_9:
;
#line 233
//clear ___nl__bool__11;
#line 233
c_rt_lib0clear(&___nl__im__14);
#line 234
c_rt_lib0clear(&___nl__im__1);
#line 234
return ___nl__im__0;
}

generator_c_struct_dependence_sort0sorted_element0type generator_c_struct_dependence_sort_priv0type_to_var(ImmT  ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 239
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(453));
#line 239
___nl__bool__2 = !___nl__bool__2;
#line 239
if(___nl__bool__2){ goto label_2;}
#line 240
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(453), ___nl__im__0));
#line 240
c_rt_lib0clear(&___nl__im__0);
#line 240
c_rt_lib0clear(&___nl__im__1);
#line 240
//clear ___nl__bool__2;
#line 240
return ___nl__im__3;
#line 241
goto label_1;
#line 241
label_2:
;
#line 241
label_1:
;
#line 241
//clear ___nl__bool__2;
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 242
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(688));
#line 242
___nl__bool__4 = !___nl__bool__4;
#line 242
if(___nl__bool__4){ goto label_4;}
#line 243
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(452), ___nl__im__0));
#line 243
c_rt_lib0clear(&___nl__im__0);
#line 243
c_rt_lib0clear(&___nl__im__1);
#line 243
//clear ___nl__bool__4;
#line 243
return ___nl__im__5;
#line 244
goto label_3;
#line 244
label_4:
;
#line 244
label_3:
;
#line 244
//clear ___nl__bool__4;
#line 244
c_rt_lib0clear(&___nl__im__5);
#line 245
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(689));
#line 245
___nl__bool__6 = !___nl__bool__6;
#line 245
if(___nl__bool__6){ goto label_6;}
#line 246
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(451), ___nl__im__0));
#line 246
c_rt_lib0clear(&___nl__im__0);
#line 246
c_rt_lib0clear(&___nl__im__1);
#line 246
//clear ___nl__bool__6;
#line 246
return ___nl__im__7;
#line 247
goto label_5;
#line 247
label_6:
;
#line 247
label_5:
;
#line 247
//clear ___nl__bool__6;
#line 247
c_rt_lib0clear(&___nl__im__7);
#line 248
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 248
nl_die_arg(___nl__im__8);
}

ImmT  generator_c_struct_dependence_sort_priv0sort_graph_help(generator_c_struct_dependence_sort0graph0type ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,ImmT * ___ref___im__3,generator_c_struct_dependence_sort0sorted_element0type ___nl__im__4,bool* ___ref___bool__5) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__4);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
bool  ___nl__bool__43 = false;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
bool  ___nl__bool__53 = false;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
#line 258
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(451));
#line 258
if(___nl__bool__8){ goto label_2;}
#line 261
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(452));
#line 261
if(___nl__bool__8){ goto label_3;}
#line 264
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(453));
#line 264
if(___nl__bool__8){ goto label_4;}
#line 264
c_rt_lib0move(&___nl__im__9,___get_global_const(16));
#line 264
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__4));
#line 264
nl_die_arg(___nl__im__9);
#line 258
label_2:
;
#line 258
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(451)));
#line 258
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 259
c_rt_lib0copy(&___nl__im__6, ___nl__im__10);
#line 260
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(689)));
#line 261
goto label_1;
#line 261
label_3:
;
#line 261
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(452)));
#line 261
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 262
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 263
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(688)));
#line 264
goto label_1;
#line 264
label_4:
;
#line 264
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(453)));
#line 264
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 265
c_rt_lib0copy(&___nl__im__6, ___nl__im__14);
#line 266
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(453)));
#line 267
goto label_1;
#line 267
label_1:
;
#line 269
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 270
___nl__bool__17 = hash0has_key((*___ref___im__3), ___nl__im__6);
#line 270
___nl__bool__17 = !___nl__bool__17;
#line 270
if(___nl__bool__17){ goto label_6;}
#line 271
c_rt_lib0move(&___nl__im__16, hash0get_value((*___ref___im__3), ___nl__im__6));
#line 272
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(453));
#line 272
if(___nl__bool__18){ goto label_9;}
#line 272
c_rt_lib0move(&___nl__im__20, ov0get_element(___nl__im__16));
#line 272
c_rt_lib0move(&___nl__im__21, ov0get_element(___nl__im__7));
#line 272
___nl__bool__18 = c_rt_lib0eq(___nl__im__20, ___nl__im__21);
#line 272
c_rt_lib0clear(&___nl__im__20);
#line 272
c_rt_lib0clear(&___nl__im__21);
#line 272
label_9:
;
#line 272
//clear ___nl__bool__19;
#line 272
___nl__bool__18 = !___nl__bool__18;
#line 272
if(___nl__bool__18){ goto label_8;}
#line 273
c_rt_lib0clear(&___nl__im__0);
#line 273
c_rt_lib0clear(&___nl__im__4);
#line 273
c_rt_lib0clear(&___nl__im__6);
#line 273
c_rt_lib0clear(&___nl__im__7);
#line 273
//clear ___nl__bool__8;
#line 273
c_rt_lib0clear(&___nl__im__9);
#line 273
c_rt_lib0clear(&___nl__im__10);
#line 273
c_rt_lib0clear(&___nl__im__11);
#line 273
c_rt_lib0clear(&___nl__im__12);
#line 273
c_rt_lib0clear(&___nl__im__13);
#line 273
c_rt_lib0clear(&___nl__im__14);
#line 273
c_rt_lib0clear(&___nl__im__15);
#line 273
c_rt_lib0clear(&___nl__im__16);
#line 273
//clear ___nl__bool__17;
#line 273
//clear ___nl__bool__18;
#line 273
return NULL;
#line 274
goto label_7;
#line 274
label_8:
;
#line 274
label_7:
;
#line 274
//clear ___nl__bool__18;
#line 275
goto label_5;
#line 275
label_6:
;
#line 275
label_5:
;
#line 275
//clear ___nl__bool__17;
#line 276
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 277
___nl__bool__23 = hash0has_key((*___ref___im__2), ___nl__im__6);
#line 277
___nl__bool__23 = !___nl__bool__23;
#line 277
if(___nl__bool__23){ goto label_11;}
#line 278
c_rt_lib0move(&___nl__im__22, hash0get_value((*___ref___im__2), ___nl__im__6));
#line 279
c_rt_lib0move(&___nl__im__25, generator_c_struct_dependence_sort_priv0common_type(___nl__im__7, ___nl__im__22));
#line 279
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(73));
#line 279
c_rt_lib0clear(&___nl__im__25);
#line 279
___nl__bool__24 = !___nl__bool__24;
#line 279
___nl__bool__24 = !___nl__bool__24;
#line 279
if(___nl__bool__24){ goto label_13;}
#line 280
(*___ref___bool__5) = true;
#line 281
c_rt_lib0clear(&___nl__im__0);
#line 281
c_rt_lib0clear(&___nl__im__4);
#line 281
c_rt_lib0clear(&___nl__im__6);
#line 281
c_rt_lib0clear(&___nl__im__7);
#line 281
//clear ___nl__bool__8;
#line 281
c_rt_lib0clear(&___nl__im__9);
#line 281
c_rt_lib0clear(&___nl__im__10);
#line 281
c_rt_lib0clear(&___nl__im__11);
#line 281
c_rt_lib0clear(&___nl__im__12);
#line 281
c_rt_lib0clear(&___nl__im__13);
#line 281
c_rt_lib0clear(&___nl__im__14);
#line 281
c_rt_lib0clear(&___nl__im__15);
#line 281
c_rt_lib0clear(&___nl__im__16);
#line 281
c_rt_lib0clear(&___nl__im__22);
#line 281
//clear ___nl__bool__23;
#line 281
//clear ___nl__bool__24;
#line 281
return NULL;
#line 282
goto label_12;
#line 282
label_13:
;
#line 282
label_12:
;
#line 282
//clear ___nl__bool__24;
#line 283
goto label_10;
#line 283
label_11:
;
#line 283
label_10:
;
#line 283
//clear ___nl__bool__23;
#line 284
c_rt_lib0move(&___nl__im__28, hash0get_value(___nl__im__0, ___nl__im__6));
#line 284
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(686)));
#line 284
___nl__bool__26 = c_rt_lib0check_true_native(___nl__im__29);
#line 284
c_rt_lib0clear(&___nl__im__28);
#line 284
c_rt_lib0clear(&___nl__im__29);
#line 284
___nl__bool__27 = !___nl__bool__26;
#line 284
if(___nl__bool__27){ goto label_16;}
#line 284
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(688));
#line 284
label_16:
;
#line 284
//clear ___nl__bool__27;
#line 284
___nl__bool__26 = !___nl__bool__26;
#line 284
if(___nl__bool__26){ goto label_15;}
#line 285
c_rt_lib0move(&___nl__im__30, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 285
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__30));
#line 285
c_rt_lib0clear(&___nl__im__30);
#line 286
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__4));
#line 287
c_rt_lib0clear(&___nl__im__0);
#line 287
c_rt_lib0clear(&___nl__im__4);
#line 287
c_rt_lib0clear(&___nl__im__6);
#line 287
c_rt_lib0clear(&___nl__im__7);
#line 287
//clear ___nl__bool__8;
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__10);
#line 287
c_rt_lib0clear(&___nl__im__11);
#line 287
c_rt_lib0clear(&___nl__im__12);
#line 287
c_rt_lib0clear(&___nl__im__13);
#line 287
c_rt_lib0clear(&___nl__im__14);
#line 287
c_rt_lib0clear(&___nl__im__15);
#line 287
c_rt_lib0clear(&___nl__im__16);
#line 287
c_rt_lib0clear(&___nl__im__22);
#line 287
//clear ___nl__bool__26;
#line 287
return NULL;
#line 288
goto label_14;
#line 288
label_15:
;
#line 288
label_14:
;
#line 288
//clear ___nl__bool__26;
#line 289
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__0, ___nl__im__6));
#line 289
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(686)));
#line 289
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__33);
#line 289
c_rt_lib0clear(&___nl__im__32);
#line 289
c_rt_lib0clear(&___nl__im__33);
#line 289
___nl__bool__31 = !___nl__bool__31;
#line 289
___nl__bool__31 = !___nl__bool__31;
#line 289
if(___nl__bool__31){ goto label_18;}
#line 290
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(453)));
#line 291
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(453), ___nl__im__6));
#line 292
goto label_17;
#line 292
label_18:
;
#line 292
label_17:
;
#line 292
//clear ___nl__bool__31;
#line 293
c_rt_lib0move(&___nl__im__34, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__22));
#line 293
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__6, ___nl__im__34));
#line 293
c_rt_lib0clear(&___nl__im__34);
#line 295
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(689));
#line 295
if(___nl__bool__35){ goto label_21;}
#line 295
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(453));
#line 295
label_21:
;
#line 295
//clear ___nl__bool__36;
#line 295
___nl__bool__35 = !___nl__bool__35;
#line 295
if(___nl__bool__35){ goto label_20;}
#line 296
c_rt_lib0move(&___nl__im__38, hash0get_value(___nl__im__0, ___nl__im__6));
#line 296
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(684)));
#line 296
c_rt_lib0clear(&___nl__im__38);
#line 296
___nl__int__40 = 0;
#line 296
___nl__int__41 = 1;
#line 296
___nl__int__42 = c_rt_lib0array_len(___nl__im__37);
#line 296
label_24:
;
#line 296
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 296
___nl__bool__43 = ___nl__int__44;
#line 296
if(___nl__bool__43){ goto label_22;}
#line 296
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__37, ___nl__int__40));
#line 296
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 297
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(452), ___nl__im__39));
#line 297
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__46, ___ref___bool__5));
#line 297
c_rt_lib0clear(&___nl__im__46);
#line 297
c_rt_lib0clear(&___nl__im__39);
#line 297
label_23:
;
#line 298
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 298
goto label_24;
#line 298
label_22:
;
#line 300
c_rt_lib0move(&___nl__im__48, hash0get_value(___nl__im__0, ___nl__im__6));
#line 300
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(685)));
#line 300
c_rt_lib0clear(&___nl__im__48);
#line 300
___nl__int__50 = 0;
#line 300
___nl__int__51 = 1;
#line 300
___nl__int__52 = c_rt_lib0array_len(___nl__im__47);
#line 300
label_27:
;
#line 300
___nl__int__54 = ___nl__int__50 >= ___nl__int__52;
#line 300
___nl__bool__53 = ___nl__int__54;
#line 300
if(___nl__bool__53){ goto label_25;}
#line 300
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__47, ___nl__int__50));
#line 300
c_rt_lib0copy(&___nl__im__49, ___nl__im__55);
#line 301
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(453), ___nl__im__49));
#line 301
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__56, ___ref___bool__5));
#line 301
c_rt_lib0clear(&___nl__im__56);
#line 301
c_rt_lib0clear(&___nl__im__49);
#line 301
label_26:
;
#line 302
___nl__int__50 = ___nl__int__50 + ___nl__int__51;
#line 302
goto label_27;
#line 302
label_25:
;
#line 303
goto label_19;
#line 303
label_20:
;
#line 303
label_19:
;
#line 303
//clear ___nl__bool__35;
#line 303
c_rt_lib0clear(&___nl__im__37);
#line 303
c_rt_lib0clear(&___nl__im__39);
#line 303
//clear ___nl__int__40;
#line 303
//clear ___nl__int__41;
#line 303
//clear ___nl__int__42;
#line 303
//clear ___nl__bool__43;
#line 303
//clear ___nl__int__44;
#line 303
c_rt_lib0clear(&___nl__im__45);
#line 303
c_rt_lib0clear(&___nl__im__47);
#line 303
c_rt_lib0clear(&___nl__im__49);
#line 303
//clear ___nl__int__50;
#line 303
//clear ___nl__int__51;
#line 303
//clear ___nl__int__52;
#line 303
//clear ___nl__bool__53;
#line 303
//clear ___nl__int__54;
#line 303
c_rt_lib0clear(&___nl__im__55);
#line 305
c_rt_lib0move(&___nl__im__57, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 305
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__57));
#line 305
c_rt_lib0clear(&___nl__im__57);
#line 306
c_rt_lib0move(&___nl__im__59, generator_c_struct_dependence_sort_priv0split_type(___nl__im__7, ___nl__im__16));
#line 306
c_rt_lib0move(&___nl__im__58, generator_c_struct_dependence_sort_priv0type_to_var(___nl__im__6, ___nl__im__59));
#line 306
c_rt_lib0clear(&___nl__im__59);
#line 306
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__58));
#line 306
c_rt_lib0clear(&___nl__im__58);
#line 307
c_rt_lib0delete(hash0delete(___ref___im__2, ___nl__im__6));
#line 307
c_rt_lib0clear(&___nl__im__0);
#line 307
c_rt_lib0clear(&___nl__im__4);
#line 307
c_rt_lib0clear(&___nl__im__6);
#line 307
c_rt_lib0clear(&___nl__im__7);
#line 307
//clear ___nl__bool__8;
#line 307
c_rt_lib0clear(&___nl__im__9);
#line 307
c_rt_lib0clear(&___nl__im__10);
#line 307
c_rt_lib0clear(&___nl__im__11);
#line 307
c_rt_lib0clear(&___nl__im__12);
#line 307
c_rt_lib0clear(&___nl__im__13);
#line 307
c_rt_lib0clear(&___nl__im__14);
#line 307
c_rt_lib0clear(&___nl__im__15);
#line 307
c_rt_lib0clear(&___nl__im__16);
#line 307
c_rt_lib0clear(&___nl__im__22);
#line 307
return NULL;
}

generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort_priv0sort_graph(generator_c_struct_dependence_sort0graph0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
bool  ___nl__bool__28 = false;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
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
#line 312
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 313
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 314
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 315
___nl__bool__4 = false;
#line 316
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 316
label_3:
;
#line 316
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 316
if(___nl__bool__6){ goto label_1;}
#line 316
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 316
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 317
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(452), ___nl__im__5));
#line 317
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__9, &___nl__bool__4));
#line 317
c_rt_lib0clear(&___nl__im__9);
#line 317
label_2:
;
#line 318
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 318
goto label_3;
#line 318
label_1:
;
#line 319
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__0));
#line 319
label_6:
;
#line 319
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 319
if(___nl__bool__11){ goto label_4;}
#line 319
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 319
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__10));
#line 320
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(451), ___nl__im__10));
#line 320
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__14, &___nl__bool__4));
#line 320
c_rt_lib0clear(&___nl__im__14);
#line 320
label_5:
;
#line 321
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 321
goto label_6;
#line 321
label_4:
;
#line 322
___nl__bool__15 = ___nl__bool__4;
#line 322
___nl__bool__15 = !___nl__bool__15;
#line 322
if(___nl__bool__15){ goto label_8;}
#line 323
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(449)));
#line 323
c_rt_lib0clear(&___nl__im__0);
#line 323
c_rt_lib0clear(&___nl__im__1);
#line 323
c_rt_lib0clear(&___nl__im__2);
#line 323
c_rt_lib0clear(&___nl__im__3);
#line 323
//clear ___nl__bool__4;
#line 323
c_rt_lib0clear(&___nl__im__5);
#line 323
//clear ___nl__bool__6;
#line 323
c_rt_lib0clear(&___nl__im__7);
#line 323
c_rt_lib0clear(&___nl__im__8);
#line 323
c_rt_lib0clear(&___nl__im__10);
#line 323
//clear ___nl__bool__11;
#line 323
c_rt_lib0clear(&___nl__im__12);
#line 323
c_rt_lib0clear(&___nl__im__13);
#line 323
//clear ___nl__bool__15;
#line 323
return ___nl__im__16;
#line 324
goto label_7;
#line 324
label_8:
;
#line 324
label_7:
;
#line 324
//clear ___nl__bool__15;
#line 324
c_rt_lib0clear(&___nl__im__16);
#line 325
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 326
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 327
c_rt_lib0move(&___nl__im__22, c_rt_lib0init_iter(___nl__im__0));
#line 327
label_11:
;
#line 327
___nl__bool__20 = c_rt_lib0is_end_hash(___nl__im__22);
#line 327
if(___nl__bool__20){ goto label_9;}
#line 327
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_key_iter(___nl__im__22));
#line 327
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__19));
#line 328
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(95)));
#line 328
c_rt_lib0delete(hash0set_value(&___nl__im__18, ___nl__im__19, ___nl__im__23));
#line 328
c_rt_lib0clear(&___nl__im__23);
#line 328
label_10:
;
#line 329
c_rt_lib0move(&___nl__im__22, c_rt_lib0next_iter(___nl__im__22));
#line 329
goto label_11;
#line 329
label_9:
;
#line 330
___nl__int__25 = 0;
#line 330
___nl__int__26 = 1;
#line 330
___nl__int__27 = c_rt_lib0array_len(___nl__im__1);
#line 330
label_14:
;
#line 330
___nl__int__29 = ___nl__int__25 >= ___nl__int__27;
#line 330
___nl__bool__28 = ___nl__int__29;
#line 330
if(___nl__bool__28){ goto label_12;}
#line 330
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__1, ___nl__int__25));
#line 330
c_rt_lib0copy(&___nl__im__24, ___nl__im__30);
#line 331
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(453));
#line 331
if(___nl__bool__31){ goto label_16;}
#line 333
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(452));
#line 333
if(___nl__bool__31){ goto label_17;}
#line 335
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(451));
#line 335
if(___nl__bool__31){ goto label_18;}
#line 335
c_rt_lib0move(&___nl__im__32,___get_global_const(16));
#line 335
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(2, ___nl__im__32, ___nl__im__24));
#line 335
nl_die_arg(___nl__im__32);
#line 331
label_16:
;
#line 331
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(453)));
#line 331
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 332
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__18, ___nl__im__33));
#line 332
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(453)));
#line 332
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(168), ___nl__im__33, ___get_global_const(454), ___nl__im__36, ___get_global_const(450), ___nl__im__37));
#line 332
c_rt_lib0clear(&___nl__im__36);
#line 332
c_rt_lib0clear(&___nl__im__37);
#line 332
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__35));
#line 332
c_rt_lib0clear(&___nl__im__35);
#line 333
goto label_15;
#line 333
label_17:
;
#line 333
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(452)));
#line 333
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 334
c_rt_lib0move(&___nl__im__41, hash0get_value(___nl__im__18, ___nl__im__38));
#line 334
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(452)));
#line 334
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(3, ___get_global_const(168), ___nl__im__38, ___get_global_const(454), ___nl__im__41, ___get_global_const(450), ___nl__im__42));
#line 334
c_rt_lib0clear(&___nl__im__41);
#line 334
c_rt_lib0clear(&___nl__im__42);
#line 334
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__40));
#line 334
c_rt_lib0clear(&___nl__im__40);
#line 335
goto label_15;
#line 335
label_18:
;
#line 335
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(451)));
#line 335
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 336
c_rt_lib0move(&___nl__im__46, hash0get_value(___nl__im__18, ___nl__im__43));
#line 336
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(451)));
#line 336
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(3, ___get_global_const(168), ___nl__im__43, ___get_global_const(454), ___nl__im__46, ___get_global_const(450), ___nl__im__47));
#line 336
c_rt_lib0clear(&___nl__im__46);
#line 336
c_rt_lib0clear(&___nl__im__47);
#line 336
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__45));
#line 336
c_rt_lib0clear(&___nl__im__45);
#line 337
goto label_15;
#line 337
label_15:
;
#line 337
c_rt_lib0clear(&___nl__im__24);
#line 337
label_13:
;
#line 338
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 338
goto label_14;
#line 338
label_12:
;
#line 339
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_const(448), ___nl__im__17));
#line 339
c_rt_lib0clear(&___nl__im__0);
#line 339
c_rt_lib0clear(&___nl__im__1);
#line 339
c_rt_lib0clear(&___nl__im__2);
#line 339
c_rt_lib0clear(&___nl__im__3);
#line 339
//clear ___nl__bool__4;
#line 339
c_rt_lib0clear(&___nl__im__5);
#line 339
//clear ___nl__bool__6;
#line 339
c_rt_lib0clear(&___nl__im__7);
#line 339
c_rt_lib0clear(&___nl__im__8);
#line 339
c_rt_lib0clear(&___nl__im__10);
#line 339
//clear ___nl__bool__11;
#line 339
c_rt_lib0clear(&___nl__im__12);
#line 339
c_rt_lib0clear(&___nl__im__13);
#line 339
c_rt_lib0clear(&___nl__im__17);
#line 339
c_rt_lib0clear(&___nl__im__18);
#line 339
c_rt_lib0clear(&___nl__im__19);
#line 339
//clear ___nl__bool__20;
#line 339
c_rt_lib0clear(&___nl__im__21);
#line 339
c_rt_lib0clear(&___nl__im__22);
#line 339
c_rt_lib0clear(&___nl__im__24);
#line 339
//clear ___nl__int__25;
#line 339
//clear ___nl__int__26;
#line 339
//clear ___nl__int__27;
#line 339
//clear ___nl__bool__28;
#line 339
//clear ___nl__int__29;
#line 339
c_rt_lib0clear(&___nl__im__30);
#line 339
//clear ___nl__bool__31;
#line 339
c_rt_lib0clear(&___nl__im__32);
#line 339
c_rt_lib0clear(&___nl__im__33);
#line 339
c_rt_lib0clear(&___nl__im__34);
#line 339
c_rt_lib0clear(&___nl__im__38);
#line 339
c_rt_lib0clear(&___nl__im__39);
#line 339
c_rt_lib0clear(&___nl__im__43);
#line 339
c_rt_lib0clear(&___nl__im__44);
#line 339
return ___nl__im__48;
}

ImmT  generator_c_struct_dependence_sort_priv0anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
#line 343
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 343
if(___nl__bool__2){ goto label_5;}
#line 343
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 343
label_5:
;
#line 343
//clear ___nl__bool__5;
#line 343
if(___nl__bool__2){ goto label_4;}
#line 343
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 343
label_4:
;
#line 343
//clear ___nl__bool__4;
#line 343
if(___nl__bool__2){ goto label_3;}
#line 343
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 343
label_3:
;
#line 343
//clear ___nl__bool__3;
#line 343
___nl__bool__2 = !___nl__bool__2;
#line 343
if(___nl__bool__2){ goto label_2;}
#line 344
c_rt_lib0move(&___nl__im__6, anon_naming0get_anon_name(___nl__im__0));
#line 345
___nl__bool__7 = hash0has_key((*___ref___im__1), ___nl__im__6);
#line 345
___nl__bool__7 = !___nl__bool__7;
#line 345
if(___nl__bool__7){ goto label_7;}
#line 346
c_rt_lib0clear(&___nl__im__0);
#line 346
//clear ___nl__bool__2;
#line 346
c_rt_lib0clear(&___nl__im__6);
#line 346
//clear ___nl__bool__7;
#line 346
return NULL;
#line 347
goto label_6;
#line 347
label_7:
;
#line 347
label_6:
;
#line 347
//clear ___nl__bool__7;
#line 348
c_rt_lib0delete(hash0set_value(___ref___im__1, ___nl__im__6, ___nl__im__0));
#line 349
goto label_1;
#line 349
label_2:
;
#line 349
label_1:
;
#line 349
//clear ___nl__bool__2;
#line 349
c_rt_lib0clear(&___nl__im__6);
#line 349
c_rt_lib0clear(&___nl__im__0);
#line 349
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0deep_anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 353
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 353
___nl__bool__2 = !___nl__bool__2;
#line 353
if(___nl__bool__2){ goto label_2;}
#line 354
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 354
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__3));
#line 354
label_5:
;
#line 354
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 354
if(___nl__bool__5){ goto label_3;}
#line 354
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 354
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__3, ___nl__im__4));
#line 355
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__6, ___ref___im__1));
#line 355
label_4:
;
#line 356
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 356
goto label_5;
#line 356
label_3:
;
#line 357
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 358
goto label_1;
#line 358
label_2:
;
#line 358
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 358
___nl__bool__2 = !___nl__bool__2;
#line 358
if(___nl__bool__2){ goto label_6;}
#line 359
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 359
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__8, ___ref___im__1));
#line 359
c_rt_lib0clear(&___nl__im__8);
#line 360
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 361
goto label_1;
#line 361
label_6:
;
#line 361
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 361
___nl__bool__2 = !___nl__bool__2;
#line 361
if(___nl__bool__2){ goto label_7;}
#line 362
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 362
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__9));
#line 362
label_10:
;
#line 362
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 362
if(___nl__bool__11){ goto label_8;}
#line 362
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 362
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__10));
#line 363
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(28));
#line 363
if(___nl__bool__14){ goto label_12;}
#line 365
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(29));
#line 365
if(___nl__bool__14){ goto label_13;}
#line 365
c_rt_lib0move(&___nl__im__15,___get_global_const(16));
#line 365
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 365
nl_die_arg(___nl__im__15);
#line 363
label_12:
;
#line 363
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(28)));
#line 363
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 364
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__16, ___ref___im__1));
#line 365
goto label_11;
#line 365
label_13:
;
#line 366
goto label_11;
#line 366
label_11:
;
#line 366
label_9:
;
#line 367
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 367
goto label_10;
#line 367
label_8:
;
#line 368
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 369
goto label_1;
#line 369
label_7:
;
#line 369
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 369
___nl__bool__2 = !___nl__bool__2;
#line 369
if(___nl__bool__2){ goto label_14;}
#line 370
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 370
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, ___ref___im__1));
#line 370
c_rt_lib0clear(&___nl__im__18);
#line 371
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 372
goto label_1;
#line 372
label_14:
;
#line 372
label_1:
;
#line 372
//clear ___nl__bool__2;
#line 372
c_rt_lib0clear(&___nl__im__3);
#line 372
c_rt_lib0clear(&___nl__im__4);
#line 372
//clear ___nl__bool__5;
#line 372
c_rt_lib0clear(&___nl__im__6);
#line 372
c_rt_lib0clear(&___nl__im__7);
#line 372
c_rt_lib0clear(&___nl__im__9);
#line 372
c_rt_lib0clear(&___nl__im__10);
#line 372
//clear ___nl__bool__11;
#line 372
c_rt_lib0clear(&___nl__im__12);
#line 372
c_rt_lib0clear(&___nl__im__13);
#line 372
//clear ___nl__bool__14;
#line 372
c_rt_lib0clear(&___nl__im__15);
#line 372
c_rt_lib0clear(&___nl__im__16);
#line 372
c_rt_lib0clear(&___nl__im__17);
#line 372
c_rt_lib0clear(&___nl__im__0);
#line 372
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_anons(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
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
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
#line 376
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 377
___nl__int__3 = 0;
#line 377
___nl__int__4 = 1;
#line 377
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 377
label_3:
;
#line 377
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 377
___nl__bool__6 = ___nl__int__7;
#line 377
if(___nl__bool__6){ goto label_1;}
#line 377
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 377
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 378
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(387)));
#line 378
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__9, &___nl__im__1));
#line 378
c_rt_lib0clear(&___nl__im__9);
#line 379
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(214)));
#line 379
___nl__int__12 = 0;
#line 379
___nl__int__13 = 1;
#line 379
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 379
label_6:
;
#line 379
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 379
___nl__bool__15 = ___nl__int__16;
#line 379
if(___nl__bool__15){ goto label_4;}
#line 379
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 379
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 380
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(95)));
#line 380
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, &___nl__im__1));
#line 380
c_rt_lib0clear(&___nl__im__18);
#line 380
c_rt_lib0clear(&___nl__im__11);
#line 380
label_5:
;
#line 381
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 381
goto label_6;
#line 381
label_4:
;
#line 382
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(215)));
#line 382
___nl__int__21 = 0;
#line 382
___nl__int__22 = 1;
#line 382
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 382
label_9:
;
#line 382
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 382
___nl__bool__24 = ___nl__int__25;
#line 382
if(___nl__bool__24){ goto label_7;}
#line 382
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 382
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 383
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 383
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(513));
#line 383
c_rt_lib0clear(&___nl__im__28);
#line 383
___nl__bool__27 = !___nl__bool__27;
#line 383
if(___nl__bool__27){ goto label_11;}
#line 384
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 384
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 384
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(513)));
#line 384
c_rt_lib0clear(&___nl__im__30);
#line 384
c_rt_lib0clear(&___nl__im__31);
#line 384
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__29, &___nl__im__1));
#line 384
c_rt_lib0clear(&___nl__im__29);
#line 385
goto label_10;
#line 385
label_11:
;
#line 385
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 385
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(130));
#line 385
c_rt_lib0clear(&___nl__im__32);
#line 385
___nl__bool__27 = !___nl__bool__27;
#line 385
if(___nl__bool__27){ goto label_12;}
#line 386
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 386
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 386
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(130)));
#line 386
c_rt_lib0clear(&___nl__im__34);
#line 386
c_rt_lib0clear(&___nl__im__35);
#line 386
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__33, &___nl__im__1));
#line 386
c_rt_lib0clear(&___nl__im__33);
#line 387
goto label_10;
#line 387
label_12:
;
#line 387
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 387
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__36, ___get_global_const(517));
#line 387
c_rt_lib0clear(&___nl__im__36);
#line 387
___nl__bool__27 = !___nl__bool__27;
#line 387
if(___nl__bool__27){ goto label_13;}
#line 388
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 388
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 388
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__39, ___get_global_const(517)));
#line 388
c_rt_lib0clear(&___nl__im__38);
#line 388
c_rt_lib0clear(&___nl__im__39);
#line 388
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__37, &___nl__im__1));
#line 388
c_rt_lib0clear(&___nl__im__37);
#line 389
goto label_10;
#line 389
label_13:
;
#line 389
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 389
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__40, ___get_global_const(131));
#line 389
c_rt_lib0clear(&___nl__im__40);
#line 389
___nl__bool__27 = !___nl__bool__27;
#line 389
if(___nl__bool__27){ goto label_14;}
#line 390
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 390
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(95)));
#line 390
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__43, ___get_global_const(131)));
#line 390
c_rt_lib0clear(&___nl__im__42);
#line 390
c_rt_lib0clear(&___nl__im__43);
#line 390
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__41, &___nl__im__1));
#line 390
c_rt_lib0clear(&___nl__im__41);
#line 391
goto label_10;
#line 391
label_14:
;
#line 391
label_10:
;
#line 391
//clear ___nl__bool__27;
#line 391
c_rt_lib0clear(&___nl__im__20);
#line 391
label_8:
;
#line 392
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 392
goto label_9;
#line 392
label_7:
;
#line 393
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(167)));
#line 393
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_const(78));
#line 393
if(___nl__bool__45){ goto label_16;}
#line 394
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_const(77));
#line 394
if(___nl__bool__45){ goto label_17;}
#line 394
c_rt_lib0move(&___nl__im__46,___get_global_const(16));
#line 394
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__44));
#line 394
nl_die_arg(___nl__im__46);
#line 393
label_16:
;
#line 394
goto label_15;
#line 394
label_17:
;
#line 394
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__44, ___get_global_const(77)));
#line 394
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 395
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__47, &___nl__im__1));
#line 396
goto label_15;
#line 396
label_15:
;
#line 396
c_rt_lib0clear(&___nl__im__2);
#line 396
label_2:
;
#line 397
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 397
goto label_3;
#line 397
label_1:
;
#line 398
c_rt_lib0clear(&___nl__im__0);
#line 398
c_rt_lib0clear(&___nl__im__2);
#line 398
//clear ___nl__int__3;
#line 398
//clear ___nl__int__4;
#line 398
//clear ___nl__int__5;
#line 398
//clear ___nl__bool__6;
#line 398
//clear ___nl__int__7;
#line 398
c_rt_lib0clear(&___nl__im__8);
#line 398
c_rt_lib0clear(&___nl__im__10);
#line 398
c_rt_lib0clear(&___nl__im__11);
#line 398
//clear ___nl__int__12;
#line 398
//clear ___nl__int__13;
#line 398
//clear ___nl__int__14;
#line 398
//clear ___nl__bool__15;
#line 398
//clear ___nl__int__16;
#line 398
c_rt_lib0clear(&___nl__im__17);
#line 398
c_rt_lib0clear(&___nl__im__19);
#line 398
c_rt_lib0clear(&___nl__im__20);
#line 398
//clear ___nl__int__21;
#line 398
//clear ___nl__int__22;
#line 398
//clear ___nl__int__23;
#line 398
//clear ___nl__bool__24;
#line 398
//clear ___nl__int__25;
#line 398
c_rt_lib0clear(&___nl__im__26);
#line 398
c_rt_lib0clear(&___nl__im__44);
#line 398
//clear ___nl__bool__45;
#line 398
c_rt_lib0clear(&___nl__im__46);
#line 398
c_rt_lib0clear(&___nl__im__47);
#line 398
c_rt_lib0clear(&___nl__im__48);
#line 398
return ___nl__im__1;
}

ImmT  generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 402
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 403
___nl__int__3 = 0;
#line 403
___nl__int__4 = 1;
#line 403
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 403
label_3:
;
#line 403
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 403
___nl__bool__6 = ___nl__int__7;
#line 403
if(___nl__bool__6){ goto label_1;}
#line 403
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 403
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 404
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(209)));
#line 404
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(428));
#line 404
if(___nl__bool__10){ goto label_5;}
#line 405
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(210));
#line 405
if(___nl__bool__10){ goto label_6;}
#line 405
c_rt_lib0move(&___nl__im__11,___get_global_const(16));
#line 405
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 405
nl_die_arg(___nl__im__11);
#line 404
label_5:
;
#line 405
goto label_4;
#line 405
label_6:
;
#line 406
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(167)));
#line 406
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(77));
#line 406
if(___nl__bool__13){ goto label_8;}
#line 408
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(78));
#line 408
if(___nl__bool__13){ goto label_9;}
#line 408
c_rt_lib0move(&___nl__im__14,___get_global_const(16));
#line 408
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__12));
#line 408
nl_die_arg(___nl__im__14);
#line 406
label_8:
;
#line 406
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(77)));
#line 406
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 407
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(168)));
#line 407
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__17, ___nl__im__15));
#line 407
c_rt_lib0clear(&___nl__im__17);
#line 408
goto label_7;
#line 408
label_9:
;
#line 409
goto label_7;
#line 409
label_7:
;
#line 410
goto label_4;
#line 410
label_4:
;
#line 410
c_rt_lib0clear(&___nl__im__2);
#line 410
label_2:
;
#line 411
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 411
goto label_3;
#line 411
label_1:
;
#line 412
c_rt_lib0clear(&___nl__im__0);
#line 412
c_rt_lib0clear(&___nl__im__2);
#line 412
//clear ___nl__int__3;
#line 412
//clear ___nl__int__4;
#line 412
//clear ___nl__int__5;
#line 412
//clear ___nl__bool__6;
#line 412
//clear ___nl__int__7;
#line 412
c_rt_lib0clear(&___nl__im__8);
#line 412
c_rt_lib0clear(&___nl__im__9);
#line 412
//clear ___nl__bool__10;
#line 412
c_rt_lib0clear(&___nl__im__11);
#line 412
c_rt_lib0clear(&___nl__im__12);
#line 412
//clear ___nl__bool__13;
#line 412
c_rt_lib0clear(&___nl__im__14);
#line 412
c_rt_lib0clear(&___nl__im__15);
#line 412
c_rt_lib0clear(&___nl__im__16);
#line 412
return ___nl__im__1;
}

generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort0sort0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c_struct_dependence_sort0sort");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return generator_c_struct_dependence_sort0sort(*var0, *var1);
}
generator_c_struct_dependence_sort0result_t0type generator_c_struct_dependence_sort0sort(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 417
c_rt_lib0move(&___nl__im__2, generator_c_struct_dependence_sort_priv0get_anons(___nl__im__0));
#line 418
c_rt_lib0move(&___nl__im__3, generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(___nl__im__0));
#line 418
c_rt_lib0delete(hash0add_all(&___nl__im__2, ___nl__im__3));
#line 418
c_rt_lib0clear(&___nl__im__3);
#line 419
c_rt_lib0move(&___nl__im__4, generator_c_struct_dependence_sort_priv0in_funs_to_graph(___nl__im__2, ___nl__im__1));
#line 420
c_rt_lib0move(&___nl__im__5, generator_c_struct_dependence_sort_priv0sort_graph(___nl__im__4));
#line 420
c_rt_lib0clear(&___nl__im__0);
#line 420
c_rt_lib0clear(&___nl__im__1);
#line 420
c_rt_lib0clear(&___nl__im__2);
#line 420
c_rt_lib0clear(&___nl__im__4);
#line 420
return ___nl__im__5;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void generator_c_struct_dependence_sort_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT generator_c_struct_dependence_sort_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_c_struct_dependence_sort_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
