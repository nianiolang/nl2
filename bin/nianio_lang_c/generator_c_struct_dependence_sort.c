
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
ImmT  generator_c_struct_dependence_sort_priv0get_required_types_list(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,generator_c_struct_dependence_sort0graph_node0type* ___ref___im__2,ImmT  ___nl__im__3);
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
ImmT generator_c_struct_dependence_sort0result_t(){
generator_c_struct_dependence_sort_priv0__const__init();
return generator_c_struct_dependence_sort_priv0__const__sing(0);
}
ImmT generator_c_struct_dependence_sort0result_t0cal() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c_struct_dependence_sort0result_element0ptr, ___get_global_string_const(713), ___get_global_string_const(714)));
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 12
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 12
c_rt_lib0clear(&___nl__im__3);
#line 13
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 13
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(487), ___nl__im__2, ___get_global_string_const(488), ___nl__im__4));
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort0result_element0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0result_element");
return generator_c_struct_dependence_sort0result_element();
}
ImmT generator_c_struct_dependence_sort0result_element(){
generator_c_struct_dependence_sort_priv0__const__init();
return generator_c_struct_dependence_sort_priv0__const__sing(1);
}
ImmT generator_c_struct_dependence_sort0result_element0cal() {
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 20
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 22
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 23
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 24
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(490), ___nl__im__6, ___get_global_string_const(491), ___nl__im__7, ___get_global_string_const(492), ___nl__im__8));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__2, ___get_global_string_const(493), ___nl__im__3, ___get_global_string_const(489), ___nl__im__4));
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort0graph_node0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0graph_node");
return generator_c_struct_dependence_sort0graph_node();
}
ImmT generator_c_struct_dependence_sort0graph_node(){
generator_c_struct_dependence_sort_priv0__const__init();
return generator_c_struct_dependence_sort_priv0__const__sing(2);
}
ImmT generator_c_struct_dependence_sort0graph_node0cal() {
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 34
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 34
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(715), ___nl__im__2, ___get_global_string_const(716), ___nl__im__4, ___get_global_string_const(717), ___nl__im__6, ___get_global_string_const(204), ___nl__im__7));
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort0graph0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0graph");
return generator_c_struct_dependence_sort0graph();
}
ImmT generator_c_struct_dependence_sort0graph(){
generator_c_struct_dependence_sort_priv0__const__init();
return generator_c_struct_dependence_sort_priv0__const__sing(3);
}
ImmT generator_c_struct_dependence_sort0graph0cal() {
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(generator_c_struct_dependence_sort0graph_node0ptr, ___get_global_string_const(713), ___get_global_string_const(718)));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__1));
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort0sorted_element0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0sorted_element");
return generator_c_struct_dependence_sort0sorted_element();
}
ImmT generator_c_struct_dependence_sort0sorted_element(){
generator_c_struct_dependence_sort_priv0__const__init();
return generator_c_struct_dependence_sort_priv0__const__sing(4);
}
ImmT generator_c_struct_dependence_sort0sorted_element0cal() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(490), ___nl__im__2, ___get_global_string_const(491), ___nl__im__3, ___get_global_string_const(492), ___nl__im__4));
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort0decl_def_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c_struct_dependence_sort0decl_def_type");
return generator_c_struct_dependence_sort0decl_def_type();
}
ImmT generator_c_struct_dependence_sort0decl_def_type(){
generator_c_struct_dependence_sort_priv0__const__init();
return generator_c_struct_dependence_sort_priv0__const__sing(5);
}
ImmT generator_c_struct_dependence_sort0decl_def_type0cal() {
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(719), ___nl__im__2, ___get_global_string_const(720), ___nl__im__3, ___get_global_string_const(492), ___nl__im__4, ___get_global_string_const(71), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(34));
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort_priv0get_fun_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
#line 64
c_rt_lib0move(&___nl__im__3,___get_global_string_const(34));
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort_priv0get_name(tct0meta_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 68
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 68
___nl__bool__1 = !___nl__bool__1;
#line 68
if(___nl__bool__1){ goto label_10;}
#line 69
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
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
goto label_10;
#line 70
label_10:
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
return NULL;

}

ImmT  generator_c_struct_dependence_sort_priv0get_required_types_list(ImmT  ___nl__im__0,tct0meta_type0type ___nl__im__1,generator_c_struct_dependence_sort0graph_node0type* ___ref___im__2,ImmT  ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__3);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__string__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__string__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__string__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__string__71 = NULL;
#line 76
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(0));
#line 76
if(___nl__bool__4){ goto label_33;}
#line 77
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 77
if(___nl__bool__4){ goto label_35;}
#line 78
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 78
if(___nl__bool__4){ goto label_39;}
#line 81
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 81
if(___nl__bool__4){ goto label_63;}
#line 82
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 82
if(___nl__bool__4){ goto label_67;}
#line 85
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 85
if(___nl__bool__4){ goto label_91;}
#line 86
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 86
if(___nl__bool__4){ goto label_95;}
#line 91
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 91
if(___nl__bool__4){ goto label_128;}
#line 95
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 95
if(___nl__bool__4){ goto label_157;}
#line 96
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 96
if(___nl__bool__4){ goto label_159;}
#line 97
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 97
if(___nl__bool__4){ goto label_161;}
#line 98
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 98
if(___nl__bool__4){ goto label_163;}
#line 99
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 99
if(___nl__bool__4){ goto label_165;}
#line 100
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 100
if(___nl__bool__4){ goto label_169;}
#line 112
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 112
if(___nl__bool__4){ goto label_252;}
#line 112
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 112
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__1));
#line 112
nl_die_arg(___nl__im__5);
#line 76
label_33:
;
#line 77
goto label_254;
#line 77
label_35:
;
#line 77
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 77
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 78
goto label_254;
#line 78
label_39:
;
#line 78
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(2)));
#line 78
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 79
c_rt_lib0move(&___nl__im__11, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 79
___nl__bool__10 = c_rt_lib0ne(___nl__im__0, ___nl__im__11);
#line 79
c_rt_lib0clear(&___nl__im__11);
#line 79
___nl__bool__10 = !___nl__bool__10;
#line 79
if(___nl__bool__10){ goto label_57;}
#line 79
c_rt_lib0move(&___nl__im__12,___get_global_string_const(716));
#line 79
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__12));
#line 79
c_rt_lib0move(&___nl__im__13, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 79
c_rt_lib0delete(array0push(&___nl__im__12, ___nl__im__13));
#line 79
c_rt_lib0move(&___nl__string__14,___get_global_string_const(716));
#line 79
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__14, ___nl__im__12));
#line 79
c_rt_lib0clear(&___nl__im__12);
#line 79
c_rt_lib0clear(&___nl__im__13);
#line 79
c_rt_lib0clear(&___nl__string__14);
#line 79
goto label_57;
#line 79
label_57:
;
#line 79
//clear ___nl__bool__10;
#line 80
c_rt_lib0move(&___nl__im__15, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 80
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__15, ___nl__im__8, ___ref___im__2, ___nl__im__3));
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 81
goto label_254;
#line 81
label_63:
;
#line 81
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 81
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 82
goto label_254;
#line 82
label_67:
;
#line 82
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(4)));
#line 82
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 83
c_rt_lib0move(&___nl__im__21, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 83
___nl__bool__20 = c_rt_lib0ne(___nl__im__0, ___nl__im__21);
#line 83
c_rt_lib0clear(&___nl__im__21);
#line 83
___nl__bool__20 = !___nl__bool__20;
#line 83
if(___nl__bool__20){ goto label_85;}
#line 83
c_rt_lib0move(&___nl__im__22,___get_global_string_const(716));
#line 83
c_rt_lib0move(&___nl__im__22, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__22));
#line 83
c_rt_lib0move(&___nl__im__23, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 83
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__23));
#line 83
c_rt_lib0move(&___nl__string__24,___get_global_string_const(716));
#line 83
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__24, ___nl__im__22));
#line 83
c_rt_lib0clear(&___nl__im__22);
#line 83
c_rt_lib0clear(&___nl__im__23);
#line 83
c_rt_lib0clear(&___nl__string__24);
#line 83
goto label_85;
#line 83
label_85:
;
#line 83
//clear ___nl__bool__20;
#line 84
c_rt_lib0move(&___nl__im__25, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 84
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__25, ___nl__im__18, ___ref___im__2, ___nl__im__3));
#line 84
c_rt_lib0clear(&___nl__im__25);
#line 85
goto label_254;
#line 85
label_91:
;
#line 85
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 85
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 86
goto label_254;
#line 86
label_95:
;
#line 86
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(6)));
#line 86
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 87
c_rt_lib0move(&___nl__im__31, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 87
___nl__bool__30 = c_rt_lib0ne(___nl__im__0, ___nl__im__31);
#line 87
c_rt_lib0clear(&___nl__im__31);
#line 87
___nl__bool__30 = !___nl__bool__30;
#line 87
if(___nl__bool__30){ goto label_113;}
#line 87
c_rt_lib0move(&___nl__im__32,___get_global_string_const(716));
#line 87
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__32));
#line 87
c_rt_lib0move(&___nl__im__33, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 87
c_rt_lib0delete(array0push(&___nl__im__32, ___nl__im__33));
#line 87
c_rt_lib0move(&___nl__string__34,___get_global_string_const(716));
#line 87
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__34, ___nl__im__32));
#line 87
c_rt_lib0clear(&___nl__im__32);
#line 87
c_rt_lib0clear(&___nl__im__33);
#line 87
c_rt_lib0clear(&___nl__string__34);
#line 87
goto label_113;
#line 87
label_113:
;
#line 87
//clear ___nl__bool__30;
#line 88
c_rt_lib0move(&___nl__im__38, c_rt_lib0init_iter(___nl__im__28));
#line 88
label_116:
;
#line 88
___nl__bool__36 = c_rt_lib0is_end_hash(___nl__im__38);
#line 88
if(___nl__bool__36){ goto label_126;}
#line 88
c_rt_lib0move(&___nl__im__35, c_rt_lib0get_key_iter(___nl__im__38));
#line 88
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value(___nl__im__28, ___nl__im__35));
#line 89
c_rt_lib0move(&___nl__im__39, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 89
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__39, ___nl__im__37, ___ref___im__2, ___nl__im__3));
#line 89
c_rt_lib0clear(&___nl__im__39);
#line 90
c_rt_lib0move(&___nl__im__38, c_rt_lib0next_iter(___nl__im__38));
#line 90
goto label_116;
#line 90
label_126:
;
#line 91
goto label_254;
#line 91
label_128:
;
#line 91
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(7)));
#line 91
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 92
c_rt_lib0move(&___nl__im__43, generator_c_struct_dependence_sort_priv0get_module_name(___nl__im__40));
#line 92
___nl__bool__42 = c_rt_lib0eq(___nl__im__43, ___nl__im__3);
#line 92
c_rt_lib0clear(&___nl__im__43);
#line 92
___nl__bool__42 = !___nl__bool__42;
#line 92
if(___nl__bool__42){ goto label_154;}
#line 93
c_rt_lib0move(&___nl__im__45, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 93
___nl__bool__44 = c_rt_lib0ne(___nl__im__0, ___nl__im__45);
#line 93
c_rt_lib0clear(&___nl__im__45);
#line 93
___nl__bool__44 = !___nl__bool__44;
#line 93
if(___nl__bool__44){ goto label_151;}
#line 93
c_rt_lib0move(&___nl__im__46,___get_global_string_const(716));
#line 93
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__46));
#line 93
c_rt_lib0move(&___nl__im__47, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__40));
#line 93
c_rt_lib0delete(array0push(&___nl__im__46, ___nl__im__47));
#line 93
c_rt_lib0move(&___nl__string__48,___get_global_string_const(716));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__48, ___nl__im__46));
#line 93
c_rt_lib0clear(&___nl__im__46);
#line 93
c_rt_lib0clear(&___nl__im__47);
#line 93
c_rt_lib0clear(&___nl__string__48);
#line 93
goto label_151;
#line 93
label_151:
;
#line 93
//clear ___nl__bool__44;
#line 94
goto label_154;
#line 94
label_154:
;
#line 94
//clear ___nl__bool__42;
#line 95
goto label_254;
#line 95
label_157:
;
#line 96
goto label_254;
#line 96
label_159:
;
#line 97
goto label_254;
#line 97
label_161:
;
#line 98
goto label_254;
#line 98
label_163:
;
#line 99
goto label_254;
#line 99
label_165:
;
#line 99
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(12)));
#line 99
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 100
goto label_254;
#line 100
label_169:
;
#line 100
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 100
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 101
c_rt_lib0move(&___nl__im__54, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 101
___nl__bool__53 = c_rt_lib0ne(___nl__im__0, ___nl__im__54);
#line 101
c_rt_lib0clear(&___nl__im__54);
#line 101
___nl__bool__53 = !___nl__bool__53;
#line 101
if(___nl__bool__53){ goto label_187;}
#line 101
c_rt_lib0move(&___nl__im__55,___get_global_string_const(716));
#line 101
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__55));
#line 101
c_rt_lib0move(&___nl__im__56, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 101
c_rt_lib0delete(array0push(&___nl__im__55, ___nl__im__56));
#line 101
c_rt_lib0move(&___nl__string__57,___get_global_string_const(716));
#line 101
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__57, ___nl__im__55));
#line 101
c_rt_lib0clear(&___nl__im__55);
#line 101
c_rt_lib0clear(&___nl__im__56);
#line 101
c_rt_lib0clear(&___nl__string__57);
#line 101
goto label_187;
#line 101
label_187:
;
#line 101
//clear ___nl__bool__53;
#line 102
c_rt_lib0move(&___nl__im__61, c_rt_lib0init_iter(___nl__im__51));
#line 102
label_190:
;
#line 102
___nl__bool__59 = c_rt_lib0is_end_hash(___nl__im__61);
#line 102
if(___nl__bool__59){ goto label_250;}
#line 102
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_key_iter(___nl__im__61));
#line 102
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__51, ___nl__im__58));
#line 103
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(27));
#line 103
if(___nl__bool__62){ goto label_202;}
#line 109
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(28));
#line 109
if(___nl__bool__62){ goto label_241;}
#line 109
c_rt_lib0move(&___nl__im__63,___get_global_string_const(15));
#line 109
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__63, ___nl__im__60));
#line 109
nl_die_arg(___nl__im__63);
#line 103
label_202:
;
#line 103
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__60, ___get_global_string_const(27)));
#line 103
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 104
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(6));
#line 104
if(___nl__bool__66){ goto label_208;}
#line 104
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(2));
#line 104
label_208:
;
#line 104
if(___nl__bool__66){ goto label_211;}
#line 105
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(13));
#line 105
label_211:
;
#line 105
if(___nl__bool__66){ goto label_214;}
#line 105
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(4));
#line 105
label_214:
;
#line 105
if(___nl__bool__66){ goto label_217;}
#line 106
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(7));
#line 106
label_217:
;
#line 106
___nl__bool__66 = !___nl__bool__66;
#line 106
if(___nl__bool__66){ goto label_238;}
#line 107
c_rt_lib0move(&___nl__im__68, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 107
___nl__bool__67 = c_rt_lib0ne(___nl__im__0, ___nl__im__68);
#line 107
c_rt_lib0clear(&___nl__im__68);
#line 107
___nl__bool__67 = !___nl__bool__67;
#line 107
if(___nl__bool__67){ goto label_235;}
#line 107
c_rt_lib0move(&___nl__im__69,___get_global_string_const(715));
#line 107
c_rt_lib0move(&___nl__im__69, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__69));
#line 107
c_rt_lib0move(&___nl__im__70, generator_c_struct_dependence_sort_priv0get_name(___nl__im__64));
#line 107
c_rt_lib0delete(array0push(&___nl__im__69, ___nl__im__70));
#line 107
c_rt_lib0move(&___nl__string__71,___get_global_string_const(715));
#line 107
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__71, ___nl__im__69));
#line 107
c_rt_lib0clear(&___nl__im__69);
#line 107
c_rt_lib0clear(&___nl__im__70);
#line 107
c_rt_lib0clear(&___nl__string__71);
#line 107
goto label_235;
#line 107
label_235:
;
#line 107
//clear ___nl__bool__67;
#line 108
goto label_238;
#line 108
label_238:
;
#line 108
//clear ___nl__bool__66;
#line 109
goto label_243;
#line 109
label_241:
;
#line 110
goto label_243;
#line 110
label_243:
;
#line 110
//clear ___nl__bool__62;
#line 110
c_rt_lib0clear(&___nl__im__63);
#line 110
c_rt_lib0clear(&___nl__im__64);
#line 110
c_rt_lib0clear(&___nl__im__65);
#line 111
c_rt_lib0move(&___nl__im__61, c_rt_lib0next_iter(___nl__im__61));
#line 111
goto label_190;
#line 111
label_250:
;
#line 112
goto label_254;
#line 112
label_252:
;
#line 113
goto label_254;
#line 113
label_254:
;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__3);
#line 113
//clear ___nl__bool__4;
#line 113
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 113
c_rt_lib0clear(&___nl__im__9);
#line 113
c_rt_lib0clear(&___nl__im__16);
#line 113
c_rt_lib0clear(&___nl__im__17);
#line 113
c_rt_lib0clear(&___nl__im__18);
#line 113
c_rt_lib0clear(&___nl__im__19);
#line 113
c_rt_lib0clear(&___nl__im__26);
#line 113
c_rt_lib0clear(&___nl__im__27);
#line 113
c_rt_lib0clear(&___nl__im__28);
#line 113
c_rt_lib0clear(&___nl__im__29);
#line 113
c_rt_lib0clear(&___nl__im__35);
#line 113
//clear ___nl__bool__36;
#line 113
c_rt_lib0clear(&___nl__im__37);
#line 113
c_rt_lib0clear(&___nl__im__38);
#line 113
c_rt_lib0clear(&___nl__im__40);
#line 113
c_rt_lib0clear(&___nl__im__41);
#line 113
c_rt_lib0clear(&___nl__im__49);
#line 113
c_rt_lib0clear(&___nl__im__50);
#line 113
c_rt_lib0clear(&___nl__im__51);
#line 113
c_rt_lib0clear(&___nl__im__52);
#line 113
c_rt_lib0clear(&___nl__im__58);
#line 113
//clear ___nl__bool__59;
#line 113
c_rt_lib0clear(&___nl__im__60);
#line 113
c_rt_lib0clear(&___nl__im__61);
#line 113
//clear ___nl__bool__62;
#line 113
c_rt_lib0clear(&___nl__im__63);
#line 113
c_rt_lib0clear(&___nl__im__64);
#line 113
c_rt_lib0clear(&___nl__im__65);
#line 113
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
#line 117
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 117
if(___nl__bool__1){ goto label_33;}
#line 118
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 118
if(___nl__bool__1){ goto label_35;}
#line 119
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 119
if(___nl__bool__1){ goto label_39;}
#line 120
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 120
if(___nl__bool__1){ goto label_43;}
#line 121
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 121
if(___nl__bool__1){ goto label_47;}
#line 122
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 122
if(___nl__bool__1){ goto label_51;}
#line 123
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 123
if(___nl__bool__1){ goto label_55;}
#line 125
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 125
if(___nl__bool__1){ goto label_76;}
#line 126
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 126
if(___nl__bool__1){ goto label_80;}
#line 127
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 127
if(___nl__bool__1){ goto label_82;}
#line 128
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 128
if(___nl__bool__1){ goto label_84;}
#line 129
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 129
if(___nl__bool__1){ goto label_86;}
#line 130
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 130
if(___nl__bool__1){ goto label_88;}
#line 131
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 131
if(___nl__bool__1){ goto label_92;}
#line 133
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 133
if(___nl__bool__1){ goto label_120;}
#line 133
c_rt_lib0move(&___nl__im__2,___get_global_string_const(15));
#line 133
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 133
nl_die_arg(___nl__im__2);
#line 117
label_33:
;
#line 118
goto label_122;
#line 118
label_35:
;
#line 118
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 118
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 119
goto label_122;
#line 119
label_39:
;
#line 119
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 119
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 120
goto label_122;
#line 120
label_43:
;
#line 120
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 120
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 121
goto label_122;
#line 121
label_47:
;
#line 121
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 121
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 122
goto label_122;
#line 122
label_51:
;
#line 122
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 122
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 123
goto label_122;
#line 123
label_55:
;
#line 123
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 123
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 124
___nl__bool__15 = true;
#line 124
c_rt_lib0clear(&___nl__im__0);
#line 124
//clear ___nl__bool__1;
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
c_rt_lib0clear(&___nl__im__4);
#line 124
c_rt_lib0clear(&___nl__im__5);
#line 124
c_rt_lib0clear(&___nl__im__6);
#line 124
c_rt_lib0clear(&___nl__im__7);
#line 124
c_rt_lib0clear(&___nl__im__8);
#line 124
c_rt_lib0clear(&___nl__im__9);
#line 124
c_rt_lib0clear(&___nl__im__10);
#line 124
c_rt_lib0clear(&___nl__im__11);
#line 124
c_rt_lib0clear(&___nl__im__12);
#line 124
c_rt_lib0clear(&___nl__im__13);
#line 124
c_rt_lib0clear(&___nl__im__14);
#line 124
return ___nl__bool__15;
#line 125
goto label_122;
#line 125
label_76:
;
#line 125
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 125
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 126
goto label_122;
#line 126
label_80:
;
#line 127
goto label_122;
#line 127
label_82:
;
#line 128
goto label_122;
#line 128
label_84:
;
#line 129
goto label_122;
#line 129
label_86:
;
#line 130
goto label_122;
#line 130
label_88:
;
#line 130
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 130
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 131
goto label_122;
#line 131
label_92:
;
#line 131
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 131
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 132
___nl__bool__22 = true;
#line 132
c_rt_lib0clear(&___nl__im__0);
#line 132
//clear ___nl__bool__1;
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
c_rt_lib0clear(&___nl__im__3);
#line 132
c_rt_lib0clear(&___nl__im__4);
#line 132
c_rt_lib0clear(&___nl__im__5);
#line 132
c_rt_lib0clear(&___nl__im__6);
#line 132
c_rt_lib0clear(&___nl__im__7);
#line 132
c_rt_lib0clear(&___nl__im__8);
#line 132
c_rt_lib0clear(&___nl__im__9);
#line 132
c_rt_lib0clear(&___nl__im__10);
#line 132
c_rt_lib0clear(&___nl__im__11);
#line 132
c_rt_lib0clear(&___nl__im__12);
#line 132
c_rt_lib0clear(&___nl__im__13);
#line 132
c_rt_lib0clear(&___nl__im__14);
#line 132
//clear ___nl__bool__15;
#line 132
c_rt_lib0clear(&___nl__im__16);
#line 132
c_rt_lib0clear(&___nl__im__17);
#line 132
c_rt_lib0clear(&___nl__im__18);
#line 132
c_rt_lib0clear(&___nl__im__19);
#line 132
c_rt_lib0clear(&___nl__im__20);
#line 132
c_rt_lib0clear(&___nl__im__21);
#line 132
return ___nl__bool__22;
#line 133
goto label_122;
#line 133
label_120:
;
#line 134
goto label_122;
#line 134
label_122:
;
#line 135
___nl__bool__23 = false;
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
//clear ___nl__bool__22;
#line 135
return ___nl__bool__23;
return false;

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
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__string__21 = NULL;
#line 139
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 140
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 140
label_2:
;
#line 140
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 140
if(___nl__bool__4){ goto label_21;}
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_key_iter(___nl__im__6));
#line 140
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__3));
#line 141
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 141
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 142
___nl__bool__10 = generator_c_struct_dependence_sort0is_divisible(___nl__im__5);
#line 142
c_rt_lib0move(&___nl__im__11, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 142
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_string_const(715), ___nl__im__8, ___get_global_string_const(716), ___nl__im__9, ___get_global_string_const(717), ___nl__im__11, ___get_global_string_const(204), ___nl__im__5));
#line 142
c_rt_lib0clear(&___nl__im__8);
#line 142
c_rt_lib0clear(&___nl__im__9);
#line 142
//clear ___nl__bool__10;
#line 142
c_rt_lib0clear(&___nl__im__11);
#line 143
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__3, ___nl__im__5, &___nl__im__7, ___nl__im__1));
#line 144
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__3, ___nl__im__7));
#line 144
c_rt_lib0clear(&___nl__im__7);
#line 145
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 145
goto label_2;
#line 145
label_21:
;
#line 146
c_rt_lib0copy(&___nl__im__12, ___nl__im__2);
#line 147
c_rt_lib0move(&___nl__im__16, c_rt_lib0init_iter(___nl__im__12));
#line 147
label_24:
;
#line 147
___nl__bool__14 = c_rt_lib0is_end_hash(___nl__im__16);
#line 147
if(___nl__bool__14){ goto label_48;}
#line 147
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_key_iter(___nl__im__16));
#line 147
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value(___nl__im__12, ___nl__im__13));
#line 148
c_rt_lib0copy(&___nl__im__17, ___nl__im__15);
#line 149
c_rt_lib0move(&___nl__im__18,___get_global_string_const(715));
#line 149
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash(___nl__im__17, ___nl__im__18));
#line 149
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__18));
#line 149
c_rt_lib0move(&___nl__string__19,___get_global_string_const(715));
#line 149
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__17, ___nl__string__19, ___nl__im__18));
#line 149
c_rt_lib0clear(&___nl__im__18);
#line 149
c_rt_lib0clear(&___nl__string__19);
#line 150
c_rt_lib0move(&___nl__im__20,___get_global_string_const(716));
#line 150
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__17, ___nl__im__20));
#line 150
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__20));
#line 150
c_rt_lib0move(&___nl__string__21,___get_global_string_const(716));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__17, ___nl__string__21, ___nl__im__20));
#line 150
c_rt_lib0clear(&___nl__im__20);
#line 150
c_rt_lib0clear(&___nl__string__21);
#line 151
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__13, ___nl__im__17));
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 152
c_rt_lib0move(&___nl__im__16, c_rt_lib0next_iter(___nl__im__16));
#line 152
goto label_24;
#line 152
label_48:
;
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__3);
#line 153
//clear ___nl__bool__4;
#line 153
c_rt_lib0clear(&___nl__im__5);
#line 153
c_rt_lib0clear(&___nl__im__6);
#line 153
c_rt_lib0clear(&___nl__im__7);
#line 153
c_rt_lib0clear(&___nl__im__12);
#line 153
c_rt_lib0clear(&___nl__im__13);
#line 153
//clear ___nl__bool__14;
#line 153
c_rt_lib0clear(&___nl__im__15);
#line 153
c_rt_lib0clear(&___nl__im__16);
#line 153
c_rt_lib0clear(&___nl__im__17);
#line 153
return ___nl__im__2;
return NULL;

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
#line 157
c_rt_lib0delete(array0sort(___ref___im__0));
#line 158
___nl__int__1 = 0;
#line 159
label_2:
;
#line 160
___nl__int__4 = c_rt_lib0array_len((*___ref___im__0));
#line 160
___nl__int__5 = 1;
#line 160
___nl__int__3 = ___nl__int__4 - ___nl__int__5;
#line 160
//clear ___nl__int__4;
#line 160
//clear ___nl__int__5;
#line 160
___nl__int__6 = ___nl__int__1 >= ___nl__int__3;
#line 160
___nl__bool__2 = ___nl__int__6;
#line 160
//clear ___nl__int__3;
#line 160
//clear ___nl__int__6;
#line 160
___nl__bool__2 = !___nl__bool__2;
#line 160
if(___nl__bool__2){ goto label_17;}
#line 161
//clear ___nl__bool__2;
#line 161
goto label_44;
#line 162
goto label_17;
#line 162
label_17:
;
#line 162
//clear ___nl__bool__2;
#line 163
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get((*___ref___im__0), ___nl__int__1));
#line 163
___nl__int__11 = 1;
#line 163
___nl__int__10 = ___nl__int__1 + ___nl__int__11;
#line 163
//clear ___nl__int__11;
#line 163
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get((*___ref___im__0), ___nl__int__10));
#line 163
//clear ___nl__int__10;
#line 163
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 163
c_rt_lib0clear(&___nl__im__8);
#line 163
c_rt_lib0clear(&___nl__im__9);
#line 163
___nl__bool__7 = !___nl__bool__7;
#line 163
if(___nl__bool__7){ goto label_36;}
#line 164
___nl__int__13 = 1;
#line 164
___nl__int__12 = ___nl__int__1 + ___nl__int__13;
#line 164
//clear ___nl__int__13;
#line 164
c_rt_lib0delete(array0remove(___ref___im__0, ___nl__int__12));
#line 164
//clear ___nl__int__12;
#line 165
goto label_41;
#line 165
label_36:
;
#line 166
___nl__int__14 = 1;
#line 166
___nl__int__1 = ___nl__int__1 + ___nl__int__14;
#line 166
//clear ___nl__int__14;
#line 167
goto label_41;
#line 167
label_41:
;
#line 167
//clear ___nl__bool__7;
#line 159
goto label_2;
#line 159
label_44:
;
#line 159
//clear ___nl__int__1;
#line 159
return NULL;
return NULL;

}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0join_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 173
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(492));
#line 173
if(___nl__bool__2){ goto label_3;}
#line 173
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 173
label_3:
;
#line 173
___nl__bool__2 = !___nl__bool__2;
#line 173
if(___nl__bool__2){ goto label_12;}
#line 174
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
//clear ___nl__bool__2;
#line 174
return ___nl__im__3;
#line 175
goto label_12;
#line 175
label_12:
;
#line 175
//clear ___nl__bool__2;
#line 175
c_rt_lib0clear(&___nl__im__3);
#line 176
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(71));
#line 176
___nl__bool__4 = !___nl__bool__4;
#line 176
if(___nl__bool__4){ goto label_22;}
#line 177
c_rt_lib0clear(&___nl__im__0);
#line 177
//clear ___nl__bool__4;
#line 177
return ___nl__im__1;
#line 178
goto label_22;
#line 178
label_22:
;
#line 178
//clear ___nl__bool__4;
#line 179
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(71));
#line 179
___nl__bool__5 = !___nl__bool__5;
#line 179
if(___nl__bool__5){ goto label_31;}
#line 180
c_rt_lib0clear(&___nl__im__1);
#line 180
//clear ___nl__bool__5;
#line 180
return ___nl__im__0;
#line 181
goto label_31;
#line 181
label_31:
;
#line 181
//clear ___nl__bool__5;
#line 182
c_rt_lib0move(&___nl__im__7, ov0get_element(___nl__im__0));
#line 182
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__1));
#line 182
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
c_rt_lib0clear(&___nl__im__8);
#line 182
___nl__bool__6 = !___nl__bool__6;
#line 182
if(___nl__bool__6){ goto label_44;}
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
//clear ___nl__bool__6;
#line 183
return ___nl__im__0;
#line 184
goto label_44;
#line 184
label_44:
;
#line 184
//clear ___nl__bool__6;
#line 185
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
return ___nl__im__9;
return NULL;

}

generator_c_struct_dependence_sort0decl_def_type0type generator_c_struct_dependence_sort_priv0common_type(generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__0,generator_c_struct_dependence_sort0decl_def_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 190
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(71));
#line 190
if(___nl__bool__2){ goto label_3;}
#line 190
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(71));
#line 190
label_3:
;
#line 190
___nl__bool__2 = !___nl__bool__2;
#line 190
if(___nl__bool__2){ goto label_12;}
#line 191
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 191
c_rt_lib0clear(&___nl__im__0);
#line 191
c_rt_lib0clear(&___nl__im__1);
#line 191
//clear ___nl__bool__2;
#line 191
return ___nl__im__3;
#line 192
goto label_12;
#line 192
label_12:
;
#line 192
//clear ___nl__bool__2;
#line 192
c_rt_lib0clear(&___nl__im__3);
#line 193
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(492));
#line 193
___nl__bool__4 = !___nl__bool__4;
#line 193
if(___nl__bool__4){ goto label_22;}
#line 194
c_rt_lib0clear(&___nl__im__0);
#line 194
//clear ___nl__bool__4;
#line 194
return ___nl__im__1;
#line 195
goto label_22;
#line 195
label_22:
;
#line 195
//clear ___nl__bool__4;
#line 196
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 196
___nl__bool__5 = !___nl__bool__5;
#line 196
if(___nl__bool__5){ goto label_31;}
#line 197
c_rt_lib0clear(&___nl__im__1);
#line 197
//clear ___nl__bool__5;
#line 197
return ___nl__im__0;
#line 198
goto label_31;
#line 198
label_31:
;
#line 198
//clear ___nl__bool__5;
#line 199
c_rt_lib0move(&___nl__im__7, ov0get_element(___nl__im__0));
#line 199
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__1));
#line 199
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 199
c_rt_lib0clear(&___nl__im__7);
#line 199
c_rt_lib0clear(&___nl__im__8);
#line 199
___nl__bool__6 = !___nl__bool__6;
#line 199
if(___nl__bool__6){ goto label_44;}
#line 200
c_rt_lib0clear(&___nl__im__1);
#line 200
//clear ___nl__bool__6;
#line 200
return ___nl__im__0;
#line 201
goto label_44;
#line 201
label_44:
;
#line 201
//clear ___nl__bool__6;
#line 202
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 202
c_rt_lib0clear(&___nl__im__0);
#line 202
c_rt_lib0clear(&___nl__im__1);
#line 202
return ___nl__im__9;
return NULL;

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
#line 207
c_rt_lib0move(&___nl__im__3, ov0get_element(___nl__im__0));
#line 207
c_rt_lib0move(&___nl__im__4, ov0get_element(___nl__im__1));
#line 207
___nl__bool__2 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 207
c_rt_lib0clear(&___nl__im__4);
#line 207
___nl__bool__2 = !___nl__bool__2;
#line 207
if(___nl__bool__2){ goto label_13;}
#line 208
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 208
c_rt_lib0clear(&___nl__im__0);
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
//clear ___nl__bool__2;
#line 208
return ___nl__im__5;
#line 209
goto label_13;
#line 209
label_13:
;
#line 209
//clear ___nl__bool__2;
#line 209
c_rt_lib0clear(&___nl__im__5);
#line 210
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(71));
#line 210
___nl__bool__6 = !___nl__bool__6;
#line 210
if(___nl__bool__6){ goto label_25;}
#line 211
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 211
c_rt_lib0clear(&___nl__im__0);
#line 211
c_rt_lib0clear(&___nl__im__1);
#line 211
//clear ___nl__bool__6;
#line 211
return ___nl__im__7;
#line 212
goto label_25;
#line 212
label_25:
;
#line 212
//clear ___nl__bool__6;
#line 212
c_rt_lib0clear(&___nl__im__7);
#line 213
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(71));
#line 213
___nl__bool__8 = !___nl__bool__8;
#line 213
if(___nl__bool__8){ goto label_35;}
#line 214
c_rt_lib0clear(&___nl__im__1);
#line 214
//clear ___nl__bool__8;
#line 214
return ___nl__im__0;
#line 215
goto label_35;
#line 215
label_35:
;
#line 215
//clear ___nl__bool__8;
#line 216
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 216
___nl__bool__9 = !___nl__bool__9;
#line 216
if(___nl__bool__9){ goto label_46;}
#line 217
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
//clear ___nl__bool__9;
#line 217
return ___nl__im__10;
#line 218
goto label_46;
#line 218
label_46:
;
#line 218
//clear ___nl__bool__9;
#line 218
c_rt_lib0clear(&___nl__im__10);
#line 219
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(492));
#line 219
___nl__bool__11 = !___nl__bool__11;
#line 219
if(___nl__bool__11){ goto label_71;}
#line 220
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(719));
#line 220
___nl__bool__12 = !___nl__bool__12;
#line 220
if(___nl__bool__12){ goto label_62;}
#line 221
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(720)));
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
//clear ___nl__bool__11;
#line 221
//clear ___nl__bool__12;
#line 221
return ___nl__im__13;
#line 222
goto label_62;
#line 222
label_62:
;
#line 222
//clear ___nl__bool__12;
#line 222
c_rt_lib0clear(&___nl__im__13);
#line 223
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(719)));
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
//clear ___nl__bool__11;
#line 223
return ___nl__im__14;
#line 224
goto label_71;
#line 224
label_71:
;
#line 224
//clear ___nl__bool__11;
#line 224
c_rt_lib0clear(&___nl__im__14);
#line 225
c_rt_lib0clear(&___nl__im__1);
#line 225
return ___nl__im__0;
return NULL;

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
#line 230
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 230
___nl__bool__2 = !___nl__bool__2;
#line 230
if(___nl__bool__2){ goto label_9;}
#line 231
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(492), ___nl__im__0));
#line 231
c_rt_lib0clear(&___nl__im__0);
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
//clear ___nl__bool__2;
#line 231
return ___nl__im__3;
#line 232
goto label_9;
#line 232
label_9:
;
#line 232
//clear ___nl__bool__2;
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 233
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(719));
#line 233
___nl__bool__4 = !___nl__bool__4;
#line 233
if(___nl__bool__4){ goto label_21;}
#line 234
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(491), ___nl__im__0));
#line 234
c_rt_lib0clear(&___nl__im__0);
#line 234
c_rt_lib0clear(&___nl__im__1);
#line 234
//clear ___nl__bool__4;
#line 234
return ___nl__im__5;
#line 235
goto label_21;
#line 235
label_21:
;
#line 235
//clear ___nl__bool__4;
#line 235
c_rt_lib0clear(&___nl__im__5);
#line 236
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(720));
#line 236
___nl__bool__6 = !___nl__bool__6;
#line 236
if(___nl__bool__6){ goto label_33;}
#line 237
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(490), ___nl__im__0));
#line 237
c_rt_lib0clear(&___nl__im__0);
#line 237
c_rt_lib0clear(&___nl__im__1);
#line 237
//clear ___nl__bool__6;
#line 237
return ___nl__im__7;
#line 238
goto label_33;
#line 238
label_33:
;
#line 238
//clear ___nl__bool__6;
#line 238
c_rt_lib0clear(&___nl__im__7);
#line 239
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 239
nl_die_arg(___nl__im__8);
return NULL;

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
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
bool  ___nl__bool__51 = false;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
#line 249
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(490));
#line 249
if(___nl__bool__8){ goto label_9;}
#line 252
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(491));
#line 252
if(___nl__bool__8){ goto label_15;}
#line 255
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(492));
#line 255
if(___nl__bool__8){ goto label_21;}
#line 255
c_rt_lib0move(&___nl__im__9,___get_global_string_const(15));
#line 255
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__4));
#line 255
nl_die_arg(___nl__im__9);
#line 249
label_9:
;
#line 249
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(490)));
#line 249
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 250
c_rt_lib0copy(&___nl__im__6, ___nl__im__10);
#line 251
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(720)));
#line 252
goto label_27;
#line 252
label_15:
;
#line 252
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(491)));
#line 252
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 253
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 254
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(719)));
#line 255
goto label_27;
#line 255
label_21:
;
#line 255
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(492)));
#line 255
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 256
c_rt_lib0copy(&___nl__im__6, ___nl__im__14);
#line 257
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 258
goto label_27;
#line 258
label_27:
;
#line 260
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 261
___nl__bool__17 = hash0has_key((*___ref___im__3), ___nl__im__6);
#line 261
___nl__bool__17 = !___nl__bool__17;
#line 261
if(___nl__bool__17){ goto label_63;}
#line 262
c_rt_lib0move(&___nl__im__16, hash0get_value((*___ref___im__3), ___nl__im__6));
#line 263
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(492));
#line 263
if(___nl__bool__18){ goto label_40;}
#line 263
c_rt_lib0move(&___nl__im__19, ov0get_element(___nl__im__16));
#line 263
c_rt_lib0move(&___nl__im__20, ov0get_element(___nl__im__7));
#line 263
___nl__bool__18 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 263
c_rt_lib0clear(&___nl__im__19);
#line 263
c_rt_lib0clear(&___nl__im__20);
#line 263
label_40:
;
#line 263
___nl__bool__18 = !___nl__bool__18;
#line 263
if(___nl__bool__18){ goto label_60;}
#line 264
c_rt_lib0clear(&___nl__im__0);
#line 264
c_rt_lib0clear(&___nl__im__4);
#line 264
c_rt_lib0clear(&___nl__im__6);
#line 264
c_rt_lib0clear(&___nl__im__7);
#line 264
//clear ___nl__bool__8;
#line 264
c_rt_lib0clear(&___nl__im__9);
#line 264
c_rt_lib0clear(&___nl__im__10);
#line 264
c_rt_lib0clear(&___nl__im__11);
#line 264
c_rt_lib0clear(&___nl__im__12);
#line 264
c_rt_lib0clear(&___nl__im__13);
#line 264
c_rt_lib0clear(&___nl__im__14);
#line 264
c_rt_lib0clear(&___nl__im__15);
#line 264
c_rt_lib0clear(&___nl__im__16);
#line 264
//clear ___nl__bool__17;
#line 264
//clear ___nl__bool__18;
#line 264
return NULL;
#line 265
goto label_60;
#line 265
label_60:
;
#line 265
//clear ___nl__bool__18;
#line 266
goto label_63;
#line 266
label_63:
;
#line 266
//clear ___nl__bool__17;
#line 267
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 268
___nl__bool__22 = hash0has_key((*___ref___im__2), ___nl__im__6);
#line 268
___nl__bool__22 = !___nl__bool__22;
#line 268
if(___nl__bool__22){ goto label_98;}
#line 269
c_rt_lib0move(&___nl__im__21, hash0get_value((*___ref___im__2), ___nl__im__6));
#line 270
c_rt_lib0move(&___nl__im__24, generator_c_struct_dependence_sort_priv0common_type(___nl__im__7, ___nl__im__21));
#line 270
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(71));
#line 270
c_rt_lib0clear(&___nl__im__24);
#line 270
___nl__bool__23 = !___nl__bool__23;
#line 270
___nl__bool__23 = !___nl__bool__23;
#line 270
if(___nl__bool__23){ goto label_95;}
#line 271
(*___ref___bool__5) = true;
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
c_rt_lib0clear(&___nl__im__21);
#line 272
//clear ___nl__bool__22;
#line 272
//clear ___nl__bool__23;
#line 272
return NULL;
#line 273
goto label_95;
#line 273
label_95:
;
#line 273
//clear ___nl__bool__23;
#line 274
goto label_98;
#line 274
label_98:
;
#line 274
//clear ___nl__bool__22;
#line 275
c_rt_lib0move(&___nl__im__27, hash0get_value(___nl__im__0, ___nl__im__6));
#line 275
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(717)));
#line 275
___nl__bool__25 = c_rt_lib0check_true_native(___nl__im__28);
#line 275
c_rt_lib0clear(&___nl__im__27);
#line 275
c_rt_lib0clear(&___nl__im__28);
#line 275
___nl__bool__26 = !___nl__bool__25;
#line 275
if(___nl__bool__26){ goto label_108;}
#line 275
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(719));
#line 275
label_108:
;
#line 275
//clear ___nl__bool__26;
#line 275
___nl__bool__25 = !___nl__bool__25;
#line 275
if(___nl__bool__25){ goto label_133;}
#line 276
c_rt_lib0move(&___nl__im__29, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 276
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__29));
#line 276
c_rt_lib0clear(&___nl__im__29);
#line 277
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__4));
#line 278
c_rt_lib0clear(&___nl__im__0);
#line 278
c_rt_lib0clear(&___nl__im__4);
#line 278
c_rt_lib0clear(&___nl__im__6);
#line 278
c_rt_lib0clear(&___nl__im__7);
#line 278
//clear ___nl__bool__8;
#line 278
c_rt_lib0clear(&___nl__im__9);
#line 278
c_rt_lib0clear(&___nl__im__10);
#line 278
c_rt_lib0clear(&___nl__im__11);
#line 278
c_rt_lib0clear(&___nl__im__12);
#line 278
c_rt_lib0clear(&___nl__im__13);
#line 278
c_rt_lib0clear(&___nl__im__14);
#line 278
c_rt_lib0clear(&___nl__im__15);
#line 278
c_rt_lib0clear(&___nl__im__16);
#line 278
c_rt_lib0clear(&___nl__im__21);
#line 278
//clear ___nl__bool__25;
#line 278
return NULL;
#line 279
goto label_133;
#line 279
label_133:
;
#line 279
//clear ___nl__bool__25;
#line 280
c_rt_lib0move(&___nl__im__31, hash0get_value(___nl__im__0, ___nl__im__6));
#line 280
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(717)));
#line 280
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__32);
#line 280
c_rt_lib0clear(&___nl__im__31);
#line 280
c_rt_lib0clear(&___nl__im__32);
#line 280
___nl__bool__30 = !___nl__bool__30;
#line 280
___nl__bool__30 = !___nl__bool__30;
#line 280
if(___nl__bool__30){ goto label_146;}
#line 281
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 282
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(492), ___nl__im__6));
#line 283
goto label_146;
#line 283
label_146:
;
#line 283
//clear ___nl__bool__30;
#line 284
c_rt_lib0move(&___nl__im__33, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__21));
#line 284
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__6, ___nl__im__33));
#line 284
c_rt_lib0clear(&___nl__im__33);
#line 286
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(720));
#line 286
if(___nl__bool__34){ goto label_154;}
#line 286
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(492));
#line 286
label_154:
;
#line 286
___nl__bool__34 = !___nl__bool__34;
#line 286
if(___nl__bool__34){ goto label_196;}
#line 287
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__0, ___nl__im__6));
#line 287
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(715)));
#line 287
c_rt_lib0clear(&___nl__im__36);
#line 287
___nl__int__38 = 0;
#line 287
___nl__int__39 = 1;
#line 287
___nl__int__40 = c_rt_lib0array_len(___nl__im__35);
#line 287
label_163:
;
#line 287
___nl__int__42 = ___nl__int__38 >= ___nl__int__40;
#line 287
___nl__bool__41 = ___nl__int__42;
#line 287
if(___nl__bool__41){ goto label_175;}
#line 287
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__35, ___nl__int__38));
#line 287
c_rt_lib0copy(&___nl__im__37, ___nl__im__43);
#line 288
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(491), ___nl__im__37));
#line 288
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__44, ___ref___bool__5));
#line 288
c_rt_lib0clear(&___nl__im__44);
#line 288
c_rt_lib0clear(&___nl__im__37);
#line 289
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 289
goto label_163;
#line 289
label_175:
;
#line 291
c_rt_lib0move(&___nl__im__46, hash0get_value(___nl__im__0, ___nl__im__6));
#line 291
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(716)));
#line 291
c_rt_lib0clear(&___nl__im__46);
#line 291
___nl__int__48 = 0;
#line 291
___nl__int__49 = 1;
#line 291
___nl__int__50 = c_rt_lib0array_len(___nl__im__45);
#line 291
label_182:
;
#line 291
___nl__int__52 = ___nl__int__48 >= ___nl__int__50;
#line 291
___nl__bool__51 = ___nl__int__52;
#line 291
if(___nl__bool__51){ goto label_194;}
#line 291
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__45, ___nl__int__48));
#line 291
c_rt_lib0copy(&___nl__im__47, ___nl__im__53);
#line 292
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_string_const(492), ___nl__im__47));
#line 292
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__54, ___ref___bool__5));
#line 292
c_rt_lib0clear(&___nl__im__54);
#line 292
c_rt_lib0clear(&___nl__im__47);
#line 293
___nl__int__48 = ___nl__int__48 + ___nl__int__49;
#line 293
goto label_182;
#line 293
label_194:
;
#line 294
goto label_196;
#line 294
label_196:
;
#line 294
//clear ___nl__bool__34;
#line 294
c_rt_lib0clear(&___nl__im__35);
#line 294
c_rt_lib0clear(&___nl__im__37);
#line 294
//clear ___nl__int__38;
#line 294
//clear ___nl__int__39;
#line 294
//clear ___nl__int__40;
#line 294
//clear ___nl__bool__41;
#line 294
//clear ___nl__int__42;
#line 294
c_rt_lib0clear(&___nl__im__43);
#line 294
c_rt_lib0clear(&___nl__im__45);
#line 294
c_rt_lib0clear(&___nl__im__47);
#line 294
//clear ___nl__int__48;
#line 294
//clear ___nl__int__49;
#line 294
//clear ___nl__int__50;
#line 294
//clear ___nl__bool__51;
#line 294
//clear ___nl__int__52;
#line 294
c_rt_lib0clear(&___nl__im__53);
#line 296
c_rt_lib0move(&___nl__im__55, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 296
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__55));
#line 296
c_rt_lib0clear(&___nl__im__55);
#line 297
c_rt_lib0move(&___nl__im__57, generator_c_struct_dependence_sort_priv0split_type(___nl__im__7, ___nl__im__16));
#line 297
c_rt_lib0move(&___nl__im__56, generator_c_struct_dependence_sort_priv0type_to_var(___nl__im__6, ___nl__im__57));
#line 297
c_rt_lib0clear(&___nl__im__57);
#line 297
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__56));
#line 297
c_rt_lib0clear(&___nl__im__56);
#line 298
c_rt_lib0delete(hash0delete(___ref___im__2, ___nl__im__6));
#line 298
c_rt_lib0clear(&___nl__im__0);
#line 298
c_rt_lib0clear(&___nl__im__4);
#line 298
c_rt_lib0clear(&___nl__im__6);
#line 298
c_rt_lib0clear(&___nl__im__7);
#line 298
//clear ___nl__bool__8;
#line 298
c_rt_lib0clear(&___nl__im__9);
#line 298
c_rt_lib0clear(&___nl__im__10);
#line 298
c_rt_lib0clear(&___nl__im__11);
#line 298
c_rt_lib0clear(&___nl__im__12);
#line 298
c_rt_lib0clear(&___nl__im__13);
#line 298
c_rt_lib0clear(&___nl__im__14);
#line 298
c_rt_lib0clear(&___nl__im__15);
#line 298
c_rt_lib0clear(&___nl__im__16);
#line 298
c_rt_lib0clear(&___nl__im__21);
#line 298
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
#line 303
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 304
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 305
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 306
___nl__bool__4 = false;
#line 307
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 307
label_5:
;
#line 307
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 307
if(___nl__bool__6){ goto label_15;}
#line 307
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 307
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 308
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(491), ___nl__im__5));
#line 308
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__9, &___nl__bool__4));
#line 308
c_rt_lib0clear(&___nl__im__9);
#line 309
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 309
goto label_5;
#line 309
label_15:
;
#line 310
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__0));
#line 310
label_17:
;
#line 310
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 310
if(___nl__bool__11){ goto label_27;}
#line 310
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 310
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__10));
#line 311
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(490), ___nl__im__10));
#line 311
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__14, &___nl__bool__4));
#line 311
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 312
goto label_17;
#line 312
label_27:
;
#line 313
___nl__bool__15 = ___nl__bool__4;
#line 313
___nl__bool__15 = !___nl__bool__15;
#line 313
if(___nl__bool__15){ goto label_48;}
#line 314
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_string_const(488)));
#line 314
c_rt_lib0clear(&___nl__im__0);
#line 314
c_rt_lib0clear(&___nl__im__1);
#line 314
c_rt_lib0clear(&___nl__im__2);
#line 314
c_rt_lib0clear(&___nl__im__3);
#line 314
//clear ___nl__bool__4;
#line 314
c_rt_lib0clear(&___nl__im__5);
#line 314
//clear ___nl__bool__6;
#line 314
c_rt_lib0clear(&___nl__im__7);
#line 314
c_rt_lib0clear(&___nl__im__8);
#line 314
c_rt_lib0clear(&___nl__im__10);
#line 314
//clear ___nl__bool__11;
#line 314
c_rt_lib0clear(&___nl__im__12);
#line 314
c_rt_lib0clear(&___nl__im__13);
#line 314
//clear ___nl__bool__15;
#line 314
return ___nl__im__16;
#line 315
goto label_48;
#line 315
label_48:
;
#line 315
//clear ___nl__bool__15;
#line 315
c_rt_lib0clear(&___nl__im__16);
#line 316
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 317
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 318
c_rt_lib0move(&___nl__im__22, c_rt_lib0init_iter(___nl__im__0));
#line 318
label_54:
;
#line 318
___nl__bool__20 = c_rt_lib0is_end_hash(___nl__im__22);
#line 318
if(___nl__bool__20){ goto label_64;}
#line 318
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_key_iter(___nl__im__22));
#line 318
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__19));
#line 319
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(204)));
#line 319
c_rt_lib0delete(hash0set_value(&___nl__im__18, ___nl__im__19, ___nl__im__23));
#line 319
c_rt_lib0clear(&___nl__im__23);
#line 320
c_rt_lib0move(&___nl__im__22, c_rt_lib0next_iter(___nl__im__22));
#line 320
goto label_54;
#line 320
label_64:
;
#line 321
___nl__int__25 = 0;
#line 321
___nl__int__26 = 1;
#line 321
___nl__int__27 = c_rt_lib0array_len(___nl__im__1);
#line 321
label_68:
;
#line 321
___nl__int__29 = ___nl__int__25 >= ___nl__int__27;
#line 321
___nl__bool__28 = ___nl__int__29;
#line 321
if(___nl__bool__28){ goto label_120;}
#line 321
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__1, ___nl__int__25));
#line 321
c_rt_lib0copy(&___nl__im__24, ___nl__im__30);
#line 322
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(492));
#line 322
if(___nl__bool__31){ goto label_83;}
#line 324
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(491));
#line 324
if(___nl__bool__31){ goto label_94;}
#line 326
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(490));
#line 326
if(___nl__bool__31){ goto label_105;}
#line 326
c_rt_lib0move(&___nl__im__32,___get_global_string_const(15));
#line 326
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(2, ___nl__im__32, ___nl__im__24));
#line 326
nl_die_arg(___nl__im__32);
#line 322
label_83:
;
#line 322
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(492)));
#line 322
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 323
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__18, ___nl__im__33));
#line 323
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 323
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__33, ___get_global_string_const(493), ___nl__im__36, ___get_global_string_const(489), ___nl__im__37));
#line 323
c_rt_lib0clear(&___nl__im__36);
#line 323
c_rt_lib0clear(&___nl__im__37);
#line 323
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__35));
#line 323
c_rt_lib0clear(&___nl__im__35);
#line 324
goto label_116;
#line 324
label_94:
;
#line 324
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(491)));
#line 324
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 325
c_rt_lib0move(&___nl__im__41, hash0get_value(___nl__im__18, ___nl__im__38));
#line 325
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(491)));
#line 325
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__38, ___get_global_string_const(493), ___nl__im__41, ___get_global_string_const(489), ___nl__im__42));
#line 325
c_rt_lib0clear(&___nl__im__41);
#line 325
c_rt_lib0clear(&___nl__im__42);
#line 325
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__40));
#line 325
c_rt_lib0clear(&___nl__im__40);
#line 326
goto label_116;
#line 326
label_105:
;
#line 326
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(490)));
#line 326
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 327
c_rt_lib0move(&___nl__im__46, hash0get_value(___nl__im__18, ___nl__im__43));
#line 327
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_string_const(490)));
#line 327
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(3, ___get_global_string_const(166), ___nl__im__43, ___get_global_string_const(493), ___nl__im__46, ___get_global_string_const(489), ___nl__im__47));
#line 327
c_rt_lib0clear(&___nl__im__46);
#line 327
c_rt_lib0clear(&___nl__im__47);
#line 327
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__45));
#line 327
c_rt_lib0clear(&___nl__im__45);
#line 328
goto label_116;
#line 328
label_116:
;
#line 328
c_rt_lib0clear(&___nl__im__24);
#line 329
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 329
goto label_68;
#line 329
label_120:
;
#line 330
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(487), ___nl__im__17));
#line 330
c_rt_lib0clear(&___nl__im__0);
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
c_rt_lib0clear(&___nl__im__2);
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
//clear ___nl__bool__4;
#line 330
c_rt_lib0clear(&___nl__im__5);
#line 330
//clear ___nl__bool__6;
#line 330
c_rt_lib0clear(&___nl__im__7);
#line 330
c_rt_lib0clear(&___nl__im__8);
#line 330
c_rt_lib0clear(&___nl__im__10);
#line 330
//clear ___nl__bool__11;
#line 330
c_rt_lib0clear(&___nl__im__12);
#line 330
c_rt_lib0clear(&___nl__im__13);
#line 330
c_rt_lib0clear(&___nl__im__17);
#line 330
c_rt_lib0clear(&___nl__im__18);
#line 330
c_rt_lib0clear(&___nl__im__19);
#line 330
//clear ___nl__bool__20;
#line 330
c_rt_lib0clear(&___nl__im__21);
#line 330
c_rt_lib0clear(&___nl__im__22);
#line 330
c_rt_lib0clear(&___nl__im__24);
#line 330
//clear ___nl__int__25;
#line 330
//clear ___nl__int__26;
#line 330
//clear ___nl__int__27;
#line 330
//clear ___nl__bool__28;
#line 330
//clear ___nl__int__29;
#line 330
c_rt_lib0clear(&___nl__im__30);
#line 330
//clear ___nl__bool__31;
#line 330
c_rt_lib0clear(&___nl__im__32);
#line 330
c_rt_lib0clear(&___nl__im__33);
#line 330
c_rt_lib0clear(&___nl__im__34);
#line 330
c_rt_lib0clear(&___nl__im__38);
#line 330
c_rt_lib0clear(&___nl__im__39);
#line 330
c_rt_lib0clear(&___nl__im__43);
#line 330
c_rt_lib0clear(&___nl__im__44);
#line 330
return ___nl__im__48;
return NULL;

}

ImmT  generator_c_struct_dependence_sort_priv0anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
#line 334
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 334
if(___nl__bool__2){ goto label_3;}
#line 334
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 334
label_3:
;
#line 334
if(___nl__bool__2){ goto label_6;}
#line 334
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 334
label_6:
;
#line 334
if(___nl__bool__2){ goto label_9;}
#line 334
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 334
label_9:
;
#line 334
___nl__bool__2 = !___nl__bool__2;
#line 334
if(___nl__bool__2){ goto label_26;}
#line 335
c_rt_lib0move(&___nl__im__3, anon_naming0get_anon_name(___nl__im__0));
#line 336
___nl__bool__4 = hash0has_key((*___ref___im__1), ___nl__im__3);
#line 336
___nl__bool__4 = !___nl__bool__4;
#line 336
if(___nl__bool__4){ goto label_22;}
#line 337
c_rt_lib0clear(&___nl__im__0);
#line 337
//clear ___nl__bool__2;
#line 337
c_rt_lib0clear(&___nl__im__3);
#line 337
//clear ___nl__bool__4;
#line 337
return NULL;
#line 338
goto label_22;
#line 338
label_22:
;
#line 338
//clear ___nl__bool__4;
#line 339
c_rt_lib0delete(hash0set_value(___ref___im__1, ___nl__im__3, ___nl__im__0));
#line 340
goto label_26;
#line 340
label_26:
;
#line 340
//clear ___nl__bool__2;
#line 340
c_rt_lib0clear(&___nl__im__3);
#line 340
c_rt_lib0clear(&___nl__im__0);
#line 340
return NULL;
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
#line 344
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 344
___nl__bool__2 = !___nl__bool__2;
#line 344
if(___nl__bool__2){ goto label_16;}
#line 345
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 345
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__3));
#line 345
label_5:
;
#line 345
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 345
if(___nl__bool__5){ goto label_13;}
#line 345
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 345
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__3, ___nl__im__4));
#line 346
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__6, ___ref___im__1));
#line 347
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 347
goto label_5;
#line 347
label_13:
;
#line 348
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 349
goto label_69;
#line 349
label_16:
;
#line 349
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 349
___nl__bool__2 = !___nl__bool__2;
#line 349
if(___nl__bool__2){ goto label_25;}
#line 350
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 350
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__8, ___ref___im__1));
#line 350
c_rt_lib0clear(&___nl__im__8);
#line 351
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 352
goto label_69;
#line 352
label_25:
;
#line 352
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 352
___nl__bool__2 = !___nl__bool__2;
#line 352
if(___nl__bool__2){ goto label_60;}
#line 353
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 353
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__9));
#line 353
label_31:
;
#line 353
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 353
if(___nl__bool__11){ goto label_57;}
#line 353
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 353
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__10));
#line 354
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(27));
#line 354
if(___nl__bool__14){ goto label_43;}
#line 356
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(28));
#line 356
if(___nl__bool__14){ goto label_48;}
#line 356
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 356
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 356
nl_die_arg(___nl__im__15);
#line 354
label_43:
;
#line 354
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(27)));
#line 354
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 355
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__16, ___ref___im__1));
#line 356
goto label_50;
#line 356
label_48:
;
#line 357
goto label_50;
#line 357
label_50:
;
#line 357
//clear ___nl__bool__14;
#line 357
c_rt_lib0clear(&___nl__im__15);
#line 357
c_rt_lib0clear(&___nl__im__16);
#line 357
c_rt_lib0clear(&___nl__im__17);
#line 358
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 358
goto label_31;
#line 358
label_57:
;
#line 359
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 360
goto label_69;
#line 360
label_60:
;
#line 360
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 360
___nl__bool__2 = !___nl__bool__2;
#line 360
if(___nl__bool__2){ goto label_69;}
#line 361
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 361
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, ___ref___im__1));
#line 361
c_rt_lib0clear(&___nl__im__18);
#line 362
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 363
goto label_69;
#line 363
label_69:
;
#line 363
//clear ___nl__bool__2;
#line 363
c_rt_lib0clear(&___nl__im__3);
#line 363
c_rt_lib0clear(&___nl__im__4);
#line 363
//clear ___nl__bool__5;
#line 363
c_rt_lib0clear(&___nl__im__6);
#line 363
c_rt_lib0clear(&___nl__im__7);
#line 363
c_rt_lib0clear(&___nl__im__9);
#line 363
c_rt_lib0clear(&___nl__im__10);
#line 363
//clear ___nl__bool__11;
#line 363
c_rt_lib0clear(&___nl__im__12);
#line 363
c_rt_lib0clear(&___nl__im__13);
#line 363
//clear ___nl__bool__14;
#line 363
c_rt_lib0clear(&___nl__im__15);
#line 363
c_rt_lib0clear(&___nl__im__16);
#line 363
c_rt_lib0clear(&___nl__im__17);
#line 363
c_rt_lib0clear(&___nl__im__0);
#line 363
return NULL;
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
#line 367
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 368
___nl__int__3 = 0;
#line 368
___nl__int__4 = 1;
#line 368
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 368
label_4:
;
#line 368
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 368
___nl__bool__6 = ___nl__int__7;
#line 368
if(___nl__bool__6){ goto label_120;}
#line 368
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 368
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 369
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(466)));
#line 369
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__9, &___nl__im__1));
#line 369
c_rt_lib0clear(&___nl__im__9);
#line 370
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(213)));
#line 370
___nl__int__12 = 0;
#line 370
___nl__int__13 = 1;
#line 370
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 370
label_17:
;
#line 370
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 370
___nl__bool__15 = ___nl__int__16;
#line 370
if(___nl__bool__15){ goto label_29;}
#line 370
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 370
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 371
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(204)));
#line 371
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, &___nl__im__1));
#line 371
c_rt_lib0clear(&___nl__im__18);
#line 371
c_rt_lib0clear(&___nl__im__11);
#line 372
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 372
goto label_17;
#line 372
label_29:
;
#line 373
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(214)));
#line 373
___nl__int__21 = 0;
#line 373
___nl__int__22 = 1;
#line 373
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 373
label_34:
;
#line 373
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 373
___nl__bool__24 = ___nl__int__25;
#line 373
if(___nl__bool__24){ goto label_100;}
#line 373
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 373
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 374
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 374
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(551));
#line 374
c_rt_lib0clear(&___nl__im__28);
#line 374
___nl__bool__27 = !___nl__bool__27;
#line 374
if(___nl__bool__27){ goto label_53;}
#line 375
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 375
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 375
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(551)));
#line 375
c_rt_lib0clear(&___nl__im__30);
#line 375
c_rt_lib0clear(&___nl__im__31);
#line 375
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__29, &___nl__im__1));
#line 375
c_rt_lib0clear(&___nl__im__29);
#line 376
goto label_95;
#line 376
label_53:
;
#line 376
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 376
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(127));
#line 376
c_rt_lib0clear(&___nl__im__32);
#line 376
___nl__bool__27 = !___nl__bool__27;
#line 376
if(___nl__bool__27){ goto label_67;}
#line 377
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 377
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 377
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(127)));
#line 377
c_rt_lib0clear(&___nl__im__34);
#line 377
c_rt_lib0clear(&___nl__im__35);
#line 377
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__33, &___nl__im__1));
#line 377
c_rt_lib0clear(&___nl__im__33);
#line 378
goto label_95;
#line 378
label_67:
;
#line 378
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 378
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__36, ___get_global_string_const(554));
#line 378
c_rt_lib0clear(&___nl__im__36);
#line 378
___nl__bool__27 = !___nl__bool__27;
#line 378
if(___nl__bool__27){ goto label_81;}
#line 379
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 379
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 379
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__39, ___get_global_string_const(554)));
#line 379
c_rt_lib0clear(&___nl__im__38);
#line 379
c_rt_lib0clear(&___nl__im__39);
#line 379
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__37, &___nl__im__1));
#line 379
c_rt_lib0clear(&___nl__im__37);
#line 380
goto label_95;
#line 380
label_81:
;
#line 380
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 380
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(128));
#line 380
c_rt_lib0clear(&___nl__im__40);
#line 380
___nl__bool__27 = !___nl__bool__27;
#line 380
if(___nl__bool__27){ goto label_95;}
#line 381
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 381
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(204)));
#line 381
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__43, ___get_global_string_const(128)));
#line 381
c_rt_lib0clear(&___nl__im__42);
#line 381
c_rt_lib0clear(&___nl__im__43);
#line 381
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__41, &___nl__im__1));
#line 381
c_rt_lib0clear(&___nl__im__41);
#line 382
goto label_95;
#line 382
label_95:
;
#line 382
//clear ___nl__bool__27;
#line 382
c_rt_lib0clear(&___nl__im__20);
#line 383
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 383
goto label_34;
#line 383
label_100:
;
#line 384
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(165)));
#line 384
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(76));
#line 384
if(___nl__bool__45){ goto label_109;}
#line 385
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(75));
#line 385
if(___nl__bool__45){ goto label_111;}
#line 385
c_rt_lib0move(&___nl__im__46,___get_global_string_const(15));
#line 385
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__44));
#line 385
nl_die_arg(___nl__im__46);
#line 384
label_109:
;
#line 385
goto label_116;
#line 385
label_111:
;
#line 385
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__44, ___get_global_string_const(75)));
#line 385
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 386
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__47, &___nl__im__1));
#line 387
goto label_116;
#line 387
label_116:
;
#line 387
c_rt_lib0clear(&___nl__im__2);
#line 388
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 388
goto label_4;
#line 388
label_120:
;
#line 389
c_rt_lib0clear(&___nl__im__0);
#line 389
c_rt_lib0clear(&___nl__im__2);
#line 389
//clear ___nl__int__3;
#line 389
//clear ___nl__int__4;
#line 389
//clear ___nl__int__5;
#line 389
//clear ___nl__bool__6;
#line 389
//clear ___nl__int__7;
#line 389
c_rt_lib0clear(&___nl__im__8);
#line 389
c_rt_lib0clear(&___nl__im__10);
#line 389
c_rt_lib0clear(&___nl__im__11);
#line 389
//clear ___nl__int__12;
#line 389
//clear ___nl__int__13;
#line 389
//clear ___nl__int__14;
#line 389
//clear ___nl__bool__15;
#line 389
//clear ___nl__int__16;
#line 389
c_rt_lib0clear(&___nl__im__17);
#line 389
c_rt_lib0clear(&___nl__im__19);
#line 389
c_rt_lib0clear(&___nl__im__20);
#line 389
//clear ___nl__int__21;
#line 389
//clear ___nl__int__22;
#line 389
//clear ___nl__int__23;
#line 389
//clear ___nl__bool__24;
#line 389
//clear ___nl__int__25;
#line 389
c_rt_lib0clear(&___nl__im__26);
#line 389
c_rt_lib0clear(&___nl__im__44);
#line 389
//clear ___nl__bool__45;
#line 389
c_rt_lib0clear(&___nl__im__46);
#line 389
c_rt_lib0clear(&___nl__im__47);
#line 389
c_rt_lib0clear(&___nl__im__48);
#line 389
return ___nl__im__1;
return NULL;

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
#line 393
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 394
___nl__int__3 = 0;
#line 394
___nl__int__4 = 1;
#line 394
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 394
label_4:
;
#line 394
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 394
___nl__bool__6 = ___nl__int__7;
#line 394
if(___nl__bool__6){ goto label_44;}
#line 394
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 394
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 395
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(208)));
#line 395
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(465));
#line 395
if(___nl__bool__10){ goto label_18;}
#line 396
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(209));
#line 396
if(___nl__bool__10){ goto label_20;}
#line 396
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 396
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 396
nl_die_arg(___nl__im__11);
#line 395
label_18:
;
#line 396
goto label_40;
#line 396
label_20:
;
#line 397
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(165)));
#line 397
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(75));
#line 397
if(___nl__bool__13){ goto label_29;}
#line 399
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(76));
#line 399
if(___nl__bool__13){ goto label_36;}
#line 399
c_rt_lib0move(&___nl__im__14,___get_global_string_const(15));
#line 399
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__12));
#line 399
nl_die_arg(___nl__im__14);
#line 397
label_29:
;
#line 397
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(75)));
#line 397
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 398
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(166)));
#line 398
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__17, ___nl__im__15));
#line 398
c_rt_lib0clear(&___nl__im__17);
#line 399
goto label_38;
#line 399
label_36:
;
#line 400
goto label_38;
#line 400
label_38:
;
#line 401
goto label_40;
#line 401
label_40:
;
#line 401
c_rt_lib0clear(&___nl__im__2);
#line 402
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 402
goto label_4;
#line 402
label_44:
;
#line 403
c_rt_lib0clear(&___nl__im__0);
#line 403
c_rt_lib0clear(&___nl__im__2);
#line 403
//clear ___nl__int__3;
#line 403
//clear ___nl__int__4;
#line 403
//clear ___nl__int__5;
#line 403
//clear ___nl__bool__6;
#line 403
//clear ___nl__int__7;
#line 403
c_rt_lib0clear(&___nl__im__8);
#line 403
c_rt_lib0clear(&___nl__im__9);
#line 403
//clear ___nl__bool__10;
#line 403
c_rt_lib0clear(&___nl__im__11);
#line 403
c_rt_lib0clear(&___nl__im__12);
#line 403
//clear ___nl__bool__13;
#line 403
c_rt_lib0clear(&___nl__im__14);
#line 403
c_rt_lib0clear(&___nl__im__15);
#line 403
c_rt_lib0clear(&___nl__im__16);
#line 403
return ___nl__im__1;
return NULL;

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
#line 408
c_rt_lib0move(&___nl__im__2, generator_c_struct_dependence_sort_priv0get_anons(___nl__im__0));
#line 409
c_rt_lib0move(&___nl__im__3, generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(___nl__im__0));
#line 409
c_rt_lib0delete(hash0add_all(&___nl__im__2, ___nl__im__3));
#line 409
c_rt_lib0clear(&___nl__im__3);
#line 410
c_rt_lib0move(&___nl__im__4, generator_c_struct_dependence_sort_priv0in_funs_to_graph(___nl__im__2, ___nl__im__1));
#line 411
c_rt_lib0move(&___nl__im__5, generator_c_struct_dependence_sort_priv0sort_graph(___nl__im__4));
#line 411
c_rt_lib0clear(&___nl__im__0);
#line 411
c_rt_lib0clear(&___nl__im__1);
#line 411
c_rt_lib0clear(&___nl__im__2);
#line 411
c_rt_lib0clear(&___nl__im__4);
#line 411
return ___nl__im__5;
return NULL;

}


static ImmT ___const__[7];
static int ___const_init__ = 1;
void generator_c_struct_dependence_sort_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[6];


for(int i=0;i<6;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 6);
}}
ImmT generator_c_struct_dependence_sort_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_c_struct_dependence_sort_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_c_struct_dependence_sort0result_t0cal();
	break;
case 1:
	___const__[1] = generator_c_struct_dependence_sort0result_element0cal();
	break;
case 2:
	___const__[2] = generator_c_struct_dependence_sort0graph_node0cal();
	break;
case 3:
	___const__[3] = generator_c_struct_dependence_sort0graph0cal();
	break;
case 4:
	___const__[4] = generator_c_struct_dependence_sort0sorted_element0cal();
	break;
case 5:
	___const__[5] = generator_c_struct_dependence_sort0decl_def_type0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
