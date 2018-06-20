
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
#include "ptd.h"
#include "nlasm.h"
#include "ov.h"
#include "anon_naming.h"
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
ImmT  generator_c_struct_dependence_sort_priv0sort_graph_help(generator_c_struct_dependence_sort0graph0type ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,ImmT * ___ref___im__3,generator_c_struct_dependence_sort0sorted_element0type ___nl__im__4,bool * ___ref___bool__5);
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
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c_struct_dependence_sort0result_element0ptr, ___get_global_const(681), ___get_global_const(682)));
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 12
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 13
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 13
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(447), ___nl__im__2, ___get_global_const(448), ___nl__im__4));
#line 13
c_rt_lib0clear(&___nl__im__2);
#line 13
c_rt_lib0clear(&___nl__im__4);
#line 13
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 13
c_rt_lib0clear(&___nl__im__1);
#line 13
return ___nl__im__0;
#line 13
c_rt_lib0clear(&___nl__im__0);
#line 13
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
#line 19
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 20
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 22
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 23
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(450), ___nl__im__6, ___get_global_const(451), ___nl__im__7, ___get_global_const(452), ___nl__im__8));
#line 24
c_rt_lib0clear(&___nl__im__6);
#line 24
c_rt_lib0clear(&___nl__im__7);
#line 24
c_rt_lib0clear(&___nl__im__8);
#line 24
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 24
c_rt_lib0clear(&___nl__im__5);
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(166), ___nl__im__2, ___get_global_const(453), ___nl__im__3, ___get_global_const(449), ___nl__im__4));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 24
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
return ___nl__im__0;
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
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
#line 31
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 31
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 32
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 32
c_rt_lib0clear(&___nl__im__5);
#line 33
c_rt_lib0move(&___nl__im__6, ptd0bool());
#line 34
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 34
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 34
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(683), ___nl__im__2, ___get_global_const(684), ___nl__im__4, ___get_global_const(685), ___nl__im__6, ___get_global_const(204), ___nl__im__7));
#line 34
c_rt_lib0clear(&___nl__im__2);
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 34
c_rt_lib0clear(&___nl__im__6);
#line 34
c_rt_lib0clear(&___nl__im__7);
#line 34
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 34
c_rt_lib0clear(&___nl__im__1);
#line 34
return ___nl__im__0;
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
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
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(generator_c_struct_dependence_sort0graph_node0ptr, ___get_global_const(681), ___get_global_const(686)));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 39
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 39
c_rt_lib0clear(&___nl__im__1);
#line 39
return ___nl__im__0;
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
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
#line 44
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 45
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 46
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 46
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(450), ___nl__im__2, ___get_global_const(451), ___nl__im__3, ___get_global_const(452), ___nl__im__4));
#line 46
c_rt_lib0clear(&___nl__im__2);
#line 46
c_rt_lib0clear(&___nl__im__3);
#line 46
c_rt_lib0clear(&___nl__im__4);
#line 46
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 46
c_rt_lib0clear(&___nl__im__1);
#line 46
return ___nl__im__0;
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
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
#line 52
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 53
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 54
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 55
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 55
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(687), ___nl__im__2, ___get_global_const(688), ___nl__im__3, ___get_global_const(452), ___nl__im__4, ___get_global_const(73), ___nl__im__5));
#line 55
c_rt_lib0clear(&___nl__im__2);
#line 55
c_rt_lib0clear(&___nl__im__3);
#line 55
c_rt_lib0clear(&___nl__im__4);
#line 55
c_rt_lib0clear(&___nl__im__5);
#line 55
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 55
c_rt_lib0clear(&___nl__im__1);
#line 55
return ___nl__im__0;
#line 55
c_rt_lib0clear(&___nl__im__0);
#line 55
return NULL;
}

ImmT  generator_c_struct_dependence_sort_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 60
c_rt_lib0move(&___nl__im__3,___get_global_const(35));
#line 60
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__3, ___nl__im__0));
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
___nl__int__4 = 0;
#line 60
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
//clear ___nl__int__4;
#line 60
c_rt_lib0clear(&___nl__im__0);
#line 60
return ___nl__im__1;
}

ImmT  generator_c_struct_dependence_sort_priv0get_fun_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 64
c_rt_lib0move(&___nl__im__3,___get_global_const(35));
#line 64
c_rt_lib0move(&___nl__im__2, string0split(___nl__im__3, ___nl__im__0));
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
___nl__int__4 = 1;
#line 64
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 64
c_rt_lib0clear(&___nl__im__2);
#line 64
//clear ___nl__int__4;
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
return ___nl__im__1;
}

ImmT  generator_c_struct_dependence_sort_priv0get_name(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 68
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 68
___nl__bool__1 = !___nl__bool__1;
#line 68
if(___nl__bool__1){ goto label_2;}
#line 69
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 69
c_rt_lib0move(&___nl__im__2, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__3));
#line 69
c_rt_lib0clear(&___nl__im__3);
#line 69
c_rt_lib0clear(&___nl__im__0);
#line 69
//clear ___nl__bool__1;
#line 69
return ___nl__im__2;
#line 70
goto label_1;
#line 70
label_2:
;
#line 70
label_1:
;
#line 70
//clear ___nl__bool__1;
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 71
c_rt_lib0move(&___nl__im__4, anon_naming0get_anon_name(___nl__im__0));
#line 71
c_rt_lib0clear(&___nl__im__0);
#line 71
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
#line 76
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 76
if(___nl__bool__3){ goto label_2;}
#line 77
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 77
if(___nl__bool__3){ goto label_3;}
#line 78
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 78
if(___nl__bool__3){ goto label_4;}
#line 81
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 81
if(___nl__bool__3){ goto label_5;}
#line 82
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 82
if(___nl__bool__3){ goto label_6;}
#line 85
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 85
if(___nl__bool__3){ goto label_7;}
#line 86
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 86
if(___nl__bool__3){ goto label_8;}
#line 91
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 91
if(___nl__bool__3){ goto label_9;}
#line 95
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 95
if(___nl__bool__3){ goto label_10;}
#line 96
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 96
if(___nl__bool__3){ goto label_11;}
#line 97
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 97
if(___nl__bool__3){ goto label_12;}
#line 98
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 98
if(___nl__bool__3){ goto label_13;}
#line 99
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 99
if(___nl__bool__3){ goto label_14;}
#line 100
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 100
if(___nl__bool__3){ goto label_15;}
#line 101
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 101
if(___nl__bool__3){ goto label_16;}
#line 113
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 113
if(___nl__bool__3){ goto label_17;}
#line 113
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 113
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 113
nl_die_arg(___nl__im__4);
#line 76
label_2:
;
#line 77
goto label_1;
#line 77
label_3:
;
#line 77
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 77
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 78
goto label_1;
#line 78
label_4:
;
#line 78
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 78
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 79
c_rt_lib0move(&___nl__im__9,___get_global_const(684));
#line 79
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__9));
#line 79
c_rt_lib0move(&___nl__im__10, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 79
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__10));
#line 79
c_rt_lib0move(&___nl__string__11,___get_global_const(684));
#line 79
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__11, ___nl__im__9));
#line 79
c_rt_lib0clear(&___nl__im__9);
#line 79
c_rt_lib0clear(&___nl__im__10);
#line 79
c_rt_lib0clear(&___nl__string__11);
#line 80
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__7, ___ref___im__1, ___nl__im__2));
#line 81
goto label_1;
#line 81
label_5:
;
#line 81
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 81
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 82
goto label_1;
#line 82
label_6:
;
#line 82
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 82
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 83
c_rt_lib0move(&___nl__im__16,___get_global_const(684));
#line 83
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__16));
#line 83
c_rt_lib0move(&___nl__im__17, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 83
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 83
c_rt_lib0move(&___nl__string__18,___get_global_const(684));
#line 83
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__18, ___nl__im__16));
#line 83
c_rt_lib0clear(&___nl__im__16);
#line 83
c_rt_lib0clear(&___nl__im__17);
#line 83
c_rt_lib0clear(&___nl__string__18);
#line 84
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__14, ___ref___im__1, ___nl__im__2));
#line 85
goto label_1;
#line 85
label_7:
;
#line 85
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 85
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 86
goto label_1;
#line 86
label_8:
;
#line 86
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 86
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 87
c_rt_lib0move(&___nl__im__23,___get_global_const(684));
#line 87
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__23));
#line 87
c_rt_lib0move(&___nl__im__24, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 87
c_rt_lib0delete(array0push(&___nl__im__23, ___nl__im__24));
#line 87
c_rt_lib0move(&___nl__string__25,___get_global_const(684));
#line 87
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__25, ___nl__im__23));
#line 87
c_rt_lib0clear(&___nl__im__23);
#line 87
c_rt_lib0clear(&___nl__im__24);
#line 87
c_rt_lib0clear(&___nl__string__25);
#line 88
c_rt_lib0move(&___nl__im__29, c_rt_lib0init_iter(___nl__im__21));
#line 88
label_20:
;
#line 88
___nl__bool__27 = c_rt_lib0is_end_hash(___nl__im__29);
#line 88
if(___nl__bool__27){ goto label_18;}
#line 88
c_rt_lib0move(&___nl__im__26, c_rt_lib0get_key_iter(___nl__im__29));
#line 88
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value(___nl__im__21, ___nl__im__26));
#line 89
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__28, ___ref___im__1, ___nl__im__2));
#line 89
label_19:
;
#line 90
c_rt_lib0move(&___nl__im__29, c_rt_lib0next_iter(___nl__im__29));
#line 90
goto label_20;
#line 90
label_18:
;
#line 91
goto label_1;
#line 91
label_9:
;
#line 91
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 91
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 92
c_rt_lib0move(&___nl__im__33, generator_c_struct_dependence_sort_priv0get_module_name(___nl__im__30));
#line 92
___nl__bool__32 = c_rt_lib0eq(___nl__im__33, ___nl__im__2);
#line 92
c_rt_lib0clear(&___nl__im__33);
#line 92
___nl__bool__32 = !___nl__bool__32;
#line 92
if(___nl__bool__32){ goto label_22;}
#line 93
c_rt_lib0move(&___nl__im__34,___get_global_const(684));
#line 93
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__34));
#line 93
c_rt_lib0move(&___nl__im__35, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__30));
#line 93
c_rt_lib0delete(array0push(&___nl__im__34, ___nl__im__35));
#line 93
c_rt_lib0move(&___nl__string__36,___get_global_const(684));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__36, ___nl__im__34));
#line 93
c_rt_lib0clear(&___nl__im__34);
#line 93
c_rt_lib0clear(&___nl__im__35);
#line 93
c_rt_lib0clear(&___nl__string__36);
#line 94
goto label_21;
#line 94
label_22:
;
#line 94
label_21:
;
#line 94
//clear ___nl__bool__32;
#line 95
goto label_1;
#line 95
label_10:
;
#line 96
goto label_1;
#line 96
label_11:
;
#line 97
goto label_1;
#line 97
label_12:
;
#line 98
goto label_1;
#line 98
label_13:
;
#line 99
goto label_1;
#line 99
label_14:
;
#line 100
goto label_1;
#line 100
label_15:
;
#line 100
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 100
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 101
goto label_1;
#line 101
label_16:
;
#line 101
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 101
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 102
c_rt_lib0move(&___nl__im__41,___get_global_const(684));
#line 102
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__41));
#line 102
c_rt_lib0move(&___nl__im__42, generator_c_struct_dependence_sort_priv0get_name(___nl__im__0));
#line 102
c_rt_lib0delete(array0push(&___nl__im__41, ___nl__im__42));
#line 102
c_rt_lib0move(&___nl__string__43,___get_global_const(684));
#line 102
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__43, ___nl__im__41));
#line 102
c_rt_lib0clear(&___nl__im__41);
#line 102
c_rt_lib0clear(&___nl__im__42);
#line 102
c_rt_lib0clear(&___nl__string__43);
#line 103
c_rt_lib0move(&___nl__im__47, c_rt_lib0init_iter(___nl__im__39));
#line 103
label_25:
;
#line 103
___nl__bool__45 = c_rt_lib0is_end_hash(___nl__im__47);
#line 103
if(___nl__bool__45){ goto label_23;}
#line 103
c_rt_lib0move(&___nl__im__44, c_rt_lib0get_key_iter(___nl__im__47));
#line 103
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value(___nl__im__39, ___nl__im__44));
#line 104
___nl__bool__48 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(28));
#line 104
if(___nl__bool__48){ goto label_27;}
#line 110
___nl__bool__48 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(29));
#line 110
if(___nl__bool__48){ goto label_28;}
#line 110
c_rt_lib0move(&___nl__im__49,___get_global_const(16));
#line 110
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(2, ___nl__im__49, ___nl__im__46));
#line 110
nl_die_arg(___nl__im__49);
#line 104
label_27:
;
#line 104
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__46, ___get_global_const(28)));
#line 104
c_rt_lib0copy(&___nl__im__50, ___nl__im__51);
#line 105
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(6));
#line 105
if(___nl__bool__52){ goto label_34;}
#line 105
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(2));
#line 105
label_34:
;
#line 105
//clear ___nl__bool__56;
#line 105
if(___nl__bool__52){ goto label_33;}
#line 106
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(14));
#line 106
label_33:
;
#line 106
//clear ___nl__bool__55;
#line 106
if(___nl__bool__52){ goto label_32;}
#line 106
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(4));
#line 106
label_32:
;
#line 106
//clear ___nl__bool__54;
#line 106
if(___nl__bool__52){ goto label_31;}
#line 107
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(7));
#line 107
label_31:
;
#line 107
//clear ___nl__bool__53;
#line 107
___nl__bool__52 = !___nl__bool__52;
#line 107
if(___nl__bool__52){ goto label_30;}
#line 108
c_rt_lib0move(&___nl__im__57,___get_global_const(683));
#line 108
c_rt_lib0move(&___nl__im__57, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__57));
#line 108
c_rt_lib0move(&___nl__im__58, generator_c_struct_dependence_sort_priv0get_name(___nl__im__50));
#line 108
c_rt_lib0delete(array0push(&___nl__im__57, ___nl__im__58));
#line 108
c_rt_lib0move(&___nl__string__59,___get_global_const(683));
#line 108
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__59, ___nl__im__57));
#line 108
c_rt_lib0clear(&___nl__im__57);
#line 108
c_rt_lib0clear(&___nl__im__58);
#line 108
c_rt_lib0clear(&___nl__string__59);
#line 109
goto label_29;
#line 109
label_30:
;
#line 109
label_29:
;
#line 109
//clear ___nl__bool__52;
#line 110
goto label_26;
#line 110
label_28:
;
#line 111
goto label_26;
#line 111
label_26:
;
#line 111
//clear ___nl__bool__48;
#line 111
c_rt_lib0clear(&___nl__im__49);
#line 111
c_rt_lib0clear(&___nl__im__50);
#line 111
c_rt_lib0clear(&___nl__im__51);
#line 111
label_24:
;
#line 112
c_rt_lib0move(&___nl__im__47, c_rt_lib0next_iter(___nl__im__47));
#line 112
goto label_25;
#line 112
label_23:
;
#line 113
goto label_1;
#line 113
label_17:
;
#line 114
goto label_1;
#line 114
label_1:
;
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__2);
#line 114
//clear ___nl__bool__3;
#line 114
c_rt_lib0clear(&___nl__im__4);
#line 114
c_rt_lib0clear(&___nl__im__5);
#line 114
c_rt_lib0clear(&___nl__im__6);
#line 114
c_rt_lib0clear(&___nl__im__7);
#line 114
c_rt_lib0clear(&___nl__im__8);
#line 114
c_rt_lib0clear(&___nl__im__12);
#line 114
c_rt_lib0clear(&___nl__im__13);
#line 114
c_rt_lib0clear(&___nl__im__14);
#line 114
c_rt_lib0clear(&___nl__im__15);
#line 114
c_rt_lib0clear(&___nl__im__19);
#line 114
c_rt_lib0clear(&___nl__im__20);
#line 114
c_rt_lib0clear(&___nl__im__21);
#line 114
c_rt_lib0clear(&___nl__im__22);
#line 114
c_rt_lib0clear(&___nl__im__26);
#line 114
//clear ___nl__bool__27;
#line 114
c_rt_lib0clear(&___nl__im__28);
#line 114
c_rt_lib0clear(&___nl__im__29);
#line 114
c_rt_lib0clear(&___nl__im__30);
#line 114
c_rt_lib0clear(&___nl__im__31);
#line 114
c_rt_lib0clear(&___nl__im__37);
#line 114
c_rt_lib0clear(&___nl__im__38);
#line 114
c_rt_lib0clear(&___nl__im__39);
#line 114
c_rt_lib0clear(&___nl__im__40);
#line 114
c_rt_lib0clear(&___nl__im__44);
#line 114
//clear ___nl__bool__45;
#line 114
c_rt_lib0clear(&___nl__im__46);
#line 114
c_rt_lib0clear(&___nl__im__47);
#line 114
//clear ___nl__bool__48;
#line 114
c_rt_lib0clear(&___nl__im__49);
#line 114
c_rt_lib0clear(&___nl__im__50);
#line 114
c_rt_lib0clear(&___nl__im__51);
#line 114
return NULL;
}

bool  generator_c_struct_dependence_sort0is_divisible0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_c_struct_dependence_sort0is_divisible");
tct0meta_type0type *var0 = &(_tab[0]);
return generator_c_struct_dependence_sort0is_divisible(*var0);
}
bool  generator_c_struct_dependence_sort0is_divisible(tct0meta_type0type ___nl__im__0) {
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
#line 118
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 118
if(___nl__bool__1){ goto label_2;}
#line 119
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 119
if(___nl__bool__1){ goto label_3;}
#line 120
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 120
if(___nl__bool__1){ goto label_4;}
#line 121
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 121
if(___nl__bool__1){ goto label_5;}
#line 122
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 122
if(___nl__bool__1){ goto label_6;}
#line 123
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 123
if(___nl__bool__1){ goto label_7;}
#line 124
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 124
if(___nl__bool__1){ goto label_8;}
#line 126
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 126
if(___nl__bool__1){ goto label_9;}
#line 127
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 127
if(___nl__bool__1){ goto label_10;}
#line 128
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 128
if(___nl__bool__1){ goto label_11;}
#line 129
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 129
if(___nl__bool__1){ goto label_12;}
#line 130
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 130
if(___nl__bool__1){ goto label_13;}
#line 131
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 131
if(___nl__bool__1){ goto label_14;}
#line 132
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 132
if(___nl__bool__1){ goto label_15;}
#line 133
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 133
if(___nl__bool__1){ goto label_16;}
#line 135
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 135
if(___nl__bool__1){ goto label_17;}
#line 135
c_rt_lib0move(&___nl__im__2,___get_global_const(16));
#line 135
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 135
nl_die_arg(___nl__im__2);
#line 118
label_2:
;
#line 119
goto label_1;
#line 119
label_3:
;
#line 119
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 119
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 120
goto label_1;
#line 120
label_4:
;
#line 120
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 120
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 121
goto label_1;
#line 121
label_5:
;
#line 121
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 121
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 122
goto label_1;
#line 122
label_6:
;
#line 122
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 122
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 123
goto label_1;
#line 123
label_7:
;
#line 123
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 123
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 124
goto label_1;
#line 124
label_8:
;
#line 124
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 124
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 125
___nl__bool__15 = true;
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
//clear ___nl__bool__1;
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
c_rt_lib0clear(&___nl__im__4);
#line 125
c_rt_lib0clear(&___nl__im__5);
#line 125
c_rt_lib0clear(&___nl__im__6);
#line 125
c_rt_lib0clear(&___nl__im__7);
#line 125
c_rt_lib0clear(&___nl__im__8);
#line 125
c_rt_lib0clear(&___nl__im__9);
#line 125
c_rt_lib0clear(&___nl__im__10);
#line 125
c_rt_lib0clear(&___nl__im__11);
#line 125
c_rt_lib0clear(&___nl__im__12);
#line 125
c_rt_lib0clear(&___nl__im__13);
#line 125
c_rt_lib0clear(&___nl__im__14);
#line 125
return ___nl__bool__15;
#line 126
goto label_1;
#line 126
label_9:
;
#line 126
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 126
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 127
goto label_1;
#line 127
label_10:
;
#line 128
goto label_1;
#line 128
label_11:
;
#line 129
goto label_1;
#line 129
label_12:
;
#line 130
goto label_1;
#line 130
label_13:
;
#line 131
goto label_1;
#line 131
label_14:
;
#line 132
goto label_1;
#line 132
label_15:
;
#line 132
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 132
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 133
goto label_1;
#line 133
label_16:
;
#line 133
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 133
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 134
___nl__bool__22 = true;
#line 134
c_rt_lib0clear(&___nl__im__0);
#line 134
//clear ___nl__bool__1;
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
c_rt_lib0clear(&___nl__im__3);
#line 134
c_rt_lib0clear(&___nl__im__4);
#line 134
c_rt_lib0clear(&___nl__im__5);
#line 134
c_rt_lib0clear(&___nl__im__6);
#line 134
c_rt_lib0clear(&___nl__im__7);
#line 134
c_rt_lib0clear(&___nl__im__8);
#line 134
c_rt_lib0clear(&___nl__im__9);
#line 134
c_rt_lib0clear(&___nl__im__10);
#line 134
c_rt_lib0clear(&___nl__im__11);
#line 134
c_rt_lib0clear(&___nl__im__12);
#line 134
c_rt_lib0clear(&___nl__im__13);
#line 134
c_rt_lib0clear(&___nl__im__14);
#line 134
//clear ___nl__bool__15;
#line 134
c_rt_lib0clear(&___nl__im__16);
#line 134
c_rt_lib0clear(&___nl__im__17);
#line 134
c_rt_lib0clear(&___nl__im__18);
#line 134
c_rt_lib0clear(&___nl__im__19);
#line 134
c_rt_lib0clear(&___nl__im__20);
#line 134
c_rt_lib0clear(&___nl__im__21);
#line 134
return ___nl__bool__22;
#line 135
goto label_1;
#line 135
label_17:
;
#line 136
goto label_1;
#line 136
label_1:
;
#line 137
___nl__bool__23 = false;
#line 137
c_rt_lib0clear(&___nl__im__0);
#line 137
//clear ___nl__bool__1;
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 137
c_rt_lib0clear(&___nl__im__3);
#line 137
c_rt_lib0clear(&___nl__im__4);
#line 137
c_rt_lib0clear(&___nl__im__5);
#line 137
c_rt_lib0clear(&___nl__im__6);
#line 137
c_rt_lib0clear(&___nl__im__7);
#line 137
c_rt_lib0clear(&___nl__im__8);
#line 137
c_rt_lib0clear(&___nl__im__9);
#line 137
c_rt_lib0clear(&___nl__im__10);
#line 137
c_rt_lib0clear(&___nl__im__11);
#line 137
c_rt_lib0clear(&___nl__im__12);
#line 137
c_rt_lib0clear(&___nl__im__13);
#line 137
c_rt_lib0clear(&___nl__im__14);
#line 137
//clear ___nl__bool__15;
#line 137
c_rt_lib0clear(&___nl__im__16);
#line 137
c_rt_lib0clear(&___nl__im__17);
#line 137
c_rt_lib0clear(&___nl__im__18);
#line 137
c_rt_lib0clear(&___nl__im__19);
#line 137
c_rt_lib0clear(&___nl__im__20);
#line 137
c_rt_lib0clear(&___nl__im__21);
#line 137
//clear ___nl__bool__22;
#line 137
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
#line 141
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 142
label_3:
;
#line 142
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 142
if(___nl__bool__4){ goto label_1;}
#line 142
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 142
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 143
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 143
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 144
___nl__bool__10 = generator_c_struct_dependence_sort0is_divisible(___nl__im__5);
#line 144
c_rt_lib0move(&___nl__im__11, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 144
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(683), ___nl__im__8, ___get_global_const(684), ___nl__im__9, ___get_global_const(685), ___nl__im__11, ___get_global_const(204), ___nl__im__5));
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
//clear ___nl__bool__10;
#line 144
c_rt_lib0clear(&___nl__im__11);
#line 145
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__5, &___nl__im__7, ___nl__im__1));
#line 146
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(683)));
#line 146
___nl__int__13 = c_rt_lib0array_len(___nl__im__14);
#line 146
c_rt_lib0clear(&___nl__im__14);
#line 146
___nl__int__15 = 0;
#line 146
___nl__int__16 = ___nl__int__13 > ___nl__int__15;
#line 146
___nl__bool__12 = ___nl__int__16;
#line 146
//clear ___nl__int__13;
#line 146
//clear ___nl__int__15;
#line 146
//clear ___nl__int__16;
#line 146
___nl__bool__12 = !___nl__bool__12;
#line 146
if(___nl__bool__12){ goto label_5;}
#line 147
c_rt_lib0move(&___nl__im__17,___get_global_const(683));
#line 147
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__17));
#line 147
___nl__int__18 = 0;
#line 147
c_rt_lib0delete(array0remove(&___nl__im__17, ___nl__int__18));
#line 147
c_rt_lib0move(&___nl__string__19,___get_global_const(683));
#line 147
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__19, ___nl__im__17));
#line 147
c_rt_lib0clear(&___nl__im__17);
#line 147
//clear ___nl__int__18;
#line 147
c_rt_lib0clear(&___nl__string__19);
#line 148
goto label_4;
#line 148
label_5:
;
#line 148
label_4:
;
#line 148
//clear ___nl__bool__12;
#line 149
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(684)));
#line 149
___nl__int__21 = c_rt_lib0array_len(___nl__im__22);
#line 149
c_rt_lib0clear(&___nl__im__22);
#line 149
___nl__int__23 = 0;
#line 149
___nl__int__24 = ___nl__int__21 > ___nl__int__23;
#line 149
___nl__bool__20 = ___nl__int__24;
#line 149
//clear ___nl__int__21;
#line 149
//clear ___nl__int__23;
#line 149
//clear ___nl__int__24;
#line 149
___nl__bool__20 = !___nl__bool__20;
#line 149
if(___nl__bool__20){ goto label_7;}
#line 150
c_rt_lib0move(&___nl__im__25,___get_global_const(684));
#line 150
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash(___nl__im__7, ___nl__im__25));
#line 150
___nl__int__26 = 0;
#line 150
c_rt_lib0delete(array0remove(&___nl__im__25, ___nl__int__26));
#line 150
c_rt_lib0move(&___nl__string__27,___get_global_const(684));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__7, ___nl__string__27, ___nl__im__25));
#line 150
c_rt_lib0clear(&___nl__im__25);
#line 150
//clear ___nl__int__26;
#line 150
c_rt_lib0clear(&___nl__string__27);
#line 151
goto label_6;
#line 151
label_7:
;
#line 151
label_6:
;
#line 151
//clear ___nl__bool__20;
#line 152
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__3, ___nl__im__7));
#line 152
c_rt_lib0clear(&___nl__im__7);
#line 152
label_2:
;
#line 153
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 153
goto label_3;
#line 153
label_1:
;
#line 154
c_rt_lib0copy(&___nl__im__28, ___nl__im__2);
#line 155
c_rt_lib0move(&___nl__im__32, c_rt_lib0init_iter(___nl__im__28));
#line 155
label_10:
;
#line 155
___nl__bool__30 = c_rt_lib0is_end_hash(___nl__im__32);
#line 155
if(___nl__bool__30){ goto label_8;}
#line 155
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_key_iter(___nl__im__32));
#line 155
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value(___nl__im__28, ___nl__im__29));
#line 156
c_rt_lib0copy(&___nl__im__33, ___nl__im__31);
#line 157
c_rt_lib0move(&___nl__im__34,___get_global_const(683));
#line 157
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_ref_hash(___nl__im__33, ___nl__im__34));
#line 157
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__34));
#line 157
c_rt_lib0move(&___nl__string__35,___get_global_const(683));
#line 157
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__33, ___nl__string__35, ___nl__im__34));
#line 157
c_rt_lib0clear(&___nl__im__34);
#line 157
c_rt_lib0clear(&___nl__string__35);
#line 158
c_rt_lib0move(&___nl__im__36,___get_global_const(684));
#line 158
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_ref_hash(___nl__im__33, ___nl__im__36));
#line 158
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__36));
#line 158
c_rt_lib0move(&___nl__string__37,___get_global_const(684));
#line 158
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__33, ___nl__string__37, ___nl__im__36));
#line 158
c_rt_lib0clear(&___nl__im__36);
#line 158
c_rt_lib0clear(&___nl__string__37);
#line 159
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__29, ___nl__im__33));
#line 159
c_rt_lib0clear(&___nl__im__33);
#line 159
label_9:
;
#line 160
c_rt_lib0move(&___nl__im__32, c_rt_lib0next_iter(___nl__im__32));
#line 160
goto label_10;
#line 160
label_8:
;
#line 161
c_rt_lib0clear(&___nl__im__0);
#line 161
c_rt_lib0clear(&___nl__im__1);
#line 161
c_rt_lib0clear(&___nl__im__3);
#line 161
//clear ___nl__bool__4;
#line 161
c_rt_lib0clear(&___nl__im__5);
#line 161
c_rt_lib0clear(&___nl__im__6);
#line 161
c_rt_lib0clear(&___nl__im__7);
#line 161
c_rt_lib0clear(&___nl__im__28);
#line 161
c_rt_lib0clear(&___nl__im__29);
#line 161
//clear ___nl__bool__30;
#line 161
c_rt_lib0clear(&___nl__im__31);
#line 161
c_rt_lib0clear(&___nl__im__32);
#line 161
c_rt_lib0clear(&___nl__im__33);
#line 161
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
#line 165
c_rt_lib0delete(array0sort(___ref___im__0));
#line 166
___nl__int__1 = 0;
#line 167
label_2:
;
#line 168
___nl__int__4 = c_rt_lib0array_len((*___ref___im__0));
#line 168
___nl__int__5 = 1;
#line 168
___nl__int__3 = ___nl__int__4 - ___nl__int__5;
#line 168
//clear ___nl__int__4;
#line 168
//clear ___nl__int__5;
#line 168
___nl__int__6 = ___nl__int__1 >= ___nl__int__3;
#line 168
___nl__bool__2 = ___nl__int__6;
#line 168
//clear ___nl__int__3;
#line 168
//clear ___nl__int__6;
#line 168
___nl__bool__2 = !___nl__bool__2;
#line 168
if(___nl__bool__2){ goto label_4;}
#line 169
goto label_1;
#line 170
goto label_3;
#line 170
label_4:
;
#line 170
label_3:
;
#line 170
//clear ___nl__bool__2;
#line 171
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get((*___ref___im__0), ___nl__int__1));
#line 171
___nl__int__11 = 1;
#line 171
___nl__int__10 = ___nl__int__1 + ___nl__int__11;
#line 171
//clear ___nl__int__11;
#line 171
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get((*___ref___im__0), ___nl__int__10));
#line 171
//clear ___nl__int__10;
#line 171
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 171
c_rt_lib0clear(&___nl__im__8);
#line 171
c_rt_lib0clear(&___nl__im__9);
#line 171
___nl__bool__7 = !___nl__bool__7;
#line 171
if(___nl__bool__7){ goto label_6;}
#line 172
___nl__int__13 = 1;
#line 172
___nl__int__12 = ___nl__int__1 + ___nl__int__13;
#line 172
//clear ___nl__int__13;
#line 172
c_rt_lib0delete(array0remove(___ref___im__0, ___nl__int__12));
#line 172
//clear ___nl__int__12;
#line 173
goto label_5;
#line 173
label_6:
;
#line 174
___nl__int__14 = 1;
#line 174
___nl__int__1 = ___nl__int__1 + ___nl__int__14;
#line 174
//clear ___nl__int__14;
#line 175
goto label_5;
#line 175
label_5:
;
#line 175
//clear ___nl__bool__7;
#line 167
goto label_2;
#line 167
label_1:
;
#line 167
//clear ___nl__int__1;
#line 167
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
#line 181
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(452));
#line 181
if(___nl__bool__2){ goto label_3;}
#line 181
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(452));
#line 181
label_3:
;
#line 181
//clear ___nl__bool__3;
#line 181
___nl__bool__2 = !___nl__bool__2;
#line 181
if(___nl__bool__2){ goto label_2;}
#line 182
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(452)));
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__bool__2;
#line 182
return ___nl__im__4;
#line 183
goto label_1;
#line 183
label_2:
;
#line 183
label_1:
;
#line 183
//clear ___nl__bool__2;
#line 183
c_rt_lib0clear(&___nl__im__4);
#line 184
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(73));
#line 184
___nl__bool__5 = !___nl__bool__5;
#line 184
if(___nl__bool__5){ goto label_5;}
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
//clear ___nl__bool__5;
#line 185
return ___nl__im__1;
#line 186
goto label_4;
#line 186
label_5:
;
#line 186
label_4:
;
#line 186
//clear ___nl__bool__5;
#line 187
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(73));
#line 187
___nl__bool__6 = !___nl__bool__6;
#line 187
if(___nl__bool__6){ goto label_7;}
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
//clear ___nl__bool__6;
#line 188
return ___nl__im__0;
#line 189
goto label_6;
#line 189
label_7:
;
#line 189
label_6:
;
#line 189
//clear ___nl__bool__6;
#line 190
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__0));
#line 190
c_rt_lib0move(&___nl__im__9, ov0get_element(___nl__im__1));
#line 190
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
c_rt_lib0clear(&___nl__im__9);
#line 190
___nl__bool__7 = !___nl__bool__7;
#line 190
if(___nl__bool__7){ goto label_9;}
#line 191
c_rt_lib0clear(&___nl__im__1);
#line 191
//clear ___nl__bool__7;
#line 191
return ___nl__im__0;
#line 192
goto label_8;
#line 192
label_9:
;
#line 192
label_8:
;
#line 192
//clear ___nl__bool__7;
#line 193
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(452)));
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
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
#line 198
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(73));
#line 198
if(___nl__bool__2){ goto label_3;}
#line 198
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(73));
#line 198
label_3:
;
#line 198
//clear ___nl__bool__3;
#line 198
___nl__bool__2 = !___nl__bool__2;
#line 198
if(___nl__bool__2){ goto label_2;}
#line 199
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 199
c_rt_lib0clear(&___nl__im__0);
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
//clear ___nl__bool__2;
#line 199
return ___nl__im__4;
#line 200
goto label_1;
#line 200
label_2:
;
#line 200
label_1:
;
#line 200
//clear ___nl__bool__2;
#line 200
c_rt_lib0clear(&___nl__im__4);
#line 201
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(452));
#line 201
___nl__bool__5 = !___nl__bool__5;
#line 201
if(___nl__bool__5){ goto label_5;}
#line 202
c_rt_lib0clear(&___nl__im__0);
#line 202
//clear ___nl__bool__5;
#line 202
return ___nl__im__1;
#line 203
goto label_4;
#line 203
label_5:
;
#line 203
label_4:
;
#line 203
//clear ___nl__bool__5;
#line 204
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(452));
#line 204
___nl__bool__6 = !___nl__bool__6;
#line 204
if(___nl__bool__6){ goto label_7;}
#line 205
c_rt_lib0clear(&___nl__im__1);
#line 205
//clear ___nl__bool__6;
#line 205
return ___nl__im__0;
#line 206
goto label_6;
#line 206
label_7:
;
#line 206
label_6:
;
#line 206
//clear ___nl__bool__6;
#line 207
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__0));
#line 207
c_rt_lib0move(&___nl__im__9, ov0get_element(___nl__im__1));
#line 207
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 207
c_rt_lib0clear(&___nl__im__8);
#line 207
c_rt_lib0clear(&___nl__im__9);
#line 207
___nl__bool__7 = !___nl__bool__7;
#line 207
if(___nl__bool__7){ goto label_9;}
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
//clear ___nl__bool__7;
#line 208
return ___nl__im__0;
#line 209
goto label_8;
#line 209
label_9:
;
#line 209
label_8:
;
#line 209
//clear ___nl__bool__7;
#line 210
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 210
c_rt_lib0clear(&___nl__im__0);
#line 210
c_rt_lib0clear(&___nl__im__1);
#line 210
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
#line 215
c_rt_lib0move(&___nl__im__3, ov0get_element(___nl__im__0));
#line 215
c_rt_lib0move(&___nl__im__4, ov0get_element(___nl__im__1));
#line 215
___nl__bool__2 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 215
c_rt_lib0clear(&___nl__im__3);
#line 215
c_rt_lib0clear(&___nl__im__4);
#line 215
___nl__bool__2 = !___nl__bool__2;
#line 215
if(___nl__bool__2){ goto label_2;}
#line 216
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
c_rt_lib0clear(&___nl__im__1);
#line 216
//clear ___nl__bool__2;
#line 216
return ___nl__im__5;
#line 217
goto label_1;
#line 217
label_2:
;
#line 217
label_1:
;
#line 217
//clear ___nl__bool__2;
#line 217
c_rt_lib0clear(&___nl__im__5);
#line 218
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(73));
#line 218
___nl__bool__6 = !___nl__bool__6;
#line 218
if(___nl__bool__6){ goto label_4;}
#line 219
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
c_rt_lib0clear(&___nl__im__1);
#line 219
//clear ___nl__bool__6;
#line 219
return ___nl__im__7;
#line 220
goto label_3;
#line 220
label_4:
;
#line 220
label_3:
;
#line 220
//clear ___nl__bool__6;
#line 220
c_rt_lib0clear(&___nl__im__7);
#line 221
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(73));
#line 221
___nl__bool__8 = !___nl__bool__8;
#line 221
if(___nl__bool__8){ goto label_6;}
#line 222
c_rt_lib0clear(&___nl__im__1);
#line 222
//clear ___nl__bool__8;
#line 222
return ___nl__im__0;
#line 223
goto label_5;
#line 223
label_6:
;
#line 223
label_5:
;
#line 223
//clear ___nl__bool__8;
#line 224
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(452));
#line 224
___nl__bool__9 = !___nl__bool__9;
#line 224
if(___nl__bool__9){ goto label_8;}
#line 225
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 225
c_rt_lib0clear(&___nl__im__0);
#line 225
c_rt_lib0clear(&___nl__im__1);
#line 225
//clear ___nl__bool__9;
#line 225
return ___nl__im__10;
#line 226
goto label_7;
#line 226
label_8:
;
#line 226
label_7:
;
#line 226
//clear ___nl__bool__9;
#line 226
c_rt_lib0clear(&___nl__im__10);
#line 227
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(452));
#line 227
___nl__bool__11 = !___nl__bool__11;
#line 227
if(___nl__bool__11){ goto label_10;}
#line 228
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(687));
#line 228
___nl__bool__12 = !___nl__bool__12;
#line 228
if(___nl__bool__12){ goto label_12;}
#line 229
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(688)));
#line 229
c_rt_lib0clear(&___nl__im__0);
#line 229
c_rt_lib0clear(&___nl__im__1);
#line 229
//clear ___nl__bool__11;
#line 229
//clear ___nl__bool__12;
#line 229
return ___nl__im__13;
#line 230
goto label_11;
#line 230
label_12:
;
#line 230
label_11:
;
#line 230
//clear ___nl__bool__12;
#line 230
c_rt_lib0clear(&___nl__im__13);
#line 231
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(687)));
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
//clear ___nl__bool__11;
#line 231
return ___nl__im__14;
#line 232
goto label_9;
#line 232
label_10:
;
#line 232
label_9:
;
#line 232
//clear ___nl__bool__11;
#line 232
c_rt_lib0clear(&___nl__im__14);
#line 233
c_rt_lib0clear(&___nl__im__1);
#line 233
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
#line 238
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(452));
#line 238
___nl__bool__2 = !___nl__bool__2;
#line 238
if(___nl__bool__2){ goto label_2;}
#line 239
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(452), ___nl__im__0));
#line 239
c_rt_lib0clear(&___nl__im__0);
#line 239
c_rt_lib0clear(&___nl__im__1);
#line 239
//clear ___nl__bool__2;
#line 239
return ___nl__im__3;
#line 240
goto label_1;
#line 240
label_2:
;
#line 240
label_1:
;
#line 240
//clear ___nl__bool__2;
#line 240
c_rt_lib0clear(&___nl__im__3);
#line 241
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(687));
#line 241
___nl__bool__4 = !___nl__bool__4;
#line 241
if(___nl__bool__4){ goto label_4;}
#line 242
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(451), ___nl__im__0));
#line 242
c_rt_lib0clear(&___nl__im__0);
#line 242
c_rt_lib0clear(&___nl__im__1);
#line 242
//clear ___nl__bool__4;
#line 242
return ___nl__im__5;
#line 243
goto label_3;
#line 243
label_4:
;
#line 243
label_3:
;
#line 243
//clear ___nl__bool__4;
#line 243
c_rt_lib0clear(&___nl__im__5);
#line 244
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_const(688));
#line 244
___nl__bool__6 = !___nl__bool__6;
#line 244
if(___nl__bool__6){ goto label_6;}
#line 245
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(450), ___nl__im__0));
#line 245
c_rt_lib0clear(&___nl__im__0);
#line 245
c_rt_lib0clear(&___nl__im__1);
#line 245
//clear ___nl__bool__6;
#line 245
return ___nl__im__7;
#line 246
goto label_5;
#line 246
label_6:
;
#line 246
label_5:
;
#line 246
//clear ___nl__bool__6;
#line 246
c_rt_lib0clear(&___nl__im__7);
#line 247
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 247
nl_die_arg(___nl__im__8);
}

ImmT  generator_c_struct_dependence_sort_priv0sort_graph_help(generator_c_struct_dependence_sort0graph0type ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,ImmT * ___ref___im__3,generator_c_struct_dependence_sort0sorted_element0type ___nl__im__4,bool * ___ref___bool__5) {
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
#line 257
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(450));
#line 257
if(___nl__bool__8){ goto label_2;}
#line 260
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(451));
#line 260
if(___nl__bool__8){ goto label_3;}
#line 263
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(452));
#line 263
if(___nl__bool__8){ goto label_4;}
#line 263
c_rt_lib0move(&___nl__im__9,___get_global_const(16));
#line 263
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__4));
#line 263
nl_die_arg(___nl__im__9);
#line 257
label_2:
;
#line 257
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(450)));
#line 257
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 258
c_rt_lib0copy(&___nl__im__6, ___nl__im__10);
#line 259
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(688)));
#line 260
goto label_1;
#line 260
label_3:
;
#line 260
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(451)));
#line 260
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 261
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 262
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(687)));
#line 263
goto label_1;
#line 263
label_4:
;
#line 263
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(452)));
#line 263
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 264
c_rt_lib0copy(&___nl__im__6, ___nl__im__14);
#line 265
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(452)));
#line 266
goto label_1;
#line 266
label_1:
;
#line 268
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 269
___nl__bool__17 = hash0has_key((*___ref___im__3), ___nl__im__6);
#line 269
___nl__bool__17 = !___nl__bool__17;
#line 269
if(___nl__bool__17){ goto label_6;}
#line 270
c_rt_lib0move(&___nl__im__16, hash0get_value((*___ref___im__3), ___nl__im__6));
#line 271
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(452));
#line 271
if(___nl__bool__18){ goto label_9;}
#line 271
c_rt_lib0move(&___nl__im__20, ov0get_element(___nl__im__16));
#line 271
c_rt_lib0move(&___nl__im__21, ov0get_element(___nl__im__7));
#line 271
___nl__bool__18 = c_rt_lib0eq(___nl__im__20, ___nl__im__21);
#line 271
c_rt_lib0clear(&___nl__im__20);
#line 271
c_rt_lib0clear(&___nl__im__21);
#line 271
label_9:
;
#line 271
//clear ___nl__bool__19;
#line 271
___nl__bool__18 = !___nl__bool__18;
#line 271
if(___nl__bool__18){ goto label_8;}
#line 272
c_rt_lib0clear(&___nl__im__0);
#line 272
c_rt_lib0clear(&___nl__im__4);
#line 272
c_rt_lib0clear(&___nl__im__6);
#line 272
c_rt_lib0clear(&___nl__im__7);
#line 272
//clear ___nl__bool__8;
#line 272
c_rt_lib0clear(&___nl__im__9);
#line 272
c_rt_lib0clear(&___nl__im__10);
#line 272
c_rt_lib0clear(&___nl__im__11);
#line 272
c_rt_lib0clear(&___nl__im__12);
#line 272
c_rt_lib0clear(&___nl__im__13);
#line 272
c_rt_lib0clear(&___nl__im__14);
#line 272
c_rt_lib0clear(&___nl__im__15);
#line 272
c_rt_lib0clear(&___nl__im__16);
#line 272
//clear ___nl__bool__17;
#line 272
//clear ___nl__bool__18;
#line 272
return NULL;
#line 273
goto label_7;
#line 273
label_8:
;
#line 273
label_7:
;
#line 273
//clear ___nl__bool__18;
#line 274
goto label_5;
#line 274
label_6:
;
#line 274
label_5:
;
#line 274
//clear ___nl__bool__17;
#line 275
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 276
___nl__bool__23 = hash0has_key((*___ref___im__2), ___nl__im__6);
#line 276
___nl__bool__23 = !___nl__bool__23;
#line 276
if(___nl__bool__23){ goto label_11;}
#line 277
c_rt_lib0move(&___nl__im__22, hash0get_value((*___ref___im__2), ___nl__im__6));
#line 278
c_rt_lib0move(&___nl__im__25, generator_c_struct_dependence_sort_priv0common_type(___nl__im__7, ___nl__im__22));
#line 278
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(73));
#line 278
c_rt_lib0clear(&___nl__im__25);
#line 278
___nl__bool__24 = !___nl__bool__24;
#line 278
___nl__bool__24 = !___nl__bool__24;
#line 278
if(___nl__bool__24){ goto label_13;}
#line 279
(*___ref___bool__5) = true;
#line 280
c_rt_lib0clear(&___nl__im__0);
#line 280
c_rt_lib0clear(&___nl__im__4);
#line 280
c_rt_lib0clear(&___nl__im__6);
#line 280
c_rt_lib0clear(&___nl__im__7);
#line 280
//clear ___nl__bool__8;
#line 280
c_rt_lib0clear(&___nl__im__9);
#line 280
c_rt_lib0clear(&___nl__im__10);
#line 280
c_rt_lib0clear(&___nl__im__11);
#line 280
c_rt_lib0clear(&___nl__im__12);
#line 280
c_rt_lib0clear(&___nl__im__13);
#line 280
c_rt_lib0clear(&___nl__im__14);
#line 280
c_rt_lib0clear(&___nl__im__15);
#line 280
c_rt_lib0clear(&___nl__im__16);
#line 280
c_rt_lib0clear(&___nl__im__22);
#line 280
//clear ___nl__bool__23;
#line 280
//clear ___nl__bool__24;
#line 280
return NULL;
#line 281
goto label_12;
#line 281
label_13:
;
#line 281
label_12:
;
#line 281
//clear ___nl__bool__24;
#line 282
goto label_10;
#line 282
label_11:
;
#line 282
label_10:
;
#line 282
//clear ___nl__bool__23;
#line 283
c_rt_lib0move(&___nl__im__28, hash0get_value(___nl__im__0, ___nl__im__6));
#line 283
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(685)));
#line 283
___nl__bool__26 = c_rt_lib0check_true_native(___nl__im__29);
#line 283
c_rt_lib0clear(&___nl__im__28);
#line 283
c_rt_lib0clear(&___nl__im__29);
#line 283
___nl__bool__27 = !___nl__bool__26;
#line 283
if(___nl__bool__27){ goto label_16;}
#line 283
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(687));
#line 283
label_16:
;
#line 283
//clear ___nl__bool__27;
#line 283
___nl__bool__26 = !___nl__bool__26;
#line 283
if(___nl__bool__26){ goto label_15;}
#line 284
c_rt_lib0move(&___nl__im__30, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 284
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__30));
#line 284
c_rt_lib0clear(&___nl__im__30);
#line 285
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__4));
#line 286
c_rt_lib0clear(&___nl__im__0);
#line 286
c_rt_lib0clear(&___nl__im__4);
#line 286
c_rt_lib0clear(&___nl__im__6);
#line 286
c_rt_lib0clear(&___nl__im__7);
#line 286
//clear ___nl__bool__8;
#line 286
c_rt_lib0clear(&___nl__im__9);
#line 286
c_rt_lib0clear(&___nl__im__10);
#line 286
c_rt_lib0clear(&___nl__im__11);
#line 286
c_rt_lib0clear(&___nl__im__12);
#line 286
c_rt_lib0clear(&___nl__im__13);
#line 286
c_rt_lib0clear(&___nl__im__14);
#line 286
c_rt_lib0clear(&___nl__im__15);
#line 286
c_rt_lib0clear(&___nl__im__16);
#line 286
c_rt_lib0clear(&___nl__im__22);
#line 286
//clear ___nl__bool__26;
#line 286
return NULL;
#line 287
goto label_14;
#line 287
label_15:
;
#line 287
label_14:
;
#line 287
//clear ___nl__bool__26;
#line 288
c_rt_lib0move(&___nl__im__32, hash0get_value(___nl__im__0, ___nl__im__6));
#line 288
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(685)));
#line 288
___nl__bool__31 = c_rt_lib0check_true_native(___nl__im__33);
#line 288
c_rt_lib0clear(&___nl__im__32);
#line 288
c_rt_lib0clear(&___nl__im__33);
#line 288
___nl__bool__31 = !___nl__bool__31;
#line 288
___nl__bool__31 = !___nl__bool__31;
#line 288
if(___nl__bool__31){ goto label_18;}
#line 289
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(452)));
#line 290
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(452), ___nl__im__6));
#line 291
goto label_17;
#line 291
label_18:
;
#line 291
label_17:
;
#line 291
//clear ___nl__bool__31;
#line 292
c_rt_lib0move(&___nl__im__34, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__22));
#line 292
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__6, ___nl__im__34));
#line 292
c_rt_lib0clear(&___nl__im__34);
#line 294
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(688));
#line 294
if(___nl__bool__35){ goto label_21;}
#line 294
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(452));
#line 294
label_21:
;
#line 294
//clear ___nl__bool__36;
#line 294
___nl__bool__35 = !___nl__bool__35;
#line 294
if(___nl__bool__35){ goto label_20;}
#line 295
c_rt_lib0move(&___nl__im__38, hash0get_value(___nl__im__0, ___nl__im__6));
#line 295
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(683)));
#line 295
c_rt_lib0clear(&___nl__im__38);
#line 295
___nl__int__40 = 0;
#line 295
___nl__int__41 = 1;
#line 295
___nl__int__42 = c_rt_lib0array_len(___nl__im__37);
#line 295
label_24:
;
#line 295
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 295
___nl__bool__43 = ___nl__int__44;
#line 295
if(___nl__bool__43){ goto label_22;}
#line 295
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__37, ___nl__int__40));
#line 295
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 296
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(451), ___nl__im__39));
#line 296
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__46, ___ref___bool__5));
#line 296
c_rt_lib0clear(&___nl__im__46);
#line 296
c_rt_lib0clear(&___nl__im__39);
#line 296
label_23:
;
#line 297
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 297
goto label_24;
#line 297
label_22:
;
#line 299
c_rt_lib0move(&___nl__im__48, hash0get_value(___nl__im__0, ___nl__im__6));
#line 299
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(684)));
#line 299
c_rt_lib0clear(&___nl__im__48);
#line 299
___nl__int__50 = 0;
#line 299
___nl__int__51 = 1;
#line 299
___nl__int__52 = c_rt_lib0array_len(___nl__im__47);
#line 299
label_27:
;
#line 299
___nl__int__54 = ___nl__int__50 >= ___nl__int__52;
#line 299
___nl__bool__53 = ___nl__int__54;
#line 299
if(___nl__bool__53){ goto label_25;}
#line 299
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__47, ___nl__int__50));
#line 299
c_rt_lib0copy(&___nl__im__49, ___nl__im__55);
#line 300
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(452), ___nl__im__49));
#line 300
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__56, ___ref___bool__5));
#line 300
c_rt_lib0clear(&___nl__im__56);
#line 300
c_rt_lib0clear(&___nl__im__49);
#line 300
label_26:
;
#line 301
___nl__int__50 = ___nl__int__50 + ___nl__int__51;
#line 301
goto label_27;
#line 301
label_25:
;
#line 302
goto label_19;
#line 302
label_20:
;
#line 302
label_19:
;
#line 302
//clear ___nl__bool__35;
#line 302
c_rt_lib0clear(&___nl__im__37);
#line 302
c_rt_lib0clear(&___nl__im__39);
#line 302
//clear ___nl__int__40;
#line 302
//clear ___nl__int__41;
#line 302
//clear ___nl__int__42;
#line 302
//clear ___nl__bool__43;
#line 302
//clear ___nl__int__44;
#line 302
c_rt_lib0clear(&___nl__im__45);
#line 302
c_rt_lib0clear(&___nl__im__47);
#line 302
c_rt_lib0clear(&___nl__im__49);
#line 302
//clear ___nl__int__50;
#line 302
//clear ___nl__int__51;
#line 302
//clear ___nl__int__52;
#line 302
//clear ___nl__bool__53;
#line 302
//clear ___nl__int__54;
#line 302
c_rt_lib0clear(&___nl__im__55);
#line 304
c_rt_lib0move(&___nl__im__57, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 304
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__57));
#line 304
c_rt_lib0clear(&___nl__im__57);
#line 305
c_rt_lib0move(&___nl__im__59, generator_c_struct_dependence_sort_priv0split_type(___nl__im__7, ___nl__im__16));
#line 305
c_rt_lib0move(&___nl__im__58, generator_c_struct_dependence_sort_priv0type_to_var(___nl__im__6, ___nl__im__59));
#line 305
c_rt_lib0clear(&___nl__im__59);
#line 305
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__58));
#line 305
c_rt_lib0clear(&___nl__im__58);
#line 306
c_rt_lib0delete(hash0delete(___ref___im__2, ___nl__im__6));
#line 306
c_rt_lib0clear(&___nl__im__0);
#line 306
c_rt_lib0clear(&___nl__im__4);
#line 306
c_rt_lib0clear(&___nl__im__6);
#line 306
c_rt_lib0clear(&___nl__im__7);
#line 306
//clear ___nl__bool__8;
#line 306
c_rt_lib0clear(&___nl__im__9);
#line 306
c_rt_lib0clear(&___nl__im__10);
#line 306
c_rt_lib0clear(&___nl__im__11);
#line 306
c_rt_lib0clear(&___nl__im__12);
#line 306
c_rt_lib0clear(&___nl__im__13);
#line 306
c_rt_lib0clear(&___nl__im__14);
#line 306
c_rt_lib0clear(&___nl__im__15);
#line 306
c_rt_lib0clear(&___nl__im__16);
#line 306
c_rt_lib0clear(&___nl__im__22);
#line 306
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
#line 311
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 312
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 313
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 314
___nl__bool__4 = false;
#line 315
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 315
label_3:
;
#line 315
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 315
if(___nl__bool__6){ goto label_1;}
#line 315
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 315
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 316
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(451), ___nl__im__5));
#line 316
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__9, &___nl__bool__4));
#line 316
c_rt_lib0clear(&___nl__im__9);
#line 316
label_2:
;
#line 317
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 317
goto label_3;
#line 317
label_1:
;
#line 318
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__0));
#line 318
label_6:
;
#line 318
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 318
if(___nl__bool__11){ goto label_4;}
#line 318
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 318
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__10));
#line 319
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(450), ___nl__im__10));
#line 319
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__14, &___nl__bool__4));
#line 319
c_rt_lib0clear(&___nl__im__14);
#line 319
label_5:
;
#line 320
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 320
goto label_6;
#line 320
label_4:
;
#line 321
___nl__bool__15 = ___nl__bool__4;
#line 321
___nl__bool__15 = !___nl__bool__15;
#line 321
if(___nl__bool__15){ goto label_8;}
#line 322
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(448)));
#line 322
c_rt_lib0clear(&___nl__im__0);
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
c_rt_lib0clear(&___nl__im__2);
#line 322
c_rt_lib0clear(&___nl__im__3);
#line 322
//clear ___nl__bool__4;
#line 322
c_rt_lib0clear(&___nl__im__5);
#line 322
//clear ___nl__bool__6;
#line 322
c_rt_lib0clear(&___nl__im__7);
#line 322
c_rt_lib0clear(&___nl__im__8);
#line 322
c_rt_lib0clear(&___nl__im__10);
#line 322
//clear ___nl__bool__11;
#line 322
c_rt_lib0clear(&___nl__im__12);
#line 322
c_rt_lib0clear(&___nl__im__13);
#line 322
//clear ___nl__bool__15;
#line 322
return ___nl__im__16;
#line 323
goto label_7;
#line 323
label_8:
;
#line 323
label_7:
;
#line 323
//clear ___nl__bool__15;
#line 323
c_rt_lib0clear(&___nl__im__16);
#line 324
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 325
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 326
c_rt_lib0move(&___nl__im__22, c_rt_lib0init_iter(___nl__im__0));
#line 326
label_11:
;
#line 326
___nl__bool__20 = c_rt_lib0is_end_hash(___nl__im__22);
#line 326
if(___nl__bool__20){ goto label_9;}
#line 326
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_key_iter(___nl__im__22));
#line 326
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__19));
#line 327
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(204)));
#line 327
c_rt_lib0delete(hash0set_value(&___nl__im__18, ___nl__im__19, ___nl__im__23));
#line 327
c_rt_lib0clear(&___nl__im__23);
#line 327
label_10:
;
#line 328
c_rt_lib0move(&___nl__im__22, c_rt_lib0next_iter(___nl__im__22));
#line 328
goto label_11;
#line 328
label_9:
;
#line 329
___nl__int__25 = 0;
#line 329
___nl__int__26 = 1;
#line 329
___nl__int__27 = c_rt_lib0array_len(___nl__im__1);
#line 329
label_14:
;
#line 329
___nl__int__29 = ___nl__int__25 >= ___nl__int__27;
#line 329
___nl__bool__28 = ___nl__int__29;
#line 329
if(___nl__bool__28){ goto label_12;}
#line 329
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__1, ___nl__int__25));
#line 329
c_rt_lib0copy(&___nl__im__24, ___nl__im__30);
#line 330
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(452));
#line 330
if(___nl__bool__31){ goto label_16;}
#line 332
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(451));
#line 332
if(___nl__bool__31){ goto label_17;}
#line 334
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(450));
#line 334
if(___nl__bool__31){ goto label_18;}
#line 334
c_rt_lib0move(&___nl__im__32,___get_global_const(16));
#line 334
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(2, ___nl__im__32, ___nl__im__24));
#line 334
nl_die_arg(___nl__im__32);
#line 330
label_16:
;
#line 330
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(452)));
#line 330
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 331
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__18, ___nl__im__33));
#line 331
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(452)));
#line 331
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(166), ___nl__im__33, ___get_global_const(453), ___nl__im__36, ___get_global_const(449), ___nl__im__37));
#line 331
c_rt_lib0clear(&___nl__im__36);
#line 331
c_rt_lib0clear(&___nl__im__37);
#line 331
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__35));
#line 331
c_rt_lib0clear(&___nl__im__35);
#line 332
goto label_15;
#line 332
label_17:
;
#line 332
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(451)));
#line 332
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 333
c_rt_lib0move(&___nl__im__41, hash0get_value(___nl__im__18, ___nl__im__38));
#line 333
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(451)));
#line 333
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(3, ___get_global_const(166), ___nl__im__38, ___get_global_const(453), ___nl__im__41, ___get_global_const(449), ___nl__im__42));
#line 333
c_rt_lib0clear(&___nl__im__41);
#line 333
c_rt_lib0clear(&___nl__im__42);
#line 333
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__40));
#line 333
c_rt_lib0clear(&___nl__im__40);
#line 334
goto label_15;
#line 334
label_18:
;
#line 334
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(450)));
#line 334
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 335
c_rt_lib0move(&___nl__im__46, hash0get_value(___nl__im__18, ___nl__im__43));
#line 335
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(450)));
#line 335
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(3, ___get_global_const(166), ___nl__im__43, ___get_global_const(453), ___nl__im__46, ___get_global_const(449), ___nl__im__47));
#line 335
c_rt_lib0clear(&___nl__im__46);
#line 335
c_rt_lib0clear(&___nl__im__47);
#line 335
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__45));
#line 335
c_rt_lib0clear(&___nl__im__45);
#line 336
goto label_15;
#line 336
label_15:
;
#line 336
c_rt_lib0clear(&___nl__im__24);
#line 336
label_13:
;
#line 337
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 337
goto label_14;
#line 337
label_12:
;
#line 338
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_const(447), ___nl__im__17));
#line 338
c_rt_lib0clear(&___nl__im__0);
#line 338
c_rt_lib0clear(&___nl__im__1);
#line 338
c_rt_lib0clear(&___nl__im__2);
#line 338
c_rt_lib0clear(&___nl__im__3);
#line 338
//clear ___nl__bool__4;
#line 338
c_rt_lib0clear(&___nl__im__5);
#line 338
//clear ___nl__bool__6;
#line 338
c_rt_lib0clear(&___nl__im__7);
#line 338
c_rt_lib0clear(&___nl__im__8);
#line 338
c_rt_lib0clear(&___nl__im__10);
#line 338
//clear ___nl__bool__11;
#line 338
c_rt_lib0clear(&___nl__im__12);
#line 338
c_rt_lib0clear(&___nl__im__13);
#line 338
c_rt_lib0clear(&___nl__im__17);
#line 338
c_rt_lib0clear(&___nl__im__18);
#line 338
c_rt_lib0clear(&___nl__im__19);
#line 338
//clear ___nl__bool__20;
#line 338
c_rt_lib0clear(&___nl__im__21);
#line 338
c_rt_lib0clear(&___nl__im__22);
#line 338
c_rt_lib0clear(&___nl__im__24);
#line 338
//clear ___nl__int__25;
#line 338
//clear ___nl__int__26;
#line 338
//clear ___nl__int__27;
#line 338
//clear ___nl__bool__28;
#line 338
//clear ___nl__int__29;
#line 338
c_rt_lib0clear(&___nl__im__30);
#line 338
//clear ___nl__bool__31;
#line 338
c_rt_lib0clear(&___nl__im__32);
#line 338
c_rt_lib0clear(&___nl__im__33);
#line 338
c_rt_lib0clear(&___nl__im__34);
#line 338
c_rt_lib0clear(&___nl__im__38);
#line 338
c_rt_lib0clear(&___nl__im__39);
#line 338
c_rt_lib0clear(&___nl__im__43);
#line 338
c_rt_lib0clear(&___nl__im__44);
#line 338
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
#line 342
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 342
if(___nl__bool__2){ goto label_5;}
#line 342
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 342
label_5:
;
#line 342
//clear ___nl__bool__5;
#line 342
if(___nl__bool__2){ goto label_4;}
#line 342
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 342
label_4:
;
#line 342
//clear ___nl__bool__4;
#line 342
if(___nl__bool__2){ goto label_3;}
#line 342
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 342
label_3:
;
#line 342
//clear ___nl__bool__3;
#line 342
___nl__bool__2 = !___nl__bool__2;
#line 342
if(___nl__bool__2){ goto label_2;}
#line 343
c_rt_lib0move(&___nl__im__6, anon_naming0get_anon_name(___nl__im__0));
#line 344
___nl__bool__7 = hash0has_key((*___ref___im__1), ___nl__im__6);
#line 344
___nl__bool__7 = !___nl__bool__7;
#line 344
if(___nl__bool__7){ goto label_7;}
#line 345
c_rt_lib0clear(&___nl__im__0);
#line 345
//clear ___nl__bool__2;
#line 345
c_rt_lib0clear(&___nl__im__6);
#line 345
//clear ___nl__bool__7;
#line 345
return NULL;
#line 346
goto label_6;
#line 346
label_7:
;
#line 346
label_6:
;
#line 346
//clear ___nl__bool__7;
#line 347
c_rt_lib0delete(hash0set_value(___ref___im__1, ___nl__im__6, ___nl__im__0));
#line 348
goto label_1;
#line 348
label_2:
;
#line 348
label_1:
;
#line 348
//clear ___nl__bool__2;
#line 348
c_rt_lib0clear(&___nl__im__6);
#line 348
c_rt_lib0clear(&___nl__im__0);
#line 348
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
#line 352
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 352
___nl__bool__2 = !___nl__bool__2;
#line 352
if(___nl__bool__2){ goto label_2;}
#line 353
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 353
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__3));
#line 353
label_5:
;
#line 353
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 353
if(___nl__bool__5){ goto label_3;}
#line 353
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 353
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__3, ___nl__im__4));
#line 354
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__6, ___ref___im__1));
#line 354
label_4:
;
#line 355
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 355
goto label_5;
#line 355
label_3:
;
#line 356
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 357
goto label_1;
#line 357
label_2:
;
#line 357
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 357
___nl__bool__2 = !___nl__bool__2;
#line 357
if(___nl__bool__2){ goto label_6;}
#line 358
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 358
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__8, ___ref___im__1));
#line 358
c_rt_lib0clear(&___nl__im__8);
#line 359
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 360
goto label_1;
#line 360
label_6:
;
#line 360
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 360
___nl__bool__2 = !___nl__bool__2;
#line 360
if(___nl__bool__2){ goto label_7;}
#line 361
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 361
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__9));
#line 361
label_10:
;
#line 361
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 361
if(___nl__bool__11){ goto label_8;}
#line 361
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 361
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__10));
#line 362
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(28));
#line 362
if(___nl__bool__14){ goto label_12;}
#line 364
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(29));
#line 364
if(___nl__bool__14){ goto label_13;}
#line 364
c_rt_lib0move(&___nl__im__15,___get_global_const(16));
#line 364
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 364
nl_die_arg(___nl__im__15);
#line 362
label_12:
;
#line 362
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(28)));
#line 362
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 363
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__16, ___ref___im__1));
#line 364
goto label_11;
#line 364
label_13:
;
#line 365
goto label_11;
#line 365
label_11:
;
#line 365
//clear ___nl__bool__14;
#line 365
c_rt_lib0clear(&___nl__im__15);
#line 365
c_rt_lib0clear(&___nl__im__16);
#line 365
c_rt_lib0clear(&___nl__im__17);
#line 365
label_9:
;
#line 366
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 366
goto label_10;
#line 366
label_8:
;
#line 367
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 368
goto label_1;
#line 368
label_7:
;
#line 368
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 368
___nl__bool__2 = !___nl__bool__2;
#line 368
if(___nl__bool__2){ goto label_14;}
#line 369
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 369
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, ___ref___im__1));
#line 369
c_rt_lib0clear(&___nl__im__18);
#line 370
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 371
goto label_1;
#line 371
label_14:
;
#line 371
label_1:
;
#line 371
//clear ___nl__bool__2;
#line 371
c_rt_lib0clear(&___nl__im__3);
#line 371
c_rt_lib0clear(&___nl__im__4);
#line 371
//clear ___nl__bool__5;
#line 371
c_rt_lib0clear(&___nl__im__6);
#line 371
c_rt_lib0clear(&___nl__im__7);
#line 371
c_rt_lib0clear(&___nl__im__9);
#line 371
c_rt_lib0clear(&___nl__im__10);
#line 371
//clear ___nl__bool__11;
#line 371
c_rt_lib0clear(&___nl__im__12);
#line 371
c_rt_lib0clear(&___nl__im__13);
#line 371
//clear ___nl__bool__14;
#line 371
c_rt_lib0clear(&___nl__im__15);
#line 371
c_rt_lib0clear(&___nl__im__16);
#line 371
c_rt_lib0clear(&___nl__im__17);
#line 371
c_rt_lib0clear(&___nl__im__0);
#line 371
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
#line 375
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 376
___nl__int__3 = 0;
#line 376
___nl__int__4 = 1;
#line 376
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 376
label_3:
;
#line 376
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 376
___nl__bool__6 = ___nl__int__7;
#line 376
if(___nl__bool__6){ goto label_1;}
#line 376
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 376
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 377
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(386)));
#line 377
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__9, &___nl__im__1));
#line 377
c_rt_lib0clear(&___nl__im__9);
#line 378
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(213)));
#line 378
___nl__int__12 = 0;
#line 378
___nl__int__13 = 1;
#line 378
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 378
label_6:
;
#line 378
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 378
___nl__bool__15 = ___nl__int__16;
#line 378
if(___nl__bool__15){ goto label_4;}
#line 378
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 378
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 379
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(204)));
#line 379
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, &___nl__im__1));
#line 379
c_rt_lib0clear(&___nl__im__18);
#line 379
c_rt_lib0clear(&___nl__im__11);
#line 379
label_5:
;
#line 380
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 380
goto label_6;
#line 380
label_4:
;
#line 381
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(214)));
#line 381
___nl__int__21 = 0;
#line 381
___nl__int__22 = 1;
#line 381
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 381
label_9:
;
#line 381
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 381
___nl__bool__24 = ___nl__int__25;
#line 381
if(___nl__bool__24){ goto label_7;}
#line 381
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 381
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 382
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 382
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(512));
#line 382
c_rt_lib0clear(&___nl__im__28);
#line 382
___nl__bool__27 = !___nl__bool__27;
#line 382
if(___nl__bool__27){ goto label_11;}
#line 383
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 383
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 383
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(512)));
#line 383
c_rt_lib0clear(&___nl__im__30);
#line 383
c_rt_lib0clear(&___nl__im__31);
#line 383
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__29, &___nl__im__1));
#line 383
c_rt_lib0clear(&___nl__im__29);
#line 384
goto label_10;
#line 384
label_11:
;
#line 384
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 384
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(128));
#line 384
c_rt_lib0clear(&___nl__im__32);
#line 384
___nl__bool__27 = !___nl__bool__27;
#line 384
if(___nl__bool__27){ goto label_12;}
#line 385
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 385
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 385
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(128)));
#line 385
c_rt_lib0clear(&___nl__im__34);
#line 385
c_rt_lib0clear(&___nl__im__35);
#line 385
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__33, &___nl__im__1));
#line 385
c_rt_lib0clear(&___nl__im__33);
#line 386
goto label_10;
#line 386
label_12:
;
#line 386
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 386
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__36, ___get_global_const(516));
#line 386
c_rt_lib0clear(&___nl__im__36);
#line 386
___nl__bool__27 = !___nl__bool__27;
#line 386
if(___nl__bool__27){ goto label_13;}
#line 387
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 387
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 387
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__39, ___get_global_const(516)));
#line 387
c_rt_lib0clear(&___nl__im__38);
#line 387
c_rt_lib0clear(&___nl__im__39);
#line 387
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__37, &___nl__im__1));
#line 387
c_rt_lib0clear(&___nl__im__37);
#line 388
goto label_10;
#line 388
label_13:
;
#line 388
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 388
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__40, ___get_global_const(129));
#line 388
c_rt_lib0clear(&___nl__im__40);
#line 388
___nl__bool__27 = !___nl__bool__27;
#line 388
if(___nl__bool__27){ goto label_14;}
#line 389
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 389
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(204)));
#line 389
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__43, ___get_global_const(129)));
#line 389
c_rt_lib0clear(&___nl__im__42);
#line 389
c_rt_lib0clear(&___nl__im__43);
#line 389
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__41, &___nl__im__1));
#line 389
c_rt_lib0clear(&___nl__im__41);
#line 390
goto label_10;
#line 390
label_14:
;
#line 390
label_10:
;
#line 390
//clear ___nl__bool__27;
#line 390
c_rt_lib0clear(&___nl__im__20);
#line 390
label_8:
;
#line 391
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 391
goto label_9;
#line 391
label_7:
;
#line 392
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(165)));
#line 392
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_const(78));
#line 392
if(___nl__bool__45){ goto label_16;}
#line 393
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_const(77));
#line 393
if(___nl__bool__45){ goto label_17;}
#line 393
c_rt_lib0move(&___nl__im__46,___get_global_const(16));
#line 393
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__44));
#line 393
nl_die_arg(___nl__im__46);
#line 392
label_16:
;
#line 393
goto label_15;
#line 393
label_17:
;
#line 393
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__44, ___get_global_const(77)));
#line 393
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 394
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__47, &___nl__im__1));
#line 395
goto label_15;
#line 395
label_15:
;
#line 395
c_rt_lib0clear(&___nl__im__2);
#line 395
label_2:
;
#line 396
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 396
goto label_3;
#line 396
label_1:
;
#line 397
c_rt_lib0clear(&___nl__im__0);
#line 397
c_rt_lib0clear(&___nl__im__2);
#line 397
//clear ___nl__int__3;
#line 397
//clear ___nl__int__4;
#line 397
//clear ___nl__int__5;
#line 397
//clear ___nl__bool__6;
#line 397
//clear ___nl__int__7;
#line 397
c_rt_lib0clear(&___nl__im__8);
#line 397
c_rt_lib0clear(&___nl__im__10);
#line 397
c_rt_lib0clear(&___nl__im__11);
#line 397
//clear ___nl__int__12;
#line 397
//clear ___nl__int__13;
#line 397
//clear ___nl__int__14;
#line 397
//clear ___nl__bool__15;
#line 397
//clear ___nl__int__16;
#line 397
c_rt_lib0clear(&___nl__im__17);
#line 397
c_rt_lib0clear(&___nl__im__19);
#line 397
c_rt_lib0clear(&___nl__im__20);
#line 397
//clear ___nl__int__21;
#line 397
//clear ___nl__int__22;
#line 397
//clear ___nl__int__23;
#line 397
//clear ___nl__bool__24;
#line 397
//clear ___nl__int__25;
#line 397
c_rt_lib0clear(&___nl__im__26);
#line 397
c_rt_lib0clear(&___nl__im__44);
#line 397
//clear ___nl__bool__45;
#line 397
c_rt_lib0clear(&___nl__im__46);
#line 397
c_rt_lib0clear(&___nl__im__47);
#line 397
c_rt_lib0clear(&___nl__im__48);
#line 397
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
#line 401
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 402
___nl__int__3 = 0;
#line 402
___nl__int__4 = 1;
#line 402
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 402
label_3:
;
#line 402
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 402
___nl__bool__6 = ___nl__int__7;
#line 402
if(___nl__bool__6){ goto label_1;}
#line 402
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 402
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 403
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(208)));
#line 403
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(427));
#line 403
if(___nl__bool__10){ goto label_5;}
#line 404
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(209));
#line 404
if(___nl__bool__10){ goto label_6;}
#line 404
c_rt_lib0move(&___nl__im__11,___get_global_const(16));
#line 404
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 404
nl_die_arg(___nl__im__11);
#line 403
label_5:
;
#line 404
goto label_4;
#line 404
label_6:
;
#line 405
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(165)));
#line 405
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(77));
#line 405
if(___nl__bool__13){ goto label_8;}
#line 407
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(78));
#line 407
if(___nl__bool__13){ goto label_9;}
#line 407
c_rt_lib0move(&___nl__im__14,___get_global_const(16));
#line 407
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__12));
#line 407
nl_die_arg(___nl__im__14);
#line 405
label_8:
;
#line 405
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(77)));
#line 405
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 406
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(166)));
#line 406
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__17, ___nl__im__15));
#line 406
c_rt_lib0clear(&___nl__im__17);
#line 407
goto label_7;
#line 407
label_9:
;
#line 408
goto label_7;
#line 408
label_7:
;
#line 409
goto label_4;
#line 409
label_4:
;
#line 409
c_rt_lib0clear(&___nl__im__2);
#line 409
label_2:
;
#line 410
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 410
goto label_3;
#line 410
label_1:
;
#line 411
c_rt_lib0clear(&___nl__im__0);
#line 411
c_rt_lib0clear(&___nl__im__2);
#line 411
//clear ___nl__int__3;
#line 411
//clear ___nl__int__4;
#line 411
//clear ___nl__int__5;
#line 411
//clear ___nl__bool__6;
#line 411
//clear ___nl__int__7;
#line 411
c_rt_lib0clear(&___nl__im__8);
#line 411
c_rt_lib0clear(&___nl__im__9);
#line 411
//clear ___nl__bool__10;
#line 411
c_rt_lib0clear(&___nl__im__11);
#line 411
c_rt_lib0clear(&___nl__im__12);
#line 411
//clear ___nl__bool__13;
#line 411
c_rt_lib0clear(&___nl__im__14);
#line 411
c_rt_lib0clear(&___nl__im__15);
#line 411
c_rt_lib0clear(&___nl__im__16);
#line 411
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
#line 416
c_rt_lib0move(&___nl__im__2, generator_c_struct_dependence_sort_priv0get_anons(___nl__im__0));
#line 417
c_rt_lib0move(&___nl__im__3, generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(___nl__im__0));
#line 417
c_rt_lib0delete(hash0add_all(&___nl__im__2, ___nl__im__3));
#line 417
c_rt_lib0clear(&___nl__im__3);
#line 418
c_rt_lib0move(&___nl__im__4, generator_c_struct_dependence_sort_priv0in_funs_to_graph(___nl__im__2, ___nl__im__1));
#line 419
c_rt_lib0move(&___nl__im__5, generator_c_struct_dependence_sort_priv0sort_graph(___nl__im__4));
#line 419
c_rt_lib0clear(&___nl__im__0);
#line 419
c_rt_lib0clear(&___nl__im__1);
#line 419
c_rt_lib0clear(&___nl__im__2);
#line 419
c_rt_lib0clear(&___nl__im__4);
#line 419
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
