
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "nast.h"
#include "hash.h"
#include "ptd.h"
#include "singleton.h"
#include "tct.h"
#include "tct.h"
#include "nast.h"
#line 1 "nast.nl"

static ImmT *__const__f = NULL;
void nast_priv0__const__init();
ImmT nast_priv0__const__sim(int __nr);
ImmT nast_priv0__const__sing(int __nr);

ImmT  nast_priv0op_def(nast0op_struct_t0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,nast0op_assoc_t0type ___nl__im__3);


ImmT  nast0intepreter_evaluate_max_steps0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0intepreter_evaluate_max_steps");
return nast0intepreter_evaluate_max_steps();
}
ImmT nast0intepreter_evaluate_max_steps(){
nast_priv0__const__init();
return nast_priv0__const__sing(0);
}
ImmT nast0intepreter_evaluate_max_steps0cal() {
nast_priv0__const__init();
INT  ___nl__int__0 = 0;
ImmT  ___nl__im__1 = NULL;
#line 12
___nl__int__0 = 500000;
#line 12
c_rt_lib0move(&___nl__im__1, c_rt_lib0int_new(___nl__int__0));
#line 12
//clear ___nl__int__0;
#line 12
return ___nl__im__1;
#line 12
//clear ___nl__int__0;
#line 12
c_rt_lib0clear(&___nl__im__1);
#line 12
return NULL;
return NULL;

}

ImmT  nast0op_assoc_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_assoc_t");
return nast0op_assoc_t();
}
ImmT nast0op_assoc_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(1);
}
ImmT nast0op_assoc_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 16
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 16
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 16
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 16
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(274), ___nl__im__2, ___get_global_string_const(275), ___nl__im__3, ___get_global_string_const(72), ___nl__im__4));
#line 16
c_rt_lib0clear(&___nl__im__2);
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 16
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 16
c_rt_lib0clear(&___nl__im__1);
#line 16
return ___nl__im__0;
#line 16
c_rt_lib0clear(&___nl__im__0);
#line 16
return NULL;
return NULL;

}

ImmT  nast0op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_t");
return nast0op_t();
}
ImmT nast0op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(2);
}
ImmT nast0op_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 20
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 20
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0op_assoc_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1014)));
#line 20
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(1015), ___nl__im__2, ___get_global_string_const(1016), ___nl__im__3));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
return ___nl__im__0;
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
return NULL;
return NULL;

}

ImmT  nast0op_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_struct_t");
return nast0op_struct_t();
}
ImmT nast0op_struct_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(3);
}
ImmT nast0op_struct_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nast0op_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1017)));
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__1));
#line 24
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
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

ImmT  nast_priv0op_def(nast0op_struct_t0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,nast0op_assoc_t0type ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__3);
nast_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 28
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__2));
#line 28
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(1015), ___nl__im__5, ___get_global_string_const(1016), ___nl__im__3));
#line 28
c_rt_lib0clear(&___nl__im__5);
#line 28
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__1, ___nl__im__4));
#line 28
c_rt_lib0clear(&___nl__im__4);
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
//clear ___nl__int__2;
#line 28
c_rt_lib0clear(&___nl__im__3);
#line 28
return NULL;
return NULL;

}

nast0op_struct_t0type nast0get_ternary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_ternary_ops");
return nast0get_ternary_ops();
}
ImmT nast0get_ternary_ops(){
nast_priv0__const__init();
return nast_priv0__const__sing(4);
}
ImmT nast0get_ternary_ops0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 32
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 33
c_rt_lib0move(&___nl__im__1,___get_global_string_const(1018));
#line 33
___nl__int__2 = 880;
#line 33
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 33
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__1, ___nl__int__2, ___nl__im__3));
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
//clear ___nl__int__2;
#line 33
c_rt_lib0clear(&___nl__im__3);
#line 34
c_rt_lib0move(&___nl__im__4, singleton0sigleton_do_not_use_without_approval(___nl__im__0));
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
return ___nl__im__4;
return NULL;

}

nast0op_struct_t0type nast0get_unary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_unary_ops");
return nast0get_unary_ops();
}
ImmT nast0get_unary_ops(){
nast_priv0__const__init();
return nast_priv0__const__sing(5);
}
ImmT nast0get_unary_ops0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 38
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 39
c_rt_lib0move(&___nl__im__1,___get_global_string_const(298));
#line 39
___nl__int__2 = 1010;
#line 39
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 39
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__1, ___nl__int__2, ___nl__im__3));
#line 39
c_rt_lib0clear(&___nl__im__1);
#line 39
//clear ___nl__int__2;
#line 39
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1019));
#line 40
___nl__int__5 = 990;
#line 40
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 40
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__4, ___nl__int__5, ___nl__im__6));
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
//clear ___nl__int__5;
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 41
c_rt_lib0move(&___nl__im__7,___get_global_string_const(190));
#line 41
___nl__int__8 = 990;
#line 41
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 41
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__7, ___nl__int__8, ___nl__im__9));
#line 41
c_rt_lib0clear(&___nl__im__7);
#line 41
//clear ___nl__int__8;
#line 41
c_rt_lib0clear(&___nl__im__9);
#line 42
c_rt_lib0move(&___nl__im__10,___get_global_string_const(363));
#line 42
___nl__int__11 = 980;
#line 42
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 42
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__10, ___nl__int__11, ___nl__im__12));
#line 42
c_rt_lib0clear(&___nl__im__10);
#line 42
//clear ___nl__int__11;
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 43
c_rt_lib0move(&___nl__im__13,___get_global_string_const(367));
#line 43
___nl__int__14 = 980;
#line 43
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 43
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__13, ___nl__int__14, ___nl__im__15));
#line 43
c_rt_lib0clear(&___nl__im__13);
#line 43
//clear ___nl__int__14;
#line 43
c_rt_lib0clear(&___nl__im__15);
#line 44
c_rt_lib0move(&___nl__im__16,___get_global_string_const(365));
#line 44
___nl__int__17 = 980;
#line 44
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 44
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__16, ___nl__int__17, ___nl__im__18));
#line 44
c_rt_lib0clear(&___nl__im__16);
#line 44
//clear ___nl__int__17;
#line 44
c_rt_lib0clear(&___nl__im__18);
#line 45
c_rt_lib0move(&___nl__im__19, singleton0sigleton_do_not_use_without_approval(___nl__im__0));
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
return ___nl__im__19;
return NULL;

}

nast0op_struct_t0type nast0get_bin_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_bin_ops");
return nast0get_bin_ops();
}
ImmT nast0get_bin_ops(){
nast_priv0__const__init();
return nast_priv0__const__sing(6);
}
ImmT nast0get_bin_ops0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
INT  ___nl__int__71 = 0;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
INT  ___nl__int__77 = 0;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
#line 49
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 50
c_rt_lib0move(&___nl__im__1,___get_global_string_const(569));
#line 50
___nl__int__2 = 2000;
#line 50
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 50
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__1, ___nl__int__2, ___nl__im__3));
#line 50
c_rt_lib0clear(&___nl__im__1);
#line 50
//clear ___nl__int__2;
#line 50
c_rt_lib0clear(&___nl__im__3);
#line 51
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1020));
#line 51
___nl__int__5 = 1500;
#line 51
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 51
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__4, ___nl__int__5, ___nl__im__6));
#line 51
c_rt_lib0clear(&___nl__im__4);
#line 51
//clear ___nl__int__5;
#line 51
c_rt_lib0clear(&___nl__im__6);
#line 52
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1021));
#line 52
___nl__int__8 = 1500;
#line 52
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 52
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__7, ___nl__int__8, ___nl__im__9));
#line 52
c_rt_lib0clear(&___nl__im__7);
#line 52
//clear ___nl__int__8;
#line 52
c_rt_lib0clear(&___nl__im__9);
#line 53
c_rt_lib0move(&___nl__im__10,___get_global_string_const(373));
#line 53
___nl__int__11 = 970;
#line 53
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 53
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__10, ___nl__int__11, ___nl__im__12));
#line 53
c_rt_lib0clear(&___nl__im__10);
#line 53
//clear ___nl__int__11;
#line 53
c_rt_lib0clear(&___nl__im__12);
#line 54
c_rt_lib0move(&___nl__im__13,___get_global_string_const(106));
#line 54
___nl__int__14 = 970;
#line 54
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 54
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__13, ___nl__int__14, ___nl__im__15));
#line 54
c_rt_lib0clear(&___nl__im__13);
#line 54
//clear ___nl__int__14;
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 55
c_rt_lib0move(&___nl__im__16,___get_global_string_const(376));
#line 55
___nl__int__17 = 970;
#line 55
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 55
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__16, ___nl__int__17, ___nl__im__18));
#line 55
c_rt_lib0clear(&___nl__im__16);
#line 55
//clear ___nl__int__17;
#line 55
c_rt_lib0clear(&___nl__im__18);
#line 56
c_rt_lib0move(&___nl__im__19,___get_global_string_const(367));
#line 56
___nl__int__20 = 960;
#line 56
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 56
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__19, ___nl__int__20, ___nl__im__21));
#line 56
c_rt_lib0clear(&___nl__im__19);
#line 56
//clear ___nl__int__20;
#line 56
c_rt_lib0clear(&___nl__im__21);
#line 57
c_rt_lib0move(&___nl__im__22,___get_global_string_const(365));
#line 57
___nl__int__23 = 960;
#line 57
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 57
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__22, ___nl__int__23, ___nl__im__24));
#line 57
c_rt_lib0clear(&___nl__im__22);
#line 57
//clear ___nl__int__23;
#line 57
c_rt_lib0clear(&___nl__im__24);
#line 58
c_rt_lib0move(&___nl__im__25,___get_global_string_const(111));
#line 58
___nl__int__26 = 960;
#line 58
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 58
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__25, ___nl__int__26, ___nl__im__27));
#line 58
c_rt_lib0clear(&___nl__im__25);
#line 58
//clear ___nl__int__26;
#line 58
c_rt_lib0clear(&___nl__im__27);
#line 59
c_rt_lib0move(&___nl__im__28,___get_global_string_const(387));
#line 59
___nl__int__29 = 940;
#line 59
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 59
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__28, ___nl__int__29, ___nl__im__30));
#line 59
c_rt_lib0clear(&___nl__im__28);
#line 59
//clear ___nl__int__29;
#line 59
c_rt_lib0clear(&___nl__im__30);
#line 60
c_rt_lib0move(&___nl__im__31,___get_global_string_const(377));
#line 60
___nl__int__32 = 940;
#line 60
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 60
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__31, ___nl__int__32, ___nl__im__33));
#line 60
c_rt_lib0clear(&___nl__im__31);
#line 60
//clear ___nl__int__32;
#line 60
c_rt_lib0clear(&___nl__im__33);
#line 61
c_rt_lib0move(&___nl__im__34,___get_global_string_const(379));
#line 61
___nl__int__35 = 940;
#line 61
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 61
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__34, ___nl__int__35, ___nl__im__36));
#line 61
c_rt_lib0clear(&___nl__im__34);
#line 61
//clear ___nl__int__35;
#line 61
c_rt_lib0clear(&___nl__im__36);
#line 62
c_rt_lib0move(&___nl__im__37,___get_global_string_const(385));
#line 62
___nl__int__38 = 940;
#line 62
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 62
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__37, ___nl__int__38, ___nl__im__39));
#line 62
c_rt_lib0clear(&___nl__im__37);
#line 62
//clear ___nl__int__38;
#line 62
c_rt_lib0clear(&___nl__im__39);
#line 63
c_rt_lib0move(&___nl__im__40,___get_global_string_const(381));
#line 63
___nl__int__41 = 930;
#line 63
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 63
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__40, ___nl__int__41, ___nl__im__42));
#line 63
c_rt_lib0clear(&___nl__im__40);
#line 63
//clear ___nl__int__41;
#line 63
c_rt_lib0clear(&___nl__im__42);
#line 64
c_rt_lib0move(&___nl__im__43,___get_global_string_const(383));
#line 64
___nl__int__44 = 930;
#line 64
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 64
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__43, ___nl__int__44, ___nl__im__45));
#line 64
c_rt_lib0clear(&___nl__im__43);
#line 64
//clear ___nl__int__44;
#line 64
c_rt_lib0clear(&___nl__im__45);
#line 65
c_rt_lib0move(&___nl__im__46,___get_global_string_const(369));
#line 65
___nl__int__47 = 930;
#line 65
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 65
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__46, ___nl__int__47, ___nl__im__48));
#line 65
c_rt_lib0clear(&___nl__im__46);
#line 65
//clear ___nl__int__47;
#line 65
c_rt_lib0clear(&___nl__im__48);
#line 66
c_rt_lib0move(&___nl__im__49,___get_global_string_const(370));
#line 66
___nl__int__50 = 930;
#line 66
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_none(___get_global_string_const(72)));
#line 66
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__49, ___nl__int__50, ___nl__im__51));
#line 66
c_rt_lib0clear(&___nl__im__49);
#line 66
//clear ___nl__int__50;
#line 66
c_rt_lib0clear(&___nl__im__51);
#line 67
c_rt_lib0move(&___nl__im__52,___get_global_string_const(926));
#line 67
___nl__int__53 = 900;
#line 67
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 67
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__52, ___nl__int__53, ___nl__im__54));
#line 67
c_rt_lib0clear(&___nl__im__52);
#line 67
//clear ___nl__int__53;
#line 67
c_rt_lib0clear(&___nl__im__54);
#line 68
c_rt_lib0move(&___nl__im__55,___get_global_string_const(927));
#line 68
___nl__int__56 = 890;
#line 68
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_string_const(274)));
#line 68
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__55, ___nl__int__56, ___nl__im__57));
#line 68
c_rt_lib0clear(&___nl__im__55);
#line 68
//clear ___nl__int__56;
#line 68
c_rt_lib0clear(&___nl__im__57);
#line 69
c_rt_lib0move(&___nl__im__58,___get_global_string_const(1007));
#line 69
___nl__int__59 = 870;
#line 69
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 69
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__58, ___nl__int__59, ___nl__im__60));
#line 69
c_rt_lib0clear(&___nl__im__58);
#line 69
//clear ___nl__int__59;
#line 69
c_rt_lib0clear(&___nl__im__60);
#line 70
c_rt_lib0move(&___nl__im__61,___get_global_string_const(1008));
#line 70
___nl__int__62 = 870;
#line 70
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 70
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__61, ___nl__int__62, ___nl__im__63));
#line 70
c_rt_lib0clear(&___nl__im__61);
#line 70
//clear ___nl__int__62;
#line 70
c_rt_lib0clear(&___nl__im__63);
#line 71
c_rt_lib0move(&___nl__im__64,___get_global_string_const(1011));
#line 71
___nl__int__65 = 870;
#line 71
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 71
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__64, ___nl__int__65, ___nl__im__66));
#line 71
c_rt_lib0clear(&___nl__im__64);
#line 71
//clear ___nl__int__65;
#line 71
c_rt_lib0clear(&___nl__im__66);
#line 72
c_rt_lib0move(&___nl__im__67,___get_global_string_const(1010));
#line 72
___nl__int__68 = 870;
#line 72
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 72
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__67, ___nl__int__68, ___nl__im__69));
#line 72
c_rt_lib0clear(&___nl__im__67);
#line 72
//clear ___nl__int__68;
#line 72
c_rt_lib0clear(&___nl__im__69);
#line 73
c_rt_lib0move(&___nl__im__70,___get_global_string_const(1012));
#line 73
___nl__int__71 = 870;
#line 73
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 73
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__70, ___nl__int__71, ___nl__im__72));
#line 73
c_rt_lib0clear(&___nl__im__70);
#line 73
//clear ___nl__int__71;
#line 73
c_rt_lib0clear(&___nl__im__72);
#line 74
c_rt_lib0move(&___nl__im__73,___get_global_string_const(1009));
#line 74
___nl__int__74 = 870;
#line 74
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 74
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__73, ___nl__int__74, ___nl__im__75));
#line 74
c_rt_lib0clear(&___nl__im__73);
#line 74
//clear ___nl__int__74;
#line 74
c_rt_lib0clear(&___nl__im__75);
#line 75
c_rt_lib0move(&___nl__im__76,___get_global_string_const(1022));
#line 75
___nl__int__77 = 870;
#line 75
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_none(___get_global_string_const(275)));
#line 75
c_rt_lib0delete(nast_priv0op_def(&___nl__im__0, ___nl__im__76, ___nl__int__77, ___nl__im__78));
#line 75
c_rt_lib0clear(&___nl__im__76);
#line 75
//clear ___nl__int__77;
#line 75
c_rt_lib0clear(&___nl__im__78);
#line 76
c_rt_lib0move(&___nl__im__79, singleton0sigleton_do_not_use_without_approval(___nl__im__0));
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
return ___nl__im__79;
return NULL;

}

INT  nast0get_max_precedence0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_max_precedence");
return nast0get_max_precedence();
}
INT  nast0get_max_precedence() {
nast_priv0__const__init();
INT  ___nl__int__0 = 0;
#line 80
___nl__int__0 = 2000;
#line 80
return ___nl__int__0;
return 0;

}

ImmT  nast0variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_t");
return nast0variant_t();
}
ImmT nast0variant_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(7);
}
ImmT nast0variant_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 84
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 84
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 84
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 84
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(167), ___nl__im__2, ___get_global_string_const(502), ___nl__im__3));
#line 84
c_rt_lib0clear(&___nl__im__2);
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 84
c_rt_lib0clear(&___nl__im__1);
#line 84
return ___nl__im__0;
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
return NULL;
return NULL;

}

ImmT  nast0fun_def_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_t");
return nast0fun_def_t();
}
ImmT nast0fun_def_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(8);
}
ImmT nast0fun_def_t0cal() {
nast_priv0__const__init();
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
#line 89
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1024)));
#line 89
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 89
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 89
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(205), ___nl__im__4, ___get_global_string_const(493), ___nl__im__5));
#line 89
c_rt_lib0clear(&___nl__im__4);
#line 89
c_rt_lib0clear(&___nl__im__5);
#line 89
c_rt_lib0move(&___nl__im__2, ptd0rec(___nl__im__3));
#line 89
c_rt_lib0clear(&___nl__im__3);
#line 90
c_rt_lib0move(&___nl__im__6, ptd0int());
#line 91
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 92
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 92
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__8));
#line 93
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__12, ptd0none());
#line 93
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(465), ___nl__im__11, ___get_global_string_const(210), ___nl__im__12));
#line 93
c_rt_lib0clear(&___nl__im__11);
#line 93
c_rt_lib0clear(&___nl__im__12);
#line 93
c_rt_lib0move(&___nl__im__9, ptd0var(___nl__im__10));
#line 93
c_rt_lib0clear(&___nl__im__10);
#line 94
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nast0fun_def_arg_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1025)));
#line 94
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__14));
#line 94
c_rt_lib0move(&___nl__im__13, ptd0arr(___nl__im__14));
#line 94
c_rt_lib0clear(&___nl__im__14);
#line 95
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 95
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 95
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__18));
#line 95
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_string_const(77), ___nl__im__17, ___get_global_string_const(76), ___nl__im__18));
#line 95
c_rt_lib0clear(&___nl__im__17);
#line 95
c_rt_lib0clear(&___nl__im__18);
#line 95
c_rt_lib0move(&___nl__im__15, ptd0var(___nl__im__16));
#line 95
c_rt_lib0clear(&___nl__im__16);
#line 95
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(7, ___get_global_string_const(466), ___nl__im__2, ___get_global_string_const(153), ___nl__im__6, ___get_global_string_const(167), ___nl__im__7, ___get_global_string_const(227), ___nl__im__8, ___get_global_string_const(209), ___nl__im__9, ___get_global_string_const(265), ___nl__im__13, ___get_global_string_const(166), ___nl__im__15));
#line 95
c_rt_lib0clear(&___nl__im__2);
#line 95
c_rt_lib0clear(&___nl__im__6);
#line 95
c_rt_lib0clear(&___nl__im__7);
#line 95
c_rt_lib0clear(&___nl__im__8);
#line 95
c_rt_lib0clear(&___nl__im__9);
#line 95
c_rt_lib0clear(&___nl__im__13);
#line 95
c_rt_lib0clear(&___nl__im__15);
#line 95
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 95
c_rt_lib0clear(&___nl__im__1);
#line 95
return ___nl__im__0;
#line 95
c_rt_lib0clear(&___nl__im__0);
#line 95
return NULL;
return NULL;

}

ImmT  nast0fun_def_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_arg_t");
return nast0fun_def_arg_t();
}
ImmT nast0fun_def_arg_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(9);
}
ImmT nast0fun_def_arg_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 101
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1024)));
#line 101
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 102
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 102
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 103
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 104
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 104
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 104
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(72), ___nl__im__7, ___get_global_string_const(40), ___nl__im__8));
#line 104
c_rt_lib0clear(&___nl__im__7);
#line 104
c_rt_lib0clear(&___nl__im__8);
#line 104
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__6));
#line 104
c_rt_lib0clear(&___nl__im__6);
#line 104
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(205), ___nl__im__2, ___get_global_string_const(493), ___nl__im__3, ___get_global_string_const(167), ___nl__im__4, ___get_global_string_const(266), ___nl__im__5));
#line 104
c_rt_lib0clear(&___nl__im__2);
#line 104
c_rt_lib0clear(&___nl__im__3);
#line 104
c_rt_lib0clear(&___nl__im__4);
#line 104
c_rt_lib0clear(&___nl__im__5);
#line 104
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 104
c_rt_lib0clear(&___nl__im__1);
#line 104
return ___nl__im__0;
#line 104
c_rt_lib0clear(&___nl__im__0);
#line 104
return NULL;
return NULL;

}

ImmT  nast0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0module_t");
return nast0module_t();
}
ImmT nast0module_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(10);
}
ImmT nast0module_t0cal() {
nast_priv0__const__init();
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
#line 110
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 111
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 112
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 112
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 112
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(167), ___nl__im__7, ___get_global_string_const(153), ___nl__im__8));
#line 112
c_rt_lib0clear(&___nl__im__7);
#line 112
c_rt_lib0clear(&___nl__im__8);
#line 112
c_rt_lib0move(&___nl__im__5, ptd0rec(___nl__im__6));
#line 112
c_rt_lib0clear(&___nl__im__6);
#line 112
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 112
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0fun_def_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1026)));
#line 113
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__10));
#line 113
c_rt_lib0move(&___nl__im__9, ptd0arr(___nl__im__10));
#line 113
c_rt_lib0clear(&___nl__im__10);
#line 113
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(167), ___nl__im__2, ___get_global_string_const(1027), ___nl__im__3, ___get_global_string_const(172), ___nl__im__4, ___get_global_string_const(165), ___nl__im__9));
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
c_rt_lib0clear(&___nl__im__3);
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
c_rt_lib0clear(&___nl__im__9);
#line 113
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
return ___nl__im__0;
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
return NULL;
return NULL;

}

ImmT  nast0variable_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_type_t");
return nast0variable_type_t();
}
ImmT nast0variable_type_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(11);
}
ImmT nast0variable_type_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 118
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 118
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 118
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 118
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(205), ___nl__im__2, ___get_global_string_const(72), ___nl__im__3));
#line 118
c_rt_lib0clear(&___nl__im__2);
#line 118
c_rt_lib0clear(&___nl__im__3);
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

ImmT  nast0variable_declaration_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_declaration_t");
return nast0variable_declaration_t();
}
ImmT nast0variable_declaration_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(12);
}
ImmT nast0variable_declaration_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 123
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 124
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1024)));
#line 124
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 125
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 125
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 126
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 126
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__7));
#line 126
c_rt_lib0move(&___nl__im__8, ptd0none());
#line 126
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(219), ___nl__im__7, ___get_global_string_const(72), ___nl__im__8));
#line 126
c_rt_lib0clear(&___nl__im__7);
#line 126
c_rt_lib0clear(&___nl__im__8);
#line 126
c_rt_lib0move(&___nl__im__5, ptd0var(___nl__im__6));
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(167), ___nl__im__2, ___get_global_string_const(205), ___nl__im__3, ___get_global_string_const(493), ___nl__im__4, ___get_global_string_const(219), ___nl__im__5));
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
c_rt_lib0clear(&___nl__im__3);
#line 126
c_rt_lib0clear(&___nl__im__4);
#line 126
c_rt_lib0clear(&___nl__im__5);
#line 126
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 126
c_rt_lib0clear(&___nl__im__1);
#line 126
return ___nl__im__0;
#line 126
c_rt_lib0clear(&___nl__im__0);
#line 126
return NULL;
return NULL;

}

ImmT  nast0fun_val_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_arg_t");
return nast0fun_val_arg_t();
}
ImmT nast0fun_val_arg_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(13);
}
ImmT nast0fun_val_arg_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 131
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 131
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 131
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 131
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 131
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 131
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(72), ___nl__im__6, ___get_global_string_const(40), ___nl__im__7));
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 131
c_rt_lib0clear(&___nl__im__5);
#line 131
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(1028), ___nl__im__3, ___get_global_string_const(266), ___nl__im__4));
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
c_rt_lib0clear(&___nl__im__4);
#line 131
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 131
c_rt_lib0clear(&___nl__im__1);
#line 131
return ___nl__im__0;
#line 131
c_rt_lib0clear(&___nl__im__0);
#line 131
return NULL;
return NULL;

}

ImmT  nast0fun_val_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_t");
return nast0fun_val_t();
}
ImmT nast0fun_val_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(14);
}
ImmT nast0fun_val_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 135
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 135
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 135
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0fun_val_arg_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1029)));
#line 135
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 135
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(167), ___nl__im__2, ___get_global_string_const(151), ___nl__im__3, ___get_global_string_const(265), ___nl__im__4));
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
c_rt_lib0clear(&___nl__im__3);
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
return ___nl__im__0;
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
return NULL;
return NULL;

}

ImmT  nast0hash_elem_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_elem_t");
return nast0hash_elem_t();
}
ImmT nast0hash_elem_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(15);
}
ImmT nast0hash_elem_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 139
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 139
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 139
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(568), ___nl__im__2, ___get_global_string_const(224), ___nl__im__3));
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__3);
#line 139
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 139
c_rt_lib0clear(&___nl__im__1);
#line 139
return ___nl__im__0;
#line 139
c_rt_lib0clear(&___nl__im__0);
#line 139
return NULL;
return NULL;

}

ImmT  nast0hash_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_decl_t");
return nast0hash_decl_t();
}
ImmT nast0hash_decl_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(16);
}
ImmT nast0hash_decl_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 143
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nast0hash_elem_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1030)));
#line 143
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__1));
#line 143
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
return ___nl__im__0;
#line 143
c_rt_lib0clear(&___nl__im__0);
#line 143
return NULL;
return NULL;

}

ImmT  nast0bin_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0bin_op_t");
return nast0bin_op_t();
}
ImmT nast0bin_op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(17);
}
ImmT nast0bin_op_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 147
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 147
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 147
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 147
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 147
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(274), ___nl__im__2, ___get_global_string_const(275), ___nl__im__3, ___get_global_string_const(552), ___nl__im__4));
#line 147
c_rt_lib0clear(&___nl__im__2);
#line 147
c_rt_lib0clear(&___nl__im__3);
#line 147
c_rt_lib0clear(&___nl__im__4);
#line 147
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 147
c_rt_lib0clear(&___nl__im__1);
#line 147
return ___nl__im__0;
#line 147
c_rt_lib0clear(&___nl__im__0);
#line 147
return NULL;
return NULL;

}

ImmT  nast0fun_label_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_label_t");
return nast0fun_label_t();
}
ImmT nast0fun_label_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(18);
}
ImmT nast0fun_label_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 151
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 151
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 151
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(151), ___nl__im__2, ___get_global_string_const(167), ___nl__im__3));
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
c_rt_lib0clear(&___nl__im__3);
#line 151
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
return ___nl__im__0;
#line 151
c_rt_lib0clear(&___nl__im__0);
#line 151
return NULL;
return NULL;

}

ImmT  nast0unary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0unary_op_t");
return nast0unary_op_t();
}
ImmT nast0unary_op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(19);
}
ImmT nast0unary_op_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 155
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 155
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 155
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 155
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(552), ___nl__im__3));
#line 155
c_rt_lib0clear(&___nl__im__2);
#line 155
c_rt_lib0clear(&___nl__im__3);
#line 155
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 155
c_rt_lib0clear(&___nl__im__1);
#line 155
return ___nl__im__0;
#line 155
c_rt_lib0clear(&___nl__im__0);
#line 155
return NULL;
return NULL;

}

ImmT  nast0ternary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0ternary_op_t");
return nast0ternary_op_t();
}
ImmT nast0ternary_op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(20);
}
ImmT nast0ternary_op_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 159
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 159
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 159
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 159
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 159
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 159
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 159
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 159
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(1004), ___nl__im__2, ___get_global_string_const(1005), ___nl__im__3, ___get_global_string_const(1006), ___nl__im__4, ___get_global_string_const(552), ___nl__im__5));
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
return ___nl__im__0;
#line 159
c_rt_lib0clear(&___nl__im__0);
#line 159
return NULL;
return NULL;

}

ImmT  nast0value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0value_t");
return nast0value_t();
}
ImmT nast0value_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(21);
}
ImmT nast0value_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 164
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_string_const(46), ___get_global_string_const(813)));
#line 164
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 165
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_only_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1031)));
#line 165
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 166
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 166
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 166
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(221), ___nl__im__2, ___get_global_string_const(219), ___nl__im__3, ___get_global_string_const(205), ___nl__im__4));
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
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

ImmT  nast0value_only_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0value_only_t");
return nast0value_only_t();
}
ImmT nast0value_only_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(22);
}
ImmT nast0value_only_t0cal() {
nast_priv0__const__init();
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
#line 172
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0ternary_op_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1032)));
#line 172
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 173
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 174
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 175
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 175
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 176
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0variant_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1033)));
#line 176
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__6));
#line 177
c_rt_lib0move(&___nl__im__7, ptd0int());
#line 179
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 179
c_rt_lib0move(&___nl__im__10, ptd0arr(___nl__im__11));
#line 179
c_rt_lib0clear(&___nl__im__11);
#line 180
c_rt_lib0move(&___nl__im__14, ptd0none());
#line 180
c_rt_lib0move(&___nl__im__15, ptd0none());
#line 180
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(1034), ___nl__im__14, ___get_global_string_const(1035), ___nl__im__15));
#line 180
c_rt_lib0clear(&___nl__im__14);
#line 180
c_rt_lib0clear(&___nl__im__15);
#line 180
c_rt_lib0move(&___nl__im__12, ptd0var(___nl__im__13));
#line 180
c_rt_lib0clear(&___nl__im__13);
#line 180
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(128), ___nl__im__10, ___get_global_string_const(1036), ___nl__im__12));
#line 180
c_rt_lib0clear(&___nl__im__10);
#line 180
c_rt_lib0clear(&___nl__im__12);
#line 180
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 180
c_rt_lib0clear(&___nl__im__9);
#line 182
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 182
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__17));
#line 182
c_rt_lib0move(&___nl__im__16, ptd0arr(___nl__im__17));
#line 182
c_rt_lib0clear(&___nl__im__17);
#line 183
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(nast0hash_decl_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1037)));
#line 183
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__18));
#line 184
c_rt_lib0move(&___nl__im__19, ptd0string());
#line 185
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1038)));
#line 185
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__20));
#line 186
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nast0unary_op_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1039)));
#line 186
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__21));
#line 187
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(nast0fun_label_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1040)));
#line 187
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__22));
#line 188
c_rt_lib0move(&___nl__im__23, c_rt_lib0func_new(nast0fun_val_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1041)));
#line 188
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__23));
#line 189
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 189
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__24));
#line 190
c_rt_lib0move(&___nl__im__25, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 190
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__25));
#line 190
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(16, ___get_global_string_const(998), ___nl__im__2, ___get_global_string_const(999), ___nl__im__3, ___get_global_string_const(977), ___nl__im__4, ___get_global_string_const(996), ___nl__im__5, ___get_global_string_const(554), ___nl__im__6, ___get_global_string_const(222), ___nl__im__7, ___get_global_string_const(404), ___nl__im__8, ___get_global_string_const(230), ___nl__im__16, ___get_global_string_const(231), ___nl__im__18, ___get_global_string_const(502), ___nl__im__19, ___get_global_string_const(234), ___nl__im__20, ___get_global_string_const(1000), ___nl__im__21, ___get_global_string_const(1001), ___nl__im__22, ___get_global_string_const(957), ___nl__im__23, ___get_global_string_const(1002), ___nl__im__24, ___get_global_string_const(1003), ___nl__im__25));
#line 190
c_rt_lib0clear(&___nl__im__2);
#line 190
c_rt_lib0clear(&___nl__im__3);
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
c_rt_lib0clear(&___nl__im__6);
#line 190
c_rt_lib0clear(&___nl__im__7);
#line 190
c_rt_lib0clear(&___nl__im__8);
#line 190
c_rt_lib0clear(&___nl__im__16);
#line 190
c_rt_lib0clear(&___nl__im__18);
#line 190
c_rt_lib0clear(&___nl__im__19);
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
c_rt_lib0clear(&___nl__im__21);
#line 190
c_rt_lib0clear(&___nl__im__22);
#line 190
c_rt_lib0clear(&___nl__im__23);
#line 190
c_rt_lib0clear(&___nl__im__24);
#line 190
c_rt_lib0clear(&___nl__im__25);
#line 190
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
return ___nl__im__0;
#line 190
c_rt_lib0clear(&___nl__im__0);
#line 190
return NULL;
return NULL;

}

ImmT  nast0match_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_t");
return nast0match_t();
}
ImmT nast0match_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(23);
}
ImmT nast0match_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 195
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 195
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 195
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0match_branch_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1042)));
#line 195
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 195
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 195
c_rt_lib0clear(&___nl__im__4);
#line 195
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__2, ___get_global_string_const(986), ___nl__im__3));
#line 195
c_rt_lib0clear(&___nl__im__2);
#line 195
c_rt_lib0clear(&___nl__im__3);
#line 195
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 195
c_rt_lib0clear(&___nl__im__1);
#line 195
return ___nl__im__0;
#line 195
c_rt_lib0clear(&___nl__im__0);
#line 195
return NULL;
return NULL;

}

ImmT  nast0variant_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_decl_t");
return nast0variant_decl_t();
}
ImmT nast0variant_decl_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(24);
}
ImmT nast0variant_decl_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 200
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 201
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0variant_variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1043)));
#line 201
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 201
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 201
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(219), ___nl__im__5, ___get_global_string_const(72), ___nl__im__6));
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(167), ___nl__im__2, ___get_global_string_const(219), ___nl__im__3));
#line 201
c_rt_lib0clear(&___nl__im__2);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
return ___nl__im__0;
#line 201
c_rt_lib0clear(&___nl__im__0);
#line 201
return NULL;
return NULL;

}

ImmT  nast0variant_variable_declaration_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_variable_declaration_t");
return nast0variant_variable_declaration_t();
}
ImmT nast0variant_variable_declaration_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(25);
}
ImmT nast0variant_variable_declaration_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 207
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 207
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 208
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 208
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 208
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(72), ___nl__im__5, ___get_global_string_const(40), ___nl__im__6));
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(491), ___nl__im__2, ___get_global_string_const(266), ___nl__im__3));
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 208
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
return ___nl__im__0;
#line 208
c_rt_lib0clear(&___nl__im__0);
#line 208
return NULL;
return NULL;

}

ImmT  nast0match_branch_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_branch_t");
return nast0match_branch_t();
}
ImmT nast0match_branch_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(26);
}
ImmT nast0match_branch_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 213
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0variant_decl_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1045)));
#line 213
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 213
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 213
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_string_const(46), ___get_global_string_const(813)));
#line 213
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 213
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(554), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3, ___get_global_string_const(221), ___nl__im__4));
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
return NULL;

}

ImmT  nast0fora_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fora_t");
return nast0fora_t();
}
ImmT nast0fora_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(27);
}
ImmT nast0fora_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 218
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 218
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 219
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 219
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 220
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 220
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 221
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 221
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(362), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3, ___get_global_string_const(38), ___nl__im__4, ___get_global_string_const(1046), ___nl__im__5));
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
return ___nl__im__0;
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
return NULL;
return NULL;

}

ImmT  nast0forh_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0forh_t");
return nast0forh_t();
}
ImmT nast0forh_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(28);
}
ImmT nast0forh_t0cal() {
nast_priv0__const__init();
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
#line 227
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 227
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 228
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 228
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 229
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 229
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 229
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(72), ___nl__im__6, ___get_global_string_const(40), ___nl__im__7));
#line 229
c_rt_lib0clear(&___nl__im__6);
#line 229
c_rt_lib0clear(&___nl__im__7);
#line 229
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 229
c_rt_lib0clear(&___nl__im__5);
#line 230
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 230
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__8));
#line 231
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 231
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__9));
#line 232
c_rt_lib0move(&___nl__im__10, ptd0bool());
#line 232
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(568), ___nl__im__2, ___get_global_string_const(224), ___nl__im__3, ___get_global_string_const(982), ___nl__im__4, ___get_global_string_const(129), ___nl__im__8, ___get_global_string_const(227), ___nl__im__9, ___get_global_string_const(1046), ___nl__im__10));
#line 232
c_rt_lib0clear(&___nl__im__2);
#line 232
c_rt_lib0clear(&___nl__im__3);
#line 232
c_rt_lib0clear(&___nl__im__4);
#line 232
c_rt_lib0clear(&___nl__im__8);
#line 232
c_rt_lib0clear(&___nl__im__9);
#line 232
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 232
c_rt_lib0clear(&___nl__im__1);
#line 232
return ___nl__im__0;
#line 232
c_rt_lib0clear(&___nl__im__0);
#line 232
return NULL;
return NULL;

}

ImmT  nast0rep_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0rep_t");
return nast0rep_t();
}
ImmT nast0rep_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(29);
}
ImmT nast0rep_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 238
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 238
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 239
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 239
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 240
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 240
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 241
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 241
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(362), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3, ___get_global_string_const(983), ___nl__im__4, ___get_global_string_const(1046), ___nl__im__5));
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
c_rt_lib0clear(&___nl__im__4);
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 241
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 241
c_rt_lib0clear(&___nl__im__1);
#line 241
return ___nl__im__0;
#line 241
c_rt_lib0clear(&___nl__im__0);
#line 241
return NULL;
return NULL;

}

ImmT  nast0while_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0while_t");
return nast0while_t();
}
ImmT nast0while_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(30);
}
ImmT nast0while_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 246
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 246
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 246
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 246
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(978), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3, ___get_global_string_const(1046), ___nl__im__4));
#line 246
c_rt_lib0clear(&___nl__im__2);
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 246
c_rt_lib0clear(&___nl__im__1);
#line 246
return ___nl__im__0;
#line 246
c_rt_lib0clear(&___nl__im__0);
#line 246
return NULL;
return NULL;

}

ImmT  nast0try_ensure_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0try_ensure_t");
return nast0try_ensure_t();
}
ImmT nast0try_ensure_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(31);
}
ImmT nast0try_ensure_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 250
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 250
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 250
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1038)));
#line 250
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 250
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 250
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 250
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(718), ___nl__im__2, ___get_global_string_const(991), ___nl__im__3, ___get_global_string_const(992), ___nl__im__4));
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 250
c_rt_lib0clear(&___nl__im__3);
#line 250
c_rt_lib0clear(&___nl__im__4);
#line 250
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 250
c_rt_lib0clear(&___nl__im__1);
#line 250
return ___nl__im__0;
#line 250
c_rt_lib0clear(&___nl__im__0);
#line 250
return NULL;
return NULL;

}

ImmT  nast0if_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0if_t");
return nast0if_t();
}
ImmT nast0if_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(32);
}
ImmT nast0if_t0cal() {
nast_priv0__const__init();
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
#line 255
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 255
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 256
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 256
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 257
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 257
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__7));
#line 257
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 257
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__8));
#line 257
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_string_const(46), ___get_global_string_const(813)));
#line 257
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__9));
#line 257
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(978), ___nl__im__7, ___get_global_string_const(227), ___nl__im__8, ___get_global_string_const(221), ___nl__im__9));
#line 257
c_rt_lib0clear(&___nl__im__7);
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
c_rt_lib0clear(&___nl__im__9);
#line 257
c_rt_lib0move(&___nl__im__5, ptd0rec(___nl__im__6));
#line 257
c_rt_lib0clear(&___nl__im__6);
#line 257
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 257
c_rt_lib0clear(&___nl__im__5);
#line 258
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 258
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__10));
#line 258
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(978), ___nl__im__2, ___get_global_string_const(964), ___nl__im__3, ___get_global_string_const(979), ___nl__im__4, ___get_global_string_const(980), ___nl__im__10));
#line 258
c_rt_lib0clear(&___nl__im__2);
#line 258
c_rt_lib0clear(&___nl__im__3);
#line 258
c_rt_lib0clear(&___nl__im__4);
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 258
c_rt_lib0clear(&___nl__im__1);
#line 258
return ___nl__im__0;
#line 258
c_rt_lib0clear(&___nl__im__0);
#line 258
return NULL;
return NULL;

}

ImmT  nast0for_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0for_t");
return nast0for_t();
}
ImmT nast0for_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(33);
}
ImmT nast0for_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 264
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 264
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 264
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 264
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 264
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(252), ___nl__im__4, ___get_global_string_const(219), ___nl__im__5));
#line 264
c_rt_lib0clear(&___nl__im__4);
#line 264
c_rt_lib0clear(&___nl__im__5);
#line 264
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 264
c_rt_lib0clear(&___nl__im__3);
#line 265
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 265
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__6));
#line 266
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 266
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__7));
#line 267
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 267
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__8));
#line 267
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(981), ___nl__im__2, ___get_global_string_const(362), ___nl__im__6, ___get_global_string_const(978), ___nl__im__7, ___get_global_string_const(227), ___nl__im__8));
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 267
c_rt_lib0clear(&___nl__im__1);
#line 267
return ___nl__im__0;
#line 267
c_rt_lib0clear(&___nl__im__0);
#line 267
return NULL;
return NULL;

}

ImmT  nast0place_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0place_t");
return nast0place_t();
}
ImmT nast0place_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(34);
}
ImmT nast0place_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 272
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 272
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 272
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(153), ___nl__im__2, ___get_global_string_const(1047), ___nl__im__3));
#line 272
c_rt_lib0clear(&___nl__im__2);
#line 272
c_rt_lib0clear(&___nl__im__3);
#line 272
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 272
c_rt_lib0clear(&___nl__im__1);
#line 272
return ___nl__im__0;
#line 272
c_rt_lib0clear(&___nl__im__0);
#line 272
return NULL;
return NULL;

}

ImmT  nast0debug_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0debug_t");
return nast0debug_t();
}
ImmT nast0debug_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(35);
}
ImmT nast0debug_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 276
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1048)));
#line 276
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 276
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1048)));
#line 276
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 276
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(544), ___nl__im__2, ___get_global_string_const(1034), ___nl__im__3));
#line 276
c_rt_lib0clear(&___nl__im__2);
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 276
c_rt_lib0clear(&___nl__im__1);
#line 276
return ___nl__im__0;
#line 276
c_rt_lib0clear(&___nl__im__0);
#line 276
return NULL;
return NULL;

}

nast0debug_t0type nast0empty_debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0empty_debug");
return nast0empty_debug();
}
ImmT nast0empty_debug(){
nast_priv0__const__init();
return nast_priv0__const__sing(36);
}
ImmT nast0empty_debug0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
#line 280
___nl__int__2 = 1;
#line 280
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__2));
#line 280
___nl__int__4 = 1;
#line 280
___nl__int__4 = -___nl__int__4;
#line 280
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__4));
#line 280
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(153), ___nl__im__3, ___get_global_string_const(1047), ___nl__im__5));
#line 280
//clear ___nl__int__2;
#line 280
c_rt_lib0clear(&___nl__im__3);
#line 280
//clear ___nl__int__4;
#line 280
c_rt_lib0clear(&___nl__im__5);
#line 280
___nl__int__7 = 1;
#line 280
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 280
___nl__int__9 = 1;
#line 280
___nl__int__9 = -___nl__int__9;
#line 280
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 280
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(153), ___nl__im__8, ___get_global_string_const(1047), ___nl__im__10));
#line 280
//clear ___nl__int__7;
#line 280
c_rt_lib0clear(&___nl__im__8);
#line 280
//clear ___nl__int__9;
#line 280
c_rt_lib0clear(&___nl__im__10);
#line 280
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_string_const(544), ___nl__im__1, ___get_global_string_const(1034), ___nl__im__6));
#line 280
c_rt_lib0clear(&___nl__im__1);
#line 280
c_rt_lib0clear(&___nl__im__6);
#line 280
return ___nl__im__0;
return NULL;

}

nast0value_t0type nast0cast_to_value0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nast0cast_to_value");
nast0value_only_t0type *var0 = &(_tab[0]);
return nast0cast_to_value(*var0);
}
nast0value_t0type nast0cast_to_value(nast0value_only_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nast_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 284
c_rt_lib0move(&___nl__im__2, nast0empty_debug());
#line 284
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(15)));
#line 284
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(221), ___nl__im__2, ___get_global_string_const(219), ___nl__im__0, ___get_global_string_const(205), ___nl__im__3));
#line 284
c_rt_lib0clear(&___nl__im__2);
#line 284
c_rt_lib0clear(&___nl__im__3);
#line 284
c_rt_lib0clear(&___nl__im__0);
#line 284
return ___nl__im__1;
return NULL;

}

ImmT  nast0cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0cmd_t");
return nast0cmd_t();
}
ImmT nast0cmd_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(37);
}
ImmT nast0cmd_t0cal() {
nast_priv0__const__init();
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
#line 291
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_string_const(46), ___get_global_string_const(813)));
#line 291
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 293
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(nast0if_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1049)));
#line 293
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__5));
#line 294
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nast0for_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1050)));
#line 294
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__6));
#line 295
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0fora_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1051)));
#line 295
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__7));
#line 296
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nast0forh_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1052)));
#line 296
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__8));
#line 297
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 297
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__9));
#line 298
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nast0rep_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1053)));
#line 298
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__10));
#line 299
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(nast0while_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1054)));
#line 299
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__11));
#line 300
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(nast0if_mod_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1055)));
#line 300
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__12));
#line 301
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0unless_mod_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1056)));
#line 301
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__13));
#line 302
c_rt_lib0move(&___nl__im__14, ptd0none());
#line 303
c_rt_lib0move(&___nl__im__15, ptd0none());
#line 304
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(nast0match_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1057)));
#line 304
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__16));
#line 305
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 305
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__17));
#line 306
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1058)));
#line 306
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__18));
#line 307
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1058)));
#line 307
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__19));
#line 308
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1044)));
#line 308
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__20));
#line 309
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 309
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__21));
#line 310
c_rt_lib0move(&___nl__im__22, c_rt_lib0func_new(nast0block_t0ptr, ___get_global_string_const(46), ___get_global_string_const(347)));
#line 310
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__22));
#line 311
c_rt_lib0move(&___nl__im__23, c_rt_lib0func_new(nast0die_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1059)));
#line 311
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__23));
#line 312
c_rt_lib0move(&___nl__im__24, ptd0none());
#line 312
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(20, ___get_global_string_const(964), ___nl__im__5, ___get_global_string_const(965), ___nl__im__6, ___get_global_string_const(966), ___nl__im__7, ___get_global_string_const(967), ___nl__im__8, ___get_global_string_const(159), ___nl__im__9, ___get_global_string_const(968), ___nl__im__10, ___get_global_string_const(969), ___nl__im__11, ___get_global_string_const(970), ___nl__im__12, ___get_global_string_const(971), ___nl__im__13, ___get_global_string_const(972), ___nl__im__14, ___get_global_string_const(973), ___nl__im__15, ___get_global_string_const(974), ___nl__im__16, ___get_global_string_const(219), ___nl__im__17, ___get_global_string_const(976), ___nl__im__18, ___get_global_string_const(177), ___nl__im__19, ___get_global_string_const(252), ___nl__im__20, ___get_global_string_const(246), ___nl__im__21, ___get_global_string_const(975), ___nl__im__22, ___get_global_string_const(247), ___nl__im__23, ___get_global_string_const(977), ___nl__im__24));
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__6);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__8);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__10);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
c_rt_lib0clear(&___nl__im__13);
#line 312
c_rt_lib0clear(&___nl__im__14);
#line 312
c_rt_lib0clear(&___nl__im__15);
#line 312
c_rt_lib0clear(&___nl__im__16);
#line 312
c_rt_lib0clear(&___nl__im__17);
#line 312
c_rt_lib0clear(&___nl__im__18);
#line 312
c_rt_lib0clear(&___nl__im__19);
#line 312
c_rt_lib0clear(&___nl__im__20);
#line 312
c_rt_lib0clear(&___nl__im__21);
#line 312
c_rt_lib0clear(&___nl__im__22);
#line 312
c_rt_lib0clear(&___nl__im__23);
#line 312
c_rt_lib0clear(&___nl__im__24);
#line 312
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 312
c_rt_lib0clear(&___nl__im__4);
#line 312
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(221), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3));
#line 312
c_rt_lib0clear(&___nl__im__2);
#line 312
c_rt_lib0clear(&___nl__im__3);
#line 312
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 312
c_rt_lib0clear(&___nl__im__1);
#line 312
return ___nl__im__0;
#line 312
c_rt_lib0clear(&___nl__im__0);
#line 312
return NULL;
return NULL;

}

ImmT  nast0die_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0die_t");
return nast0die_t();
}
ImmT nast0die_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(38);
}
ImmT nast0die_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 318
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 318
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__1));
#line 318
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 318
c_rt_lib0clear(&___nl__im__1);
#line 318
return ___nl__im__0;
#line 318
c_rt_lib0clear(&___nl__im__0);
#line 318
return NULL;
return NULL;

}

ImmT  nast0block_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0block_t");
return nast0block_t();
}
ImmT nast0block_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(39);
}
ImmT nast0block_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 322
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 322
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__1));
#line 322
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
return ___nl__im__0;
#line 322
c_rt_lib0clear(&___nl__im__0);
#line 322
return NULL;
return NULL;

}

ImmT  nast0if_mod_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0if_mod_t");
return nast0if_mod_t();
}
ImmT nast0if_mod_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(40);
}
ImmT nast0if_mod_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 326
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 326
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 326
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 326
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 326
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(978), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3));
#line 326
c_rt_lib0clear(&___nl__im__2);
#line 326
c_rt_lib0clear(&___nl__im__3);
#line 326
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 326
c_rt_lib0clear(&___nl__im__1);
#line 326
return ___nl__im__0;
#line 326
c_rt_lib0clear(&___nl__im__0);
#line 326
return NULL;
return NULL;

}

ImmT  nast0unless_mod_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0unless_mod_t");
return nast0unless_mod_t();
}
ImmT nast0unless_mod_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(41);
}
ImmT nast0unless_mod_t0cal() {
nast_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 330
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(46), ___get_global_string_const(1023)));
#line 330
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 330
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(46), ___get_global_string_const(335)));
#line 330
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 330
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(978), ___nl__im__2, ___get_global_string_const(227), ___nl__im__3));
#line 330
c_rt_lib0clear(&___nl__im__2);
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
return ___nl__im__0;
#line 330
c_rt_lib0clear(&___nl__im__0);
#line 330
return NULL;
return NULL;

}


static ImmT ___const__[43];
static int ___const_init__ = 1;
void nast_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[42];


for(int i=0;i<42;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 42);
}}
ImmT nast_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nast_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = nast0intepreter_evaluate_max_steps0cal();
	break;
case 1:
	___const__[1] = nast0op_assoc_t0cal();
	break;
case 2:
	___const__[2] = nast0op_t0cal();
	break;
case 3:
	___const__[3] = nast0op_struct_t0cal();
	break;
case 4:
	___const__[4] = nast0get_ternary_ops0cal();
	break;
case 5:
	___const__[5] = nast0get_unary_ops0cal();
	break;
case 6:
	___const__[6] = nast0get_bin_ops0cal();
	break;
case 7:
	___const__[7] = nast0variant_t0cal();
	break;
case 8:
	___const__[8] = nast0fun_def_t0cal();
	break;
case 9:
	___const__[9] = nast0fun_def_arg_t0cal();
	break;
case 10:
	___const__[10] = nast0module_t0cal();
	break;
case 11:
	___const__[11] = nast0variable_type_t0cal();
	break;
case 12:
	___const__[12] = nast0variable_declaration_t0cal();
	break;
case 13:
	___const__[13] = nast0fun_val_arg_t0cal();
	break;
case 14:
	___const__[14] = nast0fun_val_t0cal();
	break;
case 15:
	___const__[15] = nast0hash_elem_t0cal();
	break;
case 16:
	___const__[16] = nast0hash_decl_t0cal();
	break;
case 17:
	___const__[17] = nast0bin_op_t0cal();
	break;
case 18:
	___const__[18] = nast0fun_label_t0cal();
	break;
case 19:
	___const__[19] = nast0unary_op_t0cal();
	break;
case 20:
	___const__[20] = nast0ternary_op_t0cal();
	break;
case 21:
	___const__[21] = nast0value_t0cal();
	break;
case 22:
	___const__[22] = nast0value_only_t0cal();
	break;
case 23:
	___const__[23] = nast0match_t0cal();
	break;
case 24:
	___const__[24] = nast0variant_decl_t0cal();
	break;
case 25:
	___const__[25] = nast0variant_variable_declaration_t0cal();
	break;
case 26:
	___const__[26] = nast0match_branch_t0cal();
	break;
case 27:
	___const__[27] = nast0fora_t0cal();
	break;
case 28:
	___const__[28] = nast0forh_t0cal();
	break;
case 29:
	___const__[29] = nast0rep_t0cal();
	break;
case 30:
	___const__[30] = nast0while_t0cal();
	break;
case 31:
	___const__[31] = nast0try_ensure_t0cal();
	break;
case 32:
	___const__[32] = nast0if_t0cal();
	break;
case 33:
	___const__[33] = nast0for_t0cal();
	break;
case 34:
	___const__[34] = nast0place_t0cal();
	break;
case 35:
	___const__[35] = nast0debug_t0cal();
	break;
case 36:
	___const__[36] = nast0empty_debug0cal();
	break;
case 37:
	___const__[37] = nast0cmd_t0cal();
	break;
case 38:
	___const__[38] = nast0die_t0cal();
	break;
case 39:
	___const__[39] = nast0block_t0cal();
	break;
case 40:
	___const__[40] = nast0if_mod_t0cal();
	break;
case 41:
	___const__[41] = nast0unless_mod_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
