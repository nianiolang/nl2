
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(450));
#line 19
c_rt_lib0move(&___nl__im__3,___get_global_string_const(1072));
#line 19
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1187));
#line 19
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1074));
#line 19
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1075));
#line 19
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1076));
#line 19
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1077));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_string_const(1188), ___get_global_string_const(1189)));
#line 24
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_string_const(52), ___get_global_string_const(1046)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 26
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 27
c_rt_lib0move(&___nl__im__5, ptd0bool());
#line 27
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(1166), ___nl__im__2, ___get_global_string_const(50), ___nl__im__3, ___get_global_string_const(222), ___nl__im__4, ___get_global_string_const(1190), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1130)));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_string_const(45), ___get_global_string_const(346)));
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
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT * ___nl__im_ptr__35 = NULL;
ImmT  ___nl__im__36 = NULL;
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
c_rt_lib0move(___nl__im_ptr__9, c_rt_lib0ov_mk_none(___get_global_string_const(742)));
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
c_rt_lib0move(___nl__im_ptr__13, c_rt_lib0hash_mk(2, ___get_global_string_const(161), ___nl__im__15, ___get_global_string_const(1153), ___nl__im__17));
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
c_rt_lib0move(___nl__im_ptr__18, c_rt_lib0hash_mk(2, ___get_global_string_const(161), ___nl__im__20, ___get_global_string_const(1153), ___nl__im__22));
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
c_rt_lib0move(___nl__im_ptr__23,___get_global_string_const(36));
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
___nl__bool__28 = ___nl__int__29 > ___nl__int__32;
#line 62
//clear ___nl__int__29;
#line 62
//clear ___nl__int__32;
#line 62
___nl__bool__28 = !___nl__bool__28;
#line 62
if(___nl__bool__28){ goto label_87;}
#line 62
___nl__im_ptr__35 = &(___nl__rec__3.errors0field);
#line 62
c_rt_lib0copy(&___nl__im__34, (*___nl__im_ptr__35));
#line 62
___nl__im_ptr__35 = NULL;
#line 62
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(129), ___nl__im__34));
#line 62
c_rt_lib0clear(&___nl__im__34);
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
return ___nl__im__33;
#line 62
goto label_87;
#line 62
label_87:
;
#line 62
//clear ___nl__bool__28;
#line 62
c_rt_lib0clear(&___nl__im__33);
#line 63
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__27));
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
return ___nl__im__36;
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(129)));
#line 69
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(5, ___get_global_string_const(161), ___nl__im__8, ___get_global_string_const(159), ___nl__im__9, ___get_global_string_const(214), ___nl__im__11, ___get_global_string_const(164), ___nl__im__1, ___get_global_string_const(215), ___nl__im__12));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1191));
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
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 83
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(175), ___nl__im__1, ___get_global_string_const(180), ___nl__im__3, ___get_global_string_const(173), ___nl__im__4, ___get_global_string_const(1134), ___nl__im__5));
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
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(1134), ___nl__im__8);
#line 84
c_rt_lib0clear(&___nl__im__6);
#line 84
c_rt_lib0clear(&___nl__im__8);
#line 85
label_14:
;
#line 85
c_rt_lib0move(&___nl__im__10,___get_global_string_const(1192));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
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
c_rt_lib0move(&___nl__im__16,___get_global_string_const(180));
#line 88
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 89
___nl__rec_ptr__19 = &((*___ref___rec__0).state0field);
#line 89
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 89
c_rt_lib0move(&___nl__im__18, ntokenizer0eat_type(___nl__rec_ptr__19, ___nl__im__20));
#line 89
___nl__rec_ptr__19 = NULL;
#line 89
c_rt_lib0clear(&___nl__im__20);
#line 89
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__11));
#line 89
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__18, ___get_global_string_const(161), ___nl__im__21));
#line 89
c_rt_lib0clear(&___nl__im__18);
#line 89
c_rt_lib0clear(&___nl__im__21);
#line 89
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 89
c_rt_lib0move(&___nl__string__22,___get_global_string_const(180));
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
c_rt_lib0move(&___nl__im__23,___get_global_string_const(1194));
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
c_rt_lib0move(&___nl__im__24,___get_global_string_const(450));
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
c_rt_lib0move(&___nl__im__27,___get_global_string_const(733));
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
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(83));
#line 98
if(___nl__bool__29){ goto label_76;}
#line 100
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(82));
#line 100
if(___nl__bool__29){ goto label_87;}
#line 100
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 100
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__28));
#line 100
nl_die_arg(___nl__im__30);
#line 98
label_76:
;
#line 98
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(83)));
#line 98
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 99
c_rt_lib0move(&___nl__im__33,___get_global_string_const(173));
#line 99
c_rt_lib0move(&___nl__im__33, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__33));
#line 99
c_rt_lib0delete(array0push(&___nl__im__33, ___nl__im__31));
#line 99
c_rt_lib0move(&___nl__string__34,___get_global_string_const(173));
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
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(82)));
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
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_string_const(742)));
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
c_rt_lib0move(&___nl__im__40,___get_global_string_const(1195));
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(465));
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
c_rt_lib0move(&___nl__im__5,___get_global_string_const(331));
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
if(___nl__bool__3){ goto label_102;}
#line 116
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 116
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 116
c_rt_lib0move(&___nl__im__9,___get_global_string_const(36));
#line 116
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 116
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_string_const(277), ___nl__im__7, ___get_global_string_const(215), ___nl__im__8, ___get_global_string_const(175), ___nl__im__9, ___get_global_string_const(503), ___nl__im__10));
#line 116
c_rt_lib0clear(&___nl__im__7);
#line 116
c_rt_lib0clear(&___nl__im__8);
#line 116
c_rt_lib0clear(&___nl__im__9);
#line 116
c_rt_lib0clear(&___nl__im__10);
#line 117
c_rt_lib0move(&___nl__im__12,___get_global_string_const(39));
#line 117
___nl__bool__11 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__12);
#line 117
c_rt_lib0clear(&___nl__im__12);
#line 117
___nl__bool__11 = !___nl__bool__11;
#line 117
if(___nl__bool__11){ goto label_33;}
#line 117
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 117
c_rt_lib0copy(&___nl__im__14, ___nl__im__13);
#line 117
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(277), ___nl__im__14);
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
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
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
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 119
c_rt_lib0move(&___nl__im__18, ntokenizer0eat_type(___nl__rec_ptr__19, ___nl__im__20));
#line 119
___nl__rec_ptr__19 = NULL;
#line 119
c_rt_lib0clear(&___nl__im__20);
#line 119
c_rt_lib0copy(&___nl__im__21, ___nl__im__18);
#line 119
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(175), ___nl__im__21);
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
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1196));
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
c_rt_lib0move(&___nl__im__24,___get_global_string_const(538));
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
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__27, ___get_global_string_const(83)));
#line 125
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(215), ___nl__im__25));
#line 125
c_rt_lib0copy(&___nl__im__29, ___nl__im__28);
#line 125
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(215), ___nl__im__29);
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
c_rt_lib0move(&___nl__im__31,___get_global_string_const(323));
#line 128
___nl__bool__30 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__31);
#line 128
c_rt_lib0clear(&___nl__im__31);
#line 128
___nl__bool__30 = !___nl__bool__30;
#line 128
___nl__bool__30 = !___nl__bool__30;
#line 128
if(___nl__bool__30){ goto label_98;}
#line 128
c_rt_lib0clear(&___nl__im__6);
#line 128
//clear ___nl__bool__30;
#line 128
goto label_102;
#line 128
goto label_98;
#line 128
label_98:
;
#line 128
//clear ___nl__bool__30;
#line 128
c_rt_lib0clear(&___nl__im__6);
#line 129
goto label_4;
#line 129
label_102:
;
#line 130
c_rt_lib0move(&___nl__im__32,___get_global_string_const(331));
#line 130
nparser_priv0eat(___ref___rec__0, ___nl__im__32);
#line 130
c_rt_lib0clear(&___nl__im__32);
#line 131
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 139
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 139
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_string_const(215), ___nl__im__4, ___get_global_string_const(503), ___nl__im__5));
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
c_rt_lib0move(&___nl__im__10,___get_global_string_const(36));
#line 143
c_rt_lib0move(&___nl__im__12, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 143
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(1085)));
#line 143
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(231), ___nl__im__12, ___get_global_string_const(237), ___nl__im__13));
#line 143
c_rt_lib0clear(&___nl__im__12);
#line 143
c_rt_lib0clear(&___nl__im__13);
#line 144
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(475)));
#line 145
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 145
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(7, ___get_global_string_const(476), ___nl__im__3, ___get_global_string_const(161), ___nl__im__8, ___get_global_string_const(276), ___nl__im__9, ___get_global_string_const(175), ___nl__im__10, ___get_global_string_const(237), ___nl__im__11, ___get_global_string_const(219), ___nl__im__14, ___get_global_string_const(174), ___nl__im__15));
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
c_rt_lib0move(&___nl__im__16,___get_global_string_const(733));
#line 147
nparser_priv0eat(___ref___rec__0, ___nl__im__16);
#line 147
c_rt_lib0clear(&___nl__im__16);
#line 148
c_rt_lib0move(&___nl__im__18, nparser_priv0eat_text(___ref___rec__0));
#line 148
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(83)));
#line 148
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__19);
#line 149
c_rt_lib0move(&___nl__im__21,___get_global_string_const(34));
#line 149
___nl__bool__20 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__21);
#line 149
c_rt_lib0clear(&___nl__im__21);
#line 149
___nl__bool__20 = !___nl__bool__20;
#line 149
if(___nl__bool__20){ goto label_86;}
#line 150
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(175)));
#line 150
___nl__bool__22 = c_rt_lib0ne(___nl__im__23, ___nl__im__1);
#line 150
c_rt_lib0clear(&___nl__im__23);
#line 150
___nl__bool__22 = !___nl__bool__22;
#line 150
if(___nl__bool__22){ goto label_64;}
#line 151
c_rt_lib0move(&___nl__im__27,___get_global_string_const(1197));
#line 151
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(175)));
#line 151
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 151
c_rt_lib0clear(&___nl__im__27);
#line 151
c_rt_lib0clear(&___nl__im__28);
#line 151
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1198));
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
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__31, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(83)));
#line 153
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__32);
#line 154
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 154
c_rt_lib0copy(&___nl__im__34, ___nl__im__33);
#line 154
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(219), ___nl__im__34);
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
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__36, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__36, ___get_global_string_const(83)));
#line 156
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(276), ___nl__im__37);
#line 157
___nl__rec_ptr__39 = &((*___ref___rec__0).state0field);
#line 157
c_rt_lib0move(&___nl__im__40,___get_global_string_const(538));
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
c_rt_lib0move(&___nl__im__41,___get_global_string_const(538));
#line 158
nparser_priv0eat(___ref___rec__0, ___nl__im__41);
#line 158
c_rt_lib0clear(&___nl__im__41);
#line 159
c_rt_lib0move(&___nl__im__44, nparser_priv0parse_type(___ref___rec__0));
#line 159
___nl__bool__43 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__44, ___get_global_string_const(83)));
#line 160
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(215), ___nl__im__42));
#line 160
c_rt_lib0move(&___nl__im__46,___get_global_string_const(476));
#line 160
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__46));
#line 160
c_rt_lib0copy(&___nl__im__47, ___nl__im__45);
#line 160
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_string_const(215), ___nl__im__47);
#line 160
c_rt_lib0move(&___nl__string__48,___get_global_string_const(476));
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
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(83)));
#line 162
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(237), ___nl__im__51);
#line 163
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(237)));
#line 163
c_rt_lib0move(&___nl__im__52, ptd_parser0fun_def_to_ptd(___nl__im__53));
#line 163
c_rt_lib0clear(&___nl__im__53);
#line 163
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__52, ___get_global_string_const(82));
#line 163
if(___nl__bool__54){ goto label_174;}
#line 167
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__52, ___get_global_string_const(83));
#line 167
if(___nl__bool__54){ goto label_183;}
#line 167
c_rt_lib0move(&___nl__im__55,___get_global_string_const(15));
#line 167
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_mk(2, ___nl__im__55, ___nl__im__52));
#line 167
nl_die_arg(___nl__im__55);
#line 163
label_174:
;
#line 163
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__52, ___get_global_string_const(82)));
#line 163
c_rt_lib0copy(&___nl__im__56, ___nl__im__57);
#line 166
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 166
c_rt_lib0copy(&___nl__im__59, ___nl__im__58);
#line 166
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(174), ___nl__im__59);
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
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__52, ___get_global_string_const(83)));
#line 167
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 168
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__60));
#line 168
c_rt_lib0copy(&___nl__im__63, ___nl__im__62);
#line 168
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(174), ___nl__im__63);
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
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(331));
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
if(___nl__bool__2){ goto label_39;}
#line 179
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_fun_val_arg(___ref___rec__0));
#line 179
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 180
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 181
c_rt_lib0move(&___nl__im__9,___get_global_string_const(323));
#line 181
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 181
c_rt_lib0clear(&___nl__im__9);
#line 181
___nl__bool__8 = !___nl__bool__8;
#line 181
___nl__bool__8 = !___nl__bool__8;
#line 181
if(___nl__bool__8){ goto label_33;}
#line 181
c_rt_lib0clear(&___nl__im__5);
#line 181
//clear ___nl__bool__6;
#line 181
c_rt_lib0clear(&___nl__im__7);
#line 181
//clear ___nl__bool__8;
#line 181
goto label_39;
#line 181
goto label_33;
#line 181
label_33:
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
label_39:
;
#line 183
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 183
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 183
c_rt_lib0clear(&___nl__im__10);
#line 184
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(331));
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
if(___nl__bool__2){ goto label_39;}
#line 190
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 190
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 191
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__5));
#line 192
c_rt_lib0move(&___nl__im__9,___get_global_string_const(323));
#line 192
___nl__bool__8 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__9);
#line 192
c_rt_lib0clear(&___nl__im__9);
#line 192
___nl__bool__8 = !___nl__bool__8;
#line 192
___nl__bool__8 = !___nl__bool__8;
#line 192
if(___nl__bool__8){ goto label_33;}
#line 192
c_rt_lib0clear(&___nl__im__5);
#line 192
//clear ___nl__bool__6;
#line 192
c_rt_lib0clear(&___nl__im__7);
#line 192
//clear ___nl__bool__8;
#line 192
goto label_39;
#line 192
goto label_33;
#line 192
label_33:
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
label_39:
;
#line 194
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 194
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 194
c_rt_lib0clear(&___nl__im__10);
#line 195
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
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
c_rt_lib0move(&___nl__im__4,___get_global_string_const(39));
#line 200
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 200
c_rt_lib0clear(&___nl__im__4);
#line 200
if(___nl__bool__3){ goto label_7;}
#line 200
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 200
goto label_9;
#line 200
label_7:
;
#line 200
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 200
label_9:
;
#line 200
//clear ___nl__bool__3;
#line 200
c_rt_lib0copy(&___nl__im__5, ___nl__im__2);
#line 200
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(277), ___nl__im__5);
#line 200
c_rt_lib0clear(&___nl__im__2);
#line 200
c_rt_lib0clear(&___nl__im__5);
#line 201
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 201
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 201
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(234), ___nl__im__8);
#line 202
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 202
c_rt_lib0copy(&___nl__im__10, ___nl__im__9);
#line 202
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(1135), ___nl__im__10);
#line 202
c_rt_lib0clear(&___nl__im__9);
#line 202
c_rt_lib0clear(&___nl__im__10);
#line 203
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 207
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 207
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__2, ___get_global_string_const(159), ___nl__im__3));
#line 207
c_rt_lib0clear(&___nl__im__2);
#line 207
c_rt_lib0clear(&___nl__im__3);
#line 208
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 208
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
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
c_rt_lib0move(&___nl__im__7,___get_global_string_const(1199));
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
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 212
c_rt_lib0move(&___nl__im__8, ntokenizer0eat_type(___nl__rec_ptr__9, ___nl__im__10));
#line 212
___nl__rec_ptr__9 = NULL;
#line 212
c_rt_lib0clear(&___nl__im__10);
#line 212
c_rt_lib0copy(&___nl__im__11, ___nl__im__8);
#line 212
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(159), ___nl__im__11);
#line 212
c_rt_lib0clear(&___nl__im__8);
#line 212
c_rt_lib0clear(&___nl__im__11);
#line 213
c_rt_lib0move(&___nl__im__14,___get_global_string_const(34));
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
c_rt_lib0hash_set_value_dec(&___nl__im__1, ___get_global_string_const(175), ___nl__im__18);
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
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1200));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 225
c_rt_lib0move(&___nl__im__1, ntokenizer0eat_type(___nl__rec_ptr__2, ___nl__im__3));
#line 225
___nl__rec_ptr__2 = NULL;
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 227
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 227
c_rt_lib0move(&___nl__im__7,___get_global_string_const(465));
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
c_rt_lib0move(&___nl__im__9,___get_global_string_const(34));
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(515), ___nl__im__1));
#line 226
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__11));
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
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 228
c_rt_lib0move(&___nl__im__14,___get_global_string_const(36));
#line 228
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 228
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(159), ___nl__im__13, ___get_global_string_const(175), ___nl__im__14, ___get_global_string_const(276), ___nl__im__15));
#line 228
c_rt_lib0clear(&___nl__im__13);
#line 228
c_rt_lib0clear(&___nl__im__14);
#line 228
c_rt_lib0clear(&___nl__im__15);
#line 229
c_rt_lib0move(&___nl__im__17,___get_global_string_const(34));
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
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(159), ___nl__im__18);
#line 230
c_rt_lib0clear(&___nl__im__18);
#line 231
c_rt_lib0move(&___nl__im__20, nparser_priv0eat_text(___ref___rec__0));
#line 231
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(83)));
#line 231
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(175), ___nl__im__21);
#line 232
goto label_65;
#line 232
label_60:
;
#line 233
c_rt_lib0copy(&___nl__im__22, ___nl__im__1);
#line 233
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(175), ___nl__im__22);
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
c_rt_lib0move(&___nl__im__23,___get_global_string_const(465));
#line 235
nparser_priv0eat(___ref___rec__0, ___nl__im__23);
#line 235
c_rt_lib0clear(&___nl__im__23);
#line 236
c_rt_lib0move(&___nl__im__25, nparser_priv0parse_fun_val_arg_list(___ref___rec__0));
#line 236
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(83));
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
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(83)));
#line 236
c_rt_lib0hash_set_value_dec(&___nl__im__12, ___get_global_string_const(276), ___nl__im__26);
#line 237
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(1065), ___nl__im__12));
#line 237
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__28));
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
#line 241
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 241
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 241
___nl__rec_ptr__2 = NULL;
#line 242
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 242
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1107), ___nl__im__4));
#line 242
c_rt_lib0clear(&___nl__im__4);
#line 243
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 243
___nl__bool__5 = ntokenizer0is_text(___nl__rec_ptr__6);
#line 243
___nl__rec_ptr__6 = NULL;
#line 243
___nl__bool__5 = !___nl__bool__5;
#line 243
if(___nl__bool__5){ goto label_17;}
#line 244
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 244
c_rt_lib0move(&___nl__im__7, ntokenizer0eat_text(___nl__rec_ptr__8));
#line 244
___nl__rec_ptr__8 = NULL;
#line 244
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1107), ___nl__im__7));
#line 244
c_rt_lib0clear(&___nl__im__7);
#line 245
goto label_33;
#line 245
label_17:
;
#line 245
___nl__rec_ptr__9 = &((*___ref___rec__0).state0field);
#line 245
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(414)));
#line 245
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__9, ___nl__im__10);
#line 245
___nl__rec_ptr__9 = NULL;
#line 245
c_rt_lib0clear(&___nl__im__10);
#line 245
___nl__bool__5 = !___nl__bool__5;
#line 245
if(___nl__bool__5){ goto label_33;}
#line 246
___nl__rec_ptr__12 = &((*___ref___rec__0).state0field);
#line 246
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(414)));
#line 246
c_rt_lib0move(&___nl__im__11, ntokenizer0eat_type(___nl__rec_ptr__12, ___nl__im__13));
#line 246
___nl__rec_ptr__12 = NULL;
#line 246
c_rt_lib0clear(&___nl__im__13);
#line 246
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1107), ___nl__im__11));
#line 246
c_rt_lib0clear(&___nl__im__11);
#line 247
goto label_33;
#line 247
label_33:
;
#line 247
//clear ___nl__bool__5;
#line 249
___nl__rec_ptr__17 = &((*___ref___rec__0).state0field);
#line 249
c_rt_lib0move(&___nl__im__16, ntokenizer0get_place(___nl__rec_ptr__17));
#line 249
___nl__rec_ptr__17 = NULL;
#line 249
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__1, ___get_global_string_const(742), ___nl__im__16));
#line 249
c_rt_lib0clear(&___nl__im__16);
#line 251
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 251
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__15, ___get_global_string_const(229), ___nl__im__3, ___get_global_string_const(215), ___nl__im__18));
#line 251
c_rt_lib0clear(&___nl__im__15);
#line 251
c_rt_lib0clear(&___nl__im__18);
#line 251
c_rt_lib0clear(&___nl__im__1);
#line 251
c_rt_lib0clear(&___nl__im__3);
#line 251
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
#line 256
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 257
c_rt_lib0move(&___nl__im__2,___get_global_string_const(315));
#line 257
nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 257
c_rt_lib0clear(&___nl__im__2);
#line 258
label_4:
;
#line 258
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 258
c_rt_lib0move(&___nl__im__5,___get_global_string_const(316));
#line 258
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 258
___nl__rec_ptr__4 = NULL;
#line 258
c_rt_lib0clear(&___nl__im__5);
#line 258
___nl__bool__3 = !___nl__bool__3;
#line 258
___nl__bool__3 = !___nl__bool__3;
#line 258
if(___nl__bool__3){ goto label_51;}
#line 259
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_hash_key(___ref___rec__0));
#line 260
c_rt_lib0move(&___nl__im__7,___get_global_string_const(317));
#line 260
nparser_priv0eat(___ref___rec__0, ___nl__im__7);
#line 260
c_rt_lib0clear(&___nl__im__7);
#line 261
c_rt_lib0move(&___nl__im__10, nparser_priv0parse_expr(___ref___rec__0));
#line 261
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(83));
#line 261
if(___nl__bool__9){ goto label_26;}
#line 261
c_rt_lib0clear(&___nl__im__1);
#line 261
//clear ___nl__bool__3;
#line 261
c_rt_lib0clear(&___nl__im__6);
#line 261
c_rt_lib0clear(&___nl__im__8);
#line 261
//clear ___nl__bool__9;
#line 261
return ___nl__im__10;
#line 261
label_26:
;
#line 261
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(83)));
#line 262
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(585), ___nl__im__6, ___get_global_string_const(234), ___nl__im__8));
#line 262
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__11));
#line 262
c_rt_lib0clear(&___nl__im__11);
#line 263
c_rt_lib0move(&___nl__im__13,___get_global_string_const(323));
#line 263
___nl__bool__12 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__13);
#line 263
c_rt_lib0clear(&___nl__im__13);
#line 263
___nl__bool__12 = !___nl__bool__12;
#line 263
___nl__bool__12 = !___nl__bool__12;
#line 263
if(___nl__bool__12){ goto label_44;}
#line 263
c_rt_lib0clear(&___nl__im__6);
#line 263
c_rt_lib0clear(&___nl__im__8);
#line 263
//clear ___nl__bool__9;
#line 263
c_rt_lib0clear(&___nl__im__10);
#line 263
//clear ___nl__bool__12;
#line 263
goto label_51;
#line 263
goto label_44;
#line 263
label_44:
;
#line 263
//clear ___nl__bool__12;
#line 263
c_rt_lib0clear(&___nl__im__6);
#line 263
c_rt_lib0clear(&___nl__im__8);
#line 263
//clear ___nl__bool__9;
#line 263
c_rt_lib0clear(&___nl__im__10);
#line 264
goto label_4;
#line 264
label_51:
;
#line 265
c_rt_lib0move(&___nl__im__14,___get_global_string_const(316));
#line 265
nparser_priv0eat(___ref___rec__0, ___nl__im__14);
#line 265
c_rt_lib0clear(&___nl__im__14);
#line 266
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 266
c_rt_lib0clear(&___nl__im__1);
#line 266
//clear ___nl__bool__3;
#line 266
c_rt_lib0clear(&___nl__im__6);
#line 266
c_rt_lib0clear(&___nl__im__8);
#line 266
//clear ___nl__bool__9;
#line 266
c_rt_lib0clear(&___nl__im__10);
#line 266
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
#line 270
c_rt_lib0move(&___nl__im__1, c_rt_lib0array_mk(0));
#line 271
c_rt_lib0move(&___nl__im__2,___get_global_string_const(325));
#line 271
nparser_priv0eat(___ref___rec__0, ___nl__im__2);
#line 271
c_rt_lib0clear(&___nl__im__2);
#line 272
label_4:
;
#line 272
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 272
c_rt_lib0move(&___nl__im__5,___get_global_string_const(326));
#line 272
___nl__bool__3 = ntokenizer0next_is(___nl__rec_ptr__4, ___nl__im__5);
#line 272
___nl__rec_ptr__4 = NULL;
#line 272
c_rt_lib0clear(&___nl__im__5);
#line 272
___nl__bool__3 = !___nl__bool__3;
#line 272
___nl__bool__3 = !___nl__bool__3;
#line 272
if(___nl__bool__3){ goto label_42;}
#line 273
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_expr(___ref___rec__0));
#line 273
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(83));
#line 273
if(___nl__bool__7){ goto label_21;}
#line 273
c_rt_lib0clear(&___nl__im__1);
#line 273
//clear ___nl__bool__3;
#line 273
c_rt_lib0clear(&___nl__im__6);
#line 273
//clear ___nl__bool__7;
#line 273
return ___nl__im__8;
#line 273
label_21:
;
#line 273
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(83)));
#line 274
c_rt_lib0delete(array0push(&___nl__im__1, ___nl__im__6));
#line 275
c_rt_lib0move(&___nl__im__10,___get_global_string_const(323));
#line 275
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__10);
#line 275
c_rt_lib0clear(&___nl__im__10);
#line 275
___nl__bool__9 = !___nl__bool__9;
#line 275
___nl__bool__9 = !___nl__bool__9;
#line 275
if(___nl__bool__9){ goto label_36;}
#line 275
c_rt_lib0clear(&___nl__im__6);
#line 275
//clear ___nl__bool__7;
#line 275
c_rt_lib0clear(&___nl__im__8);
#line 275
//clear ___nl__bool__9;
#line 275
goto label_42;
#line 275
goto label_36;
#line 275
label_36:
;
#line 275
//clear ___nl__bool__9;
#line 275
c_rt_lib0clear(&___nl__im__6);
#line 275
//clear ___nl__bool__7;
#line 275
c_rt_lib0clear(&___nl__im__8);
#line 276
goto label_4;
#line 276
label_42:
;
#line 277
c_rt_lib0move(&___nl__im__11,___get_global_string_const(326));
#line 277
nparser_priv0eat(___ref___rec__0, ___nl__im__11);
#line 277
c_rt_lib0clear(&___nl__im__11);
#line 278
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 278
c_rt_lib0clear(&___nl__im__1);
#line 278
//clear ___nl__bool__3;
#line 278
c_rt_lib0clear(&___nl__im__6);
#line 278
//clear ___nl__bool__7;
#line 278
c_rt_lib0clear(&___nl__im__8);
#line 278
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
#line 282
___nl__int__4 = 0;
#line 282
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__4));
#line 282
//clear ___nl__int__4;
#line 282
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(83));
#line 282
if(___nl__bool__2){ goto label_8;}
#line 282
c_rt_lib0clear(&___nl__im__1);
#line 282
//clear ___nl__bool__2;
#line 282
return ___nl__im__3;
#line 282
label_8:
;
#line 282
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(83)));
#line 283
___nl__int__6 = 0;
#line 283
c_rt_lib0move(&___nl__im__5, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__1, ___nl__int__6));
#line 283
//clear ___nl__int__6;
#line 283
c_rt_lib0clear(&___nl__im__1);
#line 283
//clear ___nl__bool__2;
#line 283
c_rt_lib0clear(&___nl__im__3);
#line 283
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
#line 287
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 287
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 287
___nl__rec_ptr__2 = NULL;
#line 288
c_rt_lib0move(&___nl__im__4,___get_global_string_const(309));
#line 288
___nl__bool__3 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__4);
#line 288
c_rt_lib0clear(&___nl__im__4);
#line 288
___nl__bool__3 = !___nl__bool__3;
#line 288
if(___nl__bool__3){ goto label_47;}
#line 289
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 289
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 289
___nl__rec_ptr__6 = NULL;
#line 290
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_fun_label(___ref___rec__0));
#line 290
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(1109), ___nl__im__8));
#line 290
c_rt_lib0clear(&___nl__im__8);
#line 291
___nl__rec_ptr__10 = &((*___ref___rec__0).state0field);
#line 291
c_rt_lib0move(&___nl__im__9, ntokenizer0get_place(___nl__rec_ptr__10));
#line 291
___nl__rec_ptr__10 = NULL;
#line 295
___nl__rec_ptr__15 = &((*___ref___rec__0).state0field);
#line 295
c_rt_lib0move(&___nl__im__14, ntokenizer0get_place(___nl__rec_ptr__15));
#line 295
___nl__rec_ptr__15 = NULL;
#line 295
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__1, ___get_global_string_const(742), ___nl__im__14));
#line 295
c_rt_lib0clear(&___nl__im__14);
#line 298
c_rt_lib0move(&___nl__im__18,___get_global_string_const(309));
#line 300
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__5, ___get_global_string_const(742), ___nl__im__9));
#line 302
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 302
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__20, ___get_global_string_const(229), ___nl__im__7, ___get_global_string_const(215), ___nl__im__21));
#line 302
c_rt_lib0clear(&___nl__im__20);
#line 302
c_rt_lib0clear(&___nl__im__21);
#line 302
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_mk(2, ___get_global_string_const(568), ___nl__im__18, ___get_global_string_const(234), ___nl__im__19));
#line 302
c_rt_lib0clear(&___nl__im__18);
#line 302
c_rt_lib0clear(&___nl__im__19);
#line 302
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(1108), ___nl__im__17));
#line 302
c_rt_lib0clear(&___nl__im__17);
#line 305
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 305
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__13, ___get_global_string_const(229), ___nl__im__16, ___get_global_string_const(215), ___nl__im__22));
#line 305
c_rt_lib0clear(&___nl__im__13);
#line 305
c_rt_lib0clear(&___nl__im__16);
#line 305
c_rt_lib0clear(&___nl__im__22);
#line 305
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__12));
#line 305
c_rt_lib0clear(&___nl__im__12);
#line 305
c_rt_lib0clear(&___nl__im__1);
#line 305
//clear ___nl__bool__3;
#line 305
c_rt_lib0clear(&___nl__im__5);
#line 305
c_rt_lib0clear(&___nl__im__7);
#line 305
c_rt_lib0clear(&___nl__im__9);
#line 305
return ___nl__im__11;
#line 307
goto label_47;
#line 307
label_47:
;
#line 307
//clear ___nl__bool__3;
#line 307
c_rt_lib0clear(&___nl__im__5);
#line 307
c_rt_lib0clear(&___nl__im__7);
#line 307
c_rt_lib0clear(&___nl__im__9);
#line 307
c_rt_lib0clear(&___nl__im__11);
#line 308
___nl__rec_ptr__24 = &((*___ref___rec__0).state0field);
#line 308
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 308
___nl__bool__23 = ntokenizer0is_type(___nl__rec_ptr__24, ___nl__im__25);
#line 308
___nl__rec_ptr__24 = NULL;
#line 308
c_rt_lib0clear(&___nl__im__25);
#line 308
___nl__bool__23 = !___nl__bool__23;
#line 308
if(___nl__bool__23){ goto label_96;}
#line 309
c_rt_lib0move(&___nl__im__28, nparser_priv0parse_label(___ref___rec__0));
#line 309
___nl__bool__27 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(83));
#line 309
if(___nl__bool__27){ goto label_68;}
#line 309
c_rt_lib0clear(&___nl__im__1);
#line 309
//clear ___nl__bool__23;
#line 309
c_rt_lib0clear(&___nl__im__26);
#line 309
//clear ___nl__bool__27;
#line 309
return ___nl__im__28;
#line 309
label_68:
;
#line 309
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(83)));
#line 310
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(1065));
#line 310
___nl__bool__29 = !___nl__bool__29;
#line 310
if(___nl__bool__29){ goto label_92;}
#line 312
___nl__rec_ptr__34 = &((*___ref___rec__0).state0field);
#line 312
c_rt_lib0move(&___nl__im__33, ntokenizer0get_place(___nl__rec_ptr__34));
#line 312
___nl__rec_ptr__34 = NULL;
#line 312
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__1, ___get_global_string_const(742), ___nl__im__33));
#line 312
c_rt_lib0clear(&___nl__im__33);
#line 314
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 314
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__32, ___get_global_string_const(229), ___nl__im__26, ___get_global_string_const(215), ___nl__im__35));
#line 314
c_rt_lib0clear(&___nl__im__32);
#line 314
c_rt_lib0clear(&___nl__im__35);
#line 314
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__31));
#line 314
c_rt_lib0clear(&___nl__im__31);
#line 314
c_rt_lib0clear(&___nl__im__1);
#line 314
//clear ___nl__bool__23;
#line 314
c_rt_lib0clear(&___nl__im__26);
#line 314
//clear ___nl__bool__27;
#line 314
c_rt_lib0clear(&___nl__im__28);
#line 314
//clear ___nl__bool__29;
#line 314
return ___nl__im__30;
#line 316
goto label_92;
#line 316
label_92:
;
#line 316
//clear ___nl__bool__29;
#line 316
c_rt_lib0clear(&___nl__im__30);
#line 317
goto label_96;
#line 317
label_96:
;
#line 317
//clear ___nl__bool__23;
#line 317
c_rt_lib0clear(&___nl__im__26);
#line 317
//clear ___nl__bool__27;
#line 317
c_rt_lib0clear(&___nl__im__28);
#line 318
c_rt_lib0move(&___nl__im__36,___get_global_string_const(1201));
#line 318
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__36));
#line 318
c_rt_lib0clear(&___nl__im__36);
#line 320
___nl__rec_ptr__41 = &((*___ref___rec__0).state0field);
#line 320
c_rt_lib0move(&___nl__im__40, ntokenizer0get_place(___nl__rec_ptr__41));
#line 320
___nl__rec_ptr__41 = NULL;
#line 320
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__1, ___get_global_string_const(742), ___nl__im__40));
#line 320
c_rt_lib0clear(&___nl__im__40);
#line 321
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(1085)));
#line 322
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 322
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__39, ___get_global_string_const(229), ___nl__im__42, ___get_global_string_const(215), ___nl__im__43));
#line 322
c_rt_lib0clear(&___nl__im__39);
#line 322
c_rt_lib0clear(&___nl__im__42);
#line 322
c_rt_lib0clear(&___nl__im__43);
#line 322
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__38));
#line 322
c_rt_lib0clear(&___nl__im__38);
#line 322
c_rt_lib0clear(&___nl__im__1);
#line 322
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
#line 327
label_0:
;
#line 329
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 329
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 329
___nl__rec_ptr__5 = NULL;
#line 330
___nl__rec_ptr__7 = &((*___ref___rec__0).state0field);
#line 330
c_rt_lib0move(&___nl__im__6, ntokenizer0get_token(___nl__rec_ptr__7));
#line 330
___nl__rec_ptr__7 = NULL;
#line 332
c_rt_lib0move(&___nl__im__10, nast0get_ternary_ops());
#line 332
___nl__bool__9 = hash0has_key(___nl__im__10, ___nl__im__6);
#line 332
c_rt_lib0clear(&___nl__im__10);
#line 332
___nl__bool__9 = !___nl__bool__9;
#line 332
if(___nl__bool__9){ goto label_145;}
#line 333
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 334
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1126));
#line 334
___nl__bool__11 = c_rt_lib0eq(___nl__im__8, ___nl__im__12);
#line 334
c_rt_lib0clear(&___nl__im__12);
#line 334
___nl__bool__11 = !___nl__bool__11;
#line 334
if(___nl__bool__11){ goto label_111;}
#line 335
c_rt_lib0move(&___nl__im__14, nast0get_ternary_ops());
#line 335
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1126));
#line 335
c_rt_lib0move(&___nl__im__13, hash0get_value(___nl__im__14, ___nl__im__15));
#line 335
c_rt_lib0clear(&___nl__im__14);
#line 335
c_rt_lib0clear(&___nl__im__15);
#line 336
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1123)));
#line 336
___nl__int__17 = getIntFromImm(___nl__im__18);
#line 336
c_rt_lib0clear(&___nl__im__18);
#line 336
___nl__bool__16 = ___nl__int__17 < ___nl__int__2;
#line 336
//clear ___nl__int__17;
#line 336
if(___nl__bool__16){ goto label_41;}
#line 336
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1123)));
#line 336
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 336
c_rt_lib0clear(&___nl__im__21);
#line 336
___nl__bool__16 = ___nl__int__20 == ___nl__int__2;
#line 336
//clear ___nl__int__20;
#line 336
___nl__bool__19 = !___nl__bool__16;
#line 336
if(___nl__bool__19){ goto label_39;}
#line 336
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1124)));
#line 336
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(285));
#line 336
c_rt_lib0clear(&___nl__im__22);
#line 336
label_39:
;
#line 336
//clear ___nl__bool__19;
#line 336
label_41:
;
#line 336
___nl__bool__16 = !___nl__bool__16;
#line 336
if(___nl__bool__16){ goto label_57;}
#line 336
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
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
//clear ___nl__bool__16;
#line 336
return ___nl__im__23;
#line 336
goto label_57;
#line 336
label_57:
;
#line 336
//clear ___nl__bool__16;
#line 336
c_rt_lib0clear(&___nl__im__23);
#line 337
nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 338
c_rt_lib0move(&___nl__im__26, nparser_priv0parse_expr(___ref___rec__0));
#line 338
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(83));
#line 338
if(___nl__bool__25){ goto label_76;}
#line 338
c_rt_lib0clear(&___nl__im__1);
#line 338
//clear ___nl__int__2;
#line 338
c_rt_lib0clear(&___nl__im__3);
#line 338
c_rt_lib0clear(&___nl__im__4);
#line 338
c_rt_lib0clear(&___nl__im__6);
#line 338
c_rt_lib0clear(&___nl__im__8);
#line 338
//clear ___nl__bool__9;
#line 338
//clear ___nl__bool__11;
#line 338
c_rt_lib0clear(&___nl__im__13);
#line 338
c_rt_lib0clear(&___nl__im__24);
#line 338
//clear ___nl__bool__25;
#line 338
return ___nl__im__26;
#line 338
label_76:
;
#line 338
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(83)));
#line 339
c_rt_lib0move(&___nl__im__27,___get_global_string_const(538));
#line 339
nparser_priv0eat(___ref___rec__0, ___nl__im__27);
#line 339
c_rt_lib0clear(&___nl__im__27);
#line 340
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(1123)));
#line 340
___nl__int__31 = getIntFromImm(___nl__im__32);
#line 340
c_rt_lib0clear(&___nl__im__32);
#line 340
c_rt_lib0move(&___nl__im__30, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__31));
#line 340
//clear ___nl__int__31;
#line 340
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(83));
#line 340
if(___nl__bool__29){ goto label_103;}
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
c_rt_lib0clear(&___nl__im__24);
#line 340
//clear ___nl__bool__25;
#line 340
c_rt_lib0clear(&___nl__im__26);
#line 340
c_rt_lib0clear(&___nl__im__28);
#line 340
//clear ___nl__bool__29;
#line 340
return ___nl__im__30;
#line 340
label_103:
;
#line 340
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__30, ___get_global_string_const(83)));
#line 341
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1126));
#line 341
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(4, ___get_global_string_const(1112), ___nl__im__1, ___get_global_string_const(1113), ___nl__im__24, ___get_global_string_const(1114), ___nl__im__28, ___get_global_string_const(568), ___nl__im__34));
#line 341
c_rt_lib0clear(&___nl__im__34);
#line 341
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1106), ___nl__im__33));
#line 341
c_rt_lib0clear(&___nl__im__33);
#line 342
goto label_134;
#line 342
label_111:
;
#line 343
c_rt_lib0move(&___nl__im__37,___get_global_string_const(1202));
#line 343
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__8));
#line 343
c_rt_lib0clear(&___nl__im__37);
#line 343
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__36));
#line 343
c_rt_lib0clear(&___nl__im__36);
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
c_rt_lib0clear(&___nl__im__26);
#line 343
c_rt_lib0clear(&___nl__im__28);
#line 343
//clear ___nl__bool__29;
#line 343
c_rt_lib0clear(&___nl__im__30);
#line 343
return ___nl__im__35;
#line 344
goto label_134;
#line 344
label_134:
;
#line 344
//clear ___nl__bool__11;
#line 344
c_rt_lib0clear(&___nl__im__13);
#line 344
c_rt_lib0clear(&___nl__im__24);
#line 344
//clear ___nl__bool__25;
#line 344
c_rt_lib0clear(&___nl__im__26);
#line 344
c_rt_lib0clear(&___nl__im__28);
#line 344
//clear ___nl__bool__29;
#line 344
c_rt_lib0clear(&___nl__im__30);
#line 344
c_rt_lib0clear(&___nl__im__35);
#line 345
goto label_381;
#line 345
label_145:
;
#line 345
c_rt_lib0move(&___nl__im__38, nast0get_bin_ops());
#line 345
___nl__bool__9 = hash0has_key(___nl__im__38, ___nl__im__6);
#line 345
c_rt_lib0clear(&___nl__im__38);
#line 345
___nl__bool__9 = !___nl__bool__9;
#line 345
if(___nl__bool__9){ goto label_284;}
#line 346
c_rt_lib0copy(&___nl__im__8, ___nl__im__6);
#line 347
c_rt_lib0move(&___nl__im__40, nast0get_bin_ops());
#line 347
c_rt_lib0move(&___nl__im__39, hash0get_value(___nl__im__40, ___nl__im__6));
#line 347
c_rt_lib0clear(&___nl__im__40);
#line 348
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1123)));
#line 348
___nl__int__42 = getIntFromImm(___nl__im__43);
#line 348
c_rt_lib0clear(&___nl__im__43);
#line 348
___nl__bool__41 = ___nl__int__42 < ___nl__int__2;
#line 348
//clear ___nl__int__42;
#line 348
if(___nl__bool__41){ goto label_173;}
#line 348
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1123)));
#line 348
___nl__int__45 = getIntFromImm(___nl__im__46);
#line 348
c_rt_lib0clear(&___nl__im__46);
#line 348
___nl__bool__41 = ___nl__int__45 == ___nl__int__2;
#line 348
//clear ___nl__int__45;
#line 348
___nl__bool__44 = !___nl__bool__41;
#line 348
if(___nl__bool__44){ goto label_171;}
#line 348
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(1124)));
#line 348
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__47, ___get_global_string_const(285));
#line 348
c_rt_lib0clear(&___nl__im__47);
#line 348
label_171:
;
#line 348
//clear ___nl__bool__44;
#line 348
label_173:
;
#line 348
___nl__bool__41 = !___nl__bool__41;
#line 348
if(___nl__bool__41){ goto label_188;}
#line 348
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
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
c_rt_lib0clear(&___nl__im__39);
#line 348
//clear ___nl__bool__41;
#line 348
return ___nl__im__48;
#line 348
goto label_188;
#line 348
label_188:
;
#line 348
//clear ___nl__bool__41;
#line 348
c_rt_lib0clear(&___nl__im__48);
#line 349
nparser_priv0eat(___ref___rec__0, ___nl__im__6);
#line 350
c_rt_lib0move(&___nl__im__50,___get_global_string_const(586));
#line 350
___nl__bool__49 = c_rt_lib0eq(___nl__im__8, ___nl__im__50);
#line 350
c_rt_lib0clear(&___nl__im__50);
#line 350
___nl__bool__49 = !___nl__bool__49;
#line 350
if(___nl__bool__49){ goto label_203;}
#line 351
c_rt_lib0move(&___nl__im__52, nparser_priv0parse_hash_key(___ref___rec__0));
#line 351
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(3, ___get_global_string_const(568), ___nl__im__8, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__52));
#line 351
c_rt_lib0clear(&___nl__im__52);
#line 351
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__51));
#line 351
c_rt_lib0clear(&___nl__im__51);
#line 352
goto label_276;
#line 352
label_203:
;
#line 352
c_rt_lib0move(&___nl__im__53,___get_global_string_const(1128));
#line 352
___nl__bool__49 = c_rt_lib0eq(___nl__im__8, ___nl__im__53);
#line 352
c_rt_lib0clear(&___nl__im__53);
#line 352
___nl__bool__49 = !___nl__bool__49;
#line 352
if(___nl__bool__49){ goto label_219;}
#line 353
c_rt_lib0move(&___nl__im__54,___get_global_string_const(538));
#line 353
nparser_priv0eat(___ref___rec__0, ___nl__im__54);
#line 353
c_rt_lib0clear(&___nl__im__54);
#line 354
c_rt_lib0move(&___nl__im__55, nparser_priv0parse_hash_key(___ref___rec__0));
#line 355
c_rt_lib0move(&___nl__im__57,___get_global_string_const(1103));
#line 355
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(3, ___get_global_string_const(568), ___nl__im__57, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__55));
#line 355
c_rt_lib0clear(&___nl__im__57);
#line 355
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__56));
#line 355
c_rt_lib0clear(&___nl__im__56);
#line 356
goto label_276;
#line 356
label_219:
;
#line 356
c_rt_lib0move(&___nl__im__58,___get_global_string_const(1127));
#line 356
___nl__bool__49 = c_rt_lib0eq(___nl__im__8, ___nl__im__58);
#line 356
c_rt_lib0clear(&___nl__im__58);
#line 356
___nl__bool__49 = !___nl__bool__49;
#line 356
if(___nl__bool__49){ goto label_235;}
#line 357
c_rt_lib0move(&___nl__im__59,___get_global_string_const(538));
#line 357
nparser_priv0eat(___ref___rec__0, ___nl__im__59);
#line 357
c_rt_lib0clear(&___nl__im__59);
#line 358
c_rt_lib0move(&___nl__im__60, nparser_priv0parse_hash_key(___ref___rec__0));
#line 359
c_rt_lib0move(&___nl__im__62,___get_global_string_const(1203));
#line 359
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_mk(3, ___get_global_string_const(568), ___nl__im__62, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__60));
#line 359
c_rt_lib0clear(&___nl__im__62);
#line 359
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__61));
#line 359
c_rt_lib0clear(&___nl__im__61);
#line 360
goto label_276;
#line 360
label_235:
;
#line 361
c_rt_lib0move(&___nl__im__64,___get_global_string_const(1115));
#line 361
___nl__bool__63 = c_rt_lib0eq(___nl__im__8, ___nl__im__64);
#line 361
c_rt_lib0clear(&___nl__im__64);
#line 361
___nl__bool__63 = !___nl__bool__63;
#line 361
if(___nl__bool__63){ goto label_243;}
#line 361
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__1));
#line 361
goto label_243;
#line 361
label_243:
;
#line 361
//clear ___nl__bool__63;
#line 362
c_rt_lib0move(&___nl__im__70, nast0get_bin_ops());
#line 362
c_rt_lib0move(&___nl__im__69, hash0get_value(___nl__im__70, ___nl__im__8));
#line 362
c_rt_lib0clear(&___nl__im__70);
#line 362
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(1123)));
#line 362
___nl__int__68 = getIntFromImm(___nl__im__71);
#line 362
c_rt_lib0clear(&___nl__im__69);
#line 362
c_rt_lib0clear(&___nl__im__71);
#line 362
c_rt_lib0move(&___nl__im__67, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__68));
#line 362
//clear ___nl__int__68;
#line 362
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__67, ___get_global_string_const(83));
#line 362
if(___nl__bool__66){ goto label_270;}
#line 362
c_rt_lib0clear(&___nl__im__1);
#line 362
//clear ___nl__int__2;
#line 362
c_rt_lib0clear(&___nl__im__3);
#line 362
c_rt_lib0clear(&___nl__im__4);
#line 362
c_rt_lib0clear(&___nl__im__6);
#line 362
c_rt_lib0clear(&___nl__im__8);
#line 362
//clear ___nl__bool__9;
#line 362
c_rt_lib0clear(&___nl__im__39);
#line 362
//clear ___nl__bool__49;
#line 362
c_rt_lib0clear(&___nl__im__55);
#line 362
c_rt_lib0clear(&___nl__im__60);
#line 362
c_rt_lib0clear(&___nl__im__65);
#line 362
//clear ___nl__bool__66;
#line 362
return ___nl__im__67;
#line 362
label_270:
;
#line 362
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__67, ___get_global_string_const(83)));
#line 363
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(3, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(568), ___nl__im__8, ___get_global_string_const(286), ___nl__im__65));
#line 363
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__72));
#line 363
c_rt_lib0clear(&___nl__im__72);
#line 364
goto label_276;
#line 364
label_276:
;
#line 364
//clear ___nl__bool__49;
#line 364
c_rt_lib0clear(&___nl__im__55);
#line 364
c_rt_lib0clear(&___nl__im__60);
#line 364
c_rt_lib0clear(&___nl__im__65);
#line 364
//clear ___nl__bool__66;
#line 364
c_rt_lib0clear(&___nl__im__67);
#line 365
goto label_381;
#line 365
label_284:
;
#line 365
c_rt_lib0move(&___nl__im__73,___get_global_string_const(325));
#line 365
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__73);
#line 365
c_rt_lib0clear(&___nl__im__73);
#line 365
___nl__bool__9 = !___nl__bool__9;
#line 365
if(___nl__bool__9){ goto label_314;}
#line 366
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1101));
#line 367
c_rt_lib0move(&___nl__im__76, nparser_priv0parse_expr(___ref___rec__0));
#line 367
___nl__bool__75 = c_rt_lib0priv_is(___nl__im__76, ___get_global_string_const(83));
#line 367
if(___nl__bool__75){ goto label_305;}
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
c_rt_lib0clear(&___nl__im__74);
#line 367
//clear ___nl__bool__75;
#line 367
return ___nl__im__76;
#line 367
label_305:
;
#line 367
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__76, ___get_global_string_const(83)));
#line 368
c_rt_lib0move(&___nl__im__77,___get_global_string_const(326));
#line 368
nparser_priv0eat(___ref___rec__0, ___nl__im__77);
#line 368
c_rt_lib0clear(&___nl__im__77);
#line 369
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_mk(3, ___get_global_string_const(568), ___nl__im__8, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__74));
#line 369
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__78));
#line 369
c_rt_lib0clear(&___nl__im__78);
#line 370
goto label_381;
#line 370
label_314:
;
#line 370
c_rt_lib0move(&___nl__im__79,___get_global_string_const(315));
#line 370
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__79);
#line 370
c_rt_lib0clear(&___nl__im__79);
#line 370
___nl__bool__9 = !___nl__bool__9;
#line 370
if(___nl__bool__9){ goto label_347;}
#line 371
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1102));
#line 372
c_rt_lib0move(&___nl__im__82, nparser_priv0parse_expr(___ref___rec__0));
#line 372
___nl__bool__81 = c_rt_lib0priv_is(___nl__im__82, ___get_global_string_const(83));
#line 372
if(___nl__bool__81){ goto label_338;}
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
c_rt_lib0clear(&___nl__im__76);
#line 372
c_rt_lib0clear(&___nl__im__80);
#line 372
//clear ___nl__bool__81;
#line 372
return ___nl__im__82;
#line 372
label_338:
;
#line 372
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__82, ___get_global_string_const(83)));
#line 373
c_rt_lib0move(&___nl__im__83,___get_global_string_const(316));
#line 373
nparser_priv0eat(___ref___rec__0, ___nl__im__83);
#line 373
c_rt_lib0clear(&___nl__im__83);
#line 374
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_mk(3, ___get_global_string_const(568), ___nl__im__8, ___get_global_string_const(285), ___nl__im__1, ___get_global_string_const(286), ___nl__im__80));
#line 374
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__84));
#line 374
c_rt_lib0clear(&___nl__im__84);
#line 375
goto label_381;
#line 375
label_347:
;
#line 375
c_rt_lib0move(&___nl__im__85,___get_global_string_const(803));
#line 375
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__85);
#line 375
c_rt_lib0clear(&___nl__im__85);
#line 375
___nl__bool__9 = !___nl__bool__9;
#line 375
if(___nl__bool__9){ goto label_355;}
#line 376
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1110), ___nl__im__1));
#line 377
goto label_381;
#line 377
label_355:
;
#line 377
c_rt_lib0move(&___nl__im__86,___get_global_string_const(200));
#line 377
___nl__bool__9 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__86);
#line 377
c_rt_lib0clear(&___nl__im__86);
#line 377
___nl__bool__9 = !___nl__bool__9;
#line 377
if(___nl__bool__9){ goto label_363;}
#line 378
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1111), ___nl__im__1));
#line 379
goto label_381;
#line 379
label_363:
;
#line 380
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__1));
#line 380
c_rt_lib0clear(&___nl__im__1);
#line 380
//clear ___nl__int__2;
#line 380
c_rt_lib0clear(&___nl__im__3);
#line 380
c_rt_lib0clear(&___nl__im__4);
#line 380
c_rt_lib0clear(&___nl__im__6);
#line 380
c_rt_lib0clear(&___nl__im__8);
#line 380
//clear ___nl__bool__9;
#line 380
c_rt_lib0clear(&___nl__im__39);
#line 380
c_rt_lib0clear(&___nl__im__74);
#line 380
//clear ___nl__bool__75;
#line 380
c_rt_lib0clear(&___nl__im__76);
#line 380
c_rt_lib0clear(&___nl__im__80);
#line 380
//clear ___nl__bool__81;
#line 380
c_rt_lib0clear(&___nl__im__82);
#line 380
return ___nl__im__87;
#line 381
goto label_381;
#line 381
label_381:
;
#line 381
//clear ___nl__bool__9;
#line 381
c_rt_lib0clear(&___nl__im__39);
#line 381
c_rt_lib0clear(&___nl__im__74);
#line 381
//clear ___nl__bool__75;
#line 381
c_rt_lib0clear(&___nl__im__76);
#line 381
c_rt_lib0clear(&___nl__im__80);
#line 381
//clear ___nl__bool__81;
#line 381
c_rt_lib0clear(&___nl__im__82);
#line 381
c_rt_lib0clear(&___nl__im__87);
#line 383
___nl__rec_ptr__90 = &((*___ref___rec__0).state0field);
#line 383
c_rt_lib0move(&___nl__im__89, ntokenizer0get_place(___nl__rec_ptr__90));
#line 383
___nl__rec_ptr__90 = NULL;
#line 383
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__4, ___get_global_string_const(742), ___nl__im__89));
#line 383
c_rt_lib0clear(&___nl__im__89);
#line 385
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 385
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__88, ___get_global_string_const(229), ___nl__im__3, ___get_global_string_const(215), ___nl__im__91));
#line 385
c_rt_lib0clear(&___nl__im__88);
#line 385
c_rt_lib0clear(&___nl__im__91);
#line 385
c_rt_lib0clear(&___nl__im__3);
#line 385
c_rt_lib0clear(&___nl__im__4);
#line 385
c_rt_lib0clear(&___nl__im__6);
#line 385
c_rt_lib0clear(&___nl__im__8);
#line 327
goto label_0;
#line 388
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(0));
#line 388
nl_die_arg(___nl__im__92);
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
bool  ___nl__bool__107 = false;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
#line 393
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 393
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 393
___nl__rec_ptr__4 = NULL;
#line 394
c_rt_lib0move(&___nl__im__6,___get_global_string_const(465));
#line 394
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 394
c_rt_lib0clear(&___nl__im__6);
#line 394
___nl__bool__5 = !___nl__bool__5;
#line 394
if(___nl__bool__5){ goto label_25;}
#line 395
c_rt_lib0move(&___nl__im__9, nparser_priv0parse_expr(___ref___rec__0));
#line 395
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(83));
#line 395
if(___nl__bool__8){ goto label_18;}
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
return ___nl__im__9;
#line 395
label_18:
;
#line 395
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(83)));
#line 396
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(1104), ___nl__im__7));
#line 397
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 397
nparser_priv0eat(___ref___rec__0, ___nl__im__10);
#line 397
c_rt_lib0clear(&___nl__im__10);
#line 398
goto label_551;
#line 398
label_25:
;
#line 398
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 398
c_rt_lib0move(&___nl__im__12,___get_global_string_const(315));
#line 398
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__11, ___nl__im__12);
#line 398
___nl__rec_ptr__11 = NULL;
#line 398
c_rt_lib0clear(&___nl__im__12);
#line 398
___nl__bool__5 = !___nl__bool__5;
#line 398
if(___nl__bool__5){ goto label_50;}
#line 399
c_rt_lib0move(&___nl__im__15, nparser_priv0parse_hash(___ref___rec__0));
#line 399
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(83));
#line 399
if(___nl__bool__14){ goto label_46;}
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
c_rt_lib0clear(&___nl__im__13);
#line 399
//clear ___nl__bool__14;
#line 399
return ___nl__im__15;
#line 399
label_46:
;
#line 399
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(83)));
#line 400
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(241), ___nl__im__13));
#line 401
goto label_551;
#line 401
label_50:
;
#line 401
___nl__rec_ptr__16 = &((*___ref___rec__0).state0field);
#line 401
c_rt_lib0move(&___nl__im__17,___get_global_string_const(325));
#line 401
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__16, ___nl__im__17);
#line 401
___nl__rec_ptr__16 = NULL;
#line 401
c_rt_lib0clear(&___nl__im__17);
#line 401
___nl__bool__5 = !___nl__bool__5;
#line 401
if(___nl__bool__5){ goto label_78;}
#line 402
c_rt_lib0move(&___nl__im__20, nparser_priv0parse_arr(___ref___rec__0));
#line 402
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(83));
#line 402
if(___nl__bool__19){ goto label_74;}
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
c_rt_lib0clear(&___nl__im__13);
#line 402
//clear ___nl__bool__14;
#line 402
c_rt_lib0clear(&___nl__im__15);
#line 402
c_rt_lib0clear(&___nl__im__18);
#line 402
//clear ___nl__bool__19;
#line 402
return ___nl__im__20;
#line 402
label_74:
;
#line 402
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(83)));
#line 403
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(240), ___nl__im__18));
#line 404
goto label_551;
#line 404
label_78:
;
#line 404
___nl__rec_ptr__21 = &((*___ref___rec__0).state0field);
#line 404
c_rt_lib0move(&___nl__im__22,___get_global_string_const(538));
#line 404
___nl__bool__5 = ntokenizer0next_is(___nl__rec_ptr__21, ___nl__im__22);
#line 404
___nl__rec_ptr__21 = NULL;
#line 404
c_rt_lib0clear(&___nl__im__22);
#line 404
___nl__bool__5 = !___nl__bool__5;
#line 404
if(___nl__bool__5){ goto label_109;}
#line 405
c_rt_lib0move(&___nl__im__25, nparser_priv0parse_variant(___ref___rec__0));
#line 405
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(83));
#line 405
if(___nl__bool__24){ goto label_105;}
#line 405
//clear ___nl__int__1;
#line 405
c_rt_lib0clear(&___nl__im__2);
#line 405
c_rt_lib0clear(&___nl__im__3);
#line 405
//clear ___nl__bool__5;
#line 405
c_rt_lib0clear(&___nl__im__7);
#line 405
//clear ___nl__bool__8;
#line 405
c_rt_lib0clear(&___nl__im__9);
#line 405
c_rt_lib0clear(&___nl__im__13);
#line 405
//clear ___nl__bool__14;
#line 405
c_rt_lib0clear(&___nl__im__15);
#line 405
c_rt_lib0clear(&___nl__im__18);
#line 405
//clear ___nl__bool__19;
#line 405
c_rt_lib0clear(&___nl__im__20);
#line 405
c_rt_lib0clear(&___nl__im__23);
#line 405
//clear ___nl__bool__24;
#line 405
return ___nl__im__25;
#line 405
label_105:
;
#line 405
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(83)));
#line 406
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(571), ___nl__im__23));
#line 407
goto label_551;
#line 407
label_109:
;
#line 407
___nl__rec_ptr__26 = &((*___ref___rec__0).state0field);
#line 407
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(1204)));
#line 407
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__26, ___nl__im__27);
#line 407
___nl__rec_ptr__26 = NULL;
#line 407
c_rt_lib0clear(&___nl__im__27);
#line 407
___nl__bool__5 = !___nl__bool__5;
#line 407
if(___nl__bool__5){ goto label_175;}
#line 408
___nl__rec_ptr__29 = &((*___ref___rec__0).state0field);
#line 408
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_none(___get_global_string_const(1204)));
#line 408
c_rt_lib0move(&___nl__im__28, ntokenizer0eat_type(___nl__rec_ptr__29, ___nl__im__30));
#line 408
___nl__rec_ptr__29 = NULL;
#line 408
c_rt_lib0clear(&___nl__im__30);
#line 410
c_rt_lib0move(&___nl__im__32, string_utils0get_integer(___nl__im__28));
#line 410
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(83));
#line 410
if(___nl__bool__33){ goto label_130;}
#line 412
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(82));
#line 412
if(___nl__bool__33){ goto label_135;}
#line 412
c_rt_lib0move(&___nl__im__34,___get_global_string_const(15));
#line 412
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__32));
#line 412
nl_die_arg(___nl__im__34);
#line 410
label_130:
;
#line 410
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(83)));
#line 410
___nl__int__35 = getIntFromImm(___nl__im__36);
#line 411
___nl__int__31 = ___nl__int__35;
#line 412
goto label_170;
#line 412
label_135:
;
#line 412
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(82)));
#line 412
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 413
c_rt_lib0move(&___nl__im__41,___get_global_string_const(1205));
#line 413
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__28));
#line 413
c_rt_lib0clear(&___nl__im__41);
#line 413
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__40));
#line 413
c_rt_lib0clear(&___nl__im__40);
#line 413
//clear ___nl__int__1;
#line 413
c_rt_lib0clear(&___nl__im__2);
#line 413
c_rt_lib0clear(&___nl__im__3);
#line 413
//clear ___nl__bool__5;
#line 413
c_rt_lib0clear(&___nl__im__7);
#line 413
//clear ___nl__bool__8;
#line 413
c_rt_lib0clear(&___nl__im__9);
#line 413
c_rt_lib0clear(&___nl__im__13);
#line 413
//clear ___nl__bool__14;
#line 413
c_rt_lib0clear(&___nl__im__15);
#line 413
c_rt_lib0clear(&___nl__im__18);
#line 413
//clear ___nl__bool__19;
#line 413
c_rt_lib0clear(&___nl__im__20);
#line 413
c_rt_lib0clear(&___nl__im__23);
#line 413
//clear ___nl__bool__24;
#line 413
c_rt_lib0clear(&___nl__im__25);
#line 413
c_rt_lib0clear(&___nl__im__28);
#line 413
//clear ___nl__int__31;
#line 413
c_rt_lib0clear(&___nl__im__32);
#line 413
//clear ___nl__bool__33;
#line 413
c_rt_lib0clear(&___nl__im__34);
#line 413
//clear ___nl__int__35;
#line 413
c_rt_lib0clear(&___nl__im__36);
#line 413
c_rt_lib0clear(&___nl__im__37);
#line 413
c_rt_lib0clear(&___nl__im__38);
#line 413
return ___nl__im__39;
#line 414
goto label_170;
#line 414
label_170:
;
#line 415
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__31));
#line 415
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(232), ___nl__im__42));
#line 415
c_rt_lib0clear(&___nl__im__42);
#line 416
goto label_551;
#line 416
label_175:
;
#line 416
___nl__rec_ptr__43 = &((*___ref___rec__0).state0field);
#line 416
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(1206)));
#line 416
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__43, ___nl__im__44);
#line 416
___nl__rec_ptr__43 = NULL;
#line 416
c_rt_lib0clear(&___nl__im__44);
#line 416
if(___nl__bool__5){ goto label_187;}
#line 416
___nl__rec_ptr__45 = &((*___ref___rec__0).state0field);
#line 416
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(414)));
#line 416
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__45, ___nl__im__46);
#line 416
___nl__rec_ptr__45 = NULL;
#line 416
c_rt_lib0clear(&___nl__im__46);
#line 416
label_187:
;
#line 416
___nl__bool__5 = !___nl__bool__5;
#line 416
if(___nl__bool__5){ goto label_253;}
#line 417
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 417
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(1, ___get_global_string_const(134), ___nl__im__48));
#line 417
c_rt_lib0clear(&___nl__im__48);
#line 418
label_193:
;
#line 418
___nl__rec_ptr__50 = &((*___ref___rec__0).state0field);
#line 418
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_none(___get_global_string_const(1206)));
#line 418
___nl__bool__49 = ntokenizer0is_type(___nl__rec_ptr__50, ___nl__im__51);
#line 418
___nl__rec_ptr__50 = NULL;
#line 418
c_rt_lib0clear(&___nl__im__51);
#line 418
___nl__bool__49 = !___nl__bool__49;
#line 418
if(___nl__bool__49){ goto label_215;}
#line 419
c_rt_lib0move(&___nl__im__52,___get_global_string_const(134));
#line 419
c_rt_lib0move(&___nl__im__52, c_rt_lib0get_ref_hash(___nl__im__47, ___nl__im__52));
#line 419
___nl__rec_ptr__54 = &((*___ref___rec__0).state0field);
#line 419
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_string_const(1206)));
#line 419
c_rt_lib0move(&___nl__im__53, ntokenizer0eat_type(___nl__rec_ptr__54, ___nl__im__55));
#line 419
___nl__rec_ptr__54 = NULL;
#line 419
c_rt_lib0clear(&___nl__im__55);
#line 419
c_rt_lib0delete(array0push(&___nl__im__52, ___nl__im__53));
#line 419
c_rt_lib0move(&___nl__string__56,___get_global_string_const(134));
#line 419
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__47, ___nl__string__56, ___nl__im__52));
#line 419
c_rt_lib0clear(&___nl__im__52);
#line 419
c_rt_lib0clear(&___nl__im__53);
#line 419
c_rt_lib0clear(&___nl__string__56);
#line 420
goto label_193;
#line 420
label_215:
;
#line 421
___nl__rec_ptr__58 = &((*___ref___rec__0).state0field);
#line 421
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_string_const(414)));
#line 421
___nl__bool__57 = ntokenizer0is_type(___nl__rec_ptr__58, ___nl__im__59);
#line 421
___nl__rec_ptr__58 = NULL;
#line 421
c_rt_lib0clear(&___nl__im__59);
#line 421
___nl__bool__57 = !___nl__bool__57;
#line 421
if(___nl__bool__57){ goto label_242;}
#line 422
c_rt_lib0move(&___nl__im__60,___get_global_string_const(134));
#line 422
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_hash(___nl__im__47, ___nl__im__60));
#line 422
___nl__rec_ptr__62 = &((*___ref___rec__0).state0field);
#line 422
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(414)));
#line 422
c_rt_lib0move(&___nl__im__61, ntokenizer0eat_type(___nl__rec_ptr__62, ___nl__im__63));
#line 422
___nl__rec_ptr__62 = NULL;
#line 422
c_rt_lib0clear(&___nl__im__63);
#line 422
c_rt_lib0delete(array0push(&___nl__im__60, ___nl__im__61));
#line 422
c_rt_lib0move(&___nl__string__64,___get_global_string_const(134));
#line 422
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__47, ___nl__string__64, ___nl__im__60));
#line 422
c_rt_lib0clear(&___nl__im__60);
#line 422
c_rt_lib0clear(&___nl__im__61);
#line 422
c_rt_lib0clear(&___nl__string__64);
#line 423
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_string_const(742)));
#line 423
c_rt_lib0copy(&___nl__im__66, ___nl__im__65);
#line 423
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_string_const(1142), ___nl__im__66);
#line 423
c_rt_lib0clear(&___nl__im__65);
#line 423
c_rt_lib0clear(&___nl__im__66);
#line 424
goto label_249;
#line 424
label_242:
;
#line 425
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_string_const(1141)));
#line 425
c_rt_lib0copy(&___nl__im__68, ___nl__im__67);
#line 425
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_string_const(1142), ___nl__im__68);
#line 425
c_rt_lib0clear(&___nl__im__67);
#line 425
c_rt_lib0clear(&___nl__im__68);
#line 426
goto label_249;
#line 426
label_249:
;
#line 426
//clear ___nl__bool__57;
#line 427
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(414), ___nl__im__47));
#line 428
goto label_551;
#line 428
label_253:
;
#line 428
___nl__rec_ptr__69 = &((*___ref___rec__0).state0field);
#line 428
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 428
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__69, ___nl__im__70);
#line 428
___nl__rec_ptr__69 = NULL;
#line 428
c_rt_lib0clear(&___nl__im__70);
#line 428
___nl__bool__5 = !___nl__bool__5;
#line 428
if(___nl__bool__5){ goto label_297;}
#line 429
c_rt_lib0move(&___nl__im__72, nparser_priv0parse_label(___ref___rec__0));
#line 429
___nl__bool__71 = c_rt_lib0priv_is(___nl__im__72, ___get_global_string_const(83));
#line 429
if(___nl__bool__71){ goto label_294;}
#line 429
//clear ___nl__int__1;
#line 429
c_rt_lib0clear(&___nl__im__2);
#line 429
c_rt_lib0clear(&___nl__im__3);
#line 429
//clear ___nl__bool__5;
#line 429
c_rt_lib0clear(&___nl__im__7);
#line 429
//clear ___nl__bool__8;
#line 429
c_rt_lib0clear(&___nl__im__9);
#line 429
c_rt_lib0clear(&___nl__im__13);
#line 429
//clear ___nl__bool__14;
#line 429
c_rt_lib0clear(&___nl__im__15);
#line 429
c_rt_lib0clear(&___nl__im__18);
#line 429
//clear ___nl__bool__19;
#line 429
c_rt_lib0clear(&___nl__im__20);
#line 429
c_rt_lib0clear(&___nl__im__23);
#line 429
//clear ___nl__bool__24;
#line 429
c_rt_lib0clear(&___nl__im__25);
#line 429
c_rt_lib0clear(&___nl__im__28);
#line 429
//clear ___nl__int__31;
#line 429
c_rt_lib0clear(&___nl__im__32);
#line 429
//clear ___nl__bool__33;
#line 429
c_rt_lib0clear(&___nl__im__34);
#line 429
//clear ___nl__int__35;
#line 429
c_rt_lib0clear(&___nl__im__36);
#line 429
c_rt_lib0clear(&___nl__im__37);
#line 429
c_rt_lib0clear(&___nl__im__38);
#line 429
c_rt_lib0clear(&___nl__im__39);
#line 429
c_rt_lib0clear(&___nl__im__47);
#line 429
//clear ___nl__bool__49;
#line 429
//clear ___nl__bool__71;
#line 429
return ___nl__im__72;
#line 429
label_294:
;
#line 429
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__72, ___get_global_string_const(83)));
#line 430
goto label_551;
#line 430
label_297:
;
#line 430
___nl__rec_ptr__74 = &((*___ref___rec__0).state0field);
#line 430
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_none(___get_global_string_const(1207)));
#line 430
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__74, ___nl__im__75);
#line 430
___nl__rec_ptr__74 = NULL;
#line 430
c_rt_lib0clear(&___nl__im__75);
#line 430
___nl__bool__73 = !___nl__bool__5;
#line 430
if(___nl__bool__73){ goto label_312;}
#line 430
c_rt_lib0move(&___nl__im__76, nast0get_unary_ops());
#line 431
___nl__rec_ptr__78 = &((*___ref___rec__0).state0field);
#line 431
c_rt_lib0move(&___nl__im__77, ntokenizer0get_token(___nl__rec_ptr__78));
#line 431
___nl__rec_ptr__78 = NULL;
#line 431
___nl__bool__5 = hash0has_key(___nl__im__76, ___nl__im__77);
#line 431
c_rt_lib0clear(&___nl__im__76);
#line 431
c_rt_lib0clear(&___nl__im__77);
#line 431
label_312:
;
#line 431
//clear ___nl__bool__73;
#line 431
___nl__bool__5 = !___nl__bool__5;
#line 431
if(___nl__bool__5){ goto label_416;}
#line 432
___nl__rec_ptr__80 = &((*___ref___rec__0).state0field);
#line 432
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_string_const(1207)));
#line 432
c_rt_lib0move(&___nl__im__79, ntokenizer0eat_type(___nl__rec_ptr__80, ___nl__im__81));
#line 432
___nl__rec_ptr__80 = NULL;
#line 432
c_rt_lib0clear(&___nl__im__81);
#line 434
c_rt_lib0move(&___nl__im__84,___get_global_string_const(309));
#line 434
___nl__bool__83 = c_rt_lib0eq(___nl__im__79, ___nl__im__84);
#line 434
c_rt_lib0clear(&___nl__im__84);
#line 434
___nl__bool__83 = !___nl__bool__83;
#line 434
if(___nl__bool__83){ goto label_341;}
#line 435
___nl__rec_ptr__86 = &((*___ref___rec__0).state0field);
#line 435
c_rt_lib0move(&___nl__im__85, ntokenizer0get_place(___nl__rec_ptr__86));
#line 435
___nl__rec_ptr__86 = NULL;
#line 436
c_rt_lib0move(&___nl__im__88, nparser_priv0parse_fun_label(___ref___rec__0));
#line 436
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_arg(___get_global_string_const(1109), ___nl__im__88));
#line 436
c_rt_lib0clear(&___nl__im__88);
#line 437
___nl__rec_ptr__90 = &((*___ref___rec__0).state0field);
#line 437
c_rt_lib0move(&___nl__im__89, ntokenizer0get_place(___nl__rec_ptr__90));
#line 437
___nl__rec_ptr__90 = NULL;
#line 439
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__85, ___get_global_string_const(742), ___nl__im__89));
#line 444
c_rt_lib0move(&___nl__im__92, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 444
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__91, ___get_global_string_const(229), ___nl__im__87, ___get_global_string_const(215), ___nl__im__92));
#line 444
c_rt_lib0clear(&___nl__im__91);
#line 444
c_rt_lib0clear(&___nl__im__92);
#line 446
goto label_405;
#line 446
label_341:
;
#line 447
c_rt_lib0move(&___nl__im__97, nast0get_unary_ops());
#line 447
c_rt_lib0move(&___nl__im__96, hash0get_value(___nl__im__97, ___nl__im__79));
#line 447
c_rt_lib0clear(&___nl__im__97);
#line 447
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_string_const(1123)));
#line 447
___nl__int__95 = getIntFromImm(___nl__im__98);
#line 447
c_rt_lib0clear(&___nl__im__96);
#line 447
c_rt_lib0clear(&___nl__im__98);
#line 447
c_rt_lib0move(&___nl__im__94, nparser_priv0parse_expr_rec(___ref___rec__0, ___nl__int__95));
#line 447
//clear ___nl__int__95;
#line 447
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__94, ___get_global_string_const(83));
#line 447
if(___nl__bool__93){ goto label_391;}
#line 447
//clear ___nl__int__1;
#line 447
c_rt_lib0clear(&___nl__im__2);
#line 447
c_rt_lib0clear(&___nl__im__3);
#line 447
//clear ___nl__bool__5;
#line 447
c_rt_lib0clear(&___nl__im__7);
#line 447
//clear ___nl__bool__8;
#line 447
c_rt_lib0clear(&___nl__im__9);
#line 447
c_rt_lib0clear(&___nl__im__13);
#line 447
//clear ___nl__bool__14;
#line 447
c_rt_lib0clear(&___nl__im__15);
#line 447
c_rt_lib0clear(&___nl__im__18);
#line 447
//clear ___nl__bool__19;
#line 447
c_rt_lib0clear(&___nl__im__20);
#line 447
c_rt_lib0clear(&___nl__im__23);
#line 447
//clear ___nl__bool__24;
#line 447
c_rt_lib0clear(&___nl__im__25);
#line 447
c_rt_lib0clear(&___nl__im__28);
#line 447
//clear ___nl__int__31;
#line 447
c_rt_lib0clear(&___nl__im__32);
#line 447
//clear ___nl__bool__33;
#line 447
c_rt_lib0clear(&___nl__im__34);
#line 447
//clear ___nl__int__35;
#line 447
c_rt_lib0clear(&___nl__im__36);
#line 447
c_rt_lib0clear(&___nl__im__37);
#line 447
c_rt_lib0clear(&___nl__im__38);
#line 447
c_rt_lib0clear(&___nl__im__39);
#line 447
c_rt_lib0clear(&___nl__im__47);
#line 447
//clear ___nl__bool__49;
#line 447
//clear ___nl__bool__71;
#line 447
c_rt_lib0clear(&___nl__im__72);
#line 447
c_rt_lib0clear(&___nl__im__79);
#line 447
c_rt_lib0clear(&___nl__im__82);
#line 447
//clear ___nl__bool__83;
#line 447
c_rt_lib0clear(&___nl__im__85);
#line 447
c_rt_lib0clear(&___nl__im__87);
#line 447
c_rt_lib0clear(&___nl__im__89);
#line 447
//clear ___nl__bool__93;
#line 447
return ___nl__im__94;
#line 447
label_391:
;
#line 447
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__94, ___get_global_string_const(83)));
#line 448
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(229)));
#line 448
___nl__bool__99 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(1108));
#line 448
c_rt_lib0clear(&___nl__im__100);
#line 448
___nl__bool__99 = !___nl__bool__99;
#line 448
if(___nl__bool__99){ goto label_402;}
#line 448
c_rt_lib0move(&___nl__im__101,___get_global_string_const(1208));
#line 448
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__101));
#line 448
c_rt_lib0clear(&___nl__im__101);
#line 448
goto label_402;
#line 448
label_402:
;
#line 448
//clear ___nl__bool__99;
#line 449
goto label_405;
#line 449
label_405:
;
#line 449
//clear ___nl__bool__83;
#line 449
c_rt_lib0clear(&___nl__im__85);
#line 449
c_rt_lib0clear(&___nl__im__87);
#line 449
c_rt_lib0clear(&___nl__im__89);
#line 449
//clear ___nl__bool__93;
#line 449
c_rt_lib0clear(&___nl__im__94);
#line 450
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_mk(2, ___get_global_string_const(568), ___nl__im__79, ___get_global_string_const(234), ___nl__im__82));
#line 450
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(1108), ___nl__im__102));
#line 450
c_rt_lib0clear(&___nl__im__102);
#line 451
goto label_551;
#line 451
label_416:
;
#line 451
___nl__rec_ptr__103 = &((*___ref___rec__0).state0field);
#line 451
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_none(___get_global_string_const(1209)));
#line 451
___nl__bool__5 = ntokenizer0is_type(___nl__rec_ptr__103, ___nl__im__104);
#line 451
___nl__rec_ptr__103 = NULL;
#line 451
c_rt_lib0clear(&___nl__im__104);
#line 451
___nl__bool__5 = !___nl__bool__5;
#line 451
if(___nl__bool__5){ goto label_502;}
#line 452
c_rt_lib0move(&___nl__im__106,___get_global_string_const(581));
#line 452
___nl__bool__105 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__106);
#line 452
c_rt_lib0clear(&___nl__im__106);
#line 452
___nl__bool__105 = !___nl__bool__105;
#line 452
if(___nl__bool__105){ goto label_435;}
#line 453
___nl__bool__107 = true;
#line 453
c_rt_lib0move(&___nl__im__108, c_rt_lib0bool_to_nl_native(___nl__bool__107));
#line 453
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(33), ___nl__im__108));
#line 453
//clear ___nl__bool__107;
#line 453
c_rt_lib0clear(&___nl__im__108);
#line 454
goto label_497;
#line 454
label_435:
;
#line 454
c_rt_lib0move(&___nl__im__109,___get_global_string_const(580));
#line 454
___nl__bool__105 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__109);
#line 454
c_rt_lib0clear(&___nl__im__109);
#line 454
___nl__bool__105 = !___nl__bool__105;
#line 454
if(___nl__bool__105){ goto label_447;}
#line 455
___nl__bool__110 = false;
#line 455
c_rt_lib0move(&___nl__im__111, c_rt_lib0bool_to_nl_native(___nl__bool__110));
#line 455
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(33), ___nl__im__111));
#line 455
//clear ___nl__bool__110;
#line 455
c_rt_lib0clear(&___nl__im__111);
#line 456
goto label_497;
#line 456
label_447:
;
#line 457
c_rt_lib0move(&___nl__im__114,___get_global_string_const(1210));
#line 457
c_rt_lib0move(&___nl__im__115, string0lf());
#line 457
c_rt_lib0move(&___nl__im__113, c_rt_lib0concat_new(___nl__im__114, ___nl__im__115));
#line 457
c_rt_lib0clear(&___nl__im__114);
#line 457
c_rt_lib0clear(&___nl__im__115);
#line 457
___nl__rec_ptr__117 = &((*___ref___rec__0).state0field);
#line 457
c_rt_lib0move(&___nl__im__116, ntokenizer0info(___nl__rec_ptr__117));
#line 457
___nl__rec_ptr__117 = NULL;
#line 457
c_rt_lib0move(&___nl__im__112, c_rt_lib0concat_new(___nl__im__113, ___nl__im__116));
#line 457
c_rt_lib0clear(&___nl__im__113);
#line 457
c_rt_lib0clear(&___nl__im__116);
#line 458
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__112));
#line 459
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__112));
#line 459
//clear ___nl__int__1;
#line 459
c_rt_lib0clear(&___nl__im__2);
#line 459
c_rt_lib0clear(&___nl__im__3);
#line 459
//clear ___nl__bool__5;
#line 459
c_rt_lib0clear(&___nl__im__7);
#line 459
//clear ___nl__bool__8;
#line 459
c_rt_lib0clear(&___nl__im__9);
#line 459
c_rt_lib0clear(&___nl__im__13);
#line 459
//clear ___nl__bool__14;
#line 459
c_rt_lib0clear(&___nl__im__15);
#line 459
c_rt_lib0clear(&___nl__im__18);
#line 459
//clear ___nl__bool__19;
#line 459
c_rt_lib0clear(&___nl__im__20);
#line 459
c_rt_lib0clear(&___nl__im__23);
#line 459
//clear ___nl__bool__24;
#line 459
c_rt_lib0clear(&___nl__im__25);
#line 459
c_rt_lib0clear(&___nl__im__28);
#line 459
//clear ___nl__int__31;
#line 459
c_rt_lib0clear(&___nl__im__32);
#line 459
//clear ___nl__bool__33;
#line 459
c_rt_lib0clear(&___nl__im__34);
#line 459
//clear ___nl__int__35;
#line 459
c_rt_lib0clear(&___nl__im__36);
#line 459
c_rt_lib0clear(&___nl__im__37);
#line 459
c_rt_lib0clear(&___nl__im__38);
#line 459
c_rt_lib0clear(&___nl__im__39);
#line 459
c_rt_lib0clear(&___nl__im__47);
#line 459
//clear ___nl__bool__49;
#line 459
//clear ___nl__bool__71;
#line 459
c_rt_lib0clear(&___nl__im__72);
#line 459
c_rt_lib0clear(&___nl__im__79);
#line 459
c_rt_lib0clear(&___nl__im__82);
#line 459
//clear ___nl__bool__105;
#line 459
c_rt_lib0clear(&___nl__im__112);
#line 459
return ___nl__im__118;
#line 460
goto label_497;
#line 460
label_497:
;
#line 460
//clear ___nl__bool__105;
#line 460
c_rt_lib0clear(&___nl__im__112);
#line 460
c_rt_lib0clear(&___nl__im__118);
#line 461
goto label_551;
#line 461
label_502:
;
#line 462
c_rt_lib0move(&___nl__im__121,___get_global_string_const(1211));
#line 462
c_rt_lib0move(&___nl__im__122, string0lf());
#line 462
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__122));
#line 462
c_rt_lib0clear(&___nl__im__121);
#line 462
c_rt_lib0clear(&___nl__im__122);
#line 462
___nl__rec_ptr__124 = &((*___ref___rec__0).state0field);
#line 462
c_rt_lib0move(&___nl__im__123, ntokenizer0info(___nl__rec_ptr__124));
#line 462
___nl__rec_ptr__124 = NULL;
#line 462
c_rt_lib0move(&___nl__im__119, c_rt_lib0concat_new(___nl__im__120, ___nl__im__123));
#line 462
c_rt_lib0clear(&___nl__im__120);
#line 462
c_rt_lib0clear(&___nl__im__123);
#line 463
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__119));
#line 464
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__119));
#line 464
//clear ___nl__int__1;
#line 464
c_rt_lib0clear(&___nl__im__2);
#line 464
c_rt_lib0clear(&___nl__im__3);
#line 464
//clear ___nl__bool__5;
#line 464
c_rt_lib0clear(&___nl__im__7);
#line 464
//clear ___nl__bool__8;
#line 464
c_rt_lib0clear(&___nl__im__9);
#line 464
c_rt_lib0clear(&___nl__im__13);
#line 464
//clear ___nl__bool__14;
#line 464
c_rt_lib0clear(&___nl__im__15);
#line 464
c_rt_lib0clear(&___nl__im__18);
#line 464
//clear ___nl__bool__19;
#line 464
c_rt_lib0clear(&___nl__im__20);
#line 464
c_rt_lib0clear(&___nl__im__23);
#line 464
//clear ___nl__bool__24;
#line 464
c_rt_lib0clear(&___nl__im__25);
#line 464
c_rt_lib0clear(&___nl__im__28);
#line 464
//clear ___nl__int__31;
#line 464
c_rt_lib0clear(&___nl__im__32);
#line 464
//clear ___nl__bool__33;
#line 464
c_rt_lib0clear(&___nl__im__34);
#line 464
//clear ___nl__int__35;
#line 464
c_rt_lib0clear(&___nl__im__36);
#line 464
c_rt_lib0clear(&___nl__im__37);
#line 464
c_rt_lib0clear(&___nl__im__38);
#line 464
c_rt_lib0clear(&___nl__im__39);
#line 464
c_rt_lib0clear(&___nl__im__47);
#line 464
//clear ___nl__bool__49;
#line 464
//clear ___nl__bool__71;
#line 464
c_rt_lib0clear(&___nl__im__72);
#line 464
c_rt_lib0clear(&___nl__im__79);
#line 464
c_rt_lib0clear(&___nl__im__82);
#line 464
c_rt_lib0clear(&___nl__im__119);
#line 464
return ___nl__im__125;
#line 465
goto label_551;
#line 465
label_551:
;
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
c_rt_lib0clear(&___nl__im__119);
#line 465
c_rt_lib0clear(&___nl__im__125);
#line 467
___nl__rec_ptr__129 = &((*___ref___rec__0).state0field);
#line 467
c_rt_lib0move(&___nl__im__128, ntokenizer0get_place(___nl__rec_ptr__129));
#line 467
___nl__rec_ptr__129 = NULL;
#line 467
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__3, ___get_global_string_const(742), ___nl__im__128));
#line 467
c_rt_lib0clear(&___nl__im__128);
#line 469
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 469
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__127, ___get_global_string_const(229), ___nl__im__2, ___get_global_string_const(215), ___nl__im__130));
#line 469
c_rt_lib0clear(&___nl__im__127);
#line 469
c_rt_lib0clear(&___nl__im__130);
#line 471
c_rt_lib0move(&___nl__im__131, nparser_priv0parse_expr_rec_left(___ref___rec__0, ___nl__im__126, ___nl__int__1));
#line 471
//clear ___nl__int__1;
#line 471
c_rt_lib0clear(&___nl__im__2);
#line 471
c_rt_lib0clear(&___nl__im__3);
#line 471
c_rt_lib0clear(&___nl__im__126);
#line 471
return ___nl__im__131;
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
#line 477
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 477
c_rt_lib0move(&___nl__im__3, ntokenizer0get_place(___nl__rec_ptr__4));
#line 477
___nl__rec_ptr__4 = NULL;
#line 478
___nl__rec_ptr__6 = &((*___ref___rec__0).state0field);
#line 478
c_rt_lib0move(&___nl__im__5, ntokenizer0get_place(___nl__rec_ptr__6));
#line 478
___nl__rec_ptr__6 = NULL;
#line 478
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__3, ___get_global_string_const(742), ___nl__im__5));
#line 478
c_rt_lib0clear(&___nl__im__3);
#line 478
c_rt_lib0clear(&___nl__im__5);
#line 480
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(1085)));
#line 481
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 481
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(231), ___nl__im__2, ___get_global_string_const(229), ___nl__im__7, ___get_global_string_const(215), ___nl__im__8));
#line 481
c_rt_lib0clear(&___nl__im__2);
#line 481
c_rt_lib0clear(&___nl__im__7);
#line 481
c_rt_lib0clear(&___nl__im__8);
#line 481
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
#line 486
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 486
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 486
___nl__rec_ptr__2 = NULL;
#line 486
___nl__bool__1 = !___nl__bool__1;
#line 486
if(___nl__bool__1){ goto label_13;}
#line 487
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 487
c_rt_lib0move(&___nl__im__4, ntokenizer0eat_text(___nl__rec_ptr__5));
#line 487
___nl__rec_ptr__5 = NULL;
#line 487
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__4));
#line 487
c_rt_lib0clear(&___nl__im__4);
#line 487
//clear ___nl__bool__1;
#line 487
return ___nl__im__3;
#line 488
goto label_24;
#line 488
label_13:
;
#line 489
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1212));
#line 489
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__6));
#line 489
c_rt_lib0clear(&___nl__im__6);
#line 490
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1212));
#line 490
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__8));
#line 490
c_rt_lib0clear(&___nl__im__8);
#line 490
//clear ___nl__bool__1;
#line 490
c_rt_lib0clear(&___nl__im__3);
#line 490
return ___nl__im__7;
#line 491
goto label_24;
#line 491
label_24:
;
#line 491
//clear ___nl__bool__1;
#line 491
c_rt_lib0clear(&___nl__im__3);
#line 491
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
#line 495
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 495
___nl__bool__1 = ntokenizer0is_text(___nl__rec_ptr__2);
#line 495
___nl__rec_ptr__2 = NULL;
#line 495
___nl__bool__1 = !___nl__bool__1;
#line 495
if(___nl__bool__1){ goto label_11;}
#line 496
___nl__rec_ptr__4 = &((*___ref___rec__0).state0field);
#line 496
c_rt_lib0move(&___nl__im__3, ntokenizer0eat_text(___nl__rec_ptr__4));
#line 496
___nl__rec_ptr__4 = NULL;
#line 496
//clear ___nl__bool__1;
#line 496
return ___nl__im__3;
#line 497
goto label_20;
#line 497
label_11:
;
#line 498
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1212));
#line 498
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__5));
#line 498
c_rt_lib0clear(&___nl__im__5);
#line 499
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 499
//clear ___nl__bool__1;
#line 499
c_rt_lib0clear(&___nl__im__3);
#line 499
return ___nl__im__6;
#line 500
goto label_20;
#line 500
label_20:
;
#line 500
//clear ___nl__bool__1;
#line 500
c_rt_lib0clear(&___nl__im__3);
#line 500
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
#line 504
c_rt_lib0move(&___nl__im__1,___get_global_string_const(538));
#line 504
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 504
c_rt_lib0clear(&___nl__im__1);
#line 505
c_rt_lib0move(&___nl__im__2, nparser_priv0parse_variant_label(___ref___rec__0));
#line 506
c_rt_lib0move(&___nl__im__3, nparser_priv0get_value_nop(___ref___rec__0));
#line 507
c_rt_lib0move(&___nl__im__5,___get_global_string_const(465));
#line 507
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 507
c_rt_lib0clear(&___nl__im__5);
#line 507
___nl__bool__4 = !___nl__bool__4;
#line 507
if(___nl__bool__4){ goto label_24;}
#line 508
c_rt_lib0move(&___nl__im__7, nparser_priv0parse_expr(___ref___rec__0));
#line 508
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(83));
#line 508
if(___nl__bool__6){ goto label_18;}
#line 508
c_rt_lib0clear(&___nl__im__2);
#line 508
c_rt_lib0clear(&___nl__im__3);
#line 508
//clear ___nl__bool__4;
#line 508
//clear ___nl__bool__6;
#line 508
return ___nl__im__7;
#line 508
label_18:
;
#line 508
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(83)));
#line 509
c_rt_lib0move(&___nl__im__8,___get_global_string_const(331));
#line 509
nparser_priv0eat(___ref___rec__0, ___nl__im__8);
#line 509
c_rt_lib0clear(&___nl__im__8);
#line 510
goto label_27;
#line 510
label_24:
;
#line 511
c_rt_lib0move(&___nl__im__3, nparser_priv0get_value_nop(___ref___rec__0));
#line 512
goto label_27;
#line 512
label_27:
;
#line 512
//clear ___nl__bool__4;
#line 512
//clear ___nl__bool__6;
#line 512
c_rt_lib0clear(&___nl__im__7);
#line 513
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__2, ___get_global_string_const(515), ___nl__im__3));
#line 513
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__10));
#line 513
c_rt_lib0clear(&___nl__im__10);
#line 513
c_rt_lib0clear(&___nl__im__2);
#line 513
c_rt_lib0clear(&___nl__im__3);
#line 513
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
#line 517
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(229)));
#line 517
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(515));
#line 517
c_rt_lib0clear(&___nl__im__3);
#line 517
___nl__bool__2 = !___nl__bool__2;
#line 517
if(___nl__bool__2){ goto label_9;}
#line 518
c_rt_lib0clear(&___nl__im__1);
#line 518
//clear ___nl__bool__2;
#line 518
return NULL;
#line 519
goto label_78;
#line 519
label_9:
;
#line 519
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(229)));
#line 519
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(245));
#line 519
c_rt_lib0clear(&___nl__im__4);
#line 519
___nl__bool__2 = !___nl__bool__2;
#line 519
if(___nl__bool__2){ goto label_60;}
#line 520
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(229)));
#line 520
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(229)));
#line 520
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(245)));
#line 520
c_rt_lib0clear(&___nl__im__6);
#line 520
c_rt_lib0clear(&___nl__im__7);
#line 521
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(568)));
#line 521
c_rt_lib0move(&___nl__im__10,___get_global_string_const(586));
#line 521
___nl__bool__8 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 521
c_rt_lib0clear(&___nl__im__9);
#line 521
c_rt_lib0clear(&___nl__im__10);
#line 521
if(___nl__bool__8){ goto label_31;}
#line 521
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(568)));
#line 521
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1101));
#line 521
___nl__bool__8 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 521
c_rt_lib0clear(&___nl__im__11);
#line 521
c_rt_lib0clear(&___nl__im__12);
#line 521
label_31:
;
#line 521
if(___nl__bool__8){ goto label_38;}
#line 521
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(568)));
#line 521
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1102));
#line 521
___nl__bool__8 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 521
c_rt_lib0clear(&___nl__im__13);
#line 521
c_rt_lib0clear(&___nl__im__14);
#line 521
label_38:
;
#line 521
if(___nl__bool__8){ goto label_45;}
#line 521
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(568)));
#line 521
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1103));
#line 521
___nl__bool__8 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 521
c_rt_lib0clear(&___nl__im__15);
#line 521
c_rt_lib0clear(&___nl__im__16);
#line 521
label_45:
;
#line 521
___nl__bool__8 = !___nl__bool__8;
#line 521
if(___nl__bool__8){ goto label_57;}
#line 522
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(285)));
#line 522
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__17));
#line 522
c_rt_lib0clear(&___nl__im__17);
#line 523
c_rt_lib0clear(&___nl__im__1);
#line 523
//clear ___nl__bool__2;
#line 523
c_rt_lib0clear(&___nl__im__5);
#line 523
//clear ___nl__bool__8;
#line 523
return NULL;
#line 524
goto label_57;
#line 524
label_57:
;
#line 524
//clear ___nl__bool__8;
#line 525
goto label_78;
#line 525
label_60:
;
#line 525
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(229)));
#line 525
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(1104));
#line 525
c_rt_lib0clear(&___nl__im__18);
#line 525
___nl__bool__2 = !___nl__bool__2;
#line 525
if(___nl__bool__2){ goto label_78;}
#line 526
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(229)));
#line 526
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(229)));
#line 526
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(1104)));
#line 526
c_rt_lib0clear(&___nl__im__20);
#line 526
c_rt_lib0clear(&___nl__im__21);
#line 526
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___rec__0, ___nl__im__19));
#line 526
c_rt_lib0clear(&___nl__im__19);
#line 527
c_rt_lib0clear(&___nl__im__1);
#line 527
//clear ___nl__bool__2;
#line 527
c_rt_lib0clear(&___nl__im__5);
#line 527
return NULL;
#line 528
goto label_78;
#line 528
label_78:
;
#line 528
//clear ___nl__bool__2;
#line 528
c_rt_lib0clear(&___nl__im__5);
#line 529
c_rt_lib0move(&___nl__im__22,___get_global_string_const(1213));
#line 529
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__22));
#line 529
c_rt_lib0clear(&___nl__im__22);
#line 529
c_rt_lib0clear(&___nl__im__1);
#line 529
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
#line 533
c_rt_lib0move(&___nl__im__1,___get_global_string_const(538));
#line 533
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 533
c_rt_lib0clear(&___nl__im__1);
#line 534
c_rt_lib0move(&___nl__im__3, nparser_priv0parse_variant_label(___ref___rec__0));
#line 534
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 534
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(229), ___nl__im__4));
#line 534
c_rt_lib0clear(&___nl__im__3);
#line 534
c_rt_lib0clear(&___nl__im__4);
#line 535
c_rt_lib0move(&___nl__im__6,___get_global_string_const(465));
#line 535
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 535
c_rt_lib0clear(&___nl__im__6);
#line 535
___nl__bool__5 = !___nl__bool__5;
#line 535
if(___nl__bool__5){ goto label_51;}
#line 536
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 536
c_rt_lib0move(&___nl__im__9,___get_global_string_const(515));
#line 536
___nl__bool__7 = ntokenizer0next_is(___nl__rec_ptr__8, ___nl__im__9);
#line 536
___nl__rec_ptr__8 = NULL;
#line 536
c_rt_lib0clear(&___nl__im__9);
#line 536
___nl__bool__7 = !___nl__bool__7;
#line 536
if(___nl__bool__7){ goto label_32;}
#line 537
c_rt_lib0move(&___nl__im__12, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 537
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 537
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(2, ___get_global_string_const(501), ___nl__im__12, ___get_global_string_const(277), ___nl__im__13));
#line 537
c_rt_lib0clear(&___nl__im__12);
#line 537
c_rt_lib0clear(&___nl__im__13);
#line 537
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__11));
#line 537
c_rt_lib0clear(&___nl__im__11);
#line 537
c_rt_lib0copy(&___nl__im__14, ___nl__im__10);
#line 537
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(229), ___nl__im__14);
#line 537
c_rt_lib0clear(&___nl__im__10);
#line 537
c_rt_lib0clear(&___nl__im__14);
#line 538
goto label_45;
#line 538
label_32:
;
#line 539
c_rt_lib0move(&___nl__im__17, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 539
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 539
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_string_const(501), ___nl__im__17, ___get_global_string_const(277), ___nl__im__18));
#line 539
c_rt_lib0clear(&___nl__im__17);
#line 539
c_rt_lib0clear(&___nl__im__18);
#line 539
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__16));
#line 539
c_rt_lib0clear(&___nl__im__16);
#line 539
c_rt_lib0copy(&___nl__im__19, ___nl__im__15);
#line 539
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(229), ___nl__im__19);
#line 539
c_rt_lib0clear(&___nl__im__15);
#line 539
c_rt_lib0clear(&___nl__im__19);
#line 540
goto label_45;
#line 540
label_45:
;
#line 540
//clear ___nl__bool__7;
#line 541
c_rt_lib0move(&___nl__im__20,___get_global_string_const(331));
#line 541
nparser_priv0eat(___ref___rec__0, ___nl__im__20);
#line 541
c_rt_lib0clear(&___nl__im__20);
#line 542
goto label_51;
#line 542
label_51:
;
#line 542
//clear ___nl__bool__5;
#line 543
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
#line 547
c_rt_lib0move(&___nl__im__1,___get_global_string_const(515));
#line 547
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 547
c_rt_lib0clear(&___nl__im__1);
#line 548
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 548
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 548
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 548
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 548
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(215), ___nl__im__4, ___get_global_string_const(503), ___nl__im__5, ___get_global_string_const(229), ___nl__im__6));
#line 548
c_rt_lib0clear(&___nl__im__3);
#line 548
c_rt_lib0clear(&___nl__im__4);
#line 548
c_rt_lib0clear(&___nl__im__5);
#line 548
c_rt_lib0clear(&___nl__im__6);
#line 549
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 549
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 549
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 549
___nl__rec_ptr__8 = NULL;
#line 549
c_rt_lib0clear(&___nl__im__9);
#line 549
___nl__bool__7 = !___nl__bool__7;
#line 549
if(___nl__bool__7){ goto label_29;}
#line 550
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 550
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 550
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 550
___nl__rec_ptr__11 = NULL;
#line 550
c_rt_lib0clear(&___nl__im__12);
#line 550
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 550
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__13);
#line 550
c_rt_lib0clear(&___nl__im__10);
#line 550
c_rt_lib0clear(&___nl__im__13);
#line 551
goto label_34;
#line 551
label_29:
;
#line 552
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1214));
#line 552
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 552
c_rt_lib0clear(&___nl__im__14);
#line 553
goto label_34;
#line 553
label_34:
;
#line 553
//clear ___nl__bool__7;
#line 554
c_rt_lib0move(&___nl__im__16,___get_global_string_const(538));
#line 554
___nl__bool__15 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__16);
#line 554
c_rt_lib0clear(&___nl__im__16);
#line 554
___nl__bool__15 = !___nl__bool__15;
#line 554
if(___nl__bool__15){ goto label_85;}
#line 555
c_rt_lib0move(&___nl__im__19, nparser_priv0parse_type(___ref___rec__0));
#line 555
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(83));
#line 555
if(___nl__bool__18){ goto label_49;}
#line 555
c_rt_lib0clear(&___nl__im__2);
#line 555
//clear ___nl__bool__15;
#line 555
c_rt_lib0clear(&___nl__im__17);
#line 555
//clear ___nl__bool__18;
#line 555
return ___nl__im__19;
#line 555
label_49:
;
#line 555
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(83)));
#line 556
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(215), ___nl__im__17));
#line 556
c_rt_lib0copy(&___nl__im__21, ___nl__im__20);
#line 556
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(215), ___nl__im__21);
#line 556
c_rt_lib0clear(&___nl__im__20);
#line 556
c_rt_lib0clear(&___nl__im__21);
#line 557
___nl__bool_ptr__23 = &((*___ref___rec__0).parse_types0field);
#line 557
___nl__bool__22 = (*___nl__bool_ptr__23);
#line 557
___nl__bool_ptr__23 = NULL;
#line 557
___nl__bool__22 = !___nl__bool__22;
#line 557
if(___nl__bool__22){ goto label_79;}
#line 558
c_rt_lib0move(&___nl__im__26, ptd_parser0try_value_to_ptd(___nl__im__17));
#line 558
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__26, ___get_global_string_const(83));
#line 558
if(___nl__bool__25){ goto label_73;}
#line 558
c_rt_lib0clear(&___nl__im__2);
#line 558
//clear ___nl__bool__15;
#line 558
c_rt_lib0clear(&___nl__im__17);
#line 558
//clear ___nl__bool__18;
#line 558
c_rt_lib0clear(&___nl__im__19);
#line 558
//clear ___nl__bool__22;
#line 558
c_rt_lib0clear(&___nl__im__24);
#line 558
//clear ___nl__bool__25;
#line 558
return ___nl__im__26;
#line 558
label_73:
;
#line 558
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(83)));
#line 559
c_rt_lib0copy(&___nl__im__27, ___nl__im__24);
#line 559
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(503), ___nl__im__27);
#line 559
c_rt_lib0clear(&___nl__im__27);
#line 560
goto label_79;
#line 560
label_79:
;
#line 560
//clear ___nl__bool__22;
#line 560
c_rt_lib0clear(&___nl__im__24);
#line 560
//clear ___nl__bool__25;
#line 560
c_rt_lib0clear(&___nl__im__26);
#line 561
goto label_85;
#line 561
label_85:
;
#line 561
//clear ___nl__bool__15;
#line 561
c_rt_lib0clear(&___nl__im__17);
#line 561
//clear ___nl__bool__18;
#line 561
c_rt_lib0clear(&___nl__im__19);
#line 562
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1115));
#line 562
___nl__bool__28 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__29);
#line 562
c_rt_lib0clear(&___nl__im__29);
#line 562
___nl__bool__28 = !___nl__bool__28;
#line 562
if(___nl__bool__28){ goto label_111;}
#line 563
c_rt_lib0move(&___nl__im__32, nparser_priv0parse_expr(___ref___rec__0));
#line 563
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(83));
#line 563
if(___nl__bool__31){ goto label_103;}
#line 563
c_rt_lib0clear(&___nl__im__2);
#line 563
//clear ___nl__bool__28;
#line 563
c_rt_lib0clear(&___nl__im__30);
#line 563
//clear ___nl__bool__31;
#line 563
return ___nl__im__32;
#line 563
label_103:
;
#line 563
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(83)));
#line 564
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__30));
#line 564
c_rt_lib0copy(&___nl__im__34, ___nl__im__33);
#line 564
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(229), ___nl__im__34);
#line 564
c_rt_lib0clear(&___nl__im__33);
#line 564
c_rt_lib0clear(&___nl__im__34);
#line 565
goto label_111;
#line 565
label_111:
;
#line 565
//clear ___nl__bool__28;
#line 565
c_rt_lib0clear(&___nl__im__30);
#line 565
//clear ___nl__bool__31;
#line 565
c_rt_lib0clear(&___nl__im__32);
#line 566
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
#line 566
c_rt_lib0clear(&___nl__im__2);
#line 566
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
#line 570
c_rt_lib0move(&___nl__im__1,___get_global_string_const(515));
#line 570
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 570
c_rt_lib0clear(&___nl__im__1);
#line 571
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 571
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 571
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 571
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 571
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(215), ___nl__im__4, ___get_global_string_const(503), ___nl__im__5, ___get_global_string_const(229), ___nl__im__6));
#line 571
c_rt_lib0clear(&___nl__im__3);
#line 571
c_rt_lib0clear(&___nl__im__4);
#line 571
c_rt_lib0clear(&___nl__im__5);
#line 571
c_rt_lib0clear(&___nl__im__6);
#line 572
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 572
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 572
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 572
___nl__rec_ptr__8 = NULL;
#line 572
c_rt_lib0clear(&___nl__im__9);
#line 572
___nl__bool__7 = !___nl__bool__7;
#line 572
if(___nl__bool__7){ goto label_29;}
#line 573
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 573
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 573
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 573
___nl__rec_ptr__11 = NULL;
#line 573
c_rt_lib0clear(&___nl__im__12);
#line 573
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 573
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__13);
#line 573
c_rt_lib0clear(&___nl__im__10);
#line 573
c_rt_lib0clear(&___nl__im__13);
#line 574
goto label_34;
#line 574
label_29:
;
#line 575
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1214));
#line 575
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 575
c_rt_lib0clear(&___nl__im__14);
#line 576
goto label_34;
#line 576
label_34:
;
#line 576
//clear ___nl__bool__7;
#line 577
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
#line 581
c_rt_lib0move(&___nl__im__1,___get_global_string_const(39));
#line 581
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 581
c_rt_lib0clear(&___nl__im__1);
#line 582
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 582
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 582
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 582
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 582
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(175), ___nl__im__3, ___get_global_string_const(215), ___nl__im__4, ___get_global_string_const(503), ___nl__im__5, ___get_global_string_const(229), ___nl__im__6));
#line 582
c_rt_lib0clear(&___nl__im__3);
#line 582
c_rt_lib0clear(&___nl__im__4);
#line 582
c_rt_lib0clear(&___nl__im__5);
#line 582
c_rt_lib0clear(&___nl__im__6);
#line 583
___nl__rec_ptr__8 = &((*___ref___rec__0).state0field);
#line 583
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 583
___nl__bool__7 = ntokenizer0is_type(___nl__rec_ptr__8, ___nl__im__9);
#line 583
___nl__rec_ptr__8 = NULL;
#line 583
c_rt_lib0clear(&___nl__im__9);
#line 583
___nl__bool__7 = !___nl__bool__7;
#line 583
if(___nl__bool__7){ goto label_29;}
#line 584
___nl__rec_ptr__11 = &((*___ref___rec__0).state0field);
#line 584
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(1193)));
#line 584
c_rt_lib0move(&___nl__im__10, ntokenizer0eat_type(___nl__rec_ptr__11, ___nl__im__12));
#line 584
___nl__rec_ptr__11 = NULL;
#line 584
c_rt_lib0clear(&___nl__im__12);
#line 584
c_rt_lib0copy(&___nl__im__13, ___nl__im__10);
#line 584
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(175), ___nl__im__13);
#line 584
c_rt_lib0clear(&___nl__im__10);
#line 584
c_rt_lib0clear(&___nl__im__13);
#line 585
goto label_34;
#line 585
label_29:
;
#line 586
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1214));
#line 586
c_rt_lib0delete(nparser_priv0add_error(___ref___rec__0, ___nl__im__14));
#line 586
c_rt_lib0clear(&___nl__im__14);
#line 587
goto label_34;
#line 587
label_34:
;
#line 587
//clear ___nl__bool__7;
#line 588
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
#line 592
c_rt_lib0move(&___nl__im__1,___get_global_string_const(465));
#line 592
nparser_priv0eat(___ref___rec__0, ___nl__im__1);
#line 592
c_rt_lib0clear(&___nl__im__1);
#line 593
c_rt_lib0move(&___nl__im__4, nparser_priv0parse_expr(___ref___rec__0));
#line 593
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(83));
#line 593
if(___nl__bool__3){ goto label_9;}
#line 593
c_rt_lib0clear(&___nl__im__2);
#line 593
//clear ___nl__bool__3;
#line 593
return ___nl__im__4;
#line 593
label_9:
;
#line 593
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(83)));
#line 594
c_rt_lib0move(&___nl__im__5,___get_global_string_const(331));
#line 594
nparser_priv0eat(___ref___rec__0, ___nl__im__5);
#line 594
c_rt_lib0clear(&___nl__im__5);
#line 595
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__2));
#line 595
c_rt_lib0clear(&___nl__im__2);
#line 595
//clear ___nl__bool__3;
#line 595
c_rt_lib0clear(&___nl__im__4);
#line 595
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
#line 599
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 599
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 599
___nl__rec_ptr__2 = NULL;
#line 600
c_rt_lib0move(&___nl__im__3,___get_global_string_const(315));
#line 600
nparser_priv0eat(___ref___rec__0, ___nl__im__3);
#line 600
c_rt_lib0clear(&___nl__im__3);
#line 601
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 602
label_7:
;
#line 602
c_rt_lib0move(&___nl__im__6,___get_global_string_const(316));
#line 602
___nl__bool__5 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__6);
#line 602
c_rt_lib0clear(&___nl__im__6);
#line 602
___nl__bool__5 = !___nl__bool__5;
#line 602
___nl__bool__5 = !___nl__bool__5;
#line 602
if(___nl__bool__5){ goto label_40;}
#line 603
c_rt_lib0move(&___nl__im__8,___get_global_string_const(450));
#line 603
___nl__bool__7 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__8);
#line 603
c_rt_lib0clear(&___nl__im__8);
#line 603
___nl__bool__7 = !___nl__bool__7;
#line 603
if(___nl__bool__7){ goto label_22;}
#line 603
//clear ___nl__bool__7;
#line 603
goto label_7;
#line 603
goto label_22;
#line 603
label_22:
;
#line 603
//clear ___nl__bool__7;
#line 604
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_cmd(___ref___rec__0));
#line 604
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(83));
#line 604
if(___nl__bool__10){ goto label_33;}
#line 604
c_rt_lib0clear(&___nl__im__1);
#line 604
c_rt_lib0clear(&___nl__im__4);
#line 604
//clear ___nl__bool__5;
#line 604
c_rt_lib0clear(&___nl__im__9);
#line 604
//clear ___nl__bool__10;
#line 604
return ___nl__im__11;
#line 604
label_33:
;
#line 604
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(83)));
#line 605
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__9));
#line 605
c_rt_lib0clear(&___nl__im__9);
#line 605
//clear ___nl__bool__10;
#line 605
c_rt_lib0clear(&___nl__im__11);
#line 606
goto label_7;
#line 606
label_40:
;
#line 607
___nl__rec_ptr__13 = &((*___ref___rec__0).state0field);
#line 607
c_rt_lib0move(&___nl__im__12, ntokenizer0get_place_ws(___nl__rec_ptr__13));
#line 607
___nl__rec_ptr__13 = NULL;
#line 608
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__1, ___get_global_string_const(742), ___nl__im__12));
#line 609
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(1083), ___nl__im__4));
#line 609
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(2, ___get_global_string_const(231), ___nl__im__14, ___get_global_string_const(237), ___nl__im__17));
#line 609
c_rt_lib0clear(&___nl__im__17);
#line 609
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__16));
#line 609
c_rt_lib0clear(&___nl__im__16);
#line 609
c_rt_lib0clear(&___nl__im__1);
#line 609
c_rt_lib0clear(&___nl__im__4);
#line 609
//clear ___nl__bool__5;
#line 609
c_rt_lib0clear(&___nl__im__9);
#line 609
//clear ___nl__bool__10;
#line 609
c_rt_lib0clear(&___nl__im__11);
#line 609
c_rt_lib0clear(&___nl__im__12);
#line 609
c_rt_lib0clear(&___nl__im__14);
#line 609
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
#line 613
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 613
c_rt_lib0move(&___nl__im__3,___get_global_string_const(515));
#line 613
___nl__bool__1 = ntokenizer0next_is(___nl__rec_ptr__2, ___nl__im__3);
#line 613
___nl__rec_ptr__2 = NULL;
#line 613
c_rt_lib0clear(&___nl__im__3);
#line 613
___nl__bool__1 = !___nl__bool__1;
#line 613
if(___nl__bool__1){ goto label_25;}
#line 614
c_rt_lib0move(&___nl__im__6, nparser_priv0parse_var_decl(___ref___rec__0));
#line 614
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(83));
#line 614
if(___nl__bool__5){ goto label_14;}
#line 614
//clear ___nl__bool__1;
#line 614
c_rt_lib0clear(&___nl__im__4);
#line 614
//clear ___nl__bool__5;
#line 614
return ___nl__im__6;
#line 614
label_14:
;
#line 614
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(83)));
#line 615
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(732), ___nl__im__4));
#line 615
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__8));
#line 615
c_rt_lib0clear(&___nl__im__8);
#line 615
//clear ___nl__bool__1;
#line 615
c_rt_lib0clear(&___nl__im__4);
#line 615
//clear ___nl__bool__5;
#line 615
c_rt_lib0clear(&___nl__im__6);
#line 615
return ___nl__im__7;
#line 616
goto label_100;
#line 616
label_25:
;
#line 617
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_expr(___ref___rec__0));
#line 617
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(83));
#line 617
if(___nl__bool__10){ goto label_37;}
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
return ___nl__im__11;
#line 617
label_37:
;
#line 617
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(83)));
#line 618
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(229)));
#line 618
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(245));
#line 618
c_rt_lib0clear(&___nl__im__14);
#line 618
___nl__bool__13 = !___nl__bool__12;
#line 618
if(___nl__bool__13){ goto label_55;}
#line 618
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(229)));
#line 618
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(229)));
#line 618
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(245)));
#line 618
c_rt_lib0clear(&___nl__im__17);
#line 618
c_rt_lib0clear(&___nl__im__18);
#line 618
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(568)));
#line 618
c_rt_lib0clear(&___nl__im__16);
#line 618
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1115));
#line 618
___nl__bool__12 = c_rt_lib0eq(___nl__im__15, ___nl__im__19);
#line 618
c_rt_lib0clear(&___nl__im__15);
#line 618
c_rt_lib0clear(&___nl__im__19);
#line 618
label_55:
;
#line 618
//clear ___nl__bool__13;
#line 618
___nl__bool__12 = !___nl__bool__12;
#line 618
if(___nl__bool__12){ goto label_79;}
#line 619
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(229)));
#line 619
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(229)));
#line 619
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(245)));
#line 619
c_rt_lib0clear(&___nl__im__23);
#line 619
c_rt_lib0clear(&___nl__im__24);
#line 619
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(1099), ___nl__im__22));
#line 619
c_rt_lib0clear(&___nl__im__22);
#line 619
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__21));
#line 619
c_rt_lib0clear(&___nl__im__21);
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
return ___nl__im__20;
#line 620
goto label_95;
#line 620
label_79:
;
#line 621
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(1100), ___nl__im__9));
#line 621
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__26));
#line 621
c_rt_lib0clear(&___nl__im__26);
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
#line 621
//clear ___nl__bool__12;
#line 621
c_rt_lib0clear(&___nl__im__20);
#line 621
return ___nl__im__25;
#line 622
goto label_95;
#line 622
label_95:
;
#line 622
//clear ___nl__bool__12;
#line 622
c_rt_lib0clear(&___nl__im__20);
#line 622
c_rt_lib0clear(&___nl__im__25);
#line 623
goto label_100;
#line 623
label_100:
;
#line 623
//clear ___nl__bool__1;
#line 623
c_rt_lib0clear(&___nl__im__4);
#line 623
//clear ___nl__bool__5;
#line 623
c_rt_lib0clear(&___nl__im__6);
#line 623
c_rt_lib0clear(&___nl__im__7);
#line 623
c_rt_lib0clear(&___nl__im__9);
#line 623
//clear ___nl__bool__10;
#line 623
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
#line 627
___nl__rec_ptr__3 = &((*___ref___rec__0).state0field);
#line 627
c_rt_lib0move(&___nl__im__2, ntokenizer0get_place(___nl__rec_ptr__3));
#line 627
___nl__rec_ptr__3 = NULL;
#line 627
___nl__rec_ptr__5 = &((*___ref___rec__0).state0field);
#line 627
c_rt_lib0move(&___nl__im__4, ntokenizer0get_place(___nl__rec_ptr__5));
#line 627
___nl__rec_ptr__5 = NULL;
#line 627
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__2, ___get_global_string_const(742), ___nl__im__4));
#line 627
c_rt_lib0clear(&___nl__im__2);
#line 627
c_rt_lib0clear(&___nl__im__4);
#line 627
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
ImmT  ___nl__im__163 = NULL;
bool  ___nl__bool__164 = false;
bool  ___nl__bool__165 = false;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
bool  ___nl__bool__168 = false;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
bool  ___nl__bool__173 = false;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__179 = NULL;
bool  ___nl__bool__180 = false;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__186 = NULL;
ImmT  ___nl__im__187 = NULL;
bool  ___nl__bool__188 = false;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__string__192 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__193 = NULL;
ImmT  ___nl__im__194 = NULL;
ImmT  ___nl__im__195 = NULL;
bool  ___nl__bool__196 = false;
ImmT  ___nl__im__197 = NULL;
bool  ___nl__bool__198 = false;
ImmT  ___nl__im__199 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
bool  ___nl__bool__203 = false;
ImmT  ___nl__im__204 = NULL;
ImmT  ___nl__im__205 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
bool  ___nl__bool__210 = false;
ImmT  ___nl__im__211 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__212 = NULL;
ImmT  ___nl__im__213 = NULL;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
bool  ___nl__bool__216 = false;
ImmT  ___nl__im__217 = NULL;
ImmT  ___nl__im__218 = NULL;
bool  ___nl__bool__219 = false;
ImmT  ___nl__im__220 = NULL;
bool  ___nl__bool__221 = false;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
bool  ___nl__bool__227 = false;
ImmT  ___nl__im__228 = NULL;
bool  ___nl__bool__229 = false;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
bool  ___nl__bool__234 = false;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
bool  ___nl__bool__239 = false;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
bool  ___nl__bool__244 = false;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
bool  ___nl__bool__249 = false;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
bool  ___nl__bool__254 = false;
ntokenizer0state_t0type* ___nl__rec_ptr__255 = NULL;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
ImmT  ___nl__im__261 = NULL;
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
bool  ___nl__bool__275 = false;
ImmT  ___nl__im__276 = NULL;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
bool  ___nl__bool__279 = false;
ImmT  ___nl__im__280 = NULL;
bool  ___nl__bool__281 = false;
ImmT  ___nl__im__282 = NULL;
ImmT  ___nl__im__283 = NULL;
ImmT  ___nl__im__284 = NULL;
ImmT  ___nl__im__285 = NULL;
ntokenizer0state_t0type* ___nl__rec_ptr__286 = NULL;
ImmT  ___nl__im__287 = NULL;
ImmT  ___nl__im__288 = NULL;
ImmT  ___nl__im__289 = NULL;
#line 631
___nl__rec_ptr__2 = &((*___ref___rec__0).state0field);
#line 631
c_rt_lib0move(&___nl__im__1, ntokenizer0get_place(___nl__rec_ptr__2));
#line 631
___nl__rec_ptr__2 = NULL;
#line 633
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1072));
#line 633
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__5);
#line 633
c_rt_lib0clear(&___nl__im__5);
#line 633
___nl__bool__4 = !___nl__bool__4;
#line 633
if(___nl__bool__4){ goto label_177;}
#line 634
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 635
c_rt_lib0move(&___nl__im__8, nparser_priv0parse_cond(___ref___rec__0));
#line 635
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(83));
#line 635
if(___nl__bool__7){ goto label_18;}
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
return ___nl__im__8;
#line 635
label_18:
;
#line 635
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(83)));
#line 635
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(1086), ___nl__im__9);
#line 636
c_rt_lib0move(&___nl__im__11, nparser_priv0parse_block(___ref___rec__0));
#line 636
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(83));
#line 636
if(___nl__bool__10){ goto label_33;}
#line 636
c_rt_lib0clear(&___nl__im__1);
#line 636
c_rt_lib0clear(&___nl__im__3);
#line 636
//clear ___nl__bool__4;
#line 636
c_rt_lib0clear(&___nl__im__6);
#line 636
//clear ___nl__bool__7;
#line 636
c_rt_lib0clear(&___nl__im__8);
#line 636
c_rt_lib0clear(&___nl__im__9);
#line 636
//clear ___nl__bool__10;
#line 636
return ___nl__im__11;
#line 636
label_33:
;
#line 636
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(83)));
#line 636
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(1072), ___nl__im__12);
#line 637
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 638
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 638
c_rt_lib0copy(&___nl__im__15, ___nl__im__14);
#line 638
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(1087), ___nl__im__15);
#line 638
c_rt_lib0clear(&___nl__im__14);
#line 638
c_rt_lib0clear(&___nl__im__15);
#line 639
label_42:
;
#line 639
c_rt_lib0move(&___nl__im__17,___get_global_string_const(1087));
#line 639
___nl__bool__16 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__17);
#line 639
c_rt_lib0clear(&___nl__im__17);
#line 639
___nl__bool__16 = !___nl__bool__16;
#line 639
if(___nl__bool__16){ goto label_119;}
#line 640
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(0));
#line 641
___nl__rec_ptr__20 = &((*___ref___rec__0).state0field);
#line 641
c_rt_lib0move(&___nl__im__19, ntokenizer0get_place(___nl__rec_ptr__20));
#line 641
___nl__rec_ptr__20 = NULL;
#line 642
c_rt_lib0move(&___nl__im__22, nparser_priv0parse_cond(___ref___rec__0));
#line 642
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(83));
#line 642
if(___nl__bool__21){ goto label_71;}
#line 642
c_rt_lib0clear(&___nl__im__1);
#line 642
c_rt_lib0clear(&___nl__im__3);
#line 642
//clear ___nl__bool__4;
#line 642
c_rt_lib0clear(&___nl__im__6);
#line 642
//clear ___nl__bool__7;
#line 642
c_rt_lib0clear(&___nl__im__8);
#line 642
c_rt_lib0clear(&___nl__im__9);
#line 642
//clear ___nl__bool__10;
#line 642
c_rt_lib0clear(&___nl__im__11);
#line 642
c_rt_lib0clear(&___nl__im__12);
#line 642
c_rt_lib0clear(&___nl__im__13);
#line 642
//clear ___nl__bool__16;
#line 642
c_rt_lib0clear(&___nl__im__18);
#line 642
c_rt_lib0clear(&___nl__im__19);
#line 642
//clear ___nl__bool__21;
#line 642
return ___nl__im__22;
#line 642
label_71:
;
#line 642
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(83)));
#line 642
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_string_const(1086), ___nl__im__23);
#line 643
___nl__rec_ptr__25 = &((*___ref___rec__0).state0field);
#line 643
c_rt_lib0move(&___nl__im__24, ntokenizer0get_place_ws(___nl__rec_ptr__25));
#line 643
___nl__rec_ptr__25 = NULL;
#line 644
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__19, ___get_global_string_const(742), ___nl__im__24));
#line 644
c_rt_lib0copy(&___nl__im__27, ___nl__im__26);
#line 644
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_string_const(231), ___nl__im__27);
#line 644
c_rt_lib0clear(&___nl__im__26);
#line 644
c_rt_lib0clear(&___nl__im__27);
#line 645
c_rt_lib0move(&___nl__im__29, nparser_priv0parse_block(___ref___rec__0));
#line 645
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__29, ___get_global_string_const(83));
#line 645
if(___nl__bool__28){ goto label_105;}
#line 645
c_rt_lib0clear(&___nl__im__1);
#line 645
c_rt_lib0clear(&___nl__im__3);
#line 645
//clear ___nl__bool__4;
#line 645
c_rt_lib0clear(&___nl__im__6);
#line 645
//clear ___nl__bool__7;
#line 645
c_rt_lib0clear(&___nl__im__8);
#line 645
c_rt_lib0clear(&___nl__im__9);
#line 645
//clear ___nl__bool__10;
#line 645
c_rt_lib0clear(&___nl__im__11);
#line 645
c_rt_lib0clear(&___nl__im__12);
#line 645
c_rt_lib0clear(&___nl__im__13);
#line 645
//clear ___nl__bool__16;
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
return ___nl__im__29;
#line 645
label_105:
;
#line 645
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__29, ___get_global_string_const(83)));
#line 645
c_rt_lib0hash_set_value_dec(&___nl__im__18, ___get_global_string_const(237), ___nl__im__30);
#line 646
c_rt_lib0delete(array0push(&___nl__im__13, ___nl__im__18));
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
#line 647
goto label_42;
#line 647
label_119:
;
#line 648
c_rt_lib0copy(&___nl__im__31, ___nl__im__13);
#line 648
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(1087), ___nl__im__31);
#line 648
c_rt_lib0clear(&___nl__im__31);
#line 649
c_rt_lib0move(&___nl__im__33,___get_global_string_const(1088));
#line 649
___nl__bool__32 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__33);
#line 649
c_rt_lib0clear(&___nl__im__33);
#line 649
___nl__bool__32 = !___nl__bool__32;
#line 649
if(___nl__bool__32){ goto label_159;}
#line 650
c_rt_lib0move(&___nl__im__35, nparser_priv0parse_block(___ref___rec__0));
#line 650
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(83));
#line 650
if(___nl__bool__34){ goto label_155;}
#line 650
c_rt_lib0clear(&___nl__im__1);
#line 650
c_rt_lib0clear(&___nl__im__3);
#line 650
//clear ___nl__bool__4;
#line 650
c_rt_lib0clear(&___nl__im__6);
#line 650
//clear ___nl__bool__7;
#line 650
c_rt_lib0clear(&___nl__im__8);
#line 650
c_rt_lib0clear(&___nl__im__9);
#line 650
//clear ___nl__bool__10;
#line 650
c_rt_lib0clear(&___nl__im__11);
#line 650
c_rt_lib0clear(&___nl__im__12);
#line 650
c_rt_lib0clear(&___nl__im__13);
#line 650
//clear ___nl__bool__16;
#line 650
c_rt_lib0clear(&___nl__im__18);
#line 650
c_rt_lib0clear(&___nl__im__19);
#line 650
//clear ___nl__bool__21;
#line 650
c_rt_lib0clear(&___nl__im__22);
#line 650
c_rt_lib0clear(&___nl__im__23);
#line 650
c_rt_lib0clear(&___nl__im__24);
#line 650
//clear ___nl__bool__28;
#line 650
c_rt_lib0clear(&___nl__im__29);
#line 650
c_rt_lib0clear(&___nl__im__30);
#line 650
//clear ___nl__bool__32;
#line 650
//clear ___nl__bool__34;
#line 650
return ___nl__im__35;
#line 650
label_155:
;
#line 650
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(83)));
#line 650
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(1088), ___nl__im__36);
#line 651
goto label_170;
#line 651
label_159:
;
#line 652
c_rt_lib0move(&___nl__im__38, nparser_priv0get_debug_from_begin(___ref___rec__0));
#line 652
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_string_const(1085)));
#line 652
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(2, ___get_global_string_const(231), ___nl__im__38, ___get_global_string_const(237), ___nl__im__39));
#line 652
c_rt_lib0clear(&___nl__im__38);
#line 652
c_rt_lib0clear(&___nl__im__39);
#line 652
c_rt_lib0copy(&___nl__im__40, ___nl__im__37);
#line 652
c_rt_lib0hash_set_value_dec(&___nl__im__6, ___get_global_string_const(1088), ___nl__im__40);
#line 652
c_rt_lib0clear(&___nl__im__37);
#line 652
c_rt_lib0clear(&___nl__im__40);
#line 653
goto label_170;
#line 653
label_170:
;
#line 653
//clear ___nl__bool__32;
#line 653
//clear ___nl__bool__34;
#line 653
c_rt_lib0clear(&___nl__im__35);
#line 653
c_rt_lib0clear(&___nl__im__36);
#line 654
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1072), ___nl__im__6));
#line 655
goto label_2039;
#line 655
label_177:
;
#line 655
c_rt_lib0move(&___nl__im__41,___get_global_string_const(1074));
#line 655
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__41);
#line 655
c_rt_lib0clear(&___nl__im__41);
#line 655
___nl__bool__4 = !___nl__bool__4;
#line 655
if(___nl__bool__4){ goto label_259;}
#line 656
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_mk(0));
#line 657
___nl__bool__43 = false;
#line 657
c_rt_lib0move(&___nl__im__44, c_rt_lib0bool_to_nl_native(___nl__bool__43));
#line 657
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_string_const(1152), ___nl__im__44);
#line 657
//clear ___nl__bool__43;
#line 657
c_rt_lib0clear(&___nl__im__44);
#line 658
c_rt_lib0move(&___nl__im__45, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 658
c_rt_lib0copy(&___nl__im__46, ___nl__im__45);
#line 658
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_string_const(372), ___nl__im__46);
#line 658
c_rt_lib0clear(&___nl__im__45);
#line 658
c_rt_lib0clear(&___nl__im__46);
#line 659
c_rt_lib0move(&___nl__im__48, nparser_priv0parse_cond(___ref___rec__0));
#line 659
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(83));
#line 659
if(___nl__bool__47){ goto label_221;}
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
return ___nl__im__48;
#line 659
label_221:
;
#line 659
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__48, ___get_global_string_const(83)));
#line 659
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_string_const(37), ___nl__im__49);
#line 660
c_rt_lib0move(&___nl__im__51, nparser_priv0parse_block(___ref___rec__0));
#line 660
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_string_const(83));
#line 660
if(___nl__bool__50){ goto label_254;}
#line 660
c_rt_lib0clear(&___nl__im__1);
#line 660
c_rt_lib0clear(&___nl__im__3);
#line 660
//clear ___nl__bool__4;
#line 660
c_rt_lib0clear(&___nl__im__6);
#line 660
//clear ___nl__bool__7;
#line 660
c_rt_lib0clear(&___nl__im__8);
#line 660
c_rt_lib0clear(&___nl__im__9);
#line 660
//clear ___nl__bool__10;
#line 660
c_rt_lib0clear(&___nl__im__11);
#line 660
c_rt_lib0clear(&___nl__im__12);
#line 660
c_rt_lib0clear(&___nl__im__13);
#line 660
//clear ___nl__bool__16;
#line 660
c_rt_lib0clear(&___nl__im__18);
#line 660
c_rt_lib0clear(&___nl__im__19);
#line 660
//clear ___nl__bool__21;
#line 660
c_rt_lib0clear(&___nl__im__22);
#line 660
c_rt_lib0clear(&___nl__im__23);
#line 660
c_rt_lib0clear(&___nl__im__24);
#line 660
//clear ___nl__bool__28;
#line 660
c_rt_lib0clear(&___nl__im__29);
#line 660
c_rt_lib0clear(&___nl__im__30);
#line 660
c_rt_lib0clear(&___nl__im__42);
#line 660
//clear ___nl__bool__47;
#line 660
c_rt_lib0clear(&___nl__im__48);
#line 660
c_rt_lib0clear(&___nl__im__49);
#line 660
//clear ___nl__bool__50;
#line 660
return ___nl__im__51;
#line 660
label_254:
;
#line 660
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__51, ___get_global_string_const(83)));
#line 660
c_rt_lib0hash_set_value_dec(&___nl__im__42, ___get_global_string_const(237), ___nl__im__52);
#line 661
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1074), ___nl__im__42));
#line 662
goto label_2039;
#line 662
label_259:
;
#line 662
c_rt_lib0move(&___nl__im__53,___get_global_string_const(1076));
#line 662
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__53);
#line 662
c_rt_lib0clear(&___nl__im__53);
#line 662
___nl__bool__4 = !___nl__bool__4;
#line 662
if(___nl__bool__4){ goto label_355;}
#line 663
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(0));
#line 664
___nl__bool__55 = false;
#line 664
c_rt_lib0move(&___nl__im__56, c_rt_lib0bool_to_nl_native(___nl__bool__55));
#line 664
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_string_const(1152), ___nl__im__56);
#line 664
//clear ___nl__bool__55;
#line 664
c_rt_lib0clear(&___nl__im__56);
#line 665
c_rt_lib0move(&___nl__im__57, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 665
c_rt_lib0copy(&___nl__im__58, ___nl__im__57);
#line 665
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_string_const(372), ___nl__im__58);
#line 665
c_rt_lib0clear(&___nl__im__57);
#line 665
c_rt_lib0clear(&___nl__im__58);
#line 666
c_rt_lib0move(&___nl__im__60, nparser_priv0parse_cond(___ref___rec__0));
#line 666
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(83));
#line 666
if(___nl__bool__59){ goto label_310;}
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
return ___nl__im__60;
#line 666
label_310:
;
#line 666
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__60, ___get_global_string_const(83)));
#line 666
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_string_const(1091), ___nl__im__61);
#line 667
c_rt_lib0move(&___nl__im__63, nparser_priv0parse_block(___ref___rec__0));
#line 667
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(83));
#line 667
if(___nl__bool__62){ goto label_350;}
#line 667
c_rt_lib0clear(&___nl__im__1);
#line 667
c_rt_lib0clear(&___nl__im__3);
#line 667
//clear ___nl__bool__4;
#line 667
c_rt_lib0clear(&___nl__im__6);
#line 667
//clear ___nl__bool__7;
#line 667
c_rt_lib0clear(&___nl__im__8);
#line 667
c_rt_lib0clear(&___nl__im__9);
#line 667
//clear ___nl__bool__10;
#line 667
c_rt_lib0clear(&___nl__im__11);
#line 667
c_rt_lib0clear(&___nl__im__12);
#line 667
c_rt_lib0clear(&___nl__im__13);
#line 667
//clear ___nl__bool__16;
#line 667
c_rt_lib0clear(&___nl__im__18);
#line 667
c_rt_lib0clear(&___nl__im__19);
#line 667
//clear ___nl__bool__21;
#line 667
c_rt_lib0clear(&___nl__im__22);
#line 667
c_rt_lib0clear(&___nl__im__23);
#line 667
c_rt_lib0clear(&___nl__im__24);
#line 667
//clear ___nl__bool__28;
#line 667
c_rt_lib0clear(&___nl__im__29);
#line 667
c_rt_lib0clear(&___nl__im__30);
#line 667
c_rt_lib0clear(&___nl__im__42);
#line 667
//clear ___nl__bool__47;
#line 667
c_rt_lib0clear(&___nl__im__48);
#line 667
c_rt_lib0clear(&___nl__im__49);
#line 667
//clear ___nl__bool__50;
#line 667
c_rt_lib0clear(&___nl__im__51);
#line 667
c_rt_lib0clear(&___nl__im__52);
#line 667
c_rt_lib0clear(&___nl__im__54);
#line 667
//clear ___nl__bool__59;
#line 667
c_rt_lib0clear(&___nl__im__60);
#line 667
c_rt_lib0clear(&___nl__im__61);
#line 667
//clear ___nl__bool__62;
#line 667
return ___nl__im__63;
#line 667
label_350:
;
#line 667
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__63, ___get_global_string_const(83)));
#line 667
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_string_const(237), ___nl__im__64);
#line 668
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1076), ___nl__im__54));
#line 669
goto label_2039;
#line 669
label_355:
;
#line 669
c_rt_lib0move(&___nl__im__65,___get_global_string_const(167));
#line 669
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__65);
#line 669
c_rt_lib0clear(&___nl__im__65);
#line 669
___nl__bool__4 = !___nl__bool__4;
#line 669
if(___nl__bool__4){ goto label_406;}
#line 670
c_rt_lib0move(&___nl__im__68, nparser_priv0parse_block(___ref___rec__0));
#line 670
___nl__bool__67 = c_rt_lib0priv_is(___nl__im__68, ___get_global_string_const(83));
#line 670
if(___nl__bool__67){ goto label_402;}
#line 670
c_rt_lib0clear(&___nl__im__1);
#line 670
c_rt_lib0clear(&___nl__im__3);
#line 670
//clear ___nl__bool__4;
#line 670
c_rt_lib0clear(&___nl__im__6);
#line 670
//clear ___nl__bool__7;
#line 670
c_rt_lib0clear(&___nl__im__8);
#line 670
c_rt_lib0clear(&___nl__im__9);
#line 670
//clear ___nl__bool__10;
#line 670
c_rt_lib0clear(&___nl__im__11);
#line 670
c_rt_lib0clear(&___nl__im__12);
#line 670
c_rt_lib0clear(&___nl__im__13);
#line 670
//clear ___nl__bool__16;
#line 670
c_rt_lib0clear(&___nl__im__18);
#line 670
c_rt_lib0clear(&___nl__im__19);
#line 670
//clear ___nl__bool__21;
#line 670
c_rt_lib0clear(&___nl__im__22);
#line 670
c_rt_lib0clear(&___nl__im__23);
#line 670
c_rt_lib0clear(&___nl__im__24);
#line 670
//clear ___nl__bool__28;
#line 670
c_rt_lib0clear(&___nl__im__29);
#line 670
c_rt_lib0clear(&___nl__im__30);
#line 670
c_rt_lib0clear(&___nl__im__42);
#line 670
//clear ___nl__bool__47;
#line 670
c_rt_lib0clear(&___nl__im__48);
#line 670
c_rt_lib0clear(&___nl__im__49);
#line 670
//clear ___nl__bool__50;
#line 670
c_rt_lib0clear(&___nl__im__51);
#line 670
c_rt_lib0clear(&___nl__im__52);
#line 670
c_rt_lib0clear(&___nl__im__54);
#line 670
//clear ___nl__bool__59;
#line 670
c_rt_lib0clear(&___nl__im__60);
#line 670
c_rt_lib0clear(&___nl__im__61);
#line 670
//clear ___nl__bool__62;
#line 670
c_rt_lib0clear(&___nl__im__63);
#line 670
c_rt_lib0clear(&___nl__im__64);
#line 670
c_rt_lib0clear(&___nl__im__66);
#line 670
//clear ___nl__bool__67;
#line 670
return ___nl__im__68;
#line 670
label_402:
;
#line 670
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__68, ___get_global_string_const(83)));
#line 671
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(167), ___nl__im__66));
#line 672
goto label_2039;
#line 672
label_406:
;
#line 672
c_rt_lib0move(&___nl__im__69,___get_global_string_const(1075));
#line 672
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__69);
#line 672
c_rt_lib0clear(&___nl__im__69);
#line 672
___nl__bool__4 = !___nl__bool__4;
#line 672
if(___nl__bool__4){ goto label_557;}
#line 673
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(0));
#line 674
___nl__bool__71 = false;
#line 674
c_rt_lib0move(&___nl__im__72, c_rt_lib0bool_to_nl_native(___nl__bool__71));
#line 674
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(1152), ___nl__im__72);
#line 674
//clear ___nl__bool__71;
#line 674
c_rt_lib0clear(&___nl__im__72);
#line 675
c_rt_lib0move(&___nl__im__73, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 675
c_rt_lib0copy(&___nl__im__74, ___nl__im__73);
#line 675
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(585), ___nl__im__74);
#line 675
c_rt_lib0clear(&___nl__im__73);
#line 675
c_rt_lib0clear(&___nl__im__74);
#line 676
c_rt_lib0move(&___nl__im__75,___get_global_string_const(323));
#line 676
nparser_priv0eat(___ref___rec__0, ___nl__im__75);
#line 676
c_rt_lib0clear(&___nl__im__75);
#line 677
___nl__rec_ptr__77 = &((*___ref___rec__0).state0field);
#line 677
c_rt_lib0move(&___nl__im__78,___get_global_string_const(515));
#line 677
___nl__bool__76 = ntokenizer0next_is(___nl__rec_ptr__77, ___nl__im__78);
#line 677
___nl__rec_ptr__77 = NULL;
#line 677
c_rt_lib0clear(&___nl__im__78);
#line 677
___nl__bool__76 = !___nl__bool__76;
#line 677
if(___nl__bool__76){ goto label_444;}
#line 678
c_rt_lib0move(&___nl__im__79, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 678
c_rt_lib0copy(&___nl__im__80, ___nl__im__79);
#line 678
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(234), ___nl__im__80);
#line 678
c_rt_lib0clear(&___nl__im__79);
#line 678
c_rt_lib0clear(&___nl__im__80);
#line 679
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 679
c_rt_lib0copy(&___nl__im__82, ___nl__im__81);
#line 679
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(1090), ___nl__im__82);
#line 679
c_rt_lib0clear(&___nl__im__81);
#line 679
c_rt_lib0clear(&___nl__im__82);
#line 680
goto label_456;
#line 680
label_444:
;
#line 681
c_rt_lib0move(&___nl__im__83, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 681
c_rt_lib0copy(&___nl__im__84, ___nl__im__83);
#line 681
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(234), ___nl__im__84);
#line 681
c_rt_lib0clear(&___nl__im__83);
#line 681
c_rt_lib0clear(&___nl__im__84);
#line 682
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 682
c_rt_lib0copy(&___nl__im__86, ___nl__im__85);
#line 682
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(1090), ___nl__im__86);
#line 682
c_rt_lib0clear(&___nl__im__85);
#line 682
c_rt_lib0clear(&___nl__im__86);
#line 683
goto label_456;
#line 683
label_456:
;
#line 683
//clear ___nl__bool__76;
#line 684
c_rt_lib0move(&___nl__im__88, nparser_priv0parse_cond(___ref___rec__0));
#line 684
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__88, ___get_global_string_const(83));
#line 684
if(___nl__bool__87){ goto label_502;}
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
//clear ___nl__bool__87;
#line 684
return ___nl__im__88;
#line 684
label_502:
;
#line 684
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__88, ___get_global_string_const(83)));
#line 684
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(135), ___nl__im__89);
#line 685
c_rt_lib0move(&___nl__im__91, nparser_priv0parse_block(___ref___rec__0));
#line 685
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__91, ___get_global_string_const(83));
#line 685
if(___nl__bool__90){ goto label_552;}
#line 685
c_rt_lib0clear(&___nl__im__1);
#line 685
c_rt_lib0clear(&___nl__im__3);
#line 685
//clear ___nl__bool__4;
#line 685
c_rt_lib0clear(&___nl__im__6);
#line 685
//clear ___nl__bool__7;
#line 685
c_rt_lib0clear(&___nl__im__8);
#line 685
c_rt_lib0clear(&___nl__im__9);
#line 685
//clear ___nl__bool__10;
#line 685
c_rt_lib0clear(&___nl__im__11);
#line 685
c_rt_lib0clear(&___nl__im__12);
#line 685
c_rt_lib0clear(&___nl__im__13);
#line 685
//clear ___nl__bool__16;
#line 685
c_rt_lib0clear(&___nl__im__18);
#line 685
c_rt_lib0clear(&___nl__im__19);
#line 685
//clear ___nl__bool__21;
#line 685
c_rt_lib0clear(&___nl__im__22);
#line 685
c_rt_lib0clear(&___nl__im__23);
#line 685
c_rt_lib0clear(&___nl__im__24);
#line 685
//clear ___nl__bool__28;
#line 685
c_rt_lib0clear(&___nl__im__29);
#line 685
c_rt_lib0clear(&___nl__im__30);
#line 685
c_rt_lib0clear(&___nl__im__42);
#line 685
//clear ___nl__bool__47;
#line 685
c_rt_lib0clear(&___nl__im__48);
#line 685
c_rt_lib0clear(&___nl__im__49);
#line 685
//clear ___nl__bool__50;
#line 685
c_rt_lib0clear(&___nl__im__51);
#line 685
c_rt_lib0clear(&___nl__im__52);
#line 685
c_rt_lib0clear(&___nl__im__54);
#line 685
//clear ___nl__bool__59;
#line 685
c_rt_lib0clear(&___nl__im__60);
#line 685
c_rt_lib0clear(&___nl__im__61);
#line 685
//clear ___nl__bool__62;
#line 685
c_rt_lib0clear(&___nl__im__63);
#line 685
c_rt_lib0clear(&___nl__im__64);
#line 685
c_rt_lib0clear(&___nl__im__66);
#line 685
//clear ___nl__bool__67;
#line 685
c_rt_lib0clear(&___nl__im__68);
#line 685
c_rt_lib0clear(&___nl__im__70);
#line 685
//clear ___nl__bool__87;
#line 685
c_rt_lib0clear(&___nl__im__88);
#line 685
c_rt_lib0clear(&___nl__im__89);
#line 685
//clear ___nl__bool__90;
#line 685
return ___nl__im__91;
#line 685
label_552:
;
#line 685
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__91, ___get_global_string_const(83)));
#line 685
c_rt_lib0hash_set_value_dec(&___nl__im__70, ___get_global_string_const(237), ___nl__im__92);
#line 686
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1075), ___nl__im__70));
#line 687
goto label_2039;
#line 687
label_557:
;
#line 687
c_rt_lib0move(&___nl__im__93,___get_global_string_const(1077));
#line 687
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__93);
#line 687
c_rt_lib0clear(&___nl__im__93);
#line 687
___nl__bool__4 = !___nl__bool__4;
#line 687
if(___nl__bool__4){ goto label_682;}
#line 688
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_mk(0));
#line 689
___nl__bool__95 = false;
#line 689
c_rt_lib0move(&___nl__im__96, c_rt_lib0bool_to_nl_native(___nl__bool__95));
#line 689
c_rt_lib0hash_set_value_dec(&___nl__im__94, ___get_global_string_const(1152), ___nl__im__96);
#line 689
//clear ___nl__bool__95;
#line 689
c_rt_lib0clear(&___nl__im__96);
#line 690
c_rt_lib0move(&___nl__im__98, nparser_priv0parse_cond(___ref___rec__0));
#line 690
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__98, ___get_global_string_const(83));
#line 690
if(___nl__bool__97){ goto label_620;}
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
//clear ___nl__bool__87;
#line 690
c_rt_lib0clear(&___nl__im__88);
#line 690
c_rt_lib0clear(&___nl__im__89);
#line 690
//clear ___nl__bool__90;
#line 690
c_rt_lib0clear(&___nl__im__91);
#line 690
c_rt_lib0clear(&___nl__im__92);
#line 690
c_rt_lib0clear(&___nl__im__94);
#line 690
//clear ___nl__bool__97;
#line 690
return ___nl__im__98;
#line 690
label_620:
;
#line 690
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__98, ___get_global_string_const(83)));
#line 690
c_rt_lib0hash_set_value_dec(&___nl__im__94, ___get_global_string_const(1086), ___nl__im__99);
#line 691
c_rt_lib0move(&___nl__im__101, nparser_priv0parse_block(___ref___rec__0));
#line 691
___nl__bool__100 = c_rt_lib0priv_is(___nl__im__101, ___get_global_string_const(83));
#line 691
if(___nl__bool__100){ goto label_677;}
#line 691
c_rt_lib0clear(&___nl__im__1);
#line 691
c_rt_lib0clear(&___nl__im__3);
#line 691
//clear ___nl__bool__4;
#line 691
c_rt_lib0clear(&___nl__im__6);
#line 691
//clear ___nl__bool__7;
#line 691
c_rt_lib0clear(&___nl__im__8);
#line 691
c_rt_lib0clear(&___nl__im__9);
#line 691
//clear ___nl__bool__10;
#line 691
c_rt_lib0clear(&___nl__im__11);
#line 691
c_rt_lib0clear(&___nl__im__12);
#line 691
c_rt_lib0clear(&___nl__im__13);
#line 691
//clear ___nl__bool__16;
#line 691
c_rt_lib0clear(&___nl__im__18);
#line 691
c_rt_lib0clear(&___nl__im__19);
#line 691
//clear ___nl__bool__21;
#line 691
c_rt_lib0clear(&___nl__im__22);
#line 691
c_rt_lib0clear(&___nl__im__23);
#line 691
c_rt_lib0clear(&___nl__im__24);
#line 691
//clear ___nl__bool__28;
#line 691
c_rt_lib0clear(&___nl__im__29);
#line 691
c_rt_lib0clear(&___nl__im__30);
#line 691
c_rt_lib0clear(&___nl__im__42);
#line 691
//clear ___nl__bool__47;
#line 691
c_rt_lib0clear(&___nl__im__48);
#line 691
c_rt_lib0clear(&___nl__im__49);
#line 691
//clear ___nl__bool__50;
#line 691
c_rt_lib0clear(&___nl__im__51);
#line 691
c_rt_lib0clear(&___nl__im__52);
#line 691
c_rt_lib0clear(&___nl__im__54);
#line 691
//clear ___nl__bool__59;
#line 691
c_rt_lib0clear(&___nl__im__60);
#line 691
c_rt_lib0clear(&___nl__im__61);
#line 691
//clear ___nl__bool__62;
#line 691
c_rt_lib0clear(&___nl__im__63);
#line 691
c_rt_lib0clear(&___nl__im__64);
#line 691
c_rt_lib0clear(&___nl__im__66);
#line 691
//clear ___nl__bool__67;
#line 691
c_rt_lib0clear(&___nl__im__68);
#line 691
c_rt_lib0clear(&___nl__im__70);
#line 691
//clear ___nl__bool__87;
#line 691
c_rt_lib0clear(&___nl__im__88);
#line 691
c_rt_lib0clear(&___nl__im__89);
#line 691
//clear ___nl__bool__90;
#line 691
c_rt_lib0clear(&___nl__im__91);
#line 691
c_rt_lib0clear(&___nl__im__92);
#line 691
c_rt_lib0clear(&___nl__im__94);
#line 691
//clear ___nl__bool__97;
#line 691
c_rt_lib0clear(&___nl__im__98);
#line 691
c_rt_lib0clear(&___nl__im__99);
#line 691
//clear ___nl__bool__100;
#line 691
return ___nl__im__101;
#line 691
label_677:
;
#line 691
c_rt_lib0move(&___nl__im__102, c_rt_lib0priv_as(___nl__im__101, ___get_global_string_const(83)));
#line 691
c_rt_lib0hash_set_value_dec(&___nl__im__94, ___get_global_string_const(237), ___nl__im__102);
#line 692
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1077), ___nl__im__94));
#line 693
goto label_2039;
#line 693
label_682:
;
#line 693
c_rt_lib0move(&___nl__im__103,___get_global_string_const(1073));
#line 693
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__103);
#line 693
c_rt_lib0clear(&___nl__im__103);
#line 693
___nl__bool__4 = !___nl__bool__4;
#line 693
if(___nl__bool__4){ goto label_1097;}
#line 694
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_mk(0));
#line 695
c_rt_lib0move(&___nl__im__105,___get_global_string_const(465));
#line 695
nparser_priv0eat(___ref___rec__0, ___nl__im__105);
#line 695
c_rt_lib0clear(&___nl__im__105);
#line 696
___nl__rec_ptr__107 = &((*___ref___rec__0).state0field);
#line 696
c_rt_lib0move(&___nl__im__108,___get_global_string_const(515));
#line 696
___nl__bool__106 = ntokenizer0next_is(___nl__rec_ptr__107, ___nl__im__108);
#line 696
___nl__rec_ptr__107 = NULL;
#line 696
c_rt_lib0clear(&___nl__im__108);
#line 696
___nl__bool__106 = !___nl__bool__106;
#line 696
if(___nl__bool__106){ goto label_767;}
#line 697
c_rt_lib0move(&___nl__im__111, nparser_priv0parse_var_decl(___ref___rec__0));
#line 697
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__111, ___get_global_string_const(83));
#line 697
if(___nl__bool__110){ goto label_759;}
#line 697
c_rt_lib0clear(&___nl__im__1);
#line 697
c_rt_lib0clear(&___nl__im__3);
#line 697
//clear ___nl__bool__4;
#line 697
c_rt_lib0clear(&___nl__im__6);
#line 697
//clear ___nl__bool__7;
#line 697
c_rt_lib0clear(&___nl__im__8);
#line 697
c_rt_lib0clear(&___nl__im__9);
#line 697
//clear ___nl__bool__10;
#line 697
c_rt_lib0clear(&___nl__im__11);
#line 697
c_rt_lib0clear(&___nl__im__12);
#line 697
c_rt_lib0clear(&___nl__im__13);
#line 697
//clear ___nl__bool__16;
#line 697
c_rt_lib0clear(&___nl__im__18);
#line 697
c_rt_lib0clear(&___nl__im__19);
#line 697
//clear ___nl__bool__21;
#line 697
c_rt_lib0clear(&___nl__im__22);
#line 697
c_rt_lib0clear(&___nl__im__23);
#line 697
c_rt_lib0clear(&___nl__im__24);
#line 697
//clear ___nl__bool__28;
#line 697
c_rt_lib0clear(&___nl__im__29);
#line 697
c_rt_lib0clear(&___nl__im__30);
#line 697
c_rt_lib0clear(&___nl__im__42);
#line 697
//clear ___nl__bool__47;
#line 697
c_rt_lib0clear(&___nl__im__48);
#line 697
c_rt_lib0clear(&___nl__im__49);
#line 697
//clear ___nl__bool__50;
#line 697
c_rt_lib0clear(&___nl__im__51);
#line 697
c_rt_lib0clear(&___nl__im__52);
#line 697
c_rt_lib0clear(&___nl__im__54);
#line 697
//clear ___nl__bool__59;
#line 697
c_rt_lib0clear(&___nl__im__60);
#line 697
c_rt_lib0clear(&___nl__im__61);
#line 697
//clear ___nl__bool__62;
#line 697
c_rt_lib0clear(&___nl__im__63);
#line 697
c_rt_lib0clear(&___nl__im__64);
#line 697
c_rt_lib0clear(&___nl__im__66);
#line 697
//clear ___nl__bool__67;
#line 697
c_rt_lib0clear(&___nl__im__68);
#line 697
c_rt_lib0clear(&___nl__im__70);
#line 697
//clear ___nl__bool__87;
#line 697
c_rt_lib0clear(&___nl__im__88);
#line 697
c_rt_lib0clear(&___nl__im__89);
#line 697
//clear ___nl__bool__90;
#line 697
c_rt_lib0clear(&___nl__im__91);
#line 697
c_rt_lib0clear(&___nl__im__92);
#line 697
c_rt_lib0clear(&___nl__im__94);
#line 697
//clear ___nl__bool__97;
#line 697
c_rt_lib0clear(&___nl__im__98);
#line 697
c_rt_lib0clear(&___nl__im__99);
#line 697
//clear ___nl__bool__100;
#line 697
c_rt_lib0clear(&___nl__im__101);
#line 697
c_rt_lib0clear(&___nl__im__102);
#line 697
c_rt_lib0clear(&___nl__im__104);
#line 697
//clear ___nl__bool__106;
#line 697
c_rt_lib0clear(&___nl__im__109);
#line 697
//clear ___nl__bool__110;
#line 697
return ___nl__im__111;
#line 697
label_759:
;
#line 697
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__111, ___get_global_string_const(83)));
#line 698
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__109));
#line 698
c_rt_lib0copy(&___nl__im__113, ___nl__im__112);
#line 698
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(1089), ___nl__im__113);
#line 698
c_rt_lib0clear(&___nl__im__112);
#line 698
c_rt_lib0clear(&___nl__im__113);
#line 699
goto label_855;
#line 699
label_767:
;
#line 699
___nl__rec_ptr__114 = &((*___ref___rec__0).state0field);
#line 699
c_rt_lib0move(&___nl__im__115,___get_global_string_const(450));
#line 699
___nl__bool__106 = ntokenizer0next_is(___nl__rec_ptr__114, ___nl__im__115);
#line 699
___nl__rec_ptr__114 = NULL;
#line 699
c_rt_lib0clear(&___nl__im__115);
#line 699
___nl__bool__106 = !___nl__bool__106;
#line 699
if(___nl__bool__106){ goto label_783;}
#line 700
c_rt_lib0move(&___nl__im__117, nparser_priv0get_value_nop(___ref___rec__0));
#line 700
c_rt_lib0move(&___nl__im__116, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__117));
#line 700
c_rt_lib0clear(&___nl__im__117);
#line 700
c_rt_lib0copy(&___nl__im__118, ___nl__im__116);
#line 700
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(1089), ___nl__im__118);
#line 700
c_rt_lib0clear(&___nl__im__116);
#line 700
c_rt_lib0clear(&___nl__im__118);
#line 701
goto label_855;
#line 701
label_783:
;
#line 702
c_rt_lib0move(&___nl__im__121, nparser_priv0parse_expr(___ref___rec__0));
#line 702
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__121, ___get_global_string_const(83));
#line 702
if(___nl__bool__120){ goto label_847;}
#line 702
c_rt_lib0clear(&___nl__im__1);
#line 702
c_rt_lib0clear(&___nl__im__3);
#line 702
//clear ___nl__bool__4;
#line 702
c_rt_lib0clear(&___nl__im__6);
#line 702
//clear ___nl__bool__7;
#line 702
c_rt_lib0clear(&___nl__im__8);
#line 702
c_rt_lib0clear(&___nl__im__9);
#line 702
//clear ___nl__bool__10;
#line 702
c_rt_lib0clear(&___nl__im__11);
#line 702
c_rt_lib0clear(&___nl__im__12);
#line 702
c_rt_lib0clear(&___nl__im__13);
#line 702
//clear ___nl__bool__16;
#line 702
c_rt_lib0clear(&___nl__im__18);
#line 702
c_rt_lib0clear(&___nl__im__19);
#line 702
//clear ___nl__bool__21;
#line 702
c_rt_lib0clear(&___nl__im__22);
#line 702
c_rt_lib0clear(&___nl__im__23);
#line 702
c_rt_lib0clear(&___nl__im__24);
#line 702
//clear ___nl__bool__28;
#line 702
c_rt_lib0clear(&___nl__im__29);
#line 702
c_rt_lib0clear(&___nl__im__30);
#line 702
c_rt_lib0clear(&___nl__im__42);
#line 702
//clear ___nl__bool__47;
#line 702
c_rt_lib0clear(&___nl__im__48);
#line 702
c_rt_lib0clear(&___nl__im__49);
#line 702
//clear ___nl__bool__50;
#line 702
c_rt_lib0clear(&___nl__im__51);
#line 702
c_rt_lib0clear(&___nl__im__52);
#line 702
c_rt_lib0clear(&___nl__im__54);
#line 702
//clear ___nl__bool__59;
#line 702
c_rt_lib0clear(&___nl__im__60);
#line 702
c_rt_lib0clear(&___nl__im__61);
#line 702
//clear ___nl__bool__62;
#line 702
c_rt_lib0clear(&___nl__im__63);
#line 702
c_rt_lib0clear(&___nl__im__64);
#line 702
c_rt_lib0clear(&___nl__im__66);
#line 702
//clear ___nl__bool__67;
#line 702
c_rt_lib0clear(&___nl__im__68);
#line 702
c_rt_lib0clear(&___nl__im__70);
#line 702
//clear ___nl__bool__87;
#line 702
c_rt_lib0clear(&___nl__im__88);
#line 702
c_rt_lib0clear(&___nl__im__89);
#line 702
//clear ___nl__bool__90;
#line 702
c_rt_lib0clear(&___nl__im__91);
#line 702
c_rt_lib0clear(&___nl__im__92);
#line 702
c_rt_lib0clear(&___nl__im__94);
#line 702
//clear ___nl__bool__97;
#line 702
c_rt_lib0clear(&___nl__im__98);
#line 702
c_rt_lib0clear(&___nl__im__99);
#line 702
//clear ___nl__bool__100;
#line 702
c_rt_lib0clear(&___nl__im__101);
#line 702
c_rt_lib0clear(&___nl__im__102);
#line 702
c_rt_lib0clear(&___nl__im__104);
#line 702
//clear ___nl__bool__106;
#line 702
c_rt_lib0clear(&___nl__im__109);
#line 702
//clear ___nl__bool__110;
#line 702
c_rt_lib0clear(&___nl__im__111);
#line 702
c_rt_lib0clear(&___nl__im__119);
#line 702
//clear ___nl__bool__120;
#line 702
return ___nl__im__121;
#line 702
label_847:
;
#line 702
c_rt_lib0move(&___nl__im__119, c_rt_lib0priv_as(___nl__im__121, ___get_global_string_const(83)));
#line 703
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__119));
#line 703
c_rt_lib0copy(&___nl__im__123, ___nl__im__122);
#line 703
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(1089), ___nl__im__123);
#line 703
c_rt_lib0clear(&___nl__im__122);
#line 703
c_rt_lib0clear(&___nl__im__123);
#line 704
goto label_855;
#line 704
label_855:
;
#line 704
//clear ___nl__bool__106;
#line 704
c_rt_lib0clear(&___nl__im__109);
#line 704
//clear ___nl__bool__110;
#line 704
c_rt_lib0clear(&___nl__im__111);
#line 704
c_rt_lib0clear(&___nl__im__119);
#line 704
//clear ___nl__bool__120;
#line 704
c_rt_lib0clear(&___nl__im__121);
#line 705
c_rt_lib0move(&___nl__im__124,___get_global_string_const(450));
#line 705
nparser_priv0eat(___ref___rec__0, ___nl__im__124);
#line 705
c_rt_lib0clear(&___nl__im__124);
#line 706
c_rt_lib0move(&___nl__im__125, nparser_priv0get_value_nop(___ref___rec__0));
#line 706
c_rt_lib0copy(&___nl__im__126, ___nl__im__125);
#line 706
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(1086), ___nl__im__126);
#line 706
c_rt_lib0clear(&___nl__im__125);
#line 706
c_rt_lib0clear(&___nl__im__126);
#line 707
___nl__rec_ptr__128 = &((*___ref___rec__0).state0field);
#line 707
c_rt_lib0move(&___nl__im__129,___get_global_string_const(450));
#line 707
___nl__bool__127 = ntokenizer0next_is(___nl__rec_ptr__128, ___nl__im__129);
#line 707
___nl__rec_ptr__128 = NULL;
#line 707
c_rt_lib0clear(&___nl__im__129);
#line 707
___nl__bool__127 = !___nl__bool__127;
#line 707
___nl__bool__127 = !___nl__bool__127;
#line 707
if(___nl__bool__127){ goto label_942;}
#line 707
c_rt_lib0move(&___nl__im__131, nparser_priv0parse_expr(___ref___rec__0));
#line 707
___nl__bool__130 = c_rt_lib0priv_is(___nl__im__131, ___get_global_string_const(83));
#line 707
if(___nl__bool__130){ goto label_938;}
#line 707
c_rt_lib0clear(&___nl__im__1);
#line 707
c_rt_lib0clear(&___nl__im__3);
#line 707
//clear ___nl__bool__4;
#line 707
c_rt_lib0clear(&___nl__im__6);
#line 707
//clear ___nl__bool__7;
#line 707
c_rt_lib0clear(&___nl__im__8);
#line 707
c_rt_lib0clear(&___nl__im__9);
#line 707
//clear ___nl__bool__10;
#line 707
c_rt_lib0clear(&___nl__im__11);
#line 707
c_rt_lib0clear(&___nl__im__12);
#line 707
c_rt_lib0clear(&___nl__im__13);
#line 707
//clear ___nl__bool__16;
#line 707
c_rt_lib0clear(&___nl__im__18);
#line 707
c_rt_lib0clear(&___nl__im__19);
#line 707
//clear ___nl__bool__21;
#line 707
c_rt_lib0clear(&___nl__im__22);
#line 707
c_rt_lib0clear(&___nl__im__23);
#line 707
c_rt_lib0clear(&___nl__im__24);
#line 707
//clear ___nl__bool__28;
#line 707
c_rt_lib0clear(&___nl__im__29);
#line 707
c_rt_lib0clear(&___nl__im__30);
#line 707
c_rt_lib0clear(&___nl__im__42);
#line 707
//clear ___nl__bool__47;
#line 707
c_rt_lib0clear(&___nl__im__48);
#line 707
c_rt_lib0clear(&___nl__im__49);
#line 707
//clear ___nl__bool__50;
#line 707
c_rt_lib0clear(&___nl__im__51);
#line 707
c_rt_lib0clear(&___nl__im__52);
#line 707
c_rt_lib0clear(&___nl__im__54);
#line 707
//clear ___nl__bool__59;
#line 707
c_rt_lib0clear(&___nl__im__60);
#line 707
c_rt_lib0clear(&___nl__im__61);
#line 707
//clear ___nl__bool__62;
#line 707
c_rt_lib0clear(&___nl__im__63);
#line 707
c_rt_lib0clear(&___nl__im__64);
#line 707
c_rt_lib0clear(&___nl__im__66);
#line 707
//clear ___nl__bool__67;
#line 707
c_rt_lib0clear(&___nl__im__68);
#line 707
c_rt_lib0clear(&___nl__im__70);
#line 707
//clear ___nl__bool__87;
#line 707
c_rt_lib0clear(&___nl__im__88);
#line 707
c_rt_lib0clear(&___nl__im__89);
#line 707
//clear ___nl__bool__90;
#line 707
c_rt_lib0clear(&___nl__im__91);
#line 707
c_rt_lib0clear(&___nl__im__92);
#line 707
c_rt_lib0clear(&___nl__im__94);
#line 707
//clear ___nl__bool__97;
#line 707
c_rt_lib0clear(&___nl__im__98);
#line 707
c_rt_lib0clear(&___nl__im__99);
#line 707
//clear ___nl__bool__100;
#line 707
c_rt_lib0clear(&___nl__im__101);
#line 707
c_rt_lib0clear(&___nl__im__102);
#line 707
c_rt_lib0clear(&___nl__im__104);
#line 707
//clear ___nl__bool__127;
#line 707
//clear ___nl__bool__130;
#line 707
return ___nl__im__131;
#line 707
label_938:
;
#line 707
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__131, ___get_global_string_const(83)));
#line 707
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(1086), ___nl__im__132);
#line 707
goto label_942;
#line 707
label_942:
;
#line 707
//clear ___nl__bool__127;
#line 707
//clear ___nl__bool__130;
#line 707
c_rt_lib0clear(&___nl__im__131);
#line 707
c_rt_lib0clear(&___nl__im__132);
#line 708
c_rt_lib0move(&___nl__im__133,___get_global_string_const(450));
#line 708
nparser_priv0eat(___ref___rec__0, ___nl__im__133);
#line 708
c_rt_lib0clear(&___nl__im__133);
#line 709
c_rt_lib0move(&___nl__im__134, nparser_priv0get_value_nop(___ref___rec__0));
#line 709
c_rt_lib0copy(&___nl__im__135, ___nl__im__134);
#line 709
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(372), ___nl__im__135);
#line 709
c_rt_lib0clear(&___nl__im__134);
#line 709
c_rt_lib0clear(&___nl__im__135);
#line 710
___nl__rec_ptr__137 = &((*___ref___rec__0).state0field);
#line 710
c_rt_lib0move(&___nl__im__138,___get_global_string_const(331));
#line 710
___nl__bool__136 = ntokenizer0next_is(___nl__rec_ptr__137, ___nl__im__138);
#line 710
___nl__rec_ptr__137 = NULL;
#line 710
c_rt_lib0clear(&___nl__im__138);
#line 710
___nl__bool__136 = !___nl__bool__136;
#line 710
___nl__bool__136 = !___nl__bool__136;
#line 710
if(___nl__bool__136){ goto label_1026;}
#line 710
c_rt_lib0move(&___nl__im__140, nparser_priv0parse_expr(___ref___rec__0));
#line 710
___nl__bool__139 = c_rt_lib0priv_is(___nl__im__140, ___get_global_string_const(83));
#line 710
if(___nl__bool__139){ goto label_1022;}
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
//clear ___nl__bool__87;
#line 710
c_rt_lib0clear(&___nl__im__88);
#line 710
c_rt_lib0clear(&___nl__im__89);
#line 710
//clear ___nl__bool__90;
#line 710
c_rt_lib0clear(&___nl__im__91);
#line 710
c_rt_lib0clear(&___nl__im__92);
#line 710
c_rt_lib0clear(&___nl__im__94);
#line 710
//clear ___nl__bool__97;
#line 710
c_rt_lib0clear(&___nl__im__98);
#line 710
c_rt_lib0clear(&___nl__im__99);
#line 710
//clear ___nl__bool__100;
#line 710
c_rt_lib0clear(&___nl__im__101);
#line 710
c_rt_lib0clear(&___nl__im__102);
#line 710
c_rt_lib0clear(&___nl__im__104);
#line 710
//clear ___nl__bool__136;
#line 710
//clear ___nl__bool__139;
#line 710
return ___nl__im__140;
#line 710
label_1022:
;
#line 710
c_rt_lib0move(&___nl__im__141, c_rt_lib0priv_as(___nl__im__140, ___get_global_string_const(83)));
#line 710
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(372), ___nl__im__141);
#line 710
goto label_1026;
#line 710
label_1026:
;
#line 710
//clear ___nl__bool__136;
#line 710
//clear ___nl__bool__139;
#line 710
c_rt_lib0clear(&___nl__im__140);
#line 710
c_rt_lib0clear(&___nl__im__141);
#line 711
c_rt_lib0move(&___nl__im__142,___get_global_string_const(331));
#line 711
nparser_priv0eat(___ref___rec__0, ___nl__im__142);
#line 711
c_rt_lib0clear(&___nl__im__142);
#line 712
c_rt_lib0move(&___nl__im__144, nparser_priv0parse_block(___ref___rec__0));
#line 712
___nl__bool__143 = c_rt_lib0priv_is(___nl__im__144, ___get_global_string_const(83));
#line 712
if(___nl__bool__143){ goto label_1092;}
#line 712
c_rt_lib0clear(&___nl__im__1);
#line 712
c_rt_lib0clear(&___nl__im__3);
#line 712
//clear ___nl__bool__4;
#line 712
c_rt_lib0clear(&___nl__im__6);
#line 712
//clear ___nl__bool__7;
#line 712
c_rt_lib0clear(&___nl__im__8);
#line 712
c_rt_lib0clear(&___nl__im__9);
#line 712
//clear ___nl__bool__10;
#line 712
c_rt_lib0clear(&___nl__im__11);
#line 712
c_rt_lib0clear(&___nl__im__12);
#line 712
c_rt_lib0clear(&___nl__im__13);
#line 712
//clear ___nl__bool__16;
#line 712
c_rt_lib0clear(&___nl__im__18);
#line 712
c_rt_lib0clear(&___nl__im__19);
#line 712
//clear ___nl__bool__21;
#line 712
c_rt_lib0clear(&___nl__im__22);
#line 712
c_rt_lib0clear(&___nl__im__23);
#line 712
c_rt_lib0clear(&___nl__im__24);
#line 712
//clear ___nl__bool__28;
#line 712
c_rt_lib0clear(&___nl__im__29);
#line 712
c_rt_lib0clear(&___nl__im__30);
#line 712
c_rt_lib0clear(&___nl__im__42);
#line 712
//clear ___nl__bool__47;
#line 712
c_rt_lib0clear(&___nl__im__48);
#line 712
c_rt_lib0clear(&___nl__im__49);
#line 712
//clear ___nl__bool__50;
#line 712
c_rt_lib0clear(&___nl__im__51);
#line 712
c_rt_lib0clear(&___nl__im__52);
#line 712
c_rt_lib0clear(&___nl__im__54);
#line 712
//clear ___nl__bool__59;
#line 712
c_rt_lib0clear(&___nl__im__60);
#line 712
c_rt_lib0clear(&___nl__im__61);
#line 712
//clear ___nl__bool__62;
#line 712
c_rt_lib0clear(&___nl__im__63);
#line 712
c_rt_lib0clear(&___nl__im__64);
#line 712
c_rt_lib0clear(&___nl__im__66);
#line 712
//clear ___nl__bool__67;
#line 712
c_rt_lib0clear(&___nl__im__68);
#line 712
c_rt_lib0clear(&___nl__im__70);
#line 712
//clear ___nl__bool__87;
#line 712
c_rt_lib0clear(&___nl__im__88);
#line 712
c_rt_lib0clear(&___nl__im__89);
#line 712
//clear ___nl__bool__90;
#line 712
c_rt_lib0clear(&___nl__im__91);
#line 712
c_rt_lib0clear(&___nl__im__92);
#line 712
c_rt_lib0clear(&___nl__im__94);
#line 712
//clear ___nl__bool__97;
#line 712
c_rt_lib0clear(&___nl__im__98);
#line 712
c_rt_lib0clear(&___nl__im__99);
#line 712
//clear ___nl__bool__100;
#line 712
c_rt_lib0clear(&___nl__im__101);
#line 712
c_rt_lib0clear(&___nl__im__102);
#line 712
c_rt_lib0clear(&___nl__im__104);
#line 712
//clear ___nl__bool__143;
#line 712
return ___nl__im__144;
#line 712
label_1092:
;
#line 712
c_rt_lib0move(&___nl__im__145, c_rt_lib0priv_as(___nl__im__144, ___get_global_string_const(83)));
#line 712
c_rt_lib0hash_set_value_dec(&___nl__im__104, ___get_global_string_const(237), ___nl__im__145);
#line 713
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1073), ___nl__im__104));
#line 714
goto label_2039;
#line 714
label_1097:
;
#line 714
___nl__rec_ptr__146 = &((*___ref___rec__0).state0field);
#line 714
c_rt_lib0move(&___nl__im__147,___get_global_string_const(315));
#line 714
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__146, ___nl__im__147);
#line 714
___nl__rec_ptr__146 = NULL;
#line 714
c_rt_lib0clear(&___nl__im__147);
#line 714
___nl__bool__4 = !___nl__bool__4;
#line 714
if(___nl__bool__4){ goto label_1171;}
#line 715
c_rt_lib0move(&___nl__im__150, nparser_priv0parse_block(___ref___rec__0));
#line 715
___nl__bool__149 = c_rt_lib0priv_is(___nl__im__150, ___get_global_string_const(83));
#line 715
if(___nl__bool__149){ goto label_1167;}
#line 715
c_rt_lib0clear(&___nl__im__1);
#line 715
c_rt_lib0clear(&___nl__im__3);
#line 715
//clear ___nl__bool__4;
#line 715
c_rt_lib0clear(&___nl__im__6);
#line 715
//clear ___nl__bool__7;
#line 715
c_rt_lib0clear(&___nl__im__8);
#line 715
c_rt_lib0clear(&___nl__im__9);
#line 715
//clear ___nl__bool__10;
#line 715
c_rt_lib0clear(&___nl__im__11);
#line 715
c_rt_lib0clear(&___nl__im__12);
#line 715
c_rt_lib0clear(&___nl__im__13);
#line 715
//clear ___nl__bool__16;
#line 715
c_rt_lib0clear(&___nl__im__18);
#line 715
c_rt_lib0clear(&___nl__im__19);
#line 715
//clear ___nl__bool__21;
#line 715
c_rt_lib0clear(&___nl__im__22);
#line 715
c_rt_lib0clear(&___nl__im__23);
#line 715
c_rt_lib0clear(&___nl__im__24);
#line 715
//clear ___nl__bool__28;
#line 715
c_rt_lib0clear(&___nl__im__29);
#line 715
c_rt_lib0clear(&___nl__im__30);
#line 715
c_rt_lib0clear(&___nl__im__42);
#line 715
//clear ___nl__bool__47;
#line 715
c_rt_lib0clear(&___nl__im__48);
#line 715
c_rt_lib0clear(&___nl__im__49);
#line 715
//clear ___nl__bool__50;
#line 715
c_rt_lib0clear(&___nl__im__51);
#line 715
c_rt_lib0clear(&___nl__im__52);
#line 715
c_rt_lib0clear(&___nl__im__54);
#line 715
//clear ___nl__bool__59;
#line 715
c_rt_lib0clear(&___nl__im__60);
#line 715
c_rt_lib0clear(&___nl__im__61);
#line 715
//clear ___nl__bool__62;
#line 715
c_rt_lib0clear(&___nl__im__63);
#line 715
c_rt_lib0clear(&___nl__im__64);
#line 715
c_rt_lib0clear(&___nl__im__66);
#line 715
//clear ___nl__bool__67;
#line 715
c_rt_lib0clear(&___nl__im__68);
#line 715
c_rt_lib0clear(&___nl__im__70);
#line 715
//clear ___nl__bool__87;
#line 715
c_rt_lib0clear(&___nl__im__88);
#line 715
c_rt_lib0clear(&___nl__im__89);
#line 715
//clear ___nl__bool__90;
#line 715
c_rt_lib0clear(&___nl__im__91);
#line 715
c_rt_lib0clear(&___nl__im__92);
#line 715
c_rt_lib0clear(&___nl__im__94);
#line 715
//clear ___nl__bool__97;
#line 715
c_rt_lib0clear(&___nl__im__98);
#line 715
c_rt_lib0clear(&___nl__im__99);
#line 715
//clear ___nl__bool__100;
#line 715
c_rt_lib0clear(&___nl__im__101);
#line 715
c_rt_lib0clear(&___nl__im__102);
#line 715
c_rt_lib0clear(&___nl__im__104);
#line 715
//clear ___nl__bool__143;
#line 715
c_rt_lib0clear(&___nl__im__144);
#line 715
c_rt_lib0clear(&___nl__im__145);
#line 715
c_rt_lib0clear(&___nl__im__148);
#line 715
//clear ___nl__bool__149;
#line 715
return ___nl__im__150;
#line 715
label_1167:
;
#line 715
c_rt_lib0move(&___nl__im__148, c_rt_lib0priv_as(___nl__im__150, ___get_global_string_const(83)));
#line 716
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__148, ___get_global_string_const(237)));
#line 717
goto label_2039;
#line 717
label_1171:
;
#line 717
c_rt_lib0move(&___nl__im__151,___get_global_string_const(1080));
#line 717
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__151);
#line 717
c_rt_lib0clear(&___nl__im__151);
#line 717
___nl__bool__4 = !___nl__bool__4;
#line 717
if(___nl__bool__4){ goto label_1179;}
#line 718
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(1080)));
#line 719
goto label_2039;
#line 719
label_1179:
;
#line 719
c_rt_lib0move(&___nl__im__152,___get_global_string_const(1081));
#line 719
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__152);
#line 719
c_rt_lib0clear(&___nl__im__152);
#line 719
___nl__bool__4 = !___nl__bool__4;
#line 719
if(___nl__bool__4){ goto label_1187;}
#line 720
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(1081)));
#line 721
goto label_2039;
#line 721
label_1187:
;
#line 721
c_rt_lib0move(&___nl__im__153,___get_global_string_const(257));
#line 721
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__153);
#line 721
c_rt_lib0clear(&___nl__im__153);
#line 721
___nl__bool__4 = !___nl__bool__4;
#line 721
if(___nl__bool__4){ goto label_1312;}
#line 722
___nl__rec_ptr__155 = &((*___ref___rec__0).state0field);
#line 722
c_rt_lib0move(&___nl__im__154, ntokenizer0get_token(___nl__rec_ptr__155));
#line 722
___nl__rec_ptr__155 = NULL;
#line 723
___nl__bool__156 = false;
#line 724
c_rt_lib0move(&___nl__im__157, nparser_priv0get_end_list());
#line 724
___nl__int__159 = 0;
#line 724
___nl__int__160 = 1;
#line 724
___nl__int__161 = c_rt_lib0array_len(___nl__im__157);
#line 724
label_1201:
;
#line 724
___nl__bool__162 = ___nl__int__159 >= ___nl__int__161;
#line 724
if(___nl__bool__162){ goto label_1218;}
#line 724
c_rt_lib0move(&___nl__im__163, c_rt_lib0array_get(___nl__im__157, ___nl__int__159));
#line 724
c_rt_lib0copy(&___nl__im__158, ___nl__im__163);
#line 725
___nl__bool__164 = c_rt_lib0eq(___nl__im__154, ___nl__im__158);
#line 725
___nl__bool__164 = !___nl__bool__164;
#line 725
if(___nl__bool__164){ goto label_1213;}
#line 726
___nl__bool__156 = true;
#line 727
//clear ___nl__bool__164;
#line 727
goto label_1218;
#line 728
goto label_1213;
#line 728
label_1213:
;
#line 728
//clear ___nl__bool__164;
#line 728
c_rt_lib0clear(&___nl__im__158);
#line 729
___nl__int__159 = ___nl__int__159 + ___nl__int__160;
#line 729
goto label_1201;
#line 729
label_1218:
;
#line 730
___nl__bool__165 = ___nl__bool__156;
#line 730
___nl__bool__165 = !___nl__bool__165;
#line 730
if(___nl__bool__165){ goto label_1226;}
#line 731
c_rt_lib0move(&___nl__im__166, nparser_priv0get_value_nop(___ref___rec__0));
#line 731
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__166));
#line 731
c_rt_lib0clear(&___nl__im__166);
#line 732
goto label_1306;
#line 732
label_1226:
;
#line 733
c_rt_lib0move(&___nl__im__169, nparser_priv0parse_expr(___ref___rec__0));
#line 733
___nl__bool__168 = c_rt_lib0priv_is(___nl__im__169, ___get_global_string_const(83));
#line 733
if(___nl__bool__168){ goto label_1302;}
#line 733
c_rt_lib0clear(&___nl__im__1);
#line 733
c_rt_lib0clear(&___nl__im__3);
#line 733
//clear ___nl__bool__4;
#line 733
c_rt_lib0clear(&___nl__im__6);
#line 733
//clear ___nl__bool__7;
#line 733
c_rt_lib0clear(&___nl__im__8);
#line 733
c_rt_lib0clear(&___nl__im__9);
#line 733
//clear ___nl__bool__10;
#line 733
c_rt_lib0clear(&___nl__im__11);
#line 733
c_rt_lib0clear(&___nl__im__12);
#line 733
c_rt_lib0clear(&___nl__im__13);
#line 733
//clear ___nl__bool__16;
#line 733
c_rt_lib0clear(&___nl__im__18);
#line 733
c_rt_lib0clear(&___nl__im__19);
#line 733
//clear ___nl__bool__21;
#line 733
c_rt_lib0clear(&___nl__im__22);
#line 733
c_rt_lib0clear(&___nl__im__23);
#line 733
c_rt_lib0clear(&___nl__im__24);
#line 733
//clear ___nl__bool__28;
#line 733
c_rt_lib0clear(&___nl__im__29);
#line 733
c_rt_lib0clear(&___nl__im__30);
#line 733
c_rt_lib0clear(&___nl__im__42);
#line 733
//clear ___nl__bool__47;
#line 733
c_rt_lib0clear(&___nl__im__48);
#line 733
c_rt_lib0clear(&___nl__im__49);
#line 733
//clear ___nl__bool__50;
#line 733
c_rt_lib0clear(&___nl__im__51);
#line 733
c_rt_lib0clear(&___nl__im__52);
#line 733
c_rt_lib0clear(&___nl__im__54);
#line 733
//clear ___nl__bool__59;
#line 733
c_rt_lib0clear(&___nl__im__60);
#line 733
c_rt_lib0clear(&___nl__im__61);
#line 733
//clear ___nl__bool__62;
#line 733
c_rt_lib0clear(&___nl__im__63);
#line 733
c_rt_lib0clear(&___nl__im__64);
#line 733
c_rt_lib0clear(&___nl__im__66);
#line 733
//clear ___nl__bool__67;
#line 733
c_rt_lib0clear(&___nl__im__68);
#line 733
c_rt_lib0clear(&___nl__im__70);
#line 733
//clear ___nl__bool__87;
#line 733
c_rt_lib0clear(&___nl__im__88);
#line 733
c_rt_lib0clear(&___nl__im__89);
#line 733
//clear ___nl__bool__90;
#line 733
c_rt_lib0clear(&___nl__im__91);
#line 733
c_rt_lib0clear(&___nl__im__92);
#line 733
c_rt_lib0clear(&___nl__im__94);
#line 733
//clear ___nl__bool__97;
#line 733
c_rt_lib0clear(&___nl__im__98);
#line 733
c_rt_lib0clear(&___nl__im__99);
#line 733
//clear ___nl__bool__100;
#line 733
c_rt_lib0clear(&___nl__im__101);
#line 733
c_rt_lib0clear(&___nl__im__102);
#line 733
c_rt_lib0clear(&___nl__im__104);
#line 733
//clear ___nl__bool__143;
#line 733
c_rt_lib0clear(&___nl__im__144);
#line 733
c_rt_lib0clear(&___nl__im__145);
#line 733
c_rt_lib0clear(&___nl__im__148);
#line 733
//clear ___nl__bool__149;
#line 733
c_rt_lib0clear(&___nl__im__150);
#line 733
c_rt_lib0clear(&___nl__im__154);
#line 733
//clear ___nl__bool__156;
#line 733
c_rt_lib0clear(&___nl__im__157);
#line 733
c_rt_lib0clear(&___nl__im__158);
#line 733
//clear ___nl__int__159;
#line 733
//clear ___nl__int__160;
#line 733
//clear ___nl__int__161;
#line 733
//clear ___nl__bool__162;
#line 733
c_rt_lib0clear(&___nl__im__163);
#line 733
//clear ___nl__bool__165;
#line 733
c_rt_lib0clear(&___nl__im__167);
#line 733
//clear ___nl__bool__168;
#line 733
return ___nl__im__169;
#line 733
label_1302:
;
#line 733
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__169, ___get_global_string_const(83)));
#line 734
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__167));
#line 735
goto label_1306;
#line 735
label_1306:
;
#line 735
//clear ___nl__bool__165;
#line 735
c_rt_lib0clear(&___nl__im__167);
#line 735
//clear ___nl__bool__168;
#line 735
c_rt_lib0clear(&___nl__im__169);
#line 736
goto label_2039;
#line 736
label_1312:
;
#line 736
c_rt_lib0move(&___nl__im__170,___get_global_string_const(1082));
#line 736
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__170);
#line 736
c_rt_lib0clear(&___nl__im__170);
#line 736
___nl__bool__4 = !___nl__bool__4;
#line 736
if(___nl__bool__4){ goto label_1525;}
#line 737
c_rt_lib0move(&___nl__im__171,___get_global_string_const(465));
#line 737
nparser_priv0eat(___ref___rec__0, ___nl__im__171);
#line 737
c_rt_lib0clear(&___nl__im__171);
#line 738
c_rt_lib0move(&___nl__im__174, nparser_priv0parse_expr(___ref___rec__0));
#line 738
___nl__bool__173 = c_rt_lib0priv_is(___nl__im__174, ___get_global_string_const(83));
#line 738
if(___nl__bool__173){ goto label_1395;}
#line 738
c_rt_lib0clear(&___nl__im__1);
#line 738
c_rt_lib0clear(&___nl__im__3);
#line 738
//clear ___nl__bool__4;
#line 738
c_rt_lib0clear(&___nl__im__6);
#line 738
//clear ___nl__bool__7;
#line 738
c_rt_lib0clear(&___nl__im__8);
#line 738
c_rt_lib0clear(&___nl__im__9);
#line 738
//clear ___nl__bool__10;
#line 738
c_rt_lib0clear(&___nl__im__11);
#line 738
c_rt_lib0clear(&___nl__im__12);
#line 738
c_rt_lib0clear(&___nl__im__13);
#line 738
//clear ___nl__bool__16;
#line 738
c_rt_lib0clear(&___nl__im__18);
#line 738
c_rt_lib0clear(&___nl__im__19);
#line 738
//clear ___nl__bool__21;
#line 738
c_rt_lib0clear(&___nl__im__22);
#line 738
c_rt_lib0clear(&___nl__im__23);
#line 738
c_rt_lib0clear(&___nl__im__24);
#line 738
//clear ___nl__bool__28;
#line 738
c_rt_lib0clear(&___nl__im__29);
#line 738
c_rt_lib0clear(&___nl__im__30);
#line 738
c_rt_lib0clear(&___nl__im__42);
#line 738
//clear ___nl__bool__47;
#line 738
c_rt_lib0clear(&___nl__im__48);
#line 738
c_rt_lib0clear(&___nl__im__49);
#line 738
//clear ___nl__bool__50;
#line 738
c_rt_lib0clear(&___nl__im__51);
#line 738
c_rt_lib0clear(&___nl__im__52);
#line 738
c_rt_lib0clear(&___nl__im__54);
#line 738
//clear ___nl__bool__59;
#line 738
c_rt_lib0clear(&___nl__im__60);
#line 738
c_rt_lib0clear(&___nl__im__61);
#line 738
//clear ___nl__bool__62;
#line 738
c_rt_lib0clear(&___nl__im__63);
#line 738
c_rt_lib0clear(&___nl__im__64);
#line 738
c_rt_lib0clear(&___nl__im__66);
#line 738
//clear ___nl__bool__67;
#line 738
c_rt_lib0clear(&___nl__im__68);
#line 738
c_rt_lib0clear(&___nl__im__70);
#line 738
//clear ___nl__bool__87;
#line 738
c_rt_lib0clear(&___nl__im__88);
#line 738
c_rt_lib0clear(&___nl__im__89);
#line 738
//clear ___nl__bool__90;
#line 738
c_rt_lib0clear(&___nl__im__91);
#line 738
c_rt_lib0clear(&___nl__im__92);
#line 738
c_rt_lib0clear(&___nl__im__94);
#line 738
//clear ___nl__bool__97;
#line 738
c_rt_lib0clear(&___nl__im__98);
#line 738
c_rt_lib0clear(&___nl__im__99);
#line 738
//clear ___nl__bool__100;
#line 738
c_rt_lib0clear(&___nl__im__101);
#line 738
c_rt_lib0clear(&___nl__im__102);
#line 738
c_rt_lib0clear(&___nl__im__104);
#line 738
//clear ___nl__bool__143;
#line 738
c_rt_lib0clear(&___nl__im__144);
#line 738
c_rt_lib0clear(&___nl__im__145);
#line 738
c_rt_lib0clear(&___nl__im__148);
#line 738
//clear ___nl__bool__149;
#line 738
c_rt_lib0clear(&___nl__im__150);
#line 738
c_rt_lib0clear(&___nl__im__154);
#line 738
//clear ___nl__bool__156;
#line 738
c_rt_lib0clear(&___nl__im__157);
#line 738
c_rt_lib0clear(&___nl__im__158);
#line 738
//clear ___nl__int__159;
#line 738
//clear ___nl__int__160;
#line 738
//clear ___nl__int__161;
#line 738
//clear ___nl__bool__162;
#line 738
c_rt_lib0clear(&___nl__im__163);
#line 738
c_rt_lib0clear(&___nl__im__172);
#line 738
//clear ___nl__bool__173;
#line 738
return ___nl__im__174;
#line 738
label_1395:
;
#line 738
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__174, ___get_global_string_const(83)));
#line 739
c_rt_lib0move(&___nl__im__176, c_rt_lib0array_mk(0));
#line 739
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_mk(2, ___get_global_string_const(234), ___nl__im__172, ___get_global_string_const(1094), ___nl__im__176));
#line 739
c_rt_lib0clear(&___nl__im__176);
#line 740
c_rt_lib0move(&___nl__im__177,___get_global_string_const(331));
#line 740
nparser_priv0eat(___ref___rec__0, ___nl__im__177);
#line 740
c_rt_lib0clear(&___nl__im__177);
#line 741
___nl__rec_ptr__179 = &((*___ref___rec__0).state0field);
#line 741
c_rt_lib0move(&___nl__im__178, ntokenizer0get_place(___nl__rec_ptr__179));
#line 741
___nl__rec_ptr__179 = NULL;
#line 742
label_1406:
;
#line 742
c_rt_lib0move(&___nl__im__181,___get_global_string_const(1215));
#line 742
___nl__bool__180 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__181);
#line 742
c_rt_lib0clear(&___nl__im__181);
#line 742
___nl__bool__180 = !___nl__bool__180;
#line 742
if(___nl__bool__180){ goto label_1522;}
#line 743
c_rt_lib0move(&___nl__im__183, nparser_priv0parse_variant_decl(___ref___rec__0));
#line 743
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_mk(1, ___get_global_string_const(571), ___nl__im__183));
#line 743
c_rt_lib0clear(&___nl__im__183);
#line 744
___nl__rec_ptr__186 = &((*___ref___rec__0).state0field);
#line 744
c_rt_lib0move(&___nl__im__185, ntokenizer0get_place_ws(___nl__rec_ptr__186));
#line 744
___nl__rec_ptr__186 = NULL;
#line 744
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__178, ___get_global_string_const(742), ___nl__im__185));
#line 744
c_rt_lib0clear(&___nl__im__185);
#line 744
c_rt_lib0copy(&___nl__im__187, ___nl__im__184);
#line 744
c_rt_lib0hash_set_value_dec(&___nl__im__182, ___get_global_string_const(231), ___nl__im__187);
#line 744
c_rt_lib0clear(&___nl__im__184);
#line 744
c_rt_lib0clear(&___nl__im__187);
#line 745
c_rt_lib0move(&___nl__im__189, nparser_priv0parse_block(___ref___rec__0));
#line 745
___nl__bool__188 = c_rt_lib0priv_is(___nl__im__189, ___get_global_string_const(83));
#line 745
if(___nl__bool__188){ goto label_1504;}
#line 745
c_rt_lib0clear(&___nl__im__1);
#line 745
c_rt_lib0clear(&___nl__im__3);
#line 745
//clear ___nl__bool__4;
#line 745
c_rt_lib0clear(&___nl__im__6);
#line 745
//clear ___nl__bool__7;
#line 745
c_rt_lib0clear(&___nl__im__8);
#line 745
c_rt_lib0clear(&___nl__im__9);
#line 745
//clear ___nl__bool__10;
#line 745
c_rt_lib0clear(&___nl__im__11);
#line 745
c_rt_lib0clear(&___nl__im__12);
#line 745
c_rt_lib0clear(&___nl__im__13);
#line 745
//clear ___nl__bool__16;
#line 745
c_rt_lib0clear(&___nl__im__18);
#line 745
c_rt_lib0clear(&___nl__im__19);
#line 745
//clear ___nl__bool__21;
#line 745
c_rt_lib0clear(&___nl__im__22);
#line 745
c_rt_lib0clear(&___nl__im__23);
#line 745
c_rt_lib0clear(&___nl__im__24);
#line 745
//clear ___nl__bool__28;
#line 745
c_rt_lib0clear(&___nl__im__29);
#line 745
c_rt_lib0clear(&___nl__im__30);
#line 745
c_rt_lib0clear(&___nl__im__42);
#line 745
//clear ___nl__bool__47;
#line 745
c_rt_lib0clear(&___nl__im__48);
#line 745
c_rt_lib0clear(&___nl__im__49);
#line 745
//clear ___nl__bool__50;
#line 745
c_rt_lib0clear(&___nl__im__51);
#line 745
c_rt_lib0clear(&___nl__im__52);
#line 745
c_rt_lib0clear(&___nl__im__54);
#line 745
//clear ___nl__bool__59;
#line 745
c_rt_lib0clear(&___nl__im__60);
#line 745
c_rt_lib0clear(&___nl__im__61);
#line 745
//clear ___nl__bool__62;
#line 745
c_rt_lib0clear(&___nl__im__63);
#line 745
c_rt_lib0clear(&___nl__im__64);
#line 745
c_rt_lib0clear(&___nl__im__66);
#line 745
//clear ___nl__bool__67;
#line 745
c_rt_lib0clear(&___nl__im__68);
#line 745
c_rt_lib0clear(&___nl__im__70);
#line 745
//clear ___nl__bool__87;
#line 745
c_rt_lib0clear(&___nl__im__88);
#line 745
c_rt_lib0clear(&___nl__im__89);
#line 745
//clear ___nl__bool__90;
#line 745
c_rt_lib0clear(&___nl__im__91);
#line 745
c_rt_lib0clear(&___nl__im__92);
#line 745
c_rt_lib0clear(&___nl__im__94);
#line 745
//clear ___nl__bool__97;
#line 745
c_rt_lib0clear(&___nl__im__98);
#line 745
c_rt_lib0clear(&___nl__im__99);
#line 745
//clear ___nl__bool__100;
#line 745
c_rt_lib0clear(&___nl__im__101);
#line 745
c_rt_lib0clear(&___nl__im__102);
#line 745
c_rt_lib0clear(&___nl__im__104);
#line 745
//clear ___nl__bool__143;
#line 745
c_rt_lib0clear(&___nl__im__144);
#line 745
c_rt_lib0clear(&___nl__im__145);
#line 745
c_rt_lib0clear(&___nl__im__148);
#line 745
//clear ___nl__bool__149;
#line 745
c_rt_lib0clear(&___nl__im__150);
#line 745
c_rt_lib0clear(&___nl__im__154);
#line 745
//clear ___nl__bool__156;
#line 745
c_rt_lib0clear(&___nl__im__157);
#line 745
c_rt_lib0clear(&___nl__im__158);
#line 745
//clear ___nl__int__159;
#line 745
//clear ___nl__int__160;
#line 745
//clear ___nl__int__161;
#line 745
//clear ___nl__bool__162;
#line 745
c_rt_lib0clear(&___nl__im__163);
#line 745
c_rt_lib0clear(&___nl__im__172);
#line 745
//clear ___nl__bool__173;
#line 745
c_rt_lib0clear(&___nl__im__174);
#line 745
c_rt_lib0clear(&___nl__im__175);
#line 745
c_rt_lib0clear(&___nl__im__178);
#line 745
//clear ___nl__bool__180;
#line 745
c_rt_lib0clear(&___nl__im__182);
#line 745
//clear ___nl__bool__188;
#line 745
return ___nl__im__189;
#line 745
label_1504:
;
#line 745
c_rt_lib0move(&___nl__im__190, c_rt_lib0priv_as(___nl__im__189, ___get_global_string_const(83)));
#line 745
c_rt_lib0hash_set_value_dec(&___nl__im__182, ___get_global_string_const(237), ___nl__im__190);
#line 746
c_rt_lib0move(&___nl__im__191,___get_global_string_const(1094));
#line 746
c_rt_lib0move(&___nl__im__191, c_rt_lib0get_ref_hash(___nl__im__175, ___nl__im__191));
#line 746
c_rt_lib0delete(array0push(&___nl__im__191, ___nl__im__182));
#line 746
c_rt_lib0move(&___nl__string__192,___get_global_string_const(1094));
#line 746
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__175, ___nl__string__192, ___nl__im__191));
#line 746
c_rt_lib0clear(&___nl__im__191);
#line 746
c_rt_lib0clear(&___nl__string__192);
#line 747
___nl__rec_ptr__193 = &((*___ref___rec__0).state0field);
#line 747
c_rt_lib0move(&___nl__im__178, ntokenizer0get_place(___nl__rec_ptr__193));
#line 747
___nl__rec_ptr__193 = NULL;
#line 747
c_rt_lib0clear(&___nl__im__182);
#line 747
//clear ___nl__bool__188;
#line 747
c_rt_lib0clear(&___nl__im__189);
#line 747
c_rt_lib0clear(&___nl__im__190);
#line 748
goto label_1406;
#line 748
label_1522:
;
#line 749
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1082), ___nl__im__175));
#line 750
goto label_2039;
#line 750
label_1525:
;
#line 750
c_rt_lib0move(&___nl__im__194,___get_global_string_const(258));
#line 750
___nl__bool__4 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__194);
#line 750
c_rt_lib0clear(&___nl__im__194);
#line 750
___nl__bool__4 = !___nl__bool__4;
#line 750
if(___nl__bool__4){ goto label_1631;}
#line 751
c_rt_lib0move(&___nl__im__195, c_rt_lib0array_mk(0));
#line 752
c_rt_lib0move(&___nl__im__197,___get_global_string_const(465));
#line 752
___nl__bool__196 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__197);
#line 752
c_rt_lib0clear(&___nl__im__197);
#line 752
___nl__bool__196 = !___nl__bool__196;
#line 752
if(___nl__bool__196){ goto label_1625;}
#line 753
c_rt_lib0move(&___nl__im__199, nparser_priv0parse_expr_list(___ref___rec__0));
#line 753
___nl__bool__198 = c_rt_lib0priv_is(___nl__im__199, ___get_global_string_const(83));
#line 753
if(___nl__bool__198){ goto label_1622;}
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
c_rt_lib0clear(&___nl__im__163);
#line 753
c_rt_lib0clear(&___nl__im__172);
#line 753
//clear ___nl__bool__173;
#line 753
c_rt_lib0clear(&___nl__im__174);
#line 753
c_rt_lib0clear(&___nl__im__175);
#line 753
c_rt_lib0clear(&___nl__im__178);
#line 753
//clear ___nl__bool__180;
#line 753
c_rt_lib0clear(&___nl__im__182);
#line 753
//clear ___nl__bool__188;
#line 753
c_rt_lib0clear(&___nl__im__189);
#line 753
c_rt_lib0clear(&___nl__im__190);
#line 753
c_rt_lib0clear(&___nl__im__195);
#line 753
//clear ___nl__bool__196;
#line 753
//clear ___nl__bool__198;
#line 753
return ___nl__im__199;
#line 753
label_1622:
;
#line 753
c_rt_lib0move(&___nl__im__195, c_rt_lib0priv_as(___nl__im__199, ___get_global_string_const(83)));
#line 754
goto label_1625;
#line 754
label_1625:
;
#line 754
//clear ___nl__bool__196;
#line 754
//clear ___nl__bool__198;
#line 754
c_rt_lib0clear(&___nl__im__199);
#line 755
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(258), ___nl__im__195));
#line 756
goto label_2039;
#line 756
label_1631:
;
#line 756
___nl__rec_ptr__200 = &((*___ref___rec__0).state0field);
#line 756
c_rt_lib0move(&___nl__im__201,___get_global_string_const(515));
#line 756
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__200, ___nl__im__201);
#line 756
___nl__rec_ptr__200 = NULL;
#line 756
c_rt_lib0clear(&___nl__im__201);
#line 756
___nl__bool__4 = !___nl__bool__4;
#line 756
if(___nl__bool__4){ goto label_1731;}
#line 757
c_rt_lib0move(&___nl__im__204, nparser_priv0parse_var_decl(___ref___rec__0));
#line 757
___nl__bool__203 = c_rt_lib0priv_is(___nl__im__204, ___get_global_string_const(83));
#line 757
if(___nl__bool__203){ goto label_1724;}
#line 757
c_rt_lib0clear(&___nl__im__1);
#line 757
c_rt_lib0clear(&___nl__im__3);
#line 757
//clear ___nl__bool__4;
#line 757
c_rt_lib0clear(&___nl__im__6);
#line 757
//clear ___nl__bool__7;
#line 757
c_rt_lib0clear(&___nl__im__8);
#line 757
c_rt_lib0clear(&___nl__im__9);
#line 757
//clear ___nl__bool__10;
#line 757
c_rt_lib0clear(&___nl__im__11);
#line 757
c_rt_lib0clear(&___nl__im__12);
#line 757
c_rt_lib0clear(&___nl__im__13);
#line 757
//clear ___nl__bool__16;
#line 757
c_rt_lib0clear(&___nl__im__18);
#line 757
c_rt_lib0clear(&___nl__im__19);
#line 757
//clear ___nl__bool__21;
#line 757
c_rt_lib0clear(&___nl__im__22);
#line 757
c_rt_lib0clear(&___nl__im__23);
#line 757
c_rt_lib0clear(&___nl__im__24);
#line 757
//clear ___nl__bool__28;
#line 757
c_rt_lib0clear(&___nl__im__29);
#line 757
c_rt_lib0clear(&___nl__im__30);
#line 757
c_rt_lib0clear(&___nl__im__42);
#line 757
//clear ___nl__bool__47;
#line 757
c_rt_lib0clear(&___nl__im__48);
#line 757
c_rt_lib0clear(&___nl__im__49);
#line 757
//clear ___nl__bool__50;
#line 757
c_rt_lib0clear(&___nl__im__51);
#line 757
c_rt_lib0clear(&___nl__im__52);
#line 757
c_rt_lib0clear(&___nl__im__54);
#line 757
//clear ___nl__bool__59;
#line 757
c_rt_lib0clear(&___nl__im__60);
#line 757
c_rt_lib0clear(&___nl__im__61);
#line 757
//clear ___nl__bool__62;
#line 757
c_rt_lib0clear(&___nl__im__63);
#line 757
c_rt_lib0clear(&___nl__im__64);
#line 757
c_rt_lib0clear(&___nl__im__66);
#line 757
//clear ___nl__bool__67;
#line 757
c_rt_lib0clear(&___nl__im__68);
#line 757
c_rt_lib0clear(&___nl__im__70);
#line 757
//clear ___nl__bool__87;
#line 757
c_rt_lib0clear(&___nl__im__88);
#line 757
c_rt_lib0clear(&___nl__im__89);
#line 757
//clear ___nl__bool__90;
#line 757
c_rt_lib0clear(&___nl__im__91);
#line 757
c_rt_lib0clear(&___nl__im__92);
#line 757
c_rt_lib0clear(&___nl__im__94);
#line 757
//clear ___nl__bool__97;
#line 757
c_rt_lib0clear(&___nl__im__98);
#line 757
c_rt_lib0clear(&___nl__im__99);
#line 757
//clear ___nl__bool__100;
#line 757
c_rt_lib0clear(&___nl__im__101);
#line 757
c_rt_lib0clear(&___nl__im__102);
#line 757
c_rt_lib0clear(&___nl__im__104);
#line 757
//clear ___nl__bool__143;
#line 757
c_rt_lib0clear(&___nl__im__144);
#line 757
c_rt_lib0clear(&___nl__im__145);
#line 757
c_rt_lib0clear(&___nl__im__148);
#line 757
//clear ___nl__bool__149;
#line 757
c_rt_lib0clear(&___nl__im__150);
#line 757
c_rt_lib0clear(&___nl__im__154);
#line 757
//clear ___nl__bool__156;
#line 757
c_rt_lib0clear(&___nl__im__157);
#line 757
c_rt_lib0clear(&___nl__im__158);
#line 757
//clear ___nl__int__159;
#line 757
//clear ___nl__int__160;
#line 757
//clear ___nl__int__161;
#line 757
//clear ___nl__bool__162;
#line 757
c_rt_lib0clear(&___nl__im__163);
#line 757
c_rt_lib0clear(&___nl__im__172);
#line 757
//clear ___nl__bool__173;
#line 757
c_rt_lib0clear(&___nl__im__174);
#line 757
c_rt_lib0clear(&___nl__im__175);
#line 757
c_rt_lib0clear(&___nl__im__178);
#line 757
//clear ___nl__bool__180;
#line 757
c_rt_lib0clear(&___nl__im__182);
#line 757
//clear ___nl__bool__188;
#line 757
c_rt_lib0clear(&___nl__im__189);
#line 757
c_rt_lib0clear(&___nl__im__190);
#line 757
c_rt_lib0clear(&___nl__im__195);
#line 757
c_rt_lib0clear(&___nl__im__202);
#line 757
//clear ___nl__bool__203;
#line 757
return ___nl__im__204;
#line 757
label_1724:
;
#line 757
c_rt_lib0move(&___nl__im__202, c_rt_lib0priv_as(___nl__im__204, ___get_global_string_const(83)));
#line 758
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__202));
#line 759
c_rt_lib0move(&___nl__im__205,___get_global_string_const(450));
#line 759
nparser_priv0eat(___ref___rec__0, ___nl__im__205);
#line 759
c_rt_lib0clear(&___nl__im__205);
#line 760
goto label_2039;
#line 760
label_1731:
;
#line 760
___nl__rec_ptr__206 = &((*___ref___rec__0).state0field);
#line 760
c_rt_lib0move(&___nl__im__207,___get_global_string_const(1084));
#line 760
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__206, ___nl__im__207);
#line 760
___nl__rec_ptr__206 = NULL;
#line 760
c_rt_lib0clear(&___nl__im__207);
#line 760
___nl__bool__4 = !___nl__bool__4;
#line 760
if(___nl__bool__4){ goto label_1834;}
#line 761
c_rt_lib0move(&___nl__im__208,___get_global_string_const(1084));
#line 761
nparser_priv0eat(___ref___rec__0, ___nl__im__208);
#line 761
c_rt_lib0clear(&___nl__im__208);
#line 762
c_rt_lib0move(&___nl__im__211, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 762
___nl__bool__210 = c_rt_lib0priv_is(___nl__im__211, ___get_global_string_const(83));
#line 762
if(___nl__bool__210){ goto label_1830;}
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
c_rt_lib0clear(&___nl__im__163);
#line 762
c_rt_lib0clear(&___nl__im__172);
#line 762
//clear ___nl__bool__173;
#line 762
c_rt_lib0clear(&___nl__im__174);
#line 762
c_rt_lib0clear(&___nl__im__175);
#line 762
c_rt_lib0clear(&___nl__im__178);
#line 762
//clear ___nl__bool__180;
#line 762
c_rt_lib0clear(&___nl__im__182);
#line 762
//clear ___nl__bool__188;
#line 762
c_rt_lib0clear(&___nl__im__189);
#line 762
c_rt_lib0clear(&___nl__im__190);
#line 762
c_rt_lib0clear(&___nl__im__195);
#line 762
c_rt_lib0clear(&___nl__im__202);
#line 762
//clear ___nl__bool__203;
#line 762
c_rt_lib0clear(&___nl__im__204);
#line 762
c_rt_lib0clear(&___nl__im__209);
#line 762
//clear ___nl__bool__210;
#line 762
return ___nl__im__211;
#line 762
label_1830:
;
#line 762
c_rt_lib0move(&___nl__im__209, c_rt_lib0priv_as(___nl__im__211, ___get_global_string_const(83)));
#line 763
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1084), ___nl__im__209));
#line 764
goto label_2039;
#line 764
label_1834:
;
#line 764
___nl__rec_ptr__212 = &((*___ref___rec__0).state0field);
#line 764
c_rt_lib0move(&___nl__im__213,___get_global_string_const(185));
#line 764
___nl__bool__4 = ntokenizer0next_is(___nl__rec_ptr__212, ___nl__im__213);
#line 764
___nl__rec_ptr__212 = NULL;
#line 764
c_rt_lib0clear(&___nl__im__213);
#line 764
___nl__bool__4 = !___nl__bool__4;
#line 764
if(___nl__bool__4){ goto label_1940;}
#line 765
c_rt_lib0move(&___nl__im__214,___get_global_string_const(185));
#line 765
nparser_priv0eat(___ref___rec__0, ___nl__im__214);
#line 765
c_rt_lib0clear(&___nl__im__214);
#line 766
c_rt_lib0move(&___nl__im__217, nparser_priv0parse_try_ensure(___ref___rec__0));
#line 766
___nl__bool__216 = c_rt_lib0priv_is(___nl__im__217, ___get_global_string_const(83));
#line 766
if(___nl__bool__216){ goto label_1936;}
#line 766
c_rt_lib0clear(&___nl__im__1);
#line 766
c_rt_lib0clear(&___nl__im__3);
#line 766
//clear ___nl__bool__4;
#line 766
c_rt_lib0clear(&___nl__im__6);
#line 766
//clear ___nl__bool__7;
#line 766
c_rt_lib0clear(&___nl__im__8);
#line 766
c_rt_lib0clear(&___nl__im__9);
#line 766
//clear ___nl__bool__10;
#line 766
c_rt_lib0clear(&___nl__im__11);
#line 766
c_rt_lib0clear(&___nl__im__12);
#line 766
c_rt_lib0clear(&___nl__im__13);
#line 766
//clear ___nl__bool__16;
#line 766
c_rt_lib0clear(&___nl__im__18);
#line 766
c_rt_lib0clear(&___nl__im__19);
#line 766
//clear ___nl__bool__21;
#line 766
c_rt_lib0clear(&___nl__im__22);
#line 766
c_rt_lib0clear(&___nl__im__23);
#line 766
c_rt_lib0clear(&___nl__im__24);
#line 766
//clear ___nl__bool__28;
#line 766
c_rt_lib0clear(&___nl__im__29);
#line 766
c_rt_lib0clear(&___nl__im__30);
#line 766
c_rt_lib0clear(&___nl__im__42);
#line 766
//clear ___nl__bool__47;
#line 766
c_rt_lib0clear(&___nl__im__48);
#line 766
c_rt_lib0clear(&___nl__im__49);
#line 766
//clear ___nl__bool__50;
#line 766
c_rt_lib0clear(&___nl__im__51);
#line 766
c_rt_lib0clear(&___nl__im__52);
#line 766
c_rt_lib0clear(&___nl__im__54);
#line 766
//clear ___nl__bool__59;
#line 766
c_rt_lib0clear(&___nl__im__60);
#line 766
c_rt_lib0clear(&___nl__im__61);
#line 766
//clear ___nl__bool__62;
#line 766
c_rt_lib0clear(&___nl__im__63);
#line 766
c_rt_lib0clear(&___nl__im__64);
#line 766
c_rt_lib0clear(&___nl__im__66);
#line 766
//clear ___nl__bool__67;
#line 766
c_rt_lib0clear(&___nl__im__68);
#line 766
c_rt_lib0clear(&___nl__im__70);
#line 766
//clear ___nl__bool__87;
#line 766
c_rt_lib0clear(&___nl__im__88);
#line 766
c_rt_lib0clear(&___nl__im__89);
#line 766
//clear ___nl__bool__90;
#line 766
c_rt_lib0clear(&___nl__im__91);
#line 766
c_rt_lib0clear(&___nl__im__92);
#line 766
c_rt_lib0clear(&___nl__im__94);
#line 766
//clear ___nl__bool__97;
#line 766
c_rt_lib0clear(&___nl__im__98);
#line 766
c_rt_lib0clear(&___nl__im__99);
#line 766
//clear ___nl__bool__100;
#line 766
c_rt_lib0clear(&___nl__im__101);
#line 766
c_rt_lib0clear(&___nl__im__102);
#line 766
c_rt_lib0clear(&___nl__im__104);
#line 766
//clear ___nl__bool__143;
#line 766
c_rt_lib0clear(&___nl__im__144);
#line 766
c_rt_lib0clear(&___nl__im__145);
#line 766
c_rt_lib0clear(&___nl__im__148);
#line 766
//clear ___nl__bool__149;
#line 766
c_rt_lib0clear(&___nl__im__150);
#line 766
c_rt_lib0clear(&___nl__im__154);
#line 766
//clear ___nl__bool__156;
#line 766
c_rt_lib0clear(&___nl__im__157);
#line 766
c_rt_lib0clear(&___nl__im__158);
#line 766
//clear ___nl__int__159;
#line 766
//clear ___nl__int__160;
#line 766
//clear ___nl__int__161;
#line 766
//clear ___nl__bool__162;
#line 766
c_rt_lib0clear(&___nl__im__163);
#line 766
c_rt_lib0clear(&___nl__im__172);
#line 766
//clear ___nl__bool__173;
#line 766
c_rt_lib0clear(&___nl__im__174);
#line 766
c_rt_lib0clear(&___nl__im__175);
#line 766
c_rt_lib0clear(&___nl__im__178);
#line 766
//clear ___nl__bool__180;
#line 766
c_rt_lib0clear(&___nl__im__182);
#line 766
//clear ___nl__bool__188;
#line 766
c_rt_lib0clear(&___nl__im__189);
#line 766
c_rt_lib0clear(&___nl__im__190);
#line 766
c_rt_lib0clear(&___nl__im__195);
#line 766
c_rt_lib0clear(&___nl__im__202);
#line 766
//clear ___nl__bool__203;
#line 766
c_rt_lib0clear(&___nl__im__204);
#line 766
c_rt_lib0clear(&___nl__im__209);
#line 766
//clear ___nl__bool__210;
#line 766
c_rt_lib0clear(&___nl__im__211);
#line 766
c_rt_lib0clear(&___nl__im__215);
#line 766
//clear ___nl__bool__216;
#line 766
return ___nl__im__217;
#line 766
label_1936:
;
#line 766
c_rt_lib0move(&___nl__im__215, c_rt_lib0priv_as(___nl__im__217, ___get_global_string_const(83)));
#line 767
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(185), ___nl__im__215));
#line 768
goto label_2039;
#line 768
label_1940:
;
#line 769
c_rt_lib0move(&___nl__im__220, nparser_priv0parse_expr(___ref___rec__0));
#line 769
___nl__bool__219 = c_rt_lib0priv_is(___nl__im__220, ___get_global_string_const(83));
#line 769
if(___nl__bool__219){ goto label_2035;}
#line 769
c_rt_lib0clear(&___nl__im__1);
#line 769
c_rt_lib0clear(&___nl__im__3);
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
//clear ___nl__bool__87;
#line 769
c_rt_lib0clear(&___nl__im__88);
#line 769
c_rt_lib0clear(&___nl__im__89);
#line 769
//clear ___nl__bool__90;
#line 769
c_rt_lib0clear(&___nl__im__91);
#line 769
c_rt_lib0clear(&___nl__im__92);
#line 769
c_rt_lib0clear(&___nl__im__94);
#line 769
//clear ___nl__bool__97;
#line 769
c_rt_lib0clear(&___nl__im__98);
#line 769
c_rt_lib0clear(&___nl__im__99);
#line 769
//clear ___nl__bool__100;
#line 769
c_rt_lib0clear(&___nl__im__101);
#line 769
c_rt_lib0clear(&___nl__im__102);
#line 769
c_rt_lib0clear(&___nl__im__104);
#line 769
//clear ___nl__bool__143;
#line 769
c_rt_lib0clear(&___nl__im__144);
#line 769
c_rt_lib0clear(&___nl__im__145);
#line 769
c_rt_lib0clear(&___nl__im__148);
#line 769
//clear ___nl__bool__149;
#line 769
c_rt_lib0clear(&___nl__im__150);
#line 769
c_rt_lib0clear(&___nl__im__154);
#line 769
//clear ___nl__bool__156;
#line 769
c_rt_lib0clear(&___nl__im__157);
#line 769
c_rt_lib0clear(&___nl__im__158);
#line 769
//clear ___nl__int__159;
#line 769
//clear ___nl__int__160;
#line 769
//clear ___nl__int__161;
#line 769
//clear ___nl__bool__162;
#line 769
c_rt_lib0clear(&___nl__im__163);
#line 769
c_rt_lib0clear(&___nl__im__172);
#line 769
//clear ___nl__bool__173;
#line 769
c_rt_lib0clear(&___nl__im__174);
#line 769
c_rt_lib0clear(&___nl__im__175);
#line 769
c_rt_lib0clear(&___nl__im__178);
#line 769
//clear ___nl__bool__180;
#line 769
c_rt_lib0clear(&___nl__im__182);
#line 769
//clear ___nl__bool__188;
#line 769
c_rt_lib0clear(&___nl__im__189);
#line 769
c_rt_lib0clear(&___nl__im__190);
#line 769
c_rt_lib0clear(&___nl__im__195);
#line 769
c_rt_lib0clear(&___nl__im__202);
#line 769
//clear ___nl__bool__203;
#line 769
c_rt_lib0clear(&___nl__im__204);
#line 769
c_rt_lib0clear(&___nl__im__209);
#line 769
//clear ___nl__bool__210;
#line 769
c_rt_lib0clear(&___nl__im__211);
#line 769
c_rt_lib0clear(&___nl__im__215);
#line 769
//clear ___nl__bool__216;
#line 769
c_rt_lib0clear(&___nl__im__217);
#line 769
c_rt_lib0clear(&___nl__im__218);
#line 769
//clear ___nl__bool__219;
#line 769
return ___nl__im__220;
#line 769
label_2035:
;
#line 769
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__220, ___get_global_string_const(83)));
#line 770
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__218));
#line 771
goto label_2039;
#line 771
label_2039:
;
#line 771
//clear ___nl__bool__4;
#line 771
c_rt_lib0clear(&___nl__im__6);
#line 771
//clear ___nl__bool__7;
#line 771
c_rt_lib0clear(&___nl__im__8);
#line 771
c_rt_lib0clear(&___nl__im__9);
#line 771
//clear ___nl__bool__10;
#line 771
c_rt_lib0clear(&___nl__im__11);
#line 771
c_rt_lib0clear(&___nl__im__12);
#line 771
c_rt_lib0clear(&___nl__im__13);
#line 771
//clear ___nl__bool__16;
#line 771
c_rt_lib0clear(&___nl__im__18);
#line 771
c_rt_lib0clear(&___nl__im__19);
#line 771
//clear ___nl__bool__21;
#line 771
c_rt_lib0clear(&___nl__im__22);
#line 771
c_rt_lib0clear(&___nl__im__23);
#line 771
c_rt_lib0clear(&___nl__im__24);
#line 771
//clear ___nl__bool__28;
#line 771
c_rt_lib0clear(&___nl__im__29);
#line 771
c_rt_lib0clear(&___nl__im__30);
#line 771
c_rt_lib0clear(&___nl__im__42);
#line 771
//clear ___nl__bool__47;
#line 771
c_rt_lib0clear(&___nl__im__48);
#line 771
c_rt_lib0clear(&___nl__im__49);
#line 771
//clear ___nl__bool__50;
#line 771
c_rt_lib0clear(&___nl__im__51);
#line 771
c_rt_lib0clear(&___nl__im__52);
#line 771
c_rt_lib0clear(&___nl__im__54);
#line 771
//clear ___nl__bool__59;
#line 771
c_rt_lib0clear(&___nl__im__60);
#line 771
c_rt_lib0clear(&___nl__im__61);
#line 771
//clear ___nl__bool__62;
#line 771
c_rt_lib0clear(&___nl__im__63);
#line 771
c_rt_lib0clear(&___nl__im__64);
#line 771
c_rt_lib0clear(&___nl__im__66);
#line 771
//clear ___nl__bool__67;
#line 771
c_rt_lib0clear(&___nl__im__68);
#line 771
c_rt_lib0clear(&___nl__im__70);
#line 771
//clear ___nl__bool__87;
#line 771
c_rt_lib0clear(&___nl__im__88);
#line 771
c_rt_lib0clear(&___nl__im__89);
#line 771
//clear ___nl__bool__90;
#line 771
c_rt_lib0clear(&___nl__im__91);
#line 771
c_rt_lib0clear(&___nl__im__92);
#line 771
c_rt_lib0clear(&___nl__im__94);
#line 771
//clear ___nl__bool__97;
#line 771
c_rt_lib0clear(&___nl__im__98);
#line 771
c_rt_lib0clear(&___nl__im__99);
#line 771
//clear ___nl__bool__100;
#line 771
c_rt_lib0clear(&___nl__im__101);
#line 771
c_rt_lib0clear(&___nl__im__102);
#line 771
c_rt_lib0clear(&___nl__im__104);
#line 771
//clear ___nl__bool__143;
#line 771
c_rt_lib0clear(&___nl__im__144);
#line 771
c_rt_lib0clear(&___nl__im__145);
#line 771
c_rt_lib0clear(&___nl__im__148);
#line 771
//clear ___nl__bool__149;
#line 771
c_rt_lib0clear(&___nl__im__150);
#line 771
c_rt_lib0clear(&___nl__im__154);
#line 771
//clear ___nl__bool__156;
#line 771
c_rt_lib0clear(&___nl__im__157);
#line 771
c_rt_lib0clear(&___nl__im__158);
#line 771
//clear ___nl__int__159;
#line 771
//clear ___nl__int__160;
#line 771
//clear ___nl__int__161;
#line 771
//clear ___nl__bool__162;
#line 771
c_rt_lib0clear(&___nl__im__163);
#line 771
c_rt_lib0clear(&___nl__im__172);
#line 771
//clear ___nl__bool__173;
#line 771
c_rt_lib0clear(&___nl__im__174);
#line 771
c_rt_lib0clear(&___nl__im__175);
#line 771
c_rt_lib0clear(&___nl__im__178);
#line 771
//clear ___nl__bool__180;
#line 771
c_rt_lib0clear(&___nl__im__182);
#line 771
//clear ___nl__bool__188;
#line 771
c_rt_lib0clear(&___nl__im__189);
#line 771
c_rt_lib0clear(&___nl__im__190);
#line 771
c_rt_lib0clear(&___nl__im__195);
#line 771
c_rt_lib0clear(&___nl__im__202);
#line 771
//clear ___nl__bool__203;
#line 771
c_rt_lib0clear(&___nl__im__204);
#line 771
c_rt_lib0clear(&___nl__im__209);
#line 771
//clear ___nl__bool__210;
#line 771
c_rt_lib0clear(&___nl__im__211);
#line 771
c_rt_lib0clear(&___nl__im__215);
#line 771
//clear ___nl__bool__216;
#line 771
c_rt_lib0clear(&___nl__im__217);
#line 771
c_rt_lib0clear(&___nl__im__218);
#line 771
//clear ___nl__bool__219;
#line 771
c_rt_lib0clear(&___nl__im__220);
#line 772
___nl__bool__221 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1080));
#line 772
if(___nl__bool__221){ goto label_2132;}
#line 772
___nl__bool__221 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1081));
#line 772
label_2132:
;
#line 772
if(___nl__bool__221){ goto label_2135;}
#line 772
___nl__bool__221 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(229));
#line 772
label_2135:
;
#line 772
if(___nl__bool__221){ goto label_2138;}
#line 772
___nl__bool__221 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(257));
#line 772
label_2138:
;
#line 772
if(___nl__bool__221){ goto label_2141;}
#line 772
___nl__bool__221 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(258));
#line 772
label_2141:
;
#line 772
if(___nl__bool__221){ goto label_2144;}
#line 772
___nl__bool__221 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(185));
#line 772
label_2144:
;
#line 772
if(___nl__bool__221){ goto label_2147;}
#line 772
___nl__bool__221 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1084));
#line 772
label_2147:
;
#line 772
___nl__bool__221 = !___nl__bool__221;
#line 772
if(___nl__bool__221){ goto label_2446;}
#line 774
___nl__rec_ptr__224 = &((*___ref___rec__0).state0field);
#line 774
c_rt_lib0move(&___nl__im__223, ntokenizer0get_place_ws(___nl__rec_ptr__224));
#line 774
___nl__rec_ptr__224 = NULL;
#line 774
c_rt_lib0move(&___nl__im__222, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__1, ___get_global_string_const(742), ___nl__im__223));
#line 774
c_rt_lib0clear(&___nl__im__223);
#line 775
c_rt_lib0move(&___nl__im__226, c_rt_lib0hash_mk(2, ___get_global_string_const(231), ___nl__im__222, ___get_global_string_const(237), ___nl__im__3));
#line 775
c_rt_lib0move(&___nl__im__225, c_rt_lib0hash_mk(1, ___get_global_string_const(237), ___nl__im__226));
#line 775
c_rt_lib0clear(&___nl__im__226);
#line 776
c_rt_lib0move(&___nl__im__228,___get_global_string_const(1074));
#line 776
___nl__bool__227 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__228);
#line 776
c_rt_lib0clear(&___nl__im__228);
#line 776
___nl__bool__227 = !___nl__bool__227;
#line 776
if(___nl__bool__227){ goto label_2195;}
#line 777
___nl__bool__229 = true;
#line 777
c_rt_lib0move(&___nl__im__230, c_rt_lib0bool_to_nl_native(___nl__bool__229));
#line 777
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1152), ___nl__im__230);
#line 777
//clear ___nl__bool__229;
#line 777
c_rt_lib0clear(&___nl__im__230);
#line 778
c_rt_lib0move(&___nl__im__231, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 778
c_rt_lib0copy(&___nl__im__232, ___nl__im__231);
#line 778
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(372), ___nl__im__232);
#line 778
c_rt_lib0clear(&___nl__im__231);
#line 778
c_rt_lib0clear(&___nl__im__232);
#line 779
c_rt_lib0move(&___nl__im__233,___get_global_string_const(465));
#line 779
nparser_priv0eat(___ref___rec__0, ___nl__im__233);
#line 779
c_rt_lib0clear(&___nl__im__233);
#line 780
c_rt_lib0move(&___nl__im__235, nparser_priv0parse_expr(___ref___rec__0));
#line 780
___nl__bool__234 = c_rt_lib0priv_is(___nl__im__235, ___get_global_string_const(83));
#line 780
if(___nl__bool__234){ goto label_2187;}
#line 780
c_rt_lib0clear(&___nl__im__1);
#line 780
c_rt_lib0clear(&___nl__im__3);
#line 780
//clear ___nl__bool__221;
#line 780
c_rt_lib0clear(&___nl__im__222);
#line 780
c_rt_lib0clear(&___nl__im__225);
#line 780
//clear ___nl__bool__227;
#line 780
//clear ___nl__bool__234;
#line 780
return ___nl__im__235;
#line 780
label_2187:
;
#line 780
c_rt_lib0move(&___nl__im__236, c_rt_lib0priv_as(___nl__im__235, ___get_global_string_const(83)));
#line 780
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(37), ___nl__im__236);
#line 781
c_rt_lib0move(&___nl__im__237,___get_global_string_const(331));
#line 781
nparser_priv0eat(___ref___rec__0, ___nl__im__237);
#line 781
c_rt_lib0clear(&___nl__im__237);
#line 782
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1074), ___nl__im__225));
#line 783
goto label_2422;
#line 783
label_2195:
;
#line 783
c_rt_lib0move(&___nl__im__238,___get_global_string_const(1076));
#line 783
___nl__bool__227 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__238);
#line 783
c_rt_lib0clear(&___nl__im__238);
#line 783
___nl__bool__227 = !___nl__bool__227;
#line 783
if(___nl__bool__227){ goto label_2236;}
#line 784
___nl__bool__239 = true;
#line 784
c_rt_lib0move(&___nl__im__240, c_rt_lib0bool_to_nl_native(___nl__bool__239));
#line 784
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1152), ___nl__im__240);
#line 784
//clear ___nl__bool__239;
#line 784
c_rt_lib0clear(&___nl__im__240);
#line 785
c_rt_lib0move(&___nl__im__241, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 785
c_rt_lib0copy(&___nl__im__242, ___nl__im__241);
#line 785
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(372), ___nl__im__242);
#line 785
c_rt_lib0clear(&___nl__im__241);
#line 785
c_rt_lib0clear(&___nl__im__242);
#line 786
c_rt_lib0move(&___nl__im__243,___get_global_string_const(465));
#line 786
nparser_priv0eat(___ref___rec__0, ___nl__im__243);
#line 786
c_rt_lib0clear(&___nl__im__243);
#line 787
c_rt_lib0move(&___nl__im__245, nparser_priv0parse_expr(___ref___rec__0));
#line 787
___nl__bool__244 = c_rt_lib0priv_is(___nl__im__245, ___get_global_string_const(83));
#line 787
if(___nl__bool__244){ goto label_2228;}
#line 787
c_rt_lib0clear(&___nl__im__1);
#line 787
c_rt_lib0clear(&___nl__im__3);
#line 787
//clear ___nl__bool__221;
#line 787
c_rt_lib0clear(&___nl__im__222);
#line 787
c_rt_lib0clear(&___nl__im__225);
#line 787
//clear ___nl__bool__227;
#line 787
//clear ___nl__bool__234;
#line 787
c_rt_lib0clear(&___nl__im__235);
#line 787
c_rt_lib0clear(&___nl__im__236);
#line 787
//clear ___nl__bool__244;
#line 787
return ___nl__im__245;
#line 787
label_2228:
;
#line 787
c_rt_lib0move(&___nl__im__246, c_rt_lib0priv_as(___nl__im__245, ___get_global_string_const(83)));
#line 787
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1091), ___nl__im__246);
#line 788
c_rt_lib0move(&___nl__im__247,___get_global_string_const(331));
#line 788
nparser_priv0eat(___ref___rec__0, ___nl__im__247);
#line 788
c_rt_lib0clear(&___nl__im__247);
#line 789
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1076), ___nl__im__225));
#line 790
goto label_2422;
#line 790
label_2236:
;
#line 790
c_rt_lib0move(&___nl__im__248,___get_global_string_const(1075));
#line 790
___nl__bool__227 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__248);
#line 790
c_rt_lib0clear(&___nl__im__248);
#line 790
___nl__bool__227 = !___nl__bool__227;
#line 790
if(___nl__bool__227){ goto label_2315;}
#line 791
___nl__bool__249 = true;
#line 791
c_rt_lib0move(&___nl__im__250, c_rt_lib0bool_to_nl_native(___nl__bool__249));
#line 791
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1152), ___nl__im__250);
#line 791
//clear ___nl__bool__249;
#line 791
c_rt_lib0clear(&___nl__im__250);
#line 792
c_rt_lib0move(&___nl__im__251, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 792
c_rt_lib0copy(&___nl__im__252, ___nl__im__251);
#line 792
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(585), ___nl__im__252);
#line 792
c_rt_lib0clear(&___nl__im__251);
#line 792
c_rt_lib0clear(&___nl__im__252);
#line 793
c_rt_lib0move(&___nl__im__253,___get_global_string_const(323));
#line 793
nparser_priv0eat(___ref___rec__0, ___nl__im__253);
#line 793
c_rt_lib0clear(&___nl__im__253);
#line 794
___nl__rec_ptr__255 = &((*___ref___rec__0).state0field);
#line 794
c_rt_lib0move(&___nl__im__256,___get_global_string_const(515));
#line 794
___nl__bool__254 = ntokenizer0next_is(___nl__rec_ptr__255, ___nl__im__256);
#line 794
___nl__rec_ptr__255 = NULL;
#line 794
c_rt_lib0clear(&___nl__im__256);
#line 794
___nl__bool__254 = !___nl__bool__254;
#line 794
if(___nl__bool__254){ goto label_2273;}
#line 795
c_rt_lib0move(&___nl__im__257, nparser_priv0parse_var_decl_sim(___ref___rec__0));
#line 795
c_rt_lib0copy(&___nl__im__258, ___nl__im__257);
#line 795
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(234), ___nl__im__258);
#line 795
c_rt_lib0clear(&___nl__im__257);
#line 795
c_rt_lib0clear(&___nl__im__258);
#line 796
c_rt_lib0move(&___nl__im__259, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 796
c_rt_lib0copy(&___nl__im__260, ___nl__im__259);
#line 796
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1090), ___nl__im__260);
#line 796
c_rt_lib0clear(&___nl__im__259);
#line 796
c_rt_lib0clear(&___nl__im__260);
#line 797
goto label_2285;
#line 797
label_2273:
;
#line 798
c_rt_lib0move(&___nl__im__261, nparser_priv0parse_ref_var_decl_sim(___ref___rec__0));
#line 798
c_rt_lib0copy(&___nl__im__262, ___nl__im__261);
#line 798
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(234), ___nl__im__262);
#line 798
c_rt_lib0clear(&___nl__im__261);
#line 798
c_rt_lib0clear(&___nl__im__262);
#line 799
c_rt_lib0move(&___nl__im__263, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 799
c_rt_lib0copy(&___nl__im__264, ___nl__im__263);
#line 799
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1090), ___nl__im__264);
#line 799
c_rt_lib0clear(&___nl__im__263);
#line 799
c_rt_lib0clear(&___nl__im__264);
#line 800
goto label_2285;
#line 800
label_2285:
;
#line 800
//clear ___nl__bool__254;
#line 801
c_rt_lib0move(&___nl__im__265,___get_global_string_const(465));
#line 801
nparser_priv0eat(___ref___rec__0, ___nl__im__265);
#line 801
c_rt_lib0clear(&___nl__im__265);
#line 802
c_rt_lib0move(&___nl__im__267, nparser_priv0parse_expr(___ref___rec__0));
#line 802
___nl__bool__266 = c_rt_lib0priv_is(___nl__im__267, ___get_global_string_const(83));
#line 802
if(___nl__bool__266){ goto label_2307;}
#line 802
c_rt_lib0clear(&___nl__im__1);
#line 802
c_rt_lib0clear(&___nl__im__3);
#line 802
//clear ___nl__bool__221;
#line 802
c_rt_lib0clear(&___nl__im__222);
#line 802
c_rt_lib0clear(&___nl__im__225);
#line 802
//clear ___nl__bool__227;
#line 802
//clear ___nl__bool__234;
#line 802
c_rt_lib0clear(&___nl__im__235);
#line 802
c_rt_lib0clear(&___nl__im__236);
#line 802
//clear ___nl__bool__244;
#line 802
c_rt_lib0clear(&___nl__im__245);
#line 802
c_rt_lib0clear(&___nl__im__246);
#line 802
//clear ___nl__bool__266;
#line 802
return ___nl__im__267;
#line 802
label_2307:
;
#line 802
c_rt_lib0move(&___nl__im__268, c_rt_lib0priv_as(___nl__im__267, ___get_global_string_const(83)));
#line 802
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(135), ___nl__im__268);
#line 803
c_rt_lib0move(&___nl__im__269,___get_global_string_const(331));
#line 803
nparser_priv0eat(___ref___rec__0, ___nl__im__269);
#line 803
c_rt_lib0clear(&___nl__im__269);
#line 804
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1075), ___nl__im__225));
#line 805
goto label_2422;
#line 805
label_2315:
;
#line 805
c_rt_lib0move(&___nl__im__270,___get_global_string_const(1072));
#line 805
___nl__bool__227 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__270);
#line 805
c_rt_lib0clear(&___nl__im__270);
#line 805
___nl__bool__227 = !___nl__bool__227;
#line 805
if(___nl__bool__227){ goto label_2346;}
#line 806
c_rt_lib0move(&___nl__im__272, nparser_priv0parse_expr(___ref___rec__0));
#line 806
___nl__bool__271 = c_rt_lib0priv_is(___nl__im__272, ___get_global_string_const(83));
#line 806
if(___nl__bool__271){ goto label_2341;}
#line 806
c_rt_lib0clear(&___nl__im__1);
#line 806
c_rt_lib0clear(&___nl__im__3);
#line 806
//clear ___nl__bool__221;
#line 806
c_rt_lib0clear(&___nl__im__222);
#line 806
c_rt_lib0clear(&___nl__im__225);
#line 806
//clear ___nl__bool__227;
#line 806
//clear ___nl__bool__234;
#line 806
c_rt_lib0clear(&___nl__im__235);
#line 806
c_rt_lib0clear(&___nl__im__236);
#line 806
//clear ___nl__bool__244;
#line 806
c_rt_lib0clear(&___nl__im__245);
#line 806
c_rt_lib0clear(&___nl__im__246);
#line 806
//clear ___nl__bool__266;
#line 806
c_rt_lib0clear(&___nl__im__267);
#line 806
c_rt_lib0clear(&___nl__im__268);
#line 806
//clear ___nl__bool__271;
#line 806
return ___nl__im__272;
#line 806
label_2341:
;
#line 806
c_rt_lib0move(&___nl__im__273, c_rt_lib0priv_as(___nl__im__272, ___get_global_string_const(83)));
#line 806
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1086), ___nl__im__273);
#line 807
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1078), ___nl__im__225));
#line 808
goto label_2422;
#line 808
label_2346:
;
#line 808
c_rt_lib0move(&___nl__im__274,___get_global_string_const(1187));
#line 808
___nl__bool__227 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__274);
#line 808
c_rt_lib0clear(&___nl__im__274);
#line 808
___nl__bool__227 = !___nl__bool__227;
#line 808
if(___nl__bool__227){ goto label_2380;}
#line 809
c_rt_lib0move(&___nl__im__276, nparser_priv0parse_expr(___ref___rec__0));
#line 809
___nl__bool__275 = c_rt_lib0priv_is(___nl__im__276, ___get_global_string_const(83));
#line 809
if(___nl__bool__275){ goto label_2375;}
#line 809
c_rt_lib0clear(&___nl__im__1);
#line 809
c_rt_lib0clear(&___nl__im__3);
#line 809
//clear ___nl__bool__221;
#line 809
c_rt_lib0clear(&___nl__im__222);
#line 809
c_rt_lib0clear(&___nl__im__225);
#line 809
//clear ___nl__bool__227;
#line 809
//clear ___nl__bool__234;
#line 809
c_rt_lib0clear(&___nl__im__235);
#line 809
c_rt_lib0clear(&___nl__im__236);
#line 809
//clear ___nl__bool__244;
#line 809
c_rt_lib0clear(&___nl__im__245);
#line 809
c_rt_lib0clear(&___nl__im__246);
#line 809
//clear ___nl__bool__266;
#line 809
c_rt_lib0clear(&___nl__im__267);
#line 809
c_rt_lib0clear(&___nl__im__268);
#line 809
//clear ___nl__bool__271;
#line 809
c_rt_lib0clear(&___nl__im__272);
#line 809
c_rt_lib0clear(&___nl__im__273);
#line 809
//clear ___nl__bool__275;
#line 809
return ___nl__im__276;
#line 809
label_2375:
;
#line 809
c_rt_lib0move(&___nl__im__277, c_rt_lib0priv_as(___nl__im__276, ___get_global_string_const(83)));
#line 809
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1086), ___nl__im__277);
#line 810
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1079), ___nl__im__225));
#line 811
goto label_2422;
#line 811
label_2380:
;
#line 811
c_rt_lib0move(&___nl__im__278,___get_global_string_const(1077));
#line 811
___nl__bool__227 = nparser_priv0try_eat(___ref___rec__0, ___nl__im__278);
#line 811
c_rt_lib0clear(&___nl__im__278);
#line 811
___nl__bool__227 = !___nl__bool__227;
#line 811
if(___nl__bool__227){ goto label_2422;}
#line 812
___nl__bool__279 = true;
#line 812
c_rt_lib0move(&___nl__im__280, c_rt_lib0bool_to_nl_native(___nl__bool__279));
#line 812
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1152), ___nl__im__280);
#line 812
//clear ___nl__bool__279;
#line 812
c_rt_lib0clear(&___nl__im__280);
#line 813
c_rt_lib0move(&___nl__im__282, nparser_priv0parse_expr(___ref___rec__0));
#line 813
___nl__bool__281 = c_rt_lib0priv_is(___nl__im__282, ___get_global_string_const(83));
#line 813
if(___nl__bool__281){ goto label_2417;}
#line 813
c_rt_lib0clear(&___nl__im__1);
#line 813
c_rt_lib0clear(&___nl__im__3);
#line 813
//clear ___nl__bool__221;
#line 813
c_rt_lib0clear(&___nl__im__222);
#line 813
c_rt_lib0clear(&___nl__im__225);
#line 813
//clear ___nl__bool__227;
#line 813
//clear ___nl__bool__234;
#line 813
c_rt_lib0clear(&___nl__im__235);
#line 813
c_rt_lib0clear(&___nl__im__236);
#line 813
//clear ___nl__bool__244;
#line 813
c_rt_lib0clear(&___nl__im__245);
#line 813
c_rt_lib0clear(&___nl__im__246);
#line 813
//clear ___nl__bool__266;
#line 813
c_rt_lib0clear(&___nl__im__267);
#line 813
c_rt_lib0clear(&___nl__im__268);
#line 813
//clear ___nl__bool__271;
#line 813
c_rt_lib0clear(&___nl__im__272);
#line 813
c_rt_lib0clear(&___nl__im__273);
#line 813
//clear ___nl__bool__275;
#line 813
c_rt_lib0clear(&___nl__im__276);
#line 813
c_rt_lib0clear(&___nl__im__277);
#line 813
//clear ___nl__bool__281;
#line 813
return ___nl__im__282;
#line 813
label_2417:
;
#line 813
c_rt_lib0move(&___nl__im__283, c_rt_lib0priv_as(___nl__im__282, ___get_global_string_const(83)));
#line 813
c_rt_lib0hash_set_value_dec(&___nl__im__225, ___get_global_string_const(1086), ___nl__im__283);
#line 814
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(1077), ___nl__im__225));
#line 815
goto label_2422;
#line 815
label_2422:
;
#line 815
//clear ___nl__bool__227;
#line 815
//clear ___nl__bool__234;
#line 815
c_rt_lib0clear(&___nl__im__235);
#line 815
c_rt_lib0clear(&___nl__im__236);
#line 815
//clear ___nl__bool__244;
#line 815
c_rt_lib0clear(&___nl__im__245);
#line 815
c_rt_lib0clear(&___nl__im__246);
#line 815
//clear ___nl__bool__266;
#line 815
c_rt_lib0clear(&___nl__im__267);
#line 815
c_rt_lib0clear(&___nl__im__268);
#line 815
//clear ___nl__bool__271;
#line 815
c_rt_lib0clear(&___nl__im__272);
#line 815
c_rt_lib0clear(&___nl__im__273);
#line 815
//clear ___nl__bool__275;
#line 815
c_rt_lib0clear(&___nl__im__276);
#line 815
c_rt_lib0clear(&___nl__im__277);
#line 815
//clear ___nl__bool__281;
#line 815
c_rt_lib0clear(&___nl__im__282);
#line 815
c_rt_lib0clear(&___nl__im__283);
#line 816
c_rt_lib0move(&___nl__im__284,___get_global_string_const(450));
#line 816
nparser_priv0eat(___ref___rec__0, ___nl__im__284);
#line 816
c_rt_lib0clear(&___nl__im__284);
#line 817
goto label_2446;
#line 817
label_2446:
;
#line 817
//clear ___nl__bool__221;
#line 817
c_rt_lib0clear(&___nl__im__222);
#line 817
c_rt_lib0clear(&___nl__im__225);
#line 818
___nl__rec_ptr__286 = &((*___ref___rec__0).state0field);
#line 818
c_rt_lib0move(&___nl__im__285, ntokenizer0get_place_ws(___nl__rec_ptr__286));
#line 818
___nl__rec_ptr__286 = NULL;
#line 819
c_rt_lib0move(&___nl__im__287, c_rt_lib0hash_mk(2, ___get_global_string_const(560), ___nl__im__1, ___get_global_string_const(742), ___nl__im__285));
#line 820
c_rt_lib0move(&___nl__im__289, c_rt_lib0hash_mk(2, ___get_global_string_const(237), ___nl__im__3, ___get_global_string_const(231), ___nl__im__287));
#line 820
c_rt_lib0move(&___nl__im__288, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__289));
#line 820
c_rt_lib0clear(&___nl__im__289);
#line 820
c_rt_lib0clear(&___nl__im__1);
#line 820
c_rt_lib0clear(&___nl__im__3);
#line 820
c_rt_lib0clear(&___nl__im__285);
#line 820
c_rt_lib0clear(&___nl__im__287);
#line 820
return ___nl__im__288;
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(1166), ___nl__im__2, ___get_global_string_const(50), ___nl__im__4, ___get_global_string_const(222), ___nl__im__6, ___get_global_string_const(1190), ___nl__im__10));
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
