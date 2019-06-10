
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(451));
#line 19
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1076));
#line 19
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1192));
#line 19
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1078));
#line 19
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1079));
#line 19
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1080));
#line 19
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1081));
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
ImmT  res = nparser0state_t();
return res;
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_string_const(1193), ___get_global_string_const(1194)));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_string_const(52), ___get_global_string_const(1050)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 26
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 27
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 27
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(1171), ___nl__im__2, ___get_global_string_const(50), ___nl__im__3, ___get_global_string_const(223), ___nl__im__4, ___get_global_string_const(1195), ___nl__im__5));
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
ImmT  res = nparser0try_value_t();
return res;
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1133)));
#line 32
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 32
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 32
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(83), ___nl__im__2, ___get_global_string_const(82), ___nl__im__3));
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
ImmT  res = nparser0try_cmd_t();
return res;
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(45), ___get_global_string_const(347)));
#line 36
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 36
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 36
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(83), ___nl__im__2, ___get_global_string_const(82), ___nl__im__3));
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

ImmT  nparser0sparse0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "nparser0sparse");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
bool  var2 = c_rt_lib0check_true_native((_tab[2]));
ImmT  res = nparser0sparse(*var0, *var1, var2);
c_rt_lib0move(&_tab[2], c_rt_lib0bool_to_nl_native(var2));
return res;
}
ImmT  nparser0sparse(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
nparser_priv0__const__init();
nparser0state_t0type ___nl__rec__3 = {
.own_to_im = (own_to_im_function*)nparser0conv_to_im00state_t
};
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
ImmT * ___nl__im_ptr__25 = NULL;
bool * ___nl__bool_ptr__26 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT * ___nl__im_ptr__32 = NULL;
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
c_rt_lib0move(___nl__im_ptr__9, c_rt_lib0ov_mk_none(___get_global_string_const(745)));
#line 49
___nl__im_ptr__9 = NULL;
#line 49
___nl__im_ptr__10 = &(___nl__rec_ptr__5->next_token0field);
#line 50
c_rt_lib0move(___nl__im_ptr__10,___get_global_string_const(36));
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
c_rt_lib0move(___nl__im_ptr__13, c_rt_lib0hash_mk(2, ___get_global_string_const(161), ___nl__im__15, ___get_global_string_const(1158), ___nl__im__17));
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
c_rt_lib0move(___nl__im_ptr__18, c_rt_lib0hash_mk(2, ___get_global_string_const(161), ___nl__im__20, ___get_global_string_const(1158), ___nl__im__22));
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
c_rt_lib0move(___nl__im_ptr__23, c_rt_lib0array_mk(0));
#line 55
___nl__im_ptr__23 = NULL;
#line 55
___nl__im_ptr__24 = &(___nl__rec_ptr__5->next_comment0field);
#line 56
c_rt_lib0move(___nl__im_ptr__24, c_rt_lib0array_mk(0));
#line 56
___nl__im_ptr__24 = NULL;
#line 56
___nl__rec_ptr__5 = NULL;
#line 56
___nl__im_ptr__25 = &(___nl__rec__3.module_name0field);
#line 58
c_rt_lib0copy(___nl__im_ptr__25, ___nl__im__1);
#line 58
___nl__im_ptr__25 = NULL;
#line 58
___nl__bool_ptr__26 = &(___nl__rec__3.parse_types0field);
#line 59
(*___nl__bool_ptr__26) = ___nl__bool__2;
#line 59
___nl__bool_ptr__26 = NULL;
#line 61
___nl__rec_ptr__27 = &(___nl__rec__3.state0field);
#line 61
c_rt_lib0delete(ntokenizer0init(___nl__rec_ptr__27));
#line 61
___nl__rec_ptr__27 = NULL;
#line 62
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_module(&___nl__rec__3, ___nl__im__1));
#line 63
___nl__im_ptr__32 = &(___nl__rec__3.errors0field);
#line 63
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 63
___nl__im_ptr__32 = NULL;
#line 63
___nl__int__30 = c_rt_lib0array_len(___nl__im__31);
#line 63
c_rt_lib0clear(&___nl__im__31);
#line 63
___nl__int__33 = 0;
#line 63
___nl__bool__29 = ___nl__int__30 > ___nl__int__33;
#line 63
//clear ___nl__int__30;
#line 63
//clear ___nl__int__33;
#line 63
___nl__bool__29 = !___nl__bool__29;
#line 63
if(___nl__bool__29){ goto label_90;}
#line 63
___nl__im_ptr__36 = &(___nl__rec__3.errors0field);
#line 63
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 63
___nl__im_ptr__36 = NULL;
#line 63
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(129), ___nl__im__35));
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
c_rt_lib0clear(&___nl__im__28);
#line 63
//clear ___nl__bool__29;
#line 63
return ___nl__im__34;
#line 63
goto label_90;
#line 63
label_90:
;
#line 63
//clear ___nl__bool__29;
#line 63
c_rt_lib0clear(&___nl__im__34);
#line 64
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__28));
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
//clear ___nl__bool__2;
#line 64
nparser0state_t0type0clean(___nl__rec__3);;
#line 64
c_rt_lib0clear(&___nl__im__28);
#line 64
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(129)));
#line 70
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_string_const(161), ___nl__im__8, ___get_global_string_const(159), ___nl__im__9, ___get_global_string_const(215), ___nl__im__11, ___get_global_string_const(164), ___nl__im__1, ___get_global_string_const(216), ___nl__im__12));
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
#line 74
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 74
___nl__bool__2 = ntokenizer0eat_token(___nl__rec_ptr__3, ___nl__im__1);
#line 74
___nl__rec_ptr__3 = NULL;
#line 74
___nl__bool__2 = !___nl__bool__2;
#line 74
if(___nl__bool__2){ goto label_10;}
#line 74
___nl__bool__4 = true;
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
//clear ___nl__bool__2;
#line 74
return ___nl__bool__4;
#line 74
goto label_10;
#line 74
label_10:
;
#line 74
//clear ___nl__bool__2;
#line 74
//clear ___nl__bool__4;
#line 75
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1196));
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
return false;

}

bool  nparser_priv0try_eat(nparser0state_t0type* ___ref___rec__0,ImmT  ___nl__im__1) {
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
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ntokenizer0state_t0type* ___nl__rec_ptr__15 = NULL;
bool  ___nl__bool__16 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__string__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
#line 84
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 84
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 84
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_string_const(175), ___nl__im__1, ___get_global_string_const(180), ___nl__im__3, ___get_global_string_const(173), ___nl__im__4, ___get_global_string_const(1138), ___nl__im__5, ___get_global_string_const(1139), ___nl__im__6));
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
c_rt_lib0clear(&___nl__im__4);
#line 84
c_rt_lib0clear(&___nl__im__5);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 85
c_rt_lib0move(&___nl__im__8, string0lf());
#line 85
___nl__rec_ptr__10 = &((*___ref___rec__0).state0field);
#line 85
c_rt_lib0move(&___nl__im__9, ntokenizer0pop_last_comment(___nl__rec_ptr__10));
#line 85
___nl__rec_ptr__10 = NULL;
#line 85
c_rt_lib0move(&___nl__im__7, array0join(___nl__im__8, ___nl__im__9));
#line 85
c_rt_lib0clear(&___nl__im__8);
#line 85
c_rt_lib0clear(&___nl__im__9);
#line 85
c_rt_lib0copy(&___nl__im__11, ___nl__im__7);
#line 85
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(1138), ___nl__im__11);
#line 85
c_rt_lib0clear(&___nl__im__7);
#line 85
c_rt_lib0clear(&___nl__im__11);
#line 86
label_20:
;
#line 86
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1197));
#line 86
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__13);
#line 86
c_rt_lib0clear(&___nl__im__13);
#line 86
___nl__bool__12 = !___nl__bool__12;
#line 86
if(___nl__bool__12){ goto label_66;}
#line 87
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 87
___nl__int__14 = ntokenizer0get_line(___nl__rec_ptr__15);
#line 87
___nl__rec_ptr__15 = NULL;
#line 88
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 88
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 88
___nl__bool__16 = ntokenizer0is_type(___nl__rec_ptr__17, ___nl__im__18);
#line 88
___nl__rec_ptr__17 = NULL;
#line 88
c_rt_lib0clear(&___nl__im__18);
#line 88
___nl__bool__16 = !___nl__bool__16;
#line 88
if(___nl__bool__16){ goto label_54;}
#line 89
c_rt_lib0move(&___nl__im__19,___get_global_string_const(180));
#line 89
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__19));
#line 90
___nl__rec_ptr__22 = &((*___ref___rec__0).state0field);
#line 90
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 90
c_rt_lib0move(&___nl__im__21, ntokenizer0eat_type(___nl__rec_ptr__22, ___nl__im__23));
#line 90
___nl__rec_ptr__22 = NULL;
#line 90
c_rt_lib0clear(&___nl__im__23);
#line 90
c_rt_lib0move(&___nl__im__24, c_rt_lib0int_new(___nl__int__14));
#line 90
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__21, ___get_global_string_const(161), ___nl__im__24));
#line 90
c_rt_lib0clear(&___nl__im__21);
#line 90
c_rt_lib0clear(&___nl__im__24);
#line 90
c_rt_lib0delete(array0push(&___nl__im__19, ___nl__im__20));
#line 90
c_rt_lib0move(&___nl__string__25,___get_global_string_const(180));
#line 90
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__25, ___nl__im__19));
#line 90
c_rt_lib0clear(&___nl__im__19);
#line 90
c_rt_lib0clear(&___nl__im__20);
#line 90
c_rt_lib0clear(&___nl__string__25);
#line 93
goto label_59;
#line 93
label_54:
;
#line 94
c_rt_lib0move(&___nl__im__26,___get_global_string_const(1199));
#line 94
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__26));
#line 94
c_rt_lib0clear(&___nl__im__26);
#line 95
goto label_59;
#line 95
label_59:
;
#line 95
//clear ___nl__bool__16;
#line 96
c_rt_lib0move(&___nl__im__27,___get_global_string_const(451));
#line 96
nparser_priv0eat(___ref___rec__0, ___nl__im__27);
#line 96
c_rt_lib0clear(&___nl__im__27);
#line 96
//clear ___nl__int__14;
#line 97
goto label_20;
#line 97
label_66:
;
#line 98
___nl__rec_ptr__29 = &((*___ref___rec__0).state0field);
#line 98
c_rt_lib0move(&___nl__im__30,___get_global_string_const(736));
#line 98
___nl__bool__28 = ntokenizer0next_is(___nl__rec_ptr__29, ___nl__im__30);
#line 98
___nl__rec_ptr__29 = NULL;
#line 98
c_rt_lib0clear(&___nl__im__30);
#line 98
___nl__bool__28 = !___nl__bool__28;
#line 98
if(___nl__bool__28){ goto label_119;}
#line 99
c_rt_lib0move(&___nl__im__31, nparser_priv0parse_fun_def(___ref___rec__0, ___nl__im__1));
#line 99
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__31, ___get_global_string_const(83));
#line 99
if(___nl__bool__32){ goto label_82;}
#line 101
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__31, ___get_global_string_const(82));
#line 101
if(___nl__bool__32){ goto label_93;}
#line 101
c_rt_lib0move(&___nl__im__33,___get_global_string_const(15));
#line 101
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__33, ___nl__im__31));
#line 101
nl_die_arg(___nl__im__33);
#line 99
label_82:
;
#line 99
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(83)));
#line 99
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 100
c_rt_lib0move(&___nl__im__36,___get_global_string_const(173));
#line 100
c_rt_lib0move(&___nl__im__36, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__36));
#line 100
c_rt_lib0delete(array0push(&___nl__im__36, ___nl__im__34));
#line 100
c_rt_lib0move(&___nl__string__37,___get_global_string_const(173));
#line 100
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__37, ___nl__im__36));
#line 100
c_rt_lib0clear(&___nl__im__36);
#line 100
c_rt_lib0clear(&___nl__string__37);
#line 101
goto label_110;
#line 101
label_93:
;
#line 101
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(82)));
#line 101
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 102
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__38));
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
//clear ___nl__bool__12;
#line 103
//clear ___nl__int__14;
#line 103
//clear ___nl__bool__28;
#line 103
c_rt_lib0clear(&___nl__im__31);
#line 103
//clear ___nl__bool__32;
#line 103
c_rt_lib0clear(&___nl__im__33);
#line 103
c_rt_lib0clear(&___nl__im__34);
#line 103
c_rt_lib0clear(&___nl__im__35);
#line 103
c_rt_lib0clear(&___nl__im__38);
#line 103
c_rt_lib0clear(&___nl__im__39);
#line 103
return ___nl__im__2;
#line 104
goto label_110;
#line 104
label_110:
;
#line 104
c_rt_lib0clear(&___nl__im__31);
#line 104
//clear ___nl__bool__32;
#line 104
c_rt_lib0clear(&___nl__im__33);
#line 104
c_rt_lib0clear(&___nl__im__34);
#line 104
c_rt_lib0clear(&___nl__im__35);
#line 104
c_rt_lib0clear(&___nl__im__38);
#line 104
c_rt_lib0clear(&___nl__im__39);
#line 105
goto label_66;
#line 105
label_119:
;
#line 106
___nl__rec_ptr__41 = &((*___ref___rec__0).state0field);
#line 106
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(745)));
#line 106
___nl__bool__40 = ntokenizer0is_type(___nl__rec_ptr__41, ___nl__im__42);
#line 106
___nl__rec_ptr__41 = NULL;
#line 106
c_rt_lib0clear(&___nl__im__42);
#line 106
___nl__bool__40 = !___nl__bool__40;
#line 106
___nl__bool__40 = !___nl__bool__40;
#line 106
if(___nl__bool__40){ goto label_132;}
#line 106
c_rt_lib0move(&___nl__im__43,___get_global_string_const(1200));
#line 106
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__43));
#line 106
c_rt_lib0clear(&___nl__im__43);
#line 106
goto label_132;
#line 106
label_132:
;
#line 106
//clear ___nl__bool__40;
#line 107
___nl__rec_ptr__45 = &((*___ref___rec__0).state0field);
#line 107
c_rt_lib0move(&___nl__im__44, ntokenizer0get_next_comment(___nl__rec_ptr__45));
#line 107
___nl__rec_ptr__45 = NULL;
#line 107
c_rt_lib0copy(&___nl__im__46, ___nl__im__44);
#line 107
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(1139), ___nl__im__46);
#line 107
c_rt_lib0clear(&___nl__im__44);
#line 107
c_rt_lib0clear(&___nl__im__46);
#line 108
c_rt_lib0clear(&___nl__im__1);
#line 108
//clear ___nl__bool__12;
#line 108
//clear ___nl__int__14;
#line 108
//clear ___nl__bool__28;
#line 108
c_rt_lib0clear(&___nl__im__31);
#line 108
//clear ___nl__bool__32;
#line 108
c_rt_lib0clear(&___nl__im__33);
#line 108
c_rt_lib0clear(&___nl__im__34);
#line 108
c_rt_lib0clear(&___nl__im__35);
#line 108
c_rt_lib0clear(&___nl__im__38);
#line 108
c_rt_lib0clear(&___nl__im__39);
#line 108
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
#line 115
c_rt_lib0move(&___nl__im__1,___get_global_string_const(466));
#line 115
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 116
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 117
label_4:
;
#line 117
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 117
c_rt_lib0move(&___nl__im__5,___get_global_string_const(331));
#line 117
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 117
___nl__rec_ptr__4 = NULL;
#line 117
c_rt_lib0clear(&___nl__im__5);
#line 117
___nl__bool__3 = !___nl__bool__3;
#line 117
___nl__bool__3 = !___nl__bool__3;
#line 117
if(___nl__bool__3){ goto label_102;}
#line 118
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 118
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 118
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 118
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 118
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_string_const(277), ___nl__im__7, ___get_global_string_const(216), ___nl__im__8, ___get_global_string_const(175), ___nl__im__9, ___get_global_string_const(504), ___nl__im__10));
#line 118
c_rt_lib0clear(&___nl__im__7);
#line 118
c_rt_lib0clear(&___nl__im__8);
#line 118
c_rt_lib0clear(&___nl__im__9);
#line 118
c_rt_lib0clear(&___nl__im__10);
#line 119
c_rt_lib0move(&___nl__im__12,___get_global_string_const(39));
#line 119
___nl__bool__11 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__12);
#line 119
c_rt_lib0clear(&___nl__im__12);
#line 119
___nl__bool__11 = !___nl__bool__11;
#line 119
if(___nl__bool__11){ goto label_33;}
#line 119
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 119
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 119
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(277), ___nl__im__14);
#line 119
c_rt_lib0clear(&___nl__im__13);
#line 119
c_rt_lib0clear(&___nl__im__14);
#line 119
goto label_33;
#line 119
label_33:
;
#line 119
//clear ___nl__bool__11;
#line 120
___nl__rec_ptr__16 = &((*___ref___rec__0).state0field);
#line 120
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 120
___nl__bool__15 = ntokenizer0is_type(___nl__rec_ptr__16, ___nl__im__17);
#line 120
___nl__rec_ptr__16 = NULL;
#line 120
c_rt_lib0clear(&___nl__im__17);
#line 120
___nl__bool__15 = !___nl__bool__15;
#line 120
if(___nl__bool__15){ goto label_52;}
#line 121
___nl__rec_ptr__19 = &((*___ref___rec__0).state0field);
#line 121
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 121
c_rt_lib0move(&___nl__im__18, ntokenizer0eat_type(___nl__rec_ptr__19, ___nl__im__20));
#line 121
___nl__rec_ptr__19 = NULL;
#line 121
c_rt_lib0clear(&___nl__im__20);
#line 121
c_rt_lib0copy(&___nl__im__21, ___nl__im__18);
#line 121
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(175), ___nl__im__21);
#line 121
c_rt_lib0clear(&___nl__im__18);
#line 121
c_rt_lib0clear(&___nl__im__21);
#line 122
goto label_57;
#line 122
label_52:
;
#line 123
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1201));
#line 123
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__22));
#line 123
c_rt_lib0clear(&___nl__im__22);
#line 124
goto label_57;
#line 124
label_57:
;
#line 124
//clear ___nl__bool__15;
#line 125
c_rt_lib0move(&___nl__im__24,___get_global_string_const(539));
#line 125
___nl__bool__23 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__24);
#line 125
c_rt_lib0clear(&___nl__im__24);
#line 125
___nl__bool__23 = !___nl__bool__23;
#line 125
if(___nl__bool__23){ goto label_82;}
#line 126
c_rt_lib0move(&___nl__im__27, nparser_priv0parse_type(___ref___rec__0));
#line 126
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(83));
#line 126
if(___nl__bool__26){ goto label_74;}
#line 126
c_rt_lib0clear(&___nl__im__2);
#line 126
//clear ___nl__bool__3;
#line 126
c_rt_lib0clear(&___nl__im__6);
#line 126
//clear ___nl__bool__23;
#line 126
c_rt_lib0clear(&___nl__im__25);
#line 126
//clear ___nl__bool__26;
#line 126
return ___nl__im__27;
#line 126
label_74:
;
#line 126
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__27, ___get_global_string_const(83)));
#line 127
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(216), ___nl__im__25));
#line 127
c_rt_lib0copy(&___nl__im__29, ___nl__im__28);
#line 127
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(216), ___nl__im__29);
#line 127
c_rt_lib0clear(&___nl__im__28);
#line 127
c_rt_lib0clear(&___nl__im__29);
#line 128
goto label_82;
#line 128
label_82:
;
#line 128
//clear ___nl__bool__23;
#line 128
c_rt_lib0clear(&___nl__im__25);
#line 128
//clear ___nl__bool__26;
#line 128
c_rt_lib0clear(&___nl__im__27);
#line 129
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__6));
#line 130
c_rt_lib0move(&___nl__im__31,___get_global_string_const(323));
#line 130
___nl__bool__30 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__31);
#line 130
c_rt_lib0clear(&___nl__im__31);
#line 130
___nl__bool__30 = !___nl__bool__30;
#line 130
___nl__bool__30 = !___nl__bool__30;
#line 130
if(___nl__bool__30){ goto label_98;}
#line 130
c_rt_lib0clear(&___nl__im__6);
#line 130
//clear ___nl__bool__30;
#line 130
goto label_102;
#line 130
goto label_98;
#line 130
label_98:
;
#line 130
//clear ___nl__bool__30;
#line 130
c_rt_lib0clear(&___nl__im__6);
#line 131
goto label_4;
#line 131
label_102:
;
#line 132
c_rt_lib0move(&___nl__im__32,___get_global_string_const(331));
#line 132
nparser_priv0eat(___ref___rec__0, ___nl__im__32);
#line 132
c_rt_lib0clear(&___nl__im__32);
#line 133
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
//clear ___nl__bool__3;
#line 133
c_rt_lib0clear(&___nl__im__6);
#line 133
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
ImmT  ___nl__im__17 = NULL;
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
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__string__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
bool  ___nl__bool__58 = false;
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
#line 141
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 141
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 141
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(216), ___nl__im__4, ___get_global_string_const(504), ___nl__im__5));
#line 141
c_rt_lib0clear(&___nl__im__4);
#line 141
c_rt_lib0clear(&___nl__im__5);
#line 142
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 142
___nl__int__6 = ntokenizer0get_line(___nl__rec_ptr__7);
#line 142
___nl__rec_ptr__7 = NULL;
#line 142
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 143
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 144
c_rt_lib0move(&___nl__im__10,___get_global_string_const(36));
#line 145
c_rt_lib0move(&___nl__im__12, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 145
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(1089)));
#line 145
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(210), ___nl__im__12, ___get_global_string_const(237), ___nl__im__13));
#line 145
c_rt_lib0clear(&___nl__im__12);
#line 145
c_rt_lib0clear(&___nl__im__13);
#line 146
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(476)));
#line 147
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 148
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 148
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_string_const(477), ___nl__im__3, ___get_global_string_const(161), ___nl__im__8, ___get_global_string_const(276), ___nl__im__9, ___get_global_string_const(175), ___nl__im__10, ___get_global_string_const(237), ___nl__im__11, ___get_global_string_const(220), ___nl__im__14, ___get_global_string_const(174), ___nl__im__15, ___get_global_string_const(1136), ___nl__im__16));
#line 148
c_rt_lib0clear(&___nl__im__3);
#line 148
//clear ___nl__int__6;
#line 148
c_rt_lib0clear(&___nl__im__8);
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
c_rt_lib0clear(&___nl__im__11);
#line 148
c_rt_lib0clear(&___nl__im__14);
#line 148
c_rt_lib0clear(&___nl__im__15);
#line 148
c_rt_lib0clear(&___nl__im__16);
#line 150
c_rt_lib0move(&___nl__im__17,___get_global_string_const(736));
#line 150
nparser_priv0eat(___ref___rec__0, ___nl__im__17);
#line 150
c_rt_lib0clear(&___nl__im__17);
#line 151
c_rt_lib0move(&___nl__im__19, nparser_priv0eat_text(___ref___rec__0));
#line 151
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(83));
#line 151
if(___nl__bool__18){ goto label_39;}
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
//clear ___nl__bool__18;
#line 151
return ___nl__im__19;
#line 151
label_39:
;
#line 151
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(83)));
#line 151
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__20);
#line 152
c_rt_lib0move(&___nl__im__22,___get_global_string_const(34));
#line 152
___nl__bool__21 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__22);
#line 152
c_rt_lib0clear(&___nl__im__22);
#line 152
___nl__bool__21 = !___nl__bool__21;
#line 152
if(___nl__bool__21){ goto label_88;}
#line 153
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(175)));
#line 153
___nl__bool__23 = c_rt_lib0ne(___nl__im__24, ___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__24);
#line 153
___nl__bool__23 = !___nl__bool__23;
#line 153
if(___nl__bool__23){ goto label_66;}
#line 154
c_rt_lib0move(&___nl__im__28,___get_global_string_const(1202));
#line 154
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(175)));
#line 154
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 154
c_rt_lib0clear(&___nl__im__28);
#line 154
c_rt_lib0clear(&___nl__im__29);
#line 154
c_rt_lib0move(&___nl__im__30,___get_global_string_const(1203));
#line 154
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 154
c_rt_lib0clear(&___nl__im__27);
#line 154
c_rt_lib0clear(&___nl__im__30);
#line 154
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__1));
#line 154
c_rt_lib0clear(&___nl__im__26);
#line 154
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__25));
#line 154
c_rt_lib0clear(&___nl__im__25);
#line 155
goto label_66;
#line 155
label_66:
;
#line 155
//clear ___nl__bool__23;
#line 156
c_rt_lib0move(&___nl__im__32, nparser_priv0eat_text(___ref___rec__0));
#line 156
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(83));
#line 156
if(___nl__bool__31){ goto label_79;}
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
//clear ___nl__bool__21;
#line 156
//clear ___nl__bool__31;
#line 156
return ___nl__im__32;
#line 156
label_79:
;
#line 156
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(83)));
#line 156
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__33);
#line 157
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_string_const(221)));
#line 157
c_rt_lib0copy(&___nl__im__35, ___nl__im__34);
#line 157
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(220), ___nl__im__35);
#line 157
c_rt_lib0clear(&___nl__im__34);
#line 157
c_rt_lib0clear(&___nl__im__35);
#line 158
goto label_88;
#line 158
label_88:
;
#line 158
//clear ___nl__bool__21;
#line 158
//clear ___nl__bool__31;
#line 158
c_rt_lib0clear(&___nl__im__32);
#line 158
c_rt_lib0clear(&___nl__im__33);
#line 159
c_rt_lib0move(&___nl__im__37, nparser_priv0parse_fun_arg_list(___ref___rec__0));
#line 159
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_string_const(83));
#line 159
if(___nl__bool__36){ goto label_103;}
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
return ___nl__im__37;
#line 159
label_103:
;
#line 159
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__37, ___get_global_string_const(83)));
#line 159
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(276), ___nl__im__38);
#line 160
___nl__rec_ptr__40 = &((*___ref___rec__0).state0field);
#line 160
c_rt_lib0move(&___nl__im__41,___get_global_string_const(539));
#line 160
___nl__bool__39 = ntokenizer0next_is(___nl__rec_ptr__40, ___nl__im__41);
#line 160
___nl__rec_ptr__40 = NULL;
#line 160
c_rt_lib0clear(&___nl__im__41);
#line 160
___nl__bool__39 = !___nl__bool__39;
#line 160
if(___nl__bool__39){ goto label_145;}
#line 161
c_rt_lib0move(&___nl__im__42,___get_global_string_const(539));
#line 161
nparser_priv0eat(___ref___rec__0, ___nl__im__42);
#line 161
c_rt_lib0clear(&___nl__im__42);
#line 162
c_rt_lib0move(&___nl__im__45, nparser_priv0parse_type(___ref___rec__0));
#line 162
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__45, ___get_global_string_const(83));
#line 162
if(___nl__bool__44){ goto label_131;}
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
//clear ___nl__bool__39;
#line 162
c_rt_lib0clear(&___nl__im__43);
#line 162
//clear ___nl__bool__44;
#line 162
return ___nl__im__45;
#line 162
label_131:
;
#line 162
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__45, ___get_global_string_const(83)));
#line 163
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(216), ___nl__im__43));
#line 163
c_rt_lib0move(&___nl__im__47,___get_global_string_const(477));
#line 163
c_rt_lib0move(&___nl__im__47, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__47));
#line 163
c_rt_lib0copy(&___nl__im__48, ___nl__im__46);
#line 163
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_string_const(216), ___nl__im__48);
#line 163
c_rt_lib0move(&___nl__string__49,___get_global_string_const(477));
#line 163
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__49, ___nl__im__47));
#line 163
c_rt_lib0clear(&___nl__im__46);
#line 163
c_rt_lib0clear(&___nl__im__47);
#line 163
c_rt_lib0clear(&___nl__im__48);
#line 163
c_rt_lib0clear(&___nl__string__49);
#line 164
goto label_145;
#line 164
label_145:
;
#line 164
//clear ___nl__bool__39;
#line 164
c_rt_lib0clear(&___nl__im__43);
#line 164
//clear ___nl__bool__44;
#line 164
c_rt_lib0clear(&___nl__im__45);
#line 165
___nl__rec_ptr__51 = &((*___ref___rec__0).state0field);
#line 165
c_rt_lib0move(&___nl__im__50, ntokenizer0pop_last_comment(___nl__rec_ptr__51));
#line 165
___nl__rec_ptr__51 = NULL;
#line 165
c_rt_lib0copy(&___nl__im__52, ___nl__im__50);
#line 165
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(1136), ___nl__im__52);
#line 165
c_rt_lib0clear(&___nl__im__50);
#line 165
c_rt_lib0clear(&___nl__im__52);
#line 166
c_rt_lib0move(&___nl__im__54, nparser_priv0parse_block(___ref___rec__0));
#line 166
___nl__bool__53 = c_rt_lib0priv_is(___nl__im__54, ___get_global_string_const(83));
#line 166
if(___nl__bool__53){ goto label_170;}
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
//clear ___nl__bool__18;
#line 166
c_rt_lib0clear(&___nl__im__19);
#line 166
c_rt_lib0clear(&___nl__im__20);
#line 166
//clear ___nl__bool__36;
#line 166
c_rt_lib0clear(&___nl__im__37);
#line 166
c_rt_lib0clear(&___nl__im__38);
#line 166
//clear ___nl__bool__53;
#line 166
return ___nl__im__54;
#line 166
label_170:
;
#line 166
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__54, ___get_global_string_const(83)));
#line 166
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(237), ___nl__im__55);
#line 167
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 167
c_rt_lib0move(&___nl__im__56, ptd_parser0fun_def_to_ptd(___nl__im__57));
#line 167
c_rt_lib0clear(&___nl__im__57);
#line 167
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__56, ___get_global_string_const(82));
#line 167
if(___nl__bool__58){ goto label_183;}
#line 171
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__56, ___get_global_string_const(83));
#line 171
if(___nl__bool__58){ goto label_192;}
#line 171
c_rt_lib0move(&___nl__im__59,___get_global_string_const(15));
#line 171
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(2, ___nl__im__59, ___nl__im__56));
#line 171
nl_die_arg(___nl__im__59);
#line 167
label_183:
;
#line 167
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__56, ___get_global_string_const(82)));
#line 167
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 170
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 170
c_rt_lib0copy(&___nl__im__63, ___nl__im__62);
#line 170
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(174), ___nl__im__63);
#line 170
c_rt_lib0clear(&___nl__im__62);
#line 170
c_rt_lib0clear(&___nl__im__63);
#line 171
goto label_201;
#line 171
label_192:
;
#line 171
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__56, ___get_global_string_const(83)));
#line 171
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 172
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__64));
#line 172
c_rt_lib0copy(&___nl__im__67, ___nl__im__66);
#line 172
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(174), ___nl__im__67);
#line 172
c_rt_lib0clear(&___nl__im__66);
#line 172
c_rt_lib0clear(&___nl__im__67);
#line 173
goto label_201;
#line 173
label_201:
;
#line 174
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
c_rt_lib0clear(&___nl__im__2);
#line 174
//clear ___nl__bool__18;
#line 174
c_rt_lib0clear(&___nl__im__19);
#line 174
c_rt_lib0clear(&___nl__im__20);
#line 174
//clear ___nl__bool__36;
#line 174
c_rt_lib0clear(&___nl__im__37);
#line 174
c_rt_lib0clear(&___nl__im__38);
#line 174
//clear ___nl__bool__53;
#line 174
c_rt_lib0clear(&___nl__im__54);
#line 174
c_rt_lib0clear(&___nl__im__55);
#line 174
c_rt_lib0clear(&___nl__im__56);
#line 174
//clear ___nl__bool__58;
#line 174
c_rt_lib0clear(&___nl__im__59);
#line 174
c_rt_lib0clear(&___nl__im__60);
#line 174
c_rt_lib0clear(&___nl__im__61);
#line 174
c_rt_lib0clear(&___nl__im__64);
#line 174
c_rt_lib0clear(&___nl__im__65);
#line 174
return ___nl__im__68;
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
#line 181
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 182
label_1:
;
#line 182
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 182
c_rt_lib0move(&___nl__im__4,___get_global_string_const(331));
#line 182
___nl__bool__2 = ntokenizer0next_is(___nl__rec_ptr__3, ___nl__im__4);
#line 182
___nl__rec_ptr__3 = NULL;
#line 182
c_rt_lib0clear(&___nl__im__4);
#line 182
___nl__bool__2 = !___nl__bool__2;
#line 182
___nl__bool__2 = !___nl__bool__2;
#line 182
if(___nl__bool__2){ goto label_39;}
#line 183
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_fun_val_arg(___ref___rec__0));
#line 183
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
#line 183
if(___nl__bool__6){ goto label_18;}
#line 183
c_rt_lib0clear(&___nl__im__1);
#line 183
//clear ___nl__bool__2;
#line 183
c_rt_lib0clear(&___nl__im__5);
#line 183
//clear ___nl__bool__6;
#line 183
return ___nl__im__7;
#line 183
label_18:
;
#line 183
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 184
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 185
c_rt_lib0move(&___nl__im__9,___get_global_string_const(323));
#line 185
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 185
c_rt_lib0clear(&___nl__im__9);
#line 185
___nl__bool__8 = !___nl__bool__8;
#line 185
___nl__bool__8 = !___nl__bool__8;
#line 185
if(___nl__bool__8){ goto label_33;}
#line 185
c_rt_lib0clear(&___nl__im__5);
#line 185
//clear ___nl__bool__6;
#line 185
c_rt_lib0clear(&___nl__im__7);
#line 185
//clear ___nl__bool__8;
#line 185
goto label_39;
#line 185
goto label_33;
#line 185
label_33:
;
#line 185
//clear ___nl__bool__8;
#line 185
c_rt_lib0clear(&___nl__im__5);
#line 185
//clear ___nl__bool__6;
#line 185
c_rt_lib0clear(&___nl__im__7);
#line 186
goto label_1;
#line 186
label_39:
;
#line 187
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 187
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 187
c_rt_lib0clear(&___nl__im__10);
#line 188
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 188
c_rt_lib0clear(&___nl__im__1);
#line 188
//clear ___nl__bool__2;
#line 188
c_rt_lib0clear(&___nl__im__5);
#line 188
//clear ___nl__bool__6;
#line 188
c_rt_lib0clear(&___nl__im__7);
#line 188
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
#line 192
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 193
label_1:
;
#line 193
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 193
c_rt_lib0move(&___nl__im__4,___get_global_string_const(331));
#line 193
___nl__bool__2 = ntokenizer0next_is(___nl__rec_ptr__3, ___nl__im__4);
#line 193
___nl__rec_ptr__3 = NULL;
#line 193
c_rt_lib0clear(&___nl__im__4);
#line 193
___nl__bool__2 = !___nl__bool__2;
#line 193
___nl__bool__2 = !___nl__bool__2;
#line 193
if(___nl__bool__2){ goto label_39;}
#line 194
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 194
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
#line 194
if(___nl__bool__6){ goto label_18;}
#line 194
c_rt_lib0clear(&___nl__im__1);
#line 194
//clear ___nl__bool__2;
#line 194
c_rt_lib0clear(&___nl__im__5);
#line 194
//clear ___nl__bool__6;
#line 194
return ___nl__im__7;
#line 194
label_18:
;
#line 194
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 195
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 196
c_rt_lib0move(&___nl__im__9,___get_global_string_const(323));
#line 196
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 196
c_rt_lib0clear(&___nl__im__9);
#line 196
___nl__bool__8 = !___nl__bool__8;
#line 196
___nl__bool__8 = !___nl__bool__8;
#line 196
if(___nl__bool__8){ goto label_33;}
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 196
//clear ___nl__bool__6;
#line 196
c_rt_lib0clear(&___nl__im__7);
#line 196
//clear ___nl__bool__8;
#line 196
goto label_39;
#line 196
goto label_33;
#line 196
label_33:
;
#line 196
//clear ___nl__bool__8;
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 196
//clear ___nl__bool__6;
#line 196
c_rt_lib0clear(&___nl__im__7);
#line 197
goto label_1;
#line 197
label_39:
;
#line 198
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 198
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 198
c_rt_lib0clear(&___nl__im__10);
#line 199
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 199
c_rt_lib0clear(&___nl__im__1);
#line 199
//clear ___nl__bool__2;
#line 199
c_rt_lib0clear(&___nl__im__5);
#line 199
//clear ___nl__bool__6;
#line 199
c_rt_lib0clear(&___nl__im__7);
#line 199
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
#line 203
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(0));
#line 204
c_rt_lib0move(&___nl__im__4,___get_global_string_const(39));
#line 204
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 204
c_rt_lib0clear(&___nl__im__4);
#line 204
if(___nl__bool__3){ goto label_7;}
#line 204
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 204
goto label_9;
#line 204
label_7:
;
#line 204
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 204
label_9:
;
#line 204
//clear ___nl__bool__3;
#line 204
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 204
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(277), ___nl__im__5);
#line 204
c_rt_lib0clear(&___nl__im__2);
#line 204
c_rt_lib0clear(&___nl__im__5);
#line 205
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 205
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
#line 205
if(___nl__bool__6){ goto label_21;}
#line 205
c_rt_lib0clear(&___nl__im__1);
#line 205
//clear ___nl__bool__6;
#line 205
return ___nl__im__7;
#line 205
label_21:
;
#line 205
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 205
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(234), ___nl__im__8);
#line 206
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 206
c_rt_lib0copy(&___nl__im__10, ___nl__im__9);
#line 206
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(1140), ___nl__im__10);
#line 206
c_rt_lib0clear(&___nl__im__9);
#line 206
c_rt_lib0clear(&___nl__im__10);
#line 207
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 207
c_rt_lib0clear(&___nl__im__1);
#line 207
//clear ___nl__bool__6;
#line 207
c_rt_lib0clear(&___nl__im__7);
#line 207
c_rt_lib0clear(&___nl__im__8);
#line 207
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
#line 211
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 211
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 211
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__2, ___get_global_string_const(159), ___nl__im__3));
#line 211
c_rt_lib0clear(&___nl__im__2);
#line 211
c_rt_lib0clear(&___nl__im__3);
#line 212
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 212
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 212
___nl__bool__4 = ntokenizer0is_type(___nl__rec_ptr__5, ___nl__im__6);
#line 212
___nl__rec_ptr__5 = NULL;
#line 212
c_rt_lib0clear(&___nl__im__6);
#line 212
___nl__bool__4 = !___nl__bool__4;
#line 212
___nl__bool__4 = !___nl__bool__4;
#line 212
if(___nl__bool__4){ goto label_19;}
#line 213
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1204));
#line 213
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__7));
#line 213
c_rt_lib0clear(&___nl__im__7);
#line 214
//clear ___nl__bool__4;
#line 214
return ___nl__im__1;
#line 215
goto label_19;
#line 215
label_19:
;
#line 215
//clear ___nl__bool__4;
#line 216
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 216
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 216
c_rt_lib0move(&___nl__im__8, ntokenizer0eat_type(___nl__rec_ptr__9, ___nl__im__10));
#line 216
___nl__rec_ptr__9 = NULL;
#line 216
c_rt_lib0clear(&___nl__im__10);
#line 216
c_rt_lib0copy(&___nl__im__11, ___nl__im__8);
#line 216
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(159), ___nl__im__11);
#line 216
c_rt_lib0clear(&___nl__im__8);
#line 216
c_rt_lib0clear(&___nl__im__11);
#line 217
c_rt_lib0move(&___nl__im__14,___get_global_string_const(34));
#line 217
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__14);
#line 217
c_rt_lib0clear(&___nl__im__14);
#line 217
___nl__bool__13 = !___nl__bool__12;
#line 217
if(___nl__bool__13){ goto label_38;}
#line 217
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 217
___nl__bool__12 = ntokenizer0is_text(___nl__rec_ptr__15);
#line 217
___nl__rec_ptr__15 = NULL;
#line 217
label_38:
;
#line 217
//clear ___nl__bool__13;
#line 217
___nl__bool__12 = !___nl__bool__12;
#line 217
if(___nl__bool__12){ goto label_50;}
#line 218
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 218
c_rt_lib0move(&___nl__im__16, ntokenizer0eat_text(___nl__rec_ptr__17));
#line 218
___nl__rec_ptr__17 = NULL;
#line 218
c_rt_lib0copy(&___nl__im__18, ___nl__im__16);
#line 218
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(175), ___nl__im__18);
#line 218
c_rt_lib0clear(&___nl__im__16);
#line 218
c_rt_lib0clear(&___nl__im__18);
#line 219
goto label_55;
#line 219
label_50:
;
#line 220
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1205));
#line 220
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__19));
#line 220
c_rt_lib0clear(&___nl__im__19);
#line 221
goto label_55;
#line 221
label_55:
;
#line 221
//clear ___nl__bool__12;
#line 222
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
#line 229
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 229
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 229
c_rt_lib0move(&___nl__im__1, ntokenizer0eat_type(___nl__rec_ptr__2, ___nl__im__3));
#line 229
___nl__rec_ptr__2 = NULL;
#line 229
c_rt_lib0clear(&___nl__im__3);
#line 231
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 231
c_rt_lib0move(&___nl__im__7,___get_global_string_const(466));
#line 231
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__6, ___nl__im__7);
#line 231
___nl__rec_ptr__6 = NULL;
#line 231
c_rt_lib0clear(&___nl__im__7);
#line 231
___nl__bool__4 = !___nl__bool__4;
#line 231
___nl__bool__5 = !___nl__bool__4;
#line 231
if(___nl__bool__5){ goto label_19;}
#line 231
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 231
c_rt_lib0move(&___nl__im__9,___get_global_string_const(34));
#line 231
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__8, ___nl__im__9);
#line 231
___nl__rec_ptr__8 = NULL;
#line 231
c_rt_lib0clear(&___nl__im__9);
#line 231
___nl__bool__4 = !___nl__bool__4;
#line 231
label_19:
;
#line 231
//clear ___nl__bool__5;
#line 231
___nl__bool__4 = !___nl__bool__4;
#line 231
if(___nl__bool__4){ goto label_30;}
#line 230
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(516), ___nl__im__1));
#line 230
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__11));
#line 230
c_rt_lib0clear(&___nl__im__11);
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 230
//clear ___nl__bool__4;
#line 230
return ___nl__im__10;
#line 230
goto label_30;
#line 230
label_30:
;
#line 230
//clear ___nl__bool__4;
#line 230
c_rt_lib0clear(&___nl__im__10);
#line 232
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 232
c_rt_lib0move(&___nl__im__14,___get_global_string_const(36));
#line 232
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 232
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(159), ___nl__im__13, ___get_global_string_const(175), ___nl__im__14, ___get_global_string_const(276), ___nl__im__15));
#line 232
c_rt_lib0clear(&___nl__im__13);
#line 232
c_rt_lib0clear(&___nl__im__14);
#line 232
c_rt_lib0clear(&___nl__im__15);
#line 233
c_rt_lib0move(&___nl__im__17,___get_global_string_const(34));
#line 233
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 233
c_rt_lib0clear(&___nl__im__17);
#line 233
___nl__bool__16 = !___nl__bool__16;
#line 233
if(___nl__bool__16){ goto label_60;}
#line 234
c_rt_lib0copy(&___nl__im__18, ___nl__im__1);
#line 234
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(159), ___nl__im__18);
#line 234
c_rt_lib0clear(&___nl__im__18);
#line 235
c_rt_lib0move(&___nl__im__20, nparser_priv0eat_text(___ref___rec__0));
#line 235
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(83));
#line 235
if(___nl__bool__19){ goto label_56;}
#line 235
c_rt_lib0clear(&___nl__im__1);
#line 235
c_rt_lib0clear(&___nl__im__12);
#line 235
//clear ___nl__bool__16;
#line 235
//clear ___nl__bool__19;
#line 235
return ___nl__im__20;
#line 235
label_56:
;
#line 235
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(83)));
#line 235
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(175), ___nl__im__21);
#line 236
goto label_65;
#line 236
label_60:
;
#line 237
c_rt_lib0copy(&___nl__im__22, ___nl__im__1);
#line 237
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(175), ___nl__im__22);
#line 237
c_rt_lib0clear(&___nl__im__22);
#line 238
goto label_65;
#line 238
label_65:
;
#line 238
//clear ___nl__bool__16;
#line 238
//clear ___nl__bool__19;
#line 238
c_rt_lib0clear(&___nl__im__20);
#line 238
c_rt_lib0clear(&___nl__im__21);
#line 239
c_rt_lib0move(&___nl__im__23,___get_global_string_const(466));
#line 239
nparser_priv0eat(___ref___rec__0, ___nl__im__23);
#line 239
c_rt_lib0clear(&___nl__im__23);
#line 240
c_rt_lib0move(&___nl__im__25, nparser_priv0parse_fun_val_arg_list(___ref___rec__0));
#line 240
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(83));
#line 240
if(___nl__bool__24){ goto label_80;}
#line 240
c_rt_lib0clear(&___nl__im__1);
#line 240
c_rt_lib0clear(&___nl__im__12);
#line 240
//clear ___nl__bool__24;
#line 240
return ___nl__im__25;
#line 240
label_80:
;
#line 240
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(83)));
#line 240
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(276), ___nl__im__26);
#line 241
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(1069), ___nl__im__12));
#line 241
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__28));
#line 241
c_rt_lib0clear(&___nl__im__28);
#line 241
c_rt_lib0clear(&___nl__im__1);
#line 241
c_rt_lib0clear(&___nl__im__12);
#line 241
//clear ___nl__bool__24;
#line 241
c_rt_lib0clear(&___nl__im__25);
#line 241
c_rt_lib0clear(&___nl__im__26);
#line 241
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
ImmT  ___nl__im__7 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__8 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 245
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 245
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 245
___nl__rec_ptr__2 = NULL;
#line 246
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1111), ___nl__im__4));
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 247
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 247
___nl__bool__5 = ntokenizer0is_text(___nl__rec_ptr__6);
#line 247
___nl__rec_ptr__6 = NULL;
#line 247
___nl__bool__5 = !___nl__bool__5;
#line 247
if(___nl__bool__5){ goto label_17;}
#line 248
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 248
c_rt_lib0move(&___nl__im__7, ntokenizer0eat_text(___nl__rec_ptr__8));
#line 248
___nl__rec_ptr__8 = NULL;
#line 248
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1111), ___nl__im__7));
#line 248
c_rt_lib0clear(&___nl__im__7);
#line 249
goto label_33;
#line 249
label_17:
;
#line 249
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 249
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(415)));
#line 249
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 249
___nl__rec_ptr__9 = NULL;
#line 249
c_rt_lib0clear(&___nl__im__10);
#line 249
___nl__bool__5 = !___nl__bool__5;
#line 249
if(___nl__bool__5){ goto label_33;}
#line 250
___nl__rec_ptr__12 = &((*___ref___rec__0).state0field);
#line 250
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(415)));
#line 250
c_rt_lib0move(&___nl__im__11, ntokenizer0eat_type(___nl__rec_ptr__12, ___nl__im__13));
#line 250
___nl__rec_ptr__12 = NULL;
#line 250
c_rt_lib0clear(&___nl__im__13);
#line 250
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1111), ___nl__im__11));
#line 250
c_rt_lib0clear(&___nl__im__11);
#line 251
goto label_33;
#line 251
label_33:
;
#line 251
//clear ___nl__bool__5;
#line 253
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 253
c_rt_lib0move(&___nl__im__16, ntokenizer0get_place(___nl__rec_ptr__17));
#line 253
___nl__rec_ptr__17 = NULL;
#line 253
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 253
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(745), ___nl__im__16, ___get_global_string_const(1136), ___nl__im__18));
#line 253
c_rt_lib0clear(&___nl__im__16);
#line 253
c_rt_lib0clear(&___nl__im__18);
#line 255
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 255
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__15, ___get_global_string_const(230), ___nl__im__3, ___get_global_string_const(216), ___nl__im__19));
#line 255
c_rt_lib0clear(&___nl__im__15);
#line 255
c_rt_lib0clear(&___nl__im__19);
#line 255
c_rt_lib0clear(&___nl__im__1);
#line 255
c_rt_lib0clear(&___nl__im__3);
#line 255
return ___nl__im__14;
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
#line 260
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 261
c_rt_lib0move(&___nl__im__2,___get_global_string_const(315));
#line 261
nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 261
c_rt_lib0clear(&___nl__im__2);
#line 262
label_4:
;
#line 262
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 262
c_rt_lib0move(&___nl__im__5,___get_global_string_const(316));
#line 262
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 262
___nl__rec_ptr__4 = NULL;
#line 262
c_rt_lib0clear(&___nl__im__5);
#line 262
___nl__bool__3 = !___nl__bool__3;
#line 262
___nl__bool__3 = !___nl__bool__3;
#line 262
if(___nl__bool__3){ goto label_51;}
#line 263
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_hash_key(___ref___rec__0));
#line 264
c_rt_lib0move(&___nl__im__7,___get_global_string_const(317));
#line 264
nparser_priv0eat(___ref___rec__0, ___nl__im__7);
#line 264
c_rt_lib0clear(&___nl__im__7);
#line 265
c_rt_lib0move(&___nl__im__10, nparser_priv0parse_expr(___ref___rec__0));
#line 265
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(83));
#line 265
if(___nl__bool__9){ goto label_26;}
#line 265
c_rt_lib0clear(&___nl__im__1);
#line 265
//clear ___nl__bool__3;
#line 265
c_rt_lib0clear(&___nl__im__6);
#line 265
c_rt_lib0clear(&___nl__im__8);
#line 265
//clear ___nl__bool__9;
#line 265
return ___nl__im__10;
#line 265
label_26:
;
#line 265
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(83)));
#line 266
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(586), ___nl__im__6, ___get_global_string_const(234), ___nl__im__8));
#line 266
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__11));
#line 266
c_rt_lib0clear(&___nl__im__11);
#line 267
c_rt_lib0move(&___nl__im__13,___get_global_string_const(323));
#line 267
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__13);
#line 267
c_rt_lib0clear(&___nl__im__13);
#line 267
___nl__bool__12 = !___nl__bool__12;
#line 267
___nl__bool__12 = !___nl__bool__12;
#line 267
if(___nl__bool__12){ goto label_44;}
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
//clear ___nl__bool__9;
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 267
//clear ___nl__bool__12;
#line 267
goto label_51;
#line 267
goto label_44;
#line 267
label_44:
;
#line 267
//clear ___nl__bool__12;
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
//clear ___nl__bool__9;
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 268
goto label_4;
#line 268
label_51:
;
#line 269
c_rt_lib0move(&___nl__im__14,___get_global_string_const(316));
#line 269
nparser_priv0eat(___ref___rec__0, ___nl__im__14);
#line 269
c_rt_lib0clear(&___nl__im__14);
#line 270
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 270
c_rt_lib0clear(&___nl__im__1);
#line 270
//clear ___nl__bool__3;
#line 270
c_rt_lib0clear(&___nl__im__6);
#line 270
c_rt_lib0clear(&___nl__im__8);
#line 270
//clear ___nl__bool__9;
#line 270
c_rt_lib0clear(&___nl__im__10);
#line 270
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
#line 274
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 275
c_rt_lib0move(&___nl__im__2,___get_global_string_const(325));
#line 275
nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 275
c_rt_lib0clear(&___nl__im__2);
#line 276
label_4:
;
#line 276
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 276
c_rt_lib0move(&___nl__im__5,___get_global_string_const(326));
#line 276
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 276
___nl__rec_ptr__4 = NULL;
#line 276
c_rt_lib0clear(&___nl__im__5);
#line 276
___nl__bool__3 = !___nl__bool__3;
#line 276
___nl__bool__3 = !___nl__bool__3;
#line 276
if(___nl__bool__3){ goto label_42;}
#line 277
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_expr(___ref___rec__0));
#line 277
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(83));
#line 277
if(___nl__bool__7){ goto label_21;}
#line 277
c_rt_lib0clear(&___nl__im__1);
#line 277
//clear ___nl__bool__3;
#line 277
c_rt_lib0clear(&___nl__im__6);
#line 277
//clear ___nl__bool__7;
#line 277
return ___nl__im__8;
#line 277
label_21:
;
#line 277
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(83)));
#line 278
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 279
c_rt_lib0move(&___nl__im__10,___get_global_string_const(323));
#line 279
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__10);
#line 279
c_rt_lib0clear(&___nl__im__10);
#line 279
___nl__bool__9 = !___nl__bool__9;
#line 279
___nl__bool__9 = !___nl__bool__9;
#line 279
if(___nl__bool__9){ goto label_36;}
#line 279
c_rt_lib0clear(&___nl__im__6);
#line 279
//clear ___nl__bool__7;
#line 279
c_rt_lib0clear(&___nl__im__8);
#line 279
//clear ___nl__bool__9;
#line 279
goto label_42;
#line 279
goto label_36;
#line 279
label_36:
;
#line 279
//clear ___nl__bool__9;
#line 279
c_rt_lib0clear(&___nl__im__6);
#line 279
//clear ___nl__bool__7;
#line 279
c_rt_lib0clear(&___nl__im__8);
#line 280
goto label_4;
#line 280
label_42:
;
#line 281
c_rt_lib0move(&___nl__im__11,___get_global_string_const(326));
#line 281
nparser_priv0eat(___ref___rec__0, ___nl__im__11);
#line 281
c_rt_lib0clear(&___nl__im__11);
#line 282
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
//clear ___nl__bool__3;
#line 282
c_rt_lib0clear(&___nl__im__6);
#line 282
//clear ___nl__bool__7;
#line 282
c_rt_lib0clear(&___nl__im__8);
#line 282
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
#line 286
___nl__int__4 = 0;
#line 286
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__4));
#line 286
//clear ___nl__int__4;
#line 286
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(83));
#line 286
if(___nl__bool__2){ goto label_8;}
#line 286
c_rt_lib0clear(&___nl__im__1);
#line 286
//clear ___nl__bool__2;
#line 286
return ___nl__im__3;
#line 286
label_8:
;
#line 286
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(83)));
#line 287
___nl__int__6 = 0;
#line 287
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__1, ___nl__int__6));
#line 287
//clear ___nl__int__6;
#line 287
c_rt_lib0clear(&___nl__im__1);
#line 287
//clear ___nl__bool__2;
#line 287
c_rt_lib0clear(&___nl__im__3);
#line 287
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
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
#line 291
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 291
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 291
___nl__rec_ptr__2 = NULL;
#line 292
c_rt_lib0move(&___nl__im__4,___get_global_string_const(309));
#line 292
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 292
c_rt_lib0clear(&___nl__im__4);
#line 292
___nl__bool__3 = !___nl__bool__3;
#line 292
if(___nl__bool__3){ goto label_51;}
#line 293
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 293
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 293
___nl__rec_ptr__6 = NULL;
#line 294
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_fun_label(___ref___rec__0));
#line 294
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(1113), ___nl__im__8));
#line 294
c_rt_lib0clear(&___nl__im__8);
#line 295
___nl__rec_ptr__10 = &((*___ref___rec__0).state0field);
#line 295
c_rt_lib0move(&___nl__im__9, ntokenizer0get_place(___nl__rec_ptr__10));
#line 295
___nl__rec_ptr__10 = NULL;
#line 299
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 299
c_rt_lib0move(&___nl__im__14, ntokenizer0get_place(___nl__rec_ptr__15));
#line 299
___nl__rec_ptr__15 = NULL;
#line 300
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 300
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(745), ___nl__im__14, ___get_global_string_const(1136), ___nl__im__16));
#line 300
c_rt_lib0clear(&___nl__im__14);
#line 300
c_rt_lib0clear(&___nl__im__16);
#line 303
c_rt_lib0move(&___nl__im__19,___get_global_string_const(309));
#line 305
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 305
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__5, ___get_global_string_const(745), ___nl__im__9, ___get_global_string_const(1136), ___nl__im__22));
#line 305
c_rt_lib0clear(&___nl__im__22);
#line 307
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 307
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__21, ___get_global_string_const(230), ___nl__im__7, ___get_global_string_const(216), ___nl__im__23));
#line 307
c_rt_lib0clear(&___nl__im__21);
#line 307
c_rt_lib0clear(&___nl__im__23);
#line 307
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_string_const(569), ___nl__im__19, ___get_global_string_const(234), ___nl__im__20));
#line 307
c_rt_lib0clear(&___nl__im__19);
#line 307
c_rt_lib0clear(&___nl__im__20);
#line 307
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(1112), ___nl__im__18));
#line 307
c_rt_lib0clear(&___nl__im__18);
#line 310
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 310
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__13, ___get_global_string_const(230), ___nl__im__17, ___get_global_string_const(216), ___nl__im__24));
#line 310
c_rt_lib0clear(&___nl__im__13);
#line 310
c_rt_lib0clear(&___nl__im__17);
#line 310
c_rt_lib0clear(&___nl__im__24);
#line 310
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__12));
#line 310
c_rt_lib0clear(&___nl__im__12);
#line 310
c_rt_lib0clear(&___nl__im__1);
#line 310
//clear ___nl__bool__3;
#line 310
c_rt_lib0clear(&___nl__im__5);
#line 310
c_rt_lib0clear(&___nl__im__7);
#line 310
c_rt_lib0clear(&___nl__im__9);
#line 310
return ___nl__im__11;
#line 312
goto label_51;
#line 312
label_51:
;
#line 312
//clear ___nl__bool__3;
#line 312
c_rt_lib0clear(&___nl__im__5);
#line 312
c_rt_lib0clear(&___nl__im__7);
#line 312
c_rt_lib0clear(&___nl__im__9);
#line 312
c_rt_lib0clear(&___nl__im__11);
#line 313
___nl__rec_ptr__26 = &((*___ref___rec__0).state0field);
#line 313
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 313
___nl__bool__25 = ntokenizer0is_type(___nl__rec_ptr__26, ___nl__im__27);
#line 313
___nl__rec_ptr__26 = NULL;
#line 313
c_rt_lib0clear(&___nl__im__27);
#line 313
___nl__bool__25 = !___nl__bool__25;
#line 313
if(___nl__bool__25){ goto label_102;}
#line 314
c_rt_lib0move(&___nl__im__30, nparser_priv0parse_label(___ref___rec__0));
#line 314
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(83));
#line 314
if(___nl__bool__29){ goto label_72;}
#line 314
c_rt_lib0clear(&___nl__im__1);
#line 314
//clear ___nl__bool__25;
#line 314
c_rt_lib0clear(&___nl__im__28);
#line 314
//clear ___nl__bool__29;
#line 314
return ___nl__im__30;
#line 314
label_72:
;
#line 314
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__30, ___get_global_string_const(83)));
#line 315
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(1069));
#line 315
___nl__bool__31 = !___nl__bool__31;
#line 315
if(___nl__bool__31){ goto label_98;}
#line 317
___nl__rec_ptr__36 = &((*___ref___rec__0).state0field);
#line 317
c_rt_lib0move(&___nl__im__35, ntokenizer0get_place(___nl__rec_ptr__36));
#line 317
___nl__rec_ptr__36 = NULL;
#line 317
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 317
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(745), ___nl__im__35, ___get_global_string_const(1136), ___nl__im__37));
#line 317
c_rt_lib0clear(&___nl__im__35);
#line 317
c_rt_lib0clear(&___nl__im__37);
#line 319
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 319
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__34, ___get_global_string_const(230), ___nl__im__28, ___get_global_string_const(216), ___nl__im__38));
#line 319
c_rt_lib0clear(&___nl__im__34);
#line 319
c_rt_lib0clear(&___nl__im__38);
#line 319
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__33));
#line 319
c_rt_lib0clear(&___nl__im__33);
#line 319
c_rt_lib0clear(&___nl__im__1);
#line 319
//clear ___nl__bool__25;
#line 319
c_rt_lib0clear(&___nl__im__28);
#line 319
//clear ___nl__bool__29;
#line 319
c_rt_lib0clear(&___nl__im__30);
#line 319
//clear ___nl__bool__31;
#line 319
return ___nl__im__32;
#line 321
goto label_98;
#line 321
label_98:
;
#line 321
//clear ___nl__bool__31;
#line 321
c_rt_lib0clear(&___nl__im__32);
#line 322
goto label_102;
#line 322
label_102:
;
#line 322
//clear ___nl__bool__25;
#line 322
c_rt_lib0clear(&___nl__im__28);
#line 322
//clear ___nl__bool__29;
#line 322
c_rt_lib0clear(&___nl__im__30);
#line 323
c_rt_lib0move(&___nl__im__39,___get_global_string_const(1206));
#line 323
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__39));
#line 323
c_rt_lib0clear(&___nl__im__39);
#line 325
___nl__rec_ptr__44 = &((*___ref___rec__0).state0field);
#line 325
c_rt_lib0move(&___nl__im__43, ntokenizer0get_place(___nl__rec_ptr__44));
#line 325
___nl__rec_ptr__44 = NULL;
#line 325
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(0));
#line 325
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(745), ___nl__im__43, ___get_global_string_const(1136), ___nl__im__45));
#line 325
c_rt_lib0clear(&___nl__im__43);
#line 325
c_rt_lib0clear(&___nl__im__45);
#line 326
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(1089)));
#line 327
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 327
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__42, ___get_global_string_const(230), ___nl__im__46, ___get_global_string_const(216), ___nl__im__47));
#line 327
c_rt_lib0clear(&___nl__im__42);
#line 327
c_rt_lib0clear(&___nl__im__46);
#line 327
c_rt_lib0clear(&___nl__im__47);
#line 327
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__41));
#line 327
c_rt_lib0clear(&___nl__im__41);
#line 327
c_rt_lib0clear(&___nl__im__1);
#line 327
return ___nl__im__40;
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
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
INT  ___nl__int__45 = 0;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
bool  ___nl__bool__49 = false;
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
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
bool  ___nl__bool__75 = false;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
bool  ___nl__bool__81 = false;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
#line 332
label_0:
;
#line 334
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 334
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 334
___nl__rec_ptr__5 = NULL;
#line 335
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 335
c_rt_lib0move(&___nl__im__6, ntokenizer0get_token(___nl__rec_ptr__7));
#line 335
___nl__rec_ptr__7 = NULL;
#line 337
c_rt_lib0move(&___nl__im__10, nast0get_ternary_ops());
#line 337
___nl__bool__9 = hash0has_key(___nl__im__10, ___nl__im__6);
#line 337
c_rt_lib0clear(&___nl__im__10);
#line 337
___nl__bool__9 = !___nl__bool__9;
#line 337
if(___nl__bool__9){ goto label_145;}
#line 338
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 339
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1129));
#line 339
___nl__bool__11 = c_rt_lib0eq(___nl__im__8, ___nl__im__12);
#line 339
c_rt_lib0clear(&___nl__im__12);
#line 339
___nl__bool__11 = !___nl__bool__11;
#line 339
if(___nl__bool__11){ goto label_111;}
#line 340
c_rt_lib0move(&___nl__im__14, nast0get_ternary_ops());
#line 340
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1129));
#line 340
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__14, ___nl__im__15));
#line 340
c_rt_lib0clear(&___nl__im__14);
#line 340
c_rt_lib0clear(&___nl__im__15);
#line 341
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1126)));
#line 341
___nl__int__17 = getIntFromImm(___nl__im__18);
#line 341
c_rt_lib0clear(&___nl__im__18);
#line 341
___nl__bool__16 = ___nl__int__17 < ___nl__int__2;
#line 341
//clear ___nl__int__17;
#line 341
if(___nl__bool__16){ goto label_41;}
#line 341
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1126)));
#line 341
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 341
c_rt_lib0clear(&___nl__im__21);
#line 341
___nl__bool__16 = ___nl__int__20 == ___nl__int__2;
#line 341
//clear ___nl__int__20;
#line 341
___nl__bool__19 = !___nl__bool__16;
#line 341
if(___nl__bool__19){ goto label_39;}
#line 341
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1127)));
#line 341
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(285));
#line 341
c_rt_lib0clear(&___nl__im__22);
#line 341
label_39:
;
#line 341
//clear ___nl__bool__19;
#line 341
label_41:
;
#line 341
___nl__bool__16 = !___nl__bool__16;
#line 341
if(___nl__bool__16){ goto label_57;}
#line 341
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
//clear ___nl__int__2;
#line 341
c_rt_lib0clear(&___nl__im__3);
#line 341
c_rt_lib0clear(&___nl__im__4);
#line 341
c_rt_lib0clear(&___nl__im__6);
#line 341
c_rt_lib0clear(&___nl__im__8);
#line 341
//clear ___nl__bool__9;
#line 341
//clear ___nl__bool__11;
#line 341
c_rt_lib0clear(&___nl__im__13);
#line 341
//clear ___nl__bool__16;
#line 341
return ___nl__im__23;
#line 341
goto label_57;
#line 341
label_57:
;
#line 341
//clear ___nl__bool__16;
#line 341
c_rt_lib0clear(&___nl__im__23);
#line 342
nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 343
c_rt_lib0move(&___nl__im__26, nparser_priv0parse_expr(___ref___rec__0));
#line 343
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(83));
#line 343
if(___nl__bool__25){ goto label_76;}
#line 343
c_rt_lib0clear(&___nl__im__1);
#line 343
//clear ___nl__int__2;
#line 343
c_rt_lib0clear(&___nl__im__3);
#line 343
c_rt_lib0clear(&___nl__im__4);
#line 343
c_rt_lib0clear(&___nl__im__6);
#line 343
c_rt_lib0clear(&___nl__im__8);
#line 343
//clear ___nl__bool__9;
#line 343
//clear ___nl__bool__11;
#line 343
c_rt_lib0clear(&___nl__im__13);
#line 343
c_rt_lib0clear(&___nl__im__24);
#line 343
//clear ___nl__bool__25;
#line 343
return ___nl__im__26;
#line 343
label_76:
;
#line 343
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(83)));
#line 344
c_rt_lib0move(&___nl__im__27,___get_global_string_const(539));
#line 344
nparser_priv0eat(___ref___rec__0, ___nl__im__27);
#line 344
c_rt_lib0clear(&___nl__im__27);
#line 345
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1126)));
#line 345
___nl__int__31 = getIntFromImm(___nl__im__32);
#line 345
c_rt_lib0clear(&___nl__im__32);
#line 345
c_rt_lib0move(&___nl__im__30, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__31));
#line 345
//clear ___nl__int__31;
#line 345
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(83));
#line 345
if(___nl__bool__29){ goto label_103;}
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
//clear ___nl__bool__11;
#line 345
c_rt_lib0clear(&___nl__im__13);
#line 345
c_rt_lib0clear(&___nl__im__24);
#line 345
//clear ___nl__bool__25;
#line 345
c_rt_lib0clear(&___nl__im__26);
#line 345
c_rt_lib0clear(&___nl__im__28);
#line 345
//clear ___nl__bool__29;
#line 345
return ___nl__im__30;
#line 345
label_103:
;
#line 345
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__30, ___get_global_string_const(83)));
#line 346
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1129));
#line 346
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(4, ___get_global_string_const(1116), ___nl__im__1, ___get_global_string_const(1117), ___nl__im__24, ___get_global_string_const(1118), ___nl__im__28, ___get_global_string_const(569), ___nl__im__34));
#line 346
c_rt_lib0clear(&___nl__im__34);
#line 346
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1110), ___nl__im__33));
#line 346
c_rt_lib0clear(&___nl__im__33);
#line 347
goto label_134;
#line 347
label_111:
;
#line 348
c_rt_lib0move(&___nl__im__37,___get_global_string_const(1207));
#line 348
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__8));
#line 348
c_rt_lib0clear(&___nl__im__37);
#line 348
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__36));
#line 348
c_rt_lib0clear(&___nl__im__36);
#line 348
c_rt_lib0clear(&___nl__im__1);
#line 348
//clear ___nl__int__2;
#line 348
c_rt_lib0clear(&___nl__im__3);
#line 348
c_rt_lib0clear(&___nl__im__4);
#line 348
c_rt_lib0clear(&___nl__im__6);
#line 348
c_rt_lib0clear(&___nl__im__8);
#line 348
//clear ___nl__bool__9;
#line 348
//clear ___nl__bool__11;
#line 348
c_rt_lib0clear(&___nl__im__13);
#line 348
c_rt_lib0clear(&___nl__im__24);
#line 348
//clear ___nl__bool__25;
#line 348
c_rt_lib0clear(&___nl__im__26);
#line 348
c_rt_lib0clear(&___nl__im__28);
#line 348
//clear ___nl__bool__29;
#line 348
c_rt_lib0clear(&___nl__im__30);
#line 348
return ___nl__im__35;
#line 349
goto label_134;
#line 349
label_134:
;
#line 349
//clear ___nl__bool__11;
#line 349
c_rt_lib0clear(&___nl__im__13);
#line 349
c_rt_lib0clear(&___nl__im__24);
#line 349
//clear ___nl__bool__25;
#line 349
c_rt_lib0clear(&___nl__im__26);
#line 349
c_rt_lib0clear(&___nl__im__28);
#line 349
//clear ___nl__bool__29;
#line 349
c_rt_lib0clear(&___nl__im__30);
#line 349
c_rt_lib0clear(&___nl__im__35);
#line 350
goto label_381;
#line 350
label_145:
;
#line 350
c_rt_lib0move(&___nl__im__38, nast0get_bin_ops());
#line 350
___nl__bool__9 = hash0has_key(___nl__im__38, ___nl__im__6);
#line 350
c_rt_lib0clear(&___nl__im__38);
#line 350
___nl__bool__9 = !___nl__bool__9;
#line 350
if(___nl__bool__9){ goto label_284;}
#line 351
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 352
c_rt_lib0move(&___nl__im__40, nast0get_bin_ops());
#line 352
c_rt_lib0move(&___nl__im__39, hash0get_value(___nl__im__40, ___nl__im__6));
#line 352
c_rt_lib0clear(&___nl__im__40);
#line 353
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1126)));
#line 353
___nl__int__42 = getIntFromImm(___nl__im__43);
#line 353
c_rt_lib0clear(&___nl__im__43);
#line 353
___nl__bool__41 = ___nl__int__42 < ___nl__int__2;
#line 353
//clear ___nl__int__42;
#line 353
if(___nl__bool__41){ goto label_173;}
#line 353
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1126)));
#line 353
___nl__int__45 = getIntFromImm(___nl__im__46);
#line 353
c_rt_lib0clear(&___nl__im__46);
#line 353
___nl__bool__41 = ___nl__int__45 == ___nl__int__2;
#line 353
//clear ___nl__int__45;
#line 353
___nl__bool__44 = !___nl__bool__41;
#line 353
if(___nl__bool__44){ goto label_171;}
#line 353
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1127)));
#line 353
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__47, ___get_global_string_const(285));
#line 353
c_rt_lib0clear(&___nl__im__47);
#line 353
label_171:
;
#line 353
//clear ___nl__bool__44;
#line 353
label_173:
;
#line 353
___nl__bool__41 = !___nl__bool__41;
#line 353
if(___nl__bool__41){ goto label_188;}
#line 353
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 353
c_rt_lib0clear(&___nl__im__1);
#line 353
//clear ___nl__int__2;
#line 353
c_rt_lib0clear(&___nl__im__3);
#line 353
c_rt_lib0clear(&___nl__im__4);
#line 353
c_rt_lib0clear(&___nl__im__6);
#line 353
c_rt_lib0clear(&___nl__im__8);
#line 353
//clear ___nl__bool__9;
#line 353
c_rt_lib0clear(&___nl__im__39);
#line 353
//clear ___nl__bool__41;
#line 353
return ___nl__im__48;
#line 353
goto label_188;
#line 353
label_188:
;
#line 353
//clear ___nl__bool__41;
#line 353
c_rt_lib0clear(&___nl__im__48);
#line 354
nparser_priv0eat(___ref___rec__0, ___nl__im__6);
#line 355
c_rt_lib0move(&___nl__im__50,___get_global_string_const(587));
#line 355
___nl__bool__49 = c_rt_lib0eq(___nl__im__8, ___nl__im__50);
#line 355
c_rt_lib0clear(&___nl__im__50);
#line 355
___nl__bool__49 = !___nl__bool__49;
#line 355
if(___nl__bool__49){ goto label_203;}
#line 356
c_rt_lib0move(&___nl__im__52, nparser_priv0parse_hash_key(___ref___rec__0));
#line 356
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(3, ___get_global_string_const(569), ___nl__im__8, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__52));
#line 356
c_rt_lib0clear(&___nl__im__52);
#line 356
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__51));
#line 356
c_rt_lib0clear(&___nl__im__51);
#line 357
goto label_276;
#line 357
label_203:
;
#line 357
c_rt_lib0move(&___nl__im__53,___get_global_string_const(1131));
#line 357
___nl__bool__49 = c_rt_lib0eq(___nl__im__8, ___nl__im__53);
#line 357
c_rt_lib0clear(&___nl__im__53);
#line 357
___nl__bool__49 = !___nl__bool__49;
#line 357
if(___nl__bool__49){ goto label_219;}
#line 358
c_rt_lib0move(&___nl__im__54,___get_global_string_const(539));
#line 358
nparser_priv0eat(___ref___rec__0, ___nl__im__54);
#line 358
c_rt_lib0clear(&___nl__im__54);
#line 359
c_rt_lib0move(&___nl__im__55, nparser_priv0parse_hash_key(___ref___rec__0));
#line 360
c_rt_lib0move(&___nl__im__57,___get_global_string_const(1107));
#line 360
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(3, ___get_global_string_const(569), ___nl__im__57, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__55));
#line 360
c_rt_lib0clear(&___nl__im__57);
#line 360
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__56));
#line 360
c_rt_lib0clear(&___nl__im__56);
#line 361
goto label_276;
#line 361
label_219:
;
#line 361
c_rt_lib0move(&___nl__im__58,___get_global_string_const(1130));
#line 361
___nl__bool__49 = c_rt_lib0eq(___nl__im__8, ___nl__im__58);
#line 361
c_rt_lib0clear(&___nl__im__58);
#line 361
___nl__bool__49 = !___nl__bool__49;
#line 361
if(___nl__bool__49){ goto label_235;}
#line 362
c_rt_lib0move(&___nl__im__59,___get_global_string_const(539));
#line 362
nparser_priv0eat(___ref___rec__0, ___nl__im__59);
#line 362
c_rt_lib0clear(&___nl__im__59);
#line 363
c_rt_lib0move(&___nl__im__60, nparser_priv0parse_hash_key(___ref___rec__0));
#line 364
c_rt_lib0move(&___nl__im__62,___get_global_string_const(1208));
#line 364
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_mk(3, ___get_global_string_const(569), ___nl__im__62, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__60));
#line 364
c_rt_lib0clear(&___nl__im__62);
#line 364
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__61));
#line 364
c_rt_lib0clear(&___nl__im__61);
#line 365
goto label_276;
#line 365
label_235:
;
#line 366
c_rt_lib0move(&___nl__im__64,___get_global_string_const(755));
#line 366
___nl__bool__63 = c_rt_lib0eq(___nl__im__8, ___nl__im__64);
#line 366
c_rt_lib0clear(&___nl__im__64);
#line 366
___nl__bool__63 = !___nl__bool__63;
#line 366
if(___nl__bool__63){ goto label_243;}
#line 366
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__1));
#line 366
goto label_243;
#line 366
label_243:
;
#line 366
//clear ___nl__bool__63;
#line 367
c_rt_lib0move(&___nl__im__70, nast0get_bin_ops());
#line 367
c_rt_lib0move(&___nl__im__69, hash0get_value(___nl__im__70, ___nl__im__8));
#line 367
c_rt_lib0clear(&___nl__im__70);
#line 367
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(1126)));
#line 367
___nl__int__68 = getIntFromImm(___nl__im__71);
#line 367
c_rt_lib0clear(&___nl__im__69);
#line 367
c_rt_lib0clear(&___nl__im__71);
#line 367
c_rt_lib0move(&___nl__im__67, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__68));
#line 367
//clear ___nl__int__68;
#line 367
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__67, ___get_global_string_const(83));
#line 367
if(___nl__bool__66){ goto label_270;}
#line 367
c_rt_lib0clear(&___nl__im__1);
#line 367
//clear ___nl__int__2;
#line 367
c_rt_lib0clear(&___nl__im__3);
#line 367
c_rt_lib0clear(&___nl__im__4);
#line 367
c_rt_lib0clear(&___nl__im__6);
#line 367
c_rt_lib0clear(&___nl__im__8);
#line 367
//clear ___nl__bool__9;
#line 367
c_rt_lib0clear(&___nl__im__39);
#line 367
//clear ___nl__bool__49;
#line 367
c_rt_lib0clear(&___nl__im__55);
#line 367
c_rt_lib0clear(&___nl__im__60);
#line 367
c_rt_lib0clear(&___nl__im__65);
#line 367
//clear ___nl__bool__66;
#line 367
return ___nl__im__67;
#line 367
label_270:
;
#line 367
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__67, ___get_global_string_const(83)));
#line 368
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(3, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(569), ___nl__im__8, ___get_global_string_const(286), ___nl__im__65));
#line 368
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__72));
#line 368
c_rt_lib0clear(&___nl__im__72);
#line 369
goto label_276;
#line 369
label_276:
;
#line 369
//clear ___nl__bool__49;
#line 369
c_rt_lib0clear(&___nl__im__55);
#line 369
c_rt_lib0clear(&___nl__im__60);
#line 369
c_rt_lib0clear(&___nl__im__65);
#line 369
//clear ___nl__bool__66;
#line 369
c_rt_lib0clear(&___nl__im__67);
#line 370
goto label_381;
#line 370
label_284:
;
#line 370
c_rt_lib0move(&___nl__im__73,___get_global_string_const(325));
#line 370
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__73);
#line 370
c_rt_lib0clear(&___nl__im__73);
#line 370
___nl__bool__9 = !___nl__bool__9;
#line 370
if(___nl__bool__9){ goto label_314;}
#line 371
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1105));
#line 372
c_rt_lib0move(&___nl__im__76, nparser_priv0parse_expr(___ref___rec__0));
#line 372
___nl__bool__75 = c_rt_lib0priv_is(___nl__im__76, ___get_global_string_const(83));
#line 372
if(___nl__bool__75){ goto label_305;}
#line 372
c_rt_lib0clear(&___nl__im__1);
#line 372
//clear ___nl__int__2;
#line 372
c_rt_lib0clear(&___nl__im__3);
#line 372
c_rt_lib0clear(&___nl__im__4);
#line 372
c_rt_lib0clear(&___nl__im__6);
#line 372
c_rt_lib0clear(&___nl__im__8);
#line 372
//clear ___nl__bool__9;
#line 372
c_rt_lib0clear(&___nl__im__39);
#line 372
c_rt_lib0clear(&___nl__im__74);
#line 372
//clear ___nl__bool__75;
#line 372
return ___nl__im__76;
#line 372
label_305:
;
#line 372
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__76, ___get_global_string_const(83)));
#line 373
c_rt_lib0move(&___nl__im__77,___get_global_string_const(326));
#line 373
nparser_priv0eat(___ref___rec__0, ___nl__im__77);
#line 373
c_rt_lib0clear(&___nl__im__77);
#line 374
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_mk(3, ___get_global_string_const(569), ___nl__im__8, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__74));
#line 374
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__78));
#line 374
c_rt_lib0clear(&___nl__im__78);
#line 375
goto label_381;
#line 375
label_314:
;
#line 375
c_rt_lib0move(&___nl__im__79,___get_global_string_const(315));
#line 375
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__79);
#line 375
c_rt_lib0clear(&___nl__im__79);
#line 375
___nl__bool__9 = !___nl__bool__9;
#line 375
if(___nl__bool__9){ goto label_347;}
#line 376
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1106));
#line 377
c_rt_lib0move(&___nl__im__82, nparser_priv0parse_expr(___ref___rec__0));
#line 377
___nl__bool__81 = c_rt_lib0priv_is(___nl__im__82, ___get_global_string_const(83));
#line 377
if(___nl__bool__81){ goto label_338;}
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
c_rt_lib0clear(&___nl__im__39);
#line 377
c_rt_lib0clear(&___nl__im__74);
#line 377
//clear ___nl__bool__75;
#line 377
c_rt_lib0clear(&___nl__im__76);
#line 377
c_rt_lib0clear(&___nl__im__80);
#line 377
//clear ___nl__bool__81;
#line 377
return ___nl__im__82;
#line 377
label_338:
;
#line 377
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__82, ___get_global_string_const(83)));
#line 378
c_rt_lib0move(&___nl__im__83,___get_global_string_const(316));
#line 378
nparser_priv0eat(___ref___rec__0, ___nl__im__83);
#line 378
c_rt_lib0clear(&___nl__im__83);
#line 379
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_mk(3, ___get_global_string_const(569), ___nl__im__8, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__80));
#line 379
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__84));
#line 379
c_rt_lib0clear(&___nl__im__84);
#line 380
goto label_381;
#line 380
label_347:
;
#line 380
c_rt_lib0move(&___nl__im__85,___get_global_string_const(807));
#line 380
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__85);
#line 380
c_rt_lib0clear(&___nl__im__85);
#line 380
___nl__bool__9 = !___nl__bool__9;
#line 380
if(___nl__bool__9){ goto label_355;}
#line 381
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1114), ___nl__im__1));
#line 382
goto label_381;
#line 382
label_355:
;
#line 382
c_rt_lib0move(&___nl__im__86,___get_global_string_const(200));
#line 382
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__86);
#line 382
c_rt_lib0clear(&___nl__im__86);
#line 382
___nl__bool__9 = !___nl__bool__9;
#line 382
if(___nl__bool__9){ goto label_363;}
#line 383
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1115), ___nl__im__1));
#line 384
goto label_381;
#line 384
label_363:
;
#line 385
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 385
c_rt_lib0clear(&___nl__im__1);
#line 385
//clear ___nl__int__2;
#line 385
c_rt_lib0clear(&___nl__im__3);
#line 385
c_rt_lib0clear(&___nl__im__4);
#line 385
c_rt_lib0clear(&___nl__im__6);
#line 385
c_rt_lib0clear(&___nl__im__8);
#line 385
//clear ___nl__bool__9;
#line 385
c_rt_lib0clear(&___nl__im__39);
#line 385
c_rt_lib0clear(&___nl__im__74);
#line 385
//clear ___nl__bool__75;
#line 385
c_rt_lib0clear(&___nl__im__76);
#line 385
c_rt_lib0clear(&___nl__im__80);
#line 385
//clear ___nl__bool__81;
#line 385
c_rt_lib0clear(&___nl__im__82);
#line 385
return ___nl__im__87;
#line 386
goto label_381;
#line 386
label_381:
;
#line 386
//clear ___nl__bool__9;
#line 386
c_rt_lib0clear(&___nl__im__39);
#line 386
c_rt_lib0clear(&___nl__im__74);
#line 386
//clear ___nl__bool__75;
#line 386
c_rt_lib0clear(&___nl__im__76);
#line 386
c_rt_lib0clear(&___nl__im__80);
#line 386
//clear ___nl__bool__81;
#line 386
c_rt_lib0clear(&___nl__im__82);
#line 386
c_rt_lib0clear(&___nl__im__87);
#line 388
___nl__rec_ptr__90 = &((*___ref___rec__0).state0field);
#line 388
c_rt_lib0move(&___nl__im__89, ntokenizer0get_place(___nl__rec_ptr__90));
#line 388
___nl__rec_ptr__90 = NULL;
#line 388
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(0));
#line 388
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__4, ___get_global_string_const(745), ___nl__im__89, ___get_global_string_const(1136), ___nl__im__91));
#line 388
c_rt_lib0clear(&___nl__im__89);
#line 388
c_rt_lib0clear(&___nl__im__91);
#line 390
c_rt_lib0move(&___nl__im__92, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 390
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__88, ___get_global_string_const(230), ___nl__im__3, ___get_global_string_const(216), ___nl__im__92));
#line 390
c_rt_lib0clear(&___nl__im__88);
#line 390
c_rt_lib0clear(&___nl__im__92);
#line 390
c_rt_lib0clear(&___nl__im__3);
#line 390
c_rt_lib0clear(&___nl__im__4);
#line 390
c_rt_lib0clear(&___nl__im__6);
#line 390
c_rt_lib0clear(&___nl__im__8);
#line 332
goto label_0;
#line 393
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_mk(0));
#line 393
nl_die_arg(___nl__im__93);
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
ImmT  ___nl__im__93 = NULL;
bool  ___nl__bool__94 = false;
ImmT  ___nl__im__95 = NULL;
INT  ___nl__int__96 = 0;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
bool  ___nl__bool__100 = false;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__104 = NULL;
ImmT  ___nl__im__105 = NULL;
bool  ___nl__bool__106 = false;
ImmT  ___nl__im__107 = NULL;
bool  ___nl__bool__108 = false;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
#line 398
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 398
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 398
___nl__rec_ptr__4 = NULL;
#line 399
c_rt_lib0move(&___nl__im__6,___get_global_string_const(466));
#line 399
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 399
c_rt_lib0clear(&___nl__im__6);
#line 399
___nl__bool__5 = !___nl__bool__5;
#line 399
if(___nl__bool__5){ goto label_25;}
#line 400
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_expr(___ref___rec__0));
#line 400
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 400
if(___nl__bool__8){ goto label_18;}
#line 400
//clear ___nl__int__1;
#line 400
c_rt_lib0clear(&___nl__im__2);
#line 400
c_rt_lib0clear(&___nl__im__3);
#line 400
//clear ___nl__bool__5;
#line 400
c_rt_lib0clear(&___nl__im__7);
#line 400
//clear ___nl__bool__8;
#line 400
return ___nl__im__9;
#line 400
label_18:
;
#line 400
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 401
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(1108), ___nl__im__7));
#line 402
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 402
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 402
c_rt_lib0clear(&___nl__im__10);
#line 403
goto label_553;
#line 403
label_25:
;
#line 403
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 403
c_rt_lib0move(&___nl__im__12,___get_global_string_const(315));
#line 403
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__11, ___nl__im__12);
#line 403
___nl__rec_ptr__11 = NULL;
#line 403
c_rt_lib0clear(&___nl__im__12);
#line 403
___nl__bool__5 = !___nl__bool__5;
#line 403
if(___nl__bool__5){ goto label_50;}
#line 404
c_rt_lib0move(&___nl__im__15, nparser_priv0parse_hash(___ref___rec__0));
#line 404
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 404
if(___nl__bool__14){ goto label_46;}
#line 404
//clear ___nl__int__1;
#line 404
c_rt_lib0clear(&___nl__im__2);
#line 404
c_rt_lib0clear(&___nl__im__3);
#line 404
//clear ___nl__bool__5;
#line 404
c_rt_lib0clear(&___nl__im__7);
#line 404
//clear ___nl__bool__8;
#line 404
c_rt_lib0clear(&___nl__im__9);
#line 404
c_rt_lib0clear(&___nl__im__13);
#line 404
//clear ___nl__bool__14;
#line 404
return ___nl__im__15;
#line 404
label_46:
;
#line 404
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 405
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(241), ___nl__im__13));
#line 406
goto label_553;
#line 406
label_50:
;
#line 406
___nl__rec_ptr__16 = &((*___ref___rec__0).state0field);
#line 406
c_rt_lib0move(&___nl__im__17,___get_global_string_const(325));
#line 406
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__16, ___nl__im__17);
#line 406
___nl__rec_ptr__16 = NULL;
#line 406
c_rt_lib0clear(&___nl__im__17);
#line 406
___nl__bool__5 = !___nl__bool__5;
#line 406
if(___nl__bool__5){ goto label_78;}
#line 407
c_rt_lib0move(&___nl__im__20, nparser_priv0parse_arr(___ref___rec__0));
#line 407
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(83));
#line 407
if(___nl__bool__19){ goto label_74;}
#line 407
//clear ___nl__int__1;
#line 407
c_rt_lib0clear(&___nl__im__2);
#line 407
c_rt_lib0clear(&___nl__im__3);
#line 407
//clear ___nl__bool__5;
#line 407
c_rt_lib0clear(&___nl__im__7);
#line 407
//clear ___nl__bool__8;
#line 407
c_rt_lib0clear(&___nl__im__9);
#line 407
c_rt_lib0clear(&___nl__im__13);
#line 407
//clear ___nl__bool__14;
#line 407
c_rt_lib0clear(&___nl__im__15);
#line 407
c_rt_lib0clear(&___nl__im__18);
#line 407
//clear ___nl__bool__19;
#line 407
return ___nl__im__20;
#line 407
label_74:
;
#line 407
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(83)));
#line 408
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(240), ___nl__im__18));
#line 409
goto label_553;
#line 409
label_78:
;
#line 409
___nl__rec_ptr__21 = &((*___ref___rec__0).state0field);
#line 409
c_rt_lib0move(&___nl__im__22,___get_global_string_const(539));
#line 409
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__21, ___nl__im__22);
#line 409
___nl__rec_ptr__21 = NULL;
#line 409
c_rt_lib0clear(&___nl__im__22);
#line 409
___nl__bool__5 = !___nl__bool__5;
#line 409
if(___nl__bool__5){ goto label_109;}
#line 410
c_rt_lib0move(&___nl__im__25, nparser_priv0parse_variant(___ref___rec__0));
#line 410
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(83));
#line 410
if(___nl__bool__24){ goto label_105;}
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
c_rt_lib0clear(&___nl__im__13);
#line 410
//clear ___nl__bool__14;
#line 410
c_rt_lib0clear(&___nl__im__15);
#line 410
c_rt_lib0clear(&___nl__im__18);
#line 410
//clear ___nl__bool__19;
#line 410
c_rt_lib0clear(&___nl__im__20);
#line 410
c_rt_lib0clear(&___nl__im__23);
#line 410
//clear ___nl__bool__24;
#line 410
return ___nl__im__25;
#line 410
label_105:
;
#line 410
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(83)));
#line 411
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(572), ___nl__im__23));
#line 412
goto label_553;
#line 412
label_109:
;
#line 412
___nl__rec_ptr__26 = &((*___ref___rec__0).state0field);
#line 412
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(1209)));
#line 412
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__26, ___nl__im__27);
#line 412
___nl__rec_ptr__26 = NULL;
#line 412
c_rt_lib0clear(&___nl__im__27);
#line 412
___nl__bool__5 = !___nl__bool__5;
#line 412
if(___nl__bool__5){ goto label_175;}
#line 413
___nl__rec_ptr__29 = &((*___ref___rec__0).state0field);
#line 413
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_none(___get_global_string_const(1209)));
#line 413
c_rt_lib0move(&___nl__im__28, ntokenizer0eat_type(___nl__rec_ptr__29, ___nl__im__30));
#line 413
___nl__rec_ptr__29 = NULL;
#line 413
c_rt_lib0clear(&___nl__im__30);
#line 415
c_rt_lib0move(&___nl__im__32, string_utils0get_integer(___nl__im__28));
#line 415
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(83));
#line 415
if(___nl__bool__33){ goto label_130;}
#line 417
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(82));
#line 417
if(___nl__bool__33){ goto label_135;}
#line 417
c_rt_lib0move(&___nl__im__34,___get_global_string_const(15));
#line 417
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__32));
#line 417
nl_die_arg(___nl__im__34);
#line 415
label_130:
;
#line 415
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(83)));
#line 415
___nl__int__35 = getIntFromImm(___nl__im__36);
#line 416
___nl__int__31 = ___nl__int__35;
#line 417
goto label_170;
#line 417
label_135:
;
#line 417
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(82)));
#line 417
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 418
c_rt_lib0move(&___nl__im__41,___get_global_string_const(1210));
#line 418
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__28));
#line 418
c_rt_lib0clear(&___nl__im__41);
#line 418
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__40));
#line 418
c_rt_lib0clear(&___nl__im__40);
#line 418
//clear ___nl__int__1;
#line 418
c_rt_lib0clear(&___nl__im__2);
#line 418
c_rt_lib0clear(&___nl__im__3);
#line 418
//clear ___nl__bool__5;
#line 418
c_rt_lib0clear(&___nl__im__7);
#line 418
//clear ___nl__bool__8;
#line 418
c_rt_lib0clear(&___nl__im__9);
#line 418
c_rt_lib0clear(&___nl__im__13);
#line 418
//clear ___nl__bool__14;
#line 418
c_rt_lib0clear(&___nl__im__15);
#line 418
c_rt_lib0clear(&___nl__im__18);
#line 418
//clear ___nl__bool__19;
#line 418
c_rt_lib0clear(&___nl__im__20);
#line 418
c_rt_lib0clear(&___nl__im__23);
#line 418
//clear ___nl__bool__24;
#line 418
c_rt_lib0clear(&___nl__im__25);
#line 418
c_rt_lib0clear(&___nl__im__28);
#line 418
//clear ___nl__int__31;
#line 418
c_rt_lib0clear(&___nl__im__32);
#line 418
//clear ___nl__bool__33;
#line 418
c_rt_lib0clear(&___nl__im__34);
#line 418
//clear ___nl__int__35;
#line 418
c_rt_lib0clear(&___nl__im__36);
#line 418
c_rt_lib0clear(&___nl__im__37);
#line 418
c_rt_lib0clear(&___nl__im__38);
#line 418
return ___nl__im__39;
#line 419
goto label_170;
#line 419
label_170:
;
#line 420
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__31));
#line 420
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(232), ___nl__im__42));
#line 420
c_rt_lib0clear(&___nl__im__42);
#line 421
goto label_553;
#line 421
label_175:
;
#line 421
___nl__rec_ptr__43 = &((*___ref___rec__0).state0field);
#line 421
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(1211)));
#line 421
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__43, ___nl__im__44);
#line 421
___nl__rec_ptr__43 = NULL;
#line 421
c_rt_lib0clear(&___nl__im__44);
#line 421
if(___nl__bool__5){ goto label_187;}
#line 421
___nl__rec_ptr__45 = &((*___ref___rec__0).state0field);
#line 421
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(415)));
#line 421
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__45, ___nl__im__46);
#line 421
___nl__rec_ptr__45 = NULL;
#line 421
c_rt_lib0clear(&___nl__im__46);
#line 421
label_187:
;
#line 421
___nl__bool__5 = !___nl__bool__5;
#line 421
if(___nl__bool__5){ goto label_253;}
#line 422
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 422
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(1, ___get_global_string_const(134), ___nl__im__48));
#line 422
c_rt_lib0clear(&___nl__im__48);
#line 423
label_193:
;
#line 423
___nl__rec_ptr__50 = &((*___ref___rec__0).state0field);
#line 423
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_none(___get_global_string_const(1211)));
#line 423
___nl__bool__49 = ntokenizer0is_type(___nl__rec_ptr__50, ___nl__im__51);
#line 423
___nl__rec_ptr__50 = NULL;
#line 423
c_rt_lib0clear(&___nl__im__51);
#line 423
___nl__bool__49 = !___nl__bool__49;
#line 423
if(___nl__bool__49){ goto label_215;}
#line 424
c_rt_lib0move(&___nl__im__52,___get_global_string_const(134));
#line 424
c_rt_lib0move(&___nl__im__52, c_rt_lib0get_ref_hash(___nl__im__47, ___nl__im__52));
#line 424
___nl__rec_ptr__54 = &((*___ref___rec__0).state0field);
#line 424
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_string_const(1211)));
#line 424
c_rt_lib0move(&___nl__im__53, ntokenizer0eat_type(___nl__rec_ptr__54, ___nl__im__55));
#line 424
___nl__rec_ptr__54 = NULL;
#line 424
c_rt_lib0clear(&___nl__im__55);
#line 424
c_rt_lib0delete(array0push(&___nl__im__52, ___nl__im__53));
#line 424
c_rt_lib0move(&___nl__string__56,___get_global_string_const(134));
#line 424
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__47, ___nl__string__56, ___nl__im__52));
#line 424
c_rt_lib0clear(&___nl__im__52);
#line 424
c_rt_lib0clear(&___nl__im__53);
#line 424
c_rt_lib0clear(&___nl__string__56);
#line 425
goto label_193;
#line 425
label_215:
;
#line 426
___nl__rec_ptr__58 = &((*___ref___rec__0).state0field);
#line 426
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(415)));
#line 426
___nl__bool__57 = ntokenizer0is_type(___nl__rec_ptr__58, ___nl__im__59);
#line 426
___nl__rec_ptr__58 = NULL;
#line 426
c_rt_lib0clear(&___nl__im__59);
#line 426
___nl__bool__57 = !___nl__bool__57;
#line 426
if(___nl__bool__57){ goto label_242;}
#line 427
c_rt_lib0move(&___nl__im__60,___get_global_string_const(134));
#line 427
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_hash(___nl__im__47, ___nl__im__60));
#line 427
___nl__rec_ptr__62 = &((*___ref___rec__0).state0field);
#line 427
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(415)));
#line 427
c_rt_lib0move(&___nl__im__61, ntokenizer0eat_type(___nl__rec_ptr__62, ___nl__im__63));
#line 427
___nl__rec_ptr__62 = NULL;
#line 427
c_rt_lib0clear(&___nl__im__63);
#line 427
c_rt_lib0delete(array0push(&___nl__im__60, ___nl__im__61));
#line 427
c_rt_lib0move(&___nl__string__64,___get_global_string_const(134));
#line 427
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__47, ___nl__string__64, ___nl__im__60));
#line 427
c_rt_lib0clear(&___nl__im__60);
#line 427
c_rt_lib0clear(&___nl__im__61);
#line 427
c_rt_lib0clear(&___nl__string__64);
#line 428
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_string_const(745)));
#line 428
c_rt_lib0copy(&___nl__im__66, ___nl__im__65);
#line 428
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_string_const(1147), ___nl__im__66);
#line 428
c_rt_lib0clear(&___nl__im__65);
#line 428
c_rt_lib0clear(&___nl__im__66);
#line 429
goto label_249;
#line 429
label_242:
;
#line 430
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_string_const(1146)));
#line 430
c_rt_lib0copy(&___nl__im__68, ___nl__im__67);
#line 430
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_string_const(1147), ___nl__im__68);
#line 430
c_rt_lib0clear(&___nl__im__67);
#line 430
c_rt_lib0clear(&___nl__im__68);
#line 431
goto label_249;
#line 431
label_249:
;
#line 431
//clear ___nl__bool__57;
#line 432
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(415), ___nl__im__47));
#line 433
goto label_553;
#line 433
label_253:
;
#line 433
___nl__rec_ptr__69 = &((*___ref___rec__0).state0field);
#line 433
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 433
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__69, ___nl__im__70);
#line 433
___nl__rec_ptr__69 = NULL;
#line 433
c_rt_lib0clear(&___nl__im__70);
#line 433
___nl__bool__5 = !___nl__bool__5;
#line 433
if(___nl__bool__5){ goto label_297;}
#line 434
c_rt_lib0move(&___nl__im__72, nparser_priv0parse_label(___ref___rec__0));
#line 434
___nl__bool__71 = c_rt_lib0priv_is(___nl__im__72, ___get_global_string_const(83));
#line 434
if(___nl__bool__71){ goto label_294;}
#line 434
//clear ___nl__int__1;
#line 434
c_rt_lib0clear(&___nl__im__2);
#line 434
c_rt_lib0clear(&___nl__im__3);
#line 434
//clear ___nl__bool__5;
#line 434
c_rt_lib0clear(&___nl__im__7);
#line 434
//clear ___nl__bool__8;
#line 434
c_rt_lib0clear(&___nl__im__9);
#line 434
c_rt_lib0clear(&___nl__im__13);
#line 434
//clear ___nl__bool__14;
#line 434
c_rt_lib0clear(&___nl__im__15);
#line 434
c_rt_lib0clear(&___nl__im__18);
#line 434
//clear ___nl__bool__19;
#line 434
c_rt_lib0clear(&___nl__im__20);
#line 434
c_rt_lib0clear(&___nl__im__23);
#line 434
//clear ___nl__bool__24;
#line 434
c_rt_lib0clear(&___nl__im__25);
#line 434
c_rt_lib0clear(&___nl__im__28);
#line 434
//clear ___nl__int__31;
#line 434
c_rt_lib0clear(&___nl__im__32);
#line 434
//clear ___nl__bool__33;
#line 434
c_rt_lib0clear(&___nl__im__34);
#line 434
//clear ___nl__int__35;
#line 434
c_rt_lib0clear(&___nl__im__36);
#line 434
c_rt_lib0clear(&___nl__im__37);
#line 434
c_rt_lib0clear(&___nl__im__38);
#line 434
c_rt_lib0clear(&___nl__im__39);
#line 434
c_rt_lib0clear(&___nl__im__47);
#line 434
//clear ___nl__bool__49;
#line 434
//clear ___nl__bool__71;
#line 434
return ___nl__im__72;
#line 434
label_294:
;
#line 434
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__72, ___get_global_string_const(83)));
#line 435
goto label_553;
#line 435
label_297:
;
#line 435
___nl__rec_ptr__74 = &((*___ref___rec__0).state0field);
#line 435
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_none(___get_global_string_const(1212)));
#line 435
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__74, ___nl__im__75);
#line 435
___nl__rec_ptr__74 = NULL;
#line 435
c_rt_lib0clear(&___nl__im__75);
#line 435
___nl__bool__73 = !___nl__bool__5;
#line 435
if(___nl__bool__73){ goto label_312;}
#line 435
c_rt_lib0move(&___nl__im__76, nast0get_unary_ops());
#line 436
___nl__rec_ptr__78 = &((*___ref___rec__0).state0field);
#line 436
c_rt_lib0move(&___nl__im__77, ntokenizer0get_token(___nl__rec_ptr__78));
#line 436
___nl__rec_ptr__78 = NULL;
#line 436
___nl__bool__5 = hash0has_key(___nl__im__76, ___nl__im__77);
#line 436
c_rt_lib0clear(&___nl__im__76);
#line 436
c_rt_lib0clear(&___nl__im__77);
#line 436
label_312:
;
#line 436
//clear ___nl__bool__73;
#line 436
___nl__bool__5 = !___nl__bool__5;
#line 436
if(___nl__bool__5){ goto label_418;}
#line 437
___nl__rec_ptr__80 = &((*___ref___rec__0).state0field);
#line 437
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_string_const(1212)));
#line 437
c_rt_lib0move(&___nl__im__79, ntokenizer0eat_type(___nl__rec_ptr__80, ___nl__im__81));
#line 437
___nl__rec_ptr__80 = NULL;
#line 437
c_rt_lib0clear(&___nl__im__81);
#line 439
c_rt_lib0move(&___nl__im__84,___get_global_string_const(309));
#line 439
___nl__bool__83 = c_rt_lib0eq(___nl__im__79, ___nl__im__84);
#line 439
c_rt_lib0clear(&___nl__im__84);
#line 439
___nl__bool__83 = !___nl__bool__83;
#line 439
if(___nl__bool__83){ goto label_343;}
#line 440
___nl__rec_ptr__86 = &((*___ref___rec__0).state0field);
#line 440
c_rt_lib0move(&___nl__im__85, ntokenizer0get_place(___nl__rec_ptr__86));
#line 440
___nl__rec_ptr__86 = NULL;
#line 441
c_rt_lib0move(&___nl__im__88, nparser_priv0parse_fun_label(___ref___rec__0));
#line 441
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(1113), ___nl__im__88));
#line 441
c_rt_lib0clear(&___nl__im__88);
#line 442
___nl__rec_ptr__90 = &((*___ref___rec__0).state0field);
#line 442
c_rt_lib0move(&___nl__im__89, ntokenizer0get_place(___nl__rec_ptr__90));
#line 442
___nl__rec_ptr__90 = NULL;
#line 447
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(0));
#line 447
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__85, ___get_global_string_const(745), ___nl__im__89, ___get_global_string_const(1136), ___nl__im__92));
#line 447
c_rt_lib0clear(&___nl__im__92);
#line 450
c_rt_lib0move(&___nl__im__93, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 450
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__91, ___get_global_string_const(230), ___nl__im__87, ___get_global_string_const(216), ___nl__im__93));
#line 450
c_rt_lib0clear(&___nl__im__91);
#line 450
c_rt_lib0clear(&___nl__im__93);
#line 452
goto label_407;
#line 452
label_343:
;
#line 453
c_rt_lib0move(&___nl__im__98, nast0get_unary_ops());
#line 453
c_rt_lib0move(&___nl__im__97, hash0get_value(___nl__im__98, ___nl__im__79));
#line 453
c_rt_lib0clear(&___nl__im__98);
#line 453
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__97, ___get_global_string_const(1126)));
#line 453
___nl__int__96 = getIntFromImm(___nl__im__99);
#line 453
c_rt_lib0clear(&___nl__im__97);
#line 453
c_rt_lib0clear(&___nl__im__99);
#line 453
c_rt_lib0move(&___nl__im__95, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__96));
#line 453
//clear ___nl__int__96;
#line 453
___nl__bool__94 = c_rt_lib0priv_is(___nl__im__95, ___get_global_string_const(83));
#line 453
if(___nl__bool__94){ goto label_393;}
#line 453
//clear ___nl__int__1;
#line 453
c_rt_lib0clear(&___nl__im__2);
#line 453
c_rt_lib0clear(&___nl__im__3);
#line 453
//clear ___nl__bool__5;
#line 453
c_rt_lib0clear(&___nl__im__7);
#line 453
//clear ___nl__bool__8;
#line 453
c_rt_lib0clear(&___nl__im__9);
#line 453
c_rt_lib0clear(&___nl__im__13);
#line 453
//clear ___nl__bool__14;
#line 453
c_rt_lib0clear(&___nl__im__15);
#line 453
c_rt_lib0clear(&___nl__im__18);
#line 453
//clear ___nl__bool__19;
#line 453
c_rt_lib0clear(&___nl__im__20);
#line 453
c_rt_lib0clear(&___nl__im__23);
#line 453
//clear ___nl__bool__24;
#line 453
c_rt_lib0clear(&___nl__im__25);
#line 453
c_rt_lib0clear(&___nl__im__28);
#line 453
//clear ___nl__int__31;
#line 453
c_rt_lib0clear(&___nl__im__32);
#line 453
//clear ___nl__bool__33;
#line 453
c_rt_lib0clear(&___nl__im__34);
#line 453
//clear ___nl__int__35;
#line 453
c_rt_lib0clear(&___nl__im__36);
#line 453
c_rt_lib0clear(&___nl__im__37);
#line 453
c_rt_lib0clear(&___nl__im__38);
#line 453
c_rt_lib0clear(&___nl__im__39);
#line 453
c_rt_lib0clear(&___nl__im__47);
#line 453
//clear ___nl__bool__49;
#line 453
//clear ___nl__bool__71;
#line 453
c_rt_lib0clear(&___nl__im__72);
#line 453
c_rt_lib0clear(&___nl__im__79);
#line 453
c_rt_lib0clear(&___nl__im__82);
#line 453
//clear ___nl__bool__83;
#line 453
c_rt_lib0clear(&___nl__im__85);
#line 453
c_rt_lib0clear(&___nl__im__87);
#line 453
c_rt_lib0clear(&___nl__im__89);
#line 453
//clear ___nl__bool__94;
#line 453
return ___nl__im__95;
#line 453
label_393:
;
#line 453
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__95, ___get_global_string_const(83)));
#line 454
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(230)));
#line 454
___nl__bool__100 = c_rt_lib0priv_is(___nl__im__101, ___get_global_string_const(1112));
#line 454
c_rt_lib0clear(&___nl__im__101);
#line 454
___nl__bool__100 = !___nl__bool__100;
#line 454
if(___nl__bool__100){ goto label_404;}
#line 454
c_rt_lib0move(&___nl__im__102,___get_global_string_const(1213));
#line 454
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__102));
#line 454
c_rt_lib0clear(&___nl__im__102);
#line 454
goto label_404;
#line 454
label_404:
;
#line 454
//clear ___nl__bool__100;
#line 455
goto label_407;
#line 455
label_407:
;
#line 455
//clear ___nl__bool__83;
#line 455
c_rt_lib0clear(&___nl__im__85);
#line 455
c_rt_lib0clear(&___nl__im__87);
#line 455
c_rt_lib0clear(&___nl__im__89);
#line 455
//clear ___nl__bool__94;
#line 455
c_rt_lib0clear(&___nl__im__95);
#line 456
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_mk(2, ___get_global_string_const(569), ___nl__im__79, ___get_global_string_const(234), ___nl__im__82));
#line 456
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(1112), ___nl__im__103));
#line 456
c_rt_lib0clear(&___nl__im__103);
#line 457
goto label_553;
#line 457
label_418:
;
#line 457
___nl__rec_ptr__104 = &((*___ref___rec__0).state0field);
#line 457
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_none(___get_global_string_const(1214)));
#line 457
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__104, ___nl__im__105);
#line 457
___nl__rec_ptr__104 = NULL;
#line 457
c_rt_lib0clear(&___nl__im__105);
#line 457
___nl__bool__5 = !___nl__bool__5;
#line 457
if(___nl__bool__5){ goto label_504;}
#line 458
c_rt_lib0move(&___nl__im__107,___get_global_string_const(582));
#line 458
___nl__bool__106 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__107);
#line 458
c_rt_lib0clear(&___nl__im__107);
#line 458
___nl__bool__106 = !___nl__bool__106;
#line 458
if(___nl__bool__106){ goto label_437;}
#line 459
___nl__bool__108 = true;
#line 459
c_rt_lib0move(&___nl__im__109, c_rt_lib0bool_to_nl_native(___nl__bool__108));
#line 459
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(33), ___nl__im__109));
#line 459
//clear ___nl__bool__108;
#line 459
c_rt_lib0clear(&___nl__im__109);
#line 460
goto label_499;
#line 460
label_437:
;
#line 460
c_rt_lib0move(&___nl__im__110,___get_global_string_const(581));
#line 460
___nl__bool__106 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__110);
#line 460
c_rt_lib0clear(&___nl__im__110);
#line 460
___nl__bool__106 = !___nl__bool__106;
#line 460
if(___nl__bool__106){ goto label_449;}
#line 461
___nl__bool__111 = false;
#line 461
c_rt_lib0move(&___nl__im__112, c_rt_lib0bool_to_nl_native(___nl__bool__111));
#line 461
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(33), ___nl__im__112));
#line 461
//clear ___nl__bool__111;
#line 461
c_rt_lib0clear(&___nl__im__112);
#line 462
goto label_499;
#line 462
label_449:
;
#line 463
c_rt_lib0move(&___nl__im__115,___get_global_string_const(1215));
#line 463
c_rt_lib0move(&___nl__im__116, string0lf());
#line 463
c_rt_lib0move(&___nl__im__114, c_rt_lib0concat_new(___nl__im__115, ___nl__im__116));
#line 463
c_rt_lib0clear(&___nl__im__115);
#line 463
c_rt_lib0clear(&___nl__im__116);
#line 463
___nl__rec_ptr__118 = &((*___ref___rec__0).state0field);
#line 463
c_rt_lib0move(&___nl__im__117, ntokenizer0info(___nl__rec_ptr__118));
#line 463
___nl__rec_ptr__118 = NULL;
#line 463
c_rt_lib0move(&___nl__im__113, c_rt_lib0concat_new(___nl__im__114, ___nl__im__117));
#line 463
c_rt_lib0clear(&___nl__im__114);
#line 463
c_rt_lib0clear(&___nl__im__117);
#line 464
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__113));
#line 465
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__113));
#line 465
//clear ___nl__int__1;
#line 465
c_rt_lib0clear(&___nl__im__2);
#line 465
c_rt_lib0clear(&___nl__im__3);
#line 465
//clear ___nl__bool__5;
#line 465
c_rt_lib0clear(&___nl__im__7);
#line 465
//clear ___nl__bool__8;
#line 465
c_rt_lib0clear(&___nl__im__9);
#line 465
c_rt_lib0clear(&___nl__im__13);
#line 465
//clear ___nl__bool__14;
#line 465
c_rt_lib0clear(&___nl__im__15);
#line 465
c_rt_lib0clear(&___nl__im__18);
#line 465
//clear ___nl__bool__19;
#line 465
c_rt_lib0clear(&___nl__im__20);
#line 465
c_rt_lib0clear(&___nl__im__23);
#line 465
//clear ___nl__bool__24;
#line 465
c_rt_lib0clear(&___nl__im__25);
#line 465
c_rt_lib0clear(&___nl__im__28);
#line 465
//clear ___nl__int__31;
#line 465
c_rt_lib0clear(&___nl__im__32);
#line 465
//clear ___nl__bool__33;
#line 465
c_rt_lib0clear(&___nl__im__34);
#line 465
//clear ___nl__int__35;
#line 465
c_rt_lib0clear(&___nl__im__36);
#line 465
c_rt_lib0clear(&___nl__im__37);
#line 465
c_rt_lib0clear(&___nl__im__38);
#line 465
c_rt_lib0clear(&___nl__im__39);
#line 465
c_rt_lib0clear(&___nl__im__47);
#line 465
//clear ___nl__bool__49;
#line 465
//clear ___nl__bool__71;
#line 465
c_rt_lib0clear(&___nl__im__72);
#line 465
c_rt_lib0clear(&___nl__im__79);
#line 465
c_rt_lib0clear(&___nl__im__82);
#line 465
//clear ___nl__bool__106;
#line 465
c_rt_lib0clear(&___nl__im__113);
#line 465
return ___nl__im__119;
#line 466
goto label_499;
#line 466
label_499:
;
#line 466
//clear ___nl__bool__106;
#line 466
c_rt_lib0clear(&___nl__im__113);
#line 466
c_rt_lib0clear(&___nl__im__119);
#line 467
goto label_553;
#line 467
label_504:
;
#line 468
c_rt_lib0move(&___nl__im__122,___get_global_string_const(1216));
#line 468
c_rt_lib0move(&___nl__im__123, string0lf());
#line 468
c_rt_lib0move(&___nl__im__121, c_rt_lib0concat_new(___nl__im__122, ___nl__im__123));
#line 468
c_rt_lib0clear(&___nl__im__122);
#line 468
c_rt_lib0clear(&___nl__im__123);
#line 468
___nl__rec_ptr__125 = &((*___ref___rec__0).state0field);
#line 468
c_rt_lib0move(&___nl__im__124, ntokenizer0info(___nl__rec_ptr__125));
#line 468
___nl__rec_ptr__125 = NULL;
#line 468
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__124));
#line 468
c_rt_lib0clear(&___nl__im__121);
#line 468
c_rt_lib0clear(&___nl__im__124);
#line 469
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__120));
#line 470
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__120));
#line 470
//clear ___nl__int__1;
#line 470
c_rt_lib0clear(&___nl__im__2);
#line 470
c_rt_lib0clear(&___nl__im__3);
#line 470
//clear ___nl__bool__5;
#line 470
c_rt_lib0clear(&___nl__im__7);
#line 470
//clear ___nl__bool__8;
#line 470
c_rt_lib0clear(&___nl__im__9);
#line 470
c_rt_lib0clear(&___nl__im__13);
#line 470
//clear ___nl__bool__14;
#line 470
c_rt_lib0clear(&___nl__im__15);
#line 470
c_rt_lib0clear(&___nl__im__18);
#line 470
//clear ___nl__bool__19;
#line 470
c_rt_lib0clear(&___nl__im__20);
#line 470
c_rt_lib0clear(&___nl__im__23);
#line 470
//clear ___nl__bool__24;
#line 470
c_rt_lib0clear(&___nl__im__25);
#line 470
c_rt_lib0clear(&___nl__im__28);
#line 470
//clear ___nl__int__31;
#line 470
c_rt_lib0clear(&___nl__im__32);
#line 470
//clear ___nl__bool__33;
#line 470
c_rt_lib0clear(&___nl__im__34);
#line 470
//clear ___nl__int__35;
#line 470
c_rt_lib0clear(&___nl__im__36);
#line 470
c_rt_lib0clear(&___nl__im__37);
#line 470
c_rt_lib0clear(&___nl__im__38);
#line 470
c_rt_lib0clear(&___nl__im__39);
#line 470
c_rt_lib0clear(&___nl__im__47);
#line 470
//clear ___nl__bool__49;
#line 470
//clear ___nl__bool__71;
#line 470
c_rt_lib0clear(&___nl__im__72);
#line 470
c_rt_lib0clear(&___nl__im__79);
#line 470
c_rt_lib0clear(&___nl__im__82);
#line 470
c_rt_lib0clear(&___nl__im__120);
#line 470
return ___nl__im__126;
#line 471
goto label_553;
#line 471
label_553:
;
#line 471
//clear ___nl__bool__5;
#line 471
c_rt_lib0clear(&___nl__im__7);
#line 471
//clear ___nl__bool__8;
#line 471
c_rt_lib0clear(&___nl__im__9);
#line 471
c_rt_lib0clear(&___nl__im__13);
#line 471
//clear ___nl__bool__14;
#line 471
c_rt_lib0clear(&___nl__im__15);
#line 471
c_rt_lib0clear(&___nl__im__18);
#line 471
//clear ___nl__bool__19;
#line 471
c_rt_lib0clear(&___nl__im__20);
#line 471
c_rt_lib0clear(&___nl__im__23);
#line 471
//clear ___nl__bool__24;
#line 471
c_rt_lib0clear(&___nl__im__25);
#line 471
c_rt_lib0clear(&___nl__im__28);
#line 471
//clear ___nl__int__31;
#line 471
c_rt_lib0clear(&___nl__im__32);
#line 471
//clear ___nl__bool__33;
#line 471
c_rt_lib0clear(&___nl__im__34);
#line 471
//clear ___nl__int__35;
#line 471
c_rt_lib0clear(&___nl__im__36);
#line 471
c_rt_lib0clear(&___nl__im__37);
#line 471
c_rt_lib0clear(&___nl__im__38);
#line 471
c_rt_lib0clear(&___nl__im__39);
#line 471
c_rt_lib0clear(&___nl__im__47);
#line 471
//clear ___nl__bool__49;
#line 471
//clear ___nl__bool__71;
#line 471
c_rt_lib0clear(&___nl__im__72);
#line 471
c_rt_lib0clear(&___nl__im__79);
#line 471
c_rt_lib0clear(&___nl__im__82);
#line 471
c_rt_lib0clear(&___nl__im__120);
#line 471
c_rt_lib0clear(&___nl__im__126);
#line 473
___nl__rec_ptr__130 = &((*___ref___rec__0).state0field);
#line 473
c_rt_lib0move(&___nl__im__129, ntokenizer0get_place(___nl__rec_ptr__130));
#line 473
___nl__rec_ptr__130 = NULL;
#line 473
c_rt_lib0move(&___nl__im__131, c_rt_lib0array_mk(0));
#line 473
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__3, ___get_global_string_const(745), ___nl__im__129, ___get_global_string_const(1136), ___nl__im__131));
#line 473
c_rt_lib0clear(&___nl__im__129);
#line 473
c_rt_lib0clear(&___nl__im__131);
#line 475
c_rt_lib0move(&___nl__im__132, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 475
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__128, ___get_global_string_const(230), ___nl__im__2, ___get_global_string_const(216), ___nl__im__132));
#line 475
c_rt_lib0clear(&___nl__im__128);
#line 475
c_rt_lib0clear(&___nl__im__132);
#line 477
c_rt_lib0move(&___nl__im__133, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__127, ___nl__int__1));
#line 477
//clear ___nl__int__1;
#line 477
c_rt_lib0clear(&___nl__im__2);
#line 477
c_rt_lib0clear(&___nl__im__3);
#line 477
c_rt_lib0clear(&___nl__im__127);
#line 477
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
ImmT  ___nl__im__9 = NULL;
#line 483
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 483
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 483
___nl__rec_ptr__4 = NULL;
#line 484
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 484
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 484
___nl__rec_ptr__6 = NULL;
#line 485
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 485
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__3, ___get_global_string_const(745), ___nl__im__5, ___get_global_string_const(1136), ___nl__im__7));
#line 485
c_rt_lib0clear(&___nl__im__3);
#line 485
c_rt_lib0clear(&___nl__im__5);
#line 485
c_rt_lib0clear(&___nl__im__7);
#line 487
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(1089)));
#line 488
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 488
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(210), ___nl__im__2, ___get_global_string_const(230), ___nl__im__8, ___get_global_string_const(216), ___nl__im__9));
#line 488
c_rt_lib0clear(&___nl__im__2);
#line 488
c_rt_lib0clear(&___nl__im__8);
#line 488
c_rt_lib0clear(&___nl__im__9);
#line 488
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
#line 493
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 493
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 493
___nl__rec_ptr__2 = NULL;
#line 493
___nl__bool__1 = !___nl__bool__1;
#line 493
if(___nl__bool__1){ goto label_13;}
#line 494
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 494
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__5));
#line 494
___nl__rec_ptr__5 = NULL;
#line 494
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__4));
#line 494
c_rt_lib0clear(&___nl__im__4);
#line 494
//clear ___nl__bool__1;
#line 494
return ___nl__im__3;
#line 495
goto label_24;
#line 495
label_13:
;
#line 496
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1217));
#line 496
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__6));
#line 496
c_rt_lib0clear(&___nl__im__6);
#line 497
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1217));
#line 497
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__8));
#line 497
c_rt_lib0clear(&___nl__im__8);
#line 497
//clear ___nl__bool__1;
#line 497
c_rt_lib0clear(&___nl__im__3);
#line 497
return ___nl__im__7;
#line 498
goto label_24;
#line 498
label_24:
;
#line 498
//clear ___nl__bool__1;
#line 498
c_rt_lib0clear(&___nl__im__3);
#line 498
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
#line 502
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 502
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 502
___nl__rec_ptr__2 = NULL;
#line 502
___nl__bool__1 = !___nl__bool__1;
#line 502
if(___nl__bool__1){ goto label_11;}
#line 503
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 503
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_text(___nl__rec_ptr__4));
#line 503
___nl__rec_ptr__4 = NULL;
#line 503
//clear ___nl__bool__1;
#line 503
return ___nl__im__3;
#line 504
goto label_20;
#line 504
label_11:
;
#line 505
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1217));
#line 505
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__5));
#line 505
c_rt_lib0clear(&___nl__im__5);
#line 506
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 506
//clear ___nl__bool__1;
#line 506
c_rt_lib0clear(&___nl__im__3);
#line 506
return ___nl__im__6;
#line 507
goto label_20;
#line 507
label_20:
;
#line 507
//clear ___nl__bool__1;
#line 507
c_rt_lib0clear(&___nl__im__3);
#line 507
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
#line 511
c_rt_lib0move(&___nl__im__1,___get_global_string_const(539));
#line 511
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 511
c_rt_lib0clear(&___nl__im__1);
#line 512
c_rt_lib0move(&___nl__im__2, nparser_priv0parse_variant_label(___ref___rec__0));
#line 513
c_rt_lib0move(&___nl__im__3, nparser_priv0get_value_nop(___ref___rec__0));
#line 514
c_rt_lib0move(&___nl__im__5,___get_global_string_const(466));
#line 514
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 514
c_rt_lib0clear(&___nl__im__5);
#line 514
___nl__bool__4 = !___nl__bool__4;
#line 514
if(___nl__bool__4){ goto label_24;}
#line 515
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 515
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
#line 515
if(___nl__bool__6){ goto label_18;}
#line 515
c_rt_lib0clear(&___nl__im__2);
#line 515
c_rt_lib0clear(&___nl__im__3);
#line 515
//clear ___nl__bool__4;
#line 515
//clear ___nl__bool__6;
#line 515
return ___nl__im__7;
#line 515
label_18:
;
#line 515
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 516
c_rt_lib0move(&___nl__im__8,___get_global_string_const(331));
#line 516
nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 516
c_rt_lib0clear(&___nl__im__8);
#line 517
goto label_27;
#line 517
label_24:
;
#line 518
c_rt_lib0move(&___nl__im__3, nparser_priv0get_value_nop(___ref___rec__0));
#line 519
goto label_27;
#line 519
label_27:
;
#line 519
//clear ___nl__bool__4;
#line 519
//clear ___nl__bool__6;
#line 519
c_rt_lib0clear(&___nl__im__7);
#line 520
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__2, ___get_global_string_const(516), ___nl__im__3));
#line 520
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__10));
#line 520
c_rt_lib0clear(&___nl__im__10);
#line 520
c_rt_lib0clear(&___nl__im__2);
#line 520
c_rt_lib0clear(&___nl__im__3);
#line 520
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
#line 524
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(230)));
#line 524
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(516));
#line 524
c_rt_lib0clear(&___nl__im__3);
#line 524
___nl__bool__2 = !___nl__bool__2;
#line 524
if(___nl__bool__2){ goto label_9;}
#line 525
c_rt_lib0clear(&___nl__im__1);
#line 525
//clear ___nl__bool__2;
#line 525
return NULL;
#line 526
goto label_78;
#line 526
label_9:
;
#line 526
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(230)));
#line 526
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(245));
#line 526
c_rt_lib0clear(&___nl__im__4);
#line 526
___nl__bool__2 = !___nl__bool__2;
#line 526
if(___nl__bool__2){ goto label_60;}
#line 527
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(230)));
#line 527
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(230)));
#line 527
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(245)));
#line 527
c_rt_lib0clear(&___nl__im__6);
#line 527
c_rt_lib0clear(&___nl__im__7);
#line 528
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(569)));
#line 528
c_rt_lib0move(&___nl__im__10,___get_global_string_const(587));
#line 528
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 528
c_rt_lib0clear(&___nl__im__9);
#line 528
c_rt_lib0clear(&___nl__im__10);
#line 528
if(___nl__bool__8){ goto label_31;}
#line 528
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(569)));
#line 528
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1105));
#line 528
___nl__bool__8 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 528
c_rt_lib0clear(&___nl__im__11);
#line 528
c_rt_lib0clear(&___nl__im__12);
#line 528
label_31:
;
#line 528
if(___nl__bool__8){ goto label_38;}
#line 528
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(569)));
#line 528
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1106));
#line 528
___nl__bool__8 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 528
c_rt_lib0clear(&___nl__im__13);
#line 528
c_rt_lib0clear(&___nl__im__14);
#line 528
label_38:
;
#line 528
if(___nl__bool__8){ goto label_45;}
#line 528
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(569)));
#line 528
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1107));
#line 528
___nl__bool__8 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 528
c_rt_lib0clear(&___nl__im__15);
#line 528
c_rt_lib0clear(&___nl__im__16);
#line 528
label_45:
;
#line 528
___nl__bool__8 = !___nl__bool__8;
#line 528
if(___nl__bool__8){ goto label_57;}
#line 529
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(285)));
#line 529
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__17));
#line 529
c_rt_lib0clear(&___nl__im__17);
#line 530
c_rt_lib0clear(&___nl__im__1);
#line 530
//clear ___nl__bool__2;
#line 530
c_rt_lib0clear(&___nl__im__5);
#line 530
//clear ___nl__bool__8;
#line 530
return NULL;
#line 531
goto label_57;
#line 531
label_57:
;
#line 531
//clear ___nl__bool__8;
#line 532
goto label_78;
#line 532
label_60:
;
#line 532
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(230)));
#line 532
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(1108));
#line 532
c_rt_lib0clear(&___nl__im__18);
#line 532
___nl__bool__2 = !___nl__bool__2;
#line 532
if(___nl__bool__2){ goto label_78;}
#line 533
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(230)));
#line 533
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(230)));
#line 533
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(1108)));
#line 533
c_rt_lib0clear(&___nl__im__20);
#line 533
c_rt_lib0clear(&___nl__im__21);
#line 533
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__19));
#line 533
c_rt_lib0clear(&___nl__im__19);
#line 534
c_rt_lib0clear(&___nl__im__1);
#line 534
//clear ___nl__bool__2;
#line 534
c_rt_lib0clear(&___nl__im__5);
#line 534
return NULL;
#line 535
goto label_78;
#line 535
label_78:
;
#line 535
//clear ___nl__bool__2;
#line 535
c_rt_lib0clear(&___nl__im__5);
#line 536
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1218));
#line 536
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__22));
#line 536
c_rt_lib0clear(&___nl__im__22);
#line 536
c_rt_lib0clear(&___nl__im__1);
#line 536
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
#line 540
c_rt_lib0move(&___nl__im__1,___get_global_string_const(539));
#line 540
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 540
c_rt_lib0clear(&___nl__im__1);
#line 541
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_variant_label(___ref___rec__0));
#line 541
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 541
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(230), ___nl__im__4));
#line 541
c_rt_lib0clear(&___nl__im__3);
#line 541
c_rt_lib0clear(&___nl__im__4);
#line 542
c_rt_lib0move(&___nl__im__6,___get_global_string_const(466));
#line 542
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 542
c_rt_lib0clear(&___nl__im__6);
#line 542
___nl__bool__5 = !___nl__bool__5;
#line 542
if(___nl__bool__5){ goto label_51;}
#line 543
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 543
c_rt_lib0move(&___nl__im__9,___get_global_string_const(516));
#line 543
___nl__bool__7 = ntokenizer0next_is(___nl__rec_ptr__8, ___nl__im__9);
#line 543
___nl__rec_ptr__8 = NULL;
#line 543
c_rt_lib0clear(&___nl__im__9);
#line 543
___nl__bool__7 = !___nl__bool__7;
#line 543
if(___nl__bool__7){ goto label_32;}
#line 544
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 544
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 544
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(502), ___nl__im__12, ___get_global_string_const(277), ___nl__im__13));
#line 544
c_rt_lib0clear(&___nl__im__12);
#line 544
c_rt_lib0clear(&___nl__im__13);
#line 544
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__11));
#line 544
c_rt_lib0clear(&___nl__im__11);
#line 544
c_rt_lib0copy(&___nl__im__14, ___nl__im__10);
#line 544
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(230), ___nl__im__14);
#line 544
c_rt_lib0clear(&___nl__im__10);
#line 544
c_rt_lib0clear(&___nl__im__14);
#line 545
goto label_45;
#line 545
label_32:
;
#line 546
c_rt_lib0move(&___nl__im__17, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 546
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 546
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_string_const(502), ___nl__im__17, ___get_global_string_const(277), ___nl__im__18));
#line 546
c_rt_lib0clear(&___nl__im__17);
#line 546
c_rt_lib0clear(&___nl__im__18);
#line 546
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__16));
#line 546
c_rt_lib0clear(&___nl__im__16);
#line 546
c_rt_lib0copy(&___nl__im__19, ___nl__im__15);
#line 546
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(230), ___nl__im__19);
#line 546
c_rt_lib0clear(&___nl__im__15);
#line 546
c_rt_lib0clear(&___nl__im__19);
#line 547
goto label_45;
#line 547
label_45:
;
#line 547
//clear ___nl__bool__7;
#line 548
c_rt_lib0move(&___nl__im__20,___get_global_string_const(331));
#line 548
nparser_priv0eat(___ref___rec__0, ___nl__im__20);
#line 548
c_rt_lib0clear(&___nl__im__20);
#line 549
goto label_51;
#line 549
label_51:
;
#line 549
//clear ___nl__bool__5;
#line 550
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
#line 554
c_rt_lib0move(&___nl__im__1,___get_global_string_const(516));
#line 554
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 554
c_rt_lib0clear(&___nl__im__1);
#line 555
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 555
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 555
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 555
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 555
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(216), ___nl__im__4, ___get_global_string_const(504), ___nl__im__5, ___get_global_string_const(230), ___nl__im__6));
#line 555
c_rt_lib0clear(&___nl__im__3);
#line 555
c_rt_lib0clear(&___nl__im__4);
#line 555
c_rt_lib0clear(&___nl__im__5);
#line 555
c_rt_lib0clear(&___nl__im__6);
#line 556
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 556
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 556
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 556
___nl__rec_ptr__8 = NULL;
#line 556
c_rt_lib0clear(&___nl__im__9);
#line 556
___nl__bool__7 = !___nl__bool__7;
#line 556
if(___nl__bool__7){ goto label_29;}
#line 557
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 557
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 557
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 557
___nl__rec_ptr__11 = NULL;
#line 557
c_rt_lib0clear(&___nl__im__12);
#line 557
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 557
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__13);
#line 557
c_rt_lib0clear(&___nl__im__10);
#line 557
c_rt_lib0clear(&___nl__im__13);
#line 558
goto label_34;
#line 558
label_29:
;
#line 559
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1219));
#line 559
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 559
c_rt_lib0clear(&___nl__im__14);
#line 560
goto label_34;
#line 560
label_34:
;
#line 560
//clear ___nl__bool__7;
#line 561
c_rt_lib0move(&___nl__im__16,___get_global_string_const(539));
#line 561
___nl__bool__15 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__16);
#line 561
c_rt_lib0clear(&___nl__im__16);
#line 561
___nl__bool__15 = !___nl__bool__15;
#line 561
if(___nl__bool__15){ goto label_85;}
#line 562
c_rt_lib0move(&___nl__im__19, nparser_priv0parse_type(___ref___rec__0));
#line 562
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(83));
#line 562
if(___nl__bool__18){ goto label_49;}
#line 562
c_rt_lib0clear(&___nl__im__2);
#line 562
//clear ___nl__bool__15;
#line 562
c_rt_lib0clear(&___nl__im__17);
#line 562
//clear ___nl__bool__18;
#line 562
return ___nl__im__19;
#line 562
label_49:
;
#line 562
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(83)));
#line 563
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(216), ___nl__im__17));
#line 563
c_rt_lib0copy(&___nl__im__21, ___nl__im__20);
#line 563
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(216), ___nl__im__21);
#line 563
c_rt_lib0clear(&___nl__im__20);
#line 563
c_rt_lib0clear(&___nl__im__21);
#line 564
___nl__bool_ptr__23 = &((*___ref___rec__0).parse_types0field);
#line 564
___nl__bool__22 = (*___nl__bool_ptr__23);
#line 564
___nl__bool_ptr__23 = NULL;
#line 564
___nl__bool__22 = !___nl__bool__22;
#line 564
if(___nl__bool__22){ goto label_79;}
#line 565
c_rt_lib0move(&___nl__im__26, ptd_parser0try_value_to_ptd(___nl__im__17));
#line 565
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(83));
#line 565
if(___nl__bool__25){ goto label_73;}
#line 565
c_rt_lib0clear(&___nl__im__2);
#line 565
//clear ___nl__bool__15;
#line 565
c_rt_lib0clear(&___nl__im__17);
#line 565
//clear ___nl__bool__18;
#line 565
c_rt_lib0clear(&___nl__im__19);
#line 565
//clear ___nl__bool__22;
#line 565
c_rt_lib0clear(&___nl__im__24);
#line 565
//clear ___nl__bool__25;
#line 565
return ___nl__im__26;
#line 565
label_73:
;
#line 565
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(83)));
#line 566
c_rt_lib0copy(&___nl__im__27, ___nl__im__24);
#line 566
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(504), ___nl__im__27);
#line 566
c_rt_lib0clear(&___nl__im__27);
#line 567
goto label_79;
#line 567
label_79:
;
#line 567
//clear ___nl__bool__22;
#line 567
c_rt_lib0clear(&___nl__im__24);
#line 567
//clear ___nl__bool__25;
#line 567
c_rt_lib0clear(&___nl__im__26);
#line 568
goto label_85;
#line 568
label_85:
;
#line 568
//clear ___nl__bool__15;
#line 568
c_rt_lib0clear(&___nl__im__17);
#line 568
//clear ___nl__bool__18;
#line 568
c_rt_lib0clear(&___nl__im__19);
#line 569
c_rt_lib0move(&___nl__im__29,___get_global_string_const(755));
#line 569
___nl__bool__28 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__29);
#line 569
c_rt_lib0clear(&___nl__im__29);
#line 569
___nl__bool__28 = !___nl__bool__28;
#line 569
if(___nl__bool__28){ goto label_111;}
#line 570
c_rt_lib0move(&___nl__im__32, nparser_priv0parse_expr(___ref___rec__0));
#line 570
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(83));
#line 570
if(___nl__bool__31){ goto label_103;}
#line 570
c_rt_lib0clear(&___nl__im__2);
#line 570
//clear ___nl__bool__28;
#line 570
c_rt_lib0clear(&___nl__im__30);
#line 570
//clear ___nl__bool__31;
#line 570
return ___nl__im__32;
#line 570
label_103:
;
#line 570
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(83)));
#line 571
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__30));
#line 571
c_rt_lib0copy(&___nl__im__34, ___nl__im__33);
#line 571
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(230), ___nl__im__34);
#line 571
c_rt_lib0clear(&___nl__im__33);
#line 571
c_rt_lib0clear(&___nl__im__34);
#line 572
goto label_111;
#line 572
label_111:
;
#line 572
//clear ___nl__bool__28;
#line 572
c_rt_lib0clear(&___nl__im__30);
#line 572
//clear ___nl__bool__31;
#line 572
c_rt_lib0clear(&___nl__im__32);
#line 573
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
#line 573
c_rt_lib0clear(&___nl__im__2);
#line 573
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
#line 577
c_rt_lib0move(&___nl__im__1,___get_global_string_const(516));
#line 577
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 577
c_rt_lib0clear(&___nl__im__1);
#line 578
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 578
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 578
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 578
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 578
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(216), ___nl__im__4, ___get_global_string_const(504), ___nl__im__5, ___get_global_string_const(230), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 580
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 580
___nl__rec_ptr__11 = NULL;
#line 580
c_rt_lib0clear(&___nl__im__12);
#line 580
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 580
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__13);
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
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1219));
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
#line 588
c_rt_lib0move(&___nl__im__1,___get_global_string_const(39));
#line 588
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 588
c_rt_lib0clear(&___nl__im__1);
#line 589
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 589
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 589
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 589
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 589
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(216), ___nl__im__4, ___get_global_string_const(504), ___nl__im__5, ___get_global_string_const(230), ___nl__im__6));
#line 589
c_rt_lib0clear(&___nl__im__3);
#line 589
c_rt_lib0clear(&___nl__im__4);
#line 589
c_rt_lib0clear(&___nl__im__5);
#line 589
c_rt_lib0clear(&___nl__im__6);
#line 590
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 590
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 590
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 590
___nl__rec_ptr__8 = NULL;
#line 590
c_rt_lib0clear(&___nl__im__9);
#line 590
___nl__bool__7 = !___nl__bool__7;
#line 590
if(___nl__bool__7){ goto label_29;}
#line 591
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 591
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(1198)));
#line 591
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 591
___nl__rec_ptr__11 = NULL;
#line 591
c_rt_lib0clear(&___nl__im__12);
#line 591
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 591
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__13);
#line 591
c_rt_lib0clear(&___nl__im__10);
#line 591
c_rt_lib0clear(&___nl__im__13);
#line 592
goto label_34;
#line 592
label_29:
;
#line 593
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1219));
#line 593
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 593
c_rt_lib0clear(&___nl__im__14);
#line 594
goto label_34;
#line 594
label_34:
;
#line 594
//clear ___nl__bool__7;
#line 595
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
#line 599
c_rt_lib0move(&___nl__im__1,___get_global_string_const(466));
#line 599
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 599
c_rt_lib0clear(&___nl__im__1);
#line 600
c_rt_lib0move(&___nl__im__4, nparser_priv0parse_expr(___ref___rec__0));
#line 600
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(83));
#line 600
if(___nl__bool__3){ goto label_9;}
#line 600
c_rt_lib0clear(&___nl__im__2);
#line 600
//clear ___nl__bool__3;
#line 600
return ___nl__im__4;
#line 600
label_9:
;
#line 600
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(83)));
#line 601
c_rt_lib0move(&___nl__im__5,___get_global_string_const(331));
#line 601
nparser_priv0eat(___ref___rec__0, ___nl__im__5);
#line 601
c_rt_lib0clear(&___nl__im__5);
#line 602
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
#line 602
c_rt_lib0clear(&___nl__im__2);
#line 602
//clear ___nl__bool__3;
#line 602
c_rt_lib0clear(&___nl__im__4);
#line 602
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
ntokenizer0state_t0type* ___nl__rec_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 606
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 606
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 606
___nl__rec_ptr__2 = NULL;
#line 607
c_rt_lib0move(&___nl__im__3,___get_global_string_const(315));
#line 607
nparser_priv0eat(___ref___rec__0, ___nl__im__3);
#line 607
c_rt_lib0clear(&___nl__im__3);
#line 608
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 609
label_7:
;
#line 609
c_rt_lib0move(&___nl__im__6,___get_global_string_const(316));
#line 609
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 609
c_rt_lib0clear(&___nl__im__6);
#line 609
___nl__bool__5 = !___nl__bool__5;
#line 609
___nl__bool__5 = !___nl__bool__5;
#line 609
if(___nl__bool__5){ goto label_40;}
#line 610
c_rt_lib0move(&___nl__im__8,___get_global_string_const(451));
#line 610
___nl__bool__7 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__8);
#line 610
c_rt_lib0clear(&___nl__im__8);
#line 610
___nl__bool__7 = !___nl__bool__7;
#line 610
if(___nl__bool__7){ goto label_22;}
#line 610
//clear ___nl__bool__7;
#line 610
goto label_7;
#line 610
goto label_22;
#line 610
label_22:
;
#line 610
//clear ___nl__bool__7;
#line 611
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_cmd(___ref___rec__0));
#line 611
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(83));
#line 611
if(___nl__bool__10){ goto label_33;}
#line 611
c_rt_lib0clear(&___nl__im__1);
#line 611
c_rt_lib0clear(&___nl__im__4);
#line 611
//clear ___nl__bool__5;
#line 611
c_rt_lib0clear(&___nl__im__9);
#line 611
//clear ___nl__bool__10;
#line 611
return ___nl__im__11;
#line 611
label_33:
;
#line 611
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(83)));
#line 612
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__9));
#line 612
c_rt_lib0clear(&___nl__im__9);
#line 612
//clear ___nl__bool__10;
#line 612
c_rt_lib0clear(&___nl__im__11);
#line 613
goto label_7;
#line 613
label_40:
;
#line 614
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 614
c_rt_lib0move(&___nl__im__12, ntokenizer0get_place_ws(___nl__rec_ptr__13));
#line 614
___nl__rec_ptr__13 = NULL;
#line 615
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 615
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(745), ___nl__im__12, ___get_global_string_const(1136), ___nl__im__15));
#line 615
c_rt_lib0clear(&___nl__im__15);
#line 616
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 616
c_rt_lib0move(&___nl__im__16, ntokenizer0pop_last_comment(___nl__rec_ptr__17));
#line 616
___nl__rec_ptr__17 = NULL;
#line 617
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(238), ___nl__im__4, ___get_global_string_const(1139), ___nl__im__16));
#line 617
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(1087), ___nl__im__21));
#line 617
c_rt_lib0clear(&___nl__im__21);
#line 617
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(210), ___nl__im__14, ___get_global_string_const(237), ___nl__im__20));
#line 617
c_rt_lib0clear(&___nl__im__20);
#line 617
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__19));
#line 617
c_rt_lib0clear(&___nl__im__19);
#line 617
c_rt_lib0clear(&___nl__im__1);
#line 617
c_rt_lib0clear(&___nl__im__4);
#line 617
//clear ___nl__bool__5;
#line 617
c_rt_lib0clear(&___nl__im__9);
#line 617
//clear ___nl__bool__10;
#line 617
c_rt_lib0clear(&___nl__im__11);
#line 617
c_rt_lib0clear(&___nl__im__12);
#line 617
c_rt_lib0clear(&___nl__im__14);
#line 617
c_rt_lib0clear(&___nl__im__16);
#line 617
return ___nl__im__18;
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
#line 621
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 621
c_rt_lib0move(&___nl__im__3,___get_global_string_const(516));
#line 621
___nl__bool__1 = ntokenizer0next_is(___nl__rec_ptr__2, ___nl__im__3);
#line 621
___nl__rec_ptr__2 = NULL;
#line 621
c_rt_lib0clear(&___nl__im__3);
#line 621
___nl__bool__1 = !___nl__bool__1;
#line 621
if(___nl__bool__1){ goto label_25;}
#line 622
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_var_decl(___ref___rec__0));
#line 622
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(83));
#line 622
if(___nl__bool__5){ goto label_14;}
#line 622
//clear ___nl__bool__1;
#line 622
c_rt_lib0clear(&___nl__im__4);
#line 622
//clear ___nl__bool__5;
#line 622
return ___nl__im__6;
#line 622
label_14:
;
#line 622
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(83)));
#line 623
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(735), ___nl__im__4));
#line 623
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__8));
#line 623
c_rt_lib0clear(&___nl__im__8);
#line 623
//clear ___nl__bool__1;
#line 623
c_rt_lib0clear(&___nl__im__4);
#line 623
//clear ___nl__bool__5;
#line 623
c_rt_lib0clear(&___nl__im__6);
#line 623
return ___nl__im__7;
#line 624
goto label_100;
#line 624
label_25:
;
#line 625
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_expr(___ref___rec__0));
#line 625
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(83));
#line 625
if(___nl__bool__10){ goto label_37;}
#line 625
//clear ___nl__bool__1;
#line 625
c_rt_lib0clear(&___nl__im__4);
#line 625
//clear ___nl__bool__5;
#line 625
c_rt_lib0clear(&___nl__im__6);
#line 625
c_rt_lib0clear(&___nl__im__7);
#line 625
c_rt_lib0clear(&___nl__im__9);
#line 625
//clear ___nl__bool__10;
#line 625
return ___nl__im__11;
#line 625
label_37:
;
#line 625
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(83)));
#line 626
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(230)));
#line 626
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(245));
#line 626
c_rt_lib0clear(&___nl__im__14);
#line 626
___nl__bool__13 = !___nl__bool__12;
#line 626
if(___nl__bool__13){ goto label_55;}
#line 626
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(230)));
#line 626
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(230)));
#line 626
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(245)));
#line 626
c_rt_lib0clear(&___nl__im__17);
#line 626
c_rt_lib0clear(&___nl__im__18);
#line 626
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(569)));
#line 626
c_rt_lib0clear(&___nl__im__16);
#line 626
c_rt_lib0move(&___nl__im__19,___get_global_string_const(755));
#line 626
___nl__bool__12 = c_rt_lib0eq(___nl__im__15, ___nl__im__19);
#line 626
c_rt_lib0clear(&___nl__im__15);
#line 626
c_rt_lib0clear(&___nl__im__19);
#line 626
label_55:
;
#line 626
//clear ___nl__bool__13;
#line 626
___nl__bool__12 = !___nl__bool__12;
#line 626
if(___nl__bool__12){ goto label_79;}
#line 627
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(230)));
#line 627
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(230)));
#line 627
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(245)));
#line 627
c_rt_lib0clear(&___nl__im__23);
#line 627
c_rt_lib0clear(&___nl__im__24);
#line 627
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(1103), ___nl__im__22));
#line 627
c_rt_lib0clear(&___nl__im__22);
#line 627
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__21));
#line 627
c_rt_lib0clear(&___nl__im__21);
#line 627
//clear ___nl__bool__1;
#line 627
c_rt_lib0clear(&___nl__im__4);
#line 627
//clear ___nl__bool__5;
#line 627
c_rt_lib0clear(&___nl__im__6);
#line 627
c_rt_lib0clear(&___nl__im__7);
#line 627
c_rt_lib0clear(&___nl__im__9);
#line 627
//clear ___nl__bool__10;
#line 627
c_rt_lib0clear(&___nl__im__11);
#line 627
//clear ___nl__bool__12;
#line 627
return ___nl__im__20;
#line 628
goto label_95;
#line 628
label_79:
;
#line 629
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(1104), ___nl__im__9));
#line 629
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__26));
#line 629
c_rt_lib0clear(&___nl__im__26);
#line 629
//clear ___nl__bool__1;
#line 629
c_rt_lib0clear(&___nl__im__4);
#line 629
//clear ___nl__bool__5;
#line 629
c_rt_lib0clear(&___nl__im__6);
#line 629
c_rt_lib0clear(&___nl__im__7);
#line 629
c_rt_lib0clear(&___nl__im__9);
#line 629
//clear ___nl__bool__10;
#line 629
c_rt_lib0clear(&___nl__im__11);
#line 629
//clear ___nl__bool__12;
#line 629
c_rt_lib0clear(&___nl__im__20);
#line 629
return ___nl__im__25;
#line 630
goto label_95;
#line 630
label_95:
;
#line 630
//clear ___nl__bool__12;
#line 630
c_rt_lib0clear(&___nl__im__20);
#line 630
c_rt_lib0clear(&___nl__im__25);
#line 631
goto label_100;
#line 631
label_100:
;
#line 631
//clear ___nl__bool__1;
#line 631
c_rt_lib0clear(&___nl__im__4);
#line 631
//clear ___nl__bool__5;
#line 631
c_rt_lib0clear(&___nl__im__6);
#line 631
c_rt_lib0clear(&___nl__im__7);
#line 631
c_rt_lib0clear(&___nl__im__9);
#line 631
//clear ___nl__bool__10;
#line 631
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
ImmT  ___nl__im__6 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__7 = NULL;
#line 636
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 636
c_rt_lib0move(&___nl__im__2, ntokenizer0get_place(___nl__rec_ptr__3));
#line 636
___nl__rec_ptr__3 = NULL;
#line 637
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 637
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 637
___nl__rec_ptr__5 = NULL;
#line 638
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 638
c_rt_lib0move(&___nl__im__6, ntokenizer0pop_last_comment(___nl__rec_ptr__7));
#line 638
___nl__rec_ptr__7 = NULL;
#line 638
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__2, ___get_global_string_const(745), ___nl__im__4, ___get_global_string_const(1136), ___nl__im__6));
#line 638
c_rt_lib0clear(&___nl__im__2);
#line 638
c_rt_lib0clear(&___nl__im__4);
#line 638
c_rt_lib0clear(&___nl__im__6);
#line 638
return ___nl__im__1;
return NULL;

}

nparser0try_cmd_t0type nparser_priv0parse_cmd(nparser0state_t0type* ___ref___rec__0) {
nparser_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
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
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__67 = NULL;
bool  ___nl__bool__68 = false;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__72 = NULL;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
bool  ___nl__bool__94 = false;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__97 = NULL;
bool  ___nl__bool__98 = false;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
bool  ___nl__bool__103 = false;
ImmT  ___nl__im__104 = NULL;
bool  ___nl__bool__105 = false;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__108 = NULL;
bool  ___nl__bool__109 = false;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
bool  ___nl__bool__115 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
bool  ___nl__bool__129 = false;
ImmT  ___nl__im__130 = NULL;
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
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
bool  ___nl__bool__145 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__146 = NULL;
ImmT  ___nl__im__147 = NULL;
bool  ___nl__bool__148 = false;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__152 = NULL;
bool  ___nl__bool__153 = false;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__158 = NULL;
ImmT  ___nl__im__159 = NULL;
bool  ___nl__bool__160 = false;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__168 = NULL;
bool  ___nl__bool__169 = false;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
INT  ___nl__int__172 = 0;
INT  ___nl__int__173 = 0;
INT  ___nl__int__174 = 0;
bool  ___nl__bool__175 = false;
ImmT  ___nl__im__176 = NULL;
bool  ___nl__bool__177 = false;
bool  ___nl__bool__178 = false;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
bool  ___nl__bool__181 = false;
ImmT  ___nl__im__182 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
bool  ___nl__bool__187 = false;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__193 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__194 = NULL;
bool  ___nl__bool__195 = false;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
bool  ___nl__bool__204 = false;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__string__208 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
bool  ___nl__bool__212 = false;
ImmT  ___nl__im__213 = NULL;
bool  ___nl__bool__214 = false;
ImmT  ___nl__im__215 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__216 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__217 = NULL;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
bool  ___nl__bool__220 = false;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__223 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
bool  ___nl__bool__228 = false;
ImmT  ___nl__im__229 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__230 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
bool  ___nl__bool__235 = false;
ImmT  ___nl__im__236 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__237 = NULL;
ImmT  ___nl__im__238 = NULL;
bool  ___nl__bool__239 = false;
ImmT  ___nl__im__240 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__241 = NULL;
bool  ___nl__bool__242 = false;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
bool  ___nl__bool__249 = false;
ImmT  ___nl__im__250 = NULL;
bool  ___nl__bool__251 = false;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
bool  ___nl__bool__256 = false;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
bool  ___nl__bool__261 = false;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
bool  ___nl__bool__266 = false;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
bool  ___nl__bool__271 = false;
ImmT  ___nl__im__272 = NULL;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
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
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__im__292 = NULL;
bool  ___nl__bool__293 = false;
ImmT  ___nl__im__294 = NULL;
ImmT  ___nl__im__295 = NULL;
ImmT  ___nl__im__296 = NULL;
bool  ___nl__bool__297 = false;
ImmT  ___nl__im__298 = NULL;
ImmT  ___nl__im__299 = NULL;
ImmT  ___nl__im__300 = NULL;
bool  ___nl__bool__301 = false;
ImmT  ___nl__im__302 = NULL;
bool  ___nl__bool__303 = false;
ImmT  ___nl__im__304 = NULL;
ImmT  ___nl__im__305 = NULL;
ImmT  ___nl__im__306 = NULL;
ImmT  ___nl__im__307 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__308 = NULL;
ImmT  ___nl__im__309 = NULL;
ImmT  ___nl__im__310 = NULL;
ImmT  ___nl__im__311 = NULL;
#line 643
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 643
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 643
___nl__rec_ptr__2 = NULL;
#line 646
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1076));
#line 646
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 646
c_rt_lib0clear(&___nl__im__6);
#line 646
___nl__bool__5 = !___nl__bool__5;
#line 646
if(___nl__bool__5){ goto label_189;}
#line 647
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 648
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_cond(___ref___rec__0));
#line 648
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 648
if(___nl__bool__8){ goto label_19;}
#line 648
c_rt_lib0clear(&___nl__im__1);
#line 648
c_rt_lib0clear(&___nl__im__3);
#line 648
c_rt_lib0clear(&___nl__im__4);
#line 648
//clear ___nl__bool__5;
#line 648
c_rt_lib0clear(&___nl__im__7);
#line 648
//clear ___nl__bool__8;
#line 648
return ___nl__im__9;
#line 648
label_19:
;
#line 648
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 648
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(1090), ___nl__im__10);
#line 649
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 649
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__11));
#line 649
___nl__rec_ptr__11 = NULL;
#line 650
c_rt_lib0move(&___nl__im__13, nparser_priv0parse_block(___ref___rec__0));
#line 650
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(83));
#line 650
if(___nl__bool__12){ goto label_38;}
#line 650
c_rt_lib0clear(&___nl__im__1);
#line 650
c_rt_lib0clear(&___nl__im__3);
#line 650
c_rt_lib0clear(&___nl__im__4);
#line 650
//clear ___nl__bool__5;
#line 650
c_rt_lib0clear(&___nl__im__7);
#line 650
//clear ___nl__bool__8;
#line 650
c_rt_lib0clear(&___nl__im__9);
#line 650
c_rt_lib0clear(&___nl__im__10);
#line 650
//clear ___nl__bool__12;
#line 650
return ___nl__im__13;
#line 650
label_38:
;
#line 650
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(83)));
#line 650
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(1076), ___nl__im__14);
#line 651
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 652
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 652
c_rt_lib0copy(&___nl__im__17, ___nl__im__16);
#line 652
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(1091), ___nl__im__17);
#line 652
c_rt_lib0clear(&___nl__im__16);
#line 652
c_rt_lib0clear(&___nl__im__17);
#line 653
label_47:
;
#line 653
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1091));
#line 653
___nl__bool__18 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__19);
#line 653
c_rt_lib0clear(&___nl__im__19);
#line 653
___nl__bool__18 = !___nl__bool__18;
#line 653
if(___nl__bool__18){ goto label_130;}
#line 654
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(0));
#line 655
___nl__rec_ptr__22 = &((*___ref___rec__0).state0field);
#line 655
c_rt_lib0move(&___nl__im__21, ntokenizer0get_place(___nl__rec_ptr__22));
#line 655
___nl__rec_ptr__22 = NULL;
#line 656
c_rt_lib0move(&___nl__im__24, nparser_priv0parse_cond(___ref___rec__0));
#line 656
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(83));
#line 656
if(___nl__bool__23){ goto label_77;}
#line 656
c_rt_lib0clear(&___nl__im__1);
#line 656
c_rt_lib0clear(&___nl__im__3);
#line 656
c_rt_lib0clear(&___nl__im__4);
#line 656
//clear ___nl__bool__5;
#line 656
c_rt_lib0clear(&___nl__im__7);
#line 656
//clear ___nl__bool__8;
#line 656
c_rt_lib0clear(&___nl__im__9);
#line 656
c_rt_lib0clear(&___nl__im__10);
#line 656
//clear ___nl__bool__12;
#line 656
c_rt_lib0clear(&___nl__im__13);
#line 656
c_rt_lib0clear(&___nl__im__14);
#line 656
c_rt_lib0clear(&___nl__im__15);
#line 656
//clear ___nl__bool__18;
#line 656
c_rt_lib0clear(&___nl__im__20);
#line 656
c_rt_lib0clear(&___nl__im__21);
#line 656
//clear ___nl__bool__23;
#line 656
return ___nl__im__24;
#line 656
label_77:
;
#line 656
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(83)));
#line 656
c_rt_lib0hash_set_value_dec(&___nl__im__20, ___get_global_string_const(1090), ___nl__im__25);
#line 657
___nl__rec_ptr__27 = &((*___ref___rec__0).state0field);
#line 657
c_rt_lib0move(&___nl__im__26, ntokenizer0get_place_ws(___nl__rec_ptr__27));
#line 657
___nl__rec_ptr__27 = NULL;
#line 661
___nl__rec_ptr__30 = &((*___ref___rec__0).state0field);
#line 661
c_rt_lib0move(&___nl__im__29, ntokenizer0pop_last_comment(___nl__rec_ptr__30));
#line 661
___nl__rec_ptr__30 = NULL;
#line 661
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__21, ___get_global_string_const(745), ___nl__im__26, ___get_global_string_const(1136), ___nl__im__29));
#line 661
c_rt_lib0clear(&___nl__im__29);
#line 661
c_rt_lib0copy(&___nl__im__31, ___nl__im__28);
#line 661
c_rt_lib0hash_set_value_dec(&___nl__im__20, ___get_global_string_const(210), ___nl__im__31);
#line 661
c_rt_lib0clear(&___nl__im__28);
#line 661
c_rt_lib0clear(&___nl__im__31);
#line 663
c_rt_lib0move(&___nl__im__33, nparser_priv0parse_block(___ref___rec__0));
#line 663
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(83));
#line 663
if(___nl__bool__32){ goto label_116;}
#line 663
c_rt_lib0clear(&___nl__im__1);
#line 663
c_rt_lib0clear(&___nl__im__3);
#line 663
c_rt_lib0clear(&___nl__im__4);
#line 663
//clear ___nl__bool__5;
#line 663
c_rt_lib0clear(&___nl__im__7);
#line 663
//clear ___nl__bool__8;
#line 663
c_rt_lib0clear(&___nl__im__9);
#line 663
c_rt_lib0clear(&___nl__im__10);
#line 663
//clear ___nl__bool__12;
#line 663
c_rt_lib0clear(&___nl__im__13);
#line 663
c_rt_lib0clear(&___nl__im__14);
#line 663
c_rt_lib0clear(&___nl__im__15);
#line 663
//clear ___nl__bool__18;
#line 663
c_rt_lib0clear(&___nl__im__20);
#line 663
c_rt_lib0clear(&___nl__im__21);
#line 663
//clear ___nl__bool__23;
#line 663
c_rt_lib0clear(&___nl__im__24);
#line 663
c_rt_lib0clear(&___nl__im__25);
#line 663
c_rt_lib0clear(&___nl__im__26);
#line 663
//clear ___nl__bool__32;
#line 663
return ___nl__im__33;
#line 663
label_116:
;
#line 663
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(83)));
#line 663
c_rt_lib0hash_set_value_dec(&___nl__im__20, ___get_global_string_const(237), ___nl__im__34);
#line 664
c_rt_lib0delete(array0push(&___nl__im__15, ___nl__im__20));
#line 664
c_rt_lib0clear(&___nl__im__20);
#line 664
c_rt_lib0clear(&___nl__im__21);
#line 664
//clear ___nl__bool__23;
#line 664
c_rt_lib0clear(&___nl__im__24);
#line 664
c_rt_lib0clear(&___nl__im__25);
#line 664
c_rt_lib0clear(&___nl__im__26);
#line 664
//clear ___nl__bool__32;
#line 664
c_rt_lib0clear(&___nl__im__33);
#line 664
c_rt_lib0clear(&___nl__im__34);
#line 665
goto label_47;
#line 665
label_130:
;
#line 666
c_rt_lib0copy(&___nl__im__35, ___nl__im__15);
#line 666
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(1091), ___nl__im__35);
#line 666
c_rt_lib0clear(&___nl__im__35);
#line 667
c_rt_lib0move(&___nl__im__37,___get_global_string_const(1092));
#line 667
___nl__bool__36 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__37);
#line 667
c_rt_lib0clear(&___nl__im__37);
#line 667
___nl__bool__36 = !___nl__bool__36;
#line 667
if(___nl__bool__36){ goto label_171;}
#line 668
c_rt_lib0move(&___nl__im__39, nparser_priv0parse_block(___ref___rec__0));
#line 668
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(83));
#line 668
if(___nl__bool__38){ goto label_167;}
#line 668
c_rt_lib0clear(&___nl__im__1);
#line 668
c_rt_lib0clear(&___nl__im__3);
#line 668
c_rt_lib0clear(&___nl__im__4);
#line 668
//clear ___nl__bool__5;
#line 668
c_rt_lib0clear(&___nl__im__7);
#line 668
//clear ___nl__bool__8;
#line 668
c_rt_lib0clear(&___nl__im__9);
#line 668
c_rt_lib0clear(&___nl__im__10);
#line 668
//clear ___nl__bool__12;
#line 668
c_rt_lib0clear(&___nl__im__13);
#line 668
c_rt_lib0clear(&___nl__im__14);
#line 668
c_rt_lib0clear(&___nl__im__15);
#line 668
//clear ___nl__bool__18;
#line 668
c_rt_lib0clear(&___nl__im__20);
#line 668
c_rt_lib0clear(&___nl__im__21);
#line 668
//clear ___nl__bool__23;
#line 668
c_rt_lib0clear(&___nl__im__24);
#line 668
c_rt_lib0clear(&___nl__im__25);
#line 668
c_rt_lib0clear(&___nl__im__26);
#line 668
//clear ___nl__bool__32;
#line 668
c_rt_lib0clear(&___nl__im__33);
#line 668
c_rt_lib0clear(&___nl__im__34);
#line 668
//clear ___nl__bool__36;
#line 668
//clear ___nl__bool__38;
#line 668
return ___nl__im__39;
#line 668
label_167:
;
#line 668
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__39, ___get_global_string_const(83)));
#line 668
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(1092), ___nl__im__40);
#line 669
goto label_182;
#line 669
label_171:
;
#line 670
c_rt_lib0move(&___nl__im__42, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 670
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(1089)));
#line 670
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_mk(2, ___get_global_string_const(210), ___nl__im__42, ___get_global_string_const(237), ___nl__im__43));
#line 670
c_rt_lib0clear(&___nl__im__42);
#line 670
c_rt_lib0clear(&___nl__im__43);
#line 670
c_rt_lib0copy(&___nl__im__44, ___nl__im__41);
#line 670
c_rt_lib0hash_set_value_dec(&___nl__im__7, ___get_global_string_const(1092), ___nl__im__44);
#line 670
c_rt_lib0clear(&___nl__im__41);
#line 670
c_rt_lib0clear(&___nl__im__44);
#line 671
goto label_182;
#line 671
label_182:
;
#line 671
//clear ___nl__bool__36;
#line 671
//clear ___nl__bool__38;
#line 671
c_rt_lib0clear(&___nl__im__39);
#line 671
c_rt_lib0clear(&___nl__im__40);
#line 672
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1076), ___nl__im__7));
#line 673
goto label_2124;
#line 673
label_189:
;
#line 673
c_rt_lib0move(&___nl__im__45,___get_global_string_const(1078));
#line 673
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__45);
#line 673
c_rt_lib0clear(&___nl__im__45);
#line 673
___nl__bool__5 = !___nl__bool__5;
#line 673
if(___nl__bool__5){ goto label_276;}
#line 674
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(0));
#line 675
___nl__bool__47 = false;
#line 675
c_rt_lib0move(&___nl__im__48, c_rt_lib0bool_to_nl_native(___nl__bool__47));
#line 675
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_string_const(1157), ___nl__im__48);
#line 675
//clear ___nl__bool__47;
#line 675
c_rt_lib0clear(&___nl__im__48);
#line 676
c_rt_lib0move(&___nl__im__49, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 676
c_rt_lib0copy(&___nl__im__50, ___nl__im__49);
#line 676
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_string_const(373), ___nl__im__50);
#line 676
c_rt_lib0clear(&___nl__im__49);
#line 676
c_rt_lib0clear(&___nl__im__50);
#line 677
c_rt_lib0move(&___nl__im__52, nparser_priv0parse_cond(___ref___rec__0));
#line 677
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__52, ___get_global_string_const(83));
#line 677
if(___nl__bool__51){ goto label_234;}
#line 677
c_rt_lib0clear(&___nl__im__1);
#line 677
c_rt_lib0clear(&___nl__im__3);
#line 677
c_rt_lib0clear(&___nl__im__4);
#line 677
//clear ___nl__bool__5;
#line 677
c_rt_lib0clear(&___nl__im__7);
#line 677
//clear ___nl__bool__8;
#line 677
c_rt_lib0clear(&___nl__im__9);
#line 677
c_rt_lib0clear(&___nl__im__10);
#line 677
//clear ___nl__bool__12;
#line 677
c_rt_lib0clear(&___nl__im__13);
#line 677
c_rt_lib0clear(&___nl__im__14);
#line 677
c_rt_lib0clear(&___nl__im__15);
#line 677
//clear ___nl__bool__18;
#line 677
c_rt_lib0clear(&___nl__im__20);
#line 677
c_rt_lib0clear(&___nl__im__21);
#line 677
//clear ___nl__bool__23;
#line 677
c_rt_lib0clear(&___nl__im__24);
#line 677
c_rt_lib0clear(&___nl__im__25);
#line 677
c_rt_lib0clear(&___nl__im__26);
#line 677
//clear ___nl__bool__32;
#line 677
c_rt_lib0clear(&___nl__im__33);
#line 677
c_rt_lib0clear(&___nl__im__34);
#line 677
c_rt_lib0clear(&___nl__im__46);
#line 677
//clear ___nl__bool__51;
#line 677
return ___nl__im__52;
#line 677
label_234:
;
#line 677
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__52, ___get_global_string_const(83)));
#line 677
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_string_const(37), ___nl__im__53);
#line 678
___nl__rec_ptr__54 = &((*___ref___rec__0).state0field);
#line 678
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__54));
#line 678
___nl__rec_ptr__54 = NULL;
#line 679
c_rt_lib0move(&___nl__im__56, nparser_priv0parse_block(___ref___rec__0));
#line 679
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__56, ___get_global_string_const(83));
#line 679
if(___nl__bool__55){ goto label_271;}
#line 679
c_rt_lib0clear(&___nl__im__1);
#line 679
c_rt_lib0clear(&___nl__im__3);
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
//clear ___nl__bool__12;
#line 679
c_rt_lib0clear(&___nl__im__13);
#line 679
c_rt_lib0clear(&___nl__im__14);
#line 679
c_rt_lib0clear(&___nl__im__15);
#line 679
//clear ___nl__bool__18;
#line 679
c_rt_lib0clear(&___nl__im__20);
#line 679
c_rt_lib0clear(&___nl__im__21);
#line 679
//clear ___nl__bool__23;
#line 679
c_rt_lib0clear(&___nl__im__24);
#line 679
c_rt_lib0clear(&___nl__im__25);
#line 679
c_rt_lib0clear(&___nl__im__26);
#line 679
//clear ___nl__bool__32;
#line 679
c_rt_lib0clear(&___nl__im__33);
#line 679
c_rt_lib0clear(&___nl__im__34);
#line 679
c_rt_lib0clear(&___nl__im__46);
#line 679
//clear ___nl__bool__51;
#line 679
c_rt_lib0clear(&___nl__im__52);
#line 679
c_rt_lib0clear(&___nl__im__53);
#line 679
//clear ___nl__bool__55;
#line 679
return ___nl__im__56;
#line 679
label_271:
;
#line 679
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__56, ___get_global_string_const(83)));
#line 679
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_string_const(237), ___nl__im__57);
#line 680
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1078), ___nl__im__46));
#line 681
goto label_2124;
#line 681
label_276:
;
#line 681
c_rt_lib0move(&___nl__im__58,___get_global_string_const(1080));
#line 681
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__58);
#line 681
c_rt_lib0clear(&___nl__im__58);
#line 681
___nl__bool__5 = !___nl__bool__5;
#line 681
if(___nl__bool__5){ goto label_377;}
#line 682
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_mk(0));
#line 683
___nl__bool__60 = false;
#line 683
c_rt_lib0move(&___nl__im__61, c_rt_lib0bool_to_nl_native(___nl__bool__60));
#line 683
c_rt_lib0hash_set_value_dec(&___nl__im__59, ___get_global_string_const(1157), ___nl__im__61);
#line 683
//clear ___nl__bool__60;
#line 683
c_rt_lib0clear(&___nl__im__61);
#line 684
c_rt_lib0move(&___nl__im__62, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 684
c_rt_lib0copy(&___nl__im__63, ___nl__im__62);
#line 684
c_rt_lib0hash_set_value_dec(&___nl__im__59, ___get_global_string_const(373), ___nl__im__63);
#line 684
c_rt_lib0clear(&___nl__im__62);
#line 684
c_rt_lib0clear(&___nl__im__63);
#line 685
c_rt_lib0move(&___nl__im__65, nparser_priv0parse_cond(___ref___rec__0));
#line 685
___nl__bool__64 = c_rt_lib0priv_is(___nl__im__65, ___get_global_string_const(83));
#line 685
if(___nl__bool__64){ goto label_328;}
#line 685
c_rt_lib0clear(&___nl__im__1);
#line 685
c_rt_lib0clear(&___nl__im__3);
#line 685
c_rt_lib0clear(&___nl__im__4);
#line 685
//clear ___nl__bool__5;
#line 685
c_rt_lib0clear(&___nl__im__7);
#line 685
//clear ___nl__bool__8;
#line 685
c_rt_lib0clear(&___nl__im__9);
#line 685
c_rt_lib0clear(&___nl__im__10);
#line 685
//clear ___nl__bool__12;
#line 685
c_rt_lib0clear(&___nl__im__13);
#line 685
c_rt_lib0clear(&___nl__im__14);
#line 685
c_rt_lib0clear(&___nl__im__15);
#line 685
//clear ___nl__bool__18;
#line 685
c_rt_lib0clear(&___nl__im__20);
#line 685
c_rt_lib0clear(&___nl__im__21);
#line 685
//clear ___nl__bool__23;
#line 685
c_rt_lib0clear(&___nl__im__24);
#line 685
c_rt_lib0clear(&___nl__im__25);
#line 685
c_rt_lib0clear(&___nl__im__26);
#line 685
//clear ___nl__bool__32;
#line 685
c_rt_lib0clear(&___nl__im__33);
#line 685
c_rt_lib0clear(&___nl__im__34);
#line 685
c_rt_lib0clear(&___nl__im__46);
#line 685
//clear ___nl__bool__51;
#line 685
c_rt_lib0clear(&___nl__im__52);
#line 685
c_rt_lib0clear(&___nl__im__53);
#line 685
//clear ___nl__bool__55;
#line 685
c_rt_lib0clear(&___nl__im__56);
#line 685
c_rt_lib0clear(&___nl__im__57);
#line 685
c_rt_lib0clear(&___nl__im__59);
#line 685
//clear ___nl__bool__64;
#line 685
return ___nl__im__65;
#line 685
label_328:
;
#line 685
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__65, ___get_global_string_const(83)));
#line 685
c_rt_lib0hash_set_value_dec(&___nl__im__59, ___get_global_string_const(1095), ___nl__im__66);
#line 686
___nl__rec_ptr__67 = &((*___ref___rec__0).state0field);
#line 686
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__67));
#line 686
___nl__rec_ptr__67 = NULL;
#line 687
c_rt_lib0move(&___nl__im__69, nparser_priv0parse_block(___ref___rec__0));
#line 687
___nl__bool__68 = c_rt_lib0priv_is(___nl__im__69, ___get_global_string_const(83));
#line 687
if(___nl__bool__68){ goto label_372;}
#line 687
c_rt_lib0clear(&___nl__im__1);
#line 687
c_rt_lib0clear(&___nl__im__3);
#line 687
c_rt_lib0clear(&___nl__im__4);
#line 687
//clear ___nl__bool__5;
#line 687
c_rt_lib0clear(&___nl__im__7);
#line 687
//clear ___nl__bool__8;
#line 687
c_rt_lib0clear(&___nl__im__9);
#line 687
c_rt_lib0clear(&___nl__im__10);
#line 687
//clear ___nl__bool__12;
#line 687
c_rt_lib0clear(&___nl__im__13);
#line 687
c_rt_lib0clear(&___nl__im__14);
#line 687
c_rt_lib0clear(&___nl__im__15);
#line 687
//clear ___nl__bool__18;
#line 687
c_rt_lib0clear(&___nl__im__20);
#line 687
c_rt_lib0clear(&___nl__im__21);
#line 687
//clear ___nl__bool__23;
#line 687
c_rt_lib0clear(&___nl__im__24);
#line 687
c_rt_lib0clear(&___nl__im__25);
#line 687
c_rt_lib0clear(&___nl__im__26);
#line 687
//clear ___nl__bool__32;
#line 687
c_rt_lib0clear(&___nl__im__33);
#line 687
c_rt_lib0clear(&___nl__im__34);
#line 687
c_rt_lib0clear(&___nl__im__46);
#line 687
//clear ___nl__bool__51;
#line 687
c_rt_lib0clear(&___nl__im__52);
#line 687
c_rt_lib0clear(&___nl__im__53);
#line 687
//clear ___nl__bool__55;
#line 687
c_rt_lib0clear(&___nl__im__56);
#line 687
c_rt_lib0clear(&___nl__im__57);
#line 687
c_rt_lib0clear(&___nl__im__59);
#line 687
//clear ___nl__bool__64;
#line 687
c_rt_lib0clear(&___nl__im__65);
#line 687
c_rt_lib0clear(&___nl__im__66);
#line 687
//clear ___nl__bool__68;
#line 687
return ___nl__im__69;
#line 687
label_372:
;
#line 687
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__69, ___get_global_string_const(83)));
#line 687
c_rt_lib0hash_set_value_dec(&___nl__im__59, ___get_global_string_const(237), ___nl__im__70);
#line 688
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1080), ___nl__im__59));
#line 689
goto label_2124;
#line 689
label_377:
;
#line 689
c_rt_lib0move(&___nl__im__71,___get_global_string_const(167));
#line 689
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__71);
#line 689
c_rt_lib0clear(&___nl__im__71);
#line 689
___nl__bool__5 = !___nl__bool__5;
#line 689
if(___nl__bool__5){ goto label_432;}
#line 690
___nl__rec_ptr__72 = &((*___ref___rec__0).state0field);
#line 690
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__72));
#line 690
___nl__rec_ptr__72 = NULL;
#line 691
c_rt_lib0move(&___nl__im__75, nparser_priv0parse_block(___ref___rec__0));
#line 691
___nl__bool__74 = c_rt_lib0priv_is(___nl__im__75, ___get_global_string_const(83));
#line 691
if(___nl__bool__74){ goto label_428;}
#line 691
c_rt_lib0clear(&___nl__im__1);
#line 691
c_rt_lib0clear(&___nl__im__3);
#line 691
c_rt_lib0clear(&___nl__im__4);
#line 691
//clear ___nl__bool__5;
#line 691
c_rt_lib0clear(&___nl__im__7);
#line 691
//clear ___nl__bool__8;
#line 691
c_rt_lib0clear(&___nl__im__9);
#line 691
c_rt_lib0clear(&___nl__im__10);
#line 691
//clear ___nl__bool__12;
#line 691
c_rt_lib0clear(&___nl__im__13);
#line 691
c_rt_lib0clear(&___nl__im__14);
#line 691
c_rt_lib0clear(&___nl__im__15);
#line 691
//clear ___nl__bool__18;
#line 691
c_rt_lib0clear(&___nl__im__20);
#line 691
c_rt_lib0clear(&___nl__im__21);
#line 691
//clear ___nl__bool__23;
#line 691
c_rt_lib0clear(&___nl__im__24);
#line 691
c_rt_lib0clear(&___nl__im__25);
#line 691
c_rt_lib0clear(&___nl__im__26);
#line 691
//clear ___nl__bool__32;
#line 691
c_rt_lib0clear(&___nl__im__33);
#line 691
c_rt_lib0clear(&___nl__im__34);
#line 691
c_rt_lib0clear(&___nl__im__46);
#line 691
//clear ___nl__bool__51;
#line 691
c_rt_lib0clear(&___nl__im__52);
#line 691
c_rt_lib0clear(&___nl__im__53);
#line 691
//clear ___nl__bool__55;
#line 691
c_rt_lib0clear(&___nl__im__56);
#line 691
c_rt_lib0clear(&___nl__im__57);
#line 691
c_rt_lib0clear(&___nl__im__59);
#line 691
//clear ___nl__bool__64;
#line 691
c_rt_lib0clear(&___nl__im__65);
#line 691
c_rt_lib0clear(&___nl__im__66);
#line 691
//clear ___nl__bool__68;
#line 691
c_rt_lib0clear(&___nl__im__69);
#line 691
c_rt_lib0clear(&___nl__im__70);
#line 691
c_rt_lib0clear(&___nl__im__73);
#line 691
//clear ___nl__bool__74;
#line 691
return ___nl__im__75;
#line 691
label_428:
;
#line 691
c_rt_lib0move(&___nl__im__73, c_rt_lib0priv_as(___nl__im__75, ___get_global_string_const(83)));
#line 692
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(167), ___nl__im__73));
#line 693
goto label_2124;
#line 693
label_432:
;
#line 693
c_rt_lib0move(&___nl__im__76,___get_global_string_const(1079));
#line 693
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__76);
#line 693
c_rt_lib0clear(&___nl__im__76);
#line 693
___nl__bool__5 = !___nl__bool__5;
#line 693
if(___nl__bool__5){ goto label_588;}
#line 694
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_mk(0));
#line 695
___nl__bool__78 = false;
#line 695
c_rt_lib0move(&___nl__im__79, c_rt_lib0bool_to_nl_native(___nl__bool__78));
#line 695
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(1157), ___nl__im__79);
#line 695
//clear ___nl__bool__78;
#line 695
c_rt_lib0clear(&___nl__im__79);
#line 696
c_rt_lib0move(&___nl__im__80, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 696
c_rt_lib0copy(&___nl__im__81, ___nl__im__80);
#line 696
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(586), ___nl__im__81);
#line 696
c_rt_lib0clear(&___nl__im__80);
#line 696
c_rt_lib0clear(&___nl__im__81);
#line 697
c_rt_lib0move(&___nl__im__82,___get_global_string_const(323));
#line 697
nparser_priv0eat(___ref___rec__0, ___nl__im__82);
#line 697
c_rt_lib0clear(&___nl__im__82);
#line 698
___nl__rec_ptr__84 = &((*___ref___rec__0).state0field);
#line 698
c_rt_lib0move(&___nl__im__85,___get_global_string_const(516));
#line 698
___nl__bool__83 = ntokenizer0next_is(___nl__rec_ptr__84, ___nl__im__85);
#line 698
___nl__rec_ptr__84 = NULL;
#line 698
c_rt_lib0clear(&___nl__im__85);
#line 698
___nl__bool__83 = !___nl__bool__83;
#line 698
if(___nl__bool__83){ goto label_470;}
#line 699
c_rt_lib0move(&___nl__im__86, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 699
c_rt_lib0copy(&___nl__im__87, ___nl__im__86);
#line 699
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(234), ___nl__im__87);
#line 699
c_rt_lib0clear(&___nl__im__86);
#line 699
c_rt_lib0clear(&___nl__im__87);
#line 700
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 700
c_rt_lib0copy(&___nl__im__89, ___nl__im__88);
#line 700
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(1094), ___nl__im__89);
#line 700
c_rt_lib0clear(&___nl__im__88);
#line 700
c_rt_lib0clear(&___nl__im__89);
#line 701
goto label_482;
#line 701
label_470:
;
#line 702
c_rt_lib0move(&___nl__im__90, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 702
c_rt_lib0copy(&___nl__im__91, ___nl__im__90);
#line 702
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(234), ___nl__im__91);
#line 702
c_rt_lib0clear(&___nl__im__90);
#line 702
c_rt_lib0clear(&___nl__im__91);
#line 703
c_rt_lib0move(&___nl__im__92, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 703
c_rt_lib0copy(&___nl__im__93, ___nl__im__92);
#line 703
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(1094), ___nl__im__93);
#line 703
c_rt_lib0clear(&___nl__im__92);
#line 703
c_rt_lib0clear(&___nl__im__93);
#line 704
goto label_482;
#line 704
label_482:
;
#line 704
//clear ___nl__bool__83;
#line 705
c_rt_lib0move(&___nl__im__95, nparser_priv0parse_cond(___ref___rec__0));
#line 705
___nl__bool__94 = c_rt_lib0priv_is(___nl__im__95, ___get_global_string_const(83));
#line 705
if(___nl__bool__94){ goto label_529;}
#line 705
c_rt_lib0clear(&___nl__im__1);
#line 705
c_rt_lib0clear(&___nl__im__3);
#line 705
c_rt_lib0clear(&___nl__im__4);
#line 705
//clear ___nl__bool__5;
#line 705
c_rt_lib0clear(&___nl__im__7);
#line 705
//clear ___nl__bool__8;
#line 705
c_rt_lib0clear(&___nl__im__9);
#line 705
c_rt_lib0clear(&___nl__im__10);
#line 705
//clear ___nl__bool__12;
#line 705
c_rt_lib0clear(&___nl__im__13);
#line 705
c_rt_lib0clear(&___nl__im__14);
#line 705
c_rt_lib0clear(&___nl__im__15);
#line 705
//clear ___nl__bool__18;
#line 705
c_rt_lib0clear(&___nl__im__20);
#line 705
c_rt_lib0clear(&___nl__im__21);
#line 705
//clear ___nl__bool__23;
#line 705
c_rt_lib0clear(&___nl__im__24);
#line 705
c_rt_lib0clear(&___nl__im__25);
#line 705
c_rt_lib0clear(&___nl__im__26);
#line 705
//clear ___nl__bool__32;
#line 705
c_rt_lib0clear(&___nl__im__33);
#line 705
c_rt_lib0clear(&___nl__im__34);
#line 705
c_rt_lib0clear(&___nl__im__46);
#line 705
//clear ___nl__bool__51;
#line 705
c_rt_lib0clear(&___nl__im__52);
#line 705
c_rt_lib0clear(&___nl__im__53);
#line 705
//clear ___nl__bool__55;
#line 705
c_rt_lib0clear(&___nl__im__56);
#line 705
c_rt_lib0clear(&___nl__im__57);
#line 705
c_rt_lib0clear(&___nl__im__59);
#line 705
//clear ___nl__bool__64;
#line 705
c_rt_lib0clear(&___nl__im__65);
#line 705
c_rt_lib0clear(&___nl__im__66);
#line 705
//clear ___nl__bool__68;
#line 705
c_rt_lib0clear(&___nl__im__69);
#line 705
c_rt_lib0clear(&___nl__im__70);
#line 705
c_rt_lib0clear(&___nl__im__73);
#line 705
//clear ___nl__bool__74;
#line 705
c_rt_lib0clear(&___nl__im__75);
#line 705
c_rt_lib0clear(&___nl__im__77);
#line 705
//clear ___nl__bool__94;
#line 705
return ___nl__im__95;
#line 705
label_529:
;
#line 705
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__95, ___get_global_string_const(83)));
#line 705
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(135), ___nl__im__96);
#line 706
___nl__rec_ptr__97 = &((*___ref___rec__0).state0field);
#line 706
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__97));
#line 706
___nl__rec_ptr__97 = NULL;
#line 707
c_rt_lib0move(&___nl__im__99, nparser_priv0parse_block(___ref___rec__0));
#line 707
___nl__bool__98 = c_rt_lib0priv_is(___nl__im__99, ___get_global_string_const(83));
#line 707
if(___nl__bool__98){ goto label_583;}
#line 707
c_rt_lib0clear(&___nl__im__1);
#line 707
c_rt_lib0clear(&___nl__im__3);
#line 707
c_rt_lib0clear(&___nl__im__4);
#line 707
//clear ___nl__bool__5;
#line 707
c_rt_lib0clear(&___nl__im__7);
#line 707
//clear ___nl__bool__8;
#line 707
c_rt_lib0clear(&___nl__im__9);
#line 707
c_rt_lib0clear(&___nl__im__10);
#line 707
//clear ___nl__bool__12;
#line 707
c_rt_lib0clear(&___nl__im__13);
#line 707
c_rt_lib0clear(&___nl__im__14);
#line 707
c_rt_lib0clear(&___nl__im__15);
#line 707
//clear ___nl__bool__18;
#line 707
c_rt_lib0clear(&___nl__im__20);
#line 707
c_rt_lib0clear(&___nl__im__21);
#line 707
//clear ___nl__bool__23;
#line 707
c_rt_lib0clear(&___nl__im__24);
#line 707
c_rt_lib0clear(&___nl__im__25);
#line 707
c_rt_lib0clear(&___nl__im__26);
#line 707
//clear ___nl__bool__32;
#line 707
c_rt_lib0clear(&___nl__im__33);
#line 707
c_rt_lib0clear(&___nl__im__34);
#line 707
c_rt_lib0clear(&___nl__im__46);
#line 707
//clear ___nl__bool__51;
#line 707
c_rt_lib0clear(&___nl__im__52);
#line 707
c_rt_lib0clear(&___nl__im__53);
#line 707
//clear ___nl__bool__55;
#line 707
c_rt_lib0clear(&___nl__im__56);
#line 707
c_rt_lib0clear(&___nl__im__57);
#line 707
c_rt_lib0clear(&___nl__im__59);
#line 707
//clear ___nl__bool__64;
#line 707
c_rt_lib0clear(&___nl__im__65);
#line 707
c_rt_lib0clear(&___nl__im__66);
#line 707
//clear ___nl__bool__68;
#line 707
c_rt_lib0clear(&___nl__im__69);
#line 707
c_rt_lib0clear(&___nl__im__70);
#line 707
c_rt_lib0clear(&___nl__im__73);
#line 707
//clear ___nl__bool__74;
#line 707
c_rt_lib0clear(&___nl__im__75);
#line 707
c_rt_lib0clear(&___nl__im__77);
#line 707
//clear ___nl__bool__94;
#line 707
c_rt_lib0clear(&___nl__im__95);
#line 707
c_rt_lib0clear(&___nl__im__96);
#line 707
//clear ___nl__bool__98;
#line 707
return ___nl__im__99;
#line 707
label_583:
;
#line 707
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__99, ___get_global_string_const(83)));
#line 707
c_rt_lib0hash_set_value_dec(&___nl__im__77, ___get_global_string_const(237), ___nl__im__100);
#line 708
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1079), ___nl__im__77));
#line 709
goto label_2124;
#line 709
label_588:
;
#line 709
c_rt_lib0move(&___nl__im__101,___get_global_string_const(1081));
#line 709
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__101);
#line 709
c_rt_lib0clear(&___nl__im__101);
#line 709
___nl__bool__5 = !___nl__bool__5;
#line 709
if(___nl__bool__5){ goto label_718;}
#line 710
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_mk(0));
#line 711
___nl__bool__103 = false;
#line 711
c_rt_lib0move(&___nl__im__104, c_rt_lib0bool_to_nl_native(___nl__bool__103));
#line 711
c_rt_lib0hash_set_value_dec(&___nl__im__102, ___get_global_string_const(1157), ___nl__im__104);
#line 711
//clear ___nl__bool__103;
#line 711
c_rt_lib0clear(&___nl__im__104);
#line 712
c_rt_lib0move(&___nl__im__106, nparser_priv0parse_cond(___ref___rec__0));
#line 712
___nl__bool__105 = c_rt_lib0priv_is(___nl__im__106, ___get_global_string_const(83));
#line 712
if(___nl__bool__105){ goto label_652;}
#line 712
c_rt_lib0clear(&___nl__im__1);
#line 712
c_rt_lib0clear(&___nl__im__3);
#line 712
c_rt_lib0clear(&___nl__im__4);
#line 712
//clear ___nl__bool__5;
#line 712
c_rt_lib0clear(&___nl__im__7);
#line 712
//clear ___nl__bool__8;
#line 712
c_rt_lib0clear(&___nl__im__9);
#line 712
c_rt_lib0clear(&___nl__im__10);
#line 712
//clear ___nl__bool__12;
#line 712
c_rt_lib0clear(&___nl__im__13);
#line 712
c_rt_lib0clear(&___nl__im__14);
#line 712
c_rt_lib0clear(&___nl__im__15);
#line 712
//clear ___nl__bool__18;
#line 712
c_rt_lib0clear(&___nl__im__20);
#line 712
c_rt_lib0clear(&___nl__im__21);
#line 712
//clear ___nl__bool__23;
#line 712
c_rt_lib0clear(&___nl__im__24);
#line 712
c_rt_lib0clear(&___nl__im__25);
#line 712
c_rt_lib0clear(&___nl__im__26);
#line 712
//clear ___nl__bool__32;
#line 712
c_rt_lib0clear(&___nl__im__33);
#line 712
c_rt_lib0clear(&___nl__im__34);
#line 712
c_rt_lib0clear(&___nl__im__46);
#line 712
//clear ___nl__bool__51;
#line 712
c_rt_lib0clear(&___nl__im__52);
#line 712
c_rt_lib0clear(&___nl__im__53);
#line 712
//clear ___nl__bool__55;
#line 712
c_rt_lib0clear(&___nl__im__56);
#line 712
c_rt_lib0clear(&___nl__im__57);
#line 712
c_rt_lib0clear(&___nl__im__59);
#line 712
//clear ___nl__bool__64;
#line 712
c_rt_lib0clear(&___nl__im__65);
#line 712
c_rt_lib0clear(&___nl__im__66);
#line 712
//clear ___nl__bool__68;
#line 712
c_rt_lib0clear(&___nl__im__69);
#line 712
c_rt_lib0clear(&___nl__im__70);
#line 712
c_rt_lib0clear(&___nl__im__73);
#line 712
//clear ___nl__bool__74;
#line 712
c_rt_lib0clear(&___nl__im__75);
#line 712
c_rt_lib0clear(&___nl__im__77);
#line 712
//clear ___nl__bool__94;
#line 712
c_rt_lib0clear(&___nl__im__95);
#line 712
c_rt_lib0clear(&___nl__im__96);
#line 712
//clear ___nl__bool__98;
#line 712
c_rt_lib0clear(&___nl__im__99);
#line 712
c_rt_lib0clear(&___nl__im__100);
#line 712
c_rt_lib0clear(&___nl__im__102);
#line 712
//clear ___nl__bool__105;
#line 712
return ___nl__im__106;
#line 712
label_652:
;
#line 712
c_rt_lib0move(&___nl__im__107, c_rt_lib0priv_as(___nl__im__106, ___get_global_string_const(83)));
#line 712
c_rt_lib0hash_set_value_dec(&___nl__im__102, ___get_global_string_const(1090), ___nl__im__107);
#line 713
___nl__rec_ptr__108 = &((*___ref___rec__0).state0field);
#line 713
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__108));
#line 713
___nl__rec_ptr__108 = NULL;
#line 714
c_rt_lib0move(&___nl__im__110, nparser_priv0parse_block(___ref___rec__0));
#line 714
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__110, ___get_global_string_const(83));
#line 714
if(___nl__bool__109){ goto label_713;}
#line 714
c_rt_lib0clear(&___nl__im__1);
#line 714
c_rt_lib0clear(&___nl__im__3);
#line 714
c_rt_lib0clear(&___nl__im__4);
#line 714
//clear ___nl__bool__5;
#line 714
c_rt_lib0clear(&___nl__im__7);
#line 714
//clear ___nl__bool__8;
#line 714
c_rt_lib0clear(&___nl__im__9);
#line 714
c_rt_lib0clear(&___nl__im__10);
#line 714
//clear ___nl__bool__12;
#line 714
c_rt_lib0clear(&___nl__im__13);
#line 714
c_rt_lib0clear(&___nl__im__14);
#line 714
c_rt_lib0clear(&___nl__im__15);
#line 714
//clear ___nl__bool__18;
#line 714
c_rt_lib0clear(&___nl__im__20);
#line 714
c_rt_lib0clear(&___nl__im__21);
#line 714
//clear ___nl__bool__23;
#line 714
c_rt_lib0clear(&___nl__im__24);
#line 714
c_rt_lib0clear(&___nl__im__25);
#line 714
c_rt_lib0clear(&___nl__im__26);
#line 714
//clear ___nl__bool__32;
#line 714
c_rt_lib0clear(&___nl__im__33);
#line 714
c_rt_lib0clear(&___nl__im__34);
#line 714
c_rt_lib0clear(&___nl__im__46);
#line 714
//clear ___nl__bool__51;
#line 714
c_rt_lib0clear(&___nl__im__52);
#line 714
c_rt_lib0clear(&___nl__im__53);
#line 714
//clear ___nl__bool__55;
#line 714
c_rt_lib0clear(&___nl__im__56);
#line 714
c_rt_lib0clear(&___nl__im__57);
#line 714
c_rt_lib0clear(&___nl__im__59);
#line 714
//clear ___nl__bool__64;
#line 714
c_rt_lib0clear(&___nl__im__65);
#line 714
c_rt_lib0clear(&___nl__im__66);
#line 714
//clear ___nl__bool__68;
#line 714
c_rt_lib0clear(&___nl__im__69);
#line 714
c_rt_lib0clear(&___nl__im__70);
#line 714
c_rt_lib0clear(&___nl__im__73);
#line 714
//clear ___nl__bool__74;
#line 714
c_rt_lib0clear(&___nl__im__75);
#line 714
c_rt_lib0clear(&___nl__im__77);
#line 714
//clear ___nl__bool__94;
#line 714
c_rt_lib0clear(&___nl__im__95);
#line 714
c_rt_lib0clear(&___nl__im__96);
#line 714
//clear ___nl__bool__98;
#line 714
c_rt_lib0clear(&___nl__im__99);
#line 714
c_rt_lib0clear(&___nl__im__100);
#line 714
c_rt_lib0clear(&___nl__im__102);
#line 714
//clear ___nl__bool__105;
#line 714
c_rt_lib0clear(&___nl__im__106);
#line 714
c_rt_lib0clear(&___nl__im__107);
#line 714
//clear ___nl__bool__109;
#line 714
return ___nl__im__110;
#line 714
label_713:
;
#line 714
c_rt_lib0move(&___nl__im__111, c_rt_lib0priv_as(___nl__im__110, ___get_global_string_const(83)));
#line 714
c_rt_lib0hash_set_value_dec(&___nl__im__102, ___get_global_string_const(237), ___nl__im__111);
#line 715
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1081), ___nl__im__102));
#line 716
goto label_2124;
#line 716
label_718:
;
#line 716
c_rt_lib0move(&___nl__im__112,___get_global_string_const(1077));
#line 716
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__112);
#line 716
c_rt_lib0clear(&___nl__im__112);
#line 716
___nl__bool__5 = !___nl__bool__5;
#line 716
if(___nl__bool__5){ goto label_1141;}
#line 717
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_mk(0));
#line 718
c_rt_lib0move(&___nl__im__114,___get_global_string_const(466));
#line 718
nparser_priv0eat(___ref___rec__0, ___nl__im__114);
#line 718
c_rt_lib0clear(&___nl__im__114);
#line 719
___nl__rec_ptr__116 = &((*___ref___rec__0).state0field);
#line 719
c_rt_lib0move(&___nl__im__117,___get_global_string_const(516));
#line 719
___nl__bool__115 = ntokenizer0next_is(___nl__rec_ptr__116, ___nl__im__117);
#line 719
___nl__rec_ptr__116 = NULL;
#line 719
c_rt_lib0clear(&___nl__im__117);
#line 719
___nl__bool__115 = !___nl__bool__115;
#line 719
if(___nl__bool__115){ goto label_804;}
#line 720
c_rt_lib0move(&___nl__im__120, nparser_priv0parse_var_decl(___ref___rec__0));
#line 720
___nl__bool__119 = c_rt_lib0priv_is(___nl__im__120, ___get_global_string_const(83));
#line 720
if(___nl__bool__119){ goto label_796;}
#line 720
c_rt_lib0clear(&___nl__im__1);
#line 720
c_rt_lib0clear(&___nl__im__3);
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
//clear ___nl__bool__12;
#line 720
c_rt_lib0clear(&___nl__im__13);
#line 720
c_rt_lib0clear(&___nl__im__14);
#line 720
c_rt_lib0clear(&___nl__im__15);
#line 720
//clear ___nl__bool__18;
#line 720
c_rt_lib0clear(&___nl__im__20);
#line 720
c_rt_lib0clear(&___nl__im__21);
#line 720
//clear ___nl__bool__23;
#line 720
c_rt_lib0clear(&___nl__im__24);
#line 720
c_rt_lib0clear(&___nl__im__25);
#line 720
c_rt_lib0clear(&___nl__im__26);
#line 720
//clear ___nl__bool__32;
#line 720
c_rt_lib0clear(&___nl__im__33);
#line 720
c_rt_lib0clear(&___nl__im__34);
#line 720
c_rt_lib0clear(&___nl__im__46);
#line 720
//clear ___nl__bool__51;
#line 720
c_rt_lib0clear(&___nl__im__52);
#line 720
c_rt_lib0clear(&___nl__im__53);
#line 720
//clear ___nl__bool__55;
#line 720
c_rt_lib0clear(&___nl__im__56);
#line 720
c_rt_lib0clear(&___nl__im__57);
#line 720
c_rt_lib0clear(&___nl__im__59);
#line 720
//clear ___nl__bool__64;
#line 720
c_rt_lib0clear(&___nl__im__65);
#line 720
c_rt_lib0clear(&___nl__im__66);
#line 720
//clear ___nl__bool__68;
#line 720
c_rt_lib0clear(&___nl__im__69);
#line 720
c_rt_lib0clear(&___nl__im__70);
#line 720
c_rt_lib0clear(&___nl__im__73);
#line 720
//clear ___nl__bool__74;
#line 720
c_rt_lib0clear(&___nl__im__75);
#line 720
c_rt_lib0clear(&___nl__im__77);
#line 720
//clear ___nl__bool__94;
#line 720
c_rt_lib0clear(&___nl__im__95);
#line 720
c_rt_lib0clear(&___nl__im__96);
#line 720
//clear ___nl__bool__98;
#line 720
c_rt_lib0clear(&___nl__im__99);
#line 720
c_rt_lib0clear(&___nl__im__100);
#line 720
c_rt_lib0clear(&___nl__im__102);
#line 720
//clear ___nl__bool__105;
#line 720
c_rt_lib0clear(&___nl__im__106);
#line 720
c_rt_lib0clear(&___nl__im__107);
#line 720
//clear ___nl__bool__109;
#line 720
c_rt_lib0clear(&___nl__im__110);
#line 720
c_rt_lib0clear(&___nl__im__111);
#line 720
c_rt_lib0clear(&___nl__im__113);
#line 720
//clear ___nl__bool__115;
#line 720
c_rt_lib0clear(&___nl__im__118);
#line 720
//clear ___nl__bool__119;
#line 720
return ___nl__im__120;
#line 720
label_796:
;
#line 720
c_rt_lib0move(&___nl__im__118, c_rt_lib0priv_as(___nl__im__120, ___get_global_string_const(83)));
#line 721
c_rt_lib0move(&___nl__im__121, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__118));
#line 721
c_rt_lib0copy(&___nl__im__122, ___nl__im__121);
#line 721
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(1093), ___nl__im__122);
#line 721
c_rt_lib0clear(&___nl__im__121);
#line 721
c_rt_lib0clear(&___nl__im__122);
#line 722
goto label_893;
#line 722
label_804:
;
#line 722
___nl__rec_ptr__123 = &((*___ref___rec__0).state0field);
#line 722
c_rt_lib0move(&___nl__im__124,___get_global_string_const(451));
#line 722
___nl__bool__115 = ntokenizer0next_is(___nl__rec_ptr__123, ___nl__im__124);
#line 722
___nl__rec_ptr__123 = NULL;
#line 722
c_rt_lib0clear(&___nl__im__124);
#line 722
___nl__bool__115 = !___nl__bool__115;
#line 722
if(___nl__bool__115){ goto label_820;}
#line 723
c_rt_lib0move(&___nl__im__126, nparser_priv0get_value_nop(___ref___rec__0));
#line 723
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__126));
#line 723
c_rt_lib0clear(&___nl__im__126);
#line 723
c_rt_lib0copy(&___nl__im__127, ___nl__im__125);
#line 723
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(1093), ___nl__im__127);
#line 723
c_rt_lib0clear(&___nl__im__125);
#line 723
c_rt_lib0clear(&___nl__im__127);
#line 724
goto label_893;
#line 724
label_820:
;
#line 725
c_rt_lib0move(&___nl__im__130, nparser_priv0parse_expr(___ref___rec__0));
#line 725
___nl__bool__129 = c_rt_lib0priv_is(___nl__im__130, ___get_global_string_const(83));
#line 725
if(___nl__bool__129){ goto label_885;}
#line 725
c_rt_lib0clear(&___nl__im__1);
#line 725
c_rt_lib0clear(&___nl__im__3);
#line 725
c_rt_lib0clear(&___nl__im__4);
#line 725
//clear ___nl__bool__5;
#line 725
c_rt_lib0clear(&___nl__im__7);
#line 725
//clear ___nl__bool__8;
#line 725
c_rt_lib0clear(&___nl__im__9);
#line 725
c_rt_lib0clear(&___nl__im__10);
#line 725
//clear ___nl__bool__12;
#line 725
c_rt_lib0clear(&___nl__im__13);
#line 725
c_rt_lib0clear(&___nl__im__14);
#line 725
c_rt_lib0clear(&___nl__im__15);
#line 725
//clear ___nl__bool__18;
#line 725
c_rt_lib0clear(&___nl__im__20);
#line 725
c_rt_lib0clear(&___nl__im__21);
#line 725
//clear ___nl__bool__23;
#line 725
c_rt_lib0clear(&___nl__im__24);
#line 725
c_rt_lib0clear(&___nl__im__25);
#line 725
c_rt_lib0clear(&___nl__im__26);
#line 725
//clear ___nl__bool__32;
#line 725
c_rt_lib0clear(&___nl__im__33);
#line 725
c_rt_lib0clear(&___nl__im__34);
#line 725
c_rt_lib0clear(&___nl__im__46);
#line 725
//clear ___nl__bool__51;
#line 725
c_rt_lib0clear(&___nl__im__52);
#line 725
c_rt_lib0clear(&___nl__im__53);
#line 725
//clear ___nl__bool__55;
#line 725
c_rt_lib0clear(&___nl__im__56);
#line 725
c_rt_lib0clear(&___nl__im__57);
#line 725
c_rt_lib0clear(&___nl__im__59);
#line 725
//clear ___nl__bool__64;
#line 725
c_rt_lib0clear(&___nl__im__65);
#line 725
c_rt_lib0clear(&___nl__im__66);
#line 725
//clear ___nl__bool__68;
#line 725
c_rt_lib0clear(&___nl__im__69);
#line 725
c_rt_lib0clear(&___nl__im__70);
#line 725
c_rt_lib0clear(&___nl__im__73);
#line 725
//clear ___nl__bool__74;
#line 725
c_rt_lib0clear(&___nl__im__75);
#line 725
c_rt_lib0clear(&___nl__im__77);
#line 725
//clear ___nl__bool__94;
#line 725
c_rt_lib0clear(&___nl__im__95);
#line 725
c_rt_lib0clear(&___nl__im__96);
#line 725
//clear ___nl__bool__98;
#line 725
c_rt_lib0clear(&___nl__im__99);
#line 725
c_rt_lib0clear(&___nl__im__100);
#line 725
c_rt_lib0clear(&___nl__im__102);
#line 725
//clear ___nl__bool__105;
#line 725
c_rt_lib0clear(&___nl__im__106);
#line 725
c_rt_lib0clear(&___nl__im__107);
#line 725
//clear ___nl__bool__109;
#line 725
c_rt_lib0clear(&___nl__im__110);
#line 725
c_rt_lib0clear(&___nl__im__111);
#line 725
c_rt_lib0clear(&___nl__im__113);
#line 725
//clear ___nl__bool__115;
#line 725
c_rt_lib0clear(&___nl__im__118);
#line 725
//clear ___nl__bool__119;
#line 725
c_rt_lib0clear(&___nl__im__120);
#line 725
c_rt_lib0clear(&___nl__im__128);
#line 725
//clear ___nl__bool__129;
#line 725
return ___nl__im__130;
#line 725
label_885:
;
#line 725
c_rt_lib0move(&___nl__im__128, c_rt_lib0priv_as(___nl__im__130, ___get_global_string_const(83)));
#line 726
c_rt_lib0move(&___nl__im__131, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__128));
#line 726
c_rt_lib0copy(&___nl__im__132, ___nl__im__131);
#line 726
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(1093), ___nl__im__132);
#line 726
c_rt_lib0clear(&___nl__im__131);
#line 726
c_rt_lib0clear(&___nl__im__132);
#line 727
goto label_893;
#line 727
label_893:
;
#line 727
//clear ___nl__bool__115;
#line 727
c_rt_lib0clear(&___nl__im__118);
#line 727
//clear ___nl__bool__119;
#line 727
c_rt_lib0clear(&___nl__im__120);
#line 727
c_rt_lib0clear(&___nl__im__128);
#line 727
//clear ___nl__bool__129;
#line 727
c_rt_lib0clear(&___nl__im__130);
#line 728
c_rt_lib0move(&___nl__im__133,___get_global_string_const(451));
#line 728
nparser_priv0eat(___ref___rec__0, ___nl__im__133);
#line 728
c_rt_lib0clear(&___nl__im__133);
#line 729
c_rt_lib0move(&___nl__im__134, nparser_priv0get_value_nop(___ref___rec__0));
#line 729
c_rt_lib0copy(&___nl__im__135, ___nl__im__134);
#line 729
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(1090), ___nl__im__135);
#line 729
c_rt_lib0clear(&___nl__im__134);
#line 729
c_rt_lib0clear(&___nl__im__135);
#line 730
___nl__rec_ptr__137 = &((*___ref___rec__0).state0field);
#line 730
c_rt_lib0move(&___nl__im__138,___get_global_string_const(451));
#line 730
___nl__bool__136 = ntokenizer0next_is(___nl__rec_ptr__137, ___nl__im__138);
#line 730
___nl__rec_ptr__137 = NULL;
#line 730
c_rt_lib0clear(&___nl__im__138);
#line 730
___nl__bool__136 = !___nl__bool__136;
#line 730
___nl__bool__136 = !___nl__bool__136;
#line 730
if(___nl__bool__136){ goto label_981;}
#line 730
c_rt_lib0move(&___nl__im__140, nparser_priv0parse_expr(___ref___rec__0));
#line 730
___nl__bool__139 = c_rt_lib0priv_is(___nl__im__140, ___get_global_string_const(83));
#line 730
if(___nl__bool__139){ goto label_977;}
#line 730
c_rt_lib0clear(&___nl__im__1);
#line 730
c_rt_lib0clear(&___nl__im__3);
#line 730
c_rt_lib0clear(&___nl__im__4);
#line 730
//clear ___nl__bool__5;
#line 730
c_rt_lib0clear(&___nl__im__7);
#line 730
//clear ___nl__bool__8;
#line 730
c_rt_lib0clear(&___nl__im__9);
#line 730
c_rt_lib0clear(&___nl__im__10);
#line 730
//clear ___nl__bool__12;
#line 730
c_rt_lib0clear(&___nl__im__13);
#line 730
c_rt_lib0clear(&___nl__im__14);
#line 730
c_rt_lib0clear(&___nl__im__15);
#line 730
//clear ___nl__bool__18;
#line 730
c_rt_lib0clear(&___nl__im__20);
#line 730
c_rt_lib0clear(&___nl__im__21);
#line 730
//clear ___nl__bool__23;
#line 730
c_rt_lib0clear(&___nl__im__24);
#line 730
c_rt_lib0clear(&___nl__im__25);
#line 730
c_rt_lib0clear(&___nl__im__26);
#line 730
//clear ___nl__bool__32;
#line 730
c_rt_lib0clear(&___nl__im__33);
#line 730
c_rt_lib0clear(&___nl__im__34);
#line 730
c_rt_lib0clear(&___nl__im__46);
#line 730
//clear ___nl__bool__51;
#line 730
c_rt_lib0clear(&___nl__im__52);
#line 730
c_rt_lib0clear(&___nl__im__53);
#line 730
//clear ___nl__bool__55;
#line 730
c_rt_lib0clear(&___nl__im__56);
#line 730
c_rt_lib0clear(&___nl__im__57);
#line 730
c_rt_lib0clear(&___nl__im__59);
#line 730
//clear ___nl__bool__64;
#line 730
c_rt_lib0clear(&___nl__im__65);
#line 730
c_rt_lib0clear(&___nl__im__66);
#line 730
//clear ___nl__bool__68;
#line 730
c_rt_lib0clear(&___nl__im__69);
#line 730
c_rt_lib0clear(&___nl__im__70);
#line 730
c_rt_lib0clear(&___nl__im__73);
#line 730
//clear ___nl__bool__74;
#line 730
c_rt_lib0clear(&___nl__im__75);
#line 730
c_rt_lib0clear(&___nl__im__77);
#line 730
//clear ___nl__bool__94;
#line 730
c_rt_lib0clear(&___nl__im__95);
#line 730
c_rt_lib0clear(&___nl__im__96);
#line 730
//clear ___nl__bool__98;
#line 730
c_rt_lib0clear(&___nl__im__99);
#line 730
c_rt_lib0clear(&___nl__im__100);
#line 730
c_rt_lib0clear(&___nl__im__102);
#line 730
//clear ___nl__bool__105;
#line 730
c_rt_lib0clear(&___nl__im__106);
#line 730
c_rt_lib0clear(&___nl__im__107);
#line 730
//clear ___nl__bool__109;
#line 730
c_rt_lib0clear(&___nl__im__110);
#line 730
c_rt_lib0clear(&___nl__im__111);
#line 730
c_rt_lib0clear(&___nl__im__113);
#line 730
//clear ___nl__bool__136;
#line 730
//clear ___nl__bool__139;
#line 730
return ___nl__im__140;
#line 730
label_977:
;
#line 730
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__140, ___get_global_string_const(83)));
#line 730
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(1090), ___nl__im__141);
#line 730
goto label_981;
#line 730
label_981:
;
#line 730
//clear ___nl__bool__136;
#line 730
//clear ___nl__bool__139;
#line 730
c_rt_lib0clear(&___nl__im__140);
#line 730
c_rt_lib0clear(&___nl__im__141);
#line 731
c_rt_lib0move(&___nl__im__142,___get_global_string_const(451));
#line 731
nparser_priv0eat(___ref___rec__0, ___nl__im__142);
#line 731
c_rt_lib0clear(&___nl__im__142);
#line 732
c_rt_lib0move(&___nl__im__143, nparser_priv0get_value_nop(___ref___rec__0));
#line 732
c_rt_lib0copy(&___nl__im__144, ___nl__im__143);
#line 732
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(373), ___nl__im__144);
#line 732
c_rt_lib0clear(&___nl__im__143);
#line 732
c_rt_lib0clear(&___nl__im__144);
#line 733
___nl__rec_ptr__146 = &((*___ref___rec__0).state0field);
#line 733
c_rt_lib0move(&___nl__im__147,___get_global_string_const(331));
#line 733
___nl__bool__145 = ntokenizer0next_is(___nl__rec_ptr__146, ___nl__im__147);
#line 733
___nl__rec_ptr__146 = NULL;
#line 733
c_rt_lib0clear(&___nl__im__147);
#line 733
___nl__bool__145 = !___nl__bool__145;
#line 733
___nl__bool__145 = !___nl__bool__145;
#line 733
if(___nl__bool__145){ goto label_1066;}
#line 733
c_rt_lib0move(&___nl__im__149, nparser_priv0parse_expr(___ref___rec__0));
#line 733
___nl__bool__148 = c_rt_lib0priv_is(___nl__im__149, ___get_global_string_const(83));
#line 733
if(___nl__bool__148){ goto label_1062;}
#line 733
c_rt_lib0clear(&___nl__im__1);
#line 733
c_rt_lib0clear(&___nl__im__3);
#line 733
c_rt_lib0clear(&___nl__im__4);
#line 733
//clear ___nl__bool__5;
#line 733
c_rt_lib0clear(&___nl__im__7);
#line 733
//clear ___nl__bool__8;
#line 733
c_rt_lib0clear(&___nl__im__9);
#line 733
c_rt_lib0clear(&___nl__im__10);
#line 733
//clear ___nl__bool__12;
#line 733
c_rt_lib0clear(&___nl__im__13);
#line 733
c_rt_lib0clear(&___nl__im__14);
#line 733
c_rt_lib0clear(&___nl__im__15);
#line 733
//clear ___nl__bool__18;
#line 733
c_rt_lib0clear(&___nl__im__20);
#line 733
c_rt_lib0clear(&___nl__im__21);
#line 733
//clear ___nl__bool__23;
#line 733
c_rt_lib0clear(&___nl__im__24);
#line 733
c_rt_lib0clear(&___nl__im__25);
#line 733
c_rt_lib0clear(&___nl__im__26);
#line 733
//clear ___nl__bool__32;
#line 733
c_rt_lib0clear(&___nl__im__33);
#line 733
c_rt_lib0clear(&___nl__im__34);
#line 733
c_rt_lib0clear(&___nl__im__46);
#line 733
//clear ___nl__bool__51;
#line 733
c_rt_lib0clear(&___nl__im__52);
#line 733
c_rt_lib0clear(&___nl__im__53);
#line 733
//clear ___nl__bool__55;
#line 733
c_rt_lib0clear(&___nl__im__56);
#line 733
c_rt_lib0clear(&___nl__im__57);
#line 733
c_rt_lib0clear(&___nl__im__59);
#line 733
//clear ___nl__bool__64;
#line 733
c_rt_lib0clear(&___nl__im__65);
#line 733
c_rt_lib0clear(&___nl__im__66);
#line 733
//clear ___nl__bool__68;
#line 733
c_rt_lib0clear(&___nl__im__69);
#line 733
c_rt_lib0clear(&___nl__im__70);
#line 733
c_rt_lib0clear(&___nl__im__73);
#line 733
//clear ___nl__bool__74;
#line 733
c_rt_lib0clear(&___nl__im__75);
#line 733
c_rt_lib0clear(&___nl__im__77);
#line 733
//clear ___nl__bool__94;
#line 733
c_rt_lib0clear(&___nl__im__95);
#line 733
c_rt_lib0clear(&___nl__im__96);
#line 733
//clear ___nl__bool__98;
#line 733
c_rt_lib0clear(&___nl__im__99);
#line 733
c_rt_lib0clear(&___nl__im__100);
#line 733
c_rt_lib0clear(&___nl__im__102);
#line 733
//clear ___nl__bool__105;
#line 733
c_rt_lib0clear(&___nl__im__106);
#line 733
c_rt_lib0clear(&___nl__im__107);
#line 733
//clear ___nl__bool__109;
#line 733
c_rt_lib0clear(&___nl__im__110);
#line 733
c_rt_lib0clear(&___nl__im__111);
#line 733
c_rt_lib0clear(&___nl__im__113);
#line 733
//clear ___nl__bool__145;
#line 733
//clear ___nl__bool__148;
#line 733
return ___nl__im__149;
#line 733
label_1062:
;
#line 733
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__149, ___get_global_string_const(83)));
#line 733
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(373), ___nl__im__150);
#line 733
goto label_1066;
#line 733
label_1066:
;
#line 733
//clear ___nl__bool__145;
#line 733
//clear ___nl__bool__148;
#line 733
c_rt_lib0clear(&___nl__im__149);
#line 733
c_rt_lib0clear(&___nl__im__150);
#line 734
c_rt_lib0move(&___nl__im__151,___get_global_string_const(331));
#line 734
nparser_priv0eat(___ref___rec__0, ___nl__im__151);
#line 734
c_rt_lib0clear(&___nl__im__151);
#line 735
___nl__rec_ptr__152 = &((*___ref___rec__0).state0field);
#line 735
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__152));
#line 735
___nl__rec_ptr__152 = NULL;
#line 736
c_rt_lib0move(&___nl__im__154, nparser_priv0parse_block(___ref___rec__0));
#line 736
___nl__bool__153 = c_rt_lib0priv_is(___nl__im__154, ___get_global_string_const(83));
#line 736
if(___nl__bool__153){ goto label_1136;}
#line 736
c_rt_lib0clear(&___nl__im__1);
#line 736
c_rt_lib0clear(&___nl__im__3);
#line 736
c_rt_lib0clear(&___nl__im__4);
#line 736
//clear ___nl__bool__5;
#line 736
c_rt_lib0clear(&___nl__im__7);
#line 736
//clear ___nl__bool__8;
#line 736
c_rt_lib0clear(&___nl__im__9);
#line 736
c_rt_lib0clear(&___nl__im__10);
#line 736
//clear ___nl__bool__12;
#line 736
c_rt_lib0clear(&___nl__im__13);
#line 736
c_rt_lib0clear(&___nl__im__14);
#line 736
c_rt_lib0clear(&___nl__im__15);
#line 736
//clear ___nl__bool__18;
#line 736
c_rt_lib0clear(&___nl__im__20);
#line 736
c_rt_lib0clear(&___nl__im__21);
#line 736
//clear ___nl__bool__23;
#line 736
c_rt_lib0clear(&___nl__im__24);
#line 736
c_rt_lib0clear(&___nl__im__25);
#line 736
c_rt_lib0clear(&___nl__im__26);
#line 736
//clear ___nl__bool__32;
#line 736
c_rt_lib0clear(&___nl__im__33);
#line 736
c_rt_lib0clear(&___nl__im__34);
#line 736
c_rt_lib0clear(&___nl__im__46);
#line 736
//clear ___nl__bool__51;
#line 736
c_rt_lib0clear(&___nl__im__52);
#line 736
c_rt_lib0clear(&___nl__im__53);
#line 736
//clear ___nl__bool__55;
#line 736
c_rt_lib0clear(&___nl__im__56);
#line 736
c_rt_lib0clear(&___nl__im__57);
#line 736
c_rt_lib0clear(&___nl__im__59);
#line 736
//clear ___nl__bool__64;
#line 736
c_rt_lib0clear(&___nl__im__65);
#line 736
c_rt_lib0clear(&___nl__im__66);
#line 736
//clear ___nl__bool__68;
#line 736
c_rt_lib0clear(&___nl__im__69);
#line 736
c_rt_lib0clear(&___nl__im__70);
#line 736
c_rt_lib0clear(&___nl__im__73);
#line 736
//clear ___nl__bool__74;
#line 736
c_rt_lib0clear(&___nl__im__75);
#line 736
c_rt_lib0clear(&___nl__im__77);
#line 736
//clear ___nl__bool__94;
#line 736
c_rt_lib0clear(&___nl__im__95);
#line 736
c_rt_lib0clear(&___nl__im__96);
#line 736
//clear ___nl__bool__98;
#line 736
c_rt_lib0clear(&___nl__im__99);
#line 736
c_rt_lib0clear(&___nl__im__100);
#line 736
c_rt_lib0clear(&___nl__im__102);
#line 736
//clear ___nl__bool__105;
#line 736
c_rt_lib0clear(&___nl__im__106);
#line 736
c_rt_lib0clear(&___nl__im__107);
#line 736
//clear ___nl__bool__109;
#line 736
c_rt_lib0clear(&___nl__im__110);
#line 736
c_rt_lib0clear(&___nl__im__111);
#line 736
c_rt_lib0clear(&___nl__im__113);
#line 736
//clear ___nl__bool__153;
#line 736
return ___nl__im__154;
#line 736
label_1136:
;
#line 736
c_rt_lib0move(&___nl__im__155, c_rt_lib0priv_as(___nl__im__154, ___get_global_string_const(83)));
#line 736
c_rt_lib0hash_set_value_dec(&___nl__im__113, ___get_global_string_const(237), ___nl__im__155);
#line 737
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1077), ___nl__im__113));
#line 738
goto label_2124;
#line 738
label_1141:
;
#line 738
___nl__rec_ptr__156 = &((*___ref___rec__0).state0field);
#line 738
c_rt_lib0move(&___nl__im__157,___get_global_string_const(315));
#line 738
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__156, ___nl__im__157);
#line 738
___nl__rec_ptr__156 = NULL;
#line 738
c_rt_lib0clear(&___nl__im__157);
#line 738
___nl__bool__5 = !___nl__bool__5;
#line 738
if(___nl__bool__5){ goto label_1219;}
#line 739
___nl__rec_ptr__158 = &((*___ref___rec__0).state0field);
#line 739
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__158));
#line 739
___nl__rec_ptr__158 = NULL;
#line 740
c_rt_lib0move(&___nl__im__161, nparser_priv0parse_block(___ref___rec__0));
#line 740
___nl__bool__160 = c_rt_lib0priv_is(___nl__im__161, ___get_global_string_const(83));
#line 740
if(___nl__bool__160){ goto label_1215;}
#line 740
c_rt_lib0clear(&___nl__im__1);
#line 740
c_rt_lib0clear(&___nl__im__3);
#line 740
c_rt_lib0clear(&___nl__im__4);
#line 740
//clear ___nl__bool__5;
#line 740
c_rt_lib0clear(&___nl__im__7);
#line 740
//clear ___nl__bool__8;
#line 740
c_rt_lib0clear(&___nl__im__9);
#line 740
c_rt_lib0clear(&___nl__im__10);
#line 740
//clear ___nl__bool__12;
#line 740
c_rt_lib0clear(&___nl__im__13);
#line 740
c_rt_lib0clear(&___nl__im__14);
#line 740
c_rt_lib0clear(&___nl__im__15);
#line 740
//clear ___nl__bool__18;
#line 740
c_rt_lib0clear(&___nl__im__20);
#line 740
c_rt_lib0clear(&___nl__im__21);
#line 740
//clear ___nl__bool__23;
#line 740
c_rt_lib0clear(&___nl__im__24);
#line 740
c_rt_lib0clear(&___nl__im__25);
#line 740
c_rt_lib0clear(&___nl__im__26);
#line 740
//clear ___nl__bool__32;
#line 740
c_rt_lib0clear(&___nl__im__33);
#line 740
c_rt_lib0clear(&___nl__im__34);
#line 740
c_rt_lib0clear(&___nl__im__46);
#line 740
//clear ___nl__bool__51;
#line 740
c_rt_lib0clear(&___nl__im__52);
#line 740
c_rt_lib0clear(&___nl__im__53);
#line 740
//clear ___nl__bool__55;
#line 740
c_rt_lib0clear(&___nl__im__56);
#line 740
c_rt_lib0clear(&___nl__im__57);
#line 740
c_rt_lib0clear(&___nl__im__59);
#line 740
//clear ___nl__bool__64;
#line 740
c_rt_lib0clear(&___nl__im__65);
#line 740
c_rt_lib0clear(&___nl__im__66);
#line 740
//clear ___nl__bool__68;
#line 740
c_rt_lib0clear(&___nl__im__69);
#line 740
c_rt_lib0clear(&___nl__im__70);
#line 740
c_rt_lib0clear(&___nl__im__73);
#line 740
//clear ___nl__bool__74;
#line 740
c_rt_lib0clear(&___nl__im__75);
#line 740
c_rt_lib0clear(&___nl__im__77);
#line 740
//clear ___nl__bool__94;
#line 740
c_rt_lib0clear(&___nl__im__95);
#line 740
c_rt_lib0clear(&___nl__im__96);
#line 740
//clear ___nl__bool__98;
#line 740
c_rt_lib0clear(&___nl__im__99);
#line 740
c_rt_lib0clear(&___nl__im__100);
#line 740
c_rt_lib0clear(&___nl__im__102);
#line 740
//clear ___nl__bool__105;
#line 740
c_rt_lib0clear(&___nl__im__106);
#line 740
c_rt_lib0clear(&___nl__im__107);
#line 740
//clear ___nl__bool__109;
#line 740
c_rt_lib0clear(&___nl__im__110);
#line 740
c_rt_lib0clear(&___nl__im__111);
#line 740
c_rt_lib0clear(&___nl__im__113);
#line 740
//clear ___nl__bool__153;
#line 740
c_rt_lib0clear(&___nl__im__154);
#line 740
c_rt_lib0clear(&___nl__im__155);
#line 740
c_rt_lib0clear(&___nl__im__159);
#line 740
//clear ___nl__bool__160;
#line 740
return ___nl__im__161;
#line 740
label_1215:
;
#line 740
c_rt_lib0move(&___nl__im__159, c_rt_lib0priv_as(___nl__im__161, ___get_global_string_const(83)));
#line 741
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_string_const(237)));
#line 742
goto label_2124;
#line 742
label_1219:
;
#line 742
c_rt_lib0move(&___nl__im__162,___get_global_string_const(1084));
#line 742
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__162);
#line 742
c_rt_lib0clear(&___nl__im__162);
#line 742
___nl__bool__5 = !___nl__bool__5;
#line 742
if(___nl__bool__5){ goto label_1230;}
#line 743
___nl__rec_ptr__163 = &((*___ref___rec__0).state0field);
#line 743
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__163));
#line 743
___nl__rec_ptr__163 = NULL;
#line 744
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(1084)));
#line 745
goto label_2124;
#line 745
label_1230:
;
#line 745
c_rt_lib0move(&___nl__im__164,___get_global_string_const(1085));
#line 745
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__164);
#line 745
c_rt_lib0clear(&___nl__im__164);
#line 745
___nl__bool__5 = !___nl__bool__5;
#line 745
if(___nl__bool__5){ goto label_1241;}
#line 746
___nl__rec_ptr__165 = &((*___ref___rec__0).state0field);
#line 746
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__165));
#line 746
___nl__rec_ptr__165 = NULL;
#line 747
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(1085)));
#line 748
goto label_2124;
#line 748
label_1241:
;
#line 748
c_rt_lib0move(&___nl__im__166,___get_global_string_const(257));
#line 748
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__166);
#line 748
c_rt_lib0clear(&___nl__im__166);
#line 748
___nl__bool__5 = !___nl__bool__5;
#line 748
if(___nl__bool__5){ goto label_1370;}
#line 749
___nl__rec_ptr__168 = &((*___ref___rec__0).state0field);
#line 749
c_rt_lib0move(&___nl__im__167, ntokenizer0get_token(___nl__rec_ptr__168));
#line 749
___nl__rec_ptr__168 = NULL;
#line 750
___nl__bool__169 = false;
#line 751
c_rt_lib0move(&___nl__im__170, nparser_priv0get_end_list());
#line 751
___nl__int__172 = 0;
#line 751
___nl__int__173 = 1;
#line 751
___nl__int__174 = c_rt_lib0array_len(___nl__im__170);
#line 751
label_1255:
;
#line 751
___nl__bool__175 = ___nl__int__172 >= ___nl__int__174;
#line 751
if(___nl__bool__175){ goto label_1272;}
#line 751
c_rt_lib0move(&___nl__im__176, c_rt_lib0array_get(___nl__im__170, ___nl__int__172));
#line 751
c_rt_lib0copy(&___nl__im__171, ___nl__im__176);
#line 752
___nl__bool__177 = c_rt_lib0eq(___nl__im__167, ___nl__im__171);
#line 752
___nl__bool__177 = !___nl__bool__177;
#line 752
if(___nl__bool__177){ goto label_1267;}
#line 753
___nl__bool__169 = true;
#line 754
//clear ___nl__bool__177;
#line 754
goto label_1272;
#line 755
goto label_1267;
#line 755
label_1267:
;
#line 755
//clear ___nl__bool__177;
#line 755
c_rt_lib0clear(&___nl__im__171);
#line 756
___nl__int__172 = ___nl__int__172 + ___nl__int__173;
#line 756
goto label_1255;
#line 756
label_1272:
;
#line 757
___nl__bool__178 = ___nl__bool__169;
#line 757
___nl__bool__178 = !___nl__bool__178;
#line 757
if(___nl__bool__178){ goto label_1280;}
#line 758
c_rt_lib0move(&___nl__im__179, nparser_priv0get_value_nop(___ref___rec__0));
#line 758
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__179));
#line 758
c_rt_lib0clear(&___nl__im__179);
#line 759
goto label_1361;
#line 759
label_1280:
;
#line 760
c_rt_lib0move(&___nl__im__182, nparser_priv0parse_expr(___ref___rec__0));
#line 760
___nl__bool__181 = c_rt_lib0priv_is(___nl__im__182, ___get_global_string_const(83));
#line 760
if(___nl__bool__181){ goto label_1357;}
#line 760
c_rt_lib0clear(&___nl__im__1);
#line 760
c_rt_lib0clear(&___nl__im__3);
#line 760
c_rt_lib0clear(&___nl__im__4);
#line 760
//clear ___nl__bool__5;
#line 760
c_rt_lib0clear(&___nl__im__7);
#line 760
//clear ___nl__bool__8;
#line 760
c_rt_lib0clear(&___nl__im__9);
#line 760
c_rt_lib0clear(&___nl__im__10);
#line 760
//clear ___nl__bool__12;
#line 760
c_rt_lib0clear(&___nl__im__13);
#line 760
c_rt_lib0clear(&___nl__im__14);
#line 760
c_rt_lib0clear(&___nl__im__15);
#line 760
//clear ___nl__bool__18;
#line 760
c_rt_lib0clear(&___nl__im__20);
#line 760
c_rt_lib0clear(&___nl__im__21);
#line 760
//clear ___nl__bool__23;
#line 760
c_rt_lib0clear(&___nl__im__24);
#line 760
c_rt_lib0clear(&___nl__im__25);
#line 760
c_rt_lib0clear(&___nl__im__26);
#line 760
//clear ___nl__bool__32;
#line 760
c_rt_lib0clear(&___nl__im__33);
#line 760
c_rt_lib0clear(&___nl__im__34);
#line 760
c_rt_lib0clear(&___nl__im__46);
#line 760
//clear ___nl__bool__51;
#line 760
c_rt_lib0clear(&___nl__im__52);
#line 760
c_rt_lib0clear(&___nl__im__53);
#line 760
//clear ___nl__bool__55;
#line 760
c_rt_lib0clear(&___nl__im__56);
#line 760
c_rt_lib0clear(&___nl__im__57);
#line 760
c_rt_lib0clear(&___nl__im__59);
#line 760
//clear ___nl__bool__64;
#line 760
c_rt_lib0clear(&___nl__im__65);
#line 760
c_rt_lib0clear(&___nl__im__66);
#line 760
//clear ___nl__bool__68;
#line 760
c_rt_lib0clear(&___nl__im__69);
#line 760
c_rt_lib0clear(&___nl__im__70);
#line 760
c_rt_lib0clear(&___nl__im__73);
#line 760
//clear ___nl__bool__74;
#line 760
c_rt_lib0clear(&___nl__im__75);
#line 760
c_rt_lib0clear(&___nl__im__77);
#line 760
//clear ___nl__bool__94;
#line 760
c_rt_lib0clear(&___nl__im__95);
#line 760
c_rt_lib0clear(&___nl__im__96);
#line 760
//clear ___nl__bool__98;
#line 760
c_rt_lib0clear(&___nl__im__99);
#line 760
c_rt_lib0clear(&___nl__im__100);
#line 760
c_rt_lib0clear(&___nl__im__102);
#line 760
//clear ___nl__bool__105;
#line 760
c_rt_lib0clear(&___nl__im__106);
#line 760
c_rt_lib0clear(&___nl__im__107);
#line 760
//clear ___nl__bool__109;
#line 760
c_rt_lib0clear(&___nl__im__110);
#line 760
c_rt_lib0clear(&___nl__im__111);
#line 760
c_rt_lib0clear(&___nl__im__113);
#line 760
//clear ___nl__bool__153;
#line 760
c_rt_lib0clear(&___nl__im__154);
#line 760
c_rt_lib0clear(&___nl__im__155);
#line 760
c_rt_lib0clear(&___nl__im__159);
#line 760
//clear ___nl__bool__160;
#line 760
c_rt_lib0clear(&___nl__im__161);
#line 760
c_rt_lib0clear(&___nl__im__167);
#line 760
//clear ___nl__bool__169;
#line 760
c_rt_lib0clear(&___nl__im__170);
#line 760
c_rt_lib0clear(&___nl__im__171);
#line 760
//clear ___nl__int__172;
#line 760
//clear ___nl__int__173;
#line 760
//clear ___nl__int__174;
#line 760
//clear ___nl__bool__175;
#line 760
c_rt_lib0clear(&___nl__im__176);
#line 760
//clear ___nl__bool__178;
#line 760
c_rt_lib0clear(&___nl__im__180);
#line 760
//clear ___nl__bool__181;
#line 760
return ___nl__im__182;
#line 760
label_1357:
;
#line 760
c_rt_lib0move(&___nl__im__180, c_rt_lib0priv_as(___nl__im__182, ___get_global_string_const(83)));
#line 761
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__180));
#line 762
goto label_1361;
#line 762
label_1361:
;
#line 762
//clear ___nl__bool__178;
#line 762
c_rt_lib0clear(&___nl__im__180);
#line 762
//clear ___nl__bool__181;
#line 762
c_rt_lib0clear(&___nl__im__182);
#line 763
___nl__rec_ptr__183 = &((*___ref___rec__0).state0field);
#line 763
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__183));
#line 763
___nl__rec_ptr__183 = NULL;
#line 764
goto label_2124;
#line 764
label_1370:
;
#line 764
c_rt_lib0move(&___nl__im__184,___get_global_string_const(1086));
#line 764
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__184);
#line 764
c_rt_lib0clear(&___nl__im__184);
#line 764
___nl__bool__5 = !___nl__bool__5;
#line 764
if(___nl__bool__5){ goto label_1590;}
#line 765
c_rt_lib0move(&___nl__im__185,___get_global_string_const(466));
#line 765
nparser_priv0eat(___ref___rec__0, ___nl__im__185);
#line 765
c_rt_lib0clear(&___nl__im__185);
#line 766
c_rt_lib0move(&___nl__im__188, nparser_priv0parse_expr(___ref___rec__0));
#line 766
___nl__bool__187 = c_rt_lib0priv_is(___nl__im__188, ___get_global_string_const(83));
#line 766
if(___nl__bool__187){ goto label_1454;}
#line 766
c_rt_lib0clear(&___nl__im__1);
#line 766
c_rt_lib0clear(&___nl__im__3);
#line 766
c_rt_lib0clear(&___nl__im__4);
#line 766
//clear ___nl__bool__5;
#line 766
c_rt_lib0clear(&___nl__im__7);
#line 766
//clear ___nl__bool__8;
#line 766
c_rt_lib0clear(&___nl__im__9);
#line 766
c_rt_lib0clear(&___nl__im__10);
#line 766
//clear ___nl__bool__12;
#line 766
c_rt_lib0clear(&___nl__im__13);
#line 766
c_rt_lib0clear(&___nl__im__14);
#line 766
c_rt_lib0clear(&___nl__im__15);
#line 766
//clear ___nl__bool__18;
#line 766
c_rt_lib0clear(&___nl__im__20);
#line 766
c_rt_lib0clear(&___nl__im__21);
#line 766
//clear ___nl__bool__23;
#line 766
c_rt_lib0clear(&___nl__im__24);
#line 766
c_rt_lib0clear(&___nl__im__25);
#line 766
c_rt_lib0clear(&___nl__im__26);
#line 766
//clear ___nl__bool__32;
#line 766
c_rt_lib0clear(&___nl__im__33);
#line 766
c_rt_lib0clear(&___nl__im__34);
#line 766
c_rt_lib0clear(&___nl__im__46);
#line 766
//clear ___nl__bool__51;
#line 766
c_rt_lib0clear(&___nl__im__52);
#line 766
c_rt_lib0clear(&___nl__im__53);
#line 766
//clear ___nl__bool__55;
#line 766
c_rt_lib0clear(&___nl__im__56);
#line 766
c_rt_lib0clear(&___nl__im__57);
#line 766
c_rt_lib0clear(&___nl__im__59);
#line 766
//clear ___nl__bool__64;
#line 766
c_rt_lib0clear(&___nl__im__65);
#line 766
c_rt_lib0clear(&___nl__im__66);
#line 766
//clear ___nl__bool__68;
#line 766
c_rt_lib0clear(&___nl__im__69);
#line 766
c_rt_lib0clear(&___nl__im__70);
#line 766
c_rt_lib0clear(&___nl__im__73);
#line 766
//clear ___nl__bool__74;
#line 766
c_rt_lib0clear(&___nl__im__75);
#line 766
c_rt_lib0clear(&___nl__im__77);
#line 766
//clear ___nl__bool__94;
#line 766
c_rt_lib0clear(&___nl__im__95);
#line 766
c_rt_lib0clear(&___nl__im__96);
#line 766
//clear ___nl__bool__98;
#line 766
c_rt_lib0clear(&___nl__im__99);
#line 766
c_rt_lib0clear(&___nl__im__100);
#line 766
c_rt_lib0clear(&___nl__im__102);
#line 766
//clear ___nl__bool__105;
#line 766
c_rt_lib0clear(&___nl__im__106);
#line 766
c_rt_lib0clear(&___nl__im__107);
#line 766
//clear ___nl__bool__109;
#line 766
c_rt_lib0clear(&___nl__im__110);
#line 766
c_rt_lib0clear(&___nl__im__111);
#line 766
c_rt_lib0clear(&___nl__im__113);
#line 766
//clear ___nl__bool__153;
#line 766
c_rt_lib0clear(&___nl__im__154);
#line 766
c_rt_lib0clear(&___nl__im__155);
#line 766
c_rt_lib0clear(&___nl__im__159);
#line 766
//clear ___nl__bool__160;
#line 766
c_rt_lib0clear(&___nl__im__161);
#line 766
c_rt_lib0clear(&___nl__im__167);
#line 766
//clear ___nl__bool__169;
#line 766
c_rt_lib0clear(&___nl__im__170);
#line 766
c_rt_lib0clear(&___nl__im__171);
#line 766
//clear ___nl__int__172;
#line 766
//clear ___nl__int__173;
#line 766
//clear ___nl__int__174;
#line 766
//clear ___nl__bool__175;
#line 766
c_rt_lib0clear(&___nl__im__176);
#line 766
c_rt_lib0clear(&___nl__im__186);
#line 766
//clear ___nl__bool__187;
#line 766
return ___nl__im__188;
#line 766
label_1454:
;
#line 766
c_rt_lib0move(&___nl__im__186, c_rt_lib0priv_as(___nl__im__188, ___get_global_string_const(83)));
#line 767
c_rt_lib0move(&___nl__im__190, c_rt_lib0array_mk(0));
#line 767
c_rt_lib0move(&___nl__im__189, c_rt_lib0hash_mk(2, ___get_global_string_const(234), ___nl__im__186, ___get_global_string_const(1098), ___nl__im__190));
#line 767
c_rt_lib0clear(&___nl__im__190);
#line 768
c_rt_lib0move(&___nl__im__191,___get_global_string_const(331));
#line 768
nparser_priv0eat(___ref___rec__0, ___nl__im__191);
#line 768
c_rt_lib0clear(&___nl__im__191);
#line 769
___nl__rec_ptr__193 = &((*___ref___rec__0).state0field);
#line 769
c_rt_lib0move(&___nl__im__192, ntokenizer0get_place(___nl__rec_ptr__193));
#line 769
___nl__rec_ptr__193 = NULL;
#line 770
___nl__rec_ptr__194 = &((*___ref___rec__0).state0field);
#line 770
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__194));
#line 770
___nl__rec_ptr__194 = NULL;
#line 771
label_1468:
;
#line 771
c_rt_lib0move(&___nl__im__196,___get_global_string_const(1220));
#line 771
___nl__bool__195 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__196);
#line 771
c_rt_lib0clear(&___nl__im__196);
#line 771
___nl__bool__195 = !___nl__bool__195;
#line 771
if(___nl__bool__195){ goto label_1587;}
#line 772
c_rt_lib0move(&___nl__im__198, nparser_priv0parse_variant_decl(___ref___rec__0));
#line 772
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_mk(1, ___get_global_string_const(572), ___nl__im__198));
#line 772
c_rt_lib0clear(&___nl__im__198);
#line 773
___nl__rec_ptr__201 = &((*___ref___rec__0).state0field);
#line 773
c_rt_lib0move(&___nl__im__200, ntokenizer0get_place_ws(___nl__rec_ptr__201));
#line 773
___nl__rec_ptr__201 = NULL;
#line 773
c_rt_lib0move(&___nl__im__202, c_rt_lib0array_mk(0));
#line 773
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__192, ___get_global_string_const(745), ___nl__im__200, ___get_global_string_const(1136), ___nl__im__202));
#line 773
c_rt_lib0clear(&___nl__im__200);
#line 773
c_rt_lib0clear(&___nl__im__202);
#line 773
c_rt_lib0copy(&___nl__im__203, ___nl__im__199);
#line 773
c_rt_lib0hash_set_value_dec(&___nl__im__197, ___get_global_string_const(210), ___nl__im__203);
#line 773
c_rt_lib0clear(&___nl__im__199);
#line 773
c_rt_lib0clear(&___nl__im__203);
#line 774
c_rt_lib0move(&___nl__im__205, nparser_priv0parse_block(___ref___rec__0));
#line 774
___nl__bool__204 = c_rt_lib0priv_is(___nl__im__205, ___get_global_string_const(83));
#line 774
if(___nl__bool__204){ goto label_1569;}
#line 774
c_rt_lib0clear(&___nl__im__1);
#line 774
c_rt_lib0clear(&___nl__im__3);
#line 774
c_rt_lib0clear(&___nl__im__4);
#line 774
//clear ___nl__bool__5;
#line 774
c_rt_lib0clear(&___nl__im__7);
#line 774
//clear ___nl__bool__8;
#line 774
c_rt_lib0clear(&___nl__im__9);
#line 774
c_rt_lib0clear(&___nl__im__10);
#line 774
//clear ___nl__bool__12;
#line 774
c_rt_lib0clear(&___nl__im__13);
#line 774
c_rt_lib0clear(&___nl__im__14);
#line 774
c_rt_lib0clear(&___nl__im__15);
#line 774
//clear ___nl__bool__18;
#line 774
c_rt_lib0clear(&___nl__im__20);
#line 774
c_rt_lib0clear(&___nl__im__21);
#line 774
//clear ___nl__bool__23;
#line 774
c_rt_lib0clear(&___nl__im__24);
#line 774
c_rt_lib0clear(&___nl__im__25);
#line 774
c_rt_lib0clear(&___nl__im__26);
#line 774
//clear ___nl__bool__32;
#line 774
c_rt_lib0clear(&___nl__im__33);
#line 774
c_rt_lib0clear(&___nl__im__34);
#line 774
c_rt_lib0clear(&___nl__im__46);
#line 774
//clear ___nl__bool__51;
#line 774
c_rt_lib0clear(&___nl__im__52);
#line 774
c_rt_lib0clear(&___nl__im__53);
#line 774
//clear ___nl__bool__55;
#line 774
c_rt_lib0clear(&___nl__im__56);
#line 774
c_rt_lib0clear(&___nl__im__57);
#line 774
c_rt_lib0clear(&___nl__im__59);
#line 774
//clear ___nl__bool__64;
#line 774
c_rt_lib0clear(&___nl__im__65);
#line 774
c_rt_lib0clear(&___nl__im__66);
#line 774
//clear ___nl__bool__68;
#line 774
c_rt_lib0clear(&___nl__im__69);
#line 774
c_rt_lib0clear(&___nl__im__70);
#line 774
c_rt_lib0clear(&___nl__im__73);
#line 774
//clear ___nl__bool__74;
#line 774
c_rt_lib0clear(&___nl__im__75);
#line 774
c_rt_lib0clear(&___nl__im__77);
#line 774
//clear ___nl__bool__94;
#line 774
c_rt_lib0clear(&___nl__im__95);
#line 774
c_rt_lib0clear(&___nl__im__96);
#line 774
//clear ___nl__bool__98;
#line 774
c_rt_lib0clear(&___nl__im__99);
#line 774
c_rt_lib0clear(&___nl__im__100);
#line 774
c_rt_lib0clear(&___nl__im__102);
#line 774
//clear ___nl__bool__105;
#line 774
c_rt_lib0clear(&___nl__im__106);
#line 774
c_rt_lib0clear(&___nl__im__107);
#line 774
//clear ___nl__bool__109;
#line 774
c_rt_lib0clear(&___nl__im__110);
#line 774
c_rt_lib0clear(&___nl__im__111);
#line 774
c_rt_lib0clear(&___nl__im__113);
#line 774
//clear ___nl__bool__153;
#line 774
c_rt_lib0clear(&___nl__im__154);
#line 774
c_rt_lib0clear(&___nl__im__155);
#line 774
c_rt_lib0clear(&___nl__im__159);
#line 774
//clear ___nl__bool__160;
#line 774
c_rt_lib0clear(&___nl__im__161);
#line 774
c_rt_lib0clear(&___nl__im__167);
#line 774
//clear ___nl__bool__169;
#line 774
c_rt_lib0clear(&___nl__im__170);
#line 774
c_rt_lib0clear(&___nl__im__171);
#line 774
//clear ___nl__int__172;
#line 774
//clear ___nl__int__173;
#line 774
//clear ___nl__int__174;
#line 774
//clear ___nl__bool__175;
#line 774
c_rt_lib0clear(&___nl__im__176);
#line 774
c_rt_lib0clear(&___nl__im__186);
#line 774
//clear ___nl__bool__187;
#line 774
c_rt_lib0clear(&___nl__im__188);
#line 774
c_rt_lib0clear(&___nl__im__189);
#line 774
c_rt_lib0clear(&___nl__im__192);
#line 774
//clear ___nl__bool__195;
#line 774
c_rt_lib0clear(&___nl__im__197);
#line 774
//clear ___nl__bool__204;
#line 774
return ___nl__im__205;
#line 774
label_1569:
;
#line 774
c_rt_lib0move(&___nl__im__206, c_rt_lib0priv_as(___nl__im__205, ___get_global_string_const(83)));
#line 774
c_rt_lib0hash_set_value_dec(&___nl__im__197, ___get_global_string_const(237), ___nl__im__206);
#line 775
c_rt_lib0move(&___nl__im__207,___get_global_string_const(1098));
#line 775
c_rt_lib0move(&___nl__im__207, c_rt_lib0get_ref_hash(___nl__im__189, ___nl__im__207));
#line 775
c_rt_lib0delete(array0push(&___nl__im__207, ___nl__im__197));
#line 775
c_rt_lib0move(&___nl__string__208,___get_global_string_const(1098));
#line 775
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__189, ___nl__string__208, ___nl__im__207));
#line 775
c_rt_lib0clear(&___nl__im__207);
#line 775
c_rt_lib0clear(&___nl__string__208);
#line 776
___nl__rec_ptr__209 = &((*___ref___rec__0).state0field);
#line 776
c_rt_lib0move(&___nl__im__192, ntokenizer0get_place(___nl__rec_ptr__209));
#line 776
___nl__rec_ptr__209 = NULL;
#line 776
c_rt_lib0clear(&___nl__im__197);
#line 776
//clear ___nl__bool__204;
#line 776
c_rt_lib0clear(&___nl__im__205);
#line 776
c_rt_lib0clear(&___nl__im__206);
#line 777
goto label_1468;
#line 777
label_1587:
;
#line 778
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1086), ___nl__im__189));
#line 779
goto label_2124;
#line 779
label_1590:
;
#line 779
c_rt_lib0move(&___nl__im__210,___get_global_string_const(258));
#line 779
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__210);
#line 779
c_rt_lib0clear(&___nl__im__210);
#line 779
___nl__bool__5 = !___nl__bool__5;
#line 779
if(___nl__bool__5){ goto label_1700;}
#line 780
c_rt_lib0move(&___nl__im__211, c_rt_lib0array_mk(0));
#line 781
c_rt_lib0move(&___nl__im__213,___get_global_string_const(466));
#line 781
___nl__bool__212 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__213);
#line 781
c_rt_lib0clear(&___nl__im__213);
#line 781
___nl__bool__212 = !___nl__bool__212;
#line 781
if(___nl__bool__212){ goto label_1691;}
#line 782
c_rt_lib0move(&___nl__im__215, nparser_priv0parse_expr_list(___ref___rec__0));
#line 782
___nl__bool__214 = c_rt_lib0priv_is(___nl__im__215, ___get_global_string_const(83));
#line 782
if(___nl__bool__214){ goto label_1688;}
#line 782
c_rt_lib0clear(&___nl__im__1);
#line 782
c_rt_lib0clear(&___nl__im__3);
#line 782
c_rt_lib0clear(&___nl__im__4);
#line 782
//clear ___nl__bool__5;
#line 782
c_rt_lib0clear(&___nl__im__7);
#line 782
//clear ___nl__bool__8;
#line 782
c_rt_lib0clear(&___nl__im__9);
#line 782
c_rt_lib0clear(&___nl__im__10);
#line 782
//clear ___nl__bool__12;
#line 782
c_rt_lib0clear(&___nl__im__13);
#line 782
c_rt_lib0clear(&___nl__im__14);
#line 782
c_rt_lib0clear(&___nl__im__15);
#line 782
//clear ___nl__bool__18;
#line 782
c_rt_lib0clear(&___nl__im__20);
#line 782
c_rt_lib0clear(&___nl__im__21);
#line 782
//clear ___nl__bool__23;
#line 782
c_rt_lib0clear(&___nl__im__24);
#line 782
c_rt_lib0clear(&___nl__im__25);
#line 782
c_rt_lib0clear(&___nl__im__26);
#line 782
//clear ___nl__bool__32;
#line 782
c_rt_lib0clear(&___nl__im__33);
#line 782
c_rt_lib0clear(&___nl__im__34);
#line 782
c_rt_lib0clear(&___nl__im__46);
#line 782
//clear ___nl__bool__51;
#line 782
c_rt_lib0clear(&___nl__im__52);
#line 782
c_rt_lib0clear(&___nl__im__53);
#line 782
//clear ___nl__bool__55;
#line 782
c_rt_lib0clear(&___nl__im__56);
#line 782
c_rt_lib0clear(&___nl__im__57);
#line 782
c_rt_lib0clear(&___nl__im__59);
#line 782
//clear ___nl__bool__64;
#line 782
c_rt_lib0clear(&___nl__im__65);
#line 782
c_rt_lib0clear(&___nl__im__66);
#line 782
//clear ___nl__bool__68;
#line 782
c_rt_lib0clear(&___nl__im__69);
#line 782
c_rt_lib0clear(&___nl__im__70);
#line 782
c_rt_lib0clear(&___nl__im__73);
#line 782
//clear ___nl__bool__74;
#line 782
c_rt_lib0clear(&___nl__im__75);
#line 782
c_rt_lib0clear(&___nl__im__77);
#line 782
//clear ___nl__bool__94;
#line 782
c_rt_lib0clear(&___nl__im__95);
#line 782
c_rt_lib0clear(&___nl__im__96);
#line 782
//clear ___nl__bool__98;
#line 782
c_rt_lib0clear(&___nl__im__99);
#line 782
c_rt_lib0clear(&___nl__im__100);
#line 782
c_rt_lib0clear(&___nl__im__102);
#line 782
//clear ___nl__bool__105;
#line 782
c_rt_lib0clear(&___nl__im__106);
#line 782
c_rt_lib0clear(&___nl__im__107);
#line 782
//clear ___nl__bool__109;
#line 782
c_rt_lib0clear(&___nl__im__110);
#line 782
c_rt_lib0clear(&___nl__im__111);
#line 782
c_rt_lib0clear(&___nl__im__113);
#line 782
//clear ___nl__bool__153;
#line 782
c_rt_lib0clear(&___nl__im__154);
#line 782
c_rt_lib0clear(&___nl__im__155);
#line 782
c_rt_lib0clear(&___nl__im__159);
#line 782
//clear ___nl__bool__160;
#line 782
c_rt_lib0clear(&___nl__im__161);
#line 782
c_rt_lib0clear(&___nl__im__167);
#line 782
//clear ___nl__bool__169;
#line 782
c_rt_lib0clear(&___nl__im__170);
#line 782
c_rt_lib0clear(&___nl__im__171);
#line 782
//clear ___nl__int__172;
#line 782
//clear ___nl__int__173;
#line 782
//clear ___nl__int__174;
#line 782
//clear ___nl__bool__175;
#line 782
c_rt_lib0clear(&___nl__im__176);
#line 782
c_rt_lib0clear(&___nl__im__186);
#line 782
//clear ___nl__bool__187;
#line 782
c_rt_lib0clear(&___nl__im__188);
#line 782
c_rt_lib0clear(&___nl__im__189);
#line 782
c_rt_lib0clear(&___nl__im__192);
#line 782
//clear ___nl__bool__195;
#line 782
c_rt_lib0clear(&___nl__im__197);
#line 782
//clear ___nl__bool__204;
#line 782
c_rt_lib0clear(&___nl__im__205);
#line 782
c_rt_lib0clear(&___nl__im__206);
#line 782
c_rt_lib0clear(&___nl__im__211);
#line 782
//clear ___nl__bool__212;
#line 782
//clear ___nl__bool__214;
#line 782
return ___nl__im__215;
#line 782
label_1688:
;
#line 782
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__215, ___get_global_string_const(83)));
#line 783
goto label_1691;
#line 783
label_1691:
;
#line 783
//clear ___nl__bool__212;
#line 783
//clear ___nl__bool__214;
#line 783
c_rt_lib0clear(&___nl__im__215);
#line 784
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(258), ___nl__im__211));
#line 785
___nl__rec_ptr__216 = &((*___ref___rec__0).state0field);
#line 785
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__216));
#line 785
___nl__rec_ptr__216 = NULL;
#line 786
goto label_2124;
#line 786
label_1700:
;
#line 786
___nl__rec_ptr__217 = &((*___ref___rec__0).state0field);
#line 786
c_rt_lib0move(&___nl__im__218,___get_global_string_const(516));
#line 786
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__217, ___nl__im__218);
#line 786
___nl__rec_ptr__217 = NULL;
#line 786
c_rt_lib0clear(&___nl__im__218);
#line 786
___nl__bool__5 = !___nl__bool__5;
#line 786
if(___nl__bool__5){ goto label_1804;}
#line 787
c_rt_lib0move(&___nl__im__221, nparser_priv0parse_var_decl(___ref___rec__0));
#line 787
___nl__bool__220 = c_rt_lib0priv_is(___nl__im__221, ___get_global_string_const(83));
#line 787
if(___nl__bool__220){ goto label_1794;}
#line 787
c_rt_lib0clear(&___nl__im__1);
#line 787
c_rt_lib0clear(&___nl__im__3);
#line 787
c_rt_lib0clear(&___nl__im__4);
#line 787
//clear ___nl__bool__5;
#line 787
c_rt_lib0clear(&___nl__im__7);
#line 787
//clear ___nl__bool__8;
#line 787
c_rt_lib0clear(&___nl__im__9);
#line 787
c_rt_lib0clear(&___nl__im__10);
#line 787
//clear ___nl__bool__12;
#line 787
c_rt_lib0clear(&___nl__im__13);
#line 787
c_rt_lib0clear(&___nl__im__14);
#line 787
c_rt_lib0clear(&___nl__im__15);
#line 787
//clear ___nl__bool__18;
#line 787
c_rt_lib0clear(&___nl__im__20);
#line 787
c_rt_lib0clear(&___nl__im__21);
#line 787
//clear ___nl__bool__23;
#line 787
c_rt_lib0clear(&___nl__im__24);
#line 787
c_rt_lib0clear(&___nl__im__25);
#line 787
c_rt_lib0clear(&___nl__im__26);
#line 787
//clear ___nl__bool__32;
#line 787
c_rt_lib0clear(&___nl__im__33);
#line 787
c_rt_lib0clear(&___nl__im__34);
#line 787
c_rt_lib0clear(&___nl__im__46);
#line 787
//clear ___nl__bool__51;
#line 787
c_rt_lib0clear(&___nl__im__52);
#line 787
c_rt_lib0clear(&___nl__im__53);
#line 787
//clear ___nl__bool__55;
#line 787
c_rt_lib0clear(&___nl__im__56);
#line 787
c_rt_lib0clear(&___nl__im__57);
#line 787
c_rt_lib0clear(&___nl__im__59);
#line 787
//clear ___nl__bool__64;
#line 787
c_rt_lib0clear(&___nl__im__65);
#line 787
c_rt_lib0clear(&___nl__im__66);
#line 787
//clear ___nl__bool__68;
#line 787
c_rt_lib0clear(&___nl__im__69);
#line 787
c_rt_lib0clear(&___nl__im__70);
#line 787
c_rt_lib0clear(&___nl__im__73);
#line 787
//clear ___nl__bool__74;
#line 787
c_rt_lib0clear(&___nl__im__75);
#line 787
c_rt_lib0clear(&___nl__im__77);
#line 787
//clear ___nl__bool__94;
#line 787
c_rt_lib0clear(&___nl__im__95);
#line 787
c_rt_lib0clear(&___nl__im__96);
#line 787
//clear ___nl__bool__98;
#line 787
c_rt_lib0clear(&___nl__im__99);
#line 787
c_rt_lib0clear(&___nl__im__100);
#line 787
c_rt_lib0clear(&___nl__im__102);
#line 787
//clear ___nl__bool__105;
#line 787
c_rt_lib0clear(&___nl__im__106);
#line 787
c_rt_lib0clear(&___nl__im__107);
#line 787
//clear ___nl__bool__109;
#line 787
c_rt_lib0clear(&___nl__im__110);
#line 787
c_rt_lib0clear(&___nl__im__111);
#line 787
c_rt_lib0clear(&___nl__im__113);
#line 787
//clear ___nl__bool__153;
#line 787
c_rt_lib0clear(&___nl__im__154);
#line 787
c_rt_lib0clear(&___nl__im__155);
#line 787
c_rt_lib0clear(&___nl__im__159);
#line 787
//clear ___nl__bool__160;
#line 787
c_rt_lib0clear(&___nl__im__161);
#line 787
c_rt_lib0clear(&___nl__im__167);
#line 787
//clear ___nl__bool__169;
#line 787
c_rt_lib0clear(&___nl__im__170);
#line 787
c_rt_lib0clear(&___nl__im__171);
#line 787
//clear ___nl__int__172;
#line 787
//clear ___nl__int__173;
#line 787
//clear ___nl__int__174;
#line 787
//clear ___nl__bool__175;
#line 787
c_rt_lib0clear(&___nl__im__176);
#line 787
c_rt_lib0clear(&___nl__im__186);
#line 787
//clear ___nl__bool__187;
#line 787
c_rt_lib0clear(&___nl__im__188);
#line 787
c_rt_lib0clear(&___nl__im__189);
#line 787
c_rt_lib0clear(&___nl__im__192);
#line 787
//clear ___nl__bool__195;
#line 787
c_rt_lib0clear(&___nl__im__197);
#line 787
//clear ___nl__bool__204;
#line 787
c_rt_lib0clear(&___nl__im__205);
#line 787
c_rt_lib0clear(&___nl__im__206);
#line 787
c_rt_lib0clear(&___nl__im__211);
#line 787
c_rt_lib0clear(&___nl__im__219);
#line 787
//clear ___nl__bool__220;
#line 787
return ___nl__im__221;
#line 787
label_1794:
;
#line 787
c_rt_lib0move(&___nl__im__219, c_rt_lib0priv_as(___nl__im__221, ___get_global_string_const(83)));
#line 788
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__219));
#line 789
c_rt_lib0move(&___nl__im__222,___get_global_string_const(451));
#line 789
nparser_priv0eat(___ref___rec__0, ___nl__im__222);
#line 789
c_rt_lib0clear(&___nl__im__222);
#line 790
___nl__rec_ptr__223 = &((*___ref___rec__0).state0field);
#line 790
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__223));
#line 790
___nl__rec_ptr__223 = NULL;
#line 791
goto label_2124;
#line 791
label_1804:
;
#line 791
___nl__rec_ptr__224 = &((*___ref___rec__0).state0field);
#line 791
c_rt_lib0move(&___nl__im__225,___get_global_string_const(1088));
#line 791
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__224, ___nl__im__225);
#line 791
___nl__rec_ptr__224 = NULL;
#line 791
c_rt_lib0clear(&___nl__im__225);
#line 791
___nl__bool__5 = !___nl__bool__5;
#line 791
if(___nl__bool__5){ goto label_1911;}
#line 792
c_rt_lib0move(&___nl__im__226,___get_global_string_const(1088));
#line 792
nparser_priv0eat(___ref___rec__0, ___nl__im__226);
#line 792
c_rt_lib0clear(&___nl__im__226);
#line 793
c_rt_lib0move(&___nl__im__229, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 793
___nl__bool__228 = c_rt_lib0priv_is(___nl__im__229, ___get_global_string_const(83));
#line 793
if(___nl__bool__228){ goto label_1904;}
#line 793
c_rt_lib0clear(&___nl__im__1);
#line 793
c_rt_lib0clear(&___nl__im__3);
#line 793
c_rt_lib0clear(&___nl__im__4);
#line 793
//clear ___nl__bool__5;
#line 793
c_rt_lib0clear(&___nl__im__7);
#line 793
//clear ___nl__bool__8;
#line 793
c_rt_lib0clear(&___nl__im__9);
#line 793
c_rt_lib0clear(&___nl__im__10);
#line 793
//clear ___nl__bool__12;
#line 793
c_rt_lib0clear(&___nl__im__13);
#line 793
c_rt_lib0clear(&___nl__im__14);
#line 793
c_rt_lib0clear(&___nl__im__15);
#line 793
//clear ___nl__bool__18;
#line 793
c_rt_lib0clear(&___nl__im__20);
#line 793
c_rt_lib0clear(&___nl__im__21);
#line 793
//clear ___nl__bool__23;
#line 793
c_rt_lib0clear(&___nl__im__24);
#line 793
c_rt_lib0clear(&___nl__im__25);
#line 793
c_rt_lib0clear(&___nl__im__26);
#line 793
//clear ___nl__bool__32;
#line 793
c_rt_lib0clear(&___nl__im__33);
#line 793
c_rt_lib0clear(&___nl__im__34);
#line 793
c_rt_lib0clear(&___nl__im__46);
#line 793
//clear ___nl__bool__51;
#line 793
c_rt_lib0clear(&___nl__im__52);
#line 793
c_rt_lib0clear(&___nl__im__53);
#line 793
//clear ___nl__bool__55;
#line 793
c_rt_lib0clear(&___nl__im__56);
#line 793
c_rt_lib0clear(&___nl__im__57);
#line 793
c_rt_lib0clear(&___nl__im__59);
#line 793
//clear ___nl__bool__64;
#line 793
c_rt_lib0clear(&___nl__im__65);
#line 793
c_rt_lib0clear(&___nl__im__66);
#line 793
//clear ___nl__bool__68;
#line 793
c_rt_lib0clear(&___nl__im__69);
#line 793
c_rt_lib0clear(&___nl__im__70);
#line 793
c_rt_lib0clear(&___nl__im__73);
#line 793
//clear ___nl__bool__74;
#line 793
c_rt_lib0clear(&___nl__im__75);
#line 793
c_rt_lib0clear(&___nl__im__77);
#line 793
//clear ___nl__bool__94;
#line 793
c_rt_lib0clear(&___nl__im__95);
#line 793
c_rt_lib0clear(&___nl__im__96);
#line 793
//clear ___nl__bool__98;
#line 793
c_rt_lib0clear(&___nl__im__99);
#line 793
c_rt_lib0clear(&___nl__im__100);
#line 793
c_rt_lib0clear(&___nl__im__102);
#line 793
//clear ___nl__bool__105;
#line 793
c_rt_lib0clear(&___nl__im__106);
#line 793
c_rt_lib0clear(&___nl__im__107);
#line 793
//clear ___nl__bool__109;
#line 793
c_rt_lib0clear(&___nl__im__110);
#line 793
c_rt_lib0clear(&___nl__im__111);
#line 793
c_rt_lib0clear(&___nl__im__113);
#line 793
//clear ___nl__bool__153;
#line 793
c_rt_lib0clear(&___nl__im__154);
#line 793
c_rt_lib0clear(&___nl__im__155);
#line 793
c_rt_lib0clear(&___nl__im__159);
#line 793
//clear ___nl__bool__160;
#line 793
c_rt_lib0clear(&___nl__im__161);
#line 793
c_rt_lib0clear(&___nl__im__167);
#line 793
//clear ___nl__bool__169;
#line 793
c_rt_lib0clear(&___nl__im__170);
#line 793
c_rt_lib0clear(&___nl__im__171);
#line 793
//clear ___nl__int__172;
#line 793
//clear ___nl__int__173;
#line 793
//clear ___nl__int__174;
#line 793
//clear ___nl__bool__175;
#line 793
c_rt_lib0clear(&___nl__im__176);
#line 793
c_rt_lib0clear(&___nl__im__186);
#line 793
//clear ___nl__bool__187;
#line 793
c_rt_lib0clear(&___nl__im__188);
#line 793
c_rt_lib0clear(&___nl__im__189);
#line 793
c_rt_lib0clear(&___nl__im__192);
#line 793
//clear ___nl__bool__195;
#line 793
c_rt_lib0clear(&___nl__im__197);
#line 793
//clear ___nl__bool__204;
#line 793
c_rt_lib0clear(&___nl__im__205);
#line 793
c_rt_lib0clear(&___nl__im__206);
#line 793
c_rt_lib0clear(&___nl__im__211);
#line 793
c_rt_lib0clear(&___nl__im__219);
#line 793
//clear ___nl__bool__220;
#line 793
c_rt_lib0clear(&___nl__im__221);
#line 793
c_rt_lib0clear(&___nl__im__227);
#line 793
//clear ___nl__bool__228;
#line 793
return ___nl__im__229;
#line 793
label_1904:
;
#line 793
c_rt_lib0move(&___nl__im__227, c_rt_lib0priv_as(___nl__im__229, ___get_global_string_const(83)));
#line 794
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1088), ___nl__im__227));
#line 795
___nl__rec_ptr__230 = &((*___ref___rec__0).state0field);
#line 795
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__230));
#line 795
___nl__rec_ptr__230 = NULL;
#line 796
goto label_2124;
#line 796
label_1911:
;
#line 796
___nl__rec_ptr__231 = &((*___ref___rec__0).state0field);
#line 796
c_rt_lib0move(&___nl__im__232,___get_global_string_const(185));
#line 796
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__231, ___nl__im__232);
#line 796
___nl__rec_ptr__231 = NULL;
#line 796
c_rt_lib0clear(&___nl__im__232);
#line 796
___nl__bool__5 = !___nl__bool__5;
#line 796
if(___nl__bool__5){ goto label_2021;}
#line 797
c_rt_lib0move(&___nl__im__233,___get_global_string_const(185));
#line 797
nparser_priv0eat(___ref___rec__0, ___nl__im__233);
#line 797
c_rt_lib0clear(&___nl__im__233);
#line 798
c_rt_lib0move(&___nl__im__236, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 798
___nl__bool__235 = c_rt_lib0priv_is(___nl__im__236, ___get_global_string_const(83));
#line 798
if(___nl__bool__235){ goto label_2014;}
#line 798
c_rt_lib0clear(&___nl__im__1);
#line 798
c_rt_lib0clear(&___nl__im__3);
#line 798
c_rt_lib0clear(&___nl__im__4);
#line 798
//clear ___nl__bool__5;
#line 798
c_rt_lib0clear(&___nl__im__7);
#line 798
//clear ___nl__bool__8;
#line 798
c_rt_lib0clear(&___nl__im__9);
#line 798
c_rt_lib0clear(&___nl__im__10);
#line 798
//clear ___nl__bool__12;
#line 798
c_rt_lib0clear(&___nl__im__13);
#line 798
c_rt_lib0clear(&___nl__im__14);
#line 798
c_rt_lib0clear(&___nl__im__15);
#line 798
//clear ___nl__bool__18;
#line 798
c_rt_lib0clear(&___nl__im__20);
#line 798
c_rt_lib0clear(&___nl__im__21);
#line 798
//clear ___nl__bool__23;
#line 798
c_rt_lib0clear(&___nl__im__24);
#line 798
c_rt_lib0clear(&___nl__im__25);
#line 798
c_rt_lib0clear(&___nl__im__26);
#line 798
//clear ___nl__bool__32;
#line 798
c_rt_lib0clear(&___nl__im__33);
#line 798
c_rt_lib0clear(&___nl__im__34);
#line 798
c_rt_lib0clear(&___nl__im__46);
#line 798
//clear ___nl__bool__51;
#line 798
c_rt_lib0clear(&___nl__im__52);
#line 798
c_rt_lib0clear(&___nl__im__53);
#line 798
//clear ___nl__bool__55;
#line 798
c_rt_lib0clear(&___nl__im__56);
#line 798
c_rt_lib0clear(&___nl__im__57);
#line 798
c_rt_lib0clear(&___nl__im__59);
#line 798
//clear ___nl__bool__64;
#line 798
c_rt_lib0clear(&___nl__im__65);
#line 798
c_rt_lib0clear(&___nl__im__66);
#line 798
//clear ___nl__bool__68;
#line 798
c_rt_lib0clear(&___nl__im__69);
#line 798
c_rt_lib0clear(&___nl__im__70);
#line 798
c_rt_lib0clear(&___nl__im__73);
#line 798
//clear ___nl__bool__74;
#line 798
c_rt_lib0clear(&___nl__im__75);
#line 798
c_rt_lib0clear(&___nl__im__77);
#line 798
//clear ___nl__bool__94;
#line 798
c_rt_lib0clear(&___nl__im__95);
#line 798
c_rt_lib0clear(&___nl__im__96);
#line 798
//clear ___nl__bool__98;
#line 798
c_rt_lib0clear(&___nl__im__99);
#line 798
c_rt_lib0clear(&___nl__im__100);
#line 798
c_rt_lib0clear(&___nl__im__102);
#line 798
//clear ___nl__bool__105;
#line 798
c_rt_lib0clear(&___nl__im__106);
#line 798
c_rt_lib0clear(&___nl__im__107);
#line 798
//clear ___nl__bool__109;
#line 798
c_rt_lib0clear(&___nl__im__110);
#line 798
c_rt_lib0clear(&___nl__im__111);
#line 798
c_rt_lib0clear(&___nl__im__113);
#line 798
//clear ___nl__bool__153;
#line 798
c_rt_lib0clear(&___nl__im__154);
#line 798
c_rt_lib0clear(&___nl__im__155);
#line 798
c_rt_lib0clear(&___nl__im__159);
#line 798
//clear ___nl__bool__160;
#line 798
c_rt_lib0clear(&___nl__im__161);
#line 798
c_rt_lib0clear(&___nl__im__167);
#line 798
//clear ___nl__bool__169;
#line 798
c_rt_lib0clear(&___nl__im__170);
#line 798
c_rt_lib0clear(&___nl__im__171);
#line 798
//clear ___nl__int__172;
#line 798
//clear ___nl__int__173;
#line 798
//clear ___nl__int__174;
#line 798
//clear ___nl__bool__175;
#line 798
c_rt_lib0clear(&___nl__im__176);
#line 798
c_rt_lib0clear(&___nl__im__186);
#line 798
//clear ___nl__bool__187;
#line 798
c_rt_lib0clear(&___nl__im__188);
#line 798
c_rt_lib0clear(&___nl__im__189);
#line 798
c_rt_lib0clear(&___nl__im__192);
#line 798
//clear ___nl__bool__195;
#line 798
c_rt_lib0clear(&___nl__im__197);
#line 798
//clear ___nl__bool__204;
#line 798
c_rt_lib0clear(&___nl__im__205);
#line 798
c_rt_lib0clear(&___nl__im__206);
#line 798
c_rt_lib0clear(&___nl__im__211);
#line 798
c_rt_lib0clear(&___nl__im__219);
#line 798
//clear ___nl__bool__220;
#line 798
c_rt_lib0clear(&___nl__im__221);
#line 798
c_rt_lib0clear(&___nl__im__227);
#line 798
//clear ___nl__bool__228;
#line 798
c_rt_lib0clear(&___nl__im__229);
#line 798
c_rt_lib0clear(&___nl__im__234);
#line 798
//clear ___nl__bool__235;
#line 798
return ___nl__im__236;
#line 798
label_2014:
;
#line 798
c_rt_lib0move(&___nl__im__234, c_rt_lib0priv_as(___nl__im__236, ___get_global_string_const(83)));
#line 799
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(185), ___nl__im__234));
#line 800
___nl__rec_ptr__237 = &((*___ref___rec__0).state0field);
#line 800
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__237));
#line 800
___nl__rec_ptr__237 = NULL;
#line 801
goto label_2124;
#line 801
label_2021:
;
#line 802
c_rt_lib0move(&___nl__im__240, nparser_priv0parse_expr(___ref___rec__0));
#line 802
___nl__bool__239 = c_rt_lib0priv_is(___nl__im__240, ___get_global_string_const(83));
#line 802
if(___nl__bool__239){ goto label_2117;}
#line 802
c_rt_lib0clear(&___nl__im__1);
#line 802
c_rt_lib0clear(&___nl__im__3);
#line 802
c_rt_lib0clear(&___nl__im__4);
#line 802
//clear ___nl__bool__5;
#line 802
c_rt_lib0clear(&___nl__im__7);
#line 802
//clear ___nl__bool__8;
#line 802
c_rt_lib0clear(&___nl__im__9);
#line 802
c_rt_lib0clear(&___nl__im__10);
#line 802
//clear ___nl__bool__12;
#line 802
c_rt_lib0clear(&___nl__im__13);
#line 802
c_rt_lib0clear(&___nl__im__14);
#line 802
c_rt_lib0clear(&___nl__im__15);
#line 802
//clear ___nl__bool__18;
#line 802
c_rt_lib0clear(&___nl__im__20);
#line 802
c_rt_lib0clear(&___nl__im__21);
#line 802
//clear ___nl__bool__23;
#line 802
c_rt_lib0clear(&___nl__im__24);
#line 802
c_rt_lib0clear(&___nl__im__25);
#line 802
c_rt_lib0clear(&___nl__im__26);
#line 802
//clear ___nl__bool__32;
#line 802
c_rt_lib0clear(&___nl__im__33);
#line 802
c_rt_lib0clear(&___nl__im__34);
#line 802
c_rt_lib0clear(&___nl__im__46);
#line 802
//clear ___nl__bool__51;
#line 802
c_rt_lib0clear(&___nl__im__52);
#line 802
c_rt_lib0clear(&___nl__im__53);
#line 802
//clear ___nl__bool__55;
#line 802
c_rt_lib0clear(&___nl__im__56);
#line 802
c_rt_lib0clear(&___nl__im__57);
#line 802
c_rt_lib0clear(&___nl__im__59);
#line 802
//clear ___nl__bool__64;
#line 802
c_rt_lib0clear(&___nl__im__65);
#line 802
c_rt_lib0clear(&___nl__im__66);
#line 802
//clear ___nl__bool__68;
#line 802
c_rt_lib0clear(&___nl__im__69);
#line 802
c_rt_lib0clear(&___nl__im__70);
#line 802
c_rt_lib0clear(&___nl__im__73);
#line 802
//clear ___nl__bool__74;
#line 802
c_rt_lib0clear(&___nl__im__75);
#line 802
c_rt_lib0clear(&___nl__im__77);
#line 802
//clear ___nl__bool__94;
#line 802
c_rt_lib0clear(&___nl__im__95);
#line 802
c_rt_lib0clear(&___nl__im__96);
#line 802
//clear ___nl__bool__98;
#line 802
c_rt_lib0clear(&___nl__im__99);
#line 802
c_rt_lib0clear(&___nl__im__100);
#line 802
c_rt_lib0clear(&___nl__im__102);
#line 802
//clear ___nl__bool__105;
#line 802
c_rt_lib0clear(&___nl__im__106);
#line 802
c_rt_lib0clear(&___nl__im__107);
#line 802
//clear ___nl__bool__109;
#line 802
c_rt_lib0clear(&___nl__im__110);
#line 802
c_rt_lib0clear(&___nl__im__111);
#line 802
c_rt_lib0clear(&___nl__im__113);
#line 802
//clear ___nl__bool__153;
#line 802
c_rt_lib0clear(&___nl__im__154);
#line 802
c_rt_lib0clear(&___nl__im__155);
#line 802
c_rt_lib0clear(&___nl__im__159);
#line 802
//clear ___nl__bool__160;
#line 802
c_rt_lib0clear(&___nl__im__161);
#line 802
c_rt_lib0clear(&___nl__im__167);
#line 802
//clear ___nl__bool__169;
#line 802
c_rt_lib0clear(&___nl__im__170);
#line 802
c_rt_lib0clear(&___nl__im__171);
#line 802
//clear ___nl__int__172;
#line 802
//clear ___nl__int__173;
#line 802
//clear ___nl__int__174;
#line 802
//clear ___nl__bool__175;
#line 802
c_rt_lib0clear(&___nl__im__176);
#line 802
c_rt_lib0clear(&___nl__im__186);
#line 802
//clear ___nl__bool__187;
#line 802
c_rt_lib0clear(&___nl__im__188);
#line 802
c_rt_lib0clear(&___nl__im__189);
#line 802
c_rt_lib0clear(&___nl__im__192);
#line 802
//clear ___nl__bool__195;
#line 802
c_rt_lib0clear(&___nl__im__197);
#line 802
//clear ___nl__bool__204;
#line 802
c_rt_lib0clear(&___nl__im__205);
#line 802
c_rt_lib0clear(&___nl__im__206);
#line 802
c_rt_lib0clear(&___nl__im__211);
#line 802
c_rt_lib0clear(&___nl__im__219);
#line 802
//clear ___nl__bool__220;
#line 802
c_rt_lib0clear(&___nl__im__221);
#line 802
c_rt_lib0clear(&___nl__im__227);
#line 802
//clear ___nl__bool__228;
#line 802
c_rt_lib0clear(&___nl__im__229);
#line 802
c_rt_lib0clear(&___nl__im__234);
#line 802
//clear ___nl__bool__235;
#line 802
c_rt_lib0clear(&___nl__im__236);
#line 802
c_rt_lib0clear(&___nl__im__238);
#line 802
//clear ___nl__bool__239;
#line 802
return ___nl__im__240;
#line 802
label_2117:
;
#line 802
c_rt_lib0move(&___nl__im__238, c_rt_lib0priv_as(___nl__im__240, ___get_global_string_const(83)));
#line 803
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__238));
#line 804
___nl__rec_ptr__241 = &((*___ref___rec__0).state0field);
#line 804
c_rt_lib0move(&___nl__im__4, ntokenizer0pop_last_comment(___nl__rec_ptr__241));
#line 804
___nl__rec_ptr__241 = NULL;
#line 805
goto label_2124;
#line 805
label_2124:
;
#line 805
//clear ___nl__bool__5;
#line 805
c_rt_lib0clear(&___nl__im__7);
#line 805
//clear ___nl__bool__8;
#line 805
c_rt_lib0clear(&___nl__im__9);
#line 805
c_rt_lib0clear(&___nl__im__10);
#line 805
//clear ___nl__bool__12;
#line 805
c_rt_lib0clear(&___nl__im__13);
#line 805
c_rt_lib0clear(&___nl__im__14);
#line 805
c_rt_lib0clear(&___nl__im__15);
#line 805
//clear ___nl__bool__18;
#line 805
c_rt_lib0clear(&___nl__im__20);
#line 805
c_rt_lib0clear(&___nl__im__21);
#line 805
//clear ___nl__bool__23;
#line 805
c_rt_lib0clear(&___nl__im__24);
#line 805
c_rt_lib0clear(&___nl__im__25);
#line 805
c_rt_lib0clear(&___nl__im__26);
#line 805
//clear ___nl__bool__32;
#line 805
c_rt_lib0clear(&___nl__im__33);
#line 805
c_rt_lib0clear(&___nl__im__34);
#line 805
c_rt_lib0clear(&___nl__im__46);
#line 805
//clear ___nl__bool__51;
#line 805
c_rt_lib0clear(&___nl__im__52);
#line 805
c_rt_lib0clear(&___nl__im__53);
#line 805
//clear ___nl__bool__55;
#line 805
c_rt_lib0clear(&___nl__im__56);
#line 805
c_rt_lib0clear(&___nl__im__57);
#line 805
c_rt_lib0clear(&___nl__im__59);
#line 805
//clear ___nl__bool__64;
#line 805
c_rt_lib0clear(&___nl__im__65);
#line 805
c_rt_lib0clear(&___nl__im__66);
#line 805
//clear ___nl__bool__68;
#line 805
c_rt_lib0clear(&___nl__im__69);
#line 805
c_rt_lib0clear(&___nl__im__70);
#line 805
c_rt_lib0clear(&___nl__im__73);
#line 805
//clear ___nl__bool__74;
#line 805
c_rt_lib0clear(&___nl__im__75);
#line 805
c_rt_lib0clear(&___nl__im__77);
#line 805
//clear ___nl__bool__94;
#line 805
c_rt_lib0clear(&___nl__im__95);
#line 805
c_rt_lib0clear(&___nl__im__96);
#line 805
//clear ___nl__bool__98;
#line 805
c_rt_lib0clear(&___nl__im__99);
#line 805
c_rt_lib0clear(&___nl__im__100);
#line 805
c_rt_lib0clear(&___nl__im__102);
#line 805
//clear ___nl__bool__105;
#line 805
c_rt_lib0clear(&___nl__im__106);
#line 805
c_rt_lib0clear(&___nl__im__107);
#line 805
//clear ___nl__bool__109;
#line 805
c_rt_lib0clear(&___nl__im__110);
#line 805
c_rt_lib0clear(&___nl__im__111);
#line 805
c_rt_lib0clear(&___nl__im__113);
#line 805
//clear ___nl__bool__153;
#line 805
c_rt_lib0clear(&___nl__im__154);
#line 805
c_rt_lib0clear(&___nl__im__155);
#line 805
c_rt_lib0clear(&___nl__im__159);
#line 805
//clear ___nl__bool__160;
#line 805
c_rt_lib0clear(&___nl__im__161);
#line 805
c_rt_lib0clear(&___nl__im__167);
#line 805
//clear ___nl__bool__169;
#line 805
c_rt_lib0clear(&___nl__im__170);
#line 805
c_rt_lib0clear(&___nl__im__171);
#line 805
//clear ___nl__int__172;
#line 805
//clear ___nl__int__173;
#line 805
//clear ___nl__int__174;
#line 805
//clear ___nl__bool__175;
#line 805
c_rt_lib0clear(&___nl__im__176);
#line 805
c_rt_lib0clear(&___nl__im__186);
#line 805
//clear ___nl__bool__187;
#line 805
c_rt_lib0clear(&___nl__im__188);
#line 805
c_rt_lib0clear(&___nl__im__189);
#line 805
c_rt_lib0clear(&___nl__im__192);
#line 805
//clear ___nl__bool__195;
#line 805
c_rt_lib0clear(&___nl__im__197);
#line 805
//clear ___nl__bool__204;
#line 805
c_rt_lib0clear(&___nl__im__205);
#line 805
c_rt_lib0clear(&___nl__im__206);
#line 805
c_rt_lib0clear(&___nl__im__211);
#line 805
c_rt_lib0clear(&___nl__im__219);
#line 805
//clear ___nl__bool__220;
#line 805
c_rt_lib0clear(&___nl__im__221);
#line 805
c_rt_lib0clear(&___nl__im__227);
#line 805
//clear ___nl__bool__228;
#line 805
c_rt_lib0clear(&___nl__im__229);
#line 805
c_rt_lib0clear(&___nl__im__234);
#line 805
//clear ___nl__bool__235;
#line 805
c_rt_lib0clear(&___nl__im__236);
#line 805
c_rt_lib0clear(&___nl__im__238);
#line 805
//clear ___nl__bool__239;
#line 805
c_rt_lib0clear(&___nl__im__240);
#line 806
___nl__bool__242 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1084));
#line 806
if(___nl__bool__242){ goto label_2217;}
#line 806
___nl__bool__242 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1085));
#line 806
label_2217:
;
#line 806
if(___nl__bool__242){ goto label_2220;}
#line 806
___nl__bool__242 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(230));
#line 806
label_2220:
;
#line 806
if(___nl__bool__242){ goto label_2223;}
#line 806
___nl__bool__242 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(257));
#line 806
label_2223:
;
#line 806
if(___nl__bool__242){ goto label_2226;}
#line 806
___nl__bool__242 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(258));
#line 806
label_2226:
;
#line 806
if(___nl__bool__242){ goto label_2229;}
#line 806
___nl__bool__242 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(185));
#line 806
label_2229:
;
#line 806
if(___nl__bool__242){ goto label_2232;}
#line 806
___nl__bool__242 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1088));
#line 806
label_2232:
;
#line 806
___nl__bool__242 = !___nl__bool__242;
#line 806
if(___nl__bool__242){ goto label_2539;}
#line 810
___nl__rec_ptr__245 = &((*___ref___rec__0).state0field);
#line 810
c_rt_lib0move(&___nl__im__244, ntokenizer0get_place_ws(___nl__rec_ptr__245));
#line 810
___nl__rec_ptr__245 = NULL;
#line 811
c_rt_lib0move(&___nl__im__246, c_rt_lib0array_mk(0));
#line 811
c_rt_lib0move(&___nl__im__243, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(745), ___nl__im__244, ___get_global_string_const(1136), ___nl__im__246));
#line 811
c_rt_lib0clear(&___nl__im__244);
#line 811
c_rt_lib0clear(&___nl__im__246);
#line 813
c_rt_lib0move(&___nl__im__248, c_rt_lib0hash_mk(2, ___get_global_string_const(210), ___nl__im__243, ___get_global_string_const(237), ___nl__im__3));
#line 813
c_rt_lib0move(&___nl__im__247, c_rt_lib0hash_mk(1, ___get_global_string_const(237), ___nl__im__248));
#line 813
c_rt_lib0clear(&___nl__im__248);
#line 814
c_rt_lib0move(&___nl__im__250,___get_global_string_const(1078));
#line 814
___nl__bool__249 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__250);
#line 814
c_rt_lib0clear(&___nl__im__250);
#line 814
___nl__bool__249 = !___nl__bool__249;
#line 814
if(___nl__bool__249){ goto label_2283;}
#line 815
___nl__bool__251 = true;
#line 815
c_rt_lib0move(&___nl__im__252, c_rt_lib0bool_to_nl_native(___nl__bool__251));
#line 815
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1157), ___nl__im__252);
#line 815
//clear ___nl__bool__251;
#line 815
c_rt_lib0clear(&___nl__im__252);
#line 816
c_rt_lib0move(&___nl__im__253, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 816
c_rt_lib0copy(&___nl__im__254, ___nl__im__253);
#line 816
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(373), ___nl__im__254);
#line 816
c_rt_lib0clear(&___nl__im__253);
#line 816
c_rt_lib0clear(&___nl__im__254);
#line 817
c_rt_lib0move(&___nl__im__255,___get_global_string_const(466));
#line 817
nparser_priv0eat(___ref___rec__0, ___nl__im__255);
#line 817
c_rt_lib0clear(&___nl__im__255);
#line 818
c_rt_lib0move(&___nl__im__257, nparser_priv0parse_expr(___ref___rec__0));
#line 818
___nl__bool__256 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(83));
#line 818
if(___nl__bool__256){ goto label_2275;}
#line 818
c_rt_lib0clear(&___nl__im__1);
#line 818
c_rt_lib0clear(&___nl__im__3);
#line 818
c_rt_lib0clear(&___nl__im__4);
#line 818
//clear ___nl__bool__242;
#line 818
c_rt_lib0clear(&___nl__im__243);
#line 818
c_rt_lib0clear(&___nl__im__247);
#line 818
//clear ___nl__bool__249;
#line 818
//clear ___nl__bool__256;
#line 818
return ___nl__im__257;
#line 818
label_2275:
;
#line 818
c_rt_lib0move(&___nl__im__258, c_rt_lib0priv_as(___nl__im__257, ___get_global_string_const(83)));
#line 818
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(37), ___nl__im__258);
#line 819
c_rt_lib0move(&___nl__im__259,___get_global_string_const(331));
#line 819
nparser_priv0eat(___ref___rec__0, ___nl__im__259);
#line 819
c_rt_lib0clear(&___nl__im__259);
#line 820
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1078), ___nl__im__247));
#line 821
goto label_2515;
#line 821
label_2283:
;
#line 821
c_rt_lib0move(&___nl__im__260,___get_global_string_const(1080));
#line 821
___nl__bool__249 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__260);
#line 821
c_rt_lib0clear(&___nl__im__260);
#line 821
___nl__bool__249 = !___nl__bool__249;
#line 821
if(___nl__bool__249){ goto label_2325;}
#line 822
___nl__bool__261 = true;
#line 822
c_rt_lib0move(&___nl__im__262, c_rt_lib0bool_to_nl_native(___nl__bool__261));
#line 822
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1157), ___nl__im__262);
#line 822
//clear ___nl__bool__261;
#line 822
c_rt_lib0clear(&___nl__im__262);
#line 823
c_rt_lib0move(&___nl__im__263, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 823
c_rt_lib0copy(&___nl__im__264, ___nl__im__263);
#line 823
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(373), ___nl__im__264);
#line 823
c_rt_lib0clear(&___nl__im__263);
#line 823
c_rt_lib0clear(&___nl__im__264);
#line 824
c_rt_lib0move(&___nl__im__265,___get_global_string_const(466));
#line 824
nparser_priv0eat(___ref___rec__0, ___nl__im__265);
#line 824
c_rt_lib0clear(&___nl__im__265);
#line 825
c_rt_lib0move(&___nl__im__267, nparser_priv0parse_expr(___ref___rec__0));
#line 825
___nl__bool__266 = c_rt_lib0priv_is(___nl__im__267, ___get_global_string_const(83));
#line 825
if(___nl__bool__266){ goto label_2317;}
#line 825
c_rt_lib0clear(&___nl__im__1);
#line 825
c_rt_lib0clear(&___nl__im__3);
#line 825
c_rt_lib0clear(&___nl__im__4);
#line 825
//clear ___nl__bool__242;
#line 825
c_rt_lib0clear(&___nl__im__243);
#line 825
c_rt_lib0clear(&___nl__im__247);
#line 825
//clear ___nl__bool__249;
#line 825
//clear ___nl__bool__256;
#line 825
c_rt_lib0clear(&___nl__im__257);
#line 825
c_rt_lib0clear(&___nl__im__258);
#line 825
//clear ___nl__bool__266;
#line 825
return ___nl__im__267;
#line 825
label_2317:
;
#line 825
c_rt_lib0move(&___nl__im__268, c_rt_lib0priv_as(___nl__im__267, ___get_global_string_const(83)));
#line 825
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1095), ___nl__im__268);
#line 826
c_rt_lib0move(&___nl__im__269,___get_global_string_const(331));
#line 826
nparser_priv0eat(___ref___rec__0, ___nl__im__269);
#line 826
c_rt_lib0clear(&___nl__im__269);
#line 827
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1080), ___nl__im__247));
#line 828
goto label_2515;
#line 828
label_2325:
;
#line 828
c_rt_lib0move(&___nl__im__270,___get_global_string_const(1079));
#line 828
___nl__bool__249 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__270);
#line 828
c_rt_lib0clear(&___nl__im__270);
#line 828
___nl__bool__249 = !___nl__bool__249;
#line 828
if(___nl__bool__249){ goto label_2405;}
#line 829
___nl__bool__271 = true;
#line 829
c_rt_lib0move(&___nl__im__272, c_rt_lib0bool_to_nl_native(___nl__bool__271));
#line 829
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1157), ___nl__im__272);
#line 829
//clear ___nl__bool__271;
#line 829
c_rt_lib0clear(&___nl__im__272);
#line 830
c_rt_lib0move(&___nl__im__273, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 830
c_rt_lib0copy(&___nl__im__274, ___nl__im__273);
#line 830
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(586), ___nl__im__274);
#line 830
c_rt_lib0clear(&___nl__im__273);
#line 830
c_rt_lib0clear(&___nl__im__274);
#line 831
c_rt_lib0move(&___nl__im__275,___get_global_string_const(323));
#line 831
nparser_priv0eat(___ref___rec__0, ___nl__im__275);
#line 831
c_rt_lib0clear(&___nl__im__275);
#line 832
___nl__rec_ptr__277 = &((*___ref___rec__0).state0field);
#line 832
c_rt_lib0move(&___nl__im__278,___get_global_string_const(516));
#line 832
___nl__bool__276 = ntokenizer0next_is(___nl__rec_ptr__277, ___nl__im__278);
#line 832
___nl__rec_ptr__277 = NULL;
#line 832
c_rt_lib0clear(&___nl__im__278);
#line 832
___nl__bool__276 = !___nl__bool__276;
#line 832
if(___nl__bool__276){ goto label_2362;}
#line 833
c_rt_lib0move(&___nl__im__279, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 833
c_rt_lib0copy(&___nl__im__280, ___nl__im__279);
#line 833
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(234), ___nl__im__280);
#line 833
c_rt_lib0clear(&___nl__im__279);
#line 833
c_rt_lib0clear(&___nl__im__280);
#line 834
c_rt_lib0move(&___nl__im__281, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 834
c_rt_lib0copy(&___nl__im__282, ___nl__im__281);
#line 834
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1094), ___nl__im__282);
#line 834
c_rt_lib0clear(&___nl__im__281);
#line 834
c_rt_lib0clear(&___nl__im__282);
#line 835
goto label_2374;
#line 835
label_2362:
;
#line 836
c_rt_lib0move(&___nl__im__283, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 836
c_rt_lib0copy(&___nl__im__284, ___nl__im__283);
#line 836
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(234), ___nl__im__284);
#line 836
c_rt_lib0clear(&___nl__im__283);
#line 836
c_rt_lib0clear(&___nl__im__284);
#line 837
c_rt_lib0move(&___nl__im__285, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 837
c_rt_lib0copy(&___nl__im__286, ___nl__im__285);
#line 837
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1094), ___nl__im__286);
#line 837
c_rt_lib0clear(&___nl__im__285);
#line 837
c_rt_lib0clear(&___nl__im__286);
#line 838
goto label_2374;
#line 838
label_2374:
;
#line 838
//clear ___nl__bool__276;
#line 839
c_rt_lib0move(&___nl__im__287,___get_global_string_const(466));
#line 839
nparser_priv0eat(___ref___rec__0, ___nl__im__287);
#line 839
c_rt_lib0clear(&___nl__im__287);
#line 840
c_rt_lib0move(&___nl__im__289, nparser_priv0parse_expr(___ref___rec__0));
#line 840
___nl__bool__288 = c_rt_lib0priv_is(___nl__im__289, ___get_global_string_const(83));
#line 840
if(___nl__bool__288){ goto label_2397;}
#line 840
c_rt_lib0clear(&___nl__im__1);
#line 840
c_rt_lib0clear(&___nl__im__3);
#line 840
c_rt_lib0clear(&___nl__im__4);
#line 840
//clear ___nl__bool__242;
#line 840
c_rt_lib0clear(&___nl__im__243);
#line 840
c_rt_lib0clear(&___nl__im__247);
#line 840
//clear ___nl__bool__249;
#line 840
//clear ___nl__bool__256;
#line 840
c_rt_lib0clear(&___nl__im__257);
#line 840
c_rt_lib0clear(&___nl__im__258);
#line 840
//clear ___nl__bool__266;
#line 840
c_rt_lib0clear(&___nl__im__267);
#line 840
c_rt_lib0clear(&___nl__im__268);
#line 840
//clear ___nl__bool__288;
#line 840
return ___nl__im__289;
#line 840
label_2397:
;
#line 840
c_rt_lib0move(&___nl__im__290, c_rt_lib0priv_as(___nl__im__289, ___get_global_string_const(83)));
#line 840
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(135), ___nl__im__290);
#line 841
c_rt_lib0move(&___nl__im__291,___get_global_string_const(331));
#line 841
nparser_priv0eat(___ref___rec__0, ___nl__im__291);
#line 841
c_rt_lib0clear(&___nl__im__291);
#line 842
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1079), ___nl__im__247));
#line 843
goto label_2515;
#line 843
label_2405:
;
#line 843
c_rt_lib0move(&___nl__im__292,___get_global_string_const(1076));
#line 843
___nl__bool__249 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__292);
#line 843
c_rt_lib0clear(&___nl__im__292);
#line 843
___nl__bool__249 = !___nl__bool__249;
#line 843
if(___nl__bool__249){ goto label_2437;}
#line 844
c_rt_lib0move(&___nl__im__294, nparser_priv0parse_expr(___ref___rec__0));
#line 844
___nl__bool__293 = c_rt_lib0priv_is(___nl__im__294, ___get_global_string_const(83));
#line 844
if(___nl__bool__293){ goto label_2432;}
#line 844
c_rt_lib0clear(&___nl__im__1);
#line 844
c_rt_lib0clear(&___nl__im__3);
#line 844
c_rt_lib0clear(&___nl__im__4);
#line 844
//clear ___nl__bool__242;
#line 844
c_rt_lib0clear(&___nl__im__243);
#line 844
c_rt_lib0clear(&___nl__im__247);
#line 844
//clear ___nl__bool__249;
#line 844
//clear ___nl__bool__256;
#line 844
c_rt_lib0clear(&___nl__im__257);
#line 844
c_rt_lib0clear(&___nl__im__258);
#line 844
//clear ___nl__bool__266;
#line 844
c_rt_lib0clear(&___nl__im__267);
#line 844
c_rt_lib0clear(&___nl__im__268);
#line 844
//clear ___nl__bool__288;
#line 844
c_rt_lib0clear(&___nl__im__289);
#line 844
c_rt_lib0clear(&___nl__im__290);
#line 844
//clear ___nl__bool__293;
#line 844
return ___nl__im__294;
#line 844
label_2432:
;
#line 844
c_rt_lib0move(&___nl__im__295, c_rt_lib0priv_as(___nl__im__294, ___get_global_string_const(83)));
#line 844
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1090), ___nl__im__295);
#line 845
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1082), ___nl__im__247));
#line 846
goto label_2515;
#line 846
label_2437:
;
#line 846
c_rt_lib0move(&___nl__im__296,___get_global_string_const(1192));
#line 846
___nl__bool__249 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__296);
#line 846
c_rt_lib0clear(&___nl__im__296);
#line 846
___nl__bool__249 = !___nl__bool__249;
#line 846
if(___nl__bool__249){ goto label_2472;}
#line 847
c_rt_lib0move(&___nl__im__298, nparser_priv0parse_expr(___ref___rec__0));
#line 847
___nl__bool__297 = c_rt_lib0priv_is(___nl__im__298, ___get_global_string_const(83));
#line 847
if(___nl__bool__297){ goto label_2467;}
#line 847
c_rt_lib0clear(&___nl__im__1);
#line 847
c_rt_lib0clear(&___nl__im__3);
#line 847
c_rt_lib0clear(&___nl__im__4);
#line 847
//clear ___nl__bool__242;
#line 847
c_rt_lib0clear(&___nl__im__243);
#line 847
c_rt_lib0clear(&___nl__im__247);
#line 847
//clear ___nl__bool__249;
#line 847
//clear ___nl__bool__256;
#line 847
c_rt_lib0clear(&___nl__im__257);
#line 847
c_rt_lib0clear(&___nl__im__258);
#line 847
//clear ___nl__bool__266;
#line 847
c_rt_lib0clear(&___nl__im__267);
#line 847
c_rt_lib0clear(&___nl__im__268);
#line 847
//clear ___nl__bool__288;
#line 847
c_rt_lib0clear(&___nl__im__289);
#line 847
c_rt_lib0clear(&___nl__im__290);
#line 847
//clear ___nl__bool__293;
#line 847
c_rt_lib0clear(&___nl__im__294);
#line 847
c_rt_lib0clear(&___nl__im__295);
#line 847
//clear ___nl__bool__297;
#line 847
return ___nl__im__298;
#line 847
label_2467:
;
#line 847
c_rt_lib0move(&___nl__im__299, c_rt_lib0priv_as(___nl__im__298, ___get_global_string_const(83)));
#line 847
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1090), ___nl__im__299);
#line 848
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1083), ___nl__im__247));
#line 849
goto label_2515;
#line 849
label_2472:
;
#line 849
c_rt_lib0move(&___nl__im__300,___get_global_string_const(1081));
#line 849
___nl__bool__249 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__300);
#line 849
c_rt_lib0clear(&___nl__im__300);
#line 849
___nl__bool__249 = !___nl__bool__249;
#line 849
if(___nl__bool__249){ goto label_2515;}
#line 850
___nl__bool__301 = true;
#line 850
c_rt_lib0move(&___nl__im__302, c_rt_lib0bool_to_nl_native(___nl__bool__301));
#line 850
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1157), ___nl__im__302);
#line 850
//clear ___nl__bool__301;
#line 850
c_rt_lib0clear(&___nl__im__302);
#line 851
c_rt_lib0move(&___nl__im__304, nparser_priv0parse_expr(___ref___rec__0));
#line 851
___nl__bool__303 = c_rt_lib0priv_is(___nl__im__304, ___get_global_string_const(83));
#line 851
if(___nl__bool__303){ goto label_2510;}
#line 851
c_rt_lib0clear(&___nl__im__1);
#line 851
c_rt_lib0clear(&___nl__im__3);
#line 851
c_rt_lib0clear(&___nl__im__4);
#line 851
//clear ___nl__bool__242;
#line 851
c_rt_lib0clear(&___nl__im__243);
#line 851
c_rt_lib0clear(&___nl__im__247);
#line 851
//clear ___nl__bool__249;
#line 851
//clear ___nl__bool__256;
#line 851
c_rt_lib0clear(&___nl__im__257);
#line 851
c_rt_lib0clear(&___nl__im__258);
#line 851
//clear ___nl__bool__266;
#line 851
c_rt_lib0clear(&___nl__im__267);
#line 851
c_rt_lib0clear(&___nl__im__268);
#line 851
//clear ___nl__bool__288;
#line 851
c_rt_lib0clear(&___nl__im__289);
#line 851
c_rt_lib0clear(&___nl__im__290);
#line 851
//clear ___nl__bool__293;
#line 851
c_rt_lib0clear(&___nl__im__294);
#line 851
c_rt_lib0clear(&___nl__im__295);
#line 851
//clear ___nl__bool__297;
#line 851
c_rt_lib0clear(&___nl__im__298);
#line 851
c_rt_lib0clear(&___nl__im__299);
#line 851
//clear ___nl__bool__303;
#line 851
return ___nl__im__304;
#line 851
label_2510:
;
#line 851
c_rt_lib0move(&___nl__im__305, c_rt_lib0priv_as(___nl__im__304, ___get_global_string_const(83)));
#line 851
c_rt_lib0hash_set_value_dec(&___nl__im__247, ___get_global_string_const(1090), ___nl__im__305);
#line 852
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1081), ___nl__im__247));
#line 853
goto label_2515;
#line 853
label_2515:
;
#line 853
//clear ___nl__bool__249;
#line 853
//clear ___nl__bool__256;
#line 853
c_rt_lib0clear(&___nl__im__257);
#line 853
c_rt_lib0clear(&___nl__im__258);
#line 853
//clear ___nl__bool__266;
#line 853
c_rt_lib0clear(&___nl__im__267);
#line 853
c_rt_lib0clear(&___nl__im__268);
#line 853
//clear ___nl__bool__288;
#line 853
c_rt_lib0clear(&___nl__im__289);
#line 853
c_rt_lib0clear(&___nl__im__290);
#line 853
//clear ___nl__bool__293;
#line 853
c_rt_lib0clear(&___nl__im__294);
#line 853
c_rt_lib0clear(&___nl__im__295);
#line 853
//clear ___nl__bool__297;
#line 853
c_rt_lib0clear(&___nl__im__298);
#line 853
c_rt_lib0clear(&___nl__im__299);
#line 853
//clear ___nl__bool__303;
#line 853
c_rt_lib0clear(&___nl__im__304);
#line 853
c_rt_lib0clear(&___nl__im__305);
#line 854
c_rt_lib0move(&___nl__im__306,___get_global_string_const(451));
#line 854
nparser_priv0eat(___ref___rec__0, ___nl__im__306);
#line 854
c_rt_lib0clear(&___nl__im__306);
#line 855
goto label_2539;
#line 855
label_2539:
;
#line 855
//clear ___nl__bool__242;
#line 855
c_rt_lib0clear(&___nl__im__243);
#line 855
c_rt_lib0clear(&___nl__im__247);
#line 856
___nl__rec_ptr__308 = &((*___ref___rec__0).state0field);
#line 856
c_rt_lib0move(&___nl__im__307, ntokenizer0get_place_ws(___nl__rec_ptr__308));
#line 856
___nl__rec_ptr__308 = NULL;
#line 857
c_rt_lib0move(&___nl__im__309, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(745), ___nl__im__307, ___get_global_string_const(1136), ___nl__im__4));
#line 858
c_rt_lib0move(&___nl__im__311, c_rt_lib0hash_mk(2, ___get_global_string_const(237), ___nl__im__3, ___get_global_string_const(210), ___nl__im__309));
#line 858
c_rt_lib0move(&___nl__im__310, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__311));
#line 858
c_rt_lib0clear(&___nl__im__311);
#line 858
c_rt_lib0clear(&___nl__im__1);
#line 858
c_rt_lib0clear(&___nl__im__3);
#line 858
c_rt_lib0clear(&___nl__im__4);
#line 858
c_rt_lib0clear(&___nl__im__307);
#line 858
c_rt_lib0clear(&___nl__im__309);
#line 858
return ___nl__im__310;
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(1171), ___nl__im__2, ___get_global_string_const(50), ___nl__im__4, ___get_global_string_const(223), ___nl__im__6, ___get_global_string_const(1195), ___nl__im__10));
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
