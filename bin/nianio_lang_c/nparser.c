
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
bool nparser_priv0eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
bool nparser_priv0try_eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1);
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
#line 20
c_rt_lib0move(&___nl__im__2,___get_global_const(409));
#line 20
c_rt_lib0move(&___nl__im__3,___get_global_const(862));
#line 20
c_rt_lib0move(&___nl__im__4,___get_global_const(979));
#line 20
c_rt_lib0move(&___nl__im__5,___get_global_const(864));
#line 20
c_rt_lib0move(&___nl__im__6,___get_global_const(865));
#line 20
c_rt_lib0move(&___nl__im__7,___get_global_const(866));
#line 20
c_rt_lib0move(&___nl__im__8,___get_global_const(867));
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(7, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__3);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0clear(&___nl__im__6);
#line 20
c_rt_lib0clear(&___nl__im__7);
#line 20
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0move(&___nl__im__0, singleton0sigleton_do_not_use_without_approval(___nl__im__1));
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
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
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_const(980), ___get_global_const(981)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(836)));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 27
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 28
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 28
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(958), ___nl__im__2, ___get_global_const(51), ___nl__im__3, ___get_global_const(212), ___nl__im__4, ___get_global_const(982), ___nl__im__5));
#line 28
c_rt_lib0clear(&___nl__im__2);
#line 28
c_rt_lib0clear(&___nl__im__3);
#line 28
c_rt_lib0clear(&___nl__im__4);
#line 28
c_rt_lib0clear(&___nl__im__5);
#line 28
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
#line 28
c_rt_lib0clear(&___nl__im__1);
#line 28
return ___nl__im__0;
#line 28
c_rt_lib0clear(&___nl__im__0);
#line 28
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
#line 33
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(921)));
#line 33
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 33
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 33
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__2, ___get_global_const(79), ___nl__im__3));
#line 33
c_rt_lib0clear(&___nl__im__2);
#line 33
c_rt_lib0clear(&___nl__im__3);
#line 33
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
return ___nl__im__0;
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
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
#line 37
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(313)));
#line 37
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 37
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 37
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(80), ___nl__im__2, ___get_global_const(79), ___nl__im__3));
#line 37
c_rt_lib0clear(&___nl__im__2);
#line 37
c_rt_lib0clear(&___nl__im__3);
#line 37
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 37
c_rt_lib0clear(&___nl__im__1);
#line 37
return ___nl__im__0;
#line 37
c_rt_lib0clear(&___nl__im__0);
#line 37
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
#line 44
;
#line 44
___nl__im_ptr__4 = &(___nl__rec__3.errors0field);
#line 45
c_rt_lib0move(___nl__im_ptr__4, c_rt_lib0array_mk(0));
#line 45
___nl__im_ptr__4 = NULL;
#line 45
___nl__rec_ptr__5 = &(___nl__rec__3.state0field);
#line 46
;
#line 46
___nl__im_ptr__6 = &(___nl__rec_ptr__5->text0field);
#line 47
c_rt_lib0move(___nl__im_ptr__6, c_rt_lib0array_mk(1, ___nl__im__0));
#line 47
___nl__im_ptr__6 = NULL;
#line 47
___nl__int_ptr__7 = &(___nl__rec_ptr__5->len0field);
#line 48
(*___nl__int_ptr__7) = string0length(___nl__im__0);
#line 48
___nl__int_ptr__7 = NULL;
#line 48
___nl__int_ptr__8 = &(___nl__rec_ptr__5->pos0field);
#line 49
(*___nl__int_ptr__8) = 0;
#line 49
___nl__int_ptr__8 = NULL;
#line 49
___nl__im_ptr__9 = &(___nl__rec_ptr__5->type0field);
#line 50
c_rt_lib0move(___nl__im_ptr__9, c_rt_lib0ov_mk_none(___get_global_const(932)));
#line 50
___nl__im_ptr__9 = NULL;
#line 50
___nl__im_ptr__10 = &(___nl__rec_ptr__5->next_token0field);
#line 51
c_rt_lib0move(___nl__im_ptr__10,___get_global_const(37));
#line 51
___nl__im_ptr__10 = NULL;
#line 51
___nl__int_ptr__11 = &(___nl__rec_ptr__5->ln_nr0field);
#line 52
(*___nl__int_ptr__11) = 1;
#line 52
___nl__int_ptr__11 = NULL;
#line 52
___nl__int_ptr__12 = &(___nl__rec_ptr__5->ln_pos0field);
#line 53
(*___nl__int_ptr__12) = 1;
#line 53
___nl__int_ptr__12 = NULL;
#line 53
___nl__im_ptr__13 = &(___nl__rec_ptr__5->place0field);
#line 54
___nl__int__14 = 1;
#line 54
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 54
___nl__int__16 = 0;
#line 54
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__16));
#line 54
c_rt_lib0move(___nl__im_ptr__13, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__15, ___get_global_const(945), ___nl__im__17));
#line 54
//clear ___nl__int__14;
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
//clear ___nl__int__16;
#line 54
c_rt_lib0clear(&___nl__im__17);
#line 54
___nl__im_ptr__13 = NULL;
#line 54
___nl__im_ptr__18 = &(___nl__rec_ptr__5->place_ws0field);
#line 55
___nl__int__19 = 1;
#line 55
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 55
___nl__int__21 = 0;
#line 55
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 55
c_rt_lib0move(___nl__im_ptr__18, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__20, ___get_global_const(945), ___nl__im__22));
#line 55
//clear ___nl__int__19;
#line 55
c_rt_lib0clear(&___nl__im__20);
#line 55
//clear ___nl__int__21;
#line 55
c_rt_lib0clear(&___nl__im__22);
#line 55
___nl__im_ptr__18 = NULL;
#line 55
___nl__im_ptr__23 = &(___nl__rec_ptr__5->last_comment0field);
#line 56
c_rt_lib0move(___nl__im_ptr__23,___get_global_const(37));
#line 56
___nl__im_ptr__23 = NULL;
#line 56
___nl__rec_ptr__5 = NULL;
#line 56
___nl__im_ptr__24 = &(___nl__rec__3.module_name0field);
#line 58
c_rt_lib0copy(___nl__im_ptr__24, ___nl__im__1);
#line 58
___nl__im_ptr__24 = NULL;
#line 58
___nl__bool_ptr__25 = &(___nl__rec__3.parse_types0field);
#line 59
(*___nl__bool_ptr__25) = ___nl__bool__2;
#line 59
___nl__bool_ptr__25 = NULL;
#line 61
___nl__rec_ptr__26 = &(___nl__rec__3.state0field);
#line 61
c_rt_lib0delete(ntokenizer0init(___nl__rec_ptr__26));
#line 61
___nl__rec_ptr__26 = NULL;
#line 62
c_rt_lib0move(&___nl__im__27, nparser_priv0parse_module(&___nl__rec__3, ___nl__im__1));
#line 63
___nl__im_ptr__31 = &(___nl__rec__3.errors0field);
#line 63
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 63
___nl__im_ptr__31 = NULL;
#line 63
___nl__int__29 = c_rt_lib0array_len(___nl__im__30);
#line 63
c_rt_lib0clear(&___nl__im__30);
#line 63
___nl__int__32 = 0;
#line 63
___nl__int__33 = ___nl__int__29 > ___nl__int__32;
#line 63
___nl__bool__28 = ___nl__int__33;
#line 63
//clear ___nl__int__29;
#line 63
//clear ___nl__int__32;
#line 63
//clear ___nl__int__33;
#line 63
___nl__bool__28 = !___nl__bool__28;
#line 63
if(___nl__bool__28){ goto label_2;}
#line 63
___nl__im_ptr__36 = &(___nl__rec__3.errors0field);
#line 63
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 63
___nl__im_ptr__36 = NULL;
#line 63
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(125), ___nl__im__35));
#line 63
c_rt_lib0clear(&___nl__im__35);
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
//clear ___nl__bool__28;
#line 63
return ___nl__im__34;
#line 63
goto label_1;
#line 63
label_2:
;
#line 63
label_1:
;
#line 63
//clear ___nl__bool__28;
#line 63
c_rt_lib0clear(&___nl__im__34);
#line 64
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__27));
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
//clear ___nl__bool__2;
#line 64
nparser0state_t0type0clean(___nl__rec__3);;
#line 64
c_rt_lib0clear(&___nl__im__27);
#line 64
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
#line 68
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 68
___nl__int__2 = ntokenizer0get_line(___nl__rec_ptr__3);
#line 68
___nl__rec_ptr__3 = NULL;
#line 69
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 69
___nl__int__4 = ntokenizer0get_column(___nl__rec_ptr__5);
#line 69
___nl__rec_ptr__5 = NULL;
#line 70
___nl__im_ptr__6 = &((*___ref___rec__0).errors0field);
#line 70
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__2));
#line 70
___nl__im_ptr__10 = &((*___ref___rec__0).module_name0field);
#line 70
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 70
___nl__im_ptr__10 = NULL;
#line 70
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__4));
#line 70
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(125)));
#line 70
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_const(154), ___nl__im__8, ___get_global_const(152), ___nl__im__9, ___get_global_const(205), ___nl__im__11, ___get_global_const(157), ___nl__im__1, ___get_global_const(95), ___nl__im__12));
#line 70
c_rt_lib0clear(&___nl__im__8);
#line 70
c_rt_lib0clear(&___nl__im__9);
#line 70
c_rt_lib0clear(&___nl__im__11);
#line 70
c_rt_lib0clear(&___nl__im__12);
#line 70
c_rt_lib0delete(array0push(___nl__im_ptr__6, ___nl__im__7));
#line 70
___nl__im_ptr__6 = NULL;
#line 70
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0clear(&___nl__im__1);
#line 70
//clear ___nl__int__2;
#line 70
//clear ___nl__int__4;
#line 70
return NULL;
}

bool nparser_priv0eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
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
#line 74
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 74
___nl__bool__2 = ntokenizer0eat_token(___nl__rec_ptr__3, ___nl__im__1);
#line 74
___nl__rec_ptr__3 = NULL;
#line 74
___nl__bool__2 = !___nl__bool__2;
#line 74
if(___nl__bool__2){ goto label_2;}
#line 74
___nl__bool__4 = true;
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
//clear ___nl__bool__2;
#line 74
return ___nl__bool__4;
#line 74
goto label_1;
#line 74
label_2:
;
#line 74
label_1:
;
#line 74
//clear ___nl__bool__2;
#line 74
//clear ___nl__bool__4;
#line 75
c_rt_lib0move(&___nl__im__8,___get_global_const(983));
#line 75
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 75
c_rt_lib0clear(&___nl__im__8);
#line 75
c_rt_lib0move(&___nl__im__9, string0lf());
#line 75
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 75
c_rt_lib0clear(&___nl__im__7);
#line 75
c_rt_lib0clear(&___nl__im__9);
#line 75
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 75
c_rt_lib0move(&___nl__im__10, ntokenizer0info(___nl__rec_ptr__11));
#line 75
___nl__rec_ptr__11 = NULL;
#line 75
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 75
c_rt_lib0clear(&___nl__im__6);
#line 75
c_rt_lib0clear(&___nl__im__10);
#line 75
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__5));
#line 75
c_rt_lib0clear(&___nl__im__5);
#line 76
___nl__bool__12 = false;
#line 76
c_rt_lib0clear(&___nl__im__1);
#line 76
return ___nl__bool__12;
}

bool nparser_priv0try_eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
bool  ___nl__bool__2 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
#line 80
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 80
___nl__bool__2 = ntokenizer0eat_token(___nl__rec_ptr__3, ___nl__im__1);
#line 80
___nl__rec_ptr__3 = NULL;
#line 80
c_rt_lib0clear(&___nl__im__1);
#line 80
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
#line 84
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 84
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__1, ___get_global_const(173), ___nl__im__3, ___get_global_const(166), ___nl__im__4, ___get_global_const(925), ___nl__im__5));
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 85
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 85
c_rt_lib0move(&___nl__im__7, ntokenizer0get_last_comment(___nl__rec_ptr__8));
#line 85
___nl__rec_ptr__8 = NULL;
#line 85
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 85
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(925), ___nl__im__6);
#line 85
c_rt_lib0clear(&___nl__im__6);
#line 85
c_rt_lib0clear(&___nl__im__7);
#line 86
label_2:
;
#line 86
c_rt_lib0move(&___nl__im__10,___get_global_const(984));
#line 86
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__10);
#line 86
c_rt_lib0clear(&___nl__im__10);
#line 86
___nl__bool__9 = !___nl__bool__9;
#line 86
if(___nl__bool__9){ goto label_1;}
#line 87
___nl__rec_ptr__12 = &((*___ref___rec__0).state0field);
#line 87
___nl__int__11 = ntokenizer0get_line(___nl__rec_ptr__12);
#line 87
___nl__rec_ptr__12 = NULL;
#line 88
___nl__rec_ptr__14 = &((*___ref___rec__0).state0field);
#line 88
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 88
___nl__bool__13 = ntokenizer0is_type(___nl__rec_ptr__14, ___nl__im__15);
#line 88
___nl__rec_ptr__14 = NULL;
#line 88
c_rt_lib0clear(&___nl__im__15);
#line 88
___nl__bool__13 = !___nl__bool__13;
#line 88
if(___nl__bool__13){ goto label_4;}
#line 89
c_rt_lib0move(&___nl__im__16,___get_global_const(173));
#line 89
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 90
___nl__rec_ptr__19 = &((*___ref___rec__0).state0field);
#line 90
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 90
c_rt_lib0move(&___nl__im__18, ntokenizer0eat_type(___nl__rec_ptr__19, ___nl__im__20));
#line 90
___nl__rec_ptr__19 = NULL;
#line 90
c_rt_lib0clear(&___nl__im__20);
#line 90
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__11));
#line 90
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__18, ___get_global_const(154), ___nl__im__21));
#line 90
c_rt_lib0clear(&___nl__im__18);
#line 90
c_rt_lib0clear(&___nl__im__21);
#line 90
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 90
c_rt_lib0move(&___nl__string__22,___get_global_const(173));
#line 90
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__22, ___nl__im__16));
#line 90
c_rt_lib0clear(&___nl__im__16);
#line 90
c_rt_lib0clear(&___nl__im__17);
#line 90
c_rt_lib0clear(&___nl__string__22);
#line 93
goto label_3;
#line 93
label_4:
;
#line 94
c_rt_lib0move(&___nl__im__23,___get_global_const(986));
#line 94
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__23));
#line 94
c_rt_lib0clear(&___nl__im__23);
#line 95
goto label_3;
#line 95
label_3:
;
#line 95
//clear ___nl__bool__13;
#line 96
c_rt_lib0move(&___nl__im__24,___get_global_const(409));
#line 96
___nl__bool__25 = nparser_priv0eat(___ref___rec__0, ___nl__im__24);
#line 96
c_rt_lib0clear(&___nl__im__24);
#line 96
//clear ___nl__bool__25;
#line 96
//clear ___nl__int__11;
#line 97
goto label_2;
#line 97
label_1:
;
#line 98
label_6:
;
#line 98
___nl__rec_ptr__27 = &((*___ref___rec__0).state0field);
#line 98
c_rt_lib0move(&___nl__im__28,___get_global_const(689));
#line 98
___nl__bool__26 = ntokenizer0next_is(___nl__rec_ptr__27, ___nl__im__28);
#line 98
___nl__rec_ptr__27 = NULL;
#line 98
c_rt_lib0clear(&___nl__im__28);
#line 98
___nl__bool__26 = !___nl__bool__26;
#line 98
if(___nl__bool__26){ goto label_5;}
#line 99
c_rt_lib0move(&___nl__im__29, nparser_priv0parse_fun_def(___ref___rec__0, ___nl__im__1));
#line 99
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(80));
#line 99
if(___nl__bool__30){ goto label_8;}
#line 101
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(79));
#line 101
if(___nl__bool__30){ goto label_9;}
#line 101
c_rt_lib0move(&___nl__im__31,___get_global_const(16));
#line 101
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(2, ___nl__im__31, ___nl__im__29));
#line 101
nl_die_arg(___nl__im__31);
#line 99
label_8:
;
#line 99
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(80)));
#line 99
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 100
c_rt_lib0move(&___nl__im__34,___get_global_const(166));
#line 100
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__34));
#line 100
c_rt_lib0delete(array0push(&___nl__im__34, ___nl__im__32));
#line 100
c_rt_lib0move(&___nl__string__35,___get_global_const(166));
#line 100
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__35, ___nl__im__34));
#line 100
c_rt_lib0clear(&___nl__im__34);
#line 100
c_rt_lib0clear(&___nl__string__35);
#line 101
goto label_7;
#line 101
label_9:
;
#line 101
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(79)));
#line 101
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 102
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__36));
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
//clear ___nl__bool__9;
#line 103
//clear ___nl__int__11;
#line 103
//clear ___nl__bool__26;
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
#line 103
return ___nl__im__2;
#line 104
goto label_7;
#line 104
label_7:
;
#line 104
c_rt_lib0clear(&___nl__im__29);
#line 104
//clear ___nl__bool__30;
#line 104
c_rt_lib0clear(&___nl__im__31);
#line 104
c_rt_lib0clear(&___nl__im__32);
#line 104
c_rt_lib0clear(&___nl__im__33);
#line 104
c_rt_lib0clear(&___nl__im__36);
#line 104
c_rt_lib0clear(&___nl__im__37);
#line 105
goto label_6;
#line 105
label_5:
;
#line 106
___nl__rec_ptr__39 = &((*___ref___rec__0).state0field);
#line 106
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_const(932)));
#line 106
___nl__bool__38 = ntokenizer0is_type(___nl__rec_ptr__39, ___nl__im__40);
#line 106
___nl__rec_ptr__39 = NULL;
#line 106
c_rt_lib0clear(&___nl__im__40);
#line 106
___nl__bool__38 = !___nl__bool__38;
#line 106
___nl__bool__38 = !___nl__bool__38;
#line 106
if(___nl__bool__38){ goto label_11;}
#line 106
c_rt_lib0move(&___nl__im__41,___get_global_const(987));
#line 106
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__41));
#line 106
c_rt_lib0clear(&___nl__im__41);
#line 106
goto label_10;
#line 106
label_11:
;
#line 106
label_10:
;
#line 106
//clear ___nl__bool__38;
#line 107
c_rt_lib0clear(&___nl__im__1);
#line 107
//clear ___nl__bool__9;
#line 107
//clear ___nl__int__11;
#line 107
//clear ___nl__bool__26;
#line 107
c_rt_lib0clear(&___nl__im__29);
#line 107
//clear ___nl__bool__30;
#line 107
c_rt_lib0clear(&___nl__im__31);
#line 107
c_rt_lib0clear(&___nl__im__32);
#line 107
c_rt_lib0clear(&___nl__im__33);
#line 107
c_rt_lib0clear(&___nl__im__36);
#line 107
c_rt_lib0clear(&___nl__im__37);
#line 107
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
#line 114
c_rt_lib0move(&___nl__im__1,___get_global_const(420));
#line 114
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 114
c_rt_lib0clear(&___nl__im__1);
#line 114
//clear ___nl__bool__2;
#line 115
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 116
label_2:
;
#line 116
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 116
c_rt_lib0move(&___nl__im__6,___get_global_const(299));
#line 116
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__5, ___nl__im__6);
#line 116
___nl__rec_ptr__5 = NULL;
#line 116
c_rt_lib0clear(&___nl__im__6);
#line 116
___nl__bool__4 = !___nl__bool__4;
#line 116
___nl__bool__4 = !___nl__bool__4;
#line 116
if(___nl__bool__4){ goto label_1;}
#line 117
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 117
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 117
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 117
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 117
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(266), ___nl__im__8, ___get_global_const(95), ___nl__im__9, ___get_global_const(168), ___nl__im__10, ___get_global_const(454), ___nl__im__11));
#line 117
c_rt_lib0clear(&___nl__im__8);
#line 117
c_rt_lib0clear(&___nl__im__9);
#line 117
c_rt_lib0clear(&___nl__im__10);
#line 117
c_rt_lib0clear(&___nl__im__11);
#line 118
c_rt_lib0move(&___nl__im__13,___get_global_const(40));
#line 118
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__13);
#line 118
c_rt_lib0clear(&___nl__im__13);
#line 118
___nl__bool__12 = !___nl__bool__12;
#line 118
if(___nl__bool__12){ goto label_4;}
#line 118
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 118
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 118
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(266), ___nl__im__14);
#line 118
c_rt_lib0clear(&___nl__im__14);
#line 118
c_rt_lib0clear(&___nl__im__15);
#line 118
goto label_3;
#line 118
label_4:
;
#line 118
label_3:
;
#line 118
//clear ___nl__bool__12;
#line 119
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 119
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 119
___nl__bool__16 = ntokenizer0is_type(___nl__rec_ptr__17, ___nl__im__18);
#line 119
___nl__rec_ptr__17 = NULL;
#line 119
c_rt_lib0clear(&___nl__im__18);
#line 119
___nl__bool__16 = !___nl__bool__16;
#line 119
if(___nl__bool__16){ goto label_6;}
#line 120
___nl__rec_ptr__21 = &((*___ref___rec__0).state0field);
#line 120
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 120
c_rt_lib0move(&___nl__im__20, ntokenizer0eat_type(___nl__rec_ptr__21, ___nl__im__22));
#line 120
___nl__rec_ptr__21 = NULL;
#line 120
c_rt_lib0clear(&___nl__im__22);
#line 120
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 120
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(168), ___nl__im__19);
#line 120
c_rt_lib0clear(&___nl__im__19);
#line 120
c_rt_lib0clear(&___nl__im__20);
#line 121
goto label_5;
#line 121
label_6:
;
#line 122
c_rt_lib0move(&___nl__im__23,___get_global_const(988));
#line 122
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__23));
#line 122
c_rt_lib0clear(&___nl__im__23);
#line 123
goto label_5;
#line 123
label_5:
;
#line 123
//clear ___nl__bool__16;
#line 124
c_rt_lib0move(&___nl__im__25,___get_global_const(484));
#line 124
___nl__bool__24 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__25);
#line 124
c_rt_lib0clear(&___nl__im__25);
#line 124
___nl__bool__24 = !___nl__bool__24;
#line 124
if(___nl__bool__24){ goto label_8;}
#line 125
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_type(___ref___rec__0));
#line 125
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(80));
#line 125
if(___nl__bool__27){ goto label_9;}
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
//clear ___nl__bool__4;
#line 125
c_rt_lib0clear(&___nl__im__7);
#line 125
//clear ___nl__bool__24;
#line 125
c_rt_lib0clear(&___nl__im__26);
#line 125
//clear ___nl__bool__27;
#line 125
return ___nl__im__28;
#line 125
label_9:
;
#line 125
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(80)));
#line 126
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__im__26));
#line 126
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 126
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_const(95), ___nl__im__29);
#line 126
c_rt_lib0clear(&___nl__im__29);
#line 126
c_rt_lib0clear(&___nl__im__30);
#line 127
goto label_7;
#line 127
label_8:
;
#line 127
label_7:
;
#line 127
//clear ___nl__bool__24;
#line 127
c_rt_lib0clear(&___nl__im__26);
#line 127
//clear ___nl__bool__27;
#line 127
c_rt_lib0clear(&___nl__im__28);
#line 128
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__7));
#line 129
c_rt_lib0move(&___nl__im__32,___get_global_const(295));
#line 129
___nl__bool__31 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__32);
#line 129
c_rt_lib0clear(&___nl__im__32);
#line 129
___nl__bool__31 = !___nl__bool__31;
#line 129
___nl__bool__31 = !___nl__bool__31;
#line 129
if(___nl__bool__31){ goto label_11;}
#line 129
goto label_1;
#line 129
goto label_10;
#line 129
label_11:
;
#line 129
label_10:
;
#line 129
//clear ___nl__bool__31;
#line 129
c_rt_lib0clear(&___nl__im__7);
#line 130
goto label_2;
#line 130
label_1:
;
#line 131
c_rt_lib0move(&___nl__im__33,___get_global_const(299));
#line 131
___nl__bool__34 = nparser_priv0eat(___ref___rec__0, ___nl__im__33);
#line 131
c_rt_lib0clear(&___nl__im__33);
#line 131
//clear ___nl__bool__34;
#line 132
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 132
c_rt_lib0clear(&___nl__im__3);
#line 132
//clear ___nl__bool__4;
#line 132
c_rt_lib0clear(&___nl__im__7);
#line 132
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
#line 140
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 140
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(95), ___nl__im__4, ___get_global_const(454), ___nl__im__5));
#line 140
c_rt_lib0clear(&___nl__im__4);
#line 140
c_rt_lib0clear(&___nl__im__5);
#line 141
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 141
___nl__int__6 = ntokenizer0get_line(___nl__rec_ptr__7);
#line 141
___nl__rec_ptr__7 = NULL;
#line 141
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 142
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 143
c_rt_lib0move(&___nl__im__10,___get_global_const(37));
#line 144
c_rt_lib0move(&___nl__im__12, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 144
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(875)));
#line 144
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__12, ___get_global_const(227), ___nl__im__13));
#line 144
c_rt_lib0clear(&___nl__im__12);
#line 144
c_rt_lib0clear(&___nl__im__13);
#line 145
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(428)));
#line 146
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 146
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(7, ___get_global_const(387), ___nl__im__3, ___get_global_const(154), ___nl__im__8, ___get_global_const(265), ___nl__im__9, ___get_global_const(168), ___nl__im__10, ___get_global_const(227), ___nl__im__11, ___get_global_const(209), ___nl__im__14, ___get_global_const(167), ___nl__im__15));
#line 146
c_rt_lib0clear(&___nl__im__3);
#line 146
//clear ___nl__int__6;
#line 146
c_rt_lib0clear(&___nl__im__8);
#line 146
c_rt_lib0clear(&___nl__im__9);
#line 146
c_rt_lib0clear(&___nl__im__10);
#line 146
c_rt_lib0clear(&___nl__im__11);
#line 146
c_rt_lib0clear(&___nl__im__14);
#line 146
c_rt_lib0clear(&___nl__im__15);
#line 148
c_rt_lib0move(&___nl__im__16,___get_global_const(689));
#line 148
___nl__bool__17 = nparser_priv0eat(___ref___rec__0, ___nl__im__16);
#line 148
c_rt_lib0clear(&___nl__im__16);
#line 148
//clear ___nl__bool__17;
#line 149
c_rt_lib0move(&___nl__im__19, nparser_priv0eat_text(___ref___rec__0));
#line 149
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(80));
#line 149
if(___nl__bool__18){ goto label_1;}
#line 149
c_rt_lib0clear(&___nl__im__1);
#line 149
c_rt_lib0clear(&___nl__im__2);
#line 149
//clear ___nl__bool__18;
#line 149
return ___nl__im__19;
#line 149
label_1:
;
#line 149
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(80)));
#line 149
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(168), ___nl__im__20);
#line 150
c_rt_lib0move(&___nl__im__22,___get_global_const(35));
#line 150
___nl__bool__21 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__22);
#line 150
c_rt_lib0clear(&___nl__im__22);
#line 150
___nl__bool__21 = !___nl__bool__21;
#line 150
if(___nl__bool__21){ goto label_3;}
#line 151
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(168)));
#line 151
___nl__bool__23 = c_rt_lib0ne(___nl__im__24, ___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__24);
#line 151
___nl__bool__23 = !___nl__bool__23;
#line 151
if(___nl__bool__23){ goto label_5;}
#line 152
c_rt_lib0move(&___nl__im__28,___get_global_const(989));
#line 152
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(168)));
#line 152
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 152
c_rt_lib0clear(&___nl__im__28);
#line 152
c_rt_lib0clear(&___nl__im__29);
#line 152
c_rt_lib0move(&___nl__im__30,___get_global_const(990));
#line 152
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 152
c_rt_lib0clear(&___nl__im__27);
#line 152
c_rt_lib0clear(&___nl__im__30);
#line 152
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__1));
#line 152
c_rt_lib0clear(&___nl__im__26);
#line 152
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__25));
#line 152
c_rt_lib0clear(&___nl__im__25);
#line 153
goto label_4;
#line 153
label_5:
;
#line 153
label_4:
;
#line 153
//clear ___nl__bool__23;
#line 154
c_rt_lib0move(&___nl__im__32, nparser_priv0eat_text(___ref___rec__0));
#line 154
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(80));
#line 154
if(___nl__bool__31){ goto label_6;}
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
//clear ___nl__bool__21;
#line 154
//clear ___nl__bool__31;
#line 154
return ___nl__im__32;
#line 154
label_6:
;
#line 154
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(80)));
#line 154
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(168), ___nl__im__33);
#line 155
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(210)));
#line 155
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 155
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(209), ___nl__im__34);
#line 155
c_rt_lib0clear(&___nl__im__34);
#line 155
c_rt_lib0clear(&___nl__im__35);
#line 156
goto label_2;
#line 156
label_3:
;
#line 156
label_2:
;
#line 156
//clear ___nl__bool__21;
#line 156
//clear ___nl__bool__31;
#line 156
c_rt_lib0clear(&___nl__im__32);
#line 156
c_rt_lib0clear(&___nl__im__33);
#line 157
c_rt_lib0move(&___nl__im__37, nparser_priv0parse_fun_arg_list(___ref___rec__0));
#line 157
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(80));
#line 157
if(___nl__bool__36){ goto label_7;}
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 157
//clear ___nl__bool__18;
#line 157
c_rt_lib0clear(&___nl__im__19);
#line 157
c_rt_lib0clear(&___nl__im__20);
#line 157
//clear ___nl__bool__36;
#line 157
return ___nl__im__37;
#line 157
label_7:
;
#line 157
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__37, ___get_global_const(80)));
#line 157
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(265), ___nl__im__38);
#line 158
___nl__rec_ptr__40 = &((*___ref___rec__0).state0field);
#line 158
c_rt_lib0move(&___nl__im__41,___get_global_const(484));
#line 158
___nl__bool__39 = ntokenizer0next_is(___nl__rec_ptr__40, ___nl__im__41);
#line 158
___nl__rec_ptr__40 = NULL;
#line 158
c_rt_lib0clear(&___nl__im__41);
#line 158
___nl__bool__39 = !___nl__bool__39;
#line 158
if(___nl__bool__39){ goto label_9;}
#line 159
c_rt_lib0move(&___nl__im__42,___get_global_const(484));
#line 159
___nl__bool__43 = nparser_priv0eat(___ref___rec__0, ___nl__im__42);
#line 159
c_rt_lib0clear(&___nl__im__42);
#line 159
//clear ___nl__bool__43;
#line 160
c_rt_lib0move(&___nl__im__46, nparser_priv0parse_type(___ref___rec__0));
#line 160
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__46, ___get_global_const(80));
#line 160
if(___nl__bool__45){ goto label_10;}
#line 160
c_rt_lib0clear(&___nl__im__1);
#line 160
c_rt_lib0clear(&___nl__im__2);
#line 160
//clear ___nl__bool__18;
#line 160
c_rt_lib0clear(&___nl__im__19);
#line 160
c_rt_lib0clear(&___nl__im__20);
#line 160
//clear ___nl__bool__36;
#line 160
c_rt_lib0clear(&___nl__im__37);
#line 160
c_rt_lib0clear(&___nl__im__38);
#line 160
//clear ___nl__bool__39;
#line 160
c_rt_lib0clear(&___nl__im__44);
#line 160
//clear ___nl__bool__45;
#line 160
return ___nl__im__46;
#line 160
label_10:
;
#line 160
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__46, ___get_global_const(80)));
#line 161
c_rt_lib0move(&___nl__im__47,___get_global_const(387));
#line 161
c_rt_lib0move(&___nl__im__47, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__47));
#line 161
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__im__44));
#line 161
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 161
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_const(95), ___nl__im__48);
#line 161
c_rt_lib0move(&___nl__string__50,___get_global_const(387));
#line 161
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__50, ___nl__im__47));
#line 161
c_rt_lib0clear(&___nl__im__47);
#line 161
c_rt_lib0clear(&___nl__im__48);
#line 161
c_rt_lib0clear(&___nl__im__49);
#line 161
c_rt_lib0clear(&___nl__string__50);
#line 162
goto label_8;
#line 162
label_9:
;
#line 162
label_8:
;
#line 162
//clear ___nl__bool__39;
#line 162
c_rt_lib0clear(&___nl__im__44);
#line 162
//clear ___nl__bool__45;
#line 162
c_rt_lib0clear(&___nl__im__46);
#line 163
c_rt_lib0move(&___nl__im__52, nparser_priv0parse_block(___ref___rec__0));
#line 163
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__52, ___get_global_const(80));
#line 163
if(___nl__bool__51){ goto label_11;}
#line 163
c_rt_lib0clear(&___nl__im__1);
#line 163
c_rt_lib0clear(&___nl__im__2);
#line 163
//clear ___nl__bool__18;
#line 163
c_rt_lib0clear(&___nl__im__19);
#line 163
c_rt_lib0clear(&___nl__im__20);
#line 163
//clear ___nl__bool__36;
#line 163
c_rt_lib0clear(&___nl__im__37);
#line 163
c_rt_lib0clear(&___nl__im__38);
#line 163
//clear ___nl__bool__51;
#line 163
return ___nl__im__52;
#line 163
label_11:
;
#line 163
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(80)));
#line 163
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(227), ___nl__im__53);
#line 164
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(227)));
#line 164
c_rt_lib0move(&___nl__im__54, ptd_parser0fun_def_to_ptd(___nl__im__55));
#line 164
c_rt_lib0clear(&___nl__im__55);
#line 164
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(79));
#line 164
if(___nl__bool__56){ goto label_13;}
#line 168
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__54, ___get_global_const(80));
#line 168
if(___nl__bool__56){ goto label_14;}
#line 168
c_rt_lib0move(&___nl__im__57,___get_global_const(16));
#line 168
c_rt_lib0move(&___nl__im__57, c_rt_lib0array_mk(2, ___nl__im__57, ___nl__im__54));
#line 168
nl_die_arg(___nl__im__57);
#line 164
label_13:
;
#line 164
c_rt_lib0move(&___nl__im__59, c_rt_lib0priv_as(___nl__im__54, ___get_global_const(79)));
#line 164
c_rt_lib0copy(&___nl__im__58, ___nl__im__59);
#line 167
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(78)));
#line 167
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 167
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__60);
#line 167
c_rt_lib0clear(&___nl__im__60);
#line 167
c_rt_lib0clear(&___nl__im__61);
#line 168
goto label_12;
#line 168
label_14:
;
#line 168
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__54, ___get_global_const(80)));
#line 168
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 169
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_const(77), ___nl__im__62));
#line 169
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 169
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__64);
#line 169
c_rt_lib0clear(&___nl__im__64);
#line 169
c_rt_lib0clear(&___nl__im__65);
#line 170
goto label_12;
#line 170
label_12:
;
#line 171
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__2));
#line 171
c_rt_lib0clear(&___nl__im__1);
#line 171
c_rt_lib0clear(&___nl__im__2);
#line 171
//clear ___nl__bool__18;
#line 171
c_rt_lib0clear(&___nl__im__19);
#line 171
c_rt_lib0clear(&___nl__im__20);
#line 171
//clear ___nl__bool__36;
#line 171
c_rt_lib0clear(&___nl__im__37);
#line 171
c_rt_lib0clear(&___nl__im__38);
#line 171
//clear ___nl__bool__51;
#line 171
c_rt_lib0clear(&___nl__im__52);
#line 171
c_rt_lib0clear(&___nl__im__53);
#line 171
c_rt_lib0clear(&___nl__im__54);
#line 171
//clear ___nl__bool__56;
#line 171
c_rt_lib0clear(&___nl__im__57);
#line 171
c_rt_lib0clear(&___nl__im__58);
#line 171
c_rt_lib0clear(&___nl__im__59);
#line 171
c_rt_lib0clear(&___nl__im__62);
#line 171
c_rt_lib0clear(&___nl__im__63);
#line 171
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
#line 178
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 179
label_2:
;
#line 179
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 179
c_rt_lib0move(&___nl__im__4,___get_global_const(299));
#line 179
___nl__bool__2 = ntokenizer0next_is(___nl__rec_ptr__3, ___nl__im__4);
#line 179
___nl__rec_ptr__3 = NULL;
#line 179
c_rt_lib0clear(&___nl__im__4);
#line 179
___nl__bool__2 = !___nl__bool__2;
#line 179
___nl__bool__2 = !___nl__bool__2;
#line 179
if(___nl__bool__2){ goto label_1;}
#line 180
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_fun_val_arg(___ref___rec__0));
#line 180
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 180
if(___nl__bool__6){ goto label_3;}
#line 180
c_rt_lib0clear(&___nl__im__1);
#line 180
//clear ___nl__bool__2;
#line 180
c_rt_lib0clear(&___nl__im__5);
#line 180
//clear ___nl__bool__6;
#line 180
return ___nl__im__7;
#line 180
label_3:
;
#line 180
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 181
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 182
c_rt_lib0move(&___nl__im__9,___get_global_const(295));
#line 182
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
___nl__bool__8 = !___nl__bool__8;
#line 182
___nl__bool__8 = !___nl__bool__8;
#line 182
if(___nl__bool__8){ goto label_5;}
#line 182
goto label_1;
#line 182
goto label_4;
#line 182
label_5:
;
#line 182
label_4:
;
#line 182
//clear ___nl__bool__8;
#line 182
c_rt_lib0clear(&___nl__im__5);
#line 182
//clear ___nl__bool__6;
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 183
goto label_2;
#line 183
label_1:
;
#line 184
c_rt_lib0move(&___nl__im__10,___get_global_const(299));
#line 184
___nl__bool__11 = nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 184
c_rt_lib0clear(&___nl__im__10);
#line 184
//clear ___nl__bool__11;
#line 185
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 185
c_rt_lib0clear(&___nl__im__1);
#line 185
//clear ___nl__bool__2;
#line 185
c_rt_lib0clear(&___nl__im__5);
#line 185
//clear ___nl__bool__6;
#line 185
c_rt_lib0clear(&___nl__im__7);
#line 185
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
#line 189
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 190
label_2:
;
#line 190
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 190
c_rt_lib0move(&___nl__im__4,___get_global_const(299));
#line 190
___nl__bool__2 = ntokenizer0next_is(___nl__rec_ptr__3, ___nl__im__4);
#line 190
___nl__rec_ptr__3 = NULL;
#line 190
c_rt_lib0clear(&___nl__im__4);
#line 190
___nl__bool__2 = !___nl__bool__2;
#line 190
___nl__bool__2 = !___nl__bool__2;
#line 190
if(___nl__bool__2){ goto label_1;}
#line 191
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 191
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 191
if(___nl__bool__6){ goto label_3;}
#line 191
c_rt_lib0clear(&___nl__im__1);
#line 191
//clear ___nl__bool__2;
#line 191
c_rt_lib0clear(&___nl__im__5);
#line 191
//clear ___nl__bool__6;
#line 191
return ___nl__im__7;
#line 191
label_3:
;
#line 191
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 192
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 193
c_rt_lib0move(&___nl__im__9,___get_global_const(295));
#line 193
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 193
c_rt_lib0clear(&___nl__im__9);
#line 193
___nl__bool__8 = !___nl__bool__8;
#line 193
___nl__bool__8 = !___nl__bool__8;
#line 193
if(___nl__bool__8){ goto label_5;}
#line 193
goto label_1;
#line 193
goto label_4;
#line 193
label_5:
;
#line 193
label_4:
;
#line 193
//clear ___nl__bool__8;
#line 193
c_rt_lib0clear(&___nl__im__5);
#line 193
//clear ___nl__bool__6;
#line 193
c_rt_lib0clear(&___nl__im__7);
#line 194
goto label_2;
#line 194
label_1:
;
#line 195
c_rt_lib0move(&___nl__im__10,___get_global_const(299));
#line 195
___nl__bool__11 = nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 195
c_rt_lib0clear(&___nl__im__10);
#line 195
//clear ___nl__bool__11;
#line 196
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 196
c_rt_lib0clear(&___nl__im__1);
#line 196
//clear ___nl__bool__2;
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 196
//clear ___nl__bool__6;
#line 196
c_rt_lib0clear(&___nl__im__7);
#line 196
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
#line 200
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 201
c_rt_lib0move(&___nl__im__5,___get_global_const(40));
#line 201
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 201
if(___nl__bool__4){ goto label_2;}
#line 201
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 201
goto label_1;
#line 201
label_2:
;
#line 201
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 201
label_1:
;
#line 201
//clear ___nl__bool__4;
#line 201
c_rt_lib0copy(&___nl__im__2, ___nl__im__3);
#line 201
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(266), ___nl__im__2);
#line 201
c_rt_lib0clear(&___nl__im__2);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 202
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 202
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(80));
#line 202
if(___nl__bool__6){ goto label_3;}
#line 202
c_rt_lib0clear(&___nl__im__1);
#line 202
//clear ___nl__bool__6;
#line 202
return ___nl__im__7;
#line 202
label_3:
;
#line 202
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(80)));
#line 202
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(224), ___nl__im__8);
#line 203
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 203
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 203
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(926), ___nl__im__9);
#line 203
c_rt_lib0clear(&___nl__im__9);
#line 203
c_rt_lib0clear(&___nl__im__10);
#line 204
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 204
c_rt_lib0clear(&___nl__im__1);
#line 204
//clear ___nl__bool__6;
#line 204
c_rt_lib0clear(&___nl__im__7);
#line 204
c_rt_lib0clear(&___nl__im__8);
#line 204
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
#line 208
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 208
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 208
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__2, ___get_global_const(152), ___nl__im__3));
#line 208
c_rt_lib0clear(&___nl__im__2);
#line 208
c_rt_lib0clear(&___nl__im__3);
#line 209
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 209
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 209
___nl__bool__4 = ntokenizer0is_type(___nl__rec_ptr__5, ___nl__im__6);
#line 209
___nl__rec_ptr__5 = NULL;
#line 209
c_rt_lib0clear(&___nl__im__6);
#line 209
___nl__bool__4 = !___nl__bool__4;
#line 209
___nl__bool__4 = !___nl__bool__4;
#line 209
if(___nl__bool__4){ goto label_2;}
#line 210
c_rt_lib0move(&___nl__im__7,___get_global_const(991));
#line 210
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__7));
#line 210
c_rt_lib0clear(&___nl__im__7);
#line 211
//clear ___nl__bool__4;
#line 211
return ___nl__im__1;
#line 212
goto label_1;
#line 212
label_2:
;
#line 212
label_1:
;
#line 212
//clear ___nl__bool__4;
#line 213
___nl__rec_ptr__10 = &((*___ref___rec__0).state0field);
#line 213
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 213
c_rt_lib0move(&___nl__im__9, ntokenizer0eat_type(___nl__rec_ptr__10, ___nl__im__11));
#line 213
___nl__rec_ptr__10 = NULL;
#line 213
c_rt_lib0clear(&___nl__im__11);
#line 213
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 213
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(152), ___nl__im__8);
#line 213
c_rt_lib0clear(&___nl__im__8);
#line 213
c_rt_lib0clear(&___nl__im__9);
#line 214
c_rt_lib0move(&___nl__im__14,___get_global_const(35));
#line 214
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__14);
#line 214
c_rt_lib0clear(&___nl__im__14);
#line 214
___nl__bool__13 = !___nl__bool__12;
#line 214
if(___nl__bool__13){ goto label_5;}
#line 214
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 214
___nl__bool__12 = ntokenizer0is_text(___nl__rec_ptr__15);
#line 214
___nl__rec_ptr__15 = NULL;
#line 214
label_5:
;
#line 214
//clear ___nl__bool__13;
#line 214
___nl__bool__12 = !___nl__bool__12;
#line 214
if(___nl__bool__12){ goto label_4;}
#line 215
___nl__rec_ptr__18 = &((*___ref___rec__0).state0field);
#line 215
c_rt_lib0move(&___nl__im__17, ntokenizer0eat_text(___nl__rec_ptr__18));
#line 215
___nl__rec_ptr__18 = NULL;
#line 215
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 215
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(168), ___nl__im__16);
#line 215
c_rt_lib0clear(&___nl__im__16);
#line 215
c_rt_lib0clear(&___nl__im__17);
#line 216
goto label_3;
#line 216
label_4:
;
#line 217
c_rt_lib0move(&___nl__im__19,___get_global_const(992));
#line 217
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__19));
#line 217
c_rt_lib0clear(&___nl__im__19);
#line 218
goto label_3;
#line 218
label_3:
;
#line 218
//clear ___nl__bool__12;
#line 219
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
#line 226
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 226
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 226
c_rt_lib0move(&___nl__im__1, ntokenizer0eat_type(___nl__rec_ptr__2, ___nl__im__3));
#line 226
___nl__rec_ptr__2 = NULL;
#line 226
c_rt_lib0clear(&___nl__im__3);
#line 228
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 228
c_rt_lib0move(&___nl__im__7,___get_global_const(420));
#line 228
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__6, ___nl__im__7);
#line 228
___nl__rec_ptr__6 = NULL;
#line 228
c_rt_lib0clear(&___nl__im__7);
#line 228
___nl__bool__4 = !___nl__bool__4;
#line 228
___nl__bool__5 = !___nl__bool__4;
#line 228
if(___nl__bool__5){ goto label_3;}
#line 228
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 228
c_rt_lib0move(&___nl__im__9,___get_global_const(35));
#line 228
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__8, ___nl__im__9);
#line 228
___nl__rec_ptr__8 = NULL;
#line 228
c_rt_lib0clear(&___nl__im__9);
#line 228
___nl__bool__4 = !___nl__bool__4;
#line 228
label_3:
;
#line 228
//clear ___nl__bool__5;
#line 228
___nl__bool__4 = !___nl__bool__4;
#line 228
if(___nl__bool__4){ goto label_2;}
#line 227
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(463), ___nl__im__1));
#line 227
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__11));
#line 227
c_rt_lib0clear(&___nl__im__11);
#line 227
c_rt_lib0clear(&___nl__im__1);
#line 227
//clear ___nl__bool__4;
#line 227
return ___nl__im__10;
#line 227
goto label_1;
#line 227
label_2:
;
#line 227
label_1:
;
#line 227
//clear ___nl__bool__4;
#line 227
c_rt_lib0clear(&___nl__im__10);
#line 229
c_rt_lib0move(&___nl__im__13,___get_global_const(37));
#line 229
c_rt_lib0move(&___nl__im__14,___get_global_const(37));
#line 229
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 229
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(152), ___nl__im__13, ___get_global_const(168), ___nl__im__14, ___get_global_const(265), ___nl__im__15));
#line 229
c_rt_lib0clear(&___nl__im__13);
#line 229
c_rt_lib0clear(&___nl__im__14);
#line 229
c_rt_lib0clear(&___nl__im__15);
#line 230
c_rt_lib0move(&___nl__im__17,___get_global_const(35));
#line 230
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 230
c_rt_lib0clear(&___nl__im__17);
#line 230
___nl__bool__16 = !___nl__bool__16;
#line 230
if(___nl__bool__16){ goto label_5;}
#line 231
c_rt_lib0copy(&___nl__im__18, ___nl__im__1);
#line 231
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(152), ___nl__im__18);
#line 231
c_rt_lib0clear(&___nl__im__18);
#line 232
c_rt_lib0move(&___nl__im__20, nparser_priv0eat_text(___ref___rec__0));
#line 232
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(80));
#line 232
if(___nl__bool__19){ goto label_6;}
#line 232
c_rt_lib0clear(&___nl__im__1);
#line 232
c_rt_lib0clear(&___nl__im__12);
#line 232
//clear ___nl__bool__16;
#line 232
//clear ___nl__bool__19;
#line 232
return ___nl__im__20;
#line 232
label_6:
;
#line 232
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(80)));
#line 232
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(168), ___nl__im__21);
#line 233
goto label_4;
#line 233
label_5:
;
#line 234
c_rt_lib0copy(&___nl__im__22, ___nl__im__1);
#line 234
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(168), ___nl__im__22);
#line 234
c_rt_lib0clear(&___nl__im__22);
#line 235
goto label_4;
#line 235
label_4:
;
#line 235
//clear ___nl__bool__16;
#line 235
//clear ___nl__bool__19;
#line 235
c_rt_lib0clear(&___nl__im__20);
#line 235
c_rt_lib0clear(&___nl__im__21);
#line 236
c_rt_lib0move(&___nl__im__23,___get_global_const(420));
#line 236
___nl__bool__24 = nparser_priv0eat(___ref___rec__0, ___nl__im__23);
#line 236
c_rt_lib0clear(&___nl__im__23);
#line 236
//clear ___nl__bool__24;
#line 237
c_rt_lib0move(&___nl__im__26, nparser_priv0parse_fun_val_arg_list(___ref___rec__0));
#line 237
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(80));
#line 237
if(___nl__bool__25){ goto label_7;}
#line 237
c_rt_lib0clear(&___nl__im__1);
#line 237
c_rt_lib0clear(&___nl__im__12);
#line 237
//clear ___nl__bool__25;
#line 237
return ___nl__im__26;
#line 237
label_7:
;
#line 237
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(80)));
#line 237
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(265), ___nl__im__27);
#line 238
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(855), ___nl__im__12));
#line 238
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__29));
#line 238
c_rt_lib0clear(&___nl__im__29);
#line 238
c_rt_lib0clear(&___nl__im__1);
#line 238
c_rt_lib0clear(&___nl__im__12);
#line 238
//clear ___nl__bool__25;
#line 238
c_rt_lib0clear(&___nl__im__26);
#line 238
c_rt_lib0clear(&___nl__im__27);
#line 238
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
#line 242
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 242
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 242
___nl__rec_ptr__2 = NULL;
#line 243
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 243
___nl__bool__5 = ntokenizer0is_text(___nl__rec_ptr__6);
#line 243
___nl__rec_ptr__6 = NULL;
#line 243
if(___nl__bool__5){ goto label_2;}
#line 244
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 244
goto label_1;
#line 244
label_2:
;
#line 244
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 244
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__7));
#line 244
___nl__rec_ptr__7 = NULL;
#line 244
label_1:
;
#line 244
//clear ___nl__bool__5;
#line 244
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(897), ___nl__im__4));
#line 244
c_rt_lib0clear(&___nl__im__4);
#line 246
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 246
c_rt_lib0move(&___nl__im__10, ntokenizer0get_place(___nl__rec_ptr__11));
#line 246
___nl__rec_ptr__11 = NULL;
#line 246
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(932), ___nl__im__10));
#line 246
c_rt_lib0clear(&___nl__im__10);
#line 248
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 248
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__9, ___get_global_const(219), ___nl__im__3, ___get_global_const(95), ___nl__im__12));
#line 248
c_rt_lib0clear(&___nl__im__9);
#line 248
c_rt_lib0clear(&___nl__im__12);
#line 248
c_rt_lib0clear(&___nl__im__1);
#line 248
c_rt_lib0clear(&___nl__im__3);
#line 248
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
#line 253
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 254
c_rt_lib0move(&___nl__im__2,___get_global_const(291));
#line 254
___nl__bool__3 = nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 254
c_rt_lib0clear(&___nl__im__2);
#line 254
//clear ___nl__bool__3;
#line 255
label_2:
;
#line 255
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 255
c_rt_lib0move(&___nl__im__6,___get_global_const(292));
#line 255
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__5, ___nl__im__6);
#line 255
___nl__rec_ptr__5 = NULL;
#line 255
c_rt_lib0clear(&___nl__im__6);
#line 255
___nl__bool__4 = !___nl__bool__4;
#line 255
___nl__bool__4 = !___nl__bool__4;
#line 255
if(___nl__bool__4){ goto label_1;}
#line 256
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_hash_key(___ref___rec__0));
#line 257
c_rt_lib0move(&___nl__im__8,___get_global_const(293));
#line 257
___nl__bool__9 = nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
//clear ___nl__bool__9;
#line 258
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_expr(___ref___rec__0));
#line 258
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(80));
#line 258
if(___nl__bool__11){ goto label_3;}
#line 258
c_rt_lib0clear(&___nl__im__1);
#line 258
//clear ___nl__bool__4;
#line 258
c_rt_lib0clear(&___nl__im__7);
#line 258
c_rt_lib0clear(&___nl__im__10);
#line 258
//clear ___nl__bool__11;
#line 258
return ___nl__im__12;
#line 258
label_3:
;
#line 258
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(80)));
#line 259
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(371), ___nl__im__7, ___get_global_const(224), ___nl__im__10));
#line 259
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__13));
#line 259
c_rt_lib0clear(&___nl__im__13);
#line 260
c_rt_lib0move(&___nl__im__15,___get_global_const(295));
#line 260
___nl__bool__14 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__15);
#line 260
c_rt_lib0clear(&___nl__im__15);
#line 260
___nl__bool__14 = !___nl__bool__14;
#line 260
___nl__bool__14 = !___nl__bool__14;
#line 260
if(___nl__bool__14){ goto label_5;}
#line 260
goto label_1;
#line 260
goto label_4;
#line 260
label_5:
;
#line 260
label_4:
;
#line 260
//clear ___nl__bool__14;
#line 260
c_rt_lib0clear(&___nl__im__7);
#line 260
c_rt_lib0clear(&___nl__im__10);
#line 260
//clear ___nl__bool__11;
#line 260
c_rt_lib0clear(&___nl__im__12);
#line 261
goto label_2;
#line 261
label_1:
;
#line 262
c_rt_lib0move(&___nl__im__16,___get_global_const(292));
#line 262
___nl__bool__17 = nparser_priv0eat(___ref___rec__0, ___nl__im__16);
#line 262
c_rt_lib0clear(&___nl__im__16);
#line 262
//clear ___nl__bool__17;
#line 263
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 263
c_rt_lib0clear(&___nl__im__1);
#line 263
//clear ___nl__bool__4;
#line 263
c_rt_lib0clear(&___nl__im__7);
#line 263
c_rt_lib0clear(&___nl__im__10);
#line 263
//clear ___nl__bool__11;
#line 263
c_rt_lib0clear(&___nl__im__12);
#line 263
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
#line 267
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 268
c_rt_lib0move(&___nl__im__2,___get_global_const(297));
#line 268
___nl__bool__3 = nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 268
c_rt_lib0clear(&___nl__im__2);
#line 268
//clear ___nl__bool__3;
#line 269
label_2:
;
#line 269
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 269
c_rt_lib0move(&___nl__im__6,___get_global_const(298));
#line 269
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__5, ___nl__im__6);
#line 269
___nl__rec_ptr__5 = NULL;
#line 269
c_rt_lib0clear(&___nl__im__6);
#line 269
___nl__bool__4 = !___nl__bool__4;
#line 269
___nl__bool__4 = !___nl__bool__4;
#line 269
if(___nl__bool__4){ goto label_1;}
#line 270
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_expr(___ref___rec__0));
#line 270
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 270
if(___nl__bool__8){ goto label_3;}
#line 270
c_rt_lib0clear(&___nl__im__1);
#line 270
//clear ___nl__bool__4;
#line 270
c_rt_lib0clear(&___nl__im__7);
#line 270
//clear ___nl__bool__8;
#line 270
return ___nl__im__9;
#line 270
label_3:
;
#line 270
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 271
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__7));
#line 272
c_rt_lib0move(&___nl__im__11,___get_global_const(295));
#line 272
___nl__bool__10 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__11);
#line 272
c_rt_lib0clear(&___nl__im__11);
#line 272
___nl__bool__10 = !___nl__bool__10;
#line 272
___nl__bool__10 = !___nl__bool__10;
#line 272
if(___nl__bool__10){ goto label_5;}
#line 272
goto label_1;
#line 272
goto label_4;
#line 272
label_5:
;
#line 272
label_4:
;
#line 272
//clear ___nl__bool__10;
#line 272
c_rt_lib0clear(&___nl__im__7);
#line 272
//clear ___nl__bool__8;
#line 272
c_rt_lib0clear(&___nl__im__9);
#line 273
goto label_2;
#line 273
label_1:
;
#line 274
c_rt_lib0move(&___nl__im__12,___get_global_const(298));
#line 274
___nl__bool__13 = nparser_priv0eat(___ref___rec__0, ___nl__im__12);
#line 274
c_rt_lib0clear(&___nl__im__12);
#line 274
//clear ___nl__bool__13;
#line 275
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 275
c_rt_lib0clear(&___nl__im__1);
#line 275
//clear ___nl__bool__4;
#line 275
c_rt_lib0clear(&___nl__im__7);
#line 275
//clear ___nl__bool__8;
#line 275
c_rt_lib0clear(&___nl__im__9);
#line 275
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
#line 279
___nl__int__4 = 0;
#line 279
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__4));
#line 279
//clear ___nl__int__4;
#line 279
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(80));
#line 279
if(___nl__bool__2){ goto label_1;}
#line 279
c_rt_lib0clear(&___nl__im__1);
#line 279
//clear ___nl__bool__2;
#line 279
return ___nl__im__3;
#line 279
label_1:
;
#line 279
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(80)));
#line 280
___nl__int__6 = 0;
#line 280
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__1, ___nl__int__6));
#line 280
//clear ___nl__int__6;
#line 280
c_rt_lib0clear(&___nl__im__1);
#line 280
//clear ___nl__bool__2;
#line 280
c_rt_lib0clear(&___nl__im__3);
#line 280
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
#line 284
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 284
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 284
___nl__rec_ptr__2 = NULL;
#line 285
c_rt_lib0move(&___nl__im__4,___get_global_const(306));
#line 285
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 285
c_rt_lib0clear(&___nl__im__4);
#line 285
___nl__bool__3 = !___nl__bool__3;
#line 285
if(___nl__bool__3){ goto label_2;}
#line 286
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 286
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 286
___nl__rec_ptr__6 = NULL;
#line 287
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_fun_label(___ref___rec__0));
#line 287
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(899), ___nl__im__8));
#line 287
c_rt_lib0clear(&___nl__im__8);
#line 288
___nl__rec_ptr__10 = &((*___ref___rec__0).state0field);
#line 288
c_rt_lib0move(&___nl__im__9, ntokenizer0get_place(___nl__rec_ptr__10));
#line 288
___nl__rec_ptr__10 = NULL;
#line 292
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 292
c_rt_lib0move(&___nl__im__14, ntokenizer0get_place(___nl__rec_ptr__15));
#line 292
___nl__rec_ptr__15 = NULL;
#line 292
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(932), ___nl__im__14));
#line 292
c_rt_lib0clear(&___nl__im__14);
#line 295
c_rt_lib0move(&___nl__im__18,___get_global_const(306));
#line 297
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__5, ___get_global_const(932), ___nl__im__9));
#line 299
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 299
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__20, ___get_global_const(219), ___nl__im__7, ___get_global_const(95), ___nl__im__21));
#line 299
c_rt_lib0clear(&___nl__im__20);
#line 299
c_rt_lib0clear(&___nl__im__21);
#line 299
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(514), ___nl__im__18, ___get_global_const(224), ___nl__im__19));
#line 299
c_rt_lib0clear(&___nl__im__18);
#line 299
c_rt_lib0clear(&___nl__im__19);
#line 299
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(898), ___nl__im__17));
#line 299
c_rt_lib0clear(&___nl__im__17);
#line 302
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 302
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__13, ___get_global_const(219), ___nl__im__16, ___get_global_const(95), ___nl__im__22));
#line 302
c_rt_lib0clear(&___nl__im__13);
#line 302
c_rt_lib0clear(&___nl__im__16);
#line 302
c_rt_lib0clear(&___nl__im__22);
#line 302
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__12));
#line 302
c_rt_lib0clear(&___nl__im__12);
#line 302
c_rt_lib0clear(&___nl__im__1);
#line 302
//clear ___nl__bool__3;
#line 302
c_rt_lib0clear(&___nl__im__5);
#line 302
c_rt_lib0clear(&___nl__im__7);
#line 302
c_rt_lib0clear(&___nl__im__9);
#line 302
return ___nl__im__11;
#line 304
goto label_1;
#line 304
label_2:
;
#line 304
label_1:
;
#line 304
//clear ___nl__bool__3;
#line 304
c_rt_lib0clear(&___nl__im__5);
#line 304
c_rt_lib0clear(&___nl__im__7);
#line 304
c_rt_lib0clear(&___nl__im__9);
#line 304
c_rt_lib0clear(&___nl__im__11);
#line 305
___nl__rec_ptr__24 = &((*___ref___rec__0).state0field);
#line 305
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 305
___nl__bool__23 = ntokenizer0is_type(___nl__rec_ptr__24, ___nl__im__25);
#line 305
___nl__rec_ptr__24 = NULL;
#line 305
c_rt_lib0clear(&___nl__im__25);
#line 305
___nl__bool__23 = !___nl__bool__23;
#line 305
if(___nl__bool__23){ goto label_4;}
#line 306
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_label(___ref___rec__0));
#line 306
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(80));
#line 306
if(___nl__bool__27){ goto label_5;}
#line 306
c_rt_lib0clear(&___nl__im__1);
#line 306
//clear ___nl__bool__23;
#line 306
c_rt_lib0clear(&___nl__im__26);
#line 306
//clear ___nl__bool__27;
#line 306
return ___nl__im__28;
#line 306
label_5:
;
#line 306
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(80)));
#line 307
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(855));
#line 307
___nl__bool__29 = !___nl__bool__29;
#line 307
if(___nl__bool__29){ goto label_7;}
#line 309
___nl__rec_ptr__34 = &((*___ref___rec__0).state0field);
#line 309
c_rt_lib0move(&___nl__im__33, ntokenizer0get_place(___nl__rec_ptr__34));
#line 309
___nl__rec_ptr__34 = NULL;
#line 309
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(932), ___nl__im__33));
#line 309
c_rt_lib0clear(&___nl__im__33);
#line 311
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 311
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__32, ___get_global_const(219), ___nl__im__26, ___get_global_const(95), ___nl__im__35));
#line 311
c_rt_lib0clear(&___nl__im__32);
#line 311
c_rt_lib0clear(&___nl__im__35);
#line 311
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__31));
#line 311
c_rt_lib0clear(&___nl__im__31);
#line 311
c_rt_lib0clear(&___nl__im__1);
#line 311
//clear ___nl__bool__23;
#line 311
c_rt_lib0clear(&___nl__im__26);
#line 311
//clear ___nl__bool__27;
#line 311
c_rt_lib0clear(&___nl__im__28);
#line 311
//clear ___nl__bool__29;
#line 311
return ___nl__im__30;
#line 313
goto label_6;
#line 313
label_7:
;
#line 313
label_6:
;
#line 313
//clear ___nl__bool__29;
#line 313
c_rt_lib0clear(&___nl__im__30);
#line 314
goto label_3;
#line 314
label_4:
;
#line 314
label_3:
;
#line 314
//clear ___nl__bool__23;
#line 314
c_rt_lib0clear(&___nl__im__26);
#line 314
//clear ___nl__bool__27;
#line 314
c_rt_lib0clear(&___nl__im__28);
#line 315
c_rt_lib0move(&___nl__im__36,___get_global_const(993));
#line 315
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__36));
#line 315
c_rt_lib0clear(&___nl__im__36);
#line 317
___nl__rec_ptr__41 = &((*___ref___rec__0).state0field);
#line 317
c_rt_lib0move(&___nl__im__40, ntokenizer0get_place(___nl__rec_ptr__41));
#line 317
___nl__rec_ptr__41 = NULL;
#line 317
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(932), ___nl__im__40));
#line 317
c_rt_lib0clear(&___nl__im__40);
#line 318
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(875)));
#line 319
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 319
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__39, ___get_global_const(219), ___nl__im__42, ___get_global_const(95), ___nl__im__43));
#line 319
c_rt_lib0clear(&___nl__im__39);
#line 319
c_rt_lib0clear(&___nl__im__42);
#line 319
c_rt_lib0clear(&___nl__im__43);
#line 319
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__38));
#line 319
c_rt_lib0clear(&___nl__im__38);
#line 319
c_rt_lib0clear(&___nl__im__1);
#line 319
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
#line 324
label_2:
;
#line 326
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 326
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 326
___nl__rec_ptr__5 = NULL;
#line 327
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 327
c_rt_lib0move(&___nl__im__6, ntokenizer0get_token(___nl__rec_ptr__7));
#line 327
___nl__rec_ptr__7 = NULL;
#line 329
c_rt_lib0move(&___nl__im__10, nast0get_ternary_ops());
#line 329
___nl__bool__9 = hash0has_key(___nl__im__10, ___nl__im__6);
#line 329
c_rt_lib0clear(&___nl__im__10);
#line 329
___nl__bool__9 = !___nl__bool__9;
#line 329
if(___nl__bool__9){ goto label_4;}
#line 330
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 331
c_rt_lib0move(&___nl__im__12,___get_global_const(916));
#line 331
___nl__bool__11 = c_rt_lib0eq(___nl__im__8, ___nl__im__12);
#line 331
c_rt_lib0clear(&___nl__im__12);
#line 331
___nl__bool__11 = !___nl__bool__11;
#line 331
if(___nl__bool__11){ goto label_6;}
#line 332
c_rt_lib0move(&___nl__im__14, nast0get_ternary_ops());
#line 332
c_rt_lib0move(&___nl__im__15,___get_global_const(916));
#line 332
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__14, ___nl__im__15));
#line 332
c_rt_lib0clear(&___nl__im__14);
#line 332
c_rt_lib0clear(&___nl__im__15);
#line 333
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(913)));
#line 333
___nl__int__18 = getIntFromImm(___nl__im__19);
#line 333
c_rt_lib0clear(&___nl__im__19);
#line 333
___nl__int__20 = ___nl__int__18 < ___nl__int__2;
#line 333
___nl__bool__16 = ___nl__int__20;
#line 333
//clear ___nl__int__18;
#line 333
//clear ___nl__int__20;
#line 333
if(___nl__bool__16){ goto label_9;}
#line 333
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(913)));
#line 333
___nl__int__22 = getIntFromImm(___nl__im__23);
#line 333
c_rt_lib0clear(&___nl__im__23);
#line 333
___nl__int__24 = ___nl__int__22 == ___nl__int__2;
#line 333
___nl__bool__16 = ___nl__int__24;
#line 333
//clear ___nl__int__22;
#line 333
//clear ___nl__int__24;
#line 333
___nl__bool__21 = !___nl__bool__16;
#line 333
if(___nl__bool__21){ goto label_10;}
#line 333
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(914)));
#line 333
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(274));
#line 333
c_rt_lib0clear(&___nl__im__25);
#line 333
label_10:
;
#line 333
//clear ___nl__bool__21;
#line 333
label_9:
;
#line 333
//clear ___nl__bool__17;
#line 333
___nl__bool__16 = !___nl__bool__16;
#line 333
if(___nl__bool__16){ goto label_8;}
#line 333
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 333
c_rt_lib0clear(&___nl__im__1);
#line 333
//clear ___nl__int__2;
#line 333
c_rt_lib0clear(&___nl__im__3);
#line 333
c_rt_lib0clear(&___nl__im__4);
#line 333
c_rt_lib0clear(&___nl__im__6);
#line 333
c_rt_lib0clear(&___nl__im__8);
#line 333
//clear ___nl__bool__9;
#line 333
//clear ___nl__bool__11;
#line 333
c_rt_lib0clear(&___nl__im__13);
#line 333
//clear ___nl__bool__16;
#line 333
return ___nl__im__26;
#line 333
goto label_7;
#line 333
label_8:
;
#line 333
label_7:
;
#line 333
//clear ___nl__bool__16;
#line 333
c_rt_lib0clear(&___nl__im__26);
#line 334
___nl__bool__27 = nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 334
//clear ___nl__bool__27;
#line 335
c_rt_lib0move(&___nl__im__30, nparser_priv0parse_expr(___ref___rec__0));
#line 335
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_const(80));
#line 335
if(___nl__bool__29){ goto label_11;}
#line 335
c_rt_lib0clear(&___nl__im__1);
#line 335
//clear ___nl__int__2;
#line 335
c_rt_lib0clear(&___nl__im__3);
#line 335
c_rt_lib0clear(&___nl__im__4);
#line 335
c_rt_lib0clear(&___nl__im__6);
#line 335
c_rt_lib0clear(&___nl__im__8);
#line 335
//clear ___nl__bool__9;
#line 335
//clear ___nl__bool__11;
#line 335
c_rt_lib0clear(&___nl__im__13);
#line 335
c_rt_lib0clear(&___nl__im__28);
#line 335
//clear ___nl__bool__29;
#line 335
return ___nl__im__30;
#line 335
label_11:
;
#line 335
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(80)));
#line 336
c_rt_lib0move(&___nl__im__31,___get_global_const(484));
#line 336
___nl__bool__32 = nparser_priv0eat(___ref___rec__0, ___nl__im__31);
#line 336
c_rt_lib0clear(&___nl__im__31);
#line 336
//clear ___nl__bool__32;
#line 337
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(913)));
#line 337
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 337
c_rt_lib0clear(&___nl__im__37);
#line 337
c_rt_lib0move(&___nl__im__35, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__36));
#line 337
//clear ___nl__int__36;
#line 337
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(80));
#line 337
if(___nl__bool__34){ goto label_12;}
#line 337
c_rt_lib0clear(&___nl__im__1);
#line 337
//clear ___nl__int__2;
#line 337
c_rt_lib0clear(&___nl__im__3);
#line 337
c_rt_lib0clear(&___nl__im__4);
#line 337
c_rt_lib0clear(&___nl__im__6);
#line 337
c_rt_lib0clear(&___nl__im__8);
#line 337
//clear ___nl__bool__9;
#line 337
//clear ___nl__bool__11;
#line 337
c_rt_lib0clear(&___nl__im__13);
#line 337
c_rt_lib0clear(&___nl__im__28);
#line 337
//clear ___nl__bool__29;
#line 337
c_rt_lib0clear(&___nl__im__30);
#line 337
c_rt_lib0clear(&___nl__im__33);
#line 337
//clear ___nl__bool__34;
#line 337
return ___nl__im__35;
#line 337
label_12:
;
#line 337
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(80)));
#line 338
c_rt_lib0move(&___nl__im__39,___get_global_const(916));
#line 338
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(4, ___get_global_const(902), ___nl__im__1, ___get_global_const(903), ___nl__im__28, ___get_global_const(904), ___nl__im__33, ___get_global_const(514), ___nl__im__39));
#line 338
c_rt_lib0clear(&___nl__im__39);
#line 338
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(896), ___nl__im__38));
#line 338
c_rt_lib0clear(&___nl__im__38);
#line 339
goto label_5;
#line 339
label_6:
;
#line 340
c_rt_lib0move(&___nl__im__42,___get_global_const(994));
#line 340
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__8));
#line 340
c_rt_lib0clear(&___nl__im__42);
#line 340
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__41));
#line 340
c_rt_lib0clear(&___nl__im__41);
#line 340
c_rt_lib0clear(&___nl__im__1);
#line 340
//clear ___nl__int__2;
#line 340
c_rt_lib0clear(&___nl__im__3);
#line 340
c_rt_lib0clear(&___nl__im__4);
#line 340
c_rt_lib0clear(&___nl__im__6);
#line 340
c_rt_lib0clear(&___nl__im__8);
#line 340
//clear ___nl__bool__9;
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
return ___nl__im__40;
#line 341
goto label_5;
#line 341
label_5:
;
#line 341
//clear ___nl__bool__11;
#line 341
c_rt_lib0clear(&___nl__im__13);
#line 341
c_rt_lib0clear(&___nl__im__28);
#line 341
//clear ___nl__bool__29;
#line 341
c_rt_lib0clear(&___nl__im__30);
#line 341
c_rt_lib0clear(&___nl__im__33);
#line 341
//clear ___nl__bool__34;
#line 341
c_rt_lib0clear(&___nl__im__35);
#line 341
c_rt_lib0clear(&___nl__im__40);
#line 342
goto label_3;
#line 342
label_4:
;
#line 342
c_rt_lib0move(&___nl__im__43, nast0get_bin_ops());
#line 342
___nl__bool__9 = hash0has_key(___nl__im__43, ___nl__im__6);
#line 342
c_rt_lib0clear(&___nl__im__43);
#line 342
___nl__bool__9 = !___nl__bool__9;
#line 342
if(___nl__bool__9){ goto label_13;}
#line 343
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 344
c_rt_lib0move(&___nl__im__45, nast0get_bin_ops());
#line 344
c_rt_lib0move(&___nl__im__44, hash0get_value(___nl__im__45, ___nl__im__6));
#line 344
c_rt_lib0clear(&___nl__im__45);
#line 345
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(913)));
#line 345
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 345
c_rt_lib0clear(&___nl__im__49);
#line 345
___nl__int__50 = ___nl__int__48 < ___nl__int__2;
#line 345
___nl__bool__46 = ___nl__int__50;
#line 345
//clear ___nl__int__48;
#line 345
//clear ___nl__int__50;
#line 345
if(___nl__bool__46){ goto label_16;}
#line 345
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(913)));
#line 345
___nl__int__52 = getIntFromImm(___nl__im__53);
#line 345
c_rt_lib0clear(&___nl__im__53);
#line 345
___nl__int__54 = ___nl__int__52 == ___nl__int__2;
#line 345
___nl__bool__46 = ___nl__int__54;
#line 345
//clear ___nl__int__52;
#line 345
//clear ___nl__int__54;
#line 345
___nl__bool__51 = !___nl__bool__46;
#line 345
if(___nl__bool__51){ goto label_17;}
#line 345
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(914)));
#line 345
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__55, ___get_global_const(274));
#line 345
c_rt_lib0clear(&___nl__im__55);
#line 345
label_17:
;
#line 345
//clear ___nl__bool__51;
#line 345
label_16:
;
#line 345
//clear ___nl__bool__47;
#line 345
___nl__bool__46 = !___nl__bool__46;
#line 345
if(___nl__bool__46){ goto label_15;}
#line 345
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 345
c_rt_lib0clear(&___nl__im__1);
#line 345
//clear ___nl__int__2;
#line 345
c_rt_lib0clear(&___nl__im__3);
#line 345
c_rt_lib0clear(&___nl__im__4);
#line 345
c_rt_lib0clear(&___nl__im__6);
#line 345
c_rt_lib0clear(&___nl__im__8);
#line 345
//clear ___nl__bool__9;
#line 345
c_rt_lib0clear(&___nl__im__44);
#line 345
//clear ___nl__bool__46;
#line 345
return ___nl__im__56;
#line 345
goto label_14;
#line 345
label_15:
;
#line 345
label_14:
;
#line 345
//clear ___nl__bool__46;
#line 345
c_rt_lib0clear(&___nl__im__56);
#line 346
___nl__bool__57 = nparser_priv0eat(___ref___rec__0, ___nl__im__6);
#line 346
//clear ___nl__bool__57;
#line 347
c_rt_lib0move(&___nl__im__59,___get_global_const(532));
#line 347
___nl__bool__58 = c_rt_lib0eq(___nl__im__8, ___nl__im__59);
#line 347
c_rt_lib0clear(&___nl__im__59);
#line 347
___nl__bool__58 = !___nl__bool__58;
#line 347
if(___nl__bool__58){ goto label_19;}
#line 348
c_rt_lib0move(&___nl__im__61, nparser_priv0parse_hash_key(___ref___rec__0));
#line 348
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__8, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__61));
#line 348
c_rt_lib0clear(&___nl__im__61);
#line 348
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__60));
#line 348
c_rt_lib0clear(&___nl__im__60);
#line 349
goto label_18;
#line 349
label_19:
;
#line 349
c_rt_lib0move(&___nl__im__62,___get_global_const(919));
#line 349
___nl__bool__58 = c_rt_lib0eq(___nl__im__8, ___nl__im__62);
#line 349
c_rt_lib0clear(&___nl__im__62);
#line 349
___nl__bool__58 = !___nl__bool__58;
#line 349
if(___nl__bool__58){ goto label_20;}
#line 350
c_rt_lib0move(&___nl__im__63,___get_global_const(484));
#line 350
___nl__bool__64 = nparser_priv0eat(___ref___rec__0, ___nl__im__63);
#line 350
c_rt_lib0clear(&___nl__im__63);
#line 350
//clear ___nl__bool__64;
#line 351
c_rt_lib0move(&___nl__im__65, nparser_priv0parse_hash_key(___ref___rec__0));
#line 352
c_rt_lib0move(&___nl__im__67,___get_global_const(893));
#line 352
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__67, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__65));
#line 352
c_rt_lib0clear(&___nl__im__67);
#line 352
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__66));
#line 352
c_rt_lib0clear(&___nl__im__66);
#line 353
goto label_18;
#line 353
label_20:
;
#line 353
c_rt_lib0move(&___nl__im__68,___get_global_const(918));
#line 353
___nl__bool__58 = c_rt_lib0eq(___nl__im__8, ___nl__im__68);
#line 353
c_rt_lib0clear(&___nl__im__68);
#line 353
___nl__bool__58 = !___nl__bool__58;
#line 353
if(___nl__bool__58){ goto label_21;}
#line 354
c_rt_lib0move(&___nl__im__69,___get_global_const(484));
#line 354
___nl__bool__70 = nparser_priv0eat(___ref___rec__0, ___nl__im__69);
#line 354
c_rt_lib0clear(&___nl__im__69);
#line 354
//clear ___nl__bool__70;
#line 355
c_rt_lib0move(&___nl__im__71, nparser_priv0parse_hash_key(___ref___rec__0));
#line 356
c_rt_lib0move(&___nl__im__73,___get_global_const(995));
#line 356
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__73, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__71));
#line 356
c_rt_lib0clear(&___nl__im__73);
#line 356
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__72));
#line 356
c_rt_lib0clear(&___nl__im__72);
#line 357
goto label_18;
#line 357
label_21:
;
#line 358
c_rt_lib0move(&___nl__im__75,___get_global_const(905));
#line 358
___nl__bool__74 = c_rt_lib0eq(___nl__im__8, ___nl__im__75);
#line 358
c_rt_lib0clear(&___nl__im__75);
#line 358
___nl__bool__74 = !___nl__bool__74;
#line 358
if(___nl__bool__74){ goto label_23;}
#line 358
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__1));
#line 358
goto label_22;
#line 358
label_23:
;
#line 358
label_22:
;
#line 358
//clear ___nl__bool__74;
#line 359
c_rt_lib0move(&___nl__im__81, nast0get_bin_ops());
#line 359
c_rt_lib0move(&___nl__im__80, hash0get_value(___nl__im__81, ___nl__im__8));
#line 359
c_rt_lib0clear(&___nl__im__81);
#line 359
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(913)));
#line 359
___nl__int__79 = getIntFromImm(___nl__im__82);
#line 359
c_rt_lib0clear(&___nl__im__80);
#line 359
c_rt_lib0clear(&___nl__im__82);
#line 359
c_rt_lib0move(&___nl__im__78, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__79));
#line 359
//clear ___nl__int__79;
#line 359
___nl__bool__77 = c_rt_lib0priv_is(___nl__im__78, ___get_global_const(80));
#line 359
if(___nl__bool__77){ goto label_24;}
#line 359
c_rt_lib0clear(&___nl__im__1);
#line 359
//clear ___nl__int__2;
#line 359
c_rt_lib0clear(&___nl__im__3);
#line 359
c_rt_lib0clear(&___nl__im__4);
#line 359
c_rt_lib0clear(&___nl__im__6);
#line 359
c_rt_lib0clear(&___nl__im__8);
#line 359
//clear ___nl__bool__9;
#line 359
c_rt_lib0clear(&___nl__im__44);
#line 359
//clear ___nl__bool__58;
#line 359
c_rt_lib0clear(&___nl__im__65);
#line 359
c_rt_lib0clear(&___nl__im__71);
#line 359
c_rt_lib0clear(&___nl__im__76);
#line 359
//clear ___nl__bool__77;
#line 359
return ___nl__im__78;
#line 359
label_24:
;
#line 359
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__78, ___get_global_const(80)));
#line 360
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_mk(3, ___get_global_const(274), ___nl__im__1, ___get_global_const(514), ___nl__im__8, ___get_global_const(275), ___nl__im__76));
#line 360
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__83));
#line 360
c_rt_lib0clear(&___nl__im__83);
#line 361
goto label_18;
#line 361
label_18:
;
#line 361
//clear ___nl__bool__58;
#line 361
c_rt_lib0clear(&___nl__im__65);
#line 361
c_rt_lib0clear(&___nl__im__71);
#line 361
c_rt_lib0clear(&___nl__im__76);
#line 361
//clear ___nl__bool__77;
#line 361
c_rt_lib0clear(&___nl__im__78);
#line 362
goto label_3;
#line 362
label_13:
;
#line 362
c_rt_lib0move(&___nl__im__84,___get_global_const(297));
#line 362
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__84);
#line 362
c_rt_lib0clear(&___nl__im__84);
#line 362
___nl__bool__9 = !___nl__bool__9;
#line 362
if(___nl__bool__9){ goto label_25;}
#line 363
c_rt_lib0move(&___nl__im__8,___get_global_const(891));
#line 364
c_rt_lib0move(&___nl__im__87, nparser_priv0parse_expr(___ref___rec__0));
#line 364
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__87, ___get_global_const(80));
#line 364
if(___nl__bool__86){ goto label_26;}
#line 364
c_rt_lib0clear(&___nl__im__1);
#line 364
//clear ___nl__int__2;
#line 364
c_rt_lib0clear(&___nl__im__3);
#line 364
c_rt_lib0clear(&___nl__im__4);
#line 364
c_rt_lib0clear(&___nl__im__6);
#line 364
c_rt_lib0clear(&___nl__im__8);
#line 364
//clear ___nl__bool__9;
#line 364
c_rt_lib0clear(&___nl__im__44);
#line 364
c_rt_lib0clear(&___nl__im__85);
#line 364
//clear ___nl__bool__86;
#line 364
return ___nl__im__87;
#line 364
label_26:
;
#line 364
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__87, ___get_global_const(80)));
#line 365
c_rt_lib0move(&___nl__im__88,___get_global_const(298));
#line 365
___nl__bool__89 = nparser_priv0eat(___ref___rec__0, ___nl__im__88);
#line 365
c_rt_lib0clear(&___nl__im__88);
#line 365
//clear ___nl__bool__89;
#line 366
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__8, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__85));
#line 366
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__90));
#line 366
c_rt_lib0clear(&___nl__im__90);
#line 367
goto label_3;
#line 367
label_25:
;
#line 367
c_rt_lib0move(&___nl__im__91,___get_global_const(291));
#line 367
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__91);
#line 367
c_rt_lib0clear(&___nl__im__91);
#line 367
___nl__bool__9 = !___nl__bool__9;
#line 367
if(___nl__bool__9){ goto label_27;}
#line 368
c_rt_lib0move(&___nl__im__8,___get_global_const(892));
#line 369
c_rt_lib0move(&___nl__im__94, nparser_priv0parse_expr(___ref___rec__0));
#line 369
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__94, ___get_global_const(80));
#line 369
if(___nl__bool__93){ goto label_28;}
#line 369
c_rt_lib0clear(&___nl__im__1);
#line 369
//clear ___nl__int__2;
#line 369
c_rt_lib0clear(&___nl__im__3);
#line 369
c_rt_lib0clear(&___nl__im__4);
#line 369
c_rt_lib0clear(&___nl__im__6);
#line 369
c_rt_lib0clear(&___nl__im__8);
#line 369
//clear ___nl__bool__9;
#line 369
c_rt_lib0clear(&___nl__im__44);
#line 369
c_rt_lib0clear(&___nl__im__85);
#line 369
//clear ___nl__bool__86;
#line 369
c_rt_lib0clear(&___nl__im__87);
#line 369
c_rt_lib0clear(&___nl__im__92);
#line 369
//clear ___nl__bool__93;
#line 369
return ___nl__im__94;
#line 369
label_28:
;
#line 369
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__94, ___get_global_const(80)));
#line 370
c_rt_lib0move(&___nl__im__95,___get_global_const(292));
#line 370
___nl__bool__96 = nparser_priv0eat(___ref___rec__0, ___nl__im__95);
#line 370
c_rt_lib0clear(&___nl__im__95);
#line 370
//clear ___nl__bool__96;
#line 371
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(3, ___get_global_const(514), ___nl__im__8, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__92));
#line 371
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__97));
#line 371
c_rt_lib0clear(&___nl__im__97);
#line 372
goto label_3;
#line 372
label_27:
;
#line 372
c_rt_lib0move(&___nl__im__98,___get_global_const(917));
#line 372
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__98);
#line 372
c_rt_lib0clear(&___nl__im__98);
#line 372
___nl__bool__9 = !___nl__bool__9;
#line 372
if(___nl__bool__9){ goto label_29;}
#line 373
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(900), ___nl__im__1));
#line 374
goto label_3;
#line 374
label_29:
;
#line 374
c_rt_lib0move(&___nl__im__99,___get_global_const(191));
#line 374
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__99);
#line 374
c_rt_lib0clear(&___nl__im__99);
#line 374
___nl__bool__9 = !___nl__bool__9;
#line 374
if(___nl__bool__9){ goto label_30;}
#line 375
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(901), ___nl__im__1));
#line 376
goto label_3;
#line 376
label_30:
;
#line 377
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__1));
#line 377
c_rt_lib0clear(&___nl__im__1);
#line 377
//clear ___nl__int__2;
#line 377
c_rt_lib0clear(&___nl__im__3);
#line 377
c_rt_lib0clear(&___nl__im__4);
#line 377
c_rt_lib0clear(&___nl__im__6);
#line 377
c_rt_lib0clear(&___nl__im__8);
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
return ___nl__im__100;
#line 378
goto label_3;
#line 378
label_3:
;
#line 378
//clear ___nl__bool__9;
#line 378
c_rt_lib0clear(&___nl__im__44);
#line 378
c_rt_lib0clear(&___nl__im__85);
#line 378
//clear ___nl__bool__86;
#line 378
c_rt_lib0clear(&___nl__im__87);
#line 378
c_rt_lib0clear(&___nl__im__92);
#line 378
//clear ___nl__bool__93;
#line 378
c_rt_lib0clear(&___nl__im__94);
#line 378
c_rt_lib0clear(&___nl__im__100);
#line 380
___nl__rec_ptr__103 = &((*___ref___rec__0).state0field);
#line 380
c_rt_lib0move(&___nl__im__102, ntokenizer0get_place(___nl__rec_ptr__103));
#line 380
___nl__rec_ptr__103 = NULL;
#line 380
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__4, ___get_global_const(932), ___nl__im__102));
#line 380
c_rt_lib0clear(&___nl__im__102);
#line 382
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 382
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__101, ___get_global_const(219), ___nl__im__3, ___get_global_const(95), ___nl__im__104));
#line 382
c_rt_lib0clear(&___nl__im__101);
#line 382
c_rt_lib0clear(&___nl__im__104);
#line 382
c_rt_lib0clear(&___nl__im__3);
#line 382
c_rt_lib0clear(&___nl__im__4);
#line 382
c_rt_lib0clear(&___nl__im__6);
#line 382
c_rt_lib0clear(&___nl__im__8);
#line 324
goto label_2;
#line 324
label_1:
;
#line 385
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(0));
#line 385
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
#line 390
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 390
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 390
___nl__rec_ptr__4 = NULL;
#line 391
c_rt_lib0move(&___nl__im__6,___get_global_const(420));
#line 391
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 391
c_rt_lib0clear(&___nl__im__6);
#line 391
___nl__bool__5 = !___nl__bool__5;
#line 391
if(___nl__bool__5){ goto label_2;}
#line 392
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_expr(___ref___rec__0));
#line 392
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(80));
#line 392
if(___nl__bool__8){ goto label_3;}
#line 392
//clear ___nl__int__1;
#line 392
c_rt_lib0clear(&___nl__im__2);
#line 392
c_rt_lib0clear(&___nl__im__3);
#line 392
//clear ___nl__bool__5;
#line 392
c_rt_lib0clear(&___nl__im__7);
#line 392
//clear ___nl__bool__8;
#line 392
return ___nl__im__9;
#line 392
label_3:
;
#line 392
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(80)));
#line 393
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(894), ___nl__im__7));
#line 394
c_rt_lib0move(&___nl__im__10,___get_global_const(299));
#line 394
___nl__bool__11 = nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 394
c_rt_lib0clear(&___nl__im__10);
#line 394
//clear ___nl__bool__11;
#line 395
goto label_1;
#line 395
label_2:
;
#line 395
___nl__rec_ptr__12 = &((*___ref___rec__0).state0field);
#line 395
c_rt_lib0move(&___nl__im__13,___get_global_const(291));
#line 395
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__12, ___nl__im__13);
#line 395
___nl__rec_ptr__12 = NULL;
#line 395
c_rt_lib0clear(&___nl__im__13);
#line 395
___nl__bool__5 = !___nl__bool__5;
#line 395
if(___nl__bool__5){ goto label_4;}
#line 396
c_rt_lib0move(&___nl__im__16, nparser_priv0parse_hash(___ref___rec__0));
#line 396
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(80));
#line 396
if(___nl__bool__15){ goto label_5;}
#line 396
//clear ___nl__int__1;
#line 396
c_rt_lib0clear(&___nl__im__2);
#line 396
c_rt_lib0clear(&___nl__im__3);
#line 396
//clear ___nl__bool__5;
#line 396
c_rt_lib0clear(&___nl__im__7);
#line 396
//clear ___nl__bool__8;
#line 396
c_rt_lib0clear(&___nl__im__9);
#line 396
c_rt_lib0clear(&___nl__im__14);
#line 396
//clear ___nl__bool__15;
#line 396
return ___nl__im__16;
#line 396
label_5:
;
#line 396
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(80)));
#line 397
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__14));
#line 398
goto label_1;
#line 398
label_4:
;
#line 398
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 398
c_rt_lib0move(&___nl__im__18,___get_global_const(297));
#line 398
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__17, ___nl__im__18);
#line 398
___nl__rec_ptr__17 = NULL;
#line 398
c_rt_lib0clear(&___nl__im__18);
#line 398
___nl__bool__5 = !___nl__bool__5;
#line 398
if(___nl__bool__5){ goto label_6;}
#line 399
c_rt_lib0move(&___nl__im__21, nparser_priv0parse_arr(___ref___rec__0));
#line 399
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(80));
#line 399
if(___nl__bool__20){ goto label_7;}
#line 399
//clear ___nl__int__1;
#line 399
c_rt_lib0clear(&___nl__im__2);
#line 399
c_rt_lib0clear(&___nl__im__3);
#line 399
//clear ___nl__bool__5;
#line 399
c_rt_lib0clear(&___nl__im__7);
#line 399
//clear ___nl__bool__8;
#line 399
c_rt_lib0clear(&___nl__im__9);
#line 399
c_rt_lib0clear(&___nl__im__14);
#line 399
//clear ___nl__bool__15;
#line 399
c_rt_lib0clear(&___nl__im__16);
#line 399
c_rt_lib0clear(&___nl__im__19);
#line 399
//clear ___nl__bool__20;
#line 399
return ___nl__im__21;
#line 399
label_7:
;
#line 399
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(80)));
#line 400
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__19));
#line 401
goto label_1;
#line 401
label_6:
;
#line 401
___nl__rec_ptr__22 = &((*___ref___rec__0).state0field);
#line 401
c_rt_lib0move(&___nl__im__23,___get_global_const(484));
#line 401
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__22, ___nl__im__23);
#line 401
___nl__rec_ptr__22 = NULL;
#line 401
c_rt_lib0clear(&___nl__im__23);
#line 401
___nl__bool__5 = !___nl__bool__5;
#line 401
if(___nl__bool__5){ goto label_8;}
#line 402
c_rt_lib0move(&___nl__im__26, nparser_priv0parse_variant(___ref___rec__0));
#line 402
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(80));
#line 402
if(___nl__bool__25){ goto label_9;}
#line 402
//clear ___nl__int__1;
#line 402
c_rt_lib0clear(&___nl__im__2);
#line 402
c_rt_lib0clear(&___nl__im__3);
#line 402
//clear ___nl__bool__5;
#line 402
c_rt_lib0clear(&___nl__im__7);
#line 402
//clear ___nl__bool__8;
#line 402
c_rt_lib0clear(&___nl__im__9);
#line 402
c_rt_lib0clear(&___nl__im__14);
#line 402
//clear ___nl__bool__15;
#line 402
c_rt_lib0clear(&___nl__im__16);
#line 402
c_rt_lib0clear(&___nl__im__19);
#line 402
//clear ___nl__bool__20;
#line 402
c_rt_lib0clear(&___nl__im__21);
#line 402
c_rt_lib0clear(&___nl__im__24);
#line 402
//clear ___nl__bool__25;
#line 402
return ___nl__im__26;
#line 402
label_9:
;
#line 402
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(80)));
#line 403
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__24));
#line 404
goto label_1;
#line 404
label_8:
;
#line 404
___nl__rec_ptr__27 = &((*___ref___rec__0).state0field);
#line 404
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_const(996)));
#line 404
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__27, ___nl__im__28);
#line 404
___nl__rec_ptr__27 = NULL;
#line 404
c_rt_lib0clear(&___nl__im__28);
#line 404
___nl__bool__5 = !___nl__bool__5;
#line 404
if(___nl__bool__5){ goto label_10;}
#line 405
___nl__rec_ptr__30 = &((*___ref___rec__0).state0field);
#line 405
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(996)));
#line 405
c_rt_lib0move(&___nl__im__29, ntokenizer0eat_type(___nl__rec_ptr__30, ___nl__im__31));
#line 405
___nl__rec_ptr__30 = NULL;
#line 405
c_rt_lib0clear(&___nl__im__31);
#line 407
c_rt_lib0move(&___nl__im__33, string_utils0get_integer(___nl__im__29));
#line 407
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(80));
#line 407
if(___nl__bool__34){ goto label_12;}
#line 409
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(79));
#line 409
if(___nl__bool__34){ goto label_13;}
#line 409
c_rt_lib0move(&___nl__im__35,___get_global_const(16));
#line 409
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__35, ___nl__im__33));
#line 409
nl_die_arg(___nl__im__35);
#line 407
label_12:
;
#line 407
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(80)));
#line 407
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 408
___nl__int__32 = ___nl__int__36;
#line 409
goto label_11;
#line 409
label_13:
;
#line 409
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(79)));
#line 409
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 410
c_rt_lib0move(&___nl__im__42,___get_global_const(997));
#line 410
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__29));
#line 410
c_rt_lib0clear(&___nl__im__42);
#line 410
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__41));
#line 410
c_rt_lib0clear(&___nl__im__41);
#line 410
//clear ___nl__int__1;
#line 410
c_rt_lib0clear(&___nl__im__2);
#line 410
c_rt_lib0clear(&___nl__im__3);
#line 410
//clear ___nl__bool__5;
#line 410
c_rt_lib0clear(&___nl__im__7);
#line 410
//clear ___nl__bool__8;
#line 410
c_rt_lib0clear(&___nl__im__9);
#line 410
c_rt_lib0clear(&___nl__im__14);
#line 410
//clear ___nl__bool__15;
#line 410
c_rt_lib0clear(&___nl__im__16);
#line 410
c_rt_lib0clear(&___nl__im__19);
#line 410
//clear ___nl__bool__20;
#line 410
c_rt_lib0clear(&___nl__im__21);
#line 410
c_rt_lib0clear(&___nl__im__24);
#line 410
//clear ___nl__bool__25;
#line 410
c_rt_lib0clear(&___nl__im__26);
#line 410
c_rt_lib0clear(&___nl__im__29);
#line 410
//clear ___nl__int__32;
#line 410
c_rt_lib0clear(&___nl__im__33);
#line 410
//clear ___nl__bool__34;
#line 410
c_rt_lib0clear(&___nl__im__35);
#line 410
//clear ___nl__int__36;
#line 410
c_rt_lib0clear(&___nl__im__37);
#line 410
c_rt_lib0clear(&___nl__im__38);
#line 410
c_rt_lib0clear(&___nl__im__39);
#line 410
return ___nl__im__40;
#line 411
goto label_11;
#line 411
label_11:
;
#line 412
c_rt_lib0move(&___nl__im__43, c_rt_lib0int_new(___nl__int__32));
#line 412
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__im__43));
#line 412
c_rt_lib0clear(&___nl__im__43);
#line 413
goto label_1;
#line 413
label_10:
;
#line 413
___nl__rec_ptr__45 = &((*___ref___rec__0).state0field);
#line 413
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(998)));
#line 413
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__45, ___nl__im__46);
#line 413
___nl__rec_ptr__45 = NULL;
#line 413
c_rt_lib0clear(&___nl__im__46);
#line 413
if(___nl__bool__5){ goto label_15;}
#line 413
___nl__rec_ptr__47 = &((*___ref___rec__0).state0field);
#line 413
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 413
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__47, ___nl__im__48);
#line 413
___nl__rec_ptr__47 = NULL;
#line 413
c_rt_lib0clear(&___nl__im__48);
#line 413
label_15:
;
#line 413
//clear ___nl__bool__44;
#line 413
___nl__bool__5 = !___nl__bool__5;
#line 413
if(___nl__bool__5){ goto label_14;}
#line 414
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(0));
#line 414
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(1, ___get_global_const(130), ___nl__im__50));
#line 414
c_rt_lib0clear(&___nl__im__50);
#line 415
label_17:
;
#line 415
___nl__rec_ptr__52 = &((*___ref___rec__0).state0field);
#line 415
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_none(___get_global_const(998)));
#line 415
___nl__bool__51 = ntokenizer0is_type(___nl__rec_ptr__52, ___nl__im__53);
#line 415
___nl__rec_ptr__52 = NULL;
#line 415
c_rt_lib0clear(&___nl__im__53);
#line 415
___nl__bool__51 = !___nl__bool__51;
#line 415
if(___nl__bool__51){ goto label_16;}
#line 416
c_rt_lib0move(&___nl__im__54,___get_global_const(130));
#line 416
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_ref_hash(___nl__im__49, ___nl__im__54));
#line 416
___nl__rec_ptr__56 = &((*___ref___rec__0).state0field);
#line 416
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_none(___get_global_const(998)));
#line 416
c_rt_lib0move(&___nl__im__55, ntokenizer0eat_type(___nl__rec_ptr__56, ___nl__im__57));
#line 416
___nl__rec_ptr__56 = NULL;
#line 416
c_rt_lib0clear(&___nl__im__57);
#line 416
c_rt_lib0delete(array0push(&___nl__im__54, ___nl__im__55));
#line 416
c_rt_lib0move(&___nl__string__58,___get_global_const(130));
#line 416
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__49, ___nl__string__58, ___nl__im__54));
#line 416
c_rt_lib0clear(&___nl__im__54);
#line 416
c_rt_lib0clear(&___nl__im__55);
#line 416
c_rt_lib0clear(&___nl__string__58);
#line 417
goto label_17;
#line 417
label_16:
;
#line 418
___nl__rec_ptr__60 = &((*___ref___rec__0).state0field);
#line 418
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 418
___nl__bool__59 = ntokenizer0is_type(___nl__rec_ptr__60, ___nl__im__61);
#line 418
___nl__rec_ptr__60 = NULL;
#line 418
c_rt_lib0clear(&___nl__im__61);
#line 418
___nl__bool__59 = !___nl__bool__59;
#line 418
if(___nl__bool__59){ goto label_19;}
#line 419
c_rt_lib0move(&___nl__im__62,___get_global_const(130));
#line 419
c_rt_lib0move(&___nl__im__62, c_rt_lib0get_ref_hash(___nl__im__49, ___nl__im__62));
#line 419
___nl__rec_ptr__64 = &((*___ref___rec__0).state0field);
#line 419
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 419
c_rt_lib0move(&___nl__im__63, ntokenizer0eat_type(___nl__rec_ptr__64, ___nl__im__65));
#line 419
___nl__rec_ptr__64 = NULL;
#line 419
c_rt_lib0clear(&___nl__im__65);
#line 419
c_rt_lib0delete(array0push(&___nl__im__62, ___nl__im__63));
#line 419
c_rt_lib0move(&___nl__string__66,___get_global_const(130));
#line 419
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__49, ___nl__string__66, ___nl__im__62));
#line 419
c_rt_lib0clear(&___nl__im__62);
#line 419
c_rt_lib0clear(&___nl__im__63);
#line 419
c_rt_lib0clear(&___nl__string__66);
#line 420
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_none(___get_global_const(932)));
#line 420
c_rt_lib0copy(&___nl__im__67, ___nl__im__68);
#line 420
c_rt_lib0hash_set_value_dec(&___nl__im__49, ___get_global_const(934), ___nl__im__67);
#line 420
c_rt_lib0clear(&___nl__im__67);
#line 420
c_rt_lib0clear(&___nl__im__68);
#line 421
goto label_18;
#line 421
label_19:
;
#line 422
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_const(933)));
#line 422
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 422
c_rt_lib0hash_set_value_dec(&___nl__im__49, ___get_global_const(934), ___nl__im__69);
#line 422
c_rt_lib0clear(&___nl__im__69);
#line 422
c_rt_lib0clear(&___nl__im__70);
#line 423
goto label_18;
#line 423
label_18:
;
#line 423
//clear ___nl__bool__59;
#line 424
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(527), ___nl__im__49));
#line 425
goto label_1;
#line 425
label_14:
;
#line 425
___nl__rec_ptr__71 = &((*___ref___rec__0).state0field);
#line 425
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 425
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__71, ___nl__im__72);
#line 425
___nl__rec_ptr__71 = NULL;
#line 425
c_rt_lib0clear(&___nl__im__72);
#line 425
___nl__bool__5 = !___nl__bool__5;
#line 425
if(___nl__bool__5){ goto label_20;}
#line 426
c_rt_lib0move(&___nl__im__74, nparser_priv0parse_label(___ref___rec__0));
#line 426
___nl__bool__73 = c_rt_lib0priv_is(___nl__im__74, ___get_global_const(80));
#line 426
if(___nl__bool__73){ goto label_21;}
#line 426
//clear ___nl__int__1;
#line 426
c_rt_lib0clear(&___nl__im__2);
#line 426
c_rt_lib0clear(&___nl__im__3);
#line 426
//clear ___nl__bool__5;
#line 426
c_rt_lib0clear(&___nl__im__7);
#line 426
//clear ___nl__bool__8;
#line 426
c_rt_lib0clear(&___nl__im__9);
#line 426
c_rt_lib0clear(&___nl__im__14);
#line 426
//clear ___nl__bool__15;
#line 426
c_rt_lib0clear(&___nl__im__16);
#line 426
c_rt_lib0clear(&___nl__im__19);
#line 426
//clear ___nl__bool__20;
#line 426
c_rt_lib0clear(&___nl__im__21);
#line 426
c_rt_lib0clear(&___nl__im__24);
#line 426
//clear ___nl__bool__25;
#line 426
c_rt_lib0clear(&___nl__im__26);
#line 426
c_rt_lib0clear(&___nl__im__29);
#line 426
//clear ___nl__int__32;
#line 426
c_rt_lib0clear(&___nl__im__33);
#line 426
//clear ___nl__bool__34;
#line 426
c_rt_lib0clear(&___nl__im__35);
#line 426
//clear ___nl__int__36;
#line 426
c_rt_lib0clear(&___nl__im__37);
#line 426
c_rt_lib0clear(&___nl__im__38);
#line 426
c_rt_lib0clear(&___nl__im__39);
#line 426
c_rt_lib0clear(&___nl__im__40);
#line 426
c_rt_lib0clear(&___nl__im__49);
#line 426
//clear ___nl__bool__51;
#line 426
//clear ___nl__bool__73;
#line 426
return ___nl__im__74;
#line 426
label_21:
;
#line 426
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__74, ___get_global_const(80)));
#line 427
goto label_1;
#line 427
label_20:
;
#line 427
___nl__rec_ptr__76 = &((*___ref___rec__0).state0field);
#line 427
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_none(___get_global_const(999)));
#line 427
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__76, ___nl__im__77);
#line 427
___nl__rec_ptr__76 = NULL;
#line 427
c_rt_lib0clear(&___nl__im__77);
#line 427
___nl__bool__75 = !___nl__bool__5;
#line 427
if(___nl__bool__75){ goto label_23;}
#line 427
c_rt_lib0move(&___nl__im__78, nast0get_unary_ops());
#line 428
___nl__rec_ptr__80 = &((*___ref___rec__0).state0field);
#line 428
c_rt_lib0move(&___nl__im__79, ntokenizer0get_token(___nl__rec_ptr__80));
#line 428
___nl__rec_ptr__80 = NULL;
#line 428
___nl__bool__5 = hash0has_key(___nl__im__78, ___nl__im__79);
#line 428
c_rt_lib0clear(&___nl__im__78);
#line 428
c_rt_lib0clear(&___nl__im__79);
#line 428
label_23:
;
#line 428
//clear ___nl__bool__75;
#line 428
___nl__bool__5 = !___nl__bool__5;
#line 428
if(___nl__bool__5){ goto label_22;}
#line 429
___nl__rec_ptr__82 = &((*___ref___rec__0).state0field);
#line 429
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_none(___get_global_const(999)));
#line 429
c_rt_lib0move(&___nl__im__81, ntokenizer0eat_type(___nl__rec_ptr__82, ___nl__im__83));
#line 429
___nl__rec_ptr__82 = NULL;
#line 429
c_rt_lib0clear(&___nl__im__83);
#line 431
c_rt_lib0move(&___nl__im__86,___get_global_const(306));
#line 431
___nl__bool__85 = c_rt_lib0eq(___nl__im__81, ___nl__im__86);
#line 431
c_rt_lib0clear(&___nl__im__86);
#line 431
___nl__bool__85 = !___nl__bool__85;
#line 431
if(___nl__bool__85){ goto label_25;}
#line 432
___nl__rec_ptr__88 = &((*___ref___rec__0).state0field);
#line 432
c_rt_lib0move(&___nl__im__87, ntokenizer0get_place(___nl__rec_ptr__88));
#line 432
___nl__rec_ptr__88 = NULL;
#line 433
c_rt_lib0move(&___nl__im__90, nparser_priv0parse_fun_label(___ref___rec__0));
#line 433
c_rt_lib0move(&___nl__im__89, c_rt_lib0ov_mk_arg(___get_global_const(899), ___nl__im__90));
#line 433
c_rt_lib0clear(&___nl__im__90);
#line 434
___nl__rec_ptr__92 = &((*___ref___rec__0).state0field);
#line 434
c_rt_lib0move(&___nl__im__91, ntokenizer0get_place(___nl__rec_ptr__92));
#line 434
___nl__rec_ptr__92 = NULL;
#line 436
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__87, ___get_global_const(932), ___nl__im__91));
#line 441
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 441
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__93, ___get_global_const(219), ___nl__im__89, ___get_global_const(95), ___nl__im__94));
#line 441
c_rt_lib0clear(&___nl__im__93);
#line 441
c_rt_lib0clear(&___nl__im__94);
#line 443
goto label_24;
#line 443
label_25:
;
#line 444
c_rt_lib0move(&___nl__im__99, nast0get_unary_ops());
#line 444
c_rt_lib0move(&___nl__im__98, hash0get_value(___nl__im__99, ___nl__im__81));
#line 444
c_rt_lib0clear(&___nl__im__99);
#line 444
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_const(913)));
#line 444
___nl__int__97 = getIntFromImm(___nl__im__100);
#line 444
c_rt_lib0clear(&___nl__im__98);
#line 444
c_rt_lib0clear(&___nl__im__100);
#line 444
c_rt_lib0move(&___nl__im__96, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__97));
#line 444
//clear ___nl__int__97;
#line 444
___nl__bool__95 = c_rt_lib0priv_is(___nl__im__96, ___get_global_const(80));
#line 444
if(___nl__bool__95){ goto label_26;}
#line 444
//clear ___nl__int__1;
#line 444
c_rt_lib0clear(&___nl__im__2);
#line 444
c_rt_lib0clear(&___nl__im__3);
#line 444
//clear ___nl__bool__5;
#line 444
c_rt_lib0clear(&___nl__im__7);
#line 444
//clear ___nl__bool__8;
#line 444
c_rt_lib0clear(&___nl__im__9);
#line 444
c_rt_lib0clear(&___nl__im__14);
#line 444
//clear ___nl__bool__15;
#line 444
c_rt_lib0clear(&___nl__im__16);
#line 444
c_rt_lib0clear(&___nl__im__19);
#line 444
//clear ___nl__bool__20;
#line 444
c_rt_lib0clear(&___nl__im__21);
#line 444
c_rt_lib0clear(&___nl__im__24);
#line 444
//clear ___nl__bool__25;
#line 444
c_rt_lib0clear(&___nl__im__26);
#line 444
c_rt_lib0clear(&___nl__im__29);
#line 444
//clear ___nl__int__32;
#line 444
c_rt_lib0clear(&___nl__im__33);
#line 444
//clear ___nl__bool__34;
#line 444
c_rt_lib0clear(&___nl__im__35);
#line 444
//clear ___nl__int__36;
#line 444
c_rt_lib0clear(&___nl__im__37);
#line 444
c_rt_lib0clear(&___nl__im__38);
#line 444
c_rt_lib0clear(&___nl__im__39);
#line 444
c_rt_lib0clear(&___nl__im__40);
#line 444
c_rt_lib0clear(&___nl__im__49);
#line 444
//clear ___nl__bool__51;
#line 444
//clear ___nl__bool__73;
#line 444
c_rt_lib0clear(&___nl__im__74);
#line 444
c_rt_lib0clear(&___nl__im__81);
#line 444
c_rt_lib0clear(&___nl__im__84);
#line 444
//clear ___nl__bool__85;
#line 444
c_rt_lib0clear(&___nl__im__87);
#line 444
c_rt_lib0clear(&___nl__im__89);
#line 444
c_rt_lib0clear(&___nl__im__91);
#line 444
//clear ___nl__bool__95;
#line 444
return ___nl__im__96;
#line 444
label_26:
;
#line 444
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__96, ___get_global_const(80)));
#line 445
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(219)));
#line 445
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(898));
#line 445
c_rt_lib0clear(&___nl__im__102);
#line 445
___nl__bool__101 = !___nl__bool__101;
#line 445
if(___nl__bool__101){ goto label_28;}
#line 445
c_rt_lib0move(&___nl__im__103,___get_global_const(1000));
#line 445
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__103));
#line 445
c_rt_lib0clear(&___nl__im__103);
#line 445
goto label_27;
#line 445
label_28:
;
#line 445
label_27:
;
#line 445
//clear ___nl__bool__101;
#line 446
goto label_24;
#line 446
label_24:
;
#line 446
//clear ___nl__bool__85;
#line 446
c_rt_lib0clear(&___nl__im__87);
#line 446
c_rt_lib0clear(&___nl__im__89);
#line 446
c_rt_lib0clear(&___nl__im__91);
#line 446
//clear ___nl__bool__95;
#line 446
c_rt_lib0clear(&___nl__im__96);
#line 447
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_mk(2, ___get_global_const(514), ___nl__im__81, ___get_global_const(224), ___nl__im__84));
#line 447
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(898), ___nl__im__104));
#line 447
c_rt_lib0clear(&___nl__im__104);
#line 448
goto label_1;
#line 448
label_22:
;
#line 448
___nl__rec_ptr__105 = &((*___ref___rec__0).state0field);
#line 448
c_rt_lib0move(&___nl__im__106, c_rt_lib0ov_mk_none(___get_global_const(1001)));
#line 448
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__105, ___nl__im__106);
#line 448
___nl__rec_ptr__105 = NULL;
#line 448
c_rt_lib0clear(&___nl__im__106);
#line 448
___nl__bool__5 = !___nl__bool__5;
#line 448
if(___nl__bool__5){ goto label_29;}
#line 449
c_rt_lib0move(&___nl__im__108,___get_global_const(535));
#line 449
___nl__bool__107 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__108);
#line 449
c_rt_lib0clear(&___nl__im__108);
#line 449
___nl__bool__107 = !___nl__bool__107;
#line 449
if(___nl__bool__107){ goto label_31;}
#line 450
c_rt_lib0move(&___nl__im__110,___get_global_const(181));
#line 450
c_rt_lib0move(&___nl__im__111, nparser_priv0get_value_nop(___ref___rec__0));
#line 450
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__110, ___get_global_const(463), ___nl__im__111));
#line 450
c_rt_lib0clear(&___nl__im__110);
#line 450
c_rt_lib0clear(&___nl__im__111);
#line 450
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__109));
#line 450
c_rt_lib0clear(&___nl__im__109);
#line 451
goto label_30;
#line 451
label_31:
;
#line 451
c_rt_lib0move(&___nl__im__112,___get_global_const(536));
#line 451
___nl__bool__107 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__112);
#line 451
c_rt_lib0clear(&___nl__im__112);
#line 451
___nl__bool__107 = !___nl__bool__107;
#line 451
if(___nl__bool__107){ goto label_32;}
#line 452
c_rt_lib0move(&___nl__im__114,___get_global_const(182));
#line 452
c_rt_lib0move(&___nl__im__115, nparser_priv0get_value_nop(___ref___rec__0));
#line 452
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__114, ___get_global_const(463), ___nl__im__115));
#line 452
c_rt_lib0clear(&___nl__im__114);
#line 452
c_rt_lib0clear(&___nl__im__115);
#line 452
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__113));
#line 452
c_rt_lib0clear(&___nl__im__113);
#line 453
goto label_30;
#line 453
label_32:
;
#line 454
c_rt_lib0move(&___nl__im__118,___get_global_const(1002));
#line 454
c_rt_lib0move(&___nl__im__119, string0lf());
#line 454
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__119));
#line 454
c_rt_lib0clear(&___nl__im__118);
#line 454
c_rt_lib0clear(&___nl__im__119);
#line 454
___nl__rec_ptr__121 = &((*___ref___rec__0).state0field);
#line 454
c_rt_lib0move(&___nl__im__120, ntokenizer0info(___nl__rec_ptr__121));
#line 454
___nl__rec_ptr__121 = NULL;
#line 454
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__120));
#line 454
c_rt_lib0clear(&___nl__im__117);
#line 454
c_rt_lib0clear(&___nl__im__120);
#line 455
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__116));
#line 456
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__116));
#line 456
//clear ___nl__int__1;
#line 456
c_rt_lib0clear(&___nl__im__2);
#line 456
c_rt_lib0clear(&___nl__im__3);
#line 456
//clear ___nl__bool__5;
#line 456
c_rt_lib0clear(&___nl__im__7);
#line 456
//clear ___nl__bool__8;
#line 456
c_rt_lib0clear(&___nl__im__9);
#line 456
c_rt_lib0clear(&___nl__im__14);
#line 456
//clear ___nl__bool__15;
#line 456
c_rt_lib0clear(&___nl__im__16);
#line 456
c_rt_lib0clear(&___nl__im__19);
#line 456
//clear ___nl__bool__20;
#line 456
c_rt_lib0clear(&___nl__im__21);
#line 456
c_rt_lib0clear(&___nl__im__24);
#line 456
//clear ___nl__bool__25;
#line 456
c_rt_lib0clear(&___nl__im__26);
#line 456
c_rt_lib0clear(&___nl__im__29);
#line 456
//clear ___nl__int__32;
#line 456
c_rt_lib0clear(&___nl__im__33);
#line 456
//clear ___nl__bool__34;
#line 456
c_rt_lib0clear(&___nl__im__35);
#line 456
//clear ___nl__int__36;
#line 456
c_rt_lib0clear(&___nl__im__37);
#line 456
c_rt_lib0clear(&___nl__im__38);
#line 456
c_rt_lib0clear(&___nl__im__39);
#line 456
c_rt_lib0clear(&___nl__im__40);
#line 456
c_rt_lib0clear(&___nl__im__49);
#line 456
//clear ___nl__bool__51;
#line 456
//clear ___nl__bool__73;
#line 456
c_rt_lib0clear(&___nl__im__74);
#line 456
c_rt_lib0clear(&___nl__im__81);
#line 456
c_rt_lib0clear(&___nl__im__84);
#line 456
//clear ___nl__bool__107;
#line 456
c_rt_lib0clear(&___nl__im__116);
#line 456
return ___nl__im__122;
#line 457
goto label_30;
#line 457
label_30:
;
#line 457
//clear ___nl__bool__107;
#line 457
c_rt_lib0clear(&___nl__im__116);
#line 457
c_rt_lib0clear(&___nl__im__122);
#line 458
goto label_1;
#line 458
label_29:
;
#line 459
c_rt_lib0move(&___nl__im__125,___get_global_const(1003));
#line 459
c_rt_lib0move(&___nl__im__126, string0lf());
#line 459
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__125, ___nl__im__126));
#line 459
c_rt_lib0clear(&___nl__im__125);
#line 459
c_rt_lib0clear(&___nl__im__126);
#line 459
___nl__rec_ptr__128 = &((*___ref___rec__0).state0field);
#line 459
c_rt_lib0move(&___nl__im__127, ntokenizer0info(___nl__rec_ptr__128));
#line 459
___nl__rec_ptr__128 = NULL;
#line 459
c_rt_lib0move(&___nl__im__123, c_rt_lib0concat_new(___nl__im__124, ___nl__im__127));
#line 459
c_rt_lib0clear(&___nl__im__124);
#line 459
c_rt_lib0clear(&___nl__im__127);
#line 460
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__123));
#line 461
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__123));
#line 461
//clear ___nl__int__1;
#line 461
c_rt_lib0clear(&___nl__im__2);
#line 461
c_rt_lib0clear(&___nl__im__3);
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
return ___nl__im__129;
#line 462
goto label_1;
#line 462
label_1:
;
#line 462
//clear ___nl__bool__5;
#line 462
c_rt_lib0clear(&___nl__im__7);
#line 462
//clear ___nl__bool__8;
#line 462
c_rt_lib0clear(&___nl__im__9);
#line 462
c_rt_lib0clear(&___nl__im__14);
#line 462
//clear ___nl__bool__15;
#line 462
c_rt_lib0clear(&___nl__im__16);
#line 462
c_rt_lib0clear(&___nl__im__19);
#line 462
//clear ___nl__bool__20;
#line 462
c_rt_lib0clear(&___nl__im__21);
#line 462
c_rt_lib0clear(&___nl__im__24);
#line 462
//clear ___nl__bool__25;
#line 462
c_rt_lib0clear(&___nl__im__26);
#line 462
c_rt_lib0clear(&___nl__im__29);
#line 462
//clear ___nl__int__32;
#line 462
c_rt_lib0clear(&___nl__im__33);
#line 462
//clear ___nl__bool__34;
#line 462
c_rt_lib0clear(&___nl__im__35);
#line 462
//clear ___nl__int__36;
#line 462
c_rt_lib0clear(&___nl__im__37);
#line 462
c_rt_lib0clear(&___nl__im__38);
#line 462
c_rt_lib0clear(&___nl__im__39);
#line 462
c_rt_lib0clear(&___nl__im__40);
#line 462
c_rt_lib0clear(&___nl__im__49);
#line 462
//clear ___nl__bool__51;
#line 462
//clear ___nl__bool__73;
#line 462
c_rt_lib0clear(&___nl__im__74);
#line 462
c_rt_lib0clear(&___nl__im__81);
#line 462
c_rt_lib0clear(&___nl__im__84);
#line 462
c_rt_lib0clear(&___nl__im__123);
#line 462
c_rt_lib0clear(&___nl__im__129);
#line 464
___nl__rec_ptr__133 = &((*___ref___rec__0).state0field);
#line 464
c_rt_lib0move(&___nl__im__132, ntokenizer0get_place(___nl__rec_ptr__133));
#line 464
___nl__rec_ptr__133 = NULL;
#line 464
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__3, ___get_global_const(932), ___nl__im__132));
#line 464
c_rt_lib0clear(&___nl__im__132);
#line 466
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 466
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__131, ___get_global_const(219), ___nl__im__2, ___get_global_const(95), ___nl__im__134));
#line 466
c_rt_lib0clear(&___nl__im__131);
#line 466
c_rt_lib0clear(&___nl__im__134);
#line 468
c_rt_lib0move(&___nl__im__135, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__130, ___nl__int__1));
#line 468
//clear ___nl__int__1;
#line 468
c_rt_lib0clear(&___nl__im__2);
#line 468
c_rt_lib0clear(&___nl__im__3);
#line 468
c_rt_lib0clear(&___nl__im__130);
#line 468
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
#line 474
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 474
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 474
___nl__rec_ptr__4 = NULL;
#line 475
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 475
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 475
___nl__rec_ptr__6 = NULL;
#line 475
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__3, ___get_global_const(932), ___nl__im__5));
#line 475
c_rt_lib0clear(&___nl__im__3);
#line 475
c_rt_lib0clear(&___nl__im__5);
#line 477
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(875)));
#line 478
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 478
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__2, ___get_global_const(219), ___nl__im__7, ___get_global_const(95), ___nl__im__8));
#line 478
c_rt_lib0clear(&___nl__im__2);
#line 478
c_rt_lib0clear(&___nl__im__7);
#line 478
c_rt_lib0clear(&___nl__im__8);
#line 478
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
#line 485
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 485
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 485
___nl__rec_ptr__2 = NULL;
#line 485
___nl__bool__1 = !___nl__bool__1;
#line 485
if(___nl__bool__1){ goto label_2;}
#line 486
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 486
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__5));
#line 486
___nl__rec_ptr__5 = NULL;
#line 486
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__4));
#line 486
c_rt_lib0clear(&___nl__im__4);
#line 486
//clear ___nl__bool__1;
#line 486
return ___nl__im__3;
#line 487
goto label_1;
#line 487
label_2:
;
#line 488
c_rt_lib0move(&___nl__im__6,___get_global_const(1004));
#line 488
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__6));
#line 488
c_rt_lib0clear(&___nl__im__6);
#line 489
c_rt_lib0move(&___nl__im__8,___get_global_const(1004));
#line 489
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__8));
#line 489
c_rt_lib0clear(&___nl__im__8);
#line 489
//clear ___nl__bool__1;
#line 489
c_rt_lib0clear(&___nl__im__3);
#line 489
return ___nl__im__7;
#line 490
goto label_1;
#line 490
label_1:
;
#line 490
//clear ___nl__bool__1;
#line 490
c_rt_lib0clear(&___nl__im__3);
#line 490
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
#line 494
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 494
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 494
___nl__rec_ptr__2 = NULL;
#line 494
___nl__bool__1 = !___nl__bool__1;
#line 494
if(___nl__bool__1){ goto label_2;}
#line 495
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 495
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_text(___nl__rec_ptr__4));
#line 495
___nl__rec_ptr__4 = NULL;
#line 495
//clear ___nl__bool__1;
#line 495
return ___nl__im__3;
#line 496
goto label_1;
#line 496
label_2:
;
#line 497
c_rt_lib0move(&___nl__im__5,___get_global_const(1004));
#line 497
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__5));
#line 497
c_rt_lib0clear(&___nl__im__5);
#line 498
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 498
//clear ___nl__bool__1;
#line 498
c_rt_lib0clear(&___nl__im__3);
#line 498
return ___nl__im__6;
#line 499
goto label_1;
#line 499
label_1:
;
#line 499
//clear ___nl__bool__1;
#line 499
c_rt_lib0clear(&___nl__im__3);
#line 499
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
#line 503
c_rt_lib0move(&___nl__im__1,___get_global_const(484));
#line 503
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 503
c_rt_lib0clear(&___nl__im__1);
#line 503
//clear ___nl__bool__2;
#line 504
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_variant_label(___ref___rec__0));
#line 505
c_rt_lib0move(&___nl__im__4, nparser_priv0get_value_nop(___ref___rec__0));
#line 506
c_rt_lib0move(&___nl__im__6,___get_global_const(420));
#line 506
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 506
c_rt_lib0clear(&___nl__im__6);
#line 506
___nl__bool__5 = !___nl__bool__5;
#line 506
if(___nl__bool__5){ goto label_2;}
#line 507
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_expr(___ref___rec__0));
#line 507
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 507
if(___nl__bool__7){ goto label_3;}
#line 507
c_rt_lib0clear(&___nl__im__3);
#line 507
c_rt_lib0clear(&___nl__im__4);
#line 507
//clear ___nl__bool__5;
#line 507
//clear ___nl__bool__7;
#line 507
return ___nl__im__8;
#line 507
label_3:
;
#line 507
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 508
c_rt_lib0move(&___nl__im__9,___get_global_const(299));
#line 508
___nl__bool__10 = nparser_priv0eat(___ref___rec__0, ___nl__im__9);
#line 508
c_rt_lib0clear(&___nl__im__9);
#line 508
//clear ___nl__bool__10;
#line 509
goto label_1;
#line 509
label_2:
;
#line 510
c_rt_lib0move(&___nl__im__4, nparser_priv0get_value_nop(___ref___rec__0));
#line 511
goto label_1;
#line 511
label_1:
;
#line 511
//clear ___nl__bool__5;
#line 511
//clear ___nl__bool__7;
#line 511
c_rt_lib0clear(&___nl__im__8);
#line 512
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__3, ___get_global_const(463), ___nl__im__4));
#line 512
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__12));
#line 512
c_rt_lib0clear(&___nl__im__12);
#line 512
c_rt_lib0clear(&___nl__im__3);
#line 512
c_rt_lib0clear(&___nl__im__4);
#line 512
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
#line 516
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 516
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(463));
#line 516
c_rt_lib0clear(&___nl__im__3);
#line 516
___nl__bool__2 = !___nl__bool__2;
#line 516
if(___nl__bool__2){ goto label_2;}
#line 517
c_rt_lib0clear(&___nl__im__1);
#line 517
//clear ___nl__bool__2;
#line 517
return NULL;
#line 518
goto label_1;
#line 518
label_2:
;
#line 518
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 518
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(234));
#line 518
c_rt_lib0clear(&___nl__im__4);
#line 518
___nl__bool__2 = !___nl__bool__2;
#line 518
if(___nl__bool__2){ goto label_3;}
#line 519
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 519
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 519
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(234)));
#line 519
c_rt_lib0clear(&___nl__im__6);
#line 519
c_rt_lib0clear(&___nl__im__7);
#line 520
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 520
c_rt_lib0move(&___nl__im__13,___get_global_const(532));
#line 520
___nl__bool__8 = c_rt_lib0eq(___nl__im__12, ___nl__im__13);
#line 520
c_rt_lib0clear(&___nl__im__12);
#line 520
c_rt_lib0clear(&___nl__im__13);
#line 520
if(___nl__bool__8){ goto label_8;}
#line 520
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 520
c_rt_lib0move(&___nl__im__15,___get_global_const(891));
#line 520
___nl__bool__8 = c_rt_lib0eq(___nl__im__14, ___nl__im__15);
#line 520
c_rt_lib0clear(&___nl__im__14);
#line 520
c_rt_lib0clear(&___nl__im__15);
#line 520
label_8:
;
#line 520
//clear ___nl__bool__11;
#line 520
if(___nl__bool__8){ goto label_7;}
#line 520
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 520
c_rt_lib0move(&___nl__im__17,___get_global_const(892));
#line 520
___nl__bool__8 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 520
c_rt_lib0clear(&___nl__im__16);
#line 520
c_rt_lib0clear(&___nl__im__17);
#line 520
label_7:
;
#line 520
//clear ___nl__bool__10;
#line 520
if(___nl__bool__8){ goto label_6;}
#line 520
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(514)));
#line 520
c_rt_lib0move(&___nl__im__19,___get_global_const(893));
#line 520
___nl__bool__8 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 520
c_rt_lib0clear(&___nl__im__18);
#line 520
c_rt_lib0clear(&___nl__im__19);
#line 520
label_6:
;
#line 520
//clear ___nl__bool__9;
#line 520
___nl__bool__8 = !___nl__bool__8;
#line 520
if(___nl__bool__8){ goto label_5;}
#line 521
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(274)));
#line 521
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__20));
#line 521
c_rt_lib0clear(&___nl__im__20);
#line 522
c_rt_lib0clear(&___nl__im__1);
#line 522
//clear ___nl__bool__2;
#line 522
c_rt_lib0clear(&___nl__im__5);
#line 522
//clear ___nl__bool__8;
#line 522
return NULL;
#line 523
goto label_4;
#line 523
label_5:
;
#line 523
label_4:
;
#line 523
//clear ___nl__bool__8;
#line 524
goto label_1;
#line 524
label_3:
;
#line 524
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 524
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(894));
#line 524
c_rt_lib0clear(&___nl__im__21);
#line 524
___nl__bool__2 = !___nl__bool__2;
#line 524
if(___nl__bool__2){ goto label_9;}
#line 525
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 525
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 525
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(894)));
#line 525
c_rt_lib0clear(&___nl__im__23);
#line 525
c_rt_lib0clear(&___nl__im__24);
#line 525
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__22));
#line 525
c_rt_lib0clear(&___nl__im__22);
#line 526
c_rt_lib0clear(&___nl__im__1);
#line 526
//clear ___nl__bool__2;
#line 526
c_rt_lib0clear(&___nl__im__5);
#line 526
return NULL;
#line 527
goto label_1;
#line 527
label_9:
;
#line 527
label_1:
;
#line 527
//clear ___nl__bool__2;
#line 527
c_rt_lib0clear(&___nl__im__5);
#line 528
c_rt_lib0move(&___nl__im__25,___get_global_const(1005));
#line 528
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__25));
#line 528
c_rt_lib0clear(&___nl__im__25);
#line 528
c_rt_lib0clear(&___nl__im__1);
#line 528
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
#line 532
c_rt_lib0move(&___nl__im__1,___get_global_const(484));
#line 532
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 532
c_rt_lib0clear(&___nl__im__1);
#line 532
//clear ___nl__bool__2;
#line 533
c_rt_lib0move(&___nl__im__4, nparser_priv0parse_variant_label(___ref___rec__0));
#line 533
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 533
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(168), ___nl__im__4, ___get_global_const(219), ___nl__im__5));
#line 533
c_rt_lib0clear(&___nl__im__4);
#line 533
c_rt_lib0clear(&___nl__im__5);
#line 534
c_rt_lib0move(&___nl__im__7,___get_global_const(420));
#line 534
___nl__bool__6 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__7);
#line 534
c_rt_lib0clear(&___nl__im__7);
#line 534
___nl__bool__6 = !___nl__bool__6;
#line 534
if(___nl__bool__6){ goto label_2;}
#line 535
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 535
c_rt_lib0move(&___nl__im__10,___get_global_const(463));
#line 535
___nl__bool__8 = ntokenizer0next_is(___nl__rec_ptr__9, ___nl__im__10);
#line 535
___nl__rec_ptr__9 = NULL;
#line 535
c_rt_lib0clear(&___nl__im__10);
#line 535
___nl__bool__8 = !___nl__bool__8;
#line 535
if(___nl__bool__8){ goto label_4;}
#line 536
c_rt_lib0move(&___nl__im__14, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 536
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 536
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(452), ___nl__im__14, ___get_global_const(266), ___nl__im__15));
#line 536
c_rt_lib0clear(&___nl__im__14);
#line 536
c_rt_lib0clear(&___nl__im__15);
#line 536
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__13));
#line 536
c_rt_lib0clear(&___nl__im__13);
#line 536
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 536
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(219), ___nl__im__11);
#line 536
c_rt_lib0clear(&___nl__im__11);
#line 536
c_rt_lib0clear(&___nl__im__12);
#line 537
goto label_3;
#line 537
label_4:
;
#line 538
c_rt_lib0move(&___nl__im__19, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 538
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 538
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(452), ___nl__im__19, ___get_global_const(266), ___nl__im__20));
#line 538
c_rt_lib0clear(&___nl__im__19);
#line 538
c_rt_lib0clear(&___nl__im__20);
#line 538
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__18));
#line 538
c_rt_lib0clear(&___nl__im__18);
#line 538
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 538
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(219), ___nl__im__16);
#line 538
c_rt_lib0clear(&___nl__im__16);
#line 538
c_rt_lib0clear(&___nl__im__17);
#line 539
goto label_3;
#line 539
label_3:
;
#line 539
//clear ___nl__bool__8;
#line 540
c_rt_lib0move(&___nl__im__21,___get_global_const(299));
#line 540
___nl__bool__22 = nparser_priv0eat(___ref___rec__0, ___nl__im__21);
#line 540
c_rt_lib0clear(&___nl__im__21);
#line 540
//clear ___nl__bool__22;
#line 541
goto label_1;
#line 541
label_2:
;
#line 541
label_1:
;
#line 541
//clear ___nl__bool__6;
#line 542
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
#line 546
c_rt_lib0move(&___nl__im__1,___get_global_const(463));
#line 546
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 546
c_rt_lib0clear(&___nl__im__1);
#line 546
//clear ___nl__bool__2;
#line 547
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 547
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 547
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 547
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 547
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__4, ___get_global_const(95), ___nl__im__5, ___get_global_const(454), ___nl__im__6, ___get_global_const(219), ___nl__im__7));
#line 547
c_rt_lib0clear(&___nl__im__4);
#line 547
c_rt_lib0clear(&___nl__im__5);
#line 547
c_rt_lib0clear(&___nl__im__6);
#line 547
c_rt_lib0clear(&___nl__im__7);
#line 548
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 548
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 548
___nl__bool__8 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 548
___nl__rec_ptr__9 = NULL;
#line 548
c_rt_lib0clear(&___nl__im__10);
#line 548
___nl__bool__8 = !___nl__bool__8;
#line 548
if(___nl__bool__8){ goto label_2;}
#line 549
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 549
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 549
c_rt_lib0move(&___nl__im__12, ntokenizer0eat_type(___nl__rec_ptr__13, ___nl__im__14));
#line 549
___nl__rec_ptr__13 = NULL;
#line 549
c_rt_lib0clear(&___nl__im__14);
#line 549
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 549
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(168), ___nl__im__11);
#line 549
c_rt_lib0clear(&___nl__im__11);
#line 549
c_rt_lib0clear(&___nl__im__12);
#line 550
goto label_1;
#line 550
label_2:
;
#line 551
c_rt_lib0move(&___nl__im__15,___get_global_const(1006));
#line 551
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__15));
#line 551
c_rt_lib0clear(&___nl__im__15);
#line 552
goto label_1;
#line 552
label_1:
;
#line 552
//clear ___nl__bool__8;
#line 553
c_rt_lib0move(&___nl__im__17,___get_global_const(484));
#line 553
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 553
c_rt_lib0clear(&___nl__im__17);
#line 553
___nl__bool__16 = !___nl__bool__16;
#line 553
if(___nl__bool__16){ goto label_4;}
#line 554
c_rt_lib0move(&___nl__im__20, nparser_priv0parse_type(___ref___rec__0));
#line 554
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(80));
#line 554
if(___nl__bool__19){ goto label_5;}
#line 554
c_rt_lib0clear(&___nl__im__3);
#line 554
//clear ___nl__bool__16;
#line 554
c_rt_lib0clear(&___nl__im__18);
#line 554
//clear ___nl__bool__19;
#line 554
return ___nl__im__20;
#line 554
label_5:
;
#line 554
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(80)));
#line 555
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__im__18));
#line 555
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 555
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(95), ___nl__im__21);
#line 555
c_rt_lib0clear(&___nl__im__21);
#line 555
c_rt_lib0clear(&___nl__im__22);
#line 556
___nl__bool_ptr__24 = &((*___ref___rec__0).parse_types0field);
#line 556
___nl__bool__23 = (*___nl__bool_ptr__24);
#line 556
___nl__bool_ptr__24 = NULL;
#line 556
___nl__bool__23 = !___nl__bool__23;
#line 556
if(___nl__bool__23){ goto label_7;}
#line 557
c_rt_lib0move(&___nl__im__27, ptd_parser0try_value_to_ptd(___nl__im__18));
#line 557
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__27, ___get_global_const(80));
#line 557
if(___nl__bool__26){ goto label_8;}
#line 557
c_rt_lib0clear(&___nl__im__3);
#line 557
//clear ___nl__bool__16;
#line 557
c_rt_lib0clear(&___nl__im__18);
#line 557
//clear ___nl__bool__19;
#line 557
c_rt_lib0clear(&___nl__im__20);
#line 557
//clear ___nl__bool__23;
#line 557
c_rt_lib0clear(&___nl__im__25);
#line 557
//clear ___nl__bool__26;
#line 557
return ___nl__im__27;
#line 557
label_8:
;
#line 557
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__27, ___get_global_const(80)));
#line 558
c_rt_lib0copy(&___nl__im__28, ___nl__im__25);
#line 558
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(454), ___nl__im__28);
#line 558
c_rt_lib0clear(&___nl__im__28);
#line 559
goto label_6;
#line 559
label_7:
;
#line 559
label_6:
;
#line 559
//clear ___nl__bool__23;
#line 559
c_rt_lib0clear(&___nl__im__25);
#line 559
//clear ___nl__bool__26;
#line 559
c_rt_lib0clear(&___nl__im__27);
#line 560
goto label_3;
#line 560
label_4:
;
#line 560
label_3:
;
#line 560
//clear ___nl__bool__16;
#line 560
c_rt_lib0clear(&___nl__im__18);
#line 560
//clear ___nl__bool__19;
#line 560
c_rt_lib0clear(&___nl__im__20);
#line 561
c_rt_lib0move(&___nl__im__30,___get_global_const(905));
#line 561
___nl__bool__29 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__30);
#line 561
c_rt_lib0clear(&___nl__im__30);
#line 561
___nl__bool__29 = !___nl__bool__29;
#line 561
if(___nl__bool__29){ goto label_10;}
#line 562
c_rt_lib0move(&___nl__im__33, nparser_priv0parse_expr(___ref___rec__0));
#line 562
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(80));
#line 562
if(___nl__bool__32){ goto label_11;}
#line 562
c_rt_lib0clear(&___nl__im__3);
#line 562
//clear ___nl__bool__29;
#line 562
c_rt_lib0clear(&___nl__im__31);
#line 562
//clear ___nl__bool__32;
#line 562
return ___nl__im__33;
#line 562
label_11:
;
#line 562
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(80)));
#line 563
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__31));
#line 563
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 563
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(219), ___nl__im__34);
#line 563
c_rt_lib0clear(&___nl__im__34);
#line 563
c_rt_lib0clear(&___nl__im__35);
#line 564
goto label_9;
#line 564
label_10:
;
#line 564
label_9:
;
#line 564
//clear ___nl__bool__29;
#line 564
c_rt_lib0clear(&___nl__im__31);
#line 564
//clear ___nl__bool__32;
#line 564
c_rt_lib0clear(&___nl__im__33);
#line 565
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 565
c_rt_lib0clear(&___nl__im__3);
#line 565
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
#line 569
c_rt_lib0move(&___nl__im__1,___get_global_const(463));
#line 569
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 569
c_rt_lib0clear(&___nl__im__1);
#line 569
//clear ___nl__bool__2;
#line 570
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 570
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 570
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 570
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 570
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__4, ___get_global_const(95), ___nl__im__5, ___get_global_const(454), ___nl__im__6, ___get_global_const(219), ___nl__im__7));
#line 570
c_rt_lib0clear(&___nl__im__4);
#line 570
c_rt_lib0clear(&___nl__im__5);
#line 570
c_rt_lib0clear(&___nl__im__6);
#line 570
c_rt_lib0clear(&___nl__im__7);
#line 571
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 571
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 571
___nl__bool__8 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 571
___nl__rec_ptr__9 = NULL;
#line 571
c_rt_lib0clear(&___nl__im__10);
#line 571
___nl__bool__8 = !___nl__bool__8;
#line 571
if(___nl__bool__8){ goto label_2;}
#line 572
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 572
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 572
c_rt_lib0move(&___nl__im__12, ntokenizer0eat_type(___nl__rec_ptr__13, ___nl__im__14));
#line 572
___nl__rec_ptr__13 = NULL;
#line 572
c_rt_lib0clear(&___nl__im__14);
#line 572
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 572
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(168), ___nl__im__11);
#line 572
c_rt_lib0clear(&___nl__im__11);
#line 572
c_rt_lib0clear(&___nl__im__12);
#line 573
goto label_1;
#line 573
label_2:
;
#line 574
c_rt_lib0move(&___nl__im__15,___get_global_const(1006));
#line 574
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__15));
#line 574
c_rt_lib0clear(&___nl__im__15);
#line 575
goto label_1;
#line 575
label_1:
;
#line 575
//clear ___nl__bool__8;
#line 576
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
#line 580
c_rt_lib0move(&___nl__im__1,___get_global_const(40));
#line 580
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 580
c_rt_lib0clear(&___nl__im__1);
#line 580
//clear ___nl__bool__2;
#line 581
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 581
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 581
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 581
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 581
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__4, ___get_global_const(95), ___nl__im__5, ___get_global_const(454), ___nl__im__6, ___get_global_const(219), ___nl__im__7));
#line 581
c_rt_lib0clear(&___nl__im__4);
#line 581
c_rt_lib0clear(&___nl__im__5);
#line 581
c_rt_lib0clear(&___nl__im__6);
#line 581
c_rt_lib0clear(&___nl__im__7);
#line 582
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 582
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 582
___nl__bool__8 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 582
___nl__rec_ptr__9 = NULL;
#line 582
c_rt_lib0clear(&___nl__im__10);
#line 582
___nl__bool__8 = !___nl__bool__8;
#line 582
if(___nl__bool__8){ goto label_2;}
#line 583
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 583
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 583
c_rt_lib0move(&___nl__im__12, ntokenizer0eat_type(___nl__rec_ptr__13, ___nl__im__14));
#line 583
___nl__rec_ptr__13 = NULL;
#line 583
c_rt_lib0clear(&___nl__im__14);
#line 583
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 583
c_rt_lib0hash_set_value_dec(&___nl__im__3, ___get_global_const(168), ___nl__im__11);
#line 583
c_rt_lib0clear(&___nl__im__11);
#line 583
c_rt_lib0clear(&___nl__im__12);
#line 584
goto label_1;
#line 584
label_2:
;
#line 585
c_rt_lib0move(&___nl__im__15,___get_global_const(1006));
#line 585
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__15));
#line 585
c_rt_lib0clear(&___nl__im__15);
#line 586
goto label_1;
#line 586
label_1:
;
#line 586
//clear ___nl__bool__8;
#line 587
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
#line 591
c_rt_lib0move(&___nl__im__1,___get_global_const(420));
#line 591
___nl__bool__2 = nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 591
c_rt_lib0clear(&___nl__im__1);
#line 591
//clear ___nl__bool__2;
#line 592
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr(___ref___rec__0));
#line 592
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(80));
#line 592
if(___nl__bool__4){ goto label_1;}
#line 592
c_rt_lib0clear(&___nl__im__3);
#line 592
//clear ___nl__bool__4;
#line 592
return ___nl__im__5;
#line 592
label_1:
;
#line 592
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(80)));
#line 593
c_rt_lib0move(&___nl__im__6,___get_global_const(299));
#line 593
___nl__bool__7 = nparser_priv0eat(___ref___rec__0, ___nl__im__6);
#line 593
c_rt_lib0clear(&___nl__im__6);
#line 593
//clear ___nl__bool__7;
#line 594
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__3));
#line 594
c_rt_lib0clear(&___nl__im__3);
#line 594
//clear ___nl__bool__4;
#line 594
c_rt_lib0clear(&___nl__im__5);
#line 594
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
#line 598
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 598
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 598
___nl__rec_ptr__2 = NULL;
#line 599
c_rt_lib0move(&___nl__im__3,___get_global_const(291));
#line 599
___nl__bool__4 = nparser_priv0eat(___ref___rec__0, ___nl__im__3);
#line 599
c_rt_lib0clear(&___nl__im__3);
#line 599
//clear ___nl__bool__4;
#line 600
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 601
label_2:
;
#line 601
c_rt_lib0move(&___nl__im__7,___get_global_const(292));
#line 601
___nl__bool__6 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__7);
#line 601
c_rt_lib0clear(&___nl__im__7);
#line 601
___nl__bool__6 = !___nl__bool__6;
#line 601
___nl__bool__6 = !___nl__bool__6;
#line 601
if(___nl__bool__6){ goto label_1;}
#line 602
c_rt_lib0move(&___nl__im__9,___get_global_const(409));
#line 602
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 602
c_rt_lib0clear(&___nl__im__9);
#line 602
___nl__bool__8 = !___nl__bool__8;
#line 602
if(___nl__bool__8){ goto label_4;}
#line 602
goto label_2;
#line 602
goto label_3;
#line 602
label_4:
;
#line 602
label_3:
;
#line 602
//clear ___nl__bool__8;
#line 603
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_cmd(___ref___rec__0));
#line 603
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(80));
#line 603
if(___nl__bool__11){ goto label_5;}
#line 603
c_rt_lib0clear(&___nl__im__1);
#line 603
c_rt_lib0clear(&___nl__im__5);
#line 603
//clear ___nl__bool__6;
#line 603
c_rt_lib0clear(&___nl__im__10);
#line 603
//clear ___nl__bool__11;
#line 603
return ___nl__im__12;
#line 603
label_5:
;
#line 603
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(80)));
#line 604
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__10));
#line 604
c_rt_lib0clear(&___nl__im__10);
#line 604
//clear ___nl__bool__11;
#line 604
c_rt_lib0clear(&___nl__im__12);
#line 605
goto label_2;
#line 605
label_1:
;
#line 606
___nl__rec_ptr__14 = &((*___ref___rec__0).state0field);
#line 606
c_rt_lib0move(&___nl__im__13, ntokenizer0get_place_ws(___nl__rec_ptr__14));
#line 606
___nl__rec_ptr__14 = NULL;
#line 607
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(932), ___nl__im__13));
#line 608
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(873), ___nl__im__5));
#line 608
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__15, ___get_global_const(227), ___nl__im__18));
#line 608
c_rt_lib0clear(&___nl__im__18);
#line 608
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__17));
#line 608
c_rt_lib0clear(&___nl__im__17);
#line 608
c_rt_lib0clear(&___nl__im__1);
#line 608
c_rt_lib0clear(&___nl__im__5);
#line 608
//clear ___nl__bool__6;
#line 608
c_rt_lib0clear(&___nl__im__10);
#line 608
//clear ___nl__bool__11;
#line 608
c_rt_lib0clear(&___nl__im__12);
#line 608
c_rt_lib0clear(&___nl__im__13);
#line 608
c_rt_lib0clear(&___nl__im__15);
#line 608
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
#line 612
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 612
c_rt_lib0move(&___nl__im__3,___get_global_const(463));
#line 612
___nl__bool__1 = ntokenizer0next_is(___nl__rec_ptr__2, ___nl__im__3);
#line 612
___nl__rec_ptr__2 = NULL;
#line 612
c_rt_lib0clear(&___nl__im__3);
#line 612
___nl__bool__1 = !___nl__bool__1;
#line 612
if(___nl__bool__1){ goto label_2;}
#line 613
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_var_decl(___ref___rec__0));
#line 613
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(80));
#line 613
if(___nl__bool__5){ goto label_3;}
#line 613
//clear ___nl__bool__1;
#line 613
c_rt_lib0clear(&___nl__im__4);
#line 613
//clear ___nl__bool__5;
#line 613
return ___nl__im__6;
#line 613
label_3:
;
#line 613
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(80)));
#line 614
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(688), ___nl__im__4));
#line 614
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__8));
#line 614
c_rt_lib0clear(&___nl__im__8);
#line 614
//clear ___nl__bool__1;
#line 614
c_rt_lib0clear(&___nl__im__4);
#line 614
//clear ___nl__bool__5;
#line 614
c_rt_lib0clear(&___nl__im__6);
#line 614
return ___nl__im__7;
#line 615
goto label_1;
#line 615
label_2:
;
#line 616
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_expr(___ref___rec__0));
#line 616
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(80));
#line 616
if(___nl__bool__10){ goto label_4;}
#line 616
//clear ___nl__bool__1;
#line 616
c_rt_lib0clear(&___nl__im__4);
#line 616
//clear ___nl__bool__5;
#line 616
c_rt_lib0clear(&___nl__im__6);
#line 616
c_rt_lib0clear(&___nl__im__7);
#line 616
c_rt_lib0clear(&___nl__im__9);
#line 616
//clear ___nl__bool__10;
#line 616
return ___nl__im__11;
#line 616
label_4:
;
#line 616
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(80)));
#line 617
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 617
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(234));
#line 617
c_rt_lib0clear(&___nl__im__14);
#line 617
___nl__bool__13 = !___nl__bool__12;
#line 617
if(___nl__bool__13){ goto label_7;}
#line 617
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 617
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 617
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(234)));
#line 617
c_rt_lib0clear(&___nl__im__17);
#line 617
c_rt_lib0clear(&___nl__im__18);
#line 617
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(514)));
#line 617
c_rt_lib0clear(&___nl__im__16);
#line 617
c_rt_lib0move(&___nl__im__19,___get_global_const(905));
#line 617
___nl__bool__12 = c_rt_lib0eq(___nl__im__15, ___nl__im__19);
#line 617
c_rt_lib0clear(&___nl__im__15);
#line 617
c_rt_lib0clear(&___nl__im__19);
#line 617
label_7:
;
#line 617
//clear ___nl__bool__13;
#line 617
___nl__bool__12 = !___nl__bool__12;
#line 617
if(___nl__bool__12){ goto label_6;}
#line 618
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 618
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 618
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(234)));
#line 618
c_rt_lib0clear(&___nl__im__23);
#line 618
c_rt_lib0clear(&___nl__im__24);
#line 618
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(889), ___nl__im__22));
#line 618
c_rt_lib0clear(&___nl__im__22);
#line 618
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__21));
#line 618
c_rt_lib0clear(&___nl__im__21);
#line 618
//clear ___nl__bool__1;
#line 618
c_rt_lib0clear(&___nl__im__4);
#line 618
//clear ___nl__bool__5;
#line 618
c_rt_lib0clear(&___nl__im__6);
#line 618
c_rt_lib0clear(&___nl__im__7);
#line 618
c_rt_lib0clear(&___nl__im__9);
#line 618
//clear ___nl__bool__10;
#line 618
c_rt_lib0clear(&___nl__im__11);
#line 618
//clear ___nl__bool__12;
#line 618
return ___nl__im__20;
#line 619
goto label_5;
#line 619
label_6:
;
#line 620
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(890), ___nl__im__9));
#line 620
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__26));
#line 620
c_rt_lib0clear(&___nl__im__26);
#line 620
//clear ___nl__bool__1;
#line 620
c_rt_lib0clear(&___nl__im__4);
#line 620
//clear ___nl__bool__5;
#line 620
c_rt_lib0clear(&___nl__im__6);
#line 620
c_rt_lib0clear(&___nl__im__7);
#line 620
c_rt_lib0clear(&___nl__im__9);
#line 620
//clear ___nl__bool__10;
#line 620
c_rt_lib0clear(&___nl__im__11);
#line 620
//clear ___nl__bool__12;
#line 620
c_rt_lib0clear(&___nl__im__20);
#line 620
return ___nl__im__25;
#line 621
goto label_5;
#line 621
label_5:
;
#line 621
//clear ___nl__bool__12;
#line 621
c_rt_lib0clear(&___nl__im__20);
#line 621
c_rt_lib0clear(&___nl__im__25);
#line 622
goto label_1;
#line 622
label_1:
;
#line 622
//clear ___nl__bool__1;
#line 622
c_rt_lib0clear(&___nl__im__4);
#line 622
//clear ___nl__bool__5;
#line 622
c_rt_lib0clear(&___nl__im__6);
#line 622
c_rt_lib0clear(&___nl__im__7);
#line 622
c_rt_lib0clear(&___nl__im__9);
#line 622
//clear ___nl__bool__10;
#line 622
c_rt_lib0clear(&___nl__im__11);
}

nast0debug_t0type nparser_priv0get_debug_from_begin(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
#line 626
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 626
c_rt_lib0move(&___nl__im__2, ntokenizer0get_place(___nl__rec_ptr__3));
#line 626
___nl__rec_ptr__3 = NULL;
#line 626
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 626
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 626
___nl__rec_ptr__5 = NULL;
#line 626
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__2, ___get_global_const(932), ___nl__im__4));
#line 626
c_rt_lib0clear(&___nl__im__2);
#line 626
c_rt_lib0clear(&___nl__im__4);
#line 626
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
#line 630
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 630
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 630
___nl__rec_ptr__2 = NULL;
#line 632
c_rt_lib0move(&___nl__im__5,___get_global_const(862));
#line 632
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 632
c_rt_lib0clear(&___nl__im__5);
#line 632
___nl__bool__4 = !___nl__bool__4;
#line 632
if(___nl__bool__4){ goto label_2;}
#line 633
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 634
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_cond(___ref___rec__0));
#line 634
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(80));
#line 634
if(___nl__bool__7){ goto label_3;}
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
return ___nl__im__8;
#line 634
label_3:
;
#line 634
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(80)));
#line 634
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(876), ___nl__im__9);
#line 635
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_block(___ref___rec__0));
#line 635
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(80));
#line 635
if(___nl__bool__10){ goto label_4;}
#line 635
c_rt_lib0clear(&___nl__im__1);
#line 635
c_rt_lib0clear(&___nl__im__3);
#line 635
//clear ___nl__bool__4;
#line 635
c_rt_lib0clear(&___nl__im__6);
#line 635
//clear ___nl__bool__7;
#line 635
c_rt_lib0clear(&___nl__im__8);
#line 635
c_rt_lib0clear(&___nl__im__9);
#line 635
//clear ___nl__bool__10;
#line 635
return ___nl__im__11;
#line 635
label_4:
;
#line 635
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(80)));
#line 635
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(862), ___nl__im__12);
#line 636
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 637
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 637
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 637
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(877), ___nl__im__14);
#line 637
c_rt_lib0clear(&___nl__im__14);
#line 637
c_rt_lib0clear(&___nl__im__15);
#line 638
label_6:
;
#line 638
c_rt_lib0move(&___nl__im__17,___get_global_const(877));
#line 638
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 638
c_rt_lib0clear(&___nl__im__17);
#line 638
___nl__bool__16 = !___nl__bool__16;
#line 638
if(___nl__bool__16){ goto label_5;}
#line 639
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 640
___nl__rec_ptr__20 = &((*___ref___rec__0).state0field);
#line 640
c_rt_lib0move(&___nl__im__19, ntokenizer0get_place(___nl__rec_ptr__20));
#line 640
___nl__rec_ptr__20 = NULL;
#line 641
c_rt_lib0move(&___nl__im__22, nparser_priv0parse_cond(___ref___rec__0));
#line 641
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__22, ___get_global_const(80));
#line 641
if(___nl__bool__21){ goto label_7;}
#line 641
c_rt_lib0clear(&___nl__im__1);
#line 641
c_rt_lib0clear(&___nl__im__3);
#line 641
//clear ___nl__bool__4;
#line 641
c_rt_lib0clear(&___nl__im__6);
#line 641
//clear ___nl__bool__7;
#line 641
c_rt_lib0clear(&___nl__im__8);
#line 641
c_rt_lib0clear(&___nl__im__9);
#line 641
//clear ___nl__bool__10;
#line 641
c_rt_lib0clear(&___nl__im__11);
#line 641
c_rt_lib0clear(&___nl__im__12);
#line 641
c_rt_lib0clear(&___nl__im__13);
#line 641
//clear ___nl__bool__16;
#line 641
c_rt_lib0clear(&___nl__im__18);
#line 641
c_rt_lib0clear(&___nl__im__19);
#line 641
//clear ___nl__bool__21;
#line 641
return ___nl__im__22;
#line 641
label_7:
;
#line 641
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__22, ___get_global_const(80)));
#line 641
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(876), ___nl__im__23);
#line 642
___nl__rec_ptr__25 = &((*___ref___rec__0).state0field);
#line 642
c_rt_lib0move(&___nl__im__24, ntokenizer0get_place_ws(___nl__rec_ptr__25));
#line 642
___nl__rec_ptr__25 = NULL;
#line 643
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__19, ___get_global_const(932), ___nl__im__24));
#line 643
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 643
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(221), ___nl__im__26);
#line 643
c_rt_lib0clear(&___nl__im__26);
#line 643
c_rt_lib0clear(&___nl__im__27);
#line 644
c_rt_lib0move(&___nl__im__29, nparser_priv0parse_block(___ref___rec__0));
#line 644
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(80));
#line 644
if(___nl__bool__28){ goto label_8;}
#line 644
c_rt_lib0clear(&___nl__im__1);
#line 644
c_rt_lib0clear(&___nl__im__3);
#line 644
//clear ___nl__bool__4;
#line 644
c_rt_lib0clear(&___nl__im__6);
#line 644
//clear ___nl__bool__7;
#line 644
c_rt_lib0clear(&___nl__im__8);
#line 644
c_rt_lib0clear(&___nl__im__9);
#line 644
//clear ___nl__bool__10;
#line 644
c_rt_lib0clear(&___nl__im__11);
#line 644
c_rt_lib0clear(&___nl__im__12);
#line 644
c_rt_lib0clear(&___nl__im__13);
#line 644
//clear ___nl__bool__16;
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
return ___nl__im__29;
#line 644
label_8:
;
#line 644
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(80)));
#line 644
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(227), ___nl__im__30);
#line 645
c_rt_lib0delete(array0push(&___nl__im__13, ___nl__im__18));
#line 645
c_rt_lib0clear(&___nl__im__18);
#line 645
c_rt_lib0clear(&___nl__im__19);
#line 645
//clear ___nl__bool__21;
#line 645
c_rt_lib0clear(&___nl__im__22);
#line 645
c_rt_lib0clear(&___nl__im__23);
#line 645
c_rt_lib0clear(&___nl__im__24);
#line 645
//clear ___nl__bool__28;
#line 645
c_rt_lib0clear(&___nl__im__29);
#line 645
c_rt_lib0clear(&___nl__im__30);
#line 646
goto label_6;
#line 646
label_5:
;
#line 647
c_rt_lib0copy(&___nl__im__31, ___nl__im__13);
#line 647
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(877), ___nl__im__31);
#line 647
c_rt_lib0clear(&___nl__im__31);
#line 648
c_rt_lib0move(&___nl__im__33,___get_global_const(878));
#line 648
___nl__bool__32 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__33);
#line 648
c_rt_lib0clear(&___nl__im__33);
#line 648
___nl__bool__32 = !___nl__bool__32;
#line 648
if(___nl__bool__32){ goto label_10;}
#line 649
c_rt_lib0move(&___nl__im__35, nparser_priv0parse_block(___ref___rec__0));
#line 649
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(80));
#line 649
if(___nl__bool__34){ goto label_11;}
#line 649
c_rt_lib0clear(&___nl__im__1);
#line 649
c_rt_lib0clear(&___nl__im__3);
#line 649
//clear ___nl__bool__4;
#line 649
c_rt_lib0clear(&___nl__im__6);
#line 649
//clear ___nl__bool__7;
#line 649
c_rt_lib0clear(&___nl__im__8);
#line 649
c_rt_lib0clear(&___nl__im__9);
#line 649
//clear ___nl__bool__10;
#line 649
c_rt_lib0clear(&___nl__im__11);
#line 649
c_rt_lib0clear(&___nl__im__12);
#line 649
c_rt_lib0clear(&___nl__im__13);
#line 649
//clear ___nl__bool__16;
#line 649
c_rt_lib0clear(&___nl__im__18);
#line 649
c_rt_lib0clear(&___nl__im__19);
#line 649
//clear ___nl__bool__21;
#line 649
c_rt_lib0clear(&___nl__im__22);
#line 649
c_rt_lib0clear(&___nl__im__23);
#line 649
c_rt_lib0clear(&___nl__im__24);
#line 649
//clear ___nl__bool__28;
#line 649
c_rt_lib0clear(&___nl__im__29);
#line 649
c_rt_lib0clear(&___nl__im__30);
#line 649
//clear ___nl__bool__32;
#line 649
//clear ___nl__bool__34;
#line 649
return ___nl__im__35;
#line 649
label_11:
;
#line 649
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(80)));
#line 649
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(878), ___nl__im__36);
#line 650
goto label_9;
#line 650
label_10:
;
#line 651
c_rt_lib0move(&___nl__im__39, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 651
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_const(875)));
#line 651
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__39, ___get_global_const(227), ___nl__im__40));
#line 651
c_rt_lib0clear(&___nl__im__39);
#line 651
c_rt_lib0clear(&___nl__im__40);
#line 651
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 651
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(878), ___nl__im__37);
#line 651
c_rt_lib0clear(&___nl__im__37);
#line 651
c_rt_lib0clear(&___nl__im__38);
#line 652
goto label_9;
#line 652
label_9:
;
#line 652
//clear ___nl__bool__32;
#line 652
//clear ___nl__bool__34;
#line 652
c_rt_lib0clear(&___nl__im__35);
#line 652
c_rt_lib0clear(&___nl__im__36);
#line 653
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(862), ___nl__im__6));
#line 654
goto label_1;
#line 654
label_2:
;
#line 654
c_rt_lib0move(&___nl__im__41,___get_global_const(864));
#line 654
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__41);
#line 654
c_rt_lib0clear(&___nl__im__41);
#line 654
___nl__bool__4 = !___nl__bool__4;
#line 654
if(___nl__bool__4){ goto label_12;}
#line 655
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(0));
#line 656
___nl__bool__44 = false;
#line 656
c_rt_lib0move(&___nl__im__43, c_rt_lib0bool_to_nl_native(___nl__bool__44));
#line 656
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(944), ___nl__im__43);
#line 656
c_rt_lib0clear(&___nl__im__43);
#line 656
//clear ___nl__bool__44;
#line 657
c_rt_lib0move(&___nl__im__46, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 657
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 657
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(569), ___nl__im__45);
#line 657
c_rt_lib0clear(&___nl__im__45);
#line 657
c_rt_lib0clear(&___nl__im__46);
#line 658
c_rt_lib0move(&___nl__im__48, nparser_priv0parse_cond(___ref___rec__0));
#line 658
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_const(80));
#line 658
if(___nl__bool__47){ goto label_13;}
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
return ___nl__im__48;
#line 658
label_13:
;
#line 658
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(80)));
#line 658
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(38), ___nl__im__49);
#line 659
c_rt_lib0move(&___nl__im__51, nparser_priv0parse_block(___ref___rec__0));
#line 659
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(80));
#line 659
if(___nl__bool__50){ goto label_14;}
#line 659
c_rt_lib0clear(&___nl__im__1);
#line 659
c_rt_lib0clear(&___nl__im__3);
#line 659
//clear ___nl__bool__4;
#line 659
c_rt_lib0clear(&___nl__im__6);
#line 659
//clear ___nl__bool__7;
#line 659
c_rt_lib0clear(&___nl__im__8);
#line 659
c_rt_lib0clear(&___nl__im__9);
#line 659
//clear ___nl__bool__10;
#line 659
c_rt_lib0clear(&___nl__im__11);
#line 659
c_rt_lib0clear(&___nl__im__12);
#line 659
c_rt_lib0clear(&___nl__im__13);
#line 659
//clear ___nl__bool__16;
#line 659
c_rt_lib0clear(&___nl__im__18);
#line 659
c_rt_lib0clear(&___nl__im__19);
#line 659
//clear ___nl__bool__21;
#line 659
c_rt_lib0clear(&___nl__im__22);
#line 659
c_rt_lib0clear(&___nl__im__23);
#line 659
c_rt_lib0clear(&___nl__im__24);
#line 659
//clear ___nl__bool__28;
#line 659
c_rt_lib0clear(&___nl__im__29);
#line 659
c_rt_lib0clear(&___nl__im__30);
#line 659
c_rt_lib0clear(&___nl__im__42);
#line 659
//clear ___nl__bool__47;
#line 659
c_rt_lib0clear(&___nl__im__48);
#line 659
c_rt_lib0clear(&___nl__im__49);
#line 659
//clear ___nl__bool__50;
#line 659
return ___nl__im__51;
#line 659
label_14:
;
#line 659
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(80)));
#line 659
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(227), ___nl__im__52);
#line 660
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(864), ___nl__im__42));
#line 661
goto label_1;
#line 661
label_12:
;
#line 661
c_rt_lib0move(&___nl__im__53,___get_global_const(866));
#line 661
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__53);
#line 661
c_rt_lib0clear(&___nl__im__53);
#line 661
___nl__bool__4 = !___nl__bool__4;
#line 661
if(___nl__bool__4){ goto label_15;}
#line 662
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 663
___nl__bool__56 = false;
#line 663
c_rt_lib0move(&___nl__im__55, c_rt_lib0bool_to_nl_native(___nl__bool__56));
#line 663
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(944), ___nl__im__55);
#line 663
c_rt_lib0clear(&___nl__im__55);
#line 663
//clear ___nl__bool__56;
#line 664
c_rt_lib0move(&___nl__im__58, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 664
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 664
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(569), ___nl__im__57);
#line 664
c_rt_lib0clear(&___nl__im__57);
#line 664
c_rt_lib0clear(&___nl__im__58);
#line 665
c_rt_lib0move(&___nl__im__60, nparser_priv0parse_cond(___ref___rec__0));
#line 665
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__60, ___get_global_const(80));
#line 665
if(___nl__bool__59){ goto label_16;}
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
return ___nl__im__60;
#line 665
label_16:
;
#line 665
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__60, ___get_global_const(80)));
#line 665
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(881), ___nl__im__61);
#line 666
c_rt_lib0move(&___nl__im__63, nparser_priv0parse_block(___ref___rec__0));
#line 666
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_const(80));
#line 666
if(___nl__bool__62){ goto label_17;}
#line 666
c_rt_lib0clear(&___nl__im__1);
#line 666
c_rt_lib0clear(&___nl__im__3);
#line 666
//clear ___nl__bool__4;
#line 666
c_rt_lib0clear(&___nl__im__6);
#line 666
//clear ___nl__bool__7;
#line 666
c_rt_lib0clear(&___nl__im__8);
#line 666
c_rt_lib0clear(&___nl__im__9);
#line 666
//clear ___nl__bool__10;
#line 666
c_rt_lib0clear(&___nl__im__11);
#line 666
c_rt_lib0clear(&___nl__im__12);
#line 666
c_rt_lib0clear(&___nl__im__13);
#line 666
//clear ___nl__bool__16;
#line 666
c_rt_lib0clear(&___nl__im__18);
#line 666
c_rt_lib0clear(&___nl__im__19);
#line 666
//clear ___nl__bool__21;
#line 666
c_rt_lib0clear(&___nl__im__22);
#line 666
c_rt_lib0clear(&___nl__im__23);
#line 666
c_rt_lib0clear(&___nl__im__24);
#line 666
//clear ___nl__bool__28;
#line 666
c_rt_lib0clear(&___nl__im__29);
#line 666
c_rt_lib0clear(&___nl__im__30);
#line 666
c_rt_lib0clear(&___nl__im__42);
#line 666
//clear ___nl__bool__47;
#line 666
c_rt_lib0clear(&___nl__im__48);
#line 666
c_rt_lib0clear(&___nl__im__49);
#line 666
//clear ___nl__bool__50;
#line 666
c_rt_lib0clear(&___nl__im__51);
#line 666
c_rt_lib0clear(&___nl__im__52);
#line 666
c_rt_lib0clear(&___nl__im__54);
#line 666
//clear ___nl__bool__59;
#line 666
c_rt_lib0clear(&___nl__im__60);
#line 666
c_rt_lib0clear(&___nl__im__61);
#line 666
//clear ___nl__bool__62;
#line 666
return ___nl__im__63;
#line 666
label_17:
;
#line 666
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__63, ___get_global_const(80)));
#line 666
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(227), ___nl__im__64);
#line 667
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(866), ___nl__im__54));
#line 668
goto label_1;
#line 668
label_15:
;
#line 668
c_rt_lib0move(&___nl__im__65,___get_global_const(160));
#line 668
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__65);
#line 668
c_rt_lib0clear(&___nl__im__65);
#line 668
___nl__bool__4 = !___nl__bool__4;
#line 668
if(___nl__bool__4){ goto label_18;}
#line 669
c_rt_lib0move(&___nl__im__68, nparser_priv0parse_block(___ref___rec__0));
#line 669
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__68, ___get_global_const(80));
#line 669
if(___nl__bool__67){ goto label_19;}
#line 669
c_rt_lib0clear(&___nl__im__1);
#line 669
c_rt_lib0clear(&___nl__im__3);
#line 669
//clear ___nl__bool__4;
#line 669
c_rt_lib0clear(&___nl__im__6);
#line 669
//clear ___nl__bool__7;
#line 669
c_rt_lib0clear(&___nl__im__8);
#line 669
c_rt_lib0clear(&___nl__im__9);
#line 669
//clear ___nl__bool__10;
#line 669
c_rt_lib0clear(&___nl__im__11);
#line 669
c_rt_lib0clear(&___nl__im__12);
#line 669
c_rt_lib0clear(&___nl__im__13);
#line 669
//clear ___nl__bool__16;
#line 669
c_rt_lib0clear(&___nl__im__18);
#line 669
c_rt_lib0clear(&___nl__im__19);
#line 669
//clear ___nl__bool__21;
#line 669
c_rt_lib0clear(&___nl__im__22);
#line 669
c_rt_lib0clear(&___nl__im__23);
#line 669
c_rt_lib0clear(&___nl__im__24);
#line 669
//clear ___nl__bool__28;
#line 669
c_rt_lib0clear(&___nl__im__29);
#line 669
c_rt_lib0clear(&___nl__im__30);
#line 669
c_rt_lib0clear(&___nl__im__42);
#line 669
//clear ___nl__bool__47;
#line 669
c_rt_lib0clear(&___nl__im__48);
#line 669
c_rt_lib0clear(&___nl__im__49);
#line 669
//clear ___nl__bool__50;
#line 669
c_rt_lib0clear(&___nl__im__51);
#line 669
c_rt_lib0clear(&___nl__im__52);
#line 669
c_rt_lib0clear(&___nl__im__54);
#line 669
//clear ___nl__bool__59;
#line 669
c_rt_lib0clear(&___nl__im__60);
#line 669
c_rt_lib0clear(&___nl__im__61);
#line 669
//clear ___nl__bool__62;
#line 669
c_rt_lib0clear(&___nl__im__63);
#line 669
c_rt_lib0clear(&___nl__im__64);
#line 669
c_rt_lib0clear(&___nl__im__66);
#line 669
//clear ___nl__bool__67;
#line 669
return ___nl__im__68;
#line 669
label_19:
;
#line 669
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__68, ___get_global_const(80)));
#line 670
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(160), ___nl__im__66));
#line 671
goto label_1;
#line 671
label_18:
;
#line 671
c_rt_lib0move(&___nl__im__69,___get_global_const(865));
#line 671
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__69);
#line 671
c_rt_lib0clear(&___nl__im__69);
#line 671
___nl__bool__4 = !___nl__bool__4;
#line 671
if(___nl__bool__4){ goto label_20;}
#line 672
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(0));
#line 673
___nl__bool__72 = false;
#line 673
c_rt_lib0move(&___nl__im__71, c_rt_lib0bool_to_nl_native(___nl__bool__72));
#line 673
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(944), ___nl__im__71);
#line 673
c_rt_lib0clear(&___nl__im__71);
#line 673
//clear ___nl__bool__72;
#line 674
c_rt_lib0move(&___nl__im__74, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 674
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 674
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(371), ___nl__im__73);
#line 674
c_rt_lib0clear(&___nl__im__73);
#line 674
c_rt_lib0clear(&___nl__im__74);
#line 675
c_rt_lib0move(&___nl__im__75,___get_global_const(295));
#line 675
___nl__bool__76 = nparser_priv0eat(___ref___rec__0, ___nl__im__75);
#line 675
c_rt_lib0clear(&___nl__im__75);
#line 675
//clear ___nl__bool__76;
#line 676
___nl__rec_ptr__78 = &((*___ref___rec__0).state0field);
#line 676
c_rt_lib0move(&___nl__im__79,___get_global_const(463));
#line 676
___nl__bool__77 = ntokenizer0next_is(___nl__rec_ptr__78, ___nl__im__79);
#line 676
___nl__rec_ptr__78 = NULL;
#line 676
c_rt_lib0clear(&___nl__im__79);
#line 676
___nl__bool__77 = !___nl__bool__77;
#line 676
if(___nl__bool__77){ goto label_22;}
#line 677
c_rt_lib0move(&___nl__im__81, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 677
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 677
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(224), ___nl__im__80);
#line 677
c_rt_lib0clear(&___nl__im__80);
#line 677
c_rt_lib0clear(&___nl__im__81);
#line 678
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 678
c_rt_lib0copy(&___nl__im__82, ___nl__im__83);
#line 678
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(880), ___nl__im__82);
#line 678
c_rt_lib0clear(&___nl__im__82);
#line 678
c_rt_lib0clear(&___nl__im__83);
#line 679
goto label_21;
#line 679
label_22:
;
#line 680
c_rt_lib0move(&___nl__im__85, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 680
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 680
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(224), ___nl__im__84);
#line 680
c_rt_lib0clear(&___nl__im__84);
#line 680
c_rt_lib0clear(&___nl__im__85);
#line 681
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 681
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 681
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(880), ___nl__im__86);
#line 681
c_rt_lib0clear(&___nl__im__86);
#line 681
c_rt_lib0clear(&___nl__im__87);
#line 682
goto label_21;
#line 682
label_21:
;
#line 682
//clear ___nl__bool__77;
#line 683
c_rt_lib0move(&___nl__im__89, nparser_priv0parse_cond(___ref___rec__0));
#line 683
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(80));
#line 683
if(___nl__bool__88){ goto label_23;}
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
return ___nl__im__89;
#line 683
label_23:
;
#line 683
c_rt_lib0move(&___nl__im__90, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(80)));
#line 683
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(131), ___nl__im__90);
#line 684
c_rt_lib0move(&___nl__im__92, nparser_priv0parse_block(___ref___rec__0));
#line 684
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(80));
#line 684
if(___nl__bool__91){ goto label_24;}
#line 684
c_rt_lib0clear(&___nl__im__1);
#line 684
c_rt_lib0clear(&___nl__im__3);
#line 684
//clear ___nl__bool__4;
#line 684
c_rt_lib0clear(&___nl__im__6);
#line 684
//clear ___nl__bool__7;
#line 684
c_rt_lib0clear(&___nl__im__8);
#line 684
c_rt_lib0clear(&___nl__im__9);
#line 684
//clear ___nl__bool__10;
#line 684
c_rt_lib0clear(&___nl__im__11);
#line 684
c_rt_lib0clear(&___nl__im__12);
#line 684
c_rt_lib0clear(&___nl__im__13);
#line 684
//clear ___nl__bool__16;
#line 684
c_rt_lib0clear(&___nl__im__18);
#line 684
c_rt_lib0clear(&___nl__im__19);
#line 684
//clear ___nl__bool__21;
#line 684
c_rt_lib0clear(&___nl__im__22);
#line 684
c_rt_lib0clear(&___nl__im__23);
#line 684
c_rt_lib0clear(&___nl__im__24);
#line 684
//clear ___nl__bool__28;
#line 684
c_rt_lib0clear(&___nl__im__29);
#line 684
c_rt_lib0clear(&___nl__im__30);
#line 684
c_rt_lib0clear(&___nl__im__42);
#line 684
//clear ___nl__bool__47;
#line 684
c_rt_lib0clear(&___nl__im__48);
#line 684
c_rt_lib0clear(&___nl__im__49);
#line 684
//clear ___nl__bool__50;
#line 684
c_rt_lib0clear(&___nl__im__51);
#line 684
c_rt_lib0clear(&___nl__im__52);
#line 684
c_rt_lib0clear(&___nl__im__54);
#line 684
//clear ___nl__bool__59;
#line 684
c_rt_lib0clear(&___nl__im__60);
#line 684
c_rt_lib0clear(&___nl__im__61);
#line 684
//clear ___nl__bool__62;
#line 684
c_rt_lib0clear(&___nl__im__63);
#line 684
c_rt_lib0clear(&___nl__im__64);
#line 684
c_rt_lib0clear(&___nl__im__66);
#line 684
//clear ___nl__bool__67;
#line 684
c_rt_lib0clear(&___nl__im__68);
#line 684
c_rt_lib0clear(&___nl__im__70);
#line 684
//clear ___nl__bool__88;
#line 684
c_rt_lib0clear(&___nl__im__89);
#line 684
c_rt_lib0clear(&___nl__im__90);
#line 684
//clear ___nl__bool__91;
#line 684
return ___nl__im__92;
#line 684
label_24:
;
#line 684
c_rt_lib0move(&___nl__im__93, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(80)));
#line 684
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(227), ___nl__im__93);
#line 685
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(865), ___nl__im__70));
#line 686
goto label_1;
#line 686
label_20:
;
#line 686
c_rt_lib0move(&___nl__im__94,___get_global_const(867));
#line 686
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__94);
#line 686
c_rt_lib0clear(&___nl__im__94);
#line 686
___nl__bool__4 = !___nl__bool__4;
#line 686
if(___nl__bool__4){ goto label_25;}
#line 687
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_mk(0));
#line 688
___nl__bool__97 = false;
#line 688
c_rt_lib0move(&___nl__im__96, c_rt_lib0bool_to_nl_native(___nl__bool__97));
#line 688
c_rt_lib0hash_set_value_dec(&___nl__im__95, ___get_global_const(944), ___nl__im__96);
#line 688
c_rt_lib0clear(&___nl__im__96);
#line 688
//clear ___nl__bool__97;
#line 689
c_rt_lib0move(&___nl__im__99, nparser_priv0parse_cond(___ref___rec__0));
#line 689
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__99, ___get_global_const(80));
#line 689
if(___nl__bool__98){ goto label_26;}
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
return ___nl__im__99;
#line 689
label_26:
;
#line 689
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__99, ___get_global_const(80)));
#line 689
c_rt_lib0hash_set_value_dec(&___nl__im__95, ___get_global_const(876), ___nl__im__100);
#line 690
c_rt_lib0move(&___nl__im__102, nparser_priv0parse_block(___ref___rec__0));
#line 690
___nl__bool__101 = c_rt_lib0priv_is(___nl__im__102, ___get_global_const(80));
#line 690
if(___nl__bool__101){ goto label_27;}
#line 690
c_rt_lib0clear(&___nl__im__1);
#line 690
c_rt_lib0clear(&___nl__im__3);
#line 690
//clear ___nl__bool__4;
#line 690
c_rt_lib0clear(&___nl__im__6);
#line 690
//clear ___nl__bool__7;
#line 690
c_rt_lib0clear(&___nl__im__8);
#line 690
c_rt_lib0clear(&___nl__im__9);
#line 690
//clear ___nl__bool__10;
#line 690
c_rt_lib0clear(&___nl__im__11);
#line 690
c_rt_lib0clear(&___nl__im__12);
#line 690
c_rt_lib0clear(&___nl__im__13);
#line 690
//clear ___nl__bool__16;
#line 690
c_rt_lib0clear(&___nl__im__18);
#line 690
c_rt_lib0clear(&___nl__im__19);
#line 690
//clear ___nl__bool__21;
#line 690
c_rt_lib0clear(&___nl__im__22);
#line 690
c_rt_lib0clear(&___nl__im__23);
#line 690
c_rt_lib0clear(&___nl__im__24);
#line 690
//clear ___nl__bool__28;
#line 690
c_rt_lib0clear(&___nl__im__29);
#line 690
c_rt_lib0clear(&___nl__im__30);
#line 690
c_rt_lib0clear(&___nl__im__42);
#line 690
//clear ___nl__bool__47;
#line 690
c_rt_lib0clear(&___nl__im__48);
#line 690
c_rt_lib0clear(&___nl__im__49);
#line 690
//clear ___nl__bool__50;
#line 690
c_rt_lib0clear(&___nl__im__51);
#line 690
c_rt_lib0clear(&___nl__im__52);
#line 690
c_rt_lib0clear(&___nl__im__54);
#line 690
//clear ___nl__bool__59;
#line 690
c_rt_lib0clear(&___nl__im__60);
#line 690
c_rt_lib0clear(&___nl__im__61);
#line 690
//clear ___nl__bool__62;
#line 690
c_rt_lib0clear(&___nl__im__63);
#line 690
c_rt_lib0clear(&___nl__im__64);
#line 690
c_rt_lib0clear(&___nl__im__66);
#line 690
//clear ___nl__bool__67;
#line 690
c_rt_lib0clear(&___nl__im__68);
#line 690
c_rt_lib0clear(&___nl__im__70);
#line 690
//clear ___nl__bool__88;
#line 690
c_rt_lib0clear(&___nl__im__89);
#line 690
c_rt_lib0clear(&___nl__im__90);
#line 690
//clear ___nl__bool__91;
#line 690
c_rt_lib0clear(&___nl__im__92);
#line 690
c_rt_lib0clear(&___nl__im__93);
#line 690
c_rt_lib0clear(&___nl__im__95);
#line 690
//clear ___nl__bool__98;
#line 690
c_rt_lib0clear(&___nl__im__99);
#line 690
c_rt_lib0clear(&___nl__im__100);
#line 690
//clear ___nl__bool__101;
#line 690
return ___nl__im__102;
#line 690
label_27:
;
#line 690
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__102, ___get_global_const(80)));
#line 690
c_rt_lib0hash_set_value_dec(&___nl__im__95, ___get_global_const(227), ___nl__im__103);
#line 691
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(867), ___nl__im__95));
#line 692
goto label_1;
#line 692
label_25:
;
#line 692
c_rt_lib0move(&___nl__im__104,___get_global_const(863));
#line 692
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__104);
#line 692
c_rt_lib0clear(&___nl__im__104);
#line 692
___nl__bool__4 = !___nl__bool__4;
#line 692
if(___nl__bool__4){ goto label_28;}
#line 693
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_mk(0));
#line 694
c_rt_lib0move(&___nl__im__106,___get_global_const(420));
#line 694
___nl__bool__107 = nparser_priv0eat(___ref___rec__0, ___nl__im__106);
#line 694
c_rt_lib0clear(&___nl__im__106);
#line 694
//clear ___nl__bool__107;
#line 695
___nl__rec_ptr__109 = &((*___ref___rec__0).state0field);
#line 695
c_rt_lib0move(&___nl__im__110,___get_global_const(463));
#line 695
___nl__bool__108 = ntokenizer0next_is(___nl__rec_ptr__109, ___nl__im__110);
#line 695
___nl__rec_ptr__109 = NULL;
#line 695
c_rt_lib0clear(&___nl__im__110);
#line 695
___nl__bool__108 = !___nl__bool__108;
#line 695
if(___nl__bool__108){ goto label_30;}
#line 696
c_rt_lib0move(&___nl__im__113, nparser_priv0parse_var_decl(___ref___rec__0));
#line 696
___nl__bool__112 = c_rt_lib0priv_is(___nl__im__113, ___get_global_const(80));
#line 696
if(___nl__bool__112){ goto label_31;}
#line 696
c_rt_lib0clear(&___nl__im__1);
#line 696
c_rt_lib0clear(&___nl__im__3);
#line 696
//clear ___nl__bool__4;
#line 696
c_rt_lib0clear(&___nl__im__6);
#line 696
//clear ___nl__bool__7;
#line 696
c_rt_lib0clear(&___nl__im__8);
#line 696
c_rt_lib0clear(&___nl__im__9);
#line 696
//clear ___nl__bool__10;
#line 696
c_rt_lib0clear(&___nl__im__11);
#line 696
c_rt_lib0clear(&___nl__im__12);
#line 696
c_rt_lib0clear(&___nl__im__13);
#line 696
//clear ___nl__bool__16;
#line 696
c_rt_lib0clear(&___nl__im__18);
#line 696
c_rt_lib0clear(&___nl__im__19);
#line 696
//clear ___nl__bool__21;
#line 696
c_rt_lib0clear(&___nl__im__22);
#line 696
c_rt_lib0clear(&___nl__im__23);
#line 696
c_rt_lib0clear(&___nl__im__24);
#line 696
//clear ___nl__bool__28;
#line 696
c_rt_lib0clear(&___nl__im__29);
#line 696
c_rt_lib0clear(&___nl__im__30);
#line 696
c_rt_lib0clear(&___nl__im__42);
#line 696
//clear ___nl__bool__47;
#line 696
c_rt_lib0clear(&___nl__im__48);
#line 696
c_rt_lib0clear(&___nl__im__49);
#line 696
//clear ___nl__bool__50;
#line 696
c_rt_lib0clear(&___nl__im__51);
#line 696
c_rt_lib0clear(&___nl__im__52);
#line 696
c_rt_lib0clear(&___nl__im__54);
#line 696
//clear ___nl__bool__59;
#line 696
c_rt_lib0clear(&___nl__im__60);
#line 696
c_rt_lib0clear(&___nl__im__61);
#line 696
//clear ___nl__bool__62;
#line 696
c_rt_lib0clear(&___nl__im__63);
#line 696
c_rt_lib0clear(&___nl__im__64);
#line 696
c_rt_lib0clear(&___nl__im__66);
#line 696
//clear ___nl__bool__67;
#line 696
c_rt_lib0clear(&___nl__im__68);
#line 696
c_rt_lib0clear(&___nl__im__70);
#line 696
//clear ___nl__bool__88;
#line 696
c_rt_lib0clear(&___nl__im__89);
#line 696
c_rt_lib0clear(&___nl__im__90);
#line 696
//clear ___nl__bool__91;
#line 696
c_rt_lib0clear(&___nl__im__92);
#line 696
c_rt_lib0clear(&___nl__im__93);
#line 696
c_rt_lib0clear(&___nl__im__95);
#line 696
//clear ___nl__bool__98;
#line 696
c_rt_lib0clear(&___nl__im__99);
#line 696
c_rt_lib0clear(&___nl__im__100);
#line 696
//clear ___nl__bool__101;
#line 696
c_rt_lib0clear(&___nl__im__102);
#line 696
c_rt_lib0clear(&___nl__im__103);
#line 696
c_rt_lib0clear(&___nl__im__105);
#line 696
//clear ___nl__bool__108;
#line 696
c_rt_lib0clear(&___nl__im__111);
#line 696
//clear ___nl__bool__112;
#line 696
return ___nl__im__113;
#line 696
label_31:
;
#line 696
c_rt_lib0move(&___nl__im__111, c_rt_lib0priv_as(___nl__im__113, ___get_global_const(80)));
#line 697
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__111));
#line 697
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 697
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(879), ___nl__im__114);
#line 697
c_rt_lib0clear(&___nl__im__114);
#line 697
c_rt_lib0clear(&___nl__im__115);
#line 698
goto label_29;
#line 698
label_30:
;
#line 698
___nl__rec_ptr__116 = &((*___ref___rec__0).state0field);
#line 698
c_rt_lib0move(&___nl__im__117,___get_global_const(409));
#line 698
___nl__bool__108 = ntokenizer0next_is(___nl__rec_ptr__116, ___nl__im__117);
#line 698
___nl__rec_ptr__116 = NULL;
#line 698
c_rt_lib0clear(&___nl__im__117);
#line 698
___nl__bool__108 = !___nl__bool__108;
#line 698
if(___nl__bool__108){ goto label_32;}
#line 699
c_rt_lib0move(&___nl__im__120, nparser_priv0get_value_nop(___ref___rec__0));
#line 699
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__120));
#line 699
c_rt_lib0clear(&___nl__im__120);
#line 699
c_rt_lib0copy(&___nl__im__118, ___nl__im__119);
#line 699
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(879), ___nl__im__118);
#line 699
c_rt_lib0clear(&___nl__im__118);
#line 699
c_rt_lib0clear(&___nl__im__119);
#line 700
goto label_29;
#line 700
label_32:
;
#line 701
c_rt_lib0move(&___nl__im__123, nparser_priv0parse_expr(___ref___rec__0));
#line 701
___nl__bool__122 = c_rt_lib0priv_is(___nl__im__123, ___get_global_const(80));
#line 701
if(___nl__bool__122){ goto label_33;}
#line 701
c_rt_lib0clear(&___nl__im__1);
#line 701
c_rt_lib0clear(&___nl__im__3);
#line 701
//clear ___nl__bool__4;
#line 701
c_rt_lib0clear(&___nl__im__6);
#line 701
//clear ___nl__bool__7;
#line 701
c_rt_lib0clear(&___nl__im__8);
#line 701
c_rt_lib0clear(&___nl__im__9);
#line 701
//clear ___nl__bool__10;
#line 701
c_rt_lib0clear(&___nl__im__11);
#line 701
c_rt_lib0clear(&___nl__im__12);
#line 701
c_rt_lib0clear(&___nl__im__13);
#line 701
//clear ___nl__bool__16;
#line 701
c_rt_lib0clear(&___nl__im__18);
#line 701
c_rt_lib0clear(&___nl__im__19);
#line 701
//clear ___nl__bool__21;
#line 701
c_rt_lib0clear(&___nl__im__22);
#line 701
c_rt_lib0clear(&___nl__im__23);
#line 701
c_rt_lib0clear(&___nl__im__24);
#line 701
//clear ___nl__bool__28;
#line 701
c_rt_lib0clear(&___nl__im__29);
#line 701
c_rt_lib0clear(&___nl__im__30);
#line 701
c_rt_lib0clear(&___nl__im__42);
#line 701
//clear ___nl__bool__47;
#line 701
c_rt_lib0clear(&___nl__im__48);
#line 701
c_rt_lib0clear(&___nl__im__49);
#line 701
//clear ___nl__bool__50;
#line 701
c_rt_lib0clear(&___nl__im__51);
#line 701
c_rt_lib0clear(&___nl__im__52);
#line 701
c_rt_lib0clear(&___nl__im__54);
#line 701
//clear ___nl__bool__59;
#line 701
c_rt_lib0clear(&___nl__im__60);
#line 701
c_rt_lib0clear(&___nl__im__61);
#line 701
//clear ___nl__bool__62;
#line 701
c_rt_lib0clear(&___nl__im__63);
#line 701
c_rt_lib0clear(&___nl__im__64);
#line 701
c_rt_lib0clear(&___nl__im__66);
#line 701
//clear ___nl__bool__67;
#line 701
c_rt_lib0clear(&___nl__im__68);
#line 701
c_rt_lib0clear(&___nl__im__70);
#line 701
//clear ___nl__bool__88;
#line 701
c_rt_lib0clear(&___nl__im__89);
#line 701
c_rt_lib0clear(&___nl__im__90);
#line 701
//clear ___nl__bool__91;
#line 701
c_rt_lib0clear(&___nl__im__92);
#line 701
c_rt_lib0clear(&___nl__im__93);
#line 701
c_rt_lib0clear(&___nl__im__95);
#line 701
//clear ___nl__bool__98;
#line 701
c_rt_lib0clear(&___nl__im__99);
#line 701
c_rt_lib0clear(&___nl__im__100);
#line 701
//clear ___nl__bool__101;
#line 701
c_rt_lib0clear(&___nl__im__102);
#line 701
c_rt_lib0clear(&___nl__im__103);
#line 701
c_rt_lib0clear(&___nl__im__105);
#line 701
//clear ___nl__bool__108;
#line 701
c_rt_lib0clear(&___nl__im__111);
#line 701
//clear ___nl__bool__112;
#line 701
c_rt_lib0clear(&___nl__im__113);
#line 701
c_rt_lib0clear(&___nl__im__121);
#line 701
//clear ___nl__bool__122;
#line 701
return ___nl__im__123;
#line 701
label_33:
;
#line 701
c_rt_lib0move(&___nl__im__121, c_rt_lib0priv_as(___nl__im__123, ___get_global_const(80)));
#line 702
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__121));
#line 702
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 702
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(879), ___nl__im__124);
#line 702
c_rt_lib0clear(&___nl__im__124);
#line 702
c_rt_lib0clear(&___nl__im__125);
#line 703
goto label_29;
#line 703
label_29:
;
#line 703
//clear ___nl__bool__108;
#line 703
c_rt_lib0clear(&___nl__im__111);
#line 703
//clear ___nl__bool__112;
#line 703
c_rt_lib0clear(&___nl__im__113);
#line 703
c_rt_lib0clear(&___nl__im__121);
#line 703
//clear ___nl__bool__122;
#line 703
c_rt_lib0clear(&___nl__im__123);
#line 704
c_rt_lib0move(&___nl__im__126,___get_global_const(409));
#line 704
___nl__bool__127 = nparser_priv0eat(___ref___rec__0, ___nl__im__126);
#line 704
c_rt_lib0clear(&___nl__im__126);
#line 704
//clear ___nl__bool__127;
#line 705
c_rt_lib0move(&___nl__im__129, nparser_priv0get_value_nop(___ref___rec__0));
#line 705
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 705
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(876), ___nl__im__128);
#line 705
c_rt_lib0clear(&___nl__im__128);
#line 705
c_rt_lib0clear(&___nl__im__129);
#line 706
___nl__rec_ptr__131 = &((*___ref___rec__0).state0field);
#line 706
c_rt_lib0move(&___nl__im__132,___get_global_const(409));
#line 706
___nl__bool__130 = ntokenizer0next_is(___nl__rec_ptr__131, ___nl__im__132);
#line 706
___nl__rec_ptr__131 = NULL;
#line 706
c_rt_lib0clear(&___nl__im__132);
#line 706
___nl__bool__130 = !___nl__bool__130;
#line 706
___nl__bool__130 = !___nl__bool__130;
#line 706
if(___nl__bool__130){ goto label_35;}
#line 706
c_rt_lib0move(&___nl__im__134, nparser_priv0parse_expr(___ref___rec__0));
#line 706
___nl__bool__133 = c_rt_lib0priv_is(___nl__im__134, ___get_global_const(80));
#line 706
if(___nl__bool__133){ goto label_36;}
#line 706
c_rt_lib0clear(&___nl__im__1);
#line 706
c_rt_lib0clear(&___nl__im__3);
#line 706
//clear ___nl__bool__4;
#line 706
c_rt_lib0clear(&___nl__im__6);
#line 706
//clear ___nl__bool__7;
#line 706
c_rt_lib0clear(&___nl__im__8);
#line 706
c_rt_lib0clear(&___nl__im__9);
#line 706
//clear ___nl__bool__10;
#line 706
c_rt_lib0clear(&___nl__im__11);
#line 706
c_rt_lib0clear(&___nl__im__12);
#line 706
c_rt_lib0clear(&___nl__im__13);
#line 706
//clear ___nl__bool__16;
#line 706
c_rt_lib0clear(&___nl__im__18);
#line 706
c_rt_lib0clear(&___nl__im__19);
#line 706
//clear ___nl__bool__21;
#line 706
c_rt_lib0clear(&___nl__im__22);
#line 706
c_rt_lib0clear(&___nl__im__23);
#line 706
c_rt_lib0clear(&___nl__im__24);
#line 706
//clear ___nl__bool__28;
#line 706
c_rt_lib0clear(&___nl__im__29);
#line 706
c_rt_lib0clear(&___nl__im__30);
#line 706
c_rt_lib0clear(&___nl__im__42);
#line 706
//clear ___nl__bool__47;
#line 706
c_rt_lib0clear(&___nl__im__48);
#line 706
c_rt_lib0clear(&___nl__im__49);
#line 706
//clear ___nl__bool__50;
#line 706
c_rt_lib0clear(&___nl__im__51);
#line 706
c_rt_lib0clear(&___nl__im__52);
#line 706
c_rt_lib0clear(&___nl__im__54);
#line 706
//clear ___nl__bool__59;
#line 706
c_rt_lib0clear(&___nl__im__60);
#line 706
c_rt_lib0clear(&___nl__im__61);
#line 706
//clear ___nl__bool__62;
#line 706
c_rt_lib0clear(&___nl__im__63);
#line 706
c_rt_lib0clear(&___nl__im__64);
#line 706
c_rt_lib0clear(&___nl__im__66);
#line 706
//clear ___nl__bool__67;
#line 706
c_rt_lib0clear(&___nl__im__68);
#line 706
c_rt_lib0clear(&___nl__im__70);
#line 706
//clear ___nl__bool__88;
#line 706
c_rt_lib0clear(&___nl__im__89);
#line 706
c_rt_lib0clear(&___nl__im__90);
#line 706
//clear ___nl__bool__91;
#line 706
c_rt_lib0clear(&___nl__im__92);
#line 706
c_rt_lib0clear(&___nl__im__93);
#line 706
c_rt_lib0clear(&___nl__im__95);
#line 706
//clear ___nl__bool__98;
#line 706
c_rt_lib0clear(&___nl__im__99);
#line 706
c_rt_lib0clear(&___nl__im__100);
#line 706
//clear ___nl__bool__101;
#line 706
c_rt_lib0clear(&___nl__im__102);
#line 706
c_rt_lib0clear(&___nl__im__103);
#line 706
c_rt_lib0clear(&___nl__im__105);
#line 706
//clear ___nl__bool__130;
#line 706
//clear ___nl__bool__133;
#line 706
return ___nl__im__134;
#line 706
label_36:
;
#line 706
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__134, ___get_global_const(80)));
#line 706
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(876), ___nl__im__135);
#line 706
goto label_34;
#line 706
label_35:
;
#line 706
label_34:
;
#line 706
//clear ___nl__bool__130;
#line 706
//clear ___nl__bool__133;
#line 706
c_rt_lib0clear(&___nl__im__134);
#line 706
c_rt_lib0clear(&___nl__im__135);
#line 707
c_rt_lib0move(&___nl__im__136,___get_global_const(409));
#line 707
___nl__bool__137 = nparser_priv0eat(___ref___rec__0, ___nl__im__136);
#line 707
c_rt_lib0clear(&___nl__im__136);
#line 707
//clear ___nl__bool__137;
#line 708
c_rt_lib0move(&___nl__im__139, nparser_priv0get_value_nop(___ref___rec__0));
#line 708
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 708
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(569), ___nl__im__138);
#line 708
c_rt_lib0clear(&___nl__im__138);
#line 708
c_rt_lib0clear(&___nl__im__139);
#line 709
___nl__rec_ptr__141 = &((*___ref___rec__0).state0field);
#line 709
c_rt_lib0move(&___nl__im__142,___get_global_const(299));
#line 709
___nl__bool__140 = ntokenizer0next_is(___nl__rec_ptr__141, ___nl__im__142);
#line 709
___nl__rec_ptr__141 = NULL;
#line 709
c_rt_lib0clear(&___nl__im__142);
#line 709
___nl__bool__140 = !___nl__bool__140;
#line 709
___nl__bool__140 = !___nl__bool__140;
#line 709
if(___nl__bool__140){ goto label_38;}
#line 709
c_rt_lib0move(&___nl__im__144, nparser_priv0parse_expr(___ref___rec__0));
#line 709
___nl__bool__143 = c_rt_lib0priv_is(___nl__im__144, ___get_global_const(80));
#line 709
if(___nl__bool__143){ goto label_39;}
#line 709
c_rt_lib0clear(&___nl__im__1);
#line 709
c_rt_lib0clear(&___nl__im__3);
#line 709
//clear ___nl__bool__4;
#line 709
c_rt_lib0clear(&___nl__im__6);
#line 709
//clear ___nl__bool__7;
#line 709
c_rt_lib0clear(&___nl__im__8);
#line 709
c_rt_lib0clear(&___nl__im__9);
#line 709
//clear ___nl__bool__10;
#line 709
c_rt_lib0clear(&___nl__im__11);
#line 709
c_rt_lib0clear(&___nl__im__12);
#line 709
c_rt_lib0clear(&___nl__im__13);
#line 709
//clear ___nl__bool__16;
#line 709
c_rt_lib0clear(&___nl__im__18);
#line 709
c_rt_lib0clear(&___nl__im__19);
#line 709
//clear ___nl__bool__21;
#line 709
c_rt_lib0clear(&___nl__im__22);
#line 709
c_rt_lib0clear(&___nl__im__23);
#line 709
c_rt_lib0clear(&___nl__im__24);
#line 709
//clear ___nl__bool__28;
#line 709
c_rt_lib0clear(&___nl__im__29);
#line 709
c_rt_lib0clear(&___nl__im__30);
#line 709
c_rt_lib0clear(&___nl__im__42);
#line 709
//clear ___nl__bool__47;
#line 709
c_rt_lib0clear(&___nl__im__48);
#line 709
c_rt_lib0clear(&___nl__im__49);
#line 709
//clear ___nl__bool__50;
#line 709
c_rt_lib0clear(&___nl__im__51);
#line 709
c_rt_lib0clear(&___nl__im__52);
#line 709
c_rt_lib0clear(&___nl__im__54);
#line 709
//clear ___nl__bool__59;
#line 709
c_rt_lib0clear(&___nl__im__60);
#line 709
c_rt_lib0clear(&___nl__im__61);
#line 709
//clear ___nl__bool__62;
#line 709
c_rt_lib0clear(&___nl__im__63);
#line 709
c_rt_lib0clear(&___nl__im__64);
#line 709
c_rt_lib0clear(&___nl__im__66);
#line 709
//clear ___nl__bool__67;
#line 709
c_rt_lib0clear(&___nl__im__68);
#line 709
c_rt_lib0clear(&___nl__im__70);
#line 709
//clear ___nl__bool__88;
#line 709
c_rt_lib0clear(&___nl__im__89);
#line 709
c_rt_lib0clear(&___nl__im__90);
#line 709
//clear ___nl__bool__91;
#line 709
c_rt_lib0clear(&___nl__im__92);
#line 709
c_rt_lib0clear(&___nl__im__93);
#line 709
c_rt_lib0clear(&___nl__im__95);
#line 709
//clear ___nl__bool__98;
#line 709
c_rt_lib0clear(&___nl__im__99);
#line 709
c_rt_lib0clear(&___nl__im__100);
#line 709
//clear ___nl__bool__101;
#line 709
c_rt_lib0clear(&___nl__im__102);
#line 709
c_rt_lib0clear(&___nl__im__103);
#line 709
c_rt_lib0clear(&___nl__im__105);
#line 709
//clear ___nl__bool__140;
#line 709
//clear ___nl__bool__143;
#line 709
return ___nl__im__144;
#line 709
label_39:
;
#line 709
c_rt_lib0move(&___nl__im__145, c_rt_lib0priv_as(___nl__im__144, ___get_global_const(80)));
#line 709
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(569), ___nl__im__145);
#line 709
goto label_37;
#line 709
label_38:
;
#line 709
label_37:
;
#line 709
//clear ___nl__bool__140;
#line 709
//clear ___nl__bool__143;
#line 709
c_rt_lib0clear(&___nl__im__144);
#line 709
c_rt_lib0clear(&___nl__im__145);
#line 710
c_rt_lib0move(&___nl__im__146,___get_global_const(299));
#line 710
___nl__bool__147 = nparser_priv0eat(___ref___rec__0, ___nl__im__146);
#line 710
c_rt_lib0clear(&___nl__im__146);
#line 710
//clear ___nl__bool__147;
#line 711
c_rt_lib0move(&___nl__im__149, nparser_priv0parse_block(___ref___rec__0));
#line 711
___nl__bool__148 = c_rt_lib0priv_is(___nl__im__149, ___get_global_const(80));
#line 711
if(___nl__bool__148){ goto label_40;}
#line 711
c_rt_lib0clear(&___nl__im__1);
#line 711
c_rt_lib0clear(&___nl__im__3);
#line 711
//clear ___nl__bool__4;
#line 711
c_rt_lib0clear(&___nl__im__6);
#line 711
//clear ___nl__bool__7;
#line 711
c_rt_lib0clear(&___nl__im__8);
#line 711
c_rt_lib0clear(&___nl__im__9);
#line 711
//clear ___nl__bool__10;
#line 711
c_rt_lib0clear(&___nl__im__11);
#line 711
c_rt_lib0clear(&___nl__im__12);
#line 711
c_rt_lib0clear(&___nl__im__13);
#line 711
//clear ___nl__bool__16;
#line 711
c_rt_lib0clear(&___nl__im__18);
#line 711
c_rt_lib0clear(&___nl__im__19);
#line 711
//clear ___nl__bool__21;
#line 711
c_rt_lib0clear(&___nl__im__22);
#line 711
c_rt_lib0clear(&___nl__im__23);
#line 711
c_rt_lib0clear(&___nl__im__24);
#line 711
//clear ___nl__bool__28;
#line 711
c_rt_lib0clear(&___nl__im__29);
#line 711
c_rt_lib0clear(&___nl__im__30);
#line 711
c_rt_lib0clear(&___nl__im__42);
#line 711
//clear ___nl__bool__47;
#line 711
c_rt_lib0clear(&___nl__im__48);
#line 711
c_rt_lib0clear(&___nl__im__49);
#line 711
//clear ___nl__bool__50;
#line 711
c_rt_lib0clear(&___nl__im__51);
#line 711
c_rt_lib0clear(&___nl__im__52);
#line 711
c_rt_lib0clear(&___nl__im__54);
#line 711
//clear ___nl__bool__59;
#line 711
c_rt_lib0clear(&___nl__im__60);
#line 711
c_rt_lib0clear(&___nl__im__61);
#line 711
//clear ___nl__bool__62;
#line 711
c_rt_lib0clear(&___nl__im__63);
#line 711
c_rt_lib0clear(&___nl__im__64);
#line 711
c_rt_lib0clear(&___nl__im__66);
#line 711
//clear ___nl__bool__67;
#line 711
c_rt_lib0clear(&___nl__im__68);
#line 711
c_rt_lib0clear(&___nl__im__70);
#line 711
//clear ___nl__bool__88;
#line 711
c_rt_lib0clear(&___nl__im__89);
#line 711
c_rt_lib0clear(&___nl__im__90);
#line 711
//clear ___nl__bool__91;
#line 711
c_rt_lib0clear(&___nl__im__92);
#line 711
c_rt_lib0clear(&___nl__im__93);
#line 711
c_rt_lib0clear(&___nl__im__95);
#line 711
//clear ___nl__bool__98;
#line 711
c_rt_lib0clear(&___nl__im__99);
#line 711
c_rt_lib0clear(&___nl__im__100);
#line 711
//clear ___nl__bool__101;
#line 711
c_rt_lib0clear(&___nl__im__102);
#line 711
c_rt_lib0clear(&___nl__im__103);
#line 711
c_rt_lib0clear(&___nl__im__105);
#line 711
//clear ___nl__bool__148;
#line 711
return ___nl__im__149;
#line 711
label_40:
;
#line 711
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__149, ___get_global_const(80)));
#line 711
c_rt_lib0hash_set_value_dec(&___nl__im__105, ___get_global_const(227), ___nl__im__150);
#line 712
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(863), ___nl__im__105));
#line 713
goto label_1;
#line 713
label_28:
;
#line 713
___nl__rec_ptr__151 = &((*___ref___rec__0).state0field);
#line 713
c_rt_lib0move(&___nl__im__152,___get_global_const(291));
#line 713
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__151, ___nl__im__152);
#line 713
___nl__rec_ptr__151 = NULL;
#line 713
c_rt_lib0clear(&___nl__im__152);
#line 713
___nl__bool__4 = !___nl__bool__4;
#line 713
if(___nl__bool__4){ goto label_41;}
#line 714
c_rt_lib0move(&___nl__im__155, nparser_priv0parse_block(___ref___rec__0));
#line 714
___nl__bool__154 = c_rt_lib0priv_is(___nl__im__155, ___get_global_const(80));
#line 714
if(___nl__bool__154){ goto label_42;}
#line 714
c_rt_lib0clear(&___nl__im__1);
#line 714
c_rt_lib0clear(&___nl__im__3);
#line 714
//clear ___nl__bool__4;
#line 714
c_rt_lib0clear(&___nl__im__6);
#line 714
//clear ___nl__bool__7;
#line 714
c_rt_lib0clear(&___nl__im__8);
#line 714
c_rt_lib0clear(&___nl__im__9);
#line 714
//clear ___nl__bool__10;
#line 714
c_rt_lib0clear(&___nl__im__11);
#line 714
c_rt_lib0clear(&___nl__im__12);
#line 714
c_rt_lib0clear(&___nl__im__13);
#line 714
//clear ___nl__bool__16;
#line 714
c_rt_lib0clear(&___nl__im__18);
#line 714
c_rt_lib0clear(&___nl__im__19);
#line 714
//clear ___nl__bool__21;
#line 714
c_rt_lib0clear(&___nl__im__22);
#line 714
c_rt_lib0clear(&___nl__im__23);
#line 714
c_rt_lib0clear(&___nl__im__24);
#line 714
//clear ___nl__bool__28;
#line 714
c_rt_lib0clear(&___nl__im__29);
#line 714
c_rt_lib0clear(&___nl__im__30);
#line 714
c_rt_lib0clear(&___nl__im__42);
#line 714
//clear ___nl__bool__47;
#line 714
c_rt_lib0clear(&___nl__im__48);
#line 714
c_rt_lib0clear(&___nl__im__49);
#line 714
//clear ___nl__bool__50;
#line 714
c_rt_lib0clear(&___nl__im__51);
#line 714
c_rt_lib0clear(&___nl__im__52);
#line 714
c_rt_lib0clear(&___nl__im__54);
#line 714
//clear ___nl__bool__59;
#line 714
c_rt_lib0clear(&___nl__im__60);
#line 714
c_rt_lib0clear(&___nl__im__61);
#line 714
//clear ___nl__bool__62;
#line 714
c_rt_lib0clear(&___nl__im__63);
#line 714
c_rt_lib0clear(&___nl__im__64);
#line 714
c_rt_lib0clear(&___nl__im__66);
#line 714
//clear ___nl__bool__67;
#line 714
c_rt_lib0clear(&___nl__im__68);
#line 714
c_rt_lib0clear(&___nl__im__70);
#line 714
//clear ___nl__bool__88;
#line 714
c_rt_lib0clear(&___nl__im__89);
#line 714
c_rt_lib0clear(&___nl__im__90);
#line 714
//clear ___nl__bool__91;
#line 714
c_rt_lib0clear(&___nl__im__92);
#line 714
c_rt_lib0clear(&___nl__im__93);
#line 714
c_rt_lib0clear(&___nl__im__95);
#line 714
//clear ___nl__bool__98;
#line 714
c_rt_lib0clear(&___nl__im__99);
#line 714
c_rt_lib0clear(&___nl__im__100);
#line 714
//clear ___nl__bool__101;
#line 714
c_rt_lib0clear(&___nl__im__102);
#line 714
c_rt_lib0clear(&___nl__im__103);
#line 714
c_rt_lib0clear(&___nl__im__105);
#line 714
//clear ___nl__bool__148;
#line 714
c_rt_lib0clear(&___nl__im__149);
#line 714
c_rt_lib0clear(&___nl__im__150);
#line 714
c_rt_lib0clear(&___nl__im__153);
#line 714
//clear ___nl__bool__154;
#line 714
return ___nl__im__155;
#line 714
label_42:
;
#line 714
c_rt_lib0move(&___nl__im__153, c_rt_lib0priv_as(___nl__im__155, ___get_global_const(80)));
#line 715
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__153, ___get_global_const(227)));
#line 716
goto label_1;
#line 716
label_41:
;
#line 716
c_rt_lib0move(&___nl__im__156,___get_global_const(870));
#line 716
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__156);
#line 716
c_rt_lib0clear(&___nl__im__156);
#line 716
___nl__bool__4 = !___nl__bool__4;
#line 716
if(___nl__bool__4){ goto label_43;}
#line 717
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(870)));
#line 718
goto label_1;
#line 718
label_43:
;
#line 718
c_rt_lib0move(&___nl__im__157,___get_global_const(871));
#line 718
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__157);
#line 718
c_rt_lib0clear(&___nl__im__157);
#line 718
___nl__bool__4 = !___nl__bool__4;
#line 718
if(___nl__bool__4){ goto label_44;}
#line 719
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(871)));
#line 720
goto label_1;
#line 720
label_44:
;
#line 720
c_rt_lib0move(&___nl__im__158,___get_global_const(246));
#line 720
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__158);
#line 720
c_rt_lib0clear(&___nl__im__158);
#line 720
___nl__bool__4 = !___nl__bool__4;
#line 720
if(___nl__bool__4){ goto label_45;}
#line 721
___nl__rec_ptr__160 = &((*___ref___rec__0).state0field);
#line 721
c_rt_lib0move(&___nl__im__159, ntokenizer0get_token(___nl__rec_ptr__160));
#line 721
___nl__rec_ptr__160 = NULL;
#line 722
___nl__bool__161 = false;
#line 723
c_rt_lib0move(&___nl__im__162, nparser_priv0get_end_list());
#line 723
___nl__int__164 = 0;
#line 723
___nl__int__165 = 1;
#line 723
___nl__int__166 = c_rt_lib0array_len(___nl__im__162);
#line 723
label_48:
;
#line 723
___nl__int__168 = ___nl__int__164 >= ___nl__int__166;
#line 723
___nl__bool__167 = ___nl__int__168;
#line 723
if(___nl__bool__167){ goto label_46;}
#line 723
c_rt_lib0move(&___nl__im__169, c_rt_lib0array_get(___nl__im__162, ___nl__int__164));
#line 723
c_rt_lib0copy(&___nl__im__163, ___nl__im__169);
#line 724
___nl__bool__170 = c_rt_lib0eq(___nl__im__159, ___nl__im__163);
#line 724
___nl__bool__170 = !___nl__bool__170;
#line 724
if(___nl__bool__170){ goto label_50;}
#line 725
___nl__bool__161 = true;
#line 726
goto label_46;
#line 727
goto label_49;
#line 727
label_50:
;
#line 727
label_49:
;
#line 727
//clear ___nl__bool__170;
#line 727
c_rt_lib0clear(&___nl__im__163);
#line 727
label_47:
;
#line 728
___nl__int__164 = ___nl__int__164 + ___nl__int__165;
#line 728
goto label_48;
#line 728
label_46:
;
#line 729
___nl__bool__171 = ___nl__bool__161;
#line 729
___nl__bool__171 = !___nl__bool__171;
#line 729
if(___nl__bool__171){ goto label_52;}
#line 730
c_rt_lib0move(&___nl__im__172, nparser_priv0get_value_nop(___ref___rec__0));
#line 730
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__172));
#line 730
c_rt_lib0clear(&___nl__im__172);
#line 731
goto label_51;
#line 731
label_52:
;
#line 732
c_rt_lib0move(&___nl__im__175, nparser_priv0parse_expr(___ref___rec__0));
#line 732
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__175, ___get_global_const(80));
#line 732
if(___nl__bool__174){ goto label_53;}
#line 732
c_rt_lib0clear(&___nl__im__1);
#line 732
c_rt_lib0clear(&___nl__im__3);
#line 732
//clear ___nl__bool__4;
#line 732
c_rt_lib0clear(&___nl__im__6);
#line 732
//clear ___nl__bool__7;
#line 732
c_rt_lib0clear(&___nl__im__8);
#line 732
c_rt_lib0clear(&___nl__im__9);
#line 732
//clear ___nl__bool__10;
#line 732
c_rt_lib0clear(&___nl__im__11);
#line 732
c_rt_lib0clear(&___nl__im__12);
#line 732
c_rt_lib0clear(&___nl__im__13);
#line 732
//clear ___nl__bool__16;
#line 732
c_rt_lib0clear(&___nl__im__18);
#line 732
c_rt_lib0clear(&___nl__im__19);
#line 732
//clear ___nl__bool__21;
#line 732
c_rt_lib0clear(&___nl__im__22);
#line 732
c_rt_lib0clear(&___nl__im__23);
#line 732
c_rt_lib0clear(&___nl__im__24);
#line 732
//clear ___nl__bool__28;
#line 732
c_rt_lib0clear(&___nl__im__29);
#line 732
c_rt_lib0clear(&___nl__im__30);
#line 732
c_rt_lib0clear(&___nl__im__42);
#line 732
//clear ___nl__bool__47;
#line 732
c_rt_lib0clear(&___nl__im__48);
#line 732
c_rt_lib0clear(&___nl__im__49);
#line 732
//clear ___nl__bool__50;
#line 732
c_rt_lib0clear(&___nl__im__51);
#line 732
c_rt_lib0clear(&___nl__im__52);
#line 732
c_rt_lib0clear(&___nl__im__54);
#line 732
//clear ___nl__bool__59;
#line 732
c_rt_lib0clear(&___nl__im__60);
#line 732
c_rt_lib0clear(&___nl__im__61);
#line 732
//clear ___nl__bool__62;
#line 732
c_rt_lib0clear(&___nl__im__63);
#line 732
c_rt_lib0clear(&___nl__im__64);
#line 732
c_rt_lib0clear(&___nl__im__66);
#line 732
//clear ___nl__bool__67;
#line 732
c_rt_lib0clear(&___nl__im__68);
#line 732
c_rt_lib0clear(&___nl__im__70);
#line 732
//clear ___nl__bool__88;
#line 732
c_rt_lib0clear(&___nl__im__89);
#line 732
c_rt_lib0clear(&___nl__im__90);
#line 732
//clear ___nl__bool__91;
#line 732
c_rt_lib0clear(&___nl__im__92);
#line 732
c_rt_lib0clear(&___nl__im__93);
#line 732
c_rt_lib0clear(&___nl__im__95);
#line 732
//clear ___nl__bool__98;
#line 732
c_rt_lib0clear(&___nl__im__99);
#line 732
c_rt_lib0clear(&___nl__im__100);
#line 732
//clear ___nl__bool__101;
#line 732
c_rt_lib0clear(&___nl__im__102);
#line 732
c_rt_lib0clear(&___nl__im__103);
#line 732
c_rt_lib0clear(&___nl__im__105);
#line 732
//clear ___nl__bool__148;
#line 732
c_rt_lib0clear(&___nl__im__149);
#line 732
c_rt_lib0clear(&___nl__im__150);
#line 732
c_rt_lib0clear(&___nl__im__153);
#line 732
//clear ___nl__bool__154;
#line 732
c_rt_lib0clear(&___nl__im__155);
#line 732
c_rt_lib0clear(&___nl__im__159);
#line 732
//clear ___nl__bool__161;
#line 732
c_rt_lib0clear(&___nl__im__162);
#line 732
c_rt_lib0clear(&___nl__im__163);
#line 732
//clear ___nl__int__164;
#line 732
//clear ___nl__int__165;
#line 732
//clear ___nl__int__166;
#line 732
//clear ___nl__bool__167;
#line 732
//clear ___nl__int__168;
#line 732
c_rt_lib0clear(&___nl__im__169);
#line 732
//clear ___nl__bool__171;
#line 732
c_rt_lib0clear(&___nl__im__173);
#line 732
//clear ___nl__bool__174;
#line 732
return ___nl__im__175;
#line 732
label_53:
;
#line 732
c_rt_lib0move(&___nl__im__173, c_rt_lib0priv_as(___nl__im__175, ___get_global_const(80)));
#line 733
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__173));
#line 734
goto label_51;
#line 734
label_51:
;
#line 734
//clear ___nl__bool__171;
#line 734
c_rt_lib0clear(&___nl__im__173);
#line 734
//clear ___nl__bool__174;
#line 734
c_rt_lib0clear(&___nl__im__175);
#line 735
goto label_1;
#line 735
label_45:
;
#line 735
c_rt_lib0move(&___nl__im__176,___get_global_const(872));
#line 735
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__176);
#line 735
c_rt_lib0clear(&___nl__im__176);
#line 735
___nl__bool__4 = !___nl__bool__4;
#line 735
if(___nl__bool__4){ goto label_54;}
#line 736
c_rt_lib0move(&___nl__im__177,___get_global_const(420));
#line 736
___nl__bool__178 = nparser_priv0eat(___ref___rec__0, ___nl__im__177);
#line 736
c_rt_lib0clear(&___nl__im__177);
#line 736
//clear ___nl__bool__178;
#line 737
c_rt_lib0move(&___nl__im__181, nparser_priv0parse_expr(___ref___rec__0));
#line 737
___nl__bool__180 = c_rt_lib0priv_is(___nl__im__181, ___get_global_const(80));
#line 737
if(___nl__bool__180){ goto label_55;}
#line 737
c_rt_lib0clear(&___nl__im__1);
#line 737
c_rt_lib0clear(&___nl__im__3);
#line 737
//clear ___nl__bool__4;
#line 737
c_rt_lib0clear(&___nl__im__6);
#line 737
//clear ___nl__bool__7;
#line 737
c_rt_lib0clear(&___nl__im__8);
#line 737
c_rt_lib0clear(&___nl__im__9);
#line 737
//clear ___nl__bool__10;
#line 737
c_rt_lib0clear(&___nl__im__11);
#line 737
c_rt_lib0clear(&___nl__im__12);
#line 737
c_rt_lib0clear(&___nl__im__13);
#line 737
//clear ___nl__bool__16;
#line 737
c_rt_lib0clear(&___nl__im__18);
#line 737
c_rt_lib0clear(&___nl__im__19);
#line 737
//clear ___nl__bool__21;
#line 737
c_rt_lib0clear(&___nl__im__22);
#line 737
c_rt_lib0clear(&___nl__im__23);
#line 737
c_rt_lib0clear(&___nl__im__24);
#line 737
//clear ___nl__bool__28;
#line 737
c_rt_lib0clear(&___nl__im__29);
#line 737
c_rt_lib0clear(&___nl__im__30);
#line 737
c_rt_lib0clear(&___nl__im__42);
#line 737
//clear ___nl__bool__47;
#line 737
c_rt_lib0clear(&___nl__im__48);
#line 737
c_rt_lib0clear(&___nl__im__49);
#line 737
//clear ___nl__bool__50;
#line 737
c_rt_lib0clear(&___nl__im__51);
#line 737
c_rt_lib0clear(&___nl__im__52);
#line 737
c_rt_lib0clear(&___nl__im__54);
#line 737
//clear ___nl__bool__59;
#line 737
c_rt_lib0clear(&___nl__im__60);
#line 737
c_rt_lib0clear(&___nl__im__61);
#line 737
//clear ___nl__bool__62;
#line 737
c_rt_lib0clear(&___nl__im__63);
#line 737
c_rt_lib0clear(&___nl__im__64);
#line 737
c_rt_lib0clear(&___nl__im__66);
#line 737
//clear ___nl__bool__67;
#line 737
c_rt_lib0clear(&___nl__im__68);
#line 737
c_rt_lib0clear(&___nl__im__70);
#line 737
//clear ___nl__bool__88;
#line 737
c_rt_lib0clear(&___nl__im__89);
#line 737
c_rt_lib0clear(&___nl__im__90);
#line 737
//clear ___nl__bool__91;
#line 737
c_rt_lib0clear(&___nl__im__92);
#line 737
c_rt_lib0clear(&___nl__im__93);
#line 737
c_rt_lib0clear(&___nl__im__95);
#line 737
//clear ___nl__bool__98;
#line 737
c_rt_lib0clear(&___nl__im__99);
#line 737
c_rt_lib0clear(&___nl__im__100);
#line 737
//clear ___nl__bool__101;
#line 737
c_rt_lib0clear(&___nl__im__102);
#line 737
c_rt_lib0clear(&___nl__im__103);
#line 737
c_rt_lib0clear(&___nl__im__105);
#line 737
//clear ___nl__bool__148;
#line 737
c_rt_lib0clear(&___nl__im__149);
#line 737
c_rt_lib0clear(&___nl__im__150);
#line 737
c_rt_lib0clear(&___nl__im__153);
#line 737
//clear ___nl__bool__154;
#line 737
c_rt_lib0clear(&___nl__im__155);
#line 737
c_rt_lib0clear(&___nl__im__159);
#line 737
//clear ___nl__bool__161;
#line 737
c_rt_lib0clear(&___nl__im__162);
#line 737
c_rt_lib0clear(&___nl__im__163);
#line 737
//clear ___nl__int__164;
#line 737
//clear ___nl__int__165;
#line 737
//clear ___nl__int__166;
#line 737
//clear ___nl__bool__167;
#line 737
//clear ___nl__int__168;
#line 737
c_rt_lib0clear(&___nl__im__169);
#line 737
c_rt_lib0clear(&___nl__im__179);
#line 737
//clear ___nl__bool__180;
#line 737
return ___nl__im__181;
#line 737
label_55:
;
#line 737
c_rt_lib0move(&___nl__im__179, c_rt_lib0priv_as(___nl__im__181, ___get_global_const(80)));
#line 738
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_mk(0));
#line 738
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__179, ___get_global_const(884), ___nl__im__183));
#line 738
c_rt_lib0clear(&___nl__im__183);
#line 739
c_rt_lib0move(&___nl__im__184,___get_global_const(299));
#line 739
___nl__bool__185 = nparser_priv0eat(___ref___rec__0, ___nl__im__184);
#line 739
c_rt_lib0clear(&___nl__im__184);
#line 739
//clear ___nl__bool__185;
#line 740
___nl__rec_ptr__187 = &((*___ref___rec__0).state0field);
#line 740
c_rt_lib0move(&___nl__im__186, ntokenizer0get_place(___nl__rec_ptr__187));
#line 740
___nl__rec_ptr__187 = NULL;
#line 741
label_57:
;
#line 741
c_rt_lib0move(&___nl__im__189,___get_global_const(1007));
#line 741
___nl__bool__188 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__189);
#line 741
c_rt_lib0clear(&___nl__im__189);
#line 741
___nl__bool__188 = !___nl__bool__188;
#line 741
if(___nl__bool__188){ goto label_56;}
#line 742
c_rt_lib0move(&___nl__im__191, nparser_priv0parse_variant_decl(___ref___rec__0));
#line 742
c_rt_lib0move(&___nl__im__190, c_rt_lib0hash_mk(1, ___get_global_const(517), ___nl__im__191));
#line 742
c_rt_lib0clear(&___nl__im__191);
#line 743
___nl__rec_ptr__195 = &((*___ref___rec__0).state0field);
#line 743
c_rt_lib0move(&___nl__im__194, ntokenizer0get_place_ws(___nl__rec_ptr__195));
#line 743
___nl__rec_ptr__195 = NULL;
#line 743
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__186, ___get_global_const(932), ___nl__im__194));
#line 743
c_rt_lib0clear(&___nl__im__194);
#line 743
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 743
c_rt_lib0hash_set_value_dec(&___nl__im__190, ___get_global_const(221), ___nl__im__192);
#line 743
c_rt_lib0clear(&___nl__im__192);
#line 743
c_rt_lib0clear(&___nl__im__193);
#line 744
c_rt_lib0move(&___nl__im__197, nparser_priv0parse_block(___ref___rec__0));
#line 744
___nl__bool__196 = c_rt_lib0priv_is(___nl__im__197, ___get_global_const(80));
#line 744
if(___nl__bool__196){ goto label_58;}
#line 744
c_rt_lib0clear(&___nl__im__1);
#line 744
c_rt_lib0clear(&___nl__im__3);
#line 744
//clear ___nl__bool__4;
#line 744
c_rt_lib0clear(&___nl__im__6);
#line 744
//clear ___nl__bool__7;
#line 744
c_rt_lib0clear(&___nl__im__8);
#line 744
c_rt_lib0clear(&___nl__im__9);
#line 744
//clear ___nl__bool__10;
#line 744
c_rt_lib0clear(&___nl__im__11);
#line 744
c_rt_lib0clear(&___nl__im__12);
#line 744
c_rt_lib0clear(&___nl__im__13);
#line 744
//clear ___nl__bool__16;
#line 744
c_rt_lib0clear(&___nl__im__18);
#line 744
c_rt_lib0clear(&___nl__im__19);
#line 744
//clear ___nl__bool__21;
#line 744
c_rt_lib0clear(&___nl__im__22);
#line 744
c_rt_lib0clear(&___nl__im__23);
#line 744
c_rt_lib0clear(&___nl__im__24);
#line 744
//clear ___nl__bool__28;
#line 744
c_rt_lib0clear(&___nl__im__29);
#line 744
c_rt_lib0clear(&___nl__im__30);
#line 744
c_rt_lib0clear(&___nl__im__42);
#line 744
//clear ___nl__bool__47;
#line 744
c_rt_lib0clear(&___nl__im__48);
#line 744
c_rt_lib0clear(&___nl__im__49);
#line 744
//clear ___nl__bool__50;
#line 744
c_rt_lib0clear(&___nl__im__51);
#line 744
c_rt_lib0clear(&___nl__im__52);
#line 744
c_rt_lib0clear(&___nl__im__54);
#line 744
//clear ___nl__bool__59;
#line 744
c_rt_lib0clear(&___nl__im__60);
#line 744
c_rt_lib0clear(&___nl__im__61);
#line 744
//clear ___nl__bool__62;
#line 744
c_rt_lib0clear(&___nl__im__63);
#line 744
c_rt_lib0clear(&___nl__im__64);
#line 744
c_rt_lib0clear(&___nl__im__66);
#line 744
//clear ___nl__bool__67;
#line 744
c_rt_lib0clear(&___nl__im__68);
#line 744
c_rt_lib0clear(&___nl__im__70);
#line 744
//clear ___nl__bool__88;
#line 744
c_rt_lib0clear(&___nl__im__89);
#line 744
c_rt_lib0clear(&___nl__im__90);
#line 744
//clear ___nl__bool__91;
#line 744
c_rt_lib0clear(&___nl__im__92);
#line 744
c_rt_lib0clear(&___nl__im__93);
#line 744
c_rt_lib0clear(&___nl__im__95);
#line 744
//clear ___nl__bool__98;
#line 744
c_rt_lib0clear(&___nl__im__99);
#line 744
c_rt_lib0clear(&___nl__im__100);
#line 744
//clear ___nl__bool__101;
#line 744
c_rt_lib0clear(&___nl__im__102);
#line 744
c_rt_lib0clear(&___nl__im__103);
#line 744
c_rt_lib0clear(&___nl__im__105);
#line 744
//clear ___nl__bool__148;
#line 744
c_rt_lib0clear(&___nl__im__149);
#line 744
c_rt_lib0clear(&___nl__im__150);
#line 744
c_rt_lib0clear(&___nl__im__153);
#line 744
//clear ___nl__bool__154;
#line 744
c_rt_lib0clear(&___nl__im__155);
#line 744
c_rt_lib0clear(&___nl__im__159);
#line 744
//clear ___nl__bool__161;
#line 744
c_rt_lib0clear(&___nl__im__162);
#line 744
c_rt_lib0clear(&___nl__im__163);
#line 744
//clear ___nl__int__164;
#line 744
//clear ___nl__int__165;
#line 744
//clear ___nl__int__166;
#line 744
//clear ___nl__bool__167;
#line 744
//clear ___nl__int__168;
#line 744
c_rt_lib0clear(&___nl__im__169);
#line 744
c_rt_lib0clear(&___nl__im__179);
#line 744
//clear ___nl__bool__180;
#line 744
c_rt_lib0clear(&___nl__im__181);
#line 744
c_rt_lib0clear(&___nl__im__182);
#line 744
c_rt_lib0clear(&___nl__im__186);
#line 744
//clear ___nl__bool__188;
#line 744
c_rt_lib0clear(&___nl__im__190);
#line 744
//clear ___nl__bool__196;
#line 744
return ___nl__im__197;
#line 744
label_58:
;
#line 744
c_rt_lib0move(&___nl__im__198, c_rt_lib0priv_as(___nl__im__197, ___get_global_const(80)));
#line 744
c_rt_lib0hash_set_value_dec(&___nl__im__190, ___get_global_const(227), ___nl__im__198);
#line 745
c_rt_lib0move(&___nl__im__199,___get_global_const(884));
#line 745
c_rt_lib0move(&___nl__im__199, c_rt_lib0get_ref_hash(___nl__im__182, ___nl__im__199));
#line 745
c_rt_lib0delete(array0push(&___nl__im__199, ___nl__im__190));
#line 745
c_rt_lib0move(&___nl__string__200,___get_global_const(884));
#line 745
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__182, ___nl__string__200, ___nl__im__199));
#line 745
c_rt_lib0clear(&___nl__im__199);
#line 745
c_rt_lib0clear(&___nl__string__200);
#line 746
___nl__rec_ptr__201 = &((*___ref___rec__0).state0field);
#line 746
c_rt_lib0move(&___nl__im__186, ntokenizer0get_place(___nl__rec_ptr__201));
#line 746
___nl__rec_ptr__201 = NULL;
#line 746
c_rt_lib0clear(&___nl__im__190);
#line 746
//clear ___nl__bool__196;
#line 746
c_rt_lib0clear(&___nl__im__197);
#line 746
c_rt_lib0clear(&___nl__im__198);
#line 747
goto label_57;
#line 747
label_56:
;
#line 748
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(872), ___nl__im__182));
#line 749
goto label_1;
#line 749
label_54:
;
#line 749
c_rt_lib0move(&___nl__im__202,___get_global_const(247));
#line 749
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__202);
#line 749
c_rt_lib0clear(&___nl__im__202);
#line 749
___nl__bool__4 = !___nl__bool__4;
#line 749
if(___nl__bool__4){ goto label_59;}
#line 750
c_rt_lib0move(&___nl__im__203, c_rt_lib0array_mk(0));
#line 751
c_rt_lib0move(&___nl__im__205,___get_global_const(420));
#line 751
___nl__bool__204 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__205);
#line 751
c_rt_lib0clear(&___nl__im__205);
#line 751
___nl__bool__204 = !___nl__bool__204;
#line 751
if(___nl__bool__204){ goto label_61;}
#line 752
c_rt_lib0move(&___nl__im__207, nparser_priv0parse_expr_list(___ref___rec__0));
#line 752
___nl__bool__206 = c_rt_lib0priv_is(___nl__im__207, ___get_global_const(80));
#line 752
if(___nl__bool__206){ goto label_62;}
#line 752
c_rt_lib0clear(&___nl__im__1);
#line 752
c_rt_lib0clear(&___nl__im__3);
#line 752
//clear ___nl__bool__4;
#line 752
c_rt_lib0clear(&___nl__im__6);
#line 752
//clear ___nl__bool__7;
#line 752
c_rt_lib0clear(&___nl__im__8);
#line 752
c_rt_lib0clear(&___nl__im__9);
#line 752
//clear ___nl__bool__10;
#line 752
c_rt_lib0clear(&___nl__im__11);
#line 752
c_rt_lib0clear(&___nl__im__12);
#line 752
c_rt_lib0clear(&___nl__im__13);
#line 752
//clear ___nl__bool__16;
#line 752
c_rt_lib0clear(&___nl__im__18);
#line 752
c_rt_lib0clear(&___nl__im__19);
#line 752
//clear ___nl__bool__21;
#line 752
c_rt_lib0clear(&___nl__im__22);
#line 752
c_rt_lib0clear(&___nl__im__23);
#line 752
c_rt_lib0clear(&___nl__im__24);
#line 752
//clear ___nl__bool__28;
#line 752
c_rt_lib0clear(&___nl__im__29);
#line 752
c_rt_lib0clear(&___nl__im__30);
#line 752
c_rt_lib0clear(&___nl__im__42);
#line 752
//clear ___nl__bool__47;
#line 752
c_rt_lib0clear(&___nl__im__48);
#line 752
c_rt_lib0clear(&___nl__im__49);
#line 752
//clear ___nl__bool__50;
#line 752
c_rt_lib0clear(&___nl__im__51);
#line 752
c_rt_lib0clear(&___nl__im__52);
#line 752
c_rt_lib0clear(&___nl__im__54);
#line 752
//clear ___nl__bool__59;
#line 752
c_rt_lib0clear(&___nl__im__60);
#line 752
c_rt_lib0clear(&___nl__im__61);
#line 752
//clear ___nl__bool__62;
#line 752
c_rt_lib0clear(&___nl__im__63);
#line 752
c_rt_lib0clear(&___nl__im__64);
#line 752
c_rt_lib0clear(&___nl__im__66);
#line 752
//clear ___nl__bool__67;
#line 752
c_rt_lib0clear(&___nl__im__68);
#line 752
c_rt_lib0clear(&___nl__im__70);
#line 752
//clear ___nl__bool__88;
#line 752
c_rt_lib0clear(&___nl__im__89);
#line 752
c_rt_lib0clear(&___nl__im__90);
#line 752
//clear ___nl__bool__91;
#line 752
c_rt_lib0clear(&___nl__im__92);
#line 752
c_rt_lib0clear(&___nl__im__93);
#line 752
c_rt_lib0clear(&___nl__im__95);
#line 752
//clear ___nl__bool__98;
#line 752
c_rt_lib0clear(&___nl__im__99);
#line 752
c_rt_lib0clear(&___nl__im__100);
#line 752
//clear ___nl__bool__101;
#line 752
c_rt_lib0clear(&___nl__im__102);
#line 752
c_rt_lib0clear(&___nl__im__103);
#line 752
c_rt_lib0clear(&___nl__im__105);
#line 752
//clear ___nl__bool__148;
#line 752
c_rt_lib0clear(&___nl__im__149);
#line 752
c_rt_lib0clear(&___nl__im__150);
#line 752
c_rt_lib0clear(&___nl__im__153);
#line 752
//clear ___nl__bool__154;
#line 752
c_rt_lib0clear(&___nl__im__155);
#line 752
c_rt_lib0clear(&___nl__im__159);
#line 752
//clear ___nl__bool__161;
#line 752
c_rt_lib0clear(&___nl__im__162);
#line 752
c_rt_lib0clear(&___nl__im__163);
#line 752
//clear ___nl__int__164;
#line 752
//clear ___nl__int__165;
#line 752
//clear ___nl__int__166;
#line 752
//clear ___nl__bool__167;
#line 752
//clear ___nl__int__168;
#line 752
c_rt_lib0clear(&___nl__im__169);
#line 752
c_rt_lib0clear(&___nl__im__179);
#line 752
//clear ___nl__bool__180;
#line 752
c_rt_lib0clear(&___nl__im__181);
#line 752
c_rt_lib0clear(&___nl__im__182);
#line 752
c_rt_lib0clear(&___nl__im__186);
#line 752
//clear ___nl__bool__188;
#line 752
c_rt_lib0clear(&___nl__im__190);
#line 752
//clear ___nl__bool__196;
#line 752
c_rt_lib0clear(&___nl__im__197);
#line 752
c_rt_lib0clear(&___nl__im__198);
#line 752
c_rt_lib0clear(&___nl__im__203);
#line 752
//clear ___nl__bool__204;
#line 752
//clear ___nl__bool__206;
#line 752
return ___nl__im__207;
#line 752
label_62:
;
#line 752
c_rt_lib0move(&___nl__im__203, c_rt_lib0priv_as(___nl__im__207, ___get_global_const(80)));
#line 753
goto label_60;
#line 753
label_61:
;
#line 753
label_60:
;
#line 753
//clear ___nl__bool__204;
#line 753
//clear ___nl__bool__206;
#line 753
c_rt_lib0clear(&___nl__im__207);
#line 754
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__203));
#line 755
goto label_1;
#line 755
label_59:
;
#line 755
___nl__rec_ptr__208 = &((*___ref___rec__0).state0field);
#line 755
c_rt_lib0move(&___nl__im__209,___get_global_const(463));
#line 755
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__208, ___nl__im__209);
#line 755
___nl__rec_ptr__208 = NULL;
#line 755
c_rt_lib0clear(&___nl__im__209);
#line 755
___nl__bool__4 = !___nl__bool__4;
#line 755
if(___nl__bool__4){ goto label_63;}
#line 756
c_rt_lib0move(&___nl__im__212, nparser_priv0parse_var_decl(___ref___rec__0));
#line 756
___nl__bool__211 = c_rt_lib0priv_is(___nl__im__212, ___get_global_const(80));
#line 756
if(___nl__bool__211){ goto label_64;}
#line 756
c_rt_lib0clear(&___nl__im__1);
#line 756
c_rt_lib0clear(&___nl__im__3);
#line 756
//clear ___nl__bool__4;
#line 756
c_rt_lib0clear(&___nl__im__6);
#line 756
//clear ___nl__bool__7;
#line 756
c_rt_lib0clear(&___nl__im__8);
#line 756
c_rt_lib0clear(&___nl__im__9);
#line 756
//clear ___nl__bool__10;
#line 756
c_rt_lib0clear(&___nl__im__11);
#line 756
c_rt_lib0clear(&___nl__im__12);
#line 756
c_rt_lib0clear(&___nl__im__13);
#line 756
//clear ___nl__bool__16;
#line 756
c_rt_lib0clear(&___nl__im__18);
#line 756
c_rt_lib0clear(&___nl__im__19);
#line 756
//clear ___nl__bool__21;
#line 756
c_rt_lib0clear(&___nl__im__22);
#line 756
c_rt_lib0clear(&___nl__im__23);
#line 756
c_rt_lib0clear(&___nl__im__24);
#line 756
//clear ___nl__bool__28;
#line 756
c_rt_lib0clear(&___nl__im__29);
#line 756
c_rt_lib0clear(&___nl__im__30);
#line 756
c_rt_lib0clear(&___nl__im__42);
#line 756
//clear ___nl__bool__47;
#line 756
c_rt_lib0clear(&___nl__im__48);
#line 756
c_rt_lib0clear(&___nl__im__49);
#line 756
//clear ___nl__bool__50;
#line 756
c_rt_lib0clear(&___nl__im__51);
#line 756
c_rt_lib0clear(&___nl__im__52);
#line 756
c_rt_lib0clear(&___nl__im__54);
#line 756
//clear ___nl__bool__59;
#line 756
c_rt_lib0clear(&___nl__im__60);
#line 756
c_rt_lib0clear(&___nl__im__61);
#line 756
//clear ___nl__bool__62;
#line 756
c_rt_lib0clear(&___nl__im__63);
#line 756
c_rt_lib0clear(&___nl__im__64);
#line 756
c_rt_lib0clear(&___nl__im__66);
#line 756
//clear ___nl__bool__67;
#line 756
c_rt_lib0clear(&___nl__im__68);
#line 756
c_rt_lib0clear(&___nl__im__70);
#line 756
//clear ___nl__bool__88;
#line 756
c_rt_lib0clear(&___nl__im__89);
#line 756
c_rt_lib0clear(&___nl__im__90);
#line 756
//clear ___nl__bool__91;
#line 756
c_rt_lib0clear(&___nl__im__92);
#line 756
c_rt_lib0clear(&___nl__im__93);
#line 756
c_rt_lib0clear(&___nl__im__95);
#line 756
//clear ___nl__bool__98;
#line 756
c_rt_lib0clear(&___nl__im__99);
#line 756
c_rt_lib0clear(&___nl__im__100);
#line 756
//clear ___nl__bool__101;
#line 756
c_rt_lib0clear(&___nl__im__102);
#line 756
c_rt_lib0clear(&___nl__im__103);
#line 756
c_rt_lib0clear(&___nl__im__105);
#line 756
//clear ___nl__bool__148;
#line 756
c_rt_lib0clear(&___nl__im__149);
#line 756
c_rt_lib0clear(&___nl__im__150);
#line 756
c_rt_lib0clear(&___nl__im__153);
#line 756
//clear ___nl__bool__154;
#line 756
c_rt_lib0clear(&___nl__im__155);
#line 756
c_rt_lib0clear(&___nl__im__159);
#line 756
//clear ___nl__bool__161;
#line 756
c_rt_lib0clear(&___nl__im__162);
#line 756
c_rt_lib0clear(&___nl__im__163);
#line 756
//clear ___nl__int__164;
#line 756
//clear ___nl__int__165;
#line 756
//clear ___nl__int__166;
#line 756
//clear ___nl__bool__167;
#line 756
//clear ___nl__int__168;
#line 756
c_rt_lib0clear(&___nl__im__169);
#line 756
c_rt_lib0clear(&___nl__im__179);
#line 756
//clear ___nl__bool__180;
#line 756
c_rt_lib0clear(&___nl__im__181);
#line 756
c_rt_lib0clear(&___nl__im__182);
#line 756
c_rt_lib0clear(&___nl__im__186);
#line 756
//clear ___nl__bool__188;
#line 756
c_rt_lib0clear(&___nl__im__190);
#line 756
//clear ___nl__bool__196;
#line 756
c_rt_lib0clear(&___nl__im__197);
#line 756
c_rt_lib0clear(&___nl__im__198);
#line 756
c_rt_lib0clear(&___nl__im__203);
#line 756
c_rt_lib0clear(&___nl__im__210);
#line 756
//clear ___nl__bool__211;
#line 756
return ___nl__im__212;
#line 756
label_64:
;
#line 756
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__212, ___get_global_const(80)));
#line 757
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__210));
#line 758
c_rt_lib0move(&___nl__im__213,___get_global_const(409));
#line 758
___nl__bool__214 = nparser_priv0eat(___ref___rec__0, ___nl__im__213);
#line 758
c_rt_lib0clear(&___nl__im__213);
#line 758
//clear ___nl__bool__214;
#line 759
goto label_1;
#line 759
label_63:
;
#line 759
___nl__rec_ptr__215 = &((*___ref___rec__0).state0field);
#line 759
c_rt_lib0move(&___nl__im__216,___get_global_const(874));
#line 759
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__215, ___nl__im__216);
#line 759
___nl__rec_ptr__215 = NULL;
#line 759
c_rt_lib0clear(&___nl__im__216);
#line 759
___nl__bool__4 = !___nl__bool__4;
#line 759
if(___nl__bool__4){ goto label_65;}
#line 760
c_rt_lib0move(&___nl__im__217,___get_global_const(874));
#line 760
___nl__bool__218 = nparser_priv0eat(___ref___rec__0, ___nl__im__217);
#line 760
c_rt_lib0clear(&___nl__im__217);
#line 760
//clear ___nl__bool__218;
#line 761
c_rt_lib0move(&___nl__im__221, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 761
___nl__bool__220 = c_rt_lib0priv_is(___nl__im__221, ___get_global_const(80));
#line 761
if(___nl__bool__220){ goto label_66;}
#line 761
c_rt_lib0clear(&___nl__im__1);
#line 761
c_rt_lib0clear(&___nl__im__3);
#line 761
//clear ___nl__bool__4;
#line 761
c_rt_lib0clear(&___nl__im__6);
#line 761
//clear ___nl__bool__7;
#line 761
c_rt_lib0clear(&___nl__im__8);
#line 761
c_rt_lib0clear(&___nl__im__9);
#line 761
//clear ___nl__bool__10;
#line 761
c_rt_lib0clear(&___nl__im__11);
#line 761
c_rt_lib0clear(&___nl__im__12);
#line 761
c_rt_lib0clear(&___nl__im__13);
#line 761
//clear ___nl__bool__16;
#line 761
c_rt_lib0clear(&___nl__im__18);
#line 761
c_rt_lib0clear(&___nl__im__19);
#line 761
//clear ___nl__bool__21;
#line 761
c_rt_lib0clear(&___nl__im__22);
#line 761
c_rt_lib0clear(&___nl__im__23);
#line 761
c_rt_lib0clear(&___nl__im__24);
#line 761
//clear ___nl__bool__28;
#line 761
c_rt_lib0clear(&___nl__im__29);
#line 761
c_rt_lib0clear(&___nl__im__30);
#line 761
c_rt_lib0clear(&___nl__im__42);
#line 761
//clear ___nl__bool__47;
#line 761
c_rt_lib0clear(&___nl__im__48);
#line 761
c_rt_lib0clear(&___nl__im__49);
#line 761
//clear ___nl__bool__50;
#line 761
c_rt_lib0clear(&___nl__im__51);
#line 761
c_rt_lib0clear(&___nl__im__52);
#line 761
c_rt_lib0clear(&___nl__im__54);
#line 761
//clear ___nl__bool__59;
#line 761
c_rt_lib0clear(&___nl__im__60);
#line 761
c_rt_lib0clear(&___nl__im__61);
#line 761
//clear ___nl__bool__62;
#line 761
c_rt_lib0clear(&___nl__im__63);
#line 761
c_rt_lib0clear(&___nl__im__64);
#line 761
c_rt_lib0clear(&___nl__im__66);
#line 761
//clear ___nl__bool__67;
#line 761
c_rt_lib0clear(&___nl__im__68);
#line 761
c_rt_lib0clear(&___nl__im__70);
#line 761
//clear ___nl__bool__88;
#line 761
c_rt_lib0clear(&___nl__im__89);
#line 761
c_rt_lib0clear(&___nl__im__90);
#line 761
//clear ___nl__bool__91;
#line 761
c_rt_lib0clear(&___nl__im__92);
#line 761
c_rt_lib0clear(&___nl__im__93);
#line 761
c_rt_lib0clear(&___nl__im__95);
#line 761
//clear ___nl__bool__98;
#line 761
c_rt_lib0clear(&___nl__im__99);
#line 761
c_rt_lib0clear(&___nl__im__100);
#line 761
//clear ___nl__bool__101;
#line 761
c_rt_lib0clear(&___nl__im__102);
#line 761
c_rt_lib0clear(&___nl__im__103);
#line 761
c_rt_lib0clear(&___nl__im__105);
#line 761
//clear ___nl__bool__148;
#line 761
c_rt_lib0clear(&___nl__im__149);
#line 761
c_rt_lib0clear(&___nl__im__150);
#line 761
c_rt_lib0clear(&___nl__im__153);
#line 761
//clear ___nl__bool__154;
#line 761
c_rt_lib0clear(&___nl__im__155);
#line 761
c_rt_lib0clear(&___nl__im__159);
#line 761
//clear ___nl__bool__161;
#line 761
c_rt_lib0clear(&___nl__im__162);
#line 761
c_rt_lib0clear(&___nl__im__163);
#line 761
//clear ___nl__int__164;
#line 761
//clear ___nl__int__165;
#line 761
//clear ___nl__int__166;
#line 761
//clear ___nl__bool__167;
#line 761
//clear ___nl__int__168;
#line 761
c_rt_lib0clear(&___nl__im__169);
#line 761
c_rt_lib0clear(&___nl__im__179);
#line 761
//clear ___nl__bool__180;
#line 761
c_rt_lib0clear(&___nl__im__181);
#line 761
c_rt_lib0clear(&___nl__im__182);
#line 761
c_rt_lib0clear(&___nl__im__186);
#line 761
//clear ___nl__bool__188;
#line 761
c_rt_lib0clear(&___nl__im__190);
#line 761
//clear ___nl__bool__196;
#line 761
c_rt_lib0clear(&___nl__im__197);
#line 761
c_rt_lib0clear(&___nl__im__198);
#line 761
c_rt_lib0clear(&___nl__im__203);
#line 761
c_rt_lib0clear(&___nl__im__210);
#line 761
//clear ___nl__bool__211;
#line 761
c_rt_lib0clear(&___nl__im__212);
#line 761
c_rt_lib0clear(&___nl__im__219);
#line 761
//clear ___nl__bool__220;
#line 761
return ___nl__im__221;
#line 761
label_66:
;
#line 761
c_rt_lib0move(&___nl__im__219, c_rt_lib0priv_as(___nl__im__221, ___get_global_const(80)));
#line 762
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(874), ___nl__im__219));
#line 763
goto label_1;
#line 763
label_65:
;
#line 763
___nl__rec_ptr__222 = &((*___ref___rec__0).state0field);
#line 763
c_rt_lib0move(&___nl__im__223,___get_global_const(178));
#line 763
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__222, ___nl__im__223);
#line 763
___nl__rec_ptr__222 = NULL;
#line 763
c_rt_lib0clear(&___nl__im__223);
#line 763
___nl__bool__4 = !___nl__bool__4;
#line 763
if(___nl__bool__4){ goto label_67;}
#line 764
c_rt_lib0move(&___nl__im__224,___get_global_const(178));
#line 764
___nl__bool__225 = nparser_priv0eat(___ref___rec__0, ___nl__im__224);
#line 764
c_rt_lib0clear(&___nl__im__224);
#line 764
//clear ___nl__bool__225;
#line 765
c_rt_lib0move(&___nl__im__228, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 765
___nl__bool__227 = c_rt_lib0priv_is(___nl__im__228, ___get_global_const(80));
#line 765
if(___nl__bool__227){ goto label_68;}
#line 765
c_rt_lib0clear(&___nl__im__1);
#line 765
c_rt_lib0clear(&___nl__im__3);
#line 765
//clear ___nl__bool__4;
#line 765
c_rt_lib0clear(&___nl__im__6);
#line 765
//clear ___nl__bool__7;
#line 765
c_rt_lib0clear(&___nl__im__8);
#line 765
c_rt_lib0clear(&___nl__im__9);
#line 765
//clear ___nl__bool__10;
#line 765
c_rt_lib0clear(&___nl__im__11);
#line 765
c_rt_lib0clear(&___nl__im__12);
#line 765
c_rt_lib0clear(&___nl__im__13);
#line 765
//clear ___nl__bool__16;
#line 765
c_rt_lib0clear(&___nl__im__18);
#line 765
c_rt_lib0clear(&___nl__im__19);
#line 765
//clear ___nl__bool__21;
#line 765
c_rt_lib0clear(&___nl__im__22);
#line 765
c_rt_lib0clear(&___nl__im__23);
#line 765
c_rt_lib0clear(&___nl__im__24);
#line 765
//clear ___nl__bool__28;
#line 765
c_rt_lib0clear(&___nl__im__29);
#line 765
c_rt_lib0clear(&___nl__im__30);
#line 765
c_rt_lib0clear(&___nl__im__42);
#line 765
//clear ___nl__bool__47;
#line 765
c_rt_lib0clear(&___nl__im__48);
#line 765
c_rt_lib0clear(&___nl__im__49);
#line 765
//clear ___nl__bool__50;
#line 765
c_rt_lib0clear(&___nl__im__51);
#line 765
c_rt_lib0clear(&___nl__im__52);
#line 765
c_rt_lib0clear(&___nl__im__54);
#line 765
//clear ___nl__bool__59;
#line 765
c_rt_lib0clear(&___nl__im__60);
#line 765
c_rt_lib0clear(&___nl__im__61);
#line 765
//clear ___nl__bool__62;
#line 765
c_rt_lib0clear(&___nl__im__63);
#line 765
c_rt_lib0clear(&___nl__im__64);
#line 765
c_rt_lib0clear(&___nl__im__66);
#line 765
//clear ___nl__bool__67;
#line 765
c_rt_lib0clear(&___nl__im__68);
#line 765
c_rt_lib0clear(&___nl__im__70);
#line 765
//clear ___nl__bool__88;
#line 765
c_rt_lib0clear(&___nl__im__89);
#line 765
c_rt_lib0clear(&___nl__im__90);
#line 765
//clear ___nl__bool__91;
#line 765
c_rt_lib0clear(&___nl__im__92);
#line 765
c_rt_lib0clear(&___nl__im__93);
#line 765
c_rt_lib0clear(&___nl__im__95);
#line 765
//clear ___nl__bool__98;
#line 765
c_rt_lib0clear(&___nl__im__99);
#line 765
c_rt_lib0clear(&___nl__im__100);
#line 765
//clear ___nl__bool__101;
#line 765
c_rt_lib0clear(&___nl__im__102);
#line 765
c_rt_lib0clear(&___nl__im__103);
#line 765
c_rt_lib0clear(&___nl__im__105);
#line 765
//clear ___nl__bool__148;
#line 765
c_rt_lib0clear(&___nl__im__149);
#line 765
c_rt_lib0clear(&___nl__im__150);
#line 765
c_rt_lib0clear(&___nl__im__153);
#line 765
//clear ___nl__bool__154;
#line 765
c_rt_lib0clear(&___nl__im__155);
#line 765
c_rt_lib0clear(&___nl__im__159);
#line 765
//clear ___nl__bool__161;
#line 765
c_rt_lib0clear(&___nl__im__162);
#line 765
c_rt_lib0clear(&___nl__im__163);
#line 765
//clear ___nl__int__164;
#line 765
//clear ___nl__int__165;
#line 765
//clear ___nl__int__166;
#line 765
//clear ___nl__bool__167;
#line 765
//clear ___nl__int__168;
#line 765
c_rt_lib0clear(&___nl__im__169);
#line 765
c_rt_lib0clear(&___nl__im__179);
#line 765
//clear ___nl__bool__180;
#line 765
c_rt_lib0clear(&___nl__im__181);
#line 765
c_rt_lib0clear(&___nl__im__182);
#line 765
c_rt_lib0clear(&___nl__im__186);
#line 765
//clear ___nl__bool__188;
#line 765
c_rt_lib0clear(&___nl__im__190);
#line 765
//clear ___nl__bool__196;
#line 765
c_rt_lib0clear(&___nl__im__197);
#line 765
c_rt_lib0clear(&___nl__im__198);
#line 765
c_rt_lib0clear(&___nl__im__203);
#line 765
c_rt_lib0clear(&___nl__im__210);
#line 765
//clear ___nl__bool__211;
#line 765
c_rt_lib0clear(&___nl__im__212);
#line 765
c_rt_lib0clear(&___nl__im__219);
#line 765
//clear ___nl__bool__220;
#line 765
c_rt_lib0clear(&___nl__im__221);
#line 765
c_rt_lib0clear(&___nl__im__226);
#line 765
//clear ___nl__bool__227;
#line 765
return ___nl__im__228;
#line 765
label_68:
;
#line 765
c_rt_lib0move(&___nl__im__226, c_rt_lib0priv_as(___nl__im__228, ___get_global_const(80)));
#line 766
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(178), ___nl__im__226));
#line 767
goto label_1;
#line 767
label_67:
;
#line 768
c_rt_lib0move(&___nl__im__231, nparser_priv0parse_expr(___ref___rec__0));
#line 768
___nl__bool__230 = c_rt_lib0priv_is(___nl__im__231, ___get_global_const(80));
#line 768
if(___nl__bool__230){ goto label_69;}
#line 768
c_rt_lib0clear(&___nl__im__1);
#line 768
c_rt_lib0clear(&___nl__im__3);
#line 768
//clear ___nl__bool__4;
#line 768
c_rt_lib0clear(&___nl__im__6);
#line 768
//clear ___nl__bool__7;
#line 768
c_rt_lib0clear(&___nl__im__8);
#line 768
c_rt_lib0clear(&___nl__im__9);
#line 768
//clear ___nl__bool__10;
#line 768
c_rt_lib0clear(&___nl__im__11);
#line 768
c_rt_lib0clear(&___nl__im__12);
#line 768
c_rt_lib0clear(&___nl__im__13);
#line 768
//clear ___nl__bool__16;
#line 768
c_rt_lib0clear(&___nl__im__18);
#line 768
c_rt_lib0clear(&___nl__im__19);
#line 768
//clear ___nl__bool__21;
#line 768
c_rt_lib0clear(&___nl__im__22);
#line 768
c_rt_lib0clear(&___nl__im__23);
#line 768
c_rt_lib0clear(&___nl__im__24);
#line 768
//clear ___nl__bool__28;
#line 768
c_rt_lib0clear(&___nl__im__29);
#line 768
c_rt_lib0clear(&___nl__im__30);
#line 768
c_rt_lib0clear(&___nl__im__42);
#line 768
//clear ___nl__bool__47;
#line 768
c_rt_lib0clear(&___nl__im__48);
#line 768
c_rt_lib0clear(&___nl__im__49);
#line 768
//clear ___nl__bool__50;
#line 768
c_rt_lib0clear(&___nl__im__51);
#line 768
c_rt_lib0clear(&___nl__im__52);
#line 768
c_rt_lib0clear(&___nl__im__54);
#line 768
//clear ___nl__bool__59;
#line 768
c_rt_lib0clear(&___nl__im__60);
#line 768
c_rt_lib0clear(&___nl__im__61);
#line 768
//clear ___nl__bool__62;
#line 768
c_rt_lib0clear(&___nl__im__63);
#line 768
c_rt_lib0clear(&___nl__im__64);
#line 768
c_rt_lib0clear(&___nl__im__66);
#line 768
//clear ___nl__bool__67;
#line 768
c_rt_lib0clear(&___nl__im__68);
#line 768
c_rt_lib0clear(&___nl__im__70);
#line 768
//clear ___nl__bool__88;
#line 768
c_rt_lib0clear(&___nl__im__89);
#line 768
c_rt_lib0clear(&___nl__im__90);
#line 768
//clear ___nl__bool__91;
#line 768
c_rt_lib0clear(&___nl__im__92);
#line 768
c_rt_lib0clear(&___nl__im__93);
#line 768
c_rt_lib0clear(&___nl__im__95);
#line 768
//clear ___nl__bool__98;
#line 768
c_rt_lib0clear(&___nl__im__99);
#line 768
c_rt_lib0clear(&___nl__im__100);
#line 768
//clear ___nl__bool__101;
#line 768
c_rt_lib0clear(&___nl__im__102);
#line 768
c_rt_lib0clear(&___nl__im__103);
#line 768
c_rt_lib0clear(&___nl__im__105);
#line 768
//clear ___nl__bool__148;
#line 768
c_rt_lib0clear(&___nl__im__149);
#line 768
c_rt_lib0clear(&___nl__im__150);
#line 768
c_rt_lib0clear(&___nl__im__153);
#line 768
//clear ___nl__bool__154;
#line 768
c_rt_lib0clear(&___nl__im__155);
#line 768
c_rt_lib0clear(&___nl__im__159);
#line 768
//clear ___nl__bool__161;
#line 768
c_rt_lib0clear(&___nl__im__162);
#line 768
c_rt_lib0clear(&___nl__im__163);
#line 768
//clear ___nl__int__164;
#line 768
//clear ___nl__int__165;
#line 768
//clear ___nl__int__166;
#line 768
//clear ___nl__bool__167;
#line 768
//clear ___nl__int__168;
#line 768
c_rt_lib0clear(&___nl__im__169);
#line 768
c_rt_lib0clear(&___nl__im__179);
#line 768
//clear ___nl__bool__180;
#line 768
c_rt_lib0clear(&___nl__im__181);
#line 768
c_rt_lib0clear(&___nl__im__182);
#line 768
c_rt_lib0clear(&___nl__im__186);
#line 768
//clear ___nl__bool__188;
#line 768
c_rt_lib0clear(&___nl__im__190);
#line 768
//clear ___nl__bool__196;
#line 768
c_rt_lib0clear(&___nl__im__197);
#line 768
c_rt_lib0clear(&___nl__im__198);
#line 768
c_rt_lib0clear(&___nl__im__203);
#line 768
c_rt_lib0clear(&___nl__im__210);
#line 768
//clear ___nl__bool__211;
#line 768
c_rt_lib0clear(&___nl__im__212);
#line 768
c_rt_lib0clear(&___nl__im__219);
#line 768
//clear ___nl__bool__220;
#line 768
c_rt_lib0clear(&___nl__im__221);
#line 768
c_rt_lib0clear(&___nl__im__226);
#line 768
//clear ___nl__bool__227;
#line 768
c_rt_lib0clear(&___nl__im__228);
#line 768
c_rt_lib0clear(&___nl__im__229);
#line 768
//clear ___nl__bool__230;
#line 768
return ___nl__im__231;
#line 768
label_69:
;
#line 768
c_rt_lib0move(&___nl__im__229, c_rt_lib0priv_as(___nl__im__231, ___get_global_const(80)));
#line 769
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__229));
#line 770
goto label_1;
#line 770
label_1:
;
#line 770
//clear ___nl__bool__4;
#line 770
c_rt_lib0clear(&___nl__im__6);
#line 770
//clear ___nl__bool__7;
#line 770
c_rt_lib0clear(&___nl__im__8);
#line 770
c_rt_lib0clear(&___nl__im__9);
#line 770
//clear ___nl__bool__10;
#line 770
c_rt_lib0clear(&___nl__im__11);
#line 770
c_rt_lib0clear(&___nl__im__12);
#line 770
c_rt_lib0clear(&___nl__im__13);
#line 770
//clear ___nl__bool__16;
#line 770
c_rt_lib0clear(&___nl__im__18);
#line 770
c_rt_lib0clear(&___nl__im__19);
#line 770
//clear ___nl__bool__21;
#line 770
c_rt_lib0clear(&___nl__im__22);
#line 770
c_rt_lib0clear(&___nl__im__23);
#line 770
c_rt_lib0clear(&___nl__im__24);
#line 770
//clear ___nl__bool__28;
#line 770
c_rt_lib0clear(&___nl__im__29);
#line 770
c_rt_lib0clear(&___nl__im__30);
#line 770
c_rt_lib0clear(&___nl__im__42);
#line 770
//clear ___nl__bool__47;
#line 770
c_rt_lib0clear(&___nl__im__48);
#line 770
c_rt_lib0clear(&___nl__im__49);
#line 770
//clear ___nl__bool__50;
#line 770
c_rt_lib0clear(&___nl__im__51);
#line 770
c_rt_lib0clear(&___nl__im__52);
#line 770
c_rt_lib0clear(&___nl__im__54);
#line 770
//clear ___nl__bool__59;
#line 770
c_rt_lib0clear(&___nl__im__60);
#line 770
c_rt_lib0clear(&___nl__im__61);
#line 770
//clear ___nl__bool__62;
#line 770
c_rt_lib0clear(&___nl__im__63);
#line 770
c_rt_lib0clear(&___nl__im__64);
#line 770
c_rt_lib0clear(&___nl__im__66);
#line 770
//clear ___nl__bool__67;
#line 770
c_rt_lib0clear(&___nl__im__68);
#line 770
c_rt_lib0clear(&___nl__im__70);
#line 770
//clear ___nl__bool__88;
#line 770
c_rt_lib0clear(&___nl__im__89);
#line 770
c_rt_lib0clear(&___nl__im__90);
#line 770
//clear ___nl__bool__91;
#line 770
c_rt_lib0clear(&___nl__im__92);
#line 770
c_rt_lib0clear(&___nl__im__93);
#line 770
c_rt_lib0clear(&___nl__im__95);
#line 770
//clear ___nl__bool__98;
#line 770
c_rt_lib0clear(&___nl__im__99);
#line 770
c_rt_lib0clear(&___nl__im__100);
#line 770
//clear ___nl__bool__101;
#line 770
c_rt_lib0clear(&___nl__im__102);
#line 770
c_rt_lib0clear(&___nl__im__103);
#line 770
c_rt_lib0clear(&___nl__im__105);
#line 770
//clear ___nl__bool__148;
#line 770
c_rt_lib0clear(&___nl__im__149);
#line 770
c_rt_lib0clear(&___nl__im__150);
#line 770
c_rt_lib0clear(&___nl__im__153);
#line 770
//clear ___nl__bool__154;
#line 770
c_rt_lib0clear(&___nl__im__155);
#line 770
c_rt_lib0clear(&___nl__im__159);
#line 770
//clear ___nl__bool__161;
#line 770
c_rt_lib0clear(&___nl__im__162);
#line 770
c_rt_lib0clear(&___nl__im__163);
#line 770
//clear ___nl__int__164;
#line 770
//clear ___nl__int__165;
#line 770
//clear ___nl__int__166;
#line 770
//clear ___nl__bool__167;
#line 770
//clear ___nl__int__168;
#line 770
c_rt_lib0clear(&___nl__im__169);
#line 770
c_rt_lib0clear(&___nl__im__179);
#line 770
//clear ___nl__bool__180;
#line 770
c_rt_lib0clear(&___nl__im__181);
#line 770
c_rt_lib0clear(&___nl__im__182);
#line 770
c_rt_lib0clear(&___nl__im__186);
#line 770
//clear ___nl__bool__188;
#line 770
c_rt_lib0clear(&___nl__im__190);
#line 770
//clear ___nl__bool__196;
#line 770
c_rt_lib0clear(&___nl__im__197);
#line 770
c_rt_lib0clear(&___nl__im__198);
#line 770
c_rt_lib0clear(&___nl__im__203);
#line 770
c_rt_lib0clear(&___nl__im__210);
#line 770
//clear ___nl__bool__211;
#line 770
c_rt_lib0clear(&___nl__im__212);
#line 770
c_rt_lib0clear(&___nl__im__219);
#line 770
//clear ___nl__bool__220;
#line 770
c_rt_lib0clear(&___nl__im__221);
#line 770
c_rt_lib0clear(&___nl__im__226);
#line 770
//clear ___nl__bool__227;
#line 770
c_rt_lib0clear(&___nl__im__228);
#line 770
c_rt_lib0clear(&___nl__im__229);
#line 770
//clear ___nl__bool__230;
#line 770
c_rt_lib0clear(&___nl__im__231);
#line 771
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(870));
#line 771
if(___nl__bool__232){ goto label_77;}
#line 771
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(871));
#line 771
label_77:
;
#line 771
//clear ___nl__bool__238;
#line 771
if(___nl__bool__232){ goto label_76;}
#line 771
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(219));
#line 771
label_76:
;
#line 771
//clear ___nl__bool__237;
#line 771
if(___nl__bool__232){ goto label_75;}
#line 771
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(246));
#line 771
label_75:
;
#line 771
//clear ___nl__bool__236;
#line 771
if(___nl__bool__232){ goto label_74;}
#line 771
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(247));
#line 771
label_74:
;
#line 771
//clear ___nl__bool__235;
#line 771
if(___nl__bool__232){ goto label_73;}
#line 771
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(178));
#line 771
label_73:
;
#line 771
//clear ___nl__bool__234;
#line 771
if(___nl__bool__232){ goto label_72;}
#line 771
___nl__bool__232 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(874));
#line 771
label_72:
;
#line 771
//clear ___nl__bool__233;
#line 771
___nl__bool__232 = !___nl__bool__232;
#line 771
if(___nl__bool__232){ goto label_71;}
#line 773
___nl__rec_ptr__241 = &((*___ref___rec__0).state0field);
#line 773
c_rt_lib0move(&___nl__im__240, ntokenizer0get_place_ws(___nl__rec_ptr__241));
#line 773
___nl__rec_ptr__241 = NULL;
#line 773
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(932), ___nl__im__240));
#line 773
c_rt_lib0clear(&___nl__im__240);
#line 774
c_rt_lib0move(&___nl__im__243, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__239, ___get_global_const(227), ___nl__im__3));
#line 774
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_mk(1, ___get_global_const(227), ___nl__im__243));
#line 774
c_rt_lib0clear(&___nl__im__243);
#line 775
c_rt_lib0move(&___nl__im__245,___get_global_const(864));
#line 775
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__245);
#line 775
c_rt_lib0clear(&___nl__im__245);
#line 775
___nl__bool__244 = !___nl__bool__244;
#line 775
if(___nl__bool__244){ goto label_79;}
#line 776
___nl__bool__247 = true;
#line 776
c_rt_lib0move(&___nl__im__246, c_rt_lib0bool_to_nl_native(___nl__bool__247));
#line 776
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(944), ___nl__im__246);
#line 776
c_rt_lib0clear(&___nl__im__246);
#line 776
//clear ___nl__bool__247;
#line 777
c_rt_lib0move(&___nl__im__249, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 777
c_rt_lib0copy(&___nl__im__248, ___nl__im__249);
#line 777
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(569), ___nl__im__248);
#line 777
c_rt_lib0clear(&___nl__im__248);
#line 777
c_rt_lib0clear(&___nl__im__249);
#line 778
c_rt_lib0move(&___nl__im__250,___get_global_const(420));
#line 778
___nl__bool__251 = nparser_priv0eat(___ref___rec__0, ___nl__im__250);
#line 778
c_rt_lib0clear(&___nl__im__250);
#line 778
//clear ___nl__bool__251;
#line 779
c_rt_lib0move(&___nl__im__253, nparser_priv0parse_expr(___ref___rec__0));
#line 779
___nl__bool__252 = c_rt_lib0priv_is(___nl__im__253, ___get_global_const(80));
#line 779
if(___nl__bool__252){ goto label_80;}
#line 779
c_rt_lib0clear(&___nl__im__1);
#line 779
c_rt_lib0clear(&___nl__im__3);
#line 779
//clear ___nl__bool__232;
#line 779
c_rt_lib0clear(&___nl__im__239);
#line 779
c_rt_lib0clear(&___nl__im__242);
#line 779
//clear ___nl__bool__244;
#line 779
//clear ___nl__bool__252;
#line 779
return ___nl__im__253;
#line 779
label_80:
;
#line 779
c_rt_lib0move(&___nl__im__254, c_rt_lib0priv_as(___nl__im__253, ___get_global_const(80)));
#line 779
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(38), ___nl__im__254);
#line 780
c_rt_lib0move(&___nl__im__255,___get_global_const(299));
#line 780
___nl__bool__256 = nparser_priv0eat(___ref___rec__0, ___nl__im__255);
#line 780
c_rt_lib0clear(&___nl__im__255);
#line 780
//clear ___nl__bool__256;
#line 781
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(864), ___nl__im__242));
#line 782
goto label_78;
#line 782
label_79:
;
#line 782
c_rt_lib0move(&___nl__im__257,___get_global_const(866));
#line 782
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__257);
#line 782
c_rt_lib0clear(&___nl__im__257);
#line 782
___nl__bool__244 = !___nl__bool__244;
#line 782
if(___nl__bool__244){ goto label_81;}
#line 783
___nl__bool__259 = true;
#line 783
c_rt_lib0move(&___nl__im__258, c_rt_lib0bool_to_nl_native(___nl__bool__259));
#line 783
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(944), ___nl__im__258);
#line 783
c_rt_lib0clear(&___nl__im__258);
#line 783
//clear ___nl__bool__259;
#line 784
c_rt_lib0move(&___nl__im__261, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 784
c_rt_lib0copy(&___nl__im__260, ___nl__im__261);
#line 784
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(569), ___nl__im__260);
#line 784
c_rt_lib0clear(&___nl__im__260);
#line 784
c_rt_lib0clear(&___nl__im__261);
#line 785
c_rt_lib0move(&___nl__im__262,___get_global_const(420));
#line 785
___nl__bool__263 = nparser_priv0eat(___ref___rec__0, ___nl__im__262);
#line 785
c_rt_lib0clear(&___nl__im__262);
#line 785
//clear ___nl__bool__263;
#line 786
c_rt_lib0move(&___nl__im__265, nparser_priv0parse_expr(___ref___rec__0));
#line 786
___nl__bool__264 = c_rt_lib0priv_is(___nl__im__265, ___get_global_const(80));
#line 786
if(___nl__bool__264){ goto label_82;}
#line 786
c_rt_lib0clear(&___nl__im__1);
#line 786
c_rt_lib0clear(&___nl__im__3);
#line 786
//clear ___nl__bool__232;
#line 786
c_rt_lib0clear(&___nl__im__239);
#line 786
c_rt_lib0clear(&___nl__im__242);
#line 786
//clear ___nl__bool__244;
#line 786
//clear ___nl__bool__252;
#line 786
c_rt_lib0clear(&___nl__im__253);
#line 786
c_rt_lib0clear(&___nl__im__254);
#line 786
//clear ___nl__bool__264;
#line 786
return ___nl__im__265;
#line 786
label_82:
;
#line 786
c_rt_lib0move(&___nl__im__266, c_rt_lib0priv_as(___nl__im__265, ___get_global_const(80)));
#line 786
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(881), ___nl__im__266);
#line 787
c_rt_lib0move(&___nl__im__267,___get_global_const(299));
#line 787
___nl__bool__268 = nparser_priv0eat(___ref___rec__0, ___nl__im__267);
#line 787
c_rt_lib0clear(&___nl__im__267);
#line 787
//clear ___nl__bool__268;
#line 788
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(866), ___nl__im__242));
#line 789
goto label_78;
#line 789
label_81:
;
#line 789
c_rt_lib0move(&___nl__im__269,___get_global_const(865));
#line 789
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__269);
#line 789
c_rt_lib0clear(&___nl__im__269);
#line 789
___nl__bool__244 = !___nl__bool__244;
#line 789
if(___nl__bool__244){ goto label_83;}
#line 790
___nl__bool__271 = true;
#line 790
c_rt_lib0move(&___nl__im__270, c_rt_lib0bool_to_nl_native(___nl__bool__271));
#line 790
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(944), ___nl__im__270);
#line 790
c_rt_lib0clear(&___nl__im__270);
#line 790
//clear ___nl__bool__271;
#line 791
c_rt_lib0move(&___nl__im__273, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 791
c_rt_lib0copy(&___nl__im__272, ___nl__im__273);
#line 791
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(371), ___nl__im__272);
#line 791
c_rt_lib0clear(&___nl__im__272);
#line 791
c_rt_lib0clear(&___nl__im__273);
#line 792
c_rt_lib0move(&___nl__im__274,___get_global_const(295));
#line 792
___nl__bool__275 = nparser_priv0eat(___ref___rec__0, ___nl__im__274);
#line 792
c_rt_lib0clear(&___nl__im__274);
#line 792
//clear ___nl__bool__275;
#line 793
___nl__rec_ptr__277 = &((*___ref___rec__0).state0field);
#line 793
c_rt_lib0move(&___nl__im__278,___get_global_const(463));
#line 793
___nl__bool__276 = ntokenizer0next_is(___nl__rec_ptr__277, ___nl__im__278);
#line 793
___nl__rec_ptr__277 = NULL;
#line 793
c_rt_lib0clear(&___nl__im__278);
#line 793
___nl__bool__276 = !___nl__bool__276;
#line 793
if(___nl__bool__276){ goto label_85;}
#line 794
c_rt_lib0move(&___nl__im__280, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 794
c_rt_lib0copy(&___nl__im__279, ___nl__im__280);
#line 794
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(224), ___nl__im__279);
#line 794
c_rt_lib0clear(&___nl__im__279);
#line 794
c_rt_lib0clear(&___nl__im__280);
#line 795
c_rt_lib0move(&___nl__im__282, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 795
c_rt_lib0copy(&___nl__im__281, ___nl__im__282);
#line 795
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(880), ___nl__im__281);
#line 795
c_rt_lib0clear(&___nl__im__281);
#line 795
c_rt_lib0clear(&___nl__im__282);
#line 796
goto label_84;
#line 796
label_85:
;
#line 797
c_rt_lib0move(&___nl__im__284, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 797
c_rt_lib0copy(&___nl__im__283, ___nl__im__284);
#line 797
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(224), ___nl__im__283);
#line 797
c_rt_lib0clear(&___nl__im__283);
#line 797
c_rt_lib0clear(&___nl__im__284);
#line 798
c_rt_lib0move(&___nl__im__286, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 798
c_rt_lib0copy(&___nl__im__285, ___nl__im__286);
#line 798
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(880), ___nl__im__285);
#line 798
c_rt_lib0clear(&___nl__im__285);
#line 798
c_rt_lib0clear(&___nl__im__286);
#line 799
goto label_84;
#line 799
label_84:
;
#line 799
//clear ___nl__bool__276;
#line 800
c_rt_lib0move(&___nl__im__287,___get_global_const(420));
#line 800
___nl__bool__288 = nparser_priv0eat(___ref___rec__0, ___nl__im__287);
#line 800
c_rt_lib0clear(&___nl__im__287);
#line 800
//clear ___nl__bool__288;
#line 801
c_rt_lib0move(&___nl__im__290, nparser_priv0parse_expr(___ref___rec__0));
#line 801
___nl__bool__289 = c_rt_lib0priv_is(___nl__im__290, ___get_global_const(80));
#line 801
if(___nl__bool__289){ goto label_86;}
#line 801
c_rt_lib0clear(&___nl__im__1);
#line 801
c_rt_lib0clear(&___nl__im__3);
#line 801
//clear ___nl__bool__232;
#line 801
c_rt_lib0clear(&___nl__im__239);
#line 801
c_rt_lib0clear(&___nl__im__242);
#line 801
//clear ___nl__bool__244;
#line 801
//clear ___nl__bool__252;
#line 801
c_rt_lib0clear(&___nl__im__253);
#line 801
c_rt_lib0clear(&___nl__im__254);
#line 801
//clear ___nl__bool__264;
#line 801
c_rt_lib0clear(&___nl__im__265);
#line 801
c_rt_lib0clear(&___nl__im__266);
#line 801
//clear ___nl__bool__289;
#line 801
return ___nl__im__290;
#line 801
label_86:
;
#line 801
c_rt_lib0move(&___nl__im__291, c_rt_lib0priv_as(___nl__im__290, ___get_global_const(80)));
#line 801
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(131), ___nl__im__291);
#line 802
c_rt_lib0move(&___nl__im__292,___get_global_const(299));
#line 802
___nl__bool__293 = nparser_priv0eat(___ref___rec__0, ___nl__im__292);
#line 802
c_rt_lib0clear(&___nl__im__292);
#line 802
//clear ___nl__bool__293;
#line 803
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(865), ___nl__im__242));
#line 804
goto label_78;
#line 804
label_83:
;
#line 804
c_rt_lib0move(&___nl__im__294,___get_global_const(862));
#line 804
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__294);
#line 804
c_rt_lib0clear(&___nl__im__294);
#line 804
___nl__bool__244 = !___nl__bool__244;
#line 804
if(___nl__bool__244){ goto label_87;}
#line 805
c_rt_lib0move(&___nl__im__296, nparser_priv0parse_expr(___ref___rec__0));
#line 805
___nl__bool__295 = c_rt_lib0priv_is(___nl__im__296, ___get_global_const(80));
#line 805
if(___nl__bool__295){ goto label_88;}
#line 805
c_rt_lib0clear(&___nl__im__1);
#line 805
c_rt_lib0clear(&___nl__im__3);
#line 805
//clear ___nl__bool__232;
#line 805
c_rt_lib0clear(&___nl__im__239);
#line 805
c_rt_lib0clear(&___nl__im__242);
#line 805
//clear ___nl__bool__244;
#line 805
//clear ___nl__bool__252;
#line 805
c_rt_lib0clear(&___nl__im__253);
#line 805
c_rt_lib0clear(&___nl__im__254);
#line 805
//clear ___nl__bool__264;
#line 805
c_rt_lib0clear(&___nl__im__265);
#line 805
c_rt_lib0clear(&___nl__im__266);
#line 805
//clear ___nl__bool__289;
#line 805
c_rt_lib0clear(&___nl__im__290);
#line 805
c_rt_lib0clear(&___nl__im__291);
#line 805
//clear ___nl__bool__295;
#line 805
return ___nl__im__296;
#line 805
label_88:
;
#line 805
c_rt_lib0move(&___nl__im__297, c_rt_lib0priv_as(___nl__im__296, ___get_global_const(80)));
#line 805
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(876), ___nl__im__297);
#line 806
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(868), ___nl__im__242));
#line 807
goto label_78;
#line 807
label_87:
;
#line 807
c_rt_lib0move(&___nl__im__298,___get_global_const(979));
#line 807
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__298);
#line 807
c_rt_lib0clear(&___nl__im__298);
#line 807
___nl__bool__244 = !___nl__bool__244;
#line 807
if(___nl__bool__244){ goto label_89;}
#line 808
c_rt_lib0move(&___nl__im__300, nparser_priv0parse_expr(___ref___rec__0));
#line 808
___nl__bool__299 = c_rt_lib0priv_is(___nl__im__300, ___get_global_const(80));
#line 808
if(___nl__bool__299){ goto label_90;}
#line 808
c_rt_lib0clear(&___nl__im__1);
#line 808
c_rt_lib0clear(&___nl__im__3);
#line 808
//clear ___nl__bool__232;
#line 808
c_rt_lib0clear(&___nl__im__239);
#line 808
c_rt_lib0clear(&___nl__im__242);
#line 808
//clear ___nl__bool__244;
#line 808
//clear ___nl__bool__252;
#line 808
c_rt_lib0clear(&___nl__im__253);
#line 808
c_rt_lib0clear(&___nl__im__254);
#line 808
//clear ___nl__bool__264;
#line 808
c_rt_lib0clear(&___nl__im__265);
#line 808
c_rt_lib0clear(&___nl__im__266);
#line 808
//clear ___nl__bool__289;
#line 808
c_rt_lib0clear(&___nl__im__290);
#line 808
c_rt_lib0clear(&___nl__im__291);
#line 808
//clear ___nl__bool__295;
#line 808
c_rt_lib0clear(&___nl__im__296);
#line 808
c_rt_lib0clear(&___nl__im__297);
#line 808
//clear ___nl__bool__299;
#line 808
return ___nl__im__300;
#line 808
label_90:
;
#line 808
c_rt_lib0move(&___nl__im__301, c_rt_lib0priv_as(___nl__im__300, ___get_global_const(80)));
#line 808
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(876), ___nl__im__301);
#line 809
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(869), ___nl__im__242));
#line 810
goto label_78;
#line 810
label_89:
;
#line 810
c_rt_lib0move(&___nl__im__302,___get_global_const(867));
#line 810
___nl__bool__244 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__302);
#line 810
c_rt_lib0clear(&___nl__im__302);
#line 810
___nl__bool__244 = !___nl__bool__244;
#line 810
if(___nl__bool__244){ goto label_91;}
#line 811
___nl__bool__304 = true;
#line 811
c_rt_lib0move(&___nl__im__303, c_rt_lib0bool_to_nl_native(___nl__bool__304));
#line 811
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(944), ___nl__im__303);
#line 811
c_rt_lib0clear(&___nl__im__303);
#line 811
//clear ___nl__bool__304;
#line 812
c_rt_lib0move(&___nl__im__306, nparser_priv0parse_expr(___ref___rec__0));
#line 812
___nl__bool__305 = c_rt_lib0priv_is(___nl__im__306, ___get_global_const(80));
#line 812
if(___nl__bool__305){ goto label_92;}
#line 812
c_rt_lib0clear(&___nl__im__1);
#line 812
c_rt_lib0clear(&___nl__im__3);
#line 812
//clear ___nl__bool__232;
#line 812
c_rt_lib0clear(&___nl__im__239);
#line 812
c_rt_lib0clear(&___nl__im__242);
#line 812
//clear ___nl__bool__244;
#line 812
//clear ___nl__bool__252;
#line 812
c_rt_lib0clear(&___nl__im__253);
#line 812
c_rt_lib0clear(&___nl__im__254);
#line 812
//clear ___nl__bool__264;
#line 812
c_rt_lib0clear(&___nl__im__265);
#line 812
c_rt_lib0clear(&___nl__im__266);
#line 812
//clear ___nl__bool__289;
#line 812
c_rt_lib0clear(&___nl__im__290);
#line 812
c_rt_lib0clear(&___nl__im__291);
#line 812
//clear ___nl__bool__295;
#line 812
c_rt_lib0clear(&___nl__im__296);
#line 812
c_rt_lib0clear(&___nl__im__297);
#line 812
//clear ___nl__bool__299;
#line 812
c_rt_lib0clear(&___nl__im__300);
#line 812
c_rt_lib0clear(&___nl__im__301);
#line 812
//clear ___nl__bool__305;
#line 812
return ___nl__im__306;
#line 812
label_92:
;
#line 812
c_rt_lib0move(&___nl__im__307, c_rt_lib0priv_as(___nl__im__306, ___get_global_const(80)));
#line 812
c_rt_lib0hash_set_value_dec(&___nl__im__242, ___get_global_const(876), ___nl__im__307);
#line 813
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(867), ___nl__im__242));
#line 814
goto label_78;
#line 814
label_91:
;
#line 814
label_78:
;
#line 814
//clear ___nl__bool__244;
#line 814
//clear ___nl__bool__252;
#line 814
c_rt_lib0clear(&___nl__im__253);
#line 814
c_rt_lib0clear(&___nl__im__254);
#line 814
//clear ___nl__bool__264;
#line 814
c_rt_lib0clear(&___nl__im__265);
#line 814
c_rt_lib0clear(&___nl__im__266);
#line 814
//clear ___nl__bool__289;
#line 814
c_rt_lib0clear(&___nl__im__290);
#line 814
c_rt_lib0clear(&___nl__im__291);
#line 814
//clear ___nl__bool__295;
#line 814
c_rt_lib0clear(&___nl__im__296);
#line 814
c_rt_lib0clear(&___nl__im__297);
#line 814
//clear ___nl__bool__299;
#line 814
c_rt_lib0clear(&___nl__im__300);
#line 814
c_rt_lib0clear(&___nl__im__301);
#line 814
//clear ___nl__bool__305;
#line 814
c_rt_lib0clear(&___nl__im__306);
#line 814
c_rt_lib0clear(&___nl__im__307);
#line 815
c_rt_lib0move(&___nl__im__308,___get_global_const(409));
#line 815
___nl__bool__309 = nparser_priv0eat(___ref___rec__0, ___nl__im__308);
#line 815
c_rt_lib0clear(&___nl__im__308);
#line 815
//clear ___nl__bool__309;
#line 816
goto label_70;
#line 816
label_71:
;
#line 816
label_70:
;
#line 816
//clear ___nl__bool__232;
#line 816
c_rt_lib0clear(&___nl__im__239);
#line 816
c_rt_lib0clear(&___nl__im__242);
#line 817
___nl__rec_ptr__311 = &((*___ref___rec__0).state0field);
#line 817
c_rt_lib0move(&___nl__im__310, ntokenizer0get_place_ws(___nl__rec_ptr__311));
#line 817
___nl__rec_ptr__311 = NULL;
#line 818
c_rt_lib0move(&___nl__im__312, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(932), ___nl__im__310));
#line 819
c_rt_lib0move(&___nl__im__314, c_rt_lib0hash_mk(2, ___get_global_const(227), ___nl__im__3, ___get_global_const(221), ___nl__im__312));
#line 819
c_rt_lib0move(&___nl__im__313, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__im__314));
#line 819
c_rt_lib0clear(&___nl__im__314);
#line 819
c_rt_lib0clear(&___nl__im__1);
#line 819
c_rt_lib0clear(&___nl__im__3);
#line 819
c_rt_lib0clear(&___nl__im__310);
#line 819
c_rt_lib0clear(&___nl__im__312);
#line 819
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(958), ___nl__im__2, ___get_global_const(51), ___nl__im__4, ___get_global_const(212), ___nl__im__6, ___get_global_const(982), ___nl__im__10));
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
