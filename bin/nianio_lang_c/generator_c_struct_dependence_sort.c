
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c_struct_dependence_sort0result_element0ptr, ___get_global_string_const(712), ___get_global_string_const(713)));
#line 12
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(167), ___nl__im__2, ___get_global_string_const(493), ___nl__im__3, ___get_global_string_const(489), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__7));
#line 34
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(714), ___nl__im__2, ___get_global_string_const(715), ___nl__im__4, ___get_global_string_const(716), ___nl__im__6, ___get_global_string_const(205), ___nl__im__7));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(generator_c_struct_dependence_sort0graph_node0ptr, ___get_global_string_const(712), ___get_global_string_const(717)));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__1));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(718), ___nl__im__2, ___get_global_string_const(719), ___nl__im__3, ___get_global_string_const(492), ___nl__im__4, ___get_global_string_const(72), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(35));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(35));
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
if(___nl__bool__4){ goto label_35;}
#line 77
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 77
if(___nl__bool__4){ goto label_37;}
#line 78
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 78
if(___nl__bool__4){ goto label_41;}
#line 81
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 81
if(___nl__bool__4){ goto label_65;}
#line 82
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 82
if(___nl__bool__4){ goto label_69;}
#line 85
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 85
if(___nl__bool__4){ goto label_93;}
#line 86
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 86
if(___nl__bool__4){ goto label_97;}
#line 91
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 91
if(___nl__bool__4){ goto label_130;}
#line 95
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 95
if(___nl__bool__4){ goto label_159;}
#line 96
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 96
if(___nl__bool__4){ goto label_161;}
#line 97
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 97
if(___nl__bool__4){ goto label_163;}
#line 98
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 98
if(___nl__bool__4){ goto label_165;}
#line 99
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 99
if(___nl__bool__4){ goto label_167;}
#line 100
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 100
if(___nl__bool__4){ goto label_169;}
#line 101
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 101
if(___nl__bool__4){ goto label_173;}
#line 113
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(15));
#line 113
if(___nl__bool__4){ goto label_256;}
#line 113
c_rt_lib0move(&___nl__im__5,___get_global_string_const(16));
#line 113
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__1));
#line 113
nl_die_arg(___nl__im__5);
#line 76
label_35:
;
#line 77
goto label_258;
#line 77
label_37:
;
#line 77
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 77
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 78
goto label_258;
#line 78
label_41:
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
if(___nl__bool__10){ goto label_59;}
#line 79
c_rt_lib0move(&___nl__im__12,___get_global_string_const(715));
#line 79
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__12));
#line 79
c_rt_lib0move(&___nl__im__13, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 79
c_rt_lib0delete(array0push(&___nl__im__12, ___nl__im__13));
#line 79
c_rt_lib0move(&___nl__string__14,___get_global_string_const(715));
#line 79
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__14, ___nl__im__12));
#line 79
c_rt_lib0clear(&___nl__im__12);
#line 79
c_rt_lib0clear(&___nl__im__13);
#line 79
c_rt_lib0clear(&___nl__string__14);
#line 79
goto label_59;
#line 79
label_59:
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
goto label_258;
#line 81
label_65:
;
#line 81
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 81
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 82
goto label_258;
#line 82
label_69:
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
if(___nl__bool__20){ goto label_87;}
#line 83
c_rt_lib0move(&___nl__im__22,___get_global_string_const(715));
#line 83
c_rt_lib0move(&___nl__im__22, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__22));
#line 83
c_rt_lib0move(&___nl__im__23, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 83
c_rt_lib0delete(array0push(&___nl__im__22, ___nl__im__23));
#line 83
c_rt_lib0move(&___nl__string__24,___get_global_string_const(715));
#line 83
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__24, ___nl__im__22));
#line 83
c_rt_lib0clear(&___nl__im__22);
#line 83
c_rt_lib0clear(&___nl__im__23);
#line 83
c_rt_lib0clear(&___nl__string__24);
#line 83
goto label_87;
#line 83
label_87:
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
goto label_258;
#line 85
label_93:
;
#line 85
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 85
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 86
goto label_258;
#line 86
label_97:
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
if(___nl__bool__30){ goto label_115;}
#line 87
c_rt_lib0move(&___nl__im__32,___get_global_string_const(715));
#line 87
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__32));
#line 87
c_rt_lib0move(&___nl__im__33, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 87
c_rt_lib0delete(array0push(&___nl__im__32, ___nl__im__33));
#line 87
c_rt_lib0move(&___nl__string__34,___get_global_string_const(715));
#line 87
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__34, ___nl__im__32));
#line 87
c_rt_lib0clear(&___nl__im__32);
#line 87
c_rt_lib0clear(&___nl__im__33);
#line 87
c_rt_lib0clear(&___nl__string__34);
#line 87
goto label_115;
#line 87
label_115:
;
#line 87
//clear ___nl__bool__30;
#line 88
c_rt_lib0move(&___nl__im__38, c_rt_lib0init_iter(___nl__im__28));
#line 88
label_118:
;
#line 88
___nl__bool__36 = c_rt_lib0is_end_hash(___nl__im__38);
#line 88
if(___nl__bool__36){ goto label_128;}
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
goto label_118;
#line 90
label_128:
;
#line 91
goto label_258;
#line 91
label_130:
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
if(___nl__bool__42){ goto label_156;}
#line 93
c_rt_lib0move(&___nl__im__45, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 93
___nl__bool__44 = c_rt_lib0ne(___nl__im__0, ___nl__im__45);
#line 93
c_rt_lib0clear(&___nl__im__45);
#line 93
___nl__bool__44 = !___nl__bool__44;
#line 93
if(___nl__bool__44){ goto label_153;}
#line 93
c_rt_lib0move(&___nl__im__46,___get_global_string_const(715));
#line 93
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__46));
#line 93
c_rt_lib0move(&___nl__im__47, generator_c_struct_dependence_sort_priv0get_fun_name(___nl__im__40));
#line 93
c_rt_lib0delete(array0push(&___nl__im__46, ___nl__im__47));
#line 93
c_rt_lib0move(&___nl__string__48,___get_global_string_const(715));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__48, ___nl__im__46));
#line 93
c_rt_lib0clear(&___nl__im__46);
#line 93
c_rt_lib0clear(&___nl__im__47);
#line 93
c_rt_lib0clear(&___nl__string__48);
#line 93
goto label_153;
#line 93
label_153:
;
#line 93
//clear ___nl__bool__44;
#line 94
goto label_156;
#line 94
label_156:
;
#line 94
//clear ___nl__bool__42;
#line 95
goto label_258;
#line 95
label_159:
;
#line 96
goto label_258;
#line 96
label_161:
;
#line 97
goto label_258;
#line 97
label_163:
;
#line 98
goto label_258;
#line 98
label_165:
;
#line 99
goto label_258;
#line 99
label_167:
;
#line 100
goto label_258;
#line 100
label_169:
;
#line 100
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 100
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 101
goto label_258;
#line 101
label_173:
;
#line 101
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(14)));
#line 101
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 102
c_rt_lib0move(&___nl__im__54, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 102
___nl__bool__53 = c_rt_lib0ne(___nl__im__0, ___nl__im__54);
#line 102
c_rt_lib0clear(&___nl__im__54);
#line 102
___nl__bool__53 = !___nl__bool__53;
#line 102
if(___nl__bool__53){ goto label_191;}
#line 102
c_rt_lib0move(&___nl__im__55,___get_global_string_const(715));
#line 102
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__55));
#line 102
c_rt_lib0move(&___nl__im__56, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 102
c_rt_lib0delete(array0push(&___nl__im__55, ___nl__im__56));
#line 102
c_rt_lib0move(&___nl__string__57,___get_global_string_const(715));
#line 102
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__57, ___nl__im__55));
#line 102
c_rt_lib0clear(&___nl__im__55);
#line 102
c_rt_lib0clear(&___nl__im__56);
#line 102
c_rt_lib0clear(&___nl__string__57);
#line 102
goto label_191;
#line 102
label_191:
;
#line 102
//clear ___nl__bool__53;
#line 103
c_rt_lib0move(&___nl__im__61, c_rt_lib0init_iter(___nl__im__51));
#line 103
label_194:
;
#line 103
___nl__bool__59 = c_rt_lib0is_end_hash(___nl__im__61);
#line 103
if(___nl__bool__59){ goto label_254;}
#line 103
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_key_iter(___nl__im__61));
#line 103
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__51, ___nl__im__58));
#line 104
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(28));
#line 104
if(___nl__bool__62){ goto label_206;}
#line 110
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(29));
#line 110
if(___nl__bool__62){ goto label_245;}
#line 110
c_rt_lib0move(&___nl__im__63,___get_global_string_const(16));
#line 110
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(2, ___nl__im__63, ___nl__im__60));
#line 110
nl_die_arg(___nl__im__63);
#line 104
label_206:
;
#line 104
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__60, ___get_global_string_const(28)));
#line 104
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 105
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(6));
#line 105
if(___nl__bool__66){ goto label_212;}
#line 105
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(2));
#line 105
label_212:
;
#line 105
if(___nl__bool__66){ goto label_215;}
#line 106
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(14));
#line 106
label_215:
;
#line 106
if(___nl__bool__66){ goto label_218;}
#line 106
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(4));
#line 106
label_218:
;
#line 106
if(___nl__bool__66){ goto label_221;}
#line 107
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(7));
#line 107
label_221:
;
#line 107
___nl__bool__66 = !___nl__bool__66;
#line 107
if(___nl__bool__66){ goto label_242;}
#line 108
c_rt_lib0move(&___nl__im__68, generator_c_struct_dependence_sort_priv0get_name(___nl__im__1));
#line 108
___nl__bool__67 = c_rt_lib0ne(___nl__im__0, ___nl__im__68);
#line 108
c_rt_lib0clear(&___nl__im__68);
#line 108
___nl__bool__67 = !___nl__bool__67;
#line 108
if(___nl__bool__67){ goto label_239;}
#line 108
c_rt_lib0move(&___nl__im__69,___get_global_string_const(714));
#line 108
c_rt_lib0move(&___nl__im__69, c_rt_lib0get_ref_hash((*___ref___im__2), ___nl__im__69));
#line 108
c_rt_lib0move(&___nl__im__70, generator_c_struct_dependence_sort_priv0get_name(___nl__im__64));
#line 108
c_rt_lib0delete(array0push(&___nl__im__69, ___nl__im__70));
#line 108
c_rt_lib0move(&___nl__string__71,___get_global_string_const(714));
#line 108
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__2, ___nl__string__71, ___nl__im__69));
#line 108
c_rt_lib0clear(&___nl__im__69);
#line 108
c_rt_lib0clear(&___nl__im__70);
#line 108
c_rt_lib0clear(&___nl__string__71);
#line 108
goto label_239;
#line 108
label_239:
;
#line 108
//clear ___nl__bool__67;
#line 109
goto label_242;
#line 109
label_242:
;
#line 109
//clear ___nl__bool__66;
#line 110
goto label_247;
#line 110
label_245:
;
#line 111
goto label_247;
#line 111
label_247:
;
#line 111
//clear ___nl__bool__62;
#line 111
c_rt_lib0clear(&___nl__im__63);
#line 111
c_rt_lib0clear(&___nl__im__64);
#line 111
c_rt_lib0clear(&___nl__im__65);
#line 112
c_rt_lib0move(&___nl__im__61, c_rt_lib0next_iter(___nl__im__61));
#line 112
goto label_194;
#line 112
label_254:
;
#line 113
goto label_258;
#line 113
label_256:
;
#line 114
goto label_258;
#line 114
label_258:
;
#line 114
c_rt_lib0clear(&___nl__im__0);
#line 114
c_rt_lib0clear(&___nl__im__1);
#line 114
c_rt_lib0clear(&___nl__im__3);
#line 114
//clear ___nl__bool__4;
#line 114
c_rt_lib0clear(&___nl__im__5);
#line 114
c_rt_lib0clear(&___nl__im__6);
#line 114
c_rt_lib0clear(&___nl__im__7);
#line 114
c_rt_lib0clear(&___nl__im__8);
#line 114
c_rt_lib0clear(&___nl__im__9);
#line 114
c_rt_lib0clear(&___nl__im__16);
#line 114
c_rt_lib0clear(&___nl__im__17);
#line 114
c_rt_lib0clear(&___nl__im__18);
#line 114
c_rt_lib0clear(&___nl__im__19);
#line 114
c_rt_lib0clear(&___nl__im__26);
#line 114
c_rt_lib0clear(&___nl__im__27);
#line 114
c_rt_lib0clear(&___nl__im__28);
#line 114
c_rt_lib0clear(&___nl__im__29);
#line 114
c_rt_lib0clear(&___nl__im__35);
#line 114
//clear ___nl__bool__36;
#line 114
c_rt_lib0clear(&___nl__im__37);
#line 114
c_rt_lib0clear(&___nl__im__38);
#line 114
c_rt_lib0clear(&___nl__im__40);
#line 114
c_rt_lib0clear(&___nl__im__41);
#line 114
c_rt_lib0clear(&___nl__im__49);
#line 114
c_rt_lib0clear(&___nl__im__50);
#line 114
c_rt_lib0clear(&___nl__im__51);
#line 114
c_rt_lib0clear(&___nl__im__52);
#line 114
c_rt_lib0clear(&___nl__im__58);
#line 114
//clear ___nl__bool__59;
#line 114
c_rt_lib0clear(&___nl__im__60);
#line 114
c_rt_lib0clear(&___nl__im__61);
#line 114
//clear ___nl__bool__62;
#line 114
c_rt_lib0clear(&___nl__im__63);
#line 114
c_rt_lib0clear(&___nl__im__64);
#line 114
c_rt_lib0clear(&___nl__im__65);
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
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 118
if(___nl__bool__1){ goto label_35;}
#line 119
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 119
if(___nl__bool__1){ goto label_37;}
#line 120
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 120
if(___nl__bool__1){ goto label_41;}
#line 121
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 121
if(___nl__bool__1){ goto label_45;}
#line 122
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 122
if(___nl__bool__1){ goto label_49;}
#line 123
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 123
if(___nl__bool__1){ goto label_53;}
#line 124
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 124
if(___nl__bool__1){ goto label_57;}
#line 126
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 126
if(___nl__bool__1){ goto label_78;}
#line 127
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 127
if(___nl__bool__1){ goto label_82;}
#line 128
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 128
if(___nl__bool__1){ goto label_84;}
#line 129
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 129
if(___nl__bool__1){ goto label_86;}
#line 130
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 130
if(___nl__bool__1){ goto label_88;}
#line 131
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 131
if(___nl__bool__1){ goto label_90;}
#line 132
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 132
if(___nl__bool__1){ goto label_92;}
#line 133
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 133
if(___nl__bool__1){ goto label_96;}
#line 135
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 135
if(___nl__bool__1){ goto label_124;}
#line 135
c_rt_lib0move(&___nl__im__2,___get_global_string_const(16));
#line 135
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 135
nl_die_arg(___nl__im__2);
#line 118
label_35:
;
#line 119
goto label_126;
#line 119
label_37:
;
#line 119
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 119
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 120
goto label_126;
#line 120
label_41:
;
#line 120
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 120
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 121
goto label_126;
#line 121
label_45:
;
#line 121
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 121
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 122
goto label_126;
#line 122
label_49:
;
#line 122
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 122
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 123
goto label_126;
#line 123
label_53:
;
#line 123
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 123
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 124
goto label_126;
#line 124
label_57:
;
#line 124
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
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
goto label_126;
#line 126
label_78:
;
#line 126
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 126
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 127
goto label_126;
#line 127
label_82:
;
#line 128
goto label_126;
#line 128
label_84:
;
#line 129
goto label_126;
#line 129
label_86:
;
#line 130
goto label_126;
#line 130
label_88:
;
#line 131
goto label_126;
#line 131
label_90:
;
#line 132
goto label_126;
#line 132
label_92:
;
#line 132
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 132
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 133
goto label_126;
#line 133
label_96:
;
#line 133
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
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
goto label_126;
#line 135
label_124:
;
#line 136
goto label_126;
#line 136
label_126:
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
#line 141
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0move(&___nl__im__6, c_rt_lib0init_iter(___nl__im__0));
#line 142
label_2:
;
#line 142
___nl__bool__4 = c_rt_lib0is_end_hash(___nl__im__6);
#line 142
if(___nl__bool__4){ goto label_21;}
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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_string_const(714), ___nl__im__8, ___get_global_string_const(715), ___nl__im__9, ___get_global_string_const(716), ___nl__im__11, ___get_global_string_const(205), ___nl__im__5));
#line 144
c_rt_lib0clear(&___nl__im__8);
#line 144
c_rt_lib0clear(&___nl__im__9);
#line 144
//clear ___nl__bool__10;
#line 144
c_rt_lib0clear(&___nl__im__11);
#line 145
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0get_required_types_list(___nl__im__3, ___nl__im__5, &___nl__im__7, ___nl__im__1));
#line 146
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__3, ___nl__im__7));
#line 146
c_rt_lib0clear(&___nl__im__7);
#line 147
c_rt_lib0move(&___nl__im__6, c_rt_lib0next_iter(___nl__im__6));
#line 147
goto label_2;
#line 147
label_21:
;
#line 148
c_rt_lib0copy(&___nl__im__12, ___nl__im__2);
#line 149
c_rt_lib0move(&___nl__im__16, c_rt_lib0init_iter(___nl__im__12));
#line 149
label_24:
;
#line 149
___nl__bool__14 = c_rt_lib0is_end_hash(___nl__im__16);
#line 149
if(___nl__bool__14){ goto label_48;}
#line 149
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_key_iter(___nl__im__16));
#line 149
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value(___nl__im__12, ___nl__im__13));
#line 150
c_rt_lib0copy(&___nl__im__17, ___nl__im__15);
#line 151
c_rt_lib0move(&___nl__im__18,___get_global_string_const(714));
#line 151
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash(___nl__im__17, ___nl__im__18));
#line 151
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__18));
#line 151
c_rt_lib0move(&___nl__string__19,___get_global_string_const(714));
#line 151
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__17, ___nl__string__19, ___nl__im__18));
#line 151
c_rt_lib0clear(&___nl__im__18);
#line 151
c_rt_lib0clear(&___nl__string__19);
#line 152
c_rt_lib0move(&___nl__im__20,___get_global_string_const(715));
#line 152
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__17, ___nl__im__20));
#line 152
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0remove_dups(&___nl__im__20));
#line 152
c_rt_lib0move(&___nl__string__21,___get_global_string_const(715));
#line 152
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__17, ___nl__string__21, ___nl__im__20));
#line 152
c_rt_lib0clear(&___nl__im__20);
#line 152
c_rt_lib0clear(&___nl__string__21);
#line 153
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__13, ___nl__im__17));
#line 153
c_rt_lib0clear(&___nl__im__17);
#line 154
c_rt_lib0move(&___nl__im__16, c_rt_lib0next_iter(___nl__im__16));
#line 154
goto label_24;
#line 154
label_48:
;
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
//clear ___nl__bool__4;
#line 155
c_rt_lib0clear(&___nl__im__5);
#line 155
c_rt_lib0clear(&___nl__im__6);
#line 155
c_rt_lib0clear(&___nl__im__7);
#line 155
c_rt_lib0clear(&___nl__im__12);
#line 155
c_rt_lib0clear(&___nl__im__13);
#line 155
//clear ___nl__bool__14;
#line 155
c_rt_lib0clear(&___nl__im__15);
#line 155
c_rt_lib0clear(&___nl__im__16);
#line 155
c_rt_lib0clear(&___nl__im__17);
#line 155
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
#line 159
c_rt_lib0delete(array0sort(___ref___im__0));
#line 160
___nl__int__1 = 0;
#line 161
label_2:
;
#line 162
___nl__int__4 = c_rt_lib0array_len((*___ref___im__0));
#line 162
___nl__int__5 = 1;
#line 162
___nl__int__3 = ___nl__int__4 - ___nl__int__5;
#line 162
//clear ___nl__int__4;
#line 162
//clear ___nl__int__5;
#line 162
___nl__int__6 = ___nl__int__1 >= ___nl__int__3;
#line 162
___nl__bool__2 = ___nl__int__6;
#line 162
//clear ___nl__int__3;
#line 162
//clear ___nl__int__6;
#line 162
___nl__bool__2 = !___nl__bool__2;
#line 162
if(___nl__bool__2){ goto label_17;}
#line 163
//clear ___nl__bool__2;
#line 163
goto label_43;
#line 164
goto label_17;
#line 164
label_17:
;
#line 165
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get((*___ref___im__0), ___nl__int__1));
#line 165
___nl__int__11 = 1;
#line 165
___nl__int__10 = ___nl__int__1 + ___nl__int__11;
#line 165
//clear ___nl__int__11;
#line 165
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get((*___ref___im__0), ___nl__int__10));
#line 165
//clear ___nl__int__10;
#line 165
___nl__bool__7 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 165
c_rt_lib0clear(&___nl__im__8);
#line 165
c_rt_lib0clear(&___nl__im__9);
#line 165
___nl__bool__7 = !___nl__bool__7;
#line 165
if(___nl__bool__7){ goto label_35;}
#line 166
___nl__int__13 = 1;
#line 166
___nl__int__12 = ___nl__int__1 + ___nl__int__13;
#line 166
//clear ___nl__int__13;
#line 166
c_rt_lib0delete(array0remove(___ref___im__0, ___nl__int__12));
#line 166
//clear ___nl__int__12;
#line 167
goto label_40;
#line 167
label_35:
;
#line 168
___nl__int__14 = 1;
#line 168
___nl__int__1 = ___nl__int__1 + ___nl__int__14;
#line 168
//clear ___nl__int__14;
#line 169
goto label_40;
#line 169
label_40:
;
#line 169
//clear ___nl__bool__7;
#line 161
goto label_2;
#line 161
label_43:
;
#line 161
//clear ___nl__int__1;
#line 161
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
#line 175
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(492));
#line 175
if(___nl__bool__2){ goto label_3;}
#line 175
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 175
label_3:
;
#line 175
___nl__bool__2 = !___nl__bool__2;
#line 175
if(___nl__bool__2){ goto label_12;}
#line 176
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 176
c_rt_lib0clear(&___nl__im__0);
#line 176
c_rt_lib0clear(&___nl__im__1);
#line 176
//clear ___nl__bool__2;
#line 176
return ___nl__im__3;
#line 177
goto label_12;
#line 177
label_12:
;
#line 177
//clear ___nl__bool__2;
#line 177
c_rt_lib0clear(&___nl__im__3);
#line 178
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(72));
#line 178
___nl__bool__4 = !___nl__bool__4;
#line 178
if(___nl__bool__4){ goto label_22;}
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
//clear ___nl__bool__4;
#line 179
return ___nl__im__1;
#line 180
goto label_22;
#line 180
label_22:
;
#line 180
//clear ___nl__bool__4;
#line 181
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(72));
#line 181
___nl__bool__5 = !___nl__bool__5;
#line 181
if(___nl__bool__5){ goto label_31;}
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
//clear ___nl__bool__5;
#line 182
return ___nl__im__0;
#line 183
goto label_31;
#line 183
label_31:
;
#line 183
//clear ___nl__bool__5;
#line 184
c_rt_lib0move(&___nl__im__7, ov0get_element(___nl__im__0));
#line 184
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__1));
#line 184
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 184
c_rt_lib0clear(&___nl__im__7);
#line 184
c_rt_lib0clear(&___nl__im__8);
#line 184
___nl__bool__6 = !___nl__bool__6;
#line 184
if(___nl__bool__6){ goto label_44;}
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
//clear ___nl__bool__6;
#line 185
return ___nl__im__0;
#line 186
goto label_44;
#line 186
label_44:
;
#line 186
//clear ___nl__bool__6;
#line 187
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
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
#line 192
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(72));
#line 192
if(___nl__bool__2){ goto label_3;}
#line 192
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(72));
#line 192
label_3:
;
#line 192
___nl__bool__2 = !___nl__bool__2;
#line 192
if(___nl__bool__2){ goto label_12;}
#line 193
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 193
c_rt_lib0clear(&___nl__im__0);
#line 193
c_rt_lib0clear(&___nl__im__1);
#line 193
//clear ___nl__bool__2;
#line 193
return ___nl__im__3;
#line 194
goto label_12;
#line 194
label_12:
;
#line 194
//clear ___nl__bool__2;
#line 194
c_rt_lib0clear(&___nl__im__3);
#line 195
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(492));
#line 195
___nl__bool__4 = !___nl__bool__4;
#line 195
if(___nl__bool__4){ goto label_22;}
#line 196
c_rt_lib0clear(&___nl__im__0);
#line 196
//clear ___nl__bool__4;
#line 196
return ___nl__im__1;
#line 197
goto label_22;
#line 197
label_22:
;
#line 197
//clear ___nl__bool__4;
#line 198
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 198
___nl__bool__5 = !___nl__bool__5;
#line 198
if(___nl__bool__5){ goto label_31;}
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
//clear ___nl__bool__5;
#line 199
return ___nl__im__0;
#line 200
goto label_31;
#line 200
label_31:
;
#line 200
//clear ___nl__bool__5;
#line 201
c_rt_lib0move(&___nl__im__7, ov0get_element(___nl__im__0));
#line 201
c_rt_lib0move(&___nl__im__8, ov0get_element(___nl__im__1));
#line 201
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 201
c_rt_lib0clear(&___nl__im__7);
#line 201
c_rt_lib0clear(&___nl__im__8);
#line 201
___nl__bool__6 = !___nl__bool__6;
#line 201
if(___nl__bool__6){ goto label_44;}
#line 202
c_rt_lib0clear(&___nl__im__1);
#line 202
//clear ___nl__bool__6;
#line 202
return ___nl__im__0;
#line 203
goto label_44;
#line 203
label_44:
;
#line 203
//clear ___nl__bool__6;
#line 204
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 204
c_rt_lib0clear(&___nl__im__0);
#line 204
c_rt_lib0clear(&___nl__im__1);
#line 204
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
#line 209
c_rt_lib0move(&___nl__im__3, ov0get_element(___nl__im__0));
#line 209
c_rt_lib0move(&___nl__im__4, ov0get_element(___nl__im__1));
#line 209
___nl__bool__2 = c_rt_lib0eq(___nl__im__3, ___nl__im__4);
#line 209
c_rt_lib0clear(&___nl__im__3);
#line 209
c_rt_lib0clear(&___nl__im__4);
#line 209
___nl__bool__2 = !___nl__bool__2;
#line 209
if(___nl__bool__2){ goto label_13;}
#line 210
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 210
c_rt_lib0clear(&___nl__im__0);
#line 210
c_rt_lib0clear(&___nl__im__1);
#line 210
//clear ___nl__bool__2;
#line 210
return ___nl__im__5;
#line 211
goto label_13;
#line 211
label_13:
;
#line 211
//clear ___nl__bool__2;
#line 211
c_rt_lib0clear(&___nl__im__5);
#line 212
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(72));
#line 212
___nl__bool__6 = !___nl__bool__6;
#line 212
if(___nl__bool__6){ goto label_25;}
#line 213
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 213
c_rt_lib0clear(&___nl__im__0);
#line 213
c_rt_lib0clear(&___nl__im__1);
#line 213
//clear ___nl__bool__6;
#line 213
return ___nl__im__7;
#line 214
goto label_25;
#line 214
label_25:
;
#line 214
//clear ___nl__bool__6;
#line 214
c_rt_lib0clear(&___nl__im__7);
#line 215
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(72));
#line 215
___nl__bool__8 = !___nl__bool__8;
#line 215
if(___nl__bool__8){ goto label_35;}
#line 216
c_rt_lib0clear(&___nl__im__1);
#line 216
//clear ___nl__bool__8;
#line 216
return ___nl__im__0;
#line 217
goto label_35;
#line 217
label_35:
;
#line 217
//clear ___nl__bool__8;
#line 218
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 218
___nl__bool__9 = !___nl__bool__9;
#line 218
if(___nl__bool__9){ goto label_46;}
#line 219
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
c_rt_lib0clear(&___nl__im__1);
#line 219
//clear ___nl__bool__9;
#line 219
return ___nl__im__10;
#line 220
goto label_46;
#line 220
label_46:
;
#line 220
//clear ___nl__bool__9;
#line 220
c_rt_lib0clear(&___nl__im__10);
#line 221
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(492));
#line 221
___nl__bool__11 = !___nl__bool__11;
#line 221
if(___nl__bool__11){ goto label_71;}
#line 222
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(718));
#line 222
___nl__bool__12 = !___nl__bool__12;
#line 222
if(___nl__bool__12){ goto label_62;}
#line 223
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(719)));
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
//clear ___nl__bool__11;
#line 223
//clear ___nl__bool__12;
#line 223
return ___nl__im__13;
#line 224
goto label_62;
#line 224
label_62:
;
#line 224
//clear ___nl__bool__12;
#line 224
c_rt_lib0clear(&___nl__im__13);
#line 225
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(718)));
#line 225
c_rt_lib0clear(&___nl__im__0);
#line 225
c_rt_lib0clear(&___nl__im__1);
#line 225
//clear ___nl__bool__11;
#line 225
return ___nl__im__14;
#line 226
goto label_71;
#line 226
label_71:
;
#line 226
//clear ___nl__bool__11;
#line 226
c_rt_lib0clear(&___nl__im__14);
#line 227
c_rt_lib0clear(&___nl__im__1);
#line 227
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
#line 232
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(492));
#line 232
___nl__bool__2 = !___nl__bool__2;
#line 232
if(___nl__bool__2){ goto label_9;}
#line 233
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(492), ___nl__im__0));
#line 233
c_rt_lib0clear(&___nl__im__0);
#line 233
c_rt_lib0clear(&___nl__im__1);
#line 233
//clear ___nl__bool__2;
#line 233
return ___nl__im__3;
#line 234
goto label_9;
#line 234
label_9:
;
#line 234
//clear ___nl__bool__2;
#line 234
c_rt_lib0clear(&___nl__im__3);
#line 235
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(718));
#line 235
___nl__bool__4 = !___nl__bool__4;
#line 235
if(___nl__bool__4){ goto label_21;}
#line 236
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(491), ___nl__im__0));
#line 236
c_rt_lib0clear(&___nl__im__0);
#line 236
c_rt_lib0clear(&___nl__im__1);
#line 236
//clear ___nl__bool__4;
#line 236
return ___nl__im__5;
#line 237
goto label_21;
#line 237
label_21:
;
#line 237
//clear ___nl__bool__4;
#line 237
c_rt_lib0clear(&___nl__im__5);
#line 238
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(719));
#line 238
___nl__bool__6 = !___nl__bool__6;
#line 238
if(___nl__bool__6){ goto label_33;}
#line 239
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(490), ___nl__im__0));
#line 239
c_rt_lib0clear(&___nl__im__0);
#line 239
c_rt_lib0clear(&___nl__im__1);
#line 239
//clear ___nl__bool__6;
#line 239
return ___nl__im__7;
#line 240
goto label_33;
#line 240
label_33:
;
#line 240
//clear ___nl__bool__6;
#line 240
c_rt_lib0clear(&___nl__im__7);
#line 241
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(0));
#line 241
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
#line 251
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(490));
#line 251
if(___nl__bool__8){ goto label_9;}
#line 254
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(491));
#line 254
if(___nl__bool__8){ goto label_15;}
#line 257
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(492));
#line 257
if(___nl__bool__8){ goto label_21;}
#line 257
c_rt_lib0move(&___nl__im__9,___get_global_string_const(16));
#line 257
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__4));
#line 257
nl_die_arg(___nl__im__9);
#line 251
label_9:
;
#line 251
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(490)));
#line 251
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 252
c_rt_lib0copy(&___nl__im__6, ___nl__im__10);
#line 253
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(719)));
#line 254
goto label_27;
#line 254
label_15:
;
#line 254
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(491)));
#line 254
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 255
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 256
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(718)));
#line 257
goto label_27;
#line 257
label_21:
;
#line 257
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(492)));
#line 257
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 258
c_rt_lib0copy(&___nl__im__6, ___nl__im__14);
#line 259
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 260
goto label_27;
#line 260
label_27:
;
#line 262
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 263
___nl__bool__17 = hash0has_key((*___ref___im__3), ___nl__im__6);
#line 263
___nl__bool__17 = !___nl__bool__17;
#line 263
if(___nl__bool__17){ goto label_63;}
#line 264
c_rt_lib0move(&___nl__im__16, hash0get_value((*___ref___im__3), ___nl__im__6));
#line 265
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(492));
#line 265
if(___nl__bool__18){ goto label_40;}
#line 265
c_rt_lib0move(&___nl__im__19, ov0get_element(___nl__im__16));
#line 265
c_rt_lib0move(&___nl__im__20, ov0get_element(___nl__im__7));
#line 265
___nl__bool__18 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 265
c_rt_lib0clear(&___nl__im__19);
#line 265
c_rt_lib0clear(&___nl__im__20);
#line 265
label_40:
;
#line 265
___nl__bool__18 = !___nl__bool__18;
#line 265
if(___nl__bool__18){ goto label_60;}
#line 266
c_rt_lib0clear(&___nl__im__0);
#line 266
c_rt_lib0clear(&___nl__im__4);
#line 266
c_rt_lib0clear(&___nl__im__6);
#line 266
c_rt_lib0clear(&___nl__im__7);
#line 266
//clear ___nl__bool__8;
#line 266
c_rt_lib0clear(&___nl__im__9);
#line 266
c_rt_lib0clear(&___nl__im__10);
#line 266
c_rt_lib0clear(&___nl__im__11);
#line 266
c_rt_lib0clear(&___nl__im__12);
#line 266
c_rt_lib0clear(&___nl__im__13);
#line 266
c_rt_lib0clear(&___nl__im__14);
#line 266
c_rt_lib0clear(&___nl__im__15);
#line 266
c_rt_lib0clear(&___nl__im__16);
#line 266
//clear ___nl__bool__17;
#line 266
//clear ___nl__bool__18;
#line 266
return NULL;
#line 267
goto label_60;
#line 267
label_60:
;
#line 267
//clear ___nl__bool__18;
#line 268
goto label_63;
#line 268
label_63:
;
#line 268
//clear ___nl__bool__17;
#line 269
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 270
___nl__bool__22 = hash0has_key((*___ref___im__2), ___nl__im__6);
#line 270
___nl__bool__22 = !___nl__bool__22;
#line 270
if(___nl__bool__22){ goto label_98;}
#line 271
c_rt_lib0move(&___nl__im__21, hash0get_value((*___ref___im__2), ___nl__im__6));
#line 272
c_rt_lib0move(&___nl__im__24, generator_c_struct_dependence_sort_priv0common_type(___nl__im__7, ___nl__im__21));
#line 272
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(72));
#line 272
c_rt_lib0clear(&___nl__im__24);
#line 272
___nl__bool__23 = !___nl__bool__23;
#line 272
___nl__bool__23 = !___nl__bool__23;
#line 272
if(___nl__bool__23){ goto label_95;}
#line 273
(*___ref___bool__5) = true;
#line 274
c_rt_lib0clear(&___nl__im__0);
#line 274
c_rt_lib0clear(&___nl__im__4);
#line 274
c_rt_lib0clear(&___nl__im__6);
#line 274
c_rt_lib0clear(&___nl__im__7);
#line 274
//clear ___nl__bool__8;
#line 274
c_rt_lib0clear(&___nl__im__9);
#line 274
c_rt_lib0clear(&___nl__im__10);
#line 274
c_rt_lib0clear(&___nl__im__11);
#line 274
c_rt_lib0clear(&___nl__im__12);
#line 274
c_rt_lib0clear(&___nl__im__13);
#line 274
c_rt_lib0clear(&___nl__im__14);
#line 274
c_rt_lib0clear(&___nl__im__15);
#line 274
c_rt_lib0clear(&___nl__im__16);
#line 274
c_rt_lib0clear(&___nl__im__21);
#line 274
//clear ___nl__bool__22;
#line 274
//clear ___nl__bool__23;
#line 274
return NULL;
#line 275
goto label_95;
#line 275
label_95:
;
#line 275
//clear ___nl__bool__23;
#line 276
goto label_98;
#line 276
label_98:
;
#line 276
//clear ___nl__bool__22;
#line 277
c_rt_lib0move(&___nl__im__27, hash0get_value(___nl__im__0, ___nl__im__6));
#line 277
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(716)));
#line 277
___nl__bool__25 = c_rt_lib0check_true_native(___nl__im__28);
#line 277
c_rt_lib0clear(&___nl__im__27);
#line 277
c_rt_lib0clear(&___nl__im__28);
#line 277
___nl__bool__26 = !___nl__bool__25;
#line 277
if(___nl__bool__26){ goto label_108;}
#line 277
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(718));
#line 277
label_108:
;
#line 277
//clear ___nl__bool__26;
#line 277
___nl__bool__25 = !___nl__bool__25;
#line 277
if(___nl__bool__25){ goto label_133;}
#line 278
c_rt_lib0move(&___nl__im__29, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 278
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__29));
#line 278
c_rt_lib0clear(&___nl__im__29);
#line 279
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__4));
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
c_rt_lib0clear(&___nl__im__21);
#line 280
//clear ___nl__bool__25;
#line 280
return NULL;
#line 281
goto label_133;
#line 281
label_133:
;
#line 281
//clear ___nl__bool__25;
#line 282
c_rt_lib0move(&___nl__im__31, hash0get_value(___nl__im__0, ___nl__im__6));
#line 282
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(716)));
#line 282
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__32);
#line 282
c_rt_lib0clear(&___nl__im__31);
#line 282
c_rt_lib0clear(&___nl__im__32);
#line 282
___nl__bool__30 = !___nl__bool__30;
#line 282
___nl__bool__30 = !___nl__bool__30;
#line 282
if(___nl__bool__30){ goto label_146;}
#line 283
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 284
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(492), ___nl__im__6));
#line 285
goto label_146;
#line 285
label_146:
;
#line 285
//clear ___nl__bool__30;
#line 286
c_rt_lib0move(&___nl__im__33, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__21));
#line 286
c_rt_lib0delete(hash0set_value(___ref___im__2, ___nl__im__6, ___nl__im__33));
#line 286
c_rt_lib0clear(&___nl__im__33);
#line 288
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(719));
#line 288
if(___nl__bool__34){ goto label_154;}
#line 288
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(492));
#line 288
label_154:
;
#line 288
___nl__bool__34 = !___nl__bool__34;
#line 288
if(___nl__bool__34){ goto label_196;}
#line 289
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__0, ___nl__im__6));
#line 289
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(714)));
#line 289
c_rt_lib0clear(&___nl__im__36);
#line 289
___nl__int__38 = 0;
#line 289
___nl__int__39 = 1;
#line 289
___nl__int__40 = c_rt_lib0array_len(___nl__im__35);
#line 289
label_163:
;
#line 289
___nl__int__42 = ___nl__int__38 >= ___nl__int__40;
#line 289
___nl__bool__41 = ___nl__int__42;
#line 289
if(___nl__bool__41){ goto label_175;}
#line 289
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__35, ___nl__int__38));
#line 289
c_rt_lib0copy(&___nl__im__37, ___nl__im__43);
#line 290
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(491), ___nl__im__37));
#line 290
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__44, ___ref___bool__5));
#line 290
c_rt_lib0clear(&___nl__im__44);
#line 290
c_rt_lib0clear(&___nl__im__37);
#line 291
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 291
goto label_163;
#line 291
label_175:
;
#line 293
c_rt_lib0move(&___nl__im__46, hash0get_value(___nl__im__0, ___nl__im__6));
#line 293
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(715)));
#line 293
c_rt_lib0clear(&___nl__im__46);
#line 293
___nl__int__48 = 0;
#line 293
___nl__int__49 = 1;
#line 293
___nl__int__50 = c_rt_lib0array_len(___nl__im__45);
#line 293
label_182:
;
#line 293
___nl__int__52 = ___nl__int__48 >= ___nl__int__50;
#line 293
___nl__bool__51 = ___nl__int__52;
#line 293
if(___nl__bool__51){ goto label_194;}
#line 293
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__45, ___nl__int__48));
#line 293
c_rt_lib0copy(&___nl__im__47, ___nl__im__53);
#line 294
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_string_const(492), ___nl__im__47));
#line 294
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, ___ref___im__1, ___ref___im__2, ___ref___im__3, ___nl__im__54, ___ref___bool__5));
#line 294
c_rt_lib0clear(&___nl__im__54);
#line 294
c_rt_lib0clear(&___nl__im__47);
#line 295
___nl__int__48 = ___nl__int__48 + ___nl__int__49;
#line 295
goto label_182;
#line 295
label_194:
;
#line 296
goto label_196;
#line 296
label_196:
;
#line 296
//clear ___nl__bool__34;
#line 296
c_rt_lib0clear(&___nl__im__35);
#line 296
c_rt_lib0clear(&___nl__im__37);
#line 296
//clear ___nl__int__38;
#line 296
//clear ___nl__int__39;
#line 296
//clear ___nl__int__40;
#line 296
//clear ___nl__bool__41;
#line 296
//clear ___nl__int__42;
#line 296
c_rt_lib0clear(&___nl__im__43);
#line 296
c_rt_lib0clear(&___nl__im__45);
#line 296
c_rt_lib0clear(&___nl__im__47);
#line 296
//clear ___nl__int__48;
#line 296
//clear ___nl__int__49;
#line 296
//clear ___nl__int__50;
#line 296
//clear ___nl__bool__51;
#line 296
//clear ___nl__int__52;
#line 296
c_rt_lib0clear(&___nl__im__53);
#line 298
c_rt_lib0move(&___nl__im__55, generator_c_struct_dependence_sort_priv0join_type(___nl__im__7, ___nl__im__16));
#line 298
c_rt_lib0delete(hash0set_value(___ref___im__3, ___nl__im__6, ___nl__im__55));
#line 298
c_rt_lib0clear(&___nl__im__55);
#line 299
c_rt_lib0move(&___nl__im__57, generator_c_struct_dependence_sort_priv0split_type(___nl__im__7, ___nl__im__16));
#line 299
c_rt_lib0move(&___nl__im__56, generator_c_struct_dependence_sort_priv0type_to_var(___nl__im__6, ___nl__im__57));
#line 299
c_rt_lib0clear(&___nl__im__57);
#line 299
c_rt_lib0delete(array0push(___ref___im__1, ___nl__im__56));
#line 299
c_rt_lib0clear(&___nl__im__56);
#line 300
c_rt_lib0delete(hash0delete(___ref___im__2, ___nl__im__6));
#line 300
c_rt_lib0clear(&___nl__im__0);
#line 300
c_rt_lib0clear(&___nl__im__4);
#line 300
c_rt_lib0clear(&___nl__im__6);
#line 300
c_rt_lib0clear(&___nl__im__7);
#line 300
//clear ___nl__bool__8;
#line 300
c_rt_lib0clear(&___nl__im__9);
#line 300
c_rt_lib0clear(&___nl__im__10);
#line 300
c_rt_lib0clear(&___nl__im__11);
#line 300
c_rt_lib0clear(&___nl__im__12);
#line 300
c_rt_lib0clear(&___nl__im__13);
#line 300
c_rt_lib0clear(&___nl__im__14);
#line 300
c_rt_lib0clear(&___nl__im__15);
#line 300
c_rt_lib0clear(&___nl__im__16);
#line 300
c_rt_lib0clear(&___nl__im__21);
#line 300
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
#line 305
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 306
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(0));
#line 307
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 308
___nl__bool__4 = false;
#line 309
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 309
label_5:
;
#line 309
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 309
if(___nl__bool__6){ goto label_15;}
#line 309
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 309
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 310
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(491), ___nl__im__5));
#line 310
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__9, &___nl__bool__4));
#line 310
c_rt_lib0clear(&___nl__im__9);
#line 311
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 311
goto label_5;
#line 311
label_15:
;
#line 312
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__0));
#line 312
label_17:
;
#line 312
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 312
if(___nl__bool__11){ goto label_27;}
#line 312
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 312
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__10));
#line 313
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(490), ___nl__im__10));
#line 313
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0sort_graph_help(___nl__im__0, &___nl__im__1, &___nl__im__2, &___nl__im__3, ___nl__im__14, &___nl__bool__4));
#line 313
c_rt_lib0clear(&___nl__im__14);
#line 314
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 314
goto label_17;
#line 314
label_27:
;
#line 315
___nl__bool__15 = ___nl__bool__4;
#line 315
___nl__bool__15 = !___nl__bool__15;
#line 315
if(___nl__bool__15){ goto label_48;}
#line 316
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_string_const(488)));
#line 316
c_rt_lib0clear(&___nl__im__0);
#line 316
c_rt_lib0clear(&___nl__im__1);
#line 316
c_rt_lib0clear(&___nl__im__2);
#line 316
c_rt_lib0clear(&___nl__im__3);
#line 316
//clear ___nl__bool__4;
#line 316
c_rt_lib0clear(&___nl__im__5);
#line 316
//clear ___nl__bool__6;
#line 316
c_rt_lib0clear(&___nl__im__7);
#line 316
c_rt_lib0clear(&___nl__im__8);
#line 316
c_rt_lib0clear(&___nl__im__10);
#line 316
//clear ___nl__bool__11;
#line 316
c_rt_lib0clear(&___nl__im__12);
#line 316
c_rt_lib0clear(&___nl__im__13);
#line 316
//clear ___nl__bool__15;
#line 316
return ___nl__im__16;
#line 317
goto label_48;
#line 317
label_48:
;
#line 317
//clear ___nl__bool__15;
#line 317
c_rt_lib0clear(&___nl__im__16);
#line 318
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 319
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 320
c_rt_lib0move(&___nl__im__22, c_rt_lib0init_iter(___nl__im__0));
#line 320
label_54:
;
#line 320
___nl__bool__20 = c_rt_lib0is_end_hash(___nl__im__22);
#line 320
if(___nl__bool__20){ goto label_64;}
#line 320
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_key_iter(___nl__im__22));
#line 320
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__19));
#line 321
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(205)));
#line 321
c_rt_lib0delete(hash0set_value(&___nl__im__18, ___nl__im__19, ___nl__im__23));
#line 321
c_rt_lib0clear(&___nl__im__23);
#line 322
c_rt_lib0move(&___nl__im__22, c_rt_lib0next_iter(___nl__im__22));
#line 322
goto label_54;
#line 322
label_64:
;
#line 323
___nl__int__25 = 0;
#line 323
___nl__int__26 = 1;
#line 323
___nl__int__27 = c_rt_lib0array_len(___nl__im__1);
#line 323
label_68:
;
#line 323
___nl__int__29 = ___nl__int__25 >= ___nl__int__27;
#line 323
___nl__bool__28 = ___nl__int__29;
#line 323
if(___nl__bool__28){ goto label_120;}
#line 323
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_get(___nl__im__1, ___nl__int__25));
#line 323
c_rt_lib0copy(&___nl__im__24, ___nl__im__30);
#line 324
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(492));
#line 324
if(___nl__bool__31){ goto label_83;}
#line 326
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(491));
#line 326
if(___nl__bool__31){ goto label_94;}
#line 328
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(490));
#line 328
if(___nl__bool__31){ goto label_105;}
#line 328
c_rt_lib0move(&___nl__im__32,___get_global_string_const(16));
#line 328
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(2, ___nl__im__32, ___nl__im__24));
#line 328
nl_die_arg(___nl__im__32);
#line 324
label_83:
;
#line 324
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(492)));
#line 324
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 325
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__18, ___nl__im__33));
#line 325
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_string_const(492)));
#line 325
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(167), ___nl__im__33, ___get_global_string_const(493), ___nl__im__36, ___get_global_string_const(489), ___nl__im__37));
#line 325
c_rt_lib0clear(&___nl__im__36);
#line 325
c_rt_lib0clear(&___nl__im__37);
#line 325
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__35));
#line 325
c_rt_lib0clear(&___nl__im__35);
#line 326
goto label_116;
#line 326
label_94:
;
#line 326
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(491)));
#line 326
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 327
c_rt_lib0move(&___nl__im__41, hash0get_value(___nl__im__18, ___nl__im__38));
#line 327
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(491)));
#line 327
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(3, ___get_global_string_const(167), ___nl__im__38, ___get_global_string_const(493), ___nl__im__41, ___get_global_string_const(489), ___nl__im__42));
#line 327
c_rt_lib0clear(&___nl__im__41);
#line 327
c_rt_lib0clear(&___nl__im__42);
#line 327
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__40));
#line 327
c_rt_lib0clear(&___nl__im__40);
#line 328
goto label_116;
#line 328
label_105:
;
#line 328
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(490)));
#line 328
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 329
c_rt_lib0move(&___nl__im__46, hash0get_value(___nl__im__18, ___nl__im__43));
#line 329
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_string_const(490)));
#line 329
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(3, ___get_global_string_const(167), ___nl__im__43, ___get_global_string_const(493), ___nl__im__46, ___get_global_string_const(489), ___nl__im__47));
#line 329
c_rt_lib0clear(&___nl__im__46);
#line 329
c_rt_lib0clear(&___nl__im__47);
#line 329
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__45));
#line 329
c_rt_lib0clear(&___nl__im__45);
#line 330
goto label_116;
#line 330
label_116:
;
#line 330
c_rt_lib0clear(&___nl__im__24);
#line 331
___nl__int__25 = ___nl__int__25 + ___nl__int__26;
#line 331
goto label_68;
#line 331
label_120:
;
#line 332
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(487), ___nl__im__17));
#line 332
c_rt_lib0clear(&___nl__im__0);
#line 332
c_rt_lib0clear(&___nl__im__1);
#line 332
c_rt_lib0clear(&___nl__im__2);
#line 332
c_rt_lib0clear(&___nl__im__3);
#line 332
//clear ___nl__bool__4;
#line 332
c_rt_lib0clear(&___nl__im__5);
#line 332
//clear ___nl__bool__6;
#line 332
c_rt_lib0clear(&___nl__im__7);
#line 332
c_rt_lib0clear(&___nl__im__8);
#line 332
c_rt_lib0clear(&___nl__im__10);
#line 332
//clear ___nl__bool__11;
#line 332
c_rt_lib0clear(&___nl__im__12);
#line 332
c_rt_lib0clear(&___nl__im__13);
#line 332
c_rt_lib0clear(&___nl__im__17);
#line 332
c_rt_lib0clear(&___nl__im__18);
#line 332
c_rt_lib0clear(&___nl__im__19);
#line 332
//clear ___nl__bool__20;
#line 332
c_rt_lib0clear(&___nl__im__21);
#line 332
c_rt_lib0clear(&___nl__im__22);
#line 332
c_rt_lib0clear(&___nl__im__24);
#line 332
//clear ___nl__int__25;
#line 332
//clear ___nl__int__26;
#line 332
//clear ___nl__int__27;
#line 332
//clear ___nl__bool__28;
#line 332
//clear ___nl__int__29;
#line 332
c_rt_lib0clear(&___nl__im__30);
#line 332
//clear ___nl__bool__31;
#line 332
c_rt_lib0clear(&___nl__im__32);
#line 332
c_rt_lib0clear(&___nl__im__33);
#line 332
c_rt_lib0clear(&___nl__im__34);
#line 332
c_rt_lib0clear(&___nl__im__38);
#line 332
c_rt_lib0clear(&___nl__im__39);
#line 332
c_rt_lib0clear(&___nl__im__43);
#line 332
c_rt_lib0clear(&___nl__im__44);
#line 332
return ___nl__im__48;
return NULL;

}

ImmT  generator_c_struct_dependence_sort_priv0anon_add(tct0meta_type0type ___nl__im__0,ImmT * ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_struct_dependence_sort_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
#line 336
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 336
if(___nl__bool__2){ goto label_3;}
#line 336
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 336
label_3:
;
#line 336
if(___nl__bool__2){ goto label_6;}
#line 336
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 336
label_6:
;
#line 336
if(___nl__bool__2){ goto label_9;}
#line 336
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 336
label_9:
;
#line 336
___nl__bool__2 = !___nl__bool__2;
#line 336
if(___nl__bool__2){ goto label_26;}
#line 337
c_rt_lib0move(&___nl__im__3, anon_naming0get_anon_name(___nl__im__0));
#line 338
___nl__bool__4 = hash0has_key((*___ref___im__1), ___nl__im__3);
#line 338
___nl__bool__4 = !___nl__bool__4;
#line 338
if(___nl__bool__4){ goto label_22;}
#line 339
c_rt_lib0clear(&___nl__im__0);
#line 339
//clear ___nl__bool__2;
#line 339
c_rt_lib0clear(&___nl__im__3);
#line 339
//clear ___nl__bool__4;
#line 339
return NULL;
#line 340
goto label_22;
#line 340
label_22:
;
#line 340
//clear ___nl__bool__4;
#line 341
c_rt_lib0delete(hash0set_value(___ref___im__1, ___nl__im__3, ___nl__im__0));
#line 342
goto label_26;
#line 342
label_26:
;
#line 342
//clear ___nl__bool__2;
#line 342
c_rt_lib0clear(&___nl__im__3);
#line 342
c_rt_lib0clear(&___nl__im__0);
#line 342
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
#line 346
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 346
___nl__bool__2 = !___nl__bool__2;
#line 346
if(___nl__bool__2){ goto label_16;}
#line 347
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 347
c_rt_lib0move(&___nl__im__7, c_rt_lib0init_iter(___nl__im__3));
#line 347
label_5:
;
#line 347
___nl__bool__5 = c_rt_lib0is_end_hash(___nl__im__7);
#line 347
if(___nl__bool__5){ goto label_13;}
#line 347
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_key_iter(___nl__im__7));
#line 347
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value(___nl__im__3, ___nl__im__4));
#line 348
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__6, ___ref___im__1));
#line 349
c_rt_lib0move(&___nl__im__7, c_rt_lib0next_iter(___nl__im__7));
#line 349
goto label_5;
#line 349
label_13:
;
#line 350
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 351
goto label_69;
#line 351
label_16:
;
#line 351
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 351
___nl__bool__2 = !___nl__bool__2;
#line 351
if(___nl__bool__2){ goto label_25;}
#line 352
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 352
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__8, ___ref___im__1));
#line 352
c_rt_lib0clear(&___nl__im__8);
#line 353
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 354
goto label_69;
#line 354
label_25:
;
#line 354
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 354
___nl__bool__2 = !___nl__bool__2;
#line 354
if(___nl__bool__2){ goto label_60;}
#line 355
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 355
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__9));
#line 355
label_31:
;
#line 355
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 355
if(___nl__bool__11){ goto label_57;}
#line 355
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 355
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__10));
#line 356
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(28));
#line 356
if(___nl__bool__14){ goto label_43;}
#line 358
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(29));
#line 358
if(___nl__bool__14){ goto label_48;}
#line 358
c_rt_lib0move(&___nl__im__15,___get_global_string_const(16));
#line 358
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 358
nl_die_arg(___nl__im__15);
#line 356
label_43:
;
#line 356
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(28)));
#line 356
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 357
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__16, ___ref___im__1));
#line 358
goto label_50;
#line 358
label_48:
;
#line 359
goto label_50;
#line 359
label_50:
;
#line 359
//clear ___nl__bool__14;
#line 359
c_rt_lib0clear(&___nl__im__15);
#line 359
c_rt_lib0clear(&___nl__im__16);
#line 359
c_rt_lib0clear(&___nl__im__17);
#line 360
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 360
goto label_31;
#line 360
label_57:
;
#line 361
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 362
goto label_69;
#line 362
label_60:
;
#line 362
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 362
___nl__bool__2 = !___nl__bool__2;
#line 362
if(___nl__bool__2){ goto label_69;}
#line 363
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 363
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, ___ref___im__1));
#line 363
c_rt_lib0clear(&___nl__im__18);
#line 364
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0anon_add(___nl__im__0, ___ref___im__1));
#line 365
goto label_69;
#line 365
label_69:
;
#line 365
//clear ___nl__bool__2;
#line 365
c_rt_lib0clear(&___nl__im__3);
#line 365
c_rt_lib0clear(&___nl__im__4);
#line 365
//clear ___nl__bool__5;
#line 365
c_rt_lib0clear(&___nl__im__6);
#line 365
c_rt_lib0clear(&___nl__im__7);
#line 365
c_rt_lib0clear(&___nl__im__9);
#line 365
c_rt_lib0clear(&___nl__im__10);
#line 365
//clear ___nl__bool__11;
#line 365
c_rt_lib0clear(&___nl__im__12);
#line 365
c_rt_lib0clear(&___nl__im__13);
#line 365
//clear ___nl__bool__14;
#line 365
c_rt_lib0clear(&___nl__im__15);
#line 365
c_rt_lib0clear(&___nl__im__16);
#line 365
c_rt_lib0clear(&___nl__im__17);
#line 365
c_rt_lib0clear(&___nl__im__0);
#line 365
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
#line 369
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 370
___nl__int__3 = 0;
#line 370
___nl__int__4 = 1;
#line 370
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 370
label_4:
;
#line 370
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 370
___nl__bool__6 = ___nl__int__7;
#line 370
if(___nl__bool__6){ goto label_120;}
#line 370
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 370
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 371
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(466)));
#line 371
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__9, &___nl__im__1));
#line 371
c_rt_lib0clear(&___nl__im__9);
#line 372
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(214)));
#line 372
___nl__int__12 = 0;
#line 372
___nl__int__13 = 1;
#line 372
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 372
label_17:
;
#line 372
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 372
___nl__bool__15 = ___nl__int__16;
#line 372
if(___nl__bool__15){ goto label_29;}
#line 372
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 372
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 373
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(205)));
#line 373
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__18, &___nl__im__1));
#line 373
c_rt_lib0clear(&___nl__im__18);
#line 373
c_rt_lib0clear(&___nl__im__11);
#line 374
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 374
goto label_17;
#line 374
label_29:
;
#line 375
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(215)));
#line 375
___nl__int__21 = 0;
#line 375
___nl__int__22 = 1;
#line 375
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 375
label_34:
;
#line 375
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 375
___nl__bool__24 = ___nl__int__25;
#line 375
if(___nl__bool__24){ goto label_100;}
#line 375
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 375
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 376
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 376
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(551));
#line 376
c_rt_lib0clear(&___nl__im__28);
#line 376
___nl__bool__27 = !___nl__bool__27;
#line 376
if(___nl__bool__27){ goto label_53;}
#line 377
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 377
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 377
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(551)));
#line 377
c_rt_lib0clear(&___nl__im__30);
#line 377
c_rt_lib0clear(&___nl__im__31);
#line 377
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__29, &___nl__im__1));
#line 377
c_rt_lib0clear(&___nl__im__29);
#line 378
goto label_95;
#line 378
label_53:
;
#line 378
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 378
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(128));
#line 378
c_rt_lib0clear(&___nl__im__32);
#line 378
___nl__bool__27 = !___nl__bool__27;
#line 378
if(___nl__bool__27){ goto label_67;}
#line 379
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 379
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 379
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(128)));
#line 379
c_rt_lib0clear(&___nl__im__34);
#line 379
c_rt_lib0clear(&___nl__im__35);
#line 379
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__33, &___nl__im__1));
#line 379
c_rt_lib0clear(&___nl__im__33);
#line 380
goto label_95;
#line 380
label_67:
;
#line 380
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 380
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__36, ___get_global_string_const(554));
#line 380
c_rt_lib0clear(&___nl__im__36);
#line 380
___nl__bool__27 = !___nl__bool__27;
#line 380
if(___nl__bool__27){ goto label_81;}
#line 381
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 381
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 381
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__39, ___get_global_string_const(554)));
#line 381
c_rt_lib0clear(&___nl__im__38);
#line 381
c_rt_lib0clear(&___nl__im__39);
#line 381
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__37, &___nl__im__1));
#line 381
c_rt_lib0clear(&___nl__im__37);
#line 382
goto label_95;
#line 382
label_81:
;
#line 382
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 382
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(129));
#line 382
c_rt_lib0clear(&___nl__im__40);
#line 382
___nl__bool__27 = !___nl__bool__27;
#line 382
if(___nl__bool__27){ goto label_95;}
#line 383
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 383
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 383
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__43, ___get_global_string_const(129)));
#line 383
c_rt_lib0clear(&___nl__im__42);
#line 383
c_rt_lib0clear(&___nl__im__43);
#line 383
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__41, &___nl__im__1));
#line 383
c_rt_lib0clear(&___nl__im__41);
#line 384
goto label_95;
#line 384
label_95:
;
#line 384
//clear ___nl__bool__27;
#line 384
c_rt_lib0clear(&___nl__im__20);
#line 385
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 385
goto label_34;
#line 385
label_100:
;
#line 386
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(166)));
#line 386
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(77));
#line 386
if(___nl__bool__45){ goto label_109;}
#line 387
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(76));
#line 387
if(___nl__bool__45){ goto label_111;}
#line 387
c_rt_lib0move(&___nl__im__46,___get_global_string_const(16));
#line 387
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__44));
#line 387
nl_die_arg(___nl__im__46);
#line 386
label_109:
;
#line 387
goto label_116;
#line 387
label_111:
;
#line 387
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__44, ___get_global_string_const(76)));
#line 387
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 388
c_rt_lib0delete(generator_c_struct_dependence_sort_priv0deep_anon_add(___nl__im__47, &___nl__im__1));
#line 389
goto label_116;
#line 389
label_116:
;
#line 389
c_rt_lib0clear(&___nl__im__2);
#line 390
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 390
goto label_4;
#line 390
label_120:
;
#line 391
c_rt_lib0clear(&___nl__im__0);
#line 391
c_rt_lib0clear(&___nl__im__2);
#line 391
//clear ___nl__int__3;
#line 391
//clear ___nl__int__4;
#line 391
//clear ___nl__int__5;
#line 391
//clear ___nl__bool__6;
#line 391
//clear ___nl__int__7;
#line 391
c_rt_lib0clear(&___nl__im__8);
#line 391
c_rt_lib0clear(&___nl__im__10);
#line 391
c_rt_lib0clear(&___nl__im__11);
#line 391
//clear ___nl__int__12;
#line 391
//clear ___nl__int__13;
#line 391
//clear ___nl__int__14;
#line 391
//clear ___nl__bool__15;
#line 391
//clear ___nl__int__16;
#line 391
c_rt_lib0clear(&___nl__im__17);
#line 391
c_rt_lib0clear(&___nl__im__19);
#line 391
c_rt_lib0clear(&___nl__im__20);
#line 391
//clear ___nl__int__21;
#line 391
//clear ___nl__int__22;
#line 391
//clear ___nl__int__23;
#line 391
//clear ___nl__bool__24;
#line 391
//clear ___nl__int__25;
#line 391
c_rt_lib0clear(&___nl__im__26);
#line 391
c_rt_lib0clear(&___nl__im__44);
#line 391
//clear ___nl__bool__45;
#line 391
c_rt_lib0clear(&___nl__im__46);
#line 391
c_rt_lib0clear(&___nl__im__47);
#line 391
c_rt_lib0clear(&___nl__im__48);
#line 391
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
#line 395
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 396
___nl__int__3 = 0;
#line 396
___nl__int__4 = 1;
#line 396
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 396
label_4:
;
#line 396
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 396
___nl__bool__6 = ___nl__int__7;
#line 396
if(___nl__bool__6){ goto label_44;}
#line 396
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 396
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 397
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(209)));
#line 397
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(465));
#line 397
if(___nl__bool__10){ goto label_18;}
#line 398
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(210));
#line 398
if(___nl__bool__10){ goto label_20;}
#line 398
c_rt_lib0move(&___nl__im__11,___get_global_string_const(16));
#line 398
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 398
nl_die_arg(___nl__im__11);
#line 397
label_18:
;
#line 398
goto label_40;
#line 398
label_20:
;
#line 399
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(166)));
#line 399
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(76));
#line 399
if(___nl__bool__13){ goto label_29;}
#line 401
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(77));
#line 401
if(___nl__bool__13){ goto label_36;}
#line 401
c_rt_lib0move(&___nl__im__14,___get_global_string_const(16));
#line 401
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__14, ___nl__im__12));
#line 401
nl_die_arg(___nl__im__14);
#line 399
label_29:
;
#line 399
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(76)));
#line 399
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 400
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(167)));
#line 400
c_rt_lib0delete(hash0set_value(&___nl__im__1, ___nl__im__17, ___nl__im__15));
#line 400
c_rt_lib0clear(&___nl__im__17);
#line 401
goto label_38;
#line 401
label_36:
;
#line 402
goto label_38;
#line 402
label_38:
;
#line 403
goto label_40;
#line 403
label_40:
;
#line 403
c_rt_lib0clear(&___nl__im__2);
#line 404
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 404
goto label_4;
#line 404
label_44:
;
#line 405
c_rt_lib0clear(&___nl__im__0);
#line 405
c_rt_lib0clear(&___nl__im__2);
#line 405
//clear ___nl__int__3;
#line 405
//clear ___nl__int__4;
#line 405
//clear ___nl__int__5;
#line 405
//clear ___nl__bool__6;
#line 405
//clear ___nl__int__7;
#line 405
c_rt_lib0clear(&___nl__im__8);
#line 405
c_rt_lib0clear(&___nl__im__9);
#line 405
//clear ___nl__bool__10;
#line 405
c_rt_lib0clear(&___nl__im__11);
#line 405
c_rt_lib0clear(&___nl__im__12);
#line 405
//clear ___nl__bool__13;
#line 405
c_rt_lib0clear(&___nl__im__14);
#line 405
c_rt_lib0clear(&___nl__im__15);
#line 405
c_rt_lib0clear(&___nl__im__16);
#line 405
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
#line 410
c_rt_lib0move(&___nl__im__2, generator_c_struct_dependence_sort_priv0get_anons(___nl__im__0));
#line 411
c_rt_lib0move(&___nl__im__3, generator_c_struct_dependence_sort_priv0nlasm_to_type_hash(___nl__im__0));
#line 411
c_rt_lib0delete(hash0add_all(&___nl__im__2, ___nl__im__3));
#line 411
c_rt_lib0clear(&___nl__im__3);
#line 412
c_rt_lib0move(&___nl__im__4, generator_c_struct_dependence_sort_priv0in_funs_to_graph(___nl__im__2, ___nl__im__1));
#line 413
c_rt_lib0move(&___nl__im__5, generator_c_struct_dependence_sort_priv0sort_graph(___nl__im__4));
#line 413
c_rt_lib0clear(&___nl__im__0);
#line 413
c_rt_lib0clear(&___nl__im__1);
#line 413
c_rt_lib0clear(&___nl__im__2);
#line 413
c_rt_lib0clear(&___nl__im__4);
#line 413
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
