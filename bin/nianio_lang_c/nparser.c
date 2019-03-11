
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
return nparser_priv0__const__sing(0);
}
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
c_rt_lib0move(&___nl__im__2,___get_global_const(435));
#line 19
c_rt_lib0move(&___nl__im__3,___get_global_const(954));
#line 19
c_rt_lib0move(&___nl__im__4,___get_global_const(1070));
#line 19
c_rt_lib0move(&___nl__im__5,___get_global_const(956));
#line 19
c_rt_lib0move(&___nl__im__6,___get_global_const(957));
#line 19
c_rt_lib0move(&___nl__im__7,___get_global_const(958));
#line 19
c_rt_lib0move(&___nl__im__8,___get_global_const(959));
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
return NULL;

}

ImmT  nparser0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0state_t");
return nparser0state_t();
}
ImmT nparser0state_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(1);
}
ImmT nparser0state_t0cal() {
nparser_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_const(1071), ___get_global_const(1072)));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(928)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 26
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 27
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 27
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(1050), ___nl__im__2, ___get_global_const(51), ___nl__im__3, ___get_global_const(212), ___nl__im__4, ___get_global_const(1073), ___nl__im__5));
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
return NULL;

}

ImmT  nparser0try_value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_value_t");
return nparser0try_value_t();
}
ImmT nparser0try_value_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(2);
}
ImmT nparser0try_value_t0cal() {
nparser_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(1013)));
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 32
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 32
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__2, ___get_global_const(78), ___nl__im__3));
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
return NULL;

}

ImmT  nparser0try_cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_cmd_t");
return nparser0try_cmd_t();
}
ImmT nparser0try_cmd_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(3);
}
ImmT nparser0try_cmd_t0cal() {
nparser_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(335)));
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 36
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 36
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__2, ___get_global_const(78), ___nl__im__3));
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
c_rt_lib0move(___nl__im_ptr__9, c_rt_lib0ov_mk_none(___get_global_const(1024)));
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
c_rt_lib0move(___nl__im_ptr__13, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__15, ___get_global_const(1037), ___nl__im__17));
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
c_rt_lib0move(___nl__im_ptr__18, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__20, ___get_global_const(1037), ___nl__im__22));
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
if(___nl__bool__28){ goto label_89;}
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
goto label_89;
#line 62
label_89:
;
#line 62
//clear ___nl__bool__28;
#line 62
c_rt_lib0clear(&___nl__im__34);
#line 63
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__27));
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
return NULL;

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
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_const(153), ___nl__im__8, ___get_global_const(151), ___nl__im__9, ___get_global_const(204), ___nl__im__11, ___get_global_const(156), ___nl__im__1, ___get_global_const(205), ___nl__im__12));
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
if(___nl__bool__2){ goto label_10;}
#line 73
___nl__bool__4 = true;
#line 73
c_rt_lib0clear(&___nl__im__1);
#line 73
//clear ___nl__bool__2;
#line 73
return ___nl__bool__4;
#line 73
goto label_10;
#line 73
label_10:
;
#line 73
//clear ___nl__bool__2;
#line 73
//clear ___nl__bool__4;
#line 74
c_rt_lib0move(&___nl__im__8,___get_global_const(1074));
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
return false;

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
return false;

}

nast0module_t0type nparser_priv0parse_module(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
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
ntokenizer0state_t0type* ___nl__rec_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__string__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
#line 83
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 83
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 83
c_rt_lib0move(&___nl__im__5,___get_global_const(37));
#line 83
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__1, ___get_global_const(172), ___nl__im__3, ___get_global_const(165), ___nl__im__4, ___get_global_const(1017), ___nl__im__5));
#line 83
c_rt_lib0clear(&___nl__im__3);
#line 83
c_rt_lib0clear(&___nl__im__4);
#line 83
c_rt_lib0clear(&___nl__im__5);
#line 84
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 84
c_rt_lib0move(&___nl__im__6, ntokenizer0get_last_comment(___nl__rec_ptr__7));
#line 84
___nl__rec_ptr__7 = NULL;
#line 84
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 84
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(1017), ___nl__im__8);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 85
label_14:
;
#line 85
c_rt_lib0move(&___nl__im__10,___get_global_const(1075));
#line 85
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__10);
#line 85
c_rt_lib0clear(&___nl__im__10);
#line 85
___nl__bool__9 = !___nl__bool__9;
#line 85
if(___nl__bool__9){ goto label_60;}
#line 86
___nl__rec_ptr__12 = &((*___ref___rec__0).state0field);
#line 86
___nl__int__11 = ntokenizer0get_line(___nl__rec_ptr__12);
#line 86
___nl__rec_ptr__12 = NULL;
#line 87
___nl__rec_ptr__14 = &((*___ref___rec__0).state0field);
#line 87
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 87
___nl__bool__13 = ntokenizer0is_type(___nl__rec_ptr__14, ___nl__im__15);
#line 87
___nl__rec_ptr__14 = NULL;
#line 87
c_rt_lib0clear(&___nl__im__15);
#line 87
___nl__bool__13 = !___nl__bool__13;
#line 87
if(___nl__bool__13){ goto label_48;}
#line 88
c_rt_lib0move(&___nl__im__16,___get_global_const(172));
#line 88
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 89
___nl__rec_ptr__19 = &((*___ref___rec__0).state0field);
#line 89
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 89
c_rt_lib0move(&___nl__im__18, ntokenizer0eat_type(___nl__rec_ptr__19, ___nl__im__20));
#line 89
___nl__rec_ptr__19 = NULL;
#line 89
c_rt_lib0clear(&___nl__im__20);
#line 89
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__11));
#line 89
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__18, ___get_global_const(153), ___nl__im__21));
#line 89
c_rt_lib0clear(&___nl__im__18);
#line 89
c_rt_lib0clear(&___nl__im__21);
#line 89
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 89
c_rt_lib0move(&___nl__string__22,___get_global_const(172));
#line 89
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__22, ___nl__im__16));
#line 89
c_rt_lib0clear(&___nl__im__16);
#line 89
c_rt_lib0clear(&___nl__im__17);
#line 89
c_rt_lib0clear(&___nl__string__22);
#line 92
goto label_53;
#line 92
label_48:
;
#line 93
c_rt_lib0move(&___nl__im__23,___get_global_const(1077));
#line 93
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__23));
#line 93
c_rt_lib0clear(&___nl__im__23);
#line 94
goto label_53;
#line 94
label_53:
;
#line 94
//clear ___nl__bool__13;
#line 95
c_rt_lib0move(&___nl__im__24,___get_global_const(435));
#line 95
nparser_priv0eat(___ref___rec__0, ___nl__im__24);
#line 95
c_rt_lib0clear(&___nl__im__24);
#line 95
//clear ___nl__int__11;
#line 96
goto label_14;
#line 96
label_60:
;
#line 97
___nl__rec_ptr__26 = &((*___ref___rec__0).state0field);
#line 97
c_rt_lib0move(&___nl__im__27,___get_global_const(708));
#line 97
___nl__bool__25 = ntokenizer0next_is(___nl__rec_ptr__26, ___nl__im__27);
#line 97
___nl__rec_ptr__26 = NULL;
#line 97
c_rt_lib0clear(&___nl__im__27);
#line 97
___nl__bool__25 = !___nl__bool__25;
#line 97
if(___nl__bool__25){ goto label_113;}
#line 98
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_fun_def(___ref___rec__0, ___nl__im__1));
#line 98
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(79));
#line 98
if(___nl__bool__29){ goto label_76;}
#line 100
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(78));
#line 100
if(___nl__bool__29){ goto label_87;}
#line 100
c_rt_lib0move(&___nl__im__30,___get_global_const(16));
#line 100
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__28));
#line 100
nl_die_arg(___nl__im__30);
#line 98
label_76:
;
#line 98
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(79)));
#line 98
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 99
c_rt_lib0move(&___nl__im__33,___get_global_const(165));
#line 99
c_rt_lib0move(&___nl__im__33, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__33));
#line 99
c_rt_lib0delete(array0push(&___nl__im__33, ___nl__im__31));
#line 99
c_rt_lib0move(&___nl__string__34,___get_global_const(165));
#line 99
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__34, ___nl__im__33));
#line 99
c_rt_lib0clear(&___nl__im__33);
#line 99
c_rt_lib0clear(&___nl__string__34);
#line 100
goto label_104;
#line 100
label_87:
;
#line 100
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(78)));
#line 100
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 101
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__35));
#line 102
c_rt_lib0clear(&___nl__im__1);
#line 102
//clear ___nl__bool__9;
#line 102
//clear ___nl__int__11;
#line 102
//clear ___nl__bool__25;
#line 102
c_rt_lib0clear(&___nl__im__28);
#line 102
//clear ___nl__bool__29;
#line 102
c_rt_lib0clear(&___nl__im__30);
#line 102
c_rt_lib0clear(&___nl__im__31);
#line 102
c_rt_lib0clear(&___nl__im__32);
#line 102
c_rt_lib0clear(&___nl__im__35);
#line 102
c_rt_lib0clear(&___nl__im__36);
#line 102
return ___nl__im__2;
#line 103
goto label_104;
#line 103
label_104:
;
#line 103
c_rt_lib0clear(&___nl__im__28);
#line 103
//clear ___nl__bool__29;
#line 103
c_rt_lib0clear(&___nl__im__30);
#line 103
c_rt_lib0clear(&___nl__im__31);
#line 103
c_rt_lib0clear(&___nl__im__32);
#line 103
c_rt_lib0clear(&___nl__im__35);
#line 103
c_rt_lib0clear(&___nl__im__36);
#line 104
goto label_60;
#line 104
label_113:
;
#line 105
___nl__rec_ptr__38 = &((*___ref___rec__0).state0field);
#line 105
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_const(1024)));
#line 105
___nl__bool__37 = ntokenizer0is_type(___nl__rec_ptr__38, ___nl__im__39);
#line 105
___nl__rec_ptr__38 = NULL;
#line 105
c_rt_lib0clear(&___nl__im__39);
#line 105
___nl__bool__37 = !___nl__bool__37;
#line 105
___nl__bool__37 = !___nl__bool__37;
#line 105
if(___nl__bool__37){ goto label_126;}
#line 105
c_rt_lib0move(&___nl__im__40,___get_global_const(1078));
#line 105
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__40));
#line 105
c_rt_lib0clear(&___nl__im__40);
#line 105
goto label_126;
#line 105
label_126:
;
#line 105
//clear ___nl__bool__37;
#line 106
c_rt_lib0clear(&___nl__im__1);
#line 106
//clear ___nl__bool__9;
#line 106
//clear ___nl__int__11;
#line 106
//clear ___nl__bool__25;
#line 106
c_rt_lib0clear(&___nl__im__28);
#line 106
//clear ___nl__bool__29;
#line 106
c_rt_lib0clear(&___nl__im__30);
#line 106
c_rt_lib0clear(&___nl__im__31);
#line 106
c_rt_lib0clear(&___nl__im__32);
#line 106
c_rt_lib0clear(&___nl__im__35);
#line 106
c_rt_lib0clear(&___nl__im__36);
#line 106
return ___nl__im__2;
return NULL;

}

ImmT  nparser_priv0parse_fun_arg_list(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
#line 113
c_rt_lib0move(&___nl__im__1,___get_global_const(446));
#line 113
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 114
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 115
label_4:
;
#line 115
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 115
c_rt_lib0move(&___nl__im__5,___get_global_const(320));
#line 115
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 115
___nl__rec_ptr__4 = NULL;
#line 115
c_rt_lib0clear(&___nl__im__5);
#line 115
___nl__bool__3 = !___nl__bool__3;
#line 115
___nl__bool__3 = !___nl__bool__3;
#line 115
if(___nl__bool__3){ goto label_100;}
#line 116
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 116
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 116
c_rt_lib0move(&___nl__im__9,___get_global_const(37));
#line 116
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 116
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_const(266), ___nl__im__7, ___get_global_const(205), ___nl__im__8, ___get_global_const(167), ___nl__im__9, ___get_global_const(481), ___nl__im__10));
#line 116
c_rt_lib0clear(&___nl__im__7);
#line 116
c_rt_lib0clear(&___nl__im__8);
#line 116
c_rt_lib0clear(&___nl__im__9);
#line 116
c_rt_lib0clear(&___nl__im__10);
#line 117
c_rt_lib0move(&___nl__im__12,___get_global_const(40));
#line 117
___nl__bool__11 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__12);
#line 117
c_rt_lib0clear(&___nl__im__12);
#line 117
___nl__bool__11 = !___nl__bool__11;
#line 117
if(___nl__bool__11){ goto label_33;}
#line 117
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 117
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 117
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(266), ___nl__im__14);
#line 117
c_rt_lib0clear(&___nl__im__13);
#line 117
c_rt_lib0clear(&___nl__im__14);
#line 117
goto label_33;
#line 117
label_33:
;
#line 117
//clear ___nl__bool__11;
#line 118
___nl__rec_ptr__16 = &((*___ref___rec__0).state0field);
#line 118
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 118
___nl__bool__15 = ntokenizer0is_type(___nl__rec_ptr__16, ___nl__im__17);
#line 118
___nl__rec_ptr__16 = NULL;
#line 118
c_rt_lib0clear(&___nl__im__17);
#line 118
___nl__bool__15 = !___nl__bool__15;
#line 118
if(___nl__bool__15){ goto label_52;}
#line 119
___nl__rec_ptr__19 = &((*___ref___rec__0).state0field);
#line 119
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 119
c_rt_lib0move(&___nl__im__18, ntokenizer0eat_type(___nl__rec_ptr__19, ___nl__im__20));
#line 119
___nl__rec_ptr__19 = NULL;
#line 119
c_rt_lib0clear(&___nl__im__20);
#line 119
c_rt_lib0copy(&___nl__im__21, ___nl__im__18);
#line 119
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(167), ___nl__im__21);
#line 119
c_rt_lib0clear(&___nl__im__18);
#line 119
c_rt_lib0clear(&___nl__im__21);
#line 120
goto label_57;
#line 120
label_52:
;
#line 121
c_rt_lib0move(&___nl__im__22,___get_global_const(1079));
#line 121
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__22));
#line 121
c_rt_lib0clear(&___nl__im__22);
#line 122
goto label_57;
#line 122
label_57:
;
#line 122
//clear ___nl__bool__15;
#line 123
c_rt_lib0move(&___nl__im__24,___get_global_const(510));
#line 123
___nl__bool__23 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__24);
#line 123
c_rt_lib0clear(&___nl__im__24);
#line 123
___nl__bool__23 = !___nl__bool__23;
#line 123
if(___nl__bool__23){ goto label_82;}
#line 124
c_rt_lib0move(&___nl__im__27, nparser_priv0parse_type(___ref___rec__0));
#line 124
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__27, ___get_global_const(79));
#line 124
if(___nl__bool__26){ goto label_74;}
#line 124
c_rt_lib0clear(&___nl__im__2);
#line 124
//clear ___nl__bool__3;
#line 124
c_rt_lib0clear(&___nl__im__6);
#line 124
//clear ___nl__bool__23;
#line 124
c_rt_lib0clear(&___nl__im__25);
#line 124
//clear ___nl__bool__26;
#line 124
return ___nl__im__27;
#line 124
label_74:
;
#line 124
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__27, ___get_global_const(79)));
#line 125
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__im__25));
#line 125
c_rt_lib0copy(&___nl__im__29, ___nl__im__28);
#line 125
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(205), ___nl__im__29);
#line 125
c_rt_lib0clear(&___nl__im__28);
#line 125
c_rt_lib0clear(&___nl__im__29);
#line 126
goto label_82;
#line 126
label_82:
;
#line 126
//clear ___nl__bool__23;
#line 126
c_rt_lib0clear(&___nl__im__25);
#line 126
//clear ___nl__bool__26;
#line 126
c_rt_lib0clear(&___nl__im__27);
#line 127
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__6));
#line 128
c_rt_lib0move(&___nl__im__31,___get_global_const(312));
#line 128
___nl__bool__30 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__31);
#line 128
c_rt_lib0clear(&___nl__im__31);
#line 128
___nl__bool__30 = !___nl__bool__30;
#line 128
___nl__bool__30 = !___nl__bool__30;
#line 128
if(___nl__bool__30){ goto label_96;}
#line 128
goto label_100;
#line 128
goto label_96;
#line 128
label_96:
;
#line 128
//clear ___nl__bool__30;
#line 128
c_rt_lib0clear(&___nl__im__6);
#line 129
goto label_4;
#line 129
label_100:
;
#line 130
c_rt_lib0move(&___nl__im__32,___get_global_const(320));
#line 130
nparser_priv0eat(___ref___rec__0, ___nl__im__32);
#line 130
c_rt_lib0clear(&___nl__im__32);
#line 131
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__2));
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
//clear ___nl__bool__3;
#line 131
c_rt_lib0clear(&___nl__im__6);
#line 131
return ___nl__im__33;
return NULL;

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
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__string__48 = NULL;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
bool  ___nl__bool__54 = false;
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
#line 139
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 139
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(205), ___nl__im__4, ___get_global_const(481), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(967)));
#line 143
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__12, ___get_global_const(227), ___nl__im__13));
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__13);
#line 144
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(454)));
#line 145
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(77)));
#line 145
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(7, ___get_global_const(455), ___nl__im__3, ___get_global_const(153), ___nl__im__8, ___get_global_const(265), ___nl__im__9, ___get_global_const(167), ___nl__im__10, ___get_global_const(227), ___nl__im__11, ___get_global_const(209), ___nl__im__14, ___get_global_const(166), ___nl__im__15));
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
c_rt_lib0move(&___nl__im__16,___get_global_const(708));
#line 147
nparser_priv0eat(___ref___rec__0, ___nl__im__16);
#line 147
c_rt_lib0clear(&___nl__im__16);
#line 148
c_rt_lib0move(&___nl__im__18, nparser_priv0eat_text(___ref___rec__0));
#line 148
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(79));
#line 148
if(___nl__bool__17){ goto label_37;}
#line 148
c_rt_lib0clear(&___nl__im__1);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
//clear ___nl__bool__17;
#line 148
return ___nl__im__18;
#line 148
label_37:
;
#line 148
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(79)));
#line 148
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__19);
#line 149
c_rt_lib0move(&___nl__im__21,___get_global_const(35));
#line 149
___nl__bool__20 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__21);
#line 149
c_rt_lib0clear(&___nl__im__21);
#line 149
___nl__bool__20 = !___nl__bool__20;
#line 149
if(___nl__bool__20){ goto label_86;}
#line 150
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(167)));
#line 150
___nl__bool__22 = c_rt_lib0ne(___nl__im__23, ___nl__im__1);
#line 150
c_rt_lib0clear(&___nl__im__23);
#line 150
___nl__bool__22 = !___nl__bool__22;
#line 150
if(___nl__bool__22){ goto label_64;}
#line 151
c_rt_lib0move(&___nl__im__27,___get_global_const(1080));
#line 151
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(167)));
#line 151
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 151
c_rt_lib0clear(&___nl__im__27);
#line 151
c_rt_lib0clear(&___nl__im__28);
#line 151
c_rt_lib0move(&___nl__im__29,___get_global_const(1081));
#line 151
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 151
c_rt_lib0clear(&___nl__im__26);
#line 151
c_rt_lib0clear(&___nl__im__29);
#line 151
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__1));
#line 151
c_rt_lib0clear(&___nl__im__25);
#line 151
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__24));
#line 151
c_rt_lib0clear(&___nl__im__24);
#line 152
goto label_64;
#line 152
label_64:
;
#line 152
//clear ___nl__bool__22;
#line 153
c_rt_lib0move(&___nl__im__31, nparser_priv0eat_text(___ref___rec__0));
#line 153
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(79));
#line 153
if(___nl__bool__30){ goto label_77;}
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
//clear ___nl__bool__17;
#line 153
c_rt_lib0clear(&___nl__im__18);
#line 153
c_rt_lib0clear(&___nl__im__19);
#line 153
//clear ___nl__bool__20;
#line 153
//clear ___nl__bool__30;
#line 153
return ___nl__im__31;
#line 153
label_77:
;
#line 153
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(79)));
#line 153
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__32);
#line 154
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_const(210)));
#line 154
c_rt_lib0copy(&___nl__im__34, ___nl__im__33);
#line 154
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(209), ___nl__im__34);
#line 154
c_rt_lib0clear(&___nl__im__33);
#line 154
c_rt_lib0clear(&___nl__im__34);
#line 155
goto label_86;
#line 155
label_86:
;
#line 155
//clear ___nl__bool__20;
#line 155
//clear ___nl__bool__30;
#line 155
c_rt_lib0clear(&___nl__im__31);
#line 155
c_rt_lib0clear(&___nl__im__32);
#line 156
c_rt_lib0move(&___nl__im__36, nparser_priv0parse_fun_arg_list(___ref___rec__0));
#line 156
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__36, ___get_global_const(79));
#line 156
if(___nl__bool__35){ goto label_101;}
#line 156
c_rt_lib0clear(&___nl__im__1);
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 156
//clear ___nl__bool__17;
#line 156
c_rt_lib0clear(&___nl__im__18);
#line 156
c_rt_lib0clear(&___nl__im__19);
#line 156
//clear ___nl__bool__35;
#line 156
return ___nl__im__36;
#line 156
label_101:
;
#line 156
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__36, ___get_global_const(79)));
#line 156
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(265), ___nl__im__37);
#line 157
___nl__rec_ptr__39 = &((*___ref___rec__0).state0field);
#line 157
c_rt_lib0move(&___nl__im__40,___get_global_const(510));
#line 157
___nl__bool__38 = ntokenizer0next_is(___nl__rec_ptr__39, ___nl__im__40);
#line 157
___nl__rec_ptr__39 = NULL;
#line 157
c_rt_lib0clear(&___nl__im__40);
#line 157
___nl__bool__38 = !___nl__bool__38;
#line 157
if(___nl__bool__38){ goto label_143;}
#line 158
c_rt_lib0move(&___nl__im__41,___get_global_const(510));
#line 158
nparser_priv0eat(___ref___rec__0, ___nl__im__41);
#line 158
c_rt_lib0clear(&___nl__im__41);
#line 159
c_rt_lib0move(&___nl__im__44, nparser_priv0parse_type(___ref___rec__0));
#line 159
___nl__bool__43 = c_rt_lib0priv_is(___nl__im__44, ___get_global_const(79));
#line 159
if(___nl__bool__43){ goto label_129;}
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
c_rt_lib0clear(&___nl__im__2);
#line 159
//clear ___nl__bool__17;
#line 159
c_rt_lib0clear(&___nl__im__18);
#line 159
c_rt_lib0clear(&___nl__im__19);
#line 159
//clear ___nl__bool__35;
#line 159
c_rt_lib0clear(&___nl__im__36);
#line 159
c_rt_lib0clear(&___nl__im__37);
#line 159
//clear ___nl__bool__38;
#line 159
c_rt_lib0clear(&___nl__im__42);
#line 159
//clear ___nl__bool__43;
#line 159
return ___nl__im__44;
#line 159
label_129:
;
#line 159
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__44, ___get_global_const(79)));
#line 160
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__im__42));
#line 160
c_rt_lib0move(&___nl__im__46,___get_global_const(455));
#line 160
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__46));
#line 160
c_rt_lib0copy(&___nl__im__47, ___nl__im__45);
#line 160
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_const(205), ___nl__im__47);
#line 160
c_rt_lib0move(&___nl__string__48,___get_global_const(455));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__48, ___nl__im__46));
#line 160
c_rt_lib0clear(&___nl__im__45);
#line 160
c_rt_lib0clear(&___nl__im__46);
#line 160
c_rt_lib0clear(&___nl__im__47);
#line 160
c_rt_lib0clear(&___nl__string__48);
#line 161
goto label_143;
#line 161
label_143:
;
#line 161
//clear ___nl__bool__38;
#line 161
c_rt_lib0clear(&___nl__im__42);
#line 161
//clear ___nl__bool__43;
#line 161
c_rt_lib0clear(&___nl__im__44);
#line 162
c_rt_lib0move(&___nl__im__50, nparser_priv0parse_block(___ref___rec__0));
#line 162
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(79));
#line 162
if(___nl__bool__49){ goto label_161;}
#line 162
c_rt_lib0clear(&___nl__im__1);
#line 162
c_rt_lib0clear(&___nl__im__2);
#line 162
//clear ___nl__bool__17;
#line 162
c_rt_lib0clear(&___nl__im__18);
#line 162
c_rt_lib0clear(&___nl__im__19);
#line 162
//clear ___nl__bool__35;
#line 162
c_rt_lib0clear(&___nl__im__36);
#line 162
c_rt_lib0clear(&___nl__im__37);
#line 162
//clear ___nl__bool__49;
#line 162
return ___nl__im__50;
#line 162
label_161:
;
#line 162
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(79)));
#line 162
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(227), ___nl__im__51);
#line 163
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(227)));
#line 163
c_rt_lib0move(&___nl__im__52, ptd_parser0fun_def_to_ptd(___nl__im__53));
#line 163
c_rt_lib0clear(&___nl__im__53);
#line 163
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__52, ___get_global_const(78));
#line 163
if(___nl__bool__54){ goto label_174;}
#line 167
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__52, ___get_global_const(79));
#line 167
if(___nl__bool__54){ goto label_183;}
#line 167
c_rt_lib0move(&___nl__im__55,___get_global_const(16));
#line 167
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(2, ___nl__im__55, ___nl__im__52));
#line 167
nl_die_arg(___nl__im__55);
#line 163
label_174:
;
#line 163
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(78)));
#line 163
c_rt_lib0copy(&___nl__im__56, ___nl__im__57);
#line 166
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_const(77)));
#line 166
c_rt_lib0copy(&___nl__im__59, ___nl__im__58);
#line 166
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(166), ___nl__im__59);
#line 166
c_rt_lib0clear(&___nl__im__58);
#line 166
c_rt_lib0clear(&___nl__im__59);
#line 167
goto label_192;
#line 167
label_183:
;
#line 167
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(79)));
#line 167
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 168
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_arg(___get_global_const(76), ___nl__im__60));
#line 168
c_rt_lib0copy(&___nl__im__63, ___nl__im__62);
#line 168
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(166), ___nl__im__63);
#line 168
c_rt_lib0clear(&___nl__im__62);
#line 168
c_rt_lib0clear(&___nl__im__63);
#line 169
goto label_192;
#line 169
label_192:
;
#line 170
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__2));
#line 170
c_rt_lib0clear(&___nl__im__1);
#line 170
c_rt_lib0clear(&___nl__im__2);
#line 170
//clear ___nl__bool__17;
#line 170
c_rt_lib0clear(&___nl__im__18);
#line 170
c_rt_lib0clear(&___nl__im__19);
#line 170
//clear ___nl__bool__35;
#line 170
c_rt_lib0clear(&___nl__im__36);
#line 170
c_rt_lib0clear(&___nl__im__37);
#line 170
//clear ___nl__bool__49;
#line 170
c_rt_lib0clear(&___nl__im__50);
#line 170
c_rt_lib0clear(&___nl__im__51);
#line 170
c_rt_lib0clear(&___nl__im__52);
#line 170
//clear ___nl__bool__54;
#line 170
c_rt_lib0clear(&___nl__im__55);
#line 170
c_rt_lib0clear(&___nl__im__56);
#line 170
c_rt_lib0clear(&___nl__im__57);
#line 170
c_rt_lib0clear(&___nl__im__60);
#line 170
c_rt_lib0clear(&___nl__im__61);
#line 170
return ___nl__im__64;
return NULL;

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
ImmT  ___nl__im__11 = NULL;
#line 177
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 178
label_1:
;
#line 178
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 178
c_rt_lib0move(&___nl__im__4,___get_global_const(320));
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
if(___nl__bool__2){ goto label_35;}
#line 179
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_fun_val_arg(___ref___rec__0));
#line 179
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(79));
#line 179
if(___nl__bool__6){ goto label_18;}
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
label_18:
;
#line 179
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(79)));
#line 180
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 181
c_rt_lib0move(&___nl__im__9,___get_global_const(312));
#line 181
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 181
c_rt_lib0clear(&___nl__im__9);
#line 181
___nl__bool__8 = !___nl__bool__8;
#line 181
___nl__bool__8 = !___nl__bool__8;
#line 181
if(___nl__bool__8){ goto label_29;}
#line 181
goto label_35;
#line 181
goto label_29;
#line 181
label_29:
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
goto label_1;
#line 182
label_35:
;
#line 183
c_rt_lib0move(&___nl__im__10,___get_global_const(320));
#line 183
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 183
c_rt_lib0clear(&___nl__im__10);
#line 184
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
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
return ___nl__im__11;
return NULL;

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
ImmT  ___nl__im__11 = NULL;
#line 188
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 189
label_1:
;
#line 189
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 189
c_rt_lib0move(&___nl__im__4,___get_global_const(320));
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
if(___nl__bool__2){ goto label_35;}
#line 190
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 190
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(79));
#line 190
if(___nl__bool__6){ goto label_18;}
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
label_18:
;
#line 190
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(79)));
#line 191
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 192
c_rt_lib0move(&___nl__im__9,___get_global_const(312));
#line 192
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 192
c_rt_lib0clear(&___nl__im__9);
#line 192
___nl__bool__8 = !___nl__bool__8;
#line 192
___nl__bool__8 = !___nl__bool__8;
#line 192
if(___nl__bool__8){ goto label_29;}
#line 192
goto label_35;
#line 192
goto label_29;
#line 192
label_29:
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
goto label_1;
#line 193
label_35:
;
#line 194
c_rt_lib0move(&___nl__im__10,___get_global_const(320));
#line 194
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 194
c_rt_lib0clear(&___nl__im__10);
#line 195
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
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
return ___nl__im__11;
return NULL;

}

ImmT  nparser_priv0parse_fun_val_arg(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
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
c_rt_lib0move(&___nl__im__4,___get_global_const(40));
#line 200
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 200
c_rt_lib0clear(&___nl__im__4);
#line 200
if(___nl__bool__3){ goto label_7;}
#line 200
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 200
goto label_9;
#line 200
label_7:
;
#line 200
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 200
label_9:
;
#line 200
//clear ___nl__bool__3;
#line 200
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 200
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(266), ___nl__im__5);
#line 200
c_rt_lib0clear(&___nl__im__2);
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 201
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(79));
#line 201
if(___nl__bool__6){ goto label_21;}
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
//clear ___nl__bool__6;
#line 201
return ___nl__im__7;
#line 201
label_21:
;
#line 201
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(79)));
#line 201
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(224), ___nl__im__8);
#line 202
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 202
c_rt_lib0copy(&___nl__im__10, ___nl__im__9);
#line 202
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(1018), ___nl__im__10);
#line 202
c_rt_lib0clear(&___nl__im__9);
#line 202
c_rt_lib0clear(&___nl__im__10);
#line 203
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
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
return NULL;

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
ntokenizer0state_t0type* ___nl__rec_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 207
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 207
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 207
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__2, ___get_global_const(151), ___nl__im__3));
#line 207
c_rt_lib0clear(&___nl__im__2);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 208
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 208
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(1076)));
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
if(___nl__bool__4){ goto label_19;}
#line 209
c_rt_lib0move(&___nl__im__7,___get_global_const(1082));
#line 209
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__7));
#line 209
c_rt_lib0clear(&___nl__im__7);
#line 210
//clear ___nl__bool__4;
#line 210
return ___nl__im__1;
#line 211
goto label_19;
#line 211
label_19:
;
#line 211
//clear ___nl__bool__4;
#line 212
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 212
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 212
c_rt_lib0move(&___nl__im__8, ntokenizer0eat_type(___nl__rec_ptr__9, ___nl__im__10));
#line 212
___nl__rec_ptr__9 = NULL;
#line 212
c_rt_lib0clear(&___nl__im__10);
#line 212
c_rt_lib0copy(&___nl__im__11, ___nl__im__8);
#line 212
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(151), ___nl__im__11);
#line 212
c_rt_lib0clear(&___nl__im__8);
#line 212
c_rt_lib0clear(&___nl__im__11);
#line 213
c_rt_lib0move(&___nl__im__14,___get_global_const(35));
#line 213
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__14);
#line 213
c_rt_lib0clear(&___nl__im__14);
#line 213
___nl__bool__13 = !___nl__bool__12;
#line 213
if(___nl__bool__13){ goto label_38;}
#line 213
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 213
___nl__bool__12 = ntokenizer0is_text(___nl__rec_ptr__15);
#line 213
___nl__rec_ptr__15 = NULL;
#line 213
label_38:
;
#line 213
//clear ___nl__bool__13;
#line 213
___nl__bool__12 = !___nl__bool__12;
#line 213
if(___nl__bool__12){ goto label_50;}
#line 214
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 214
c_rt_lib0move(&___nl__im__16, ntokenizer0eat_text(___nl__rec_ptr__17));
#line 214
___nl__rec_ptr__17 = NULL;
#line 214
c_rt_lib0copy(&___nl__im__18, ___nl__im__16);
#line 214
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_const(167), ___nl__im__18);
#line 214
c_rt_lib0clear(&___nl__im__16);
#line 214
c_rt_lib0clear(&___nl__im__18);
#line 215
goto label_55;
#line 215
label_50:
;
#line 216
c_rt_lib0move(&___nl__im__19,___get_global_const(1083));
#line 216
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__19));
#line 216
c_rt_lib0clear(&___nl__im__19);
#line 217
goto label_55;
#line 217
label_55:
;
#line 217
//clear ___nl__bool__12;
#line 218
return ___nl__im__1;
return NULL;

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
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 225
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 225
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 225
c_rt_lib0move(&___nl__im__1, ntokenizer0eat_type(___nl__rec_ptr__2, ___nl__im__3));
#line 225
___nl__rec_ptr__2 = NULL;
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 227
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 227
c_rt_lib0move(&___nl__im__7,___get_global_const(446));
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
if(___nl__bool__5){ goto label_19;}
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
label_19:
;
#line 227
//clear ___nl__bool__5;
#line 227
___nl__bool__4 = !___nl__bool__4;
#line 227
if(___nl__bool__4){ goto label_30;}
#line 226
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(490), ___nl__im__1));
#line 226
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__11));
#line 226
c_rt_lib0clear(&___nl__im__11);
#line 226
c_rt_lib0clear(&___nl__im__1);
#line 226
//clear ___nl__bool__4;
#line 226
return ___nl__im__10;
#line 226
goto label_30;
#line 226
label_30:
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(151), ___nl__im__13, ___get_global_const(167), ___nl__im__14, ___get_global_const(265), ___nl__im__15));
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
if(___nl__bool__16){ goto label_60;}
#line 230
c_rt_lib0copy(&___nl__im__18, ___nl__im__1);
#line 230
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(151), ___nl__im__18);
#line 230
c_rt_lib0clear(&___nl__im__18);
#line 231
c_rt_lib0move(&___nl__im__20, nparser_priv0eat_text(___ref___rec__0));
#line 231
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(79));
#line 231
if(___nl__bool__19){ goto label_56;}
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
label_56:
;
#line 231
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(79)));
#line 231
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(167), ___nl__im__21);
#line 232
goto label_65;
#line 232
label_60:
;
#line 233
c_rt_lib0copy(&___nl__im__22, ___nl__im__1);
#line 233
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(167), ___nl__im__22);
#line 233
c_rt_lib0clear(&___nl__im__22);
#line 234
goto label_65;
#line 234
label_65:
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
c_rt_lib0move(&___nl__im__23,___get_global_const(446));
#line 235
nparser_priv0eat(___ref___rec__0, ___nl__im__23);
#line 235
c_rt_lib0clear(&___nl__im__23);
#line 236
c_rt_lib0move(&___nl__im__25, nparser_priv0parse_fun_val_arg_list(___ref___rec__0));
#line 236
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(79));
#line 236
if(___nl__bool__24){ goto label_80;}
#line 236
c_rt_lib0clear(&___nl__im__1);
#line 236
c_rt_lib0clear(&___nl__im__12);
#line 236
//clear ___nl__bool__24;
#line 236
return ___nl__im__25;
#line 236
label_80:
;
#line 236
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__25, ___get_global_const(79)));
#line 236
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_const(265), ___nl__im__26);
#line 237
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(947), ___nl__im__12));
#line 237
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__28));
#line 237
c_rt_lib0clear(&___nl__im__28);
#line 237
c_rt_lib0clear(&___nl__im__1);
#line 237
c_rt_lib0clear(&___nl__im__12);
#line 237
//clear ___nl__bool__24;
#line 237
c_rt_lib0clear(&___nl__im__25);
#line 237
c_rt_lib0clear(&___nl__im__26);
#line 237
return ___nl__im__27;
return NULL;

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
if(___nl__bool__5){ goto label_9;}
#line 243
c_rt_lib0move(&___nl__im__4,___get_global_const(37));
#line 243
goto label_13;
#line 243
label_9:
;
#line 243
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 243
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__7));
#line 243
___nl__rec_ptr__7 = NULL;
#line 243
label_13:
;
#line 243
//clear ___nl__bool__5;
#line 243
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(989), ___nl__im__4));
#line 243
c_rt_lib0clear(&___nl__im__4);
#line 245
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 245
c_rt_lib0move(&___nl__im__10, ntokenizer0get_place(___nl__rec_ptr__11));
#line 245
___nl__rec_ptr__11 = NULL;
#line 245
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__1, ___get_global_const(1024), ___nl__im__10));
#line 245
c_rt_lib0clear(&___nl__im__10);
#line 247
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 247
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__9, ___get_global_const(219), ___nl__im__3, ___get_global_const(205), ___nl__im__12));
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
return NULL;

}

ImmT  nparser_priv0parse_hash(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 252
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 253
c_rt_lib0move(&___nl__im__2,___get_global_const(304));
#line 253
nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 253
c_rt_lib0clear(&___nl__im__2);
#line 254
label_4:
;
#line 254
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 254
c_rt_lib0move(&___nl__im__5,___get_global_const(305));
#line 254
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 254
___nl__rec_ptr__4 = NULL;
#line 254
c_rt_lib0clear(&___nl__im__5);
#line 254
___nl__bool__3 = !___nl__bool__3;
#line 254
___nl__bool__3 = !___nl__bool__3;
#line 254
if(___nl__bool__3){ goto label_46;}
#line 255
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_hash_key(___ref___rec__0));
#line 256
c_rt_lib0move(&___nl__im__7,___get_global_const(306));
#line 256
nparser_priv0eat(___ref___rec__0, ___nl__im__7);
#line 256
c_rt_lib0clear(&___nl__im__7);
#line 257
c_rt_lib0move(&___nl__im__10, nparser_priv0parse_expr(___ref___rec__0));
#line 257
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(79));
#line 257
if(___nl__bool__9){ goto label_26;}
#line 257
c_rt_lib0clear(&___nl__im__1);
#line 257
//clear ___nl__bool__3;
#line 257
c_rt_lib0clear(&___nl__im__6);
#line 257
c_rt_lib0clear(&___nl__im__8);
#line 257
//clear ___nl__bool__9;
#line 257
return ___nl__im__10;
#line 257
label_26:
;
#line 257
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_const(79)));
#line 258
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(397), ___nl__im__6, ___get_global_const(224), ___nl__im__8));
#line 258
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__11));
#line 258
c_rt_lib0clear(&___nl__im__11);
#line 259
c_rt_lib0move(&___nl__im__13,___get_global_const(312));
#line 259
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__13);
#line 259
c_rt_lib0clear(&___nl__im__13);
#line 259
___nl__bool__12 = !___nl__bool__12;
#line 259
___nl__bool__12 = !___nl__bool__12;
#line 259
if(___nl__bool__12){ goto label_39;}
#line 259
goto label_46;
#line 259
goto label_39;
#line 259
label_39:
;
#line 259
//clear ___nl__bool__12;
#line 259
c_rt_lib0clear(&___nl__im__6);
#line 259
c_rt_lib0clear(&___nl__im__8);
#line 259
//clear ___nl__bool__9;
#line 259
c_rt_lib0clear(&___nl__im__10);
#line 260
goto label_4;
#line 260
label_46:
;
#line 261
c_rt_lib0move(&___nl__im__14,___get_global_const(305));
#line 261
nparser_priv0eat(___ref___rec__0, ___nl__im__14);
#line 261
c_rt_lib0clear(&___nl__im__14);
#line 262
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
#line 262
c_rt_lib0clear(&___nl__im__1);
#line 262
//clear ___nl__bool__3;
#line 262
c_rt_lib0clear(&___nl__im__6);
#line 262
c_rt_lib0clear(&___nl__im__8);
#line 262
//clear ___nl__bool__9;
#line 262
c_rt_lib0clear(&___nl__im__10);
#line 262
return ___nl__im__15;
return NULL;

}

ImmT  nparser_priv0parse_arr(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 266
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 267
c_rt_lib0move(&___nl__im__2,___get_global_const(314));
#line 267
nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 267
c_rt_lib0clear(&___nl__im__2);
#line 268
label_4:
;
#line 268
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 268
c_rt_lib0move(&___nl__im__5,___get_global_const(315));
#line 268
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 268
___nl__rec_ptr__4 = NULL;
#line 268
c_rt_lib0clear(&___nl__im__5);
#line 268
___nl__bool__3 = !___nl__bool__3;
#line 268
___nl__bool__3 = !___nl__bool__3;
#line 268
if(___nl__bool__3){ goto label_38;}
#line 269
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_expr(___ref___rec__0));
#line 269
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(79));
#line 269
if(___nl__bool__7){ goto label_21;}
#line 269
c_rt_lib0clear(&___nl__im__1);
#line 269
//clear ___nl__bool__3;
#line 269
c_rt_lib0clear(&___nl__im__6);
#line 269
//clear ___nl__bool__7;
#line 269
return ___nl__im__8;
#line 269
label_21:
;
#line 269
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(79)));
#line 270
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 271
c_rt_lib0move(&___nl__im__10,___get_global_const(312));
#line 271
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__10);
#line 271
c_rt_lib0clear(&___nl__im__10);
#line 271
___nl__bool__9 = !___nl__bool__9;
#line 271
___nl__bool__9 = !___nl__bool__9;
#line 271
if(___nl__bool__9){ goto label_32;}
#line 271
goto label_38;
#line 271
goto label_32;
#line 271
label_32:
;
#line 271
//clear ___nl__bool__9;
#line 271
c_rt_lib0clear(&___nl__im__6);
#line 271
//clear ___nl__bool__7;
#line 271
c_rt_lib0clear(&___nl__im__8);
#line 272
goto label_4;
#line 272
label_38:
;
#line 273
c_rt_lib0move(&___nl__im__11,___get_global_const(315));
#line 273
nparser_priv0eat(___ref___rec__0, ___nl__im__11);
#line 273
c_rt_lib0clear(&___nl__im__11);
#line 274
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
#line 274
c_rt_lib0clear(&___nl__im__1);
#line 274
//clear ___nl__bool__3;
#line 274
c_rt_lib0clear(&___nl__im__6);
#line 274
//clear ___nl__bool__7;
#line 274
c_rt_lib0clear(&___nl__im__8);
#line 274
return ___nl__im__12;
return NULL;

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
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(79));
#line 278
if(___nl__bool__2){ goto label_8;}
#line 278
c_rt_lib0clear(&___nl__im__1);
#line 278
//clear ___nl__bool__2;
#line 278
return ___nl__im__3;
#line 278
label_8:
;
#line 278
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(79)));
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
return NULL;

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
c_rt_lib0move(&___nl__im__4,___get_global_const(298));
#line 284
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 284
c_rt_lib0clear(&___nl__im__4);
#line 284
___nl__bool__3 = !___nl__bool__3;
#line 284
if(___nl__bool__3){ goto label_47;}
#line 285
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 285
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 285
___nl__rec_ptr__6 = NULL;
#line 286
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_fun_label(___ref___rec__0));
#line 286
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(991), ___nl__im__8));
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
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__1, ___get_global_const(1024), ___nl__im__14));
#line 291
c_rt_lib0clear(&___nl__im__14);
#line 294
c_rt_lib0move(&___nl__im__18,___get_global_const(298));
#line 296
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__5, ___get_global_const(1024), ___nl__im__9));
#line 298
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 298
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__20, ___get_global_const(219), ___nl__im__7, ___get_global_const(205), ___nl__im__21));
#line 298
c_rt_lib0clear(&___nl__im__20);
#line 298
c_rt_lib0clear(&___nl__im__21);
#line 298
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_const(540), ___nl__im__18, ___get_global_const(224), ___nl__im__19));
#line 298
c_rt_lib0clear(&___nl__im__18);
#line 298
c_rt_lib0clear(&___nl__im__19);
#line 298
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(990), ___nl__im__17));
#line 298
c_rt_lib0clear(&___nl__im__17);
#line 301
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 301
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__13, ___get_global_const(219), ___nl__im__16, ___get_global_const(205), ___nl__im__22));
#line 301
c_rt_lib0clear(&___nl__im__13);
#line 301
c_rt_lib0clear(&___nl__im__16);
#line 301
c_rt_lib0clear(&___nl__im__22);
#line 301
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__12));
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
goto label_47;
#line 303
label_47:
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
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 304
___nl__bool__23 = ntokenizer0is_type(___nl__rec_ptr__24, ___nl__im__25);
#line 304
___nl__rec_ptr__24 = NULL;
#line 304
c_rt_lib0clear(&___nl__im__25);
#line 304
___nl__bool__23 = !___nl__bool__23;
#line 304
if(___nl__bool__23){ goto label_96;}
#line 305
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_label(___ref___rec__0));
#line 305
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(79));
#line 305
if(___nl__bool__27){ goto label_68;}
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
label_68:
;
#line 305
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(79)));
#line 306
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(947));
#line 306
___nl__bool__29 = !___nl__bool__29;
#line 306
if(___nl__bool__29){ goto label_92;}
#line 308
___nl__rec_ptr__34 = &((*___ref___rec__0).state0field);
#line 308
c_rt_lib0move(&___nl__im__33, ntokenizer0get_place(___nl__rec_ptr__34));
#line 308
___nl__rec_ptr__34 = NULL;
#line 308
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__1, ___get_global_const(1024), ___nl__im__33));
#line 308
c_rt_lib0clear(&___nl__im__33);
#line 310
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 310
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__32, ___get_global_const(219), ___nl__im__26, ___get_global_const(205), ___nl__im__35));
#line 310
c_rt_lib0clear(&___nl__im__32);
#line 310
c_rt_lib0clear(&___nl__im__35);
#line 310
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__31));
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
goto label_92;
#line 312
label_92:
;
#line 312
//clear ___nl__bool__29;
#line 312
c_rt_lib0clear(&___nl__im__30);
#line 313
goto label_96;
#line 313
label_96:
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
c_rt_lib0move(&___nl__im__36,___get_global_const(1084));
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
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__1, ___get_global_const(1024), ___nl__im__40));
#line 316
c_rt_lib0clear(&___nl__im__40);
#line 317
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(967)));
#line 318
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 318
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__39, ___get_global_const(219), ___nl__im__42, ___get_global_const(205), ___nl__im__43));
#line 318
c_rt_lib0clear(&___nl__im__39);
#line 318
c_rt_lib0clear(&___nl__im__42);
#line 318
c_rt_lib0clear(&___nl__im__43);
#line 318
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__38));
#line 318
c_rt_lib0clear(&___nl__im__38);
#line 318
c_rt_lib0clear(&___nl__im__1);
#line 318
return ___nl__im__37;
return NULL;

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
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
bool  ___nl__bool__47 = false;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
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
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
ImmT  ___nl__im__71 = NULL;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
bool  ___nl__bool__85 = false;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
#line 323
label_0:
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
if(___nl__bool__9){ goto label_149;}
#line 329
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 330
c_rt_lib0move(&___nl__im__12,___get_global_const(1008));
#line 330
___nl__bool__11 = c_rt_lib0eq(___nl__im__8, ___nl__im__12);
#line 330
c_rt_lib0clear(&___nl__im__12);
#line 330
___nl__bool__11 = !___nl__bool__11;
#line 330
if(___nl__bool__11){ goto label_115;}
#line 331
c_rt_lib0move(&___nl__im__14, nast0get_ternary_ops());
#line 331
c_rt_lib0move(&___nl__im__15,___get_global_const(1008));
#line 331
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__14, ___nl__im__15));
#line 331
c_rt_lib0clear(&___nl__im__14);
#line 331
c_rt_lib0clear(&___nl__im__15);
#line 332
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(1005)));
#line 332
___nl__int__17 = getIntFromImm(___nl__im__18);
#line 332
c_rt_lib0clear(&___nl__im__18);
#line 332
___nl__int__19 = ___nl__int__17 < ___nl__int__2;
#line 332
___nl__bool__16 = ___nl__int__19;
#line 332
//clear ___nl__int__17;
#line 332
//clear ___nl__int__19;
#line 332
if(___nl__bool__16){ goto label_45;}
#line 332
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(1005)));
#line 332
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 332
c_rt_lib0clear(&___nl__im__22);
#line 332
___nl__int__23 = ___nl__int__21 == ___nl__int__2;
#line 332
___nl__bool__16 = ___nl__int__23;
#line 332
//clear ___nl__int__21;
#line 332
//clear ___nl__int__23;
#line 332
___nl__bool__20 = !___nl__bool__16;
#line 332
if(___nl__bool__20){ goto label_43;}
#line 332
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(1006)));
#line 332
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(274));
#line 332
c_rt_lib0clear(&___nl__im__24);
#line 332
label_43:
;
#line 332
//clear ___nl__bool__20;
#line 332
label_45:
;
#line 332
___nl__bool__16 = !___nl__bool__16;
#line 332
if(___nl__bool__16){ goto label_61;}
#line 332
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
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
return ___nl__im__25;
#line 332
goto label_61;
#line 332
label_61:
;
#line 332
//clear ___nl__bool__16;
#line 332
c_rt_lib0clear(&___nl__im__25);
#line 333
nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 334
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_expr(___ref___rec__0));
#line 334
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(79));
#line 334
if(___nl__bool__27){ goto label_80;}
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
c_rt_lib0clear(&___nl__im__26);
#line 334
//clear ___nl__bool__27;
#line 334
return ___nl__im__28;
#line 334
label_80:
;
#line 334
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(79)));
#line 335
c_rt_lib0move(&___nl__im__29,___get_global_const(510));
#line 335
nparser_priv0eat(___ref___rec__0, ___nl__im__29);
#line 335
c_rt_lib0clear(&___nl__im__29);
#line 336
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(1005)));
#line 336
___nl__int__33 = getIntFromImm(___nl__im__34);
#line 336
c_rt_lib0clear(&___nl__im__34);
#line 336
c_rt_lib0move(&___nl__im__32, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__33));
#line 336
//clear ___nl__int__33;
#line 336
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(79));
#line 336
if(___nl__bool__31){ goto label_107;}
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
c_rt_lib0clear(&___nl__im__26);
#line 336
//clear ___nl__bool__27;
#line 336
c_rt_lib0clear(&___nl__im__28);
#line 336
c_rt_lib0clear(&___nl__im__30);
#line 336
//clear ___nl__bool__31;
#line 336
return ___nl__im__32;
#line 336
label_107:
;
#line 336
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(79)));
#line 337
c_rt_lib0move(&___nl__im__36,___get_global_const(1008));
#line 337
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(4, ___get_global_const(994), ___nl__im__1, ___get_global_const(995), ___nl__im__26, ___get_global_const(996), ___nl__im__30, ___get_global_const(540), ___nl__im__36));
#line 337
c_rt_lib0clear(&___nl__im__36);
#line 337
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(988), ___nl__im__35));
#line 337
c_rt_lib0clear(&___nl__im__35);
#line 338
goto label_138;
#line 338
label_115:
;
#line 339
c_rt_lib0move(&___nl__im__39,___get_global_const(1085));
#line 339
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__8));
#line 339
c_rt_lib0clear(&___nl__im__39);
#line 339
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__38));
#line 339
c_rt_lib0clear(&___nl__im__38);
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
c_rt_lib0clear(&___nl__im__26);
#line 339
//clear ___nl__bool__27;
#line 339
c_rt_lib0clear(&___nl__im__28);
#line 339
c_rt_lib0clear(&___nl__im__30);
#line 339
//clear ___nl__bool__31;
#line 339
c_rt_lib0clear(&___nl__im__32);
#line 339
return ___nl__im__37;
#line 340
goto label_138;
#line 340
label_138:
;
#line 340
//clear ___nl__bool__11;
#line 340
c_rt_lib0clear(&___nl__im__13);
#line 340
c_rt_lib0clear(&___nl__im__26);
#line 340
//clear ___nl__bool__27;
#line 340
c_rt_lib0clear(&___nl__im__28);
#line 340
c_rt_lib0clear(&___nl__im__30);
#line 340
//clear ___nl__bool__31;
#line 340
c_rt_lib0clear(&___nl__im__32);
#line 340
c_rt_lib0clear(&___nl__im__37);
#line 341
goto label_389;
#line 341
label_149:
;
#line 341
c_rt_lib0move(&___nl__im__40, nast0get_bin_ops());
#line 341
___nl__bool__9 = hash0has_key(___nl__im__40, ___nl__im__6);
#line 341
c_rt_lib0clear(&___nl__im__40);
#line 341
___nl__bool__9 = !___nl__bool__9;
#line 341
if(___nl__bool__9){ goto label_292;}
#line 342
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 343
c_rt_lib0move(&___nl__im__42, nast0get_bin_ops());
#line 343
c_rt_lib0move(&___nl__im__41, hash0get_value(___nl__im__42, ___nl__im__6));
#line 343
c_rt_lib0clear(&___nl__im__42);
#line 344
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(1005)));
#line 344
___nl__int__44 = getIntFromImm(___nl__im__45);
#line 344
c_rt_lib0clear(&___nl__im__45);
#line 344
___nl__int__46 = ___nl__int__44 < ___nl__int__2;
#line 344
___nl__bool__43 = ___nl__int__46;
#line 344
//clear ___nl__int__44;
#line 344
//clear ___nl__int__46;
#line 344
if(___nl__bool__43){ goto label_181;}
#line 344
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(1005)));
#line 344
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 344
c_rt_lib0clear(&___nl__im__49);
#line 344
___nl__int__50 = ___nl__int__48 == ___nl__int__2;
#line 344
___nl__bool__43 = ___nl__int__50;
#line 344
//clear ___nl__int__48;
#line 344
//clear ___nl__int__50;
#line 344
___nl__bool__47 = !___nl__bool__43;
#line 344
if(___nl__bool__47){ goto label_179;}
#line 344
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(1006)));
#line 344
___nl__bool__43 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(274));
#line 344
c_rt_lib0clear(&___nl__im__51);
#line 344
label_179:
;
#line 344
//clear ___nl__bool__47;
#line 344
label_181:
;
#line 344
___nl__bool__43 = !___nl__bool__43;
#line 344
if(___nl__bool__43){ goto label_196;}
#line 344
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
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
c_rt_lib0clear(&___nl__im__41);
#line 344
//clear ___nl__bool__43;
#line 344
return ___nl__im__52;
#line 344
goto label_196;
#line 344
label_196:
;
#line 344
//clear ___nl__bool__43;
#line 344
c_rt_lib0clear(&___nl__im__52);
#line 345
nparser_priv0eat(___ref___rec__0, ___nl__im__6);
#line 346
c_rt_lib0move(&___nl__im__54,___get_global_const(558));
#line 346
___nl__bool__53 = c_rt_lib0eq(___nl__im__8, ___nl__im__54);
#line 346
c_rt_lib0clear(&___nl__im__54);
#line 346
___nl__bool__53 = !___nl__bool__53;
#line 346
if(___nl__bool__53){ goto label_211;}
#line 347
c_rt_lib0move(&___nl__im__56, nparser_priv0parse_hash_key(___ref___rec__0));
#line 347
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_const(540), ___nl__im__8, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__56));
#line 347
c_rt_lib0clear(&___nl__im__56);
#line 347
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__55));
#line 347
c_rt_lib0clear(&___nl__im__55);
#line 348
goto label_284;
#line 348
label_211:
;
#line 348
c_rt_lib0move(&___nl__im__57,___get_global_const(1011));
#line 348
___nl__bool__53 = c_rt_lib0eq(___nl__im__8, ___nl__im__57);
#line 348
c_rt_lib0clear(&___nl__im__57);
#line 348
___nl__bool__53 = !___nl__bool__53;
#line 348
if(___nl__bool__53){ goto label_227;}
#line 349
c_rt_lib0move(&___nl__im__58,___get_global_const(510));
#line 349
nparser_priv0eat(___ref___rec__0, ___nl__im__58);
#line 349
c_rt_lib0clear(&___nl__im__58);
#line 350
c_rt_lib0move(&___nl__im__59, nparser_priv0parse_hash_key(___ref___rec__0));
#line 351
c_rt_lib0move(&___nl__im__61,___get_global_const(985));
#line 351
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_mk(3, ___get_global_const(540), ___nl__im__61, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__59));
#line 351
c_rt_lib0clear(&___nl__im__61);
#line 351
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__60));
#line 351
c_rt_lib0clear(&___nl__im__60);
#line 352
goto label_284;
#line 352
label_227:
;
#line 352
c_rt_lib0move(&___nl__im__62,___get_global_const(1010));
#line 352
___nl__bool__53 = c_rt_lib0eq(___nl__im__8, ___nl__im__62);
#line 352
c_rt_lib0clear(&___nl__im__62);
#line 352
___nl__bool__53 = !___nl__bool__53;
#line 352
if(___nl__bool__53){ goto label_243;}
#line 353
c_rt_lib0move(&___nl__im__63,___get_global_const(510));
#line 353
nparser_priv0eat(___ref___rec__0, ___nl__im__63);
#line 353
c_rt_lib0clear(&___nl__im__63);
#line 354
c_rt_lib0move(&___nl__im__64, nparser_priv0parse_hash_key(___ref___rec__0));
#line 355
c_rt_lib0move(&___nl__im__66,___get_global_const(1086));
#line 355
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(3, ___get_global_const(540), ___nl__im__66, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__64));
#line 355
c_rt_lib0clear(&___nl__im__66);
#line 355
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__65));
#line 355
c_rt_lib0clear(&___nl__im__65);
#line 356
goto label_284;
#line 356
label_243:
;
#line 357
c_rt_lib0move(&___nl__im__68,___get_global_const(997));
#line 357
___nl__bool__67 = c_rt_lib0eq(___nl__im__8, ___nl__im__68);
#line 357
c_rt_lib0clear(&___nl__im__68);
#line 357
___nl__bool__67 = !___nl__bool__67;
#line 357
if(___nl__bool__67){ goto label_251;}
#line 357
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__1));
#line 357
goto label_251;
#line 357
label_251:
;
#line 357
//clear ___nl__bool__67;
#line 358
c_rt_lib0move(&___nl__im__74, nast0get_bin_ops());
#line 358
c_rt_lib0move(&___nl__im__73, hash0get_value(___nl__im__74, ___nl__im__8));
#line 358
c_rt_lib0clear(&___nl__im__74);
#line 358
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_const(1005)));
#line 358
___nl__int__72 = getIntFromImm(___nl__im__75);
#line 358
c_rt_lib0clear(&___nl__im__73);
#line 358
c_rt_lib0clear(&___nl__im__75);
#line 358
c_rt_lib0move(&___nl__im__71, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__72));
#line 358
//clear ___nl__int__72;
#line 358
___nl__bool__70 = c_rt_lib0priv_is(___nl__im__71, ___get_global_const(79));
#line 358
if(___nl__bool__70){ goto label_278;}
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
c_rt_lib0clear(&___nl__im__41);
#line 358
//clear ___nl__bool__53;
#line 358
c_rt_lib0clear(&___nl__im__59);
#line 358
c_rt_lib0clear(&___nl__im__64);
#line 358
c_rt_lib0clear(&___nl__im__69);
#line 358
//clear ___nl__bool__70;
#line 358
return ___nl__im__71;
#line 358
label_278:
;
#line 358
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__71, ___get_global_const(79)));
#line 359
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_mk(3, ___get_global_const(274), ___nl__im__1, ___get_global_const(540), ___nl__im__8, ___get_global_const(275), ___nl__im__69));
#line 359
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__76));
#line 359
c_rt_lib0clear(&___nl__im__76);
#line 360
goto label_284;
#line 360
label_284:
;
#line 360
//clear ___nl__bool__53;
#line 360
c_rt_lib0clear(&___nl__im__59);
#line 360
c_rt_lib0clear(&___nl__im__64);
#line 360
c_rt_lib0clear(&___nl__im__69);
#line 360
//clear ___nl__bool__70;
#line 360
c_rt_lib0clear(&___nl__im__71);
#line 361
goto label_389;
#line 361
label_292:
;
#line 361
c_rt_lib0move(&___nl__im__77,___get_global_const(314));
#line 361
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__77);
#line 361
c_rt_lib0clear(&___nl__im__77);
#line 361
___nl__bool__9 = !___nl__bool__9;
#line 361
if(___nl__bool__9){ goto label_322;}
#line 362
c_rt_lib0move(&___nl__im__8,___get_global_const(983));
#line 363
c_rt_lib0move(&___nl__im__80, nparser_priv0parse_expr(___ref___rec__0));
#line 363
___nl__bool__79 = c_rt_lib0priv_is(___nl__im__80, ___get_global_const(79));
#line 363
if(___nl__bool__79){ goto label_313;}
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
c_rt_lib0clear(&___nl__im__41);
#line 363
c_rt_lib0clear(&___nl__im__78);
#line 363
//clear ___nl__bool__79;
#line 363
return ___nl__im__80;
#line 363
label_313:
;
#line 363
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__80, ___get_global_const(79)));
#line 364
c_rt_lib0move(&___nl__im__81,___get_global_const(315));
#line 364
nparser_priv0eat(___ref___rec__0, ___nl__im__81);
#line 364
c_rt_lib0clear(&___nl__im__81);
#line 365
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_mk(3, ___get_global_const(540), ___nl__im__8, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__78));
#line 365
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__82));
#line 365
c_rt_lib0clear(&___nl__im__82);
#line 366
goto label_389;
#line 366
label_322:
;
#line 366
c_rt_lib0move(&___nl__im__83,___get_global_const(304));
#line 366
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__83);
#line 366
c_rt_lib0clear(&___nl__im__83);
#line 366
___nl__bool__9 = !___nl__bool__9;
#line 366
if(___nl__bool__9){ goto label_355;}
#line 367
c_rt_lib0move(&___nl__im__8,___get_global_const(984));
#line 368
c_rt_lib0move(&___nl__im__86, nparser_priv0parse_expr(___ref___rec__0));
#line 368
___nl__bool__85 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(79));
#line 368
if(___nl__bool__85){ goto label_346;}
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
c_rt_lib0clear(&___nl__im__41);
#line 368
c_rt_lib0clear(&___nl__im__78);
#line 368
//clear ___nl__bool__79;
#line 368
c_rt_lib0clear(&___nl__im__80);
#line 368
c_rt_lib0clear(&___nl__im__84);
#line 368
//clear ___nl__bool__85;
#line 368
return ___nl__im__86;
#line 368
label_346:
;
#line 368
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__86, ___get_global_const(79)));
#line 369
c_rt_lib0move(&___nl__im__87,___get_global_const(305));
#line 369
nparser_priv0eat(___ref___rec__0, ___nl__im__87);
#line 369
c_rt_lib0clear(&___nl__im__87);
#line 370
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_mk(3, ___get_global_const(540), ___nl__im__8, ___get_global_const(274), ___nl__im__1, ___get_global_const(275), ___nl__im__84));
#line 370
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__88));
#line 370
c_rt_lib0clear(&___nl__im__88);
#line 371
goto label_389;
#line 371
label_355:
;
#line 371
c_rt_lib0move(&___nl__im__89,___get_global_const(1009));
#line 371
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__89);
#line 371
c_rt_lib0clear(&___nl__im__89);
#line 371
___nl__bool__9 = !___nl__bool__9;
#line 371
if(___nl__bool__9){ goto label_363;}
#line 372
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(992), ___nl__im__1));
#line 373
goto label_389;
#line 373
label_363:
;
#line 373
c_rt_lib0move(&___nl__im__90,___get_global_const(190));
#line 373
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__90);
#line 373
c_rt_lib0clear(&___nl__im__90);
#line 373
___nl__bool__9 = !___nl__bool__9;
#line 373
if(___nl__bool__9){ goto label_371;}
#line 374
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(993), ___nl__im__1));
#line 375
goto label_389;
#line 375
label_371:
;
#line 376
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__1));
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
c_rt_lib0clear(&___nl__im__41);
#line 376
c_rt_lib0clear(&___nl__im__78);
#line 376
//clear ___nl__bool__79;
#line 376
c_rt_lib0clear(&___nl__im__80);
#line 376
c_rt_lib0clear(&___nl__im__84);
#line 376
//clear ___nl__bool__85;
#line 376
c_rt_lib0clear(&___nl__im__86);
#line 376
return ___nl__im__91;
#line 377
goto label_389;
#line 377
label_389:
;
#line 377
//clear ___nl__bool__9;
#line 377
c_rt_lib0clear(&___nl__im__41);
#line 377
c_rt_lib0clear(&___nl__im__78);
#line 377
//clear ___nl__bool__79;
#line 377
c_rt_lib0clear(&___nl__im__80);
#line 377
c_rt_lib0clear(&___nl__im__84);
#line 377
//clear ___nl__bool__85;
#line 377
c_rt_lib0clear(&___nl__im__86);
#line 377
c_rt_lib0clear(&___nl__im__91);
#line 379
___nl__rec_ptr__94 = &((*___ref___rec__0).state0field);
#line 379
c_rt_lib0move(&___nl__im__93, ntokenizer0get_place(___nl__rec_ptr__94));
#line 379
___nl__rec_ptr__94 = NULL;
#line 379
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__4, ___get_global_const(1024), ___nl__im__93));
#line 379
c_rt_lib0clear(&___nl__im__93);
#line 381
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 381
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__92, ___get_global_const(219), ___nl__im__3, ___get_global_const(205), ___nl__im__95));
#line 381
c_rt_lib0clear(&___nl__im__92);
#line 381
c_rt_lib0clear(&___nl__im__95);
#line 381
c_rt_lib0clear(&___nl__im__3);
#line 381
c_rt_lib0clear(&___nl__im__4);
#line 381
c_rt_lib0clear(&___nl__im__6);
#line 381
c_rt_lib0clear(&___nl__im__8);
#line 323
goto label_0;
#line 384
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_mk(0));
#line 384
nl_die_arg(___nl__im__96);
return NULL;

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
ntokenizer0state_t0type* ___nl__rec_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
bool  ___nl__bool__49 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__string__56 = NULL;
bool  ___nl__bool__57 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__string__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__69 = NULL;
ImmT  ___nl__im__70 = NULL;
bool  ___nl__bool__71 = false;
ImmT  ___nl__im__72 = NULL;
bool  ___nl__bool__73 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
INT  ___nl__int__95 = 0;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
bool  ___nl__bool__99 = false;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__103 = NULL;
ImmT  ___nl__im__104 = NULL;
bool  ___nl__bool__105 = false;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
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
ntokenizer0state_t0type* ___nl__rec_ptr__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
#line 389
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 389
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 389
___nl__rec_ptr__4 = NULL;
#line 390
c_rt_lib0move(&___nl__im__6,___get_global_const(446));
#line 390
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 390
c_rt_lib0clear(&___nl__im__6);
#line 390
___nl__bool__5 = !___nl__bool__5;
#line 390
if(___nl__bool__5){ goto label_25;}
#line 391
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_expr(___ref___rec__0));
#line 391
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(79));
#line 391
if(___nl__bool__8){ goto label_18;}
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
label_18:
;
#line 391
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(79)));
#line 392
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(986), ___nl__im__7));
#line 393
c_rt_lib0move(&___nl__im__10,___get_global_const(320));
#line 393
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 393
c_rt_lib0clear(&___nl__im__10);
#line 394
goto label_555;
#line 394
label_25:
;
#line 394
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 394
c_rt_lib0move(&___nl__im__12,___get_global_const(304));
#line 394
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__11, ___nl__im__12);
#line 394
___nl__rec_ptr__11 = NULL;
#line 394
c_rt_lib0clear(&___nl__im__12);
#line 394
___nl__bool__5 = !___nl__bool__5;
#line 394
if(___nl__bool__5){ goto label_50;}
#line 395
c_rt_lib0move(&___nl__im__15, nparser_priv0parse_hash(___ref___rec__0));
#line 395
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(79));
#line 395
if(___nl__bool__14){ goto label_46;}
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
c_rt_lib0clear(&___nl__im__13);
#line 395
//clear ___nl__bool__14;
#line 395
return ___nl__im__15;
#line 395
label_46:
;
#line 395
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(79)));
#line 396
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__13));
#line 397
goto label_555;
#line 397
label_50:
;
#line 397
___nl__rec_ptr__16 = &((*___ref___rec__0).state0field);
#line 397
c_rt_lib0move(&___nl__im__17,___get_global_const(314));
#line 397
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__16, ___nl__im__17);
#line 397
___nl__rec_ptr__16 = NULL;
#line 397
c_rt_lib0clear(&___nl__im__17);
#line 397
___nl__bool__5 = !___nl__bool__5;
#line 397
if(___nl__bool__5){ goto label_78;}
#line 398
c_rt_lib0move(&___nl__im__20, nparser_priv0parse_arr(___ref___rec__0));
#line 398
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(79));
#line 398
if(___nl__bool__19){ goto label_74;}
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
c_rt_lib0clear(&___nl__im__13);
#line 398
//clear ___nl__bool__14;
#line 398
c_rt_lib0clear(&___nl__im__15);
#line 398
c_rt_lib0clear(&___nl__im__18);
#line 398
//clear ___nl__bool__19;
#line 398
return ___nl__im__20;
#line 398
label_74:
;
#line 398
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(79)));
#line 399
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__18));
#line 400
goto label_555;
#line 400
label_78:
;
#line 400
___nl__rec_ptr__21 = &((*___ref___rec__0).state0field);
#line 400
c_rt_lib0move(&___nl__im__22,___get_global_const(510));
#line 400
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__21, ___nl__im__22);
#line 400
___nl__rec_ptr__21 = NULL;
#line 400
c_rt_lib0clear(&___nl__im__22);
#line 400
___nl__bool__5 = !___nl__bool__5;
#line 400
if(___nl__bool__5){ goto label_109;}
#line 401
c_rt_lib0move(&___nl__im__25, nparser_priv0parse_variant(___ref___rec__0));
#line 401
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_const(79));
#line 401
if(___nl__bool__24){ goto label_105;}
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
c_rt_lib0clear(&___nl__im__13);
#line 401
//clear ___nl__bool__14;
#line 401
c_rt_lib0clear(&___nl__im__15);
#line 401
c_rt_lib0clear(&___nl__im__18);
#line 401
//clear ___nl__bool__19;
#line 401
c_rt_lib0clear(&___nl__im__20);
#line 401
c_rt_lib0clear(&___nl__im__23);
#line 401
//clear ___nl__bool__24;
#line 401
return ___nl__im__25;
#line 401
label_105:
;
#line 401
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_const(79)));
#line 402
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(543), ___nl__im__23));
#line 403
goto label_555;
#line 403
label_109:
;
#line 403
___nl__rec_ptr__26 = &((*___ref___rec__0).state0field);
#line 403
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(1087)));
#line 403
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__26, ___nl__im__27);
#line 403
___nl__rec_ptr__26 = NULL;
#line 403
c_rt_lib0clear(&___nl__im__27);
#line 403
___nl__bool__5 = !___nl__bool__5;
#line 403
if(___nl__bool__5){ goto label_175;}
#line 404
___nl__rec_ptr__29 = &((*___ref___rec__0).state0field);
#line 404
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_none(___get_global_const(1087)));
#line 404
c_rt_lib0move(&___nl__im__28, ntokenizer0eat_type(___nl__rec_ptr__29, ___nl__im__30));
#line 404
___nl__rec_ptr__29 = NULL;
#line 404
c_rt_lib0clear(&___nl__im__30);
#line 406
c_rt_lib0move(&___nl__im__32, string_utils0get_integer(___nl__im__28));
#line 406
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(79));
#line 406
if(___nl__bool__33){ goto label_130;}
#line 408
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(78));
#line 408
if(___nl__bool__33){ goto label_135;}
#line 408
c_rt_lib0move(&___nl__im__34,___get_global_const(16));
#line 408
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__32));
#line 408
nl_die_arg(___nl__im__34);
#line 406
label_130:
;
#line 406
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(79)));
#line 406
___nl__int__35 = getIntFromImm(___nl__im__36);
#line 407
___nl__int__31 = ___nl__int__35;
#line 408
goto label_170;
#line 408
label_135:
;
#line 408
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(78)));
#line 408
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 409
c_rt_lib0move(&___nl__im__41,___get_global_const(1088));
#line 409
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__28));
#line 409
c_rt_lib0clear(&___nl__im__41);
#line 409
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__40));
#line 409
c_rt_lib0clear(&___nl__im__40);
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
c_rt_lib0clear(&___nl__im__13);
#line 409
//clear ___nl__bool__14;
#line 409
c_rt_lib0clear(&___nl__im__15);
#line 409
c_rt_lib0clear(&___nl__im__18);
#line 409
//clear ___nl__bool__19;
#line 409
c_rt_lib0clear(&___nl__im__20);
#line 409
c_rt_lib0clear(&___nl__im__23);
#line 409
//clear ___nl__bool__24;
#line 409
c_rt_lib0clear(&___nl__im__25);
#line 409
c_rt_lib0clear(&___nl__im__28);
#line 409
//clear ___nl__int__31;
#line 409
c_rt_lib0clear(&___nl__im__32);
#line 409
//clear ___nl__bool__33;
#line 409
c_rt_lib0clear(&___nl__im__34);
#line 409
//clear ___nl__int__35;
#line 409
c_rt_lib0clear(&___nl__im__36);
#line 409
c_rt_lib0clear(&___nl__im__37);
#line 409
c_rt_lib0clear(&___nl__im__38);
#line 409
return ___nl__im__39;
#line 410
goto label_170;
#line 410
label_170:
;
#line 411
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__31));
#line 411
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__im__42));
#line 411
c_rt_lib0clear(&___nl__im__42);
#line 412
goto label_555;
#line 412
label_175:
;
#line 412
___nl__rec_ptr__43 = &((*___ref___rec__0).state0field);
#line 412
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_const(1089)));
#line 412
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__43, ___nl__im__44);
#line 412
___nl__rec_ptr__43 = NULL;
#line 412
c_rt_lib0clear(&___nl__im__44);
#line 412
if(___nl__bool__5){ goto label_187;}
#line 412
___nl__rec_ptr__45 = &((*___ref___rec__0).state0field);
#line 412
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(553)));
#line 412
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__45, ___nl__im__46);
#line 412
___nl__rec_ptr__45 = NULL;
#line 412
c_rt_lib0clear(&___nl__im__46);
#line 412
label_187:
;
#line 412
___nl__bool__5 = !___nl__bool__5;
#line 412
if(___nl__bool__5){ goto label_253;}
#line 413
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 413
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(1, ___get_global_const(128), ___nl__im__48));
#line 413
c_rt_lib0clear(&___nl__im__48);
#line 414
label_193:
;
#line 414
___nl__rec_ptr__50 = &((*___ref___rec__0).state0field);
#line 414
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_none(___get_global_const(1089)));
#line 414
___nl__bool__49 = ntokenizer0is_type(___nl__rec_ptr__50, ___nl__im__51);
#line 414
___nl__rec_ptr__50 = NULL;
#line 414
c_rt_lib0clear(&___nl__im__51);
#line 414
___nl__bool__49 = !___nl__bool__49;
#line 414
if(___nl__bool__49){ goto label_215;}
#line 415
c_rt_lib0move(&___nl__im__52,___get_global_const(128));
#line 415
c_rt_lib0move(&___nl__im__52, c_rt_lib0get_ref_hash(___nl__im__47, ___nl__im__52));
#line 415
___nl__rec_ptr__54 = &((*___ref___rec__0).state0field);
#line 415
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(1089)));
#line 415
c_rt_lib0move(&___nl__im__53, ntokenizer0eat_type(___nl__rec_ptr__54, ___nl__im__55));
#line 415
___nl__rec_ptr__54 = NULL;
#line 415
c_rt_lib0clear(&___nl__im__55);
#line 415
c_rt_lib0delete(array0push(&___nl__im__52, ___nl__im__53));
#line 415
c_rt_lib0move(&___nl__string__56,___get_global_const(128));
#line 415
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__47, ___nl__string__56, ___nl__im__52));
#line 415
c_rt_lib0clear(&___nl__im__52);
#line 415
c_rt_lib0clear(&___nl__im__53);
#line 415
c_rt_lib0clear(&___nl__string__56);
#line 416
goto label_193;
#line 416
label_215:
;
#line 417
___nl__rec_ptr__58 = &((*___ref___rec__0).state0field);
#line 417
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_const(553)));
#line 417
___nl__bool__57 = ntokenizer0is_type(___nl__rec_ptr__58, ___nl__im__59);
#line 417
___nl__rec_ptr__58 = NULL;
#line 417
c_rt_lib0clear(&___nl__im__59);
#line 417
___nl__bool__57 = !___nl__bool__57;
#line 417
if(___nl__bool__57){ goto label_242;}
#line 418
c_rt_lib0move(&___nl__im__60,___get_global_const(128));
#line 418
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_hash(___nl__im__47, ___nl__im__60));
#line 418
___nl__rec_ptr__62 = &((*___ref___rec__0).state0field);
#line 418
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_const(553)));
#line 418
c_rt_lib0move(&___nl__im__61, ntokenizer0eat_type(___nl__rec_ptr__62, ___nl__im__63));
#line 418
___nl__rec_ptr__62 = NULL;
#line 418
c_rt_lib0clear(&___nl__im__63);
#line 418
c_rt_lib0delete(array0push(&___nl__im__60, ___nl__im__61));
#line 418
c_rt_lib0move(&___nl__string__64,___get_global_const(128));
#line 418
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__47, ___nl__string__64, ___nl__im__60));
#line 418
c_rt_lib0clear(&___nl__im__60);
#line 418
c_rt_lib0clear(&___nl__im__61);
#line 418
c_rt_lib0clear(&___nl__string__64);
#line 419
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(1024)));
#line 419
c_rt_lib0copy(&___nl__im__66, ___nl__im__65);
#line 419
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_const(1026), ___nl__im__66);
#line 419
c_rt_lib0clear(&___nl__im__65);
#line 419
c_rt_lib0clear(&___nl__im__66);
#line 420
goto label_249;
#line 420
label_242:
;
#line 421
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 421
c_rt_lib0copy(&___nl__im__68, ___nl__im__67);
#line 421
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_const(1026), ___nl__im__68);
#line 421
c_rt_lib0clear(&___nl__im__67);
#line 421
c_rt_lib0clear(&___nl__im__68);
#line 422
goto label_249;
#line 422
label_249:
;
#line 422
//clear ___nl__bool__57;
#line 423
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(553), ___nl__im__47));
#line 424
goto label_555;
#line 424
label_253:
;
#line 424
___nl__rec_ptr__69 = &((*___ref___rec__0).state0field);
#line 424
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 424
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__69, ___nl__im__70);
#line 424
___nl__rec_ptr__69 = NULL;
#line 424
c_rt_lib0clear(&___nl__im__70);
#line 424
___nl__bool__5 = !___nl__bool__5;
#line 424
if(___nl__bool__5){ goto label_297;}
#line 425
c_rt_lib0move(&___nl__im__72, nparser_priv0parse_label(___ref___rec__0));
#line 425
___nl__bool__71 = c_rt_lib0priv_is(___nl__im__72, ___get_global_const(79));
#line 425
if(___nl__bool__71){ goto label_294;}
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
c_rt_lib0clear(&___nl__im__13);
#line 425
//clear ___nl__bool__14;
#line 425
c_rt_lib0clear(&___nl__im__15);
#line 425
c_rt_lib0clear(&___nl__im__18);
#line 425
//clear ___nl__bool__19;
#line 425
c_rt_lib0clear(&___nl__im__20);
#line 425
c_rt_lib0clear(&___nl__im__23);
#line 425
//clear ___nl__bool__24;
#line 425
c_rt_lib0clear(&___nl__im__25);
#line 425
c_rt_lib0clear(&___nl__im__28);
#line 425
//clear ___nl__int__31;
#line 425
c_rt_lib0clear(&___nl__im__32);
#line 425
//clear ___nl__bool__33;
#line 425
c_rt_lib0clear(&___nl__im__34);
#line 425
//clear ___nl__int__35;
#line 425
c_rt_lib0clear(&___nl__im__36);
#line 425
c_rt_lib0clear(&___nl__im__37);
#line 425
c_rt_lib0clear(&___nl__im__38);
#line 425
c_rt_lib0clear(&___nl__im__39);
#line 425
c_rt_lib0clear(&___nl__im__47);
#line 425
//clear ___nl__bool__49;
#line 425
//clear ___nl__bool__71;
#line 425
return ___nl__im__72;
#line 425
label_294:
;
#line 425
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__72, ___get_global_const(79)));
#line 426
goto label_555;
#line 426
label_297:
;
#line 426
___nl__rec_ptr__74 = &((*___ref___rec__0).state0field);
#line 426
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_none(___get_global_const(1090)));
#line 426
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__74, ___nl__im__75);
#line 426
___nl__rec_ptr__74 = NULL;
#line 426
c_rt_lib0clear(&___nl__im__75);
#line 426
___nl__bool__73 = !___nl__bool__5;
#line 426
if(___nl__bool__73){ goto label_312;}
#line 426
c_rt_lib0move(&___nl__im__76, nast0get_unary_ops());
#line 427
___nl__rec_ptr__78 = &((*___ref___rec__0).state0field);
#line 427
c_rt_lib0move(&___nl__im__77, ntokenizer0get_token(___nl__rec_ptr__78));
#line 427
___nl__rec_ptr__78 = NULL;
#line 427
___nl__bool__5 = hash0has_key(___nl__im__76, ___nl__im__77);
#line 427
c_rt_lib0clear(&___nl__im__76);
#line 427
c_rt_lib0clear(&___nl__im__77);
#line 427
label_312:
;
#line 427
//clear ___nl__bool__73;
#line 427
___nl__bool__5 = !___nl__bool__5;
#line 427
if(___nl__bool__5){ goto label_416;}
#line 428
___nl__rec_ptr__80 = &((*___ref___rec__0).state0field);
#line 428
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_const(1090)));
#line 428
c_rt_lib0move(&___nl__im__79, ntokenizer0eat_type(___nl__rec_ptr__80, ___nl__im__81));
#line 428
___nl__rec_ptr__80 = NULL;
#line 428
c_rt_lib0clear(&___nl__im__81);
#line 430
c_rt_lib0move(&___nl__im__84,___get_global_const(298));
#line 430
___nl__bool__83 = c_rt_lib0eq(___nl__im__79, ___nl__im__84);
#line 430
c_rt_lib0clear(&___nl__im__84);
#line 430
___nl__bool__83 = !___nl__bool__83;
#line 430
if(___nl__bool__83){ goto label_341;}
#line 431
___nl__rec_ptr__86 = &((*___ref___rec__0).state0field);
#line 431
c_rt_lib0move(&___nl__im__85, ntokenizer0get_place(___nl__rec_ptr__86));
#line 431
___nl__rec_ptr__86 = NULL;
#line 432
c_rt_lib0move(&___nl__im__88, nparser_priv0parse_fun_label(___ref___rec__0));
#line 432
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_const(991), ___nl__im__88));
#line 432
c_rt_lib0clear(&___nl__im__88);
#line 433
___nl__rec_ptr__90 = &((*___ref___rec__0).state0field);
#line 433
c_rt_lib0move(&___nl__im__89, ntokenizer0get_place(___nl__rec_ptr__90));
#line 433
___nl__rec_ptr__90 = NULL;
#line 435
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__85, ___get_global_const(1024), ___nl__im__89));
#line 440
c_rt_lib0move(&___nl__im__92, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 440
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__91, ___get_global_const(219), ___nl__im__87, ___get_global_const(205), ___nl__im__92));
#line 440
c_rt_lib0clear(&___nl__im__91);
#line 440
c_rt_lib0clear(&___nl__im__92);
#line 442
goto label_405;
#line 442
label_341:
;
#line 443
c_rt_lib0move(&___nl__im__97, nast0get_unary_ops());
#line 443
c_rt_lib0move(&___nl__im__96, hash0get_value(___nl__im__97, ___nl__im__79));
#line 443
c_rt_lib0clear(&___nl__im__97);
#line 443
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_const(1005)));
#line 443
___nl__int__95 = getIntFromImm(___nl__im__98);
#line 443
c_rt_lib0clear(&___nl__im__96);
#line 443
c_rt_lib0clear(&___nl__im__98);
#line 443
c_rt_lib0move(&___nl__im__94, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__95));
#line 443
//clear ___nl__int__95;
#line 443
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__94, ___get_global_const(79));
#line 443
if(___nl__bool__93){ goto label_391;}
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
c_rt_lib0clear(&___nl__im__13);
#line 443
//clear ___nl__bool__14;
#line 443
c_rt_lib0clear(&___nl__im__15);
#line 443
c_rt_lib0clear(&___nl__im__18);
#line 443
//clear ___nl__bool__19;
#line 443
c_rt_lib0clear(&___nl__im__20);
#line 443
c_rt_lib0clear(&___nl__im__23);
#line 443
//clear ___nl__bool__24;
#line 443
c_rt_lib0clear(&___nl__im__25);
#line 443
c_rt_lib0clear(&___nl__im__28);
#line 443
//clear ___nl__int__31;
#line 443
c_rt_lib0clear(&___nl__im__32);
#line 443
//clear ___nl__bool__33;
#line 443
c_rt_lib0clear(&___nl__im__34);
#line 443
//clear ___nl__int__35;
#line 443
c_rt_lib0clear(&___nl__im__36);
#line 443
c_rt_lib0clear(&___nl__im__37);
#line 443
c_rt_lib0clear(&___nl__im__38);
#line 443
c_rt_lib0clear(&___nl__im__39);
#line 443
c_rt_lib0clear(&___nl__im__47);
#line 443
//clear ___nl__bool__49;
#line 443
//clear ___nl__bool__71;
#line 443
c_rt_lib0clear(&___nl__im__72);
#line 443
c_rt_lib0clear(&___nl__im__79);
#line 443
c_rt_lib0clear(&___nl__im__82);
#line 443
//clear ___nl__bool__83;
#line 443
c_rt_lib0clear(&___nl__im__85);
#line 443
c_rt_lib0clear(&___nl__im__87);
#line 443
c_rt_lib0clear(&___nl__im__89);
#line 443
//clear ___nl__bool__93;
#line 443
return ___nl__im__94;
#line 443
label_391:
;
#line 443
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__94, ___get_global_const(79)));
#line 444
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_const(219)));
#line 444
___nl__bool__99 = c_rt_lib0priv_is(___nl__im__100, ___get_global_const(990));
#line 444
c_rt_lib0clear(&___nl__im__100);
#line 444
___nl__bool__99 = !___nl__bool__99;
#line 444
if(___nl__bool__99){ goto label_402;}
#line 444
c_rt_lib0move(&___nl__im__101,___get_global_const(1091));
#line 444
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__101));
#line 444
c_rt_lib0clear(&___nl__im__101);
#line 444
goto label_402;
#line 444
label_402:
;
#line 444
//clear ___nl__bool__99;
#line 445
goto label_405;
#line 445
label_405:
;
#line 445
//clear ___nl__bool__83;
#line 445
c_rt_lib0clear(&___nl__im__85);
#line 445
c_rt_lib0clear(&___nl__im__87);
#line 445
c_rt_lib0clear(&___nl__im__89);
#line 445
//clear ___nl__bool__93;
#line 445
c_rt_lib0clear(&___nl__im__94);
#line 446
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_mk(2, ___get_global_const(540), ___nl__im__79, ___get_global_const(224), ___nl__im__82));
#line 446
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(990), ___nl__im__102));
#line 446
c_rt_lib0clear(&___nl__im__102);
#line 447
goto label_555;
#line 447
label_416:
;
#line 447
___nl__rec_ptr__103 = &((*___ref___rec__0).state0field);
#line 447
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_const(1092)));
#line 447
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__103, ___nl__im__104);
#line 447
___nl__rec_ptr__103 = NULL;
#line 447
c_rt_lib0clear(&___nl__im__104);
#line 447
___nl__bool__5 = !___nl__bool__5;
#line 447
if(___nl__bool__5){ goto label_506;}
#line 448
c_rt_lib0move(&___nl__im__106,___get_global_const(561));
#line 448
___nl__bool__105 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__106);
#line 448
c_rt_lib0clear(&___nl__im__106);
#line 448
___nl__bool__105 = !___nl__bool__105;
#line 448
if(___nl__bool__105){ goto label_437;}
#line 449
c_rt_lib0move(&___nl__im__108,___get_global_const(180));
#line 449
c_rt_lib0move(&___nl__im__109, nparser_priv0get_value_nop(___ref___rec__0));
#line 449
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__108, ___get_global_const(490), ___nl__im__109));
#line 449
c_rt_lib0clear(&___nl__im__108);
#line 449
c_rt_lib0clear(&___nl__im__109);
#line 449
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(543), ___nl__im__107));
#line 449
c_rt_lib0clear(&___nl__im__107);
#line 450
goto label_501;
#line 450
label_437:
;
#line 450
c_rt_lib0move(&___nl__im__110,___get_global_const(562));
#line 450
___nl__bool__105 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__110);
#line 450
c_rt_lib0clear(&___nl__im__110);
#line 450
___nl__bool__105 = !___nl__bool__105;
#line 450
if(___nl__bool__105){ goto label_451;}
#line 451
c_rt_lib0move(&___nl__im__112,___get_global_const(181));
#line 451
c_rt_lib0move(&___nl__im__113, nparser_priv0get_value_nop(___ref___rec__0));
#line 451
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__112, ___get_global_const(490), ___nl__im__113));
#line 451
c_rt_lib0clear(&___nl__im__112);
#line 451
c_rt_lib0clear(&___nl__im__113);
#line 451
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(543), ___nl__im__111));
#line 451
c_rt_lib0clear(&___nl__im__111);
#line 452
goto label_501;
#line 452
label_451:
;
#line 453
c_rt_lib0move(&___nl__im__116,___get_global_const(1093));
#line 453
c_rt_lib0move(&___nl__im__117, string0lf());
#line 453
c_rt_lib0move(&___nl__im__115, c_rt_lib0concat_new(___nl__im__116, ___nl__im__117));
#line 453
c_rt_lib0clear(&___nl__im__116);
#line 453
c_rt_lib0clear(&___nl__im__117);
#line 453
___nl__rec_ptr__119 = &((*___ref___rec__0).state0field);
#line 453
c_rt_lib0move(&___nl__im__118, ntokenizer0info(___nl__rec_ptr__119));
#line 453
___nl__rec_ptr__119 = NULL;
#line 453
c_rt_lib0move(&___nl__im__114, c_rt_lib0concat_new(___nl__im__115, ___nl__im__118));
#line 453
c_rt_lib0clear(&___nl__im__115);
#line 453
c_rt_lib0clear(&___nl__im__118);
#line 454
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__114));
#line 455
c_rt_lib0move(&___nl__im__120, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__114));
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
c_rt_lib0clear(&___nl__im__13);
#line 455
//clear ___nl__bool__14;
#line 455
c_rt_lib0clear(&___nl__im__15);
#line 455
c_rt_lib0clear(&___nl__im__18);
#line 455
//clear ___nl__bool__19;
#line 455
c_rt_lib0clear(&___nl__im__20);
#line 455
c_rt_lib0clear(&___nl__im__23);
#line 455
//clear ___nl__bool__24;
#line 455
c_rt_lib0clear(&___nl__im__25);
#line 455
c_rt_lib0clear(&___nl__im__28);
#line 455
//clear ___nl__int__31;
#line 455
c_rt_lib0clear(&___nl__im__32);
#line 455
//clear ___nl__bool__33;
#line 455
c_rt_lib0clear(&___nl__im__34);
#line 455
//clear ___nl__int__35;
#line 455
c_rt_lib0clear(&___nl__im__36);
#line 455
c_rt_lib0clear(&___nl__im__37);
#line 455
c_rt_lib0clear(&___nl__im__38);
#line 455
c_rt_lib0clear(&___nl__im__39);
#line 455
c_rt_lib0clear(&___nl__im__47);
#line 455
//clear ___nl__bool__49;
#line 455
//clear ___nl__bool__71;
#line 455
c_rt_lib0clear(&___nl__im__72);
#line 455
c_rt_lib0clear(&___nl__im__79);
#line 455
c_rt_lib0clear(&___nl__im__82);
#line 455
//clear ___nl__bool__105;
#line 455
c_rt_lib0clear(&___nl__im__114);
#line 455
return ___nl__im__120;
#line 456
goto label_501;
#line 456
label_501:
;
#line 456
//clear ___nl__bool__105;
#line 456
c_rt_lib0clear(&___nl__im__114);
#line 456
c_rt_lib0clear(&___nl__im__120);
#line 457
goto label_555;
#line 457
label_506:
;
#line 458
c_rt_lib0move(&___nl__im__123,___get_global_const(1094));
#line 458
c_rt_lib0move(&___nl__im__124, string0lf());
#line 458
c_rt_lib0move(&___nl__im__122, c_rt_lib0concat_new(___nl__im__123, ___nl__im__124));
#line 458
c_rt_lib0clear(&___nl__im__123);
#line 458
c_rt_lib0clear(&___nl__im__124);
#line 458
___nl__rec_ptr__126 = &((*___ref___rec__0).state0field);
#line 458
c_rt_lib0move(&___nl__im__125, ntokenizer0info(___nl__rec_ptr__126));
#line 458
___nl__rec_ptr__126 = NULL;
#line 458
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__im__125));
#line 458
c_rt_lib0clear(&___nl__im__122);
#line 458
c_rt_lib0clear(&___nl__im__125);
#line 459
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__121));
#line 460
c_rt_lib0move(&___nl__im__127, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__121));
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
c_rt_lib0clear(&___nl__im__13);
#line 460
//clear ___nl__bool__14;
#line 460
c_rt_lib0clear(&___nl__im__15);
#line 460
c_rt_lib0clear(&___nl__im__18);
#line 460
//clear ___nl__bool__19;
#line 460
c_rt_lib0clear(&___nl__im__20);
#line 460
c_rt_lib0clear(&___nl__im__23);
#line 460
//clear ___nl__bool__24;
#line 460
c_rt_lib0clear(&___nl__im__25);
#line 460
c_rt_lib0clear(&___nl__im__28);
#line 460
//clear ___nl__int__31;
#line 460
c_rt_lib0clear(&___nl__im__32);
#line 460
//clear ___nl__bool__33;
#line 460
c_rt_lib0clear(&___nl__im__34);
#line 460
//clear ___nl__int__35;
#line 460
c_rt_lib0clear(&___nl__im__36);
#line 460
c_rt_lib0clear(&___nl__im__37);
#line 460
c_rt_lib0clear(&___nl__im__38);
#line 460
c_rt_lib0clear(&___nl__im__39);
#line 460
c_rt_lib0clear(&___nl__im__47);
#line 460
//clear ___nl__bool__49;
#line 460
//clear ___nl__bool__71;
#line 460
c_rt_lib0clear(&___nl__im__72);
#line 460
c_rt_lib0clear(&___nl__im__79);
#line 460
c_rt_lib0clear(&___nl__im__82);
#line 460
c_rt_lib0clear(&___nl__im__121);
#line 460
return ___nl__im__127;
#line 461
goto label_555;
#line 461
label_555:
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
c_rt_lib0clear(&___nl__im__13);
#line 461
//clear ___nl__bool__14;
#line 461
c_rt_lib0clear(&___nl__im__15);
#line 461
c_rt_lib0clear(&___nl__im__18);
#line 461
//clear ___nl__bool__19;
#line 461
c_rt_lib0clear(&___nl__im__20);
#line 461
c_rt_lib0clear(&___nl__im__23);
#line 461
//clear ___nl__bool__24;
#line 461
c_rt_lib0clear(&___nl__im__25);
#line 461
c_rt_lib0clear(&___nl__im__28);
#line 461
//clear ___nl__int__31;
#line 461
c_rt_lib0clear(&___nl__im__32);
#line 461
//clear ___nl__bool__33;
#line 461
c_rt_lib0clear(&___nl__im__34);
#line 461
//clear ___nl__int__35;
#line 461
c_rt_lib0clear(&___nl__im__36);
#line 461
c_rt_lib0clear(&___nl__im__37);
#line 461
c_rt_lib0clear(&___nl__im__38);
#line 461
c_rt_lib0clear(&___nl__im__39);
#line 461
c_rt_lib0clear(&___nl__im__47);
#line 461
//clear ___nl__bool__49;
#line 461
//clear ___nl__bool__71;
#line 461
c_rt_lib0clear(&___nl__im__72);
#line 461
c_rt_lib0clear(&___nl__im__79);
#line 461
c_rt_lib0clear(&___nl__im__82);
#line 461
c_rt_lib0clear(&___nl__im__121);
#line 461
c_rt_lib0clear(&___nl__im__127);
#line 463
___nl__rec_ptr__131 = &((*___ref___rec__0).state0field);
#line 463
c_rt_lib0move(&___nl__im__130, ntokenizer0get_place(___nl__rec_ptr__131));
#line 463
___nl__rec_ptr__131 = NULL;
#line 463
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__3, ___get_global_const(1024), ___nl__im__130));
#line 463
c_rt_lib0clear(&___nl__im__130);
#line 465
c_rt_lib0move(&___nl__im__132, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 465
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__129, ___get_global_const(219), ___nl__im__2, ___get_global_const(205), ___nl__im__132));
#line 465
c_rt_lib0clear(&___nl__im__129);
#line 465
c_rt_lib0clear(&___nl__im__132);
#line 467
c_rt_lib0move(&___nl__im__133, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__128, ___nl__int__1));
#line 467
//clear ___nl__int__1;
#line 467
c_rt_lib0clear(&___nl__im__2);
#line 467
c_rt_lib0clear(&___nl__im__3);
#line 467
c_rt_lib0clear(&___nl__im__128);
#line 467
return ___nl__im__133;
return NULL;

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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__3, ___get_global_const(1024), ___nl__im__5));
#line 474
c_rt_lib0clear(&___nl__im__3);
#line 474
c_rt_lib0clear(&___nl__im__5);
#line 476
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(967)));
#line 477
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 477
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__2, ___get_global_const(219), ___nl__im__7, ___get_global_const(205), ___nl__im__8));
#line 477
c_rt_lib0clear(&___nl__im__2);
#line 477
c_rt_lib0clear(&___nl__im__7);
#line 477
c_rt_lib0clear(&___nl__im__8);
#line 477
return ___nl__im__1;
return NULL;

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
#line 482
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 482
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 482
___nl__rec_ptr__2 = NULL;
#line 482
___nl__bool__1 = !___nl__bool__1;
#line 482
if(___nl__bool__1){ goto label_13;}
#line 483
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 483
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__5));
#line 483
___nl__rec_ptr__5 = NULL;
#line 483
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__4));
#line 483
c_rt_lib0clear(&___nl__im__4);
#line 483
//clear ___nl__bool__1;
#line 483
return ___nl__im__3;
#line 484
goto label_24;
#line 484
label_13:
;
#line 485
c_rt_lib0move(&___nl__im__6,___get_global_const(1095));
#line 485
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__6));
#line 485
c_rt_lib0clear(&___nl__im__6);
#line 486
c_rt_lib0move(&___nl__im__8,___get_global_const(1095));
#line 486
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__im__8));
#line 486
c_rt_lib0clear(&___nl__im__8);
#line 486
//clear ___nl__bool__1;
#line 486
c_rt_lib0clear(&___nl__im__3);
#line 486
return ___nl__im__7;
#line 487
goto label_24;
#line 487
label_24:
;
#line 487
//clear ___nl__bool__1;
#line 487
c_rt_lib0clear(&___nl__im__3);
#line 487
c_rt_lib0clear(&___nl__im__7);
return NULL;

}

ImmT  nparser_priv0parse_variant_label(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
bool  ___nl__bool__1 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 491
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 491
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 491
___nl__rec_ptr__2 = NULL;
#line 491
___nl__bool__1 = !___nl__bool__1;
#line 491
if(___nl__bool__1){ goto label_11;}
#line 492
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 492
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_text(___nl__rec_ptr__4));
#line 492
___nl__rec_ptr__4 = NULL;
#line 492
//clear ___nl__bool__1;
#line 492
return ___nl__im__3;
#line 493
goto label_20;
#line 493
label_11:
;
#line 494
c_rt_lib0move(&___nl__im__5,___get_global_const(1095));
#line 494
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__5));
#line 494
c_rt_lib0clear(&___nl__im__5);
#line 495
c_rt_lib0move(&___nl__im__6,___get_global_const(37));
#line 495
//clear ___nl__bool__1;
#line 495
c_rt_lib0clear(&___nl__im__3);
#line 495
return ___nl__im__6;
#line 496
goto label_20;
#line 496
label_20:
;
#line 496
//clear ___nl__bool__1;
#line 496
c_rt_lib0clear(&___nl__im__3);
#line 496
c_rt_lib0clear(&___nl__im__6);
return NULL;

}

ImmT  nparser_priv0parse_variant(nparser0state_t0type* ___ref___rec__0) {
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
#line 500
c_rt_lib0move(&___nl__im__1,___get_global_const(510));
#line 500
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 500
c_rt_lib0clear(&___nl__im__1);
#line 501
c_rt_lib0move(&___nl__im__2, nparser_priv0parse_variant_label(___ref___rec__0));
#line 502
c_rt_lib0move(&___nl__im__3, nparser_priv0get_value_nop(___ref___rec__0));
#line 503
c_rt_lib0move(&___nl__im__5,___get_global_const(446));
#line 503
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 503
c_rt_lib0clear(&___nl__im__5);
#line 503
___nl__bool__4 = !___nl__bool__4;
#line 503
if(___nl__bool__4){ goto label_24;}
#line 504
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 504
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(79));
#line 504
if(___nl__bool__6){ goto label_18;}
#line 504
c_rt_lib0clear(&___nl__im__2);
#line 504
c_rt_lib0clear(&___nl__im__3);
#line 504
//clear ___nl__bool__4;
#line 504
//clear ___nl__bool__6;
#line 504
return ___nl__im__7;
#line 504
label_18:
;
#line 504
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(79)));
#line 505
c_rt_lib0move(&___nl__im__8,___get_global_const(320));
#line 505
nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 505
c_rt_lib0clear(&___nl__im__8);
#line 506
goto label_27;
#line 506
label_24:
;
#line 507
c_rt_lib0move(&___nl__im__3, nparser_priv0get_value_nop(___ref___rec__0));
#line 508
goto label_27;
#line 508
label_27:
;
#line 508
//clear ___nl__bool__4;
#line 508
//clear ___nl__bool__6;
#line 508
c_rt_lib0clear(&___nl__im__7);
#line 509
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__2, ___get_global_const(490), ___nl__im__3));
#line 509
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__10));
#line 509
c_rt_lib0clear(&___nl__im__10);
#line 509
c_rt_lib0clear(&___nl__im__2);
#line 509
c_rt_lib0clear(&___nl__im__3);
#line 509
return ___nl__im__9;
return NULL;

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
#line 513
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 513
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(490));
#line 513
c_rt_lib0clear(&___nl__im__3);
#line 513
___nl__bool__2 = !___nl__bool__2;
#line 513
if(___nl__bool__2){ goto label_9;}
#line 514
c_rt_lib0clear(&___nl__im__1);
#line 514
//clear ___nl__bool__2;
#line 514
return NULL;
#line 515
goto label_78;
#line 515
label_9:
;
#line 515
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 515
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(234));
#line 515
c_rt_lib0clear(&___nl__im__4);
#line 515
___nl__bool__2 = !___nl__bool__2;
#line 515
if(___nl__bool__2){ goto label_60;}
#line 516
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 516
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 516
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(234)));
#line 516
c_rt_lib0clear(&___nl__im__6);
#line 516
c_rt_lib0clear(&___nl__im__7);
#line 517
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(540)));
#line 517
c_rt_lib0move(&___nl__im__10,___get_global_const(558));
#line 517
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 517
c_rt_lib0clear(&___nl__im__9);
#line 517
c_rt_lib0clear(&___nl__im__10);
#line 517
if(___nl__bool__8){ goto label_31;}
#line 517
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(540)));
#line 517
c_rt_lib0move(&___nl__im__12,___get_global_const(983));
#line 517
___nl__bool__8 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 517
c_rt_lib0clear(&___nl__im__11);
#line 517
c_rt_lib0clear(&___nl__im__12);
#line 517
label_31:
;
#line 517
if(___nl__bool__8){ goto label_38;}
#line 517
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(540)));
#line 517
c_rt_lib0move(&___nl__im__14,___get_global_const(984));
#line 517
___nl__bool__8 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 517
c_rt_lib0clear(&___nl__im__13);
#line 517
c_rt_lib0clear(&___nl__im__14);
#line 517
label_38:
;
#line 517
if(___nl__bool__8){ goto label_45;}
#line 517
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(540)));
#line 517
c_rt_lib0move(&___nl__im__16,___get_global_const(985));
#line 517
___nl__bool__8 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 517
c_rt_lib0clear(&___nl__im__15);
#line 517
c_rt_lib0clear(&___nl__im__16);
#line 517
label_45:
;
#line 517
___nl__bool__8 = !___nl__bool__8;
#line 517
if(___nl__bool__8){ goto label_57;}
#line 518
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(274)));
#line 518
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__17));
#line 518
c_rt_lib0clear(&___nl__im__17);
#line 519
c_rt_lib0clear(&___nl__im__1);
#line 519
//clear ___nl__bool__2;
#line 519
c_rt_lib0clear(&___nl__im__5);
#line 519
//clear ___nl__bool__8;
#line 519
return NULL;
#line 520
goto label_57;
#line 520
label_57:
;
#line 520
//clear ___nl__bool__8;
#line 521
goto label_78;
#line 521
label_60:
;
#line 521
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 521
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(986));
#line 521
c_rt_lib0clear(&___nl__im__18);
#line 521
___nl__bool__2 = !___nl__bool__2;
#line 521
if(___nl__bool__2){ goto label_78;}
#line 522
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 522
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(219)));
#line 522
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(986)));
#line 522
c_rt_lib0clear(&___nl__im__20);
#line 522
c_rt_lib0clear(&___nl__im__21);
#line 522
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__19));
#line 522
c_rt_lib0clear(&___nl__im__19);
#line 523
c_rt_lib0clear(&___nl__im__1);
#line 523
//clear ___nl__bool__2;
#line 523
c_rt_lib0clear(&___nl__im__5);
#line 523
return NULL;
#line 524
goto label_78;
#line 524
label_78:
;
#line 524
//clear ___nl__bool__2;
#line 524
c_rt_lib0clear(&___nl__im__5);
#line 525
c_rt_lib0move(&___nl__im__22,___get_global_const(1096));
#line 525
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__22));
#line 525
c_rt_lib0clear(&___nl__im__22);
#line 525
c_rt_lib0clear(&___nl__im__1);
#line 525
return NULL;

}

nast0variant_decl_t0type nparser_priv0parse_variant_decl(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__8 = NULL;
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
#line 529
c_rt_lib0move(&___nl__im__1,___get_global_const(510));
#line 529
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 529
c_rt_lib0clear(&___nl__im__1);
#line 530
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_variant_label(___ref___rec__0));
#line 530
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 530
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(167), ___nl__im__3, ___get_global_const(219), ___nl__im__4));
#line 530
c_rt_lib0clear(&___nl__im__3);
#line 530
c_rt_lib0clear(&___nl__im__4);
#line 531
c_rt_lib0move(&___nl__im__6,___get_global_const(446));
#line 531
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 531
c_rt_lib0clear(&___nl__im__6);
#line 531
___nl__bool__5 = !___nl__bool__5;
#line 531
if(___nl__bool__5){ goto label_51;}
#line 532
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 532
c_rt_lib0move(&___nl__im__9,___get_global_const(490));
#line 532
___nl__bool__7 = ntokenizer0next_is(___nl__rec_ptr__8, ___nl__im__9);
#line 532
___nl__rec_ptr__8 = NULL;
#line 532
c_rt_lib0clear(&___nl__im__9);
#line 532
___nl__bool__7 = !___nl__bool__7;
#line 532
if(___nl__bool__7){ goto label_32;}
#line 533
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 533
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 533
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_const(479), ___nl__im__12, ___get_global_const(266), ___nl__im__13));
#line 533
c_rt_lib0clear(&___nl__im__12);
#line 533
c_rt_lib0clear(&___nl__im__13);
#line 533
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__11));
#line 533
c_rt_lib0clear(&___nl__im__11);
#line 533
c_rt_lib0copy(&___nl__im__14, ___nl__im__10);
#line 533
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(219), ___nl__im__14);
#line 533
c_rt_lib0clear(&___nl__im__10);
#line 533
c_rt_lib0clear(&___nl__im__14);
#line 534
goto label_45;
#line 534
label_32:
;
#line 535
c_rt_lib0move(&___nl__im__17, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 535
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 535
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_const(479), ___nl__im__17, ___get_global_const(266), ___nl__im__18));
#line 535
c_rt_lib0clear(&___nl__im__17);
#line 535
c_rt_lib0clear(&___nl__im__18);
#line 535
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__16));
#line 535
c_rt_lib0clear(&___nl__im__16);
#line 535
c_rt_lib0copy(&___nl__im__19, ___nl__im__15);
#line 535
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(219), ___nl__im__19);
#line 535
c_rt_lib0clear(&___nl__im__15);
#line 535
c_rt_lib0clear(&___nl__im__19);
#line 536
goto label_45;
#line 536
label_45:
;
#line 536
//clear ___nl__bool__7;
#line 537
c_rt_lib0move(&___nl__im__20,___get_global_const(320));
#line 537
nparser_priv0eat(___ref___rec__0, ___nl__im__20);
#line 537
c_rt_lib0clear(&___nl__im__20);
#line 538
goto label_51;
#line 538
label_51:
;
#line 538
//clear ___nl__bool__5;
#line 539
return ___nl__im__2;
return NULL;

}

ImmT  nparser_priv0parse_var_decl(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool * ___nl__bool_ptr__23 = NULL;
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
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
#line 543
c_rt_lib0move(&___nl__im__1,___get_global_const(490));
#line 543
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 543
c_rt_lib0clear(&___nl__im__1);
#line 544
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 544
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 544
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 544
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 544
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__3, ___get_global_const(205), ___nl__im__4, ___get_global_const(481), ___nl__im__5, ___get_global_const(219), ___nl__im__6));
#line 544
c_rt_lib0clear(&___nl__im__3);
#line 544
c_rt_lib0clear(&___nl__im__4);
#line 544
c_rt_lib0clear(&___nl__im__5);
#line 544
c_rt_lib0clear(&___nl__im__6);
#line 545
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 545
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 545
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 545
___nl__rec_ptr__8 = NULL;
#line 545
c_rt_lib0clear(&___nl__im__9);
#line 545
___nl__bool__7 = !___nl__bool__7;
#line 545
if(___nl__bool__7){ goto label_29;}
#line 546
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 546
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 546
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 546
___nl__rec_ptr__11 = NULL;
#line 546
c_rt_lib0clear(&___nl__im__12);
#line 546
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 546
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__13);
#line 546
c_rt_lib0clear(&___nl__im__10);
#line 546
c_rt_lib0clear(&___nl__im__13);
#line 547
goto label_34;
#line 547
label_29:
;
#line 548
c_rt_lib0move(&___nl__im__14,___get_global_const(1097));
#line 548
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 548
c_rt_lib0clear(&___nl__im__14);
#line 549
goto label_34;
#line 549
label_34:
;
#line 549
//clear ___nl__bool__7;
#line 550
c_rt_lib0move(&___nl__im__16,___get_global_const(510));
#line 550
___nl__bool__15 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__16);
#line 550
c_rt_lib0clear(&___nl__im__16);
#line 550
___nl__bool__15 = !___nl__bool__15;
#line 550
if(___nl__bool__15){ goto label_85;}
#line 551
c_rt_lib0move(&___nl__im__19, nparser_priv0parse_type(___ref___rec__0));
#line 551
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(79));
#line 551
if(___nl__bool__18){ goto label_49;}
#line 551
c_rt_lib0clear(&___nl__im__2);
#line 551
//clear ___nl__bool__15;
#line 551
c_rt_lib0clear(&___nl__im__17);
#line 551
//clear ___nl__bool__18;
#line 551
return ___nl__im__19;
#line 551
label_49:
;
#line 551
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(79)));
#line 552
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(205), ___nl__im__17));
#line 552
c_rt_lib0copy(&___nl__im__21, ___nl__im__20);
#line 552
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(205), ___nl__im__21);
#line 552
c_rt_lib0clear(&___nl__im__20);
#line 552
c_rt_lib0clear(&___nl__im__21);
#line 553
___nl__bool_ptr__23 = &((*___ref___rec__0).parse_types0field);
#line 553
___nl__bool__22 = (*___nl__bool_ptr__23);
#line 553
___nl__bool_ptr__23 = NULL;
#line 553
___nl__bool__22 = !___nl__bool__22;
#line 553
if(___nl__bool__22){ goto label_79;}
#line 554
c_rt_lib0move(&___nl__im__26, ptd_parser0try_value_to_ptd(___nl__im__17));
#line 554
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_const(79));
#line 554
if(___nl__bool__25){ goto label_73;}
#line 554
c_rt_lib0clear(&___nl__im__2);
#line 554
//clear ___nl__bool__15;
#line 554
c_rt_lib0clear(&___nl__im__17);
#line 554
//clear ___nl__bool__18;
#line 554
c_rt_lib0clear(&___nl__im__19);
#line 554
//clear ___nl__bool__22;
#line 554
c_rt_lib0clear(&___nl__im__24);
#line 554
//clear ___nl__bool__25;
#line 554
return ___nl__im__26;
#line 554
label_73:
;
#line 554
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(79)));
#line 555
c_rt_lib0copy(&___nl__im__27, ___nl__im__24);
#line 555
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(481), ___nl__im__27);
#line 555
c_rt_lib0clear(&___nl__im__27);
#line 556
goto label_79;
#line 556
label_79:
;
#line 556
//clear ___nl__bool__22;
#line 556
c_rt_lib0clear(&___nl__im__24);
#line 556
//clear ___nl__bool__25;
#line 556
c_rt_lib0clear(&___nl__im__26);
#line 557
goto label_85;
#line 557
label_85:
;
#line 557
//clear ___nl__bool__15;
#line 557
c_rt_lib0clear(&___nl__im__17);
#line 557
//clear ___nl__bool__18;
#line 557
c_rt_lib0clear(&___nl__im__19);
#line 558
c_rt_lib0move(&___nl__im__29,___get_global_const(997));
#line 558
___nl__bool__28 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__29);
#line 558
c_rt_lib0clear(&___nl__im__29);
#line 558
___nl__bool__28 = !___nl__bool__28;
#line 558
if(___nl__bool__28){ goto label_111;}
#line 559
c_rt_lib0move(&___nl__im__32, nparser_priv0parse_expr(___ref___rec__0));
#line 559
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_const(79));
#line 559
if(___nl__bool__31){ goto label_103;}
#line 559
c_rt_lib0clear(&___nl__im__2);
#line 559
//clear ___nl__bool__28;
#line 559
c_rt_lib0clear(&___nl__im__30);
#line 559
//clear ___nl__bool__31;
#line 559
return ___nl__im__32;
#line 559
label_103:
;
#line 559
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__32, ___get_global_const(79)));
#line 560
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__30));
#line 560
c_rt_lib0copy(&___nl__im__34, ___nl__im__33);
#line 560
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(219), ___nl__im__34);
#line 560
c_rt_lib0clear(&___nl__im__33);
#line 560
c_rt_lib0clear(&___nl__im__34);
#line 561
goto label_111;
#line 561
label_111:
;
#line 561
//clear ___nl__bool__28;
#line 561
c_rt_lib0clear(&___nl__im__30);
#line 561
//clear ___nl__bool__31;
#line 561
c_rt_lib0clear(&___nl__im__32);
#line 562
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__2));
#line 562
c_rt_lib0clear(&___nl__im__2);
#line 562
return ___nl__im__35;
return NULL;

}

nast0variable_declaration_t0type nparser_priv0parse_var_decl_sim(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 566
c_rt_lib0move(&___nl__im__1,___get_global_const(490));
#line 566
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 566
c_rt_lib0clear(&___nl__im__1);
#line 567
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 567
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 567
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 567
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 567
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__3, ___get_global_const(205), ___nl__im__4, ___get_global_const(481), ___nl__im__5, ___get_global_const(219), ___nl__im__6));
#line 567
c_rt_lib0clear(&___nl__im__3);
#line 567
c_rt_lib0clear(&___nl__im__4);
#line 567
c_rt_lib0clear(&___nl__im__5);
#line 567
c_rt_lib0clear(&___nl__im__6);
#line 568
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 568
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 568
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 568
___nl__rec_ptr__8 = NULL;
#line 568
c_rt_lib0clear(&___nl__im__9);
#line 568
___nl__bool__7 = !___nl__bool__7;
#line 568
if(___nl__bool__7){ goto label_29;}
#line 569
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 569
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 569
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 569
___nl__rec_ptr__11 = NULL;
#line 569
c_rt_lib0clear(&___nl__im__12);
#line 569
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 569
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__13);
#line 569
c_rt_lib0clear(&___nl__im__10);
#line 569
c_rt_lib0clear(&___nl__im__13);
#line 570
goto label_34;
#line 570
label_29:
;
#line 571
c_rt_lib0move(&___nl__im__14,___get_global_const(1097));
#line 571
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 571
c_rt_lib0clear(&___nl__im__14);
#line 572
goto label_34;
#line 572
label_34:
;
#line 572
//clear ___nl__bool__7;
#line 573
return ___nl__im__2;
return NULL;

}

nast0variable_declaration_t0type nparser_priv0parse_ref_var_decl_sim(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 577
c_rt_lib0move(&___nl__im__1,___get_global_const(40));
#line 577
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 577
c_rt_lib0clear(&___nl__im__1);
#line 578
c_rt_lib0move(&___nl__im__3,___get_global_const(37));
#line 578
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 578
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 578
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 578
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__3, ___get_global_const(205), ___nl__im__4, ___get_global_const(481), ___nl__im__5, ___get_global_const(219), ___nl__im__6));
#line 578
c_rt_lib0clear(&___nl__im__3);
#line 578
c_rt_lib0clear(&___nl__im__4);
#line 578
c_rt_lib0clear(&___nl__im__5);
#line 578
c_rt_lib0clear(&___nl__im__6);
#line 579
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 579
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 579
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 579
___nl__rec_ptr__8 = NULL;
#line 579
c_rt_lib0clear(&___nl__im__9);
#line 579
___nl__bool__7 = !___nl__bool__7;
#line 579
if(___nl__bool__7){ goto label_29;}
#line 580
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 580
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(1076)));
#line 580
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 580
___nl__rec_ptr__11 = NULL;
#line 580
c_rt_lib0clear(&___nl__im__12);
#line 580
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 580
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(167), ___nl__im__13);
#line 580
c_rt_lib0clear(&___nl__im__10);
#line 580
c_rt_lib0clear(&___nl__im__13);
#line 581
goto label_34;
#line 581
label_29:
;
#line 582
c_rt_lib0move(&___nl__im__14,___get_global_const(1097));
#line 582
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 582
c_rt_lib0clear(&___nl__im__14);
#line 583
goto label_34;
#line 583
label_34:
;
#line 583
//clear ___nl__bool__7;
#line 584
return ___nl__im__2;
return NULL;

}

ImmT  nparser_priv0parse_cond(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 588
c_rt_lib0move(&___nl__im__1,___get_global_const(446));
#line 588
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 588
c_rt_lib0clear(&___nl__im__1);
#line 589
c_rt_lib0move(&___nl__im__4, nparser_priv0parse_expr(___ref___rec__0));
#line 589
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(79));
#line 589
if(___nl__bool__3){ goto label_9;}
#line 589
c_rt_lib0clear(&___nl__im__2);
#line 589
//clear ___nl__bool__3;
#line 589
return ___nl__im__4;
#line 589
label_9:
;
#line 589
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(79)));
#line 590
c_rt_lib0move(&___nl__im__5,___get_global_const(320));
#line 590
nparser_priv0eat(___ref___rec__0, ___nl__im__5);
#line 590
c_rt_lib0clear(&___nl__im__5);
#line 591
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__2));
#line 591
c_rt_lib0clear(&___nl__im__2);
#line 591
//clear ___nl__bool__3;
#line 591
c_rt_lib0clear(&___nl__im__4);
#line 591
return ___nl__im__6;
return NULL;

}

nparser0try_cmd_t0type nparser_priv0parse_block(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
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
ntokenizer0state_t0type* ___nl__rec_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 595
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 595
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 595
___nl__rec_ptr__2 = NULL;
#line 596
c_rt_lib0move(&___nl__im__3,___get_global_const(304));
#line 596
nparser_priv0eat(___ref___rec__0, ___nl__im__3);
#line 596
c_rt_lib0clear(&___nl__im__3);
#line 597
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 598
label_7:
;
#line 598
c_rt_lib0move(&___nl__im__6,___get_global_const(305));
#line 598
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 598
c_rt_lib0clear(&___nl__im__6);
#line 598
___nl__bool__5 = !___nl__bool__5;
#line 598
___nl__bool__5 = !___nl__bool__5;
#line 598
if(___nl__bool__5){ goto label_39;}
#line 599
c_rt_lib0move(&___nl__im__8,___get_global_const(435));
#line 599
___nl__bool__7 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__8);
#line 599
c_rt_lib0clear(&___nl__im__8);
#line 599
___nl__bool__7 = !___nl__bool__7;
#line 599
if(___nl__bool__7){ goto label_21;}
#line 599
goto label_7;
#line 599
goto label_21;
#line 599
label_21:
;
#line 599
//clear ___nl__bool__7;
#line 600
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_cmd(___ref___rec__0));
#line 600
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(79));
#line 600
if(___nl__bool__10){ goto label_32;}
#line 600
c_rt_lib0clear(&___nl__im__1);
#line 600
c_rt_lib0clear(&___nl__im__4);
#line 600
//clear ___nl__bool__5;
#line 600
c_rt_lib0clear(&___nl__im__9);
#line 600
//clear ___nl__bool__10;
#line 600
return ___nl__im__11;
#line 600
label_32:
;
#line 600
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(79)));
#line 601
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__9));
#line 601
c_rt_lib0clear(&___nl__im__9);
#line 601
//clear ___nl__bool__10;
#line 601
c_rt_lib0clear(&___nl__im__11);
#line 602
goto label_7;
#line 602
label_39:
;
#line 603
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 603
c_rt_lib0move(&___nl__im__12, ntokenizer0get_place_ws(___nl__rec_ptr__13));
#line 603
___nl__rec_ptr__13 = NULL;
#line 604
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__1, ___get_global_const(1024), ___nl__im__12));
#line 605
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(965), ___nl__im__4));
#line 605
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__14, ___get_global_const(227), ___nl__im__17));
#line 605
c_rt_lib0clear(&___nl__im__17);
#line 605
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__16));
#line 605
c_rt_lib0clear(&___nl__im__16);
#line 605
c_rt_lib0clear(&___nl__im__1);
#line 605
c_rt_lib0clear(&___nl__im__4);
#line 605
//clear ___nl__bool__5;
#line 605
c_rt_lib0clear(&___nl__im__9);
#line 605
//clear ___nl__bool__10;
#line 605
c_rt_lib0clear(&___nl__im__11);
#line 605
c_rt_lib0clear(&___nl__im__12);
#line 605
c_rt_lib0clear(&___nl__im__14);
#line 605
return ___nl__im__15;
return NULL;

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
#line 609
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 609
c_rt_lib0move(&___nl__im__3,___get_global_const(490));
#line 609
___nl__bool__1 = ntokenizer0next_is(___nl__rec_ptr__2, ___nl__im__3);
#line 609
___nl__rec_ptr__2 = NULL;
#line 609
c_rt_lib0clear(&___nl__im__3);
#line 609
___nl__bool__1 = !___nl__bool__1;
#line 609
if(___nl__bool__1){ goto label_25;}
#line 610
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_var_decl(___ref___rec__0));
#line 610
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(79));
#line 610
if(___nl__bool__5){ goto label_14;}
#line 610
//clear ___nl__bool__1;
#line 610
c_rt_lib0clear(&___nl__im__4);
#line 610
//clear ___nl__bool__5;
#line 610
return ___nl__im__6;
#line 610
label_14:
;
#line 610
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(79)));
#line 611
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(707), ___nl__im__4));
#line 611
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__8));
#line 611
c_rt_lib0clear(&___nl__im__8);
#line 611
//clear ___nl__bool__1;
#line 611
c_rt_lib0clear(&___nl__im__4);
#line 611
//clear ___nl__bool__5;
#line 611
c_rt_lib0clear(&___nl__im__6);
#line 611
return ___nl__im__7;
#line 612
goto label_100;
#line 612
label_25:
;
#line 613
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_expr(___ref___rec__0));
#line 613
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(79));
#line 613
if(___nl__bool__10){ goto label_37;}
#line 613
//clear ___nl__bool__1;
#line 613
c_rt_lib0clear(&___nl__im__4);
#line 613
//clear ___nl__bool__5;
#line 613
c_rt_lib0clear(&___nl__im__6);
#line 613
c_rt_lib0clear(&___nl__im__7);
#line 613
c_rt_lib0clear(&___nl__im__9);
#line 613
//clear ___nl__bool__10;
#line 613
return ___nl__im__11;
#line 613
label_37:
;
#line 613
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(79)));
#line 614
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 614
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(234));
#line 614
c_rt_lib0clear(&___nl__im__14);
#line 614
___nl__bool__13 = !___nl__bool__12;
#line 614
if(___nl__bool__13){ goto label_55;}
#line 614
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 614
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 614
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(234)));
#line 614
c_rt_lib0clear(&___nl__im__17);
#line 614
c_rt_lib0clear(&___nl__im__18);
#line 614
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(540)));
#line 614
c_rt_lib0clear(&___nl__im__16);
#line 614
c_rt_lib0move(&___nl__im__19,___get_global_const(997));
#line 614
___nl__bool__12 = c_rt_lib0eq(___nl__im__15, ___nl__im__19);
#line 614
c_rt_lib0clear(&___nl__im__15);
#line 614
c_rt_lib0clear(&___nl__im__19);
#line 614
label_55:
;
#line 614
//clear ___nl__bool__13;
#line 614
___nl__bool__12 = !___nl__bool__12;
#line 614
if(___nl__bool__12){ goto label_79;}
#line 615
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 615
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(219)));
#line 615
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(234)));
#line 615
c_rt_lib0clear(&___nl__im__23);
#line 615
c_rt_lib0clear(&___nl__im__24);
#line 615
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(981), ___nl__im__22));
#line 615
c_rt_lib0clear(&___nl__im__22);
#line 615
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__21));
#line 615
c_rt_lib0clear(&___nl__im__21);
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
c_rt_lib0clear(&___nl__im__11);
#line 615
//clear ___nl__bool__12;
#line 615
return ___nl__im__20;
#line 616
goto label_95;
#line 616
label_79:
;
#line 617
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(982), ___nl__im__9));
#line 617
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__26));
#line 617
c_rt_lib0clear(&___nl__im__26);
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
c_rt_lib0clear(&___nl__im__20);
#line 617
return ___nl__im__25;
#line 618
goto label_95;
#line 618
label_95:
;
#line 618
//clear ___nl__bool__12;
#line 618
c_rt_lib0clear(&___nl__im__20);
#line 618
c_rt_lib0clear(&___nl__im__25);
#line 619
goto label_100;
#line 619
label_100:
;
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
return NULL;

}

nast0debug_t0type nparser_priv0get_debug_from_begin(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__5 = NULL;
#line 623
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 623
c_rt_lib0move(&___nl__im__2, ntokenizer0get_place(___nl__rec_ptr__3));
#line 623
___nl__rec_ptr__3 = NULL;
#line 623
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 623
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 623
___nl__rec_ptr__5 = NULL;
#line 623
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__2, ___get_global_const(1024), ___nl__im__4));
#line 623
c_rt_lib0clear(&___nl__im__2);
#line 623
c_rt_lib0clear(&___nl__im__4);
#line 623
return ___nl__im__1;
return NULL;

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
bool  ___nl__bool__43 = false;
ImmT  ___nl__im__44 = NULL;
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
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
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
bool  ___nl__bool__71 = false;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
bool  ___nl__bool__87 = false;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
bool  ___nl__bool__90 = false;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
bool  ___nl__bool__97 = false;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
bool  ___nl__bool__100 = false;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
bool  ___nl__bool__106 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
bool  ___nl__bool__127 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__128 = NULL;
ImmT  ___nl__im__129 = NULL;
bool  ___nl__bool__130 = false;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
bool  ___nl__bool__136 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__137 = NULL;
ImmT  ___nl__im__138 = NULL;
bool  ___nl__bool__139 = false;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
bool  ___nl__bool__143 = false;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
bool  ___nl__bool__149 = false;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__155 = NULL;
bool  ___nl__bool__156 = false;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
INT  ___nl__int__159 = 0;
INT  ___nl__int__160 = 0;
INT  ___nl__int__161 = 0;
bool  ___nl__bool__162 = false;
INT  ___nl__int__163 = 0;
ImmT  ___nl__im__164 = NULL;
bool  ___nl__bool__165 = false;
bool  ___nl__bool__166 = false;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
bool  ___nl__bool__169 = false;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
bool  ___nl__bool__174 = false;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__180 = NULL;
bool  ___nl__bool__181 = false;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__187 = NULL;
ImmT  ___nl__im__188 = NULL;
bool  ___nl__bool__189 = false;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__string__193 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__194 = NULL;
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
bool  ___nl__bool__197 = false;
ImmT  ___nl__im__198 = NULL;
bool  ___nl__bool__199 = false;
ImmT  ___nl__im__200 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
bool  ___nl__bool__204 = false;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
bool  ___nl__bool__211 = false;
ImmT  ___nl__im__212 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__213 = NULL;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
bool  ___nl__bool__217 = false;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
bool  ___nl__bool__220 = false;
ImmT  ___nl__im__221 = NULL;
bool  ___nl__bool__222 = false;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
bool  ___nl__bool__228 = false;
ImmT  ___nl__im__229 = NULL;
bool  ___nl__bool__230 = false;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
bool  ___nl__bool__235 = false;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
bool  ___nl__bool__240 = false;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
bool  ___nl__bool__245 = false;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__im__249 = NULL;
bool  ___nl__bool__250 = false;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
bool  ___nl__bool__255 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__256 = NULL;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
ImmT  ___nl__im__261 = NULL;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
bool  ___nl__bool__267 = false;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
ImmT  ___nl__im__271 = NULL;
bool  ___nl__bool__272 = false;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
bool  ___nl__bool__276 = false;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
bool  ___nl__bool__280 = false;
ImmT  ___nl__im__281 = NULL;
bool  ___nl__bool__282 = false;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ImmT  ___nl__im__286 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__287 = NULL;
ImmT  ___nl__im__288 = NULL;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
#line 627
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 627
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 627
___nl__rec_ptr__2 = NULL;
#line 629
c_rt_lib0move(&___nl__im__5,___get_global_const(954));
#line 629
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 629
c_rt_lib0clear(&___nl__im__5);
#line 629
___nl__bool__4 = !___nl__bool__4;
#line 629
if(___nl__bool__4){ goto label_177;}
#line 630
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 631
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_cond(___ref___rec__0));
#line 631
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(79));
#line 631
if(___nl__bool__7){ goto label_18;}
#line 631
c_rt_lib0clear(&___nl__im__1);
#line 631
c_rt_lib0clear(&___nl__im__3);
#line 631
//clear ___nl__bool__4;
#line 631
c_rt_lib0clear(&___nl__im__6);
#line 631
//clear ___nl__bool__7;
#line 631
return ___nl__im__8;
#line 631
label_18:
;
#line 631
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(79)));
#line 631
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(968), ___nl__im__9);
#line 632
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_block(___ref___rec__0));
#line 632
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(79));
#line 632
if(___nl__bool__10){ goto label_33;}
#line 632
c_rt_lib0clear(&___nl__im__1);
#line 632
c_rt_lib0clear(&___nl__im__3);
#line 632
//clear ___nl__bool__4;
#line 632
c_rt_lib0clear(&___nl__im__6);
#line 632
//clear ___nl__bool__7;
#line 632
c_rt_lib0clear(&___nl__im__8);
#line 632
c_rt_lib0clear(&___nl__im__9);
#line 632
//clear ___nl__bool__10;
#line 632
return ___nl__im__11;
#line 632
label_33:
;
#line 632
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(79)));
#line 632
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(954), ___nl__im__12);
#line 633
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 634
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 634
c_rt_lib0copy(&___nl__im__15, ___nl__im__14);
#line 634
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(969), ___nl__im__15);
#line 634
c_rt_lib0clear(&___nl__im__14);
#line 634
c_rt_lib0clear(&___nl__im__15);
#line 635
label_42:
;
#line 635
c_rt_lib0move(&___nl__im__17,___get_global_const(969));
#line 635
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 635
c_rt_lib0clear(&___nl__im__17);
#line 635
___nl__bool__16 = !___nl__bool__16;
#line 635
if(___nl__bool__16){ goto label_119;}
#line 636
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 637
___nl__rec_ptr__20 = &((*___ref___rec__0).state0field);
#line 637
c_rt_lib0move(&___nl__im__19, ntokenizer0get_place(___nl__rec_ptr__20));
#line 637
___nl__rec_ptr__20 = NULL;
#line 638
c_rt_lib0move(&___nl__im__22, nparser_priv0parse_cond(___ref___rec__0));
#line 638
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__22, ___get_global_const(79));
#line 638
if(___nl__bool__21){ goto label_71;}
#line 638
c_rt_lib0clear(&___nl__im__1);
#line 638
c_rt_lib0clear(&___nl__im__3);
#line 638
//clear ___nl__bool__4;
#line 638
c_rt_lib0clear(&___nl__im__6);
#line 638
//clear ___nl__bool__7;
#line 638
c_rt_lib0clear(&___nl__im__8);
#line 638
c_rt_lib0clear(&___nl__im__9);
#line 638
//clear ___nl__bool__10;
#line 638
c_rt_lib0clear(&___nl__im__11);
#line 638
c_rt_lib0clear(&___nl__im__12);
#line 638
c_rt_lib0clear(&___nl__im__13);
#line 638
//clear ___nl__bool__16;
#line 638
c_rt_lib0clear(&___nl__im__18);
#line 638
c_rt_lib0clear(&___nl__im__19);
#line 638
//clear ___nl__bool__21;
#line 638
return ___nl__im__22;
#line 638
label_71:
;
#line 638
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__22, ___get_global_const(79)));
#line 638
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(968), ___nl__im__23);
#line 639
___nl__rec_ptr__25 = &((*___ref___rec__0).state0field);
#line 639
c_rt_lib0move(&___nl__im__24, ntokenizer0get_place_ws(___nl__rec_ptr__25));
#line 639
___nl__rec_ptr__25 = NULL;
#line 640
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__19, ___get_global_const(1024), ___nl__im__24));
#line 640
c_rt_lib0copy(&___nl__im__27, ___nl__im__26);
#line 640
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(221), ___nl__im__27);
#line 640
c_rt_lib0clear(&___nl__im__26);
#line 640
c_rt_lib0clear(&___nl__im__27);
#line 641
c_rt_lib0move(&___nl__im__29, nparser_priv0parse_block(___ref___rec__0));
#line 641
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__29, ___get_global_const(79));
#line 641
if(___nl__bool__28){ goto label_105;}
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
c_rt_lib0clear(&___nl__im__22);
#line 641
c_rt_lib0clear(&___nl__im__23);
#line 641
c_rt_lib0clear(&___nl__im__24);
#line 641
//clear ___nl__bool__28;
#line 641
return ___nl__im__29;
#line 641
label_105:
;
#line 641
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(79)));
#line 641
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_const(227), ___nl__im__30);
#line 642
c_rt_lib0delete(array0push(&___nl__im__13, ___nl__im__18));
#line 642
c_rt_lib0clear(&___nl__im__18);
#line 642
c_rt_lib0clear(&___nl__im__19);
#line 642
//clear ___nl__bool__21;
#line 642
c_rt_lib0clear(&___nl__im__22);
#line 642
c_rt_lib0clear(&___nl__im__23);
#line 642
c_rt_lib0clear(&___nl__im__24);
#line 642
//clear ___nl__bool__28;
#line 642
c_rt_lib0clear(&___nl__im__29);
#line 642
c_rt_lib0clear(&___nl__im__30);
#line 643
goto label_42;
#line 643
label_119:
;
#line 644
c_rt_lib0copy(&___nl__im__31, ___nl__im__13);
#line 644
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(969), ___nl__im__31);
#line 644
c_rt_lib0clear(&___nl__im__31);
#line 645
c_rt_lib0move(&___nl__im__33,___get_global_const(970));
#line 645
___nl__bool__32 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__33);
#line 645
c_rt_lib0clear(&___nl__im__33);
#line 645
___nl__bool__32 = !___nl__bool__32;
#line 645
if(___nl__bool__32){ goto label_159;}
#line 646
c_rt_lib0move(&___nl__im__35, nparser_priv0parse_block(___ref___rec__0));
#line 646
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(79));
#line 646
if(___nl__bool__34){ goto label_155;}
#line 646
c_rt_lib0clear(&___nl__im__1);
#line 646
c_rt_lib0clear(&___nl__im__3);
#line 646
//clear ___nl__bool__4;
#line 646
c_rt_lib0clear(&___nl__im__6);
#line 646
//clear ___nl__bool__7;
#line 646
c_rt_lib0clear(&___nl__im__8);
#line 646
c_rt_lib0clear(&___nl__im__9);
#line 646
//clear ___nl__bool__10;
#line 646
c_rt_lib0clear(&___nl__im__11);
#line 646
c_rt_lib0clear(&___nl__im__12);
#line 646
c_rt_lib0clear(&___nl__im__13);
#line 646
//clear ___nl__bool__16;
#line 646
c_rt_lib0clear(&___nl__im__18);
#line 646
c_rt_lib0clear(&___nl__im__19);
#line 646
//clear ___nl__bool__21;
#line 646
c_rt_lib0clear(&___nl__im__22);
#line 646
c_rt_lib0clear(&___nl__im__23);
#line 646
c_rt_lib0clear(&___nl__im__24);
#line 646
//clear ___nl__bool__28;
#line 646
c_rt_lib0clear(&___nl__im__29);
#line 646
c_rt_lib0clear(&___nl__im__30);
#line 646
//clear ___nl__bool__32;
#line 646
//clear ___nl__bool__34;
#line 646
return ___nl__im__35;
#line 646
label_155:
;
#line 646
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(79)));
#line 646
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(970), ___nl__im__36);
#line 647
goto label_170;
#line 647
label_159:
;
#line 648
c_rt_lib0move(&___nl__im__38, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 648
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_const(967)));
#line 648
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__38, ___get_global_const(227), ___nl__im__39));
#line 648
c_rt_lib0clear(&___nl__im__38);
#line 648
c_rt_lib0clear(&___nl__im__39);
#line 648
c_rt_lib0copy(&___nl__im__40, ___nl__im__37);
#line 648
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_const(970), ___nl__im__40);
#line 648
c_rt_lib0clear(&___nl__im__37);
#line 648
c_rt_lib0clear(&___nl__im__40);
#line 649
goto label_170;
#line 649
label_170:
;
#line 649
//clear ___nl__bool__32;
#line 649
//clear ___nl__bool__34;
#line 649
c_rt_lib0clear(&___nl__im__35);
#line 649
c_rt_lib0clear(&___nl__im__36);
#line 650
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(954), ___nl__im__6));
#line 651
goto label_2047;
#line 651
label_177:
;
#line 651
c_rt_lib0move(&___nl__im__41,___get_global_const(956));
#line 651
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__41);
#line 651
c_rt_lib0clear(&___nl__im__41);
#line 651
___nl__bool__4 = !___nl__bool__4;
#line 651
if(___nl__bool__4){ goto label_259;}
#line 652
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(0));
#line 653
___nl__bool__43 = false;
#line 653
c_rt_lib0move(&___nl__im__44, c_rt_lib0bool_to_nl_native(___nl__bool__43));
#line 653
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(1036), ___nl__im__44);
#line 653
//clear ___nl__bool__43;
#line 653
c_rt_lib0clear(&___nl__im__44);
#line 654
c_rt_lib0move(&___nl__im__45, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 654
c_rt_lib0copy(&___nl__im__46, ___nl__im__45);
#line 654
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(362), ___nl__im__46);
#line 654
c_rt_lib0clear(&___nl__im__45);
#line 654
c_rt_lib0clear(&___nl__im__46);
#line 655
c_rt_lib0move(&___nl__im__48, nparser_priv0parse_cond(___ref___rec__0));
#line 655
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_const(79));
#line 655
if(___nl__bool__47){ goto label_221;}
#line 655
c_rt_lib0clear(&___nl__im__1);
#line 655
c_rt_lib0clear(&___nl__im__3);
#line 655
//clear ___nl__bool__4;
#line 655
c_rt_lib0clear(&___nl__im__6);
#line 655
//clear ___nl__bool__7;
#line 655
c_rt_lib0clear(&___nl__im__8);
#line 655
c_rt_lib0clear(&___nl__im__9);
#line 655
//clear ___nl__bool__10;
#line 655
c_rt_lib0clear(&___nl__im__11);
#line 655
c_rt_lib0clear(&___nl__im__12);
#line 655
c_rt_lib0clear(&___nl__im__13);
#line 655
//clear ___nl__bool__16;
#line 655
c_rt_lib0clear(&___nl__im__18);
#line 655
c_rt_lib0clear(&___nl__im__19);
#line 655
//clear ___nl__bool__21;
#line 655
c_rt_lib0clear(&___nl__im__22);
#line 655
c_rt_lib0clear(&___nl__im__23);
#line 655
c_rt_lib0clear(&___nl__im__24);
#line 655
//clear ___nl__bool__28;
#line 655
c_rt_lib0clear(&___nl__im__29);
#line 655
c_rt_lib0clear(&___nl__im__30);
#line 655
c_rt_lib0clear(&___nl__im__42);
#line 655
//clear ___nl__bool__47;
#line 655
return ___nl__im__48;
#line 655
label_221:
;
#line 655
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(79)));
#line 655
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(38), ___nl__im__49);
#line 656
c_rt_lib0move(&___nl__im__51, nparser_priv0parse_block(___ref___rec__0));
#line 656
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_const(79));
#line 656
if(___nl__bool__50){ goto label_254;}
#line 656
c_rt_lib0clear(&___nl__im__1);
#line 656
c_rt_lib0clear(&___nl__im__3);
#line 656
//clear ___nl__bool__4;
#line 656
c_rt_lib0clear(&___nl__im__6);
#line 656
//clear ___nl__bool__7;
#line 656
c_rt_lib0clear(&___nl__im__8);
#line 656
c_rt_lib0clear(&___nl__im__9);
#line 656
//clear ___nl__bool__10;
#line 656
c_rt_lib0clear(&___nl__im__11);
#line 656
c_rt_lib0clear(&___nl__im__12);
#line 656
c_rt_lib0clear(&___nl__im__13);
#line 656
//clear ___nl__bool__16;
#line 656
c_rt_lib0clear(&___nl__im__18);
#line 656
c_rt_lib0clear(&___nl__im__19);
#line 656
//clear ___nl__bool__21;
#line 656
c_rt_lib0clear(&___nl__im__22);
#line 656
c_rt_lib0clear(&___nl__im__23);
#line 656
c_rt_lib0clear(&___nl__im__24);
#line 656
//clear ___nl__bool__28;
#line 656
c_rt_lib0clear(&___nl__im__29);
#line 656
c_rt_lib0clear(&___nl__im__30);
#line 656
c_rt_lib0clear(&___nl__im__42);
#line 656
//clear ___nl__bool__47;
#line 656
c_rt_lib0clear(&___nl__im__48);
#line 656
c_rt_lib0clear(&___nl__im__49);
#line 656
//clear ___nl__bool__50;
#line 656
return ___nl__im__51;
#line 656
label_254:
;
#line 656
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(79)));
#line 656
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_const(227), ___nl__im__52);
#line 657
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(956), ___nl__im__42));
#line 658
goto label_2047;
#line 658
label_259:
;
#line 658
c_rt_lib0move(&___nl__im__53,___get_global_const(958));
#line 658
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__53);
#line 658
c_rt_lib0clear(&___nl__im__53);
#line 658
___nl__bool__4 = !___nl__bool__4;
#line 658
if(___nl__bool__4){ goto label_355;}
#line 659
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 660
___nl__bool__55 = false;
#line 660
c_rt_lib0move(&___nl__im__56, c_rt_lib0bool_to_nl_native(___nl__bool__55));
#line 660
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(1036), ___nl__im__56);
#line 660
//clear ___nl__bool__55;
#line 660
c_rt_lib0clear(&___nl__im__56);
#line 661
c_rt_lib0move(&___nl__im__57, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 661
c_rt_lib0copy(&___nl__im__58, ___nl__im__57);
#line 661
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(362), ___nl__im__58);
#line 661
c_rt_lib0clear(&___nl__im__57);
#line 661
c_rt_lib0clear(&___nl__im__58);
#line 662
c_rt_lib0move(&___nl__im__60, nparser_priv0parse_cond(___ref___rec__0));
#line 662
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__60, ___get_global_const(79));
#line 662
if(___nl__bool__59){ goto label_310;}
#line 662
c_rt_lib0clear(&___nl__im__1);
#line 662
c_rt_lib0clear(&___nl__im__3);
#line 662
//clear ___nl__bool__4;
#line 662
c_rt_lib0clear(&___nl__im__6);
#line 662
//clear ___nl__bool__7;
#line 662
c_rt_lib0clear(&___nl__im__8);
#line 662
c_rt_lib0clear(&___nl__im__9);
#line 662
//clear ___nl__bool__10;
#line 662
c_rt_lib0clear(&___nl__im__11);
#line 662
c_rt_lib0clear(&___nl__im__12);
#line 662
c_rt_lib0clear(&___nl__im__13);
#line 662
//clear ___nl__bool__16;
#line 662
c_rt_lib0clear(&___nl__im__18);
#line 662
c_rt_lib0clear(&___nl__im__19);
#line 662
//clear ___nl__bool__21;
#line 662
c_rt_lib0clear(&___nl__im__22);
#line 662
c_rt_lib0clear(&___nl__im__23);
#line 662
c_rt_lib0clear(&___nl__im__24);
#line 662
//clear ___nl__bool__28;
#line 662
c_rt_lib0clear(&___nl__im__29);
#line 662
c_rt_lib0clear(&___nl__im__30);
#line 662
c_rt_lib0clear(&___nl__im__42);
#line 662
//clear ___nl__bool__47;
#line 662
c_rt_lib0clear(&___nl__im__48);
#line 662
c_rt_lib0clear(&___nl__im__49);
#line 662
//clear ___nl__bool__50;
#line 662
c_rt_lib0clear(&___nl__im__51);
#line 662
c_rt_lib0clear(&___nl__im__52);
#line 662
c_rt_lib0clear(&___nl__im__54);
#line 662
//clear ___nl__bool__59;
#line 662
return ___nl__im__60;
#line 662
label_310:
;
#line 662
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__60, ___get_global_const(79)));
#line 662
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(973), ___nl__im__61);
#line 663
c_rt_lib0move(&___nl__im__63, nparser_priv0parse_block(___ref___rec__0));
#line 663
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_const(79));
#line 663
if(___nl__bool__62){ goto label_350;}
#line 663
c_rt_lib0clear(&___nl__im__1);
#line 663
c_rt_lib0clear(&___nl__im__3);
#line 663
//clear ___nl__bool__4;
#line 663
c_rt_lib0clear(&___nl__im__6);
#line 663
//clear ___nl__bool__7;
#line 663
c_rt_lib0clear(&___nl__im__8);
#line 663
c_rt_lib0clear(&___nl__im__9);
#line 663
//clear ___nl__bool__10;
#line 663
c_rt_lib0clear(&___nl__im__11);
#line 663
c_rt_lib0clear(&___nl__im__12);
#line 663
c_rt_lib0clear(&___nl__im__13);
#line 663
//clear ___nl__bool__16;
#line 663
c_rt_lib0clear(&___nl__im__18);
#line 663
c_rt_lib0clear(&___nl__im__19);
#line 663
//clear ___nl__bool__21;
#line 663
c_rt_lib0clear(&___nl__im__22);
#line 663
c_rt_lib0clear(&___nl__im__23);
#line 663
c_rt_lib0clear(&___nl__im__24);
#line 663
//clear ___nl__bool__28;
#line 663
c_rt_lib0clear(&___nl__im__29);
#line 663
c_rt_lib0clear(&___nl__im__30);
#line 663
c_rt_lib0clear(&___nl__im__42);
#line 663
//clear ___nl__bool__47;
#line 663
c_rt_lib0clear(&___nl__im__48);
#line 663
c_rt_lib0clear(&___nl__im__49);
#line 663
//clear ___nl__bool__50;
#line 663
c_rt_lib0clear(&___nl__im__51);
#line 663
c_rt_lib0clear(&___nl__im__52);
#line 663
c_rt_lib0clear(&___nl__im__54);
#line 663
//clear ___nl__bool__59;
#line 663
c_rt_lib0clear(&___nl__im__60);
#line 663
c_rt_lib0clear(&___nl__im__61);
#line 663
//clear ___nl__bool__62;
#line 663
return ___nl__im__63;
#line 663
label_350:
;
#line 663
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__63, ___get_global_const(79)));
#line 663
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_const(227), ___nl__im__64);
#line 664
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(958), ___nl__im__54));
#line 665
goto label_2047;
#line 665
label_355:
;
#line 665
c_rt_lib0move(&___nl__im__65,___get_global_const(159));
#line 665
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__65);
#line 665
c_rt_lib0clear(&___nl__im__65);
#line 665
___nl__bool__4 = !___nl__bool__4;
#line 665
if(___nl__bool__4){ goto label_406;}
#line 666
c_rt_lib0move(&___nl__im__68, nparser_priv0parse_block(___ref___rec__0));
#line 666
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__68, ___get_global_const(79));
#line 666
if(___nl__bool__67){ goto label_402;}
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
c_rt_lib0clear(&___nl__im__63);
#line 666
c_rt_lib0clear(&___nl__im__64);
#line 666
c_rt_lib0clear(&___nl__im__66);
#line 666
//clear ___nl__bool__67;
#line 666
return ___nl__im__68;
#line 666
label_402:
;
#line 666
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__68, ___get_global_const(79)));
#line 667
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(159), ___nl__im__66));
#line 668
goto label_2047;
#line 668
label_406:
;
#line 668
c_rt_lib0move(&___nl__im__69,___get_global_const(957));
#line 668
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__69);
#line 668
c_rt_lib0clear(&___nl__im__69);
#line 668
___nl__bool__4 = !___nl__bool__4;
#line 668
if(___nl__bool__4){ goto label_557;}
#line 669
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(0));
#line 670
___nl__bool__71 = false;
#line 670
c_rt_lib0move(&___nl__im__72, c_rt_lib0bool_to_nl_native(___nl__bool__71));
#line 670
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(1036), ___nl__im__72);
#line 670
//clear ___nl__bool__71;
#line 670
c_rt_lib0clear(&___nl__im__72);
#line 671
c_rt_lib0move(&___nl__im__73, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 671
c_rt_lib0copy(&___nl__im__74, ___nl__im__73);
#line 671
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(397), ___nl__im__74);
#line 671
c_rt_lib0clear(&___nl__im__73);
#line 671
c_rt_lib0clear(&___nl__im__74);
#line 672
c_rt_lib0move(&___nl__im__75,___get_global_const(312));
#line 672
nparser_priv0eat(___ref___rec__0, ___nl__im__75);
#line 672
c_rt_lib0clear(&___nl__im__75);
#line 673
___nl__rec_ptr__77 = &((*___ref___rec__0).state0field);
#line 673
c_rt_lib0move(&___nl__im__78,___get_global_const(490));
#line 673
___nl__bool__76 = ntokenizer0next_is(___nl__rec_ptr__77, ___nl__im__78);
#line 673
___nl__rec_ptr__77 = NULL;
#line 673
c_rt_lib0clear(&___nl__im__78);
#line 673
___nl__bool__76 = !___nl__bool__76;
#line 673
if(___nl__bool__76){ goto label_444;}
#line 674
c_rt_lib0move(&___nl__im__79, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 674
c_rt_lib0copy(&___nl__im__80, ___nl__im__79);
#line 674
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(224), ___nl__im__80);
#line 674
c_rt_lib0clear(&___nl__im__79);
#line 674
c_rt_lib0clear(&___nl__im__80);
#line 675
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 675
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 675
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(972), ___nl__im__82);
#line 675
c_rt_lib0clear(&___nl__im__81);
#line 675
c_rt_lib0clear(&___nl__im__82);
#line 676
goto label_456;
#line 676
label_444:
;
#line 677
c_rt_lib0move(&___nl__im__83, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 677
c_rt_lib0copy(&___nl__im__84, ___nl__im__83);
#line 677
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(224), ___nl__im__84);
#line 677
c_rt_lib0clear(&___nl__im__83);
#line 677
c_rt_lib0clear(&___nl__im__84);
#line 678
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 678
c_rt_lib0copy(&___nl__im__86, ___nl__im__85);
#line 678
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(972), ___nl__im__86);
#line 678
c_rt_lib0clear(&___nl__im__85);
#line 678
c_rt_lib0clear(&___nl__im__86);
#line 679
goto label_456;
#line 679
label_456:
;
#line 679
//clear ___nl__bool__76;
#line 680
c_rt_lib0move(&___nl__im__88, nparser_priv0parse_cond(___ref___rec__0));
#line 680
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__88, ___get_global_const(79));
#line 680
if(___nl__bool__87){ goto label_502;}
#line 680
c_rt_lib0clear(&___nl__im__1);
#line 680
c_rt_lib0clear(&___nl__im__3);
#line 680
//clear ___nl__bool__4;
#line 680
c_rt_lib0clear(&___nl__im__6);
#line 680
//clear ___nl__bool__7;
#line 680
c_rt_lib0clear(&___nl__im__8);
#line 680
c_rt_lib0clear(&___nl__im__9);
#line 680
//clear ___nl__bool__10;
#line 680
c_rt_lib0clear(&___nl__im__11);
#line 680
c_rt_lib0clear(&___nl__im__12);
#line 680
c_rt_lib0clear(&___nl__im__13);
#line 680
//clear ___nl__bool__16;
#line 680
c_rt_lib0clear(&___nl__im__18);
#line 680
c_rt_lib0clear(&___nl__im__19);
#line 680
//clear ___nl__bool__21;
#line 680
c_rt_lib0clear(&___nl__im__22);
#line 680
c_rt_lib0clear(&___nl__im__23);
#line 680
c_rt_lib0clear(&___nl__im__24);
#line 680
//clear ___nl__bool__28;
#line 680
c_rt_lib0clear(&___nl__im__29);
#line 680
c_rt_lib0clear(&___nl__im__30);
#line 680
c_rt_lib0clear(&___nl__im__42);
#line 680
//clear ___nl__bool__47;
#line 680
c_rt_lib0clear(&___nl__im__48);
#line 680
c_rt_lib0clear(&___nl__im__49);
#line 680
//clear ___nl__bool__50;
#line 680
c_rt_lib0clear(&___nl__im__51);
#line 680
c_rt_lib0clear(&___nl__im__52);
#line 680
c_rt_lib0clear(&___nl__im__54);
#line 680
//clear ___nl__bool__59;
#line 680
c_rt_lib0clear(&___nl__im__60);
#line 680
c_rt_lib0clear(&___nl__im__61);
#line 680
//clear ___nl__bool__62;
#line 680
c_rt_lib0clear(&___nl__im__63);
#line 680
c_rt_lib0clear(&___nl__im__64);
#line 680
c_rt_lib0clear(&___nl__im__66);
#line 680
//clear ___nl__bool__67;
#line 680
c_rt_lib0clear(&___nl__im__68);
#line 680
c_rt_lib0clear(&___nl__im__70);
#line 680
//clear ___nl__bool__87;
#line 680
return ___nl__im__88;
#line 680
label_502:
;
#line 680
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__88, ___get_global_const(79)));
#line 680
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(129), ___nl__im__89);
#line 681
c_rt_lib0move(&___nl__im__91, nparser_priv0parse_block(___ref___rec__0));
#line 681
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(79));
#line 681
if(___nl__bool__90){ goto label_552;}
#line 681
c_rt_lib0clear(&___nl__im__1);
#line 681
c_rt_lib0clear(&___nl__im__3);
#line 681
//clear ___nl__bool__4;
#line 681
c_rt_lib0clear(&___nl__im__6);
#line 681
//clear ___nl__bool__7;
#line 681
c_rt_lib0clear(&___nl__im__8);
#line 681
c_rt_lib0clear(&___nl__im__9);
#line 681
//clear ___nl__bool__10;
#line 681
c_rt_lib0clear(&___nl__im__11);
#line 681
c_rt_lib0clear(&___nl__im__12);
#line 681
c_rt_lib0clear(&___nl__im__13);
#line 681
//clear ___nl__bool__16;
#line 681
c_rt_lib0clear(&___nl__im__18);
#line 681
c_rt_lib0clear(&___nl__im__19);
#line 681
//clear ___nl__bool__21;
#line 681
c_rt_lib0clear(&___nl__im__22);
#line 681
c_rt_lib0clear(&___nl__im__23);
#line 681
c_rt_lib0clear(&___nl__im__24);
#line 681
//clear ___nl__bool__28;
#line 681
c_rt_lib0clear(&___nl__im__29);
#line 681
c_rt_lib0clear(&___nl__im__30);
#line 681
c_rt_lib0clear(&___nl__im__42);
#line 681
//clear ___nl__bool__47;
#line 681
c_rt_lib0clear(&___nl__im__48);
#line 681
c_rt_lib0clear(&___nl__im__49);
#line 681
//clear ___nl__bool__50;
#line 681
c_rt_lib0clear(&___nl__im__51);
#line 681
c_rt_lib0clear(&___nl__im__52);
#line 681
c_rt_lib0clear(&___nl__im__54);
#line 681
//clear ___nl__bool__59;
#line 681
c_rt_lib0clear(&___nl__im__60);
#line 681
c_rt_lib0clear(&___nl__im__61);
#line 681
//clear ___nl__bool__62;
#line 681
c_rt_lib0clear(&___nl__im__63);
#line 681
c_rt_lib0clear(&___nl__im__64);
#line 681
c_rt_lib0clear(&___nl__im__66);
#line 681
//clear ___nl__bool__67;
#line 681
c_rt_lib0clear(&___nl__im__68);
#line 681
c_rt_lib0clear(&___nl__im__70);
#line 681
//clear ___nl__bool__87;
#line 681
c_rt_lib0clear(&___nl__im__88);
#line 681
c_rt_lib0clear(&___nl__im__89);
#line 681
//clear ___nl__bool__90;
#line 681
return ___nl__im__91;
#line 681
label_552:
;
#line 681
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(79)));
#line 681
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_const(227), ___nl__im__92);
#line 682
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(957), ___nl__im__70));
#line 683
goto label_2047;
#line 683
label_557:
;
#line 683
c_rt_lib0move(&___nl__im__93,___get_global_const(959));
#line 683
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__93);
#line 683
c_rt_lib0clear(&___nl__im__93);
#line 683
___nl__bool__4 = !___nl__bool__4;
#line 683
if(___nl__bool__4){ goto label_682;}
#line 684
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_mk(0));
#line 685
___nl__bool__95 = false;
#line 685
c_rt_lib0move(&___nl__im__96, c_rt_lib0bool_to_nl_native(___nl__bool__95));
#line 685
c_rt_lib0hash_set_value_dec(&___nl__im__94, ___get_global_const(1036), ___nl__im__96);
#line 685
//clear ___nl__bool__95;
#line 685
c_rt_lib0clear(&___nl__im__96);
#line 686
c_rt_lib0move(&___nl__im__98, nparser_priv0parse_cond(___ref___rec__0));
#line 686
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__98, ___get_global_const(79));
#line 686
if(___nl__bool__97){ goto label_620;}
#line 686
c_rt_lib0clear(&___nl__im__1);
#line 686
c_rt_lib0clear(&___nl__im__3);
#line 686
//clear ___nl__bool__4;
#line 686
c_rt_lib0clear(&___nl__im__6);
#line 686
//clear ___nl__bool__7;
#line 686
c_rt_lib0clear(&___nl__im__8);
#line 686
c_rt_lib0clear(&___nl__im__9);
#line 686
//clear ___nl__bool__10;
#line 686
c_rt_lib0clear(&___nl__im__11);
#line 686
c_rt_lib0clear(&___nl__im__12);
#line 686
c_rt_lib0clear(&___nl__im__13);
#line 686
//clear ___nl__bool__16;
#line 686
c_rt_lib0clear(&___nl__im__18);
#line 686
c_rt_lib0clear(&___nl__im__19);
#line 686
//clear ___nl__bool__21;
#line 686
c_rt_lib0clear(&___nl__im__22);
#line 686
c_rt_lib0clear(&___nl__im__23);
#line 686
c_rt_lib0clear(&___nl__im__24);
#line 686
//clear ___nl__bool__28;
#line 686
c_rt_lib0clear(&___nl__im__29);
#line 686
c_rt_lib0clear(&___nl__im__30);
#line 686
c_rt_lib0clear(&___nl__im__42);
#line 686
//clear ___nl__bool__47;
#line 686
c_rt_lib0clear(&___nl__im__48);
#line 686
c_rt_lib0clear(&___nl__im__49);
#line 686
//clear ___nl__bool__50;
#line 686
c_rt_lib0clear(&___nl__im__51);
#line 686
c_rt_lib0clear(&___nl__im__52);
#line 686
c_rt_lib0clear(&___nl__im__54);
#line 686
//clear ___nl__bool__59;
#line 686
c_rt_lib0clear(&___nl__im__60);
#line 686
c_rt_lib0clear(&___nl__im__61);
#line 686
//clear ___nl__bool__62;
#line 686
c_rt_lib0clear(&___nl__im__63);
#line 686
c_rt_lib0clear(&___nl__im__64);
#line 686
c_rt_lib0clear(&___nl__im__66);
#line 686
//clear ___nl__bool__67;
#line 686
c_rt_lib0clear(&___nl__im__68);
#line 686
c_rt_lib0clear(&___nl__im__70);
#line 686
//clear ___nl__bool__87;
#line 686
c_rt_lib0clear(&___nl__im__88);
#line 686
c_rt_lib0clear(&___nl__im__89);
#line 686
//clear ___nl__bool__90;
#line 686
c_rt_lib0clear(&___nl__im__91);
#line 686
c_rt_lib0clear(&___nl__im__92);
#line 686
c_rt_lib0clear(&___nl__im__94);
#line 686
//clear ___nl__bool__97;
#line 686
return ___nl__im__98;
#line 686
label_620:
;
#line 686
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__98, ___get_global_const(79)));
#line 686
c_rt_lib0hash_set_value_dec(&___nl__im__94, ___get_global_const(968), ___nl__im__99);
#line 687
c_rt_lib0move(&___nl__im__101, nparser_priv0parse_block(___ref___rec__0));
#line 687
___nl__bool__100 = c_rt_lib0priv_is(___nl__im__101, ___get_global_const(79));
#line 687
if(___nl__bool__100){ goto label_677;}
#line 687
c_rt_lib0clear(&___nl__im__1);
#line 687
c_rt_lib0clear(&___nl__im__3);
#line 687
//clear ___nl__bool__4;
#line 687
c_rt_lib0clear(&___nl__im__6);
#line 687
//clear ___nl__bool__7;
#line 687
c_rt_lib0clear(&___nl__im__8);
#line 687
c_rt_lib0clear(&___nl__im__9);
#line 687
//clear ___nl__bool__10;
#line 687
c_rt_lib0clear(&___nl__im__11);
#line 687
c_rt_lib0clear(&___nl__im__12);
#line 687
c_rt_lib0clear(&___nl__im__13);
#line 687
//clear ___nl__bool__16;
#line 687
c_rt_lib0clear(&___nl__im__18);
#line 687
c_rt_lib0clear(&___nl__im__19);
#line 687
//clear ___nl__bool__21;
#line 687
c_rt_lib0clear(&___nl__im__22);
#line 687
c_rt_lib0clear(&___nl__im__23);
#line 687
c_rt_lib0clear(&___nl__im__24);
#line 687
//clear ___nl__bool__28;
#line 687
c_rt_lib0clear(&___nl__im__29);
#line 687
c_rt_lib0clear(&___nl__im__30);
#line 687
c_rt_lib0clear(&___nl__im__42);
#line 687
//clear ___nl__bool__47;
#line 687
c_rt_lib0clear(&___nl__im__48);
#line 687
c_rt_lib0clear(&___nl__im__49);
#line 687
//clear ___nl__bool__50;
#line 687
c_rt_lib0clear(&___nl__im__51);
#line 687
c_rt_lib0clear(&___nl__im__52);
#line 687
c_rt_lib0clear(&___nl__im__54);
#line 687
//clear ___nl__bool__59;
#line 687
c_rt_lib0clear(&___nl__im__60);
#line 687
c_rt_lib0clear(&___nl__im__61);
#line 687
//clear ___nl__bool__62;
#line 687
c_rt_lib0clear(&___nl__im__63);
#line 687
c_rt_lib0clear(&___nl__im__64);
#line 687
c_rt_lib0clear(&___nl__im__66);
#line 687
//clear ___nl__bool__67;
#line 687
c_rt_lib0clear(&___nl__im__68);
#line 687
c_rt_lib0clear(&___nl__im__70);
#line 687
//clear ___nl__bool__87;
#line 687
c_rt_lib0clear(&___nl__im__88);
#line 687
c_rt_lib0clear(&___nl__im__89);
#line 687
//clear ___nl__bool__90;
#line 687
c_rt_lib0clear(&___nl__im__91);
#line 687
c_rt_lib0clear(&___nl__im__92);
#line 687
c_rt_lib0clear(&___nl__im__94);
#line 687
//clear ___nl__bool__97;
#line 687
c_rt_lib0clear(&___nl__im__98);
#line 687
c_rt_lib0clear(&___nl__im__99);
#line 687
//clear ___nl__bool__100;
#line 687
return ___nl__im__101;
#line 687
label_677:
;
#line 687
c_rt_lib0move(&___nl__im__102, c_rt_lib0priv_as(___nl__im__101, ___get_global_const(79)));
#line 687
c_rt_lib0hash_set_value_dec(&___nl__im__94, ___get_global_const(227), ___nl__im__102);
#line 688
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(959), ___nl__im__94));
#line 689
goto label_2047;
#line 689
label_682:
;
#line 689
c_rt_lib0move(&___nl__im__103,___get_global_const(955));
#line 689
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__103);
#line 689
c_rt_lib0clear(&___nl__im__103);
#line 689
___nl__bool__4 = !___nl__bool__4;
#line 689
if(___nl__bool__4){ goto label_1097;}
#line 690
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_mk(0));
#line 691
c_rt_lib0move(&___nl__im__105,___get_global_const(446));
#line 691
nparser_priv0eat(___ref___rec__0, ___nl__im__105);
#line 691
c_rt_lib0clear(&___nl__im__105);
#line 692
___nl__rec_ptr__107 = &((*___ref___rec__0).state0field);
#line 692
c_rt_lib0move(&___nl__im__108,___get_global_const(490));
#line 692
___nl__bool__106 = ntokenizer0next_is(___nl__rec_ptr__107, ___nl__im__108);
#line 692
___nl__rec_ptr__107 = NULL;
#line 692
c_rt_lib0clear(&___nl__im__108);
#line 692
___nl__bool__106 = !___nl__bool__106;
#line 692
if(___nl__bool__106){ goto label_767;}
#line 693
c_rt_lib0move(&___nl__im__111, nparser_priv0parse_var_decl(___ref___rec__0));
#line 693
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__111, ___get_global_const(79));
#line 693
if(___nl__bool__110){ goto label_759;}
#line 693
c_rt_lib0clear(&___nl__im__1);
#line 693
c_rt_lib0clear(&___nl__im__3);
#line 693
//clear ___nl__bool__4;
#line 693
c_rt_lib0clear(&___nl__im__6);
#line 693
//clear ___nl__bool__7;
#line 693
c_rt_lib0clear(&___nl__im__8);
#line 693
c_rt_lib0clear(&___nl__im__9);
#line 693
//clear ___nl__bool__10;
#line 693
c_rt_lib0clear(&___nl__im__11);
#line 693
c_rt_lib0clear(&___nl__im__12);
#line 693
c_rt_lib0clear(&___nl__im__13);
#line 693
//clear ___nl__bool__16;
#line 693
c_rt_lib0clear(&___nl__im__18);
#line 693
c_rt_lib0clear(&___nl__im__19);
#line 693
//clear ___nl__bool__21;
#line 693
c_rt_lib0clear(&___nl__im__22);
#line 693
c_rt_lib0clear(&___nl__im__23);
#line 693
c_rt_lib0clear(&___nl__im__24);
#line 693
//clear ___nl__bool__28;
#line 693
c_rt_lib0clear(&___nl__im__29);
#line 693
c_rt_lib0clear(&___nl__im__30);
#line 693
c_rt_lib0clear(&___nl__im__42);
#line 693
//clear ___nl__bool__47;
#line 693
c_rt_lib0clear(&___nl__im__48);
#line 693
c_rt_lib0clear(&___nl__im__49);
#line 693
//clear ___nl__bool__50;
#line 693
c_rt_lib0clear(&___nl__im__51);
#line 693
c_rt_lib0clear(&___nl__im__52);
#line 693
c_rt_lib0clear(&___nl__im__54);
#line 693
//clear ___nl__bool__59;
#line 693
c_rt_lib0clear(&___nl__im__60);
#line 693
c_rt_lib0clear(&___nl__im__61);
#line 693
//clear ___nl__bool__62;
#line 693
c_rt_lib0clear(&___nl__im__63);
#line 693
c_rt_lib0clear(&___nl__im__64);
#line 693
c_rt_lib0clear(&___nl__im__66);
#line 693
//clear ___nl__bool__67;
#line 693
c_rt_lib0clear(&___nl__im__68);
#line 693
c_rt_lib0clear(&___nl__im__70);
#line 693
//clear ___nl__bool__87;
#line 693
c_rt_lib0clear(&___nl__im__88);
#line 693
c_rt_lib0clear(&___nl__im__89);
#line 693
//clear ___nl__bool__90;
#line 693
c_rt_lib0clear(&___nl__im__91);
#line 693
c_rt_lib0clear(&___nl__im__92);
#line 693
c_rt_lib0clear(&___nl__im__94);
#line 693
//clear ___nl__bool__97;
#line 693
c_rt_lib0clear(&___nl__im__98);
#line 693
c_rt_lib0clear(&___nl__im__99);
#line 693
//clear ___nl__bool__100;
#line 693
c_rt_lib0clear(&___nl__im__101);
#line 693
c_rt_lib0clear(&___nl__im__102);
#line 693
c_rt_lib0clear(&___nl__im__104);
#line 693
//clear ___nl__bool__106;
#line 693
c_rt_lib0clear(&___nl__im__109);
#line 693
//clear ___nl__bool__110;
#line 693
return ___nl__im__111;
#line 693
label_759:
;
#line 693
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__111, ___get_global_const(79)));
#line 694
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__109));
#line 694
c_rt_lib0copy(&___nl__im__113, ___nl__im__112);
#line 694
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(971), ___nl__im__113);
#line 694
c_rt_lib0clear(&___nl__im__112);
#line 694
c_rt_lib0clear(&___nl__im__113);
#line 695
goto label_855;
#line 695
label_767:
;
#line 695
___nl__rec_ptr__114 = &((*___ref___rec__0).state0field);
#line 695
c_rt_lib0move(&___nl__im__115,___get_global_const(435));
#line 695
___nl__bool__106 = ntokenizer0next_is(___nl__rec_ptr__114, ___nl__im__115);
#line 695
___nl__rec_ptr__114 = NULL;
#line 695
c_rt_lib0clear(&___nl__im__115);
#line 695
___nl__bool__106 = !___nl__bool__106;
#line 695
if(___nl__bool__106){ goto label_783;}
#line 696
c_rt_lib0move(&___nl__im__117, nparser_priv0get_value_nop(___ref___rec__0));
#line 696
c_rt_lib0move(&___nl__im__116, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__117));
#line 696
c_rt_lib0clear(&___nl__im__117);
#line 696
c_rt_lib0copy(&___nl__im__118, ___nl__im__116);
#line 696
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(971), ___nl__im__118);
#line 696
c_rt_lib0clear(&___nl__im__116);
#line 696
c_rt_lib0clear(&___nl__im__118);
#line 697
goto label_855;
#line 697
label_783:
;
#line 698
c_rt_lib0move(&___nl__im__121, nparser_priv0parse_expr(___ref___rec__0));
#line 698
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__121, ___get_global_const(79));
#line 698
if(___nl__bool__120){ goto label_847;}
#line 698
c_rt_lib0clear(&___nl__im__1);
#line 698
c_rt_lib0clear(&___nl__im__3);
#line 698
//clear ___nl__bool__4;
#line 698
c_rt_lib0clear(&___nl__im__6);
#line 698
//clear ___nl__bool__7;
#line 698
c_rt_lib0clear(&___nl__im__8);
#line 698
c_rt_lib0clear(&___nl__im__9);
#line 698
//clear ___nl__bool__10;
#line 698
c_rt_lib0clear(&___nl__im__11);
#line 698
c_rt_lib0clear(&___nl__im__12);
#line 698
c_rt_lib0clear(&___nl__im__13);
#line 698
//clear ___nl__bool__16;
#line 698
c_rt_lib0clear(&___nl__im__18);
#line 698
c_rt_lib0clear(&___nl__im__19);
#line 698
//clear ___nl__bool__21;
#line 698
c_rt_lib0clear(&___nl__im__22);
#line 698
c_rt_lib0clear(&___nl__im__23);
#line 698
c_rt_lib0clear(&___nl__im__24);
#line 698
//clear ___nl__bool__28;
#line 698
c_rt_lib0clear(&___nl__im__29);
#line 698
c_rt_lib0clear(&___nl__im__30);
#line 698
c_rt_lib0clear(&___nl__im__42);
#line 698
//clear ___nl__bool__47;
#line 698
c_rt_lib0clear(&___nl__im__48);
#line 698
c_rt_lib0clear(&___nl__im__49);
#line 698
//clear ___nl__bool__50;
#line 698
c_rt_lib0clear(&___nl__im__51);
#line 698
c_rt_lib0clear(&___nl__im__52);
#line 698
c_rt_lib0clear(&___nl__im__54);
#line 698
//clear ___nl__bool__59;
#line 698
c_rt_lib0clear(&___nl__im__60);
#line 698
c_rt_lib0clear(&___nl__im__61);
#line 698
//clear ___nl__bool__62;
#line 698
c_rt_lib0clear(&___nl__im__63);
#line 698
c_rt_lib0clear(&___nl__im__64);
#line 698
c_rt_lib0clear(&___nl__im__66);
#line 698
//clear ___nl__bool__67;
#line 698
c_rt_lib0clear(&___nl__im__68);
#line 698
c_rt_lib0clear(&___nl__im__70);
#line 698
//clear ___nl__bool__87;
#line 698
c_rt_lib0clear(&___nl__im__88);
#line 698
c_rt_lib0clear(&___nl__im__89);
#line 698
//clear ___nl__bool__90;
#line 698
c_rt_lib0clear(&___nl__im__91);
#line 698
c_rt_lib0clear(&___nl__im__92);
#line 698
c_rt_lib0clear(&___nl__im__94);
#line 698
//clear ___nl__bool__97;
#line 698
c_rt_lib0clear(&___nl__im__98);
#line 698
c_rt_lib0clear(&___nl__im__99);
#line 698
//clear ___nl__bool__100;
#line 698
c_rt_lib0clear(&___nl__im__101);
#line 698
c_rt_lib0clear(&___nl__im__102);
#line 698
c_rt_lib0clear(&___nl__im__104);
#line 698
//clear ___nl__bool__106;
#line 698
c_rt_lib0clear(&___nl__im__109);
#line 698
//clear ___nl__bool__110;
#line 698
c_rt_lib0clear(&___nl__im__111);
#line 698
c_rt_lib0clear(&___nl__im__119);
#line 698
//clear ___nl__bool__120;
#line 698
return ___nl__im__121;
#line 698
label_847:
;
#line 698
c_rt_lib0move(&___nl__im__119, c_rt_lib0priv_as(___nl__im__121, ___get_global_const(79)));
#line 699
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__119));
#line 699
c_rt_lib0copy(&___nl__im__123, ___nl__im__122);
#line 699
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(971), ___nl__im__123);
#line 699
c_rt_lib0clear(&___nl__im__122);
#line 699
c_rt_lib0clear(&___nl__im__123);
#line 700
goto label_855;
#line 700
label_855:
;
#line 700
//clear ___nl__bool__106;
#line 700
c_rt_lib0clear(&___nl__im__109);
#line 700
//clear ___nl__bool__110;
#line 700
c_rt_lib0clear(&___nl__im__111);
#line 700
c_rt_lib0clear(&___nl__im__119);
#line 700
//clear ___nl__bool__120;
#line 700
c_rt_lib0clear(&___nl__im__121);
#line 701
c_rt_lib0move(&___nl__im__124,___get_global_const(435));
#line 701
nparser_priv0eat(___ref___rec__0, ___nl__im__124);
#line 701
c_rt_lib0clear(&___nl__im__124);
#line 702
c_rt_lib0move(&___nl__im__125, nparser_priv0get_value_nop(___ref___rec__0));
#line 702
c_rt_lib0copy(&___nl__im__126, ___nl__im__125);
#line 702
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(968), ___nl__im__126);
#line 702
c_rt_lib0clear(&___nl__im__125);
#line 702
c_rt_lib0clear(&___nl__im__126);
#line 703
___nl__rec_ptr__128 = &((*___ref___rec__0).state0field);
#line 703
c_rt_lib0move(&___nl__im__129,___get_global_const(435));
#line 703
___nl__bool__127 = ntokenizer0next_is(___nl__rec_ptr__128, ___nl__im__129);
#line 703
___nl__rec_ptr__128 = NULL;
#line 703
c_rt_lib0clear(&___nl__im__129);
#line 703
___nl__bool__127 = !___nl__bool__127;
#line 703
___nl__bool__127 = !___nl__bool__127;
#line 703
if(___nl__bool__127){ goto label_942;}
#line 703
c_rt_lib0move(&___nl__im__131, nparser_priv0parse_expr(___ref___rec__0));
#line 703
___nl__bool__130 = c_rt_lib0priv_is(___nl__im__131, ___get_global_const(79));
#line 703
if(___nl__bool__130){ goto label_938;}
#line 703
c_rt_lib0clear(&___nl__im__1);
#line 703
c_rt_lib0clear(&___nl__im__3);
#line 703
//clear ___nl__bool__4;
#line 703
c_rt_lib0clear(&___nl__im__6);
#line 703
//clear ___nl__bool__7;
#line 703
c_rt_lib0clear(&___nl__im__8);
#line 703
c_rt_lib0clear(&___nl__im__9);
#line 703
//clear ___nl__bool__10;
#line 703
c_rt_lib0clear(&___nl__im__11);
#line 703
c_rt_lib0clear(&___nl__im__12);
#line 703
c_rt_lib0clear(&___nl__im__13);
#line 703
//clear ___nl__bool__16;
#line 703
c_rt_lib0clear(&___nl__im__18);
#line 703
c_rt_lib0clear(&___nl__im__19);
#line 703
//clear ___nl__bool__21;
#line 703
c_rt_lib0clear(&___nl__im__22);
#line 703
c_rt_lib0clear(&___nl__im__23);
#line 703
c_rt_lib0clear(&___nl__im__24);
#line 703
//clear ___nl__bool__28;
#line 703
c_rt_lib0clear(&___nl__im__29);
#line 703
c_rt_lib0clear(&___nl__im__30);
#line 703
c_rt_lib0clear(&___nl__im__42);
#line 703
//clear ___nl__bool__47;
#line 703
c_rt_lib0clear(&___nl__im__48);
#line 703
c_rt_lib0clear(&___nl__im__49);
#line 703
//clear ___nl__bool__50;
#line 703
c_rt_lib0clear(&___nl__im__51);
#line 703
c_rt_lib0clear(&___nl__im__52);
#line 703
c_rt_lib0clear(&___nl__im__54);
#line 703
//clear ___nl__bool__59;
#line 703
c_rt_lib0clear(&___nl__im__60);
#line 703
c_rt_lib0clear(&___nl__im__61);
#line 703
//clear ___nl__bool__62;
#line 703
c_rt_lib0clear(&___nl__im__63);
#line 703
c_rt_lib0clear(&___nl__im__64);
#line 703
c_rt_lib0clear(&___nl__im__66);
#line 703
//clear ___nl__bool__67;
#line 703
c_rt_lib0clear(&___nl__im__68);
#line 703
c_rt_lib0clear(&___nl__im__70);
#line 703
//clear ___nl__bool__87;
#line 703
c_rt_lib0clear(&___nl__im__88);
#line 703
c_rt_lib0clear(&___nl__im__89);
#line 703
//clear ___nl__bool__90;
#line 703
c_rt_lib0clear(&___nl__im__91);
#line 703
c_rt_lib0clear(&___nl__im__92);
#line 703
c_rt_lib0clear(&___nl__im__94);
#line 703
//clear ___nl__bool__97;
#line 703
c_rt_lib0clear(&___nl__im__98);
#line 703
c_rt_lib0clear(&___nl__im__99);
#line 703
//clear ___nl__bool__100;
#line 703
c_rt_lib0clear(&___nl__im__101);
#line 703
c_rt_lib0clear(&___nl__im__102);
#line 703
c_rt_lib0clear(&___nl__im__104);
#line 703
//clear ___nl__bool__127;
#line 703
//clear ___nl__bool__130;
#line 703
return ___nl__im__131;
#line 703
label_938:
;
#line 703
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__131, ___get_global_const(79)));
#line 703
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(968), ___nl__im__132);
#line 703
goto label_942;
#line 703
label_942:
;
#line 703
//clear ___nl__bool__127;
#line 703
//clear ___nl__bool__130;
#line 703
c_rt_lib0clear(&___nl__im__131);
#line 703
c_rt_lib0clear(&___nl__im__132);
#line 704
c_rt_lib0move(&___nl__im__133,___get_global_const(435));
#line 704
nparser_priv0eat(___ref___rec__0, ___nl__im__133);
#line 704
c_rt_lib0clear(&___nl__im__133);
#line 705
c_rt_lib0move(&___nl__im__134, nparser_priv0get_value_nop(___ref___rec__0));
#line 705
c_rt_lib0copy(&___nl__im__135, ___nl__im__134);
#line 705
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(362), ___nl__im__135);
#line 705
c_rt_lib0clear(&___nl__im__134);
#line 705
c_rt_lib0clear(&___nl__im__135);
#line 706
___nl__rec_ptr__137 = &((*___ref___rec__0).state0field);
#line 706
c_rt_lib0move(&___nl__im__138,___get_global_const(320));
#line 706
___nl__bool__136 = ntokenizer0next_is(___nl__rec_ptr__137, ___nl__im__138);
#line 706
___nl__rec_ptr__137 = NULL;
#line 706
c_rt_lib0clear(&___nl__im__138);
#line 706
___nl__bool__136 = !___nl__bool__136;
#line 706
___nl__bool__136 = !___nl__bool__136;
#line 706
if(___nl__bool__136){ goto label_1026;}
#line 706
c_rt_lib0move(&___nl__im__140, nparser_priv0parse_expr(___ref___rec__0));
#line 706
___nl__bool__139 = c_rt_lib0priv_is(___nl__im__140, ___get_global_const(79));
#line 706
if(___nl__bool__139){ goto label_1022;}
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
//clear ___nl__bool__87;
#line 706
c_rt_lib0clear(&___nl__im__88);
#line 706
c_rt_lib0clear(&___nl__im__89);
#line 706
//clear ___nl__bool__90;
#line 706
c_rt_lib0clear(&___nl__im__91);
#line 706
c_rt_lib0clear(&___nl__im__92);
#line 706
c_rt_lib0clear(&___nl__im__94);
#line 706
//clear ___nl__bool__97;
#line 706
c_rt_lib0clear(&___nl__im__98);
#line 706
c_rt_lib0clear(&___nl__im__99);
#line 706
//clear ___nl__bool__100;
#line 706
c_rt_lib0clear(&___nl__im__101);
#line 706
c_rt_lib0clear(&___nl__im__102);
#line 706
c_rt_lib0clear(&___nl__im__104);
#line 706
//clear ___nl__bool__136;
#line 706
//clear ___nl__bool__139;
#line 706
return ___nl__im__140;
#line 706
label_1022:
;
#line 706
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__140, ___get_global_const(79)));
#line 706
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(362), ___nl__im__141);
#line 706
goto label_1026;
#line 706
label_1026:
;
#line 706
//clear ___nl__bool__136;
#line 706
//clear ___nl__bool__139;
#line 706
c_rt_lib0clear(&___nl__im__140);
#line 706
c_rt_lib0clear(&___nl__im__141);
#line 707
c_rt_lib0move(&___nl__im__142,___get_global_const(320));
#line 707
nparser_priv0eat(___ref___rec__0, ___nl__im__142);
#line 707
c_rt_lib0clear(&___nl__im__142);
#line 708
c_rt_lib0move(&___nl__im__144, nparser_priv0parse_block(___ref___rec__0));
#line 708
___nl__bool__143 = c_rt_lib0priv_is(___nl__im__144, ___get_global_const(79));
#line 708
if(___nl__bool__143){ goto label_1092;}
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
//clear ___nl__bool__87;
#line 708
c_rt_lib0clear(&___nl__im__88);
#line 708
c_rt_lib0clear(&___nl__im__89);
#line 708
//clear ___nl__bool__90;
#line 708
c_rt_lib0clear(&___nl__im__91);
#line 708
c_rt_lib0clear(&___nl__im__92);
#line 708
c_rt_lib0clear(&___nl__im__94);
#line 708
//clear ___nl__bool__97;
#line 708
c_rt_lib0clear(&___nl__im__98);
#line 708
c_rt_lib0clear(&___nl__im__99);
#line 708
//clear ___nl__bool__100;
#line 708
c_rt_lib0clear(&___nl__im__101);
#line 708
c_rt_lib0clear(&___nl__im__102);
#line 708
c_rt_lib0clear(&___nl__im__104);
#line 708
//clear ___nl__bool__143;
#line 708
return ___nl__im__144;
#line 708
label_1092:
;
#line 708
c_rt_lib0move(&___nl__im__145, c_rt_lib0priv_as(___nl__im__144, ___get_global_const(79)));
#line 708
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_const(227), ___nl__im__145);
#line 709
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(955), ___nl__im__104));
#line 710
goto label_2047;
#line 710
label_1097:
;
#line 710
___nl__rec_ptr__146 = &((*___ref___rec__0).state0field);
#line 710
c_rt_lib0move(&___nl__im__147,___get_global_const(304));
#line 710
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__146, ___nl__im__147);
#line 710
___nl__rec_ptr__146 = NULL;
#line 710
c_rt_lib0clear(&___nl__im__147);
#line 710
___nl__bool__4 = !___nl__bool__4;
#line 710
if(___nl__bool__4){ goto label_1171;}
#line 711
c_rt_lib0move(&___nl__im__150, nparser_priv0parse_block(___ref___rec__0));
#line 711
___nl__bool__149 = c_rt_lib0priv_is(___nl__im__150, ___get_global_const(79));
#line 711
if(___nl__bool__149){ goto label_1167;}
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
//clear ___nl__bool__87;
#line 711
c_rt_lib0clear(&___nl__im__88);
#line 711
c_rt_lib0clear(&___nl__im__89);
#line 711
//clear ___nl__bool__90;
#line 711
c_rt_lib0clear(&___nl__im__91);
#line 711
c_rt_lib0clear(&___nl__im__92);
#line 711
c_rt_lib0clear(&___nl__im__94);
#line 711
//clear ___nl__bool__97;
#line 711
c_rt_lib0clear(&___nl__im__98);
#line 711
c_rt_lib0clear(&___nl__im__99);
#line 711
//clear ___nl__bool__100;
#line 711
c_rt_lib0clear(&___nl__im__101);
#line 711
c_rt_lib0clear(&___nl__im__102);
#line 711
c_rt_lib0clear(&___nl__im__104);
#line 711
//clear ___nl__bool__143;
#line 711
c_rt_lib0clear(&___nl__im__144);
#line 711
c_rt_lib0clear(&___nl__im__145);
#line 711
c_rt_lib0clear(&___nl__im__148);
#line 711
//clear ___nl__bool__149;
#line 711
return ___nl__im__150;
#line 711
label_1167:
;
#line 711
c_rt_lib0move(&___nl__im__148, c_rt_lib0priv_as(___nl__im__150, ___get_global_const(79)));
#line 712
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__148, ___get_global_const(227)));
#line 713
goto label_2047;
#line 713
label_1171:
;
#line 713
c_rt_lib0move(&___nl__im__151,___get_global_const(962));
#line 713
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__151);
#line 713
c_rt_lib0clear(&___nl__im__151);
#line 713
___nl__bool__4 = !___nl__bool__4;
#line 713
if(___nl__bool__4){ goto label_1179;}
#line 714
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(962)));
#line 715
goto label_2047;
#line 715
label_1179:
;
#line 715
c_rt_lib0move(&___nl__im__152,___get_global_const(963));
#line 715
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__152);
#line 715
c_rt_lib0clear(&___nl__im__152);
#line 715
___nl__bool__4 = !___nl__bool__4;
#line 715
if(___nl__bool__4){ goto label_1187;}
#line 716
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(963)));
#line 717
goto label_2047;
#line 717
label_1187:
;
#line 717
c_rt_lib0move(&___nl__im__153,___get_global_const(246));
#line 717
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__153);
#line 717
c_rt_lib0clear(&___nl__im__153);
#line 717
___nl__bool__4 = !___nl__bool__4;
#line 717
if(___nl__bool__4){ goto label_1313;}
#line 718
___nl__rec_ptr__155 = &((*___ref___rec__0).state0field);
#line 718
c_rt_lib0move(&___nl__im__154, ntokenizer0get_token(___nl__rec_ptr__155));
#line 718
___nl__rec_ptr__155 = NULL;
#line 719
___nl__bool__156 = false;
#line 720
c_rt_lib0move(&___nl__im__157, nparser_priv0get_end_list());
#line 720
___nl__int__159 = 0;
#line 720
___nl__int__160 = 1;
#line 720
___nl__int__161 = c_rt_lib0array_len(___nl__im__157);
#line 720
label_1201:
;
#line 720
___nl__int__163 = ___nl__int__159 >= ___nl__int__161;
#line 720
___nl__bool__162 = ___nl__int__163;
#line 720
if(___nl__bool__162){ goto label_1218;}
#line 720
c_rt_lib0move(&___nl__im__164, c_rt_lib0array_get(___nl__im__157, ___nl__int__159));
#line 720
c_rt_lib0copy(&___nl__im__158, ___nl__im__164);
#line 721
___nl__bool__165 = c_rt_lib0eq(___nl__im__154, ___nl__im__158);
#line 721
___nl__bool__165 = !___nl__bool__165;
#line 721
if(___nl__bool__165){ goto label_1213;}
#line 722
___nl__bool__156 = true;
#line 723
goto label_1218;
#line 724
goto label_1213;
#line 724
label_1213:
;
#line 724
//clear ___nl__bool__165;
#line 724
c_rt_lib0clear(&___nl__im__158);
#line 725
___nl__int__159 = ___nl__int__159 + ___nl__int__160;
#line 725
goto label_1201;
#line 725
label_1218:
;
#line 726
___nl__bool__166 = ___nl__bool__156;
#line 726
___nl__bool__166 = !___nl__bool__166;
#line 726
if(___nl__bool__166){ goto label_1226;}
#line 727
c_rt_lib0move(&___nl__im__167, nparser_priv0get_value_nop(___ref___rec__0));
#line 727
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__167));
#line 727
c_rt_lib0clear(&___nl__im__167);
#line 728
goto label_1307;
#line 728
label_1226:
;
#line 729
c_rt_lib0move(&___nl__im__170, nparser_priv0parse_expr(___ref___rec__0));
#line 729
___nl__bool__169 = c_rt_lib0priv_is(___nl__im__170, ___get_global_const(79));
#line 729
if(___nl__bool__169){ goto label_1303;}
#line 729
c_rt_lib0clear(&___nl__im__1);
#line 729
c_rt_lib0clear(&___nl__im__3);
#line 729
//clear ___nl__bool__4;
#line 729
c_rt_lib0clear(&___nl__im__6);
#line 729
//clear ___nl__bool__7;
#line 729
c_rt_lib0clear(&___nl__im__8);
#line 729
c_rt_lib0clear(&___nl__im__9);
#line 729
//clear ___nl__bool__10;
#line 729
c_rt_lib0clear(&___nl__im__11);
#line 729
c_rt_lib0clear(&___nl__im__12);
#line 729
c_rt_lib0clear(&___nl__im__13);
#line 729
//clear ___nl__bool__16;
#line 729
c_rt_lib0clear(&___nl__im__18);
#line 729
c_rt_lib0clear(&___nl__im__19);
#line 729
//clear ___nl__bool__21;
#line 729
c_rt_lib0clear(&___nl__im__22);
#line 729
c_rt_lib0clear(&___nl__im__23);
#line 729
c_rt_lib0clear(&___nl__im__24);
#line 729
//clear ___nl__bool__28;
#line 729
c_rt_lib0clear(&___nl__im__29);
#line 729
c_rt_lib0clear(&___nl__im__30);
#line 729
c_rt_lib0clear(&___nl__im__42);
#line 729
//clear ___nl__bool__47;
#line 729
c_rt_lib0clear(&___nl__im__48);
#line 729
c_rt_lib0clear(&___nl__im__49);
#line 729
//clear ___nl__bool__50;
#line 729
c_rt_lib0clear(&___nl__im__51);
#line 729
c_rt_lib0clear(&___nl__im__52);
#line 729
c_rt_lib0clear(&___nl__im__54);
#line 729
//clear ___nl__bool__59;
#line 729
c_rt_lib0clear(&___nl__im__60);
#line 729
c_rt_lib0clear(&___nl__im__61);
#line 729
//clear ___nl__bool__62;
#line 729
c_rt_lib0clear(&___nl__im__63);
#line 729
c_rt_lib0clear(&___nl__im__64);
#line 729
c_rt_lib0clear(&___nl__im__66);
#line 729
//clear ___nl__bool__67;
#line 729
c_rt_lib0clear(&___nl__im__68);
#line 729
c_rt_lib0clear(&___nl__im__70);
#line 729
//clear ___nl__bool__87;
#line 729
c_rt_lib0clear(&___nl__im__88);
#line 729
c_rt_lib0clear(&___nl__im__89);
#line 729
//clear ___nl__bool__90;
#line 729
c_rt_lib0clear(&___nl__im__91);
#line 729
c_rt_lib0clear(&___nl__im__92);
#line 729
c_rt_lib0clear(&___nl__im__94);
#line 729
//clear ___nl__bool__97;
#line 729
c_rt_lib0clear(&___nl__im__98);
#line 729
c_rt_lib0clear(&___nl__im__99);
#line 729
//clear ___nl__bool__100;
#line 729
c_rt_lib0clear(&___nl__im__101);
#line 729
c_rt_lib0clear(&___nl__im__102);
#line 729
c_rt_lib0clear(&___nl__im__104);
#line 729
//clear ___nl__bool__143;
#line 729
c_rt_lib0clear(&___nl__im__144);
#line 729
c_rt_lib0clear(&___nl__im__145);
#line 729
c_rt_lib0clear(&___nl__im__148);
#line 729
//clear ___nl__bool__149;
#line 729
c_rt_lib0clear(&___nl__im__150);
#line 729
c_rt_lib0clear(&___nl__im__154);
#line 729
//clear ___nl__bool__156;
#line 729
c_rt_lib0clear(&___nl__im__157);
#line 729
c_rt_lib0clear(&___nl__im__158);
#line 729
//clear ___nl__int__159;
#line 729
//clear ___nl__int__160;
#line 729
//clear ___nl__int__161;
#line 729
//clear ___nl__bool__162;
#line 729
//clear ___nl__int__163;
#line 729
c_rt_lib0clear(&___nl__im__164);
#line 729
//clear ___nl__bool__166;
#line 729
c_rt_lib0clear(&___nl__im__168);
#line 729
//clear ___nl__bool__169;
#line 729
return ___nl__im__170;
#line 729
label_1303:
;
#line 729
c_rt_lib0move(&___nl__im__168, c_rt_lib0priv_as(___nl__im__170, ___get_global_const(79)));
#line 730
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__168));
#line 731
goto label_1307;
#line 731
label_1307:
;
#line 731
//clear ___nl__bool__166;
#line 731
c_rt_lib0clear(&___nl__im__168);
#line 731
//clear ___nl__bool__169;
#line 731
c_rt_lib0clear(&___nl__im__170);
#line 732
goto label_2047;
#line 732
label_1313:
;
#line 732
c_rt_lib0move(&___nl__im__171,___get_global_const(964));
#line 732
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__171);
#line 732
c_rt_lib0clear(&___nl__im__171);
#line 732
___nl__bool__4 = !___nl__bool__4;
#line 732
if(___nl__bool__4){ goto label_1528;}
#line 733
c_rt_lib0move(&___nl__im__172,___get_global_const(446));
#line 733
nparser_priv0eat(___ref___rec__0, ___nl__im__172);
#line 733
c_rt_lib0clear(&___nl__im__172);
#line 734
c_rt_lib0move(&___nl__im__175, nparser_priv0parse_expr(___ref___rec__0));
#line 734
___nl__bool__174 = c_rt_lib0priv_is(___nl__im__175, ___get_global_const(79));
#line 734
if(___nl__bool__174){ goto label_1397;}
#line 734
c_rt_lib0clear(&___nl__im__1);
#line 734
c_rt_lib0clear(&___nl__im__3);
#line 734
//clear ___nl__bool__4;
#line 734
c_rt_lib0clear(&___nl__im__6);
#line 734
//clear ___nl__bool__7;
#line 734
c_rt_lib0clear(&___nl__im__8);
#line 734
c_rt_lib0clear(&___nl__im__9);
#line 734
//clear ___nl__bool__10;
#line 734
c_rt_lib0clear(&___nl__im__11);
#line 734
c_rt_lib0clear(&___nl__im__12);
#line 734
c_rt_lib0clear(&___nl__im__13);
#line 734
//clear ___nl__bool__16;
#line 734
c_rt_lib0clear(&___nl__im__18);
#line 734
c_rt_lib0clear(&___nl__im__19);
#line 734
//clear ___nl__bool__21;
#line 734
c_rt_lib0clear(&___nl__im__22);
#line 734
c_rt_lib0clear(&___nl__im__23);
#line 734
c_rt_lib0clear(&___nl__im__24);
#line 734
//clear ___nl__bool__28;
#line 734
c_rt_lib0clear(&___nl__im__29);
#line 734
c_rt_lib0clear(&___nl__im__30);
#line 734
c_rt_lib0clear(&___nl__im__42);
#line 734
//clear ___nl__bool__47;
#line 734
c_rt_lib0clear(&___nl__im__48);
#line 734
c_rt_lib0clear(&___nl__im__49);
#line 734
//clear ___nl__bool__50;
#line 734
c_rt_lib0clear(&___nl__im__51);
#line 734
c_rt_lib0clear(&___nl__im__52);
#line 734
c_rt_lib0clear(&___nl__im__54);
#line 734
//clear ___nl__bool__59;
#line 734
c_rt_lib0clear(&___nl__im__60);
#line 734
c_rt_lib0clear(&___nl__im__61);
#line 734
//clear ___nl__bool__62;
#line 734
c_rt_lib0clear(&___nl__im__63);
#line 734
c_rt_lib0clear(&___nl__im__64);
#line 734
c_rt_lib0clear(&___nl__im__66);
#line 734
//clear ___nl__bool__67;
#line 734
c_rt_lib0clear(&___nl__im__68);
#line 734
c_rt_lib0clear(&___nl__im__70);
#line 734
//clear ___nl__bool__87;
#line 734
c_rt_lib0clear(&___nl__im__88);
#line 734
c_rt_lib0clear(&___nl__im__89);
#line 734
//clear ___nl__bool__90;
#line 734
c_rt_lib0clear(&___nl__im__91);
#line 734
c_rt_lib0clear(&___nl__im__92);
#line 734
c_rt_lib0clear(&___nl__im__94);
#line 734
//clear ___nl__bool__97;
#line 734
c_rt_lib0clear(&___nl__im__98);
#line 734
c_rt_lib0clear(&___nl__im__99);
#line 734
//clear ___nl__bool__100;
#line 734
c_rt_lib0clear(&___nl__im__101);
#line 734
c_rt_lib0clear(&___nl__im__102);
#line 734
c_rt_lib0clear(&___nl__im__104);
#line 734
//clear ___nl__bool__143;
#line 734
c_rt_lib0clear(&___nl__im__144);
#line 734
c_rt_lib0clear(&___nl__im__145);
#line 734
c_rt_lib0clear(&___nl__im__148);
#line 734
//clear ___nl__bool__149;
#line 734
c_rt_lib0clear(&___nl__im__150);
#line 734
c_rt_lib0clear(&___nl__im__154);
#line 734
//clear ___nl__bool__156;
#line 734
c_rt_lib0clear(&___nl__im__157);
#line 734
c_rt_lib0clear(&___nl__im__158);
#line 734
//clear ___nl__int__159;
#line 734
//clear ___nl__int__160;
#line 734
//clear ___nl__int__161;
#line 734
//clear ___nl__bool__162;
#line 734
//clear ___nl__int__163;
#line 734
c_rt_lib0clear(&___nl__im__164);
#line 734
c_rt_lib0clear(&___nl__im__173);
#line 734
//clear ___nl__bool__174;
#line 734
return ___nl__im__175;
#line 734
label_1397:
;
#line 734
c_rt_lib0move(&___nl__im__173, c_rt_lib0priv_as(___nl__im__175, ___get_global_const(79)));
#line 735
c_rt_lib0move(&___nl__im__177, c_rt_lib0array_mk(0));
#line 735
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__173, ___get_global_const(976), ___nl__im__177));
#line 735
c_rt_lib0clear(&___nl__im__177);
#line 736
c_rt_lib0move(&___nl__im__178,___get_global_const(320));
#line 736
nparser_priv0eat(___ref___rec__0, ___nl__im__178);
#line 736
c_rt_lib0clear(&___nl__im__178);
#line 737
___nl__rec_ptr__180 = &((*___ref___rec__0).state0field);
#line 737
c_rt_lib0move(&___nl__im__179, ntokenizer0get_place(___nl__rec_ptr__180));
#line 737
___nl__rec_ptr__180 = NULL;
#line 738
label_1408:
;
#line 738
c_rt_lib0move(&___nl__im__182,___get_global_const(1098));
#line 738
___nl__bool__181 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__182);
#line 738
c_rt_lib0clear(&___nl__im__182);
#line 738
___nl__bool__181 = !___nl__bool__181;
#line 738
if(___nl__bool__181){ goto label_1525;}
#line 739
c_rt_lib0move(&___nl__im__184, nparser_priv0parse_variant_decl(___ref___rec__0));
#line 739
c_rt_lib0move(&___nl__im__183, c_rt_lib0hash_mk(1, ___get_global_const(543), ___nl__im__184));
#line 739
c_rt_lib0clear(&___nl__im__184);
#line 740
___nl__rec_ptr__187 = &((*___ref___rec__0).state0field);
#line 740
c_rt_lib0move(&___nl__im__186, ntokenizer0get_place_ws(___nl__rec_ptr__187));
#line 740
___nl__rec_ptr__187 = NULL;
#line 740
c_rt_lib0move(&___nl__im__185, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__179, ___get_global_const(1024), ___nl__im__186));
#line 740
c_rt_lib0clear(&___nl__im__186);
#line 740
c_rt_lib0copy(&___nl__im__188, ___nl__im__185);
#line 740
c_rt_lib0hash_set_value_dec(&___nl__im__183, ___get_global_const(221), ___nl__im__188);
#line 740
c_rt_lib0clear(&___nl__im__185);
#line 740
c_rt_lib0clear(&___nl__im__188);
#line 741
c_rt_lib0move(&___nl__im__190, nparser_priv0parse_block(___ref___rec__0));
#line 741
___nl__bool__189 = c_rt_lib0priv_is(___nl__im__190, ___get_global_const(79));
#line 741
if(___nl__bool__189){ goto label_1507;}
#line 741
c_rt_lib0clear(&___nl__im__1);
#line 741
c_rt_lib0clear(&___nl__im__3);
#line 741
//clear ___nl__bool__4;
#line 741
c_rt_lib0clear(&___nl__im__6);
#line 741
//clear ___nl__bool__7;
#line 741
c_rt_lib0clear(&___nl__im__8);
#line 741
c_rt_lib0clear(&___nl__im__9);
#line 741
//clear ___nl__bool__10;
#line 741
c_rt_lib0clear(&___nl__im__11);
#line 741
c_rt_lib0clear(&___nl__im__12);
#line 741
c_rt_lib0clear(&___nl__im__13);
#line 741
//clear ___nl__bool__16;
#line 741
c_rt_lib0clear(&___nl__im__18);
#line 741
c_rt_lib0clear(&___nl__im__19);
#line 741
//clear ___nl__bool__21;
#line 741
c_rt_lib0clear(&___nl__im__22);
#line 741
c_rt_lib0clear(&___nl__im__23);
#line 741
c_rt_lib0clear(&___nl__im__24);
#line 741
//clear ___nl__bool__28;
#line 741
c_rt_lib0clear(&___nl__im__29);
#line 741
c_rt_lib0clear(&___nl__im__30);
#line 741
c_rt_lib0clear(&___nl__im__42);
#line 741
//clear ___nl__bool__47;
#line 741
c_rt_lib0clear(&___nl__im__48);
#line 741
c_rt_lib0clear(&___nl__im__49);
#line 741
//clear ___nl__bool__50;
#line 741
c_rt_lib0clear(&___nl__im__51);
#line 741
c_rt_lib0clear(&___nl__im__52);
#line 741
c_rt_lib0clear(&___nl__im__54);
#line 741
//clear ___nl__bool__59;
#line 741
c_rt_lib0clear(&___nl__im__60);
#line 741
c_rt_lib0clear(&___nl__im__61);
#line 741
//clear ___nl__bool__62;
#line 741
c_rt_lib0clear(&___nl__im__63);
#line 741
c_rt_lib0clear(&___nl__im__64);
#line 741
c_rt_lib0clear(&___nl__im__66);
#line 741
//clear ___nl__bool__67;
#line 741
c_rt_lib0clear(&___nl__im__68);
#line 741
c_rt_lib0clear(&___nl__im__70);
#line 741
//clear ___nl__bool__87;
#line 741
c_rt_lib0clear(&___nl__im__88);
#line 741
c_rt_lib0clear(&___nl__im__89);
#line 741
//clear ___nl__bool__90;
#line 741
c_rt_lib0clear(&___nl__im__91);
#line 741
c_rt_lib0clear(&___nl__im__92);
#line 741
c_rt_lib0clear(&___nl__im__94);
#line 741
//clear ___nl__bool__97;
#line 741
c_rt_lib0clear(&___nl__im__98);
#line 741
c_rt_lib0clear(&___nl__im__99);
#line 741
//clear ___nl__bool__100;
#line 741
c_rt_lib0clear(&___nl__im__101);
#line 741
c_rt_lib0clear(&___nl__im__102);
#line 741
c_rt_lib0clear(&___nl__im__104);
#line 741
//clear ___nl__bool__143;
#line 741
c_rt_lib0clear(&___nl__im__144);
#line 741
c_rt_lib0clear(&___nl__im__145);
#line 741
c_rt_lib0clear(&___nl__im__148);
#line 741
//clear ___nl__bool__149;
#line 741
c_rt_lib0clear(&___nl__im__150);
#line 741
c_rt_lib0clear(&___nl__im__154);
#line 741
//clear ___nl__bool__156;
#line 741
c_rt_lib0clear(&___nl__im__157);
#line 741
c_rt_lib0clear(&___nl__im__158);
#line 741
//clear ___nl__int__159;
#line 741
//clear ___nl__int__160;
#line 741
//clear ___nl__int__161;
#line 741
//clear ___nl__bool__162;
#line 741
//clear ___nl__int__163;
#line 741
c_rt_lib0clear(&___nl__im__164);
#line 741
c_rt_lib0clear(&___nl__im__173);
#line 741
//clear ___nl__bool__174;
#line 741
c_rt_lib0clear(&___nl__im__175);
#line 741
c_rt_lib0clear(&___nl__im__176);
#line 741
c_rt_lib0clear(&___nl__im__179);
#line 741
//clear ___nl__bool__181;
#line 741
c_rt_lib0clear(&___nl__im__183);
#line 741
//clear ___nl__bool__189;
#line 741
return ___nl__im__190;
#line 741
label_1507:
;
#line 741
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__190, ___get_global_const(79)));
#line 741
c_rt_lib0hash_set_value_dec(&___nl__im__183, ___get_global_const(227), ___nl__im__191);
#line 742
c_rt_lib0move(&___nl__im__192,___get_global_const(976));
#line 742
c_rt_lib0move(&___nl__im__192, c_rt_lib0get_ref_hash(___nl__im__176, ___nl__im__192));
#line 742
c_rt_lib0delete(array0push(&___nl__im__192, ___nl__im__183));
#line 742
c_rt_lib0move(&___nl__string__193,___get_global_const(976));
#line 742
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__176, ___nl__string__193, ___nl__im__192));
#line 742
c_rt_lib0clear(&___nl__im__192);
#line 742
c_rt_lib0clear(&___nl__string__193);
#line 743
___nl__rec_ptr__194 = &((*___ref___rec__0).state0field);
#line 743
c_rt_lib0move(&___nl__im__179, ntokenizer0get_place(___nl__rec_ptr__194));
#line 743
___nl__rec_ptr__194 = NULL;
#line 743
c_rt_lib0clear(&___nl__im__183);
#line 743
//clear ___nl__bool__189;
#line 743
c_rt_lib0clear(&___nl__im__190);
#line 743
c_rt_lib0clear(&___nl__im__191);
#line 744
goto label_1408;
#line 744
label_1525:
;
#line 745
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(964), ___nl__im__176));
#line 746
goto label_2047;
#line 746
label_1528:
;
#line 746
c_rt_lib0move(&___nl__im__195,___get_global_const(247));
#line 746
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__195);
#line 746
c_rt_lib0clear(&___nl__im__195);
#line 746
___nl__bool__4 = !___nl__bool__4;
#line 746
if(___nl__bool__4){ goto label_1635;}
#line 747
c_rt_lib0move(&___nl__im__196, c_rt_lib0array_mk(0));
#line 748
c_rt_lib0move(&___nl__im__198,___get_global_const(446));
#line 748
___nl__bool__197 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__198);
#line 748
c_rt_lib0clear(&___nl__im__198);
#line 748
___nl__bool__197 = !___nl__bool__197;
#line 748
if(___nl__bool__197){ goto label_1629;}
#line 749
c_rt_lib0move(&___nl__im__200, nparser_priv0parse_expr_list(___ref___rec__0));
#line 749
___nl__bool__199 = c_rt_lib0priv_is(___nl__im__200, ___get_global_const(79));
#line 749
if(___nl__bool__199){ goto label_1626;}
#line 749
c_rt_lib0clear(&___nl__im__1);
#line 749
c_rt_lib0clear(&___nl__im__3);
#line 749
//clear ___nl__bool__4;
#line 749
c_rt_lib0clear(&___nl__im__6);
#line 749
//clear ___nl__bool__7;
#line 749
c_rt_lib0clear(&___nl__im__8);
#line 749
c_rt_lib0clear(&___nl__im__9);
#line 749
//clear ___nl__bool__10;
#line 749
c_rt_lib0clear(&___nl__im__11);
#line 749
c_rt_lib0clear(&___nl__im__12);
#line 749
c_rt_lib0clear(&___nl__im__13);
#line 749
//clear ___nl__bool__16;
#line 749
c_rt_lib0clear(&___nl__im__18);
#line 749
c_rt_lib0clear(&___nl__im__19);
#line 749
//clear ___nl__bool__21;
#line 749
c_rt_lib0clear(&___nl__im__22);
#line 749
c_rt_lib0clear(&___nl__im__23);
#line 749
c_rt_lib0clear(&___nl__im__24);
#line 749
//clear ___nl__bool__28;
#line 749
c_rt_lib0clear(&___nl__im__29);
#line 749
c_rt_lib0clear(&___nl__im__30);
#line 749
c_rt_lib0clear(&___nl__im__42);
#line 749
//clear ___nl__bool__47;
#line 749
c_rt_lib0clear(&___nl__im__48);
#line 749
c_rt_lib0clear(&___nl__im__49);
#line 749
//clear ___nl__bool__50;
#line 749
c_rt_lib0clear(&___nl__im__51);
#line 749
c_rt_lib0clear(&___nl__im__52);
#line 749
c_rt_lib0clear(&___nl__im__54);
#line 749
//clear ___nl__bool__59;
#line 749
c_rt_lib0clear(&___nl__im__60);
#line 749
c_rt_lib0clear(&___nl__im__61);
#line 749
//clear ___nl__bool__62;
#line 749
c_rt_lib0clear(&___nl__im__63);
#line 749
c_rt_lib0clear(&___nl__im__64);
#line 749
c_rt_lib0clear(&___nl__im__66);
#line 749
//clear ___nl__bool__67;
#line 749
c_rt_lib0clear(&___nl__im__68);
#line 749
c_rt_lib0clear(&___nl__im__70);
#line 749
//clear ___nl__bool__87;
#line 749
c_rt_lib0clear(&___nl__im__88);
#line 749
c_rt_lib0clear(&___nl__im__89);
#line 749
//clear ___nl__bool__90;
#line 749
c_rt_lib0clear(&___nl__im__91);
#line 749
c_rt_lib0clear(&___nl__im__92);
#line 749
c_rt_lib0clear(&___nl__im__94);
#line 749
//clear ___nl__bool__97;
#line 749
c_rt_lib0clear(&___nl__im__98);
#line 749
c_rt_lib0clear(&___nl__im__99);
#line 749
//clear ___nl__bool__100;
#line 749
c_rt_lib0clear(&___nl__im__101);
#line 749
c_rt_lib0clear(&___nl__im__102);
#line 749
c_rt_lib0clear(&___nl__im__104);
#line 749
//clear ___nl__bool__143;
#line 749
c_rt_lib0clear(&___nl__im__144);
#line 749
c_rt_lib0clear(&___nl__im__145);
#line 749
c_rt_lib0clear(&___nl__im__148);
#line 749
//clear ___nl__bool__149;
#line 749
c_rt_lib0clear(&___nl__im__150);
#line 749
c_rt_lib0clear(&___nl__im__154);
#line 749
//clear ___nl__bool__156;
#line 749
c_rt_lib0clear(&___nl__im__157);
#line 749
c_rt_lib0clear(&___nl__im__158);
#line 749
//clear ___nl__int__159;
#line 749
//clear ___nl__int__160;
#line 749
//clear ___nl__int__161;
#line 749
//clear ___nl__bool__162;
#line 749
//clear ___nl__int__163;
#line 749
c_rt_lib0clear(&___nl__im__164);
#line 749
c_rt_lib0clear(&___nl__im__173);
#line 749
//clear ___nl__bool__174;
#line 749
c_rt_lib0clear(&___nl__im__175);
#line 749
c_rt_lib0clear(&___nl__im__176);
#line 749
c_rt_lib0clear(&___nl__im__179);
#line 749
//clear ___nl__bool__181;
#line 749
c_rt_lib0clear(&___nl__im__183);
#line 749
//clear ___nl__bool__189;
#line 749
c_rt_lib0clear(&___nl__im__190);
#line 749
c_rt_lib0clear(&___nl__im__191);
#line 749
c_rt_lib0clear(&___nl__im__196);
#line 749
//clear ___nl__bool__197;
#line 749
//clear ___nl__bool__199;
#line 749
return ___nl__im__200;
#line 749
label_1626:
;
#line 749
c_rt_lib0move(&___nl__im__196, c_rt_lib0priv_as(___nl__im__200, ___get_global_const(79)));
#line 750
goto label_1629;
#line 750
label_1629:
;
#line 750
//clear ___nl__bool__197;
#line 750
//clear ___nl__bool__199;
#line 750
c_rt_lib0clear(&___nl__im__200);
#line 751
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__196));
#line 752
goto label_2047;
#line 752
label_1635:
;
#line 752
___nl__rec_ptr__201 = &((*___ref___rec__0).state0field);
#line 752
c_rt_lib0move(&___nl__im__202,___get_global_const(490));
#line 752
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__201, ___nl__im__202);
#line 752
___nl__rec_ptr__201 = NULL;
#line 752
c_rt_lib0clear(&___nl__im__202);
#line 752
___nl__bool__4 = !___nl__bool__4;
#line 752
if(___nl__bool__4){ goto label_1736;}
#line 753
c_rt_lib0move(&___nl__im__205, nparser_priv0parse_var_decl(___ref___rec__0));
#line 753
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__205, ___get_global_const(79));
#line 753
if(___nl__bool__204){ goto label_1729;}
#line 753
c_rt_lib0clear(&___nl__im__1);
#line 753
c_rt_lib0clear(&___nl__im__3);
#line 753
//clear ___nl__bool__4;
#line 753
c_rt_lib0clear(&___nl__im__6);
#line 753
//clear ___nl__bool__7;
#line 753
c_rt_lib0clear(&___nl__im__8);
#line 753
c_rt_lib0clear(&___nl__im__9);
#line 753
//clear ___nl__bool__10;
#line 753
c_rt_lib0clear(&___nl__im__11);
#line 753
c_rt_lib0clear(&___nl__im__12);
#line 753
c_rt_lib0clear(&___nl__im__13);
#line 753
//clear ___nl__bool__16;
#line 753
c_rt_lib0clear(&___nl__im__18);
#line 753
c_rt_lib0clear(&___nl__im__19);
#line 753
//clear ___nl__bool__21;
#line 753
c_rt_lib0clear(&___nl__im__22);
#line 753
c_rt_lib0clear(&___nl__im__23);
#line 753
c_rt_lib0clear(&___nl__im__24);
#line 753
//clear ___nl__bool__28;
#line 753
c_rt_lib0clear(&___nl__im__29);
#line 753
c_rt_lib0clear(&___nl__im__30);
#line 753
c_rt_lib0clear(&___nl__im__42);
#line 753
//clear ___nl__bool__47;
#line 753
c_rt_lib0clear(&___nl__im__48);
#line 753
c_rt_lib0clear(&___nl__im__49);
#line 753
//clear ___nl__bool__50;
#line 753
c_rt_lib0clear(&___nl__im__51);
#line 753
c_rt_lib0clear(&___nl__im__52);
#line 753
c_rt_lib0clear(&___nl__im__54);
#line 753
//clear ___nl__bool__59;
#line 753
c_rt_lib0clear(&___nl__im__60);
#line 753
c_rt_lib0clear(&___nl__im__61);
#line 753
//clear ___nl__bool__62;
#line 753
c_rt_lib0clear(&___nl__im__63);
#line 753
c_rt_lib0clear(&___nl__im__64);
#line 753
c_rt_lib0clear(&___nl__im__66);
#line 753
//clear ___nl__bool__67;
#line 753
c_rt_lib0clear(&___nl__im__68);
#line 753
c_rt_lib0clear(&___nl__im__70);
#line 753
//clear ___nl__bool__87;
#line 753
c_rt_lib0clear(&___nl__im__88);
#line 753
c_rt_lib0clear(&___nl__im__89);
#line 753
//clear ___nl__bool__90;
#line 753
c_rt_lib0clear(&___nl__im__91);
#line 753
c_rt_lib0clear(&___nl__im__92);
#line 753
c_rt_lib0clear(&___nl__im__94);
#line 753
//clear ___nl__bool__97;
#line 753
c_rt_lib0clear(&___nl__im__98);
#line 753
c_rt_lib0clear(&___nl__im__99);
#line 753
//clear ___nl__bool__100;
#line 753
c_rt_lib0clear(&___nl__im__101);
#line 753
c_rt_lib0clear(&___nl__im__102);
#line 753
c_rt_lib0clear(&___nl__im__104);
#line 753
//clear ___nl__bool__143;
#line 753
c_rt_lib0clear(&___nl__im__144);
#line 753
c_rt_lib0clear(&___nl__im__145);
#line 753
c_rt_lib0clear(&___nl__im__148);
#line 753
//clear ___nl__bool__149;
#line 753
c_rt_lib0clear(&___nl__im__150);
#line 753
c_rt_lib0clear(&___nl__im__154);
#line 753
//clear ___nl__bool__156;
#line 753
c_rt_lib0clear(&___nl__im__157);
#line 753
c_rt_lib0clear(&___nl__im__158);
#line 753
//clear ___nl__int__159;
#line 753
//clear ___nl__int__160;
#line 753
//clear ___nl__int__161;
#line 753
//clear ___nl__bool__162;
#line 753
//clear ___nl__int__163;
#line 753
c_rt_lib0clear(&___nl__im__164);
#line 753
c_rt_lib0clear(&___nl__im__173);
#line 753
//clear ___nl__bool__174;
#line 753
c_rt_lib0clear(&___nl__im__175);
#line 753
c_rt_lib0clear(&___nl__im__176);
#line 753
c_rt_lib0clear(&___nl__im__179);
#line 753
//clear ___nl__bool__181;
#line 753
c_rt_lib0clear(&___nl__im__183);
#line 753
//clear ___nl__bool__189;
#line 753
c_rt_lib0clear(&___nl__im__190);
#line 753
c_rt_lib0clear(&___nl__im__191);
#line 753
c_rt_lib0clear(&___nl__im__196);
#line 753
c_rt_lib0clear(&___nl__im__203);
#line 753
//clear ___nl__bool__204;
#line 753
return ___nl__im__205;
#line 753
label_1729:
;
#line 753
c_rt_lib0move(&___nl__im__203, c_rt_lib0priv_as(___nl__im__205, ___get_global_const(79)));
#line 754
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__203));
#line 755
c_rt_lib0move(&___nl__im__206,___get_global_const(435));
#line 755
nparser_priv0eat(___ref___rec__0, ___nl__im__206);
#line 755
c_rt_lib0clear(&___nl__im__206);
#line 756
goto label_2047;
#line 756
label_1736:
;
#line 756
___nl__rec_ptr__207 = &((*___ref___rec__0).state0field);
#line 756
c_rt_lib0move(&___nl__im__208,___get_global_const(966));
#line 756
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__207, ___nl__im__208);
#line 756
___nl__rec_ptr__207 = NULL;
#line 756
c_rt_lib0clear(&___nl__im__208);
#line 756
___nl__bool__4 = !___nl__bool__4;
#line 756
if(___nl__bool__4){ goto label_1840;}
#line 757
c_rt_lib0move(&___nl__im__209,___get_global_const(966));
#line 757
nparser_priv0eat(___ref___rec__0, ___nl__im__209);
#line 757
c_rt_lib0clear(&___nl__im__209);
#line 758
c_rt_lib0move(&___nl__im__212, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 758
___nl__bool__211 = c_rt_lib0priv_is(___nl__im__212, ___get_global_const(79));
#line 758
if(___nl__bool__211){ goto label_1836;}
#line 758
c_rt_lib0clear(&___nl__im__1);
#line 758
c_rt_lib0clear(&___nl__im__3);
#line 758
//clear ___nl__bool__4;
#line 758
c_rt_lib0clear(&___nl__im__6);
#line 758
//clear ___nl__bool__7;
#line 758
c_rt_lib0clear(&___nl__im__8);
#line 758
c_rt_lib0clear(&___nl__im__9);
#line 758
//clear ___nl__bool__10;
#line 758
c_rt_lib0clear(&___nl__im__11);
#line 758
c_rt_lib0clear(&___nl__im__12);
#line 758
c_rt_lib0clear(&___nl__im__13);
#line 758
//clear ___nl__bool__16;
#line 758
c_rt_lib0clear(&___nl__im__18);
#line 758
c_rt_lib0clear(&___nl__im__19);
#line 758
//clear ___nl__bool__21;
#line 758
c_rt_lib0clear(&___nl__im__22);
#line 758
c_rt_lib0clear(&___nl__im__23);
#line 758
c_rt_lib0clear(&___nl__im__24);
#line 758
//clear ___nl__bool__28;
#line 758
c_rt_lib0clear(&___nl__im__29);
#line 758
c_rt_lib0clear(&___nl__im__30);
#line 758
c_rt_lib0clear(&___nl__im__42);
#line 758
//clear ___nl__bool__47;
#line 758
c_rt_lib0clear(&___nl__im__48);
#line 758
c_rt_lib0clear(&___nl__im__49);
#line 758
//clear ___nl__bool__50;
#line 758
c_rt_lib0clear(&___nl__im__51);
#line 758
c_rt_lib0clear(&___nl__im__52);
#line 758
c_rt_lib0clear(&___nl__im__54);
#line 758
//clear ___nl__bool__59;
#line 758
c_rt_lib0clear(&___nl__im__60);
#line 758
c_rt_lib0clear(&___nl__im__61);
#line 758
//clear ___nl__bool__62;
#line 758
c_rt_lib0clear(&___nl__im__63);
#line 758
c_rt_lib0clear(&___nl__im__64);
#line 758
c_rt_lib0clear(&___nl__im__66);
#line 758
//clear ___nl__bool__67;
#line 758
c_rt_lib0clear(&___nl__im__68);
#line 758
c_rt_lib0clear(&___nl__im__70);
#line 758
//clear ___nl__bool__87;
#line 758
c_rt_lib0clear(&___nl__im__88);
#line 758
c_rt_lib0clear(&___nl__im__89);
#line 758
//clear ___nl__bool__90;
#line 758
c_rt_lib0clear(&___nl__im__91);
#line 758
c_rt_lib0clear(&___nl__im__92);
#line 758
c_rt_lib0clear(&___nl__im__94);
#line 758
//clear ___nl__bool__97;
#line 758
c_rt_lib0clear(&___nl__im__98);
#line 758
c_rt_lib0clear(&___nl__im__99);
#line 758
//clear ___nl__bool__100;
#line 758
c_rt_lib0clear(&___nl__im__101);
#line 758
c_rt_lib0clear(&___nl__im__102);
#line 758
c_rt_lib0clear(&___nl__im__104);
#line 758
//clear ___nl__bool__143;
#line 758
c_rt_lib0clear(&___nl__im__144);
#line 758
c_rt_lib0clear(&___nl__im__145);
#line 758
c_rt_lib0clear(&___nl__im__148);
#line 758
//clear ___nl__bool__149;
#line 758
c_rt_lib0clear(&___nl__im__150);
#line 758
c_rt_lib0clear(&___nl__im__154);
#line 758
//clear ___nl__bool__156;
#line 758
c_rt_lib0clear(&___nl__im__157);
#line 758
c_rt_lib0clear(&___nl__im__158);
#line 758
//clear ___nl__int__159;
#line 758
//clear ___nl__int__160;
#line 758
//clear ___nl__int__161;
#line 758
//clear ___nl__bool__162;
#line 758
//clear ___nl__int__163;
#line 758
c_rt_lib0clear(&___nl__im__164);
#line 758
c_rt_lib0clear(&___nl__im__173);
#line 758
//clear ___nl__bool__174;
#line 758
c_rt_lib0clear(&___nl__im__175);
#line 758
c_rt_lib0clear(&___nl__im__176);
#line 758
c_rt_lib0clear(&___nl__im__179);
#line 758
//clear ___nl__bool__181;
#line 758
c_rt_lib0clear(&___nl__im__183);
#line 758
//clear ___nl__bool__189;
#line 758
c_rt_lib0clear(&___nl__im__190);
#line 758
c_rt_lib0clear(&___nl__im__191);
#line 758
c_rt_lib0clear(&___nl__im__196);
#line 758
c_rt_lib0clear(&___nl__im__203);
#line 758
//clear ___nl__bool__204;
#line 758
c_rt_lib0clear(&___nl__im__205);
#line 758
c_rt_lib0clear(&___nl__im__210);
#line 758
//clear ___nl__bool__211;
#line 758
return ___nl__im__212;
#line 758
label_1836:
;
#line 758
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__212, ___get_global_const(79)));
#line 759
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(966), ___nl__im__210));
#line 760
goto label_2047;
#line 760
label_1840:
;
#line 760
___nl__rec_ptr__213 = &((*___ref___rec__0).state0field);
#line 760
c_rt_lib0move(&___nl__im__214,___get_global_const(177));
#line 760
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__213, ___nl__im__214);
#line 760
___nl__rec_ptr__213 = NULL;
#line 760
c_rt_lib0clear(&___nl__im__214);
#line 760
___nl__bool__4 = !___nl__bool__4;
#line 760
if(___nl__bool__4){ goto label_1947;}
#line 761
c_rt_lib0move(&___nl__im__215,___get_global_const(177));
#line 761
nparser_priv0eat(___ref___rec__0, ___nl__im__215);
#line 761
c_rt_lib0clear(&___nl__im__215);
#line 762
c_rt_lib0move(&___nl__im__218, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 762
___nl__bool__217 = c_rt_lib0priv_is(___nl__im__218, ___get_global_const(79));
#line 762
if(___nl__bool__217){ goto label_1943;}
#line 762
c_rt_lib0clear(&___nl__im__1);
#line 762
c_rt_lib0clear(&___nl__im__3);
#line 762
//clear ___nl__bool__4;
#line 762
c_rt_lib0clear(&___nl__im__6);
#line 762
//clear ___nl__bool__7;
#line 762
c_rt_lib0clear(&___nl__im__8);
#line 762
c_rt_lib0clear(&___nl__im__9);
#line 762
//clear ___nl__bool__10;
#line 762
c_rt_lib0clear(&___nl__im__11);
#line 762
c_rt_lib0clear(&___nl__im__12);
#line 762
c_rt_lib0clear(&___nl__im__13);
#line 762
//clear ___nl__bool__16;
#line 762
c_rt_lib0clear(&___nl__im__18);
#line 762
c_rt_lib0clear(&___nl__im__19);
#line 762
//clear ___nl__bool__21;
#line 762
c_rt_lib0clear(&___nl__im__22);
#line 762
c_rt_lib0clear(&___nl__im__23);
#line 762
c_rt_lib0clear(&___nl__im__24);
#line 762
//clear ___nl__bool__28;
#line 762
c_rt_lib0clear(&___nl__im__29);
#line 762
c_rt_lib0clear(&___nl__im__30);
#line 762
c_rt_lib0clear(&___nl__im__42);
#line 762
//clear ___nl__bool__47;
#line 762
c_rt_lib0clear(&___nl__im__48);
#line 762
c_rt_lib0clear(&___nl__im__49);
#line 762
//clear ___nl__bool__50;
#line 762
c_rt_lib0clear(&___nl__im__51);
#line 762
c_rt_lib0clear(&___nl__im__52);
#line 762
c_rt_lib0clear(&___nl__im__54);
#line 762
//clear ___nl__bool__59;
#line 762
c_rt_lib0clear(&___nl__im__60);
#line 762
c_rt_lib0clear(&___nl__im__61);
#line 762
//clear ___nl__bool__62;
#line 762
c_rt_lib0clear(&___nl__im__63);
#line 762
c_rt_lib0clear(&___nl__im__64);
#line 762
c_rt_lib0clear(&___nl__im__66);
#line 762
//clear ___nl__bool__67;
#line 762
c_rt_lib0clear(&___nl__im__68);
#line 762
c_rt_lib0clear(&___nl__im__70);
#line 762
//clear ___nl__bool__87;
#line 762
c_rt_lib0clear(&___nl__im__88);
#line 762
c_rt_lib0clear(&___nl__im__89);
#line 762
//clear ___nl__bool__90;
#line 762
c_rt_lib0clear(&___nl__im__91);
#line 762
c_rt_lib0clear(&___nl__im__92);
#line 762
c_rt_lib0clear(&___nl__im__94);
#line 762
//clear ___nl__bool__97;
#line 762
c_rt_lib0clear(&___nl__im__98);
#line 762
c_rt_lib0clear(&___nl__im__99);
#line 762
//clear ___nl__bool__100;
#line 762
c_rt_lib0clear(&___nl__im__101);
#line 762
c_rt_lib0clear(&___nl__im__102);
#line 762
c_rt_lib0clear(&___nl__im__104);
#line 762
//clear ___nl__bool__143;
#line 762
c_rt_lib0clear(&___nl__im__144);
#line 762
c_rt_lib0clear(&___nl__im__145);
#line 762
c_rt_lib0clear(&___nl__im__148);
#line 762
//clear ___nl__bool__149;
#line 762
c_rt_lib0clear(&___nl__im__150);
#line 762
c_rt_lib0clear(&___nl__im__154);
#line 762
//clear ___nl__bool__156;
#line 762
c_rt_lib0clear(&___nl__im__157);
#line 762
c_rt_lib0clear(&___nl__im__158);
#line 762
//clear ___nl__int__159;
#line 762
//clear ___nl__int__160;
#line 762
//clear ___nl__int__161;
#line 762
//clear ___nl__bool__162;
#line 762
//clear ___nl__int__163;
#line 762
c_rt_lib0clear(&___nl__im__164);
#line 762
c_rt_lib0clear(&___nl__im__173);
#line 762
//clear ___nl__bool__174;
#line 762
c_rt_lib0clear(&___nl__im__175);
#line 762
c_rt_lib0clear(&___nl__im__176);
#line 762
c_rt_lib0clear(&___nl__im__179);
#line 762
//clear ___nl__bool__181;
#line 762
c_rt_lib0clear(&___nl__im__183);
#line 762
//clear ___nl__bool__189;
#line 762
c_rt_lib0clear(&___nl__im__190);
#line 762
c_rt_lib0clear(&___nl__im__191);
#line 762
c_rt_lib0clear(&___nl__im__196);
#line 762
c_rt_lib0clear(&___nl__im__203);
#line 762
//clear ___nl__bool__204;
#line 762
c_rt_lib0clear(&___nl__im__205);
#line 762
c_rt_lib0clear(&___nl__im__210);
#line 762
//clear ___nl__bool__211;
#line 762
c_rt_lib0clear(&___nl__im__212);
#line 762
c_rt_lib0clear(&___nl__im__216);
#line 762
//clear ___nl__bool__217;
#line 762
return ___nl__im__218;
#line 762
label_1943:
;
#line 762
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__218, ___get_global_const(79)));
#line 763
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(177), ___nl__im__216));
#line 764
goto label_2047;
#line 764
label_1947:
;
#line 765
c_rt_lib0move(&___nl__im__221, nparser_priv0parse_expr(___ref___rec__0));
#line 765
___nl__bool__220 = c_rt_lib0priv_is(___nl__im__221, ___get_global_const(79));
#line 765
if(___nl__bool__220){ goto label_2043;}
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
//clear ___nl__bool__87;
#line 765
c_rt_lib0clear(&___nl__im__88);
#line 765
c_rt_lib0clear(&___nl__im__89);
#line 765
//clear ___nl__bool__90;
#line 765
c_rt_lib0clear(&___nl__im__91);
#line 765
c_rt_lib0clear(&___nl__im__92);
#line 765
c_rt_lib0clear(&___nl__im__94);
#line 765
//clear ___nl__bool__97;
#line 765
c_rt_lib0clear(&___nl__im__98);
#line 765
c_rt_lib0clear(&___nl__im__99);
#line 765
//clear ___nl__bool__100;
#line 765
c_rt_lib0clear(&___nl__im__101);
#line 765
c_rt_lib0clear(&___nl__im__102);
#line 765
c_rt_lib0clear(&___nl__im__104);
#line 765
//clear ___nl__bool__143;
#line 765
c_rt_lib0clear(&___nl__im__144);
#line 765
c_rt_lib0clear(&___nl__im__145);
#line 765
c_rt_lib0clear(&___nl__im__148);
#line 765
//clear ___nl__bool__149;
#line 765
c_rt_lib0clear(&___nl__im__150);
#line 765
c_rt_lib0clear(&___nl__im__154);
#line 765
//clear ___nl__bool__156;
#line 765
c_rt_lib0clear(&___nl__im__157);
#line 765
c_rt_lib0clear(&___nl__im__158);
#line 765
//clear ___nl__int__159;
#line 765
//clear ___nl__int__160;
#line 765
//clear ___nl__int__161;
#line 765
//clear ___nl__bool__162;
#line 765
//clear ___nl__int__163;
#line 765
c_rt_lib0clear(&___nl__im__164);
#line 765
c_rt_lib0clear(&___nl__im__173);
#line 765
//clear ___nl__bool__174;
#line 765
c_rt_lib0clear(&___nl__im__175);
#line 765
c_rt_lib0clear(&___nl__im__176);
#line 765
c_rt_lib0clear(&___nl__im__179);
#line 765
//clear ___nl__bool__181;
#line 765
c_rt_lib0clear(&___nl__im__183);
#line 765
//clear ___nl__bool__189;
#line 765
c_rt_lib0clear(&___nl__im__190);
#line 765
c_rt_lib0clear(&___nl__im__191);
#line 765
c_rt_lib0clear(&___nl__im__196);
#line 765
c_rt_lib0clear(&___nl__im__203);
#line 765
//clear ___nl__bool__204;
#line 765
c_rt_lib0clear(&___nl__im__205);
#line 765
c_rt_lib0clear(&___nl__im__210);
#line 765
//clear ___nl__bool__211;
#line 765
c_rt_lib0clear(&___nl__im__212);
#line 765
c_rt_lib0clear(&___nl__im__216);
#line 765
//clear ___nl__bool__217;
#line 765
c_rt_lib0clear(&___nl__im__218);
#line 765
c_rt_lib0clear(&___nl__im__219);
#line 765
//clear ___nl__bool__220;
#line 765
return ___nl__im__221;
#line 765
label_2043:
;
#line 765
c_rt_lib0move(&___nl__im__219, c_rt_lib0priv_as(___nl__im__221, ___get_global_const(79)));
#line 766
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__219));
#line 767
goto label_2047;
#line 767
label_2047:
;
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
//clear ___nl__bool__87;
#line 767
c_rt_lib0clear(&___nl__im__88);
#line 767
c_rt_lib0clear(&___nl__im__89);
#line 767
//clear ___nl__bool__90;
#line 767
c_rt_lib0clear(&___nl__im__91);
#line 767
c_rt_lib0clear(&___nl__im__92);
#line 767
c_rt_lib0clear(&___nl__im__94);
#line 767
//clear ___nl__bool__97;
#line 767
c_rt_lib0clear(&___nl__im__98);
#line 767
c_rt_lib0clear(&___nl__im__99);
#line 767
//clear ___nl__bool__100;
#line 767
c_rt_lib0clear(&___nl__im__101);
#line 767
c_rt_lib0clear(&___nl__im__102);
#line 767
c_rt_lib0clear(&___nl__im__104);
#line 767
//clear ___nl__bool__143;
#line 767
c_rt_lib0clear(&___nl__im__144);
#line 767
c_rt_lib0clear(&___nl__im__145);
#line 767
c_rt_lib0clear(&___nl__im__148);
#line 767
//clear ___nl__bool__149;
#line 767
c_rt_lib0clear(&___nl__im__150);
#line 767
c_rt_lib0clear(&___nl__im__154);
#line 767
//clear ___nl__bool__156;
#line 767
c_rt_lib0clear(&___nl__im__157);
#line 767
c_rt_lib0clear(&___nl__im__158);
#line 767
//clear ___nl__int__159;
#line 767
//clear ___nl__int__160;
#line 767
//clear ___nl__int__161;
#line 767
//clear ___nl__bool__162;
#line 767
//clear ___nl__int__163;
#line 767
c_rt_lib0clear(&___nl__im__164);
#line 767
c_rt_lib0clear(&___nl__im__173);
#line 767
//clear ___nl__bool__174;
#line 767
c_rt_lib0clear(&___nl__im__175);
#line 767
c_rt_lib0clear(&___nl__im__176);
#line 767
c_rt_lib0clear(&___nl__im__179);
#line 767
//clear ___nl__bool__181;
#line 767
c_rt_lib0clear(&___nl__im__183);
#line 767
//clear ___nl__bool__189;
#line 767
c_rt_lib0clear(&___nl__im__190);
#line 767
c_rt_lib0clear(&___nl__im__191);
#line 767
c_rt_lib0clear(&___nl__im__196);
#line 767
c_rt_lib0clear(&___nl__im__203);
#line 767
//clear ___nl__bool__204;
#line 767
c_rt_lib0clear(&___nl__im__205);
#line 767
c_rt_lib0clear(&___nl__im__210);
#line 767
//clear ___nl__bool__211;
#line 767
c_rt_lib0clear(&___nl__im__212);
#line 767
c_rt_lib0clear(&___nl__im__216);
#line 767
//clear ___nl__bool__217;
#line 767
c_rt_lib0clear(&___nl__im__218);
#line 767
c_rt_lib0clear(&___nl__im__219);
#line 767
//clear ___nl__bool__220;
#line 767
c_rt_lib0clear(&___nl__im__221);
#line 768
___nl__bool__222 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(962));
#line 768
if(___nl__bool__222){ goto label_2141;}
#line 768
___nl__bool__222 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(963));
#line 768
label_2141:
;
#line 768
if(___nl__bool__222){ goto label_2144;}
#line 768
___nl__bool__222 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(219));
#line 768
label_2144:
;
#line 768
if(___nl__bool__222){ goto label_2147;}
#line 768
___nl__bool__222 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(246));
#line 768
label_2147:
;
#line 768
if(___nl__bool__222){ goto label_2150;}
#line 768
___nl__bool__222 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(247));
#line 768
label_2150:
;
#line 768
if(___nl__bool__222){ goto label_2153;}
#line 768
___nl__bool__222 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(177));
#line 768
label_2153:
;
#line 768
if(___nl__bool__222){ goto label_2156;}
#line 768
___nl__bool__222 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(966));
#line 768
label_2156:
;
#line 768
___nl__bool__222 = !___nl__bool__222;
#line 768
if(___nl__bool__222){ goto label_2455;}
#line 770
___nl__rec_ptr__225 = &((*___ref___rec__0).state0field);
#line 770
c_rt_lib0move(&___nl__im__224, ntokenizer0get_place_ws(___nl__rec_ptr__225));
#line 770
___nl__rec_ptr__225 = NULL;
#line 770
c_rt_lib0move(&___nl__im__223, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__1, ___get_global_const(1024), ___nl__im__224));
#line 770
c_rt_lib0clear(&___nl__im__224);
#line 771
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__223, ___get_global_const(227), ___nl__im__3));
#line 771
c_rt_lib0move(&___nl__im__226, c_rt_lib0hash_mk(1, ___get_global_const(227), ___nl__im__227));
#line 771
c_rt_lib0clear(&___nl__im__227);
#line 772
c_rt_lib0move(&___nl__im__229,___get_global_const(956));
#line 772
___nl__bool__228 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__229);
#line 772
c_rt_lib0clear(&___nl__im__229);
#line 772
___nl__bool__228 = !___nl__bool__228;
#line 772
if(___nl__bool__228){ goto label_2204;}
#line 773
___nl__bool__230 = true;
#line 773
c_rt_lib0move(&___nl__im__231, c_rt_lib0bool_to_nl_native(___nl__bool__230));
#line 773
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(1036), ___nl__im__231);
#line 773
//clear ___nl__bool__230;
#line 773
c_rt_lib0clear(&___nl__im__231);
#line 774
c_rt_lib0move(&___nl__im__232, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 774
c_rt_lib0copy(&___nl__im__233, ___nl__im__232);
#line 774
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(362), ___nl__im__233);
#line 774
c_rt_lib0clear(&___nl__im__232);
#line 774
c_rt_lib0clear(&___nl__im__233);
#line 775
c_rt_lib0move(&___nl__im__234,___get_global_const(446));
#line 775
nparser_priv0eat(___ref___rec__0, ___nl__im__234);
#line 775
c_rt_lib0clear(&___nl__im__234);
#line 776
c_rt_lib0move(&___nl__im__236, nparser_priv0parse_expr(___ref___rec__0));
#line 776
___nl__bool__235 = c_rt_lib0priv_is(___nl__im__236, ___get_global_const(79));
#line 776
if(___nl__bool__235){ goto label_2196;}
#line 776
c_rt_lib0clear(&___nl__im__1);
#line 776
c_rt_lib0clear(&___nl__im__3);
#line 776
//clear ___nl__bool__222;
#line 776
c_rt_lib0clear(&___nl__im__223);
#line 776
c_rt_lib0clear(&___nl__im__226);
#line 776
//clear ___nl__bool__228;
#line 776
//clear ___nl__bool__235;
#line 776
return ___nl__im__236;
#line 776
label_2196:
;
#line 776
c_rt_lib0move(&___nl__im__237, c_rt_lib0priv_as(___nl__im__236, ___get_global_const(79)));
#line 776
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(38), ___nl__im__237);
#line 777
c_rt_lib0move(&___nl__im__238,___get_global_const(320));
#line 777
nparser_priv0eat(___ref___rec__0, ___nl__im__238);
#line 777
c_rt_lib0clear(&___nl__im__238);
#line 778
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(956), ___nl__im__226));
#line 779
goto label_2431;
#line 779
label_2204:
;
#line 779
c_rt_lib0move(&___nl__im__239,___get_global_const(958));
#line 779
___nl__bool__228 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__239);
#line 779
c_rt_lib0clear(&___nl__im__239);
#line 779
___nl__bool__228 = !___nl__bool__228;
#line 779
if(___nl__bool__228){ goto label_2245;}
#line 780
___nl__bool__240 = true;
#line 780
c_rt_lib0move(&___nl__im__241, c_rt_lib0bool_to_nl_native(___nl__bool__240));
#line 780
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(1036), ___nl__im__241);
#line 780
//clear ___nl__bool__240;
#line 780
c_rt_lib0clear(&___nl__im__241);
#line 781
c_rt_lib0move(&___nl__im__242, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 781
c_rt_lib0copy(&___nl__im__243, ___nl__im__242);
#line 781
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(362), ___nl__im__243);
#line 781
c_rt_lib0clear(&___nl__im__242);
#line 781
c_rt_lib0clear(&___nl__im__243);
#line 782
c_rt_lib0move(&___nl__im__244,___get_global_const(446));
#line 782
nparser_priv0eat(___ref___rec__0, ___nl__im__244);
#line 782
c_rt_lib0clear(&___nl__im__244);
#line 783
c_rt_lib0move(&___nl__im__246, nparser_priv0parse_expr(___ref___rec__0));
#line 783
___nl__bool__245 = c_rt_lib0priv_is(___nl__im__246, ___get_global_const(79));
#line 783
if(___nl__bool__245){ goto label_2237;}
#line 783
c_rt_lib0clear(&___nl__im__1);
#line 783
c_rt_lib0clear(&___nl__im__3);
#line 783
//clear ___nl__bool__222;
#line 783
c_rt_lib0clear(&___nl__im__223);
#line 783
c_rt_lib0clear(&___nl__im__226);
#line 783
//clear ___nl__bool__228;
#line 783
//clear ___nl__bool__235;
#line 783
c_rt_lib0clear(&___nl__im__236);
#line 783
c_rt_lib0clear(&___nl__im__237);
#line 783
//clear ___nl__bool__245;
#line 783
return ___nl__im__246;
#line 783
label_2237:
;
#line 783
c_rt_lib0move(&___nl__im__247, c_rt_lib0priv_as(___nl__im__246, ___get_global_const(79)));
#line 783
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(973), ___nl__im__247);
#line 784
c_rt_lib0move(&___nl__im__248,___get_global_const(320));
#line 784
nparser_priv0eat(___ref___rec__0, ___nl__im__248);
#line 784
c_rt_lib0clear(&___nl__im__248);
#line 785
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(958), ___nl__im__226));
#line 786
goto label_2431;
#line 786
label_2245:
;
#line 786
c_rt_lib0move(&___nl__im__249,___get_global_const(957));
#line 786
___nl__bool__228 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__249);
#line 786
c_rt_lib0clear(&___nl__im__249);
#line 786
___nl__bool__228 = !___nl__bool__228;
#line 786
if(___nl__bool__228){ goto label_2324;}
#line 787
___nl__bool__250 = true;
#line 787
c_rt_lib0move(&___nl__im__251, c_rt_lib0bool_to_nl_native(___nl__bool__250));
#line 787
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(1036), ___nl__im__251);
#line 787
//clear ___nl__bool__250;
#line 787
c_rt_lib0clear(&___nl__im__251);
#line 788
c_rt_lib0move(&___nl__im__252, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 788
c_rt_lib0copy(&___nl__im__253, ___nl__im__252);
#line 788
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(397), ___nl__im__253);
#line 788
c_rt_lib0clear(&___nl__im__252);
#line 788
c_rt_lib0clear(&___nl__im__253);
#line 789
c_rt_lib0move(&___nl__im__254,___get_global_const(312));
#line 789
nparser_priv0eat(___ref___rec__0, ___nl__im__254);
#line 789
c_rt_lib0clear(&___nl__im__254);
#line 790
___nl__rec_ptr__256 = &((*___ref___rec__0).state0field);
#line 790
c_rt_lib0move(&___nl__im__257,___get_global_const(490));
#line 790
___nl__bool__255 = ntokenizer0next_is(___nl__rec_ptr__256, ___nl__im__257);
#line 790
___nl__rec_ptr__256 = NULL;
#line 790
c_rt_lib0clear(&___nl__im__257);
#line 790
___nl__bool__255 = !___nl__bool__255;
#line 790
if(___nl__bool__255){ goto label_2282;}
#line 791
c_rt_lib0move(&___nl__im__258, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 791
c_rt_lib0copy(&___nl__im__259, ___nl__im__258);
#line 791
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(224), ___nl__im__259);
#line 791
c_rt_lib0clear(&___nl__im__258);
#line 791
c_rt_lib0clear(&___nl__im__259);
#line 792
c_rt_lib0move(&___nl__im__260, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 792
c_rt_lib0copy(&___nl__im__261, ___nl__im__260);
#line 792
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(972), ___nl__im__261);
#line 792
c_rt_lib0clear(&___nl__im__260);
#line 792
c_rt_lib0clear(&___nl__im__261);
#line 793
goto label_2294;
#line 793
label_2282:
;
#line 794
c_rt_lib0move(&___nl__im__262, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 794
c_rt_lib0copy(&___nl__im__263, ___nl__im__262);
#line 794
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(224), ___nl__im__263);
#line 794
c_rt_lib0clear(&___nl__im__262);
#line 794
c_rt_lib0clear(&___nl__im__263);
#line 795
c_rt_lib0move(&___nl__im__264, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 795
c_rt_lib0copy(&___nl__im__265, ___nl__im__264);
#line 795
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(972), ___nl__im__265);
#line 795
c_rt_lib0clear(&___nl__im__264);
#line 795
c_rt_lib0clear(&___nl__im__265);
#line 796
goto label_2294;
#line 796
label_2294:
;
#line 796
//clear ___nl__bool__255;
#line 797
c_rt_lib0move(&___nl__im__266,___get_global_const(446));
#line 797
nparser_priv0eat(___ref___rec__0, ___nl__im__266);
#line 797
c_rt_lib0clear(&___nl__im__266);
#line 798
c_rt_lib0move(&___nl__im__268, nparser_priv0parse_expr(___ref___rec__0));
#line 798
___nl__bool__267 = c_rt_lib0priv_is(___nl__im__268, ___get_global_const(79));
#line 798
if(___nl__bool__267){ goto label_2316;}
#line 798
c_rt_lib0clear(&___nl__im__1);
#line 798
c_rt_lib0clear(&___nl__im__3);
#line 798
//clear ___nl__bool__222;
#line 798
c_rt_lib0clear(&___nl__im__223);
#line 798
c_rt_lib0clear(&___nl__im__226);
#line 798
//clear ___nl__bool__228;
#line 798
//clear ___nl__bool__235;
#line 798
c_rt_lib0clear(&___nl__im__236);
#line 798
c_rt_lib0clear(&___nl__im__237);
#line 798
//clear ___nl__bool__245;
#line 798
c_rt_lib0clear(&___nl__im__246);
#line 798
c_rt_lib0clear(&___nl__im__247);
#line 798
//clear ___nl__bool__267;
#line 798
return ___nl__im__268;
#line 798
label_2316:
;
#line 798
c_rt_lib0move(&___nl__im__269, c_rt_lib0priv_as(___nl__im__268, ___get_global_const(79)));
#line 798
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(129), ___nl__im__269);
#line 799
c_rt_lib0move(&___nl__im__270,___get_global_const(320));
#line 799
nparser_priv0eat(___ref___rec__0, ___nl__im__270);
#line 799
c_rt_lib0clear(&___nl__im__270);
#line 800
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(957), ___nl__im__226));
#line 801
goto label_2431;
#line 801
label_2324:
;
#line 801
c_rt_lib0move(&___nl__im__271,___get_global_const(954));
#line 801
___nl__bool__228 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__271);
#line 801
c_rt_lib0clear(&___nl__im__271);
#line 801
___nl__bool__228 = !___nl__bool__228;
#line 801
if(___nl__bool__228){ goto label_2355;}
#line 802
c_rt_lib0move(&___nl__im__273, nparser_priv0parse_expr(___ref___rec__0));
#line 802
___nl__bool__272 = c_rt_lib0priv_is(___nl__im__273, ___get_global_const(79));
#line 802
if(___nl__bool__272){ goto label_2350;}
#line 802
c_rt_lib0clear(&___nl__im__1);
#line 802
c_rt_lib0clear(&___nl__im__3);
#line 802
//clear ___nl__bool__222;
#line 802
c_rt_lib0clear(&___nl__im__223);
#line 802
c_rt_lib0clear(&___nl__im__226);
#line 802
//clear ___nl__bool__228;
#line 802
//clear ___nl__bool__235;
#line 802
c_rt_lib0clear(&___nl__im__236);
#line 802
c_rt_lib0clear(&___nl__im__237);
#line 802
//clear ___nl__bool__245;
#line 802
c_rt_lib0clear(&___nl__im__246);
#line 802
c_rt_lib0clear(&___nl__im__247);
#line 802
//clear ___nl__bool__267;
#line 802
c_rt_lib0clear(&___nl__im__268);
#line 802
c_rt_lib0clear(&___nl__im__269);
#line 802
//clear ___nl__bool__272;
#line 802
return ___nl__im__273;
#line 802
label_2350:
;
#line 802
c_rt_lib0move(&___nl__im__274, c_rt_lib0priv_as(___nl__im__273, ___get_global_const(79)));
#line 802
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(968), ___nl__im__274);
#line 803
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(960), ___nl__im__226));
#line 804
goto label_2431;
#line 804
label_2355:
;
#line 804
c_rt_lib0move(&___nl__im__275,___get_global_const(1070));
#line 804
___nl__bool__228 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__275);
#line 804
c_rt_lib0clear(&___nl__im__275);
#line 804
___nl__bool__228 = !___nl__bool__228;
#line 804
if(___nl__bool__228){ goto label_2389;}
#line 805
c_rt_lib0move(&___nl__im__277, nparser_priv0parse_expr(___ref___rec__0));
#line 805
___nl__bool__276 = c_rt_lib0priv_is(___nl__im__277, ___get_global_const(79));
#line 805
if(___nl__bool__276){ goto label_2384;}
#line 805
c_rt_lib0clear(&___nl__im__1);
#line 805
c_rt_lib0clear(&___nl__im__3);
#line 805
//clear ___nl__bool__222;
#line 805
c_rt_lib0clear(&___nl__im__223);
#line 805
c_rt_lib0clear(&___nl__im__226);
#line 805
//clear ___nl__bool__228;
#line 805
//clear ___nl__bool__235;
#line 805
c_rt_lib0clear(&___nl__im__236);
#line 805
c_rt_lib0clear(&___nl__im__237);
#line 805
//clear ___nl__bool__245;
#line 805
c_rt_lib0clear(&___nl__im__246);
#line 805
c_rt_lib0clear(&___nl__im__247);
#line 805
//clear ___nl__bool__267;
#line 805
c_rt_lib0clear(&___nl__im__268);
#line 805
c_rt_lib0clear(&___nl__im__269);
#line 805
//clear ___nl__bool__272;
#line 805
c_rt_lib0clear(&___nl__im__273);
#line 805
c_rt_lib0clear(&___nl__im__274);
#line 805
//clear ___nl__bool__276;
#line 805
return ___nl__im__277;
#line 805
label_2384:
;
#line 805
c_rt_lib0move(&___nl__im__278, c_rt_lib0priv_as(___nl__im__277, ___get_global_const(79)));
#line 805
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(968), ___nl__im__278);
#line 806
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(961), ___nl__im__226));
#line 807
goto label_2431;
#line 807
label_2389:
;
#line 807
c_rt_lib0move(&___nl__im__279,___get_global_const(959));
#line 807
___nl__bool__228 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__279);
#line 807
c_rt_lib0clear(&___nl__im__279);
#line 807
___nl__bool__228 = !___nl__bool__228;
#line 807
if(___nl__bool__228){ goto label_2431;}
#line 808
___nl__bool__280 = true;
#line 808
c_rt_lib0move(&___nl__im__281, c_rt_lib0bool_to_nl_native(___nl__bool__280));
#line 808
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(1036), ___nl__im__281);
#line 808
//clear ___nl__bool__280;
#line 808
c_rt_lib0clear(&___nl__im__281);
#line 809
c_rt_lib0move(&___nl__im__283, nparser_priv0parse_expr(___ref___rec__0));
#line 809
___nl__bool__282 = c_rt_lib0priv_is(___nl__im__283, ___get_global_const(79));
#line 809
if(___nl__bool__282){ goto label_2426;}
#line 809
c_rt_lib0clear(&___nl__im__1);
#line 809
c_rt_lib0clear(&___nl__im__3);
#line 809
//clear ___nl__bool__222;
#line 809
c_rt_lib0clear(&___nl__im__223);
#line 809
c_rt_lib0clear(&___nl__im__226);
#line 809
//clear ___nl__bool__228;
#line 809
//clear ___nl__bool__235;
#line 809
c_rt_lib0clear(&___nl__im__236);
#line 809
c_rt_lib0clear(&___nl__im__237);
#line 809
//clear ___nl__bool__245;
#line 809
c_rt_lib0clear(&___nl__im__246);
#line 809
c_rt_lib0clear(&___nl__im__247);
#line 809
//clear ___nl__bool__267;
#line 809
c_rt_lib0clear(&___nl__im__268);
#line 809
c_rt_lib0clear(&___nl__im__269);
#line 809
//clear ___nl__bool__272;
#line 809
c_rt_lib0clear(&___nl__im__273);
#line 809
c_rt_lib0clear(&___nl__im__274);
#line 809
//clear ___nl__bool__276;
#line 809
c_rt_lib0clear(&___nl__im__277);
#line 809
c_rt_lib0clear(&___nl__im__278);
#line 809
//clear ___nl__bool__282;
#line 809
return ___nl__im__283;
#line 809
label_2426:
;
#line 809
c_rt_lib0move(&___nl__im__284, c_rt_lib0priv_as(___nl__im__283, ___get_global_const(79)));
#line 809
c_rt_lib0hash_set_value_dec(&___nl__im__226, ___get_global_const(968), ___nl__im__284);
#line 810
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(959), ___nl__im__226));
#line 811
goto label_2431;
#line 811
label_2431:
;
#line 811
//clear ___nl__bool__228;
#line 811
//clear ___nl__bool__235;
#line 811
c_rt_lib0clear(&___nl__im__236);
#line 811
c_rt_lib0clear(&___nl__im__237);
#line 811
//clear ___nl__bool__245;
#line 811
c_rt_lib0clear(&___nl__im__246);
#line 811
c_rt_lib0clear(&___nl__im__247);
#line 811
//clear ___nl__bool__267;
#line 811
c_rt_lib0clear(&___nl__im__268);
#line 811
c_rt_lib0clear(&___nl__im__269);
#line 811
//clear ___nl__bool__272;
#line 811
c_rt_lib0clear(&___nl__im__273);
#line 811
c_rt_lib0clear(&___nl__im__274);
#line 811
//clear ___nl__bool__276;
#line 811
c_rt_lib0clear(&___nl__im__277);
#line 811
c_rt_lib0clear(&___nl__im__278);
#line 811
//clear ___nl__bool__282;
#line 811
c_rt_lib0clear(&___nl__im__283);
#line 811
c_rt_lib0clear(&___nl__im__284);
#line 812
c_rt_lib0move(&___nl__im__285,___get_global_const(435));
#line 812
nparser_priv0eat(___ref___rec__0, ___nl__im__285);
#line 812
c_rt_lib0clear(&___nl__im__285);
#line 813
goto label_2455;
#line 813
label_2455:
;
#line 813
//clear ___nl__bool__222;
#line 813
c_rt_lib0clear(&___nl__im__223);
#line 813
c_rt_lib0clear(&___nl__im__226);
#line 814
___nl__rec_ptr__287 = &((*___ref___rec__0).state0field);
#line 814
c_rt_lib0move(&___nl__im__286, ntokenizer0get_place_ws(___nl__rec_ptr__287));
#line 814
___nl__rec_ptr__287 = NULL;
#line 815
c_rt_lib0move(&___nl__im__288, c_rt_lib0hash_mk(2, ___get_global_const(532), ___nl__im__1, ___get_global_const(1024), ___nl__im__286));
#line 816
c_rt_lib0move(&___nl__im__290, c_rt_lib0hash_mk(2, ___get_global_const(227), ___nl__im__3, ___get_global_const(221), ___nl__im__288));
#line 816
c_rt_lib0move(&___nl__im__289, c_rt_lib0ov_mk_arg(___get_global_const(79), ___nl__im__290));
#line 816
c_rt_lib0clear(&___nl__im__290);
#line 816
c_rt_lib0clear(&___nl__im__1);
#line 816
c_rt_lib0clear(&___nl__im__3);
#line 816
c_rt_lib0clear(&___nl__im__286);
#line 816
c_rt_lib0clear(&___nl__im__288);
#line 816
return ___nl__im__289;
return NULL;

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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(1050), ___nl__im__2, ___get_global_const(51), ___nl__im__4, ___get_global_const(212), ___nl__im__6, ___get_global_const(1073), ___nl__im__10));
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
return NULL;

}


static ImmT ___const__[5];
static int ___const_init__ = 1;
void nparser_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[4];


for(int i=0;i<4;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 4);
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
case 1:
	___const__[1] = nparser0state_t0cal();
	break;
case 2:
	___const__[2] = nparser0try_value_t0cal();
	break;
case 3:
	___const__[3] = nparser0try_cmd_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
