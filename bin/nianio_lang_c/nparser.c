
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "nparser.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "boolean_t.h"
#include "ptd.h"
#include "nast.h"
#include "ntokenizer.h"
#include "singleton.h"
#include "compiler_lib.h"
#include "ptd_parser.h"
#include "string_utils.h"
#include "ntokenizer.h"
#include "compiler_lib.h"
#include "nast.h"
#line 1 "nparser.nl"

static ImmT *__const__f = NULL;
void nparser_priv0__const__init();
ImmT nparser_priv0__const__sim(int __nr);
ImmT nparser_priv0__const__sing(int __nr);

ImmT  nparser_priv0get_end_list();
ImmT  nparser_priv0add_error(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
bool nparser_priv0eat(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
bool nparser_priv0try_eat(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
nast0module_t0type nparser_priv0parse_module(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  nparser_priv0parse_fun_arg_list(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_fun_def(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  nparser_priv0parse_fun_val_arg_list(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_expr_list(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_fun_val_arg(nparser0state_t0type* ___ref___im__0);
nast0fun_label_t0type nparser_priv0parse_fun_label(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_label(nparser0state_t0type* ___ref___im__0);
nast0value_t0type nparser_priv0parse_hash_key(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_hash(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_arr(nparser0state_t0type* ___ref___im__0);
nparser0try_value_t0type nparser_priv0parse_expr(nparser0state_t0type* ___ref___im__0);
nparser0try_value_t0type nparser_priv0parse_type(nparser0state_t0type* ___ref___im__0);
nparser0try_value_t0type nparser_priv0parse_expr_rec_left(nparser0state_t0type* ___ref___im__0,nast0value_t0type ___nl__im__1,INT  ___nl__int__2);
nparser0try_value_t0type nparser_priv0parse_expr_rec(nparser0state_t0type* ___ref___im__0,INT  ___nl__int__1);
nast0value_t0type nparser_priv0get_value_nop(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0eat_text(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_variant_label(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_variant(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0check_lvalue(nparser0state_t0type* ___ref___im__0,nast0value_t0type ___nl__im__1);
nast0variant_decl_t0type nparser_priv0parse_variant_decl(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_var_decl(nparser0state_t0type* ___ref___im__0);
nast0variable_declaration_t0type nparser_priv0parse_var_decl_sim(nparser0state_t0type* ___ref___im__0);
nast0variable_declaration_t0type nparser_priv0parse_ref_var_decl_sim(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_cond(nparser0state_t0type* ___ref___im__0);
nparser0try_cmd_t0type nparser_priv0parse_block(nparser0state_t0type* ___ref___im__0);
ImmT  nparser_priv0parse_try_ensure(nparser0state_t0type* ___ref___im__0);
nast0debug_t0type nparser_priv0get_debug_from_begin(nparser0state_t0type ___nl__im__0);
nparser0try_cmd_t0type nparser_priv0parse_cmd(nparser0state_t0type* ___ref___im__0);


ImmT nparser_priv0get_end_list(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(0);}
ImmT nparser_priv0get_end_list0cal() {
nparser_priv0__const__init();
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
c_rt_lib0move(&___nl__im__2,___get_global_const(409));
#line 19
c_rt_lib0move(&___nl__im__3,___get_global_const(846));
#line 19
c_rt_lib0move(&___nl__im__4,___get_global_const(963));
#line 19
c_rt_lib0move(&___nl__im__5,___get_global_const(848));
#line 19
c_rt_lib0move(&___nl__im__6,___get_global_const(849));
#line 19
c_rt_lib0move(&___nl__im__7,___get_global_const(850));
#line 19
c_rt_lib0move(&___nl__im__8,___get_global_const(851));
#line 19
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(7, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
c_rt_lib0clear(&___nl__im__4);
#line 19
c_rt_lib0clear(&___nl__im__5);
#line 19
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0clear(&___nl__im__7);
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 19
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 19
c_rt_lib0clear(&___nl__im__1);
#line 19
return ___nl__im__0;
}

ImmT  nparser0parse_ret_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0parse_ret_t");
return nparser0parse_ret_t();
}
ImmT  nparser0parse_ret_t() {
nparser_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 23
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(46), ___get_global_const(47)));
#line 23
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 23
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(820)));
#line 23
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 23
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__2, ___get_global_const(125), ___nl__im__3));
#line 23
c_rt_lib0clear(&___nl__im__2);
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 23
c_rt_lib0clear(&___nl__im__1);
#line 23
return ___nl__im__0;
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
return NULL;
}

ImmT  nparser0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0state_t");
return nparser0state_t();
}
ImmT  nparser0state_t() {
nparser_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 28
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_const(964), ___get_global_const(965)));
#line 28
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(820)));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 30
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 31
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 31
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(942), ___nl__im__2, ___get_global_const(51), ___nl__im__3, ___get_global_const(212), ___nl__im__4, ___get_global_const(966), ___nl__im__5));
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0clear(&___nl__im__4);
#line 31
c_rt_lib0clear(&___nl__im__5);
#line 31
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
return ___nl__im__0;
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
return NULL;
}

ImmT  nparser0try_value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_value_t");
return nparser0try_value_t();
}
ImmT  nparser0try_value_t() {
nparser_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(905)));
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 36
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 36
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__2, ___get_global_const(79), ___nl__im__3));
#line 36
c_rt_lib0clear(&___nl__im__2);
#line 36
c_rt_lib0clear(&___nl__im__3);
#line 36
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 36
c_rt_lib0clear(&___nl__im__1);
#line 36
return ___nl__im__0;
#line 36
c_rt_lib0clear(&___nl__im__0);
#line 36
return NULL;
}

ImmT  nparser0try_cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_cmd_t");
return nparser0try_cmd_t();
}
ImmT  nparser0try_cmd_t() {
nparser_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 40
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(313)));
#line 40
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 40
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 40
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__2, ___get_global_const(79), ___nl__im__3));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 40
return ___nl__im__0;
#line 40
c_rt_lib0clear(&___nl__im__0);
#line 40
return NULL;
}

ImmT  nparser0sparse(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 47
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__im__5, ntokenizer0init(___nl__im__0));
#line 47
c_rt_lib0move(&___nl__im__6, c_rt_lib0bool_to_nl_native(___nl__bool__2));
#line 47
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(51), ___nl__im__4, ___get_global_const(942), ___nl__im__5, ___get_global_const(212), ___nl__im__1, ___get_global_const(966), ___nl__im__6));
#line 47
c_rt_lib0clear(&___nl__im__4);
#line 47
c_rt_lib0clear(&___nl__im__5);
#line 47
c_rt_lib0clear(&___nl__im__6);
#line 48
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_module(&___nl__im__3, ___nl__im__1));
#line 49
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(51)));
#line 49
___nl__int__9 = c_rt_lib0array_len(___nl__im__10);
#line 49
c_rt_lib0clear(&___nl__im__10);
#line 49
___nl__int__11 = 0;
#line 49
___nl__int__12 = ___nl__int__9 > ___nl__int__11;
#line 49
___nl__bool__8 = ___nl__int__12;
#line 49
//clear ___nl__int__9;
#line 49
//clear ___nl__int__11;
#line 49
//clear ___nl__int__12;
#line 49
___nl__bool__8 = !___nl__bool__8;
#line 49
if(___nl__bool__8){ goto label_2;}
#line 49
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(51)));
#line 49
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(125), ___nl__im__14));
#line 49
c_rt_lib0clear(&___nl__im__14);
#line 49
c_rt_lib0clear(&___nl__im__0);
#line 49
c_rt_lib0clear(&___nl__im__1);
#line 49
//clear ___nl__bool__2;
#line 49
c_rt_lib0clear(&___nl__im__3);
#line 49
c_rt_lib0clear(&___nl__im__7);
#line 49
//clear ___nl__bool__8;
#line 49
return ___nl__im__13;
#line 49
goto label_1;
#line 49
label_2:
;
#line 49
label_1:
;
#line 49
//clear ___nl__bool__8;
#line 49
c_rt_lib0clear(&___nl__im__13);
#line 50
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__7));
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
c_rt_lib0clear(&___nl__im__1);
#line 50
//clear ___nl__bool__2;
#line 50
c_rt_lib0clear(&___nl__im__3);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
return ___nl__im__15;
}

ImmT  nparser_priv0add_error(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
#line 54
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 54
___nl__int__2 = ntokenizer0get_line(___nl__im__3);
#line 54
c_rt_lib0clear(&___nl__im__3);
#line 55
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 55
___nl__int__4 = ntokenizer0get_column(___nl__im__5);
#line 55
c_rt_lib0clear(&___nl__im__5);
#line 56
c_rt_lib0move(&___nl__im__6,___get_global_const(51));
#line 56
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 56
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__2));
#line 56
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(212)));
#line 56
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__4));
#line 56
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(125)));
#line 56
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_const(154), ___nl__im__8, ___get_global_const(152), ___nl__im__9, ___get_global_const(205), ___nl__im__10, ___get_global_const(157), ___nl__im__1, ___get_global_const(95), ___nl__im__11));
#line 56
c_rt_lib0clear(&___nl__im__8);
#line 56
c_rt_lib0clear(&___nl__im__9);
#line 56
c_rt_lib0clear(&___nl__im__10);
#line 56
c_rt_lib0clear(&___nl__im__11);
#line 56
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__7));
#line 56
c_rt_lib0move(&___nl__string__12,___get_global_const(51));
#line 56
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__12, ___nl__im__6));
#line 56
c_rt_lib0clear(&___nl__im__6);
#line 56
c_rt_lib0clear(&___nl__im__7);
#line 56
c_rt_lib0clear(&___nl__string__12);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
//clear ___nl__int__2;
#line 56
//clear ___nl__int__4;
#line 56
return NULL;
}

bool nparser_priv0eat(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
#line 60
c_rt_lib0move(&___nl__im__3,___get_global_const(942));
#line 60
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__3));
#line 60
___nl__bool__2 = ntokenizer0eat_token(&___nl__im__3, ___nl__im__1);
#line 60
c_rt_lib0move(&___nl__string__4,___get_global_const(942));
#line 60
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__4, ___nl__im__3));
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
c_rt_lib0clear(&___nl__string__4);
#line 60
___nl__bool__2 = !___nl__bool__2;
#line 60
if(___nl__bool__2){ goto label_2;}
#line 60
___nl__bool__5 = true;
#line 60
c_rt_lib0clear(&___nl__im__1);
#line 60
//clear ___nl__bool__2;
#line 60
return ___nl__bool__5;
#line 60
goto label_1;
#line 60
label_2:
;
#line 60
label_1:
;
#line 60
//clear ___nl__bool__2;
#line 60
//clear ___nl__bool__5;
#line 61
c_rt_lib0move(&___nl__im__9,___get_global_const(967));
#line 61
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 61
c_rt_lib0clear(&___nl__im__9);
#line 61
c_rt_lib0move(&___nl__im__10, string0lf());
#line 61
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 61
c_rt_lib0clear(&___nl__im__8);
#line 61
c_rt_lib0clear(&___nl__im__10);
#line 61
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 61
c_rt_lib0move(&___nl__im__11, ntokenizer0info(___nl__im__12));
#line 61
c_rt_lib0clear(&___nl__im__12);
#line 61
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 61
c_rt_lib0clear(&___nl__im__7);
#line 61
c_rt_lib0clear(&___nl__im__11);
#line 61
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__6));
#line 61
c_rt_lib0clear(&___nl__im__6);
#line 62
___nl__bool__13 = false;
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
return ___nl__bool__13;
}

bool nparser_priv0try_eat(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
#line 66
c_rt_lib0move(&___nl__im__3,___get_global_const(942));
#line 66
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__3));
#line 66
___nl__bool__2 = ntokenizer0eat_token(&___nl__im__3, ___nl__im__1);
#line 66
c_rt_lib0move(&___nl__string__4,___get_global_const(942));
#line 66
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__4, ___nl__im__3));
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 66
c_rt_lib0clear(&___nl__string__4);
#line 66
c_rt_lib0clear(&___nl__im__1);
#line 66
return ___nl__bool__2;
}

nast0module_t0type nparser_priv0parse_module(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__string__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__string__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__string__44 = NULL;
ImmT  ___nl__im__45 = NULL;
#line 70
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 70
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 70
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 70
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__1, ___get_global_const(173), ___nl__im__3, ___get_global_const(166), ___nl__im__4, ___get_global_const(909), ___nl__im__5));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 71
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 71
c_rt_lib0move(&___nl__im__7, ntokenizer0get_last_comment(___nl__im__8));
#line 71
c_rt_lib0clear(&___nl__im__8);
#line 71
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 71
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(909), ___nl__im__6);
#line 71
c_rt_lib0clear(&___nl__im__6);
#line 71
c_rt_lib0clear(&___nl__im__7);
#line 72
label_2:
;
#line 72
c_rt_lib0move(&___nl__im__10,___get_global_const(968));
#line 72
___nl__bool__9 = nparser_priv0try_eat(___ref___im__0, ___nl__im__10);
#line 72
c_rt_lib0clear(&___nl__im__10);
#line 72
___nl__bool__9 = !___nl__bool__9;
#line 72
if(___nl__bool__9){ goto label_1;}
#line 73
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 73
___nl__int__11 = ntokenizer0get_line(___nl__im__12);
#line 73
c_rt_lib0clear(&___nl__im__12);
#line 74
c_rt_lib0move(&___nl__im__14,___get_global_const(942));
#line 74
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__14));
#line 74
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 74
___nl__bool__13 = ntokenizer0is_type(&___nl__im__14, ___nl__im__15);
#line 74
c_rt_lib0move(&___nl__string__16,___get_global_const(942));
#line 74
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__16, ___nl__im__14));
#line 74
c_rt_lib0clear(&___nl__im__14);
#line 74
c_rt_lib0clear(&___nl__im__15);
#line 74
c_rt_lib0clear(&___nl__string__16);
#line 74
___nl__bool__13 = !___nl__bool__13;
#line 74
if(___nl__bool__13){ goto label_4;}
#line 75
c_rt_lib0move(&___nl__im__17,___get_global_const(173));
#line 75
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__17));
#line 75
c_rt_lib0move(&___nl__im__20,___get_global_const(942));
#line 75
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__20));
#line 75
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 75
c_rt_lib0move(&___nl__im__19, ntokenizer0eat_type(&___nl__im__20, ___nl__im__21));
#line 75
c_rt_lib0move(&___nl__string__22,___get_global_const(942));
#line 75
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__22, ___nl__im__20));
#line 75
c_rt_lib0clear(&___nl__im__20);
#line 75
c_rt_lib0clear(&___nl__im__21);
#line 75
c_rt_lib0clear(&___nl__string__22);
#line 75
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__11));
#line 75
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__19, ___get_global_const(154), ___nl__im__23));
#line 75
c_rt_lib0clear(&___nl__im__19);
#line 75
c_rt_lib0clear(&___nl__im__23);
#line 75
c_rt_lib0delete(array0push(&___nl__im__17, ___nl__im__18));
#line 75
c_rt_lib0move(&___nl__string__24,___get_global_const(173));
#line 75
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__24, ___nl__im__17));
#line 75
c_rt_lib0clear(&___nl__im__17);
#line 75
c_rt_lib0clear(&___nl__im__18);
#line 75
c_rt_lib0clear(&___nl__string__24);
#line 76
goto label_3;
#line 76
label_4:
;
#line 77
c_rt_lib0move(&___nl__im__25,___get_global_const(970));
#line 77
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__25));
#line 77
c_rt_lib0clear(&___nl__im__25);
#line 78
goto label_3;
#line 78
label_3:
;
#line 78
//clear ___nl__bool__13;
#line 79
c_rt_lib0move(&___nl__im__26,___get_global_const(409));
#line 79
___nl__bool__27 = nparser_priv0eat(___ref___im__0, ___nl__im__26);
#line 79
c_rt_lib0clear(&___nl__im__26);
#line 79
//clear ___nl__bool__27;
#line 80
goto label_2;
#line 80
label_1:
;
#line 81
label_6:
;
#line 81
c_rt_lib0move(&___nl__im__29,___get_global_const(942));
#line 81
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__29));
#line 81
c_rt_lib0move(&___nl__im__30,___get_global_const(689));
#line 81
___nl__bool__28 = ntokenizer0next_is(&___nl__im__29, ___nl__im__30);
#line 81
c_rt_lib0move(&___nl__string__31,___get_global_const(942));
#line 81
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__31, ___nl__im__29));
#line 81
c_rt_lib0clear(&___nl__im__29);
#line 81
c_rt_lib0clear(&___nl__im__30);
#line 81
c_rt_lib0clear(&___nl__string__31);
#line 81
___nl__bool__28 = !___nl__bool__28;
#line 81
if(___nl__bool__28){ goto label_5;}
#line 82
c_rt_lib0move(&___nl__im__32, nparser_priv0parse_fun_def(___ref___im__0, ___nl__im__1));
#line 82
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(80));
#line 82
if(___nl__bool__33){ goto label_8;}
#line 84
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(79));
#line 84
if(___nl__bool__33){ goto label_9;}
#line 84
c_rt_lib0move(&___nl__im__34,___get_global_const(16));
#line 84
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__32));
#line 84
nl_die_arg(___nl__im__34);
#line 82
label_8:
;
#line 82
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(80)));
#line 82
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 83
c_rt_lib0move(&___nl__im__37,___get_global_const(166));
#line 83
c_rt_lib0move(&___nl__im__37, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__37));
#line 83
c_rt_lib0delete(array0push(&___nl__im__37, ___nl__im__35));
#line 83
c_rt_lib0move(&___nl__string__38,___get_global_const(166));
#line 83
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__38, ___nl__im__37));
#line 83
c_rt_lib0clear(&___nl__im__37);
#line 83
c_rt_lib0clear(&___nl__string__38);
#line 84
goto label_7;
#line 84
label_9:
;
#line 84
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(79)));
#line 84
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 85
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__39));
#line 86
c_rt_lib0clear(&___nl__im__1);
#line 86
//clear ___nl__bool__9;
#line 86
//clear ___nl__int__11;
#line 86
//clear ___nl__bool__28;
#line 86
c_rt_lib0clear(&___nl__im__32);
#line 86
//clear ___nl__bool__33;
#line 86
c_rt_lib0clear(&___nl__im__34);
#line 86
c_rt_lib0clear(&___nl__im__35);
#line 86
c_rt_lib0clear(&___nl__im__36);
#line 86
c_rt_lib0clear(&___nl__im__39);
#line 86
c_rt_lib0clear(&___nl__im__40);
#line 86
return ___nl__im__2;
#line 87
goto label_7;
#line 87
label_7:
;
#line 88
goto label_6;
#line 88
label_5:
;
#line 89
c_rt_lib0move(&___nl__im__42,___get_global_const(942));
#line 89
c_rt_lib0move(&___nl__im__42, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__42));
#line 89
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(916)));
#line 89
___nl__bool__41 = ntokenizer0is_type(&___nl__im__42, ___nl__im__43);
#line 89
c_rt_lib0move(&___nl__string__44,___get_global_const(942));
#line 89
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__44, ___nl__im__42));
#line 89
c_rt_lib0clear(&___nl__im__42);
#line 89
c_rt_lib0clear(&___nl__im__43);
#line 89
c_rt_lib0clear(&___nl__string__44);
#line 89
___nl__bool__41 = !___nl__bool__41;
#line 89
___nl__bool__41 = !___nl__bool__41;
#line 89
if(___nl__bool__41){ goto label_11;}
#line 89
c_rt_lib0move(&___nl__im__45,___get_global_const(971));
#line 89
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__45));
#line 89
c_rt_lib0clear(&___nl__im__45);
#line 89
goto label_10;
#line 89
label_11:
;
#line 89
label_10:
;
#line 89
//clear ___nl__bool__41;
#line 90
c_rt_lib0clear(&___nl__im__1);
#line 90
//clear ___nl__bool__9;
#line 90
//clear ___nl__int__11;
#line 90
//clear ___nl__bool__28;
#line 90
c_rt_lib0clear(&___nl__im__32);
#line 90
//clear ___nl__bool__33;
#line 90
c_rt_lib0clear(&___nl__im__34);
#line 90
c_rt_lib0clear(&___nl__im__35);
#line 90
c_rt_lib0clear(&___nl__im__36);
#line 90
c_rt_lib0clear(&___nl__im__39);
#line 90
c_rt_lib0clear(&___nl__im__40);
#line 90
return ___nl__im__2;
}

ImmT  nparser_priv0parse_fun_arg_list(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__string__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
#line 97
c_rt_lib0move(&___nl__im__1,___get_global_const(420));
#line 97
___nl__bool__2 = nparser_priv0eat(___ref___im__0, ___nl__im__1);
#line 97
c_rt_lib0clear(&___nl__im__1);
#line 97
//clear ___nl__bool__2;
#line 98
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 99
label_2:
;
#line 99
c_rt_lib0move(&___nl__im__5,___get_global_const(942));
#line 99
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__5));
#line 99
c_rt_lib0move(&___nl__im__6,___get_global_const(299));
#line 99
___nl__bool__4 = ntokenizer0next_is(&___nl__im__5, ___nl__im__6);
#line 99
c_rt_lib0move(&___nl__string__7,___get_global_const(942));
#line 99
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__7, ___nl__im__5));
#line 99
c_rt_lib0clear(&___nl__im__5);
#line 99
c_rt_lib0clear(&___nl__im__6);
#line 99
c_rt_lib0clear(&___nl__string__7);
#line 99
___nl__bool__4 = !___nl__bool__4;
#line 99
___nl__bool__4 = !___nl__bool__4;
#line 99
if(___nl__bool__4){ goto label_1;}
#line 100
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 100
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 100
c_rt_lib0move(&___nl__im__11,___get_global_const(37));
#line 100
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 100
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(4, ___get_global_const(266), ___nl__im__9, ___get_global_const(95), ___nl__im__10, ___get_global_const(168), ___nl__im__11, ___get_global_const(454), ___nl__im__12));
#line 100
c_rt_lib0clear(&___nl__im__9);
#line 100
c_rt_lib0clear(&___nl__im__10);
#line 100
c_rt_lib0clear(&___nl__im__11);
#line 100
c_rt_lib0clear(&___nl__im__12);
#line 101
c_rt_lib0move(&___nl__im__14,___get_global_const(40));
#line 101
___nl__bool__13 = nparser_priv0try_eat(___ref___im__0, ___nl__im__14);
#line 101
c_rt_lib0clear(&___nl__im__14);
#line 101
___nl__bool__13 = !___nl__bool__13;
#line 101
if(___nl__bool__13){ goto label_4;}
#line 101
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 101
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 101
c_rt_lib0hash_set_value_dec(&___nl__im__8, ___get_global_const(266), ___nl__im__15);
#line 101
c_rt_lib0clear(&___nl__im__15);
#line 101
c_rt_lib0clear(&___nl__im__16);
#line 101
goto label_3;
#line 101
label_4:
;
#line 101
label_3:
;
#line 101
//clear ___nl__bool__13;
#line 102
c_rt_lib0move(&___nl__im__18,___get_global_const(942));
#line 102
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__18));
#line 102
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 102
___nl__bool__17 = ntokenizer0is_type(&___nl__im__18, ___nl__im__19);
#line 102
c_rt_lib0move(&___nl__string__20,___get_global_const(942));
#line 102
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__20, ___nl__im__18));
#line 102
c_rt_lib0clear(&___nl__im__18);
#line 102
c_rt_lib0clear(&___nl__im__19);
#line 102
c_rt_lib0clear(&___nl__string__20);
#line 102
___nl__bool__17 = !___nl__bool__17;
#line 102
if(___nl__bool__17){ goto label_6;}
#line 103
c_rt_lib0move(&___nl__im__23,___get_global_const(942));
#line 103
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__23));
#line 103
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 103
c_rt_lib0move(&___nl__im__22, ntokenizer0eat_type(&___nl__im__23, ___nl__im__24));
#line 103
c_rt_lib0move(&___nl__string__25,___get_global_const(942));
#line 103
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__25, ___nl__im__23));
#line 103
c_rt_lib0clear(&___nl__im__23);
#line 103
c_rt_lib0clear(&___nl__im__24);
#line 103
c_rt_lib0clear(&___nl__string__25);
#line 103
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 103
c_rt_lib0hash_set_value_dec(&___nl__im__8, ___get_global_const(168), ___nl__im__21);
#line 103
c_rt_lib0clear(&___nl__im__21);
#line 103
c_rt_lib0clear(&___nl__im__22);
#line 104
goto label_5;
#line 104
label_6:
;
#line 105
c_rt_lib0move(&___nl__im__26,___get_global_const(972));
#line 105
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__26));
#line 105
c_rt_lib0clear(&___nl__im__26);
#line 106
goto label_5;
#line 106
label_5:
;
#line 106
//clear ___nl__bool__17;
#line 107
c_rt_lib0move(&___nl__im__28,___get_global_const(484));
#line 107
___nl__bool__27 = nparser_priv0try_eat(___ref___im__0, ___nl__im__28);
#line 107
c_rt_lib0clear(&___nl__im__28);
#line 107
___nl__bool__27 = !___nl__bool__27;
#line 107
if(___nl__bool__27){ goto label_8;}
#line 108
c_rt_lib0move(&___nl__im__31, nparser_priv0parse_type(___ref___im__0));
#line 108
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(80));
#line 108
if(___nl__bool__30){ goto label_9;}
#line 108
c_rt_lib0clear(&___nl__im__3);
#line 108
//clear ___nl__bool__4;
#line 108
c_rt_lib0clear(&___nl__im__8);
#line 108
//clear ___nl__bool__27;
#line 108
c_rt_lib0clear(&___nl__im__29);
#line 108
//clear ___nl__bool__30;
#line 108
return ___nl__im__31;
#line 108
label_9:
;
#line 108
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(80)));
#line 109
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__im__29));
#line 109
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 109
c_rt_lib0hash_set_value_dec(&___nl__im__8, ___get_global_const(95), ___nl__im__32);
#line 109
c_rt_lib0clear(&___nl__im__32);
#line 109
c_rt_lib0clear(&___nl__im__33);
#line 110
goto label_7;
#line 110
label_8:
;
#line 110
label_7:
;
#line 110
//clear ___nl__bool__27;
#line 110
c_rt_lib0clear(&___nl__im__29);
#line 110
//clear ___nl__bool__30;
#line 110
c_rt_lib0clear(&___nl__im__31);
#line 111
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__8));
#line 112
c_rt_lib0move(&___nl__im__35,___get_global_const(295));
#line 112
___nl__bool__34 = nparser_priv0try_eat(___ref___im__0, ___nl__im__35);
#line 112
c_rt_lib0clear(&___nl__im__35);
#line 112
___nl__bool__34 = !___nl__bool__34;
#line 112
___nl__bool__34 = !___nl__bool__34;
#line 112
if(___nl__bool__34){ goto label_11;}
#line 112
goto label_1;
#line 112
goto label_10;
#line 112
label_11:
;
#line 112
label_10:
;
#line 112
//clear ___nl__bool__34;
#line 113
goto label_2;
#line 113
label_1:
;
#line 114
c_rt_lib0move(&___nl__im__36,___get_global_const(299));
#line 114
___nl__bool__37 = nparser_priv0eat(___ref___im__0, ___nl__im__36);
#line 114
c_rt_lib0clear(&___nl__im__36);
#line 114
//clear ___nl__bool__37;
#line 115
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
//clear ___nl__bool__4;
#line 115
c_rt_lib0clear(&___nl__im__8);
#line 115
return ___nl__im__38;
}

ImmT  nparser_priv0parse_fun_def(nparser0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
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
bool  ___nl__bool__17 = false;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__string__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__string__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
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
#line 123
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 123
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 123
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(95), ___nl__im__4, ___get_global_const(454), ___nl__im__5));
#line 123
c_rt_lib0clear(&___nl__im__4);
#line 123
c_rt_lib0clear(&___nl__im__5);
#line 124
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 124
___nl__int__6 = ntokenizer0get_line(___nl__im__7);
#line 124
c_rt_lib0clear(&___nl__im__7);
#line 124
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 125
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 126
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 127
c_rt_lib0move(&___nl__im__12, nparser_priv0get_debug_from_begin((*___ref___im__0)));
#line 127
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(859)));
#line 127
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__12, ___get_global_const(227), ___nl__im__13));
#line 127
c_rt_lib0clear(&___nl__im__12);
#line 127
c_rt_lib0clear(&___nl__im__13);
#line 128
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(428)));
#line 129
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 129
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(7, ___get_global_const(387), ___nl__im__3, ___get_global_const(154), ___nl__im__8, ___get_global_const(265), ___nl__im__9, ___get_global_const(168), ___nl__im__10, ___get_global_const(227), ___nl__im__11, ___get_global_const(209), ___nl__im__14, ___get_global_const(167), ___nl__im__15));
#line 129
c_rt_lib0clear(&___nl__im__3);
#line 129
//clear ___nl__int__6;
#line 129
c_rt_lib0clear(&___nl__im__8);
#line 129
c_rt_lib0clear(&___nl__im__9);
#line 129
c_rt_lib0clear(&___nl__im__10);
#line 129
c_rt_lib0clear(&___nl__im__11);
#line 129
c_rt_lib0clear(&___nl__im__14);
#line 129
c_rt_lib0clear(&___nl__im__15);
#line 131
c_rt_lib0move(&___nl__im__16,___get_global_const(689));
#line 131
___nl__bool__17 = nparser_priv0eat(___ref___im__0, ___nl__im__16);
#line 131
c_rt_lib0clear(&___nl__im__16);
#line 131
//clear ___nl__bool__17;
#line 132
c_rt_lib0move(&___nl__im__19, nparser_priv0eat_text(___ref___im__0));
#line 132
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(80));
#line 132
if(___nl__bool__18){ goto label_1;}
#line 132
c_rt_lib0clear(&___nl__im__1);
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
//clear ___nl__bool__18;
#line 132
return ___nl__im__19;
#line 132
label_1:
;
#line 132
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(80)));
#line 132
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(168), ___nl__im__20);
#line 133
c_rt_lib0move(&___nl__im__22,___get_global_const(35));
#line 133
___nl__bool__21 = nparser_priv0try_eat(___ref___im__0, ___nl__im__22);
#line 133
c_rt_lib0clear(&___nl__im__22);
#line 133
___nl__bool__21 = !___nl__bool__21;
#line 133
if(___nl__bool__21){ goto label_3;}
#line 134
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(168)));
#line 134
___nl__bool__23 = c_rt_lib0ne(___nl__im__24, ___nl__im__1);
#line 134
c_rt_lib0clear(&___nl__im__24);
#line 134
___nl__bool__23 = !___nl__bool__23;
#line 134
if(___nl__bool__23){ goto label_5;}
#line 135
c_rt_lib0move(&___nl__im__28,___get_global_const(973));
#line 135
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(168)));
#line 135
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 135
c_rt_lib0clear(&___nl__im__28);
#line 135
c_rt_lib0clear(&___nl__im__29);
#line 135
c_rt_lib0move(&___nl__im__30,___get_global_const(974));
#line 135
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 135
c_rt_lib0clear(&___nl__im__27);
#line 135
c_rt_lib0clear(&___nl__im__30);
#line 135
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__1));
#line 135
c_rt_lib0clear(&___nl__im__26);
#line 135
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__25));
#line 135
c_rt_lib0clear(&___nl__im__25);
#line 136
goto label_4;
#line 136
label_5:
;
#line 136
label_4:
;
#line 136
//clear ___nl__bool__23;
#line 137
c_rt_lib0move(&___nl__im__32, nparser_priv0eat_text(___ref___im__0));
#line 137
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(80));
#line 137
if(___nl__bool__31){ goto label_6;}
#line 137
c_rt_lib0clear(&___nl__im__1);
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 137
//clear ___nl__bool__18;
#line 137
c_rt_lib0clear(&___nl__im__19);
#line 137
c_rt_lib0clear(&___nl__im__20);
#line 137
//clear ___nl__bool__21;
#line 137
//clear ___nl__bool__31;
#line 137
return ___nl__im__32;
#line 137
label_6:
;
#line 137
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(80)));
#line 137
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(168), ___nl__im__33);
#line 138
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(210)));
#line 138
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 138
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(209), ___nl__im__34);
#line 138
c_rt_lib0clear(&___nl__im__34);
#line 138
c_rt_lib0clear(&___nl__im__35);
#line 139
goto label_2;
#line 139
label_3:
;
#line 139
label_2:
;
#line 139
//clear ___nl__bool__21;
#line 139
//clear ___nl__bool__31;
#line 139
c_rt_lib0clear(&___nl__im__32);
#line 139
c_rt_lib0clear(&___nl__im__33);
#line 140
c_rt_lib0move(&___nl__im__37, nparser_priv0parse_fun_arg_list(___ref___im__0));
#line 140
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(80));
#line 140
if(___nl__bool__36){ goto label_7;}
#line 140
c_rt_lib0clear(&___nl__im__1);
#line 140
c_rt_lib0clear(&___nl__im__2);
#line 140
//clear ___nl__bool__18;
#line 140
c_rt_lib0clear(&___nl__im__19);
#line 140
c_rt_lib0clear(&___nl__im__20);
#line 140
//clear ___nl__bool__36;
#line 140
return ___nl__im__37;
#line 140
label_7:
;
#line 140
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__37, ___get_global_const(80)));
#line 140
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(265), ___nl__im__38);
#line 141
c_rt_lib0move(&___nl__im__40,___get_global_const(942));
#line 141
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__40));
#line 141
c_rt_lib0move(&___nl__im__41,___get_global_const(484));
#line 141
___nl__bool__39 = ntokenizer0next_is(&___nl__im__40, ___nl__im__41);
#line 141
c_rt_lib0move(&___nl__string__42,___get_global_const(942));
#line 141
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__42, ___nl__im__40));
#line 141
c_rt_lib0clear(&___nl__im__40);
#line 141
c_rt_lib0clear(&___nl__im__41);
#line 141
c_rt_lib0clear(&___nl__string__42);
#line 141
___nl__bool__39 = !___nl__bool__39;
#line 141
if(___nl__bool__39){ goto label_9;}
#line 142
c_rt_lib0move(&___nl__im__43,___get_global_const(484));
#line 142
___nl__bool__44 = nparser_priv0eat(___ref___im__0, ___nl__im__43);
#line 142
c_rt_lib0clear(&___nl__im__43);
#line 142
//clear ___nl__bool__44;
#line 143
c_rt_lib0move(&___nl__im__47, nparser_priv0parse_type(___ref___im__0));
#line 143
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__47, ___get_global_const(80));
#line 143
if(___nl__bool__46){ goto label_10;}
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
//clear ___nl__bool__18;
#line 143
c_rt_lib0clear(&___nl__im__19);
#line 143
c_rt_lib0clear(&___nl__im__20);
#line 143
//clear ___nl__bool__36;
#line 143
c_rt_lib0clear(&___nl__im__37);
#line 143
c_rt_lib0clear(&___nl__im__38);
#line 143
//clear ___nl__bool__39;
#line 143
c_rt_lib0clear(&___nl__im__45);
#line 143
//clear ___nl__bool__46;
#line 143
return ___nl__im__47;
#line 143
label_10:
;
#line 143
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__47, ___get_global_const(80)));
#line 144
c_rt_lib0move(&___nl__im__48,___get_global_const(387));
#line 144
c_rt_lib0move(&___nl__im__48, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__48));
#line 144
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__im__45));
#line 144
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 144
c_rt_lib0hash_set_value_dec(&___nl__im__48, ___get_global_const(95), ___nl__im__49);
#line 144
c_rt_lib0move(&___nl__string__51,___get_global_const(387));
#line 144
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__51, ___nl__im__48));
#line 144
c_rt_lib0clear(&___nl__im__48);
#line 144
c_rt_lib0clear(&___nl__im__49);
#line 144
c_rt_lib0clear(&___nl__im__50);
#line 144
c_rt_lib0clear(&___nl__string__51);
#line 145
goto label_8;
#line 145
label_9:
;
#line 145
label_8:
;
#line 145
//clear ___nl__bool__39;
#line 145
c_rt_lib0clear(&___nl__im__45);
#line 145
//clear ___nl__bool__46;
#line 145
c_rt_lib0clear(&___nl__im__47);
#line 146
c_rt_lib0move(&___nl__im__53, nparser_priv0parse_block(___ref___im__0));
#line 146
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__53, ___get_global_const(80));
#line 146
if(___nl__bool__52){ goto label_11;}
#line 146
c_rt_lib0clear(&___nl__im__1);
#line 146
c_rt_lib0clear(&___nl__im__2);
#line 146
//clear ___nl__bool__18;
#line 146
c_rt_lib0clear(&___nl__im__19);
#line 146
c_rt_lib0clear(&___nl__im__20);
#line 146
//clear ___nl__bool__36;
#line 146
c_rt_lib0clear(&___nl__im__37);
#line 146
c_rt_lib0clear(&___nl__im__38);
#line 146
//clear ___nl__bool__52;
#line 146
return ___nl__im__53;
#line 146
label_11:
;
#line 146
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__53, ___get_global_const(80)));
#line 146
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(227), ___nl__im__54);
#line 147
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(227)));
#line 147
c_rt_lib0move(&___nl__im__55, ptd_parser0fun_def_to_ptd(___nl__im__56));
#line 147
c_rt_lib0clear(&___nl__im__56);
#line 147
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__55, ___get_global_const(79));
#line 147
if(___nl__bool__57){ goto label_13;}
#line 151
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__55, ___get_global_const(80));
#line 151
if(___nl__bool__57){ goto label_14;}
#line 151
c_rt_lib0move(&___nl__im__58,___get_global_const(16));
#line 151
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__55));
#line 151
nl_die_arg(___nl__im__58);
#line 147
label_13:
;
#line 147
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__55, ___get_global_const(79)));
#line 147
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 150
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 150
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 150
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__61);
#line 150
c_rt_lib0clear(&___nl__im__61);
#line 150
c_rt_lib0clear(&___nl__im__62);
#line 151
goto label_12;
#line 151
label_14:
;
#line 151
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__55, ___get_global_const(80)));
#line 151
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 152
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(77), ___nl__im__63));
#line 152
c_rt_lib0copy(&___nl__im__65, ___nl__im__66);
#line 152
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__65);
#line 152
c_rt_lib0clear(&___nl__im__65);
#line 152
c_rt_lib0clear(&___nl__im__66);
#line 153
goto label_12;
#line 153
label_12:
;
#line 154
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__2));
#line 154
c_rt_lib0clear(&___nl__im__1);
#line 154
c_rt_lib0clear(&___nl__im__2);
#line 154
//clear ___nl__bool__18;
#line 154
c_rt_lib0clear(&___nl__im__19);
#line 154
c_rt_lib0clear(&___nl__im__20);
#line 154
//clear ___nl__bool__36;
#line 154
c_rt_lib0clear(&___nl__im__37);
#line 154
c_rt_lib0clear(&___nl__im__38);
#line 154
//clear ___nl__bool__52;
#line 154
c_rt_lib0clear(&___nl__im__53);
#line 154
c_rt_lib0clear(&___nl__im__54);
#line 154
c_rt_lib0clear(&___nl__im__55);
#line 154
//clear ___nl__bool__57;
#line 154
c_rt_lib0clear(&___nl__im__58);
#line 154
c_rt_lib0clear(&___nl__im__59);
#line 154
c_rt_lib0clear(&___nl__im__60);
#line 154
c_rt_lib0clear(&___nl__im__63);
#line 154
c_rt_lib0clear(&___nl__im__64);
#line 154
return ___nl__im__67;
}

ImmT  nparser_priv0parse_fun_val_arg_list(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__string__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
#line 161
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 162
label_2:
;
#line 162
c_rt_lib0move(&___nl__im__3,___get_global_const(942));
#line 162
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__3));
#line 162
c_rt_lib0move(&___nl__im__4,___get_global_const(299));
#line 162
___nl__bool__2 = ntokenizer0next_is(&___nl__im__3, ___nl__im__4);
#line 162
c_rt_lib0move(&___nl__string__5,___get_global_const(942));
#line 162
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__5, ___nl__im__3));
#line 162
c_rt_lib0clear(&___nl__im__3);
#line 162
c_rt_lib0clear(&___nl__im__4);
#line 162
c_rt_lib0clear(&___nl__string__5);
#line 162
___nl__bool__2 = !___nl__bool__2;
#line 162
___nl__bool__2 = !___nl__bool__2;
#line 162
if(___nl__bool__2){ goto label_1;}
#line 163
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_fun_val_arg(___ref___im__0));
#line 163
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 163
if(___nl__bool__7){ goto label_3;}
#line 163
c_rt_lib0clear(&___nl__im__1);
#line 163
//clear ___nl__bool__2;
#line 163
c_rt_lib0clear(&___nl__im__6);
#line 163
//clear ___nl__bool__7;
#line 163
return ___nl__im__8;
#line 163
label_3:
;
#line 163
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 164
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 165
c_rt_lib0move(&___nl__im__10,___get_global_const(295));
#line 165
___nl__bool__9 = nparser_priv0try_eat(___ref___im__0, ___nl__im__10);
#line 165
c_rt_lib0clear(&___nl__im__10);
#line 165
___nl__bool__9 = !___nl__bool__9;
#line 165
___nl__bool__9 = !___nl__bool__9;
#line 165
if(___nl__bool__9){ goto label_5;}
#line 165
goto label_1;
#line 165
goto label_4;
#line 165
label_5:
;
#line 165
label_4:
;
#line 165
//clear ___nl__bool__9;
#line 166
goto label_2;
#line 166
label_1:
;
#line 167
c_rt_lib0move(&___nl__im__11,___get_global_const(299));
#line 167
___nl__bool__12 = nparser_priv0eat(___ref___im__0, ___nl__im__11);
#line 167
c_rt_lib0clear(&___nl__im__11);
#line 167
//clear ___nl__bool__12;
#line 168
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 168
c_rt_lib0clear(&___nl__im__1);
#line 168
//clear ___nl__bool__2;
#line 168
c_rt_lib0clear(&___nl__im__6);
#line 168
//clear ___nl__bool__7;
#line 168
c_rt_lib0clear(&___nl__im__8);
#line 168
return ___nl__im__13;
}

ImmT  nparser_priv0parse_expr_list(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__string__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
#line 172
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 173
label_2:
;
#line 173
c_rt_lib0move(&___nl__im__3,___get_global_const(942));
#line 173
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__3));
#line 173
c_rt_lib0move(&___nl__im__4,___get_global_const(299));
#line 173
___nl__bool__2 = ntokenizer0next_is(&___nl__im__3, ___nl__im__4);
#line 173
c_rt_lib0move(&___nl__string__5,___get_global_const(942));
#line 173
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__5, ___nl__im__3));
#line 173
c_rt_lib0clear(&___nl__im__3);
#line 173
c_rt_lib0clear(&___nl__im__4);
#line 173
c_rt_lib0clear(&___nl__string__5);
#line 173
___nl__bool__2 = !___nl__bool__2;
#line 173
___nl__bool__2 = !___nl__bool__2;
#line 173
if(___nl__bool__2){ goto label_1;}
#line 174
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_expr(___ref___im__0));
#line 174
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 174
if(___nl__bool__7){ goto label_3;}
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
//clear ___nl__bool__2;
#line 174
c_rt_lib0clear(&___nl__im__6);
#line 174
//clear ___nl__bool__7;
#line 174
return ___nl__im__8;
#line 174
label_3:
;
#line 174
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 175
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 176
c_rt_lib0move(&___nl__im__10,___get_global_const(295));
#line 176
___nl__bool__9 = nparser_priv0try_eat(___ref___im__0, ___nl__im__10);
#line 176
c_rt_lib0clear(&___nl__im__10);
#line 176
___nl__bool__9 = !___nl__bool__9;
#line 176
___nl__bool__9 = !___nl__bool__9;
#line 176
if(___nl__bool__9){ goto label_5;}
#line 176
goto label_1;
#line 176
goto label_4;
#line 176
label_5:
;
#line 176
label_4:
;
#line 176
//clear ___nl__bool__9;
#line 177
goto label_2;
#line 177
label_1:
;
#line 178
c_rt_lib0move(&___nl__im__11,___get_global_const(299));
#line 178
___nl__bool__12 = nparser_priv0eat(___ref___im__0, ___nl__im__11);
#line 178
c_rt_lib0clear(&___nl__im__11);
#line 178
//clear ___nl__bool__12;
#line 179
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 179
c_rt_lib0clear(&___nl__im__1);
#line 179
//clear ___nl__bool__2;
#line 179
c_rt_lib0clear(&___nl__im__6);
#line 179
//clear ___nl__bool__7;
#line 179
c_rt_lib0clear(&___nl__im__8);
#line 179
return ___nl__im__13;
}

ImmT  nparser_priv0parse_fun_val_arg(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
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
ImmT  ___nl__im__11 = NULL;
#line 183
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 184
c_rt_lib0move(&___nl__im__5,___get_global_const(40));
#line 184
___nl__bool__4 = nparser_priv0try_eat(___ref___im__0, ___nl__im__5);
#line 184
c_rt_lib0clear(&___nl__im__5);
#line 184
if(___nl__bool__4){ goto label_2;}
#line 184
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 184
goto label_1;
#line 184
label_2:
;
#line 184
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 184
label_1:
;
#line 184
//clear ___nl__bool__4;
#line 184
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 184
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(266), ___nl__im__2);
#line 184
c_rt_lib0clear(&___nl__im__2);
#line 184
c_rt_lib0clear(&___nl__im__3);
#line 185
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___im__0));
#line 185
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 185
if(___nl__bool__6){ goto label_3;}
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
//clear ___nl__bool__6;
#line 185
return ___nl__im__7;
#line 185
label_3:
;
#line 185
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 185
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(224), ___nl__im__8);
#line 186
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 186
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 186
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(910), ___nl__im__9);
#line 186
c_rt_lib0clear(&___nl__im__9);
#line 186
c_rt_lib0clear(&___nl__im__10);
#line 187
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 187
c_rt_lib0clear(&___nl__im__1);
#line 187
//clear ___nl__bool__6;
#line 187
c_rt_lib0clear(&___nl__im__7);
#line 187
c_rt_lib0clear(&___nl__im__8);
#line 187
return ___nl__im__11;
}

nast0fun_label_t0type nparser_priv0parse_fun_label(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__string__13 = NULL;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
#line 191
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 191
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 191
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__2, ___get_global_const(152), ___nl__im__3));
#line 191
c_rt_lib0clear(&___nl__im__2);
#line 191
c_rt_lib0clear(&___nl__im__3);
#line 192
c_rt_lib0move(&___nl__im__5,___get_global_const(942));
#line 192
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__5));
#line 192
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 192
___nl__bool__4 = ntokenizer0is_type(&___nl__im__5, ___nl__im__6);
#line 192
c_rt_lib0move(&___nl__string__7,___get_global_const(942));
#line 192
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__7, ___nl__im__5));
#line 192
c_rt_lib0clear(&___nl__im__5);
#line 192
c_rt_lib0clear(&___nl__im__6);
#line 192
c_rt_lib0clear(&___nl__string__7);
#line 192
___nl__bool__4 = !___nl__bool__4;
#line 192
___nl__bool__4 = !___nl__bool__4;
#line 192
if(___nl__bool__4){ goto label_2;}
#line 193
c_rt_lib0move(&___nl__im__8,___get_global_const(975));
#line 193
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__8));
#line 193
c_rt_lib0clear(&___nl__im__8);
#line 194
//clear ___nl__bool__4;
#line 194
return ___nl__im__1;
#line 195
goto label_1;
#line 195
label_2:
;
#line 195
label_1:
;
#line 195
//clear ___nl__bool__4;
#line 196
c_rt_lib0move(&___nl__im__11,___get_global_const(942));
#line 196
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__11));
#line 196
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 196
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(&___nl__im__11, ___nl__im__12));
#line 196
c_rt_lib0move(&___nl__string__13,___get_global_const(942));
#line 196
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__13, ___nl__im__11));
#line 196
c_rt_lib0clear(&___nl__im__11);
#line 196
c_rt_lib0clear(&___nl__im__12);
#line 196
c_rt_lib0clear(&___nl__string__13);
#line 196
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 196
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(152), ___nl__im__9);
#line 196
c_rt_lib0clear(&___nl__im__9);
#line 196
c_rt_lib0clear(&___nl__im__10);
#line 197
c_rt_lib0move(&___nl__im__16,___get_global_const(35));
#line 197
___nl__bool__14 = nparser_priv0try_eat(___ref___im__0, ___nl__im__16);
#line 197
c_rt_lib0clear(&___nl__im__16);
#line 197
___nl__bool__15 = !___nl__bool__14;
#line 197
if(___nl__bool__15){ goto label_5;}
#line 197
c_rt_lib0move(&___nl__im__17,___get_global_const(942));
#line 197
c_rt_lib0move(&___nl__im__17, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__17));
#line 197
___nl__bool__14 = ntokenizer0is_text(&___nl__im__17);
#line 197
c_rt_lib0move(&___nl__string__18,___get_global_const(942));
#line 197
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__18, ___nl__im__17));
#line 197
c_rt_lib0clear(&___nl__im__17);
#line 197
c_rt_lib0clear(&___nl__string__18);
#line 197
label_5:
;
#line 197
//clear ___nl__bool__15;
#line 197
___nl__bool__14 = !___nl__bool__14;
#line 197
if(___nl__bool__14){ goto label_4;}
#line 198
c_rt_lib0move(&___nl__im__21,___get_global_const(942));
#line 198
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__21));
#line 198
c_rt_lib0move(&___nl__im__20, ntokenizer0eat_text(&___nl__im__21));
#line 198
c_rt_lib0move(&___nl__string__22,___get_global_const(942));
#line 198
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__22, ___nl__im__21));
#line 198
c_rt_lib0clear(&___nl__im__21);
#line 198
c_rt_lib0clear(&___nl__string__22);
#line 198
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 198
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(168), ___nl__im__19);
#line 198
c_rt_lib0clear(&___nl__im__19);
#line 198
c_rt_lib0clear(&___nl__im__20);
#line 199
goto label_3;
#line 199
label_4:
;
#line 200
c_rt_lib0move(&___nl__im__23,___get_global_const(976));
#line 200
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__23));
#line 200
c_rt_lib0clear(&___nl__im__23);
#line 201
goto label_3;
#line 201
label_3:
;
#line 201
//clear ___nl__bool__14;
#line 202
return ___nl__im__1;
}

ImmT  nparser_priv0parse_label(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
#line 209
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 209
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 209
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 209
c_rt_lib0move(&___nl__im__1, ntokenizer0eat_type(&___nl__im__2, ___nl__im__3));
#line 209
c_rt_lib0move(&___nl__string__4,___get_global_const(942));
#line 209
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__4, ___nl__im__2));
#line 209
c_rt_lib0clear(&___nl__im__2);
#line 209
c_rt_lib0clear(&___nl__im__3);
#line 209
c_rt_lib0clear(&___nl__string__4);
#line 211
c_rt_lib0move(&___nl__im__7,___get_global_const(942));
#line 211
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__7));
#line 211
c_rt_lib0move(&___nl__im__8,___get_global_const(420));
#line 211
___nl__bool__5 = ntokenizer0next_is(&___nl__im__7, ___nl__im__8);
#line 211
c_rt_lib0move(&___nl__string__9,___get_global_const(942));
#line 211
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__9, ___nl__im__7));
#line 211
c_rt_lib0clear(&___nl__im__7);
#line 211
c_rt_lib0clear(&___nl__im__8);
#line 211
c_rt_lib0clear(&___nl__string__9);
#line 211
___nl__bool__5 = !___nl__bool__5;
#line 211
___nl__bool__6 = !___nl__bool__5;
#line 211
if(___nl__bool__6){ goto label_3;}
#line 211
c_rt_lib0move(&___nl__im__10,___get_global_const(942));
#line 211
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__10));
#line 211
c_rt_lib0move(&___nl__im__11,___get_global_const(35));
#line 211
___nl__bool__5 = ntokenizer0next_is(&___nl__im__10, ___nl__im__11);
#line 211
c_rt_lib0move(&___nl__string__12,___get_global_const(942));
#line 211
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__12, ___nl__im__10));
#line 211
c_rt_lib0clear(&___nl__im__10);
#line 211
c_rt_lib0clear(&___nl__im__11);
#line 211
c_rt_lib0clear(&___nl__string__12);
#line 211
___nl__bool__5 = !___nl__bool__5;
#line 211
label_3:
;
#line 211
//clear ___nl__bool__6;
#line 211
___nl__bool__5 = !___nl__bool__5;
#line 211
if(___nl__bool__5){ goto label_2;}
#line 210
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(463), ___nl__im__1));
#line 210
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__14));
#line 210
c_rt_lib0clear(&___nl__im__14);
#line 210
c_rt_lib0clear(&___nl__im__1);
#line 210
//clear ___nl__bool__5;
#line 210
return ___nl__im__13;
#line 210
goto label_1;
#line 210
label_2:
;
#line 210
label_1:
;
#line 210
//clear ___nl__bool__5;
#line 210
c_rt_lib0clear(&___nl__im__13);
#line 212
c_rt_lib0move(&___nl__im__16,___get_global_const(37));
#line 212
c_rt_lib0move(&___nl__im__17,___get_global_const(37));
#line 212
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 212
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(3, ___get_global_const(152), ___nl__im__16, ___get_global_const(168), ___nl__im__17, ___get_global_const(265), ___nl__im__18));
#line 212
c_rt_lib0clear(&___nl__im__16);
#line 212
c_rt_lib0clear(&___nl__im__17);
#line 212
c_rt_lib0clear(&___nl__im__18);
#line 213
c_rt_lib0move(&___nl__im__20,___get_global_const(35));
#line 213
___nl__bool__19 = nparser_priv0try_eat(___ref___im__0, ___nl__im__20);
#line 213
c_rt_lib0clear(&___nl__im__20);
#line 213
___nl__bool__19 = !___nl__bool__19;
#line 213
if(___nl__bool__19){ goto label_5;}
#line 214
c_rt_lib0copy(&___nl__im__21, ___nl__im__1);
#line 214
c_rt_lib0hash_set_value_dec(&___nl__im__15, ___get_global_const(152), ___nl__im__21);
#line 214
c_rt_lib0clear(&___nl__im__21);
#line 215
c_rt_lib0move(&___nl__im__23, nparser_priv0eat_text(___ref___im__0));
#line 215
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__23, ___get_global_const(80));
#line 215
if(___nl__bool__22){ goto label_6;}
#line 215
c_rt_lib0clear(&___nl__im__1);
#line 215
c_rt_lib0clear(&___nl__im__15);
#line 215
//clear ___nl__bool__19;
#line 215
//clear ___nl__bool__22;
#line 215
return ___nl__im__23;
#line 215
label_6:
;
#line 215
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__23, ___get_global_const(80)));
#line 215
c_rt_lib0hash_set_value_dec(&___nl__im__15, ___get_global_const(168), ___nl__im__24);
#line 216
goto label_4;
#line 216
label_5:
;
#line 217
c_rt_lib0copy(&___nl__im__25, ___nl__im__1);
#line 217
c_rt_lib0hash_set_value_dec(&___nl__im__15, ___get_global_const(168), ___nl__im__25);
#line 217
c_rt_lib0clear(&___nl__im__25);
#line 218
goto label_4;
#line 218
label_4:
;
#line 218
//clear ___nl__bool__19;
#line 218
//clear ___nl__bool__22;
#line 218
c_rt_lib0clear(&___nl__im__23);
#line 218
c_rt_lib0clear(&___nl__im__24);
#line 219
c_rt_lib0move(&___nl__im__26,___get_global_const(420));
#line 219
___nl__bool__27 = nparser_priv0eat(___ref___im__0, ___nl__im__26);
#line 219
c_rt_lib0clear(&___nl__im__26);
#line 219
//clear ___nl__bool__27;
#line 220
c_rt_lib0move(&___nl__im__29, nparser_priv0parse_fun_val_arg_list(___ref___im__0));
#line 220
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(80));
#line 220
if(___nl__bool__28){ goto label_7;}
#line 220
c_rt_lib0clear(&___nl__im__1);
#line 220
c_rt_lib0clear(&___nl__im__15);
#line 220
//clear ___nl__bool__28;
#line 220
return ___nl__im__29;
#line 220
label_7:
;
#line 220
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(80)));
#line 220
c_rt_lib0hash_set_value_dec(&___nl__im__15, ___get_global_const(265), ___nl__im__30);
#line 221
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(839), ___nl__im__15));
#line 221
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__32));
#line 221
c_rt_lib0clear(&___nl__im__32);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
c_rt_lib0clear(&___nl__im__15);
#line 221
//clear ___nl__bool__28;
#line 221
c_rt_lib0clear(&___nl__im__29);
#line 221
c_rt_lib0clear(&___nl__im__30);
#line 221
return ___nl__im__31;
}

nast0value_t0type nparser_priv0parse_hash_key(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__string__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__string__15 = NULL;
ImmT  ___nl__im__16 = NULL;
#line 225
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 225
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 225
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(&___nl__im__2));
#line 225
c_rt_lib0move(&___nl__string__3,___get_global_const(942));
#line 225
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 225
c_rt_lib0clear(&___nl__im__2);
#line 225
c_rt_lib0clear(&___nl__string__3);
#line 226
c_rt_lib0move(&___nl__im__7,___get_global_const(942));
#line 226
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__7));
#line 226
___nl__bool__6 = ntokenizer0is_text(&___nl__im__7);
#line 226
c_rt_lib0move(&___nl__string__8,___get_global_const(942));
#line 226
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__8, ___nl__im__7));
#line 226
c_rt_lib0clear(&___nl__im__7);
#line 226
c_rt_lib0clear(&___nl__string__8);
#line 226
if(___nl__bool__6){ goto label_2;}
#line 227
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 227
goto label_1;
#line 227
label_2:
;
#line 227
c_rt_lib0move(&___nl__im__9,___get_global_const(942));
#line 227
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__9));
#line 227
c_rt_lib0move(&___nl__im__5, ntokenizer0eat_text(&___nl__im__9));
#line 227
c_rt_lib0move(&___nl__string__10,___get_global_const(942));
#line 227
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__10, ___nl__im__9));
#line 227
c_rt_lib0clear(&___nl__im__9);
#line 227
c_rt_lib0clear(&___nl__string__10);
#line 227
label_1:
;
#line 227
//clear ___nl__bool__6;
#line 227
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(881), ___nl__im__5));
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 229
c_rt_lib0move(&___nl__im__14,___get_global_const(942));
#line 229
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__14));
#line 229
c_rt_lib0move(&___nl__im__13, ntokenizer0get_place(&___nl__im__14));
#line 229
c_rt_lib0move(&___nl__string__15,___get_global_const(942));
#line 229
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__15, ___nl__im__14));
#line 229
c_rt_lib0clear(&___nl__im__14);
#line 229
c_rt_lib0clear(&___nl__string__15);
#line 229
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__13));
#line 229
c_rt_lib0clear(&___nl__im__13);
#line 231
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 231
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__12, ___get_global_const(219), ___nl__im__4, ___get_global_const(95), ___nl__im__16));
#line 231
c_rt_lib0clear(&___nl__im__12);
#line 231
c_rt_lib0clear(&___nl__im__16);
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0clear(&___nl__im__4);
#line 231
return ___nl__im__11;
}

ImmT  nparser_priv0parse_hash(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
#line 236
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 237
c_rt_lib0move(&___nl__im__2,___get_global_const(291));
#line 237
___nl__bool__3 = nparser_priv0eat(___ref___im__0, ___nl__im__2);
#line 237
c_rt_lib0clear(&___nl__im__2);
#line 237
//clear ___nl__bool__3;
#line 238
label_2:
;
#line 238
c_rt_lib0move(&___nl__im__5,___get_global_const(942));
#line 238
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__5));
#line 238
c_rt_lib0move(&___nl__im__6,___get_global_const(292));
#line 238
___nl__bool__4 = ntokenizer0next_is(&___nl__im__5, ___nl__im__6);
#line 238
c_rt_lib0move(&___nl__string__7,___get_global_const(942));
#line 238
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__7, ___nl__im__5));
#line 238
c_rt_lib0clear(&___nl__im__5);
#line 238
c_rt_lib0clear(&___nl__im__6);
#line 238
c_rt_lib0clear(&___nl__string__7);
#line 238
___nl__bool__4 = !___nl__bool__4;
#line 238
___nl__bool__4 = !___nl__bool__4;
#line 238
if(___nl__bool__4){ goto label_1;}
#line 239
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_hash_key(___ref___im__0));
#line 240
c_rt_lib0move(&___nl__im__9,___get_global_const(293));
#line 240
___nl__bool__10 = nparser_priv0eat(___ref___im__0, ___nl__im__9);
#line 240
c_rt_lib0clear(&___nl__im__9);
#line 240
//clear ___nl__bool__10;
#line 241
c_rt_lib0move(&___nl__im__13, nparser_priv0parse_expr(___ref___im__0));
#line 241
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(80));
#line 241
if(___nl__bool__12){ goto label_3;}
#line 241
c_rt_lib0clear(&___nl__im__1);
#line 241
//clear ___nl__bool__4;
#line 241
c_rt_lib0clear(&___nl__im__8);
#line 241
c_rt_lib0clear(&___nl__im__11);
#line 241
//clear ___nl__bool__12;
#line 241
return ___nl__im__13;
#line 241
label_3:
;
#line 241
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(80)));
#line 242
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_const(371), ___nl__im__8, ___get_global_const(224), ___nl__im__11));
#line 242
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__14));
#line 242
c_rt_lib0clear(&___nl__im__14);
#line 243
c_rt_lib0move(&___nl__im__16,___get_global_const(295));
#line 243
___nl__bool__15 = nparser_priv0try_eat(___ref___im__0, ___nl__im__16);
#line 243
c_rt_lib0clear(&___nl__im__16);
#line 243
___nl__bool__15 = !___nl__bool__15;
#line 243
___nl__bool__15 = !___nl__bool__15;
#line 243
if(___nl__bool__15){ goto label_5;}
#line 243
goto label_1;
#line 243
goto label_4;
#line 243
label_5:
;
#line 243
label_4:
;
#line 243
//clear ___nl__bool__15;
#line 244
goto label_2;
#line 244
label_1:
;
#line 245
c_rt_lib0move(&___nl__im__17,___get_global_const(292));
#line 245
___nl__bool__18 = nparser_priv0eat(___ref___im__0, ___nl__im__17);
#line 245
c_rt_lib0clear(&___nl__im__17);
#line 245
//clear ___nl__bool__18;
#line 246
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 246
c_rt_lib0clear(&___nl__im__1);
#line 246
//clear ___nl__bool__4;
#line 246
c_rt_lib0clear(&___nl__im__8);
#line 246
c_rt_lib0clear(&___nl__im__11);
#line 246
//clear ___nl__bool__12;
#line 246
c_rt_lib0clear(&___nl__im__13);
#line 246
return ___nl__im__19;
}

ImmT  nparser_priv0parse_arr(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
#line 250
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 251
c_rt_lib0move(&___nl__im__2,___get_global_const(297));
#line 251
___nl__bool__3 = nparser_priv0eat(___ref___im__0, ___nl__im__2);
#line 251
c_rt_lib0clear(&___nl__im__2);
#line 251
//clear ___nl__bool__3;
#line 252
label_2:
;
#line 252
c_rt_lib0move(&___nl__im__5,___get_global_const(942));
#line 252
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__5));
#line 252
c_rt_lib0move(&___nl__im__6,___get_global_const(298));
#line 252
___nl__bool__4 = ntokenizer0next_is(&___nl__im__5, ___nl__im__6);
#line 252
c_rt_lib0move(&___nl__string__7,___get_global_const(942));
#line 252
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__7, ___nl__im__5));
#line 252
c_rt_lib0clear(&___nl__im__5);
#line 252
c_rt_lib0clear(&___nl__im__6);
#line 252
c_rt_lib0clear(&___nl__string__7);
#line 252
___nl__bool__4 = !___nl__bool__4;
#line 252
___nl__bool__4 = !___nl__bool__4;
#line 252
if(___nl__bool__4){ goto label_1;}
#line 253
c_rt_lib0move(&___nl__im__10, nparser_priv0parse_expr(___ref___im__0));
#line 253
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(80));
#line 253
if(___nl__bool__9){ goto label_3;}
#line 253
c_rt_lib0clear(&___nl__im__1);
#line 253
//clear ___nl__bool__4;
#line 253
c_rt_lib0clear(&___nl__im__8);
#line 253
//clear ___nl__bool__9;
#line 253
return ___nl__im__10;
#line 253
label_3:
;
#line 253
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(80)));
#line 254
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__8));
#line 255
c_rt_lib0move(&___nl__im__12,___get_global_const(295));
#line 255
___nl__bool__11 = nparser_priv0try_eat(___ref___im__0, ___nl__im__12);
#line 255
c_rt_lib0clear(&___nl__im__12);
#line 255
___nl__bool__11 = !___nl__bool__11;
#line 255
___nl__bool__11 = !___nl__bool__11;
#line 255
if(___nl__bool__11){ goto label_5;}
#line 255
goto label_1;
#line 255
goto label_4;
#line 255
label_5:
;
#line 255
label_4:
;
#line 255
//clear ___nl__bool__11;
#line 256
goto label_2;
#line 256
label_1:
;
#line 257
c_rt_lib0move(&___nl__im__13,___get_global_const(298));
#line 257
___nl__bool__14 = nparser_priv0eat(___ref___im__0, ___nl__im__13);
#line 257
c_rt_lib0clear(&___nl__im__13);
#line 257
//clear ___nl__bool__14;
#line 258
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 258
c_rt_lib0clear(&___nl__im__1);
#line 258
//clear ___nl__bool__4;
#line 258
c_rt_lib0clear(&___nl__im__8);
#line 258
//clear ___nl__bool__9;
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
return ___nl__im__15;
}

nparser0try_value_t0type nparser_priv0parse_expr(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
#line 262
___nl__int__4 = 0;
#line 262
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_expr_rec(___ref___im__0, ___nl__int__4));
#line 262
//clear ___nl__int__4;
#line 262
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(80));
#line 262
if(___nl__bool__2){ goto label_1;}
#line 262
c_rt_lib0clear(&___nl__im__1);
#line 262
//clear ___nl__bool__2;
#line 262
return ___nl__im__3;
#line 262
label_1:
;
#line 262
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(80)));
#line 263
___nl__int__6 = 0;
#line 263
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr_rec_left(___ref___im__0, ___nl__im__1, ___nl__int__6));
#line 263
//clear ___nl__int__6;
#line 263
c_rt_lib0clear(&___nl__im__1);
#line 263
//clear ___nl__bool__2;
#line 263
c_rt_lib0clear(&___nl__im__3);
#line 263
return ___nl__im__5;
}

nparser0try_value_t0type nparser_priv0parse_type(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__string__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__string__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
#line 267
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 267
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 267
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(&___nl__im__2));
#line 267
c_rt_lib0move(&___nl__string__3,___get_global_const(942));
#line 267
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__string__3);
#line 268
c_rt_lib0move(&___nl__im__5,___get_global_const(306));
#line 268
___nl__bool__4 = nparser_priv0try_eat(___ref___im__0, ___nl__im__5);
#line 268
c_rt_lib0clear(&___nl__im__5);
#line 268
___nl__bool__4 = !___nl__bool__4;
#line 268
if(___nl__bool__4){ goto label_2;}
#line 269
c_rt_lib0move(&___nl__im__7,___get_global_const(942));
#line 269
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__7));
#line 269
c_rt_lib0move(&___nl__im__6, ntokenizer0get_place(&___nl__im__7));
#line 269
c_rt_lib0move(&___nl__string__8,___get_global_const(942));
#line 269
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__8, ___nl__im__7));
#line 269
c_rt_lib0clear(&___nl__im__7);
#line 269
c_rt_lib0clear(&___nl__string__8);
#line 270
c_rt_lib0move(&___nl__im__10, nparser_priv0parse_fun_label(___ref___im__0));
#line 270
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(883), ___nl__im__10));
#line 270
c_rt_lib0clear(&___nl__im__10);
#line 271
c_rt_lib0move(&___nl__im__12,___get_global_const(942));
#line 271
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__12));
#line 271
c_rt_lib0move(&___nl__im__11, ntokenizer0get_place(&___nl__im__12));
#line 271
c_rt_lib0move(&___nl__string__13,___get_global_const(942));
#line 271
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__13, ___nl__im__12));
#line 271
c_rt_lib0clear(&___nl__im__12);
#line 271
c_rt_lib0clear(&___nl__string__13);
#line 275
c_rt_lib0move(&___nl__im__18,___get_global_const(942));
#line 275
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__18));
#line 275
c_rt_lib0move(&___nl__im__17, ntokenizer0get_place(&___nl__im__18));
#line 275
c_rt_lib0move(&___nl__string__19,___get_global_const(942));
#line 275
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__19, ___nl__im__18));
#line 275
c_rt_lib0clear(&___nl__im__18);
#line 275
c_rt_lib0clear(&___nl__string__19);
#line 275
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__17));
#line 275
c_rt_lib0clear(&___nl__im__17);
#line 278
c_rt_lib0move(&___nl__im__22,___get_global_const(306));
#line 280
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__6, ___get_global_const(916), ___nl__im__11));
#line 282
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 282
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__24, ___get_global_const(219), ___nl__im__9, ___get_global_const(95), ___nl__im__25));
#line 282
c_rt_lib0clear(&___nl__im__24);
#line 282
c_rt_lib0clear(&___nl__im__25);
#line 282
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(514), ___nl__im__22, ___get_global_const(224), ___nl__im__23));
#line 282
c_rt_lib0clear(&___nl__im__22);
#line 282
c_rt_lib0clear(&___nl__im__23);
#line 282
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(882), ___nl__im__21));
#line 282
c_rt_lib0clear(&___nl__im__21);
#line 285
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 285
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__16, ___get_global_const(219), ___nl__im__20, ___get_global_const(95), ___nl__im__26));
#line 285
c_rt_lib0clear(&___nl__im__16);
#line 285
c_rt_lib0clear(&___nl__im__20);
#line 285
c_rt_lib0clear(&___nl__im__26);
#line 285
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__15));
#line 285
c_rt_lib0clear(&___nl__im__15);
#line 285
c_rt_lib0clear(&___nl__im__1);
#line 285
//clear ___nl__bool__4;
#line 285
c_rt_lib0clear(&___nl__im__6);
#line 285
c_rt_lib0clear(&___nl__im__9);
#line 285
c_rt_lib0clear(&___nl__im__11);
#line 285
return ___nl__im__14;
#line 287
goto label_1;
#line 287
label_2:
;
#line 287
label_1:
;
#line 287
//clear ___nl__bool__4;
#line 287
c_rt_lib0clear(&___nl__im__6);
#line 287
c_rt_lib0clear(&___nl__im__9);
#line 287
c_rt_lib0clear(&___nl__im__11);
#line 287
c_rt_lib0clear(&___nl__im__14);
#line 288
c_rt_lib0move(&___nl__im__28,___get_global_const(942));
#line 288
c_rt_lib0move(&___nl__im__28, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__28));
#line 288
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 288
___nl__bool__27 = ntokenizer0is_type(&___nl__im__28, ___nl__im__29);
#line 288
c_rt_lib0move(&___nl__string__30,___get_global_const(942));
#line 288
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__30, ___nl__im__28));
#line 288
c_rt_lib0clear(&___nl__im__28);
#line 288
c_rt_lib0clear(&___nl__im__29);
#line 288
c_rt_lib0clear(&___nl__string__30);
#line 288
___nl__bool__27 = !___nl__bool__27;
#line 288
if(___nl__bool__27){ goto label_4;}
#line 289
c_rt_lib0move(&___nl__im__33, nparser_priv0parse_label(___ref___im__0));
#line 289
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(80));
#line 289
if(___nl__bool__32){ goto label_5;}
#line 289
c_rt_lib0clear(&___nl__im__1);
#line 289
//clear ___nl__bool__27;
#line 289
c_rt_lib0clear(&___nl__im__31);
#line 289
//clear ___nl__bool__32;
#line 289
return ___nl__im__33;
#line 289
label_5:
;
#line 289
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(80)));
#line 290
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(839));
#line 290
___nl__bool__34 = !___nl__bool__34;
#line 290
if(___nl__bool__34){ goto label_7;}
#line 292
c_rt_lib0move(&___nl__im__39,___get_global_const(942));
#line 292
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__39));
#line 292
c_rt_lib0move(&___nl__im__38, ntokenizer0get_place(&___nl__im__39));
#line 292
c_rt_lib0move(&___nl__string__40,___get_global_const(942));
#line 292
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__40, ___nl__im__39));
#line 292
c_rt_lib0clear(&___nl__im__39);
#line 292
c_rt_lib0clear(&___nl__string__40);
#line 292
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__38));
#line 292
c_rt_lib0clear(&___nl__im__38);
#line 294
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 294
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__37, ___get_global_const(219), ___nl__im__31, ___get_global_const(95), ___nl__im__41));
#line 294
c_rt_lib0clear(&___nl__im__37);
#line 294
c_rt_lib0clear(&___nl__im__41);
#line 294
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__36));
#line 294
c_rt_lib0clear(&___nl__im__36);
#line 294
c_rt_lib0clear(&___nl__im__1);
#line 294
//clear ___nl__bool__27;
#line 294
c_rt_lib0clear(&___nl__im__31);
#line 294
//clear ___nl__bool__32;
#line 294
c_rt_lib0clear(&___nl__im__33);
#line 294
//clear ___nl__bool__34;
#line 294
return ___nl__im__35;
#line 296
goto label_6;
#line 296
label_7:
;
#line 296
label_6:
;
#line 296
//clear ___nl__bool__34;
#line 296
c_rt_lib0clear(&___nl__im__35);
#line 297
goto label_3;
#line 297
label_4:
;
#line 297
label_3:
;
#line 297
//clear ___nl__bool__27;
#line 297
c_rt_lib0clear(&___nl__im__31);
#line 297
//clear ___nl__bool__32;
#line 297
c_rt_lib0clear(&___nl__im__33);
#line 298
c_rt_lib0move(&___nl__im__42,___get_global_const(977));
#line 298
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__42));
#line 298
c_rt_lib0clear(&___nl__im__42);
#line 300
c_rt_lib0move(&___nl__im__47,___get_global_const(942));
#line 300
c_rt_lib0move(&___nl__im__47, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__47));
#line 300
c_rt_lib0move(&___nl__im__46, ntokenizer0get_place(&___nl__im__47));
#line 300
c_rt_lib0move(&___nl__string__48,___get_global_const(942));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__48, ___nl__im__47));
#line 300
c_rt_lib0clear(&___nl__im__47);
#line 300
c_rt_lib0clear(&___nl__string__48);
#line 300
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__46));
#line 300
c_rt_lib0clear(&___nl__im__46);
#line 301
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_const(859)));
#line 302
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 302
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__45, ___get_global_const(219), ___nl__im__49, ___get_global_const(95), ___nl__im__50));
#line 302
c_rt_lib0clear(&___nl__im__45);
#line 302
c_rt_lib0clear(&___nl__im__49);
#line 302
c_rt_lib0clear(&___nl__im__50);
#line 302
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__44));
#line 302
c_rt_lib0clear(&___nl__im__44);
#line 302
c_rt_lib0clear(&___nl__im__1);
#line 302
return ___nl__im__43;
}

nparser0try_value_t0type nparser_priv0parse_expr_rec_left(nparser0state_t0type* ___ref___im__0,nast0value_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__string__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
bool  ___nl__bool__48 = false;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
bool  ___nl__bool__53 = false;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
bool  ___nl__bool__72 = false;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
INT  ___nl__int__81 = 0;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
bool  ___nl__bool__88 = false;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
bool  ___nl__bool__91 = false;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__string__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
#line 307
label_2:
;
#line 309
c_rt_lib0move(&___nl__im__5,___get_global_const(942));
#line 309
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__5));
#line 309
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(&___nl__im__5));
#line 309
c_rt_lib0move(&___nl__string__6,___get_global_const(942));
#line 309
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__6, ___nl__im__5));
#line 309
c_rt_lib0clear(&___nl__im__5);
#line 309
c_rt_lib0clear(&___nl__string__6);
#line 310
c_rt_lib0move(&___nl__im__8,___get_global_const(942));
#line 310
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__8));
#line 310
c_rt_lib0move(&___nl__im__7, ntokenizer0get_token(&___nl__im__8));
#line 310
c_rt_lib0move(&___nl__string__9,___get_global_const(942));
#line 310
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__9, ___nl__im__8));
#line 310
c_rt_lib0clear(&___nl__im__8);
#line 310
c_rt_lib0clear(&___nl__string__9);
#line 312
c_rt_lib0move(&___nl__im__12, nast0get_ternary_ops());
#line 312
___nl__bool__11 = hash0has_key(___nl__im__12, ___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__12);
#line 312
___nl__bool__11 = !___nl__bool__11;
#line 312
if(___nl__bool__11){ goto label_4;}
#line 313
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 314
c_rt_lib0move(&___nl__im__14,___get_global_const(900));
#line 314
___nl__bool__13 = c_rt_lib0eq(___nl__im__10, ___nl__im__14);
#line 314
c_rt_lib0clear(&___nl__im__14);
#line 314
___nl__bool__13 = !___nl__bool__13;
#line 314
if(___nl__bool__13){ goto label_6;}
#line 315
c_rt_lib0move(&___nl__im__16, nast0get_ternary_ops());
#line 315
c_rt_lib0move(&___nl__im__17,___get_global_const(900));
#line 315
c_rt_lib0move(&___nl__im__15, hash0get_value(___nl__im__16, ___nl__im__17));
#line 315
c_rt_lib0clear(&___nl__im__16);
#line 315
c_rt_lib0clear(&___nl__im__17);
#line 316
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(897)));
#line 316
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 316
c_rt_lib0clear(&___nl__im__21);
#line 316
___nl__int__22 = ___nl__int__20 < ___nl__int__2;
#line 316
___nl__bool__18 = ___nl__int__22;
#line 316
//clear ___nl__int__20;
#line 316
//clear ___nl__int__22;
#line 316
if(___nl__bool__18){ goto label_9;}
#line 316
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(897)));
#line 316
___nl__int__24 = getIntFromImm(___nl__im__25);
#line 316
c_rt_lib0clear(&___nl__im__25);
#line 316
___nl__int__26 = ___nl__int__24 == ___nl__int__2;
#line 316
___nl__bool__18 = ___nl__int__26;
#line 316
//clear ___nl__int__24;
#line 316
//clear ___nl__int__26;
#line 316
___nl__bool__23 = !___nl__bool__18;
#line 316
if(___nl__bool__23){ goto label_10;}
#line 316
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(898)));
#line 316
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__27, ___get_global_const(274));
#line 316
c_rt_lib0clear(&___nl__im__27);
#line 316
label_10:
;
#line 316
//clear ___nl__bool__23;
#line 316
label_9:
;
#line 316
//clear ___nl__bool__19;
#line 316
___nl__bool__18 = !___nl__bool__18;
#line 316
if(___nl__bool__18){ goto label_8;}
#line 316
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 316
c_rt_lib0clear(&___nl__im__1);
#line 316
//clear ___nl__int__2;
#line 316
c_rt_lib0clear(&___nl__im__3);
#line 316
c_rt_lib0clear(&___nl__im__4);
#line 316
c_rt_lib0clear(&___nl__im__7);
#line 316
c_rt_lib0clear(&___nl__im__10);
#line 316
//clear ___nl__bool__11;
#line 316
//clear ___nl__bool__13;
#line 316
c_rt_lib0clear(&___nl__im__15);
#line 316
//clear ___nl__bool__18;
#line 316
return ___nl__im__28;
#line 316
goto label_7;
#line 316
label_8:
;
#line 316
label_7:
;
#line 316
//clear ___nl__bool__18;
#line 316
c_rt_lib0clear(&___nl__im__28);
#line 317
___nl__bool__29 = nparser_priv0eat(___ref___im__0, ___nl__im__10);
#line 317
//clear ___nl__bool__29;
#line 318
c_rt_lib0move(&___nl__im__32, nparser_priv0parse_expr(___ref___im__0));
#line 318
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(80));
#line 318
if(___nl__bool__31){ goto label_11;}
#line 318
c_rt_lib0clear(&___nl__im__1);
#line 318
//clear ___nl__int__2;
#line 318
c_rt_lib0clear(&___nl__im__3);
#line 318
c_rt_lib0clear(&___nl__im__4);
#line 318
c_rt_lib0clear(&___nl__im__7);
#line 318
c_rt_lib0clear(&___nl__im__10);
#line 318
//clear ___nl__bool__11;
#line 318
//clear ___nl__bool__13;
#line 318
c_rt_lib0clear(&___nl__im__15);
#line 318
c_rt_lib0clear(&___nl__im__30);
#line 318
//clear ___nl__bool__31;
#line 318
return ___nl__im__32;
#line 318
label_11:
;
#line 318
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(80)));
#line 319
c_rt_lib0move(&___nl__im__33,___get_global_const(484));
#line 319
___nl__bool__34 = nparser_priv0eat(___ref___im__0, ___nl__im__33);
#line 319
c_rt_lib0clear(&___nl__im__33);
#line 319
//clear ___nl__bool__34;
#line 320
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(897)));
#line 320
___nl__int__38 = getIntFromImm(___nl__im__39);
#line 320
c_rt_lib0clear(&___nl__im__39);
#line 320
c_rt_lib0move(&___nl__im__37, nparser_priv0parse_expr_rec(___ref___im__0, ___nl__int__38));
#line 320
//clear ___nl__int__38;
#line 320
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(80));
#line 320
if(___nl__bool__36){ goto label_12;}
#line 320
c_rt_lib0clear(&___nl__im__1);
#line 320
//clear ___nl__int__2;
#line 320
c_rt_lib0clear(&___nl__im__3);
#line 320
c_rt_lib0clear(&___nl__im__4);
#line 320
c_rt_lib0clear(&___nl__im__7);
#line 320
c_rt_lib0clear(&___nl__im__10);
#line 320
//clear ___nl__bool__11;
#line 320
//clear ___nl__bool__13;
#line 320
c_rt_lib0clear(&___nl__im__15);
#line 320
c_rt_lib0clear(&___nl__im__30);
#line 320
//clear ___nl__bool__31;
#line 320
c_rt_lib0clear(&___nl__im__32);
#line 320
c_rt_lib0clear(&___nl__im__35);
#line 320
//clear ___nl__bool__36;
#line 320
return ___nl__im__37;
#line 320
label_12:
;
#line 320
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__37, ___get_global_const(80)));
#line 321
c_rt_lib0move(&___nl__im__41,___get_global_const(900));
#line 321
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(4, ___get_global_const(886), ___nl__im__1, ___get_global_const(887), ___nl__im__30, ___get_global_const(888), ___nl__im__35, ___get_global_const(514), ___nl__im__41));
#line 321
c_rt_lib0clear(&___nl__im__41);
#line 321
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(880), ___nl__im__40));
#line 321
c_rt_lib0clear(&___nl__im__40);
#line 322
goto label_5;
#line 322
label_6:
;
#line 323
c_rt_lib0move(&___nl__im__44,___get_global_const(978));
#line 323
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__10));
#line 323
c_rt_lib0clear(&___nl__im__44);
#line 323
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__43));
#line 323
c_rt_lib0clear(&___nl__im__43);
#line 323
c_rt_lib0clear(&___nl__im__1);
#line 323
//clear ___nl__int__2;
#line 323
c_rt_lib0clear(&___nl__im__3);
#line 323
c_rt_lib0clear(&___nl__im__4);
#line 323
c_rt_lib0clear(&___nl__im__7);
#line 323
c_rt_lib0clear(&___nl__im__10);
#line 323
//clear ___nl__bool__11;
#line 323
//clear ___nl__bool__13;
#line 323
c_rt_lib0clear(&___nl__im__15);
#line 323
c_rt_lib0clear(&___nl__im__30);
#line 323
//clear ___nl__bool__31;
#line 323
c_rt_lib0clear(&___nl__im__32);
#line 323
c_rt_lib0clear(&___nl__im__35);
#line 323
//clear ___nl__bool__36;
#line 323
c_rt_lib0clear(&___nl__im__37);
#line 323
return ___nl__im__42;
#line 324
goto label_5;
#line 324
label_5:
;
#line 324
//clear ___nl__bool__13;
#line 324
c_rt_lib0clear(&___nl__im__15);
#line 324
c_rt_lib0clear(&___nl__im__30);
#line 324
//clear ___nl__bool__31;
#line 324
c_rt_lib0clear(&___nl__im__32);
#line 324
c_rt_lib0clear(&___nl__im__35);
#line 324
//clear ___nl__bool__36;
#line 324
c_rt_lib0clear(&___nl__im__37);
#line 324
c_rt_lib0clear(&___nl__im__42);
#line 325
goto label_3;
#line 325
label_4:
;
#line 325
c_rt_lib0move(&___nl__im__45, nast0get_bin_ops());
#line 325
___nl__bool__11 = hash0has_key(___nl__im__45, ___nl__im__7);
#line 325
c_rt_lib0clear(&___nl__im__45);
#line 325
___nl__bool__11 = !___nl__bool__11;
#line 325
if(___nl__bool__11){ goto label_13;}
#line 326
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 327
c_rt_lib0move(&___nl__im__47, nast0get_bin_ops());
#line 327
c_rt_lib0move(&___nl__im__46, hash0get_value(___nl__im__47, ___nl__im__7));
#line 327
c_rt_lib0clear(&___nl__im__47);
#line 328
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(897)));
#line 328
___nl__int__50 = getIntFromImm(___nl__im__51);
#line 328
c_rt_lib0clear(&___nl__im__51);
#line 328
___nl__int__52 = ___nl__int__50 < ___nl__int__2;
#line 328
___nl__bool__48 = ___nl__int__52;
#line 328
//clear ___nl__int__50;
#line 328
//clear ___nl__int__52;
#line 328
if(___nl__bool__48){ goto label_16;}
#line 328
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(897)));
#line 328
___nl__int__54 = getIntFromImm(___nl__im__55);
#line 328
c_rt_lib0clear(&___nl__im__55);
#line 328
___nl__int__56 = ___nl__int__54 == ___nl__int__2;
#line 328
___nl__bool__48 = ___nl__int__56;
#line 328
//clear ___nl__int__54;
#line 328
//clear ___nl__int__56;
#line 328
___nl__bool__53 = !___nl__bool__48;
#line 328
if(___nl__bool__53){ goto label_17;}
#line 328
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(898)));
#line 328
___nl__bool__48 = c_rt_lib0priv_is(___nl__im__57, ___get_global_const(274));
#line 328
c_rt_lib0clear(&___nl__im__57);
#line 328
label_17:
;
#line 328
//clear ___nl__bool__53;
#line 328
label_16:
;
#line 328
//clear ___nl__bool__49;
#line 328
___nl__bool__48 = !___nl__bool__48;
#line 328
if(___nl__bool__48){ goto label_15;}
#line 328
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 328
c_rt_lib0clear(&___nl__im__1);
#line 328
//clear ___nl__int__2;
#line 328
c_rt_lib0clear(&___nl__im__3);
#line 328
c_rt_lib0clear(&___nl__im__4);
#line 328
c_rt_lib0clear(&___nl__im__7);
#line 328
c_rt_lib0clear(&___nl__im__10);
#line 328
//clear ___nl__bool__11;
#line 328
c_rt_lib0clear(&___nl__im__46);
#line 328
//clear ___nl__bool__48;
#line 328
return ___nl__im__58;
#line 328
goto label_14;
#line 328
label_15:
;
#line 328
label_14:
;
#line 328
//clear ___nl__bool__48;
#line 328
c_rt_lib0clear(&___nl__im__58);
#line 329
___nl__bool__59 = nparser_priv0eat(___ref___im__0, ___nl__im__7);
#line 329
//clear ___nl__bool__59;
#line 330
c_rt_lib0move(&___nl__im__61,___get_global_const(532));
#line 330
___nl__bool__60 = c_rt_lib0eq(___nl__im__10, ___nl__im__61);
#line 330
c_rt_lib0clear(&___nl__im__61);
#line 330
___nl__bool__60 = !___nl__bool__60;
#line 330
if(___nl__bool__60){ goto label_19;}
#line 331
c_rt_lib0move(&___nl__im__63, nparser_priv0parse_hash_key(___ref___im__0));
#line 331
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__10, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__63));
#line 331
c_rt_lib0clear(&___nl__im__63);
#line 331
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__62));
#line 331
c_rt_lib0clear(&___nl__im__62);
#line 332
goto label_18;
#line 332
label_19:
;
#line 332
c_rt_lib0move(&___nl__im__64,___get_global_const(903));
#line 332
___nl__bool__60 = c_rt_lib0eq(___nl__im__10, ___nl__im__64);
#line 332
c_rt_lib0clear(&___nl__im__64);
#line 332
___nl__bool__60 = !___nl__bool__60;
#line 332
if(___nl__bool__60){ goto label_20;}
#line 333
c_rt_lib0move(&___nl__im__65,___get_global_const(484));
#line 333
___nl__bool__66 = nparser_priv0eat(___ref___im__0, ___nl__im__65);
#line 333
c_rt_lib0clear(&___nl__im__65);
#line 333
//clear ___nl__bool__66;
#line 334
c_rt_lib0move(&___nl__im__67, nparser_priv0parse_hash_key(___ref___im__0));
#line 335
c_rt_lib0move(&___nl__im__69,___get_global_const(877));
#line 335
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__69, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__67));
#line 335
c_rt_lib0clear(&___nl__im__69);
#line 335
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__68));
#line 335
c_rt_lib0clear(&___nl__im__68);
#line 336
goto label_18;
#line 336
label_20:
;
#line 336
c_rt_lib0move(&___nl__im__70,___get_global_const(902));
#line 336
___nl__bool__60 = c_rt_lib0eq(___nl__im__10, ___nl__im__70);
#line 336
c_rt_lib0clear(&___nl__im__70);
#line 336
___nl__bool__60 = !___nl__bool__60;
#line 336
if(___nl__bool__60){ goto label_21;}
#line 337
c_rt_lib0move(&___nl__im__71,___get_global_const(484));
#line 337
___nl__bool__72 = nparser_priv0eat(___ref___im__0, ___nl__im__71);
#line 337
c_rt_lib0clear(&___nl__im__71);
#line 337
//clear ___nl__bool__72;
#line 338
c_rt_lib0move(&___nl__im__73, nparser_priv0parse_hash_key(___ref___im__0));
#line 339
c_rt_lib0move(&___nl__im__75,___get_global_const(979));
#line 339
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__75, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__73));
#line 339
c_rt_lib0clear(&___nl__im__75);
#line 339
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__74));
#line 339
c_rt_lib0clear(&___nl__im__74);
#line 340
goto label_18;
#line 340
label_21:
;
#line 341
c_rt_lib0move(&___nl__im__77,___get_global_const(889));
#line 341
___nl__bool__76 = c_rt_lib0eq(___nl__im__10, ___nl__im__77);
#line 341
c_rt_lib0clear(&___nl__im__77);
#line 341
___nl__bool__76 = !___nl__bool__76;
#line 341
if(___nl__bool__76){ goto label_23;}
#line 341
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___im__0, ___nl__im__1));
#line 341
goto label_22;
#line 341
label_23:
;
#line 341
label_22:
;
#line 341
//clear ___nl__bool__76;
#line 342
c_rt_lib0move(&___nl__im__83, nast0get_bin_ops());
#line 342
c_rt_lib0move(&___nl__im__82, hash0get_value(___nl__im__83, ___nl__im__10));
#line 342
c_rt_lib0clear(&___nl__im__83);
#line 342
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_const(897)));
#line 342
___nl__int__81 = getIntFromImm(___nl__im__84);
#line 342
c_rt_lib0clear(&___nl__im__82);
#line 342
c_rt_lib0clear(&___nl__im__84);
#line 342
c_rt_lib0move(&___nl__im__80, nparser_priv0parse_expr_rec(___ref___im__0, ___nl__int__81));
#line 342
//clear ___nl__int__81;
#line 342
___nl__bool__79 = c_rt_lib0priv_is(___nl__im__80, ___get_global_const(80));
#line 342
if(___nl__bool__79){ goto label_24;}
#line 342
c_rt_lib0clear(&___nl__im__1);
#line 342
//clear ___nl__int__2;
#line 342
c_rt_lib0clear(&___nl__im__3);
#line 342
c_rt_lib0clear(&___nl__im__4);
#line 342
c_rt_lib0clear(&___nl__im__7);
#line 342
c_rt_lib0clear(&___nl__im__10);
#line 342
//clear ___nl__bool__11;
#line 342
c_rt_lib0clear(&___nl__im__46);
#line 342
//clear ___nl__bool__60;
#line 342
c_rt_lib0clear(&___nl__im__67);
#line 342
c_rt_lib0clear(&___nl__im__73);
#line 342
c_rt_lib0clear(&___nl__im__78);
#line 342
//clear ___nl__bool__79;
#line 342
return ___nl__im__80;
#line 342
label_24:
;
#line 342
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__80, ___get_global_const(80)));
#line 343
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_mk(3, ___get_global_const(274), ___nl__im__1, ___get_global_const(514), ___nl__im__10, ___get_global_const(275), ___nl__im__78));
#line 343
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__85));
#line 343
c_rt_lib0clear(&___nl__im__85);
#line 344
goto label_18;
#line 344
label_18:
;
#line 344
//clear ___nl__bool__60;
#line 344
c_rt_lib0clear(&___nl__im__67);
#line 344
c_rt_lib0clear(&___nl__im__73);
#line 344
c_rt_lib0clear(&___nl__im__78);
#line 344
//clear ___nl__bool__79;
#line 344
c_rt_lib0clear(&___nl__im__80);
#line 345
goto label_3;
#line 345
label_13:
;
#line 345
c_rt_lib0move(&___nl__im__86,___get_global_const(297));
#line 345
___nl__bool__11 = nparser_priv0try_eat(___ref___im__0, ___nl__im__86);
#line 345
c_rt_lib0clear(&___nl__im__86);
#line 345
___nl__bool__11 = !___nl__bool__11;
#line 345
if(___nl__bool__11){ goto label_25;}
#line 346
c_rt_lib0move(&___nl__im__10,___get_global_const(875));
#line 347
c_rt_lib0move(&___nl__im__89, nparser_priv0parse_expr(___ref___im__0));
#line 347
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(80));
#line 347
if(___nl__bool__88){ goto label_26;}
#line 347
c_rt_lib0clear(&___nl__im__1);
#line 347
//clear ___nl__int__2;
#line 347
c_rt_lib0clear(&___nl__im__3);
#line 347
c_rt_lib0clear(&___nl__im__4);
#line 347
c_rt_lib0clear(&___nl__im__7);
#line 347
c_rt_lib0clear(&___nl__im__10);
#line 347
//clear ___nl__bool__11;
#line 347
c_rt_lib0clear(&___nl__im__46);
#line 347
c_rt_lib0clear(&___nl__im__87);
#line 347
//clear ___nl__bool__88;
#line 347
return ___nl__im__89;
#line 347
label_26:
;
#line 347
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(80)));
#line 348
c_rt_lib0move(&___nl__im__90,___get_global_const(298));
#line 348
___nl__bool__91 = nparser_priv0eat(___ref___im__0, ___nl__im__90);
#line 348
c_rt_lib0clear(&___nl__im__90);
#line 348
//clear ___nl__bool__91;
#line 349
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__10, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__87));
#line 349
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__92));
#line 349
c_rt_lib0clear(&___nl__im__92);
#line 350
goto label_3;
#line 350
label_25:
;
#line 350
c_rt_lib0move(&___nl__im__93,___get_global_const(291));
#line 350
___nl__bool__11 = nparser_priv0try_eat(___ref___im__0, ___nl__im__93);
#line 350
c_rt_lib0clear(&___nl__im__93);
#line 350
___nl__bool__11 = !___nl__bool__11;
#line 350
if(___nl__bool__11){ goto label_27;}
#line 351
c_rt_lib0move(&___nl__im__10,___get_global_const(876));
#line 352
c_rt_lib0move(&___nl__im__96, nparser_priv0parse_expr(___ref___im__0));
#line 352
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__96, ___get_global_const(80));
#line 352
if(___nl__bool__95){ goto label_28;}
#line 352
c_rt_lib0clear(&___nl__im__1);
#line 352
//clear ___nl__int__2;
#line 352
c_rt_lib0clear(&___nl__im__3);
#line 352
c_rt_lib0clear(&___nl__im__4);
#line 352
c_rt_lib0clear(&___nl__im__7);
#line 352
c_rt_lib0clear(&___nl__im__10);
#line 352
//clear ___nl__bool__11;
#line 352
c_rt_lib0clear(&___nl__im__46);
#line 352
c_rt_lib0clear(&___nl__im__87);
#line 352
//clear ___nl__bool__88;
#line 352
c_rt_lib0clear(&___nl__im__89);
#line 352
c_rt_lib0clear(&___nl__im__94);
#line 352
//clear ___nl__bool__95;
#line 352
return ___nl__im__96;
#line 352
label_28:
;
#line 352
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__96, ___get_global_const(80)));
#line 353
c_rt_lib0move(&___nl__im__97,___get_global_const(292));
#line 353
___nl__bool__98 = nparser_priv0eat(___ref___im__0, ___nl__im__97);
#line 353
c_rt_lib0clear(&___nl__im__97);
#line 353
//clear ___nl__bool__98;
#line 354
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__10, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__94));
#line 354
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__99));
#line 354
c_rt_lib0clear(&___nl__im__99);
#line 355
goto label_3;
#line 355
label_27:
;
#line 355
c_rt_lib0move(&___nl__im__100,___get_global_const(901));
#line 355
___nl__bool__11 = nparser_priv0try_eat(___ref___im__0, ___nl__im__100);
#line 355
c_rt_lib0clear(&___nl__im__100);
#line 355
___nl__bool__11 = !___nl__bool__11;
#line 355
if(___nl__bool__11){ goto label_29;}
#line 356
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(884), ___nl__im__1));
#line 357
goto label_3;
#line 357
label_29:
;
#line 357
c_rt_lib0move(&___nl__im__101,___get_global_const(191));
#line 357
___nl__bool__11 = nparser_priv0try_eat(___ref___im__0, ___nl__im__101);
#line 357
c_rt_lib0clear(&___nl__im__101);
#line 357
___nl__bool__11 = !___nl__bool__11;
#line 357
if(___nl__bool__11){ goto label_30;}
#line 358
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(885), ___nl__im__1));
#line 359
goto label_3;
#line 359
label_30:
;
#line 360
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 360
c_rt_lib0clear(&___nl__im__1);
#line 360
//clear ___nl__int__2;
#line 360
c_rt_lib0clear(&___nl__im__3);
#line 360
c_rt_lib0clear(&___nl__im__4);
#line 360
c_rt_lib0clear(&___nl__im__7);
#line 360
c_rt_lib0clear(&___nl__im__10);
#line 360
//clear ___nl__bool__11;
#line 360
c_rt_lib0clear(&___nl__im__46);
#line 360
c_rt_lib0clear(&___nl__im__87);
#line 360
//clear ___nl__bool__88;
#line 360
c_rt_lib0clear(&___nl__im__89);
#line 360
c_rt_lib0clear(&___nl__im__94);
#line 360
//clear ___nl__bool__95;
#line 360
c_rt_lib0clear(&___nl__im__96);
#line 360
return ___nl__im__102;
#line 361
goto label_3;
#line 361
label_3:
;
#line 361
//clear ___nl__bool__11;
#line 361
c_rt_lib0clear(&___nl__im__46);
#line 361
c_rt_lib0clear(&___nl__im__87);
#line 361
//clear ___nl__bool__88;
#line 361
c_rt_lib0clear(&___nl__im__89);
#line 361
c_rt_lib0clear(&___nl__im__94);
#line 361
//clear ___nl__bool__95;
#line 361
c_rt_lib0clear(&___nl__im__96);
#line 361
c_rt_lib0clear(&___nl__im__102);
#line 363
c_rt_lib0move(&___nl__im__105,___get_global_const(942));
#line 363
c_rt_lib0move(&___nl__im__105, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__105));
#line 363
c_rt_lib0move(&___nl__im__104, ntokenizer0get_place(&___nl__im__105));
#line 363
c_rt_lib0move(&___nl__string__106,___get_global_const(942));
#line 363
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__106, ___nl__im__105));
#line 363
c_rt_lib0clear(&___nl__im__105);
#line 363
c_rt_lib0clear(&___nl__string__106);
#line 363
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__4, ___get_global_const(916), ___nl__im__104));
#line 363
c_rt_lib0clear(&___nl__im__104);
#line 365
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 365
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__103, ___get_global_const(219), ___nl__im__3, ___get_global_const(95), ___nl__im__107));
#line 365
c_rt_lib0clear(&___nl__im__103);
#line 365
c_rt_lib0clear(&___nl__im__107);
#line 307
goto label_2;
#line 307
label_1:
;
#line 368
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_mk(0));
#line 368
nl_die_arg(___nl__im__108);
}

nparser0try_value_t0type nparser_priv0parse_expr_rec(nparser0state_t0type* ___ref___im__0,INT  ___nl__int__1) {
nparser_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__string__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__string__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__string__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__string__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__string__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__string__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__string__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__string__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__string__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__string__67 = NULL;
ImmT  ___nl__string__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__string__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__string__77 = NULL;
ImmT  ___nl__string__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__string__85 = NULL;
bool  ___nl__bool__86 = false;
ImmT  ___nl__im__87 = NULL;
bool  ___nl__bool__88 = false;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__string__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__string__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__string__99 = NULL;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__string__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__string__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
bool  ___nl__bool__113 = false;
ImmT  ___nl__im__114 = NULL;
INT  ___nl__int__115 = 0;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__string__125 = NULL;
bool  ___nl__bool__126 = false;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__string__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
#line 373
c_rt_lib0move(&___nl__im__4,___get_global_const(942));
#line 373
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__4));
#line 373
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(&___nl__im__4));
#line 373
c_rt_lib0move(&___nl__string__5,___get_global_const(942));
#line 373
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__5, ___nl__im__4));
#line 373
c_rt_lib0clear(&___nl__im__4);
#line 373
c_rt_lib0clear(&___nl__string__5);
#line 374
c_rt_lib0move(&___nl__im__7,___get_global_const(420));
#line 374
___nl__bool__6 = nparser_priv0try_eat(___ref___im__0, ___nl__im__7);
#line 374
c_rt_lib0clear(&___nl__im__7);
#line 374
___nl__bool__6 = !___nl__bool__6;
#line 374
if(___nl__bool__6){ goto label_2;}
#line 375
c_rt_lib0move(&___nl__im__10, nparser_priv0parse_expr(___ref___im__0));
#line 375
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(80));
#line 375
if(___nl__bool__9){ goto label_3;}
#line 375
//clear ___nl__int__1;
#line 375
c_rt_lib0clear(&___nl__im__2);
#line 375
c_rt_lib0clear(&___nl__im__3);
#line 375
//clear ___nl__bool__6;
#line 375
c_rt_lib0clear(&___nl__im__8);
#line 375
//clear ___nl__bool__9;
#line 375
return ___nl__im__10;
#line 375
label_3:
;
#line 375
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(80)));
#line 376
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(878), ___nl__im__8));
#line 377
c_rt_lib0move(&___nl__im__11,___get_global_const(299));
#line 377
___nl__bool__12 = nparser_priv0eat(___ref___im__0, ___nl__im__11);
#line 377
c_rt_lib0clear(&___nl__im__11);
#line 377
//clear ___nl__bool__12;
#line 378
goto label_1;
#line 378
label_2:
;
#line 378
c_rt_lib0move(&___nl__im__13,___get_global_const(942));
#line 378
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__13));
#line 378
c_rt_lib0move(&___nl__im__14,___get_global_const(291));
#line 378
___nl__bool__6 = ntokenizer0next_is(&___nl__im__13, ___nl__im__14);
#line 378
c_rt_lib0move(&___nl__string__15,___get_global_const(942));
#line 378
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__15, ___nl__im__13));
#line 378
c_rt_lib0clear(&___nl__im__13);
#line 378
c_rt_lib0clear(&___nl__im__14);
#line 378
c_rt_lib0clear(&___nl__string__15);
#line 378
___nl__bool__6 = !___nl__bool__6;
#line 378
if(___nl__bool__6){ goto label_4;}
#line 379
c_rt_lib0move(&___nl__im__18, nparser_priv0parse_hash(___ref___im__0));
#line 379
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(80));
#line 379
if(___nl__bool__17){ goto label_5;}
#line 379
//clear ___nl__int__1;
#line 379
c_rt_lib0clear(&___nl__im__2);
#line 379
c_rt_lib0clear(&___nl__im__3);
#line 379
//clear ___nl__bool__6;
#line 379
c_rt_lib0clear(&___nl__im__8);
#line 379
//clear ___nl__bool__9;
#line 379
c_rt_lib0clear(&___nl__im__10);
#line 379
c_rt_lib0clear(&___nl__im__16);
#line 379
//clear ___nl__bool__17;
#line 379
return ___nl__im__18;
#line 379
label_5:
;
#line 379
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(80)));
#line 380
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__16));
#line 381
goto label_1;
#line 381
label_4:
;
#line 381
c_rt_lib0move(&___nl__im__19,___get_global_const(942));
#line 381
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__19));
#line 381
c_rt_lib0move(&___nl__im__20,___get_global_const(297));
#line 381
___nl__bool__6 = ntokenizer0next_is(&___nl__im__19, ___nl__im__20);
#line 381
c_rt_lib0move(&___nl__string__21,___get_global_const(942));
#line 381
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__21, ___nl__im__19));
#line 381
c_rt_lib0clear(&___nl__im__19);
#line 381
c_rt_lib0clear(&___nl__im__20);
#line 381
c_rt_lib0clear(&___nl__string__21);
#line 381
___nl__bool__6 = !___nl__bool__6;
#line 381
if(___nl__bool__6){ goto label_6;}
#line 382
c_rt_lib0move(&___nl__im__24, nparser_priv0parse_arr(___ref___im__0));
#line 382
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(80));
#line 382
if(___nl__bool__23){ goto label_7;}
#line 382
//clear ___nl__int__1;
#line 382
c_rt_lib0clear(&___nl__im__2);
#line 382
c_rt_lib0clear(&___nl__im__3);
#line 382
//clear ___nl__bool__6;
#line 382
c_rt_lib0clear(&___nl__im__8);
#line 382
//clear ___nl__bool__9;
#line 382
c_rt_lib0clear(&___nl__im__10);
#line 382
c_rt_lib0clear(&___nl__im__16);
#line 382
//clear ___nl__bool__17;
#line 382
c_rt_lib0clear(&___nl__im__18);
#line 382
c_rt_lib0clear(&___nl__im__22);
#line 382
//clear ___nl__bool__23;
#line 382
return ___nl__im__24;
#line 382
label_7:
;
#line 382
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(80)));
#line 383
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__22));
#line 384
goto label_1;
#line 384
label_6:
;
#line 384
c_rt_lib0move(&___nl__im__25,___get_global_const(942));
#line 384
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__25));
#line 384
c_rt_lib0move(&___nl__im__26,___get_global_const(484));
#line 384
___nl__bool__6 = ntokenizer0next_is(&___nl__im__25, ___nl__im__26);
#line 384
c_rt_lib0move(&___nl__string__27,___get_global_const(942));
#line 384
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__27, ___nl__im__25));
#line 384
c_rt_lib0clear(&___nl__im__25);
#line 384
c_rt_lib0clear(&___nl__im__26);
#line 384
c_rt_lib0clear(&___nl__string__27);
#line 384
___nl__bool__6 = !___nl__bool__6;
#line 384
if(___nl__bool__6){ goto label_8;}
#line 385
c_rt_lib0move(&___nl__im__30, nparser_priv0parse_variant(___ref___im__0));
#line 385
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_const(80));
#line 385
if(___nl__bool__29){ goto label_9;}
#line 385
//clear ___nl__int__1;
#line 385
c_rt_lib0clear(&___nl__im__2);
#line 385
c_rt_lib0clear(&___nl__im__3);
#line 385
//clear ___nl__bool__6;
#line 385
c_rt_lib0clear(&___nl__im__8);
#line 385
//clear ___nl__bool__9;
#line 385
c_rt_lib0clear(&___nl__im__10);
#line 385
c_rt_lib0clear(&___nl__im__16);
#line 385
//clear ___nl__bool__17;
#line 385
c_rt_lib0clear(&___nl__im__18);
#line 385
c_rt_lib0clear(&___nl__im__22);
#line 385
//clear ___nl__bool__23;
#line 385
c_rt_lib0clear(&___nl__im__24);
#line 385
c_rt_lib0clear(&___nl__im__28);
#line 385
//clear ___nl__bool__29;
#line 385
return ___nl__im__30;
#line 385
label_9:
;
#line 385
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(80)));
#line 386
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__28));
#line 387
goto label_1;
#line 387
label_8:
;
#line 387
c_rt_lib0move(&___nl__im__31,___get_global_const(942));
#line 387
c_rt_lib0move(&___nl__im__31, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__31));
#line 387
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_const(980)));
#line 387
___nl__bool__6 = ntokenizer0is_type(&___nl__im__31, ___nl__im__32);
#line 387
c_rt_lib0move(&___nl__string__33,___get_global_const(942));
#line 387
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__33, ___nl__im__31));
#line 387
c_rt_lib0clear(&___nl__im__31);
#line 387
c_rt_lib0clear(&___nl__im__32);
#line 387
c_rt_lib0clear(&___nl__string__33);
#line 387
___nl__bool__6 = !___nl__bool__6;
#line 387
if(___nl__bool__6){ goto label_10;}
#line 388
c_rt_lib0move(&___nl__im__35,___get_global_const(942));
#line 388
c_rt_lib0move(&___nl__im__35, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__35));
#line 388
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(980)));
#line 388
c_rt_lib0move(&___nl__im__34, ntokenizer0eat_type(&___nl__im__35, ___nl__im__36));
#line 388
c_rt_lib0move(&___nl__string__37,___get_global_const(942));
#line 388
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__37, ___nl__im__35));
#line 388
c_rt_lib0clear(&___nl__im__35);
#line 388
c_rt_lib0clear(&___nl__im__36);
#line 388
c_rt_lib0clear(&___nl__string__37);
#line 390
c_rt_lib0move(&___nl__im__39, string_utils0get_integer(___nl__im__34));
#line 390
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(80));
#line 390
if(___nl__bool__40){ goto label_12;}
#line 392
___nl__bool__40 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(79));
#line 392
if(___nl__bool__40){ goto label_13;}
#line 392
c_rt_lib0move(&___nl__im__41,___get_global_const(16));
#line 392
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(2, ___nl__im__41, ___nl__im__39));
#line 392
nl_die_arg(___nl__im__41);
#line 390
label_12:
;
#line 390
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__39, ___get_global_const(80)));
#line 390
___nl__int__42 = getIntFromImm(___nl__im__43);
#line 391
___nl__int__38 = ___nl__int__42;
#line 392
goto label_11;
#line 392
label_13:
;
#line 392
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__39, ___get_global_const(79)));
#line 392
c_rt_lib0copy(&___nl__im__44, ___nl__im__45);
#line 393
c_rt_lib0move(&___nl__im__48,___get_global_const(981));
#line 393
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__34));
#line 393
c_rt_lib0clear(&___nl__im__48);
#line 393
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__47));
#line 393
c_rt_lib0clear(&___nl__im__47);
#line 393
//clear ___nl__int__1;
#line 393
c_rt_lib0clear(&___nl__im__2);
#line 393
c_rt_lib0clear(&___nl__im__3);
#line 393
//clear ___nl__bool__6;
#line 393
c_rt_lib0clear(&___nl__im__8);
#line 393
//clear ___nl__bool__9;
#line 393
c_rt_lib0clear(&___nl__im__10);
#line 393
c_rt_lib0clear(&___nl__im__16);
#line 393
//clear ___nl__bool__17;
#line 393
c_rt_lib0clear(&___nl__im__18);
#line 393
c_rt_lib0clear(&___nl__im__22);
#line 393
//clear ___nl__bool__23;
#line 393
c_rt_lib0clear(&___nl__im__24);
#line 393
c_rt_lib0clear(&___nl__im__28);
#line 393
//clear ___nl__bool__29;
#line 393
c_rt_lib0clear(&___nl__im__30);
#line 393
c_rt_lib0clear(&___nl__im__34);
#line 393
//clear ___nl__int__38;
#line 393
c_rt_lib0clear(&___nl__im__39);
#line 393
//clear ___nl__bool__40;
#line 393
c_rt_lib0clear(&___nl__im__41);
#line 393
//clear ___nl__int__42;
#line 393
c_rt_lib0clear(&___nl__im__43);
#line 393
c_rt_lib0clear(&___nl__im__44);
#line 393
c_rt_lib0clear(&___nl__im__45);
#line 393
return ___nl__im__46;
#line 394
goto label_11;
#line 394
label_11:
;
#line 395
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__38));
#line 395
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__im__49));
#line 395
c_rt_lib0clear(&___nl__im__49);
#line 396
goto label_1;
#line 396
label_10:
;
#line 396
c_rt_lib0move(&___nl__im__51,___get_global_const(942));
#line 396
c_rt_lib0move(&___nl__im__51, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__51));
#line 396
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_none(___get_global_const(982)));
#line 396
___nl__bool__6 = ntokenizer0is_type(&___nl__im__51, ___nl__im__52);
#line 396
c_rt_lib0move(&___nl__string__53,___get_global_const(942));
#line 396
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__53, ___nl__im__51));
#line 396
c_rt_lib0clear(&___nl__im__51);
#line 396
c_rt_lib0clear(&___nl__im__52);
#line 396
c_rt_lib0clear(&___nl__string__53);
#line 396
if(___nl__bool__6){ goto label_15;}
#line 396
c_rt_lib0move(&___nl__im__54,___get_global_const(942));
#line 396
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__54));
#line 396
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 396
___nl__bool__6 = ntokenizer0is_type(&___nl__im__54, ___nl__im__55);
#line 396
c_rt_lib0move(&___nl__string__56,___get_global_const(942));
#line 396
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__56, ___nl__im__54));
#line 396
c_rt_lib0clear(&___nl__im__54);
#line 396
c_rt_lib0clear(&___nl__im__55);
#line 396
c_rt_lib0clear(&___nl__string__56);
#line 396
label_15:
;
#line 396
//clear ___nl__bool__50;
#line 396
___nl__bool__6 = !___nl__bool__6;
#line 396
if(___nl__bool__6){ goto label_14;}
#line 397
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(0));
#line 397
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_mk(1, ___get_global_const(130), ___nl__im__58));
#line 397
c_rt_lib0clear(&___nl__im__58);
#line 398
label_17:
;
#line 398
c_rt_lib0move(&___nl__im__60,___get_global_const(942));
#line 398
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__60));
#line 398
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(982)));
#line 398
___nl__bool__59 = ntokenizer0is_type(&___nl__im__60, ___nl__im__61);
#line 398
c_rt_lib0move(&___nl__string__62,___get_global_const(942));
#line 398
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__62, ___nl__im__60));
#line 398
c_rt_lib0clear(&___nl__im__60);
#line 398
c_rt_lib0clear(&___nl__im__61);
#line 398
c_rt_lib0clear(&___nl__string__62);
#line 398
___nl__bool__59 = !___nl__bool__59;
#line 398
if(___nl__bool__59){ goto label_16;}
#line 399
c_rt_lib0move(&___nl__im__63,___get_global_const(130));
#line 399
c_rt_lib0move(&___nl__im__63, c_rt_lib0get_ref_hash(___nl__im__57, ___nl__im__63));
#line 399
c_rt_lib0move(&___nl__im__65,___get_global_const(942));
#line 399
c_rt_lib0move(&___nl__im__65, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__65));
#line 399
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_none(___get_global_const(982)));
#line 399
c_rt_lib0move(&___nl__im__64, ntokenizer0eat_type(&___nl__im__65, ___nl__im__66));
#line 399
c_rt_lib0move(&___nl__string__67,___get_global_const(942));
#line 399
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__67, ___nl__im__65));
#line 399
c_rt_lib0clear(&___nl__im__65);
#line 399
c_rt_lib0clear(&___nl__im__66);
#line 399
c_rt_lib0clear(&___nl__string__67);
#line 399
c_rt_lib0delete(array0push(&___nl__im__63, ___nl__im__64));
#line 399
c_rt_lib0move(&___nl__string__68,___get_global_const(130));
#line 399
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__57, ___nl__string__68, ___nl__im__63));
#line 399
c_rt_lib0clear(&___nl__im__63);
#line 399
c_rt_lib0clear(&___nl__im__64);
#line 399
c_rt_lib0clear(&___nl__string__68);
#line 400
goto label_17;
#line 400
label_16:
;
#line 401
c_rt_lib0move(&___nl__im__70,___get_global_const(942));
#line 401
c_rt_lib0move(&___nl__im__70, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__70));
#line 401
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 401
___nl__bool__69 = ntokenizer0is_type(&___nl__im__70, ___nl__im__71);
#line 401
c_rt_lib0move(&___nl__string__72,___get_global_const(942));
#line 401
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__72, ___nl__im__70));
#line 401
c_rt_lib0clear(&___nl__im__70);
#line 401
c_rt_lib0clear(&___nl__im__71);
#line 401
c_rt_lib0clear(&___nl__string__72);
#line 401
___nl__bool__69 = !___nl__bool__69;
#line 401
if(___nl__bool__69){ goto label_19;}
#line 402
c_rt_lib0move(&___nl__im__73,___get_global_const(130));
#line 402
c_rt_lib0move(&___nl__im__73, c_rt_lib0get_ref_hash(___nl__im__57, ___nl__im__73));
#line 402
c_rt_lib0move(&___nl__im__75,___get_global_const(942));
#line 402
c_rt_lib0move(&___nl__im__75, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__75));
#line 402
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 402
c_rt_lib0move(&___nl__im__74, ntokenizer0eat_type(&___nl__im__75, ___nl__im__76));
#line 402
c_rt_lib0move(&___nl__string__77,___get_global_const(942));
#line 402
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__77, ___nl__im__75));
#line 402
c_rt_lib0clear(&___nl__im__75);
#line 402
c_rt_lib0clear(&___nl__im__76);
#line 402
c_rt_lib0clear(&___nl__string__77);
#line 402
c_rt_lib0delete(array0push(&___nl__im__73, ___nl__im__74));
#line 402
c_rt_lib0move(&___nl__string__78,___get_global_const(130));
#line 402
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__57, ___nl__string__78, ___nl__im__73));
#line 402
c_rt_lib0clear(&___nl__im__73);
#line 402
c_rt_lib0clear(&___nl__im__74);
#line 402
c_rt_lib0clear(&___nl__string__78);
#line 403
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_none(___get_global_const(916)));
#line 403
c_rt_lib0copy(&___nl__im__79, ___nl__im__80);
#line 403
c_rt_lib0hash_set_value_dec(&___nl__im__57, ___get_global_const(918), ___nl__im__79);
#line 403
c_rt_lib0clear(&___nl__im__79);
#line 403
c_rt_lib0clear(&___nl__im__80);
#line 404
goto label_18;
#line 404
label_19:
;
#line 405
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_none(___get_global_const(917)));
#line 405
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 405
c_rt_lib0hash_set_value_dec(&___nl__im__57, ___get_global_const(918), ___nl__im__81);
#line 405
c_rt_lib0clear(&___nl__im__81);
#line 405
c_rt_lib0clear(&___nl__im__82);
#line 406
goto label_18;
#line 406
label_18:
;
#line 406
//clear ___nl__bool__69;
#line 407
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(527), ___nl__im__57));
#line 408
goto label_1;
#line 408
label_14:
;
#line 408
c_rt_lib0move(&___nl__im__83,___get_global_const(942));
#line 408
c_rt_lib0move(&___nl__im__83, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__83));
#line 408
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 408
___nl__bool__6 = ntokenizer0is_type(&___nl__im__83, ___nl__im__84);
#line 408
c_rt_lib0move(&___nl__string__85,___get_global_const(942));
#line 408
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__85, ___nl__im__83));
#line 408
c_rt_lib0clear(&___nl__im__83);
#line 408
c_rt_lib0clear(&___nl__im__84);
#line 408
c_rt_lib0clear(&___nl__string__85);
#line 408
___nl__bool__6 = !___nl__bool__6;
#line 408
if(___nl__bool__6){ goto label_20;}
#line 409
c_rt_lib0move(&___nl__im__87, nparser_priv0parse_label(___ref___im__0));
#line 409
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__87, ___get_global_const(80));
#line 409
if(___nl__bool__86){ goto label_21;}
#line 409
//clear ___nl__int__1;
#line 409
c_rt_lib0clear(&___nl__im__2);
#line 409
c_rt_lib0clear(&___nl__im__3);
#line 409
//clear ___nl__bool__6;
#line 409
c_rt_lib0clear(&___nl__im__8);
#line 409
//clear ___nl__bool__9;
#line 409
c_rt_lib0clear(&___nl__im__10);
#line 409
c_rt_lib0clear(&___nl__im__16);
#line 409
//clear ___nl__bool__17;
#line 409
c_rt_lib0clear(&___nl__im__18);
#line 409
c_rt_lib0clear(&___nl__im__22);
#line 409
//clear ___nl__bool__23;
#line 409
c_rt_lib0clear(&___nl__im__24);
#line 409
c_rt_lib0clear(&___nl__im__28);
#line 409
//clear ___nl__bool__29;
#line 409
c_rt_lib0clear(&___nl__im__30);
#line 409
c_rt_lib0clear(&___nl__im__34);
#line 409
//clear ___nl__int__38;
#line 409
c_rt_lib0clear(&___nl__im__39);
#line 409
//clear ___nl__bool__40;
#line 409
c_rt_lib0clear(&___nl__im__41);
#line 409
//clear ___nl__int__42;
#line 409
c_rt_lib0clear(&___nl__im__43);
#line 409
c_rt_lib0clear(&___nl__im__44);
#line 409
c_rt_lib0clear(&___nl__im__45);
#line 409
c_rt_lib0clear(&___nl__im__46);
#line 409
c_rt_lib0clear(&___nl__im__57);
#line 409
//clear ___nl__bool__59;
#line 409
//clear ___nl__bool__86;
#line 409
return ___nl__im__87;
#line 409
label_21:
;
#line 409
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__87, ___get_global_const(80)));
#line 410
goto label_1;
#line 410
label_20:
;
#line 410
c_rt_lib0move(&___nl__im__89,___get_global_const(942));
#line 410
c_rt_lib0move(&___nl__im__89, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__89));
#line 410
c_rt_lib0move(&___nl__im__90, c_rt_lib0ov_mk_none(___get_global_const(983)));
#line 410
___nl__bool__6 = ntokenizer0is_type(&___nl__im__89, ___nl__im__90);
#line 410
c_rt_lib0move(&___nl__string__91,___get_global_const(942));
#line 410
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__91, ___nl__im__89));
#line 410
c_rt_lib0clear(&___nl__im__89);
#line 410
c_rt_lib0clear(&___nl__im__90);
#line 410
c_rt_lib0clear(&___nl__string__91);
#line 410
___nl__bool__88 = !___nl__bool__6;
#line 410
if(___nl__bool__88){ goto label_23;}
#line 410
c_rt_lib0move(&___nl__im__92, nast0get_unary_ops());
#line 411
c_rt_lib0move(&___nl__im__94,___get_global_const(942));
#line 411
c_rt_lib0move(&___nl__im__94, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__94));
#line 411
c_rt_lib0move(&___nl__im__93, ntokenizer0get_token(&___nl__im__94));
#line 411
c_rt_lib0move(&___nl__string__95,___get_global_const(942));
#line 411
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__95, ___nl__im__94));
#line 411
c_rt_lib0clear(&___nl__im__94);
#line 411
c_rt_lib0clear(&___nl__string__95);
#line 411
___nl__bool__6 = hash0has_key(___nl__im__92, ___nl__im__93);
#line 411
c_rt_lib0clear(&___nl__im__92);
#line 411
c_rt_lib0clear(&___nl__im__93);
#line 411
label_23:
;
#line 411
//clear ___nl__bool__88;
#line 411
___nl__bool__6 = !___nl__bool__6;
#line 411
if(___nl__bool__6){ goto label_22;}
#line 412
c_rt_lib0move(&___nl__im__97,___get_global_const(942));
#line 412
c_rt_lib0move(&___nl__im__97, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__97));
#line 412
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_const(983)));
#line 412
c_rt_lib0move(&___nl__im__96, ntokenizer0eat_type(&___nl__im__97, ___nl__im__98));
#line 412
c_rt_lib0move(&___nl__string__99,___get_global_const(942));
#line 412
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__99, ___nl__im__97));
#line 412
c_rt_lib0clear(&___nl__im__97);
#line 412
c_rt_lib0clear(&___nl__im__98);
#line 412
c_rt_lib0clear(&___nl__string__99);
#line 414
c_rt_lib0move(&___nl__im__102,___get_global_const(306));
#line 414
___nl__bool__101 = c_rt_lib0eq(___nl__im__96, ___nl__im__102);
#line 414
c_rt_lib0clear(&___nl__im__102);
#line 414
___nl__bool__101 = !___nl__bool__101;
#line 414
if(___nl__bool__101){ goto label_25;}
#line 415
c_rt_lib0move(&___nl__im__104,___get_global_const(942));
#line 415
c_rt_lib0move(&___nl__im__104, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__104));
#line 415
c_rt_lib0move(&___nl__im__103, ntokenizer0get_place(&___nl__im__104));
#line 415
c_rt_lib0move(&___nl__string__105,___get_global_const(942));
#line 415
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__105, ___nl__im__104));
#line 415
c_rt_lib0clear(&___nl__im__104);
#line 415
c_rt_lib0clear(&___nl__string__105);
#line 416
c_rt_lib0move(&___nl__im__107, nparser_priv0parse_fun_label(___ref___im__0));
#line 416
c_rt_lib0move(&___nl__im__106, c_rt_lib0ov_mk_arg(___get_global_const(883), ___nl__im__107));
#line 416
c_rt_lib0clear(&___nl__im__107);
#line 417
c_rt_lib0move(&___nl__im__109,___get_global_const(942));
#line 417
c_rt_lib0move(&___nl__im__109, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__109));
#line 417
c_rt_lib0move(&___nl__im__108, ntokenizer0get_place(&___nl__im__109));
#line 417
c_rt_lib0move(&___nl__string__110,___get_global_const(942));
#line 417
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__110, ___nl__im__109));
#line 417
c_rt_lib0clear(&___nl__im__109);
#line 417
c_rt_lib0clear(&___nl__string__110);
#line 419
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__103, ___get_global_const(916), ___nl__im__108));
#line 424
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 424
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__111, ___get_global_const(219), ___nl__im__106, ___get_global_const(95), ___nl__im__112));
#line 424
c_rt_lib0clear(&___nl__im__111);
#line 424
c_rt_lib0clear(&___nl__im__112);
#line 426
goto label_24;
#line 426
label_25:
;
#line 427
c_rt_lib0move(&___nl__im__117, nast0get_unary_ops());
#line 427
c_rt_lib0move(&___nl__im__116, hash0get_value(___nl__im__117, ___nl__im__96));
#line 427
c_rt_lib0clear(&___nl__im__117);
#line 427
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_const(897)));
#line 427
___nl__int__115 = getIntFromImm(___nl__im__118);
#line 427
c_rt_lib0clear(&___nl__im__116);
#line 427
c_rt_lib0clear(&___nl__im__118);
#line 427
c_rt_lib0move(&___nl__im__114, nparser_priv0parse_expr_rec(___ref___im__0, ___nl__int__115));
#line 427
//clear ___nl__int__115;
#line 427
___nl__bool__113 = c_rt_lib0priv_is(___nl__im__114, ___get_global_const(80));
#line 427
if(___nl__bool__113){ goto label_26;}
#line 427
//clear ___nl__int__1;
#line 427
c_rt_lib0clear(&___nl__im__2);
#line 427
c_rt_lib0clear(&___nl__im__3);
#line 427
//clear ___nl__bool__6;
#line 427
c_rt_lib0clear(&___nl__im__8);
#line 427
//clear ___nl__bool__9;
#line 427
c_rt_lib0clear(&___nl__im__10);
#line 427
c_rt_lib0clear(&___nl__im__16);
#line 427
//clear ___nl__bool__17;
#line 427
c_rt_lib0clear(&___nl__im__18);
#line 427
c_rt_lib0clear(&___nl__im__22);
#line 427
//clear ___nl__bool__23;
#line 427
c_rt_lib0clear(&___nl__im__24);
#line 427
c_rt_lib0clear(&___nl__im__28);
#line 427
//clear ___nl__bool__29;
#line 427
c_rt_lib0clear(&___nl__im__30);
#line 427
c_rt_lib0clear(&___nl__im__34);
#line 427
//clear ___nl__int__38;
#line 427
c_rt_lib0clear(&___nl__im__39);
#line 427
//clear ___nl__bool__40;
#line 427
c_rt_lib0clear(&___nl__im__41);
#line 427
//clear ___nl__int__42;
#line 427
c_rt_lib0clear(&___nl__im__43);
#line 427
c_rt_lib0clear(&___nl__im__44);
#line 427
c_rt_lib0clear(&___nl__im__45);
#line 427
c_rt_lib0clear(&___nl__im__46);
#line 427
c_rt_lib0clear(&___nl__im__57);
#line 427
//clear ___nl__bool__59;
#line 427
//clear ___nl__bool__86;
#line 427
c_rt_lib0clear(&___nl__im__87);
#line 427
c_rt_lib0clear(&___nl__im__96);
#line 427
c_rt_lib0clear(&___nl__im__100);
#line 427
//clear ___nl__bool__101;
#line 427
c_rt_lib0clear(&___nl__im__103);
#line 427
c_rt_lib0clear(&___nl__im__106);
#line 427
c_rt_lib0clear(&___nl__im__108);
#line 427
//clear ___nl__bool__113;
#line 427
return ___nl__im__114;
#line 427
label_26:
;
#line 427
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__114, ___get_global_const(80)));
#line 428
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_const(219)));
#line 428
___nl__bool__119 = c_rt_lib0priv_is(___nl__im__120, ___get_global_const(882));
#line 428
c_rt_lib0clear(&___nl__im__120);
#line 428
___nl__bool__119 = !___nl__bool__119;
#line 428
if(___nl__bool__119){ goto label_28;}
#line 428
c_rt_lib0move(&___nl__im__121,___get_global_const(984));
#line 428
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__121));
#line 428
c_rt_lib0clear(&___nl__im__121);
#line 428
goto label_27;
#line 428
label_28:
;
#line 428
label_27:
;
#line 428
//clear ___nl__bool__119;
#line 429
goto label_24;
#line 429
label_24:
;
#line 429
//clear ___nl__bool__101;
#line 429
c_rt_lib0clear(&___nl__im__103);
#line 429
c_rt_lib0clear(&___nl__im__106);
#line 429
c_rt_lib0clear(&___nl__im__108);
#line 429
//clear ___nl__bool__113;
#line 429
c_rt_lib0clear(&___nl__im__114);
#line 430
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_mk(2, ___get_global_const(514), ___nl__im__96, ___get_global_const(224), ___nl__im__100));
#line 430
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(882), ___nl__im__122));
#line 430
c_rt_lib0clear(&___nl__im__122);
#line 431
goto label_1;
#line 431
label_22:
;
#line 431
c_rt_lib0move(&___nl__im__123,___get_global_const(942));
#line 431
c_rt_lib0move(&___nl__im__123, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__123));
#line 431
c_rt_lib0move(&___nl__im__124, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 431
___nl__bool__6 = ntokenizer0is_type(&___nl__im__123, ___nl__im__124);
#line 431
c_rt_lib0move(&___nl__string__125,___get_global_const(942));
#line 431
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__125, ___nl__im__123));
#line 431
c_rt_lib0clear(&___nl__im__123);
#line 431
c_rt_lib0clear(&___nl__im__124);
#line 431
c_rt_lib0clear(&___nl__string__125);
#line 431
___nl__bool__6 = !___nl__bool__6;
#line 431
if(___nl__bool__6){ goto label_29;}
#line 432
c_rt_lib0move(&___nl__im__127,___get_global_const(535));
#line 432
___nl__bool__126 = nparser_priv0try_eat(___ref___im__0, ___nl__im__127);
#line 432
c_rt_lib0clear(&___nl__im__127);
#line 432
___nl__bool__126 = !___nl__bool__126;
#line 432
if(___nl__bool__126){ goto label_31;}
#line 433
c_rt_lib0move(&___nl__im__129,___get_global_const(181));
#line 433
c_rt_lib0move(&___nl__im__130, nparser_priv0get_value_nop(___ref___im__0));
#line 433
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__129, ___get_global_const(463), ___nl__im__130));
#line 433
c_rt_lib0clear(&___nl__im__129);
#line 433
c_rt_lib0clear(&___nl__im__130);
#line 433
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__128));
#line 433
c_rt_lib0clear(&___nl__im__128);
#line 434
goto label_30;
#line 434
label_31:
;
#line 434
c_rt_lib0move(&___nl__im__131,___get_global_const(536));
#line 434
___nl__bool__126 = nparser_priv0try_eat(___ref___im__0, ___nl__im__131);
#line 434
c_rt_lib0clear(&___nl__im__131);
#line 434
___nl__bool__126 = !___nl__bool__126;
#line 434
if(___nl__bool__126){ goto label_32;}
#line 435
c_rt_lib0move(&___nl__im__133,___get_global_const(182));
#line 435
c_rt_lib0move(&___nl__im__134, nparser_priv0get_value_nop(___ref___im__0));
#line 435
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__133, ___get_global_const(463), ___nl__im__134));
#line 435
c_rt_lib0clear(&___nl__im__133);
#line 435
c_rt_lib0clear(&___nl__im__134);
#line 435
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__132));
#line 435
c_rt_lib0clear(&___nl__im__132);
#line 436
goto label_30;
#line 436
label_32:
;
#line 437
c_rt_lib0move(&___nl__im__137,___get_global_const(986));
#line 437
c_rt_lib0move(&___nl__im__138, string0lf());
#line 437
c_rt_lib0move(&___nl__im__136, c_rt_lib0concat_new(___nl__im__137, ___nl__im__138));
#line 437
c_rt_lib0clear(&___nl__im__137);
#line 437
c_rt_lib0clear(&___nl__im__138);
#line 437
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 437
c_rt_lib0move(&___nl__im__139, ntokenizer0info(___nl__im__140));
#line 437
c_rt_lib0clear(&___nl__im__140);
#line 437
c_rt_lib0move(&___nl__im__135, c_rt_lib0concat_new(___nl__im__136, ___nl__im__139));
#line 437
c_rt_lib0clear(&___nl__im__136);
#line 437
c_rt_lib0clear(&___nl__im__139);
#line 438
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__135));
#line 439
c_rt_lib0move(&___nl__im__141, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__135));
#line 439
//clear ___nl__int__1;
#line 439
c_rt_lib0clear(&___nl__im__2);
#line 439
c_rt_lib0clear(&___nl__im__3);
#line 439
//clear ___nl__bool__6;
#line 439
c_rt_lib0clear(&___nl__im__8);
#line 439
//clear ___nl__bool__9;
#line 439
c_rt_lib0clear(&___nl__im__10);
#line 439
c_rt_lib0clear(&___nl__im__16);
#line 439
//clear ___nl__bool__17;
#line 439
c_rt_lib0clear(&___nl__im__18);
#line 439
c_rt_lib0clear(&___nl__im__22);
#line 439
//clear ___nl__bool__23;
#line 439
c_rt_lib0clear(&___nl__im__24);
#line 439
c_rt_lib0clear(&___nl__im__28);
#line 439
//clear ___nl__bool__29;
#line 439
c_rt_lib0clear(&___nl__im__30);
#line 439
c_rt_lib0clear(&___nl__im__34);
#line 439
//clear ___nl__int__38;
#line 439
c_rt_lib0clear(&___nl__im__39);
#line 439
//clear ___nl__bool__40;
#line 439
c_rt_lib0clear(&___nl__im__41);
#line 439
//clear ___nl__int__42;
#line 439
c_rt_lib0clear(&___nl__im__43);
#line 439
c_rt_lib0clear(&___nl__im__44);
#line 439
c_rt_lib0clear(&___nl__im__45);
#line 439
c_rt_lib0clear(&___nl__im__46);
#line 439
c_rt_lib0clear(&___nl__im__57);
#line 439
//clear ___nl__bool__59;
#line 439
//clear ___nl__bool__86;
#line 439
c_rt_lib0clear(&___nl__im__87);
#line 439
c_rt_lib0clear(&___nl__im__96);
#line 439
c_rt_lib0clear(&___nl__im__100);
#line 439
//clear ___nl__bool__126;
#line 439
c_rt_lib0clear(&___nl__im__135);
#line 439
return ___nl__im__141;
#line 440
goto label_30;
#line 440
label_30:
;
#line 440
//clear ___nl__bool__126;
#line 440
c_rt_lib0clear(&___nl__im__135);
#line 440
c_rt_lib0clear(&___nl__im__141);
#line 441
goto label_1;
#line 441
label_29:
;
#line 442
c_rt_lib0move(&___nl__im__144,___get_global_const(987));
#line 442
c_rt_lib0move(&___nl__im__145, string0lf());
#line 442
c_rt_lib0move(&___nl__im__143, c_rt_lib0concat_new(___nl__im__144, ___nl__im__145));
#line 442
c_rt_lib0clear(&___nl__im__144);
#line 442
c_rt_lib0clear(&___nl__im__145);
#line 442
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(942)));
#line 442
c_rt_lib0move(&___nl__im__146, ntokenizer0info(___nl__im__147));
#line 442
c_rt_lib0clear(&___nl__im__147);
#line 442
c_rt_lib0move(&___nl__im__142, c_rt_lib0concat_new(___nl__im__143, ___nl__im__146));
#line 442
c_rt_lib0clear(&___nl__im__143);
#line 442
c_rt_lib0clear(&___nl__im__146);
#line 443
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__142));
#line 444
c_rt_lib0move(&___nl__im__148, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__142));
#line 444
//clear ___nl__int__1;
#line 444
c_rt_lib0clear(&___nl__im__2);
#line 444
c_rt_lib0clear(&___nl__im__3);
#line 444
//clear ___nl__bool__6;
#line 444
c_rt_lib0clear(&___nl__im__8);
#line 444
//clear ___nl__bool__9;
#line 444
c_rt_lib0clear(&___nl__im__10);
#line 444
c_rt_lib0clear(&___nl__im__16);
#line 444
//clear ___nl__bool__17;
#line 444
c_rt_lib0clear(&___nl__im__18);
#line 444
c_rt_lib0clear(&___nl__im__22);
#line 444
//clear ___nl__bool__23;
#line 444
c_rt_lib0clear(&___nl__im__24);
#line 444
c_rt_lib0clear(&___nl__im__28);
#line 444
//clear ___nl__bool__29;
#line 444
c_rt_lib0clear(&___nl__im__30);
#line 444
c_rt_lib0clear(&___nl__im__34);
#line 444
//clear ___nl__int__38;
#line 444
c_rt_lib0clear(&___nl__im__39);
#line 444
//clear ___nl__bool__40;
#line 444
c_rt_lib0clear(&___nl__im__41);
#line 444
//clear ___nl__int__42;
#line 444
c_rt_lib0clear(&___nl__im__43);
#line 444
c_rt_lib0clear(&___nl__im__44);
#line 444
c_rt_lib0clear(&___nl__im__45);
#line 444
c_rt_lib0clear(&___nl__im__46);
#line 444
c_rt_lib0clear(&___nl__im__57);
#line 444
//clear ___nl__bool__59;
#line 444
//clear ___nl__bool__86;
#line 444
c_rt_lib0clear(&___nl__im__87);
#line 444
c_rt_lib0clear(&___nl__im__96);
#line 444
c_rt_lib0clear(&___nl__im__100);
#line 444
c_rt_lib0clear(&___nl__im__142);
#line 444
return ___nl__im__148;
#line 445
goto label_1;
#line 445
label_1:
;
#line 445
//clear ___nl__bool__6;
#line 445
c_rt_lib0clear(&___nl__im__8);
#line 445
//clear ___nl__bool__9;
#line 445
c_rt_lib0clear(&___nl__im__10);
#line 445
c_rt_lib0clear(&___nl__im__16);
#line 445
//clear ___nl__bool__17;
#line 445
c_rt_lib0clear(&___nl__im__18);
#line 445
c_rt_lib0clear(&___nl__im__22);
#line 445
//clear ___nl__bool__23;
#line 445
c_rt_lib0clear(&___nl__im__24);
#line 445
c_rt_lib0clear(&___nl__im__28);
#line 445
//clear ___nl__bool__29;
#line 445
c_rt_lib0clear(&___nl__im__30);
#line 445
c_rt_lib0clear(&___nl__im__34);
#line 445
//clear ___nl__int__38;
#line 445
c_rt_lib0clear(&___nl__im__39);
#line 445
//clear ___nl__bool__40;
#line 445
c_rt_lib0clear(&___nl__im__41);
#line 445
//clear ___nl__int__42;
#line 445
c_rt_lib0clear(&___nl__im__43);
#line 445
c_rt_lib0clear(&___nl__im__44);
#line 445
c_rt_lib0clear(&___nl__im__45);
#line 445
c_rt_lib0clear(&___nl__im__46);
#line 445
c_rt_lib0clear(&___nl__im__57);
#line 445
//clear ___nl__bool__59;
#line 445
//clear ___nl__bool__86;
#line 445
c_rt_lib0clear(&___nl__im__87);
#line 445
c_rt_lib0clear(&___nl__im__96);
#line 445
c_rt_lib0clear(&___nl__im__100);
#line 445
c_rt_lib0clear(&___nl__im__142);
#line 445
c_rt_lib0clear(&___nl__im__148);
#line 447
c_rt_lib0move(&___nl__im__152,___get_global_const(942));
#line 447
c_rt_lib0move(&___nl__im__152, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__152));
#line 447
c_rt_lib0move(&___nl__im__151, ntokenizer0get_place(&___nl__im__152));
#line 447
c_rt_lib0move(&___nl__string__153,___get_global_const(942));
#line 447
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__153, ___nl__im__152));
#line 447
c_rt_lib0clear(&___nl__im__152);
#line 447
c_rt_lib0clear(&___nl__string__153);
#line 447
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__3, ___get_global_const(916), ___nl__im__151));
#line 447
c_rt_lib0clear(&___nl__im__151);
#line 449
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 449
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__150, ___get_global_const(219), ___nl__im__2, ___get_global_const(95), ___nl__im__154));
#line 449
c_rt_lib0clear(&___nl__im__150);
#line 449
c_rt_lib0clear(&___nl__im__154);
#line 451
c_rt_lib0move(&___nl__im__155, nparser_priv0parse_expr_rec_left(___ref___im__0, ___nl__im__149, ___nl__int__1));
#line 451
//clear ___nl__int__1;
#line 451
c_rt_lib0clear(&___nl__im__2);
#line 451
c_rt_lib0clear(&___nl__im__3);
#line 451
c_rt_lib0clear(&___nl__im__149);
#line 451
return ___nl__im__155;
}

nast0value_t0type nparser_priv0get_value_nop(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__string__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 457
c_rt_lib0move(&___nl__im__4,___get_global_const(942));
#line 457
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__4));
#line 457
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(&___nl__im__4));
#line 457
c_rt_lib0move(&___nl__string__5,___get_global_const(942));
#line 457
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__5, ___nl__im__4));
#line 457
c_rt_lib0clear(&___nl__im__4);
#line 457
c_rt_lib0clear(&___nl__string__5);
#line 458
c_rt_lib0move(&___nl__im__7,___get_global_const(942));
#line 458
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__7));
#line 458
c_rt_lib0move(&___nl__im__6, ntokenizer0get_place(&___nl__im__7));
#line 458
c_rt_lib0move(&___nl__string__8,___get_global_const(942));
#line 458
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__8, ___nl__im__7));
#line 458
c_rt_lib0clear(&___nl__im__7);
#line 458
c_rt_lib0clear(&___nl__string__8);
#line 458
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__3, ___get_global_const(916), ___nl__im__6));
#line 458
c_rt_lib0clear(&___nl__im__3);
#line 458
c_rt_lib0clear(&___nl__im__6);
#line 460
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(859)));
#line 461
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 461
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__2, ___get_global_const(219), ___nl__im__9, ___get_global_const(95), ___nl__im__10));
#line 461
c_rt_lib0clear(&___nl__im__2);
#line 461
c_rt_lib0clear(&___nl__im__9);
#line 461
c_rt_lib0clear(&___nl__im__10);
#line 461
return ___nl__im__1;
}

ImmT  nparser_priv0eat_text(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 468
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 468
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 468
___nl__bool__1 = ntokenizer0is_text(&___nl__im__2);
#line 468
c_rt_lib0move(&___nl__string__3,___get_global_const(942));
#line 468
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 468
c_rt_lib0clear(&___nl__im__2);
#line 468
c_rt_lib0clear(&___nl__string__3);
#line 468
___nl__bool__1 = !___nl__bool__1;
#line 468
if(___nl__bool__1){ goto label_2;}
#line 469
c_rt_lib0move(&___nl__im__6,___get_global_const(942));
#line 469
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 469
c_rt_lib0move(&___nl__im__5, ntokenizer0eat_text(&___nl__im__6));
#line 469
c_rt_lib0move(&___nl__string__7,___get_global_const(942));
#line 469
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__7, ___nl__im__6));
#line 469
c_rt_lib0clear(&___nl__im__6);
#line 469
c_rt_lib0clear(&___nl__string__7);
#line 469
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__5));
#line 469
c_rt_lib0clear(&___nl__im__5);
#line 469
//clear ___nl__bool__1;
#line 469
return ___nl__im__4;
#line 470
goto label_1;
#line 470
label_2:
;
#line 471
c_rt_lib0move(&___nl__im__8,___get_global_const(988));
#line 471
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__8));
#line 471
c_rt_lib0clear(&___nl__im__8);
#line 472
c_rt_lib0move(&___nl__im__10,___get_global_const(988));
#line 472
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__10));
#line 472
c_rt_lib0clear(&___nl__im__10);
#line 472
//clear ___nl__bool__1;
#line 472
c_rt_lib0clear(&___nl__im__4);
#line 472
return ___nl__im__9;
#line 473
goto label_1;
#line 473
label_1:
;
#line 473
//clear ___nl__bool__1;
#line 473
c_rt_lib0clear(&___nl__im__4);
#line 473
c_rt_lib0clear(&___nl__im__9);
}

ImmT  nparser_priv0parse_variant_label(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__string__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 477
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 477
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 477
___nl__bool__1 = ntokenizer0is_text(&___nl__im__2);
#line 477
c_rt_lib0move(&___nl__string__3,___get_global_const(942));
#line 477
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 477
c_rt_lib0clear(&___nl__im__2);
#line 477
c_rt_lib0clear(&___nl__string__3);
#line 477
___nl__bool__1 = !___nl__bool__1;
#line 477
if(___nl__bool__1){ goto label_2;}
#line 478
c_rt_lib0move(&___nl__im__5,___get_global_const(942));
#line 478
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__5));
#line 478
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(&___nl__im__5));
#line 478
c_rt_lib0move(&___nl__string__6,___get_global_const(942));
#line 478
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__6, ___nl__im__5));
#line 478
c_rt_lib0clear(&___nl__im__5);
#line 478
c_rt_lib0clear(&___nl__string__6);
#line 478
//clear ___nl__bool__1;
#line 478
return ___nl__im__4;
#line 479
goto label_1;
#line 479
label_2:
;
#line 480
c_rt_lib0move(&___nl__im__7,___get_global_const(988));
#line 480
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__7));
#line 480
c_rt_lib0clear(&___nl__im__7);
#line 481
c_rt_lib0move(&___nl__im__8,___get_global_const(37));
#line 481
//clear ___nl__bool__1;
#line 481
c_rt_lib0clear(&___nl__im__4);
#line 481
return ___nl__im__8;
#line 482
goto label_1;
#line 482
label_1:
;
#line 482
//clear ___nl__bool__1;
#line 482
c_rt_lib0clear(&___nl__im__4);
#line 482
c_rt_lib0clear(&___nl__im__8);
}

ImmT  nparser_priv0parse_variant(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 486
c_rt_lib0move(&___nl__im__1,___get_global_const(484));
#line 486
___nl__bool__2 = nparser_priv0eat(___ref___im__0, ___nl__im__1);
#line 486
c_rt_lib0clear(&___nl__im__1);
#line 486
//clear ___nl__bool__2;
#line 487
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_variant_label(___ref___im__0));
#line 488
c_rt_lib0move(&___nl__im__4, nparser_priv0get_value_nop(___ref___im__0));
#line 489
c_rt_lib0move(&___nl__im__6,___get_global_const(420));
#line 489
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__6);
#line 489
c_rt_lib0clear(&___nl__im__6);
#line 489
___nl__bool__5 = !___nl__bool__5;
#line 489
if(___nl__bool__5){ goto label_2;}
#line 490
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_expr(___ref___im__0));
#line 490
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 490
if(___nl__bool__7){ goto label_3;}
#line 490
c_rt_lib0clear(&___nl__im__3);
#line 490
c_rt_lib0clear(&___nl__im__4);
#line 490
//clear ___nl__bool__5;
#line 490
//clear ___nl__bool__7;
#line 490
return ___nl__im__8;
#line 490
label_3:
;
#line 490
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 491
c_rt_lib0move(&___nl__im__9,___get_global_const(299));
#line 491
___nl__bool__10 = nparser_priv0eat(___ref___im__0, ___nl__im__9);
#line 491
c_rt_lib0clear(&___nl__im__9);
#line 491
//clear ___nl__bool__10;
#line 492
goto label_1;
#line 492
label_2:
;
#line 493
c_rt_lib0move(&___nl__im__4, nparser_priv0get_value_nop(___ref___im__0));
#line 494
goto label_1;
#line 494
label_1:
;
#line 494
//clear ___nl__bool__5;
#line 494
//clear ___nl__bool__7;
#line 494
c_rt_lib0clear(&___nl__im__8);
#line 495
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__3, ___get_global_const(463), ___nl__im__4));
#line 495
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__12));
#line 495
c_rt_lib0clear(&___nl__im__12);
#line 495
c_rt_lib0clear(&___nl__im__3);
#line 495
c_rt_lib0clear(&___nl__im__4);
#line 495
return ___nl__im__11;
}

ImmT  nparser_priv0check_lvalue(nparser0state_t0type* ___ref___im__0,nast0value_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
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
#line 499
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 499
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(463));
#line 499
c_rt_lib0clear(&___nl__im__3);
#line 499
___nl__bool__2 = !___nl__bool__2;
#line 499
if(___nl__bool__2){ goto label_2;}
#line 500
c_rt_lib0clear(&___nl__im__1);
#line 500
//clear ___nl__bool__2;
#line 500
return NULL;
#line 501
goto label_1;
#line 501
label_2:
;
#line 501
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 501
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(234));
#line 501
c_rt_lib0clear(&___nl__im__4);
#line 501
___nl__bool__2 = !___nl__bool__2;
#line 501
if(___nl__bool__2){ goto label_3;}
#line 502
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 502
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 502
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(234)));
#line 502
c_rt_lib0clear(&___nl__im__6);
#line 502
c_rt_lib0clear(&___nl__im__7);
#line 503
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 503
c_rt_lib0move(&___nl__im__13,___get_global_const(532));
#line 503
___nl__bool__8 = c_rt_lib0eq(___nl__im__12, ___nl__im__13);
#line 503
c_rt_lib0clear(&___nl__im__12);
#line 503
c_rt_lib0clear(&___nl__im__13);
#line 503
if(___nl__bool__8){ goto label_8;}
#line 503
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 503
c_rt_lib0move(&___nl__im__15,___get_global_const(875));
#line 503
___nl__bool__8 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 503
c_rt_lib0clear(&___nl__im__14);
#line 503
c_rt_lib0clear(&___nl__im__15);
#line 503
label_8:
;
#line 503
//clear ___nl__bool__11;
#line 503
if(___nl__bool__8){ goto label_7;}
#line 503
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 503
c_rt_lib0move(&___nl__im__17,___get_global_const(876));
#line 503
___nl__bool__8 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 503
c_rt_lib0clear(&___nl__im__16);
#line 503
c_rt_lib0clear(&___nl__im__17);
#line 503
label_7:
;
#line 503
//clear ___nl__bool__10;
#line 503
if(___nl__bool__8){ goto label_6;}
#line 503
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 503
c_rt_lib0move(&___nl__im__19,___get_global_const(877));
#line 503
___nl__bool__8 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 503
c_rt_lib0clear(&___nl__im__18);
#line 503
c_rt_lib0clear(&___nl__im__19);
#line 503
label_6:
;
#line 503
//clear ___nl__bool__9;
#line 503
___nl__bool__8 = !___nl__bool__8;
#line 503
if(___nl__bool__8){ goto label_5;}
#line 504
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(274)));
#line 504
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___im__0, ___nl__im__20));
#line 504
c_rt_lib0clear(&___nl__im__20);
#line 505
c_rt_lib0clear(&___nl__im__1);
#line 505
//clear ___nl__bool__2;
#line 505
c_rt_lib0clear(&___nl__im__5);
#line 505
//clear ___nl__bool__8;
#line 505
return NULL;
#line 506
goto label_4;
#line 506
label_5:
;
#line 506
label_4:
;
#line 506
//clear ___nl__bool__8;
#line 507
goto label_1;
#line 507
label_3:
;
#line 507
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 507
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(878));
#line 507
c_rt_lib0clear(&___nl__im__21);
#line 507
___nl__bool__2 = !___nl__bool__2;
#line 507
if(___nl__bool__2){ goto label_9;}
#line 508
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 508
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 508
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(878)));
#line 508
c_rt_lib0clear(&___nl__im__23);
#line 508
c_rt_lib0clear(&___nl__im__24);
#line 508
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___im__0, ___nl__im__22));
#line 508
c_rt_lib0clear(&___nl__im__22);
#line 509
c_rt_lib0clear(&___nl__im__1);
#line 509
//clear ___nl__bool__2;
#line 509
c_rt_lib0clear(&___nl__im__5);
#line 509
return NULL;
#line 510
goto label_1;
#line 510
label_9:
;
#line 510
label_1:
;
#line 510
//clear ___nl__bool__2;
#line 510
c_rt_lib0clear(&___nl__im__5);
#line 511
c_rt_lib0move(&___nl__im__25,___get_global_const(989));
#line 511
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__25));
#line 511
c_rt_lib0clear(&___nl__im__25);
#line 511
c_rt_lib0clear(&___nl__im__1);
#line 511
return NULL;
}

nast0variant_decl_t0type nparser_priv0parse_variant_decl(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
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
bool  ___nl__bool__23 = false;
#line 515
c_rt_lib0move(&___nl__im__1,___get_global_const(484));
#line 515
___nl__bool__2 = nparser_priv0eat(___ref___im__0, ___nl__im__1);
#line 515
c_rt_lib0clear(&___nl__im__1);
#line 515
//clear ___nl__bool__2;
#line 516
c_rt_lib0move(&___nl__im__4, nparser_priv0parse_variant_label(___ref___im__0));
#line 516
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 516
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__4, ___get_global_const(219), ___nl__im__5));
#line 516
c_rt_lib0clear(&___nl__im__4);
#line 516
c_rt_lib0clear(&___nl__im__5);
#line 517
c_rt_lib0move(&___nl__im__7,___get_global_const(420));
#line 517
___nl__bool__6 = nparser_priv0try_eat(___ref___im__0, ___nl__im__7);
#line 517
c_rt_lib0clear(&___nl__im__7);
#line 517
___nl__bool__6 = !___nl__bool__6;
#line 517
if(___nl__bool__6){ goto label_2;}
#line 518
c_rt_lib0move(&___nl__im__9,___get_global_const(942));
#line 518
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__9));
#line 518
c_rt_lib0move(&___nl__im__10,___get_global_const(463));
#line 518
___nl__bool__8 = ntokenizer0next_is(&___nl__im__9, ___nl__im__10);
#line 518
c_rt_lib0move(&___nl__string__11,___get_global_const(942));
#line 518
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__9));
#line 518
c_rt_lib0clear(&___nl__im__9);
#line 518
c_rt_lib0clear(&___nl__im__10);
#line 518
c_rt_lib0clear(&___nl__string__11);
#line 518
___nl__bool__8 = !___nl__bool__8;
#line 518
if(___nl__bool__8){ goto label_4;}
#line 519
c_rt_lib0move(&___nl__im__15, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 519
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 519
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_const(452), ___nl__im__15, ___get_global_const(266), ___nl__im__16));
#line 519
c_rt_lib0clear(&___nl__im__15);
#line 519
c_rt_lib0clear(&___nl__im__16);
#line 519
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__14));
#line 519
c_rt_lib0clear(&___nl__im__14);
#line 519
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 519
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(219), ___nl__im__12);
#line 519
c_rt_lib0clear(&___nl__im__12);
#line 519
c_rt_lib0clear(&___nl__im__13);
#line 520
goto label_3;
#line 520
label_4:
;
#line 521
c_rt_lib0move(&___nl__im__20, nparser_priv0parse_ref_var_decl_sim(___ref___im__0));
#line 521
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 521
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_const(452), ___nl__im__20, ___get_global_const(266), ___nl__im__21));
#line 521
c_rt_lib0clear(&___nl__im__20);
#line 521
c_rt_lib0clear(&___nl__im__21);
#line 521
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__19));
#line 521
c_rt_lib0clear(&___nl__im__19);
#line 521
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 521
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(219), ___nl__im__17);
#line 521
c_rt_lib0clear(&___nl__im__17);
#line 521
c_rt_lib0clear(&___nl__im__18);
#line 522
goto label_3;
#line 522
label_3:
;
#line 522
//clear ___nl__bool__8;
#line 523
c_rt_lib0move(&___nl__im__22,___get_global_const(299));
#line 523
___nl__bool__23 = nparser_priv0eat(___ref___im__0, ___nl__im__22);
#line 523
c_rt_lib0clear(&___nl__im__22);
#line 523
//clear ___nl__bool__23;
#line 524
goto label_1;
#line 524
label_2:
;
#line 524
label_1:
;
#line 524
//clear ___nl__bool__6;
#line 525
return ___nl__im__3;
}

ImmT  nparser_priv0parse_var_decl(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
#line 529
c_rt_lib0move(&___nl__im__1,___get_global_const(463));
#line 529
___nl__bool__2 = nparser_priv0eat(___ref___im__0, ___nl__im__1);
#line 529
c_rt_lib0clear(&___nl__im__1);
#line 529
//clear ___nl__bool__2;
#line 530
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 530
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 530
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 530
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 530
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__4, ___get_global_const(95), ___nl__im__5, ___get_global_const(454), ___nl__im__6, ___get_global_const(219), ___nl__im__7));
#line 530
c_rt_lib0clear(&___nl__im__4);
#line 530
c_rt_lib0clear(&___nl__im__5);
#line 530
c_rt_lib0clear(&___nl__im__6);
#line 530
c_rt_lib0clear(&___nl__im__7);
#line 531
c_rt_lib0move(&___nl__im__9,___get_global_const(942));
#line 531
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__9));
#line 531
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 531
___nl__bool__8 = ntokenizer0is_type(&___nl__im__9, ___nl__im__10);
#line 531
c_rt_lib0move(&___nl__string__11,___get_global_const(942));
#line 531
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__9));
#line 531
c_rt_lib0clear(&___nl__im__9);
#line 531
c_rt_lib0clear(&___nl__im__10);
#line 531
c_rt_lib0clear(&___nl__string__11);
#line 531
___nl__bool__8 = !___nl__bool__8;
#line 531
if(___nl__bool__8){ goto label_2;}
#line 532
c_rt_lib0move(&___nl__im__14,___get_global_const(942));
#line 532
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__14));
#line 532
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 532
c_rt_lib0move(&___nl__im__13, ntokenizer0eat_type(&___nl__im__14, ___nl__im__15));
#line 532
c_rt_lib0move(&___nl__string__16,___get_global_const(942));
#line 532
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__16, ___nl__im__14));
#line 532
c_rt_lib0clear(&___nl__im__14);
#line 532
c_rt_lib0clear(&___nl__im__15);
#line 532
c_rt_lib0clear(&___nl__string__16);
#line 532
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 532
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(168), ___nl__im__12);
#line 532
c_rt_lib0clear(&___nl__im__12);
#line 532
c_rt_lib0clear(&___nl__im__13);
#line 533
goto label_1;
#line 533
label_2:
;
#line 534
c_rt_lib0move(&___nl__im__17,___get_global_const(990));
#line 534
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__17));
#line 534
c_rt_lib0clear(&___nl__im__17);
#line 535
goto label_1;
#line 535
label_1:
;
#line 535
//clear ___nl__bool__8;
#line 536
c_rt_lib0move(&___nl__im__19,___get_global_const(484));
#line 536
___nl__bool__18 = nparser_priv0try_eat(___ref___im__0, ___nl__im__19);
#line 536
c_rt_lib0clear(&___nl__im__19);
#line 536
___nl__bool__18 = !___nl__bool__18;
#line 536
if(___nl__bool__18){ goto label_4;}
#line 537
c_rt_lib0move(&___nl__im__22, nparser_priv0parse_type(___ref___im__0));
#line 537
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__22, ___get_global_const(80));
#line 537
if(___nl__bool__21){ goto label_5;}
#line 537
c_rt_lib0clear(&___nl__im__3);
#line 537
//clear ___nl__bool__18;
#line 537
c_rt_lib0clear(&___nl__im__20);
#line 537
//clear ___nl__bool__21;
#line 537
return ___nl__im__22;
#line 537
label_5:
;
#line 537
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__22, ___get_global_const(80)));
#line 538
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__im__20));
#line 538
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 538
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(95), ___nl__im__23);
#line 538
c_rt_lib0clear(&___nl__im__23);
#line 538
c_rt_lib0clear(&___nl__im__24);
#line 539
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(966)));
#line 539
___nl__bool__25 = c_rt_lib0check_true_native(___nl__im__26);
#line 539
c_rt_lib0clear(&___nl__im__26);
#line 539
___nl__bool__25 = !___nl__bool__25;
#line 539
if(___nl__bool__25){ goto label_7;}
#line 540
c_rt_lib0move(&___nl__im__29, ptd_parser0try_value_to_ptd(___nl__im__20));
#line 540
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(80));
#line 540
if(___nl__bool__28){ goto label_8;}
#line 540
c_rt_lib0clear(&___nl__im__3);
#line 540
//clear ___nl__bool__18;
#line 540
c_rt_lib0clear(&___nl__im__20);
#line 540
//clear ___nl__bool__21;
#line 540
c_rt_lib0clear(&___nl__im__22);
#line 540
//clear ___nl__bool__25;
#line 540
c_rt_lib0clear(&___nl__im__27);
#line 540
//clear ___nl__bool__28;
#line 540
return ___nl__im__29;
#line 540
label_8:
;
#line 540
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(80)));
#line 541
c_rt_lib0copy(&___nl__im__30, ___nl__im__27);
#line 541
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(454), ___nl__im__30);
#line 541
c_rt_lib0clear(&___nl__im__30);
#line 542
goto label_6;
#line 542
label_7:
;
#line 542
label_6:
;
#line 542
//clear ___nl__bool__25;
#line 542
c_rt_lib0clear(&___nl__im__27);
#line 542
//clear ___nl__bool__28;
#line 542
c_rt_lib0clear(&___nl__im__29);
#line 543
goto label_3;
#line 543
label_4:
;
#line 543
label_3:
;
#line 543
//clear ___nl__bool__18;
#line 543
c_rt_lib0clear(&___nl__im__20);
#line 543
//clear ___nl__bool__21;
#line 543
c_rt_lib0clear(&___nl__im__22);
#line 544
c_rt_lib0move(&___nl__im__32,___get_global_const(889));
#line 544
___nl__bool__31 = nparser_priv0try_eat(___ref___im__0, ___nl__im__32);
#line 544
c_rt_lib0clear(&___nl__im__32);
#line 544
___nl__bool__31 = !___nl__bool__31;
#line 544
if(___nl__bool__31){ goto label_10;}
#line 545
c_rt_lib0move(&___nl__im__35, nparser_priv0parse_expr(___ref___im__0));
#line 545
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(80));
#line 545
if(___nl__bool__34){ goto label_11;}
#line 545
c_rt_lib0clear(&___nl__im__3);
#line 545
//clear ___nl__bool__31;
#line 545
c_rt_lib0clear(&___nl__im__33);
#line 545
//clear ___nl__bool__34;
#line 545
return ___nl__im__35;
#line 545
label_11:
;
#line 545
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(80)));
#line 546
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__33));
#line 546
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 546
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(219), ___nl__im__36);
#line 546
c_rt_lib0clear(&___nl__im__36);
#line 546
c_rt_lib0clear(&___nl__im__37);
#line 547
goto label_9;
#line 547
label_10:
;
#line 547
label_9:
;
#line 547
//clear ___nl__bool__31;
#line 547
c_rt_lib0clear(&___nl__im__33);
#line 547
//clear ___nl__bool__34;
#line 547
c_rt_lib0clear(&___nl__im__35);
#line 548
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 548
c_rt_lib0clear(&___nl__im__3);
#line 548
return ___nl__im__38;
}

nast0variable_declaration_t0type nparser_priv0parse_var_decl_sim(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 552
c_rt_lib0move(&___nl__im__1,___get_global_const(463));
#line 552
___nl__bool__2 = nparser_priv0eat(___ref___im__0, ___nl__im__1);
#line 552
c_rt_lib0clear(&___nl__im__1);
#line 552
//clear ___nl__bool__2;
#line 553
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 553
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 553
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 553
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 553
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__4, ___get_global_const(95), ___nl__im__5, ___get_global_const(454), ___nl__im__6, ___get_global_const(219), ___nl__im__7));
#line 553
c_rt_lib0clear(&___nl__im__4);
#line 553
c_rt_lib0clear(&___nl__im__5);
#line 553
c_rt_lib0clear(&___nl__im__6);
#line 553
c_rt_lib0clear(&___nl__im__7);
#line 554
c_rt_lib0move(&___nl__im__9,___get_global_const(942));
#line 554
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__9));
#line 554
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 554
___nl__bool__8 = ntokenizer0is_type(&___nl__im__9, ___nl__im__10);
#line 554
c_rt_lib0move(&___nl__string__11,___get_global_const(942));
#line 554
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__9));
#line 554
c_rt_lib0clear(&___nl__im__9);
#line 554
c_rt_lib0clear(&___nl__im__10);
#line 554
c_rt_lib0clear(&___nl__string__11);
#line 554
___nl__bool__8 = !___nl__bool__8;
#line 554
if(___nl__bool__8){ goto label_2;}
#line 555
c_rt_lib0move(&___nl__im__14,___get_global_const(942));
#line 555
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__14));
#line 555
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 555
c_rt_lib0move(&___nl__im__13, ntokenizer0eat_type(&___nl__im__14, ___nl__im__15));
#line 555
c_rt_lib0move(&___nl__string__16,___get_global_const(942));
#line 555
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__16, ___nl__im__14));
#line 555
c_rt_lib0clear(&___nl__im__14);
#line 555
c_rt_lib0clear(&___nl__im__15);
#line 555
c_rt_lib0clear(&___nl__string__16);
#line 555
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 555
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(168), ___nl__im__12);
#line 555
c_rt_lib0clear(&___nl__im__12);
#line 555
c_rt_lib0clear(&___nl__im__13);
#line 556
goto label_1;
#line 556
label_2:
;
#line 557
c_rt_lib0move(&___nl__im__17,___get_global_const(990));
#line 557
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__17));
#line 557
c_rt_lib0clear(&___nl__im__17);
#line 558
goto label_1;
#line 558
label_1:
;
#line 558
//clear ___nl__bool__8;
#line 559
return ___nl__im__3;
}

nast0variable_declaration_t0type nparser_priv0parse_ref_var_decl_sim(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 563
c_rt_lib0move(&___nl__im__1,___get_global_const(40));
#line 563
___nl__bool__2 = nparser_priv0eat(___ref___im__0, ___nl__im__1);
#line 563
c_rt_lib0clear(&___nl__im__1);
#line 563
//clear ___nl__bool__2;
#line 564
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 564
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 564
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 564
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 564
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__4, ___get_global_const(95), ___nl__im__5, ___get_global_const(454), ___nl__im__6, ___get_global_const(219), ___nl__im__7));
#line 564
c_rt_lib0clear(&___nl__im__4);
#line 564
c_rt_lib0clear(&___nl__im__5);
#line 564
c_rt_lib0clear(&___nl__im__6);
#line 564
c_rt_lib0clear(&___nl__im__7);
#line 565
c_rt_lib0move(&___nl__im__9,___get_global_const(942));
#line 565
c_rt_lib0move(&___nl__im__9, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__9));
#line 565
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 565
___nl__bool__8 = ntokenizer0is_type(&___nl__im__9, ___nl__im__10);
#line 565
c_rt_lib0move(&___nl__string__11,___get_global_const(942));
#line 565
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__9));
#line 565
c_rt_lib0clear(&___nl__im__9);
#line 565
c_rt_lib0clear(&___nl__im__10);
#line 565
c_rt_lib0clear(&___nl__string__11);
#line 565
___nl__bool__8 = !___nl__bool__8;
#line 565
if(___nl__bool__8){ goto label_2;}
#line 566
c_rt_lib0move(&___nl__im__14,___get_global_const(942));
#line 566
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__14));
#line 566
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 566
c_rt_lib0move(&___nl__im__13, ntokenizer0eat_type(&___nl__im__14, ___nl__im__15));
#line 566
c_rt_lib0move(&___nl__string__16,___get_global_const(942));
#line 566
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__16, ___nl__im__14));
#line 566
c_rt_lib0clear(&___nl__im__14);
#line 566
c_rt_lib0clear(&___nl__im__15);
#line 566
c_rt_lib0clear(&___nl__string__16);
#line 566
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 566
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(168), ___nl__im__12);
#line 566
c_rt_lib0clear(&___nl__im__12);
#line 566
c_rt_lib0clear(&___nl__im__13);
#line 567
goto label_1;
#line 567
label_2:
;
#line 568
c_rt_lib0move(&___nl__im__17,___get_global_const(990));
#line 568
c_rt_lib0delete(nparser_priv0add_error(___ref___im__0, ___nl__im__17));
#line 568
c_rt_lib0clear(&___nl__im__17);
#line 569
goto label_1;
#line 569
label_1:
;
#line 569
//clear ___nl__bool__8;
#line 570
return ___nl__im__3;
}

ImmT  nparser_priv0parse_cond(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
#line 574
c_rt_lib0move(&___nl__im__1,___get_global_const(420));
#line 574
___nl__bool__2 = nparser_priv0eat(___ref___im__0, ___nl__im__1);
#line 574
c_rt_lib0clear(&___nl__im__1);
#line 574
//clear ___nl__bool__2;
#line 575
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr(___ref___im__0));
#line 575
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(80));
#line 575
if(___nl__bool__4){ goto label_1;}
#line 575
c_rt_lib0clear(&___nl__im__3);
#line 575
//clear ___nl__bool__4;
#line 575
return ___nl__im__5;
#line 575
label_1:
;
#line 575
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(80)));
#line 576
c_rt_lib0move(&___nl__im__6,___get_global_const(299));
#line 576
___nl__bool__7 = nparser_priv0eat(___ref___im__0, ___nl__im__6);
#line 576
c_rt_lib0clear(&___nl__im__6);
#line 576
//clear ___nl__bool__7;
#line 577
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 577
c_rt_lib0clear(&___nl__im__3);
#line 577
//clear ___nl__bool__4;
#line 577
c_rt_lib0clear(&___nl__im__5);
#line 577
return ___nl__im__8;
}

nparser0try_cmd_t0type nparser_priv0parse_block(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__string__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
#line 581
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 581
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 581
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(&___nl__im__2));
#line 581
c_rt_lib0move(&___nl__string__3,___get_global_const(942));
#line 581
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 581
c_rt_lib0clear(&___nl__im__2);
#line 581
c_rt_lib0clear(&___nl__string__3);
#line 582
c_rt_lib0move(&___nl__im__4,___get_global_const(291));
#line 582
___nl__bool__5 = nparser_priv0eat(___ref___im__0, ___nl__im__4);
#line 582
c_rt_lib0clear(&___nl__im__4);
#line 582
//clear ___nl__bool__5;
#line 583
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 584
label_2:
;
#line 584
c_rt_lib0move(&___nl__im__8,___get_global_const(292));
#line 584
___nl__bool__7 = nparser_priv0try_eat(___ref___im__0, ___nl__im__8);
#line 584
c_rt_lib0clear(&___nl__im__8);
#line 584
___nl__bool__7 = !___nl__bool__7;
#line 584
___nl__bool__7 = !___nl__bool__7;
#line 584
if(___nl__bool__7){ goto label_1;}
#line 585
c_rt_lib0move(&___nl__im__10,___get_global_const(409));
#line 585
___nl__bool__9 = nparser_priv0try_eat(___ref___im__0, ___nl__im__10);
#line 585
c_rt_lib0clear(&___nl__im__10);
#line 585
___nl__bool__9 = !___nl__bool__9;
#line 585
if(___nl__bool__9){ goto label_4;}
#line 585
goto label_2;
#line 585
goto label_3;
#line 585
label_4:
;
#line 585
label_3:
;
#line 585
//clear ___nl__bool__9;
#line 586
c_rt_lib0move(&___nl__im__13, nparser_priv0parse_cmd(___ref___im__0));
#line 586
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(80));
#line 586
if(___nl__bool__12){ goto label_5;}
#line 586
c_rt_lib0clear(&___nl__im__1);
#line 586
c_rt_lib0clear(&___nl__im__6);
#line 586
//clear ___nl__bool__7;
#line 586
c_rt_lib0clear(&___nl__im__11);
#line 586
//clear ___nl__bool__12;
#line 586
return ___nl__im__13;
#line 586
label_5:
;
#line 586
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(80)));
#line 587
c_rt_lib0delete(array0push(&___nl__im__6, ___nl__im__11));
#line 588
goto label_2;
#line 588
label_1:
;
#line 589
c_rt_lib0move(&___nl__im__15,___get_global_const(942));
#line 589
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__15));
#line 589
c_rt_lib0move(&___nl__im__14, ntokenizer0get_place_ws(&___nl__im__15));
#line 589
c_rt_lib0move(&___nl__string__16,___get_global_const(942));
#line 589
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__16, ___nl__im__15));
#line 589
c_rt_lib0clear(&___nl__im__15);
#line 589
c_rt_lib0clear(&___nl__string__16);
#line 590
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__14));
#line 591
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(857), ___nl__im__6));
#line 591
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__17, ___get_global_const(227), ___nl__im__20));
#line 591
c_rt_lib0clear(&___nl__im__20);
#line 591
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__19));
#line 591
c_rt_lib0clear(&___nl__im__19);
#line 591
c_rt_lib0clear(&___nl__im__1);
#line 591
c_rt_lib0clear(&___nl__im__6);
#line 591
//clear ___nl__bool__7;
#line 591
c_rt_lib0clear(&___nl__im__11);
#line 591
//clear ___nl__bool__12;
#line 591
c_rt_lib0clear(&___nl__im__13);
#line 591
c_rt_lib0clear(&___nl__im__14);
#line 591
c_rt_lib0clear(&___nl__im__17);
#line 591
return ___nl__im__18;
}

ImmT  nparser_priv0parse_try_ensure(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
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
#line 595
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 595
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 595
c_rt_lib0move(&___nl__im__3,___get_global_const(463));
#line 595
___nl__bool__1 = ntokenizer0next_is(&___nl__im__2, ___nl__im__3);
#line 595
c_rt_lib0move(&___nl__string__4,___get_global_const(942));
#line 595
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__4, ___nl__im__2));
#line 595
c_rt_lib0clear(&___nl__im__2);
#line 595
c_rt_lib0clear(&___nl__im__3);
#line 595
c_rt_lib0clear(&___nl__string__4);
#line 595
___nl__bool__1 = !___nl__bool__1;
#line 595
if(___nl__bool__1){ goto label_2;}
#line 596
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_var_decl(___ref___im__0));
#line 596
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 596
if(___nl__bool__6){ goto label_3;}
#line 596
//clear ___nl__bool__1;
#line 596
c_rt_lib0clear(&___nl__im__5);
#line 596
//clear ___nl__bool__6;
#line 596
return ___nl__im__7;
#line 596
label_3:
;
#line 596
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 597
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(688), ___nl__im__5));
#line 597
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__9));
#line 597
c_rt_lib0clear(&___nl__im__9);
#line 597
//clear ___nl__bool__1;
#line 597
c_rt_lib0clear(&___nl__im__5);
#line 597
//clear ___nl__bool__6;
#line 597
c_rt_lib0clear(&___nl__im__7);
#line 597
return ___nl__im__8;
#line 598
goto label_1;
#line 598
label_2:
;
#line 599
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_expr(___ref___im__0));
#line 599
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(80));
#line 599
if(___nl__bool__11){ goto label_4;}
#line 599
//clear ___nl__bool__1;
#line 599
c_rt_lib0clear(&___nl__im__5);
#line 599
//clear ___nl__bool__6;
#line 599
c_rt_lib0clear(&___nl__im__7);
#line 599
c_rt_lib0clear(&___nl__im__8);
#line 599
c_rt_lib0clear(&___nl__im__10);
#line 599
//clear ___nl__bool__11;
#line 599
return ___nl__im__12;
#line 599
label_4:
;
#line 599
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(80)));
#line 600
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(219)));
#line 600
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(234));
#line 600
c_rt_lib0clear(&___nl__im__15);
#line 600
___nl__bool__14 = !___nl__bool__13;
#line 600
if(___nl__bool__14){ goto label_7;}
#line 600
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(219)));
#line 600
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(219)));
#line 600
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(234)));
#line 600
c_rt_lib0clear(&___nl__im__18);
#line 600
c_rt_lib0clear(&___nl__im__19);
#line 600
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(514)));
#line 600
c_rt_lib0clear(&___nl__im__17);
#line 600
c_rt_lib0move(&___nl__im__20,___get_global_const(889));
#line 600
___nl__bool__13 = c_rt_lib0eq(___nl__im__16, ___nl__im__20);
#line 600
c_rt_lib0clear(&___nl__im__16);
#line 600
c_rt_lib0clear(&___nl__im__20);
#line 600
label_7:
;
#line 600
//clear ___nl__bool__14;
#line 600
___nl__bool__13 = !___nl__bool__13;
#line 600
if(___nl__bool__13){ goto label_6;}
#line 601
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(219)));
#line 601
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(219)));
#line 601
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_const(234)));
#line 601
c_rt_lib0clear(&___nl__im__24);
#line 601
c_rt_lib0clear(&___nl__im__25);
#line 601
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(873), ___nl__im__23));
#line 601
c_rt_lib0clear(&___nl__im__23);
#line 601
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__22));
#line 601
c_rt_lib0clear(&___nl__im__22);
#line 601
//clear ___nl__bool__1;
#line 601
c_rt_lib0clear(&___nl__im__5);
#line 601
//clear ___nl__bool__6;
#line 601
c_rt_lib0clear(&___nl__im__7);
#line 601
c_rt_lib0clear(&___nl__im__8);
#line 601
c_rt_lib0clear(&___nl__im__10);
#line 601
//clear ___nl__bool__11;
#line 601
c_rt_lib0clear(&___nl__im__12);
#line 601
//clear ___nl__bool__13;
#line 601
return ___nl__im__21;
#line 602
goto label_5;
#line 602
label_6:
;
#line 603
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(874), ___nl__im__10));
#line 603
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__27));
#line 603
c_rt_lib0clear(&___nl__im__27);
#line 603
//clear ___nl__bool__1;
#line 603
c_rt_lib0clear(&___nl__im__5);
#line 603
//clear ___nl__bool__6;
#line 603
c_rt_lib0clear(&___nl__im__7);
#line 603
c_rt_lib0clear(&___nl__im__8);
#line 603
c_rt_lib0clear(&___nl__im__10);
#line 603
//clear ___nl__bool__11;
#line 603
c_rt_lib0clear(&___nl__im__12);
#line 603
//clear ___nl__bool__13;
#line 603
c_rt_lib0clear(&___nl__im__21);
#line 603
return ___nl__im__26;
#line 604
goto label_5;
#line 604
label_5:
;
#line 604
//clear ___nl__bool__13;
#line 604
c_rt_lib0clear(&___nl__im__21);
#line 604
c_rt_lib0clear(&___nl__im__26);
#line 605
goto label_1;
#line 605
label_1:
;
#line 605
//clear ___nl__bool__1;
#line 605
c_rt_lib0clear(&___nl__im__5);
#line 605
//clear ___nl__bool__6;
#line 605
c_rt_lib0clear(&___nl__im__7);
#line 605
c_rt_lib0clear(&___nl__im__8);
#line 605
c_rt_lib0clear(&___nl__im__10);
#line 605
//clear ___nl__bool__11;
#line 605
c_rt_lib0clear(&___nl__im__12);
}

nast0debug_t0type nparser_priv0get_debug_from_begin(nparser0state_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__string__7 = NULL;
#line 609
c_rt_lib0move(&___nl__im__3,___get_global_const(942));
#line 609
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash(___nl__im__0, ___nl__im__3));
#line 609
c_rt_lib0move(&___nl__im__2, ntokenizer0get_place(&___nl__im__3));
#line 609
c_rt_lib0move(&___nl__string__4,___get_global_const(942));
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__0, ___nl__string__4, ___nl__im__3));
#line 609
c_rt_lib0clear(&___nl__im__3);
#line 609
c_rt_lib0clear(&___nl__string__4);
#line 609
c_rt_lib0move(&___nl__im__6,___get_global_const(942));
#line 609
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash(___nl__im__0, ___nl__im__6));
#line 609
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(&___nl__im__6));
#line 609
c_rt_lib0move(&___nl__string__7,___get_global_const(942));
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__0, ___nl__string__7, ___nl__im__6));
#line 609
c_rt_lib0clear(&___nl__im__6);
#line 609
c_rt_lib0clear(&___nl__string__7);
#line 609
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__2, ___get_global_const(916), ___nl__im__5));
#line 609
c_rt_lib0clear(&___nl__im__2);
#line 609
c_rt_lib0clear(&___nl__im__5);
#line 609
c_rt_lib0clear(&___nl__im__0);
#line 609
return ___nl__im__1;
}

nparser0try_cmd_t0type nparser_priv0parse_cmd(nparser0state_t0type* ___ref___im__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__string__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
bool  ___nl__bool__65 = false;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
bool  ___nl__bool__75 = false;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
bool  ___nl__bool__79 = false;
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__string__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
bool  ___nl__bool__102 = false;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
bool  ___nl__bool__105 = false;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
bool  ___nl__bool__112 = false;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__string__115 = NULL;
ImmT  ___nl__im__116 = NULL;
bool  ___nl__bool__117 = false;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__string__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
bool  ___nl__bool__128 = false;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
bool  ___nl__bool__133 = false;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__string__139 = NULL;
bool  ___nl__bool__140 = false;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
bool  ___nl__bool__144 = false;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
bool  ___nl__bool__147 = false;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__string__150 = NULL;
bool  ___nl__bool__151 = false;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
bool  ___nl__bool__155 = false;
bool  ___nl__bool__156 = false;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__string__161 = NULL;
ImmT  ___nl__im__162 = NULL;
bool  ___nl__bool__163 = false;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__string__170 = NULL;
bool  ___nl__bool__171 = false;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
INT  ___nl__int__174 = 0;
INT  ___nl__int__175 = 0;
INT  ___nl__int__176 = 0;
bool  ___nl__bool__177 = false;
INT  ___nl__int__178 = 0;
ImmT  ___nl__im__179 = NULL;
bool  ___nl__bool__180 = false;
bool  ___nl__bool__181 = false;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
bool  ___nl__bool__184 = false;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
bool  ___nl__bool__188 = false;
ImmT  ___nl__im__189 = NULL;
bool  ___nl__bool__190 = false;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
ImmT  ___nl__im__194 = NULL;
bool  ___nl__bool__195 = false;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__string__198 = NULL;
bool  ___nl__bool__199 = false;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
ImmT  ___nl__im__204 = NULL;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__string__207 = NULL;
bool  ___nl__bool__208 = false;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
ImmT  ___nl__string__212 = NULL;
ImmT  ___nl__im__213 = NULL;
ImmT  ___nl__string__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
bool  ___nl__bool__217 = false;
ImmT  ___nl__im__218 = NULL;
bool  ___nl__bool__219 = false;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__string__223 = NULL;
ImmT  ___nl__im__224 = NULL;
bool  ___nl__bool__225 = false;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
bool  ___nl__bool__228 = false;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__string__231 = NULL;
ImmT  ___nl__im__232 = NULL;
bool  ___nl__bool__233 = false;
ImmT  ___nl__im__234 = NULL;
bool  ___nl__bool__235 = false;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__string__239 = NULL;
ImmT  ___nl__im__240 = NULL;
bool  ___nl__bool__241 = false;
ImmT  ___nl__im__242 = NULL;
bool  ___nl__bool__243 = false;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
bool  ___nl__bool__246 = false;
ImmT  ___nl__im__247 = NULL;
bool  ___nl__bool__248 = false;
bool  ___nl__bool__249 = false;
bool  ___nl__bool__250 = false;
bool  ___nl__bool__251 = false;
bool  ___nl__bool__252 = false;
bool  ___nl__bool__253 = false;
bool  ___nl__bool__254 = false;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__string__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
bool  ___nl__bool__261 = false;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
bool  ___nl__bool__264 = false;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
bool  ___nl__bool__268 = false;
bool  ___nl__bool__269 = false;
ImmT  ___nl__im__270 = NULL;
ImmT  ___nl__im__271 = NULL;
ImmT  ___nl__im__272 = NULL;
bool  ___nl__bool__273 = false;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
bool  ___nl__bool__276 = false;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
bool  ___nl__bool__280 = false;
bool  ___nl__bool__281 = false;
ImmT  ___nl__im__282 = NULL;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
bool  ___nl__bool__285 = false;
ImmT  ___nl__im__286 = NULL;
ImmT  ___nl__im__287 = NULL;
bool  ___nl__bool__288 = false;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
bool  ___nl__bool__292 = false;
bool  ___nl__bool__293 = false;
ImmT  ___nl__im__294 = NULL;
ImmT  ___nl__im__295 = NULL;
ImmT  ___nl__string__296 = NULL;
ImmT  ___nl__im__297 = NULL;
ImmT  ___nl__im__298 = NULL;
ImmT  ___nl__im__299 = NULL;
ImmT  ___nl__im__300 = NULL;
ImmT  ___nl__im__301 = NULL;
ImmT  ___nl__im__302 = NULL;
ImmT  ___nl__im__303 = NULL;
ImmT  ___nl__im__304 = NULL;
ImmT  ___nl__im__305 = NULL;
bool  ___nl__bool__306 = false;
bool  ___nl__bool__307 = false;
ImmT  ___nl__im__308 = NULL;
ImmT  ___nl__im__309 = NULL;
ImmT  ___nl__im__310 = NULL;
bool  ___nl__bool__311 = false;
ImmT  ___nl__im__312 = NULL;
bool  ___nl__bool__313 = false;
ImmT  ___nl__im__314 = NULL;
ImmT  ___nl__im__315 = NULL;
ImmT  ___nl__im__316 = NULL;
bool  ___nl__bool__317 = false;
ImmT  ___nl__im__318 = NULL;
ImmT  ___nl__im__319 = NULL;
ImmT  ___nl__im__320 = NULL;
ImmT  ___nl__im__321 = NULL;
bool  ___nl__bool__322 = false;
bool  ___nl__bool__323 = false;
ImmT  ___nl__im__324 = NULL;
ImmT  ___nl__im__325 = NULL;
ImmT  ___nl__im__326 = NULL;
bool  ___nl__bool__327 = false;
ImmT  ___nl__im__328 = NULL;
ImmT  ___nl__im__329 = NULL;
ImmT  ___nl__string__330 = NULL;
ImmT  ___nl__im__331 = NULL;
ImmT  ___nl__im__332 = NULL;
ImmT  ___nl__im__333 = NULL;
#line 613
c_rt_lib0move(&___nl__im__2,___get_global_const(942));
#line 613
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 613
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(&___nl__im__2));
#line 613
c_rt_lib0move(&___nl__string__3,___get_global_const(942));
#line 613
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 613
c_rt_lib0clear(&___nl__im__2);
#line 613
c_rt_lib0clear(&___nl__string__3);
#line 615
c_rt_lib0move(&___nl__im__6,___get_global_const(846));
#line 615
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__6);
#line 615
c_rt_lib0clear(&___nl__im__6);
#line 615
___nl__bool__5 = !___nl__bool__5;
#line 615
if(___nl__bool__5){ goto label_2;}
#line 616
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 617
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_cond(___ref___im__0));
#line 617
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 617
if(___nl__bool__8){ goto label_3;}
#line 617
c_rt_lib0clear(&___nl__im__1);
#line 617
c_rt_lib0clear(&___nl__im__4);
#line 617
//clear ___nl__bool__5;
#line 617
c_rt_lib0clear(&___nl__im__7);
#line 617
//clear ___nl__bool__8;
#line 617
return ___nl__im__9;
#line 617
label_3:
;
#line 617
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 617
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(860), ___nl__im__10);
#line 618
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_block(___ref___im__0));
#line 618
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(80));
#line 618
if(___nl__bool__11){ goto label_4;}
#line 618
c_rt_lib0clear(&___nl__im__1);
#line 618
c_rt_lib0clear(&___nl__im__4);
#line 618
//clear ___nl__bool__5;
#line 618
c_rt_lib0clear(&___nl__im__7);
#line 618
//clear ___nl__bool__8;
#line 618
c_rt_lib0clear(&___nl__im__9);
#line 618
c_rt_lib0clear(&___nl__im__10);
#line 618
//clear ___nl__bool__11;
#line 618
return ___nl__im__12;
#line 618
label_4:
;
#line 618
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(80)));
#line 618
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(846), ___nl__im__13);
#line 619
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 620
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 620
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 620
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(861), ___nl__im__15);
#line 620
c_rt_lib0clear(&___nl__im__15);
#line 620
c_rt_lib0clear(&___nl__im__16);
#line 621
label_6:
;
#line 621
c_rt_lib0move(&___nl__im__18,___get_global_const(861));
#line 621
___nl__bool__17 = nparser_priv0try_eat(___ref___im__0, ___nl__im__18);
#line 621
c_rt_lib0clear(&___nl__im__18);
#line 621
___nl__bool__17 = !___nl__bool__17;
#line 621
if(___nl__bool__17){ goto label_5;}
#line 622
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(0));
#line 623
c_rt_lib0move(&___nl__im__21,___get_global_const(942));
#line 623
c_rt_lib0move(&___nl__im__21, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__21));
#line 623
c_rt_lib0move(&___nl__im__20, ntokenizer0get_place(&___nl__im__21));
#line 623
c_rt_lib0move(&___nl__string__22,___get_global_const(942));
#line 623
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__22, ___nl__im__21));
#line 623
c_rt_lib0clear(&___nl__im__21);
#line 623
c_rt_lib0clear(&___nl__string__22);
#line 624
c_rt_lib0move(&___nl__im__24, nparser_priv0parse_cond(___ref___im__0));
#line 624
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(80));
#line 624
if(___nl__bool__23){ goto label_7;}
#line 624
c_rt_lib0clear(&___nl__im__1);
#line 624
c_rt_lib0clear(&___nl__im__4);
#line 624
//clear ___nl__bool__5;
#line 624
c_rt_lib0clear(&___nl__im__7);
#line 624
//clear ___nl__bool__8;
#line 624
c_rt_lib0clear(&___nl__im__9);
#line 624
c_rt_lib0clear(&___nl__im__10);
#line 624
//clear ___nl__bool__11;
#line 624
c_rt_lib0clear(&___nl__im__12);
#line 624
c_rt_lib0clear(&___nl__im__13);
#line 624
c_rt_lib0clear(&___nl__im__14);
#line 624
//clear ___nl__bool__17;
#line 624
c_rt_lib0clear(&___nl__im__19);
#line 624
c_rt_lib0clear(&___nl__im__20);
#line 624
//clear ___nl__bool__23;
#line 624
return ___nl__im__24;
#line 624
label_7:
;
#line 624
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(80)));
#line 624
c_rt_lib0hash_set_value_dec(&___nl__im__19, ___get_global_const(860), ___nl__im__25);
#line 625
c_rt_lib0move(&___nl__im__27,___get_global_const(942));
#line 625
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__27));
#line 625
c_rt_lib0move(&___nl__im__26, ntokenizer0get_place_ws(&___nl__im__27));
#line 625
c_rt_lib0move(&___nl__string__28,___get_global_const(942));
#line 625
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__28, ___nl__im__27));
#line 625
c_rt_lib0clear(&___nl__im__27);
#line 625
c_rt_lib0clear(&___nl__string__28);
#line 626
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__20, ___get_global_const(916), ___nl__im__26));
#line 626
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 626
c_rt_lib0hash_set_value_dec(&___nl__im__19, ___get_global_const(221), ___nl__im__29);
#line 626
c_rt_lib0clear(&___nl__im__29);
#line 626
c_rt_lib0clear(&___nl__im__30);
#line 627
c_rt_lib0move(&___nl__im__32, nparser_priv0parse_block(___ref___im__0));
#line 627
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(80));
#line 627
if(___nl__bool__31){ goto label_8;}
#line 627
c_rt_lib0clear(&___nl__im__1);
#line 627
c_rt_lib0clear(&___nl__im__4);
#line 627
//clear ___nl__bool__5;
#line 627
c_rt_lib0clear(&___nl__im__7);
#line 627
//clear ___nl__bool__8;
#line 627
c_rt_lib0clear(&___nl__im__9);
#line 627
c_rt_lib0clear(&___nl__im__10);
#line 627
//clear ___nl__bool__11;
#line 627
c_rt_lib0clear(&___nl__im__12);
#line 627
c_rt_lib0clear(&___nl__im__13);
#line 627
c_rt_lib0clear(&___nl__im__14);
#line 627
//clear ___nl__bool__17;
#line 627
c_rt_lib0clear(&___nl__im__19);
#line 627
c_rt_lib0clear(&___nl__im__20);
#line 627
//clear ___nl__bool__23;
#line 627
c_rt_lib0clear(&___nl__im__24);
#line 627
c_rt_lib0clear(&___nl__im__25);
#line 627
c_rt_lib0clear(&___nl__im__26);
#line 627
//clear ___nl__bool__31;
#line 627
return ___nl__im__32;
#line 627
label_8:
;
#line 627
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(80)));
#line 627
c_rt_lib0hash_set_value_dec(&___nl__im__19, ___get_global_const(227), ___nl__im__33);
#line 628
c_rt_lib0delete(array0push(&___nl__im__14, ___nl__im__19));
#line 629
goto label_6;
#line 629
label_5:
;
#line 630
c_rt_lib0copy(&___nl__im__34, ___nl__im__14);
#line 630
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(861), ___nl__im__34);
#line 630
c_rt_lib0clear(&___nl__im__34);
#line 631
c_rt_lib0move(&___nl__im__36,___get_global_const(862));
#line 631
___nl__bool__35 = nparser_priv0try_eat(___ref___im__0, ___nl__im__36);
#line 631
c_rt_lib0clear(&___nl__im__36);
#line 631
___nl__bool__35 = !___nl__bool__35;
#line 631
if(___nl__bool__35){ goto label_10;}
#line 632
c_rt_lib0move(&___nl__im__38, nparser_priv0parse_block(___ref___im__0));
#line 632
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(80));
#line 632
if(___nl__bool__37){ goto label_11;}
#line 632
c_rt_lib0clear(&___nl__im__1);
#line 632
c_rt_lib0clear(&___nl__im__4);
#line 632
//clear ___nl__bool__5;
#line 632
c_rt_lib0clear(&___nl__im__7);
#line 632
//clear ___nl__bool__8;
#line 632
c_rt_lib0clear(&___nl__im__9);
#line 632
c_rt_lib0clear(&___nl__im__10);
#line 632
//clear ___nl__bool__11;
#line 632
c_rt_lib0clear(&___nl__im__12);
#line 632
c_rt_lib0clear(&___nl__im__13);
#line 632
c_rt_lib0clear(&___nl__im__14);
#line 632
//clear ___nl__bool__17;
#line 632
c_rt_lib0clear(&___nl__im__19);
#line 632
c_rt_lib0clear(&___nl__im__20);
#line 632
//clear ___nl__bool__23;
#line 632
c_rt_lib0clear(&___nl__im__24);
#line 632
c_rt_lib0clear(&___nl__im__25);
#line 632
c_rt_lib0clear(&___nl__im__26);
#line 632
//clear ___nl__bool__31;
#line 632
c_rt_lib0clear(&___nl__im__32);
#line 632
c_rt_lib0clear(&___nl__im__33);
#line 632
//clear ___nl__bool__35;
#line 632
//clear ___nl__bool__37;
#line 632
return ___nl__im__38;
#line 632
label_11:
;
#line 632
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__38, ___get_global_const(80)));
#line 632
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(862), ___nl__im__39);
#line 633
goto label_9;
#line 633
label_10:
;
#line 634
c_rt_lib0move(&___nl__im__42, nparser_priv0get_debug_from_begin((*___ref___im__0)));
#line 634
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(859)));
#line 634
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__42, ___get_global_const(227), ___nl__im__43));
#line 634
c_rt_lib0clear(&___nl__im__42);
#line 634
c_rt_lib0clear(&___nl__im__43);
#line 634
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 634
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(862), ___nl__im__40);
#line 634
c_rt_lib0clear(&___nl__im__40);
#line 634
c_rt_lib0clear(&___nl__im__41);
#line 635
goto label_9;
#line 635
label_9:
;
#line 635
//clear ___nl__bool__35;
#line 635
//clear ___nl__bool__37;
#line 635
c_rt_lib0clear(&___nl__im__38);
#line 635
c_rt_lib0clear(&___nl__im__39);
#line 636
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(846), ___nl__im__7));
#line 637
goto label_1;
#line 637
label_2:
;
#line 637
c_rt_lib0move(&___nl__im__44,___get_global_const(848));
#line 637
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__44);
#line 637
c_rt_lib0clear(&___nl__im__44);
#line 637
___nl__bool__5 = !___nl__bool__5;
#line 637
if(___nl__bool__5){ goto label_12;}
#line 638
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(0));
#line 639
___nl__bool__47 = false;
#line 639
c_rt_lib0move(&___nl__im__46, c_rt_lib0bool_to_nl_native(___nl__bool__47));
#line 639
c_rt_lib0hash_set_value_dec(&___nl__im__45, ___get_global_const(928), ___nl__im__46);
#line 639
c_rt_lib0clear(&___nl__im__46);
#line 639
//clear ___nl__bool__47;
#line 640
c_rt_lib0move(&___nl__im__49, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 640
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 640
c_rt_lib0hash_set_value_dec(&___nl__im__45, ___get_global_const(569), ___nl__im__48);
#line 640
c_rt_lib0clear(&___nl__im__48);
#line 640
c_rt_lib0clear(&___nl__im__49);
#line 641
c_rt_lib0move(&___nl__im__51, nparser_priv0parse_cond(___ref___im__0));
#line 641
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(80));
#line 641
if(___nl__bool__50){ goto label_13;}
#line 641
c_rt_lib0clear(&___nl__im__1);
#line 641
c_rt_lib0clear(&___nl__im__4);
#line 641
//clear ___nl__bool__5;
#line 641
c_rt_lib0clear(&___nl__im__7);
#line 641
//clear ___nl__bool__8;
#line 641
c_rt_lib0clear(&___nl__im__9);
#line 641
c_rt_lib0clear(&___nl__im__10);
#line 641
//clear ___nl__bool__11;
#line 641
c_rt_lib0clear(&___nl__im__12);
#line 641
c_rt_lib0clear(&___nl__im__13);
#line 641
c_rt_lib0clear(&___nl__im__14);
#line 641
//clear ___nl__bool__17;
#line 641
c_rt_lib0clear(&___nl__im__19);
#line 641
c_rt_lib0clear(&___nl__im__20);
#line 641
//clear ___nl__bool__23;
#line 641
c_rt_lib0clear(&___nl__im__24);
#line 641
c_rt_lib0clear(&___nl__im__25);
#line 641
c_rt_lib0clear(&___nl__im__26);
#line 641
//clear ___nl__bool__31;
#line 641
c_rt_lib0clear(&___nl__im__32);
#line 641
c_rt_lib0clear(&___nl__im__33);
#line 641
c_rt_lib0clear(&___nl__im__45);
#line 641
//clear ___nl__bool__50;
#line 641
return ___nl__im__51;
#line 641
label_13:
;
#line 641
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(80)));
#line 641
c_rt_lib0hash_set_value_dec(&___nl__im__45, ___get_global_const(38), ___nl__im__52);
#line 642
c_rt_lib0move(&___nl__im__54, nparser_priv0parse_block(___ref___im__0));
#line 642
___nl__bool__53 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(80));
#line 642
if(___nl__bool__53){ goto label_14;}
#line 642
c_rt_lib0clear(&___nl__im__1);
#line 642
c_rt_lib0clear(&___nl__im__4);
#line 642
//clear ___nl__bool__5;
#line 642
c_rt_lib0clear(&___nl__im__7);
#line 642
//clear ___nl__bool__8;
#line 642
c_rt_lib0clear(&___nl__im__9);
#line 642
c_rt_lib0clear(&___nl__im__10);
#line 642
//clear ___nl__bool__11;
#line 642
c_rt_lib0clear(&___nl__im__12);
#line 642
c_rt_lib0clear(&___nl__im__13);
#line 642
c_rt_lib0clear(&___nl__im__14);
#line 642
//clear ___nl__bool__17;
#line 642
c_rt_lib0clear(&___nl__im__19);
#line 642
c_rt_lib0clear(&___nl__im__20);
#line 642
//clear ___nl__bool__23;
#line 642
c_rt_lib0clear(&___nl__im__24);
#line 642
c_rt_lib0clear(&___nl__im__25);
#line 642
c_rt_lib0clear(&___nl__im__26);
#line 642
//clear ___nl__bool__31;
#line 642
c_rt_lib0clear(&___nl__im__32);
#line 642
c_rt_lib0clear(&___nl__im__33);
#line 642
c_rt_lib0clear(&___nl__im__45);
#line 642
//clear ___nl__bool__50;
#line 642
c_rt_lib0clear(&___nl__im__51);
#line 642
c_rt_lib0clear(&___nl__im__52);
#line 642
//clear ___nl__bool__53;
#line 642
return ___nl__im__54;
#line 642
label_14:
;
#line 642
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__54, ___get_global_const(80)));
#line 642
c_rt_lib0hash_set_value_dec(&___nl__im__45, ___get_global_const(227), ___nl__im__55);
#line 643
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(848), ___nl__im__45));
#line 644
goto label_1;
#line 644
label_12:
;
#line 644
c_rt_lib0move(&___nl__im__56,___get_global_const(850));
#line 644
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__56);
#line 644
c_rt_lib0clear(&___nl__im__56);
#line 644
___nl__bool__5 = !___nl__bool__5;
#line 644
if(___nl__bool__5){ goto label_15;}
#line 645
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_mk(0));
#line 646
___nl__bool__59 = false;
#line 646
c_rt_lib0move(&___nl__im__58, c_rt_lib0bool_to_nl_native(___nl__bool__59));
#line 646
c_rt_lib0hash_set_value_dec(&___nl__im__57, ___get_global_const(928), ___nl__im__58);
#line 646
c_rt_lib0clear(&___nl__im__58);
#line 646
//clear ___nl__bool__59;
#line 647
c_rt_lib0move(&___nl__im__61, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 647
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 647
c_rt_lib0hash_set_value_dec(&___nl__im__57, ___get_global_const(569), ___nl__im__60);
#line 647
c_rt_lib0clear(&___nl__im__60);
#line 647
c_rt_lib0clear(&___nl__im__61);
#line 648
c_rt_lib0move(&___nl__im__63, nparser_priv0parse_cond(___ref___im__0));
#line 648
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_const(80));
#line 648
if(___nl__bool__62){ goto label_16;}
#line 648
c_rt_lib0clear(&___nl__im__1);
#line 648
c_rt_lib0clear(&___nl__im__4);
#line 648
//clear ___nl__bool__5;
#line 648
c_rt_lib0clear(&___nl__im__7);
#line 648
//clear ___nl__bool__8;
#line 648
c_rt_lib0clear(&___nl__im__9);
#line 648
c_rt_lib0clear(&___nl__im__10);
#line 648
//clear ___nl__bool__11;
#line 648
c_rt_lib0clear(&___nl__im__12);
#line 648
c_rt_lib0clear(&___nl__im__13);
#line 648
c_rt_lib0clear(&___nl__im__14);
#line 648
//clear ___nl__bool__17;
#line 648
c_rt_lib0clear(&___nl__im__19);
#line 648
c_rt_lib0clear(&___nl__im__20);
#line 648
//clear ___nl__bool__23;
#line 648
c_rt_lib0clear(&___nl__im__24);
#line 648
c_rt_lib0clear(&___nl__im__25);
#line 648
c_rt_lib0clear(&___nl__im__26);
#line 648
//clear ___nl__bool__31;
#line 648
c_rt_lib0clear(&___nl__im__32);
#line 648
c_rt_lib0clear(&___nl__im__33);
#line 648
c_rt_lib0clear(&___nl__im__45);
#line 648
//clear ___nl__bool__50;
#line 648
c_rt_lib0clear(&___nl__im__51);
#line 648
c_rt_lib0clear(&___nl__im__52);
#line 648
//clear ___nl__bool__53;
#line 648
c_rt_lib0clear(&___nl__im__54);
#line 648
c_rt_lib0clear(&___nl__im__55);
#line 648
c_rt_lib0clear(&___nl__im__57);
#line 648
//clear ___nl__bool__62;
#line 648
return ___nl__im__63;
#line 648
label_16:
;
#line 648
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__63, ___get_global_const(80)));
#line 648
c_rt_lib0hash_set_value_dec(&___nl__im__57, ___get_global_const(865), ___nl__im__64);
#line 649
c_rt_lib0move(&___nl__im__66, nparser_priv0parse_block(___ref___im__0));
#line 649
___nl__bool__65 = c_rt_lib0priv_is(___nl__im__66, ___get_global_const(80));
#line 649
if(___nl__bool__65){ goto label_17;}
#line 649
c_rt_lib0clear(&___nl__im__1);
#line 649
c_rt_lib0clear(&___nl__im__4);
#line 649
//clear ___nl__bool__5;
#line 649
c_rt_lib0clear(&___nl__im__7);
#line 649
//clear ___nl__bool__8;
#line 649
c_rt_lib0clear(&___nl__im__9);
#line 649
c_rt_lib0clear(&___nl__im__10);
#line 649
//clear ___nl__bool__11;
#line 649
c_rt_lib0clear(&___nl__im__12);
#line 649
c_rt_lib0clear(&___nl__im__13);
#line 649
c_rt_lib0clear(&___nl__im__14);
#line 649
//clear ___nl__bool__17;
#line 649
c_rt_lib0clear(&___nl__im__19);
#line 649
c_rt_lib0clear(&___nl__im__20);
#line 649
//clear ___nl__bool__23;
#line 649
c_rt_lib0clear(&___nl__im__24);
#line 649
c_rt_lib0clear(&___nl__im__25);
#line 649
c_rt_lib0clear(&___nl__im__26);
#line 649
//clear ___nl__bool__31;
#line 649
c_rt_lib0clear(&___nl__im__32);
#line 649
c_rt_lib0clear(&___nl__im__33);
#line 649
c_rt_lib0clear(&___nl__im__45);
#line 649
//clear ___nl__bool__50;
#line 649
c_rt_lib0clear(&___nl__im__51);
#line 649
c_rt_lib0clear(&___nl__im__52);
#line 649
//clear ___nl__bool__53;
#line 649
c_rt_lib0clear(&___nl__im__54);
#line 649
c_rt_lib0clear(&___nl__im__55);
#line 649
c_rt_lib0clear(&___nl__im__57);
#line 649
//clear ___nl__bool__62;
#line 649
c_rt_lib0clear(&___nl__im__63);
#line 649
c_rt_lib0clear(&___nl__im__64);
#line 649
//clear ___nl__bool__65;
#line 649
return ___nl__im__66;
#line 649
label_17:
;
#line 649
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__66, ___get_global_const(80)));
#line 649
c_rt_lib0hash_set_value_dec(&___nl__im__57, ___get_global_const(227), ___nl__im__67);
#line 650
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(850), ___nl__im__57));
#line 651
goto label_1;
#line 651
label_15:
;
#line 651
c_rt_lib0move(&___nl__im__68,___get_global_const(160));
#line 651
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__68);
#line 651
c_rt_lib0clear(&___nl__im__68);
#line 651
___nl__bool__5 = !___nl__bool__5;
#line 651
if(___nl__bool__5){ goto label_18;}
#line 652
c_rt_lib0move(&___nl__im__71, nparser_priv0parse_block(___ref___im__0));
#line 652
___nl__bool__70 = c_rt_lib0priv_is(___nl__im__71, ___get_global_const(80));
#line 652
if(___nl__bool__70){ goto label_19;}
#line 652
c_rt_lib0clear(&___nl__im__1);
#line 652
c_rt_lib0clear(&___nl__im__4);
#line 652
//clear ___nl__bool__5;
#line 652
c_rt_lib0clear(&___nl__im__7);
#line 652
//clear ___nl__bool__8;
#line 652
c_rt_lib0clear(&___nl__im__9);
#line 652
c_rt_lib0clear(&___nl__im__10);
#line 652
//clear ___nl__bool__11;
#line 652
c_rt_lib0clear(&___nl__im__12);
#line 652
c_rt_lib0clear(&___nl__im__13);
#line 652
c_rt_lib0clear(&___nl__im__14);
#line 652
//clear ___nl__bool__17;
#line 652
c_rt_lib0clear(&___nl__im__19);
#line 652
c_rt_lib0clear(&___nl__im__20);
#line 652
//clear ___nl__bool__23;
#line 652
c_rt_lib0clear(&___nl__im__24);
#line 652
c_rt_lib0clear(&___nl__im__25);
#line 652
c_rt_lib0clear(&___nl__im__26);
#line 652
//clear ___nl__bool__31;
#line 652
c_rt_lib0clear(&___nl__im__32);
#line 652
c_rt_lib0clear(&___nl__im__33);
#line 652
c_rt_lib0clear(&___nl__im__45);
#line 652
//clear ___nl__bool__50;
#line 652
c_rt_lib0clear(&___nl__im__51);
#line 652
c_rt_lib0clear(&___nl__im__52);
#line 652
//clear ___nl__bool__53;
#line 652
c_rt_lib0clear(&___nl__im__54);
#line 652
c_rt_lib0clear(&___nl__im__55);
#line 652
c_rt_lib0clear(&___nl__im__57);
#line 652
//clear ___nl__bool__62;
#line 652
c_rt_lib0clear(&___nl__im__63);
#line 652
c_rt_lib0clear(&___nl__im__64);
#line 652
//clear ___nl__bool__65;
#line 652
c_rt_lib0clear(&___nl__im__66);
#line 652
c_rt_lib0clear(&___nl__im__67);
#line 652
c_rt_lib0clear(&___nl__im__69);
#line 652
//clear ___nl__bool__70;
#line 652
return ___nl__im__71;
#line 652
label_19:
;
#line 652
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__71, ___get_global_const(80)));
#line 653
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(160), ___nl__im__69));
#line 654
goto label_1;
#line 654
label_18:
;
#line 654
c_rt_lib0move(&___nl__im__72,___get_global_const(849));
#line 654
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__72);
#line 654
c_rt_lib0clear(&___nl__im__72);
#line 654
___nl__bool__5 = !___nl__bool__5;
#line 654
if(___nl__bool__5){ goto label_20;}
#line 655
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_mk(0));
#line 656
___nl__bool__75 = false;
#line 656
c_rt_lib0move(&___nl__im__74, c_rt_lib0bool_to_nl_native(___nl__bool__75));
#line 656
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(928), ___nl__im__74);
#line 656
c_rt_lib0clear(&___nl__im__74);
#line 656
//clear ___nl__bool__75;
#line 657
c_rt_lib0move(&___nl__im__77, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 657
c_rt_lib0copy(&___nl__im__76, ___nl__im__77);
#line 657
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(371), ___nl__im__76);
#line 657
c_rt_lib0clear(&___nl__im__76);
#line 657
c_rt_lib0clear(&___nl__im__77);
#line 658
c_rt_lib0move(&___nl__im__78,___get_global_const(295));
#line 658
___nl__bool__79 = nparser_priv0eat(___ref___im__0, ___nl__im__78);
#line 658
c_rt_lib0clear(&___nl__im__78);
#line 658
//clear ___nl__bool__79;
#line 659
c_rt_lib0move(&___nl__im__81,___get_global_const(942));
#line 659
c_rt_lib0move(&___nl__im__81, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__81));
#line 659
c_rt_lib0move(&___nl__im__82,___get_global_const(463));
#line 659
___nl__bool__80 = ntokenizer0next_is(&___nl__im__81, ___nl__im__82);
#line 659
c_rt_lib0move(&___nl__string__83,___get_global_const(942));
#line 659
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__83, ___nl__im__81));
#line 659
c_rt_lib0clear(&___nl__im__81);
#line 659
c_rt_lib0clear(&___nl__im__82);
#line 659
c_rt_lib0clear(&___nl__string__83);
#line 659
___nl__bool__80 = !___nl__bool__80;
#line 659
if(___nl__bool__80){ goto label_22;}
#line 660
c_rt_lib0move(&___nl__im__85, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 660
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 660
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(224), ___nl__im__84);
#line 660
c_rt_lib0clear(&___nl__im__84);
#line 660
c_rt_lib0clear(&___nl__im__85);
#line 661
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 661
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 661
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(864), ___nl__im__86);
#line 661
c_rt_lib0clear(&___nl__im__86);
#line 661
c_rt_lib0clear(&___nl__im__87);
#line 662
goto label_21;
#line 662
label_22:
;
#line 663
c_rt_lib0move(&___nl__im__89, nparser_priv0parse_ref_var_decl_sim(___ref___im__0));
#line 663
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 663
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(224), ___nl__im__88);
#line 663
c_rt_lib0clear(&___nl__im__88);
#line 663
c_rt_lib0clear(&___nl__im__89);
#line 664
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 664
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 664
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(864), ___nl__im__90);
#line 664
c_rt_lib0clear(&___nl__im__90);
#line 664
c_rt_lib0clear(&___nl__im__91);
#line 665
goto label_21;
#line 665
label_21:
;
#line 665
//clear ___nl__bool__80;
#line 666
c_rt_lib0move(&___nl__im__93, nparser_priv0parse_cond(___ref___im__0));
#line 666
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__93, ___get_global_const(80));
#line 666
if(___nl__bool__92){ goto label_23;}
#line 666
c_rt_lib0clear(&___nl__im__1);
#line 666
c_rt_lib0clear(&___nl__im__4);
#line 666
//clear ___nl__bool__5;
#line 666
c_rt_lib0clear(&___nl__im__7);
#line 666
//clear ___nl__bool__8;
#line 666
c_rt_lib0clear(&___nl__im__9);
#line 666
c_rt_lib0clear(&___nl__im__10);
#line 666
//clear ___nl__bool__11;
#line 666
c_rt_lib0clear(&___nl__im__12);
#line 666
c_rt_lib0clear(&___nl__im__13);
#line 666
c_rt_lib0clear(&___nl__im__14);
#line 666
//clear ___nl__bool__17;
#line 666
c_rt_lib0clear(&___nl__im__19);
#line 666
c_rt_lib0clear(&___nl__im__20);
#line 666
//clear ___nl__bool__23;
#line 666
c_rt_lib0clear(&___nl__im__24);
#line 666
c_rt_lib0clear(&___nl__im__25);
#line 666
c_rt_lib0clear(&___nl__im__26);
#line 666
//clear ___nl__bool__31;
#line 666
c_rt_lib0clear(&___nl__im__32);
#line 666
c_rt_lib0clear(&___nl__im__33);
#line 666
c_rt_lib0clear(&___nl__im__45);
#line 666
//clear ___nl__bool__50;
#line 666
c_rt_lib0clear(&___nl__im__51);
#line 666
c_rt_lib0clear(&___nl__im__52);
#line 666
//clear ___nl__bool__53;
#line 666
c_rt_lib0clear(&___nl__im__54);
#line 666
c_rt_lib0clear(&___nl__im__55);
#line 666
c_rt_lib0clear(&___nl__im__57);
#line 666
//clear ___nl__bool__62;
#line 666
c_rt_lib0clear(&___nl__im__63);
#line 666
c_rt_lib0clear(&___nl__im__64);
#line 666
//clear ___nl__bool__65;
#line 666
c_rt_lib0clear(&___nl__im__66);
#line 666
c_rt_lib0clear(&___nl__im__67);
#line 666
c_rt_lib0clear(&___nl__im__69);
#line 666
//clear ___nl__bool__70;
#line 666
c_rt_lib0clear(&___nl__im__71);
#line 666
c_rt_lib0clear(&___nl__im__73);
#line 666
//clear ___nl__bool__92;
#line 666
return ___nl__im__93;
#line 666
label_23:
;
#line 666
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__93, ___get_global_const(80)));
#line 666
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(131), ___nl__im__94);
#line 667
c_rt_lib0move(&___nl__im__96, nparser_priv0parse_block(___ref___im__0));
#line 667
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__96, ___get_global_const(80));
#line 667
if(___nl__bool__95){ goto label_24;}
#line 667
c_rt_lib0clear(&___nl__im__1);
#line 667
c_rt_lib0clear(&___nl__im__4);
#line 667
//clear ___nl__bool__5;
#line 667
c_rt_lib0clear(&___nl__im__7);
#line 667
//clear ___nl__bool__8;
#line 667
c_rt_lib0clear(&___nl__im__9);
#line 667
c_rt_lib0clear(&___nl__im__10);
#line 667
//clear ___nl__bool__11;
#line 667
c_rt_lib0clear(&___nl__im__12);
#line 667
c_rt_lib0clear(&___nl__im__13);
#line 667
c_rt_lib0clear(&___nl__im__14);
#line 667
//clear ___nl__bool__17;
#line 667
c_rt_lib0clear(&___nl__im__19);
#line 667
c_rt_lib0clear(&___nl__im__20);
#line 667
//clear ___nl__bool__23;
#line 667
c_rt_lib0clear(&___nl__im__24);
#line 667
c_rt_lib0clear(&___nl__im__25);
#line 667
c_rt_lib0clear(&___nl__im__26);
#line 667
//clear ___nl__bool__31;
#line 667
c_rt_lib0clear(&___nl__im__32);
#line 667
c_rt_lib0clear(&___nl__im__33);
#line 667
c_rt_lib0clear(&___nl__im__45);
#line 667
//clear ___nl__bool__50;
#line 667
c_rt_lib0clear(&___nl__im__51);
#line 667
c_rt_lib0clear(&___nl__im__52);
#line 667
//clear ___nl__bool__53;
#line 667
c_rt_lib0clear(&___nl__im__54);
#line 667
c_rt_lib0clear(&___nl__im__55);
#line 667
c_rt_lib0clear(&___nl__im__57);
#line 667
//clear ___nl__bool__62;
#line 667
c_rt_lib0clear(&___nl__im__63);
#line 667
c_rt_lib0clear(&___nl__im__64);
#line 667
//clear ___nl__bool__65;
#line 667
c_rt_lib0clear(&___nl__im__66);
#line 667
c_rt_lib0clear(&___nl__im__67);
#line 667
c_rt_lib0clear(&___nl__im__69);
#line 667
//clear ___nl__bool__70;
#line 667
c_rt_lib0clear(&___nl__im__71);
#line 667
c_rt_lib0clear(&___nl__im__73);
#line 667
//clear ___nl__bool__92;
#line 667
c_rt_lib0clear(&___nl__im__93);
#line 667
c_rt_lib0clear(&___nl__im__94);
#line 667
//clear ___nl__bool__95;
#line 667
return ___nl__im__96;
#line 667
label_24:
;
#line 667
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__96, ___get_global_const(80)));
#line 667
c_rt_lib0hash_set_value_dec(&___nl__im__73, ___get_global_const(227), ___nl__im__97);
#line 668
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(849), ___nl__im__73));
#line 669
goto label_1;
#line 669
label_20:
;
#line 669
c_rt_lib0move(&___nl__im__98,___get_global_const(851));
#line 669
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__98);
#line 669
c_rt_lib0clear(&___nl__im__98);
#line 669
___nl__bool__5 = !___nl__bool__5;
#line 669
if(___nl__bool__5){ goto label_25;}
#line 670
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_mk(0));
#line 671
___nl__bool__101 = false;
#line 671
c_rt_lib0move(&___nl__im__100, c_rt_lib0bool_to_nl_native(___nl__bool__101));
#line 671
c_rt_lib0hash_set_value_dec(&___nl__im__99, ___get_global_const(928), ___nl__im__100);
#line 671
c_rt_lib0clear(&___nl__im__100);
#line 671
//clear ___nl__bool__101;
#line 672
c_rt_lib0move(&___nl__im__103, nparser_priv0parse_cond(___ref___im__0));
#line 672
___nl__bool__102 = c_rt_lib0priv_is(___nl__im__103, ___get_global_const(80));
#line 672
if(___nl__bool__102){ goto label_26;}
#line 672
c_rt_lib0clear(&___nl__im__1);
#line 672
c_rt_lib0clear(&___nl__im__4);
#line 672
//clear ___nl__bool__5;
#line 672
c_rt_lib0clear(&___nl__im__7);
#line 672
//clear ___nl__bool__8;
#line 672
c_rt_lib0clear(&___nl__im__9);
#line 672
c_rt_lib0clear(&___nl__im__10);
#line 672
//clear ___nl__bool__11;
#line 672
c_rt_lib0clear(&___nl__im__12);
#line 672
c_rt_lib0clear(&___nl__im__13);
#line 672
c_rt_lib0clear(&___nl__im__14);
#line 672
//clear ___nl__bool__17;
#line 672
c_rt_lib0clear(&___nl__im__19);
#line 672
c_rt_lib0clear(&___nl__im__20);
#line 672
//clear ___nl__bool__23;
#line 672
c_rt_lib0clear(&___nl__im__24);
#line 672
c_rt_lib0clear(&___nl__im__25);
#line 672
c_rt_lib0clear(&___nl__im__26);
#line 672
//clear ___nl__bool__31;
#line 672
c_rt_lib0clear(&___nl__im__32);
#line 672
c_rt_lib0clear(&___nl__im__33);
#line 672
c_rt_lib0clear(&___nl__im__45);
#line 672
//clear ___nl__bool__50;
#line 672
c_rt_lib0clear(&___nl__im__51);
#line 672
c_rt_lib0clear(&___nl__im__52);
#line 672
//clear ___nl__bool__53;
#line 672
c_rt_lib0clear(&___nl__im__54);
#line 672
c_rt_lib0clear(&___nl__im__55);
#line 672
c_rt_lib0clear(&___nl__im__57);
#line 672
//clear ___nl__bool__62;
#line 672
c_rt_lib0clear(&___nl__im__63);
#line 672
c_rt_lib0clear(&___nl__im__64);
#line 672
//clear ___nl__bool__65;
#line 672
c_rt_lib0clear(&___nl__im__66);
#line 672
c_rt_lib0clear(&___nl__im__67);
#line 672
c_rt_lib0clear(&___nl__im__69);
#line 672
//clear ___nl__bool__70;
#line 672
c_rt_lib0clear(&___nl__im__71);
#line 672
c_rt_lib0clear(&___nl__im__73);
#line 672
//clear ___nl__bool__92;
#line 672
c_rt_lib0clear(&___nl__im__93);
#line 672
c_rt_lib0clear(&___nl__im__94);
#line 672
//clear ___nl__bool__95;
#line 672
c_rt_lib0clear(&___nl__im__96);
#line 672
c_rt_lib0clear(&___nl__im__97);
#line 672
c_rt_lib0clear(&___nl__im__99);
#line 672
//clear ___nl__bool__102;
#line 672
return ___nl__im__103;
#line 672
label_26:
;
#line 672
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__103, ___get_global_const(80)));
#line 672
c_rt_lib0hash_set_value_dec(&___nl__im__99, ___get_global_const(860), ___nl__im__104);
#line 673
c_rt_lib0move(&___nl__im__106, nparser_priv0parse_block(___ref___im__0));
#line 673
___nl__bool__105 = c_rt_lib0priv_is(___nl__im__106, ___get_global_const(80));
#line 673
if(___nl__bool__105){ goto label_27;}
#line 673
c_rt_lib0clear(&___nl__im__1);
#line 673
c_rt_lib0clear(&___nl__im__4);
#line 673
//clear ___nl__bool__5;
#line 673
c_rt_lib0clear(&___nl__im__7);
#line 673
//clear ___nl__bool__8;
#line 673
c_rt_lib0clear(&___nl__im__9);
#line 673
c_rt_lib0clear(&___nl__im__10);
#line 673
//clear ___nl__bool__11;
#line 673
c_rt_lib0clear(&___nl__im__12);
#line 673
c_rt_lib0clear(&___nl__im__13);
#line 673
c_rt_lib0clear(&___nl__im__14);
#line 673
//clear ___nl__bool__17;
#line 673
c_rt_lib0clear(&___nl__im__19);
#line 673
c_rt_lib0clear(&___nl__im__20);
#line 673
//clear ___nl__bool__23;
#line 673
c_rt_lib0clear(&___nl__im__24);
#line 673
c_rt_lib0clear(&___nl__im__25);
#line 673
c_rt_lib0clear(&___nl__im__26);
#line 673
//clear ___nl__bool__31;
#line 673
c_rt_lib0clear(&___nl__im__32);
#line 673
c_rt_lib0clear(&___nl__im__33);
#line 673
c_rt_lib0clear(&___nl__im__45);
#line 673
//clear ___nl__bool__50;
#line 673
c_rt_lib0clear(&___nl__im__51);
#line 673
c_rt_lib0clear(&___nl__im__52);
#line 673
//clear ___nl__bool__53;
#line 673
c_rt_lib0clear(&___nl__im__54);
#line 673
c_rt_lib0clear(&___nl__im__55);
#line 673
c_rt_lib0clear(&___nl__im__57);
#line 673
//clear ___nl__bool__62;
#line 673
c_rt_lib0clear(&___nl__im__63);
#line 673
c_rt_lib0clear(&___nl__im__64);
#line 673
//clear ___nl__bool__65;
#line 673
c_rt_lib0clear(&___nl__im__66);
#line 673
c_rt_lib0clear(&___nl__im__67);
#line 673
c_rt_lib0clear(&___nl__im__69);
#line 673
//clear ___nl__bool__70;
#line 673
c_rt_lib0clear(&___nl__im__71);
#line 673
c_rt_lib0clear(&___nl__im__73);
#line 673
//clear ___nl__bool__92;
#line 673
c_rt_lib0clear(&___nl__im__93);
#line 673
c_rt_lib0clear(&___nl__im__94);
#line 673
//clear ___nl__bool__95;
#line 673
c_rt_lib0clear(&___nl__im__96);
#line 673
c_rt_lib0clear(&___nl__im__97);
#line 673
c_rt_lib0clear(&___nl__im__99);
#line 673
//clear ___nl__bool__102;
#line 673
c_rt_lib0clear(&___nl__im__103);
#line 673
c_rt_lib0clear(&___nl__im__104);
#line 673
//clear ___nl__bool__105;
#line 673
return ___nl__im__106;
#line 673
label_27:
;
#line 673
c_rt_lib0move(&___nl__im__107, c_rt_lib0priv_as(___nl__im__106, ___get_global_const(80)));
#line 673
c_rt_lib0hash_set_value_dec(&___nl__im__99, ___get_global_const(227), ___nl__im__107);
#line 674
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(851), ___nl__im__99));
#line 675
goto label_1;
#line 675
label_25:
;
#line 675
c_rt_lib0move(&___nl__im__108,___get_global_const(847));
#line 675
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__108);
#line 675
c_rt_lib0clear(&___nl__im__108);
#line 675
___nl__bool__5 = !___nl__bool__5;
#line 675
if(___nl__bool__5){ goto label_28;}
#line 676
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_mk(0));
#line 677
c_rt_lib0move(&___nl__im__110,___get_global_const(420));
#line 677
___nl__bool__111 = nparser_priv0eat(___ref___im__0, ___nl__im__110);
#line 677
c_rt_lib0clear(&___nl__im__110);
#line 677
//clear ___nl__bool__111;
#line 678
c_rt_lib0move(&___nl__im__113,___get_global_const(942));
#line 678
c_rt_lib0move(&___nl__im__113, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__113));
#line 678
c_rt_lib0move(&___nl__im__114,___get_global_const(463));
#line 678
___nl__bool__112 = ntokenizer0next_is(&___nl__im__113, ___nl__im__114);
#line 678
c_rt_lib0move(&___nl__string__115,___get_global_const(942));
#line 678
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__115, ___nl__im__113));
#line 678
c_rt_lib0clear(&___nl__im__113);
#line 678
c_rt_lib0clear(&___nl__im__114);
#line 678
c_rt_lib0clear(&___nl__string__115);
#line 678
___nl__bool__112 = !___nl__bool__112;
#line 678
if(___nl__bool__112){ goto label_30;}
#line 679
c_rt_lib0move(&___nl__im__118, nparser_priv0parse_var_decl(___ref___im__0));
#line 679
___nl__bool__117 = c_rt_lib0priv_is(___nl__im__118, ___get_global_const(80));
#line 679
if(___nl__bool__117){ goto label_31;}
#line 679
c_rt_lib0clear(&___nl__im__1);
#line 679
c_rt_lib0clear(&___nl__im__4);
#line 679
//clear ___nl__bool__5;
#line 679
c_rt_lib0clear(&___nl__im__7);
#line 679
//clear ___nl__bool__8;
#line 679
c_rt_lib0clear(&___nl__im__9);
#line 679
c_rt_lib0clear(&___nl__im__10);
#line 679
//clear ___nl__bool__11;
#line 679
c_rt_lib0clear(&___nl__im__12);
#line 679
c_rt_lib0clear(&___nl__im__13);
#line 679
c_rt_lib0clear(&___nl__im__14);
#line 679
//clear ___nl__bool__17;
#line 679
c_rt_lib0clear(&___nl__im__19);
#line 679
c_rt_lib0clear(&___nl__im__20);
#line 679
//clear ___nl__bool__23;
#line 679
c_rt_lib0clear(&___nl__im__24);
#line 679
c_rt_lib0clear(&___nl__im__25);
#line 679
c_rt_lib0clear(&___nl__im__26);
#line 679
//clear ___nl__bool__31;
#line 679
c_rt_lib0clear(&___nl__im__32);
#line 679
c_rt_lib0clear(&___nl__im__33);
#line 679
c_rt_lib0clear(&___nl__im__45);
#line 679
//clear ___nl__bool__50;
#line 679
c_rt_lib0clear(&___nl__im__51);
#line 679
c_rt_lib0clear(&___nl__im__52);
#line 679
//clear ___nl__bool__53;
#line 679
c_rt_lib0clear(&___nl__im__54);
#line 679
c_rt_lib0clear(&___nl__im__55);
#line 679
c_rt_lib0clear(&___nl__im__57);
#line 679
//clear ___nl__bool__62;
#line 679
c_rt_lib0clear(&___nl__im__63);
#line 679
c_rt_lib0clear(&___nl__im__64);
#line 679
//clear ___nl__bool__65;
#line 679
c_rt_lib0clear(&___nl__im__66);
#line 679
c_rt_lib0clear(&___nl__im__67);
#line 679
c_rt_lib0clear(&___nl__im__69);
#line 679
//clear ___nl__bool__70;
#line 679
c_rt_lib0clear(&___nl__im__71);
#line 679
c_rt_lib0clear(&___nl__im__73);
#line 679
//clear ___nl__bool__92;
#line 679
c_rt_lib0clear(&___nl__im__93);
#line 679
c_rt_lib0clear(&___nl__im__94);
#line 679
//clear ___nl__bool__95;
#line 679
c_rt_lib0clear(&___nl__im__96);
#line 679
c_rt_lib0clear(&___nl__im__97);
#line 679
c_rt_lib0clear(&___nl__im__99);
#line 679
//clear ___nl__bool__102;
#line 679
c_rt_lib0clear(&___nl__im__103);
#line 679
c_rt_lib0clear(&___nl__im__104);
#line 679
//clear ___nl__bool__105;
#line 679
c_rt_lib0clear(&___nl__im__106);
#line 679
c_rt_lib0clear(&___nl__im__107);
#line 679
c_rt_lib0clear(&___nl__im__109);
#line 679
//clear ___nl__bool__112;
#line 679
c_rt_lib0clear(&___nl__im__116);
#line 679
//clear ___nl__bool__117;
#line 679
return ___nl__im__118;
#line 679
label_31:
;
#line 679
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__118, ___get_global_const(80)));
#line 680
c_rt_lib0move(&___nl__im__120, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__116));
#line 680
c_rt_lib0copy(&___nl__im__119, ___nl__im__120);
#line 680
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(863), ___nl__im__119);
#line 680
c_rt_lib0clear(&___nl__im__119);
#line 680
c_rt_lib0clear(&___nl__im__120);
#line 681
goto label_29;
#line 681
label_30:
;
#line 681
c_rt_lib0move(&___nl__im__121,___get_global_const(942));
#line 681
c_rt_lib0move(&___nl__im__121, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__121));
#line 681
c_rt_lib0move(&___nl__im__122,___get_global_const(409));
#line 681
___nl__bool__112 = ntokenizer0next_is(&___nl__im__121, ___nl__im__122);
#line 681
c_rt_lib0move(&___nl__string__123,___get_global_const(942));
#line 681
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__123, ___nl__im__121));
#line 681
c_rt_lib0clear(&___nl__im__121);
#line 681
c_rt_lib0clear(&___nl__im__122);
#line 681
c_rt_lib0clear(&___nl__string__123);
#line 681
___nl__bool__112 = !___nl__bool__112;
#line 681
if(___nl__bool__112){ goto label_32;}
#line 682
c_rt_lib0move(&___nl__im__126, nparser_priv0get_value_nop(___ref___im__0));
#line 682
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__126));
#line 682
c_rt_lib0clear(&___nl__im__126);
#line 682
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 682
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(863), ___nl__im__124);
#line 682
c_rt_lib0clear(&___nl__im__124);
#line 682
c_rt_lib0clear(&___nl__im__125);
#line 683
goto label_29;
#line 683
label_32:
;
#line 684
c_rt_lib0move(&___nl__im__129, nparser_priv0parse_expr(___ref___im__0));
#line 684
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__129, ___get_global_const(80));
#line 684
if(___nl__bool__128){ goto label_33;}
#line 684
c_rt_lib0clear(&___nl__im__1);
#line 684
c_rt_lib0clear(&___nl__im__4);
#line 684
//clear ___nl__bool__5;
#line 684
c_rt_lib0clear(&___nl__im__7);
#line 684
//clear ___nl__bool__8;
#line 684
c_rt_lib0clear(&___nl__im__9);
#line 684
c_rt_lib0clear(&___nl__im__10);
#line 684
//clear ___nl__bool__11;
#line 684
c_rt_lib0clear(&___nl__im__12);
#line 684
c_rt_lib0clear(&___nl__im__13);
#line 684
c_rt_lib0clear(&___nl__im__14);
#line 684
//clear ___nl__bool__17;
#line 684
c_rt_lib0clear(&___nl__im__19);
#line 684
c_rt_lib0clear(&___nl__im__20);
#line 684
//clear ___nl__bool__23;
#line 684
c_rt_lib0clear(&___nl__im__24);
#line 684
c_rt_lib0clear(&___nl__im__25);
#line 684
c_rt_lib0clear(&___nl__im__26);
#line 684
//clear ___nl__bool__31;
#line 684
c_rt_lib0clear(&___nl__im__32);
#line 684
c_rt_lib0clear(&___nl__im__33);
#line 684
c_rt_lib0clear(&___nl__im__45);
#line 684
//clear ___nl__bool__50;
#line 684
c_rt_lib0clear(&___nl__im__51);
#line 684
c_rt_lib0clear(&___nl__im__52);
#line 684
//clear ___nl__bool__53;
#line 684
c_rt_lib0clear(&___nl__im__54);
#line 684
c_rt_lib0clear(&___nl__im__55);
#line 684
c_rt_lib0clear(&___nl__im__57);
#line 684
//clear ___nl__bool__62;
#line 684
c_rt_lib0clear(&___nl__im__63);
#line 684
c_rt_lib0clear(&___nl__im__64);
#line 684
//clear ___nl__bool__65;
#line 684
c_rt_lib0clear(&___nl__im__66);
#line 684
c_rt_lib0clear(&___nl__im__67);
#line 684
c_rt_lib0clear(&___nl__im__69);
#line 684
//clear ___nl__bool__70;
#line 684
c_rt_lib0clear(&___nl__im__71);
#line 684
c_rt_lib0clear(&___nl__im__73);
#line 684
//clear ___nl__bool__92;
#line 684
c_rt_lib0clear(&___nl__im__93);
#line 684
c_rt_lib0clear(&___nl__im__94);
#line 684
//clear ___nl__bool__95;
#line 684
c_rt_lib0clear(&___nl__im__96);
#line 684
c_rt_lib0clear(&___nl__im__97);
#line 684
c_rt_lib0clear(&___nl__im__99);
#line 684
//clear ___nl__bool__102;
#line 684
c_rt_lib0clear(&___nl__im__103);
#line 684
c_rt_lib0clear(&___nl__im__104);
#line 684
//clear ___nl__bool__105;
#line 684
c_rt_lib0clear(&___nl__im__106);
#line 684
c_rt_lib0clear(&___nl__im__107);
#line 684
c_rt_lib0clear(&___nl__im__109);
#line 684
//clear ___nl__bool__112;
#line 684
c_rt_lib0clear(&___nl__im__116);
#line 684
//clear ___nl__bool__117;
#line 684
c_rt_lib0clear(&___nl__im__118);
#line 684
c_rt_lib0clear(&___nl__im__127);
#line 684
//clear ___nl__bool__128;
#line 684
return ___nl__im__129;
#line 684
label_33:
;
#line 684
c_rt_lib0move(&___nl__im__127, c_rt_lib0priv_as(___nl__im__129, ___get_global_const(80)));
#line 685
c_rt_lib0move(&___nl__im__131, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__127));
#line 685
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 685
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(863), ___nl__im__130);
#line 685
c_rt_lib0clear(&___nl__im__130);
#line 685
c_rt_lib0clear(&___nl__im__131);
#line 686
goto label_29;
#line 686
label_29:
;
#line 686
//clear ___nl__bool__112;
#line 686
c_rt_lib0clear(&___nl__im__116);
#line 686
//clear ___nl__bool__117;
#line 686
c_rt_lib0clear(&___nl__im__118);
#line 686
c_rt_lib0clear(&___nl__im__127);
#line 686
//clear ___nl__bool__128;
#line 686
c_rt_lib0clear(&___nl__im__129);
#line 687
c_rt_lib0move(&___nl__im__132,___get_global_const(409));
#line 687
___nl__bool__133 = nparser_priv0eat(___ref___im__0, ___nl__im__132);
#line 687
c_rt_lib0clear(&___nl__im__132);
#line 687
//clear ___nl__bool__133;
#line 688
c_rt_lib0move(&___nl__im__135, nparser_priv0get_value_nop(___ref___im__0));
#line 688
c_rt_lib0copy(&___nl__im__134, ___nl__im__135);
#line 688
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(860), ___nl__im__134);
#line 688
c_rt_lib0clear(&___nl__im__134);
#line 688
c_rt_lib0clear(&___nl__im__135);
#line 689
c_rt_lib0move(&___nl__im__137,___get_global_const(942));
#line 689
c_rt_lib0move(&___nl__im__137, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__137));
#line 689
c_rt_lib0move(&___nl__im__138,___get_global_const(409));
#line 689
___nl__bool__136 = ntokenizer0next_is(&___nl__im__137, ___nl__im__138);
#line 689
c_rt_lib0move(&___nl__string__139,___get_global_const(942));
#line 689
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__139, ___nl__im__137));
#line 689
c_rt_lib0clear(&___nl__im__137);
#line 689
c_rt_lib0clear(&___nl__im__138);
#line 689
c_rt_lib0clear(&___nl__string__139);
#line 689
___nl__bool__136 = !___nl__bool__136;
#line 689
___nl__bool__136 = !___nl__bool__136;
#line 689
if(___nl__bool__136){ goto label_35;}
#line 689
c_rt_lib0move(&___nl__im__141, nparser_priv0parse_expr(___ref___im__0));
#line 689
___nl__bool__140 = c_rt_lib0priv_is(___nl__im__141, ___get_global_const(80));
#line 689
if(___nl__bool__140){ goto label_36;}
#line 689
c_rt_lib0clear(&___nl__im__1);
#line 689
c_rt_lib0clear(&___nl__im__4);
#line 689
//clear ___nl__bool__5;
#line 689
c_rt_lib0clear(&___nl__im__7);
#line 689
//clear ___nl__bool__8;
#line 689
c_rt_lib0clear(&___nl__im__9);
#line 689
c_rt_lib0clear(&___nl__im__10);
#line 689
//clear ___nl__bool__11;
#line 689
c_rt_lib0clear(&___nl__im__12);
#line 689
c_rt_lib0clear(&___nl__im__13);
#line 689
c_rt_lib0clear(&___nl__im__14);
#line 689
//clear ___nl__bool__17;
#line 689
c_rt_lib0clear(&___nl__im__19);
#line 689
c_rt_lib0clear(&___nl__im__20);
#line 689
//clear ___nl__bool__23;
#line 689
c_rt_lib0clear(&___nl__im__24);
#line 689
c_rt_lib0clear(&___nl__im__25);
#line 689
c_rt_lib0clear(&___nl__im__26);
#line 689
//clear ___nl__bool__31;
#line 689
c_rt_lib0clear(&___nl__im__32);
#line 689
c_rt_lib0clear(&___nl__im__33);
#line 689
c_rt_lib0clear(&___nl__im__45);
#line 689
//clear ___nl__bool__50;
#line 689
c_rt_lib0clear(&___nl__im__51);
#line 689
c_rt_lib0clear(&___nl__im__52);
#line 689
//clear ___nl__bool__53;
#line 689
c_rt_lib0clear(&___nl__im__54);
#line 689
c_rt_lib0clear(&___nl__im__55);
#line 689
c_rt_lib0clear(&___nl__im__57);
#line 689
//clear ___nl__bool__62;
#line 689
c_rt_lib0clear(&___nl__im__63);
#line 689
c_rt_lib0clear(&___nl__im__64);
#line 689
//clear ___nl__bool__65;
#line 689
c_rt_lib0clear(&___nl__im__66);
#line 689
c_rt_lib0clear(&___nl__im__67);
#line 689
c_rt_lib0clear(&___nl__im__69);
#line 689
//clear ___nl__bool__70;
#line 689
c_rt_lib0clear(&___nl__im__71);
#line 689
c_rt_lib0clear(&___nl__im__73);
#line 689
//clear ___nl__bool__92;
#line 689
c_rt_lib0clear(&___nl__im__93);
#line 689
c_rt_lib0clear(&___nl__im__94);
#line 689
//clear ___nl__bool__95;
#line 689
c_rt_lib0clear(&___nl__im__96);
#line 689
c_rt_lib0clear(&___nl__im__97);
#line 689
c_rt_lib0clear(&___nl__im__99);
#line 689
//clear ___nl__bool__102;
#line 689
c_rt_lib0clear(&___nl__im__103);
#line 689
c_rt_lib0clear(&___nl__im__104);
#line 689
//clear ___nl__bool__105;
#line 689
c_rt_lib0clear(&___nl__im__106);
#line 689
c_rt_lib0clear(&___nl__im__107);
#line 689
c_rt_lib0clear(&___nl__im__109);
#line 689
//clear ___nl__bool__136;
#line 689
//clear ___nl__bool__140;
#line 689
return ___nl__im__141;
#line 689
label_36:
;
#line 689
c_rt_lib0move(&___nl__im__142, c_rt_lib0priv_as(___nl__im__141, ___get_global_const(80)));
#line 689
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(860), ___nl__im__142);
#line 689
goto label_34;
#line 689
label_35:
;
#line 689
label_34:
;
#line 689
//clear ___nl__bool__136;
#line 689
//clear ___nl__bool__140;
#line 689
c_rt_lib0clear(&___nl__im__141);
#line 689
c_rt_lib0clear(&___nl__im__142);
#line 690
c_rt_lib0move(&___nl__im__143,___get_global_const(409));
#line 690
___nl__bool__144 = nparser_priv0eat(___ref___im__0, ___nl__im__143);
#line 690
c_rt_lib0clear(&___nl__im__143);
#line 690
//clear ___nl__bool__144;
#line 691
c_rt_lib0move(&___nl__im__146, nparser_priv0get_value_nop(___ref___im__0));
#line 691
c_rt_lib0copy(&___nl__im__145, ___nl__im__146);
#line 691
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(569), ___nl__im__145);
#line 691
c_rt_lib0clear(&___nl__im__145);
#line 691
c_rt_lib0clear(&___nl__im__146);
#line 692
c_rt_lib0move(&___nl__im__148,___get_global_const(942));
#line 692
c_rt_lib0move(&___nl__im__148, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__148));
#line 692
c_rt_lib0move(&___nl__im__149,___get_global_const(299));
#line 692
___nl__bool__147 = ntokenizer0next_is(&___nl__im__148, ___nl__im__149);
#line 692
c_rt_lib0move(&___nl__string__150,___get_global_const(942));
#line 692
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__150, ___nl__im__148));
#line 692
c_rt_lib0clear(&___nl__im__148);
#line 692
c_rt_lib0clear(&___nl__im__149);
#line 692
c_rt_lib0clear(&___nl__string__150);
#line 692
___nl__bool__147 = !___nl__bool__147;
#line 692
___nl__bool__147 = !___nl__bool__147;
#line 692
if(___nl__bool__147){ goto label_38;}
#line 692
c_rt_lib0move(&___nl__im__152, nparser_priv0parse_expr(___ref___im__0));
#line 692
___nl__bool__151 = c_rt_lib0priv_is(___nl__im__152, ___get_global_const(80));
#line 692
if(___nl__bool__151){ goto label_39;}
#line 692
c_rt_lib0clear(&___nl__im__1);
#line 692
c_rt_lib0clear(&___nl__im__4);
#line 692
//clear ___nl__bool__5;
#line 692
c_rt_lib0clear(&___nl__im__7);
#line 692
//clear ___nl__bool__8;
#line 692
c_rt_lib0clear(&___nl__im__9);
#line 692
c_rt_lib0clear(&___nl__im__10);
#line 692
//clear ___nl__bool__11;
#line 692
c_rt_lib0clear(&___nl__im__12);
#line 692
c_rt_lib0clear(&___nl__im__13);
#line 692
c_rt_lib0clear(&___nl__im__14);
#line 692
//clear ___nl__bool__17;
#line 692
c_rt_lib0clear(&___nl__im__19);
#line 692
c_rt_lib0clear(&___nl__im__20);
#line 692
//clear ___nl__bool__23;
#line 692
c_rt_lib0clear(&___nl__im__24);
#line 692
c_rt_lib0clear(&___nl__im__25);
#line 692
c_rt_lib0clear(&___nl__im__26);
#line 692
//clear ___nl__bool__31;
#line 692
c_rt_lib0clear(&___nl__im__32);
#line 692
c_rt_lib0clear(&___nl__im__33);
#line 692
c_rt_lib0clear(&___nl__im__45);
#line 692
//clear ___nl__bool__50;
#line 692
c_rt_lib0clear(&___nl__im__51);
#line 692
c_rt_lib0clear(&___nl__im__52);
#line 692
//clear ___nl__bool__53;
#line 692
c_rt_lib0clear(&___nl__im__54);
#line 692
c_rt_lib0clear(&___nl__im__55);
#line 692
c_rt_lib0clear(&___nl__im__57);
#line 692
//clear ___nl__bool__62;
#line 692
c_rt_lib0clear(&___nl__im__63);
#line 692
c_rt_lib0clear(&___nl__im__64);
#line 692
//clear ___nl__bool__65;
#line 692
c_rt_lib0clear(&___nl__im__66);
#line 692
c_rt_lib0clear(&___nl__im__67);
#line 692
c_rt_lib0clear(&___nl__im__69);
#line 692
//clear ___nl__bool__70;
#line 692
c_rt_lib0clear(&___nl__im__71);
#line 692
c_rt_lib0clear(&___nl__im__73);
#line 692
//clear ___nl__bool__92;
#line 692
c_rt_lib0clear(&___nl__im__93);
#line 692
c_rt_lib0clear(&___nl__im__94);
#line 692
//clear ___nl__bool__95;
#line 692
c_rt_lib0clear(&___nl__im__96);
#line 692
c_rt_lib0clear(&___nl__im__97);
#line 692
c_rt_lib0clear(&___nl__im__99);
#line 692
//clear ___nl__bool__102;
#line 692
c_rt_lib0clear(&___nl__im__103);
#line 692
c_rt_lib0clear(&___nl__im__104);
#line 692
//clear ___nl__bool__105;
#line 692
c_rt_lib0clear(&___nl__im__106);
#line 692
c_rt_lib0clear(&___nl__im__107);
#line 692
c_rt_lib0clear(&___nl__im__109);
#line 692
//clear ___nl__bool__147;
#line 692
//clear ___nl__bool__151;
#line 692
return ___nl__im__152;
#line 692
label_39:
;
#line 692
c_rt_lib0move(&___nl__im__153, c_rt_lib0priv_as(___nl__im__152, ___get_global_const(80)));
#line 692
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(569), ___nl__im__153);
#line 692
goto label_37;
#line 692
label_38:
;
#line 692
label_37:
;
#line 692
//clear ___nl__bool__147;
#line 692
//clear ___nl__bool__151;
#line 692
c_rt_lib0clear(&___nl__im__152);
#line 692
c_rt_lib0clear(&___nl__im__153);
#line 693
c_rt_lib0move(&___nl__im__154,___get_global_const(299));
#line 693
___nl__bool__155 = nparser_priv0eat(___ref___im__0, ___nl__im__154);
#line 693
c_rt_lib0clear(&___nl__im__154);
#line 693
//clear ___nl__bool__155;
#line 694
c_rt_lib0move(&___nl__im__157, nparser_priv0parse_block(___ref___im__0));
#line 694
___nl__bool__156 = c_rt_lib0priv_is(___nl__im__157, ___get_global_const(80));
#line 694
if(___nl__bool__156){ goto label_40;}
#line 694
c_rt_lib0clear(&___nl__im__1);
#line 694
c_rt_lib0clear(&___nl__im__4);
#line 694
//clear ___nl__bool__5;
#line 694
c_rt_lib0clear(&___nl__im__7);
#line 694
//clear ___nl__bool__8;
#line 694
c_rt_lib0clear(&___nl__im__9);
#line 694
c_rt_lib0clear(&___nl__im__10);
#line 694
//clear ___nl__bool__11;
#line 694
c_rt_lib0clear(&___nl__im__12);
#line 694
c_rt_lib0clear(&___nl__im__13);
#line 694
c_rt_lib0clear(&___nl__im__14);
#line 694
//clear ___nl__bool__17;
#line 694
c_rt_lib0clear(&___nl__im__19);
#line 694
c_rt_lib0clear(&___nl__im__20);
#line 694
//clear ___nl__bool__23;
#line 694
c_rt_lib0clear(&___nl__im__24);
#line 694
c_rt_lib0clear(&___nl__im__25);
#line 694
c_rt_lib0clear(&___nl__im__26);
#line 694
//clear ___nl__bool__31;
#line 694
c_rt_lib0clear(&___nl__im__32);
#line 694
c_rt_lib0clear(&___nl__im__33);
#line 694
c_rt_lib0clear(&___nl__im__45);
#line 694
//clear ___nl__bool__50;
#line 694
c_rt_lib0clear(&___nl__im__51);
#line 694
c_rt_lib0clear(&___nl__im__52);
#line 694
//clear ___nl__bool__53;
#line 694
c_rt_lib0clear(&___nl__im__54);
#line 694
c_rt_lib0clear(&___nl__im__55);
#line 694
c_rt_lib0clear(&___nl__im__57);
#line 694
//clear ___nl__bool__62;
#line 694
c_rt_lib0clear(&___nl__im__63);
#line 694
c_rt_lib0clear(&___nl__im__64);
#line 694
//clear ___nl__bool__65;
#line 694
c_rt_lib0clear(&___nl__im__66);
#line 694
c_rt_lib0clear(&___nl__im__67);
#line 694
c_rt_lib0clear(&___nl__im__69);
#line 694
//clear ___nl__bool__70;
#line 694
c_rt_lib0clear(&___nl__im__71);
#line 694
c_rt_lib0clear(&___nl__im__73);
#line 694
//clear ___nl__bool__92;
#line 694
c_rt_lib0clear(&___nl__im__93);
#line 694
c_rt_lib0clear(&___nl__im__94);
#line 694
//clear ___nl__bool__95;
#line 694
c_rt_lib0clear(&___nl__im__96);
#line 694
c_rt_lib0clear(&___nl__im__97);
#line 694
c_rt_lib0clear(&___nl__im__99);
#line 694
//clear ___nl__bool__102;
#line 694
c_rt_lib0clear(&___nl__im__103);
#line 694
c_rt_lib0clear(&___nl__im__104);
#line 694
//clear ___nl__bool__105;
#line 694
c_rt_lib0clear(&___nl__im__106);
#line 694
c_rt_lib0clear(&___nl__im__107);
#line 694
c_rt_lib0clear(&___nl__im__109);
#line 694
//clear ___nl__bool__156;
#line 694
return ___nl__im__157;
#line 694
label_40:
;
#line 694
c_rt_lib0move(&___nl__im__158, c_rt_lib0priv_as(___nl__im__157, ___get_global_const(80)));
#line 694
c_rt_lib0hash_set_value_dec(&___nl__im__109, ___get_global_const(227), ___nl__im__158);
#line 695
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(847), ___nl__im__109));
#line 696
goto label_1;
#line 696
label_28:
;
#line 696
c_rt_lib0move(&___nl__im__159,___get_global_const(942));
#line 696
c_rt_lib0move(&___nl__im__159, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__159));
#line 696
c_rt_lib0move(&___nl__im__160,___get_global_const(291));
#line 696
___nl__bool__5 = ntokenizer0next_is(&___nl__im__159, ___nl__im__160);
#line 696
c_rt_lib0move(&___nl__string__161,___get_global_const(942));
#line 696
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__161, ___nl__im__159));
#line 696
c_rt_lib0clear(&___nl__im__159);
#line 696
c_rt_lib0clear(&___nl__im__160);
#line 696
c_rt_lib0clear(&___nl__string__161);
#line 696
___nl__bool__5 = !___nl__bool__5;
#line 696
if(___nl__bool__5){ goto label_41;}
#line 697
c_rt_lib0move(&___nl__im__164, nparser_priv0parse_block(___ref___im__0));
#line 697
___nl__bool__163 = c_rt_lib0priv_is(___nl__im__164, ___get_global_const(80));
#line 697
if(___nl__bool__163){ goto label_42;}
#line 697
c_rt_lib0clear(&___nl__im__1);
#line 697
c_rt_lib0clear(&___nl__im__4);
#line 697
//clear ___nl__bool__5;
#line 697
c_rt_lib0clear(&___nl__im__7);
#line 697
//clear ___nl__bool__8;
#line 697
c_rt_lib0clear(&___nl__im__9);
#line 697
c_rt_lib0clear(&___nl__im__10);
#line 697
//clear ___nl__bool__11;
#line 697
c_rt_lib0clear(&___nl__im__12);
#line 697
c_rt_lib0clear(&___nl__im__13);
#line 697
c_rt_lib0clear(&___nl__im__14);
#line 697
//clear ___nl__bool__17;
#line 697
c_rt_lib0clear(&___nl__im__19);
#line 697
c_rt_lib0clear(&___nl__im__20);
#line 697
//clear ___nl__bool__23;
#line 697
c_rt_lib0clear(&___nl__im__24);
#line 697
c_rt_lib0clear(&___nl__im__25);
#line 697
c_rt_lib0clear(&___nl__im__26);
#line 697
//clear ___nl__bool__31;
#line 697
c_rt_lib0clear(&___nl__im__32);
#line 697
c_rt_lib0clear(&___nl__im__33);
#line 697
c_rt_lib0clear(&___nl__im__45);
#line 697
//clear ___nl__bool__50;
#line 697
c_rt_lib0clear(&___nl__im__51);
#line 697
c_rt_lib0clear(&___nl__im__52);
#line 697
//clear ___nl__bool__53;
#line 697
c_rt_lib0clear(&___nl__im__54);
#line 697
c_rt_lib0clear(&___nl__im__55);
#line 697
c_rt_lib0clear(&___nl__im__57);
#line 697
//clear ___nl__bool__62;
#line 697
c_rt_lib0clear(&___nl__im__63);
#line 697
c_rt_lib0clear(&___nl__im__64);
#line 697
//clear ___nl__bool__65;
#line 697
c_rt_lib0clear(&___nl__im__66);
#line 697
c_rt_lib0clear(&___nl__im__67);
#line 697
c_rt_lib0clear(&___nl__im__69);
#line 697
//clear ___nl__bool__70;
#line 697
c_rt_lib0clear(&___nl__im__71);
#line 697
c_rt_lib0clear(&___nl__im__73);
#line 697
//clear ___nl__bool__92;
#line 697
c_rt_lib0clear(&___nl__im__93);
#line 697
c_rt_lib0clear(&___nl__im__94);
#line 697
//clear ___nl__bool__95;
#line 697
c_rt_lib0clear(&___nl__im__96);
#line 697
c_rt_lib0clear(&___nl__im__97);
#line 697
c_rt_lib0clear(&___nl__im__99);
#line 697
//clear ___nl__bool__102;
#line 697
c_rt_lib0clear(&___nl__im__103);
#line 697
c_rt_lib0clear(&___nl__im__104);
#line 697
//clear ___nl__bool__105;
#line 697
c_rt_lib0clear(&___nl__im__106);
#line 697
c_rt_lib0clear(&___nl__im__107);
#line 697
c_rt_lib0clear(&___nl__im__109);
#line 697
//clear ___nl__bool__156;
#line 697
c_rt_lib0clear(&___nl__im__157);
#line 697
c_rt_lib0clear(&___nl__im__158);
#line 697
c_rt_lib0clear(&___nl__im__162);
#line 697
//clear ___nl__bool__163;
#line 697
return ___nl__im__164;
#line 697
label_42:
;
#line 697
c_rt_lib0move(&___nl__im__162, c_rt_lib0priv_as(___nl__im__164, ___get_global_const(80)));
#line 698
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_const(227)));
#line 699
goto label_1;
#line 699
label_41:
;
#line 699
c_rt_lib0move(&___nl__im__165,___get_global_const(854));
#line 699
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__165);
#line 699
c_rt_lib0clear(&___nl__im__165);
#line 699
___nl__bool__5 = !___nl__bool__5;
#line 699
if(___nl__bool__5){ goto label_43;}
#line 700
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(854)));
#line 701
goto label_1;
#line 701
label_43:
;
#line 701
c_rt_lib0move(&___nl__im__166,___get_global_const(855));
#line 701
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__166);
#line 701
c_rt_lib0clear(&___nl__im__166);
#line 701
___nl__bool__5 = !___nl__bool__5;
#line 701
if(___nl__bool__5){ goto label_44;}
#line 702
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(855)));
#line 703
goto label_1;
#line 703
label_44:
;
#line 703
c_rt_lib0move(&___nl__im__167,___get_global_const(246));
#line 703
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__167);
#line 703
c_rt_lib0clear(&___nl__im__167);
#line 703
___nl__bool__5 = !___nl__bool__5;
#line 703
if(___nl__bool__5){ goto label_45;}
#line 704
c_rt_lib0move(&___nl__im__169,___get_global_const(942));
#line 704
c_rt_lib0move(&___nl__im__169, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__169));
#line 704
c_rt_lib0move(&___nl__im__168, ntokenizer0get_token(&___nl__im__169));
#line 704
c_rt_lib0move(&___nl__string__170,___get_global_const(942));
#line 704
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__170, ___nl__im__169));
#line 704
c_rt_lib0clear(&___nl__im__169);
#line 704
c_rt_lib0clear(&___nl__string__170);
#line 705
___nl__bool__171 = false;
#line 706
c_rt_lib0move(&___nl__im__172, nparser_priv0get_end_list());
#line 706
___nl__int__174 = 0;
#line 706
___nl__int__175 = 1;
#line 706
___nl__int__176 = c_rt_lib0array_len(___nl__im__172);
#line 706
label_48:
;
#line 706
___nl__int__178 = ___nl__int__174 >= ___nl__int__176;
#line 706
___nl__bool__177 = ___nl__int__178;
#line 706
if(___nl__bool__177){ goto label_46;}
#line 706
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_get(___nl__im__172, ___nl__int__174));
#line 706
c_rt_lib0copy(&___nl__im__173, ___nl__im__179);
#line 707
___nl__bool__180 = c_rt_lib0eq(___nl__im__168, ___nl__im__173);
#line 707
___nl__bool__180 = !___nl__bool__180;
#line 707
if(___nl__bool__180){ goto label_50;}
#line 708
___nl__bool__171 = true;
#line 709
goto label_46;
#line 710
goto label_49;
#line 710
label_50:
;
#line 710
label_49:
;
#line 710
//clear ___nl__bool__180;
#line 710
c_rt_lib0clear(&___nl__im__173);
#line 710
label_47:
;
#line 711
___nl__int__174 = ___nl__int__174 + ___nl__int__175;
#line 711
goto label_48;
#line 711
label_46:
;
#line 712
___nl__bool__181 = ___nl__bool__171;
#line 712
___nl__bool__181 = !___nl__bool__181;
#line 712
if(___nl__bool__181){ goto label_52;}
#line 713
c_rt_lib0move(&___nl__im__182, nparser_priv0get_value_nop(___ref___im__0));
#line 713
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__182));
#line 713
c_rt_lib0clear(&___nl__im__182);
#line 714
goto label_51;
#line 714
label_52:
;
#line 715
c_rt_lib0move(&___nl__im__185, nparser_priv0parse_expr(___ref___im__0));
#line 715
___nl__bool__184 = c_rt_lib0priv_is(___nl__im__185, ___get_global_const(80));
#line 715
if(___nl__bool__184){ goto label_53;}
#line 715
c_rt_lib0clear(&___nl__im__1);
#line 715
c_rt_lib0clear(&___nl__im__4);
#line 715
//clear ___nl__bool__5;
#line 715
c_rt_lib0clear(&___nl__im__7);
#line 715
//clear ___nl__bool__8;
#line 715
c_rt_lib0clear(&___nl__im__9);
#line 715
c_rt_lib0clear(&___nl__im__10);
#line 715
//clear ___nl__bool__11;
#line 715
c_rt_lib0clear(&___nl__im__12);
#line 715
c_rt_lib0clear(&___nl__im__13);
#line 715
c_rt_lib0clear(&___nl__im__14);
#line 715
//clear ___nl__bool__17;
#line 715
c_rt_lib0clear(&___nl__im__19);
#line 715
c_rt_lib0clear(&___nl__im__20);
#line 715
//clear ___nl__bool__23;
#line 715
c_rt_lib0clear(&___nl__im__24);
#line 715
c_rt_lib0clear(&___nl__im__25);
#line 715
c_rt_lib0clear(&___nl__im__26);
#line 715
//clear ___nl__bool__31;
#line 715
c_rt_lib0clear(&___nl__im__32);
#line 715
c_rt_lib0clear(&___nl__im__33);
#line 715
c_rt_lib0clear(&___nl__im__45);
#line 715
//clear ___nl__bool__50;
#line 715
c_rt_lib0clear(&___nl__im__51);
#line 715
c_rt_lib0clear(&___nl__im__52);
#line 715
//clear ___nl__bool__53;
#line 715
c_rt_lib0clear(&___nl__im__54);
#line 715
c_rt_lib0clear(&___nl__im__55);
#line 715
c_rt_lib0clear(&___nl__im__57);
#line 715
//clear ___nl__bool__62;
#line 715
c_rt_lib0clear(&___nl__im__63);
#line 715
c_rt_lib0clear(&___nl__im__64);
#line 715
//clear ___nl__bool__65;
#line 715
c_rt_lib0clear(&___nl__im__66);
#line 715
c_rt_lib0clear(&___nl__im__67);
#line 715
c_rt_lib0clear(&___nl__im__69);
#line 715
//clear ___nl__bool__70;
#line 715
c_rt_lib0clear(&___nl__im__71);
#line 715
c_rt_lib0clear(&___nl__im__73);
#line 715
//clear ___nl__bool__92;
#line 715
c_rt_lib0clear(&___nl__im__93);
#line 715
c_rt_lib0clear(&___nl__im__94);
#line 715
//clear ___nl__bool__95;
#line 715
c_rt_lib0clear(&___nl__im__96);
#line 715
c_rt_lib0clear(&___nl__im__97);
#line 715
c_rt_lib0clear(&___nl__im__99);
#line 715
//clear ___nl__bool__102;
#line 715
c_rt_lib0clear(&___nl__im__103);
#line 715
c_rt_lib0clear(&___nl__im__104);
#line 715
//clear ___nl__bool__105;
#line 715
c_rt_lib0clear(&___nl__im__106);
#line 715
c_rt_lib0clear(&___nl__im__107);
#line 715
c_rt_lib0clear(&___nl__im__109);
#line 715
//clear ___nl__bool__156;
#line 715
c_rt_lib0clear(&___nl__im__157);
#line 715
c_rt_lib0clear(&___nl__im__158);
#line 715
c_rt_lib0clear(&___nl__im__162);
#line 715
//clear ___nl__bool__163;
#line 715
c_rt_lib0clear(&___nl__im__164);
#line 715
c_rt_lib0clear(&___nl__im__168);
#line 715
//clear ___nl__bool__171;
#line 715
c_rt_lib0clear(&___nl__im__172);
#line 715
c_rt_lib0clear(&___nl__im__173);
#line 715
//clear ___nl__int__174;
#line 715
//clear ___nl__int__175;
#line 715
//clear ___nl__int__176;
#line 715
//clear ___nl__bool__177;
#line 715
//clear ___nl__int__178;
#line 715
c_rt_lib0clear(&___nl__im__179);
#line 715
//clear ___nl__bool__181;
#line 715
c_rt_lib0clear(&___nl__im__183);
#line 715
//clear ___nl__bool__184;
#line 715
return ___nl__im__185;
#line 715
label_53:
;
#line 715
c_rt_lib0move(&___nl__im__183, c_rt_lib0priv_as(___nl__im__185, ___get_global_const(80)));
#line 716
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__183));
#line 717
goto label_51;
#line 717
label_51:
;
#line 717
//clear ___nl__bool__181;
#line 717
c_rt_lib0clear(&___nl__im__183);
#line 717
//clear ___nl__bool__184;
#line 717
c_rt_lib0clear(&___nl__im__185);
#line 718
goto label_1;
#line 718
label_45:
;
#line 718
c_rt_lib0move(&___nl__im__186,___get_global_const(856));
#line 718
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__186);
#line 718
c_rt_lib0clear(&___nl__im__186);
#line 718
___nl__bool__5 = !___nl__bool__5;
#line 718
if(___nl__bool__5){ goto label_54;}
#line 719
c_rt_lib0move(&___nl__im__187,___get_global_const(420));
#line 719
___nl__bool__188 = nparser_priv0eat(___ref___im__0, ___nl__im__187);
#line 719
c_rt_lib0clear(&___nl__im__187);
#line 719
//clear ___nl__bool__188;
#line 720
c_rt_lib0move(&___nl__im__191, nparser_priv0parse_expr(___ref___im__0));
#line 720
___nl__bool__190 = c_rt_lib0priv_is(___nl__im__191, ___get_global_const(80));
#line 720
if(___nl__bool__190){ goto label_55;}
#line 720
c_rt_lib0clear(&___nl__im__1);
#line 720
c_rt_lib0clear(&___nl__im__4);
#line 720
//clear ___nl__bool__5;
#line 720
c_rt_lib0clear(&___nl__im__7);
#line 720
//clear ___nl__bool__8;
#line 720
c_rt_lib0clear(&___nl__im__9);
#line 720
c_rt_lib0clear(&___nl__im__10);
#line 720
//clear ___nl__bool__11;
#line 720
c_rt_lib0clear(&___nl__im__12);
#line 720
c_rt_lib0clear(&___nl__im__13);
#line 720
c_rt_lib0clear(&___nl__im__14);
#line 720
//clear ___nl__bool__17;
#line 720
c_rt_lib0clear(&___nl__im__19);
#line 720
c_rt_lib0clear(&___nl__im__20);
#line 720
//clear ___nl__bool__23;
#line 720
c_rt_lib0clear(&___nl__im__24);
#line 720
c_rt_lib0clear(&___nl__im__25);
#line 720
c_rt_lib0clear(&___nl__im__26);
#line 720
//clear ___nl__bool__31;
#line 720
c_rt_lib0clear(&___nl__im__32);
#line 720
c_rt_lib0clear(&___nl__im__33);
#line 720
c_rt_lib0clear(&___nl__im__45);
#line 720
//clear ___nl__bool__50;
#line 720
c_rt_lib0clear(&___nl__im__51);
#line 720
c_rt_lib0clear(&___nl__im__52);
#line 720
//clear ___nl__bool__53;
#line 720
c_rt_lib0clear(&___nl__im__54);
#line 720
c_rt_lib0clear(&___nl__im__55);
#line 720
c_rt_lib0clear(&___nl__im__57);
#line 720
//clear ___nl__bool__62;
#line 720
c_rt_lib0clear(&___nl__im__63);
#line 720
c_rt_lib0clear(&___nl__im__64);
#line 720
//clear ___nl__bool__65;
#line 720
c_rt_lib0clear(&___nl__im__66);
#line 720
c_rt_lib0clear(&___nl__im__67);
#line 720
c_rt_lib0clear(&___nl__im__69);
#line 720
//clear ___nl__bool__70;
#line 720
c_rt_lib0clear(&___nl__im__71);
#line 720
c_rt_lib0clear(&___nl__im__73);
#line 720
//clear ___nl__bool__92;
#line 720
c_rt_lib0clear(&___nl__im__93);
#line 720
c_rt_lib0clear(&___nl__im__94);
#line 720
//clear ___nl__bool__95;
#line 720
c_rt_lib0clear(&___nl__im__96);
#line 720
c_rt_lib0clear(&___nl__im__97);
#line 720
c_rt_lib0clear(&___nl__im__99);
#line 720
//clear ___nl__bool__102;
#line 720
c_rt_lib0clear(&___nl__im__103);
#line 720
c_rt_lib0clear(&___nl__im__104);
#line 720
//clear ___nl__bool__105;
#line 720
c_rt_lib0clear(&___nl__im__106);
#line 720
c_rt_lib0clear(&___nl__im__107);
#line 720
c_rt_lib0clear(&___nl__im__109);
#line 720
//clear ___nl__bool__156;
#line 720
c_rt_lib0clear(&___nl__im__157);
#line 720
c_rt_lib0clear(&___nl__im__158);
#line 720
c_rt_lib0clear(&___nl__im__162);
#line 720
//clear ___nl__bool__163;
#line 720
c_rt_lib0clear(&___nl__im__164);
#line 720
c_rt_lib0clear(&___nl__im__168);
#line 720
//clear ___nl__bool__171;
#line 720
c_rt_lib0clear(&___nl__im__172);
#line 720
c_rt_lib0clear(&___nl__im__173);
#line 720
//clear ___nl__int__174;
#line 720
//clear ___nl__int__175;
#line 720
//clear ___nl__int__176;
#line 720
//clear ___nl__bool__177;
#line 720
//clear ___nl__int__178;
#line 720
c_rt_lib0clear(&___nl__im__179);
#line 720
c_rt_lib0clear(&___nl__im__189);
#line 720
//clear ___nl__bool__190;
#line 720
return ___nl__im__191;
#line 720
label_55:
;
#line 720
c_rt_lib0move(&___nl__im__189, c_rt_lib0priv_as(___nl__im__191, ___get_global_const(80)));
#line 721
c_rt_lib0move(&___nl__im__193, c_rt_lib0array_mk(0));
#line 721
c_rt_lib0move(&___nl__im__192, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__189, ___get_global_const(868), ___nl__im__193));
#line 721
c_rt_lib0clear(&___nl__im__193);
#line 722
c_rt_lib0move(&___nl__im__194,___get_global_const(299));
#line 722
___nl__bool__195 = nparser_priv0eat(___ref___im__0, ___nl__im__194);
#line 722
c_rt_lib0clear(&___nl__im__194);
#line 722
//clear ___nl__bool__195;
#line 723
c_rt_lib0move(&___nl__im__197,___get_global_const(942));
#line 723
c_rt_lib0move(&___nl__im__197, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__197));
#line 723
c_rt_lib0move(&___nl__im__196, ntokenizer0get_place(&___nl__im__197));
#line 723
c_rt_lib0move(&___nl__string__198,___get_global_const(942));
#line 723
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__198, ___nl__im__197));
#line 723
c_rt_lib0clear(&___nl__im__197);
#line 723
c_rt_lib0clear(&___nl__string__198);
#line 724
label_57:
;
#line 724
c_rt_lib0move(&___nl__im__200,___get_global_const(991));
#line 724
___nl__bool__199 = nparser_priv0try_eat(___ref___im__0, ___nl__im__200);
#line 724
c_rt_lib0clear(&___nl__im__200);
#line 724
___nl__bool__199 = !___nl__bool__199;
#line 724
if(___nl__bool__199){ goto label_56;}
#line 725
c_rt_lib0move(&___nl__im__202, nparser_priv0parse_variant_decl(___ref___im__0));
#line 725
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_mk(1, ___get_global_const(517), ___nl__im__202));
#line 725
c_rt_lib0clear(&___nl__im__202);
#line 726
c_rt_lib0move(&___nl__im__206,___get_global_const(942));
#line 726
c_rt_lib0move(&___nl__im__206, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__206));
#line 726
c_rt_lib0move(&___nl__im__205, ntokenizer0get_place_ws(&___nl__im__206));
#line 726
c_rt_lib0move(&___nl__string__207,___get_global_const(942));
#line 726
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__207, ___nl__im__206));
#line 726
c_rt_lib0clear(&___nl__im__206);
#line 726
c_rt_lib0clear(&___nl__string__207);
#line 726
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__196, ___get_global_const(916), ___nl__im__205));
#line 726
c_rt_lib0clear(&___nl__im__205);
#line 726
c_rt_lib0copy(&___nl__im__203, ___nl__im__204);
#line 726
c_rt_lib0hash_set_value_dec(&___nl__im__201, ___get_global_const(221), ___nl__im__203);
#line 726
c_rt_lib0clear(&___nl__im__203);
#line 726
c_rt_lib0clear(&___nl__im__204);
#line 727
c_rt_lib0move(&___nl__im__209, nparser_priv0parse_block(___ref___im__0));
#line 727
___nl__bool__208 = c_rt_lib0priv_is(___nl__im__209, ___get_global_const(80));
#line 727
if(___nl__bool__208){ goto label_58;}
#line 727
c_rt_lib0clear(&___nl__im__1);
#line 727
c_rt_lib0clear(&___nl__im__4);
#line 727
//clear ___nl__bool__5;
#line 727
c_rt_lib0clear(&___nl__im__7);
#line 727
//clear ___nl__bool__8;
#line 727
c_rt_lib0clear(&___nl__im__9);
#line 727
c_rt_lib0clear(&___nl__im__10);
#line 727
//clear ___nl__bool__11;
#line 727
c_rt_lib0clear(&___nl__im__12);
#line 727
c_rt_lib0clear(&___nl__im__13);
#line 727
c_rt_lib0clear(&___nl__im__14);
#line 727
//clear ___nl__bool__17;
#line 727
c_rt_lib0clear(&___nl__im__19);
#line 727
c_rt_lib0clear(&___nl__im__20);
#line 727
//clear ___nl__bool__23;
#line 727
c_rt_lib0clear(&___nl__im__24);
#line 727
c_rt_lib0clear(&___nl__im__25);
#line 727
c_rt_lib0clear(&___nl__im__26);
#line 727
//clear ___nl__bool__31;
#line 727
c_rt_lib0clear(&___nl__im__32);
#line 727
c_rt_lib0clear(&___nl__im__33);
#line 727
c_rt_lib0clear(&___nl__im__45);
#line 727
//clear ___nl__bool__50;
#line 727
c_rt_lib0clear(&___nl__im__51);
#line 727
c_rt_lib0clear(&___nl__im__52);
#line 727
//clear ___nl__bool__53;
#line 727
c_rt_lib0clear(&___nl__im__54);
#line 727
c_rt_lib0clear(&___nl__im__55);
#line 727
c_rt_lib0clear(&___nl__im__57);
#line 727
//clear ___nl__bool__62;
#line 727
c_rt_lib0clear(&___nl__im__63);
#line 727
c_rt_lib0clear(&___nl__im__64);
#line 727
//clear ___nl__bool__65;
#line 727
c_rt_lib0clear(&___nl__im__66);
#line 727
c_rt_lib0clear(&___nl__im__67);
#line 727
c_rt_lib0clear(&___nl__im__69);
#line 727
//clear ___nl__bool__70;
#line 727
c_rt_lib0clear(&___nl__im__71);
#line 727
c_rt_lib0clear(&___nl__im__73);
#line 727
//clear ___nl__bool__92;
#line 727
c_rt_lib0clear(&___nl__im__93);
#line 727
c_rt_lib0clear(&___nl__im__94);
#line 727
//clear ___nl__bool__95;
#line 727
c_rt_lib0clear(&___nl__im__96);
#line 727
c_rt_lib0clear(&___nl__im__97);
#line 727
c_rt_lib0clear(&___nl__im__99);
#line 727
//clear ___nl__bool__102;
#line 727
c_rt_lib0clear(&___nl__im__103);
#line 727
c_rt_lib0clear(&___nl__im__104);
#line 727
//clear ___nl__bool__105;
#line 727
c_rt_lib0clear(&___nl__im__106);
#line 727
c_rt_lib0clear(&___nl__im__107);
#line 727
c_rt_lib0clear(&___nl__im__109);
#line 727
//clear ___nl__bool__156;
#line 727
c_rt_lib0clear(&___nl__im__157);
#line 727
c_rt_lib0clear(&___nl__im__158);
#line 727
c_rt_lib0clear(&___nl__im__162);
#line 727
//clear ___nl__bool__163;
#line 727
c_rt_lib0clear(&___nl__im__164);
#line 727
c_rt_lib0clear(&___nl__im__168);
#line 727
//clear ___nl__bool__171;
#line 727
c_rt_lib0clear(&___nl__im__172);
#line 727
c_rt_lib0clear(&___nl__im__173);
#line 727
//clear ___nl__int__174;
#line 727
//clear ___nl__int__175;
#line 727
//clear ___nl__int__176;
#line 727
//clear ___nl__bool__177;
#line 727
//clear ___nl__int__178;
#line 727
c_rt_lib0clear(&___nl__im__179);
#line 727
c_rt_lib0clear(&___nl__im__189);
#line 727
//clear ___nl__bool__190;
#line 727
c_rt_lib0clear(&___nl__im__191);
#line 727
c_rt_lib0clear(&___nl__im__192);
#line 727
c_rt_lib0clear(&___nl__im__196);
#line 727
//clear ___nl__bool__199;
#line 727
c_rt_lib0clear(&___nl__im__201);
#line 727
//clear ___nl__bool__208;
#line 727
return ___nl__im__209;
#line 727
label_58:
;
#line 727
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__209, ___get_global_const(80)));
#line 727
c_rt_lib0hash_set_value_dec(&___nl__im__201, ___get_global_const(227), ___nl__im__210);
#line 728
c_rt_lib0move(&___nl__im__211,___get_global_const(868));
#line 728
c_rt_lib0move(&___nl__im__211, c_rt_lib0get_ref_hash(___nl__im__192, ___nl__im__211));
#line 728
c_rt_lib0delete(array0push(&___nl__im__211, ___nl__im__201));
#line 728
c_rt_lib0move(&___nl__string__212,___get_global_const(868));
#line 728
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__192, ___nl__string__212, ___nl__im__211));
#line 728
c_rt_lib0clear(&___nl__im__211);
#line 728
c_rt_lib0clear(&___nl__string__212);
#line 729
c_rt_lib0move(&___nl__im__213,___get_global_const(942));
#line 729
c_rt_lib0move(&___nl__im__213, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__213));
#line 729
c_rt_lib0move(&___nl__im__196, ntokenizer0get_place(&___nl__im__213));
#line 729
c_rt_lib0move(&___nl__string__214,___get_global_const(942));
#line 729
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__214, ___nl__im__213));
#line 729
c_rt_lib0clear(&___nl__im__213);
#line 729
c_rt_lib0clear(&___nl__string__214);
#line 730
goto label_57;
#line 730
label_56:
;
#line 731
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(856), ___nl__im__192));
#line 732
goto label_1;
#line 732
label_54:
;
#line 732
c_rt_lib0move(&___nl__im__215,___get_global_const(247));
#line 732
___nl__bool__5 = nparser_priv0try_eat(___ref___im__0, ___nl__im__215);
#line 732
c_rt_lib0clear(&___nl__im__215);
#line 732
___nl__bool__5 = !___nl__bool__5;
#line 732
if(___nl__bool__5){ goto label_59;}
#line 733
c_rt_lib0move(&___nl__im__216, c_rt_lib0array_mk(0));
#line 734
c_rt_lib0move(&___nl__im__218,___get_global_const(420));
#line 734
___nl__bool__217 = nparser_priv0try_eat(___ref___im__0, ___nl__im__218);
#line 734
c_rt_lib0clear(&___nl__im__218);
#line 734
___nl__bool__217 = !___nl__bool__217;
#line 734
if(___nl__bool__217){ goto label_61;}
#line 735
c_rt_lib0move(&___nl__im__220, nparser_priv0parse_expr_list(___ref___im__0));
#line 735
___nl__bool__219 = c_rt_lib0priv_is(___nl__im__220, ___get_global_const(80));
#line 735
if(___nl__bool__219){ goto label_62;}
#line 735
c_rt_lib0clear(&___nl__im__1);
#line 735
c_rt_lib0clear(&___nl__im__4);
#line 735
//clear ___nl__bool__5;
#line 735
c_rt_lib0clear(&___nl__im__7);
#line 735
//clear ___nl__bool__8;
#line 735
c_rt_lib0clear(&___nl__im__9);
#line 735
c_rt_lib0clear(&___nl__im__10);
#line 735
//clear ___nl__bool__11;
#line 735
c_rt_lib0clear(&___nl__im__12);
#line 735
c_rt_lib0clear(&___nl__im__13);
#line 735
c_rt_lib0clear(&___nl__im__14);
#line 735
//clear ___nl__bool__17;
#line 735
c_rt_lib0clear(&___nl__im__19);
#line 735
c_rt_lib0clear(&___nl__im__20);
#line 735
//clear ___nl__bool__23;
#line 735
c_rt_lib0clear(&___nl__im__24);
#line 735
c_rt_lib0clear(&___nl__im__25);
#line 735
c_rt_lib0clear(&___nl__im__26);
#line 735
//clear ___nl__bool__31;
#line 735
c_rt_lib0clear(&___nl__im__32);
#line 735
c_rt_lib0clear(&___nl__im__33);
#line 735
c_rt_lib0clear(&___nl__im__45);
#line 735
//clear ___nl__bool__50;
#line 735
c_rt_lib0clear(&___nl__im__51);
#line 735
c_rt_lib0clear(&___nl__im__52);
#line 735
//clear ___nl__bool__53;
#line 735
c_rt_lib0clear(&___nl__im__54);
#line 735
c_rt_lib0clear(&___nl__im__55);
#line 735
c_rt_lib0clear(&___nl__im__57);
#line 735
//clear ___nl__bool__62;
#line 735
c_rt_lib0clear(&___nl__im__63);
#line 735
c_rt_lib0clear(&___nl__im__64);
#line 735
//clear ___nl__bool__65;
#line 735
c_rt_lib0clear(&___nl__im__66);
#line 735
c_rt_lib0clear(&___nl__im__67);
#line 735
c_rt_lib0clear(&___nl__im__69);
#line 735
//clear ___nl__bool__70;
#line 735
c_rt_lib0clear(&___nl__im__71);
#line 735
c_rt_lib0clear(&___nl__im__73);
#line 735
//clear ___nl__bool__92;
#line 735
c_rt_lib0clear(&___nl__im__93);
#line 735
c_rt_lib0clear(&___nl__im__94);
#line 735
//clear ___nl__bool__95;
#line 735
c_rt_lib0clear(&___nl__im__96);
#line 735
c_rt_lib0clear(&___nl__im__97);
#line 735
c_rt_lib0clear(&___nl__im__99);
#line 735
//clear ___nl__bool__102;
#line 735
c_rt_lib0clear(&___nl__im__103);
#line 735
c_rt_lib0clear(&___nl__im__104);
#line 735
//clear ___nl__bool__105;
#line 735
c_rt_lib0clear(&___nl__im__106);
#line 735
c_rt_lib0clear(&___nl__im__107);
#line 735
c_rt_lib0clear(&___nl__im__109);
#line 735
//clear ___nl__bool__156;
#line 735
c_rt_lib0clear(&___nl__im__157);
#line 735
c_rt_lib0clear(&___nl__im__158);
#line 735
c_rt_lib0clear(&___nl__im__162);
#line 735
//clear ___nl__bool__163;
#line 735
c_rt_lib0clear(&___nl__im__164);
#line 735
c_rt_lib0clear(&___nl__im__168);
#line 735
//clear ___nl__bool__171;
#line 735
c_rt_lib0clear(&___nl__im__172);
#line 735
c_rt_lib0clear(&___nl__im__173);
#line 735
//clear ___nl__int__174;
#line 735
//clear ___nl__int__175;
#line 735
//clear ___nl__int__176;
#line 735
//clear ___nl__bool__177;
#line 735
//clear ___nl__int__178;
#line 735
c_rt_lib0clear(&___nl__im__179);
#line 735
c_rt_lib0clear(&___nl__im__189);
#line 735
//clear ___nl__bool__190;
#line 735
c_rt_lib0clear(&___nl__im__191);
#line 735
c_rt_lib0clear(&___nl__im__192);
#line 735
c_rt_lib0clear(&___nl__im__196);
#line 735
//clear ___nl__bool__199;
#line 735
c_rt_lib0clear(&___nl__im__201);
#line 735
//clear ___nl__bool__208;
#line 735
c_rt_lib0clear(&___nl__im__209);
#line 735
c_rt_lib0clear(&___nl__im__210);
#line 735
c_rt_lib0clear(&___nl__im__216);
#line 735
//clear ___nl__bool__217;
#line 735
//clear ___nl__bool__219;
#line 735
return ___nl__im__220;
#line 735
label_62:
;
#line 735
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__220, ___get_global_const(80)));
#line 736
goto label_60;
#line 736
label_61:
;
#line 736
label_60:
;
#line 736
//clear ___nl__bool__217;
#line 736
//clear ___nl__bool__219;
#line 736
c_rt_lib0clear(&___nl__im__220);
#line 737
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__216));
#line 738
goto label_1;
#line 738
label_59:
;
#line 738
c_rt_lib0move(&___nl__im__221,___get_global_const(942));
#line 738
c_rt_lib0move(&___nl__im__221, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__221));
#line 738
c_rt_lib0move(&___nl__im__222,___get_global_const(463));
#line 738
___nl__bool__5 = ntokenizer0next_is(&___nl__im__221, ___nl__im__222);
#line 738
c_rt_lib0move(&___nl__string__223,___get_global_const(942));
#line 738
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__223, ___nl__im__221));
#line 738
c_rt_lib0clear(&___nl__im__221);
#line 738
c_rt_lib0clear(&___nl__im__222);
#line 738
c_rt_lib0clear(&___nl__string__223);
#line 738
___nl__bool__5 = !___nl__bool__5;
#line 738
if(___nl__bool__5){ goto label_63;}
#line 739
c_rt_lib0move(&___nl__im__226, nparser_priv0parse_var_decl(___ref___im__0));
#line 739
___nl__bool__225 = c_rt_lib0priv_is(___nl__im__226, ___get_global_const(80));
#line 739
if(___nl__bool__225){ goto label_64;}
#line 739
c_rt_lib0clear(&___nl__im__1);
#line 739
c_rt_lib0clear(&___nl__im__4);
#line 739
//clear ___nl__bool__5;
#line 739
c_rt_lib0clear(&___nl__im__7);
#line 739
//clear ___nl__bool__8;
#line 739
c_rt_lib0clear(&___nl__im__9);
#line 739
c_rt_lib0clear(&___nl__im__10);
#line 739
//clear ___nl__bool__11;
#line 739
c_rt_lib0clear(&___nl__im__12);
#line 739
c_rt_lib0clear(&___nl__im__13);
#line 739
c_rt_lib0clear(&___nl__im__14);
#line 739
//clear ___nl__bool__17;
#line 739
c_rt_lib0clear(&___nl__im__19);
#line 739
c_rt_lib0clear(&___nl__im__20);
#line 739
//clear ___nl__bool__23;
#line 739
c_rt_lib0clear(&___nl__im__24);
#line 739
c_rt_lib0clear(&___nl__im__25);
#line 739
c_rt_lib0clear(&___nl__im__26);
#line 739
//clear ___nl__bool__31;
#line 739
c_rt_lib0clear(&___nl__im__32);
#line 739
c_rt_lib0clear(&___nl__im__33);
#line 739
c_rt_lib0clear(&___nl__im__45);
#line 739
//clear ___nl__bool__50;
#line 739
c_rt_lib0clear(&___nl__im__51);
#line 739
c_rt_lib0clear(&___nl__im__52);
#line 739
//clear ___nl__bool__53;
#line 739
c_rt_lib0clear(&___nl__im__54);
#line 739
c_rt_lib0clear(&___nl__im__55);
#line 739
c_rt_lib0clear(&___nl__im__57);
#line 739
//clear ___nl__bool__62;
#line 739
c_rt_lib0clear(&___nl__im__63);
#line 739
c_rt_lib0clear(&___nl__im__64);
#line 739
//clear ___nl__bool__65;
#line 739
c_rt_lib0clear(&___nl__im__66);
#line 739
c_rt_lib0clear(&___nl__im__67);
#line 739
c_rt_lib0clear(&___nl__im__69);
#line 739
//clear ___nl__bool__70;
#line 739
c_rt_lib0clear(&___nl__im__71);
#line 739
c_rt_lib0clear(&___nl__im__73);
#line 739
//clear ___nl__bool__92;
#line 739
c_rt_lib0clear(&___nl__im__93);
#line 739
c_rt_lib0clear(&___nl__im__94);
#line 739
//clear ___nl__bool__95;
#line 739
c_rt_lib0clear(&___nl__im__96);
#line 739
c_rt_lib0clear(&___nl__im__97);
#line 739
c_rt_lib0clear(&___nl__im__99);
#line 739
//clear ___nl__bool__102;
#line 739
c_rt_lib0clear(&___nl__im__103);
#line 739
c_rt_lib0clear(&___nl__im__104);
#line 739
//clear ___nl__bool__105;
#line 739
c_rt_lib0clear(&___nl__im__106);
#line 739
c_rt_lib0clear(&___nl__im__107);
#line 739
c_rt_lib0clear(&___nl__im__109);
#line 739
//clear ___nl__bool__156;
#line 739
c_rt_lib0clear(&___nl__im__157);
#line 739
c_rt_lib0clear(&___nl__im__158);
#line 739
c_rt_lib0clear(&___nl__im__162);
#line 739
//clear ___nl__bool__163;
#line 739
c_rt_lib0clear(&___nl__im__164);
#line 739
c_rt_lib0clear(&___nl__im__168);
#line 739
//clear ___nl__bool__171;
#line 739
c_rt_lib0clear(&___nl__im__172);
#line 739
c_rt_lib0clear(&___nl__im__173);
#line 739
//clear ___nl__int__174;
#line 739
//clear ___nl__int__175;
#line 739
//clear ___nl__int__176;
#line 739
//clear ___nl__bool__177;
#line 739
//clear ___nl__int__178;
#line 739
c_rt_lib0clear(&___nl__im__179);
#line 739
c_rt_lib0clear(&___nl__im__189);
#line 739
//clear ___nl__bool__190;
#line 739
c_rt_lib0clear(&___nl__im__191);
#line 739
c_rt_lib0clear(&___nl__im__192);
#line 739
c_rt_lib0clear(&___nl__im__196);
#line 739
//clear ___nl__bool__199;
#line 739
c_rt_lib0clear(&___nl__im__201);
#line 739
//clear ___nl__bool__208;
#line 739
c_rt_lib0clear(&___nl__im__209);
#line 739
c_rt_lib0clear(&___nl__im__210);
#line 739
c_rt_lib0clear(&___nl__im__216);
#line 739
c_rt_lib0clear(&___nl__im__224);
#line 739
//clear ___nl__bool__225;
#line 739
return ___nl__im__226;
#line 739
label_64:
;
#line 739
c_rt_lib0move(&___nl__im__224, c_rt_lib0priv_as(___nl__im__226, ___get_global_const(80)));
#line 740
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__224));
#line 741
c_rt_lib0move(&___nl__im__227,___get_global_const(409));
#line 741
___nl__bool__228 = nparser_priv0eat(___ref___im__0, ___nl__im__227);
#line 741
c_rt_lib0clear(&___nl__im__227);
#line 741
//clear ___nl__bool__228;
#line 742
goto label_1;
#line 742
label_63:
;
#line 742
c_rt_lib0move(&___nl__im__229,___get_global_const(942));
#line 742
c_rt_lib0move(&___nl__im__229, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__229));
#line 742
c_rt_lib0move(&___nl__im__230,___get_global_const(858));
#line 742
___nl__bool__5 = ntokenizer0next_is(&___nl__im__229, ___nl__im__230);
#line 742
c_rt_lib0move(&___nl__string__231,___get_global_const(942));
#line 742
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__231, ___nl__im__229));
#line 742
c_rt_lib0clear(&___nl__im__229);
#line 742
c_rt_lib0clear(&___nl__im__230);
#line 742
c_rt_lib0clear(&___nl__string__231);
#line 742
___nl__bool__5 = !___nl__bool__5;
#line 742
if(___nl__bool__5){ goto label_65;}
#line 743
c_rt_lib0move(&___nl__im__232,___get_global_const(858));
#line 743
___nl__bool__233 = nparser_priv0eat(___ref___im__0, ___nl__im__232);
#line 743
c_rt_lib0clear(&___nl__im__232);
#line 743
//clear ___nl__bool__233;
#line 744
c_rt_lib0move(&___nl__im__236, nparser_priv0parse_try_ensure(___ref___im__0));
#line 744
___nl__bool__235 = c_rt_lib0priv_is(___nl__im__236, ___get_global_const(80));
#line 744
if(___nl__bool__235){ goto label_66;}
#line 744
c_rt_lib0clear(&___nl__im__1);
#line 744
c_rt_lib0clear(&___nl__im__4);
#line 744
//clear ___nl__bool__5;
#line 744
c_rt_lib0clear(&___nl__im__7);
#line 744
//clear ___nl__bool__8;
#line 744
c_rt_lib0clear(&___nl__im__9);
#line 744
c_rt_lib0clear(&___nl__im__10);
#line 744
//clear ___nl__bool__11;
#line 744
c_rt_lib0clear(&___nl__im__12);
#line 744
c_rt_lib0clear(&___nl__im__13);
#line 744
c_rt_lib0clear(&___nl__im__14);
#line 744
//clear ___nl__bool__17;
#line 744
c_rt_lib0clear(&___nl__im__19);
#line 744
c_rt_lib0clear(&___nl__im__20);
#line 744
//clear ___nl__bool__23;
#line 744
c_rt_lib0clear(&___nl__im__24);
#line 744
c_rt_lib0clear(&___nl__im__25);
#line 744
c_rt_lib0clear(&___nl__im__26);
#line 744
//clear ___nl__bool__31;
#line 744
c_rt_lib0clear(&___nl__im__32);
#line 744
c_rt_lib0clear(&___nl__im__33);
#line 744
c_rt_lib0clear(&___nl__im__45);
#line 744
//clear ___nl__bool__50;
#line 744
c_rt_lib0clear(&___nl__im__51);
#line 744
c_rt_lib0clear(&___nl__im__52);
#line 744
//clear ___nl__bool__53;
#line 744
c_rt_lib0clear(&___nl__im__54);
#line 744
c_rt_lib0clear(&___nl__im__55);
#line 744
c_rt_lib0clear(&___nl__im__57);
#line 744
//clear ___nl__bool__62;
#line 744
c_rt_lib0clear(&___nl__im__63);
#line 744
c_rt_lib0clear(&___nl__im__64);
#line 744
//clear ___nl__bool__65;
#line 744
c_rt_lib0clear(&___nl__im__66);
#line 744
c_rt_lib0clear(&___nl__im__67);
#line 744
c_rt_lib0clear(&___nl__im__69);
#line 744
//clear ___nl__bool__70;
#line 744
c_rt_lib0clear(&___nl__im__71);
#line 744
c_rt_lib0clear(&___nl__im__73);
#line 744
//clear ___nl__bool__92;
#line 744
c_rt_lib0clear(&___nl__im__93);
#line 744
c_rt_lib0clear(&___nl__im__94);
#line 744
//clear ___nl__bool__95;
#line 744
c_rt_lib0clear(&___nl__im__96);
#line 744
c_rt_lib0clear(&___nl__im__97);
#line 744
c_rt_lib0clear(&___nl__im__99);
#line 744
//clear ___nl__bool__102;
#line 744
c_rt_lib0clear(&___nl__im__103);
#line 744
c_rt_lib0clear(&___nl__im__104);
#line 744
//clear ___nl__bool__105;
#line 744
c_rt_lib0clear(&___nl__im__106);
#line 744
c_rt_lib0clear(&___nl__im__107);
#line 744
c_rt_lib0clear(&___nl__im__109);
#line 744
//clear ___nl__bool__156;
#line 744
c_rt_lib0clear(&___nl__im__157);
#line 744
c_rt_lib0clear(&___nl__im__158);
#line 744
c_rt_lib0clear(&___nl__im__162);
#line 744
//clear ___nl__bool__163;
#line 744
c_rt_lib0clear(&___nl__im__164);
#line 744
c_rt_lib0clear(&___nl__im__168);
#line 744
//clear ___nl__bool__171;
#line 744
c_rt_lib0clear(&___nl__im__172);
#line 744
c_rt_lib0clear(&___nl__im__173);
#line 744
//clear ___nl__int__174;
#line 744
//clear ___nl__int__175;
#line 744
//clear ___nl__int__176;
#line 744
//clear ___nl__bool__177;
#line 744
//clear ___nl__int__178;
#line 744
c_rt_lib0clear(&___nl__im__179);
#line 744
c_rt_lib0clear(&___nl__im__189);
#line 744
//clear ___nl__bool__190;
#line 744
c_rt_lib0clear(&___nl__im__191);
#line 744
c_rt_lib0clear(&___nl__im__192);
#line 744
c_rt_lib0clear(&___nl__im__196);
#line 744
//clear ___nl__bool__199;
#line 744
c_rt_lib0clear(&___nl__im__201);
#line 744
//clear ___nl__bool__208;
#line 744
c_rt_lib0clear(&___nl__im__209);
#line 744
c_rt_lib0clear(&___nl__im__210);
#line 744
c_rt_lib0clear(&___nl__im__216);
#line 744
c_rt_lib0clear(&___nl__im__224);
#line 744
//clear ___nl__bool__225;
#line 744
c_rt_lib0clear(&___nl__im__226);
#line 744
c_rt_lib0clear(&___nl__im__234);
#line 744
//clear ___nl__bool__235;
#line 744
return ___nl__im__236;
#line 744
label_66:
;
#line 744
c_rt_lib0move(&___nl__im__234, c_rt_lib0priv_as(___nl__im__236, ___get_global_const(80)));
#line 745
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(858), ___nl__im__234));
#line 746
goto label_1;
#line 746
label_65:
;
#line 746
c_rt_lib0move(&___nl__im__237,___get_global_const(942));
#line 746
c_rt_lib0move(&___nl__im__237, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__237));
#line 746
c_rt_lib0move(&___nl__im__238,___get_global_const(178));
#line 746
___nl__bool__5 = ntokenizer0next_is(&___nl__im__237, ___nl__im__238);
#line 746
c_rt_lib0move(&___nl__string__239,___get_global_const(942));
#line 746
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__239, ___nl__im__237));
#line 746
c_rt_lib0clear(&___nl__im__237);
#line 746
c_rt_lib0clear(&___nl__im__238);
#line 746
c_rt_lib0clear(&___nl__string__239);
#line 746
___nl__bool__5 = !___nl__bool__5;
#line 746
if(___nl__bool__5){ goto label_67;}
#line 747
c_rt_lib0move(&___nl__im__240,___get_global_const(178));
#line 747
___nl__bool__241 = nparser_priv0eat(___ref___im__0, ___nl__im__240);
#line 747
c_rt_lib0clear(&___nl__im__240);
#line 747
//clear ___nl__bool__241;
#line 748
c_rt_lib0move(&___nl__im__244, nparser_priv0parse_try_ensure(___ref___im__0));
#line 748
___nl__bool__243 = c_rt_lib0priv_is(___nl__im__244, ___get_global_const(80));
#line 748
if(___nl__bool__243){ goto label_68;}
#line 748
c_rt_lib0clear(&___nl__im__1);
#line 748
c_rt_lib0clear(&___nl__im__4);
#line 748
//clear ___nl__bool__5;
#line 748
c_rt_lib0clear(&___nl__im__7);
#line 748
//clear ___nl__bool__8;
#line 748
c_rt_lib0clear(&___nl__im__9);
#line 748
c_rt_lib0clear(&___nl__im__10);
#line 748
//clear ___nl__bool__11;
#line 748
c_rt_lib0clear(&___nl__im__12);
#line 748
c_rt_lib0clear(&___nl__im__13);
#line 748
c_rt_lib0clear(&___nl__im__14);
#line 748
//clear ___nl__bool__17;
#line 748
c_rt_lib0clear(&___nl__im__19);
#line 748
c_rt_lib0clear(&___nl__im__20);
#line 748
//clear ___nl__bool__23;
#line 748
c_rt_lib0clear(&___nl__im__24);
#line 748
c_rt_lib0clear(&___nl__im__25);
#line 748
c_rt_lib0clear(&___nl__im__26);
#line 748
//clear ___nl__bool__31;
#line 748
c_rt_lib0clear(&___nl__im__32);
#line 748
c_rt_lib0clear(&___nl__im__33);
#line 748
c_rt_lib0clear(&___nl__im__45);
#line 748
//clear ___nl__bool__50;
#line 748
c_rt_lib0clear(&___nl__im__51);
#line 748
c_rt_lib0clear(&___nl__im__52);
#line 748
//clear ___nl__bool__53;
#line 748
c_rt_lib0clear(&___nl__im__54);
#line 748
c_rt_lib0clear(&___nl__im__55);
#line 748
c_rt_lib0clear(&___nl__im__57);
#line 748
//clear ___nl__bool__62;
#line 748
c_rt_lib0clear(&___nl__im__63);
#line 748
c_rt_lib0clear(&___nl__im__64);
#line 748
//clear ___nl__bool__65;
#line 748
c_rt_lib0clear(&___nl__im__66);
#line 748
c_rt_lib0clear(&___nl__im__67);
#line 748
c_rt_lib0clear(&___nl__im__69);
#line 748
//clear ___nl__bool__70;
#line 748
c_rt_lib0clear(&___nl__im__71);
#line 748
c_rt_lib0clear(&___nl__im__73);
#line 748
//clear ___nl__bool__92;
#line 748
c_rt_lib0clear(&___nl__im__93);
#line 748
c_rt_lib0clear(&___nl__im__94);
#line 748
//clear ___nl__bool__95;
#line 748
c_rt_lib0clear(&___nl__im__96);
#line 748
c_rt_lib0clear(&___nl__im__97);
#line 748
c_rt_lib0clear(&___nl__im__99);
#line 748
//clear ___nl__bool__102;
#line 748
c_rt_lib0clear(&___nl__im__103);
#line 748
c_rt_lib0clear(&___nl__im__104);
#line 748
//clear ___nl__bool__105;
#line 748
c_rt_lib0clear(&___nl__im__106);
#line 748
c_rt_lib0clear(&___nl__im__107);
#line 748
c_rt_lib0clear(&___nl__im__109);
#line 748
//clear ___nl__bool__156;
#line 748
c_rt_lib0clear(&___nl__im__157);
#line 748
c_rt_lib0clear(&___nl__im__158);
#line 748
c_rt_lib0clear(&___nl__im__162);
#line 748
//clear ___nl__bool__163;
#line 748
c_rt_lib0clear(&___nl__im__164);
#line 748
c_rt_lib0clear(&___nl__im__168);
#line 748
//clear ___nl__bool__171;
#line 748
c_rt_lib0clear(&___nl__im__172);
#line 748
c_rt_lib0clear(&___nl__im__173);
#line 748
//clear ___nl__int__174;
#line 748
//clear ___nl__int__175;
#line 748
//clear ___nl__int__176;
#line 748
//clear ___nl__bool__177;
#line 748
//clear ___nl__int__178;
#line 748
c_rt_lib0clear(&___nl__im__179);
#line 748
c_rt_lib0clear(&___nl__im__189);
#line 748
//clear ___nl__bool__190;
#line 748
c_rt_lib0clear(&___nl__im__191);
#line 748
c_rt_lib0clear(&___nl__im__192);
#line 748
c_rt_lib0clear(&___nl__im__196);
#line 748
//clear ___nl__bool__199;
#line 748
c_rt_lib0clear(&___nl__im__201);
#line 748
//clear ___nl__bool__208;
#line 748
c_rt_lib0clear(&___nl__im__209);
#line 748
c_rt_lib0clear(&___nl__im__210);
#line 748
c_rt_lib0clear(&___nl__im__216);
#line 748
c_rt_lib0clear(&___nl__im__224);
#line 748
//clear ___nl__bool__225;
#line 748
c_rt_lib0clear(&___nl__im__226);
#line 748
c_rt_lib0clear(&___nl__im__234);
#line 748
//clear ___nl__bool__235;
#line 748
c_rt_lib0clear(&___nl__im__236);
#line 748
c_rt_lib0clear(&___nl__im__242);
#line 748
//clear ___nl__bool__243;
#line 748
return ___nl__im__244;
#line 748
label_68:
;
#line 748
c_rt_lib0move(&___nl__im__242, c_rt_lib0priv_as(___nl__im__244, ___get_global_const(80)));
#line 749
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__242));
#line 750
goto label_1;
#line 750
label_67:
;
#line 751
c_rt_lib0move(&___nl__im__247, nparser_priv0parse_expr(___ref___im__0));
#line 751
___nl__bool__246 = c_rt_lib0priv_is(___nl__im__247, ___get_global_const(80));
#line 751
if(___nl__bool__246){ goto label_69;}
#line 751
c_rt_lib0clear(&___nl__im__1);
#line 751
c_rt_lib0clear(&___nl__im__4);
#line 751
//clear ___nl__bool__5;
#line 751
c_rt_lib0clear(&___nl__im__7);
#line 751
//clear ___nl__bool__8;
#line 751
c_rt_lib0clear(&___nl__im__9);
#line 751
c_rt_lib0clear(&___nl__im__10);
#line 751
//clear ___nl__bool__11;
#line 751
c_rt_lib0clear(&___nl__im__12);
#line 751
c_rt_lib0clear(&___nl__im__13);
#line 751
c_rt_lib0clear(&___nl__im__14);
#line 751
//clear ___nl__bool__17;
#line 751
c_rt_lib0clear(&___nl__im__19);
#line 751
c_rt_lib0clear(&___nl__im__20);
#line 751
//clear ___nl__bool__23;
#line 751
c_rt_lib0clear(&___nl__im__24);
#line 751
c_rt_lib0clear(&___nl__im__25);
#line 751
c_rt_lib0clear(&___nl__im__26);
#line 751
//clear ___nl__bool__31;
#line 751
c_rt_lib0clear(&___nl__im__32);
#line 751
c_rt_lib0clear(&___nl__im__33);
#line 751
c_rt_lib0clear(&___nl__im__45);
#line 751
//clear ___nl__bool__50;
#line 751
c_rt_lib0clear(&___nl__im__51);
#line 751
c_rt_lib0clear(&___nl__im__52);
#line 751
//clear ___nl__bool__53;
#line 751
c_rt_lib0clear(&___nl__im__54);
#line 751
c_rt_lib0clear(&___nl__im__55);
#line 751
c_rt_lib0clear(&___nl__im__57);
#line 751
//clear ___nl__bool__62;
#line 751
c_rt_lib0clear(&___nl__im__63);
#line 751
c_rt_lib0clear(&___nl__im__64);
#line 751
//clear ___nl__bool__65;
#line 751
c_rt_lib0clear(&___nl__im__66);
#line 751
c_rt_lib0clear(&___nl__im__67);
#line 751
c_rt_lib0clear(&___nl__im__69);
#line 751
//clear ___nl__bool__70;
#line 751
c_rt_lib0clear(&___nl__im__71);
#line 751
c_rt_lib0clear(&___nl__im__73);
#line 751
//clear ___nl__bool__92;
#line 751
c_rt_lib0clear(&___nl__im__93);
#line 751
c_rt_lib0clear(&___nl__im__94);
#line 751
//clear ___nl__bool__95;
#line 751
c_rt_lib0clear(&___nl__im__96);
#line 751
c_rt_lib0clear(&___nl__im__97);
#line 751
c_rt_lib0clear(&___nl__im__99);
#line 751
//clear ___nl__bool__102;
#line 751
c_rt_lib0clear(&___nl__im__103);
#line 751
c_rt_lib0clear(&___nl__im__104);
#line 751
//clear ___nl__bool__105;
#line 751
c_rt_lib0clear(&___nl__im__106);
#line 751
c_rt_lib0clear(&___nl__im__107);
#line 751
c_rt_lib0clear(&___nl__im__109);
#line 751
//clear ___nl__bool__156;
#line 751
c_rt_lib0clear(&___nl__im__157);
#line 751
c_rt_lib0clear(&___nl__im__158);
#line 751
c_rt_lib0clear(&___nl__im__162);
#line 751
//clear ___nl__bool__163;
#line 751
c_rt_lib0clear(&___nl__im__164);
#line 751
c_rt_lib0clear(&___nl__im__168);
#line 751
//clear ___nl__bool__171;
#line 751
c_rt_lib0clear(&___nl__im__172);
#line 751
c_rt_lib0clear(&___nl__im__173);
#line 751
//clear ___nl__int__174;
#line 751
//clear ___nl__int__175;
#line 751
//clear ___nl__int__176;
#line 751
//clear ___nl__bool__177;
#line 751
//clear ___nl__int__178;
#line 751
c_rt_lib0clear(&___nl__im__179);
#line 751
c_rt_lib0clear(&___nl__im__189);
#line 751
//clear ___nl__bool__190;
#line 751
c_rt_lib0clear(&___nl__im__191);
#line 751
c_rt_lib0clear(&___nl__im__192);
#line 751
c_rt_lib0clear(&___nl__im__196);
#line 751
//clear ___nl__bool__199;
#line 751
c_rt_lib0clear(&___nl__im__201);
#line 751
//clear ___nl__bool__208;
#line 751
c_rt_lib0clear(&___nl__im__209);
#line 751
c_rt_lib0clear(&___nl__im__210);
#line 751
c_rt_lib0clear(&___nl__im__216);
#line 751
c_rt_lib0clear(&___nl__im__224);
#line 751
//clear ___nl__bool__225;
#line 751
c_rt_lib0clear(&___nl__im__226);
#line 751
c_rt_lib0clear(&___nl__im__234);
#line 751
//clear ___nl__bool__235;
#line 751
c_rt_lib0clear(&___nl__im__236);
#line 751
c_rt_lib0clear(&___nl__im__242);
#line 751
//clear ___nl__bool__243;
#line 751
c_rt_lib0clear(&___nl__im__244);
#line 751
c_rt_lib0clear(&___nl__im__245);
#line 751
//clear ___nl__bool__246;
#line 751
return ___nl__im__247;
#line 751
label_69:
;
#line 751
c_rt_lib0move(&___nl__im__245, c_rt_lib0priv_as(___nl__im__247, ___get_global_const(80)));
#line 752
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__245));
#line 753
goto label_1;
#line 753
label_1:
;
#line 753
//clear ___nl__bool__5;
#line 753
c_rt_lib0clear(&___nl__im__7);
#line 753
//clear ___nl__bool__8;
#line 753
c_rt_lib0clear(&___nl__im__9);
#line 753
c_rt_lib0clear(&___nl__im__10);
#line 753
//clear ___nl__bool__11;
#line 753
c_rt_lib0clear(&___nl__im__12);
#line 753
c_rt_lib0clear(&___nl__im__13);
#line 753
c_rt_lib0clear(&___nl__im__14);
#line 753
//clear ___nl__bool__17;
#line 753
c_rt_lib0clear(&___nl__im__19);
#line 753
c_rt_lib0clear(&___nl__im__20);
#line 753
//clear ___nl__bool__23;
#line 753
c_rt_lib0clear(&___nl__im__24);
#line 753
c_rt_lib0clear(&___nl__im__25);
#line 753
c_rt_lib0clear(&___nl__im__26);
#line 753
//clear ___nl__bool__31;
#line 753
c_rt_lib0clear(&___nl__im__32);
#line 753
c_rt_lib0clear(&___nl__im__33);
#line 753
c_rt_lib0clear(&___nl__im__45);
#line 753
//clear ___nl__bool__50;
#line 753
c_rt_lib0clear(&___nl__im__51);
#line 753
c_rt_lib0clear(&___nl__im__52);
#line 753
//clear ___nl__bool__53;
#line 753
c_rt_lib0clear(&___nl__im__54);
#line 753
c_rt_lib0clear(&___nl__im__55);
#line 753
c_rt_lib0clear(&___nl__im__57);
#line 753
//clear ___nl__bool__62;
#line 753
c_rt_lib0clear(&___nl__im__63);
#line 753
c_rt_lib0clear(&___nl__im__64);
#line 753
//clear ___nl__bool__65;
#line 753
c_rt_lib0clear(&___nl__im__66);
#line 753
c_rt_lib0clear(&___nl__im__67);
#line 753
c_rt_lib0clear(&___nl__im__69);
#line 753
//clear ___nl__bool__70;
#line 753
c_rt_lib0clear(&___nl__im__71);
#line 753
c_rt_lib0clear(&___nl__im__73);
#line 753
//clear ___nl__bool__92;
#line 753
c_rt_lib0clear(&___nl__im__93);
#line 753
c_rt_lib0clear(&___nl__im__94);
#line 753
//clear ___nl__bool__95;
#line 753
c_rt_lib0clear(&___nl__im__96);
#line 753
c_rt_lib0clear(&___nl__im__97);
#line 753
c_rt_lib0clear(&___nl__im__99);
#line 753
//clear ___nl__bool__102;
#line 753
c_rt_lib0clear(&___nl__im__103);
#line 753
c_rt_lib0clear(&___nl__im__104);
#line 753
//clear ___nl__bool__105;
#line 753
c_rt_lib0clear(&___nl__im__106);
#line 753
c_rt_lib0clear(&___nl__im__107);
#line 753
c_rt_lib0clear(&___nl__im__109);
#line 753
//clear ___nl__bool__156;
#line 753
c_rt_lib0clear(&___nl__im__157);
#line 753
c_rt_lib0clear(&___nl__im__158);
#line 753
c_rt_lib0clear(&___nl__im__162);
#line 753
//clear ___nl__bool__163;
#line 753
c_rt_lib0clear(&___nl__im__164);
#line 753
c_rt_lib0clear(&___nl__im__168);
#line 753
//clear ___nl__bool__171;
#line 753
c_rt_lib0clear(&___nl__im__172);
#line 753
c_rt_lib0clear(&___nl__im__173);
#line 753
//clear ___nl__int__174;
#line 753
//clear ___nl__int__175;
#line 753
//clear ___nl__int__176;
#line 753
//clear ___nl__bool__177;
#line 753
//clear ___nl__int__178;
#line 753
c_rt_lib0clear(&___nl__im__179);
#line 753
c_rt_lib0clear(&___nl__im__189);
#line 753
//clear ___nl__bool__190;
#line 753
c_rt_lib0clear(&___nl__im__191);
#line 753
c_rt_lib0clear(&___nl__im__192);
#line 753
c_rt_lib0clear(&___nl__im__196);
#line 753
//clear ___nl__bool__199;
#line 753
c_rt_lib0clear(&___nl__im__201);
#line 753
//clear ___nl__bool__208;
#line 753
c_rt_lib0clear(&___nl__im__209);
#line 753
c_rt_lib0clear(&___nl__im__210);
#line 753
c_rt_lib0clear(&___nl__im__216);
#line 753
c_rt_lib0clear(&___nl__im__224);
#line 753
//clear ___nl__bool__225;
#line 753
c_rt_lib0clear(&___nl__im__226);
#line 753
c_rt_lib0clear(&___nl__im__234);
#line 753
//clear ___nl__bool__235;
#line 753
c_rt_lib0clear(&___nl__im__236);
#line 753
c_rt_lib0clear(&___nl__im__242);
#line 753
//clear ___nl__bool__243;
#line 753
c_rt_lib0clear(&___nl__im__244);
#line 753
c_rt_lib0clear(&___nl__im__245);
#line 753
//clear ___nl__bool__246;
#line 753
c_rt_lib0clear(&___nl__im__247);
#line 754
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(854));
#line 754
if(___nl__bool__248){ goto label_77;}
#line 754
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(855));
#line 754
label_77:
;
#line 754
//clear ___nl__bool__254;
#line 754
if(___nl__bool__248){ goto label_76;}
#line 754
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(219));
#line 754
label_76:
;
#line 754
//clear ___nl__bool__253;
#line 754
if(___nl__bool__248){ goto label_75;}
#line 754
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(246));
#line 754
label_75:
;
#line 754
//clear ___nl__bool__252;
#line 754
if(___nl__bool__248){ goto label_74;}
#line 754
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(247));
#line 754
label_74:
;
#line 754
//clear ___nl__bool__251;
#line 754
if(___nl__bool__248){ goto label_73;}
#line 754
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(178));
#line 754
label_73:
;
#line 754
//clear ___nl__bool__250;
#line 754
if(___nl__bool__248){ goto label_72;}
#line 754
___nl__bool__248 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(858));
#line 754
label_72:
;
#line 754
//clear ___nl__bool__249;
#line 754
___nl__bool__248 = !___nl__bool__248;
#line 754
if(___nl__bool__248){ goto label_71;}
#line 756
c_rt_lib0move(&___nl__im__257,___get_global_const(942));
#line 756
c_rt_lib0move(&___nl__im__257, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__257));
#line 756
c_rt_lib0move(&___nl__im__256, ntokenizer0get_place_ws(&___nl__im__257));
#line 756
c_rt_lib0move(&___nl__string__258,___get_global_const(942));
#line 756
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__258, ___nl__im__257));
#line 756
c_rt_lib0clear(&___nl__im__257);
#line 756
c_rt_lib0clear(&___nl__string__258);
#line 756
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__256));
#line 756
c_rt_lib0clear(&___nl__im__256);
#line 757
c_rt_lib0move(&___nl__im__260, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__255, ___get_global_const(227), ___nl__im__4));
#line 757
c_rt_lib0move(&___nl__im__259, c_rt_lib0hash_mk(1, ___get_global_const(227), ___nl__im__260));
#line 757
c_rt_lib0clear(&___nl__im__260);
#line 758
c_rt_lib0move(&___nl__im__262,___get_global_const(848));
#line 758
___nl__bool__261 = nparser_priv0try_eat(___ref___im__0, ___nl__im__262);
#line 758
c_rt_lib0clear(&___nl__im__262);
#line 758
___nl__bool__261 = !___nl__bool__261;
#line 758
if(___nl__bool__261){ goto label_79;}
#line 759
___nl__bool__264 = true;
#line 759
c_rt_lib0move(&___nl__im__263, c_rt_lib0bool_to_nl_native(___nl__bool__264));
#line 759
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(928), ___nl__im__263);
#line 759
c_rt_lib0clear(&___nl__im__263);
#line 759
//clear ___nl__bool__264;
#line 760
c_rt_lib0move(&___nl__im__266, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 760
c_rt_lib0copy(&___nl__im__265, ___nl__im__266);
#line 760
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(569), ___nl__im__265);
#line 760
c_rt_lib0clear(&___nl__im__265);
#line 760
c_rt_lib0clear(&___nl__im__266);
#line 761
c_rt_lib0move(&___nl__im__267,___get_global_const(420));
#line 761
___nl__bool__268 = nparser_priv0eat(___ref___im__0, ___nl__im__267);
#line 761
c_rt_lib0clear(&___nl__im__267);
#line 761
//clear ___nl__bool__268;
#line 762
c_rt_lib0move(&___nl__im__270, nparser_priv0parse_expr(___ref___im__0));
#line 762
___nl__bool__269 = c_rt_lib0priv_is(___nl__im__270, ___get_global_const(80));
#line 762
if(___nl__bool__269){ goto label_80;}
#line 762
c_rt_lib0clear(&___nl__im__1);
#line 762
c_rt_lib0clear(&___nl__im__4);
#line 762
//clear ___nl__bool__248;
#line 762
c_rt_lib0clear(&___nl__im__255);
#line 762
c_rt_lib0clear(&___nl__im__259);
#line 762
//clear ___nl__bool__261;
#line 762
//clear ___nl__bool__269;
#line 762
return ___nl__im__270;
#line 762
label_80:
;
#line 762
c_rt_lib0move(&___nl__im__271, c_rt_lib0priv_as(___nl__im__270, ___get_global_const(80)));
#line 762
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(38), ___nl__im__271);
#line 763
c_rt_lib0move(&___nl__im__272,___get_global_const(299));
#line 763
___nl__bool__273 = nparser_priv0eat(___ref___im__0, ___nl__im__272);
#line 763
c_rt_lib0clear(&___nl__im__272);
#line 763
//clear ___nl__bool__273;
#line 764
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(848), ___nl__im__259));
#line 765
goto label_78;
#line 765
label_79:
;
#line 765
c_rt_lib0move(&___nl__im__274,___get_global_const(850));
#line 765
___nl__bool__261 = nparser_priv0try_eat(___ref___im__0, ___nl__im__274);
#line 765
c_rt_lib0clear(&___nl__im__274);
#line 765
___nl__bool__261 = !___nl__bool__261;
#line 765
if(___nl__bool__261){ goto label_81;}
#line 766
___nl__bool__276 = true;
#line 766
c_rt_lib0move(&___nl__im__275, c_rt_lib0bool_to_nl_native(___nl__bool__276));
#line 766
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(928), ___nl__im__275);
#line 766
c_rt_lib0clear(&___nl__im__275);
#line 766
//clear ___nl__bool__276;
#line 767
c_rt_lib0move(&___nl__im__278, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 767
c_rt_lib0copy(&___nl__im__277, ___nl__im__278);
#line 767
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(569), ___nl__im__277);
#line 767
c_rt_lib0clear(&___nl__im__277);
#line 767
c_rt_lib0clear(&___nl__im__278);
#line 768
c_rt_lib0move(&___nl__im__279,___get_global_const(420));
#line 768
___nl__bool__280 = nparser_priv0eat(___ref___im__0, ___nl__im__279);
#line 768
c_rt_lib0clear(&___nl__im__279);
#line 768
//clear ___nl__bool__280;
#line 769
c_rt_lib0move(&___nl__im__282, nparser_priv0parse_expr(___ref___im__0));
#line 769
___nl__bool__281 = c_rt_lib0priv_is(___nl__im__282, ___get_global_const(80));
#line 769
if(___nl__bool__281){ goto label_82;}
#line 769
c_rt_lib0clear(&___nl__im__1);
#line 769
c_rt_lib0clear(&___nl__im__4);
#line 769
//clear ___nl__bool__248;
#line 769
c_rt_lib0clear(&___nl__im__255);
#line 769
c_rt_lib0clear(&___nl__im__259);
#line 769
//clear ___nl__bool__261;
#line 769
//clear ___nl__bool__269;
#line 769
c_rt_lib0clear(&___nl__im__270);
#line 769
c_rt_lib0clear(&___nl__im__271);
#line 769
//clear ___nl__bool__281;
#line 769
return ___nl__im__282;
#line 769
label_82:
;
#line 769
c_rt_lib0move(&___nl__im__283, c_rt_lib0priv_as(___nl__im__282, ___get_global_const(80)));
#line 769
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(865), ___nl__im__283);
#line 770
c_rt_lib0move(&___nl__im__284,___get_global_const(299));
#line 770
___nl__bool__285 = nparser_priv0eat(___ref___im__0, ___nl__im__284);
#line 770
c_rt_lib0clear(&___nl__im__284);
#line 770
//clear ___nl__bool__285;
#line 771
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(850), ___nl__im__259));
#line 772
goto label_78;
#line 772
label_81:
;
#line 772
c_rt_lib0move(&___nl__im__286,___get_global_const(849));
#line 772
___nl__bool__261 = nparser_priv0try_eat(___ref___im__0, ___nl__im__286);
#line 772
c_rt_lib0clear(&___nl__im__286);
#line 772
___nl__bool__261 = !___nl__bool__261;
#line 772
if(___nl__bool__261){ goto label_83;}
#line 773
___nl__bool__288 = true;
#line 773
c_rt_lib0move(&___nl__im__287, c_rt_lib0bool_to_nl_native(___nl__bool__288));
#line 773
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(928), ___nl__im__287);
#line 773
c_rt_lib0clear(&___nl__im__287);
#line 773
//clear ___nl__bool__288;
#line 774
c_rt_lib0move(&___nl__im__290, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 774
c_rt_lib0copy(&___nl__im__289, ___nl__im__290);
#line 774
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(371), ___nl__im__289);
#line 774
c_rt_lib0clear(&___nl__im__289);
#line 774
c_rt_lib0clear(&___nl__im__290);
#line 775
c_rt_lib0move(&___nl__im__291,___get_global_const(295));
#line 775
___nl__bool__292 = nparser_priv0eat(___ref___im__0, ___nl__im__291);
#line 775
c_rt_lib0clear(&___nl__im__291);
#line 775
//clear ___nl__bool__292;
#line 776
c_rt_lib0move(&___nl__im__294,___get_global_const(942));
#line 776
c_rt_lib0move(&___nl__im__294, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__294));
#line 776
c_rt_lib0move(&___nl__im__295,___get_global_const(463));
#line 776
___nl__bool__293 = ntokenizer0next_is(&___nl__im__294, ___nl__im__295);
#line 776
c_rt_lib0move(&___nl__string__296,___get_global_const(942));
#line 776
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__296, ___nl__im__294));
#line 776
c_rt_lib0clear(&___nl__im__294);
#line 776
c_rt_lib0clear(&___nl__im__295);
#line 776
c_rt_lib0clear(&___nl__string__296);
#line 776
___nl__bool__293 = !___nl__bool__293;
#line 776
if(___nl__bool__293){ goto label_85;}
#line 777
c_rt_lib0move(&___nl__im__298, nparser_priv0parse_var_decl_sim(___ref___im__0));
#line 777
c_rt_lib0copy(&___nl__im__297, ___nl__im__298);
#line 777
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(224), ___nl__im__297);
#line 777
c_rt_lib0clear(&___nl__im__297);
#line 777
c_rt_lib0clear(&___nl__im__298);
#line 778
c_rt_lib0move(&___nl__im__300, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 778
c_rt_lib0copy(&___nl__im__299, ___nl__im__300);
#line 778
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(864), ___nl__im__299);
#line 778
c_rt_lib0clear(&___nl__im__299);
#line 778
c_rt_lib0clear(&___nl__im__300);
#line 779
goto label_84;
#line 779
label_85:
;
#line 780
c_rt_lib0move(&___nl__im__302, nparser_priv0parse_ref_var_decl_sim(___ref___im__0));
#line 780
c_rt_lib0copy(&___nl__im__301, ___nl__im__302);
#line 780
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(224), ___nl__im__301);
#line 780
c_rt_lib0clear(&___nl__im__301);
#line 780
c_rt_lib0clear(&___nl__im__302);
#line 781
c_rt_lib0move(&___nl__im__304, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 781
c_rt_lib0copy(&___nl__im__303, ___nl__im__304);
#line 781
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(864), ___nl__im__303);
#line 781
c_rt_lib0clear(&___nl__im__303);
#line 781
c_rt_lib0clear(&___nl__im__304);
#line 782
goto label_84;
#line 782
label_84:
;
#line 782
//clear ___nl__bool__293;
#line 783
c_rt_lib0move(&___nl__im__305,___get_global_const(420));
#line 783
___nl__bool__306 = nparser_priv0eat(___ref___im__0, ___nl__im__305);
#line 783
c_rt_lib0clear(&___nl__im__305);
#line 783
//clear ___nl__bool__306;
#line 784
c_rt_lib0move(&___nl__im__308, nparser_priv0parse_expr(___ref___im__0));
#line 784
___nl__bool__307 = c_rt_lib0priv_is(___nl__im__308, ___get_global_const(80));
#line 784
if(___nl__bool__307){ goto label_86;}
#line 784
c_rt_lib0clear(&___nl__im__1);
#line 784
c_rt_lib0clear(&___nl__im__4);
#line 784
//clear ___nl__bool__248;
#line 784
c_rt_lib0clear(&___nl__im__255);
#line 784
c_rt_lib0clear(&___nl__im__259);
#line 784
//clear ___nl__bool__261;
#line 784
//clear ___nl__bool__269;
#line 784
c_rt_lib0clear(&___nl__im__270);
#line 784
c_rt_lib0clear(&___nl__im__271);
#line 784
//clear ___nl__bool__281;
#line 784
c_rt_lib0clear(&___nl__im__282);
#line 784
c_rt_lib0clear(&___nl__im__283);
#line 784
//clear ___nl__bool__307;
#line 784
return ___nl__im__308;
#line 784
label_86:
;
#line 784
c_rt_lib0move(&___nl__im__309, c_rt_lib0priv_as(___nl__im__308, ___get_global_const(80)));
#line 784
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(131), ___nl__im__309);
#line 785
c_rt_lib0move(&___nl__im__310,___get_global_const(299));
#line 785
___nl__bool__311 = nparser_priv0eat(___ref___im__0, ___nl__im__310);
#line 785
c_rt_lib0clear(&___nl__im__310);
#line 785
//clear ___nl__bool__311;
#line 786
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(849), ___nl__im__259));
#line 787
goto label_78;
#line 787
label_83:
;
#line 787
c_rt_lib0move(&___nl__im__312,___get_global_const(846));
#line 787
___nl__bool__261 = nparser_priv0try_eat(___ref___im__0, ___nl__im__312);
#line 787
c_rt_lib0clear(&___nl__im__312);
#line 787
___nl__bool__261 = !___nl__bool__261;
#line 787
if(___nl__bool__261){ goto label_87;}
#line 788
c_rt_lib0move(&___nl__im__314, nparser_priv0parse_expr(___ref___im__0));
#line 788
___nl__bool__313 = c_rt_lib0priv_is(___nl__im__314, ___get_global_const(80));
#line 788
if(___nl__bool__313){ goto label_88;}
#line 788
c_rt_lib0clear(&___nl__im__1);
#line 788
c_rt_lib0clear(&___nl__im__4);
#line 788
//clear ___nl__bool__248;
#line 788
c_rt_lib0clear(&___nl__im__255);
#line 788
c_rt_lib0clear(&___nl__im__259);
#line 788
//clear ___nl__bool__261;
#line 788
//clear ___nl__bool__269;
#line 788
c_rt_lib0clear(&___nl__im__270);
#line 788
c_rt_lib0clear(&___nl__im__271);
#line 788
//clear ___nl__bool__281;
#line 788
c_rt_lib0clear(&___nl__im__282);
#line 788
c_rt_lib0clear(&___nl__im__283);
#line 788
//clear ___nl__bool__307;
#line 788
c_rt_lib0clear(&___nl__im__308);
#line 788
c_rt_lib0clear(&___nl__im__309);
#line 788
//clear ___nl__bool__313;
#line 788
return ___nl__im__314;
#line 788
label_88:
;
#line 788
c_rt_lib0move(&___nl__im__315, c_rt_lib0priv_as(___nl__im__314, ___get_global_const(80)));
#line 788
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(860), ___nl__im__315);
#line 789
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(852), ___nl__im__259));
#line 790
goto label_78;
#line 790
label_87:
;
#line 790
c_rt_lib0move(&___nl__im__316,___get_global_const(963));
#line 790
___nl__bool__261 = nparser_priv0try_eat(___ref___im__0, ___nl__im__316);
#line 790
c_rt_lib0clear(&___nl__im__316);
#line 790
___nl__bool__261 = !___nl__bool__261;
#line 790
if(___nl__bool__261){ goto label_89;}
#line 791
c_rt_lib0move(&___nl__im__318, nparser_priv0parse_expr(___ref___im__0));
#line 791
___nl__bool__317 = c_rt_lib0priv_is(___nl__im__318, ___get_global_const(80));
#line 791
if(___nl__bool__317){ goto label_90;}
#line 791
c_rt_lib0clear(&___nl__im__1);
#line 791
c_rt_lib0clear(&___nl__im__4);
#line 791
//clear ___nl__bool__248;
#line 791
c_rt_lib0clear(&___nl__im__255);
#line 791
c_rt_lib0clear(&___nl__im__259);
#line 791
//clear ___nl__bool__261;
#line 791
//clear ___nl__bool__269;
#line 791
c_rt_lib0clear(&___nl__im__270);
#line 791
c_rt_lib0clear(&___nl__im__271);
#line 791
//clear ___nl__bool__281;
#line 791
c_rt_lib0clear(&___nl__im__282);
#line 791
c_rt_lib0clear(&___nl__im__283);
#line 791
//clear ___nl__bool__307;
#line 791
c_rt_lib0clear(&___nl__im__308);
#line 791
c_rt_lib0clear(&___nl__im__309);
#line 791
//clear ___nl__bool__313;
#line 791
c_rt_lib0clear(&___nl__im__314);
#line 791
c_rt_lib0clear(&___nl__im__315);
#line 791
//clear ___nl__bool__317;
#line 791
return ___nl__im__318;
#line 791
label_90:
;
#line 791
c_rt_lib0move(&___nl__im__319, c_rt_lib0priv_as(___nl__im__318, ___get_global_const(80)));
#line 791
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(860), ___nl__im__319);
#line 792
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(853), ___nl__im__259));
#line 793
goto label_78;
#line 793
label_89:
;
#line 793
c_rt_lib0move(&___nl__im__320,___get_global_const(851));
#line 793
___nl__bool__261 = nparser_priv0try_eat(___ref___im__0, ___nl__im__320);
#line 793
c_rt_lib0clear(&___nl__im__320);
#line 793
___nl__bool__261 = !___nl__bool__261;
#line 793
if(___nl__bool__261){ goto label_91;}
#line 794
___nl__bool__322 = true;
#line 794
c_rt_lib0move(&___nl__im__321, c_rt_lib0bool_to_nl_native(___nl__bool__322));
#line 794
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(928), ___nl__im__321);
#line 794
c_rt_lib0clear(&___nl__im__321);
#line 794
//clear ___nl__bool__322;
#line 795
c_rt_lib0move(&___nl__im__324, nparser_priv0parse_expr(___ref___im__0));
#line 795
___nl__bool__323 = c_rt_lib0priv_is(___nl__im__324, ___get_global_const(80));
#line 795
if(___nl__bool__323){ goto label_92;}
#line 795
c_rt_lib0clear(&___nl__im__1);
#line 795
c_rt_lib0clear(&___nl__im__4);
#line 795
//clear ___nl__bool__248;
#line 795
c_rt_lib0clear(&___nl__im__255);
#line 795
c_rt_lib0clear(&___nl__im__259);
#line 795
//clear ___nl__bool__261;
#line 795
//clear ___nl__bool__269;
#line 795
c_rt_lib0clear(&___nl__im__270);
#line 795
c_rt_lib0clear(&___nl__im__271);
#line 795
//clear ___nl__bool__281;
#line 795
c_rt_lib0clear(&___nl__im__282);
#line 795
c_rt_lib0clear(&___nl__im__283);
#line 795
//clear ___nl__bool__307;
#line 795
c_rt_lib0clear(&___nl__im__308);
#line 795
c_rt_lib0clear(&___nl__im__309);
#line 795
//clear ___nl__bool__313;
#line 795
c_rt_lib0clear(&___nl__im__314);
#line 795
c_rt_lib0clear(&___nl__im__315);
#line 795
//clear ___nl__bool__317;
#line 795
c_rt_lib0clear(&___nl__im__318);
#line 795
c_rt_lib0clear(&___nl__im__319);
#line 795
//clear ___nl__bool__323;
#line 795
return ___nl__im__324;
#line 795
label_92:
;
#line 795
c_rt_lib0move(&___nl__im__325, c_rt_lib0priv_as(___nl__im__324, ___get_global_const(80)));
#line 795
c_rt_lib0hash_set_value_dec(&___nl__im__259, ___get_global_const(860), ___nl__im__325);
#line 796
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(851), ___nl__im__259));
#line 797
goto label_78;
#line 797
label_91:
;
#line 797
label_78:
;
#line 797
//clear ___nl__bool__261;
#line 797
//clear ___nl__bool__269;
#line 797
c_rt_lib0clear(&___nl__im__270);
#line 797
c_rt_lib0clear(&___nl__im__271);
#line 797
//clear ___nl__bool__281;
#line 797
c_rt_lib0clear(&___nl__im__282);
#line 797
c_rt_lib0clear(&___nl__im__283);
#line 797
//clear ___nl__bool__307;
#line 797
c_rt_lib0clear(&___nl__im__308);
#line 797
c_rt_lib0clear(&___nl__im__309);
#line 797
//clear ___nl__bool__313;
#line 797
c_rt_lib0clear(&___nl__im__314);
#line 797
c_rt_lib0clear(&___nl__im__315);
#line 797
//clear ___nl__bool__317;
#line 797
c_rt_lib0clear(&___nl__im__318);
#line 797
c_rt_lib0clear(&___nl__im__319);
#line 797
//clear ___nl__bool__323;
#line 797
c_rt_lib0clear(&___nl__im__324);
#line 797
c_rt_lib0clear(&___nl__im__325);
#line 798
c_rt_lib0move(&___nl__im__326,___get_global_const(409));
#line 798
___nl__bool__327 = nparser_priv0eat(___ref___im__0, ___nl__im__326);
#line 798
c_rt_lib0clear(&___nl__im__326);
#line 798
//clear ___nl__bool__327;
#line 799
goto label_70;
#line 799
label_71:
;
#line 799
label_70:
;
#line 799
//clear ___nl__bool__248;
#line 799
c_rt_lib0clear(&___nl__im__255);
#line 799
c_rt_lib0clear(&___nl__im__259);
#line 800
c_rt_lib0move(&___nl__im__329,___get_global_const(942));
#line 800
c_rt_lib0move(&___nl__im__329, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__329));
#line 800
c_rt_lib0move(&___nl__im__328, ntokenizer0get_place_ws(&___nl__im__329));
#line 800
c_rt_lib0move(&___nl__string__330,___get_global_const(942));
#line 800
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__330, ___nl__im__329));
#line 800
c_rt_lib0clear(&___nl__im__329);
#line 800
c_rt_lib0clear(&___nl__string__330);
#line 801
c_rt_lib0move(&___nl__im__331, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__328));
#line 802
c_rt_lib0move(&___nl__im__333, c_rt_lib0hash_mk(2, ___get_global_const(227), ___nl__im__4, ___get_global_const(221), ___nl__im__331));
#line 802
c_rt_lib0move(&___nl__im__332, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__333));
#line 802
c_rt_lib0clear(&___nl__im__333);
#line 802
c_rt_lib0clear(&___nl__im__1);
#line 802
c_rt_lib0clear(&___nl__im__4);
#line 802
c_rt_lib0clear(&___nl__im__328);
#line 802
c_rt_lib0clear(&___nl__im__331);
#line 802
return ___nl__im__332;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void nparser_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT nparser_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nparser_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = nparser_priv0get_end_list0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
