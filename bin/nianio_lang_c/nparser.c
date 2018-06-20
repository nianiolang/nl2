
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
#include "ptd.h"
#include "own.h"
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

void nparser0anon_type00RBanon_type00refntokenizer0state_t0type0state0anon_type00refcompiler_lib0errors_t0type0errors0anon_type00im0module_name0anon_type00bool0parse_types0RE0clean(anon_type00RBanon_type00refntokenizer0state_t0type0state0anon_type00refcompiler_lib0errors_t0type0errors0anon_type00im0module_name0anon_type00bool0parse_types0RE rec) {
ntokenizer0state_t0type0clean(rec.state0field);;
c_rt_lib0delete(rec.errors0field);
c_rt_lib0delete(rec.module_name0field);
;
}
void nparser0anon_type00RBanon_type00refntokenizer0state_t0type0state0anon_type00refcompiler_lib0errors_t0type0errors0anon_type00im0module_name0anon_type00bool0parse_types0RE0free(anon_type00RBanon_type00refntokenizer0state_t0type0state0anon_type00refcompiler_lib0errors_t0type0errors0anon_type00im0module_name0anon_type00bool0parse_types0RE *rec) {
nparser0anon_type00RBanon_type00refntokenizer0state_t0type0state0anon_type00refcompiler_lib0errors_t0type0errors0anon_type00im0module_name0anon_type00bool0parse_types0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
void nparser0state_t0type0clean(nparser0state_t0type rec) {
ntokenizer0state_t0type0clean(rec.state0field);;
c_rt_lib0delete(rec.errors0field);
c_rt_lib0delete(rec.module_name0field);
;
}
void nparser0state_t0type0free(nparser0state_t0type *rec) {
nparser0state_t0type0clean(*rec);
free_mem(rec, sizeof(*rec));
}
ImmT  nparser_priv0get_end_list();
ImmT  nparser_priv0add_error(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
bool  nparser_priv0eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
bool  nparser_priv0try_eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
nast0module_t0type nparser_priv0parse_module(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  nparser_priv0parse_fun_arg_list(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_fun_def(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
ImmT  nparser_priv0parse_fun_val_arg_list(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_expr_list(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_fun_val_arg(nparser0state_t0type* ___ref___rec__0);
nast0fun_label_t0type nparser_priv0parse_fun_label(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_label(nparser0state_t0type* ___ref___rec__0);
nast0value_t0type nparser_priv0parse_hash_key(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_hash(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_arr(nparser0state_t0type* ___ref___rec__0);
nparser0try_value_t0type nparser_priv0parse_expr(nparser0state_t0type* ___ref___rec__0);
nparser0try_value_t0type nparser_priv0parse_type(nparser0state_t0type* ___ref___rec__0);
nparser0try_value_t0type nparser_priv0parse_expr_rec_left(nparser0state_t0type* ___ref___rec__0,nast0value_t0type ___nl__im__1,INT  ___nl__int__2);
nparser0try_value_t0type nparser_priv0parse_expr_rec(nparser0state_t0type* ___ref___rec__0,INT  ___nl__int__1);
nast0value_t0type nparser_priv0get_value_nop(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0eat_text(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_variant_label(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_variant(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0check_lvalue(nparser0state_t0type* ___ref___rec__0,nast0value_t0type ___nl__im__1);
nast0variant_decl_t0type nparser_priv0parse_variant_decl(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_var_decl(nparser0state_t0type* ___ref___rec__0);
nast0variable_declaration_t0type nparser_priv0parse_var_decl_sim(nparser0state_t0type* ___ref___rec__0);
nast0variable_declaration_t0type nparser_priv0parse_ref_var_decl_sim(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_cond(nparser0state_t0type* ___ref___rec__0);
nparser0try_cmd_t0type nparser_priv0parse_block(nparser0state_t0type* ___ref___rec__0);
ImmT  nparser_priv0parse_try_ensure(nparser0state_t0type* ___ref___rec__0);
nast0debug_t0type nparser_priv0get_debug_from_begin(nparser0state_t0type* ___ref___rec__0);
nparser0try_cmd_t0type nparser_priv0parse_cmd(nparser0state_t0type* ___ref___rec__0);


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
c_rt_lib0move(&___nl__im__2,___get_global_const(408));
#line 19
c_rt_lib0move(&___nl__im__3,___get_global_const(868));
#line 19
c_rt_lib0move(&___nl__im__4,___get_global_const(985));
#line 19
c_rt_lib0move(&___nl__im__5,___get_global_const(870));
#line 19
c_rt_lib0move(&___nl__im__6,___get_global_const(871));
#line 19
c_rt_lib0move(&___nl__im__7,___get_global_const(872));
#line 19
c_rt_lib0move(&___nl__im__8,___get_global_const(873));
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
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_const(986), ___get_global_const(987)));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(842)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 26
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 27
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 27
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(964), ___nl__im__2, ___get_global_const(51), ___nl__im__3, ___get_global_const(211), ___nl__im__4, ___get_global_const(988), ___nl__im__5));
#line 27
c_rt_lib0clear(&___nl__im__2);
#line 27
c_rt_lib0clear(&___nl__im__3);
#line 27
c_rt_lib0clear(&___nl__im__4);
#line 27
c_rt_lib0clear(&___nl__im__5);
#line 27
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
#line 27
c_rt_lib0clear(&___nl__im__1);
#line 27
return ___nl__im__0;
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
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
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(927)));
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 32
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 32
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__2, ___get_global_const(79), ___nl__im__3));
#line 32
c_rt_lib0clear(&___nl__im__2);
#line 32
c_rt_lib0clear(&___nl__im__3);
#line 32
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 32
c_rt_lib0clear(&___nl__im__1);
#line 32
return ___nl__im__0;
#line 32
c_rt_lib0clear(&___nl__im__0);
#line 32
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
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(312)));
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

ImmT  nparser0sparse(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
nparser0state_t0type ___nl__rec__3 = {};
ImmT * ___nl__im_ptr__4 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
INT * ___nl__int_ptr__7 = NULL;
INT * ___nl__int_ptr__8 = NULL;
ImmT * ___nl__im_ptr__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
INT * ___nl__int_ptr__11 = NULL;
INT * ___nl__int_ptr__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT * ___nl__im_ptr__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT * ___nl__im_ptr__23 = NULL;
ImmT * ___nl__im_ptr__24 = NULL;
bool * ___nl__bool_ptr__25 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT * ___nl__im_ptr__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
#line 43
;
#line 43
___nl__im_ptr__4 = &(___nl__rec__3.errors0field);
#line 44
c_rt_lib0move(___nl__im_ptr__4, c_rt_lib0array_mk(0));
#line 44
___nl__im_ptr__4 = NULL;
#line 44
___nl__rec_ptr__5 = &(___nl__rec__3.state0field);
#line 45
;
#line 45
___nl__im_ptr__6 = &(___nl__rec_ptr__5->text0field);
#line 46
c_rt_lib0move(___nl__im_ptr__6, c_rt_lib0array_mk(1, ___nl__im__0));
#line 46
___nl__im_ptr__6 = NULL;
#line 46
___nl__int_ptr__7 = &(___nl__rec_ptr__5->len0field);
#line 47
(*___nl__int_ptr__7) = string0length(___nl__im__0);
#line 47
___nl__int_ptr__7 = NULL;
#line 47
___nl__int_ptr__8 = &(___nl__rec_ptr__5->pos0field);
#line 48
(*___nl__int_ptr__8) = 0;
#line 48
___nl__int_ptr__8 = NULL;
#line 48
___nl__im_ptr__9 = &(___nl__rec_ptr__5->type0field);
#line 49
c_rt_lib0move(___nl__im_ptr__9, c_rt_lib0ov_mk_none(___get_global_const(938)));
#line 49
___nl__im_ptr__9 = NULL;
#line 49
___nl__im_ptr__10 = &(___nl__rec_ptr__5->next_token0field);
#line 50
c_rt_lib0move(___nl__im_ptr__10,___get_global_const(37));
#line 50
___nl__im_ptr__10 = NULL;
#line 50
___nl__int_ptr__11 = &(___nl__rec_ptr__5->ln_nr0field);
#line 51
(*___nl__int_ptr__11) = 1;
#line 51
___nl__int_ptr__11 = NULL;
#line 51
___nl__int_ptr__12 = &(___nl__rec_ptr__5->ln_pos0field);
#line 52
(*___nl__int_ptr__12) = 1;
#line 52
___nl__int_ptr__12 = NULL;
#line 52
___nl__im_ptr__13 = &(___nl__rec_ptr__5->place0field);
#line 53
___nl__int__14 = 1;
#line 53
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 53
___nl__int__16 = 0;
#line 53
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__16));
#line 53
c_rt_lib0move(___nl__im_ptr__13, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__im__15, ___get_global_const(951), ___nl__im__17));
#line 53
//clear ___nl__int__14;
#line 53
c_rt_lib0clear(&___nl__im__15);
#line 53
//clear ___nl__int__16;
#line 53
c_rt_lib0clear(&___nl__im__17);
#line 53
___nl__im_ptr__13 = NULL;
#line 53
___nl__im_ptr__18 = &(___nl__rec_ptr__5->place_ws0field);
#line 54
___nl__int__19 = 1;
#line 54
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 54
___nl__int__21 = 0;
#line 54
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 54
c_rt_lib0move(___nl__im_ptr__18, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__im__20, ___get_global_const(951), ___nl__im__22));
#line 54
//clear ___nl__int__19;
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
//clear ___nl__int__21;
#line 54
c_rt_lib0clear(&___nl__im__22);
#line 54
___nl__im_ptr__18 = NULL;
#line 54
___nl__im_ptr__23 = &(___nl__rec_ptr__5->last_comment0field);
#line 55
c_rt_lib0move(___nl__im_ptr__23,___get_global_const(37));
#line 55
___nl__im_ptr__23 = NULL;
#line 55
___nl__rec_ptr__5 = NULL;
#line 55
___nl__im_ptr__24 = &(___nl__rec__3.module_name0field);
#line 57
c_rt_lib0copy(___nl__im_ptr__24, ___nl__im__1);
#line 57
___nl__im_ptr__24 = NULL;
#line 57
___nl__bool_ptr__25 = &(___nl__rec__3.parse_types0field);
#line 58
(*___nl__bool_ptr__25) = ___nl__bool__2;
#line 58
___nl__bool_ptr__25 = NULL;
#line 60
___nl__rec_ptr__26 = &(___nl__rec__3.state0field);
#line 60
c_rt_lib0delete(ntokenizer0init(___nl__rec_ptr__26));
#line 60
___nl__rec_ptr__26 = NULL;
#line 61
c_rt_lib0move(&___nl__im__27, nparser_priv0parse_module(&___nl__rec__3, ___nl__im__1));
#line 62
___nl__im_ptr__31 = &(___nl__rec__3.errors0field);
#line 62
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 62
___nl__im_ptr__31 = NULL;
#line 62
___nl__int__29 = c_rt_lib0array_len(___nl__im__30);
#line 62
c_rt_lib0clear(&___nl__im__30);
#line 62
___nl__int__32 = 0;
#line 62
___nl__int__33 = ___nl__int__29 > ___nl__int__32;
#line 62
___nl__bool__28 = ___nl__int__33;
#line 62
//clear ___nl__int__29;
#line 62
//clear ___nl__int__32;
#line 62
//clear ___nl__int__33;
#line 62
___nl__bool__28 = !___nl__bool__28;
#line 62
if(___nl__bool__28){ goto label_2;}
#line 62
___nl__im_ptr__36 = &(___nl__rec__3.errors0field);
#line 62
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 62
___nl__im_ptr__36 = NULL;
#line 62
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(123), ___nl__im__35));
#line 62
c_rt_lib0clear(&___nl__im__35);
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
//clear ___nl__bool__2;
#line 62
nparser0state_t0type0clean(___nl__rec__3);;
#line 62
c_rt_lib0clear(&___nl__im__27);
#line 62
//clear ___nl__bool__28;
#line 62
return ___nl__im__34;
#line 62
goto label_1;
#line 62
label_2:
;
#line 62
label_1:
;
#line 62
//clear ___nl__bool__28;
#line 62
c_rt_lib0clear(&___nl__im__34);
#line 63
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__27));
#line 63
c_rt_lib0clear(&___nl__im__0);
#line 63
c_rt_lib0clear(&___nl__im__1);
#line 63
//clear ___nl__bool__2;
#line 63
nparser0state_t0type0clean(___nl__rec__3);;
#line 63
c_rt_lib0clear(&___nl__im__27);
#line 63
return ___nl__im__37;
}

ImmT  nparser_priv0add_error(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
INT  ___nl__int__2 = 0;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
INT  ___nl__int__4 = 0;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 67
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 67
___nl__int__2 = ntokenizer0get_line(___nl__rec_ptr__3);
#line 67
___nl__rec_ptr__3 = NULL;
#line 68
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 68
___nl__int__4 = ntokenizer0get_column(___nl__rec_ptr__5);
#line 68
___nl__rec_ptr__5 = NULL;
#line 69
___nl__im_ptr__6 = &((*___ref___rec__0).errors0field);
#line 69
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__2));
#line 69
___nl__im_ptr__10 = &((*___ref___rec__0).module_name0field);
#line 69
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 69
___nl__im_ptr__10 = NULL;
#line 69
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__4));
#line 69
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(123)));
#line 69
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_const(152), ___nl__im__8, ___get_global_const(150), ___nl__im__9, ___get_global_const(203), ___nl__im__11, ___get_global_const(155), ___nl__im__1, ___get_global_const(204), ___nl__im__12));
#line 69
c_rt_lib0clear(&___nl__im__8);
#line 69
c_rt_lib0clear(&___nl__im__9);
#line 69
c_rt_lib0clear(&___nl__im__11);
#line 69
c_rt_lib0clear(&___nl__im__12);
#line 69
c_rt_lib0delete(array0push(___nl__im_ptr__6, ___nl__im__7));
#line 69
___nl__im_ptr__6 = NULL;
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 69
c_rt_lib0clear(&___nl__im__1);
#line 69
//clear ___nl__int__2;
#line 69
//clear ___nl__int__4;
#line 69
return NULL;
}

bool  nparser_priv0eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
bool  ___nl__bool__2 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__11 = NULL;
bool  ___nl__bool__12 = false;
#line 73
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 73
___nl__bool__2 = ntokenizer0eat_token(___nl__rec_ptr__3, ___nl__im__1);
#line 73
___nl__rec_ptr__3 = NULL;
#line 73
___nl__bool__2 = !___nl__bool__2;
#line 73
if(___nl__bool__2){ goto label_2;}
#line 73
___nl__bool__4 = true;
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
//clear ___nl__bool__2;
#line 73
return ___nl__bool__4;
#line 73
goto label_1;
#line 73
label_2:
;
#line 73
label_1:
;
#line 73
//clear ___nl__bool__2;
#line 73
//clear ___nl__bool__4;
#line 74
c_rt_lib0move(&___nl__im__8,___get_global_const(989));
#line 74
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 74
c_rt_lib0clear(&___nl__im__8);
#line 74
c_rt_lib0move(&___nl__im__9, string0lf());
#line 74
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 74
c_rt_lib0clear(&___nl__im__7);
#line 74
c_rt_lib0clear(&___nl__im__9);
#line 74
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 74
c_rt_lib0move(&___nl__im__10, ntokenizer0info(___nl__rec_ptr__11));
#line 74
___nl__rec_ptr__11 = NULL;
#line 74
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 74
c_rt_lib0clear(&___nl__im__6);
#line 74
c_rt_lib0clear(&___nl__im__10);
#line 74
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__5));
#line 74
c_rt_lib0clear(&___nl__im__5);
#line 75
___nl__bool__12 = false;
#line 75
c_rt_lib0clear(&___nl__im__1);
#line 75
return ___nl__bool__12;
}

bool  nparser_priv0try_eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
bool  ___nl__bool__2 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
#line 79
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 79
___nl__bool__2 = ntokenizer0eat_token(___nl__rec_ptr__3, ___nl__im__1);
#line 79
___nl__rec_ptr__3 = NULL;
#line 79
c_rt_lib0clear(&___nl__im__1);
#line 79
return ___nl__bool__2;
}

nast0module_t0type nparser_priv0parse_module(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ntokenizer0state_t0type* ___nl__rec_ptr__12 = NULL;
bool  ___nl__bool__13 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
bool  ___nl__bool__26 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__string__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
#line 83
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 83
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 83
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(166), ___nl__im__1, ___get_global_const(171), ___nl__im__3, ___get_global_const(164), ___nl__im__4, ___get_global_const(931), ___nl__im__5));
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 84
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 84
c_rt_lib0move(&___nl__im__7, ntokenizer0get_last_comment(___nl__rec_ptr__8));
#line 84
___nl__rec_ptr__8 = NULL;
#line 84
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 84
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(931), ___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__7);
#line 85
label_2:
;
#line 85
c_rt_lib0move(&___nl__im__10,___get_global_const(990));
#line 85
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__10);
#line 85
c_rt_lib0clear(&___nl__im__10);
#line 85
___nl__bool__9 = !___nl__bool__9;
#line 85
if(___nl__bool__9){ goto label_1;}
#line 86
___nl__rec_ptr__12 = &((*___ref___rec__0).state0field);
#line 86
___nl__int__11 = ntokenizer0get_line(___nl__rec_ptr__12);
#line 86
___nl__rec_ptr__12 = NULL;
#line 87
___nl__rec_ptr__14 = &((*___ref___rec__0).state0field);
#line 87
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 87
___nl__bool__13 = ntokenizer0is_type(___nl__rec_ptr__14, ___nl__im__15);
#line 87
___nl__rec_ptr__14 = NULL;
#line 87
c_rt_lib0clear(&___nl__im__15);
#line 87
___nl__bool__13 = !___nl__bool__13;
#line 87
if(___nl__bool__13){ goto label_4;}
#line 88
c_rt_lib0move(&___nl__im__16,___get_global_const(171));
#line 88
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 89
___nl__rec_ptr__19 = &((*___ref___rec__0).state0field);
#line 89
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 89
c_rt_lib0move(&___nl__im__18, ntokenizer0eat_type(___nl__rec_ptr__19, ___nl__im__20));
#line 89
___nl__rec_ptr__19 = NULL;
#line 89
c_rt_lib0clear(&___nl__im__20);
#line 89
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__11));
#line 89
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__im__18, ___get_global_const(152), ___nl__im__21));
#line 89
c_rt_lib0clear(&___nl__im__18);
#line 89
c_rt_lib0clear(&___nl__im__21);
#line 89
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 89
c_rt_lib0move(&___nl__string__22,___get_global_const(171));
#line 89
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__22, ___nl__im__16));
#line 89
c_rt_lib0clear(&___nl__im__16);
#line 89
c_rt_lib0clear(&___nl__im__17);
#line 89
c_rt_lib0clear(&___nl__string__22);
#line 92
goto label_3;
#line 92
label_4:
;
#line 93
c_rt_lib0move(&___nl__im__23,___get_global_const(992));
#line 93
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__23));
#line 93
c_rt_lib0clear(&___nl__im__23);
#line 94
goto label_3;
#line 94
label_3:
;
#line 94
//clear ___nl__bool__13;
#line 95
c_rt_lib0move(&___nl__im__24,___get_global_const(408));
#line 95
___nl__bool__25 = nparser_priv0eat(___ref___rec__0, ___nl__im__24);
#line 95
c_rt_lib0clear(&___nl__im__24);
#line 95
//clear ___nl__bool__25;
#line 95
//clear ___nl__int__11;
#line 96
goto label_2;
#line 96
label_1:
;
#line 97
label_6:
;
#line 97
___nl__rec_ptr__27 = &((*___ref___rec__0).state0field);
#line 97
c_rt_lib0move(&___nl__im__28,___get_global_const(688));
#line 97
___nl__bool__26 = ntokenizer0next_is(___nl__rec_ptr__27, ___nl__im__28);
#line 97
___nl__rec_ptr__27 = NULL;
#line 97
c_rt_lib0clear(&___nl__im__28);
#line 97
___nl__bool__26 = !___nl__bool__26;
#line 97
if(___nl__bool__26){ goto label_5;}
#line 98
c_rt_lib0move(&___nl__im__29, nparser_priv0parse_fun_def(___ref___rec__0, ___nl__im__1));
#line 98
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(80));
#line 98
if(___nl__bool__30){ goto label_8;}
#line 100
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(79));
#line 100
if(___nl__bool__30){ goto label_9;}
#line 100
c_rt_lib0move(&___nl__im__31,___get_global_const(16));
#line 100
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(2, ___nl__im__31, ___nl__im__29));
#line 100
nl_die_arg(___nl__im__31);
#line 98
label_8:
;
#line 98
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(80)));
#line 98
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 99
c_rt_lib0move(&___nl__im__34,___get_global_const(164));
#line 99
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__34));
#line 99
c_rt_lib0delete(array0push(&___nl__im__34, ___nl__im__32));
#line 99
c_rt_lib0move(&___nl__string__35,___get_global_const(164));
#line 99
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__35, ___nl__im__34));
#line 99
c_rt_lib0clear(&___nl__im__34);
#line 99
c_rt_lib0clear(&___nl__string__35);
#line 100
goto label_7;
#line 100
label_9:
;
#line 100
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(79)));
#line 100
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 101
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__36));
#line 102
c_rt_lib0clear(&___nl__im__1);
#line 102
//clear ___nl__bool__9;
#line 102
//clear ___nl__int__11;
#line 102
//clear ___nl__bool__26;
#line 102
c_rt_lib0clear(&___nl__im__29);
#line 102
//clear ___nl__bool__30;
#line 102
c_rt_lib0clear(&___nl__im__31);
#line 102
c_rt_lib0clear(&___nl__im__32);
#line 102
c_rt_lib0clear(&___nl__im__33);
#line 102
c_rt_lib0clear(&___nl__im__36);
#line 102
c_rt_lib0clear(&___nl__im__37);
#line 102
return ___nl__im__2;
#line 103
goto label_7;
#line 103
label_7:
;
#line 103
c_rt_lib0clear(&___nl__im__29);
#line 103
//clear ___nl__bool__30;
#line 103
c_rt_lib0clear(&___nl__im__31);
#line 103
c_rt_lib0clear(&___nl__im__32);
#line 103
c_rt_lib0clear(&___nl__im__33);
#line 103
c_rt_lib0clear(&___nl__im__36);
#line 103
c_rt_lib0clear(&___nl__im__37);
#line 104
goto label_6;
#line 104
label_5:
;
#line 105
___nl__rec_ptr__39 = &((*___ref___rec__0).state0field);
#line 105
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_const(938)));
#line 105
___nl__bool__38 = ntokenizer0is_type(___nl__rec_ptr__39, ___nl__im__40);
#line 105
___nl__rec_ptr__39 = NULL;
#line 105
c_rt_lib0clear(&___nl__im__40);
#line 105
___nl__bool__38 = !___nl__bool__38;
#line 105
___nl__bool__38 = !___nl__bool__38;
#line 105
if(___nl__bool__38){ goto label_11;}
#line 105
c_rt_lib0move(&___nl__im__41,___get_global_const(993));
#line 105
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__41));
#line 105
c_rt_lib0clear(&___nl__im__41);
#line 105
goto label_10;
#line 105
label_11:
;
#line 105
label_10:
;
#line 105
//clear ___nl__bool__38;
#line 106
c_rt_lib0clear(&___nl__im__1);
#line 106
//clear ___nl__bool__9;
#line 106
//clear ___nl__int__11;
#line 106
//clear ___nl__bool__26;
#line 106
c_rt_lib0clear(&___nl__im__29);
#line 106
//clear ___nl__bool__30;
#line 106
c_rt_lib0clear(&___nl__im__31);
#line 106
c_rt_lib0clear(&___nl__im__32);
#line 106
c_rt_lib0clear(&___nl__im__33);
#line 106
c_rt_lib0clear(&___nl__im__36);
#line 106
c_rt_lib0clear(&___nl__im__37);
#line 106
return ___nl__im__2;
}

ImmT  nparser_priv0parse_fun_arg_list(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
#line 113
c_rt_lib0move(&___nl__im__1,___get_global_const(419));
#line 113
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
//clear ___nl__bool__2;
#line 114
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 115
label_2:
;
#line 115
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 115
c_rt_lib0move(&___nl__im__6,___get_global_const(298));
#line 115
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__5, ___nl__im__6);
#line 115
___nl__rec_ptr__5 = NULL;
#line 115
c_rt_lib0clear(&___nl__im__6);
#line 115
___nl__bool__4 = !___nl__bool__4;
#line 115
___nl__bool__4 = !___nl__bool__4;
#line 115
if(___nl__bool__4){ goto label_1;}
#line 116
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 116
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 116
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 116
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 116
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(265), ___nl__im__8, ___get_global_const(204), ___nl__im__9, ___get_global_const(166), ___nl__im__10, ___get_global_const(453), ___nl__im__11));
#line 116
c_rt_lib0clear(&___nl__im__8);
#line 116
c_rt_lib0clear(&___nl__im__9);
#line 116
c_rt_lib0clear(&___nl__im__10);
#line 116
c_rt_lib0clear(&___nl__im__11);
#line 117
c_rt_lib0move(&___nl__im__13,___get_global_const(40));
#line 117
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__13);
#line 117
c_rt_lib0clear(&___nl__im__13);
#line 117
___nl__bool__12 = !___nl__bool__12;
#line 117
if(___nl__bool__12){ goto label_4;}
#line 117
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 117
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 117
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(265), ___nl__im__14);
#line 117
c_rt_lib0clear(&___nl__im__14);
#line 117
c_rt_lib0clear(&___nl__im__15);
#line 117
goto label_3;
#line 117
label_4:
;
#line 117
label_3:
;
#line 117
//clear ___nl__bool__12;
#line 118
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 118
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 118
___nl__bool__16 = ntokenizer0is_type(___nl__rec_ptr__17, ___nl__im__18);
#line 118
___nl__rec_ptr__17 = NULL;
#line 118
c_rt_lib0clear(&___nl__im__18);
#line 118
___nl__bool__16 = !___nl__bool__16;
#line 118
if(___nl__bool__16){ goto label_6;}
#line 119
___nl__rec_ptr__21 = &((*___ref___rec__0).state0field);
#line 119
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 119
c_rt_lib0move(&___nl__im__20, ntokenizer0eat_type(___nl__rec_ptr__21, ___nl__im__22));
#line 119
___nl__rec_ptr__21 = NULL;
#line 119
c_rt_lib0clear(&___nl__im__22);
#line 119
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 119
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(166), ___nl__im__19);
#line 119
c_rt_lib0clear(&___nl__im__19);
#line 119
c_rt_lib0clear(&___nl__im__20);
#line 120
goto label_5;
#line 120
label_6:
;
#line 121
c_rt_lib0move(&___nl__im__23,___get_global_const(994));
#line 121
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__23));
#line 121
c_rt_lib0clear(&___nl__im__23);
#line 122
goto label_5;
#line 122
label_5:
;
#line 122
//clear ___nl__bool__16;
#line 123
c_rt_lib0move(&___nl__im__25,___get_global_const(483));
#line 123
___nl__bool__24 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__25);
#line 123
c_rt_lib0clear(&___nl__im__25);
#line 123
___nl__bool__24 = !___nl__bool__24;
#line 123
if(___nl__bool__24){ goto label_8;}
#line 124
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_type(___ref___rec__0));
#line 124
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(80));
#line 124
if(___nl__bool__27){ goto label_9;}
#line 124
c_rt_lib0clear(&___nl__im__3);
#line 124
//clear ___nl__bool__4;
#line 124
c_rt_lib0clear(&___nl__im__7);
#line 124
//clear ___nl__bool__24;
#line 124
c_rt_lib0clear(&___nl__im__26);
#line 124
//clear ___nl__bool__27;
#line 124
return ___nl__im__28;
#line 124
label_9:
;
#line 124
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(80)));
#line 125
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__im__26));
#line 125
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 125
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(204), ___nl__im__29);
#line 125
c_rt_lib0clear(&___nl__im__29);
#line 125
c_rt_lib0clear(&___nl__im__30);
#line 126
goto label_7;
#line 126
label_8:
;
#line 126
label_7:
;
#line 126
//clear ___nl__bool__24;
#line 126
c_rt_lib0clear(&___nl__im__26);
#line 126
//clear ___nl__bool__27;
#line 126
c_rt_lib0clear(&___nl__im__28);
#line 127
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__7));
#line 128
c_rt_lib0move(&___nl__im__32,___get_global_const(294));
#line 128
___nl__bool__31 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__32);
#line 128
c_rt_lib0clear(&___nl__im__32);
#line 128
___nl__bool__31 = !___nl__bool__31;
#line 128
___nl__bool__31 = !___nl__bool__31;
#line 128
if(___nl__bool__31){ goto label_11;}
#line 128
goto label_1;
#line 128
goto label_10;
#line 128
label_11:
;
#line 128
label_10:
;
#line 128
//clear ___nl__bool__31;
#line 128
c_rt_lib0clear(&___nl__im__7);
#line 129
goto label_2;
#line 129
label_1:
;
#line 130
c_rt_lib0move(&___nl__im__33,___get_global_const(298));
#line 130
___nl__bool__34 = nparser_priv0eat(___ref___rec__0, ___nl__im__33);
#line 130
c_rt_lib0clear(&___nl__im__33);
#line 130
//clear ___nl__bool__34;
#line 131
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
//clear ___nl__bool__4;
#line 131
c_rt_lib0clear(&___nl__im__7);
#line 131
return ___nl__im__35;
}

ImmT  nparser_priv0parse_fun_def(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ntokenizer0state_t0type* ___nl__rec_ptr__7 = NULL;
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
ntokenizer0state_t0type* ___nl__rec_ptr__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__string__50 = NULL;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
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
#line 139
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 139
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(204), ___nl__im__4, ___get_global_const(453), ___nl__im__5));
#line 139
c_rt_lib0clear(&___nl__im__4);
#line 139
c_rt_lib0clear(&___nl__im__5);
#line 140
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 140
___nl__int__6 = ntokenizer0get_line(___nl__rec_ptr__7);
#line 140
___nl__rec_ptr__7 = NULL;
#line 140
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 141
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 142
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 143
c_rt_lib0move(&___nl__im__12, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 143
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(881)));
#line 143
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(220), ___nl__im__12, ___get_global_const(226), ___nl__im__13));
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__13);
#line 144
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(427)));
#line 145
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 145
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(7, ___get_global_const(386), ___nl__im__3, ___get_global_const(152), ___nl__im__8, ___get_global_const(264), ___nl__im__9, ___get_global_const(166), ___nl__im__10, ___get_global_const(226), ___nl__im__11, ___get_global_const(208), ___nl__im__14, ___get_global_const(165), ___nl__im__15));
#line 145
c_rt_lib0clear(&___nl__im__3);
#line 145
//clear ___nl__int__6;
#line 145
c_rt_lib0clear(&___nl__im__8);
#line 145
c_rt_lib0clear(&___nl__im__9);
#line 145
c_rt_lib0clear(&___nl__im__10);
#line 145
c_rt_lib0clear(&___nl__im__11);
#line 145
c_rt_lib0clear(&___nl__im__14);
#line 145
c_rt_lib0clear(&___nl__im__15);
#line 147
c_rt_lib0move(&___nl__im__16,___get_global_const(688));
#line 147
___nl__bool__17 = nparser_priv0eat(___ref___rec__0, ___nl__im__16);
#line 147
c_rt_lib0clear(&___nl__im__16);
#line 147
//clear ___nl__bool__17;
#line 148
c_rt_lib0move(&___nl__im__19, nparser_priv0eat_text(___ref___rec__0));
#line 148
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(80));
#line 148
if(___nl__bool__18){ goto label_1;}
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
//clear ___nl__bool__18;
#line 148
return ___nl__im__19;
#line 148
label_1:
;
#line 148
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(80)));
#line 148
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(166), ___nl__im__20);
#line 149
c_rt_lib0move(&___nl__im__22,___get_global_const(35));
#line 149
___nl__bool__21 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__22);
#line 149
c_rt_lib0clear(&___nl__im__22);
#line 149
___nl__bool__21 = !___nl__bool__21;
#line 149
if(___nl__bool__21){ goto label_3;}
#line 150
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(166)));
#line 150
___nl__bool__23 = c_rt_lib0ne(___nl__im__24, ___nl__im__1);
#line 150
c_rt_lib0clear(&___nl__im__24);
#line 150
___nl__bool__23 = !___nl__bool__23;
#line 150
if(___nl__bool__23){ goto label_5;}
#line 151
c_rt_lib0move(&___nl__im__28,___get_global_const(995));
#line 151
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(166)));
#line 151
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 151
c_rt_lib0clear(&___nl__im__28);
#line 151
c_rt_lib0clear(&___nl__im__29);
#line 151
c_rt_lib0move(&___nl__im__30,___get_global_const(996));
#line 151
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 151
c_rt_lib0clear(&___nl__im__27);
#line 151
c_rt_lib0clear(&___nl__im__30);
#line 151
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__1));
#line 151
c_rt_lib0clear(&___nl__im__26);
#line 151
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__25));
#line 151
c_rt_lib0clear(&___nl__im__25);
#line 152
goto label_4;
#line 152
label_5:
;
#line 152
label_4:
;
#line 152
//clear ___nl__bool__23;
#line 153
c_rt_lib0move(&___nl__im__32, nparser_priv0eat_text(___ref___rec__0));
#line 153
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(80));
#line 153
if(___nl__bool__31){ goto label_6;}
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
//clear ___nl__bool__18;
#line 153
c_rt_lib0clear(&___nl__im__19);
#line 153
c_rt_lib0clear(&___nl__im__20);
#line 153
//clear ___nl__bool__21;
#line 153
//clear ___nl__bool__31;
#line 153
return ___nl__im__32;
#line 153
label_6:
;
#line 153
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(80)));
#line 153
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(166), ___nl__im__33);
#line 154
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(209)));
#line 154
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 154
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(208), ___nl__im__34);
#line 154
c_rt_lib0clear(&___nl__im__34);
#line 154
c_rt_lib0clear(&___nl__im__35);
#line 155
goto label_2;
#line 155
label_3:
;
#line 155
label_2:
;
#line 155
//clear ___nl__bool__21;
#line 155
//clear ___nl__bool__31;
#line 155
c_rt_lib0clear(&___nl__im__32);
#line 155
c_rt_lib0clear(&___nl__im__33);
#line 156
c_rt_lib0move(&___nl__im__37, nparser_priv0parse_fun_arg_list(___ref___rec__0));
#line 156
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(80));
#line 156
if(___nl__bool__36){ goto label_7;}
#line 156
c_rt_lib0clear(&___nl__im__1);
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 156
//clear ___nl__bool__18;
#line 156
c_rt_lib0clear(&___nl__im__19);
#line 156
c_rt_lib0clear(&___nl__im__20);
#line 156
//clear ___nl__bool__36;
#line 156
return ___nl__im__37;
#line 156
label_7:
;
#line 156
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__37, ___get_global_const(80)));
#line 156
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(264), ___nl__im__38);
#line 157
___nl__rec_ptr__40 = &((*___ref___rec__0).state0field);
#line 157
c_rt_lib0move(&___nl__im__41,___get_global_const(483));
#line 157
___nl__bool__39 = ntokenizer0next_is(___nl__rec_ptr__40, ___nl__im__41);
#line 157
___nl__rec_ptr__40 = NULL;
#line 157
c_rt_lib0clear(&___nl__im__41);
#line 157
___nl__bool__39 = !___nl__bool__39;
#line 157
if(___nl__bool__39){ goto label_9;}
#line 158
c_rt_lib0move(&___nl__im__42,___get_global_const(483));
#line 158
___nl__bool__43 = nparser_priv0eat(___ref___rec__0, ___nl__im__42);
#line 158
c_rt_lib0clear(&___nl__im__42);
#line 158
//clear ___nl__bool__43;
#line 159
c_rt_lib0move(&___nl__im__46, nparser_priv0parse_type(___ref___rec__0));
#line 159
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(80));
#line 159
if(___nl__bool__45){ goto label_10;}
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
//clear ___nl__bool__18;
#line 159
c_rt_lib0clear(&___nl__im__19);
#line 159
c_rt_lib0clear(&___nl__im__20);
#line 159
//clear ___nl__bool__36;
#line 159
c_rt_lib0clear(&___nl__im__37);
#line 159
c_rt_lib0clear(&___nl__im__38);
#line 159
//clear ___nl__bool__39;
#line 159
c_rt_lib0clear(&___nl__im__44);
#line 159
//clear ___nl__bool__45;
#line 159
return ___nl__im__46;
#line 159
label_10:
;
#line 159
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__46, ___get_global_const(80)));
#line 160
c_rt_lib0move(&___nl__im__47,___get_global_const(386));
#line 160
c_rt_lib0move(&___nl__im__47, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__47));
#line 160
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__im__44));
#line 160
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 160
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_const(204), ___nl__im__48);
#line 160
c_rt_lib0move(&___nl__string__50,___get_global_const(386));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__50, ___nl__im__47));
#line 160
c_rt_lib0clear(&___nl__im__47);
#line 160
c_rt_lib0clear(&___nl__im__48);
#line 160
c_rt_lib0clear(&___nl__im__49);
#line 160
c_rt_lib0clear(&___nl__string__50);
#line 161
goto label_8;
#line 161
label_9:
;
#line 161
label_8:
;
#line 161
//clear ___nl__bool__39;
#line 161
c_rt_lib0clear(&___nl__im__44);
#line 161
//clear ___nl__bool__45;
#line 161
c_rt_lib0clear(&___nl__im__46);
#line 162
c_rt_lib0move(&___nl__im__52, nparser_priv0parse_block(___ref___rec__0));
#line 162
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__52, ___get_global_const(80));
#line 162
if(___nl__bool__51){ goto label_11;}
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 162
//clear ___nl__bool__18;
#line 162
c_rt_lib0clear(&___nl__im__19);
#line 162
c_rt_lib0clear(&___nl__im__20);
#line 162
//clear ___nl__bool__36;
#line 162
c_rt_lib0clear(&___nl__im__37);
#line 162
c_rt_lib0clear(&___nl__im__38);
#line 162
//clear ___nl__bool__51;
#line 162
return ___nl__im__52;
#line 162
label_11:
;
#line 162
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(80)));
#line 162
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(226), ___nl__im__53);
#line 163
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(226)));
#line 163
c_rt_lib0move(&___nl__im__54, ptd_parser0fun_def_to_ptd(___nl__im__55));
#line 163
c_rt_lib0clear(&___nl__im__55);
#line 163
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(79));
#line 163
if(___nl__bool__56){ goto label_13;}
#line 167
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(80));
#line 167
if(___nl__bool__56){ goto label_14;}
#line 167
c_rt_lib0move(&___nl__im__57,___get_global_const(16));
#line 167
c_rt_lib0move(&___nl__im__57, c_rt_lib0array_mk(2, ___nl__im__57, ___nl__im__54));
#line 167
nl_die_arg(___nl__im__57);
#line 163
label_13:
;
#line 163
c_rt_lib0move(&___nl__im__59, c_rt_lib0priv_as(___nl__im__54, ___get_global_const(79)));
#line 163
c_rt_lib0copy(&___nl__im__58, ___nl__im__59);
#line 166
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 166
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 166
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(165), ___nl__im__60);
#line 166
c_rt_lib0clear(&___nl__im__60);
#line 166
c_rt_lib0clear(&___nl__im__61);
#line 167
goto label_12;
#line 167
label_14:
;
#line 167
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__54, ___get_global_const(80)));
#line 167
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 168
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_const(77), ___nl__im__62));
#line 168
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 168
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(165), ___nl__im__64);
#line 168
c_rt_lib0clear(&___nl__im__64);
#line 168
c_rt_lib0clear(&___nl__im__65);
#line 169
goto label_12;
#line 169
label_12:
;
#line 170
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__2));
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
//clear ___nl__bool__18;
#line 170
c_rt_lib0clear(&___nl__im__19);
#line 170
c_rt_lib0clear(&___nl__im__20);
#line 170
//clear ___nl__bool__36;
#line 170
c_rt_lib0clear(&___nl__im__37);
#line 170
c_rt_lib0clear(&___nl__im__38);
#line 170
//clear ___nl__bool__51;
#line 170
c_rt_lib0clear(&___nl__im__52);
#line 170
c_rt_lib0clear(&___nl__im__53);
#line 170
c_rt_lib0clear(&___nl__im__54);
#line 170
//clear ___nl__bool__56;
#line 170
c_rt_lib0clear(&___nl__im__57);
#line 170
c_rt_lib0clear(&___nl__im__58);
#line 170
c_rt_lib0clear(&___nl__im__59);
#line 170
c_rt_lib0clear(&___nl__im__62);
#line 170
c_rt_lib0clear(&___nl__im__63);
#line 170
return ___nl__im__66;
}

ImmT  nparser_priv0parse_fun_val_arg_list(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
#line 177
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 178
label_2:
;
#line 178
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 178
c_rt_lib0move(&___nl__im__4,___get_global_const(298));
#line 178
___nl__bool__2 = ntokenizer0next_is(___nl__rec_ptr__3, ___nl__im__4);
#line 178
___nl__rec_ptr__3 = NULL;
#line 178
c_rt_lib0clear(&___nl__im__4);
#line 178
___nl__bool__2 = !___nl__bool__2;
#line 178
___nl__bool__2 = !___nl__bool__2;
#line 178
if(___nl__bool__2){ goto label_1;}
#line 179
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_fun_val_arg(___ref___rec__0));
#line 179
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 179
if(___nl__bool__6){ goto label_3;}
#line 179
c_rt_lib0clear(&___nl__im__1);
#line 179
//clear ___nl__bool__2;
#line 179
c_rt_lib0clear(&___nl__im__5);
#line 179
//clear ___nl__bool__6;
#line 179
return ___nl__im__7;
#line 179
label_3:
;
#line 179
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 180
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 181
c_rt_lib0move(&___nl__im__9,___get_global_const(294));
#line 181
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 181
c_rt_lib0clear(&___nl__im__9);
#line 181
___nl__bool__8 = !___nl__bool__8;
#line 181
___nl__bool__8 = !___nl__bool__8;
#line 181
if(___nl__bool__8){ goto label_5;}
#line 181
goto label_1;
#line 181
goto label_4;
#line 181
label_5:
;
#line 181
label_4:
;
#line 181
//clear ___nl__bool__8;
#line 181
c_rt_lib0clear(&___nl__im__5);
#line 181
//clear ___nl__bool__6;
#line 181
c_rt_lib0clear(&___nl__im__7);
#line 182
goto label_2;
#line 182
label_1:
;
#line 183
c_rt_lib0move(&___nl__im__10,___get_global_const(298));
#line 183
___nl__bool__11 = nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 183
c_rt_lib0clear(&___nl__im__10);
#line 183
//clear ___nl__bool__11;
#line 184
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 184
c_rt_lib0clear(&___nl__im__1);
#line 184
//clear ___nl__bool__2;
#line 184
c_rt_lib0clear(&___nl__im__5);
#line 184
//clear ___nl__bool__6;
#line 184
c_rt_lib0clear(&___nl__im__7);
#line 184
return ___nl__im__12;
}

ImmT  nparser_priv0parse_expr_list(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
#line 188
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 189
label_2:
;
#line 189
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 189
c_rt_lib0move(&___nl__im__4,___get_global_const(298));
#line 189
___nl__bool__2 = ntokenizer0next_is(___nl__rec_ptr__3, ___nl__im__4);
#line 189
___nl__rec_ptr__3 = NULL;
#line 189
c_rt_lib0clear(&___nl__im__4);
#line 189
___nl__bool__2 = !___nl__bool__2;
#line 189
___nl__bool__2 = !___nl__bool__2;
#line 189
if(___nl__bool__2){ goto label_1;}
#line 190
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 190
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 190
if(___nl__bool__6){ goto label_3;}
#line 190
c_rt_lib0clear(&___nl__im__1);
#line 190
//clear ___nl__bool__2;
#line 190
c_rt_lib0clear(&___nl__im__5);
#line 190
//clear ___nl__bool__6;
#line 190
return ___nl__im__7;
#line 190
label_3:
;
#line 190
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 191
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 192
c_rt_lib0move(&___nl__im__9,___get_global_const(294));
#line 192
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 192
c_rt_lib0clear(&___nl__im__9);
#line 192
___nl__bool__8 = !___nl__bool__8;
#line 192
___nl__bool__8 = !___nl__bool__8;
#line 192
if(___nl__bool__8){ goto label_5;}
#line 192
goto label_1;
#line 192
goto label_4;
#line 192
label_5:
;
#line 192
label_4:
;
#line 192
//clear ___nl__bool__8;
#line 192
c_rt_lib0clear(&___nl__im__5);
#line 192
//clear ___nl__bool__6;
#line 192
c_rt_lib0clear(&___nl__im__7);
#line 193
goto label_2;
#line 193
label_1:
;
#line 194
c_rt_lib0move(&___nl__im__10,___get_global_const(298));
#line 194
___nl__bool__11 = nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 194
c_rt_lib0clear(&___nl__im__10);
#line 194
//clear ___nl__bool__11;
#line 195
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 195
c_rt_lib0clear(&___nl__im__1);
#line 195
//clear ___nl__bool__2;
#line 195
c_rt_lib0clear(&___nl__im__5);
#line 195
//clear ___nl__bool__6;
#line 195
c_rt_lib0clear(&___nl__im__7);
#line 195
return ___nl__im__12;
}

ImmT  nparser_priv0parse_fun_val_arg(nparser0state_t0type* ___ref___rec__0) {
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
#line 199
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 200
c_rt_lib0move(&___nl__im__5,___get_global_const(40));
#line 200
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 200
if(___nl__bool__4){ goto label_2;}
#line 200
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 200
goto label_1;
#line 200
label_2:
;
#line 200
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 200
label_1:
;
#line 200
//clear ___nl__bool__4;
#line 200
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 200
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(265), ___nl__im__2);
#line 200
c_rt_lib0clear(&___nl__im__2);
#line 200
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 201
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 201
if(___nl__bool__6){ goto label_3;}
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
//clear ___nl__bool__6;
#line 201
return ___nl__im__7;
#line 201
label_3:
;
#line 201
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 201
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(223), ___nl__im__8);
#line 202
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 202
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 202
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(932), ___nl__im__9);
#line 202
c_rt_lib0clear(&___nl__im__9);
#line 202
c_rt_lib0clear(&___nl__im__10);
#line 203
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 203
c_rt_lib0clear(&___nl__im__1);
#line 203
//clear ___nl__bool__6;
#line 203
c_rt_lib0clear(&___nl__im__7);
#line 203
c_rt_lib0clear(&___nl__im__8);
#line 203
return ___nl__im__11;
}

nast0fun_label_t0type nparser_priv0parse_fun_label(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 207
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 207
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 207
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__im__2, ___get_global_const(150), ___nl__im__3));
#line 207
c_rt_lib0clear(&___nl__im__2);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 208
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 208
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 208
___nl__bool__4 = ntokenizer0is_type(___nl__rec_ptr__5, ___nl__im__6);
#line 208
___nl__rec_ptr__5 = NULL;
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
___nl__bool__4 = !___nl__bool__4;
#line 208
___nl__bool__4 = !___nl__bool__4;
#line 208
if(___nl__bool__4){ goto label_2;}
#line 209
c_rt_lib0move(&___nl__im__7,___get_global_const(997));
#line 209
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__7));
#line 209
c_rt_lib0clear(&___nl__im__7);
#line 210
//clear ___nl__bool__4;
#line 210
return ___nl__im__1;
#line 211
goto label_1;
#line 211
label_2:
;
#line 211
label_1:
;
#line 211
//clear ___nl__bool__4;
#line 212
___nl__rec_ptr__10 = &((*___ref___rec__0).state0field);
#line 212
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 212
c_rt_lib0move(&___nl__im__9, ntokenizer0eat_type(___nl__rec_ptr__10, ___nl__im__11));
#line 212
___nl__rec_ptr__10 = NULL;
#line 212
c_rt_lib0clear(&___nl__im__11);
#line 212
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 212
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(150), ___nl__im__8);
#line 212
c_rt_lib0clear(&___nl__im__8);
#line 212
c_rt_lib0clear(&___nl__im__9);
#line 213
c_rt_lib0move(&___nl__im__14,___get_global_const(35));
#line 213
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__14);
#line 213
c_rt_lib0clear(&___nl__im__14);
#line 213
___nl__bool__13 = !___nl__bool__12;
#line 213
if(___nl__bool__13){ goto label_5;}
#line 213
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 213
___nl__bool__12 = ntokenizer0is_text(___nl__rec_ptr__15);
#line 213
___nl__rec_ptr__15 = NULL;
#line 213
label_5:
;
#line 213
//clear ___nl__bool__13;
#line 213
___nl__bool__12 = !___nl__bool__12;
#line 213
if(___nl__bool__12){ goto label_4;}
#line 214
___nl__rec_ptr__18 = &((*___ref___rec__0).state0field);
#line 214
c_rt_lib0move(&___nl__im__17, ntokenizer0eat_text(___nl__rec_ptr__18));
#line 214
___nl__rec_ptr__18 = NULL;
#line 214
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 214
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(166), ___nl__im__16);
#line 214
c_rt_lib0clear(&___nl__im__16);
#line 214
c_rt_lib0clear(&___nl__im__17);
#line 215
goto label_3;
#line 215
label_4:
;
#line 216
c_rt_lib0move(&___nl__im__19,___get_global_const(998));
#line 216
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__19));
#line 216
c_rt_lib0clear(&___nl__im__19);
#line 217
goto label_3;
#line 217
label_3:
;
#line 217
//clear ___nl__bool__12;
#line 218
return ___nl__im__1;
}

ImmT  nparser_priv0parse_label(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 225
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 225
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 225
c_rt_lib0move(&___nl__im__1, ntokenizer0eat_type(___nl__rec_ptr__2, ___nl__im__3));
#line 225
___nl__rec_ptr__2 = NULL;
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 227
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 227
c_rt_lib0move(&___nl__im__7,___get_global_const(419));
#line 227
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__6, ___nl__im__7);
#line 227
___nl__rec_ptr__6 = NULL;
#line 227
c_rt_lib0clear(&___nl__im__7);
#line 227
___nl__bool__4 = !___nl__bool__4;
#line 227
___nl__bool__5 = !___nl__bool__4;
#line 227
if(___nl__bool__5){ goto label_3;}
#line 227
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 227
c_rt_lib0move(&___nl__im__9,___get_global_const(35));
#line 227
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__8, ___nl__im__9);
#line 227
___nl__rec_ptr__8 = NULL;
#line 227
c_rt_lib0clear(&___nl__im__9);
#line 227
___nl__bool__4 = !___nl__bool__4;
#line 227
label_3:
;
#line 227
//clear ___nl__bool__5;
#line 227
___nl__bool__4 = !___nl__bool__4;
#line 227
if(___nl__bool__4){ goto label_2;}
#line 226
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(462), ___nl__im__1));
#line 226
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__11));
#line 226
c_rt_lib0clear(&___nl__im__11);
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
//clear ___nl__bool__4;
#line 226
return ___nl__im__10;
#line 226
goto label_1;
#line 226
label_2:
;
#line 226
label_1:
;
#line 226
//clear ___nl__bool__4;
#line 226
c_rt_lib0clear(&___nl__im__10);
#line 228
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 228
c_rt_lib0move(&___nl__im__14,___get_global_const(37));
#line 228
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 228
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(150), ___nl__im__13, ___get_global_const(166), ___nl__im__14, ___get_global_const(264), ___nl__im__15));
#line 228
c_rt_lib0clear(&___nl__im__13);
#line 228
c_rt_lib0clear(&___nl__im__14);
#line 228
c_rt_lib0clear(&___nl__im__15);
#line 229
c_rt_lib0move(&___nl__im__17,___get_global_const(35));
#line 229
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 229
c_rt_lib0clear(&___nl__im__17);
#line 229
___nl__bool__16 = !___nl__bool__16;
#line 229
if(___nl__bool__16){ goto label_5;}
#line 230
c_rt_lib0copy(&___nl__im__18, ___nl__im__1);
#line 230
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(150), ___nl__im__18);
#line 230
c_rt_lib0clear(&___nl__im__18);
#line 231
c_rt_lib0move(&___nl__im__20, nparser_priv0eat_text(___ref___rec__0));
#line 231
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(80));
#line 231
if(___nl__bool__19){ goto label_6;}
#line 231
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0clear(&___nl__im__12);
#line 231
//clear ___nl__bool__16;
#line 231
//clear ___nl__bool__19;
#line 231
return ___nl__im__20;
#line 231
label_6:
;
#line 231
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(80)));
#line 231
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(166), ___nl__im__21);
#line 232
goto label_4;
#line 232
label_5:
;
#line 233
c_rt_lib0copy(&___nl__im__22, ___nl__im__1);
#line 233
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(166), ___nl__im__22);
#line 233
c_rt_lib0clear(&___nl__im__22);
#line 234
goto label_4;
#line 234
label_4:
;
#line 234
//clear ___nl__bool__16;
#line 234
//clear ___nl__bool__19;
#line 234
c_rt_lib0clear(&___nl__im__20);
#line 234
c_rt_lib0clear(&___nl__im__21);
#line 235
c_rt_lib0move(&___nl__im__23,___get_global_const(419));
#line 235
___nl__bool__24 = nparser_priv0eat(___ref___rec__0, ___nl__im__23);
#line 235
c_rt_lib0clear(&___nl__im__23);
#line 235
//clear ___nl__bool__24;
#line 236
c_rt_lib0move(&___nl__im__26, nparser_priv0parse_fun_val_arg_list(___ref___rec__0));
#line 236
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(80));
#line 236
if(___nl__bool__25){ goto label_7;}
#line 236
c_rt_lib0clear(&___nl__im__1);
#line 236
c_rt_lib0clear(&___nl__im__12);
#line 236
//clear ___nl__bool__25;
#line 236
return ___nl__im__26;
#line 236
label_7:
;
#line 236
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(80)));
#line 236
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(264), ___nl__im__27);
#line 237
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(861), ___nl__im__12));
#line 237
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__29));
#line 237
c_rt_lib0clear(&___nl__im__29);
#line 237
c_rt_lib0clear(&___nl__im__1);
#line 237
c_rt_lib0clear(&___nl__im__12);
#line 237
//clear ___nl__bool__25;
#line 237
c_rt_lib0clear(&___nl__im__26);
#line 237
c_rt_lib0clear(&___nl__im__27);
#line 237
return ___nl__im__28;
}

nast0value_t0type nparser_priv0parse_hash_key(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__6 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 241
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 241
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 241
___nl__rec_ptr__2 = NULL;
#line 242
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 242
___nl__bool__5 = ntokenizer0is_text(___nl__rec_ptr__6);
#line 242
___nl__rec_ptr__6 = NULL;
#line 242
if(___nl__bool__5){ goto label_2;}
#line 243
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 243
goto label_1;
#line 243
label_2:
;
#line 243
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 243
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__7));
#line 243
___nl__rec_ptr__7 = NULL;
#line 243
label_1:
;
#line 243
//clear ___nl__bool__5;
#line 243
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(903), ___nl__im__4));
#line 243
c_rt_lib0clear(&___nl__im__4);
#line 245
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 245
c_rt_lib0move(&___nl__im__10, ntokenizer0get_place(___nl__rec_ptr__11));
#line 245
___nl__rec_ptr__11 = NULL;
#line 245
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__10));
#line 245
c_rt_lib0clear(&___nl__im__10);
#line 247
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 247
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__9, ___get_global_const(218), ___nl__im__3, ___get_global_const(204), ___nl__im__12));
#line 247
c_rt_lib0clear(&___nl__im__9);
#line 247
c_rt_lib0clear(&___nl__im__12);
#line 247
c_rt_lib0clear(&___nl__im__1);
#line 247
c_rt_lib0clear(&___nl__im__3);
#line 247
return ___nl__im__8;
}

ImmT  nparser_priv0parse_hash(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
#line 252
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 253
c_rt_lib0move(&___nl__im__2,___get_global_const(290));
#line 253
___nl__bool__3 = nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 253
c_rt_lib0clear(&___nl__im__2);
#line 253
//clear ___nl__bool__3;
#line 254
label_2:
;
#line 254
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 254
c_rt_lib0move(&___nl__im__6,___get_global_const(291));
#line 254
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__5, ___nl__im__6);
#line 254
___nl__rec_ptr__5 = NULL;
#line 254
c_rt_lib0clear(&___nl__im__6);
#line 254
___nl__bool__4 = !___nl__bool__4;
#line 254
___nl__bool__4 = !___nl__bool__4;
#line 254
if(___nl__bool__4){ goto label_1;}
#line 255
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_hash_key(___ref___rec__0));
#line 256
c_rt_lib0move(&___nl__im__8,___get_global_const(292));
#line 256
___nl__bool__9 = nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 256
c_rt_lib0clear(&___nl__im__8);
#line 256
//clear ___nl__bool__9;
#line 257
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_expr(___ref___rec__0));
#line 257
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(80));
#line 257
if(___nl__bool__11){ goto label_3;}
#line 257
c_rt_lib0clear(&___nl__im__1);
#line 257
//clear ___nl__bool__4;
#line 257
c_rt_lib0clear(&___nl__im__7);
#line 257
c_rt_lib0clear(&___nl__im__10);
#line 257
//clear ___nl__bool__11;
#line 257
return ___nl__im__12;
#line 257
label_3:
;
#line 257
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(80)));
#line 258
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(370), ___nl__im__7, ___get_global_const(223), ___nl__im__10));
#line 258
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__13));
#line 258
c_rt_lib0clear(&___nl__im__13);
#line 259
c_rt_lib0move(&___nl__im__15,___get_global_const(294));
#line 259
___nl__bool__14 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__15);
#line 259
c_rt_lib0clear(&___nl__im__15);
#line 259
___nl__bool__14 = !___nl__bool__14;
#line 259
___nl__bool__14 = !___nl__bool__14;
#line 259
if(___nl__bool__14){ goto label_5;}
#line 259
goto label_1;
#line 259
goto label_4;
#line 259
label_5:
;
#line 259
label_4:
;
#line 259
//clear ___nl__bool__14;
#line 259
c_rt_lib0clear(&___nl__im__7);
#line 259
c_rt_lib0clear(&___nl__im__10);
#line 259
//clear ___nl__bool__11;
#line 259
c_rt_lib0clear(&___nl__im__12);
#line 260
goto label_2;
#line 260
label_1:
;
#line 261
c_rt_lib0move(&___nl__im__16,___get_global_const(291));
#line 261
___nl__bool__17 = nparser_priv0eat(___ref___rec__0, ___nl__im__16);
#line 261
c_rt_lib0clear(&___nl__im__16);
#line 261
//clear ___nl__bool__17;
#line 262
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 262
c_rt_lib0clear(&___nl__im__1);
#line 262
//clear ___nl__bool__4;
#line 262
c_rt_lib0clear(&___nl__im__7);
#line 262
c_rt_lib0clear(&___nl__im__10);
#line 262
//clear ___nl__bool__11;
#line 262
c_rt_lib0clear(&___nl__im__12);
#line 262
return ___nl__im__18;
}

ImmT  nparser_priv0parse_arr(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
#line 266
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 267
c_rt_lib0move(&___nl__im__2,___get_global_const(296));
#line 267
___nl__bool__3 = nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 267
//clear ___nl__bool__3;
#line 268
label_2:
;
#line 268
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 268
c_rt_lib0move(&___nl__im__6,___get_global_const(297));
#line 268
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__5, ___nl__im__6);
#line 268
___nl__rec_ptr__5 = NULL;
#line 268
c_rt_lib0clear(&___nl__im__6);
#line 268
___nl__bool__4 = !___nl__bool__4;
#line 268
___nl__bool__4 = !___nl__bool__4;
#line 268
if(___nl__bool__4){ goto label_1;}
#line 269
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_expr(___ref___rec__0));
#line 269
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 269
if(___nl__bool__8){ goto label_3;}
#line 269
c_rt_lib0clear(&___nl__im__1);
#line 269
//clear ___nl__bool__4;
#line 269
c_rt_lib0clear(&___nl__im__7);
#line 269
//clear ___nl__bool__8;
#line 269
return ___nl__im__9;
#line 269
label_3:
;
#line 269
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 270
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 271
c_rt_lib0move(&___nl__im__11,___get_global_const(294));
#line 271
___nl__bool__10 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__11);
#line 271
c_rt_lib0clear(&___nl__im__11);
#line 271
___nl__bool__10 = !___nl__bool__10;
#line 271
___nl__bool__10 = !___nl__bool__10;
#line 271
if(___nl__bool__10){ goto label_5;}
#line 271
goto label_1;
#line 271
goto label_4;
#line 271
label_5:
;
#line 271
label_4:
;
#line 271
//clear ___nl__bool__10;
#line 271
c_rt_lib0clear(&___nl__im__7);
#line 271
//clear ___nl__bool__8;
#line 271
c_rt_lib0clear(&___nl__im__9);
#line 272
goto label_2;
#line 272
label_1:
;
#line 273
c_rt_lib0move(&___nl__im__12,___get_global_const(297));
#line 273
___nl__bool__13 = nparser_priv0eat(___ref___rec__0, ___nl__im__12);
#line 273
c_rt_lib0clear(&___nl__im__12);
#line 273
//clear ___nl__bool__13;
#line 274
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 274
c_rt_lib0clear(&___nl__im__1);
#line 274
//clear ___nl__bool__4;
#line 274
c_rt_lib0clear(&___nl__im__7);
#line 274
//clear ___nl__bool__8;
#line 274
c_rt_lib0clear(&___nl__im__9);
#line 274
return ___nl__im__14;
}

nparser0try_value_t0type nparser_priv0parse_expr(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
#line 278
___nl__int__4 = 0;
#line 278
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__4));
#line 278
//clear ___nl__int__4;
#line 278
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(80));
#line 278
if(___nl__bool__2){ goto label_1;}
#line 278
c_rt_lib0clear(&___nl__im__1);
#line 278
//clear ___nl__bool__2;
#line 278
return ___nl__im__3;
#line 278
label_1:
;
#line 278
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(80)));
#line 279
___nl__int__6 = 0;
#line 279
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__1, ___nl__int__6));
#line 279
//clear ___nl__int__6;
#line 279
c_rt_lib0clear(&___nl__im__1);
#line 279
//clear ___nl__bool__2;
#line 279
c_rt_lib0clear(&___nl__im__3);
#line 279
return ___nl__im__5;
}

nparser0try_value_t0type nparser_priv0parse_type(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
#line 283
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 283
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 283
___nl__rec_ptr__2 = NULL;
#line 284
c_rt_lib0move(&___nl__im__4,___get_global_const(305));
#line 284
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
___nl__bool__3 = !___nl__bool__3;
#line 284
if(___nl__bool__3){ goto label_2;}
#line 285
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 285
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 285
___nl__rec_ptr__6 = NULL;
#line 286
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_fun_label(___ref___rec__0));
#line 286
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(905), ___nl__im__8));
#line 286
c_rt_lib0clear(&___nl__im__8);
#line 287
___nl__rec_ptr__10 = &((*___ref___rec__0).state0field);
#line 287
c_rt_lib0move(&___nl__im__9, ntokenizer0get_place(___nl__rec_ptr__10));
#line 287
___nl__rec_ptr__10 = NULL;
#line 291
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 291
c_rt_lib0move(&___nl__im__14, ntokenizer0get_place(___nl__rec_ptr__15));
#line 291
___nl__rec_ptr__15 = NULL;
#line 291
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__14));
#line 291
c_rt_lib0clear(&___nl__im__14);
#line 294
c_rt_lib0move(&___nl__im__18,___get_global_const(305));
#line 296
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__5, ___get_global_const(938), ___nl__im__9));
#line 298
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 298
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__20, ___get_global_const(218), ___nl__im__7, ___get_global_const(204), ___nl__im__21));
#line 298
c_rt_lib0clear(&___nl__im__20);
#line 298
c_rt_lib0clear(&___nl__im__21);
#line 298
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(513), ___nl__im__18, ___get_global_const(223), ___nl__im__19));
#line 298
c_rt_lib0clear(&___nl__im__18);
#line 298
c_rt_lib0clear(&___nl__im__19);
#line 298
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(904), ___nl__im__17));
#line 298
c_rt_lib0clear(&___nl__im__17);
#line 301
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 301
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__13, ___get_global_const(218), ___nl__im__16, ___get_global_const(204), ___nl__im__22));
#line 301
c_rt_lib0clear(&___nl__im__13);
#line 301
c_rt_lib0clear(&___nl__im__16);
#line 301
c_rt_lib0clear(&___nl__im__22);
#line 301
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__12));
#line 301
c_rt_lib0clear(&___nl__im__12);
#line 301
c_rt_lib0clear(&___nl__im__1);
#line 301
//clear ___nl__bool__3;
#line 301
c_rt_lib0clear(&___nl__im__5);
#line 301
c_rt_lib0clear(&___nl__im__7);
#line 301
c_rt_lib0clear(&___nl__im__9);
#line 301
return ___nl__im__11;
#line 303
goto label_1;
#line 303
label_2:
;
#line 303
label_1:
;
#line 303
//clear ___nl__bool__3;
#line 303
c_rt_lib0clear(&___nl__im__5);
#line 303
c_rt_lib0clear(&___nl__im__7);
#line 303
c_rt_lib0clear(&___nl__im__9);
#line 303
c_rt_lib0clear(&___nl__im__11);
#line 304
___nl__rec_ptr__24 = &((*___ref___rec__0).state0field);
#line 304
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 304
___nl__bool__23 = ntokenizer0is_type(___nl__rec_ptr__24, ___nl__im__25);
#line 304
___nl__rec_ptr__24 = NULL;
#line 304
c_rt_lib0clear(&___nl__im__25);
#line 304
___nl__bool__23 = !___nl__bool__23;
#line 304
if(___nl__bool__23){ goto label_4;}
#line 305
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_label(___ref___rec__0));
#line 305
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(80));
#line 305
if(___nl__bool__27){ goto label_5;}
#line 305
c_rt_lib0clear(&___nl__im__1);
#line 305
//clear ___nl__bool__23;
#line 305
c_rt_lib0clear(&___nl__im__26);
#line 305
//clear ___nl__bool__27;
#line 305
return ___nl__im__28;
#line 305
label_5:
;
#line 305
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(80)));
#line 306
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(861));
#line 306
___nl__bool__29 = !___nl__bool__29;
#line 306
if(___nl__bool__29){ goto label_7;}
#line 308
___nl__rec_ptr__34 = &((*___ref___rec__0).state0field);
#line 308
c_rt_lib0move(&___nl__im__33, ntokenizer0get_place(___nl__rec_ptr__34));
#line 308
___nl__rec_ptr__34 = NULL;
#line 308
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__33));
#line 308
c_rt_lib0clear(&___nl__im__33);
#line 310
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 310
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__32, ___get_global_const(218), ___nl__im__26, ___get_global_const(204), ___nl__im__35));
#line 310
c_rt_lib0clear(&___nl__im__32);
#line 310
c_rt_lib0clear(&___nl__im__35);
#line 310
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__31));
#line 310
c_rt_lib0clear(&___nl__im__31);
#line 310
c_rt_lib0clear(&___nl__im__1);
#line 310
//clear ___nl__bool__23;
#line 310
c_rt_lib0clear(&___nl__im__26);
#line 310
//clear ___nl__bool__27;
#line 310
c_rt_lib0clear(&___nl__im__28);
#line 310
//clear ___nl__bool__29;
#line 310
return ___nl__im__30;
#line 312
goto label_6;
#line 312
label_7:
;
#line 312
label_6:
;
#line 312
//clear ___nl__bool__29;
#line 312
c_rt_lib0clear(&___nl__im__30);
#line 313
goto label_3;
#line 313
label_4:
;
#line 313
label_3:
;
#line 313
//clear ___nl__bool__23;
#line 313
c_rt_lib0clear(&___nl__im__26);
#line 313
//clear ___nl__bool__27;
#line 313
c_rt_lib0clear(&___nl__im__28);
#line 314
c_rt_lib0move(&___nl__im__36,___get_global_const(999));
#line 314
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__36));
#line 314
c_rt_lib0clear(&___nl__im__36);
#line 316
___nl__rec_ptr__41 = &((*___ref___rec__0).state0field);
#line 316
c_rt_lib0move(&___nl__im__40, ntokenizer0get_place(___nl__rec_ptr__41));
#line 316
___nl__rec_ptr__41 = NULL;
#line 316
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__40));
#line 316
c_rt_lib0clear(&___nl__im__40);
#line 317
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(881)));
#line 318
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 318
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__39, ___get_global_const(218), ___nl__im__42, ___get_global_const(204), ___nl__im__43));
#line 318
c_rt_lib0clear(&___nl__im__39);
#line 318
c_rt_lib0clear(&___nl__im__42);
#line 318
c_rt_lib0clear(&___nl__im__43);
#line 318
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__38));
#line 318
c_rt_lib0clear(&___nl__im__38);
#line 318
c_rt_lib0clear(&___nl__im__1);
#line 318
return ___nl__im__37;
}

nparser0try_value_t0type nparser_priv0parse_expr_rec_left(nparser0state_t0type* ___ref___rec__0,nast0value_t0type ___nl__im__1,INT  ___nl__int__2) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
bool  ___nl__bool__51 = false;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
bool  ___nl__bool__58 = false;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
bool  ___nl__bool__86 = false;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
bool  ___nl__bool__89 = false;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
bool  ___nl__bool__96 = false;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
#line 323
label_2:
;
#line 325
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 325
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 325
___nl__rec_ptr__5 = NULL;
#line 326
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 326
c_rt_lib0move(&___nl__im__6, ntokenizer0get_token(___nl__rec_ptr__7));
#line 326
___nl__rec_ptr__7 = NULL;
#line 328
c_rt_lib0move(&___nl__im__10, nast0get_ternary_ops());
#line 328
___nl__bool__9 = hash0has_key(___nl__im__10, ___nl__im__6);
#line 328
c_rt_lib0clear(&___nl__im__10);
#line 328
___nl__bool__9 = !___nl__bool__9;
#line 328
if(___nl__bool__9){ goto label_4;}
#line 329
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 330
c_rt_lib0move(&___nl__im__12,___get_global_const(922));
#line 330
___nl__bool__11 = c_rt_lib0eq(___nl__im__8, ___nl__im__12);
#line 330
c_rt_lib0clear(&___nl__im__12);
#line 330
___nl__bool__11 = !___nl__bool__11;
#line 330
if(___nl__bool__11){ goto label_6;}
#line 331
c_rt_lib0move(&___nl__im__14, nast0get_ternary_ops());
#line 331
c_rt_lib0move(&___nl__im__15,___get_global_const(922));
#line 331
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__14, ___nl__im__15));
#line 331
c_rt_lib0clear(&___nl__im__14);
#line 331
c_rt_lib0clear(&___nl__im__15);
#line 332
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(919)));
#line 332
___nl__int__18 = getIntFromImm(___nl__im__19);
#line 332
c_rt_lib0clear(&___nl__im__19);
#line 332
___nl__int__20 = ___nl__int__18 < ___nl__int__2;
#line 332
___nl__bool__16 = ___nl__int__20;
#line 332
//clear ___nl__int__18;
#line 332
//clear ___nl__int__20;
#line 332
if(___nl__bool__16){ goto label_9;}
#line 332
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(919)));
#line 332
___nl__int__22 = getIntFromImm(___nl__im__23);
#line 332
c_rt_lib0clear(&___nl__im__23);
#line 332
___nl__int__24 = ___nl__int__22 == ___nl__int__2;
#line 332
___nl__bool__16 = ___nl__int__24;
#line 332
//clear ___nl__int__22;
#line 332
//clear ___nl__int__24;
#line 332
___nl__bool__21 = !___nl__bool__16;
#line 332
if(___nl__bool__21){ goto label_10;}
#line 332
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(920)));
#line 332
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(273));
#line 332
c_rt_lib0clear(&___nl__im__25);
#line 332
label_10:
;
#line 332
//clear ___nl__bool__21;
#line 332
label_9:
;
#line 332
//clear ___nl__bool__17;
#line 332
___nl__bool__16 = !___nl__bool__16;
#line 332
if(___nl__bool__16){ goto label_8;}
#line 332
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 332
c_rt_lib0clear(&___nl__im__1);
#line 332
//clear ___nl__int__2;
#line 332
c_rt_lib0clear(&___nl__im__3);
#line 332
c_rt_lib0clear(&___nl__im__4);
#line 332
c_rt_lib0clear(&___nl__im__6);
#line 332
c_rt_lib0clear(&___nl__im__8);
#line 332
//clear ___nl__bool__9;
#line 332
//clear ___nl__bool__11;
#line 332
c_rt_lib0clear(&___nl__im__13);
#line 332
//clear ___nl__bool__16;
#line 332
return ___nl__im__26;
#line 332
goto label_7;
#line 332
label_8:
;
#line 332
label_7:
;
#line 332
//clear ___nl__bool__16;
#line 332
c_rt_lib0clear(&___nl__im__26);
#line 333
___nl__bool__27 = nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 333
//clear ___nl__bool__27;
#line 334
c_rt_lib0move(&___nl__im__30, nparser_priv0parse_expr(___ref___rec__0));
#line 334
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_const(80));
#line 334
if(___nl__bool__29){ goto label_11;}
#line 334
c_rt_lib0clear(&___nl__im__1);
#line 334
//clear ___nl__int__2;
#line 334
c_rt_lib0clear(&___nl__im__3);
#line 334
c_rt_lib0clear(&___nl__im__4);
#line 334
c_rt_lib0clear(&___nl__im__6);
#line 334
c_rt_lib0clear(&___nl__im__8);
#line 334
//clear ___nl__bool__9;
#line 334
//clear ___nl__bool__11;
#line 334
c_rt_lib0clear(&___nl__im__13);
#line 334
c_rt_lib0clear(&___nl__im__28);
#line 334
//clear ___nl__bool__29;
#line 334
return ___nl__im__30;
#line 334
label_11:
;
#line 334
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(80)));
#line 335
c_rt_lib0move(&___nl__im__31,___get_global_const(483));
#line 335
___nl__bool__32 = nparser_priv0eat(___ref___rec__0, ___nl__im__31);
#line 335
c_rt_lib0clear(&___nl__im__31);
#line 335
//clear ___nl__bool__32;
#line 336
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(919)));
#line 336
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 336
c_rt_lib0clear(&___nl__im__37);
#line 336
c_rt_lib0move(&___nl__im__35, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__36));
#line 336
//clear ___nl__int__36;
#line 336
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(80));
#line 336
if(___nl__bool__34){ goto label_12;}
#line 336
c_rt_lib0clear(&___nl__im__1);
#line 336
//clear ___nl__int__2;
#line 336
c_rt_lib0clear(&___nl__im__3);
#line 336
c_rt_lib0clear(&___nl__im__4);
#line 336
c_rt_lib0clear(&___nl__im__6);
#line 336
c_rt_lib0clear(&___nl__im__8);
#line 336
//clear ___nl__bool__9;
#line 336
//clear ___nl__bool__11;
#line 336
c_rt_lib0clear(&___nl__im__13);
#line 336
c_rt_lib0clear(&___nl__im__28);
#line 336
//clear ___nl__bool__29;
#line 336
c_rt_lib0clear(&___nl__im__30);
#line 336
c_rt_lib0clear(&___nl__im__33);
#line 336
//clear ___nl__bool__34;
#line 336
return ___nl__im__35;
#line 336
label_12:
;
#line 336
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(80)));
#line 337
c_rt_lib0move(&___nl__im__39,___get_global_const(922));
#line 337
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(4, ___get_global_const(908), ___nl__im__1, ___get_global_const(909), ___nl__im__28, ___get_global_const(910), ___nl__im__33, ___get_global_const(513), ___nl__im__39));
#line 337
c_rt_lib0clear(&___nl__im__39);
#line 337
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(902), ___nl__im__38));
#line 337
c_rt_lib0clear(&___nl__im__38);
#line 338
goto label_5;
#line 338
label_6:
;
#line 339
c_rt_lib0move(&___nl__im__42,___get_global_const(1000));
#line 339
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__8));
#line 339
c_rt_lib0clear(&___nl__im__42);
#line 339
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__41));
#line 339
c_rt_lib0clear(&___nl__im__41);
#line 339
c_rt_lib0clear(&___nl__im__1);
#line 339
//clear ___nl__int__2;
#line 339
c_rt_lib0clear(&___nl__im__3);
#line 339
c_rt_lib0clear(&___nl__im__4);
#line 339
c_rt_lib0clear(&___nl__im__6);
#line 339
c_rt_lib0clear(&___nl__im__8);
#line 339
//clear ___nl__bool__9;
#line 339
//clear ___nl__bool__11;
#line 339
c_rt_lib0clear(&___nl__im__13);
#line 339
c_rt_lib0clear(&___nl__im__28);
#line 339
//clear ___nl__bool__29;
#line 339
c_rt_lib0clear(&___nl__im__30);
#line 339
c_rt_lib0clear(&___nl__im__33);
#line 339
//clear ___nl__bool__34;
#line 339
c_rt_lib0clear(&___nl__im__35);
#line 339
return ___nl__im__40;
#line 340
goto label_5;
#line 340
label_5:
;
#line 340
//clear ___nl__bool__11;
#line 340
c_rt_lib0clear(&___nl__im__13);
#line 340
c_rt_lib0clear(&___nl__im__28);
#line 340
//clear ___nl__bool__29;
#line 340
c_rt_lib0clear(&___nl__im__30);
#line 340
c_rt_lib0clear(&___nl__im__33);
#line 340
//clear ___nl__bool__34;
#line 340
c_rt_lib0clear(&___nl__im__35);
#line 340
c_rt_lib0clear(&___nl__im__40);
#line 341
goto label_3;
#line 341
label_4:
;
#line 341
c_rt_lib0move(&___nl__im__43, nast0get_bin_ops());
#line 341
___nl__bool__9 = hash0has_key(___nl__im__43, ___nl__im__6);
#line 341
c_rt_lib0clear(&___nl__im__43);
#line 341
___nl__bool__9 = !___nl__bool__9;
#line 341
if(___nl__bool__9){ goto label_13;}
#line 342
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 343
c_rt_lib0move(&___nl__im__45, nast0get_bin_ops());
#line 343
c_rt_lib0move(&___nl__im__44, hash0get_value(___nl__im__45, ___nl__im__6));
#line 343
c_rt_lib0clear(&___nl__im__45);
#line 344
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(919)));
#line 344
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 344
c_rt_lib0clear(&___nl__im__49);
#line 344
___nl__int__50 = ___nl__int__48 < ___nl__int__2;
#line 344
___nl__bool__46 = ___nl__int__50;
#line 344
//clear ___nl__int__48;
#line 344
//clear ___nl__int__50;
#line 344
if(___nl__bool__46){ goto label_16;}
#line 344
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(919)));
#line 344
___nl__int__52 = getIntFromImm(___nl__im__53);
#line 344
c_rt_lib0clear(&___nl__im__53);
#line 344
___nl__int__54 = ___nl__int__52 == ___nl__int__2;
#line 344
___nl__bool__46 = ___nl__int__54;
#line 344
//clear ___nl__int__52;
#line 344
//clear ___nl__int__54;
#line 344
___nl__bool__51 = !___nl__bool__46;
#line 344
if(___nl__bool__51){ goto label_17;}
#line 344
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(920)));
#line 344
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__55, ___get_global_const(273));
#line 344
c_rt_lib0clear(&___nl__im__55);
#line 344
label_17:
;
#line 344
//clear ___nl__bool__51;
#line 344
label_16:
;
#line 344
//clear ___nl__bool__47;
#line 344
___nl__bool__46 = !___nl__bool__46;
#line 344
if(___nl__bool__46){ goto label_15;}
#line 344
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 344
c_rt_lib0clear(&___nl__im__1);
#line 344
//clear ___nl__int__2;
#line 344
c_rt_lib0clear(&___nl__im__3);
#line 344
c_rt_lib0clear(&___nl__im__4);
#line 344
c_rt_lib0clear(&___nl__im__6);
#line 344
c_rt_lib0clear(&___nl__im__8);
#line 344
//clear ___nl__bool__9;
#line 344
c_rt_lib0clear(&___nl__im__44);
#line 344
//clear ___nl__bool__46;
#line 344
return ___nl__im__56;
#line 344
goto label_14;
#line 344
label_15:
;
#line 344
label_14:
;
#line 344
//clear ___nl__bool__46;
#line 344
c_rt_lib0clear(&___nl__im__56);
#line 345
___nl__bool__57 = nparser_priv0eat(___ref___rec__0, ___nl__im__6);
#line 345
//clear ___nl__bool__57;
#line 346
c_rt_lib0move(&___nl__im__59,___get_global_const(531));
#line 346
___nl__bool__58 = c_rt_lib0eq(___nl__im__8, ___nl__im__59);
#line 346
c_rt_lib0clear(&___nl__im__59);
#line 346
___nl__bool__58 = !___nl__bool__58;
#line 346
if(___nl__bool__58){ goto label_19;}
#line 347
c_rt_lib0move(&___nl__im__61, nparser_priv0parse_hash_key(___ref___rec__0));
#line 347
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_mk(3, ___get_global_const(513), ___nl__im__8, ___get_global_const(273), ___nl__im__1, ___get_global_const(274), ___nl__im__61));
#line 347
c_rt_lib0clear(&___nl__im__61);
#line 347
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__60));
#line 347
c_rt_lib0clear(&___nl__im__60);
#line 348
goto label_18;
#line 348
label_19:
;
#line 348
c_rt_lib0move(&___nl__im__62,___get_global_const(925));
#line 348
___nl__bool__58 = c_rt_lib0eq(___nl__im__8, ___nl__im__62);
#line 348
c_rt_lib0clear(&___nl__im__62);
#line 348
___nl__bool__58 = !___nl__bool__58;
#line 348
if(___nl__bool__58){ goto label_20;}
#line 349
c_rt_lib0move(&___nl__im__63,___get_global_const(483));
#line 349
___nl__bool__64 = nparser_priv0eat(___ref___rec__0, ___nl__im__63);
#line 349
c_rt_lib0clear(&___nl__im__63);
#line 349
//clear ___nl__bool__64;
#line 350
c_rt_lib0move(&___nl__im__65, nparser_priv0parse_hash_key(___ref___rec__0));
#line 351
c_rt_lib0move(&___nl__im__67,___get_global_const(899));
#line 351
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_mk(3, ___get_global_const(513), ___nl__im__67, ___get_global_const(273), ___nl__im__1, ___get_global_const(274), ___nl__im__65));
#line 351
c_rt_lib0clear(&___nl__im__67);
#line 351
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__66));
#line 351
c_rt_lib0clear(&___nl__im__66);
#line 352
goto label_18;
#line 352
label_20:
;
#line 352
c_rt_lib0move(&___nl__im__68,___get_global_const(924));
#line 352
___nl__bool__58 = c_rt_lib0eq(___nl__im__8, ___nl__im__68);
#line 352
c_rt_lib0clear(&___nl__im__68);
#line 352
___nl__bool__58 = !___nl__bool__58;
#line 352
if(___nl__bool__58){ goto label_21;}
#line 353
c_rt_lib0move(&___nl__im__69,___get_global_const(483));
#line 353
___nl__bool__70 = nparser_priv0eat(___ref___rec__0, ___nl__im__69);
#line 353
c_rt_lib0clear(&___nl__im__69);
#line 353
//clear ___nl__bool__70;
#line 354
c_rt_lib0move(&___nl__im__71, nparser_priv0parse_hash_key(___ref___rec__0));
#line 355
c_rt_lib0move(&___nl__im__73,___get_global_const(1001));
#line 355
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(3, ___get_global_const(513), ___nl__im__73, ___get_global_const(273), ___nl__im__1, ___get_global_const(274), ___nl__im__71));
#line 355
c_rt_lib0clear(&___nl__im__73);
#line 355
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__72));
#line 355
c_rt_lib0clear(&___nl__im__72);
#line 356
goto label_18;
#line 356
label_21:
;
#line 357
c_rt_lib0move(&___nl__im__75,___get_global_const(911));
#line 357
___nl__bool__74 = c_rt_lib0eq(___nl__im__8, ___nl__im__75);
#line 357
c_rt_lib0clear(&___nl__im__75);
#line 357
___nl__bool__74 = !___nl__bool__74;
#line 357
if(___nl__bool__74){ goto label_23;}
#line 357
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__1));
#line 357
goto label_22;
#line 357
label_23:
;
#line 357
label_22:
;
#line 357
//clear ___nl__bool__74;
#line 358
c_rt_lib0move(&___nl__im__81, nast0get_bin_ops());
#line 358
c_rt_lib0move(&___nl__im__80, hash0get_value(___nl__im__81, ___nl__im__8));
#line 358
c_rt_lib0clear(&___nl__im__81);
#line 358
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(919)));
#line 358
___nl__int__79 = getIntFromImm(___nl__im__82);
#line 358
c_rt_lib0clear(&___nl__im__80);
#line 358
c_rt_lib0clear(&___nl__im__82);
#line 358
c_rt_lib0move(&___nl__im__78, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__79));
#line 358
//clear ___nl__int__79;
#line 358
___nl__bool__77 = c_rt_lib0priv_is(___nl__im__78, ___get_global_const(80));
#line 358
if(___nl__bool__77){ goto label_24;}
#line 358
c_rt_lib0clear(&___nl__im__1);
#line 358
//clear ___nl__int__2;
#line 358
c_rt_lib0clear(&___nl__im__3);
#line 358
c_rt_lib0clear(&___nl__im__4);
#line 358
c_rt_lib0clear(&___nl__im__6);
#line 358
c_rt_lib0clear(&___nl__im__8);
#line 358
//clear ___nl__bool__9;
#line 358
c_rt_lib0clear(&___nl__im__44);
#line 358
//clear ___nl__bool__58;
#line 358
c_rt_lib0clear(&___nl__im__65);
#line 358
c_rt_lib0clear(&___nl__im__71);
#line 358
c_rt_lib0clear(&___nl__im__76);
#line 358
//clear ___nl__bool__77;
#line 358
return ___nl__im__78;
#line 358
label_24:
;
#line 358
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__78, ___get_global_const(80)));
#line 359
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_mk(3, ___get_global_const(273), ___nl__im__1, ___get_global_const(513), ___nl__im__8, ___get_global_const(274), ___nl__im__76));
#line 359
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__83));
#line 359
c_rt_lib0clear(&___nl__im__83);
#line 360
goto label_18;
#line 360
label_18:
;
#line 360
//clear ___nl__bool__58;
#line 360
c_rt_lib0clear(&___nl__im__65);
#line 360
c_rt_lib0clear(&___nl__im__71);
#line 360
c_rt_lib0clear(&___nl__im__76);
#line 360
//clear ___nl__bool__77;
#line 360
c_rt_lib0clear(&___nl__im__78);
#line 361
goto label_3;
#line 361
label_13:
;
#line 361
c_rt_lib0move(&___nl__im__84,___get_global_const(296));
#line 361
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__84);
#line 361
c_rt_lib0clear(&___nl__im__84);
#line 361
___nl__bool__9 = !___nl__bool__9;
#line 361
if(___nl__bool__9){ goto label_25;}
#line 362
c_rt_lib0move(&___nl__im__8,___get_global_const(897));
#line 363
c_rt_lib0move(&___nl__im__87, nparser_priv0parse_expr(___ref___rec__0));
#line 363
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__87, ___get_global_const(80));
#line 363
if(___nl__bool__86){ goto label_26;}
#line 363
c_rt_lib0clear(&___nl__im__1);
#line 363
//clear ___nl__int__2;
#line 363
c_rt_lib0clear(&___nl__im__3);
#line 363
c_rt_lib0clear(&___nl__im__4);
#line 363
c_rt_lib0clear(&___nl__im__6);
#line 363
c_rt_lib0clear(&___nl__im__8);
#line 363
//clear ___nl__bool__9;
#line 363
c_rt_lib0clear(&___nl__im__44);
#line 363
c_rt_lib0clear(&___nl__im__85);
#line 363
//clear ___nl__bool__86;
#line 363
return ___nl__im__87;
#line 363
label_26:
;
#line 363
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__87, ___get_global_const(80)));
#line 364
c_rt_lib0move(&___nl__im__88,___get_global_const(297));
#line 364
___nl__bool__89 = nparser_priv0eat(___ref___rec__0, ___nl__im__88);
#line 364
c_rt_lib0clear(&___nl__im__88);
#line 364
//clear ___nl__bool__89;
#line 365
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_mk(3, ___get_global_const(513), ___nl__im__8, ___get_global_const(273), ___nl__im__1, ___get_global_const(274), ___nl__im__85));
#line 365
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__90));
#line 365
c_rt_lib0clear(&___nl__im__90);
#line 366
goto label_3;
#line 366
label_25:
;
#line 366
c_rt_lib0move(&___nl__im__91,___get_global_const(290));
#line 366
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__91);
#line 366
c_rt_lib0clear(&___nl__im__91);
#line 366
___nl__bool__9 = !___nl__bool__9;
#line 366
if(___nl__bool__9){ goto label_27;}
#line 367
c_rt_lib0move(&___nl__im__8,___get_global_const(898));
#line 368
c_rt_lib0move(&___nl__im__94, nparser_priv0parse_expr(___ref___rec__0));
#line 368
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__94, ___get_global_const(80));
#line 368
if(___nl__bool__93){ goto label_28;}
#line 368
c_rt_lib0clear(&___nl__im__1);
#line 368
//clear ___nl__int__2;
#line 368
c_rt_lib0clear(&___nl__im__3);
#line 368
c_rt_lib0clear(&___nl__im__4);
#line 368
c_rt_lib0clear(&___nl__im__6);
#line 368
c_rt_lib0clear(&___nl__im__8);
#line 368
//clear ___nl__bool__9;
#line 368
c_rt_lib0clear(&___nl__im__44);
#line 368
c_rt_lib0clear(&___nl__im__85);
#line 368
//clear ___nl__bool__86;
#line 368
c_rt_lib0clear(&___nl__im__87);
#line 368
c_rt_lib0clear(&___nl__im__92);
#line 368
//clear ___nl__bool__93;
#line 368
return ___nl__im__94;
#line 368
label_28:
;
#line 368
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__94, ___get_global_const(80)));
#line 369
c_rt_lib0move(&___nl__im__95,___get_global_const(291));
#line 369
___nl__bool__96 = nparser_priv0eat(___ref___rec__0, ___nl__im__95);
#line 369
c_rt_lib0clear(&___nl__im__95);
#line 369
//clear ___nl__bool__96;
#line 370
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(3, ___get_global_const(513), ___nl__im__8, ___get_global_const(273), ___nl__im__1, ___get_global_const(274), ___nl__im__92));
#line 370
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__97));
#line 370
c_rt_lib0clear(&___nl__im__97);
#line 371
goto label_3;
#line 371
label_27:
;
#line 371
c_rt_lib0move(&___nl__im__98,___get_global_const(923));
#line 371
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__98);
#line 371
c_rt_lib0clear(&___nl__im__98);
#line 371
___nl__bool__9 = !___nl__bool__9;
#line 371
if(___nl__bool__9){ goto label_29;}
#line 372
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(906), ___nl__im__1));
#line 373
goto label_3;
#line 373
label_29:
;
#line 373
c_rt_lib0move(&___nl__im__99,___get_global_const(189));
#line 373
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__99);
#line 373
c_rt_lib0clear(&___nl__im__99);
#line 373
___nl__bool__9 = !___nl__bool__9;
#line 373
if(___nl__bool__9){ goto label_30;}
#line 374
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(907), ___nl__im__1));
#line 375
goto label_3;
#line 375
label_30:
;
#line 376
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 376
c_rt_lib0clear(&___nl__im__1);
#line 376
//clear ___nl__int__2;
#line 376
c_rt_lib0clear(&___nl__im__3);
#line 376
c_rt_lib0clear(&___nl__im__4);
#line 376
c_rt_lib0clear(&___nl__im__6);
#line 376
c_rt_lib0clear(&___nl__im__8);
#line 376
//clear ___nl__bool__9;
#line 376
c_rt_lib0clear(&___nl__im__44);
#line 376
c_rt_lib0clear(&___nl__im__85);
#line 376
//clear ___nl__bool__86;
#line 376
c_rt_lib0clear(&___nl__im__87);
#line 376
c_rt_lib0clear(&___nl__im__92);
#line 376
//clear ___nl__bool__93;
#line 376
c_rt_lib0clear(&___nl__im__94);
#line 376
return ___nl__im__100;
#line 377
goto label_3;
#line 377
label_3:
;
#line 377
//clear ___nl__bool__9;
#line 377
c_rt_lib0clear(&___nl__im__44);
#line 377
c_rt_lib0clear(&___nl__im__85);
#line 377
//clear ___nl__bool__86;
#line 377
c_rt_lib0clear(&___nl__im__87);
#line 377
c_rt_lib0clear(&___nl__im__92);
#line 377
//clear ___nl__bool__93;
#line 377
c_rt_lib0clear(&___nl__im__94);
#line 377
c_rt_lib0clear(&___nl__im__100);
#line 379
___nl__rec_ptr__103 = &((*___ref___rec__0).state0field);
#line 379
c_rt_lib0move(&___nl__im__102, ntokenizer0get_place(___nl__rec_ptr__103));
#line 379
___nl__rec_ptr__103 = NULL;
#line 379
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__4, ___get_global_const(938), ___nl__im__102));
#line 379
c_rt_lib0clear(&___nl__im__102);
#line 381
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 381
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__101, ___get_global_const(218), ___nl__im__3, ___get_global_const(204), ___nl__im__104));
#line 381
c_rt_lib0clear(&___nl__im__101);
#line 381
c_rt_lib0clear(&___nl__im__104);
#line 381
c_rt_lib0clear(&___nl__im__3);
#line 381
c_rt_lib0clear(&___nl__im__4);
#line 381
c_rt_lib0clear(&___nl__im__6);
#line 381
c_rt_lib0clear(&___nl__im__8);
#line 323
goto label_2;
#line 323
label_1:
;
#line 384
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(0));
#line 384
nl_die_arg(___nl__im__105);
}

nparser0try_value_t0type nparser_priv0parse_expr_rec(nparser0state_t0type* ___ref___rec__0,INT  ___nl__int__1) {
nparser_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__string__58 = NULL;
bool  ___nl__bool__59 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__string__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__71 = NULL;
ImmT  ___nl__im__72 = NULL;
bool  ___nl__bool__73 = false;
ImmT  ___nl__im__74 = NULL;
bool  ___nl__bool__75 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
INT  ___nl__int__97 = 0;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__105 = NULL;
ImmT  ___nl__im__106 = NULL;
bool  ___nl__bool__107 = false;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
#line 389
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 389
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 389
___nl__rec_ptr__4 = NULL;
#line 390
c_rt_lib0move(&___nl__im__6,___get_global_const(419));
#line 390
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 390
c_rt_lib0clear(&___nl__im__6);
#line 390
___nl__bool__5 = !___nl__bool__5;
#line 390
if(___nl__bool__5){ goto label_2;}
#line 391
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_expr(___ref___rec__0));
#line 391
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 391
if(___nl__bool__8){ goto label_3;}
#line 391
//clear ___nl__int__1;
#line 391
c_rt_lib0clear(&___nl__im__2);
#line 391
c_rt_lib0clear(&___nl__im__3);
#line 391
//clear ___nl__bool__5;
#line 391
c_rt_lib0clear(&___nl__im__7);
#line 391
//clear ___nl__bool__8;
#line 391
return ___nl__im__9;
#line 391
label_3:
;
#line 391
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 392
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(900), ___nl__im__7));
#line 393
c_rt_lib0move(&___nl__im__10,___get_global_const(298));
#line 393
___nl__bool__11 = nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 393
c_rt_lib0clear(&___nl__im__10);
#line 393
//clear ___nl__bool__11;
#line 394
goto label_1;
#line 394
label_2:
;
#line 394
___nl__rec_ptr__12 = &((*___ref___rec__0).state0field);
#line 394
c_rt_lib0move(&___nl__im__13,___get_global_const(290));
#line 394
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__12, ___nl__im__13);
#line 394
___nl__rec_ptr__12 = NULL;
#line 394
c_rt_lib0clear(&___nl__im__13);
#line 394
___nl__bool__5 = !___nl__bool__5;
#line 394
if(___nl__bool__5){ goto label_4;}
#line 395
c_rt_lib0move(&___nl__im__16, nparser_priv0parse_hash(___ref___rec__0));
#line 395
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(80));
#line 395
if(___nl__bool__15){ goto label_5;}
#line 395
//clear ___nl__int__1;
#line 395
c_rt_lib0clear(&___nl__im__2);
#line 395
c_rt_lib0clear(&___nl__im__3);
#line 395
//clear ___nl__bool__5;
#line 395
c_rt_lib0clear(&___nl__im__7);
#line 395
//clear ___nl__bool__8;
#line 395
c_rt_lib0clear(&___nl__im__9);
#line 395
c_rt_lib0clear(&___nl__im__14);
#line 395
//clear ___nl__bool__15;
#line 395
return ___nl__im__16;
#line 395
label_5:
;
#line 395
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(80)));
#line 396
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__14));
#line 397
goto label_1;
#line 397
label_4:
;
#line 397
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 397
c_rt_lib0move(&___nl__im__18,___get_global_const(296));
#line 397
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__17, ___nl__im__18);
#line 397
___nl__rec_ptr__17 = NULL;
#line 397
c_rt_lib0clear(&___nl__im__18);
#line 397
___nl__bool__5 = !___nl__bool__5;
#line 397
if(___nl__bool__5){ goto label_6;}
#line 398
c_rt_lib0move(&___nl__im__21, nparser_priv0parse_arr(___ref___rec__0));
#line 398
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(80));
#line 398
if(___nl__bool__20){ goto label_7;}
#line 398
//clear ___nl__int__1;
#line 398
c_rt_lib0clear(&___nl__im__2);
#line 398
c_rt_lib0clear(&___nl__im__3);
#line 398
//clear ___nl__bool__5;
#line 398
c_rt_lib0clear(&___nl__im__7);
#line 398
//clear ___nl__bool__8;
#line 398
c_rt_lib0clear(&___nl__im__9);
#line 398
c_rt_lib0clear(&___nl__im__14);
#line 398
//clear ___nl__bool__15;
#line 398
c_rt_lib0clear(&___nl__im__16);
#line 398
c_rt_lib0clear(&___nl__im__19);
#line 398
//clear ___nl__bool__20;
#line 398
return ___nl__im__21;
#line 398
label_7:
;
#line 398
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(80)));
#line 399
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__im__19));
#line 400
goto label_1;
#line 400
label_6:
;
#line 400
___nl__rec_ptr__22 = &((*___ref___rec__0).state0field);
#line 400
c_rt_lib0move(&___nl__im__23,___get_global_const(483));
#line 400
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__22, ___nl__im__23);
#line 400
___nl__rec_ptr__22 = NULL;
#line 400
c_rt_lib0clear(&___nl__im__23);
#line 400
___nl__bool__5 = !___nl__bool__5;
#line 400
if(___nl__bool__5){ goto label_8;}
#line 401
c_rt_lib0move(&___nl__im__26, nparser_priv0parse_variant(___ref___rec__0));
#line 401
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(80));
#line 401
if(___nl__bool__25){ goto label_9;}
#line 401
//clear ___nl__int__1;
#line 401
c_rt_lib0clear(&___nl__im__2);
#line 401
c_rt_lib0clear(&___nl__im__3);
#line 401
//clear ___nl__bool__5;
#line 401
c_rt_lib0clear(&___nl__im__7);
#line 401
//clear ___nl__bool__8;
#line 401
c_rt_lib0clear(&___nl__im__9);
#line 401
c_rt_lib0clear(&___nl__im__14);
#line 401
//clear ___nl__bool__15;
#line 401
c_rt_lib0clear(&___nl__im__16);
#line 401
c_rt_lib0clear(&___nl__im__19);
#line 401
//clear ___nl__bool__20;
#line 401
c_rt_lib0clear(&___nl__im__21);
#line 401
c_rt_lib0clear(&___nl__im__24);
#line 401
//clear ___nl__bool__25;
#line 401
return ___nl__im__26;
#line 401
label_9:
;
#line 401
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(80)));
#line 402
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(516), ___nl__im__24));
#line 403
goto label_1;
#line 403
label_8:
;
#line 403
___nl__rec_ptr__27 = &((*___ref___rec__0).state0field);
#line 403
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_const(1002)));
#line 403
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__27, ___nl__im__28);
#line 403
___nl__rec_ptr__27 = NULL;
#line 403
c_rt_lib0clear(&___nl__im__28);
#line 403
___nl__bool__5 = !___nl__bool__5;
#line 403
if(___nl__bool__5){ goto label_10;}
#line 404
___nl__rec_ptr__30 = &((*___ref___rec__0).state0field);
#line 404
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(1002)));
#line 404
c_rt_lib0move(&___nl__im__29, ntokenizer0eat_type(___nl__rec_ptr__30, ___nl__im__31));
#line 404
___nl__rec_ptr__30 = NULL;
#line 404
c_rt_lib0clear(&___nl__im__31);
#line 406
c_rt_lib0move(&___nl__im__33, string_utils0get_integer(___nl__im__29));
#line 406
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(80));
#line 406
if(___nl__bool__34){ goto label_12;}
#line 408
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(79));
#line 408
if(___nl__bool__34){ goto label_13;}
#line 408
c_rt_lib0move(&___nl__im__35,___get_global_const(16));
#line 408
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__35, ___nl__im__33));
#line 408
nl_die_arg(___nl__im__35);
#line 406
label_12:
;
#line 406
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(80)));
#line 406
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 407
___nl__int__32 = ___nl__int__36;
#line 408
goto label_11;
#line 408
label_13:
;
#line 408
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(79)));
#line 408
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 409
c_rt_lib0move(&___nl__im__42,___get_global_const(1003));
#line 409
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__29));
#line 409
c_rt_lib0clear(&___nl__im__42);
#line 409
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__41));
#line 409
c_rt_lib0clear(&___nl__im__41);
#line 409
//clear ___nl__int__1;
#line 409
c_rt_lib0clear(&___nl__im__2);
#line 409
c_rt_lib0clear(&___nl__im__3);
#line 409
//clear ___nl__bool__5;
#line 409
c_rt_lib0clear(&___nl__im__7);
#line 409
//clear ___nl__bool__8;
#line 409
c_rt_lib0clear(&___nl__im__9);
#line 409
c_rt_lib0clear(&___nl__im__14);
#line 409
//clear ___nl__bool__15;
#line 409
c_rt_lib0clear(&___nl__im__16);
#line 409
c_rt_lib0clear(&___nl__im__19);
#line 409
//clear ___nl__bool__20;
#line 409
c_rt_lib0clear(&___nl__im__21);
#line 409
c_rt_lib0clear(&___nl__im__24);
#line 409
//clear ___nl__bool__25;
#line 409
c_rt_lib0clear(&___nl__im__26);
#line 409
c_rt_lib0clear(&___nl__im__29);
#line 409
//clear ___nl__int__32;
#line 409
c_rt_lib0clear(&___nl__im__33);
#line 409
//clear ___nl__bool__34;
#line 409
c_rt_lib0clear(&___nl__im__35);
#line 409
//clear ___nl__int__36;
#line 409
c_rt_lib0clear(&___nl__im__37);
#line 409
c_rt_lib0clear(&___nl__im__38);
#line 409
c_rt_lib0clear(&___nl__im__39);
#line 409
return ___nl__im__40;
#line 410
goto label_11;
#line 410
label_11:
;
#line 411
c_rt_lib0move(&___nl__im__43, c_rt_lib0int_new(___nl__int__32));
#line 411
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__im__43));
#line 411
c_rt_lib0clear(&___nl__im__43);
#line 412
goto label_1;
#line 412
label_10:
;
#line 412
___nl__rec_ptr__45 = &((*___ref___rec__0).state0field);
#line 412
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(1004)));
#line 412
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__45, ___nl__im__46);
#line 412
___nl__rec_ptr__45 = NULL;
#line 412
c_rt_lib0clear(&___nl__im__46);
#line 412
if(___nl__bool__5){ goto label_15;}
#line 412
___nl__rec_ptr__47 = &((*___ref___rec__0).state0field);
#line 412
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_const(526)));
#line 412
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__47, ___nl__im__48);
#line 412
___nl__rec_ptr__47 = NULL;
#line 412
c_rt_lib0clear(&___nl__im__48);
#line 412
label_15:
;
#line 412
//clear ___nl__bool__44;
#line 412
___nl__bool__5 = !___nl__bool__5;
#line 412
if(___nl__bool__5){ goto label_14;}
#line 413
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 413
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(1, ___get_global_const(128), ___nl__im__50));
#line 413
c_rt_lib0clear(&___nl__im__50);
#line 414
label_17:
;
#line 414
___nl__rec_ptr__52 = &((*___ref___rec__0).state0field);
#line 414
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_none(___get_global_const(1004)));
#line 414
___nl__bool__51 = ntokenizer0is_type(___nl__rec_ptr__52, ___nl__im__53);
#line 414
___nl__rec_ptr__52 = NULL;
#line 414
c_rt_lib0clear(&___nl__im__53);
#line 414
___nl__bool__51 = !___nl__bool__51;
#line 414
if(___nl__bool__51){ goto label_16;}
#line 415
c_rt_lib0move(&___nl__im__54,___get_global_const(128));
#line 415
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_ref_hash(___nl__im__49, ___nl__im__54));
#line 415
___nl__rec_ptr__56 = &((*___ref___rec__0).state0field);
#line 415
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_const(1004)));
#line 415
c_rt_lib0move(&___nl__im__55, ntokenizer0eat_type(___nl__rec_ptr__56, ___nl__im__57));
#line 415
___nl__rec_ptr__56 = NULL;
#line 415
c_rt_lib0clear(&___nl__im__57);
#line 415
c_rt_lib0delete(array0push(&___nl__im__54, ___nl__im__55));
#line 415
c_rt_lib0move(&___nl__string__58,___get_global_const(128));
#line 415
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__49, ___nl__string__58, ___nl__im__54));
#line 415
c_rt_lib0clear(&___nl__im__54);
#line 415
c_rt_lib0clear(&___nl__im__55);
#line 415
c_rt_lib0clear(&___nl__string__58);
#line 416
goto label_17;
#line 416
label_16:
;
#line 417
___nl__rec_ptr__60 = &((*___ref___rec__0).state0field);
#line 417
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(526)));
#line 417
___nl__bool__59 = ntokenizer0is_type(___nl__rec_ptr__60, ___nl__im__61);
#line 417
___nl__rec_ptr__60 = NULL;
#line 417
c_rt_lib0clear(&___nl__im__61);
#line 417
___nl__bool__59 = !___nl__bool__59;
#line 417
if(___nl__bool__59){ goto label_19;}
#line 418
c_rt_lib0move(&___nl__im__62,___get_global_const(128));
#line 418
c_rt_lib0move(&___nl__im__62, c_rt_lib0get_ref_hash(___nl__im__49, ___nl__im__62));
#line 418
___nl__rec_ptr__64 = &((*___ref___rec__0).state0field);
#line 418
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(526)));
#line 418
c_rt_lib0move(&___nl__im__63, ntokenizer0eat_type(___nl__rec_ptr__64, ___nl__im__65));
#line 418
___nl__rec_ptr__64 = NULL;
#line 418
c_rt_lib0clear(&___nl__im__65);
#line 418
c_rt_lib0delete(array0push(&___nl__im__62, ___nl__im__63));
#line 418
c_rt_lib0move(&___nl__string__66,___get_global_const(128));
#line 418
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__49, ___nl__string__66, ___nl__im__62));
#line 418
c_rt_lib0clear(&___nl__im__62);
#line 418
c_rt_lib0clear(&___nl__im__63);
#line 418
c_rt_lib0clear(&___nl__string__66);
#line 419
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_none(___get_global_const(938)));
#line 419
c_rt_lib0copy(&___nl__im__67, ___nl__im__68);
#line 419
c_rt_lib0hash_set_value_dec(&___nl__im__49, ___get_global_const(940), ___nl__im__67);
#line 419
c_rt_lib0clear(&___nl__im__67);
#line 419
c_rt_lib0clear(&___nl__im__68);
#line 420
goto label_18;
#line 420
label_19:
;
#line 421
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_const(939)));
#line 421
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 421
c_rt_lib0hash_set_value_dec(&___nl__im__49, ___get_global_const(940), ___nl__im__69);
#line 421
c_rt_lib0clear(&___nl__im__69);
#line 421
c_rt_lib0clear(&___nl__im__70);
#line 422
goto label_18;
#line 422
label_18:
;
#line 422
//clear ___nl__bool__59;
#line 423
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(526), ___nl__im__49));
#line 424
goto label_1;
#line 424
label_14:
;
#line 424
___nl__rec_ptr__71 = &((*___ref___rec__0).state0field);
#line 424
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 424
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__71, ___nl__im__72);
#line 424
___nl__rec_ptr__71 = NULL;
#line 424
c_rt_lib0clear(&___nl__im__72);
#line 424
___nl__bool__5 = !___nl__bool__5;
#line 424
if(___nl__bool__5){ goto label_20;}
#line 425
c_rt_lib0move(&___nl__im__74, nparser_priv0parse_label(___ref___rec__0));
#line 425
___nl__bool__73 = c_rt_lib0priv_is(___nl__im__74, ___get_global_const(80));
#line 425
if(___nl__bool__73){ goto label_21;}
#line 425
//clear ___nl__int__1;
#line 425
c_rt_lib0clear(&___nl__im__2);
#line 425
c_rt_lib0clear(&___nl__im__3);
#line 425
//clear ___nl__bool__5;
#line 425
c_rt_lib0clear(&___nl__im__7);
#line 425
//clear ___nl__bool__8;
#line 425
c_rt_lib0clear(&___nl__im__9);
#line 425
c_rt_lib0clear(&___nl__im__14);
#line 425
//clear ___nl__bool__15;
#line 425
c_rt_lib0clear(&___nl__im__16);
#line 425
c_rt_lib0clear(&___nl__im__19);
#line 425
//clear ___nl__bool__20;
#line 425
c_rt_lib0clear(&___nl__im__21);
#line 425
c_rt_lib0clear(&___nl__im__24);
#line 425
//clear ___nl__bool__25;
#line 425
c_rt_lib0clear(&___nl__im__26);
#line 425
c_rt_lib0clear(&___nl__im__29);
#line 425
//clear ___nl__int__32;
#line 425
c_rt_lib0clear(&___nl__im__33);
#line 425
//clear ___nl__bool__34;
#line 425
c_rt_lib0clear(&___nl__im__35);
#line 425
//clear ___nl__int__36;
#line 425
c_rt_lib0clear(&___nl__im__37);
#line 425
c_rt_lib0clear(&___nl__im__38);
#line 425
c_rt_lib0clear(&___nl__im__39);
#line 425
c_rt_lib0clear(&___nl__im__40);
#line 425
c_rt_lib0clear(&___nl__im__49);
#line 425
//clear ___nl__bool__51;
#line 425
//clear ___nl__bool__73;
#line 425
return ___nl__im__74;
#line 425
label_21:
;
#line 425
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__74, ___get_global_const(80)));
#line 426
goto label_1;
#line 426
label_20:
;
#line 426
___nl__rec_ptr__76 = &((*___ref___rec__0).state0field);
#line 426
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_none(___get_global_const(1005)));
#line 426
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__76, ___nl__im__77);
#line 426
___nl__rec_ptr__76 = NULL;
#line 426
c_rt_lib0clear(&___nl__im__77);
#line 426
___nl__bool__75 = !___nl__bool__5;
#line 426
if(___nl__bool__75){ goto label_23;}
#line 426
c_rt_lib0move(&___nl__im__78, nast0get_unary_ops());
#line 427
___nl__rec_ptr__80 = &((*___ref___rec__0).state0field);
#line 427
c_rt_lib0move(&___nl__im__79, ntokenizer0get_token(___nl__rec_ptr__80));
#line 427
___nl__rec_ptr__80 = NULL;
#line 427
___nl__bool__5 = hash0has_key(___nl__im__78, ___nl__im__79);
#line 427
c_rt_lib0clear(&___nl__im__78);
#line 427
c_rt_lib0clear(&___nl__im__79);
#line 427
label_23:
;
#line 427
//clear ___nl__bool__75;
#line 427
___nl__bool__5 = !___nl__bool__5;
#line 427
if(___nl__bool__5){ goto label_22;}
#line 428
___nl__rec_ptr__82 = &((*___ref___rec__0).state0field);
#line 428
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_none(___get_global_const(1005)));
#line 428
c_rt_lib0move(&___nl__im__81, ntokenizer0eat_type(___nl__rec_ptr__82, ___nl__im__83));
#line 428
___nl__rec_ptr__82 = NULL;
#line 428
c_rt_lib0clear(&___nl__im__83);
#line 430
c_rt_lib0move(&___nl__im__86,___get_global_const(305));
#line 430
___nl__bool__85 = c_rt_lib0eq(___nl__im__81, ___nl__im__86);
#line 430
c_rt_lib0clear(&___nl__im__86);
#line 430
___nl__bool__85 = !___nl__bool__85;
#line 430
if(___nl__bool__85){ goto label_25;}
#line 431
___nl__rec_ptr__88 = &((*___ref___rec__0).state0field);
#line 431
c_rt_lib0move(&___nl__im__87, ntokenizer0get_place(___nl__rec_ptr__88));
#line 431
___nl__rec_ptr__88 = NULL;
#line 432
c_rt_lib0move(&___nl__im__90, nparser_priv0parse_fun_label(___ref___rec__0));
#line 432
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_arg(___get_global_const(905), ___nl__im__90));
#line 432
c_rt_lib0clear(&___nl__im__90);
#line 433
___nl__rec_ptr__92 = &((*___ref___rec__0).state0field);
#line 433
c_rt_lib0move(&___nl__im__91, ntokenizer0get_place(___nl__rec_ptr__92));
#line 433
___nl__rec_ptr__92 = NULL;
#line 435
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__87, ___get_global_const(938), ___nl__im__91));
#line 440
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 440
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__93, ___get_global_const(218), ___nl__im__89, ___get_global_const(204), ___nl__im__94));
#line 440
c_rt_lib0clear(&___nl__im__93);
#line 440
c_rt_lib0clear(&___nl__im__94);
#line 442
goto label_24;
#line 442
label_25:
;
#line 443
c_rt_lib0move(&___nl__im__99, nast0get_unary_ops());
#line 443
c_rt_lib0move(&___nl__im__98, hash0get_value(___nl__im__99, ___nl__im__81));
#line 443
c_rt_lib0clear(&___nl__im__99);
#line 443
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_const(919)));
#line 443
___nl__int__97 = getIntFromImm(___nl__im__100);
#line 443
c_rt_lib0clear(&___nl__im__98);
#line 443
c_rt_lib0clear(&___nl__im__100);
#line 443
c_rt_lib0move(&___nl__im__96, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__97));
#line 443
//clear ___nl__int__97;
#line 443
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__96, ___get_global_const(80));
#line 443
if(___nl__bool__95){ goto label_26;}
#line 443
//clear ___nl__int__1;
#line 443
c_rt_lib0clear(&___nl__im__2);
#line 443
c_rt_lib0clear(&___nl__im__3);
#line 443
//clear ___nl__bool__5;
#line 443
c_rt_lib0clear(&___nl__im__7);
#line 443
//clear ___nl__bool__8;
#line 443
c_rt_lib0clear(&___nl__im__9);
#line 443
c_rt_lib0clear(&___nl__im__14);
#line 443
//clear ___nl__bool__15;
#line 443
c_rt_lib0clear(&___nl__im__16);
#line 443
c_rt_lib0clear(&___nl__im__19);
#line 443
//clear ___nl__bool__20;
#line 443
c_rt_lib0clear(&___nl__im__21);
#line 443
c_rt_lib0clear(&___nl__im__24);
#line 443
//clear ___nl__bool__25;
#line 443
c_rt_lib0clear(&___nl__im__26);
#line 443
c_rt_lib0clear(&___nl__im__29);
#line 443
//clear ___nl__int__32;
#line 443
c_rt_lib0clear(&___nl__im__33);
#line 443
//clear ___nl__bool__34;
#line 443
c_rt_lib0clear(&___nl__im__35);
#line 443
//clear ___nl__int__36;
#line 443
c_rt_lib0clear(&___nl__im__37);
#line 443
c_rt_lib0clear(&___nl__im__38);
#line 443
c_rt_lib0clear(&___nl__im__39);
#line 443
c_rt_lib0clear(&___nl__im__40);
#line 443
c_rt_lib0clear(&___nl__im__49);
#line 443
//clear ___nl__bool__51;
#line 443
//clear ___nl__bool__73;
#line 443
c_rt_lib0clear(&___nl__im__74);
#line 443
c_rt_lib0clear(&___nl__im__81);
#line 443
c_rt_lib0clear(&___nl__im__84);
#line 443
//clear ___nl__bool__85;
#line 443
c_rt_lib0clear(&___nl__im__87);
#line 443
c_rt_lib0clear(&___nl__im__89);
#line 443
c_rt_lib0clear(&___nl__im__91);
#line 443
//clear ___nl__bool__95;
#line 443
return ___nl__im__96;
#line 443
label_26:
;
#line 443
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__96, ___get_global_const(80)));
#line 444
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(218)));
#line 444
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(904));
#line 444
c_rt_lib0clear(&___nl__im__102);
#line 444
___nl__bool__101 = !___nl__bool__101;
#line 444
if(___nl__bool__101){ goto label_28;}
#line 444
c_rt_lib0move(&___nl__im__103,___get_global_const(1006));
#line 444
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__103));
#line 444
c_rt_lib0clear(&___nl__im__103);
#line 444
goto label_27;
#line 444
label_28:
;
#line 444
label_27:
;
#line 444
//clear ___nl__bool__101;
#line 445
goto label_24;
#line 445
label_24:
;
#line 445
//clear ___nl__bool__85;
#line 445
c_rt_lib0clear(&___nl__im__87);
#line 445
c_rt_lib0clear(&___nl__im__89);
#line 445
c_rt_lib0clear(&___nl__im__91);
#line 445
//clear ___nl__bool__95;
#line 445
c_rt_lib0clear(&___nl__im__96);
#line 446
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_mk(2, ___get_global_const(513), ___nl__im__81, ___get_global_const(223), ___nl__im__84));
#line 446
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(904), ___nl__im__104));
#line 446
c_rt_lib0clear(&___nl__im__104);
#line 447
goto label_1;
#line 447
label_22:
;
#line 447
___nl__rec_ptr__105 = &((*___ref___rec__0).state0field);
#line 447
c_rt_lib0move(&___nl__im__106, c_rt_lib0ov_mk_none(___get_global_const(1007)));
#line 447
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__105, ___nl__im__106);
#line 447
___nl__rec_ptr__105 = NULL;
#line 447
c_rt_lib0clear(&___nl__im__106);
#line 447
___nl__bool__5 = !___nl__bool__5;
#line 447
if(___nl__bool__5){ goto label_29;}
#line 448
c_rt_lib0move(&___nl__im__108,___get_global_const(534));
#line 448
___nl__bool__107 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__108);
#line 448
c_rt_lib0clear(&___nl__im__108);
#line 448
___nl__bool__107 = !___nl__bool__107;
#line 448
if(___nl__bool__107){ goto label_31;}
#line 449
c_rt_lib0move(&___nl__im__110,___get_global_const(179));
#line 449
c_rt_lib0move(&___nl__im__111, nparser_priv0get_value_nop(___ref___rec__0));
#line 449
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__im__110, ___get_global_const(462), ___nl__im__111));
#line 449
c_rt_lib0clear(&___nl__im__110);
#line 449
c_rt_lib0clear(&___nl__im__111);
#line 449
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(516), ___nl__im__109));
#line 449
c_rt_lib0clear(&___nl__im__109);
#line 450
goto label_30;
#line 450
label_31:
;
#line 450
c_rt_lib0move(&___nl__im__112,___get_global_const(535));
#line 450
___nl__bool__107 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__112);
#line 450
c_rt_lib0clear(&___nl__im__112);
#line 450
___nl__bool__107 = !___nl__bool__107;
#line 450
if(___nl__bool__107){ goto label_32;}
#line 451
c_rt_lib0move(&___nl__im__114,___get_global_const(180));
#line 451
c_rt_lib0move(&___nl__im__115, nparser_priv0get_value_nop(___ref___rec__0));
#line 451
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__im__114, ___get_global_const(462), ___nl__im__115));
#line 451
c_rt_lib0clear(&___nl__im__114);
#line 451
c_rt_lib0clear(&___nl__im__115);
#line 451
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(516), ___nl__im__113));
#line 451
c_rt_lib0clear(&___nl__im__113);
#line 452
goto label_30;
#line 452
label_32:
;
#line 453
c_rt_lib0move(&___nl__im__118,___get_global_const(1008));
#line 453
c_rt_lib0move(&___nl__im__119, string0lf());
#line 453
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__119));
#line 453
c_rt_lib0clear(&___nl__im__118);
#line 453
c_rt_lib0clear(&___nl__im__119);
#line 453
___nl__rec_ptr__121 = &((*___ref___rec__0).state0field);
#line 453
c_rt_lib0move(&___nl__im__120, ntokenizer0info(___nl__rec_ptr__121));
#line 453
___nl__rec_ptr__121 = NULL;
#line 453
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__120));
#line 453
c_rt_lib0clear(&___nl__im__117);
#line 453
c_rt_lib0clear(&___nl__im__120);
#line 454
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__116));
#line 455
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__116));
#line 455
//clear ___nl__int__1;
#line 455
c_rt_lib0clear(&___nl__im__2);
#line 455
c_rt_lib0clear(&___nl__im__3);
#line 455
//clear ___nl__bool__5;
#line 455
c_rt_lib0clear(&___nl__im__7);
#line 455
//clear ___nl__bool__8;
#line 455
c_rt_lib0clear(&___nl__im__9);
#line 455
c_rt_lib0clear(&___nl__im__14);
#line 455
//clear ___nl__bool__15;
#line 455
c_rt_lib0clear(&___nl__im__16);
#line 455
c_rt_lib0clear(&___nl__im__19);
#line 455
//clear ___nl__bool__20;
#line 455
c_rt_lib0clear(&___nl__im__21);
#line 455
c_rt_lib0clear(&___nl__im__24);
#line 455
//clear ___nl__bool__25;
#line 455
c_rt_lib0clear(&___nl__im__26);
#line 455
c_rt_lib0clear(&___nl__im__29);
#line 455
//clear ___nl__int__32;
#line 455
c_rt_lib0clear(&___nl__im__33);
#line 455
//clear ___nl__bool__34;
#line 455
c_rt_lib0clear(&___nl__im__35);
#line 455
//clear ___nl__int__36;
#line 455
c_rt_lib0clear(&___nl__im__37);
#line 455
c_rt_lib0clear(&___nl__im__38);
#line 455
c_rt_lib0clear(&___nl__im__39);
#line 455
c_rt_lib0clear(&___nl__im__40);
#line 455
c_rt_lib0clear(&___nl__im__49);
#line 455
//clear ___nl__bool__51;
#line 455
//clear ___nl__bool__73;
#line 455
c_rt_lib0clear(&___nl__im__74);
#line 455
c_rt_lib0clear(&___nl__im__81);
#line 455
c_rt_lib0clear(&___nl__im__84);
#line 455
//clear ___nl__bool__107;
#line 455
c_rt_lib0clear(&___nl__im__116);
#line 455
return ___nl__im__122;
#line 456
goto label_30;
#line 456
label_30:
;
#line 456
//clear ___nl__bool__107;
#line 456
c_rt_lib0clear(&___nl__im__116);
#line 456
c_rt_lib0clear(&___nl__im__122);
#line 457
goto label_1;
#line 457
label_29:
;
#line 458
c_rt_lib0move(&___nl__im__125,___get_global_const(1009));
#line 458
c_rt_lib0move(&___nl__im__126, string0lf());
#line 458
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__125, ___nl__im__126));
#line 458
c_rt_lib0clear(&___nl__im__125);
#line 458
c_rt_lib0clear(&___nl__im__126);
#line 458
___nl__rec_ptr__128 = &((*___ref___rec__0).state0field);
#line 458
c_rt_lib0move(&___nl__im__127, ntokenizer0info(___nl__rec_ptr__128));
#line 458
___nl__rec_ptr__128 = NULL;
#line 458
c_rt_lib0move(&___nl__im__123, c_rt_lib0concat_new(___nl__im__124, ___nl__im__127));
#line 458
c_rt_lib0clear(&___nl__im__124);
#line 458
c_rt_lib0clear(&___nl__im__127);
#line 459
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__123));
#line 460
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__123));
#line 460
//clear ___nl__int__1;
#line 460
c_rt_lib0clear(&___nl__im__2);
#line 460
c_rt_lib0clear(&___nl__im__3);
#line 460
//clear ___nl__bool__5;
#line 460
c_rt_lib0clear(&___nl__im__7);
#line 460
//clear ___nl__bool__8;
#line 460
c_rt_lib0clear(&___nl__im__9);
#line 460
c_rt_lib0clear(&___nl__im__14);
#line 460
//clear ___nl__bool__15;
#line 460
c_rt_lib0clear(&___nl__im__16);
#line 460
c_rt_lib0clear(&___nl__im__19);
#line 460
//clear ___nl__bool__20;
#line 460
c_rt_lib0clear(&___nl__im__21);
#line 460
c_rt_lib0clear(&___nl__im__24);
#line 460
//clear ___nl__bool__25;
#line 460
c_rt_lib0clear(&___nl__im__26);
#line 460
c_rt_lib0clear(&___nl__im__29);
#line 460
//clear ___nl__int__32;
#line 460
c_rt_lib0clear(&___nl__im__33);
#line 460
//clear ___nl__bool__34;
#line 460
c_rt_lib0clear(&___nl__im__35);
#line 460
//clear ___nl__int__36;
#line 460
c_rt_lib0clear(&___nl__im__37);
#line 460
c_rt_lib0clear(&___nl__im__38);
#line 460
c_rt_lib0clear(&___nl__im__39);
#line 460
c_rt_lib0clear(&___nl__im__40);
#line 460
c_rt_lib0clear(&___nl__im__49);
#line 460
//clear ___nl__bool__51;
#line 460
//clear ___nl__bool__73;
#line 460
c_rt_lib0clear(&___nl__im__74);
#line 460
c_rt_lib0clear(&___nl__im__81);
#line 460
c_rt_lib0clear(&___nl__im__84);
#line 460
c_rt_lib0clear(&___nl__im__123);
#line 460
return ___nl__im__129;
#line 461
goto label_1;
#line 461
label_1:
;
#line 461
//clear ___nl__bool__5;
#line 461
c_rt_lib0clear(&___nl__im__7);
#line 461
//clear ___nl__bool__8;
#line 461
c_rt_lib0clear(&___nl__im__9);
#line 461
c_rt_lib0clear(&___nl__im__14);
#line 461
//clear ___nl__bool__15;
#line 461
c_rt_lib0clear(&___nl__im__16);
#line 461
c_rt_lib0clear(&___nl__im__19);
#line 461
//clear ___nl__bool__20;
#line 461
c_rt_lib0clear(&___nl__im__21);
#line 461
c_rt_lib0clear(&___nl__im__24);
#line 461
//clear ___nl__bool__25;
#line 461
c_rt_lib0clear(&___nl__im__26);
#line 461
c_rt_lib0clear(&___nl__im__29);
#line 461
//clear ___nl__int__32;
#line 461
c_rt_lib0clear(&___nl__im__33);
#line 461
//clear ___nl__bool__34;
#line 461
c_rt_lib0clear(&___nl__im__35);
#line 461
//clear ___nl__int__36;
#line 461
c_rt_lib0clear(&___nl__im__37);
#line 461
c_rt_lib0clear(&___nl__im__38);
#line 461
c_rt_lib0clear(&___nl__im__39);
#line 461
c_rt_lib0clear(&___nl__im__40);
#line 461
c_rt_lib0clear(&___nl__im__49);
#line 461
//clear ___nl__bool__51;
#line 461
//clear ___nl__bool__73;
#line 461
c_rt_lib0clear(&___nl__im__74);
#line 461
c_rt_lib0clear(&___nl__im__81);
#line 461
c_rt_lib0clear(&___nl__im__84);
#line 461
c_rt_lib0clear(&___nl__im__123);
#line 461
c_rt_lib0clear(&___nl__im__129);
#line 463
___nl__rec_ptr__133 = &((*___ref___rec__0).state0field);
#line 463
c_rt_lib0move(&___nl__im__132, ntokenizer0get_place(___nl__rec_ptr__133));
#line 463
___nl__rec_ptr__133 = NULL;
#line 463
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__3, ___get_global_const(938), ___nl__im__132));
#line 463
c_rt_lib0clear(&___nl__im__132);
#line 465
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 465
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__131, ___get_global_const(218), ___nl__im__2, ___get_global_const(204), ___nl__im__134));
#line 465
c_rt_lib0clear(&___nl__im__131);
#line 465
c_rt_lib0clear(&___nl__im__134);
#line 467
c_rt_lib0move(&___nl__im__135, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__130, ___nl__int__1));
#line 467
//clear ___nl__int__1;
#line 467
c_rt_lib0clear(&___nl__im__2);
#line 467
c_rt_lib0clear(&___nl__im__3);
#line 467
c_rt_lib0clear(&___nl__im__130);
#line 467
return ___nl__im__135;
}

nast0value_t0type nparser_priv0get_value_nop(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 473
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 473
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 473
___nl__rec_ptr__4 = NULL;
#line 474
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 474
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 474
___nl__rec_ptr__6 = NULL;
#line 474
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__3, ___get_global_const(938), ___nl__im__5));
#line 474
c_rt_lib0clear(&___nl__im__3);
#line 474
c_rt_lib0clear(&___nl__im__5);
#line 476
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(881)));
#line 477
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 477
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__2, ___get_global_const(218), ___nl__im__7, ___get_global_const(204), ___nl__im__8));
#line 477
c_rt_lib0clear(&___nl__im__2);
#line 477
c_rt_lib0clear(&___nl__im__7);
#line 477
c_rt_lib0clear(&___nl__im__8);
#line 477
return ___nl__im__1;
}

ImmT  nparser_priv0eat_text(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
bool  ___nl__bool__1 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 484
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 484
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 484
___nl__rec_ptr__2 = NULL;
#line 484
___nl__bool__1 = !___nl__bool__1;
#line 484
if(___nl__bool__1){ goto label_2;}
#line 485
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 485
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__5));
#line 485
___nl__rec_ptr__5 = NULL;
#line 485
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__4));
#line 485
c_rt_lib0clear(&___nl__im__4);
#line 485
//clear ___nl__bool__1;
#line 485
return ___nl__im__3;
#line 486
goto label_1;
#line 486
label_2:
;
#line 487
c_rt_lib0move(&___nl__im__6,___get_global_const(1010));
#line 487
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__6));
#line 487
c_rt_lib0clear(&___nl__im__6);
#line 488
c_rt_lib0move(&___nl__im__8,___get_global_const(1010));
#line 488
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__8));
#line 488
c_rt_lib0clear(&___nl__im__8);
#line 488
//clear ___nl__bool__1;
#line 488
c_rt_lib0clear(&___nl__im__3);
#line 488
return ___nl__im__7;
#line 489
goto label_1;
#line 489
label_1:
;
#line 489
//clear ___nl__bool__1;
#line 489
c_rt_lib0clear(&___nl__im__3);
#line 489
c_rt_lib0clear(&___nl__im__7);
}

ImmT  nparser_priv0parse_variant_label(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
bool  ___nl__bool__1 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 493
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 493
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 493
___nl__rec_ptr__2 = NULL;
#line 493
___nl__bool__1 = !___nl__bool__1;
#line 493
if(___nl__bool__1){ goto label_2;}
#line 494
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 494
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_text(___nl__rec_ptr__4));
#line 494
___nl__rec_ptr__4 = NULL;
#line 494
//clear ___nl__bool__1;
#line 494
return ___nl__im__3;
#line 495
goto label_1;
#line 495
label_2:
;
#line 496
c_rt_lib0move(&___nl__im__5,___get_global_const(1010));
#line 496
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__5));
#line 496
c_rt_lib0clear(&___nl__im__5);
#line 497
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 497
//clear ___nl__bool__1;
#line 497
c_rt_lib0clear(&___nl__im__3);
#line 497
return ___nl__im__6;
#line 498
goto label_1;
#line 498
label_1:
;
#line 498
//clear ___nl__bool__1;
#line 498
c_rt_lib0clear(&___nl__im__3);
#line 498
c_rt_lib0clear(&___nl__im__6);
}

ImmT  nparser_priv0parse_variant(nparser0state_t0type* ___ref___rec__0) {
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
#line 502
c_rt_lib0move(&___nl__im__1,___get_global_const(483));
#line 502
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 502
c_rt_lib0clear(&___nl__im__1);
#line 502
//clear ___nl__bool__2;
#line 503
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_variant_label(___ref___rec__0));
#line 504
c_rt_lib0move(&___nl__im__4, nparser_priv0get_value_nop(___ref___rec__0));
#line 505
c_rt_lib0move(&___nl__im__6,___get_global_const(419));
#line 505
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 505
c_rt_lib0clear(&___nl__im__6);
#line 505
___nl__bool__5 = !___nl__bool__5;
#line 505
if(___nl__bool__5){ goto label_2;}
#line 506
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_expr(___ref___rec__0));
#line 506
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 506
if(___nl__bool__7){ goto label_3;}
#line 506
c_rt_lib0clear(&___nl__im__3);
#line 506
c_rt_lib0clear(&___nl__im__4);
#line 506
//clear ___nl__bool__5;
#line 506
//clear ___nl__bool__7;
#line 506
return ___nl__im__8;
#line 506
label_3:
;
#line 506
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 507
c_rt_lib0move(&___nl__im__9,___get_global_const(298));
#line 507
___nl__bool__10 = nparser_priv0eat(___ref___rec__0, ___nl__im__9);
#line 507
c_rt_lib0clear(&___nl__im__9);
#line 507
//clear ___nl__bool__10;
#line 508
goto label_1;
#line 508
label_2:
;
#line 509
c_rt_lib0move(&___nl__im__4, nparser_priv0get_value_nop(___ref___rec__0));
#line 510
goto label_1;
#line 510
label_1:
;
#line 510
//clear ___nl__bool__5;
#line 510
//clear ___nl__bool__7;
#line 510
c_rt_lib0clear(&___nl__im__8);
#line 511
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__im__3, ___get_global_const(462), ___nl__im__4));
#line 511
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__12));
#line 511
c_rt_lib0clear(&___nl__im__12);
#line 511
c_rt_lib0clear(&___nl__im__3);
#line 511
c_rt_lib0clear(&___nl__im__4);
#line 511
return ___nl__im__11;
}

ImmT  nparser_priv0check_lvalue(nparser0state_t0type* ___ref___rec__0,nast0value_t0type ___nl__im__1) {
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
#line 515
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 515
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(462));
#line 515
c_rt_lib0clear(&___nl__im__3);
#line 515
___nl__bool__2 = !___nl__bool__2;
#line 515
if(___nl__bool__2){ goto label_2;}
#line 516
c_rt_lib0clear(&___nl__im__1);
#line 516
//clear ___nl__bool__2;
#line 516
return NULL;
#line 517
goto label_1;
#line 517
label_2:
;
#line 517
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 517
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(233));
#line 517
c_rt_lib0clear(&___nl__im__4);
#line 517
___nl__bool__2 = !___nl__bool__2;
#line 517
if(___nl__bool__2){ goto label_3;}
#line 518
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 518
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 518
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(233)));
#line 518
c_rt_lib0clear(&___nl__im__6);
#line 518
c_rt_lib0clear(&___nl__im__7);
#line 519
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(513)));
#line 519
c_rt_lib0move(&___nl__im__13,___get_global_const(531));
#line 519
___nl__bool__8 = c_rt_lib0eq(___nl__im__12, ___nl__im__13);
#line 519
c_rt_lib0clear(&___nl__im__12);
#line 519
c_rt_lib0clear(&___nl__im__13);
#line 519
if(___nl__bool__8){ goto label_8;}
#line 519
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(513)));
#line 519
c_rt_lib0move(&___nl__im__15,___get_global_const(897));
#line 519
___nl__bool__8 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 519
c_rt_lib0clear(&___nl__im__14);
#line 519
c_rt_lib0clear(&___nl__im__15);
#line 519
label_8:
;
#line 519
//clear ___nl__bool__11;
#line 519
if(___nl__bool__8){ goto label_7;}
#line 519
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(513)));
#line 519
c_rt_lib0move(&___nl__im__17,___get_global_const(898));
#line 519
___nl__bool__8 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 519
c_rt_lib0clear(&___nl__im__16);
#line 519
c_rt_lib0clear(&___nl__im__17);
#line 519
label_7:
;
#line 519
//clear ___nl__bool__10;
#line 519
if(___nl__bool__8){ goto label_6;}
#line 519
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(513)));
#line 519
c_rt_lib0move(&___nl__im__19,___get_global_const(899));
#line 519
___nl__bool__8 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 519
c_rt_lib0clear(&___nl__im__18);
#line 519
c_rt_lib0clear(&___nl__im__19);
#line 519
label_6:
;
#line 519
//clear ___nl__bool__9;
#line 519
___nl__bool__8 = !___nl__bool__8;
#line 519
if(___nl__bool__8){ goto label_5;}
#line 520
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(273)));
#line 520
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__20));
#line 520
c_rt_lib0clear(&___nl__im__20);
#line 521
c_rt_lib0clear(&___nl__im__1);
#line 521
//clear ___nl__bool__2;
#line 521
c_rt_lib0clear(&___nl__im__5);
#line 521
//clear ___nl__bool__8;
#line 521
return NULL;
#line 522
goto label_4;
#line 522
label_5:
;
#line 522
label_4:
;
#line 522
//clear ___nl__bool__8;
#line 523
goto label_1;
#line 523
label_3:
;
#line 523
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 523
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(900));
#line 523
c_rt_lib0clear(&___nl__im__21);
#line 523
___nl__bool__2 = !___nl__bool__2;
#line 523
if(___nl__bool__2){ goto label_9;}
#line 524
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 524
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 524
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(900)));
#line 524
c_rt_lib0clear(&___nl__im__23);
#line 524
c_rt_lib0clear(&___nl__im__24);
#line 524
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__22));
#line 524
c_rt_lib0clear(&___nl__im__22);
#line 525
c_rt_lib0clear(&___nl__im__1);
#line 525
//clear ___nl__bool__2;
#line 525
c_rt_lib0clear(&___nl__im__5);
#line 525
return NULL;
#line 526
goto label_1;
#line 526
label_9:
;
#line 526
label_1:
;
#line 526
//clear ___nl__bool__2;
#line 526
c_rt_lib0clear(&___nl__im__5);
#line 527
c_rt_lib0move(&___nl__im__25,___get_global_const(1011));
#line 527
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__25));
#line 527
c_rt_lib0clear(&___nl__im__25);
#line 527
c_rt_lib0clear(&___nl__im__1);
#line 527
return NULL;
}

nast0variant_decl_t0type nparser_priv0parse_variant_decl(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__9 = NULL;
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
bool  ___nl__bool__22 = false;
#line 531
c_rt_lib0move(&___nl__im__1,___get_global_const(483));
#line 531
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 531
c_rt_lib0clear(&___nl__im__1);
#line 531
//clear ___nl__bool__2;
#line 532
c_rt_lib0move(&___nl__im__4, nparser_priv0parse_variant_label(___ref___rec__0));
#line 532
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 532
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__im__4, ___get_global_const(218), ___nl__im__5));
#line 532
c_rt_lib0clear(&___nl__im__4);
#line 532
c_rt_lib0clear(&___nl__im__5);
#line 533
c_rt_lib0move(&___nl__im__7,___get_global_const(419));
#line 533
___nl__bool__6 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__7);
#line 533
c_rt_lib0clear(&___nl__im__7);
#line 533
___nl__bool__6 = !___nl__bool__6;
#line 533
if(___nl__bool__6){ goto label_2;}
#line 534
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 534
c_rt_lib0move(&___nl__im__10,___get_global_const(462));
#line 534
___nl__bool__8 = ntokenizer0next_is(___nl__rec_ptr__9, ___nl__im__10);
#line 534
___nl__rec_ptr__9 = NULL;
#line 534
c_rt_lib0clear(&___nl__im__10);
#line 534
___nl__bool__8 = !___nl__bool__8;
#line 534
if(___nl__bool__8){ goto label_4;}
#line 535
c_rt_lib0move(&___nl__im__14, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 535
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 535
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(451), ___nl__im__14, ___get_global_const(265), ___nl__im__15));
#line 535
c_rt_lib0clear(&___nl__im__14);
#line 535
c_rt_lib0clear(&___nl__im__15);
#line 535
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__im__13));
#line 535
c_rt_lib0clear(&___nl__im__13);
#line 535
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 535
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(218), ___nl__im__11);
#line 535
c_rt_lib0clear(&___nl__im__11);
#line 535
c_rt_lib0clear(&___nl__im__12);
#line 536
goto label_3;
#line 536
label_4:
;
#line 537
c_rt_lib0move(&___nl__im__19, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 537
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 537
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(451), ___nl__im__19, ___get_global_const(265), ___nl__im__20));
#line 537
c_rt_lib0clear(&___nl__im__19);
#line 537
c_rt_lib0clear(&___nl__im__20);
#line 537
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__im__18));
#line 537
c_rt_lib0clear(&___nl__im__18);
#line 537
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 537
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(218), ___nl__im__16);
#line 537
c_rt_lib0clear(&___nl__im__16);
#line 537
c_rt_lib0clear(&___nl__im__17);
#line 538
goto label_3;
#line 538
label_3:
;
#line 538
//clear ___nl__bool__8;
#line 539
c_rt_lib0move(&___nl__im__21,___get_global_const(298));
#line 539
___nl__bool__22 = nparser_priv0eat(___ref___rec__0, ___nl__im__21);
#line 539
c_rt_lib0clear(&___nl__im__21);
#line 539
//clear ___nl__bool__22;
#line 540
goto label_1;
#line 540
label_2:
;
#line 540
label_1:
;
#line 540
//clear ___nl__bool__6;
#line 541
return ___nl__im__3;
}

ImmT  nparser_priv0parse_var_decl(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
bool * ___nl__bool_ptr__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
#line 545
c_rt_lib0move(&___nl__im__1,___get_global_const(462));
#line 545
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 545
c_rt_lib0clear(&___nl__im__1);
#line 545
//clear ___nl__bool__2;
#line 546
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 546
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 546
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 546
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 546
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(166), ___nl__im__4, ___get_global_const(204), ___nl__im__5, ___get_global_const(453), ___nl__im__6, ___get_global_const(218), ___nl__im__7));
#line 546
c_rt_lib0clear(&___nl__im__4);
#line 546
c_rt_lib0clear(&___nl__im__5);
#line 546
c_rt_lib0clear(&___nl__im__6);
#line 546
c_rt_lib0clear(&___nl__im__7);
#line 547
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 547
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 547
___nl__bool__8 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 547
___nl__rec_ptr__9 = NULL;
#line 547
c_rt_lib0clear(&___nl__im__10);
#line 547
___nl__bool__8 = !___nl__bool__8;
#line 547
if(___nl__bool__8){ goto label_2;}
#line 548
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 548
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 548
c_rt_lib0move(&___nl__im__12, ntokenizer0eat_type(___nl__rec_ptr__13, ___nl__im__14));
#line 548
___nl__rec_ptr__13 = NULL;
#line 548
c_rt_lib0clear(&___nl__im__14);
#line 548
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 548
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(166), ___nl__im__11);
#line 548
c_rt_lib0clear(&___nl__im__11);
#line 548
c_rt_lib0clear(&___nl__im__12);
#line 549
goto label_1;
#line 549
label_2:
;
#line 550
c_rt_lib0move(&___nl__im__15,___get_global_const(1012));
#line 550
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__15));
#line 550
c_rt_lib0clear(&___nl__im__15);
#line 551
goto label_1;
#line 551
label_1:
;
#line 551
//clear ___nl__bool__8;
#line 552
c_rt_lib0move(&___nl__im__17,___get_global_const(483));
#line 552
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 552
c_rt_lib0clear(&___nl__im__17);
#line 552
___nl__bool__16 = !___nl__bool__16;
#line 552
if(___nl__bool__16){ goto label_4;}
#line 553
c_rt_lib0move(&___nl__im__20, nparser_priv0parse_type(___ref___rec__0));
#line 553
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(80));
#line 553
if(___nl__bool__19){ goto label_5;}
#line 553
c_rt_lib0clear(&___nl__im__3);
#line 553
//clear ___nl__bool__16;
#line 553
c_rt_lib0clear(&___nl__im__18);
#line 553
//clear ___nl__bool__19;
#line 553
return ___nl__im__20;
#line 553
label_5:
;
#line 553
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(80)));
#line 554
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(204), ___nl__im__18));
#line 554
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 554
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(204), ___nl__im__21);
#line 554
c_rt_lib0clear(&___nl__im__21);
#line 554
c_rt_lib0clear(&___nl__im__22);
#line 555
___nl__bool_ptr__24 = &((*___ref___rec__0).parse_types0field);
#line 555
___nl__bool__23 = (*___nl__bool_ptr__24);
#line 555
___nl__bool_ptr__24 = NULL;
#line 555
___nl__bool__23 = !___nl__bool__23;
#line 555
if(___nl__bool__23){ goto label_7;}
#line 556
c_rt_lib0move(&___nl__im__27, ptd_parser0try_value_to_ptd(___nl__im__18));
#line 556
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__27, ___get_global_const(80));
#line 556
if(___nl__bool__26){ goto label_8;}
#line 556
c_rt_lib0clear(&___nl__im__3);
#line 556
//clear ___nl__bool__16;
#line 556
c_rt_lib0clear(&___nl__im__18);
#line 556
//clear ___nl__bool__19;
#line 556
c_rt_lib0clear(&___nl__im__20);
#line 556
//clear ___nl__bool__23;
#line 556
c_rt_lib0clear(&___nl__im__25);
#line 556
//clear ___nl__bool__26;
#line 556
return ___nl__im__27;
#line 556
label_8:
;
#line 556
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__27, ___get_global_const(80)));
#line 557
c_rt_lib0copy(&___nl__im__28, ___nl__im__25);
#line 557
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(453), ___nl__im__28);
#line 557
c_rt_lib0clear(&___nl__im__28);
#line 558
goto label_6;
#line 558
label_7:
;
#line 558
label_6:
;
#line 558
//clear ___nl__bool__23;
#line 558
c_rt_lib0clear(&___nl__im__25);
#line 558
//clear ___nl__bool__26;
#line 558
c_rt_lib0clear(&___nl__im__27);
#line 559
goto label_3;
#line 559
label_4:
;
#line 559
label_3:
;
#line 559
//clear ___nl__bool__16;
#line 559
c_rt_lib0clear(&___nl__im__18);
#line 559
//clear ___nl__bool__19;
#line 559
c_rt_lib0clear(&___nl__im__20);
#line 560
c_rt_lib0move(&___nl__im__30,___get_global_const(911));
#line 560
___nl__bool__29 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__30);
#line 560
c_rt_lib0clear(&___nl__im__30);
#line 560
___nl__bool__29 = !___nl__bool__29;
#line 560
if(___nl__bool__29){ goto label_10;}
#line 561
c_rt_lib0move(&___nl__im__33, nparser_priv0parse_expr(___ref___rec__0));
#line 561
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(80));
#line 561
if(___nl__bool__32){ goto label_11;}
#line 561
c_rt_lib0clear(&___nl__im__3);
#line 561
//clear ___nl__bool__29;
#line 561
c_rt_lib0clear(&___nl__im__31);
#line 561
//clear ___nl__bool__32;
#line 561
return ___nl__im__33;
#line 561
label_11:
;
#line 561
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(80)));
#line 562
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__im__31));
#line 562
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 562
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(218), ___nl__im__34);
#line 562
c_rt_lib0clear(&___nl__im__34);
#line 562
c_rt_lib0clear(&___nl__im__35);
#line 563
goto label_9;
#line 563
label_10:
;
#line 563
label_9:
;
#line 563
//clear ___nl__bool__29;
#line 563
c_rt_lib0clear(&___nl__im__31);
#line 563
//clear ___nl__bool__32;
#line 563
c_rt_lib0clear(&___nl__im__33);
#line 564
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 564
c_rt_lib0clear(&___nl__im__3);
#line 564
return ___nl__im__36;
}

nast0variable_declaration_t0type nparser_priv0parse_var_decl_sim(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 568
c_rt_lib0move(&___nl__im__1,___get_global_const(462));
#line 568
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 568
c_rt_lib0clear(&___nl__im__1);
#line 568
//clear ___nl__bool__2;
#line 569
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 569
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 569
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 569
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 569
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(166), ___nl__im__4, ___get_global_const(204), ___nl__im__5, ___get_global_const(453), ___nl__im__6, ___get_global_const(218), ___nl__im__7));
#line 569
c_rt_lib0clear(&___nl__im__4);
#line 569
c_rt_lib0clear(&___nl__im__5);
#line 569
c_rt_lib0clear(&___nl__im__6);
#line 569
c_rt_lib0clear(&___nl__im__7);
#line 570
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 570
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 570
___nl__bool__8 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 570
___nl__rec_ptr__9 = NULL;
#line 570
c_rt_lib0clear(&___nl__im__10);
#line 570
___nl__bool__8 = !___nl__bool__8;
#line 570
if(___nl__bool__8){ goto label_2;}
#line 571
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 571
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 571
c_rt_lib0move(&___nl__im__12, ntokenizer0eat_type(___nl__rec_ptr__13, ___nl__im__14));
#line 571
___nl__rec_ptr__13 = NULL;
#line 571
c_rt_lib0clear(&___nl__im__14);
#line 571
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 571
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(166), ___nl__im__11);
#line 571
c_rt_lib0clear(&___nl__im__11);
#line 571
c_rt_lib0clear(&___nl__im__12);
#line 572
goto label_1;
#line 572
label_2:
;
#line 573
c_rt_lib0move(&___nl__im__15,___get_global_const(1012));
#line 573
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__15));
#line 573
c_rt_lib0clear(&___nl__im__15);
#line 574
goto label_1;
#line 574
label_1:
;
#line 574
//clear ___nl__bool__8;
#line 575
return ___nl__im__3;
}

nast0variable_declaration_t0type nparser_priv0parse_ref_var_decl_sim(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 579
c_rt_lib0move(&___nl__im__1,___get_global_const(40));
#line 579
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 579
c_rt_lib0clear(&___nl__im__1);
#line 579
//clear ___nl__bool__2;
#line 580
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 580
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 580
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 580
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 580
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(166), ___nl__im__4, ___get_global_const(204), ___nl__im__5, ___get_global_const(453), ___nl__im__6, ___get_global_const(218), ___nl__im__7));
#line 580
c_rt_lib0clear(&___nl__im__4);
#line 580
c_rt_lib0clear(&___nl__im__5);
#line 580
c_rt_lib0clear(&___nl__im__6);
#line 580
c_rt_lib0clear(&___nl__im__7);
#line 581
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 581
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 581
___nl__bool__8 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 581
___nl__rec_ptr__9 = NULL;
#line 581
c_rt_lib0clear(&___nl__im__10);
#line 581
___nl__bool__8 = !___nl__bool__8;
#line 581
if(___nl__bool__8){ goto label_2;}
#line 582
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 582
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(991)));
#line 582
c_rt_lib0move(&___nl__im__12, ntokenizer0eat_type(___nl__rec_ptr__13, ___nl__im__14));
#line 582
___nl__rec_ptr__13 = NULL;
#line 582
c_rt_lib0clear(&___nl__im__14);
#line 582
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 582
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(166), ___nl__im__11);
#line 582
c_rt_lib0clear(&___nl__im__11);
#line 582
c_rt_lib0clear(&___nl__im__12);
#line 583
goto label_1;
#line 583
label_2:
;
#line 584
c_rt_lib0move(&___nl__im__15,___get_global_const(1012));
#line 584
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__15));
#line 584
c_rt_lib0clear(&___nl__im__15);
#line 585
goto label_1;
#line 585
label_1:
;
#line 585
//clear ___nl__bool__8;
#line 586
return ___nl__im__3;
}

ImmT  nparser_priv0parse_cond(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
#line 590
c_rt_lib0move(&___nl__im__1,___get_global_const(419));
#line 590
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 590
c_rt_lib0clear(&___nl__im__1);
#line 590
//clear ___nl__bool__2;
#line 591
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr(___ref___rec__0));
#line 591
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(80));
#line 591
if(___nl__bool__4){ goto label_1;}
#line 591
c_rt_lib0clear(&___nl__im__3);
#line 591
//clear ___nl__bool__4;
#line 591
return ___nl__im__5;
#line 591
label_1:
;
#line 591
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(80)));
#line 592
c_rt_lib0move(&___nl__im__6,___get_global_const(298));
#line 592
___nl__bool__7 = nparser_priv0eat(___ref___rec__0, ___nl__im__6);
#line 592
c_rt_lib0clear(&___nl__im__6);
#line 592
//clear ___nl__bool__7;
#line 593
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 593
c_rt_lib0clear(&___nl__im__3);
#line 593
//clear ___nl__bool__4;
#line 593
c_rt_lib0clear(&___nl__im__5);
#line 593
return ___nl__im__8;
}

nparser0try_cmd_t0type nparser_priv0parse_block(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 597
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 597
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 597
___nl__rec_ptr__2 = NULL;
#line 598
c_rt_lib0move(&___nl__im__3,___get_global_const(290));
#line 598
___nl__bool__4 = nparser_priv0eat(___ref___rec__0, ___nl__im__3);
#line 598
c_rt_lib0clear(&___nl__im__3);
#line 598
//clear ___nl__bool__4;
#line 599
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 600
label_2:
;
#line 600
c_rt_lib0move(&___nl__im__7,___get_global_const(291));
#line 600
___nl__bool__6 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__7);
#line 600
c_rt_lib0clear(&___nl__im__7);
#line 600
___nl__bool__6 = !___nl__bool__6;
#line 600
___nl__bool__6 = !___nl__bool__6;
#line 600
if(___nl__bool__6){ goto label_1;}
#line 601
c_rt_lib0move(&___nl__im__9,___get_global_const(408));
#line 601
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 601
c_rt_lib0clear(&___nl__im__9);
#line 601
___nl__bool__8 = !___nl__bool__8;
#line 601
if(___nl__bool__8){ goto label_4;}
#line 601
goto label_2;
#line 601
goto label_3;
#line 601
label_4:
;
#line 601
label_3:
;
#line 601
//clear ___nl__bool__8;
#line 602
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_cmd(___ref___rec__0));
#line 602
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(80));
#line 602
if(___nl__bool__11){ goto label_5;}
#line 602
c_rt_lib0clear(&___nl__im__1);
#line 602
c_rt_lib0clear(&___nl__im__5);
#line 602
//clear ___nl__bool__6;
#line 602
c_rt_lib0clear(&___nl__im__10);
#line 602
//clear ___nl__bool__11;
#line 602
return ___nl__im__12;
#line 602
label_5:
;
#line 602
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(80)));
#line 603
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__10));
#line 603
c_rt_lib0clear(&___nl__im__10);
#line 603
//clear ___nl__bool__11;
#line 603
c_rt_lib0clear(&___nl__im__12);
#line 604
goto label_2;
#line 604
label_1:
;
#line 605
___nl__rec_ptr__14 = &((*___ref___rec__0).state0field);
#line 605
c_rt_lib0move(&___nl__im__13, ntokenizer0get_place_ws(___nl__rec_ptr__14));
#line 605
___nl__rec_ptr__14 = NULL;
#line 606
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__13));
#line 607
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(879), ___nl__im__5));
#line 607
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(220), ___nl__im__15, ___get_global_const(226), ___nl__im__18));
#line 607
c_rt_lib0clear(&___nl__im__18);
#line 607
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__17));
#line 607
c_rt_lib0clear(&___nl__im__17);
#line 607
c_rt_lib0clear(&___nl__im__1);
#line 607
c_rt_lib0clear(&___nl__im__5);
#line 607
//clear ___nl__bool__6;
#line 607
c_rt_lib0clear(&___nl__im__10);
#line 607
//clear ___nl__bool__11;
#line 607
c_rt_lib0clear(&___nl__im__12);
#line 607
c_rt_lib0clear(&___nl__im__13);
#line 607
c_rt_lib0clear(&___nl__im__15);
#line 607
return ___nl__im__16;
}

ImmT  nparser_priv0parse_try_ensure(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
bool  ___nl__bool__1 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
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
#line 611
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 611
c_rt_lib0move(&___nl__im__3,___get_global_const(462));
#line 611
___nl__bool__1 = ntokenizer0next_is(___nl__rec_ptr__2, ___nl__im__3);
#line 611
___nl__rec_ptr__2 = NULL;
#line 611
c_rt_lib0clear(&___nl__im__3);
#line 611
___nl__bool__1 = !___nl__bool__1;
#line 611
if(___nl__bool__1){ goto label_2;}
#line 612
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_var_decl(___ref___rec__0));
#line 612
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(80));
#line 612
if(___nl__bool__5){ goto label_3;}
#line 612
//clear ___nl__bool__1;
#line 612
c_rt_lib0clear(&___nl__im__4);
#line 612
//clear ___nl__bool__5;
#line 612
return ___nl__im__6;
#line 612
label_3:
;
#line 612
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(80)));
#line 613
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(687), ___nl__im__4));
#line 613
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__8));
#line 613
c_rt_lib0clear(&___nl__im__8);
#line 613
//clear ___nl__bool__1;
#line 613
c_rt_lib0clear(&___nl__im__4);
#line 613
//clear ___nl__bool__5;
#line 613
c_rt_lib0clear(&___nl__im__6);
#line 613
return ___nl__im__7;
#line 614
goto label_1;
#line 614
label_2:
;
#line 615
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_expr(___ref___rec__0));
#line 615
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(80));
#line 615
if(___nl__bool__10){ goto label_4;}
#line 615
//clear ___nl__bool__1;
#line 615
c_rt_lib0clear(&___nl__im__4);
#line 615
//clear ___nl__bool__5;
#line 615
c_rt_lib0clear(&___nl__im__6);
#line 615
c_rt_lib0clear(&___nl__im__7);
#line 615
c_rt_lib0clear(&___nl__im__9);
#line 615
//clear ___nl__bool__10;
#line 615
return ___nl__im__11;
#line 615
label_4:
;
#line 615
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(80)));
#line 616
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(218)));
#line 616
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(233));
#line 616
c_rt_lib0clear(&___nl__im__14);
#line 616
___nl__bool__13 = !___nl__bool__12;
#line 616
if(___nl__bool__13){ goto label_7;}
#line 616
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(218)));
#line 616
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(218)));
#line 616
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(233)));
#line 616
c_rt_lib0clear(&___nl__im__17);
#line 616
c_rt_lib0clear(&___nl__im__18);
#line 616
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(513)));
#line 616
c_rt_lib0clear(&___nl__im__16);
#line 616
c_rt_lib0move(&___nl__im__19,___get_global_const(911));
#line 616
___nl__bool__12 = c_rt_lib0eq(___nl__im__15, ___nl__im__19);
#line 616
c_rt_lib0clear(&___nl__im__15);
#line 616
c_rt_lib0clear(&___nl__im__19);
#line 616
label_7:
;
#line 616
//clear ___nl__bool__13;
#line 616
___nl__bool__12 = !___nl__bool__12;
#line 616
if(___nl__bool__12){ goto label_6;}
#line 617
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(218)));
#line 617
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(218)));
#line 617
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(233)));
#line 617
c_rt_lib0clear(&___nl__im__23);
#line 617
c_rt_lib0clear(&___nl__im__24);
#line 617
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(895), ___nl__im__22));
#line 617
c_rt_lib0clear(&___nl__im__22);
#line 617
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__21));
#line 617
c_rt_lib0clear(&___nl__im__21);
#line 617
//clear ___nl__bool__1;
#line 617
c_rt_lib0clear(&___nl__im__4);
#line 617
//clear ___nl__bool__5;
#line 617
c_rt_lib0clear(&___nl__im__6);
#line 617
c_rt_lib0clear(&___nl__im__7);
#line 617
c_rt_lib0clear(&___nl__im__9);
#line 617
//clear ___nl__bool__10;
#line 617
c_rt_lib0clear(&___nl__im__11);
#line 617
//clear ___nl__bool__12;
#line 617
return ___nl__im__20;
#line 618
goto label_5;
#line 618
label_6:
;
#line 619
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(896), ___nl__im__9));
#line 619
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__26));
#line 619
c_rt_lib0clear(&___nl__im__26);
#line 619
//clear ___nl__bool__1;
#line 619
c_rt_lib0clear(&___nl__im__4);
#line 619
//clear ___nl__bool__5;
#line 619
c_rt_lib0clear(&___nl__im__6);
#line 619
c_rt_lib0clear(&___nl__im__7);
#line 619
c_rt_lib0clear(&___nl__im__9);
#line 619
//clear ___nl__bool__10;
#line 619
c_rt_lib0clear(&___nl__im__11);
#line 619
//clear ___nl__bool__12;
#line 619
c_rt_lib0clear(&___nl__im__20);
#line 619
return ___nl__im__25;
#line 620
goto label_5;
#line 620
label_5:
;
#line 620
//clear ___nl__bool__12;
#line 620
c_rt_lib0clear(&___nl__im__20);
#line 620
c_rt_lib0clear(&___nl__im__25);
#line 621
goto label_1;
#line 621
label_1:
;
#line 621
//clear ___nl__bool__1;
#line 621
c_rt_lib0clear(&___nl__im__4);
#line 621
//clear ___nl__bool__5;
#line 621
c_rt_lib0clear(&___nl__im__6);
#line 621
c_rt_lib0clear(&___nl__im__7);
#line 621
c_rt_lib0clear(&___nl__im__9);
#line 621
//clear ___nl__bool__10;
#line 621
c_rt_lib0clear(&___nl__im__11);
}

nast0debug_t0type nparser_priv0get_debug_from_begin(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
#line 625
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 625
c_rt_lib0move(&___nl__im__2, ntokenizer0get_place(___nl__rec_ptr__3));
#line 625
___nl__rec_ptr__3 = NULL;
#line 625
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 625
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 625
___nl__rec_ptr__5 = NULL;
#line 625
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__2, ___get_global_const(938), ___nl__im__4));
#line 625
c_rt_lib0clear(&___nl__im__2);
#line 625
c_rt_lib0clear(&___nl__im__4);
#line 625
return ___nl__im__1;
}

nparser0try_cmd_t0type nparser_priv0parse_cmd(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
bool  ___nl__bool__72 = false;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
bool  ___nl__bool__77 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
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
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
bool  ___nl__bool__97 = false;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
bool  ___nl__bool__101 = false;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
bool  ___nl__bool__107 = false;
bool  ___nl__bool__108 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
bool  ___nl__bool__112 = false;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
bool  ___nl__bool__122 = false;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
bool  ___nl__bool__127 = false;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
bool  ___nl__bool__130 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__131 = NULL;
ImmT  ___nl__im__132 = NULL;
bool  ___nl__bool__133 = false;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
bool  ___nl__bool__137 = false;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
bool  ___nl__bool__140 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__141 = NULL;
ImmT  ___nl__im__142 = NULL;
bool  ___nl__bool__143 = false;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
bool  ___nl__bool__147 = false;
bool  ___nl__bool__148 = false;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
bool  ___nl__bool__154 = false;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__160 = NULL;
bool  ___nl__bool__161 = false;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
INT  ___nl__int__164 = 0;
INT  ___nl__int__165 = 0;
INT  ___nl__int__166 = 0;
bool  ___nl__bool__167 = false;
INT  ___nl__int__168 = 0;
ImmT  ___nl__im__169 = NULL;
bool  ___nl__bool__170 = false;
bool  ___nl__bool__171 = false;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
bool  ___nl__bool__174 = false;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
bool  ___nl__bool__178 = false;
ImmT  ___nl__im__179 = NULL;
bool  ___nl__bool__180 = false;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
bool  ___nl__bool__185 = false;
ImmT  ___nl__im__186 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__187 = NULL;
bool  ___nl__bool__188 = false;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
ImmT  ___nl__im__194 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__195 = NULL;
bool  ___nl__bool__196 = false;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__string__200 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
bool  ___nl__bool__204 = false;
ImmT  ___nl__im__205 = NULL;
bool  ___nl__bool__206 = false;
ImmT  ___nl__im__207 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__208 = NULL;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
bool  ___nl__bool__211 = false;
ImmT  ___nl__im__212 = NULL;
ImmT  ___nl__im__213 = NULL;
bool  ___nl__bool__214 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__215 = NULL;
ImmT  ___nl__im__216 = NULL;
ImmT  ___nl__im__217 = NULL;
bool  ___nl__bool__218 = false;
ImmT  ___nl__im__219 = NULL;
bool  ___nl__bool__220 = false;
ImmT  ___nl__im__221 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
bool  ___nl__bool__225 = false;
ImmT  ___nl__im__226 = NULL;
bool  ___nl__bool__227 = false;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
bool  ___nl__bool__230 = false;
ImmT  ___nl__im__231 = NULL;
bool  ___nl__bool__232 = false;
bool  ___nl__bool__233 = false;
bool  ___nl__bool__234 = false;
bool  ___nl__bool__235 = false;
bool  ___nl__bool__236 = false;
bool  ___nl__bool__237 = false;
bool  ___nl__bool__238 = false;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
bool  ___nl__bool__244 = false;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
bool  ___nl__bool__247 = false;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__im__249 = NULL;
ImmT  ___nl__im__250 = NULL;
bool  ___nl__bool__251 = false;
bool  ___nl__bool__252 = false;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
bool  ___nl__bool__256 = false;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
bool  ___nl__bool__259 = false;
ImmT  ___nl__im__260 = NULL;
ImmT  ___nl__im__261 = NULL;
ImmT  ___nl__im__262 = NULL;
bool  ___nl__bool__263 = false;
bool  ___nl__bool__264 = false;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
bool  ___nl__bool__268 = false;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
bool  ___nl__bool__271 = false;
ImmT  ___nl__im__272 = NULL;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
bool  ___nl__bool__275 = false;
bool  ___nl__bool__276 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
ImmT  ___nl__im__280 = NULL;
ImmT  ___nl__im__281 = NULL;
ImmT  ___nl__im__282 = NULL;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ImmT  ___nl__im__286 = NULL;
ImmT  ___nl__im__287 = NULL;
bool  ___nl__bool__288 = false;
bool  ___nl__bool__289 = false;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__im__292 = NULL;
bool  ___nl__bool__293 = false;
ImmT  ___nl__im__294 = NULL;
bool  ___nl__bool__295 = false;
ImmT  ___nl__im__296 = NULL;
ImmT  ___nl__im__297 = NULL;
ImmT  ___nl__im__298 = NULL;
bool  ___nl__bool__299 = false;
ImmT  ___nl__im__300 = NULL;
ImmT  ___nl__im__301 = NULL;
ImmT  ___nl__im__302 = NULL;
ImmT  ___nl__im__303 = NULL;
bool  ___nl__bool__304 = false;
bool  ___nl__bool__305 = false;
ImmT  ___nl__im__306 = NULL;
ImmT  ___nl__im__307 = NULL;
ImmT  ___nl__im__308 = NULL;
bool  ___nl__bool__309 = false;
ImmT  ___nl__im__310 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__311 = NULL;
ImmT  ___nl__im__312 = NULL;
ImmT  ___nl__im__313 = NULL;
ImmT  ___nl__im__314 = NULL;
#line 629
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 629
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 629
___nl__rec_ptr__2 = NULL;
#line 631
c_rt_lib0move(&___nl__im__5,___get_global_const(868));
#line 631
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 631
c_rt_lib0clear(&___nl__im__5);
#line 631
___nl__bool__4 = !___nl__bool__4;
#line 631
if(___nl__bool__4){ goto label_2;}
#line 632
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 633
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_cond(___ref___rec__0));
#line 633
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 633
if(___nl__bool__7){ goto label_3;}
#line 633
c_rt_lib0clear(&___nl__im__1);
#line 633
c_rt_lib0clear(&___nl__im__3);
#line 633
//clear ___nl__bool__4;
#line 633
c_rt_lib0clear(&___nl__im__6);
#line 633
//clear ___nl__bool__7;
#line 633
return ___nl__im__8;
#line 633
label_3:
;
#line 633
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 633
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(882), ___nl__im__9);
#line 634
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_block(___ref___rec__0));
#line 634
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(80));
#line 634
if(___nl__bool__10){ goto label_4;}
#line 634
c_rt_lib0clear(&___nl__im__1);
#line 634
c_rt_lib0clear(&___nl__im__3);
#line 634
//clear ___nl__bool__4;
#line 634
c_rt_lib0clear(&___nl__im__6);
#line 634
//clear ___nl__bool__7;
#line 634
c_rt_lib0clear(&___nl__im__8);
#line 634
c_rt_lib0clear(&___nl__im__9);
#line 634
//clear ___nl__bool__10;
#line 634
return ___nl__im__11;
#line 634
label_4:
;
#line 634
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(80)));
#line 634
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(868), ___nl__im__12);
#line 635
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 636
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 636
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 636
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(883), ___nl__im__14);
#line 636
c_rt_lib0clear(&___nl__im__14);
#line 636
c_rt_lib0clear(&___nl__im__15);
#line 637
label_6:
;
#line 637
c_rt_lib0move(&___nl__im__17,___get_global_const(883));
#line 637
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 637
c_rt_lib0clear(&___nl__im__17);
#line 637
___nl__bool__16 = !___nl__bool__16;
#line 637
if(___nl__bool__16){ goto label_5;}
#line 638
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 639
___nl__rec_ptr__20 = &((*___ref___rec__0).state0field);
#line 639
c_rt_lib0move(&___nl__im__19, ntokenizer0get_place(___nl__rec_ptr__20));
#line 639
___nl__rec_ptr__20 = NULL;
#line 640
c_rt_lib0move(&___nl__im__22, nparser_priv0parse_cond(___ref___rec__0));
#line 640
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__22, ___get_global_const(80));
#line 640
if(___nl__bool__21){ goto label_7;}
#line 640
c_rt_lib0clear(&___nl__im__1);
#line 640
c_rt_lib0clear(&___nl__im__3);
#line 640
//clear ___nl__bool__4;
#line 640
c_rt_lib0clear(&___nl__im__6);
#line 640
//clear ___nl__bool__7;
#line 640
c_rt_lib0clear(&___nl__im__8);
#line 640
c_rt_lib0clear(&___nl__im__9);
#line 640
//clear ___nl__bool__10;
#line 640
c_rt_lib0clear(&___nl__im__11);
#line 640
c_rt_lib0clear(&___nl__im__12);
#line 640
c_rt_lib0clear(&___nl__im__13);
#line 640
//clear ___nl__bool__16;
#line 640
c_rt_lib0clear(&___nl__im__18);
#line 640
c_rt_lib0clear(&___nl__im__19);
#line 640
//clear ___nl__bool__21;
#line 640
return ___nl__im__22;
#line 640
label_7:
;
#line 640
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__22, ___get_global_const(80)));
#line 640
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(882), ___nl__im__23);
#line 641
___nl__rec_ptr__25 = &((*___ref___rec__0).state0field);
#line 641
c_rt_lib0move(&___nl__im__24, ntokenizer0get_place_ws(___nl__rec_ptr__25));
#line 641
___nl__rec_ptr__25 = NULL;
#line 642
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__19, ___get_global_const(938), ___nl__im__24));
#line 642
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 642
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(220), ___nl__im__26);
#line 642
c_rt_lib0clear(&___nl__im__26);
#line 642
c_rt_lib0clear(&___nl__im__27);
#line 643
c_rt_lib0move(&___nl__im__29, nparser_priv0parse_block(___ref___rec__0));
#line 643
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(80));
#line 643
if(___nl__bool__28){ goto label_8;}
#line 643
c_rt_lib0clear(&___nl__im__1);
#line 643
c_rt_lib0clear(&___nl__im__3);
#line 643
//clear ___nl__bool__4;
#line 643
c_rt_lib0clear(&___nl__im__6);
#line 643
//clear ___nl__bool__7;
#line 643
c_rt_lib0clear(&___nl__im__8);
#line 643
c_rt_lib0clear(&___nl__im__9);
#line 643
//clear ___nl__bool__10;
#line 643
c_rt_lib0clear(&___nl__im__11);
#line 643
c_rt_lib0clear(&___nl__im__12);
#line 643
c_rt_lib0clear(&___nl__im__13);
#line 643
//clear ___nl__bool__16;
#line 643
c_rt_lib0clear(&___nl__im__18);
#line 643
c_rt_lib0clear(&___nl__im__19);
#line 643
//clear ___nl__bool__21;
#line 643
c_rt_lib0clear(&___nl__im__22);
#line 643
c_rt_lib0clear(&___nl__im__23);
#line 643
c_rt_lib0clear(&___nl__im__24);
#line 643
//clear ___nl__bool__28;
#line 643
return ___nl__im__29;
#line 643
label_8:
;
#line 643
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(80)));
#line 643
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(226), ___nl__im__30);
#line 644
c_rt_lib0delete(array0push(&___nl__im__13, ___nl__im__18));
#line 644
c_rt_lib0clear(&___nl__im__18);
#line 644
c_rt_lib0clear(&___nl__im__19);
#line 644
//clear ___nl__bool__21;
#line 644
c_rt_lib0clear(&___nl__im__22);
#line 644
c_rt_lib0clear(&___nl__im__23);
#line 644
c_rt_lib0clear(&___nl__im__24);
#line 644
//clear ___nl__bool__28;
#line 644
c_rt_lib0clear(&___nl__im__29);
#line 644
c_rt_lib0clear(&___nl__im__30);
#line 645
goto label_6;
#line 645
label_5:
;
#line 646
c_rt_lib0copy(&___nl__im__31, ___nl__im__13);
#line 646
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(883), ___nl__im__31);
#line 646
c_rt_lib0clear(&___nl__im__31);
#line 647
c_rt_lib0move(&___nl__im__33,___get_global_const(884));
#line 647
___nl__bool__32 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__33);
#line 647
c_rt_lib0clear(&___nl__im__33);
#line 647
___nl__bool__32 = !___nl__bool__32;
#line 647
if(___nl__bool__32){ goto label_10;}
#line 648
c_rt_lib0move(&___nl__im__35, nparser_priv0parse_block(___ref___rec__0));
#line 648
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(80));
#line 648
if(___nl__bool__34){ goto label_11;}
#line 648
c_rt_lib0clear(&___nl__im__1);
#line 648
c_rt_lib0clear(&___nl__im__3);
#line 648
//clear ___nl__bool__4;
#line 648
c_rt_lib0clear(&___nl__im__6);
#line 648
//clear ___nl__bool__7;
#line 648
c_rt_lib0clear(&___nl__im__8);
#line 648
c_rt_lib0clear(&___nl__im__9);
#line 648
//clear ___nl__bool__10;
#line 648
c_rt_lib0clear(&___nl__im__11);
#line 648
c_rt_lib0clear(&___nl__im__12);
#line 648
c_rt_lib0clear(&___nl__im__13);
#line 648
//clear ___nl__bool__16;
#line 648
c_rt_lib0clear(&___nl__im__18);
#line 648
c_rt_lib0clear(&___nl__im__19);
#line 648
//clear ___nl__bool__21;
#line 648
c_rt_lib0clear(&___nl__im__22);
#line 648
c_rt_lib0clear(&___nl__im__23);
#line 648
c_rt_lib0clear(&___nl__im__24);
#line 648
//clear ___nl__bool__28;
#line 648
c_rt_lib0clear(&___nl__im__29);
#line 648
c_rt_lib0clear(&___nl__im__30);
#line 648
//clear ___nl__bool__32;
#line 648
//clear ___nl__bool__34;
#line 648
return ___nl__im__35;
#line 648
label_11:
;
#line 648
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(80)));
#line 648
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(884), ___nl__im__36);
#line 649
goto label_9;
#line 649
label_10:
;
#line 650
c_rt_lib0move(&___nl__im__39, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 650
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_const(881)));
#line 650
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(2, ___get_global_const(220), ___nl__im__39, ___get_global_const(226), ___nl__im__40));
#line 650
c_rt_lib0clear(&___nl__im__39);
#line 650
c_rt_lib0clear(&___nl__im__40);
#line 650
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 650
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(884), ___nl__im__37);
#line 650
c_rt_lib0clear(&___nl__im__37);
#line 650
c_rt_lib0clear(&___nl__im__38);
#line 651
goto label_9;
#line 651
label_9:
;
#line 651
//clear ___nl__bool__32;
#line 651
//clear ___nl__bool__34;
#line 651
c_rt_lib0clear(&___nl__im__35);
#line 651
c_rt_lib0clear(&___nl__im__36);
#line 652
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(868), ___nl__im__6));
#line 653
goto label_1;
#line 653
label_2:
;
#line 653
c_rt_lib0move(&___nl__im__41,___get_global_const(870));
#line 653
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__41);
#line 653
c_rt_lib0clear(&___nl__im__41);
#line 653
___nl__bool__4 = !___nl__bool__4;
#line 653
if(___nl__bool__4){ goto label_12;}
#line 654
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(0));
#line 655
___nl__bool__44 = false;
#line 655
c_rt_lib0move(&___nl__im__43, c_rt_lib0bool_to_nl_native(___nl__bool__44));
#line 655
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(950), ___nl__im__43);
#line 655
c_rt_lib0clear(&___nl__im__43);
#line 655
//clear ___nl__bool__44;
#line 656
c_rt_lib0move(&___nl__im__46, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 656
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 656
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(568), ___nl__im__45);
#line 656
c_rt_lib0clear(&___nl__im__45);
#line 656
c_rt_lib0clear(&___nl__im__46);
#line 657
c_rt_lib0move(&___nl__im__48, nparser_priv0parse_cond(___ref___rec__0));
#line 657
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_const(80));
#line 657
if(___nl__bool__47){ goto label_13;}
#line 657
c_rt_lib0clear(&___nl__im__1);
#line 657
c_rt_lib0clear(&___nl__im__3);
#line 657
//clear ___nl__bool__4;
#line 657
c_rt_lib0clear(&___nl__im__6);
#line 657
//clear ___nl__bool__7;
#line 657
c_rt_lib0clear(&___nl__im__8);
#line 657
c_rt_lib0clear(&___nl__im__9);
#line 657
//clear ___nl__bool__10;
#line 657
c_rt_lib0clear(&___nl__im__11);
#line 657
c_rt_lib0clear(&___nl__im__12);
#line 657
c_rt_lib0clear(&___nl__im__13);
#line 657
//clear ___nl__bool__16;
#line 657
c_rt_lib0clear(&___nl__im__18);
#line 657
c_rt_lib0clear(&___nl__im__19);
#line 657
//clear ___nl__bool__21;
#line 657
c_rt_lib0clear(&___nl__im__22);
#line 657
c_rt_lib0clear(&___nl__im__23);
#line 657
c_rt_lib0clear(&___nl__im__24);
#line 657
//clear ___nl__bool__28;
#line 657
c_rt_lib0clear(&___nl__im__29);
#line 657
c_rt_lib0clear(&___nl__im__30);
#line 657
c_rt_lib0clear(&___nl__im__42);
#line 657
//clear ___nl__bool__47;
#line 657
return ___nl__im__48;
#line 657
label_13:
;
#line 657
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(80)));
#line 657
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(38), ___nl__im__49);
#line 658
c_rt_lib0move(&___nl__im__51, nparser_priv0parse_block(___ref___rec__0));
#line 658
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(80));
#line 658
if(___nl__bool__50){ goto label_14;}
#line 658
c_rt_lib0clear(&___nl__im__1);
#line 658
c_rt_lib0clear(&___nl__im__3);
#line 658
//clear ___nl__bool__4;
#line 658
c_rt_lib0clear(&___nl__im__6);
#line 658
//clear ___nl__bool__7;
#line 658
c_rt_lib0clear(&___nl__im__8);
#line 658
c_rt_lib0clear(&___nl__im__9);
#line 658
//clear ___nl__bool__10;
#line 658
c_rt_lib0clear(&___nl__im__11);
#line 658
c_rt_lib0clear(&___nl__im__12);
#line 658
c_rt_lib0clear(&___nl__im__13);
#line 658
//clear ___nl__bool__16;
#line 658
c_rt_lib0clear(&___nl__im__18);
#line 658
c_rt_lib0clear(&___nl__im__19);
#line 658
//clear ___nl__bool__21;
#line 658
c_rt_lib0clear(&___nl__im__22);
#line 658
c_rt_lib0clear(&___nl__im__23);
#line 658
c_rt_lib0clear(&___nl__im__24);
#line 658
//clear ___nl__bool__28;
#line 658
c_rt_lib0clear(&___nl__im__29);
#line 658
c_rt_lib0clear(&___nl__im__30);
#line 658
c_rt_lib0clear(&___nl__im__42);
#line 658
//clear ___nl__bool__47;
#line 658
c_rt_lib0clear(&___nl__im__48);
#line 658
c_rt_lib0clear(&___nl__im__49);
#line 658
//clear ___nl__bool__50;
#line 658
return ___nl__im__51;
#line 658
label_14:
;
#line 658
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(80)));
#line 658
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(226), ___nl__im__52);
#line 659
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(870), ___nl__im__42));
#line 660
goto label_1;
#line 660
label_12:
;
#line 660
c_rt_lib0move(&___nl__im__53,___get_global_const(872));
#line 660
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__53);
#line 660
c_rt_lib0clear(&___nl__im__53);
#line 660
___nl__bool__4 = !___nl__bool__4;
#line 660
if(___nl__bool__4){ goto label_15;}
#line 661
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 662
___nl__bool__56 = false;
#line 662
c_rt_lib0move(&___nl__im__55, c_rt_lib0bool_to_nl_native(___nl__bool__56));
#line 662
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(950), ___nl__im__55);
#line 662
c_rt_lib0clear(&___nl__im__55);
#line 662
//clear ___nl__bool__56;
#line 663
c_rt_lib0move(&___nl__im__58, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 663
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 663
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(568), ___nl__im__57);
#line 663
c_rt_lib0clear(&___nl__im__57);
#line 663
c_rt_lib0clear(&___nl__im__58);
#line 664
c_rt_lib0move(&___nl__im__60, nparser_priv0parse_cond(___ref___rec__0));
#line 664
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__60, ___get_global_const(80));
#line 664
if(___nl__bool__59){ goto label_16;}
#line 664
c_rt_lib0clear(&___nl__im__1);
#line 664
c_rt_lib0clear(&___nl__im__3);
#line 664
//clear ___nl__bool__4;
#line 664
c_rt_lib0clear(&___nl__im__6);
#line 664
//clear ___nl__bool__7;
#line 664
c_rt_lib0clear(&___nl__im__8);
#line 664
c_rt_lib0clear(&___nl__im__9);
#line 664
//clear ___nl__bool__10;
#line 664
c_rt_lib0clear(&___nl__im__11);
#line 664
c_rt_lib0clear(&___nl__im__12);
#line 664
c_rt_lib0clear(&___nl__im__13);
#line 664
//clear ___nl__bool__16;
#line 664
c_rt_lib0clear(&___nl__im__18);
#line 664
c_rt_lib0clear(&___nl__im__19);
#line 664
//clear ___nl__bool__21;
#line 664
c_rt_lib0clear(&___nl__im__22);
#line 664
c_rt_lib0clear(&___nl__im__23);
#line 664
c_rt_lib0clear(&___nl__im__24);
#line 664
//clear ___nl__bool__28;
#line 664
c_rt_lib0clear(&___nl__im__29);
#line 664
c_rt_lib0clear(&___nl__im__30);
#line 664
c_rt_lib0clear(&___nl__im__42);
#line 664
//clear ___nl__bool__47;
#line 664
c_rt_lib0clear(&___nl__im__48);
#line 664
c_rt_lib0clear(&___nl__im__49);
#line 664
//clear ___nl__bool__50;
#line 664
c_rt_lib0clear(&___nl__im__51);
#line 664
c_rt_lib0clear(&___nl__im__52);
#line 664
c_rt_lib0clear(&___nl__im__54);
#line 664
//clear ___nl__bool__59;
#line 664
return ___nl__im__60;
#line 664
label_16:
;
#line 664
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__60, ___get_global_const(80)));
#line 664
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(887), ___nl__im__61);
#line 665
c_rt_lib0move(&___nl__im__63, nparser_priv0parse_block(___ref___rec__0));
#line 665
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_const(80));
#line 665
if(___nl__bool__62){ goto label_17;}
#line 665
c_rt_lib0clear(&___nl__im__1);
#line 665
c_rt_lib0clear(&___nl__im__3);
#line 665
//clear ___nl__bool__4;
#line 665
c_rt_lib0clear(&___nl__im__6);
#line 665
//clear ___nl__bool__7;
#line 665
c_rt_lib0clear(&___nl__im__8);
#line 665
c_rt_lib0clear(&___nl__im__9);
#line 665
//clear ___nl__bool__10;
#line 665
c_rt_lib0clear(&___nl__im__11);
#line 665
c_rt_lib0clear(&___nl__im__12);
#line 665
c_rt_lib0clear(&___nl__im__13);
#line 665
//clear ___nl__bool__16;
#line 665
c_rt_lib0clear(&___nl__im__18);
#line 665
c_rt_lib0clear(&___nl__im__19);
#line 665
//clear ___nl__bool__21;
#line 665
c_rt_lib0clear(&___nl__im__22);
#line 665
c_rt_lib0clear(&___nl__im__23);
#line 665
c_rt_lib0clear(&___nl__im__24);
#line 665
//clear ___nl__bool__28;
#line 665
c_rt_lib0clear(&___nl__im__29);
#line 665
c_rt_lib0clear(&___nl__im__30);
#line 665
c_rt_lib0clear(&___nl__im__42);
#line 665
//clear ___nl__bool__47;
#line 665
c_rt_lib0clear(&___nl__im__48);
#line 665
c_rt_lib0clear(&___nl__im__49);
#line 665
//clear ___nl__bool__50;
#line 665
c_rt_lib0clear(&___nl__im__51);
#line 665
c_rt_lib0clear(&___nl__im__52);
#line 665
c_rt_lib0clear(&___nl__im__54);
#line 665
//clear ___nl__bool__59;
#line 665
c_rt_lib0clear(&___nl__im__60);
#line 665
c_rt_lib0clear(&___nl__im__61);
#line 665
//clear ___nl__bool__62;
#line 665
return ___nl__im__63;
#line 665
label_17:
;
#line 665
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__63, ___get_global_const(80)));
#line 665
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(226), ___nl__im__64);
#line 666
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(872), ___nl__im__54));
#line 667
goto label_1;
#line 667
label_15:
;
#line 667
c_rt_lib0move(&___nl__im__65,___get_global_const(158));
#line 667
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__65);
#line 667
c_rt_lib0clear(&___nl__im__65);
#line 667
___nl__bool__4 = !___nl__bool__4;
#line 667
if(___nl__bool__4){ goto label_18;}
#line 668
c_rt_lib0move(&___nl__im__68, nparser_priv0parse_block(___ref___rec__0));
#line 668
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__68, ___get_global_const(80));
#line 668
if(___nl__bool__67){ goto label_19;}
#line 668
c_rt_lib0clear(&___nl__im__1);
#line 668
c_rt_lib0clear(&___nl__im__3);
#line 668
//clear ___nl__bool__4;
#line 668
c_rt_lib0clear(&___nl__im__6);
#line 668
//clear ___nl__bool__7;
#line 668
c_rt_lib0clear(&___nl__im__8);
#line 668
c_rt_lib0clear(&___nl__im__9);
#line 668
//clear ___nl__bool__10;
#line 668
c_rt_lib0clear(&___nl__im__11);
#line 668
c_rt_lib0clear(&___nl__im__12);
#line 668
c_rt_lib0clear(&___nl__im__13);
#line 668
//clear ___nl__bool__16;
#line 668
c_rt_lib0clear(&___nl__im__18);
#line 668
c_rt_lib0clear(&___nl__im__19);
#line 668
//clear ___nl__bool__21;
#line 668
c_rt_lib0clear(&___nl__im__22);
#line 668
c_rt_lib0clear(&___nl__im__23);
#line 668
c_rt_lib0clear(&___nl__im__24);
#line 668
//clear ___nl__bool__28;
#line 668
c_rt_lib0clear(&___nl__im__29);
#line 668
c_rt_lib0clear(&___nl__im__30);
#line 668
c_rt_lib0clear(&___nl__im__42);
#line 668
//clear ___nl__bool__47;
#line 668
c_rt_lib0clear(&___nl__im__48);
#line 668
c_rt_lib0clear(&___nl__im__49);
#line 668
//clear ___nl__bool__50;
#line 668
c_rt_lib0clear(&___nl__im__51);
#line 668
c_rt_lib0clear(&___nl__im__52);
#line 668
c_rt_lib0clear(&___nl__im__54);
#line 668
//clear ___nl__bool__59;
#line 668
c_rt_lib0clear(&___nl__im__60);
#line 668
c_rt_lib0clear(&___nl__im__61);
#line 668
//clear ___nl__bool__62;
#line 668
c_rt_lib0clear(&___nl__im__63);
#line 668
c_rt_lib0clear(&___nl__im__64);
#line 668
c_rt_lib0clear(&___nl__im__66);
#line 668
//clear ___nl__bool__67;
#line 668
return ___nl__im__68;
#line 668
label_19:
;
#line 668
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__68, ___get_global_const(80)));
#line 669
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(158), ___nl__im__66));
#line 670
goto label_1;
#line 670
label_18:
;
#line 670
c_rt_lib0move(&___nl__im__69,___get_global_const(871));
#line 670
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__69);
#line 670
c_rt_lib0clear(&___nl__im__69);
#line 670
___nl__bool__4 = !___nl__bool__4;
#line 670
if(___nl__bool__4){ goto label_20;}
#line 671
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(0));
#line 672
___nl__bool__72 = false;
#line 672
c_rt_lib0move(&___nl__im__71, c_rt_lib0bool_to_nl_native(___nl__bool__72));
#line 672
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(950), ___nl__im__71);
#line 672
c_rt_lib0clear(&___nl__im__71);
#line 672
//clear ___nl__bool__72;
#line 673
c_rt_lib0move(&___nl__im__74, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 673
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 673
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(370), ___nl__im__73);
#line 673
c_rt_lib0clear(&___nl__im__73);
#line 673
c_rt_lib0clear(&___nl__im__74);
#line 674
c_rt_lib0move(&___nl__im__75,___get_global_const(294));
#line 674
___nl__bool__76 = nparser_priv0eat(___ref___rec__0, ___nl__im__75);
#line 674
c_rt_lib0clear(&___nl__im__75);
#line 674
//clear ___nl__bool__76;
#line 675
___nl__rec_ptr__78 = &((*___ref___rec__0).state0field);
#line 675
c_rt_lib0move(&___nl__im__79,___get_global_const(462));
#line 675
___nl__bool__77 = ntokenizer0next_is(___nl__rec_ptr__78, ___nl__im__79);
#line 675
___nl__rec_ptr__78 = NULL;
#line 675
c_rt_lib0clear(&___nl__im__79);
#line 675
___nl__bool__77 = !___nl__bool__77;
#line 675
if(___nl__bool__77){ goto label_22;}
#line 676
c_rt_lib0move(&___nl__im__81, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 676
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 676
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(223), ___nl__im__80);
#line 676
c_rt_lib0clear(&___nl__im__80);
#line 676
c_rt_lib0clear(&___nl__im__81);
#line 677
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 677
c_rt_lib0copy(&___nl__im__82, ___nl__im__83);
#line 677
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(886), ___nl__im__82);
#line 677
c_rt_lib0clear(&___nl__im__82);
#line 677
c_rt_lib0clear(&___nl__im__83);
#line 678
goto label_21;
#line 678
label_22:
;
#line 679
c_rt_lib0move(&___nl__im__85, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 679
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 679
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(223), ___nl__im__84);
#line 679
c_rt_lib0clear(&___nl__im__84);
#line 679
c_rt_lib0clear(&___nl__im__85);
#line 680
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 680
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 680
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(886), ___nl__im__86);
#line 680
c_rt_lib0clear(&___nl__im__86);
#line 680
c_rt_lib0clear(&___nl__im__87);
#line 681
goto label_21;
#line 681
label_21:
;
#line 681
//clear ___nl__bool__77;
#line 682
c_rt_lib0move(&___nl__im__89, nparser_priv0parse_cond(___ref___rec__0));
#line 682
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(80));
#line 682
if(___nl__bool__88){ goto label_23;}
#line 682
c_rt_lib0clear(&___nl__im__1);
#line 682
c_rt_lib0clear(&___nl__im__3);
#line 682
//clear ___nl__bool__4;
#line 682
c_rt_lib0clear(&___nl__im__6);
#line 682
//clear ___nl__bool__7;
#line 682
c_rt_lib0clear(&___nl__im__8);
#line 682
c_rt_lib0clear(&___nl__im__9);
#line 682
//clear ___nl__bool__10;
#line 682
c_rt_lib0clear(&___nl__im__11);
#line 682
c_rt_lib0clear(&___nl__im__12);
#line 682
c_rt_lib0clear(&___nl__im__13);
#line 682
//clear ___nl__bool__16;
#line 682
c_rt_lib0clear(&___nl__im__18);
#line 682
c_rt_lib0clear(&___nl__im__19);
#line 682
//clear ___nl__bool__21;
#line 682
c_rt_lib0clear(&___nl__im__22);
#line 682
c_rt_lib0clear(&___nl__im__23);
#line 682
c_rt_lib0clear(&___nl__im__24);
#line 682
//clear ___nl__bool__28;
#line 682
c_rt_lib0clear(&___nl__im__29);
#line 682
c_rt_lib0clear(&___nl__im__30);
#line 682
c_rt_lib0clear(&___nl__im__42);
#line 682
//clear ___nl__bool__47;
#line 682
c_rt_lib0clear(&___nl__im__48);
#line 682
c_rt_lib0clear(&___nl__im__49);
#line 682
//clear ___nl__bool__50;
#line 682
c_rt_lib0clear(&___nl__im__51);
#line 682
c_rt_lib0clear(&___nl__im__52);
#line 682
c_rt_lib0clear(&___nl__im__54);
#line 682
//clear ___nl__bool__59;
#line 682
c_rt_lib0clear(&___nl__im__60);
#line 682
c_rt_lib0clear(&___nl__im__61);
#line 682
//clear ___nl__bool__62;
#line 682
c_rt_lib0clear(&___nl__im__63);
#line 682
c_rt_lib0clear(&___nl__im__64);
#line 682
c_rt_lib0clear(&___nl__im__66);
#line 682
//clear ___nl__bool__67;
#line 682
c_rt_lib0clear(&___nl__im__68);
#line 682
c_rt_lib0clear(&___nl__im__70);
#line 682
//clear ___nl__bool__88;
#line 682
return ___nl__im__89;
#line 682
label_23:
;
#line 682
c_rt_lib0move(&___nl__im__90, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(80)));
#line 682
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(129), ___nl__im__90);
#line 683
c_rt_lib0move(&___nl__im__92, nparser_priv0parse_block(___ref___rec__0));
#line 683
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(80));
#line 683
if(___nl__bool__91){ goto label_24;}
#line 683
c_rt_lib0clear(&___nl__im__1);
#line 683
c_rt_lib0clear(&___nl__im__3);
#line 683
//clear ___nl__bool__4;
#line 683
c_rt_lib0clear(&___nl__im__6);
#line 683
//clear ___nl__bool__7;
#line 683
c_rt_lib0clear(&___nl__im__8);
#line 683
c_rt_lib0clear(&___nl__im__9);
#line 683
//clear ___nl__bool__10;
#line 683
c_rt_lib0clear(&___nl__im__11);
#line 683
c_rt_lib0clear(&___nl__im__12);
#line 683
c_rt_lib0clear(&___nl__im__13);
#line 683
//clear ___nl__bool__16;
#line 683
c_rt_lib0clear(&___nl__im__18);
#line 683
c_rt_lib0clear(&___nl__im__19);
#line 683
//clear ___nl__bool__21;
#line 683
c_rt_lib0clear(&___nl__im__22);
#line 683
c_rt_lib0clear(&___nl__im__23);
#line 683
c_rt_lib0clear(&___nl__im__24);
#line 683
//clear ___nl__bool__28;
#line 683
c_rt_lib0clear(&___nl__im__29);
#line 683
c_rt_lib0clear(&___nl__im__30);
#line 683
c_rt_lib0clear(&___nl__im__42);
#line 683
//clear ___nl__bool__47;
#line 683
c_rt_lib0clear(&___nl__im__48);
#line 683
c_rt_lib0clear(&___nl__im__49);
#line 683
//clear ___nl__bool__50;
#line 683
c_rt_lib0clear(&___nl__im__51);
#line 683
c_rt_lib0clear(&___nl__im__52);
#line 683
c_rt_lib0clear(&___nl__im__54);
#line 683
//clear ___nl__bool__59;
#line 683
c_rt_lib0clear(&___nl__im__60);
#line 683
c_rt_lib0clear(&___nl__im__61);
#line 683
//clear ___nl__bool__62;
#line 683
c_rt_lib0clear(&___nl__im__63);
#line 683
c_rt_lib0clear(&___nl__im__64);
#line 683
c_rt_lib0clear(&___nl__im__66);
#line 683
//clear ___nl__bool__67;
#line 683
c_rt_lib0clear(&___nl__im__68);
#line 683
c_rt_lib0clear(&___nl__im__70);
#line 683
//clear ___nl__bool__88;
#line 683
c_rt_lib0clear(&___nl__im__89);
#line 683
c_rt_lib0clear(&___nl__im__90);
#line 683
//clear ___nl__bool__91;
#line 683
return ___nl__im__92;
#line 683
label_24:
;
#line 683
c_rt_lib0move(&___nl__im__93, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(80)));
#line 683
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(226), ___nl__im__93);
#line 684
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(871), ___nl__im__70));
#line 685
goto label_1;
#line 685
label_20:
;
#line 685
c_rt_lib0move(&___nl__im__94,___get_global_const(873));
#line 685
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__94);
#line 685
c_rt_lib0clear(&___nl__im__94);
#line 685
___nl__bool__4 = !___nl__bool__4;
#line 685
if(___nl__bool__4){ goto label_25;}
#line 686
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_mk(0));
#line 687
___nl__bool__97 = false;
#line 687
c_rt_lib0move(&___nl__im__96, c_rt_lib0bool_to_nl_native(___nl__bool__97));
#line 687
c_rt_lib0hash_set_value_dec(&___nl__im__95, ___get_global_const(950), ___nl__im__96);
#line 687
c_rt_lib0clear(&___nl__im__96);
#line 687
//clear ___nl__bool__97;
#line 688
c_rt_lib0move(&___nl__im__99, nparser_priv0parse_cond(___ref___rec__0));
#line 688
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__99, ___get_global_const(80));
#line 688
if(___nl__bool__98){ goto label_26;}
#line 688
c_rt_lib0clear(&___nl__im__1);
#line 688
c_rt_lib0clear(&___nl__im__3);
#line 688
//clear ___nl__bool__4;
#line 688
c_rt_lib0clear(&___nl__im__6);
#line 688
//clear ___nl__bool__7;
#line 688
c_rt_lib0clear(&___nl__im__8);
#line 688
c_rt_lib0clear(&___nl__im__9);
#line 688
//clear ___nl__bool__10;
#line 688
c_rt_lib0clear(&___nl__im__11);
#line 688
c_rt_lib0clear(&___nl__im__12);
#line 688
c_rt_lib0clear(&___nl__im__13);
#line 688
//clear ___nl__bool__16;
#line 688
c_rt_lib0clear(&___nl__im__18);
#line 688
c_rt_lib0clear(&___nl__im__19);
#line 688
//clear ___nl__bool__21;
#line 688
c_rt_lib0clear(&___nl__im__22);
#line 688
c_rt_lib0clear(&___nl__im__23);
#line 688
c_rt_lib0clear(&___nl__im__24);
#line 688
//clear ___nl__bool__28;
#line 688
c_rt_lib0clear(&___nl__im__29);
#line 688
c_rt_lib0clear(&___nl__im__30);
#line 688
c_rt_lib0clear(&___nl__im__42);
#line 688
//clear ___nl__bool__47;
#line 688
c_rt_lib0clear(&___nl__im__48);
#line 688
c_rt_lib0clear(&___nl__im__49);
#line 688
//clear ___nl__bool__50;
#line 688
c_rt_lib0clear(&___nl__im__51);
#line 688
c_rt_lib0clear(&___nl__im__52);
#line 688
c_rt_lib0clear(&___nl__im__54);
#line 688
//clear ___nl__bool__59;
#line 688
c_rt_lib0clear(&___nl__im__60);
#line 688
c_rt_lib0clear(&___nl__im__61);
#line 688
//clear ___nl__bool__62;
#line 688
c_rt_lib0clear(&___nl__im__63);
#line 688
c_rt_lib0clear(&___nl__im__64);
#line 688
c_rt_lib0clear(&___nl__im__66);
#line 688
//clear ___nl__bool__67;
#line 688
c_rt_lib0clear(&___nl__im__68);
#line 688
c_rt_lib0clear(&___nl__im__70);
#line 688
//clear ___nl__bool__88;
#line 688
c_rt_lib0clear(&___nl__im__89);
#line 688
c_rt_lib0clear(&___nl__im__90);
#line 688
//clear ___nl__bool__91;
#line 688
c_rt_lib0clear(&___nl__im__92);
#line 688
c_rt_lib0clear(&___nl__im__93);
#line 688
c_rt_lib0clear(&___nl__im__95);
#line 688
//clear ___nl__bool__98;
#line 688
return ___nl__im__99;
#line 688
label_26:
;
#line 688
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__99, ___get_global_const(80)));
#line 688
c_rt_lib0hash_set_value_dec(&___nl__im__95, ___get_global_const(882), ___nl__im__100);
#line 689
c_rt_lib0move(&___nl__im__102, nparser_priv0parse_block(___ref___rec__0));
#line 689
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(80));
#line 689
if(___nl__bool__101){ goto label_27;}
#line 689
c_rt_lib0clear(&___nl__im__1);
#line 689
c_rt_lib0clear(&___nl__im__3);
#line 689
//clear ___nl__bool__4;
#line 689
c_rt_lib0clear(&___nl__im__6);
#line 689
//clear ___nl__bool__7;
#line 689
c_rt_lib0clear(&___nl__im__8);
#line 689
c_rt_lib0clear(&___nl__im__9);
#line 689
//clear ___nl__bool__10;
#line 689
c_rt_lib0clear(&___nl__im__11);
#line 689
c_rt_lib0clear(&___nl__im__12);
#line 689
c_rt_lib0clear(&___nl__im__13);
#line 689
//clear ___nl__bool__16;
#line 689
c_rt_lib0clear(&___nl__im__18);
#line 689
c_rt_lib0clear(&___nl__im__19);
#line 689
//clear ___nl__bool__21;
#line 689
c_rt_lib0clear(&___nl__im__22);
#line 689
c_rt_lib0clear(&___nl__im__23);
#line 689
c_rt_lib0clear(&___nl__im__24);
#line 689
//clear ___nl__bool__28;
#line 689
c_rt_lib0clear(&___nl__im__29);
#line 689
c_rt_lib0clear(&___nl__im__30);
#line 689
c_rt_lib0clear(&___nl__im__42);
#line 689
//clear ___nl__bool__47;
#line 689
c_rt_lib0clear(&___nl__im__48);
#line 689
c_rt_lib0clear(&___nl__im__49);
#line 689
//clear ___nl__bool__50;
#line 689
c_rt_lib0clear(&___nl__im__51);
#line 689
c_rt_lib0clear(&___nl__im__52);
#line 689
c_rt_lib0clear(&___nl__im__54);
#line 689
//clear ___nl__bool__59;
#line 689
c_rt_lib0clear(&___nl__im__60);
#line 689
c_rt_lib0clear(&___nl__im__61);
#line 689
//clear ___nl__bool__62;
#line 689
c_rt_lib0clear(&___nl__im__63);
#line 689
c_rt_lib0clear(&___nl__im__64);
#line 689
c_rt_lib0clear(&___nl__im__66);
#line 689
//clear ___nl__bool__67;
#line 689
c_rt_lib0clear(&___nl__im__68);
#line 689
c_rt_lib0clear(&___nl__im__70);
#line 689
//clear ___nl__bool__88;
#line 689
c_rt_lib0clear(&___nl__im__89);
#line 689
c_rt_lib0clear(&___nl__im__90);
#line 689
//clear ___nl__bool__91;
#line 689
c_rt_lib0clear(&___nl__im__92);
#line 689
c_rt_lib0clear(&___nl__im__93);
#line 689
c_rt_lib0clear(&___nl__im__95);
#line 689
//clear ___nl__bool__98;
#line 689
c_rt_lib0clear(&___nl__im__99);
#line 689
c_rt_lib0clear(&___nl__im__100);
#line 689
//clear ___nl__bool__101;
#line 689
return ___nl__im__102;
#line 689
label_27:
;
#line 689
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__102, ___get_global_const(80)));
#line 689
c_rt_lib0hash_set_value_dec(&___nl__im__95, ___get_global_const(226), ___nl__im__103);
#line 690
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(873), ___nl__im__95));
#line 691
goto label_1;
#line 691
label_25:
;
#line 691
c_rt_lib0move(&___nl__im__104,___get_global_const(869));
#line 691
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__104);
#line 691
c_rt_lib0clear(&___nl__im__104);
#line 691
___nl__bool__4 = !___nl__bool__4;
#line 691
if(___nl__bool__4){ goto label_28;}
#line 692
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_mk(0));
#line 693
c_rt_lib0move(&___nl__im__106,___get_global_const(419));
#line 693
___nl__bool__107 = nparser_priv0eat(___ref___rec__0, ___nl__im__106);
#line 693
c_rt_lib0clear(&___nl__im__106);
#line 693
//clear ___nl__bool__107;
#line 694
___nl__rec_ptr__109 = &((*___ref___rec__0).state0field);
#line 694
c_rt_lib0move(&___nl__im__110,___get_global_const(462));
#line 694
___nl__bool__108 = ntokenizer0next_is(___nl__rec_ptr__109, ___nl__im__110);
#line 694
___nl__rec_ptr__109 = NULL;
#line 694
c_rt_lib0clear(&___nl__im__110);
#line 694
___nl__bool__108 = !___nl__bool__108;
#line 694
if(___nl__bool__108){ goto label_30;}
#line 695
c_rt_lib0move(&___nl__im__113, nparser_priv0parse_var_decl(___ref___rec__0));
#line 695
___nl__bool__112 = c_rt_lib0priv_is(___nl__im__113, ___get_global_const(80));
#line 695
if(___nl__bool__112){ goto label_31;}
#line 695
c_rt_lib0clear(&___nl__im__1);
#line 695
c_rt_lib0clear(&___nl__im__3);
#line 695
//clear ___nl__bool__4;
#line 695
c_rt_lib0clear(&___nl__im__6);
#line 695
//clear ___nl__bool__7;
#line 695
c_rt_lib0clear(&___nl__im__8);
#line 695
c_rt_lib0clear(&___nl__im__9);
#line 695
//clear ___nl__bool__10;
#line 695
c_rt_lib0clear(&___nl__im__11);
#line 695
c_rt_lib0clear(&___nl__im__12);
#line 695
c_rt_lib0clear(&___nl__im__13);
#line 695
//clear ___nl__bool__16;
#line 695
c_rt_lib0clear(&___nl__im__18);
#line 695
c_rt_lib0clear(&___nl__im__19);
#line 695
//clear ___nl__bool__21;
#line 695
c_rt_lib0clear(&___nl__im__22);
#line 695
c_rt_lib0clear(&___nl__im__23);
#line 695
c_rt_lib0clear(&___nl__im__24);
#line 695
//clear ___nl__bool__28;
#line 695
c_rt_lib0clear(&___nl__im__29);
#line 695
c_rt_lib0clear(&___nl__im__30);
#line 695
c_rt_lib0clear(&___nl__im__42);
#line 695
//clear ___nl__bool__47;
#line 695
c_rt_lib0clear(&___nl__im__48);
#line 695
c_rt_lib0clear(&___nl__im__49);
#line 695
//clear ___nl__bool__50;
#line 695
c_rt_lib0clear(&___nl__im__51);
#line 695
c_rt_lib0clear(&___nl__im__52);
#line 695
c_rt_lib0clear(&___nl__im__54);
#line 695
//clear ___nl__bool__59;
#line 695
c_rt_lib0clear(&___nl__im__60);
#line 695
c_rt_lib0clear(&___nl__im__61);
#line 695
//clear ___nl__bool__62;
#line 695
c_rt_lib0clear(&___nl__im__63);
#line 695
c_rt_lib0clear(&___nl__im__64);
#line 695
c_rt_lib0clear(&___nl__im__66);
#line 695
//clear ___nl__bool__67;
#line 695
c_rt_lib0clear(&___nl__im__68);
#line 695
c_rt_lib0clear(&___nl__im__70);
#line 695
//clear ___nl__bool__88;
#line 695
c_rt_lib0clear(&___nl__im__89);
#line 695
c_rt_lib0clear(&___nl__im__90);
#line 695
//clear ___nl__bool__91;
#line 695
c_rt_lib0clear(&___nl__im__92);
#line 695
c_rt_lib0clear(&___nl__im__93);
#line 695
c_rt_lib0clear(&___nl__im__95);
#line 695
//clear ___nl__bool__98;
#line 695
c_rt_lib0clear(&___nl__im__99);
#line 695
c_rt_lib0clear(&___nl__im__100);
#line 695
//clear ___nl__bool__101;
#line 695
c_rt_lib0clear(&___nl__im__102);
#line 695
c_rt_lib0clear(&___nl__im__103);
#line 695
c_rt_lib0clear(&___nl__im__105);
#line 695
//clear ___nl__bool__108;
#line 695
c_rt_lib0clear(&___nl__im__111);
#line 695
//clear ___nl__bool__112;
#line 695
return ___nl__im__113;
#line 695
label_31:
;
#line 695
c_rt_lib0move(&___nl__im__111, c_rt_lib0priv_as(___nl__im__113, ___get_global_const(80)));
#line 696
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_const(251), ___nl__im__111));
#line 696
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 696
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(885), ___nl__im__114);
#line 696
c_rt_lib0clear(&___nl__im__114);
#line 696
c_rt_lib0clear(&___nl__im__115);
#line 697
goto label_29;
#line 697
label_30:
;
#line 697
___nl__rec_ptr__116 = &((*___ref___rec__0).state0field);
#line 697
c_rt_lib0move(&___nl__im__117,___get_global_const(408));
#line 697
___nl__bool__108 = ntokenizer0next_is(___nl__rec_ptr__116, ___nl__im__117);
#line 697
___nl__rec_ptr__116 = NULL;
#line 697
c_rt_lib0clear(&___nl__im__117);
#line 697
___nl__bool__108 = !___nl__bool__108;
#line 697
if(___nl__bool__108){ goto label_32;}
#line 698
c_rt_lib0move(&___nl__im__120, nparser_priv0get_value_nop(___ref___rec__0));
#line 698
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__im__120));
#line 698
c_rt_lib0clear(&___nl__im__120);
#line 698
c_rt_lib0copy(&___nl__im__118, ___nl__im__119);
#line 698
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(885), ___nl__im__118);
#line 698
c_rt_lib0clear(&___nl__im__118);
#line 698
c_rt_lib0clear(&___nl__im__119);
#line 699
goto label_29;
#line 699
label_32:
;
#line 700
c_rt_lib0move(&___nl__im__123, nparser_priv0parse_expr(___ref___rec__0));
#line 700
___nl__bool__122 = c_rt_lib0priv_is(___nl__im__123, ___get_global_const(80));
#line 700
if(___nl__bool__122){ goto label_33;}
#line 700
c_rt_lib0clear(&___nl__im__1);
#line 700
c_rt_lib0clear(&___nl__im__3);
#line 700
//clear ___nl__bool__4;
#line 700
c_rt_lib0clear(&___nl__im__6);
#line 700
//clear ___nl__bool__7;
#line 700
c_rt_lib0clear(&___nl__im__8);
#line 700
c_rt_lib0clear(&___nl__im__9);
#line 700
//clear ___nl__bool__10;
#line 700
c_rt_lib0clear(&___nl__im__11);
#line 700
c_rt_lib0clear(&___nl__im__12);
#line 700
c_rt_lib0clear(&___nl__im__13);
#line 700
//clear ___nl__bool__16;
#line 700
c_rt_lib0clear(&___nl__im__18);
#line 700
c_rt_lib0clear(&___nl__im__19);
#line 700
//clear ___nl__bool__21;
#line 700
c_rt_lib0clear(&___nl__im__22);
#line 700
c_rt_lib0clear(&___nl__im__23);
#line 700
c_rt_lib0clear(&___nl__im__24);
#line 700
//clear ___nl__bool__28;
#line 700
c_rt_lib0clear(&___nl__im__29);
#line 700
c_rt_lib0clear(&___nl__im__30);
#line 700
c_rt_lib0clear(&___nl__im__42);
#line 700
//clear ___nl__bool__47;
#line 700
c_rt_lib0clear(&___nl__im__48);
#line 700
c_rt_lib0clear(&___nl__im__49);
#line 700
//clear ___nl__bool__50;
#line 700
c_rt_lib0clear(&___nl__im__51);
#line 700
c_rt_lib0clear(&___nl__im__52);
#line 700
c_rt_lib0clear(&___nl__im__54);
#line 700
//clear ___nl__bool__59;
#line 700
c_rt_lib0clear(&___nl__im__60);
#line 700
c_rt_lib0clear(&___nl__im__61);
#line 700
//clear ___nl__bool__62;
#line 700
c_rt_lib0clear(&___nl__im__63);
#line 700
c_rt_lib0clear(&___nl__im__64);
#line 700
c_rt_lib0clear(&___nl__im__66);
#line 700
//clear ___nl__bool__67;
#line 700
c_rt_lib0clear(&___nl__im__68);
#line 700
c_rt_lib0clear(&___nl__im__70);
#line 700
//clear ___nl__bool__88;
#line 700
c_rt_lib0clear(&___nl__im__89);
#line 700
c_rt_lib0clear(&___nl__im__90);
#line 700
//clear ___nl__bool__91;
#line 700
c_rt_lib0clear(&___nl__im__92);
#line 700
c_rt_lib0clear(&___nl__im__93);
#line 700
c_rt_lib0clear(&___nl__im__95);
#line 700
//clear ___nl__bool__98;
#line 700
c_rt_lib0clear(&___nl__im__99);
#line 700
c_rt_lib0clear(&___nl__im__100);
#line 700
//clear ___nl__bool__101;
#line 700
c_rt_lib0clear(&___nl__im__102);
#line 700
c_rt_lib0clear(&___nl__im__103);
#line 700
c_rt_lib0clear(&___nl__im__105);
#line 700
//clear ___nl__bool__108;
#line 700
c_rt_lib0clear(&___nl__im__111);
#line 700
//clear ___nl__bool__112;
#line 700
c_rt_lib0clear(&___nl__im__113);
#line 700
c_rt_lib0clear(&___nl__im__121);
#line 700
//clear ___nl__bool__122;
#line 700
return ___nl__im__123;
#line 700
label_33:
;
#line 700
c_rt_lib0move(&___nl__im__121, c_rt_lib0priv_as(___nl__im__123, ___get_global_const(80)));
#line 701
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__im__121));
#line 701
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 701
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(885), ___nl__im__124);
#line 701
c_rt_lib0clear(&___nl__im__124);
#line 701
c_rt_lib0clear(&___nl__im__125);
#line 702
goto label_29;
#line 702
label_29:
;
#line 702
//clear ___nl__bool__108;
#line 702
c_rt_lib0clear(&___nl__im__111);
#line 702
//clear ___nl__bool__112;
#line 702
c_rt_lib0clear(&___nl__im__113);
#line 702
c_rt_lib0clear(&___nl__im__121);
#line 702
//clear ___nl__bool__122;
#line 702
c_rt_lib0clear(&___nl__im__123);
#line 703
c_rt_lib0move(&___nl__im__126,___get_global_const(408));
#line 703
___nl__bool__127 = nparser_priv0eat(___ref___rec__0, ___nl__im__126);
#line 703
c_rt_lib0clear(&___nl__im__126);
#line 703
//clear ___nl__bool__127;
#line 704
c_rt_lib0move(&___nl__im__129, nparser_priv0get_value_nop(___ref___rec__0));
#line 704
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 704
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(882), ___nl__im__128);
#line 704
c_rt_lib0clear(&___nl__im__128);
#line 704
c_rt_lib0clear(&___nl__im__129);
#line 705
___nl__rec_ptr__131 = &((*___ref___rec__0).state0field);
#line 705
c_rt_lib0move(&___nl__im__132,___get_global_const(408));
#line 705
___nl__bool__130 = ntokenizer0next_is(___nl__rec_ptr__131, ___nl__im__132);
#line 705
___nl__rec_ptr__131 = NULL;
#line 705
c_rt_lib0clear(&___nl__im__132);
#line 705
___nl__bool__130 = !___nl__bool__130;
#line 705
___nl__bool__130 = !___nl__bool__130;
#line 705
if(___nl__bool__130){ goto label_35;}
#line 705
c_rt_lib0move(&___nl__im__134, nparser_priv0parse_expr(___ref___rec__0));
#line 705
___nl__bool__133 = c_rt_lib0priv_is(___nl__im__134, ___get_global_const(80));
#line 705
if(___nl__bool__133){ goto label_36;}
#line 705
c_rt_lib0clear(&___nl__im__1);
#line 705
c_rt_lib0clear(&___nl__im__3);
#line 705
//clear ___nl__bool__4;
#line 705
c_rt_lib0clear(&___nl__im__6);
#line 705
//clear ___nl__bool__7;
#line 705
c_rt_lib0clear(&___nl__im__8);
#line 705
c_rt_lib0clear(&___nl__im__9);
#line 705
//clear ___nl__bool__10;
#line 705
c_rt_lib0clear(&___nl__im__11);
#line 705
c_rt_lib0clear(&___nl__im__12);
#line 705
c_rt_lib0clear(&___nl__im__13);
#line 705
//clear ___nl__bool__16;
#line 705
c_rt_lib0clear(&___nl__im__18);
#line 705
c_rt_lib0clear(&___nl__im__19);
#line 705
//clear ___nl__bool__21;
#line 705
c_rt_lib0clear(&___nl__im__22);
#line 705
c_rt_lib0clear(&___nl__im__23);
#line 705
c_rt_lib0clear(&___nl__im__24);
#line 705
//clear ___nl__bool__28;
#line 705
c_rt_lib0clear(&___nl__im__29);
#line 705
c_rt_lib0clear(&___nl__im__30);
#line 705
c_rt_lib0clear(&___nl__im__42);
#line 705
//clear ___nl__bool__47;
#line 705
c_rt_lib0clear(&___nl__im__48);
#line 705
c_rt_lib0clear(&___nl__im__49);
#line 705
//clear ___nl__bool__50;
#line 705
c_rt_lib0clear(&___nl__im__51);
#line 705
c_rt_lib0clear(&___nl__im__52);
#line 705
c_rt_lib0clear(&___nl__im__54);
#line 705
//clear ___nl__bool__59;
#line 705
c_rt_lib0clear(&___nl__im__60);
#line 705
c_rt_lib0clear(&___nl__im__61);
#line 705
//clear ___nl__bool__62;
#line 705
c_rt_lib0clear(&___nl__im__63);
#line 705
c_rt_lib0clear(&___nl__im__64);
#line 705
c_rt_lib0clear(&___nl__im__66);
#line 705
//clear ___nl__bool__67;
#line 705
c_rt_lib0clear(&___nl__im__68);
#line 705
c_rt_lib0clear(&___nl__im__70);
#line 705
//clear ___nl__bool__88;
#line 705
c_rt_lib0clear(&___nl__im__89);
#line 705
c_rt_lib0clear(&___nl__im__90);
#line 705
//clear ___nl__bool__91;
#line 705
c_rt_lib0clear(&___nl__im__92);
#line 705
c_rt_lib0clear(&___nl__im__93);
#line 705
c_rt_lib0clear(&___nl__im__95);
#line 705
//clear ___nl__bool__98;
#line 705
c_rt_lib0clear(&___nl__im__99);
#line 705
c_rt_lib0clear(&___nl__im__100);
#line 705
//clear ___nl__bool__101;
#line 705
c_rt_lib0clear(&___nl__im__102);
#line 705
c_rt_lib0clear(&___nl__im__103);
#line 705
c_rt_lib0clear(&___nl__im__105);
#line 705
//clear ___nl__bool__130;
#line 705
//clear ___nl__bool__133;
#line 705
return ___nl__im__134;
#line 705
label_36:
;
#line 705
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__134, ___get_global_const(80)));
#line 705
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(882), ___nl__im__135);
#line 705
goto label_34;
#line 705
label_35:
;
#line 705
label_34:
;
#line 705
//clear ___nl__bool__130;
#line 705
//clear ___nl__bool__133;
#line 705
c_rt_lib0clear(&___nl__im__134);
#line 705
c_rt_lib0clear(&___nl__im__135);
#line 706
c_rt_lib0move(&___nl__im__136,___get_global_const(408));
#line 706
___nl__bool__137 = nparser_priv0eat(___ref___rec__0, ___nl__im__136);
#line 706
c_rt_lib0clear(&___nl__im__136);
#line 706
//clear ___nl__bool__137;
#line 707
c_rt_lib0move(&___nl__im__139, nparser_priv0get_value_nop(___ref___rec__0));
#line 707
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 707
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(568), ___nl__im__138);
#line 707
c_rt_lib0clear(&___nl__im__138);
#line 707
c_rt_lib0clear(&___nl__im__139);
#line 708
___nl__rec_ptr__141 = &((*___ref___rec__0).state0field);
#line 708
c_rt_lib0move(&___nl__im__142,___get_global_const(298));
#line 708
___nl__bool__140 = ntokenizer0next_is(___nl__rec_ptr__141, ___nl__im__142);
#line 708
___nl__rec_ptr__141 = NULL;
#line 708
c_rt_lib0clear(&___nl__im__142);
#line 708
___nl__bool__140 = !___nl__bool__140;
#line 708
___nl__bool__140 = !___nl__bool__140;
#line 708
if(___nl__bool__140){ goto label_38;}
#line 708
c_rt_lib0move(&___nl__im__144, nparser_priv0parse_expr(___ref___rec__0));
#line 708
___nl__bool__143 = c_rt_lib0priv_is(___nl__im__144, ___get_global_const(80));
#line 708
if(___nl__bool__143){ goto label_39;}
#line 708
c_rt_lib0clear(&___nl__im__1);
#line 708
c_rt_lib0clear(&___nl__im__3);
#line 708
//clear ___nl__bool__4;
#line 708
c_rt_lib0clear(&___nl__im__6);
#line 708
//clear ___nl__bool__7;
#line 708
c_rt_lib0clear(&___nl__im__8);
#line 708
c_rt_lib0clear(&___nl__im__9);
#line 708
//clear ___nl__bool__10;
#line 708
c_rt_lib0clear(&___nl__im__11);
#line 708
c_rt_lib0clear(&___nl__im__12);
#line 708
c_rt_lib0clear(&___nl__im__13);
#line 708
//clear ___nl__bool__16;
#line 708
c_rt_lib0clear(&___nl__im__18);
#line 708
c_rt_lib0clear(&___nl__im__19);
#line 708
//clear ___nl__bool__21;
#line 708
c_rt_lib0clear(&___nl__im__22);
#line 708
c_rt_lib0clear(&___nl__im__23);
#line 708
c_rt_lib0clear(&___nl__im__24);
#line 708
//clear ___nl__bool__28;
#line 708
c_rt_lib0clear(&___nl__im__29);
#line 708
c_rt_lib0clear(&___nl__im__30);
#line 708
c_rt_lib0clear(&___nl__im__42);
#line 708
//clear ___nl__bool__47;
#line 708
c_rt_lib0clear(&___nl__im__48);
#line 708
c_rt_lib0clear(&___nl__im__49);
#line 708
//clear ___nl__bool__50;
#line 708
c_rt_lib0clear(&___nl__im__51);
#line 708
c_rt_lib0clear(&___nl__im__52);
#line 708
c_rt_lib0clear(&___nl__im__54);
#line 708
//clear ___nl__bool__59;
#line 708
c_rt_lib0clear(&___nl__im__60);
#line 708
c_rt_lib0clear(&___nl__im__61);
#line 708
//clear ___nl__bool__62;
#line 708
c_rt_lib0clear(&___nl__im__63);
#line 708
c_rt_lib0clear(&___nl__im__64);
#line 708
c_rt_lib0clear(&___nl__im__66);
#line 708
//clear ___nl__bool__67;
#line 708
c_rt_lib0clear(&___nl__im__68);
#line 708
c_rt_lib0clear(&___nl__im__70);
#line 708
//clear ___nl__bool__88;
#line 708
c_rt_lib0clear(&___nl__im__89);
#line 708
c_rt_lib0clear(&___nl__im__90);
#line 708
//clear ___nl__bool__91;
#line 708
c_rt_lib0clear(&___nl__im__92);
#line 708
c_rt_lib0clear(&___nl__im__93);
#line 708
c_rt_lib0clear(&___nl__im__95);
#line 708
//clear ___nl__bool__98;
#line 708
c_rt_lib0clear(&___nl__im__99);
#line 708
c_rt_lib0clear(&___nl__im__100);
#line 708
//clear ___nl__bool__101;
#line 708
c_rt_lib0clear(&___nl__im__102);
#line 708
c_rt_lib0clear(&___nl__im__103);
#line 708
c_rt_lib0clear(&___nl__im__105);
#line 708
//clear ___nl__bool__140;
#line 708
//clear ___nl__bool__143;
#line 708
return ___nl__im__144;
#line 708
label_39:
;
#line 708
c_rt_lib0move(&___nl__im__145, c_rt_lib0priv_as(___nl__im__144, ___get_global_const(80)));
#line 708
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(568), ___nl__im__145);
#line 708
goto label_37;
#line 708
label_38:
;
#line 708
label_37:
;
#line 708
//clear ___nl__bool__140;
#line 708
//clear ___nl__bool__143;
#line 708
c_rt_lib0clear(&___nl__im__144);
#line 708
c_rt_lib0clear(&___nl__im__145);
#line 709
c_rt_lib0move(&___nl__im__146,___get_global_const(298));
#line 709
___nl__bool__147 = nparser_priv0eat(___ref___rec__0, ___nl__im__146);
#line 709
c_rt_lib0clear(&___nl__im__146);
#line 709
//clear ___nl__bool__147;
#line 710
c_rt_lib0move(&___nl__im__149, nparser_priv0parse_block(___ref___rec__0));
#line 710
___nl__bool__148 = c_rt_lib0priv_is(___nl__im__149, ___get_global_const(80));
#line 710
if(___nl__bool__148){ goto label_40;}
#line 710
c_rt_lib0clear(&___nl__im__1);
#line 710
c_rt_lib0clear(&___nl__im__3);
#line 710
//clear ___nl__bool__4;
#line 710
c_rt_lib0clear(&___nl__im__6);
#line 710
//clear ___nl__bool__7;
#line 710
c_rt_lib0clear(&___nl__im__8);
#line 710
c_rt_lib0clear(&___nl__im__9);
#line 710
//clear ___nl__bool__10;
#line 710
c_rt_lib0clear(&___nl__im__11);
#line 710
c_rt_lib0clear(&___nl__im__12);
#line 710
c_rt_lib0clear(&___nl__im__13);
#line 710
//clear ___nl__bool__16;
#line 710
c_rt_lib0clear(&___nl__im__18);
#line 710
c_rt_lib0clear(&___nl__im__19);
#line 710
//clear ___nl__bool__21;
#line 710
c_rt_lib0clear(&___nl__im__22);
#line 710
c_rt_lib0clear(&___nl__im__23);
#line 710
c_rt_lib0clear(&___nl__im__24);
#line 710
//clear ___nl__bool__28;
#line 710
c_rt_lib0clear(&___nl__im__29);
#line 710
c_rt_lib0clear(&___nl__im__30);
#line 710
c_rt_lib0clear(&___nl__im__42);
#line 710
//clear ___nl__bool__47;
#line 710
c_rt_lib0clear(&___nl__im__48);
#line 710
c_rt_lib0clear(&___nl__im__49);
#line 710
//clear ___nl__bool__50;
#line 710
c_rt_lib0clear(&___nl__im__51);
#line 710
c_rt_lib0clear(&___nl__im__52);
#line 710
c_rt_lib0clear(&___nl__im__54);
#line 710
//clear ___nl__bool__59;
#line 710
c_rt_lib0clear(&___nl__im__60);
#line 710
c_rt_lib0clear(&___nl__im__61);
#line 710
//clear ___nl__bool__62;
#line 710
c_rt_lib0clear(&___nl__im__63);
#line 710
c_rt_lib0clear(&___nl__im__64);
#line 710
c_rt_lib0clear(&___nl__im__66);
#line 710
//clear ___nl__bool__67;
#line 710
c_rt_lib0clear(&___nl__im__68);
#line 710
c_rt_lib0clear(&___nl__im__70);
#line 710
//clear ___nl__bool__88;
#line 710
c_rt_lib0clear(&___nl__im__89);
#line 710
c_rt_lib0clear(&___nl__im__90);
#line 710
//clear ___nl__bool__91;
#line 710
c_rt_lib0clear(&___nl__im__92);
#line 710
c_rt_lib0clear(&___nl__im__93);
#line 710
c_rt_lib0clear(&___nl__im__95);
#line 710
//clear ___nl__bool__98;
#line 710
c_rt_lib0clear(&___nl__im__99);
#line 710
c_rt_lib0clear(&___nl__im__100);
#line 710
//clear ___nl__bool__101;
#line 710
c_rt_lib0clear(&___nl__im__102);
#line 710
c_rt_lib0clear(&___nl__im__103);
#line 710
c_rt_lib0clear(&___nl__im__105);
#line 710
//clear ___nl__bool__148;
#line 710
return ___nl__im__149;
#line 710
label_40:
;
#line 710
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__149, ___get_global_const(80)));
#line 710
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(226), ___nl__im__150);
#line 711
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(869), ___nl__im__105));
#line 712
goto label_1;
#line 712
label_28:
;
#line 712
___nl__rec_ptr__151 = &((*___ref___rec__0).state0field);
#line 712
c_rt_lib0move(&___nl__im__152,___get_global_const(290));
#line 712
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__151, ___nl__im__152);
#line 712
___nl__rec_ptr__151 = NULL;
#line 712
c_rt_lib0clear(&___nl__im__152);
#line 712
___nl__bool__4 = !___nl__bool__4;
#line 712
if(___nl__bool__4){ goto label_41;}
#line 713
c_rt_lib0move(&___nl__im__155, nparser_priv0parse_block(___ref___rec__0));
#line 713
___nl__bool__154 = c_rt_lib0priv_is(___nl__im__155, ___get_global_const(80));
#line 713
if(___nl__bool__154){ goto label_42;}
#line 713
c_rt_lib0clear(&___nl__im__1);
#line 713
c_rt_lib0clear(&___nl__im__3);
#line 713
//clear ___nl__bool__4;
#line 713
c_rt_lib0clear(&___nl__im__6);
#line 713
//clear ___nl__bool__7;
#line 713
c_rt_lib0clear(&___nl__im__8);
#line 713
c_rt_lib0clear(&___nl__im__9);
#line 713
//clear ___nl__bool__10;
#line 713
c_rt_lib0clear(&___nl__im__11);
#line 713
c_rt_lib0clear(&___nl__im__12);
#line 713
c_rt_lib0clear(&___nl__im__13);
#line 713
//clear ___nl__bool__16;
#line 713
c_rt_lib0clear(&___nl__im__18);
#line 713
c_rt_lib0clear(&___nl__im__19);
#line 713
//clear ___nl__bool__21;
#line 713
c_rt_lib0clear(&___nl__im__22);
#line 713
c_rt_lib0clear(&___nl__im__23);
#line 713
c_rt_lib0clear(&___nl__im__24);
#line 713
//clear ___nl__bool__28;
#line 713
c_rt_lib0clear(&___nl__im__29);
#line 713
c_rt_lib0clear(&___nl__im__30);
#line 713
c_rt_lib0clear(&___nl__im__42);
#line 713
//clear ___nl__bool__47;
#line 713
c_rt_lib0clear(&___nl__im__48);
#line 713
c_rt_lib0clear(&___nl__im__49);
#line 713
//clear ___nl__bool__50;
#line 713
c_rt_lib0clear(&___nl__im__51);
#line 713
c_rt_lib0clear(&___nl__im__52);
#line 713
c_rt_lib0clear(&___nl__im__54);
#line 713
//clear ___nl__bool__59;
#line 713
c_rt_lib0clear(&___nl__im__60);
#line 713
c_rt_lib0clear(&___nl__im__61);
#line 713
//clear ___nl__bool__62;
#line 713
c_rt_lib0clear(&___nl__im__63);
#line 713
c_rt_lib0clear(&___nl__im__64);
#line 713
c_rt_lib0clear(&___nl__im__66);
#line 713
//clear ___nl__bool__67;
#line 713
c_rt_lib0clear(&___nl__im__68);
#line 713
c_rt_lib0clear(&___nl__im__70);
#line 713
//clear ___nl__bool__88;
#line 713
c_rt_lib0clear(&___nl__im__89);
#line 713
c_rt_lib0clear(&___nl__im__90);
#line 713
//clear ___nl__bool__91;
#line 713
c_rt_lib0clear(&___nl__im__92);
#line 713
c_rt_lib0clear(&___nl__im__93);
#line 713
c_rt_lib0clear(&___nl__im__95);
#line 713
//clear ___nl__bool__98;
#line 713
c_rt_lib0clear(&___nl__im__99);
#line 713
c_rt_lib0clear(&___nl__im__100);
#line 713
//clear ___nl__bool__101;
#line 713
c_rt_lib0clear(&___nl__im__102);
#line 713
c_rt_lib0clear(&___nl__im__103);
#line 713
c_rt_lib0clear(&___nl__im__105);
#line 713
//clear ___nl__bool__148;
#line 713
c_rt_lib0clear(&___nl__im__149);
#line 713
c_rt_lib0clear(&___nl__im__150);
#line 713
c_rt_lib0clear(&___nl__im__153);
#line 713
//clear ___nl__bool__154;
#line 713
return ___nl__im__155;
#line 713
label_42:
;
#line 713
c_rt_lib0move(&___nl__im__153, c_rt_lib0priv_as(___nl__im__155, ___get_global_const(80)));
#line 714
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__153, ___get_global_const(226)));
#line 715
goto label_1;
#line 715
label_41:
;
#line 715
c_rt_lib0move(&___nl__im__156,___get_global_const(876));
#line 715
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__156);
#line 715
c_rt_lib0clear(&___nl__im__156);
#line 715
___nl__bool__4 = !___nl__bool__4;
#line 715
if(___nl__bool__4){ goto label_43;}
#line 716
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(876)));
#line 717
goto label_1;
#line 717
label_43:
;
#line 717
c_rt_lib0move(&___nl__im__157,___get_global_const(877));
#line 717
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__157);
#line 717
c_rt_lib0clear(&___nl__im__157);
#line 717
___nl__bool__4 = !___nl__bool__4;
#line 717
if(___nl__bool__4){ goto label_44;}
#line 718
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(877)));
#line 719
goto label_1;
#line 719
label_44:
;
#line 719
c_rt_lib0move(&___nl__im__158,___get_global_const(245));
#line 719
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__158);
#line 719
c_rt_lib0clear(&___nl__im__158);
#line 719
___nl__bool__4 = !___nl__bool__4;
#line 719
if(___nl__bool__4){ goto label_45;}
#line 720
___nl__rec_ptr__160 = &((*___ref___rec__0).state0field);
#line 720
c_rt_lib0move(&___nl__im__159, ntokenizer0get_token(___nl__rec_ptr__160));
#line 720
___nl__rec_ptr__160 = NULL;
#line 721
___nl__bool__161 = false;
#line 722
c_rt_lib0move(&___nl__im__162, nparser_priv0get_end_list());
#line 722
___nl__int__164 = 0;
#line 722
___nl__int__165 = 1;
#line 722
___nl__int__166 = c_rt_lib0array_len(___nl__im__162);
#line 722
label_48:
;
#line 722
___nl__int__168 = ___nl__int__164 >= ___nl__int__166;
#line 722
___nl__bool__167 = ___nl__int__168;
#line 722
if(___nl__bool__167){ goto label_46;}
#line 722
c_rt_lib0move(&___nl__im__169, c_rt_lib0array_get(___nl__im__162, ___nl__int__164));
#line 722
c_rt_lib0copy(&___nl__im__163, ___nl__im__169);
#line 723
___nl__bool__170 = c_rt_lib0eq(___nl__im__159, ___nl__im__163);
#line 723
___nl__bool__170 = !___nl__bool__170;
#line 723
if(___nl__bool__170){ goto label_50;}
#line 724
___nl__bool__161 = true;
#line 725
goto label_46;
#line 726
goto label_49;
#line 726
label_50:
;
#line 726
label_49:
;
#line 726
//clear ___nl__bool__170;
#line 726
c_rt_lib0clear(&___nl__im__163);
#line 726
label_47:
;
#line 727
___nl__int__164 = ___nl__int__164 + ___nl__int__165;
#line 727
goto label_48;
#line 727
label_46:
;
#line 728
___nl__bool__171 = ___nl__bool__161;
#line 728
___nl__bool__171 = !___nl__bool__171;
#line 728
if(___nl__bool__171){ goto label_52;}
#line 729
c_rt_lib0move(&___nl__im__172, nparser_priv0get_value_nop(___ref___rec__0));
#line 729
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__172));
#line 729
c_rt_lib0clear(&___nl__im__172);
#line 730
goto label_51;
#line 730
label_52:
;
#line 731
c_rt_lib0move(&___nl__im__175, nparser_priv0parse_expr(___ref___rec__0));
#line 731
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__175, ___get_global_const(80));
#line 731
if(___nl__bool__174){ goto label_53;}
#line 731
c_rt_lib0clear(&___nl__im__1);
#line 731
c_rt_lib0clear(&___nl__im__3);
#line 731
//clear ___nl__bool__4;
#line 731
c_rt_lib0clear(&___nl__im__6);
#line 731
//clear ___nl__bool__7;
#line 731
c_rt_lib0clear(&___nl__im__8);
#line 731
c_rt_lib0clear(&___nl__im__9);
#line 731
//clear ___nl__bool__10;
#line 731
c_rt_lib0clear(&___nl__im__11);
#line 731
c_rt_lib0clear(&___nl__im__12);
#line 731
c_rt_lib0clear(&___nl__im__13);
#line 731
//clear ___nl__bool__16;
#line 731
c_rt_lib0clear(&___nl__im__18);
#line 731
c_rt_lib0clear(&___nl__im__19);
#line 731
//clear ___nl__bool__21;
#line 731
c_rt_lib0clear(&___nl__im__22);
#line 731
c_rt_lib0clear(&___nl__im__23);
#line 731
c_rt_lib0clear(&___nl__im__24);
#line 731
//clear ___nl__bool__28;
#line 731
c_rt_lib0clear(&___nl__im__29);
#line 731
c_rt_lib0clear(&___nl__im__30);
#line 731
c_rt_lib0clear(&___nl__im__42);
#line 731
//clear ___nl__bool__47;
#line 731
c_rt_lib0clear(&___nl__im__48);
#line 731
c_rt_lib0clear(&___nl__im__49);
#line 731
//clear ___nl__bool__50;
#line 731
c_rt_lib0clear(&___nl__im__51);
#line 731
c_rt_lib0clear(&___nl__im__52);
#line 731
c_rt_lib0clear(&___nl__im__54);
#line 731
//clear ___nl__bool__59;
#line 731
c_rt_lib0clear(&___nl__im__60);
#line 731
c_rt_lib0clear(&___nl__im__61);
#line 731
//clear ___nl__bool__62;
#line 731
c_rt_lib0clear(&___nl__im__63);
#line 731
c_rt_lib0clear(&___nl__im__64);
#line 731
c_rt_lib0clear(&___nl__im__66);
#line 731
//clear ___nl__bool__67;
#line 731
c_rt_lib0clear(&___nl__im__68);
#line 731
c_rt_lib0clear(&___nl__im__70);
#line 731
//clear ___nl__bool__88;
#line 731
c_rt_lib0clear(&___nl__im__89);
#line 731
c_rt_lib0clear(&___nl__im__90);
#line 731
//clear ___nl__bool__91;
#line 731
c_rt_lib0clear(&___nl__im__92);
#line 731
c_rt_lib0clear(&___nl__im__93);
#line 731
c_rt_lib0clear(&___nl__im__95);
#line 731
//clear ___nl__bool__98;
#line 731
c_rt_lib0clear(&___nl__im__99);
#line 731
c_rt_lib0clear(&___nl__im__100);
#line 731
//clear ___nl__bool__101;
#line 731
c_rt_lib0clear(&___nl__im__102);
#line 731
c_rt_lib0clear(&___nl__im__103);
#line 731
c_rt_lib0clear(&___nl__im__105);
#line 731
//clear ___nl__bool__148;
#line 731
c_rt_lib0clear(&___nl__im__149);
#line 731
c_rt_lib0clear(&___nl__im__150);
#line 731
c_rt_lib0clear(&___nl__im__153);
#line 731
//clear ___nl__bool__154;
#line 731
c_rt_lib0clear(&___nl__im__155);
#line 731
c_rt_lib0clear(&___nl__im__159);
#line 731
//clear ___nl__bool__161;
#line 731
c_rt_lib0clear(&___nl__im__162);
#line 731
c_rt_lib0clear(&___nl__im__163);
#line 731
//clear ___nl__int__164;
#line 731
//clear ___nl__int__165;
#line 731
//clear ___nl__int__166;
#line 731
//clear ___nl__bool__167;
#line 731
//clear ___nl__int__168;
#line 731
c_rt_lib0clear(&___nl__im__169);
#line 731
//clear ___nl__bool__171;
#line 731
c_rt_lib0clear(&___nl__im__173);
#line 731
//clear ___nl__bool__174;
#line 731
return ___nl__im__175;
#line 731
label_53:
;
#line 731
c_rt_lib0move(&___nl__im__173, c_rt_lib0priv_as(___nl__im__175, ___get_global_const(80)));
#line 732
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__173));
#line 733
goto label_51;
#line 733
label_51:
;
#line 733
//clear ___nl__bool__171;
#line 733
c_rt_lib0clear(&___nl__im__173);
#line 733
//clear ___nl__bool__174;
#line 733
c_rt_lib0clear(&___nl__im__175);
#line 734
goto label_1;
#line 734
label_45:
;
#line 734
c_rt_lib0move(&___nl__im__176,___get_global_const(878));
#line 734
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__176);
#line 734
c_rt_lib0clear(&___nl__im__176);
#line 734
___nl__bool__4 = !___nl__bool__4;
#line 734
if(___nl__bool__4){ goto label_54;}
#line 735
c_rt_lib0move(&___nl__im__177,___get_global_const(419));
#line 735
___nl__bool__178 = nparser_priv0eat(___ref___rec__0, ___nl__im__177);
#line 735
c_rt_lib0clear(&___nl__im__177);
#line 735
//clear ___nl__bool__178;
#line 736
c_rt_lib0move(&___nl__im__181, nparser_priv0parse_expr(___ref___rec__0));
#line 736
___nl__bool__180 = c_rt_lib0priv_is(___nl__im__181, ___get_global_const(80));
#line 736
if(___nl__bool__180){ goto label_55;}
#line 736
c_rt_lib0clear(&___nl__im__1);
#line 736
c_rt_lib0clear(&___nl__im__3);
#line 736
//clear ___nl__bool__4;
#line 736
c_rt_lib0clear(&___nl__im__6);
#line 736
//clear ___nl__bool__7;
#line 736
c_rt_lib0clear(&___nl__im__8);
#line 736
c_rt_lib0clear(&___nl__im__9);
#line 736
//clear ___nl__bool__10;
#line 736
c_rt_lib0clear(&___nl__im__11);
#line 736
c_rt_lib0clear(&___nl__im__12);
#line 736
c_rt_lib0clear(&___nl__im__13);
#line 736
//clear ___nl__bool__16;
#line 736
c_rt_lib0clear(&___nl__im__18);
#line 736
c_rt_lib0clear(&___nl__im__19);
#line 736
//clear ___nl__bool__21;
#line 736
c_rt_lib0clear(&___nl__im__22);
#line 736
c_rt_lib0clear(&___nl__im__23);
#line 736
c_rt_lib0clear(&___nl__im__24);
#line 736
//clear ___nl__bool__28;
#line 736
c_rt_lib0clear(&___nl__im__29);
#line 736
c_rt_lib0clear(&___nl__im__30);
#line 736
c_rt_lib0clear(&___nl__im__42);
#line 736
//clear ___nl__bool__47;
#line 736
c_rt_lib0clear(&___nl__im__48);
#line 736
c_rt_lib0clear(&___nl__im__49);
#line 736
//clear ___nl__bool__50;
#line 736
c_rt_lib0clear(&___nl__im__51);
#line 736
c_rt_lib0clear(&___nl__im__52);
#line 736
c_rt_lib0clear(&___nl__im__54);
#line 736
//clear ___nl__bool__59;
#line 736
c_rt_lib0clear(&___nl__im__60);
#line 736
c_rt_lib0clear(&___nl__im__61);
#line 736
//clear ___nl__bool__62;
#line 736
c_rt_lib0clear(&___nl__im__63);
#line 736
c_rt_lib0clear(&___nl__im__64);
#line 736
c_rt_lib0clear(&___nl__im__66);
#line 736
//clear ___nl__bool__67;
#line 736
c_rt_lib0clear(&___nl__im__68);
#line 736
c_rt_lib0clear(&___nl__im__70);
#line 736
//clear ___nl__bool__88;
#line 736
c_rt_lib0clear(&___nl__im__89);
#line 736
c_rt_lib0clear(&___nl__im__90);
#line 736
//clear ___nl__bool__91;
#line 736
c_rt_lib0clear(&___nl__im__92);
#line 736
c_rt_lib0clear(&___nl__im__93);
#line 736
c_rt_lib0clear(&___nl__im__95);
#line 736
//clear ___nl__bool__98;
#line 736
c_rt_lib0clear(&___nl__im__99);
#line 736
c_rt_lib0clear(&___nl__im__100);
#line 736
//clear ___nl__bool__101;
#line 736
c_rt_lib0clear(&___nl__im__102);
#line 736
c_rt_lib0clear(&___nl__im__103);
#line 736
c_rt_lib0clear(&___nl__im__105);
#line 736
//clear ___nl__bool__148;
#line 736
c_rt_lib0clear(&___nl__im__149);
#line 736
c_rt_lib0clear(&___nl__im__150);
#line 736
c_rt_lib0clear(&___nl__im__153);
#line 736
//clear ___nl__bool__154;
#line 736
c_rt_lib0clear(&___nl__im__155);
#line 736
c_rt_lib0clear(&___nl__im__159);
#line 736
//clear ___nl__bool__161;
#line 736
c_rt_lib0clear(&___nl__im__162);
#line 736
c_rt_lib0clear(&___nl__im__163);
#line 736
//clear ___nl__int__164;
#line 736
//clear ___nl__int__165;
#line 736
//clear ___nl__int__166;
#line 736
//clear ___nl__bool__167;
#line 736
//clear ___nl__int__168;
#line 736
c_rt_lib0clear(&___nl__im__169);
#line 736
c_rt_lib0clear(&___nl__im__179);
#line 736
//clear ___nl__bool__180;
#line 736
return ___nl__im__181;
#line 736
label_55:
;
#line 736
c_rt_lib0move(&___nl__im__179, c_rt_lib0priv_as(___nl__im__181, ___get_global_const(80)));
#line 737
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_mk(0));
#line 737
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__179, ___get_global_const(890), ___nl__im__183));
#line 737
c_rt_lib0clear(&___nl__im__183);
#line 738
c_rt_lib0move(&___nl__im__184,___get_global_const(298));
#line 738
___nl__bool__185 = nparser_priv0eat(___ref___rec__0, ___nl__im__184);
#line 738
c_rt_lib0clear(&___nl__im__184);
#line 738
//clear ___nl__bool__185;
#line 739
___nl__rec_ptr__187 = &((*___ref___rec__0).state0field);
#line 739
c_rt_lib0move(&___nl__im__186, ntokenizer0get_place(___nl__rec_ptr__187));
#line 739
___nl__rec_ptr__187 = NULL;
#line 740
label_57:
;
#line 740
c_rt_lib0move(&___nl__im__189,___get_global_const(1013));
#line 740
___nl__bool__188 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__189);
#line 740
c_rt_lib0clear(&___nl__im__189);
#line 740
___nl__bool__188 = !___nl__bool__188;
#line 740
if(___nl__bool__188){ goto label_56;}
#line 741
c_rt_lib0move(&___nl__im__191, nparser_priv0parse_variant_decl(___ref___rec__0));
#line 741
c_rt_lib0move(&___nl__im__190, c_rt_lib0hash_mk(1, ___get_global_const(516), ___nl__im__191));
#line 741
c_rt_lib0clear(&___nl__im__191);
#line 742
___nl__rec_ptr__195 = &((*___ref___rec__0).state0field);
#line 742
c_rt_lib0move(&___nl__im__194, ntokenizer0get_place_ws(___nl__rec_ptr__195));
#line 742
___nl__rec_ptr__195 = NULL;
#line 742
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__186, ___get_global_const(938), ___nl__im__194));
#line 742
c_rt_lib0clear(&___nl__im__194);
#line 742
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 742
c_rt_lib0hash_set_value_dec(&___nl__im__190, ___get_global_const(220), ___nl__im__192);
#line 742
c_rt_lib0clear(&___nl__im__192);
#line 742
c_rt_lib0clear(&___nl__im__193);
#line 743
c_rt_lib0move(&___nl__im__197, nparser_priv0parse_block(___ref___rec__0));
#line 743
___nl__bool__196 = c_rt_lib0priv_is(___nl__im__197, ___get_global_const(80));
#line 743
if(___nl__bool__196){ goto label_58;}
#line 743
c_rt_lib0clear(&___nl__im__1);
#line 743
c_rt_lib0clear(&___nl__im__3);
#line 743
//clear ___nl__bool__4;
#line 743
c_rt_lib0clear(&___nl__im__6);
#line 743
//clear ___nl__bool__7;
#line 743
c_rt_lib0clear(&___nl__im__8);
#line 743
c_rt_lib0clear(&___nl__im__9);
#line 743
//clear ___nl__bool__10;
#line 743
c_rt_lib0clear(&___nl__im__11);
#line 743
c_rt_lib0clear(&___nl__im__12);
#line 743
c_rt_lib0clear(&___nl__im__13);
#line 743
//clear ___nl__bool__16;
#line 743
c_rt_lib0clear(&___nl__im__18);
#line 743
c_rt_lib0clear(&___nl__im__19);
#line 743
//clear ___nl__bool__21;
#line 743
c_rt_lib0clear(&___nl__im__22);
#line 743
c_rt_lib0clear(&___nl__im__23);
#line 743
c_rt_lib0clear(&___nl__im__24);
#line 743
//clear ___nl__bool__28;
#line 743
c_rt_lib0clear(&___nl__im__29);
#line 743
c_rt_lib0clear(&___nl__im__30);
#line 743
c_rt_lib0clear(&___nl__im__42);
#line 743
//clear ___nl__bool__47;
#line 743
c_rt_lib0clear(&___nl__im__48);
#line 743
c_rt_lib0clear(&___nl__im__49);
#line 743
//clear ___nl__bool__50;
#line 743
c_rt_lib0clear(&___nl__im__51);
#line 743
c_rt_lib0clear(&___nl__im__52);
#line 743
c_rt_lib0clear(&___nl__im__54);
#line 743
//clear ___nl__bool__59;
#line 743
c_rt_lib0clear(&___nl__im__60);
#line 743
c_rt_lib0clear(&___nl__im__61);
#line 743
//clear ___nl__bool__62;
#line 743
c_rt_lib0clear(&___nl__im__63);
#line 743
c_rt_lib0clear(&___nl__im__64);
#line 743
c_rt_lib0clear(&___nl__im__66);
#line 743
//clear ___nl__bool__67;
#line 743
c_rt_lib0clear(&___nl__im__68);
#line 743
c_rt_lib0clear(&___nl__im__70);
#line 743
//clear ___nl__bool__88;
#line 743
c_rt_lib0clear(&___nl__im__89);
#line 743
c_rt_lib0clear(&___nl__im__90);
#line 743
//clear ___nl__bool__91;
#line 743
c_rt_lib0clear(&___nl__im__92);
#line 743
c_rt_lib0clear(&___nl__im__93);
#line 743
c_rt_lib0clear(&___nl__im__95);
#line 743
//clear ___nl__bool__98;
#line 743
c_rt_lib0clear(&___nl__im__99);
#line 743
c_rt_lib0clear(&___nl__im__100);
#line 743
//clear ___nl__bool__101;
#line 743
c_rt_lib0clear(&___nl__im__102);
#line 743
c_rt_lib0clear(&___nl__im__103);
#line 743
c_rt_lib0clear(&___nl__im__105);
#line 743
//clear ___nl__bool__148;
#line 743
c_rt_lib0clear(&___nl__im__149);
#line 743
c_rt_lib0clear(&___nl__im__150);
#line 743
c_rt_lib0clear(&___nl__im__153);
#line 743
//clear ___nl__bool__154;
#line 743
c_rt_lib0clear(&___nl__im__155);
#line 743
c_rt_lib0clear(&___nl__im__159);
#line 743
//clear ___nl__bool__161;
#line 743
c_rt_lib0clear(&___nl__im__162);
#line 743
c_rt_lib0clear(&___nl__im__163);
#line 743
//clear ___nl__int__164;
#line 743
//clear ___nl__int__165;
#line 743
//clear ___nl__int__166;
#line 743
//clear ___nl__bool__167;
#line 743
//clear ___nl__int__168;
#line 743
c_rt_lib0clear(&___nl__im__169);
#line 743
c_rt_lib0clear(&___nl__im__179);
#line 743
//clear ___nl__bool__180;
#line 743
c_rt_lib0clear(&___nl__im__181);
#line 743
c_rt_lib0clear(&___nl__im__182);
#line 743
c_rt_lib0clear(&___nl__im__186);
#line 743
//clear ___nl__bool__188;
#line 743
c_rt_lib0clear(&___nl__im__190);
#line 743
//clear ___nl__bool__196;
#line 743
return ___nl__im__197;
#line 743
label_58:
;
#line 743
c_rt_lib0move(&___nl__im__198, c_rt_lib0priv_as(___nl__im__197, ___get_global_const(80)));
#line 743
c_rt_lib0hash_set_value_dec(&___nl__im__190, ___get_global_const(226), ___nl__im__198);
#line 744
c_rt_lib0move(&___nl__im__199,___get_global_const(890));
#line 744
c_rt_lib0move(&___nl__im__199, c_rt_lib0get_ref_hash(___nl__im__182, ___nl__im__199));
#line 744
c_rt_lib0delete(array0push(&___nl__im__199, ___nl__im__190));
#line 744
c_rt_lib0move(&___nl__string__200,___get_global_const(890));
#line 744
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__182, ___nl__string__200, ___nl__im__199));
#line 744
c_rt_lib0clear(&___nl__im__199);
#line 744
c_rt_lib0clear(&___nl__string__200);
#line 745
___nl__rec_ptr__201 = &((*___ref___rec__0).state0field);
#line 745
c_rt_lib0move(&___nl__im__186, ntokenizer0get_place(___nl__rec_ptr__201));
#line 745
___nl__rec_ptr__201 = NULL;
#line 745
c_rt_lib0clear(&___nl__im__190);
#line 745
//clear ___nl__bool__196;
#line 745
c_rt_lib0clear(&___nl__im__197);
#line 745
c_rt_lib0clear(&___nl__im__198);
#line 746
goto label_57;
#line 746
label_56:
;
#line 747
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(878), ___nl__im__182));
#line 748
goto label_1;
#line 748
label_54:
;
#line 748
c_rt_lib0move(&___nl__im__202,___get_global_const(246));
#line 748
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__202);
#line 748
c_rt_lib0clear(&___nl__im__202);
#line 748
___nl__bool__4 = !___nl__bool__4;
#line 748
if(___nl__bool__4){ goto label_59;}
#line 749
c_rt_lib0move(&___nl__im__203, c_rt_lib0array_mk(0));
#line 750
c_rt_lib0move(&___nl__im__205,___get_global_const(419));
#line 750
___nl__bool__204 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__205);
#line 750
c_rt_lib0clear(&___nl__im__205);
#line 750
___nl__bool__204 = !___nl__bool__204;
#line 750
if(___nl__bool__204){ goto label_61;}
#line 751
c_rt_lib0move(&___nl__im__207, nparser_priv0parse_expr_list(___ref___rec__0));
#line 751
___nl__bool__206 = c_rt_lib0priv_is(___nl__im__207, ___get_global_const(80));
#line 751
if(___nl__bool__206){ goto label_62;}
#line 751
c_rt_lib0clear(&___nl__im__1);
#line 751
c_rt_lib0clear(&___nl__im__3);
#line 751
//clear ___nl__bool__4;
#line 751
c_rt_lib0clear(&___nl__im__6);
#line 751
//clear ___nl__bool__7;
#line 751
c_rt_lib0clear(&___nl__im__8);
#line 751
c_rt_lib0clear(&___nl__im__9);
#line 751
//clear ___nl__bool__10;
#line 751
c_rt_lib0clear(&___nl__im__11);
#line 751
c_rt_lib0clear(&___nl__im__12);
#line 751
c_rt_lib0clear(&___nl__im__13);
#line 751
//clear ___nl__bool__16;
#line 751
c_rt_lib0clear(&___nl__im__18);
#line 751
c_rt_lib0clear(&___nl__im__19);
#line 751
//clear ___nl__bool__21;
#line 751
c_rt_lib0clear(&___nl__im__22);
#line 751
c_rt_lib0clear(&___nl__im__23);
#line 751
c_rt_lib0clear(&___nl__im__24);
#line 751
//clear ___nl__bool__28;
#line 751
c_rt_lib0clear(&___nl__im__29);
#line 751
c_rt_lib0clear(&___nl__im__30);
#line 751
c_rt_lib0clear(&___nl__im__42);
#line 751
//clear ___nl__bool__47;
#line 751
c_rt_lib0clear(&___nl__im__48);
#line 751
c_rt_lib0clear(&___nl__im__49);
#line 751
//clear ___nl__bool__50;
#line 751
c_rt_lib0clear(&___nl__im__51);
#line 751
c_rt_lib0clear(&___nl__im__52);
#line 751
c_rt_lib0clear(&___nl__im__54);
#line 751
//clear ___nl__bool__59;
#line 751
c_rt_lib0clear(&___nl__im__60);
#line 751
c_rt_lib0clear(&___nl__im__61);
#line 751
//clear ___nl__bool__62;
#line 751
c_rt_lib0clear(&___nl__im__63);
#line 751
c_rt_lib0clear(&___nl__im__64);
#line 751
c_rt_lib0clear(&___nl__im__66);
#line 751
//clear ___nl__bool__67;
#line 751
c_rt_lib0clear(&___nl__im__68);
#line 751
c_rt_lib0clear(&___nl__im__70);
#line 751
//clear ___nl__bool__88;
#line 751
c_rt_lib0clear(&___nl__im__89);
#line 751
c_rt_lib0clear(&___nl__im__90);
#line 751
//clear ___nl__bool__91;
#line 751
c_rt_lib0clear(&___nl__im__92);
#line 751
c_rt_lib0clear(&___nl__im__93);
#line 751
c_rt_lib0clear(&___nl__im__95);
#line 751
//clear ___nl__bool__98;
#line 751
c_rt_lib0clear(&___nl__im__99);
#line 751
c_rt_lib0clear(&___nl__im__100);
#line 751
//clear ___nl__bool__101;
#line 751
c_rt_lib0clear(&___nl__im__102);
#line 751
c_rt_lib0clear(&___nl__im__103);
#line 751
c_rt_lib0clear(&___nl__im__105);
#line 751
//clear ___nl__bool__148;
#line 751
c_rt_lib0clear(&___nl__im__149);
#line 751
c_rt_lib0clear(&___nl__im__150);
#line 751
c_rt_lib0clear(&___nl__im__153);
#line 751
//clear ___nl__bool__154;
#line 751
c_rt_lib0clear(&___nl__im__155);
#line 751
c_rt_lib0clear(&___nl__im__159);
#line 751
//clear ___nl__bool__161;
#line 751
c_rt_lib0clear(&___nl__im__162);
#line 751
c_rt_lib0clear(&___nl__im__163);
#line 751
//clear ___nl__int__164;
#line 751
//clear ___nl__int__165;
#line 751
//clear ___nl__int__166;
#line 751
//clear ___nl__bool__167;
#line 751
//clear ___nl__int__168;
#line 751
c_rt_lib0clear(&___nl__im__169);
#line 751
c_rt_lib0clear(&___nl__im__179);
#line 751
//clear ___nl__bool__180;
#line 751
c_rt_lib0clear(&___nl__im__181);
#line 751
c_rt_lib0clear(&___nl__im__182);
#line 751
c_rt_lib0clear(&___nl__im__186);
#line 751
//clear ___nl__bool__188;
#line 751
c_rt_lib0clear(&___nl__im__190);
#line 751
//clear ___nl__bool__196;
#line 751
c_rt_lib0clear(&___nl__im__197);
#line 751
c_rt_lib0clear(&___nl__im__198);
#line 751
c_rt_lib0clear(&___nl__im__203);
#line 751
//clear ___nl__bool__204;
#line 751
//clear ___nl__bool__206;
#line 751
return ___nl__im__207;
#line 751
label_62:
;
#line 751
c_rt_lib0move(&___nl__im__203, c_rt_lib0priv_as(___nl__im__207, ___get_global_const(80)));
#line 752
goto label_60;
#line 752
label_61:
;
#line 752
label_60:
;
#line 752
//clear ___nl__bool__204;
#line 752
//clear ___nl__bool__206;
#line 752
c_rt_lib0clear(&___nl__im__207);
#line 753
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__203));
#line 754
goto label_1;
#line 754
label_59:
;
#line 754
___nl__rec_ptr__208 = &((*___ref___rec__0).state0field);
#line 754
c_rt_lib0move(&___nl__im__209,___get_global_const(462));
#line 754
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__208, ___nl__im__209);
#line 754
___nl__rec_ptr__208 = NULL;
#line 754
c_rt_lib0clear(&___nl__im__209);
#line 754
___nl__bool__4 = !___nl__bool__4;
#line 754
if(___nl__bool__4){ goto label_63;}
#line 755
c_rt_lib0move(&___nl__im__212, nparser_priv0parse_var_decl(___ref___rec__0));
#line 755
___nl__bool__211 = c_rt_lib0priv_is(___nl__im__212, ___get_global_const(80));
#line 755
if(___nl__bool__211){ goto label_64;}
#line 755
c_rt_lib0clear(&___nl__im__1);
#line 755
c_rt_lib0clear(&___nl__im__3);
#line 755
//clear ___nl__bool__4;
#line 755
c_rt_lib0clear(&___nl__im__6);
#line 755
//clear ___nl__bool__7;
#line 755
c_rt_lib0clear(&___nl__im__8);
#line 755
c_rt_lib0clear(&___nl__im__9);
#line 755
//clear ___nl__bool__10;
#line 755
c_rt_lib0clear(&___nl__im__11);
#line 755
c_rt_lib0clear(&___nl__im__12);
#line 755
c_rt_lib0clear(&___nl__im__13);
#line 755
//clear ___nl__bool__16;
#line 755
c_rt_lib0clear(&___nl__im__18);
#line 755
c_rt_lib0clear(&___nl__im__19);
#line 755
//clear ___nl__bool__21;
#line 755
c_rt_lib0clear(&___nl__im__22);
#line 755
c_rt_lib0clear(&___nl__im__23);
#line 755
c_rt_lib0clear(&___nl__im__24);
#line 755
//clear ___nl__bool__28;
#line 755
c_rt_lib0clear(&___nl__im__29);
#line 755
c_rt_lib0clear(&___nl__im__30);
#line 755
c_rt_lib0clear(&___nl__im__42);
#line 755
//clear ___nl__bool__47;
#line 755
c_rt_lib0clear(&___nl__im__48);
#line 755
c_rt_lib0clear(&___nl__im__49);
#line 755
//clear ___nl__bool__50;
#line 755
c_rt_lib0clear(&___nl__im__51);
#line 755
c_rt_lib0clear(&___nl__im__52);
#line 755
c_rt_lib0clear(&___nl__im__54);
#line 755
//clear ___nl__bool__59;
#line 755
c_rt_lib0clear(&___nl__im__60);
#line 755
c_rt_lib0clear(&___nl__im__61);
#line 755
//clear ___nl__bool__62;
#line 755
c_rt_lib0clear(&___nl__im__63);
#line 755
c_rt_lib0clear(&___nl__im__64);
#line 755
c_rt_lib0clear(&___nl__im__66);
#line 755
//clear ___nl__bool__67;
#line 755
c_rt_lib0clear(&___nl__im__68);
#line 755
c_rt_lib0clear(&___nl__im__70);
#line 755
//clear ___nl__bool__88;
#line 755
c_rt_lib0clear(&___nl__im__89);
#line 755
c_rt_lib0clear(&___nl__im__90);
#line 755
//clear ___nl__bool__91;
#line 755
c_rt_lib0clear(&___nl__im__92);
#line 755
c_rt_lib0clear(&___nl__im__93);
#line 755
c_rt_lib0clear(&___nl__im__95);
#line 755
//clear ___nl__bool__98;
#line 755
c_rt_lib0clear(&___nl__im__99);
#line 755
c_rt_lib0clear(&___nl__im__100);
#line 755
//clear ___nl__bool__101;
#line 755
c_rt_lib0clear(&___nl__im__102);
#line 755
c_rt_lib0clear(&___nl__im__103);
#line 755
c_rt_lib0clear(&___nl__im__105);
#line 755
//clear ___nl__bool__148;
#line 755
c_rt_lib0clear(&___nl__im__149);
#line 755
c_rt_lib0clear(&___nl__im__150);
#line 755
c_rt_lib0clear(&___nl__im__153);
#line 755
//clear ___nl__bool__154;
#line 755
c_rt_lib0clear(&___nl__im__155);
#line 755
c_rt_lib0clear(&___nl__im__159);
#line 755
//clear ___nl__bool__161;
#line 755
c_rt_lib0clear(&___nl__im__162);
#line 755
c_rt_lib0clear(&___nl__im__163);
#line 755
//clear ___nl__int__164;
#line 755
//clear ___nl__int__165;
#line 755
//clear ___nl__int__166;
#line 755
//clear ___nl__bool__167;
#line 755
//clear ___nl__int__168;
#line 755
c_rt_lib0clear(&___nl__im__169);
#line 755
c_rt_lib0clear(&___nl__im__179);
#line 755
//clear ___nl__bool__180;
#line 755
c_rt_lib0clear(&___nl__im__181);
#line 755
c_rt_lib0clear(&___nl__im__182);
#line 755
c_rt_lib0clear(&___nl__im__186);
#line 755
//clear ___nl__bool__188;
#line 755
c_rt_lib0clear(&___nl__im__190);
#line 755
//clear ___nl__bool__196;
#line 755
c_rt_lib0clear(&___nl__im__197);
#line 755
c_rt_lib0clear(&___nl__im__198);
#line 755
c_rt_lib0clear(&___nl__im__203);
#line 755
c_rt_lib0clear(&___nl__im__210);
#line 755
//clear ___nl__bool__211;
#line 755
return ___nl__im__212;
#line 755
label_64:
;
#line 755
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__212, ___get_global_const(80)));
#line 756
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(251), ___nl__im__210));
#line 757
c_rt_lib0move(&___nl__im__213,___get_global_const(408));
#line 757
___nl__bool__214 = nparser_priv0eat(___ref___rec__0, ___nl__im__213);
#line 757
c_rt_lib0clear(&___nl__im__213);
#line 757
//clear ___nl__bool__214;
#line 758
goto label_1;
#line 758
label_63:
;
#line 758
___nl__rec_ptr__215 = &((*___ref___rec__0).state0field);
#line 758
c_rt_lib0move(&___nl__im__216,___get_global_const(880));
#line 758
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__215, ___nl__im__216);
#line 758
___nl__rec_ptr__215 = NULL;
#line 758
c_rt_lib0clear(&___nl__im__216);
#line 758
___nl__bool__4 = !___nl__bool__4;
#line 758
if(___nl__bool__4){ goto label_65;}
#line 759
c_rt_lib0move(&___nl__im__217,___get_global_const(880));
#line 759
___nl__bool__218 = nparser_priv0eat(___ref___rec__0, ___nl__im__217);
#line 759
c_rt_lib0clear(&___nl__im__217);
#line 759
//clear ___nl__bool__218;
#line 760
c_rt_lib0move(&___nl__im__221, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 760
___nl__bool__220 = c_rt_lib0priv_is(___nl__im__221, ___get_global_const(80));
#line 760
if(___nl__bool__220){ goto label_66;}
#line 760
c_rt_lib0clear(&___nl__im__1);
#line 760
c_rt_lib0clear(&___nl__im__3);
#line 760
//clear ___nl__bool__4;
#line 760
c_rt_lib0clear(&___nl__im__6);
#line 760
//clear ___nl__bool__7;
#line 760
c_rt_lib0clear(&___nl__im__8);
#line 760
c_rt_lib0clear(&___nl__im__9);
#line 760
//clear ___nl__bool__10;
#line 760
c_rt_lib0clear(&___nl__im__11);
#line 760
c_rt_lib0clear(&___nl__im__12);
#line 760
c_rt_lib0clear(&___nl__im__13);
#line 760
//clear ___nl__bool__16;
#line 760
c_rt_lib0clear(&___nl__im__18);
#line 760
c_rt_lib0clear(&___nl__im__19);
#line 760
//clear ___nl__bool__21;
#line 760
c_rt_lib0clear(&___nl__im__22);
#line 760
c_rt_lib0clear(&___nl__im__23);
#line 760
c_rt_lib0clear(&___nl__im__24);
#line 760
//clear ___nl__bool__28;
#line 760
c_rt_lib0clear(&___nl__im__29);
#line 760
c_rt_lib0clear(&___nl__im__30);
#line 760
c_rt_lib0clear(&___nl__im__42);
#line 760
//clear ___nl__bool__47;
#line 760
c_rt_lib0clear(&___nl__im__48);
#line 760
c_rt_lib0clear(&___nl__im__49);
#line 760
//clear ___nl__bool__50;
#line 760
c_rt_lib0clear(&___nl__im__51);
#line 760
c_rt_lib0clear(&___nl__im__52);
#line 760
c_rt_lib0clear(&___nl__im__54);
#line 760
//clear ___nl__bool__59;
#line 760
c_rt_lib0clear(&___nl__im__60);
#line 760
c_rt_lib0clear(&___nl__im__61);
#line 760
//clear ___nl__bool__62;
#line 760
c_rt_lib0clear(&___nl__im__63);
#line 760
c_rt_lib0clear(&___nl__im__64);
#line 760
c_rt_lib0clear(&___nl__im__66);
#line 760
//clear ___nl__bool__67;
#line 760
c_rt_lib0clear(&___nl__im__68);
#line 760
c_rt_lib0clear(&___nl__im__70);
#line 760
//clear ___nl__bool__88;
#line 760
c_rt_lib0clear(&___nl__im__89);
#line 760
c_rt_lib0clear(&___nl__im__90);
#line 760
//clear ___nl__bool__91;
#line 760
c_rt_lib0clear(&___nl__im__92);
#line 760
c_rt_lib0clear(&___nl__im__93);
#line 760
c_rt_lib0clear(&___nl__im__95);
#line 760
//clear ___nl__bool__98;
#line 760
c_rt_lib0clear(&___nl__im__99);
#line 760
c_rt_lib0clear(&___nl__im__100);
#line 760
//clear ___nl__bool__101;
#line 760
c_rt_lib0clear(&___nl__im__102);
#line 760
c_rt_lib0clear(&___nl__im__103);
#line 760
c_rt_lib0clear(&___nl__im__105);
#line 760
//clear ___nl__bool__148;
#line 760
c_rt_lib0clear(&___nl__im__149);
#line 760
c_rt_lib0clear(&___nl__im__150);
#line 760
c_rt_lib0clear(&___nl__im__153);
#line 760
//clear ___nl__bool__154;
#line 760
c_rt_lib0clear(&___nl__im__155);
#line 760
c_rt_lib0clear(&___nl__im__159);
#line 760
//clear ___nl__bool__161;
#line 760
c_rt_lib0clear(&___nl__im__162);
#line 760
c_rt_lib0clear(&___nl__im__163);
#line 760
//clear ___nl__int__164;
#line 760
//clear ___nl__int__165;
#line 760
//clear ___nl__int__166;
#line 760
//clear ___nl__bool__167;
#line 760
//clear ___nl__int__168;
#line 760
c_rt_lib0clear(&___nl__im__169);
#line 760
c_rt_lib0clear(&___nl__im__179);
#line 760
//clear ___nl__bool__180;
#line 760
c_rt_lib0clear(&___nl__im__181);
#line 760
c_rt_lib0clear(&___nl__im__182);
#line 760
c_rt_lib0clear(&___nl__im__186);
#line 760
//clear ___nl__bool__188;
#line 760
c_rt_lib0clear(&___nl__im__190);
#line 760
//clear ___nl__bool__196;
#line 760
c_rt_lib0clear(&___nl__im__197);
#line 760
c_rt_lib0clear(&___nl__im__198);
#line 760
c_rt_lib0clear(&___nl__im__203);
#line 760
c_rt_lib0clear(&___nl__im__210);
#line 760
//clear ___nl__bool__211;
#line 760
c_rt_lib0clear(&___nl__im__212);
#line 760
c_rt_lib0clear(&___nl__im__219);
#line 760
//clear ___nl__bool__220;
#line 760
return ___nl__im__221;
#line 760
label_66:
;
#line 760
c_rt_lib0move(&___nl__im__219, c_rt_lib0priv_as(___nl__im__221, ___get_global_const(80)));
#line 761
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(880), ___nl__im__219));
#line 762
goto label_1;
#line 762
label_65:
;
#line 762
___nl__rec_ptr__222 = &((*___ref___rec__0).state0field);
#line 762
c_rt_lib0move(&___nl__im__223,___get_global_const(176));
#line 762
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__222, ___nl__im__223);
#line 762
___nl__rec_ptr__222 = NULL;
#line 762
c_rt_lib0clear(&___nl__im__223);
#line 762
___nl__bool__4 = !___nl__bool__4;
#line 762
if(___nl__bool__4){ goto label_67;}
#line 763
c_rt_lib0move(&___nl__im__224,___get_global_const(176));
#line 763
___nl__bool__225 = nparser_priv0eat(___ref___rec__0, ___nl__im__224);
#line 763
c_rt_lib0clear(&___nl__im__224);
#line 763
//clear ___nl__bool__225;
#line 764
c_rt_lib0move(&___nl__im__228, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 764
___nl__bool__227 = c_rt_lib0priv_is(___nl__im__228, ___get_global_const(80));
#line 764
if(___nl__bool__227){ goto label_68;}
#line 764
c_rt_lib0clear(&___nl__im__1);
#line 764
c_rt_lib0clear(&___nl__im__3);
#line 764
//clear ___nl__bool__4;
#line 764
c_rt_lib0clear(&___nl__im__6);
#line 764
//clear ___nl__bool__7;
#line 764
c_rt_lib0clear(&___nl__im__8);
#line 764
c_rt_lib0clear(&___nl__im__9);
#line 764
//clear ___nl__bool__10;
#line 764
c_rt_lib0clear(&___nl__im__11);
#line 764
c_rt_lib0clear(&___nl__im__12);
#line 764
c_rt_lib0clear(&___nl__im__13);
#line 764
//clear ___nl__bool__16;
#line 764
c_rt_lib0clear(&___nl__im__18);
#line 764
c_rt_lib0clear(&___nl__im__19);
#line 764
//clear ___nl__bool__21;
#line 764
c_rt_lib0clear(&___nl__im__22);
#line 764
c_rt_lib0clear(&___nl__im__23);
#line 764
c_rt_lib0clear(&___nl__im__24);
#line 764
//clear ___nl__bool__28;
#line 764
c_rt_lib0clear(&___nl__im__29);
#line 764
c_rt_lib0clear(&___nl__im__30);
#line 764
c_rt_lib0clear(&___nl__im__42);
#line 764
//clear ___nl__bool__47;
#line 764
c_rt_lib0clear(&___nl__im__48);
#line 764
c_rt_lib0clear(&___nl__im__49);
#line 764
//clear ___nl__bool__50;
#line 764
c_rt_lib0clear(&___nl__im__51);
#line 764
c_rt_lib0clear(&___nl__im__52);
#line 764
c_rt_lib0clear(&___nl__im__54);
#line 764
//clear ___nl__bool__59;
#line 764
c_rt_lib0clear(&___nl__im__60);
#line 764
c_rt_lib0clear(&___nl__im__61);
#line 764
//clear ___nl__bool__62;
#line 764
c_rt_lib0clear(&___nl__im__63);
#line 764
c_rt_lib0clear(&___nl__im__64);
#line 764
c_rt_lib0clear(&___nl__im__66);
#line 764
//clear ___nl__bool__67;
#line 764
c_rt_lib0clear(&___nl__im__68);
#line 764
c_rt_lib0clear(&___nl__im__70);
#line 764
//clear ___nl__bool__88;
#line 764
c_rt_lib0clear(&___nl__im__89);
#line 764
c_rt_lib0clear(&___nl__im__90);
#line 764
//clear ___nl__bool__91;
#line 764
c_rt_lib0clear(&___nl__im__92);
#line 764
c_rt_lib0clear(&___nl__im__93);
#line 764
c_rt_lib0clear(&___nl__im__95);
#line 764
//clear ___nl__bool__98;
#line 764
c_rt_lib0clear(&___nl__im__99);
#line 764
c_rt_lib0clear(&___nl__im__100);
#line 764
//clear ___nl__bool__101;
#line 764
c_rt_lib0clear(&___nl__im__102);
#line 764
c_rt_lib0clear(&___nl__im__103);
#line 764
c_rt_lib0clear(&___nl__im__105);
#line 764
//clear ___nl__bool__148;
#line 764
c_rt_lib0clear(&___nl__im__149);
#line 764
c_rt_lib0clear(&___nl__im__150);
#line 764
c_rt_lib0clear(&___nl__im__153);
#line 764
//clear ___nl__bool__154;
#line 764
c_rt_lib0clear(&___nl__im__155);
#line 764
c_rt_lib0clear(&___nl__im__159);
#line 764
//clear ___nl__bool__161;
#line 764
c_rt_lib0clear(&___nl__im__162);
#line 764
c_rt_lib0clear(&___nl__im__163);
#line 764
//clear ___nl__int__164;
#line 764
//clear ___nl__int__165;
#line 764
//clear ___nl__int__166;
#line 764
//clear ___nl__bool__167;
#line 764
//clear ___nl__int__168;
#line 764
c_rt_lib0clear(&___nl__im__169);
#line 764
c_rt_lib0clear(&___nl__im__179);
#line 764
//clear ___nl__bool__180;
#line 764
c_rt_lib0clear(&___nl__im__181);
#line 764
c_rt_lib0clear(&___nl__im__182);
#line 764
c_rt_lib0clear(&___nl__im__186);
#line 764
//clear ___nl__bool__188;
#line 764
c_rt_lib0clear(&___nl__im__190);
#line 764
//clear ___nl__bool__196;
#line 764
c_rt_lib0clear(&___nl__im__197);
#line 764
c_rt_lib0clear(&___nl__im__198);
#line 764
c_rt_lib0clear(&___nl__im__203);
#line 764
c_rt_lib0clear(&___nl__im__210);
#line 764
//clear ___nl__bool__211;
#line 764
c_rt_lib0clear(&___nl__im__212);
#line 764
c_rt_lib0clear(&___nl__im__219);
#line 764
//clear ___nl__bool__220;
#line 764
c_rt_lib0clear(&___nl__im__221);
#line 764
c_rt_lib0clear(&___nl__im__226);
#line 764
//clear ___nl__bool__227;
#line 764
return ___nl__im__228;
#line 764
label_68:
;
#line 764
c_rt_lib0move(&___nl__im__226, c_rt_lib0priv_as(___nl__im__228, ___get_global_const(80)));
#line 765
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(176), ___nl__im__226));
#line 766
goto label_1;
#line 766
label_67:
;
#line 767
c_rt_lib0move(&___nl__im__231, nparser_priv0parse_expr(___ref___rec__0));
#line 767
___nl__bool__230 = c_rt_lib0priv_is(___nl__im__231, ___get_global_const(80));
#line 767
if(___nl__bool__230){ goto label_69;}
#line 767
c_rt_lib0clear(&___nl__im__1);
#line 767
c_rt_lib0clear(&___nl__im__3);
#line 767
//clear ___nl__bool__4;
#line 767
c_rt_lib0clear(&___nl__im__6);
#line 767
//clear ___nl__bool__7;
#line 767
c_rt_lib0clear(&___nl__im__8);
#line 767
c_rt_lib0clear(&___nl__im__9);
#line 767
//clear ___nl__bool__10;
#line 767
c_rt_lib0clear(&___nl__im__11);
#line 767
c_rt_lib0clear(&___nl__im__12);
#line 767
c_rt_lib0clear(&___nl__im__13);
#line 767
//clear ___nl__bool__16;
#line 767
c_rt_lib0clear(&___nl__im__18);
#line 767
c_rt_lib0clear(&___nl__im__19);
#line 767
//clear ___nl__bool__21;
#line 767
c_rt_lib0clear(&___nl__im__22);
#line 767
c_rt_lib0clear(&___nl__im__23);
#line 767
c_rt_lib0clear(&___nl__im__24);
#line 767
//clear ___nl__bool__28;
#line 767
c_rt_lib0clear(&___nl__im__29);
#line 767
c_rt_lib0clear(&___nl__im__30);
#line 767
c_rt_lib0clear(&___nl__im__42);
#line 767
//clear ___nl__bool__47;
#line 767
c_rt_lib0clear(&___nl__im__48);
#line 767
c_rt_lib0clear(&___nl__im__49);
#line 767
//clear ___nl__bool__50;
#line 767
c_rt_lib0clear(&___nl__im__51);
#line 767
c_rt_lib0clear(&___nl__im__52);
#line 767
c_rt_lib0clear(&___nl__im__54);
#line 767
//clear ___nl__bool__59;
#line 767
c_rt_lib0clear(&___nl__im__60);
#line 767
c_rt_lib0clear(&___nl__im__61);
#line 767
//clear ___nl__bool__62;
#line 767
c_rt_lib0clear(&___nl__im__63);
#line 767
c_rt_lib0clear(&___nl__im__64);
#line 767
c_rt_lib0clear(&___nl__im__66);
#line 767
//clear ___nl__bool__67;
#line 767
c_rt_lib0clear(&___nl__im__68);
#line 767
c_rt_lib0clear(&___nl__im__70);
#line 767
//clear ___nl__bool__88;
#line 767
c_rt_lib0clear(&___nl__im__89);
#line 767
c_rt_lib0clear(&___nl__im__90);
#line 767
//clear ___nl__bool__91;
#line 767
c_rt_lib0clear(&___nl__im__92);
#line 767
c_rt_lib0clear(&___nl__im__93);
#line 767
c_rt_lib0clear(&___nl__im__95);
#line 767
//clear ___nl__bool__98;
#line 767
c_rt_lib0clear(&___nl__im__99);
#line 767
c_rt_lib0clear(&___nl__im__100);
#line 767
//clear ___nl__bool__101;
#line 767
c_rt_lib0clear(&___nl__im__102);
#line 767
c_rt_lib0clear(&___nl__im__103);
#line 767
c_rt_lib0clear(&___nl__im__105);
#line 767
//clear ___nl__bool__148;
#line 767
c_rt_lib0clear(&___nl__im__149);
#line 767
c_rt_lib0clear(&___nl__im__150);
#line 767
c_rt_lib0clear(&___nl__im__153);
#line 767
//clear ___nl__bool__154;
#line 767
c_rt_lib0clear(&___nl__im__155);
#line 767
c_rt_lib0clear(&___nl__im__159);
#line 767
//clear ___nl__bool__161;
#line 767
c_rt_lib0clear(&___nl__im__162);
#line 767
c_rt_lib0clear(&___nl__im__163);
#line 767
//clear ___nl__int__164;
#line 767
//clear ___nl__int__165;
#line 767
//clear ___nl__int__166;
#line 767
//clear ___nl__bool__167;
#line 767
//clear ___nl__int__168;
#line 767
c_rt_lib0clear(&___nl__im__169);
#line 767
c_rt_lib0clear(&___nl__im__179);
#line 767
//clear ___nl__bool__180;
#line 767
c_rt_lib0clear(&___nl__im__181);
#line 767
c_rt_lib0clear(&___nl__im__182);
#line 767
c_rt_lib0clear(&___nl__im__186);
#line 767
//clear ___nl__bool__188;
#line 767
c_rt_lib0clear(&___nl__im__190);
#line 767
//clear ___nl__bool__196;
#line 767
c_rt_lib0clear(&___nl__im__197);
#line 767
c_rt_lib0clear(&___nl__im__198);
#line 767
c_rt_lib0clear(&___nl__im__203);
#line 767
c_rt_lib0clear(&___nl__im__210);
#line 767
//clear ___nl__bool__211;
#line 767
c_rt_lib0clear(&___nl__im__212);
#line 767
c_rt_lib0clear(&___nl__im__219);
#line 767
//clear ___nl__bool__220;
#line 767
c_rt_lib0clear(&___nl__im__221);
#line 767
c_rt_lib0clear(&___nl__im__226);
#line 767
//clear ___nl__bool__227;
#line 767
c_rt_lib0clear(&___nl__im__228);
#line 767
c_rt_lib0clear(&___nl__im__229);
#line 767
//clear ___nl__bool__230;
#line 767
return ___nl__im__231;
#line 767
label_69:
;
#line 767
c_rt_lib0move(&___nl__im__229, c_rt_lib0priv_as(___nl__im__231, ___get_global_const(80)));
#line 768
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__im__229));
#line 769
goto label_1;
#line 769
label_1:
;
#line 769
//clear ___nl__bool__4;
#line 769
c_rt_lib0clear(&___nl__im__6);
#line 769
//clear ___nl__bool__7;
#line 769
c_rt_lib0clear(&___nl__im__8);
#line 769
c_rt_lib0clear(&___nl__im__9);
#line 769
//clear ___nl__bool__10;
#line 769
c_rt_lib0clear(&___nl__im__11);
#line 769
c_rt_lib0clear(&___nl__im__12);
#line 769
c_rt_lib0clear(&___nl__im__13);
#line 769
//clear ___nl__bool__16;
#line 769
c_rt_lib0clear(&___nl__im__18);
#line 769
c_rt_lib0clear(&___nl__im__19);
#line 769
//clear ___nl__bool__21;
#line 769
c_rt_lib0clear(&___nl__im__22);
#line 769
c_rt_lib0clear(&___nl__im__23);
#line 769
c_rt_lib0clear(&___nl__im__24);
#line 769
//clear ___nl__bool__28;
#line 769
c_rt_lib0clear(&___nl__im__29);
#line 769
c_rt_lib0clear(&___nl__im__30);
#line 769
c_rt_lib0clear(&___nl__im__42);
#line 769
//clear ___nl__bool__47;
#line 769
c_rt_lib0clear(&___nl__im__48);
#line 769
c_rt_lib0clear(&___nl__im__49);
#line 769
//clear ___nl__bool__50;
#line 769
c_rt_lib0clear(&___nl__im__51);
#line 769
c_rt_lib0clear(&___nl__im__52);
#line 769
c_rt_lib0clear(&___nl__im__54);
#line 769
//clear ___nl__bool__59;
#line 769
c_rt_lib0clear(&___nl__im__60);
#line 769
c_rt_lib0clear(&___nl__im__61);
#line 769
//clear ___nl__bool__62;
#line 769
c_rt_lib0clear(&___nl__im__63);
#line 769
c_rt_lib0clear(&___nl__im__64);
#line 769
c_rt_lib0clear(&___nl__im__66);
#line 769
//clear ___nl__bool__67;
#line 769
c_rt_lib0clear(&___nl__im__68);
#line 769
c_rt_lib0clear(&___nl__im__70);
#line 769
//clear ___nl__bool__88;
#line 769
c_rt_lib0clear(&___nl__im__89);
#line 769
c_rt_lib0clear(&___nl__im__90);
#line 769
//clear ___nl__bool__91;
#line 769
c_rt_lib0clear(&___nl__im__92);
#line 769
c_rt_lib0clear(&___nl__im__93);
#line 769
c_rt_lib0clear(&___nl__im__95);
#line 769
//clear ___nl__bool__98;
#line 769
c_rt_lib0clear(&___nl__im__99);
#line 769
c_rt_lib0clear(&___nl__im__100);
#line 769
//clear ___nl__bool__101;
#line 769
c_rt_lib0clear(&___nl__im__102);
#line 769
c_rt_lib0clear(&___nl__im__103);
#line 769
c_rt_lib0clear(&___nl__im__105);
#line 769
//clear ___nl__bool__148;
#line 769
c_rt_lib0clear(&___nl__im__149);
#line 769
c_rt_lib0clear(&___nl__im__150);
#line 769
c_rt_lib0clear(&___nl__im__153);
#line 769
//clear ___nl__bool__154;
#line 769
c_rt_lib0clear(&___nl__im__155);
#line 769
c_rt_lib0clear(&___nl__im__159);
#line 769
//clear ___nl__bool__161;
#line 769
c_rt_lib0clear(&___nl__im__162);
#line 769
c_rt_lib0clear(&___nl__im__163);
#line 769
//clear ___nl__int__164;
#line 769
//clear ___nl__int__165;
#line 769
//clear ___nl__int__166;
#line 769
//clear ___nl__bool__167;
#line 769
//clear ___nl__int__168;
#line 769
c_rt_lib0clear(&___nl__im__169);
#line 769
c_rt_lib0clear(&___nl__im__179);
#line 769
//clear ___nl__bool__180;
#line 769
c_rt_lib0clear(&___nl__im__181);
#line 769
c_rt_lib0clear(&___nl__im__182);
#line 769
c_rt_lib0clear(&___nl__im__186);
#line 769
//clear ___nl__bool__188;
#line 769
c_rt_lib0clear(&___nl__im__190);
#line 769
//clear ___nl__bool__196;
#line 769
c_rt_lib0clear(&___nl__im__197);
#line 769
c_rt_lib0clear(&___nl__im__198);
#line 769
c_rt_lib0clear(&___nl__im__203);
#line 769
c_rt_lib0clear(&___nl__im__210);
#line 769
//clear ___nl__bool__211;
#line 769
c_rt_lib0clear(&___nl__im__212);
#line 769
c_rt_lib0clear(&___nl__im__219);
#line 769
//clear ___nl__bool__220;
#line 769
c_rt_lib0clear(&___nl__im__221);
#line 769
c_rt_lib0clear(&___nl__im__226);
#line 769
//clear ___nl__bool__227;
#line 769
c_rt_lib0clear(&___nl__im__228);
#line 769
c_rt_lib0clear(&___nl__im__229);
#line 769
//clear ___nl__bool__230;
#line 769
c_rt_lib0clear(&___nl__im__231);
#line 770
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(876));
#line 770
if(___nl__bool__232){ goto label_77;}
#line 770
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(877));
#line 770
label_77:
;
#line 770
//clear ___nl__bool__238;
#line 770
if(___nl__bool__232){ goto label_76;}
#line 770
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(218));
#line 770
label_76:
;
#line 770
//clear ___nl__bool__237;
#line 770
if(___nl__bool__232){ goto label_75;}
#line 770
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(245));
#line 770
label_75:
;
#line 770
//clear ___nl__bool__236;
#line 770
if(___nl__bool__232){ goto label_74;}
#line 770
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(246));
#line 770
label_74:
;
#line 770
//clear ___nl__bool__235;
#line 770
if(___nl__bool__232){ goto label_73;}
#line 770
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(176));
#line 770
label_73:
;
#line 770
//clear ___nl__bool__234;
#line 770
if(___nl__bool__232){ goto label_72;}
#line 770
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(880));
#line 770
label_72:
;
#line 770
//clear ___nl__bool__233;
#line 770
___nl__bool__232 = !___nl__bool__232;
#line 770
if(___nl__bool__232){ goto label_71;}
#line 772
___nl__rec_ptr__241 = &((*___ref___rec__0).state0field);
#line 772
c_rt_lib0move(&___nl__im__240, ntokenizer0get_place_ws(___nl__rec_ptr__241));
#line 772
___nl__rec_ptr__241 = NULL;
#line 772
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__240));
#line 772
c_rt_lib0clear(&___nl__im__240);
#line 773
c_rt_lib0move(&___nl__im__243, c_rt_lib0hash_mk(2, ___get_global_const(220), ___nl__im__239, ___get_global_const(226), ___nl__im__3));
#line 773
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_mk(1, ___get_global_const(226), ___nl__im__243));
#line 773
c_rt_lib0clear(&___nl__im__243);
#line 774
c_rt_lib0move(&___nl__im__245,___get_global_const(870));
#line 774
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__245);
#line 774
c_rt_lib0clear(&___nl__im__245);
#line 774
___nl__bool__244 = !___nl__bool__244;
#line 774
if(___nl__bool__244){ goto label_79;}
#line 775
___nl__bool__247 = true;
#line 775
c_rt_lib0move(&___nl__im__246, c_rt_lib0bool_to_nl_native(___nl__bool__247));
#line 775
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(950), ___nl__im__246);
#line 775
c_rt_lib0clear(&___nl__im__246);
#line 775
//clear ___nl__bool__247;
#line 776
c_rt_lib0move(&___nl__im__249, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 776
c_rt_lib0copy(&___nl__im__248, ___nl__im__249);
#line 776
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(568), ___nl__im__248);
#line 776
c_rt_lib0clear(&___nl__im__248);
#line 776
c_rt_lib0clear(&___nl__im__249);
#line 777
c_rt_lib0move(&___nl__im__250,___get_global_const(419));
#line 777
___nl__bool__251 = nparser_priv0eat(___ref___rec__0, ___nl__im__250);
#line 777
c_rt_lib0clear(&___nl__im__250);
#line 777
//clear ___nl__bool__251;
#line 778
c_rt_lib0move(&___nl__im__253, nparser_priv0parse_expr(___ref___rec__0));
#line 778
___nl__bool__252 = c_rt_lib0priv_is(___nl__im__253, ___get_global_const(80));
#line 778
if(___nl__bool__252){ goto label_80;}
#line 778
c_rt_lib0clear(&___nl__im__1);
#line 778
c_rt_lib0clear(&___nl__im__3);
#line 778
//clear ___nl__bool__232;
#line 778
c_rt_lib0clear(&___nl__im__239);
#line 778
c_rt_lib0clear(&___nl__im__242);
#line 778
//clear ___nl__bool__244;
#line 778
//clear ___nl__bool__252;
#line 778
return ___nl__im__253;
#line 778
label_80:
;
#line 778
c_rt_lib0move(&___nl__im__254, c_rt_lib0priv_as(___nl__im__253, ___get_global_const(80)));
#line 778
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(38), ___nl__im__254);
#line 779
c_rt_lib0move(&___nl__im__255,___get_global_const(298));
#line 779
___nl__bool__256 = nparser_priv0eat(___ref___rec__0, ___nl__im__255);
#line 779
c_rt_lib0clear(&___nl__im__255);
#line 779
//clear ___nl__bool__256;
#line 780
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(870), ___nl__im__242));
#line 781
goto label_78;
#line 781
label_79:
;
#line 781
c_rt_lib0move(&___nl__im__257,___get_global_const(872));
#line 781
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__257);
#line 781
c_rt_lib0clear(&___nl__im__257);
#line 781
___nl__bool__244 = !___nl__bool__244;
#line 781
if(___nl__bool__244){ goto label_81;}
#line 782
___nl__bool__259 = true;
#line 782
c_rt_lib0move(&___nl__im__258, c_rt_lib0bool_to_nl_native(___nl__bool__259));
#line 782
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(950), ___nl__im__258);
#line 782
c_rt_lib0clear(&___nl__im__258);
#line 782
//clear ___nl__bool__259;
#line 783
c_rt_lib0move(&___nl__im__261, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 783
c_rt_lib0copy(&___nl__im__260, ___nl__im__261);
#line 783
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(568), ___nl__im__260);
#line 783
c_rt_lib0clear(&___nl__im__260);
#line 783
c_rt_lib0clear(&___nl__im__261);
#line 784
c_rt_lib0move(&___nl__im__262,___get_global_const(419));
#line 784
___nl__bool__263 = nparser_priv0eat(___ref___rec__0, ___nl__im__262);
#line 784
c_rt_lib0clear(&___nl__im__262);
#line 784
//clear ___nl__bool__263;
#line 785
c_rt_lib0move(&___nl__im__265, nparser_priv0parse_expr(___ref___rec__0));
#line 785
___nl__bool__264 = c_rt_lib0priv_is(___nl__im__265, ___get_global_const(80));
#line 785
if(___nl__bool__264){ goto label_82;}
#line 785
c_rt_lib0clear(&___nl__im__1);
#line 785
c_rt_lib0clear(&___nl__im__3);
#line 785
//clear ___nl__bool__232;
#line 785
c_rt_lib0clear(&___nl__im__239);
#line 785
c_rt_lib0clear(&___nl__im__242);
#line 785
//clear ___nl__bool__244;
#line 785
//clear ___nl__bool__252;
#line 785
c_rt_lib0clear(&___nl__im__253);
#line 785
c_rt_lib0clear(&___nl__im__254);
#line 785
//clear ___nl__bool__264;
#line 785
return ___nl__im__265;
#line 785
label_82:
;
#line 785
c_rt_lib0move(&___nl__im__266, c_rt_lib0priv_as(___nl__im__265, ___get_global_const(80)));
#line 785
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(887), ___nl__im__266);
#line 786
c_rt_lib0move(&___nl__im__267,___get_global_const(298));
#line 786
___nl__bool__268 = nparser_priv0eat(___ref___rec__0, ___nl__im__267);
#line 786
c_rt_lib0clear(&___nl__im__267);
#line 786
//clear ___nl__bool__268;
#line 787
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(872), ___nl__im__242));
#line 788
goto label_78;
#line 788
label_81:
;
#line 788
c_rt_lib0move(&___nl__im__269,___get_global_const(871));
#line 788
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__269);
#line 788
c_rt_lib0clear(&___nl__im__269);
#line 788
___nl__bool__244 = !___nl__bool__244;
#line 788
if(___nl__bool__244){ goto label_83;}
#line 789
___nl__bool__271 = true;
#line 789
c_rt_lib0move(&___nl__im__270, c_rt_lib0bool_to_nl_native(___nl__bool__271));
#line 789
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(950), ___nl__im__270);
#line 789
c_rt_lib0clear(&___nl__im__270);
#line 789
//clear ___nl__bool__271;
#line 790
c_rt_lib0move(&___nl__im__273, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 790
c_rt_lib0copy(&___nl__im__272, ___nl__im__273);
#line 790
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(370), ___nl__im__272);
#line 790
c_rt_lib0clear(&___nl__im__272);
#line 790
c_rt_lib0clear(&___nl__im__273);
#line 791
c_rt_lib0move(&___nl__im__274,___get_global_const(294));
#line 791
___nl__bool__275 = nparser_priv0eat(___ref___rec__0, ___nl__im__274);
#line 791
c_rt_lib0clear(&___nl__im__274);
#line 791
//clear ___nl__bool__275;
#line 792
___nl__rec_ptr__277 = &((*___ref___rec__0).state0field);
#line 792
c_rt_lib0move(&___nl__im__278,___get_global_const(462));
#line 792
___nl__bool__276 = ntokenizer0next_is(___nl__rec_ptr__277, ___nl__im__278);
#line 792
___nl__rec_ptr__277 = NULL;
#line 792
c_rt_lib0clear(&___nl__im__278);
#line 792
___nl__bool__276 = !___nl__bool__276;
#line 792
if(___nl__bool__276){ goto label_85;}
#line 793
c_rt_lib0move(&___nl__im__280, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 793
c_rt_lib0copy(&___nl__im__279, ___nl__im__280);
#line 793
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(223), ___nl__im__279);
#line 793
c_rt_lib0clear(&___nl__im__279);
#line 793
c_rt_lib0clear(&___nl__im__280);
#line 794
c_rt_lib0move(&___nl__im__282, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 794
c_rt_lib0copy(&___nl__im__281, ___nl__im__282);
#line 794
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(886), ___nl__im__281);
#line 794
c_rt_lib0clear(&___nl__im__281);
#line 794
c_rt_lib0clear(&___nl__im__282);
#line 795
goto label_84;
#line 795
label_85:
;
#line 796
c_rt_lib0move(&___nl__im__284, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 796
c_rt_lib0copy(&___nl__im__283, ___nl__im__284);
#line 796
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(223), ___nl__im__283);
#line 796
c_rt_lib0clear(&___nl__im__283);
#line 796
c_rt_lib0clear(&___nl__im__284);
#line 797
c_rt_lib0move(&___nl__im__286, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 797
c_rt_lib0copy(&___nl__im__285, ___nl__im__286);
#line 797
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(886), ___nl__im__285);
#line 797
c_rt_lib0clear(&___nl__im__285);
#line 797
c_rt_lib0clear(&___nl__im__286);
#line 798
goto label_84;
#line 798
label_84:
;
#line 798
//clear ___nl__bool__276;
#line 799
c_rt_lib0move(&___nl__im__287,___get_global_const(419));
#line 799
___nl__bool__288 = nparser_priv0eat(___ref___rec__0, ___nl__im__287);
#line 799
c_rt_lib0clear(&___nl__im__287);
#line 799
//clear ___nl__bool__288;
#line 800
c_rt_lib0move(&___nl__im__290, nparser_priv0parse_expr(___ref___rec__0));
#line 800
___nl__bool__289 = c_rt_lib0priv_is(___nl__im__290, ___get_global_const(80));
#line 800
if(___nl__bool__289){ goto label_86;}
#line 800
c_rt_lib0clear(&___nl__im__1);
#line 800
c_rt_lib0clear(&___nl__im__3);
#line 800
//clear ___nl__bool__232;
#line 800
c_rt_lib0clear(&___nl__im__239);
#line 800
c_rt_lib0clear(&___nl__im__242);
#line 800
//clear ___nl__bool__244;
#line 800
//clear ___nl__bool__252;
#line 800
c_rt_lib0clear(&___nl__im__253);
#line 800
c_rt_lib0clear(&___nl__im__254);
#line 800
//clear ___nl__bool__264;
#line 800
c_rt_lib0clear(&___nl__im__265);
#line 800
c_rt_lib0clear(&___nl__im__266);
#line 800
//clear ___nl__bool__289;
#line 800
return ___nl__im__290;
#line 800
label_86:
;
#line 800
c_rt_lib0move(&___nl__im__291, c_rt_lib0priv_as(___nl__im__290, ___get_global_const(80)));
#line 800
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(129), ___nl__im__291);
#line 801
c_rt_lib0move(&___nl__im__292,___get_global_const(298));
#line 801
___nl__bool__293 = nparser_priv0eat(___ref___rec__0, ___nl__im__292);
#line 801
c_rt_lib0clear(&___nl__im__292);
#line 801
//clear ___nl__bool__293;
#line 802
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(871), ___nl__im__242));
#line 803
goto label_78;
#line 803
label_83:
;
#line 803
c_rt_lib0move(&___nl__im__294,___get_global_const(868));
#line 803
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__294);
#line 803
c_rt_lib0clear(&___nl__im__294);
#line 803
___nl__bool__244 = !___nl__bool__244;
#line 803
if(___nl__bool__244){ goto label_87;}
#line 804
c_rt_lib0move(&___nl__im__296, nparser_priv0parse_expr(___ref___rec__0));
#line 804
___nl__bool__295 = c_rt_lib0priv_is(___nl__im__296, ___get_global_const(80));
#line 804
if(___nl__bool__295){ goto label_88;}
#line 804
c_rt_lib0clear(&___nl__im__1);
#line 804
c_rt_lib0clear(&___nl__im__3);
#line 804
//clear ___nl__bool__232;
#line 804
c_rt_lib0clear(&___nl__im__239);
#line 804
c_rt_lib0clear(&___nl__im__242);
#line 804
//clear ___nl__bool__244;
#line 804
//clear ___nl__bool__252;
#line 804
c_rt_lib0clear(&___nl__im__253);
#line 804
c_rt_lib0clear(&___nl__im__254);
#line 804
//clear ___nl__bool__264;
#line 804
c_rt_lib0clear(&___nl__im__265);
#line 804
c_rt_lib0clear(&___nl__im__266);
#line 804
//clear ___nl__bool__289;
#line 804
c_rt_lib0clear(&___nl__im__290);
#line 804
c_rt_lib0clear(&___nl__im__291);
#line 804
//clear ___nl__bool__295;
#line 804
return ___nl__im__296;
#line 804
label_88:
;
#line 804
c_rt_lib0move(&___nl__im__297, c_rt_lib0priv_as(___nl__im__296, ___get_global_const(80)));
#line 804
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(882), ___nl__im__297);
#line 805
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(874), ___nl__im__242));
#line 806
goto label_78;
#line 806
label_87:
;
#line 806
c_rt_lib0move(&___nl__im__298,___get_global_const(985));
#line 806
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__298);
#line 806
c_rt_lib0clear(&___nl__im__298);
#line 806
___nl__bool__244 = !___nl__bool__244;
#line 806
if(___nl__bool__244){ goto label_89;}
#line 807
c_rt_lib0move(&___nl__im__300, nparser_priv0parse_expr(___ref___rec__0));
#line 807
___nl__bool__299 = c_rt_lib0priv_is(___nl__im__300, ___get_global_const(80));
#line 807
if(___nl__bool__299){ goto label_90;}
#line 807
c_rt_lib0clear(&___nl__im__1);
#line 807
c_rt_lib0clear(&___nl__im__3);
#line 807
//clear ___nl__bool__232;
#line 807
c_rt_lib0clear(&___nl__im__239);
#line 807
c_rt_lib0clear(&___nl__im__242);
#line 807
//clear ___nl__bool__244;
#line 807
//clear ___nl__bool__252;
#line 807
c_rt_lib0clear(&___nl__im__253);
#line 807
c_rt_lib0clear(&___nl__im__254);
#line 807
//clear ___nl__bool__264;
#line 807
c_rt_lib0clear(&___nl__im__265);
#line 807
c_rt_lib0clear(&___nl__im__266);
#line 807
//clear ___nl__bool__289;
#line 807
c_rt_lib0clear(&___nl__im__290);
#line 807
c_rt_lib0clear(&___nl__im__291);
#line 807
//clear ___nl__bool__295;
#line 807
c_rt_lib0clear(&___nl__im__296);
#line 807
c_rt_lib0clear(&___nl__im__297);
#line 807
//clear ___nl__bool__299;
#line 807
return ___nl__im__300;
#line 807
label_90:
;
#line 807
c_rt_lib0move(&___nl__im__301, c_rt_lib0priv_as(___nl__im__300, ___get_global_const(80)));
#line 807
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(882), ___nl__im__301);
#line 808
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(875), ___nl__im__242));
#line 809
goto label_78;
#line 809
label_89:
;
#line 809
c_rt_lib0move(&___nl__im__302,___get_global_const(873));
#line 809
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__302);
#line 809
c_rt_lib0clear(&___nl__im__302);
#line 809
___nl__bool__244 = !___nl__bool__244;
#line 809
if(___nl__bool__244){ goto label_91;}
#line 810
___nl__bool__304 = true;
#line 810
c_rt_lib0move(&___nl__im__303, c_rt_lib0bool_to_nl_native(___nl__bool__304));
#line 810
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(950), ___nl__im__303);
#line 810
c_rt_lib0clear(&___nl__im__303);
#line 810
//clear ___nl__bool__304;
#line 811
c_rt_lib0move(&___nl__im__306, nparser_priv0parse_expr(___ref___rec__0));
#line 811
___nl__bool__305 = c_rt_lib0priv_is(___nl__im__306, ___get_global_const(80));
#line 811
if(___nl__bool__305){ goto label_92;}
#line 811
c_rt_lib0clear(&___nl__im__1);
#line 811
c_rt_lib0clear(&___nl__im__3);
#line 811
//clear ___nl__bool__232;
#line 811
c_rt_lib0clear(&___nl__im__239);
#line 811
c_rt_lib0clear(&___nl__im__242);
#line 811
//clear ___nl__bool__244;
#line 811
//clear ___nl__bool__252;
#line 811
c_rt_lib0clear(&___nl__im__253);
#line 811
c_rt_lib0clear(&___nl__im__254);
#line 811
//clear ___nl__bool__264;
#line 811
c_rt_lib0clear(&___nl__im__265);
#line 811
c_rt_lib0clear(&___nl__im__266);
#line 811
//clear ___nl__bool__289;
#line 811
c_rt_lib0clear(&___nl__im__290);
#line 811
c_rt_lib0clear(&___nl__im__291);
#line 811
//clear ___nl__bool__295;
#line 811
c_rt_lib0clear(&___nl__im__296);
#line 811
c_rt_lib0clear(&___nl__im__297);
#line 811
//clear ___nl__bool__299;
#line 811
c_rt_lib0clear(&___nl__im__300);
#line 811
c_rt_lib0clear(&___nl__im__301);
#line 811
//clear ___nl__bool__305;
#line 811
return ___nl__im__306;
#line 811
label_92:
;
#line 811
c_rt_lib0move(&___nl__im__307, c_rt_lib0priv_as(___nl__im__306, ___get_global_const(80)));
#line 811
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(882), ___nl__im__307);
#line 812
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(873), ___nl__im__242));
#line 813
goto label_78;
#line 813
label_91:
;
#line 813
label_78:
;
#line 813
//clear ___nl__bool__244;
#line 813
//clear ___nl__bool__252;
#line 813
c_rt_lib0clear(&___nl__im__253);
#line 813
c_rt_lib0clear(&___nl__im__254);
#line 813
//clear ___nl__bool__264;
#line 813
c_rt_lib0clear(&___nl__im__265);
#line 813
c_rt_lib0clear(&___nl__im__266);
#line 813
//clear ___nl__bool__289;
#line 813
c_rt_lib0clear(&___nl__im__290);
#line 813
c_rt_lib0clear(&___nl__im__291);
#line 813
//clear ___nl__bool__295;
#line 813
c_rt_lib0clear(&___nl__im__296);
#line 813
c_rt_lib0clear(&___nl__im__297);
#line 813
//clear ___nl__bool__299;
#line 813
c_rt_lib0clear(&___nl__im__300);
#line 813
c_rt_lib0clear(&___nl__im__301);
#line 813
//clear ___nl__bool__305;
#line 813
c_rt_lib0clear(&___nl__im__306);
#line 813
c_rt_lib0clear(&___nl__im__307);
#line 814
c_rt_lib0move(&___nl__im__308,___get_global_const(408));
#line 814
___nl__bool__309 = nparser_priv0eat(___ref___rec__0, ___nl__im__308);
#line 814
c_rt_lib0clear(&___nl__im__308);
#line 814
//clear ___nl__bool__309;
#line 815
goto label_70;
#line 815
label_71:
;
#line 815
label_70:
;
#line 815
//clear ___nl__bool__232;
#line 815
c_rt_lib0clear(&___nl__im__239);
#line 815
c_rt_lib0clear(&___nl__im__242);
#line 816
___nl__rec_ptr__311 = &((*___ref___rec__0).state0field);
#line 816
c_rt_lib0move(&___nl__im__310, ntokenizer0get_place_ws(___nl__rec_ptr__311));
#line 816
___nl__rec_ptr__311 = NULL;
#line 817
c_rt_lib0move(&___nl__im__312, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__310));
#line 818
c_rt_lib0move(&___nl__im__314, c_rt_lib0hash_mk(2, ___get_global_const(226), ___nl__im__3, ___get_global_const(220), ___nl__im__312));
#line 818
c_rt_lib0move(&___nl__im__313, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__314));
#line 818
c_rt_lib0clear(&___nl__im__314);
#line 818
c_rt_lib0clear(&___nl__im__1);
#line 818
c_rt_lib0clear(&___nl__im__3);
#line 818
c_rt_lib0clear(&___nl__im__310);
#line 818
c_rt_lib0clear(&___nl__im__312);
#line 818
return ___nl__im__313;
}

ImmT  nparser0conv_to_im00state_t(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
bool  ___nl__bool__8 = false;
bool * ___nl__bool_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 1
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 1
c_rt_lib0move(&___nl__im__2, ntokenizer0conv_to_im00state_t(___nl__rec_ptr__3));
#line 1
___nl__rec_ptr__3 = NULL;
#line 1
___nl__im_ptr__5 = &((*___ref___rec__0).errors0field);
#line 1
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1
___nl__im_ptr__5 = NULL;
#line 1
___nl__im_ptr__7 = &((*___ref___rec__0).module_name0field);
#line 1
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1
___nl__im_ptr__7 = NULL;
#line 1
___nl__bool_ptr__9 = &((*___ref___rec__0).parse_types0field);
#line 1
___nl__bool__8 = (*___nl__bool_ptr__9);
#line 1
___nl__bool_ptr__9 = NULL;
#line 1
c_rt_lib0move(&___nl__im__10, c_rt_lib0bool_to_nl_native(___nl__bool__8));
#line 1
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(964), ___nl__im__2, ___get_global_const(51), ___nl__im__4, ___get_global_const(211), ___nl__im__6, ___get_global_const(988), ___nl__im__10));
#line 1
c_rt_lib0clear(&___nl__im__2);
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__6);
#line 1
//clear ___nl__bool__8;
#line 1
c_rt_lib0clear(&___nl__im__10);
#line 1
return ___nl__im__1;
#line 1
c_rt_lib0clear(&___nl__im__1);
#line 1
return NULL;
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
