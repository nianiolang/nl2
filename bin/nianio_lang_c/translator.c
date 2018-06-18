
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "translator.h"
#include "own.h"
#include "tct.h"
#include "array.h"
#include "string.h"
#include "ptd.h"
#include "nast.h"
#include "hash.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "boolean_t.h"
#include "translator.h"
#include "tct.h"
#include "nast.h"
#include "nlasm.h"
#line 1 "translator.nl"

static ImmT *__const__f = NULL;
void translator_priv0__const__init();
ImmT translator_priv0__const__sim(int __nr);
ImmT translator_priv0__const__sing(int __nr);

void translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0clean(anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE rec) {
;
c_rt_lib0delete(rec.debug0field);
c_rt_lib0delete(rec.logic0field);
c_rt_lib0delete(rec.module_name0field);
c_rt_lib0delete(rec.result0field);
c_rt_lib0delete(rec.loop_label0field);
}
void translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0free(anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE *rec) {
translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0clean(*rec);
free_mem(rec, sizeof(*rec));
}
void translator0state_t0type0clean(translator0state_t0type rec) {
;
c_rt_lib0delete(rec.debug0field);
c_rt_lib0delete(rec.logic0field);
c_rt_lib0delete(rec.module_name0field);
c_rt_lib0delete(rec.result0field);
c_rt_lib0delete(rec.loop_label0field);
}
void translator0state_t0type0free(translator0state_t0type *rec) {
translator0state_t0type0clean(*rec);
free_mem(rec, sizeof(*rec));
}
ImmT  translator_priv0print_fun_def(nast0fun_def_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_array_declaration(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_hash_declaration(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_variant(nast0variant_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
nlasm0reg_t0type translator_priv0print_var_decl(nast0variable_declaration_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1,nlasm0reg_access_type_t0type ___nl__im__2);
ImmT  translator_priv0load_const(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_fun_val(nast0fun_val_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,tct0meta_type0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0print_val(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_variable(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_post_operator(nast0value_t0type ___nl__im__0,ImmT  ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0print_unary_op(nast0unary_op_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_bin_op(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_cmd_array(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_try_ensure(nast0try_ensure_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0start_new_instruction(nast0debug_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_cmd(nast0cmd_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_loop_break(translator0state_t0type* ___ref___rec__0,translator0loop0type ___nl__im__1);
ImmT  translator_priv0print_if_mod(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_unless_mod(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_if(nast0if_t0type ___nl__im__0,bool ___nl__bool__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_call_base(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3);
translator0loop_label0type translator_priv0save_loop_break(translator0state_t0type* ___ref___rec__0,nlasm0label_t0type ___nl__int__1,nlasm0label_t0type ___nl__int__2);
ImmT  translator_priv0print_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_loop(nast0cmd_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_rep(nast0rep_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_forh(nast0forh_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_ptd_forh(nast0forh_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_own_forh(nast0forh_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_while(nast0while_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_for(nast0for_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_match(nast0match_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0move(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0use_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0release_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0use_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0release_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0use_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,bool ___nl__bool__3,translator0state_t0type* ___ref___rec__4);
ImmT  translator_priv0release_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0use_variant(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0release_variant(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0print_bin_op_operator_command(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,ImmT  ___nl__im__3,translator0state_t0type* ___ref___rec__4);
ImmT  translator_priv0print(translator0state_t0type* ___ref___rec__0,nlasm0order_t0type ___nl__im__1);
ImmT  translator_priv0print_if_goto(nlasm0label_t0type ___nl__int__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_get_from_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0print_set_at_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0print_array_push(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_get_value(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3);
ImmT  translator_priv0print_set_value(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
translator0struct_of_lvalue_t0type translator_priv0get_struct_of_lvalue(nast0value_t0type* ___ref___im__0,translator0state_t0type* ___ref___rec__1);
translator0lvalue_values_t0type translator_priv0get_value_of_lvalue(nast0value_t0type ___nl__im__0,bool ___nl__bool__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0set_value_of_lvalue(translator0lvalue_values_t0type ___nl__im__0,bool ___nl__bool__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0make_string(translator0string_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_ternary_op(nast0ternary_op_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_die(ImmT  ___nl__im__0,nast0debug_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_return(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_safe_return(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1);
nlasm0reg_t0type translator_priv0dest_val(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
nlasm0reg_t0type translator_priv0def_val(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3);
nlasm0reg_t0type translator_priv0calc_val(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
nlasm0reg_t0type translator_priv0get_var_register(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1);
nlasm0reg_t0type translator_priv0new_declaration(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1,nlasm0reg_type0type ___nl__im__2,nlasm0reg_access_type_t0type ___nl__im__3);
nlasm0reg_t0type translator_priv0new_register(translator0state_t0type* ___ref___rec__0,nlasm0reg_type0type ___nl__im__1);
nlasm0reg_t0type translator_priv0new_reference_register(translator0state_t0type* ___ref___rec__0,nlasm0reg_type0type ___nl__im__1);
translator0function_logic_t0type translator_priv0save_registers(translator0state_t0type* ___ref___rec__0);
ImmT  translator_priv0undef_reg(nlasm0reg_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0restore_registers(translator0function_logic_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1);
nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0);
nlasm0reg_type0type translator_priv0value_type_to_reg_type(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
nlasm0reg_t0type translator_priv0get_cast(nlasm0reg_t0type ___nl__im__0,nlasm0reg_type0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
nlasm0reg_type0type translator_priv0var_type_to_reg_type(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  translator_priv0print_own_val_init(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
tct0meta_type0type translator_priv0unwrap_ref(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1);
INT  translator_priv0get_label_number(translator0state_t0type* ___ref___rec__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2);


ImmT  translator0function_logic_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0function_logic_t");
return translator0function_logic_t();
}
ImmT  translator0function_logic_t() {
translator_priv0__const__init();
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
#line 17
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 17
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 17
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 17
c_rt_lib0clear(&___nl__im__3);
#line 18
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 19
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(94), ___get_global_const(95)));
#line 19
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 19
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 19
c_rt_lib0clear(&___nl__im__6);
#line 20
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 20
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 20
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 20
c_rt_lib0clear(&___nl__im__8);
#line 21
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 21
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 21
c_rt_lib0move(&___nl__im__9, ptd0hash(___nl__im__10));
#line 21
c_rt_lib0clear(&___nl__im__10);
#line 21
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(215), ___nl__im__2, ___get_global_const(431), ___nl__im__4, ___get_global_const(1204), ___nl__im__5, ___get_global_const(720), ___nl__im__7, ___get_global_const(388), ___nl__im__9));
#line 21
c_rt_lib0clear(&___nl__im__2);
#line 21
c_rt_lib0clear(&___nl__im__4);
#line 21
c_rt_lib0clear(&___nl__im__5);
#line 21
c_rt_lib0clear(&___nl__im__7);
#line 21
c_rt_lib0clear(&___nl__im__9);
#line 21
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
return ___nl__im__0;
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
return NULL;
}

ImmT  translator0loop0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop");
return translator0loop();
}
ImmT  translator0loop() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 26
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(312), ___get_global_const(952)));
#line 26
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1205), ___get_global_const(1206)));
#line 26
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 26
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(534), ___nl__im__2, ___get_global_const(1207), ___nl__im__3));
#line 26
c_rt_lib0clear(&___nl__im__2);
#line 26
c_rt_lib0clear(&___nl__im__3);
#line 26
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 26
c_rt_lib0clear(&___nl__im__1);
#line 26
return ___nl__im__0;
#line 26
c_rt_lib0clear(&___nl__im__0);
#line 26
return NULL;
}

ImmT  translator0loop_label0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop_label");
return translator0loop_label();
}
ImmT  translator0loop_label() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 30
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1205), ___get_global_const(160)));
#line 30
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 30
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1205), ___get_global_const(160)));
#line 30
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 30
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(854), ___nl__im__2, ___get_global_const(855), ___nl__im__3));
#line 30
c_rt_lib0clear(&___nl__im__2);
#line 30
c_rt_lib0clear(&___nl__im__3);
#line 30
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
return ___nl__im__0;
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
return NULL;
}

ImmT  translator0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0state_t");
return translator0state_t();
}
ImmT  translator0state_t() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 35
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 36
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(312), ___get_global_const(719)));
#line 36
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 37
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1205), ___get_global_const(1206)));
#line 37
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 38
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 39
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(312), ___get_global_const(699)));
#line 39
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 40
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_const(1205), ___get_global_const(1208)));
#line 40
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 40
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_const(1209), ___nl__im__2, ___get_global_const(221), ___nl__im__3, ___get_global_const(1207), ___nl__im__4, ___get_global_const(212), ___nl__im__5, ___get_global_const(448), ___nl__im__6, ___get_global_const(1208), ___nl__im__7));
#line 40
c_rt_lib0clear(&___nl__im__2);
#line 40
c_rt_lib0clear(&___nl__im__3);
#line 40
c_rt_lib0clear(&___nl__im__4);
#line 40
c_rt_lib0clear(&___nl__im__5);
#line 40
c_rt_lib0clear(&___nl__im__6);
#line 40
c_rt_lib0clear(&___nl__im__7);
#line 40
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
#line 40
c_rt_lib0clear(&___nl__im__1);
#line 40
return ___nl__im__0;
#line 40
c_rt_lib0clear(&___nl__im__0);
#line 40
return NULL;
}

ImmT  translator0string_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0string_t");
return translator0string_t();
}
ImmT  translator0string_t() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 45
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 45
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 45
c_rt_lib0clear(&___nl__im__3);
#line 45
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 45
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 45
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(916), ___nl__im__6, ___get_global_const(917), ___nl__im__7));
#line 45
c_rt_lib0clear(&___nl__im__6);
#line 45
c_rt_lib0clear(&___nl__im__7);
#line 45
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 45
c_rt_lib0clear(&___nl__im__5);
#line 45
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(130), ___nl__im__2, ___get_global_const(918), ___nl__im__4));
#line 45
c_rt_lib0clear(&___nl__im__2);
#line 45
c_rt_lib0clear(&___nl__im__4);
#line 45
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 45
c_rt_lib0clear(&___nl__im__1);
#line 45
return ___nl__im__0;
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
return NULL;
}

ImmT  translator0lvalue_values_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0lvalue_values_t");
return translator0lvalue_values_t();
}
ImmT  translator0lvalue_values_t() {
translator_priv0__const__init();
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
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
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
#line 50
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 50
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 51
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 51
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 51
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 51
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 51
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__6, ___get_global_const(564), ___nl__im__7));
#line 51
c_rt_lib0clear(&___nl__im__6);
#line 51
c_rt_lib0clear(&___nl__im__7);
#line 51
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 51
c_rt_lib0clear(&___nl__im__5);
#line 52
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 52
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 52
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__10, ___get_global_const(371), ___nl__im__11));
#line 52
c_rt_lib0clear(&___nl__im__10);
#line 52
c_rt_lib0clear(&___nl__im__11);
#line 52
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 52
c_rt_lib0clear(&___nl__im__9);
#line 53
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 53
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 53
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 53
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__15));
#line 53
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 53
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__14, ___get_global_const(1211), ___nl__im__15, ___get_global_const(562), ___nl__im__16));
#line 53
c_rt_lib0clear(&___nl__im__14);
#line 53
c_rt_lib0clear(&___nl__im__15);
#line 53
c_rt_lib0clear(&___nl__im__16);
#line 53
c_rt_lib0move(&___nl__im__12, ptd0rec(___nl__im__13));
#line 53
c_rt_lib0clear(&___nl__im__13);
#line 54
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 54
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 54
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 54
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 54
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 54
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 54
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__19, ___get_global_const(1211), ___nl__im__20, ___get_global_const(564), ___nl__im__21));
#line 54
c_rt_lib0clear(&___nl__im__19);
#line 54
c_rt_lib0clear(&___nl__im__20);
#line 54
c_rt_lib0clear(&___nl__im__21);
#line 54
c_rt_lib0move(&___nl__im__17, ptd0rec(___nl__im__18));
#line 54
c_rt_lib0clear(&___nl__im__18);
#line 55
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 55
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 55
c_rt_lib0move(&___nl__im__25, ptd0string());
#line 55
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__24, ___get_global_const(534), ___nl__im__25));
#line 55
c_rt_lib0clear(&___nl__im__24);
#line 55
c_rt_lib0clear(&___nl__im__25);
#line 55
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 55
c_rt_lib0clear(&___nl__im__23);
#line 56
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 56
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__28));
#line 56
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 56
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__29));
#line 56
c_rt_lib0move(&___nl__im__30, ptd0string());
#line 56
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__28, ___get_global_const(1211), ___nl__im__29, ___get_global_const(534), ___nl__im__30));
#line 56
c_rt_lib0clear(&___nl__im__28);
#line 56
c_rt_lib0clear(&___nl__im__29);
#line 56
c_rt_lib0clear(&___nl__im__30);
#line 56
c_rt_lib0move(&___nl__im__26, ptd0rec(___nl__im__27));
#line 56
c_rt_lib0clear(&___nl__im__27);
#line 57
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 57
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__33));
#line 57
c_rt_lib0move(&___nl__im__34, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 57
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__34));
#line 57
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__33, ___get_global_const(371), ___nl__im__34));
#line 57
c_rt_lib0clear(&___nl__im__33);
#line 57
c_rt_lib0clear(&___nl__im__34);
#line 57
c_rt_lib0move(&___nl__im__31, ptd0rec(___nl__im__32));
#line 57
c_rt_lib0clear(&___nl__im__32);
#line 58
c_rt_lib0move(&___nl__im__37, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 58
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__37));
#line 58
c_rt_lib0move(&___nl__im__38, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 58
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__38));
#line 58
c_rt_lib0move(&___nl__im__39, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 58
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__39));
#line 58
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__37, ___get_global_const(1211), ___nl__im__38, ___get_global_const(564), ___nl__im__39));
#line 58
c_rt_lib0clear(&___nl__im__37);
#line 58
c_rt_lib0clear(&___nl__im__38);
#line 58
c_rt_lib0clear(&___nl__im__39);
#line 58
c_rt_lib0move(&___nl__im__35, ptd0rec(___nl__im__36));
#line 58
c_rt_lib0clear(&___nl__im__36);
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(9, ___get_global_const(219), ___nl__im__3, ___get_global_const(564), ___nl__im__4, ___get_global_const(371), ___nl__im__8, ___get_global_const(253), ___nl__im__12, ___get_global_const(255), ___nl__im__17, ___get_global_const(903), ___nl__im__22, ___get_global_const(259), ___nl__im__26, ___get_global_const(1199), ___nl__im__31, ___get_global_const(257), ___nl__im__35));
#line 58
c_rt_lib0clear(&___nl__im__3);
#line 58
c_rt_lib0clear(&___nl__im__4);
#line 58
c_rt_lib0clear(&___nl__im__8);
#line 58
c_rt_lib0clear(&___nl__im__12);
#line 58
c_rt_lib0clear(&___nl__im__17);
#line 58
c_rt_lib0clear(&___nl__im__22);
#line 58
c_rt_lib0clear(&___nl__im__26);
#line 58
c_rt_lib0clear(&___nl__im__31);
#line 58
c_rt_lib0clear(&___nl__im__35);
#line 58
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 58
c_rt_lib0clear(&___nl__im__2);
#line 58
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
return ___nl__im__0;
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
return NULL;
}

nast0debug_t0type translator0last_debug_char0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0last_debug_char");
nast0debug_t0type *var0 = &(_tab[0]);
return translator0last_debug_char(*var0);
}
nast0debug_t0type translator0last_debug_char(nast0debug_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 63
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(916)));
#line 63
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(154)));
#line 63
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 63
c_rt_lib0clear(&___nl__im__3);
#line 63
c_rt_lib0clear(&___nl__im__4);
#line 63
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__2));
#line 63
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(916)));
#line 63
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(929)));
#line 63
___nl__int__7 = getIntFromImm(___nl__im__9);
#line 63
c_rt_lib0clear(&___nl__im__8);
#line 63
c_rt_lib0clear(&___nl__im__9);
#line 63
___nl__int__10 = 1;
#line 63
___nl__int__6 = ___nl__int__7 - ___nl__int__10;
#line 63
//clear ___nl__int__7;
#line 63
//clear ___nl__int__10;
#line 63
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__6));
#line 63
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__5, ___get_global_const(929), ___nl__im__11));
#line 63
//clear ___nl__int__2;
#line 63
c_rt_lib0clear(&___nl__im__5);
#line 63
//clear ___nl__int__6;
#line 63
c_rt_lib0clear(&___nl__im__11);
#line 64
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(916)));
#line 64
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(154)));
#line 64
___nl__int__13 = getIntFromImm(___nl__im__15);
#line 64
c_rt_lib0clear(&___nl__im__14);
#line 64
c_rt_lib0clear(&___nl__im__15);
#line 64
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__13));
#line 64
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(916)));
#line 64
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(929)));
#line 64
___nl__int__17 = getIntFromImm(___nl__im__19);
#line 64
c_rt_lib0clear(&___nl__im__18);
#line 64
c_rt_lib0clear(&___nl__im__19);
#line 64
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__17));
#line 64
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(154), ___nl__im__16, ___get_global_const(929), ___nl__im__20));
#line 64
//clear ___nl__int__13;
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
//clear ___nl__int__17;
#line 64
c_rt_lib0clear(&___nl__im__20);
#line 65
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__1, ___get_global_const(916), ___nl__im__12));
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__12);
#line 65
return ___nl__im__21;
}

nlasm0result_t0type translator0translate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "translator0translate");
nast0module_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
return translator0translate(*var0, *var1);
}
nlasm0result_t0type translator0translate(nast0module_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
translator0state_t0type ___nl__rec__33 = {};
INT * ___nl__int_ptr__34 = NULL;
ImmT * ___nl__im_ptr__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
ImmT * ___nl__im_ptr__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT * ___nl__im_ptr__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT * ___nl__im_ptr__55 = NULL;
ImmT  ___nl__string__56 = NULL;
#line 69
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 69
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 69
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 69
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(212), ___nl__im__3, ___get_global_const(208), ___nl__im__4, ___get_global_const(438), ___nl__im__5));
#line 69
c_rt_lib0clear(&___nl__im__3);
#line 69
c_rt_lib0clear(&___nl__im__4);
#line 69
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 70
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 70
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(438), ___nl__im__6);
#line 70
c_rt_lib0clear(&___nl__im__6);
#line 70
c_rt_lib0clear(&___nl__im__7);
#line 71
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(173)));
#line 71
___nl__int__10 = 0;
#line 71
___nl__int__11 = 1;
#line 71
___nl__int__12 = c_rt_lib0array_len(___nl__im__8);
#line 71
label_3:
;
#line 71
___nl__int__14 = ___nl__int__10 >= ___nl__int__12;
#line 71
___nl__bool__13 = ___nl__int__14;
#line 71
if(___nl__bool__13){ goto label_1;}
#line 71
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__10));
#line 71
c_rt_lib0copy(&___nl__im__9, ___nl__im__15);
#line 72
c_rt_lib0move(&___nl__im__16,___get_global_const(438));
#line 72
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 72
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(168)));
#line 72
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 72
c_rt_lib0move(&___nl__string__18,___get_global_const(438));
#line 72
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__18, ___nl__im__16));
#line 72
c_rt_lib0clear(&___nl__im__16);
#line 72
c_rt_lib0clear(&___nl__im__17);
#line 72
c_rt_lib0clear(&___nl__string__18);
#line 72
c_rt_lib0clear(&___nl__im__9);
#line 72
label_2:
;
#line 73
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 73
goto label_3;
#line 73
label_1:
;
#line 74
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 74
___nl__int__21 = 0;
#line 74
___nl__int__22 = 1;
#line 74
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 74
label_6:
;
#line 74
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 74
___nl__bool__24 = ___nl__int__25;
#line 74
if(___nl__bool__24){ goto label_4;}
#line 74
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 74
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 76
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(0));
#line 77
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 78
___nl__int__30 = 0;
#line 78
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__30));
#line 79
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 79
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(5, ___get_global_const(720), ___nl__im__28, ___get_global_const(215), ___nl__im__29, ___get_global_const(431), ___nl__im__31, ___get_global_const(1204), ___nl__im__32, ___get_global_const(388), ___nl__im__1));
#line 79
c_rt_lib0clear(&___nl__im__28);
#line 79
c_rt_lib0clear(&___nl__im__29);
#line 79
//clear ___nl__int__30;
#line 79
c_rt_lib0clear(&___nl__im__31);
#line 79
c_rt_lib0clear(&___nl__im__32);
#line 82
;
#line 82
___nl__int_ptr__34 = &(___nl__rec__33.label_nr0field);
#line 83
(*___nl__int_ptr__34) = 0;
#line 83
___nl__int_ptr__34 = NULL;
#line 83
___nl__im_ptr__35 = &(___nl__rec__33.debug0field);
#line 84
c_rt_lib0move(___nl__im_ptr__35, nlasm0empty_debug());
#line 84
___nl__im_ptr__35 = NULL;
#line 84
___nl__im_ptr__36 = &(___nl__rec__33.module_name0field);
#line 85
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 85
___nl__im_ptr__36 = NULL;
#line 85
___nl__im_ptr__37 = &(___nl__rec__33.logic0field);
#line 86
c_rt_lib0copy(___nl__im_ptr__37, ___nl__im__27);
#line 86
___nl__im_ptr__37 = NULL;
#line 86
___nl__im_ptr__38 = &(___nl__rec__33.result0field);
#line 88
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 89
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(209)));
#line 90
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 91
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 92
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 93
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 94
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(168)));
#line 95
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(167)));
#line 96
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(0));
#line 96
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(9, ___get_global_const(226), ___nl__im__39, ___get_global_const(209), ___nl__im__40, ___get_global_const(215), ___nl__im__41, ___get_global_const(214), ___nl__im__42, ___get_global_const(387), ___nl__im__43, ___get_global_const(213), ___nl__im__44, ___get_global_const(168), ___nl__im__45, ___get_global_const(167), ___nl__im__46, ___get_global_const(720), ___nl__im__47));
#line 96
c_rt_lib0clear(&___nl__im__39);
#line 96
c_rt_lib0clear(&___nl__im__40);
#line 96
c_rt_lib0clear(&___nl__im__41);
#line 96
c_rt_lib0clear(&___nl__im__42);
#line 96
c_rt_lib0clear(&___nl__im__43);
#line 96
c_rt_lib0clear(&___nl__im__44);
#line 96
c_rt_lib0clear(&___nl__im__45);
#line 96
c_rt_lib0clear(&___nl__im__46);
#line 96
c_rt_lib0clear(&___nl__im__47);
#line 96
___nl__im_ptr__38 = NULL;
#line 96
___nl__im_ptr__48 = &(___nl__rec__33.loop_label0field);
#line 98
c_rt_lib0move(&___nl__im__50,___get_global_const(41));
#line 98
c_rt_lib0move(&___nl__im__50, c_rt_lib0unary_minus(___nl__im__50));
#line 98
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(2, ___get_global_const(534), ___nl__im__50, ___get_global_const(1207), ___nl__im__27));
#line 98
c_rt_lib0clear(&___nl__im__50);
#line 98
c_rt_lib0move(&___nl__im__52,___get_global_const(41));
#line 98
c_rt_lib0move(&___nl__im__52, c_rt_lib0unary_minus(___nl__im__52));
#line 98
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(2, ___get_global_const(534), ___nl__im__52, ___get_global_const(1207), ___nl__im__27));
#line 98
c_rt_lib0clear(&___nl__im__52);
#line 98
c_rt_lib0move(___nl__im_ptr__48, c_rt_lib0hash_mk(2, ___get_global_const(854), ___nl__im__49, ___get_global_const(855), ___nl__im__51));
#line 98
c_rt_lib0clear(&___nl__im__49);
#line 98
c_rt_lib0clear(&___nl__im__51);
#line 98
___nl__im_ptr__48 = NULL;
#line 100
c_rt_lib0delete(translator_priv0print_fun_def(___nl__im__20, &___nl__rec__33));
#line 101
c_rt_lib0move(&___nl__im__53,___get_global_const(208));
#line 101
c_rt_lib0move(&___nl__im__53, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__53));
#line 101
___nl__im_ptr__55 = &(___nl__rec__33.result0field);
#line 101
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 101
___nl__im_ptr__55 = NULL;
#line 101
c_rt_lib0delete(array0push(&___nl__im__53, ___nl__im__54));
#line 101
c_rt_lib0move(&___nl__string__56,___get_global_const(208));
#line 101
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__56, ___nl__im__53));
#line 101
c_rt_lib0clear(&___nl__im__53);
#line 101
c_rt_lib0clear(&___nl__im__54);
#line 101
c_rt_lib0clear(&___nl__string__56);
#line 101
c_rt_lib0clear(&___nl__im__20);
#line 101
label_5:
;
#line 102
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 102
goto label_6;
#line 102
label_4:
;
#line 103
c_rt_lib0clear(&___nl__im__0);
#line 103
c_rt_lib0clear(&___nl__im__1);
#line 103
c_rt_lib0clear(&___nl__im__8);
#line 103
c_rt_lib0clear(&___nl__im__9);
#line 103
//clear ___nl__int__10;
#line 103
//clear ___nl__int__11;
#line 103
//clear ___nl__int__12;
#line 103
//clear ___nl__bool__13;
#line 103
//clear ___nl__int__14;
#line 103
c_rt_lib0clear(&___nl__im__15);
#line 103
c_rt_lib0clear(&___nl__im__19);
#line 103
c_rt_lib0clear(&___nl__im__20);
#line 103
//clear ___nl__int__21;
#line 103
//clear ___nl__int__22;
#line 103
//clear ___nl__int__23;
#line 103
//clear ___nl__bool__24;
#line 103
//clear ___nl__int__25;
#line 103
c_rt_lib0clear(&___nl__im__26);
#line 103
c_rt_lib0clear(&___nl__im__27);
#line 103
translator0state_t0type0clean(___nl__rec__33);;
#line 103
return ___nl__im__2;
}

ImmT  translator_priv0print_fun_def(nast0fun_def_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT * ___nl__im_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT * ___nl__im_ptr__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__string__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT * ___nl__im_ptr__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__string__40 = NULL;
ImmT * ___nl__im_ptr__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
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
ImmT * ___nl__im_ptr__67 = NULL;
bool  ___nl__bool__68 = false;
bool  ___nl__bool__69 = false;
#line 107
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 107
___nl__int__4 = 0;
#line 107
___nl__int__5 = 1;
#line 107
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 107
label_3:
;
#line 107
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 107
___nl__bool__7 = ___nl__int__8;
#line 107
if(___nl__bool__7){ goto label_1;}
#line 107
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 107
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 108
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(266)));
#line 108
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(73));
#line 108
if(___nl__bool__11){ goto label_5;}
#line 112
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(40));
#line 112
if(___nl__bool__11){ goto label_6;}
#line 112
c_rt_lib0move(&___nl__im__12,___get_global_const(16));
#line 112
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 112
nl_die_arg(___nl__im__12);
#line 108
label_5:
;
#line 109
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(168)));
#line 109
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(454)));
#line 109
___nl__im_ptr__19 = &((*___ref___rec__1).logic0field);
#line 109
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 109
___nl__im_ptr__19 = NULL;
#line 109
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(388)));
#line 109
c_rt_lib0clear(&___nl__im__18);
#line 109
c_rt_lib0move(&___nl__im__15, translator_priv0var_type_to_reg_type(___nl__im__16, ___nl__im__17));
#line 109
c_rt_lib0clear(&___nl__im__16);
#line 109
c_rt_lib0clear(&___nl__im__17);
#line 109
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 109
c_rt_lib0move(&___nl__im__13, translator_priv0new_declaration(___nl__im__14, ___ref___rec__1, ___nl__im__15, ___nl__im__20));
#line 109
c_rt_lib0clear(&___nl__im__14);
#line 109
c_rt_lib0clear(&___nl__im__15);
#line 109
c_rt_lib0clear(&___nl__im__20);
#line 110
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(224)));
#line 110
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(454)));
#line 110
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(3, ___get_global_const(332), ___nl__im__22, ___get_global_const(431), ___nl__im__13, ___get_global_const(95), ___nl__im__23));
#line 110
c_rt_lib0clear(&___nl__im__22);
#line 110
c_rt_lib0clear(&___nl__im__23);
#line 111
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 111
c_rt_lib0move(&___nl__im__25,___get_global_const(214));
#line 111
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___nl__im_ptr__24), ___nl__im__25));
#line 111
c_rt_lib0delete(array0push(&___nl__im__25, ___nl__im__21));
#line 111
c_rt_lib0move(&___nl__string__26,___get_global_const(214));
#line 111
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__24, ___nl__string__26, ___nl__im__25));
#line 111
___nl__im_ptr__24 = NULL;
#line 111
c_rt_lib0clear(&___nl__im__25);
#line 111
c_rt_lib0clear(&___nl__string__26);
#line 112
goto label_4;
#line 112
label_6:
;
#line 113
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(168)));
#line 113
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(454)));
#line 113
___nl__im_ptr__33 = &((*___ref___rec__1).logic0field);
#line 113
c_rt_lib0copy(&___nl__im__32, (*___nl__im_ptr__33));
#line 113
___nl__im_ptr__33 = NULL;
#line 113
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(388)));
#line 113
c_rt_lib0clear(&___nl__im__32);
#line 113
c_rt_lib0move(&___nl__im__29, translator_priv0var_type_to_reg_type(___nl__im__30, ___nl__im__31));
#line 113
c_rt_lib0clear(&___nl__im__30);
#line 113
c_rt_lib0clear(&___nl__im__31);
#line 113
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 113
c_rt_lib0move(&___nl__im__27, translator_priv0new_declaration(___nl__im__28, ___ref___rec__1, ___nl__im__29, ___nl__im__34));
#line 113
c_rt_lib0clear(&___nl__im__28);
#line 113
c_rt_lib0clear(&___nl__im__29);
#line 113
c_rt_lib0clear(&___nl__im__34);
#line 114
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 114
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(454)));
#line 114
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(332), ___nl__im__36, ___get_global_const(431), ___nl__im__27, ___get_global_const(95), ___nl__im__37));
#line 114
c_rt_lib0clear(&___nl__im__36);
#line 114
c_rt_lib0clear(&___nl__im__37);
#line 115
___nl__im_ptr__38 = &((*___ref___rec__1).result0field);
#line 115
c_rt_lib0move(&___nl__im__39,___get_global_const(214));
#line 115
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___nl__im_ptr__38), ___nl__im__39));
#line 115
c_rt_lib0delete(array0push(&___nl__im__39, ___nl__im__35));
#line 115
c_rt_lib0move(&___nl__string__40,___get_global_const(214));
#line 115
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__38, ___nl__string__40, ___nl__im__39));
#line 115
___nl__im_ptr__38 = NULL;
#line 115
c_rt_lib0clear(&___nl__im__39);
#line 115
c_rt_lib0clear(&___nl__string__40);
#line 116
goto label_4;
#line 116
label_4:
;
#line 116
c_rt_lib0clear(&___nl__im__3);
#line 116
label_2:
;
#line 117
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 117
goto label_3;
#line 117
label_1:
;
#line 118
___nl__im_ptr__41 = &((*___ref___rec__1).result0field);
#line 118
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(387)));
#line 118
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(454)));
#line 118
c_rt_lib0clear(&___nl__im__44);
#line 118
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 118
c_rt_lib0hash_set_value_dec(___nl__im_ptr__41, ___get_global_const(387), ___nl__im__42);
#line 118
___nl__im_ptr__41 = NULL;
#line 118
c_rt_lib0clear(&___nl__im__42);
#line 118
c_rt_lib0clear(&___nl__im__43);
#line 119
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 119
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__45, ___ref___rec__1));
#line 119
c_rt_lib0clear(&___nl__im__45);
#line 121
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 121
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(221)));
#line 121
c_rt_lib0clear(&___nl__im__50);
#line 121
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(916)));
#line 121
c_rt_lib0clear(&___nl__im__49);
#line 121
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 121
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(221)));
#line 121
c_rt_lib0clear(&___nl__im__53);
#line 121
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(916)));
#line 121
c_rt_lib0clear(&___nl__im__52);
#line 121
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(2, ___get_global_const(506), ___nl__im__48, ___get_global_const(916), ___nl__im__51));
#line 121
c_rt_lib0clear(&___nl__im__48);
#line 121
c_rt_lib0clear(&___nl__im__51);
#line 122
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_none(___get_global_const(859)));
#line 123
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(15)));
#line 123
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__47, ___get_global_const(219), ___nl__im__54, ___get_global_const(95), ___nl__im__55));
#line 123
c_rt_lib0clear(&___nl__im__47);
#line 123
c_rt_lib0clear(&___nl__im__54);
#line 123
c_rt_lib0clear(&___nl__im__55);
#line 125
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(387)));
#line 125
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(95)));
#line 125
c_rt_lib0clear(&___nl__im__57);
#line 125
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(95));
#line 125
if(___nl__bool__58){ goto label_8;}
#line 130
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(73));
#line 130
if(___nl__bool__58){ goto label_9;}
#line 130
c_rt_lib0move(&___nl__im__59,___get_global_const(16));
#line 130
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(2, ___nl__im__59, ___nl__im__56));
#line 130
nl_die_arg(___nl__im__59);
#line 125
label_8:
;
#line 125
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__56, ___get_global_const(95)));
#line 125
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 126
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(387)));
#line 126
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_const(454)));
#line 126
c_rt_lib0clear(&___nl__im__64);
#line 126
___nl__im_ptr__67 = &((*___ref___rec__1).logic0field);
#line 126
c_rt_lib0copy(&___nl__im__66, (*___nl__im_ptr__67));
#line 126
___nl__im_ptr__67 = NULL;
#line 126
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(388)));
#line 126
c_rt_lib0clear(&___nl__im__66);
#line 126
c_rt_lib0move(&___nl__im__62, translator_priv0unwrap_ref(___nl__im__63, ___nl__im__65));
#line 126
c_rt_lib0clear(&___nl__im__63);
#line 126
c_rt_lib0clear(&___nl__im__65);
#line 127
___nl__bool__68 = c_rt_lib0priv_is(___nl__im__62, ___get_global_const(8));
#line 127
if(___nl__bool__68){ goto label_12;}
#line 127
___nl__bool__68 = c_rt_lib0priv_is(___nl__im__62, ___get_global_const(0));
#line 127
label_12:
;
#line 127
//clear ___nl__bool__69;
#line 127
___nl__bool__68 = !___nl__bool__68;
#line 127
if(___nl__bool__68){ goto label_11;}
#line 128
c_rt_lib0delete(translator_priv0print_return(___nl__im__46, ___ref___rec__1));
#line 129
goto label_10;
#line 129
label_11:
;
#line 129
label_10:
;
#line 129
//clear ___nl__bool__68;
#line 130
goto label_7;
#line 130
label_9:
;
#line 131
c_rt_lib0delete(translator_priv0print_return(___nl__im__46, ___ref___rec__1));
#line 132
goto label_7;
#line 132
label_7:
;
#line 132
c_rt_lib0clear(&___nl__im__0);
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
c_rt_lib0clear(&___nl__im__3);
#line 132
//clear ___nl__int__4;
#line 132
//clear ___nl__int__5;
#line 132
//clear ___nl__int__6;
#line 132
//clear ___nl__bool__7;
#line 132
//clear ___nl__int__8;
#line 132
c_rt_lib0clear(&___nl__im__9);
#line 132
c_rt_lib0clear(&___nl__im__10);
#line 132
//clear ___nl__bool__11;
#line 132
c_rt_lib0clear(&___nl__im__12);
#line 132
c_rt_lib0clear(&___nl__im__13);
#line 132
c_rt_lib0clear(&___nl__im__21);
#line 132
c_rt_lib0clear(&___nl__im__27);
#line 132
c_rt_lib0clear(&___nl__im__35);
#line 132
c_rt_lib0clear(&___nl__im__46);
#line 132
c_rt_lib0clear(&___nl__im__56);
#line 132
//clear ___nl__bool__58;
#line 132
c_rt_lib0clear(&___nl__im__59);
#line 132
c_rt_lib0clear(&___nl__im__60);
#line 132
c_rt_lib0clear(&___nl__im__61);
#line 132
c_rt_lib0clear(&___nl__im__62);
#line 132
return NULL;
}

ImmT  translator_priv0print_array_declaration(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 137
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 138
___nl__int__5 = 0;
#line 138
___nl__int__6 = 1;
#line 138
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 138
label_3:
;
#line 138
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 138
___nl__bool__8 = ___nl__int__9;
#line 138
if(___nl__bool__8){ goto label_1;}
#line 138
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 138
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 139
c_rt_lib0move(&___nl__im__11, translator_priv0calc_val(___nl__im__4, ___ref___rec__2));
#line 140
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 140
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(329));
#line 140
c_rt_lib0clear(&___nl__im__13);
#line 140
___nl__bool__12 = !___nl__bool__12;
#line 140
if(___nl__bool__12){ goto label_5;}
#line 141
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 141
c_rt_lib0move(&___nl__im__11, translator_priv0get_cast(___nl__im__11, ___nl__im__14, ___ref___rec__2));
#line 141
c_rt_lib0clear(&___nl__im__14);
#line 142
goto label_4;
#line 142
label_5:
;
#line 142
label_4:
;
#line 142
//clear ___nl__bool__12;
#line 143
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__11));
#line 143
c_rt_lib0clear(&___nl__im__4);
#line 143
label_2:
;
#line 144
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 144
goto label_3;
#line 144
label_1:
;
#line 145
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 145
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(130));
#line 145
c_rt_lib0clear(&___nl__im__16);
#line 145
___nl__bool__15 = !___nl__bool__15;
#line 145
if(___nl__bool__15){ goto label_7;}
#line 146
___nl__int__18 = 0;
#line 146
___nl__int__19 = 1;
#line 146
___nl__int__20 = c_rt_lib0array_len(___nl__im__3);
#line 146
label_10:
;
#line 146
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 146
___nl__bool__21 = ___nl__int__22;
#line 146
if(___nl__bool__21){ goto label_8;}
#line 146
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__3, ___nl__int__18));
#line 146
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 147
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__17, ___ref___rec__2));
#line 147
c_rt_lib0clear(&___nl__im__17);
#line 147
label_9:
;
#line 148
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 148
goto label_10;
#line 148
label_8:
;
#line 149
goto label_6;
#line 149
label_7:
;
#line 149
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 149
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(329));
#line 149
c_rt_lib0clear(&___nl__im__24);
#line 149
___nl__bool__15 = !___nl__bool__15;
#line 149
if(___nl__bool__15){ goto label_11;}
#line 150
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__3));
#line 150
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__26));
#line 150
c_rt_lib0clear(&___nl__im__26);
#line 150
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__25));
#line 150
c_rt_lib0clear(&___nl__im__25);
#line 151
goto label_6;
#line 151
label_11:
;
#line 152
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 152
nl_die_arg(___nl__im__27);
#line 153
goto label_6;
#line 153
label_6:
;
#line 153
//clear ___nl__bool__15;
#line 153
c_rt_lib0clear(&___nl__im__17);
#line 153
//clear ___nl__int__18;
#line 153
//clear ___nl__int__19;
#line 153
//clear ___nl__int__20;
#line 153
//clear ___nl__bool__21;
#line 153
//clear ___nl__int__22;
#line 153
c_rt_lib0clear(&___nl__im__23);
#line 153
c_rt_lib0clear(&___nl__im__27);
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__3);
#line 153
c_rt_lib0clear(&___nl__im__4);
#line 153
//clear ___nl__int__5;
#line 153
//clear ___nl__int__6;
#line 153
//clear ___nl__int__7;
#line 153
//clear ___nl__bool__8;
#line 153
//clear ___nl__int__9;
#line 153
c_rt_lib0clear(&___nl__im__10);
#line 153
c_rt_lib0clear(&___nl__im__11);
#line 153
return NULL;
}

ImmT  translator_priv0print_hash_declaration(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT * ___nl__im_ptr__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT * ___nl__im_ptr__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT * ___nl__im_ptr__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT * ___nl__im_ptr__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT * ___nl__im_ptr__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT * ___nl__im_ptr__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
#line 158
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 159
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 159
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(513));
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
___nl__bool__4 = !___nl__bool__4;
#line 159
if(___nl__bool__4){ goto label_2;}
#line 159
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 159
nl_die_arg(___nl__im__6);
#line 159
goto label_1;
#line 159
label_2:
;
#line 159
label_1:
;
#line 159
//clear ___nl__bool__4;
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 160
___nl__int__8 = 0;
#line 160
___nl__int__9 = 1;
#line 160
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 160
label_5:
;
#line 160
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 160
___nl__bool__11 = ___nl__int__12;
#line 160
if(___nl__bool__11){ goto label_3;}
#line 160
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 160
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 161
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 162
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(371)));
#line 162
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(219)));
#line 162
c_rt_lib0clear(&___nl__im__17);
#line 162
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(371)));
#line 162
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_const(219)));
#line 162
c_rt_lib0clear(&___nl__im__19);
#line 162
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(881)));
#line 162
c_rt_lib0clear(&___nl__im__16);
#line 162
c_rt_lib0clear(&___nl__im__18);
#line 163
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 163
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(131));
#line 163
c_rt_lib0clear(&___nl__im__21);
#line 163
___nl__bool__20 = !___nl__bool__20;
#line 163
if(___nl__bool__20){ goto label_7;}
#line 164
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 164
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 164
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(131)));
#line 164
c_rt_lib0clear(&___nl__im__25);
#line 164
c_rt_lib0clear(&___nl__im__26);
#line 164
___nl__im_ptr__29 = &((*___ref___rec__2).logic0field);
#line 164
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 164
___nl__im_ptr__29 = NULL;
#line 164
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(388)));
#line 164
c_rt_lib0clear(&___nl__im__28);
#line 164
c_rt_lib0move(&___nl__im__23, translator_priv0unwrap_ref(___nl__im__24, ___nl__im__27));
#line 164
c_rt_lib0clear(&___nl__im__24);
#line 164
c_rt_lib0clear(&___nl__im__27);
#line 164
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 164
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 164
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(131)));
#line 164
c_rt_lib0clear(&___nl__im__32);
#line 164
c_rt_lib0clear(&___nl__im__33);
#line 164
___nl__im_ptr__36 = &((*___ref___rec__2).logic0field);
#line 164
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 164
___nl__im_ptr__36 = NULL;
#line 164
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(388)));
#line 164
c_rt_lib0clear(&___nl__im__35);
#line 164
c_rt_lib0move(&___nl__im__30, translator_priv0unwrap_ref(___nl__im__31, ___nl__im__34));
#line 164
c_rt_lib0clear(&___nl__im__31);
#line 164
c_rt_lib0clear(&___nl__im__34);
#line 164
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(4)));
#line 164
c_rt_lib0clear(&___nl__im__23);
#line 164
c_rt_lib0clear(&___nl__im__30);
#line 165
___nl__im_ptr__39 = &((*___ref___rec__2).logic0field);
#line 165
c_rt_lib0copy(&___nl__im__38, (*___nl__im_ptr__39));
#line 165
___nl__im_ptr__39 = NULL;
#line 165
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(388)));
#line 165
c_rt_lib0clear(&___nl__im__38);
#line 165
c_rt_lib0move(&___nl__im__22, translator_priv0unwrap_ref(___nl__im__22, ___nl__im__37));
#line 165
c_rt_lib0clear(&___nl__im__37);
#line 166
___nl__im_ptr__42 = &((*___ref___rec__2).logic0field);
#line 166
c_rt_lib0copy(&___nl__im__41, (*___nl__im_ptr__42));
#line 166
___nl__im_ptr__42 = NULL;
#line 166
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(388)));
#line 166
c_rt_lib0clear(&___nl__im__41);
#line 166
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__22, ___nl__im__40));
#line 166
c_rt_lib0clear(&___nl__im__40);
#line 167
goto label_6;
#line 167
label_7:
;
#line 167
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 167
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__43, ___get_global_const(513));
#line 167
c_rt_lib0clear(&___nl__im__43);
#line 167
___nl__bool__20 = !___nl__bool__20;
#line 167
if(___nl__bool__20){ goto label_8;}
#line 168
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 168
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 168
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(513)));
#line 168
c_rt_lib0clear(&___nl__im__47);
#line 168
c_rt_lib0clear(&___nl__im__48);
#line 168
___nl__im_ptr__51 = &((*___ref___rec__2).logic0field);
#line 168
c_rt_lib0copy(&___nl__im__50, (*___nl__im_ptr__51));
#line 168
___nl__im_ptr__51 = NULL;
#line 168
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(388)));
#line 168
c_rt_lib0clear(&___nl__im__50);
#line 168
c_rt_lib0move(&___nl__im__45, translator_priv0unwrap_ref(___nl__im__46, ___nl__im__49));
#line 168
c_rt_lib0clear(&___nl__im__46);
#line 168
c_rt_lib0clear(&___nl__im__49);
#line 168
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 168
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 168
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__55, ___get_global_const(513)));
#line 168
c_rt_lib0clear(&___nl__im__54);
#line 168
c_rt_lib0clear(&___nl__im__55);
#line 168
___nl__im_ptr__58 = &((*___ref___rec__2).logic0field);
#line 168
c_rt_lib0copy(&___nl__im__57, (*___nl__im_ptr__58));
#line 168
___nl__im_ptr__58 = NULL;
#line 168
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(388)));
#line 168
c_rt_lib0clear(&___nl__im__57);
#line 168
c_rt_lib0move(&___nl__im__52, translator_priv0unwrap_ref(___nl__im__53, ___nl__im__56));
#line 168
c_rt_lib0clear(&___nl__im__53);
#line 168
c_rt_lib0clear(&___nl__im__56);
#line 168
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(6)));
#line 168
c_rt_lib0clear(&___nl__im__45);
#line 168
c_rt_lib0clear(&___nl__im__52);
#line 169
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__44, ___nl__im__15));
#line 169
___nl__im_ptr__63 = &((*___ref___rec__2).logic0field);
#line 169
c_rt_lib0copy(&___nl__im__62, (*___nl__im_ptr__63));
#line 169
___nl__im_ptr__63 = NULL;
#line 169
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_const(388)));
#line 169
c_rt_lib0clear(&___nl__im__62);
#line 169
c_rt_lib0move(&___nl__im__59, translator_priv0unwrap_ref(___nl__im__60, ___nl__im__61));
#line 169
c_rt_lib0clear(&___nl__im__60);
#line 169
c_rt_lib0clear(&___nl__im__61);
#line 170
___nl__im_ptr__66 = &((*___ref___rec__2).logic0field);
#line 170
c_rt_lib0copy(&___nl__im__65, (*___nl__im_ptr__66));
#line 170
___nl__im_ptr__66 = NULL;
#line 170
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(388)));
#line 170
c_rt_lib0clear(&___nl__im__65);
#line 170
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__59, ___nl__im__64));
#line 170
c_rt_lib0clear(&___nl__im__64);
#line 171
goto label_6;
#line 171
label_8:
;
#line 171
label_6:
;
#line 171
//clear ___nl__bool__20;
#line 171
c_rt_lib0clear(&___nl__im__22);
#line 171
c_rt_lib0clear(&___nl__im__44);
#line 171
c_rt_lib0clear(&___nl__im__59);
#line 172
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(224)));
#line 172
c_rt_lib0move(&___nl__im__68, translator_priv0calc_val(___nl__im__69, ___ref___rec__2));
#line 172
c_rt_lib0clear(&___nl__im__69);
#line 172
c_rt_lib0move(&___nl__im__67, translator_priv0get_cast(___nl__im__68, ___nl__im__14, ___ref___rec__2));
#line 172
c_rt_lib0clear(&___nl__im__68);
#line 173
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(2, ___get_global_const(371), ___nl__im__15, ___get_global_const(224), ___nl__im__67));
#line 173
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__70));
#line 173
c_rt_lib0clear(&___nl__im__70);
#line 173
c_rt_lib0clear(&___nl__im__7);
#line 173
label_4:
;
#line 174
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 174
goto label_5;
#line 174
label_3:
;
#line 175
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__3));
#line 175
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__72));
#line 175
c_rt_lib0clear(&___nl__im__72);
#line 175
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__71));
#line 175
c_rt_lib0clear(&___nl__im__71);
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
c_rt_lib0clear(&___nl__im__1);
#line 175
c_rt_lib0clear(&___nl__im__3);
#line 175
c_rt_lib0clear(&___nl__im__7);
#line 175
//clear ___nl__int__8;
#line 175
//clear ___nl__int__9;
#line 175
//clear ___nl__int__10;
#line 175
//clear ___nl__bool__11;
#line 175
//clear ___nl__int__12;
#line 175
c_rt_lib0clear(&___nl__im__13);
#line 175
c_rt_lib0clear(&___nl__im__14);
#line 175
c_rt_lib0clear(&___nl__im__15);
#line 175
c_rt_lib0clear(&___nl__im__67);
#line 175
return NULL;
}

ImmT  translator_priv0print_variant(nast0variant_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
#line 179
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 181
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 181
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(517));
#line 181
c_rt_lib0clear(&___nl__im__6);
#line 181
___nl__bool__5 = !___nl__bool__5;
#line 181
if(___nl__bool__5){ goto label_2;}
#line 182
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 182
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 182
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(517)));
#line 182
c_rt_lib0clear(&___nl__im__8);
#line 182
c_rt_lib0clear(&___nl__im__9);
#line 182
___nl__im_ptr__12 = &((*___ref___rec__2).logic0field);
#line 182
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 182
___nl__im_ptr__12 = NULL;
#line 182
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(388)));
#line 182
c_rt_lib0clear(&___nl__im__11);
#line 182
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__7, ___nl__im__10));
#line 182
c_rt_lib0clear(&___nl__im__7);
#line 182
c_rt_lib0clear(&___nl__im__10);
#line 183
goto label_1;
#line 183
label_2:
;
#line 184
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 185
goto label_1;
#line 185
label_1:
;
#line 185
//clear ___nl__bool__5;
#line 186
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 186
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(219)));
#line 186
c_rt_lib0clear(&___nl__im__15);
#line 186
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(859));
#line 186
c_rt_lib0clear(&___nl__im__14);
#line 186
___nl__bool__13 = !___nl__bool__13;
#line 186
___nl__bool__13 = !___nl__bool__13;
#line 186
if(___nl__bool__13){ goto label_4;}
#line 188
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 188
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(517));
#line 188
c_rt_lib0clear(&___nl__im__18);
#line 188
___nl__bool__17 = !___nl__bool__17;
#line 188
if(___nl__bool__17){ goto label_6;}
#line 189
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(14)));
#line 190
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 190
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__22));
#line 190
c_rt_lib0clear(&___nl__im__22);
#line 190
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 190
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__24));
#line 190
c_rt_lib0clear(&___nl__im__24);
#line 190
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__23, ___get_global_const(28)));
#line 190
c_rt_lib0clear(&___nl__im__21);
#line 190
c_rt_lib0clear(&___nl__im__23);
#line 190
___nl__im_ptr__27 = &((*___ref___rec__2).logic0field);
#line 190
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 190
___nl__im_ptr__27 = NULL;
#line 190
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(388)));
#line 190
c_rt_lib0clear(&___nl__im__26);
#line 190
c_rt_lib0move(&___nl__im__16, translator_priv0var_type_to_reg_type(___nl__im__20, ___nl__im__25));
#line 190
c_rt_lib0clear(&___nl__im__20);
#line 190
c_rt_lib0clear(&___nl__im__25);
#line 191
goto label_5;
#line 191
label_6:
;
#line 192
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 193
goto label_5;
#line 193
label_5:
;
#line 193
//clear ___nl__bool__17;
#line 193
c_rt_lib0clear(&___nl__im__19);
#line 194
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 194
c_rt_lib0move(&___nl__im__29, translator_priv0dest_val(___nl__im__30, ___ref___rec__2));
#line 194
c_rt_lib0clear(&___nl__im__30);
#line 194
c_rt_lib0move(&___nl__im__28, translator_priv0get_cast(___nl__im__29, ___nl__im__16, ___ref___rec__2));
#line 194
c_rt_lib0clear(&___nl__im__29);
#line 194
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__28));
#line 194
c_rt_lib0clear(&___nl__im__28);
#line 195
goto label_3;
#line 195
label_4:
;
#line 195
label_3:
;
#line 195
//clear ___nl__bool__13;
#line 195
c_rt_lib0clear(&___nl__im__16);
#line 196
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 196
___nl__int__31 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__4, ___nl__im__32);
#line 196
c_rt_lib0clear(&___nl__im__32);
#line 197
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 197
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__31));
#line 197
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(463)));
#line 197
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(95)));
#line 197
c_rt_lib0clear(&___nl__im__38);
#line 197
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__3, ___get_global_const(534), ___nl__im__35, ___get_global_const(521), ___nl__im__36, ___get_global_const(539), ___nl__im__37));
#line 197
c_rt_lib0clear(&___nl__im__35);
#line 197
c_rt_lib0clear(&___nl__im__36);
#line 197
c_rt_lib0clear(&___nl__im__37);
#line 197
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__34));
#line 197
c_rt_lib0clear(&___nl__im__34);
#line 197
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__33));
#line 197
c_rt_lib0clear(&___nl__im__33);
#line 197
c_rt_lib0clear(&___nl__im__0);
#line 197
c_rt_lib0clear(&___nl__im__1);
#line 197
c_rt_lib0clear(&___nl__im__3);
#line 197
c_rt_lib0clear(&___nl__im__4);
#line 197
//clear ___nl__int__31;
#line 197
return NULL;
}

nlasm0reg_t0type translator_priv0print_var_decl(nast0variable_declaration_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1,nlasm0reg_access_type_t0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__string__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT * ___nl__im_ptr__24 = NULL;
#line 202
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(454)));
#line 202
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 202
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 202
___nl__im_ptr__7 = NULL;
#line 202
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(388)));
#line 202
c_rt_lib0clear(&___nl__im__6);
#line 202
c_rt_lib0move(&___nl__im__3, translator_priv0var_type_to_reg_type(___nl__im__4, ___nl__im__5));
#line 202
c_rt_lib0clear(&___nl__im__4);
#line 202
c_rt_lib0clear(&___nl__im__5);
#line 203
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 203
c_rt_lib0move(&___nl__im__8, translator_priv0new_declaration(___nl__im__9, ___ref___rec__1, ___nl__im__3, ___nl__im__2));
#line 203
c_rt_lib0clear(&___nl__im__9);
#line 204
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 204
c_rt_lib0move(&___nl__im__11,___get_global_const(720));
#line 204
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 204
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(454)));
#line 204
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(95), ___nl__im__13, ___get_global_const(431), ___nl__im__8));
#line 204
c_rt_lib0clear(&___nl__im__13);
#line 204
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 204
c_rt_lib0move(&___nl__string__14,___get_global_const(720));
#line 204
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__14, ___nl__im__11));
#line 204
___nl__im_ptr__10 = NULL;
#line 204
c_rt_lib0clear(&___nl__im__11);
#line 204
c_rt_lib0clear(&___nl__im__12);
#line 204
c_rt_lib0clear(&___nl__string__14);
#line 205
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 205
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(73));
#line 205
if(___nl__bool__16){ goto label_2;}
#line 206
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(219));
#line 206
if(___nl__bool__16){ goto label_3;}
#line 206
c_rt_lib0move(&___nl__im__17,___get_global_const(16));
#line 206
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 206
nl_die_arg(___nl__im__17);
#line 205
label_2:
;
#line 206
goto label_1;
#line 206
label_3:
;
#line 206
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(219)));
#line 206
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 207
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(95)));
#line 207
___nl__im_ptr__24 = &((*___ref___rec__1).logic0field);
#line 207
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 207
___nl__im_ptr__24 = NULL;
#line 207
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(388)));
#line 207
c_rt_lib0clear(&___nl__im__23);
#line 207
___nl__bool__20 = tct0is_own_type(___nl__im__21, ___nl__im__22);
#line 207
c_rt_lib0clear(&___nl__im__21);
#line 207
c_rt_lib0clear(&___nl__im__22);
#line 207
___nl__bool__20 = !___nl__bool__20;
#line 207
if(___nl__bool__20){ goto label_5;}
#line 208
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 209
goto label_4;
#line 209
label_5:
;
#line 210
c_rt_lib0delete(translator_priv0print_val(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 211
goto label_4;
#line 211
label_4:
;
#line 211
//clear ___nl__bool__20;
#line 212
goto label_1;
#line 212
label_1:
;
#line 213
c_rt_lib0clear(&___nl__im__0);
#line 213
c_rt_lib0clear(&___nl__im__2);
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0clear(&___nl__im__15);
#line 213
//clear ___nl__bool__16;
#line 213
c_rt_lib0clear(&___nl__im__17);
#line 213
c_rt_lib0clear(&___nl__im__18);
#line 213
c_rt_lib0clear(&___nl__im__19);
#line 213
return ___nl__im__8;
}

ImmT  translator_priv0load_const(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 217
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(224), ___nl__im__0));
#line 217
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__im__4));
#line 217
c_rt_lib0clear(&___nl__im__4);
#line 217
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 217
c_rt_lib0clear(&___nl__im__3);
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__1);
#line 217
return NULL;
}

ImmT  translator0ref_rec_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0ref_rec_args_t");
return translator0ref_rec_args_t();
}
ImmT  translator0ref_rec_args_t() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 221
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 221
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 221
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 221
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1212), ___nl__im__3, ___get_global_const(1213), ___nl__im__4, ___get_global_const(1214), ___nl__im__5));
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 221
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 221
c_rt_lib0clear(&___nl__im__2);
#line 221
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
return ___nl__im__0;
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
return NULL;
}

ImmT  translator_priv0print_fun_val(nast0fun_val_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,tct0meta_type0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
bool  ___nl__bool__41 = false;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT * ___nl__im_ptr__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
bool  ___nl__bool__61 = false;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
INT  ___nl__int__66 = 0;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT * ___nl__im_ptr__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
bool  ___nl__bool__80 = false;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
bool  ___nl__bool__90 = false;
bool  ___nl__bool__91 = false;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
INT  ___nl__int__102 = 0;
bool  ___nl__bool__103 = false;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
INT  ___nl__int__112 = 0;
ImmT  ___nl__im__113 = NULL;
INT  ___nl__int__114 = 0;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT * ___nl__im_ptr__118 = NULL;
bool  ___nl__bool__119 = false;
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
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
INT  ___nl__int__132 = 0;
INT  ___nl__int__133 = 0;
INT  ___nl__int__134 = 0;
bool  ___nl__bool__135 = false;
INT  ___nl__int__136 = 0;
INT  ___nl__int__137 = 0;
ImmT  ___nl__im__138 = NULL;
bool  ___nl__bool__139 = false;
bool  ___nl__bool__140 = false;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
bool  ___nl__bool__147 = false;
INT  ___nl__int__148 = 0;
#line 225
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 226
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 227
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 228
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 229
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 230
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 230
___nl__int__10 = c_rt_lib0array_len(___nl__im__11);
#line 230
c_rt_lib0clear(&___nl__im__11);
#line 230
___nl__int__12 = 1;
#line 230
___nl__int__9 = ___nl__int__10 - ___nl__int__12;
#line 230
//clear ___nl__int__10;
#line 230
//clear ___nl__int__12;
#line 230
label_2:
;
#line 230
___nl__int__14 = 0;
#line 230
___nl__int__15 = ___nl__int__9 >= ___nl__int__14;
#line 230
___nl__bool__13 = ___nl__int__15;
#line 230
//clear ___nl__int__14;
#line 230
//clear ___nl__int__15;
#line 230
___nl__bool__13 = !___nl__bool__13;
#line 230
if(___nl__bool__13){ goto label_1;}
#line 231
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 231
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__19, ___nl__int__9));
#line 231
c_rt_lib0clear(&___nl__im__19);
#line 231
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(266)));
#line 231
c_rt_lib0clear(&___nl__im__18);
#line 231
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(40));
#line 231
c_rt_lib0clear(&___nl__im__17);
#line 231
___nl__bool__16 = !___nl__bool__16;
#line 231
___nl__bool__16 = !___nl__bool__16;
#line 231
if(___nl__bool__16){ goto label_5;}
#line 231
goto label_3;
#line 231
goto label_4;
#line 231
label_5:
;
#line 231
label_4:
;
#line 231
//clear ___nl__bool__16;
#line 232
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 232
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__22, ___nl__int__9));
#line 232
c_rt_lib0clear(&___nl__im__22);
#line 232
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(224)));
#line 232
c_rt_lib0clear(&___nl__im__21);
#line 233
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__im__20, ___ref___rec__3));
#line 234
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 234
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 234
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(463)));
#line 234
c_rt_lib0clear(&___nl__im__25);
#line 234
c_rt_lib0clear(&___nl__im__26);
#line 234
___nl__bool__23 = hash0has_key(___nl__im__8, ___nl__im__24);
#line 234
c_rt_lib0clear(&___nl__im__24);
#line 234
___nl__bool__23 = !___nl__bool__23;
#line 234
if(___nl__bool__23){ goto label_7;}
#line 234
goto label_3;
#line 234
goto label_6;
#line 234
label_7:
;
#line 234
label_6:
;
#line 234
//clear ___nl__bool__23;
#line 235
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 235
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 235
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(463)));
#line 235
c_rt_lib0clear(&___nl__im__28);
#line 235
c_rt_lib0clear(&___nl__im__29);
#line 235
___nl__int__30 = 0;
#line 235
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__30));
#line 235
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__27, ___nl__im__31));
#line 235
c_rt_lib0clear(&___nl__im__27);
#line 235
//clear ___nl__int__30;
#line 235
c_rt_lib0clear(&___nl__im__31);
#line 236
c_rt_lib0move(&___nl__im__32, ptd0int_to_string(___nl__int__9));
#line 236
___nl__int__33 = 0;
#line 236
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__33));
#line 236
c_rt_lib0delete(hash0set_value(&___nl__im__7, ___nl__im__32, ___nl__im__34));
#line 236
c_rt_lib0clear(&___nl__im__32);
#line 236
//clear ___nl__int__33;
#line 236
c_rt_lib0clear(&___nl__im__34);
#line 236
label_3:
;
#line 230
___nl__int__35 = 1;
#line 230
___nl__int__9 = ___nl__int__9 - ___nl__int__35;
#line 230
//clear ___nl__int__35;
#line 237
goto label_2;
#line 237
label_1:
;
#line 238
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 239
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 239
___nl__int__37 = c_rt_lib0array_len(___nl__im__38);
#line 239
c_rt_lib0clear(&___nl__im__38);
#line 239
___nl__int__39 = 0;
#line 239
___nl__int__40 = 1;
#line 239
label_10:
;
#line 239
___nl__int__42 = ___nl__int__39 >= ___nl__int__37;
#line 239
___nl__bool__41 = ___nl__int__42;
#line 239
if(___nl__bool__41){ goto label_8;}
#line 240
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 240
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__44, ___nl__int__39));
#line 240
c_rt_lib0clear(&___nl__im__44);
#line 241
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(266)));
#line 241
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(73));
#line 241
if(___nl__bool__46){ goto label_12;}
#line 245
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(40));
#line 245
if(___nl__bool__46){ goto label_13;}
#line 245
c_rt_lib0move(&___nl__im__47,___get_global_const(16));
#line 245
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(2, ___nl__im__47, ___nl__im__45));
#line 245
nl_die_arg(___nl__im__47);
#line 241
label_12:
;
#line 242
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 242
c_rt_lib0move(&___nl__im__48, translator_priv0calc_val(___nl__im__49, ___ref___rec__3));
#line 242
c_rt_lib0clear(&___nl__im__49);
#line 243
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(910)));
#line 243
___nl__im_ptr__55 = &((*___ref___rec__3).logic0field);
#line 243
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 243
___nl__im_ptr__55 = NULL;
#line 243
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(388)));
#line 243
c_rt_lib0clear(&___nl__im__54);
#line 243
c_rt_lib0move(&___nl__im__51, translator_priv0var_type_to_reg_type(___nl__im__52, ___nl__im__53));
#line 243
c_rt_lib0clear(&___nl__im__52);
#line 243
c_rt_lib0clear(&___nl__im__53);
#line 243
c_rt_lib0move(&___nl__im__50, translator_priv0get_cast(___nl__im__48, ___nl__im__51, ___ref___rec__3));
#line 243
c_rt_lib0clear(&___nl__im__51);
#line 244
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__50));
#line 244
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__56));
#line 244
c_rt_lib0clear(&___nl__im__56);
#line 245
goto label_11;
#line 245
label_13:
;
#line 246
c_rt_lib0move(&___nl__im__58, ptd0int_to_string(___nl__int__39));
#line 246
___nl__bool__57 = hash0has_key(___nl__im__7, ___nl__im__58);
#line 246
c_rt_lib0clear(&___nl__im__58);
#line 246
___nl__bool__57 = !___nl__bool__57;
#line 246
if(___nl__bool__57){ goto label_15;}
#line 247
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 247
___nl__bool__61 = true;
#line 247
c_rt_lib0move(&___nl__im__59, translator_priv0get_value_of_lvalue(___nl__im__60, ___nl__bool__61, ___ref___rec__3));
#line 247
c_rt_lib0clear(&___nl__im__60);
#line 247
//clear ___nl__bool__61;
#line 248
___nl__int__65 = c_rt_lib0array_len(___nl__im__59);
#line 248
___nl__int__66 = 1;
#line 248
___nl__int__64 = ___nl__int__65 - ___nl__int__66;
#line 248
//clear ___nl__int__65;
#line 248
//clear ___nl__int__66;
#line 248
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_get(___nl__im__59, ___nl__int__64));
#line 248
//clear ___nl__int__64;
#line 248
___nl__int__69 = c_rt_lib0array_len(___nl__im__59);
#line 248
___nl__int__70 = 1;
#line 248
___nl__int__68 = ___nl__int__69 - ___nl__int__70;
#line 248
//clear ___nl__int__69;
#line 248
//clear ___nl__int__70;
#line 248
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__59, ___nl__int__68));
#line 248
//clear ___nl__int__68;
#line 248
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__67, ___get_global_const(219)));
#line 248
c_rt_lib0clear(&___nl__im__63);
#line 248
c_rt_lib0clear(&___nl__im__67);
#line 249
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(910)));
#line 250
___nl__im_ptr__75 = &((*___ref___rec__3).logic0field);
#line 250
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 250
___nl__im_ptr__75 = NULL;
#line 250
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_const(388)));
#line 250
c_rt_lib0clear(&___nl__im__74);
#line 250
c_rt_lib0move(&___nl__im__71, translator_priv0var_type_to_reg_type(___nl__im__72, ___nl__im__73));
#line 250
c_rt_lib0clear(&___nl__im__72);
#line 250
c_rt_lib0clear(&___nl__im__73);
#line 251
c_rt_lib0move(&___nl__im__76, translator_priv0get_cast(___nl__im__62, ___nl__im__71, ___ref___rec__3));
#line 252
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__76));
#line 252
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__77));
#line 252
c_rt_lib0clear(&___nl__im__77);
#line 253
c_rt_lib0move(&___nl__im__79, ptd0int_to_string(___nl__int__39));
#line 253
c_rt_lib0copy(&___nl__im__78, ___nl__im__59);
#line 253
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__79, ___nl__im__78));
#line 253
c_rt_lib0clear(&___nl__im__78);
#line 253
c_rt_lib0clear(&___nl__im__79);
#line 254
___nl__bool__80 = nlasm0eq_reg(___nl__im__62, ___nl__im__76);
#line 254
___nl__bool__80 = !___nl__bool__80;
#line 254
___nl__bool__80 = !___nl__bool__80;
#line 254
if(___nl__bool__80){ goto label_17;}
#line 255
c_rt_lib0move(&___nl__im__82, ptd0int_to_string(___nl__int__39));
#line 255
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_mk(2, ___get_global_const(1215), ___nl__im__62, ___get_global_const(1216), ___nl__im__76));
#line 255
c_rt_lib0copy(&___nl__im__81, ___nl__im__83);
#line 255
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__82, ___nl__im__81));
#line 255
c_rt_lib0clear(&___nl__im__81);
#line 255
c_rt_lib0clear(&___nl__im__82);
#line 255
c_rt_lib0clear(&___nl__im__83);
#line 256
goto label_16;
#line 256
label_17:
;
#line 256
label_16:
;
#line 256
//clear ___nl__bool__80;
#line 257
goto label_14;
#line 257
label_15:
;
#line 258
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 258
c_rt_lib0move(&___nl__im__85, translator_priv0value_type_to_reg_type(___nl__im__86, ___ref___rec__3));
#line 258
c_rt_lib0clear(&___nl__im__86);
#line 258
c_rt_lib0move(&___nl__im__84, translator_priv0new_register(___ref___rec__3, ___nl__im__85));
#line 258
c_rt_lib0clear(&___nl__im__85);
#line 259
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 259
c_rt_lib0delete(translator_priv0print_val(___nl__im__87, ___nl__im__84, ___ref___rec__3));
#line 259
c_rt_lib0clear(&___nl__im__87);
#line 260
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__84));
#line 260
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__88));
#line 260
c_rt_lib0clear(&___nl__im__88);
#line 261
goto label_14;
#line 261
label_14:
;
#line 261
//clear ___nl__bool__57;
#line 261
c_rt_lib0clear(&___nl__im__59);
#line 261
c_rt_lib0clear(&___nl__im__62);
#line 261
c_rt_lib0clear(&___nl__im__71);
#line 261
c_rt_lib0clear(&___nl__im__76);
#line 261
c_rt_lib0clear(&___nl__im__84);
#line 262
goto label_11;
#line 262
label_11:
;
#line 263
c_rt_lib0move(&___nl__im__89, translator_priv0save_registers(___ref___rec__3));
#line 263
c_rt_lib0delete(array0push(&___nl__im__36, ___nl__im__89));
#line 263
c_rt_lib0clear(&___nl__im__89);
#line 263
label_9:
;
#line 264
___nl__int__39 = ___nl__int__39 + ___nl__int__40;
#line 264
goto label_10;
#line 264
label_8:
;
#line 265
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 265
c_rt_lib0move(&___nl__im__93,___get_global_const(1217));
#line 265
___nl__bool__90 = c_rt_lib0eq(___nl__im__92, ___nl__im__93);
#line 265
c_rt_lib0clear(&___nl__im__92);
#line 265
c_rt_lib0clear(&___nl__im__93);
#line 265
___nl__bool__91 = !___nl__bool__90;
#line 265
if(___nl__bool__91){ goto label_20;}
#line 265
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 265
c_rt_lib0move(&___nl__im__95,___get_global_const(283));
#line 265
___nl__bool__90 = c_rt_lib0eq(___nl__im__94, ___nl__im__95);
#line 265
c_rt_lib0clear(&___nl__im__94);
#line 265
c_rt_lib0clear(&___nl__im__95);
#line 265
label_20:
;
#line 265
//clear ___nl__bool__91;
#line 265
___nl__bool__90 = !___nl__bool__90;
#line 265
if(___nl__bool__90){ goto label_19;}
#line 266
___nl__int__100 = 0;
#line 266
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_get(___nl__im__4, ___nl__int__100));
#line 266
//clear ___nl__int__100;
#line 266
___nl__int__102 = 0;
#line 266
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_get(___nl__im__4, ___nl__int__102));
#line 266
//clear ___nl__int__102;
#line 266
c_rt_lib0move(&___nl__im__98, c_rt_lib0priv_as(___nl__im__101, ___get_global_const(40)));
#line 266
c_rt_lib0clear(&___nl__im__99);
#line 266
c_rt_lib0clear(&___nl__im__101);
#line 266
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__98));
#line 266
c_rt_lib0clear(&___nl__im__98);
#line 266
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__97));
#line 266
c_rt_lib0clear(&___nl__im__97);
#line 266
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__96));
#line 266
c_rt_lib0clear(&___nl__im__96);
#line 267
goto label_18;
#line 267
label_19:
;
#line 267
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 267
c_rt_lib0move(&___nl__im__105,___get_global_const(38));
#line 267
___nl__bool__90 = c_rt_lib0eq(___nl__im__104, ___nl__im__105);
#line 267
c_rt_lib0clear(&___nl__im__104);
#line 267
c_rt_lib0clear(&___nl__im__105);
#line 267
___nl__bool__103 = !___nl__bool__90;
#line 267
if(___nl__bool__103){ goto label_22;}
#line 267
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 267
c_rt_lib0move(&___nl__im__107,___get_global_const(283));
#line 267
___nl__bool__90 = c_rt_lib0eq(___nl__im__106, ___nl__im__107);
#line 267
c_rt_lib0clear(&___nl__im__106);
#line 267
c_rt_lib0clear(&___nl__im__107);
#line 267
label_22:
;
#line 267
//clear ___nl__bool__103;
#line 267
___nl__bool__90 = !___nl__bool__90;
#line 267
if(___nl__bool__90){ goto label_21;}
#line 268
___nl__int__112 = 0;
#line 268
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_get(___nl__im__4, ___nl__int__112));
#line 268
//clear ___nl__int__112;
#line 268
___nl__int__114 = 0;
#line 268
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_get(___nl__im__4, ___nl__int__114));
#line 268
//clear ___nl__int__114;
#line 268
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__113, ___get_global_const(224)));
#line 268
c_rt_lib0clear(&___nl__im__111);
#line 268
c_rt_lib0clear(&___nl__im__113);
#line 268
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__110));
#line 268
c_rt_lib0clear(&___nl__im__110);
#line 268
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__109));
#line 268
c_rt_lib0clear(&___nl__im__109);
#line 268
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__108));
#line 268
c_rt_lib0clear(&___nl__im__108);
#line 269
goto label_18;
#line 269
label_21:
;
#line 269
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(8));
#line 269
___nl__bool__90 = !___nl__bool__90;
#line 269
___nl__bool__90 = !___nl__bool__90;
#line 269
if(___nl__bool__90){ goto label_23;}
#line 270
___nl__im_ptr__118 = &((*___ref___rec__3).logic0field);
#line 270
c_rt_lib0copy(&___nl__im__117, (*___nl__im_ptr__118));
#line 270
___nl__im_ptr__118 = NULL;
#line 270
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(388)));
#line 270
c_rt_lib0clear(&___nl__im__117);
#line 270
c_rt_lib0move(&___nl__im__115, translator_priv0var_type_to_reg_type(___nl__im__2, ___nl__im__116));
#line 270
c_rt_lib0clear(&___nl__im__116);
#line 271
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 271
___nl__bool__119 = nlasm0eq_reg_type(___nl__im__115, ___nl__im__120);
#line 271
c_rt_lib0clear(&___nl__im__120);
#line 271
___nl__bool__119 = !___nl__bool__119;
#line 272
c_rt_lib0copy(&___nl__im__121, ___nl__im__1);
#line 273
___nl__bool__122 = ___nl__bool__119;
#line 273
___nl__bool__122 = !___nl__bool__122;
#line 273
if(___nl__bool__122){ goto label_25;}
#line 273
c_rt_lib0move(&___nl__im__121, translator_priv0new_register(___ref___rec__3, ___nl__im__115));
#line 273
goto label_24;
#line 273
label_25:
;
#line 273
label_24:
;
#line 273
//clear ___nl__bool__122;
#line 274
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 274
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 274
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__121, ___get_global_const(266), ___nl__im__125, ___get_global_const(268), ___nl__im__126, ___get_global_const(265), ___nl__im__4));
#line 274
c_rt_lib0clear(&___nl__im__125);
#line 274
c_rt_lib0clear(&___nl__im__126);
#line 274
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__124));
#line 274
c_rt_lib0clear(&___nl__im__124);
#line 274
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__123));
#line 274
c_rt_lib0clear(&___nl__im__123);
#line 275
___nl__bool__127 = ___nl__bool__119;
#line 275
___nl__bool__127 = !___nl__bool__127;
#line 275
if(___nl__bool__127){ goto label_27;}
#line 275
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__121, ___ref___rec__3));
#line 275
goto label_26;
#line 275
label_27:
;
#line 275
label_26:
;
#line 275
//clear ___nl__bool__127;
#line 276
goto label_18;
#line 276
label_23:
;
#line 277
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(152)));
#line 277
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(168)));
#line 277
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__1, ___get_global_const(266), ___nl__im__130, ___get_global_const(268), ___nl__im__131, ___get_global_const(265), ___nl__im__4));
#line 277
c_rt_lib0clear(&___nl__im__130);
#line 277
c_rt_lib0clear(&___nl__im__131);
#line 277
c_rt_lib0move(&___nl__im__128, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__129));
#line 277
c_rt_lib0clear(&___nl__im__129);
#line 277
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__128));
#line 277
c_rt_lib0clear(&___nl__im__128);
#line 278
goto label_18;
#line 278
label_18:
;
#line 278
//clear ___nl__bool__90;
#line 278
c_rt_lib0clear(&___nl__im__115);
#line 278
//clear ___nl__bool__119;
#line 278
c_rt_lib0clear(&___nl__im__121);
#line 279
___nl__int__133 = c_rt_lib0array_len(___nl__im__36);
#line 279
___nl__int__134 = 1;
#line 279
___nl__int__132 = ___nl__int__133 - ___nl__int__134;
#line 279
//clear ___nl__int__133;
#line 279
//clear ___nl__int__134;
#line 279
label_29:
;
#line 279
___nl__int__136 = 0;
#line 279
___nl__int__137 = ___nl__int__132 >= ___nl__int__136;
#line 279
___nl__bool__135 = ___nl__int__137;
#line 279
//clear ___nl__int__136;
#line 279
//clear ___nl__int__137;
#line 279
___nl__bool__135 = !___nl__bool__135;
#line 279
if(___nl__bool__135){ goto label_28;}
#line 280
c_rt_lib0move(&___nl__im__138, ptd0int_to_string(___nl__int__132));
#line 281
___nl__bool__139 = hash0has_key(___nl__im__5, ___nl__im__138);
#line 281
___nl__bool__139 = !___nl__bool__139;
#line 281
___nl__bool__139 = !___nl__bool__139;
#line 281
if(___nl__bool__139){ goto label_32;}
#line 281
goto label_30;
#line 281
goto label_31;
#line 281
label_32:
;
#line 281
label_31:
;
#line 281
//clear ___nl__bool__139;
#line 282
___nl__bool__140 = hash0has_key(___nl__im__6, ___nl__im__138);
#line 282
___nl__bool__140 = !___nl__bool__140;
#line 282
if(___nl__bool__140){ goto label_34;}
#line 283
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__138));
#line 283
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_const(1215)));
#line 283
c_rt_lib0clear(&___nl__im__142);
#line 283
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__138));
#line 283
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_const(1216)));
#line 283
c_rt_lib0clear(&___nl__im__144);
#line 283
c_rt_lib0delete(translator_priv0move(___nl__im__141, ___nl__im__143, ___ref___rec__3));
#line 283
c_rt_lib0clear(&___nl__im__141);
#line 283
c_rt_lib0clear(&___nl__im__143);
#line 284
goto label_33;
#line 284
label_34:
;
#line 284
label_33:
;
#line 284
//clear ___nl__bool__140;
#line 285
c_rt_lib0move(&___nl__im__146, ptd0int_to_string(___nl__int__132));
#line 285
c_rt_lib0move(&___nl__im__145, hash0get_value(___nl__im__5, ___nl__im__146));
#line 285
c_rt_lib0clear(&___nl__im__146);
#line 285
___nl__bool__147 = true;
#line 285
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__145, ___nl__bool__147, ___ref___rec__3));
#line 285
c_rt_lib0clear(&___nl__im__145);
#line 285
//clear ___nl__bool__147;
#line 285
label_30:
;
#line 279
___nl__int__148 = 1;
#line 279
___nl__int__132 = ___nl__int__132 - ___nl__int__148;
#line 279
//clear ___nl__int__148;
#line 286
goto label_29;
#line 286
label_28:
;
#line 286
c_rt_lib0clear(&___nl__im__0);
#line 286
c_rt_lib0clear(&___nl__im__1);
#line 286
c_rt_lib0clear(&___nl__im__2);
#line 286
c_rt_lib0clear(&___nl__im__4);
#line 286
c_rt_lib0clear(&___nl__im__5);
#line 286
c_rt_lib0clear(&___nl__im__6);
#line 286
c_rt_lib0clear(&___nl__im__7);
#line 286
c_rt_lib0clear(&___nl__im__8);
#line 286
//clear ___nl__int__9;
#line 286
//clear ___nl__bool__13;
#line 286
c_rt_lib0clear(&___nl__im__20);
#line 286
c_rt_lib0clear(&___nl__im__36);
#line 286
//clear ___nl__int__37;
#line 286
//clear ___nl__int__39;
#line 286
//clear ___nl__int__40;
#line 286
//clear ___nl__bool__41;
#line 286
//clear ___nl__int__42;
#line 286
c_rt_lib0clear(&___nl__im__43);
#line 286
c_rt_lib0clear(&___nl__im__45);
#line 286
//clear ___nl__bool__46;
#line 286
c_rt_lib0clear(&___nl__im__47);
#line 286
c_rt_lib0clear(&___nl__im__48);
#line 286
c_rt_lib0clear(&___nl__im__50);
#line 286
//clear ___nl__int__132;
#line 286
//clear ___nl__bool__135;
#line 286
c_rt_lib0clear(&___nl__im__138);
#line 286
return NULL;
}

ImmT  translator_priv0print_val(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
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
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
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
ImmT  ___nl__im__45 = NULL;
#line 290
___nl__im_ptr__3 = &((*___ref___rec__2).debug0field);
#line 290
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 290
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 290
c_rt_lib0hash_set_value_dec(___nl__im_ptr__3, ___get_global_const(505), ___nl__im__4);
#line 290
___nl__im_ptr__3 = NULL;
#line 290
c_rt_lib0clear(&___nl__im__4);
#line 290
c_rt_lib0clear(&___nl__im__5);
#line 291
c_rt_lib0move(&___nl__im__6, translator_priv0save_registers(___ref___rec__2));
#line 292
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 292
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(222));
#line 292
if(___nl__bool__8){ goto label_2;}
#line 294
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(527));
#line 294
if(___nl__bool__8){ goto label_3;}
#line 296
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(880));
#line 296
if(___nl__bool__8){ goto label_4;}
#line 298
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(881));
#line 298
if(___nl__bool__8){ goto label_5;}
#line 300
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(517));
#line 300
if(___nl__bool__8){ goto label_6;}
#line 302
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(463));
#line 302
if(___nl__bool__8){ goto label_7;}
#line 304
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(878));
#line 304
if(___nl__bool__8){ goto label_8;}
#line 306
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(234));
#line 306
if(___nl__bool__8){ goto label_9;}
#line 308
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(882));
#line 308
if(___nl__bool__8){ goto label_10;}
#line 310
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(839));
#line 310
if(___nl__bool__8){ goto label_11;}
#line 312
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(230));
#line 312
if(___nl__bool__8){ goto label_12;}
#line 314
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(231));
#line 314
if(___nl__bool__8){ goto label_13;}
#line 316
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(859));
#line 316
if(___nl__bool__8){ goto label_14;}
#line 317
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(883));
#line 317
if(___nl__bool__8){ goto label_15;}
#line 319
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(884));
#line 319
if(___nl__bool__8){ goto label_16;}
#line 321
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(885));
#line 321
if(___nl__bool__8){ goto label_17;}
#line 321
c_rt_lib0move(&___nl__im__9,___get_global_const(16));
#line 321
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 321
nl_die_arg(___nl__im__9);
#line 292
label_2:
;
#line 292
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(222)));
#line 292
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 293
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__10));
#line 293
c_rt_lib0delete(translator_priv0load_const(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 293
c_rt_lib0clear(&___nl__im__12);
#line 294
goto label_1;
#line 294
label_3:
;
#line 294
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(527)));
#line 294
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 295
c_rt_lib0move(&___nl__im__15, translator_priv0make_string(___nl__im__13, ___ref___rec__2));
#line 295
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__1, ___ref___rec__2));
#line 295
c_rt_lib0clear(&___nl__im__15);
#line 296
goto label_1;
#line 296
label_4:
;
#line 296
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(880)));
#line 296
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 297
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 298
goto label_1;
#line 298
label_5:
;
#line 298
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(881)));
#line 298
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 299
c_rt_lib0delete(translator_priv0load_const(___nl__im__18, ___nl__im__1, ___ref___rec__2));
#line 300
goto label_1;
#line 300
label_6:
;
#line 300
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(517)));
#line 300
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 301
c_rt_lib0delete(translator_priv0print_variant(___nl__im__20, ___nl__im__1, ___ref___rec__2));
#line 302
goto label_1;
#line 302
label_7:
;
#line 302
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(463)));
#line 302
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 303
c_rt_lib0delete(translator_priv0print_variable(___nl__im__22, ___nl__im__1, ___ref___rec__2));
#line 304
goto label_1;
#line 304
label_8:
;
#line 304
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(878)));
#line 304
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 305
c_rt_lib0delete(translator_priv0print_val(___nl__im__24, ___nl__im__1, ___ref___rec__2));
#line 306
goto label_1;
#line 306
label_9:
;
#line 306
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(234)));
#line 306
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 307
c_rt_lib0delete(translator_priv0print_bin_op(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 308
goto label_1;
#line 308
label_10:
;
#line 308
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(882)));
#line 308
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 309
c_rt_lib0delete(translator_priv0print_unary_op(___nl__im__28, ___nl__im__1, ___ref___rec__2));
#line 310
goto label_1;
#line 310
label_11:
;
#line 310
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(839)));
#line 310
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 311
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 311
c_rt_lib0delete(translator_priv0print_fun_val(___nl__im__30, ___nl__im__1, ___nl__im__32, ___ref___rec__2));
#line 311
c_rt_lib0clear(&___nl__im__32);
#line 312
goto label_1;
#line 312
label_12:
;
#line 312
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(230)));
#line 312
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 313
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__im__33, ___nl__im__1, ___ref___rec__2));
#line 314
goto label_1;
#line 314
label_13:
;
#line 314
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(231)));
#line 314
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 315
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__im__35, ___nl__im__1, ___ref___rec__2));
#line 316
goto label_1;
#line 316
label_14:
;
#line 317
goto label_1;
#line 317
label_15:
;
#line 317
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(883)));
#line 317
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 318
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 318
nl_die_arg(___nl__im__39);
#line 319
goto label_1;
#line 319
label_16:
;
#line 319
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(884)));
#line 319
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 320
c_rt_lib0move(&___nl__im__42,___get_global_const(901));
#line 320
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__40, ___nl__im__42, ___nl__im__1, ___ref___rec__2));
#line 320
c_rt_lib0clear(&___nl__im__42);
#line 321
goto label_1;
#line 321
label_17:
;
#line 321
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(885)));
#line 321
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 322
c_rt_lib0move(&___nl__im__45,___get_global_const(191));
#line 322
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__43, ___nl__im__45, ___nl__im__1, ___ref___rec__2));
#line 322
c_rt_lib0clear(&___nl__im__45);
#line 323
goto label_1;
#line 323
label_1:
;
#line 324
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__6, ___ref___rec__2));
#line 324
c_rt_lib0clear(&___nl__im__0);
#line 324
c_rt_lib0clear(&___nl__im__1);
#line 324
c_rt_lib0clear(&___nl__im__6);
#line 324
c_rt_lib0clear(&___nl__im__7);
#line 324
//clear ___nl__bool__8;
#line 324
c_rt_lib0clear(&___nl__im__9);
#line 324
//clear ___nl__int__10;
#line 324
c_rt_lib0clear(&___nl__im__11);
#line 324
c_rt_lib0clear(&___nl__im__13);
#line 324
c_rt_lib0clear(&___nl__im__14);
#line 324
c_rt_lib0clear(&___nl__im__16);
#line 324
c_rt_lib0clear(&___nl__im__17);
#line 324
c_rt_lib0clear(&___nl__im__18);
#line 324
c_rt_lib0clear(&___nl__im__19);
#line 324
c_rt_lib0clear(&___nl__im__20);
#line 324
c_rt_lib0clear(&___nl__im__21);
#line 324
c_rt_lib0clear(&___nl__im__22);
#line 324
c_rt_lib0clear(&___nl__im__23);
#line 324
c_rt_lib0clear(&___nl__im__24);
#line 324
c_rt_lib0clear(&___nl__im__25);
#line 324
c_rt_lib0clear(&___nl__im__26);
#line 324
c_rt_lib0clear(&___nl__im__27);
#line 324
c_rt_lib0clear(&___nl__im__28);
#line 324
c_rt_lib0clear(&___nl__im__29);
#line 324
c_rt_lib0clear(&___nl__im__30);
#line 324
c_rt_lib0clear(&___nl__im__31);
#line 324
c_rt_lib0clear(&___nl__im__33);
#line 324
c_rt_lib0clear(&___nl__im__34);
#line 324
c_rt_lib0clear(&___nl__im__35);
#line 324
c_rt_lib0clear(&___nl__im__36);
#line 324
c_rt_lib0clear(&___nl__im__37);
#line 324
c_rt_lib0clear(&___nl__im__38);
#line 324
c_rt_lib0clear(&___nl__im__39);
#line 324
c_rt_lib0clear(&___nl__im__40);
#line 324
c_rt_lib0clear(&___nl__im__41);
#line 324
c_rt_lib0clear(&___nl__im__43);
#line 324
c_rt_lib0clear(&___nl__im__44);
#line 324
return NULL;
}

ImmT  translator_priv0print_variable(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 328
c_rt_lib0move(&___nl__im__3, translator_priv0get_var_register(___nl__im__0, ___ref___rec__2));
#line 328
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__3, ___ref___rec__2));
#line 328
c_rt_lib0clear(&___nl__im__3);
#line 328
c_rt_lib0clear(&___nl__im__0);
#line 328
c_rt_lib0clear(&___nl__im__1);
#line 328
return NULL;
}

ImmT  translator_priv0print_post_operator(nast0value_t0type ___nl__im__0,ImmT  ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
#line 333
___nl__bool__5 = true;
#line 333
c_rt_lib0move(&___nl__im__4, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__5, ___ref___rec__3));
#line 333
//clear ___nl__bool__5;
#line 334
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 334
___nl__int__10 = 1;
#line 334
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 334
//clear ___nl__int__9;
#line 334
//clear ___nl__int__10;
#line 334
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__4, ___nl__int__8));
#line 334
//clear ___nl__int__8;
#line 334
___nl__int__13 = c_rt_lib0array_len(___nl__im__4);
#line 334
___nl__int__14 = 1;
#line 334
___nl__int__12 = ___nl__int__13 - ___nl__int__14;
#line 334
//clear ___nl__int__13;
#line 334
//clear ___nl__int__14;
#line 334
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__12));
#line 334
//clear ___nl__int__12;
#line 334
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(219)));
#line 334
c_rt_lib0clear(&___nl__im__7);
#line 334
c_rt_lib0clear(&___nl__im__11);
#line 335
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__6, ___ref___rec__3));
#line 336
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 336
___nl__int__19 = 1;
#line 336
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 336
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__im__20));
#line 336
//clear ___nl__int__19;
#line 336
c_rt_lib0clear(&___nl__im__20);
#line 336
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 336
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__17, ___get_global_const(219), ___nl__im__18, ___get_global_const(95), ___nl__im__21));
#line 336
c_rt_lib0clear(&___nl__im__17);
#line 336
c_rt_lib0clear(&___nl__im__18);
#line 336
c_rt_lib0clear(&___nl__im__21);
#line 336
c_rt_lib0move(&___nl__im__15, translator_priv0calc_val(___nl__im__16, ___ref___rec__3));
#line 336
c_rt_lib0clear(&___nl__im__16);
#line 337
c_rt_lib0move(&___nl__im__24,___get_global_const(901));
#line 337
___nl__bool__23 = c_rt_lib0eq(___nl__im__1, ___nl__im__24);
#line 337
c_rt_lib0clear(&___nl__im__24);
#line 337
if(___nl__bool__23){ goto label_2;}
#line 337
c_rt_lib0move(&___nl__im__22,___get_global_const(339));
#line 337
goto label_1;
#line 337
label_2:
;
#line 337
c_rt_lib0move(&___nl__im__22,___get_global_const(341));
#line 337
label_1:
;
#line 337
//clear ___nl__bool__23;
#line 337
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__6, ___nl__im__6, ___nl__im__15, ___nl__im__22, ___ref___rec__3));
#line 337
c_rt_lib0clear(&___nl__im__22);
#line 338
___nl__bool__25 = true;
#line 338
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__4, ___nl__bool__25, ___ref___rec__3));
#line 338
//clear ___nl__bool__25;
#line 338
c_rt_lib0clear(&___nl__im__0);
#line 338
c_rt_lib0clear(&___nl__im__1);
#line 338
c_rt_lib0clear(&___nl__im__2);
#line 338
c_rt_lib0clear(&___nl__im__4);
#line 338
c_rt_lib0clear(&___nl__im__6);
#line 338
c_rt_lib0clear(&___nl__im__15);
#line 338
return NULL;
}

ImmT  translator_priv0print_unary_op(nast0unary_op_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
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
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
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
ImmT  ___nl__im__67 = NULL;
#line 342
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 342
c_rt_lib0move(&___nl__im__7,___get_global_const(337));
#line 342
___nl__bool__3 = c_rt_lib0eq(___nl__im__6, ___nl__im__7);
#line 342
c_rt_lib0clear(&___nl__im__6);
#line 342
c_rt_lib0clear(&___nl__im__7);
#line 342
if(___nl__bool__3){ goto label_4;}
#line 342
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 342
c_rt_lib0move(&___nl__im__9,___get_global_const(339));
#line 342
___nl__bool__3 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 342
c_rt_lib0clear(&___nl__im__8);
#line 342
c_rt_lib0clear(&___nl__im__9);
#line 342
label_4:
;
#line 342
//clear ___nl__bool__5;
#line 342
if(___nl__bool__3){ goto label_3;}
#line 342
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 342
c_rt_lib0move(&___nl__im__11,___get_global_const(341));
#line 342
___nl__bool__3 = c_rt_lib0eq(___nl__im__10, ___nl__im__11);
#line 342
c_rt_lib0clear(&___nl__im__10);
#line 342
c_rt_lib0clear(&___nl__im__11);
#line 342
label_3:
;
#line 342
//clear ___nl__bool__4;
#line 342
___nl__bool__3 = !___nl__bool__3;
#line 342
if(___nl__bool__3){ goto label_2;}
#line 343
c_rt_lib0move(&___nl__im__13, nlasm0is_empty(___nl__im__1));
#line 343
___nl__bool__12 = c_rt_lib0check_true_native(___nl__im__13);
#line 343
c_rt_lib0clear(&___nl__im__13);
#line 343
___nl__bool__12 = !___nl__bool__12;
#line 343
if(___nl__bool__12){ goto label_6;}
#line 343
c_rt_lib0clear(&___nl__im__0);
#line 343
c_rt_lib0clear(&___nl__im__1);
#line 343
//clear ___nl__bool__3;
#line 343
//clear ___nl__bool__12;
#line 343
return NULL;
#line 343
goto label_5;
#line 343
label_6:
;
#line 343
label_5:
;
#line 343
//clear ___nl__bool__12;
#line 344
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 344
c_rt_lib0delete(translator_priv0print_val(___nl__im__14, ___nl__im__1, ___ref___rec__2));
#line 344
c_rt_lib0clear(&___nl__im__14);
#line 345
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 345
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__1, ___get_global_const(514), ___nl__im__17));
#line 345
c_rt_lib0clear(&___nl__im__17);
#line 345
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__16));
#line 345
c_rt_lib0clear(&___nl__im__16);
#line 345
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__15));
#line 345
c_rt_lib0clear(&___nl__im__15);
#line 346
goto label_1;
#line 346
label_2:
;
#line 346
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 346
c_rt_lib0move(&___nl__im__20,___get_global_const(901));
#line 346
___nl__bool__3 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 346
c_rt_lib0clear(&___nl__im__19);
#line 346
c_rt_lib0clear(&___nl__im__20);
#line 346
if(___nl__bool__3){ goto label_8;}
#line 346
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 346
c_rt_lib0move(&___nl__im__22,___get_global_const(191));
#line 346
___nl__bool__3 = c_rt_lib0eq(___nl__im__21, ___nl__im__22);
#line 346
c_rt_lib0clear(&___nl__im__21);
#line 346
c_rt_lib0clear(&___nl__im__22);
#line 346
label_8:
;
#line 346
//clear ___nl__bool__18;
#line 346
___nl__bool__3 = !___nl__bool__3;
#line 346
if(___nl__bool__3){ goto label_7;}
#line 347
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 347
___nl__bool__25 = true;
#line 347
c_rt_lib0move(&___nl__im__23, translator_priv0get_value_of_lvalue(___nl__im__24, ___nl__bool__25, ___ref___rec__2));
#line 347
c_rt_lib0clear(&___nl__im__24);
#line 347
//clear ___nl__bool__25;
#line 348
___nl__int__29 = c_rt_lib0array_len(___nl__im__23);
#line 348
___nl__int__30 = 1;
#line 348
___nl__int__28 = ___nl__int__29 - ___nl__int__30;
#line 348
//clear ___nl__int__29;
#line 348
//clear ___nl__int__30;
#line 348
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__23, ___nl__int__28));
#line 348
//clear ___nl__int__28;
#line 348
___nl__int__33 = c_rt_lib0array_len(___nl__im__23);
#line 348
___nl__int__34 = 1;
#line 348
___nl__int__32 = ___nl__int__33 - ___nl__int__34;
#line 348
//clear ___nl__int__33;
#line 348
//clear ___nl__int__34;
#line 348
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__23, ___nl__int__32));
#line 348
//clear ___nl__int__32;
#line 348
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(219)));
#line 348
c_rt_lib0clear(&___nl__im__27);
#line 348
c_rt_lib0clear(&___nl__im__31);
#line 349
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 349
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(221)));
#line 349
c_rt_lib0clear(&___nl__im__38);
#line 349
___nl__int__40 = 1;
#line 349
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__40));
#line 349
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__im__41));
#line 349
//clear ___nl__int__40;
#line 349
c_rt_lib0clear(&___nl__im__41);
#line 349
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 349
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__37, ___get_global_const(219), ___nl__im__39, ___get_global_const(95), ___nl__im__42));
#line 349
c_rt_lib0clear(&___nl__im__37);
#line 349
c_rt_lib0clear(&___nl__im__39);
#line 349
c_rt_lib0clear(&___nl__im__42);
#line 349
c_rt_lib0move(&___nl__im__35, translator_priv0dest_val(___nl__im__36, ___ref___rec__2));
#line 349
c_rt_lib0clear(&___nl__im__36);
#line 350
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 350
c_rt_lib0move(&___nl__im__46,___get_global_const(901));
#line 350
___nl__bool__44 = c_rt_lib0eq(___nl__im__45, ___nl__im__46);
#line 350
c_rt_lib0clear(&___nl__im__45);
#line 350
c_rt_lib0clear(&___nl__im__46);
#line 350
if(___nl__bool__44){ goto label_10;}
#line 350
c_rt_lib0move(&___nl__im__43,___get_global_const(339));
#line 350
goto label_9;
#line 350
label_10:
;
#line 350
c_rt_lib0move(&___nl__im__43,___get_global_const(341));
#line 350
label_9:
;
#line 350
//clear ___nl__bool__44;
#line 350
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__26, ___nl__im__26, ___nl__im__35, ___nl__im__43, ___ref___rec__2));
#line 350
c_rt_lib0clear(&___nl__im__43);
#line 351
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__26, ___ref___rec__2));
#line 352
___nl__bool__47 = true;
#line 352
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__23, ___nl__bool__47, ___ref___rec__2));
#line 352
//clear ___nl__bool__47;
#line 353
goto label_1;
#line 353
label_7:
;
#line 353
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 353
c_rt_lib0move(&___nl__im__49,___get_global_const(306));
#line 353
___nl__bool__3 = c_rt_lib0eq(___nl__im__48, ___nl__im__49);
#line 353
c_rt_lib0clear(&___nl__im__48);
#line 353
c_rt_lib0clear(&___nl__im__49);
#line 353
___nl__bool__3 = !___nl__bool__3;
#line 353
if(___nl__bool__3){ goto label_11;}
#line 354
c_rt_lib0move(&___nl__im__51, nlasm0is_empty(___nl__im__1));
#line 354
___nl__bool__50 = c_rt_lib0check_true_native(___nl__im__51);
#line 354
c_rt_lib0clear(&___nl__im__51);
#line 354
___nl__bool__50 = !___nl__bool__50;
#line 354
if(___nl__bool__50){ goto label_13;}
#line 354
c_rt_lib0clear(&___nl__im__0);
#line 354
c_rt_lib0clear(&___nl__im__1);
#line 354
//clear ___nl__bool__3;
#line 354
c_rt_lib0clear(&___nl__im__23);
#line 354
c_rt_lib0clear(&___nl__im__26);
#line 354
c_rt_lib0clear(&___nl__im__35);
#line 354
//clear ___nl__bool__50;
#line 354
return NULL;
#line 354
goto label_12;
#line 354
label_13:
;
#line 354
label_12:
;
#line 354
//clear ___nl__bool__50;
#line 355
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 355
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(219)));
#line 355
c_rt_lib0clear(&___nl__im__54);
#line 355
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 355
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_const(219)));
#line 355
c_rt_lib0clear(&___nl__im__56);
#line 355
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__55, ___get_global_const(883)));
#line 355
c_rt_lib0clear(&___nl__im__53);
#line 355
c_rt_lib0clear(&___nl__im__55);
#line 356
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(152)));
#line 356
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(168)));
#line 356
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__1, ___get_global_const(152), ___nl__im__59, ___get_global_const(168), ___nl__im__60));
#line 356
c_rt_lib0clear(&___nl__im__59);
#line 356
c_rt_lib0clear(&___nl__im__60);
#line 356
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_const(237), ___nl__im__58));
#line 356
c_rt_lib0clear(&___nl__im__58);
#line 356
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__57));
#line 356
c_rt_lib0clear(&___nl__im__57);
#line 357
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__1));
#line 357
c_rt_lib0move(&___nl__im__64,___get_global_const(40));
#line 357
c_rt_lib0move(&___nl__im__65,___get_global_const(41));
#line 357
c_rt_lib0move(&___nl__im__65, c_rt_lib0unary_minus(___nl__im__65));
#line 357
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 357
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__63, ___get_global_const(534), ___nl__im__64, ___get_global_const(521), ___nl__im__65, ___get_global_const(539), ___nl__im__66));
#line 357
c_rt_lib0clear(&___nl__im__63);
#line 357
c_rt_lib0clear(&___nl__im__64);
#line 357
c_rt_lib0clear(&___nl__im__65);
#line 357
c_rt_lib0clear(&___nl__im__66);
#line 357
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__62));
#line 357
c_rt_lib0clear(&___nl__im__62);
#line 357
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__61));
#line 357
c_rt_lib0clear(&___nl__im__61);
#line 358
goto label_1;
#line 358
label_11:
;
#line 359
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 359
nl_die_arg(___nl__im__67);
#line 360
goto label_1;
#line 360
label_1:
;
#line 360
//clear ___nl__bool__3;
#line 360
c_rt_lib0clear(&___nl__im__23);
#line 360
c_rt_lib0clear(&___nl__im__26);
#line 360
c_rt_lib0clear(&___nl__im__35);
#line 360
c_rt_lib0clear(&___nl__im__52);
#line 360
c_rt_lib0clear(&___nl__im__67);
#line 360
c_rt_lib0clear(&___nl__im__0);
#line 360
c_rt_lib0clear(&___nl__im__1);
#line 360
return NULL;
}

ImmT  translator_priv0print_bin_op(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT * ___nl__im_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
bool  ___nl__bool__57 = false;
bool  ___nl__bool__58 = false;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
bool  ___nl__bool__68 = false;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT * ___nl__im_ptr__73 = NULL;
ImmT  ___nl__im__74 = NULL;
bool  ___nl__bool__75 = false;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
INT  ___nl__int__86 = 0;
INT  ___nl__int__87 = 0;
bool  ___nl__bool__88 = false;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
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
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
INT  ___nl__int__124 = 0;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
bool  ___nl__bool__127 = false;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
bool  ___nl__bool__136 = false;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
bool  ___nl__bool__140 = false;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
bool  ___nl__bool__146 = false;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
INT  ___nl__int__163 = 0;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
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
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
INT  ___nl__int__185 = 0;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
bool  ___nl__bool__191 = false;
bool  ___nl__bool__192 = false;
bool  ___nl__bool__193 = false;
bool  ___nl__bool__194 = false;
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
ImmT  ___nl__im__203 = NULL;
ImmT  ___nl__im__204 = NULL;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
bool  ___nl__bool__209 = false;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
INT  ___nl__int__212 = 0;
INT  ___nl__int__213 = 0;
INT  ___nl__int__214 = 0;
ImmT  ___nl__im__215 = NULL;
INT  ___nl__int__216 = 0;
INT  ___nl__int__217 = 0;
INT  ___nl__int__218 = 0;
ImmT  ___nl__im__219 = NULL;
bool  ___nl__bool__220 = false;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
INT  ___nl__int__223 = 0;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
INT  ___nl__int__234 = 0;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
#line 364
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 364
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 364
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(234)));
#line 364
c_rt_lib0clear(&___nl__im__4);
#line 364
c_rt_lib0clear(&___nl__im__5);
#line 365
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 365
c_rt_lib0move(&___nl__im__8,___get_global_const(889));
#line 365
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 365
c_rt_lib0clear(&___nl__im__7);
#line 365
c_rt_lib0clear(&___nl__im__8);
#line 365
___nl__bool__6 = !___nl__bool__6;
#line 365
if(___nl__bool__6){ goto label_2;}
#line 366
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 366
___nl__bool__11 = false;
#line 366
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__10, ___nl__bool__11, ___ref___rec__2));
#line 366
c_rt_lib0clear(&___nl__im__10);
#line 366
//clear ___nl__bool__11;
#line 367
___nl__int__15 = c_rt_lib0array_len(___nl__im__9);
#line 367
___nl__int__16 = 1;
#line 367
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 367
//clear ___nl__int__15;
#line 367
//clear ___nl__int__16;
#line 367
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__9, ___nl__int__14));
#line 367
//clear ___nl__int__14;
#line 367
___nl__int__19 = c_rt_lib0array_len(___nl__im__9);
#line 367
___nl__int__20 = 1;
#line 367
___nl__int__18 = ___nl__int__19 - ___nl__int__20;
#line 367
//clear ___nl__int__19;
#line 367
//clear ___nl__int__20;
#line 367
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__9, ___nl__int__18));
#line 367
//clear ___nl__int__18;
#line 367
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__17, ___get_global_const(219)));
#line 367
c_rt_lib0clear(&___nl__im__13);
#line 367
c_rt_lib0clear(&___nl__im__17);
#line 368
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 368
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(95)));
#line 368
c_rt_lib0clear(&___nl__im__23);
#line 368
___nl__im_ptr__26 = &((*___ref___rec__2).logic0field);
#line 368
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 368
___nl__im_ptr__26 = NULL;
#line 368
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(388)));
#line 368
c_rt_lib0clear(&___nl__im__25);
#line 368
___nl__bool__21 = tct0is_own_type(___nl__im__22, ___nl__im__24);
#line 368
c_rt_lib0clear(&___nl__im__22);
#line 368
c_rt_lib0clear(&___nl__im__24);
#line 368
___nl__bool__21 = !___nl__bool__21;
#line 368
if(___nl__bool__21){ goto label_4;}
#line 369
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 369
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__27, ___nl__im__12, ___ref___rec__2));
#line 369
c_rt_lib0clear(&___nl__im__27);
#line 370
goto label_3;
#line 370
label_4:
;
#line 370
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 370
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(219)));
#line 370
c_rt_lib0clear(&___nl__im__29);
#line 370
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(463));
#line 370
c_rt_lib0clear(&___nl__im__28);
#line 370
___nl__bool__21 = !___nl__bool__21;
#line 370
if(___nl__bool__21){ goto label_5;}
#line 371
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 371
c_rt_lib0delete(translator_priv0print_val(___nl__im__30, ___nl__im__12, ___ref___rec__2));
#line 371
c_rt_lib0clear(&___nl__im__30);
#line 372
goto label_3;
#line 372
label_5:
;
#line 373
c_rt_lib0move(&___nl__im__31, nlasm0is_empty(___nl__im__1));
#line 374
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__31);
#line 374
___nl__bool__32 = !___nl__bool__32;
#line 374
if(___nl__bool__32){ goto label_7;}
#line 375
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 375
c_rt_lib0move(&___nl__im__34,___get_global_const(41));
#line 375
c_rt_lib0move(&___nl__im__34, c_rt_lib0unary_minus(___nl__im__34));
#line 375
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 375
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__33, ___get_global_const(218), ___nl__im__34, ___get_global_const(330), ___nl__im__35));
#line 375
c_rt_lib0clear(&___nl__im__33);
#line 375
c_rt_lib0clear(&___nl__im__34);
#line 375
c_rt_lib0clear(&___nl__im__35);
#line 376
goto label_6;
#line 376
label_7:
;
#line 376
label_6:
;
#line 376
//clear ___nl__bool__32;
#line 377
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 377
c_rt_lib0move(&___nl__im__36, translator_priv0dest_val(___nl__im__37, ___ref___rec__2));
#line 377
c_rt_lib0clear(&___nl__im__37);
#line 378
c_rt_lib0delete(translator_priv0move(___nl__im__12, ___nl__im__36, ___ref___rec__2));
#line 379
___nl__bool__38 = c_rt_lib0check_true_native(___nl__im__31);
#line 379
___nl__bool__38 = !___nl__bool__38;
#line 379
___nl__bool__38 = !___nl__bool__38;
#line 379
if(___nl__bool__38){ goto label_9;}
#line 380
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__12, ___ref___rec__2));
#line 381
goto label_8;
#line 381
label_9:
;
#line 381
label_8:
;
#line 381
//clear ___nl__bool__38;
#line 382
goto label_3;
#line 382
label_3:
;
#line 382
//clear ___nl__bool__21;
#line 382
c_rt_lib0clear(&___nl__im__31);
#line 382
c_rt_lib0clear(&___nl__im__36);
#line 383
___nl__bool__39 = false;
#line 383
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__9, ___nl__bool__39, ___ref___rec__2));
#line 383
//clear ___nl__bool__39;
#line 384
goto label_1;
#line 384
label_2:
;
#line 384
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 384
c_rt_lib0move(&___nl__im__41,___get_global_const(904));
#line 384
___nl__bool__6 = c_rt_lib0eq(___nl__im__40, ___nl__im__41);
#line 384
c_rt_lib0clear(&___nl__im__40);
#line 384
c_rt_lib0clear(&___nl__im__41);
#line 384
___nl__bool__6 = !___nl__bool__6;
#line 384
if(___nl__bool__6){ goto label_10;}
#line 385
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 385
___nl__bool__44 = true;
#line 385
c_rt_lib0move(&___nl__im__42, translator_priv0get_value_of_lvalue(___nl__im__43, ___nl__bool__44, ___ref___rec__2));
#line 385
c_rt_lib0clear(&___nl__im__43);
#line 385
//clear ___nl__bool__44;
#line 386
___nl__int__48 = c_rt_lib0array_len(___nl__im__42);
#line 386
___nl__int__49 = 1;
#line 386
___nl__int__47 = ___nl__int__48 - ___nl__int__49;
#line 386
//clear ___nl__int__48;
#line 386
//clear ___nl__int__49;
#line 386
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__42, ___nl__int__47));
#line 386
//clear ___nl__int__47;
#line 386
___nl__int__52 = c_rt_lib0array_len(___nl__im__42);
#line 386
___nl__int__53 = 1;
#line 386
___nl__int__51 = ___nl__int__52 - ___nl__int__53;
#line 386
//clear ___nl__int__52;
#line 386
//clear ___nl__int__53;
#line 386
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__42, ___nl__int__51));
#line 386
//clear ___nl__int__51;
#line 386
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(219)));
#line 386
c_rt_lib0clear(&___nl__im__46);
#line 386
c_rt_lib0clear(&___nl__im__50);
#line 387
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 387
c_rt_lib0move(&___nl__im__54, translator_priv0calc_val(___nl__im__55, ___ref___rec__2));
#line 387
c_rt_lib0clear(&___nl__im__55);
#line 388
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__45, ___nl__im__54, ___ref___rec__2));
#line 389
___nl__bool__56 = true;
#line 389
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__42, ___nl__bool__56, ___ref___rec__2));
#line 389
//clear ___nl__bool__56;
#line 390
goto label_1;
#line 390
label_10:
;
#line 390
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 390
c_rt_lib0move(&___nl__im__61,___get_global_const(875));
#line 390
___nl__bool__6 = c_rt_lib0eq(___nl__im__60, ___nl__im__61);
#line 390
c_rt_lib0clear(&___nl__im__60);
#line 390
c_rt_lib0clear(&___nl__im__61);
#line 390
if(___nl__bool__6){ goto label_14;}
#line 390
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 390
c_rt_lib0move(&___nl__im__63,___get_global_const(876));
#line 390
___nl__bool__6 = c_rt_lib0eq(___nl__im__62, ___nl__im__63);
#line 390
c_rt_lib0clear(&___nl__im__62);
#line 390
c_rt_lib0clear(&___nl__im__63);
#line 390
label_14:
;
#line 390
//clear ___nl__bool__59;
#line 390
if(___nl__bool__6){ goto label_13;}
#line 390
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 390
c_rt_lib0move(&___nl__im__65,___get_global_const(532));
#line 390
___nl__bool__6 = c_rt_lib0eq(___nl__im__64, ___nl__im__65);
#line 390
c_rt_lib0clear(&___nl__im__64);
#line 390
c_rt_lib0clear(&___nl__im__65);
#line 390
label_13:
;
#line 390
//clear ___nl__bool__58;
#line 390
if(___nl__bool__6){ goto label_12;}
#line 390
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 390
c_rt_lib0move(&___nl__im__67,___get_global_const(877));
#line 390
___nl__bool__6 = c_rt_lib0eq(___nl__im__66, ___nl__im__67);
#line 390
c_rt_lib0clear(&___nl__im__66);
#line 390
c_rt_lib0clear(&___nl__im__67);
#line 390
label_12:
;
#line 390
//clear ___nl__bool__57;
#line 390
___nl__bool__6 = !___nl__bool__6;
#line 390
if(___nl__bool__6){ goto label_11;}
#line 391
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 391
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_const(95)));
#line 391
c_rt_lib0clear(&___nl__im__70);
#line 391
___nl__im_ptr__73 = &((*___ref___rec__2).logic0field);
#line 391
c_rt_lib0copy(&___nl__im__72, (*___nl__im_ptr__73));
#line 391
___nl__im_ptr__73 = NULL;
#line 391
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_const(388)));
#line 391
c_rt_lib0clear(&___nl__im__72);
#line 391
___nl__bool__68 = tct0is_own_type(___nl__im__69, ___nl__im__71);
#line 391
c_rt_lib0clear(&___nl__im__69);
#line 391
c_rt_lib0clear(&___nl__im__71);
#line 391
___nl__bool__68 = !___nl__bool__68;
#line 391
if(___nl__bool__68){ goto label_16;}
#line 392
___nl__bool__75 = true;
#line 392
c_rt_lib0move(&___nl__im__74, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__75, ___ref___rec__2));
#line 392
//clear ___nl__bool__75;
#line 393
___nl__int__79 = c_rt_lib0array_len(___nl__im__74);
#line 393
___nl__int__80 = 1;
#line 393
___nl__int__78 = ___nl__int__79 - ___nl__int__80;
#line 393
//clear ___nl__int__79;
#line 393
//clear ___nl__int__80;
#line 393
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_get(___nl__im__74, ___nl__int__78));
#line 393
//clear ___nl__int__78;
#line 393
___nl__int__83 = c_rt_lib0array_len(___nl__im__74);
#line 393
___nl__int__84 = 1;
#line 393
___nl__int__82 = ___nl__int__83 - ___nl__int__84;
#line 393
//clear ___nl__int__83;
#line 393
//clear ___nl__int__84;
#line 393
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_get(___nl__im__74, ___nl__int__82));
#line 393
//clear ___nl__int__82;
#line 393
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__81, ___get_global_const(219)));
#line 393
c_rt_lib0clear(&___nl__im__77);
#line 393
c_rt_lib0clear(&___nl__im__81);
#line 393
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__76, ___ref___rec__2));
#line 393
c_rt_lib0clear(&___nl__im__76);
#line 394
___nl__int__86 = c_rt_lib0array_len(___nl__im__74);
#line 394
___nl__int__87 = 1;
#line 394
___nl__int__85 = ___nl__int__86 - ___nl__int__87;
#line 394
//clear ___nl__int__86;
#line 394
//clear ___nl__int__87;
#line 394
label_18:
;
#line 394
___nl__int__89 = 0;
#line 394
___nl__int__90 = ___nl__int__85 >= ___nl__int__89;
#line 394
___nl__bool__88 = ___nl__int__90;
#line 394
//clear ___nl__int__89;
#line 394
//clear ___nl__int__90;
#line 394
___nl__bool__88 = !___nl__bool__88;
#line 394
if(___nl__bool__88){ goto label_17;}
#line 395
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_get(___nl__im__74, ___nl__int__85));
#line 395
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(219));
#line 395
if(___nl__bool__92){ goto label_21;}
#line 396
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(564));
#line 396
if(___nl__bool__92){ goto label_22;}
#line 397
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(1199));
#line 397
if(___nl__bool__92){ goto label_23;}
#line 398
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(371));
#line 398
if(___nl__bool__92){ goto label_24;}
#line 399
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(903));
#line 399
if(___nl__bool__92){ goto label_25;}
#line 400
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(253));
#line 400
if(___nl__bool__92){ goto label_26;}
#line 402
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(255));
#line 402
if(___nl__bool__92){ goto label_27;}
#line 404
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(259));
#line 404
if(___nl__bool__92){ goto label_28;}
#line 406
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__91, ___get_global_const(257));
#line 406
if(___nl__bool__92){ goto label_29;}
#line 406
c_rt_lib0move(&___nl__im__93,___get_global_const(16));
#line 406
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_mk(2, ___nl__im__93, ___nl__im__91));
#line 406
nl_die_arg(___nl__im__93);
#line 395
label_21:
;
#line 395
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(219)));
#line 395
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 396
goto label_20;
#line 396
label_22:
;
#line 396
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(564)));
#line 396
c_rt_lib0copy(&___nl__im__96, ___nl__im__97);
#line 397
goto label_20;
#line 397
label_23:
;
#line 397
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(1199)));
#line 397
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 398
goto label_20;
#line 398
label_24:
;
#line 398
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(371)));
#line 398
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 399
goto label_20;
#line 399
label_25:
;
#line 399
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(903)));
#line 399
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 400
goto label_20;
#line 400
label_26:
;
#line 400
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(253)));
#line 400
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 401
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(1211)));
#line 401
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(1210)));
#line 401
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(562)));
#line 401
c_rt_lib0delete(translator_priv0release_field(___nl__im__106, ___nl__im__107, ___nl__im__108, ___ref___rec__2));
#line 401
c_rt_lib0clear(&___nl__im__106);
#line 401
c_rt_lib0clear(&___nl__im__107);
#line 401
c_rt_lib0clear(&___nl__im__108);
#line 402
goto label_20;
#line 402
label_27:
;
#line 402
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(255)));
#line 402
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 403
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_const(1211)));
#line 403
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_const(1210)));
#line 403
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_const(564)));
#line 403
c_rt_lib0delete(translator_priv0release_index(___nl__im__111, ___nl__im__112, ___nl__im__113, ___ref___rec__2));
#line 403
c_rt_lib0clear(&___nl__im__111);
#line 403
c_rt_lib0clear(&___nl__im__112);
#line 403
c_rt_lib0clear(&___nl__im__113);
#line 404
goto label_20;
#line 404
label_28:
;
#line 404
c_rt_lib0move(&___nl__im__115, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(259)));
#line 404
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 405
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__114, ___get_global_const(1211)));
#line 405
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__114, ___get_global_const(1210)));
#line 405
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__114, ___get_global_const(534)));
#line 405
c_rt_lib0delete(translator_priv0release_variant(___nl__im__116, ___nl__im__117, ___nl__im__118, ___ref___rec__2));
#line 405
c_rt_lib0clear(&___nl__im__116);
#line 405
c_rt_lib0clear(&___nl__im__117);
#line 405
c_rt_lib0clear(&___nl__im__118);
#line 406
goto label_20;
#line 406
label_29:
;
#line 406
c_rt_lib0move(&___nl__im__120, c_rt_lib0priv_as(___nl__im__91, ___get_global_const(257)));
#line 406
c_rt_lib0copy(&___nl__im__119, ___nl__im__120);
#line 407
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_const(1211)));
#line 407
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_const(1210)));
#line 407
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_const(564)));
#line 407
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__121, ___nl__im__122, ___nl__im__123, ___ref___rec__2));
#line 407
c_rt_lib0clear(&___nl__im__121);
#line 407
c_rt_lib0clear(&___nl__im__122);
#line 407
c_rt_lib0clear(&___nl__im__123);
#line 408
goto label_20;
#line 408
label_20:
;
#line 408
label_19:
;
#line 394
___nl__int__124 = 1;
#line 394
___nl__int__85 = ___nl__int__85 - ___nl__int__124;
#line 394
//clear ___nl__int__124;
#line 409
goto label_18;
#line 409
label_17:
;
#line 410
goto label_15;
#line 410
label_16:
;
#line 411
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 411
c_rt_lib0move(&___nl__im__125, translator_priv0dest_val(___nl__im__126, ___ref___rec__2));
#line 411
c_rt_lib0clear(&___nl__im__126);
#line 412
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 412
c_rt_lib0move(&___nl__im__129,___get_global_const(875));
#line 412
___nl__bool__127 = c_rt_lib0eq(___nl__im__128, ___nl__im__129);
#line 412
c_rt_lib0clear(&___nl__im__128);
#line 412
c_rt_lib0clear(&___nl__im__129);
#line 412
___nl__bool__127 = !___nl__bool__127;
#line 412
if(___nl__bool__127){ goto label_31;}
#line 413
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 413
c_rt_lib0move(&___nl__im__130, translator_priv0calc_val(___nl__im__131, ___ref___rec__2));
#line 413
c_rt_lib0clear(&___nl__im__131);
#line 414
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__im__1, ___nl__im__125, ___nl__im__130, ___ref___rec__2));
#line 415
goto label_30;
#line 415
label_31:
;
#line 415
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 415
c_rt_lib0move(&___nl__im__133,___get_global_const(876));
#line 415
___nl__bool__127 = c_rt_lib0eq(___nl__im__132, ___nl__im__133);
#line 415
c_rt_lib0clear(&___nl__im__132);
#line 415
c_rt_lib0clear(&___nl__im__133);
#line 415
___nl__bool__127 = !___nl__bool__127;
#line 415
if(___nl__bool__127){ goto label_32;}
#line 416
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 416
c_rt_lib0move(&___nl__im__134, translator_priv0calc_val(___nl__im__135, ___ref___rec__2));
#line 416
c_rt_lib0clear(&___nl__im__135);
#line 417
c_rt_lib0move(&___nl__im__137, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 417
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 417
___nl__bool__136 = nlasm0eq_reg_type(___nl__im__137, ___nl__im__138);
#line 417
c_rt_lib0clear(&___nl__im__137);
#line 417
c_rt_lib0clear(&___nl__im__138);
#line 417
___nl__bool__136 = !___nl__bool__136;
#line 418
c_rt_lib0copy(&___nl__im__139, ___nl__im__1);
#line 419
___nl__bool__140 = ___nl__bool__136;
#line 419
___nl__bool__140 = !___nl__bool__140;
#line 419
if(___nl__bool__140){ goto label_34;}
#line 419
c_rt_lib0move(&___nl__im__141, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 419
c_rt_lib0move(&___nl__im__139, translator_priv0new_register(___ref___rec__2, ___nl__im__141));
#line 419
c_rt_lib0clear(&___nl__im__141);
#line 419
goto label_33;
#line 419
label_34:
;
#line 419
label_33:
;
#line 419
//clear ___nl__bool__140;
#line 420
c_rt_lib0move(&___nl__im__142,___get_global_const(1218));
#line 420
c_rt_lib0move(&___nl__im__144, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__125));
#line 420
c_rt_lib0move(&___nl__im__145, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__134));
#line 420
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_mk(2, ___nl__im__144, ___nl__im__145));
#line 420
c_rt_lib0clear(&___nl__im__144);
#line 420
c_rt_lib0clear(&___nl__im__145);
#line 420
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__139, ___nl__im__142, ___nl__im__143, ___ref___rec__2));
#line 420
c_rt_lib0clear(&___nl__im__142);
#line 420
c_rt_lib0clear(&___nl__im__143);
#line 421
___nl__bool__146 = ___nl__bool__136;
#line 421
___nl__bool__146 = !___nl__bool__146;
#line 421
if(___nl__bool__146){ goto label_36;}
#line 421
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__139, ___ref___rec__2));
#line 421
goto label_35;
#line 421
label_36:
;
#line 421
label_35:
;
#line 421
//clear ___nl__bool__146;
#line 422
goto label_30;
#line 422
label_32:
;
#line 422
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 422
c_rt_lib0move(&___nl__im__148,___get_global_const(532));
#line 422
___nl__bool__127 = c_rt_lib0eq(___nl__im__147, ___nl__im__148);
#line 422
c_rt_lib0clear(&___nl__im__147);
#line 422
c_rt_lib0clear(&___nl__im__148);
#line 422
___nl__bool__127 = !___nl__bool__127;
#line 422
if(___nl__bool__127){ goto label_37;}
#line 423
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 423
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__151, ___get_global_const(219)));
#line 423
c_rt_lib0clear(&___nl__im__151);
#line 423
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 423
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__153, ___get_global_const(219)));
#line 423
c_rt_lib0clear(&___nl__im__153);
#line 423
c_rt_lib0move(&___nl__im__149, c_rt_lib0priv_as(___nl__im__152, ___get_global_const(881)));
#line 423
c_rt_lib0clear(&___nl__im__150);
#line 423
c_rt_lib0clear(&___nl__im__152);
#line 424
c_rt_lib0delete(translator_priv0print_get_value(___nl__im__1, ___nl__im__125, ___nl__im__149, ___ref___rec__2));
#line 425
goto label_30;
#line 425
label_37:
;
#line 425
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 425
c_rt_lib0move(&___nl__im__155,___get_global_const(877));
#line 425
___nl__bool__127 = c_rt_lib0eq(___nl__im__154, ___nl__im__155);
#line 425
c_rt_lib0clear(&___nl__im__154);
#line 425
c_rt_lib0clear(&___nl__im__155);
#line 425
___nl__bool__127 = !___nl__bool__127;
#line 425
if(___nl__bool__127){ goto label_38;}
#line 426
c_rt_lib0move(&___nl__im__157, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 426
c_rt_lib0move(&___nl__im__156, translator_priv0dest_val(___nl__im__157, ___ref___rec__2));
#line 426
c_rt_lib0clear(&___nl__im__157);
#line 427
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 427
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_const(219)));
#line 427
c_rt_lib0clear(&___nl__im__160);
#line 427
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 427
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_const(219)));
#line 427
c_rt_lib0clear(&___nl__im__162);
#line 427
c_rt_lib0move(&___nl__im__158, c_rt_lib0priv_as(___nl__im__161, ___get_global_const(881)));
#line 427
c_rt_lib0clear(&___nl__im__159);
#line 427
c_rt_lib0clear(&___nl__im__161);
#line 428
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 428
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__165, ___get_global_const(95)));
#line 428
c_rt_lib0clear(&___nl__im__165);
#line 428
___nl__int__163 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__164, ___nl__im__158);
#line 428
c_rt_lib0clear(&___nl__im__164);
#line 429
c_rt_lib0move(&___nl__im__166, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 430
c_rt_lib0copy(&___nl__im__167, ___nl__im__1);
#line 431
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 431
___nl__bool__168 = nlasm0eq_reg_type(___nl__im__169, ___nl__im__166);
#line 431
c_rt_lib0clear(&___nl__im__169);
#line 431
___nl__bool__168 = !___nl__bool__168;
#line 431
___nl__bool__168 = !___nl__bool__168;
#line 431
if(___nl__bool__168){ goto label_40;}
#line 432
c_rt_lib0move(&___nl__im__167, translator_priv0new_register(___ref___rec__2, ___nl__im__166));
#line 433
goto label_39;
#line 433
label_40:
;
#line 433
label_39:
;
#line 433
//clear ___nl__bool__168;
#line 434
c_rt_lib0move(&___nl__im__172, c_rt_lib0int_new(___nl__int__163));
#line 434
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__167, ___get_global_const(75), ___nl__im__156, ___get_global_const(95), ___nl__im__158, ___get_global_const(521), ___nl__im__172));
#line 434
c_rt_lib0clear(&___nl__im__172);
#line 434
c_rt_lib0move(&___nl__im__170, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__171));
#line 434
c_rt_lib0clear(&___nl__im__171);
#line 434
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__170));
#line 434
c_rt_lib0clear(&___nl__im__170);
#line 435
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 435
___nl__bool__173 = nlasm0eq_reg_type(___nl__im__174, ___nl__im__166);
#line 435
c_rt_lib0clear(&___nl__im__174);
#line 435
___nl__bool__173 = !___nl__bool__173;
#line 435
___nl__bool__173 = !___nl__bool__173;
#line 435
if(___nl__bool__173){ goto label_42;}
#line 436
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__167, ___ref___rec__2));
#line 437
goto label_41;
#line 437
label_42:
;
#line 437
label_41:
;
#line 437
//clear ___nl__bool__173;
#line 438
goto label_30;
#line 438
label_38:
;
#line 439
c_rt_lib0move(&___nl__im__175, c_rt_lib0array_mk(0));
#line 439
nl_die_arg(___nl__im__175);
#line 440
goto label_30;
#line 440
label_30:
;
#line 440
//clear ___nl__bool__127;
#line 440
c_rt_lib0clear(&___nl__im__130);
#line 440
c_rt_lib0clear(&___nl__im__134);
#line 440
//clear ___nl__bool__136;
#line 440
c_rt_lib0clear(&___nl__im__139);
#line 440
c_rt_lib0clear(&___nl__im__149);
#line 440
c_rt_lib0clear(&___nl__im__156);
#line 440
c_rt_lib0clear(&___nl__im__158);
#line 440
//clear ___nl__int__163;
#line 440
c_rt_lib0clear(&___nl__im__166);
#line 440
c_rt_lib0clear(&___nl__im__167);
#line 440
c_rt_lib0clear(&___nl__im__175);
#line 441
goto label_15;
#line 441
label_15:
;
#line 441
//clear ___nl__bool__68;
#line 441
c_rt_lib0clear(&___nl__im__74);
#line 441
//clear ___nl__int__85;
#line 441
//clear ___nl__bool__88;
#line 441
c_rt_lib0clear(&___nl__im__91);
#line 441
//clear ___nl__bool__92;
#line 441
c_rt_lib0clear(&___nl__im__93);
#line 441
c_rt_lib0clear(&___nl__im__94);
#line 441
c_rt_lib0clear(&___nl__im__95);
#line 441
c_rt_lib0clear(&___nl__im__96);
#line 441
c_rt_lib0clear(&___nl__im__97);
#line 441
c_rt_lib0clear(&___nl__im__98);
#line 441
c_rt_lib0clear(&___nl__im__99);
#line 441
c_rt_lib0clear(&___nl__im__100);
#line 441
c_rt_lib0clear(&___nl__im__101);
#line 441
c_rt_lib0clear(&___nl__im__102);
#line 441
c_rt_lib0clear(&___nl__im__103);
#line 441
c_rt_lib0clear(&___nl__im__104);
#line 441
c_rt_lib0clear(&___nl__im__105);
#line 441
c_rt_lib0clear(&___nl__im__109);
#line 441
c_rt_lib0clear(&___nl__im__110);
#line 441
c_rt_lib0clear(&___nl__im__114);
#line 441
c_rt_lib0clear(&___nl__im__115);
#line 441
c_rt_lib0clear(&___nl__im__119);
#line 441
c_rt_lib0clear(&___nl__im__120);
#line 441
c_rt_lib0clear(&___nl__im__125);
#line 442
goto label_1;
#line 442
label_11:
;
#line 442
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 442
c_rt_lib0move(&___nl__im__177,___get_global_const(979));
#line 442
___nl__bool__6 = c_rt_lib0eq(___nl__im__176, ___nl__im__177);
#line 442
c_rt_lib0clear(&___nl__im__176);
#line 442
c_rt_lib0clear(&___nl__im__177);
#line 442
___nl__bool__6 = !___nl__bool__6;
#line 442
if(___nl__bool__6){ goto label_43;}
#line 443
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 443
c_rt_lib0move(&___nl__im__178, translator_priv0dest_val(___nl__im__179, ___ref___rec__2));
#line 443
c_rt_lib0clear(&___nl__im__179);
#line 444
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 444
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__182, ___get_global_const(219)));
#line 444
c_rt_lib0clear(&___nl__im__182);
#line 444
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 444
c_rt_lib0move(&___nl__im__183, c_rt_lib0hash_get_value_dec(___nl__im__184, ___get_global_const(219)));
#line 444
c_rt_lib0clear(&___nl__im__184);
#line 444
c_rt_lib0move(&___nl__im__180, c_rt_lib0priv_as(___nl__im__183, ___get_global_const(881)));
#line 444
c_rt_lib0clear(&___nl__im__181);
#line 444
c_rt_lib0clear(&___nl__im__183);
#line 445
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 445
c_rt_lib0move(&___nl__im__186, c_rt_lib0hash_get_value_dec(___nl__im__187, ___get_global_const(95)));
#line 445
c_rt_lib0clear(&___nl__im__187);
#line 445
___nl__int__185 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__186, ___nl__im__180);
#line 445
c_rt_lib0clear(&___nl__im__186);
#line 446
c_rt_lib0move(&___nl__im__190, c_rt_lib0int_new(___nl__int__185));
#line 446
c_rt_lib0move(&___nl__im__189, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__178, ___get_global_const(95), ___nl__im__180, ___get_global_const(521), ___nl__im__190));
#line 446
c_rt_lib0clear(&___nl__im__190);
#line 446
c_rt_lib0move(&___nl__im__188, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__189));
#line 446
c_rt_lib0clear(&___nl__im__189);
#line 446
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__188));
#line 446
c_rt_lib0clear(&___nl__im__188);
#line 447
goto label_1;
#line 447
label_43:
;
#line 447
c_rt_lib0move(&___nl__im__195, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 447
c_rt_lib0move(&___nl__im__196,___get_global_const(890));
#line 447
___nl__bool__6 = c_rt_lib0eq(___nl__im__195, ___nl__im__196);
#line 447
c_rt_lib0clear(&___nl__im__195);
#line 447
c_rt_lib0clear(&___nl__im__196);
#line 447
if(___nl__bool__6){ goto label_48;}
#line 447
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 447
c_rt_lib0move(&___nl__im__198,___get_global_const(891));
#line 447
___nl__bool__6 = c_rt_lib0eq(___nl__im__197, ___nl__im__198);
#line 447
c_rt_lib0clear(&___nl__im__197);
#line 447
c_rt_lib0clear(&___nl__im__198);
#line 447
label_48:
;
#line 447
//clear ___nl__bool__194;
#line 447
if(___nl__bool__6){ goto label_47;}
#line 447
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 447
c_rt_lib0move(&___nl__im__200,___get_global_const(893));
#line 447
___nl__bool__6 = c_rt_lib0eq(___nl__im__199, ___nl__im__200);
#line 447
c_rt_lib0clear(&___nl__im__199);
#line 447
c_rt_lib0clear(&___nl__im__200);
#line 447
label_47:
;
#line 447
//clear ___nl__bool__193;
#line 447
if(___nl__bool__6){ goto label_46;}
#line 447
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 447
c_rt_lib0move(&___nl__im__202,___get_global_const(892));
#line 447
___nl__bool__6 = c_rt_lib0eq(___nl__im__201, ___nl__im__202);
#line 447
c_rt_lib0clear(&___nl__im__201);
#line 447
c_rt_lib0clear(&___nl__im__202);
#line 447
label_46:
;
#line 447
//clear ___nl__bool__192;
#line 447
if(___nl__bool__6){ goto label_45;}
#line 447
c_rt_lib0move(&___nl__im__203, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 447
c_rt_lib0move(&___nl__im__204,___get_global_const(894));
#line 447
___nl__bool__6 = c_rt_lib0eq(___nl__im__203, ___nl__im__204);
#line 447
c_rt_lib0clear(&___nl__im__203);
#line 447
c_rt_lib0clear(&___nl__im__204);
#line 447
label_45:
;
#line 447
//clear ___nl__bool__191;
#line 447
___nl__bool__6 = !___nl__bool__6;
#line 447
if(___nl__bool__6){ goto label_44;}
#line 448
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 448
c_rt_lib0move(&___nl__im__205, translator_priv0calc_val(___nl__im__206, ___ref___rec__2));
#line 448
c_rt_lib0clear(&___nl__im__206);
#line 449
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 449
___nl__bool__209 = true;
#line 449
c_rt_lib0move(&___nl__im__207, translator_priv0get_value_of_lvalue(___nl__im__208, ___nl__bool__209, ___ref___rec__2));
#line 449
c_rt_lib0clear(&___nl__im__208);
#line 449
//clear ___nl__bool__209;
#line 450
___nl__int__213 = c_rt_lib0array_len(___nl__im__207);
#line 450
___nl__int__214 = 1;
#line 450
___nl__int__212 = ___nl__int__213 - ___nl__int__214;
#line 450
//clear ___nl__int__213;
#line 450
//clear ___nl__int__214;
#line 450
c_rt_lib0move(&___nl__im__211, c_rt_lib0array_get(___nl__im__207, ___nl__int__212));
#line 450
//clear ___nl__int__212;
#line 450
___nl__int__217 = c_rt_lib0array_len(___nl__im__207);
#line 450
___nl__int__218 = 1;
#line 450
___nl__int__216 = ___nl__int__217 - ___nl__int__218;
#line 450
//clear ___nl__int__217;
#line 450
//clear ___nl__int__218;
#line 450
c_rt_lib0move(&___nl__im__215, c_rt_lib0array_get(___nl__im__207, ___nl__int__216));
#line 450
//clear ___nl__int__216;
#line 450
c_rt_lib0move(&___nl__im__210, c_rt_lib0priv_as(___nl__im__215, ___get_global_const(219)));
#line 450
c_rt_lib0clear(&___nl__im__211);
#line 450
c_rt_lib0clear(&___nl__im__215);
#line 451
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 451
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__210, ___nl__im__210, ___nl__im__205, ___nl__im__219, ___ref___rec__2));
#line 451
c_rt_lib0clear(&___nl__im__219);
#line 452
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__210, ___ref___rec__2));
#line 453
___nl__bool__220 = true;
#line 453
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__207, ___nl__bool__220, ___ref___rec__2));
#line 453
//clear ___nl__bool__220;
#line 454
goto label_1;
#line 454
label_44:
;
#line 454
c_rt_lib0move(&___nl__im__221, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 454
c_rt_lib0move(&___nl__im__222,___get_global_const(808));
#line 454
___nl__bool__6 = c_rt_lib0eq(___nl__im__221, ___nl__im__222);
#line 454
c_rt_lib0clear(&___nl__im__221);
#line 454
c_rt_lib0clear(&___nl__im__222);
#line 454
___nl__bool__6 = !___nl__bool__6;
#line 454
if(___nl__bool__6){ goto label_49;}
#line 455
___nl__int__223 = translator_priv0get_sim_label(___ref___rec__2);
#line 456
c_rt_lib0move(&___nl__im__225, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 456
c_rt_lib0move(&___nl__im__224, translator_priv0new_register(___ref___rec__2, ___nl__im__225));
#line 456
c_rt_lib0clear(&___nl__im__225);
#line 457
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 457
c_rt_lib0move(&___nl__im__226, translator_priv0def_val(___nl__im__227, ___nl__im__1, ___nl__im__224, ___ref___rec__2));
#line 457
c_rt_lib0clear(&___nl__im__227);
#line 458
c_rt_lib0move(&___nl__im__230,___get_global_const(337));
#line 458
c_rt_lib0move(&___nl__im__229, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__224, ___get_global_const(75), ___nl__im__226, ___get_global_const(514), ___nl__im__230));
#line 458
c_rt_lib0clear(&___nl__im__230);
#line 458
c_rt_lib0move(&___nl__im__228, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__229));
#line 458
c_rt_lib0clear(&___nl__im__229);
#line 458
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__228));
#line 458
c_rt_lib0clear(&___nl__im__228);
#line 459
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__223, ___nl__im__224, ___ref___rec__2));
#line 460
c_rt_lib0move(&___nl__im__231, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 460
c_rt_lib0delete(translator_priv0def_val(___nl__im__231, ___nl__im__1, ___nl__im__224, ___ref___rec__2));
#line 460
c_rt_lib0clear(&___nl__im__231);
#line 461
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__223, ___ref___rec__2));
#line 462
goto label_1;
#line 462
label_49:
;
#line 462
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 462
c_rt_lib0move(&___nl__im__233,___get_global_const(809));
#line 462
___nl__bool__6 = c_rt_lib0eq(___nl__im__232, ___nl__im__233);
#line 462
c_rt_lib0clear(&___nl__im__232);
#line 462
c_rt_lib0clear(&___nl__im__233);
#line 462
___nl__bool__6 = !___nl__bool__6;
#line 462
if(___nl__bool__6){ goto label_50;}
#line 463
___nl__int__234 = translator_priv0get_sim_label(___ref___rec__2);
#line 464
c_rt_lib0move(&___nl__im__236, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 464
c_rt_lib0move(&___nl__im__235, translator_priv0new_register(___ref___rec__2, ___nl__im__236));
#line 464
c_rt_lib0clear(&___nl__im__236);
#line 465
c_rt_lib0move(&___nl__im__238, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 465
c_rt_lib0move(&___nl__im__237, translator_priv0def_val(___nl__im__238, ___nl__im__1, ___nl__im__235, ___ref___rec__2));
#line 465
c_rt_lib0clear(&___nl__im__238);
#line 466
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__234, ___nl__im__237, ___ref___rec__2));
#line 467
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 467
c_rt_lib0delete(translator_priv0def_val(___nl__im__239, ___nl__im__1, ___nl__im__235, ___ref___rec__2));
#line 467
c_rt_lib0clear(&___nl__im__239);
#line 468
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__234, ___ref___rec__2));
#line 469
goto label_1;
#line 469
label_50:
;
#line 470
c_rt_lib0move(&___nl__im__241, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 470
c_rt_lib0move(&___nl__im__240, translator_priv0calc_val(___nl__im__241, ___ref___rec__2));
#line 470
c_rt_lib0clear(&___nl__im__241);
#line 471
c_rt_lib0move(&___nl__im__243, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 471
c_rt_lib0move(&___nl__im__242, translator_priv0calc_val(___nl__im__243, ___ref___rec__2));
#line 471
c_rt_lib0clear(&___nl__im__243);
#line 472
c_rt_lib0move(&___nl__im__244, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(514)));
#line 472
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__1, ___nl__im__240, ___nl__im__242, ___nl__im__244, ___ref___rec__2));
#line 472
c_rt_lib0clear(&___nl__im__244);
#line 473
goto label_1;
#line 473
label_1:
;
#line 473
//clear ___nl__bool__6;
#line 473
c_rt_lib0clear(&___nl__im__9);
#line 473
c_rt_lib0clear(&___nl__im__12);
#line 473
c_rt_lib0clear(&___nl__im__42);
#line 473
c_rt_lib0clear(&___nl__im__45);
#line 473
c_rt_lib0clear(&___nl__im__54);
#line 473
c_rt_lib0clear(&___nl__im__178);
#line 473
c_rt_lib0clear(&___nl__im__180);
#line 473
//clear ___nl__int__185;
#line 473
c_rt_lib0clear(&___nl__im__205);
#line 473
c_rt_lib0clear(&___nl__im__207);
#line 473
c_rt_lib0clear(&___nl__im__210);
#line 473
//clear ___nl__int__223;
#line 473
c_rt_lib0clear(&___nl__im__224);
#line 473
c_rt_lib0clear(&___nl__im__226);
#line 473
//clear ___nl__int__234;
#line 473
c_rt_lib0clear(&___nl__im__235);
#line 473
c_rt_lib0clear(&___nl__im__237);
#line 473
c_rt_lib0clear(&___nl__im__240);
#line 473
c_rt_lib0clear(&___nl__im__242);
#line 473
c_rt_lib0clear(&___nl__im__0);
#line 473
c_rt_lib0clear(&___nl__im__1);
#line 473
c_rt_lib0clear(&___nl__im__3);
#line 473
return NULL;
}

ImmT  translator_priv0print_cmd_array(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
#line 477
___nl__int__3 = 0;
#line 477
___nl__int__4 = 1;
#line 477
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 477
label_3:
;
#line 477
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 477
___nl__bool__6 = ___nl__int__7;
#line 477
if(___nl__bool__6){ goto label_1;}
#line 477
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 477
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 478
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__2, ___ref___rec__1));
#line 478
c_rt_lib0clear(&___nl__im__2);
#line 478
label_2:
;
#line 479
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 479
goto label_3;
#line 479
label_1:
;
#line 479
c_rt_lib0clear(&___nl__im__0);
#line 479
c_rt_lib0clear(&___nl__im__2);
#line 479
//clear ___nl__int__3;
#line 479
//clear ___nl__int__4;
#line 479
//clear ___nl__int__5;
#line 479
//clear ___nl__bool__6;
#line 479
//clear ___nl__int__7;
#line 479
c_rt_lib0clear(&___nl__im__8);
#line 479
return NULL;
}

ImmT  translator_priv0print_try_ensure(nast0try_ensure_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
bool  ___nl__bool__3 = false;
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
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
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
INT  ___nl__int__66 = 0;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
#line 483
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(688));
#line 483
if(___nl__bool__3){ goto label_2;}
#line 485
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(873));
#line 485
if(___nl__bool__3){ goto label_3;}
#line 486
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(874));
#line 486
if(___nl__bool__3){ goto label_4;}
#line 486
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 486
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 486
nl_die_arg(___nl__im__4);
#line 483
label_2:
;
#line 483
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(688)));
#line 483
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 484
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(168)));
#line 484
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(95)));
#line 484
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 484
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 484
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(168), ___nl__im__8, ___get_global_const(95), ___nl__im__9, ___get_global_const(454), ___nl__im__10, ___get_global_const(219), ___nl__im__11));
#line 484
c_rt_lib0clear(&___nl__im__8);
#line 484
c_rt_lib0clear(&___nl__im__9);
#line 484
c_rt_lib0clear(&___nl__im__10);
#line 484
c_rt_lib0clear(&___nl__im__11);
#line 484
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 484
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__7, ___ref___rec__2, ___nl__im__12));
#line 484
c_rt_lib0clear(&___nl__im__7);
#line 484
c_rt_lib0clear(&___nl__im__12);
#line 485
goto label_1;
#line 485
label_3:
;
#line 485
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(873)));
#line 485
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 486
goto label_1;
#line 486
label_4:
;
#line 486
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(874)));
#line 486
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 487
goto label_1;
#line 487
label_1:
;
#line 488
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 488
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__2, ___nl__im__18));
#line 488
c_rt_lib0clear(&___nl__im__18);
#line 490
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(688));
#line 490
if(___nl__bool__20){ goto label_6;}
#line 496
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(873));
#line 496
if(___nl__bool__20){ goto label_7;}
#line 498
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(874));
#line 498
if(___nl__bool__20){ goto label_8;}
#line 498
c_rt_lib0move(&___nl__im__21,___get_global_const(16));
#line 498
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__0));
#line 498
nl_die_arg(___nl__im__21);
#line 490
label_6:
;
#line 490
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(688)));
#line 490
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 491
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(219)));
#line 491
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(219));
#line 491
if(___nl__bool__25){ goto label_10;}
#line 493
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(73));
#line 493
if(___nl__bool__25){ goto label_11;}
#line 493
c_rt_lib0move(&___nl__im__26,___get_global_const(16));
#line 493
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 493
nl_die_arg(___nl__im__26);
#line 491
label_10:
;
#line 491
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(219)));
#line 491
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 492
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__27, ___ref___rec__2));
#line 493
goto label_9;
#line 493
label_11:
;
#line 494
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 494
nl_die_arg(___nl__im__29);
#line 495
goto label_9;
#line 495
label_9:
;
#line 496
goto label_5;
#line 496
label_7:
;
#line 496
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(873)));
#line 496
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 497
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(275)));
#line 497
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__32, ___ref___rec__2));
#line 497
c_rt_lib0clear(&___nl__im__32);
#line 498
goto label_5;
#line 498
label_8:
;
#line 498
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(874)));
#line 498
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 499
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__33, ___ref___rec__2));
#line 500
goto label_5;
#line 500
label_5:
;
#line 501
___nl__int__35 = translator_priv0get_sim_label(___ref___rec__2);
#line 502
c_rt_lib0move(&___nl__im__38,___get_global_const(80));
#line 502
c_rt_lib0move(&___nl__im__39,___get_global_const(41));
#line 502
c_rt_lib0move(&___nl__im__39, c_rt_lib0unary_minus(___nl__im__39));
#line 502
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__17, ___get_global_const(75), ___nl__im__19, ___get_global_const(95), ___nl__im__38, ___get_global_const(521), ___nl__im__39));
#line 502
c_rt_lib0clear(&___nl__im__38);
#line 502
c_rt_lib0clear(&___nl__im__39);
#line 502
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__37));
#line 502
c_rt_lib0clear(&___nl__im__37);
#line 502
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 502
c_rt_lib0clear(&___nl__im__36);
#line 503
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__35, ___nl__im__17, ___ref___rec__2));
#line 504
___nl__bool__40 = ___nl__bool__1;
#line 504
___nl__bool__40 = !___nl__bool__40;
#line 504
if(___nl__bool__40){ goto label_13;}
#line 505
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__19));
#line 505
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__41, ___ref___rec__2));
#line 505
c_rt_lib0clear(&___nl__im__41);
#line 506
goto label_12;
#line 506
label_13:
;
#line 507
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__19));
#line 507
c_rt_lib0move(&___nl__im__45,___get_global_const(178));
#line 507
c_rt_lib0move(&___nl__im__46,___get_global_const(41));
#line 507
c_rt_lib0move(&___nl__im__46, c_rt_lib0unary_minus(___nl__im__46));
#line 507
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 507
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__19, ___get_global_const(75), ___nl__im__44, ___get_global_const(534), ___nl__im__45, ___get_global_const(521), ___nl__im__46, ___get_global_const(539), ___nl__im__47));
#line 507
c_rt_lib0clear(&___nl__im__44);
#line 507
c_rt_lib0clear(&___nl__im__45);
#line 507
c_rt_lib0clear(&___nl__im__46);
#line 507
c_rt_lib0clear(&___nl__im__47);
#line 507
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__43));
#line 507
c_rt_lib0clear(&___nl__im__43);
#line 507
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__42));
#line 507
c_rt_lib0clear(&___nl__im__42);
#line 508
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__19));
#line 508
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__48));
#line 508
c_rt_lib0clear(&___nl__im__48);
#line 509
goto label_12;
#line 509
label_12:
;
#line 509
//clear ___nl__bool__40;
#line 510
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__35, ___ref___rec__2));
#line 511
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(688));
#line 511
if(___nl__bool__49){ goto label_15;}
#line 513
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(873));
#line 513
if(___nl__bool__49){ goto label_16;}
#line 518
___nl__bool__49 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(874));
#line 518
if(___nl__bool__49){ goto label_17;}
#line 518
c_rt_lib0move(&___nl__im__50,___get_global_const(16));
#line 518
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(2, ___nl__im__50, ___nl__im__0));
#line 518
nl_die_arg(___nl__im__50);
#line 511
label_15:
;
#line 511
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(688)));
#line 511
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 512
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(168)));
#line 512
c_rt_lib0move(&___nl__im__55, translator_priv0get_var_register(___nl__im__56, ___ref___rec__2));
#line 512
c_rt_lib0clear(&___nl__im__56);
#line 512
c_rt_lib0move(&___nl__im__57,___get_global_const(80));
#line 512
c_rt_lib0move(&___nl__im__58,___get_global_const(41));
#line 512
c_rt_lib0move(&___nl__im__58, c_rt_lib0unary_minus(___nl__im__58));
#line 512
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__55, ___get_global_const(75), ___nl__im__19, ___get_global_const(95), ___nl__im__57, ___get_global_const(521), ___nl__im__58));
#line 512
c_rt_lib0clear(&___nl__im__55);
#line 512
c_rt_lib0clear(&___nl__im__57);
#line 512
c_rt_lib0clear(&___nl__im__58);
#line 512
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__54));
#line 512
c_rt_lib0clear(&___nl__im__54);
#line 512
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__53));
#line 512
c_rt_lib0clear(&___nl__im__53);
#line 513
goto label_14;
#line 513
label_16:
;
#line 513
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(873)));
#line 513
c_rt_lib0copy(&___nl__im__59, ___nl__im__60);
#line 514
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_const(274)));
#line 514
___nl__bool__63 = false;
#line 514
c_rt_lib0move(&___nl__im__61, translator_priv0get_value_of_lvalue(___nl__im__62, ___nl__bool__63, ___ref___rec__2));
#line 514
c_rt_lib0clear(&___nl__im__62);
#line 514
//clear ___nl__bool__63;
#line 515
___nl__int__67 = c_rt_lib0array_len(___nl__im__61);
#line 515
___nl__int__68 = 1;
#line 515
___nl__int__66 = ___nl__int__67 - ___nl__int__68;
#line 515
//clear ___nl__int__67;
#line 515
//clear ___nl__int__68;
#line 515
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_get(___nl__im__61, ___nl__int__66));
#line 515
//clear ___nl__int__66;
#line 515
___nl__int__71 = c_rt_lib0array_len(___nl__im__61);
#line 515
___nl__int__72 = 1;
#line 515
___nl__int__70 = ___nl__int__71 - ___nl__int__72;
#line 515
//clear ___nl__int__71;
#line 515
//clear ___nl__int__72;
#line 515
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__61, ___nl__int__70));
#line 515
//clear ___nl__int__70;
#line 515
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__69, ___get_global_const(219)));
#line 515
c_rt_lib0clear(&___nl__im__65);
#line 515
c_rt_lib0clear(&___nl__im__69);
#line 516
c_rt_lib0move(&___nl__im__75,___get_global_const(80));
#line 516
c_rt_lib0move(&___nl__im__76,___get_global_const(41));
#line 516
c_rt_lib0move(&___nl__im__76, c_rt_lib0unary_minus(___nl__im__76));
#line 516
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__64, ___get_global_const(75), ___nl__im__19, ___get_global_const(95), ___nl__im__75, ___get_global_const(521), ___nl__im__76));
#line 516
c_rt_lib0clear(&___nl__im__75);
#line 516
c_rt_lib0clear(&___nl__im__76);
#line 516
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__74));
#line 516
c_rt_lib0clear(&___nl__im__74);
#line 516
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__73));
#line 516
c_rt_lib0clear(&___nl__im__73);
#line 517
___nl__bool__77 = false;
#line 517
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__61, ___nl__bool__77, ___ref___rec__2));
#line 517
//clear ___nl__bool__77;
#line 518
goto label_14;
#line 518
label_17:
;
#line 518
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(874)));
#line 518
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 519
goto label_14;
#line 519
label_14:
;
#line 519
c_rt_lib0clear(&___nl__im__0);
#line 519
//clear ___nl__bool__1;
#line 519
//clear ___nl__bool__3;
#line 519
c_rt_lib0clear(&___nl__im__4);
#line 519
c_rt_lib0clear(&___nl__im__5);
#line 519
c_rt_lib0clear(&___nl__im__6);
#line 519
c_rt_lib0clear(&___nl__im__13);
#line 519
c_rt_lib0clear(&___nl__im__14);
#line 519
c_rt_lib0clear(&___nl__im__15);
#line 519
c_rt_lib0clear(&___nl__im__16);
#line 519
c_rt_lib0clear(&___nl__im__17);
#line 519
c_rt_lib0clear(&___nl__im__19);
#line 519
//clear ___nl__bool__20;
#line 519
c_rt_lib0clear(&___nl__im__21);
#line 519
c_rt_lib0clear(&___nl__im__22);
#line 519
c_rt_lib0clear(&___nl__im__23);
#line 519
c_rt_lib0clear(&___nl__im__24);
#line 519
//clear ___nl__bool__25;
#line 519
c_rt_lib0clear(&___nl__im__26);
#line 519
c_rt_lib0clear(&___nl__im__27);
#line 519
c_rt_lib0clear(&___nl__im__28);
#line 519
c_rt_lib0clear(&___nl__im__29);
#line 519
c_rt_lib0clear(&___nl__im__30);
#line 519
c_rt_lib0clear(&___nl__im__31);
#line 519
c_rt_lib0clear(&___nl__im__33);
#line 519
c_rt_lib0clear(&___nl__im__34);
#line 519
//clear ___nl__int__35;
#line 519
//clear ___nl__bool__49;
#line 519
c_rt_lib0clear(&___nl__im__50);
#line 519
c_rt_lib0clear(&___nl__im__51);
#line 519
c_rt_lib0clear(&___nl__im__52);
#line 519
c_rt_lib0clear(&___nl__im__59);
#line 519
c_rt_lib0clear(&___nl__im__60);
#line 519
c_rt_lib0clear(&___nl__im__61);
#line 519
c_rt_lib0clear(&___nl__im__64);
#line 519
c_rt_lib0clear(&___nl__im__78);
#line 519
c_rt_lib0clear(&___nl__im__79);
#line 519
return NULL;
}

ImmT  translator_priv0start_new_instruction(nast0debug_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT * ___nl__im_ptr__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__string__9 = NULL;
#line 523
___nl__im_ptr__2 = &((*___ref___rec__1).debug0field);
#line 523
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 523
c_rt_lib0hash_set_value_dec(___nl__im_ptr__2, ___get_global_const(505), ___nl__im__3);
#line 523
___nl__im_ptr__2 = NULL;
#line 523
c_rt_lib0clear(&___nl__im__3);
#line 524
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 524
c_rt_lib0move(&___nl__im__5,___get_global_const(709));
#line 524
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___nl__im_ptr__4), ___nl__im__5));
#line 524
___nl__int__6 = 1;
#line 524
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 524
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 524
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 524
c_rt_lib0move(&___nl__string__9,___get_global_const(709));
#line 524
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__4, ___nl__string__9, ___nl__im__5));
#line 524
___nl__im_ptr__4 = NULL;
#line 524
c_rt_lib0clear(&___nl__im__5);
#line 524
//clear ___nl__int__6;
#line 524
//clear ___nl__int__7;
#line 524
//clear ___nl__int__8;
#line 524
c_rt_lib0clear(&___nl__string__9);
#line 524
c_rt_lib0clear(&___nl__im__0);
#line 524
return NULL;
}

ImmT  translator_priv0print_cmd(nast0cmd_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
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
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT * ___nl__im_ptr__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT * ___nl__im_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
#line 528
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 528
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__2, ___ref___rec__1));
#line 528
c_rt_lib0clear(&___nl__im__2);
#line 529
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 529
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(846));
#line 529
if(___nl__bool__4){ goto label_2;}
#line 531
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(848));
#line 531
if(___nl__bool__4){ goto label_3;}
#line 533
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(160));
#line 533
if(___nl__bool__4){ goto label_4;}
#line 535
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(850));
#line 535
if(___nl__bool__4){ goto label_5;}
#line 537
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(849));
#line 537
if(___nl__bool__4){ goto label_6;}
#line 539
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(851));
#line 539
if(___nl__bool__4){ goto label_7;}
#line 541
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(847));
#line 541
if(___nl__bool__4){ goto label_8;}
#line 543
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(859));
#line 543
if(___nl__bool__4){ goto label_9;}
#line 544
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(219));
#line 544
if(___nl__bool__4){ goto label_10;}
#line 546
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(857));
#line 546
if(___nl__bool__4){ goto label_11;}
#line 548
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(246));
#line 548
if(___nl__bool__4){ goto label_12;}
#line 550
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(856));
#line 550
if(___nl__bool__4){ goto label_13;}
#line 552
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(858));
#line 552
if(___nl__bool__4){ goto label_14;}
#line 554
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(178));
#line 554
if(___nl__bool__4){ goto label_15;}
#line 556
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(854));
#line 556
if(___nl__bool__4){ goto label_16;}
#line 558
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(855));
#line 558
if(___nl__bool__4){ goto label_17;}
#line 560
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(247));
#line 560
if(___nl__bool__4){ goto label_18;}
#line 562
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(252));
#line 562
if(___nl__bool__4){ goto label_19;}
#line 564
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(852));
#line 564
if(___nl__bool__4){ goto label_20;}
#line 566
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(853));
#line 566
if(___nl__bool__4){ goto label_21;}
#line 566
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 566
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 566
nl_die_arg(___nl__im__5);
#line 529
label_2:
;
#line 529
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(846)));
#line 529
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 530
___nl__bool__8 = false;
#line 530
c_rt_lib0delete(translator_priv0print_if(___nl__im__6, ___nl__bool__8, ___ref___rec__1));
#line 530
//clear ___nl__bool__8;
#line 531
goto label_1;
#line 531
label_3:
;
#line 531
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(848)));
#line 531
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 532
c_rt_lib0delete(translator_priv0print_fora(___nl__im__9, ___ref___rec__1));
#line 533
goto label_1;
#line 533
label_4:
;
#line 533
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(160)));
#line 533
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 534
c_rt_lib0delete(translator_priv0print_loop(___nl__im__11, ___ref___rec__1));
#line 535
goto label_1;
#line 535
label_5:
;
#line 535
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(850)));
#line 535
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 536
c_rt_lib0delete(translator_priv0print_rep(___nl__im__13, ___ref___rec__1));
#line 537
goto label_1;
#line 537
label_6:
;
#line 537
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(849)));
#line 537
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 538
c_rt_lib0delete(translator_priv0print_forh(___nl__im__15, ___ref___rec__1));
#line 539
goto label_1;
#line 539
label_7:
;
#line 539
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(851)));
#line 539
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 540
c_rt_lib0delete(translator_priv0print_while(___nl__im__17, ___ref___rec__1));
#line 541
goto label_1;
#line 541
label_8:
;
#line 541
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(847)));
#line 541
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 542
c_rt_lib0delete(translator_priv0print_for(___nl__im__19, ___ref___rec__1));
#line 543
goto label_1;
#line 543
label_9:
;
#line 544
goto label_1;
#line 544
label_10:
;
#line 544
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(219)));
#line 544
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 545
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 545
c_rt_lib0move(&___nl__im__25,___get_global_const(41));
#line 545
c_rt_lib0move(&___nl__im__25, c_rt_lib0unary_minus(___nl__im__25));
#line 545
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 545
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__24, ___get_global_const(218), ___nl__im__25, ___get_global_const(330), ___nl__im__26));
#line 545
c_rt_lib0clear(&___nl__im__24);
#line 545
c_rt_lib0clear(&___nl__im__25);
#line 545
c_rt_lib0clear(&___nl__im__26);
#line 545
c_rt_lib0delete(translator_priv0print_val(___nl__im__21, ___nl__im__23, ___ref___rec__1));
#line 545
c_rt_lib0clear(&___nl__im__23);
#line 546
goto label_1;
#line 546
label_11:
;
#line 546
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(857)));
#line 546
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 547
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__im__27, ___ref___rec__1));
#line 548
goto label_1;
#line 548
label_12:
;
#line 548
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(246)));
#line 548
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 549
c_rt_lib0delete(translator_priv0print_return(___nl__im__29, ___ref___rec__1));
#line 550
goto label_1;
#line 550
label_13:
;
#line 550
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(856)));
#line 550
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 551
c_rt_lib0delete(translator_priv0print_match(___nl__im__31, ___ref___rec__1));
#line 552
goto label_1;
#line 552
label_14:
;
#line 552
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(858)));
#line 552
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 553
___nl__bool__35 = true;
#line 553
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__33, ___nl__bool__35, ___ref___rec__1));
#line 553
//clear ___nl__bool__35;
#line 554
goto label_1;
#line 554
label_15:
;
#line 554
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(178)));
#line 554
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 555
___nl__bool__38 = false;
#line 555
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__36, ___nl__bool__38, ___ref___rec__1));
#line 555
//clear ___nl__bool__38;
#line 556
goto label_1;
#line 556
label_16:
;
#line 557
___nl__im_ptr__41 = &((*___ref___rec__1).loop_label0field);
#line 557
c_rt_lib0copy(&___nl__im__40, (*___nl__im_ptr__41));
#line 557
___nl__im_ptr__41 = NULL;
#line 557
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(854)));
#line 557
c_rt_lib0clear(&___nl__im__40);
#line 557
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__39));
#line 557
c_rt_lib0clear(&___nl__im__39);
#line 558
goto label_1;
#line 558
label_17:
;
#line 559
___nl__im_ptr__44 = &((*___ref___rec__1).loop_label0field);
#line 559
c_rt_lib0copy(&___nl__im__43, (*___nl__im_ptr__44));
#line 559
___nl__im_ptr__44 = NULL;
#line 559
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(855)));
#line 559
c_rt_lib0clear(&___nl__im__43);
#line 559
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__42));
#line 559
c_rt_lib0clear(&___nl__im__42);
#line 560
goto label_1;
#line 560
label_18:
;
#line 560
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(247)));
#line 560
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 561
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 561
c_rt_lib0delete(translator_priv0print_die(___nl__im__45, ___nl__im__47, ___ref___rec__1));
#line 561
c_rt_lib0clear(&___nl__im__47);
#line 562
goto label_1;
#line 562
label_19:
;
#line 562
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(252)));
#line 562
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 563
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 563
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__48, ___ref___rec__1, ___nl__im__50));
#line 563
c_rt_lib0clear(&___nl__im__50);
#line 564
goto label_1;
#line 564
label_20:
;
#line 564
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(852)));
#line 564
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 565
c_rt_lib0delete(translator_priv0print_if_mod(___nl__im__51, ___ref___rec__1));
#line 566
goto label_1;
#line 566
label_21:
;
#line 566
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(853)));
#line 566
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 567
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__im__53, ___ref___rec__1));
#line 568
goto label_1;
#line 568
label_1:
;
#line 568
c_rt_lib0clear(&___nl__im__0);
#line 568
c_rt_lib0clear(&___nl__im__3);
#line 568
//clear ___nl__bool__4;
#line 568
c_rt_lib0clear(&___nl__im__5);
#line 568
c_rt_lib0clear(&___nl__im__6);
#line 568
c_rt_lib0clear(&___nl__im__7);
#line 568
c_rt_lib0clear(&___nl__im__9);
#line 568
c_rt_lib0clear(&___nl__im__10);
#line 568
c_rt_lib0clear(&___nl__im__11);
#line 568
c_rt_lib0clear(&___nl__im__12);
#line 568
c_rt_lib0clear(&___nl__im__13);
#line 568
c_rt_lib0clear(&___nl__im__14);
#line 568
c_rt_lib0clear(&___nl__im__15);
#line 568
c_rt_lib0clear(&___nl__im__16);
#line 568
c_rt_lib0clear(&___nl__im__17);
#line 568
c_rt_lib0clear(&___nl__im__18);
#line 568
c_rt_lib0clear(&___nl__im__19);
#line 568
c_rt_lib0clear(&___nl__im__20);
#line 568
c_rt_lib0clear(&___nl__im__21);
#line 568
c_rt_lib0clear(&___nl__im__22);
#line 568
c_rt_lib0clear(&___nl__im__27);
#line 568
c_rt_lib0clear(&___nl__im__28);
#line 568
c_rt_lib0clear(&___nl__im__29);
#line 568
c_rt_lib0clear(&___nl__im__30);
#line 568
c_rt_lib0clear(&___nl__im__31);
#line 568
c_rt_lib0clear(&___nl__im__32);
#line 568
c_rt_lib0clear(&___nl__im__33);
#line 568
c_rt_lib0clear(&___nl__im__34);
#line 568
c_rt_lib0clear(&___nl__im__36);
#line 568
c_rt_lib0clear(&___nl__im__37);
#line 568
c_rt_lib0clear(&___nl__im__45);
#line 568
c_rt_lib0clear(&___nl__im__46);
#line 568
c_rt_lib0clear(&___nl__im__48);
#line 568
c_rt_lib0clear(&___nl__im__49);
#line 568
c_rt_lib0clear(&___nl__im__51);
#line 568
c_rt_lib0clear(&___nl__im__52);
#line 568
c_rt_lib0clear(&___nl__im__53);
#line 568
c_rt_lib0clear(&___nl__im__54);
#line 568
return NULL;
}

ImmT  translator_priv0print_loop_break(translator0state_t0type* ___ref___rec__0,translator0loop0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 575
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(534)));
#line 575
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 575
c_rt_lib0clear(&___nl__im__4);
#line 575
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 575
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__5));
#line 575
//clear ___nl__int__3;
#line 575
c_rt_lib0clear(&___nl__im__5);
#line 575
c_rt_lib0delete(translator_priv0print(___ref___rec__0, ___nl__im__2));
#line 575
c_rt_lib0clear(&___nl__im__2);
#line 575
c_rt_lib0clear(&___nl__im__1);
#line 575
return NULL;
}

ImmT  translator_priv0print_if_mod(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
#line 580
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 581
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 582
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 583
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 583
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(221)));
#line 583
c_rt_lib0clear(&___nl__im__8);
#line 583
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(859)));
#line 583
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__7, ___get_global_const(227), ___nl__im__9));
#line 583
c_rt_lib0clear(&___nl__im__7);
#line 583
c_rt_lib0clear(&___nl__im__9);
#line 583
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(860), ___nl__im__3, ___get_global_const(846), ___nl__im__4, ___get_global_const(861), ___nl__im__5, ___get_global_const(862), ___nl__im__6));
#line 583
c_rt_lib0clear(&___nl__im__3);
#line 583
c_rt_lib0clear(&___nl__im__4);
#line 583
c_rt_lib0clear(&___nl__im__5);
#line 583
c_rt_lib0clear(&___nl__im__6);
#line 585
___nl__bool__10 = true;
#line 585
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__10, ___ref___rec__1));
#line 585
//clear ___nl__bool__10;
#line 585
c_rt_lib0clear(&___nl__im__0);
#line 585
c_rt_lib0clear(&___nl__im__2);
#line 585
return NULL;
}

ImmT  translator_priv0print_unless_mod(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
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
bool  ___nl__bool__22 = false;
#line 592
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 592
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(221)));
#line 592
c_rt_lib0clear(&___nl__im__5);
#line 595
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 595
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(221)));
#line 595
c_rt_lib0clear(&___nl__im__10);
#line 596
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 596
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(878), ___nl__im__12));
#line 596
c_rt_lib0clear(&___nl__im__12);
#line 597
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 597
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__9, ___get_global_const(219), ___nl__im__11, ___get_global_const(95), ___nl__im__13));
#line 597
c_rt_lib0clear(&___nl__im__9);
#line 597
c_rt_lib0clear(&___nl__im__11);
#line 597
c_rt_lib0clear(&___nl__im__13);
#line 599
c_rt_lib0move(&___nl__im__14,___get_global_const(337));
#line 599
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__8, ___get_global_const(514), ___nl__im__14));
#line 599
c_rt_lib0clear(&___nl__im__8);
#line 599
c_rt_lib0clear(&___nl__im__14);
#line 599
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(882), ___nl__im__7));
#line 599
c_rt_lib0clear(&___nl__im__7);
#line 601
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 601
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__4, ___get_global_const(219), ___nl__im__6, ___get_global_const(95), ___nl__im__15));
#line 601
c_rt_lib0clear(&___nl__im__4);
#line 601
c_rt_lib0clear(&___nl__im__6);
#line 601
c_rt_lib0clear(&___nl__im__15);
#line 603
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 604
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 605
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 605
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(221)));
#line 605
c_rt_lib0clear(&___nl__im__20);
#line 605
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(859)));
#line 605
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__19, ___get_global_const(227), ___nl__im__21));
#line 605
c_rt_lib0clear(&___nl__im__19);
#line 605
c_rt_lib0clear(&___nl__im__21);
#line 605
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(860), ___nl__im__3, ___get_global_const(846), ___nl__im__16, ___get_global_const(861), ___nl__im__17, ___get_global_const(862), ___nl__im__18));
#line 605
c_rt_lib0clear(&___nl__im__3);
#line 605
c_rt_lib0clear(&___nl__im__16);
#line 605
c_rt_lib0clear(&___nl__im__17);
#line 605
c_rt_lib0clear(&___nl__im__18);
#line 607
___nl__bool__22 = true;
#line 607
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__22, ___ref___rec__1));
#line 607
//clear ___nl__bool__22;
#line 607
c_rt_lib0clear(&___nl__im__0);
#line 607
c_rt_lib0clear(&___nl__im__2);
#line 607
return NULL;
}

ImmT  translator_priv0print_if(nast0if_t0type ___nl__im__0,bool ___nl__bool__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
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
ImmT  ___nl__im__27 = NULL;
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
bool  ___nl__bool__38 = false;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
#line 611
c_rt_lib0move(&___nl__im__3, translator_priv0save_registers(___ref___rec__2));
#line 612
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__2);
#line 613
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 614
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 614
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__2, ___nl__im__7));
#line 614
c_rt_lib0clear(&___nl__im__7);
#line 615
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 615
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__6, ___ref___rec__2));
#line 615
c_rt_lib0clear(&___nl__im__8);
#line 616
c_rt_lib0move(&___nl__im__11,___get_global_const(337));
#line 616
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__6, ___get_global_const(75), ___nl__im__6, ___get_global_const(514), ___nl__im__11));
#line 616
c_rt_lib0clear(&___nl__im__11);
#line 616
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__10));
#line 616
c_rt_lib0clear(&___nl__im__10);
#line 616
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 616
c_rt_lib0clear(&___nl__im__9);
#line 617
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 618
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(846)));
#line 618
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__12, ___ref___rec__2));
#line 618
c_rt_lib0clear(&___nl__im__12);
#line 619
___nl__bool__13 = ___nl__bool__1;
#line 619
___nl__bool__13 = !___nl__bool__13;
#line 619
___nl__bool__13 = !___nl__bool__13;
#line 619
if(___nl__bool__13){ goto label_2;}
#line 619
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(846)));
#line 619
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(221)));
#line 619
c_rt_lib0clear(&___nl__im__16);
#line 619
c_rt_lib0move(&___nl__im__14, translator0last_debug_char(___nl__im__15));
#line 619
c_rt_lib0clear(&___nl__im__15);
#line 619
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__14, ___ref___rec__2));
#line 619
c_rt_lib0clear(&___nl__im__14);
#line 619
goto label_1;
#line 619
label_2:
;
#line 619
label_1:
;
#line 619
//clear ___nl__bool__13;
#line 620
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__4));
#line 620
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__18));
#line 620
c_rt_lib0clear(&___nl__im__18);
#line 620
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__17));
#line 620
c_rt_lib0clear(&___nl__im__17);
#line 621
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 622
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(861)));
#line 622
___nl__int__21 = 0;
#line 622
___nl__int__22 = 1;
#line 622
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 622
label_5:
;
#line 622
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 622
___nl__bool__24 = ___nl__int__25;
#line 622
if(___nl__bool__24){ goto label_3;}
#line 622
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 622
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 623
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(221)));
#line 623
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__27, ___ref___rec__2));
#line 623
c_rt_lib0clear(&___nl__im__27);
#line 624
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 625
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(860)));
#line 625
c_rt_lib0delete(translator_priv0print_val(___nl__im__28, ___nl__im__6, ___ref___rec__2));
#line 625
c_rt_lib0clear(&___nl__im__28);
#line 626
c_rt_lib0move(&___nl__im__31,___get_global_const(337));
#line 626
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__6, ___get_global_const(75), ___nl__im__6, ___get_global_const(514), ___nl__im__31));
#line 626
c_rt_lib0clear(&___nl__im__31);
#line 626
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__30));
#line 626
c_rt_lib0clear(&___nl__im__30);
#line 626
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__29));
#line 626
c_rt_lib0clear(&___nl__im__29);
#line 627
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 628
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(227)));
#line 628
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__32, ___ref___rec__2));
#line 628
c_rt_lib0clear(&___nl__im__32);
#line 629
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(227)));
#line 629
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(221)));
#line 629
c_rt_lib0clear(&___nl__im__35);
#line 629
c_rt_lib0move(&___nl__im__33, translator0last_debug_char(___nl__im__34));
#line 629
c_rt_lib0clear(&___nl__im__34);
#line 629
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__33, ___ref___rec__2));
#line 629
c_rt_lib0clear(&___nl__im__33);
#line 630
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__4));
#line 630
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__37));
#line 630
c_rt_lib0clear(&___nl__im__37);
#line 630
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 630
c_rt_lib0clear(&___nl__im__36);
#line 631
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 631
c_rt_lib0clear(&___nl__im__20);
#line 631
label_4:
;
#line 632
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 632
goto label_5;
#line 632
label_3:
;
#line 633
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(862)));
#line 633
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(227)));
#line 633
c_rt_lib0clear(&___nl__im__40);
#line 633
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(859));
#line 633
c_rt_lib0clear(&___nl__im__39);
#line 633
___nl__bool__38 = !___nl__bool__38;
#line 633
___nl__bool__38 = !___nl__bool__38;
#line 633
if(___nl__bool__38){ goto label_7;}
#line 634
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(862)));
#line 634
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__41, ___ref___rec__2));
#line 634
c_rt_lib0clear(&___nl__im__41);
#line 635
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(862)));
#line 635
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(221)));
#line 635
c_rt_lib0clear(&___nl__im__44);
#line 635
c_rt_lib0move(&___nl__im__42, translator0last_debug_char(___nl__im__43));
#line 635
c_rt_lib0clear(&___nl__im__43);
#line 635
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__42, ___ref___rec__2));
#line 635
c_rt_lib0clear(&___nl__im__42);
#line 636
c_rt_lib0move(&___nl__im__46, c_rt_lib0int_new(___nl__int__4));
#line 636
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__46));
#line 636
c_rt_lib0clear(&___nl__im__46);
#line 636
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__45));
#line 636
c_rt_lib0clear(&___nl__im__45);
#line 637
goto label_6;
#line 637
label_7:
;
#line 637
label_6:
;
#line 637
//clear ___nl__bool__38;
#line 638
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__2));
#line 639
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__3, ___ref___rec__2));
#line 639
c_rt_lib0clear(&___nl__im__0);
#line 639
//clear ___nl__bool__1;
#line 639
c_rt_lib0clear(&___nl__im__3);
#line 639
//clear ___nl__int__4;
#line 639
//clear ___nl__int__5;
#line 639
c_rt_lib0clear(&___nl__im__6);
#line 639
c_rt_lib0clear(&___nl__im__19);
#line 639
c_rt_lib0clear(&___nl__im__20);
#line 639
//clear ___nl__int__21;
#line 639
//clear ___nl__int__22;
#line 639
//clear ___nl__int__23;
#line 639
//clear ___nl__bool__24;
#line 639
//clear ___nl__int__25;
#line 639
c_rt_lib0clear(&___nl__im__26);
#line 639
return NULL;
}

ImmT  translator_priv0print_call_base(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 646
c_rt_lib0move(&___nl__im__6,___get_global_const(269));
#line 646
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__0, ___get_global_const(266), ___nl__im__6, ___get_global_const(268), ___nl__im__1, ___get_global_const(265), ___nl__im__2));
#line 646
c_rt_lib0clear(&___nl__im__6);
#line 646
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__5));
#line 646
c_rt_lib0clear(&___nl__im__5);
#line 646
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 646
c_rt_lib0clear(&___nl__im__4);
#line 646
c_rt_lib0clear(&___nl__im__0);
#line 646
c_rt_lib0clear(&___nl__im__1);
#line 646
c_rt_lib0clear(&___nl__im__2);
#line 646
return NULL;
}

translator0loop_label0type translator_priv0save_loop_break(translator0state_t0type* ___ref___rec__0,nlasm0label_t0type ___nl__int__1,nlasm0label_t0type ___nl__int__2) {
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
#line 650
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 650
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 650
___nl__im_ptr__4 = NULL;
#line 651
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__0));
#line 652
___nl__im_ptr__6 = &((*___ref___rec__0).loop_label0field);
#line 652
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__1));
#line 652
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_const(534), ___nl__im__9, ___get_global_const(1207), ___nl__im__5));
#line 652
c_rt_lib0clear(&___nl__im__9);
#line 652
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 652
c_rt_lib0hash_set_value_dec(___nl__im_ptr__6, ___get_global_const(854), ___nl__im__7);
#line 652
___nl__im_ptr__6 = NULL;
#line 652
c_rt_lib0clear(&___nl__im__7);
#line 652
c_rt_lib0clear(&___nl__im__8);
#line 653
___nl__im_ptr__10 = &((*___ref___rec__0).loop_label0field);
#line 653
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__2));
#line 653
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(534), ___nl__im__13, ___get_global_const(1207), ___nl__im__5));
#line 653
c_rt_lib0clear(&___nl__im__13);
#line 653
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 653
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_const(855), ___nl__im__11);
#line 653
___nl__im_ptr__10 = NULL;
#line 653
c_rt_lib0clear(&___nl__im__11);
#line 653
c_rt_lib0clear(&___nl__im__12);
#line 654
//clear ___nl__int__1;
#line 654
//clear ___nl__int__2;
#line 654
c_rt_lib0clear(&___nl__im__5);
#line 654
return ___nl__im__3;
}

ImmT  translator_priv0print_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
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
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
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
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT * ___nl__im_ptr__52 = NULL;
#line 658
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 658
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 658
___nl__im_ptr__4 = NULL;
#line 658
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(505)));
#line 658
c_rt_lib0clear(&___nl__im__3);
#line 659
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(38)));
#line 659
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 659
c_rt_lib0clear(&___nl__im__6);
#line 661
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(95)));
#line 661
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(329));
#line 661
c_rt_lib0clear(&___nl__im__9);
#line 661
___nl__bool__8 = !___nl__bool__8;
#line 661
if(___nl__bool__8){ goto label_2;}
#line 662
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(569)));
#line 662
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 662
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__10, ___ref___rec__1, ___nl__im__11));
#line 662
c_rt_lib0clear(&___nl__im__10);
#line 662
c_rt_lib0clear(&___nl__im__11);
#line 663
goto label_1;
#line 663
label_2:
;
#line 663
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(95)));
#line 663
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(130));
#line 663
c_rt_lib0clear(&___nl__im__12);
#line 663
___nl__bool__8 = !___nl__bool__8;
#line 663
if(___nl__bool__8){ goto label_3;}
#line 664
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(569)));
#line 664
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 664
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__13, ___ref___rec__1, ___nl__im__14));
#line 664
c_rt_lib0clear(&___nl__im__13);
#line 664
c_rt_lib0clear(&___nl__im__14);
#line 665
goto label_1;
#line 665
label_3:
;
#line 666
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 666
nl_die_arg(___nl__im__15);
#line 667
goto label_1;
#line 667
label_1:
;
#line 667
//clear ___nl__bool__8;
#line 667
c_rt_lib0clear(&___nl__im__15);
#line 668
___nl__int__16 = translator_priv0get_sim_label(___ref___rec__1);
#line 669
___nl__int__17 = translator_priv0get_sim_label(___ref___rec__1);
#line 670
___nl__int__18 = translator_priv0get_sim_label(___ref___rec__1);
#line 671
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 671
c_rt_lib0move(&___nl__im__19, translator_priv0new_register(___ref___rec__1, ___nl__im__20));
#line 671
c_rt_lib0clear(&___nl__im__20);
#line 672
___nl__int__21 = 0;
#line 672
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 672
c_rt_lib0delete(translator_priv0load_const(___nl__im__22, ___nl__im__19, ___ref___rec__1));
#line 672
//clear ___nl__int__21;
#line 672
c_rt_lib0clear(&___nl__im__22);
#line 673
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 673
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 673
c_rt_lib0clear(&___nl__im__24);
#line 674
___nl__int__25 = 1;
#line 674
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 674
c_rt_lib0delete(translator_priv0load_const(___nl__im__26, ___nl__im__23, ___ref___rec__1));
#line 674
//clear ___nl__int__25;
#line 674
c_rt_lib0clear(&___nl__im__26);
#line 675
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 675
c_rt_lib0move(&___nl__im__27, translator_priv0new_register(___ref___rec__1, ___nl__im__28));
#line 675
c_rt_lib0clear(&___nl__im__28);
#line 676
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__27, ___get_global_const(75), ___nl__im__5));
#line 676
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__30));
#line 676
c_rt_lib0clear(&___nl__im__30);
#line 676
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__29));
#line 676
c_rt_lib0clear(&___nl__im__29);
#line 677
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 677
c_rt_lib0move(&___nl__im__31, translator_priv0new_register(___ref___rec__1, ___nl__im__32));
#line 677
c_rt_lib0clear(&___nl__im__32);
#line 678
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__18, ___ref___rec__1));
#line 679
c_rt_lib0move(&___nl__im__33,___get_global_const(361));
#line 679
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__31, ___nl__im__19, ___nl__im__27, ___nl__im__33, ___ref___rec__1));
#line 679
c_rt_lib0clear(&___nl__im__33);
#line 680
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__16, ___nl__im__31, ___ref___rec__1));
#line 682
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(95)));
#line 682
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__36, ___get_global_const(329));
#line 682
c_rt_lib0clear(&___nl__im__36);
#line 682
___nl__bool__35 = !___nl__bool__35;
#line 682
if(___nl__bool__35){ goto label_5;}
#line 683
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 683
c_rt_lib0move(&___nl__im__34, translator_priv0new_register(___ref___rec__1, ___nl__im__37));
#line 683
c_rt_lib0clear(&___nl__im__37);
#line 684
c_rt_lib0delete(translator_priv0use_index(___nl__im__34, ___nl__im__5, ___nl__im__19, ___ref___rec__1));
#line 685
c_rt_lib0delete(translator_priv0move(___nl__im__7, ___nl__im__34, ___ref___rec__1));
#line 686
goto label_4;
#line 686
label_5:
;
#line 686
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(95)));
#line 686
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(130));
#line 686
c_rt_lib0clear(&___nl__im__38);
#line 686
___nl__bool__35 = !___nl__bool__35;
#line 686
if(___nl__bool__35){ goto label_6;}
#line 687
c_rt_lib0copy(&___nl__im__34, ___nl__im__7);
#line 688
c_rt_lib0delete(translator_priv0use_index(___nl__im__7, ___nl__im__5, ___nl__im__19, ___ref___rec__1));
#line 689
goto label_4;
#line 689
label_6:
;
#line 690
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 690
nl_die_arg(___nl__im__39);
#line 691
goto label_4;
#line 691
label_4:
;
#line 691
//clear ___nl__bool__35;
#line 691
c_rt_lib0clear(&___nl__im__39);
#line 692
c_rt_lib0move(&___nl__im__40, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__16, ___nl__int__17));
#line 693
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 693
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__41, ___ref___rec__1));
#line 693
c_rt_lib0clear(&___nl__im__41);
#line 694
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(95)));
#line 694
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__43, ___get_global_const(329));
#line 694
c_rt_lib0clear(&___nl__im__43);
#line 694
___nl__bool__42 = !___nl__bool__42;
#line 694
if(___nl__bool__42){ goto label_8;}
#line 695
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__7, ___ref___rec__1));
#line 696
goto label_7;
#line 696
label_8:
;
#line 696
label_7:
;
#line 696
//clear ___nl__bool__42;
#line 697
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__17, ___ref___rec__1));
#line 698
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(928)));
#line 698
___nl__bool__44 = c_rt_lib0check_true_native(___nl__im__45);
#line 698
c_rt_lib0clear(&___nl__im__45);
#line 698
___nl__bool__44 = !___nl__bool__44;
#line 698
___nl__bool__44 = !___nl__bool__44;
#line 698
if(___nl__bool__44){ goto label_10;}
#line 698
c_rt_lib0move(&___nl__im__46, translator0last_debug_char(___nl__im__2));
#line 698
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__46, ___ref___rec__1));
#line 698
c_rt_lib0clear(&___nl__im__46);
#line 698
goto label_9;
#line 698
label_10:
;
#line 698
label_9:
;
#line 698
//clear ___nl__bool__44;
#line 699
c_rt_lib0move(&___nl__im__49,___get_global_const(341));
#line 699
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__19, ___get_global_const(274), ___nl__im__19, ___get_global_const(275), ___nl__im__23, ___get_global_const(514), ___nl__im__49));
#line 699
c_rt_lib0clear(&___nl__im__49);
#line 699
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__48));
#line 699
c_rt_lib0clear(&___nl__im__48);
#line 699
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__47));
#line 699
c_rt_lib0clear(&___nl__im__47);
#line 700
c_rt_lib0move(&___nl__im__51, c_rt_lib0int_new(___nl__int__18));
#line 700
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__51));
#line 700
c_rt_lib0clear(&___nl__im__51);
#line 700
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__50));
#line 700
c_rt_lib0clear(&___nl__im__50);
#line 701
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__16, ___ref___rec__1));
#line 702
___nl__im_ptr__52 = &((*___ref___rec__1).loop_label0field);
#line 702
c_rt_lib0copy(___nl__im_ptr__52, ___nl__im__40);
#line 702
___nl__im_ptr__52 = NULL;
#line 702
c_rt_lib0clear(&___nl__im__0);
#line 702
c_rt_lib0clear(&___nl__im__2);
#line 702
c_rt_lib0clear(&___nl__im__5);
#line 702
c_rt_lib0clear(&___nl__im__7);
#line 702
//clear ___nl__int__16;
#line 702
//clear ___nl__int__17;
#line 702
//clear ___nl__int__18;
#line 702
c_rt_lib0clear(&___nl__im__19);
#line 702
c_rt_lib0clear(&___nl__im__23);
#line 702
c_rt_lib0clear(&___nl__im__27);
#line 702
c_rt_lib0clear(&___nl__im__31);
#line 702
c_rt_lib0clear(&___nl__im__34);
#line 702
c_rt_lib0clear(&___nl__im__40);
#line 702
return NULL;
}

ImmT  translator_priv0print_loop(nast0cmd_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
#line 706
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 707
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 708
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 709
c_rt_lib0move(&___nl__im__4, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 710
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__0, ___ref___rec__1));
#line 711
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 711
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__5, ___ref___rec__1));
#line 711
c_rt_lib0clear(&___nl__im__5);
#line 712
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__3));
#line 712
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__7));
#line 712
c_rt_lib0clear(&___nl__im__7);
#line 712
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__6));
#line 712
c_rt_lib0clear(&___nl__im__6);
#line 713
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 714
___nl__im_ptr__8 = &((*___ref___rec__1).loop_label0field);
#line 714
c_rt_lib0copy(___nl__im_ptr__8, ___nl__im__4);
#line 714
___nl__im_ptr__8 = NULL;
#line 714
c_rt_lib0clear(&___nl__im__0);
#line 714
//clear ___nl__int__2;
#line 714
//clear ___nl__int__3;
#line 714
c_rt_lib0clear(&___nl__im__4);
#line 714
return NULL;
}

ImmT  translator_priv0print_rep(nast0rep_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT * ___nl__im_ptr__31 = NULL;
#line 718
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 719
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 720
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 721
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(865)));
#line 721
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 721
c_rt_lib0clear(&___nl__im__6);
#line 722
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(569)));
#line 722
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 722
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 722
c_rt_lib0clear(&___nl__im__8);
#line 722
c_rt_lib0clear(&___nl__im__9);
#line 723
___nl__int__10 = 0;
#line 723
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 723
c_rt_lib0delete(translator_priv0load_const(___nl__im__11, ___nl__im__7, ___ref___rec__1));
#line 723
//clear ___nl__int__10;
#line 723
c_rt_lib0clear(&___nl__im__11);
#line 724
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 724
c_rt_lib0move(&___nl__im__12, translator_priv0new_register(___ref___rec__1, ___nl__im__13));
#line 724
c_rt_lib0clear(&___nl__im__13);
#line 725
___nl__int__14 = 1;
#line 725
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 725
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__12, ___ref___rec__1));
#line 725
//clear ___nl__int__14;
#line 725
c_rt_lib0clear(&___nl__im__15);
#line 726
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 726
c_rt_lib0move(&___nl__im__16, translator_priv0new_register(___ref___rec__1, ___nl__im__17));
#line 726
c_rt_lib0clear(&___nl__im__17);
#line 727
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 728
c_rt_lib0move(&___nl__im__18,___get_global_const(361));
#line 728
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__16, ___nl__im__7, ___nl__im__5, ___nl__im__18, ___ref___rec__1));
#line 728
c_rt_lib0clear(&___nl__im__18);
#line 729
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__16, ___ref___rec__1));
#line 730
c_rt_lib0move(&___nl__im__19, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 731
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 731
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__20, ___ref___rec__1));
#line 731
c_rt_lib0clear(&___nl__im__20);
#line 732
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 733
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(928)));
#line 733
___nl__bool__21 = c_rt_lib0check_true_native(___nl__im__22);
#line 733
c_rt_lib0clear(&___nl__im__22);
#line 733
___nl__bool__21 = !___nl__bool__21;
#line 733
___nl__bool__21 = !___nl__bool__21;
#line 733
if(___nl__bool__21){ goto label_2;}
#line 733
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 733
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(221)));
#line 733
c_rt_lib0clear(&___nl__im__25);
#line 733
c_rt_lib0move(&___nl__im__23, translator0last_debug_char(___nl__im__24));
#line 733
c_rt_lib0clear(&___nl__im__24);
#line 733
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__23, ___ref___rec__1));
#line 733
c_rt_lib0clear(&___nl__im__23);
#line 733
goto label_1;
#line 733
label_2:
;
#line 733
label_1:
;
#line 733
//clear ___nl__bool__21;
#line 734
c_rt_lib0move(&___nl__im__28,___get_global_const(341));
#line 734
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__7, ___get_global_const(274), ___nl__im__7, ___get_global_const(275), ___nl__im__12, ___get_global_const(514), ___nl__im__28));
#line 734
c_rt_lib0clear(&___nl__im__28);
#line 734
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__27));
#line 734
c_rt_lib0clear(&___nl__im__27);
#line 734
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__26));
#line 734
c_rt_lib0clear(&___nl__im__26);
#line 735
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__4));
#line 735
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__30));
#line 735
c_rt_lib0clear(&___nl__im__30);
#line 735
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__29));
#line 735
c_rt_lib0clear(&___nl__im__29);
#line 736
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 737
___nl__im_ptr__31 = &((*___ref___rec__1).loop_label0field);
#line 737
c_rt_lib0copy(___nl__im_ptr__31, ___nl__im__19);
#line 737
___nl__im_ptr__31 = NULL;
#line 737
c_rt_lib0clear(&___nl__im__0);
#line 737
//clear ___nl__int__2;
#line 737
//clear ___nl__int__3;
#line 737
//clear ___nl__int__4;
#line 737
c_rt_lib0clear(&___nl__im__5);
#line 737
c_rt_lib0clear(&___nl__im__7);
#line 737
c_rt_lib0clear(&___nl__im__12);
#line 737
c_rt_lib0clear(&___nl__im__16);
#line 737
c_rt_lib0clear(&___nl__im__19);
#line 737
return NULL;
}

ImmT  translator_priv0print_forh(nast0forh_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
#line 741
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(131)));
#line 741
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(95)));
#line 741
c_rt_lib0clear(&___nl__im__4);
#line 741
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 741
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 741
___nl__im_ptr__7 = NULL;
#line 741
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(388)));
#line 741
c_rt_lib0clear(&___nl__im__6);
#line 741
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 741
c_rt_lib0clear(&___nl__im__3);
#line 741
c_rt_lib0clear(&___nl__im__5);
#line 741
___nl__bool__2 = !___nl__bool__2;
#line 741
if(___nl__bool__2){ goto label_2;}
#line 742
c_rt_lib0delete(translator_priv0print_own_forh(___nl__im__0, ___ref___rec__1));
#line 743
goto label_1;
#line 743
label_2:
;
#line 744
c_rt_lib0delete(translator_priv0print_ptd_forh(___nl__im__0, ___ref___rec__1));
#line 745
goto label_1;
#line 745
label_1:
;
#line 745
//clear ___nl__bool__2;
#line 745
c_rt_lib0clear(&___nl__im__0);
#line 745
return NULL;
}

ImmT  translator_priv0print_ptd_forh(nast0forh_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
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
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
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
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT * ___nl__im_ptr__46 = NULL;
#line 749
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 749
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 749
___nl__im_ptr__4 = NULL;
#line 749
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(505)));
#line 749
c_rt_lib0clear(&___nl__im__3);
#line 750
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 751
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 752
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 753
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(131)));
#line 753
c_rt_lib0move(&___nl__im__8, translator_priv0calc_val(___nl__im__9, ___ref___rec__1));
#line 753
c_rt_lib0clear(&___nl__im__9);
#line 754
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(371)));
#line 754
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 754
c_rt_lib0move(&___nl__im__10, translator_priv0print_var_decl(___nl__im__11, ___ref___rec__1, ___nl__im__12));
#line 754
c_rt_lib0clear(&___nl__im__11);
#line 754
c_rt_lib0clear(&___nl__im__12);
#line 755
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 755
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 755
c_rt_lib0clear(&___nl__im__14);
#line 756
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 756
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 756
c_rt_lib0move(&___nl__im__15, translator_priv0print_var_decl(___nl__im__16, ___ref___rec__1, ___nl__im__17));
#line 756
c_rt_lib0clear(&___nl__im__16);
#line 756
c_rt_lib0clear(&___nl__im__17);
#line 757
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 757
c_rt_lib0move(&___nl__im__18, translator_priv0new_register(___ref___rec__1, ___nl__im__19));
#line 757
c_rt_lib0clear(&___nl__im__19);
#line 758
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(569), ___nl__im__18, ___get_global_const(131), ___nl__im__8));
#line 758
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(261), ___nl__im__21));
#line 758
c_rt_lib0clear(&___nl__im__21);
#line 758
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 758
c_rt_lib0clear(&___nl__im__20);
#line 759
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 760
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__13, ___get_global_const(569), ___nl__im__18, ___get_global_const(131), ___nl__im__8));
#line 760
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(264), ___nl__im__23));
#line 760
c_rt_lib0clear(&___nl__im__23);
#line 760
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__22));
#line 760
c_rt_lib0clear(&___nl__im__22);
#line 761
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__13, ___ref___rec__1));
#line 762
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__10, ___get_global_const(569), ___nl__im__18, ___get_global_const(131), ___nl__im__8));
#line 762
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(263), ___nl__im__25));
#line 762
c_rt_lib0clear(&___nl__im__25);
#line 762
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 762
c_rt_lib0clear(&___nl__im__24);
#line 764
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 764
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(95)));
#line 764
___nl__bool__26 = nlasm0eq_reg_type(___nl__im__27, ___nl__im__28);
#line 764
c_rt_lib0clear(&___nl__im__27);
#line 764
c_rt_lib0clear(&___nl__im__28);
#line 764
___nl__bool__26 = !___nl__bool__26;
#line 765
c_rt_lib0copy(&___nl__im__29, ___nl__im__15);
#line 766
___nl__bool__30 = ___nl__bool__26;
#line 766
___nl__bool__30 = !___nl__bool__30;
#line 766
if(___nl__bool__30){ goto label_2;}
#line 766
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 766
c_rt_lib0move(&___nl__im__29, translator_priv0new_register(___ref___rec__1, ___nl__im__31));
#line 766
c_rt_lib0clear(&___nl__im__31);
#line 766
goto label_1;
#line 766
label_2:
;
#line 766
label_1:
;
#line 766
//clear ___nl__bool__30;
#line 767
c_rt_lib0move(&___nl__im__32,___get_global_const(1218));
#line 767
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__8));
#line 767
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__10));
#line 767
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__35));
#line 767
c_rt_lib0clear(&___nl__im__34);
#line 767
c_rt_lib0clear(&___nl__im__35);
#line 767
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__29, ___nl__im__32, ___nl__im__33, ___ref___rec__1));
#line 767
c_rt_lib0clear(&___nl__im__32);
#line 767
c_rt_lib0clear(&___nl__im__33);
#line 768
___nl__bool__36 = ___nl__bool__26;
#line 768
___nl__bool__36 = !___nl__bool__36;
#line 768
if(___nl__bool__36){ goto label_4;}
#line 768
c_rt_lib0delete(translator_priv0move(___nl__im__15, ___nl__im__29, ___ref___rec__1));
#line 768
goto label_3;
#line 768
label_4:
;
#line 768
label_3:
;
#line 768
//clear ___nl__bool__36;
#line 770
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 771
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 771
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__38, ___ref___rec__1));
#line 771
c_rt_lib0clear(&___nl__im__38);
#line 772
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 773
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(928)));
#line 773
___nl__bool__39 = c_rt_lib0check_true_native(___nl__im__40);
#line 773
c_rt_lib0clear(&___nl__im__40);
#line 773
___nl__bool__39 = !___nl__bool__39;
#line 773
___nl__bool__39 = !___nl__bool__39;
#line 773
if(___nl__bool__39){ goto label_6;}
#line 773
c_rt_lib0move(&___nl__im__41, translator0last_debug_char(___nl__im__2));
#line 773
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__41, ___ref___rec__1));
#line 773
c_rt_lib0clear(&___nl__im__41);
#line 773
goto label_5;
#line 773
label_6:
;
#line 773
label_5:
;
#line 773
//clear ___nl__bool__39;
#line 774
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(2, ___get_global_const(569), ___nl__im__18, ___get_global_const(131), ___nl__im__8));
#line 774
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(262), ___nl__im__43));
#line 774
c_rt_lib0clear(&___nl__im__43);
#line 774
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__42));
#line 774
c_rt_lib0clear(&___nl__im__42);
#line 775
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__7));
#line 775
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__45));
#line 775
c_rt_lib0clear(&___nl__im__45);
#line 775
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 775
c_rt_lib0clear(&___nl__im__44);
#line 776
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 777
___nl__im_ptr__46 = &((*___ref___rec__1).loop_label0field);
#line 777
c_rt_lib0copy(___nl__im_ptr__46, ___nl__im__37);
#line 777
___nl__im_ptr__46 = NULL;
#line 777
c_rt_lib0clear(&___nl__im__0);
#line 777
c_rt_lib0clear(&___nl__im__2);
#line 777
//clear ___nl__int__5;
#line 777
//clear ___nl__int__6;
#line 777
//clear ___nl__int__7;
#line 777
c_rt_lib0clear(&___nl__im__8);
#line 777
c_rt_lib0clear(&___nl__im__10);
#line 777
c_rt_lib0clear(&___nl__im__13);
#line 777
c_rt_lib0clear(&___nl__im__15);
#line 777
c_rt_lib0clear(&___nl__im__18);
#line 777
//clear ___nl__bool__26;
#line 777
c_rt_lib0clear(&___nl__im__29);
#line 777
c_rt_lib0clear(&___nl__im__37);
#line 777
return NULL;
}

ImmT  translator_priv0print_own_forh(nast0forh_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
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
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
ImmT * ___nl__im_ptr__47 = NULL;
#line 781
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 781
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 781
___nl__im_ptr__4 = NULL;
#line 781
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(505)));
#line 781
c_rt_lib0clear(&___nl__im__3);
#line 782
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 783
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 784
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 785
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(131)));
#line 785
___nl__bool__10 = true;
#line 785
c_rt_lib0move(&___nl__im__8, translator_priv0get_value_of_lvalue(___nl__im__9, ___nl__bool__10, ___ref___rec__1));
#line 785
c_rt_lib0clear(&___nl__im__9);
#line 785
//clear ___nl__bool__10;
#line 786
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 786
___nl__int__15 = 1;
#line 786
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 786
//clear ___nl__int__14;
#line 786
//clear ___nl__int__15;
#line 786
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__8, ___nl__int__13));
#line 786
//clear ___nl__int__13;
#line 786
___nl__int__18 = c_rt_lib0array_len(___nl__im__8);
#line 786
___nl__int__19 = 1;
#line 786
___nl__int__17 = ___nl__int__18 - ___nl__int__19;
#line 786
//clear ___nl__int__18;
#line 786
//clear ___nl__int__19;
#line 786
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 786
//clear ___nl__int__17;
#line 786
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(219)));
#line 786
c_rt_lib0clear(&___nl__im__12);
#line 786
c_rt_lib0clear(&___nl__im__16);
#line 787
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(371)));
#line 787
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 787
c_rt_lib0move(&___nl__im__20, translator_priv0print_var_decl(___nl__im__21, ___ref___rec__1, ___nl__im__22));
#line 787
c_rt_lib0clear(&___nl__im__21);
#line 787
c_rt_lib0clear(&___nl__im__22);
#line 788
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 788
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 788
c_rt_lib0clear(&___nl__im__24);
#line 789
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 789
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 789
c_rt_lib0move(&___nl__im__25, translator_priv0print_var_decl(___nl__im__26, ___ref___rec__1, ___nl__im__27));
#line 789
c_rt_lib0clear(&___nl__im__26);
#line 789
c_rt_lib0clear(&___nl__im__27);
#line 790
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 790
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 790
c_rt_lib0clear(&___nl__im__29);
#line 791
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_const(569), ___nl__im__28, ___get_global_const(131), ___nl__im__11));
#line 791
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(261), ___nl__im__31));
#line 791
c_rt_lib0clear(&___nl__im__31);
#line 791
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__30));
#line 791
c_rt_lib0clear(&___nl__im__30);
#line 792
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 793
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__23, ___get_global_const(569), ___nl__im__28, ___get_global_const(131), ___nl__im__11));
#line 793
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(264), ___nl__im__33));
#line 793
c_rt_lib0clear(&___nl__im__33);
#line 793
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 793
c_rt_lib0clear(&___nl__im__32);
#line 794
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__23, ___ref___rec__1));
#line 795
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__20, ___get_global_const(569), ___nl__im__28, ___get_global_const(131), ___nl__im__11));
#line 795
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(263), ___nl__im__35));
#line 795
c_rt_lib0clear(&___nl__im__35);
#line 795
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 795
c_rt_lib0clear(&___nl__im__34);
#line 797
___nl__bool__36 = false;
#line 797
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___nl__bool__36, ___ref___rec__1));
#line 797
//clear ___nl__bool__36;
#line 799
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 800
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 800
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__38, ___ref___rec__1));
#line 800
c_rt_lib0clear(&___nl__im__38);
#line 801
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___ref___rec__1));
#line 802
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 803
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(928)));
#line 803
___nl__bool__39 = c_rt_lib0check_true_native(___nl__im__40);
#line 803
c_rt_lib0clear(&___nl__im__40);
#line 803
___nl__bool__39 = !___nl__bool__39;
#line 803
___nl__bool__39 = !___nl__bool__39;
#line 803
if(___nl__bool__39){ goto label_2;}
#line 803
c_rt_lib0move(&___nl__im__41, translator0last_debug_char(___nl__im__2));
#line 803
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__41, ___ref___rec__1));
#line 803
c_rt_lib0clear(&___nl__im__41);
#line 803
goto label_1;
#line 803
label_2:
;
#line 803
label_1:
;
#line 803
//clear ___nl__bool__39;
#line 804
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(2, ___get_global_const(569), ___nl__im__28, ___get_global_const(131), ___nl__im__11));
#line 804
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(262), ___nl__im__43));
#line 804
c_rt_lib0clear(&___nl__im__43);
#line 804
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__42));
#line 804
c_rt_lib0clear(&___nl__im__42);
#line 805
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__7));
#line 805
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__45));
#line 805
c_rt_lib0clear(&___nl__im__45);
#line 805
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 805
c_rt_lib0clear(&___nl__im__44);
#line 806
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 807
___nl__bool__46 = false;
#line 807
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__8, ___nl__bool__46, ___ref___rec__1));
#line 807
//clear ___nl__bool__46;
#line 808
___nl__im_ptr__47 = &((*___ref___rec__1).loop_label0field);
#line 808
c_rt_lib0copy(___nl__im_ptr__47, ___nl__im__37);
#line 808
___nl__im_ptr__47 = NULL;
#line 808
c_rt_lib0clear(&___nl__im__0);
#line 808
c_rt_lib0clear(&___nl__im__2);
#line 808
//clear ___nl__int__5;
#line 808
//clear ___nl__int__6;
#line 808
//clear ___nl__int__7;
#line 808
c_rt_lib0clear(&___nl__im__8);
#line 808
c_rt_lib0clear(&___nl__im__11);
#line 808
c_rt_lib0clear(&___nl__im__20);
#line 808
c_rt_lib0clear(&___nl__im__23);
#line 808
c_rt_lib0clear(&___nl__im__25);
#line 808
c_rt_lib0clear(&___nl__im__28);
#line 808
c_rt_lib0clear(&___nl__im__37);
#line 808
return NULL;
}

ImmT  translator_priv0print_while(nast0while_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT * ___nl__im_ptr__19 = NULL;
#line 812
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 813
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 814
___nl__im_ptr__6 = &((*___ref___rec__1).debug0field);
#line 814
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 814
___nl__im_ptr__6 = NULL;
#line 814
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(505)));
#line 814
c_rt_lib0clear(&___nl__im__5);
#line 815
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 816
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 816
c_rt_lib0move(&___nl__im__7, translator_priv0calc_val(___nl__im__8, ___ref___rec__1));
#line 816
c_rt_lib0clear(&___nl__im__8);
#line 817
c_rt_lib0move(&___nl__im__11,___get_global_const(337));
#line 817
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__7, ___get_global_const(75), ___nl__im__7, ___get_global_const(514), ___nl__im__11));
#line 817
c_rt_lib0clear(&___nl__im__11);
#line 817
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__10));
#line 817
c_rt_lib0clear(&___nl__im__10);
#line 817
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__9));
#line 817
c_rt_lib0clear(&___nl__im__9);
#line 818
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__7, ___ref___rec__1));
#line 819
c_rt_lib0move(&___nl__im__12, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 820
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 820
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__13, ___ref___rec__1));
#line 820
c_rt_lib0clear(&___nl__im__13);
#line 821
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(928)));
#line 821
___nl__bool__14 = c_rt_lib0check_true_native(___nl__im__15);
#line 821
c_rt_lib0clear(&___nl__im__15);
#line 821
___nl__bool__14 = !___nl__bool__14;
#line 821
___nl__bool__14 = !___nl__bool__14;
#line 821
if(___nl__bool__14){ goto label_2;}
#line 821
c_rt_lib0move(&___nl__im__16, translator0last_debug_char(___nl__im__4));
#line 821
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__16, ___ref___rec__1));
#line 821
c_rt_lib0clear(&___nl__im__16);
#line 821
goto label_1;
#line 821
label_2:
;
#line 821
label_1:
;
#line 821
//clear ___nl__bool__14;
#line 822
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__3));
#line 822
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__18));
#line 822
c_rt_lib0clear(&___nl__im__18);
#line 822
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__17));
#line 822
c_rt_lib0clear(&___nl__im__17);
#line 823
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 824
___nl__im_ptr__19 = &((*___ref___rec__1).loop_label0field);
#line 824
c_rt_lib0copy(___nl__im_ptr__19, ___nl__im__12);
#line 824
___nl__im_ptr__19 = NULL;
#line 824
c_rt_lib0clear(&___nl__im__0);
#line 824
//clear ___nl__int__2;
#line 824
//clear ___nl__int__3;
#line 824
c_rt_lib0clear(&___nl__im__4);
#line 824
c_rt_lib0clear(&___nl__im__7);
#line 824
c_rt_lib0clear(&___nl__im__12);
#line 824
return NULL;
}

ImmT  translator_priv0print_for(nast0for_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
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
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT * ___nl__im_ptr__37 = NULL;
#line 828
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 829
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 830
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 831
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(863)));
#line 831
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(219));
#line 831
if(___nl__bool__6){ goto label_2;}
#line 833
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(252));
#line 833
if(___nl__bool__6){ goto label_3;}
#line 833
c_rt_lib0move(&___nl__im__7,___get_global_const(16));
#line 833
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 833
nl_die_arg(___nl__im__7);
#line 831
label_2:
;
#line 831
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(219)));
#line 831
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 832
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 832
c_rt_lib0move(&___nl__im__12,___get_global_const(41));
#line 832
c_rt_lib0move(&___nl__im__12, c_rt_lib0unary_minus(___nl__im__12));
#line 832
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 832
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__11, ___get_global_const(218), ___nl__im__12, ___get_global_const(330), ___nl__im__13));
#line 832
c_rt_lib0clear(&___nl__im__11);
#line 832
c_rt_lib0clear(&___nl__im__12);
#line 832
c_rt_lib0clear(&___nl__im__13);
#line 832
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__10, ___ref___rec__1));
#line 832
c_rt_lib0clear(&___nl__im__10);
#line 833
goto label_1;
#line 833
label_3:
;
#line 833
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(252)));
#line 833
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 834
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 834
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__14, ___ref___rec__1, ___nl__im__16));
#line 834
c_rt_lib0clear(&___nl__im__16);
#line 835
goto label_1;
#line 835
label_1:
;
#line 836
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 837
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 837
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_const(219)));
#line 837
c_rt_lib0clear(&___nl__im__19);
#line 837
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(859));
#line 837
c_rt_lib0clear(&___nl__im__18);
#line 837
___nl__bool__17 = !___nl__bool__17;
#line 837
___nl__bool__17 = !___nl__bool__17;
#line 837
if(___nl__bool__17){ goto label_5;}
#line 838
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(860)));
#line 838
c_rt_lib0move(&___nl__im__20, translator_priv0calc_val(___nl__im__21, ___ref___rec__1));
#line 838
c_rt_lib0clear(&___nl__im__21);
#line 839
c_rt_lib0move(&___nl__im__24,___get_global_const(337));
#line 839
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__20, ___get_global_const(75), ___nl__im__20, ___get_global_const(514), ___nl__im__24));
#line 839
c_rt_lib0clear(&___nl__im__24);
#line 839
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__23));
#line 839
c_rt_lib0clear(&___nl__im__23);
#line 839
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__22));
#line 839
c_rt_lib0clear(&___nl__im__22);
#line 840
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__20, ___ref___rec__1));
#line 841
goto label_4;
#line 841
label_5:
;
#line 841
label_4:
;
#line 841
//clear ___nl__bool__17;
#line 841
c_rt_lib0clear(&___nl__im__20);
#line 842
c_rt_lib0move(&___nl__im__25, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__4));
#line 843
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 843
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__26, ___ref___rec__1));
#line 843
c_rt_lib0clear(&___nl__im__26);
#line 844
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 845
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(569)));
#line 845
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 845
c_rt_lib0move(&___nl__im__30,___get_global_const(41));
#line 845
c_rt_lib0move(&___nl__im__30, c_rt_lib0unary_minus(___nl__im__30));
#line 845
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 845
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__29, ___get_global_const(218), ___nl__im__30, ___get_global_const(330), ___nl__im__31));
#line 845
c_rt_lib0clear(&___nl__im__29);
#line 845
c_rt_lib0clear(&___nl__im__30);
#line 845
c_rt_lib0clear(&___nl__im__31);
#line 845
c_rt_lib0delete(translator_priv0print_val(___nl__im__27, ___nl__im__28, ___ref___rec__1));
#line 845
c_rt_lib0clear(&___nl__im__27);
#line 845
c_rt_lib0clear(&___nl__im__28);
#line 846
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 846
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_const(221)));
#line 846
c_rt_lib0clear(&___nl__im__34);
#line 846
c_rt_lib0move(&___nl__im__32, translator0last_debug_char(___nl__im__33));
#line 846
c_rt_lib0clear(&___nl__im__33);
#line 846
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__32, ___ref___rec__1));
#line 846
c_rt_lib0clear(&___nl__im__32);
#line 847
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__3));
#line 847
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__36));
#line 847
c_rt_lib0clear(&___nl__im__36);
#line 847
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__35));
#line 847
c_rt_lib0clear(&___nl__im__35);
#line 848
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 849
___nl__im_ptr__37 = &((*___ref___rec__1).loop_label0field);
#line 849
c_rt_lib0copy(___nl__im_ptr__37, ___nl__im__25);
#line 849
___nl__im_ptr__37 = NULL;
#line 849
c_rt_lib0clear(&___nl__im__0);
#line 849
//clear ___nl__int__2;
#line 849
//clear ___nl__int__3;
#line 849
//clear ___nl__int__4;
#line 849
c_rt_lib0clear(&___nl__im__5);
#line 849
//clear ___nl__bool__6;
#line 849
c_rt_lib0clear(&___nl__im__7);
#line 849
c_rt_lib0clear(&___nl__im__8);
#line 849
c_rt_lib0clear(&___nl__im__9);
#line 849
c_rt_lib0clear(&___nl__im__14);
#line 849
c_rt_lib0clear(&___nl__im__15);
#line 849
c_rt_lib0clear(&___nl__im__25);
#line 849
return NULL;
}

ImmT  translator_priv0print_match(nast0match_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
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
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
bool  ___nl__bool__57 = false;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
bool  ___nl__bool__61 = false;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT * ___nl__im_ptr__66 = NULL;
ImmT  ___nl__im__67 = NULL;
bool  ___nl__bool__68 = false;
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
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
bool  ___nl__bool__86 = false;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
bool  ___nl__bool__91 = false;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
#line 853
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 854
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 854
c_rt_lib0move(&___nl__im__3, translator_priv0calc_val(___nl__im__4, ___ref___rec__1));
#line 854
c_rt_lib0clear(&___nl__im__4);
#line 855
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 855
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__1, ___nl__im__6));
#line 855
c_rt_lib0clear(&___nl__im__6);
#line 856
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 856
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 856
c_rt_lib0clear(&___nl__im__8);
#line 857
___nl__int__9 = translator_priv0get_sim_label(___ref___rec__1);
#line 858
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(868)));
#line 858
___nl__int__12 = 0;
#line 858
___nl__int__13 = 1;
#line 858
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 858
label_3:
;
#line 858
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 858
___nl__bool__15 = ___nl__int__16;
#line 858
if(___nl__bool__15){ goto label_1;}
#line 858
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 858
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 859
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(221)));
#line 859
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__18, ___ref___rec__1));
#line 859
c_rt_lib0clear(&___nl__im__18);
#line 860
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 860
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(95)));
#line 860
c_rt_lib0clear(&___nl__im__21);
#line 860
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(517)));
#line 860
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(168)));
#line 860
c_rt_lib0clear(&___nl__im__23);
#line 860
___nl__int__19 = translator_priv0get_label_number(___ref___rec__1, ___nl__im__20, ___nl__im__22);
#line 860
c_rt_lib0clear(&___nl__im__20);
#line 860
c_rt_lib0clear(&___nl__im__22);
#line 861
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(517)));
#line 861
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(168)));
#line 861
c_rt_lib0clear(&___nl__im__27);
#line 861
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__19));
#line 861
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__5, ___get_global_const(75), ___nl__im__3, ___get_global_const(95), ___nl__im__26, ___get_global_const(521), ___nl__im__28));
#line 861
c_rt_lib0clear(&___nl__im__26);
#line 861
c_rt_lib0clear(&___nl__im__28);
#line 861
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__25));
#line 861
c_rt_lib0clear(&___nl__im__25);
#line 861
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 861
c_rt_lib0clear(&___nl__im__24);
#line 862
___nl__int__29 = translator_priv0get_sim_label(___ref___rec__1);
#line 863
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__29, ___nl__im__5, ___ref___rec__1));
#line 864
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 864
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__30));
#line 864
c_rt_lib0clear(&___nl__im__30);
#line 864
c_rt_lib0clear(&___nl__im__11);
#line 864
label_2:
;
#line 865
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 865
goto label_3;
#line 865
label_1:
;
#line 866
c_rt_lib0move(&___nl__im__31,___get_global_const(16));
#line 866
c_rt_lib0delete(translator_priv0load_const(___nl__im__31, ___nl__im__7, ___ref___rec__1));
#line 866
c_rt_lib0clear(&___nl__im__31);
#line 867
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__3));
#line 867
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__7, ___get_global_const(75), ___nl__im__34));
#line 867
c_rt_lib0clear(&___nl__im__34);
#line 867
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__33));
#line 867
c_rt_lib0clear(&___nl__im__33);
#line 867
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 867
c_rt_lib0clear(&___nl__im__32);
#line 868
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__7));
#line 868
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__35));
#line 868
c_rt_lib0clear(&___nl__im__35);
#line 869
___nl__int__36 = 0;
#line 871
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(868)));
#line 871
___nl__int__40 = 0;
#line 871
___nl__int__41 = 1;
#line 871
___nl__int__42 = c_rt_lib0array_len(___nl__im__38);
#line 871
label_6:
;
#line 871
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 871
___nl__bool__43 = ___nl__int__44;
#line 871
if(___nl__bool__43){ goto label_4;}
#line 871
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__38, ___nl__int__40));
#line 871
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 872
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(227)));
#line 872
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(221)));
#line 872
c_rt_lib0clear(&___nl__im__47);
#line 872
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__46, ___ref___rec__1));
#line 872
c_rt_lib0clear(&___nl__im__46);
#line 873
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__2, ___nl__int__36));
#line 873
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 873
c_rt_lib0clear(&___nl__im__49);
#line 873
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__48, ___ref___rec__1));
#line 873
//clear ___nl__int__48;
#line 874
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(517)));
#line 874
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(219)));
#line 874
c_rt_lib0clear(&___nl__im__51);
#line 874
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(219));
#line 874
if(___nl__bool__52){ goto label_8;}
#line 886
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(73));
#line 886
if(___nl__bool__52){ goto label_9;}
#line 886
c_rt_lib0move(&___nl__im__53,___get_global_const(16));
#line 886
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(2, ___nl__im__53, ___nl__im__50));
#line 886
nl_die_arg(___nl__im__53);
#line 874
label_8:
;
#line 874
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(219)));
#line 874
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 875
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(266)));
#line 875
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(73));
#line 875
if(___nl__bool__57){ goto label_11;}
#line 882
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(40));
#line 882
if(___nl__bool__57){ goto label_12;}
#line 882
c_rt_lib0move(&___nl__im__58,___get_global_const(16));
#line 882
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__56));
#line 882
nl_die_arg(___nl__im__58);
#line 875
label_11:
;
#line 876
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(452)));
#line 876
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 876
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__59, ___ref___rec__1, ___nl__im__60));
#line 876
c_rt_lib0clear(&___nl__im__59);
#line 876
c_rt_lib0clear(&___nl__im__60);
#line 877
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 877
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_const(95)));
#line 877
c_rt_lib0clear(&___nl__im__63);
#line 877
___nl__im_ptr__66 = &((*___ref___rec__1).logic0field);
#line 877
c_rt_lib0copy(&___nl__im__65, (*___nl__im_ptr__66));
#line 877
___nl__im_ptr__66 = NULL;
#line 877
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(388)));
#line 877
c_rt_lib0clear(&___nl__im__65);
#line 877
___nl__bool__61 = tct0is_own_type(___nl__im__62, ___nl__im__64);
#line 877
c_rt_lib0clear(&___nl__im__62);
#line 877
c_rt_lib0clear(&___nl__im__64);
#line 877
___nl__bool__61 = !___nl__bool__61;
#line 878
c_rt_lib0copy(&___nl__im__67, ___nl__im__37);
#line 879
___nl__bool__68 = ___nl__bool__61;
#line 879
___nl__bool__68 = !___nl__bool__68;
#line 879
if(___nl__bool__68){ goto label_14;}
#line 879
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 879
c_rt_lib0move(&___nl__im__67, translator_priv0new_register(___ref___rec__1, ___nl__im__69));
#line 879
c_rt_lib0clear(&___nl__im__69);
#line 879
goto label_13;
#line 879
label_14:
;
#line 879
label_13:
;
#line 879
//clear ___nl__bool__68;
#line 880
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(517)));
#line 880
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_const(168)));
#line 880
c_rt_lib0clear(&___nl__im__73);
#line 880
c_rt_lib0move(&___nl__im__74,___get_global_const(41));
#line 880
c_rt_lib0move(&___nl__im__74, c_rt_lib0unary_minus(___nl__im__74));
#line 880
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__67, ___get_global_const(75), ___nl__im__3, ___get_global_const(95), ___nl__im__72, ___get_global_const(521), ___nl__im__74));
#line 880
c_rt_lib0clear(&___nl__im__72);
#line 880
c_rt_lib0clear(&___nl__im__74);
#line 880
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__71));
#line 880
c_rt_lib0clear(&___nl__im__71);
#line 880
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__70));
#line 880
c_rt_lib0clear(&___nl__im__70);
#line 881
___nl__bool__75 = ___nl__bool__61;
#line 881
___nl__bool__75 = !___nl__bool__75;
#line 881
if(___nl__bool__75){ goto label_16;}
#line 881
c_rt_lib0delete(translator_priv0move(___nl__im__37, ___nl__im__67, ___ref___rec__1));
#line 881
goto label_15;
#line 881
label_16:
;
#line 881
label_15:
;
#line 881
//clear ___nl__bool__75;
#line 882
goto label_10;
#line 882
label_12:
;
#line 883
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(452)));
#line 883
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 883
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__76, ___ref___rec__1, ___nl__im__77));
#line 883
c_rt_lib0clear(&___nl__im__76);
#line 883
c_rt_lib0clear(&___nl__im__77);
#line 884
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(517)));
#line 884
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__79, ___get_global_const(168)));
#line 884
c_rt_lib0clear(&___nl__im__79);
#line 884
c_rt_lib0delete(translator_priv0use_variant(___nl__im__37, ___nl__im__3, ___nl__im__78, ___ref___rec__1));
#line 884
c_rt_lib0clear(&___nl__im__78);
#line 885
goto label_10;
#line 885
label_10:
;
#line 886
goto label_7;
#line 886
label_9:
;
#line 887
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 887
c_rt_lib0move(&___nl__im__81,___get_global_const(41));
#line 887
c_rt_lib0move(&___nl__im__81, c_rt_lib0unary_minus(___nl__im__81));
#line 887
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 887
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__80, ___get_global_const(218), ___nl__im__81, ___get_global_const(330), ___nl__im__82));
#line 887
c_rt_lib0clear(&___nl__im__80);
#line 887
c_rt_lib0clear(&___nl__im__81);
#line 887
c_rt_lib0clear(&___nl__im__82);
#line 888
goto label_7;
#line 888
label_7:
;
#line 889
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(227)));
#line 889
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__83, ___ref___rec__1));
#line 889
c_rt_lib0clear(&___nl__im__83);
#line 890
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(517)));
#line 890
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_const(219)));
#line 890
c_rt_lib0clear(&___nl__im__85);
#line 890
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_const(219));
#line 890
if(___nl__bool__86){ goto label_18;}
#line 895
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_const(73));
#line 895
if(___nl__bool__86){ goto label_19;}
#line 895
c_rt_lib0move(&___nl__im__87,___get_global_const(16));
#line 895
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_mk(2, ___nl__im__87, ___nl__im__84));
#line 895
nl_die_arg(___nl__im__87);
#line 890
label_18:
;
#line 890
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__84, ___get_global_const(219)));
#line 890
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 891
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_const(266)));
#line 891
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__90, ___get_global_const(73));
#line 891
if(___nl__bool__91){ goto label_21;}
#line 892
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__90, ___get_global_const(40));
#line 892
if(___nl__bool__91){ goto label_22;}
#line 892
c_rt_lib0move(&___nl__im__92,___get_global_const(16));
#line 892
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(2, ___nl__im__92, ___nl__im__90));
#line 892
nl_die_arg(___nl__im__92);
#line 891
label_21:
;
#line 892
goto label_20;
#line 892
label_22:
;
#line 893
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(517)));
#line 893
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_const(168)));
#line 893
c_rt_lib0clear(&___nl__im__94);
#line 893
c_rt_lib0delete(translator_priv0release_variant(___nl__im__37, ___nl__im__3, ___nl__im__93, ___ref___rec__1));
#line 893
c_rt_lib0clear(&___nl__im__93);
#line 894
goto label_20;
#line 894
label_20:
;
#line 895
goto label_17;
#line 895
label_19:
;
#line 896
goto label_17;
#line 896
label_17:
;
#line 897
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(227)));
#line 897
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__97, ___get_global_const(221)));
#line 897
c_rt_lib0clear(&___nl__im__97);
#line 897
c_rt_lib0move(&___nl__im__95, translator0last_debug_char(___nl__im__96));
#line 897
c_rt_lib0clear(&___nl__im__96);
#line 897
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__95, ___ref___rec__1));
#line 897
c_rt_lib0clear(&___nl__im__95);
#line 898
c_rt_lib0move(&___nl__im__99, c_rt_lib0int_new(___nl__int__9));
#line 898
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__99));
#line 898
c_rt_lib0clear(&___nl__im__99);
#line 898
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__98));
#line 898
c_rt_lib0clear(&___nl__im__98);
#line 899
___nl__int__100 = 1;
#line 899
___nl__int__36 = ___nl__int__36 + ___nl__int__100;
#line 899
//clear ___nl__int__100;
#line 899
c_rt_lib0clear(&___nl__im__39);
#line 899
label_5:
;
#line 900
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 900
goto label_6;
#line 900
label_4:
;
#line 901
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__9, ___ref___rec__1));
#line 901
c_rt_lib0clear(&___nl__im__0);
#line 901
c_rt_lib0clear(&___nl__im__2);
#line 901
c_rt_lib0clear(&___nl__im__3);
#line 901
c_rt_lib0clear(&___nl__im__5);
#line 901
c_rt_lib0clear(&___nl__im__7);
#line 901
//clear ___nl__int__9;
#line 901
c_rt_lib0clear(&___nl__im__10);
#line 901
c_rt_lib0clear(&___nl__im__11);
#line 901
//clear ___nl__int__12;
#line 901
//clear ___nl__int__13;
#line 901
//clear ___nl__int__14;
#line 901
//clear ___nl__bool__15;
#line 901
//clear ___nl__int__16;
#line 901
c_rt_lib0clear(&___nl__im__17);
#line 901
//clear ___nl__int__19;
#line 901
//clear ___nl__int__29;
#line 901
//clear ___nl__int__36;
#line 901
c_rt_lib0clear(&___nl__im__37);
#line 901
c_rt_lib0clear(&___nl__im__38);
#line 901
c_rt_lib0clear(&___nl__im__39);
#line 901
//clear ___nl__int__40;
#line 901
//clear ___nl__int__41;
#line 901
//clear ___nl__int__42;
#line 901
//clear ___nl__bool__43;
#line 901
//clear ___nl__int__44;
#line 901
c_rt_lib0clear(&___nl__im__45);
#line 901
c_rt_lib0clear(&___nl__im__50);
#line 901
//clear ___nl__bool__52;
#line 901
c_rt_lib0clear(&___nl__im__53);
#line 901
c_rt_lib0clear(&___nl__im__54);
#line 901
c_rt_lib0clear(&___nl__im__55);
#line 901
c_rt_lib0clear(&___nl__im__56);
#line 901
//clear ___nl__bool__57;
#line 901
c_rt_lib0clear(&___nl__im__58);
#line 901
//clear ___nl__bool__61;
#line 901
c_rt_lib0clear(&___nl__im__67);
#line 901
c_rt_lib0clear(&___nl__im__84);
#line 901
//clear ___nl__bool__86;
#line 901
c_rt_lib0clear(&___nl__im__87);
#line 901
c_rt_lib0clear(&___nl__im__88);
#line 901
c_rt_lib0clear(&___nl__im__89);
#line 901
c_rt_lib0clear(&___nl__im__90);
#line 901
//clear ___nl__bool__91;
#line 901
c_rt_lib0clear(&___nl__im__92);
#line 901
return NULL;
}

ImmT  translator_priv0move(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 905
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 905
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 905
c_rt_lib0clear(&___nl__im__4);
#line 905
___nl__bool__3 = !___nl__bool__3;
#line 905
if(___nl__bool__3){ goto label_2;}
#line 905
c_rt_lib0clear(&___nl__im__0);
#line 905
c_rt_lib0clear(&___nl__im__1);
#line 905
//clear ___nl__bool__3;
#line 905
return NULL;
#line 905
goto label_1;
#line 905
label_2:
;
#line 905
label_1:
;
#line 905
//clear ___nl__bool__3;
#line 906
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__0, ___get_global_const(75), ___nl__im__1));
#line 906
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__im__6));
#line 906
c_rt_lib0clear(&___nl__im__6);
#line 906
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__5));
#line 906
c_rt_lib0clear(&___nl__im__5);
#line 906
c_rt_lib0clear(&___nl__im__0);
#line 906
c_rt_lib0clear(&___nl__im__1);
#line 906
return NULL;
}

ImmT  translator_priv0use_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 910
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(560), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(562), ___nl__im__2));
#line 910
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(253), ___nl__im__5));
#line 910
c_rt_lib0clear(&___nl__im__5);
#line 910
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 910
c_rt_lib0clear(&___nl__im__4);
#line 910
c_rt_lib0clear(&___nl__im__0);
#line 910
c_rt_lib0clear(&___nl__im__1);
#line 910
c_rt_lib0clear(&___nl__im__2);
#line 910
return NULL;
}

ImmT  translator_priv0release_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 914
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(546), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(562), ___nl__im__2));
#line 914
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(254), ___nl__im__5));
#line 914
c_rt_lib0clear(&___nl__im__5);
#line 914
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 914
c_rt_lib0clear(&___nl__im__4);
#line 914
c_rt_lib0clear(&___nl__im__0);
#line 914
c_rt_lib0clear(&___nl__im__1);
#line 914
c_rt_lib0clear(&___nl__im__2);
#line 914
return NULL;
}

ImmT  translator_priv0use_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 918
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(560), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(564), ___nl__im__2));
#line 918
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(255), ___nl__im__5));
#line 918
c_rt_lib0clear(&___nl__im__5);
#line 918
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 918
c_rt_lib0clear(&___nl__im__4);
#line 918
c_rt_lib0clear(&___nl__im__0);
#line 918
c_rt_lib0clear(&___nl__im__1);
#line 918
c_rt_lib0clear(&___nl__im__2);
#line 918
return NULL;
}

ImmT  translator_priv0release_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 922
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(546), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(564), ___nl__im__2));
#line 922
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(256), ___nl__im__5));
#line 922
c_rt_lib0clear(&___nl__im__5);
#line 922
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 922
c_rt_lib0clear(&___nl__im__4);
#line 922
c_rt_lib0clear(&___nl__im__0);
#line 922
c_rt_lib0clear(&___nl__im__1);
#line 922
c_rt_lib0clear(&___nl__im__2);
#line 922
return NULL;
}

ImmT  translator_priv0use_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,bool ___nl__bool__3,translator0state_t0type* ___ref___rec__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 927
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 927
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_const(560), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(564), ___nl__im__2, ___get_global_const(565), ___nl__im__7));
#line 927
c_rt_lib0clear(&___nl__im__7);
#line 927
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__6));
#line 927
c_rt_lib0clear(&___nl__im__6);
#line 927
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__5));
#line 927
c_rt_lib0clear(&___nl__im__5);
#line 927
c_rt_lib0clear(&___nl__im__0);
#line 927
c_rt_lib0clear(&___nl__im__1);
#line 927
c_rt_lib0clear(&___nl__im__2);
#line 927
//clear ___nl__bool__3;
#line 927
return NULL;
}

ImmT  translator_priv0release_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 931
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(546), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(564), ___nl__im__2));
#line 931
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(258), ___nl__im__5));
#line 931
c_rt_lib0clear(&___nl__im__5);
#line 931
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 931
c_rt_lib0clear(&___nl__im__4);
#line 931
c_rt_lib0clear(&___nl__im__0);
#line 931
c_rt_lib0clear(&___nl__im__1);
#line 931
c_rt_lib0clear(&___nl__im__2);
#line 931
return NULL;
}

ImmT  translator_priv0use_variant(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 934
___nl__int__4 = 1;
#line 934
___nl__int__4 = -___nl__int__4;
#line 935
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 935
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(517));
#line 935
c_rt_lib0clear(&___nl__im__6);
#line 935
___nl__bool__5 = !___nl__bool__5;
#line 935
if(___nl__bool__5){ goto label_2;}
#line 935
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 935
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 935
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(517)));
#line 935
c_rt_lib0clear(&___nl__im__8);
#line 935
c_rt_lib0clear(&___nl__im__9);
#line 935
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 935
c_rt_lib0clear(&___nl__im__7);
#line 935
goto label_1;
#line 935
label_2:
;
#line 935
label_1:
;
#line 935
//clear ___nl__bool__5;
#line 936
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 936
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(560), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(534), ___nl__im__2, ___get_global_const(521), ___nl__im__12));
#line 936
c_rt_lib0clear(&___nl__im__12);
#line 936
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(259), ___nl__im__11));
#line 936
c_rt_lib0clear(&___nl__im__11);
#line 936
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 936
c_rt_lib0clear(&___nl__im__10);
#line 936
c_rt_lib0clear(&___nl__im__0);
#line 936
c_rt_lib0clear(&___nl__im__1);
#line 936
c_rt_lib0clear(&___nl__im__2);
#line 936
//clear ___nl__int__4;
#line 936
return NULL;
}

ImmT  translator_priv0release_variant(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 940
___nl__int__4 = 1;
#line 940
___nl__int__4 = -___nl__int__4;
#line 941
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 941
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(517));
#line 941
c_rt_lib0clear(&___nl__im__6);
#line 941
___nl__bool__5 = !___nl__bool__5;
#line 941
if(___nl__bool__5){ goto label_2;}
#line 941
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 941
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 941
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(517)));
#line 941
c_rt_lib0clear(&___nl__im__8);
#line 941
c_rt_lib0clear(&___nl__im__9);
#line 941
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 941
c_rt_lib0clear(&___nl__im__7);
#line 941
goto label_1;
#line 941
label_2:
;
#line 941
label_1:
;
#line 941
//clear ___nl__bool__5;
#line 942
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 942
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(546), ___nl__im__0, ___get_global_const(559), ___nl__im__1, ___get_global_const(534), ___nl__im__2, ___get_global_const(521), ___nl__im__12));
#line 942
c_rt_lib0clear(&___nl__im__12);
#line 942
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(260), ___nl__im__11));
#line 942
c_rt_lib0clear(&___nl__im__11);
#line 942
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 942
c_rt_lib0clear(&___nl__im__10);
#line 942
c_rt_lib0clear(&___nl__im__0);
#line 942
c_rt_lib0clear(&___nl__im__1);
#line 942
c_rt_lib0clear(&___nl__im__2);
#line 942
//clear ___nl__int__4;
#line 942
return NULL;
}

ImmT  translator_priv0print_bin_op_operator_command(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,ImmT  ___nl__im__3,translator0state_t0type* ___ref___rec__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
translator_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
#line 947
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 948
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 949
c_rt_lib0copy(&___nl__im__7, ___nl__im__0);
#line 950
___nl__bool__8 = false;
#line 951
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 952
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 953
c_rt_lib0move(&___nl__im__15,___get_global_const(114));
#line 953
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__15);
#line 953
c_rt_lib0clear(&___nl__im__15);
#line 953
if(___nl__bool__11){ goto label_5;}
#line 953
c_rt_lib0move(&___nl__im__16,___get_global_const(894));
#line 953
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__16);
#line 953
c_rt_lib0clear(&___nl__im__16);
#line 953
label_5:
;
#line 953
//clear ___nl__bool__14;
#line 953
if(___nl__bool__11){ goto label_4;}
#line 953
c_rt_lib0move(&___nl__im__17,___get_global_const(343));
#line 953
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__17);
#line 953
c_rt_lib0clear(&___nl__im__17);
#line 953
label_4:
;
#line 953
//clear ___nl__bool__13;
#line 953
if(___nl__bool__11){ goto label_3;}
#line 953
c_rt_lib0move(&___nl__im__18,___get_global_const(344));
#line 953
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__18);
#line 953
c_rt_lib0clear(&___nl__im__18);
#line 953
label_3:
;
#line 953
//clear ___nl__bool__12;
#line 953
___nl__bool__11 = !___nl__bool__11;
#line 953
if(___nl__bool__11){ goto label_2;}
#line 954
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 955
c_rt_lib0move(&___nl__im__21,___get_global_const(114));
#line 955
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__21);
#line 955
c_rt_lib0clear(&___nl__im__21);
#line 955
if(___nl__bool__19){ goto label_8;}
#line 955
c_rt_lib0move(&___nl__im__22,___get_global_const(894));
#line 955
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__22);
#line 955
c_rt_lib0clear(&___nl__im__22);
#line 955
label_8:
;
#line 955
//clear ___nl__bool__20;
#line 955
___nl__bool__19 = !___nl__bool__19;
#line 955
if(___nl__bool__19){ goto label_7;}
#line 956
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 957
goto label_6;
#line 957
label_7:
;
#line 958
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 959
goto label_6;
#line 959
label_6:
;
#line 959
//clear ___nl__bool__19;
#line 960
goto label_1;
#line 960
label_2:
;
#line 960
label_1:
;
#line 960
//clear ___nl__bool__11;
#line 961
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 961
___nl__bool__23 = nlasm0eq_reg_type(___nl__im__24, ___nl__im__9);
#line 961
c_rt_lib0clear(&___nl__im__24);
#line 961
___nl__bool__23 = !___nl__bool__23;
#line 961
___nl__bool__23 = !___nl__bool__23;
#line 961
if(___nl__bool__23){ goto label_10;}
#line 962
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 963
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__1, ___ref___rec__4));
#line 964
goto label_9;
#line 964
label_10:
;
#line 964
label_9:
;
#line 964
//clear ___nl__bool__23;
#line 965
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(95)));
#line 965
___nl__bool__25 = nlasm0eq_reg_type(___nl__im__26, ___nl__im__9);
#line 965
c_rt_lib0clear(&___nl__im__26);
#line 965
___nl__bool__25 = !___nl__bool__25;
#line 965
___nl__bool__25 = !___nl__bool__25;
#line 965
if(___nl__bool__25){ goto label_12;}
#line 966
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 967
c_rt_lib0delete(translator_priv0move(___nl__im__6, ___nl__im__2, ___ref___rec__4));
#line 968
goto label_11;
#line 968
label_12:
;
#line 968
label_11:
;
#line 968
//clear ___nl__bool__25;
#line 969
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 969
___nl__bool__27 = nlasm0eq_reg_type(___nl__im__28, ___nl__im__10);
#line 969
c_rt_lib0clear(&___nl__im__28);
#line 969
___nl__bool__27 = !___nl__bool__27;
#line 969
___nl__bool__27 = !___nl__bool__27;
#line 969
if(___nl__bool__27){ goto label_14;}
#line 970
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__4, ___nl__im__10));
#line 971
___nl__bool__8 = true;
#line 972
goto label_13;
#line 972
label_14:
;
#line 972
label_13:
;
#line 972
//clear ___nl__bool__27;
#line 973
c_rt_lib0move(&___nl__im__31,___get_global_const(341));
#line 973
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__31);
#line 973
c_rt_lib0clear(&___nl__im__31);
#line 973
if(___nl__bool__29){ goto label_17;}
#line 973
c_rt_lib0move(&___nl__im__32,___get_global_const(890));
#line 973
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__32);
#line 973
c_rt_lib0clear(&___nl__im__32);
#line 973
label_17:
;
#line 973
//clear ___nl__bool__30;
#line 973
___nl__bool__29 = !___nl__bool__29;
#line 973
if(___nl__bool__29){ goto label_16;}
#line 974
c_rt_lib0move(&___nl__im__3,___get_global_const(341));
#line 975
goto label_15;
#line 975
label_16:
;
#line 975
c_rt_lib0move(&___nl__im__34,___get_global_const(339));
#line 975
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__34);
#line 975
c_rt_lib0clear(&___nl__im__34);
#line 975
if(___nl__bool__29){ goto label_19;}
#line 975
c_rt_lib0move(&___nl__im__35,___get_global_const(891));
#line 975
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__35);
#line 975
c_rt_lib0clear(&___nl__im__35);
#line 975
label_19:
;
#line 975
//clear ___nl__bool__33;
#line 975
___nl__bool__29 = !___nl__bool__29;
#line 975
if(___nl__bool__29){ goto label_18;}
#line 976
c_rt_lib0move(&___nl__im__3,___get_global_const(339));
#line 977
goto label_15;
#line 977
label_18:
;
#line 977
c_rt_lib0move(&___nl__im__37,___get_global_const(347));
#line 977
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__37);
#line 977
c_rt_lib0clear(&___nl__im__37);
#line 977
if(___nl__bool__29){ goto label_21;}
#line 977
c_rt_lib0move(&___nl__im__38,___get_global_const(892));
#line 977
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__38);
#line 977
c_rt_lib0clear(&___nl__im__38);
#line 977
label_21:
;
#line 977
//clear ___nl__bool__36;
#line 977
___nl__bool__29 = !___nl__bool__29;
#line 977
if(___nl__bool__29){ goto label_20;}
#line 978
c_rt_lib0move(&___nl__im__3,___get_global_const(347));
#line 979
goto label_15;
#line 979
label_20:
;
#line 979
c_rt_lib0move(&___nl__im__40,___get_global_const(109));
#line 979
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__40);
#line 979
c_rt_lib0clear(&___nl__im__40);
#line 979
if(___nl__bool__29){ goto label_23;}
#line 979
c_rt_lib0move(&___nl__im__41,___get_global_const(893));
#line 979
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__41);
#line 979
c_rt_lib0clear(&___nl__im__41);
#line 979
label_23:
;
#line 979
//clear ___nl__bool__39;
#line 979
___nl__bool__29 = !___nl__bool__29;
#line 979
if(___nl__bool__29){ goto label_22;}
#line 980
c_rt_lib0move(&___nl__im__3,___get_global_const(109));
#line 981
goto label_15;
#line 981
label_22:
;
#line 981
c_rt_lib0move(&___nl__im__43,___get_global_const(114));
#line 981
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__43);
#line 981
c_rt_lib0clear(&___nl__im__43);
#line 981
if(___nl__bool__29){ goto label_25;}
#line 981
c_rt_lib0move(&___nl__im__44,___get_global_const(894));
#line 981
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__44);
#line 981
c_rt_lib0clear(&___nl__im__44);
#line 981
label_25:
;
#line 981
//clear ___nl__bool__42;
#line 981
___nl__bool__29 = !___nl__bool__29;
#line 981
if(___nl__bool__29){ goto label_24;}
#line 982
c_rt_lib0move(&___nl__im__3,___get_global_const(114));
#line 983
goto label_15;
#line 983
label_24:
;
#line 983
label_15:
;
#line 983
//clear ___nl__bool__29;
#line 984
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__7, ___get_global_const(274), ___nl__im__5, ___get_global_const(275), ___nl__im__6, ___get_global_const(514), ___nl__im__3));
#line 984
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__46));
#line 984
c_rt_lib0clear(&___nl__im__46);
#line 984
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__45));
#line 984
c_rt_lib0clear(&___nl__im__45);
#line 985
___nl__bool__47 = ___nl__bool__8;
#line 985
___nl__bool__47 = !___nl__bool__47;
#line 985
if(___nl__bool__47){ goto label_27;}
#line 986
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__7, ___ref___rec__4));
#line 987
goto label_26;
#line 987
label_27:
;
#line 987
label_26:
;
#line 987
//clear ___nl__bool__47;
#line 987
c_rt_lib0clear(&___nl__im__0);
#line 987
c_rt_lib0clear(&___nl__im__1);
#line 987
c_rt_lib0clear(&___nl__im__2);
#line 987
c_rt_lib0clear(&___nl__im__3);
#line 987
c_rt_lib0clear(&___nl__im__5);
#line 987
c_rt_lib0clear(&___nl__im__6);
#line 987
c_rt_lib0clear(&___nl__im__7);
#line 987
//clear ___nl__bool__8;
#line 987
c_rt_lib0clear(&___nl__im__9);
#line 987
c_rt_lib0clear(&___nl__im__10);
#line 987
return NULL;
}

ImmT  translator_priv0print(translator0state_t0type* ___ref___rec__0,nlasm0order_t0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__string__8 = NULL;
ImmT * ___nl__im_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 991
___nl__im_ptr__4 = &((*___ref___rec__0).debug0field);
#line 991
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 991
___nl__im_ptr__4 = NULL;
#line 991
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 991
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(227), ___nl__im__1, ___get_global_const(221), ___nl__im__3, ___get_global_const(226), ___nl__im__5));
#line 991
c_rt_lib0clear(&___nl__im__3);
#line 991
c_rt_lib0clear(&___nl__im__5);
#line 992
___nl__im_ptr__6 = &((*___ref___rec__0).result0field);
#line 992
c_rt_lib0move(&___nl__im__7,___get_global_const(213));
#line 992
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___nl__im_ptr__6), ___nl__im__7));
#line 992
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__2));
#line 992
c_rt_lib0move(&___nl__string__8,___get_global_const(213));
#line 992
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__6, ___nl__string__8, ___nl__im__7));
#line 992
___nl__im_ptr__6 = NULL;
#line 992
c_rt_lib0clear(&___nl__im__7);
#line 992
c_rt_lib0clear(&___nl__string__8);
#line 993
___nl__im_ptr__9 = &((*___ref___rec__0).debug0field);
#line 993
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 993
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 993
c_rt_lib0hash_set_value_dec(___nl__im_ptr__9, ___get_global_const(730), ___nl__im__10);
#line 993
___nl__im_ptr__9 = NULL;
#line 993
c_rt_lib0clear(&___nl__im__10);
#line 993
c_rt_lib0clear(&___nl__im__11);
#line 993
c_rt_lib0clear(&___nl__im__1);
#line 993
c_rt_lib0clear(&___nl__im__2);
#line 993
return NULL;
}

ImmT  translator_priv0print_if_goto(nlasm0label_t0type ___nl__int__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 997
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 997
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__5, ___get_global_const(75), ___nl__im__1));
#line 997
c_rt_lib0clear(&___nl__im__5);
#line 997
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__4));
#line 997
c_rt_lib0clear(&___nl__im__4);
#line 997
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 997
c_rt_lib0clear(&___nl__im__3);
#line 997
//clear ___nl__int__0;
#line 997
c_rt_lib0clear(&___nl__im__1);
#line 997
return NULL;
}

ImmT  translator_priv0print_get_from_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
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
ImmT * ___nl__im_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
bool  ___nl__bool__27 = false;
#line 1002
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 1002
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1002
c_rt_lib0clear(&___nl__im__5);
#line 1004
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1004
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(329));
#line 1004
c_rt_lib0clear(&___nl__im__8);
#line 1004
___nl__bool__7 = !___nl__bool__7;
#line 1004
if(___nl__bool__7){ goto label_2;}
#line 1005
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1006
goto label_1;
#line 1006
label_2:
;
#line 1006
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1006
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(130));
#line 1006
c_rt_lib0clear(&___nl__im__9);
#line 1006
___nl__bool__7 = !___nl__bool__7;
#line 1006
if(___nl__bool__7){ goto label_3;}
#line 1007
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1007
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1007
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(130)));
#line 1007
c_rt_lib0clear(&___nl__im__12);
#line 1007
c_rt_lib0clear(&___nl__im__13);
#line 1007
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1007
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1007
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(130)));
#line 1007
c_rt_lib0clear(&___nl__im__15);
#line 1007
c_rt_lib0clear(&___nl__im__16);
#line 1007
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__14, ___get_global_const(2)));
#line 1007
c_rt_lib0clear(&___nl__im__11);
#line 1007
c_rt_lib0clear(&___nl__im__14);
#line 1007
___nl__im_ptr__19 = &((*___ref___rec__3).logic0field);
#line 1007
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 1007
___nl__im_ptr__19 = NULL;
#line 1007
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(388)));
#line 1007
c_rt_lib0clear(&___nl__im__18);
#line 1007
c_rt_lib0move(&___nl__im__6, translator_priv0var_type_to_reg_type(___nl__im__10, ___nl__im__17));
#line 1007
c_rt_lib0clear(&___nl__im__10);
#line 1007
c_rt_lib0clear(&___nl__im__17);
#line 1008
goto label_1;
#line 1008
label_3:
;
#line 1009
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1009
nl_die_arg(___nl__im__20);
#line 1010
goto label_1;
#line 1010
label_1:
;
#line 1010
//clear ___nl__bool__7;
#line 1010
c_rt_lib0clear(&___nl__im__20);
#line 1011
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1011
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__6, ___nl__im__22);
#line 1011
c_rt_lib0clear(&___nl__im__22);
#line 1011
___nl__bool__21 = !___nl__bool__21;
#line 1012
c_rt_lib0copy(&___nl__im__23, ___nl__im__0);
#line 1013
___nl__bool__24 = ___nl__bool__21;
#line 1013
___nl__bool__24 = !___nl__bool__24;
#line 1013
if(___nl__bool__24){ goto label_5;}
#line 1013
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__3, ___nl__im__6));
#line 1013
goto label_4;
#line 1013
label_5:
;
#line 1013
label_4:
;
#line 1013
//clear ___nl__bool__24;
#line 1014
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__23, ___get_global_const(75), ___nl__im__1, ___get_global_const(276), ___nl__im__4));
#line 1014
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__im__26));
#line 1014
c_rt_lib0clear(&___nl__im__26);
#line 1014
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__25));
#line 1014
c_rt_lib0clear(&___nl__im__25);
#line 1015
___nl__bool__27 = ___nl__bool__21;
#line 1015
___nl__bool__27 = !___nl__bool__27;
#line 1015
if(___nl__bool__27){ goto label_7;}
#line 1015
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__23, ___ref___rec__3));
#line 1015
goto label_6;
#line 1015
label_7:
;
#line 1015
label_6:
;
#line 1015
//clear ___nl__bool__27;
#line 1015
c_rt_lib0clear(&___nl__im__0);
#line 1015
c_rt_lib0clear(&___nl__im__1);
#line 1015
c_rt_lib0clear(&___nl__im__2);
#line 1015
c_rt_lib0clear(&___nl__im__4);
#line 1015
c_rt_lib0clear(&___nl__im__6);
#line 1015
//clear ___nl__bool__21;
#line 1015
c_rt_lib0clear(&___nl__im__23);
#line 1015
return NULL;
}

ImmT  translator_priv0print_set_at_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 1020
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 1020
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__1, ___nl__im__5, ___ref___rec__3));
#line 1020
c_rt_lib0clear(&___nl__im__5);
#line 1021
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(75), ___nl__im__0, ___get_global_const(276), ___nl__im__4, ___get_global_const(224), ___nl__im__2));
#line 1021
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(240), ___nl__im__7));
#line 1021
c_rt_lib0clear(&___nl__im__7);
#line 1021
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1021
c_rt_lib0clear(&___nl__im__6);
#line 1021
c_rt_lib0clear(&___nl__im__0);
#line 1021
c_rt_lib0clear(&___nl__im__1);
#line 1021
c_rt_lib0clear(&___nl__im__2);
#line 1021
c_rt_lib0clear(&___nl__im__4);
#line 1021
return NULL;
}

ImmT  translator_priv0print_array_push(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 1025
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 1026
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1026
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(329));
#line 1026
c_rt_lib0clear(&___nl__im__5);
#line 1026
___nl__bool__4 = !___nl__bool__4;
#line 1026
if(___nl__bool__4){ goto label_2;}
#line 1027
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1027
c_rt_lib0move(&___nl__im__3, translator_priv0get_cast(___nl__im__1, ___nl__im__6, ___ref___rec__2));
#line 1027
c_rt_lib0clear(&___nl__im__6);
#line 1028
goto label_1;
#line 1028
label_2:
;
#line 1028
label_1:
;
#line 1028
//clear ___nl__bool__4;
#line 1029
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__0, ___get_global_const(224), ___nl__im__3));
#line 1029
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(241), ___nl__im__8));
#line 1029
c_rt_lib0clear(&___nl__im__8);
#line 1029
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__7));
#line 1029
c_rt_lib0clear(&___nl__im__7);
#line 1029
c_rt_lib0clear(&___nl__im__0);
#line 1029
c_rt_lib0clear(&___nl__im__1);
#line 1029
c_rt_lib0clear(&___nl__im__3);
#line 1029
return NULL;
}

ImmT  translator_priv0print_get_value(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT * ___nl__im_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT * ___nl__im_ptr__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT * ___nl__im_ptr__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT * ___nl__im_ptr__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
#line 1035
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1035
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(329));
#line 1035
c_rt_lib0clear(&___nl__im__6);
#line 1035
___nl__bool__5 = !___nl__bool__5;
#line 1035
if(___nl__bool__5){ goto label_2;}
#line 1036
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1037
goto label_1;
#line 1037
label_2:
;
#line 1037
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1037
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(131));
#line 1037
c_rt_lib0clear(&___nl__im__7);
#line 1037
___nl__bool__5 = !___nl__bool__5;
#line 1037
if(___nl__bool__5){ goto label_3;}
#line 1038
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1038
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1038
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(131)));
#line 1038
c_rt_lib0clear(&___nl__im__11);
#line 1038
c_rt_lib0clear(&___nl__im__12);
#line 1038
___nl__im_ptr__15 = &((*___ref___rec__3).logic0field);
#line 1038
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1038
___nl__im_ptr__15 = NULL;
#line 1038
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(388)));
#line 1038
c_rt_lib0clear(&___nl__im__14);
#line 1038
c_rt_lib0move(&___nl__im__9, translator_priv0unwrap_ref(___nl__im__10, ___nl__im__13));
#line 1038
c_rt_lib0clear(&___nl__im__10);
#line 1038
c_rt_lib0clear(&___nl__im__13);
#line 1038
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1038
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(95)));
#line 1038
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(131)));
#line 1038
c_rt_lib0clear(&___nl__im__18);
#line 1038
c_rt_lib0clear(&___nl__im__19);
#line 1038
___nl__im_ptr__22 = &((*___ref___rec__3).logic0field);
#line 1038
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1038
___nl__im_ptr__22 = NULL;
#line 1038
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(388)));
#line 1038
c_rt_lib0clear(&___nl__im__21);
#line 1038
c_rt_lib0move(&___nl__im__16, translator_priv0unwrap_ref(___nl__im__17, ___nl__im__20));
#line 1038
c_rt_lib0clear(&___nl__im__17);
#line 1038
c_rt_lib0clear(&___nl__im__20);
#line 1038
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(4)));
#line 1038
c_rt_lib0clear(&___nl__im__9);
#line 1038
c_rt_lib0clear(&___nl__im__16);
#line 1039
___nl__im_ptr__25 = &((*___ref___rec__3).logic0field);
#line 1039
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1039
___nl__im_ptr__25 = NULL;
#line 1039
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(388)));
#line 1039
c_rt_lib0clear(&___nl__im__24);
#line 1039
c_rt_lib0move(&___nl__im__8, translator_priv0unwrap_ref(___nl__im__8, ___nl__im__23));
#line 1039
c_rt_lib0clear(&___nl__im__23);
#line 1040
___nl__im_ptr__28 = &((*___ref___rec__3).logic0field);
#line 1040
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1040
___nl__im_ptr__28 = NULL;
#line 1040
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(388)));
#line 1040
c_rt_lib0clear(&___nl__im__27);
#line 1040
c_rt_lib0move(&___nl__im__4, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__26));
#line 1040
c_rt_lib0clear(&___nl__im__26);
#line 1041
goto label_1;
#line 1041
label_3:
;
#line 1042
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1042
nl_die_arg(___nl__im__29);
#line 1043
goto label_1;
#line 1043
label_1:
;
#line 1043
//clear ___nl__bool__5;
#line 1043
c_rt_lib0clear(&___nl__im__8);
#line 1043
c_rt_lib0clear(&___nl__im__29);
#line 1044
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1044
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__31);
#line 1044
c_rt_lib0clear(&___nl__im__31);
#line 1044
___nl__bool__30 = !___nl__bool__30;
#line 1045
c_rt_lib0copy(&___nl__im__32, ___nl__im__0);
#line 1046
___nl__bool__33 = ___nl__bool__30;
#line 1046
___nl__bool__33 = !___nl__bool__33;
#line 1046
if(___nl__bool__33){ goto label_5;}
#line 1046
c_rt_lib0move(&___nl__im__32, translator_priv0new_register(___ref___rec__3, ___nl__im__4));
#line 1046
goto label_4;
#line 1046
label_5:
;
#line 1046
label_4:
;
#line 1046
//clear ___nl__bool__33;
#line 1047
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__32, ___get_global_const(75), ___nl__im__1, ___get_global_const(371), ___nl__im__2));
#line 1047
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(243), ___nl__im__35));
#line 1047
c_rt_lib0clear(&___nl__im__35);
#line 1047
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__34));
#line 1047
c_rt_lib0clear(&___nl__im__34);
#line 1048
___nl__bool__36 = ___nl__bool__30;
#line 1048
___nl__bool__36 = !___nl__bool__36;
#line 1048
if(___nl__bool__36){ goto label_7;}
#line 1048
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__32, ___ref___rec__3));
#line 1048
goto label_6;
#line 1048
label_7:
;
#line 1048
label_6:
;
#line 1048
//clear ___nl__bool__36;
#line 1048
c_rt_lib0clear(&___nl__im__0);
#line 1048
c_rt_lib0clear(&___nl__im__1);
#line 1048
c_rt_lib0clear(&___nl__im__2);
#line 1048
c_rt_lib0clear(&___nl__im__4);
#line 1048
//clear ___nl__bool__30;
#line 1048
c_rt_lib0clear(&___nl__im__32);
#line 1048
return NULL;
}

ImmT  translator_priv0print_set_value(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1052
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(75), ___nl__im__0, ___get_global_const(371), ___nl__im__1, ___get_global_const(224), ___nl__im__2));
#line 1052
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(244), ___nl__im__5));
#line 1052
c_rt_lib0clear(&___nl__im__5);
#line 1052
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1052
c_rt_lib0clear(&___nl__im__4);
#line 1052
c_rt_lib0clear(&___nl__im__0);
#line 1052
c_rt_lib0clear(&___nl__im__1);
#line 1052
c_rt_lib0clear(&___nl__im__2);
#line 1052
return NULL;
}

ImmT  translator0struct_of_lvalue_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0struct_of_lvalue_t");
return translator0struct_of_lvalue_t();
}
ImmT  translator0struct_of_lvalue_t() {
translator_priv0__const__init();
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
#line 1057
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(905)));
#line 1057
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 1059
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 1059
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 1060
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(905)));
#line 1060
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 1060
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__6, ___get_global_const(564), ___nl__im__7));
#line 1060
c_rt_lib0clear(&___nl__im__6);
#line 1060
c_rt_lib0clear(&___nl__im__7);
#line 1060
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 1060
c_rt_lib0clear(&___nl__im__5);
#line 1062
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 1064
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 1064
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 1065
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 1065
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__11, ___get_global_const(562), ___nl__im__12));
#line 1065
c_rt_lib0clear(&___nl__im__11);
#line 1065
c_rt_lib0clear(&___nl__im__12);
#line 1065
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 1065
c_rt_lib0clear(&___nl__im__10);
#line 1067
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(905)));
#line 1067
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 1069
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 1069
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__16));
#line 1070
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(905)));
#line 1070
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__17));
#line 1070
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__16, ___get_global_const(564), ___nl__im__17));
#line 1070
c_rt_lib0clear(&___nl__im__16);
#line 1070
c_rt_lib0clear(&___nl__im__17);
#line 1070
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 1070
c_rt_lib0clear(&___nl__im__15);
#line 1072
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 1074
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(376), ___get_global_const(377)));
#line 1074
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 1075
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 1075
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__21, ___get_global_const(534), ___nl__im__22));
#line 1075
c_rt_lib0clear(&___nl__im__21);
#line 1075
c_rt_lib0clear(&___nl__im__22);
#line 1075
c_rt_lib0move(&___nl__im__19, ptd0rec(___nl__im__20));
#line 1075
c_rt_lib0clear(&___nl__im__20);
#line 1075
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_const(564), ___nl__im__3, ___get_global_const(255), ___nl__im__4, ___get_global_const(371), ___nl__im__8, ___get_global_const(253), ___nl__im__9, ___get_global_const(1199), ___nl__im__13, ___get_global_const(257), ___nl__im__14, ___get_global_const(903), ___nl__im__18, ___get_global_const(259), ___nl__im__19));
#line 1075
c_rt_lib0clear(&___nl__im__3);
#line 1075
c_rt_lib0clear(&___nl__im__4);
#line 1075
c_rt_lib0clear(&___nl__im__8);
#line 1075
c_rt_lib0clear(&___nl__im__9);
#line 1075
c_rt_lib0clear(&___nl__im__13);
#line 1075
c_rt_lib0clear(&___nl__im__14);
#line 1075
c_rt_lib0clear(&___nl__im__18);
#line 1075
c_rt_lib0clear(&___nl__im__19);
#line 1075
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 1075
c_rt_lib0clear(&___nl__im__2);
#line 1075
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 1075
c_rt_lib0clear(&___nl__im__1);
#line 1075
return ___nl__im__0;
#line 1075
c_rt_lib0clear(&___nl__im__0);
#line 1075
return NULL;
}

translator0struct_of_lvalue_t0type translator_priv0get_struct_of_lvalue(nast0value_t0type* ___ref___im__0,translator0state_t0type* ___ref___rec__1) {
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT * ___nl__im_ptr__28 = NULL;
bool  ___nl__bool__29 = false;
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
ImmT * ___nl__im_ptr__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT * ___nl__im_ptr__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT * ___nl__im_ptr__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
bool  ___nl__bool__100 = false;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
#line 1081
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 1082
label_2:
;
#line 1082
___nl__bool__3 = true;
#line 1082
___nl__bool__3 = !___nl__bool__3;
#line 1082
if(___nl__bool__3){ goto label_1;}
#line 1083
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1083
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(234));
#line 1083
c_rt_lib0clear(&___nl__im__5);
#line 1083
___nl__bool__4 = !___nl__bool__4;
#line 1083
if(___nl__bool__4){ goto label_4;}
#line 1084
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1084
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1084
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(234)));
#line 1084
c_rt_lib0clear(&___nl__im__7);
#line 1084
c_rt_lib0clear(&___nl__im__8);
#line 1085
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(514)));
#line 1086
c_rt_lib0move(&___nl__im__14,___get_global_const(875));
#line 1086
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__14);
#line 1086
c_rt_lib0clear(&___nl__im__14);
#line 1086
if(___nl__bool__10){ goto label_9;}
#line 1086
c_rt_lib0move(&___nl__im__15,___get_global_const(876));
#line 1086
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__15);
#line 1086
c_rt_lib0clear(&___nl__im__15);
#line 1086
label_9:
;
#line 1086
//clear ___nl__bool__13;
#line 1086
if(___nl__bool__10){ goto label_8;}
#line 1086
c_rt_lib0move(&___nl__im__16,___get_global_const(532));
#line 1086
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__16);
#line 1086
c_rt_lib0clear(&___nl__im__16);
#line 1086
label_8:
;
#line 1086
//clear ___nl__bool__12;
#line 1086
if(___nl__bool__10){ goto label_7;}
#line 1086
c_rt_lib0move(&___nl__im__17,___get_global_const(877));
#line 1086
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__17);
#line 1086
c_rt_lib0clear(&___nl__im__17);
#line 1086
label_7:
;
#line 1086
//clear ___nl__bool__11;
#line 1086
___nl__bool__10 = !___nl__bool__10;
#line 1086
___nl__bool__10 = !___nl__bool__10;
#line 1086
if(___nl__bool__10){ goto label_6;}
#line 1086
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 1086
nl_die_arg(___nl__im__18);
#line 1086
goto label_5;
#line 1086
label_6:
;
#line 1086
label_5:
;
#line 1086
//clear ___nl__bool__10;
#line 1086
c_rt_lib0clear(&___nl__im__18);
#line 1087
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1088
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(514)));
#line 1088
c_rt_lib0move(&___nl__im__22,___get_global_const(875));
#line 1088
___nl__bool__20 = c_rt_lib0eq(___nl__im__21, ___nl__im__22);
#line 1088
c_rt_lib0clear(&___nl__im__21);
#line 1088
c_rt_lib0clear(&___nl__im__22);
#line 1088
___nl__bool__20 = !___nl__bool__20;
#line 1088
if(___nl__bool__20){ goto label_11;}
#line 1089
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1089
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(95)));
#line 1089
c_rt_lib0clear(&___nl__im__25);
#line 1089
___nl__im_ptr__28 = &((*___ref___rec__1).logic0field);
#line 1089
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1089
___nl__im_ptr__28 = NULL;
#line 1089
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(388)));
#line 1089
c_rt_lib0clear(&___nl__im__27);
#line 1089
c_rt_lib0move(&___nl__im__23, translator_priv0unwrap_ref(___nl__im__24, ___nl__im__26));
#line 1089
c_rt_lib0clear(&___nl__im__24);
#line 1089
c_rt_lib0clear(&___nl__im__26);
#line 1090
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__23, ___get_global_const(2));
#line 1090
___nl__bool__29 = !___nl__bool__29;
#line 1090
if(___nl__bool__29){ goto label_13;}
#line 1092
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__23, ___get_global_const(2)));
#line 1093
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1093
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__32, ___get_global_const(564), ___nl__im__33));
#line 1093
c_rt_lib0clear(&___nl__im__32);
#line 1093
c_rt_lib0clear(&___nl__im__33);
#line 1093
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(255), ___nl__im__31));
#line 1093
c_rt_lib0clear(&___nl__im__31);
#line 1093
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__30));
#line 1093
c_rt_lib0clear(&___nl__im__30);
#line 1095
goto label_12;
#line 1095
label_13:
;
#line 1096
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1096
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(564), ___nl__im__35));
#line 1096
c_rt_lib0clear(&___nl__im__35);
#line 1096
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__34));
#line 1096
c_rt_lib0clear(&___nl__im__34);
#line 1097
goto label_12;
#line 1097
label_12:
;
#line 1097
//clear ___nl__bool__29;
#line 1098
goto label_10;
#line 1098
label_11:
;
#line 1098
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(514)));
#line 1098
c_rt_lib0move(&___nl__im__37,___get_global_const(876));
#line 1098
___nl__bool__20 = c_rt_lib0eq(___nl__im__36, ___nl__im__37);
#line 1098
c_rt_lib0clear(&___nl__im__36);
#line 1098
c_rt_lib0clear(&___nl__im__37);
#line 1098
___nl__bool__20 = !___nl__bool__20;
#line 1098
if(___nl__bool__20){ goto label_14;}
#line 1099
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1099
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(95)));
#line 1099
c_rt_lib0clear(&___nl__im__40);
#line 1099
___nl__im_ptr__43 = &((*___ref___rec__1).logic0field);
#line 1099
c_rt_lib0copy(&___nl__im__42, (*___nl__im_ptr__43));
#line 1099
___nl__im_ptr__43 = NULL;
#line 1099
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(388)));
#line 1099
c_rt_lib0clear(&___nl__im__42);
#line 1099
c_rt_lib0move(&___nl__im__38, translator_priv0unwrap_ref(___nl__im__39, ___nl__im__41));
#line 1099
c_rt_lib0clear(&___nl__im__39);
#line 1099
c_rt_lib0clear(&___nl__im__41);
#line 1100
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(4));
#line 1100
___nl__bool__44 = !___nl__bool__44;
#line 1100
if(___nl__bool__44){ goto label_16;}
#line 1102
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__38, ___get_global_const(4)));
#line 1103
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1103
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__47, ___get_global_const(564), ___nl__im__48));
#line 1103
c_rt_lib0clear(&___nl__im__47);
#line 1103
c_rt_lib0clear(&___nl__im__48);
#line 1103
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__46));
#line 1103
c_rt_lib0clear(&___nl__im__46);
#line 1103
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__45));
#line 1103
c_rt_lib0clear(&___nl__im__45);
#line 1105
goto label_15;
#line 1105
label_16:
;
#line 1106
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1106
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_const(1199), ___nl__im__50));
#line 1106
c_rt_lib0clear(&___nl__im__50);
#line 1106
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__49));
#line 1106
c_rt_lib0clear(&___nl__im__49);
#line 1107
goto label_15;
#line 1107
label_15:
;
#line 1107
//clear ___nl__bool__44;
#line 1108
goto label_10;
#line 1108
label_14:
;
#line 1108
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(514)));
#line 1108
c_rt_lib0move(&___nl__im__52,___get_global_const(532));
#line 1108
___nl__bool__20 = c_rt_lib0eq(___nl__im__51, ___nl__im__52);
#line 1108
c_rt_lib0clear(&___nl__im__51);
#line 1108
c_rt_lib0clear(&___nl__im__52);
#line 1108
___nl__bool__20 = !___nl__bool__20;
#line 1108
if(___nl__bool__20){ goto label_17;}
#line 1109
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1109
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(95)));
#line 1109
c_rt_lib0clear(&___nl__im__55);
#line 1109
___nl__im_ptr__58 = &((*___ref___rec__1).logic0field);
#line 1109
c_rt_lib0copy(&___nl__im__57, (*___nl__im_ptr__58));
#line 1109
___nl__im_ptr__58 = NULL;
#line 1109
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(388)));
#line 1109
c_rt_lib0clear(&___nl__im__57);
#line 1109
c_rt_lib0move(&___nl__im__53, translator_priv0unwrap_ref(___nl__im__54, ___nl__im__56));
#line 1109
c_rt_lib0clear(&___nl__im__54);
#line 1109
c_rt_lib0clear(&___nl__im__56);
#line 1110
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__53, ___get_global_const(6));
#line 1110
___nl__bool__59 = !___nl__bool__59;
#line 1110
if(___nl__bool__59){ goto label_19;}
#line 1111
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1111
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_const(219)));
#line 1111
c_rt_lib0clear(&___nl__im__62);
#line 1111
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1111
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_const(219)));
#line 1111
c_rt_lib0clear(&___nl__im__64);
#line 1111
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__63, ___get_global_const(881)));
#line 1111
c_rt_lib0clear(&___nl__im__61);
#line 1111
c_rt_lib0clear(&___nl__im__63);
#line 1113
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__53, ___get_global_const(6)));
#line 1113
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value(___nl__im__68, ___nl__im__60));
#line 1113
c_rt_lib0clear(&___nl__im__68);
#line 1113
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__67, ___get_global_const(562), ___nl__im__60));
#line 1113
c_rt_lib0clear(&___nl__im__67);
#line 1113
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_const(253), ___nl__im__66));
#line 1113
c_rt_lib0clear(&___nl__im__66);
#line 1113
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__65));
#line 1113
c_rt_lib0clear(&___nl__im__65);
#line 1116
goto label_18;
#line 1116
label_19:
;
#line 1116
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__53, ___get_global_const(4));
#line 1116
___nl__bool__59 = !___nl__bool__59;
#line 1116
if(___nl__bool__59){ goto label_20;}
#line 1118
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__53, ___get_global_const(4)));
#line 1119
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1119
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__71, ___get_global_const(564), ___nl__im__72));
#line 1119
c_rt_lib0clear(&___nl__im__71);
#line 1119
c_rt_lib0clear(&___nl__im__72);
#line 1119
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__70));
#line 1119
c_rt_lib0clear(&___nl__im__70);
#line 1119
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__69));
#line 1119
c_rt_lib0clear(&___nl__im__69);
#line 1121
goto label_18;
#line 1121
label_20:
;
#line 1122
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1122
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_const(219)));
#line 1122
c_rt_lib0clear(&___nl__im__76);
#line 1122
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1122
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_const(219)));
#line 1122
c_rt_lib0clear(&___nl__im__78);
#line 1122
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__77, ___get_global_const(881)));
#line 1122
c_rt_lib0clear(&___nl__im__75);
#line 1122
c_rt_lib0clear(&___nl__im__77);
#line 1122
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_const(371), ___nl__im__74));
#line 1122
c_rt_lib0clear(&___nl__im__74);
#line 1122
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__73));
#line 1122
c_rt_lib0clear(&___nl__im__73);
#line 1123
goto label_18;
#line 1123
label_18:
;
#line 1123
//clear ___nl__bool__59;
#line 1123
c_rt_lib0clear(&___nl__im__60);
#line 1124
goto label_10;
#line 1124
label_17:
;
#line 1124
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(514)));
#line 1124
c_rt_lib0move(&___nl__im__80,___get_global_const(877));
#line 1124
___nl__bool__20 = c_rt_lib0eq(___nl__im__79, ___nl__im__80);
#line 1124
c_rt_lib0clear(&___nl__im__79);
#line 1124
c_rt_lib0clear(&___nl__im__80);
#line 1124
___nl__bool__20 = !___nl__bool__20;
#line 1124
if(___nl__bool__20){ goto label_21;}
#line 1125
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1125
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_const(95)));
#line 1125
c_rt_lib0clear(&___nl__im__83);
#line 1125
___nl__im_ptr__86 = &((*___ref___rec__1).logic0field);
#line 1125
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 1125
___nl__im_ptr__86 = NULL;
#line 1125
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_const(388)));
#line 1125
c_rt_lib0clear(&___nl__im__85);
#line 1125
c_rt_lib0move(&___nl__im__81, translator_priv0unwrap_ref(___nl__im__82, ___nl__im__84));
#line 1125
c_rt_lib0clear(&___nl__im__82);
#line 1125
c_rt_lib0clear(&___nl__im__84);
#line 1126
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1126
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_const(219)));
#line 1126
c_rt_lib0clear(&___nl__im__89);
#line 1126
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1126
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__91, ___get_global_const(219)));
#line 1126
c_rt_lib0clear(&___nl__im__91);
#line 1126
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__90, ___get_global_const(881)));
#line 1126
c_rt_lib0clear(&___nl__im__88);
#line 1126
c_rt_lib0clear(&___nl__im__90);
#line 1127
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(14));
#line 1127
___nl__bool__92 = !___nl__bool__92;
#line 1127
if(___nl__bool__92){ goto label_23;}
#line 1129
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__81, ___get_global_const(14)));
#line 1129
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value(___nl__im__97, ___nl__im__87));
#line 1129
c_rt_lib0clear(&___nl__im__97);
#line 1129
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__81, ___get_global_const(14)));
#line 1129
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value(___nl__im__99, ___nl__im__87));
#line 1129
c_rt_lib0clear(&___nl__im__99);
#line 1129
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__98, ___get_global_const(28)));
#line 1129
c_rt_lib0clear(&___nl__im__96);
#line 1129
c_rt_lib0clear(&___nl__im__98);
#line 1129
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_mk(2, ___get_global_const(1219), ___nl__im__95, ___get_global_const(534), ___nl__im__87));
#line 1129
c_rt_lib0clear(&___nl__im__95);
#line 1129
c_rt_lib0move(&___nl__im__93, c_rt_lib0ov_mk_arg(___get_global_const(259), ___nl__im__94));
#line 1129
c_rt_lib0clear(&___nl__im__94);
#line 1129
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__93));
#line 1129
c_rt_lib0clear(&___nl__im__93);
#line 1132
goto label_22;
#line 1132
label_23:
;
#line 1132
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(13));
#line 1132
if(___nl__bool__92){ goto label_25;}
#line 1132
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(0));
#line 1132
label_25:
;
#line 1132
//clear ___nl__bool__100;
#line 1132
___nl__bool__92 = !___nl__bool__92;
#line 1132
if(___nl__bool__92){ goto label_24;}
#line 1133
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_const(903), ___nl__im__87));
#line 1133
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__101));
#line 1133
c_rt_lib0clear(&___nl__im__101);
#line 1134
goto label_22;
#line 1134
label_24:
;
#line 1135
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(0));
#line 1135
nl_die_arg(___nl__im__102);
#line 1136
goto label_22;
#line 1136
label_22:
;
#line 1136
//clear ___nl__bool__92;
#line 1136
c_rt_lib0clear(&___nl__im__102);
#line 1137
goto label_10;
#line 1137
label_21:
;
#line 1138
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(0));
#line 1138
nl_die_arg(___nl__im__103);
#line 1139
goto label_10;
#line 1139
label_10:
;
#line 1139
//clear ___nl__bool__20;
#line 1139
c_rt_lib0clear(&___nl__im__23);
#line 1139
c_rt_lib0clear(&___nl__im__38);
#line 1139
c_rt_lib0clear(&___nl__im__53);
#line 1139
c_rt_lib0clear(&___nl__im__81);
#line 1139
c_rt_lib0clear(&___nl__im__87);
#line 1139
c_rt_lib0clear(&___nl__im__103);
#line 1140
c_rt_lib0delete(array0append(&___nl__im__19, ___nl__im__2));
#line 1141
c_rt_lib0copy(&___nl__im__2, ___nl__im__19);
#line 1142
c_rt_lib0move(___ref___im__0, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1143
goto label_3;
#line 1143
label_4:
;
#line 1143
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1143
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__104, ___get_global_const(878));
#line 1143
c_rt_lib0clear(&___nl__im__104);
#line 1143
___nl__bool__4 = !___nl__bool__4;
#line 1143
if(___nl__bool__4){ goto label_26;}
#line 1144
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1144
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1144
c_rt_lib0move(___ref___im__0, c_rt_lib0priv_as(___nl__im__106, ___get_global_const(878)));
#line 1144
c_rt_lib0clear(&___nl__im__105);
#line 1144
c_rt_lib0clear(&___nl__im__106);
#line 1145
goto label_3;
#line 1145
label_26:
;
#line 1146
goto label_1;
#line 1147
goto label_3;
#line 1147
label_3:
;
#line 1147
//clear ___nl__bool__4;
#line 1147
c_rt_lib0clear(&___nl__im__6);
#line 1147
c_rt_lib0clear(&___nl__im__9);
#line 1147
c_rt_lib0clear(&___nl__im__19);
#line 1148
goto label_2;
#line 1148
label_1:
;
#line 1149
//clear ___nl__bool__3;
#line 1149
return ___nl__im__2;
}

translator0lvalue_values_t0type translator_priv0get_value_of_lvalue(nast0value_t0type ___nl__im__0,bool ___nl__bool__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
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
bool  ___nl__bool__28 = false;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
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
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT * ___nl__im_ptr__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
bool  ___nl__bool__70 = false;
bool  ___nl__bool__71 = false;
INT  ___nl__int__72 = 0;
INT  ___nl__int__73 = 0;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
ImmT  ___nl__im__76 = NULL;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
bool  ___nl__bool__91 = false;
bool  ___nl__bool__92 = false;
INT  ___nl__int__93 = 0;
INT  ___nl__int__94 = 0;
INT  ___nl__int__95 = 0;
INT  ___nl__int__96 = 0;
ImmT  ___nl__im__97 = NULL;
INT  ___nl__int__98 = 0;
INT  ___nl__int__99 = 0;
ImmT  ___nl__im__100 = NULL;
INT  ___nl__int__101 = 0;
INT  ___nl__int__102 = 0;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT * ___nl__im_ptr__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
INT  ___nl__int__123 = 0;
INT  ___nl__int__124 = 0;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
INT  ___nl__int__127 = 0;
INT  ___nl__int__128 = 0;
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
INT  ___nl__int__141 = 0;
INT  ___nl__int__142 = 0;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT * ___nl__im_ptr__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
INT  ___nl__int__157 = 0;
INT  ___nl__int__158 = 0;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
INT  ___nl__int__161 = 0;
INT  ___nl__int__162 = 0;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT * ___nl__im_ptr__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
INT  ___nl__int__179 = 0;
INT  ___nl__int__180 = 0;
ImmT  ___nl__im__181 = NULL;
INT  ___nl__int__182 = 0;
INT  ___nl__int__183 = 0;
ImmT  ___nl__im__184 = NULL;
bool  ___nl__bool__185 = false;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
INT  ___nl__int__188 = 0;
INT  ___nl__int__189 = 0;
INT  ___nl__int__190 = 0;
#line 1154
c_rt_lib0move(&___nl__im__3, translator_priv0get_struct_of_lvalue(&___nl__im__0, ___ref___rec__2));
#line 1155
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1155
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1155
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(463)));
#line 1155
c_rt_lib0clear(&___nl__im__5);
#line 1155
c_rt_lib0clear(&___nl__im__6);
#line 1156
c_rt_lib0move(&___nl__im__8, translator_priv0get_var_register(___nl__im__4, ___ref___rec__2));
#line 1156
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(1, ___nl__im__8));
#line 1156
c_rt_lib0clear(&___nl__im__8);
#line 1157
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1158
___nl__int__10 = c_rt_lib0array_len(___nl__im__3);
#line 1158
___nl__int__11 = 0;
#line 1158
___nl__int__12 = 1;
#line 1158
label_3:
;
#line 1158
___nl__int__14 = ___nl__int__11 >= ___nl__int__10;
#line 1158
___nl__bool__13 = ___nl__int__14;
#line 1158
if(___nl__bool__13){ goto label_1;}
#line 1159
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__3, ___nl__int__11));
#line 1159
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(564));
#line 1159
if(___nl__bool__16){ goto label_5;}
#line 1165
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(255));
#line 1165
if(___nl__bool__16){ goto label_6;}
#line 1171
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(1199));
#line 1171
if(___nl__bool__16){ goto label_7;}
#line 1177
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(371));
#line 1177
if(___nl__bool__16){ goto label_8;}
#line 1186
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(253));
#line 1186
if(___nl__bool__16){ goto label_9;}
#line 1191
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(903));
#line 1191
if(___nl__bool__16){ goto label_10;}
#line 1195
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(259));
#line 1195
if(___nl__bool__16){ goto label_11;}
#line 1200
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(257));
#line 1200
if(___nl__bool__16){ goto label_12;}
#line 1200
c_rt_lib0move(&___nl__im__17,___get_global_const(16));
#line 1200
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1200
nl_die_arg(___nl__im__17);
#line 1159
label_5:
;
#line 1159
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(564)));
#line 1159
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1160
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1160
c_rt_lib0move(&___nl__im__20, translator_priv0new_register(___ref___rec__2, ___nl__im__21));
#line 1160
c_rt_lib0clear(&___nl__im__21);
#line 1160
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__20));
#line 1160
c_rt_lib0clear(&___nl__im__20);
#line 1161
c_rt_lib0move(&___nl__im__23, translator_priv0calc_val(___nl__im__18, ___ref___rec__2));
#line 1161
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 1161
c_rt_lib0move(&___nl__im__22, translator_priv0get_cast(___nl__im__23, ___nl__im__24, ___ref___rec__2));
#line 1161
c_rt_lib0clear(&___nl__im__23);
#line 1161
c_rt_lib0clear(&___nl__im__24);
#line 1162
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1162
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__27, ___get_global_const(564), ___nl__im__22));
#line 1162
c_rt_lib0clear(&___nl__im__27);
#line 1162
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(564), ___nl__im__26));
#line 1162
c_rt_lib0clear(&___nl__im__26);
#line 1162
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__25));
#line 1162
c_rt_lib0clear(&___nl__im__25);
#line 1163
___nl__bool__28 = ___nl__bool__1;
#line 1163
___nl__bool__28 = !___nl__bool__28;
#line 1163
___nl__bool__29 = !___nl__bool__28;
#line 1163
if(___nl__bool__29){ goto label_15;}
#line 1163
___nl__int__31 = c_rt_lib0array_len(___nl__im__3);
#line 1163
___nl__int__32 = 1;
#line 1163
___nl__int__30 = ___nl__int__31 - ___nl__int__32;
#line 1163
//clear ___nl__int__31;
#line 1163
//clear ___nl__int__32;
#line 1163
___nl__int__33 = ___nl__int__11 == ___nl__int__30;
#line 1163
___nl__bool__28 = ___nl__int__33;
#line 1163
//clear ___nl__int__30;
#line 1163
//clear ___nl__int__33;
#line 1163
label_15:
;
#line 1163
//clear ___nl__bool__29;
#line 1163
___nl__bool__28 = !___nl__bool__28;
#line 1163
if(___nl__bool__28){ goto label_14;}
#line 1163
goto label_1;
#line 1163
goto label_13;
#line 1163
label_14:
;
#line 1163
label_13:
;
#line 1163
//clear ___nl__bool__28;
#line 1164
___nl__int__36 = 1;
#line 1164
___nl__int__35 = ___nl__int__11 + ___nl__int__36;
#line 1164
//clear ___nl__int__36;
#line 1164
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__7, ___nl__int__35));
#line 1164
//clear ___nl__int__35;
#line 1164
c_rt_lib0move(&___nl__im__37,___get_global_const(1220));
#line 1164
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1164
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__40));
#line 1164
c_rt_lib0clear(&___nl__im__40);
#line 1164
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__22));
#line 1164
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(2, ___nl__im__39, ___nl__im__41));
#line 1164
c_rt_lib0clear(&___nl__im__39);
#line 1164
c_rt_lib0clear(&___nl__im__41);
#line 1164
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__34, ___nl__im__37, ___nl__im__38, ___ref___rec__2));
#line 1164
c_rt_lib0clear(&___nl__im__34);
#line 1164
c_rt_lib0clear(&___nl__im__37);
#line 1164
c_rt_lib0clear(&___nl__im__38);
#line 1165
goto label_4;
#line 1165
label_6:
;
#line 1165
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(255)));
#line 1165
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 1166
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(1219)));
#line 1166
___nl__im_ptr__48 = &((*___ref___rec__2).logic0field);
#line 1166
c_rt_lib0copy(&___nl__im__47, (*___nl__im_ptr__48));
#line 1166
___nl__im_ptr__48 = NULL;
#line 1166
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(388)));
#line 1166
c_rt_lib0clear(&___nl__im__47);
#line 1166
c_rt_lib0move(&___nl__im__44, translator_priv0var_type_to_reg_type(___nl__im__45, ___nl__im__46));
#line 1166
c_rt_lib0clear(&___nl__im__45);
#line 1166
c_rt_lib0clear(&___nl__im__46);
#line 1167
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(564)));
#line 1167
c_rt_lib0move(&___nl__im__49, translator_priv0calc_val(___nl__im__50, ___ref___rec__2));
#line 1167
c_rt_lib0clear(&___nl__im__50);
#line 1168
c_rt_lib0move(&___nl__im__51, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__44));
#line 1168
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__51));
#line 1168
c_rt_lib0clear(&___nl__im__51);
#line 1169
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1169
___nl__int__57 = 1;
#line 1169
___nl__int__56 = ___nl__int__11 + ___nl__int__57;
#line 1169
//clear ___nl__int__57;
#line 1169
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__7, ___nl__int__56));
#line 1169
//clear ___nl__int__56;
#line 1169
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__54, ___get_global_const(1211), ___nl__im__55, ___get_global_const(564), ___nl__im__49));
#line 1169
c_rt_lib0clear(&___nl__im__54);
#line 1169
c_rt_lib0clear(&___nl__im__55);
#line 1169
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_const(255), ___nl__im__53));
#line 1169
c_rt_lib0clear(&___nl__im__53);
#line 1169
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__52));
#line 1169
c_rt_lib0clear(&___nl__im__52);
#line 1170
___nl__int__60 = 1;
#line 1170
___nl__int__59 = ___nl__int__11 + ___nl__int__60;
#line 1170
//clear ___nl__int__60;
#line 1170
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_get(___nl__im__7, ___nl__int__59));
#line 1170
//clear ___nl__int__59;
#line 1170
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1170
c_rt_lib0delete(translator_priv0use_index(___nl__im__58, ___nl__im__61, ___nl__im__49, ___ref___rec__2));
#line 1170
c_rt_lib0clear(&___nl__im__58);
#line 1170
c_rt_lib0clear(&___nl__im__61);
#line 1171
goto label_4;
#line 1171
label_7:
;
#line 1171
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(1199)));
#line 1171
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 1172
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1172
c_rt_lib0move(&___nl__im__64, translator_priv0new_register(___ref___rec__2, ___nl__im__65));
#line 1172
c_rt_lib0clear(&___nl__im__65);
#line 1172
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__64));
#line 1172
c_rt_lib0clear(&___nl__im__64);
#line 1173
c_rt_lib0move(&___nl__im__66, translator_priv0calc_val(___nl__im__62, ___ref___rec__2));
#line 1174
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1174
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__69, ___get_global_const(371), ___nl__im__66));
#line 1174
c_rt_lib0clear(&___nl__im__69);
#line 1174
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(1199), ___nl__im__68));
#line 1174
c_rt_lib0clear(&___nl__im__68);
#line 1174
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__67));
#line 1174
c_rt_lib0clear(&___nl__im__67);
#line 1175
___nl__bool__70 = ___nl__bool__1;
#line 1175
___nl__bool__70 = !___nl__bool__70;
#line 1175
___nl__bool__71 = !___nl__bool__70;
#line 1175
if(___nl__bool__71){ goto label_18;}
#line 1175
___nl__int__73 = c_rt_lib0array_len(___nl__im__3);
#line 1175
___nl__int__74 = 1;
#line 1175
___nl__int__72 = ___nl__int__73 - ___nl__int__74;
#line 1175
//clear ___nl__int__73;
#line 1175
//clear ___nl__int__74;
#line 1175
___nl__int__75 = ___nl__int__11 == ___nl__int__72;
#line 1175
___nl__bool__70 = ___nl__int__75;
#line 1175
//clear ___nl__int__72;
#line 1175
//clear ___nl__int__75;
#line 1175
label_18:
;
#line 1175
//clear ___nl__bool__71;
#line 1175
___nl__bool__70 = !___nl__bool__70;
#line 1175
if(___nl__bool__70){ goto label_17;}
#line 1175
goto label_1;
#line 1175
goto label_16;
#line 1175
label_17:
;
#line 1175
label_16:
;
#line 1175
//clear ___nl__bool__70;
#line 1176
___nl__int__78 = 1;
#line 1176
___nl__int__77 = ___nl__int__11 + ___nl__int__78;
#line 1176
//clear ___nl__int__78;
#line 1176
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__7, ___nl__int__77));
#line 1176
//clear ___nl__int__77;
#line 1176
c_rt_lib0move(&___nl__im__79,___get_global_const(1221));
#line 1176
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1176
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__82));
#line 1176
c_rt_lib0clear(&___nl__im__82);
#line 1176
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__66));
#line 1176
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_mk(2, ___nl__im__81, ___nl__im__83));
#line 1176
c_rt_lib0clear(&___nl__im__81);
#line 1176
c_rt_lib0clear(&___nl__im__83);
#line 1176
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__76, ___nl__im__79, ___nl__im__80, ___ref___rec__2));
#line 1176
c_rt_lib0clear(&___nl__im__76);
#line 1176
c_rt_lib0clear(&___nl__im__79);
#line 1176
c_rt_lib0clear(&___nl__im__80);
#line 1177
goto label_4;
#line 1177
label_8:
;
#line 1177
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(371)));
#line 1177
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1178
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1178
c_rt_lib0move(&___nl__im__86, translator_priv0new_register(___ref___rec__2, ___nl__im__87));
#line 1178
c_rt_lib0clear(&___nl__im__87);
#line 1178
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__86));
#line 1178
c_rt_lib0clear(&___nl__im__86);
#line 1179
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1179
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__90, ___get_global_const(371), ___nl__im__84));
#line 1179
c_rt_lib0clear(&___nl__im__90);
#line 1179
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_const(371), ___nl__im__89));
#line 1179
c_rt_lib0clear(&___nl__im__89);
#line 1179
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__88));
#line 1179
c_rt_lib0clear(&___nl__im__88);
#line 1180
___nl__bool__91 = ___nl__bool__1;
#line 1180
___nl__bool__91 = !___nl__bool__91;
#line 1180
___nl__bool__92 = !___nl__bool__91;
#line 1180
if(___nl__bool__92){ goto label_21;}
#line 1180
___nl__int__94 = c_rt_lib0array_len(___nl__im__3);
#line 1180
___nl__int__95 = 1;
#line 1180
___nl__int__93 = ___nl__int__94 - ___nl__int__95;
#line 1180
//clear ___nl__int__94;
#line 1180
//clear ___nl__int__95;
#line 1180
___nl__int__96 = ___nl__int__11 == ___nl__int__93;
#line 1180
___nl__bool__91 = ___nl__int__96;
#line 1180
//clear ___nl__int__93;
#line 1180
//clear ___nl__int__96;
#line 1180
label_21:
;
#line 1180
//clear ___nl__bool__92;
#line 1180
___nl__bool__91 = !___nl__bool__91;
#line 1180
if(___nl__bool__91){ goto label_20;}
#line 1180
goto label_1;
#line 1180
goto label_19;
#line 1180
label_20:
;
#line 1180
label_19:
;
#line 1180
//clear ___nl__bool__91;
#line 1181
___nl__int__99 = 1;
#line 1181
___nl__int__98 = ___nl__int__11 + ___nl__int__99;
#line 1181
//clear ___nl__int__99;
#line 1181
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__7, ___nl__int__98));
#line 1181
//clear ___nl__int__98;
#line 1181
c_rt_lib0delete(translator_priv0load_const(___nl__im__84, ___nl__im__97, ___ref___rec__2));
#line 1181
c_rt_lib0clear(&___nl__im__97);
#line 1182
___nl__int__102 = 1;
#line 1182
___nl__int__101 = ___nl__int__11 + ___nl__int__102;
#line 1182
//clear ___nl__int__102;
#line 1182
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_get(___nl__im__7, ___nl__int__101));
#line 1182
//clear ___nl__int__101;
#line 1182
c_rt_lib0move(&___nl__im__103,___get_global_const(1221));
#line 1183
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1183
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__106));
#line 1183
c_rt_lib0clear(&___nl__im__106);
#line 1184
___nl__int__110 = 1;
#line 1184
___nl__int__109 = ___nl__int__11 + ___nl__int__110;
#line 1184
//clear ___nl__int__110;
#line 1184
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_get(___nl__im__7, ___nl__int__109));
#line 1184
//clear ___nl__int__109;
#line 1184
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__108));
#line 1184
c_rt_lib0clear(&___nl__im__108);
#line 1184
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__107));
#line 1184
c_rt_lib0clear(&___nl__im__105);
#line 1184
c_rt_lib0clear(&___nl__im__107);
#line 1184
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__100, ___nl__im__103, ___nl__im__104, ___ref___rec__2));
#line 1184
c_rt_lib0clear(&___nl__im__100);
#line 1184
c_rt_lib0clear(&___nl__im__103);
#line 1184
c_rt_lib0clear(&___nl__im__104);
#line 1186
goto label_4;
#line 1186
label_9:
;
#line 1186
c_rt_lib0move(&___nl__im__112, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(253)));
#line 1186
c_rt_lib0copy(&___nl__im__111, ___nl__im__112);
#line 1187
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(1219)));
#line 1187
___nl__im_ptr__117 = &((*___ref___rec__2).logic0field);
#line 1187
c_rt_lib0copy(&___nl__im__116, (*___nl__im_ptr__117));
#line 1187
___nl__im_ptr__117 = NULL;
#line 1187
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_const(388)));
#line 1187
c_rt_lib0clear(&___nl__im__116);
#line 1187
c_rt_lib0move(&___nl__im__113, translator_priv0var_type_to_reg_type(___nl__im__114, ___nl__im__115));
#line 1187
c_rt_lib0clear(&___nl__im__114);
#line 1187
c_rt_lib0clear(&___nl__im__115);
#line 1188
c_rt_lib0move(&___nl__im__118, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__113));
#line 1188
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__118));
#line 1188
c_rt_lib0clear(&___nl__im__118);
#line 1189
c_rt_lib0move(&___nl__im__121, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1189
___nl__int__124 = 1;
#line 1189
___nl__int__123 = ___nl__int__11 + ___nl__int__124;
#line 1189
//clear ___nl__int__124;
#line 1189
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_get(___nl__im__7, ___nl__int__123));
#line 1189
//clear ___nl__int__123;
#line 1189
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(562)));
#line 1189
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__121, ___get_global_const(1211), ___nl__im__122, ___get_global_const(562), ___nl__im__125));
#line 1189
c_rt_lib0clear(&___nl__im__121);
#line 1189
c_rt_lib0clear(&___nl__im__122);
#line 1189
c_rt_lib0clear(&___nl__im__125);
#line 1189
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_const(253), ___nl__im__120));
#line 1189
c_rt_lib0clear(&___nl__im__120);
#line 1189
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__119));
#line 1189
c_rt_lib0clear(&___nl__im__119);
#line 1190
___nl__int__128 = 1;
#line 1190
___nl__int__127 = ___nl__int__11 + ___nl__int__128;
#line 1190
//clear ___nl__int__128;
#line 1190
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_get(___nl__im__7, ___nl__int__127));
#line 1190
//clear ___nl__int__127;
#line 1190
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1190
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(562)));
#line 1190
c_rt_lib0delete(translator_priv0use_field(___nl__im__126, ___nl__im__129, ___nl__im__130, ___ref___rec__2));
#line 1190
c_rt_lib0clear(&___nl__im__126);
#line 1190
c_rt_lib0clear(&___nl__im__129);
#line 1190
c_rt_lib0clear(&___nl__im__130);
#line 1191
goto label_4;
#line 1191
label_10:
;
#line 1191
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(903)));
#line 1191
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 1192
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1192
c_rt_lib0move(&___nl__im__133, translator_priv0new_register(___ref___rec__2, ___nl__im__134));
#line 1192
c_rt_lib0clear(&___nl__im__134);
#line 1192
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__133));
#line 1192
c_rt_lib0clear(&___nl__im__133);
#line 1193
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1193
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__137, ___get_global_const(534), ___nl__im__131));
#line 1193
c_rt_lib0clear(&___nl__im__137);
#line 1193
c_rt_lib0move(&___nl__im__135, c_rt_lib0ov_mk_arg(___get_global_const(903), ___nl__im__136));
#line 1193
c_rt_lib0clear(&___nl__im__136);
#line 1193
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__135));
#line 1193
c_rt_lib0clear(&___nl__im__135);
#line 1194
___nl__int__142 = 1;
#line 1194
___nl__int__141 = ___nl__int__11 + ___nl__int__142;
#line 1194
//clear ___nl__int__142;
#line 1194
c_rt_lib0move(&___nl__im__140, c_rt_lib0array_get(___nl__im__7, ___nl__int__141));
#line 1194
//clear ___nl__int__141;
#line 1194
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1194
c_rt_lib0move(&___nl__im__144,___get_global_const(41));
#line 1194
c_rt_lib0move(&___nl__im__144, c_rt_lib0unary_minus(___nl__im__144));
#line 1194
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__140, ___get_global_const(75), ___nl__im__143, ___get_global_const(95), ___nl__im__131, ___get_global_const(521), ___nl__im__144));
#line 1194
c_rt_lib0clear(&___nl__im__140);
#line 1194
c_rt_lib0clear(&___nl__im__143);
#line 1194
c_rt_lib0clear(&___nl__im__144);
#line 1194
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__139));
#line 1194
c_rt_lib0clear(&___nl__im__139);
#line 1194
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__138));
#line 1194
c_rt_lib0clear(&___nl__im__138);
#line 1195
goto label_4;
#line 1195
label_11:
;
#line 1195
c_rt_lib0move(&___nl__im__146, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(259)));
#line 1195
c_rt_lib0copy(&___nl__im__145, ___nl__im__146);
#line 1196
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__145, ___get_global_const(1219)));
#line 1196
___nl__im_ptr__151 = &((*___ref___rec__2).logic0field);
#line 1196
c_rt_lib0copy(&___nl__im__150, (*___nl__im_ptr__151));
#line 1196
___nl__im_ptr__151 = NULL;
#line 1196
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_const(388)));
#line 1196
c_rt_lib0clear(&___nl__im__150);
#line 1196
c_rt_lib0move(&___nl__im__147, translator_priv0var_type_to_reg_type(___nl__im__148, ___nl__im__149));
#line 1196
c_rt_lib0clear(&___nl__im__148);
#line 1196
c_rt_lib0clear(&___nl__im__149);
#line 1197
c_rt_lib0move(&___nl__im__152, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__147));
#line 1197
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__152));
#line 1197
c_rt_lib0clear(&___nl__im__152);
#line 1198
c_rt_lib0move(&___nl__im__155, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1198
___nl__int__158 = 1;
#line 1198
___nl__int__157 = ___nl__int__11 + ___nl__int__158;
#line 1198
//clear ___nl__int__158;
#line 1198
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_get(___nl__im__7, ___nl__int__157));
#line 1198
//clear ___nl__int__157;
#line 1198
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__145, ___get_global_const(534)));
#line 1198
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__155, ___get_global_const(1211), ___nl__im__156, ___get_global_const(534), ___nl__im__159));
#line 1198
c_rt_lib0clear(&___nl__im__155);
#line 1198
c_rt_lib0clear(&___nl__im__156);
#line 1198
c_rt_lib0clear(&___nl__im__159);
#line 1198
c_rt_lib0move(&___nl__im__153, c_rt_lib0ov_mk_arg(___get_global_const(259), ___nl__im__154));
#line 1198
c_rt_lib0clear(&___nl__im__154);
#line 1198
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__153));
#line 1198
c_rt_lib0clear(&___nl__im__153);
#line 1199
___nl__int__162 = 1;
#line 1199
___nl__int__161 = ___nl__int__11 + ___nl__int__162;
#line 1199
//clear ___nl__int__162;
#line 1199
c_rt_lib0move(&___nl__im__160, c_rt_lib0array_get(___nl__im__7, ___nl__int__161));
#line 1199
//clear ___nl__int__161;
#line 1199
c_rt_lib0move(&___nl__im__163, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1199
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__145, ___get_global_const(534)));
#line 1199
c_rt_lib0delete(translator_priv0use_variant(___nl__im__160, ___nl__im__163, ___nl__im__164, ___ref___rec__2));
#line 1199
c_rt_lib0clear(&___nl__im__160);
#line 1199
c_rt_lib0clear(&___nl__im__163);
#line 1199
c_rt_lib0clear(&___nl__im__164);
#line 1200
goto label_4;
#line 1200
label_12:
;
#line 1200
c_rt_lib0move(&___nl__im__166, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(257)));
#line 1200
c_rt_lib0copy(&___nl__im__165, ___nl__im__166);
#line 1201
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__165, ___get_global_const(1219)));
#line 1201
___nl__im_ptr__171 = &((*___ref___rec__2).logic0field);
#line 1201
c_rt_lib0copy(&___nl__im__170, (*___nl__im_ptr__171));
#line 1201
___nl__im_ptr__171 = NULL;
#line 1201
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__170, ___get_global_const(388)));
#line 1201
c_rt_lib0clear(&___nl__im__170);
#line 1201
c_rt_lib0move(&___nl__im__167, translator_priv0var_type_to_reg_type(___nl__im__168, ___nl__im__169));
#line 1201
c_rt_lib0clear(&___nl__im__168);
#line 1201
c_rt_lib0clear(&___nl__im__169);
#line 1202
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__165, ___get_global_const(564)));
#line 1202
c_rt_lib0move(&___nl__im__172, translator_priv0calc_val(___nl__im__173, ___ref___rec__2));
#line 1202
c_rt_lib0clear(&___nl__im__173);
#line 1203
c_rt_lib0move(&___nl__im__174, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__167));
#line 1203
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__174));
#line 1203
c_rt_lib0clear(&___nl__im__174);
#line 1204
c_rt_lib0move(&___nl__im__177, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1204
___nl__int__180 = 1;
#line 1204
___nl__int__179 = ___nl__int__11 + ___nl__int__180;
#line 1204
//clear ___nl__int__180;
#line 1204
c_rt_lib0move(&___nl__im__178, c_rt_lib0array_get(___nl__im__7, ___nl__int__179));
#line 1204
//clear ___nl__int__179;
#line 1204
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_mk(3, ___get_global_const(1210), ___nl__im__177, ___get_global_const(1211), ___nl__im__178, ___get_global_const(564), ___nl__im__172));
#line 1204
c_rt_lib0clear(&___nl__im__177);
#line 1204
c_rt_lib0clear(&___nl__im__178);
#line 1204
c_rt_lib0move(&___nl__im__175, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__176));
#line 1204
c_rt_lib0clear(&___nl__im__176);
#line 1204
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__175));
#line 1204
c_rt_lib0clear(&___nl__im__175);
#line 1205
___nl__int__183 = 1;
#line 1205
___nl__int__182 = ___nl__int__11 + ___nl__int__183;
#line 1205
//clear ___nl__int__183;
#line 1205
c_rt_lib0move(&___nl__im__181, c_rt_lib0array_get(___nl__im__7, ___nl__int__182));
#line 1205
//clear ___nl__int__182;
#line 1205
c_rt_lib0move(&___nl__im__184, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1205
___nl__bool__185 = ___nl__bool__1;
#line 1205
___nl__bool__185 = !___nl__bool__185;
#line 1205
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__181, ___nl__im__184, ___nl__im__172, ___nl__bool__185, ___ref___rec__2));
#line 1205
c_rt_lib0clear(&___nl__im__181);
#line 1205
c_rt_lib0clear(&___nl__im__184);
#line 1205
//clear ___nl__bool__185;
#line 1206
goto label_4;
#line 1206
label_4:
;
#line 1206
label_2:
;
#line 1207
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1207
goto label_3;
#line 1207
label_1:
;
#line 1208
___nl__int__189 = c_rt_lib0array_len(___nl__im__7);
#line 1208
___nl__int__190 = 1;
#line 1208
___nl__int__188 = ___nl__int__189 - ___nl__int__190;
#line 1208
//clear ___nl__int__189;
#line 1208
//clear ___nl__int__190;
#line 1208
c_rt_lib0move(&___nl__im__187, c_rt_lib0array_get(___nl__im__7, ___nl__int__188));
#line 1208
//clear ___nl__int__188;
#line 1208
c_rt_lib0move(&___nl__im__186, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__187));
#line 1208
c_rt_lib0clear(&___nl__im__187);
#line 1208
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__186));
#line 1208
c_rt_lib0clear(&___nl__im__186);
#line 1209
c_rt_lib0clear(&___nl__im__0);
#line 1209
//clear ___nl__bool__1;
#line 1209
c_rt_lib0clear(&___nl__im__3);
#line 1209
c_rt_lib0clear(&___nl__im__4);
#line 1209
c_rt_lib0clear(&___nl__im__7);
#line 1209
//clear ___nl__int__10;
#line 1209
//clear ___nl__int__11;
#line 1209
//clear ___nl__int__12;
#line 1209
//clear ___nl__bool__13;
#line 1209
//clear ___nl__int__14;
#line 1209
c_rt_lib0clear(&___nl__im__15);
#line 1209
//clear ___nl__bool__16;
#line 1209
c_rt_lib0clear(&___nl__im__17);
#line 1209
c_rt_lib0clear(&___nl__im__18);
#line 1209
c_rt_lib0clear(&___nl__im__19);
#line 1209
c_rt_lib0clear(&___nl__im__22);
#line 1209
c_rt_lib0clear(&___nl__im__42);
#line 1209
c_rt_lib0clear(&___nl__im__43);
#line 1209
c_rt_lib0clear(&___nl__im__44);
#line 1209
c_rt_lib0clear(&___nl__im__49);
#line 1209
c_rt_lib0clear(&___nl__im__62);
#line 1209
c_rt_lib0clear(&___nl__im__63);
#line 1209
c_rt_lib0clear(&___nl__im__66);
#line 1209
c_rt_lib0clear(&___nl__im__84);
#line 1209
c_rt_lib0clear(&___nl__im__85);
#line 1209
c_rt_lib0clear(&___nl__im__111);
#line 1209
c_rt_lib0clear(&___nl__im__112);
#line 1209
c_rt_lib0clear(&___nl__im__113);
#line 1209
c_rt_lib0clear(&___nl__im__131);
#line 1209
c_rt_lib0clear(&___nl__im__132);
#line 1209
c_rt_lib0clear(&___nl__im__145);
#line 1209
c_rt_lib0clear(&___nl__im__146);
#line 1209
c_rt_lib0clear(&___nl__im__147);
#line 1209
c_rt_lib0clear(&___nl__im__165);
#line 1209
c_rt_lib0clear(&___nl__im__166);
#line 1209
c_rt_lib0clear(&___nl__im__167);
#line 1209
c_rt_lib0clear(&___nl__im__172);
#line 1209
return ___nl__im__9;
}

ImmT  translator_priv0set_value_of_lvalue(translator0lvalue_values_t0type ___nl__im__0,bool ___nl__bool__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
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
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
bool  ___nl__bool__54 = false;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
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
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
bool  ___nl__bool__82 = false;
bool  ___nl__bool__83 = false;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
INT  ___nl__int__86 = 0;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
bool  ___nl__bool__89 = false;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
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
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
INT  ___nl__int__127 = 0;
#line 1214
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 1215
___nl__int__7 = 1;
#line 1215
___nl__int__6 = ___nl__int__3 - ___nl__int__7;
#line 1215
//clear ___nl__int__7;
#line 1215
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 1215
//clear ___nl__int__6;
#line 1215
___nl__int__10 = 1;
#line 1215
___nl__int__9 = ___nl__int__3 - ___nl__int__10;
#line 1215
//clear ___nl__int__10;
#line 1215
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 1215
//clear ___nl__int__9;
#line 1215
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(219)));
#line 1215
c_rt_lib0clear(&___nl__im__5);
#line 1215
c_rt_lib0clear(&___nl__im__8);
#line 1216
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1216
c_rt_lib0move(&___nl__im__13,___get_global_const(41));
#line 1216
c_rt_lib0move(&___nl__im__13, c_rt_lib0unary_minus(___nl__im__13));
#line 1216
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1216
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__12, ___get_global_const(218), ___nl__im__13, ___get_global_const(330), ___nl__im__14));
#line 1216
c_rt_lib0clear(&___nl__im__12);
#line 1216
c_rt_lib0clear(&___nl__im__13);
#line 1216
c_rt_lib0clear(&___nl__im__14);
#line 1217
___nl__int__16 = 2;
#line 1217
___nl__int__15 = ___nl__int__3 - ___nl__int__16;
#line 1217
//clear ___nl__int__16;
#line 1217
label_2:
;
#line 1217
___nl__int__18 = 0;
#line 1217
___nl__int__19 = ___nl__int__15 >= ___nl__int__18;
#line 1217
___nl__bool__17 = ___nl__int__19;
#line 1217
//clear ___nl__int__18;
#line 1217
//clear ___nl__int__19;
#line 1217
___nl__bool__17 = !___nl__bool__17;
#line 1217
if(___nl__bool__17){ goto label_1;}
#line 1218
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__15));
#line 1218
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(219));
#line 1218
if(___nl__bool__21){ goto label_5;}
#line 1220
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(564));
#line 1220
if(___nl__bool__21){ goto label_6;}
#line 1227
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(255));
#line 1227
if(___nl__bool__21){ goto label_7;}
#line 1229
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(1199));
#line 1229
if(___nl__bool__21){ goto label_8;}
#line 1236
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(371));
#line 1236
if(___nl__bool__21){ goto label_9;}
#line 1245
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(253));
#line 1245
if(___nl__bool__21){ goto label_10;}
#line 1247
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(903));
#line 1247
if(___nl__bool__21){ goto label_11;}
#line 1250
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(259));
#line 1250
if(___nl__bool__21){ goto label_12;}
#line 1252
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(257));
#line 1252
if(___nl__bool__21){ goto label_13;}
#line 1252
c_rt_lib0move(&___nl__im__22,___get_global_const(16));
#line 1252
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__20));
#line 1252
nl_die_arg(___nl__im__22);
#line 1218
label_5:
;
#line 1218
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(219)));
#line 1218
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1219
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 1219
nl_die_arg(___nl__im__25);
#line 1220
goto label_4;
#line 1220
label_6:
;
#line 1220
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(564)));
#line 1220
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1221
___nl__bool__28 = ___nl__bool__1;
#line 1221
___nl__bool__28 = !___nl__bool__28;
#line 1221
___nl__bool__29 = !___nl__bool__28;
#line 1221
if(___nl__bool__29){ goto label_16;}
#line 1221
___nl__int__31 = 2;
#line 1221
___nl__int__30 = ___nl__int__3 - ___nl__int__31;
#line 1221
//clear ___nl__int__31;
#line 1221
___nl__int__32 = ___nl__int__15 == ___nl__int__30;
#line 1221
___nl__bool__28 = ___nl__int__32;
#line 1221
//clear ___nl__int__30;
#line 1221
//clear ___nl__int__32;
#line 1221
label_16:
;
#line 1221
//clear ___nl__bool__29;
#line 1221
___nl__bool__28 = !___nl__bool__28;
#line 1221
if(___nl__bool__28){ goto label_15;}
#line 1222
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(219)));
#line 1222
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(564)));
#line 1222
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__im__33, ___nl__im__34, ___nl__im__4, ___ref___rec__2));
#line 1222
c_rt_lib0clear(&___nl__im__33);
#line 1222
c_rt_lib0clear(&___nl__im__34);
#line 1223
goto label_14;
#line 1223
label_15:
;
#line 1224
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1224
c_rt_lib0move(&___nl__im__37,___get_global_const(41));
#line 1224
c_rt_lib0move(&___nl__im__37, c_rt_lib0unary_minus(___nl__im__37));
#line 1224
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1224
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__36, ___get_global_const(218), ___nl__im__37, ___get_global_const(330), ___nl__im__38));
#line 1224
c_rt_lib0clear(&___nl__im__36);
#line 1224
c_rt_lib0clear(&___nl__im__37);
#line 1224
c_rt_lib0clear(&___nl__im__38);
#line 1224
c_rt_lib0move(&___nl__im__39,___get_global_const(1222));
#line 1224
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(219)));
#line 1224
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__42));
#line 1224
c_rt_lib0clear(&___nl__im__42);
#line 1224
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(564)));
#line 1224
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__44));
#line 1224
c_rt_lib0clear(&___nl__im__44);
#line 1224
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1224
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(3, ___nl__im__41, ___nl__im__43, ___nl__im__45));
#line 1224
c_rt_lib0clear(&___nl__im__41);
#line 1224
c_rt_lib0clear(&___nl__im__43);
#line 1224
c_rt_lib0clear(&___nl__im__45);
#line 1224
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__35, ___nl__im__39, ___nl__im__40, ___ref___rec__2));
#line 1224
c_rt_lib0clear(&___nl__im__35);
#line 1224
c_rt_lib0clear(&___nl__im__39);
#line 1224
c_rt_lib0clear(&___nl__im__40);
#line 1225
goto label_14;
#line 1225
label_14:
;
#line 1225
//clear ___nl__bool__28;
#line 1226
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(219)));
#line 1227
goto label_4;
#line 1227
label_7:
;
#line 1227
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(255)));
#line 1227
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 1228
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(1211)));
#line 1228
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(1210)));
#line 1228
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(564)));
#line 1228
c_rt_lib0delete(translator_priv0release_index(___nl__im__48, ___nl__im__49, ___nl__im__50, ___ref___rec__2));
#line 1228
c_rt_lib0clear(&___nl__im__48);
#line 1228
c_rt_lib0clear(&___nl__im__49);
#line 1228
c_rt_lib0clear(&___nl__im__50);
#line 1229
goto label_4;
#line 1229
label_8:
;
#line 1229
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(1199)));
#line 1229
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 1230
___nl__bool__53 = ___nl__bool__1;
#line 1230
___nl__bool__53 = !___nl__bool__53;
#line 1230
___nl__bool__54 = !___nl__bool__53;
#line 1230
if(___nl__bool__54){ goto label_19;}
#line 1230
___nl__int__56 = 2;
#line 1230
___nl__int__55 = ___nl__int__3 - ___nl__int__56;
#line 1230
//clear ___nl__int__56;
#line 1230
___nl__int__57 = ___nl__int__15 == ___nl__int__55;
#line 1230
___nl__bool__53 = ___nl__int__57;
#line 1230
//clear ___nl__int__55;
#line 1230
//clear ___nl__int__57;
#line 1230
label_19:
;
#line 1230
//clear ___nl__bool__54;
#line 1230
___nl__bool__53 = !___nl__bool__53;
#line 1230
if(___nl__bool__53){ goto label_18;}
#line 1231
c_rt_lib0move(&___nl__im__59, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1231
c_rt_lib0move(&___nl__im__60,___get_global_const(41));
#line 1231
c_rt_lib0move(&___nl__im__60, c_rt_lib0unary_minus(___nl__im__60));
#line 1231
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1231
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__59, ___get_global_const(218), ___nl__im__60, ___get_global_const(330), ___nl__im__61));
#line 1231
c_rt_lib0clear(&___nl__im__59);
#line 1231
c_rt_lib0clear(&___nl__im__60);
#line 1231
c_rt_lib0clear(&___nl__im__61);
#line 1231
c_rt_lib0move(&___nl__im__62,___get_global_const(1223));
#line 1231
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(219)));
#line 1231
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__65));
#line 1231
c_rt_lib0clear(&___nl__im__65);
#line 1231
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(371)));
#line 1231
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__67));
#line 1231
c_rt_lib0clear(&___nl__im__67);
#line 1231
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1231
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(3, ___nl__im__64, ___nl__im__66, ___nl__im__68));
#line 1231
c_rt_lib0clear(&___nl__im__64);
#line 1231
c_rt_lib0clear(&___nl__im__66);
#line 1231
c_rt_lib0clear(&___nl__im__68);
#line 1231
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__58, ___nl__im__62, ___nl__im__63, ___ref___rec__2));
#line 1231
c_rt_lib0clear(&___nl__im__58);
#line 1231
c_rt_lib0clear(&___nl__im__62);
#line 1231
c_rt_lib0clear(&___nl__im__63);
#line 1232
goto label_17;
#line 1232
label_18:
;
#line 1233
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1233
c_rt_lib0move(&___nl__im__71,___get_global_const(41));
#line 1233
c_rt_lib0move(&___nl__im__71, c_rt_lib0unary_minus(___nl__im__71));
#line 1233
c_rt_lib0move(&___nl__im__72, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1233
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__70, ___get_global_const(218), ___nl__im__71, ___get_global_const(330), ___nl__im__72));
#line 1233
c_rt_lib0clear(&___nl__im__70);
#line 1233
c_rt_lib0clear(&___nl__im__71);
#line 1233
c_rt_lib0clear(&___nl__im__72);
#line 1233
c_rt_lib0move(&___nl__im__73,___get_global_const(1224));
#line 1233
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(219)));
#line 1233
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__76));
#line 1233
c_rt_lib0clear(&___nl__im__76);
#line 1233
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(371)));
#line 1233
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__78));
#line 1233
c_rt_lib0clear(&___nl__im__78);
#line 1233
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1233
c_rt_lib0move(&___nl__im__74, c_rt_lib0array_mk(3, ___nl__im__75, ___nl__im__77, ___nl__im__79));
#line 1233
c_rt_lib0clear(&___nl__im__75);
#line 1233
c_rt_lib0clear(&___nl__im__77);
#line 1233
c_rt_lib0clear(&___nl__im__79);
#line 1233
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__69, ___nl__im__73, ___nl__im__74, ___ref___rec__2));
#line 1233
c_rt_lib0clear(&___nl__im__69);
#line 1233
c_rt_lib0clear(&___nl__im__73);
#line 1233
c_rt_lib0clear(&___nl__im__74);
#line 1234
goto label_17;
#line 1234
label_17:
;
#line 1234
//clear ___nl__bool__53;
#line 1235
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(219)));
#line 1236
goto label_4;
#line 1236
label_9:
;
#line 1236
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(371)));
#line 1236
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1237
___nl__bool__82 = ___nl__bool__1;
#line 1237
___nl__bool__82 = !___nl__bool__82;
#line 1237
___nl__bool__83 = !___nl__bool__82;
#line 1237
if(___nl__bool__83){ goto label_22;}
#line 1237
___nl__int__85 = 2;
#line 1237
___nl__int__84 = ___nl__int__3 - ___nl__int__85;
#line 1237
//clear ___nl__int__85;
#line 1237
___nl__int__86 = ___nl__int__15 == ___nl__int__84;
#line 1237
___nl__bool__82 = ___nl__int__86;
#line 1237
//clear ___nl__int__84;
#line 1237
//clear ___nl__int__86;
#line 1237
label_22:
;
#line 1237
//clear ___nl__bool__83;
#line 1237
___nl__bool__82 = !___nl__bool__82;
#line 1237
if(___nl__bool__82){ goto label_21;}
#line 1238
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(219)));
#line 1238
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(371)));
#line 1238
c_rt_lib0delete(translator_priv0print_set_value(___nl__im__87, ___nl__im__88, ___nl__im__4, ___ref___rec__2));
#line 1238
c_rt_lib0clear(&___nl__im__87);
#line 1238
c_rt_lib0clear(&___nl__im__88);
#line 1239
goto label_20;
#line 1239
label_21:
;
#line 1240
c_rt_lib0move(&___nl__im__90, nlasm0is_empty(___nl__im__11));
#line 1240
___nl__bool__89 = c_rt_lib0check_true_native(___nl__im__90);
#line 1240
c_rt_lib0clear(&___nl__im__90);
#line 1240
___nl__bool__89 = !___nl__bool__89;
#line 1240
if(___nl__bool__89){ goto label_24;}
#line 1240
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 1240
c_rt_lib0move(&___nl__im__11, translator_priv0new_register(___ref___rec__2, ___nl__im__91));
#line 1240
c_rt_lib0clear(&___nl__im__91);
#line 1240
goto label_23;
#line 1240
label_24:
;
#line 1240
label_23:
;
#line 1240
//clear ___nl__bool__89;
#line 1241
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(371)));
#line 1241
c_rt_lib0delete(translator_priv0load_const(___nl__im__92, ___nl__im__11, ___ref___rec__2));
#line 1241
c_rt_lib0clear(&___nl__im__92);
#line 1242
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1242
c_rt_lib0move(&___nl__im__95,___get_global_const(41));
#line 1242
c_rt_lib0move(&___nl__im__95, c_rt_lib0unary_minus(___nl__im__95));
#line 1242
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1242
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__94, ___get_global_const(218), ___nl__im__95, ___get_global_const(330), ___nl__im__96));
#line 1242
c_rt_lib0clear(&___nl__im__94);
#line 1242
c_rt_lib0clear(&___nl__im__95);
#line 1242
c_rt_lib0clear(&___nl__im__96);
#line 1242
c_rt_lib0move(&___nl__im__97,___get_global_const(1224));
#line 1242
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(219)));
#line 1242
c_rt_lib0move(&___nl__im__99, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__100));
#line 1242
c_rt_lib0clear(&___nl__im__100);
#line 1242
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__11));
#line 1242
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1242
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(3, ___nl__im__99, ___nl__im__101, ___nl__im__102));
#line 1242
c_rt_lib0clear(&___nl__im__99);
#line 1242
c_rt_lib0clear(&___nl__im__101);
#line 1242
c_rt_lib0clear(&___nl__im__102);
#line 1242
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__93, ___nl__im__97, ___nl__im__98, ___ref___rec__2));
#line 1242
c_rt_lib0clear(&___nl__im__93);
#line 1242
c_rt_lib0clear(&___nl__im__97);
#line 1242
c_rt_lib0clear(&___nl__im__98);
#line 1243
goto label_20;
#line 1243
label_20:
;
#line 1243
//clear ___nl__bool__82;
#line 1244
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(219)));
#line 1245
goto label_4;
#line 1245
label_10:
;
#line 1245
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(253)));
#line 1245
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 1246
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_const(1211)));
#line 1246
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_const(1210)));
#line 1246
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__103, ___get_global_const(562)));
#line 1246
c_rt_lib0delete(translator_priv0release_field(___nl__im__105, ___nl__im__106, ___nl__im__107, ___ref___rec__2));
#line 1246
c_rt_lib0clear(&___nl__im__105);
#line 1246
c_rt_lib0clear(&___nl__im__106);
#line 1246
c_rt_lib0clear(&___nl__im__107);
#line 1247
goto label_4;
#line 1247
label_11:
;
#line 1247
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(903)));
#line 1247
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 1248
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(219)));
#line 1248
c_rt_lib0move(&___nl__im__113, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__4));
#line 1248
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(534)));
#line 1248
c_rt_lib0move(&___nl__im__115,___get_global_const(41));
#line 1248
c_rt_lib0move(&___nl__im__115, c_rt_lib0unary_minus(___nl__im__115));
#line 1248
c_rt_lib0move(&___nl__im__116, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 1248
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__112, ___get_global_const(75), ___nl__im__113, ___get_global_const(534), ___nl__im__114, ___get_global_const(521), ___nl__im__115, ___get_global_const(539), ___nl__im__116));
#line 1248
c_rt_lib0clear(&___nl__im__112);
#line 1248
c_rt_lib0clear(&___nl__im__113);
#line 1248
c_rt_lib0clear(&___nl__im__114);
#line 1248
c_rt_lib0clear(&___nl__im__115);
#line 1248
c_rt_lib0clear(&___nl__im__116);
#line 1248
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__111));
#line 1248
c_rt_lib0clear(&___nl__im__111);
#line 1248
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__110));
#line 1248
c_rt_lib0clear(&___nl__im__110);
#line 1249
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(219)));
#line 1250
goto label_4;
#line 1250
label_12:
;
#line 1250
c_rt_lib0move(&___nl__im__118, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(259)));
#line 1250
c_rt_lib0copy(&___nl__im__117, ___nl__im__118);
#line 1251
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(1211)));
#line 1251
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(1210)));
#line 1251
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(534)));
#line 1251
c_rt_lib0delete(translator_priv0release_variant(___nl__im__119, ___nl__im__120, ___nl__im__121, ___ref___rec__2));
#line 1251
c_rt_lib0clear(&___nl__im__119);
#line 1251
c_rt_lib0clear(&___nl__im__120);
#line 1251
c_rt_lib0clear(&___nl__im__121);
#line 1252
goto label_4;
#line 1252
label_13:
;
#line 1252
c_rt_lib0move(&___nl__im__123, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(257)));
#line 1252
c_rt_lib0copy(&___nl__im__122, ___nl__im__123);
#line 1253
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_const(1211)));
#line 1253
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_const(1210)));
#line 1253
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_const(564)));
#line 1253
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__124, ___nl__im__125, ___nl__im__126, ___ref___rec__2));
#line 1253
c_rt_lib0clear(&___nl__im__124);
#line 1253
c_rt_lib0clear(&___nl__im__125);
#line 1253
c_rt_lib0clear(&___nl__im__126);
#line 1254
goto label_4;
#line 1254
label_4:
;
#line 1254
label_3:
;
#line 1217
___nl__int__127 = 1;
#line 1217
___nl__int__15 = ___nl__int__15 - ___nl__int__127;
#line 1217
//clear ___nl__int__127;
#line 1255
goto label_2;
#line 1255
label_1:
;
#line 1255
c_rt_lib0clear(&___nl__im__0);
#line 1255
//clear ___nl__bool__1;
#line 1255
//clear ___nl__int__3;
#line 1255
c_rt_lib0clear(&___nl__im__4);
#line 1255
c_rt_lib0clear(&___nl__im__11);
#line 1255
//clear ___nl__int__15;
#line 1255
//clear ___nl__bool__17;
#line 1255
c_rt_lib0clear(&___nl__im__20);
#line 1255
//clear ___nl__bool__21;
#line 1255
c_rt_lib0clear(&___nl__im__22);
#line 1255
c_rt_lib0clear(&___nl__im__23);
#line 1255
c_rt_lib0clear(&___nl__im__24);
#line 1255
c_rt_lib0clear(&___nl__im__25);
#line 1255
c_rt_lib0clear(&___nl__im__26);
#line 1255
c_rt_lib0clear(&___nl__im__27);
#line 1255
c_rt_lib0clear(&___nl__im__46);
#line 1255
c_rt_lib0clear(&___nl__im__47);
#line 1255
c_rt_lib0clear(&___nl__im__51);
#line 1255
c_rt_lib0clear(&___nl__im__52);
#line 1255
c_rt_lib0clear(&___nl__im__80);
#line 1255
c_rt_lib0clear(&___nl__im__81);
#line 1255
c_rt_lib0clear(&___nl__im__103);
#line 1255
c_rt_lib0clear(&___nl__im__104);
#line 1255
c_rt_lib0clear(&___nl__im__108);
#line 1255
c_rt_lib0clear(&___nl__im__109);
#line 1255
c_rt_lib0clear(&___nl__im__117);
#line 1255
c_rt_lib0clear(&___nl__im__118);
#line 1255
c_rt_lib0clear(&___nl__im__122);
#line 1255
c_rt_lib0clear(&___nl__im__123);
#line 1255
return NULL;
}

ImmT  translator_priv0make_string(translator0string_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
#line 1259
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 1260
___nl__int__3 = 0;
#line 1261
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(130)));
#line 1261
___nl__int__6 = 0;
#line 1261
___nl__int__7 = 1;
#line 1261
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 1261
label_3:
;
#line 1261
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 1261
___nl__bool__9 = ___nl__int__10;
#line 1261
if(___nl__bool__9){ goto label_1;}
#line 1261
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 1261
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 1262
___nl__int__13 = 0;
#line 1262
___nl__int__14 = ___nl__int__3 > ___nl__int__13;
#line 1262
___nl__bool__12 = ___nl__int__14;
#line 1262
//clear ___nl__int__13;
#line 1262
//clear ___nl__int__14;
#line 1262
___nl__bool__12 = !___nl__bool__12;
#line 1262
if(___nl__bool__12){ goto label_5;}
#line 1262
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1262
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 1262
c_rt_lib0clear(&___nl__im__15);
#line 1262
goto label_4;
#line 1262
label_5:
;
#line 1262
label_4:
;
#line 1262
//clear ___nl__bool__12;
#line 1263
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__5));
#line 1264
___nl__int__16 = 1;
#line 1264
___nl__int__3 = ___nl__int__3 + ___nl__int__16;
#line 1264
//clear ___nl__int__16;
#line 1264
c_rt_lib0clear(&___nl__im__5);
#line 1264
label_2:
;
#line 1265
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1265
goto label_3;
#line 1265
label_1:
;
#line 1266
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(918)));
#line 1266
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(917));
#line 1266
if(___nl__bool__18){ goto label_7;}
#line 1268
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(916));
#line 1268
if(___nl__bool__18){ goto label_8;}
#line 1268
c_rt_lib0move(&___nl__im__19,___get_global_const(16));
#line 1268
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__17));
#line 1268
nl_die_arg(___nl__im__19);
#line 1266
label_7:
;
#line 1267
c_rt_lib0move(&___nl__im__20, string0lf());
#line 1267
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__20));
#line 1267
c_rt_lib0clear(&___nl__im__20);
#line 1268
goto label_6;
#line 1268
label_8:
;
#line 1269
goto label_6;
#line 1269
label_6:
;
#line 1270
c_rt_lib0clear(&___nl__im__0);
#line 1270
//clear ___nl__int__3;
#line 1270
c_rt_lib0clear(&___nl__im__4);
#line 1270
c_rt_lib0clear(&___nl__im__5);
#line 1270
//clear ___nl__int__6;
#line 1270
//clear ___nl__int__7;
#line 1270
//clear ___nl__int__8;
#line 1270
//clear ___nl__bool__9;
#line 1270
//clear ___nl__int__10;
#line 1270
c_rt_lib0clear(&___nl__im__11);
#line 1270
c_rt_lib0clear(&___nl__im__17);
#line 1270
//clear ___nl__bool__18;
#line 1270
c_rt_lib0clear(&___nl__im__19);
#line 1270
return ___nl__im__2;
}

ImmT  translator_priv0print_ternary_op(nast0ternary_op_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 1274
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(514)));
#line 1274
c_rt_lib0move(&___nl__im__5,___get_global_const(900));
#line 1274
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 1274
c_rt_lib0clear(&___nl__im__4);
#line 1274
c_rt_lib0clear(&___nl__im__5);
#line 1274
___nl__bool__3 = !___nl__bool__3;
#line 1274
___nl__bool__3 = !___nl__bool__3;
#line 1274
if(___nl__bool__3){ goto label_2;}
#line 1274
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 1274
nl_die_arg(___nl__im__6);
#line 1274
goto label_1;
#line 1274
label_2:
;
#line 1274
label_1:
;
#line 1274
//clear ___nl__bool__3;
#line 1274
c_rt_lib0clear(&___nl__im__6);
#line 1275
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__2);
#line 1276
___nl__int__8 = translator_priv0get_sim_label(___ref___rec__2);
#line 1277
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(886)));
#line 1277
c_rt_lib0move(&___nl__im__9, translator_priv0dest_val(___nl__im__10, ___ref___rec__2));
#line 1277
c_rt_lib0clear(&___nl__im__10);
#line 1278
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__8, ___nl__im__9, ___ref___rec__2));
#line 1279
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(888)));
#line 1279
c_rt_lib0delete(translator_priv0print_val(___nl__im__11, ___nl__im__1, ___ref___rec__2));
#line 1279
c_rt_lib0clear(&___nl__im__11);
#line 1280
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__7));
#line 1280
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__13));
#line 1280
c_rt_lib0clear(&___nl__im__13);
#line 1280
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__12));
#line 1280
c_rt_lib0clear(&___nl__im__12);
#line 1281
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__8, ___ref___rec__2));
#line 1282
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(887)));
#line 1282
c_rt_lib0delete(translator_priv0print_val(___nl__im__14, ___nl__im__1, ___ref___rec__2));
#line 1282
c_rt_lib0clear(&___nl__im__14);
#line 1283
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__2));
#line 1283
c_rt_lib0clear(&___nl__im__0);
#line 1283
c_rt_lib0clear(&___nl__im__1);
#line 1283
//clear ___nl__int__7;
#line 1283
//clear ___nl__int__8;
#line 1283
c_rt_lib0clear(&___nl__im__9);
#line 1283
return NULL;
}

ImmT  translator_priv0print_die(ImmT  ___nl__im__0,nast0debug_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 1287
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1287
c_rt_lib0move(&___nl__im__3, translator_priv0new_register(___ref___rec__2, ___nl__im__4));
#line 1287
c_rt_lib0clear(&___nl__im__4);
#line 1288
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__0));
#line 1288
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 1288
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__8));
#line 1288
c_rt_lib0clear(&___nl__im__8);
#line 1288
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__1, ___get_global_const(219), ___nl__im__6, ___get_global_const(95), ___nl__im__7));
#line 1288
c_rt_lib0clear(&___nl__im__6);
#line 1288
c_rt_lib0clear(&___nl__im__7);
#line 1288
c_rt_lib0delete(translator_priv0print_val(___nl__im__5, ___nl__im__3, ___ref___rec__2));
#line 1288
c_rt_lib0clear(&___nl__im__5);
#line 1289
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__3));
#line 1289
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 1289
c_rt_lib0clear(&___nl__im__9);
#line 1289
c_rt_lib0clear(&___nl__im__0);
#line 1289
c_rt_lib0clear(&___nl__im__1);
#line 1289
c_rt_lib0clear(&___nl__im__3);
#line 1289
return NULL;
}

ImmT  translator_priv0print_return(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
#line 1293
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1294
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1294
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(859));
#line 1294
c_rt_lib0clear(&___nl__im__4);
#line 1294
___nl__bool__3 = !___nl__bool__3;
#line 1294
___nl__bool__3 = !___nl__bool__3;
#line 1294
if(___nl__bool__3){ goto label_2;}
#line 1295
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__0, ___ref___rec__1));
#line 1296
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 1296
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1296
___nl__im_ptr__10 = NULL;
#line 1296
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(387)));
#line 1296
c_rt_lib0clear(&___nl__im__9);
#line 1296
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1296
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1296
___nl__im_ptr__13 = NULL;
#line 1296
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(388)));
#line 1296
c_rt_lib0clear(&___nl__im__12);
#line 1296
c_rt_lib0move(&___nl__im__7, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__11));
#line 1296
c_rt_lib0clear(&___nl__im__8);
#line 1296
c_rt_lib0clear(&___nl__im__11);
#line 1296
c_rt_lib0move(&___nl__im__6, translator_priv0get_cast(___nl__im__5, ___nl__im__7, ___ref___rec__1));
#line 1296
c_rt_lib0clear(&___nl__im__7);
#line 1297
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__6));
#line 1298
goto label_1;
#line 1298
label_2:
;
#line 1298
label_1:
;
#line 1298
//clear ___nl__bool__3;
#line 1298
c_rt_lib0clear(&___nl__im__5);
#line 1298
c_rt_lib0clear(&___nl__im__6);
#line 1299
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__2, ___ref___rec__1));
#line 1299
c_rt_lib0clear(&___nl__im__0);
#line 1299
c_rt_lib0clear(&___nl__im__2);
#line 1299
return NULL;
}

ImmT  translator_priv0print_safe_return(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT * ___nl__im_ptr__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT * ___nl__im_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT * ___nl__im_ptr__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
bool  ___nl__bool__35 = false;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
bool  ___nl__bool__48 = false;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
#line 1303
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1303
c_rt_lib0move(&___nl__im__4,___get_global_const(41));
#line 1303
c_rt_lib0move(&___nl__im__4, c_rt_lib0unary_minus(___nl__im__4));
#line 1303
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1303
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__3, ___get_global_const(218), ___nl__im__4, ___get_global_const(330), ___nl__im__5));
#line 1303
c_rt_lib0clear(&___nl__im__3);
#line 1303
c_rt_lib0clear(&___nl__im__4);
#line 1303
c_rt_lib0clear(&___nl__im__5);
#line 1304
___nl__im_ptr__8 = &((*___ref___rec__1).result0field);
#line 1304
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1304
___nl__im_ptr__8 = NULL;
#line 1304
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(214)));
#line 1304
c_rt_lib0clear(&___nl__im__7);
#line 1305
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(224));
#line 1305
___nl__bool__9 = !___nl__bool__9;
#line 1305
if(___nl__bool__9){ goto label_2;}
#line 1306
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(224)));
#line 1307
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(218)));
#line 1307
___nl__int__12 = getIntFromImm(___nl__im__13);
#line 1307
c_rt_lib0clear(&___nl__im__13);
#line 1307
___nl__int__14 = c_rt_lib0array_len(___nl__im__6);
#line 1307
___nl__int__15 = ___nl__int__12 < ___nl__int__14;
#line 1307
___nl__bool__10 = ___nl__int__15;
#line 1307
//clear ___nl__int__12;
#line 1307
//clear ___nl__int__14;
#line 1307
//clear ___nl__int__15;
#line 1307
___nl__bool__11 = !___nl__bool__10;
#line 1307
if(___nl__bool__11){ goto label_5;}
#line 1307
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(218)));
#line 1307
___nl__int__18 = getIntFromImm(___nl__im__19);
#line 1307
c_rt_lib0clear(&___nl__im__19);
#line 1307
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__6, ___nl__int__18));
#line 1307
//clear ___nl__int__18;
#line 1307
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(332)));
#line 1307
c_rt_lib0clear(&___nl__im__17);
#line 1307
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(40));
#line 1307
c_rt_lib0clear(&___nl__im__16);
#line 1307
label_5:
;
#line 1307
//clear ___nl__bool__11;
#line 1307
___nl__bool__10 = !___nl__bool__10;
#line 1307
if(___nl__bool__10){ goto label_4;}
#line 1308
___nl__im_ptr__23 = &((*___ref___rec__1).result0field);
#line 1308
c_rt_lib0copy(&___nl__im__22, (*___nl__im_ptr__23));
#line 1308
___nl__im_ptr__23 = NULL;
#line 1308
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(387)));
#line 1308
c_rt_lib0clear(&___nl__im__22);
#line 1308
___nl__im_ptr__26 = &((*___ref___rec__1).logic0field);
#line 1308
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 1308
___nl__im_ptr__26 = NULL;
#line 1308
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(388)));
#line 1308
c_rt_lib0clear(&___nl__im__25);
#line 1308
c_rt_lib0move(&___nl__im__20, translator_priv0var_type_to_reg_type(___nl__im__21, ___nl__im__24));
#line 1308
c_rt_lib0clear(&___nl__im__21);
#line 1308
c_rt_lib0clear(&___nl__im__24);
#line 1308
c_rt_lib0move(&___nl__im__2, translator_priv0new_register(___ref___rec__1, ___nl__im__20));
#line 1308
c_rt_lib0clear(&___nl__im__20);
#line 1309
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(224)));
#line 1309
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__27, ___ref___rec__1));
#line 1309
c_rt_lib0clear(&___nl__im__27);
#line 1310
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__2));
#line 1311
goto label_3;
#line 1311
label_4:
;
#line 1311
label_3:
;
#line 1311
//clear ___nl__bool__10;
#line 1312
goto label_1;
#line 1312
label_2:
;
#line 1312
label_1:
;
#line 1312
//clear ___nl__bool__9;
#line 1313
___nl__im_ptr__30 = &((*___ref___rec__1).logic0field);
#line 1313
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 1313
___nl__im_ptr__30 = NULL;
#line 1313
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(215)));
#line 1313
c_rt_lib0clear(&___nl__im__29);
#line 1313
___nl__int__32 = 0;
#line 1313
___nl__int__33 = 1;
#line 1313
___nl__int__34 = c_rt_lib0array_len(___nl__im__28);
#line 1313
label_8:
;
#line 1313
___nl__int__36 = ___nl__int__32 >= ___nl__int__34;
#line 1313
___nl__bool__35 = ___nl__int__36;
#line 1313
if(___nl__bool__35){ goto label_6;}
#line 1313
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__28, ___nl__int__32));
#line 1313
c_rt_lib0copy(&___nl__im__31, ___nl__im__37);
#line 1314
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_const(218)));
#line 1314
___nl__int__41 = c_rt_lib0array_len(___nl__im__6);
#line 1314
___nl__int__42 = getIntFromImm(___nl__im__40);
#line 1314
___nl__int__43 = ___nl__int__42 < ___nl__int__41;
#line 1314
___nl__bool__38 = ___nl__int__43;
#line 1314
c_rt_lib0clear(&___nl__im__40);
#line 1314
//clear ___nl__int__41;
#line 1314
//clear ___nl__int__42;
#line 1314
//clear ___nl__int__43;
#line 1314
___nl__bool__39 = !___nl__bool__38;
#line 1314
if(___nl__bool__39){ goto label_11;}
#line 1314
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_const(218)));
#line 1314
___nl__int__47 = getIntFromImm(___nl__im__46);
#line 1314
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__6, ___nl__int__47));
#line 1314
c_rt_lib0clear(&___nl__im__46);
#line 1314
//clear ___nl__int__47;
#line 1314
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_const(332)));
#line 1314
c_rt_lib0clear(&___nl__im__45);
#line 1314
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__44, ___get_global_const(40));
#line 1314
c_rt_lib0clear(&___nl__im__44);
#line 1314
label_11:
;
#line 1314
//clear ___nl__bool__39;
#line 1314
___nl__bool__38 = !___nl__bool__38;
#line 1314
if(___nl__bool__38){ goto label_10;}
#line 1314
goto label_7;
#line 1314
goto label_9;
#line 1314
label_10:
;
#line 1314
label_9:
;
#line 1314
//clear ___nl__bool__38;
#line 1315
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_const(218)));
#line 1315
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(218)));
#line 1315
___nl__int__50 = getIntFromImm(___nl__im__51);
#line 1315
c_rt_lib0clear(&___nl__im__51);
#line 1315
___nl__int__52 = getIntFromImm(___nl__im__49);
#line 1315
___nl__int__53 = ___nl__int__52 == ___nl__int__50;
#line 1315
___nl__bool__48 = ___nl__int__53;
#line 1315
c_rt_lib0clear(&___nl__im__49);
#line 1315
//clear ___nl__int__50;
#line 1315
//clear ___nl__int__52;
#line 1315
//clear ___nl__int__53;
#line 1315
___nl__bool__48 = !___nl__bool__48;
#line 1315
if(___nl__bool__48){ goto label_13;}
#line 1315
goto label_7;
#line 1315
goto label_12;
#line 1315
label_13:
;
#line 1315
label_12:
;
#line 1315
//clear ___nl__bool__48;
#line 1316
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__31, ___ref___rec__1));
#line 1316
c_rt_lib0clear(&___nl__im__31);
#line 1316
label_7:
;
#line 1317
___nl__int__32 = ___nl__int__32 + ___nl__int__33;
#line 1317
goto label_8;
#line 1317
label_6:
;
#line 1318
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__0));
#line 1318
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__54));
#line 1318
c_rt_lib0clear(&___nl__im__54);
#line 1318
c_rt_lib0clear(&___nl__im__0);
#line 1318
c_rt_lib0clear(&___nl__im__2);
#line 1318
c_rt_lib0clear(&___nl__im__6);
#line 1318
c_rt_lib0clear(&___nl__im__28);
#line 1318
c_rt_lib0clear(&___nl__im__31);
#line 1318
//clear ___nl__int__32;
#line 1318
//clear ___nl__int__33;
#line 1318
//clear ___nl__int__34;
#line 1318
//clear ___nl__bool__35;
#line 1318
//clear ___nl__int__36;
#line 1318
c_rt_lib0clear(&___nl__im__37);
#line 1318
return NULL;
}

nlasm0reg_t0type translator_priv0dest_val(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT * ___nl__im_ptr__22 = NULL;
#line 1322
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1322
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(463));
#line 1322
c_rt_lib0clear(&___nl__im__3);
#line 1322
___nl__bool__2 = !___nl__bool__2;
#line 1322
if(___nl__bool__2){ goto label_2;}
#line 1323
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1323
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1323
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(463)));
#line 1323
c_rt_lib0clear(&___nl__im__6);
#line 1323
c_rt_lib0clear(&___nl__im__7);
#line 1323
c_rt_lib0move(&___nl__im__4, translator_priv0get_var_register(___nl__im__5, ___ref___rec__1));
#line 1323
c_rt_lib0clear(&___nl__im__5);
#line 1323
c_rt_lib0clear(&___nl__im__0);
#line 1323
//clear ___nl__bool__2;
#line 1323
return ___nl__im__4;
#line 1324
goto label_1;
#line 1324
label_2:
;
#line 1324
label_1:
;
#line 1324
//clear ___nl__bool__2;
#line 1324
c_rt_lib0clear(&___nl__im__4);
#line 1325
c_rt_lib0move(&___nl__im__8, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1326
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1327
label_4:
;
#line 1327
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(7));
#line 1327
___nl__bool__10 = !___nl__bool__10;
#line 1327
if(___nl__bool__10){ goto label_3;}
#line 1328
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1328
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1328
___nl__im_ptr__13 = NULL;
#line 1328
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(388)));
#line 1328
c_rt_lib0clear(&___nl__im__12);
#line 1328
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(7)));
#line 1328
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__11, ___nl__im__14));
#line 1328
c_rt_lib0clear(&___nl__im__11);
#line 1328
c_rt_lib0clear(&___nl__im__14);
#line 1329
goto label_4;
#line 1329
label_3:
;
#line 1331
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1331
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(234));
#line 1331
c_rt_lib0clear(&___nl__im__18);
#line 1331
___nl__bool__17 = !___nl__bool__16;
#line 1331
if(___nl__bool__17){ goto label_7;}
#line 1331
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1331
___nl__im_ptr__22 = &((*___ref___rec__1).logic0field);
#line 1331
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1331
___nl__im_ptr__22 = NULL;
#line 1331
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(388)));
#line 1331
c_rt_lib0clear(&___nl__im__21);
#line 1331
___nl__bool__16 = tct0is_own_type(___nl__im__19, ___nl__im__20);
#line 1331
c_rt_lib0clear(&___nl__im__19);
#line 1331
c_rt_lib0clear(&___nl__im__20);
#line 1331
label_7:
;
#line 1331
//clear ___nl__bool__17;
#line 1331
___nl__bool__16 = !___nl__bool__16;
#line 1331
if(___nl__bool__16){ goto label_6;}
#line 1332
c_rt_lib0move(&___nl__im__15, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__8));
#line 1333
goto label_5;
#line 1333
label_6:
;
#line 1334
c_rt_lib0move(&___nl__im__15, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 1335
goto label_5;
#line 1335
label_5:
;
#line 1335
//clear ___nl__bool__16;
#line 1336
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__15, ___ref___rec__1));
#line 1337
c_rt_lib0clear(&___nl__im__0);
#line 1337
c_rt_lib0clear(&___nl__im__8);
#line 1337
c_rt_lib0clear(&___nl__im__9);
#line 1337
//clear ___nl__bool__10;
#line 1337
return ___nl__im__15;
}

nlasm0reg_t0type translator_priv0def_val(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
#line 1342
c_rt_lib0move(&___nl__im__5, nlasm0is_empty(___nl__im__1));
#line 1342
___nl__bool__4 = c_rt_lib0check_true_native(___nl__im__5);
#line 1342
c_rt_lib0clear(&___nl__im__5);
#line 1342
___nl__bool__4 = !___nl__bool__4;
#line 1342
if(___nl__bool__4){ goto label_2;}
#line 1342
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 1342
goto label_1;
#line 1342
label_2:
;
#line 1342
label_1:
;
#line 1342
//clear ___nl__bool__4;
#line 1343
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__3));
#line 1344
c_rt_lib0clear(&___nl__im__0);
#line 1344
c_rt_lib0clear(&___nl__im__2);
#line 1344
return ___nl__im__1;
}

nlasm0reg_t0type translator_priv0calc_val(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT * ___nl__im_ptr__14 = NULL;
#line 1348
c_rt_lib0move(&___nl__im__2, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1349
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1349
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(463));
#line 1349
c_rt_lib0clear(&___nl__im__4);
#line 1349
___nl__bool__3 = !___nl__bool__3;
#line 1349
if(___nl__bool__3){ goto label_2;}
#line 1350
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1350
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1350
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(463)));
#line 1350
c_rt_lib0clear(&___nl__im__7);
#line 1350
c_rt_lib0clear(&___nl__im__8);
#line 1350
c_rt_lib0move(&___nl__im__5, translator_priv0get_var_register(___nl__im__6, ___ref___rec__1));
#line 1350
c_rt_lib0clear(&___nl__im__6);
#line 1350
c_rt_lib0clear(&___nl__im__0);
#line 1350
c_rt_lib0clear(&___nl__im__2);
#line 1350
//clear ___nl__bool__3;
#line 1350
return ___nl__im__5;
#line 1351
goto label_1;
#line 1351
label_2:
;
#line 1351
label_1:
;
#line 1351
//clear ___nl__bool__3;
#line 1351
c_rt_lib0clear(&___nl__im__5);
#line 1354
c_rt_lib0move(&___nl__im__9, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1355
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1355
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1355
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1355
___nl__im_ptr__14 = NULL;
#line 1355
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(388)));
#line 1355
c_rt_lib0clear(&___nl__im__13);
#line 1355
___nl__bool__10 = tct0is_own_type(___nl__im__11, ___nl__im__12);
#line 1355
c_rt_lib0clear(&___nl__im__11);
#line 1355
c_rt_lib0clear(&___nl__im__12);
#line 1355
___nl__bool__10 = !___nl__bool__10;
#line 1355
if(___nl__bool__10){ goto label_4;}
#line 1356
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1357
goto label_3;
#line 1357
label_4:
;
#line 1358
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1359
goto label_3;
#line 1359
label_3:
;
#line 1359
//clear ___nl__bool__10;
#line 1361
c_rt_lib0clear(&___nl__im__0);
#line 1361
c_rt_lib0clear(&___nl__im__2);
#line 1361
return ___nl__im__9;
}

nlasm0reg_t0type translator_priv0get_var_register(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 1365
___nl__im_ptr__5 = &((*___ref___rec__1).logic0field);
#line 1365
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1365
___nl__im_ptr__5 = NULL;
#line 1365
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(720)));
#line 1365
c_rt_lib0clear(&___nl__im__4);
#line 1365
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__0));
#line 1365
c_rt_lib0clear(&___nl__im__3);
#line 1365
c_rt_lib0clear(&___nl__im__0);
#line 1365
return ___nl__im__2;
}

nlasm0reg_t0type translator_priv0new_declaration(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1,nlasm0reg_type0type ___nl__im__2,nlasm0reg_access_type_t0type ___nl__im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
#line 1371
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(219));
#line 1371
if(___nl__bool__5){ goto label_2;}
#line 1373
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(392));
#line 1373
if(___nl__bool__5){ goto label_3;}
#line 1373
c_rt_lib0move(&___nl__im__6,___get_global_const(16));
#line 1373
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__3));
#line 1373
nl_die_arg(___nl__im__6);
#line 1371
label_2:
;
#line 1372
c_rt_lib0move(&___nl__im__4, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1373
goto label_1;
#line 1373
label_3:
;
#line 1374
c_rt_lib0move(&___nl__im__4, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__2));
#line 1375
goto label_1;
#line 1375
label_1:
;
#line 1376
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1376
c_rt_lib0move(&___nl__im__8,___get_global_const(720));
#line 1376
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___nl__im_ptr__7), ___nl__im__8));
#line 1376
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__0, ___nl__im__4));
#line 1376
c_rt_lib0move(&___nl__string__9,___get_global_const(720));
#line 1376
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__7, ___nl__string__9, ___nl__im__8));
#line 1376
___nl__im_ptr__7 = NULL;
#line 1376
c_rt_lib0clear(&___nl__im__8);
#line 1376
c_rt_lib0clear(&___nl__string__9);
#line 1377
___nl__im_ptr__10 = &((*___ref___rec__1).debug0field);
#line 1377
c_rt_lib0move(&___nl__im__11,___get_global_const(730));
#line 1377
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 1377
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__0, ___nl__im__4));
#line 1377
c_rt_lib0move(&___nl__string__12,___get_global_const(730));
#line 1377
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__12, ___nl__im__11));
#line 1377
___nl__im_ptr__10 = NULL;
#line 1377
c_rt_lib0clear(&___nl__im__11);
#line 1377
c_rt_lib0clear(&___nl__string__12);
#line 1378
c_rt_lib0clear(&___nl__im__0);
#line 1378
c_rt_lib0clear(&___nl__im__2);
#line 1378
c_rt_lib0clear(&___nl__im__3);
#line 1378
//clear ___nl__bool__5;
#line 1378
c_rt_lib0clear(&___nl__im__6);
#line 1378
return ___nl__im__4;
}

nlasm0reg_t0type translator_priv0new_register(translator0state_t0type* ___ref___rec__0,nlasm0reg_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT * ___nl__im_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__string__17 = NULL;
ImmT * ___nl__im_ptr__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT * ___nl__im_ptr__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
#line 1382
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1382
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1382
___nl__im_ptr__5 = NULL;
#line 1382
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(215)));
#line 1382
c_rt_lib0clear(&___nl__im__4);
#line 1382
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1382
c_rt_lib0clear(&___nl__im__3);
#line 1383
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1383
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1383
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__1, ___get_global_const(218), ___nl__im__7, ___get_global_const(330), ___nl__im__8));
#line 1383
c_rt_lib0clear(&___nl__im__7);
#line 1383
c_rt_lib0clear(&___nl__im__8);
#line 1384
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1384
c_rt_lib0move(&___nl__im__10,___get_global_const(215));
#line 1384
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1384
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1384
c_rt_lib0move(&___nl__string__11,___get_global_const(215));
#line 1384
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1384
___nl__im_ptr__9 = NULL;
#line 1384
c_rt_lib0clear(&___nl__im__10);
#line 1384
c_rt_lib0clear(&___nl__string__11);
#line 1385
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1385
c_rt_lib0move(&___nl__im__13,___get_global_const(431));
#line 1385
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1385
___nl__int__14 = 1;
#line 1385
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1385
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1385
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1385
c_rt_lib0move(&___nl__string__17,___get_global_const(431));
#line 1385
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1385
___nl__im_ptr__12 = NULL;
#line 1385
c_rt_lib0clear(&___nl__im__13);
#line 1385
//clear ___nl__int__14;
#line 1385
//clear ___nl__int__15;
#line 1385
//clear ___nl__int__16;
#line 1385
c_rt_lib0clear(&___nl__string__17);
#line 1386
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1386
c_rt_lib0move(&___nl__im__19,___get_global_const(1204));
#line 1386
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1386
___nl__bool__20 = true;
#line 1386
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1386
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1386
c_rt_lib0move(&___nl__string__22,___get_global_const(1204));
#line 1386
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1386
___nl__im_ptr__18 = NULL;
#line 1386
c_rt_lib0clear(&___nl__im__19);
#line 1386
//clear ___nl__bool__20;
#line 1386
c_rt_lib0clear(&___nl__im__21);
#line 1386
c_rt_lib0clear(&___nl__string__22);
#line 1387
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1387
c_rt_lib0move(&___nl__im__24,___get_global_const(215));
#line 1387
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1387
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1387
c_rt_lib0move(&___nl__string__25,___get_global_const(215));
#line 1387
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1387
___nl__im_ptr__23 = NULL;
#line 1387
c_rt_lib0clear(&___nl__im__24);
#line 1387
c_rt_lib0clear(&___nl__string__25);
#line 1388
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1388
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1388
___nl__im_ptr__29 = NULL;
#line 1388
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(215)));
#line 1388
c_rt_lib0clear(&___nl__im__28);
#line 1388
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1388
c_rt_lib0clear(&___nl__im__27);
#line 1388
c_rt_lib0clear(&___nl__im__1);
#line 1388
//clear ___nl__int__2;
#line 1388
c_rt_lib0clear(&___nl__im__6);
#line 1388
return ___nl__im__26;
}

nlasm0reg_t0type translator_priv0new_reference_register(translator0state_t0type* ___ref___rec__0,nlasm0reg_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT * ___nl__im_ptr__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__string__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__string__17 = NULL;
ImmT * ___nl__im_ptr__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT * ___nl__im_ptr__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT * ___nl__im_ptr__29 = NULL;
#line 1392
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1392
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1392
___nl__im_ptr__5 = NULL;
#line 1392
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(215)));
#line 1392
c_rt_lib0clear(&___nl__im__4);
#line 1392
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1392
c_rt_lib0clear(&___nl__im__3);
#line 1393
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1393
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 1393
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(95), ___nl__im__1, ___get_global_const(218), ___nl__im__7, ___get_global_const(330), ___nl__im__8));
#line 1393
c_rt_lib0clear(&___nl__im__7);
#line 1393
c_rt_lib0clear(&___nl__im__8);
#line 1394
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1394
c_rt_lib0move(&___nl__im__10,___get_global_const(215));
#line 1394
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1394
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1394
c_rt_lib0move(&___nl__string__11,___get_global_const(215));
#line 1394
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1394
___nl__im_ptr__9 = NULL;
#line 1394
c_rt_lib0clear(&___nl__im__10);
#line 1394
c_rt_lib0clear(&___nl__string__11);
#line 1395
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1395
c_rt_lib0move(&___nl__im__13,___get_global_const(431));
#line 1395
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1395
___nl__int__14 = 1;
#line 1395
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1395
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1395
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1395
c_rt_lib0move(&___nl__string__17,___get_global_const(431));
#line 1395
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1395
___nl__im_ptr__12 = NULL;
#line 1395
c_rt_lib0clear(&___nl__im__13);
#line 1395
//clear ___nl__int__14;
#line 1395
//clear ___nl__int__15;
#line 1395
//clear ___nl__int__16;
#line 1395
c_rt_lib0clear(&___nl__string__17);
#line 1396
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1396
c_rt_lib0move(&___nl__im__19,___get_global_const(1204));
#line 1396
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1396
___nl__bool__20 = true;
#line 1396
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1396
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1396
c_rt_lib0move(&___nl__string__22,___get_global_const(1204));
#line 1396
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1396
___nl__im_ptr__18 = NULL;
#line 1396
c_rt_lib0clear(&___nl__im__19);
#line 1396
//clear ___nl__bool__20;
#line 1396
c_rt_lib0clear(&___nl__im__21);
#line 1396
c_rt_lib0clear(&___nl__string__22);
#line 1397
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1397
c_rt_lib0move(&___nl__im__24,___get_global_const(215));
#line 1397
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1397
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1397
c_rt_lib0move(&___nl__string__25,___get_global_const(215));
#line 1397
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1397
___nl__im_ptr__23 = NULL;
#line 1397
c_rt_lib0clear(&___nl__im__24);
#line 1397
c_rt_lib0clear(&___nl__string__25);
#line 1398
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1398
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1398
___nl__im_ptr__29 = NULL;
#line 1398
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(215)));
#line 1398
c_rt_lib0clear(&___nl__im__28);
#line 1398
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1398
c_rt_lib0clear(&___nl__im__27);
#line 1398
c_rt_lib0clear(&___nl__im__1);
#line 1398
//clear ___nl__int__2;
#line 1398
c_rt_lib0clear(&___nl__im__6);
#line 1398
return ___nl__im__26;
}

translator0function_logic_t0type translator_priv0save_registers(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 1402
___nl__im_ptr__2 = &((*___ref___rec__0).logic0field);
#line 1402
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 1402
___nl__im_ptr__2 = NULL;
#line 1402
return ___nl__im__1;
}

ImmT  translator_priv0undef_reg(nlasm0reg_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
#line 1406
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(330)));
#line 1406
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(219));
#line 1406
if(___nl__bool__3){ goto label_2;}
#line 1408
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(392));
#line 1408
if(___nl__bool__3){ goto label_3;}
#line 1408
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 1408
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1408
nl_die_arg(___nl__im__4);
#line 1406
label_2:
;
#line 1407
___nl__im_ptr__8 = &((*___ref___rec__1).logic0field);
#line 1407
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1407
___nl__im_ptr__8 = NULL;
#line 1407
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(1204)));
#line 1407
c_rt_lib0clear(&___nl__im__7);
#line 1407
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1407
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 1407
c_rt_lib0clear(&___nl__im__10);
#line 1407
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__9));
#line 1407
___nl__bool__5 = c_rt_lib0check_true_native(___nl__im__11);
#line 1407
c_rt_lib0clear(&___nl__im__6);
#line 1407
//clear ___nl__int__9;
#line 1407
c_rt_lib0clear(&___nl__im__11);
#line 1407
___nl__bool__5 = !___nl__bool__5;
#line 1407
if(___nl__bool__5){ goto label_5;}
#line 1407
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(251), ___nl__im__0));
#line 1407
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__12));
#line 1407
c_rt_lib0clear(&___nl__im__12);
#line 1407
goto label_4;
#line 1407
label_5:
;
#line 1407
label_4:
;
#line 1407
//clear ___nl__bool__5;
#line 1408
goto label_1;
#line 1408
label_3:
;
#line 1409
goto label_1;
#line 1409
label_1:
;
#line 1409
c_rt_lib0clear(&___nl__im__0);
#line 1409
c_rt_lib0clear(&___nl__im__2);
#line 1409
//clear ___nl__bool__3;
#line 1409
c_rt_lib0clear(&___nl__im__4);
#line 1409
return NULL;
}

ImmT  translator_priv0restore_registers(translator0function_logic_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT * ___nl__im_ptr__13 = NULL;
ImmT * ___nl__im_ptr__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__string__18 = NULL;
INT  ___nl__int__19 = 0;
#line 1413
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(431)));
#line 1413
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1413
c_rt_lib0clear(&___nl__im__3);
#line 1413
label_2:
;
#line 1413
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1413
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1413
___nl__im_ptr__7 = NULL;
#line 1413
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(431)));
#line 1413
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1413
c_rt_lib0clear(&___nl__im__6);
#line 1413
c_rt_lib0clear(&___nl__im__8);
#line 1413
___nl__int__9 = ___nl__int__2 < ___nl__int__5;
#line 1413
___nl__bool__4 = ___nl__int__9;
#line 1413
//clear ___nl__int__5;
#line 1413
//clear ___nl__int__9;
#line 1413
___nl__bool__4 = !___nl__bool__4;
#line 1413
if(___nl__bool__4){ goto label_1;}
#line 1414
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1414
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1414
___nl__im_ptr__13 = NULL;
#line 1414
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(215)));
#line 1414
c_rt_lib0clear(&___nl__im__12);
#line 1414
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__11, ___nl__int__2));
#line 1414
c_rt_lib0clear(&___nl__im__11);
#line 1414
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__10, ___ref___rec__1));
#line 1414
c_rt_lib0clear(&___nl__im__10);
#line 1415
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1415
c_rt_lib0move(&___nl__im__15,___get_global_const(1204));
#line 1415
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___nl__im_ptr__14), ___nl__im__15));
#line 1415
___nl__bool__17 = false;
#line 1415
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__17));
#line 1415
c_rt_lib0array_set(&___nl__im__15, ___nl__int__2, ___nl__im__16);
#line 1415
c_rt_lib0move(&___nl__string__18,___get_global_const(1204));
#line 1415
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__14, ___nl__string__18, ___nl__im__15));
#line 1415
___nl__im_ptr__14 = NULL;
#line 1415
c_rt_lib0clear(&___nl__im__15);
#line 1415
c_rt_lib0clear(&___nl__im__16);
#line 1415
//clear ___nl__bool__17;
#line 1415
c_rt_lib0clear(&___nl__string__18);
#line 1415
label_3:
;
#line 1413
___nl__int__19 = 1;
#line 1413
___nl__int__2 = ___nl__int__2 + ___nl__int__19;
#line 1413
//clear ___nl__int__19;
#line 1416
goto label_2;
#line 1416
label_1:
;
#line 1416
c_rt_lib0clear(&___nl__im__0);
#line 1416
//clear ___nl__int__2;
#line 1416
//clear ___nl__bool__4;
#line 1416
return NULL;
}

ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1) {
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 1420
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 1420
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(248), ___nl__im__3));
#line 1420
c_rt_lib0clear(&___nl__im__3);
#line 1420
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__2));
#line 1420
c_rt_lib0clear(&___nl__im__2);
#line 1420
//clear ___nl__int__0;
#line 1420
return NULL;
}

nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
INT * ___nl__int_ptr__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT * ___nl__int_ptr__4 = NULL;
#line 1424
___nl__int_ptr__1 = &((*___ref___rec__0).label_nr0field);
#line 1424
___nl__int__2 = 1;
#line 1424
(*___nl__int_ptr__1) = (*___nl__int_ptr__1) + ___nl__int__2;
#line 1424
___nl__int_ptr__1 = NULL;
#line 1424
//clear ___nl__int__2;
#line 1425
___nl__int_ptr__4 = &((*___ref___rec__0).label_nr0field);
#line 1425
___nl__int__3 = (*___nl__int_ptr__4);
#line 1425
___nl__int_ptr__4 = NULL;
#line 1425
return ___nl__int__3;
}

nlasm0reg_type0type translator_priv0value_type_to_reg_type(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
#line 1429
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1429
___nl__im_ptr__6 = &((*___ref___rec__1).logic0field);
#line 1429
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1429
___nl__im_ptr__6 = NULL;
#line 1429
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(388)));
#line 1429
c_rt_lib0clear(&___nl__im__5);
#line 1429
c_rt_lib0move(&___nl__im__2, translator_priv0var_type_to_reg_type(___nl__im__3, ___nl__im__4));
#line 1429
c_rt_lib0clear(&___nl__im__3);
#line 1429
c_rt_lib0clear(&___nl__im__4);
#line 1429
c_rt_lib0clear(&___nl__im__0);
#line 1429
return ___nl__im__2;
}

nlasm0reg_t0type translator_priv0get_cast(nlasm0reg_t0type ___nl__im__0,nlasm0reg_type0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
#line 1433
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1433
___nl__bool__3 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__1);
#line 1433
c_rt_lib0clear(&___nl__im__4);
#line 1433
___nl__bool__3 = !___nl__bool__3;
#line 1433
if(___nl__bool__3){ goto label_2;}
#line 1434
c_rt_lib0clear(&___nl__im__1);
#line 1434
//clear ___nl__bool__3;
#line 1434
return ___nl__im__0;
#line 1435
goto label_1;
#line 1435
label_2:
;
#line 1435
label_1:
;
#line 1435
//clear ___nl__bool__3;
#line 1437
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(330)));
#line 1437
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(219));
#line 1437
if(___nl__bool__7){ goto label_4;}
#line 1439
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(392));
#line 1439
if(___nl__bool__7){ goto label_5;}
#line 1439
c_rt_lib0move(&___nl__im__8,___get_global_const(16));
#line 1439
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 1439
nl_die_arg(___nl__im__8);
#line 1437
label_4:
;
#line 1438
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__2, ___nl__im__1));
#line 1439
goto label_3;
#line 1439
label_5:
;
#line 1440
c_rt_lib0move(&___nl__im__5, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__1));
#line 1441
goto label_3;
#line 1441
label_3:
;
#line 1442
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__0, ___ref___rec__2));
#line 1443
c_rt_lib0clear(&___nl__im__0);
#line 1443
c_rt_lib0clear(&___nl__im__1);
#line 1443
c_rt_lib0clear(&___nl__im__6);
#line 1443
//clear ___nl__bool__7;
#line 1443
c_rt_lib0clear(&___nl__im__8);
#line 1443
return ___nl__im__5;
}

nlasm0reg_type0type translator_priv0var_type_to_reg_type(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
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
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
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
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
#line 1447
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 1447
if(___nl__bool__2){ goto label_2;}
#line 1449
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 1449
if(___nl__bool__2){ goto label_3;}
#line 1451
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 1451
if(___nl__bool__2){ goto label_4;}
#line 1453
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 1453
if(___nl__bool__2){ goto label_5;}
#line 1455
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 1455
if(___nl__bool__2){ goto label_6;}
#line 1457
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 1457
if(___nl__bool__2){ goto label_7;}
#line 1459
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 1459
if(___nl__bool__2){ goto label_8;}
#line 1461
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 1461
if(___nl__bool__2){ goto label_9;}
#line 1463
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 1463
if(___nl__bool__2){ goto label_10;}
#line 1478
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 1478
if(___nl__bool__2){ goto label_11;}
#line 1480
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 1480
if(___nl__bool__2){ goto label_12;}
#line 1482
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 1482
if(___nl__bool__2){ goto label_13;}
#line 1484
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 1484
if(___nl__bool__2){ goto label_14;}
#line 1486
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 1486
if(___nl__bool__2){ goto label_15;}
#line 1488
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 1488
if(___nl__bool__2){ goto label_16;}
#line 1490
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 1490
if(___nl__bool__2){ goto label_17;}
#line 1490
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 1490
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1490
nl_die_arg(___nl__im__3);
#line 1447
label_2:
;
#line 1447
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 1447
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1448
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1448
c_rt_lib0clear(&___nl__im__0);
#line 1448
c_rt_lib0clear(&___nl__im__1);
#line 1448
//clear ___nl__bool__2;
#line 1448
c_rt_lib0clear(&___nl__im__3);
#line 1448
c_rt_lib0clear(&___nl__im__4);
#line 1448
c_rt_lib0clear(&___nl__im__5);
#line 1448
return ___nl__im__6;
#line 1449
goto label_1;
#line 1449
label_3:
;
#line 1449
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 1449
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1450
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(513), ___nl__im__0));
#line 1450
c_rt_lib0clear(&___nl__im__0);
#line 1450
c_rt_lib0clear(&___nl__im__1);
#line 1450
//clear ___nl__bool__2;
#line 1450
c_rt_lib0clear(&___nl__im__3);
#line 1450
c_rt_lib0clear(&___nl__im__4);
#line 1450
c_rt_lib0clear(&___nl__im__5);
#line 1450
c_rt_lib0clear(&___nl__im__6);
#line 1450
c_rt_lib0clear(&___nl__im__7);
#line 1450
c_rt_lib0clear(&___nl__im__8);
#line 1450
return ___nl__im__9;
#line 1451
goto label_1;
#line 1451
label_4:
;
#line 1451
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 1451
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1452
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1452
c_rt_lib0clear(&___nl__im__0);
#line 1452
c_rt_lib0clear(&___nl__im__1);
#line 1452
//clear ___nl__bool__2;
#line 1452
c_rt_lib0clear(&___nl__im__3);
#line 1452
c_rt_lib0clear(&___nl__im__4);
#line 1452
c_rt_lib0clear(&___nl__im__5);
#line 1452
c_rt_lib0clear(&___nl__im__6);
#line 1452
c_rt_lib0clear(&___nl__im__7);
#line 1452
c_rt_lib0clear(&___nl__im__8);
#line 1452
c_rt_lib0clear(&___nl__im__9);
#line 1452
c_rt_lib0clear(&___nl__im__10);
#line 1452
c_rt_lib0clear(&___nl__im__11);
#line 1452
return ___nl__im__12;
#line 1453
goto label_1;
#line 1453
label_5:
;
#line 1453
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 1453
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1454
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(131), ___nl__im__0));
#line 1454
c_rt_lib0clear(&___nl__im__0);
#line 1454
c_rt_lib0clear(&___nl__im__1);
#line 1454
//clear ___nl__bool__2;
#line 1454
c_rt_lib0clear(&___nl__im__3);
#line 1454
c_rt_lib0clear(&___nl__im__4);
#line 1454
c_rt_lib0clear(&___nl__im__5);
#line 1454
c_rt_lib0clear(&___nl__im__6);
#line 1454
c_rt_lib0clear(&___nl__im__7);
#line 1454
c_rt_lib0clear(&___nl__im__8);
#line 1454
c_rt_lib0clear(&___nl__im__9);
#line 1454
c_rt_lib0clear(&___nl__im__10);
#line 1454
c_rt_lib0clear(&___nl__im__11);
#line 1454
c_rt_lib0clear(&___nl__im__12);
#line 1454
c_rt_lib0clear(&___nl__im__13);
#line 1454
c_rt_lib0clear(&___nl__im__14);
#line 1454
return ___nl__im__15;
#line 1455
goto label_1;
#line 1455
label_6:
;
#line 1455
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 1455
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1456
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1456
c_rt_lib0clear(&___nl__im__0);
#line 1456
c_rt_lib0clear(&___nl__im__1);
#line 1456
//clear ___nl__bool__2;
#line 1456
c_rt_lib0clear(&___nl__im__3);
#line 1456
c_rt_lib0clear(&___nl__im__4);
#line 1456
c_rt_lib0clear(&___nl__im__5);
#line 1456
c_rt_lib0clear(&___nl__im__6);
#line 1456
c_rt_lib0clear(&___nl__im__7);
#line 1456
c_rt_lib0clear(&___nl__im__8);
#line 1456
c_rt_lib0clear(&___nl__im__9);
#line 1456
c_rt_lib0clear(&___nl__im__10);
#line 1456
c_rt_lib0clear(&___nl__im__11);
#line 1456
c_rt_lib0clear(&___nl__im__12);
#line 1456
c_rt_lib0clear(&___nl__im__13);
#line 1456
c_rt_lib0clear(&___nl__im__14);
#line 1456
c_rt_lib0clear(&___nl__im__15);
#line 1456
c_rt_lib0clear(&___nl__im__16);
#line 1456
c_rt_lib0clear(&___nl__im__17);
#line 1456
return ___nl__im__18;
#line 1457
goto label_1;
#line 1457
label_7:
;
#line 1457
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 1457
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1458
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(130), ___nl__im__0));
#line 1458
c_rt_lib0clear(&___nl__im__0);
#line 1458
c_rt_lib0clear(&___nl__im__1);
#line 1458
//clear ___nl__bool__2;
#line 1458
c_rt_lib0clear(&___nl__im__3);
#line 1458
c_rt_lib0clear(&___nl__im__4);
#line 1458
c_rt_lib0clear(&___nl__im__5);
#line 1458
c_rt_lib0clear(&___nl__im__6);
#line 1458
c_rt_lib0clear(&___nl__im__7);
#line 1458
c_rt_lib0clear(&___nl__im__8);
#line 1458
c_rt_lib0clear(&___nl__im__9);
#line 1458
c_rt_lib0clear(&___nl__im__10);
#line 1458
c_rt_lib0clear(&___nl__im__11);
#line 1458
c_rt_lib0clear(&___nl__im__12);
#line 1458
c_rt_lib0clear(&___nl__im__13);
#line 1458
c_rt_lib0clear(&___nl__im__14);
#line 1458
c_rt_lib0clear(&___nl__im__15);
#line 1458
c_rt_lib0clear(&___nl__im__16);
#line 1458
c_rt_lib0clear(&___nl__im__17);
#line 1458
c_rt_lib0clear(&___nl__im__18);
#line 1458
c_rt_lib0clear(&___nl__im__19);
#line 1458
c_rt_lib0clear(&___nl__im__20);
#line 1458
return ___nl__im__21;
#line 1459
goto label_1;
#line 1459
label_8:
;
#line 1459
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 1459
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 1460
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1460
c_rt_lib0clear(&___nl__im__0);
#line 1460
c_rt_lib0clear(&___nl__im__1);
#line 1460
//clear ___nl__bool__2;
#line 1460
c_rt_lib0clear(&___nl__im__3);
#line 1460
c_rt_lib0clear(&___nl__im__4);
#line 1460
c_rt_lib0clear(&___nl__im__5);
#line 1460
c_rt_lib0clear(&___nl__im__6);
#line 1460
c_rt_lib0clear(&___nl__im__7);
#line 1460
c_rt_lib0clear(&___nl__im__8);
#line 1460
c_rt_lib0clear(&___nl__im__9);
#line 1460
c_rt_lib0clear(&___nl__im__10);
#line 1460
c_rt_lib0clear(&___nl__im__11);
#line 1460
c_rt_lib0clear(&___nl__im__12);
#line 1460
c_rt_lib0clear(&___nl__im__13);
#line 1460
c_rt_lib0clear(&___nl__im__14);
#line 1460
c_rt_lib0clear(&___nl__im__15);
#line 1460
c_rt_lib0clear(&___nl__im__16);
#line 1460
c_rt_lib0clear(&___nl__im__17);
#line 1460
c_rt_lib0clear(&___nl__im__18);
#line 1460
c_rt_lib0clear(&___nl__im__19);
#line 1460
c_rt_lib0clear(&___nl__im__20);
#line 1460
c_rt_lib0clear(&___nl__im__21);
#line 1460
c_rt_lib0clear(&___nl__im__22);
#line 1460
c_rt_lib0clear(&___nl__im__23);
#line 1460
return ___nl__im__24;
#line 1461
goto label_1;
#line 1461
label_9:
;
#line 1461
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 1461
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1462
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__0));
#line 1462
c_rt_lib0clear(&___nl__im__0);
#line 1462
c_rt_lib0clear(&___nl__im__1);
#line 1462
//clear ___nl__bool__2;
#line 1462
c_rt_lib0clear(&___nl__im__3);
#line 1462
c_rt_lib0clear(&___nl__im__4);
#line 1462
c_rt_lib0clear(&___nl__im__5);
#line 1462
c_rt_lib0clear(&___nl__im__6);
#line 1462
c_rt_lib0clear(&___nl__im__7);
#line 1462
c_rt_lib0clear(&___nl__im__8);
#line 1462
c_rt_lib0clear(&___nl__im__9);
#line 1462
c_rt_lib0clear(&___nl__im__10);
#line 1462
c_rt_lib0clear(&___nl__im__11);
#line 1462
c_rt_lib0clear(&___nl__im__12);
#line 1462
c_rt_lib0clear(&___nl__im__13);
#line 1462
c_rt_lib0clear(&___nl__im__14);
#line 1462
c_rt_lib0clear(&___nl__im__15);
#line 1462
c_rt_lib0clear(&___nl__im__16);
#line 1462
c_rt_lib0clear(&___nl__im__17);
#line 1462
c_rt_lib0clear(&___nl__im__18);
#line 1462
c_rt_lib0clear(&___nl__im__19);
#line 1462
c_rt_lib0clear(&___nl__im__20);
#line 1462
c_rt_lib0clear(&___nl__im__21);
#line 1462
c_rt_lib0clear(&___nl__im__22);
#line 1462
c_rt_lib0clear(&___nl__im__23);
#line 1462
c_rt_lib0clear(&___nl__im__24);
#line 1462
c_rt_lib0clear(&___nl__im__25);
#line 1462
c_rt_lib0clear(&___nl__im__26);
#line 1462
return ___nl__im__27;
#line 1463
goto label_1;
#line 1463
label_10:
;
#line 1463
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 1463
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1464
c_rt_lib0move(&___nl__im__31,___get_global_const(33));
#line 1464
___nl__bool__30 = c_rt_lib0eq(___nl__im__28, ___nl__im__31);
#line 1464
c_rt_lib0clear(&___nl__im__31);
#line 1464
___nl__bool__30 = !___nl__bool__30;
#line 1464
if(___nl__bool__30){ goto label_19;}
#line 1465
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 1465
c_rt_lib0clear(&___nl__im__0);
#line 1465
c_rt_lib0clear(&___nl__im__1);
#line 1465
//clear ___nl__bool__2;
#line 1465
c_rt_lib0clear(&___nl__im__3);
#line 1465
c_rt_lib0clear(&___nl__im__4);
#line 1465
c_rt_lib0clear(&___nl__im__5);
#line 1465
c_rt_lib0clear(&___nl__im__6);
#line 1465
c_rt_lib0clear(&___nl__im__7);
#line 1465
c_rt_lib0clear(&___nl__im__8);
#line 1465
c_rt_lib0clear(&___nl__im__9);
#line 1465
c_rt_lib0clear(&___nl__im__10);
#line 1465
c_rt_lib0clear(&___nl__im__11);
#line 1465
c_rt_lib0clear(&___nl__im__12);
#line 1465
c_rt_lib0clear(&___nl__im__13);
#line 1465
c_rt_lib0clear(&___nl__im__14);
#line 1465
c_rt_lib0clear(&___nl__im__15);
#line 1465
c_rt_lib0clear(&___nl__im__16);
#line 1465
c_rt_lib0clear(&___nl__im__17);
#line 1465
c_rt_lib0clear(&___nl__im__18);
#line 1465
c_rt_lib0clear(&___nl__im__19);
#line 1465
c_rt_lib0clear(&___nl__im__20);
#line 1465
c_rt_lib0clear(&___nl__im__21);
#line 1465
c_rt_lib0clear(&___nl__im__22);
#line 1465
c_rt_lib0clear(&___nl__im__23);
#line 1465
c_rt_lib0clear(&___nl__im__24);
#line 1465
c_rt_lib0clear(&___nl__im__25);
#line 1465
c_rt_lib0clear(&___nl__im__26);
#line 1465
c_rt_lib0clear(&___nl__im__27);
#line 1465
c_rt_lib0clear(&___nl__im__28);
#line 1465
c_rt_lib0clear(&___nl__im__29);
#line 1465
//clear ___nl__bool__30;
#line 1465
return ___nl__im__32;
#line 1466
goto label_18;
#line 1466
label_19:
;
#line 1466
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1466
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(6));
#line 1466
c_rt_lib0clear(&___nl__im__33);
#line 1466
___nl__bool__30 = !___nl__bool__30;
#line 1466
if(___nl__bool__30){ goto label_20;}
#line 1467
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(513), ___nl__im__0));
#line 1467
c_rt_lib0clear(&___nl__im__0);
#line 1467
c_rt_lib0clear(&___nl__im__1);
#line 1467
//clear ___nl__bool__2;
#line 1467
c_rt_lib0clear(&___nl__im__3);
#line 1467
c_rt_lib0clear(&___nl__im__4);
#line 1467
c_rt_lib0clear(&___nl__im__5);
#line 1467
c_rt_lib0clear(&___nl__im__6);
#line 1467
c_rt_lib0clear(&___nl__im__7);
#line 1467
c_rt_lib0clear(&___nl__im__8);
#line 1467
c_rt_lib0clear(&___nl__im__9);
#line 1467
c_rt_lib0clear(&___nl__im__10);
#line 1467
c_rt_lib0clear(&___nl__im__11);
#line 1467
c_rt_lib0clear(&___nl__im__12);
#line 1467
c_rt_lib0clear(&___nl__im__13);
#line 1467
c_rt_lib0clear(&___nl__im__14);
#line 1467
c_rt_lib0clear(&___nl__im__15);
#line 1467
c_rt_lib0clear(&___nl__im__16);
#line 1467
c_rt_lib0clear(&___nl__im__17);
#line 1467
c_rt_lib0clear(&___nl__im__18);
#line 1467
c_rt_lib0clear(&___nl__im__19);
#line 1467
c_rt_lib0clear(&___nl__im__20);
#line 1467
c_rt_lib0clear(&___nl__im__21);
#line 1467
c_rt_lib0clear(&___nl__im__22);
#line 1467
c_rt_lib0clear(&___nl__im__23);
#line 1467
c_rt_lib0clear(&___nl__im__24);
#line 1467
c_rt_lib0clear(&___nl__im__25);
#line 1467
c_rt_lib0clear(&___nl__im__26);
#line 1467
c_rt_lib0clear(&___nl__im__27);
#line 1467
c_rt_lib0clear(&___nl__im__28);
#line 1467
c_rt_lib0clear(&___nl__im__29);
#line 1467
//clear ___nl__bool__30;
#line 1467
c_rt_lib0clear(&___nl__im__32);
#line 1467
return ___nl__im__34;
#line 1468
goto label_18;
#line 1468
label_20:
;
#line 1468
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1468
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(2));
#line 1468
c_rt_lib0clear(&___nl__im__35);
#line 1468
___nl__bool__30 = !___nl__bool__30;
#line 1468
if(___nl__bool__30){ goto label_21;}
#line 1469
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(130), ___nl__im__0));
#line 1469
c_rt_lib0clear(&___nl__im__0);
#line 1469
c_rt_lib0clear(&___nl__im__1);
#line 1469
//clear ___nl__bool__2;
#line 1469
c_rt_lib0clear(&___nl__im__3);
#line 1469
c_rt_lib0clear(&___nl__im__4);
#line 1469
c_rt_lib0clear(&___nl__im__5);
#line 1469
c_rt_lib0clear(&___nl__im__6);
#line 1469
c_rt_lib0clear(&___nl__im__7);
#line 1469
c_rt_lib0clear(&___nl__im__8);
#line 1469
c_rt_lib0clear(&___nl__im__9);
#line 1469
c_rt_lib0clear(&___nl__im__10);
#line 1469
c_rt_lib0clear(&___nl__im__11);
#line 1469
c_rt_lib0clear(&___nl__im__12);
#line 1469
c_rt_lib0clear(&___nl__im__13);
#line 1469
c_rt_lib0clear(&___nl__im__14);
#line 1469
c_rt_lib0clear(&___nl__im__15);
#line 1469
c_rt_lib0clear(&___nl__im__16);
#line 1469
c_rt_lib0clear(&___nl__im__17);
#line 1469
c_rt_lib0clear(&___nl__im__18);
#line 1469
c_rt_lib0clear(&___nl__im__19);
#line 1469
c_rt_lib0clear(&___nl__im__20);
#line 1469
c_rt_lib0clear(&___nl__im__21);
#line 1469
c_rt_lib0clear(&___nl__im__22);
#line 1469
c_rt_lib0clear(&___nl__im__23);
#line 1469
c_rt_lib0clear(&___nl__im__24);
#line 1469
c_rt_lib0clear(&___nl__im__25);
#line 1469
c_rt_lib0clear(&___nl__im__26);
#line 1469
c_rt_lib0clear(&___nl__im__27);
#line 1469
c_rt_lib0clear(&___nl__im__28);
#line 1469
c_rt_lib0clear(&___nl__im__29);
#line 1469
//clear ___nl__bool__30;
#line 1469
c_rt_lib0clear(&___nl__im__32);
#line 1469
c_rt_lib0clear(&___nl__im__34);
#line 1469
return ___nl__im__36;
#line 1470
goto label_18;
#line 1470
label_21:
;
#line 1470
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1470
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(14));
#line 1470
c_rt_lib0clear(&___nl__im__37);
#line 1470
___nl__bool__30 = !___nl__bool__30;
#line 1470
if(___nl__bool__30){ goto label_22;}
#line 1471
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(517), ___nl__im__0));
#line 1471
c_rt_lib0clear(&___nl__im__0);
#line 1471
c_rt_lib0clear(&___nl__im__1);
#line 1471
//clear ___nl__bool__2;
#line 1471
c_rt_lib0clear(&___nl__im__3);
#line 1471
c_rt_lib0clear(&___nl__im__4);
#line 1471
c_rt_lib0clear(&___nl__im__5);
#line 1471
c_rt_lib0clear(&___nl__im__6);
#line 1471
c_rt_lib0clear(&___nl__im__7);
#line 1471
c_rt_lib0clear(&___nl__im__8);
#line 1471
c_rt_lib0clear(&___nl__im__9);
#line 1471
c_rt_lib0clear(&___nl__im__10);
#line 1471
c_rt_lib0clear(&___nl__im__11);
#line 1471
c_rt_lib0clear(&___nl__im__12);
#line 1471
c_rt_lib0clear(&___nl__im__13);
#line 1471
c_rt_lib0clear(&___nl__im__14);
#line 1471
c_rt_lib0clear(&___nl__im__15);
#line 1471
c_rt_lib0clear(&___nl__im__16);
#line 1471
c_rt_lib0clear(&___nl__im__17);
#line 1471
c_rt_lib0clear(&___nl__im__18);
#line 1471
c_rt_lib0clear(&___nl__im__19);
#line 1471
c_rt_lib0clear(&___nl__im__20);
#line 1471
c_rt_lib0clear(&___nl__im__21);
#line 1471
c_rt_lib0clear(&___nl__im__22);
#line 1471
c_rt_lib0clear(&___nl__im__23);
#line 1471
c_rt_lib0clear(&___nl__im__24);
#line 1471
c_rt_lib0clear(&___nl__im__25);
#line 1471
c_rt_lib0clear(&___nl__im__26);
#line 1471
c_rt_lib0clear(&___nl__im__27);
#line 1471
c_rt_lib0clear(&___nl__im__28);
#line 1471
c_rt_lib0clear(&___nl__im__29);
#line 1471
//clear ___nl__bool__30;
#line 1471
c_rt_lib0clear(&___nl__im__32);
#line 1471
c_rt_lib0clear(&___nl__im__34);
#line 1471
c_rt_lib0clear(&___nl__im__36);
#line 1471
return ___nl__im__38;
#line 1472
goto label_18;
#line 1472
label_22:
;
#line 1472
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1472
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(4));
#line 1472
c_rt_lib0clear(&___nl__im__39);
#line 1472
___nl__bool__30 = !___nl__bool__30;
#line 1472
if(___nl__bool__30){ goto label_23;}
#line 1473
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(131), ___nl__im__0));
#line 1473
c_rt_lib0clear(&___nl__im__0);
#line 1473
c_rt_lib0clear(&___nl__im__1);
#line 1473
//clear ___nl__bool__2;
#line 1473
c_rt_lib0clear(&___nl__im__3);
#line 1473
c_rt_lib0clear(&___nl__im__4);
#line 1473
c_rt_lib0clear(&___nl__im__5);
#line 1473
c_rt_lib0clear(&___nl__im__6);
#line 1473
c_rt_lib0clear(&___nl__im__7);
#line 1473
c_rt_lib0clear(&___nl__im__8);
#line 1473
c_rt_lib0clear(&___nl__im__9);
#line 1473
c_rt_lib0clear(&___nl__im__10);
#line 1473
c_rt_lib0clear(&___nl__im__11);
#line 1473
c_rt_lib0clear(&___nl__im__12);
#line 1473
c_rt_lib0clear(&___nl__im__13);
#line 1473
c_rt_lib0clear(&___nl__im__14);
#line 1473
c_rt_lib0clear(&___nl__im__15);
#line 1473
c_rt_lib0clear(&___nl__im__16);
#line 1473
c_rt_lib0clear(&___nl__im__17);
#line 1473
c_rt_lib0clear(&___nl__im__18);
#line 1473
c_rt_lib0clear(&___nl__im__19);
#line 1473
c_rt_lib0clear(&___nl__im__20);
#line 1473
c_rt_lib0clear(&___nl__im__21);
#line 1473
c_rt_lib0clear(&___nl__im__22);
#line 1473
c_rt_lib0clear(&___nl__im__23);
#line 1473
c_rt_lib0clear(&___nl__im__24);
#line 1473
c_rt_lib0clear(&___nl__im__25);
#line 1473
c_rt_lib0clear(&___nl__im__26);
#line 1473
c_rt_lib0clear(&___nl__im__27);
#line 1473
c_rt_lib0clear(&___nl__im__28);
#line 1473
c_rt_lib0clear(&___nl__im__29);
#line 1473
//clear ___nl__bool__30;
#line 1473
c_rt_lib0clear(&___nl__im__32);
#line 1473
c_rt_lib0clear(&___nl__im__34);
#line 1473
c_rt_lib0clear(&___nl__im__36);
#line 1473
c_rt_lib0clear(&___nl__im__38);
#line 1473
return ___nl__im__40;
#line 1474
goto label_18;
#line 1474
label_23:
;
#line 1474
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1474
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__41, ___get_global_const(10));
#line 1474
c_rt_lib0clear(&___nl__im__41);
#line 1474
___nl__bool__30 = !___nl__bool__30;
#line 1474
if(___nl__bool__30){ goto label_24;}
#line 1475
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 1475
c_rt_lib0clear(&___nl__im__0);
#line 1475
c_rt_lib0clear(&___nl__im__1);
#line 1475
//clear ___nl__bool__2;
#line 1475
c_rt_lib0clear(&___nl__im__3);
#line 1475
c_rt_lib0clear(&___nl__im__4);
#line 1475
c_rt_lib0clear(&___nl__im__5);
#line 1475
c_rt_lib0clear(&___nl__im__6);
#line 1475
c_rt_lib0clear(&___nl__im__7);
#line 1475
c_rt_lib0clear(&___nl__im__8);
#line 1475
c_rt_lib0clear(&___nl__im__9);
#line 1475
c_rt_lib0clear(&___nl__im__10);
#line 1475
c_rt_lib0clear(&___nl__im__11);
#line 1475
c_rt_lib0clear(&___nl__im__12);
#line 1475
c_rt_lib0clear(&___nl__im__13);
#line 1475
c_rt_lib0clear(&___nl__im__14);
#line 1475
c_rt_lib0clear(&___nl__im__15);
#line 1475
c_rt_lib0clear(&___nl__im__16);
#line 1475
c_rt_lib0clear(&___nl__im__17);
#line 1475
c_rt_lib0clear(&___nl__im__18);
#line 1475
c_rt_lib0clear(&___nl__im__19);
#line 1475
c_rt_lib0clear(&___nl__im__20);
#line 1475
c_rt_lib0clear(&___nl__im__21);
#line 1475
c_rt_lib0clear(&___nl__im__22);
#line 1475
c_rt_lib0clear(&___nl__im__23);
#line 1475
c_rt_lib0clear(&___nl__im__24);
#line 1475
c_rt_lib0clear(&___nl__im__25);
#line 1475
c_rt_lib0clear(&___nl__im__26);
#line 1475
c_rt_lib0clear(&___nl__im__27);
#line 1475
c_rt_lib0clear(&___nl__im__28);
#line 1475
c_rt_lib0clear(&___nl__im__29);
#line 1475
//clear ___nl__bool__30;
#line 1475
c_rt_lib0clear(&___nl__im__32);
#line 1475
c_rt_lib0clear(&___nl__im__34);
#line 1475
c_rt_lib0clear(&___nl__im__36);
#line 1475
c_rt_lib0clear(&___nl__im__38);
#line 1475
c_rt_lib0clear(&___nl__im__40);
#line 1475
return ___nl__im__42;
#line 1476
goto label_18;
#line 1476
label_24:
;
#line 1476
label_18:
;
#line 1476
//clear ___nl__bool__30;
#line 1476
c_rt_lib0clear(&___nl__im__32);
#line 1476
c_rt_lib0clear(&___nl__im__34);
#line 1476
c_rt_lib0clear(&___nl__im__36);
#line 1476
c_rt_lib0clear(&___nl__im__38);
#line 1476
c_rt_lib0clear(&___nl__im__40);
#line 1476
c_rt_lib0clear(&___nl__im__42);
#line 1477
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1477
c_rt_lib0clear(&___nl__im__0);
#line 1477
c_rt_lib0clear(&___nl__im__1);
#line 1477
//clear ___nl__bool__2;
#line 1477
c_rt_lib0clear(&___nl__im__3);
#line 1477
c_rt_lib0clear(&___nl__im__4);
#line 1477
c_rt_lib0clear(&___nl__im__5);
#line 1477
c_rt_lib0clear(&___nl__im__6);
#line 1477
c_rt_lib0clear(&___nl__im__7);
#line 1477
c_rt_lib0clear(&___nl__im__8);
#line 1477
c_rt_lib0clear(&___nl__im__9);
#line 1477
c_rt_lib0clear(&___nl__im__10);
#line 1477
c_rt_lib0clear(&___nl__im__11);
#line 1477
c_rt_lib0clear(&___nl__im__12);
#line 1477
c_rt_lib0clear(&___nl__im__13);
#line 1477
c_rt_lib0clear(&___nl__im__14);
#line 1477
c_rt_lib0clear(&___nl__im__15);
#line 1477
c_rt_lib0clear(&___nl__im__16);
#line 1477
c_rt_lib0clear(&___nl__im__17);
#line 1477
c_rt_lib0clear(&___nl__im__18);
#line 1477
c_rt_lib0clear(&___nl__im__19);
#line 1477
c_rt_lib0clear(&___nl__im__20);
#line 1477
c_rt_lib0clear(&___nl__im__21);
#line 1477
c_rt_lib0clear(&___nl__im__22);
#line 1477
c_rt_lib0clear(&___nl__im__23);
#line 1477
c_rt_lib0clear(&___nl__im__24);
#line 1477
c_rt_lib0clear(&___nl__im__25);
#line 1477
c_rt_lib0clear(&___nl__im__26);
#line 1477
c_rt_lib0clear(&___nl__im__27);
#line 1477
c_rt_lib0clear(&___nl__im__28);
#line 1477
c_rt_lib0clear(&___nl__im__29);
#line 1477
return ___nl__im__43;
#line 1478
goto label_1;
#line 1478
label_11:
;
#line 1479
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1479
c_rt_lib0clear(&___nl__im__0);
#line 1479
c_rt_lib0clear(&___nl__im__1);
#line 1479
//clear ___nl__bool__2;
#line 1479
c_rt_lib0clear(&___nl__im__3);
#line 1479
c_rt_lib0clear(&___nl__im__4);
#line 1479
c_rt_lib0clear(&___nl__im__5);
#line 1479
c_rt_lib0clear(&___nl__im__6);
#line 1479
c_rt_lib0clear(&___nl__im__7);
#line 1479
c_rt_lib0clear(&___nl__im__8);
#line 1479
c_rt_lib0clear(&___nl__im__9);
#line 1479
c_rt_lib0clear(&___nl__im__10);
#line 1479
c_rt_lib0clear(&___nl__im__11);
#line 1479
c_rt_lib0clear(&___nl__im__12);
#line 1479
c_rt_lib0clear(&___nl__im__13);
#line 1479
c_rt_lib0clear(&___nl__im__14);
#line 1479
c_rt_lib0clear(&___nl__im__15);
#line 1479
c_rt_lib0clear(&___nl__im__16);
#line 1479
c_rt_lib0clear(&___nl__im__17);
#line 1479
c_rt_lib0clear(&___nl__im__18);
#line 1479
c_rt_lib0clear(&___nl__im__19);
#line 1479
c_rt_lib0clear(&___nl__im__20);
#line 1479
c_rt_lib0clear(&___nl__im__21);
#line 1479
c_rt_lib0clear(&___nl__im__22);
#line 1479
c_rt_lib0clear(&___nl__im__23);
#line 1479
c_rt_lib0clear(&___nl__im__24);
#line 1479
c_rt_lib0clear(&___nl__im__25);
#line 1479
c_rt_lib0clear(&___nl__im__26);
#line 1479
c_rt_lib0clear(&___nl__im__27);
#line 1479
c_rt_lib0clear(&___nl__im__28);
#line 1479
c_rt_lib0clear(&___nl__im__29);
#line 1479
c_rt_lib0clear(&___nl__im__43);
#line 1479
return ___nl__im__44;
#line 1480
goto label_1;
#line 1480
label_12:
;
#line 1481
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_const(515)));
#line 1481
c_rt_lib0clear(&___nl__im__0);
#line 1481
c_rt_lib0clear(&___nl__im__1);
#line 1481
//clear ___nl__bool__2;
#line 1481
c_rt_lib0clear(&___nl__im__3);
#line 1481
c_rt_lib0clear(&___nl__im__4);
#line 1481
c_rt_lib0clear(&___nl__im__5);
#line 1481
c_rt_lib0clear(&___nl__im__6);
#line 1481
c_rt_lib0clear(&___nl__im__7);
#line 1481
c_rt_lib0clear(&___nl__im__8);
#line 1481
c_rt_lib0clear(&___nl__im__9);
#line 1481
c_rt_lib0clear(&___nl__im__10);
#line 1481
c_rt_lib0clear(&___nl__im__11);
#line 1481
c_rt_lib0clear(&___nl__im__12);
#line 1481
c_rt_lib0clear(&___nl__im__13);
#line 1481
c_rt_lib0clear(&___nl__im__14);
#line 1481
c_rt_lib0clear(&___nl__im__15);
#line 1481
c_rt_lib0clear(&___nl__im__16);
#line 1481
c_rt_lib0clear(&___nl__im__17);
#line 1481
c_rt_lib0clear(&___nl__im__18);
#line 1481
c_rt_lib0clear(&___nl__im__19);
#line 1481
c_rt_lib0clear(&___nl__im__20);
#line 1481
c_rt_lib0clear(&___nl__im__21);
#line 1481
c_rt_lib0clear(&___nl__im__22);
#line 1481
c_rt_lib0clear(&___nl__im__23);
#line 1481
c_rt_lib0clear(&___nl__im__24);
#line 1481
c_rt_lib0clear(&___nl__im__25);
#line 1481
c_rt_lib0clear(&___nl__im__26);
#line 1481
c_rt_lib0clear(&___nl__im__27);
#line 1481
c_rt_lib0clear(&___nl__im__28);
#line 1481
c_rt_lib0clear(&___nl__im__29);
#line 1481
c_rt_lib0clear(&___nl__im__43);
#line 1481
c_rt_lib0clear(&___nl__im__44);
#line 1481
return ___nl__im__45;
#line 1482
goto label_1;
#line 1482
label_13:
;
#line 1483
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1483
c_rt_lib0clear(&___nl__im__0);
#line 1483
c_rt_lib0clear(&___nl__im__1);
#line 1483
//clear ___nl__bool__2;
#line 1483
c_rt_lib0clear(&___nl__im__3);
#line 1483
c_rt_lib0clear(&___nl__im__4);
#line 1483
c_rt_lib0clear(&___nl__im__5);
#line 1483
c_rt_lib0clear(&___nl__im__6);
#line 1483
c_rt_lib0clear(&___nl__im__7);
#line 1483
c_rt_lib0clear(&___nl__im__8);
#line 1483
c_rt_lib0clear(&___nl__im__9);
#line 1483
c_rt_lib0clear(&___nl__im__10);
#line 1483
c_rt_lib0clear(&___nl__im__11);
#line 1483
c_rt_lib0clear(&___nl__im__12);
#line 1483
c_rt_lib0clear(&___nl__im__13);
#line 1483
c_rt_lib0clear(&___nl__im__14);
#line 1483
c_rt_lib0clear(&___nl__im__15);
#line 1483
c_rt_lib0clear(&___nl__im__16);
#line 1483
c_rt_lib0clear(&___nl__im__17);
#line 1483
c_rt_lib0clear(&___nl__im__18);
#line 1483
c_rt_lib0clear(&___nl__im__19);
#line 1483
c_rt_lib0clear(&___nl__im__20);
#line 1483
c_rt_lib0clear(&___nl__im__21);
#line 1483
c_rt_lib0clear(&___nl__im__22);
#line 1483
c_rt_lib0clear(&___nl__im__23);
#line 1483
c_rt_lib0clear(&___nl__im__24);
#line 1483
c_rt_lib0clear(&___nl__im__25);
#line 1483
c_rt_lib0clear(&___nl__im__26);
#line 1483
c_rt_lib0clear(&___nl__im__27);
#line 1483
c_rt_lib0clear(&___nl__im__28);
#line 1483
c_rt_lib0clear(&___nl__im__29);
#line 1483
c_rt_lib0clear(&___nl__im__43);
#line 1483
c_rt_lib0clear(&___nl__im__44);
#line 1483
c_rt_lib0clear(&___nl__im__45);
#line 1483
return ___nl__im__46;
#line 1484
goto label_1;
#line 1484
label_14:
;
#line 1485
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 1485
c_rt_lib0clear(&___nl__im__0);
#line 1485
c_rt_lib0clear(&___nl__im__1);
#line 1485
//clear ___nl__bool__2;
#line 1485
c_rt_lib0clear(&___nl__im__3);
#line 1485
c_rt_lib0clear(&___nl__im__4);
#line 1485
c_rt_lib0clear(&___nl__im__5);
#line 1485
c_rt_lib0clear(&___nl__im__6);
#line 1485
c_rt_lib0clear(&___nl__im__7);
#line 1485
c_rt_lib0clear(&___nl__im__8);
#line 1485
c_rt_lib0clear(&___nl__im__9);
#line 1485
c_rt_lib0clear(&___nl__im__10);
#line 1485
c_rt_lib0clear(&___nl__im__11);
#line 1485
c_rt_lib0clear(&___nl__im__12);
#line 1485
c_rt_lib0clear(&___nl__im__13);
#line 1485
c_rt_lib0clear(&___nl__im__14);
#line 1485
c_rt_lib0clear(&___nl__im__15);
#line 1485
c_rt_lib0clear(&___nl__im__16);
#line 1485
c_rt_lib0clear(&___nl__im__17);
#line 1485
c_rt_lib0clear(&___nl__im__18);
#line 1485
c_rt_lib0clear(&___nl__im__19);
#line 1485
c_rt_lib0clear(&___nl__im__20);
#line 1485
c_rt_lib0clear(&___nl__im__21);
#line 1485
c_rt_lib0clear(&___nl__im__22);
#line 1485
c_rt_lib0clear(&___nl__im__23);
#line 1485
c_rt_lib0clear(&___nl__im__24);
#line 1485
c_rt_lib0clear(&___nl__im__25);
#line 1485
c_rt_lib0clear(&___nl__im__26);
#line 1485
c_rt_lib0clear(&___nl__im__27);
#line 1485
c_rt_lib0clear(&___nl__im__28);
#line 1485
c_rt_lib0clear(&___nl__im__29);
#line 1485
c_rt_lib0clear(&___nl__im__43);
#line 1485
c_rt_lib0clear(&___nl__im__44);
#line 1485
c_rt_lib0clear(&___nl__im__45);
#line 1485
c_rt_lib0clear(&___nl__im__46);
#line 1485
return ___nl__im__47;
#line 1486
goto label_1;
#line 1486
label_15:
;
#line 1487
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1487
c_rt_lib0clear(&___nl__im__0);
#line 1487
c_rt_lib0clear(&___nl__im__1);
#line 1487
//clear ___nl__bool__2;
#line 1487
c_rt_lib0clear(&___nl__im__3);
#line 1487
c_rt_lib0clear(&___nl__im__4);
#line 1487
c_rt_lib0clear(&___nl__im__5);
#line 1487
c_rt_lib0clear(&___nl__im__6);
#line 1487
c_rt_lib0clear(&___nl__im__7);
#line 1487
c_rt_lib0clear(&___nl__im__8);
#line 1487
c_rt_lib0clear(&___nl__im__9);
#line 1487
c_rt_lib0clear(&___nl__im__10);
#line 1487
c_rt_lib0clear(&___nl__im__11);
#line 1487
c_rt_lib0clear(&___nl__im__12);
#line 1487
c_rt_lib0clear(&___nl__im__13);
#line 1487
c_rt_lib0clear(&___nl__im__14);
#line 1487
c_rt_lib0clear(&___nl__im__15);
#line 1487
c_rt_lib0clear(&___nl__im__16);
#line 1487
c_rt_lib0clear(&___nl__im__17);
#line 1487
c_rt_lib0clear(&___nl__im__18);
#line 1487
c_rt_lib0clear(&___nl__im__19);
#line 1487
c_rt_lib0clear(&___nl__im__20);
#line 1487
c_rt_lib0clear(&___nl__im__21);
#line 1487
c_rt_lib0clear(&___nl__im__22);
#line 1487
c_rt_lib0clear(&___nl__im__23);
#line 1487
c_rt_lib0clear(&___nl__im__24);
#line 1487
c_rt_lib0clear(&___nl__im__25);
#line 1487
c_rt_lib0clear(&___nl__im__26);
#line 1487
c_rt_lib0clear(&___nl__im__27);
#line 1487
c_rt_lib0clear(&___nl__im__28);
#line 1487
c_rt_lib0clear(&___nl__im__29);
#line 1487
c_rt_lib0clear(&___nl__im__43);
#line 1487
c_rt_lib0clear(&___nl__im__44);
#line 1487
c_rt_lib0clear(&___nl__im__45);
#line 1487
c_rt_lib0clear(&___nl__im__46);
#line 1487
c_rt_lib0clear(&___nl__im__47);
#line 1487
return ___nl__im__48;
#line 1488
goto label_1;
#line 1488
label_16:
;
#line 1489
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(0));
#line 1489
nl_die_arg(___nl__im__49);
#line 1490
goto label_1;
#line 1490
label_17:
;
#line 1491
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 1491
c_rt_lib0clear(&___nl__im__0);
#line 1491
c_rt_lib0clear(&___nl__im__1);
#line 1491
//clear ___nl__bool__2;
#line 1491
c_rt_lib0clear(&___nl__im__3);
#line 1491
c_rt_lib0clear(&___nl__im__4);
#line 1491
c_rt_lib0clear(&___nl__im__5);
#line 1491
c_rt_lib0clear(&___nl__im__6);
#line 1491
c_rt_lib0clear(&___nl__im__7);
#line 1491
c_rt_lib0clear(&___nl__im__8);
#line 1491
c_rt_lib0clear(&___nl__im__9);
#line 1491
c_rt_lib0clear(&___nl__im__10);
#line 1491
c_rt_lib0clear(&___nl__im__11);
#line 1491
c_rt_lib0clear(&___nl__im__12);
#line 1491
c_rt_lib0clear(&___nl__im__13);
#line 1491
c_rt_lib0clear(&___nl__im__14);
#line 1491
c_rt_lib0clear(&___nl__im__15);
#line 1491
c_rt_lib0clear(&___nl__im__16);
#line 1491
c_rt_lib0clear(&___nl__im__17);
#line 1491
c_rt_lib0clear(&___nl__im__18);
#line 1491
c_rt_lib0clear(&___nl__im__19);
#line 1491
c_rt_lib0clear(&___nl__im__20);
#line 1491
c_rt_lib0clear(&___nl__im__21);
#line 1491
c_rt_lib0clear(&___nl__im__22);
#line 1491
c_rt_lib0clear(&___nl__im__23);
#line 1491
c_rt_lib0clear(&___nl__im__24);
#line 1491
c_rt_lib0clear(&___nl__im__25);
#line 1491
c_rt_lib0clear(&___nl__im__26);
#line 1491
c_rt_lib0clear(&___nl__im__27);
#line 1491
c_rt_lib0clear(&___nl__im__28);
#line 1491
c_rt_lib0clear(&___nl__im__29);
#line 1491
c_rt_lib0clear(&___nl__im__43);
#line 1491
c_rt_lib0clear(&___nl__im__44);
#line 1491
c_rt_lib0clear(&___nl__im__45);
#line 1491
c_rt_lib0clear(&___nl__im__46);
#line 1491
c_rt_lib0clear(&___nl__im__47);
#line 1491
c_rt_lib0clear(&___nl__im__48);
#line 1491
c_rt_lib0clear(&___nl__im__49);
#line 1491
return ___nl__im__50;
#line 1492
goto label_1;
#line 1492
label_1:
;
}

ImmT  translator_priv0print_own_val_init(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT * ___nl__im_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT * ___nl__im_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT * ___nl__im_ptr__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT * ___nl__im_ptr__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT * ___nl__im_ptr__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
INT  ___nl__int__64 = 0;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__string__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
INT  ___nl__int__71 = 0;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT * ___nl__im_ptr__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT * ___nl__im_ptr__105 = NULL;
ImmT  ___nl__im__106 = NULL;
INT  ___nl__int__107 = 0;
INT  ___nl__int__108 = 0;
INT  ___nl__int__109 = 0;
bool  ___nl__bool__110 = false;
INT  ___nl__int__111 = 0;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT * ___nl__im_ptr__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT * ___nl__im_ptr__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
bool  ___nl__bool__128 = false;
ImmT  ___nl__im__129 = NULL;
INT  ___nl__int__130 = 0;
INT  ___nl__int__131 = 0;
INT  ___nl__int__132 = 0;
bool  ___nl__bool__133 = false;
INT  ___nl__int__134 = 0;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT * ___nl__im_ptr__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
INT  ___nl__int__150 = 0;
INT  ___nl__int__151 = 0;
INT  ___nl__int__152 = 0;
bool  ___nl__bool__153 = false;
INT  ___nl__int__154 = 0;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT * ___nl__im_ptr__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
bool  ___nl__bool__170 = false;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
#line 1496
___nl__im_ptr__3 = &((*___ref___rec__2).debug0field);
#line 1496
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 1496
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1496
c_rt_lib0hash_set_value_dec(___nl__im_ptr__3, ___get_global_const(505), ___nl__im__4);
#line 1496
___nl__im_ptr__3 = NULL;
#line 1496
c_rt_lib0clear(&___nl__im__4);
#line 1496
c_rt_lib0clear(&___nl__im__5);
#line 1497
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1497
___nl__im_ptr__10 = &((*___ref___rec__2).logic0field);
#line 1497
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1497
___nl__im_ptr__10 = NULL;
#line 1497
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(388)));
#line 1497
c_rt_lib0clear(&___nl__im__9);
#line 1497
___nl__bool__6 = tct0is_own_type(___nl__im__7, ___nl__im__8);
#line 1497
c_rt_lib0clear(&___nl__im__7);
#line 1497
c_rt_lib0clear(&___nl__im__8);
#line 1497
___nl__bool__6 = !___nl__bool__6;
#line 1497
___nl__bool__6 = !___nl__bool__6;
#line 1497
if(___nl__bool__6){ goto label_2;}
#line 1498
___nl__im_ptr__11 = &((*___ref___rec__2).logic0field);
#line 1498
c_rt_lib0move(&___nl__im__12,___get_global_const(1204));
#line 1498
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___nl__im_ptr__11), ___nl__im__12));
#line 1498
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 1498
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1498
c_rt_lib0clear(&___nl__im__15);
#line 1498
___nl__bool__16 = false;
#line 1498
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 1498
c_rt_lib0array_set(&___nl__im__12, ___nl__int__14, ___nl__im__13);
#line 1498
c_rt_lib0move(&___nl__string__17,___get_global_const(1204));
#line 1498
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__11, ___nl__string__17, ___nl__im__12));
#line 1498
___nl__im_ptr__11 = NULL;
#line 1498
c_rt_lib0clear(&___nl__im__12);
#line 1498
c_rt_lib0clear(&___nl__im__13);
#line 1498
//clear ___nl__int__14;
#line 1498
//clear ___nl__bool__16;
#line 1498
c_rt_lib0clear(&___nl__string__17);
#line 1499
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 1500
c_rt_lib0clear(&___nl__im__0);
#line 1500
c_rt_lib0clear(&___nl__im__1);
#line 1500
//clear ___nl__bool__6;
#line 1500
return NULL;
#line 1501
goto label_1;
#line 1501
label_2:
;
#line 1501
label_1:
;
#line 1501
//clear ___nl__bool__6;
#line 1502
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1502
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(222));
#line 1502
if(___nl__bool__19){ goto label_4;}
#line 1504
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(527));
#line 1504
if(___nl__bool__19){ goto label_5;}
#line 1506
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(880));
#line 1506
if(___nl__bool__19){ goto label_6;}
#line 1508
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(881));
#line 1508
if(___nl__bool__19){ goto label_7;}
#line 1510
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(517));
#line 1510
if(___nl__bool__19){ goto label_8;}
#line 1532
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(463));
#line 1532
if(___nl__bool__19){ goto label_9;}
#line 1534
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(878));
#line 1534
if(___nl__bool__19){ goto label_10;}
#line 1536
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(234));
#line 1536
if(___nl__bool__19){ goto label_11;}
#line 1538
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(882));
#line 1538
if(___nl__bool__19){ goto label_12;}
#line 1540
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(839));
#line 1540
if(___nl__bool__19){ goto label_13;}
#line 1542
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(230));
#line 1542
if(___nl__bool__19){ goto label_14;}
#line 1551
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(231));
#line 1551
if(___nl__bool__19){ goto label_15;}
#line 1574
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(859));
#line 1574
if(___nl__bool__19){ goto label_16;}
#line 1576
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(883));
#line 1576
if(___nl__bool__19){ goto label_17;}
#line 1578
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(884));
#line 1578
if(___nl__bool__19){ goto label_18;}
#line 1580
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(885));
#line 1580
if(___nl__bool__19){ goto label_19;}
#line 1580
c_rt_lib0move(&___nl__im__20,___get_global_const(16));
#line 1580
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(2, ___nl__im__20, ___nl__im__18));
#line 1580
nl_die_arg(___nl__im__20);
#line 1502
label_4:
;
#line 1502
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(222)));
#line 1502
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 1503
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__21));
#line 1503
c_rt_lib0delete(translator_priv0load_const(___nl__im__23, ___nl__im__1, ___ref___rec__2));
#line 1503
c_rt_lib0clear(&___nl__im__23);
#line 1504
goto label_3;
#line 1504
label_5:
;
#line 1504
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(527)));
#line 1504
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1505
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 1505
nl_die_arg(___nl__im__26);
#line 1506
goto label_3;
#line 1506
label_6:
;
#line 1506
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(880)));
#line 1506
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 1507
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1507
nl_die_arg(___nl__im__29);
#line 1508
goto label_3;
#line 1508
label_7:
;
#line 1508
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(881)));
#line 1508
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 1509
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 1509
nl_die_arg(___nl__im__32);
#line 1510
goto label_3;
#line 1510
label_8:
;
#line 1510
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(517)));
#line 1510
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 1513
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(463)));
#line 1513
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(219)));
#line 1513
c_rt_lib0clear(&___nl__im__39);
#line 1513
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(859));
#line 1513
c_rt_lib0clear(&___nl__im__38);
#line 1513
___nl__bool__37 = !___nl__bool__37;
#line 1513
if(___nl__bool__37){ goto label_21;}
#line 1514
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1515
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(8)));
#line 1516
goto label_20;
#line 1516
label_21:
;
#line 1517
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1517
___nl__im_ptr__45 = &((*___ref___rec__2).logic0field);
#line 1517
c_rt_lib0copy(&___nl__im__44, (*___nl__im_ptr__45));
#line 1517
___nl__im_ptr__45 = NULL;
#line 1517
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(388)));
#line 1517
c_rt_lib0clear(&___nl__im__44);
#line 1517
c_rt_lib0move(&___nl__im__41, translator_priv0unwrap_ref(___nl__im__42, ___nl__im__43));
#line 1517
c_rt_lib0clear(&___nl__im__42);
#line 1517
c_rt_lib0clear(&___nl__im__43);
#line 1517
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1517
___nl__im_ptr__50 = &((*___ref___rec__2).logic0field);
#line 1517
c_rt_lib0copy(&___nl__im__49, (*___nl__im_ptr__50));
#line 1517
___nl__im_ptr__50 = NULL;
#line 1517
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(388)));
#line 1517
c_rt_lib0clear(&___nl__im__49);
#line 1517
c_rt_lib0move(&___nl__im__46, translator_priv0unwrap_ref(___nl__im__47, ___nl__im__48));
#line 1517
c_rt_lib0clear(&___nl__im__47);
#line 1517
c_rt_lib0clear(&___nl__im__48);
#line 1517
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__46, ___get_global_const(14)));
#line 1517
c_rt_lib0clear(&___nl__im__41);
#line 1517
c_rt_lib0clear(&___nl__im__46);
#line 1518
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(168)));
#line 1518
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value(___nl__im__40, ___nl__im__52));
#line 1518
c_rt_lib0clear(&___nl__im__52);
#line 1518
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(168)));
#line 1518
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value(___nl__im__40, ___nl__im__54));
#line 1518
c_rt_lib0clear(&___nl__im__54);
#line 1518
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__53, ___get_global_const(28)));
#line 1518
c_rt_lib0clear(&___nl__im__51);
#line 1518
c_rt_lib0clear(&___nl__im__53);
#line 1520
___nl__im_ptr__59 = &((*___ref___rec__2).logic0field);
#line 1520
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 1520
___nl__im_ptr__59 = NULL;
#line 1520
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_const(388)));
#line 1520
c_rt_lib0clear(&___nl__im__58);
#line 1520
c_rt_lib0move(&___nl__im__56, translator_priv0var_type_to_reg_type(___nl__im__36, ___nl__im__57));
#line 1520
c_rt_lib0clear(&___nl__im__57);
#line 1520
c_rt_lib0move(&___nl__im__55, translator_priv0new_register(___ref___rec__2, ___nl__im__56));
#line 1520
c_rt_lib0clear(&___nl__im__56);
#line 1521
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(463)));
#line 1521
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__60, ___nl__im__55, ___ref___rec__2));
#line 1521
c_rt_lib0clear(&___nl__im__60);
#line 1522
___nl__im_ptr__61 = &((*___ref___rec__2).logic0field);
#line 1522
c_rt_lib0move(&___nl__im__62,___get_global_const(1204));
#line 1522
c_rt_lib0move(&___nl__im__62, c_rt_lib0get_ref_hash((*___nl__im_ptr__61), ___nl__im__62));
#line 1522
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(218)));
#line 1522
___nl__int__64 = getIntFromImm(___nl__im__65);
#line 1522
c_rt_lib0clear(&___nl__im__65);
#line 1522
___nl__bool__66 = false;
#line 1522
c_rt_lib0move(&___nl__im__63, c_rt_lib0bool_to_nl_native(___nl__bool__66));
#line 1522
c_rt_lib0array_set(&___nl__im__62, ___nl__int__64, ___nl__im__63);
#line 1522
c_rt_lib0move(&___nl__string__67,___get_global_const(1204));
#line 1522
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__61, ___nl__string__67, ___nl__im__62));
#line 1522
___nl__im_ptr__61 = NULL;
#line 1522
c_rt_lib0clear(&___nl__im__62);
#line 1522
c_rt_lib0clear(&___nl__im__63);
#line 1522
//clear ___nl__int__64;
#line 1522
//clear ___nl__bool__66;
#line 1522
c_rt_lib0clear(&___nl__string__67);
#line 1523
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__55));
#line 1524
goto label_20;
#line 1524
label_20:
;
#line 1524
//clear ___nl__bool__37;
#line 1524
c_rt_lib0clear(&___nl__im__40);
#line 1524
c_rt_lib0clear(&___nl__im__55);
#line 1528
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(168)));
#line 1529
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1529
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(168)));
#line 1529
___nl__int__71 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__72, ___nl__im__73);
#line 1529
c_rt_lib0clear(&___nl__im__72);
#line 1529
c_rt_lib0clear(&___nl__im__73);
#line 1529
c_rt_lib0move(&___nl__im__74, c_rt_lib0int_new(___nl__int__71));
#line 1529
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__35, ___get_global_const(534), ___nl__im__70, ___get_global_const(521), ___nl__im__74, ___get_global_const(539), ___nl__im__36));
#line 1529
c_rt_lib0clear(&___nl__im__70);
#line 1529
//clear ___nl__int__71;
#line 1529
c_rt_lib0clear(&___nl__im__74);
#line 1529
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__69));
#line 1529
c_rt_lib0clear(&___nl__im__69);
#line 1529
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__68));
#line 1529
c_rt_lib0clear(&___nl__im__68);
#line 1532
goto label_3;
#line 1532
label_9:
;
#line 1532
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(463)));
#line 1532
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 1533
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_mk(0));
#line 1533
nl_die_arg(___nl__im__77);
#line 1534
goto label_3;
#line 1534
label_10:
;
#line 1534
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(878)));
#line 1534
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 1535
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_mk(0));
#line 1535
nl_die_arg(___nl__im__80);
#line 1536
goto label_3;
#line 1536
label_11:
;
#line 1536
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(234)));
#line 1536
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 1537
c_rt_lib0move(&___nl__im__83, c_rt_lib0array_mk(0));
#line 1537
nl_die_arg(___nl__im__83);
#line 1538
goto label_3;
#line 1538
label_12:
;
#line 1538
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(882)));
#line 1538
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1539
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(0));
#line 1539
nl_die_arg(___nl__im__86);
#line 1540
goto label_3;
#line 1540
label_13:
;
#line 1540
c_rt_lib0move(&___nl__im__88, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(839)));
#line 1540
c_rt_lib0copy(&___nl__im__87, ___nl__im__88);
#line 1541
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(0));
#line 1541
nl_die_arg(___nl__im__89);
#line 1542
goto label_3;
#line 1542
label_14:
;
#line 1542
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(230)));
#line 1542
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 1543
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_mk(0));
#line 1543
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__94));
#line 1543
c_rt_lib0clear(&___nl__im__94);
#line 1543
c_rt_lib0move(&___nl__im__92, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__93));
#line 1543
c_rt_lib0clear(&___nl__im__93);
#line 1543
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__92));
#line 1543
c_rt_lib0clear(&___nl__im__92);
#line 1544
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1544
___nl__im_ptr__100 = &((*___ref___rec__2).logic0field);
#line 1544
c_rt_lib0copy(&___nl__im__99, (*___nl__im_ptr__100));
#line 1544
___nl__im_ptr__100 = NULL;
#line 1544
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(388)));
#line 1544
c_rt_lib0clear(&___nl__im__99);
#line 1544
c_rt_lib0move(&___nl__im__96, translator_priv0unwrap_ref(___nl__im__97, ___nl__im__98));
#line 1544
c_rt_lib0clear(&___nl__im__97);
#line 1544
c_rt_lib0clear(&___nl__im__98);
#line 1544
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1544
___nl__im_ptr__105 = &((*___ref___rec__2).logic0field);
#line 1544
c_rt_lib0copy(&___nl__im__104, (*___nl__im_ptr__105));
#line 1544
___nl__im_ptr__105 = NULL;
#line 1544
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(388)));
#line 1544
c_rt_lib0clear(&___nl__im__104);
#line 1544
c_rt_lib0move(&___nl__im__101, translator_priv0unwrap_ref(___nl__im__102, ___nl__im__103));
#line 1544
c_rt_lib0clear(&___nl__im__102);
#line 1544
c_rt_lib0clear(&___nl__im__103);
#line 1544
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__101, ___get_global_const(2)));
#line 1544
c_rt_lib0clear(&___nl__im__96);
#line 1544
c_rt_lib0clear(&___nl__im__101);
#line 1545
___nl__int__107 = 0;
#line 1545
___nl__int__108 = 1;
#line 1545
___nl__int__109 = c_rt_lib0array_len(___nl__im__90);
#line 1545
label_24:
;
#line 1545
___nl__int__111 = ___nl__int__107 >= ___nl__int__109;
#line 1545
___nl__bool__110 = ___nl__int__111;
#line 1545
if(___nl__bool__110){ goto label_22;}
#line 1545
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_get(___nl__im__90, ___nl__int__107));
#line 1545
c_rt_lib0copy(&___nl__im__106, ___nl__im__112);
#line 1547
___nl__im_ptr__117 = &((*___ref___rec__2).logic0field);
#line 1547
c_rt_lib0copy(&___nl__im__116, (*___nl__im_ptr__117));
#line 1547
___nl__im_ptr__117 = NULL;
#line 1547
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_const(388)));
#line 1547
c_rt_lib0clear(&___nl__im__116);
#line 1547
c_rt_lib0move(&___nl__im__114, translator_priv0var_type_to_reg_type(___nl__im__95, ___nl__im__115));
#line 1547
c_rt_lib0clear(&___nl__im__115);
#line 1547
c_rt_lib0move(&___nl__im__113, translator_priv0new_register(___ref___rec__2, ___nl__im__114));
#line 1547
c_rt_lib0clear(&___nl__im__114);
#line 1548
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__106, ___nl__im__113, ___ref___rec__2));
#line 1549
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__113, ___ref___rec__2));
#line 1549
c_rt_lib0clear(&___nl__im__106);
#line 1549
label_23:
;
#line 1550
___nl__int__107 = ___nl__int__107 + ___nl__int__108;
#line 1550
goto label_24;
#line 1550
label_22:
;
#line 1551
goto label_3;
#line 1551
label_15:
;
#line 1551
c_rt_lib0move(&___nl__im__119, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(231)));
#line 1551
c_rt_lib0copy(&___nl__im__118, ___nl__im__119);
#line 1552
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(95)));
#line 1552
___nl__im_ptr__124 = &((*___ref___rec__2).logic0field);
#line 1552
c_rt_lib0copy(&___nl__im__123, (*___nl__im_ptr__124));
#line 1552
___nl__im_ptr__124 = NULL;
#line 1552
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(388)));
#line 1552
c_rt_lib0clear(&___nl__im__123);
#line 1552
c_rt_lib0move(&___nl__im__120, translator_priv0unwrap_ref(___nl__im__121, ___nl__im__122));
#line 1552
c_rt_lib0clear(&___nl__im__121);
#line 1552
c_rt_lib0clear(&___nl__im__122);
#line 1553
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_mk(0));
#line 1553
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(75), ___nl__im__127));
#line 1553
c_rt_lib0clear(&___nl__im__127);
#line 1553
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__126));
#line 1553
c_rt_lib0clear(&___nl__im__126);
#line 1553
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__125));
#line 1553
c_rt_lib0clear(&___nl__im__125);
#line 1554
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__120, ___get_global_const(6));
#line 1554
___nl__bool__128 = !___nl__bool__128;
#line 1554
if(___nl__bool__128){ goto label_26;}
#line 1555
___nl__int__130 = 0;
#line 1555
___nl__int__131 = 1;
#line 1555
___nl__int__132 = c_rt_lib0array_len(___nl__im__118);
#line 1555
label_29:
;
#line 1555
___nl__int__134 = ___nl__int__130 >= ___nl__int__132;
#line 1555
___nl__bool__133 = ___nl__int__134;
#line 1555
if(___nl__bool__133){ goto label_27;}
#line 1555
c_rt_lib0move(&___nl__im__135, c_rt_lib0array_get(___nl__im__118, ___nl__int__130));
#line 1555
c_rt_lib0copy(&___nl__im__129, ___nl__im__135);
#line 1556
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(224)));
#line 1556
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__139, ___get_global_const(95)));
#line 1556
c_rt_lib0clear(&___nl__im__139);
#line 1556
___nl__im_ptr__142 = &((*___ref___rec__2).logic0field);
#line 1556
c_rt_lib0copy(&___nl__im__141, (*___nl__im_ptr__142));
#line 1556
___nl__im_ptr__142 = NULL;
#line 1556
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__141, ___get_global_const(388)));
#line 1556
c_rt_lib0clear(&___nl__im__141);
#line 1556
c_rt_lib0move(&___nl__im__137, translator_priv0var_type_to_reg_type(___nl__im__138, ___nl__im__140));
#line 1556
c_rt_lib0clear(&___nl__im__138);
#line 1556
c_rt_lib0clear(&___nl__im__140);
#line 1556
c_rt_lib0move(&___nl__im__136, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__137));
#line 1556
c_rt_lib0clear(&___nl__im__137);
#line 1557
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(371)));
#line 1557
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__145, ___get_global_const(219)));
#line 1557
c_rt_lib0clear(&___nl__im__145);
#line 1557
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(371)));
#line 1557
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__147, ___get_global_const(219)));
#line 1557
c_rt_lib0clear(&___nl__im__147);
#line 1557
c_rt_lib0move(&___nl__im__143, c_rt_lib0priv_as(___nl__im__146, ___get_global_const(881)));
#line 1557
c_rt_lib0clear(&___nl__im__144);
#line 1557
c_rt_lib0clear(&___nl__im__146);
#line 1558
c_rt_lib0delete(translator_priv0use_field(___nl__im__136, ___nl__im__1, ___nl__im__143, ___ref___rec__2));
#line 1559
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(224)));
#line 1559
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__148, ___nl__im__136, ___ref___rec__2));
#line 1559
c_rt_lib0clear(&___nl__im__148);
#line 1560
c_rt_lib0delete(translator_priv0release_field(___nl__im__136, ___nl__im__1, ___nl__im__143, ___ref___rec__2));
#line 1560
c_rt_lib0clear(&___nl__im__129);
#line 1560
label_28:
;
#line 1561
___nl__int__130 = ___nl__int__130 + ___nl__int__131;
#line 1561
goto label_29;
#line 1561
label_27:
;
#line 1562
goto label_25;
#line 1562
label_26:
;
#line 1562
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__120, ___get_global_const(4));
#line 1562
___nl__bool__128 = !___nl__bool__128;
#line 1562
if(___nl__bool__128){ goto label_30;}
#line 1563
___nl__int__150 = 0;
#line 1563
___nl__int__151 = 1;
#line 1563
___nl__int__152 = c_rt_lib0array_len(___nl__im__118);
#line 1563
label_33:
;
#line 1563
___nl__int__154 = ___nl__int__150 >= ___nl__int__152;
#line 1563
___nl__bool__153 = ___nl__int__154;
#line 1563
if(___nl__bool__153){ goto label_31;}
#line 1563
c_rt_lib0move(&___nl__im__155, c_rt_lib0array_get(___nl__im__118, ___nl__int__150));
#line 1563
c_rt_lib0copy(&___nl__im__149, ___nl__im__155);
#line 1564
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(224)));
#line 1564
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_const(95)));
#line 1564
c_rt_lib0clear(&___nl__im__159);
#line 1564
___nl__im_ptr__162 = &((*___ref___rec__2).logic0field);
#line 1564
c_rt_lib0copy(&___nl__im__161, (*___nl__im_ptr__162));
#line 1564
___nl__im_ptr__162 = NULL;
#line 1564
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__161, ___get_global_const(388)));
#line 1564
c_rt_lib0clear(&___nl__im__161);
#line 1564
c_rt_lib0move(&___nl__im__157, translator_priv0var_type_to_reg_type(___nl__im__158, ___nl__im__160));
#line 1564
c_rt_lib0clear(&___nl__im__158);
#line 1564
c_rt_lib0clear(&___nl__im__160);
#line 1564
c_rt_lib0move(&___nl__im__156, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__157));
#line 1564
c_rt_lib0clear(&___nl__im__157);
#line 1565
c_rt_lib0move(&___nl__im__164, c_rt_lib0ov_mk_none(___get_global_const(527)));
#line 1565
c_rt_lib0move(&___nl__im__163, translator_priv0new_register(___ref___rec__2, ___nl__im__164));
#line 1565
c_rt_lib0clear(&___nl__im__164);
#line 1566
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(371)));
#line 1566
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__167, ___get_global_const(219)));
#line 1566
c_rt_lib0clear(&___nl__im__167);
#line 1566
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(371)));
#line 1566
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__169, ___get_global_const(219)));
#line 1566
c_rt_lib0clear(&___nl__im__169);
#line 1566
c_rt_lib0move(&___nl__im__165, c_rt_lib0priv_as(___nl__im__168, ___get_global_const(881)));
#line 1566
c_rt_lib0clear(&___nl__im__166);
#line 1566
c_rt_lib0clear(&___nl__im__168);
#line 1566
c_rt_lib0delete(translator_priv0load_const(___nl__im__165, ___nl__im__163, ___ref___rec__2));
#line 1566
c_rt_lib0clear(&___nl__im__165);
#line 1567
___nl__bool__170 = true;
#line 1567
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__156, ___nl__im__1, ___nl__im__163, ___nl__bool__170, ___ref___rec__2));
#line 1567
//clear ___nl__bool__170;
#line 1568
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(224)));
#line 1568
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__171, ___nl__im__156, ___ref___rec__2));
#line 1568
c_rt_lib0clear(&___nl__im__171);
#line 1569
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__156, ___nl__im__1, ___nl__im__163, ___ref___rec__2));
#line 1569
c_rt_lib0clear(&___nl__im__149);
#line 1569
label_32:
;
#line 1570
___nl__int__150 = ___nl__int__150 + ___nl__int__151;
#line 1570
goto label_33;
#line 1570
label_31:
;
#line 1571
goto label_25;
#line 1571
label_30:
;
#line 1572
c_rt_lib0move(&___nl__im__172, c_rt_lib0array_mk(0));
#line 1572
nl_die_arg(___nl__im__172);
#line 1573
goto label_25;
#line 1573
label_25:
;
#line 1573
//clear ___nl__bool__128;
#line 1573
c_rt_lib0clear(&___nl__im__129);
#line 1573
//clear ___nl__int__130;
#line 1573
//clear ___nl__int__131;
#line 1573
//clear ___nl__int__132;
#line 1573
//clear ___nl__bool__133;
#line 1573
//clear ___nl__int__134;
#line 1573
c_rt_lib0clear(&___nl__im__135);
#line 1573
c_rt_lib0clear(&___nl__im__136);
#line 1573
c_rt_lib0clear(&___nl__im__143);
#line 1573
c_rt_lib0clear(&___nl__im__149);
#line 1573
//clear ___nl__int__150;
#line 1573
//clear ___nl__int__151;
#line 1573
//clear ___nl__int__152;
#line 1573
//clear ___nl__bool__153;
#line 1573
//clear ___nl__int__154;
#line 1573
c_rt_lib0clear(&___nl__im__155);
#line 1573
c_rt_lib0clear(&___nl__im__156);
#line 1573
c_rt_lib0clear(&___nl__im__163);
#line 1573
c_rt_lib0clear(&___nl__im__172);
#line 1574
goto label_3;
#line 1574
label_16:
;
#line 1575
c_rt_lib0move(&___nl__im__173, c_rt_lib0array_mk(0));
#line 1575
nl_die_arg(___nl__im__173);
#line 1576
goto label_3;
#line 1576
label_17:
;
#line 1576
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(883)));
#line 1576
c_rt_lib0copy(&___nl__im__174, ___nl__im__175);
#line 1577
c_rt_lib0move(&___nl__im__176, c_rt_lib0array_mk(0));
#line 1577
nl_die_arg(___nl__im__176);
#line 1578
goto label_3;
#line 1578
label_18:
;
#line 1578
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(884)));
#line 1578
c_rt_lib0copy(&___nl__im__177, ___nl__im__178);
#line 1579
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_mk(0));
#line 1579
nl_die_arg(___nl__im__179);
#line 1580
goto label_3;
#line 1580
label_19:
;
#line 1580
c_rt_lib0move(&___nl__im__181, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(885)));
#line 1580
c_rt_lib0copy(&___nl__im__180, ___nl__im__181);
#line 1581
c_rt_lib0move(&___nl__im__182, c_rt_lib0array_mk(0));
#line 1581
nl_die_arg(___nl__im__182);
#line 1582
goto label_3;
#line 1582
label_3:
;
#line 1582
c_rt_lib0clear(&___nl__im__0);
#line 1582
c_rt_lib0clear(&___nl__im__1);
#line 1582
c_rt_lib0clear(&___nl__im__18);
#line 1582
//clear ___nl__bool__19;
#line 1582
c_rt_lib0clear(&___nl__im__20);
#line 1582
//clear ___nl__int__21;
#line 1582
c_rt_lib0clear(&___nl__im__22);
#line 1582
c_rt_lib0clear(&___nl__im__24);
#line 1582
c_rt_lib0clear(&___nl__im__25);
#line 1582
c_rt_lib0clear(&___nl__im__26);
#line 1582
c_rt_lib0clear(&___nl__im__27);
#line 1582
c_rt_lib0clear(&___nl__im__28);
#line 1582
c_rt_lib0clear(&___nl__im__29);
#line 1582
c_rt_lib0clear(&___nl__im__30);
#line 1582
c_rt_lib0clear(&___nl__im__31);
#line 1582
c_rt_lib0clear(&___nl__im__32);
#line 1582
c_rt_lib0clear(&___nl__im__33);
#line 1582
c_rt_lib0clear(&___nl__im__34);
#line 1582
c_rt_lib0clear(&___nl__im__35);
#line 1582
c_rt_lib0clear(&___nl__im__36);
#line 1582
c_rt_lib0clear(&___nl__im__75);
#line 1582
c_rt_lib0clear(&___nl__im__76);
#line 1582
c_rt_lib0clear(&___nl__im__77);
#line 1582
c_rt_lib0clear(&___nl__im__78);
#line 1582
c_rt_lib0clear(&___nl__im__79);
#line 1582
c_rt_lib0clear(&___nl__im__80);
#line 1582
c_rt_lib0clear(&___nl__im__81);
#line 1582
c_rt_lib0clear(&___nl__im__82);
#line 1582
c_rt_lib0clear(&___nl__im__83);
#line 1582
c_rt_lib0clear(&___nl__im__84);
#line 1582
c_rt_lib0clear(&___nl__im__85);
#line 1582
c_rt_lib0clear(&___nl__im__86);
#line 1582
c_rt_lib0clear(&___nl__im__87);
#line 1582
c_rt_lib0clear(&___nl__im__88);
#line 1582
c_rt_lib0clear(&___nl__im__89);
#line 1582
c_rt_lib0clear(&___nl__im__90);
#line 1582
c_rt_lib0clear(&___nl__im__91);
#line 1582
c_rt_lib0clear(&___nl__im__95);
#line 1582
c_rt_lib0clear(&___nl__im__106);
#line 1582
//clear ___nl__int__107;
#line 1582
//clear ___nl__int__108;
#line 1582
//clear ___nl__int__109;
#line 1582
//clear ___nl__bool__110;
#line 1582
//clear ___nl__int__111;
#line 1582
c_rt_lib0clear(&___nl__im__112);
#line 1582
c_rt_lib0clear(&___nl__im__113);
#line 1582
c_rt_lib0clear(&___nl__im__118);
#line 1582
c_rt_lib0clear(&___nl__im__119);
#line 1582
c_rt_lib0clear(&___nl__im__120);
#line 1582
c_rt_lib0clear(&___nl__im__173);
#line 1582
c_rt_lib0clear(&___nl__im__174);
#line 1582
c_rt_lib0clear(&___nl__im__175);
#line 1582
c_rt_lib0clear(&___nl__im__176);
#line 1582
c_rt_lib0clear(&___nl__im__177);
#line 1582
c_rt_lib0clear(&___nl__im__178);
#line 1582
c_rt_lib0clear(&___nl__im__179);
#line 1582
c_rt_lib0clear(&___nl__im__180);
#line 1582
c_rt_lib0clear(&___nl__im__181);
#line 1582
c_rt_lib0clear(&___nl__im__182);
#line 1582
return NULL;
}

tct0meta_type0type translator_priv0unwrap_ref(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 1586
label_2:
;
#line 1586
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 1586
___nl__bool__2 = !___nl__bool__2;
#line 1586
if(___nl__bool__2){ goto label_1;}
#line 1587
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 1588
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__3));
#line 1589
goto label_2;
#line 1589
label_1:
;
#line 1590
c_rt_lib0clear(&___nl__im__1);
#line 1590
//clear ___nl__bool__2;
#line 1590
c_rt_lib0clear(&___nl__im__3);
#line 1590
return ___nl__im__0;
}

INT  translator_priv0get_label_number(translator0state_t0type* ___ref___rec__0,tct0meta_type0type ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
#line 1594
___nl__int__3 = 0;
#line 1595
___nl__im_ptr__7 = &((*___ref___rec__0).logic0field);
#line 1595
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1595
___nl__im_ptr__7 = NULL;
#line 1595
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(388)));
#line 1595
c_rt_lib0clear(&___nl__im__6);
#line 1595
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__1, ___nl__im__5));
#line 1595
c_rt_lib0clear(&___nl__im__5);
#line 1596
___nl__im_ptr__11 = &((*___ref___rec__0).logic0field);
#line 1596
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 1596
___nl__im_ptr__11 = NULL;
#line 1596
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(388)));
#line 1596
c_rt_lib0clear(&___nl__im__10);
#line 1596
___nl__bool__8 = tct0is_own_type(___nl__im__1, ___nl__im__9);
#line 1596
c_rt_lib0clear(&___nl__im__9);
#line 1596
___nl__bool__8 = !___nl__bool__8;
#line 1596
___nl__bool__8 = !___nl__bool__8;
#line 1596
if(___nl__bool__8){ goto label_2;}
#line 1597
c_rt_lib0move(&___nl__im__12,___get_global_const(41));
#line 1597
c_rt_lib0move(&___nl__im__12, c_rt_lib0unary_minus(___nl__im__12));
#line 1597
___nl__int__13 = getIntFromImm(___nl__im__12);
#line 1597
c_rt_lib0clear(&___nl__im__1);
#line 1597
c_rt_lib0clear(&___nl__im__2);
#line 1597
//clear ___nl__int__3;
#line 1597
c_rt_lib0clear(&___nl__im__4);
#line 1597
//clear ___nl__bool__8;
#line 1597
c_rt_lib0clear(&___nl__im__12);
#line 1597
return ___nl__int__13;
#line 1598
goto label_1;
#line 1598
label_2:
;
#line 1598
label_1:
;
#line 1598
//clear ___nl__bool__8;
#line 1598
c_rt_lib0clear(&___nl__im__12);
#line 1598
//clear ___nl__int__13;
#line 1599
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(14)));
#line 1599
c_rt_lib0move(&___nl__im__18, c_rt_lib0init_iter(___nl__im__14));
#line 1599
label_5:
;
#line 1599
___nl__bool__16 = c_rt_lib0is_end_hash(___nl__im__18);
#line 1599
if(___nl__bool__16){ goto label_3;}
#line 1599
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_key_iter(___nl__im__18));
#line 1599
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value(___nl__im__14, ___nl__im__15));
#line 1600
___nl__bool__19 = c_rt_lib0eq(___nl__im__15, ___nl__im__2);
#line 1600
___nl__bool__19 = !___nl__bool__19;
#line 1600
if(___nl__bool__19){ goto label_7;}
#line 1600
c_rt_lib0clear(&___nl__im__1);
#line 1600
c_rt_lib0clear(&___nl__im__2);
#line 1600
c_rt_lib0clear(&___nl__im__4);
#line 1600
c_rt_lib0clear(&___nl__im__14);
#line 1600
c_rt_lib0clear(&___nl__im__15);
#line 1600
//clear ___nl__bool__16;
#line 1600
c_rt_lib0clear(&___nl__im__17);
#line 1600
c_rt_lib0clear(&___nl__im__18);
#line 1600
//clear ___nl__bool__19;
#line 1600
return ___nl__int__3;
#line 1600
goto label_6;
#line 1600
label_7:
;
#line 1600
label_6:
;
#line 1600
//clear ___nl__bool__19;
#line 1601
___nl__int__20 = 1;
#line 1601
___nl__int__3 = ___nl__int__3 + ___nl__int__20;
#line 1601
//clear ___nl__int__20;
#line 1601
label_4:
;
#line 1602
c_rt_lib0move(&___nl__im__18, c_rt_lib0next_iter(___nl__im__18));
#line 1602
goto label_5;
#line 1602
label_3:
;
#line 1603
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 1603
nl_die_arg(___nl__im__21);
}

ImmT  translator0conv_to_im00state_t(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT * ___nl__int_ptr__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT * ___nl__im_ptr__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT * ___nl__im_ptr__14 = NULL;
#line 1
___nl__int_ptr__3 = &((*___ref___rec__0).label_nr0field);
#line 1
___nl__int__2 = (*___nl__int_ptr__3);
#line 1
___nl__int_ptr__3 = NULL;
#line 1
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__2));
#line 1
___nl__im_ptr__6 = &((*___ref___rec__0).debug0field);
#line 1
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1
___nl__im_ptr__6 = NULL;
#line 1
___nl__im_ptr__8 = &((*___ref___rec__0).logic0field);
#line 1
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1
___nl__im_ptr__8 = NULL;
#line 1
___nl__im_ptr__10 = &((*___ref___rec__0).module_name0field);
#line 1
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1
___nl__im_ptr__10 = NULL;
#line 1
___nl__im_ptr__12 = &((*___ref___rec__0).result0field);
#line 1
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 1
___nl__im_ptr__12 = NULL;
#line 1
___nl__im_ptr__14 = &((*___ref___rec__0).loop_label0field);
#line 1
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1
___nl__im_ptr__14 = NULL;
#line 1
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_const(1209), ___nl__im__4, ___get_global_const(221), ___nl__im__5, ___get_global_const(1207), ___nl__im__7, ___get_global_const(212), ___nl__im__9, ___get_global_const(448), ___nl__im__11, ___get_global_const(1208), ___nl__im__13));
#line 1
//clear ___nl__int__2;
#line 1
c_rt_lib0clear(&___nl__im__4);
#line 1
c_rt_lib0clear(&___nl__im__5);
#line 1
c_rt_lib0clear(&___nl__im__7);
#line 1
c_rt_lib0clear(&___nl__im__9);
#line 1
c_rt_lib0clear(&___nl__im__11);
#line 1
c_rt_lib0clear(&___nl__im__13);
#line 1
return ___nl__im__1;
#line 1
c_rt_lib0clear(&___nl__im__1);
#line 1
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void translator_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT translator_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT translator_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
