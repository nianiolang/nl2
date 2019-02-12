
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
ImmT  translator_priv0print_if(nast0if_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0print_call_base(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3);
translator0loop_label0type translator_priv0save_loop_break(translator0state_t0type* ___ref___rec__0,nlasm0label_t0type ___nl__int__1,nlasm0label_t0type ___nl__int__2);
bool  translator_priv0break_used(translator0state_t0type* ___ref___rec__0);
bool  translator_priv0continue_used(translator0state_t0type* ___ref___rec__0);
ImmT  translator_priv0print_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_ptd_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_own_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
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
ImmT  translator_priv0use_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,bool  ___nl__bool__3,translator0state_t0type* ___ref___rec__4);
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
translator0lvalue_values_t0type translator_priv0get_value_of_lvalue(nast0value_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2);
ImmT  translator_priv0set_value_of_lvalue(translator0lvalue_values_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2);
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
ImmT  translator_priv0restore_registers_only_clear(translator0function_logic_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0restore_registers(translator0function_logic_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1);
nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0);
nlasm0reg_type0type translator_priv0value_type_to_reg_type(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1);
nlasm0reg_t0type translator_priv0get_cast(nlasm0reg_t0type ___nl__im__0,nlasm0reg_type0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
nlasm0reg_type0type translator_priv0var_type_to_reg_type(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  translator_priv0print_val_init(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2);
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
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 16
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 16
c_rt_lib0clear(&___nl__im__3);
#line 17
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 18
c_rt_lib0move(&___nl__im__6, ptd0bool());
#line 18
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 18
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 19
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 19
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 20
c_rt_lib0move(&___nl__im__9, ptd0hash(___nl__im__10));
#line 20
c_rt_lib0clear(&___nl__im__10);
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(215), ___nl__im__2, ___get_global_const(432), ___nl__im__4, ___get_global_const(1293), ___nl__im__5, ___get_global_const(785), ___nl__im__7, ___get_global_const(388), ___nl__im__9));
#line 20
c_rt_lib0clear(&___nl__im__2);
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0clear(&___nl__im__7);
#line 20
c_rt_lib0clear(&___nl__im__9);
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
ImmT  ___nl__im__4 = NULL;
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(312), ___get_global_const(1040)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1294), ___get_global_const(1295)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 25
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(535), ___nl__im__2, ___get_global_const(1296), ___nl__im__3, ___get_global_const(1297), ___nl__im__4));
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
#line 25
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
return ___nl__im__0;
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
return NULL;
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
#line 29
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1294), ___get_global_const(159)));
#line 29
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1294), ___get_global_const(159)));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 29
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(943), ___nl__im__2, ___get_global_const(944), ___nl__im__3));
#line 29
c_rt_lib0clear(&___nl__im__2);
#line 29
c_rt_lib0clear(&___nl__im__3);
#line 29
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 29
c_rt_lib0clear(&___nl__im__1);
#line 29
return ___nl__im__0;
#line 29
c_rt_lib0clear(&___nl__im__0);
#line 29
return NULL;
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
#line 34
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 35
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(312), ___get_global_const(784)));
#line 35
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1294), ___get_global_const(1295)));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 37
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(312), ___get_global_const(764)));
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_const(1294), ___get_global_const(1298)));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_const(1299), ___nl__im__2, ___get_global_const(221), ___nl__im__3, ___get_global_const(1296), ___nl__im__4, ___get_global_const(212), ___nl__im__5, ___get_global_const(449), ___nl__im__6, ___get_global_const(1298), ___nl__im__7));
#line 39
c_rt_lib0clear(&___nl__im__2);
#line 39
c_rt_lib0clear(&___nl__im__3);
#line 39
c_rt_lib0clear(&___nl__im__4);
#line 39
c_rt_lib0clear(&___nl__im__5);
#line 39
c_rt_lib0clear(&___nl__im__6);
#line 39
c_rt_lib0clear(&___nl__im__7);
#line 39
c_rt_lib0move(&___nl__im__0, own0rec(___nl__im__1));
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
#line 44
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 44
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 44
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 44
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(1005), ___nl__im__6, ___get_global_const(1006), ___nl__im__7));
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0clear(&___nl__im__7);
#line 44
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__2, ___get_global_const(1007), ___nl__im__4));
#line 44
c_rt_lib0clear(&___nl__im__2);
#line 44
c_rt_lib0clear(&___nl__im__4);
#line 44
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 44
c_rt_lib0clear(&___nl__im__1);
#line 44
return ___nl__im__0;
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
return NULL;
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
#line 49
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 49
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__6, ___get_global_const(565), ___nl__im__7));
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 51
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 51
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__10, ___get_global_const(370), ___nl__im__11));
#line 51
c_rt_lib0clear(&___nl__im__10);
#line 51
c_rt_lib0clear(&___nl__im__11);
#line 51
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 51
c_rt_lib0clear(&___nl__im__9);
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__15));
#line 52
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__14, ___get_global_const(1301), ___nl__im__15, ___get_global_const(563), ___nl__im__16));
#line 52
c_rt_lib0clear(&___nl__im__14);
#line 52
c_rt_lib0clear(&___nl__im__15);
#line 52
c_rt_lib0clear(&___nl__im__16);
#line 52
c_rt_lib0move(&___nl__im__12, ptd0rec(___nl__im__13));
#line 52
c_rt_lib0clear(&___nl__im__13);
#line 53
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 53
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 53
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__19, ___get_global_const(1301), ___nl__im__20, ___get_global_const(565), ___nl__im__21));
#line 53
c_rt_lib0clear(&___nl__im__19);
#line 53
c_rt_lib0clear(&___nl__im__20);
#line 53
c_rt_lib0clear(&___nl__im__21);
#line 53
c_rt_lib0move(&___nl__im__17, ptd0rec(___nl__im__18));
#line 53
c_rt_lib0clear(&___nl__im__18);
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 54
c_rt_lib0move(&___nl__im__25, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__24, ___get_global_const(535), ___nl__im__25));
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__28));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__29));
#line 55
c_rt_lib0move(&___nl__im__30, ptd0string());
#line 55
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__28, ___get_global_const(1301), ___nl__im__29, ___get_global_const(535), ___nl__im__30));
#line 55
c_rt_lib0clear(&___nl__im__28);
#line 55
c_rt_lib0clear(&___nl__im__29);
#line 55
c_rt_lib0clear(&___nl__im__30);
#line 55
c_rt_lib0move(&___nl__im__26, ptd0rec(___nl__im__27));
#line 55
c_rt_lib0clear(&___nl__im__27);
#line 56
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 56
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__33));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__34));
#line 56
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__33, ___get_global_const(370), ___nl__im__34));
#line 56
c_rt_lib0clear(&___nl__im__33);
#line 56
c_rt_lib0clear(&___nl__im__34);
#line 56
c_rt_lib0move(&___nl__im__31, ptd0rec(___nl__im__32));
#line 56
c_rt_lib0clear(&___nl__im__32);
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__37));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__38));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(312), ___get_global_const(314)));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__39));
#line 57
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__37, ___get_global_const(1301), ___nl__im__38, ___get_global_const(565), ___nl__im__39));
#line 57
c_rt_lib0clear(&___nl__im__37);
#line 57
c_rt_lib0clear(&___nl__im__38);
#line 57
c_rt_lib0clear(&___nl__im__39);
#line 57
c_rt_lib0move(&___nl__im__35, ptd0rec(___nl__im__36));
#line 57
c_rt_lib0clear(&___nl__im__36);
#line 57
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(9, ___get_global_const(219), ___nl__im__3, ___get_global_const(565), ___nl__im__4, ___get_global_const(370), ___nl__im__8, ___get_global_const(253), ___nl__im__12, ___get_global_const(255), ___nl__im__17, ___get_global_const(992), ___nl__im__22, ___get_global_const(259), ___nl__im__26, ___get_global_const(1288), ___nl__im__31, ___get_global_const(257), ___nl__im__35));
#line 57
c_rt_lib0clear(&___nl__im__3);
#line 57
c_rt_lib0clear(&___nl__im__4);
#line 57
c_rt_lib0clear(&___nl__im__8);
#line 57
c_rt_lib0clear(&___nl__im__12);
#line 57
c_rt_lib0clear(&___nl__im__17);
#line 57
c_rt_lib0clear(&___nl__im__22);
#line 57
c_rt_lib0clear(&___nl__im__26);
#line 57
c_rt_lib0clear(&___nl__im__31);
#line 57
c_rt_lib0clear(&___nl__im__35);
#line 57
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 57
c_rt_lib0clear(&___nl__im__2);
#line 57
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 57
c_rt_lib0clear(&___nl__im__1);
#line 57
return ___nl__im__0;
#line 57
c_rt_lib0clear(&___nl__im__0);
#line 57
return NULL;
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
#line 62
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1005)));
#line 62
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(153)));
#line 62
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__2));
#line 62
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1005)));
#line 62
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(1018)));
#line 62
___nl__int__7 = getIntFromImm(___nl__im__9);
#line 62
c_rt_lib0clear(&___nl__im__8);
#line 62
c_rt_lib0clear(&___nl__im__9);
#line 62
___nl__int__10 = 1;
#line 62
___nl__int__6 = ___nl__int__7 - ___nl__int__10;
#line 62
//clear ___nl__int__7;
#line 62
//clear ___nl__int__10;
#line 62
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__6));
#line 62
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__5, ___get_global_const(1018), ___nl__im__11));
#line 62
//clear ___nl__int__2;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
//clear ___nl__int__6;
#line 62
c_rt_lib0clear(&___nl__im__11);
#line 63
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1005)));
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(153)));
#line 63
___nl__int__13 = getIntFromImm(___nl__im__15);
#line 63
c_rt_lib0clear(&___nl__im__14);
#line 63
c_rt_lib0clear(&___nl__im__15);
#line 63
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__13));
#line 63
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1005)));
#line 63
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(1018)));
#line 63
___nl__int__17 = getIntFromImm(___nl__im__19);
#line 63
c_rt_lib0clear(&___nl__im__18);
#line 63
c_rt_lib0clear(&___nl__im__19);
#line 63
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__17));
#line 63
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(153), ___nl__im__16, ___get_global_const(1018), ___nl__im__20));
#line 63
//clear ___nl__int__13;
#line 63
c_rt_lib0clear(&___nl__im__16);
#line 63
//clear ___nl__int__17;
#line 63
c_rt_lib0clear(&___nl__im__20);
#line 64
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(507), ___nl__im__1, ___get_global_const(1005), ___nl__im__12));
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__12);
#line 64
return ___nl__im__21;
return NULL;
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
ImmT  ___nl__im__48 = NULL;
ImmT * ___nl__im_ptr__49 = NULL;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
bool  ___nl__bool__58 = false;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT * ___nl__im_ptr__62 = NULL;
ImmT  ___nl__string__63 = NULL;
#line 68
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 68
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(212), ___nl__im__3, ___get_global_const(208), ___nl__im__4, ___get_global_const(439), ___nl__im__5));
#line 68
c_rt_lib0clear(&___nl__im__3);
#line 68
c_rt_lib0clear(&___nl__im__4);
#line 68
c_rt_lib0clear(&___nl__im__5);
#line 69
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(0));
#line 69
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 69
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(439), ___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(172)));
#line 70
___nl__int__10 = 0;
#line 70
___nl__int__11 = 1;
#line 70
___nl__int__12 = c_rt_lib0array_len(___nl__im__8);
#line 70
label_3:
;
#line 70
___nl__int__14 = ___nl__int__10 >= ___nl__int__12;
#line 70
___nl__bool__13 = ___nl__int__14;
#line 70
if(___nl__bool__13){ goto label_1;}
#line 70
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__10));
#line 70
c_rt_lib0copy(&___nl__im__9, ___nl__im__15);
#line 71
c_rt_lib0move(&___nl__im__16,___get_global_const(439));
#line 71
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 71
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(167)));
#line 71
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 71
c_rt_lib0move(&___nl__string__18,___get_global_const(439));
#line 71
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__18, ___nl__im__16));
#line 71
c_rt_lib0clear(&___nl__im__16);
#line 71
c_rt_lib0clear(&___nl__im__17);
#line 71
c_rt_lib0clear(&___nl__string__18);
#line 71
c_rt_lib0clear(&___nl__im__9);
#line 72
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 72
goto label_3;
#line 72
label_1:
;
#line 73
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(165)));
#line 73
___nl__int__21 = 0;
#line 73
___nl__int__22 = 1;
#line 73
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 73
label_6:
;
#line 73
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 73
___nl__bool__24 = ___nl__int__25;
#line 73
if(___nl__bool__24){ goto label_4;}
#line 73
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 73
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 75
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(0));
#line 76
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 77
___nl__int__30 = 0;
#line 77
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__30));
#line 78
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 78
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(5, ___get_global_const(785), ___nl__im__28, ___get_global_const(215), ___nl__im__29, ___get_global_const(432), ___nl__im__31, ___get_global_const(1293), ___nl__im__32, ___get_global_const(388), ___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__28);
#line 78
c_rt_lib0clear(&___nl__im__29);
#line 78
//clear ___nl__int__30;
#line 78
c_rt_lib0clear(&___nl__im__31);
#line 78
c_rt_lib0clear(&___nl__im__32);
#line 81
;
#line 81
___nl__int_ptr__34 = &(___nl__rec__33.label_nr0field);
#line 82
(*___nl__int_ptr__34) = 0;
#line 82
___nl__int_ptr__34 = NULL;
#line 82
___nl__im_ptr__35 = &(___nl__rec__33.debug0field);
#line 83
c_rt_lib0move(___nl__im_ptr__35, nlasm0empty_debug());
#line 83
___nl__im_ptr__35 = NULL;
#line 83
___nl__im_ptr__36 = &(___nl__rec__33.module_name0field);
#line 84
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 84
___nl__im_ptr__36 = NULL;
#line 84
___nl__im_ptr__37 = &(___nl__rec__33.logic0field);
#line 85
c_rt_lib0copy(___nl__im_ptr__37, ___nl__im__27);
#line 85
___nl__im_ptr__37 = NULL;
#line 85
___nl__im_ptr__38 = &(___nl__rec__33.result0field);
#line 87
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 88
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(209)));
#line 89
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 90
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 91
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 92
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 93
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(0));
#line 94
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(167)));
#line 95
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(166)));
#line 96
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 96
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(10, ___get_global_const(226), ___nl__im__39, ___get_global_const(209), ___nl__im__40, ___get_global_const(215), ___nl__im__41, ___get_global_const(214), ___nl__im__42, ___get_global_const(429), ___nl__im__43, ___get_global_const(387), ___nl__im__44, ___get_global_const(213), ___nl__im__45, ___get_global_const(167), ___nl__im__46, ___get_global_const(166), ___nl__im__47, ___get_global_const(785), ___nl__im__48));
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
c_rt_lib0clear(&___nl__im__48);
#line 96
___nl__im_ptr__38 = NULL;
#line 96
___nl__im_ptr__49 = &(___nl__rec__33.loop_label0field);
#line 99
___nl__int__51 = 1;
#line 99
___nl__int__51 = -___nl__int__51;
#line 99
c_rt_lib0move(&___nl__im__52, c_rt_lib0int_new(___nl__int__51));
#line 99
___nl__bool__53 = false;
#line 99
c_rt_lib0move(&___nl__im__54, c_rt_lib0bool_to_nl_native(___nl__bool__53));
#line 99
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(3, ___get_global_const(535), ___nl__im__52, ___get_global_const(1296), ___nl__im__27, ___get_global_const(1297), ___nl__im__54));
#line 99
//clear ___nl__int__51;
#line 99
c_rt_lib0clear(&___nl__im__52);
#line 99
//clear ___nl__bool__53;
#line 99
c_rt_lib0clear(&___nl__im__54);
#line 100
___nl__int__56 = 1;
#line 100
___nl__int__56 = -___nl__int__56;
#line 100
c_rt_lib0move(&___nl__im__57, c_rt_lib0int_new(___nl__int__56));
#line 100
___nl__bool__58 = false;
#line 100
c_rt_lib0move(&___nl__im__59, c_rt_lib0bool_to_nl_native(___nl__bool__58));
#line 100
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_const(535), ___nl__im__57, ___get_global_const(1296), ___nl__im__27, ___get_global_const(1297), ___nl__im__59));
#line 100
//clear ___nl__int__56;
#line 100
c_rt_lib0clear(&___nl__im__57);
#line 100
//clear ___nl__bool__58;
#line 100
c_rt_lib0clear(&___nl__im__59);
#line 100
c_rt_lib0move(___nl__im_ptr__49, c_rt_lib0hash_mk(2, ___get_global_const(943), ___nl__im__50, ___get_global_const(944), ___nl__im__55));
#line 100
c_rt_lib0clear(&___nl__im__50);
#line 100
c_rt_lib0clear(&___nl__im__55);
#line 100
___nl__im_ptr__49 = NULL;
#line 103
c_rt_lib0delete(translator_priv0print_fun_def(___nl__im__20, &___nl__rec__33));
#line 104
c_rt_lib0move(&___nl__im__60,___get_global_const(208));
#line 104
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__60));
#line 104
___nl__im_ptr__62 = &(___nl__rec__33.result0field);
#line 104
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 104
___nl__im_ptr__62 = NULL;
#line 104
c_rt_lib0delete(array0push(&___nl__im__60, ___nl__im__61));
#line 104
c_rt_lib0move(&___nl__string__63,___get_global_const(208));
#line 104
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__63, ___nl__im__60));
#line 104
c_rt_lib0clear(&___nl__im__60);
#line 104
c_rt_lib0clear(&___nl__im__61);
#line 104
c_rt_lib0clear(&___nl__string__63);
#line 104
c_rt_lib0clear(&___nl__im__20);
#line 105
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 105
goto label_6;
#line 105
label_4:
;
#line 106
c_rt_lib0clear(&___nl__im__0);
#line 106
c_rt_lib0clear(&___nl__im__1);
#line 106
c_rt_lib0clear(&___nl__im__8);
#line 106
c_rt_lib0clear(&___nl__im__9);
#line 106
//clear ___nl__int__10;
#line 106
//clear ___nl__int__11;
#line 106
//clear ___nl__int__12;
#line 106
//clear ___nl__bool__13;
#line 106
//clear ___nl__int__14;
#line 106
c_rt_lib0clear(&___nl__im__15);
#line 106
c_rt_lib0clear(&___nl__im__19);
#line 106
c_rt_lib0clear(&___nl__im__20);
#line 106
//clear ___nl__int__21;
#line 106
//clear ___nl__int__22;
#line 106
//clear ___nl__int__23;
#line 106
//clear ___nl__bool__24;
#line 106
//clear ___nl__int__25;
#line 106
c_rt_lib0clear(&___nl__im__26);
#line 106
c_rt_lib0clear(&___nl__im__27);
#line 106
translator0state_t0type0clean(___nl__rec__33);;
#line 106
return ___nl__im__2;
return NULL;
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
ImmT * ___nl__im_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT * ___nl__im_ptr__52 = NULL;
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
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT * ___nl__im_ptr__75 = NULL;
bool  ___nl__bool__76 = false;
#line 110
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 110
___nl__int__4 = 0;
#line 110
___nl__int__5 = 1;
#line 110
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 110
label_3:
;
#line 110
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 110
___nl__bool__7 = ___nl__int__8;
#line 110
if(___nl__bool__7){ goto label_1;}
#line 110
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 110
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 111
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(266)));
#line 111
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(72));
#line 111
if(___nl__bool__11){ goto label_5;}
#line 115
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(40));
#line 115
if(___nl__bool__11){ goto label_6;}
#line 115
c_rt_lib0move(&___nl__im__12,___get_global_const(16));
#line 115
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 115
nl_die_arg(___nl__im__12);
#line 111
label_5:
;
#line 112
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(167)));
#line 112
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(455)));
#line 112
___nl__im_ptr__19 = &((*___ref___rec__1).logic0field);
#line 112
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 112
___nl__im_ptr__19 = NULL;
#line 112
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(388)));
#line 112
c_rt_lib0clear(&___nl__im__18);
#line 112
c_rt_lib0move(&___nl__im__15, translator_priv0var_type_to_reg_type(___nl__im__16, ___nl__im__17));
#line 112
c_rt_lib0clear(&___nl__im__16);
#line 112
c_rt_lib0clear(&___nl__im__17);
#line 112
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 112
c_rt_lib0move(&___nl__im__13, translator_priv0new_declaration(___nl__im__14, ___ref___rec__1, ___nl__im__15, ___nl__im__20));
#line 112
c_rt_lib0clear(&___nl__im__14);
#line 112
c_rt_lib0clear(&___nl__im__15);
#line 112
c_rt_lib0clear(&___nl__im__20);
#line 113
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(224)));
#line 113
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(455)));
#line 113
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(3, ___get_global_const(331), ___nl__im__22, ___get_global_const(432), ___nl__im__13, ___get_global_const(205), ___nl__im__23));
#line 113
c_rt_lib0clear(&___nl__im__22);
#line 113
c_rt_lib0clear(&___nl__im__23);
#line 114
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 114
c_rt_lib0move(&___nl__im__25,___get_global_const(214));
#line 114
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___nl__im_ptr__24), ___nl__im__25));
#line 114
c_rt_lib0delete(array0push(&___nl__im__25, ___nl__im__21));
#line 114
c_rt_lib0move(&___nl__string__26,___get_global_const(214));
#line 114
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__24, ___nl__string__26, ___nl__im__25));
#line 114
___nl__im_ptr__24 = NULL;
#line 114
c_rt_lib0clear(&___nl__im__25);
#line 114
c_rt_lib0clear(&___nl__string__26);
#line 115
goto label_4;
#line 115
label_6:
;
#line 116
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(167)));
#line 116
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(455)));
#line 116
___nl__im_ptr__33 = &((*___ref___rec__1).logic0field);
#line 116
c_rt_lib0copy(&___nl__im__32, (*___nl__im_ptr__33));
#line 116
___nl__im_ptr__33 = NULL;
#line 116
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(388)));
#line 116
c_rt_lib0clear(&___nl__im__32);
#line 116
c_rt_lib0move(&___nl__im__29, translator_priv0var_type_to_reg_type(___nl__im__30, ___nl__im__31));
#line 116
c_rt_lib0clear(&___nl__im__30);
#line 116
c_rt_lib0clear(&___nl__im__31);
#line 116
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 116
c_rt_lib0move(&___nl__im__27, translator_priv0new_declaration(___nl__im__28, ___ref___rec__1, ___nl__im__29, ___nl__im__34));
#line 116
c_rt_lib0clear(&___nl__im__28);
#line 116
c_rt_lib0clear(&___nl__im__29);
#line 116
c_rt_lib0clear(&___nl__im__34);
#line 117
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 117
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(455)));
#line 117
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(331), ___nl__im__36, ___get_global_const(432), ___nl__im__27, ___get_global_const(205), ___nl__im__37));
#line 117
c_rt_lib0clear(&___nl__im__36);
#line 117
c_rt_lib0clear(&___nl__im__37);
#line 118
___nl__im_ptr__38 = &((*___ref___rec__1).result0field);
#line 118
c_rt_lib0move(&___nl__im__39,___get_global_const(214));
#line 118
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___nl__im_ptr__38), ___nl__im__39));
#line 118
c_rt_lib0delete(array0push(&___nl__im__39, ___nl__im__35));
#line 118
c_rt_lib0move(&___nl__string__40,___get_global_const(214));
#line 118
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__38, ___nl__string__40, ___nl__im__39));
#line 118
___nl__im_ptr__38 = NULL;
#line 118
c_rt_lib0clear(&___nl__im__39);
#line 118
c_rt_lib0clear(&___nl__string__40);
#line 119
goto label_4;
#line 119
label_4:
;
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 120
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 120
goto label_3;
#line 120
label_1:
;
#line 121
___nl__im_ptr__41 = &((*___ref___rec__1).result0field);
#line 121
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(429)));
#line 121
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(455)));
#line 121
c_rt_lib0clear(&___nl__im__44);
#line 121
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 121
c_rt_lib0hash_set_value_dec(___nl__im_ptr__41, ___get_global_const(429), ___nl__im__42);
#line 121
___nl__im_ptr__41 = NULL;
#line 121
c_rt_lib0clear(&___nl__im__42);
#line 121
c_rt_lib0clear(&___nl__im__43);
#line 122
___nl__im_ptr__45 = &((*___ref___rec__1).result0field);
#line 122
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(429)));
#line 122
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(455)));
#line 122
c_rt_lib0clear(&___nl__im__49);
#line 122
___nl__im_ptr__52 = &((*___ref___rec__1).logic0field);
#line 122
c_rt_lib0copy(&___nl__im__51, (*___nl__im_ptr__52));
#line 122
___nl__im_ptr__52 = NULL;
#line 122
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(388)));
#line 122
c_rt_lib0clear(&___nl__im__51);
#line 122
c_rt_lib0move(&___nl__im__47, translator_priv0var_type_to_reg_type(___nl__im__48, ___nl__im__50));
#line 122
c_rt_lib0clear(&___nl__im__48);
#line 122
c_rt_lib0clear(&___nl__im__50);
#line 122
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 122
c_rt_lib0hash_set_value_dec(___nl__im_ptr__45, ___get_global_const(387), ___nl__im__46);
#line 122
___nl__im_ptr__45 = NULL;
#line 122
c_rt_lib0clear(&___nl__im__46);
#line 122
c_rt_lib0clear(&___nl__im__47);
#line 123
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 123
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__53, ___ref___rec__1));
#line 123
c_rt_lib0clear(&___nl__im__53);
#line 125
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 125
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_const(221)));
#line 125
c_rt_lib0clear(&___nl__im__58);
#line 125
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(1005)));
#line 125
c_rt_lib0clear(&___nl__im__57);
#line 125
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 125
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_const(221)));
#line 125
c_rt_lib0clear(&___nl__im__61);
#line 125
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_const(1005)));
#line 125
c_rt_lib0clear(&___nl__im__60);
#line 125
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(2, ___get_global_const(507), ___nl__im__56, ___get_global_const(1005), ___nl__im__59));
#line 125
c_rt_lib0clear(&___nl__im__56);
#line 125
c_rt_lib0clear(&___nl__im__59);
#line 126
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 127
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_const(15)));
#line 127
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__55, ___get_global_const(219), ___nl__im__62, ___get_global_const(205), ___nl__im__63));
#line 127
c_rt_lib0clear(&___nl__im__55);
#line 127
c_rt_lib0clear(&___nl__im__62);
#line 127
c_rt_lib0clear(&___nl__im__63);
#line 129
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(429)));
#line 129
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(205)));
#line 129
c_rt_lib0clear(&___nl__im__65);
#line 129
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_const(205));
#line 129
if(___nl__bool__66){ goto label_8;}
#line 134
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_const(72));
#line 134
if(___nl__bool__66){ goto label_9;}
#line 134
c_rt_lib0move(&___nl__im__67,___get_global_const(16));
#line 134
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(2, ___nl__im__67, ___nl__im__64));
#line 134
nl_die_arg(___nl__im__67);
#line 129
label_8:
;
#line 129
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__64, ___get_global_const(205)));
#line 129
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 130
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(429)));
#line 130
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_const(455)));
#line 130
c_rt_lib0clear(&___nl__im__72);
#line 130
___nl__im_ptr__75 = &((*___ref___rec__1).logic0field);
#line 130
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 130
___nl__im_ptr__75 = NULL;
#line 130
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_const(388)));
#line 130
c_rt_lib0clear(&___nl__im__74);
#line 130
c_rt_lib0move(&___nl__im__70, translator_priv0unwrap_ref(___nl__im__71, ___nl__im__73));
#line 130
c_rt_lib0clear(&___nl__im__71);
#line 130
c_rt_lib0clear(&___nl__im__73);
#line 131
___nl__bool__76 = c_rt_lib0priv_is(___nl__im__70, ___get_global_const(8));
#line 131
if(___nl__bool__76){ goto label_12;}
#line 131
___nl__bool__76 = c_rt_lib0priv_is(___nl__im__70, ___get_global_const(0));
#line 131
label_12:
;
#line 131
___nl__bool__76 = !___nl__bool__76;
#line 131
if(___nl__bool__76){ goto label_11;}
#line 132
c_rt_lib0delete(translator_priv0print_return(___nl__im__54, ___ref___rec__1));
#line 133
goto label_10;
#line 133
label_11:
;
#line 133
label_10:
;
#line 133
//clear ___nl__bool__76;
#line 134
goto label_7;
#line 134
label_9:
;
#line 135
c_rt_lib0delete(translator_priv0print_return(___nl__im__54, ___ref___rec__1));
#line 136
goto label_7;
#line 136
label_7:
;
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
c_rt_lib0clear(&___nl__im__3);
#line 136
//clear ___nl__int__4;
#line 136
//clear ___nl__int__5;
#line 136
//clear ___nl__int__6;
#line 136
//clear ___nl__bool__7;
#line 136
//clear ___nl__int__8;
#line 136
c_rt_lib0clear(&___nl__im__9);
#line 136
c_rt_lib0clear(&___nl__im__10);
#line 136
//clear ___nl__bool__11;
#line 136
c_rt_lib0clear(&___nl__im__12);
#line 136
c_rt_lib0clear(&___nl__im__13);
#line 136
c_rt_lib0clear(&___nl__im__21);
#line 136
c_rt_lib0clear(&___nl__im__27);
#line 136
c_rt_lib0clear(&___nl__im__35);
#line 136
c_rt_lib0clear(&___nl__im__54);
#line 136
c_rt_lib0clear(&___nl__im__64);
#line 136
//clear ___nl__bool__66;
#line 136
c_rt_lib0clear(&___nl__im__67);
#line 136
c_rt_lib0clear(&___nl__im__68);
#line 136
c_rt_lib0clear(&___nl__im__69);
#line 136
c_rt_lib0clear(&___nl__im__70);
#line 136
return NULL;
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
#line 141
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 142
___nl__int__5 = 0;
#line 142
___nl__int__6 = 1;
#line 142
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 142
label_3:
;
#line 142
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 142
___nl__bool__8 = ___nl__int__9;
#line 142
if(___nl__bool__8){ goto label_1;}
#line 142
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 142
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 143
c_rt_lib0move(&___nl__im__11, translator_priv0calc_val(___nl__im__4, ___ref___rec__2));
#line 144
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 144
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(132));
#line 144
c_rt_lib0clear(&___nl__im__13);
#line 144
___nl__bool__12 = !___nl__bool__12;
#line 144
if(___nl__bool__12){ goto label_5;}
#line 145
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 145
c_rt_lib0move(&___nl__im__11, translator_priv0get_cast(___nl__im__11, ___nl__im__14, ___ref___rec__2));
#line 145
c_rt_lib0clear(&___nl__im__14);
#line 146
goto label_4;
#line 146
label_5:
;
#line 146
label_4:
;
#line 146
//clear ___nl__bool__12;
#line 147
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__11));
#line 147
c_rt_lib0clear(&___nl__im__4);
#line 148
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 148
goto label_3;
#line 148
label_1:
;
#line 149
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 149
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(128));
#line 149
c_rt_lib0clear(&___nl__im__16);
#line 149
___nl__bool__15 = !___nl__bool__15;
#line 149
if(___nl__bool__15){ goto label_7;}
#line 150
___nl__int__18 = 0;
#line 150
___nl__int__19 = 1;
#line 150
___nl__int__20 = c_rt_lib0array_len(___nl__im__3);
#line 150
label_10:
;
#line 150
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 150
___nl__bool__21 = ___nl__int__22;
#line 150
if(___nl__bool__21){ goto label_8;}
#line 150
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__3, ___nl__int__18));
#line 150
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 151
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__17, ___ref___rec__2));
#line 151
c_rt_lib0clear(&___nl__im__17);
#line 152
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 152
goto label_10;
#line 152
label_8:
;
#line 153
goto label_6;
#line 153
label_7:
;
#line 153
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 153
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(132));
#line 153
c_rt_lib0clear(&___nl__im__24);
#line 153
___nl__bool__15 = !___nl__bool__15;
#line 153
if(___nl__bool__15){ goto label_11;}
#line 154
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__3));
#line 154
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__26));
#line 154
c_rt_lib0clear(&___nl__im__26);
#line 154
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__25));
#line 154
c_rt_lib0clear(&___nl__im__25);
#line 155
goto label_6;
#line 155
label_11:
;
#line 156
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 156
nl_die_arg(___nl__im__27);
#line 157
goto label_6;
#line 157
label_6:
;
#line 157
//clear ___nl__bool__15;
#line 157
c_rt_lib0clear(&___nl__im__17);
#line 157
//clear ___nl__int__18;
#line 157
//clear ___nl__int__19;
#line 157
//clear ___nl__int__20;
#line 157
//clear ___nl__bool__21;
#line 157
//clear ___nl__int__22;
#line 157
c_rt_lib0clear(&___nl__im__23);
#line 157
c_rt_lib0clear(&___nl__im__27);
#line 157
c_rt_lib0clear(&___nl__im__0);
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__3);
#line 157
c_rt_lib0clear(&___nl__im__4);
#line 157
//clear ___nl__int__5;
#line 157
//clear ___nl__int__6;
#line 157
//clear ___nl__int__7;
#line 157
//clear ___nl__bool__8;
#line 157
//clear ___nl__int__9;
#line 157
c_rt_lib0clear(&___nl__im__10);
#line 157
c_rt_lib0clear(&___nl__im__11);
#line 157
return NULL;
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
#line 162
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 163
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 163
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(514));
#line 163
c_rt_lib0clear(&___nl__im__5);
#line 163
___nl__bool__4 = !___nl__bool__4;
#line 163
if(___nl__bool__4){ goto label_2;}
#line 163
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 163
nl_die_arg(___nl__im__6);
#line 163
goto label_1;
#line 163
label_2:
;
#line 163
label_1:
;
#line 163
//clear ___nl__bool__4;
#line 163
c_rt_lib0clear(&___nl__im__6);
#line 164
___nl__int__8 = 0;
#line 164
___nl__int__9 = 1;
#line 164
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 164
label_5:
;
#line 164
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 164
___nl__bool__11 = ___nl__int__12;
#line 164
if(___nl__bool__11){ goto label_3;}
#line 164
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 164
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 165
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 166
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(370)));
#line 166
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(219)));
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(370)));
#line 166
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_const(219)));
#line 166
c_rt_lib0clear(&___nl__im__19);
#line 166
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(970)));
#line 166
c_rt_lib0clear(&___nl__im__16);
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 167
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 167
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(129));
#line 167
c_rt_lib0clear(&___nl__im__21);
#line 167
___nl__bool__20 = !___nl__bool__20;
#line 167
if(___nl__bool__20){ goto label_7;}
#line 168
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 168
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 168
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(129)));
#line 168
c_rt_lib0clear(&___nl__im__25);
#line 168
c_rt_lib0clear(&___nl__im__26);
#line 168
___nl__im_ptr__29 = &((*___ref___rec__2).logic0field);
#line 168
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 168
___nl__im_ptr__29 = NULL;
#line 168
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(388)));
#line 168
c_rt_lib0clear(&___nl__im__28);
#line 168
c_rt_lib0move(&___nl__im__23, translator_priv0unwrap_ref(___nl__im__24, ___nl__im__27));
#line 168
c_rt_lib0clear(&___nl__im__24);
#line 168
c_rt_lib0clear(&___nl__im__27);
#line 168
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 168
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 168
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(129)));
#line 168
c_rt_lib0clear(&___nl__im__32);
#line 168
c_rt_lib0clear(&___nl__im__33);
#line 168
___nl__im_ptr__36 = &((*___ref___rec__2).logic0field);
#line 168
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 168
___nl__im_ptr__36 = NULL;
#line 168
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(388)));
#line 168
c_rt_lib0clear(&___nl__im__35);
#line 168
c_rt_lib0move(&___nl__im__30, translator_priv0unwrap_ref(___nl__im__31, ___nl__im__34));
#line 168
c_rt_lib0clear(&___nl__im__31);
#line 168
c_rt_lib0clear(&___nl__im__34);
#line 168
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(4)));
#line 168
c_rt_lib0clear(&___nl__im__23);
#line 168
c_rt_lib0clear(&___nl__im__30);
#line 169
___nl__im_ptr__39 = &((*___ref___rec__2).logic0field);
#line 169
c_rt_lib0copy(&___nl__im__38, (*___nl__im_ptr__39));
#line 169
___nl__im_ptr__39 = NULL;
#line 169
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(388)));
#line 169
c_rt_lib0clear(&___nl__im__38);
#line 169
c_rt_lib0move(&___nl__im__22, translator_priv0unwrap_ref(___nl__im__22, ___nl__im__37));
#line 169
c_rt_lib0clear(&___nl__im__37);
#line 170
___nl__im_ptr__42 = &((*___ref___rec__2).logic0field);
#line 170
c_rt_lib0copy(&___nl__im__41, (*___nl__im_ptr__42));
#line 170
___nl__im_ptr__42 = NULL;
#line 170
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(388)));
#line 170
c_rt_lib0clear(&___nl__im__41);
#line 170
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__22, ___nl__im__40));
#line 170
c_rt_lib0clear(&___nl__im__40);
#line 171
goto label_6;
#line 171
label_7:
;
#line 171
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 171
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__43, ___get_global_const(514));
#line 171
c_rt_lib0clear(&___nl__im__43);
#line 171
___nl__bool__20 = !___nl__bool__20;
#line 171
if(___nl__bool__20){ goto label_8;}
#line 172
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 172
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 172
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(514)));
#line 172
c_rt_lib0clear(&___nl__im__47);
#line 172
c_rt_lib0clear(&___nl__im__48);
#line 172
___nl__im_ptr__51 = &((*___ref___rec__2).logic0field);
#line 172
c_rt_lib0copy(&___nl__im__50, (*___nl__im_ptr__51));
#line 172
___nl__im_ptr__51 = NULL;
#line 172
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(388)));
#line 172
c_rt_lib0clear(&___nl__im__50);
#line 172
c_rt_lib0move(&___nl__im__45, translator_priv0unwrap_ref(___nl__im__46, ___nl__im__49));
#line 172
c_rt_lib0clear(&___nl__im__46);
#line 172
c_rt_lib0clear(&___nl__im__49);
#line 172
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 172
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 172
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__55, ___get_global_const(514)));
#line 172
c_rt_lib0clear(&___nl__im__54);
#line 172
c_rt_lib0clear(&___nl__im__55);
#line 172
___nl__im_ptr__58 = &((*___ref___rec__2).logic0field);
#line 172
c_rt_lib0copy(&___nl__im__57, (*___nl__im_ptr__58));
#line 172
___nl__im_ptr__58 = NULL;
#line 172
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(388)));
#line 172
c_rt_lib0clear(&___nl__im__57);
#line 172
c_rt_lib0move(&___nl__im__52, translator_priv0unwrap_ref(___nl__im__53, ___nl__im__56));
#line 172
c_rt_lib0clear(&___nl__im__53);
#line 172
c_rt_lib0clear(&___nl__im__56);
#line 172
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(6)));
#line 172
c_rt_lib0clear(&___nl__im__45);
#line 172
c_rt_lib0clear(&___nl__im__52);
#line 173
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__44, ___nl__im__15));
#line 173
___nl__im_ptr__63 = &((*___ref___rec__2).logic0field);
#line 173
c_rt_lib0copy(&___nl__im__62, (*___nl__im_ptr__63));
#line 173
___nl__im_ptr__63 = NULL;
#line 173
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_const(388)));
#line 173
c_rt_lib0clear(&___nl__im__62);
#line 173
c_rt_lib0move(&___nl__im__59, translator_priv0unwrap_ref(___nl__im__60, ___nl__im__61));
#line 173
c_rt_lib0clear(&___nl__im__60);
#line 173
c_rt_lib0clear(&___nl__im__61);
#line 174
___nl__im_ptr__66 = &((*___ref___rec__2).logic0field);
#line 174
c_rt_lib0copy(&___nl__im__65, (*___nl__im_ptr__66));
#line 174
___nl__im_ptr__66 = NULL;
#line 174
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(388)));
#line 174
c_rt_lib0clear(&___nl__im__65);
#line 174
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__59, ___nl__im__64));
#line 174
c_rt_lib0clear(&___nl__im__64);
#line 175
goto label_6;
#line 175
label_8:
;
#line 175
label_6:
;
#line 175
//clear ___nl__bool__20;
#line 175
c_rt_lib0clear(&___nl__im__22);
#line 175
c_rt_lib0clear(&___nl__im__44);
#line 175
c_rt_lib0clear(&___nl__im__59);
#line 176
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(224)));
#line 176
c_rt_lib0move(&___nl__im__68, translator_priv0calc_val(___nl__im__69, ___ref___rec__2));
#line 176
c_rt_lib0clear(&___nl__im__69);
#line 176
c_rt_lib0move(&___nl__im__67, translator_priv0get_cast(___nl__im__68, ___nl__im__14, ___ref___rec__2));
#line 176
c_rt_lib0clear(&___nl__im__68);
#line 177
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(2, ___get_global_const(370), ___nl__im__15, ___get_global_const(224), ___nl__im__67));
#line 177
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__70));
#line 177
c_rt_lib0clear(&___nl__im__70);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 178
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 178
goto label_5;
#line 178
label_3:
;
#line 179
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__3));
#line 179
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__72));
#line 179
c_rt_lib0clear(&___nl__im__72);
#line 179
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__71));
#line 179
c_rt_lib0clear(&___nl__im__71);
#line 179
c_rt_lib0clear(&___nl__im__0);
#line 179
c_rt_lib0clear(&___nl__im__1);
#line 179
c_rt_lib0clear(&___nl__im__3);
#line 179
c_rt_lib0clear(&___nl__im__7);
#line 179
//clear ___nl__int__8;
#line 179
//clear ___nl__int__9;
#line 179
//clear ___nl__int__10;
#line 179
//clear ___nl__bool__11;
#line 179
//clear ___nl__int__12;
#line 179
c_rt_lib0clear(&___nl__im__13);
#line 179
c_rt_lib0clear(&___nl__im__14);
#line 179
c_rt_lib0clear(&___nl__im__15);
#line 179
c_rt_lib0clear(&___nl__im__67);
#line 179
return NULL;
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
#line 183
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 185
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 185
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(518));
#line 185
c_rt_lib0clear(&___nl__im__6);
#line 185
___nl__bool__5 = !___nl__bool__5;
#line 185
if(___nl__bool__5){ goto label_2;}
#line 186
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 186
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 186
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(518)));
#line 186
c_rt_lib0clear(&___nl__im__8);
#line 186
c_rt_lib0clear(&___nl__im__9);
#line 186
___nl__im_ptr__12 = &((*___ref___rec__2).logic0field);
#line 186
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 186
___nl__im_ptr__12 = NULL;
#line 186
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(388)));
#line 186
c_rt_lib0clear(&___nl__im__11);
#line 186
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__7, ___nl__im__10));
#line 186
c_rt_lib0clear(&___nl__im__7);
#line 186
c_rt_lib0clear(&___nl__im__10);
#line 187
goto label_1;
#line 187
label_2:
;
#line 188
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 189
goto label_1;
#line 189
label_1:
;
#line 189
//clear ___nl__bool__5;
#line 190
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(464)));
#line 190
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(219)));
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(948));
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
___nl__bool__13 = !___nl__bool__13;
#line 190
___nl__bool__13 = !___nl__bool__13;
#line 190
if(___nl__bool__13){ goto label_4;}
#line 192
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 192
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(518));
#line 192
c_rt_lib0clear(&___nl__im__18);
#line 192
___nl__bool__17 = !___nl__bool__17;
#line 192
if(___nl__bool__17){ goto label_6;}
#line 193
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(14)));
#line 194
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 194
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__22));
#line 194
c_rt_lib0clear(&___nl__im__22);
#line 194
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 194
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__24));
#line 194
c_rt_lib0clear(&___nl__im__24);
#line 194
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__23, ___get_global_const(28)));
#line 194
c_rt_lib0clear(&___nl__im__21);
#line 194
c_rt_lib0clear(&___nl__im__23);
#line 194
___nl__im_ptr__27 = &((*___ref___rec__2).logic0field);
#line 194
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 194
___nl__im_ptr__27 = NULL;
#line 194
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(388)));
#line 194
c_rt_lib0clear(&___nl__im__26);
#line 194
c_rt_lib0move(&___nl__im__16, translator_priv0var_type_to_reg_type(___nl__im__20, ___nl__im__25));
#line 194
c_rt_lib0clear(&___nl__im__20);
#line 194
c_rt_lib0clear(&___nl__im__25);
#line 195
goto label_5;
#line 195
label_6:
;
#line 196
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 197
goto label_5;
#line 197
label_5:
;
#line 197
//clear ___nl__bool__17;
#line 197
c_rt_lib0clear(&___nl__im__19);
#line 198
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(464)));
#line 198
c_rt_lib0move(&___nl__im__29, translator_priv0dest_val(___nl__im__30, ___ref___rec__2));
#line 198
c_rt_lib0clear(&___nl__im__30);
#line 198
c_rt_lib0move(&___nl__im__28, translator_priv0get_cast(___nl__im__29, ___nl__im__16, ___ref___rec__2));
#line 198
c_rt_lib0clear(&___nl__im__29);
#line 198
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__28));
#line 198
c_rt_lib0clear(&___nl__im__28);
#line 199
goto label_3;
#line 199
label_4:
;
#line 199
label_3:
;
#line 199
//clear ___nl__bool__13;
#line 199
c_rt_lib0clear(&___nl__im__16);
#line 200
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 200
___nl__int__31 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__4, ___nl__im__32);
#line 200
c_rt_lib0clear(&___nl__im__32);
#line 201
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 201
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__31));
#line 201
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(464)));
#line 201
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(205)));
#line 201
c_rt_lib0clear(&___nl__im__38);
#line 201
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__3, ___get_global_const(535), ___nl__im__35, ___get_global_const(522), ___nl__im__36, ___get_global_const(540), ___nl__im__37));
#line 201
c_rt_lib0clear(&___nl__im__35);
#line 201
c_rt_lib0clear(&___nl__im__36);
#line 201
c_rt_lib0clear(&___nl__im__37);
#line 201
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__34));
#line 201
c_rt_lib0clear(&___nl__im__34);
#line 201
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__33));
#line 201
c_rt_lib0clear(&___nl__im__33);
#line 201
c_rt_lib0clear(&___nl__im__0);
#line 201
c_rt_lib0clear(&___nl__im__1);
#line 201
c_rt_lib0clear(&___nl__im__3);
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
//clear ___nl__int__31;
#line 201
return NULL;
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
#line 206
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(455)));
#line 206
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 206
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 206
___nl__im_ptr__7 = NULL;
#line 206
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(388)));
#line 206
c_rt_lib0clear(&___nl__im__6);
#line 206
c_rt_lib0move(&___nl__im__3, translator_priv0var_type_to_reg_type(___nl__im__4, ___nl__im__5));
#line 206
c_rt_lib0clear(&___nl__im__4);
#line 206
c_rt_lib0clear(&___nl__im__5);
#line 207
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 207
c_rt_lib0move(&___nl__im__8, translator_priv0new_declaration(___nl__im__9, ___ref___rec__1, ___nl__im__3, ___nl__im__2));
#line 207
c_rt_lib0clear(&___nl__im__9);
#line 208
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 208
c_rt_lib0move(&___nl__im__11,___get_global_const(785));
#line 208
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 208
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(455)));
#line 208
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(205), ___nl__im__13, ___get_global_const(432), ___nl__im__8));
#line 208
c_rt_lib0clear(&___nl__im__13);
#line 208
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 208
c_rt_lib0move(&___nl__string__14,___get_global_const(785));
#line 208
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__14, ___nl__im__11));
#line 208
___nl__im_ptr__10 = NULL;
#line 208
c_rt_lib0clear(&___nl__im__11);
#line 208
c_rt_lib0clear(&___nl__im__12);
#line 208
c_rt_lib0clear(&___nl__string__14);
#line 209
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 209
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(72));
#line 209
if(___nl__bool__16){ goto label_2;}
#line 210
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(219));
#line 210
if(___nl__bool__16){ goto label_3;}
#line 210
c_rt_lib0move(&___nl__im__17,___get_global_const(16));
#line 210
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 210
nl_die_arg(___nl__im__17);
#line 209
label_2:
;
#line 210
goto label_1;
#line 210
label_3:
;
#line 210
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(219)));
#line 210
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 211
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(205)));
#line 211
___nl__im_ptr__24 = &((*___ref___rec__1).logic0field);
#line 211
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 211
___nl__im_ptr__24 = NULL;
#line 211
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(388)));
#line 211
c_rt_lib0clear(&___nl__im__23);
#line 211
___nl__bool__20 = tct0is_own_type(___nl__im__21, ___nl__im__22);
#line 211
c_rt_lib0clear(&___nl__im__21);
#line 211
c_rt_lib0clear(&___nl__im__22);
#line 211
___nl__bool__20 = !___nl__bool__20;
#line 211
if(___nl__bool__20){ goto label_5;}
#line 212
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 213
goto label_4;
#line 213
label_5:
;
#line 214
c_rt_lib0delete(translator_priv0print_val(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 215
goto label_4;
#line 215
label_4:
;
#line 215
//clear ___nl__bool__20;
#line 216
goto label_1;
#line 216
label_1:
;
#line 217
c_rt_lib0clear(&___nl__im__0);
#line 217
c_rt_lib0clear(&___nl__im__2);
#line 217
c_rt_lib0clear(&___nl__im__3);
#line 217
c_rt_lib0clear(&___nl__im__15);
#line 217
//clear ___nl__bool__16;
#line 217
c_rt_lib0clear(&___nl__im__17);
#line 217
c_rt_lib0clear(&___nl__im__18);
#line 217
c_rt_lib0clear(&___nl__im__19);
#line 217
return ___nl__im__8;
return NULL;
}

ImmT  translator_priv0load_const(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 221
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(224), ___nl__im__0));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__im__4));
#line 221
c_rt_lib0clear(&___nl__im__4);
#line 221
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 221
c_rt_lib0clear(&___nl__im__3);
#line 221
c_rt_lib0clear(&___nl__im__0);
#line 221
c_rt_lib0clear(&___nl__im__1);
#line 221
return NULL;
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
#line 225
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 225
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 225
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 225
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1302), ___nl__im__3, ___get_global_const(1303), ___nl__im__4, ___get_global_const(1304), ___nl__im__5));
#line 225
c_rt_lib0clear(&___nl__im__3);
#line 225
c_rt_lib0clear(&___nl__im__4);
#line 225
c_rt_lib0clear(&___nl__im__5);
#line 225
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 225
c_rt_lib0clear(&___nl__im__2);
#line 225
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 225
c_rt_lib0clear(&___nl__im__1);
#line 225
return ___nl__im__0;
#line 225
c_rt_lib0clear(&___nl__im__0);
#line 225
return NULL;
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
bool  ___nl__bool__115 = false;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
ImmT * ___nl__im_ptr__120 = NULL;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
bool  ___nl__bool__124 = false;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
bool  ___nl__bool__129 = false;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
INT  ___nl__int__134 = 0;
INT  ___nl__int__135 = 0;
INT  ___nl__int__136 = 0;
bool  ___nl__bool__137 = false;
INT  ___nl__int__138 = 0;
INT  ___nl__int__139 = 0;
ImmT  ___nl__im__140 = NULL;
bool  ___nl__bool__141 = false;
bool  ___nl__bool__142 = false;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
bool  ___nl__bool__149 = false;
INT  ___nl__int__150 = 0;
#line 229
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 230
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 231
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 232
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 233
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 234
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 234
___nl__int__10 = c_rt_lib0array_len(___nl__im__11);
#line 234
c_rt_lib0clear(&___nl__im__11);
#line 234
___nl__int__12 = 1;
#line 234
___nl__int__9 = ___nl__int__10 - ___nl__int__12;
#line 234
//clear ___nl__int__10;
#line 234
//clear ___nl__int__12;
#line 234
label_2:
;
#line 234
___nl__int__14 = 0;
#line 234
___nl__int__15 = ___nl__int__9 >= ___nl__int__14;
#line 234
___nl__bool__13 = ___nl__int__15;
#line 234
//clear ___nl__int__14;
#line 234
//clear ___nl__int__15;
#line 234
___nl__bool__13 = !___nl__bool__13;
#line 234
if(___nl__bool__13){ goto label_1;}
#line 235
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 235
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__19, ___nl__int__9));
#line 235
c_rt_lib0clear(&___nl__im__19);
#line 235
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(266)));
#line 235
c_rt_lib0clear(&___nl__im__18);
#line 235
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(40));
#line 235
c_rt_lib0clear(&___nl__im__17);
#line 235
___nl__bool__16 = !___nl__bool__16;
#line 235
___nl__bool__16 = !___nl__bool__16;
#line 235
if(___nl__bool__16){ goto label_5;}
#line 235
goto label_3;
#line 235
goto label_4;
#line 235
label_5:
;
#line 235
label_4:
;
#line 235
//clear ___nl__bool__16;
#line 236
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 236
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__22, ___nl__int__9));
#line 236
c_rt_lib0clear(&___nl__im__22);
#line 236
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(224)));
#line 236
c_rt_lib0clear(&___nl__im__21);
#line 237
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__im__20, ___ref___rec__3));
#line 238
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 238
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 238
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(464)));
#line 238
c_rt_lib0clear(&___nl__im__25);
#line 238
c_rt_lib0clear(&___nl__im__26);
#line 238
___nl__bool__23 = hash0has_key(___nl__im__8, ___nl__im__24);
#line 238
c_rt_lib0clear(&___nl__im__24);
#line 238
___nl__bool__23 = !___nl__bool__23;
#line 238
if(___nl__bool__23){ goto label_7;}
#line 238
goto label_3;
#line 238
goto label_6;
#line 238
label_7:
;
#line 238
label_6:
;
#line 238
//clear ___nl__bool__23;
#line 239
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 239
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(219)));
#line 239
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(464)));
#line 239
c_rt_lib0clear(&___nl__im__28);
#line 239
c_rt_lib0clear(&___nl__im__29);
#line 239
___nl__int__30 = 0;
#line 239
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__30));
#line 239
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__27, ___nl__im__31));
#line 239
c_rt_lib0clear(&___nl__im__27);
#line 239
//clear ___nl__int__30;
#line 239
c_rt_lib0clear(&___nl__im__31);
#line 240
c_rt_lib0move(&___nl__im__32, ptd0int_to_string(___nl__int__9));
#line 240
___nl__int__33 = 0;
#line 240
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__33));
#line 240
c_rt_lib0delete(hash0set_value(&___nl__im__7, ___nl__im__32, ___nl__im__34));
#line 240
c_rt_lib0clear(&___nl__im__32);
#line 240
//clear ___nl__int__33;
#line 240
c_rt_lib0clear(&___nl__im__34);
#line 240
c_rt_lib0clear(&___nl__im__20);
#line 240
label_3:
;
#line 234
___nl__int__35 = 1;
#line 234
___nl__int__9 = ___nl__int__9 - ___nl__int__35;
#line 234
//clear ___nl__int__35;
#line 241
goto label_2;
#line 241
label_1:
;
#line 242
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 243
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 243
___nl__int__37 = c_rt_lib0array_len(___nl__im__38);
#line 243
c_rt_lib0clear(&___nl__im__38);
#line 243
___nl__int__39 = 0;
#line 243
___nl__int__40 = 1;
#line 243
label_10:
;
#line 243
___nl__int__42 = ___nl__int__39 >= ___nl__int__37;
#line 243
___nl__bool__41 = ___nl__int__42;
#line 243
if(___nl__bool__41){ goto label_8;}
#line 244
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(265)));
#line 244
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__44, ___nl__int__39));
#line 244
c_rt_lib0clear(&___nl__im__44);
#line 245
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(266)));
#line 245
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(72));
#line 245
if(___nl__bool__46){ goto label_12;}
#line 249
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(40));
#line 249
if(___nl__bool__46){ goto label_13;}
#line 249
c_rt_lib0move(&___nl__im__47,___get_global_const(16));
#line 249
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(2, ___nl__im__47, ___nl__im__45));
#line 249
nl_die_arg(___nl__im__47);
#line 245
label_12:
;
#line 246
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 246
c_rt_lib0move(&___nl__im__48, translator_priv0calc_val(___nl__im__49, ___ref___rec__3));
#line 246
c_rt_lib0clear(&___nl__im__49);
#line 247
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(999)));
#line 247
___nl__im_ptr__55 = &((*___ref___rec__3).logic0field);
#line 247
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 247
___nl__im_ptr__55 = NULL;
#line 247
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(388)));
#line 247
c_rt_lib0clear(&___nl__im__54);
#line 247
c_rt_lib0move(&___nl__im__51, translator_priv0var_type_to_reg_type(___nl__im__52, ___nl__im__53));
#line 247
c_rt_lib0clear(&___nl__im__52);
#line 247
c_rt_lib0clear(&___nl__im__53);
#line 247
c_rt_lib0move(&___nl__im__50, translator_priv0get_cast(___nl__im__48, ___nl__im__51, ___ref___rec__3));
#line 247
c_rt_lib0clear(&___nl__im__51);
#line 248
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__50));
#line 248
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__56));
#line 248
c_rt_lib0clear(&___nl__im__56);
#line 249
goto label_11;
#line 249
label_13:
;
#line 250
c_rt_lib0move(&___nl__im__58, ptd0int_to_string(___nl__int__39));
#line 250
___nl__bool__57 = hash0has_key(___nl__im__7, ___nl__im__58);
#line 250
c_rt_lib0clear(&___nl__im__58);
#line 250
___nl__bool__57 = !___nl__bool__57;
#line 250
if(___nl__bool__57){ goto label_15;}
#line 251
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 251
___nl__bool__61 = true;
#line 251
c_rt_lib0move(&___nl__im__59, translator_priv0get_value_of_lvalue(___nl__im__60, ___nl__bool__61, ___ref___rec__3));
#line 251
c_rt_lib0clear(&___nl__im__60);
#line 251
//clear ___nl__bool__61;
#line 252
___nl__int__65 = c_rt_lib0array_len(___nl__im__59);
#line 252
___nl__int__66 = 1;
#line 252
___nl__int__64 = ___nl__int__65 - ___nl__int__66;
#line 252
//clear ___nl__int__65;
#line 252
//clear ___nl__int__66;
#line 252
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_get(___nl__im__59, ___nl__int__64));
#line 252
//clear ___nl__int__64;
#line 252
___nl__int__69 = c_rt_lib0array_len(___nl__im__59);
#line 252
___nl__int__70 = 1;
#line 252
___nl__int__68 = ___nl__int__69 - ___nl__int__70;
#line 252
//clear ___nl__int__69;
#line 252
//clear ___nl__int__70;
#line 252
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__59, ___nl__int__68));
#line 252
//clear ___nl__int__68;
#line 252
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__67, ___get_global_const(219)));
#line 252
c_rt_lib0clear(&___nl__im__63);
#line 252
c_rt_lib0clear(&___nl__im__67);
#line 253
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(999)));
#line 254
___nl__im_ptr__75 = &((*___ref___rec__3).logic0field);
#line 254
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 254
___nl__im_ptr__75 = NULL;
#line 254
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_const(388)));
#line 254
c_rt_lib0clear(&___nl__im__74);
#line 254
c_rt_lib0move(&___nl__im__71, translator_priv0var_type_to_reg_type(___nl__im__72, ___nl__im__73));
#line 254
c_rt_lib0clear(&___nl__im__72);
#line 254
c_rt_lib0clear(&___nl__im__73);
#line 255
c_rt_lib0move(&___nl__im__76, translator_priv0get_cast(___nl__im__62, ___nl__im__71, ___ref___rec__3));
#line 256
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__76));
#line 256
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__77));
#line 256
c_rt_lib0clear(&___nl__im__77);
#line 257
c_rt_lib0move(&___nl__im__79, ptd0int_to_string(___nl__int__39));
#line 257
c_rt_lib0copy(&___nl__im__78, ___nl__im__59);
#line 257
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__79, ___nl__im__78));
#line 257
c_rt_lib0clear(&___nl__im__78);
#line 257
c_rt_lib0clear(&___nl__im__79);
#line 258
___nl__bool__80 = nlasm0eq_reg(___nl__im__62, ___nl__im__76);
#line 258
___nl__bool__80 = !___nl__bool__80;
#line 258
___nl__bool__80 = !___nl__bool__80;
#line 258
if(___nl__bool__80){ goto label_17;}
#line 259
c_rt_lib0move(&___nl__im__82, ptd0int_to_string(___nl__int__39));
#line 259
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_mk(2, ___get_global_const(1305), ___nl__im__62, ___get_global_const(1306), ___nl__im__76));
#line 259
c_rt_lib0copy(&___nl__im__81, ___nl__im__83);
#line 259
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__82, ___nl__im__81));
#line 259
c_rt_lib0clear(&___nl__im__81);
#line 259
c_rt_lib0clear(&___nl__im__82);
#line 259
c_rt_lib0clear(&___nl__im__83);
#line 260
goto label_16;
#line 260
label_17:
;
#line 260
label_16:
;
#line 260
//clear ___nl__bool__80;
#line 261
goto label_14;
#line 261
label_15:
;
#line 262
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 262
c_rt_lib0move(&___nl__im__85, translator_priv0value_type_to_reg_type(___nl__im__86, ___ref___rec__3));
#line 262
c_rt_lib0clear(&___nl__im__86);
#line 262
c_rt_lib0move(&___nl__im__84, translator_priv0new_register(___ref___rec__3, ___nl__im__85));
#line 262
c_rt_lib0clear(&___nl__im__85);
#line 263
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(224)));
#line 263
c_rt_lib0delete(translator_priv0print_val(___nl__im__87, ___nl__im__84, ___ref___rec__3));
#line 263
c_rt_lib0clear(&___nl__im__87);
#line 264
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__84));
#line 264
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__88));
#line 264
c_rt_lib0clear(&___nl__im__88);
#line 265
goto label_14;
#line 265
label_14:
;
#line 265
//clear ___nl__bool__57;
#line 265
c_rt_lib0clear(&___nl__im__59);
#line 265
c_rt_lib0clear(&___nl__im__62);
#line 265
c_rt_lib0clear(&___nl__im__71);
#line 265
c_rt_lib0clear(&___nl__im__76);
#line 265
c_rt_lib0clear(&___nl__im__84);
#line 266
goto label_11;
#line 266
label_11:
;
#line 267
c_rt_lib0move(&___nl__im__89, translator_priv0save_registers(___ref___rec__3));
#line 267
c_rt_lib0delete(array0push(&___nl__im__36, ___nl__im__89));
#line 267
c_rt_lib0clear(&___nl__im__89);
#line 267
c_rt_lib0clear(&___nl__im__43);
#line 267
c_rt_lib0clear(&___nl__im__45);
#line 267
//clear ___nl__bool__46;
#line 267
c_rt_lib0clear(&___nl__im__47);
#line 267
c_rt_lib0clear(&___nl__im__48);
#line 267
c_rt_lib0clear(&___nl__im__50);
#line 268
___nl__int__39 = ___nl__int__39 + ___nl__int__40;
#line 268
goto label_10;
#line 268
label_8:
;
#line 269
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 269
c_rt_lib0move(&___nl__im__93,___get_global_const(1307));
#line 269
___nl__bool__90 = c_rt_lib0eq(___nl__im__92, ___nl__im__93);
#line 269
c_rt_lib0clear(&___nl__im__92);
#line 269
c_rt_lib0clear(&___nl__im__93);
#line 269
___nl__bool__91 = !___nl__bool__90;
#line 269
if(___nl__bool__91){ goto label_20;}
#line 269
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 269
c_rt_lib0move(&___nl__im__95,___get_global_const(283));
#line 269
___nl__bool__90 = c_rt_lib0eq(___nl__im__94, ___nl__im__95);
#line 269
c_rt_lib0clear(&___nl__im__94);
#line 269
c_rt_lib0clear(&___nl__im__95);
#line 269
label_20:
;
#line 269
//clear ___nl__bool__91;
#line 269
___nl__bool__90 = !___nl__bool__90;
#line 269
if(___nl__bool__90){ goto label_19;}
#line 270
___nl__int__100 = 0;
#line 270
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_get(___nl__im__4, ___nl__int__100));
#line 270
//clear ___nl__int__100;
#line 270
___nl__int__102 = 0;
#line 270
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_get(___nl__im__4, ___nl__int__102));
#line 270
//clear ___nl__int__102;
#line 270
c_rt_lib0move(&___nl__im__98, c_rt_lib0priv_as(___nl__im__101, ___get_global_const(40)));
#line 270
c_rt_lib0clear(&___nl__im__99);
#line 270
c_rt_lib0clear(&___nl__im__101);
#line 270
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__98));
#line 270
c_rt_lib0clear(&___nl__im__98);
#line 270
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__97));
#line 270
c_rt_lib0clear(&___nl__im__97);
#line 270
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__96));
#line 270
c_rt_lib0clear(&___nl__im__96);
#line 271
goto label_18;
#line 271
label_19:
;
#line 271
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 271
c_rt_lib0move(&___nl__im__105,___get_global_const(38));
#line 271
___nl__bool__90 = c_rt_lib0eq(___nl__im__104, ___nl__im__105);
#line 271
c_rt_lib0clear(&___nl__im__104);
#line 271
c_rt_lib0clear(&___nl__im__105);
#line 271
___nl__bool__103 = !___nl__bool__90;
#line 271
if(___nl__bool__103){ goto label_22;}
#line 271
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 271
c_rt_lib0move(&___nl__im__107,___get_global_const(283));
#line 271
___nl__bool__90 = c_rt_lib0eq(___nl__im__106, ___nl__im__107);
#line 271
c_rt_lib0clear(&___nl__im__106);
#line 271
c_rt_lib0clear(&___nl__im__107);
#line 271
label_22:
;
#line 271
//clear ___nl__bool__103;
#line 271
___nl__bool__90 = !___nl__bool__90;
#line 271
if(___nl__bool__90){ goto label_21;}
#line 272
___nl__int__112 = 0;
#line 272
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_get(___nl__im__4, ___nl__int__112));
#line 272
//clear ___nl__int__112;
#line 272
___nl__int__114 = 0;
#line 272
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_get(___nl__im__4, ___nl__int__114));
#line 272
//clear ___nl__int__114;
#line 272
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__113, ___get_global_const(224)));
#line 272
c_rt_lib0clear(&___nl__im__111);
#line 272
c_rt_lib0clear(&___nl__im__113);
#line 272
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__110));
#line 272
c_rt_lib0clear(&___nl__im__110);
#line 272
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__109));
#line 272
c_rt_lib0clear(&___nl__im__109);
#line 272
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__108));
#line 272
c_rt_lib0clear(&___nl__im__108);
#line 273
goto label_18;
#line 273
label_21:
;
#line 273
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(8));
#line 273
___nl__bool__90 = !___nl__bool__90;
#line 273
___nl__bool__115 = !___nl__bool__90;
#line 273
if(___nl__bool__115){ goto label_24;}
#line 273
c_rt_lib0move(&___nl__im__116, nlasm0is_empty(___nl__im__1));
#line 273
___nl__bool__90 = c_rt_lib0check_true_native(___nl__im__116);
#line 273
c_rt_lib0clear(&___nl__im__116);
#line 273
___nl__bool__90 = !___nl__bool__90;
#line 273
label_24:
;
#line 273
//clear ___nl__bool__115;
#line 273
___nl__bool__90 = !___nl__bool__90;
#line 273
if(___nl__bool__90){ goto label_23;}
#line 274
___nl__im_ptr__120 = &((*___ref___rec__3).logic0field);
#line 274
c_rt_lib0copy(&___nl__im__119, (*___nl__im_ptr__120));
#line 274
___nl__im_ptr__120 = NULL;
#line 274
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_const(388)));
#line 274
c_rt_lib0clear(&___nl__im__119);
#line 274
c_rt_lib0move(&___nl__im__117, translator_priv0var_type_to_reg_type(___nl__im__2, ___nl__im__118));
#line 274
c_rt_lib0clear(&___nl__im__118);
#line 275
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 275
___nl__bool__121 = nlasm0eq_reg_type(___nl__im__117, ___nl__im__122);
#line 275
c_rt_lib0clear(&___nl__im__122);
#line 275
___nl__bool__121 = !___nl__bool__121;
#line 276
c_rt_lib0copy(&___nl__im__123, ___nl__im__1);
#line 277
___nl__bool__124 = ___nl__bool__121;
#line 277
___nl__bool__124 = !___nl__bool__124;
#line 277
if(___nl__bool__124){ goto label_26;}
#line 277
c_rt_lib0move(&___nl__im__123, translator_priv0new_register(___ref___rec__3, ___nl__im__117));
#line 277
goto label_25;
#line 277
label_26:
;
#line 277
label_25:
;
#line 277
//clear ___nl__bool__124;
#line 278
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 278
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 278
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__123, ___get_global_const(266), ___nl__im__127, ___get_global_const(268), ___nl__im__128, ___get_global_const(265), ___nl__im__4));
#line 278
c_rt_lib0clear(&___nl__im__127);
#line 278
c_rt_lib0clear(&___nl__im__128);
#line 278
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__126));
#line 278
c_rt_lib0clear(&___nl__im__126);
#line 278
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__125));
#line 278
c_rt_lib0clear(&___nl__im__125);
#line 279
___nl__bool__129 = ___nl__bool__121;
#line 279
___nl__bool__129 = !___nl__bool__129;
#line 279
if(___nl__bool__129){ goto label_28;}
#line 279
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__123, ___ref___rec__3));
#line 279
goto label_27;
#line 279
label_28:
;
#line 279
label_27:
;
#line 279
//clear ___nl__bool__129;
#line 280
goto label_18;
#line 280
label_23:
;
#line 281
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(151)));
#line 281
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(167)));
#line 281
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__1, ___get_global_const(266), ___nl__im__132, ___get_global_const(268), ___nl__im__133, ___get_global_const(265), ___nl__im__4));
#line 281
c_rt_lib0clear(&___nl__im__132);
#line 281
c_rt_lib0clear(&___nl__im__133);
#line 281
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__131));
#line 281
c_rt_lib0clear(&___nl__im__131);
#line 281
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__130));
#line 281
c_rt_lib0clear(&___nl__im__130);
#line 282
goto label_18;
#line 282
label_18:
;
#line 282
//clear ___nl__bool__90;
#line 282
c_rt_lib0clear(&___nl__im__117);
#line 282
//clear ___nl__bool__121;
#line 282
c_rt_lib0clear(&___nl__im__123);
#line 283
___nl__int__135 = c_rt_lib0array_len(___nl__im__36);
#line 283
___nl__int__136 = 1;
#line 283
___nl__int__134 = ___nl__int__135 - ___nl__int__136;
#line 283
//clear ___nl__int__135;
#line 283
//clear ___nl__int__136;
#line 283
label_30:
;
#line 283
___nl__int__138 = 0;
#line 283
___nl__int__139 = ___nl__int__134 >= ___nl__int__138;
#line 283
___nl__bool__137 = ___nl__int__139;
#line 283
//clear ___nl__int__138;
#line 283
//clear ___nl__int__139;
#line 283
___nl__bool__137 = !___nl__bool__137;
#line 283
if(___nl__bool__137){ goto label_29;}
#line 284
c_rt_lib0move(&___nl__im__140, ptd0int_to_string(___nl__int__134));
#line 285
___nl__bool__141 = hash0has_key(___nl__im__5, ___nl__im__140);
#line 285
___nl__bool__141 = !___nl__bool__141;
#line 285
___nl__bool__141 = !___nl__bool__141;
#line 285
if(___nl__bool__141){ goto label_33;}
#line 285
goto label_31;
#line 285
goto label_32;
#line 285
label_33:
;
#line 285
label_32:
;
#line 285
//clear ___nl__bool__141;
#line 286
___nl__bool__142 = hash0has_key(___nl__im__6, ___nl__im__140);
#line 286
___nl__bool__142 = !___nl__bool__142;
#line 286
if(___nl__bool__142){ goto label_35;}
#line 287
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__140));
#line 287
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_const(1305)));
#line 287
c_rt_lib0clear(&___nl__im__144);
#line 287
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__140));
#line 287
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_const(1306)));
#line 287
c_rt_lib0clear(&___nl__im__146);
#line 287
c_rt_lib0delete(translator_priv0move(___nl__im__143, ___nl__im__145, ___ref___rec__3));
#line 287
c_rt_lib0clear(&___nl__im__143);
#line 287
c_rt_lib0clear(&___nl__im__145);
#line 288
goto label_34;
#line 288
label_35:
;
#line 288
label_34:
;
#line 288
//clear ___nl__bool__142;
#line 289
c_rt_lib0move(&___nl__im__148, ptd0int_to_string(___nl__int__134));
#line 289
c_rt_lib0move(&___nl__im__147, hash0get_value(___nl__im__5, ___nl__im__148));
#line 289
c_rt_lib0clear(&___nl__im__148);
#line 289
___nl__bool__149 = true;
#line 289
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__147, ___nl__bool__149, ___ref___rec__3));
#line 289
c_rt_lib0clear(&___nl__im__147);
#line 289
//clear ___nl__bool__149;
#line 289
c_rt_lib0clear(&___nl__im__140);
#line 289
label_31:
;
#line 283
___nl__int__150 = 1;
#line 283
___nl__int__134 = ___nl__int__134 - ___nl__int__150;
#line 283
//clear ___nl__int__150;
#line 290
goto label_30;
#line 290
label_29:
;
#line 290
c_rt_lib0clear(&___nl__im__0);
#line 290
c_rt_lib0clear(&___nl__im__1);
#line 290
c_rt_lib0clear(&___nl__im__2);
#line 290
c_rt_lib0clear(&___nl__im__4);
#line 290
c_rt_lib0clear(&___nl__im__5);
#line 290
c_rt_lib0clear(&___nl__im__6);
#line 290
c_rt_lib0clear(&___nl__im__7);
#line 290
c_rt_lib0clear(&___nl__im__8);
#line 290
//clear ___nl__int__9;
#line 290
//clear ___nl__bool__13;
#line 290
c_rt_lib0clear(&___nl__im__20);
#line 290
c_rt_lib0clear(&___nl__im__36);
#line 290
//clear ___nl__int__37;
#line 290
//clear ___nl__int__39;
#line 290
//clear ___nl__int__40;
#line 290
//clear ___nl__bool__41;
#line 290
//clear ___nl__int__42;
#line 290
c_rt_lib0clear(&___nl__im__43);
#line 290
c_rt_lib0clear(&___nl__im__45);
#line 290
//clear ___nl__bool__46;
#line 290
c_rt_lib0clear(&___nl__im__47);
#line 290
c_rt_lib0clear(&___nl__im__48);
#line 290
c_rt_lib0clear(&___nl__im__50);
#line 290
//clear ___nl__int__134;
#line 290
//clear ___nl__bool__137;
#line 290
c_rt_lib0clear(&___nl__im__140);
#line 290
return NULL;
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
#line 294
___nl__im_ptr__3 = &((*___ref___rec__2).debug0field);
#line 294
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 294
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 294
c_rt_lib0hash_set_value_dec(___nl__im_ptr__3, ___get_global_const(506), ___nl__im__4);
#line 294
___nl__im_ptr__3 = NULL;
#line 294
c_rt_lib0clear(&___nl__im__4);
#line 294
c_rt_lib0clear(&___nl__im__5);
#line 295
c_rt_lib0move(&___nl__im__6, translator_priv0save_registers(___ref___rec__2));
#line 296
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 296
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(222));
#line 296
if(___nl__bool__8){ goto label_2;}
#line 298
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(528));
#line 298
if(___nl__bool__8){ goto label_3;}
#line 300
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(969));
#line 300
if(___nl__bool__8){ goto label_4;}
#line 302
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(970));
#line 302
if(___nl__bool__8){ goto label_5;}
#line 304
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(518));
#line 304
if(___nl__bool__8){ goto label_6;}
#line 306
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(464));
#line 306
if(___nl__bool__8){ goto label_7;}
#line 308
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(967));
#line 308
if(___nl__bool__8){ goto label_8;}
#line 310
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(234));
#line 310
if(___nl__bool__8){ goto label_9;}
#line 312
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(971));
#line 312
if(___nl__bool__8){ goto label_10;}
#line 314
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(928));
#line 314
if(___nl__bool__8){ goto label_11;}
#line 316
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(230));
#line 316
if(___nl__bool__8){ goto label_12;}
#line 318
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(231));
#line 318
if(___nl__bool__8){ goto label_13;}
#line 320
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(948));
#line 320
if(___nl__bool__8){ goto label_14;}
#line 321
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(972));
#line 321
if(___nl__bool__8){ goto label_15;}
#line 323
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(973));
#line 323
if(___nl__bool__8){ goto label_16;}
#line 325
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(974));
#line 325
if(___nl__bool__8){ goto label_17;}
#line 325
c_rt_lib0move(&___nl__im__9,___get_global_const(16));
#line 325
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 325
nl_die_arg(___nl__im__9);
#line 296
label_2:
;
#line 296
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(222)));
#line 296
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 297
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__10));
#line 297
c_rt_lib0delete(translator_priv0load_const(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 297
c_rt_lib0clear(&___nl__im__12);
#line 298
goto label_1;
#line 298
label_3:
;
#line 298
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(528)));
#line 298
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 299
c_rt_lib0move(&___nl__im__15, translator_priv0make_string(___nl__im__13, ___ref___rec__2));
#line 299
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__1, ___ref___rec__2));
#line 299
c_rt_lib0clear(&___nl__im__15);
#line 300
goto label_1;
#line 300
label_4:
;
#line 300
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(969)));
#line 300
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 301
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 302
goto label_1;
#line 302
label_5:
;
#line 302
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(970)));
#line 302
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 303
c_rt_lib0delete(translator_priv0load_const(___nl__im__18, ___nl__im__1, ___ref___rec__2));
#line 304
goto label_1;
#line 304
label_6:
;
#line 304
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(518)));
#line 304
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 305
c_rt_lib0delete(translator_priv0print_variant(___nl__im__20, ___nl__im__1, ___ref___rec__2));
#line 306
goto label_1;
#line 306
label_7:
;
#line 306
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(464)));
#line 306
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 307
c_rt_lib0delete(translator_priv0print_variable(___nl__im__22, ___nl__im__1, ___ref___rec__2));
#line 308
goto label_1;
#line 308
label_8:
;
#line 308
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(967)));
#line 308
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 309
c_rt_lib0delete(translator_priv0print_val(___nl__im__24, ___nl__im__1, ___ref___rec__2));
#line 310
goto label_1;
#line 310
label_9:
;
#line 310
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(234)));
#line 310
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 311
c_rt_lib0delete(translator_priv0print_bin_op(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 312
goto label_1;
#line 312
label_10:
;
#line 312
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(971)));
#line 312
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 313
c_rt_lib0delete(translator_priv0print_unary_op(___nl__im__28, ___nl__im__1, ___ref___rec__2));
#line 314
goto label_1;
#line 314
label_11:
;
#line 314
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(928)));
#line 314
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 315
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 315
c_rt_lib0delete(translator_priv0print_fun_val(___nl__im__30, ___nl__im__1, ___nl__im__32, ___ref___rec__2));
#line 315
c_rt_lib0clear(&___nl__im__32);
#line 316
goto label_1;
#line 316
label_12:
;
#line 316
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(230)));
#line 316
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 317
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__im__33, ___nl__im__1, ___ref___rec__2));
#line 318
goto label_1;
#line 318
label_13:
;
#line 318
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(231)));
#line 318
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 319
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__im__35, ___nl__im__1, ___ref___rec__2));
#line 320
goto label_1;
#line 320
label_14:
;
#line 321
goto label_1;
#line 321
label_15:
;
#line 321
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(972)));
#line 321
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 322
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 322
nl_die_arg(___nl__im__39);
#line 323
goto label_1;
#line 323
label_16:
;
#line 323
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(973)));
#line 323
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 324
c_rt_lib0move(&___nl__im__42,___get_global_const(990));
#line 324
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__40, ___nl__im__42, ___nl__im__1, ___ref___rec__2));
#line 324
c_rt_lib0clear(&___nl__im__42);
#line 325
goto label_1;
#line 325
label_17:
;
#line 325
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(974)));
#line 325
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 326
c_rt_lib0move(&___nl__im__45,___get_global_const(190));
#line 326
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__43, ___nl__im__45, ___nl__im__1, ___ref___rec__2));
#line 326
c_rt_lib0clear(&___nl__im__45);
#line 327
goto label_1;
#line 327
label_1:
;
#line 328
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__6, ___ref___rec__2));
#line 328
c_rt_lib0clear(&___nl__im__0);
#line 328
c_rt_lib0clear(&___nl__im__1);
#line 328
c_rt_lib0clear(&___nl__im__6);
#line 328
c_rt_lib0clear(&___nl__im__7);
#line 328
//clear ___nl__bool__8;
#line 328
c_rt_lib0clear(&___nl__im__9);
#line 328
//clear ___nl__int__10;
#line 328
c_rt_lib0clear(&___nl__im__11);
#line 328
c_rt_lib0clear(&___nl__im__13);
#line 328
c_rt_lib0clear(&___nl__im__14);
#line 328
c_rt_lib0clear(&___nl__im__16);
#line 328
c_rt_lib0clear(&___nl__im__17);
#line 328
c_rt_lib0clear(&___nl__im__18);
#line 328
c_rt_lib0clear(&___nl__im__19);
#line 328
c_rt_lib0clear(&___nl__im__20);
#line 328
c_rt_lib0clear(&___nl__im__21);
#line 328
c_rt_lib0clear(&___nl__im__22);
#line 328
c_rt_lib0clear(&___nl__im__23);
#line 328
c_rt_lib0clear(&___nl__im__24);
#line 328
c_rt_lib0clear(&___nl__im__25);
#line 328
c_rt_lib0clear(&___nl__im__26);
#line 328
c_rt_lib0clear(&___nl__im__27);
#line 328
c_rt_lib0clear(&___nl__im__28);
#line 328
c_rt_lib0clear(&___nl__im__29);
#line 328
c_rt_lib0clear(&___nl__im__30);
#line 328
c_rt_lib0clear(&___nl__im__31);
#line 328
c_rt_lib0clear(&___nl__im__33);
#line 328
c_rt_lib0clear(&___nl__im__34);
#line 328
c_rt_lib0clear(&___nl__im__35);
#line 328
c_rt_lib0clear(&___nl__im__36);
#line 328
c_rt_lib0clear(&___nl__im__37);
#line 328
c_rt_lib0clear(&___nl__im__38);
#line 328
c_rt_lib0clear(&___nl__im__39);
#line 328
c_rt_lib0clear(&___nl__im__40);
#line 328
c_rt_lib0clear(&___nl__im__41);
#line 328
c_rt_lib0clear(&___nl__im__43);
#line 328
c_rt_lib0clear(&___nl__im__44);
#line 328
return NULL;
return NULL;
}

ImmT  translator_priv0print_variable(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 332
c_rt_lib0move(&___nl__im__3, translator_priv0get_var_register(___nl__im__0, ___ref___rec__2));
#line 332
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__3, ___ref___rec__2));
#line 332
c_rt_lib0clear(&___nl__im__3);
#line 332
c_rt_lib0clear(&___nl__im__0);
#line 332
c_rt_lib0clear(&___nl__im__1);
#line 332
return NULL;
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
#line 337
___nl__bool__5 = true;
#line 337
c_rt_lib0move(&___nl__im__4, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__5, ___ref___rec__3));
#line 337
//clear ___nl__bool__5;
#line 338
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 338
___nl__int__10 = 1;
#line 338
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 338
//clear ___nl__int__9;
#line 338
//clear ___nl__int__10;
#line 338
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__4, ___nl__int__8));
#line 338
//clear ___nl__int__8;
#line 338
___nl__int__13 = c_rt_lib0array_len(___nl__im__4);
#line 338
___nl__int__14 = 1;
#line 338
___nl__int__12 = ___nl__int__13 - ___nl__int__14;
#line 338
//clear ___nl__int__13;
#line 338
//clear ___nl__int__14;
#line 338
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__12));
#line 338
//clear ___nl__int__12;
#line 338
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(219)));
#line 338
c_rt_lib0clear(&___nl__im__7);
#line 338
c_rt_lib0clear(&___nl__im__11);
#line 339
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__6, ___ref___rec__3));
#line 340
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 340
___nl__int__19 = 1;
#line 340
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 340
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__im__20));
#line 340
//clear ___nl__int__19;
#line 340
c_rt_lib0clear(&___nl__im__20);
#line 340
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 340
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__17, ___get_global_const(219), ___nl__im__18, ___get_global_const(205), ___nl__im__21));
#line 340
c_rt_lib0clear(&___nl__im__17);
#line 340
c_rt_lib0clear(&___nl__im__18);
#line 340
c_rt_lib0clear(&___nl__im__21);
#line 340
c_rt_lib0move(&___nl__im__15, translator_priv0calc_val(___nl__im__16, ___ref___rec__3));
#line 340
c_rt_lib0clear(&___nl__im__16);
#line 341
c_rt_lib0move(&___nl__im__24,___get_global_const(990));
#line 341
___nl__bool__23 = c_rt_lib0eq(___nl__im__1, ___nl__im__24);
#line 341
c_rt_lib0clear(&___nl__im__24);
#line 341
if(___nl__bool__23){ goto label_2;}
#line 341
c_rt_lib0move(&___nl__im__22,___get_global_const(338));
#line 341
goto label_1;
#line 341
label_2:
;
#line 341
c_rt_lib0move(&___nl__im__22,___get_global_const(340));
#line 341
label_1:
;
#line 341
//clear ___nl__bool__23;
#line 341
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__6, ___nl__im__6, ___nl__im__15, ___nl__im__22, ___ref___rec__3));
#line 341
c_rt_lib0clear(&___nl__im__22);
#line 342
___nl__bool__25 = true;
#line 342
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__4, ___nl__bool__25, ___ref___rec__3));
#line 342
//clear ___nl__bool__25;
#line 342
c_rt_lib0clear(&___nl__im__0);
#line 342
c_rt_lib0clear(&___nl__im__1);
#line 342
c_rt_lib0clear(&___nl__im__2);
#line 342
c_rt_lib0clear(&___nl__im__4);
#line 342
c_rt_lib0clear(&___nl__im__6);
#line 342
c_rt_lib0clear(&___nl__im__15);
#line 342
return NULL;
return NULL;
}

ImmT  translator_priv0print_unary_op(nast0unary_op_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
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
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
#line 346
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 346
c_rt_lib0move(&___nl__im__5,___get_global_const(336));
#line 346
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 346
c_rt_lib0clear(&___nl__im__4);
#line 346
c_rt_lib0clear(&___nl__im__5);
#line 346
if(___nl__bool__3){ goto label_4;}
#line 346
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 346
c_rt_lib0move(&___nl__im__7,___get_global_const(338));
#line 346
___nl__bool__3 = c_rt_lib0eq(___nl__im__6, ___nl__im__7);
#line 346
c_rt_lib0clear(&___nl__im__6);
#line 346
c_rt_lib0clear(&___nl__im__7);
#line 346
label_4:
;
#line 346
if(___nl__bool__3){ goto label_3;}
#line 346
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 346
c_rt_lib0move(&___nl__im__9,___get_global_const(340));
#line 346
___nl__bool__3 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 346
c_rt_lib0clear(&___nl__im__8);
#line 346
c_rt_lib0clear(&___nl__im__9);
#line 346
label_3:
;
#line 346
___nl__bool__3 = !___nl__bool__3;
#line 346
if(___nl__bool__3){ goto label_2;}
#line 347
c_rt_lib0move(&___nl__im__11, nlasm0is_empty(___nl__im__1));
#line 347
___nl__bool__10 = c_rt_lib0check_true_native(___nl__im__11);
#line 347
c_rt_lib0clear(&___nl__im__11);
#line 347
___nl__bool__10 = !___nl__bool__10;
#line 347
if(___nl__bool__10){ goto label_6;}
#line 347
c_rt_lib0clear(&___nl__im__0);
#line 347
c_rt_lib0clear(&___nl__im__1);
#line 347
//clear ___nl__bool__3;
#line 347
//clear ___nl__bool__10;
#line 347
return NULL;
#line 347
goto label_5;
#line 347
label_6:
;
#line 347
label_5:
;
#line 347
//clear ___nl__bool__10;
#line 348
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 348
c_rt_lib0delete(translator_priv0print_val(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 348
c_rt_lib0clear(&___nl__im__12);
#line 349
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 349
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__1, ___get_global_const(515), ___nl__im__15));
#line 349
c_rt_lib0clear(&___nl__im__15);
#line 349
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__14));
#line 349
c_rt_lib0clear(&___nl__im__14);
#line 349
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__13));
#line 349
c_rt_lib0clear(&___nl__im__13);
#line 350
goto label_1;
#line 350
label_2:
;
#line 350
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 350
c_rt_lib0move(&___nl__im__17,___get_global_const(990));
#line 350
___nl__bool__3 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 350
c_rt_lib0clear(&___nl__im__16);
#line 350
c_rt_lib0clear(&___nl__im__17);
#line 350
if(___nl__bool__3){ goto label_8;}
#line 350
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 350
c_rt_lib0move(&___nl__im__19,___get_global_const(190));
#line 350
___nl__bool__3 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 350
c_rt_lib0clear(&___nl__im__18);
#line 350
c_rt_lib0clear(&___nl__im__19);
#line 350
label_8:
;
#line 350
___nl__bool__3 = !___nl__bool__3;
#line 350
if(___nl__bool__3){ goto label_7;}
#line 351
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 351
___nl__bool__22 = true;
#line 351
c_rt_lib0move(&___nl__im__20, translator_priv0get_value_of_lvalue(___nl__im__21, ___nl__bool__22, ___ref___rec__2));
#line 351
c_rt_lib0clear(&___nl__im__21);
#line 351
//clear ___nl__bool__22;
#line 352
___nl__int__26 = c_rt_lib0array_len(___nl__im__20);
#line 352
___nl__int__27 = 1;
#line 352
___nl__int__25 = ___nl__int__26 - ___nl__int__27;
#line 352
//clear ___nl__int__26;
#line 352
//clear ___nl__int__27;
#line 352
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__20, ___nl__int__25));
#line 352
//clear ___nl__int__25;
#line 352
___nl__int__30 = c_rt_lib0array_len(___nl__im__20);
#line 352
___nl__int__31 = 1;
#line 352
___nl__int__29 = ___nl__int__30 - ___nl__int__31;
#line 352
//clear ___nl__int__30;
#line 352
//clear ___nl__int__31;
#line 352
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__20, ___nl__int__29));
#line 352
//clear ___nl__int__29;
#line 352
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__28, ___get_global_const(219)));
#line 352
c_rt_lib0clear(&___nl__im__24);
#line 352
c_rt_lib0clear(&___nl__im__28);
#line 353
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 353
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(221)));
#line 353
c_rt_lib0clear(&___nl__im__35);
#line 353
___nl__int__37 = 1;
#line 353
c_rt_lib0move(&___nl__im__38, c_rt_lib0int_new(___nl__int__37));
#line 353
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__im__38));
#line 353
//clear ___nl__int__37;
#line 353
c_rt_lib0clear(&___nl__im__38);
#line 353
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 353
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__34, ___get_global_const(219), ___nl__im__36, ___get_global_const(205), ___nl__im__39));
#line 353
c_rt_lib0clear(&___nl__im__34);
#line 353
c_rt_lib0clear(&___nl__im__36);
#line 353
c_rt_lib0clear(&___nl__im__39);
#line 353
c_rt_lib0move(&___nl__im__32, translator_priv0dest_val(___nl__im__33, ___ref___rec__2));
#line 353
c_rt_lib0clear(&___nl__im__33);
#line 354
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 354
c_rt_lib0move(&___nl__im__43,___get_global_const(990));
#line 354
___nl__bool__41 = c_rt_lib0eq(___nl__im__42, ___nl__im__43);
#line 354
c_rt_lib0clear(&___nl__im__42);
#line 354
c_rt_lib0clear(&___nl__im__43);
#line 354
if(___nl__bool__41){ goto label_10;}
#line 354
c_rt_lib0move(&___nl__im__40,___get_global_const(338));
#line 354
goto label_9;
#line 354
label_10:
;
#line 354
c_rt_lib0move(&___nl__im__40,___get_global_const(340));
#line 354
label_9:
;
#line 354
//clear ___nl__bool__41;
#line 354
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__23, ___nl__im__23, ___nl__im__32, ___nl__im__40, ___ref___rec__2));
#line 354
c_rt_lib0clear(&___nl__im__40);
#line 355
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__23, ___ref___rec__2));
#line 356
___nl__bool__44 = true;
#line 356
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__20, ___nl__bool__44, ___ref___rec__2));
#line 356
//clear ___nl__bool__44;
#line 357
goto label_1;
#line 357
label_7:
;
#line 357
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 357
c_rt_lib0move(&___nl__im__46,___get_global_const(306));
#line 357
___nl__bool__3 = c_rt_lib0eq(___nl__im__45, ___nl__im__46);
#line 357
c_rt_lib0clear(&___nl__im__45);
#line 357
c_rt_lib0clear(&___nl__im__46);
#line 357
___nl__bool__3 = !___nl__bool__3;
#line 357
if(___nl__bool__3){ goto label_11;}
#line 358
c_rt_lib0move(&___nl__im__48, nlasm0is_empty(___nl__im__1));
#line 358
___nl__bool__47 = c_rt_lib0check_true_native(___nl__im__48);
#line 358
c_rt_lib0clear(&___nl__im__48);
#line 358
___nl__bool__47 = !___nl__bool__47;
#line 358
if(___nl__bool__47){ goto label_13;}
#line 358
c_rt_lib0clear(&___nl__im__0);
#line 358
c_rt_lib0clear(&___nl__im__1);
#line 358
//clear ___nl__bool__3;
#line 358
c_rt_lib0clear(&___nl__im__20);
#line 358
c_rt_lib0clear(&___nl__im__23);
#line 358
c_rt_lib0clear(&___nl__im__32);
#line 358
//clear ___nl__bool__47;
#line 358
return NULL;
#line 358
goto label_12;
#line 358
label_13:
;
#line 358
label_12:
;
#line 358
//clear ___nl__bool__47;
#line 359
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 359
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(219)));
#line 359
c_rt_lib0clear(&___nl__im__51);
#line 359
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 359
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(219)));
#line 359
c_rt_lib0clear(&___nl__im__53);
#line 359
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(972)));
#line 359
c_rt_lib0clear(&___nl__im__50);
#line 359
c_rt_lib0clear(&___nl__im__52);
#line 360
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(151)));
#line 360
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(167)));
#line 360
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__1, ___get_global_const(151), ___nl__im__56, ___get_global_const(167), ___nl__im__57));
#line 360
c_rt_lib0clear(&___nl__im__56);
#line 360
c_rt_lib0clear(&___nl__im__57);
#line 360
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_const(237), ___nl__im__55));
#line 360
c_rt_lib0clear(&___nl__im__55);
#line 360
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__54));
#line 360
c_rt_lib0clear(&___nl__im__54);
#line 361
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__1));
#line 361
c_rt_lib0move(&___nl__im__61,___get_global_const(40));
#line 361
___nl__int__62 = 1;
#line 361
___nl__int__62 = -___nl__int__62;
#line 361
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 361
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 361
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__60, ___get_global_const(535), ___nl__im__61, ___get_global_const(522), ___nl__im__63, ___get_global_const(540), ___nl__im__64));
#line 361
c_rt_lib0clear(&___nl__im__60);
#line 361
c_rt_lib0clear(&___nl__im__61);
#line 361
//clear ___nl__int__62;
#line 361
c_rt_lib0clear(&___nl__im__63);
#line 361
c_rt_lib0clear(&___nl__im__64);
#line 361
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__59));
#line 361
c_rt_lib0clear(&___nl__im__59);
#line 361
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__58));
#line 361
c_rt_lib0clear(&___nl__im__58);
#line 362
goto label_1;
#line 362
label_11:
;
#line 363
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_mk(0));
#line 363
nl_die_arg(___nl__im__65);
#line 364
goto label_1;
#line 364
label_1:
;
#line 364
//clear ___nl__bool__3;
#line 364
c_rt_lib0clear(&___nl__im__20);
#line 364
c_rt_lib0clear(&___nl__im__23);
#line 364
c_rt_lib0clear(&___nl__im__32);
#line 364
c_rt_lib0clear(&___nl__im__49);
#line 364
c_rt_lib0clear(&___nl__im__65);
#line 364
c_rt_lib0clear(&___nl__im__0);
#line 364
c_rt_lib0clear(&___nl__im__1);
#line 364
return NULL;
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
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
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
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT * ___nl__im_ptr__71 = NULL;
ImmT  ___nl__im__72 = NULL;
bool  ___nl__bool__73 = false;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
INT  ___nl__int__76 = 0;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
ImmT  ___nl__im__79 = NULL;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
bool  ___nl__bool__86 = false;
INT  ___nl__int__87 = 0;
INT  ___nl__int__88 = 0;
ImmT  ___nl__im__89 = NULL;
bool  ___nl__bool__90 = false;
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
INT  ___nl__int__122 = 0;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
bool  ___nl__bool__125 = false;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
bool  ___nl__bool__134 = false;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
bool  ___nl__bool__138 = false;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
bool  ___nl__bool__144 = false;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
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
INT  ___nl__int__161 = 0;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
bool  ___nl__bool__166 = false;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
bool  ___nl__bool__171 = false;
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
INT  ___nl__int__183 = 0;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
ImmT  ___nl__im__192 = NULL;
ImmT  ___nl__im__193 = NULL;
ImmT  ___nl__im__194 = NULL;
ImmT  ___nl__im__195 = NULL;
ImmT  ___nl__im__196 = NULL;
ImmT  ___nl__im__197 = NULL;
ImmT  ___nl__im__198 = NULL;
ImmT  ___nl__im__199 = NULL;
ImmT  ___nl__im__200 = NULL;
ImmT  ___nl__im__201 = NULL;
ImmT  ___nl__im__202 = NULL;
bool  ___nl__bool__203 = false;
ImmT  ___nl__im__204 = NULL;
ImmT  ___nl__im__205 = NULL;
INT  ___nl__int__206 = 0;
INT  ___nl__int__207 = 0;
INT  ___nl__int__208 = 0;
ImmT  ___nl__im__209 = NULL;
INT  ___nl__int__210 = 0;
INT  ___nl__int__211 = 0;
INT  ___nl__int__212 = 0;
ImmT  ___nl__im__213 = NULL;
bool  ___nl__bool__214 = false;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
INT  ___nl__int__217 = 0;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
INT  ___nl__int__228 = 0;
ImmT  ___nl__im__229 = NULL;
bool  ___nl__bool__230 = false;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
#line 368
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 368
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 368
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(234)));
#line 368
c_rt_lib0clear(&___nl__im__4);
#line 368
c_rt_lib0clear(&___nl__im__5);
#line 369
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 369
c_rt_lib0move(&___nl__im__8,___get_global_const(978));
#line 369
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 369
c_rt_lib0clear(&___nl__im__7);
#line 369
c_rt_lib0clear(&___nl__im__8);
#line 369
___nl__bool__6 = !___nl__bool__6;
#line 369
if(___nl__bool__6){ goto label_2;}
#line 370
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 370
___nl__bool__11 = false;
#line 370
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__10, ___nl__bool__11, ___ref___rec__2));
#line 370
c_rt_lib0clear(&___nl__im__10);
#line 370
//clear ___nl__bool__11;
#line 371
___nl__int__15 = c_rt_lib0array_len(___nl__im__9);
#line 371
___nl__int__16 = 1;
#line 371
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 371
//clear ___nl__int__15;
#line 371
//clear ___nl__int__16;
#line 371
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__9, ___nl__int__14));
#line 371
//clear ___nl__int__14;
#line 371
___nl__int__19 = c_rt_lib0array_len(___nl__im__9);
#line 371
___nl__int__20 = 1;
#line 371
___nl__int__18 = ___nl__int__19 - ___nl__int__20;
#line 371
//clear ___nl__int__19;
#line 371
//clear ___nl__int__20;
#line 371
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__9, ___nl__int__18));
#line 371
//clear ___nl__int__18;
#line 371
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__17, ___get_global_const(219)));
#line 371
c_rt_lib0clear(&___nl__im__13);
#line 371
c_rt_lib0clear(&___nl__im__17);
#line 372
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 372
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(205)));
#line 372
c_rt_lib0clear(&___nl__im__23);
#line 372
___nl__im_ptr__26 = &((*___ref___rec__2).logic0field);
#line 372
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 372
___nl__im_ptr__26 = NULL;
#line 372
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(388)));
#line 372
c_rt_lib0clear(&___nl__im__25);
#line 372
___nl__bool__21 = tct0is_own_type(___nl__im__22, ___nl__im__24);
#line 372
c_rt_lib0clear(&___nl__im__22);
#line 372
c_rt_lib0clear(&___nl__im__24);
#line 372
___nl__bool__21 = !___nl__bool__21;
#line 372
if(___nl__bool__21){ goto label_4;}
#line 373
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 373
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__27, ___nl__im__12, ___ref___rec__2));
#line 373
c_rt_lib0clear(&___nl__im__27);
#line 374
goto label_3;
#line 374
label_4:
;
#line 374
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 374
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(219)));
#line 374
c_rt_lib0clear(&___nl__im__29);
#line 374
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(464));
#line 374
c_rt_lib0clear(&___nl__im__28);
#line 374
___nl__bool__21 = !___nl__bool__21;
#line 374
if(___nl__bool__21){ goto label_5;}
#line 375
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 375
c_rt_lib0delete(translator_priv0print_val(___nl__im__30, ___nl__im__12, ___ref___rec__2));
#line 375
c_rt_lib0clear(&___nl__im__30);
#line 376
goto label_3;
#line 376
label_5:
;
#line 377
c_rt_lib0move(&___nl__im__31, nlasm0is_empty(___nl__im__1));
#line 378
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__31);
#line 378
___nl__bool__32 = !___nl__bool__32;
#line 378
if(___nl__bool__32){ goto label_7;}
#line 379
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 379
___nl__int__34 = 1;
#line 379
___nl__int__34 = -___nl__int__34;
#line 379
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 379
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 379
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__33, ___get_global_const(218), ___nl__im__35, ___get_global_const(329), ___nl__im__36));
#line 379
c_rt_lib0clear(&___nl__im__33);
#line 379
//clear ___nl__int__34;
#line 379
c_rt_lib0clear(&___nl__im__35);
#line 379
c_rt_lib0clear(&___nl__im__36);
#line 380
goto label_6;
#line 380
label_7:
;
#line 380
label_6:
;
#line 380
//clear ___nl__bool__32;
#line 381
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 381
c_rt_lib0move(&___nl__im__37, translator_priv0dest_val(___nl__im__38, ___ref___rec__2));
#line 381
c_rt_lib0clear(&___nl__im__38);
#line 382
c_rt_lib0delete(translator_priv0move(___nl__im__12, ___nl__im__37, ___ref___rec__2));
#line 383
___nl__bool__39 = c_rt_lib0check_true_native(___nl__im__31);
#line 383
___nl__bool__39 = !___nl__bool__39;
#line 383
___nl__bool__39 = !___nl__bool__39;
#line 383
if(___nl__bool__39){ goto label_9;}
#line 384
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__12, ___ref___rec__2));
#line 385
goto label_8;
#line 385
label_9:
;
#line 385
label_8:
;
#line 385
//clear ___nl__bool__39;
#line 386
goto label_3;
#line 386
label_3:
;
#line 386
//clear ___nl__bool__21;
#line 386
c_rt_lib0clear(&___nl__im__31);
#line 386
c_rt_lib0clear(&___nl__im__37);
#line 387
___nl__bool__40 = false;
#line 387
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__9, ___nl__bool__40, ___ref___rec__2));
#line 387
//clear ___nl__bool__40;
#line 388
goto label_1;
#line 388
label_2:
;
#line 388
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 388
c_rt_lib0move(&___nl__im__42,___get_global_const(993));
#line 388
___nl__bool__6 = c_rt_lib0eq(___nl__im__41, ___nl__im__42);
#line 388
c_rt_lib0clear(&___nl__im__41);
#line 388
c_rt_lib0clear(&___nl__im__42);
#line 388
___nl__bool__6 = !___nl__bool__6;
#line 388
if(___nl__bool__6){ goto label_10;}
#line 389
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 389
___nl__bool__45 = true;
#line 389
c_rt_lib0move(&___nl__im__43, translator_priv0get_value_of_lvalue(___nl__im__44, ___nl__bool__45, ___ref___rec__2));
#line 389
c_rt_lib0clear(&___nl__im__44);
#line 389
//clear ___nl__bool__45;
#line 390
___nl__int__49 = c_rt_lib0array_len(___nl__im__43);
#line 390
___nl__int__50 = 1;
#line 390
___nl__int__48 = ___nl__int__49 - ___nl__int__50;
#line 390
//clear ___nl__int__49;
#line 390
//clear ___nl__int__50;
#line 390
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__43, ___nl__int__48));
#line 390
//clear ___nl__int__48;
#line 390
___nl__int__53 = c_rt_lib0array_len(___nl__im__43);
#line 390
___nl__int__54 = 1;
#line 390
___nl__int__52 = ___nl__int__53 - ___nl__int__54;
#line 390
//clear ___nl__int__53;
#line 390
//clear ___nl__int__54;
#line 390
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__43, ___nl__int__52));
#line 390
//clear ___nl__int__52;
#line 390
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(219)));
#line 390
c_rt_lib0clear(&___nl__im__47);
#line 390
c_rt_lib0clear(&___nl__im__51);
#line 391
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 391
c_rt_lib0move(&___nl__im__55, translator_priv0calc_val(___nl__im__56, ___ref___rec__2));
#line 391
c_rt_lib0clear(&___nl__im__56);
#line 392
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__46, ___nl__im__55, ___ref___rec__2));
#line 393
___nl__bool__57 = true;
#line 393
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__43, ___nl__bool__57, ___ref___rec__2));
#line 393
//clear ___nl__bool__57;
#line 394
goto label_1;
#line 394
label_10:
;
#line 394
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 394
c_rt_lib0move(&___nl__im__59,___get_global_const(964));
#line 394
___nl__bool__6 = c_rt_lib0eq(___nl__im__58, ___nl__im__59);
#line 394
c_rt_lib0clear(&___nl__im__58);
#line 394
c_rt_lib0clear(&___nl__im__59);
#line 394
if(___nl__bool__6){ goto label_14;}
#line 394
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 394
c_rt_lib0move(&___nl__im__61,___get_global_const(965));
#line 394
___nl__bool__6 = c_rt_lib0eq(___nl__im__60, ___nl__im__61);
#line 394
c_rt_lib0clear(&___nl__im__60);
#line 394
c_rt_lib0clear(&___nl__im__61);
#line 394
label_14:
;
#line 394
if(___nl__bool__6){ goto label_13;}
#line 394
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 394
c_rt_lib0move(&___nl__im__63,___get_global_const(533));
#line 394
___nl__bool__6 = c_rt_lib0eq(___nl__im__62, ___nl__im__63);
#line 394
c_rt_lib0clear(&___nl__im__62);
#line 394
c_rt_lib0clear(&___nl__im__63);
#line 394
label_13:
;
#line 394
if(___nl__bool__6){ goto label_12;}
#line 394
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 394
c_rt_lib0move(&___nl__im__65,___get_global_const(966));
#line 394
___nl__bool__6 = c_rt_lib0eq(___nl__im__64, ___nl__im__65);
#line 394
c_rt_lib0clear(&___nl__im__64);
#line 394
c_rt_lib0clear(&___nl__im__65);
#line 394
label_12:
;
#line 394
___nl__bool__6 = !___nl__bool__6;
#line 394
if(___nl__bool__6){ goto label_11;}
#line 395
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 395
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__68, ___get_global_const(205)));
#line 395
c_rt_lib0clear(&___nl__im__68);
#line 395
___nl__im_ptr__71 = &((*___ref___rec__2).logic0field);
#line 395
c_rt_lib0copy(&___nl__im__70, (*___nl__im_ptr__71));
#line 395
___nl__im_ptr__71 = NULL;
#line 395
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_const(388)));
#line 395
c_rt_lib0clear(&___nl__im__70);
#line 395
___nl__bool__66 = tct0is_own_type(___nl__im__67, ___nl__im__69);
#line 395
c_rt_lib0clear(&___nl__im__67);
#line 395
c_rt_lib0clear(&___nl__im__69);
#line 395
___nl__bool__66 = !___nl__bool__66;
#line 395
if(___nl__bool__66){ goto label_16;}
#line 396
___nl__bool__73 = true;
#line 396
c_rt_lib0move(&___nl__im__72, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__73, ___ref___rec__2));
#line 396
//clear ___nl__bool__73;
#line 397
___nl__int__77 = c_rt_lib0array_len(___nl__im__72);
#line 397
___nl__int__78 = 1;
#line 397
___nl__int__76 = ___nl__int__77 - ___nl__int__78;
#line 397
//clear ___nl__int__77;
#line 397
//clear ___nl__int__78;
#line 397
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_get(___nl__im__72, ___nl__int__76));
#line 397
//clear ___nl__int__76;
#line 397
___nl__int__81 = c_rt_lib0array_len(___nl__im__72);
#line 397
___nl__int__82 = 1;
#line 397
___nl__int__80 = ___nl__int__81 - ___nl__int__82;
#line 397
//clear ___nl__int__81;
#line 397
//clear ___nl__int__82;
#line 397
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__72, ___nl__int__80));
#line 397
//clear ___nl__int__80;
#line 397
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__79, ___get_global_const(219)));
#line 397
c_rt_lib0clear(&___nl__im__75);
#line 397
c_rt_lib0clear(&___nl__im__79);
#line 397
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__74, ___ref___rec__2));
#line 397
c_rt_lib0clear(&___nl__im__74);
#line 398
___nl__int__84 = c_rt_lib0array_len(___nl__im__72);
#line 398
___nl__int__85 = 1;
#line 398
___nl__int__83 = ___nl__int__84 - ___nl__int__85;
#line 398
//clear ___nl__int__84;
#line 398
//clear ___nl__int__85;
#line 398
label_18:
;
#line 398
___nl__int__87 = 0;
#line 398
___nl__int__88 = ___nl__int__83 >= ___nl__int__87;
#line 398
___nl__bool__86 = ___nl__int__88;
#line 398
//clear ___nl__int__87;
#line 398
//clear ___nl__int__88;
#line 398
___nl__bool__86 = !___nl__bool__86;
#line 398
if(___nl__bool__86){ goto label_17;}
#line 399
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_get(___nl__im__72, ___nl__int__83));
#line 399
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(219));
#line 399
if(___nl__bool__90){ goto label_21;}
#line 400
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(565));
#line 400
if(___nl__bool__90){ goto label_22;}
#line 401
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(1288));
#line 401
if(___nl__bool__90){ goto label_23;}
#line 402
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(370));
#line 402
if(___nl__bool__90){ goto label_24;}
#line 403
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(992));
#line 403
if(___nl__bool__90){ goto label_25;}
#line 404
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(253));
#line 404
if(___nl__bool__90){ goto label_26;}
#line 406
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(255));
#line 406
if(___nl__bool__90){ goto label_27;}
#line 408
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(259));
#line 408
if(___nl__bool__90){ goto label_28;}
#line 410
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__89, ___get_global_const(257));
#line 410
if(___nl__bool__90){ goto label_29;}
#line 410
c_rt_lib0move(&___nl__im__91,___get_global_const(16));
#line 410
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_mk(2, ___nl__im__91, ___nl__im__89));
#line 410
nl_die_arg(___nl__im__91);
#line 399
label_21:
;
#line 399
c_rt_lib0move(&___nl__im__93, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(219)));
#line 399
c_rt_lib0copy(&___nl__im__92, ___nl__im__93);
#line 400
goto label_20;
#line 400
label_22:
;
#line 400
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(565)));
#line 400
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 401
goto label_20;
#line 401
label_23:
;
#line 401
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(1288)));
#line 401
c_rt_lib0copy(&___nl__im__96, ___nl__im__97);
#line 402
goto label_20;
#line 402
label_24:
;
#line 402
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(370)));
#line 402
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 403
goto label_20;
#line 403
label_25:
;
#line 403
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(992)));
#line 403
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 404
goto label_20;
#line 404
label_26:
;
#line 404
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(253)));
#line 404
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 405
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_const(1301)));
#line 405
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_const(1300)));
#line 405
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_const(563)));
#line 405
c_rt_lib0delete(translator_priv0release_field(___nl__im__104, ___nl__im__105, ___nl__im__106, ___ref___rec__2));
#line 405
c_rt_lib0clear(&___nl__im__104);
#line 405
c_rt_lib0clear(&___nl__im__105);
#line 405
c_rt_lib0clear(&___nl__im__106);
#line 406
goto label_20;
#line 406
label_27:
;
#line 406
c_rt_lib0move(&___nl__im__108, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(255)));
#line 406
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 407
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_const(1301)));
#line 407
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_const(1300)));
#line 407
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_const(565)));
#line 407
c_rt_lib0delete(translator_priv0release_index(___nl__im__109, ___nl__im__110, ___nl__im__111, ___ref___rec__2));
#line 407
c_rt_lib0clear(&___nl__im__109);
#line 407
c_rt_lib0clear(&___nl__im__110);
#line 407
c_rt_lib0clear(&___nl__im__111);
#line 408
goto label_20;
#line 408
label_28:
;
#line 408
c_rt_lib0move(&___nl__im__113, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(259)));
#line 408
c_rt_lib0copy(&___nl__im__112, ___nl__im__113);
#line 409
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_const(1301)));
#line 409
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_const(1300)));
#line 409
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_const(535)));
#line 409
c_rt_lib0delete(translator_priv0release_variant(___nl__im__114, ___nl__im__115, ___nl__im__116, ___ref___rec__2));
#line 409
c_rt_lib0clear(&___nl__im__114);
#line 409
c_rt_lib0clear(&___nl__im__115);
#line 409
c_rt_lib0clear(&___nl__im__116);
#line 410
goto label_20;
#line 410
label_29:
;
#line 410
c_rt_lib0move(&___nl__im__118, c_rt_lib0priv_as(___nl__im__89, ___get_global_const(257)));
#line 410
c_rt_lib0copy(&___nl__im__117, ___nl__im__118);
#line 411
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(1301)));
#line 411
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(1300)));
#line 411
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(565)));
#line 411
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__119, ___nl__im__120, ___nl__im__121, ___ref___rec__2));
#line 411
c_rt_lib0clear(&___nl__im__119);
#line 411
c_rt_lib0clear(&___nl__im__120);
#line 411
c_rt_lib0clear(&___nl__im__121);
#line 412
goto label_20;
#line 412
label_20:
;
#line 412
c_rt_lib0clear(&___nl__im__89);
#line 412
//clear ___nl__bool__90;
#line 412
c_rt_lib0clear(&___nl__im__91);
#line 412
c_rt_lib0clear(&___nl__im__92);
#line 412
c_rt_lib0clear(&___nl__im__93);
#line 412
c_rt_lib0clear(&___nl__im__94);
#line 412
c_rt_lib0clear(&___nl__im__95);
#line 412
c_rt_lib0clear(&___nl__im__96);
#line 412
c_rt_lib0clear(&___nl__im__97);
#line 412
c_rt_lib0clear(&___nl__im__98);
#line 412
c_rt_lib0clear(&___nl__im__99);
#line 412
c_rt_lib0clear(&___nl__im__100);
#line 412
c_rt_lib0clear(&___nl__im__101);
#line 412
c_rt_lib0clear(&___nl__im__102);
#line 412
c_rt_lib0clear(&___nl__im__103);
#line 412
c_rt_lib0clear(&___nl__im__107);
#line 412
c_rt_lib0clear(&___nl__im__108);
#line 412
c_rt_lib0clear(&___nl__im__112);
#line 412
c_rt_lib0clear(&___nl__im__113);
#line 412
c_rt_lib0clear(&___nl__im__117);
#line 412
c_rt_lib0clear(&___nl__im__118);
#line 398
___nl__int__122 = 1;
#line 398
___nl__int__83 = ___nl__int__83 - ___nl__int__122;
#line 398
//clear ___nl__int__122;
#line 413
goto label_18;
#line 413
label_17:
;
#line 414
goto label_15;
#line 414
label_16:
;
#line 415
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 415
c_rt_lib0move(&___nl__im__123, translator_priv0dest_val(___nl__im__124, ___ref___rec__2));
#line 415
c_rt_lib0clear(&___nl__im__124);
#line 416
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 416
c_rt_lib0move(&___nl__im__127,___get_global_const(964));
#line 416
___nl__bool__125 = c_rt_lib0eq(___nl__im__126, ___nl__im__127);
#line 416
c_rt_lib0clear(&___nl__im__126);
#line 416
c_rt_lib0clear(&___nl__im__127);
#line 416
___nl__bool__125 = !___nl__bool__125;
#line 416
if(___nl__bool__125){ goto label_31;}
#line 417
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 417
c_rt_lib0move(&___nl__im__128, translator_priv0calc_val(___nl__im__129, ___ref___rec__2));
#line 417
c_rt_lib0clear(&___nl__im__129);
#line 418
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__im__1, ___nl__im__123, ___nl__im__128, ___ref___rec__2));
#line 419
goto label_30;
#line 419
label_31:
;
#line 419
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 419
c_rt_lib0move(&___nl__im__131,___get_global_const(965));
#line 419
___nl__bool__125 = c_rt_lib0eq(___nl__im__130, ___nl__im__131);
#line 419
c_rt_lib0clear(&___nl__im__130);
#line 419
c_rt_lib0clear(&___nl__im__131);
#line 419
___nl__bool__125 = !___nl__bool__125;
#line 419
if(___nl__bool__125){ goto label_32;}
#line 420
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 420
c_rt_lib0move(&___nl__im__132, translator_priv0calc_val(___nl__im__133, ___ref___rec__2));
#line 420
c_rt_lib0clear(&___nl__im__133);
#line 421
c_rt_lib0move(&___nl__im__135, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 421
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 421
___nl__bool__134 = nlasm0eq_reg_type(___nl__im__135, ___nl__im__136);
#line 421
c_rt_lib0clear(&___nl__im__135);
#line 421
c_rt_lib0clear(&___nl__im__136);
#line 421
___nl__bool__134 = !___nl__bool__134;
#line 422
c_rt_lib0copy(&___nl__im__137, ___nl__im__1);
#line 423
___nl__bool__138 = ___nl__bool__134;
#line 423
___nl__bool__138 = !___nl__bool__138;
#line 423
if(___nl__bool__138){ goto label_34;}
#line 423
c_rt_lib0move(&___nl__im__139, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 423
c_rt_lib0move(&___nl__im__137, translator_priv0new_register(___ref___rec__2, ___nl__im__139));
#line 423
c_rt_lib0clear(&___nl__im__139);
#line 423
goto label_33;
#line 423
label_34:
;
#line 423
label_33:
;
#line 423
//clear ___nl__bool__138;
#line 424
c_rt_lib0move(&___nl__im__140,___get_global_const(732));
#line 424
c_rt_lib0move(&___nl__im__142, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__123));
#line 424
c_rt_lib0move(&___nl__im__143, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__132));
#line 424
c_rt_lib0move(&___nl__im__141, c_rt_lib0array_mk(2, ___nl__im__142, ___nl__im__143));
#line 424
c_rt_lib0clear(&___nl__im__142);
#line 424
c_rt_lib0clear(&___nl__im__143);
#line 424
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__137, ___nl__im__140, ___nl__im__141, ___ref___rec__2));
#line 424
c_rt_lib0clear(&___nl__im__140);
#line 424
c_rt_lib0clear(&___nl__im__141);
#line 425
___nl__bool__144 = ___nl__bool__134;
#line 425
___nl__bool__144 = !___nl__bool__144;
#line 425
if(___nl__bool__144){ goto label_36;}
#line 425
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__137, ___ref___rec__2));
#line 425
goto label_35;
#line 425
label_36:
;
#line 425
label_35:
;
#line 425
//clear ___nl__bool__144;
#line 426
goto label_30;
#line 426
label_32:
;
#line 426
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 426
c_rt_lib0move(&___nl__im__146,___get_global_const(533));
#line 426
___nl__bool__125 = c_rt_lib0eq(___nl__im__145, ___nl__im__146);
#line 426
c_rt_lib0clear(&___nl__im__145);
#line 426
c_rt_lib0clear(&___nl__im__146);
#line 426
___nl__bool__125 = !___nl__bool__125;
#line 426
if(___nl__bool__125){ goto label_37;}
#line 427
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 427
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(219)));
#line 427
c_rt_lib0clear(&___nl__im__149);
#line 427
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 427
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__151, ___get_global_const(219)));
#line 427
c_rt_lib0clear(&___nl__im__151);
#line 427
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__150, ___get_global_const(970)));
#line 427
c_rt_lib0clear(&___nl__im__148);
#line 427
c_rt_lib0clear(&___nl__im__150);
#line 428
c_rt_lib0delete(translator_priv0print_get_value(___nl__im__1, ___nl__im__123, ___nl__im__147, ___ref___rec__2));
#line 429
goto label_30;
#line 429
label_37:
;
#line 429
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 429
c_rt_lib0move(&___nl__im__153,___get_global_const(966));
#line 429
___nl__bool__125 = c_rt_lib0eq(___nl__im__152, ___nl__im__153);
#line 429
c_rt_lib0clear(&___nl__im__152);
#line 429
c_rt_lib0clear(&___nl__im__153);
#line 429
___nl__bool__125 = !___nl__bool__125;
#line 429
if(___nl__bool__125){ goto label_38;}
#line 430
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 430
c_rt_lib0move(&___nl__im__154, translator_priv0dest_val(___nl__im__155, ___ref___rec__2));
#line 430
c_rt_lib0clear(&___nl__im__155);
#line 431
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 431
c_rt_lib0move(&___nl__im__157, c_rt_lib0hash_get_value_dec(___nl__im__158, ___get_global_const(219)));
#line 431
c_rt_lib0clear(&___nl__im__158);
#line 431
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 431
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_const(219)));
#line 431
c_rt_lib0clear(&___nl__im__160);
#line 431
c_rt_lib0move(&___nl__im__156, c_rt_lib0priv_as(___nl__im__159, ___get_global_const(970)));
#line 431
c_rt_lib0clear(&___nl__im__157);
#line 431
c_rt_lib0clear(&___nl__im__159);
#line 432
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 432
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_const(205)));
#line 432
c_rt_lib0clear(&___nl__im__163);
#line 432
___nl__int__161 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__162, ___nl__im__156);
#line 432
c_rt_lib0clear(&___nl__im__162);
#line 433
c_rt_lib0move(&___nl__im__164, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 434
c_rt_lib0copy(&___nl__im__165, ___nl__im__1);
#line 435
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 435
___nl__bool__166 = nlasm0eq_reg_type(___nl__im__167, ___nl__im__164);
#line 435
c_rt_lib0clear(&___nl__im__167);
#line 435
___nl__bool__166 = !___nl__bool__166;
#line 435
___nl__bool__166 = !___nl__bool__166;
#line 435
if(___nl__bool__166){ goto label_40;}
#line 436
c_rt_lib0move(&___nl__im__165, translator_priv0new_register(___ref___rec__2, ___nl__im__164));
#line 437
goto label_39;
#line 437
label_40:
;
#line 437
label_39:
;
#line 437
//clear ___nl__bool__166;
#line 438
c_rt_lib0move(&___nl__im__170, c_rt_lib0int_new(___nl__int__161));
#line 438
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__165, ___get_global_const(74), ___nl__im__154, ___get_global_const(205), ___nl__im__156, ___get_global_const(522), ___nl__im__170));
#line 438
c_rt_lib0clear(&___nl__im__170);
#line 438
c_rt_lib0move(&___nl__im__168, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__169));
#line 438
c_rt_lib0clear(&___nl__im__169);
#line 438
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__168));
#line 438
c_rt_lib0clear(&___nl__im__168);
#line 439
c_rt_lib0move(&___nl__im__172, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 439
___nl__bool__171 = nlasm0eq_reg_type(___nl__im__172, ___nl__im__164);
#line 439
c_rt_lib0clear(&___nl__im__172);
#line 439
___nl__bool__171 = !___nl__bool__171;
#line 439
___nl__bool__171 = !___nl__bool__171;
#line 439
if(___nl__bool__171){ goto label_42;}
#line 440
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__165, ___ref___rec__2));
#line 441
goto label_41;
#line 441
label_42:
;
#line 441
label_41:
;
#line 441
//clear ___nl__bool__171;
#line 442
goto label_30;
#line 442
label_38:
;
#line 443
c_rt_lib0move(&___nl__im__173, c_rt_lib0array_mk(0));
#line 443
nl_die_arg(___nl__im__173);
#line 444
goto label_30;
#line 444
label_30:
;
#line 444
//clear ___nl__bool__125;
#line 444
c_rt_lib0clear(&___nl__im__128);
#line 444
c_rt_lib0clear(&___nl__im__132);
#line 444
//clear ___nl__bool__134;
#line 444
c_rt_lib0clear(&___nl__im__137);
#line 444
c_rt_lib0clear(&___nl__im__147);
#line 444
c_rt_lib0clear(&___nl__im__154);
#line 444
c_rt_lib0clear(&___nl__im__156);
#line 444
//clear ___nl__int__161;
#line 444
c_rt_lib0clear(&___nl__im__164);
#line 444
c_rt_lib0clear(&___nl__im__165);
#line 444
c_rt_lib0clear(&___nl__im__173);
#line 445
goto label_15;
#line 445
label_15:
;
#line 445
//clear ___nl__bool__66;
#line 445
c_rt_lib0clear(&___nl__im__72);
#line 445
//clear ___nl__int__83;
#line 445
//clear ___nl__bool__86;
#line 445
c_rt_lib0clear(&___nl__im__89);
#line 445
//clear ___nl__bool__90;
#line 445
c_rt_lib0clear(&___nl__im__91);
#line 445
c_rt_lib0clear(&___nl__im__92);
#line 445
c_rt_lib0clear(&___nl__im__93);
#line 445
c_rt_lib0clear(&___nl__im__94);
#line 445
c_rt_lib0clear(&___nl__im__95);
#line 445
c_rt_lib0clear(&___nl__im__96);
#line 445
c_rt_lib0clear(&___nl__im__97);
#line 445
c_rt_lib0clear(&___nl__im__98);
#line 445
c_rt_lib0clear(&___nl__im__99);
#line 445
c_rt_lib0clear(&___nl__im__100);
#line 445
c_rt_lib0clear(&___nl__im__101);
#line 445
c_rt_lib0clear(&___nl__im__102);
#line 445
c_rt_lib0clear(&___nl__im__103);
#line 445
c_rt_lib0clear(&___nl__im__107);
#line 445
c_rt_lib0clear(&___nl__im__108);
#line 445
c_rt_lib0clear(&___nl__im__112);
#line 445
c_rt_lib0clear(&___nl__im__113);
#line 445
c_rt_lib0clear(&___nl__im__117);
#line 445
c_rt_lib0clear(&___nl__im__118);
#line 445
c_rt_lib0clear(&___nl__im__123);
#line 446
goto label_1;
#line 446
label_11:
;
#line 446
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 446
c_rt_lib0move(&___nl__im__175,___get_global_const(1067));
#line 446
___nl__bool__6 = c_rt_lib0eq(___nl__im__174, ___nl__im__175);
#line 446
c_rt_lib0clear(&___nl__im__174);
#line 446
c_rt_lib0clear(&___nl__im__175);
#line 446
___nl__bool__6 = !___nl__bool__6;
#line 446
if(___nl__bool__6){ goto label_43;}
#line 447
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 447
c_rt_lib0move(&___nl__im__176, translator_priv0dest_val(___nl__im__177, ___ref___rec__2));
#line 447
c_rt_lib0clear(&___nl__im__177);
#line 448
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 448
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value_dec(___nl__im__180, ___get_global_const(219)));
#line 448
c_rt_lib0clear(&___nl__im__180);
#line 448
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 448
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__182, ___get_global_const(219)));
#line 448
c_rt_lib0clear(&___nl__im__182);
#line 448
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__181, ___get_global_const(970)));
#line 448
c_rt_lib0clear(&___nl__im__179);
#line 448
c_rt_lib0clear(&___nl__im__181);
#line 449
c_rt_lib0move(&___nl__im__185, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 449
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_const(205)));
#line 449
c_rt_lib0clear(&___nl__im__185);
#line 449
___nl__int__183 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__184, ___nl__im__178);
#line 449
c_rt_lib0clear(&___nl__im__184);
#line 450
c_rt_lib0move(&___nl__im__188, c_rt_lib0int_new(___nl__int__183));
#line 450
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__176, ___get_global_const(205), ___nl__im__178, ___get_global_const(522), ___nl__im__188));
#line 450
c_rt_lib0clear(&___nl__im__188);
#line 450
c_rt_lib0move(&___nl__im__186, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__187));
#line 450
c_rt_lib0clear(&___nl__im__187);
#line 450
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__186));
#line 450
c_rt_lib0clear(&___nl__im__186);
#line 451
goto label_1;
#line 451
label_43:
;
#line 451
c_rt_lib0move(&___nl__im__189, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 451
c_rt_lib0move(&___nl__im__190,___get_global_const(979));
#line 451
___nl__bool__6 = c_rt_lib0eq(___nl__im__189, ___nl__im__190);
#line 451
c_rt_lib0clear(&___nl__im__189);
#line 451
c_rt_lib0clear(&___nl__im__190);
#line 451
if(___nl__bool__6){ goto label_48;}
#line 451
c_rt_lib0move(&___nl__im__191, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 451
c_rt_lib0move(&___nl__im__192,___get_global_const(980));
#line 451
___nl__bool__6 = c_rt_lib0eq(___nl__im__191, ___nl__im__192);
#line 451
c_rt_lib0clear(&___nl__im__191);
#line 451
c_rt_lib0clear(&___nl__im__192);
#line 451
label_48:
;
#line 451
if(___nl__bool__6){ goto label_47;}
#line 451
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 451
c_rt_lib0move(&___nl__im__194,___get_global_const(982));
#line 451
___nl__bool__6 = c_rt_lib0eq(___nl__im__193, ___nl__im__194);
#line 451
c_rt_lib0clear(&___nl__im__193);
#line 451
c_rt_lib0clear(&___nl__im__194);
#line 451
label_47:
;
#line 451
if(___nl__bool__6){ goto label_46;}
#line 451
c_rt_lib0move(&___nl__im__195, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 451
c_rt_lib0move(&___nl__im__196,___get_global_const(981));
#line 451
___nl__bool__6 = c_rt_lib0eq(___nl__im__195, ___nl__im__196);
#line 451
c_rt_lib0clear(&___nl__im__195);
#line 451
c_rt_lib0clear(&___nl__im__196);
#line 451
label_46:
;
#line 451
if(___nl__bool__6){ goto label_45;}
#line 451
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 451
c_rt_lib0move(&___nl__im__198,___get_global_const(983));
#line 451
___nl__bool__6 = c_rt_lib0eq(___nl__im__197, ___nl__im__198);
#line 451
c_rt_lib0clear(&___nl__im__197);
#line 451
c_rt_lib0clear(&___nl__im__198);
#line 451
label_45:
;
#line 451
___nl__bool__6 = !___nl__bool__6;
#line 451
if(___nl__bool__6){ goto label_44;}
#line 452
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 452
c_rt_lib0move(&___nl__im__199, translator_priv0calc_val(___nl__im__200, ___ref___rec__2));
#line 452
c_rt_lib0clear(&___nl__im__200);
#line 453
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 453
___nl__bool__203 = true;
#line 453
c_rt_lib0move(&___nl__im__201, translator_priv0get_value_of_lvalue(___nl__im__202, ___nl__bool__203, ___ref___rec__2));
#line 453
c_rt_lib0clear(&___nl__im__202);
#line 453
//clear ___nl__bool__203;
#line 454
___nl__int__207 = c_rt_lib0array_len(___nl__im__201);
#line 454
___nl__int__208 = 1;
#line 454
___nl__int__206 = ___nl__int__207 - ___nl__int__208;
#line 454
//clear ___nl__int__207;
#line 454
//clear ___nl__int__208;
#line 454
c_rt_lib0move(&___nl__im__205, c_rt_lib0array_get(___nl__im__201, ___nl__int__206));
#line 454
//clear ___nl__int__206;
#line 454
___nl__int__211 = c_rt_lib0array_len(___nl__im__201);
#line 454
___nl__int__212 = 1;
#line 454
___nl__int__210 = ___nl__int__211 - ___nl__int__212;
#line 454
//clear ___nl__int__211;
#line 454
//clear ___nl__int__212;
#line 454
c_rt_lib0move(&___nl__im__209, c_rt_lib0array_get(___nl__im__201, ___nl__int__210));
#line 454
//clear ___nl__int__210;
#line 454
c_rt_lib0move(&___nl__im__204, c_rt_lib0priv_as(___nl__im__209, ___get_global_const(219)));
#line 454
c_rt_lib0clear(&___nl__im__205);
#line 454
c_rt_lib0clear(&___nl__im__209);
#line 455
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 455
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__204, ___nl__im__204, ___nl__im__199, ___nl__im__213, ___ref___rec__2));
#line 455
c_rt_lib0clear(&___nl__im__213);
#line 456
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__204, ___ref___rec__2));
#line 457
___nl__bool__214 = true;
#line 457
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__201, ___nl__bool__214, ___ref___rec__2));
#line 457
//clear ___nl__bool__214;
#line 458
goto label_1;
#line 458
label_44:
;
#line 458
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 458
c_rt_lib0move(&___nl__im__216,___get_global_const(897));
#line 458
___nl__bool__6 = c_rt_lib0eq(___nl__im__215, ___nl__im__216);
#line 458
c_rt_lib0clear(&___nl__im__215);
#line 458
c_rt_lib0clear(&___nl__im__216);
#line 458
___nl__bool__6 = !___nl__bool__6;
#line 458
if(___nl__bool__6){ goto label_49;}
#line 459
___nl__int__217 = translator_priv0get_sim_label(___ref___rec__2);
#line 460
c_rt_lib0move(&___nl__im__219, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 460
c_rt_lib0move(&___nl__im__218, translator_priv0new_register(___ref___rec__2, ___nl__im__219));
#line 460
c_rt_lib0clear(&___nl__im__219);
#line 461
c_rt_lib0move(&___nl__im__221, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 461
c_rt_lib0move(&___nl__im__220, translator_priv0def_val(___nl__im__221, ___nl__im__1, ___nl__im__218, ___ref___rec__2));
#line 461
c_rt_lib0clear(&___nl__im__221);
#line 462
c_rt_lib0move(&___nl__im__224,___get_global_const(336));
#line 462
c_rt_lib0move(&___nl__im__223, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__218, ___get_global_const(74), ___nl__im__220, ___get_global_const(515), ___nl__im__224));
#line 462
c_rt_lib0clear(&___nl__im__224);
#line 462
c_rt_lib0move(&___nl__im__222, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__223));
#line 462
c_rt_lib0clear(&___nl__im__223);
#line 462
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__222));
#line 462
c_rt_lib0clear(&___nl__im__222);
#line 463
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__217, ___nl__im__218, ___ref___rec__2));
#line 464
c_rt_lib0move(&___nl__im__225, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 464
c_rt_lib0delete(translator_priv0def_val(___nl__im__225, ___nl__im__1, ___nl__im__218, ___ref___rec__2));
#line 464
c_rt_lib0clear(&___nl__im__225);
#line 465
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__217, ___ref___rec__2));
#line 466
goto label_1;
#line 466
label_49:
;
#line 466
c_rt_lib0move(&___nl__im__226, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 466
c_rt_lib0move(&___nl__im__227,___get_global_const(898));
#line 466
___nl__bool__6 = c_rt_lib0eq(___nl__im__226, ___nl__im__227);
#line 466
c_rt_lib0clear(&___nl__im__226);
#line 466
c_rt_lib0clear(&___nl__im__227);
#line 466
___nl__bool__6 = !___nl__bool__6;
#line 466
if(___nl__bool__6){ goto label_50;}
#line 467
___nl__int__228 = translator_priv0get_sim_label(___ref___rec__2);
#line 469
c_rt_lib0move(&___nl__im__231, nlasm0is_empty(___nl__im__1));
#line 469
___nl__bool__230 = c_rt_lib0check_true_native(___nl__im__231);
#line 469
c_rt_lib0clear(&___nl__im__231);
#line 469
___nl__bool__230 = !___nl__bool__230;
#line 469
if(___nl__bool__230){ goto label_52;}
#line 470
c_rt_lib0move(&___nl__im__232, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 470
c_rt_lib0move(&___nl__im__229, translator_priv0new_register(___ref___rec__2, ___nl__im__232));
#line 470
c_rt_lib0clear(&___nl__im__232);
#line 471
goto label_51;
#line 471
label_52:
;
#line 472
c_rt_lib0copy(&___nl__im__229, ___nl__im__1);
#line 473
goto label_51;
#line 473
label_51:
;
#line 473
//clear ___nl__bool__230;
#line 474
c_rt_lib0move(&___nl__im__234, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 474
c_rt_lib0move(&___nl__im__233, translator_priv0def_val(___nl__im__234, ___nl__im__1, ___nl__im__229, ___ref___rec__2));
#line 474
c_rt_lib0clear(&___nl__im__234);
#line 475
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__228, ___nl__im__233, ___ref___rec__2));
#line 476
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 476
c_rt_lib0delete(translator_priv0def_val(___nl__im__235, ___nl__im__1, ___nl__im__229, ___ref___rec__2));
#line 476
c_rt_lib0clear(&___nl__im__235);
#line 477
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__228, ___ref___rec__2));
#line 478
goto label_1;
#line 478
label_50:
;
#line 479
c_rt_lib0move(&___nl__im__237, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 479
c_rt_lib0move(&___nl__im__236, translator_priv0calc_val(___nl__im__237, ___ref___rec__2));
#line 479
c_rt_lib0clear(&___nl__im__237);
#line 480
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(275)));
#line 480
c_rt_lib0move(&___nl__im__238, translator_priv0calc_val(___nl__im__239, ___ref___rec__2));
#line 480
c_rt_lib0clear(&___nl__im__239);
#line 481
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(515)));
#line 481
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__1, ___nl__im__236, ___nl__im__238, ___nl__im__240, ___ref___rec__2));
#line 481
c_rt_lib0clear(&___nl__im__240);
#line 482
goto label_1;
#line 482
label_1:
;
#line 482
//clear ___nl__bool__6;
#line 482
c_rt_lib0clear(&___nl__im__9);
#line 482
c_rt_lib0clear(&___nl__im__12);
#line 482
c_rt_lib0clear(&___nl__im__43);
#line 482
c_rt_lib0clear(&___nl__im__46);
#line 482
c_rt_lib0clear(&___nl__im__55);
#line 482
c_rt_lib0clear(&___nl__im__176);
#line 482
c_rt_lib0clear(&___nl__im__178);
#line 482
//clear ___nl__int__183;
#line 482
c_rt_lib0clear(&___nl__im__199);
#line 482
c_rt_lib0clear(&___nl__im__201);
#line 482
c_rt_lib0clear(&___nl__im__204);
#line 482
//clear ___nl__int__217;
#line 482
c_rt_lib0clear(&___nl__im__218);
#line 482
c_rt_lib0clear(&___nl__im__220);
#line 482
//clear ___nl__int__228;
#line 482
c_rt_lib0clear(&___nl__im__229);
#line 482
c_rt_lib0clear(&___nl__im__233);
#line 482
c_rt_lib0clear(&___nl__im__236);
#line 482
c_rt_lib0clear(&___nl__im__238);
#line 482
c_rt_lib0clear(&___nl__im__0);
#line 482
c_rt_lib0clear(&___nl__im__1);
#line 482
c_rt_lib0clear(&___nl__im__3);
#line 482
return NULL;
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
#line 486
___nl__int__3 = 0;
#line 486
___nl__int__4 = 1;
#line 486
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 486
label_3:
;
#line 486
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 486
___nl__bool__6 = ___nl__int__7;
#line 486
if(___nl__bool__6){ goto label_1;}
#line 486
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 486
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 487
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__2, ___ref___rec__1));
#line 487
c_rt_lib0clear(&___nl__im__2);
#line 488
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 488
goto label_3;
#line 488
label_1:
;
#line 488
c_rt_lib0clear(&___nl__im__0);
#line 488
c_rt_lib0clear(&___nl__im__2);
#line 488
//clear ___nl__int__3;
#line 488
//clear ___nl__int__4;
#line 488
//clear ___nl__int__5;
#line 488
//clear ___nl__bool__6;
#line 488
//clear ___nl__int__7;
#line 488
c_rt_lib0clear(&___nl__im__8);
#line 488
return NULL;
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
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
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
ImmT * ___nl__im_ptr__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
INT  ___nl__int__67 = 0;
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
INT  ___nl__int__77 = 0;
INT  ___nl__int__78 = 0;
INT  ___nl__int__79 = 0;
ImmT  ___nl__im__80 = NULL;
INT  ___nl__int__81 = 0;
INT  ___nl__int__82 = 0;
INT  ___nl__int__83 = 0;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
INT  ___nl__int__89 = 0;
ImmT  ___nl__im__90 = NULL;
bool  ___nl__bool__91 = false;
bool  ___nl__bool__92 = false;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
#line 492
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(687));
#line 492
if(___nl__bool__3){ goto label_2;}
#line 495
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(962));
#line 495
if(___nl__bool__3){ goto label_3;}
#line 496
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(963));
#line 496
if(___nl__bool__3){ goto label_4;}
#line 496
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 496
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 496
nl_die_arg(___nl__im__4);
#line 492
label_2:
;
#line 492
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(687)));
#line 492
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 493
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(167)));
#line 493
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(205)));
#line 493
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(455)));
#line 493
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 493
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(167), ___nl__im__8, ___get_global_const(205), ___nl__im__9, ___get_global_const(455), ___nl__im__10, ___get_global_const(219), ___nl__im__11));
#line 493
c_rt_lib0clear(&___nl__im__8);
#line 493
c_rt_lib0clear(&___nl__im__9);
#line 493
c_rt_lib0clear(&___nl__im__10);
#line 493
c_rt_lib0clear(&___nl__im__11);
#line 494
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 494
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__7, ___ref___rec__2, ___nl__im__12));
#line 494
c_rt_lib0clear(&___nl__im__7);
#line 494
c_rt_lib0clear(&___nl__im__12);
#line 495
goto label_1;
#line 495
label_3:
;
#line 495
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(962)));
#line 495
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 496
goto label_1;
#line 496
label_4:
;
#line 496
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(963)));
#line 496
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 497
goto label_1;
#line 497
label_1:
;
#line 498
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 498
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__2, ___nl__im__18));
#line 498
c_rt_lib0clear(&___nl__im__18);
#line 500
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(687));
#line 500
if(___nl__bool__20){ goto label_6;}
#line 506
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(962));
#line 506
if(___nl__bool__20){ goto label_7;}
#line 508
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(963));
#line 508
if(___nl__bool__20){ goto label_8;}
#line 508
c_rt_lib0move(&___nl__im__21,___get_global_const(16));
#line 508
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__0));
#line 508
nl_die_arg(___nl__im__21);
#line 500
label_6:
;
#line 500
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(687)));
#line 500
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 501
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(219)));
#line 501
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(219));
#line 501
if(___nl__bool__25){ goto label_10;}
#line 503
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(72));
#line 503
if(___nl__bool__25){ goto label_11;}
#line 503
c_rt_lib0move(&___nl__im__26,___get_global_const(16));
#line 503
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 503
nl_die_arg(___nl__im__26);
#line 501
label_10:
;
#line 501
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(219)));
#line 501
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 502
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__27, ___ref___rec__2));
#line 503
goto label_9;
#line 503
label_11:
;
#line 504
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 504
nl_die_arg(___nl__im__29);
#line 505
goto label_9;
#line 505
label_9:
;
#line 506
goto label_5;
#line 506
label_7:
;
#line 506
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(962)));
#line 506
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 507
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(275)));
#line 507
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__32, ___ref___rec__2));
#line 507
c_rt_lib0clear(&___nl__im__32);
#line 508
goto label_5;
#line 508
label_8:
;
#line 508
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(963)));
#line 508
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 509
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__33, ___ref___rec__2));
#line 510
goto label_5;
#line 510
label_5:
;
#line 511
___nl__int__35 = translator_priv0get_sim_label(___ref___rec__2);
#line 512
c_rt_lib0move(&___nl__im__38,___get_global_const(79));
#line 512
___nl__int__39 = 1;
#line 512
___nl__int__39 = -___nl__int__39;
#line 512
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__39));
#line 512
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__17, ___get_global_const(74), ___nl__im__19, ___get_global_const(205), ___nl__im__38, ___get_global_const(522), ___nl__im__40));
#line 512
c_rt_lib0clear(&___nl__im__38);
#line 512
//clear ___nl__int__39;
#line 512
c_rt_lib0clear(&___nl__im__40);
#line 512
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__37));
#line 512
c_rt_lib0clear(&___nl__im__37);
#line 512
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 512
c_rt_lib0clear(&___nl__im__36);
#line 513
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__35, ___nl__im__17, ___ref___rec__2));
#line 514
___nl__bool__41 = ___nl__bool__1;
#line 514
___nl__bool__41 = !___nl__bool__41;
#line 514
if(___nl__bool__41){ goto label_13;}
#line 515
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__19));
#line 515
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__42, ___ref___rec__2));
#line 515
c_rt_lib0clear(&___nl__im__42);
#line 516
goto label_12;
#line 516
label_13:
;
#line 517
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__19));
#line 517
c_rt_lib0move(&___nl__im__46,___get_global_const(177));
#line 517
___nl__int__47 = 1;
#line 517
___nl__int__47 = -___nl__int__47;
#line 517
c_rt_lib0move(&___nl__im__48, c_rt_lib0int_new(___nl__int__47));
#line 517
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 517
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__19, ___get_global_const(74), ___nl__im__45, ___get_global_const(535), ___nl__im__46, ___get_global_const(522), ___nl__im__48, ___get_global_const(540), ___nl__im__49));
#line 517
c_rt_lib0clear(&___nl__im__45);
#line 517
c_rt_lib0clear(&___nl__im__46);
#line 517
//clear ___nl__int__47;
#line 517
c_rt_lib0clear(&___nl__im__48);
#line 517
c_rt_lib0clear(&___nl__im__49);
#line 517
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__44));
#line 517
c_rt_lib0clear(&___nl__im__44);
#line 517
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__43));
#line 517
c_rt_lib0clear(&___nl__im__43);
#line 518
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__19));
#line 518
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__50));
#line 518
c_rt_lib0clear(&___nl__im__50);
#line 519
goto label_12;
#line 519
label_12:
;
#line 519
//clear ___nl__bool__41;
#line 520
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__35, ___ref___rec__2));
#line 521
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(687));
#line 521
if(___nl__bool__51){ goto label_15;}
#line 528
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(962));
#line 528
if(___nl__bool__51){ goto label_16;}
#line 537
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(963));
#line 537
if(___nl__bool__51){ goto label_17;}
#line 537
c_rt_lib0move(&___nl__im__52,___get_global_const(16));
#line 537
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__0));
#line 537
nl_die_arg(___nl__im__52);
#line 521
label_15:
;
#line 521
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(687)));
#line 521
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 522
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(167)));
#line 522
c_rt_lib0move(&___nl__im__55, translator_priv0get_var_register(___nl__im__56, ___ref___rec__2));
#line 522
c_rt_lib0clear(&___nl__im__56);
#line 523
___nl__im_ptr__62 = &((*___ref___rec__2).logic0field);
#line 523
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 523
___nl__im_ptr__62 = NULL;
#line 523
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_const(785)));
#line 523
c_rt_lib0clear(&___nl__im__61);
#line 523
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(167)));
#line 523
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value(___nl__im__60, ___nl__im__63));
#line 523
c_rt_lib0clear(&___nl__im__60);
#line 523
c_rt_lib0clear(&___nl__im__63);
#line 523
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_const(205)));
#line 523
c_rt_lib0clear(&___nl__im__59);
#line 523
c_rt_lib0move(&___nl__im__57, translator_priv0get_cast(___nl__im__55, ___nl__im__58, ___ref___rec__2));
#line 523
c_rt_lib0clear(&___nl__im__58);
#line 524
c_rt_lib0move(&___nl__im__66,___get_global_const(79));
#line 524
___nl__int__67 = 1;
#line 524
___nl__int__67 = -___nl__int__67;
#line 524
c_rt_lib0move(&___nl__im__68, c_rt_lib0int_new(___nl__int__67));
#line 524
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__57, ___get_global_const(74), ___nl__im__19, ___get_global_const(205), ___nl__im__66, ___get_global_const(522), ___nl__im__68));
#line 524
c_rt_lib0clear(&___nl__im__66);
#line 524
//clear ___nl__int__67;
#line 524
c_rt_lib0clear(&___nl__im__68);
#line 524
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__65));
#line 524
c_rt_lib0clear(&___nl__im__65);
#line 524
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__64));
#line 524
c_rt_lib0clear(&___nl__im__64);
#line 525
___nl__bool__69 = nlasm0eq_reg(___nl__im__57, ___nl__im__55);
#line 525
___nl__bool__69 = !___nl__bool__69;
#line 525
___nl__bool__69 = !___nl__bool__69;
#line 525
if(___nl__bool__69){ goto label_19;}
#line 526
c_rt_lib0delete(translator_priv0move(___nl__im__55, ___nl__im__57, ___ref___rec__2));
#line 527
goto label_18;
#line 527
label_19:
;
#line 527
label_18:
;
#line 527
//clear ___nl__bool__69;
#line 528
goto label_14;
#line 528
label_16:
;
#line 528
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(962)));
#line 528
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 529
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_const(274)));
#line 529
___nl__bool__74 = false;
#line 529
c_rt_lib0move(&___nl__im__72, translator_priv0get_value_of_lvalue(___nl__im__73, ___nl__bool__74, ___ref___rec__2));
#line 529
c_rt_lib0clear(&___nl__im__73);
#line 529
//clear ___nl__bool__74;
#line 530
___nl__int__78 = c_rt_lib0array_len(___nl__im__72);
#line 530
___nl__int__79 = 1;
#line 530
___nl__int__77 = ___nl__int__78 - ___nl__int__79;
#line 530
//clear ___nl__int__78;
#line 530
//clear ___nl__int__79;
#line 530
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__72, ___nl__int__77));
#line 530
//clear ___nl__int__77;
#line 530
___nl__int__82 = c_rt_lib0array_len(___nl__im__72);
#line 530
___nl__int__83 = 1;
#line 530
___nl__int__81 = ___nl__int__82 - ___nl__int__83;
#line 530
//clear ___nl__int__82;
#line 530
//clear ___nl__int__83;
#line 530
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_get(___nl__im__72, ___nl__int__81));
#line 530
//clear ___nl__int__81;
#line 530
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__80, ___get_global_const(219)));
#line 530
c_rt_lib0clear(&___nl__im__76);
#line 530
c_rt_lib0clear(&___nl__im__80);
#line 531
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 531
c_rt_lib0move(&___nl__im__84, translator_priv0get_cast(___nl__im__75, ___nl__im__85, ___ref___rec__2));
#line 531
c_rt_lib0clear(&___nl__im__85);
#line 532
c_rt_lib0move(&___nl__im__88,___get_global_const(79));
#line 532
___nl__int__89 = 1;
#line 532
___nl__int__89 = -___nl__int__89;
#line 532
c_rt_lib0move(&___nl__im__90, c_rt_lib0int_new(___nl__int__89));
#line 532
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__84, ___get_global_const(74), ___nl__im__19, ___get_global_const(205), ___nl__im__88, ___get_global_const(522), ___nl__im__90));
#line 532
c_rt_lib0clear(&___nl__im__88);
#line 532
//clear ___nl__int__89;
#line 532
c_rt_lib0clear(&___nl__im__90);
#line 532
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__87));
#line 532
c_rt_lib0clear(&___nl__im__87);
#line 532
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__86));
#line 532
c_rt_lib0clear(&___nl__im__86);
#line 533
___nl__bool__91 = nlasm0eq_reg(___nl__im__75, ___nl__im__84);
#line 533
___nl__bool__91 = !___nl__bool__91;
#line 533
___nl__bool__91 = !___nl__bool__91;
#line 533
if(___nl__bool__91){ goto label_21;}
#line 534
c_rt_lib0delete(translator_priv0move(___nl__im__75, ___nl__im__84, ___ref___rec__2));
#line 535
goto label_20;
#line 535
label_21:
;
#line 535
label_20:
;
#line 535
//clear ___nl__bool__91;
#line 536
___nl__bool__92 = false;
#line 536
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__72, ___nl__bool__92, ___ref___rec__2));
#line 536
//clear ___nl__bool__92;
#line 537
goto label_14;
#line 537
label_17:
;
#line 537
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(963)));
#line 537
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 538
goto label_14;
#line 538
label_14:
;
#line 538
c_rt_lib0clear(&___nl__im__0);
#line 538
//clear ___nl__bool__1;
#line 538
//clear ___nl__bool__3;
#line 538
c_rt_lib0clear(&___nl__im__4);
#line 538
c_rt_lib0clear(&___nl__im__5);
#line 538
c_rt_lib0clear(&___nl__im__6);
#line 538
c_rt_lib0clear(&___nl__im__13);
#line 538
c_rt_lib0clear(&___nl__im__14);
#line 538
c_rt_lib0clear(&___nl__im__15);
#line 538
c_rt_lib0clear(&___nl__im__16);
#line 538
c_rt_lib0clear(&___nl__im__17);
#line 538
c_rt_lib0clear(&___nl__im__19);
#line 538
//clear ___nl__bool__20;
#line 538
c_rt_lib0clear(&___nl__im__21);
#line 538
c_rt_lib0clear(&___nl__im__22);
#line 538
c_rt_lib0clear(&___nl__im__23);
#line 538
c_rt_lib0clear(&___nl__im__24);
#line 538
//clear ___nl__bool__25;
#line 538
c_rt_lib0clear(&___nl__im__26);
#line 538
c_rt_lib0clear(&___nl__im__27);
#line 538
c_rt_lib0clear(&___nl__im__28);
#line 538
c_rt_lib0clear(&___nl__im__29);
#line 538
c_rt_lib0clear(&___nl__im__30);
#line 538
c_rt_lib0clear(&___nl__im__31);
#line 538
c_rt_lib0clear(&___nl__im__33);
#line 538
c_rt_lib0clear(&___nl__im__34);
#line 538
//clear ___nl__int__35;
#line 538
//clear ___nl__bool__51;
#line 538
c_rt_lib0clear(&___nl__im__52);
#line 538
c_rt_lib0clear(&___nl__im__53);
#line 538
c_rt_lib0clear(&___nl__im__54);
#line 538
c_rt_lib0clear(&___nl__im__55);
#line 538
c_rt_lib0clear(&___nl__im__57);
#line 538
c_rt_lib0clear(&___nl__im__70);
#line 538
c_rt_lib0clear(&___nl__im__71);
#line 538
c_rt_lib0clear(&___nl__im__72);
#line 538
c_rt_lib0clear(&___nl__im__75);
#line 538
c_rt_lib0clear(&___nl__im__84);
#line 538
c_rt_lib0clear(&___nl__im__93);
#line 538
c_rt_lib0clear(&___nl__im__94);
#line 538
return NULL;
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
#line 542
___nl__im_ptr__2 = &((*___ref___rec__1).debug0field);
#line 542
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 542
c_rt_lib0hash_set_value_dec(___nl__im_ptr__2, ___get_global_const(506), ___nl__im__3);
#line 542
___nl__im_ptr__2 = NULL;
#line 542
c_rt_lib0clear(&___nl__im__3);
#line 543
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 543
c_rt_lib0move(&___nl__im__5,___get_global_const(774));
#line 543
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___nl__im_ptr__4), ___nl__im__5));
#line 543
___nl__int__6 = 1;
#line 543
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 543
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 543
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 543
c_rt_lib0move(&___nl__string__9,___get_global_const(774));
#line 543
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__4, ___nl__string__9, ___nl__im__5));
#line 543
___nl__im_ptr__4 = NULL;
#line 543
c_rt_lib0clear(&___nl__im__5);
#line 543
//clear ___nl__int__6;
#line 543
//clear ___nl__int__7;
#line 543
//clear ___nl__int__8;
#line 543
c_rt_lib0clear(&___nl__string__9);
#line 543
c_rt_lib0clear(&___nl__im__0);
#line 543
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
ImmT * ___nl__im_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
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
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
ImmT * ___nl__im_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT * ___nl__im_ptr__51 = NULL;
ImmT * ___nl__im_ptr__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__string__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT * ___nl__im_ptr__59 = NULL;
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
#line 547
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 547
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__2, ___ref___rec__1));
#line 547
c_rt_lib0clear(&___nl__im__2);
#line 548
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 548
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(935));
#line 548
if(___nl__bool__4){ goto label_2;}
#line 550
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(937));
#line 550
if(___nl__bool__4){ goto label_3;}
#line 552
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(159));
#line 552
if(___nl__bool__4){ goto label_4;}
#line 554
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(939));
#line 554
if(___nl__bool__4){ goto label_5;}
#line 556
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(938));
#line 556
if(___nl__bool__4){ goto label_6;}
#line 558
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(940));
#line 558
if(___nl__bool__4){ goto label_7;}
#line 560
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(936));
#line 560
if(___nl__bool__4){ goto label_8;}
#line 562
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(948));
#line 562
if(___nl__bool__4){ goto label_9;}
#line 563
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(219));
#line 563
if(___nl__bool__4){ goto label_10;}
#line 566
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(946));
#line 566
if(___nl__bool__4){ goto label_11;}
#line 568
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(246));
#line 568
if(___nl__bool__4){ goto label_12;}
#line 570
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(945));
#line 570
if(___nl__bool__4){ goto label_13;}
#line 572
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(947));
#line 572
if(___nl__bool__4){ goto label_14;}
#line 574
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(177));
#line 574
if(___nl__bool__4){ goto label_15;}
#line 576
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(943));
#line 576
if(___nl__bool__4){ goto label_16;}
#line 579
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(944));
#line 579
if(___nl__bool__4){ goto label_17;}
#line 582
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(247));
#line 582
if(___nl__bool__4){ goto label_18;}
#line 584
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(252));
#line 584
if(___nl__bool__4){ goto label_19;}
#line 586
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(941));
#line 586
if(___nl__bool__4){ goto label_20;}
#line 588
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(942));
#line 588
if(___nl__bool__4){ goto label_21;}
#line 588
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 588
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 588
nl_die_arg(___nl__im__5);
#line 548
label_2:
;
#line 548
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(935)));
#line 548
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 549
___nl__bool__8 = false;
#line 549
c_rt_lib0delete(translator_priv0print_if(___nl__im__6, ___nl__bool__8, ___ref___rec__1));
#line 549
//clear ___nl__bool__8;
#line 550
goto label_1;
#line 550
label_3:
;
#line 550
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(937)));
#line 550
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 551
c_rt_lib0delete(translator_priv0print_fora(___nl__im__9, ___ref___rec__1));
#line 552
goto label_1;
#line 552
label_4:
;
#line 552
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(159)));
#line 552
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 553
c_rt_lib0delete(translator_priv0print_loop(___nl__im__11, ___ref___rec__1));
#line 554
goto label_1;
#line 554
label_5:
;
#line 554
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(939)));
#line 554
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 555
c_rt_lib0delete(translator_priv0print_rep(___nl__im__13, ___ref___rec__1));
#line 556
goto label_1;
#line 556
label_6:
;
#line 556
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(938)));
#line 556
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 557
c_rt_lib0delete(translator_priv0print_forh(___nl__im__15, ___ref___rec__1));
#line 558
goto label_1;
#line 558
label_7:
;
#line 558
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(940)));
#line 558
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 559
c_rt_lib0delete(translator_priv0print_while(___nl__im__17, ___ref___rec__1));
#line 560
goto label_1;
#line 560
label_8:
;
#line 560
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(936)));
#line 560
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 561
c_rt_lib0delete(translator_priv0print_for(___nl__im__19, ___ref___rec__1));
#line 562
goto label_1;
#line 562
label_9:
;
#line 563
goto label_1;
#line 563
label_10:
;
#line 563
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(219)));
#line 563
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 564
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(205)));
#line 564
___nl__im_ptr__27 = &((*___ref___rec__1).logic0field);
#line 564
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 564
___nl__im_ptr__27 = NULL;
#line 564
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(388)));
#line 564
c_rt_lib0clear(&___nl__im__26);
#line 564
c_rt_lib0move(&___nl__im__23, translator_priv0var_type_to_reg_type(___nl__im__24, ___nl__im__25));
#line 564
c_rt_lib0clear(&___nl__im__24);
#line 564
c_rt_lib0clear(&___nl__im__25);
#line 565
___nl__int__29 = 1;
#line 565
___nl__int__29 = -___nl__int__29;
#line 565
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 565
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 565
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__23, ___get_global_const(218), ___nl__im__30, ___get_global_const(329), ___nl__im__31));
#line 565
//clear ___nl__int__29;
#line 565
c_rt_lib0clear(&___nl__im__30);
#line 565
c_rt_lib0clear(&___nl__im__31);
#line 565
c_rt_lib0delete(translator_priv0print_val(___nl__im__21, ___nl__im__28, ___ref___rec__1));
#line 565
c_rt_lib0clear(&___nl__im__28);
#line 566
goto label_1;
#line 566
label_11:
;
#line 566
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(946)));
#line 566
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 567
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__im__32, ___ref___rec__1));
#line 568
goto label_1;
#line 568
label_12:
;
#line 568
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(246)));
#line 568
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 569
c_rt_lib0delete(translator_priv0print_return(___nl__im__34, ___ref___rec__1));
#line 570
goto label_1;
#line 570
label_13:
;
#line 570
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(945)));
#line 570
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 571
c_rt_lib0delete(translator_priv0print_match(___nl__im__36, ___ref___rec__1));
#line 572
goto label_1;
#line 572
label_14:
;
#line 572
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(947)));
#line 572
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 573
___nl__bool__40 = true;
#line 573
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__38, ___nl__bool__40, ___ref___rec__1));
#line 573
//clear ___nl__bool__40;
#line 574
goto label_1;
#line 574
label_15:
;
#line 574
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(177)));
#line 574
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 575
___nl__bool__43 = false;
#line 575
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__41, ___nl__bool__43, ___ref___rec__1));
#line 575
//clear ___nl__bool__43;
#line 576
goto label_1;
#line 576
label_16:
;
#line 577
___nl__im_ptr__44 = &((*___ref___rec__1).loop_label0field);
#line 577
c_rt_lib0move(&___nl__im__45,___get_global_const(943));
#line 577
c_rt_lib0move(&___nl__im__45, c_rt_lib0get_ref_hash((*___nl__im_ptr__44), ___nl__im__45));
#line 577
___nl__bool__47 = true;
#line 577
c_rt_lib0move(&___nl__im__46, c_rt_lib0bool_to_nl_native(___nl__bool__47));
#line 577
c_rt_lib0hash_set_value_dec(&___nl__im__45, ___get_global_const(1297), ___nl__im__46);
#line 577
c_rt_lib0move(&___nl__string__48,___get_global_const(943));
#line 577
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__44, ___nl__string__48, ___nl__im__45));
#line 577
___nl__im_ptr__44 = NULL;
#line 577
c_rt_lib0clear(&___nl__im__45);
#line 577
c_rt_lib0clear(&___nl__im__46);
#line 577
//clear ___nl__bool__47;
#line 577
c_rt_lib0clear(&___nl__string__48);
#line 578
___nl__im_ptr__51 = &((*___ref___rec__1).loop_label0field);
#line 578
c_rt_lib0copy(&___nl__im__50, (*___nl__im_ptr__51));
#line 578
___nl__im_ptr__51 = NULL;
#line 578
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(943)));
#line 578
c_rt_lib0clear(&___nl__im__50);
#line 578
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__49));
#line 578
c_rt_lib0clear(&___nl__im__49);
#line 579
goto label_1;
#line 579
label_17:
;
#line 580
___nl__im_ptr__52 = &((*___ref___rec__1).loop_label0field);
#line 580
c_rt_lib0move(&___nl__im__53,___get_global_const(944));
#line 580
c_rt_lib0move(&___nl__im__53, c_rt_lib0get_ref_hash((*___nl__im_ptr__52), ___nl__im__53));
#line 580
___nl__bool__55 = true;
#line 580
c_rt_lib0move(&___nl__im__54, c_rt_lib0bool_to_nl_native(___nl__bool__55));
#line 580
c_rt_lib0hash_set_value_dec(&___nl__im__53, ___get_global_const(1297), ___nl__im__54);
#line 580
c_rt_lib0move(&___nl__string__56,___get_global_const(944));
#line 580
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__52, ___nl__string__56, ___nl__im__53));
#line 580
___nl__im_ptr__52 = NULL;
#line 580
c_rt_lib0clear(&___nl__im__53);
#line 580
c_rt_lib0clear(&___nl__im__54);
#line 580
//clear ___nl__bool__55;
#line 580
c_rt_lib0clear(&___nl__string__56);
#line 581
___nl__im_ptr__59 = &((*___ref___rec__1).loop_label0field);
#line 581
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 581
___nl__im_ptr__59 = NULL;
#line 581
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_const(944)));
#line 581
c_rt_lib0clear(&___nl__im__58);
#line 581
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__57));
#line 581
c_rt_lib0clear(&___nl__im__57);
#line 582
goto label_1;
#line 582
label_18:
;
#line 582
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(247)));
#line 582
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 583
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 583
c_rt_lib0delete(translator_priv0print_die(___nl__im__60, ___nl__im__62, ___ref___rec__1));
#line 583
c_rt_lib0clear(&___nl__im__62);
#line 584
goto label_1;
#line 584
label_19:
;
#line 584
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(252)));
#line 584
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 585
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 585
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__63, ___ref___rec__1, ___nl__im__65));
#line 585
c_rt_lib0clear(&___nl__im__65);
#line 586
goto label_1;
#line 586
label_20:
;
#line 586
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(941)));
#line 586
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 587
c_rt_lib0delete(translator_priv0print_if_mod(___nl__im__66, ___ref___rec__1));
#line 588
goto label_1;
#line 588
label_21:
;
#line 588
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(942)));
#line 588
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 589
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__im__68, ___ref___rec__1));
#line 590
goto label_1;
#line 590
label_1:
;
#line 590
c_rt_lib0clear(&___nl__im__0);
#line 590
c_rt_lib0clear(&___nl__im__3);
#line 590
//clear ___nl__bool__4;
#line 590
c_rt_lib0clear(&___nl__im__5);
#line 590
c_rt_lib0clear(&___nl__im__6);
#line 590
c_rt_lib0clear(&___nl__im__7);
#line 590
c_rt_lib0clear(&___nl__im__9);
#line 590
c_rt_lib0clear(&___nl__im__10);
#line 590
c_rt_lib0clear(&___nl__im__11);
#line 590
c_rt_lib0clear(&___nl__im__12);
#line 590
c_rt_lib0clear(&___nl__im__13);
#line 590
c_rt_lib0clear(&___nl__im__14);
#line 590
c_rt_lib0clear(&___nl__im__15);
#line 590
c_rt_lib0clear(&___nl__im__16);
#line 590
c_rt_lib0clear(&___nl__im__17);
#line 590
c_rt_lib0clear(&___nl__im__18);
#line 590
c_rt_lib0clear(&___nl__im__19);
#line 590
c_rt_lib0clear(&___nl__im__20);
#line 590
c_rt_lib0clear(&___nl__im__21);
#line 590
c_rt_lib0clear(&___nl__im__22);
#line 590
c_rt_lib0clear(&___nl__im__23);
#line 590
c_rt_lib0clear(&___nl__im__32);
#line 590
c_rt_lib0clear(&___nl__im__33);
#line 590
c_rt_lib0clear(&___nl__im__34);
#line 590
c_rt_lib0clear(&___nl__im__35);
#line 590
c_rt_lib0clear(&___nl__im__36);
#line 590
c_rt_lib0clear(&___nl__im__37);
#line 590
c_rt_lib0clear(&___nl__im__38);
#line 590
c_rt_lib0clear(&___nl__im__39);
#line 590
c_rt_lib0clear(&___nl__im__41);
#line 590
c_rt_lib0clear(&___nl__im__42);
#line 590
c_rt_lib0clear(&___nl__im__60);
#line 590
c_rt_lib0clear(&___nl__im__61);
#line 590
c_rt_lib0clear(&___nl__im__63);
#line 590
c_rt_lib0clear(&___nl__im__64);
#line 590
c_rt_lib0clear(&___nl__im__66);
#line 590
c_rt_lib0clear(&___nl__im__67);
#line 590
c_rt_lib0clear(&___nl__im__68);
#line 590
c_rt_lib0clear(&___nl__im__69);
#line 590
return NULL;
return NULL;
}

ImmT  translator_priv0print_loop_break(translator0state_t0type* ___ref___rec__0,translator0loop0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 594
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(535)));
#line 594
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 594
c_rt_lib0clear(&___nl__im__4);
#line 594
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 594
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__5));
#line 594
//clear ___nl__int__3;
#line 594
c_rt_lib0clear(&___nl__im__5);
#line 594
c_rt_lib0delete(translator_priv0print(___ref___rec__0, ___nl__im__2));
#line 594
c_rt_lib0clear(&___nl__im__2);
#line 594
c_rt_lib0clear(&___nl__im__1);
#line 594
return NULL;
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
#line 599
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 600
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 601
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 602
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 602
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(221)));
#line 602
c_rt_lib0clear(&___nl__im__8);
#line 602
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 602
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__7, ___get_global_const(227), ___nl__im__9));
#line 602
c_rt_lib0clear(&___nl__im__7);
#line 602
c_rt_lib0clear(&___nl__im__9);
#line 602
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(949), ___nl__im__3, ___get_global_const(935), ___nl__im__4, ___get_global_const(950), ___nl__im__5, ___get_global_const(951), ___nl__im__6));
#line 602
c_rt_lib0clear(&___nl__im__3);
#line 602
c_rt_lib0clear(&___nl__im__4);
#line 602
c_rt_lib0clear(&___nl__im__5);
#line 602
c_rt_lib0clear(&___nl__im__6);
#line 604
___nl__bool__10 = true;
#line 604
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__10, ___ref___rec__1));
#line 604
//clear ___nl__bool__10;
#line 604
c_rt_lib0clear(&___nl__im__0);
#line 604
c_rt_lib0clear(&___nl__im__2);
#line 604
return NULL;
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
#line 611
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 611
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(221)));
#line 611
c_rt_lib0clear(&___nl__im__5);
#line 614
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 614
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(221)));
#line 614
c_rt_lib0clear(&___nl__im__10);
#line 615
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 615
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(967), ___nl__im__12));
#line 615
c_rt_lib0clear(&___nl__im__12);
#line 616
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 616
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__9, ___get_global_const(219), ___nl__im__11, ___get_global_const(205), ___nl__im__13));
#line 616
c_rt_lib0clear(&___nl__im__9);
#line 616
c_rt_lib0clear(&___nl__im__11);
#line 616
c_rt_lib0clear(&___nl__im__13);
#line 618
c_rt_lib0move(&___nl__im__14,___get_global_const(336));
#line 618
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__im__8, ___get_global_const(515), ___nl__im__14));
#line 618
c_rt_lib0clear(&___nl__im__8);
#line 618
c_rt_lib0clear(&___nl__im__14);
#line 618
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(971), ___nl__im__7));
#line 618
c_rt_lib0clear(&___nl__im__7);
#line 620
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 620
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__4, ___get_global_const(219), ___nl__im__6, ___get_global_const(205), ___nl__im__15));
#line 620
c_rt_lib0clear(&___nl__im__4);
#line 620
c_rt_lib0clear(&___nl__im__6);
#line 620
c_rt_lib0clear(&___nl__im__15);
#line 622
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 623
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 624
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 624
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(221)));
#line 624
c_rt_lib0clear(&___nl__im__20);
#line 624
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 624
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(221), ___nl__im__19, ___get_global_const(227), ___nl__im__21));
#line 624
c_rt_lib0clear(&___nl__im__19);
#line 624
c_rt_lib0clear(&___nl__im__21);
#line 624
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(949), ___nl__im__3, ___get_global_const(935), ___nl__im__16, ___get_global_const(950), ___nl__im__17, ___get_global_const(951), ___nl__im__18));
#line 624
c_rt_lib0clear(&___nl__im__3);
#line 624
c_rt_lib0clear(&___nl__im__16);
#line 624
c_rt_lib0clear(&___nl__im__17);
#line 624
c_rt_lib0clear(&___nl__im__18);
#line 626
___nl__bool__22 = true;
#line 626
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__22, ___ref___rec__1));
#line 626
//clear ___nl__bool__22;
#line 626
c_rt_lib0clear(&___nl__im__0);
#line 626
c_rt_lib0clear(&___nl__im__2);
#line 626
return NULL;
return NULL;
}

ImmT  translator_priv0print_if(nast0if_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2) {
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
#line 630
c_rt_lib0move(&___nl__im__3, translator_priv0save_registers(___ref___rec__2));
#line 631
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__2);
#line 632
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 633
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 633
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__2, ___nl__im__7));
#line 633
c_rt_lib0clear(&___nl__im__7);
#line 634
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 634
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__6, ___ref___rec__2));
#line 634
c_rt_lib0clear(&___nl__im__8);
#line 635
c_rt_lib0move(&___nl__im__11,___get_global_const(336));
#line 635
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__6, ___get_global_const(74), ___nl__im__6, ___get_global_const(515), ___nl__im__11));
#line 635
c_rt_lib0clear(&___nl__im__11);
#line 635
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__10));
#line 635
c_rt_lib0clear(&___nl__im__10);
#line 635
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 635
c_rt_lib0clear(&___nl__im__9);
#line 636
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 637
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(935)));
#line 637
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__12, ___ref___rec__2));
#line 637
c_rt_lib0clear(&___nl__im__12);
#line 638
___nl__bool__13 = ___nl__bool__1;
#line 638
___nl__bool__13 = !___nl__bool__13;
#line 638
___nl__bool__13 = !___nl__bool__13;
#line 638
if(___nl__bool__13){ goto label_2;}
#line 638
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(935)));
#line 638
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(221)));
#line 638
c_rt_lib0clear(&___nl__im__16);
#line 638
c_rt_lib0move(&___nl__im__14, translator0last_debug_char(___nl__im__15));
#line 638
c_rt_lib0clear(&___nl__im__15);
#line 638
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__14, ___ref___rec__2));
#line 638
c_rt_lib0clear(&___nl__im__14);
#line 638
goto label_1;
#line 638
label_2:
;
#line 638
label_1:
;
#line 638
//clear ___nl__bool__13;
#line 639
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__4));
#line 639
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__18));
#line 639
c_rt_lib0clear(&___nl__im__18);
#line 639
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__17));
#line 639
c_rt_lib0clear(&___nl__im__17);
#line 640
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 641
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(950)));
#line 641
___nl__int__21 = 0;
#line 641
___nl__int__22 = 1;
#line 641
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 641
label_5:
;
#line 641
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 641
___nl__bool__24 = ___nl__int__25;
#line 641
if(___nl__bool__24){ goto label_3;}
#line 641
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 641
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 642
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(221)));
#line 642
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__27, ___ref___rec__2));
#line 642
c_rt_lib0clear(&___nl__im__27);
#line 643
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 644
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(949)));
#line 644
c_rt_lib0delete(translator_priv0print_val(___nl__im__28, ___nl__im__6, ___ref___rec__2));
#line 644
c_rt_lib0clear(&___nl__im__28);
#line 645
c_rt_lib0move(&___nl__im__31,___get_global_const(336));
#line 645
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__6, ___get_global_const(74), ___nl__im__6, ___get_global_const(515), ___nl__im__31));
#line 645
c_rt_lib0clear(&___nl__im__31);
#line 645
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__30));
#line 645
c_rt_lib0clear(&___nl__im__30);
#line 645
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__29));
#line 645
c_rt_lib0clear(&___nl__im__29);
#line 646
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 647
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(227)));
#line 647
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__32, ___ref___rec__2));
#line 647
c_rt_lib0clear(&___nl__im__32);
#line 648
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(227)));
#line 648
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(221)));
#line 648
c_rt_lib0clear(&___nl__im__35);
#line 648
c_rt_lib0move(&___nl__im__33, translator0last_debug_char(___nl__im__34));
#line 648
c_rt_lib0clear(&___nl__im__34);
#line 648
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__33, ___ref___rec__2));
#line 648
c_rt_lib0clear(&___nl__im__33);
#line 649
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__4));
#line 649
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__37));
#line 649
c_rt_lib0clear(&___nl__im__37);
#line 649
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 649
c_rt_lib0clear(&___nl__im__36);
#line 650
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 650
c_rt_lib0clear(&___nl__im__20);
#line 651
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 651
goto label_5;
#line 651
label_3:
;
#line 652
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(951)));
#line 652
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(227)));
#line 652
c_rt_lib0clear(&___nl__im__40);
#line 652
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(948));
#line 652
c_rt_lib0clear(&___nl__im__39);
#line 652
___nl__bool__38 = !___nl__bool__38;
#line 652
___nl__bool__38 = !___nl__bool__38;
#line 652
if(___nl__bool__38){ goto label_7;}
#line 653
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(951)));
#line 653
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__41, ___ref___rec__2));
#line 653
c_rt_lib0clear(&___nl__im__41);
#line 654
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(951)));
#line 654
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(221)));
#line 654
c_rt_lib0clear(&___nl__im__44);
#line 654
c_rt_lib0move(&___nl__im__42, translator0last_debug_char(___nl__im__43));
#line 654
c_rt_lib0clear(&___nl__im__43);
#line 654
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__42, ___ref___rec__2));
#line 654
c_rt_lib0clear(&___nl__im__42);
#line 655
c_rt_lib0move(&___nl__im__46, c_rt_lib0int_new(___nl__int__4));
#line 655
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__46));
#line 655
c_rt_lib0clear(&___nl__im__46);
#line 655
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__45));
#line 655
c_rt_lib0clear(&___nl__im__45);
#line 656
goto label_6;
#line 656
label_7:
;
#line 656
label_6:
;
#line 656
//clear ___nl__bool__38;
#line 657
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__2));
#line 658
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__3, ___ref___rec__2));
#line 658
c_rt_lib0clear(&___nl__im__0);
#line 658
//clear ___nl__bool__1;
#line 658
c_rt_lib0clear(&___nl__im__3);
#line 658
//clear ___nl__int__4;
#line 658
//clear ___nl__int__5;
#line 658
c_rt_lib0clear(&___nl__im__6);
#line 658
c_rt_lib0clear(&___nl__im__19);
#line 658
c_rt_lib0clear(&___nl__im__20);
#line 658
//clear ___nl__int__21;
#line 658
//clear ___nl__int__22;
#line 658
//clear ___nl__int__23;
#line 658
//clear ___nl__bool__24;
#line 658
//clear ___nl__int__25;
#line 658
c_rt_lib0clear(&___nl__im__26);
#line 658
return NULL;
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
#line 665
c_rt_lib0move(&___nl__im__6,___get_global_const(269));
#line 665
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__0, ___get_global_const(266), ___nl__im__6, ___get_global_const(268), ___nl__im__1, ___get_global_const(265), ___nl__im__2));
#line 665
c_rt_lib0clear(&___nl__im__6);
#line 665
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__5));
#line 665
c_rt_lib0clear(&___nl__im__5);
#line 665
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 665
c_rt_lib0clear(&___nl__im__4);
#line 665
c_rt_lib0clear(&___nl__im__0);
#line 665
c_rt_lib0clear(&___nl__im__1);
#line 665
c_rt_lib0clear(&___nl__im__2);
#line 665
return NULL;
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
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
#line 669
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 669
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 669
___nl__im_ptr__4 = NULL;
#line 670
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__0));
#line 671
___nl__im_ptr__6 = &((*___ref___rec__0).loop_label0field);
#line 671
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__1));
#line 671
___nl__bool__10 = false;
#line 671
c_rt_lib0move(&___nl__im__11, c_rt_lib0bool_to_nl_native(___nl__bool__10));
#line 671
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(535), ___nl__im__9, ___get_global_const(1296), ___nl__im__5, ___get_global_const(1297), ___nl__im__11));
#line 671
c_rt_lib0clear(&___nl__im__9);
#line 671
//clear ___nl__bool__10;
#line 671
c_rt_lib0clear(&___nl__im__11);
#line 671
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 671
c_rt_lib0hash_set_value_dec(___nl__im_ptr__6, ___get_global_const(943), ___nl__im__7);
#line 671
___nl__im_ptr__6 = NULL;
#line 671
c_rt_lib0clear(&___nl__im__7);
#line 671
c_rt_lib0clear(&___nl__im__8);
#line 672
___nl__im_ptr__12 = &((*___ref___rec__0).loop_label0field);
#line 672
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__2));
#line 672
___nl__bool__16 = false;
#line 672
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 672
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_const(535), ___nl__im__15, ___get_global_const(1296), ___nl__im__5, ___get_global_const(1297), ___nl__im__17));
#line 672
c_rt_lib0clear(&___nl__im__15);
#line 672
//clear ___nl__bool__16;
#line 672
c_rt_lib0clear(&___nl__im__17);
#line 672
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 672
c_rt_lib0hash_set_value_dec(___nl__im_ptr__12, ___get_global_const(944), ___nl__im__13);
#line 672
___nl__im_ptr__12 = NULL;
#line 672
c_rt_lib0clear(&___nl__im__13);
#line 672
c_rt_lib0clear(&___nl__im__14);
#line 673
//clear ___nl__int__1;
#line 673
//clear ___nl__int__2;
#line 673
c_rt_lib0clear(&___nl__im__5);
#line 673
return ___nl__im__3;
return NULL;
}

bool  translator_priv0break_used(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 677
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 677
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 677
___nl__im_ptr__4 = NULL;
#line 677
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(943)));
#line 677
c_rt_lib0clear(&___nl__im__3);
#line 677
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1297)));
#line 677
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__5);
#line 677
c_rt_lib0clear(&___nl__im__2);
#line 677
c_rt_lib0clear(&___nl__im__5);
#line 677
return ___nl__bool__1;
return false;
}

bool  translator_priv0continue_used(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 681
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 681
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 681
___nl__im_ptr__4 = NULL;
#line 681
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(944)));
#line 681
c_rt_lib0clear(&___nl__im__3);
#line 681
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(1297)));
#line 681
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__5);
#line 681
c_rt_lib0clear(&___nl__im__2);
#line 681
c_rt_lib0clear(&___nl__im__5);
#line 681
return ___nl__bool__1;
return false;
}

ImmT  translator_priv0print_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
#line 685
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(38)));
#line 685
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(205)));
#line 685
c_rt_lib0clear(&___nl__im__4);
#line 685
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 685
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 685
___nl__im_ptr__7 = NULL;
#line 685
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(388)));
#line 685
c_rt_lib0clear(&___nl__im__6);
#line 685
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 685
c_rt_lib0clear(&___nl__im__3);
#line 685
c_rt_lib0clear(&___nl__im__5);
#line 685
___nl__bool__2 = !___nl__bool__2;
#line 685
if(___nl__bool__2){ goto label_2;}
#line 686
c_rt_lib0delete(translator_priv0print_own_fora(___nl__im__0, ___ref___rec__1));
#line 687
goto label_1;
#line 687
label_2:
;
#line 688
c_rt_lib0delete(translator_priv0print_ptd_fora(___nl__im__0, ___ref___rec__1));
#line 689
goto label_1;
#line 689
label_1:
;
#line 689
//clear ___nl__bool__2;
#line 689
c_rt_lib0clear(&___nl__im__0);
#line 689
return NULL;
return NULL;
}

ImmT  translator_priv0print_ptd_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
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
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT * ___nl__im_ptr__41 = NULL;
#line 693
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 693
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 693
___nl__im_ptr__4 = NULL;
#line 693
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(506)));
#line 693
c_rt_lib0clear(&___nl__im__3);
#line 694
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(38)));
#line 694
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 694
c_rt_lib0clear(&___nl__im__6);
#line 695
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(570)));
#line 695
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 695
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 695
c_rt_lib0clear(&___nl__im__8);
#line 695
c_rt_lib0clear(&___nl__im__9);
#line 696
___nl__int__10 = translator_priv0get_sim_label(___ref___rec__1);
#line 697
___nl__int__11 = translator_priv0get_sim_label(___ref___rec__1);
#line 698
___nl__int__12 = translator_priv0get_sim_label(___ref___rec__1);
#line 699
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 699
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 699
c_rt_lib0clear(&___nl__im__14);
#line 700
___nl__int__15 = 0;
#line 700
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 700
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__13, ___ref___rec__1));
#line 700
//clear ___nl__int__15;
#line 700
c_rt_lib0clear(&___nl__im__16);
#line 701
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 701
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__1, ___nl__im__18));
#line 701
c_rt_lib0clear(&___nl__im__18);
#line 702
___nl__int__19 = 1;
#line 702
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 702
c_rt_lib0delete(translator_priv0load_const(___nl__im__20, ___nl__im__17, ___ref___rec__1));
#line 702
//clear ___nl__int__19;
#line 702
c_rt_lib0clear(&___nl__im__20);
#line 703
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 703
c_rt_lib0move(&___nl__im__21, translator_priv0new_register(___ref___rec__1, ___nl__im__22));
#line 703
c_rt_lib0clear(&___nl__im__22);
#line 704
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__21, ___get_global_const(74), ___nl__im__5));
#line 704
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__24));
#line 704
c_rt_lib0clear(&___nl__im__24);
#line 704
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__23));
#line 704
c_rt_lib0clear(&___nl__im__23);
#line 705
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 705
c_rt_lib0move(&___nl__im__25, translator_priv0new_register(___ref___rec__1, ___nl__im__26));
#line 705
c_rt_lib0clear(&___nl__im__26);
#line 706
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__12, ___ref___rec__1));
#line 707
c_rt_lib0move(&___nl__im__27,___get_global_const(360));
#line 707
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__25, ___nl__im__13, ___nl__im__21, ___nl__im__27, ___ref___rec__1));
#line 707
c_rt_lib0clear(&___nl__im__27);
#line 708
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__10, ___nl__im__25, ___ref___rec__1));
#line 709
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 709
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 709
c_rt_lib0clear(&___nl__im__29);
#line 710
c_rt_lib0delete(translator_priv0use_index(___nl__im__28, ___nl__im__5, ___nl__im__13, ___ref___rec__1));
#line 711
c_rt_lib0delete(translator_priv0move(___nl__im__7, ___nl__im__28, ___ref___rec__1));
#line 712
c_rt_lib0move(&___nl__im__30, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__10, ___nl__int__11));
#line 713
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 713
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__31, ___ref___rec__1));
#line 713
c_rt_lib0clear(&___nl__im__31);
#line 714
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__7, ___ref___rec__1));
#line 715
___nl__bool__32 = translator_priv0continue_used(___ref___rec__1);
#line 715
___nl__bool__32 = !___nl__bool__32;
#line 715
if(___nl__bool__32){ goto label_2;}
#line 715
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__11, ___ref___rec__1));
#line 715
goto label_1;
#line 715
label_2:
;
#line 715
label_1:
;
#line 715
//clear ___nl__bool__32;
#line 716
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1017)));
#line 716
___nl__bool__33 = c_rt_lib0check_true_native(___nl__im__34);
#line 716
c_rt_lib0clear(&___nl__im__34);
#line 716
___nl__bool__33 = !___nl__bool__33;
#line 716
___nl__bool__33 = !___nl__bool__33;
#line 716
if(___nl__bool__33){ goto label_4;}
#line 716
c_rt_lib0move(&___nl__im__35, translator0last_debug_char(___nl__im__2));
#line 716
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__35, ___ref___rec__1));
#line 716
c_rt_lib0clear(&___nl__im__35);
#line 716
goto label_3;
#line 716
label_4:
;
#line 716
label_3:
;
#line 716
//clear ___nl__bool__33;
#line 717
c_rt_lib0move(&___nl__im__38,___get_global_const(340));
#line 717
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__13, ___get_global_const(274), ___nl__im__13, ___get_global_const(275), ___nl__im__17, ___get_global_const(515), ___nl__im__38));
#line 717
c_rt_lib0clear(&___nl__im__38);
#line 717
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__37));
#line 717
c_rt_lib0clear(&___nl__im__37);
#line 717
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__36));
#line 717
c_rt_lib0clear(&___nl__im__36);
#line 718
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__12));
#line 718
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__40));
#line 718
c_rt_lib0clear(&___nl__im__40);
#line 718
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__39));
#line 718
c_rt_lib0clear(&___nl__im__39);
#line 719
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__10, ___ref___rec__1));
#line 720
___nl__im_ptr__41 = &((*___ref___rec__1).loop_label0field);
#line 720
c_rt_lib0copy(___nl__im_ptr__41, ___nl__im__30);
#line 720
___nl__im_ptr__41 = NULL;
#line 720
c_rt_lib0clear(&___nl__im__0);
#line 720
c_rt_lib0clear(&___nl__im__2);
#line 720
c_rt_lib0clear(&___nl__im__5);
#line 720
c_rt_lib0clear(&___nl__im__7);
#line 720
//clear ___nl__int__10;
#line 720
//clear ___nl__int__11;
#line 720
//clear ___nl__int__12;
#line 720
c_rt_lib0clear(&___nl__im__13);
#line 720
c_rt_lib0clear(&___nl__im__17);
#line 720
c_rt_lib0clear(&___nl__im__21);
#line 720
c_rt_lib0clear(&___nl__im__25);
#line 720
c_rt_lib0clear(&___nl__im__28);
#line 720
c_rt_lib0clear(&___nl__im__30);
#line 720
return NULL;
return NULL;
}

ImmT  translator_priv0print_own_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
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
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT * ___nl__im_ptr__51 = NULL;
#line 724
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 724
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 724
___nl__im_ptr__4 = NULL;
#line 724
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(506)));
#line 724
c_rt_lib0clear(&___nl__im__3);
#line 725
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(38)));
#line 725
___nl__bool__7 = true;
#line 725
c_rt_lib0move(&___nl__im__5, translator_priv0get_value_of_lvalue(___nl__im__6, ___nl__bool__7, ___ref___rec__1));
#line 725
c_rt_lib0clear(&___nl__im__6);
#line 725
//clear ___nl__bool__7;
#line 726
___nl__int__11 = c_rt_lib0array_len(___nl__im__5);
#line 726
___nl__int__12 = 1;
#line 726
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 726
//clear ___nl__int__11;
#line 726
//clear ___nl__int__12;
#line 726
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 726
//clear ___nl__int__10;
#line 726
___nl__int__15 = c_rt_lib0array_len(___nl__im__5);
#line 726
___nl__int__16 = 1;
#line 726
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 726
//clear ___nl__int__15;
#line 726
//clear ___nl__int__16;
#line 726
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__5, ___nl__int__14));
#line 726
//clear ___nl__int__14;
#line 726
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(219)));
#line 726
c_rt_lib0clear(&___nl__im__9);
#line 726
c_rt_lib0clear(&___nl__im__13);
#line 727
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(570)));
#line 727
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 727
c_rt_lib0move(&___nl__im__17, translator_priv0print_var_decl(___nl__im__18, ___ref___rec__1, ___nl__im__19));
#line 727
c_rt_lib0clear(&___nl__im__18);
#line 727
c_rt_lib0clear(&___nl__im__19);
#line 728
___nl__int__20 = translator_priv0get_sim_label(___ref___rec__1);
#line 729
___nl__int__21 = translator_priv0get_sim_label(___ref___rec__1);
#line 730
___nl__int__22 = translator_priv0get_sim_label(___ref___rec__1);
#line 731
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 731
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 731
c_rt_lib0clear(&___nl__im__24);
#line 732
___nl__int__25 = 0;
#line 732
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 732
c_rt_lib0delete(translator_priv0load_const(___nl__im__26, ___nl__im__23, ___ref___rec__1));
#line 732
//clear ___nl__int__25;
#line 732
c_rt_lib0clear(&___nl__im__26);
#line 733
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 733
c_rt_lib0move(&___nl__im__27, translator_priv0new_register(___ref___rec__1, ___nl__im__28));
#line 733
c_rt_lib0clear(&___nl__im__28);
#line 734
___nl__int__29 = 1;
#line 734
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 734
c_rt_lib0delete(translator_priv0load_const(___nl__im__30, ___nl__im__27, ___ref___rec__1));
#line 734
//clear ___nl__int__29;
#line 734
c_rt_lib0clear(&___nl__im__30);
#line 735
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 735
c_rt_lib0move(&___nl__im__31, translator_priv0new_register(___ref___rec__1, ___nl__im__32));
#line 735
c_rt_lib0clear(&___nl__im__32);
#line 736
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__31, ___get_global_const(74), ___nl__im__8));
#line 736
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__34));
#line 736
c_rt_lib0clear(&___nl__im__34);
#line 736
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__33));
#line 736
c_rt_lib0clear(&___nl__im__33);
#line 737
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 737
c_rt_lib0move(&___nl__im__35, translator_priv0new_register(___ref___rec__1, ___nl__im__36));
#line 737
c_rt_lib0clear(&___nl__im__36);
#line 738
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__22, ___ref___rec__1));
#line 739
c_rt_lib0move(&___nl__im__37,___get_global_const(360));
#line 739
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__35, ___nl__im__23, ___nl__im__31, ___nl__im__37, ___ref___rec__1));
#line 739
c_rt_lib0clear(&___nl__im__37);
#line 740
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__20, ___nl__im__35, ___ref___rec__1));
#line 741
c_rt_lib0copy(&___nl__im__38, ___nl__im__17);
#line 742
c_rt_lib0delete(translator_priv0use_index(___nl__im__38, ___nl__im__8, ___nl__im__23, ___ref___rec__1));
#line 743
c_rt_lib0move(&___nl__im__39, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__20, ___nl__int__21));
#line 744
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 744
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__40, ___ref___rec__1));
#line 744
c_rt_lib0clear(&___nl__im__40);
#line 745
___nl__bool__41 = translator_priv0continue_used(___ref___rec__1);
#line 745
___nl__bool__41 = !___nl__bool__41;
#line 745
if(___nl__bool__41){ goto label_2;}
#line 745
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__21, ___ref___rec__1));
#line 745
goto label_1;
#line 745
label_2:
;
#line 745
label_1:
;
#line 745
//clear ___nl__bool__41;
#line 746
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1017)));
#line 746
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__43);
#line 746
c_rt_lib0clear(&___nl__im__43);
#line 746
___nl__bool__42 = !___nl__bool__42;
#line 746
___nl__bool__42 = !___nl__bool__42;
#line 746
if(___nl__bool__42){ goto label_4;}
#line 746
c_rt_lib0move(&___nl__im__44, translator0last_debug_char(___nl__im__2));
#line 746
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__44, ___ref___rec__1));
#line 746
c_rt_lib0clear(&___nl__im__44);
#line 746
goto label_3;
#line 746
label_4:
;
#line 746
label_3:
;
#line 746
//clear ___nl__bool__42;
#line 747
c_rt_lib0move(&___nl__im__47,___get_global_const(340));
#line 747
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__23, ___get_global_const(274), ___nl__im__23, ___get_global_const(275), ___nl__im__27, ___get_global_const(515), ___nl__im__47));
#line 747
c_rt_lib0clear(&___nl__im__47);
#line 747
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__46));
#line 747
c_rt_lib0clear(&___nl__im__46);
#line 747
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__45));
#line 747
c_rt_lib0clear(&___nl__im__45);
#line 748
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__22));
#line 748
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__49));
#line 748
c_rt_lib0clear(&___nl__im__49);
#line 748
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__48));
#line 748
c_rt_lib0clear(&___nl__im__48);
#line 749
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__20, ___ref___rec__1));
#line 750
___nl__bool__50 = false;
#line 750
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__5, ___nl__bool__50, ___ref___rec__1));
#line 750
//clear ___nl__bool__50;
#line 751
___nl__im_ptr__51 = &((*___ref___rec__1).loop_label0field);
#line 751
c_rt_lib0copy(___nl__im_ptr__51, ___nl__im__39);
#line 751
___nl__im_ptr__51 = NULL;
#line 751
c_rt_lib0clear(&___nl__im__0);
#line 751
c_rt_lib0clear(&___nl__im__2);
#line 751
c_rt_lib0clear(&___nl__im__5);
#line 751
c_rt_lib0clear(&___nl__im__8);
#line 751
c_rt_lib0clear(&___nl__im__17);
#line 751
//clear ___nl__int__20;
#line 751
//clear ___nl__int__21;
#line 751
//clear ___nl__int__22;
#line 751
c_rt_lib0clear(&___nl__im__23);
#line 751
c_rt_lib0clear(&___nl__im__27);
#line 751
c_rt_lib0clear(&___nl__im__31);
#line 751
c_rt_lib0clear(&___nl__im__35);
#line 751
c_rt_lib0clear(&___nl__im__38);
#line 751
c_rt_lib0clear(&___nl__im__39);
#line 751
return NULL;
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
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT * ___nl__im_ptr__10 = NULL;
#line 755
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 756
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 757
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 758
c_rt_lib0move(&___nl__im__4, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 759
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__1));
#line 760
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__0, ___ref___rec__1));
#line 761
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__5, ___ref___rec__1));
#line 762
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 762
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__6, ___ref___rec__1));
#line 762
c_rt_lib0clear(&___nl__im__6);
#line 763
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__3));
#line 763
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__8));
#line 763
c_rt_lib0clear(&___nl__im__8);
#line 763
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__7));
#line 763
c_rt_lib0clear(&___nl__im__7);
#line 764
___nl__bool__9 = translator_priv0break_used(___ref___rec__1);
#line 764
___nl__bool__9 = !___nl__bool__9;
#line 764
if(___nl__bool__9){ goto label_2;}
#line 764
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 764
goto label_1;
#line 764
label_2:
;
#line 764
label_1:
;
#line 764
//clear ___nl__bool__9;
#line 765
___nl__im_ptr__10 = &((*___ref___rec__1).loop_label0field);
#line 765
c_rt_lib0copy(___nl__im_ptr__10, ___nl__im__4);
#line 765
___nl__im_ptr__10 = NULL;
#line 765
c_rt_lib0clear(&___nl__im__0);
#line 765
//clear ___nl__int__2;
#line 765
//clear ___nl__int__3;
#line 765
c_rt_lib0clear(&___nl__im__4);
#line 765
c_rt_lib0clear(&___nl__im__5);
#line 765
return NULL;
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
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT * ___nl__im_ptr__33 = NULL;
#line 769
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 770
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 771
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 772
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(954)));
#line 772
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 772
c_rt_lib0clear(&___nl__im__6);
#line 773
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(570)));
#line 773
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 773
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 773
c_rt_lib0clear(&___nl__im__8);
#line 773
c_rt_lib0clear(&___nl__im__9);
#line 774
___nl__int__10 = 0;
#line 774
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 774
c_rt_lib0delete(translator_priv0load_const(___nl__im__11, ___nl__im__7, ___ref___rec__1));
#line 774
//clear ___nl__int__10;
#line 774
c_rt_lib0clear(&___nl__im__11);
#line 775
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 775
c_rt_lib0move(&___nl__im__12, translator_priv0new_register(___ref___rec__1, ___nl__im__13));
#line 775
c_rt_lib0clear(&___nl__im__13);
#line 776
___nl__int__14 = 1;
#line 776
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 776
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__12, ___ref___rec__1));
#line 776
//clear ___nl__int__14;
#line 776
c_rt_lib0clear(&___nl__im__15);
#line 777
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 777
c_rt_lib0move(&___nl__im__16, translator_priv0new_register(___ref___rec__1, ___nl__im__17));
#line 777
c_rt_lib0clear(&___nl__im__17);
#line 778
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 779
c_rt_lib0move(&___nl__im__18,___get_global_const(360));
#line 779
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__16, ___nl__im__7, ___nl__im__5, ___nl__im__18, ___ref___rec__1));
#line 779
c_rt_lib0clear(&___nl__im__18);
#line 780
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__16, ___ref___rec__1));
#line 781
c_rt_lib0move(&___nl__im__19, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 782
c_rt_lib0move(&___nl__im__20, translator_priv0save_registers(___ref___rec__1));
#line 783
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 783
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__21, ___ref___rec__1));
#line 783
c_rt_lib0clear(&___nl__im__21);
#line 784
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__20, ___ref___rec__1));
#line 785
___nl__bool__22 = translator_priv0continue_used(___ref___rec__1);
#line 785
___nl__bool__22 = !___nl__bool__22;
#line 785
if(___nl__bool__22){ goto label_2;}
#line 785
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 785
goto label_1;
#line 785
label_2:
;
#line 785
label_1:
;
#line 785
//clear ___nl__bool__22;
#line 786
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1017)));
#line 786
___nl__bool__23 = c_rt_lib0check_true_native(___nl__im__24);
#line 786
c_rt_lib0clear(&___nl__im__24);
#line 786
___nl__bool__23 = !___nl__bool__23;
#line 786
___nl__bool__23 = !___nl__bool__23;
#line 786
if(___nl__bool__23){ goto label_4;}
#line 786
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 786
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(221)));
#line 786
c_rt_lib0clear(&___nl__im__27);
#line 786
c_rt_lib0move(&___nl__im__25, translator0last_debug_char(___nl__im__26));
#line 786
c_rt_lib0clear(&___nl__im__26);
#line 786
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__25, ___ref___rec__1));
#line 786
c_rt_lib0clear(&___nl__im__25);
#line 786
goto label_3;
#line 786
label_4:
;
#line 786
label_3:
;
#line 786
//clear ___nl__bool__23;
#line 787
c_rt_lib0move(&___nl__im__30,___get_global_const(340));
#line 787
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__7, ___get_global_const(274), ___nl__im__7, ___get_global_const(275), ___nl__im__12, ___get_global_const(515), ___nl__im__30));
#line 787
c_rt_lib0clear(&___nl__im__30);
#line 787
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__29));
#line 787
c_rt_lib0clear(&___nl__im__29);
#line 787
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__28));
#line 787
c_rt_lib0clear(&___nl__im__28);
#line 788
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__4));
#line 788
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__32));
#line 788
c_rt_lib0clear(&___nl__im__32);
#line 788
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__31));
#line 788
c_rt_lib0clear(&___nl__im__31);
#line 789
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 790
___nl__im_ptr__33 = &((*___ref___rec__1).loop_label0field);
#line 790
c_rt_lib0copy(___nl__im_ptr__33, ___nl__im__19);
#line 790
___nl__im_ptr__33 = NULL;
#line 790
c_rt_lib0clear(&___nl__im__0);
#line 790
//clear ___nl__int__2;
#line 790
//clear ___nl__int__3;
#line 790
//clear ___nl__int__4;
#line 790
c_rt_lib0clear(&___nl__im__5);
#line 790
c_rt_lib0clear(&___nl__im__7);
#line 790
c_rt_lib0clear(&___nl__im__12);
#line 790
c_rt_lib0clear(&___nl__im__16);
#line 790
c_rt_lib0clear(&___nl__im__19);
#line 790
c_rt_lib0clear(&___nl__im__20);
#line 790
return NULL;
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
#line 794
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(129)));
#line 794
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(205)));
#line 794
c_rt_lib0clear(&___nl__im__4);
#line 794
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 794
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 794
___nl__im_ptr__7 = NULL;
#line 794
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(388)));
#line 794
c_rt_lib0clear(&___nl__im__6);
#line 794
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 794
c_rt_lib0clear(&___nl__im__3);
#line 794
c_rt_lib0clear(&___nl__im__5);
#line 794
___nl__bool__2 = !___nl__bool__2;
#line 794
if(___nl__bool__2){ goto label_2;}
#line 795
c_rt_lib0delete(translator_priv0print_own_forh(___nl__im__0, ___ref___rec__1));
#line 796
goto label_1;
#line 796
label_2:
;
#line 797
c_rt_lib0delete(translator_priv0print_ptd_forh(___nl__im__0, ___ref___rec__1));
#line 798
goto label_1;
#line 798
label_1:
;
#line 798
//clear ___nl__bool__2;
#line 798
c_rt_lib0clear(&___nl__im__0);
#line 798
return NULL;
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
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT * ___nl__im_ptr__48 = NULL;
#line 802
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 802
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 802
___nl__im_ptr__4 = NULL;
#line 802
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(506)));
#line 802
c_rt_lib0clear(&___nl__im__3);
#line 803
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 804
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 805
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 806
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(129)));
#line 806
c_rt_lib0move(&___nl__im__8, translator_priv0calc_val(___nl__im__9, ___ref___rec__1));
#line 806
c_rt_lib0clear(&___nl__im__9);
#line 807
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(370)));
#line 807
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 807
c_rt_lib0move(&___nl__im__10, translator_priv0print_var_decl(___nl__im__11, ___ref___rec__1, ___nl__im__12));
#line 807
c_rt_lib0clear(&___nl__im__11);
#line 807
c_rt_lib0clear(&___nl__im__12);
#line 808
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 808
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 808
c_rt_lib0clear(&___nl__im__14);
#line 809
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 809
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 809
c_rt_lib0move(&___nl__im__15, translator_priv0print_var_decl(___nl__im__16, ___ref___rec__1, ___nl__im__17));
#line 809
c_rt_lib0clear(&___nl__im__16);
#line 809
c_rt_lib0clear(&___nl__im__17);
#line 810
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 810
c_rt_lib0move(&___nl__im__18, translator_priv0new_register(___ref___rec__1, ___nl__im__19));
#line 810
c_rt_lib0clear(&___nl__im__19);
#line 811
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(570), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 811
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(261), ___nl__im__21));
#line 811
c_rt_lib0clear(&___nl__im__21);
#line 811
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 811
c_rt_lib0clear(&___nl__im__20);
#line 812
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 813
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__13, ___get_global_const(570), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 813
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(264), ___nl__im__23));
#line 813
c_rt_lib0clear(&___nl__im__23);
#line 813
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__22));
#line 813
c_rt_lib0clear(&___nl__im__22);
#line 814
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__13, ___ref___rec__1));
#line 815
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__10, ___get_global_const(570), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 815
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(263), ___nl__im__25));
#line 815
c_rt_lib0clear(&___nl__im__25);
#line 815
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 815
c_rt_lib0clear(&___nl__im__24);
#line 817
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 817
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(205)));
#line 817
___nl__bool__26 = nlasm0eq_reg_type(___nl__im__27, ___nl__im__28);
#line 817
c_rt_lib0clear(&___nl__im__27);
#line 817
c_rt_lib0clear(&___nl__im__28);
#line 817
___nl__bool__26 = !___nl__bool__26;
#line 818
c_rt_lib0copy(&___nl__im__29, ___nl__im__15);
#line 819
___nl__bool__30 = ___nl__bool__26;
#line 819
___nl__bool__30 = !___nl__bool__30;
#line 819
if(___nl__bool__30){ goto label_2;}
#line 819
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 819
c_rt_lib0move(&___nl__im__29, translator_priv0new_register(___ref___rec__1, ___nl__im__31));
#line 819
c_rt_lib0clear(&___nl__im__31);
#line 819
goto label_1;
#line 819
label_2:
;
#line 819
label_1:
;
#line 819
//clear ___nl__bool__30;
#line 820
c_rt_lib0move(&___nl__im__32,___get_global_const(732));
#line 820
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__8));
#line 820
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__10));
#line 820
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__35));
#line 820
c_rt_lib0clear(&___nl__im__34);
#line 820
c_rt_lib0clear(&___nl__im__35);
#line 820
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__29, ___nl__im__32, ___nl__im__33, ___ref___rec__1));
#line 820
c_rt_lib0clear(&___nl__im__32);
#line 820
c_rt_lib0clear(&___nl__im__33);
#line 821
___nl__bool__36 = ___nl__bool__26;
#line 821
___nl__bool__36 = !___nl__bool__36;
#line 821
if(___nl__bool__36){ goto label_4;}
#line 821
c_rt_lib0delete(translator_priv0move(___nl__im__15, ___nl__im__29, ___ref___rec__1));
#line 821
goto label_3;
#line 821
label_4:
;
#line 821
label_3:
;
#line 821
//clear ___nl__bool__36;
#line 823
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 824
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 825
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 825
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 825
c_rt_lib0clear(&___nl__im__39);
#line 826
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 827
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 827
___nl__bool__40 = !___nl__bool__40;
#line 827
if(___nl__bool__40){ goto label_6;}
#line 827
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 827
goto label_5;
#line 827
label_6:
;
#line 827
label_5:
;
#line 827
//clear ___nl__bool__40;
#line 828
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1017)));
#line 828
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 828
c_rt_lib0clear(&___nl__im__42);
#line 828
___nl__bool__41 = !___nl__bool__41;
#line 828
___nl__bool__41 = !___nl__bool__41;
#line 828
if(___nl__bool__41){ goto label_8;}
#line 828
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 828
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 828
c_rt_lib0clear(&___nl__im__43);
#line 828
goto label_7;
#line 828
label_8:
;
#line 828
label_7:
;
#line 828
//clear ___nl__bool__41;
#line 829
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_const(570), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 829
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_const(262), ___nl__im__45));
#line 829
c_rt_lib0clear(&___nl__im__45);
#line 829
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 829
c_rt_lib0clear(&___nl__im__44);
#line 830
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 830
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__47));
#line 830
c_rt_lib0clear(&___nl__im__47);
#line 830
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 830
c_rt_lib0clear(&___nl__im__46);
#line 831
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 832
___nl__im_ptr__48 = &((*___ref___rec__1).loop_label0field);
#line 832
c_rt_lib0copy(___nl__im_ptr__48, ___nl__im__37);
#line 832
___nl__im_ptr__48 = NULL;
#line 832
c_rt_lib0clear(&___nl__im__0);
#line 832
c_rt_lib0clear(&___nl__im__2);
#line 832
//clear ___nl__int__5;
#line 832
//clear ___nl__int__6;
#line 832
//clear ___nl__int__7;
#line 832
c_rt_lib0clear(&___nl__im__8);
#line 832
c_rt_lib0clear(&___nl__im__10);
#line 832
c_rt_lib0clear(&___nl__im__13);
#line 832
c_rt_lib0clear(&___nl__im__15);
#line 832
c_rt_lib0clear(&___nl__im__18);
#line 832
//clear ___nl__bool__26;
#line 832
c_rt_lib0clear(&___nl__im__29);
#line 832
c_rt_lib0clear(&___nl__im__37);
#line 832
c_rt_lib0clear(&___nl__im__38);
#line 832
return NULL;
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
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
bool  ___nl__bool__48 = false;
ImmT * ___nl__im_ptr__49 = NULL;
#line 836
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 836
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 836
___nl__im_ptr__4 = NULL;
#line 836
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(506)));
#line 836
c_rt_lib0clear(&___nl__im__3);
#line 837
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 838
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 839
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 840
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(129)));
#line 840
___nl__bool__10 = true;
#line 840
c_rt_lib0move(&___nl__im__8, translator_priv0get_value_of_lvalue(___nl__im__9, ___nl__bool__10, ___ref___rec__1));
#line 840
c_rt_lib0clear(&___nl__im__9);
#line 840
//clear ___nl__bool__10;
#line 841
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 841
___nl__int__15 = 1;
#line 841
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 841
//clear ___nl__int__14;
#line 841
//clear ___nl__int__15;
#line 841
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__8, ___nl__int__13));
#line 841
//clear ___nl__int__13;
#line 841
___nl__int__18 = c_rt_lib0array_len(___nl__im__8);
#line 841
___nl__int__19 = 1;
#line 841
___nl__int__17 = ___nl__int__18 - ___nl__int__19;
#line 841
//clear ___nl__int__18;
#line 841
//clear ___nl__int__19;
#line 841
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 841
//clear ___nl__int__17;
#line 841
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(219)));
#line 841
c_rt_lib0clear(&___nl__im__12);
#line 841
c_rt_lib0clear(&___nl__im__16);
#line 842
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(370)));
#line 842
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 842
c_rt_lib0move(&___nl__im__20, translator_priv0print_var_decl(___nl__im__21, ___ref___rec__1, ___nl__im__22));
#line 842
c_rt_lib0clear(&___nl__im__21);
#line 842
c_rt_lib0clear(&___nl__im__22);
#line 843
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 843
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 843
c_rt_lib0clear(&___nl__im__24);
#line 844
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 844
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 844
c_rt_lib0move(&___nl__im__25, translator_priv0print_var_decl(___nl__im__26, ___ref___rec__1, ___nl__im__27));
#line 844
c_rt_lib0clear(&___nl__im__26);
#line 844
c_rt_lib0clear(&___nl__im__27);
#line 845
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 845
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 845
c_rt_lib0clear(&___nl__im__29);
#line 846
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_const(570), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 846
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(261), ___nl__im__31));
#line 846
c_rt_lib0clear(&___nl__im__31);
#line 846
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__30));
#line 846
c_rt_lib0clear(&___nl__im__30);
#line 847
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 848
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__23, ___get_global_const(570), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 848
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(264), ___nl__im__33));
#line 848
c_rt_lib0clear(&___nl__im__33);
#line 848
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 848
c_rt_lib0clear(&___nl__im__32);
#line 849
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__23, ___ref___rec__1));
#line 850
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__20, ___get_global_const(570), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 850
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(263), ___nl__im__35));
#line 850
c_rt_lib0clear(&___nl__im__35);
#line 850
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 850
c_rt_lib0clear(&___nl__im__34);
#line 852
___nl__bool__36 = false;
#line 852
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___nl__bool__36, ___ref___rec__1));
#line 852
//clear ___nl__bool__36;
#line 854
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 855
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 856
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 856
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 856
c_rt_lib0clear(&___nl__im__39);
#line 857
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 858
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___ref___rec__1));
#line 859
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 859
___nl__bool__40 = !___nl__bool__40;
#line 859
if(___nl__bool__40){ goto label_2;}
#line 859
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 859
goto label_1;
#line 859
label_2:
;
#line 859
label_1:
;
#line 859
//clear ___nl__bool__40;
#line 860
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1017)));
#line 860
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 860
c_rt_lib0clear(&___nl__im__42);
#line 860
___nl__bool__41 = !___nl__bool__41;
#line 860
___nl__bool__41 = !___nl__bool__41;
#line 860
if(___nl__bool__41){ goto label_4;}
#line 860
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 860
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 860
c_rt_lib0clear(&___nl__im__43);
#line 860
goto label_3;
#line 860
label_4:
;
#line 860
label_3:
;
#line 860
//clear ___nl__bool__41;
#line 861
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_const(570), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 861
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_const(262), ___nl__im__45));
#line 861
c_rt_lib0clear(&___nl__im__45);
#line 861
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 861
c_rt_lib0clear(&___nl__im__44);
#line 862
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 862
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__47));
#line 862
c_rt_lib0clear(&___nl__im__47);
#line 862
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 862
c_rt_lib0clear(&___nl__im__46);
#line 863
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 864
___nl__bool__48 = false;
#line 864
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__8, ___nl__bool__48, ___ref___rec__1));
#line 864
//clear ___nl__bool__48;
#line 865
___nl__im_ptr__49 = &((*___ref___rec__1).loop_label0field);
#line 865
c_rt_lib0copy(___nl__im_ptr__49, ___nl__im__37);
#line 865
___nl__im_ptr__49 = NULL;
#line 865
c_rt_lib0clear(&___nl__im__0);
#line 865
c_rt_lib0clear(&___nl__im__2);
#line 865
//clear ___nl__int__5;
#line 865
//clear ___nl__int__6;
#line 865
//clear ___nl__int__7;
#line 865
c_rt_lib0clear(&___nl__im__8);
#line 865
c_rt_lib0clear(&___nl__im__11);
#line 865
c_rt_lib0clear(&___nl__im__20);
#line 865
c_rt_lib0clear(&___nl__im__23);
#line 865
c_rt_lib0clear(&___nl__im__25);
#line 865
c_rt_lib0clear(&___nl__im__28);
#line 865
c_rt_lib0clear(&___nl__im__37);
#line 865
c_rt_lib0clear(&___nl__im__38);
#line 865
return NULL;
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT * ___nl__im_ptr__22 = NULL;
#line 869
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 870
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 871
___nl__im_ptr__6 = &((*___ref___rec__1).debug0field);
#line 871
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 871
___nl__im_ptr__6 = NULL;
#line 871
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(506)));
#line 871
c_rt_lib0clear(&___nl__im__5);
#line 872
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 873
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 873
c_rt_lib0move(&___nl__im__7, translator_priv0calc_val(___nl__im__8, ___ref___rec__1));
#line 873
c_rt_lib0clear(&___nl__im__8);
#line 874
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 874
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__7, ___nl__im__10, ___ref___rec__1));
#line 874
c_rt_lib0clear(&___nl__im__10);
#line 875
c_rt_lib0move(&___nl__im__13,___get_global_const(336));
#line 875
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__9, ___get_global_const(74), ___nl__im__9, ___get_global_const(515), ___nl__im__13));
#line 875
c_rt_lib0clear(&___nl__im__13);
#line 875
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__12));
#line 875
c_rt_lib0clear(&___nl__im__12);
#line 875
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__11));
#line 875
c_rt_lib0clear(&___nl__im__11);
#line 876
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__9, ___ref___rec__1));
#line 877
c_rt_lib0move(&___nl__im__14, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 878
c_rt_lib0move(&___nl__im__15, translator_priv0save_registers(___ref___rec__1));
#line 879
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 879
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__16, ___ref___rec__1));
#line 879
c_rt_lib0clear(&___nl__im__16);
#line 880
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__15, ___ref___rec__1));
#line 881
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1017)));
#line 881
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 881
c_rt_lib0clear(&___nl__im__18);
#line 881
___nl__bool__17 = !___nl__bool__17;
#line 881
___nl__bool__17 = !___nl__bool__17;
#line 881
if(___nl__bool__17){ goto label_2;}
#line 881
c_rt_lib0move(&___nl__im__19, translator0last_debug_char(___nl__im__4));
#line 881
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__19, ___ref___rec__1));
#line 881
c_rt_lib0clear(&___nl__im__19);
#line 881
goto label_1;
#line 881
label_2:
;
#line 881
label_1:
;
#line 881
//clear ___nl__bool__17;
#line 882
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__3));
#line 882
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__21));
#line 882
c_rt_lib0clear(&___nl__im__21);
#line 882
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 882
c_rt_lib0clear(&___nl__im__20);
#line 883
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 884
___nl__im_ptr__22 = &((*___ref___rec__1).loop_label0field);
#line 884
c_rt_lib0copy(___nl__im_ptr__22, ___nl__im__14);
#line 884
___nl__im_ptr__22 = NULL;
#line 884
c_rt_lib0clear(&___nl__im__0);
#line 884
//clear ___nl__int__2;
#line 884
//clear ___nl__int__3;
#line 884
c_rt_lib0clear(&___nl__im__4);
#line 884
c_rt_lib0clear(&___nl__im__7);
#line 884
c_rt_lib0clear(&___nl__im__9);
#line 884
c_rt_lib0clear(&___nl__im__14);
#line 884
c_rt_lib0clear(&___nl__im__15);
#line 884
return NULL;
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
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
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
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT * ___nl__im_ptr__43 = NULL;
#line 888
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 889
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 890
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 891
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(952)));
#line 891
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(219));
#line 891
if(___nl__bool__6){ goto label_2;}
#line 893
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(252));
#line 893
if(___nl__bool__6){ goto label_3;}
#line 893
c_rt_lib0move(&___nl__im__7,___get_global_const(16));
#line 893
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 893
nl_die_arg(___nl__im__7);
#line 891
label_2:
;
#line 891
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(219)));
#line 891
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 892
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 892
___nl__int__12 = 1;
#line 892
___nl__int__12 = -___nl__int__12;
#line 892
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 892
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 892
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__11, ___get_global_const(218), ___nl__im__13, ___get_global_const(329), ___nl__im__14));
#line 892
c_rt_lib0clear(&___nl__im__11);
#line 892
//clear ___nl__int__12;
#line 892
c_rt_lib0clear(&___nl__im__13);
#line 892
c_rt_lib0clear(&___nl__im__14);
#line 892
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__10, ___ref___rec__1));
#line 892
c_rt_lib0clear(&___nl__im__10);
#line 893
goto label_1;
#line 893
label_3:
;
#line 893
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(252)));
#line 893
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 894
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 894
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__15, ___ref___rec__1, ___nl__im__17));
#line 894
c_rt_lib0clear(&___nl__im__17);
#line 895
goto label_1;
#line 895
label_1:
;
#line 896
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 897
___nl__bool__18 = false;
#line 898
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 898
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(219)));
#line 898
c_rt_lib0clear(&___nl__im__21);
#line 898
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(948));
#line 898
c_rt_lib0clear(&___nl__im__20);
#line 898
___nl__bool__19 = !___nl__bool__19;
#line 898
___nl__bool__19 = !___nl__bool__19;
#line 898
if(___nl__bool__19){ goto label_5;}
#line 899
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(949)));
#line 899
c_rt_lib0move(&___nl__im__22, translator_priv0calc_val(___nl__im__23, ___ref___rec__1));
#line 899
c_rt_lib0clear(&___nl__im__23);
#line 900
c_rt_lib0move(&___nl__im__26,___get_global_const(336));
#line 900
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__22, ___get_global_const(74), ___nl__im__22, ___get_global_const(515), ___nl__im__26));
#line 900
c_rt_lib0clear(&___nl__im__26);
#line 900
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__25));
#line 900
c_rt_lib0clear(&___nl__im__25);
#line 900
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 900
c_rt_lib0clear(&___nl__im__24);
#line 901
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__22, ___ref___rec__1));
#line 902
___nl__bool__18 = true;
#line 903
goto label_4;
#line 903
label_5:
;
#line 903
label_4:
;
#line 903
//clear ___nl__bool__19;
#line 903
c_rt_lib0clear(&___nl__im__22);
#line 904
c_rt_lib0move(&___nl__im__27, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__4));
#line 905
c_rt_lib0move(&___nl__im__28, translator_priv0save_registers(___ref___rec__1));
#line 906
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 906
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__29, ___ref___rec__1));
#line 906
c_rt_lib0clear(&___nl__im__29);
#line 907
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__28, ___ref___rec__1));
#line 908
___nl__bool__30 = translator_priv0continue_used(___ref___rec__1);
#line 908
___nl__bool__30 = !___nl__bool__30;
#line 908
if(___nl__bool__30){ goto label_7;}
#line 908
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 908
goto label_6;
#line 908
label_7:
;
#line 908
label_6:
;
#line 908
//clear ___nl__bool__30;
#line 909
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(570)));
#line 909
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 909
___nl__int__34 = 1;
#line 909
___nl__int__34 = -___nl__int__34;
#line 909
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 909
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 909
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__33, ___get_global_const(218), ___nl__im__35, ___get_global_const(329), ___nl__im__36));
#line 909
c_rt_lib0clear(&___nl__im__33);
#line 909
//clear ___nl__int__34;
#line 909
c_rt_lib0clear(&___nl__im__35);
#line 909
c_rt_lib0clear(&___nl__im__36);
#line 909
c_rt_lib0delete(translator_priv0print_val(___nl__im__31, ___nl__im__32, ___ref___rec__1));
#line 909
c_rt_lib0clear(&___nl__im__31);
#line 909
c_rt_lib0clear(&___nl__im__32);
#line 910
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(227)));
#line 910
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(221)));
#line 910
c_rt_lib0clear(&___nl__im__39);
#line 910
c_rt_lib0move(&___nl__im__37, translator0last_debug_char(___nl__im__38));
#line 910
c_rt_lib0clear(&___nl__im__38);
#line 910
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__37, ___ref___rec__1));
#line 910
c_rt_lib0clear(&___nl__im__37);
#line 911
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__3));
#line 911
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__41));
#line 911
c_rt_lib0clear(&___nl__im__41);
#line 911
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__40));
#line 911
c_rt_lib0clear(&___nl__im__40);
#line 912
___nl__bool__42 = ___nl__bool__18;
#line 912
if(___nl__bool__42){ goto label_10;}
#line 912
___nl__bool__42 = translator_priv0break_used(___ref___rec__1);
#line 912
label_10:
;
#line 912
___nl__bool__42 = !___nl__bool__42;
#line 912
if(___nl__bool__42){ goto label_9;}
#line 912
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 912
goto label_8;
#line 912
label_9:
;
#line 912
label_8:
;
#line 912
//clear ___nl__bool__42;
#line 913
___nl__im_ptr__43 = &((*___ref___rec__1).loop_label0field);
#line 913
c_rt_lib0copy(___nl__im_ptr__43, ___nl__im__27);
#line 913
___nl__im_ptr__43 = NULL;
#line 913
c_rt_lib0clear(&___nl__im__0);
#line 913
//clear ___nl__int__2;
#line 913
//clear ___nl__int__3;
#line 913
//clear ___nl__int__4;
#line 913
c_rt_lib0clear(&___nl__im__5);
#line 913
//clear ___nl__bool__6;
#line 913
c_rt_lib0clear(&___nl__im__7);
#line 913
c_rt_lib0clear(&___nl__im__8);
#line 913
c_rt_lib0clear(&___nl__im__9);
#line 913
c_rt_lib0clear(&___nl__im__15);
#line 913
c_rt_lib0clear(&___nl__im__16);
#line 913
//clear ___nl__bool__18;
#line 913
c_rt_lib0clear(&___nl__im__27);
#line 913
c_rt_lib0clear(&___nl__im__28);
#line 913
return NULL;
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
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
bool  ___nl__bool__88 = false;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
INT  ___nl__int__102 = 0;
#line 917
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 918
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 918
c_rt_lib0move(&___nl__im__3, translator_priv0calc_val(___nl__im__4, ___ref___rec__1));
#line 918
c_rt_lib0clear(&___nl__im__4);
#line 919
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 919
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__1, ___nl__im__6));
#line 919
c_rt_lib0clear(&___nl__im__6);
#line 920
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 920
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 920
c_rt_lib0clear(&___nl__im__8);
#line 921
___nl__int__9 = translator_priv0get_sim_label(___ref___rec__1);
#line 922
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(957)));
#line 922
___nl__int__12 = 0;
#line 922
___nl__int__13 = 1;
#line 922
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 922
label_3:
;
#line 922
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 922
___nl__bool__15 = ___nl__int__16;
#line 922
if(___nl__bool__15){ goto label_1;}
#line 922
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 922
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 923
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(221)));
#line 923
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__18, ___ref___rec__1));
#line 923
c_rt_lib0clear(&___nl__im__18);
#line 924
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 924
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(205)));
#line 924
c_rt_lib0clear(&___nl__im__21);
#line 924
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(518)));
#line 924
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(167)));
#line 924
c_rt_lib0clear(&___nl__im__23);
#line 924
___nl__int__19 = translator_priv0get_label_number(___ref___rec__1, ___nl__im__20, ___nl__im__22);
#line 924
c_rt_lib0clear(&___nl__im__20);
#line 924
c_rt_lib0clear(&___nl__im__22);
#line 925
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(518)));
#line 925
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(167)));
#line 925
c_rt_lib0clear(&___nl__im__27);
#line 925
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__19));
#line 925
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__5, ___get_global_const(74), ___nl__im__3, ___get_global_const(205), ___nl__im__26, ___get_global_const(522), ___nl__im__28));
#line 925
c_rt_lib0clear(&___nl__im__26);
#line 925
c_rt_lib0clear(&___nl__im__28);
#line 925
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__25));
#line 925
c_rt_lib0clear(&___nl__im__25);
#line 925
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 925
c_rt_lib0clear(&___nl__im__24);
#line 926
___nl__int__29 = translator_priv0get_sim_label(___ref___rec__1);
#line 927
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__29, ___nl__im__5, ___ref___rec__1));
#line 928
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 928
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__30));
#line 928
c_rt_lib0clear(&___nl__im__30);
#line 928
c_rt_lib0clear(&___nl__im__11);
#line 929
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 929
goto label_3;
#line 929
label_1:
;
#line 930
c_rt_lib0move(&___nl__im__31,___get_global_const(16));
#line 930
c_rt_lib0delete(translator_priv0load_const(___nl__im__31, ___nl__im__7, ___ref___rec__1));
#line 930
c_rt_lib0clear(&___nl__im__31);
#line 931
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__3));
#line 931
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__7, ___get_global_const(74), ___nl__im__34));
#line 931
c_rt_lib0clear(&___nl__im__34);
#line 931
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__33));
#line 931
c_rt_lib0clear(&___nl__im__33);
#line 931
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 931
c_rt_lib0clear(&___nl__im__32);
#line 932
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__7));
#line 932
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__35));
#line 932
c_rt_lib0clear(&___nl__im__35);
#line 933
___nl__int__36 = 0;
#line 935
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(957)));
#line 935
___nl__int__40 = 0;
#line 935
___nl__int__41 = 1;
#line 935
___nl__int__42 = c_rt_lib0array_len(___nl__im__38);
#line 935
label_6:
;
#line 935
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 935
___nl__bool__43 = ___nl__int__44;
#line 935
if(___nl__bool__43){ goto label_4;}
#line 935
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__38, ___nl__int__40));
#line 935
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 936
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(227)));
#line 936
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(221)));
#line 936
c_rt_lib0clear(&___nl__im__47);
#line 936
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__46, ___ref___rec__1));
#line 936
c_rt_lib0clear(&___nl__im__46);
#line 937
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__2, ___nl__int__36));
#line 937
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 937
c_rt_lib0clear(&___nl__im__49);
#line 937
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__48, ___ref___rec__1));
#line 937
//clear ___nl__int__48;
#line 938
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(518)));
#line 938
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(219)));
#line 938
c_rt_lib0clear(&___nl__im__51);
#line 938
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(219));
#line 938
if(___nl__bool__52){ goto label_8;}
#line 950
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(72));
#line 950
if(___nl__bool__52){ goto label_9;}
#line 950
c_rt_lib0move(&___nl__im__53,___get_global_const(16));
#line 950
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(2, ___nl__im__53, ___nl__im__50));
#line 950
nl_die_arg(___nl__im__53);
#line 938
label_8:
;
#line 938
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(219)));
#line 938
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 939
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(266)));
#line 939
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(72));
#line 939
if(___nl__bool__57){ goto label_11;}
#line 946
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(40));
#line 946
if(___nl__bool__57){ goto label_12;}
#line 946
c_rt_lib0move(&___nl__im__58,___get_global_const(16));
#line 946
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__56));
#line 946
nl_die_arg(___nl__im__58);
#line 939
label_11:
;
#line 940
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(453)));
#line 940
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 940
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__59, ___ref___rec__1, ___nl__im__60));
#line 940
c_rt_lib0clear(&___nl__im__59);
#line 940
c_rt_lib0clear(&___nl__im__60);
#line 941
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(224)));
#line 941
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_const(205)));
#line 941
c_rt_lib0clear(&___nl__im__63);
#line 941
___nl__im_ptr__66 = &((*___ref___rec__1).logic0field);
#line 941
c_rt_lib0copy(&___nl__im__65, (*___nl__im_ptr__66));
#line 941
___nl__im_ptr__66 = NULL;
#line 941
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(388)));
#line 941
c_rt_lib0clear(&___nl__im__65);
#line 941
___nl__bool__61 = tct0is_own_type(___nl__im__62, ___nl__im__64);
#line 941
c_rt_lib0clear(&___nl__im__62);
#line 941
c_rt_lib0clear(&___nl__im__64);
#line 941
___nl__bool__61 = !___nl__bool__61;
#line 942
c_rt_lib0copy(&___nl__im__67, ___nl__im__37);
#line 943
___nl__bool__68 = ___nl__bool__61;
#line 943
___nl__bool__68 = !___nl__bool__68;
#line 943
if(___nl__bool__68){ goto label_14;}
#line 943
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 943
c_rt_lib0move(&___nl__im__67, translator_priv0new_register(___ref___rec__1, ___nl__im__69));
#line 943
c_rt_lib0clear(&___nl__im__69);
#line 943
goto label_13;
#line 943
label_14:
;
#line 943
label_13:
;
#line 943
//clear ___nl__bool__68;
#line 944
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(518)));
#line 944
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_const(167)));
#line 944
c_rt_lib0clear(&___nl__im__73);
#line 944
___nl__int__74 = 1;
#line 944
___nl__int__74 = -___nl__int__74;
#line 944
c_rt_lib0move(&___nl__im__75, c_rt_lib0int_new(___nl__int__74));
#line 944
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__67, ___get_global_const(74), ___nl__im__3, ___get_global_const(205), ___nl__im__72, ___get_global_const(522), ___nl__im__75));
#line 944
c_rt_lib0clear(&___nl__im__72);
#line 944
//clear ___nl__int__74;
#line 944
c_rt_lib0clear(&___nl__im__75);
#line 944
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__71));
#line 944
c_rt_lib0clear(&___nl__im__71);
#line 944
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__70));
#line 944
c_rt_lib0clear(&___nl__im__70);
#line 945
___nl__bool__76 = ___nl__bool__61;
#line 945
___nl__bool__76 = !___nl__bool__76;
#line 945
if(___nl__bool__76){ goto label_16;}
#line 945
c_rt_lib0delete(translator_priv0move(___nl__im__37, ___nl__im__67, ___ref___rec__1));
#line 945
goto label_15;
#line 945
label_16:
;
#line 945
label_15:
;
#line 945
//clear ___nl__bool__76;
#line 946
goto label_10;
#line 946
label_12:
;
#line 947
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(453)));
#line 947
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 947
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__77, ___ref___rec__1, ___nl__im__78));
#line 947
c_rt_lib0clear(&___nl__im__77);
#line 947
c_rt_lib0clear(&___nl__im__78);
#line 948
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(518)));
#line 948
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(167)));
#line 948
c_rt_lib0clear(&___nl__im__80);
#line 948
c_rt_lib0delete(translator_priv0use_variant(___nl__im__37, ___nl__im__3, ___nl__im__79, ___ref___rec__1));
#line 948
c_rt_lib0clear(&___nl__im__79);
#line 949
goto label_10;
#line 949
label_10:
;
#line 950
goto label_7;
#line 950
label_9:
;
#line 951
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 951
___nl__int__82 = 1;
#line 951
___nl__int__82 = -___nl__int__82;
#line 951
c_rt_lib0move(&___nl__im__83, c_rt_lib0int_new(___nl__int__82));
#line 951
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 951
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__81, ___get_global_const(218), ___nl__im__83, ___get_global_const(329), ___nl__im__84));
#line 951
c_rt_lib0clear(&___nl__im__81);
#line 951
//clear ___nl__int__82;
#line 951
c_rt_lib0clear(&___nl__im__83);
#line 951
c_rt_lib0clear(&___nl__im__84);
#line 952
goto label_7;
#line 952
label_7:
;
#line 953
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(227)));
#line 953
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__85, ___ref___rec__1));
#line 953
c_rt_lib0clear(&___nl__im__85);
#line 954
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(518)));
#line 954
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__87, ___get_global_const(219)));
#line 954
c_rt_lib0clear(&___nl__im__87);
#line 954
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(219));
#line 954
if(___nl__bool__88){ goto label_18;}
#line 959
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(72));
#line 959
if(___nl__bool__88){ goto label_19;}
#line 959
c_rt_lib0move(&___nl__im__89,___get_global_const(16));
#line 959
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(2, ___nl__im__89, ___nl__im__86));
#line 959
nl_die_arg(___nl__im__89);
#line 954
label_18:
;
#line 954
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__86, ___get_global_const(219)));
#line 954
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 955
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_const(266)));
#line 955
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(72));
#line 955
if(___nl__bool__93){ goto label_21;}
#line 956
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(40));
#line 956
if(___nl__bool__93){ goto label_22;}
#line 956
c_rt_lib0move(&___nl__im__94,___get_global_const(16));
#line 956
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_mk(2, ___nl__im__94, ___nl__im__92));
#line 956
nl_die_arg(___nl__im__94);
#line 955
label_21:
;
#line 956
goto label_20;
#line 956
label_22:
;
#line 957
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(518)));
#line 957
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_const(167)));
#line 957
c_rt_lib0clear(&___nl__im__96);
#line 957
c_rt_lib0delete(translator_priv0release_variant(___nl__im__37, ___nl__im__3, ___nl__im__95, ___ref___rec__1));
#line 957
c_rt_lib0clear(&___nl__im__95);
#line 958
goto label_20;
#line 958
label_20:
;
#line 959
goto label_17;
#line 959
label_19:
;
#line 960
goto label_17;
#line 960
label_17:
;
#line 961
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(227)));
#line 961
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(221)));
#line 961
c_rt_lib0clear(&___nl__im__99);
#line 961
c_rt_lib0move(&___nl__im__97, translator0last_debug_char(___nl__im__98));
#line 961
c_rt_lib0clear(&___nl__im__98);
#line 961
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__97, ___ref___rec__1));
#line 961
c_rt_lib0clear(&___nl__im__97);
#line 962
c_rt_lib0move(&___nl__im__101, c_rt_lib0int_new(___nl__int__9));
#line 962
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__101));
#line 962
c_rt_lib0clear(&___nl__im__101);
#line 962
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__100));
#line 962
c_rt_lib0clear(&___nl__im__100);
#line 963
___nl__int__102 = 1;
#line 963
___nl__int__36 = ___nl__int__36 + ___nl__int__102;
#line 963
//clear ___nl__int__102;
#line 963
c_rt_lib0clear(&___nl__im__39);
#line 964
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 964
goto label_6;
#line 964
label_4:
;
#line 965
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__9, ___ref___rec__1));
#line 965
c_rt_lib0clear(&___nl__im__0);
#line 965
c_rt_lib0clear(&___nl__im__2);
#line 965
c_rt_lib0clear(&___nl__im__3);
#line 965
c_rt_lib0clear(&___nl__im__5);
#line 965
c_rt_lib0clear(&___nl__im__7);
#line 965
//clear ___nl__int__9;
#line 965
c_rt_lib0clear(&___nl__im__10);
#line 965
c_rt_lib0clear(&___nl__im__11);
#line 965
//clear ___nl__int__12;
#line 965
//clear ___nl__int__13;
#line 965
//clear ___nl__int__14;
#line 965
//clear ___nl__bool__15;
#line 965
//clear ___nl__int__16;
#line 965
c_rt_lib0clear(&___nl__im__17);
#line 965
//clear ___nl__int__19;
#line 965
//clear ___nl__int__29;
#line 965
//clear ___nl__int__36;
#line 965
c_rt_lib0clear(&___nl__im__37);
#line 965
c_rt_lib0clear(&___nl__im__38);
#line 965
c_rt_lib0clear(&___nl__im__39);
#line 965
//clear ___nl__int__40;
#line 965
//clear ___nl__int__41;
#line 965
//clear ___nl__int__42;
#line 965
//clear ___nl__bool__43;
#line 965
//clear ___nl__int__44;
#line 965
c_rt_lib0clear(&___nl__im__45);
#line 965
c_rt_lib0clear(&___nl__im__50);
#line 965
//clear ___nl__bool__52;
#line 965
c_rt_lib0clear(&___nl__im__53);
#line 965
c_rt_lib0clear(&___nl__im__54);
#line 965
c_rt_lib0clear(&___nl__im__55);
#line 965
c_rt_lib0clear(&___nl__im__56);
#line 965
//clear ___nl__bool__57;
#line 965
c_rt_lib0clear(&___nl__im__58);
#line 965
//clear ___nl__bool__61;
#line 965
c_rt_lib0clear(&___nl__im__67);
#line 965
c_rt_lib0clear(&___nl__im__86);
#line 965
//clear ___nl__bool__88;
#line 965
c_rt_lib0clear(&___nl__im__89);
#line 965
c_rt_lib0clear(&___nl__im__90);
#line 965
c_rt_lib0clear(&___nl__im__91);
#line 965
c_rt_lib0clear(&___nl__im__92);
#line 965
//clear ___nl__bool__93;
#line 965
c_rt_lib0clear(&___nl__im__94);
#line 965
return NULL;
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
#line 969
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 969
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 969
c_rt_lib0clear(&___nl__im__4);
#line 969
___nl__bool__3 = !___nl__bool__3;
#line 969
if(___nl__bool__3){ goto label_2;}
#line 969
c_rt_lib0clear(&___nl__im__0);
#line 969
c_rt_lib0clear(&___nl__im__1);
#line 969
//clear ___nl__bool__3;
#line 969
return NULL;
#line 969
goto label_1;
#line 969
label_2:
;
#line 969
label_1:
;
#line 969
//clear ___nl__bool__3;
#line 970
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__0, ___get_global_const(74), ___nl__im__1));
#line 970
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__im__6));
#line 970
c_rt_lib0clear(&___nl__im__6);
#line 970
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__5));
#line 970
c_rt_lib0clear(&___nl__im__5);
#line 970
c_rt_lib0clear(&___nl__im__0);
#line 970
c_rt_lib0clear(&___nl__im__1);
#line 970
return NULL;
return NULL;
}

ImmT  translator_priv0use_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 974
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(561), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(563), ___nl__im__2));
#line 974
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(253), ___nl__im__5));
#line 974
c_rt_lib0clear(&___nl__im__5);
#line 974
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 974
c_rt_lib0clear(&___nl__im__4);
#line 974
c_rt_lib0clear(&___nl__im__0);
#line 974
c_rt_lib0clear(&___nl__im__1);
#line 974
c_rt_lib0clear(&___nl__im__2);
#line 974
return NULL;
}

ImmT  translator_priv0release_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 978
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(547), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(563), ___nl__im__2));
#line 978
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(254), ___nl__im__5));
#line 978
c_rt_lib0clear(&___nl__im__5);
#line 978
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 978
c_rt_lib0clear(&___nl__im__4);
#line 978
c_rt_lib0clear(&___nl__im__0);
#line 978
c_rt_lib0clear(&___nl__im__1);
#line 978
c_rt_lib0clear(&___nl__im__2);
#line 978
return NULL;
}

ImmT  translator_priv0use_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 982
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 982
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 982
c_rt_lib0clear(&___nl__im__5);
#line 983
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(561), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(565), ___nl__im__4));
#line 983
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(255), ___nl__im__7));
#line 983
c_rt_lib0clear(&___nl__im__7);
#line 983
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 983
c_rt_lib0clear(&___nl__im__6);
#line 983
c_rt_lib0clear(&___nl__im__0);
#line 983
c_rt_lib0clear(&___nl__im__1);
#line 983
c_rt_lib0clear(&___nl__im__2);
#line 983
c_rt_lib0clear(&___nl__im__4);
#line 983
return NULL;
}

ImmT  translator_priv0release_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 987
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 987
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 987
c_rt_lib0clear(&___nl__im__5);
#line 988
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(547), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(565), ___nl__im__4));
#line 988
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(256), ___nl__im__7));
#line 988
c_rt_lib0clear(&___nl__im__7);
#line 988
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 988
c_rt_lib0clear(&___nl__im__6);
#line 988
c_rt_lib0clear(&___nl__im__0);
#line 988
c_rt_lib0clear(&___nl__im__1);
#line 988
c_rt_lib0clear(&___nl__im__2);
#line 988
c_rt_lib0clear(&___nl__im__4);
#line 988
return NULL;
}

ImmT  translator_priv0use_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,bool  ___nl__bool__3,translator0state_t0type* ___ref___rec__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 993
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 993
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_const(561), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(565), ___nl__im__2, ___get_global_const(566), ___nl__im__7));
#line 993
c_rt_lib0clear(&___nl__im__7);
#line 993
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__6));
#line 993
c_rt_lib0clear(&___nl__im__6);
#line 993
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__5));
#line 993
c_rt_lib0clear(&___nl__im__5);
#line 993
c_rt_lib0clear(&___nl__im__0);
#line 993
c_rt_lib0clear(&___nl__im__1);
#line 993
c_rt_lib0clear(&___nl__im__2);
#line 993
//clear ___nl__bool__3;
#line 993
return NULL;
}

ImmT  translator_priv0release_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 997
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(547), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(565), ___nl__im__2));
#line 997
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(258), ___nl__im__5));
#line 997
c_rt_lib0clear(&___nl__im__5);
#line 997
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 997
c_rt_lib0clear(&___nl__im__4);
#line 997
c_rt_lib0clear(&___nl__im__0);
#line 997
c_rt_lib0clear(&___nl__im__1);
#line 997
c_rt_lib0clear(&___nl__im__2);
#line 997
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
#line 1000
___nl__int__4 = 1;
#line 1000
___nl__int__4 = -___nl__int__4;
#line 1001
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1001
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(518));
#line 1001
c_rt_lib0clear(&___nl__im__6);
#line 1001
___nl__bool__5 = !___nl__bool__5;
#line 1001
if(___nl__bool__5){ goto label_2;}
#line 1001
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1001
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1001
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(518)));
#line 1001
c_rt_lib0clear(&___nl__im__8);
#line 1001
c_rt_lib0clear(&___nl__im__9);
#line 1001
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1001
c_rt_lib0clear(&___nl__im__7);
#line 1001
goto label_1;
#line 1001
label_2:
;
#line 1001
label_1:
;
#line 1001
//clear ___nl__bool__5;
#line 1002
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1002
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(561), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(535), ___nl__im__2, ___get_global_const(522), ___nl__im__12));
#line 1002
c_rt_lib0clear(&___nl__im__12);
#line 1002
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(259), ___nl__im__11));
#line 1002
c_rt_lib0clear(&___nl__im__11);
#line 1002
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1002
c_rt_lib0clear(&___nl__im__10);
#line 1002
c_rt_lib0clear(&___nl__im__0);
#line 1002
c_rt_lib0clear(&___nl__im__1);
#line 1002
c_rt_lib0clear(&___nl__im__2);
#line 1002
//clear ___nl__int__4;
#line 1002
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
#line 1006
___nl__int__4 = 1;
#line 1006
___nl__int__4 = -___nl__int__4;
#line 1007
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1007
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(518));
#line 1007
c_rt_lib0clear(&___nl__im__6);
#line 1007
___nl__bool__5 = !___nl__bool__5;
#line 1007
if(___nl__bool__5){ goto label_2;}
#line 1007
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1007
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1007
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(518)));
#line 1007
c_rt_lib0clear(&___nl__im__8);
#line 1007
c_rt_lib0clear(&___nl__im__9);
#line 1007
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1007
c_rt_lib0clear(&___nl__im__7);
#line 1007
goto label_1;
#line 1007
label_2:
;
#line 1007
label_1:
;
#line 1007
//clear ___nl__bool__5;
#line 1008
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1008
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(547), ___nl__im__0, ___get_global_const(560), ___nl__im__1, ___get_global_const(535), ___nl__im__2, ___get_global_const(522), ___nl__im__12));
#line 1008
c_rt_lib0clear(&___nl__im__12);
#line 1008
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(260), ___nl__im__11));
#line 1008
c_rt_lib0clear(&___nl__im__11);
#line 1008
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1008
c_rt_lib0clear(&___nl__im__10);
#line 1008
c_rt_lib0clear(&___nl__im__0);
#line 1008
c_rt_lib0clear(&___nl__im__1);
#line 1008
c_rt_lib0clear(&___nl__im__2);
#line 1008
//clear ___nl__int__4;
#line 1008
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
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
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
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
#line 1013
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 1014
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 1015
c_rt_lib0copy(&___nl__im__7, ___nl__im__0);
#line 1016
___nl__bool__8 = false;
#line 1017
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 1018
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 1019
c_rt_lib0move(&___nl__im__12,___get_global_const(111));
#line 1019
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__12);
#line 1019
c_rt_lib0clear(&___nl__im__12);
#line 1019
if(___nl__bool__11){ goto label_5;}
#line 1019
c_rt_lib0move(&___nl__im__13,___get_global_const(983));
#line 1019
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__13);
#line 1019
c_rt_lib0clear(&___nl__im__13);
#line 1019
label_5:
;
#line 1019
if(___nl__bool__11){ goto label_4;}
#line 1019
c_rt_lib0move(&___nl__im__14,___get_global_const(342));
#line 1019
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__14);
#line 1019
c_rt_lib0clear(&___nl__im__14);
#line 1019
label_4:
;
#line 1019
if(___nl__bool__11){ goto label_3;}
#line 1019
c_rt_lib0move(&___nl__im__15,___get_global_const(343));
#line 1019
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__15);
#line 1019
c_rt_lib0clear(&___nl__im__15);
#line 1019
label_3:
;
#line 1019
___nl__bool__11 = !___nl__bool__11;
#line 1019
if(___nl__bool__11){ goto label_2;}
#line 1020
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(528)));
#line 1021
c_rt_lib0move(&___nl__im__17,___get_global_const(111));
#line 1021
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__17);
#line 1021
c_rt_lib0clear(&___nl__im__17);
#line 1021
if(___nl__bool__16){ goto label_8;}
#line 1021
c_rt_lib0move(&___nl__im__18,___get_global_const(983));
#line 1021
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__18);
#line 1021
c_rt_lib0clear(&___nl__im__18);
#line 1021
label_8:
;
#line 1021
___nl__bool__16 = !___nl__bool__16;
#line 1021
if(___nl__bool__16){ goto label_7;}
#line 1022
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(528)));
#line 1023
goto label_6;
#line 1023
label_7:
;
#line 1024
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 1025
goto label_6;
#line 1025
label_6:
;
#line 1025
//clear ___nl__bool__16;
#line 1026
goto label_1;
#line 1026
label_2:
;
#line 1026
label_1:
;
#line 1026
//clear ___nl__bool__11;
#line 1027
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1027
___nl__bool__19 = nlasm0eq_reg_type(___nl__im__20, ___nl__im__9);
#line 1027
c_rt_lib0clear(&___nl__im__20);
#line 1027
___nl__bool__19 = !___nl__bool__19;
#line 1027
___nl__bool__19 = !___nl__bool__19;
#line 1027
if(___nl__bool__19){ goto label_10;}
#line 1028
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1029
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__1, ___ref___rec__4));
#line 1030
goto label_9;
#line 1030
label_10:
;
#line 1030
label_9:
;
#line 1030
//clear ___nl__bool__19;
#line 1031
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(205)));
#line 1031
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__22, ___nl__im__9);
#line 1031
c_rt_lib0clear(&___nl__im__22);
#line 1031
___nl__bool__21 = !___nl__bool__21;
#line 1031
___nl__bool__21 = !___nl__bool__21;
#line 1031
if(___nl__bool__21){ goto label_12;}
#line 1032
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1033
c_rt_lib0delete(translator_priv0move(___nl__im__6, ___nl__im__2, ___ref___rec__4));
#line 1034
goto label_11;
#line 1034
label_12:
;
#line 1034
label_11:
;
#line 1034
//clear ___nl__bool__21;
#line 1035
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1035
___nl__bool__23 = nlasm0eq_reg_type(___nl__im__24, ___nl__im__10);
#line 1035
c_rt_lib0clear(&___nl__im__24);
#line 1035
___nl__bool__23 = !___nl__bool__23;
#line 1035
___nl__bool__23 = !___nl__bool__23;
#line 1035
if(___nl__bool__23){ goto label_14;}
#line 1036
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__4, ___nl__im__10));
#line 1037
___nl__bool__8 = true;
#line 1038
goto label_13;
#line 1038
label_14:
;
#line 1038
label_13:
;
#line 1038
//clear ___nl__bool__23;
#line 1039
c_rt_lib0move(&___nl__im__26,___get_global_const(340));
#line 1039
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__26);
#line 1039
c_rt_lib0clear(&___nl__im__26);
#line 1039
if(___nl__bool__25){ goto label_17;}
#line 1039
c_rt_lib0move(&___nl__im__27,___get_global_const(979));
#line 1039
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__27);
#line 1039
c_rt_lib0clear(&___nl__im__27);
#line 1039
label_17:
;
#line 1039
___nl__bool__25 = !___nl__bool__25;
#line 1039
if(___nl__bool__25){ goto label_16;}
#line 1040
c_rt_lib0move(&___nl__im__3,___get_global_const(340));
#line 1041
goto label_15;
#line 1041
label_16:
;
#line 1041
c_rt_lib0move(&___nl__im__28,___get_global_const(338));
#line 1041
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__28);
#line 1041
c_rt_lib0clear(&___nl__im__28);
#line 1041
if(___nl__bool__25){ goto label_19;}
#line 1041
c_rt_lib0move(&___nl__im__29,___get_global_const(980));
#line 1041
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__29);
#line 1041
c_rt_lib0clear(&___nl__im__29);
#line 1041
label_19:
;
#line 1041
___nl__bool__25 = !___nl__bool__25;
#line 1041
if(___nl__bool__25){ goto label_18;}
#line 1042
c_rt_lib0move(&___nl__im__3,___get_global_const(338));
#line 1043
goto label_15;
#line 1043
label_18:
;
#line 1043
c_rt_lib0move(&___nl__im__30,___get_global_const(346));
#line 1043
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__30);
#line 1043
c_rt_lib0clear(&___nl__im__30);
#line 1043
if(___nl__bool__25){ goto label_21;}
#line 1043
c_rt_lib0move(&___nl__im__31,___get_global_const(981));
#line 1043
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__31);
#line 1043
c_rt_lib0clear(&___nl__im__31);
#line 1043
label_21:
;
#line 1043
___nl__bool__25 = !___nl__bool__25;
#line 1043
if(___nl__bool__25){ goto label_20;}
#line 1044
c_rt_lib0move(&___nl__im__3,___get_global_const(346));
#line 1045
goto label_15;
#line 1045
label_20:
;
#line 1045
c_rt_lib0move(&___nl__im__32,___get_global_const(106));
#line 1045
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__32);
#line 1045
c_rt_lib0clear(&___nl__im__32);
#line 1045
if(___nl__bool__25){ goto label_23;}
#line 1045
c_rt_lib0move(&___nl__im__33,___get_global_const(982));
#line 1045
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__33);
#line 1045
c_rt_lib0clear(&___nl__im__33);
#line 1045
label_23:
;
#line 1045
___nl__bool__25 = !___nl__bool__25;
#line 1045
if(___nl__bool__25){ goto label_22;}
#line 1046
c_rt_lib0move(&___nl__im__3,___get_global_const(106));
#line 1047
goto label_15;
#line 1047
label_22:
;
#line 1047
c_rt_lib0move(&___nl__im__34,___get_global_const(111));
#line 1047
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__34);
#line 1047
c_rt_lib0clear(&___nl__im__34);
#line 1047
if(___nl__bool__25){ goto label_25;}
#line 1047
c_rt_lib0move(&___nl__im__35,___get_global_const(983));
#line 1047
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__35);
#line 1047
c_rt_lib0clear(&___nl__im__35);
#line 1047
label_25:
;
#line 1047
___nl__bool__25 = !___nl__bool__25;
#line 1047
if(___nl__bool__25){ goto label_24;}
#line 1048
c_rt_lib0move(&___nl__im__3,___get_global_const(111));
#line 1049
goto label_15;
#line 1049
label_24:
;
#line 1049
label_15:
;
#line 1049
//clear ___nl__bool__25;
#line 1050
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__7, ___get_global_const(274), ___nl__im__5, ___get_global_const(275), ___nl__im__6, ___get_global_const(515), ___nl__im__3));
#line 1050
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__37));
#line 1050
c_rt_lib0clear(&___nl__im__37);
#line 1050
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__36));
#line 1050
c_rt_lib0clear(&___nl__im__36);
#line 1051
___nl__bool__38 = ___nl__bool__8;
#line 1051
___nl__bool__38 = !___nl__bool__38;
#line 1051
if(___nl__bool__38){ goto label_27;}
#line 1052
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__7, ___ref___rec__4));
#line 1053
goto label_26;
#line 1053
label_27:
;
#line 1053
label_26:
;
#line 1053
//clear ___nl__bool__38;
#line 1053
c_rt_lib0clear(&___nl__im__0);
#line 1053
c_rt_lib0clear(&___nl__im__1);
#line 1053
c_rt_lib0clear(&___nl__im__2);
#line 1053
c_rt_lib0clear(&___nl__im__3);
#line 1053
c_rt_lib0clear(&___nl__im__5);
#line 1053
c_rt_lib0clear(&___nl__im__6);
#line 1053
c_rt_lib0clear(&___nl__im__7);
#line 1053
//clear ___nl__bool__8;
#line 1053
c_rt_lib0clear(&___nl__im__9);
#line 1053
c_rt_lib0clear(&___nl__im__10);
#line 1053
return NULL;
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
#line 1057
___nl__im_ptr__4 = &((*___ref___rec__0).debug0field);
#line 1057
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 1057
___nl__im_ptr__4 = NULL;
#line 1057
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(72)));
#line 1057
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(227), ___nl__im__1, ___get_global_const(221), ___nl__im__3, ___get_global_const(226), ___nl__im__5));
#line 1057
c_rt_lib0clear(&___nl__im__3);
#line 1057
c_rt_lib0clear(&___nl__im__5);
#line 1058
___nl__im_ptr__6 = &((*___ref___rec__0).result0field);
#line 1058
c_rt_lib0move(&___nl__im__7,___get_global_const(213));
#line 1058
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___nl__im_ptr__6), ___nl__im__7));
#line 1058
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__2));
#line 1058
c_rt_lib0move(&___nl__string__8,___get_global_const(213));
#line 1058
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__6, ___nl__string__8, ___nl__im__7));
#line 1058
___nl__im_ptr__6 = NULL;
#line 1058
c_rt_lib0clear(&___nl__im__7);
#line 1058
c_rt_lib0clear(&___nl__string__8);
#line 1059
___nl__im_ptr__9 = &((*___ref___rec__0).debug0field);
#line 1059
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 1059
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1059
c_rt_lib0hash_set_value_dec(___nl__im_ptr__9, ___get_global_const(798), ___nl__im__10);
#line 1059
___nl__im_ptr__9 = NULL;
#line 1059
c_rt_lib0clear(&___nl__im__10);
#line 1059
c_rt_lib0clear(&___nl__im__11);
#line 1059
c_rt_lib0clear(&___nl__im__1);
#line 1059
c_rt_lib0clear(&___nl__im__2);
#line 1059
return NULL;
return NULL;
}

ImmT  translator_priv0print_if_goto(nlasm0label_t0type ___nl__int__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1063
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 1063
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__5, ___get_global_const(74), ___nl__im__1));
#line 1063
c_rt_lib0clear(&___nl__im__5);
#line 1063
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__4));
#line 1063
c_rt_lib0clear(&___nl__im__4);
#line 1063
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 1063
c_rt_lib0clear(&___nl__im__3);
#line 1063
//clear ___nl__int__0;
#line 1063
c_rt_lib0clear(&___nl__im__1);
#line 1063
return NULL;
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
#line 1068
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 1068
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1068
c_rt_lib0clear(&___nl__im__5);
#line 1070
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1070
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(132));
#line 1070
c_rt_lib0clear(&___nl__im__8);
#line 1070
___nl__bool__7 = !___nl__bool__7;
#line 1070
if(___nl__bool__7){ goto label_2;}
#line 1071
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1072
goto label_1;
#line 1072
label_2:
;
#line 1072
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1072
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(128));
#line 1072
c_rt_lib0clear(&___nl__im__9);
#line 1072
___nl__bool__7 = !___nl__bool__7;
#line 1072
if(___nl__bool__7){ goto label_3;}
#line 1073
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1073
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1073
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(128)));
#line 1073
c_rt_lib0clear(&___nl__im__12);
#line 1073
c_rt_lib0clear(&___nl__im__13);
#line 1073
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1073
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1073
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(128)));
#line 1073
c_rt_lib0clear(&___nl__im__15);
#line 1073
c_rt_lib0clear(&___nl__im__16);
#line 1073
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__14, ___get_global_const(2)));
#line 1073
c_rt_lib0clear(&___nl__im__11);
#line 1073
c_rt_lib0clear(&___nl__im__14);
#line 1073
___nl__im_ptr__19 = &((*___ref___rec__3).logic0field);
#line 1073
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 1073
___nl__im_ptr__19 = NULL;
#line 1073
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(388)));
#line 1073
c_rt_lib0clear(&___nl__im__18);
#line 1073
c_rt_lib0move(&___nl__im__6, translator_priv0var_type_to_reg_type(___nl__im__10, ___nl__im__17));
#line 1073
c_rt_lib0clear(&___nl__im__10);
#line 1073
c_rt_lib0clear(&___nl__im__17);
#line 1074
goto label_1;
#line 1074
label_3:
;
#line 1075
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1075
nl_die_arg(___nl__im__20);
#line 1076
goto label_1;
#line 1076
label_1:
;
#line 1076
//clear ___nl__bool__7;
#line 1076
c_rt_lib0clear(&___nl__im__20);
#line 1077
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1077
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__6, ___nl__im__22);
#line 1077
c_rt_lib0clear(&___nl__im__22);
#line 1077
___nl__bool__21 = !___nl__bool__21;
#line 1078
c_rt_lib0copy(&___nl__im__23, ___nl__im__0);
#line 1079
___nl__bool__24 = ___nl__bool__21;
#line 1079
___nl__bool__24 = !___nl__bool__24;
#line 1079
if(___nl__bool__24){ goto label_5;}
#line 1079
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__3, ___nl__im__6));
#line 1079
goto label_4;
#line 1079
label_5:
;
#line 1079
label_4:
;
#line 1079
//clear ___nl__bool__24;
#line 1080
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__23, ___get_global_const(74), ___nl__im__1, ___get_global_const(276), ___nl__im__4));
#line 1080
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__im__26));
#line 1080
c_rt_lib0clear(&___nl__im__26);
#line 1080
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__25));
#line 1080
c_rt_lib0clear(&___nl__im__25);
#line 1081
___nl__bool__27 = ___nl__bool__21;
#line 1081
___nl__bool__27 = !___nl__bool__27;
#line 1081
if(___nl__bool__27){ goto label_7;}
#line 1081
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__23, ___ref___rec__3));
#line 1081
goto label_6;
#line 1081
label_7:
;
#line 1081
label_6:
;
#line 1081
//clear ___nl__bool__27;
#line 1081
c_rt_lib0clear(&___nl__im__0);
#line 1081
c_rt_lib0clear(&___nl__im__1);
#line 1081
c_rt_lib0clear(&___nl__im__2);
#line 1081
c_rt_lib0clear(&___nl__im__4);
#line 1081
c_rt_lib0clear(&___nl__im__6);
#line 1081
//clear ___nl__bool__21;
#line 1081
c_rt_lib0clear(&___nl__im__23);
#line 1081
return NULL;
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
#line 1086
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 1086
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__1, ___nl__im__5, ___ref___rec__3));
#line 1086
c_rt_lib0clear(&___nl__im__5);
#line 1087
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(74), ___nl__im__0, ___get_global_const(276), ___nl__im__4, ___get_global_const(224), ___nl__im__2));
#line 1087
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(240), ___nl__im__7));
#line 1087
c_rt_lib0clear(&___nl__im__7);
#line 1087
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1087
c_rt_lib0clear(&___nl__im__6);
#line 1087
c_rt_lib0clear(&___nl__im__0);
#line 1087
c_rt_lib0clear(&___nl__im__1);
#line 1087
c_rt_lib0clear(&___nl__im__2);
#line 1087
c_rt_lib0clear(&___nl__im__4);
#line 1087
return NULL;
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
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 1091
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 1092
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1092
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(132));
#line 1092
c_rt_lib0clear(&___nl__im__5);
#line 1092
___nl__bool__4 = !___nl__bool__4;
#line 1092
if(___nl__bool__4){ goto label_2;}
#line 1093
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1093
c_rt_lib0move(&___nl__im__3, translator_priv0get_cast(___nl__im__1, ___nl__im__6, ___ref___rec__2));
#line 1093
c_rt_lib0clear(&___nl__im__6);
#line 1094
goto label_1;
#line 1094
label_2:
;
#line 1094
label_1:
;
#line 1094
//clear ___nl__bool__4;
#line 1095
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1095
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(132));
#line 1095
c_rt_lib0clear(&___nl__im__9);
#line 1095
___nl__bool__7 = !___nl__bool__7;
#line 1095
___nl__bool__8 = !___nl__bool__7;
#line 1095
if(___nl__bool__8){ goto label_5;}
#line 1095
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1095
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(528));
#line 1095
c_rt_lib0clear(&___nl__im__10);
#line 1095
___nl__bool__7 = !___nl__bool__7;
#line 1095
label_5:
;
#line 1095
//clear ___nl__bool__8;
#line 1095
___nl__bool__7 = !___nl__bool__7;
#line 1095
if(___nl__bool__7){ goto label_4;}
#line 1096
___nl__im_ptr__11 = &((*___ref___rec__2).logic0field);
#line 1096
c_rt_lib0move(&___nl__im__12,___get_global_const(1293));
#line 1096
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___nl__im_ptr__11), ___nl__im__12));
#line 1096
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(218)));
#line 1096
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1096
c_rt_lib0clear(&___nl__im__15);
#line 1096
___nl__bool__16 = false;
#line 1096
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 1096
c_rt_lib0array_set(&___nl__im__12, ___nl__int__14, ___nl__im__13);
#line 1096
c_rt_lib0move(&___nl__string__17,___get_global_const(1293));
#line 1096
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__11, ___nl__string__17, ___nl__im__12));
#line 1096
___nl__im_ptr__11 = NULL;
#line 1096
c_rt_lib0clear(&___nl__im__12);
#line 1096
c_rt_lib0clear(&___nl__im__13);
#line 1096
//clear ___nl__int__14;
#line 1096
//clear ___nl__bool__16;
#line 1096
c_rt_lib0clear(&___nl__string__17);
#line 1097
goto label_3;
#line 1097
label_4:
;
#line 1097
label_3:
;
#line 1097
//clear ___nl__bool__7;
#line 1098
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__0, ___get_global_const(224), ___nl__im__3));
#line 1098
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(241), ___nl__im__19));
#line 1098
c_rt_lib0clear(&___nl__im__19);
#line 1098
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__18));
#line 1098
c_rt_lib0clear(&___nl__im__18);
#line 1098
c_rt_lib0clear(&___nl__im__0);
#line 1098
c_rt_lib0clear(&___nl__im__1);
#line 1098
c_rt_lib0clear(&___nl__im__3);
#line 1098
return NULL;
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
#line 1104
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1104
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(132));
#line 1104
c_rt_lib0clear(&___nl__im__6);
#line 1104
___nl__bool__5 = !___nl__bool__5;
#line 1104
if(___nl__bool__5){ goto label_2;}
#line 1105
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1106
goto label_1;
#line 1106
label_2:
;
#line 1106
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1106
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(129));
#line 1106
c_rt_lib0clear(&___nl__im__7);
#line 1106
___nl__bool__5 = !___nl__bool__5;
#line 1106
if(___nl__bool__5){ goto label_3;}
#line 1107
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1107
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1107
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(129)));
#line 1107
c_rt_lib0clear(&___nl__im__11);
#line 1107
c_rt_lib0clear(&___nl__im__12);
#line 1107
___nl__im_ptr__15 = &((*___ref___rec__3).logic0field);
#line 1107
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1107
___nl__im_ptr__15 = NULL;
#line 1107
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(388)));
#line 1107
c_rt_lib0clear(&___nl__im__14);
#line 1107
c_rt_lib0move(&___nl__im__9, translator_priv0unwrap_ref(___nl__im__10, ___nl__im__13));
#line 1107
c_rt_lib0clear(&___nl__im__10);
#line 1107
c_rt_lib0clear(&___nl__im__13);
#line 1107
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1107
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(205)));
#line 1107
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(129)));
#line 1107
c_rt_lib0clear(&___nl__im__18);
#line 1107
c_rt_lib0clear(&___nl__im__19);
#line 1107
___nl__im_ptr__22 = &((*___ref___rec__3).logic0field);
#line 1107
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1107
___nl__im_ptr__22 = NULL;
#line 1107
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(388)));
#line 1107
c_rt_lib0clear(&___nl__im__21);
#line 1107
c_rt_lib0move(&___nl__im__16, translator_priv0unwrap_ref(___nl__im__17, ___nl__im__20));
#line 1107
c_rt_lib0clear(&___nl__im__17);
#line 1107
c_rt_lib0clear(&___nl__im__20);
#line 1107
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(4)));
#line 1107
c_rt_lib0clear(&___nl__im__9);
#line 1107
c_rt_lib0clear(&___nl__im__16);
#line 1108
___nl__im_ptr__25 = &((*___ref___rec__3).logic0field);
#line 1108
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1108
___nl__im_ptr__25 = NULL;
#line 1108
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(388)));
#line 1108
c_rt_lib0clear(&___nl__im__24);
#line 1108
c_rt_lib0move(&___nl__im__8, translator_priv0unwrap_ref(___nl__im__8, ___nl__im__23));
#line 1108
c_rt_lib0clear(&___nl__im__23);
#line 1109
___nl__im_ptr__28 = &((*___ref___rec__3).logic0field);
#line 1109
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1109
___nl__im_ptr__28 = NULL;
#line 1109
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(388)));
#line 1109
c_rt_lib0clear(&___nl__im__27);
#line 1109
c_rt_lib0move(&___nl__im__4, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__26));
#line 1109
c_rt_lib0clear(&___nl__im__26);
#line 1110
goto label_1;
#line 1110
label_3:
;
#line 1111
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1111
nl_die_arg(___nl__im__29);
#line 1112
goto label_1;
#line 1112
label_1:
;
#line 1112
//clear ___nl__bool__5;
#line 1112
c_rt_lib0clear(&___nl__im__8);
#line 1112
c_rt_lib0clear(&___nl__im__29);
#line 1113
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1113
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__31);
#line 1113
c_rt_lib0clear(&___nl__im__31);
#line 1113
___nl__bool__30 = !___nl__bool__30;
#line 1114
c_rt_lib0copy(&___nl__im__32, ___nl__im__0);
#line 1115
___nl__bool__33 = ___nl__bool__30;
#line 1115
___nl__bool__33 = !___nl__bool__33;
#line 1115
if(___nl__bool__33){ goto label_5;}
#line 1115
c_rt_lib0move(&___nl__im__32, translator_priv0new_register(___ref___rec__3, ___nl__im__4));
#line 1115
goto label_4;
#line 1115
label_5:
;
#line 1115
label_4:
;
#line 1115
//clear ___nl__bool__33;
#line 1116
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(223), ___nl__im__32, ___get_global_const(74), ___nl__im__1, ___get_global_const(370), ___nl__im__2));
#line 1116
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(243), ___nl__im__35));
#line 1116
c_rt_lib0clear(&___nl__im__35);
#line 1116
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__34));
#line 1116
c_rt_lib0clear(&___nl__im__34);
#line 1117
___nl__bool__36 = ___nl__bool__30;
#line 1117
___nl__bool__36 = !___nl__bool__36;
#line 1117
if(___nl__bool__36){ goto label_7;}
#line 1117
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__32, ___ref___rec__3));
#line 1117
goto label_6;
#line 1117
label_7:
;
#line 1117
label_6:
;
#line 1117
//clear ___nl__bool__36;
#line 1117
c_rt_lib0clear(&___nl__im__0);
#line 1117
c_rt_lib0clear(&___nl__im__1);
#line 1117
c_rt_lib0clear(&___nl__im__2);
#line 1117
c_rt_lib0clear(&___nl__im__4);
#line 1117
//clear ___nl__bool__30;
#line 1117
c_rt_lib0clear(&___nl__im__32);
#line 1117
return NULL;
return NULL;
}

ImmT  translator_priv0print_set_value(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1121
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(74), ___nl__im__0, ___get_global_const(370), ___nl__im__1, ___get_global_const(224), ___nl__im__2));
#line 1121
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(244), ___nl__im__5));
#line 1121
c_rt_lib0clear(&___nl__im__5);
#line 1121
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1121
c_rt_lib0clear(&___nl__im__4);
#line 1121
c_rt_lib0clear(&___nl__im__0);
#line 1121
c_rt_lib0clear(&___nl__im__1);
#line 1121
c_rt_lib0clear(&___nl__im__2);
#line 1121
return NULL;
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
#line 1126
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(994)));
#line 1126
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 1128
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 1128
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 1129
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(994)));
#line 1129
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 1129
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__6, ___get_global_const(565), ___nl__im__7));
#line 1129
c_rt_lib0clear(&___nl__im__6);
#line 1129
c_rt_lib0clear(&___nl__im__7);
#line 1129
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 1129
c_rt_lib0clear(&___nl__im__5);
#line 1131
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 1133
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 1133
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 1134
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 1134
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__11, ___get_global_const(563), ___nl__im__12));
#line 1134
c_rt_lib0clear(&___nl__im__11);
#line 1134
c_rt_lib0clear(&___nl__im__12);
#line 1134
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 1134
c_rt_lib0clear(&___nl__im__10);
#line 1136
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(994)));
#line 1136
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 1138
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 1138
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__16));
#line 1139
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(994)));
#line 1139
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__17));
#line 1139
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__16, ___get_global_const(565), ___nl__im__17));
#line 1139
c_rt_lib0clear(&___nl__im__16);
#line 1139
c_rt_lib0clear(&___nl__im__17);
#line 1139
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 1139
c_rt_lib0clear(&___nl__im__15);
#line 1141
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 1143
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 1143
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 1144
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 1144
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__21, ___get_global_const(535), ___nl__im__22));
#line 1144
c_rt_lib0clear(&___nl__im__21);
#line 1144
c_rt_lib0clear(&___nl__im__22);
#line 1144
c_rt_lib0move(&___nl__im__19, ptd0rec(___nl__im__20));
#line 1144
c_rt_lib0clear(&___nl__im__20);
#line 1144
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_const(565), ___nl__im__3, ___get_global_const(255), ___nl__im__4, ___get_global_const(370), ___nl__im__8, ___get_global_const(253), ___nl__im__9, ___get_global_const(1288), ___nl__im__13, ___get_global_const(257), ___nl__im__14, ___get_global_const(992), ___nl__im__18, ___get_global_const(259), ___nl__im__19));
#line 1144
c_rt_lib0clear(&___nl__im__3);
#line 1144
c_rt_lib0clear(&___nl__im__4);
#line 1144
c_rt_lib0clear(&___nl__im__8);
#line 1144
c_rt_lib0clear(&___nl__im__9);
#line 1144
c_rt_lib0clear(&___nl__im__13);
#line 1144
c_rt_lib0clear(&___nl__im__14);
#line 1144
c_rt_lib0clear(&___nl__im__18);
#line 1144
c_rt_lib0clear(&___nl__im__19);
#line 1144
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 1144
c_rt_lib0clear(&___nl__im__2);
#line 1144
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 1144
c_rt_lib0clear(&___nl__im__1);
#line 1144
return ___nl__im__0;
#line 1144
c_rt_lib0clear(&___nl__im__0);
#line 1144
return NULL;
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
ImmT * ___nl__im_ptr__25 = NULL;
bool  ___nl__bool__26 = false;
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
ImmT * ___nl__im_ptr__40 = NULL;
bool  ___nl__bool__41 = false;
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
ImmT * ___nl__im_ptr__55 = NULL;
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
ImmT * ___nl__im_ptr__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
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
#line 1150
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 1151
label_2:
;
#line 1151
___nl__bool__3 = true;
#line 1151
___nl__bool__3 = !___nl__bool__3;
#line 1151
if(___nl__bool__3){ goto label_1;}
#line 1152
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1152
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(234));
#line 1152
c_rt_lib0clear(&___nl__im__5);
#line 1152
___nl__bool__4 = !___nl__bool__4;
#line 1152
if(___nl__bool__4){ goto label_4;}
#line 1153
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1153
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1153
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(234)));
#line 1153
c_rt_lib0clear(&___nl__im__7);
#line 1153
c_rt_lib0clear(&___nl__im__8);
#line 1154
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(515)));
#line 1155
c_rt_lib0move(&___nl__im__11,___get_global_const(964));
#line 1155
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 1155
c_rt_lib0clear(&___nl__im__11);
#line 1155
if(___nl__bool__10){ goto label_9;}
#line 1155
c_rt_lib0move(&___nl__im__12,___get_global_const(965));
#line 1155
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__12);
#line 1155
c_rt_lib0clear(&___nl__im__12);
#line 1155
label_9:
;
#line 1155
if(___nl__bool__10){ goto label_8;}
#line 1155
c_rt_lib0move(&___nl__im__13,___get_global_const(533));
#line 1155
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__13);
#line 1155
c_rt_lib0clear(&___nl__im__13);
#line 1155
label_8:
;
#line 1155
if(___nl__bool__10){ goto label_7;}
#line 1155
c_rt_lib0move(&___nl__im__14,___get_global_const(966));
#line 1155
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__14);
#line 1155
c_rt_lib0clear(&___nl__im__14);
#line 1155
label_7:
;
#line 1155
___nl__bool__10 = !___nl__bool__10;
#line 1155
___nl__bool__10 = !___nl__bool__10;
#line 1155
if(___nl__bool__10){ goto label_6;}
#line 1155
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1155
nl_die_arg(___nl__im__15);
#line 1155
goto label_5;
#line 1155
label_6:
;
#line 1155
label_5:
;
#line 1155
//clear ___nl__bool__10;
#line 1155
c_rt_lib0clear(&___nl__im__15);
#line 1156
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 1157
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(515)));
#line 1157
c_rt_lib0move(&___nl__im__19,___get_global_const(964));
#line 1157
___nl__bool__17 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 1157
c_rt_lib0clear(&___nl__im__18);
#line 1157
c_rt_lib0clear(&___nl__im__19);
#line 1157
___nl__bool__17 = !___nl__bool__17;
#line 1157
if(___nl__bool__17){ goto label_11;}
#line 1158
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1158
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(205)));
#line 1158
c_rt_lib0clear(&___nl__im__22);
#line 1158
___nl__im_ptr__25 = &((*___ref___rec__1).logic0field);
#line 1158
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1158
___nl__im_ptr__25 = NULL;
#line 1158
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(388)));
#line 1158
c_rt_lib0clear(&___nl__im__24);
#line 1158
c_rt_lib0move(&___nl__im__20, translator_priv0unwrap_ref(___nl__im__21, ___nl__im__23));
#line 1158
c_rt_lib0clear(&___nl__im__21);
#line 1158
c_rt_lib0clear(&___nl__im__23);
#line 1159
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__20, ___get_global_const(2));
#line 1159
___nl__bool__26 = !___nl__bool__26;
#line 1159
if(___nl__bool__26){ goto label_13;}
#line 1161
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__20, ___get_global_const(2)));
#line 1162
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1162
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__29, ___get_global_const(565), ___nl__im__30));
#line 1162
c_rt_lib0clear(&___nl__im__29);
#line 1162
c_rt_lib0clear(&___nl__im__30);
#line 1162
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(255), ___nl__im__28));
#line 1162
c_rt_lib0clear(&___nl__im__28);
#line 1162
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__27));
#line 1162
c_rt_lib0clear(&___nl__im__27);
#line 1164
goto label_12;
#line 1164
label_13:
;
#line 1165
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1165
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_const(565), ___nl__im__32));
#line 1165
c_rt_lib0clear(&___nl__im__32);
#line 1165
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__31));
#line 1165
c_rt_lib0clear(&___nl__im__31);
#line 1166
goto label_12;
#line 1166
label_12:
;
#line 1166
//clear ___nl__bool__26;
#line 1167
goto label_10;
#line 1167
label_11:
;
#line 1167
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(515)));
#line 1167
c_rt_lib0move(&___nl__im__34,___get_global_const(965));
#line 1167
___nl__bool__17 = c_rt_lib0eq(___nl__im__33, ___nl__im__34);
#line 1167
c_rt_lib0clear(&___nl__im__33);
#line 1167
c_rt_lib0clear(&___nl__im__34);
#line 1167
___nl__bool__17 = !___nl__bool__17;
#line 1167
if(___nl__bool__17){ goto label_14;}
#line 1168
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1168
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_const(205)));
#line 1168
c_rt_lib0clear(&___nl__im__37);
#line 1168
___nl__im_ptr__40 = &((*___ref___rec__1).logic0field);
#line 1168
c_rt_lib0copy(&___nl__im__39, (*___nl__im_ptr__40));
#line 1168
___nl__im_ptr__40 = NULL;
#line 1168
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(388)));
#line 1168
c_rt_lib0clear(&___nl__im__39);
#line 1168
c_rt_lib0move(&___nl__im__35, translator_priv0unwrap_ref(___nl__im__36, ___nl__im__38));
#line 1168
c_rt_lib0clear(&___nl__im__36);
#line 1168
c_rt_lib0clear(&___nl__im__38);
#line 1169
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(4));
#line 1169
___nl__bool__41 = !___nl__bool__41;
#line 1169
if(___nl__bool__41){ goto label_16;}
#line 1171
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__35, ___get_global_const(4)));
#line 1172
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1172
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__44, ___get_global_const(565), ___nl__im__45));
#line 1172
c_rt_lib0clear(&___nl__im__44);
#line 1172
c_rt_lib0clear(&___nl__im__45);
#line 1172
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__43));
#line 1172
c_rt_lib0clear(&___nl__im__43);
#line 1172
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__42));
#line 1172
c_rt_lib0clear(&___nl__im__42);
#line 1174
goto label_15;
#line 1174
label_16:
;
#line 1175
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1175
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_const(1288), ___nl__im__47));
#line 1175
c_rt_lib0clear(&___nl__im__47);
#line 1175
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__46));
#line 1175
c_rt_lib0clear(&___nl__im__46);
#line 1176
goto label_15;
#line 1176
label_15:
;
#line 1176
//clear ___nl__bool__41;
#line 1177
goto label_10;
#line 1177
label_14:
;
#line 1177
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(515)));
#line 1177
c_rt_lib0move(&___nl__im__49,___get_global_const(533));
#line 1177
___nl__bool__17 = c_rt_lib0eq(___nl__im__48, ___nl__im__49);
#line 1177
c_rt_lib0clear(&___nl__im__48);
#line 1177
c_rt_lib0clear(&___nl__im__49);
#line 1177
___nl__bool__17 = !___nl__bool__17;
#line 1177
if(___nl__bool__17){ goto label_17;}
#line 1178
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1178
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(205)));
#line 1178
c_rt_lib0clear(&___nl__im__52);
#line 1178
___nl__im_ptr__55 = &((*___ref___rec__1).logic0field);
#line 1178
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 1178
___nl__im_ptr__55 = NULL;
#line 1178
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(388)));
#line 1178
c_rt_lib0clear(&___nl__im__54);
#line 1178
c_rt_lib0move(&___nl__im__50, translator_priv0unwrap_ref(___nl__im__51, ___nl__im__53));
#line 1178
c_rt_lib0clear(&___nl__im__51);
#line 1178
c_rt_lib0clear(&___nl__im__53);
#line 1179
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(6));
#line 1179
___nl__bool__56 = !___nl__bool__56;
#line 1179
if(___nl__bool__56){ goto label_19;}
#line 1180
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1180
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_const(219)));
#line 1180
c_rt_lib0clear(&___nl__im__59);
#line 1180
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1180
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_const(219)));
#line 1180
c_rt_lib0clear(&___nl__im__61);
#line 1180
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__60, ___get_global_const(970)));
#line 1180
c_rt_lib0clear(&___nl__im__58);
#line 1180
c_rt_lib0clear(&___nl__im__60);
#line 1182
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(6)));
#line 1182
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__65, ___nl__im__57));
#line 1182
c_rt_lib0clear(&___nl__im__65);
#line 1182
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__64, ___get_global_const(563), ___nl__im__57));
#line 1182
c_rt_lib0clear(&___nl__im__64);
#line 1182
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_arg(___get_global_const(253), ___nl__im__63));
#line 1182
c_rt_lib0clear(&___nl__im__63);
#line 1182
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__62));
#line 1182
c_rt_lib0clear(&___nl__im__62);
#line 1185
goto label_18;
#line 1185
label_19:
;
#line 1185
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(4));
#line 1185
___nl__bool__56 = !___nl__bool__56;
#line 1185
if(___nl__bool__56){ goto label_20;}
#line 1187
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(4)));
#line 1188
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1188
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__68, ___get_global_const(565), ___nl__im__69));
#line 1188
c_rt_lib0clear(&___nl__im__68);
#line 1188
c_rt_lib0clear(&___nl__im__69);
#line 1188
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__67));
#line 1188
c_rt_lib0clear(&___nl__im__67);
#line 1188
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__66));
#line 1188
c_rt_lib0clear(&___nl__im__66);
#line 1190
goto label_18;
#line 1190
label_20:
;
#line 1191
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1191
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_const(219)));
#line 1191
c_rt_lib0clear(&___nl__im__73);
#line 1191
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1191
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_const(219)));
#line 1191
c_rt_lib0clear(&___nl__im__75);
#line 1191
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__74, ___get_global_const(970)));
#line 1191
c_rt_lib0clear(&___nl__im__72);
#line 1191
c_rt_lib0clear(&___nl__im__74);
#line 1191
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_const(370), ___nl__im__71));
#line 1191
c_rt_lib0clear(&___nl__im__71);
#line 1191
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__70));
#line 1191
c_rt_lib0clear(&___nl__im__70);
#line 1192
goto label_18;
#line 1192
label_18:
;
#line 1192
//clear ___nl__bool__56;
#line 1192
c_rt_lib0clear(&___nl__im__57);
#line 1193
goto label_10;
#line 1193
label_17:
;
#line 1193
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(515)));
#line 1193
c_rt_lib0move(&___nl__im__77,___get_global_const(966));
#line 1193
___nl__bool__17 = c_rt_lib0eq(___nl__im__76, ___nl__im__77);
#line 1193
c_rt_lib0clear(&___nl__im__76);
#line 1193
c_rt_lib0clear(&___nl__im__77);
#line 1193
___nl__bool__17 = !___nl__bool__17;
#line 1193
if(___nl__bool__17){ goto label_21;}
#line 1194
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1194
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(205)));
#line 1194
c_rt_lib0clear(&___nl__im__80);
#line 1194
___nl__im_ptr__83 = &((*___ref___rec__1).logic0field);
#line 1194
c_rt_lib0copy(&___nl__im__82, (*___nl__im_ptr__83));
#line 1194
___nl__im_ptr__83 = NULL;
#line 1194
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_const(388)));
#line 1194
c_rt_lib0clear(&___nl__im__82);
#line 1194
c_rt_lib0move(&___nl__im__78, translator_priv0unwrap_ref(___nl__im__79, ___nl__im__81));
#line 1194
c_rt_lib0clear(&___nl__im__79);
#line 1194
c_rt_lib0clear(&___nl__im__81);
#line 1195
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1195
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_const(219)));
#line 1195
c_rt_lib0clear(&___nl__im__86);
#line 1195
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(275)));
#line 1195
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_const(219)));
#line 1195
c_rt_lib0clear(&___nl__im__88);
#line 1195
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__87, ___get_global_const(970)));
#line 1195
c_rt_lib0clear(&___nl__im__85);
#line 1195
c_rt_lib0clear(&___nl__im__87);
#line 1196
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_const(14));
#line 1196
___nl__bool__89 = !___nl__bool__89;
#line 1196
if(___nl__bool__89){ goto label_23;}
#line 1198
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__78, ___get_global_const(14)));
#line 1198
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value(___nl__im__94, ___nl__im__84));
#line 1198
c_rt_lib0clear(&___nl__im__94);
#line 1198
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__78, ___get_global_const(14)));
#line 1198
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value(___nl__im__96, ___nl__im__84));
#line 1198
c_rt_lib0clear(&___nl__im__96);
#line 1198
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__95, ___get_global_const(28)));
#line 1198
c_rt_lib0clear(&___nl__im__93);
#line 1198
c_rt_lib0clear(&___nl__im__95);
#line 1198
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(2, ___get_global_const(1308), ___nl__im__92, ___get_global_const(535), ___nl__im__84));
#line 1198
c_rt_lib0clear(&___nl__im__92);
#line 1198
c_rt_lib0move(&___nl__im__90, c_rt_lib0ov_mk_arg(___get_global_const(259), ___nl__im__91));
#line 1198
c_rt_lib0clear(&___nl__im__91);
#line 1198
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__90));
#line 1198
c_rt_lib0clear(&___nl__im__90);
#line 1201
goto label_22;
#line 1201
label_23:
;
#line 1201
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_const(13));
#line 1201
if(___nl__bool__89){ goto label_25;}
#line 1201
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_const(0));
#line 1201
label_25:
;
#line 1201
___nl__bool__89 = !___nl__bool__89;
#line 1201
if(___nl__bool__89){ goto label_24;}
#line 1202
c_rt_lib0move(&___nl__im__97, c_rt_lib0ov_mk_arg(___get_global_const(992), ___nl__im__84));
#line 1202
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__97));
#line 1202
c_rt_lib0clear(&___nl__im__97);
#line 1203
goto label_22;
#line 1203
label_24:
;
#line 1204
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(0));
#line 1204
nl_die_arg(___nl__im__98);
#line 1205
goto label_22;
#line 1205
label_22:
;
#line 1205
//clear ___nl__bool__89;
#line 1205
c_rt_lib0clear(&___nl__im__98);
#line 1206
goto label_10;
#line 1206
label_21:
;
#line 1207
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(0));
#line 1207
nl_die_arg(___nl__im__99);
#line 1208
goto label_10;
#line 1208
label_10:
;
#line 1208
//clear ___nl__bool__17;
#line 1208
c_rt_lib0clear(&___nl__im__20);
#line 1208
c_rt_lib0clear(&___nl__im__35);
#line 1208
c_rt_lib0clear(&___nl__im__50);
#line 1208
c_rt_lib0clear(&___nl__im__78);
#line 1208
c_rt_lib0clear(&___nl__im__84);
#line 1208
c_rt_lib0clear(&___nl__im__99);
#line 1209
c_rt_lib0delete(array0append(&___nl__im__16, ___nl__im__2));
#line 1210
c_rt_lib0copy(&___nl__im__2, ___nl__im__16);
#line 1211
c_rt_lib0move(___ref___im__0, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1212
goto label_3;
#line 1212
label_4:
;
#line 1212
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1212
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__100, ___get_global_const(967));
#line 1212
c_rt_lib0clear(&___nl__im__100);
#line 1212
___nl__bool__4 = !___nl__bool__4;
#line 1212
if(___nl__bool__4){ goto label_26;}
#line 1213
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1213
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(219)));
#line 1213
c_rt_lib0move(___ref___im__0, c_rt_lib0priv_as(___nl__im__102, ___get_global_const(967)));
#line 1213
c_rt_lib0clear(&___nl__im__101);
#line 1213
c_rt_lib0clear(&___nl__im__102);
#line 1214
goto label_3;
#line 1214
label_26:
;
#line 1215
goto label_1;
#line 1216
goto label_3;
#line 1216
label_3:
;
#line 1216
//clear ___nl__bool__4;
#line 1216
c_rt_lib0clear(&___nl__im__6);
#line 1216
c_rt_lib0clear(&___nl__im__9);
#line 1216
c_rt_lib0clear(&___nl__im__16);
#line 1217
goto label_2;
#line 1217
label_1:
;
#line 1218
//clear ___nl__bool__3;
#line 1218
return ___nl__im__2;
return NULL;
}

translator0lvalue_values_t0type translator_priv0get_value_of_lvalue(nast0value_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2) {
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
INT  ___nl__int__144 = 0;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT * ___nl__im_ptr__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
INT  ___nl__int__158 = 0;
INT  ___nl__int__159 = 0;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
INT  ___nl__int__162 = 0;
INT  ___nl__int__163 = 0;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT * ___nl__im_ptr__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
INT  ___nl__int__180 = 0;
INT  ___nl__int__181 = 0;
ImmT  ___nl__im__182 = NULL;
INT  ___nl__int__183 = 0;
INT  ___nl__int__184 = 0;
ImmT  ___nl__im__185 = NULL;
bool  ___nl__bool__186 = false;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
INT  ___nl__int__189 = 0;
INT  ___nl__int__190 = 0;
INT  ___nl__int__191 = 0;
#line 1223
c_rt_lib0move(&___nl__im__3, translator_priv0get_struct_of_lvalue(&___nl__im__0, ___ref___rec__2));
#line 1224
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1224
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1224
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(464)));
#line 1224
c_rt_lib0clear(&___nl__im__5);
#line 1224
c_rt_lib0clear(&___nl__im__6);
#line 1225
c_rt_lib0move(&___nl__im__8, translator_priv0get_var_register(___nl__im__4, ___ref___rec__2));
#line 1225
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(1, ___nl__im__8));
#line 1225
c_rt_lib0clear(&___nl__im__8);
#line 1226
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1227
___nl__int__10 = c_rt_lib0array_len(___nl__im__3);
#line 1227
___nl__int__11 = 0;
#line 1227
___nl__int__12 = 1;
#line 1227
label_3:
;
#line 1227
___nl__int__14 = ___nl__int__11 >= ___nl__int__10;
#line 1227
___nl__bool__13 = ___nl__int__14;
#line 1227
if(___nl__bool__13){ goto label_1;}
#line 1228
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__3, ___nl__int__11));
#line 1228
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(565));
#line 1228
if(___nl__bool__16){ goto label_5;}
#line 1234
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(255));
#line 1234
if(___nl__bool__16){ goto label_6;}
#line 1240
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(1288));
#line 1240
if(___nl__bool__16){ goto label_7;}
#line 1246
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(370));
#line 1246
if(___nl__bool__16){ goto label_8;}
#line 1255
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(253));
#line 1255
if(___nl__bool__16){ goto label_9;}
#line 1260
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(992));
#line 1260
if(___nl__bool__16){ goto label_10;}
#line 1264
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(259));
#line 1264
if(___nl__bool__16){ goto label_11;}
#line 1269
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(257));
#line 1269
if(___nl__bool__16){ goto label_12;}
#line 1269
c_rt_lib0move(&___nl__im__17,___get_global_const(16));
#line 1269
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1269
nl_die_arg(___nl__im__17);
#line 1228
label_5:
;
#line 1228
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(565)));
#line 1228
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1229
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1229
c_rt_lib0move(&___nl__im__20, translator_priv0new_register(___ref___rec__2, ___nl__im__21));
#line 1229
c_rt_lib0clear(&___nl__im__21);
#line 1229
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__20));
#line 1229
c_rt_lib0clear(&___nl__im__20);
#line 1230
c_rt_lib0move(&___nl__im__23, translator_priv0calc_val(___nl__im__18, ___ref___rec__2));
#line 1230
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 1230
c_rt_lib0move(&___nl__im__22, translator_priv0get_cast(___nl__im__23, ___nl__im__24, ___ref___rec__2));
#line 1230
c_rt_lib0clear(&___nl__im__23);
#line 1230
c_rt_lib0clear(&___nl__im__24);
#line 1231
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1231
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__27, ___get_global_const(565), ___nl__im__22));
#line 1231
c_rt_lib0clear(&___nl__im__27);
#line 1231
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(565), ___nl__im__26));
#line 1231
c_rt_lib0clear(&___nl__im__26);
#line 1231
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__25));
#line 1231
c_rt_lib0clear(&___nl__im__25);
#line 1232
___nl__bool__28 = ___nl__bool__1;
#line 1232
___nl__bool__28 = !___nl__bool__28;
#line 1232
___nl__bool__29 = !___nl__bool__28;
#line 1232
if(___nl__bool__29){ goto label_15;}
#line 1232
___nl__int__31 = c_rt_lib0array_len(___nl__im__3);
#line 1232
___nl__int__32 = 1;
#line 1232
___nl__int__30 = ___nl__int__31 - ___nl__int__32;
#line 1232
//clear ___nl__int__31;
#line 1232
//clear ___nl__int__32;
#line 1232
___nl__int__33 = ___nl__int__11 == ___nl__int__30;
#line 1232
___nl__bool__28 = ___nl__int__33;
#line 1232
//clear ___nl__int__30;
#line 1232
//clear ___nl__int__33;
#line 1232
label_15:
;
#line 1232
//clear ___nl__bool__29;
#line 1232
___nl__bool__28 = !___nl__bool__28;
#line 1232
if(___nl__bool__28){ goto label_14;}
#line 1232
goto label_1;
#line 1232
goto label_13;
#line 1232
label_14:
;
#line 1232
label_13:
;
#line 1232
//clear ___nl__bool__28;
#line 1233
___nl__int__36 = 1;
#line 1233
___nl__int__35 = ___nl__int__11 + ___nl__int__36;
#line 1233
//clear ___nl__int__36;
#line 1233
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__7, ___nl__int__35));
#line 1233
//clear ___nl__int__35;
#line 1233
c_rt_lib0move(&___nl__im__37,___get_global_const(1309));
#line 1233
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1233
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__40));
#line 1233
c_rt_lib0clear(&___nl__im__40);
#line 1233
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__22));
#line 1233
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(2, ___nl__im__39, ___nl__im__41));
#line 1233
c_rt_lib0clear(&___nl__im__39);
#line 1233
c_rt_lib0clear(&___nl__im__41);
#line 1233
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__34, ___nl__im__37, ___nl__im__38, ___ref___rec__2));
#line 1233
c_rt_lib0clear(&___nl__im__34);
#line 1233
c_rt_lib0clear(&___nl__im__37);
#line 1233
c_rt_lib0clear(&___nl__im__38);
#line 1234
goto label_4;
#line 1234
label_6:
;
#line 1234
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(255)));
#line 1234
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 1235
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(1308)));
#line 1235
___nl__im_ptr__48 = &((*___ref___rec__2).logic0field);
#line 1235
c_rt_lib0copy(&___nl__im__47, (*___nl__im_ptr__48));
#line 1235
___nl__im_ptr__48 = NULL;
#line 1235
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(388)));
#line 1235
c_rt_lib0clear(&___nl__im__47);
#line 1235
c_rt_lib0move(&___nl__im__44, translator_priv0var_type_to_reg_type(___nl__im__45, ___nl__im__46));
#line 1235
c_rt_lib0clear(&___nl__im__45);
#line 1235
c_rt_lib0clear(&___nl__im__46);
#line 1236
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(565)));
#line 1236
c_rt_lib0move(&___nl__im__49, translator_priv0calc_val(___nl__im__50, ___ref___rec__2));
#line 1236
c_rt_lib0clear(&___nl__im__50);
#line 1237
c_rt_lib0move(&___nl__im__51, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__44));
#line 1237
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__51));
#line 1237
c_rt_lib0clear(&___nl__im__51);
#line 1238
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1238
___nl__int__57 = 1;
#line 1238
___nl__int__56 = ___nl__int__11 + ___nl__int__57;
#line 1238
//clear ___nl__int__57;
#line 1238
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__7, ___nl__int__56));
#line 1238
//clear ___nl__int__56;
#line 1238
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__54, ___get_global_const(1301), ___nl__im__55, ___get_global_const(565), ___nl__im__49));
#line 1238
c_rt_lib0clear(&___nl__im__54);
#line 1238
c_rt_lib0clear(&___nl__im__55);
#line 1238
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_const(255), ___nl__im__53));
#line 1238
c_rt_lib0clear(&___nl__im__53);
#line 1238
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__52));
#line 1238
c_rt_lib0clear(&___nl__im__52);
#line 1239
___nl__int__60 = 1;
#line 1239
___nl__int__59 = ___nl__int__11 + ___nl__int__60;
#line 1239
//clear ___nl__int__60;
#line 1239
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_get(___nl__im__7, ___nl__int__59));
#line 1239
//clear ___nl__int__59;
#line 1239
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1239
c_rt_lib0delete(translator_priv0use_index(___nl__im__58, ___nl__im__61, ___nl__im__49, ___ref___rec__2));
#line 1239
c_rt_lib0clear(&___nl__im__58);
#line 1239
c_rt_lib0clear(&___nl__im__61);
#line 1240
goto label_4;
#line 1240
label_7:
;
#line 1240
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(1288)));
#line 1240
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 1241
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1241
c_rt_lib0move(&___nl__im__64, translator_priv0new_register(___ref___rec__2, ___nl__im__65));
#line 1241
c_rt_lib0clear(&___nl__im__65);
#line 1241
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__64));
#line 1241
c_rt_lib0clear(&___nl__im__64);
#line 1242
c_rt_lib0move(&___nl__im__66, translator_priv0calc_val(___nl__im__62, ___ref___rec__2));
#line 1243
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1243
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__69, ___get_global_const(370), ___nl__im__66));
#line 1243
c_rt_lib0clear(&___nl__im__69);
#line 1243
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(1288), ___nl__im__68));
#line 1243
c_rt_lib0clear(&___nl__im__68);
#line 1243
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__67));
#line 1243
c_rt_lib0clear(&___nl__im__67);
#line 1244
___nl__bool__70 = ___nl__bool__1;
#line 1244
___nl__bool__70 = !___nl__bool__70;
#line 1244
___nl__bool__71 = !___nl__bool__70;
#line 1244
if(___nl__bool__71){ goto label_18;}
#line 1244
___nl__int__73 = c_rt_lib0array_len(___nl__im__3);
#line 1244
___nl__int__74 = 1;
#line 1244
___nl__int__72 = ___nl__int__73 - ___nl__int__74;
#line 1244
//clear ___nl__int__73;
#line 1244
//clear ___nl__int__74;
#line 1244
___nl__int__75 = ___nl__int__11 == ___nl__int__72;
#line 1244
___nl__bool__70 = ___nl__int__75;
#line 1244
//clear ___nl__int__72;
#line 1244
//clear ___nl__int__75;
#line 1244
label_18:
;
#line 1244
//clear ___nl__bool__71;
#line 1244
___nl__bool__70 = !___nl__bool__70;
#line 1244
if(___nl__bool__70){ goto label_17;}
#line 1244
goto label_1;
#line 1244
goto label_16;
#line 1244
label_17:
;
#line 1244
label_16:
;
#line 1244
//clear ___nl__bool__70;
#line 1245
___nl__int__78 = 1;
#line 1245
___nl__int__77 = ___nl__int__11 + ___nl__int__78;
#line 1245
//clear ___nl__int__78;
#line 1245
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__7, ___nl__int__77));
#line 1245
//clear ___nl__int__77;
#line 1245
c_rt_lib0move(&___nl__im__79,___get_global_const(1310));
#line 1245
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1245
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__82));
#line 1245
c_rt_lib0clear(&___nl__im__82);
#line 1245
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__66));
#line 1245
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_mk(2, ___nl__im__81, ___nl__im__83));
#line 1245
c_rt_lib0clear(&___nl__im__81);
#line 1245
c_rt_lib0clear(&___nl__im__83);
#line 1245
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__76, ___nl__im__79, ___nl__im__80, ___ref___rec__2));
#line 1245
c_rt_lib0clear(&___nl__im__76);
#line 1245
c_rt_lib0clear(&___nl__im__79);
#line 1245
c_rt_lib0clear(&___nl__im__80);
#line 1246
goto label_4;
#line 1246
label_8:
;
#line 1246
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(370)));
#line 1246
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1247
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1247
c_rt_lib0move(&___nl__im__86, translator_priv0new_register(___ref___rec__2, ___nl__im__87));
#line 1247
c_rt_lib0clear(&___nl__im__87);
#line 1247
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__86));
#line 1247
c_rt_lib0clear(&___nl__im__86);
#line 1248
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1248
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__90, ___get_global_const(370), ___nl__im__84));
#line 1248
c_rt_lib0clear(&___nl__im__90);
#line 1248
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_const(370), ___nl__im__89));
#line 1248
c_rt_lib0clear(&___nl__im__89);
#line 1248
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__88));
#line 1248
c_rt_lib0clear(&___nl__im__88);
#line 1249
___nl__bool__91 = ___nl__bool__1;
#line 1249
___nl__bool__91 = !___nl__bool__91;
#line 1249
___nl__bool__92 = !___nl__bool__91;
#line 1249
if(___nl__bool__92){ goto label_21;}
#line 1249
___nl__int__94 = c_rt_lib0array_len(___nl__im__3);
#line 1249
___nl__int__95 = 1;
#line 1249
___nl__int__93 = ___nl__int__94 - ___nl__int__95;
#line 1249
//clear ___nl__int__94;
#line 1249
//clear ___nl__int__95;
#line 1249
___nl__int__96 = ___nl__int__11 == ___nl__int__93;
#line 1249
___nl__bool__91 = ___nl__int__96;
#line 1249
//clear ___nl__int__93;
#line 1249
//clear ___nl__int__96;
#line 1249
label_21:
;
#line 1249
//clear ___nl__bool__92;
#line 1249
___nl__bool__91 = !___nl__bool__91;
#line 1249
if(___nl__bool__91){ goto label_20;}
#line 1249
goto label_1;
#line 1249
goto label_19;
#line 1249
label_20:
;
#line 1249
label_19:
;
#line 1249
//clear ___nl__bool__91;
#line 1250
___nl__int__99 = 1;
#line 1250
___nl__int__98 = ___nl__int__11 + ___nl__int__99;
#line 1250
//clear ___nl__int__99;
#line 1250
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__7, ___nl__int__98));
#line 1250
//clear ___nl__int__98;
#line 1250
c_rt_lib0delete(translator_priv0load_const(___nl__im__84, ___nl__im__97, ___ref___rec__2));
#line 1250
c_rt_lib0clear(&___nl__im__97);
#line 1251
___nl__int__102 = 1;
#line 1251
___nl__int__101 = ___nl__int__11 + ___nl__int__102;
#line 1251
//clear ___nl__int__102;
#line 1251
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_get(___nl__im__7, ___nl__int__101));
#line 1251
//clear ___nl__int__101;
#line 1251
c_rt_lib0move(&___nl__im__103,___get_global_const(1310));
#line 1252
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1252
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__106));
#line 1252
c_rt_lib0clear(&___nl__im__106);
#line 1253
___nl__int__110 = 1;
#line 1253
___nl__int__109 = ___nl__int__11 + ___nl__int__110;
#line 1253
//clear ___nl__int__110;
#line 1253
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_get(___nl__im__7, ___nl__int__109));
#line 1253
//clear ___nl__int__109;
#line 1253
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__108));
#line 1253
c_rt_lib0clear(&___nl__im__108);
#line 1253
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__107));
#line 1253
c_rt_lib0clear(&___nl__im__105);
#line 1253
c_rt_lib0clear(&___nl__im__107);
#line 1253
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__100, ___nl__im__103, ___nl__im__104, ___ref___rec__2));
#line 1253
c_rt_lib0clear(&___nl__im__100);
#line 1253
c_rt_lib0clear(&___nl__im__103);
#line 1253
c_rt_lib0clear(&___nl__im__104);
#line 1255
goto label_4;
#line 1255
label_9:
;
#line 1255
c_rt_lib0move(&___nl__im__112, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(253)));
#line 1255
c_rt_lib0copy(&___nl__im__111, ___nl__im__112);
#line 1256
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(1308)));
#line 1256
___nl__im_ptr__117 = &((*___ref___rec__2).logic0field);
#line 1256
c_rt_lib0copy(&___nl__im__116, (*___nl__im_ptr__117));
#line 1256
___nl__im_ptr__117 = NULL;
#line 1256
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_const(388)));
#line 1256
c_rt_lib0clear(&___nl__im__116);
#line 1256
c_rt_lib0move(&___nl__im__113, translator_priv0var_type_to_reg_type(___nl__im__114, ___nl__im__115));
#line 1256
c_rt_lib0clear(&___nl__im__114);
#line 1256
c_rt_lib0clear(&___nl__im__115);
#line 1257
c_rt_lib0move(&___nl__im__118, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__113));
#line 1257
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__118));
#line 1257
c_rt_lib0clear(&___nl__im__118);
#line 1258
c_rt_lib0move(&___nl__im__121, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1258
___nl__int__124 = 1;
#line 1258
___nl__int__123 = ___nl__int__11 + ___nl__int__124;
#line 1258
//clear ___nl__int__124;
#line 1258
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_get(___nl__im__7, ___nl__int__123));
#line 1258
//clear ___nl__int__123;
#line 1258
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(563)));
#line 1258
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__121, ___get_global_const(1301), ___nl__im__122, ___get_global_const(563), ___nl__im__125));
#line 1258
c_rt_lib0clear(&___nl__im__121);
#line 1258
c_rt_lib0clear(&___nl__im__122);
#line 1258
c_rt_lib0clear(&___nl__im__125);
#line 1258
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_const(253), ___nl__im__120));
#line 1258
c_rt_lib0clear(&___nl__im__120);
#line 1258
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__119));
#line 1258
c_rt_lib0clear(&___nl__im__119);
#line 1259
___nl__int__128 = 1;
#line 1259
___nl__int__127 = ___nl__int__11 + ___nl__int__128;
#line 1259
//clear ___nl__int__128;
#line 1259
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_get(___nl__im__7, ___nl__int__127));
#line 1259
//clear ___nl__int__127;
#line 1259
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1259
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(563)));
#line 1259
c_rt_lib0delete(translator_priv0use_field(___nl__im__126, ___nl__im__129, ___nl__im__130, ___ref___rec__2));
#line 1259
c_rt_lib0clear(&___nl__im__126);
#line 1259
c_rt_lib0clear(&___nl__im__129);
#line 1259
c_rt_lib0clear(&___nl__im__130);
#line 1260
goto label_4;
#line 1260
label_10:
;
#line 1260
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(992)));
#line 1260
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 1261
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1261
c_rt_lib0move(&___nl__im__133, translator_priv0new_register(___ref___rec__2, ___nl__im__134));
#line 1261
c_rt_lib0clear(&___nl__im__134);
#line 1261
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__133));
#line 1261
c_rt_lib0clear(&___nl__im__133);
#line 1262
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1262
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_mk(2, ___get_global_const(219), ___nl__im__137, ___get_global_const(535), ___nl__im__131));
#line 1262
c_rt_lib0clear(&___nl__im__137);
#line 1262
c_rt_lib0move(&___nl__im__135, c_rt_lib0ov_mk_arg(___get_global_const(992), ___nl__im__136));
#line 1262
c_rt_lib0clear(&___nl__im__136);
#line 1262
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__135));
#line 1262
c_rt_lib0clear(&___nl__im__135);
#line 1263
___nl__int__142 = 1;
#line 1263
___nl__int__141 = ___nl__int__11 + ___nl__int__142;
#line 1263
//clear ___nl__int__142;
#line 1263
c_rt_lib0move(&___nl__im__140, c_rt_lib0array_get(___nl__im__7, ___nl__int__141));
#line 1263
//clear ___nl__int__141;
#line 1263
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1263
___nl__int__144 = 1;
#line 1263
___nl__int__144 = -___nl__int__144;
#line 1263
c_rt_lib0move(&___nl__im__145, c_rt_lib0int_new(___nl__int__144));
#line 1263
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_mk(4, ___get_global_const(223), ___nl__im__140, ___get_global_const(74), ___nl__im__143, ___get_global_const(205), ___nl__im__131, ___get_global_const(522), ___nl__im__145));
#line 1263
c_rt_lib0clear(&___nl__im__140);
#line 1263
c_rt_lib0clear(&___nl__im__143);
#line 1263
//clear ___nl__int__144;
#line 1263
c_rt_lib0clear(&___nl__im__145);
#line 1263
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__139));
#line 1263
c_rt_lib0clear(&___nl__im__139);
#line 1263
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__138));
#line 1263
c_rt_lib0clear(&___nl__im__138);
#line 1264
goto label_4;
#line 1264
label_11:
;
#line 1264
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(259)));
#line 1264
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 1265
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_const(1308)));
#line 1265
___nl__im_ptr__152 = &((*___ref___rec__2).logic0field);
#line 1265
c_rt_lib0copy(&___nl__im__151, (*___nl__im_ptr__152));
#line 1265
___nl__im_ptr__152 = NULL;
#line 1265
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__151, ___get_global_const(388)));
#line 1265
c_rt_lib0clear(&___nl__im__151);
#line 1265
c_rt_lib0move(&___nl__im__148, translator_priv0var_type_to_reg_type(___nl__im__149, ___nl__im__150));
#line 1265
c_rt_lib0clear(&___nl__im__149);
#line 1265
c_rt_lib0clear(&___nl__im__150);
#line 1266
c_rt_lib0move(&___nl__im__153, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__148));
#line 1266
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__153));
#line 1266
c_rt_lib0clear(&___nl__im__153);
#line 1267
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1267
___nl__int__159 = 1;
#line 1267
___nl__int__158 = ___nl__int__11 + ___nl__int__159;
#line 1267
//clear ___nl__int__159;
#line 1267
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_get(___nl__im__7, ___nl__int__158));
#line 1267
//clear ___nl__int__158;
#line 1267
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_const(535)));
#line 1267
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__156, ___get_global_const(1301), ___nl__im__157, ___get_global_const(535), ___nl__im__160));
#line 1267
c_rt_lib0clear(&___nl__im__156);
#line 1267
c_rt_lib0clear(&___nl__im__157);
#line 1267
c_rt_lib0clear(&___nl__im__160);
#line 1267
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_arg(___get_global_const(259), ___nl__im__155));
#line 1267
c_rt_lib0clear(&___nl__im__155);
#line 1267
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__154));
#line 1267
c_rt_lib0clear(&___nl__im__154);
#line 1268
___nl__int__163 = 1;
#line 1268
___nl__int__162 = ___nl__int__11 + ___nl__int__163;
#line 1268
//clear ___nl__int__163;
#line 1268
c_rt_lib0move(&___nl__im__161, c_rt_lib0array_get(___nl__im__7, ___nl__int__162));
#line 1268
//clear ___nl__int__162;
#line 1268
c_rt_lib0move(&___nl__im__164, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1268
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_const(535)));
#line 1268
c_rt_lib0delete(translator_priv0use_variant(___nl__im__161, ___nl__im__164, ___nl__im__165, ___ref___rec__2));
#line 1268
c_rt_lib0clear(&___nl__im__161);
#line 1268
c_rt_lib0clear(&___nl__im__164);
#line 1268
c_rt_lib0clear(&___nl__im__165);
#line 1269
goto label_4;
#line 1269
label_12:
;
#line 1269
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(257)));
#line 1269
c_rt_lib0copy(&___nl__im__166, ___nl__im__167);
#line 1270
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_const(1308)));
#line 1270
___nl__im_ptr__172 = &((*___ref___rec__2).logic0field);
#line 1270
c_rt_lib0copy(&___nl__im__171, (*___nl__im_ptr__172));
#line 1270
___nl__im_ptr__172 = NULL;
#line 1270
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__171, ___get_global_const(388)));
#line 1270
c_rt_lib0clear(&___nl__im__171);
#line 1270
c_rt_lib0move(&___nl__im__168, translator_priv0var_type_to_reg_type(___nl__im__169, ___nl__im__170));
#line 1270
c_rt_lib0clear(&___nl__im__169);
#line 1270
c_rt_lib0clear(&___nl__im__170);
#line 1271
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_const(565)));
#line 1271
c_rt_lib0move(&___nl__im__173, translator_priv0calc_val(___nl__im__174, ___ref___rec__2));
#line 1271
c_rt_lib0clear(&___nl__im__174);
#line 1272
c_rt_lib0move(&___nl__im__175, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__168));
#line 1272
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__175));
#line 1272
c_rt_lib0clear(&___nl__im__175);
#line 1273
c_rt_lib0move(&___nl__im__178, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1273
___nl__int__181 = 1;
#line 1273
___nl__int__180 = ___nl__int__11 + ___nl__int__181;
#line 1273
//clear ___nl__int__181;
#line 1273
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_get(___nl__im__7, ___nl__int__180));
#line 1273
//clear ___nl__int__180;
#line 1273
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_mk(3, ___get_global_const(1300), ___nl__im__178, ___get_global_const(1301), ___nl__im__179, ___get_global_const(565), ___nl__im__173));
#line 1273
c_rt_lib0clear(&___nl__im__178);
#line 1273
c_rt_lib0clear(&___nl__im__179);
#line 1273
c_rt_lib0move(&___nl__im__176, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__177));
#line 1273
c_rt_lib0clear(&___nl__im__177);
#line 1273
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__176));
#line 1273
c_rt_lib0clear(&___nl__im__176);
#line 1274
___nl__int__184 = 1;
#line 1274
___nl__int__183 = ___nl__int__11 + ___nl__int__184;
#line 1274
//clear ___nl__int__184;
#line 1274
c_rt_lib0move(&___nl__im__182, c_rt_lib0array_get(___nl__im__7, ___nl__int__183));
#line 1274
//clear ___nl__int__183;
#line 1274
c_rt_lib0move(&___nl__im__185, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1274
___nl__bool__186 = ___nl__bool__1;
#line 1274
___nl__bool__186 = !___nl__bool__186;
#line 1274
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__182, ___nl__im__185, ___nl__im__173, ___nl__bool__186, ___ref___rec__2));
#line 1274
c_rt_lib0clear(&___nl__im__182);
#line 1274
c_rt_lib0clear(&___nl__im__185);
#line 1274
//clear ___nl__bool__186;
#line 1275
goto label_4;
#line 1275
label_4:
;
#line 1275
c_rt_lib0clear(&___nl__im__15);
#line 1275
//clear ___nl__bool__16;
#line 1275
c_rt_lib0clear(&___nl__im__17);
#line 1275
c_rt_lib0clear(&___nl__im__18);
#line 1275
c_rt_lib0clear(&___nl__im__19);
#line 1275
c_rt_lib0clear(&___nl__im__22);
#line 1275
c_rt_lib0clear(&___nl__im__42);
#line 1275
c_rt_lib0clear(&___nl__im__43);
#line 1275
c_rt_lib0clear(&___nl__im__44);
#line 1275
c_rt_lib0clear(&___nl__im__49);
#line 1275
c_rt_lib0clear(&___nl__im__62);
#line 1275
c_rt_lib0clear(&___nl__im__63);
#line 1275
c_rt_lib0clear(&___nl__im__66);
#line 1275
c_rt_lib0clear(&___nl__im__84);
#line 1275
c_rt_lib0clear(&___nl__im__85);
#line 1275
c_rt_lib0clear(&___nl__im__111);
#line 1275
c_rt_lib0clear(&___nl__im__112);
#line 1275
c_rt_lib0clear(&___nl__im__113);
#line 1275
c_rt_lib0clear(&___nl__im__131);
#line 1275
c_rt_lib0clear(&___nl__im__132);
#line 1275
c_rt_lib0clear(&___nl__im__146);
#line 1275
c_rt_lib0clear(&___nl__im__147);
#line 1275
c_rt_lib0clear(&___nl__im__148);
#line 1275
c_rt_lib0clear(&___nl__im__166);
#line 1275
c_rt_lib0clear(&___nl__im__167);
#line 1275
c_rt_lib0clear(&___nl__im__168);
#line 1275
c_rt_lib0clear(&___nl__im__173);
#line 1276
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1276
goto label_3;
#line 1276
label_1:
;
#line 1277
___nl__int__190 = c_rt_lib0array_len(___nl__im__7);
#line 1277
___nl__int__191 = 1;
#line 1277
___nl__int__189 = ___nl__int__190 - ___nl__int__191;
#line 1277
//clear ___nl__int__190;
#line 1277
//clear ___nl__int__191;
#line 1277
c_rt_lib0move(&___nl__im__188, c_rt_lib0array_get(___nl__im__7, ___nl__int__189));
#line 1277
//clear ___nl__int__189;
#line 1277
c_rt_lib0move(&___nl__im__187, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__im__188));
#line 1277
c_rt_lib0clear(&___nl__im__188);
#line 1277
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__187));
#line 1277
c_rt_lib0clear(&___nl__im__187);
#line 1278
c_rt_lib0clear(&___nl__im__0);
#line 1278
//clear ___nl__bool__1;
#line 1278
c_rt_lib0clear(&___nl__im__3);
#line 1278
c_rt_lib0clear(&___nl__im__4);
#line 1278
c_rt_lib0clear(&___nl__im__7);
#line 1278
//clear ___nl__int__10;
#line 1278
//clear ___nl__int__11;
#line 1278
//clear ___nl__int__12;
#line 1278
//clear ___nl__bool__13;
#line 1278
//clear ___nl__int__14;
#line 1278
c_rt_lib0clear(&___nl__im__15);
#line 1278
//clear ___nl__bool__16;
#line 1278
c_rt_lib0clear(&___nl__im__17);
#line 1278
c_rt_lib0clear(&___nl__im__18);
#line 1278
c_rt_lib0clear(&___nl__im__19);
#line 1278
c_rt_lib0clear(&___nl__im__22);
#line 1278
c_rt_lib0clear(&___nl__im__42);
#line 1278
c_rt_lib0clear(&___nl__im__43);
#line 1278
c_rt_lib0clear(&___nl__im__44);
#line 1278
c_rt_lib0clear(&___nl__im__49);
#line 1278
c_rt_lib0clear(&___nl__im__62);
#line 1278
c_rt_lib0clear(&___nl__im__63);
#line 1278
c_rt_lib0clear(&___nl__im__66);
#line 1278
c_rt_lib0clear(&___nl__im__84);
#line 1278
c_rt_lib0clear(&___nl__im__85);
#line 1278
c_rt_lib0clear(&___nl__im__111);
#line 1278
c_rt_lib0clear(&___nl__im__112);
#line 1278
c_rt_lib0clear(&___nl__im__113);
#line 1278
c_rt_lib0clear(&___nl__im__131);
#line 1278
c_rt_lib0clear(&___nl__im__132);
#line 1278
c_rt_lib0clear(&___nl__im__146);
#line 1278
c_rt_lib0clear(&___nl__im__147);
#line 1278
c_rt_lib0clear(&___nl__im__148);
#line 1278
c_rt_lib0clear(&___nl__im__166);
#line 1278
c_rt_lib0clear(&___nl__im__167);
#line 1278
c_rt_lib0clear(&___nl__im__168);
#line 1278
c_rt_lib0clear(&___nl__im__173);
#line 1278
return ___nl__im__9;
return NULL;
}

ImmT  translator_priv0set_value_of_lvalue(translator0lvalue_values_t0type ___nl__im__0,bool  ___nl__bool__1,translator0state_t0type* ___ref___rec__2) {
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
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
bool  ___nl__bool__30 = false;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
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
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
bool  ___nl__bool__56 = false;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
INT  ___nl__int__59 = 0;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
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
INT  ___nl__int__74 = 0;
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
bool  ___nl__bool__86 = false;
bool  ___nl__bool__87 = false;
INT  ___nl__int__88 = 0;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
INT  ___nl__int__99 = 0;
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
INT  ___nl__int__120 = 0;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
INT  ___nl__int__133 = 0;
#line 1283
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 1284
___nl__int__7 = 1;
#line 1284
___nl__int__6 = ___nl__int__3 - ___nl__int__7;
#line 1284
//clear ___nl__int__7;
#line 1284
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 1284
//clear ___nl__int__6;
#line 1284
___nl__int__10 = 1;
#line 1284
___nl__int__9 = ___nl__int__3 - ___nl__int__10;
#line 1284
//clear ___nl__int__10;
#line 1284
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 1284
//clear ___nl__int__9;
#line 1284
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(219)));
#line 1284
c_rt_lib0clear(&___nl__im__5);
#line 1284
c_rt_lib0clear(&___nl__im__8);
#line 1285
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1285
___nl__int__13 = 1;
#line 1285
___nl__int__13 = -___nl__int__13;
#line 1285
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 1285
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1285
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__12, ___get_global_const(218), ___nl__im__14, ___get_global_const(329), ___nl__im__15));
#line 1285
c_rt_lib0clear(&___nl__im__12);
#line 1285
//clear ___nl__int__13;
#line 1285
c_rt_lib0clear(&___nl__im__14);
#line 1285
c_rt_lib0clear(&___nl__im__15);
#line 1286
___nl__int__17 = 2;
#line 1286
___nl__int__16 = ___nl__int__3 - ___nl__int__17;
#line 1286
//clear ___nl__int__17;
#line 1286
label_2:
;
#line 1286
___nl__int__19 = 0;
#line 1286
___nl__int__20 = ___nl__int__16 >= ___nl__int__19;
#line 1286
___nl__bool__18 = ___nl__int__20;
#line 1286
//clear ___nl__int__19;
#line 1286
//clear ___nl__int__20;
#line 1286
___nl__bool__18 = !___nl__bool__18;
#line 1286
if(___nl__bool__18){ goto label_1;}
#line 1287
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 1287
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(219));
#line 1287
if(___nl__bool__22){ goto label_5;}
#line 1289
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(565));
#line 1289
if(___nl__bool__22){ goto label_6;}
#line 1296
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(255));
#line 1296
if(___nl__bool__22){ goto label_7;}
#line 1298
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(1288));
#line 1298
if(___nl__bool__22){ goto label_8;}
#line 1305
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(370));
#line 1305
if(___nl__bool__22){ goto label_9;}
#line 1314
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(253));
#line 1314
if(___nl__bool__22){ goto label_10;}
#line 1316
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(992));
#line 1316
if(___nl__bool__22){ goto label_11;}
#line 1319
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(259));
#line 1319
if(___nl__bool__22){ goto label_12;}
#line 1321
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(257));
#line 1321
if(___nl__bool__22){ goto label_13;}
#line 1321
c_rt_lib0move(&___nl__im__23,___get_global_const(16));
#line 1321
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__21));
#line 1321
nl_die_arg(___nl__im__23);
#line 1287
label_5:
;
#line 1287
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(219)));
#line 1287
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1288
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 1288
nl_die_arg(___nl__im__26);
#line 1289
goto label_4;
#line 1289
label_6:
;
#line 1289
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(565)));
#line 1289
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 1290
___nl__bool__29 = ___nl__bool__1;
#line 1290
___nl__bool__29 = !___nl__bool__29;
#line 1290
___nl__bool__30 = !___nl__bool__29;
#line 1290
if(___nl__bool__30){ goto label_16;}
#line 1290
___nl__int__32 = 2;
#line 1290
___nl__int__31 = ___nl__int__3 - ___nl__int__32;
#line 1290
//clear ___nl__int__32;
#line 1290
___nl__int__33 = ___nl__int__16 == ___nl__int__31;
#line 1290
___nl__bool__29 = ___nl__int__33;
#line 1290
//clear ___nl__int__31;
#line 1290
//clear ___nl__int__33;
#line 1290
label_16:
;
#line 1290
//clear ___nl__bool__30;
#line 1290
___nl__bool__29 = !___nl__bool__29;
#line 1290
if(___nl__bool__29){ goto label_15;}
#line 1291
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(219)));
#line 1291
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(565)));
#line 1291
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__im__34, ___nl__im__35, ___nl__im__4, ___ref___rec__2));
#line 1291
c_rt_lib0clear(&___nl__im__34);
#line 1291
c_rt_lib0clear(&___nl__im__35);
#line 1292
goto label_14;
#line 1292
label_15:
;
#line 1293
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1293
___nl__int__38 = 1;
#line 1293
___nl__int__38 = -___nl__int__38;
#line 1293
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__38));
#line 1293
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1293
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__37, ___get_global_const(218), ___nl__im__39, ___get_global_const(329), ___nl__im__40));
#line 1293
c_rt_lib0clear(&___nl__im__37);
#line 1293
//clear ___nl__int__38;
#line 1293
c_rt_lib0clear(&___nl__im__39);
#line 1293
c_rt_lib0clear(&___nl__im__40);
#line 1293
c_rt_lib0move(&___nl__im__41,___get_global_const(731));
#line 1293
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(219)));
#line 1293
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__44));
#line 1293
c_rt_lib0clear(&___nl__im__44);
#line 1293
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(565)));
#line 1293
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__46));
#line 1293
c_rt_lib0clear(&___nl__im__46);
#line 1293
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1293
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(3, ___nl__im__43, ___nl__im__45, ___nl__im__47));
#line 1293
c_rt_lib0clear(&___nl__im__43);
#line 1293
c_rt_lib0clear(&___nl__im__45);
#line 1293
c_rt_lib0clear(&___nl__im__47);
#line 1293
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__36, ___nl__im__41, ___nl__im__42, ___ref___rec__2));
#line 1293
c_rt_lib0clear(&___nl__im__36);
#line 1293
c_rt_lib0clear(&___nl__im__41);
#line 1293
c_rt_lib0clear(&___nl__im__42);
#line 1294
goto label_14;
#line 1294
label_14:
;
#line 1294
//clear ___nl__bool__29;
#line 1295
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(219)));
#line 1296
goto label_4;
#line 1296
label_7:
;
#line 1296
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(255)));
#line 1296
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 1297
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(1301)));
#line 1297
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(1300)));
#line 1297
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(565)));
#line 1297
c_rt_lib0delete(translator_priv0release_index(___nl__im__50, ___nl__im__51, ___nl__im__52, ___ref___rec__2));
#line 1297
c_rt_lib0clear(&___nl__im__50);
#line 1297
c_rt_lib0clear(&___nl__im__51);
#line 1297
c_rt_lib0clear(&___nl__im__52);
#line 1298
goto label_4;
#line 1298
label_8:
;
#line 1298
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(1288)));
#line 1298
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 1299
___nl__bool__55 = ___nl__bool__1;
#line 1299
___nl__bool__55 = !___nl__bool__55;
#line 1299
___nl__bool__56 = !___nl__bool__55;
#line 1299
if(___nl__bool__56){ goto label_19;}
#line 1299
___nl__int__58 = 2;
#line 1299
___nl__int__57 = ___nl__int__3 - ___nl__int__58;
#line 1299
//clear ___nl__int__58;
#line 1299
___nl__int__59 = ___nl__int__16 == ___nl__int__57;
#line 1299
___nl__bool__55 = ___nl__int__59;
#line 1299
//clear ___nl__int__57;
#line 1299
//clear ___nl__int__59;
#line 1299
label_19:
;
#line 1299
//clear ___nl__bool__56;
#line 1299
___nl__bool__55 = !___nl__bool__55;
#line 1299
if(___nl__bool__55){ goto label_18;}
#line 1300
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1300
___nl__int__62 = 1;
#line 1300
___nl__int__62 = -___nl__int__62;
#line 1300
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 1300
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1300
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__61, ___get_global_const(218), ___nl__im__63, ___get_global_const(329), ___nl__im__64));
#line 1300
c_rt_lib0clear(&___nl__im__61);
#line 1300
//clear ___nl__int__62;
#line 1300
c_rt_lib0clear(&___nl__im__63);
#line 1300
c_rt_lib0clear(&___nl__im__64);
#line 1300
c_rt_lib0move(&___nl__im__65,___get_global_const(733));
#line 1300
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(219)));
#line 1300
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__68));
#line 1300
c_rt_lib0clear(&___nl__im__68);
#line 1300
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(370)));
#line 1300
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__70));
#line 1300
c_rt_lib0clear(&___nl__im__70);
#line 1300
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1300
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(3, ___nl__im__67, ___nl__im__69, ___nl__im__71));
#line 1300
c_rt_lib0clear(&___nl__im__67);
#line 1300
c_rt_lib0clear(&___nl__im__69);
#line 1300
c_rt_lib0clear(&___nl__im__71);
#line 1300
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__60, ___nl__im__65, ___nl__im__66, ___ref___rec__2));
#line 1300
c_rt_lib0clear(&___nl__im__60);
#line 1300
c_rt_lib0clear(&___nl__im__65);
#line 1300
c_rt_lib0clear(&___nl__im__66);
#line 1301
goto label_17;
#line 1301
label_18:
;
#line 1302
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1302
___nl__int__74 = 1;
#line 1302
___nl__int__74 = -___nl__int__74;
#line 1302
c_rt_lib0move(&___nl__im__75, c_rt_lib0int_new(___nl__int__74));
#line 1302
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1302
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__73, ___get_global_const(218), ___nl__im__75, ___get_global_const(329), ___nl__im__76));
#line 1302
c_rt_lib0clear(&___nl__im__73);
#line 1302
//clear ___nl__int__74;
#line 1302
c_rt_lib0clear(&___nl__im__75);
#line 1302
c_rt_lib0clear(&___nl__im__76);
#line 1302
c_rt_lib0move(&___nl__im__77,___get_global_const(1311));
#line 1302
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(219)));
#line 1302
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__80));
#line 1302
c_rt_lib0clear(&___nl__im__80);
#line 1302
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(370)));
#line 1302
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__82));
#line 1302
c_rt_lib0clear(&___nl__im__82);
#line 1302
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1302
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(3, ___nl__im__79, ___nl__im__81, ___nl__im__83));
#line 1302
c_rt_lib0clear(&___nl__im__79);
#line 1302
c_rt_lib0clear(&___nl__im__81);
#line 1302
c_rt_lib0clear(&___nl__im__83);
#line 1302
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__72, ___nl__im__77, ___nl__im__78, ___ref___rec__2));
#line 1302
c_rt_lib0clear(&___nl__im__72);
#line 1302
c_rt_lib0clear(&___nl__im__77);
#line 1302
c_rt_lib0clear(&___nl__im__78);
#line 1303
goto label_17;
#line 1303
label_17:
;
#line 1303
//clear ___nl__bool__55;
#line 1304
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(219)));
#line 1305
goto label_4;
#line 1305
label_9:
;
#line 1305
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(370)));
#line 1305
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1306
___nl__bool__86 = ___nl__bool__1;
#line 1306
___nl__bool__86 = !___nl__bool__86;
#line 1306
___nl__bool__87 = !___nl__bool__86;
#line 1306
if(___nl__bool__87){ goto label_22;}
#line 1306
___nl__int__89 = 2;
#line 1306
___nl__int__88 = ___nl__int__3 - ___nl__int__89;
#line 1306
//clear ___nl__int__89;
#line 1306
___nl__int__90 = ___nl__int__16 == ___nl__int__88;
#line 1306
___nl__bool__86 = ___nl__int__90;
#line 1306
//clear ___nl__int__88;
#line 1306
//clear ___nl__int__90;
#line 1306
label_22:
;
#line 1306
//clear ___nl__bool__87;
#line 1306
___nl__bool__86 = !___nl__bool__86;
#line 1306
if(___nl__bool__86){ goto label_21;}
#line 1307
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(219)));
#line 1307
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(370)));
#line 1307
c_rt_lib0delete(translator_priv0print_set_value(___nl__im__91, ___nl__im__92, ___nl__im__4, ___ref___rec__2));
#line 1307
c_rt_lib0clear(&___nl__im__91);
#line 1307
c_rt_lib0clear(&___nl__im__92);
#line 1308
goto label_20;
#line 1308
label_21:
;
#line 1309
c_rt_lib0move(&___nl__im__94, nlasm0is_empty(___nl__im__11));
#line 1309
___nl__bool__93 = c_rt_lib0check_true_native(___nl__im__94);
#line 1309
c_rt_lib0clear(&___nl__im__94);
#line 1309
___nl__bool__93 = !___nl__bool__93;
#line 1309
if(___nl__bool__93){ goto label_24;}
#line 1309
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_const(528)));
#line 1309
c_rt_lib0move(&___nl__im__11, translator_priv0new_register(___ref___rec__2, ___nl__im__95));
#line 1309
c_rt_lib0clear(&___nl__im__95);
#line 1309
goto label_23;
#line 1309
label_24:
;
#line 1309
label_23:
;
#line 1309
//clear ___nl__bool__93;
#line 1310
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(370)));
#line 1310
c_rt_lib0delete(translator_priv0load_const(___nl__im__96, ___nl__im__11, ___ref___rec__2));
#line 1310
c_rt_lib0clear(&___nl__im__96);
#line 1311
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1311
___nl__int__99 = 1;
#line 1311
___nl__int__99 = -___nl__int__99;
#line 1311
c_rt_lib0move(&___nl__im__100, c_rt_lib0int_new(___nl__int__99));
#line 1311
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1311
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__98, ___get_global_const(218), ___nl__im__100, ___get_global_const(329), ___nl__im__101));
#line 1311
c_rt_lib0clear(&___nl__im__98);
#line 1311
//clear ___nl__int__99;
#line 1311
c_rt_lib0clear(&___nl__im__100);
#line 1311
c_rt_lib0clear(&___nl__im__101);
#line 1311
c_rt_lib0move(&___nl__im__102,___get_global_const(1311));
#line 1311
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(219)));
#line 1311
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__105));
#line 1311
c_rt_lib0clear(&___nl__im__105);
#line 1311
c_rt_lib0move(&___nl__im__106, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__11));
#line 1311
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 1311
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(3, ___nl__im__104, ___nl__im__106, ___nl__im__107));
#line 1311
c_rt_lib0clear(&___nl__im__104);
#line 1311
c_rt_lib0clear(&___nl__im__106);
#line 1311
c_rt_lib0clear(&___nl__im__107);
#line 1311
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__97, ___nl__im__102, ___nl__im__103, ___ref___rec__2));
#line 1311
c_rt_lib0clear(&___nl__im__97);
#line 1311
c_rt_lib0clear(&___nl__im__102);
#line 1311
c_rt_lib0clear(&___nl__im__103);
#line 1312
goto label_20;
#line 1312
label_20:
;
#line 1312
//clear ___nl__bool__86;
#line 1313
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(219)));
#line 1314
goto label_4;
#line 1314
label_10:
;
#line 1314
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(253)));
#line 1314
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 1315
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(1301)));
#line 1315
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(1300)));
#line 1315
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(563)));
#line 1315
c_rt_lib0delete(translator_priv0release_field(___nl__im__110, ___nl__im__111, ___nl__im__112, ___ref___rec__2));
#line 1315
c_rt_lib0clear(&___nl__im__110);
#line 1315
c_rt_lib0clear(&___nl__im__111);
#line 1315
c_rt_lib0clear(&___nl__im__112);
#line 1316
goto label_4;
#line 1316
label_11:
;
#line 1316
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(992)));
#line 1316
c_rt_lib0copy(&___nl__im__113, ___nl__im__114);
#line 1317
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_const(219)));
#line 1317
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__4));
#line 1317
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_const(535)));
#line 1317
___nl__int__120 = 1;
#line 1317
___nl__int__120 = -___nl__int__120;
#line 1317
c_rt_lib0move(&___nl__im__121, c_rt_lib0int_new(___nl__int__120));
#line 1317
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 1317
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__117, ___get_global_const(74), ___nl__im__118, ___get_global_const(535), ___nl__im__119, ___get_global_const(522), ___nl__im__121, ___get_global_const(540), ___nl__im__122));
#line 1317
c_rt_lib0clear(&___nl__im__117);
#line 1317
c_rt_lib0clear(&___nl__im__118);
#line 1317
c_rt_lib0clear(&___nl__im__119);
#line 1317
//clear ___nl__int__120;
#line 1317
c_rt_lib0clear(&___nl__im__121);
#line 1317
c_rt_lib0clear(&___nl__im__122);
#line 1317
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__116));
#line 1317
c_rt_lib0clear(&___nl__im__116);
#line 1317
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__115));
#line 1317
c_rt_lib0clear(&___nl__im__115);
#line 1318
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_const(219)));
#line 1319
goto label_4;
#line 1319
label_12:
;
#line 1319
c_rt_lib0move(&___nl__im__124, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(259)));
#line 1319
c_rt_lib0copy(&___nl__im__123, ___nl__im__124);
#line 1320
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(1301)));
#line 1320
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(1300)));
#line 1320
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(535)));
#line 1320
c_rt_lib0delete(translator_priv0release_variant(___nl__im__125, ___nl__im__126, ___nl__im__127, ___ref___rec__2));
#line 1320
c_rt_lib0clear(&___nl__im__125);
#line 1320
c_rt_lib0clear(&___nl__im__126);
#line 1320
c_rt_lib0clear(&___nl__im__127);
#line 1321
goto label_4;
#line 1321
label_13:
;
#line 1321
c_rt_lib0move(&___nl__im__129, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(257)));
#line 1321
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 1322
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_const(1301)));
#line 1322
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_const(1300)));
#line 1322
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_const(565)));
#line 1322
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__130, ___nl__im__131, ___nl__im__132, ___ref___rec__2));
#line 1322
c_rt_lib0clear(&___nl__im__130);
#line 1322
c_rt_lib0clear(&___nl__im__131);
#line 1322
c_rt_lib0clear(&___nl__im__132);
#line 1323
goto label_4;
#line 1323
label_4:
;
#line 1323
c_rt_lib0clear(&___nl__im__21);
#line 1323
//clear ___nl__bool__22;
#line 1323
c_rt_lib0clear(&___nl__im__23);
#line 1323
c_rt_lib0clear(&___nl__im__24);
#line 1323
c_rt_lib0clear(&___nl__im__25);
#line 1323
c_rt_lib0clear(&___nl__im__26);
#line 1323
c_rt_lib0clear(&___nl__im__27);
#line 1323
c_rt_lib0clear(&___nl__im__28);
#line 1323
c_rt_lib0clear(&___nl__im__48);
#line 1323
c_rt_lib0clear(&___nl__im__49);
#line 1323
c_rt_lib0clear(&___nl__im__53);
#line 1323
c_rt_lib0clear(&___nl__im__54);
#line 1323
c_rt_lib0clear(&___nl__im__84);
#line 1323
c_rt_lib0clear(&___nl__im__85);
#line 1323
c_rt_lib0clear(&___nl__im__108);
#line 1323
c_rt_lib0clear(&___nl__im__109);
#line 1323
c_rt_lib0clear(&___nl__im__113);
#line 1323
c_rt_lib0clear(&___nl__im__114);
#line 1323
c_rt_lib0clear(&___nl__im__123);
#line 1323
c_rt_lib0clear(&___nl__im__124);
#line 1323
c_rt_lib0clear(&___nl__im__128);
#line 1323
c_rt_lib0clear(&___nl__im__129);
#line 1286
___nl__int__133 = 1;
#line 1286
___nl__int__16 = ___nl__int__16 - ___nl__int__133;
#line 1286
//clear ___nl__int__133;
#line 1324
goto label_2;
#line 1324
label_1:
;
#line 1324
c_rt_lib0clear(&___nl__im__0);
#line 1324
//clear ___nl__bool__1;
#line 1324
//clear ___nl__int__3;
#line 1324
c_rt_lib0clear(&___nl__im__4);
#line 1324
c_rt_lib0clear(&___nl__im__11);
#line 1324
//clear ___nl__int__16;
#line 1324
//clear ___nl__bool__18;
#line 1324
c_rt_lib0clear(&___nl__im__21);
#line 1324
//clear ___nl__bool__22;
#line 1324
c_rt_lib0clear(&___nl__im__23);
#line 1324
c_rt_lib0clear(&___nl__im__24);
#line 1324
c_rt_lib0clear(&___nl__im__25);
#line 1324
c_rt_lib0clear(&___nl__im__26);
#line 1324
c_rt_lib0clear(&___nl__im__27);
#line 1324
c_rt_lib0clear(&___nl__im__28);
#line 1324
c_rt_lib0clear(&___nl__im__48);
#line 1324
c_rt_lib0clear(&___nl__im__49);
#line 1324
c_rt_lib0clear(&___nl__im__53);
#line 1324
c_rt_lib0clear(&___nl__im__54);
#line 1324
c_rt_lib0clear(&___nl__im__84);
#line 1324
c_rt_lib0clear(&___nl__im__85);
#line 1324
c_rt_lib0clear(&___nl__im__108);
#line 1324
c_rt_lib0clear(&___nl__im__109);
#line 1324
c_rt_lib0clear(&___nl__im__113);
#line 1324
c_rt_lib0clear(&___nl__im__114);
#line 1324
c_rt_lib0clear(&___nl__im__123);
#line 1324
c_rt_lib0clear(&___nl__im__124);
#line 1324
c_rt_lib0clear(&___nl__im__128);
#line 1324
c_rt_lib0clear(&___nl__im__129);
#line 1324
return NULL;
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
#line 1328
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 1329
___nl__int__3 = 0;
#line 1330
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(128)));
#line 1330
___nl__int__6 = 0;
#line 1330
___nl__int__7 = 1;
#line 1330
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 1330
label_3:
;
#line 1330
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 1330
___nl__bool__9 = ___nl__int__10;
#line 1330
if(___nl__bool__9){ goto label_1;}
#line 1330
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 1330
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 1331
___nl__int__13 = 0;
#line 1331
___nl__int__14 = ___nl__int__3 > ___nl__int__13;
#line 1331
___nl__bool__12 = ___nl__int__14;
#line 1331
//clear ___nl__int__13;
#line 1331
//clear ___nl__int__14;
#line 1331
___nl__bool__12 = !___nl__bool__12;
#line 1331
if(___nl__bool__12){ goto label_5;}
#line 1331
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1331
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 1331
c_rt_lib0clear(&___nl__im__15);
#line 1331
goto label_4;
#line 1331
label_5:
;
#line 1331
label_4:
;
#line 1331
//clear ___nl__bool__12;
#line 1332
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__5));
#line 1333
___nl__int__16 = 1;
#line 1333
___nl__int__3 = ___nl__int__3 + ___nl__int__16;
#line 1333
//clear ___nl__int__16;
#line 1333
c_rt_lib0clear(&___nl__im__5);
#line 1334
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1334
goto label_3;
#line 1334
label_1:
;
#line 1335
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(1007)));
#line 1335
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(1006));
#line 1335
if(___nl__bool__18){ goto label_7;}
#line 1337
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(1005));
#line 1337
if(___nl__bool__18){ goto label_8;}
#line 1337
c_rt_lib0move(&___nl__im__19,___get_global_const(16));
#line 1337
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__17));
#line 1337
nl_die_arg(___nl__im__19);
#line 1335
label_7:
;
#line 1336
c_rt_lib0move(&___nl__im__20, string0lf());
#line 1336
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__20));
#line 1336
c_rt_lib0clear(&___nl__im__20);
#line 1337
goto label_6;
#line 1337
label_8:
;
#line 1338
goto label_6;
#line 1338
label_6:
;
#line 1339
c_rt_lib0clear(&___nl__im__0);
#line 1339
//clear ___nl__int__3;
#line 1339
c_rt_lib0clear(&___nl__im__4);
#line 1339
c_rt_lib0clear(&___nl__im__5);
#line 1339
//clear ___nl__int__6;
#line 1339
//clear ___nl__int__7;
#line 1339
//clear ___nl__int__8;
#line 1339
//clear ___nl__bool__9;
#line 1339
//clear ___nl__int__10;
#line 1339
c_rt_lib0clear(&___nl__im__11);
#line 1339
c_rt_lib0clear(&___nl__im__17);
#line 1339
//clear ___nl__bool__18;
#line 1339
c_rt_lib0clear(&___nl__im__19);
#line 1339
return ___nl__im__2;
return NULL;
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
#line 1343
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(515)));
#line 1343
c_rt_lib0move(&___nl__im__5,___get_global_const(989));
#line 1343
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 1343
c_rt_lib0clear(&___nl__im__4);
#line 1343
c_rt_lib0clear(&___nl__im__5);
#line 1343
___nl__bool__3 = !___nl__bool__3;
#line 1343
___nl__bool__3 = !___nl__bool__3;
#line 1343
if(___nl__bool__3){ goto label_2;}
#line 1343
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 1343
nl_die_arg(___nl__im__6);
#line 1343
goto label_1;
#line 1343
label_2:
;
#line 1343
label_1:
;
#line 1343
//clear ___nl__bool__3;
#line 1343
c_rt_lib0clear(&___nl__im__6);
#line 1344
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__2);
#line 1345
___nl__int__8 = translator_priv0get_sim_label(___ref___rec__2);
#line 1346
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(975)));
#line 1346
c_rt_lib0move(&___nl__im__10, translator_priv0dest_val(___nl__im__11, ___ref___rec__2));
#line 1346
c_rt_lib0clear(&___nl__im__11);
#line 1346
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 1346
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__10, ___nl__im__12, ___ref___rec__2));
#line 1346
c_rt_lib0clear(&___nl__im__10);
#line 1346
c_rt_lib0clear(&___nl__im__12);
#line 1347
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__8, ___nl__im__9, ___ref___rec__2));
#line 1348
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(977)));
#line 1348
c_rt_lib0delete(translator_priv0print_val(___nl__im__13, ___nl__im__1, ___ref___rec__2));
#line 1348
c_rt_lib0clear(&___nl__im__13);
#line 1349
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__7));
#line 1349
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__15));
#line 1349
c_rt_lib0clear(&___nl__im__15);
#line 1349
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__14));
#line 1349
c_rt_lib0clear(&___nl__im__14);
#line 1350
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__8, ___ref___rec__2));
#line 1351
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(976)));
#line 1351
c_rt_lib0delete(translator_priv0print_val(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1351
c_rt_lib0clear(&___nl__im__16);
#line 1352
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__2));
#line 1352
c_rt_lib0clear(&___nl__im__0);
#line 1352
c_rt_lib0clear(&___nl__im__1);
#line 1352
//clear ___nl__int__7;
#line 1352
//clear ___nl__int__8;
#line 1352
c_rt_lib0clear(&___nl__im__9);
#line 1352
return NULL;
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
#line 1356
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1356
c_rt_lib0move(&___nl__im__3, translator_priv0new_register(___ref___rec__2, ___nl__im__4));
#line 1356
c_rt_lib0clear(&___nl__im__4);
#line 1357
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__0));
#line 1357
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 1357
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__8));
#line 1357
c_rt_lib0clear(&___nl__im__8);
#line 1357
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(221), ___nl__im__1, ___get_global_const(219), ___nl__im__6, ___get_global_const(205), ___nl__im__7));
#line 1357
c_rt_lib0clear(&___nl__im__6);
#line 1357
c_rt_lib0clear(&___nl__im__7);
#line 1357
c_rt_lib0delete(translator_priv0print_val(___nl__im__5, ___nl__im__3, ___ref___rec__2));
#line 1357
c_rt_lib0clear(&___nl__im__5);
#line 1358
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__3));
#line 1358
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 1358
c_rt_lib0clear(&___nl__im__9);
#line 1358
c_rt_lib0clear(&___nl__im__0);
#line 1358
c_rt_lib0clear(&___nl__im__1);
#line 1358
c_rt_lib0clear(&___nl__im__3);
#line 1358
return NULL;
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
#line 1362
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1363
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1363
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(948));
#line 1363
c_rt_lib0clear(&___nl__im__4);
#line 1363
___nl__bool__3 = !___nl__bool__3;
#line 1363
___nl__bool__3 = !___nl__bool__3;
#line 1363
if(___nl__bool__3){ goto label_2;}
#line 1364
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__0, ___ref___rec__1));
#line 1365
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 1365
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1365
___nl__im_ptr__10 = NULL;
#line 1365
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(429)));
#line 1365
c_rt_lib0clear(&___nl__im__9);
#line 1365
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1365
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1365
___nl__im_ptr__13 = NULL;
#line 1365
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(388)));
#line 1365
c_rt_lib0clear(&___nl__im__12);
#line 1365
c_rt_lib0move(&___nl__im__7, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__11));
#line 1365
c_rt_lib0clear(&___nl__im__8);
#line 1365
c_rt_lib0clear(&___nl__im__11);
#line 1365
c_rt_lib0move(&___nl__im__6, translator_priv0get_cast(___nl__im__5, ___nl__im__7, ___ref___rec__1));
#line 1365
c_rt_lib0clear(&___nl__im__7);
#line 1366
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__6));
#line 1367
goto label_1;
#line 1367
label_2:
;
#line 1367
label_1:
;
#line 1367
//clear ___nl__bool__3;
#line 1367
c_rt_lib0clear(&___nl__im__5);
#line 1367
c_rt_lib0clear(&___nl__im__6);
#line 1368
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__2, ___ref___rec__1));
#line 1368
c_rt_lib0clear(&___nl__im__0);
#line 1368
c_rt_lib0clear(&___nl__im__2);
#line 1368
return NULL;
return NULL;
}

ImmT  translator_priv0print_safe_return(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT * ___nl__im_ptr__9 = NULL;
bool  ___nl__bool__10 = false;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT * ___nl__im_ptr__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT * ___nl__im_ptr__31 = NULL;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
bool  ___nl__bool__36 = false;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
bool  ___nl__bool__40 = false;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
#line 1372
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1372
___nl__int__4 = 1;
#line 1372
___nl__int__4 = -___nl__int__4;
#line 1372
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__4));
#line 1372
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1372
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__3, ___get_global_const(218), ___nl__im__5, ___get_global_const(329), ___nl__im__6));
#line 1372
c_rt_lib0clear(&___nl__im__3);
#line 1372
//clear ___nl__int__4;
#line 1372
c_rt_lib0clear(&___nl__im__5);
#line 1372
c_rt_lib0clear(&___nl__im__6);
#line 1373
___nl__im_ptr__9 = &((*___ref___rec__1).result0field);
#line 1373
c_rt_lib0copy(&___nl__im__8, (*___nl__im_ptr__9));
#line 1373
___nl__im_ptr__9 = NULL;
#line 1373
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(214)));
#line 1373
c_rt_lib0clear(&___nl__im__8);
#line 1374
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(224));
#line 1374
___nl__bool__10 = !___nl__bool__10;
#line 1374
if(___nl__bool__10){ goto label_2;}
#line 1375
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(224)));
#line 1376
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(218)));
#line 1376
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 1376
c_rt_lib0clear(&___nl__im__14);
#line 1376
___nl__int__15 = c_rt_lib0array_len(___nl__im__7);
#line 1376
___nl__int__16 = ___nl__int__13 < ___nl__int__15;
#line 1376
___nl__bool__11 = ___nl__int__16;
#line 1376
//clear ___nl__int__13;
#line 1376
//clear ___nl__int__15;
#line 1376
//clear ___nl__int__16;
#line 1376
___nl__bool__12 = !___nl__bool__11;
#line 1376
if(___nl__bool__12){ goto label_5;}
#line 1376
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(218)));
#line 1376
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 1376
c_rt_lib0clear(&___nl__im__20);
#line 1376
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__7, ___nl__int__19));
#line 1376
//clear ___nl__int__19;
#line 1376
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(331)));
#line 1376
c_rt_lib0clear(&___nl__im__18);
#line 1376
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(40));
#line 1376
c_rt_lib0clear(&___nl__im__17);
#line 1376
label_5:
;
#line 1376
//clear ___nl__bool__12;
#line 1376
___nl__bool__11 = !___nl__bool__11;
#line 1376
if(___nl__bool__11){ goto label_4;}
#line 1377
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 1377
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 1377
___nl__im_ptr__24 = NULL;
#line 1377
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(429)));
#line 1377
c_rt_lib0clear(&___nl__im__23);
#line 1377
___nl__im_ptr__27 = &((*___ref___rec__1).logic0field);
#line 1377
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 1377
___nl__im_ptr__27 = NULL;
#line 1377
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(388)));
#line 1377
c_rt_lib0clear(&___nl__im__26);
#line 1377
c_rt_lib0move(&___nl__im__21, translator_priv0var_type_to_reg_type(___nl__im__22, ___nl__im__25));
#line 1377
c_rt_lib0clear(&___nl__im__22);
#line 1377
c_rt_lib0clear(&___nl__im__25);
#line 1377
c_rt_lib0move(&___nl__im__2, translator_priv0new_register(___ref___rec__1, ___nl__im__21));
#line 1377
c_rt_lib0clear(&___nl__im__21);
#line 1378
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(224)));
#line 1378
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__28, ___ref___rec__1));
#line 1378
c_rt_lib0clear(&___nl__im__28);
#line 1379
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__2));
#line 1380
goto label_3;
#line 1380
label_4:
;
#line 1380
label_3:
;
#line 1380
//clear ___nl__bool__11;
#line 1381
goto label_1;
#line 1381
label_2:
;
#line 1381
label_1:
;
#line 1381
//clear ___nl__bool__10;
#line 1382
___nl__im_ptr__31 = &((*___ref___rec__1).logic0field);
#line 1382
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 1382
___nl__im_ptr__31 = NULL;
#line 1382
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(215)));
#line 1382
c_rt_lib0clear(&___nl__im__30);
#line 1382
___nl__int__33 = 0;
#line 1382
___nl__int__34 = 1;
#line 1382
___nl__int__35 = c_rt_lib0array_len(___nl__im__29);
#line 1382
label_8:
;
#line 1382
___nl__int__37 = ___nl__int__33 >= ___nl__int__35;
#line 1382
___nl__bool__36 = ___nl__int__37;
#line 1382
if(___nl__bool__36){ goto label_6;}
#line 1382
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__29, ___nl__int__33));
#line 1382
c_rt_lib0copy(&___nl__im__32, ___nl__im__38);
#line 1383
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(218)));
#line 1383
___nl__int__41 = getIntFromImm(___nl__im__42);
#line 1383
c_rt_lib0clear(&___nl__im__42);
#line 1383
___nl__int__43 = c_rt_lib0array_len(___nl__im__7);
#line 1383
___nl__int__44 = ___nl__int__41 < ___nl__int__43;
#line 1383
___nl__bool__39 = ___nl__int__44;
#line 1383
//clear ___nl__int__41;
#line 1383
//clear ___nl__int__43;
#line 1383
//clear ___nl__int__44;
#line 1383
___nl__bool__40 = !___nl__bool__39;
#line 1383
if(___nl__bool__40){ goto label_11;}
#line 1383
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(218)));
#line 1383
___nl__int__47 = getIntFromImm(___nl__im__48);
#line 1383
c_rt_lib0clear(&___nl__im__48);
#line 1383
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__7, ___nl__int__47));
#line 1383
//clear ___nl__int__47;
#line 1383
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(331)));
#line 1383
c_rt_lib0clear(&___nl__im__46);
#line 1383
___nl__bool__39 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(40));
#line 1383
c_rt_lib0clear(&___nl__im__45);
#line 1383
label_11:
;
#line 1383
//clear ___nl__bool__40;
#line 1383
___nl__bool__39 = !___nl__bool__39;
#line 1383
if(___nl__bool__39){ goto label_10;}
#line 1383
goto label_7;
#line 1383
goto label_9;
#line 1383
label_10:
;
#line 1383
label_9:
;
#line 1383
//clear ___nl__bool__39;
#line 1384
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(218)));
#line 1384
___nl__int__50 = getIntFromImm(___nl__im__51);
#line 1384
c_rt_lib0clear(&___nl__im__51);
#line 1384
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(218)));
#line 1384
___nl__int__52 = getIntFromImm(___nl__im__53);
#line 1384
c_rt_lib0clear(&___nl__im__53);
#line 1384
___nl__int__54 = ___nl__int__50 == ___nl__int__52;
#line 1384
___nl__bool__49 = ___nl__int__54;
#line 1384
//clear ___nl__int__50;
#line 1384
//clear ___nl__int__52;
#line 1384
//clear ___nl__int__54;
#line 1384
___nl__bool__49 = !___nl__bool__49;
#line 1384
if(___nl__bool__49){ goto label_13;}
#line 1384
goto label_7;
#line 1384
goto label_12;
#line 1384
label_13:
;
#line 1384
label_12:
;
#line 1384
//clear ___nl__bool__49;
#line 1385
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__32, ___ref___rec__1));
#line 1385
c_rt_lib0clear(&___nl__im__32);
#line 1385
label_7:
;
#line 1386
___nl__int__33 = ___nl__int__33 + ___nl__int__34;
#line 1386
goto label_8;
#line 1386
label_6:
;
#line 1387
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__0));
#line 1387
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__55));
#line 1387
c_rt_lib0clear(&___nl__im__55);
#line 1387
c_rt_lib0clear(&___nl__im__0);
#line 1387
c_rt_lib0clear(&___nl__im__2);
#line 1387
c_rt_lib0clear(&___nl__im__7);
#line 1387
c_rt_lib0clear(&___nl__im__29);
#line 1387
c_rt_lib0clear(&___nl__im__32);
#line 1387
//clear ___nl__int__33;
#line 1387
//clear ___nl__int__34;
#line 1387
//clear ___nl__int__35;
#line 1387
//clear ___nl__bool__36;
#line 1387
//clear ___nl__int__37;
#line 1387
c_rt_lib0clear(&___nl__im__38);
#line 1387
return NULL;
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
#line 1391
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1391
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(464));
#line 1391
c_rt_lib0clear(&___nl__im__3);
#line 1391
___nl__bool__2 = !___nl__bool__2;
#line 1391
if(___nl__bool__2){ goto label_2;}
#line 1392
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1392
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1392
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(464)));
#line 1392
c_rt_lib0clear(&___nl__im__6);
#line 1392
c_rt_lib0clear(&___nl__im__7);
#line 1392
c_rt_lib0move(&___nl__im__4, translator_priv0get_var_register(___nl__im__5, ___ref___rec__1));
#line 1392
c_rt_lib0clear(&___nl__im__5);
#line 1392
c_rt_lib0clear(&___nl__im__0);
#line 1392
//clear ___nl__bool__2;
#line 1392
return ___nl__im__4;
#line 1393
goto label_1;
#line 1393
label_2:
;
#line 1393
label_1:
;
#line 1393
//clear ___nl__bool__2;
#line 1393
c_rt_lib0clear(&___nl__im__4);
#line 1394
c_rt_lib0move(&___nl__im__8, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1395
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1396
label_4:
;
#line 1396
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(7));
#line 1396
___nl__bool__10 = !___nl__bool__10;
#line 1396
if(___nl__bool__10){ goto label_3;}
#line 1397
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1397
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1397
___nl__im_ptr__13 = NULL;
#line 1397
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(388)));
#line 1397
c_rt_lib0clear(&___nl__im__12);
#line 1397
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(7)));
#line 1397
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__11, ___nl__im__14));
#line 1397
c_rt_lib0clear(&___nl__im__11);
#line 1397
c_rt_lib0clear(&___nl__im__14);
#line 1398
goto label_4;
#line 1398
label_3:
;
#line 1400
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1400
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(234));
#line 1400
c_rt_lib0clear(&___nl__im__18);
#line 1400
___nl__bool__17 = !___nl__bool__16;
#line 1400
if(___nl__bool__17){ goto label_7;}
#line 1400
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1400
___nl__im_ptr__22 = &((*___ref___rec__1).logic0field);
#line 1400
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1400
___nl__im_ptr__22 = NULL;
#line 1400
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(388)));
#line 1400
c_rt_lib0clear(&___nl__im__21);
#line 1400
___nl__bool__16 = tct0is_own_type(___nl__im__19, ___nl__im__20);
#line 1400
c_rt_lib0clear(&___nl__im__19);
#line 1400
c_rt_lib0clear(&___nl__im__20);
#line 1400
label_7:
;
#line 1400
//clear ___nl__bool__17;
#line 1400
___nl__bool__16 = !___nl__bool__16;
#line 1400
if(___nl__bool__16){ goto label_6;}
#line 1401
c_rt_lib0move(&___nl__im__15, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__8));
#line 1402
goto label_5;
#line 1402
label_6:
;
#line 1403
c_rt_lib0move(&___nl__im__15, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 1404
goto label_5;
#line 1404
label_5:
;
#line 1404
//clear ___nl__bool__16;
#line 1405
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__15, ___ref___rec__1));
#line 1406
c_rt_lib0clear(&___nl__im__0);
#line 1406
c_rt_lib0clear(&___nl__im__8);
#line 1406
c_rt_lib0clear(&___nl__im__9);
#line 1406
//clear ___nl__bool__10;
#line 1406
return ___nl__im__15;
return NULL;
}

nlasm0reg_t0type translator_priv0def_val(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
#line 1411
c_rt_lib0move(&___nl__im__5, nlasm0is_empty(___nl__im__1));
#line 1411
___nl__bool__4 = c_rt_lib0check_true_native(___nl__im__5);
#line 1411
c_rt_lib0clear(&___nl__im__5);
#line 1411
___nl__bool__4 = !___nl__bool__4;
#line 1411
if(___nl__bool__4){ goto label_2;}
#line 1411
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 1411
goto label_1;
#line 1411
label_2:
;
#line 1411
label_1:
;
#line 1411
//clear ___nl__bool__4;
#line 1412
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__3));
#line 1413
c_rt_lib0clear(&___nl__im__0);
#line 1413
c_rt_lib0clear(&___nl__im__2);
#line 1413
return ___nl__im__1;
return NULL;
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
#line 1417
c_rt_lib0move(&___nl__im__2, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1418
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1418
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(464));
#line 1418
c_rt_lib0clear(&___nl__im__4);
#line 1418
___nl__bool__3 = !___nl__bool__3;
#line 1418
if(___nl__bool__3){ goto label_2;}
#line 1419
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1419
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1419
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(464)));
#line 1419
c_rt_lib0clear(&___nl__im__7);
#line 1419
c_rt_lib0clear(&___nl__im__8);
#line 1419
c_rt_lib0move(&___nl__im__5, translator_priv0get_var_register(___nl__im__6, ___ref___rec__1));
#line 1419
c_rt_lib0clear(&___nl__im__6);
#line 1419
c_rt_lib0clear(&___nl__im__0);
#line 1419
c_rt_lib0clear(&___nl__im__2);
#line 1419
//clear ___nl__bool__3;
#line 1419
return ___nl__im__5;
#line 1420
goto label_1;
#line 1420
label_2:
;
#line 1420
label_1:
;
#line 1420
//clear ___nl__bool__3;
#line 1420
c_rt_lib0clear(&___nl__im__5);
#line 1423
c_rt_lib0move(&___nl__im__9, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1424
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1424
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1424
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1424
___nl__im_ptr__14 = NULL;
#line 1424
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(388)));
#line 1424
c_rt_lib0clear(&___nl__im__13);
#line 1424
___nl__bool__10 = tct0is_own_type(___nl__im__11, ___nl__im__12);
#line 1424
c_rt_lib0clear(&___nl__im__11);
#line 1424
c_rt_lib0clear(&___nl__im__12);
#line 1424
___nl__bool__10 = !___nl__bool__10;
#line 1424
if(___nl__bool__10){ goto label_4;}
#line 1425
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1426
goto label_3;
#line 1426
label_4:
;
#line 1427
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1428
goto label_3;
#line 1428
label_3:
;
#line 1428
//clear ___nl__bool__10;
#line 1430
c_rt_lib0clear(&___nl__im__0);
#line 1430
c_rt_lib0clear(&___nl__im__2);
#line 1430
return ___nl__im__9;
return NULL;
}

nlasm0reg_t0type translator_priv0get_var_register(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 1434
___nl__im_ptr__5 = &((*___ref___rec__1).logic0field);
#line 1434
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1434
___nl__im_ptr__5 = NULL;
#line 1434
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(785)));
#line 1434
c_rt_lib0clear(&___nl__im__4);
#line 1434
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__0));
#line 1434
c_rt_lib0clear(&___nl__im__3);
#line 1434
c_rt_lib0clear(&___nl__im__0);
#line 1434
return ___nl__im__2;
return NULL;
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
#line 1440
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(219));
#line 1440
if(___nl__bool__5){ goto label_2;}
#line 1442
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(392));
#line 1442
if(___nl__bool__5){ goto label_3;}
#line 1442
c_rt_lib0move(&___nl__im__6,___get_global_const(16));
#line 1442
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__3));
#line 1442
nl_die_arg(___nl__im__6);
#line 1440
label_2:
;
#line 1441
c_rt_lib0move(&___nl__im__4, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1442
goto label_1;
#line 1442
label_3:
;
#line 1443
c_rt_lib0move(&___nl__im__4, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__2));
#line 1444
goto label_1;
#line 1444
label_1:
;
#line 1445
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1445
c_rt_lib0move(&___nl__im__8,___get_global_const(785));
#line 1445
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___nl__im_ptr__7), ___nl__im__8));
#line 1445
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__0, ___nl__im__4));
#line 1445
c_rt_lib0move(&___nl__string__9,___get_global_const(785));
#line 1445
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__7, ___nl__string__9, ___nl__im__8));
#line 1445
___nl__im_ptr__7 = NULL;
#line 1445
c_rt_lib0clear(&___nl__im__8);
#line 1445
c_rt_lib0clear(&___nl__string__9);
#line 1446
___nl__im_ptr__10 = &((*___ref___rec__1).debug0field);
#line 1446
c_rt_lib0move(&___nl__im__11,___get_global_const(798));
#line 1446
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 1446
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__0, ___nl__im__4));
#line 1446
c_rt_lib0move(&___nl__string__12,___get_global_const(798));
#line 1446
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__12, ___nl__im__11));
#line 1446
___nl__im_ptr__10 = NULL;
#line 1446
c_rt_lib0clear(&___nl__im__11);
#line 1446
c_rt_lib0clear(&___nl__string__12);
#line 1447
c_rt_lib0clear(&___nl__im__0);
#line 1447
c_rt_lib0clear(&___nl__im__2);
#line 1447
c_rt_lib0clear(&___nl__im__3);
#line 1447
//clear ___nl__bool__5;
#line 1447
c_rt_lib0clear(&___nl__im__6);
#line 1447
return ___nl__im__4;
return NULL;
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
#line 1451
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1451
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1451
___nl__im_ptr__5 = NULL;
#line 1451
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(215)));
#line 1451
c_rt_lib0clear(&___nl__im__4);
#line 1451
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1451
c_rt_lib0clear(&___nl__im__3);
#line 1452
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1452
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(219)));
#line 1452
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__1, ___get_global_const(218), ___nl__im__7, ___get_global_const(329), ___nl__im__8));
#line 1452
c_rt_lib0clear(&___nl__im__7);
#line 1452
c_rt_lib0clear(&___nl__im__8);
#line 1453
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1453
c_rt_lib0move(&___nl__im__10,___get_global_const(215));
#line 1453
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1453
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1453
c_rt_lib0move(&___nl__string__11,___get_global_const(215));
#line 1453
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1453
___nl__im_ptr__9 = NULL;
#line 1453
c_rt_lib0clear(&___nl__im__10);
#line 1453
c_rt_lib0clear(&___nl__string__11);
#line 1454
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1454
c_rt_lib0move(&___nl__im__13,___get_global_const(432));
#line 1454
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1454
___nl__int__14 = 1;
#line 1454
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1454
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1454
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1454
c_rt_lib0move(&___nl__string__17,___get_global_const(432));
#line 1454
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1454
___nl__im_ptr__12 = NULL;
#line 1454
c_rt_lib0clear(&___nl__im__13);
#line 1454
//clear ___nl__int__14;
#line 1454
//clear ___nl__int__15;
#line 1454
//clear ___nl__int__16;
#line 1454
c_rt_lib0clear(&___nl__string__17);
#line 1455
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1455
c_rt_lib0move(&___nl__im__19,___get_global_const(1293));
#line 1455
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1455
___nl__bool__20 = true;
#line 1455
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1455
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1455
c_rt_lib0move(&___nl__string__22,___get_global_const(1293));
#line 1455
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1455
___nl__im_ptr__18 = NULL;
#line 1455
c_rt_lib0clear(&___nl__im__19);
#line 1455
c_rt_lib0clear(&___nl__im__21);
#line 1455
c_rt_lib0clear(&___nl__string__22);
#line 1456
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1456
c_rt_lib0move(&___nl__im__24,___get_global_const(215));
#line 1456
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1456
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1456
c_rt_lib0move(&___nl__string__25,___get_global_const(215));
#line 1456
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1456
___nl__im_ptr__23 = NULL;
#line 1456
c_rt_lib0clear(&___nl__im__24);
#line 1456
c_rt_lib0clear(&___nl__string__25);
#line 1457
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1457
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1457
___nl__im_ptr__29 = NULL;
#line 1457
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(215)));
#line 1457
c_rt_lib0clear(&___nl__im__28);
#line 1457
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1457
c_rt_lib0clear(&___nl__im__27);
#line 1457
c_rt_lib0clear(&___nl__im__1);
#line 1457
//clear ___nl__int__2;
#line 1457
c_rt_lib0clear(&___nl__im__6);
#line 1457
return ___nl__im__26;
return NULL;
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
#line 1461
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1461
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1461
___nl__im_ptr__5 = NULL;
#line 1461
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(215)));
#line 1461
c_rt_lib0clear(&___nl__im__4);
#line 1461
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1461
c_rt_lib0clear(&___nl__im__3);
#line 1462
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1462
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(392)));
#line 1462
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(205), ___nl__im__1, ___get_global_const(218), ___nl__im__7, ___get_global_const(329), ___nl__im__8));
#line 1462
c_rt_lib0clear(&___nl__im__7);
#line 1462
c_rt_lib0clear(&___nl__im__8);
#line 1463
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1463
c_rt_lib0move(&___nl__im__10,___get_global_const(215));
#line 1463
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1463
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1463
c_rt_lib0move(&___nl__string__11,___get_global_const(215));
#line 1463
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1463
___nl__im_ptr__9 = NULL;
#line 1463
c_rt_lib0clear(&___nl__im__10);
#line 1463
c_rt_lib0clear(&___nl__string__11);
#line 1464
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1464
c_rt_lib0move(&___nl__im__13,___get_global_const(432));
#line 1464
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1464
___nl__int__14 = 1;
#line 1464
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1464
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1464
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1464
c_rt_lib0move(&___nl__string__17,___get_global_const(432));
#line 1464
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1464
___nl__im_ptr__12 = NULL;
#line 1464
c_rt_lib0clear(&___nl__im__13);
#line 1464
//clear ___nl__int__14;
#line 1464
//clear ___nl__int__15;
#line 1464
//clear ___nl__int__16;
#line 1464
c_rt_lib0clear(&___nl__string__17);
#line 1465
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1465
c_rt_lib0move(&___nl__im__19,___get_global_const(1293));
#line 1465
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1465
___nl__bool__20 = true;
#line 1465
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1465
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1465
c_rt_lib0move(&___nl__string__22,___get_global_const(1293));
#line 1465
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1465
___nl__im_ptr__18 = NULL;
#line 1465
c_rt_lib0clear(&___nl__im__19);
#line 1465
c_rt_lib0clear(&___nl__im__21);
#line 1465
c_rt_lib0clear(&___nl__string__22);
#line 1466
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1466
c_rt_lib0move(&___nl__im__24,___get_global_const(215));
#line 1466
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1466
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1466
c_rt_lib0move(&___nl__string__25,___get_global_const(215));
#line 1466
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1466
___nl__im_ptr__23 = NULL;
#line 1466
c_rt_lib0clear(&___nl__im__24);
#line 1466
c_rt_lib0clear(&___nl__string__25);
#line 1467
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1467
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1467
___nl__im_ptr__29 = NULL;
#line 1467
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(215)));
#line 1467
c_rt_lib0clear(&___nl__im__28);
#line 1467
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1467
c_rt_lib0clear(&___nl__im__27);
#line 1467
c_rt_lib0clear(&___nl__im__1);
#line 1467
//clear ___nl__int__2;
#line 1467
c_rt_lib0clear(&___nl__im__6);
#line 1467
return ___nl__im__26;
return NULL;
}

translator0function_logic_t0type translator_priv0save_registers(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 1471
___nl__im_ptr__2 = &((*___ref___rec__0).logic0field);
#line 1471
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 1471
___nl__im_ptr__2 = NULL;
#line 1471
return ___nl__im__1;
return NULL;
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
#line 1475
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(329)));
#line 1475
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(219));
#line 1475
if(___nl__bool__3){ goto label_2;}
#line 1477
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(392));
#line 1477
if(___nl__bool__3){ goto label_3;}
#line 1477
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 1477
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1477
nl_die_arg(___nl__im__4);
#line 1475
label_2:
;
#line 1476
___nl__im_ptr__8 = &((*___ref___rec__1).logic0field);
#line 1476
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1476
___nl__im_ptr__8 = NULL;
#line 1476
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(1293)));
#line 1476
c_rt_lib0clear(&___nl__im__7);
#line 1476
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1476
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 1476
c_rt_lib0clear(&___nl__im__10);
#line 1476
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__9));
#line 1476
___nl__bool__5 = c_rt_lib0check_true_native(___nl__im__11);
#line 1476
c_rt_lib0clear(&___nl__im__6);
#line 1476
//clear ___nl__int__9;
#line 1476
c_rt_lib0clear(&___nl__im__11);
#line 1476
___nl__bool__5 = !___nl__bool__5;
#line 1476
if(___nl__bool__5){ goto label_5;}
#line 1476
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(251), ___nl__im__0));
#line 1476
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__12));
#line 1476
c_rt_lib0clear(&___nl__im__12);
#line 1476
goto label_4;
#line 1476
label_5:
;
#line 1476
label_4:
;
#line 1476
//clear ___nl__bool__5;
#line 1477
goto label_1;
#line 1477
label_3:
;
#line 1478
goto label_1;
#line 1478
label_1:
;
#line 1478
c_rt_lib0clear(&___nl__im__0);
#line 1478
c_rt_lib0clear(&___nl__im__2);
#line 1478
//clear ___nl__bool__3;
#line 1478
c_rt_lib0clear(&___nl__im__4);
#line 1478
return NULL;
return NULL;
}

ImmT  translator_priv0restore_registers_only_clear(translator0function_logic_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
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
INT  ___nl__int__14 = 0;
#line 1482
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(432)));
#line 1482
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1482
c_rt_lib0clear(&___nl__im__3);
#line 1482
label_2:
;
#line 1482
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1482
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1482
___nl__im_ptr__7 = NULL;
#line 1482
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(432)));
#line 1482
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1482
c_rt_lib0clear(&___nl__im__6);
#line 1482
c_rt_lib0clear(&___nl__im__8);
#line 1482
___nl__int__9 = ___nl__int__2 < ___nl__int__5;
#line 1482
___nl__bool__4 = ___nl__int__9;
#line 1482
//clear ___nl__int__5;
#line 1482
//clear ___nl__int__9;
#line 1482
___nl__bool__4 = !___nl__bool__4;
#line 1482
if(___nl__bool__4){ goto label_1;}
#line 1483
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1483
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1483
___nl__im_ptr__13 = NULL;
#line 1483
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(215)));
#line 1483
c_rt_lib0clear(&___nl__im__12);
#line 1483
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__11, ___nl__int__2));
#line 1483
c_rt_lib0clear(&___nl__im__11);
#line 1483
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__10, ___ref___rec__1));
#line 1483
c_rt_lib0clear(&___nl__im__10);
#line 1482
___nl__int__14 = 1;
#line 1482
___nl__int__2 = ___nl__int__2 + ___nl__int__14;
#line 1482
//clear ___nl__int__14;
#line 1484
goto label_2;
#line 1484
label_1:
;
#line 1484
c_rt_lib0clear(&___nl__im__0);
#line 1484
//clear ___nl__int__2;
#line 1484
//clear ___nl__bool__4;
#line 1484
return NULL;
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
#line 1488
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(432)));
#line 1488
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1488
c_rt_lib0clear(&___nl__im__3);
#line 1488
label_2:
;
#line 1488
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1488
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1488
___nl__im_ptr__7 = NULL;
#line 1488
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(432)));
#line 1488
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1488
c_rt_lib0clear(&___nl__im__6);
#line 1488
c_rt_lib0clear(&___nl__im__8);
#line 1488
___nl__int__9 = ___nl__int__2 < ___nl__int__5;
#line 1488
___nl__bool__4 = ___nl__int__9;
#line 1488
//clear ___nl__int__5;
#line 1488
//clear ___nl__int__9;
#line 1488
___nl__bool__4 = !___nl__bool__4;
#line 1488
if(___nl__bool__4){ goto label_1;}
#line 1489
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1489
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1489
___nl__im_ptr__13 = NULL;
#line 1489
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(215)));
#line 1489
c_rt_lib0clear(&___nl__im__12);
#line 1489
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__11, ___nl__int__2));
#line 1489
c_rt_lib0clear(&___nl__im__11);
#line 1489
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__10, ___ref___rec__1));
#line 1489
c_rt_lib0clear(&___nl__im__10);
#line 1490
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1490
c_rt_lib0move(&___nl__im__15,___get_global_const(1293));
#line 1490
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___nl__im_ptr__14), ___nl__im__15));
#line 1490
___nl__bool__17 = false;
#line 1490
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__17));
#line 1490
c_rt_lib0array_set(&___nl__im__15, ___nl__int__2, ___nl__im__16);
#line 1490
c_rt_lib0move(&___nl__string__18,___get_global_const(1293));
#line 1490
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__14, ___nl__string__18, ___nl__im__15));
#line 1490
___nl__im_ptr__14 = NULL;
#line 1490
c_rt_lib0clear(&___nl__im__15);
#line 1490
c_rt_lib0clear(&___nl__im__16);
#line 1490
//clear ___nl__bool__17;
#line 1490
c_rt_lib0clear(&___nl__string__18);
#line 1488
___nl__int__19 = 1;
#line 1488
___nl__int__2 = ___nl__int__2 + ___nl__int__19;
#line 1488
//clear ___nl__int__19;
#line 1491
goto label_2;
#line 1491
label_1:
;
#line 1491
c_rt_lib0clear(&___nl__im__0);
#line 1491
//clear ___nl__int__2;
#line 1491
//clear ___nl__bool__4;
#line 1491
return NULL;
return NULL;
}

ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1) {
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 1495
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 1495
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(248), ___nl__im__3));
#line 1495
c_rt_lib0clear(&___nl__im__3);
#line 1495
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__2));
#line 1495
c_rt_lib0clear(&___nl__im__2);
#line 1495
//clear ___nl__int__0;
#line 1495
return NULL;
return NULL;
}

nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
INT * ___nl__int_ptr__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT * ___nl__int_ptr__4 = NULL;
#line 1499
___nl__int_ptr__1 = &((*___ref___rec__0).label_nr0field);
#line 1499
___nl__int__2 = 1;
#line 1499
(*___nl__int_ptr__1) = (*___nl__int_ptr__1) + ___nl__int__2;
#line 1499
___nl__int_ptr__1 = NULL;
#line 1499
//clear ___nl__int__2;
#line 1500
___nl__int_ptr__4 = &((*___ref___rec__0).label_nr0field);
#line 1500
___nl__int__3 = (*___nl__int_ptr__4);
#line 1500
___nl__int_ptr__4 = NULL;
#line 1500
return ___nl__int__3;
return 0;
}

nlasm0reg_type0type translator_priv0value_type_to_reg_type(nast0value_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT * ___nl__im_ptr__6 = NULL;
#line 1504
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1504
___nl__im_ptr__6 = &((*___ref___rec__1).logic0field);
#line 1504
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1504
___nl__im_ptr__6 = NULL;
#line 1504
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(388)));
#line 1504
c_rt_lib0clear(&___nl__im__5);
#line 1504
c_rt_lib0move(&___nl__im__2, translator_priv0var_type_to_reg_type(___nl__im__3, ___nl__im__4));
#line 1504
c_rt_lib0clear(&___nl__im__3);
#line 1504
c_rt_lib0clear(&___nl__im__4);
#line 1504
c_rt_lib0clear(&___nl__im__0);
#line 1504
return ___nl__im__2;
return NULL;
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
#line 1508
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1508
___nl__bool__3 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__1);
#line 1508
c_rt_lib0clear(&___nl__im__4);
#line 1508
___nl__bool__3 = !___nl__bool__3;
#line 1508
if(___nl__bool__3){ goto label_2;}
#line 1509
c_rt_lib0clear(&___nl__im__1);
#line 1509
//clear ___nl__bool__3;
#line 1509
return ___nl__im__0;
#line 1510
goto label_1;
#line 1510
label_2:
;
#line 1510
label_1:
;
#line 1510
//clear ___nl__bool__3;
#line 1512
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(329)));
#line 1512
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(219));
#line 1512
if(___nl__bool__7){ goto label_4;}
#line 1514
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(392));
#line 1514
if(___nl__bool__7){ goto label_5;}
#line 1514
c_rt_lib0move(&___nl__im__8,___get_global_const(16));
#line 1514
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 1514
nl_die_arg(___nl__im__8);
#line 1512
label_4:
;
#line 1513
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__2, ___nl__im__1));
#line 1514
goto label_3;
#line 1514
label_5:
;
#line 1515
c_rt_lib0move(&___nl__im__5, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__1));
#line 1516
goto label_3;
#line 1516
label_3:
;
#line 1517
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__0, ___ref___rec__2));
#line 1518
c_rt_lib0clear(&___nl__im__0);
#line 1518
c_rt_lib0clear(&___nl__im__1);
#line 1518
c_rt_lib0clear(&___nl__im__6);
#line 1518
//clear ___nl__bool__7;
#line 1518
c_rt_lib0clear(&___nl__im__8);
#line 1518
return ___nl__im__5;
return NULL;
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
#line 1522
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 1522
if(___nl__bool__2){ goto label_2;}
#line 1524
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 1524
if(___nl__bool__2){ goto label_3;}
#line 1526
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 1526
if(___nl__bool__2){ goto label_4;}
#line 1528
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 1528
if(___nl__bool__2){ goto label_5;}
#line 1530
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 1530
if(___nl__bool__2){ goto label_6;}
#line 1532
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 1532
if(___nl__bool__2){ goto label_7;}
#line 1534
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 1534
if(___nl__bool__2){ goto label_8;}
#line 1536
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 1536
if(___nl__bool__2){ goto label_9;}
#line 1538
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 1538
if(___nl__bool__2){ goto label_10;}
#line 1553
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 1553
if(___nl__bool__2){ goto label_11;}
#line 1555
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 1555
if(___nl__bool__2){ goto label_12;}
#line 1557
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 1557
if(___nl__bool__2){ goto label_13;}
#line 1559
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 1559
if(___nl__bool__2){ goto label_14;}
#line 1561
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 1561
if(___nl__bool__2){ goto label_15;}
#line 1563
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 1563
if(___nl__bool__2){ goto label_16;}
#line 1565
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 1565
if(___nl__bool__2){ goto label_17;}
#line 1565
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 1565
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1565
nl_die_arg(___nl__im__3);
#line 1522
label_2:
;
#line 1522
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 1522
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1523
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1523
c_rt_lib0clear(&___nl__im__0);
#line 1523
c_rt_lib0clear(&___nl__im__1);
#line 1523
//clear ___nl__bool__2;
#line 1523
c_rt_lib0clear(&___nl__im__3);
#line 1523
c_rt_lib0clear(&___nl__im__4);
#line 1523
c_rt_lib0clear(&___nl__im__5);
#line 1523
return ___nl__im__6;
#line 1524
goto label_1;
#line 1524
label_3:
;
#line 1524
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 1524
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1525
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(514), ___nl__im__0));
#line 1525
c_rt_lib0clear(&___nl__im__0);
#line 1525
c_rt_lib0clear(&___nl__im__1);
#line 1525
//clear ___nl__bool__2;
#line 1525
c_rt_lib0clear(&___nl__im__3);
#line 1525
c_rt_lib0clear(&___nl__im__4);
#line 1525
c_rt_lib0clear(&___nl__im__5);
#line 1525
c_rt_lib0clear(&___nl__im__6);
#line 1525
c_rt_lib0clear(&___nl__im__7);
#line 1525
c_rt_lib0clear(&___nl__im__8);
#line 1525
return ___nl__im__9;
#line 1526
goto label_1;
#line 1526
label_4:
;
#line 1526
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 1526
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1527
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1527
c_rt_lib0clear(&___nl__im__0);
#line 1527
c_rt_lib0clear(&___nl__im__1);
#line 1527
//clear ___nl__bool__2;
#line 1527
c_rt_lib0clear(&___nl__im__3);
#line 1527
c_rt_lib0clear(&___nl__im__4);
#line 1527
c_rt_lib0clear(&___nl__im__5);
#line 1527
c_rt_lib0clear(&___nl__im__6);
#line 1527
c_rt_lib0clear(&___nl__im__7);
#line 1527
c_rt_lib0clear(&___nl__im__8);
#line 1527
c_rt_lib0clear(&___nl__im__9);
#line 1527
c_rt_lib0clear(&___nl__im__10);
#line 1527
c_rt_lib0clear(&___nl__im__11);
#line 1527
return ___nl__im__12;
#line 1528
goto label_1;
#line 1528
label_5:
;
#line 1528
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 1528
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1529
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(129), ___nl__im__0));
#line 1529
c_rt_lib0clear(&___nl__im__0);
#line 1529
c_rt_lib0clear(&___nl__im__1);
#line 1529
//clear ___nl__bool__2;
#line 1529
c_rt_lib0clear(&___nl__im__3);
#line 1529
c_rt_lib0clear(&___nl__im__4);
#line 1529
c_rt_lib0clear(&___nl__im__5);
#line 1529
c_rt_lib0clear(&___nl__im__6);
#line 1529
c_rt_lib0clear(&___nl__im__7);
#line 1529
c_rt_lib0clear(&___nl__im__8);
#line 1529
c_rt_lib0clear(&___nl__im__9);
#line 1529
c_rt_lib0clear(&___nl__im__10);
#line 1529
c_rt_lib0clear(&___nl__im__11);
#line 1529
c_rt_lib0clear(&___nl__im__12);
#line 1529
c_rt_lib0clear(&___nl__im__13);
#line 1529
c_rt_lib0clear(&___nl__im__14);
#line 1529
return ___nl__im__15;
#line 1530
goto label_1;
#line 1530
label_6:
;
#line 1530
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 1530
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1531
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1531
c_rt_lib0clear(&___nl__im__0);
#line 1531
c_rt_lib0clear(&___nl__im__1);
#line 1531
//clear ___nl__bool__2;
#line 1531
c_rt_lib0clear(&___nl__im__3);
#line 1531
c_rt_lib0clear(&___nl__im__4);
#line 1531
c_rt_lib0clear(&___nl__im__5);
#line 1531
c_rt_lib0clear(&___nl__im__6);
#line 1531
c_rt_lib0clear(&___nl__im__7);
#line 1531
c_rt_lib0clear(&___nl__im__8);
#line 1531
c_rt_lib0clear(&___nl__im__9);
#line 1531
c_rt_lib0clear(&___nl__im__10);
#line 1531
c_rt_lib0clear(&___nl__im__11);
#line 1531
c_rt_lib0clear(&___nl__im__12);
#line 1531
c_rt_lib0clear(&___nl__im__13);
#line 1531
c_rt_lib0clear(&___nl__im__14);
#line 1531
c_rt_lib0clear(&___nl__im__15);
#line 1531
c_rt_lib0clear(&___nl__im__16);
#line 1531
c_rt_lib0clear(&___nl__im__17);
#line 1531
return ___nl__im__18;
#line 1532
goto label_1;
#line 1532
label_7:
;
#line 1532
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 1532
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1533
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(128), ___nl__im__0));
#line 1533
c_rt_lib0clear(&___nl__im__0);
#line 1533
c_rt_lib0clear(&___nl__im__1);
#line 1533
//clear ___nl__bool__2;
#line 1533
c_rt_lib0clear(&___nl__im__3);
#line 1533
c_rt_lib0clear(&___nl__im__4);
#line 1533
c_rt_lib0clear(&___nl__im__5);
#line 1533
c_rt_lib0clear(&___nl__im__6);
#line 1533
c_rt_lib0clear(&___nl__im__7);
#line 1533
c_rt_lib0clear(&___nl__im__8);
#line 1533
c_rt_lib0clear(&___nl__im__9);
#line 1533
c_rt_lib0clear(&___nl__im__10);
#line 1533
c_rt_lib0clear(&___nl__im__11);
#line 1533
c_rt_lib0clear(&___nl__im__12);
#line 1533
c_rt_lib0clear(&___nl__im__13);
#line 1533
c_rt_lib0clear(&___nl__im__14);
#line 1533
c_rt_lib0clear(&___nl__im__15);
#line 1533
c_rt_lib0clear(&___nl__im__16);
#line 1533
c_rt_lib0clear(&___nl__im__17);
#line 1533
c_rt_lib0clear(&___nl__im__18);
#line 1533
c_rt_lib0clear(&___nl__im__19);
#line 1533
c_rt_lib0clear(&___nl__im__20);
#line 1533
return ___nl__im__21;
#line 1534
goto label_1;
#line 1534
label_8:
;
#line 1534
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 1534
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 1535
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1535
c_rt_lib0clear(&___nl__im__0);
#line 1535
c_rt_lib0clear(&___nl__im__1);
#line 1535
//clear ___nl__bool__2;
#line 1535
c_rt_lib0clear(&___nl__im__3);
#line 1535
c_rt_lib0clear(&___nl__im__4);
#line 1535
c_rt_lib0clear(&___nl__im__5);
#line 1535
c_rt_lib0clear(&___nl__im__6);
#line 1535
c_rt_lib0clear(&___nl__im__7);
#line 1535
c_rt_lib0clear(&___nl__im__8);
#line 1535
c_rt_lib0clear(&___nl__im__9);
#line 1535
c_rt_lib0clear(&___nl__im__10);
#line 1535
c_rt_lib0clear(&___nl__im__11);
#line 1535
c_rt_lib0clear(&___nl__im__12);
#line 1535
c_rt_lib0clear(&___nl__im__13);
#line 1535
c_rt_lib0clear(&___nl__im__14);
#line 1535
c_rt_lib0clear(&___nl__im__15);
#line 1535
c_rt_lib0clear(&___nl__im__16);
#line 1535
c_rt_lib0clear(&___nl__im__17);
#line 1535
c_rt_lib0clear(&___nl__im__18);
#line 1535
c_rt_lib0clear(&___nl__im__19);
#line 1535
c_rt_lib0clear(&___nl__im__20);
#line 1535
c_rt_lib0clear(&___nl__im__21);
#line 1535
c_rt_lib0clear(&___nl__im__22);
#line 1535
c_rt_lib0clear(&___nl__im__23);
#line 1535
return ___nl__im__24;
#line 1536
goto label_1;
#line 1536
label_9:
;
#line 1536
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 1536
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1537
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(518), ___nl__im__0));
#line 1537
c_rt_lib0clear(&___nl__im__0);
#line 1537
c_rt_lib0clear(&___nl__im__1);
#line 1537
//clear ___nl__bool__2;
#line 1537
c_rt_lib0clear(&___nl__im__3);
#line 1537
c_rt_lib0clear(&___nl__im__4);
#line 1537
c_rt_lib0clear(&___nl__im__5);
#line 1537
c_rt_lib0clear(&___nl__im__6);
#line 1537
c_rt_lib0clear(&___nl__im__7);
#line 1537
c_rt_lib0clear(&___nl__im__8);
#line 1537
c_rt_lib0clear(&___nl__im__9);
#line 1537
c_rt_lib0clear(&___nl__im__10);
#line 1537
c_rt_lib0clear(&___nl__im__11);
#line 1537
c_rt_lib0clear(&___nl__im__12);
#line 1537
c_rt_lib0clear(&___nl__im__13);
#line 1537
c_rt_lib0clear(&___nl__im__14);
#line 1537
c_rt_lib0clear(&___nl__im__15);
#line 1537
c_rt_lib0clear(&___nl__im__16);
#line 1537
c_rt_lib0clear(&___nl__im__17);
#line 1537
c_rt_lib0clear(&___nl__im__18);
#line 1537
c_rt_lib0clear(&___nl__im__19);
#line 1537
c_rt_lib0clear(&___nl__im__20);
#line 1537
c_rt_lib0clear(&___nl__im__21);
#line 1537
c_rt_lib0clear(&___nl__im__22);
#line 1537
c_rt_lib0clear(&___nl__im__23);
#line 1537
c_rt_lib0clear(&___nl__im__24);
#line 1537
c_rt_lib0clear(&___nl__im__25);
#line 1537
c_rt_lib0clear(&___nl__im__26);
#line 1537
return ___nl__im__27;
#line 1538
goto label_1;
#line 1538
label_10:
;
#line 1538
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 1538
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1539
c_rt_lib0move(&___nl__im__31,___get_global_const(33));
#line 1539
___nl__bool__30 = c_rt_lib0eq(___nl__im__28, ___nl__im__31);
#line 1539
c_rt_lib0clear(&___nl__im__31);
#line 1539
___nl__bool__30 = !___nl__bool__30;
#line 1539
if(___nl__bool__30){ goto label_19;}
#line 1540
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 1540
c_rt_lib0clear(&___nl__im__0);
#line 1540
c_rt_lib0clear(&___nl__im__1);
#line 1540
//clear ___nl__bool__2;
#line 1540
c_rt_lib0clear(&___nl__im__3);
#line 1540
c_rt_lib0clear(&___nl__im__4);
#line 1540
c_rt_lib0clear(&___nl__im__5);
#line 1540
c_rt_lib0clear(&___nl__im__6);
#line 1540
c_rt_lib0clear(&___nl__im__7);
#line 1540
c_rt_lib0clear(&___nl__im__8);
#line 1540
c_rt_lib0clear(&___nl__im__9);
#line 1540
c_rt_lib0clear(&___nl__im__10);
#line 1540
c_rt_lib0clear(&___nl__im__11);
#line 1540
c_rt_lib0clear(&___nl__im__12);
#line 1540
c_rt_lib0clear(&___nl__im__13);
#line 1540
c_rt_lib0clear(&___nl__im__14);
#line 1540
c_rt_lib0clear(&___nl__im__15);
#line 1540
c_rt_lib0clear(&___nl__im__16);
#line 1540
c_rt_lib0clear(&___nl__im__17);
#line 1540
c_rt_lib0clear(&___nl__im__18);
#line 1540
c_rt_lib0clear(&___nl__im__19);
#line 1540
c_rt_lib0clear(&___nl__im__20);
#line 1540
c_rt_lib0clear(&___nl__im__21);
#line 1540
c_rt_lib0clear(&___nl__im__22);
#line 1540
c_rt_lib0clear(&___nl__im__23);
#line 1540
c_rt_lib0clear(&___nl__im__24);
#line 1540
c_rt_lib0clear(&___nl__im__25);
#line 1540
c_rt_lib0clear(&___nl__im__26);
#line 1540
c_rt_lib0clear(&___nl__im__27);
#line 1540
c_rt_lib0clear(&___nl__im__28);
#line 1540
c_rt_lib0clear(&___nl__im__29);
#line 1540
//clear ___nl__bool__30;
#line 1540
return ___nl__im__32;
#line 1541
goto label_18;
#line 1541
label_19:
;
#line 1541
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1541
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(6));
#line 1541
c_rt_lib0clear(&___nl__im__33);
#line 1541
___nl__bool__30 = !___nl__bool__30;
#line 1541
if(___nl__bool__30){ goto label_20;}
#line 1542
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(514), ___nl__im__0));
#line 1542
c_rt_lib0clear(&___nl__im__0);
#line 1542
c_rt_lib0clear(&___nl__im__1);
#line 1542
//clear ___nl__bool__2;
#line 1542
c_rt_lib0clear(&___nl__im__3);
#line 1542
c_rt_lib0clear(&___nl__im__4);
#line 1542
c_rt_lib0clear(&___nl__im__5);
#line 1542
c_rt_lib0clear(&___nl__im__6);
#line 1542
c_rt_lib0clear(&___nl__im__7);
#line 1542
c_rt_lib0clear(&___nl__im__8);
#line 1542
c_rt_lib0clear(&___nl__im__9);
#line 1542
c_rt_lib0clear(&___nl__im__10);
#line 1542
c_rt_lib0clear(&___nl__im__11);
#line 1542
c_rt_lib0clear(&___nl__im__12);
#line 1542
c_rt_lib0clear(&___nl__im__13);
#line 1542
c_rt_lib0clear(&___nl__im__14);
#line 1542
c_rt_lib0clear(&___nl__im__15);
#line 1542
c_rt_lib0clear(&___nl__im__16);
#line 1542
c_rt_lib0clear(&___nl__im__17);
#line 1542
c_rt_lib0clear(&___nl__im__18);
#line 1542
c_rt_lib0clear(&___nl__im__19);
#line 1542
c_rt_lib0clear(&___nl__im__20);
#line 1542
c_rt_lib0clear(&___nl__im__21);
#line 1542
c_rt_lib0clear(&___nl__im__22);
#line 1542
c_rt_lib0clear(&___nl__im__23);
#line 1542
c_rt_lib0clear(&___nl__im__24);
#line 1542
c_rt_lib0clear(&___nl__im__25);
#line 1542
c_rt_lib0clear(&___nl__im__26);
#line 1542
c_rt_lib0clear(&___nl__im__27);
#line 1542
c_rt_lib0clear(&___nl__im__28);
#line 1542
c_rt_lib0clear(&___nl__im__29);
#line 1542
//clear ___nl__bool__30;
#line 1542
c_rt_lib0clear(&___nl__im__32);
#line 1542
return ___nl__im__34;
#line 1543
goto label_18;
#line 1543
label_20:
;
#line 1543
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1543
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(2));
#line 1543
c_rt_lib0clear(&___nl__im__35);
#line 1543
___nl__bool__30 = !___nl__bool__30;
#line 1543
if(___nl__bool__30){ goto label_21;}
#line 1544
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(128), ___nl__im__0));
#line 1544
c_rt_lib0clear(&___nl__im__0);
#line 1544
c_rt_lib0clear(&___nl__im__1);
#line 1544
//clear ___nl__bool__2;
#line 1544
c_rt_lib0clear(&___nl__im__3);
#line 1544
c_rt_lib0clear(&___nl__im__4);
#line 1544
c_rt_lib0clear(&___nl__im__5);
#line 1544
c_rt_lib0clear(&___nl__im__6);
#line 1544
c_rt_lib0clear(&___nl__im__7);
#line 1544
c_rt_lib0clear(&___nl__im__8);
#line 1544
c_rt_lib0clear(&___nl__im__9);
#line 1544
c_rt_lib0clear(&___nl__im__10);
#line 1544
c_rt_lib0clear(&___nl__im__11);
#line 1544
c_rt_lib0clear(&___nl__im__12);
#line 1544
c_rt_lib0clear(&___nl__im__13);
#line 1544
c_rt_lib0clear(&___nl__im__14);
#line 1544
c_rt_lib0clear(&___nl__im__15);
#line 1544
c_rt_lib0clear(&___nl__im__16);
#line 1544
c_rt_lib0clear(&___nl__im__17);
#line 1544
c_rt_lib0clear(&___nl__im__18);
#line 1544
c_rt_lib0clear(&___nl__im__19);
#line 1544
c_rt_lib0clear(&___nl__im__20);
#line 1544
c_rt_lib0clear(&___nl__im__21);
#line 1544
c_rt_lib0clear(&___nl__im__22);
#line 1544
c_rt_lib0clear(&___nl__im__23);
#line 1544
c_rt_lib0clear(&___nl__im__24);
#line 1544
c_rt_lib0clear(&___nl__im__25);
#line 1544
c_rt_lib0clear(&___nl__im__26);
#line 1544
c_rt_lib0clear(&___nl__im__27);
#line 1544
c_rt_lib0clear(&___nl__im__28);
#line 1544
c_rt_lib0clear(&___nl__im__29);
#line 1544
//clear ___nl__bool__30;
#line 1544
c_rt_lib0clear(&___nl__im__32);
#line 1544
c_rt_lib0clear(&___nl__im__34);
#line 1544
return ___nl__im__36;
#line 1545
goto label_18;
#line 1545
label_21:
;
#line 1545
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1545
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(14));
#line 1545
c_rt_lib0clear(&___nl__im__37);
#line 1545
___nl__bool__30 = !___nl__bool__30;
#line 1545
if(___nl__bool__30){ goto label_22;}
#line 1546
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(518), ___nl__im__0));
#line 1546
c_rt_lib0clear(&___nl__im__0);
#line 1546
c_rt_lib0clear(&___nl__im__1);
#line 1546
//clear ___nl__bool__2;
#line 1546
c_rt_lib0clear(&___nl__im__3);
#line 1546
c_rt_lib0clear(&___nl__im__4);
#line 1546
c_rt_lib0clear(&___nl__im__5);
#line 1546
c_rt_lib0clear(&___nl__im__6);
#line 1546
c_rt_lib0clear(&___nl__im__7);
#line 1546
c_rt_lib0clear(&___nl__im__8);
#line 1546
c_rt_lib0clear(&___nl__im__9);
#line 1546
c_rt_lib0clear(&___nl__im__10);
#line 1546
c_rt_lib0clear(&___nl__im__11);
#line 1546
c_rt_lib0clear(&___nl__im__12);
#line 1546
c_rt_lib0clear(&___nl__im__13);
#line 1546
c_rt_lib0clear(&___nl__im__14);
#line 1546
c_rt_lib0clear(&___nl__im__15);
#line 1546
c_rt_lib0clear(&___nl__im__16);
#line 1546
c_rt_lib0clear(&___nl__im__17);
#line 1546
c_rt_lib0clear(&___nl__im__18);
#line 1546
c_rt_lib0clear(&___nl__im__19);
#line 1546
c_rt_lib0clear(&___nl__im__20);
#line 1546
c_rt_lib0clear(&___nl__im__21);
#line 1546
c_rt_lib0clear(&___nl__im__22);
#line 1546
c_rt_lib0clear(&___nl__im__23);
#line 1546
c_rt_lib0clear(&___nl__im__24);
#line 1546
c_rt_lib0clear(&___nl__im__25);
#line 1546
c_rt_lib0clear(&___nl__im__26);
#line 1546
c_rt_lib0clear(&___nl__im__27);
#line 1546
c_rt_lib0clear(&___nl__im__28);
#line 1546
c_rt_lib0clear(&___nl__im__29);
#line 1546
//clear ___nl__bool__30;
#line 1546
c_rt_lib0clear(&___nl__im__32);
#line 1546
c_rt_lib0clear(&___nl__im__34);
#line 1546
c_rt_lib0clear(&___nl__im__36);
#line 1546
return ___nl__im__38;
#line 1547
goto label_18;
#line 1547
label_22:
;
#line 1547
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1547
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(4));
#line 1547
c_rt_lib0clear(&___nl__im__39);
#line 1547
___nl__bool__30 = !___nl__bool__30;
#line 1547
if(___nl__bool__30){ goto label_23;}
#line 1548
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(129), ___nl__im__0));
#line 1548
c_rt_lib0clear(&___nl__im__0);
#line 1548
c_rt_lib0clear(&___nl__im__1);
#line 1548
//clear ___nl__bool__2;
#line 1548
c_rt_lib0clear(&___nl__im__3);
#line 1548
c_rt_lib0clear(&___nl__im__4);
#line 1548
c_rt_lib0clear(&___nl__im__5);
#line 1548
c_rt_lib0clear(&___nl__im__6);
#line 1548
c_rt_lib0clear(&___nl__im__7);
#line 1548
c_rt_lib0clear(&___nl__im__8);
#line 1548
c_rt_lib0clear(&___nl__im__9);
#line 1548
c_rt_lib0clear(&___nl__im__10);
#line 1548
c_rt_lib0clear(&___nl__im__11);
#line 1548
c_rt_lib0clear(&___nl__im__12);
#line 1548
c_rt_lib0clear(&___nl__im__13);
#line 1548
c_rt_lib0clear(&___nl__im__14);
#line 1548
c_rt_lib0clear(&___nl__im__15);
#line 1548
c_rt_lib0clear(&___nl__im__16);
#line 1548
c_rt_lib0clear(&___nl__im__17);
#line 1548
c_rt_lib0clear(&___nl__im__18);
#line 1548
c_rt_lib0clear(&___nl__im__19);
#line 1548
c_rt_lib0clear(&___nl__im__20);
#line 1548
c_rt_lib0clear(&___nl__im__21);
#line 1548
c_rt_lib0clear(&___nl__im__22);
#line 1548
c_rt_lib0clear(&___nl__im__23);
#line 1548
c_rt_lib0clear(&___nl__im__24);
#line 1548
c_rt_lib0clear(&___nl__im__25);
#line 1548
c_rt_lib0clear(&___nl__im__26);
#line 1548
c_rt_lib0clear(&___nl__im__27);
#line 1548
c_rt_lib0clear(&___nl__im__28);
#line 1548
c_rt_lib0clear(&___nl__im__29);
#line 1548
//clear ___nl__bool__30;
#line 1548
c_rt_lib0clear(&___nl__im__32);
#line 1548
c_rt_lib0clear(&___nl__im__34);
#line 1548
c_rt_lib0clear(&___nl__im__36);
#line 1548
c_rt_lib0clear(&___nl__im__38);
#line 1548
return ___nl__im__40;
#line 1549
goto label_18;
#line 1549
label_23:
;
#line 1549
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1549
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__41, ___get_global_const(10));
#line 1549
c_rt_lib0clear(&___nl__im__41);
#line 1549
___nl__bool__30 = !___nl__bool__30;
#line 1549
if(___nl__bool__30){ goto label_24;}
#line 1550
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 1550
c_rt_lib0clear(&___nl__im__0);
#line 1550
c_rt_lib0clear(&___nl__im__1);
#line 1550
//clear ___nl__bool__2;
#line 1550
c_rt_lib0clear(&___nl__im__3);
#line 1550
c_rt_lib0clear(&___nl__im__4);
#line 1550
c_rt_lib0clear(&___nl__im__5);
#line 1550
c_rt_lib0clear(&___nl__im__6);
#line 1550
c_rt_lib0clear(&___nl__im__7);
#line 1550
c_rt_lib0clear(&___nl__im__8);
#line 1550
c_rt_lib0clear(&___nl__im__9);
#line 1550
c_rt_lib0clear(&___nl__im__10);
#line 1550
c_rt_lib0clear(&___nl__im__11);
#line 1550
c_rt_lib0clear(&___nl__im__12);
#line 1550
c_rt_lib0clear(&___nl__im__13);
#line 1550
c_rt_lib0clear(&___nl__im__14);
#line 1550
c_rt_lib0clear(&___nl__im__15);
#line 1550
c_rt_lib0clear(&___nl__im__16);
#line 1550
c_rt_lib0clear(&___nl__im__17);
#line 1550
c_rt_lib0clear(&___nl__im__18);
#line 1550
c_rt_lib0clear(&___nl__im__19);
#line 1550
c_rt_lib0clear(&___nl__im__20);
#line 1550
c_rt_lib0clear(&___nl__im__21);
#line 1550
c_rt_lib0clear(&___nl__im__22);
#line 1550
c_rt_lib0clear(&___nl__im__23);
#line 1550
c_rt_lib0clear(&___nl__im__24);
#line 1550
c_rt_lib0clear(&___nl__im__25);
#line 1550
c_rt_lib0clear(&___nl__im__26);
#line 1550
c_rt_lib0clear(&___nl__im__27);
#line 1550
c_rt_lib0clear(&___nl__im__28);
#line 1550
c_rt_lib0clear(&___nl__im__29);
#line 1550
//clear ___nl__bool__30;
#line 1550
c_rt_lib0clear(&___nl__im__32);
#line 1550
c_rt_lib0clear(&___nl__im__34);
#line 1550
c_rt_lib0clear(&___nl__im__36);
#line 1550
c_rt_lib0clear(&___nl__im__38);
#line 1550
c_rt_lib0clear(&___nl__im__40);
#line 1550
return ___nl__im__42;
#line 1551
goto label_18;
#line 1551
label_24:
;
#line 1551
label_18:
;
#line 1551
//clear ___nl__bool__30;
#line 1551
c_rt_lib0clear(&___nl__im__32);
#line 1551
c_rt_lib0clear(&___nl__im__34);
#line 1551
c_rt_lib0clear(&___nl__im__36);
#line 1551
c_rt_lib0clear(&___nl__im__38);
#line 1551
c_rt_lib0clear(&___nl__im__40);
#line 1551
c_rt_lib0clear(&___nl__im__42);
#line 1552
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1552
c_rt_lib0clear(&___nl__im__0);
#line 1552
c_rt_lib0clear(&___nl__im__1);
#line 1552
//clear ___nl__bool__2;
#line 1552
c_rt_lib0clear(&___nl__im__3);
#line 1552
c_rt_lib0clear(&___nl__im__4);
#line 1552
c_rt_lib0clear(&___nl__im__5);
#line 1552
c_rt_lib0clear(&___nl__im__6);
#line 1552
c_rt_lib0clear(&___nl__im__7);
#line 1552
c_rt_lib0clear(&___nl__im__8);
#line 1552
c_rt_lib0clear(&___nl__im__9);
#line 1552
c_rt_lib0clear(&___nl__im__10);
#line 1552
c_rt_lib0clear(&___nl__im__11);
#line 1552
c_rt_lib0clear(&___nl__im__12);
#line 1552
c_rt_lib0clear(&___nl__im__13);
#line 1552
c_rt_lib0clear(&___nl__im__14);
#line 1552
c_rt_lib0clear(&___nl__im__15);
#line 1552
c_rt_lib0clear(&___nl__im__16);
#line 1552
c_rt_lib0clear(&___nl__im__17);
#line 1552
c_rt_lib0clear(&___nl__im__18);
#line 1552
c_rt_lib0clear(&___nl__im__19);
#line 1552
c_rt_lib0clear(&___nl__im__20);
#line 1552
c_rt_lib0clear(&___nl__im__21);
#line 1552
c_rt_lib0clear(&___nl__im__22);
#line 1552
c_rt_lib0clear(&___nl__im__23);
#line 1552
c_rt_lib0clear(&___nl__im__24);
#line 1552
c_rt_lib0clear(&___nl__im__25);
#line 1552
c_rt_lib0clear(&___nl__im__26);
#line 1552
c_rt_lib0clear(&___nl__im__27);
#line 1552
c_rt_lib0clear(&___nl__im__28);
#line 1552
c_rt_lib0clear(&___nl__im__29);
#line 1552
return ___nl__im__43;
#line 1553
goto label_1;
#line 1553
label_11:
;
#line 1554
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1554
c_rt_lib0clear(&___nl__im__0);
#line 1554
c_rt_lib0clear(&___nl__im__1);
#line 1554
//clear ___nl__bool__2;
#line 1554
c_rt_lib0clear(&___nl__im__3);
#line 1554
c_rt_lib0clear(&___nl__im__4);
#line 1554
c_rt_lib0clear(&___nl__im__5);
#line 1554
c_rt_lib0clear(&___nl__im__6);
#line 1554
c_rt_lib0clear(&___nl__im__7);
#line 1554
c_rt_lib0clear(&___nl__im__8);
#line 1554
c_rt_lib0clear(&___nl__im__9);
#line 1554
c_rt_lib0clear(&___nl__im__10);
#line 1554
c_rt_lib0clear(&___nl__im__11);
#line 1554
c_rt_lib0clear(&___nl__im__12);
#line 1554
c_rt_lib0clear(&___nl__im__13);
#line 1554
c_rt_lib0clear(&___nl__im__14);
#line 1554
c_rt_lib0clear(&___nl__im__15);
#line 1554
c_rt_lib0clear(&___nl__im__16);
#line 1554
c_rt_lib0clear(&___nl__im__17);
#line 1554
c_rt_lib0clear(&___nl__im__18);
#line 1554
c_rt_lib0clear(&___nl__im__19);
#line 1554
c_rt_lib0clear(&___nl__im__20);
#line 1554
c_rt_lib0clear(&___nl__im__21);
#line 1554
c_rt_lib0clear(&___nl__im__22);
#line 1554
c_rt_lib0clear(&___nl__im__23);
#line 1554
c_rt_lib0clear(&___nl__im__24);
#line 1554
c_rt_lib0clear(&___nl__im__25);
#line 1554
c_rt_lib0clear(&___nl__im__26);
#line 1554
c_rt_lib0clear(&___nl__im__27);
#line 1554
c_rt_lib0clear(&___nl__im__28);
#line 1554
c_rt_lib0clear(&___nl__im__29);
#line 1554
c_rt_lib0clear(&___nl__im__43);
#line 1554
return ___nl__im__44;
#line 1555
goto label_1;
#line 1555
label_12:
;
#line 1556
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_const(516)));
#line 1556
c_rt_lib0clear(&___nl__im__0);
#line 1556
c_rt_lib0clear(&___nl__im__1);
#line 1556
//clear ___nl__bool__2;
#line 1556
c_rt_lib0clear(&___nl__im__3);
#line 1556
c_rt_lib0clear(&___nl__im__4);
#line 1556
c_rt_lib0clear(&___nl__im__5);
#line 1556
c_rt_lib0clear(&___nl__im__6);
#line 1556
c_rt_lib0clear(&___nl__im__7);
#line 1556
c_rt_lib0clear(&___nl__im__8);
#line 1556
c_rt_lib0clear(&___nl__im__9);
#line 1556
c_rt_lib0clear(&___nl__im__10);
#line 1556
c_rt_lib0clear(&___nl__im__11);
#line 1556
c_rt_lib0clear(&___nl__im__12);
#line 1556
c_rt_lib0clear(&___nl__im__13);
#line 1556
c_rt_lib0clear(&___nl__im__14);
#line 1556
c_rt_lib0clear(&___nl__im__15);
#line 1556
c_rt_lib0clear(&___nl__im__16);
#line 1556
c_rt_lib0clear(&___nl__im__17);
#line 1556
c_rt_lib0clear(&___nl__im__18);
#line 1556
c_rt_lib0clear(&___nl__im__19);
#line 1556
c_rt_lib0clear(&___nl__im__20);
#line 1556
c_rt_lib0clear(&___nl__im__21);
#line 1556
c_rt_lib0clear(&___nl__im__22);
#line 1556
c_rt_lib0clear(&___nl__im__23);
#line 1556
c_rt_lib0clear(&___nl__im__24);
#line 1556
c_rt_lib0clear(&___nl__im__25);
#line 1556
c_rt_lib0clear(&___nl__im__26);
#line 1556
c_rt_lib0clear(&___nl__im__27);
#line 1556
c_rt_lib0clear(&___nl__im__28);
#line 1556
c_rt_lib0clear(&___nl__im__29);
#line 1556
c_rt_lib0clear(&___nl__im__43);
#line 1556
c_rt_lib0clear(&___nl__im__44);
#line 1556
return ___nl__im__45;
#line 1557
goto label_1;
#line 1557
label_13:
;
#line 1558
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1558
c_rt_lib0clear(&___nl__im__0);
#line 1558
c_rt_lib0clear(&___nl__im__1);
#line 1558
//clear ___nl__bool__2;
#line 1558
c_rt_lib0clear(&___nl__im__3);
#line 1558
c_rt_lib0clear(&___nl__im__4);
#line 1558
c_rt_lib0clear(&___nl__im__5);
#line 1558
c_rt_lib0clear(&___nl__im__6);
#line 1558
c_rt_lib0clear(&___nl__im__7);
#line 1558
c_rt_lib0clear(&___nl__im__8);
#line 1558
c_rt_lib0clear(&___nl__im__9);
#line 1558
c_rt_lib0clear(&___nl__im__10);
#line 1558
c_rt_lib0clear(&___nl__im__11);
#line 1558
c_rt_lib0clear(&___nl__im__12);
#line 1558
c_rt_lib0clear(&___nl__im__13);
#line 1558
c_rt_lib0clear(&___nl__im__14);
#line 1558
c_rt_lib0clear(&___nl__im__15);
#line 1558
c_rt_lib0clear(&___nl__im__16);
#line 1558
c_rt_lib0clear(&___nl__im__17);
#line 1558
c_rt_lib0clear(&___nl__im__18);
#line 1558
c_rt_lib0clear(&___nl__im__19);
#line 1558
c_rt_lib0clear(&___nl__im__20);
#line 1558
c_rt_lib0clear(&___nl__im__21);
#line 1558
c_rt_lib0clear(&___nl__im__22);
#line 1558
c_rt_lib0clear(&___nl__im__23);
#line 1558
c_rt_lib0clear(&___nl__im__24);
#line 1558
c_rt_lib0clear(&___nl__im__25);
#line 1558
c_rt_lib0clear(&___nl__im__26);
#line 1558
c_rt_lib0clear(&___nl__im__27);
#line 1558
c_rt_lib0clear(&___nl__im__28);
#line 1558
c_rt_lib0clear(&___nl__im__29);
#line 1558
c_rt_lib0clear(&___nl__im__43);
#line 1558
c_rt_lib0clear(&___nl__im__44);
#line 1558
c_rt_lib0clear(&___nl__im__45);
#line 1558
return ___nl__im__46;
#line 1559
goto label_1;
#line 1559
label_14:
;
#line 1560
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 1560
c_rt_lib0clear(&___nl__im__0);
#line 1560
c_rt_lib0clear(&___nl__im__1);
#line 1560
//clear ___nl__bool__2;
#line 1560
c_rt_lib0clear(&___nl__im__3);
#line 1560
c_rt_lib0clear(&___nl__im__4);
#line 1560
c_rt_lib0clear(&___nl__im__5);
#line 1560
c_rt_lib0clear(&___nl__im__6);
#line 1560
c_rt_lib0clear(&___nl__im__7);
#line 1560
c_rt_lib0clear(&___nl__im__8);
#line 1560
c_rt_lib0clear(&___nl__im__9);
#line 1560
c_rt_lib0clear(&___nl__im__10);
#line 1560
c_rt_lib0clear(&___nl__im__11);
#line 1560
c_rt_lib0clear(&___nl__im__12);
#line 1560
c_rt_lib0clear(&___nl__im__13);
#line 1560
c_rt_lib0clear(&___nl__im__14);
#line 1560
c_rt_lib0clear(&___nl__im__15);
#line 1560
c_rt_lib0clear(&___nl__im__16);
#line 1560
c_rt_lib0clear(&___nl__im__17);
#line 1560
c_rt_lib0clear(&___nl__im__18);
#line 1560
c_rt_lib0clear(&___nl__im__19);
#line 1560
c_rt_lib0clear(&___nl__im__20);
#line 1560
c_rt_lib0clear(&___nl__im__21);
#line 1560
c_rt_lib0clear(&___nl__im__22);
#line 1560
c_rt_lib0clear(&___nl__im__23);
#line 1560
c_rt_lib0clear(&___nl__im__24);
#line 1560
c_rt_lib0clear(&___nl__im__25);
#line 1560
c_rt_lib0clear(&___nl__im__26);
#line 1560
c_rt_lib0clear(&___nl__im__27);
#line 1560
c_rt_lib0clear(&___nl__im__28);
#line 1560
c_rt_lib0clear(&___nl__im__29);
#line 1560
c_rt_lib0clear(&___nl__im__43);
#line 1560
c_rt_lib0clear(&___nl__im__44);
#line 1560
c_rt_lib0clear(&___nl__im__45);
#line 1560
c_rt_lib0clear(&___nl__im__46);
#line 1560
return ___nl__im__47;
#line 1561
goto label_1;
#line 1561
label_15:
;
#line 1562
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1562
c_rt_lib0clear(&___nl__im__0);
#line 1562
c_rt_lib0clear(&___nl__im__1);
#line 1562
//clear ___nl__bool__2;
#line 1562
c_rt_lib0clear(&___nl__im__3);
#line 1562
c_rt_lib0clear(&___nl__im__4);
#line 1562
c_rt_lib0clear(&___nl__im__5);
#line 1562
c_rt_lib0clear(&___nl__im__6);
#line 1562
c_rt_lib0clear(&___nl__im__7);
#line 1562
c_rt_lib0clear(&___nl__im__8);
#line 1562
c_rt_lib0clear(&___nl__im__9);
#line 1562
c_rt_lib0clear(&___nl__im__10);
#line 1562
c_rt_lib0clear(&___nl__im__11);
#line 1562
c_rt_lib0clear(&___nl__im__12);
#line 1562
c_rt_lib0clear(&___nl__im__13);
#line 1562
c_rt_lib0clear(&___nl__im__14);
#line 1562
c_rt_lib0clear(&___nl__im__15);
#line 1562
c_rt_lib0clear(&___nl__im__16);
#line 1562
c_rt_lib0clear(&___nl__im__17);
#line 1562
c_rt_lib0clear(&___nl__im__18);
#line 1562
c_rt_lib0clear(&___nl__im__19);
#line 1562
c_rt_lib0clear(&___nl__im__20);
#line 1562
c_rt_lib0clear(&___nl__im__21);
#line 1562
c_rt_lib0clear(&___nl__im__22);
#line 1562
c_rt_lib0clear(&___nl__im__23);
#line 1562
c_rt_lib0clear(&___nl__im__24);
#line 1562
c_rt_lib0clear(&___nl__im__25);
#line 1562
c_rt_lib0clear(&___nl__im__26);
#line 1562
c_rt_lib0clear(&___nl__im__27);
#line 1562
c_rt_lib0clear(&___nl__im__28);
#line 1562
c_rt_lib0clear(&___nl__im__29);
#line 1562
c_rt_lib0clear(&___nl__im__43);
#line 1562
c_rt_lib0clear(&___nl__im__44);
#line 1562
c_rt_lib0clear(&___nl__im__45);
#line 1562
c_rt_lib0clear(&___nl__im__46);
#line 1562
c_rt_lib0clear(&___nl__im__47);
#line 1562
return ___nl__im__48;
#line 1563
goto label_1;
#line 1563
label_16:
;
#line 1564
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1564
c_rt_lib0clear(&___nl__im__0);
#line 1564
c_rt_lib0clear(&___nl__im__1);
#line 1564
//clear ___nl__bool__2;
#line 1564
c_rt_lib0clear(&___nl__im__3);
#line 1564
c_rt_lib0clear(&___nl__im__4);
#line 1564
c_rt_lib0clear(&___nl__im__5);
#line 1564
c_rt_lib0clear(&___nl__im__6);
#line 1564
c_rt_lib0clear(&___nl__im__7);
#line 1564
c_rt_lib0clear(&___nl__im__8);
#line 1564
c_rt_lib0clear(&___nl__im__9);
#line 1564
c_rt_lib0clear(&___nl__im__10);
#line 1564
c_rt_lib0clear(&___nl__im__11);
#line 1564
c_rt_lib0clear(&___nl__im__12);
#line 1564
c_rt_lib0clear(&___nl__im__13);
#line 1564
c_rt_lib0clear(&___nl__im__14);
#line 1564
c_rt_lib0clear(&___nl__im__15);
#line 1564
c_rt_lib0clear(&___nl__im__16);
#line 1564
c_rt_lib0clear(&___nl__im__17);
#line 1564
c_rt_lib0clear(&___nl__im__18);
#line 1564
c_rt_lib0clear(&___nl__im__19);
#line 1564
c_rt_lib0clear(&___nl__im__20);
#line 1564
c_rt_lib0clear(&___nl__im__21);
#line 1564
c_rt_lib0clear(&___nl__im__22);
#line 1564
c_rt_lib0clear(&___nl__im__23);
#line 1564
c_rt_lib0clear(&___nl__im__24);
#line 1564
c_rt_lib0clear(&___nl__im__25);
#line 1564
c_rt_lib0clear(&___nl__im__26);
#line 1564
c_rt_lib0clear(&___nl__im__27);
#line 1564
c_rt_lib0clear(&___nl__im__28);
#line 1564
c_rt_lib0clear(&___nl__im__29);
#line 1564
c_rt_lib0clear(&___nl__im__43);
#line 1564
c_rt_lib0clear(&___nl__im__44);
#line 1564
c_rt_lib0clear(&___nl__im__45);
#line 1564
c_rt_lib0clear(&___nl__im__46);
#line 1564
c_rt_lib0clear(&___nl__im__47);
#line 1564
c_rt_lib0clear(&___nl__im__48);
#line 1564
return ___nl__im__49;
#line 1565
goto label_1;
#line 1565
label_17:
;
#line 1566
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 1566
c_rt_lib0clear(&___nl__im__0);
#line 1566
c_rt_lib0clear(&___nl__im__1);
#line 1566
//clear ___nl__bool__2;
#line 1566
c_rt_lib0clear(&___nl__im__3);
#line 1566
c_rt_lib0clear(&___nl__im__4);
#line 1566
c_rt_lib0clear(&___nl__im__5);
#line 1566
c_rt_lib0clear(&___nl__im__6);
#line 1566
c_rt_lib0clear(&___nl__im__7);
#line 1566
c_rt_lib0clear(&___nl__im__8);
#line 1566
c_rt_lib0clear(&___nl__im__9);
#line 1566
c_rt_lib0clear(&___nl__im__10);
#line 1566
c_rt_lib0clear(&___nl__im__11);
#line 1566
c_rt_lib0clear(&___nl__im__12);
#line 1566
c_rt_lib0clear(&___nl__im__13);
#line 1566
c_rt_lib0clear(&___nl__im__14);
#line 1566
c_rt_lib0clear(&___nl__im__15);
#line 1566
c_rt_lib0clear(&___nl__im__16);
#line 1566
c_rt_lib0clear(&___nl__im__17);
#line 1566
c_rt_lib0clear(&___nl__im__18);
#line 1566
c_rt_lib0clear(&___nl__im__19);
#line 1566
c_rt_lib0clear(&___nl__im__20);
#line 1566
c_rt_lib0clear(&___nl__im__21);
#line 1566
c_rt_lib0clear(&___nl__im__22);
#line 1566
c_rt_lib0clear(&___nl__im__23);
#line 1566
c_rt_lib0clear(&___nl__im__24);
#line 1566
c_rt_lib0clear(&___nl__im__25);
#line 1566
c_rt_lib0clear(&___nl__im__26);
#line 1566
c_rt_lib0clear(&___nl__im__27);
#line 1566
c_rt_lib0clear(&___nl__im__28);
#line 1566
c_rt_lib0clear(&___nl__im__29);
#line 1566
c_rt_lib0clear(&___nl__im__43);
#line 1566
c_rt_lib0clear(&___nl__im__44);
#line 1566
c_rt_lib0clear(&___nl__im__45);
#line 1566
c_rt_lib0clear(&___nl__im__46);
#line 1566
c_rt_lib0clear(&___nl__im__47);
#line 1566
c_rt_lib0clear(&___nl__im__48);
#line 1566
c_rt_lib0clear(&___nl__im__49);
#line 1566
return ___nl__im__50;
#line 1567
goto label_1;
#line 1567
label_1:
;
return NULL;
}

ImmT  translator_priv0print_val_init(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
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
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
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
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT * ___nl__im_ptr__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT * ___nl__im_ptr__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT * ___nl__im_ptr__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
INT  ___nl__int__57 = 0;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__string__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
INT  ___nl__int__64 = 0;
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
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT * ___nl__im_ptr__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT * ___nl__im_ptr__98 = NULL;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
INT  ___nl__int__101 = 0;
INT  ___nl__int__102 = 0;
bool  ___nl__bool__103 = false;
INT  ___nl__int__104 = 0;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT * ___nl__im_ptr__110 = NULL;
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
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
INT  ___nl__int__123 = 0;
INT  ___nl__int__124 = 0;
INT  ___nl__int__125 = 0;
bool  ___nl__bool__126 = false;
INT  ___nl__int__127 = 0;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT * ___nl__im_ptr__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
INT  ___nl__int__143 = 0;
INT  ___nl__int__144 = 0;
INT  ___nl__int__145 = 0;
bool  ___nl__bool__146 = false;
INT  ___nl__int__147 = 0;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT * ___nl__im_ptr__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
bool  ___nl__bool__163 = false;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
#line 1571
___nl__im_ptr__3 = &((*___ref___rec__2).debug0field);
#line 1571
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(221)));
#line 1571
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1571
c_rt_lib0hash_set_value_dec(___nl__im_ptr__3, ___get_global_const(506), ___nl__im__4);
#line 1571
___nl__im_ptr__3 = NULL;
#line 1571
c_rt_lib0clear(&___nl__im__4);
#line 1571
c_rt_lib0clear(&___nl__im__5);
#line 1572
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1572
___nl__im_ptr__10 = &((*___ref___rec__2).logic0field);
#line 1572
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1572
___nl__im_ptr__10 = NULL;
#line 1572
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(388)));
#line 1572
c_rt_lib0clear(&___nl__im__9);
#line 1572
___nl__bool__6 = tct0is_own_type(___nl__im__7, ___nl__im__8);
#line 1572
c_rt_lib0clear(&___nl__im__7);
#line 1572
c_rt_lib0clear(&___nl__im__8);
#line 1572
___nl__bool__6 = !___nl__bool__6;
#line 1572
___nl__bool__6 = !___nl__bool__6;
#line 1572
if(___nl__bool__6){ goto label_2;}
#line 1573
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 1574
c_rt_lib0clear(&___nl__im__0);
#line 1574
c_rt_lib0clear(&___nl__im__1);
#line 1574
//clear ___nl__bool__6;
#line 1574
return NULL;
#line 1575
goto label_1;
#line 1575
label_2:
;
#line 1575
label_1:
;
#line 1575
//clear ___nl__bool__6;
#line 1576
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(219)));
#line 1576
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(222));
#line 1576
if(___nl__bool__12){ goto label_4;}
#line 1578
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(528));
#line 1578
if(___nl__bool__12){ goto label_5;}
#line 1580
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(969));
#line 1580
if(___nl__bool__12){ goto label_6;}
#line 1582
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(970));
#line 1582
if(___nl__bool__12){ goto label_7;}
#line 1584
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(518));
#line 1584
if(___nl__bool__12){ goto label_8;}
#line 1605
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(464));
#line 1605
if(___nl__bool__12){ goto label_9;}
#line 1607
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(967));
#line 1607
if(___nl__bool__12){ goto label_10;}
#line 1609
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(234));
#line 1609
if(___nl__bool__12){ goto label_11;}
#line 1611
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(971));
#line 1611
if(___nl__bool__12){ goto label_12;}
#line 1613
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(928));
#line 1613
if(___nl__bool__12){ goto label_13;}
#line 1615
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(230));
#line 1615
if(___nl__bool__12){ goto label_14;}
#line 1623
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(231));
#line 1623
if(___nl__bool__12){ goto label_15;}
#line 1646
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(948));
#line 1646
if(___nl__bool__12){ goto label_16;}
#line 1648
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(972));
#line 1648
if(___nl__bool__12){ goto label_17;}
#line 1650
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(973));
#line 1650
if(___nl__bool__12){ goto label_18;}
#line 1652
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_const(974));
#line 1652
if(___nl__bool__12){ goto label_19;}
#line 1652
c_rt_lib0move(&___nl__im__13,___get_global_const(16));
#line 1652
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__11));
#line 1652
nl_die_arg(___nl__im__13);
#line 1576
label_4:
;
#line 1576
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(222)));
#line 1576
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1577
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__14));
#line 1577
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1577
c_rt_lib0clear(&___nl__im__16);
#line 1578
goto label_3;
#line 1578
label_5:
;
#line 1578
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(528)));
#line 1578
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1579
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1579
nl_die_arg(___nl__im__19);
#line 1580
goto label_3;
#line 1580
label_6:
;
#line 1580
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(969)));
#line 1580
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 1581
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 1581
nl_die_arg(___nl__im__22);
#line 1582
goto label_3;
#line 1582
label_7:
;
#line 1582
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(970)));
#line 1582
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1583
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 1583
nl_die_arg(___nl__im__25);
#line 1584
goto label_3;
#line 1584
label_8:
;
#line 1584
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(518)));
#line 1584
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1587
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(464)));
#line 1587
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(219)));
#line 1587
c_rt_lib0clear(&___nl__im__32);
#line 1587
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__31, ___get_global_const(948));
#line 1587
c_rt_lib0clear(&___nl__im__31);
#line 1587
___nl__bool__30 = !___nl__bool__30;
#line 1587
if(___nl__bool__30){ goto label_21;}
#line 1588
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1589
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(8)));
#line 1590
goto label_20;
#line 1590
label_21:
;
#line 1591
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1591
___nl__im_ptr__38 = &((*___ref___rec__2).logic0field);
#line 1591
c_rt_lib0copy(&___nl__im__37, (*___nl__im_ptr__38));
#line 1591
___nl__im_ptr__38 = NULL;
#line 1591
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_const(388)));
#line 1591
c_rt_lib0clear(&___nl__im__37);
#line 1591
c_rt_lib0move(&___nl__im__34, translator_priv0unwrap_ref(___nl__im__35, ___nl__im__36));
#line 1591
c_rt_lib0clear(&___nl__im__35);
#line 1591
c_rt_lib0clear(&___nl__im__36);
#line 1591
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1591
___nl__im_ptr__43 = &((*___ref___rec__2).logic0field);
#line 1591
c_rt_lib0copy(&___nl__im__42, (*___nl__im_ptr__43));
#line 1591
___nl__im_ptr__43 = NULL;
#line 1591
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(388)));
#line 1591
c_rt_lib0clear(&___nl__im__42);
#line 1591
c_rt_lib0move(&___nl__im__39, translator_priv0unwrap_ref(___nl__im__40, ___nl__im__41));
#line 1591
c_rt_lib0clear(&___nl__im__40);
#line 1591
c_rt_lib0clear(&___nl__im__41);
#line 1591
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__39, ___get_global_const(14)));
#line 1591
c_rt_lib0clear(&___nl__im__34);
#line 1591
c_rt_lib0clear(&___nl__im__39);
#line 1592
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(167)));
#line 1592
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value(___nl__im__33, ___nl__im__45));
#line 1592
c_rt_lib0clear(&___nl__im__45);
#line 1592
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(167)));
#line 1592
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value(___nl__im__33, ___nl__im__47));
#line 1592
c_rt_lib0clear(&___nl__im__47);
#line 1592
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__46, ___get_global_const(28)));
#line 1592
c_rt_lib0clear(&___nl__im__44);
#line 1592
c_rt_lib0clear(&___nl__im__46);
#line 1593
___nl__im_ptr__52 = &((*___ref___rec__2).logic0field);
#line 1593
c_rt_lib0copy(&___nl__im__51, (*___nl__im_ptr__52));
#line 1593
___nl__im_ptr__52 = NULL;
#line 1593
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(388)));
#line 1593
c_rt_lib0clear(&___nl__im__51);
#line 1593
c_rt_lib0move(&___nl__im__49, translator_priv0var_type_to_reg_type(___nl__im__29, ___nl__im__50));
#line 1593
c_rt_lib0clear(&___nl__im__50);
#line 1593
c_rt_lib0move(&___nl__im__48, translator_priv0new_register(___ref___rec__2, ___nl__im__49));
#line 1593
c_rt_lib0clear(&___nl__im__49);
#line 1594
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(464)));
#line 1594
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__53, ___nl__im__48, ___ref___rec__2));
#line 1594
c_rt_lib0clear(&___nl__im__53);
#line 1595
___nl__im_ptr__54 = &((*___ref___rec__2).logic0field);
#line 1595
c_rt_lib0move(&___nl__im__55,___get_global_const(1293));
#line 1595
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_ref_hash((*___nl__im_ptr__54), ___nl__im__55));
#line 1595
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(218)));
#line 1595
___nl__int__57 = getIntFromImm(___nl__im__58);
#line 1595
c_rt_lib0clear(&___nl__im__58);
#line 1595
___nl__bool__59 = false;
#line 1595
c_rt_lib0move(&___nl__im__56, c_rt_lib0bool_to_nl_native(___nl__bool__59));
#line 1595
c_rt_lib0array_set(&___nl__im__55, ___nl__int__57, ___nl__im__56);
#line 1595
c_rt_lib0move(&___nl__string__60,___get_global_const(1293));
#line 1595
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__54, ___nl__string__60, ___nl__im__55));
#line 1595
___nl__im_ptr__54 = NULL;
#line 1595
c_rt_lib0clear(&___nl__im__55);
#line 1595
c_rt_lib0clear(&___nl__im__56);
#line 1595
//clear ___nl__int__57;
#line 1595
//clear ___nl__bool__59;
#line 1595
c_rt_lib0clear(&___nl__string__60);
#line 1596
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(277), ___nl__im__48));
#line 1597
goto label_20;
#line 1597
label_20:
;
#line 1597
//clear ___nl__bool__30;
#line 1597
c_rt_lib0clear(&___nl__im__33);
#line 1597
c_rt_lib0clear(&___nl__im__48);
#line 1601
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(167)));
#line 1602
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1602
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(167)));
#line 1602
___nl__int__64 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__65, ___nl__im__66);
#line 1602
c_rt_lib0clear(&___nl__im__65);
#line 1602
c_rt_lib0clear(&___nl__im__66);
#line 1602
c_rt_lib0move(&___nl__im__67, c_rt_lib0int_new(___nl__int__64));
#line 1602
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(5, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__28, ___get_global_const(535), ___nl__im__63, ___get_global_const(522), ___nl__im__67, ___get_global_const(540), ___nl__im__29));
#line 1602
c_rt_lib0clear(&___nl__im__63);
#line 1602
//clear ___nl__int__64;
#line 1602
c_rt_lib0clear(&___nl__im__67);
#line 1602
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__62));
#line 1602
c_rt_lib0clear(&___nl__im__62);
#line 1602
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__61));
#line 1602
c_rt_lib0clear(&___nl__im__61);
#line 1605
goto label_3;
#line 1605
label_9:
;
#line 1605
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(464)));
#line 1605
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 1606
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 1606
nl_die_arg(___nl__im__70);
#line 1607
goto label_3;
#line 1607
label_10:
;
#line 1607
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(967)));
#line 1607
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 1608
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 1608
nl_die_arg(___nl__im__73);
#line 1609
goto label_3;
#line 1609
label_11:
;
#line 1609
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(234)));
#line 1609
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 1610
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_mk(0));
#line 1610
nl_die_arg(___nl__im__76);
#line 1611
goto label_3;
#line 1611
label_12:
;
#line 1611
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(971)));
#line 1611
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 1612
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_mk(0));
#line 1612
nl_die_arg(___nl__im__79);
#line 1613
goto label_3;
#line 1613
label_13:
;
#line 1613
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(928)));
#line 1613
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1614
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 1614
nl_die_arg(___nl__im__82);
#line 1615
goto label_3;
#line 1615
label_14:
;
#line 1615
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(230)));
#line 1615
c_rt_lib0copy(&___nl__im__83, ___nl__im__84);
#line 1616
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_mk(0));
#line 1616
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__87));
#line 1616
c_rt_lib0clear(&___nl__im__87);
#line 1616
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__86));
#line 1616
c_rt_lib0clear(&___nl__im__86);
#line 1616
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__85));
#line 1616
c_rt_lib0clear(&___nl__im__85);
#line 1617
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1617
___nl__im_ptr__93 = &((*___ref___rec__2).logic0field);
#line 1617
c_rt_lib0copy(&___nl__im__92, (*___nl__im_ptr__93));
#line 1617
___nl__im_ptr__93 = NULL;
#line 1617
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__92, ___get_global_const(388)));
#line 1617
c_rt_lib0clear(&___nl__im__92);
#line 1617
c_rt_lib0move(&___nl__im__89, translator_priv0unwrap_ref(___nl__im__90, ___nl__im__91));
#line 1617
c_rt_lib0clear(&___nl__im__90);
#line 1617
c_rt_lib0clear(&___nl__im__91);
#line 1617
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1617
___nl__im_ptr__98 = &((*___ref___rec__2).logic0field);
#line 1617
c_rt_lib0copy(&___nl__im__97, (*___nl__im_ptr__98));
#line 1617
___nl__im_ptr__98 = NULL;
#line 1617
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__97, ___get_global_const(388)));
#line 1617
c_rt_lib0clear(&___nl__im__97);
#line 1617
c_rt_lib0move(&___nl__im__94, translator_priv0unwrap_ref(___nl__im__95, ___nl__im__96));
#line 1617
c_rt_lib0clear(&___nl__im__95);
#line 1617
c_rt_lib0clear(&___nl__im__96);
#line 1617
c_rt_lib0move(&___nl__im__88, c_rt_lib0priv_as(___nl__im__94, ___get_global_const(2)));
#line 1617
c_rt_lib0clear(&___nl__im__89);
#line 1617
c_rt_lib0clear(&___nl__im__94);
#line 1618
___nl__int__100 = 0;
#line 1618
___nl__int__101 = 1;
#line 1618
___nl__int__102 = c_rt_lib0array_len(___nl__im__83);
#line 1618
label_24:
;
#line 1618
___nl__int__104 = ___nl__int__100 >= ___nl__int__102;
#line 1618
___nl__bool__103 = ___nl__int__104;
#line 1618
if(___nl__bool__103){ goto label_22;}
#line 1618
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_get(___nl__im__83, ___nl__int__100));
#line 1618
c_rt_lib0copy(&___nl__im__99, ___nl__im__105);
#line 1619
___nl__im_ptr__110 = &((*___ref___rec__2).logic0field);
#line 1619
c_rt_lib0copy(&___nl__im__109, (*___nl__im_ptr__110));
#line 1619
___nl__im_ptr__110 = NULL;
#line 1619
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_const(388)));
#line 1619
c_rt_lib0clear(&___nl__im__109);
#line 1619
c_rt_lib0move(&___nl__im__107, translator_priv0var_type_to_reg_type(___nl__im__88, ___nl__im__108));
#line 1619
c_rt_lib0clear(&___nl__im__108);
#line 1619
c_rt_lib0move(&___nl__im__106, translator_priv0new_register(___ref___rec__2, ___nl__im__107));
#line 1619
c_rt_lib0clear(&___nl__im__107);
#line 1620
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__99, ___nl__im__106, ___ref___rec__2));
#line 1621
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__106, ___ref___rec__2));
#line 1621
c_rt_lib0clear(&___nl__im__99);
#line 1622
___nl__int__100 = ___nl__int__100 + ___nl__int__101;
#line 1622
goto label_24;
#line 1622
label_22:
;
#line 1623
goto label_3;
#line 1623
label_15:
;
#line 1623
c_rt_lib0move(&___nl__im__112, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(231)));
#line 1623
c_rt_lib0copy(&___nl__im__111, ___nl__im__112);
#line 1624
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(205)));
#line 1624
___nl__im_ptr__117 = &((*___ref___rec__2).logic0field);
#line 1624
c_rt_lib0copy(&___nl__im__116, (*___nl__im_ptr__117));
#line 1624
___nl__im_ptr__117 = NULL;
#line 1624
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_const(388)));
#line 1624
c_rt_lib0clear(&___nl__im__116);
#line 1624
c_rt_lib0move(&___nl__im__113, translator_priv0unwrap_ref(___nl__im__114, ___nl__im__115));
#line 1624
c_rt_lib0clear(&___nl__im__114);
#line 1624
c_rt_lib0clear(&___nl__im__115);
#line 1625
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(0));
#line 1625
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__1, ___get_global_const(74), ___nl__im__120));
#line 1625
c_rt_lib0clear(&___nl__im__120);
#line 1625
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__119));
#line 1625
c_rt_lib0clear(&___nl__im__119);
#line 1625
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__118));
#line 1625
c_rt_lib0clear(&___nl__im__118);
#line 1626
___nl__bool__121 = c_rt_lib0priv_is(___nl__im__113, ___get_global_const(6));
#line 1626
___nl__bool__121 = !___nl__bool__121;
#line 1626
if(___nl__bool__121){ goto label_26;}
#line 1627
___nl__int__123 = 0;
#line 1627
___nl__int__124 = 1;
#line 1627
___nl__int__125 = c_rt_lib0array_len(___nl__im__111);
#line 1627
label_29:
;
#line 1627
___nl__int__127 = ___nl__int__123 >= ___nl__int__125;
#line 1627
___nl__bool__126 = ___nl__int__127;
#line 1627
if(___nl__bool__126){ goto label_27;}
#line 1627
c_rt_lib0move(&___nl__im__128, c_rt_lib0array_get(___nl__im__111, ___nl__int__123));
#line 1627
c_rt_lib0copy(&___nl__im__122, ___nl__im__128);
#line 1628
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_const(224)));
#line 1628
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_const(205)));
#line 1628
c_rt_lib0clear(&___nl__im__132);
#line 1628
___nl__im_ptr__135 = &((*___ref___rec__2).logic0field);
#line 1628
c_rt_lib0copy(&___nl__im__134, (*___nl__im_ptr__135));
#line 1628
___nl__im_ptr__135 = NULL;
#line 1628
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_const(388)));
#line 1628
c_rt_lib0clear(&___nl__im__134);
#line 1628
c_rt_lib0move(&___nl__im__130, translator_priv0var_type_to_reg_type(___nl__im__131, ___nl__im__133));
#line 1628
c_rt_lib0clear(&___nl__im__131);
#line 1628
c_rt_lib0clear(&___nl__im__133);
#line 1628
c_rt_lib0move(&___nl__im__129, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__130));
#line 1628
c_rt_lib0clear(&___nl__im__130);
#line 1629
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_const(370)));
#line 1629
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_const(219)));
#line 1629
c_rt_lib0clear(&___nl__im__138);
#line 1629
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_const(370)));
#line 1629
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__140, ___get_global_const(219)));
#line 1629
c_rt_lib0clear(&___nl__im__140);
#line 1629
c_rt_lib0move(&___nl__im__136, c_rt_lib0priv_as(___nl__im__139, ___get_global_const(970)));
#line 1629
c_rt_lib0clear(&___nl__im__137);
#line 1629
c_rt_lib0clear(&___nl__im__139);
#line 1630
c_rt_lib0delete(translator_priv0use_field(___nl__im__129, ___nl__im__1, ___nl__im__136, ___ref___rec__2));
#line 1631
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_const(224)));
#line 1631
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__141, ___nl__im__129, ___ref___rec__2));
#line 1631
c_rt_lib0clear(&___nl__im__141);
#line 1632
c_rt_lib0delete(translator_priv0release_field(___nl__im__129, ___nl__im__1, ___nl__im__136, ___ref___rec__2));
#line 1632
c_rt_lib0clear(&___nl__im__122);
#line 1633
___nl__int__123 = ___nl__int__123 + ___nl__int__124;
#line 1633
goto label_29;
#line 1633
label_27:
;
#line 1634
goto label_25;
#line 1634
label_26:
;
#line 1634
___nl__bool__121 = c_rt_lib0priv_is(___nl__im__113, ___get_global_const(4));
#line 1634
___nl__bool__121 = !___nl__bool__121;
#line 1634
if(___nl__bool__121){ goto label_30;}
#line 1635
___nl__int__143 = 0;
#line 1635
___nl__int__144 = 1;
#line 1635
___nl__int__145 = c_rt_lib0array_len(___nl__im__111);
#line 1635
label_33:
;
#line 1635
___nl__int__147 = ___nl__int__143 >= ___nl__int__145;
#line 1635
___nl__bool__146 = ___nl__int__147;
#line 1635
if(___nl__bool__146){ goto label_31;}
#line 1635
c_rt_lib0move(&___nl__im__148, c_rt_lib0array_get(___nl__im__111, ___nl__int__143));
#line 1635
c_rt_lib0copy(&___nl__im__142, ___nl__im__148);
#line 1636
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_const(224)));
#line 1636
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__152, ___get_global_const(205)));
#line 1636
c_rt_lib0clear(&___nl__im__152);
#line 1636
___nl__im_ptr__155 = &((*___ref___rec__2).logic0field);
#line 1636
c_rt_lib0copy(&___nl__im__154, (*___nl__im_ptr__155));
#line 1636
___nl__im_ptr__155 = NULL;
#line 1636
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_const(388)));
#line 1636
c_rt_lib0clear(&___nl__im__154);
#line 1636
c_rt_lib0move(&___nl__im__150, translator_priv0var_type_to_reg_type(___nl__im__151, ___nl__im__153));
#line 1636
c_rt_lib0clear(&___nl__im__151);
#line 1636
c_rt_lib0clear(&___nl__im__153);
#line 1636
c_rt_lib0move(&___nl__im__149, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__150));
#line 1636
c_rt_lib0clear(&___nl__im__150);
#line 1637
c_rt_lib0move(&___nl__im__157, c_rt_lib0ov_mk_none(___get_global_const(528)));
#line 1637
c_rt_lib0move(&___nl__im__156, translator_priv0new_register(___ref___rec__2, ___nl__im__157));
#line 1637
c_rt_lib0clear(&___nl__im__157);
#line 1638
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_const(370)));
#line 1638
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_const(219)));
#line 1638
c_rt_lib0clear(&___nl__im__160);
#line 1638
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_const(370)));
#line 1638
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_const(219)));
#line 1638
c_rt_lib0clear(&___nl__im__162);
#line 1638
c_rt_lib0move(&___nl__im__158, c_rt_lib0priv_as(___nl__im__161, ___get_global_const(970)));
#line 1638
c_rt_lib0clear(&___nl__im__159);
#line 1638
c_rt_lib0clear(&___nl__im__161);
#line 1638
c_rt_lib0delete(translator_priv0load_const(___nl__im__158, ___nl__im__156, ___ref___rec__2));
#line 1638
c_rt_lib0clear(&___nl__im__158);
#line 1639
___nl__bool__163 = true;
#line 1639
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__149, ___nl__im__1, ___nl__im__156, ___nl__bool__163, ___ref___rec__2));
#line 1639
//clear ___nl__bool__163;
#line 1640
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_const(224)));
#line 1640
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__164, ___nl__im__149, ___ref___rec__2));
#line 1640
c_rt_lib0clear(&___nl__im__164);
#line 1641
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__149, ___nl__im__1, ___nl__im__156, ___ref___rec__2));
#line 1641
c_rt_lib0clear(&___nl__im__142);
#line 1642
___nl__int__143 = ___nl__int__143 + ___nl__int__144;
#line 1642
goto label_33;
#line 1642
label_31:
;
#line 1643
goto label_25;
#line 1643
label_30:
;
#line 1644
c_rt_lib0move(&___nl__im__165, c_rt_lib0array_mk(0));
#line 1644
nl_die_arg(___nl__im__165);
#line 1645
goto label_25;
#line 1645
label_25:
;
#line 1645
//clear ___nl__bool__121;
#line 1645
c_rt_lib0clear(&___nl__im__122);
#line 1645
//clear ___nl__int__123;
#line 1645
//clear ___nl__int__124;
#line 1645
//clear ___nl__int__125;
#line 1645
//clear ___nl__bool__126;
#line 1645
//clear ___nl__int__127;
#line 1645
c_rt_lib0clear(&___nl__im__128);
#line 1645
c_rt_lib0clear(&___nl__im__129);
#line 1645
c_rt_lib0clear(&___nl__im__136);
#line 1645
c_rt_lib0clear(&___nl__im__142);
#line 1645
//clear ___nl__int__143;
#line 1645
//clear ___nl__int__144;
#line 1645
//clear ___nl__int__145;
#line 1645
//clear ___nl__bool__146;
#line 1645
//clear ___nl__int__147;
#line 1645
c_rt_lib0clear(&___nl__im__148);
#line 1645
c_rt_lib0clear(&___nl__im__149);
#line 1645
c_rt_lib0clear(&___nl__im__156);
#line 1645
c_rt_lib0clear(&___nl__im__165);
#line 1646
goto label_3;
#line 1646
label_16:
;
#line 1647
c_rt_lib0move(&___nl__im__166, c_rt_lib0array_mk(0));
#line 1647
nl_die_arg(___nl__im__166);
#line 1648
goto label_3;
#line 1648
label_17:
;
#line 1648
c_rt_lib0move(&___nl__im__168, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(972)));
#line 1648
c_rt_lib0copy(&___nl__im__167, ___nl__im__168);
#line 1649
c_rt_lib0move(&___nl__im__169, c_rt_lib0array_mk(0));
#line 1649
nl_die_arg(___nl__im__169);
#line 1650
goto label_3;
#line 1650
label_18:
;
#line 1650
c_rt_lib0move(&___nl__im__171, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(973)));
#line 1650
c_rt_lib0copy(&___nl__im__170, ___nl__im__171);
#line 1651
c_rt_lib0move(&___nl__im__172, c_rt_lib0array_mk(0));
#line 1651
nl_die_arg(___nl__im__172);
#line 1652
goto label_3;
#line 1652
label_19:
;
#line 1652
c_rt_lib0move(&___nl__im__174, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(974)));
#line 1652
c_rt_lib0copy(&___nl__im__173, ___nl__im__174);
#line 1653
c_rt_lib0move(&___nl__im__175, c_rt_lib0array_mk(0));
#line 1653
nl_die_arg(___nl__im__175);
#line 1654
goto label_3;
#line 1654
label_3:
;
#line 1654
c_rt_lib0clear(&___nl__im__0);
#line 1654
c_rt_lib0clear(&___nl__im__1);
#line 1654
c_rt_lib0clear(&___nl__im__11);
#line 1654
//clear ___nl__bool__12;
#line 1654
c_rt_lib0clear(&___nl__im__13);
#line 1654
//clear ___nl__int__14;
#line 1654
c_rt_lib0clear(&___nl__im__15);
#line 1654
c_rt_lib0clear(&___nl__im__17);
#line 1654
c_rt_lib0clear(&___nl__im__18);
#line 1654
c_rt_lib0clear(&___nl__im__19);
#line 1654
c_rt_lib0clear(&___nl__im__20);
#line 1654
c_rt_lib0clear(&___nl__im__21);
#line 1654
c_rt_lib0clear(&___nl__im__22);
#line 1654
c_rt_lib0clear(&___nl__im__23);
#line 1654
c_rt_lib0clear(&___nl__im__24);
#line 1654
c_rt_lib0clear(&___nl__im__25);
#line 1654
c_rt_lib0clear(&___nl__im__26);
#line 1654
c_rt_lib0clear(&___nl__im__27);
#line 1654
c_rt_lib0clear(&___nl__im__28);
#line 1654
c_rt_lib0clear(&___nl__im__29);
#line 1654
c_rt_lib0clear(&___nl__im__68);
#line 1654
c_rt_lib0clear(&___nl__im__69);
#line 1654
c_rt_lib0clear(&___nl__im__70);
#line 1654
c_rt_lib0clear(&___nl__im__71);
#line 1654
c_rt_lib0clear(&___nl__im__72);
#line 1654
c_rt_lib0clear(&___nl__im__73);
#line 1654
c_rt_lib0clear(&___nl__im__74);
#line 1654
c_rt_lib0clear(&___nl__im__75);
#line 1654
c_rt_lib0clear(&___nl__im__76);
#line 1654
c_rt_lib0clear(&___nl__im__77);
#line 1654
c_rt_lib0clear(&___nl__im__78);
#line 1654
c_rt_lib0clear(&___nl__im__79);
#line 1654
c_rt_lib0clear(&___nl__im__80);
#line 1654
c_rt_lib0clear(&___nl__im__81);
#line 1654
c_rt_lib0clear(&___nl__im__82);
#line 1654
c_rt_lib0clear(&___nl__im__83);
#line 1654
c_rt_lib0clear(&___nl__im__84);
#line 1654
c_rt_lib0clear(&___nl__im__88);
#line 1654
c_rt_lib0clear(&___nl__im__99);
#line 1654
//clear ___nl__int__100;
#line 1654
//clear ___nl__int__101;
#line 1654
//clear ___nl__int__102;
#line 1654
//clear ___nl__bool__103;
#line 1654
//clear ___nl__int__104;
#line 1654
c_rt_lib0clear(&___nl__im__105);
#line 1654
c_rt_lib0clear(&___nl__im__106);
#line 1654
c_rt_lib0clear(&___nl__im__111);
#line 1654
c_rt_lib0clear(&___nl__im__112);
#line 1654
c_rt_lib0clear(&___nl__im__113);
#line 1654
c_rt_lib0clear(&___nl__im__166);
#line 1654
c_rt_lib0clear(&___nl__im__167);
#line 1654
c_rt_lib0clear(&___nl__im__168);
#line 1654
c_rt_lib0clear(&___nl__im__169);
#line 1654
c_rt_lib0clear(&___nl__im__170);
#line 1654
c_rt_lib0clear(&___nl__im__171);
#line 1654
c_rt_lib0clear(&___nl__im__172);
#line 1654
c_rt_lib0clear(&___nl__im__173);
#line 1654
c_rt_lib0clear(&___nl__im__174);
#line 1654
c_rt_lib0clear(&___nl__im__175);
#line 1654
return NULL;
return NULL;
}

tct0meta_type0type translator_priv0unwrap_ref(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 1658
label_2:
;
#line 1658
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 1658
___nl__bool__2 = !___nl__bool__2;
#line 1658
if(___nl__bool__2){ goto label_1;}
#line 1659
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 1660
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__3));
#line 1660
c_rt_lib0clear(&___nl__im__3);
#line 1661
goto label_2;
#line 1661
label_1:
;
#line 1662
c_rt_lib0clear(&___nl__im__1);
#line 1662
//clear ___nl__bool__2;
#line 1662
c_rt_lib0clear(&___nl__im__3);
#line 1662
return ___nl__im__0;
return NULL;
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
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
#line 1666
___nl__int__3 = 0;
#line 1667
___nl__im_ptr__7 = &((*___ref___rec__0).logic0field);
#line 1667
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1667
___nl__im_ptr__7 = NULL;
#line 1667
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(388)));
#line 1667
c_rt_lib0clear(&___nl__im__6);
#line 1667
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__1, ___nl__im__5));
#line 1667
c_rt_lib0clear(&___nl__im__5);
#line 1668
___nl__im_ptr__11 = &((*___ref___rec__0).logic0field);
#line 1668
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 1668
___nl__im_ptr__11 = NULL;
#line 1668
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(388)));
#line 1668
c_rt_lib0clear(&___nl__im__10);
#line 1668
___nl__bool__8 = tct0is_own_type(___nl__im__1, ___nl__im__9);
#line 1668
c_rt_lib0clear(&___nl__im__9);
#line 1668
___nl__bool__8 = !___nl__bool__8;
#line 1668
___nl__bool__8 = !___nl__bool__8;
#line 1668
if(___nl__bool__8){ goto label_2;}
#line 1669
___nl__int__12 = 1;
#line 1669
___nl__int__12 = -___nl__int__12;
#line 1669
c_rt_lib0clear(&___nl__im__1);
#line 1669
c_rt_lib0clear(&___nl__im__2);
#line 1669
//clear ___nl__int__3;
#line 1669
c_rt_lib0clear(&___nl__im__4);
#line 1669
//clear ___nl__bool__8;
#line 1669
return ___nl__int__12;
#line 1670
goto label_1;
#line 1670
label_2:
;
#line 1670
label_1:
;
#line 1670
//clear ___nl__bool__8;
#line 1670
//clear ___nl__int__12;
#line 1671
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(14)));
#line 1671
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__13));
#line 1671
label_5:
;
#line 1671
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 1671
if(___nl__bool__15){ goto label_3;}
#line 1671
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 1671
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__13, ___nl__im__14));
#line 1672
___nl__bool__18 = c_rt_lib0eq(___nl__im__14, ___nl__im__2);
#line 1672
___nl__bool__18 = !___nl__bool__18;
#line 1672
if(___nl__bool__18){ goto label_7;}
#line 1672
c_rt_lib0clear(&___nl__im__1);
#line 1672
c_rt_lib0clear(&___nl__im__2);
#line 1672
c_rt_lib0clear(&___nl__im__4);
#line 1672
c_rt_lib0clear(&___nl__im__13);
#line 1672
c_rt_lib0clear(&___nl__im__14);
#line 1672
//clear ___nl__bool__15;
#line 1672
c_rt_lib0clear(&___nl__im__16);
#line 1672
c_rt_lib0clear(&___nl__im__17);
#line 1672
//clear ___nl__bool__18;
#line 1672
return ___nl__int__3;
#line 1672
goto label_6;
#line 1672
label_7:
;
#line 1672
label_6:
;
#line 1672
//clear ___nl__bool__18;
#line 1673
___nl__int__19 = 1;
#line 1673
___nl__int__3 = ___nl__int__3 + ___nl__int__19;
#line 1673
//clear ___nl__int__19;
#line 1674
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 1674
goto label_5;
#line 1674
label_3:
;
#line 1675
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1675
nl_die_arg(___nl__im__20);
return 0;
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_const(1299), ___nl__im__4, ___get_global_const(221), ___nl__im__5, ___get_global_const(1296), ___nl__im__7, ___get_global_const(212), ___nl__im__9, ___get_global_const(449), ___nl__im__11, ___get_global_const(1298), ___nl__im__13));
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
