
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

void translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0clear(anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE rec) {
;
c_rt_lib0delete(rec.debug0field);
c_rt_lib0delete(rec.logic0field);
c_rt_lib0delete(rec.module_name0field);
c_rt_lib0delete(rec.result0field);
c_rt_lib0delete(rec.loop_label0field);
}
void translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0free(anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE *rec) {
translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0clear(*rec);
free_mem(rec, sizeof(*rec));
}
void translator0state_t0type0clear(translator0state_t0type rec) {
;
c_rt_lib0delete(rec.debug0field);
c_rt_lib0delete(rec.logic0field);
c_rt_lib0delete(rec.module_name0field);
c_rt_lib0delete(rec.result0field);
c_rt_lib0delete(rec.loop_label0field);
}
void translator0state_t0type0free(translator0state_t0type *rec) {
translator0state_t0type0clear(*rec);
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
ImmT  res = translator0function_logic_t();
return res;
}
ImmT translator0function_logic_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(0);
}
ImmT translator0function_logic_t0cal() {
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 19
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 19
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 20
c_rt_lib0move(&___nl__im__9, ptd0hash(___nl__im__10));
#line 20
c_rt_lib0clear(&___nl__im__10);
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(237), ___nl__im__2, ___get_global_string_const(481), ___nl__im__4, ___get_global_string_const(1415), ___nl__im__5, ___get_global_string_const(787), ___nl__im__7, ___get_global_string_const(429), ___nl__im__9));
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
ImmT  res = translator0loop();
return res;
}
ImmT translator0loop(){
translator_priv0__const__init();
return translator_priv0__const__sing(1);
}
ImmT translator0loop0cal() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_string_const(350), ___get_global_string_const(1180)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_string_const(1416), ___get_global_string_const(1417)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 25
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(571), ___nl__im__2, ___get_global_string_const(1418), ___nl__im__3, ___get_global_string_const(1419), ___nl__im__4));
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
ImmT  res = translator0loop_label();
return res;
}
ImmT translator0loop_label(){
translator_priv0__const__init();
return translator_priv0__const__sing(2);
}
ImmT translator0loop_label0cal() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 29
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_string_const(1416), ___get_global_string_const(174)));
#line 29
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_string_const(1416), ___get_global_string_const(174)));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 29
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(1083), ___nl__im__2, ___get_global_string_const(1084), ___nl__im__3));
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
ImmT  res = translator0state_t();
return res;
}
ImmT translator0state_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(3);
}
ImmT translator0state_t0cal() {
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_string_const(350), ___get_global_string_const(923)));
#line 35
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_string_const(1416), ___get_global_string_const(1417)));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 37
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_string_const(350), ___get_global_string_const(903)));
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_string_const(1416), ___get_global_string_const(1420)));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(1421), ___nl__im__2, ___get_global_string_const(216), ___nl__im__3, ___get_global_string_const(1418), ___nl__im__4, ___get_global_string_const(235), ___nl__im__5, ___get_global_string_const(499), ___nl__im__6, ___get_global_string_const(1420), ___nl__im__7));
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
ImmT  res = translator0string_t();
return res;
}
ImmT translator0string_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(4);
}
ImmT translator0string_t0cal() {
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(744), ___nl__im__6, ___get_global_string_const(1145), ___nl__im__7));
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0clear(&___nl__im__7);
#line 44
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(142), ___nl__im__2, ___get_global_string_const(1146), ___nl__im__4));
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
ImmT  res = translator0lvalue_values_t();
return res;
}
ImmT translator0lvalue_values_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(5);
}
ImmT translator0lvalue_values_t0cal() {
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 49
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__6, ___get_global_string_const(376), ___nl__im__7));
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 51
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 51
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__10, ___get_global_string_const(586), ___nl__im__11));
#line 51
c_rt_lib0clear(&___nl__im__10);
#line 51
c_rt_lib0clear(&___nl__im__11);
#line 51
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 51
c_rt_lib0clear(&___nl__im__9);
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__14));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 52
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__14, ___get_global_string_const(1423), ___nl__im__15, ___get_global_string_const(615), ___nl__im__16));
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
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 53
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__19));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__21));
#line 53
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__19, ___get_global_string_const(1423), ___nl__im__20, ___get_global_string_const(376), ___nl__im__21));
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
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__24));
#line 54
c_rt_lib0move(&___nl__im__25, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__24, ___get_global_string_const(571), ___nl__im__25));
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__28));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__29));
#line 55
c_rt_lib0move(&___nl__im__30, ptd0string());
#line 55
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__28, ___get_global_string_const(1423), ___nl__im__29, ___get_global_string_const(571), ___nl__im__30));
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
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 56
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__33));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__34));
#line 56
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__33, ___get_global_string_const(586), ___nl__im__34));
#line 56
c_rt_lib0clear(&___nl__im__33);
#line 56
c_rt_lib0clear(&___nl__im__34);
#line 56
c_rt_lib0move(&___nl__im__31, ptd0rec(___nl__im__32));
#line 56
c_rt_lib0clear(&___nl__im__32);
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__37));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__38));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(350), ___get_global_string_const(352)));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__39));
#line 57
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__37, ___get_global_string_const(1423), ___nl__im__38, ___get_global_string_const(376), ___nl__im__39));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(9, ___get_global_string_const(241), ___nl__im__3, ___get_global_string_const(376), ___nl__im__4, ___get_global_string_const(586), ___nl__im__8, ___get_global_string_const(273), ___nl__im__12, ___get_global_string_const(275), ___nl__im__17, ___get_global_string_const(1130), ___nl__im__22, ___get_global_string_const(279), ___nl__im__26, ___get_global_string_const(1410), ___nl__im__31, ___get_global_string_const(277), ___nl__im__35));
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

ImmT  translator0last_debug_char0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0last_debug_char");
nast0debug_t0type *var0 = &(_tab[0]);
nast0debug_t0type res = translator0last_debug_char(*var0);
return res;
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
ImmT  ___nl__im__22 = NULL;
#line 62
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(744)));
#line 62
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(168)));
#line 62
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__2));
#line 62
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(744)));
#line 62
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1157)));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(168), ___nl__im__5, ___get_global_string_const(1157), ___nl__im__11));
#line 62
//clear ___nl__int__2;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
//clear ___nl__int__6;
#line 62
c_rt_lib0clear(&___nl__im__11);
#line 63
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(744)));
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(168)));
#line 63
___nl__int__13 = getIntFromImm(___nl__im__15);
#line 63
c_rt_lib0clear(&___nl__im__14);
#line 63
c_rt_lib0clear(&___nl__im__15);
#line 63
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__13));
#line 63
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(744)));
#line 63
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1157)));
#line 63
___nl__int__17 = getIntFromImm(___nl__im__19);
#line 63
c_rt_lib0clear(&___nl__im__18);
#line 63
c_rt_lib0clear(&___nl__im__19);
#line 63
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__17));
#line 63
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(168), ___nl__im__16, ___get_global_string_const(1157), ___nl__im__20));
#line 63
//clear ___nl__int__13;
#line 63
c_rt_lib0clear(&___nl__im__16);
#line 63
//clear ___nl__int__17;
#line 63
c_rt_lib0clear(&___nl__im__20);
#line 64
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1135)));
#line 64
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__1, ___get_global_string_const(744), ___nl__im__12, ___get_global_string_const(1135), ___nl__im__22));
#line 64
c_rt_lib0clear(&___nl__im__22);
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

ImmT  translator0translate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "translator0translate");
nast0module_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
nlasm0result_t0type res = translator0translate(*var0, *var1);
return res;
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
translator0state_t0type ___nl__rec__31 = {
.own_to_im = (own_to_im_function*)translator0conv_to_im00state_t
};
INT * ___nl__int_ptr__32 = NULL;
ImmT * ___nl__im_ptr__33 = NULL;
ImmT * ___nl__im_ptr__34 = NULL;
ImmT * ___nl__im_ptr__35 = NULL;
ImmT * ___nl__im_ptr__36 = NULL;
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
INT  ___nl__int__47 = 0;
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 68
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(235), ___nl__im__3, ___get_global_string_const(222), ___nl__im__4, ___get_global_string_const(489), ___nl__im__5));
#line 68
c_rt_lib0clear(&___nl__im__3);
#line 68
c_rt_lib0clear(&___nl__im__4);
#line 68
c_rt_lib0clear(&___nl__im__5);
#line 69
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 69
c_rt_lib0copy(&___nl__im__7, ___nl__im__6);
#line 69
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(489), ___nl__im__7);
#line 69
c_rt_lib0clear(&___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(184)));
#line 70
___nl__int__10 = 0;
#line 70
___nl__int__11 = 1;
#line 70
___nl__int__12 = c_rt_lib0array_len(___nl__im__8);
#line 70
label_16:
;
#line 70
___nl__bool__13 = ___nl__int__10 >= ___nl__int__12;
#line 70
if(___nl__bool__13){ goto label_33;}
#line 70
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__8, ___nl__int__10));
#line 70
c_rt_lib0copy(&___nl__im__9, ___nl__im__14);
#line 71
c_rt_lib0move(&___nl__im__15,___get_global_string_const(489));
#line 71
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__15));
#line 71
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(185)));
#line 71
c_rt_lib0delete(array0push(&___nl__im__15, ___nl__im__16));
#line 71
c_rt_lib0move(&___nl__string__17,___get_global_string_const(489));
#line 71
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__17, ___nl__im__15));
#line 71
c_rt_lib0clear(&___nl__im__15);
#line 71
c_rt_lib0clear(&___nl__im__16);
#line 71
c_rt_lib0clear(&___nl__string__17);
#line 71
c_rt_lib0clear(&___nl__im__9);
#line 72
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 72
goto label_16;
#line 72
label_33:
;
#line 73
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 73
___nl__int__20 = 0;
#line 73
___nl__int__21 = 1;
#line 73
___nl__int__22 = c_rt_lib0array_len(___nl__im__18);
#line 73
label_38:
;
#line 73
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 73
if(___nl__bool__23){ goto label_135;}
#line 73
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__18, ___nl__int__20));
#line 73
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 75
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(0));
#line 76
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 77
___nl__int__28 = 0;
#line 77
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__28));
#line 78
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 78
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(5, ___get_global_string_const(787), ___nl__im__26, ___get_global_string_const(237), ___nl__im__27, ___get_global_string_const(481), ___nl__im__29, ___get_global_string_const(1415), ___nl__im__30, ___get_global_string_const(429), ___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__26);
#line 78
c_rt_lib0clear(&___nl__im__27);
#line 78
//clear ___nl__int__28;
#line 78
c_rt_lib0clear(&___nl__im__29);
#line 78
c_rt_lib0clear(&___nl__im__30);
#line 81
;
#line 81
___nl__int_ptr__32 = &(___nl__rec__31.label_nr0field);
#line 82
(*___nl__int_ptr__32) = 0;
#line 82
___nl__int_ptr__32 = NULL;
#line 82
___nl__im_ptr__33 = &(___nl__rec__31.debug0field);
#line 83
c_rt_lib0move(___nl__im_ptr__33, nlasm0empty_debug());
#line 83
___nl__im_ptr__33 = NULL;
#line 83
___nl__im_ptr__34 = &(___nl__rec__31.module_name0field);
#line 84
c_rt_lib0move(___nl__im_ptr__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 84
___nl__im_ptr__34 = NULL;
#line 84
___nl__im_ptr__35 = &(___nl__rec__31.logic0field);
#line 85
c_rt_lib0copy(___nl__im_ptr__35, ___nl__im__25);
#line 85
___nl__im_ptr__35 = NULL;
#line 85
___nl__im_ptr__36 = &(___nl__rec__31.result0field);
#line 87
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 88
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(232)));
#line 89
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 90
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(0));
#line 91
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 92
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 93
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(0));
#line 94
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(185)));
#line 95
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(114)));
#line 96
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(0));
#line 97
___nl__int__47 = 1;
#line 97
___nl__int__47 = -___nl__int__47;
#line 97
c_rt_lib0move(&___nl__im__48, c_rt_lib0int_new(___nl__int__47));
#line 97
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_mk(11, ___get_global_string_const(247), ___nl__im__37, ___get_global_string_const(232), ___nl__im__38, ___get_global_string_const(237), ___nl__im__39, ___get_global_string_const(236), ___nl__im__40, ___get_global_string_const(220), ___nl__im__41, ___get_global_string_const(428), ___nl__im__42, ___get_global_string_const(223), ___nl__im__43, ___get_global_string_const(185), ___nl__im__44, ___get_global_string_const(114), ___nl__im__45, ___get_global_string_const(787), ___nl__im__46, ___get_global_string_const(168), ___nl__im__48));
#line 97
c_rt_lib0clear(&___nl__im__37);
#line 97
c_rt_lib0clear(&___nl__im__38);
#line 97
c_rt_lib0clear(&___nl__im__39);
#line 97
c_rt_lib0clear(&___nl__im__40);
#line 97
c_rt_lib0clear(&___nl__im__41);
#line 97
c_rt_lib0clear(&___nl__im__42);
#line 97
c_rt_lib0clear(&___nl__im__43);
#line 97
c_rt_lib0clear(&___nl__im__44);
#line 97
c_rt_lib0clear(&___nl__im__45);
#line 97
c_rt_lib0clear(&___nl__im__46);
#line 97
//clear ___nl__int__47;
#line 97
c_rt_lib0clear(&___nl__im__48);
#line 97
___nl__im_ptr__36 = NULL;
#line 97
___nl__im_ptr__49 = &(___nl__rec__31.loop_label0field);
#line 100
___nl__int__51 = 1;
#line 100
___nl__int__51 = -___nl__int__51;
#line 100
c_rt_lib0move(&___nl__im__52, c_rt_lib0int_new(___nl__int__51));
#line 100
___nl__bool__53 = false;
#line 100
c_rt_lib0move(&___nl__im__54, c_rt_lib0bool_to_nl_native(___nl__bool__53));
#line 100
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(3, ___get_global_string_const(571), ___nl__im__52, ___get_global_string_const(1418), ___nl__im__25, ___get_global_string_const(1419), ___nl__im__54));
#line 100
//clear ___nl__int__51;
#line 100
c_rt_lib0clear(&___nl__im__52);
#line 100
//clear ___nl__bool__53;
#line 100
c_rt_lib0clear(&___nl__im__54);
#line 101
___nl__int__56 = 1;
#line 101
___nl__int__56 = -___nl__int__56;
#line 101
c_rt_lib0move(&___nl__im__57, c_rt_lib0int_new(___nl__int__56));
#line 101
___nl__bool__58 = false;
#line 101
c_rt_lib0move(&___nl__im__59, c_rt_lib0bool_to_nl_native(___nl__bool__58));
#line 101
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_string_const(571), ___nl__im__57, ___get_global_string_const(1418), ___nl__im__25, ___get_global_string_const(1419), ___nl__im__59));
#line 101
//clear ___nl__int__56;
#line 101
c_rt_lib0clear(&___nl__im__57);
#line 101
//clear ___nl__bool__58;
#line 101
c_rt_lib0clear(&___nl__im__59);
#line 101
c_rt_lib0move(___nl__im_ptr__49, c_rt_lib0hash_mk(2, ___get_global_string_const(1083), ___nl__im__50, ___get_global_string_const(1084), ___nl__im__55));
#line 101
c_rt_lib0clear(&___nl__im__50);
#line 101
c_rt_lib0clear(&___nl__im__55);
#line 101
___nl__im_ptr__49 = NULL;
#line 104
c_rt_lib0delete(translator_priv0print_fun_def(___nl__im__19, &___nl__rec__31));
#line 105
c_rt_lib0move(&___nl__im__60,___get_global_string_const(222));
#line 105
c_rt_lib0move(&___nl__im__60, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__60));
#line 105
___nl__im_ptr__62 = &(___nl__rec__31.result0field);
#line 105
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 105
___nl__im_ptr__62 = NULL;
#line 105
c_rt_lib0delete(array0push(&___nl__im__60, ___nl__im__61));
#line 105
c_rt_lib0move(&___nl__string__63,___get_global_string_const(222));
#line 105
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__63, ___nl__im__60));
#line 105
c_rt_lib0clear(&___nl__im__60);
#line 105
c_rt_lib0clear(&___nl__im__61);
#line 105
c_rt_lib0clear(&___nl__string__63);
#line 105
c_rt_lib0clear(&___nl__im__19);
#line 106
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 106
goto label_38;
#line 106
label_135:
;
#line 107
c_rt_lib0clear(&___nl__im__0);
#line 107
c_rt_lib0clear(&___nl__im__1);
#line 107
c_rt_lib0clear(&___nl__im__8);
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
//clear ___nl__int__10;
#line 107
//clear ___nl__int__11;
#line 107
//clear ___nl__int__12;
#line 107
//clear ___nl__bool__13;
#line 107
c_rt_lib0clear(&___nl__im__14);
#line 107
c_rt_lib0clear(&___nl__im__18);
#line 107
c_rt_lib0clear(&___nl__im__19);
#line 107
//clear ___nl__int__20;
#line 107
//clear ___nl__int__21;
#line 107
//clear ___nl__int__22;
#line 107
//clear ___nl__bool__23;
#line 107
c_rt_lib0clear(&___nl__im__24);
#line 107
c_rt_lib0clear(&___nl__im__25);
#line 107
translator0state_t0type0clear(___nl__rec__31);;
#line 107
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
ImmT * ___nl__im_ptr__18 = NULL;
ImmT  ___nl__im__19 = NULL;
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
ImmT  ___nl__im__38 = NULL;
ImmT * ___nl__im_ptr__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__string__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT * ___nl__im_ptr__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT * ___nl__im_ptr__51 = NULL;
ImmT * ___nl__im_ptr__52 = NULL;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
ImmT * ___nl__im_ptr__56 = NULL;
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
bool  ___nl__bool__72 = false;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT * ___nl__im_ptr__81 = NULL;
bool  ___nl__bool__82 = false;
#line 111
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(113)));
#line 111
___nl__int__4 = 0;
#line 111
___nl__int__5 = 1;
#line 111
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 111
label_4:
;
#line 111
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 111
if(___nl__bool__7){ goto label_87;}
#line 111
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 111
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 112
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(111)));
#line 112
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(76));
#line 112
if(___nl__bool__10){ goto label_17;}
#line 116
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(39));
#line 116
if(___nl__bool__10){ goto label_50;}
#line 116
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 116
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 116
nl_die_arg(___nl__im__11);
#line 112
label_17:
;
#line 113
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(185)));
#line 113
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(221)));
#line 113
___nl__im_ptr__18 = &((*___ref___rec__1).logic0field);
#line 113
c_rt_lib0copy(&___nl__im__17, (*___nl__im_ptr__18));
#line 113
___nl__im_ptr__18 = NULL;
#line 113
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(429)));
#line 113
c_rt_lib0clear(&___nl__im__17);
#line 113
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__15, ___nl__im__16));
#line 113
c_rt_lib0clear(&___nl__im__15);
#line 113
c_rt_lib0clear(&___nl__im__16);
#line 113
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 113
c_rt_lib0move(&___nl__im__12, translator_priv0new_declaration(___nl__im__13, ___ref___rec__1, ___nl__im__14, ___nl__im__19));
#line 113
c_rt_lib0clear(&___nl__im__13);
#line 113
c_rt_lib0clear(&___nl__im__14);
#line 113
c_rt_lib0clear(&___nl__im__19);
#line 114
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(245)));
#line 114
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(221)));
#line 114
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(185)));
#line 114
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(4, ___get_global_string_const(368), ___nl__im__21, ___get_global_string_const(481), ___nl__im__12, ___get_global_string_const(110), ___nl__im__22, ___get_global_string_const(185), ___nl__im__23));
#line 114
c_rt_lib0clear(&___nl__im__21);
#line 114
c_rt_lib0clear(&___nl__im__22);
#line 114
c_rt_lib0clear(&___nl__im__23);
#line 115
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 115
c_rt_lib0move(&___nl__im__25,___get_global_string_const(236));
#line 115
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___nl__im_ptr__24), ___nl__im__25));
#line 115
c_rt_lib0delete(array0push(&___nl__im__25, ___nl__im__20));
#line 115
c_rt_lib0move(&___nl__string__26,___get_global_string_const(236));
#line 115
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__24, ___nl__string__26, ___nl__im__25));
#line 115
___nl__im_ptr__24 = NULL;
#line 115
c_rt_lib0clear(&___nl__im__25);
#line 115
c_rt_lib0clear(&___nl__string__26);
#line 116
goto label_83;
#line 116
label_50:
;
#line 117
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(185)));
#line 117
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(221)));
#line 117
___nl__im_ptr__33 = &((*___ref___rec__1).logic0field);
#line 117
c_rt_lib0copy(&___nl__im__32, (*___nl__im_ptr__33));
#line 117
___nl__im_ptr__33 = NULL;
#line 117
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(429)));
#line 117
c_rt_lib0clear(&___nl__im__32);
#line 117
c_rt_lib0move(&___nl__im__29, translator_priv0var_type_to_reg_type(___nl__im__30, ___nl__im__31));
#line 117
c_rt_lib0clear(&___nl__im__30);
#line 117
c_rt_lib0clear(&___nl__im__31);
#line 117
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 117
c_rt_lib0move(&___nl__im__27, translator_priv0new_declaration(___nl__im__28, ___ref___rec__1, ___nl__im__29, ___nl__im__34));
#line 117
c_rt_lib0clear(&___nl__im__28);
#line 117
c_rt_lib0clear(&___nl__im__29);
#line 117
c_rt_lib0clear(&___nl__im__34);
#line 118
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 118
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(221)));
#line 118
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(185)));
#line 118
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(4, ___get_global_string_const(368), ___nl__im__36, ___get_global_string_const(481), ___nl__im__27, ___get_global_string_const(110), ___nl__im__37, ___get_global_string_const(185), ___nl__im__38));
#line 118
c_rt_lib0clear(&___nl__im__36);
#line 118
c_rt_lib0clear(&___nl__im__37);
#line 118
c_rt_lib0clear(&___nl__im__38);
#line 119
___nl__im_ptr__39 = &((*___ref___rec__1).result0field);
#line 119
c_rt_lib0move(&___nl__im__40,___get_global_string_const(236));
#line 119
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___nl__im_ptr__39), ___nl__im__40));
#line 119
c_rt_lib0delete(array0push(&___nl__im__40, ___nl__im__35));
#line 119
c_rt_lib0move(&___nl__string__41,___get_global_string_const(236));
#line 119
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__39, ___nl__string__41, ___nl__im__40));
#line 119
___nl__im_ptr__39 = NULL;
#line 119
c_rt_lib0clear(&___nl__im__40);
#line 119
c_rt_lib0clear(&___nl__string__41);
#line 120
goto label_83;
#line 120
label_83:
;
#line 120
c_rt_lib0clear(&___nl__im__3);
#line 121
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 121
goto label_4;
#line 121
label_87:
;
#line 122
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 122
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_string_const(221)));
#line 122
c_rt_lib0clear(&___nl__im__43);
#line 122
___nl__im_ptr__44 = &((*___ref___rec__1).result0field);
#line 122
c_rt_lib0copy(&___nl__im__45, ___nl__im__42);
#line 122
c_rt_lib0hash_set_value_dec(___nl__im_ptr__44, ___get_global_string_const(220), ___nl__im__45);
#line 122
___nl__im_ptr__44 = NULL;
#line 122
c_rt_lib0clear(&___nl__im__42);
#line 122
c_rt_lib0clear(&___nl__im__45);
#line 123
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 123
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(221)));
#line 123
c_rt_lib0clear(&___nl__im__48);
#line 123
___nl__im_ptr__51 = &((*___ref___rec__1).logic0field);
#line 123
c_rt_lib0copy(&___nl__im__50, (*___nl__im_ptr__51));
#line 123
___nl__im_ptr__51 = NULL;
#line 123
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_string_const(429)));
#line 123
c_rt_lib0clear(&___nl__im__50);
#line 123
c_rt_lib0move(&___nl__im__46, translator_priv0var_type_to_reg_type(___nl__im__47, ___nl__im__49));
#line 123
c_rt_lib0clear(&___nl__im__47);
#line 123
c_rt_lib0clear(&___nl__im__49);
#line 123
___nl__im_ptr__52 = &((*___ref___rec__1).result0field);
#line 123
c_rt_lib0copy(&___nl__im__53, ___nl__im__46);
#line 123
c_rt_lib0hash_set_value_dec(___nl__im_ptr__52, ___get_global_string_const(428), ___nl__im__53);
#line 123
___nl__im_ptr__52 = NULL;
#line 123
c_rt_lib0clear(&___nl__im__46);
#line 123
c_rt_lib0clear(&___nl__im__53);
#line 124
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 124
___nl__int__54 = getIntFromImm(___nl__im__55);
#line 124
c_rt_lib0clear(&___nl__im__55);
#line 124
___nl__im_ptr__56 = &((*___ref___rec__1).result0field);
#line 124
c_rt_lib0move(&___nl__im__57, c_rt_lib0int_new(___nl__int__54));
#line 124
c_rt_lib0hash_set_value_dec(___nl__im_ptr__56, ___get_global_string_const(168), ___nl__im__57);
#line 124
___nl__im_ptr__56 = NULL;
#line 124
//clear ___nl__int__54;
#line 124
c_rt_lib0clear(&___nl__im__57);
#line 125
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 125
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__58, ___ref___rec__1));
#line 125
c_rt_lib0clear(&___nl__im__58);
#line 127
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 127
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(216)));
#line 127
c_rt_lib0clear(&___nl__im__63);
#line 127
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(744)));
#line 127
c_rt_lib0clear(&___nl__im__62);
#line 127
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 127
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(216)));
#line 127
c_rt_lib0clear(&___nl__im__66);
#line 127
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(744)));
#line 127
c_rt_lib0clear(&___nl__im__65);
#line 127
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 127
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_mk(3, ___get_global_string_const(561), ___nl__im__61, ___get_global_string_const(744), ___nl__im__64, ___get_global_string_const(1135), ___nl__im__67));
#line 127
c_rt_lib0clear(&___nl__im__61);
#line 127
c_rt_lib0clear(&___nl__im__64);
#line 127
c_rt_lib0clear(&___nl__im__67);
#line 128
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_none(___get_global_string_const(1088)));
#line 129
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_none(___get_global_string_const(14)));
#line 129
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__60, ___get_global_string_const(241), ___nl__im__68, ___get_global_string_const(110), ___nl__im__69));
#line 129
c_rt_lib0clear(&___nl__im__60);
#line 129
c_rt_lib0clear(&___nl__im__68);
#line 129
c_rt_lib0clear(&___nl__im__69);
#line 131
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 131
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_string_const(110)));
#line 131
c_rt_lib0clear(&___nl__im__71);
#line 131
___nl__bool__72 = c_rt_lib0priv_is(___nl__im__70, ___get_global_string_const(110));
#line 131
if(___nl__bool__72){ goto label_157;}
#line 136
___nl__bool__72 = c_rt_lib0priv_is(___nl__im__70, ___get_global_string_const(76));
#line 136
if(___nl__bool__72){ goto label_182;}
#line 136
c_rt_lib0move(&___nl__im__73,___get_global_string_const(15));
#line 136
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(2, ___nl__im__73, ___nl__im__70));
#line 136
nl_die_arg(___nl__im__73);
#line 131
label_157:
;
#line 131
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__70, ___get_global_string_const(110)));
#line 131
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 132
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 132
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(221)));
#line 132
c_rt_lib0clear(&___nl__im__78);
#line 132
___nl__im_ptr__81 = &((*___ref___rec__1).logic0field);
#line 132
c_rt_lib0copy(&___nl__im__80, (*___nl__im_ptr__81));
#line 132
___nl__im_ptr__81 = NULL;
#line 132
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(429)));
#line 132
c_rt_lib0clear(&___nl__im__80);
#line 132
c_rt_lib0move(&___nl__im__76, translator_priv0unwrap_ref(___nl__im__77, ___nl__im__79));
#line 132
c_rt_lib0clear(&___nl__im__77);
#line 132
c_rt_lib0clear(&___nl__im__79);
#line 133
___nl__bool__82 = c_rt_lib0priv_is(___nl__im__76, ___get_global_string_const(8));
#line 133
if(___nl__bool__82){ goto label_174;}
#line 133
___nl__bool__82 = c_rt_lib0priv_is(___nl__im__76, ___get_global_string_const(0));
#line 133
label_174:
;
#line 133
___nl__bool__82 = !___nl__bool__82;
#line 133
if(___nl__bool__82){ goto label_179;}
#line 134
c_rt_lib0delete(translator_priv0print_return(___nl__im__59, ___ref___rec__1));
#line 135
goto label_179;
#line 135
label_179:
;
#line 135
//clear ___nl__bool__82;
#line 136
goto label_185;
#line 136
label_182:
;
#line 137
c_rt_lib0delete(translator_priv0print_return(___nl__im__59, ___ref___rec__1));
#line 138
goto label_185;
#line 138
label_185:
;
#line 138
c_rt_lib0clear(&___nl__im__0);
#line 138
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0clear(&___nl__im__3);
#line 138
//clear ___nl__int__4;
#line 138
//clear ___nl__int__5;
#line 138
//clear ___nl__int__6;
#line 138
//clear ___nl__bool__7;
#line 138
c_rt_lib0clear(&___nl__im__8);
#line 138
c_rt_lib0clear(&___nl__im__9);
#line 138
//clear ___nl__bool__10;
#line 138
c_rt_lib0clear(&___nl__im__11);
#line 138
c_rt_lib0clear(&___nl__im__12);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
c_rt_lib0clear(&___nl__im__27);
#line 138
c_rt_lib0clear(&___nl__im__35);
#line 138
c_rt_lib0clear(&___nl__im__59);
#line 138
c_rt_lib0clear(&___nl__im__70);
#line 138
//clear ___nl__bool__72;
#line 138
c_rt_lib0clear(&___nl__im__73);
#line 138
c_rt_lib0clear(&___nl__im__74);
#line 138
c_rt_lib0clear(&___nl__im__75);
#line 138
c_rt_lib0clear(&___nl__im__76);
#line 138
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
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
#line 143
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 144
___nl__int__5 = 0;
#line 144
___nl__int__6 = 1;
#line 144
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 144
label_4:
;
#line 144
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 144
if(___nl__bool__8){ goto label_25;}
#line 144
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 144
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 145
c_rt_lib0move(&___nl__im__10, translator_priv0calc_val(___nl__im__4, ___ref___rec__2));
#line 146
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 146
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(146));
#line 146
c_rt_lib0clear(&___nl__im__12);
#line 146
___nl__bool__11 = !___nl__bool__11;
#line 146
if(___nl__bool__11){ goto label_19;}
#line 147
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 147
c_rt_lib0move(&___nl__im__10, translator_priv0get_cast(___nl__im__10, ___nl__im__13, ___ref___rec__2));
#line 147
c_rt_lib0clear(&___nl__im__13);
#line 148
goto label_19;
#line 148
label_19:
;
#line 148
//clear ___nl__bool__11;
#line 149
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__10));
#line 149
c_rt_lib0clear(&___nl__im__4);
#line 150
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 150
goto label_4;
#line 150
label_25:
;
#line 151
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 151
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(142));
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
___nl__bool__14 = !___nl__bool__14;
#line 151
if(___nl__bool__14){ goto label_45;}
#line 152
___nl__int__17 = 0;
#line 152
___nl__int__18 = 1;
#line 152
___nl__int__19 = c_rt_lib0array_len(___nl__im__3);
#line 152
label_34:
;
#line 152
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 152
if(___nl__bool__20){ goto label_43;}
#line 152
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__3, ___nl__int__17));
#line 152
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 153
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__16, ___ref___rec__2));
#line 153
c_rt_lib0clear(&___nl__im__16);
#line 154
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 154
goto label_34;
#line 154
label_43:
;
#line 155
goto label_61;
#line 155
label_45:
;
#line 155
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 155
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(146));
#line 155
c_rt_lib0clear(&___nl__im__22);
#line 155
___nl__bool__14 = !___nl__bool__14;
#line 155
if(___nl__bool__14){ goto label_57;}
#line 156
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__3));
#line 156
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__24));
#line 156
c_rt_lib0clear(&___nl__im__24);
#line 156
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__23));
#line 156
c_rt_lib0clear(&___nl__im__23);
#line 157
goto label_61;
#line 157
label_57:
;
#line 158
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 158
nl_die_arg(___nl__im__25);
#line 159
goto label_61;
#line 159
label_61:
;
#line 159
//clear ___nl__bool__14;
#line 159
c_rt_lib0clear(&___nl__im__16);
#line 159
//clear ___nl__int__17;
#line 159
//clear ___nl__int__18;
#line 159
//clear ___nl__int__19;
#line 159
//clear ___nl__bool__20;
#line 159
c_rt_lib0clear(&___nl__im__21);
#line 159
c_rt_lib0clear(&___nl__im__25);
#line 159
c_rt_lib0clear(&___nl__im__0);
#line 159
c_rt_lib0clear(&___nl__im__1);
#line 159
c_rt_lib0clear(&___nl__im__3);
#line 159
c_rt_lib0clear(&___nl__im__4);
#line 159
//clear ___nl__int__5;
#line 159
//clear ___nl__int__6;
#line 159
//clear ___nl__int__7;
#line 159
//clear ___nl__bool__8;
#line 159
c_rt_lib0clear(&___nl__im__9);
#line 159
c_rt_lib0clear(&___nl__im__10);
#line 159
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
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT * ___nl__im_ptr__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT * ___nl__im_ptr__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT * ___nl__im_ptr__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
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
ImmT * ___nl__im_ptr__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT * ___nl__im_ptr__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT * ___nl__im_ptr__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
#line 164
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 165
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 165
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(568));
#line 165
c_rt_lib0clear(&___nl__im__5);
#line 165
___nl__bool__4 = !___nl__bool__4;
#line 165
if(___nl__bool__4){ goto label_9;}
#line 165
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 165
nl_die_arg(___nl__im__6);
#line 165
goto label_9;
#line 165
label_9:
;
#line 165
//clear ___nl__bool__4;
#line 165
c_rt_lib0clear(&___nl__im__6);
#line 166
___nl__int__8 = 0;
#line 166
___nl__int__9 = 1;
#line 166
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 166
label_15:
;
#line 166
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 166
if(___nl__bool__11){ goto label_147;}
#line 166
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 166
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 167
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 168
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(586)));
#line 168
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(241)));
#line 168
c_rt_lib0clear(&___nl__im__16);
#line 168
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(586)));
#line 168
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(241)));
#line 168
c_rt_lib0clear(&___nl__im__18);
#line 168
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__17, ___get_global_string_const(1110)));
#line 168
c_rt_lib0clear(&___nl__im__15);
#line 168
c_rt_lib0clear(&___nl__im__17);
#line 169
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 169
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(143));
#line 169
c_rt_lib0clear(&___nl__im__20);
#line 169
___nl__bool__19 = !___nl__bool__19;
#line 169
if(___nl__bool__19){ goto label_79;}
#line 170
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 170
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 170
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(143)));
#line 170
c_rt_lib0clear(&___nl__im__24);
#line 170
c_rt_lib0clear(&___nl__im__25);
#line 170
___nl__im_ptr__28 = &((*___ref___rec__2).logic0field);
#line 170
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 170
___nl__im_ptr__28 = NULL;
#line 170
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(429)));
#line 170
c_rt_lib0clear(&___nl__im__27);
#line 170
c_rt_lib0move(&___nl__im__22, translator_priv0unwrap_ref(___nl__im__23, ___nl__im__26));
#line 170
c_rt_lib0clear(&___nl__im__23);
#line 170
c_rt_lib0clear(&___nl__im__26);
#line 170
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 170
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 170
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(143)));
#line 170
c_rt_lib0clear(&___nl__im__31);
#line 170
c_rt_lib0clear(&___nl__im__32);
#line 170
___nl__im_ptr__35 = &((*___ref___rec__2).logic0field);
#line 170
c_rt_lib0copy(&___nl__im__34, (*___nl__im_ptr__35));
#line 170
___nl__im_ptr__35 = NULL;
#line 170
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(429)));
#line 170
c_rt_lib0clear(&___nl__im__34);
#line 170
c_rt_lib0move(&___nl__im__29, translator_priv0unwrap_ref(___nl__im__30, ___nl__im__33));
#line 170
c_rt_lib0clear(&___nl__im__30);
#line 170
c_rt_lib0clear(&___nl__im__33);
#line 170
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__29, ___get_global_string_const(4)));
#line 170
c_rt_lib0clear(&___nl__im__22);
#line 170
c_rt_lib0clear(&___nl__im__29);
#line 171
___nl__im_ptr__38 = &((*___ref___rec__2).logic0field);
#line 171
c_rt_lib0copy(&___nl__im__37, (*___nl__im_ptr__38));
#line 171
___nl__im_ptr__38 = NULL;
#line 171
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(429)));
#line 171
c_rt_lib0clear(&___nl__im__37);
#line 171
c_rt_lib0move(&___nl__im__21, translator_priv0unwrap_ref(___nl__im__21, ___nl__im__36));
#line 171
c_rt_lib0clear(&___nl__im__36);
#line 172
___nl__im_ptr__41 = &((*___ref___rec__2).logic0field);
#line 172
c_rt_lib0copy(&___nl__im__40, (*___nl__im_ptr__41));
#line 172
___nl__im_ptr__41 = NULL;
#line 172
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(429)));
#line 172
c_rt_lib0clear(&___nl__im__40);
#line 172
c_rt_lib0move(&___nl__im__13, translator_priv0var_type_to_reg_type(___nl__im__21, ___nl__im__39));
#line 172
c_rt_lib0clear(&___nl__im__39);
#line 173
goto label_131;
#line 173
label_79:
;
#line 173
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 173
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__42, ___get_global_string_const(568));
#line 173
c_rt_lib0clear(&___nl__im__42);
#line 173
___nl__bool__19 = !___nl__bool__19;
#line 173
if(___nl__bool__19){ goto label_131;}
#line 174
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 174
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 174
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__47, ___get_global_string_const(568)));
#line 174
c_rt_lib0clear(&___nl__im__46);
#line 174
c_rt_lib0clear(&___nl__im__47);
#line 174
___nl__im_ptr__50 = &((*___ref___rec__2).logic0field);
#line 174
c_rt_lib0copy(&___nl__im__49, (*___nl__im_ptr__50));
#line 174
___nl__im_ptr__50 = NULL;
#line 174
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(429)));
#line 174
c_rt_lib0clear(&___nl__im__49);
#line 174
c_rt_lib0move(&___nl__im__44, translator_priv0unwrap_ref(___nl__im__45, ___nl__im__48));
#line 174
c_rt_lib0clear(&___nl__im__45);
#line 174
c_rt_lib0clear(&___nl__im__48);
#line 174
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 174
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 174
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__54, ___get_global_string_const(568)));
#line 174
c_rt_lib0clear(&___nl__im__53);
#line 174
c_rt_lib0clear(&___nl__im__54);
#line 174
___nl__im_ptr__57 = &((*___ref___rec__2).logic0field);
#line 174
c_rt_lib0copy(&___nl__im__56, (*___nl__im_ptr__57));
#line 174
___nl__im_ptr__57 = NULL;
#line 174
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(429)));
#line 174
c_rt_lib0clear(&___nl__im__56);
#line 174
c_rt_lib0move(&___nl__im__51, translator_priv0unwrap_ref(___nl__im__52, ___nl__im__55));
#line 174
c_rt_lib0clear(&___nl__im__52);
#line 174
c_rt_lib0clear(&___nl__im__55);
#line 174
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__51, ___get_global_string_const(6)));
#line 174
c_rt_lib0clear(&___nl__im__44);
#line 174
c_rt_lib0clear(&___nl__im__51);
#line 175
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value(___nl__im__43, ___nl__im__14));
#line 175
___nl__im_ptr__62 = &((*___ref___rec__2).logic0field);
#line 175
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 175
___nl__im_ptr__62 = NULL;
#line 175
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(429)));
#line 175
c_rt_lib0clear(&___nl__im__61);
#line 175
c_rt_lib0move(&___nl__im__58, translator_priv0unwrap_ref(___nl__im__59, ___nl__im__60));
#line 175
c_rt_lib0clear(&___nl__im__59);
#line 175
c_rt_lib0clear(&___nl__im__60);
#line 176
___nl__im_ptr__65 = &((*___ref___rec__2).logic0field);
#line 176
c_rt_lib0copy(&___nl__im__64, (*___nl__im_ptr__65));
#line 176
___nl__im_ptr__65 = NULL;
#line 176
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(429)));
#line 176
c_rt_lib0clear(&___nl__im__64);
#line 176
c_rt_lib0move(&___nl__im__13, translator_priv0var_type_to_reg_type(___nl__im__58, ___nl__im__63));
#line 176
c_rt_lib0clear(&___nl__im__63);
#line 177
goto label_131;
#line 177
label_131:
;
#line 177
//clear ___nl__bool__19;
#line 177
c_rt_lib0clear(&___nl__im__21);
#line 177
c_rt_lib0clear(&___nl__im__43);
#line 177
c_rt_lib0clear(&___nl__im__58);
#line 178
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(245)));
#line 178
c_rt_lib0move(&___nl__im__67, translator_priv0calc_val(___nl__im__68, ___ref___rec__2));
#line 178
c_rt_lib0clear(&___nl__im__68);
#line 178
c_rt_lib0move(&___nl__im__66, translator_priv0get_cast(___nl__im__67, ___nl__im__13, ___ref___rec__2));
#line 178
c_rt_lib0clear(&___nl__im__67);
#line 179
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(2, ___get_global_string_const(586), ___nl__im__14, ___get_global_string_const(245), ___nl__im__66));
#line 179
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__69));
#line 179
c_rt_lib0clear(&___nl__im__69);
#line 179
c_rt_lib0clear(&___nl__im__7);
#line 180
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 180
goto label_15;
#line 180
label_147:
;
#line 181
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__3));
#line 181
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(251), ___nl__im__71));
#line 181
c_rt_lib0clear(&___nl__im__71);
#line 181
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__70));
#line 181
c_rt_lib0clear(&___nl__im__70);
#line 181
c_rt_lib0clear(&___nl__im__0);
#line 181
c_rt_lib0clear(&___nl__im__1);
#line 181
c_rt_lib0clear(&___nl__im__3);
#line 181
c_rt_lib0clear(&___nl__im__7);
#line 181
//clear ___nl__int__8;
#line 181
//clear ___nl__int__9;
#line 181
//clear ___nl__int__10;
#line 181
//clear ___nl__bool__11;
#line 181
c_rt_lib0clear(&___nl__im__12);
#line 181
c_rt_lib0clear(&___nl__im__13);
#line 181
c_rt_lib0clear(&___nl__im__14);
#line 181
c_rt_lib0clear(&___nl__im__66);
#line 181
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
#line 185
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(365)));
#line 187
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 187
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(572));
#line 187
c_rt_lib0clear(&___nl__im__6);
#line 187
___nl__bool__5 = !___nl__bool__5;
#line 187
if(___nl__bool__5){ goto label_20;}
#line 188
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 188
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 188
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(572)));
#line 188
c_rt_lib0clear(&___nl__im__8);
#line 188
c_rt_lib0clear(&___nl__im__9);
#line 188
___nl__im_ptr__12 = &((*___ref___rec__2).logic0field);
#line 188
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 188
___nl__im_ptr__12 = NULL;
#line 188
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(429)));
#line 188
c_rt_lib0clear(&___nl__im__11);
#line 188
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__7, ___nl__im__10));
#line 188
c_rt_lib0clear(&___nl__im__7);
#line 188
c_rt_lib0clear(&___nl__im__10);
#line 189
goto label_23;
#line 189
label_20:
;
#line 190
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 191
goto label_23;
#line 191
label_23:
;
#line 191
//clear ___nl__bool__5;
#line 192
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(516)));
#line 192
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(241)));
#line 192
c_rt_lib0clear(&___nl__im__15);
#line 192
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1088));
#line 192
c_rt_lib0clear(&___nl__im__14);
#line 192
___nl__bool__13 = !___nl__bool__13;
#line 192
___nl__bool__13 = !___nl__bool__13;
#line 192
if(___nl__bool__13){ goto label_71;}
#line 194
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 194
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(572));
#line 194
c_rt_lib0clear(&___nl__im__18);
#line 194
___nl__bool__17 = !___nl__bool__17;
#line 194
if(___nl__bool__17){ goto label_57;}
#line 195
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(13)));
#line 196
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 196
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__22));
#line 196
c_rt_lib0clear(&___nl__im__22);
#line 196
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 196
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__24));
#line 196
c_rt_lib0clear(&___nl__im__24);
#line 196
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__23, ___get_global_string_const(27)));
#line 196
c_rt_lib0clear(&___nl__im__21);
#line 196
c_rt_lib0clear(&___nl__im__23);
#line 196
___nl__im_ptr__27 = &((*___ref___rec__2).logic0field);
#line 196
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 196
___nl__im_ptr__27 = NULL;
#line 196
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(429)));
#line 196
c_rt_lib0clear(&___nl__im__26);
#line 196
c_rt_lib0move(&___nl__im__16, translator_priv0var_type_to_reg_type(___nl__im__20, ___nl__im__25));
#line 196
c_rt_lib0clear(&___nl__im__20);
#line 196
c_rt_lib0clear(&___nl__im__25);
#line 197
goto label_60;
#line 197
label_57:
;
#line 198
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 199
goto label_60;
#line 199
label_60:
;
#line 199
//clear ___nl__bool__17;
#line 199
c_rt_lib0clear(&___nl__im__19);
#line 200
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(516)));
#line 200
c_rt_lib0move(&___nl__im__29, translator_priv0dest_val(___nl__im__30, ___ref___rec__2));
#line 200
c_rt_lib0clear(&___nl__im__30);
#line 200
c_rt_lib0move(&___nl__im__28, translator_priv0get_cast(___nl__im__29, ___nl__im__16, ___ref___rec__2));
#line 200
c_rt_lib0clear(&___nl__im__29);
#line 200
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(294), ___nl__im__28));
#line 200
c_rt_lib0clear(&___nl__im__28);
#line 201
goto label_71;
#line 201
label_71:
;
#line 201
//clear ___nl__bool__13;
#line 201
c_rt_lib0clear(&___nl__im__16);
#line 202
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 202
___nl__int__31 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__4, ___nl__im__32);
#line 202
c_rt_lib0clear(&___nl__im__32);
#line 203
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 203
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__31));
#line 203
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(516)));
#line 203
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(110)));
#line 203
c_rt_lib0clear(&___nl__im__38);
#line 203
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(5, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__3, ___get_global_string_const(571), ___nl__im__35, ___get_global_string_const(576), ___nl__im__36, ___get_global_string_const(591), ___nl__im__37));
#line 203
c_rt_lib0clear(&___nl__im__35);
#line 203
c_rt_lib0clear(&___nl__im__36);
#line 203
c_rt_lib0clear(&___nl__im__37);
#line 203
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(265), ___nl__im__34));
#line 203
c_rt_lib0clear(&___nl__im__34);
#line 203
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__33));
#line 203
c_rt_lib0clear(&___nl__im__33);
#line 203
c_rt_lib0clear(&___nl__im__0);
#line 203
c_rt_lib0clear(&___nl__im__1);
#line 203
c_rt_lib0clear(&___nl__im__3);
#line 203
c_rt_lib0clear(&___nl__im__4);
#line 203
//clear ___nl__int__31;
#line 203
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__string__15 = NULL;
ImmT  ___nl__im__16 = NULL;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT * ___nl__im_ptr__25 = NULL;
#line 208
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(221)));
#line 208
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 208
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 208
___nl__im_ptr__7 = NULL;
#line 208
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(429)));
#line 208
c_rt_lib0clear(&___nl__im__6);
#line 208
c_rt_lib0move(&___nl__im__3, translator_priv0var_type_to_reg_type(___nl__im__4, ___nl__im__5));
#line 208
c_rt_lib0clear(&___nl__im__4);
#line 208
c_rt_lib0clear(&___nl__im__5);
#line 209
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 209
c_rt_lib0move(&___nl__im__8, translator_priv0new_declaration(___nl__im__9, ___ref___rec__1, ___nl__im__3, ___nl__im__2));
#line 209
c_rt_lib0clear(&___nl__im__9);
#line 210
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 210
c_rt_lib0move(&___nl__im__11,___get_global_string_const(787));
#line 210
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 210
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(221)));
#line 210
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 210
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__13, ___get_global_string_const(481), ___nl__im__8, ___get_global_string_const(185), ___nl__im__14));
#line 210
c_rt_lib0clear(&___nl__im__13);
#line 210
c_rt_lib0clear(&___nl__im__14);
#line 210
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 210
c_rt_lib0move(&___nl__string__15,___get_global_string_const(787));
#line 210
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__15, ___nl__im__11));
#line 210
___nl__im_ptr__10 = NULL;
#line 210
c_rt_lib0clear(&___nl__im__11);
#line 210
c_rt_lib0clear(&___nl__im__12);
#line 210
c_rt_lib0clear(&___nl__string__15);
#line 211
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 211
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(76));
#line 211
if(___nl__bool__17){ goto label_35;}
#line 212
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(241));
#line 212
if(___nl__bool__17){ goto label_37;}
#line 212
c_rt_lib0move(&___nl__im__18,___get_global_string_const(15));
#line 212
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__18, ___nl__im__16));
#line 212
nl_die_arg(___nl__im__18);
#line 211
label_35:
;
#line 212
goto label_59;
#line 212
label_37:
;
#line 212
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(241)));
#line 212
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 213
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(110)));
#line 213
___nl__im_ptr__25 = &((*___ref___rec__1).logic0field);
#line 213
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 213
___nl__im_ptr__25 = NULL;
#line 213
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(429)));
#line 213
c_rt_lib0clear(&___nl__im__24);
#line 213
___nl__bool__21 = tct0is_own_type(___nl__im__22, ___nl__im__23);
#line 213
c_rt_lib0clear(&___nl__im__22);
#line 213
c_rt_lib0clear(&___nl__im__23);
#line 213
___nl__bool__21 = !___nl__bool__21;
#line 213
if(___nl__bool__21){ goto label_53;}
#line 214
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__19, ___nl__im__8, ___ref___rec__1));
#line 215
goto label_56;
#line 215
label_53:
;
#line 216
c_rt_lib0delete(translator_priv0print_val(___nl__im__19, ___nl__im__8, ___ref___rec__1));
#line 217
goto label_56;
#line 217
label_56:
;
#line 217
//clear ___nl__bool__21;
#line 218
goto label_59;
#line 218
label_59:
;
#line 219
c_rt_lib0clear(&___nl__im__0);
#line 219
c_rt_lib0clear(&___nl__im__2);
#line 219
c_rt_lib0clear(&___nl__im__3);
#line 219
c_rt_lib0clear(&___nl__im__16);
#line 219
//clear ___nl__bool__17;
#line 219
c_rt_lib0clear(&___nl__im__18);
#line 219
c_rt_lib0clear(&___nl__im__19);
#line 219
c_rt_lib0clear(&___nl__im__20);
#line 219
return ___nl__im__8;
return NULL;

}

ImmT  translator_priv0load_const(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 223
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(245), ___nl__im__0));
#line 223
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(246), ___nl__im__4));
#line 223
c_rt_lib0clear(&___nl__im__4);
#line 223
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 223
c_rt_lib0clear(&___nl__im__3);
#line 223
c_rt_lib0clear(&___nl__im__0);
#line 223
c_rt_lib0clear(&___nl__im__1);
#line 223
return NULL;
return NULL;

}

ImmT  translator0ref_rec_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0ref_rec_args_t");
ImmT  res = translator0ref_rec_args_t();
return res;
}
ImmT translator0ref_rec_args_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(6);
}
ImmT translator0ref_rec_args_t0cal() {
translator_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 227
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 227
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 227
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 227
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(1424), ___nl__im__3, ___get_global_string_const(1425), ___nl__im__4, ___get_global_string_const(1426), ___nl__im__5));
#line 227
c_rt_lib0clear(&___nl__im__3);
#line 227
c_rt_lib0clear(&___nl__im__4);
#line 227
c_rt_lib0clear(&___nl__im__5);
#line 227
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 227
c_rt_lib0clear(&___nl__im__2);
#line 227
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 227
c_rt_lib0clear(&___nl__im__1);
#line 227
return ___nl__im__0;
#line 227
c_rt_lib0clear(&___nl__im__0);
#line 227
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
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT * ___nl__im_ptr__53 = NULL;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
bool  ___nl__bool__59 = false;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
ImmT  ___nl__im__65 = NULL;
INT  ___nl__int__66 = 0;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT * ___nl__im_ptr__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
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
bool  ___nl__bool__89 = false;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
INT  ___nl__int__98 = 0;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
bool  ___nl__bool__101 = false;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
bool  ___nl__bool__107 = false;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
INT  ___nl__int__115 = 0;
ImmT  ___nl__im__116 = NULL;
INT  ___nl__int__117 = 0;
bool  ___nl__bool__118 = false;
bool  ___nl__bool__119 = false;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT * ___nl__im_ptr__124 = NULL;
bool  ___nl__bool__125 = false;
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
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
INT  ___nl__int__138 = 0;
INT  ___nl__int__139 = 0;
INT  ___nl__int__140 = 0;
bool  ___nl__bool__141 = false;
INT  ___nl__int__142 = 0;
ImmT  ___nl__im__143 = NULL;
bool  ___nl__bool__144 = false;
bool  ___nl__bool__145 = false;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
bool  ___nl__bool__152 = false;
INT  ___nl__int__153 = 0;
#line 231
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 232
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 233
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 234
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 235
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 236
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(113)));
#line 236
___nl__int__10 = c_rt_lib0array_len(___nl__im__11);
#line 236
c_rt_lib0clear(&___nl__im__11);
#line 236
___nl__int__12 = 1;
#line 236
___nl__int__9 = ___nl__int__10 - ___nl__int__12;
#line 236
//clear ___nl__int__10;
#line 236
//clear ___nl__int__12;
#line 236
label_12:
;
#line 236
___nl__int__14 = 0;
#line 236
___nl__bool__13 = ___nl__int__9 >= ___nl__int__14;
#line 236
//clear ___nl__int__14;
#line 236
___nl__bool__13 = !___nl__bool__13;
#line 236
if(___nl__bool__13){ goto label_78;}
#line 237
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(113)));
#line 237
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__18, ___nl__int__9));
#line 237
c_rt_lib0clear(&___nl__im__18);
#line 237
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(111)));
#line 237
c_rt_lib0clear(&___nl__im__17);
#line 237
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 237
c_rt_lib0clear(&___nl__im__16);
#line 237
___nl__bool__15 = !___nl__bool__15;
#line 237
___nl__bool__15 = !___nl__bool__15;
#line 237
if(___nl__bool__15){ goto label_31;}
#line 237
//clear ___nl__bool__15;
#line 237
goto label_73;
#line 237
goto label_31;
#line 237
label_31:
;
#line 237
//clear ___nl__bool__15;
#line 238
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(113)));
#line 238
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__21, ___nl__int__9));
#line 238
c_rt_lib0clear(&___nl__im__21);
#line 238
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(245)));
#line 238
c_rt_lib0clear(&___nl__im__20);
#line 239
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__im__19, ___ref___rec__3));
#line 240
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(241)));
#line 240
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(241)));
#line 240
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(516)));
#line 240
c_rt_lib0clear(&___nl__im__24);
#line 240
c_rt_lib0clear(&___nl__im__25);
#line 240
___nl__bool__22 = hash0has_key(___nl__im__8, ___nl__im__23);
#line 240
c_rt_lib0clear(&___nl__im__23);
#line 240
___nl__bool__22 = !___nl__bool__22;
#line 240
if(___nl__bool__22){ goto label_52;}
#line 240
c_rt_lib0clear(&___nl__im__19);
#line 240
//clear ___nl__bool__22;
#line 240
goto label_73;
#line 240
goto label_52;
#line 240
label_52:
;
#line 240
//clear ___nl__bool__22;
#line 241
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(241)));
#line 241
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(241)));
#line 241
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(516)));
#line 241
c_rt_lib0clear(&___nl__im__27);
#line 241
c_rt_lib0clear(&___nl__im__28);
#line 241
___nl__int__29 = 0;
#line 241
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 241
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__26, ___nl__im__30));
#line 241
c_rt_lib0clear(&___nl__im__26);
#line 241
//clear ___nl__int__29;
#line 241
c_rt_lib0clear(&___nl__im__30);
#line 242
c_rt_lib0move(&___nl__im__31, ptd0int_to_string(___nl__int__9));
#line 242
___nl__int__32 = 0;
#line 242
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__32));
#line 242
c_rt_lib0delete(hash0set_value(&___nl__im__7, ___nl__im__31, ___nl__im__33));
#line 242
c_rt_lib0clear(&___nl__im__31);
#line 242
//clear ___nl__int__32;
#line 242
c_rt_lib0clear(&___nl__im__33);
#line 242
c_rt_lib0clear(&___nl__im__19);
#line 242
label_73:
;
#line 236
___nl__int__34 = 1;
#line 236
___nl__int__9 = ___nl__int__9 - ___nl__int__34;
#line 236
//clear ___nl__int__34;
#line 243
goto label_12;
#line 243
label_78:
;
#line 244
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 245
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(113)));
#line 245
___nl__int__36 = c_rt_lib0array_len(___nl__im__37);
#line 245
c_rt_lib0clear(&___nl__im__37);
#line 245
___nl__int__38 = 0;
#line 245
___nl__int__39 = 1;
#line 245
label_85:
;
#line 245
___nl__bool__40 = ___nl__int__38 >= ___nl__int__36;
#line 245
if(___nl__bool__40){ goto label_212;}
#line 246
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(113)));
#line 246
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get(___nl__im__42, ___nl__int__38));
#line 246
c_rt_lib0clear(&___nl__im__42);
#line 247
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(111)));
#line 247
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(76));
#line 247
if(___nl__bool__44){ goto label_99;}
#line 251
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(39));
#line 251
if(___nl__bool__44){ goto label_118;}
#line 251
c_rt_lib0move(&___nl__im__45,___get_global_string_const(15));
#line 251
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__45, ___nl__im__43));
#line 251
nl_die_arg(___nl__im__45);
#line 247
label_99:
;
#line 248
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(245)));
#line 248
c_rt_lib0move(&___nl__im__46, translator_priv0calc_val(___nl__im__47, ___ref___rec__3));
#line 248
c_rt_lib0clear(&___nl__im__47);
#line 249
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(1139)));
#line 249
___nl__im_ptr__53 = &((*___ref___rec__3).logic0field);
#line 249
c_rt_lib0copy(&___nl__im__52, (*___nl__im_ptr__53));
#line 249
___nl__im_ptr__53 = NULL;
#line 249
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(429)));
#line 249
c_rt_lib0clear(&___nl__im__52);
#line 249
c_rt_lib0move(&___nl__im__49, translator_priv0var_type_to_reg_type(___nl__im__50, ___nl__im__51));
#line 249
c_rt_lib0clear(&___nl__im__50);
#line 249
c_rt_lib0clear(&___nl__im__51);
#line 249
c_rt_lib0move(&___nl__im__48, translator_priv0get_cast(___nl__im__46, ___nl__im__49, ___ref___rec__3));
#line 249
c_rt_lib0clear(&___nl__im__49);
#line 250
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__48));
#line 250
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__54));
#line 250
c_rt_lib0clear(&___nl__im__54);
#line 251
goto label_200;
#line 251
label_118:
;
#line 252
c_rt_lib0move(&___nl__im__56, ptd0int_to_string(___nl__int__38));
#line 252
___nl__bool__55 = hash0has_key(___nl__im__7, ___nl__im__56);
#line 252
c_rt_lib0clear(&___nl__im__56);
#line 252
___nl__bool__55 = !___nl__bool__55;
#line 252
if(___nl__bool__55){ goto label_179;}
#line 253
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(245)));
#line 253
___nl__bool__59 = true;
#line 253
c_rt_lib0move(&___nl__im__57, translator_priv0get_value_of_lvalue(___nl__im__58, ___nl__bool__59, ___ref___rec__3));
#line 253
c_rt_lib0clear(&___nl__im__58);
#line 253
//clear ___nl__bool__59;
#line 254
___nl__int__63 = c_rt_lib0array_len(___nl__im__57);
#line 254
___nl__int__64 = 1;
#line 254
___nl__int__62 = ___nl__int__63 - ___nl__int__64;
#line 254
//clear ___nl__int__63;
#line 254
//clear ___nl__int__64;
#line 254
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_get(___nl__im__57, ___nl__int__62));
#line 254
//clear ___nl__int__62;
#line 254
___nl__int__67 = c_rt_lib0array_len(___nl__im__57);
#line 254
___nl__int__68 = 1;
#line 254
___nl__int__66 = ___nl__int__67 - ___nl__int__68;
#line 254
//clear ___nl__int__67;
#line 254
//clear ___nl__int__68;
#line 254
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_get(___nl__im__57, ___nl__int__66));
#line 254
//clear ___nl__int__66;
#line 254
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__65, ___get_global_string_const(241)));
#line 254
c_rt_lib0clear(&___nl__im__61);
#line 254
c_rt_lib0clear(&___nl__im__65);
#line 255
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(1139)));
#line 256
___nl__im_ptr__73 = &((*___ref___rec__3).logic0field);
#line 256
c_rt_lib0copy(&___nl__im__72, (*___nl__im_ptr__73));
#line 256
___nl__im_ptr__73 = NULL;
#line 256
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(429)));
#line 256
c_rt_lib0clear(&___nl__im__72);
#line 256
c_rt_lib0move(&___nl__im__69, translator_priv0var_type_to_reg_type(___nl__im__70, ___nl__im__71));
#line 256
c_rt_lib0clear(&___nl__im__70);
#line 256
c_rt_lib0clear(&___nl__im__71);
#line 257
c_rt_lib0move(&___nl__im__74, translator_priv0get_cast(___nl__im__60, ___nl__im__69, ___ref___rec__3));
#line 258
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__74));
#line 258
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__75));
#line 258
c_rt_lib0clear(&___nl__im__75);
#line 259
c_rt_lib0move(&___nl__im__77, ptd0int_to_string(___nl__int__38));
#line 259
c_rt_lib0copy(&___nl__im__76, ___nl__im__57);
#line 259
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__77, ___nl__im__76));
#line 259
c_rt_lib0clear(&___nl__im__76);
#line 259
c_rt_lib0clear(&___nl__im__77);
#line 260
___nl__bool__78 = nlasm0eq_reg(___nl__im__60, ___nl__im__74);
#line 260
___nl__bool__78 = !___nl__bool__78;
#line 260
___nl__bool__78 = !___nl__bool__78;
#line 260
if(___nl__bool__78){ goto label_176;}
#line 261
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_mk(2, ___get_global_string_const(1427), ___nl__im__60, ___get_global_string_const(1428), ___nl__im__74));
#line 261
c_rt_lib0move(&___nl__im__81, ptd0int_to_string(___nl__int__38));
#line 261
c_rt_lib0copy(&___nl__im__80, ___nl__im__79);
#line 261
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__81, ___nl__im__80));
#line 261
c_rt_lib0clear(&___nl__im__79);
#line 261
c_rt_lib0clear(&___nl__im__80);
#line 261
c_rt_lib0clear(&___nl__im__81);
#line 262
goto label_176;
#line 262
label_176:
;
#line 262
//clear ___nl__bool__78;
#line 263
goto label_192;
#line 263
label_179:
;
#line 264
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(245)));
#line 264
c_rt_lib0move(&___nl__im__83, translator_priv0value_type_to_reg_type(___nl__im__84, ___ref___rec__3));
#line 264
c_rt_lib0clear(&___nl__im__84);
#line 264
c_rt_lib0move(&___nl__im__82, translator_priv0new_register(___ref___rec__3, ___nl__im__83));
#line 264
c_rt_lib0clear(&___nl__im__83);
#line 265
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(245)));
#line 265
c_rt_lib0delete(translator_priv0print_val(___nl__im__85, ___nl__im__82, ___ref___rec__3));
#line 265
c_rt_lib0clear(&___nl__im__85);
#line 266
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__82));
#line 266
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__86));
#line 266
c_rt_lib0clear(&___nl__im__86);
#line 267
goto label_192;
#line 267
label_192:
;
#line 267
//clear ___nl__bool__55;
#line 267
c_rt_lib0clear(&___nl__im__57);
#line 267
c_rt_lib0clear(&___nl__im__60);
#line 267
c_rt_lib0clear(&___nl__im__69);
#line 267
c_rt_lib0clear(&___nl__im__74);
#line 267
c_rt_lib0clear(&___nl__im__82);
#line 268
goto label_200;
#line 268
label_200:
;
#line 269
c_rt_lib0move(&___nl__im__87, translator_priv0save_registers(___ref___rec__3));
#line 269
c_rt_lib0delete(array0push(&___nl__im__35, ___nl__im__87));
#line 269
c_rt_lib0clear(&___nl__im__87);
#line 269
c_rt_lib0clear(&___nl__im__41);
#line 269
c_rt_lib0clear(&___nl__im__43);
#line 269
//clear ___nl__bool__44;
#line 269
c_rt_lib0clear(&___nl__im__45);
#line 269
c_rt_lib0clear(&___nl__im__46);
#line 269
c_rt_lib0clear(&___nl__im__48);
#line 270
___nl__int__38 = ___nl__int__38 + ___nl__int__39;
#line 270
goto label_85;
#line 270
label_212:
;
#line 271
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 271
c_rt_lib0move(&___nl__im__91,___get_global_string_const(1429));
#line 271
___nl__bool__88 = c_rt_lib0eq(___nl__im__90, ___nl__im__91);
#line 271
c_rt_lib0clear(&___nl__im__90);
#line 271
c_rt_lib0clear(&___nl__im__91);
#line 271
___nl__bool__89 = !___nl__bool__88;
#line 271
if(___nl__bool__89){ goto label_225;}
#line 271
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 271
c_rt_lib0move(&___nl__im__93,___get_global_string_const(300));
#line 271
___nl__bool__88 = c_rt_lib0eq(___nl__im__92, ___nl__im__93);
#line 271
c_rt_lib0clear(&___nl__im__92);
#line 271
c_rt_lib0clear(&___nl__im__93);
#line 271
label_225:
;
#line 271
//clear ___nl__bool__89;
#line 271
___nl__bool__88 = !___nl__bool__88;
#line 271
if(___nl__bool__88){ goto label_245;}
#line 272
___nl__int__98 = 0;
#line 272
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__4, ___nl__int__98));
#line 272
//clear ___nl__int__98;
#line 272
___nl__int__100 = 0;
#line 272
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_get(___nl__im__4, ___nl__int__100));
#line 272
//clear ___nl__int__100;
#line 272
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__99, ___get_global_string_const(39)));
#line 272
c_rt_lib0clear(&___nl__im__97);
#line 272
c_rt_lib0clear(&___nl__im__99);
#line 272
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__96));
#line 272
c_rt_lib0clear(&___nl__im__96);
#line 272
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_arg(___get_global_string_const(262), ___nl__im__95));
#line 272
c_rt_lib0clear(&___nl__im__95);
#line 272
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__94));
#line 272
c_rt_lib0clear(&___nl__im__94);
#line 273
goto label_358;
#line 273
label_245:
;
#line 273
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 273
c_rt_lib0move(&___nl__im__103,___get_global_string_const(37));
#line 273
___nl__bool__88 = c_rt_lib0eq(___nl__im__102, ___nl__im__103);
#line 273
c_rt_lib0clear(&___nl__im__102);
#line 273
c_rt_lib0clear(&___nl__im__103);
#line 273
___nl__bool__101 = !___nl__bool__88;
#line 273
if(___nl__bool__101){ goto label_258;}
#line 273
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 273
c_rt_lib0move(&___nl__im__105,___get_global_string_const(300));
#line 273
___nl__bool__88 = c_rt_lib0eq(___nl__im__104, ___nl__im__105);
#line 273
c_rt_lib0clear(&___nl__im__104);
#line 273
c_rt_lib0clear(&___nl__im__105);
#line 273
label_258:
;
#line 273
//clear ___nl__bool__101;
#line 273
___nl__bool__88 = !___nl__bool__88;
#line 273
if(___nl__bool__88){ goto label_298;}
#line 274
c_rt_lib0move(&___nl__im__106, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 275
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 275
___nl__bool__107 = nlasm0eq_reg_type(___nl__im__106, ___nl__im__108);
#line 275
c_rt_lib0clear(&___nl__im__108);
#line 275
___nl__bool__107 = !___nl__bool__107;
#line 276
c_rt_lib0copy(&___nl__im__109, ___nl__im__1);
#line 277
___nl__bool__110 = ___nl__bool__107;
#line 277
___nl__bool__110 = !___nl__bool__110;
#line 277
if(___nl__bool__110){ goto label_273;}
#line 277
c_rt_lib0move(&___nl__im__109, translator_priv0new_register(___ref___rec__3, ___nl__im__106));
#line 277
goto label_273;
#line 277
label_273:
;
#line 277
//clear ___nl__bool__110;
#line 278
___nl__int__115 = 0;
#line 278
c_rt_lib0move(&___nl__im__114, c_rt_lib0array_get(___nl__im__4, ___nl__int__115));
#line 278
//clear ___nl__int__115;
#line 278
___nl__int__117 = 0;
#line 278
c_rt_lib0move(&___nl__im__116, c_rt_lib0array_get(___nl__im__4, ___nl__int__117));
#line 278
//clear ___nl__int__117;
#line 278
c_rt_lib0move(&___nl__im__113, c_rt_lib0priv_as(___nl__im__116, ___get_global_string_const(245)));
#line 278
c_rt_lib0clear(&___nl__im__114);
#line 278
c_rt_lib0clear(&___nl__im__116);
#line 278
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__109, ___get_global_string_const(78), ___nl__im__113));
#line 278
c_rt_lib0clear(&___nl__im__113);
#line 278
c_rt_lib0move(&___nl__im__111, c_rt_lib0ov_mk_arg(___get_global_string_const(262), ___nl__im__112));
#line 278
c_rt_lib0clear(&___nl__im__112);
#line 278
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__111));
#line 278
c_rt_lib0clear(&___nl__im__111);
#line 279
___nl__bool__118 = ___nl__bool__107;
#line 279
___nl__bool__118 = !___nl__bool__118;
#line 279
if(___nl__bool__118){ goto label_295;}
#line 279
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__109, ___ref___rec__3));
#line 279
goto label_295;
#line 279
label_295:
;
#line 279
//clear ___nl__bool__118;
#line 280
goto label_358;
#line 280
label_298:
;
#line 280
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(8));
#line 280
___nl__bool__88 = !___nl__bool__88;
#line 280
___nl__bool__119 = !___nl__bool__88;
#line 280
if(___nl__bool__119){ goto label_307;}
#line 280
c_rt_lib0move(&___nl__im__120, nlasm0is_empty(___nl__im__1));
#line 280
___nl__bool__88 = c_rt_lib0check_true_native(___nl__im__120);
#line 280
c_rt_lib0clear(&___nl__im__120);
#line 280
___nl__bool__88 = !___nl__bool__88;
#line 280
label_307:
;
#line 280
//clear ___nl__bool__119;
#line 280
___nl__bool__88 = !___nl__bool__88;
#line 280
if(___nl__bool__88){ goto label_347;}
#line 281
___nl__im_ptr__124 = &((*___ref___rec__3).logic0field);
#line 281
c_rt_lib0copy(&___nl__im__123, (*___nl__im_ptr__124));
#line 281
___nl__im_ptr__124 = NULL;
#line 281
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_string_const(429)));
#line 281
c_rt_lib0clear(&___nl__im__123);
#line 281
c_rt_lib0move(&___nl__im__121, translator_priv0var_type_to_reg_type(___nl__im__2, ___nl__im__122));
#line 281
c_rt_lib0clear(&___nl__im__122);
#line 282
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 282
___nl__bool__125 = nlasm0eq_reg_type(___nl__im__121, ___nl__im__126);
#line 282
c_rt_lib0clear(&___nl__im__126);
#line 282
___nl__bool__125 = !___nl__bool__125;
#line 283
c_rt_lib0copy(&___nl__im__127, ___nl__im__1);
#line 284
___nl__bool__128 = ___nl__bool__125;
#line 284
___nl__bool__128 = !___nl__bool__128;
#line 284
if(___nl__bool__128){ goto label_328;}
#line 284
c_rt_lib0move(&___nl__im__127, translator_priv0new_register(___ref___rec__3, ___nl__im__121));
#line 284
goto label_328;
#line 284
label_328:
;
#line 284
//clear ___nl__bool__128;
#line 285
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 285
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 285
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__127, ___get_global_string_const(111), ___nl__im__131, ___get_global_string_const(226), ___nl__im__132, ___get_global_string_const(113), ___nl__im__4));
#line 285
c_rt_lib0clear(&___nl__im__131);
#line 285
c_rt_lib0clear(&___nl__im__132);
#line 285
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__130));
#line 285
c_rt_lib0clear(&___nl__im__130);
#line 285
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__129));
#line 285
c_rt_lib0clear(&___nl__im__129);
#line 286
___nl__bool__133 = ___nl__bool__125;
#line 286
___nl__bool__133 = !___nl__bool__133;
#line 286
if(___nl__bool__133){ goto label_344;}
#line 286
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__127, ___ref___rec__3));
#line 286
goto label_344;
#line 286
label_344:
;
#line 286
//clear ___nl__bool__133;
#line 287
goto label_358;
#line 287
label_347:
;
#line 288
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 288
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 288
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(111), ___nl__im__136, ___get_global_string_const(226), ___nl__im__137, ___get_global_string_const(113), ___nl__im__4));
#line 288
c_rt_lib0clear(&___nl__im__136);
#line 288
c_rt_lib0clear(&___nl__im__137);
#line 288
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__135));
#line 288
c_rt_lib0clear(&___nl__im__135);
#line 288
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__134));
#line 288
c_rt_lib0clear(&___nl__im__134);
#line 289
goto label_358;
#line 289
label_358:
;
#line 289
//clear ___nl__bool__88;
#line 289
c_rt_lib0clear(&___nl__im__106);
#line 289
//clear ___nl__bool__107;
#line 289
c_rt_lib0clear(&___nl__im__109);
#line 289
c_rt_lib0clear(&___nl__im__121);
#line 289
//clear ___nl__bool__125;
#line 289
c_rt_lib0clear(&___nl__im__127);
#line 290
___nl__int__139 = c_rt_lib0array_len(___nl__im__35);
#line 290
___nl__int__140 = 1;
#line 290
___nl__int__138 = ___nl__int__139 - ___nl__int__140;
#line 290
//clear ___nl__int__139;
#line 290
//clear ___nl__int__140;
#line 290
label_371:
;
#line 290
___nl__int__142 = 0;
#line 290
___nl__bool__141 = ___nl__int__138 >= ___nl__int__142;
#line 290
//clear ___nl__int__142;
#line 290
___nl__bool__141 = !___nl__bool__141;
#line 290
if(___nl__bool__141){ goto label_416;}
#line 291
c_rt_lib0move(&___nl__im__143, ptd0int_to_string(___nl__int__138));
#line 292
___nl__bool__144 = hash0has_key(___nl__im__5, ___nl__im__143);
#line 292
___nl__bool__144 = !___nl__bool__144;
#line 292
___nl__bool__144 = !___nl__bool__144;
#line 292
if(___nl__bool__144){ goto label_386;}
#line 292
c_rt_lib0clear(&___nl__im__143);
#line 292
//clear ___nl__bool__144;
#line 292
goto label_411;
#line 292
goto label_386;
#line 292
label_386:
;
#line 292
//clear ___nl__bool__144;
#line 293
___nl__bool__145 = hash0has_key(___nl__im__6, ___nl__im__143);
#line 293
___nl__bool__145 = !___nl__bool__145;
#line 293
if(___nl__bool__145){ goto label_401;}
#line 294
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__143));
#line 294
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__147, ___get_global_string_const(1427)));
#line 294
c_rt_lib0clear(&___nl__im__147);
#line 294
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__143));
#line 294
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(1428)));
#line 294
c_rt_lib0clear(&___nl__im__149);
#line 294
c_rt_lib0delete(translator_priv0move(___nl__im__146, ___nl__im__148, ___ref___rec__3));
#line 294
c_rt_lib0clear(&___nl__im__146);
#line 294
c_rt_lib0clear(&___nl__im__148);
#line 295
goto label_401;
#line 295
label_401:
;
#line 295
//clear ___nl__bool__145;
#line 296
c_rt_lib0move(&___nl__im__151, ptd0int_to_string(___nl__int__138));
#line 296
c_rt_lib0move(&___nl__im__150, hash0get_value(___nl__im__5, ___nl__im__151));
#line 296
c_rt_lib0clear(&___nl__im__151);
#line 296
___nl__bool__152 = true;
#line 296
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__150, ___nl__bool__152, ___ref___rec__3));
#line 296
c_rt_lib0clear(&___nl__im__150);
#line 296
//clear ___nl__bool__152;
#line 296
c_rt_lib0clear(&___nl__im__143);
#line 296
label_411:
;
#line 290
___nl__int__153 = 1;
#line 290
___nl__int__138 = ___nl__int__138 - ___nl__int__153;
#line 290
//clear ___nl__int__153;
#line 297
goto label_371;
#line 297
label_416:
;
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
c_rt_lib0clear(&___nl__im__1);
#line 297
c_rt_lib0clear(&___nl__im__2);
#line 297
c_rt_lib0clear(&___nl__im__4);
#line 297
c_rt_lib0clear(&___nl__im__5);
#line 297
c_rt_lib0clear(&___nl__im__6);
#line 297
c_rt_lib0clear(&___nl__im__7);
#line 297
c_rt_lib0clear(&___nl__im__8);
#line 297
//clear ___nl__int__9;
#line 297
//clear ___nl__bool__13;
#line 297
c_rt_lib0clear(&___nl__im__19);
#line 297
c_rt_lib0clear(&___nl__im__35);
#line 297
//clear ___nl__int__36;
#line 297
//clear ___nl__int__38;
#line 297
//clear ___nl__int__39;
#line 297
//clear ___nl__bool__40;
#line 297
c_rt_lib0clear(&___nl__im__41);
#line 297
c_rt_lib0clear(&___nl__im__43);
#line 297
//clear ___nl__bool__44;
#line 297
c_rt_lib0clear(&___nl__im__45);
#line 297
c_rt_lib0clear(&___nl__im__46);
#line 297
c_rt_lib0clear(&___nl__im__48);
#line 297
//clear ___nl__int__138;
#line 297
//clear ___nl__bool__141;
#line 297
c_rt_lib0clear(&___nl__im__143);
#line 297
return NULL;
return NULL;

}

ImmT  translator_priv0print_val(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
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
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
#line 301
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 301
___nl__im_ptr__4 = &((*___ref___rec__2).debug0field);
#line 301
c_rt_lib0copy(&___nl__im__5, ___nl__im__3);
#line 301
c_rt_lib0hash_set_value_dec(___nl__im_ptr__4, ___get_global_string_const(560), ___nl__im__5);
#line 301
___nl__im_ptr__4 = NULL;
#line 301
c_rt_lib0clear(&___nl__im__3);
#line 301
c_rt_lib0clear(&___nl__im__5);
#line 302
c_rt_lib0move(&___nl__im__6, translator_priv0save_registers(___ref___rec__2));
#line 303
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 303
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(243));
#line 303
if(___nl__bool__8){ goto label_46;}
#line 305
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(419));
#line 305
if(___nl__bool__8){ goto label_53;}
#line 307
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(33));
#line 307
if(___nl__bool__8){ goto label_60;}
#line 309
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1109));
#line 309
if(___nl__bool__8){ goto label_67;}
#line 311
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1110));
#line 311
if(___nl__bool__8){ goto label_72;}
#line 313
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(572));
#line 313
if(___nl__bool__8){ goto label_77;}
#line 315
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(516));
#line 315
if(___nl__bool__8){ goto label_82;}
#line 317
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1107));
#line 317
if(___nl__bool__8){ goto label_87;}
#line 319
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(254));
#line 319
if(___nl__bool__8){ goto label_92;}
#line 321
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1111));
#line 321
if(___nl__bool__8){ goto label_97;}
#line 323
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1068));
#line 323
if(___nl__bool__8){ goto label_102;}
#line 325
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(250));
#line 325
if(___nl__bool__8){ goto label_109;}
#line 327
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(251));
#line 327
if(___nl__bool__8){ goto label_114;}
#line 329
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1088));
#line 329
if(___nl__bool__8){ goto label_119;}
#line 330
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1112));
#line 330
if(___nl__bool__8){ goto label_121;}
#line 332
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1113));
#line 332
if(___nl__bool__8){ goto label_127;}
#line 334
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1114));
#line 334
if(___nl__bool__8){ goto label_134;}
#line 334
c_rt_lib0move(&___nl__im__9,___get_global_string_const(15));
#line 334
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 334
nl_die_arg(___nl__im__9);
#line 303
label_46:
;
#line 303
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(243)));
#line 303
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 304
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__10));
#line 304
c_rt_lib0delete(translator_priv0load_const(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 304
c_rt_lib0clear(&___nl__im__12);
#line 305
goto label_141;
#line 305
label_53:
;
#line 305
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(419)));
#line 305
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 306
c_rt_lib0move(&___nl__im__15, translator_priv0make_string(___nl__im__13, ___ref___rec__2));
#line 306
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__1, ___ref___rec__2));
#line 306
c_rt_lib0clear(&___nl__im__15);
#line 307
goto label_141;
#line 307
label_60:
;
#line 307
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(33)));
#line 307
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 308
c_rt_lib0move(&___nl__im__18, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 308
c_rt_lib0delete(translator_priv0load_const(___nl__im__18, ___nl__im__1, ___ref___rec__2));
#line 308
c_rt_lib0clear(&___nl__im__18);
#line 309
goto label_141;
#line 309
label_67:
;
#line 309
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1109)));
#line 309
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 310
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__im__19, ___nl__im__1, ___ref___rec__2));
#line 311
goto label_141;
#line 311
label_72:
;
#line 311
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1110)));
#line 311
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 312
c_rt_lib0delete(translator_priv0load_const(___nl__im__21, ___nl__im__1, ___ref___rec__2));
#line 313
goto label_141;
#line 313
label_77:
;
#line 313
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(572)));
#line 313
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 314
c_rt_lib0delete(translator_priv0print_variant(___nl__im__23, ___nl__im__1, ___ref___rec__2));
#line 315
goto label_141;
#line 315
label_82:
;
#line 315
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(516)));
#line 315
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 316
c_rt_lib0delete(translator_priv0print_variable(___nl__im__25, ___nl__im__1, ___ref___rec__2));
#line 317
goto label_141;
#line 317
label_87:
;
#line 317
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1107)));
#line 317
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 318
c_rt_lib0delete(translator_priv0print_val(___nl__im__27, ___nl__im__1, ___ref___rec__2));
#line 319
goto label_141;
#line 319
label_92:
;
#line 319
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(254)));
#line 319
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 320
c_rt_lib0delete(translator_priv0print_bin_op(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 321
goto label_141;
#line 321
label_97:
;
#line 321
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1111)));
#line 321
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 322
c_rt_lib0delete(translator_priv0print_unary_op(___nl__im__31, ___nl__im__1, ___ref___rec__2));
#line 323
goto label_141;
#line 323
label_102:
;
#line 323
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1068)));
#line 323
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 324
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 324
c_rt_lib0delete(translator_priv0print_fun_val(___nl__im__33, ___nl__im__1, ___nl__im__35, ___ref___rec__2));
#line 324
c_rt_lib0clear(&___nl__im__35);
#line 325
goto label_141;
#line 325
label_109:
;
#line 325
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(250)));
#line 325
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 326
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__im__36, ___nl__im__1, ___ref___rec__2));
#line 327
goto label_141;
#line 327
label_114:
;
#line 327
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(251)));
#line 327
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 328
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__im__38, ___nl__im__1, ___ref___rec__2));
#line 329
goto label_141;
#line 329
label_119:
;
#line 330
goto label_141;
#line 330
label_121:
;
#line 330
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1112)));
#line 330
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 331
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 331
nl_die_arg(___nl__im__42);
#line 332
goto label_141;
#line 332
label_127:
;
#line 332
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1113)));
#line 332
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 333
c_rt_lib0move(&___nl__im__45,___get_global_string_const(806));
#line 333
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__43, ___nl__im__45, ___nl__im__1, ___ref___rec__2));
#line 333
c_rt_lib0clear(&___nl__im__45);
#line 334
goto label_141;
#line 334
label_134:
;
#line 334
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1114)));
#line 334
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 335
c_rt_lib0move(&___nl__im__48,___get_global_string_const(206));
#line 335
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__46, ___nl__im__48, ___nl__im__1, ___ref___rec__2));
#line 335
c_rt_lib0clear(&___nl__im__48);
#line 336
goto label_141;
#line 336
label_141:
;
#line 337
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__6, ___ref___rec__2));
#line 337
c_rt_lib0clear(&___nl__im__0);
#line 337
c_rt_lib0clear(&___nl__im__1);
#line 337
c_rt_lib0clear(&___nl__im__6);
#line 337
c_rt_lib0clear(&___nl__im__7);
#line 337
//clear ___nl__bool__8;
#line 337
c_rt_lib0clear(&___nl__im__9);
#line 337
//clear ___nl__int__10;
#line 337
c_rt_lib0clear(&___nl__im__11);
#line 337
c_rt_lib0clear(&___nl__im__13);
#line 337
c_rt_lib0clear(&___nl__im__14);
#line 337
//clear ___nl__bool__16;
#line 337
c_rt_lib0clear(&___nl__im__17);
#line 337
c_rt_lib0clear(&___nl__im__19);
#line 337
c_rt_lib0clear(&___nl__im__20);
#line 337
c_rt_lib0clear(&___nl__im__21);
#line 337
c_rt_lib0clear(&___nl__im__22);
#line 337
c_rt_lib0clear(&___nl__im__23);
#line 337
c_rt_lib0clear(&___nl__im__24);
#line 337
c_rt_lib0clear(&___nl__im__25);
#line 337
c_rt_lib0clear(&___nl__im__26);
#line 337
c_rt_lib0clear(&___nl__im__27);
#line 337
c_rt_lib0clear(&___nl__im__28);
#line 337
c_rt_lib0clear(&___nl__im__29);
#line 337
c_rt_lib0clear(&___nl__im__30);
#line 337
c_rt_lib0clear(&___nl__im__31);
#line 337
c_rt_lib0clear(&___nl__im__32);
#line 337
c_rt_lib0clear(&___nl__im__33);
#line 337
c_rt_lib0clear(&___nl__im__34);
#line 337
c_rt_lib0clear(&___nl__im__36);
#line 337
c_rt_lib0clear(&___nl__im__37);
#line 337
c_rt_lib0clear(&___nl__im__38);
#line 337
c_rt_lib0clear(&___nl__im__39);
#line 337
c_rt_lib0clear(&___nl__im__40);
#line 337
c_rt_lib0clear(&___nl__im__41);
#line 337
c_rt_lib0clear(&___nl__im__42);
#line 337
c_rt_lib0clear(&___nl__im__43);
#line 337
c_rt_lib0clear(&___nl__im__44);
#line 337
c_rt_lib0clear(&___nl__im__46);
#line 337
c_rt_lib0clear(&___nl__im__47);
#line 337
return NULL;
return NULL;

}

ImmT  translator_priv0print_variable(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 341
c_rt_lib0move(&___nl__im__3, translator_priv0get_var_register(___nl__im__0, ___ref___rec__2));
#line 341
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__3, ___ref___rec__2));
#line 341
c_rt_lib0clear(&___nl__im__3);
#line 341
c_rt_lib0clear(&___nl__im__0);
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
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
#line 346
___nl__bool__5 = true;
#line 346
c_rt_lib0move(&___nl__im__4, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__5, ___ref___rec__3));
#line 346
//clear ___nl__bool__5;
#line 347
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 347
___nl__int__10 = 1;
#line 347
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 347
//clear ___nl__int__9;
#line 347
//clear ___nl__int__10;
#line 347
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__4, ___nl__int__8));
#line 347
//clear ___nl__int__8;
#line 347
___nl__int__13 = c_rt_lib0array_len(___nl__im__4);
#line 347
___nl__int__14 = 1;
#line 347
___nl__int__12 = ___nl__int__13 - ___nl__int__14;
#line 347
//clear ___nl__int__13;
#line 347
//clear ___nl__int__14;
#line 347
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__12));
#line 347
//clear ___nl__int__12;
#line 347
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(241)));
#line 347
c_rt_lib0clear(&___nl__im__7);
#line 347
c_rt_lib0clear(&___nl__im__11);
#line 348
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__6, ___ref___rec__3));
#line 349
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 349
___nl__int__19 = 1;
#line 349
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 349
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(243), ___nl__im__20));
#line 349
//clear ___nl__int__19;
#line 349
c_rt_lib0clear(&___nl__im__20);
#line 349
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 349
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__17, ___get_global_string_const(241), ___nl__im__18, ___get_global_string_const(110), ___nl__im__21));
#line 349
c_rt_lib0clear(&___nl__im__17);
#line 349
c_rt_lib0clear(&___nl__im__18);
#line 349
c_rt_lib0clear(&___nl__im__21);
#line 349
c_rt_lib0move(&___nl__im__15, translator_priv0calc_val(___nl__im__16, ___ref___rec__3));
#line 349
c_rt_lib0clear(&___nl__im__16);
#line 350
c_rt_lib0move(&___nl__im__24,___get_global_string_const(806));
#line 350
___nl__bool__23 = c_rt_lib0eq(___nl__im__1, ___nl__im__24);
#line 350
c_rt_lib0clear(&___nl__im__24);
#line 350
if(___nl__bool__23){ goto label_40;}
#line 350
c_rt_lib0move(&___nl__im__22,___get_global_string_const(380));
#line 350
goto label_42;
#line 350
label_40:
;
#line 350
c_rt_lib0move(&___nl__im__22,___get_global_string_const(382));
#line 350
label_42:
;
#line 350
//clear ___nl__bool__23;
#line 350
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__6, ___nl__im__6, ___nl__im__15, ___nl__im__22, ___ref___rec__3));
#line 350
c_rt_lib0clear(&___nl__im__22);
#line 351
___nl__bool__25 = true;
#line 351
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__4, ___nl__bool__25, ___ref___rec__3));
#line 351
//clear ___nl__bool__25;
#line 351
c_rt_lib0clear(&___nl__im__0);
#line 351
c_rt_lib0clear(&___nl__im__1);
#line 351
c_rt_lib0clear(&___nl__im__2);
#line 351
c_rt_lib0clear(&___nl__im__4);
#line 351
c_rt_lib0clear(&___nl__im__6);
#line 351
c_rt_lib0clear(&___nl__im__15);
#line 351
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
#line 355
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 355
c_rt_lib0move(&___nl__im__5,___get_global_string_const(378));
#line 355
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 355
c_rt_lib0clear(&___nl__im__4);
#line 355
c_rt_lib0clear(&___nl__im__5);
#line 355
if(___nl__bool__3){ goto label_11;}
#line 355
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 355
c_rt_lib0move(&___nl__im__7,___get_global_string_const(380));
#line 355
___nl__bool__3 = c_rt_lib0eq(___nl__im__6, ___nl__im__7);
#line 355
c_rt_lib0clear(&___nl__im__6);
#line 355
c_rt_lib0clear(&___nl__im__7);
#line 355
label_11:
;
#line 355
if(___nl__bool__3){ goto label_18;}
#line 355
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 355
c_rt_lib0move(&___nl__im__9,___get_global_string_const(382));
#line 355
___nl__bool__3 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 355
c_rt_lib0clear(&___nl__im__8);
#line 355
c_rt_lib0clear(&___nl__im__9);
#line 355
label_18:
;
#line 355
___nl__bool__3 = !___nl__bool__3;
#line 355
if(___nl__bool__3){ goto label_45;}
#line 356
c_rt_lib0move(&___nl__im__11, nlasm0is_empty(___nl__im__1));
#line 356
___nl__bool__10 = c_rt_lib0check_true_native(___nl__im__11);
#line 356
c_rt_lib0clear(&___nl__im__11);
#line 356
___nl__bool__10 = !___nl__bool__10;
#line 356
if(___nl__bool__10){ goto label_32;}
#line 356
c_rt_lib0clear(&___nl__im__0);
#line 356
c_rt_lib0clear(&___nl__im__1);
#line 356
//clear ___nl__bool__3;
#line 356
//clear ___nl__bool__10;
#line 356
return NULL;
#line 356
goto label_32;
#line 356
label_32:
;
#line 356
//clear ___nl__bool__10;
#line 357
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 357
c_rt_lib0delete(translator_priv0print_val(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 357
c_rt_lib0clear(&___nl__im__12);
#line 358
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 358
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__1, ___get_global_string_const(569), ___nl__im__15));
#line 358
c_rt_lib0clear(&___nl__im__15);
#line 358
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__14));
#line 358
c_rt_lib0clear(&___nl__im__14);
#line 358
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__13));
#line 358
c_rt_lib0clear(&___nl__im__13);
#line 359
goto label_179;
#line 359
label_45:
;
#line 359
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 359
c_rt_lib0move(&___nl__im__17,___get_global_string_const(806));
#line 359
___nl__bool__3 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 359
c_rt_lib0clear(&___nl__im__16);
#line 359
c_rt_lib0clear(&___nl__im__17);
#line 359
if(___nl__bool__3){ goto label_57;}
#line 359
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 359
c_rt_lib0move(&___nl__im__19,___get_global_string_const(206));
#line 359
___nl__bool__3 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 359
c_rt_lib0clear(&___nl__im__18);
#line 359
c_rt_lib0clear(&___nl__im__19);
#line 359
label_57:
;
#line 359
___nl__bool__3 = !___nl__bool__3;
#line 359
if(___nl__bool__3){ goto label_116;}
#line 360
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 360
___nl__bool__22 = true;
#line 360
c_rt_lib0move(&___nl__im__20, translator_priv0get_value_of_lvalue(___nl__im__21, ___nl__bool__22, ___ref___rec__2));
#line 360
c_rt_lib0clear(&___nl__im__21);
#line 360
//clear ___nl__bool__22;
#line 361
___nl__int__26 = c_rt_lib0array_len(___nl__im__20);
#line 361
___nl__int__27 = 1;
#line 361
___nl__int__25 = ___nl__int__26 - ___nl__int__27;
#line 361
//clear ___nl__int__26;
#line 361
//clear ___nl__int__27;
#line 361
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__20, ___nl__int__25));
#line 361
//clear ___nl__int__25;
#line 361
___nl__int__30 = c_rt_lib0array_len(___nl__im__20);
#line 361
___nl__int__31 = 1;
#line 361
___nl__int__29 = ___nl__int__30 - ___nl__int__31;
#line 361
//clear ___nl__int__30;
#line 361
//clear ___nl__int__31;
#line 361
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__20, ___nl__int__29));
#line 361
//clear ___nl__int__29;
#line 361
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(241)));
#line 361
c_rt_lib0clear(&___nl__im__24);
#line 361
c_rt_lib0clear(&___nl__im__28);
#line 362
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 362
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(216)));
#line 362
c_rt_lib0clear(&___nl__im__35);
#line 362
___nl__int__37 = 1;
#line 362
c_rt_lib0move(&___nl__im__38, c_rt_lib0int_new(___nl__int__37));
#line 362
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(243), ___nl__im__38));
#line 362
//clear ___nl__int__37;
#line 362
c_rt_lib0clear(&___nl__im__38);
#line 362
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 362
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__34, ___get_global_string_const(241), ___nl__im__36, ___get_global_string_const(110), ___nl__im__39));
#line 362
c_rt_lib0clear(&___nl__im__34);
#line 362
c_rt_lib0clear(&___nl__im__36);
#line 362
c_rt_lib0clear(&___nl__im__39);
#line 362
c_rt_lib0move(&___nl__im__32, translator_priv0dest_val(___nl__im__33, ___ref___rec__2));
#line 362
c_rt_lib0clear(&___nl__im__33);
#line 363
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 363
c_rt_lib0move(&___nl__im__43,___get_global_string_const(806));
#line 363
___nl__bool__41 = c_rt_lib0eq(___nl__im__42, ___nl__im__43);
#line 363
c_rt_lib0clear(&___nl__im__42);
#line 363
c_rt_lib0clear(&___nl__im__43);
#line 363
if(___nl__bool__41){ goto label_105;}
#line 363
c_rt_lib0move(&___nl__im__40,___get_global_string_const(380));
#line 363
goto label_107;
#line 363
label_105:
;
#line 363
c_rt_lib0move(&___nl__im__40,___get_global_string_const(382));
#line 363
label_107:
;
#line 363
//clear ___nl__bool__41;
#line 363
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__23, ___nl__im__23, ___nl__im__32, ___nl__im__40, ___ref___rec__2));
#line 363
c_rt_lib0clear(&___nl__im__40);
#line 364
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__23, ___ref___rec__2));
#line 365
___nl__bool__44 = true;
#line 365
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__20, ___nl__bool__44, ___ref___rec__2));
#line 365
//clear ___nl__bool__44;
#line 366
goto label_179;
#line 366
label_116:
;
#line 366
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 366
c_rt_lib0move(&___nl__im__46,___get_global_string_const(315));
#line 366
___nl__bool__3 = c_rt_lib0eq(___nl__im__45, ___nl__im__46);
#line 366
c_rt_lib0clear(&___nl__im__45);
#line 366
c_rt_lib0clear(&___nl__im__46);
#line 366
___nl__bool__3 = !___nl__bool__3;
#line 366
if(___nl__bool__3){ goto label_175;}
#line 367
c_rt_lib0move(&___nl__im__48, nlasm0is_empty(___nl__im__1));
#line 367
___nl__bool__47 = c_rt_lib0check_true_native(___nl__im__48);
#line 367
c_rt_lib0clear(&___nl__im__48);
#line 367
___nl__bool__47 = !___nl__bool__47;
#line 367
if(___nl__bool__47){ goto label_138;}
#line 367
c_rt_lib0clear(&___nl__im__0);
#line 367
c_rt_lib0clear(&___nl__im__1);
#line 367
//clear ___nl__bool__3;
#line 367
c_rt_lib0clear(&___nl__im__20);
#line 367
c_rt_lib0clear(&___nl__im__23);
#line 367
c_rt_lib0clear(&___nl__im__32);
#line 367
//clear ___nl__bool__47;
#line 367
return NULL;
#line 367
goto label_138;
#line 367
label_138:
;
#line 367
//clear ___nl__bool__47;
#line 368
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 368
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(241)));
#line 368
c_rt_lib0clear(&___nl__im__51);
#line 368
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 368
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(241)));
#line 368
c_rt_lib0clear(&___nl__im__53);
#line 368
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__52, ___get_global_string_const(1112)));
#line 368
c_rt_lib0clear(&___nl__im__50);
#line 368
c_rt_lib0clear(&___nl__im__52);
#line 369
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(166)));
#line 369
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(185)));
#line 369
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(166), ___nl__im__56, ___get_global_string_const(185), ___nl__im__57));
#line 369
c_rt_lib0clear(&___nl__im__56);
#line 369
c_rt_lib0clear(&___nl__im__57);
#line 369
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__55));
#line 369
c_rt_lib0clear(&___nl__im__55);
#line 369
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__54));
#line 369
c_rt_lib0clear(&___nl__im__54);
#line 370
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(294), ___nl__im__1));
#line 370
c_rt_lib0move(&___nl__im__61,___get_global_string_const(39));
#line 370
___nl__int__62 = 1;
#line 370
___nl__int__62 = -___nl__int__62;
#line 370
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 370
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 370
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_mk(5, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__60, ___get_global_string_const(571), ___nl__im__61, ___get_global_string_const(576), ___nl__im__63, ___get_global_string_const(591), ___nl__im__64));
#line 370
c_rt_lib0clear(&___nl__im__60);
#line 370
c_rt_lib0clear(&___nl__im__61);
#line 370
//clear ___nl__int__62;
#line 370
c_rt_lib0clear(&___nl__im__63);
#line 370
c_rt_lib0clear(&___nl__im__64);
#line 370
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_string_const(265), ___nl__im__59));
#line 370
c_rt_lib0clear(&___nl__im__59);
#line 370
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__58));
#line 370
c_rt_lib0clear(&___nl__im__58);
#line 371
goto label_179;
#line 371
label_175:
;
#line 372
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_mk(0));
#line 372
nl_die_arg(___nl__im__65);
#line 373
goto label_179;
#line 373
label_179:
;
#line 373
//clear ___nl__bool__3;
#line 373
c_rt_lib0clear(&___nl__im__20);
#line 373
c_rt_lib0clear(&___nl__im__23);
#line 373
c_rt_lib0clear(&___nl__im__32);
#line 373
c_rt_lib0clear(&___nl__im__49);
#line 373
c_rt_lib0clear(&___nl__im__65);
#line 373
c_rt_lib0clear(&___nl__im__0);
#line 373
c_rt_lib0clear(&___nl__im__1);
#line 373
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
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT * ___nl__im_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
bool  ___nl__bool__54 = false;
bool  ___nl__bool__55 = false;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
bool  ___nl__bool__72 = false;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
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
ImmT * ___nl__im_ptr__86 = NULL;
ImmT  ___nl__im__87 = NULL;
bool  ___nl__bool__88 = false;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
INT  ___nl__int__91 = 0;
INT  ___nl__int__92 = 0;
INT  ___nl__int__93 = 0;
ImmT  ___nl__im__94 = NULL;
INT  ___nl__int__95 = 0;
INT  ___nl__int__96 = 0;
INT  ___nl__int__97 = 0;
INT  ___nl__int__98 = 0;
INT  ___nl__int__99 = 0;
INT  ___nl__int__100 = 0;
bool  ___nl__bool__101 = false;
INT  ___nl__int__102 = 0;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
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
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
INT  ___nl__int__136 = 0;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
bool  ___nl__bool__139 = false;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
bool  ___nl__bool__148 = false;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
bool  ___nl__bool__152 = false;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
bool  ___nl__bool__158 = false;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
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
INT  ___nl__int__175 = 0;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
bool  ___nl__bool__180 = false;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
bool  ___nl__bool__185 = false;
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
INT  ___nl__int__197 = 0;
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
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
ImmT  ___nl__im__212 = NULL;
ImmT  ___nl__im__213 = NULL;
ImmT  ___nl__im__214 = NULL;
ImmT  ___nl__im__215 = NULL;
ImmT  ___nl__im__216 = NULL;
bool  ___nl__bool__217 = false;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
INT  ___nl__int__220 = 0;
INT  ___nl__int__221 = 0;
INT  ___nl__int__222 = 0;
ImmT  ___nl__im__223 = NULL;
INT  ___nl__int__224 = 0;
INT  ___nl__int__225 = 0;
INT  ___nl__int__226 = 0;
ImmT  ___nl__im__227 = NULL;
bool  ___nl__bool__228 = false;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
INT  ___nl__int__231 = 0;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
INT  ___nl__int__242 = 0;
ImmT  ___nl__im__243 = NULL;
bool  ___nl__bool__244 = false;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
ImmT  ___nl__im__249 = NULL;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
#line 377
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 377
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 377
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(254)));
#line 377
c_rt_lib0clear(&___nl__im__4);
#line 377
c_rt_lib0clear(&___nl__im__5);
#line 378
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 378
c_rt_lib0move(&___nl__im__8,___get_global_string_const(754));
#line 378
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 378
c_rt_lib0clear(&___nl__im__7);
#line 378
c_rt_lib0clear(&___nl__im__8);
#line 378
___nl__bool__6 = !___nl__bool__6;
#line 378
if(___nl__bool__6){ goto label_129;}
#line 381
c_rt_lib0move(&___nl__im__11, nlasm0is_empty(___nl__im__1));
#line 382
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 382
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(110)));
#line 382
c_rt_lib0clear(&___nl__im__14);
#line 382
___nl__im_ptr__17 = &((*___ref___rec__2).logic0field);
#line 382
c_rt_lib0copy(&___nl__im__16, (*___nl__im_ptr__17));
#line 382
___nl__im_ptr__17 = NULL;
#line 382
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(429)));
#line 382
c_rt_lib0clear(&___nl__im__16);
#line 382
___nl__bool__12 = tct0is_own_type(___nl__im__13, ___nl__im__15);
#line 382
c_rt_lib0clear(&___nl__im__13);
#line 382
c_rt_lib0clear(&___nl__im__15);
#line 382
___nl__bool__12 = !___nl__bool__12;
#line 382
if(___nl__bool__12){ goto label_52;}
#line 383
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 383
___nl__bool__19 = false;
#line 383
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__18, ___nl__bool__19, ___ref___rec__2));
#line 383
c_rt_lib0clear(&___nl__im__18);
#line 383
//clear ___nl__bool__19;
#line 384
___nl__int__22 = c_rt_lib0array_len(___nl__im__9);
#line 384
___nl__int__23 = 1;
#line 384
___nl__int__21 = ___nl__int__22 - ___nl__int__23;
#line 384
//clear ___nl__int__22;
#line 384
//clear ___nl__int__23;
#line 384
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__9, ___nl__int__21));
#line 384
//clear ___nl__int__21;
#line 384
___nl__int__26 = c_rt_lib0array_len(___nl__im__9);
#line 384
___nl__int__27 = 1;
#line 384
___nl__int__25 = ___nl__int__26 - ___nl__int__27;
#line 384
//clear ___nl__int__26;
#line 384
//clear ___nl__int__27;
#line 384
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__9, ___nl__int__25));
#line 384
//clear ___nl__int__25;
#line 384
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(241)));
#line 384
c_rt_lib0clear(&___nl__im__20);
#line 384
c_rt_lib0clear(&___nl__im__24);
#line 385
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 385
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__28, ___nl__im__10, ___ref___rec__2));
#line 385
c_rt_lib0clear(&___nl__im__28);
#line 386
goto label_114;
#line 386
label_52:
;
#line 386
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 386
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(241)));
#line 386
c_rt_lib0clear(&___nl__im__30);
#line 386
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__29, ___get_global_string_const(516));
#line 386
c_rt_lib0clear(&___nl__im__29);
#line 386
___nl__bool__12 = !___nl__bool__12;
#line 386
if(___nl__bool__12){ goto label_86;}
#line 387
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 387
___nl__bool__32 = false;
#line 387
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__31, ___nl__bool__32, ___ref___rec__2));
#line 387
c_rt_lib0clear(&___nl__im__31);
#line 387
//clear ___nl__bool__32;
#line 388
___nl__int__35 = c_rt_lib0array_len(___nl__im__9);
#line 388
___nl__int__36 = 1;
#line 388
___nl__int__34 = ___nl__int__35 - ___nl__int__36;
#line 388
//clear ___nl__int__35;
#line 388
//clear ___nl__int__36;
#line 388
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__9, ___nl__int__34));
#line 388
//clear ___nl__int__34;
#line 388
___nl__int__39 = c_rt_lib0array_len(___nl__im__9);
#line 388
___nl__int__40 = 1;
#line 388
___nl__int__38 = ___nl__int__39 - ___nl__int__40;
#line 388
//clear ___nl__int__39;
#line 388
//clear ___nl__int__40;
#line 388
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__9, ___nl__int__38));
#line 388
//clear ___nl__int__38;
#line 388
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__37, ___get_global_string_const(241)));
#line 388
c_rt_lib0clear(&___nl__im__33);
#line 388
c_rt_lib0clear(&___nl__im__37);
#line 389
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 389
c_rt_lib0delete(translator_priv0print_val(___nl__im__41, ___nl__im__10, ___ref___rec__2));
#line 389
c_rt_lib0clear(&___nl__im__41);
#line 390
goto label_114;
#line 390
label_86:
;
#line 391
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 391
c_rt_lib0move(&___nl__im__42, translator_priv0dest_val(___nl__im__43, ___ref___rec__2));
#line 391
c_rt_lib0clear(&___nl__im__43);
#line 392
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 392
___nl__bool__45 = false;
#line 392
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__44, ___nl__bool__45, ___ref___rec__2));
#line 392
c_rt_lib0clear(&___nl__im__44);
#line 392
//clear ___nl__bool__45;
#line 393
___nl__int__48 = c_rt_lib0array_len(___nl__im__9);
#line 393
___nl__int__49 = 1;
#line 393
___nl__int__47 = ___nl__int__48 - ___nl__int__49;
#line 393
//clear ___nl__int__48;
#line 393
//clear ___nl__int__49;
#line 393
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__9, ___nl__int__47));
#line 393
//clear ___nl__int__47;
#line 393
___nl__int__52 = c_rt_lib0array_len(___nl__im__9);
#line 393
___nl__int__53 = 1;
#line 393
___nl__int__51 = ___nl__int__52 - ___nl__int__53;
#line 393
//clear ___nl__int__52;
#line 393
//clear ___nl__int__53;
#line 393
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_get(___nl__im__9, ___nl__int__51));
#line 393
//clear ___nl__int__51;
#line 393
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(241)));
#line 393
c_rt_lib0clear(&___nl__im__46);
#line 393
c_rt_lib0clear(&___nl__im__50);
#line 394
c_rt_lib0delete(translator_priv0move(___nl__im__10, ___nl__im__42, ___ref___rec__2));
#line 395
goto label_114;
#line 395
label_114:
;
#line 395
//clear ___nl__bool__12;
#line 395
c_rt_lib0clear(&___nl__im__42);
#line 396
___nl__bool__54 = c_rt_lib0check_true_native(___nl__im__11);
#line 396
___nl__bool__54 = !___nl__bool__54;
#line 396
___nl__bool__54 = !___nl__bool__54;
#line 396
if(___nl__bool__54){ goto label_123;}
#line 397
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__10, ___ref___rec__2));
#line 398
goto label_123;
#line 398
label_123:
;
#line 398
//clear ___nl__bool__54;
#line 399
___nl__bool__55 = false;
#line 399
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__9, ___nl__bool__55, ___ref___rec__2));
#line 399
//clear ___nl__bool__55;
#line 400
goto label_709;
#line 400
label_129:
;
#line 400
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 400
c_rt_lib0move(&___nl__im__57,___get_global_string_const(1131));
#line 400
___nl__bool__6 = c_rt_lib0eq(___nl__im__56, ___nl__im__57);
#line 400
c_rt_lib0clear(&___nl__im__56);
#line 400
c_rt_lib0clear(&___nl__im__57);
#line 400
___nl__bool__6 = !___nl__bool__6;
#line 400
if(___nl__bool__6){ goto label_167;}
#line 401
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 401
___nl__bool__60 = true;
#line 401
c_rt_lib0move(&___nl__im__58, translator_priv0get_value_of_lvalue(___nl__im__59, ___nl__bool__60, ___ref___rec__2));
#line 401
c_rt_lib0clear(&___nl__im__59);
#line 401
//clear ___nl__bool__60;
#line 402
___nl__int__64 = c_rt_lib0array_len(___nl__im__58);
#line 402
___nl__int__65 = 1;
#line 402
___nl__int__63 = ___nl__int__64 - ___nl__int__65;
#line 402
//clear ___nl__int__64;
#line 402
//clear ___nl__int__65;
#line 402
c_rt_lib0move(&___nl__im__62, c_rt_lib0array_get(___nl__im__58, ___nl__int__63));
#line 402
//clear ___nl__int__63;
#line 402
___nl__int__68 = c_rt_lib0array_len(___nl__im__58);
#line 402
___nl__int__69 = 1;
#line 402
___nl__int__67 = ___nl__int__68 - ___nl__int__69;
#line 402
//clear ___nl__int__68;
#line 402
//clear ___nl__int__69;
#line 402
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_get(___nl__im__58, ___nl__int__67));
#line 402
//clear ___nl__int__67;
#line 402
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__66, ___get_global_string_const(241)));
#line 402
c_rt_lib0clear(&___nl__im__62);
#line 402
c_rt_lib0clear(&___nl__im__66);
#line 403
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 403
c_rt_lib0move(&___nl__im__70, translator_priv0calc_val(___nl__im__71, ___ref___rec__2));
#line 403
c_rt_lib0clear(&___nl__im__71);
#line 404
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__61, ___nl__im__70, ___ref___rec__2));
#line 405
___nl__bool__72 = true;
#line 405
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__58, ___nl__bool__72, ___ref___rec__2));
#line 405
//clear ___nl__bool__72;
#line 406
goto label_709;
#line 406
label_167:
;
#line 406
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 406
c_rt_lib0move(&___nl__im__74,___get_global_string_const(1104));
#line 406
___nl__bool__6 = c_rt_lib0eq(___nl__im__73, ___nl__im__74);
#line 406
c_rt_lib0clear(&___nl__im__73);
#line 406
c_rt_lib0clear(&___nl__im__74);
#line 406
if(___nl__bool__6){ goto label_179;}
#line 406
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 406
c_rt_lib0move(&___nl__im__76,___get_global_string_const(1105));
#line 406
___nl__bool__6 = c_rt_lib0eq(___nl__im__75, ___nl__im__76);
#line 406
c_rt_lib0clear(&___nl__im__75);
#line 406
c_rt_lib0clear(&___nl__im__76);
#line 406
label_179:
;
#line 406
if(___nl__bool__6){ goto label_186;}
#line 406
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 406
c_rt_lib0move(&___nl__im__78,___get_global_string_const(587));
#line 406
___nl__bool__6 = c_rt_lib0eq(___nl__im__77, ___nl__im__78);
#line 406
c_rt_lib0clear(&___nl__im__77);
#line 406
c_rt_lib0clear(&___nl__im__78);
#line 406
label_186:
;
#line 406
if(___nl__bool__6){ goto label_193;}
#line 406
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 406
c_rt_lib0move(&___nl__im__80,___get_global_string_const(1106));
#line 406
___nl__bool__6 = c_rt_lib0eq(___nl__im__79, ___nl__im__80);
#line 406
c_rt_lib0clear(&___nl__im__79);
#line 406
c_rt_lib0clear(&___nl__im__80);
#line 406
label_193:
;
#line 406
___nl__bool__6 = !___nl__bool__6;
#line 406
if(___nl__bool__6){ goto label_536;}
#line 407
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 407
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_string_const(110)));
#line 407
c_rt_lib0clear(&___nl__im__83);
#line 407
___nl__im_ptr__86 = &((*___ref___rec__2).logic0field);
#line 407
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 407
___nl__im_ptr__86 = NULL;
#line 407
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(429)));
#line 407
c_rt_lib0clear(&___nl__im__85);
#line 407
___nl__bool__81 = tct0is_own_type(___nl__im__82, ___nl__im__84);
#line 407
c_rt_lib0clear(&___nl__im__82);
#line 407
c_rt_lib0clear(&___nl__im__84);
#line 407
___nl__bool__81 = !___nl__bool__81;
#line 407
if(___nl__bool__81){ goto label_356;}
#line 408
___nl__bool__88 = true;
#line 408
c_rt_lib0move(&___nl__im__87, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__88, ___ref___rec__2));
#line 408
//clear ___nl__bool__88;
#line 409
___nl__int__92 = c_rt_lib0array_len(___nl__im__87);
#line 409
___nl__int__93 = 1;
#line 409
___nl__int__91 = ___nl__int__92 - ___nl__int__93;
#line 409
//clear ___nl__int__92;
#line 409
//clear ___nl__int__93;
#line 409
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_get(___nl__im__87, ___nl__int__91));
#line 409
//clear ___nl__int__91;
#line 409
___nl__int__96 = c_rt_lib0array_len(___nl__im__87);
#line 409
___nl__int__97 = 1;
#line 409
___nl__int__95 = ___nl__int__96 - ___nl__int__97;
#line 409
//clear ___nl__int__96;
#line 409
//clear ___nl__int__97;
#line 409
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_get(___nl__im__87, ___nl__int__95));
#line 409
//clear ___nl__int__95;
#line 409
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__94, ___get_global_string_const(241)));
#line 409
c_rt_lib0clear(&___nl__im__90);
#line 409
c_rt_lib0clear(&___nl__im__94);
#line 409
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__89, ___ref___rec__2));
#line 409
c_rt_lib0clear(&___nl__im__89);
#line 410
___nl__int__99 = c_rt_lib0array_len(___nl__im__87);
#line 410
___nl__int__100 = 1;
#line 410
___nl__int__98 = ___nl__int__99 - ___nl__int__100;
#line 410
//clear ___nl__int__99;
#line 410
//clear ___nl__int__100;
#line 410
label_236:
;
#line 410
___nl__int__102 = 0;
#line 410
___nl__bool__101 = ___nl__int__98 >= ___nl__int__102;
#line 410
//clear ___nl__int__102;
#line 410
___nl__bool__101 = !___nl__bool__101;
#line 410
if(___nl__bool__101){ goto label_354;}
#line 411
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_get(___nl__im__87, ___nl__int__98));
#line 411
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(241));
#line 411
if(___nl__bool__104){ goto label_264;}
#line 412
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(376));
#line 412
if(___nl__bool__104){ goto label_268;}
#line 413
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(1410));
#line 413
if(___nl__bool__104){ goto label_272;}
#line 414
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(586));
#line 414
if(___nl__bool__104){ goto label_276;}
#line 415
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(1130));
#line 415
if(___nl__bool__104){ goto label_280;}
#line 416
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(273));
#line 416
if(___nl__bool__104){ goto label_284;}
#line 418
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(275));
#line 418
if(___nl__bool__104){ goto label_295;}
#line 420
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(279));
#line 420
if(___nl__bool__104){ goto label_306;}
#line 422
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__103, ___get_global_string_const(277));
#line 422
if(___nl__bool__104){ goto label_317;}
#line 422
c_rt_lib0move(&___nl__im__105,___get_global_string_const(15));
#line 422
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__103));
#line 422
nl_die_arg(___nl__im__105);
#line 411
label_264:
;
#line 411
c_rt_lib0move(&___nl__im__107, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(241)));
#line 411
c_rt_lib0copy(&___nl__im__106, ___nl__im__107);
#line 412
goto label_328;
#line 412
label_268:
;
#line 412
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(376)));
#line 412
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 413
goto label_328;
#line 413
label_272:
;
#line 413
c_rt_lib0move(&___nl__im__111, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(1410)));
#line 413
c_rt_lib0copy(&___nl__im__110, ___nl__im__111);
#line 414
goto label_328;
#line 414
label_276:
;
#line 414
c_rt_lib0move(&___nl__im__113, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(586)));
#line 414
c_rt_lib0copy(&___nl__im__112, ___nl__im__113);
#line 415
goto label_328;
#line 415
label_280:
;
#line 415
c_rt_lib0move(&___nl__im__115, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(1130)));
#line 415
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 416
goto label_328;
#line 416
label_284:
;
#line 416
c_rt_lib0move(&___nl__im__117, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(273)));
#line 416
c_rt_lib0copy(&___nl__im__116, ___nl__im__117);
#line 417
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(1423)));
#line 417
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(1422)));
#line 417
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(615)));
#line 417
c_rt_lib0delete(translator_priv0release_field(___nl__im__118, ___nl__im__119, ___nl__im__120, ___ref___rec__2));
#line 417
c_rt_lib0clear(&___nl__im__118);
#line 417
c_rt_lib0clear(&___nl__im__119);
#line 417
c_rt_lib0clear(&___nl__im__120);
#line 418
goto label_328;
#line 418
label_295:
;
#line 418
c_rt_lib0move(&___nl__im__122, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(275)));
#line 418
c_rt_lib0copy(&___nl__im__121, ___nl__im__122);
#line 419
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(1423)));
#line 419
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(1422)));
#line 419
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(376)));
#line 419
c_rt_lib0delete(translator_priv0release_index(___nl__im__123, ___nl__im__124, ___nl__im__125, ___ref___rec__2));
#line 419
c_rt_lib0clear(&___nl__im__123);
#line 419
c_rt_lib0clear(&___nl__im__124);
#line 419
c_rt_lib0clear(&___nl__im__125);
#line 420
goto label_328;
#line 420
label_306:
;
#line 420
c_rt_lib0move(&___nl__im__127, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(279)));
#line 420
c_rt_lib0copy(&___nl__im__126, ___nl__im__127);
#line 421
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(1423)));
#line 421
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(1422)));
#line 421
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(571)));
#line 421
c_rt_lib0delete(translator_priv0release_variant(___nl__im__128, ___nl__im__129, ___nl__im__130, ___ref___rec__2));
#line 421
c_rt_lib0clear(&___nl__im__128);
#line 421
c_rt_lib0clear(&___nl__im__129);
#line 421
c_rt_lib0clear(&___nl__im__130);
#line 422
goto label_328;
#line 422
label_317:
;
#line 422
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(277)));
#line 422
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 423
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(1423)));
#line 423
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(1422)));
#line 423
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(376)));
#line 423
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__133, ___nl__im__134, ___nl__im__135, ___ref___rec__2));
#line 423
c_rt_lib0clear(&___nl__im__133);
#line 423
c_rt_lib0clear(&___nl__im__134);
#line 423
c_rt_lib0clear(&___nl__im__135);
#line 424
goto label_328;
#line 424
label_328:
;
#line 424
c_rt_lib0clear(&___nl__im__103);
#line 424
//clear ___nl__bool__104;
#line 424
c_rt_lib0clear(&___nl__im__105);
#line 424
c_rt_lib0clear(&___nl__im__106);
#line 424
c_rt_lib0clear(&___nl__im__107);
#line 424
c_rt_lib0clear(&___nl__im__108);
#line 424
c_rt_lib0clear(&___nl__im__109);
#line 424
c_rt_lib0clear(&___nl__im__110);
#line 424
c_rt_lib0clear(&___nl__im__111);
#line 424
c_rt_lib0clear(&___nl__im__112);
#line 424
c_rt_lib0clear(&___nl__im__113);
#line 424
c_rt_lib0clear(&___nl__im__114);
#line 424
c_rt_lib0clear(&___nl__im__115);
#line 424
c_rt_lib0clear(&___nl__im__116);
#line 424
c_rt_lib0clear(&___nl__im__117);
#line 424
c_rt_lib0clear(&___nl__im__121);
#line 424
c_rt_lib0clear(&___nl__im__122);
#line 424
c_rt_lib0clear(&___nl__im__126);
#line 424
c_rt_lib0clear(&___nl__im__127);
#line 424
c_rt_lib0clear(&___nl__im__131);
#line 424
c_rt_lib0clear(&___nl__im__132);
#line 410
___nl__int__136 = 1;
#line 410
___nl__int__98 = ___nl__int__98 - ___nl__int__136;
#line 410
//clear ___nl__int__136;
#line 425
goto label_236;
#line 425
label_354:
;
#line 426
goto label_508;
#line 426
label_356:
;
#line 427
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 427
c_rt_lib0move(&___nl__im__137, translator_priv0dest_val(___nl__im__138, ___ref___rec__2));
#line 427
c_rt_lib0clear(&___nl__im__138);
#line 428
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 428
c_rt_lib0move(&___nl__im__141,___get_global_string_const(1104));
#line 428
___nl__bool__139 = c_rt_lib0eq(___nl__im__140, ___nl__im__141);
#line 428
c_rt_lib0clear(&___nl__im__140);
#line 428
c_rt_lib0clear(&___nl__im__141);
#line 428
___nl__bool__139 = !___nl__bool__139;
#line 428
if(___nl__bool__139){ goto label_372;}
#line 429
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 429
c_rt_lib0move(&___nl__im__142, translator_priv0calc_val(___nl__im__143, ___ref___rec__2));
#line 429
c_rt_lib0clear(&___nl__im__143);
#line 430
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__im__1, ___nl__im__137, ___nl__im__142, ___ref___rec__2));
#line 431
goto label_494;
#line 431
label_372:
;
#line 431
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 431
c_rt_lib0move(&___nl__im__145,___get_global_string_const(1105));
#line 431
___nl__bool__139 = c_rt_lib0eq(___nl__im__144, ___nl__im__145);
#line 431
c_rt_lib0clear(&___nl__im__144);
#line 431
c_rt_lib0clear(&___nl__im__145);
#line 431
___nl__bool__139 = !___nl__bool__139;
#line 431
if(___nl__bool__139){ goto label_416;}
#line 432
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 432
c_rt_lib0move(&___nl__im__146, translator_priv0calc_val(___nl__im__147, ___ref___rec__2));
#line 432
c_rt_lib0clear(&___nl__im__147);
#line 433
c_rt_lib0move(&___nl__im__149, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 433
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 433
___nl__bool__148 = nlasm0eq_reg_type(___nl__im__149, ___nl__im__150);
#line 433
c_rt_lib0clear(&___nl__im__149);
#line 433
c_rt_lib0clear(&___nl__im__150);
#line 433
___nl__bool__148 = !___nl__bool__148;
#line 434
c_rt_lib0copy(&___nl__im__151, ___nl__im__1);
#line 435
___nl__bool__152 = ___nl__bool__148;
#line 435
___nl__bool__152 = !___nl__bool__152;
#line 435
if(___nl__bool__152){ goto label_397;}
#line 435
c_rt_lib0move(&___nl__im__153, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 435
c_rt_lib0move(&___nl__im__151, translator_priv0new_register(___ref___rec__2, ___nl__im__153));
#line 435
c_rt_lib0clear(&___nl__im__153);
#line 435
goto label_397;
#line 435
label_397:
;
#line 435
//clear ___nl__bool__152;
#line 436
c_rt_lib0move(&___nl__im__154,___get_global_string_const(794));
#line 436
c_rt_lib0move(&___nl__im__156, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__137));
#line 436
c_rt_lib0move(&___nl__im__157, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__146));
#line 436
c_rt_lib0move(&___nl__im__155, c_rt_lib0array_mk(2, ___nl__im__156, ___nl__im__157));
#line 436
c_rt_lib0clear(&___nl__im__156);
#line 436
c_rt_lib0clear(&___nl__im__157);
#line 436
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__151, ___nl__im__154, ___nl__im__155, ___ref___rec__2));
#line 436
c_rt_lib0clear(&___nl__im__154);
#line 436
c_rt_lib0clear(&___nl__im__155);
#line 437
___nl__bool__158 = ___nl__bool__148;
#line 437
___nl__bool__158 = !___nl__bool__158;
#line 437
if(___nl__bool__158){ goto label_413;}
#line 437
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__151, ___ref___rec__2));
#line 437
goto label_413;
#line 437
label_413:
;
#line 437
//clear ___nl__bool__158;
#line 438
goto label_494;
#line 438
label_416:
;
#line 438
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 438
c_rt_lib0move(&___nl__im__160,___get_global_string_const(587));
#line 438
___nl__bool__139 = c_rt_lib0eq(___nl__im__159, ___nl__im__160);
#line 438
c_rt_lib0clear(&___nl__im__159);
#line 438
c_rt_lib0clear(&___nl__im__160);
#line 438
___nl__bool__139 = !___nl__bool__139;
#line 438
if(___nl__bool__139){ goto label_435;}
#line 439
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 439
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_string_const(241)));
#line 439
c_rt_lib0clear(&___nl__im__163);
#line 439
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 439
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__165, ___get_global_string_const(241)));
#line 439
c_rt_lib0clear(&___nl__im__165);
#line 439
c_rt_lib0move(&___nl__im__161, c_rt_lib0priv_as(___nl__im__164, ___get_global_string_const(1110)));
#line 439
c_rt_lib0clear(&___nl__im__162);
#line 439
c_rt_lib0clear(&___nl__im__164);
#line 440
c_rt_lib0delete(translator_priv0print_get_value(___nl__im__1, ___nl__im__137, ___nl__im__161, ___ref___rec__2));
#line 441
goto label_494;
#line 441
label_435:
;
#line 441
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 441
c_rt_lib0move(&___nl__im__167,___get_global_string_const(1106));
#line 441
___nl__bool__139 = c_rt_lib0eq(___nl__im__166, ___nl__im__167);
#line 441
c_rt_lib0clear(&___nl__im__166);
#line 441
c_rt_lib0clear(&___nl__im__167);
#line 441
___nl__bool__139 = !___nl__bool__139;
#line 441
if(___nl__bool__139){ goto label_490;}
#line 442
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 442
c_rt_lib0move(&___nl__im__168, translator_priv0dest_val(___nl__im__169, ___ref___rec__2));
#line 442
c_rt_lib0clear(&___nl__im__169);
#line 443
c_rt_lib0move(&___nl__im__172, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 443
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__172, ___get_global_string_const(241)));
#line 443
c_rt_lib0clear(&___nl__im__172);
#line 443
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 443
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__174, ___get_global_string_const(241)));
#line 443
c_rt_lib0clear(&___nl__im__174);
#line 443
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__173, ___get_global_string_const(1110)));
#line 443
c_rt_lib0clear(&___nl__im__171);
#line 443
c_rt_lib0clear(&___nl__im__173);
#line 444
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 444
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(110)));
#line 444
c_rt_lib0clear(&___nl__im__177);
#line 444
___nl__int__175 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__176, ___nl__im__170);
#line 444
c_rt_lib0clear(&___nl__im__176);
#line 445
c_rt_lib0move(&___nl__im__178, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 446
c_rt_lib0copy(&___nl__im__179, ___nl__im__1);
#line 447
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 447
___nl__bool__180 = nlasm0eq_reg_type(___nl__im__181, ___nl__im__178);
#line 447
c_rt_lib0clear(&___nl__im__181);
#line 447
___nl__bool__180 = !___nl__bool__180;
#line 447
___nl__bool__180 = !___nl__bool__180;
#line 447
if(___nl__bool__180){ goto label_470;}
#line 448
c_rt_lib0move(&___nl__im__179, translator_priv0new_register(___ref___rec__2, ___nl__im__178));
#line 449
goto label_470;
#line 449
label_470:
;
#line 449
//clear ___nl__bool__180;
#line 450
c_rt_lib0move(&___nl__im__184, c_rt_lib0int_new(___nl__int__175));
#line 450
c_rt_lib0move(&___nl__im__183, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__179, ___get_global_string_const(78), ___nl__im__168, ___get_global_string_const(571), ___nl__im__170, ___get_global_string_const(576), ___nl__im__184));
#line 450
c_rt_lib0clear(&___nl__im__184);
#line 450
c_rt_lib0move(&___nl__im__182, c_rt_lib0ov_mk_arg(___get_global_string_const(256), ___nl__im__183));
#line 450
c_rt_lib0clear(&___nl__im__183);
#line 450
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__182));
#line 450
c_rt_lib0clear(&___nl__im__182);
#line 451
c_rt_lib0move(&___nl__im__186, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 451
___nl__bool__185 = nlasm0eq_reg_type(___nl__im__186, ___nl__im__178);
#line 451
c_rt_lib0clear(&___nl__im__186);
#line 451
___nl__bool__185 = !___nl__bool__185;
#line 451
___nl__bool__185 = !___nl__bool__185;
#line 451
if(___nl__bool__185){ goto label_487;}
#line 452
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__179, ___ref___rec__2));
#line 453
goto label_487;
#line 453
label_487:
;
#line 453
//clear ___nl__bool__185;
#line 454
goto label_494;
#line 454
label_490:
;
#line 455
c_rt_lib0move(&___nl__im__187, c_rt_lib0array_mk(0));
#line 455
nl_die_arg(___nl__im__187);
#line 456
goto label_494;
#line 456
label_494:
;
#line 456
//clear ___nl__bool__139;
#line 456
c_rt_lib0clear(&___nl__im__142);
#line 456
c_rt_lib0clear(&___nl__im__146);
#line 456
//clear ___nl__bool__148;
#line 456
c_rt_lib0clear(&___nl__im__151);
#line 456
c_rt_lib0clear(&___nl__im__161);
#line 456
c_rt_lib0clear(&___nl__im__168);
#line 456
c_rt_lib0clear(&___nl__im__170);
#line 456
//clear ___nl__int__175;
#line 456
c_rt_lib0clear(&___nl__im__178);
#line 456
c_rt_lib0clear(&___nl__im__179);
#line 456
c_rt_lib0clear(&___nl__im__187);
#line 457
goto label_508;
#line 457
label_508:
;
#line 457
//clear ___nl__bool__81;
#line 457
c_rt_lib0clear(&___nl__im__87);
#line 457
//clear ___nl__int__98;
#line 457
//clear ___nl__bool__101;
#line 457
c_rt_lib0clear(&___nl__im__103);
#line 457
//clear ___nl__bool__104;
#line 457
c_rt_lib0clear(&___nl__im__105);
#line 457
c_rt_lib0clear(&___nl__im__106);
#line 457
c_rt_lib0clear(&___nl__im__107);
#line 457
c_rt_lib0clear(&___nl__im__108);
#line 457
c_rt_lib0clear(&___nl__im__109);
#line 457
c_rt_lib0clear(&___nl__im__110);
#line 457
c_rt_lib0clear(&___nl__im__111);
#line 457
c_rt_lib0clear(&___nl__im__112);
#line 457
c_rt_lib0clear(&___nl__im__113);
#line 457
c_rt_lib0clear(&___nl__im__114);
#line 457
c_rt_lib0clear(&___nl__im__115);
#line 457
c_rt_lib0clear(&___nl__im__116);
#line 457
c_rt_lib0clear(&___nl__im__117);
#line 457
c_rt_lib0clear(&___nl__im__121);
#line 457
c_rt_lib0clear(&___nl__im__122);
#line 457
c_rt_lib0clear(&___nl__im__126);
#line 457
c_rt_lib0clear(&___nl__im__127);
#line 457
c_rt_lib0clear(&___nl__im__131);
#line 457
c_rt_lib0clear(&___nl__im__132);
#line 457
c_rt_lib0clear(&___nl__im__137);
#line 458
goto label_709;
#line 458
label_536:
;
#line 458
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 458
c_rt_lib0move(&___nl__im__189,___get_global_string_const(1207));
#line 458
___nl__bool__6 = c_rt_lib0eq(___nl__im__188, ___nl__im__189);
#line 458
c_rt_lib0clear(&___nl__im__188);
#line 458
c_rt_lib0clear(&___nl__im__189);
#line 458
___nl__bool__6 = !___nl__bool__6;
#line 458
if(___nl__bool__6){ goto label_569;}
#line 459
c_rt_lib0move(&___nl__im__191, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 459
c_rt_lib0move(&___nl__im__190, translator_priv0dest_val(___nl__im__191, ___ref___rec__2));
#line 459
c_rt_lib0clear(&___nl__im__191);
#line 460
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 460
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__194, ___get_global_string_const(241)));
#line 460
c_rt_lib0clear(&___nl__im__194);
#line 460
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 460
c_rt_lib0move(&___nl__im__195, c_rt_lib0hash_get_value_dec(___nl__im__196, ___get_global_string_const(241)));
#line 460
c_rt_lib0clear(&___nl__im__196);
#line 460
c_rt_lib0move(&___nl__im__192, c_rt_lib0priv_as(___nl__im__195, ___get_global_string_const(1110)));
#line 460
c_rt_lib0clear(&___nl__im__193);
#line 460
c_rt_lib0clear(&___nl__im__195);
#line 461
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 461
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__199, ___get_global_string_const(110)));
#line 461
c_rt_lib0clear(&___nl__im__199);
#line 461
___nl__int__197 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__198, ___nl__im__192);
#line 461
c_rt_lib0clear(&___nl__im__198);
#line 462
c_rt_lib0move(&___nl__im__202, c_rt_lib0int_new(___nl__int__197));
#line 462
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__190, ___get_global_string_const(571), ___nl__im__192, ___get_global_string_const(576), ___nl__im__202));
#line 462
c_rt_lib0clear(&___nl__im__202);
#line 462
c_rt_lib0move(&___nl__im__200, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__201));
#line 462
c_rt_lib0clear(&___nl__im__201);
#line 462
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__200));
#line 462
c_rt_lib0clear(&___nl__im__200);
#line 463
goto label_709;
#line 463
label_569:
;
#line 463
c_rt_lib0move(&___nl__im__203, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 463
c_rt_lib0move(&___nl__im__204,___get_global_string_const(1118));
#line 463
___nl__bool__6 = c_rt_lib0eq(___nl__im__203, ___nl__im__204);
#line 463
c_rt_lib0clear(&___nl__im__203);
#line 463
c_rt_lib0clear(&___nl__im__204);
#line 463
if(___nl__bool__6){ goto label_581;}
#line 463
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 463
c_rt_lib0move(&___nl__im__206,___get_global_string_const(1119));
#line 463
___nl__bool__6 = c_rt_lib0eq(___nl__im__205, ___nl__im__206);
#line 463
c_rt_lib0clear(&___nl__im__205);
#line 463
c_rt_lib0clear(&___nl__im__206);
#line 463
label_581:
;
#line 463
if(___nl__bool__6){ goto label_588;}
#line 463
c_rt_lib0move(&___nl__im__207, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 463
c_rt_lib0move(&___nl__im__208,___get_global_string_const(1121));
#line 463
___nl__bool__6 = c_rt_lib0eq(___nl__im__207, ___nl__im__208);
#line 463
c_rt_lib0clear(&___nl__im__207);
#line 463
c_rt_lib0clear(&___nl__im__208);
#line 463
label_588:
;
#line 463
if(___nl__bool__6){ goto label_595;}
#line 463
c_rt_lib0move(&___nl__im__209, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 463
c_rt_lib0move(&___nl__im__210,___get_global_string_const(1120));
#line 463
___nl__bool__6 = c_rt_lib0eq(___nl__im__209, ___nl__im__210);
#line 463
c_rt_lib0clear(&___nl__im__209);
#line 463
c_rt_lib0clear(&___nl__im__210);
#line 463
label_595:
;
#line 463
if(___nl__bool__6){ goto label_602;}
#line 463
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 463
c_rt_lib0move(&___nl__im__212,___get_global_string_const(1122));
#line 463
___nl__bool__6 = c_rt_lib0eq(___nl__im__211, ___nl__im__212);
#line 463
c_rt_lib0clear(&___nl__im__211);
#line 463
c_rt_lib0clear(&___nl__im__212);
#line 463
label_602:
;
#line 463
___nl__bool__6 = !___nl__bool__6;
#line 463
if(___nl__bool__6){ goto label_638;}
#line 464
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 464
c_rt_lib0move(&___nl__im__213, translator_priv0calc_val(___nl__im__214, ___ref___rec__2));
#line 464
c_rt_lib0clear(&___nl__im__214);
#line 465
c_rt_lib0move(&___nl__im__216, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 465
___nl__bool__217 = true;
#line 465
c_rt_lib0move(&___nl__im__215, translator_priv0get_value_of_lvalue(___nl__im__216, ___nl__bool__217, ___ref___rec__2));
#line 465
c_rt_lib0clear(&___nl__im__216);
#line 465
//clear ___nl__bool__217;
#line 466
___nl__int__221 = c_rt_lib0array_len(___nl__im__215);
#line 466
___nl__int__222 = 1;
#line 466
___nl__int__220 = ___nl__int__221 - ___nl__int__222;
#line 466
//clear ___nl__int__221;
#line 466
//clear ___nl__int__222;
#line 466
c_rt_lib0move(&___nl__im__219, c_rt_lib0array_get(___nl__im__215, ___nl__int__220));
#line 466
//clear ___nl__int__220;
#line 466
___nl__int__225 = c_rt_lib0array_len(___nl__im__215);
#line 466
___nl__int__226 = 1;
#line 466
___nl__int__224 = ___nl__int__225 - ___nl__int__226;
#line 466
//clear ___nl__int__225;
#line 466
//clear ___nl__int__226;
#line 466
c_rt_lib0move(&___nl__im__223, c_rt_lib0array_get(___nl__im__215, ___nl__int__224));
#line 466
//clear ___nl__int__224;
#line 466
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__223, ___get_global_string_const(241)));
#line 466
c_rt_lib0clear(&___nl__im__219);
#line 466
c_rt_lib0clear(&___nl__im__223);
#line 467
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 467
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__218, ___nl__im__218, ___nl__im__213, ___nl__im__227, ___ref___rec__2));
#line 467
c_rt_lib0clear(&___nl__im__227);
#line 468
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__218, ___ref___rec__2));
#line 469
___nl__bool__228 = true;
#line 469
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__215, ___nl__bool__228, ___ref___rec__2));
#line 469
//clear ___nl__bool__228;
#line 470
goto label_709;
#line 470
label_638:
;
#line 470
c_rt_lib0move(&___nl__im__229, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 470
c_rt_lib0move(&___nl__im__230,___get_global_string_const(1037));
#line 470
___nl__bool__6 = c_rt_lib0eq(___nl__im__229, ___nl__im__230);
#line 470
c_rt_lib0clear(&___nl__im__229);
#line 470
c_rt_lib0clear(&___nl__im__230);
#line 470
___nl__bool__6 = !___nl__bool__6;
#line 470
if(___nl__bool__6){ goto label_666;}
#line 471
___nl__int__231 = translator_priv0get_sim_label(___ref___rec__2);
#line 472
c_rt_lib0move(&___nl__im__233, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 472
c_rt_lib0move(&___nl__im__232, translator_priv0new_register(___ref___rec__2, ___nl__im__233));
#line 472
c_rt_lib0clear(&___nl__im__233);
#line 473
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 473
c_rt_lib0move(&___nl__im__234, translator_priv0def_val(___nl__im__235, ___nl__im__1, ___nl__im__232, ___ref___rec__2));
#line 473
c_rt_lib0clear(&___nl__im__235);
#line 474
c_rt_lib0move(&___nl__im__238,___get_global_string_const(378));
#line 474
c_rt_lib0move(&___nl__im__237, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__232, ___get_global_string_const(78), ___nl__im__234, ___get_global_string_const(569), ___nl__im__238));
#line 474
c_rt_lib0clear(&___nl__im__238);
#line 474
c_rt_lib0move(&___nl__im__236, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__237));
#line 474
c_rt_lib0clear(&___nl__im__237);
#line 474
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__236));
#line 474
c_rt_lib0clear(&___nl__im__236);
#line 475
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__231, ___nl__im__232, ___ref___rec__2));
#line 476
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 476
c_rt_lib0delete(translator_priv0def_val(___nl__im__239, ___nl__im__1, ___nl__im__232, ___ref___rec__2));
#line 476
c_rt_lib0clear(&___nl__im__239);
#line 477
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__231, ___ref___rec__2));
#line 478
goto label_709;
#line 478
label_666:
;
#line 478
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 478
c_rt_lib0move(&___nl__im__241,___get_global_string_const(1038));
#line 478
___nl__bool__6 = c_rt_lib0eq(___nl__im__240, ___nl__im__241);
#line 478
c_rt_lib0clear(&___nl__im__240);
#line 478
c_rt_lib0clear(&___nl__im__241);
#line 478
___nl__bool__6 = !___nl__bool__6;
#line 478
if(___nl__bool__6){ goto label_698;}
#line 479
___nl__int__242 = translator_priv0get_sim_label(___ref___rec__2);
#line 481
c_rt_lib0move(&___nl__im__245, nlasm0is_empty(___nl__im__1));
#line 481
___nl__bool__244 = c_rt_lib0check_true_native(___nl__im__245);
#line 481
c_rt_lib0clear(&___nl__im__245);
#line 481
___nl__bool__244 = !___nl__bool__244;
#line 481
if(___nl__bool__244){ goto label_684;}
#line 482
c_rt_lib0move(&___nl__im__246, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 482
c_rt_lib0move(&___nl__im__243, translator_priv0new_register(___ref___rec__2, ___nl__im__246));
#line 482
c_rt_lib0clear(&___nl__im__246);
#line 483
goto label_687;
#line 483
label_684:
;
#line 484
c_rt_lib0copy(&___nl__im__243, ___nl__im__1);
#line 485
goto label_687;
#line 485
label_687:
;
#line 485
//clear ___nl__bool__244;
#line 486
c_rt_lib0move(&___nl__im__248, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 486
c_rt_lib0move(&___nl__im__247, translator_priv0def_val(___nl__im__248, ___nl__im__1, ___nl__im__243, ___ref___rec__2));
#line 486
c_rt_lib0clear(&___nl__im__248);
#line 487
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__242, ___nl__im__247, ___ref___rec__2));
#line 488
c_rt_lib0move(&___nl__im__249, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 488
c_rt_lib0delete(translator_priv0def_val(___nl__im__249, ___nl__im__1, ___nl__im__243, ___ref___rec__2));
#line 488
c_rt_lib0clear(&___nl__im__249);
#line 489
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__242, ___ref___rec__2));
#line 490
goto label_709;
#line 490
label_698:
;
#line 491
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(291)));
#line 491
c_rt_lib0move(&___nl__im__250, translator_priv0calc_val(___nl__im__251, ___ref___rec__2));
#line 491
c_rt_lib0clear(&___nl__im__251);
#line 492
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(292)));
#line 492
c_rt_lib0move(&___nl__im__252, translator_priv0calc_val(___nl__im__253, ___ref___rec__2));
#line 492
c_rt_lib0clear(&___nl__im__253);
#line 493
c_rt_lib0move(&___nl__im__254, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(569)));
#line 493
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__1, ___nl__im__250, ___nl__im__252, ___nl__im__254, ___ref___rec__2));
#line 493
c_rt_lib0clear(&___nl__im__254);
#line 494
goto label_709;
#line 494
label_709:
;
#line 494
//clear ___nl__bool__6;
#line 494
c_rt_lib0clear(&___nl__im__9);
#line 494
c_rt_lib0clear(&___nl__im__10);
#line 494
c_rt_lib0clear(&___nl__im__11);
#line 494
c_rt_lib0clear(&___nl__im__58);
#line 494
c_rt_lib0clear(&___nl__im__61);
#line 494
c_rt_lib0clear(&___nl__im__70);
#line 494
c_rt_lib0clear(&___nl__im__190);
#line 494
c_rt_lib0clear(&___nl__im__192);
#line 494
//clear ___nl__int__197;
#line 494
c_rt_lib0clear(&___nl__im__213);
#line 494
c_rt_lib0clear(&___nl__im__215);
#line 494
c_rt_lib0clear(&___nl__im__218);
#line 494
//clear ___nl__int__231;
#line 494
c_rt_lib0clear(&___nl__im__232);
#line 494
c_rt_lib0clear(&___nl__im__234);
#line 494
//clear ___nl__int__242;
#line 494
c_rt_lib0clear(&___nl__im__243);
#line 494
c_rt_lib0clear(&___nl__im__247);
#line 494
c_rt_lib0clear(&___nl__im__250);
#line 494
c_rt_lib0clear(&___nl__im__252);
#line 494
c_rt_lib0clear(&___nl__im__0);
#line 494
c_rt_lib0clear(&___nl__im__1);
#line 494
c_rt_lib0clear(&___nl__im__3);
#line 494
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
ImmT  ___nl__im__7 = NULL;
#line 498
___nl__int__3 = 0;
#line 498
___nl__int__4 = 1;
#line 498
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 498
label_3:
;
#line 498
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 498
if(___nl__bool__6){ goto label_12;}
#line 498
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 498
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 499
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__2, ___ref___rec__1));
#line 499
c_rt_lib0clear(&___nl__im__2);
#line 500
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 500
goto label_3;
#line 500
label_12:
;
#line 500
c_rt_lib0clear(&___nl__im__0);
#line 500
c_rt_lib0clear(&___nl__im__2);
#line 500
//clear ___nl__int__3;
#line 500
//clear ___nl__int__4;
#line 500
//clear ___nl__int__5;
#line 500
//clear ___nl__bool__6;
#line 500
c_rt_lib0clear(&___nl__im__7);
#line 500
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
#line 504
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(734));
#line 504
if(___nl__bool__3){ goto label_9;}
#line 507
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1102));
#line 507
if(___nl__bool__3){ goto label_26;}
#line 508
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1103));
#line 508
if(___nl__bool__3){ goto label_30;}
#line 508
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 508
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 508
nl_die_arg(___nl__im__4);
#line 504
label_9:
;
#line 504
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(734)));
#line 504
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 505
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(185)));
#line 505
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(110)));
#line 505
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(221)));
#line 505
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 505
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_string_const(185), ___nl__im__8, ___get_global_string_const(110), ___nl__im__9, ___get_global_string_const(221), ___nl__im__10, ___get_global_string_const(241), ___nl__im__11));
#line 505
c_rt_lib0clear(&___nl__im__8);
#line 505
c_rt_lib0clear(&___nl__im__9);
#line 505
c_rt_lib0clear(&___nl__im__10);
#line 505
c_rt_lib0clear(&___nl__im__11);
#line 506
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 506
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__7, ___ref___rec__2, ___nl__im__12));
#line 506
c_rt_lib0clear(&___nl__im__7);
#line 506
c_rt_lib0clear(&___nl__im__12);
#line 507
goto label_34;
#line 507
label_26:
;
#line 507
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1102)));
#line 507
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 508
goto label_34;
#line 508
label_30:
;
#line 508
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1103)));
#line 508
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 509
goto label_34;
#line 509
label_34:
;
#line 510
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 510
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__2, ___nl__im__18));
#line 510
c_rt_lib0clear(&___nl__im__18);
#line 512
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(734));
#line 512
if(___nl__bool__20){ goto label_47;}
#line 518
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1102));
#line 518
if(___nl__bool__20){ goto label_69;}
#line 520
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1103));
#line 520
if(___nl__bool__20){ goto label_76;}
#line 520
c_rt_lib0move(&___nl__im__21,___get_global_string_const(15));
#line 520
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__0));
#line 520
nl_die_arg(___nl__im__21);
#line 512
label_47:
;
#line 512
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(734)));
#line 512
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 513
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(241)));
#line 513
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(241));
#line 513
if(___nl__bool__25){ goto label_58;}
#line 515
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(76));
#line 515
if(___nl__bool__25){ goto label_63;}
#line 515
c_rt_lib0move(&___nl__im__26,___get_global_string_const(15));
#line 515
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 515
nl_die_arg(___nl__im__26);
#line 513
label_58:
;
#line 513
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(241)));
#line 513
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 514
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__27, ___ref___rec__2));
#line 515
goto label_67;
#line 515
label_63:
;
#line 516
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 516
nl_die_arg(___nl__im__29);
#line 517
goto label_67;
#line 517
label_67:
;
#line 518
goto label_81;
#line 518
label_69:
;
#line 518
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1102)));
#line 518
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 519
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(292)));
#line 519
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__32, ___ref___rec__2));
#line 519
c_rt_lib0clear(&___nl__im__32);
#line 520
goto label_81;
#line 520
label_76:
;
#line 520
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1103)));
#line 520
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 521
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__33, ___ref___rec__2));
#line 522
goto label_81;
#line 522
label_81:
;
#line 523
___nl__int__35 = translator_priv0get_sim_label(___ref___rec__2);
#line 524
c_rt_lib0move(&___nl__im__38,___get_global_string_const(83));
#line 524
___nl__int__39 = 1;
#line 524
___nl__int__39 = -___nl__int__39;
#line 524
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__39));
#line 524
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__17, ___get_global_string_const(78), ___nl__im__19, ___get_global_string_const(571), ___nl__im__38, ___get_global_string_const(576), ___nl__im__40));
#line 524
c_rt_lib0clear(&___nl__im__38);
#line 524
//clear ___nl__int__39;
#line 524
c_rt_lib0clear(&___nl__im__40);
#line 524
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__37));
#line 524
c_rt_lib0clear(&___nl__im__37);
#line 524
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 524
c_rt_lib0clear(&___nl__im__36);
#line 525
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__35, ___nl__im__17, ___ref___rec__2));
#line 526
___nl__bool__41 = ___nl__bool__1;
#line 526
___nl__bool__41 = !___nl__bool__41;
#line 526
if(___nl__bool__41){ goto label_103;}
#line 527
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__19));
#line 527
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__42, ___ref___rec__2));
#line 527
c_rt_lib0clear(&___nl__im__42);
#line 528
goto label_124;
#line 528
label_103:
;
#line 529
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(294), ___nl__im__19));
#line 529
c_rt_lib0move(&___nl__im__46,___get_global_string_const(190));
#line 529
___nl__int__47 = 1;
#line 529
___nl__int__47 = -___nl__int__47;
#line 529
c_rt_lib0move(&___nl__im__48, c_rt_lib0int_new(___nl__int__47));
#line 529
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 529
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(5, ___get_global_string_const(244), ___nl__im__19, ___get_global_string_const(78), ___nl__im__45, ___get_global_string_const(571), ___nl__im__46, ___get_global_string_const(576), ___nl__im__48, ___get_global_string_const(591), ___nl__im__49));
#line 529
c_rt_lib0clear(&___nl__im__45);
#line 529
c_rt_lib0clear(&___nl__im__46);
#line 529
//clear ___nl__int__47;
#line 529
c_rt_lib0clear(&___nl__im__48);
#line 529
c_rt_lib0clear(&___nl__im__49);
#line 529
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(265), ___nl__im__44));
#line 529
c_rt_lib0clear(&___nl__im__44);
#line 529
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__43));
#line 529
c_rt_lib0clear(&___nl__im__43);
#line 530
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_string_const(267), ___nl__im__19));
#line 530
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__50));
#line 530
c_rt_lib0clear(&___nl__im__50);
#line 531
goto label_124;
#line 531
label_124:
;
#line 531
//clear ___nl__bool__41;
#line 532
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__35, ___ref___rec__2));
#line 533
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(734));
#line 533
if(___nl__bool__51){ goto label_136;}
#line 540
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1102));
#line 540
if(___nl__bool__51){ goto label_176;}
#line 549
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1103));
#line 549
if(___nl__bool__51){ goto label_228;}
#line 549
c_rt_lib0move(&___nl__im__52,___get_global_string_const(15));
#line 549
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__0));
#line 549
nl_die_arg(___nl__im__52);
#line 533
label_136:
;
#line 533
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(734)));
#line 533
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 534
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(185)));
#line 534
c_rt_lib0move(&___nl__im__55, translator_priv0get_var_register(___nl__im__56, ___ref___rec__2));
#line 534
c_rt_lib0clear(&___nl__im__56);
#line 535
___nl__im_ptr__62 = &((*___ref___rec__2).logic0field);
#line 535
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 535
___nl__im_ptr__62 = NULL;
#line 535
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(787)));
#line 535
c_rt_lib0clear(&___nl__im__61);
#line 535
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(185)));
#line 535
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value(___nl__im__60, ___nl__im__63));
#line 535
c_rt_lib0clear(&___nl__im__60);
#line 535
c_rt_lib0clear(&___nl__im__63);
#line 535
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(110)));
#line 535
c_rt_lib0clear(&___nl__im__59);
#line 535
c_rt_lib0move(&___nl__im__57, translator_priv0get_cast(___nl__im__55, ___nl__im__58, ___ref___rec__2));
#line 535
c_rt_lib0clear(&___nl__im__58);
#line 536
c_rt_lib0move(&___nl__im__66,___get_global_string_const(83));
#line 536
___nl__int__67 = 1;
#line 536
___nl__int__67 = -___nl__int__67;
#line 536
c_rt_lib0move(&___nl__im__68, c_rt_lib0int_new(___nl__int__67));
#line 536
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__57, ___get_global_string_const(78), ___nl__im__19, ___get_global_string_const(571), ___nl__im__66, ___get_global_string_const(576), ___nl__im__68));
#line 536
c_rt_lib0clear(&___nl__im__66);
#line 536
//clear ___nl__int__67;
#line 536
c_rt_lib0clear(&___nl__im__68);
#line 536
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(256), ___nl__im__65));
#line 536
c_rt_lib0clear(&___nl__im__65);
#line 536
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__64));
#line 536
c_rt_lib0clear(&___nl__im__64);
#line 537
___nl__bool__69 = nlasm0eq_reg(___nl__im__57, ___nl__im__55);
#line 537
___nl__bool__69 = !___nl__bool__69;
#line 537
___nl__bool__69 = !___nl__bool__69;
#line 537
if(___nl__bool__69){ goto label_173;}
#line 538
c_rt_lib0delete(translator_priv0move(___nl__im__55, ___nl__im__57, ___ref___rec__2));
#line 539
goto label_173;
#line 539
label_173:
;
#line 539
//clear ___nl__bool__69;
#line 540
goto label_232;
#line 540
label_176:
;
#line 540
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1102)));
#line 540
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 541
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(291)));
#line 541
___nl__bool__74 = false;
#line 541
c_rt_lib0move(&___nl__im__72, translator_priv0get_value_of_lvalue(___nl__im__73, ___nl__bool__74, ___ref___rec__2));
#line 541
c_rt_lib0clear(&___nl__im__73);
#line 541
//clear ___nl__bool__74;
#line 542
___nl__int__78 = c_rt_lib0array_len(___nl__im__72);
#line 542
___nl__int__79 = 1;
#line 542
___nl__int__77 = ___nl__int__78 - ___nl__int__79;
#line 542
//clear ___nl__int__78;
#line 542
//clear ___nl__int__79;
#line 542
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__72, ___nl__int__77));
#line 542
//clear ___nl__int__77;
#line 542
___nl__int__82 = c_rt_lib0array_len(___nl__im__72);
#line 542
___nl__int__83 = 1;
#line 542
___nl__int__81 = ___nl__int__82 - ___nl__int__83;
#line 542
//clear ___nl__int__82;
#line 542
//clear ___nl__int__83;
#line 542
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_get(___nl__im__72, ___nl__int__81));
#line 542
//clear ___nl__int__81;
#line 542
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__80, ___get_global_string_const(241)));
#line 542
c_rt_lib0clear(&___nl__im__76);
#line 542
c_rt_lib0clear(&___nl__im__80);
#line 543
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 543
c_rt_lib0move(&___nl__im__84, translator_priv0get_cast(___nl__im__75, ___nl__im__85, ___ref___rec__2));
#line 543
c_rt_lib0clear(&___nl__im__85);
#line 544
c_rt_lib0move(&___nl__im__88,___get_global_string_const(83));
#line 544
___nl__int__89 = 1;
#line 544
___nl__int__89 = -___nl__int__89;
#line 544
c_rt_lib0move(&___nl__im__90, c_rt_lib0int_new(___nl__int__89));
#line 544
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__84, ___get_global_string_const(78), ___nl__im__19, ___get_global_string_const(571), ___nl__im__88, ___get_global_string_const(576), ___nl__im__90));
#line 544
c_rt_lib0clear(&___nl__im__88);
#line 544
//clear ___nl__int__89;
#line 544
c_rt_lib0clear(&___nl__im__90);
#line 544
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_string_const(256), ___nl__im__87));
#line 544
c_rt_lib0clear(&___nl__im__87);
#line 544
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__86));
#line 544
c_rt_lib0clear(&___nl__im__86);
#line 545
___nl__bool__91 = nlasm0eq_reg(___nl__im__75, ___nl__im__84);
#line 545
___nl__bool__91 = !___nl__bool__91;
#line 545
___nl__bool__91 = !___nl__bool__91;
#line 545
if(___nl__bool__91){ goto label_222;}
#line 546
c_rt_lib0delete(translator_priv0move(___nl__im__75, ___nl__im__84, ___ref___rec__2));
#line 547
goto label_222;
#line 547
label_222:
;
#line 547
//clear ___nl__bool__91;
#line 548
___nl__bool__92 = false;
#line 548
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__72, ___nl__bool__92, ___ref___rec__2));
#line 548
//clear ___nl__bool__92;
#line 549
goto label_232;
#line 549
label_228:
;
#line 549
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1103)));
#line 549
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 550
goto label_232;
#line 550
label_232:
;
#line 550
c_rt_lib0clear(&___nl__im__0);
#line 550
//clear ___nl__bool__1;
#line 550
//clear ___nl__bool__3;
#line 550
c_rt_lib0clear(&___nl__im__4);
#line 550
c_rt_lib0clear(&___nl__im__5);
#line 550
c_rt_lib0clear(&___nl__im__6);
#line 550
c_rt_lib0clear(&___nl__im__13);
#line 550
c_rt_lib0clear(&___nl__im__14);
#line 550
c_rt_lib0clear(&___nl__im__15);
#line 550
c_rt_lib0clear(&___nl__im__16);
#line 550
c_rt_lib0clear(&___nl__im__17);
#line 550
c_rt_lib0clear(&___nl__im__19);
#line 550
//clear ___nl__bool__20;
#line 550
c_rt_lib0clear(&___nl__im__21);
#line 550
c_rt_lib0clear(&___nl__im__22);
#line 550
c_rt_lib0clear(&___nl__im__23);
#line 550
c_rt_lib0clear(&___nl__im__24);
#line 550
//clear ___nl__bool__25;
#line 550
c_rt_lib0clear(&___nl__im__26);
#line 550
c_rt_lib0clear(&___nl__im__27);
#line 550
c_rt_lib0clear(&___nl__im__28);
#line 550
c_rt_lib0clear(&___nl__im__29);
#line 550
c_rt_lib0clear(&___nl__im__30);
#line 550
c_rt_lib0clear(&___nl__im__31);
#line 550
c_rt_lib0clear(&___nl__im__33);
#line 550
c_rt_lib0clear(&___nl__im__34);
#line 550
//clear ___nl__int__35;
#line 550
//clear ___nl__bool__51;
#line 550
c_rt_lib0clear(&___nl__im__52);
#line 550
c_rt_lib0clear(&___nl__im__53);
#line 550
c_rt_lib0clear(&___nl__im__54);
#line 550
c_rt_lib0clear(&___nl__im__55);
#line 550
c_rt_lib0clear(&___nl__im__57);
#line 550
c_rt_lib0clear(&___nl__im__70);
#line 550
c_rt_lib0clear(&___nl__im__71);
#line 550
c_rt_lib0clear(&___nl__im__72);
#line 550
c_rt_lib0clear(&___nl__im__75);
#line 550
c_rt_lib0clear(&___nl__im__84);
#line 550
c_rt_lib0clear(&___nl__im__93);
#line 550
c_rt_lib0clear(&___nl__im__94);
#line 550
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
#line 554
___nl__im_ptr__2 = &((*___ref___rec__1).debug0field);
#line 554
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 554
c_rt_lib0hash_set_value_dec(___nl__im_ptr__2, ___get_global_string_const(560), ___nl__im__3);
#line 554
___nl__im_ptr__2 = NULL;
#line 554
c_rt_lib0clear(&___nl__im__3);
#line 555
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 555
c_rt_lib0move(&___nl__im__5,___get_global_string_const(913));
#line 555
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___nl__im_ptr__4), ___nl__im__5));
#line 555
___nl__int__6 = 1;
#line 555
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 555
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 555
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 555
c_rt_lib0move(&___nl__string__9,___get_global_string_const(913));
#line 555
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__4, ___nl__string__9, ___nl__im__5));
#line 555
___nl__im_ptr__4 = NULL;
#line 555
c_rt_lib0clear(&___nl__im__5);
#line 555
//clear ___nl__int__6;
#line 555
//clear ___nl__int__7;
#line 555
//clear ___nl__int__8;
#line 555
c_rt_lib0clear(&___nl__string__9);
#line 555
c_rt_lib0clear(&___nl__im__0);
#line 555
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
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
bool  ___nl__bool__45 = false;
ImmT * ___nl__im_ptr__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__string__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT * ___nl__im_ptr__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT * ___nl__im_ptr__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__string__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT * ___nl__im_ptr__60 = NULL;
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
#line 559
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 559
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__2, ___ref___rec__1));
#line 559
c_rt_lib0clear(&___nl__im__2);
#line 560
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 560
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1075));
#line 560
if(___nl__bool__4){ goto label_47;}
#line 562
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1077));
#line 562
if(___nl__bool__4){ goto label_54;}
#line 564
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(174));
#line 564
if(___nl__bool__4){ goto label_59;}
#line 566
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1079));
#line 566
if(___nl__bool__4){ goto label_64;}
#line 568
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1078));
#line 568
if(___nl__bool__4){ goto label_69;}
#line 570
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1080));
#line 570
if(___nl__bool__4){ goto label_74;}
#line 572
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1076));
#line 572
if(___nl__bool__4){ goto label_79;}
#line 574
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1088));
#line 574
if(___nl__bool__4){ goto label_84;}
#line 575
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(241));
#line 575
if(___nl__bool__4){ goto label_86;}
#line 578
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1086));
#line 578
if(___nl__bool__4){ goto label_109;}
#line 580
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(266));
#line 580
if(___nl__bool__4){ goto label_116;}
#line 582
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1085));
#line 582
if(___nl__bool__4){ goto label_121;}
#line 584
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1087));
#line 584
if(___nl__bool__4){ goto label_126;}
#line 586
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(190));
#line 586
if(___nl__bool__4){ goto label_133;}
#line 588
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1083));
#line 588
if(___nl__bool__4){ goto label_140;}
#line 591
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1084));
#line 591
if(___nl__bool__4){ goto label_162;}
#line 594
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(267));
#line 594
if(___nl__bool__4){ goto label_184;}
#line 596
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(272));
#line 596
if(___nl__bool__4){ goto label_191;}
#line 598
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1081));
#line 598
if(___nl__bool__4){ goto label_198;}
#line 600
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1082));
#line 600
if(___nl__bool__4){ goto label_203;}
#line 600
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 600
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 600
nl_die_arg(___nl__im__5);
#line 560
label_47:
;
#line 560
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1075)));
#line 560
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 561
___nl__bool__8 = false;
#line 561
c_rt_lib0delete(translator_priv0print_if(___nl__im__6, ___nl__bool__8, ___ref___rec__1));
#line 561
//clear ___nl__bool__8;
#line 562
goto label_208;
#line 562
label_54:
;
#line 562
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1077)));
#line 562
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 563
c_rt_lib0delete(translator_priv0print_fora(___nl__im__9, ___ref___rec__1));
#line 564
goto label_208;
#line 564
label_59:
;
#line 564
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(174)));
#line 564
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 565
c_rt_lib0delete(translator_priv0print_loop(___nl__im__11, ___ref___rec__1));
#line 566
goto label_208;
#line 566
label_64:
;
#line 566
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1079)));
#line 566
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 567
c_rt_lib0delete(translator_priv0print_rep(___nl__im__13, ___ref___rec__1));
#line 568
goto label_208;
#line 568
label_69:
;
#line 568
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1078)));
#line 568
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 569
c_rt_lib0delete(translator_priv0print_forh(___nl__im__15, ___ref___rec__1));
#line 570
goto label_208;
#line 570
label_74:
;
#line 570
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1080)));
#line 570
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 571
c_rt_lib0delete(translator_priv0print_while(___nl__im__17, ___ref___rec__1));
#line 572
goto label_208;
#line 572
label_79:
;
#line 572
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1076)));
#line 572
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 573
c_rt_lib0delete(translator_priv0print_for(___nl__im__19, ___ref___rec__1));
#line 574
goto label_208;
#line 574
label_84:
;
#line 575
goto label_208;
#line 575
label_86:
;
#line 575
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(241)));
#line 575
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 576
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(110)));
#line 576
___nl__im_ptr__27 = &((*___ref___rec__1).logic0field);
#line 576
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 576
___nl__im_ptr__27 = NULL;
#line 576
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(429)));
#line 576
c_rt_lib0clear(&___nl__im__26);
#line 576
c_rt_lib0move(&___nl__im__23, translator_priv0var_type_to_reg_type(___nl__im__24, ___nl__im__25));
#line 576
c_rt_lib0clear(&___nl__im__24);
#line 576
c_rt_lib0clear(&___nl__im__25);
#line 577
___nl__int__29 = 1;
#line 577
___nl__int__29 = -___nl__int__29;
#line 577
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 577
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 577
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__23, ___get_global_string_const(240), ___nl__im__30, ___get_global_string_const(366), ___nl__im__31));
#line 577
//clear ___nl__int__29;
#line 577
c_rt_lib0clear(&___nl__im__30);
#line 577
c_rt_lib0clear(&___nl__im__31);
#line 577
c_rt_lib0delete(translator_priv0print_val(___nl__im__21, ___nl__im__28, ___ref___rec__1));
#line 577
c_rt_lib0clear(&___nl__im__28);
#line 578
goto label_208;
#line 578
label_109:
;
#line 578
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1086)));
#line 578
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 579
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(248)));
#line 579
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__im__34, ___ref___rec__1));
#line 579
c_rt_lib0clear(&___nl__im__34);
#line 580
goto label_208;
#line 580
label_116:
;
#line 580
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(266)));
#line 580
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 581
c_rt_lib0delete(translator_priv0print_return(___nl__im__35, ___ref___rec__1));
#line 582
goto label_208;
#line 582
label_121:
;
#line 582
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1085)));
#line 582
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 583
c_rt_lib0delete(translator_priv0print_match(___nl__im__37, ___ref___rec__1));
#line 584
goto label_208;
#line 584
label_126:
;
#line 584
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1087)));
#line 584
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 585
___nl__bool__41 = true;
#line 585
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__39, ___nl__bool__41, ___ref___rec__1));
#line 585
//clear ___nl__bool__41;
#line 586
goto label_208;
#line 586
label_133:
;
#line 586
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(190)));
#line 586
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 587
___nl__bool__44 = false;
#line 587
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__42, ___nl__bool__44, ___ref___rec__1));
#line 587
//clear ___nl__bool__44;
#line 588
goto label_208;
#line 588
label_140:
;
#line 589
___nl__bool__45 = true;
#line 589
___nl__im_ptr__46 = &((*___ref___rec__1).loop_label0field);
#line 589
c_rt_lib0move(&___nl__im__47,___get_global_string_const(1083));
#line 589
c_rt_lib0move(&___nl__im__47, c_rt_lib0get_ref_hash((*___nl__im_ptr__46), ___nl__im__47));
#line 589
c_rt_lib0move(&___nl__im__48, c_rt_lib0bool_to_nl_native(___nl__bool__45));
#line 589
c_rt_lib0hash_set_value_dec(&___nl__im__47, ___get_global_string_const(1419), ___nl__im__48);
#line 589
c_rt_lib0move(&___nl__string__49,___get_global_string_const(1083));
#line 589
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__46, ___nl__string__49, ___nl__im__47));
#line 589
___nl__im_ptr__46 = NULL;
#line 589
//clear ___nl__bool__45;
#line 589
c_rt_lib0clear(&___nl__im__47);
#line 589
c_rt_lib0clear(&___nl__im__48);
#line 589
c_rt_lib0clear(&___nl__string__49);
#line 590
___nl__im_ptr__52 = &((*___ref___rec__1).loop_label0field);
#line 590
c_rt_lib0copy(&___nl__im__51, (*___nl__im_ptr__52));
#line 590
___nl__im_ptr__52 = NULL;
#line 590
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(1083)));
#line 590
c_rt_lib0clear(&___nl__im__51);
#line 590
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__50));
#line 590
c_rt_lib0clear(&___nl__im__50);
#line 591
goto label_208;
#line 591
label_162:
;
#line 592
___nl__bool__53 = true;
#line 592
___nl__im_ptr__54 = &((*___ref___rec__1).loop_label0field);
#line 592
c_rt_lib0move(&___nl__im__55,___get_global_string_const(1084));
#line 592
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_ref_hash((*___nl__im_ptr__54), ___nl__im__55));
#line 592
c_rt_lib0move(&___nl__im__56, c_rt_lib0bool_to_nl_native(___nl__bool__53));
#line 592
c_rt_lib0hash_set_value_dec(&___nl__im__55, ___get_global_string_const(1419), ___nl__im__56);
#line 592
c_rt_lib0move(&___nl__string__57,___get_global_string_const(1084));
#line 592
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__54, ___nl__string__57, ___nl__im__55));
#line 592
___nl__im_ptr__54 = NULL;
#line 592
//clear ___nl__bool__53;
#line 592
c_rt_lib0clear(&___nl__im__55);
#line 592
c_rt_lib0clear(&___nl__im__56);
#line 592
c_rt_lib0clear(&___nl__string__57);
#line 593
___nl__im_ptr__60 = &((*___ref___rec__1).loop_label0field);
#line 593
c_rt_lib0copy(&___nl__im__59, (*___nl__im_ptr__60));
#line 593
___nl__im_ptr__60 = NULL;
#line 593
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(1084)));
#line 593
c_rt_lib0clear(&___nl__im__59);
#line 593
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__58));
#line 593
c_rt_lib0clear(&___nl__im__58);
#line 594
goto label_208;
#line 594
label_184:
;
#line 594
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(267)));
#line 594
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 595
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 595
c_rt_lib0delete(translator_priv0print_die(___nl__im__61, ___nl__im__63, ___ref___rec__1));
#line 595
c_rt_lib0clear(&___nl__im__63);
#line 596
goto label_208;
#line 596
label_191:
;
#line 596
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(272)));
#line 596
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 597
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 597
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__64, ___ref___rec__1, ___nl__im__66));
#line 597
c_rt_lib0clear(&___nl__im__66);
#line 598
goto label_208;
#line 598
label_198:
;
#line 598
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1081)));
#line 598
c_rt_lib0copy(&___nl__im__67, ___nl__im__68);
#line 599
c_rt_lib0delete(translator_priv0print_if_mod(___nl__im__67, ___ref___rec__1));
#line 600
goto label_208;
#line 600
label_203:
;
#line 600
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1082)));
#line 600
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 601
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__im__69, ___ref___rec__1));
#line 602
goto label_208;
#line 602
label_208:
;
#line 602
c_rt_lib0clear(&___nl__im__0);
#line 602
c_rt_lib0clear(&___nl__im__3);
#line 602
//clear ___nl__bool__4;
#line 602
c_rt_lib0clear(&___nl__im__5);
#line 602
c_rt_lib0clear(&___nl__im__6);
#line 602
c_rt_lib0clear(&___nl__im__7);
#line 602
c_rt_lib0clear(&___nl__im__9);
#line 602
c_rt_lib0clear(&___nl__im__10);
#line 602
c_rt_lib0clear(&___nl__im__11);
#line 602
c_rt_lib0clear(&___nl__im__12);
#line 602
c_rt_lib0clear(&___nl__im__13);
#line 602
c_rt_lib0clear(&___nl__im__14);
#line 602
c_rt_lib0clear(&___nl__im__15);
#line 602
c_rt_lib0clear(&___nl__im__16);
#line 602
c_rt_lib0clear(&___nl__im__17);
#line 602
c_rt_lib0clear(&___nl__im__18);
#line 602
c_rt_lib0clear(&___nl__im__19);
#line 602
c_rt_lib0clear(&___nl__im__20);
#line 602
c_rt_lib0clear(&___nl__im__21);
#line 602
c_rt_lib0clear(&___nl__im__22);
#line 602
c_rt_lib0clear(&___nl__im__23);
#line 602
c_rt_lib0clear(&___nl__im__32);
#line 602
c_rt_lib0clear(&___nl__im__33);
#line 602
c_rt_lib0clear(&___nl__im__35);
#line 602
c_rt_lib0clear(&___nl__im__36);
#line 602
c_rt_lib0clear(&___nl__im__37);
#line 602
c_rt_lib0clear(&___nl__im__38);
#line 602
c_rt_lib0clear(&___nl__im__39);
#line 602
c_rt_lib0clear(&___nl__im__40);
#line 602
c_rt_lib0clear(&___nl__im__42);
#line 602
c_rt_lib0clear(&___nl__im__43);
#line 602
c_rt_lib0clear(&___nl__im__61);
#line 602
c_rt_lib0clear(&___nl__im__62);
#line 602
c_rt_lib0clear(&___nl__im__64);
#line 602
c_rt_lib0clear(&___nl__im__65);
#line 602
c_rt_lib0clear(&___nl__im__67);
#line 602
c_rt_lib0clear(&___nl__im__68);
#line 602
c_rt_lib0clear(&___nl__im__69);
#line 602
c_rt_lib0clear(&___nl__im__70);
#line 602
return NULL;
return NULL;

}

ImmT  translator_priv0print_loop_break(translator0state_t0type* ___ref___rec__0,translator0loop0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 606
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1418)));
#line 606
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__2, ___ref___rec__0));
#line 606
c_rt_lib0clear(&___nl__im__2);
#line 607
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(571)));
#line 607
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 607
c_rt_lib0clear(&___nl__im__5);
#line 607
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 607
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__6));
#line 607
//clear ___nl__int__4;
#line 607
c_rt_lib0clear(&___nl__im__6);
#line 607
c_rt_lib0delete(translator_priv0print(___ref___rec__0, ___nl__im__3));
#line 607
c_rt_lib0clear(&___nl__im__3);
#line 607
c_rt_lib0clear(&___nl__im__1);
#line 607
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
#line 612
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 613
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 614
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 615
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 615
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(216)));
#line 615
c_rt_lib0clear(&___nl__im__8);
#line 615
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1088)));
#line 615
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(216), ___nl__im__7, ___get_global_string_const(224), ___nl__im__9));
#line 615
c_rt_lib0clear(&___nl__im__7);
#line 615
c_rt_lib0clear(&___nl__im__9);
#line 615
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(1089), ___nl__im__3, ___get_global_string_const(1075), ___nl__im__4, ___get_global_string_const(1090), ___nl__im__5, ___get_global_string_const(1091), ___nl__im__6));
#line 615
c_rt_lib0clear(&___nl__im__3);
#line 615
c_rt_lib0clear(&___nl__im__4);
#line 615
c_rt_lib0clear(&___nl__im__5);
#line 615
c_rt_lib0clear(&___nl__im__6);
#line 617
___nl__bool__10 = true;
#line 617
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__10, ___ref___rec__1));
#line 617
//clear ___nl__bool__10;
#line 617
c_rt_lib0clear(&___nl__im__0);
#line 617
c_rt_lib0clear(&___nl__im__2);
#line 617
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
#line 624
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 624
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(216)));
#line 624
c_rt_lib0clear(&___nl__im__5);
#line 627
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 627
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(216)));
#line 627
c_rt_lib0clear(&___nl__im__10);
#line 628
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 628
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(1107), ___nl__im__12));
#line 628
c_rt_lib0clear(&___nl__im__12);
#line 629
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 629
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__9, ___get_global_string_const(241), ___nl__im__11, ___get_global_string_const(110), ___nl__im__13));
#line 629
c_rt_lib0clear(&___nl__im__9);
#line 629
c_rt_lib0clear(&___nl__im__11);
#line 629
c_rt_lib0clear(&___nl__im__13);
#line 631
c_rt_lib0move(&___nl__im__14,___get_global_string_const(378));
#line 631
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_string_const(245), ___nl__im__8, ___get_global_string_const(569), ___nl__im__14));
#line 631
c_rt_lib0clear(&___nl__im__8);
#line 631
c_rt_lib0clear(&___nl__im__14);
#line 631
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(1111), ___nl__im__7));
#line 631
c_rt_lib0clear(&___nl__im__7);
#line 633
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 633
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__4, ___get_global_string_const(241), ___nl__im__6, ___get_global_string_const(110), ___nl__im__15));
#line 633
c_rt_lib0clear(&___nl__im__4);
#line 633
c_rt_lib0clear(&___nl__im__6);
#line 633
c_rt_lib0clear(&___nl__im__15);
#line 635
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 636
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 637
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 637
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(216)));
#line 637
c_rt_lib0clear(&___nl__im__20);
#line 637
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(1088)));
#line 637
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_string_const(216), ___nl__im__19, ___get_global_string_const(224), ___nl__im__21));
#line 637
c_rt_lib0clear(&___nl__im__19);
#line 637
c_rt_lib0clear(&___nl__im__21);
#line 637
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(1089), ___nl__im__3, ___get_global_string_const(1075), ___nl__im__16, ___get_global_string_const(1090), ___nl__im__17, ___get_global_string_const(1091), ___nl__im__18));
#line 637
c_rt_lib0clear(&___nl__im__3);
#line 637
c_rt_lib0clear(&___nl__im__16);
#line 637
c_rt_lib0clear(&___nl__im__17);
#line 637
c_rt_lib0clear(&___nl__im__18);
#line 639
___nl__bool__22 = true;
#line 639
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__22, ___ref___rec__1));
#line 639
//clear ___nl__bool__22;
#line 639
c_rt_lib0clear(&___nl__im__0);
#line 639
c_rt_lib0clear(&___nl__im__2);
#line 639
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
ImmT  ___nl__im__45 = NULL;
#line 643
c_rt_lib0move(&___nl__im__3, translator_priv0save_registers(___ref___rec__2));
#line 644
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__2);
#line 645
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 646
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 646
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__2, ___nl__im__7));
#line 646
c_rt_lib0clear(&___nl__im__7);
#line 647
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 647
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__6, ___ref___rec__2));
#line 647
c_rt_lib0clear(&___nl__im__8);
#line 648
c_rt_lib0move(&___nl__im__11,___get_global_string_const(378));
#line 648
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__6, ___get_global_string_const(78), ___nl__im__6, ___get_global_string_const(569), ___nl__im__11));
#line 648
c_rt_lib0clear(&___nl__im__11);
#line 648
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__10));
#line 648
c_rt_lib0clear(&___nl__im__10);
#line 648
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 648
c_rt_lib0clear(&___nl__im__9);
#line 649
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 650
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1075)));
#line 650
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__12, ___ref___rec__2));
#line 650
c_rt_lib0clear(&___nl__im__12);
#line 651
___nl__bool__13 = ___nl__bool__1;
#line 651
___nl__bool__13 = !___nl__bool__13;
#line 651
___nl__bool__13 = !___nl__bool__13;
#line 651
if(___nl__bool__13){ goto label_32;}
#line 651
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1075)));
#line 651
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(216)));
#line 651
c_rt_lib0clear(&___nl__im__16);
#line 651
c_rt_lib0move(&___nl__im__14, translator0last_debug_char(___nl__im__15));
#line 651
c_rt_lib0clear(&___nl__im__15);
#line 651
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__14, ___ref___rec__2));
#line 651
c_rt_lib0clear(&___nl__im__14);
#line 651
goto label_32;
#line 651
label_32:
;
#line 651
//clear ___nl__bool__13;
#line 652
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__4));
#line 652
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__18));
#line 652
c_rt_lib0clear(&___nl__im__18);
#line 652
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__17));
#line 652
c_rt_lib0clear(&___nl__im__17);
#line 653
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 654
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1090)));
#line 654
___nl__int__21 = 0;
#line 654
___nl__int__22 = 1;
#line 654
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 654
label_44:
;
#line 654
___nl__bool__24 = ___nl__int__21 >= ___nl__int__23;
#line 654
if(___nl__bool__24){ goto label_83;}
#line 654
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 654
c_rt_lib0copy(&___nl__im__20, ___nl__im__25);
#line 655
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(216)));
#line 655
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__26, ___ref___rec__2));
#line 655
c_rt_lib0clear(&___nl__im__26);
#line 656
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 657
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(1089)));
#line 657
c_rt_lib0delete(translator_priv0print_val(___nl__im__27, ___nl__im__6, ___ref___rec__2));
#line 657
c_rt_lib0clear(&___nl__im__27);
#line 658
c_rt_lib0move(&___nl__im__30,___get_global_string_const(378));
#line 658
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__6, ___get_global_string_const(78), ___nl__im__6, ___get_global_string_const(569), ___nl__im__30));
#line 658
c_rt_lib0clear(&___nl__im__30);
#line 658
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__29));
#line 658
c_rt_lib0clear(&___nl__im__29);
#line 658
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__28));
#line 658
c_rt_lib0clear(&___nl__im__28);
#line 659
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 660
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(224)));
#line 660
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__31, ___ref___rec__2));
#line 660
c_rt_lib0clear(&___nl__im__31);
#line 661
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(224)));
#line 661
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(216)));
#line 661
c_rt_lib0clear(&___nl__im__34);
#line 661
c_rt_lib0move(&___nl__im__32, translator0last_debug_char(___nl__im__33));
#line 661
c_rt_lib0clear(&___nl__im__33);
#line 661
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__32, ___ref___rec__2));
#line 661
c_rt_lib0clear(&___nl__im__32);
#line 662
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__4));
#line 662
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__36));
#line 662
c_rt_lib0clear(&___nl__im__36);
#line 662
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__35));
#line 662
c_rt_lib0clear(&___nl__im__35);
#line 663
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 663
c_rt_lib0clear(&___nl__im__20);
#line 664
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 664
goto label_44;
#line 664
label_83:
;
#line 665
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1091)));
#line 665
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(224)));
#line 665
c_rt_lib0clear(&___nl__im__39);
#line 665
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(1088));
#line 665
c_rt_lib0clear(&___nl__im__38);
#line 665
___nl__bool__37 = !___nl__bool__37;
#line 665
___nl__bool__37 = !___nl__bool__37;
#line 665
if(___nl__bool__37){ goto label_108;}
#line 666
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1091)));
#line 666
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__40, ___ref___rec__2));
#line 666
c_rt_lib0clear(&___nl__im__40);
#line 667
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1091)));
#line 667
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_string_const(216)));
#line 667
c_rt_lib0clear(&___nl__im__43);
#line 667
c_rt_lib0move(&___nl__im__41, translator0last_debug_char(___nl__im__42));
#line 667
c_rt_lib0clear(&___nl__im__42);
#line 667
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__41, ___ref___rec__2));
#line 667
c_rt_lib0clear(&___nl__im__41);
#line 668
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__4));
#line 668
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__45));
#line 668
c_rt_lib0clear(&___nl__im__45);
#line 668
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__44));
#line 668
c_rt_lib0clear(&___nl__im__44);
#line 669
goto label_108;
#line 669
label_108:
;
#line 669
//clear ___nl__bool__37;
#line 670
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__2));
#line 671
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__3, ___ref___rec__2));
#line 671
c_rt_lib0clear(&___nl__im__0);
#line 671
//clear ___nl__bool__1;
#line 671
c_rt_lib0clear(&___nl__im__3);
#line 671
//clear ___nl__int__4;
#line 671
//clear ___nl__int__5;
#line 671
c_rt_lib0clear(&___nl__im__6);
#line 671
c_rt_lib0clear(&___nl__im__19);
#line 671
c_rt_lib0clear(&___nl__im__20);
#line 671
//clear ___nl__int__21;
#line 671
//clear ___nl__int__22;
#line 671
//clear ___nl__int__23;
#line 671
//clear ___nl__bool__24;
#line 671
c_rt_lib0clear(&___nl__im__25);
#line 671
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
#line 678
c_rt_lib0move(&___nl__im__6,___get_global_string_const(286));
#line 678
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__0, ___get_global_string_const(111), ___nl__im__6, ___get_global_string_const(226), ___nl__im__1, ___get_global_string_const(113), ___nl__im__2));
#line 678
c_rt_lib0clear(&___nl__im__6);
#line 678
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__5));
#line 678
c_rt_lib0clear(&___nl__im__5);
#line 678
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 678
c_rt_lib0clear(&___nl__im__4);
#line 678
c_rt_lib0clear(&___nl__im__0);
#line 678
c_rt_lib0clear(&___nl__im__1);
#line 678
c_rt_lib0clear(&___nl__im__2);
#line 678
return NULL;
return NULL;

}

translator0loop_label0type translator_priv0save_loop_break(translator0state_t0type* ___ref___rec__0,nlasm0label_t0type ___nl__int__1,nlasm0label_t0type ___nl__int__2) {
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT * ___nl__im_ptr__16 = NULL;
ImmT  ___nl__im__17 = NULL;
#line 682
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 682
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 682
___nl__im_ptr__4 = NULL;
#line 683
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__0));
#line 684
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__1));
#line 684
___nl__bool__8 = false;
#line 684
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__8));
#line 684
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(571), ___nl__im__7, ___get_global_string_const(1418), ___nl__im__5, ___get_global_string_const(1419), ___nl__im__9));
#line 684
c_rt_lib0clear(&___nl__im__7);
#line 684
//clear ___nl__bool__8;
#line 684
c_rt_lib0clear(&___nl__im__9);
#line 684
___nl__im_ptr__10 = &((*___ref___rec__0).loop_label0field);
#line 684
c_rt_lib0copy(&___nl__im__11, ___nl__im__6);
#line 684
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_string_const(1083), ___nl__im__11);
#line 684
___nl__im_ptr__10 = NULL;
#line 684
c_rt_lib0clear(&___nl__im__6);
#line 684
c_rt_lib0clear(&___nl__im__11);
#line 685
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__2));
#line 685
___nl__bool__14 = false;
#line 685
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 685
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(571), ___nl__im__13, ___get_global_string_const(1418), ___nl__im__5, ___get_global_string_const(1419), ___nl__im__15));
#line 685
c_rt_lib0clear(&___nl__im__13);
#line 685
//clear ___nl__bool__14;
#line 685
c_rt_lib0clear(&___nl__im__15);
#line 685
___nl__im_ptr__16 = &((*___ref___rec__0).loop_label0field);
#line 685
c_rt_lib0copy(&___nl__im__17, ___nl__im__12);
#line 685
c_rt_lib0hash_set_value_dec(___nl__im_ptr__16, ___get_global_string_const(1084), ___nl__im__17);
#line 685
___nl__im_ptr__16 = NULL;
#line 685
c_rt_lib0clear(&___nl__im__12);
#line 685
c_rt_lib0clear(&___nl__im__17);
#line 686
//clear ___nl__int__1;
#line 686
//clear ___nl__int__2;
#line 686
c_rt_lib0clear(&___nl__im__5);
#line 686
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
#line 690
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 690
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 690
___nl__im_ptr__4 = NULL;
#line 690
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(1083)));
#line 690
c_rt_lib0clear(&___nl__im__3);
#line 690
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1419)));
#line 690
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__5);
#line 690
c_rt_lib0clear(&___nl__im__2);
#line 690
c_rt_lib0clear(&___nl__im__5);
#line 690
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
#line 694
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 694
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 694
___nl__im_ptr__4 = NULL;
#line 694
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(1084)));
#line 694
c_rt_lib0clear(&___nl__im__3);
#line 694
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1419)));
#line 694
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__5);
#line 694
c_rt_lib0clear(&___nl__im__2);
#line 694
c_rt_lib0clear(&___nl__im__5);
#line 694
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
#line 698
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 698
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 698
c_rt_lib0clear(&___nl__im__4);
#line 698
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 698
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 698
___nl__im_ptr__7 = NULL;
#line 698
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(429)));
#line 698
c_rt_lib0clear(&___nl__im__6);
#line 698
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 698
c_rt_lib0clear(&___nl__im__3);
#line 698
c_rt_lib0clear(&___nl__im__5);
#line 698
___nl__bool__2 = !___nl__bool__2;
#line 698
if(___nl__bool__2){ goto label_15;}
#line 699
c_rt_lib0delete(translator_priv0print_own_fora(___nl__im__0, ___ref___rec__1));
#line 700
goto label_18;
#line 700
label_15:
;
#line 701
c_rt_lib0delete(translator_priv0print_ptd_fora(___nl__im__0, ___ref___rec__1));
#line 702
goto label_18;
#line 702
label_18:
;
#line 702
//clear ___nl__bool__2;
#line 702
c_rt_lib0clear(&___nl__im__0);
#line 702
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
#line 706
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 706
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 706
___nl__im_ptr__4 = NULL;
#line 706
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 706
c_rt_lib0clear(&___nl__im__3);
#line 707
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 707
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 707
c_rt_lib0clear(&___nl__im__6);
#line 708
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(377)));
#line 708
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 708
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 708
c_rt_lib0clear(&___nl__im__8);
#line 708
c_rt_lib0clear(&___nl__im__9);
#line 709
___nl__int__10 = translator_priv0get_sim_label(___ref___rec__1);
#line 710
___nl__int__11 = translator_priv0get_sim_label(___ref___rec__1);
#line 711
___nl__int__12 = translator_priv0get_sim_label(___ref___rec__1);
#line 712
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 712
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 712
c_rt_lib0clear(&___nl__im__14);
#line 713
___nl__int__15 = 0;
#line 713
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 713
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__13, ___ref___rec__1));
#line 713
//clear ___nl__int__15;
#line 713
c_rt_lib0clear(&___nl__im__16);
#line 714
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 714
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__1, ___nl__im__18));
#line 714
c_rt_lib0clear(&___nl__im__18);
#line 715
___nl__int__19 = 1;
#line 715
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 715
c_rt_lib0delete(translator_priv0load_const(___nl__im__20, ___nl__im__17, ___ref___rec__1));
#line 715
//clear ___nl__int__19;
#line 715
c_rt_lib0clear(&___nl__im__20);
#line 716
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 716
c_rt_lib0move(&___nl__im__21, translator_priv0new_register(___ref___rec__1, ___nl__im__22));
#line 716
c_rt_lib0clear(&___nl__im__22);
#line 717
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__21, ___get_global_string_const(78), ___nl__im__5));
#line 717
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(262), ___nl__im__24));
#line 717
c_rt_lib0clear(&___nl__im__24);
#line 717
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__23));
#line 717
c_rt_lib0clear(&___nl__im__23);
#line 718
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 718
c_rt_lib0move(&___nl__im__25, translator_priv0new_register(___ref___rec__1, ___nl__im__26));
#line 718
c_rt_lib0clear(&___nl__im__26);
#line 719
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__12, ___ref___rec__1));
#line 720
c_rt_lib0move(&___nl__im__27,___get_global_string_const(402));
#line 720
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__25, ___nl__im__13, ___nl__im__21, ___nl__im__27, ___ref___rec__1));
#line 720
c_rt_lib0clear(&___nl__im__27);
#line 721
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__10, ___nl__im__25, ___ref___rec__1));
#line 722
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 722
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 722
c_rt_lib0clear(&___nl__im__29);
#line 723
c_rt_lib0delete(translator_priv0use_index(___nl__im__28, ___nl__im__5, ___nl__im__13, ___ref___rec__1));
#line 724
c_rt_lib0delete(translator_priv0move(___nl__im__7, ___nl__im__28, ___ref___rec__1));
#line 725
c_rt_lib0move(&___nl__im__30, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__10, ___nl__int__11));
#line 726
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 726
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__31, ___ref___rec__1));
#line 726
c_rt_lib0clear(&___nl__im__31);
#line 727
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__7, ___ref___rec__1));
#line 728
___nl__bool__32 = translator_priv0continue_used(___ref___rec__1);
#line 728
___nl__bool__32 = !___nl__bool__32;
#line 728
if(___nl__bool__32){ goto label_63;}
#line 728
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__11, ___ref___rec__1));
#line 728
goto label_63;
#line 728
label_63:
;
#line 728
//clear ___nl__bool__32;
#line 729
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1156)));
#line 729
___nl__bool__33 = c_rt_lib0check_true_native(___nl__im__34);
#line 729
c_rt_lib0clear(&___nl__im__34);
#line 729
___nl__bool__33 = !___nl__bool__33;
#line 729
___nl__bool__33 = !___nl__bool__33;
#line 729
if(___nl__bool__33){ goto label_75;}
#line 729
c_rt_lib0move(&___nl__im__35, translator0last_debug_char(___nl__im__2));
#line 729
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__35, ___ref___rec__1));
#line 729
c_rt_lib0clear(&___nl__im__35);
#line 729
goto label_75;
#line 729
label_75:
;
#line 729
//clear ___nl__bool__33;
#line 730
c_rt_lib0move(&___nl__im__38,___get_global_string_const(382));
#line 730
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__13, ___get_global_string_const(291), ___nl__im__13, ___get_global_string_const(292), ___nl__im__17, ___get_global_string_const(569), ___nl__im__38));
#line 730
c_rt_lib0clear(&___nl__im__38);
#line 730
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(254), ___nl__im__37));
#line 730
c_rt_lib0clear(&___nl__im__37);
#line 730
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__36));
#line 730
c_rt_lib0clear(&___nl__im__36);
#line 731
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__12));
#line 731
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__40));
#line 731
c_rt_lib0clear(&___nl__im__40);
#line 731
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__39));
#line 731
c_rt_lib0clear(&___nl__im__39);
#line 732
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__10, ___ref___rec__1));
#line 733
___nl__im_ptr__41 = &((*___ref___rec__1).loop_label0field);
#line 733
c_rt_lib0copy(___nl__im_ptr__41, ___nl__im__30);
#line 733
___nl__im_ptr__41 = NULL;
#line 733
c_rt_lib0clear(&___nl__im__0);
#line 733
c_rt_lib0clear(&___nl__im__2);
#line 733
c_rt_lib0clear(&___nl__im__5);
#line 733
c_rt_lib0clear(&___nl__im__7);
#line 733
//clear ___nl__int__10;
#line 733
//clear ___nl__int__11;
#line 733
//clear ___nl__int__12;
#line 733
c_rt_lib0clear(&___nl__im__13);
#line 733
c_rt_lib0clear(&___nl__im__17);
#line 733
c_rt_lib0clear(&___nl__im__21);
#line 733
c_rt_lib0clear(&___nl__im__25);
#line 733
c_rt_lib0clear(&___nl__im__28);
#line 733
c_rt_lib0clear(&___nl__im__30);
#line 733
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
#line 737
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 737
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 737
___nl__im_ptr__4 = NULL;
#line 737
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 737
c_rt_lib0clear(&___nl__im__3);
#line 738
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 738
___nl__bool__7 = true;
#line 738
c_rt_lib0move(&___nl__im__5, translator_priv0get_value_of_lvalue(___nl__im__6, ___nl__bool__7, ___ref___rec__1));
#line 738
c_rt_lib0clear(&___nl__im__6);
#line 738
//clear ___nl__bool__7;
#line 739
___nl__int__11 = c_rt_lib0array_len(___nl__im__5);
#line 739
___nl__int__12 = 1;
#line 739
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 739
//clear ___nl__int__11;
#line 739
//clear ___nl__int__12;
#line 739
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 739
//clear ___nl__int__10;
#line 739
___nl__int__15 = c_rt_lib0array_len(___nl__im__5);
#line 739
___nl__int__16 = 1;
#line 739
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 739
//clear ___nl__int__15;
#line 739
//clear ___nl__int__16;
#line 739
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__5, ___nl__int__14));
#line 739
//clear ___nl__int__14;
#line 739
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(241)));
#line 739
c_rt_lib0clear(&___nl__im__9);
#line 739
c_rt_lib0clear(&___nl__im__13);
#line 740
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(377)));
#line 740
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(433)));
#line 740
c_rt_lib0move(&___nl__im__17, translator_priv0print_var_decl(___nl__im__18, ___ref___rec__1, ___nl__im__19));
#line 740
c_rt_lib0clear(&___nl__im__18);
#line 740
c_rt_lib0clear(&___nl__im__19);
#line 741
___nl__int__20 = translator_priv0get_sim_label(___ref___rec__1);
#line 742
___nl__int__21 = translator_priv0get_sim_label(___ref___rec__1);
#line 743
___nl__int__22 = translator_priv0get_sim_label(___ref___rec__1);
#line 744
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 744
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 744
c_rt_lib0clear(&___nl__im__24);
#line 745
___nl__int__25 = 0;
#line 745
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 745
c_rt_lib0delete(translator_priv0load_const(___nl__im__26, ___nl__im__23, ___ref___rec__1));
#line 745
//clear ___nl__int__25;
#line 745
c_rt_lib0clear(&___nl__im__26);
#line 746
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 746
c_rt_lib0move(&___nl__im__27, translator_priv0new_register(___ref___rec__1, ___nl__im__28));
#line 746
c_rt_lib0clear(&___nl__im__28);
#line 747
___nl__int__29 = 1;
#line 747
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 747
c_rt_lib0delete(translator_priv0load_const(___nl__im__30, ___nl__im__27, ___ref___rec__1));
#line 747
//clear ___nl__int__29;
#line 747
c_rt_lib0clear(&___nl__im__30);
#line 748
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 748
c_rt_lib0move(&___nl__im__31, translator_priv0new_register(___ref___rec__1, ___nl__im__32));
#line 748
c_rt_lib0clear(&___nl__im__32);
#line 749
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__31, ___get_global_string_const(78), ___nl__im__8));
#line 749
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(262), ___nl__im__34));
#line 749
c_rt_lib0clear(&___nl__im__34);
#line 749
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__33));
#line 749
c_rt_lib0clear(&___nl__im__33);
#line 750
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 750
c_rt_lib0move(&___nl__im__35, translator_priv0new_register(___ref___rec__1, ___nl__im__36));
#line 750
c_rt_lib0clear(&___nl__im__36);
#line 751
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__22, ___ref___rec__1));
#line 752
c_rt_lib0move(&___nl__im__37,___get_global_string_const(402));
#line 752
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__35, ___nl__im__23, ___nl__im__31, ___nl__im__37, ___ref___rec__1));
#line 752
c_rt_lib0clear(&___nl__im__37);
#line 753
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__20, ___nl__im__35, ___ref___rec__1));
#line 754
c_rt_lib0copy(&___nl__im__38, ___nl__im__17);
#line 755
c_rt_lib0delete(translator_priv0use_index(___nl__im__38, ___nl__im__8, ___nl__im__23, ___ref___rec__1));
#line 756
c_rt_lib0move(&___nl__im__39, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__20, ___nl__int__21));
#line 757
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 757
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__40, ___ref___rec__1));
#line 757
c_rt_lib0clear(&___nl__im__40);
#line 758
___nl__bool__41 = translator_priv0continue_used(___ref___rec__1);
#line 758
___nl__bool__41 = !___nl__bool__41;
#line 758
if(___nl__bool__41){ goto label_78;}
#line 758
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__21, ___ref___rec__1));
#line 758
goto label_78;
#line 758
label_78:
;
#line 758
//clear ___nl__bool__41;
#line 759
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1156)));
#line 759
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__43);
#line 759
c_rt_lib0clear(&___nl__im__43);
#line 759
___nl__bool__42 = !___nl__bool__42;
#line 759
___nl__bool__42 = !___nl__bool__42;
#line 759
if(___nl__bool__42){ goto label_90;}
#line 759
c_rt_lib0move(&___nl__im__44, translator0last_debug_char(___nl__im__2));
#line 759
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__44, ___ref___rec__1));
#line 759
c_rt_lib0clear(&___nl__im__44);
#line 759
goto label_90;
#line 759
label_90:
;
#line 759
//clear ___nl__bool__42;
#line 760
c_rt_lib0move(&___nl__im__47,___get_global_string_const(382));
#line 760
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__23, ___get_global_string_const(291), ___nl__im__23, ___get_global_string_const(292), ___nl__im__27, ___get_global_string_const(569), ___nl__im__47));
#line 760
c_rt_lib0clear(&___nl__im__47);
#line 760
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(254), ___nl__im__46));
#line 760
c_rt_lib0clear(&___nl__im__46);
#line 760
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__45));
#line 760
c_rt_lib0clear(&___nl__im__45);
#line 761
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__22));
#line 761
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__49));
#line 761
c_rt_lib0clear(&___nl__im__49);
#line 761
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__48));
#line 761
c_rt_lib0clear(&___nl__im__48);
#line 762
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__20, ___ref___rec__1));
#line 763
___nl__bool__50 = false;
#line 763
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__5, ___nl__bool__50, ___ref___rec__1));
#line 763
//clear ___nl__bool__50;
#line 764
___nl__im_ptr__51 = &((*___ref___rec__1).loop_label0field);
#line 764
c_rt_lib0copy(___nl__im_ptr__51, ___nl__im__39);
#line 764
___nl__im_ptr__51 = NULL;
#line 764
c_rt_lib0clear(&___nl__im__0);
#line 764
c_rt_lib0clear(&___nl__im__2);
#line 764
c_rt_lib0clear(&___nl__im__5);
#line 764
c_rt_lib0clear(&___nl__im__8);
#line 764
c_rt_lib0clear(&___nl__im__17);
#line 764
//clear ___nl__int__20;
#line 764
//clear ___nl__int__21;
#line 764
//clear ___nl__int__22;
#line 764
c_rt_lib0clear(&___nl__im__23);
#line 764
c_rt_lib0clear(&___nl__im__27);
#line 764
c_rt_lib0clear(&___nl__im__31);
#line 764
c_rt_lib0clear(&___nl__im__35);
#line 764
c_rt_lib0clear(&___nl__im__38);
#line 764
c_rt_lib0clear(&___nl__im__39);
#line 764
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
#line 768
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 769
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 770
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 771
c_rt_lib0move(&___nl__im__4, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 772
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__1));
#line 773
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__0, ___ref___rec__1));
#line 774
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__5, ___ref___rec__1));
#line 775
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 775
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__6, ___ref___rec__1));
#line 775
c_rt_lib0clear(&___nl__im__6);
#line 776
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__3));
#line 776
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__8));
#line 776
c_rt_lib0clear(&___nl__im__8);
#line 776
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__7));
#line 776
c_rt_lib0clear(&___nl__im__7);
#line 777
___nl__bool__9 = translator_priv0break_used(___ref___rec__1);
#line 777
___nl__bool__9 = !___nl__bool__9;
#line 777
if(___nl__bool__9){ goto label_20;}
#line 777
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 777
goto label_20;
#line 777
label_20:
;
#line 777
//clear ___nl__bool__9;
#line 778
___nl__im_ptr__10 = &((*___ref___rec__1).loop_label0field);
#line 778
c_rt_lib0copy(___nl__im_ptr__10, ___nl__im__4);
#line 778
___nl__im_ptr__10 = NULL;
#line 778
c_rt_lib0clear(&___nl__im__0);
#line 778
//clear ___nl__int__2;
#line 778
//clear ___nl__int__3;
#line 778
c_rt_lib0clear(&___nl__im__4);
#line 778
c_rt_lib0clear(&___nl__im__5);
#line 778
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
#line 782
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 783
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 784
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 785
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1094)));
#line 785
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 785
c_rt_lib0clear(&___nl__im__6);
#line 786
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(377)));
#line 786
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 786
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 786
c_rt_lib0clear(&___nl__im__8);
#line 786
c_rt_lib0clear(&___nl__im__9);
#line 787
___nl__int__10 = 0;
#line 787
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 787
c_rt_lib0delete(translator_priv0load_const(___nl__im__11, ___nl__im__7, ___ref___rec__1));
#line 787
//clear ___nl__int__10;
#line 787
c_rt_lib0clear(&___nl__im__11);
#line 788
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 788
c_rt_lib0move(&___nl__im__12, translator_priv0new_register(___ref___rec__1, ___nl__im__13));
#line 788
c_rt_lib0clear(&___nl__im__13);
#line 789
___nl__int__14 = 1;
#line 789
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 789
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__12, ___ref___rec__1));
#line 789
//clear ___nl__int__14;
#line 789
c_rt_lib0clear(&___nl__im__15);
#line 790
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 790
c_rt_lib0move(&___nl__im__16, translator_priv0new_register(___ref___rec__1, ___nl__im__17));
#line 790
c_rt_lib0clear(&___nl__im__17);
#line 791
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 792
c_rt_lib0move(&___nl__im__18,___get_global_string_const(402));
#line 792
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__16, ___nl__im__7, ___nl__im__5, ___nl__im__18, ___ref___rec__1));
#line 792
c_rt_lib0clear(&___nl__im__18);
#line 793
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__16, ___ref___rec__1));
#line 794
c_rt_lib0move(&___nl__im__19, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 795
c_rt_lib0move(&___nl__im__20, translator_priv0save_registers(___ref___rec__1));
#line 796
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 796
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__21, ___ref___rec__1));
#line 796
c_rt_lib0clear(&___nl__im__21);
#line 797
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__20, ___ref___rec__1));
#line 798
___nl__bool__22 = translator_priv0continue_used(___ref___rec__1);
#line 798
___nl__bool__22 = !___nl__bool__22;
#line 798
if(___nl__bool__22){ goto label_43;}
#line 798
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 798
goto label_43;
#line 798
label_43:
;
#line 798
//clear ___nl__bool__22;
#line 799
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1156)));
#line 799
___nl__bool__23 = c_rt_lib0check_true_native(___nl__im__24);
#line 799
c_rt_lib0clear(&___nl__im__24);
#line 799
___nl__bool__23 = !___nl__bool__23;
#line 799
___nl__bool__23 = !___nl__bool__23;
#line 799
if(___nl__bool__23){ goto label_59;}
#line 799
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 799
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(216)));
#line 799
c_rt_lib0clear(&___nl__im__27);
#line 799
c_rt_lib0move(&___nl__im__25, translator0last_debug_char(___nl__im__26));
#line 799
c_rt_lib0clear(&___nl__im__26);
#line 799
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__25, ___ref___rec__1));
#line 799
c_rt_lib0clear(&___nl__im__25);
#line 799
goto label_59;
#line 799
label_59:
;
#line 799
//clear ___nl__bool__23;
#line 800
c_rt_lib0move(&___nl__im__30,___get_global_string_const(382));
#line 800
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__7, ___get_global_string_const(291), ___nl__im__7, ___get_global_string_const(292), ___nl__im__12, ___get_global_string_const(569), ___nl__im__30));
#line 800
c_rt_lib0clear(&___nl__im__30);
#line 800
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(254), ___nl__im__29));
#line 800
c_rt_lib0clear(&___nl__im__29);
#line 800
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__28));
#line 800
c_rt_lib0clear(&___nl__im__28);
#line 801
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__4));
#line 801
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__32));
#line 801
c_rt_lib0clear(&___nl__im__32);
#line 801
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__31));
#line 801
c_rt_lib0clear(&___nl__im__31);
#line 802
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 803
___nl__im_ptr__33 = &((*___ref___rec__1).loop_label0field);
#line 803
c_rt_lib0copy(___nl__im_ptr__33, ___nl__im__19);
#line 803
___nl__im_ptr__33 = NULL;
#line 803
c_rt_lib0clear(&___nl__im__0);
#line 803
//clear ___nl__int__2;
#line 803
//clear ___nl__int__3;
#line 803
//clear ___nl__int__4;
#line 803
c_rt_lib0clear(&___nl__im__5);
#line 803
c_rt_lib0clear(&___nl__im__7);
#line 803
c_rt_lib0clear(&___nl__im__12);
#line 803
c_rt_lib0clear(&___nl__im__16);
#line 803
c_rt_lib0clear(&___nl__im__19);
#line 803
c_rt_lib0clear(&___nl__im__20);
#line 803
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
#line 807
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 807
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 807
c_rt_lib0clear(&___nl__im__4);
#line 807
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 807
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 807
___nl__im_ptr__7 = NULL;
#line 807
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(429)));
#line 807
c_rt_lib0clear(&___nl__im__6);
#line 807
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 807
c_rt_lib0clear(&___nl__im__3);
#line 807
c_rt_lib0clear(&___nl__im__5);
#line 807
___nl__bool__2 = !___nl__bool__2;
#line 807
if(___nl__bool__2){ goto label_15;}
#line 808
c_rt_lib0delete(translator_priv0print_own_forh(___nl__im__0, ___ref___rec__1));
#line 809
goto label_18;
#line 809
label_15:
;
#line 810
c_rt_lib0delete(translator_priv0print_ptd_forh(___nl__im__0, ___ref___rec__1));
#line 811
goto label_18;
#line 811
label_18:
;
#line 811
//clear ___nl__bool__2;
#line 811
c_rt_lib0clear(&___nl__im__0);
#line 811
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
#line 815
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 815
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 815
___nl__im_ptr__4 = NULL;
#line 815
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 815
c_rt_lib0clear(&___nl__im__3);
#line 816
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 817
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 818
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 819
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 819
c_rt_lib0move(&___nl__im__8, translator_priv0calc_val(___nl__im__9, ___ref___rec__1));
#line 819
c_rt_lib0clear(&___nl__im__9);
#line 820
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(586)));
#line 820
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 820
c_rt_lib0move(&___nl__im__10, translator_priv0print_var_decl(___nl__im__11, ___ref___rec__1, ___nl__im__12));
#line 820
c_rt_lib0clear(&___nl__im__11);
#line 820
c_rt_lib0clear(&___nl__im__12);
#line 821
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 821
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 821
c_rt_lib0clear(&___nl__im__14);
#line 822
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 822
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 822
c_rt_lib0move(&___nl__im__15, translator_priv0print_var_decl(___nl__im__16, ___ref___rec__1, ___nl__im__17));
#line 822
c_rt_lib0clear(&___nl__im__16);
#line 822
c_rt_lib0clear(&___nl__im__17);
#line 823
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 823
c_rt_lib0move(&___nl__im__18, translator_priv0new_register(___ref___rec__1, ___nl__im__19));
#line 823
c_rt_lib0clear(&___nl__im__19);
#line 824
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(377), ___nl__im__18, ___get_global_string_const(143), ___nl__im__8));
#line 824
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(281), ___nl__im__21));
#line 824
c_rt_lib0clear(&___nl__im__21);
#line 824
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 824
c_rt_lib0clear(&___nl__im__20);
#line 825
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 826
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__13, ___get_global_string_const(377), ___nl__im__18, ___get_global_string_const(143), ___nl__im__8));
#line 826
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(284), ___nl__im__23));
#line 826
c_rt_lib0clear(&___nl__im__23);
#line 826
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__22));
#line 826
c_rt_lib0clear(&___nl__im__22);
#line 827
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__13, ___ref___rec__1));
#line 828
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__10, ___get_global_string_const(377), ___nl__im__18, ___get_global_string_const(143), ___nl__im__8));
#line 828
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(283), ___nl__im__25));
#line 828
c_rt_lib0clear(&___nl__im__25);
#line 828
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 828
c_rt_lib0clear(&___nl__im__24);
#line 830
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 830
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(110)));
#line 830
___nl__bool__26 = nlasm0eq_reg_type(___nl__im__27, ___nl__im__28);
#line 830
c_rt_lib0clear(&___nl__im__27);
#line 830
c_rt_lib0clear(&___nl__im__28);
#line 830
___nl__bool__26 = !___nl__bool__26;
#line 831
c_rt_lib0copy(&___nl__im__29, ___nl__im__15);
#line 832
___nl__bool__30 = ___nl__bool__26;
#line 832
___nl__bool__30 = !___nl__bool__30;
#line 832
if(___nl__bool__30){ goto label_58;}
#line 832
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 832
c_rt_lib0move(&___nl__im__29, translator_priv0new_register(___ref___rec__1, ___nl__im__31));
#line 832
c_rt_lib0clear(&___nl__im__31);
#line 832
goto label_58;
#line 832
label_58:
;
#line 832
//clear ___nl__bool__30;
#line 833
c_rt_lib0move(&___nl__im__32,___get_global_string_const(794));
#line 833
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__8));
#line 833
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__10));
#line 833
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__35));
#line 833
c_rt_lib0clear(&___nl__im__34);
#line 833
c_rt_lib0clear(&___nl__im__35);
#line 833
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__29, ___nl__im__32, ___nl__im__33, ___ref___rec__1));
#line 833
c_rt_lib0clear(&___nl__im__32);
#line 833
c_rt_lib0clear(&___nl__im__33);
#line 834
___nl__bool__36 = ___nl__bool__26;
#line 834
___nl__bool__36 = !___nl__bool__36;
#line 834
if(___nl__bool__36){ goto label_74;}
#line 834
c_rt_lib0delete(translator_priv0move(___nl__im__15, ___nl__im__29, ___ref___rec__1));
#line 834
goto label_74;
#line 834
label_74:
;
#line 834
//clear ___nl__bool__36;
#line 836
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 837
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 838
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 838
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 838
c_rt_lib0clear(&___nl__im__39);
#line 839
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 840
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 840
___nl__bool__40 = !___nl__bool__40;
#line 840
if(___nl__bool__40){ goto label_87;}
#line 840
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 840
goto label_87;
#line 840
label_87:
;
#line 840
//clear ___nl__bool__40;
#line 841
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1156)));
#line 841
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 841
c_rt_lib0clear(&___nl__im__42);
#line 841
___nl__bool__41 = !___nl__bool__41;
#line 841
___nl__bool__41 = !___nl__bool__41;
#line 841
if(___nl__bool__41){ goto label_99;}
#line 841
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 841
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 841
c_rt_lib0clear(&___nl__im__43);
#line 841
goto label_99;
#line 841
label_99:
;
#line 841
//clear ___nl__bool__41;
#line 842
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(377), ___nl__im__18, ___get_global_string_const(143), ___nl__im__8));
#line 842
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__45));
#line 842
c_rt_lib0clear(&___nl__im__45);
#line 842
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 842
c_rt_lib0clear(&___nl__im__44);
#line 843
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 843
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__47));
#line 843
c_rt_lib0clear(&___nl__im__47);
#line 843
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 843
c_rt_lib0clear(&___nl__im__46);
#line 844
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 845
___nl__im_ptr__48 = &((*___ref___rec__1).loop_label0field);
#line 845
c_rt_lib0copy(___nl__im_ptr__48, ___nl__im__37);
#line 845
___nl__im_ptr__48 = NULL;
#line 845
c_rt_lib0clear(&___nl__im__0);
#line 845
c_rt_lib0clear(&___nl__im__2);
#line 845
//clear ___nl__int__5;
#line 845
//clear ___nl__int__6;
#line 845
//clear ___nl__int__7;
#line 845
c_rt_lib0clear(&___nl__im__8);
#line 845
c_rt_lib0clear(&___nl__im__10);
#line 845
c_rt_lib0clear(&___nl__im__13);
#line 845
c_rt_lib0clear(&___nl__im__15);
#line 845
c_rt_lib0clear(&___nl__im__18);
#line 845
//clear ___nl__bool__26;
#line 845
c_rt_lib0clear(&___nl__im__29);
#line 845
c_rt_lib0clear(&___nl__im__37);
#line 845
c_rt_lib0clear(&___nl__im__38);
#line 845
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
#line 849
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 849
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 849
___nl__im_ptr__4 = NULL;
#line 849
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 849
c_rt_lib0clear(&___nl__im__3);
#line 850
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 851
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 852
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 853
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 853
___nl__bool__10 = true;
#line 853
c_rt_lib0move(&___nl__im__8, translator_priv0get_value_of_lvalue(___nl__im__9, ___nl__bool__10, ___ref___rec__1));
#line 853
c_rt_lib0clear(&___nl__im__9);
#line 853
//clear ___nl__bool__10;
#line 854
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 854
___nl__int__15 = 1;
#line 854
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 854
//clear ___nl__int__14;
#line 854
//clear ___nl__int__15;
#line 854
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__8, ___nl__int__13));
#line 854
//clear ___nl__int__13;
#line 854
___nl__int__18 = c_rt_lib0array_len(___nl__im__8);
#line 854
___nl__int__19 = 1;
#line 854
___nl__int__17 = ___nl__int__18 - ___nl__int__19;
#line 854
//clear ___nl__int__18;
#line 854
//clear ___nl__int__19;
#line 854
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 854
//clear ___nl__int__17;
#line 854
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(241)));
#line 854
c_rt_lib0clear(&___nl__im__12);
#line 854
c_rt_lib0clear(&___nl__im__16);
#line 855
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(586)));
#line 855
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 855
c_rt_lib0move(&___nl__im__20, translator_priv0print_var_decl(___nl__im__21, ___ref___rec__1, ___nl__im__22));
#line 855
c_rt_lib0clear(&___nl__im__21);
#line 855
c_rt_lib0clear(&___nl__im__22);
#line 856
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 856
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 856
c_rt_lib0clear(&___nl__im__24);
#line 857
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 857
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(433)));
#line 857
c_rt_lib0move(&___nl__im__25, translator_priv0print_var_decl(___nl__im__26, ___ref___rec__1, ___nl__im__27));
#line 857
c_rt_lib0clear(&___nl__im__26);
#line 857
c_rt_lib0clear(&___nl__im__27);
#line 858
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 858
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 858
c_rt_lib0clear(&___nl__im__29);
#line 859
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_string_const(377), ___nl__im__28, ___get_global_string_const(143), ___nl__im__11));
#line 859
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_string_const(281), ___nl__im__31));
#line 859
c_rt_lib0clear(&___nl__im__31);
#line 859
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__30));
#line 859
c_rt_lib0clear(&___nl__im__30);
#line 860
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 861
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__23, ___get_global_string_const(377), ___nl__im__28, ___get_global_string_const(143), ___nl__im__11));
#line 861
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(284), ___nl__im__33));
#line 861
c_rt_lib0clear(&___nl__im__33);
#line 861
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 861
c_rt_lib0clear(&___nl__im__32);
#line 862
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__23, ___ref___rec__1));
#line 863
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__20, ___get_global_string_const(377), ___nl__im__28, ___get_global_string_const(143), ___nl__im__11));
#line 863
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(283), ___nl__im__35));
#line 863
c_rt_lib0clear(&___nl__im__35);
#line 863
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 863
c_rt_lib0clear(&___nl__im__34);
#line 865
___nl__bool__36 = false;
#line 865
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___nl__bool__36, ___ref___rec__1));
#line 865
//clear ___nl__bool__36;
#line 867
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 868
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 869
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 869
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 869
c_rt_lib0clear(&___nl__im__39);
#line 870
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 871
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___ref___rec__1));
#line 872
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 872
___nl__bool__40 = !___nl__bool__40;
#line 872
if(___nl__bool__40){ goto label_78;}
#line 872
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 872
goto label_78;
#line 872
label_78:
;
#line 872
//clear ___nl__bool__40;
#line 873
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1156)));
#line 873
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 873
c_rt_lib0clear(&___nl__im__42);
#line 873
___nl__bool__41 = !___nl__bool__41;
#line 873
___nl__bool__41 = !___nl__bool__41;
#line 873
if(___nl__bool__41){ goto label_90;}
#line 873
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 873
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 873
c_rt_lib0clear(&___nl__im__43);
#line 873
goto label_90;
#line 873
label_90:
;
#line 873
//clear ___nl__bool__41;
#line 874
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(377), ___nl__im__28, ___get_global_string_const(143), ___nl__im__11));
#line 874
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(282), ___nl__im__45));
#line 874
c_rt_lib0clear(&___nl__im__45);
#line 874
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 874
c_rt_lib0clear(&___nl__im__44);
#line 875
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 875
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__47));
#line 875
c_rt_lib0clear(&___nl__im__47);
#line 875
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 875
c_rt_lib0clear(&___nl__im__46);
#line 876
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 877
___nl__bool__48 = false;
#line 877
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__8, ___nl__bool__48, ___ref___rec__1));
#line 877
//clear ___nl__bool__48;
#line 878
___nl__im_ptr__49 = &((*___ref___rec__1).loop_label0field);
#line 878
c_rt_lib0copy(___nl__im_ptr__49, ___nl__im__37);
#line 878
___nl__im_ptr__49 = NULL;
#line 878
c_rt_lib0clear(&___nl__im__0);
#line 878
c_rt_lib0clear(&___nl__im__2);
#line 878
//clear ___nl__int__5;
#line 878
//clear ___nl__int__6;
#line 878
//clear ___nl__int__7;
#line 878
c_rt_lib0clear(&___nl__im__8);
#line 878
c_rt_lib0clear(&___nl__im__11);
#line 878
c_rt_lib0clear(&___nl__im__20);
#line 878
c_rt_lib0clear(&___nl__im__23);
#line 878
c_rt_lib0clear(&___nl__im__25);
#line 878
c_rt_lib0clear(&___nl__im__28);
#line 878
c_rt_lib0clear(&___nl__im__37);
#line 878
c_rt_lib0clear(&___nl__im__38);
#line 878
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
#line 882
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 883
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 884
___nl__im_ptr__6 = &((*___ref___rec__1).debug0field);
#line 884
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 884
___nl__im_ptr__6 = NULL;
#line 884
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(560)));
#line 884
c_rt_lib0clear(&___nl__im__5);
#line 885
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 886
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 886
c_rt_lib0move(&___nl__im__7, translator_priv0calc_val(___nl__im__8, ___ref___rec__1));
#line 886
c_rt_lib0clear(&___nl__im__8);
#line 887
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 887
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__7, ___nl__im__10, ___ref___rec__1));
#line 887
c_rt_lib0clear(&___nl__im__10);
#line 888
c_rt_lib0move(&___nl__im__13,___get_global_string_const(378));
#line 888
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__9, ___get_global_string_const(78), ___nl__im__9, ___get_global_string_const(569), ___nl__im__13));
#line 888
c_rt_lib0clear(&___nl__im__13);
#line 888
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__12));
#line 888
c_rt_lib0clear(&___nl__im__12);
#line 888
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__11));
#line 888
c_rt_lib0clear(&___nl__im__11);
#line 889
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__9, ___ref___rec__1));
#line 890
c_rt_lib0move(&___nl__im__14, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 891
c_rt_lib0move(&___nl__im__15, translator_priv0save_registers(___ref___rec__1));
#line 892
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 892
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__16, ___ref___rec__1));
#line 892
c_rt_lib0clear(&___nl__im__16);
#line 893
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__15, ___ref___rec__1));
#line 894
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1156)));
#line 894
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 894
c_rt_lib0clear(&___nl__im__18);
#line 894
___nl__bool__17 = !___nl__bool__17;
#line 894
___nl__bool__17 = !___nl__bool__17;
#line 894
if(___nl__bool__17){ goto label_38;}
#line 894
c_rt_lib0move(&___nl__im__19, translator0last_debug_char(___nl__im__4));
#line 894
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__19, ___ref___rec__1));
#line 894
c_rt_lib0clear(&___nl__im__19);
#line 894
goto label_38;
#line 894
label_38:
;
#line 894
//clear ___nl__bool__17;
#line 895
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__3));
#line 895
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__21));
#line 895
c_rt_lib0clear(&___nl__im__21);
#line 895
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 895
c_rt_lib0clear(&___nl__im__20);
#line 896
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 897
___nl__im_ptr__22 = &((*___ref___rec__1).loop_label0field);
#line 897
c_rt_lib0copy(___nl__im_ptr__22, ___nl__im__14);
#line 897
___nl__im_ptr__22 = NULL;
#line 897
c_rt_lib0clear(&___nl__im__0);
#line 897
//clear ___nl__int__2;
#line 897
//clear ___nl__int__3;
#line 897
c_rt_lib0clear(&___nl__im__4);
#line 897
c_rt_lib0clear(&___nl__im__7);
#line 897
c_rt_lib0clear(&___nl__im__9);
#line 897
c_rt_lib0clear(&___nl__im__14);
#line 897
c_rt_lib0clear(&___nl__im__15);
#line 897
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
#line 901
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 902
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 903
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 904
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1092)));
#line 904
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(241));
#line 904
if(___nl__bool__6){ goto label_11;}
#line 906
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(272));
#line 906
if(___nl__bool__6){ goto label_27;}
#line 906
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 906
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 906
nl_die_arg(___nl__im__7);
#line 904
label_11:
;
#line 904
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(241)));
#line 904
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 905
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 905
___nl__int__12 = 1;
#line 905
___nl__int__12 = -___nl__int__12;
#line 905
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 905
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 905
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__11, ___get_global_string_const(240), ___nl__im__13, ___get_global_string_const(366), ___nl__im__14));
#line 905
c_rt_lib0clear(&___nl__im__11);
#line 905
//clear ___nl__int__12;
#line 905
c_rt_lib0clear(&___nl__im__13);
#line 905
c_rt_lib0clear(&___nl__im__14);
#line 905
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__10, ___ref___rec__1));
#line 905
c_rt_lib0clear(&___nl__im__10);
#line 906
goto label_34;
#line 906
label_27:
;
#line 906
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(272)));
#line 906
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 907
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 907
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__15, ___ref___rec__1, ___nl__im__17));
#line 907
c_rt_lib0clear(&___nl__im__17);
#line 908
goto label_34;
#line 908
label_34:
;
#line 909
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 910
___nl__bool__18 = false;
#line 911
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 911
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(241)));
#line 911
c_rt_lib0clear(&___nl__im__21);
#line 911
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(1088));
#line 911
c_rt_lib0clear(&___nl__im__20);
#line 911
___nl__bool__19 = !___nl__bool__19;
#line 911
___nl__bool__19 = !___nl__bool__19;
#line 911
if(___nl__bool__19){ goto label_58;}
#line 912
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1089)));
#line 912
c_rt_lib0move(&___nl__im__22, translator_priv0calc_val(___nl__im__23, ___ref___rec__1));
#line 912
c_rt_lib0clear(&___nl__im__23);
#line 913
c_rt_lib0move(&___nl__im__26,___get_global_string_const(378));
#line 913
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__22, ___get_global_string_const(78), ___nl__im__22, ___get_global_string_const(569), ___nl__im__26));
#line 913
c_rt_lib0clear(&___nl__im__26);
#line 913
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__25));
#line 913
c_rt_lib0clear(&___nl__im__25);
#line 913
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 913
c_rt_lib0clear(&___nl__im__24);
#line 914
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__22, ___ref___rec__1));
#line 915
___nl__bool__18 = true;
#line 916
goto label_58;
#line 916
label_58:
;
#line 916
//clear ___nl__bool__19;
#line 916
c_rt_lib0clear(&___nl__im__22);
#line 917
c_rt_lib0move(&___nl__im__27, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__4));
#line 918
c_rt_lib0move(&___nl__im__28, translator_priv0save_registers(___ref___rec__1));
#line 919
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 919
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__29, ___ref___rec__1));
#line 919
c_rt_lib0clear(&___nl__im__29);
#line 920
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__28, ___ref___rec__1));
#line 921
___nl__bool__30 = translator_priv0continue_used(___ref___rec__1);
#line 921
___nl__bool__30 = !___nl__bool__30;
#line 921
if(___nl__bool__30){ goto label_72;}
#line 921
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 921
goto label_72;
#line 921
label_72:
;
#line 921
//clear ___nl__bool__30;
#line 922
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(377)));
#line 922
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 922
___nl__int__34 = 1;
#line 922
___nl__int__34 = -___nl__int__34;
#line 922
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 922
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 922
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__33, ___get_global_string_const(240), ___nl__im__35, ___get_global_string_const(366), ___nl__im__36));
#line 922
c_rt_lib0clear(&___nl__im__33);
#line 922
//clear ___nl__int__34;
#line 922
c_rt_lib0clear(&___nl__im__35);
#line 922
c_rt_lib0clear(&___nl__im__36);
#line 922
c_rt_lib0delete(translator_priv0print_val(___nl__im__31, ___nl__im__32, ___ref___rec__1));
#line 922
c_rt_lib0clear(&___nl__im__31);
#line 922
c_rt_lib0clear(&___nl__im__32);
#line 923
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 923
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(216)));
#line 923
c_rt_lib0clear(&___nl__im__39);
#line 923
c_rt_lib0move(&___nl__im__37, translator0last_debug_char(___nl__im__38));
#line 923
c_rt_lib0clear(&___nl__im__38);
#line 923
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__37, ___ref___rec__1));
#line 923
c_rt_lib0clear(&___nl__im__37);
#line 924
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__3));
#line 924
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__41));
#line 924
c_rt_lib0clear(&___nl__im__41);
#line 924
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__40));
#line 924
c_rt_lib0clear(&___nl__im__40);
#line 925
___nl__bool__42 = ___nl__bool__18;
#line 925
if(___nl__bool__42){ goto label_103;}
#line 925
___nl__bool__42 = translator_priv0break_used(___ref___rec__1);
#line 925
label_103:
;
#line 925
___nl__bool__42 = !___nl__bool__42;
#line 925
if(___nl__bool__42){ goto label_108;}
#line 925
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 925
goto label_108;
#line 925
label_108:
;
#line 925
//clear ___nl__bool__42;
#line 926
___nl__im_ptr__43 = &((*___ref___rec__1).loop_label0field);
#line 926
c_rt_lib0copy(___nl__im_ptr__43, ___nl__im__27);
#line 926
___nl__im_ptr__43 = NULL;
#line 926
c_rt_lib0clear(&___nl__im__0);
#line 926
//clear ___nl__int__2;
#line 926
//clear ___nl__int__3;
#line 926
//clear ___nl__int__4;
#line 926
c_rt_lib0clear(&___nl__im__5);
#line 926
//clear ___nl__bool__6;
#line 926
c_rt_lib0clear(&___nl__im__7);
#line 926
c_rt_lib0clear(&___nl__im__8);
#line 926
c_rt_lib0clear(&___nl__im__9);
#line 926
c_rt_lib0clear(&___nl__im__15);
#line 926
c_rt_lib0clear(&___nl__im__16);
#line 926
//clear ___nl__bool__18;
#line 926
c_rt_lib0clear(&___nl__im__27);
#line 926
c_rt_lib0clear(&___nl__im__28);
#line 926
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
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
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
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
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
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT * ___nl__im_ptr__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
INT  ___nl__int__80 = 0;
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
#line 930
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 931
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 931
c_rt_lib0move(&___nl__im__3, translator_priv0calc_val(___nl__im__4, ___ref___rec__1));
#line 931
c_rt_lib0clear(&___nl__im__4);
#line 932
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 932
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__1, ___nl__im__6));
#line 932
c_rt_lib0clear(&___nl__im__6);
#line 933
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 933
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 933
c_rt_lib0clear(&___nl__im__8);
#line 934
___nl__int__9 = translator_priv0get_sim_label(___ref___rec__1);
#line 935
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1097)));
#line 935
___nl__int__12 = 0;
#line 935
___nl__int__13 = 1;
#line 935
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 935
label_15:
;
#line 935
___nl__bool__15 = ___nl__int__12 >= ___nl__int__14;
#line 935
if(___nl__bool__15){ goto label_51;}
#line 935
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 935
c_rt_lib0copy(&___nl__im__11, ___nl__im__16);
#line 936
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(216)));
#line 936
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__17, ___ref___rec__1));
#line 936
c_rt_lib0clear(&___nl__im__17);
#line 937
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 937
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(110)));
#line 937
c_rt_lib0clear(&___nl__im__20);
#line 937
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(572)));
#line 937
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(185)));
#line 937
c_rt_lib0clear(&___nl__im__22);
#line 937
___nl__int__18 = translator_priv0get_label_number(___ref___rec__1, ___nl__im__19, ___nl__im__21);
#line 937
c_rt_lib0clear(&___nl__im__19);
#line 937
c_rt_lib0clear(&___nl__im__21);
#line 938
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(572)));
#line 938
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(185)));
#line 938
c_rt_lib0clear(&___nl__im__26);
#line 938
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__18));
#line 938
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__5, ___get_global_string_const(78), ___nl__im__3, ___get_global_string_const(571), ___nl__im__25, ___get_global_string_const(576), ___nl__im__27));
#line 938
c_rt_lib0clear(&___nl__im__25);
#line 938
c_rt_lib0clear(&___nl__im__27);
#line 938
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__24));
#line 938
c_rt_lib0clear(&___nl__im__24);
#line 938
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__23));
#line 938
c_rt_lib0clear(&___nl__im__23);
#line 939
___nl__int__28 = translator_priv0get_sim_label(___ref___rec__1);
#line 940
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__28, ___nl__im__5, ___ref___rec__1));
#line 941
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__28));
#line 941
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__29));
#line 941
c_rt_lib0clear(&___nl__im__29);
#line 941
c_rt_lib0clear(&___nl__im__11);
#line 942
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 942
goto label_15;
#line 942
label_51:
;
#line 943
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 943
c_rt_lib0delete(translator_priv0load_const(___nl__im__30, ___nl__im__7, ___ref___rec__1));
#line 943
c_rt_lib0clear(&___nl__im__30);
#line 944
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__3));
#line 944
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__7, ___get_global_string_const(78), ___nl__im__33));
#line 944
c_rt_lib0clear(&___nl__im__33);
#line 944
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__32));
#line 944
c_rt_lib0clear(&___nl__im__32);
#line 944
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__31));
#line 944
c_rt_lib0clear(&___nl__im__31);
#line 945
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(267), ___nl__im__7));
#line 945
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 945
c_rt_lib0clear(&___nl__im__34);
#line 946
___nl__int__35 = 0;
#line 948
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1097)));
#line 948
___nl__int__39 = 0;
#line 948
___nl__int__40 = 1;
#line 948
___nl__int__41 = c_rt_lib0array_len(___nl__im__37);
#line 948
label_70:
;
#line 948
___nl__bool__42 = ___nl__int__39 >= ___nl__int__41;
#line 948
if(___nl__bool__42){ goto label_239;}
#line 948
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__37, ___nl__int__39));
#line 948
c_rt_lib0copy(&___nl__im__38, ___nl__im__43);
#line 949
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(224)));
#line 949
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(216)));
#line 949
c_rt_lib0clear(&___nl__im__45);
#line 949
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__44, ___ref___rec__1));
#line 949
c_rt_lib0clear(&___nl__im__44);
#line 950
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__2, ___nl__int__35));
#line 950
___nl__int__46 = getIntFromImm(___nl__im__47);
#line 950
c_rt_lib0clear(&___nl__im__47);
#line 950
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__46, ___ref___rec__1));
#line 950
//clear ___nl__int__46;
#line 951
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(572)));
#line 951
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(241)));
#line 951
c_rt_lib0clear(&___nl__im__49);
#line 951
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(241));
#line 951
if(___nl__bool__50){ goto label_95;}
#line 963
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(76));
#line 963
if(___nl__bool__50){ goto label_170;}
#line 963
c_rt_lib0move(&___nl__im__51,___get_global_string_const(15));
#line 963
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(2, ___nl__im__51, ___nl__im__48));
#line 963
nl_die_arg(___nl__im__51);
#line 951
label_95:
;
#line 951
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__48, ___get_global_string_const(241)));
#line 951
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 952
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(111)));
#line 952
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__54, ___get_global_string_const(76));
#line 952
if(___nl__bool__55){ goto label_106;}
#line 959
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__54, ___get_global_string_const(39));
#line 959
if(___nl__bool__55){ goto label_156;}
#line 959
c_rt_lib0move(&___nl__im__56,___get_global_string_const(15));
#line 959
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(2, ___nl__im__56, ___nl__im__54));
#line 959
nl_die_arg(___nl__im__56);
#line 952
label_106:
;
#line 953
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(503)));
#line 953
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 953
c_rt_lib0move(&___nl__im__36, translator_priv0print_var_decl(___nl__im__57, ___ref___rec__1, ___nl__im__58));
#line 953
c_rt_lib0clear(&___nl__im__57);
#line 953
c_rt_lib0clear(&___nl__im__58);
#line 954
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(245)));
#line 954
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(110)));
#line 954
c_rt_lib0clear(&___nl__im__61);
#line 954
___nl__im_ptr__64 = &((*___ref___rec__1).logic0field);
#line 954
c_rt_lib0copy(&___nl__im__63, (*___nl__im_ptr__64));
#line 954
___nl__im_ptr__64 = NULL;
#line 954
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(429)));
#line 954
c_rt_lib0clear(&___nl__im__63);
#line 954
___nl__bool__59 = tct0is_own_type(___nl__im__60, ___nl__im__62);
#line 954
c_rt_lib0clear(&___nl__im__60);
#line 954
c_rt_lib0clear(&___nl__im__62);
#line 954
___nl__bool__59 = !___nl__bool__59;
#line 955
c_rt_lib0copy(&___nl__im__65, ___nl__im__36);
#line 956
___nl__bool__66 = ___nl__bool__59;
#line 956
___nl__bool__66 = !___nl__bool__66;
#line 956
if(___nl__bool__66){ goto label_132;}
#line 956
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 956
c_rt_lib0move(&___nl__im__65, translator_priv0new_register(___ref___rec__1, ___nl__im__67));
#line 956
c_rt_lib0clear(&___nl__im__67);
#line 956
goto label_132;
#line 956
label_132:
;
#line 956
//clear ___nl__bool__66;
#line 957
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(572)));
#line 957
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_string_const(185)));
#line 957
c_rt_lib0clear(&___nl__im__71);
#line 957
___nl__int__72 = 1;
#line 957
___nl__int__72 = -___nl__int__72;
#line 957
c_rt_lib0move(&___nl__im__73, c_rt_lib0int_new(___nl__int__72));
#line 957
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__65, ___get_global_string_const(78), ___nl__im__3, ___get_global_string_const(571), ___nl__im__70, ___get_global_string_const(576), ___nl__im__73));
#line 957
c_rt_lib0clear(&___nl__im__70);
#line 957
//clear ___nl__int__72;
#line 957
c_rt_lib0clear(&___nl__im__73);
#line 957
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(256), ___nl__im__69));
#line 957
c_rt_lib0clear(&___nl__im__69);
#line 957
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__68));
#line 957
c_rt_lib0clear(&___nl__im__68);
#line 958
___nl__bool__74 = ___nl__bool__59;
#line 958
___nl__bool__74 = !___nl__bool__74;
#line 958
if(___nl__bool__74){ goto label_153;}
#line 958
c_rt_lib0delete(translator_priv0move(___nl__im__36, ___nl__im__65, ___ref___rec__1));
#line 958
goto label_153;
#line 958
label_153:
;
#line 958
//clear ___nl__bool__74;
#line 959
goto label_168;
#line 959
label_156:
;
#line 960
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(503)));
#line 960
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_string_const(433)));
#line 960
c_rt_lib0move(&___nl__im__36, translator_priv0print_var_decl(___nl__im__75, ___ref___rec__1, ___nl__im__76));
#line 960
c_rt_lib0clear(&___nl__im__75);
#line 960
c_rt_lib0clear(&___nl__im__76);
#line 961
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(572)));
#line 961
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(185)));
#line 961
c_rt_lib0clear(&___nl__im__78);
#line 961
c_rt_lib0delete(translator_priv0use_variant(___nl__im__36, ___nl__im__3, ___nl__im__77, ___ref___rec__1));
#line 961
c_rt_lib0clear(&___nl__im__77);
#line 962
goto label_168;
#line 962
label_168:
;
#line 963
goto label_182;
#line 963
label_170:
;
#line 964
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 964
___nl__int__80 = 1;
#line 964
___nl__int__80 = -___nl__int__80;
#line 964
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__80));
#line 964
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 964
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__79, ___get_global_string_const(240), ___nl__im__81, ___get_global_string_const(366), ___nl__im__82));
#line 964
c_rt_lib0clear(&___nl__im__79);
#line 964
//clear ___nl__int__80;
#line 964
c_rt_lib0clear(&___nl__im__81);
#line 964
c_rt_lib0clear(&___nl__im__82);
#line 965
goto label_182;
#line 965
label_182:
;
#line 966
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(224)));
#line 966
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__83, ___ref___rec__1));
#line 966
c_rt_lib0clear(&___nl__im__83);
#line 967
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(572)));
#line 967
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(241)));
#line 967
c_rt_lib0clear(&___nl__im__85);
#line 967
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_string_const(241));
#line 967
if(___nl__bool__86){ goto label_196;}
#line 972
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_string_const(76));
#line 972
if(___nl__bool__86){ goto label_218;}
#line 972
c_rt_lib0move(&___nl__im__87,___get_global_string_const(15));
#line 972
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_mk(2, ___nl__im__87, ___nl__im__84));
#line 972
nl_die_arg(___nl__im__87);
#line 967
label_196:
;
#line 967
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__84, ___get_global_string_const(241)));
#line 967
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 968
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(111)));
#line 968
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__90, ___get_global_string_const(76));
#line 968
if(___nl__bool__91){ goto label_207;}
#line 969
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__90, ___get_global_string_const(39));
#line 969
if(___nl__bool__91){ goto label_209;}
#line 969
c_rt_lib0move(&___nl__im__92,___get_global_string_const(15));
#line 969
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(2, ___nl__im__92, ___nl__im__90));
#line 969
nl_die_arg(___nl__im__92);
#line 968
label_207:
;
#line 969
goto label_216;
#line 969
label_209:
;
#line 970
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(572)));
#line 970
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(185)));
#line 970
c_rt_lib0clear(&___nl__im__94);
#line 970
c_rt_lib0delete(translator_priv0release_variant(___nl__im__36, ___nl__im__3, ___nl__im__93, ___ref___rec__1));
#line 970
c_rt_lib0clear(&___nl__im__93);
#line 971
goto label_216;
#line 971
label_216:
;
#line 972
goto label_220;
#line 972
label_218:
;
#line 973
goto label_220;
#line 973
label_220:
;
#line 974
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(224)));
#line 974
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__97, ___get_global_string_const(216)));
#line 974
c_rt_lib0clear(&___nl__im__97);
#line 974
c_rt_lib0move(&___nl__im__95, translator0last_debug_char(___nl__im__96));
#line 974
c_rt_lib0clear(&___nl__im__96);
#line 974
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__95, ___ref___rec__1));
#line 974
c_rt_lib0clear(&___nl__im__95);
#line 975
c_rt_lib0move(&___nl__im__99, c_rt_lib0int_new(___nl__int__9));
#line 975
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__99));
#line 975
c_rt_lib0clear(&___nl__im__99);
#line 975
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__98));
#line 975
c_rt_lib0clear(&___nl__im__98);
#line 976
___nl__int__100 = 1;
#line 976
___nl__int__35 = ___nl__int__35 + ___nl__int__100;
#line 976
//clear ___nl__int__100;
#line 976
c_rt_lib0clear(&___nl__im__38);
#line 977
___nl__int__39 = ___nl__int__39 + ___nl__int__40;
#line 977
goto label_70;
#line 977
label_239:
;
#line 978
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__9, ___ref___rec__1));
#line 978
c_rt_lib0clear(&___nl__im__0);
#line 978
c_rt_lib0clear(&___nl__im__2);
#line 978
c_rt_lib0clear(&___nl__im__3);
#line 978
c_rt_lib0clear(&___nl__im__5);
#line 978
c_rt_lib0clear(&___nl__im__7);
#line 978
//clear ___nl__int__9;
#line 978
c_rt_lib0clear(&___nl__im__10);
#line 978
c_rt_lib0clear(&___nl__im__11);
#line 978
//clear ___nl__int__12;
#line 978
//clear ___nl__int__13;
#line 978
//clear ___nl__int__14;
#line 978
//clear ___nl__bool__15;
#line 978
c_rt_lib0clear(&___nl__im__16);
#line 978
//clear ___nl__int__18;
#line 978
//clear ___nl__int__28;
#line 978
//clear ___nl__int__35;
#line 978
c_rt_lib0clear(&___nl__im__36);
#line 978
c_rt_lib0clear(&___nl__im__37);
#line 978
c_rt_lib0clear(&___nl__im__38);
#line 978
//clear ___nl__int__39;
#line 978
//clear ___nl__int__40;
#line 978
//clear ___nl__int__41;
#line 978
//clear ___nl__bool__42;
#line 978
c_rt_lib0clear(&___nl__im__43);
#line 978
c_rt_lib0clear(&___nl__im__48);
#line 978
//clear ___nl__bool__50;
#line 978
c_rt_lib0clear(&___nl__im__51);
#line 978
c_rt_lib0clear(&___nl__im__52);
#line 978
c_rt_lib0clear(&___nl__im__53);
#line 978
c_rt_lib0clear(&___nl__im__54);
#line 978
//clear ___nl__bool__55;
#line 978
c_rt_lib0clear(&___nl__im__56);
#line 978
//clear ___nl__bool__59;
#line 978
c_rt_lib0clear(&___nl__im__65);
#line 978
c_rt_lib0clear(&___nl__im__84);
#line 978
//clear ___nl__bool__86;
#line 978
c_rt_lib0clear(&___nl__im__87);
#line 978
c_rt_lib0clear(&___nl__im__88);
#line 978
c_rt_lib0clear(&___nl__im__89);
#line 978
c_rt_lib0clear(&___nl__im__90);
#line 978
//clear ___nl__bool__91;
#line 978
c_rt_lib0clear(&___nl__im__92);
#line 978
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
#line 982
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 982
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 982
c_rt_lib0clear(&___nl__im__4);
#line 982
___nl__bool__3 = !___nl__bool__3;
#line 982
if(___nl__bool__3){ goto label_10;}
#line 982
c_rt_lib0clear(&___nl__im__0);
#line 982
c_rt_lib0clear(&___nl__im__1);
#line 982
//clear ___nl__bool__3;
#line 982
return NULL;
#line 982
goto label_10;
#line 982
label_10:
;
#line 982
//clear ___nl__bool__3;
#line 983
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__0, ___get_global_string_const(78), ___nl__im__1));
#line 983
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(258), ___nl__im__6));
#line 983
c_rt_lib0clear(&___nl__im__6);
#line 983
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__5));
#line 983
c_rt_lib0clear(&___nl__im__5);
#line 983
c_rt_lib0clear(&___nl__im__0);
#line 983
c_rt_lib0clear(&___nl__im__1);
#line 983
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
#line 987
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(374), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(615), ___nl__im__2));
#line 987
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(273), ___nl__im__5));
#line 987
c_rt_lib0clear(&___nl__im__5);
#line 987
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 987
c_rt_lib0clear(&___nl__im__4);
#line 987
c_rt_lib0clear(&___nl__im__0);
#line 987
c_rt_lib0clear(&___nl__im__1);
#line 987
c_rt_lib0clear(&___nl__im__2);
#line 987
return NULL;

}

ImmT  translator_priv0release_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 991
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(375), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(615), ___nl__im__2));
#line 991
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(274), ___nl__im__5));
#line 991
c_rt_lib0clear(&___nl__im__5);
#line 991
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 991
c_rt_lib0clear(&___nl__im__4);
#line 991
c_rt_lib0clear(&___nl__im__0);
#line 991
c_rt_lib0clear(&___nl__im__1);
#line 991
c_rt_lib0clear(&___nl__im__2);
#line 991
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
#line 995
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 995
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 995
c_rt_lib0clear(&___nl__im__5);
#line 996
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(374), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(376), ___nl__im__4));
#line 996
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(275), ___nl__im__7));
#line 996
c_rt_lib0clear(&___nl__im__7);
#line 996
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 996
c_rt_lib0clear(&___nl__im__6);
#line 996
c_rt_lib0clear(&___nl__im__0);
#line 996
c_rt_lib0clear(&___nl__im__1);
#line 996
c_rt_lib0clear(&___nl__im__2);
#line 996
c_rt_lib0clear(&___nl__im__4);
#line 996
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
#line 1000
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1000
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1000
c_rt_lib0clear(&___nl__im__5);
#line 1001
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(375), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(376), ___nl__im__4));
#line 1001
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(276), ___nl__im__7));
#line 1001
c_rt_lib0clear(&___nl__im__7);
#line 1001
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1001
c_rt_lib0clear(&___nl__im__6);
#line 1001
c_rt_lib0clear(&___nl__im__0);
#line 1001
c_rt_lib0clear(&___nl__im__1);
#line 1001
c_rt_lib0clear(&___nl__im__2);
#line 1001
c_rt_lib0clear(&___nl__im__4);
#line 1001
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
#line 1006
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 1006
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_string_const(374), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(376), ___nl__im__2, ___get_global_string_const(616), ___nl__im__7));
#line 1006
c_rt_lib0clear(&___nl__im__7);
#line 1006
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__6));
#line 1006
c_rt_lib0clear(&___nl__im__6);
#line 1006
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__5));
#line 1006
c_rt_lib0clear(&___nl__im__5);
#line 1006
c_rt_lib0clear(&___nl__im__0);
#line 1006
c_rt_lib0clear(&___nl__im__1);
#line 1006
c_rt_lib0clear(&___nl__im__2);
#line 1006
//clear ___nl__bool__3;
#line 1006
return NULL;

}

ImmT  translator_priv0release_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1010
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(375), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(376), ___nl__im__2));
#line 1010
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(278), ___nl__im__5));
#line 1010
c_rt_lib0clear(&___nl__im__5);
#line 1010
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1010
c_rt_lib0clear(&___nl__im__4);
#line 1010
c_rt_lib0clear(&___nl__im__0);
#line 1010
c_rt_lib0clear(&___nl__im__1);
#line 1010
c_rt_lib0clear(&___nl__im__2);
#line 1010
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
#line 1013
___nl__int__4 = 1;
#line 1013
___nl__int__4 = -___nl__int__4;
#line 1014
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1014
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(572));
#line 1014
c_rt_lib0clear(&___nl__im__6);
#line 1014
___nl__bool__5 = !___nl__bool__5;
#line 1014
if(___nl__bool__5){ goto label_15;}
#line 1014
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1014
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1014
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(572)));
#line 1014
c_rt_lib0clear(&___nl__im__8);
#line 1014
c_rt_lib0clear(&___nl__im__9);
#line 1014
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1014
c_rt_lib0clear(&___nl__im__7);
#line 1014
goto label_15;
#line 1014
label_15:
;
#line 1014
//clear ___nl__bool__5;
#line 1015
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1015
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_string_const(374), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(571), ___nl__im__2, ___get_global_string_const(576), ___nl__im__12));
#line 1015
c_rt_lib0clear(&___nl__im__12);
#line 1015
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__11));
#line 1015
c_rt_lib0clear(&___nl__im__11);
#line 1015
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1015
c_rt_lib0clear(&___nl__im__10);
#line 1015
c_rt_lib0clear(&___nl__im__0);
#line 1015
c_rt_lib0clear(&___nl__im__1);
#line 1015
c_rt_lib0clear(&___nl__im__2);
#line 1015
//clear ___nl__int__4;
#line 1015
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
#line 1019
___nl__int__4 = 1;
#line 1019
___nl__int__4 = -___nl__int__4;
#line 1020
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1020
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(572));
#line 1020
c_rt_lib0clear(&___nl__im__6);
#line 1020
___nl__bool__5 = !___nl__bool__5;
#line 1020
if(___nl__bool__5){ goto label_15;}
#line 1020
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1020
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1020
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(572)));
#line 1020
c_rt_lib0clear(&___nl__im__8);
#line 1020
c_rt_lib0clear(&___nl__im__9);
#line 1020
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1020
c_rt_lib0clear(&___nl__im__7);
#line 1020
goto label_15;
#line 1020
label_15:
;
#line 1020
//clear ___nl__bool__5;
#line 1021
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1021
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_string_const(375), ___nl__im__0, ___get_global_string_const(373), ___nl__im__1, ___get_global_string_const(571), ___nl__im__2, ___get_global_string_const(576), ___nl__im__12));
#line 1021
c_rt_lib0clear(&___nl__im__12);
#line 1021
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(280), ___nl__im__11));
#line 1021
c_rt_lib0clear(&___nl__im__11);
#line 1021
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1021
c_rt_lib0clear(&___nl__im__10);
#line 1021
c_rt_lib0clear(&___nl__im__0);
#line 1021
c_rt_lib0clear(&___nl__im__1);
#line 1021
c_rt_lib0clear(&___nl__im__2);
#line 1021
//clear ___nl__int__4;
#line 1021
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
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
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
#line 1026
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 1027
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 1028
c_rt_lib0copy(&___nl__im__7, ___nl__im__0);
#line 1029
___nl__bool__8 = false;
#line 1030
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1031
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1032
c_rt_lib0move(&___nl__im__12,___get_global_string_const(123));
#line 1032
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__12);
#line 1032
c_rt_lib0clear(&___nl__im__12);
#line 1032
if(___nl__bool__11){ goto label_13;}
#line 1032
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1122));
#line 1032
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__13);
#line 1032
c_rt_lib0clear(&___nl__im__13);
#line 1032
label_13:
;
#line 1032
if(___nl__bool__11){ goto label_18;}
#line 1032
c_rt_lib0move(&___nl__im__14,___get_global_string_const(384));
#line 1032
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__14);
#line 1032
c_rt_lib0clear(&___nl__im__14);
#line 1032
label_18:
;
#line 1032
if(___nl__bool__11){ goto label_23;}
#line 1032
c_rt_lib0move(&___nl__im__15,___get_global_string_const(385));
#line 1032
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__15);
#line 1032
c_rt_lib0clear(&___nl__im__15);
#line 1032
label_23:
;
#line 1032
___nl__bool__11 = !___nl__bool__11;
#line 1032
if(___nl__bool__11){ goto label_45;}
#line 1033
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(419)));
#line 1034
c_rt_lib0move(&___nl__im__17,___get_global_string_const(123));
#line 1034
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__17);
#line 1034
c_rt_lib0clear(&___nl__im__17);
#line 1034
if(___nl__bool__16){ goto label_34;}
#line 1034
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1122));
#line 1034
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__18);
#line 1034
c_rt_lib0clear(&___nl__im__18);
#line 1034
label_34:
;
#line 1034
___nl__bool__16 = !___nl__bool__16;
#line 1034
if(___nl__bool__16){ goto label_39;}
#line 1035
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(419)));
#line 1036
goto label_42;
#line 1036
label_39:
;
#line 1037
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1038
goto label_42;
#line 1038
label_42:
;
#line 1038
//clear ___nl__bool__16;
#line 1039
goto label_45;
#line 1039
label_45:
;
#line 1039
//clear ___nl__bool__11;
#line 1040
c_rt_lib0move(&___nl__im__20,___get_global_string_const(394));
#line 1040
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__20);
#line 1040
c_rt_lib0clear(&___nl__im__20);
#line 1040
if(___nl__bool__19){ goto label_54;}
#line 1040
c_rt_lib0move(&___nl__im__21,___get_global_string_const(392));
#line 1040
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__21);
#line 1040
c_rt_lib0clear(&___nl__im__21);
#line 1040
label_54:
;
#line 1040
if(___nl__bool__19){ goto label_59;}
#line 1040
c_rt_lib0move(&___nl__im__22,___get_global_string_const(400));
#line 1040
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__22);
#line 1040
c_rt_lib0clear(&___nl__im__22);
#line 1040
label_59:
;
#line 1040
if(___nl__bool__19){ goto label_64;}
#line 1040
c_rt_lib0move(&___nl__im__23,___get_global_string_const(402));
#line 1040
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__23);
#line 1040
c_rt_lib0clear(&___nl__im__23);
#line 1040
label_64:
;
#line 1040
if(___nl__bool__19){ goto label_69;}
#line 1041
c_rt_lib0move(&___nl__im__24,___get_global_string_const(396));
#line 1041
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__24);
#line 1041
c_rt_lib0clear(&___nl__im__24);
#line 1041
label_69:
;
#line 1041
if(___nl__bool__19){ goto label_74;}
#line 1041
c_rt_lib0move(&___nl__im__25,___get_global_string_const(398));
#line 1041
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__25);
#line 1041
c_rt_lib0clear(&___nl__im__25);
#line 1041
label_74:
;
#line 1041
___nl__bool__19 = !___nl__bool__19;
#line 1041
if(___nl__bool__19){ goto label_79;}
#line 1042
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1043
goto label_79;
#line 1043
label_79:
;
#line 1043
//clear ___nl__bool__19;
#line 1044
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1044
___nl__bool__26 = nlasm0eq_reg_type(___nl__im__27, ___nl__im__9);
#line 1044
c_rt_lib0clear(&___nl__im__27);
#line 1044
___nl__bool__26 = !___nl__bool__26;
#line 1044
___nl__bool__26 = !___nl__bool__26;
#line 1044
if(___nl__bool__26){ goto label_90;}
#line 1045
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1046
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__1, ___ref___rec__4));
#line 1047
goto label_90;
#line 1047
label_90:
;
#line 1047
//clear ___nl__bool__26;
#line 1048
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(110)));
#line 1048
___nl__bool__28 = nlasm0eq_reg_type(___nl__im__29, ___nl__im__9);
#line 1048
c_rt_lib0clear(&___nl__im__29);
#line 1048
___nl__bool__28 = !___nl__bool__28;
#line 1048
___nl__bool__28 = !___nl__bool__28;
#line 1048
if(___nl__bool__28){ goto label_101;}
#line 1049
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1050
c_rt_lib0delete(translator_priv0move(___nl__im__6, ___nl__im__2, ___ref___rec__4));
#line 1051
goto label_101;
#line 1051
label_101:
;
#line 1051
//clear ___nl__bool__28;
#line 1052
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1052
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__31, ___nl__im__10);
#line 1052
c_rt_lib0clear(&___nl__im__31);
#line 1052
___nl__bool__30 = !___nl__bool__30;
#line 1052
___nl__bool__30 = !___nl__bool__30;
#line 1052
if(___nl__bool__30){ goto label_112;}
#line 1053
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__4, ___nl__im__10));
#line 1054
___nl__bool__8 = true;
#line 1055
goto label_112;
#line 1055
label_112:
;
#line 1055
//clear ___nl__bool__30;
#line 1056
c_rt_lib0move(&___nl__im__33,___get_global_string_const(382));
#line 1056
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__33);
#line 1056
c_rt_lib0clear(&___nl__im__33);
#line 1056
if(___nl__bool__32){ goto label_121;}
#line 1056
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1118));
#line 1056
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__34);
#line 1056
c_rt_lib0clear(&___nl__im__34);
#line 1056
label_121:
;
#line 1056
___nl__bool__32 = !___nl__bool__32;
#line 1056
if(___nl__bool__32){ goto label_126;}
#line 1057
c_rt_lib0move(&___nl__im__3,___get_global_string_const(382));
#line 1058
goto label_178;
#line 1058
label_126:
;
#line 1058
c_rt_lib0move(&___nl__im__35,___get_global_string_const(380));
#line 1058
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__35);
#line 1058
c_rt_lib0clear(&___nl__im__35);
#line 1058
if(___nl__bool__32){ goto label_134;}
#line 1058
c_rt_lib0move(&___nl__im__36,___get_global_string_const(1119));
#line 1058
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__36);
#line 1058
c_rt_lib0clear(&___nl__im__36);
#line 1058
label_134:
;
#line 1058
___nl__bool__32 = !___nl__bool__32;
#line 1058
if(___nl__bool__32){ goto label_139;}
#line 1059
c_rt_lib0move(&___nl__im__3,___get_global_string_const(380));
#line 1060
goto label_178;
#line 1060
label_139:
;
#line 1060
c_rt_lib0move(&___nl__im__37,___get_global_string_const(388));
#line 1060
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__37);
#line 1060
c_rt_lib0clear(&___nl__im__37);
#line 1060
if(___nl__bool__32){ goto label_147;}
#line 1060
c_rt_lib0move(&___nl__im__38,___get_global_string_const(1120));
#line 1060
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__38);
#line 1060
c_rt_lib0clear(&___nl__im__38);
#line 1060
label_147:
;
#line 1060
___nl__bool__32 = !___nl__bool__32;
#line 1060
if(___nl__bool__32){ goto label_152;}
#line 1061
c_rt_lib0move(&___nl__im__3,___get_global_string_const(388));
#line 1062
goto label_178;
#line 1062
label_152:
;
#line 1062
c_rt_lib0move(&___nl__im__39,___get_global_string_const(118));
#line 1062
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__39);
#line 1062
c_rt_lib0clear(&___nl__im__39);
#line 1062
if(___nl__bool__32){ goto label_160;}
#line 1062
c_rt_lib0move(&___nl__im__40,___get_global_string_const(1121));
#line 1062
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__40);
#line 1062
c_rt_lib0clear(&___nl__im__40);
#line 1062
label_160:
;
#line 1062
___nl__bool__32 = !___nl__bool__32;
#line 1062
if(___nl__bool__32){ goto label_165;}
#line 1063
c_rt_lib0move(&___nl__im__3,___get_global_string_const(118));
#line 1064
goto label_178;
#line 1064
label_165:
;
#line 1064
c_rt_lib0move(&___nl__im__41,___get_global_string_const(123));
#line 1064
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__41);
#line 1064
c_rt_lib0clear(&___nl__im__41);
#line 1064
if(___nl__bool__32){ goto label_173;}
#line 1064
c_rt_lib0move(&___nl__im__42,___get_global_string_const(1122));
#line 1064
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__42);
#line 1064
c_rt_lib0clear(&___nl__im__42);
#line 1064
label_173:
;
#line 1064
___nl__bool__32 = !___nl__bool__32;
#line 1064
if(___nl__bool__32){ goto label_178;}
#line 1065
c_rt_lib0move(&___nl__im__3,___get_global_string_const(123));
#line 1066
goto label_178;
#line 1066
label_178:
;
#line 1066
//clear ___nl__bool__32;
#line 1067
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__7, ___get_global_string_const(291), ___nl__im__5, ___get_global_string_const(292), ___nl__im__6, ___get_global_string_const(569), ___nl__im__3));
#line 1067
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(254), ___nl__im__44));
#line 1067
c_rt_lib0clear(&___nl__im__44);
#line 1067
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__43));
#line 1067
c_rt_lib0clear(&___nl__im__43);
#line 1068
___nl__bool__45 = ___nl__bool__8;
#line 1068
___nl__bool__45 = !___nl__bool__45;
#line 1068
if(___nl__bool__45){ goto label_190;}
#line 1069
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__7, ___ref___rec__4));
#line 1070
goto label_190;
#line 1070
label_190:
;
#line 1070
//clear ___nl__bool__45;
#line 1070
c_rt_lib0clear(&___nl__im__0);
#line 1070
c_rt_lib0clear(&___nl__im__1);
#line 1070
c_rt_lib0clear(&___nl__im__2);
#line 1070
c_rt_lib0clear(&___nl__im__3);
#line 1070
c_rt_lib0clear(&___nl__im__5);
#line 1070
c_rt_lib0clear(&___nl__im__6);
#line 1070
c_rt_lib0clear(&___nl__im__7);
#line 1070
//clear ___nl__bool__8;
#line 1070
c_rt_lib0clear(&___nl__im__9);
#line 1070
c_rt_lib0clear(&___nl__im__10);
#line 1070
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
ImmT  ___nl__im__9 = NULL;
ImmT * ___nl__im_ptr__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 1074
___nl__im_ptr__4 = &((*___ref___rec__0).debug0field);
#line 1074
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 1074
___nl__im_ptr__4 = NULL;
#line 1074
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(76)));
#line 1074
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(216), ___nl__im__3, ___get_global_string_const(247), ___nl__im__5));
#line 1074
c_rt_lib0clear(&___nl__im__3);
#line 1074
c_rt_lib0clear(&___nl__im__5);
#line 1075
___nl__im_ptr__6 = &((*___ref___rec__0).result0field);
#line 1075
c_rt_lib0move(&___nl__im__7,___get_global_string_const(223));
#line 1075
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___nl__im_ptr__6), ___nl__im__7));
#line 1075
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__2));
#line 1075
c_rt_lib0move(&___nl__string__8,___get_global_string_const(223));
#line 1075
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__6, ___nl__string__8, ___nl__im__7));
#line 1075
___nl__im_ptr__6 = NULL;
#line 1075
c_rt_lib0clear(&___nl__im__7);
#line 1075
c_rt_lib0clear(&___nl__string__8);
#line 1076
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 1076
___nl__im_ptr__10 = &((*___ref___rec__0).debug0field);
#line 1076
c_rt_lib0copy(&___nl__im__11, ___nl__im__9);
#line 1076
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_string_const(936), ___nl__im__11);
#line 1076
___nl__im_ptr__10 = NULL;
#line 1076
c_rt_lib0clear(&___nl__im__9);
#line 1076
c_rt_lib0clear(&___nl__im__11);
#line 1076
c_rt_lib0clear(&___nl__im__1);
#line 1076
c_rt_lib0clear(&___nl__im__2);
#line 1076
return NULL;
return NULL;

}

ImmT  translator_priv0print_if_goto(nlasm0label_t0type ___nl__int__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1080
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 1080
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__5, ___get_global_string_const(78), ___nl__im__1));
#line 1080
c_rt_lib0clear(&___nl__im__5);
#line 1080
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(269), ___nl__im__4));
#line 1080
c_rt_lib0clear(&___nl__im__4);
#line 1080
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 1080
c_rt_lib0clear(&___nl__im__3);
#line 1080
//clear ___nl__int__0;
#line 1080
c_rt_lib0clear(&___nl__im__1);
#line 1080
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
#line 1085
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1085
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1085
c_rt_lib0clear(&___nl__im__5);
#line 1087
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1087
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(146));
#line 1087
c_rt_lib0clear(&___nl__im__8);
#line 1087
___nl__bool__7 = !___nl__bool__7;
#line 1087
if(___nl__bool__7){ goto label_10;}
#line 1088
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1089
goto label_42;
#line 1089
label_10:
;
#line 1089
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1089
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(142));
#line 1089
c_rt_lib0clear(&___nl__im__9);
#line 1089
___nl__bool__7 = !___nl__bool__7;
#line 1089
if(___nl__bool__7){ goto label_38;}
#line 1090
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1090
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1090
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(142)));
#line 1090
c_rt_lib0clear(&___nl__im__12);
#line 1090
c_rt_lib0clear(&___nl__im__13);
#line 1090
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1090
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1090
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(142)));
#line 1090
c_rt_lib0clear(&___nl__im__15);
#line 1090
c_rt_lib0clear(&___nl__im__16);
#line 1090
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(2)));
#line 1090
c_rt_lib0clear(&___nl__im__11);
#line 1090
c_rt_lib0clear(&___nl__im__14);
#line 1090
___nl__im_ptr__19 = &((*___ref___rec__3).logic0field);
#line 1090
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 1090
___nl__im_ptr__19 = NULL;
#line 1090
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(429)));
#line 1090
c_rt_lib0clear(&___nl__im__18);
#line 1090
c_rt_lib0move(&___nl__im__6, translator_priv0var_type_to_reg_type(___nl__im__10, ___nl__im__17));
#line 1090
c_rt_lib0clear(&___nl__im__10);
#line 1090
c_rt_lib0clear(&___nl__im__17);
#line 1091
goto label_42;
#line 1091
label_38:
;
#line 1092
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1092
nl_die_arg(___nl__im__20);
#line 1093
goto label_42;
#line 1093
label_42:
;
#line 1093
//clear ___nl__bool__7;
#line 1093
c_rt_lib0clear(&___nl__im__20);
#line 1094
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1094
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__6, ___nl__im__22);
#line 1094
c_rt_lib0clear(&___nl__im__22);
#line 1094
___nl__bool__21 = !___nl__bool__21;
#line 1095
c_rt_lib0copy(&___nl__im__23, ___nl__im__0);
#line 1096
___nl__bool__24 = ___nl__bool__21;
#line 1096
___nl__bool__24 = !___nl__bool__24;
#line 1096
if(___nl__bool__24){ goto label_55;}
#line 1096
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__3, ___nl__im__6));
#line 1096
goto label_55;
#line 1096
label_55:
;
#line 1096
//clear ___nl__bool__24;
#line 1097
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__23, ___get_global_string_const(78), ___nl__im__1, ___get_global_string_const(293), ___nl__im__4));
#line 1097
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__26));
#line 1097
c_rt_lib0clear(&___nl__im__26);
#line 1097
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__25));
#line 1097
c_rt_lib0clear(&___nl__im__25);
#line 1098
___nl__bool__27 = ___nl__bool__21;
#line 1098
___nl__bool__27 = !___nl__bool__27;
#line 1098
if(___nl__bool__27){ goto label_67;}
#line 1098
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__23, ___ref___rec__3));
#line 1098
goto label_67;
#line 1098
label_67:
;
#line 1098
//clear ___nl__bool__27;
#line 1098
c_rt_lib0clear(&___nl__im__0);
#line 1098
c_rt_lib0clear(&___nl__im__1);
#line 1098
c_rt_lib0clear(&___nl__im__2);
#line 1098
c_rt_lib0clear(&___nl__im__4);
#line 1098
c_rt_lib0clear(&___nl__im__6);
#line 1098
//clear ___nl__bool__21;
#line 1098
c_rt_lib0clear(&___nl__im__23);
#line 1098
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
#line 1103
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1103
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__1, ___nl__im__5, ___ref___rec__3));
#line 1103
c_rt_lib0clear(&___nl__im__5);
#line 1104
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(78), ___nl__im__0, ___get_global_string_const(293), ___nl__im__4, ___get_global_string_const(245), ___nl__im__2));
#line 1104
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(260), ___nl__im__7));
#line 1104
c_rt_lib0clear(&___nl__im__7);
#line 1104
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1104
c_rt_lib0clear(&___nl__im__6);
#line 1104
c_rt_lib0clear(&___nl__im__0);
#line 1104
c_rt_lib0clear(&___nl__im__1);
#line 1104
c_rt_lib0clear(&___nl__im__2);
#line 1104
c_rt_lib0clear(&___nl__im__4);
#line 1104
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
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
bool  ___nl__bool__28 = false;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
ImmT * ___nl__im_ptr__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__string__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
#line 1108
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 1109
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1109
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(146));
#line 1109
c_rt_lib0clear(&___nl__im__5);
#line 1109
___nl__bool__4 = !___nl__bool__4;
#line 1109
if(___nl__bool__4){ goto label_10;}
#line 1110
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1110
c_rt_lib0move(&___nl__im__3, translator_priv0get_cast(___nl__im__1, ___nl__im__6, ___ref___rec__2));
#line 1110
c_rt_lib0clear(&___nl__im__6);
#line 1111
goto label_70;
#line 1111
label_10:
;
#line 1111
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1111
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(142));
#line 1111
c_rt_lib0clear(&___nl__im__7);
#line 1111
___nl__bool__4 = !___nl__bool__4;
#line 1111
if(___nl__bool__4){ goto label_70;}
#line 1112
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1112
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1112
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(142)));
#line 1112
c_rt_lib0clear(&___nl__im__11);
#line 1112
c_rt_lib0clear(&___nl__im__12);
#line 1112
___nl__im_ptr__15 = &((*___ref___rec__2).logic0field);
#line 1112
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1112
___nl__im_ptr__15 = NULL;
#line 1112
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(429)));
#line 1112
c_rt_lib0clear(&___nl__im__14);
#line 1112
c_rt_lib0move(&___nl__im__9, translator_priv0unwrap_ref(___nl__im__10, ___nl__im__13));
#line 1112
c_rt_lib0clear(&___nl__im__10);
#line 1112
c_rt_lib0clear(&___nl__im__13);
#line 1112
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1112
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1112
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(142)));
#line 1112
c_rt_lib0clear(&___nl__im__18);
#line 1112
c_rt_lib0clear(&___nl__im__19);
#line 1112
___nl__im_ptr__22 = &((*___ref___rec__2).logic0field);
#line 1112
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1112
___nl__im_ptr__22 = NULL;
#line 1112
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(429)));
#line 1112
c_rt_lib0clear(&___nl__im__21);
#line 1112
c_rt_lib0move(&___nl__im__16, translator_priv0unwrap_ref(___nl__im__17, ___nl__im__20));
#line 1112
c_rt_lib0clear(&___nl__im__17);
#line 1112
c_rt_lib0clear(&___nl__im__20);
#line 1112
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(2)));
#line 1112
c_rt_lib0clear(&___nl__im__9);
#line 1112
c_rt_lib0clear(&___nl__im__16);
#line 1113
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(9));
#line 1113
if(___nl__bool__23){ goto label_48;}
#line 1113
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(11));
#line 1113
label_48:
;
#line 1113
if(___nl__bool__23){ goto label_51;}
#line 1113
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(10));
#line 1113
label_51:
;
#line 1113
if(___nl__bool__23){ goto label_54;}
#line 1113
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(0));
#line 1113
label_54:
;
#line 1113
___nl__bool__23 = !___nl__bool__23;
#line 1113
if(___nl__bool__23){ goto label_67;}
#line 1114
___nl__im_ptr__27 = &((*___ref___rec__2).logic0field);
#line 1114
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 1114
___nl__im_ptr__27 = NULL;
#line 1114
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(429)));
#line 1114
c_rt_lib0clear(&___nl__im__26);
#line 1114
c_rt_lib0move(&___nl__im__24, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__25));
#line 1114
c_rt_lib0clear(&___nl__im__25);
#line 1114
c_rt_lib0move(&___nl__im__3, translator_priv0get_cast(___nl__im__1, ___nl__im__24, ___ref___rec__2));
#line 1114
c_rt_lib0clear(&___nl__im__24);
#line 1115
goto label_67;
#line 1115
label_67:
;
#line 1115
//clear ___nl__bool__23;
#line 1116
goto label_70;
#line 1116
label_70:
;
#line 1116
//clear ___nl__bool__4;
#line 1116
c_rt_lib0clear(&___nl__im__8);
#line 1117
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1117
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(146));
#line 1117
c_rt_lib0clear(&___nl__im__30);
#line 1117
___nl__bool__28 = !___nl__bool__28;
#line 1117
___nl__bool__29 = !___nl__bool__28;
#line 1117
if(___nl__bool__29){ goto label_83;}
#line 1117
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1117
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__31, ___get_global_string_const(419));
#line 1117
c_rt_lib0clear(&___nl__im__31);
#line 1117
___nl__bool__28 = !___nl__bool__28;
#line 1117
label_83:
;
#line 1117
//clear ___nl__bool__29;
#line 1117
___nl__bool__28 = !___nl__bool__28;
#line 1117
if(___nl__bool__28){ goto label_105;}
#line 1118
___nl__bool__32 = false;
#line 1118
___nl__im_ptr__33 = &((*___ref___rec__2).logic0field);
#line 1118
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1415));
#line 1118
c_rt_lib0move(&___nl__im__34, c_rt_lib0get_ref_hash((*___nl__im_ptr__33), ___nl__im__34));
#line 1118
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(240)));
#line 1118
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 1118
c_rt_lib0clear(&___nl__im__37);
#line 1118
c_rt_lib0move(&___nl__im__35, c_rt_lib0bool_to_nl_native(___nl__bool__32));
#line 1118
c_rt_lib0array_set(&___nl__im__34, ___nl__int__36, ___nl__im__35);
#line 1118
c_rt_lib0move(&___nl__string__38,___get_global_string_const(1415));
#line 1118
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__33, ___nl__string__38, ___nl__im__34));
#line 1118
___nl__im_ptr__33 = NULL;
#line 1118
//clear ___nl__bool__32;
#line 1118
c_rt_lib0clear(&___nl__im__34);
#line 1118
c_rt_lib0clear(&___nl__im__35);
#line 1118
//clear ___nl__int__36;
#line 1118
c_rt_lib0clear(&___nl__string__38);
#line 1119
goto label_105;
#line 1119
label_105:
;
#line 1119
//clear ___nl__bool__28;
#line 1120
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__0, ___get_global_string_const(245), ___nl__im__3));
#line 1120
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(261), ___nl__im__40));
#line 1120
c_rt_lib0clear(&___nl__im__40);
#line 1120
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__39));
#line 1120
c_rt_lib0clear(&___nl__im__39);
#line 1120
c_rt_lib0clear(&___nl__im__0);
#line 1120
c_rt_lib0clear(&___nl__im__1);
#line 1120
c_rt_lib0clear(&___nl__im__3);
#line 1120
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
#line 1126
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1126
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(146));
#line 1126
c_rt_lib0clear(&___nl__im__6);
#line 1126
___nl__bool__5 = !___nl__bool__5;
#line 1126
if(___nl__bool__5){ goto label_7;}
#line 1127
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1128
goto label_61;
#line 1128
label_7:
;
#line 1128
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1128
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(143));
#line 1128
c_rt_lib0clear(&___nl__im__7);
#line 1128
___nl__bool__5 = !___nl__bool__5;
#line 1128
if(___nl__bool__5){ goto label_57;}
#line 1129
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1129
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1129
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(143)));
#line 1129
c_rt_lib0clear(&___nl__im__11);
#line 1129
c_rt_lib0clear(&___nl__im__12);
#line 1129
___nl__im_ptr__15 = &((*___ref___rec__3).logic0field);
#line 1129
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1129
___nl__im_ptr__15 = NULL;
#line 1129
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(429)));
#line 1129
c_rt_lib0clear(&___nl__im__14);
#line 1129
c_rt_lib0move(&___nl__im__9, translator_priv0unwrap_ref(___nl__im__10, ___nl__im__13));
#line 1129
c_rt_lib0clear(&___nl__im__10);
#line 1129
c_rt_lib0clear(&___nl__im__13);
#line 1129
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1129
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 1129
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(143)));
#line 1129
c_rt_lib0clear(&___nl__im__18);
#line 1129
c_rt_lib0clear(&___nl__im__19);
#line 1129
___nl__im_ptr__22 = &((*___ref___rec__3).logic0field);
#line 1129
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1129
___nl__im_ptr__22 = NULL;
#line 1129
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(429)));
#line 1129
c_rt_lib0clear(&___nl__im__21);
#line 1129
c_rt_lib0move(&___nl__im__16, translator_priv0unwrap_ref(___nl__im__17, ___nl__im__20));
#line 1129
c_rt_lib0clear(&___nl__im__17);
#line 1129
c_rt_lib0clear(&___nl__im__20);
#line 1129
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(4)));
#line 1129
c_rt_lib0clear(&___nl__im__9);
#line 1129
c_rt_lib0clear(&___nl__im__16);
#line 1130
___nl__im_ptr__25 = &((*___ref___rec__3).logic0field);
#line 1130
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1130
___nl__im_ptr__25 = NULL;
#line 1130
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(429)));
#line 1130
c_rt_lib0clear(&___nl__im__24);
#line 1130
c_rt_lib0move(&___nl__im__8, translator_priv0unwrap_ref(___nl__im__8, ___nl__im__23));
#line 1130
c_rt_lib0clear(&___nl__im__23);
#line 1131
___nl__im_ptr__28 = &((*___ref___rec__3).logic0field);
#line 1131
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1131
___nl__im_ptr__28 = NULL;
#line 1131
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(429)));
#line 1131
c_rt_lib0clear(&___nl__im__27);
#line 1131
c_rt_lib0move(&___nl__im__4, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__26));
#line 1131
c_rt_lib0clear(&___nl__im__26);
#line 1132
goto label_61;
#line 1132
label_57:
;
#line 1133
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1133
nl_die_arg(___nl__im__29);
#line 1134
goto label_61;
#line 1134
label_61:
;
#line 1134
//clear ___nl__bool__5;
#line 1134
c_rt_lib0clear(&___nl__im__8);
#line 1134
c_rt_lib0clear(&___nl__im__29);
#line 1135
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1135
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__31);
#line 1135
c_rt_lib0clear(&___nl__im__31);
#line 1135
___nl__bool__30 = !___nl__bool__30;
#line 1136
c_rt_lib0copy(&___nl__im__32, ___nl__im__0);
#line 1137
___nl__bool__33 = ___nl__bool__30;
#line 1137
___nl__bool__33 = !___nl__bool__33;
#line 1137
if(___nl__bool__33){ goto label_75;}
#line 1137
c_rt_lib0move(&___nl__im__32, translator_priv0new_register(___ref___rec__3, ___nl__im__4));
#line 1137
goto label_75;
#line 1137
label_75:
;
#line 1137
//clear ___nl__bool__33;
#line 1138
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(244), ___nl__im__32, ___get_global_string_const(78), ___nl__im__1, ___get_global_string_const(586), ___nl__im__2));
#line 1138
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__35));
#line 1138
c_rt_lib0clear(&___nl__im__35);
#line 1138
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__34));
#line 1138
c_rt_lib0clear(&___nl__im__34);
#line 1139
___nl__bool__36 = ___nl__bool__30;
#line 1139
___nl__bool__36 = !___nl__bool__36;
#line 1139
if(___nl__bool__36){ goto label_87;}
#line 1139
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__32, ___ref___rec__3));
#line 1139
goto label_87;
#line 1139
label_87:
;
#line 1139
//clear ___nl__bool__36;
#line 1139
c_rt_lib0clear(&___nl__im__0);
#line 1139
c_rt_lib0clear(&___nl__im__1);
#line 1139
c_rt_lib0clear(&___nl__im__2);
#line 1139
c_rt_lib0clear(&___nl__im__4);
#line 1139
//clear ___nl__bool__30;
#line 1139
c_rt_lib0clear(&___nl__im__32);
#line 1139
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
#line 1143
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(78), ___nl__im__0, ___get_global_string_const(586), ___nl__im__1, ___get_global_string_const(245), ___nl__im__2));
#line 1143
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(264), ___nl__im__5));
#line 1143
c_rt_lib0clear(&___nl__im__5);
#line 1143
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1143
c_rt_lib0clear(&___nl__im__4);
#line 1143
c_rt_lib0clear(&___nl__im__0);
#line 1143
c_rt_lib0clear(&___nl__im__1);
#line 1143
c_rt_lib0clear(&___nl__im__2);
#line 1143
return NULL;
return NULL;

}

ImmT  translator0struct_of_lvalue_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0struct_of_lvalue_t");
ImmT  res = translator0struct_of_lvalue_t();
return res;
}
ImmT translator0struct_of_lvalue_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(7);
}
ImmT translator0struct_of_lvalue_t0cal() {
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
#line 1148
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1132)));
#line 1148
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 1150
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 1150
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 1151
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1132)));
#line 1151
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 1151
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__6, ___get_global_string_const(376), ___nl__im__7));
#line 1151
c_rt_lib0clear(&___nl__im__6);
#line 1151
c_rt_lib0clear(&___nl__im__7);
#line 1151
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 1151
c_rt_lib0clear(&___nl__im__5);
#line 1153
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 1155
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 1155
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 1156
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 1156
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__11, ___get_global_string_const(615), ___nl__im__12));
#line 1156
c_rt_lib0clear(&___nl__im__11);
#line 1156
c_rt_lib0clear(&___nl__im__12);
#line 1156
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 1156
c_rt_lib0clear(&___nl__im__10);
#line 1158
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1132)));
#line 1158
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 1160
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 1160
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 1161
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1132)));
#line 1161
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__17));
#line 1161
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__16, ___get_global_string_const(376), ___nl__im__17));
#line 1161
c_rt_lib0clear(&___nl__im__16);
#line 1161
c_rt_lib0clear(&___nl__im__17);
#line 1161
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 1161
c_rt_lib0clear(&___nl__im__15);
#line 1163
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 1165
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(108), ___get_global_string_const(109)));
#line 1165
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__21));
#line 1166
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 1166
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__21, ___get_global_string_const(571), ___nl__im__22));
#line 1166
c_rt_lib0clear(&___nl__im__21);
#line 1166
c_rt_lib0clear(&___nl__im__22);
#line 1166
c_rt_lib0move(&___nl__im__19, ptd0rec(___nl__im__20));
#line 1166
c_rt_lib0clear(&___nl__im__20);
#line 1166
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_string_const(376), ___nl__im__3, ___get_global_string_const(275), ___nl__im__4, ___get_global_string_const(586), ___nl__im__8, ___get_global_string_const(273), ___nl__im__9, ___get_global_string_const(1410), ___nl__im__13, ___get_global_string_const(277), ___nl__im__14, ___get_global_string_const(1130), ___nl__im__18, ___get_global_string_const(279), ___nl__im__19));
#line 1166
c_rt_lib0clear(&___nl__im__3);
#line 1166
c_rt_lib0clear(&___nl__im__4);
#line 1166
c_rt_lib0clear(&___nl__im__8);
#line 1166
c_rt_lib0clear(&___nl__im__9);
#line 1166
c_rt_lib0clear(&___nl__im__13);
#line 1166
c_rt_lib0clear(&___nl__im__14);
#line 1166
c_rt_lib0clear(&___nl__im__18);
#line 1166
c_rt_lib0clear(&___nl__im__19);
#line 1166
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 1166
c_rt_lib0clear(&___nl__im__2);
#line 1166
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 1166
c_rt_lib0clear(&___nl__im__1);
#line 1166
return ___nl__im__0;
#line 1166
c_rt_lib0clear(&___nl__im__0);
#line 1166
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
#line 1172
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 1173
label_1:
;
#line 1173
___nl__bool__3 = true;
#line 1173
___nl__bool__3 = !___nl__bool__3;
#line 1173
if(___nl__bool__3){ goto label_308;}
#line 1174
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(241)));
#line 1174
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(254));
#line 1174
c_rt_lib0clear(&___nl__im__5);
#line 1174
___nl__bool__4 = !___nl__bool__4;
#line 1174
if(___nl__bool__4){ goto label_283;}
#line 1175
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(241)));
#line 1175
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(241)));
#line 1175
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(254)));
#line 1175
c_rt_lib0clear(&___nl__im__7);
#line 1175
c_rt_lib0clear(&___nl__im__8);
#line 1176
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(569)));
#line 1177
c_rt_lib0move(&___nl__im__11,___get_global_string_const(1104));
#line 1177
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 1177
c_rt_lib0clear(&___nl__im__11);
#line 1177
if(___nl__bool__10){ goto label_23;}
#line 1177
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1105));
#line 1177
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__12);
#line 1177
c_rt_lib0clear(&___nl__im__12);
#line 1177
label_23:
;
#line 1177
if(___nl__bool__10){ goto label_28;}
#line 1177
c_rt_lib0move(&___nl__im__13,___get_global_string_const(587));
#line 1177
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__13);
#line 1177
c_rt_lib0clear(&___nl__im__13);
#line 1177
label_28:
;
#line 1177
if(___nl__bool__10){ goto label_33;}
#line 1177
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1106));
#line 1177
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__14);
#line 1177
c_rt_lib0clear(&___nl__im__14);
#line 1177
label_33:
;
#line 1177
___nl__bool__10 = !___nl__bool__10;
#line 1177
___nl__bool__10 = !___nl__bool__10;
#line 1177
if(___nl__bool__10){ goto label_40;}
#line 1177
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1177
nl_die_arg(___nl__im__15);
#line 1177
goto label_40;
#line 1177
label_40:
;
#line 1177
//clear ___nl__bool__10;
#line 1177
c_rt_lib0clear(&___nl__im__15);
#line 1178
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 1179
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(569)));
#line 1179
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1104));
#line 1179
___nl__bool__17 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 1179
c_rt_lib0clear(&___nl__im__18);
#line 1179
c_rt_lib0clear(&___nl__im__19);
#line 1179
___nl__bool__17 = !___nl__bool__17;
#line 1179
if(___nl__bool__17){ goto label_85;}
#line 1180
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(291)));
#line 1180
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(110)));
#line 1180
c_rt_lib0clear(&___nl__im__22);
#line 1180
___nl__im_ptr__25 = &((*___ref___rec__1).logic0field);
#line 1180
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1180
___nl__im_ptr__25 = NULL;
#line 1180
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(429)));
#line 1180
c_rt_lib0clear(&___nl__im__24);
#line 1180
c_rt_lib0move(&___nl__im__20, translator_priv0unwrap_ref(___nl__im__21, ___nl__im__23));
#line 1180
c_rt_lib0clear(&___nl__im__21);
#line 1180
c_rt_lib0clear(&___nl__im__23);
#line 1181
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(2));
#line 1181
___nl__bool__26 = !___nl__bool__26;
#line 1181
if(___nl__bool__26){ goto label_75;}
#line 1183
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(2)));
#line 1184
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1184
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__29, ___get_global_string_const(376), ___nl__im__30));
#line 1184
c_rt_lib0clear(&___nl__im__29);
#line 1184
c_rt_lib0clear(&___nl__im__30);
#line 1184
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(275), ___nl__im__28));
#line 1184
c_rt_lib0clear(&___nl__im__28);
#line 1184
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__27));
#line 1184
c_rt_lib0clear(&___nl__im__27);
#line 1186
goto label_82;
#line 1186
label_75:
;
#line 1187
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1187
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(376), ___nl__im__32));
#line 1187
c_rt_lib0clear(&___nl__im__32);
#line 1187
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__31));
#line 1187
c_rt_lib0clear(&___nl__im__31);
#line 1188
goto label_82;
#line 1188
label_82:
;
#line 1188
//clear ___nl__bool__26;
#line 1189
goto label_271;
#line 1189
label_85:
;
#line 1189
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(569)));
#line 1189
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1105));
#line 1189
___nl__bool__17 = c_rt_lib0eq(___nl__im__33, ___nl__im__34);
#line 1189
c_rt_lib0clear(&___nl__im__33);
#line 1189
c_rt_lib0clear(&___nl__im__34);
#line 1189
___nl__bool__17 = !___nl__bool__17;
#line 1189
if(___nl__bool__17){ goto label_127;}
#line 1190
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(291)));
#line 1190
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(110)));
#line 1190
c_rt_lib0clear(&___nl__im__37);
#line 1190
___nl__im_ptr__40 = &((*___ref___rec__1).logic0field);
#line 1190
c_rt_lib0copy(&___nl__im__39, (*___nl__im_ptr__40));
#line 1190
___nl__im_ptr__40 = NULL;
#line 1190
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(429)));
#line 1190
c_rt_lib0clear(&___nl__im__39);
#line 1190
c_rt_lib0move(&___nl__im__35, translator_priv0unwrap_ref(___nl__im__36, ___nl__im__38));
#line 1190
c_rt_lib0clear(&___nl__im__36);
#line 1190
c_rt_lib0clear(&___nl__im__38);
#line 1191
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(4));
#line 1191
___nl__bool__41 = !___nl__bool__41;
#line 1191
if(___nl__bool__41){ goto label_117;}
#line 1193
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(4)));
#line 1194
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1194
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__44, ___get_global_string_const(376), ___nl__im__45));
#line 1194
c_rt_lib0clear(&___nl__im__44);
#line 1194
c_rt_lib0clear(&___nl__im__45);
#line 1194
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__43));
#line 1194
c_rt_lib0clear(&___nl__im__43);
#line 1194
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__42));
#line 1194
c_rt_lib0clear(&___nl__im__42);
#line 1196
goto label_124;
#line 1196
label_117:
;
#line 1197
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1197
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(1410), ___nl__im__47));
#line 1197
c_rt_lib0clear(&___nl__im__47);
#line 1197
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__46));
#line 1197
c_rt_lib0clear(&___nl__im__46);
#line 1198
goto label_124;
#line 1198
label_124:
;
#line 1198
//clear ___nl__bool__41;
#line 1199
goto label_271;
#line 1199
label_127:
;
#line 1199
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(569)));
#line 1199
c_rt_lib0move(&___nl__im__49,___get_global_string_const(587));
#line 1199
___nl__bool__17 = c_rt_lib0eq(___nl__im__48, ___nl__im__49);
#line 1199
c_rt_lib0clear(&___nl__im__48);
#line 1199
c_rt_lib0clear(&___nl__im__49);
#line 1199
___nl__bool__17 = !___nl__bool__17;
#line 1199
if(___nl__bool__17){ goto label_201;}
#line 1200
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(291)));
#line 1200
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(110)));
#line 1200
c_rt_lib0clear(&___nl__im__52);
#line 1200
___nl__im_ptr__55 = &((*___ref___rec__1).logic0field);
#line 1200
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 1200
___nl__im_ptr__55 = NULL;
#line 1200
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(429)));
#line 1200
c_rt_lib0clear(&___nl__im__54);
#line 1200
c_rt_lib0move(&___nl__im__50, translator_priv0unwrap_ref(___nl__im__51, ___nl__im__53));
#line 1200
c_rt_lib0clear(&___nl__im__51);
#line 1200
c_rt_lib0clear(&___nl__im__53);
#line 1201
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(6));
#line 1201
___nl__bool__56 = !___nl__bool__56;
#line 1201
if(___nl__bool__56){ goto label_168;}
#line 1202
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1202
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(241)));
#line 1202
c_rt_lib0clear(&___nl__im__59);
#line 1202
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1202
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(241)));
#line 1202
c_rt_lib0clear(&___nl__im__61);
#line 1202
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__60, ___get_global_string_const(1110)));
#line 1202
c_rt_lib0clear(&___nl__im__58);
#line 1202
c_rt_lib0clear(&___nl__im__60);
#line 1204
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(6)));
#line 1204
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__65, ___nl__im__57));
#line 1204
c_rt_lib0clear(&___nl__im__65);
#line 1204
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__64, ___get_global_string_const(615), ___nl__im__57));
#line 1204
c_rt_lib0clear(&___nl__im__64);
#line 1204
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_arg(___get_global_string_const(273), ___nl__im__63));
#line 1204
c_rt_lib0clear(&___nl__im__63);
#line 1204
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__62));
#line 1204
c_rt_lib0clear(&___nl__im__62);
#line 1207
goto label_197;
#line 1207
label_168:
;
#line 1207
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(4));
#line 1207
___nl__bool__56 = !___nl__bool__56;
#line 1207
if(___nl__bool__56){ goto label_182;}
#line 1209
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(4)));
#line 1210
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1210
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__68, ___get_global_string_const(376), ___nl__im__69));
#line 1210
c_rt_lib0clear(&___nl__im__68);
#line 1210
c_rt_lib0clear(&___nl__im__69);
#line 1210
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__67));
#line 1210
c_rt_lib0clear(&___nl__im__67);
#line 1210
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__66));
#line 1210
c_rt_lib0clear(&___nl__im__66);
#line 1212
goto label_197;
#line 1212
label_182:
;
#line 1213
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1213
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(241)));
#line 1213
c_rt_lib0clear(&___nl__im__73);
#line 1213
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1213
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_string_const(241)));
#line 1213
c_rt_lib0clear(&___nl__im__75);
#line 1213
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__74, ___get_global_string_const(1110)));
#line 1213
c_rt_lib0clear(&___nl__im__72);
#line 1213
c_rt_lib0clear(&___nl__im__74);
#line 1213
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(586), ___nl__im__71));
#line 1213
c_rt_lib0clear(&___nl__im__71);
#line 1213
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__70));
#line 1213
c_rt_lib0clear(&___nl__im__70);
#line 1214
goto label_197;
#line 1214
label_197:
;
#line 1214
//clear ___nl__bool__56;
#line 1214
c_rt_lib0clear(&___nl__im__57);
#line 1215
goto label_271;
#line 1215
label_201:
;
#line 1215
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(569)));
#line 1215
c_rt_lib0move(&___nl__im__77,___get_global_string_const(1106));
#line 1215
___nl__bool__17 = c_rt_lib0eq(___nl__im__76, ___nl__im__77);
#line 1215
c_rt_lib0clear(&___nl__im__76);
#line 1215
c_rt_lib0clear(&___nl__im__77);
#line 1215
___nl__bool__17 = !___nl__bool__17;
#line 1215
if(___nl__bool__17){ goto label_267;}
#line 1216
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(291)));
#line 1216
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(110)));
#line 1216
c_rt_lib0clear(&___nl__im__80);
#line 1216
___nl__im_ptr__83 = &((*___ref___rec__1).logic0field);
#line 1216
c_rt_lib0copy(&___nl__im__82, (*___nl__im_ptr__83));
#line 1216
___nl__im_ptr__83 = NULL;
#line 1216
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(429)));
#line 1216
c_rt_lib0clear(&___nl__im__82);
#line 1216
c_rt_lib0move(&___nl__im__78, translator_priv0unwrap_ref(___nl__im__79, ___nl__im__81));
#line 1216
c_rt_lib0clear(&___nl__im__79);
#line 1216
c_rt_lib0clear(&___nl__im__81);
#line 1217
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1217
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(241)));
#line 1217
c_rt_lib0clear(&___nl__im__86);
#line 1217
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(292)));
#line 1217
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(241)));
#line 1217
c_rt_lib0clear(&___nl__im__88);
#line 1217
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(1110)));
#line 1217
c_rt_lib0clear(&___nl__im__85);
#line 1217
c_rt_lib0clear(&___nl__im__87);
#line 1218
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(13));
#line 1218
___nl__bool__89 = !___nl__bool__89;
#line 1218
if(___nl__bool__89){ goto label_248;}
#line 1220
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__78, ___get_global_string_const(13)));
#line 1220
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value(___nl__im__94, ___nl__im__84));
#line 1220
c_rt_lib0clear(&___nl__im__94);
#line 1220
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__78, ___get_global_string_const(13)));
#line 1220
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value(___nl__im__96, ___nl__im__84));
#line 1220
c_rt_lib0clear(&___nl__im__96);
#line 1220
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__95, ___get_global_string_const(27)));
#line 1220
c_rt_lib0clear(&___nl__im__93);
#line 1220
c_rt_lib0clear(&___nl__im__95);
#line 1220
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(2, ___get_global_string_const(1430), ___nl__im__92, ___get_global_string_const(571), ___nl__im__84));
#line 1220
c_rt_lib0clear(&___nl__im__92);
#line 1220
c_rt_lib0move(&___nl__im__90, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__91));
#line 1220
c_rt_lib0clear(&___nl__im__91);
#line 1220
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__90));
#line 1220
c_rt_lib0clear(&___nl__im__90);
#line 1223
goto label_263;
#line 1223
label_248:
;
#line 1223
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(12));
#line 1223
if(___nl__bool__89){ goto label_252;}
#line 1223
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(0));
#line 1223
label_252:
;
#line 1223
___nl__bool__89 = !___nl__bool__89;
#line 1223
if(___nl__bool__89){ goto label_259;}
#line 1224
c_rt_lib0move(&___nl__im__97, c_rt_lib0ov_mk_arg(___get_global_string_const(1130), ___nl__im__84));
#line 1224
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__97));
#line 1224
c_rt_lib0clear(&___nl__im__97);
#line 1225
goto label_263;
#line 1225
label_259:
;
#line 1226
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(0));
#line 1226
nl_die_arg(___nl__im__98);
#line 1227
goto label_263;
#line 1227
label_263:
;
#line 1227
//clear ___nl__bool__89;
#line 1227
c_rt_lib0clear(&___nl__im__98);
#line 1228
goto label_271;
#line 1228
label_267:
;
#line 1229
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(0));
#line 1229
nl_die_arg(___nl__im__99);
#line 1230
goto label_271;
#line 1230
label_271:
;
#line 1230
//clear ___nl__bool__17;
#line 1230
c_rt_lib0clear(&___nl__im__20);
#line 1230
c_rt_lib0clear(&___nl__im__35);
#line 1230
c_rt_lib0clear(&___nl__im__50);
#line 1230
c_rt_lib0clear(&___nl__im__78);
#line 1230
c_rt_lib0clear(&___nl__im__84);
#line 1230
c_rt_lib0clear(&___nl__im__99);
#line 1231
c_rt_lib0delete(array0append(&___nl__im__16, ___nl__im__2));
#line 1232
c_rt_lib0copy(&___nl__im__2, ___nl__im__16);
#line 1233
c_rt_lib0move(___ref___im__0, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(291)));
#line 1234
goto label_302;
#line 1234
label_283:
;
#line 1234
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(241)));
#line 1234
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(1107));
#line 1234
c_rt_lib0clear(&___nl__im__100);
#line 1234
___nl__bool__4 = !___nl__bool__4;
#line 1234
if(___nl__bool__4){ goto label_295;}
#line 1235
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(241)));
#line 1235
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(241)));
#line 1235
c_rt_lib0move(___ref___im__0, c_rt_lib0priv_as(___nl__im__102, ___get_global_string_const(1107)));
#line 1235
c_rt_lib0clear(&___nl__im__101);
#line 1235
c_rt_lib0clear(&___nl__im__102);
#line 1236
goto label_302;
#line 1236
label_295:
;
#line 1237
//clear ___nl__bool__4;
#line 1237
c_rt_lib0clear(&___nl__im__6);
#line 1237
c_rt_lib0clear(&___nl__im__9);
#line 1237
c_rt_lib0clear(&___nl__im__16);
#line 1237
goto label_308;
#line 1238
goto label_302;
#line 1238
label_302:
;
#line 1238
//clear ___nl__bool__4;
#line 1238
c_rt_lib0clear(&___nl__im__6);
#line 1238
c_rt_lib0clear(&___nl__im__9);
#line 1238
c_rt_lib0clear(&___nl__im__16);
#line 1239
goto label_1;
#line 1239
label_308:
;
#line 1240
//clear ___nl__bool__3;
#line 1240
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
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
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
bool  ___nl__bool__27 = false;
bool  ___nl__bool__28 = false;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
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
ImmT * ___nl__im_ptr__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
INT  ___nl__int__55 = 0;
ImmT  ___nl__im__56 = NULL;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
bool  ___nl__bool__68 = false;
bool  ___nl__bool__69 = false;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
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
bool  ___nl__bool__88 = false;
bool  ___nl__bool__89 = false;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
INT  ___nl__int__92 = 0;
ImmT  ___nl__im__93 = NULL;
INT  ___nl__int__94 = 0;
INT  ___nl__int__95 = 0;
ImmT  ___nl__im__96 = NULL;
INT  ___nl__int__97 = 0;
INT  ___nl__int__98 = 0;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
INT  ___nl__int__105 = 0;
INT  ___nl__int__106 = 0;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT * ___nl__im_ptr__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
INT  ___nl__int__119 = 0;
INT  ___nl__int__120 = 0;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
INT  ___nl__int__123 = 0;
INT  ___nl__int__124 = 0;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
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
INT  ___nl__int__137 = 0;
INT  ___nl__int__138 = 0;
ImmT  ___nl__im__139 = NULL;
INT  ___nl__int__140 = 0;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT * ___nl__im_ptr__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
INT  ___nl__int__154 = 0;
INT  ___nl__int__155 = 0;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
INT  ___nl__int__158 = 0;
INT  ___nl__int__159 = 0;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT * ___nl__im_ptr__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
INT  ___nl__int__176 = 0;
INT  ___nl__int__177 = 0;
bool  ___nl__bool__178 = false;
bool  ___nl__bool__179 = false;
INT  ___nl__int__180 = 0;
INT  ___nl__int__181 = 0;
INT  ___nl__int__182 = 0;
ImmT  ___nl__im__183 = NULL;
INT  ___nl__int__184 = 0;
INT  ___nl__int__185 = 0;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
INT  ___nl__int__189 = 0;
INT  ___nl__int__190 = 0;
INT  ___nl__int__191 = 0;
#line 1245
c_rt_lib0move(&___nl__im__3, translator_priv0get_struct_of_lvalue(&___nl__im__0, ___ref___rec__2));
#line 1246
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1246
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1246
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(516)));
#line 1246
c_rt_lib0clear(&___nl__im__5);
#line 1246
c_rt_lib0clear(&___nl__im__6);
#line 1247
c_rt_lib0move(&___nl__im__8, translator_priv0get_var_register(___nl__im__4, ___ref___rec__2));
#line 1247
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(1, ___nl__im__8));
#line 1247
c_rt_lib0clear(&___nl__im__8);
#line 1248
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1249
___nl__int__10 = c_rt_lib0array_len(___nl__im__3);
#line 1249
___nl__int__11 = 0;
#line 1249
___nl__int__12 = 1;
#line 1249
label_13:
;
#line 1249
___nl__bool__13 = ___nl__int__11 >= ___nl__int__10;
#line 1249
if(___nl__bool__13){ goto label_492;}
#line 1250
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__3, ___nl__int__11));
#line 1250
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(376));
#line 1250
if(___nl__bool__15){ goto label_36;}
#line 1256
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(275));
#line 1256
if(___nl__bool__15){ goto label_100;}
#line 1262
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1410));
#line 1262
if(___nl__bool__15){ goto label_141;}
#line 1268
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(586));
#line 1268
if(___nl__bool__15){ goto label_208;}
#line 1277
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(273));
#line 1277
if(___nl__bool__15){ goto label_289;}
#line 1282
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1130));
#line 1282
if(___nl__bool__15){ goto label_331;}
#line 1286
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(279));
#line 1286
if(___nl__bool__15){ goto label_365;}
#line 1291
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(277));
#line 1291
if(___nl__bool__15){ goto label_407;}
#line 1291
c_rt_lib0move(&___nl__im__16,___get_global_string_const(15));
#line 1291
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 1291
nl_die_arg(___nl__im__16);
#line 1250
label_36:
;
#line 1250
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(376)));
#line 1250
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1251
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1251
c_rt_lib0move(&___nl__im__19, translator_priv0new_register(___ref___rec__2, ___nl__im__20));
#line 1251
c_rt_lib0clear(&___nl__im__20);
#line 1251
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__19));
#line 1251
c_rt_lib0clear(&___nl__im__19);
#line 1252
c_rt_lib0move(&___nl__im__22, translator_priv0calc_val(___nl__im__17, ___ref___rec__2));
#line 1252
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1252
c_rt_lib0move(&___nl__im__21, translator_priv0get_cast(___nl__im__22, ___nl__im__23, ___ref___rec__2));
#line 1252
c_rt_lib0clear(&___nl__im__22);
#line 1252
c_rt_lib0clear(&___nl__im__23);
#line 1253
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1253
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__26, ___get_global_string_const(376), ___nl__im__21));
#line 1253
c_rt_lib0clear(&___nl__im__26);
#line 1253
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(376), ___nl__im__25));
#line 1253
c_rt_lib0clear(&___nl__im__25);
#line 1253
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__24));
#line 1253
c_rt_lib0clear(&___nl__im__24);
#line 1254
___nl__bool__27 = ___nl__bool__1;
#line 1254
___nl__bool__27 = !___nl__bool__27;
#line 1254
___nl__bool__28 = !___nl__bool__27;
#line 1254
if(___nl__bool__28){ goto label_67;}
#line 1254
___nl__int__30 = c_rt_lib0array_len(___nl__im__3);
#line 1254
___nl__int__31 = 1;
#line 1254
___nl__int__29 = ___nl__int__30 - ___nl__int__31;
#line 1254
//clear ___nl__int__30;
#line 1254
//clear ___nl__int__31;
#line 1254
___nl__bool__27 = ___nl__int__11 == ___nl__int__29;
#line 1254
//clear ___nl__int__29;
#line 1254
label_67:
;
#line 1254
//clear ___nl__bool__28;
#line 1254
___nl__bool__27 = !___nl__bool__27;
#line 1254
if(___nl__bool__27){ goto label_80;}
#line 1254
c_rt_lib0clear(&___nl__im__14);
#line 1254
//clear ___nl__bool__15;
#line 1254
c_rt_lib0clear(&___nl__im__16);
#line 1254
c_rt_lib0clear(&___nl__im__17);
#line 1254
c_rt_lib0clear(&___nl__im__18);
#line 1254
c_rt_lib0clear(&___nl__im__21);
#line 1254
//clear ___nl__bool__27;
#line 1254
goto label_492;
#line 1254
goto label_80;
#line 1254
label_80:
;
#line 1254
//clear ___nl__bool__27;
#line 1255
___nl__int__34 = 1;
#line 1255
___nl__int__33 = ___nl__int__11 + ___nl__int__34;
#line 1255
//clear ___nl__int__34;
#line 1255
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__7, ___nl__int__33));
#line 1255
//clear ___nl__int__33;
#line 1255
c_rt_lib0move(&___nl__im__35,___get_global_string_const(1431));
#line 1255
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1255
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__38));
#line 1255
c_rt_lib0clear(&___nl__im__38);
#line 1255
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__21));
#line 1255
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__39));
#line 1255
c_rt_lib0clear(&___nl__im__37);
#line 1255
c_rt_lib0clear(&___nl__im__39);
#line 1255
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__32, ___nl__im__35, ___nl__im__36, ___ref___rec__2));
#line 1255
c_rt_lib0clear(&___nl__im__32);
#line 1255
c_rt_lib0clear(&___nl__im__35);
#line 1255
c_rt_lib0clear(&___nl__im__36);
#line 1256
goto label_461;
#line 1256
label_100:
;
#line 1256
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(275)));
#line 1256
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 1257
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(1430)));
#line 1257
___nl__im_ptr__46 = &((*___ref___rec__2).logic0field);
#line 1257
c_rt_lib0copy(&___nl__im__45, (*___nl__im_ptr__46));
#line 1257
___nl__im_ptr__46 = NULL;
#line 1257
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(429)));
#line 1257
c_rt_lib0clear(&___nl__im__45);
#line 1257
c_rt_lib0move(&___nl__im__42, translator_priv0var_type_to_reg_type(___nl__im__43, ___nl__im__44));
#line 1257
c_rt_lib0clear(&___nl__im__43);
#line 1257
c_rt_lib0clear(&___nl__im__44);
#line 1258
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(376)));
#line 1258
c_rt_lib0move(&___nl__im__47, translator_priv0calc_val(___nl__im__48, ___ref___rec__2));
#line 1258
c_rt_lib0clear(&___nl__im__48);
#line 1259
c_rt_lib0move(&___nl__im__49, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__42));
#line 1259
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__49));
#line 1259
c_rt_lib0clear(&___nl__im__49);
#line 1260
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1260
___nl__int__55 = 1;
#line 1260
___nl__int__54 = ___nl__int__11 + ___nl__int__55;
#line 1260
//clear ___nl__int__55;
#line 1260
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__7, ___nl__int__54));
#line 1260
//clear ___nl__int__54;
#line 1260
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__52, ___get_global_string_const(1423), ___nl__im__53, ___get_global_string_const(376), ___nl__im__47));
#line 1260
c_rt_lib0clear(&___nl__im__52);
#line 1260
c_rt_lib0clear(&___nl__im__53);
#line 1260
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_string_const(275), ___nl__im__51));
#line 1260
c_rt_lib0clear(&___nl__im__51);
#line 1260
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__50));
#line 1260
c_rt_lib0clear(&___nl__im__50);
#line 1261
___nl__int__58 = 1;
#line 1261
___nl__int__57 = ___nl__int__11 + ___nl__int__58;
#line 1261
//clear ___nl__int__58;
#line 1261
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__7, ___nl__int__57));
#line 1261
//clear ___nl__int__57;
#line 1261
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1261
c_rt_lib0delete(translator_priv0use_index(___nl__im__56, ___nl__im__59, ___nl__im__47, ___ref___rec__2));
#line 1261
c_rt_lib0clear(&___nl__im__56);
#line 1261
c_rt_lib0clear(&___nl__im__59);
#line 1262
goto label_461;
#line 1262
label_141:
;
#line 1262
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(1410)));
#line 1262
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 1263
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1263
c_rt_lib0move(&___nl__im__62, translator_priv0new_register(___ref___rec__2, ___nl__im__63));
#line 1263
c_rt_lib0clear(&___nl__im__63);
#line 1263
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__62));
#line 1263
c_rt_lib0clear(&___nl__im__62);
#line 1264
c_rt_lib0move(&___nl__im__64, translator_priv0calc_val(___nl__im__60, ___ref___rec__2));
#line 1265
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1265
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__67, ___get_global_string_const(586), ___nl__im__64));
#line 1265
c_rt_lib0clear(&___nl__im__67);
#line 1265
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_string_const(1410), ___nl__im__66));
#line 1265
c_rt_lib0clear(&___nl__im__66);
#line 1265
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__65));
#line 1265
c_rt_lib0clear(&___nl__im__65);
#line 1266
___nl__bool__68 = ___nl__bool__1;
#line 1266
___nl__bool__68 = !___nl__bool__68;
#line 1266
___nl__bool__69 = !___nl__bool__68;
#line 1266
if(___nl__bool__69){ goto label_168;}
#line 1266
___nl__int__71 = c_rt_lib0array_len(___nl__im__3);
#line 1266
___nl__int__72 = 1;
#line 1266
___nl__int__70 = ___nl__int__71 - ___nl__int__72;
#line 1266
//clear ___nl__int__71;
#line 1266
//clear ___nl__int__72;
#line 1266
___nl__bool__68 = ___nl__int__11 == ___nl__int__70;
#line 1266
//clear ___nl__int__70;
#line 1266
label_168:
;
#line 1266
//clear ___nl__bool__69;
#line 1266
___nl__bool__68 = !___nl__bool__68;
#line 1266
if(___nl__bool__68){ goto label_188;}
#line 1266
c_rt_lib0clear(&___nl__im__14);
#line 1266
//clear ___nl__bool__15;
#line 1266
c_rt_lib0clear(&___nl__im__16);
#line 1266
c_rt_lib0clear(&___nl__im__17);
#line 1266
c_rt_lib0clear(&___nl__im__18);
#line 1266
c_rt_lib0clear(&___nl__im__21);
#line 1266
c_rt_lib0clear(&___nl__im__40);
#line 1266
c_rt_lib0clear(&___nl__im__41);
#line 1266
c_rt_lib0clear(&___nl__im__42);
#line 1266
c_rt_lib0clear(&___nl__im__47);
#line 1266
c_rt_lib0clear(&___nl__im__60);
#line 1266
c_rt_lib0clear(&___nl__im__61);
#line 1266
c_rt_lib0clear(&___nl__im__64);
#line 1266
//clear ___nl__bool__68;
#line 1266
goto label_492;
#line 1266
goto label_188;
#line 1266
label_188:
;
#line 1266
//clear ___nl__bool__68;
#line 1267
___nl__int__75 = 1;
#line 1267
___nl__int__74 = ___nl__int__11 + ___nl__int__75;
#line 1267
//clear ___nl__int__75;
#line 1267
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_get(___nl__im__7, ___nl__int__74));
#line 1267
//clear ___nl__int__74;
#line 1267
c_rt_lib0move(&___nl__im__76,___get_global_string_const(1432));
#line 1267
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1267
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__79));
#line 1267
c_rt_lib0clear(&___nl__im__79);
#line 1267
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__64));
#line 1267
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_mk(2, ___nl__im__78, ___nl__im__80));
#line 1267
c_rt_lib0clear(&___nl__im__78);
#line 1267
c_rt_lib0clear(&___nl__im__80);
#line 1267
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__73, ___nl__im__76, ___nl__im__77, ___ref___rec__2));
#line 1267
c_rt_lib0clear(&___nl__im__73);
#line 1267
c_rt_lib0clear(&___nl__im__76);
#line 1267
c_rt_lib0clear(&___nl__im__77);
#line 1268
goto label_461;
#line 1268
label_208:
;
#line 1268
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(586)));
#line 1268
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 1269
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1269
c_rt_lib0move(&___nl__im__83, translator_priv0new_register(___ref___rec__2, ___nl__im__84));
#line 1269
c_rt_lib0clear(&___nl__im__84);
#line 1269
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__83));
#line 1269
c_rt_lib0clear(&___nl__im__83);
#line 1270
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1270
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__87, ___get_global_string_const(586), ___nl__im__81));
#line 1270
c_rt_lib0clear(&___nl__im__87);
#line 1270
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_string_const(586), ___nl__im__86));
#line 1270
c_rt_lib0clear(&___nl__im__86);
#line 1270
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__85));
#line 1270
c_rt_lib0clear(&___nl__im__85);
#line 1271
___nl__bool__88 = ___nl__bool__1;
#line 1271
___nl__bool__88 = !___nl__bool__88;
#line 1271
___nl__bool__89 = !___nl__bool__88;
#line 1271
if(___nl__bool__89){ goto label_234;}
#line 1271
___nl__int__91 = c_rt_lib0array_len(___nl__im__3);
#line 1271
___nl__int__92 = 1;
#line 1271
___nl__int__90 = ___nl__int__91 - ___nl__int__92;
#line 1271
//clear ___nl__int__91;
#line 1271
//clear ___nl__int__92;
#line 1271
___nl__bool__88 = ___nl__int__11 == ___nl__int__90;
#line 1271
//clear ___nl__int__90;
#line 1271
label_234:
;
#line 1271
//clear ___nl__bool__89;
#line 1271
___nl__bool__88 = !___nl__bool__88;
#line 1271
if(___nl__bool__88){ goto label_256;}
#line 1271
c_rt_lib0clear(&___nl__im__14);
#line 1271
//clear ___nl__bool__15;
#line 1271
c_rt_lib0clear(&___nl__im__16);
#line 1271
c_rt_lib0clear(&___nl__im__17);
#line 1271
c_rt_lib0clear(&___nl__im__18);
#line 1271
c_rt_lib0clear(&___nl__im__21);
#line 1271
c_rt_lib0clear(&___nl__im__40);
#line 1271
c_rt_lib0clear(&___nl__im__41);
#line 1271
c_rt_lib0clear(&___nl__im__42);
#line 1271
c_rt_lib0clear(&___nl__im__47);
#line 1271
c_rt_lib0clear(&___nl__im__60);
#line 1271
c_rt_lib0clear(&___nl__im__61);
#line 1271
c_rt_lib0clear(&___nl__im__64);
#line 1271
c_rt_lib0clear(&___nl__im__81);
#line 1271
c_rt_lib0clear(&___nl__im__82);
#line 1271
//clear ___nl__bool__88;
#line 1271
goto label_492;
#line 1271
goto label_256;
#line 1271
label_256:
;
#line 1271
//clear ___nl__bool__88;
#line 1272
___nl__int__95 = 1;
#line 1272
___nl__int__94 = ___nl__int__11 + ___nl__int__95;
#line 1272
//clear ___nl__int__95;
#line 1272
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_get(___nl__im__7, ___nl__int__94));
#line 1272
//clear ___nl__int__94;
#line 1272
c_rt_lib0delete(translator_priv0load_const(___nl__im__81, ___nl__im__93, ___ref___rec__2));
#line 1272
c_rt_lib0clear(&___nl__im__93);
#line 1273
___nl__int__98 = 1;
#line 1273
___nl__int__97 = ___nl__int__11 + ___nl__int__98;
#line 1273
//clear ___nl__int__98;
#line 1273
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_get(___nl__im__7, ___nl__int__97));
#line 1273
//clear ___nl__int__97;
#line 1273
c_rt_lib0move(&___nl__im__99,___get_global_string_const(1432));
#line 1274
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1274
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__102));
#line 1274
c_rt_lib0clear(&___nl__im__102);
#line 1275
___nl__int__106 = 1;
#line 1275
___nl__int__105 = ___nl__int__11 + ___nl__int__106;
#line 1275
//clear ___nl__int__106;
#line 1275
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_get(___nl__im__7, ___nl__int__105));
#line 1275
//clear ___nl__int__105;
#line 1275
c_rt_lib0move(&___nl__im__103, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__104));
#line 1275
c_rt_lib0clear(&___nl__im__104);
#line 1275
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_mk(2, ___nl__im__101, ___nl__im__103));
#line 1275
c_rt_lib0clear(&___nl__im__101);
#line 1275
c_rt_lib0clear(&___nl__im__103);
#line 1275
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__96, ___nl__im__99, ___nl__im__100, ___ref___rec__2));
#line 1275
c_rt_lib0clear(&___nl__im__96);
#line 1275
c_rt_lib0clear(&___nl__im__99);
#line 1275
c_rt_lib0clear(&___nl__im__100);
#line 1277
goto label_461;
#line 1277
label_289:
;
#line 1277
c_rt_lib0move(&___nl__im__108, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(273)));
#line 1277
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 1278
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(1430)));
#line 1278
___nl__im_ptr__113 = &((*___ref___rec__2).logic0field);
#line 1278
c_rt_lib0copy(&___nl__im__112, (*___nl__im_ptr__113));
#line 1278
___nl__im_ptr__113 = NULL;
#line 1278
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(429)));
#line 1278
c_rt_lib0clear(&___nl__im__112);
#line 1278
c_rt_lib0move(&___nl__im__109, translator_priv0var_type_to_reg_type(___nl__im__110, ___nl__im__111));
#line 1278
c_rt_lib0clear(&___nl__im__110);
#line 1278
c_rt_lib0clear(&___nl__im__111);
#line 1279
c_rt_lib0move(&___nl__im__114, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__109));
#line 1279
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__114));
#line 1279
c_rt_lib0clear(&___nl__im__114);
#line 1280
c_rt_lib0move(&___nl__im__117, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1280
___nl__int__120 = 1;
#line 1280
___nl__int__119 = ___nl__int__11 + ___nl__int__120;
#line 1280
//clear ___nl__int__120;
#line 1280
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_get(___nl__im__7, ___nl__int__119));
#line 1280
//clear ___nl__int__119;
#line 1280
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(615)));
#line 1280
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__117, ___get_global_string_const(1423), ___nl__im__118, ___get_global_string_const(615), ___nl__im__121));
#line 1280
c_rt_lib0clear(&___nl__im__117);
#line 1280
c_rt_lib0clear(&___nl__im__118);
#line 1280
c_rt_lib0clear(&___nl__im__121);
#line 1280
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(273), ___nl__im__116));
#line 1280
c_rt_lib0clear(&___nl__im__116);
#line 1280
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__115));
#line 1280
c_rt_lib0clear(&___nl__im__115);
#line 1281
___nl__int__124 = 1;
#line 1281
___nl__int__123 = ___nl__int__11 + ___nl__int__124;
#line 1281
//clear ___nl__int__124;
#line 1281
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_get(___nl__im__7, ___nl__int__123));
#line 1281
//clear ___nl__int__123;
#line 1281
c_rt_lib0move(&___nl__im__125, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1281
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(615)));
#line 1281
c_rt_lib0delete(translator_priv0use_field(___nl__im__122, ___nl__im__125, ___nl__im__126, ___ref___rec__2));
#line 1281
c_rt_lib0clear(&___nl__im__122);
#line 1281
c_rt_lib0clear(&___nl__im__125);
#line 1281
c_rt_lib0clear(&___nl__im__126);
#line 1282
goto label_461;
#line 1282
label_331:
;
#line 1282
c_rt_lib0move(&___nl__im__128, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(1130)));
#line 1282
c_rt_lib0copy(&___nl__im__127, ___nl__im__128);
#line 1283
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1283
c_rt_lib0move(&___nl__im__129, translator_priv0new_register(___ref___rec__2, ___nl__im__130));
#line 1283
c_rt_lib0clear(&___nl__im__130);
#line 1283
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__129));
#line 1283
c_rt_lib0clear(&___nl__im__129);
#line 1284
c_rt_lib0move(&___nl__im__133, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1284
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_mk(2, ___get_global_string_const(241), ___nl__im__133, ___get_global_string_const(571), ___nl__im__127));
#line 1284
c_rt_lib0clear(&___nl__im__133);
#line 1284
c_rt_lib0move(&___nl__im__131, c_rt_lib0ov_mk_arg(___get_global_string_const(1130), ___nl__im__132));
#line 1284
c_rt_lib0clear(&___nl__im__132);
#line 1284
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__131));
#line 1284
c_rt_lib0clear(&___nl__im__131);
#line 1285
___nl__int__138 = 1;
#line 1285
___nl__int__137 = ___nl__int__11 + ___nl__int__138;
#line 1285
//clear ___nl__int__138;
#line 1285
c_rt_lib0move(&___nl__im__136, c_rt_lib0array_get(___nl__im__7, ___nl__int__137));
#line 1285
//clear ___nl__int__137;
#line 1285
c_rt_lib0move(&___nl__im__139, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1285
___nl__int__140 = 1;
#line 1285
___nl__int__140 = -___nl__int__140;
#line 1285
c_rt_lib0move(&___nl__im__141, c_rt_lib0int_new(___nl__int__140));
#line 1285
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_mk(4, ___get_global_string_const(244), ___nl__im__136, ___get_global_string_const(78), ___nl__im__139, ___get_global_string_const(571), ___nl__im__127, ___get_global_string_const(576), ___nl__im__141));
#line 1285
c_rt_lib0clear(&___nl__im__136);
#line 1285
c_rt_lib0clear(&___nl__im__139);
#line 1285
//clear ___nl__int__140;
#line 1285
c_rt_lib0clear(&___nl__im__141);
#line 1285
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_arg(___get_global_string_const(256), ___nl__im__135));
#line 1285
c_rt_lib0clear(&___nl__im__135);
#line 1285
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__134));
#line 1285
c_rt_lib0clear(&___nl__im__134);
#line 1286
goto label_461;
#line 1286
label_365:
;
#line 1286
c_rt_lib0move(&___nl__im__143, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(279)));
#line 1286
c_rt_lib0copy(&___nl__im__142, ___nl__im__143);
#line 1287
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_string_const(1430)));
#line 1287
___nl__im_ptr__148 = &((*___ref___rec__2).logic0field);
#line 1287
c_rt_lib0copy(&___nl__im__147, (*___nl__im_ptr__148));
#line 1287
___nl__im_ptr__148 = NULL;
#line 1287
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__147, ___get_global_string_const(429)));
#line 1287
c_rt_lib0clear(&___nl__im__147);
#line 1287
c_rt_lib0move(&___nl__im__144, translator_priv0var_type_to_reg_type(___nl__im__145, ___nl__im__146));
#line 1287
c_rt_lib0clear(&___nl__im__145);
#line 1287
c_rt_lib0clear(&___nl__im__146);
#line 1288
c_rt_lib0move(&___nl__im__149, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__144));
#line 1288
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__149));
#line 1288
c_rt_lib0clear(&___nl__im__149);
#line 1289
c_rt_lib0move(&___nl__im__152, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1289
___nl__int__155 = 1;
#line 1289
___nl__int__154 = ___nl__int__11 + ___nl__int__155;
#line 1289
//clear ___nl__int__155;
#line 1289
c_rt_lib0move(&___nl__im__153, c_rt_lib0array_get(___nl__im__7, ___nl__int__154));
#line 1289
//clear ___nl__int__154;
#line 1289
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_string_const(571)));
#line 1289
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__152, ___get_global_string_const(1423), ___nl__im__153, ___get_global_string_const(571), ___nl__im__156));
#line 1289
c_rt_lib0clear(&___nl__im__152);
#line 1289
c_rt_lib0clear(&___nl__im__153);
#line 1289
c_rt_lib0clear(&___nl__im__156);
#line 1289
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__151));
#line 1289
c_rt_lib0clear(&___nl__im__151);
#line 1289
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__150));
#line 1289
c_rt_lib0clear(&___nl__im__150);
#line 1290
___nl__int__159 = 1;
#line 1290
___nl__int__158 = ___nl__int__11 + ___nl__int__159;
#line 1290
//clear ___nl__int__159;
#line 1290
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_get(___nl__im__7, ___nl__int__158));
#line 1290
//clear ___nl__int__158;
#line 1290
c_rt_lib0move(&___nl__im__160, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1290
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_string_const(571)));
#line 1290
c_rt_lib0delete(translator_priv0use_variant(___nl__im__157, ___nl__im__160, ___nl__im__161, ___ref___rec__2));
#line 1290
c_rt_lib0clear(&___nl__im__157);
#line 1290
c_rt_lib0clear(&___nl__im__160);
#line 1290
c_rt_lib0clear(&___nl__im__161);
#line 1291
goto label_461;
#line 1291
label_407:
;
#line 1291
c_rt_lib0move(&___nl__im__163, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(277)));
#line 1291
c_rt_lib0copy(&___nl__im__162, ___nl__im__163);
#line 1292
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_string_const(1430)));
#line 1292
___nl__im_ptr__168 = &((*___ref___rec__2).logic0field);
#line 1292
c_rt_lib0copy(&___nl__im__167, (*___nl__im_ptr__168));
#line 1292
___nl__im_ptr__168 = NULL;
#line 1292
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__167, ___get_global_string_const(429)));
#line 1292
c_rt_lib0clear(&___nl__im__167);
#line 1292
c_rt_lib0move(&___nl__im__164, translator_priv0var_type_to_reg_type(___nl__im__165, ___nl__im__166));
#line 1292
c_rt_lib0clear(&___nl__im__165);
#line 1292
c_rt_lib0clear(&___nl__im__166);
#line 1293
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_string_const(376)));
#line 1293
c_rt_lib0move(&___nl__im__169, translator_priv0calc_val(___nl__im__170, ___ref___rec__2));
#line 1293
c_rt_lib0clear(&___nl__im__170);
#line 1294
c_rt_lib0move(&___nl__im__171, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__164));
#line 1294
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__171));
#line 1294
c_rt_lib0clear(&___nl__im__171);
#line 1295
c_rt_lib0move(&___nl__im__174, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1295
___nl__int__177 = 1;
#line 1295
___nl__int__176 = ___nl__int__11 + ___nl__int__177;
#line 1295
//clear ___nl__int__177;
#line 1295
c_rt_lib0move(&___nl__im__175, c_rt_lib0array_get(___nl__im__7, ___nl__int__176));
#line 1295
//clear ___nl__int__176;
#line 1295
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_mk(3, ___get_global_string_const(1422), ___nl__im__174, ___get_global_string_const(1423), ___nl__im__175, ___get_global_string_const(376), ___nl__im__169));
#line 1295
c_rt_lib0clear(&___nl__im__174);
#line 1295
c_rt_lib0clear(&___nl__im__175);
#line 1295
c_rt_lib0move(&___nl__im__172, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__173));
#line 1295
c_rt_lib0clear(&___nl__im__173);
#line 1295
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__172));
#line 1295
c_rt_lib0clear(&___nl__im__172);
#line 1296
___nl__bool__178 = ___nl__bool__1;
#line 1296
___nl__bool__178 = !___nl__bool__178;
#line 1296
___nl__bool__179 = !___nl__bool__178;
#line 1296
if(___nl__bool__179){ goto label_449;}
#line 1296
___nl__int__181 = c_rt_lib0array_len(___nl__im__3);
#line 1296
___nl__int__182 = 1;
#line 1296
___nl__int__180 = ___nl__int__181 - ___nl__int__182;
#line 1296
//clear ___nl__int__181;
#line 1296
//clear ___nl__int__182;
#line 1296
___nl__bool__178 = ___nl__int__11 == ___nl__int__180;
#line 1296
//clear ___nl__int__180;
#line 1296
label_449:
;
#line 1296
//clear ___nl__bool__179;
#line 1297
___nl__int__185 = 1;
#line 1297
___nl__int__184 = ___nl__int__11 + ___nl__int__185;
#line 1297
//clear ___nl__int__185;
#line 1297
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_get(___nl__im__7, ___nl__int__184));
#line 1297
//clear ___nl__int__184;
#line 1297
c_rt_lib0move(&___nl__im__186, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1297
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__183, ___nl__im__186, ___nl__im__169, ___nl__bool__178, ___ref___rec__2));
#line 1297
c_rt_lib0clear(&___nl__im__183);
#line 1297
c_rt_lib0clear(&___nl__im__186);
#line 1298
goto label_461;
#line 1298
label_461:
;
#line 1298
c_rt_lib0clear(&___nl__im__14);
#line 1298
//clear ___nl__bool__15;
#line 1298
c_rt_lib0clear(&___nl__im__16);
#line 1298
c_rt_lib0clear(&___nl__im__17);
#line 1298
c_rt_lib0clear(&___nl__im__18);
#line 1298
c_rt_lib0clear(&___nl__im__21);
#line 1298
c_rt_lib0clear(&___nl__im__40);
#line 1298
c_rt_lib0clear(&___nl__im__41);
#line 1298
c_rt_lib0clear(&___nl__im__42);
#line 1298
c_rt_lib0clear(&___nl__im__47);
#line 1298
c_rt_lib0clear(&___nl__im__60);
#line 1298
c_rt_lib0clear(&___nl__im__61);
#line 1298
c_rt_lib0clear(&___nl__im__64);
#line 1298
c_rt_lib0clear(&___nl__im__81);
#line 1298
c_rt_lib0clear(&___nl__im__82);
#line 1298
c_rt_lib0clear(&___nl__im__107);
#line 1298
c_rt_lib0clear(&___nl__im__108);
#line 1298
c_rt_lib0clear(&___nl__im__109);
#line 1298
c_rt_lib0clear(&___nl__im__127);
#line 1298
c_rt_lib0clear(&___nl__im__128);
#line 1298
c_rt_lib0clear(&___nl__im__142);
#line 1298
c_rt_lib0clear(&___nl__im__143);
#line 1298
c_rt_lib0clear(&___nl__im__144);
#line 1298
c_rt_lib0clear(&___nl__im__162);
#line 1298
c_rt_lib0clear(&___nl__im__163);
#line 1298
c_rt_lib0clear(&___nl__im__164);
#line 1298
c_rt_lib0clear(&___nl__im__169);
#line 1298
//clear ___nl__bool__178;
#line 1299
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1299
goto label_13;
#line 1299
label_492:
;
#line 1300
___nl__int__190 = c_rt_lib0array_len(___nl__im__7);
#line 1300
___nl__int__191 = 1;
#line 1300
___nl__int__189 = ___nl__int__190 - ___nl__int__191;
#line 1300
//clear ___nl__int__190;
#line 1300
//clear ___nl__int__191;
#line 1300
c_rt_lib0move(&___nl__im__188, c_rt_lib0array_get(___nl__im__7, ___nl__int__189));
#line 1300
//clear ___nl__int__189;
#line 1300
c_rt_lib0move(&___nl__im__187, c_rt_lib0ov_mk_arg(___get_global_string_const(241), ___nl__im__188));
#line 1300
c_rt_lib0clear(&___nl__im__188);
#line 1300
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__187));
#line 1300
c_rt_lib0clear(&___nl__im__187);
#line 1301
c_rt_lib0clear(&___nl__im__0);
#line 1301
//clear ___nl__bool__1;
#line 1301
c_rt_lib0clear(&___nl__im__3);
#line 1301
c_rt_lib0clear(&___nl__im__4);
#line 1301
c_rt_lib0clear(&___nl__im__7);
#line 1301
//clear ___nl__int__10;
#line 1301
//clear ___nl__int__11;
#line 1301
//clear ___nl__int__12;
#line 1301
//clear ___nl__bool__13;
#line 1301
c_rt_lib0clear(&___nl__im__14);
#line 1301
//clear ___nl__bool__15;
#line 1301
c_rt_lib0clear(&___nl__im__16);
#line 1301
c_rt_lib0clear(&___nl__im__17);
#line 1301
c_rt_lib0clear(&___nl__im__18);
#line 1301
c_rt_lib0clear(&___nl__im__21);
#line 1301
c_rt_lib0clear(&___nl__im__40);
#line 1301
c_rt_lib0clear(&___nl__im__41);
#line 1301
c_rt_lib0clear(&___nl__im__42);
#line 1301
c_rt_lib0clear(&___nl__im__47);
#line 1301
c_rt_lib0clear(&___nl__im__60);
#line 1301
c_rt_lib0clear(&___nl__im__61);
#line 1301
c_rt_lib0clear(&___nl__im__64);
#line 1301
c_rt_lib0clear(&___nl__im__81);
#line 1301
c_rt_lib0clear(&___nl__im__82);
#line 1301
c_rt_lib0clear(&___nl__im__107);
#line 1301
c_rt_lib0clear(&___nl__im__108);
#line 1301
c_rt_lib0clear(&___nl__im__109);
#line 1301
c_rt_lib0clear(&___nl__im__127);
#line 1301
c_rt_lib0clear(&___nl__im__128);
#line 1301
c_rt_lib0clear(&___nl__im__142);
#line 1301
c_rt_lib0clear(&___nl__im__143);
#line 1301
c_rt_lib0clear(&___nl__im__144);
#line 1301
c_rt_lib0clear(&___nl__im__162);
#line 1301
c_rt_lib0clear(&___nl__im__163);
#line 1301
c_rt_lib0clear(&___nl__im__164);
#line 1301
c_rt_lib0clear(&___nl__im__169);
#line 1301
//clear ___nl__bool__178;
#line 1301
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
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
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
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
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
bool  ___nl__bool__83 = false;
bool  ___nl__bool__84 = false;
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
INT  ___nl__int__95 = 0;
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
INT  ___nl__int__116 = 0;
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
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
INT  ___nl__int__129 = 0;
#line 1306
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 1307
___nl__int__7 = 1;
#line 1307
___nl__int__6 = ___nl__int__3 - ___nl__int__7;
#line 1307
//clear ___nl__int__7;
#line 1307
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 1307
//clear ___nl__int__6;
#line 1307
___nl__int__10 = 1;
#line 1307
___nl__int__9 = ___nl__int__3 - ___nl__int__10;
#line 1307
//clear ___nl__int__10;
#line 1307
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 1307
//clear ___nl__int__9;
#line 1307
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(241)));
#line 1307
c_rt_lib0clear(&___nl__im__5);
#line 1307
c_rt_lib0clear(&___nl__im__8);
#line 1308
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1308
___nl__int__13 = 1;
#line 1308
___nl__int__13 = -___nl__int__13;
#line 1308
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 1308
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 1308
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__12, ___get_global_string_const(240), ___nl__im__14, ___get_global_string_const(366), ___nl__im__15));
#line 1308
c_rt_lib0clear(&___nl__im__12);
#line 1308
//clear ___nl__int__13;
#line 1308
c_rt_lib0clear(&___nl__im__14);
#line 1308
c_rt_lib0clear(&___nl__im__15);
#line 1309
___nl__int__17 = 2;
#line 1309
___nl__int__16 = ___nl__int__3 - ___nl__int__17;
#line 1309
//clear ___nl__int__17;
#line 1309
label_27:
;
#line 1309
___nl__int__19 = 0;
#line 1309
___nl__bool__18 = ___nl__int__16 >= ___nl__int__19;
#line 1309
//clear ___nl__int__19;
#line 1309
___nl__bool__18 = !___nl__bool__18;
#line 1309
if(___nl__bool__18){ goto label_350;}
#line 1310
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 1310
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(241));
#line 1310
if(___nl__bool__21){ goto label_55;}
#line 1312
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(376));
#line 1312
if(___nl__bool__21){ goto label_61;}
#line 1319
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(275));
#line 1319
if(___nl__bool__21){ goto label_115;}
#line 1321
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(1410));
#line 1321
if(___nl__bool__21){ goto label_126;}
#line 1328
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(586));
#line 1328
if(___nl__bool__21){ goto label_201;}
#line 1337
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(273));
#line 1337
if(___nl__bool__21){ goto label_267;}
#line 1339
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(1130));
#line 1339
if(___nl__bool__21){ goto label_278;}
#line 1342
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(279));
#line 1342
if(___nl__bool__21){ goto label_301;}
#line 1344
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(277));
#line 1344
if(___nl__bool__21){ goto label_312;}
#line 1344
c_rt_lib0move(&___nl__im__22,___get_global_string_const(15));
#line 1344
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__20));
#line 1344
nl_die_arg(___nl__im__22);
#line 1310
label_55:
;
#line 1310
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(241)));
#line 1310
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1311
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 1311
nl_die_arg(___nl__im__25);
#line 1312
goto label_323;
#line 1312
label_61:
;
#line 1312
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(376)));
#line 1312
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1313
___nl__bool__28 = ___nl__bool__1;
#line 1313
___nl__bool__28 = !___nl__bool__28;
#line 1313
___nl__bool__29 = !___nl__bool__28;
#line 1313
if(___nl__bool__29){ goto label_73;}
#line 1313
___nl__int__31 = 2;
#line 1313
___nl__int__30 = ___nl__int__3 - ___nl__int__31;
#line 1313
//clear ___nl__int__31;
#line 1313
___nl__bool__28 = ___nl__int__16 == ___nl__int__30;
#line 1313
//clear ___nl__int__30;
#line 1313
label_73:
;
#line 1313
//clear ___nl__bool__29;
#line 1313
___nl__bool__28 = !___nl__bool__28;
#line 1313
if(___nl__bool__28){ goto label_83;}
#line 1314
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(241)));
#line 1314
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(376)));
#line 1314
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__im__32, ___nl__im__33, ___nl__im__4, ___ref___rec__2));
#line 1314
c_rt_lib0clear(&___nl__im__32);
#line 1314
c_rt_lib0clear(&___nl__im__33);
#line 1315
goto label_111;
#line 1315
label_83:
;
#line 1316
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1316
___nl__int__36 = 1;
#line 1316
___nl__int__36 = -___nl__int__36;
#line 1316
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__36));
#line 1316
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 1316
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__35, ___get_global_string_const(240), ___nl__im__37, ___get_global_string_const(366), ___nl__im__38));
#line 1316
c_rt_lib0clear(&___nl__im__35);
#line 1316
//clear ___nl__int__36;
#line 1316
c_rt_lib0clear(&___nl__im__37);
#line 1316
c_rt_lib0clear(&___nl__im__38);
#line 1316
c_rt_lib0move(&___nl__im__39,___get_global_string_const(793));
#line 1316
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(241)));
#line 1316
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__42));
#line 1316
c_rt_lib0clear(&___nl__im__42);
#line 1316
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(376)));
#line 1316
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__44));
#line 1316
c_rt_lib0clear(&___nl__im__44);
#line 1316
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__4));
#line 1316
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(3, ___nl__im__41, ___nl__im__43, ___nl__im__45));
#line 1316
c_rt_lib0clear(&___nl__im__41);
#line 1316
c_rt_lib0clear(&___nl__im__43);
#line 1316
c_rt_lib0clear(&___nl__im__45);
#line 1316
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__34, ___nl__im__39, ___nl__im__40, ___ref___rec__2));
#line 1316
c_rt_lib0clear(&___nl__im__34);
#line 1316
c_rt_lib0clear(&___nl__im__39);
#line 1316
c_rt_lib0clear(&___nl__im__40);
#line 1317
goto label_111;
#line 1317
label_111:
;
#line 1317
//clear ___nl__bool__28;
#line 1318
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(241)));
#line 1319
goto label_323;
#line 1319
label_115:
;
#line 1319
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(275)));
#line 1319
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 1320
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(1423)));
#line 1320
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(1422)));
#line 1320
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(376)));
#line 1320
c_rt_lib0delete(translator_priv0release_index(___nl__im__48, ___nl__im__49, ___nl__im__50, ___ref___rec__2));
#line 1320
c_rt_lib0clear(&___nl__im__48);
#line 1320
c_rt_lib0clear(&___nl__im__49);
#line 1320
c_rt_lib0clear(&___nl__im__50);
#line 1321
goto label_323;
#line 1321
label_126:
;
#line 1321
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(1410)));
#line 1321
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 1322
___nl__bool__53 = ___nl__bool__1;
#line 1322
___nl__bool__53 = !___nl__bool__53;
#line 1322
___nl__bool__54 = !___nl__bool__53;
#line 1322
if(___nl__bool__54){ goto label_138;}
#line 1322
___nl__int__56 = 2;
#line 1322
___nl__int__55 = ___nl__int__3 - ___nl__int__56;
#line 1322
//clear ___nl__int__56;
#line 1322
___nl__bool__53 = ___nl__int__16 == ___nl__int__55;
#line 1322
//clear ___nl__int__55;
#line 1322
label_138:
;
#line 1322
//clear ___nl__bool__54;
#line 1322
___nl__bool__53 = !___nl__bool__53;
#line 1322
if(___nl__bool__53){ goto label_169;}
#line 1323
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1323
___nl__int__59 = 1;
#line 1323
___nl__int__59 = -___nl__int__59;
#line 1323
c_rt_lib0move(&___nl__im__60, c_rt_lib0int_new(___nl__int__59));
#line 1323
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 1323
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__58, ___get_global_string_const(240), ___nl__im__60, ___get_global_string_const(366), ___nl__im__61));
#line 1323
c_rt_lib0clear(&___nl__im__58);
#line 1323
//clear ___nl__int__59;
#line 1323
c_rt_lib0clear(&___nl__im__60);
#line 1323
c_rt_lib0clear(&___nl__im__61);
#line 1323
c_rt_lib0move(&___nl__im__62,___get_global_string_const(795));
#line 1323
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(241)));
#line 1323
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__65));
#line 1323
c_rt_lib0clear(&___nl__im__65);
#line 1323
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(586)));
#line 1323
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__67));
#line 1323
c_rt_lib0clear(&___nl__im__67);
#line 1323
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__4));
#line 1323
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(3, ___nl__im__64, ___nl__im__66, ___nl__im__68));
#line 1323
c_rt_lib0clear(&___nl__im__64);
#line 1323
c_rt_lib0clear(&___nl__im__66);
#line 1323
c_rt_lib0clear(&___nl__im__68);
#line 1323
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__57, ___nl__im__62, ___nl__im__63, ___ref___rec__2));
#line 1323
c_rt_lib0clear(&___nl__im__57);
#line 1323
c_rt_lib0clear(&___nl__im__62);
#line 1323
c_rt_lib0clear(&___nl__im__63);
#line 1324
goto label_197;
#line 1324
label_169:
;
#line 1325
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1325
___nl__int__71 = 1;
#line 1325
___nl__int__71 = -___nl__int__71;
#line 1325
c_rt_lib0move(&___nl__im__72, c_rt_lib0int_new(___nl__int__71));
#line 1325
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 1325
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__70, ___get_global_string_const(240), ___nl__im__72, ___get_global_string_const(366), ___nl__im__73));
#line 1325
c_rt_lib0clear(&___nl__im__70);
#line 1325
//clear ___nl__int__71;
#line 1325
c_rt_lib0clear(&___nl__im__72);
#line 1325
c_rt_lib0clear(&___nl__im__73);
#line 1325
c_rt_lib0move(&___nl__im__74,___get_global_string_const(1433));
#line 1325
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(241)));
#line 1325
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__77));
#line 1325
c_rt_lib0clear(&___nl__im__77);
#line 1325
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(586)));
#line 1325
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__79));
#line 1325
c_rt_lib0clear(&___nl__im__79);
#line 1325
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__4));
#line 1325
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(3, ___nl__im__76, ___nl__im__78, ___nl__im__80));
#line 1325
c_rt_lib0clear(&___nl__im__76);
#line 1325
c_rt_lib0clear(&___nl__im__78);
#line 1325
c_rt_lib0clear(&___nl__im__80);
#line 1325
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__69, ___nl__im__74, ___nl__im__75, ___ref___rec__2));
#line 1325
c_rt_lib0clear(&___nl__im__69);
#line 1325
c_rt_lib0clear(&___nl__im__74);
#line 1325
c_rt_lib0clear(&___nl__im__75);
#line 1326
goto label_197;
#line 1326
label_197:
;
#line 1326
//clear ___nl__bool__53;
#line 1327
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(241)));
#line 1328
goto label_323;
#line 1328
label_201:
;
#line 1328
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(586)));
#line 1328
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 1329
___nl__bool__83 = ___nl__bool__1;
#line 1329
___nl__bool__83 = !___nl__bool__83;
#line 1329
___nl__bool__84 = !___nl__bool__83;
#line 1329
if(___nl__bool__84){ goto label_213;}
#line 1329
___nl__int__86 = 2;
#line 1329
___nl__int__85 = ___nl__int__3 - ___nl__int__86;
#line 1329
//clear ___nl__int__86;
#line 1329
___nl__bool__83 = ___nl__int__16 == ___nl__int__85;
#line 1329
//clear ___nl__int__85;
#line 1329
label_213:
;
#line 1329
//clear ___nl__bool__84;
#line 1329
___nl__bool__83 = !___nl__bool__83;
#line 1329
if(___nl__bool__83){ goto label_223;}
#line 1330
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(241)));
#line 1330
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(586)));
#line 1330
c_rt_lib0delete(translator_priv0print_set_value(___nl__im__87, ___nl__im__88, ___nl__im__4, ___ref___rec__2));
#line 1330
c_rt_lib0clear(&___nl__im__87);
#line 1330
c_rt_lib0clear(&___nl__im__88);
#line 1331
goto label_263;
#line 1331
label_223:
;
#line 1332
c_rt_lib0move(&___nl__im__90, nlasm0is_empty(___nl__im__11));
#line 1332
___nl__bool__89 = c_rt_lib0check_true_native(___nl__im__90);
#line 1332
c_rt_lib0clear(&___nl__im__90);
#line 1332
___nl__bool__89 = !___nl__bool__89;
#line 1332
if(___nl__bool__89){ goto label_233;}
#line 1332
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_none(___get_global_string_const(419)));
#line 1332
c_rt_lib0move(&___nl__im__11, translator_priv0new_register(___ref___rec__2, ___nl__im__91));
#line 1332
c_rt_lib0clear(&___nl__im__91);
#line 1332
goto label_233;
#line 1332
label_233:
;
#line 1332
//clear ___nl__bool__89;
#line 1333
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(586)));
#line 1333
c_rt_lib0delete(translator_priv0load_const(___nl__im__92, ___nl__im__11, ___ref___rec__2));
#line 1333
c_rt_lib0clear(&___nl__im__92);
#line 1334
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1334
___nl__int__95 = 1;
#line 1334
___nl__int__95 = -___nl__int__95;
#line 1334
c_rt_lib0move(&___nl__im__96, c_rt_lib0int_new(___nl__int__95));
#line 1334
c_rt_lib0move(&___nl__im__97, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 1334
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__94, ___get_global_string_const(240), ___nl__im__96, ___get_global_string_const(366), ___nl__im__97));
#line 1334
c_rt_lib0clear(&___nl__im__94);
#line 1334
//clear ___nl__int__95;
#line 1334
c_rt_lib0clear(&___nl__im__96);
#line 1334
c_rt_lib0clear(&___nl__im__97);
#line 1334
c_rt_lib0move(&___nl__im__98,___get_global_string_const(1433));
#line 1334
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(241)));
#line 1334
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__101));
#line 1334
c_rt_lib0clear(&___nl__im__101);
#line 1334
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__11));
#line 1334
c_rt_lib0move(&___nl__im__103, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__4));
#line 1334
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(3, ___nl__im__100, ___nl__im__102, ___nl__im__103));
#line 1334
c_rt_lib0clear(&___nl__im__100);
#line 1334
c_rt_lib0clear(&___nl__im__102);
#line 1334
c_rt_lib0clear(&___nl__im__103);
#line 1334
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__93, ___nl__im__98, ___nl__im__99, ___ref___rec__2));
#line 1334
c_rt_lib0clear(&___nl__im__93);
#line 1334
c_rt_lib0clear(&___nl__im__98);
#line 1334
c_rt_lib0clear(&___nl__im__99);
#line 1335
goto label_263;
#line 1335
label_263:
;
#line 1335
//clear ___nl__bool__83;
#line 1336
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(241)));
#line 1337
goto label_323;
#line 1337
label_267:
;
#line 1337
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(273)));
#line 1337
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 1338
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_string_const(1423)));
#line 1338
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_string_const(1422)));
#line 1338
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_string_const(615)));
#line 1338
c_rt_lib0delete(translator_priv0release_field(___nl__im__106, ___nl__im__107, ___nl__im__108, ___ref___rec__2));
#line 1338
c_rt_lib0clear(&___nl__im__106);
#line 1338
c_rt_lib0clear(&___nl__im__107);
#line 1338
c_rt_lib0clear(&___nl__im__108);
#line 1339
goto label_323;
#line 1339
label_278:
;
#line 1339
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(1130)));
#line 1339
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 1340
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(241)));
#line 1340
c_rt_lib0move(&___nl__im__114, c_rt_lib0ov_mk_arg(___get_global_string_const(294), ___nl__im__4));
#line 1340
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(571)));
#line 1340
___nl__int__116 = 1;
#line 1340
___nl__int__116 = -___nl__int__116;
#line 1340
c_rt_lib0move(&___nl__im__117, c_rt_lib0int_new(___nl__int__116));
#line 1340
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 1340
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_mk(5, ___get_global_string_const(244), ___nl__im__113, ___get_global_string_const(78), ___nl__im__114, ___get_global_string_const(571), ___nl__im__115, ___get_global_string_const(576), ___nl__im__117, ___get_global_string_const(591), ___nl__im__118));
#line 1340
c_rt_lib0clear(&___nl__im__113);
#line 1340
c_rt_lib0clear(&___nl__im__114);
#line 1340
c_rt_lib0clear(&___nl__im__115);
#line 1340
//clear ___nl__int__116;
#line 1340
c_rt_lib0clear(&___nl__im__117);
#line 1340
c_rt_lib0clear(&___nl__im__118);
#line 1340
c_rt_lib0move(&___nl__im__111, c_rt_lib0ov_mk_arg(___get_global_string_const(265), ___nl__im__112));
#line 1340
c_rt_lib0clear(&___nl__im__112);
#line 1340
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__111));
#line 1340
c_rt_lib0clear(&___nl__im__111);
#line 1341
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(241)));
#line 1342
goto label_323;
#line 1342
label_301:
;
#line 1342
c_rt_lib0move(&___nl__im__120, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(279)));
#line 1342
c_rt_lib0copy(&___nl__im__119, ___nl__im__120);
#line 1343
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(1423)));
#line 1343
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(1422)));
#line 1343
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(571)));
#line 1343
c_rt_lib0delete(translator_priv0release_variant(___nl__im__121, ___nl__im__122, ___nl__im__123, ___ref___rec__2));
#line 1343
c_rt_lib0clear(&___nl__im__121);
#line 1343
c_rt_lib0clear(&___nl__im__122);
#line 1343
c_rt_lib0clear(&___nl__im__123);
#line 1344
goto label_323;
#line 1344
label_312:
;
#line 1344
c_rt_lib0move(&___nl__im__125, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(277)));
#line 1344
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 1345
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(1423)));
#line 1345
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(1422)));
#line 1345
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(376)));
#line 1345
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__126, ___nl__im__127, ___nl__im__128, ___ref___rec__2));
#line 1345
c_rt_lib0clear(&___nl__im__126);
#line 1345
c_rt_lib0clear(&___nl__im__127);
#line 1345
c_rt_lib0clear(&___nl__im__128);
#line 1346
goto label_323;
#line 1346
label_323:
;
#line 1346
c_rt_lib0clear(&___nl__im__20);
#line 1346
//clear ___nl__bool__21;
#line 1346
c_rt_lib0clear(&___nl__im__22);
#line 1346
c_rt_lib0clear(&___nl__im__23);
#line 1346
c_rt_lib0clear(&___nl__im__24);
#line 1346
c_rt_lib0clear(&___nl__im__25);
#line 1346
c_rt_lib0clear(&___nl__im__26);
#line 1346
c_rt_lib0clear(&___nl__im__27);
#line 1346
c_rt_lib0clear(&___nl__im__46);
#line 1346
c_rt_lib0clear(&___nl__im__47);
#line 1346
c_rt_lib0clear(&___nl__im__51);
#line 1346
c_rt_lib0clear(&___nl__im__52);
#line 1346
c_rt_lib0clear(&___nl__im__81);
#line 1346
c_rt_lib0clear(&___nl__im__82);
#line 1346
c_rt_lib0clear(&___nl__im__104);
#line 1346
c_rt_lib0clear(&___nl__im__105);
#line 1346
c_rt_lib0clear(&___nl__im__109);
#line 1346
c_rt_lib0clear(&___nl__im__110);
#line 1346
c_rt_lib0clear(&___nl__im__119);
#line 1346
c_rt_lib0clear(&___nl__im__120);
#line 1346
c_rt_lib0clear(&___nl__im__124);
#line 1346
c_rt_lib0clear(&___nl__im__125);
#line 1309
___nl__int__129 = 1;
#line 1309
___nl__int__16 = ___nl__int__16 - ___nl__int__129;
#line 1309
//clear ___nl__int__129;
#line 1347
goto label_27;
#line 1347
label_350:
;
#line 1347
c_rt_lib0clear(&___nl__im__0);
#line 1347
//clear ___nl__bool__1;
#line 1347
//clear ___nl__int__3;
#line 1347
c_rt_lib0clear(&___nl__im__4);
#line 1347
c_rt_lib0clear(&___nl__im__11);
#line 1347
//clear ___nl__int__16;
#line 1347
//clear ___nl__bool__18;
#line 1347
c_rt_lib0clear(&___nl__im__20);
#line 1347
//clear ___nl__bool__21;
#line 1347
c_rt_lib0clear(&___nl__im__22);
#line 1347
c_rt_lib0clear(&___nl__im__23);
#line 1347
c_rt_lib0clear(&___nl__im__24);
#line 1347
c_rt_lib0clear(&___nl__im__25);
#line 1347
c_rt_lib0clear(&___nl__im__26);
#line 1347
c_rt_lib0clear(&___nl__im__27);
#line 1347
c_rt_lib0clear(&___nl__im__46);
#line 1347
c_rt_lib0clear(&___nl__im__47);
#line 1347
c_rt_lib0clear(&___nl__im__51);
#line 1347
c_rt_lib0clear(&___nl__im__52);
#line 1347
c_rt_lib0clear(&___nl__im__81);
#line 1347
c_rt_lib0clear(&___nl__im__82);
#line 1347
c_rt_lib0clear(&___nl__im__104);
#line 1347
c_rt_lib0clear(&___nl__im__105);
#line 1347
c_rt_lib0clear(&___nl__im__109);
#line 1347
c_rt_lib0clear(&___nl__im__110);
#line 1347
c_rt_lib0clear(&___nl__im__119);
#line 1347
c_rt_lib0clear(&___nl__im__120);
#line 1347
c_rt_lib0clear(&___nl__im__124);
#line 1347
c_rt_lib0clear(&___nl__im__125);
#line 1347
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
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
#line 1351
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 1352
___nl__int__3 = 0;
#line 1353
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(142)));
#line 1353
___nl__int__6 = 0;
#line 1353
___nl__int__7 = 1;
#line 1353
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 1353
label_6:
;
#line 1353
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 1353
if(___nl__bool__9){ goto label_29;}
#line 1353
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 1353
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 1354
___nl__int__12 = 0;
#line 1354
___nl__bool__11 = ___nl__int__3 > ___nl__int__12;
#line 1354
//clear ___nl__int__12;
#line 1354
___nl__bool__11 = !___nl__bool__11;
#line 1354
if(___nl__bool__11){ goto label_20;}
#line 1354
c_rt_lib0move(&___nl__im__13, string0lf());
#line 1354
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 1354
c_rt_lib0clear(&___nl__im__13);
#line 1354
goto label_20;
#line 1354
label_20:
;
#line 1354
//clear ___nl__bool__11;
#line 1355
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__5));
#line 1356
___nl__int__14 = 1;
#line 1356
___nl__int__3 = ___nl__int__3 + ___nl__int__14;
#line 1356
//clear ___nl__int__14;
#line 1356
c_rt_lib0clear(&___nl__im__5);
#line 1357
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1357
goto label_6;
#line 1357
label_29:
;
#line 1358
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1146)));
#line 1358
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(1145));
#line 1358
if(___nl__bool__16){ goto label_38;}
#line 1360
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(744));
#line 1360
if(___nl__bool__16){ goto label_43;}
#line 1360
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 1360
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1360
nl_die_arg(___nl__im__17);
#line 1358
label_38:
;
#line 1359
c_rt_lib0move(&___nl__im__18, string0lf());
#line 1359
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 1359
c_rt_lib0clear(&___nl__im__18);
#line 1360
goto label_45;
#line 1360
label_43:
;
#line 1361
goto label_45;
#line 1361
label_45:
;
#line 1362
c_rt_lib0clear(&___nl__im__0);
#line 1362
//clear ___nl__int__3;
#line 1362
c_rt_lib0clear(&___nl__im__4);
#line 1362
c_rt_lib0clear(&___nl__im__5);
#line 1362
//clear ___nl__int__6;
#line 1362
//clear ___nl__int__7;
#line 1362
//clear ___nl__int__8;
#line 1362
//clear ___nl__bool__9;
#line 1362
c_rt_lib0clear(&___nl__im__10);
#line 1362
c_rt_lib0clear(&___nl__im__15);
#line 1362
//clear ___nl__bool__16;
#line 1362
c_rt_lib0clear(&___nl__im__17);
#line 1362
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
#line 1366
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(569)));
#line 1366
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1128));
#line 1366
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 1366
c_rt_lib0clear(&___nl__im__4);
#line 1366
c_rt_lib0clear(&___nl__im__5);
#line 1366
___nl__bool__3 = !___nl__bool__3;
#line 1366
___nl__bool__3 = !___nl__bool__3;
#line 1366
if(___nl__bool__3){ goto label_11;}
#line 1366
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 1366
nl_die_arg(___nl__im__6);
#line 1366
goto label_11;
#line 1366
label_11:
;
#line 1366
//clear ___nl__bool__3;
#line 1366
c_rt_lib0clear(&___nl__im__6);
#line 1367
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__2);
#line 1368
___nl__int__8 = translator_priv0get_sim_label(___ref___rec__2);
#line 1369
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1115)));
#line 1369
c_rt_lib0move(&___nl__im__10, translator_priv0dest_val(___nl__im__11, ___ref___rec__2));
#line 1369
c_rt_lib0clear(&___nl__im__11);
#line 1369
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1369
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__10, ___nl__im__12, ___ref___rec__2));
#line 1369
c_rt_lib0clear(&___nl__im__10);
#line 1369
c_rt_lib0clear(&___nl__im__12);
#line 1370
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__8, ___nl__im__9, ___ref___rec__2));
#line 1371
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1117)));
#line 1371
c_rt_lib0delete(translator_priv0print_val(___nl__im__13, ___nl__im__1, ___ref___rec__2));
#line 1371
c_rt_lib0clear(&___nl__im__13);
#line 1372
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__7));
#line 1372
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(270), ___nl__im__15));
#line 1372
c_rt_lib0clear(&___nl__im__15);
#line 1372
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__14));
#line 1372
c_rt_lib0clear(&___nl__im__14);
#line 1373
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__8, ___ref___rec__2));
#line 1374
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1116)));
#line 1374
c_rt_lib0delete(translator_priv0print_val(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1374
c_rt_lib0clear(&___nl__im__16);
#line 1375
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__2));
#line 1375
c_rt_lib0clear(&___nl__im__0);
#line 1375
c_rt_lib0clear(&___nl__im__1);
#line 1375
//clear ___nl__int__7;
#line 1375
//clear ___nl__int__8;
#line 1375
c_rt_lib0clear(&___nl__im__9);
#line 1375
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
#line 1379
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1379
c_rt_lib0move(&___nl__im__3, translator_priv0new_register(___ref___rec__2, ___nl__im__4));
#line 1379
c_rt_lib0clear(&___nl__im__4);
#line 1380
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__0));
#line 1380
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 1380
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(1), ___nl__im__8));
#line 1380
c_rt_lib0clear(&___nl__im__8);
#line 1380
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(216), ___nl__im__1, ___get_global_string_const(241), ___nl__im__6, ___get_global_string_const(110), ___nl__im__7));
#line 1380
c_rt_lib0clear(&___nl__im__6);
#line 1380
c_rt_lib0clear(&___nl__im__7);
#line 1380
c_rt_lib0delete(translator_priv0print_val(___nl__im__5, ___nl__im__3, ___ref___rec__2));
#line 1380
c_rt_lib0clear(&___nl__im__5);
#line 1381
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(267), ___nl__im__3));
#line 1381
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 1381
c_rt_lib0clear(&___nl__im__9);
#line 1381
c_rt_lib0clear(&___nl__im__0);
#line 1381
c_rt_lib0clear(&___nl__im__1);
#line 1381
c_rt_lib0clear(&___nl__im__3);
#line 1381
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
#line 1385
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(365)));
#line 1386
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1386
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(1088));
#line 1386
c_rt_lib0clear(&___nl__im__4);
#line 1386
___nl__bool__3 = !___nl__bool__3;
#line 1386
___nl__bool__3 = !___nl__bool__3;
#line 1386
if(___nl__bool__3){ goto label_25;}
#line 1387
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__0, ___ref___rec__1));
#line 1388
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 1388
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1388
___nl__im_ptr__10 = NULL;
#line 1388
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(220)));
#line 1388
c_rt_lib0clear(&___nl__im__9);
#line 1388
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1388
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1388
___nl__im_ptr__13 = NULL;
#line 1388
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(429)));
#line 1388
c_rt_lib0clear(&___nl__im__12);
#line 1388
c_rt_lib0move(&___nl__im__7, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__11));
#line 1388
c_rt_lib0clear(&___nl__im__8);
#line 1388
c_rt_lib0clear(&___nl__im__11);
#line 1388
c_rt_lib0move(&___nl__im__6, translator_priv0get_cast(___nl__im__5, ___nl__im__7, ___ref___rec__1));
#line 1388
c_rt_lib0clear(&___nl__im__7);
#line 1389
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__6));
#line 1390
goto label_25;
#line 1390
label_25:
;
#line 1390
//clear ___nl__bool__3;
#line 1390
c_rt_lib0clear(&___nl__im__5);
#line 1390
c_rt_lib0clear(&___nl__im__6);
#line 1391
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__2, ___ref___rec__1));
#line 1391
c_rt_lib0clear(&___nl__im__0);
#line 1391
c_rt_lib0clear(&___nl__im__2);
#line 1391
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
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
#line 1395
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1395
___nl__int__4 = 1;
#line 1395
___nl__int__4 = -___nl__int__4;
#line 1395
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__4));
#line 1395
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 1395
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__3, ___get_global_string_const(240), ___nl__im__5, ___get_global_string_const(366), ___nl__im__6));
#line 1395
c_rt_lib0clear(&___nl__im__3);
#line 1395
//clear ___nl__int__4;
#line 1395
c_rt_lib0clear(&___nl__im__5);
#line 1395
c_rt_lib0clear(&___nl__im__6);
#line 1396
___nl__im_ptr__9 = &((*___ref___rec__1).result0field);
#line 1396
c_rt_lib0copy(&___nl__im__8, (*___nl__im_ptr__9));
#line 1396
___nl__im_ptr__9 = NULL;
#line 1396
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(236)));
#line 1396
c_rt_lib0clear(&___nl__im__8);
#line 1397
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(245));
#line 1397
___nl__bool__10 = !___nl__bool__10;
#line 1397
if(___nl__bool__10){ goto label_64;}
#line 1398
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(245)));
#line 1399
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(240)));
#line 1399
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 1399
c_rt_lib0clear(&___nl__im__14);
#line 1399
___nl__int__15 = c_rt_lib0array_len(___nl__im__7);
#line 1399
___nl__bool__11 = ___nl__int__13 < ___nl__int__15;
#line 1399
//clear ___nl__int__13;
#line 1399
//clear ___nl__int__15;
#line 1399
___nl__bool__12 = !___nl__bool__11;
#line 1399
if(___nl__bool__12){ goto label_37;}
#line 1399
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(240)));
#line 1399
___nl__int__18 = getIntFromImm(___nl__im__19);
#line 1399
c_rt_lib0clear(&___nl__im__19);
#line 1399
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__7, ___nl__int__18));
#line 1399
//clear ___nl__int__18;
#line 1399
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(368)));
#line 1399
c_rt_lib0clear(&___nl__im__17);
#line 1399
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 1399
c_rt_lib0clear(&___nl__im__16);
#line 1399
label_37:
;
#line 1399
//clear ___nl__bool__12;
#line 1399
___nl__bool__11 = !___nl__bool__11;
#line 1399
if(___nl__bool__11){ goto label_61;}
#line 1400
___nl__im_ptr__23 = &((*___ref___rec__1).result0field);
#line 1400
c_rt_lib0copy(&___nl__im__22, (*___nl__im_ptr__23));
#line 1400
___nl__im_ptr__23 = NULL;
#line 1400
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(220)));
#line 1400
c_rt_lib0clear(&___nl__im__22);
#line 1400
___nl__im_ptr__26 = &((*___ref___rec__1).logic0field);
#line 1400
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 1400
___nl__im_ptr__26 = NULL;
#line 1400
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(429)));
#line 1400
c_rt_lib0clear(&___nl__im__25);
#line 1400
c_rt_lib0move(&___nl__im__20, translator_priv0var_type_to_reg_type(___nl__im__21, ___nl__im__24));
#line 1400
c_rt_lib0clear(&___nl__im__21);
#line 1400
c_rt_lib0clear(&___nl__im__24);
#line 1400
c_rt_lib0move(&___nl__im__2, translator_priv0new_register(___ref___rec__1, ___nl__im__20));
#line 1400
c_rt_lib0clear(&___nl__im__20);
#line 1401
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(245)));
#line 1401
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__27, ___ref___rec__1));
#line 1401
c_rt_lib0clear(&___nl__im__27);
#line 1402
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__2));
#line 1403
goto label_61;
#line 1403
label_61:
;
#line 1403
//clear ___nl__bool__11;
#line 1404
goto label_64;
#line 1404
label_64:
;
#line 1404
//clear ___nl__bool__10;
#line 1405
___nl__im_ptr__30 = &((*___ref___rec__1).logic0field);
#line 1405
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 1405
___nl__im_ptr__30 = NULL;
#line 1405
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(237)));
#line 1405
c_rt_lib0clear(&___nl__im__29);
#line 1405
___nl__int__32 = 0;
#line 1405
___nl__int__33 = 1;
#line 1405
___nl__int__34 = c_rt_lib0array_len(___nl__im__28);
#line 1405
label_74:
;
#line 1405
___nl__bool__35 = ___nl__int__32 >= ___nl__int__34;
#line 1405
if(___nl__bool__35){ goto label_127;}
#line 1405
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__28, ___nl__int__32));
#line 1405
c_rt_lib0copy(&___nl__im__31, ___nl__im__36);
#line 1406
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(240)));
#line 1406
___nl__int__39 = getIntFromImm(___nl__im__40);
#line 1406
c_rt_lib0clear(&___nl__im__40);
#line 1406
___nl__int__41 = c_rt_lib0array_len(___nl__im__7);
#line 1406
___nl__bool__37 = ___nl__int__39 < ___nl__int__41;
#line 1406
//clear ___nl__int__39;
#line 1406
//clear ___nl__int__41;
#line 1406
___nl__bool__38 = !___nl__bool__37;
#line 1406
if(___nl__bool__38){ goto label_97;}
#line 1406
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(240)));
#line 1406
___nl__int__44 = getIntFromImm(___nl__im__45);
#line 1406
c_rt_lib0clear(&___nl__im__45);
#line 1406
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__7, ___nl__int__44));
#line 1406
//clear ___nl__int__44;
#line 1406
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_string_const(368)));
#line 1406
c_rt_lib0clear(&___nl__im__43);
#line 1406
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__42, ___get_global_string_const(39));
#line 1406
c_rt_lib0clear(&___nl__im__42);
#line 1406
label_97:
;
#line 1406
//clear ___nl__bool__38;
#line 1406
___nl__bool__37 = !___nl__bool__37;
#line 1406
if(___nl__bool__37){ goto label_104;}
#line 1406
//clear ___nl__bool__37;
#line 1406
goto label_124;
#line 1406
goto label_104;
#line 1406
label_104:
;
#line 1406
//clear ___nl__bool__37;
#line 1407
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(240)));
#line 1407
___nl__int__47 = getIntFromImm(___nl__im__48);
#line 1407
c_rt_lib0clear(&___nl__im__48);
#line 1407
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(240)));
#line 1407
___nl__int__49 = getIntFromImm(___nl__im__50);
#line 1407
c_rt_lib0clear(&___nl__im__50);
#line 1407
___nl__bool__46 = ___nl__int__47 == ___nl__int__49;
#line 1407
//clear ___nl__int__47;
#line 1407
//clear ___nl__int__49;
#line 1407
___nl__bool__46 = !___nl__bool__46;
#line 1407
if(___nl__bool__46){ goto label_120;}
#line 1407
//clear ___nl__bool__46;
#line 1407
goto label_124;
#line 1407
goto label_120;
#line 1407
label_120:
;
#line 1407
//clear ___nl__bool__46;
#line 1408
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__31, ___ref___rec__1));
#line 1408
c_rt_lib0clear(&___nl__im__31);
#line 1408
label_124:
;
#line 1409
___nl__int__32 = ___nl__int__32 + ___nl__int__33;
#line 1409
goto label_74;
#line 1409
label_127:
;
#line 1410
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(266), ___nl__im__0));
#line 1410
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__51));
#line 1410
c_rt_lib0clear(&___nl__im__51);
#line 1410
c_rt_lib0clear(&___nl__im__0);
#line 1410
c_rt_lib0clear(&___nl__im__2);
#line 1410
c_rt_lib0clear(&___nl__im__7);
#line 1410
c_rt_lib0clear(&___nl__im__28);
#line 1410
c_rt_lib0clear(&___nl__im__31);
#line 1410
//clear ___nl__int__32;
#line 1410
//clear ___nl__int__33;
#line 1410
//clear ___nl__int__34;
#line 1410
//clear ___nl__bool__35;
#line 1410
c_rt_lib0clear(&___nl__im__36);
#line 1410
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
#line 1414
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1414
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(516));
#line 1414
c_rt_lib0clear(&___nl__im__3);
#line 1414
___nl__bool__2 = !___nl__bool__2;
#line 1414
if(___nl__bool__2){ goto label_16;}
#line 1415
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1415
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1415
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(516)));
#line 1415
c_rt_lib0clear(&___nl__im__6);
#line 1415
c_rt_lib0clear(&___nl__im__7);
#line 1415
c_rt_lib0move(&___nl__im__4, translator_priv0get_var_register(___nl__im__5, ___ref___rec__1));
#line 1415
c_rt_lib0clear(&___nl__im__5);
#line 1415
c_rt_lib0clear(&___nl__im__0);
#line 1415
//clear ___nl__bool__2;
#line 1415
return ___nl__im__4;
#line 1416
goto label_16;
#line 1416
label_16:
;
#line 1416
//clear ___nl__bool__2;
#line 1416
c_rt_lib0clear(&___nl__im__4);
#line 1417
c_rt_lib0move(&___nl__im__8, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1418
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1419
label_21:
;
#line 1419
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(7));
#line 1419
___nl__bool__10 = !___nl__bool__10;
#line 1419
if(___nl__bool__10){ goto label_35;}
#line 1420
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1420
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1420
___nl__im_ptr__13 = NULL;
#line 1420
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(429)));
#line 1420
c_rt_lib0clear(&___nl__im__12);
#line 1420
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(7)));
#line 1420
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__11, ___nl__im__14));
#line 1420
c_rt_lib0clear(&___nl__im__11);
#line 1420
c_rt_lib0clear(&___nl__im__14);
#line 1421
goto label_21;
#line 1421
label_35:
;
#line 1423
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1423
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(254));
#line 1423
c_rt_lib0clear(&___nl__im__18);
#line 1423
___nl__bool__17 = !___nl__bool__16;
#line 1423
if(___nl__bool__17){ goto label_50;}
#line 1423
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1423
___nl__im_ptr__22 = &((*___ref___rec__1).logic0field);
#line 1423
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1423
___nl__im_ptr__22 = NULL;
#line 1423
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(429)));
#line 1423
c_rt_lib0clear(&___nl__im__21);
#line 1423
___nl__bool__16 = tct0is_own_type(___nl__im__19, ___nl__im__20);
#line 1423
c_rt_lib0clear(&___nl__im__19);
#line 1423
c_rt_lib0clear(&___nl__im__20);
#line 1423
label_50:
;
#line 1423
//clear ___nl__bool__17;
#line 1423
___nl__bool__16 = !___nl__bool__16;
#line 1423
if(___nl__bool__16){ goto label_56;}
#line 1424
c_rt_lib0move(&___nl__im__15, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__8));
#line 1425
goto label_59;
#line 1425
label_56:
;
#line 1426
c_rt_lib0move(&___nl__im__15, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 1427
goto label_59;
#line 1427
label_59:
;
#line 1427
//clear ___nl__bool__16;
#line 1428
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__15, ___ref___rec__1));
#line 1429
c_rt_lib0clear(&___nl__im__0);
#line 1429
c_rt_lib0clear(&___nl__im__8);
#line 1429
c_rt_lib0clear(&___nl__im__9);
#line 1429
//clear ___nl__bool__10;
#line 1429
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
#line 1434
c_rt_lib0move(&___nl__im__5, nlasm0is_empty(___nl__im__1));
#line 1434
___nl__bool__4 = c_rt_lib0check_true_native(___nl__im__5);
#line 1434
c_rt_lib0clear(&___nl__im__5);
#line 1434
___nl__bool__4 = !___nl__bool__4;
#line 1434
if(___nl__bool__4){ goto label_7;}
#line 1434
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 1434
goto label_7;
#line 1434
label_7:
;
#line 1434
//clear ___nl__bool__4;
#line 1435
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__3));
#line 1436
c_rt_lib0clear(&___nl__im__0);
#line 1436
c_rt_lib0clear(&___nl__im__2);
#line 1436
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
#line 1440
c_rt_lib0move(&___nl__im__2, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1441
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1441
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(516));
#line 1441
c_rt_lib0clear(&___nl__im__4);
#line 1441
___nl__bool__3 = !___nl__bool__3;
#line 1441
if(___nl__bool__3){ goto label_18;}
#line 1442
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1442
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1442
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(516)));
#line 1442
c_rt_lib0clear(&___nl__im__7);
#line 1442
c_rt_lib0clear(&___nl__im__8);
#line 1442
c_rt_lib0move(&___nl__im__5, translator_priv0get_var_register(___nl__im__6, ___ref___rec__1));
#line 1442
c_rt_lib0clear(&___nl__im__6);
#line 1442
c_rt_lib0clear(&___nl__im__0);
#line 1442
c_rt_lib0clear(&___nl__im__2);
#line 1442
//clear ___nl__bool__3;
#line 1442
return ___nl__im__5;
#line 1443
goto label_18;
#line 1443
label_18:
;
#line 1443
//clear ___nl__bool__3;
#line 1443
c_rt_lib0clear(&___nl__im__5);
#line 1446
c_rt_lib0move(&___nl__im__9, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1447
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1447
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1447
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1447
___nl__im_ptr__14 = NULL;
#line 1447
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(429)));
#line 1447
c_rt_lib0clear(&___nl__im__13);
#line 1447
___nl__bool__10 = tct0is_own_type(___nl__im__11, ___nl__im__12);
#line 1447
c_rt_lib0clear(&___nl__im__11);
#line 1447
c_rt_lib0clear(&___nl__im__12);
#line 1447
___nl__bool__10 = !___nl__bool__10;
#line 1447
if(___nl__bool__10){ goto label_35;}
#line 1448
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1449
goto label_38;
#line 1449
label_35:
;
#line 1450
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1451
goto label_38;
#line 1451
label_38:
;
#line 1451
//clear ___nl__bool__10;
#line 1453
c_rt_lib0clear(&___nl__im__0);
#line 1453
c_rt_lib0clear(&___nl__im__2);
#line 1453
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
#line 1457
___nl__im_ptr__5 = &((*___ref___rec__1).logic0field);
#line 1457
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1457
___nl__im_ptr__5 = NULL;
#line 1457
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(787)));
#line 1457
c_rt_lib0clear(&___nl__im__4);
#line 1457
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__0));
#line 1457
c_rt_lib0clear(&___nl__im__3);
#line 1457
c_rt_lib0clear(&___nl__im__0);
#line 1457
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
#line 1463
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(241));
#line 1463
if(___nl__bool__5){ goto label_7;}
#line 1465
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(433));
#line 1465
if(___nl__bool__5){ goto label_10;}
#line 1465
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 1465
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__3));
#line 1465
nl_die_arg(___nl__im__6);
#line 1463
label_7:
;
#line 1464
c_rt_lib0move(&___nl__im__4, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1465
goto label_13;
#line 1465
label_10:
;
#line 1466
c_rt_lib0move(&___nl__im__4, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__2));
#line 1467
goto label_13;
#line 1467
label_13:
;
#line 1468
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1468
c_rt_lib0move(&___nl__im__8,___get_global_string_const(787));
#line 1468
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___nl__im_ptr__7), ___nl__im__8));
#line 1468
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__0, ___nl__im__4));
#line 1468
c_rt_lib0move(&___nl__string__9,___get_global_string_const(787));
#line 1468
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__7, ___nl__string__9, ___nl__im__8));
#line 1468
___nl__im_ptr__7 = NULL;
#line 1468
c_rt_lib0clear(&___nl__im__8);
#line 1468
c_rt_lib0clear(&___nl__string__9);
#line 1469
___nl__im_ptr__10 = &((*___ref___rec__1).debug0field);
#line 1469
c_rt_lib0move(&___nl__im__11,___get_global_string_const(936));
#line 1469
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 1469
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__0, ___nl__im__4));
#line 1469
c_rt_lib0move(&___nl__string__12,___get_global_string_const(936));
#line 1469
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__12, ___nl__im__11));
#line 1469
___nl__im_ptr__10 = NULL;
#line 1469
c_rt_lib0clear(&___nl__im__11);
#line 1469
c_rt_lib0clear(&___nl__string__12);
#line 1470
c_rt_lib0clear(&___nl__im__0);
#line 1470
c_rt_lib0clear(&___nl__im__2);
#line 1470
c_rt_lib0clear(&___nl__im__3);
#line 1470
//clear ___nl__bool__5;
#line 1470
c_rt_lib0clear(&___nl__im__6);
#line 1470
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
#line 1474
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1474
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1474
___nl__im_ptr__5 = NULL;
#line 1474
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(237)));
#line 1474
c_rt_lib0clear(&___nl__im__4);
#line 1474
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1474
c_rt_lib0clear(&___nl__im__3);
#line 1475
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1475
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 1475
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__1, ___get_global_string_const(240), ___nl__im__7, ___get_global_string_const(366), ___nl__im__8));
#line 1475
c_rt_lib0clear(&___nl__im__7);
#line 1475
c_rt_lib0clear(&___nl__im__8);
#line 1476
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1476
c_rt_lib0move(&___nl__im__10,___get_global_string_const(237));
#line 1476
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1476
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1476
c_rt_lib0move(&___nl__string__11,___get_global_string_const(237));
#line 1476
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1476
___nl__im_ptr__9 = NULL;
#line 1476
c_rt_lib0clear(&___nl__im__10);
#line 1476
c_rt_lib0clear(&___nl__string__11);
#line 1477
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1477
c_rt_lib0move(&___nl__im__13,___get_global_string_const(481));
#line 1477
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1477
___nl__int__14 = 1;
#line 1477
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1477
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1477
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1477
c_rt_lib0move(&___nl__string__17,___get_global_string_const(481));
#line 1477
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1477
___nl__im_ptr__12 = NULL;
#line 1477
c_rt_lib0clear(&___nl__im__13);
#line 1477
//clear ___nl__int__14;
#line 1477
//clear ___nl__int__15;
#line 1477
//clear ___nl__int__16;
#line 1477
c_rt_lib0clear(&___nl__string__17);
#line 1478
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1478
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1415));
#line 1478
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1478
___nl__bool__20 = true;
#line 1478
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1478
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1478
c_rt_lib0move(&___nl__string__22,___get_global_string_const(1415));
#line 1478
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1478
___nl__im_ptr__18 = NULL;
#line 1478
c_rt_lib0clear(&___nl__im__19);
#line 1478
c_rt_lib0clear(&___nl__im__21);
#line 1478
c_rt_lib0clear(&___nl__string__22);
#line 1479
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1479
c_rt_lib0move(&___nl__im__24,___get_global_string_const(237));
#line 1479
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1479
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1479
c_rt_lib0move(&___nl__string__25,___get_global_string_const(237));
#line 1479
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1479
___nl__im_ptr__23 = NULL;
#line 1479
c_rt_lib0clear(&___nl__im__24);
#line 1479
c_rt_lib0clear(&___nl__string__25);
#line 1480
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1480
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1480
___nl__im_ptr__29 = NULL;
#line 1480
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(237)));
#line 1480
c_rt_lib0clear(&___nl__im__28);
#line 1480
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1480
c_rt_lib0clear(&___nl__im__27);
#line 1480
c_rt_lib0clear(&___nl__im__1);
#line 1480
//clear ___nl__int__2;
#line 1480
c_rt_lib0clear(&___nl__im__6);
#line 1480
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
#line 1484
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1484
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1484
___nl__im_ptr__5 = NULL;
#line 1484
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(237)));
#line 1484
c_rt_lib0clear(&___nl__im__4);
#line 1484
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1484
c_rt_lib0clear(&___nl__im__3);
#line 1485
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1485
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(433)));
#line 1485
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__1, ___get_global_string_const(240), ___nl__im__7, ___get_global_string_const(366), ___nl__im__8));
#line 1485
c_rt_lib0clear(&___nl__im__7);
#line 1485
c_rt_lib0clear(&___nl__im__8);
#line 1486
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1486
c_rt_lib0move(&___nl__im__10,___get_global_string_const(237));
#line 1486
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1486
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1486
c_rt_lib0move(&___nl__string__11,___get_global_string_const(237));
#line 1486
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1486
___nl__im_ptr__9 = NULL;
#line 1486
c_rt_lib0clear(&___nl__im__10);
#line 1486
c_rt_lib0clear(&___nl__string__11);
#line 1487
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1487
c_rt_lib0move(&___nl__im__13,___get_global_string_const(481));
#line 1487
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1487
___nl__int__14 = 1;
#line 1487
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1487
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1487
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1487
c_rt_lib0move(&___nl__string__17,___get_global_string_const(481));
#line 1487
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1487
___nl__im_ptr__12 = NULL;
#line 1487
c_rt_lib0clear(&___nl__im__13);
#line 1487
//clear ___nl__int__14;
#line 1487
//clear ___nl__int__15;
#line 1487
//clear ___nl__int__16;
#line 1487
c_rt_lib0clear(&___nl__string__17);
#line 1488
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1488
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1415));
#line 1488
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1488
___nl__bool__20 = true;
#line 1488
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1488
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1488
c_rt_lib0move(&___nl__string__22,___get_global_string_const(1415));
#line 1488
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1488
___nl__im_ptr__18 = NULL;
#line 1488
c_rt_lib0clear(&___nl__im__19);
#line 1488
c_rt_lib0clear(&___nl__im__21);
#line 1488
c_rt_lib0clear(&___nl__string__22);
#line 1489
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1489
c_rt_lib0move(&___nl__im__24,___get_global_string_const(237));
#line 1489
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1489
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1489
c_rt_lib0move(&___nl__string__25,___get_global_string_const(237));
#line 1489
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1489
___nl__im_ptr__23 = NULL;
#line 1489
c_rt_lib0clear(&___nl__im__24);
#line 1489
c_rt_lib0clear(&___nl__string__25);
#line 1490
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1490
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1490
___nl__im_ptr__29 = NULL;
#line 1490
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(237)));
#line 1490
c_rt_lib0clear(&___nl__im__28);
#line 1490
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1490
c_rt_lib0clear(&___nl__im__27);
#line 1490
c_rt_lib0clear(&___nl__im__1);
#line 1490
//clear ___nl__int__2;
#line 1490
c_rt_lib0clear(&___nl__im__6);
#line 1490
return ___nl__im__26;
return NULL;

}

translator0function_logic_t0type translator_priv0save_registers(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 1494
___nl__im_ptr__2 = &((*___ref___rec__0).logic0field);
#line 1494
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 1494
___nl__im_ptr__2 = NULL;
#line 1494
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
#line 1498
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(366)));
#line 1498
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(241));
#line 1498
if(___nl__bool__3){ goto label_8;}
#line 1500
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(433));
#line 1500
if(___nl__bool__3){ goto label_31;}
#line 1500
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 1500
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1500
nl_die_arg(___nl__im__4);
#line 1498
label_8:
;
#line 1499
___nl__im_ptr__8 = &((*___ref___rec__1).logic0field);
#line 1499
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1499
___nl__im_ptr__8 = NULL;
#line 1499
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(1415)));
#line 1499
c_rt_lib0clear(&___nl__im__7);
#line 1499
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(240)));
#line 1499
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 1499
c_rt_lib0clear(&___nl__im__10);
#line 1499
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__9));
#line 1499
___nl__bool__5 = c_rt_lib0check_true_native(___nl__im__11);
#line 1499
c_rt_lib0clear(&___nl__im__6);
#line 1499
//clear ___nl__int__9;
#line 1499
c_rt_lib0clear(&___nl__im__11);
#line 1499
___nl__bool__5 = !___nl__bool__5;
#line 1499
if(___nl__bool__5){ goto label_28;}
#line 1499
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(271), ___nl__im__0));
#line 1499
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__12));
#line 1499
c_rt_lib0clear(&___nl__im__12);
#line 1499
goto label_28;
#line 1499
label_28:
;
#line 1499
//clear ___nl__bool__5;
#line 1500
goto label_33;
#line 1500
label_31:
;
#line 1501
goto label_33;
#line 1501
label_33:
;
#line 1501
c_rt_lib0clear(&___nl__im__0);
#line 1501
c_rt_lib0clear(&___nl__im__2);
#line 1501
//clear ___nl__bool__3;
#line 1501
c_rt_lib0clear(&___nl__im__4);
#line 1501
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
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
INT  ___nl__int__13 = 0;
#line 1505
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(481)));
#line 1505
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1505
c_rt_lib0clear(&___nl__im__3);
#line 1505
label_3:
;
#line 1505
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1505
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1505
___nl__im_ptr__7 = NULL;
#line 1505
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(481)));
#line 1505
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1505
c_rt_lib0clear(&___nl__im__6);
#line 1505
c_rt_lib0clear(&___nl__im__8);
#line 1505
___nl__bool__4 = ___nl__int__2 < ___nl__int__5;
#line 1505
//clear ___nl__int__5;
#line 1505
___nl__bool__4 = !___nl__bool__4;
#line 1505
if(___nl__bool__4){ goto label_28;}
#line 1506
___nl__im_ptr__12 = &((*___ref___rec__1).logic0field);
#line 1506
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 1506
___nl__im_ptr__12 = NULL;
#line 1506
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(237)));
#line 1506
c_rt_lib0clear(&___nl__im__11);
#line 1506
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__10, ___nl__int__2));
#line 1506
c_rt_lib0clear(&___nl__im__10);
#line 1506
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__9, ___ref___rec__1));
#line 1506
c_rt_lib0clear(&___nl__im__9);
#line 1505
___nl__int__13 = 1;
#line 1505
___nl__int__2 = ___nl__int__2 + ___nl__int__13;
#line 1505
//clear ___nl__int__13;
#line 1507
goto label_3;
#line 1507
label_28:
;
#line 1507
c_rt_lib0clear(&___nl__im__0);
#line 1507
//clear ___nl__int__2;
#line 1507
//clear ___nl__bool__4;
#line 1507
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
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT * ___nl__im_ptr__12 = NULL;
bool  ___nl__bool__13 = false;
ImmT * ___nl__im_ptr__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
INT  ___nl__int__18 = 0;
#line 1511
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(481)));
#line 1511
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1511
c_rt_lib0clear(&___nl__im__3);
#line 1511
label_3:
;
#line 1511
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1511
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1511
___nl__im_ptr__7 = NULL;
#line 1511
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(481)));
#line 1511
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1511
c_rt_lib0clear(&___nl__im__6);
#line 1511
c_rt_lib0clear(&___nl__im__8);
#line 1511
___nl__bool__4 = ___nl__int__2 < ___nl__int__5;
#line 1511
//clear ___nl__int__5;
#line 1511
___nl__bool__4 = !___nl__bool__4;
#line 1511
if(___nl__bool__4){ goto label_41;}
#line 1512
___nl__im_ptr__12 = &((*___ref___rec__1).logic0field);
#line 1512
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 1512
___nl__im_ptr__12 = NULL;
#line 1512
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(237)));
#line 1512
c_rt_lib0clear(&___nl__im__11);
#line 1512
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__10, ___nl__int__2));
#line 1512
c_rt_lib0clear(&___nl__im__10);
#line 1512
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__9, ___ref___rec__1));
#line 1512
c_rt_lib0clear(&___nl__im__9);
#line 1513
___nl__bool__13 = false;
#line 1513
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1513
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1415));
#line 1513
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___nl__im_ptr__14), ___nl__im__15));
#line 1513
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 1513
c_rt_lib0array_set(&___nl__im__15, ___nl__int__2, ___nl__im__16);
#line 1513
c_rt_lib0move(&___nl__string__17,___get_global_string_const(1415));
#line 1513
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__14, ___nl__string__17, ___nl__im__15));
#line 1513
___nl__im_ptr__14 = NULL;
#line 1513
//clear ___nl__bool__13;
#line 1513
c_rt_lib0clear(&___nl__im__15);
#line 1513
c_rt_lib0clear(&___nl__im__16);
#line 1513
c_rt_lib0clear(&___nl__string__17);
#line 1511
___nl__int__18 = 1;
#line 1511
___nl__int__2 = ___nl__int__2 + ___nl__int__18;
#line 1511
//clear ___nl__int__18;
#line 1514
goto label_3;
#line 1514
label_41:
;
#line 1514
c_rt_lib0clear(&___nl__im__0);
#line 1514
//clear ___nl__int__2;
#line 1514
//clear ___nl__bool__4;
#line 1514
return NULL;
return NULL;

}

ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1) {
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 1518
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 1518
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(268), ___nl__im__3));
#line 1518
c_rt_lib0clear(&___nl__im__3);
#line 1518
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__2));
#line 1518
c_rt_lib0clear(&___nl__im__2);
#line 1518
//clear ___nl__int__0;
#line 1518
return NULL;
return NULL;

}

nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
INT * ___nl__int_ptr__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT * ___nl__int_ptr__4 = NULL;
#line 1522
___nl__int_ptr__1 = &((*___ref___rec__0).label_nr0field);
#line 1522
___nl__int__2 = 1;
#line 1522
(*___nl__int_ptr__1) = (*___nl__int_ptr__1) + ___nl__int__2;
#line 1522
___nl__int_ptr__1 = NULL;
#line 1522
//clear ___nl__int__2;
#line 1523
___nl__int_ptr__4 = &((*___ref___rec__0).label_nr0field);
#line 1523
___nl__int__3 = (*___nl__int_ptr__4);
#line 1523
___nl__int_ptr__4 = NULL;
#line 1523
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
#line 1527
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1527
___nl__im_ptr__6 = &((*___ref___rec__1).logic0field);
#line 1527
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1527
___nl__im_ptr__6 = NULL;
#line 1527
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(429)));
#line 1527
c_rt_lib0clear(&___nl__im__5);
#line 1527
c_rt_lib0move(&___nl__im__2, translator_priv0var_type_to_reg_type(___nl__im__3, ___nl__im__4));
#line 1527
c_rt_lib0clear(&___nl__im__3);
#line 1527
c_rt_lib0clear(&___nl__im__4);
#line 1527
c_rt_lib0clear(&___nl__im__0);
#line 1527
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
#line 1531
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1531
___nl__bool__3 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__1);
#line 1531
c_rt_lib0clear(&___nl__im__4);
#line 1531
___nl__bool__3 = !___nl__bool__3;
#line 1531
if(___nl__bool__3){ goto label_9;}
#line 1532
c_rt_lib0clear(&___nl__im__1);
#line 1532
//clear ___nl__bool__3;
#line 1532
return ___nl__im__0;
#line 1533
goto label_9;
#line 1533
label_9:
;
#line 1533
//clear ___nl__bool__3;
#line 1535
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(366)));
#line 1535
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(241));
#line 1535
if(___nl__bool__7){ goto label_19;}
#line 1537
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(433));
#line 1537
if(___nl__bool__7){ goto label_22;}
#line 1537
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 1537
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 1537
nl_die_arg(___nl__im__8);
#line 1535
label_19:
;
#line 1536
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__2, ___nl__im__1));
#line 1537
goto label_25;
#line 1537
label_22:
;
#line 1538
c_rt_lib0move(&___nl__im__5, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__1));
#line 1539
goto label_25;
#line 1539
label_25:
;
#line 1540
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__0, ___ref___rec__2));
#line 1541
c_rt_lib0clear(&___nl__im__0);
#line 1541
c_rt_lib0clear(&___nl__im__1);
#line 1541
c_rt_lib0clear(&___nl__im__6);
#line 1541
//clear ___nl__bool__7;
#line 1541
c_rt_lib0clear(&___nl__im__8);
#line 1541
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
#line 1545
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1545
if(___nl__bool__2){ goto label_33;}
#line 1547
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1547
if(___nl__bool__2){ goto label_45;}
#line 1549
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1549
if(___nl__bool__2){ goto label_60;}
#line 1551
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1551
if(___nl__bool__2){ goto label_78;}
#line 1553
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1553
if(___nl__bool__2){ goto label_99;}
#line 1555
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1555
if(___nl__bool__2){ goto label_123;}
#line 1557
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1557
if(___nl__bool__2){ goto label_150;}
#line 1559
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1559
if(___nl__bool__2){ goto label_180;}
#line 1561
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1561
if(___nl__bool__2){ goto label_213;}
#line 1576
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1576
if(___nl__bool__2){ goto label_511;}
#line 1578
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 1578
if(___nl__bool__2){ goto label_546;}
#line 1580
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 1580
if(___nl__bool__2){ goto label_582;}
#line 1582
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1582
if(___nl__bool__2){ goto label_619;}
#line 1584
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 1584
if(___nl__bool__2){ goto label_657;}
#line 1586
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1586
if(___nl__bool__2){ goto label_696;}
#line 1586
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1586
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1586
nl_die_arg(___nl__im__3);
#line 1545
label_33:
;
#line 1545
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1545
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1546
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
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
return ___nl__im__6;
#line 1547
goto label_736;
#line 1547
label_45:
;
#line 1547
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1547
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1548
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(568), ___nl__im__0));
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
return ___nl__im__9;
#line 1549
goto label_736;
#line 1549
label_60:
;
#line 1549
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1549
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1550
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
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
return ___nl__im__12;
#line 1551
goto label_736;
#line 1551
label_78:
;
#line 1551
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1551
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1552
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(143), ___nl__im__0));
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
return ___nl__im__15;
#line 1553
goto label_736;
#line 1553
label_99:
;
#line 1553
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1553
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1554
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
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
return ___nl__im__18;
#line 1555
goto label_736;
#line 1555
label_123:
;
#line 1555
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1555
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1556
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(142), ___nl__im__0));
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
return ___nl__im__21;
#line 1557
goto label_736;
#line 1557
label_150:
;
#line 1557
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 1557
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 1558
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
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
return ___nl__im__24;
#line 1559
goto label_736;
#line 1559
label_180:
;
#line 1559
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1559
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1560
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(572), ___nl__im__0));
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
return ___nl__im__27;
#line 1561
goto label_736;
#line 1561
label_213:
;
#line 1561
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1561
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1562
c_rt_lib0move(&___nl__im__31,___get_global_string_const(32));
#line 1562
___nl__bool__30 = c_rt_lib0eq(___nl__im__28, ___nl__im__31);
#line 1562
c_rt_lib0clear(&___nl__im__31);
#line 1562
___nl__bool__30 = !___nl__bool__30;
#line 1562
if(___nl__bool__30){ goto label_255;}
#line 1563
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1563
c_rt_lib0clear(&___nl__im__0);
#line 1563
c_rt_lib0clear(&___nl__im__1);
#line 1563
//clear ___nl__bool__2;
#line 1563
c_rt_lib0clear(&___nl__im__3);
#line 1563
c_rt_lib0clear(&___nl__im__4);
#line 1563
c_rt_lib0clear(&___nl__im__5);
#line 1563
c_rt_lib0clear(&___nl__im__6);
#line 1563
c_rt_lib0clear(&___nl__im__7);
#line 1563
c_rt_lib0clear(&___nl__im__8);
#line 1563
c_rt_lib0clear(&___nl__im__9);
#line 1563
c_rt_lib0clear(&___nl__im__10);
#line 1563
c_rt_lib0clear(&___nl__im__11);
#line 1563
c_rt_lib0clear(&___nl__im__12);
#line 1563
c_rt_lib0clear(&___nl__im__13);
#line 1563
c_rt_lib0clear(&___nl__im__14);
#line 1563
c_rt_lib0clear(&___nl__im__15);
#line 1563
c_rt_lib0clear(&___nl__im__16);
#line 1563
c_rt_lib0clear(&___nl__im__17);
#line 1563
c_rt_lib0clear(&___nl__im__18);
#line 1563
c_rt_lib0clear(&___nl__im__19);
#line 1563
c_rt_lib0clear(&___nl__im__20);
#line 1563
c_rt_lib0clear(&___nl__im__21);
#line 1563
c_rt_lib0clear(&___nl__im__22);
#line 1563
c_rt_lib0clear(&___nl__im__23);
#line 1563
c_rt_lib0clear(&___nl__im__24);
#line 1563
c_rt_lib0clear(&___nl__im__25);
#line 1563
c_rt_lib0clear(&___nl__im__26);
#line 1563
c_rt_lib0clear(&___nl__im__27);
#line 1563
c_rt_lib0clear(&___nl__im__28);
#line 1563
c_rt_lib0clear(&___nl__im__29);
#line 1563
//clear ___nl__bool__30;
#line 1563
return ___nl__im__32;
#line 1564
goto label_470;
#line 1564
label_255:
;
#line 1564
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1564
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(6));
#line 1564
c_rt_lib0clear(&___nl__im__33);
#line 1564
___nl__bool__30 = !___nl__bool__30;
#line 1564
if(___nl__bool__30){ goto label_296;}
#line 1565
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(568), ___nl__im__0));
#line 1565
c_rt_lib0clear(&___nl__im__0);
#line 1565
c_rt_lib0clear(&___nl__im__1);
#line 1565
//clear ___nl__bool__2;
#line 1565
c_rt_lib0clear(&___nl__im__3);
#line 1565
c_rt_lib0clear(&___nl__im__4);
#line 1565
c_rt_lib0clear(&___nl__im__5);
#line 1565
c_rt_lib0clear(&___nl__im__6);
#line 1565
c_rt_lib0clear(&___nl__im__7);
#line 1565
c_rt_lib0clear(&___nl__im__8);
#line 1565
c_rt_lib0clear(&___nl__im__9);
#line 1565
c_rt_lib0clear(&___nl__im__10);
#line 1565
c_rt_lib0clear(&___nl__im__11);
#line 1565
c_rt_lib0clear(&___nl__im__12);
#line 1565
c_rt_lib0clear(&___nl__im__13);
#line 1565
c_rt_lib0clear(&___nl__im__14);
#line 1565
c_rt_lib0clear(&___nl__im__15);
#line 1565
c_rt_lib0clear(&___nl__im__16);
#line 1565
c_rt_lib0clear(&___nl__im__17);
#line 1565
c_rt_lib0clear(&___nl__im__18);
#line 1565
c_rt_lib0clear(&___nl__im__19);
#line 1565
c_rt_lib0clear(&___nl__im__20);
#line 1565
c_rt_lib0clear(&___nl__im__21);
#line 1565
c_rt_lib0clear(&___nl__im__22);
#line 1565
c_rt_lib0clear(&___nl__im__23);
#line 1565
c_rt_lib0clear(&___nl__im__24);
#line 1565
c_rt_lib0clear(&___nl__im__25);
#line 1565
c_rt_lib0clear(&___nl__im__26);
#line 1565
c_rt_lib0clear(&___nl__im__27);
#line 1565
c_rt_lib0clear(&___nl__im__28);
#line 1565
c_rt_lib0clear(&___nl__im__29);
#line 1565
//clear ___nl__bool__30;
#line 1565
c_rt_lib0clear(&___nl__im__32);
#line 1565
return ___nl__im__34;
#line 1566
goto label_470;
#line 1566
label_296:
;
#line 1566
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1566
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(2));
#line 1566
c_rt_lib0clear(&___nl__im__35);
#line 1566
___nl__bool__30 = !___nl__bool__30;
#line 1566
if(___nl__bool__30){ goto label_338;}
#line 1567
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(142), ___nl__im__0));
#line 1567
c_rt_lib0clear(&___nl__im__0);
#line 1567
c_rt_lib0clear(&___nl__im__1);
#line 1567
//clear ___nl__bool__2;
#line 1567
c_rt_lib0clear(&___nl__im__3);
#line 1567
c_rt_lib0clear(&___nl__im__4);
#line 1567
c_rt_lib0clear(&___nl__im__5);
#line 1567
c_rt_lib0clear(&___nl__im__6);
#line 1567
c_rt_lib0clear(&___nl__im__7);
#line 1567
c_rt_lib0clear(&___nl__im__8);
#line 1567
c_rt_lib0clear(&___nl__im__9);
#line 1567
c_rt_lib0clear(&___nl__im__10);
#line 1567
c_rt_lib0clear(&___nl__im__11);
#line 1567
c_rt_lib0clear(&___nl__im__12);
#line 1567
c_rt_lib0clear(&___nl__im__13);
#line 1567
c_rt_lib0clear(&___nl__im__14);
#line 1567
c_rt_lib0clear(&___nl__im__15);
#line 1567
c_rt_lib0clear(&___nl__im__16);
#line 1567
c_rt_lib0clear(&___nl__im__17);
#line 1567
c_rt_lib0clear(&___nl__im__18);
#line 1567
c_rt_lib0clear(&___nl__im__19);
#line 1567
c_rt_lib0clear(&___nl__im__20);
#line 1567
c_rt_lib0clear(&___nl__im__21);
#line 1567
c_rt_lib0clear(&___nl__im__22);
#line 1567
c_rt_lib0clear(&___nl__im__23);
#line 1567
c_rt_lib0clear(&___nl__im__24);
#line 1567
c_rt_lib0clear(&___nl__im__25);
#line 1567
c_rt_lib0clear(&___nl__im__26);
#line 1567
c_rt_lib0clear(&___nl__im__27);
#line 1567
c_rt_lib0clear(&___nl__im__28);
#line 1567
c_rt_lib0clear(&___nl__im__29);
#line 1567
//clear ___nl__bool__30;
#line 1567
c_rt_lib0clear(&___nl__im__32);
#line 1567
c_rt_lib0clear(&___nl__im__34);
#line 1567
return ___nl__im__36;
#line 1568
goto label_470;
#line 1568
label_338:
;
#line 1568
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1568
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__37, ___get_global_string_const(13));
#line 1568
c_rt_lib0clear(&___nl__im__37);
#line 1568
___nl__bool__30 = !___nl__bool__30;
#line 1568
if(___nl__bool__30){ goto label_381;}
#line 1569
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(572), ___nl__im__0));
#line 1569
c_rt_lib0clear(&___nl__im__0);
#line 1569
c_rt_lib0clear(&___nl__im__1);
#line 1569
//clear ___nl__bool__2;
#line 1569
c_rt_lib0clear(&___nl__im__3);
#line 1569
c_rt_lib0clear(&___nl__im__4);
#line 1569
c_rt_lib0clear(&___nl__im__5);
#line 1569
c_rt_lib0clear(&___nl__im__6);
#line 1569
c_rt_lib0clear(&___nl__im__7);
#line 1569
c_rt_lib0clear(&___nl__im__8);
#line 1569
c_rt_lib0clear(&___nl__im__9);
#line 1569
c_rt_lib0clear(&___nl__im__10);
#line 1569
c_rt_lib0clear(&___nl__im__11);
#line 1569
c_rt_lib0clear(&___nl__im__12);
#line 1569
c_rt_lib0clear(&___nl__im__13);
#line 1569
c_rt_lib0clear(&___nl__im__14);
#line 1569
c_rt_lib0clear(&___nl__im__15);
#line 1569
c_rt_lib0clear(&___nl__im__16);
#line 1569
c_rt_lib0clear(&___nl__im__17);
#line 1569
c_rt_lib0clear(&___nl__im__18);
#line 1569
c_rt_lib0clear(&___nl__im__19);
#line 1569
c_rt_lib0clear(&___nl__im__20);
#line 1569
c_rt_lib0clear(&___nl__im__21);
#line 1569
c_rt_lib0clear(&___nl__im__22);
#line 1569
c_rt_lib0clear(&___nl__im__23);
#line 1569
c_rt_lib0clear(&___nl__im__24);
#line 1569
c_rt_lib0clear(&___nl__im__25);
#line 1569
c_rt_lib0clear(&___nl__im__26);
#line 1569
c_rt_lib0clear(&___nl__im__27);
#line 1569
c_rt_lib0clear(&___nl__im__28);
#line 1569
c_rt_lib0clear(&___nl__im__29);
#line 1569
//clear ___nl__bool__30;
#line 1569
c_rt_lib0clear(&___nl__im__32);
#line 1569
c_rt_lib0clear(&___nl__im__34);
#line 1569
c_rt_lib0clear(&___nl__im__36);
#line 1569
return ___nl__im__38;
#line 1570
goto label_470;
#line 1570
label_381:
;
#line 1570
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1570
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(4));
#line 1570
c_rt_lib0clear(&___nl__im__39);
#line 1570
___nl__bool__30 = !___nl__bool__30;
#line 1570
if(___nl__bool__30){ goto label_425;}
#line 1571
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(143), ___nl__im__0));
#line 1571
c_rt_lib0clear(&___nl__im__0);
#line 1571
c_rt_lib0clear(&___nl__im__1);
#line 1571
//clear ___nl__bool__2;
#line 1571
c_rt_lib0clear(&___nl__im__3);
#line 1571
c_rt_lib0clear(&___nl__im__4);
#line 1571
c_rt_lib0clear(&___nl__im__5);
#line 1571
c_rt_lib0clear(&___nl__im__6);
#line 1571
c_rt_lib0clear(&___nl__im__7);
#line 1571
c_rt_lib0clear(&___nl__im__8);
#line 1571
c_rt_lib0clear(&___nl__im__9);
#line 1571
c_rt_lib0clear(&___nl__im__10);
#line 1571
c_rt_lib0clear(&___nl__im__11);
#line 1571
c_rt_lib0clear(&___nl__im__12);
#line 1571
c_rt_lib0clear(&___nl__im__13);
#line 1571
c_rt_lib0clear(&___nl__im__14);
#line 1571
c_rt_lib0clear(&___nl__im__15);
#line 1571
c_rt_lib0clear(&___nl__im__16);
#line 1571
c_rt_lib0clear(&___nl__im__17);
#line 1571
c_rt_lib0clear(&___nl__im__18);
#line 1571
c_rt_lib0clear(&___nl__im__19);
#line 1571
c_rt_lib0clear(&___nl__im__20);
#line 1571
c_rt_lib0clear(&___nl__im__21);
#line 1571
c_rt_lib0clear(&___nl__im__22);
#line 1571
c_rt_lib0clear(&___nl__im__23);
#line 1571
c_rt_lib0clear(&___nl__im__24);
#line 1571
c_rt_lib0clear(&___nl__im__25);
#line 1571
c_rt_lib0clear(&___nl__im__26);
#line 1571
c_rt_lib0clear(&___nl__im__27);
#line 1571
c_rt_lib0clear(&___nl__im__28);
#line 1571
c_rt_lib0clear(&___nl__im__29);
#line 1571
//clear ___nl__bool__30;
#line 1571
c_rt_lib0clear(&___nl__im__32);
#line 1571
c_rt_lib0clear(&___nl__im__34);
#line 1571
c_rt_lib0clear(&___nl__im__36);
#line 1571
c_rt_lib0clear(&___nl__im__38);
#line 1571
return ___nl__im__40;
#line 1572
goto label_470;
#line 1572
label_425:
;
#line 1572
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1572
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(9));
#line 1572
c_rt_lib0clear(&___nl__im__41);
#line 1572
___nl__bool__30 = !___nl__bool__30;
#line 1572
if(___nl__bool__30){ goto label_470;}
#line 1573
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1573
c_rt_lib0clear(&___nl__im__0);
#line 1573
c_rt_lib0clear(&___nl__im__1);
#line 1573
//clear ___nl__bool__2;
#line 1573
c_rt_lib0clear(&___nl__im__3);
#line 1573
c_rt_lib0clear(&___nl__im__4);
#line 1573
c_rt_lib0clear(&___nl__im__5);
#line 1573
c_rt_lib0clear(&___nl__im__6);
#line 1573
c_rt_lib0clear(&___nl__im__7);
#line 1573
c_rt_lib0clear(&___nl__im__8);
#line 1573
c_rt_lib0clear(&___nl__im__9);
#line 1573
c_rt_lib0clear(&___nl__im__10);
#line 1573
c_rt_lib0clear(&___nl__im__11);
#line 1573
c_rt_lib0clear(&___nl__im__12);
#line 1573
c_rt_lib0clear(&___nl__im__13);
#line 1573
c_rt_lib0clear(&___nl__im__14);
#line 1573
c_rt_lib0clear(&___nl__im__15);
#line 1573
c_rt_lib0clear(&___nl__im__16);
#line 1573
c_rt_lib0clear(&___nl__im__17);
#line 1573
c_rt_lib0clear(&___nl__im__18);
#line 1573
c_rt_lib0clear(&___nl__im__19);
#line 1573
c_rt_lib0clear(&___nl__im__20);
#line 1573
c_rt_lib0clear(&___nl__im__21);
#line 1573
c_rt_lib0clear(&___nl__im__22);
#line 1573
c_rt_lib0clear(&___nl__im__23);
#line 1573
c_rt_lib0clear(&___nl__im__24);
#line 1573
c_rt_lib0clear(&___nl__im__25);
#line 1573
c_rt_lib0clear(&___nl__im__26);
#line 1573
c_rt_lib0clear(&___nl__im__27);
#line 1573
c_rt_lib0clear(&___nl__im__28);
#line 1573
c_rt_lib0clear(&___nl__im__29);
#line 1573
//clear ___nl__bool__30;
#line 1573
c_rt_lib0clear(&___nl__im__32);
#line 1573
c_rt_lib0clear(&___nl__im__34);
#line 1573
c_rt_lib0clear(&___nl__im__36);
#line 1573
c_rt_lib0clear(&___nl__im__38);
#line 1573
c_rt_lib0clear(&___nl__im__40);
#line 1573
return ___nl__im__42;
#line 1574
goto label_470;
#line 1574
label_470:
;
#line 1574
//clear ___nl__bool__30;
#line 1574
c_rt_lib0clear(&___nl__im__32);
#line 1574
c_rt_lib0clear(&___nl__im__34);
#line 1574
c_rt_lib0clear(&___nl__im__36);
#line 1574
c_rt_lib0clear(&___nl__im__38);
#line 1574
c_rt_lib0clear(&___nl__im__40);
#line 1574
c_rt_lib0clear(&___nl__im__42);
#line 1575
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1575
c_rt_lib0clear(&___nl__im__0);
#line 1575
c_rt_lib0clear(&___nl__im__1);
#line 1575
//clear ___nl__bool__2;
#line 1575
c_rt_lib0clear(&___nl__im__3);
#line 1575
c_rt_lib0clear(&___nl__im__4);
#line 1575
c_rt_lib0clear(&___nl__im__5);
#line 1575
c_rt_lib0clear(&___nl__im__6);
#line 1575
c_rt_lib0clear(&___nl__im__7);
#line 1575
c_rt_lib0clear(&___nl__im__8);
#line 1575
c_rt_lib0clear(&___nl__im__9);
#line 1575
c_rt_lib0clear(&___nl__im__10);
#line 1575
c_rt_lib0clear(&___nl__im__11);
#line 1575
c_rt_lib0clear(&___nl__im__12);
#line 1575
c_rt_lib0clear(&___nl__im__13);
#line 1575
c_rt_lib0clear(&___nl__im__14);
#line 1575
c_rt_lib0clear(&___nl__im__15);
#line 1575
c_rt_lib0clear(&___nl__im__16);
#line 1575
c_rt_lib0clear(&___nl__im__17);
#line 1575
c_rt_lib0clear(&___nl__im__18);
#line 1575
c_rt_lib0clear(&___nl__im__19);
#line 1575
c_rt_lib0clear(&___nl__im__20);
#line 1575
c_rt_lib0clear(&___nl__im__21);
#line 1575
c_rt_lib0clear(&___nl__im__22);
#line 1575
c_rt_lib0clear(&___nl__im__23);
#line 1575
c_rt_lib0clear(&___nl__im__24);
#line 1575
c_rt_lib0clear(&___nl__im__25);
#line 1575
c_rt_lib0clear(&___nl__im__26);
#line 1575
c_rt_lib0clear(&___nl__im__27);
#line 1575
c_rt_lib0clear(&___nl__im__28);
#line 1575
c_rt_lib0clear(&___nl__im__29);
#line 1575
return ___nl__im__43;
#line 1576
goto label_736;
#line 1576
label_511:
;
#line 1577
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(418)));
#line 1577
c_rt_lib0clear(&___nl__im__0);
#line 1577
c_rt_lib0clear(&___nl__im__1);
#line 1577
//clear ___nl__bool__2;
#line 1577
c_rt_lib0clear(&___nl__im__3);
#line 1577
c_rt_lib0clear(&___nl__im__4);
#line 1577
c_rt_lib0clear(&___nl__im__5);
#line 1577
c_rt_lib0clear(&___nl__im__6);
#line 1577
c_rt_lib0clear(&___nl__im__7);
#line 1577
c_rt_lib0clear(&___nl__im__8);
#line 1577
c_rt_lib0clear(&___nl__im__9);
#line 1577
c_rt_lib0clear(&___nl__im__10);
#line 1577
c_rt_lib0clear(&___nl__im__11);
#line 1577
c_rt_lib0clear(&___nl__im__12);
#line 1577
c_rt_lib0clear(&___nl__im__13);
#line 1577
c_rt_lib0clear(&___nl__im__14);
#line 1577
c_rt_lib0clear(&___nl__im__15);
#line 1577
c_rt_lib0clear(&___nl__im__16);
#line 1577
c_rt_lib0clear(&___nl__im__17);
#line 1577
c_rt_lib0clear(&___nl__im__18);
#line 1577
c_rt_lib0clear(&___nl__im__19);
#line 1577
c_rt_lib0clear(&___nl__im__20);
#line 1577
c_rt_lib0clear(&___nl__im__21);
#line 1577
c_rt_lib0clear(&___nl__im__22);
#line 1577
c_rt_lib0clear(&___nl__im__23);
#line 1577
c_rt_lib0clear(&___nl__im__24);
#line 1577
c_rt_lib0clear(&___nl__im__25);
#line 1577
c_rt_lib0clear(&___nl__im__26);
#line 1577
c_rt_lib0clear(&___nl__im__27);
#line 1577
c_rt_lib0clear(&___nl__im__28);
#line 1577
c_rt_lib0clear(&___nl__im__29);
#line 1577
c_rt_lib0clear(&___nl__im__43);
#line 1577
return ___nl__im__44;
#line 1578
goto label_736;
#line 1578
label_546:
;
#line 1579
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1579
c_rt_lib0clear(&___nl__im__0);
#line 1579
c_rt_lib0clear(&___nl__im__1);
#line 1579
//clear ___nl__bool__2;
#line 1579
c_rt_lib0clear(&___nl__im__3);
#line 1579
c_rt_lib0clear(&___nl__im__4);
#line 1579
c_rt_lib0clear(&___nl__im__5);
#line 1579
c_rt_lib0clear(&___nl__im__6);
#line 1579
c_rt_lib0clear(&___nl__im__7);
#line 1579
c_rt_lib0clear(&___nl__im__8);
#line 1579
c_rt_lib0clear(&___nl__im__9);
#line 1579
c_rt_lib0clear(&___nl__im__10);
#line 1579
c_rt_lib0clear(&___nl__im__11);
#line 1579
c_rt_lib0clear(&___nl__im__12);
#line 1579
c_rt_lib0clear(&___nl__im__13);
#line 1579
c_rt_lib0clear(&___nl__im__14);
#line 1579
c_rt_lib0clear(&___nl__im__15);
#line 1579
c_rt_lib0clear(&___nl__im__16);
#line 1579
c_rt_lib0clear(&___nl__im__17);
#line 1579
c_rt_lib0clear(&___nl__im__18);
#line 1579
c_rt_lib0clear(&___nl__im__19);
#line 1579
c_rt_lib0clear(&___nl__im__20);
#line 1579
c_rt_lib0clear(&___nl__im__21);
#line 1579
c_rt_lib0clear(&___nl__im__22);
#line 1579
c_rt_lib0clear(&___nl__im__23);
#line 1579
c_rt_lib0clear(&___nl__im__24);
#line 1579
c_rt_lib0clear(&___nl__im__25);
#line 1579
c_rt_lib0clear(&___nl__im__26);
#line 1579
c_rt_lib0clear(&___nl__im__27);
#line 1579
c_rt_lib0clear(&___nl__im__28);
#line 1579
c_rt_lib0clear(&___nl__im__29);
#line 1579
c_rt_lib0clear(&___nl__im__43);
#line 1579
c_rt_lib0clear(&___nl__im__44);
#line 1579
return ___nl__im__45;
#line 1580
goto label_736;
#line 1580
label_582:
;
#line 1581
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1581
c_rt_lib0clear(&___nl__im__0);
#line 1581
c_rt_lib0clear(&___nl__im__1);
#line 1581
//clear ___nl__bool__2;
#line 1581
c_rt_lib0clear(&___nl__im__3);
#line 1581
c_rt_lib0clear(&___nl__im__4);
#line 1581
c_rt_lib0clear(&___nl__im__5);
#line 1581
c_rt_lib0clear(&___nl__im__6);
#line 1581
c_rt_lib0clear(&___nl__im__7);
#line 1581
c_rt_lib0clear(&___nl__im__8);
#line 1581
c_rt_lib0clear(&___nl__im__9);
#line 1581
c_rt_lib0clear(&___nl__im__10);
#line 1581
c_rt_lib0clear(&___nl__im__11);
#line 1581
c_rt_lib0clear(&___nl__im__12);
#line 1581
c_rt_lib0clear(&___nl__im__13);
#line 1581
c_rt_lib0clear(&___nl__im__14);
#line 1581
c_rt_lib0clear(&___nl__im__15);
#line 1581
c_rt_lib0clear(&___nl__im__16);
#line 1581
c_rt_lib0clear(&___nl__im__17);
#line 1581
c_rt_lib0clear(&___nl__im__18);
#line 1581
c_rt_lib0clear(&___nl__im__19);
#line 1581
c_rt_lib0clear(&___nl__im__20);
#line 1581
c_rt_lib0clear(&___nl__im__21);
#line 1581
c_rt_lib0clear(&___nl__im__22);
#line 1581
c_rt_lib0clear(&___nl__im__23);
#line 1581
c_rt_lib0clear(&___nl__im__24);
#line 1581
c_rt_lib0clear(&___nl__im__25);
#line 1581
c_rt_lib0clear(&___nl__im__26);
#line 1581
c_rt_lib0clear(&___nl__im__27);
#line 1581
c_rt_lib0clear(&___nl__im__28);
#line 1581
c_rt_lib0clear(&___nl__im__29);
#line 1581
c_rt_lib0clear(&___nl__im__43);
#line 1581
c_rt_lib0clear(&___nl__im__44);
#line 1581
c_rt_lib0clear(&___nl__im__45);
#line 1581
return ___nl__im__46;
#line 1582
goto label_736;
#line 1582
label_619:
;
#line 1583
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1583
c_rt_lib0clear(&___nl__im__0);
#line 1583
c_rt_lib0clear(&___nl__im__1);
#line 1583
//clear ___nl__bool__2;
#line 1583
c_rt_lib0clear(&___nl__im__3);
#line 1583
c_rt_lib0clear(&___nl__im__4);
#line 1583
c_rt_lib0clear(&___nl__im__5);
#line 1583
c_rt_lib0clear(&___nl__im__6);
#line 1583
c_rt_lib0clear(&___nl__im__7);
#line 1583
c_rt_lib0clear(&___nl__im__8);
#line 1583
c_rt_lib0clear(&___nl__im__9);
#line 1583
c_rt_lib0clear(&___nl__im__10);
#line 1583
c_rt_lib0clear(&___nl__im__11);
#line 1583
c_rt_lib0clear(&___nl__im__12);
#line 1583
c_rt_lib0clear(&___nl__im__13);
#line 1583
c_rt_lib0clear(&___nl__im__14);
#line 1583
c_rt_lib0clear(&___nl__im__15);
#line 1583
c_rt_lib0clear(&___nl__im__16);
#line 1583
c_rt_lib0clear(&___nl__im__17);
#line 1583
c_rt_lib0clear(&___nl__im__18);
#line 1583
c_rt_lib0clear(&___nl__im__19);
#line 1583
c_rt_lib0clear(&___nl__im__20);
#line 1583
c_rt_lib0clear(&___nl__im__21);
#line 1583
c_rt_lib0clear(&___nl__im__22);
#line 1583
c_rt_lib0clear(&___nl__im__23);
#line 1583
c_rt_lib0clear(&___nl__im__24);
#line 1583
c_rt_lib0clear(&___nl__im__25);
#line 1583
c_rt_lib0clear(&___nl__im__26);
#line 1583
c_rt_lib0clear(&___nl__im__27);
#line 1583
c_rt_lib0clear(&___nl__im__28);
#line 1583
c_rt_lib0clear(&___nl__im__29);
#line 1583
c_rt_lib0clear(&___nl__im__43);
#line 1583
c_rt_lib0clear(&___nl__im__44);
#line 1583
c_rt_lib0clear(&___nl__im__45);
#line 1583
c_rt_lib0clear(&___nl__im__46);
#line 1583
return ___nl__im__47;
#line 1584
goto label_736;
#line 1584
label_657:
;
#line 1585
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1585
c_rt_lib0clear(&___nl__im__0);
#line 1585
c_rt_lib0clear(&___nl__im__1);
#line 1585
//clear ___nl__bool__2;
#line 1585
c_rt_lib0clear(&___nl__im__3);
#line 1585
c_rt_lib0clear(&___nl__im__4);
#line 1585
c_rt_lib0clear(&___nl__im__5);
#line 1585
c_rt_lib0clear(&___nl__im__6);
#line 1585
c_rt_lib0clear(&___nl__im__7);
#line 1585
c_rt_lib0clear(&___nl__im__8);
#line 1585
c_rt_lib0clear(&___nl__im__9);
#line 1585
c_rt_lib0clear(&___nl__im__10);
#line 1585
c_rt_lib0clear(&___nl__im__11);
#line 1585
c_rt_lib0clear(&___nl__im__12);
#line 1585
c_rt_lib0clear(&___nl__im__13);
#line 1585
c_rt_lib0clear(&___nl__im__14);
#line 1585
c_rt_lib0clear(&___nl__im__15);
#line 1585
c_rt_lib0clear(&___nl__im__16);
#line 1585
c_rt_lib0clear(&___nl__im__17);
#line 1585
c_rt_lib0clear(&___nl__im__18);
#line 1585
c_rt_lib0clear(&___nl__im__19);
#line 1585
c_rt_lib0clear(&___nl__im__20);
#line 1585
c_rt_lib0clear(&___nl__im__21);
#line 1585
c_rt_lib0clear(&___nl__im__22);
#line 1585
c_rt_lib0clear(&___nl__im__23);
#line 1585
c_rt_lib0clear(&___nl__im__24);
#line 1585
c_rt_lib0clear(&___nl__im__25);
#line 1585
c_rt_lib0clear(&___nl__im__26);
#line 1585
c_rt_lib0clear(&___nl__im__27);
#line 1585
c_rt_lib0clear(&___nl__im__28);
#line 1585
c_rt_lib0clear(&___nl__im__29);
#line 1585
c_rt_lib0clear(&___nl__im__43);
#line 1585
c_rt_lib0clear(&___nl__im__44);
#line 1585
c_rt_lib0clear(&___nl__im__45);
#line 1585
c_rt_lib0clear(&___nl__im__46);
#line 1585
c_rt_lib0clear(&___nl__im__47);
#line 1585
return ___nl__im__48;
#line 1586
goto label_736;
#line 1586
label_696:
;
#line 1587
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 1587
c_rt_lib0clear(&___nl__im__0);
#line 1587
c_rt_lib0clear(&___nl__im__1);
#line 1587
//clear ___nl__bool__2;
#line 1587
c_rt_lib0clear(&___nl__im__3);
#line 1587
c_rt_lib0clear(&___nl__im__4);
#line 1587
c_rt_lib0clear(&___nl__im__5);
#line 1587
c_rt_lib0clear(&___nl__im__6);
#line 1587
c_rt_lib0clear(&___nl__im__7);
#line 1587
c_rt_lib0clear(&___nl__im__8);
#line 1587
c_rt_lib0clear(&___nl__im__9);
#line 1587
c_rt_lib0clear(&___nl__im__10);
#line 1587
c_rt_lib0clear(&___nl__im__11);
#line 1587
c_rt_lib0clear(&___nl__im__12);
#line 1587
c_rt_lib0clear(&___nl__im__13);
#line 1587
c_rt_lib0clear(&___nl__im__14);
#line 1587
c_rt_lib0clear(&___nl__im__15);
#line 1587
c_rt_lib0clear(&___nl__im__16);
#line 1587
c_rt_lib0clear(&___nl__im__17);
#line 1587
c_rt_lib0clear(&___nl__im__18);
#line 1587
c_rt_lib0clear(&___nl__im__19);
#line 1587
c_rt_lib0clear(&___nl__im__20);
#line 1587
c_rt_lib0clear(&___nl__im__21);
#line 1587
c_rt_lib0clear(&___nl__im__22);
#line 1587
c_rt_lib0clear(&___nl__im__23);
#line 1587
c_rt_lib0clear(&___nl__im__24);
#line 1587
c_rt_lib0clear(&___nl__im__25);
#line 1587
c_rt_lib0clear(&___nl__im__26);
#line 1587
c_rt_lib0clear(&___nl__im__27);
#line 1587
c_rt_lib0clear(&___nl__im__28);
#line 1587
c_rt_lib0clear(&___nl__im__29);
#line 1587
c_rt_lib0clear(&___nl__im__43);
#line 1587
c_rt_lib0clear(&___nl__im__44);
#line 1587
c_rt_lib0clear(&___nl__im__45);
#line 1587
c_rt_lib0clear(&___nl__im__46);
#line 1587
c_rt_lib0clear(&___nl__im__47);
#line 1587
c_rt_lib0clear(&___nl__im__48);
#line 1587
return ___nl__im__49;
#line 1588
goto label_736;
#line 1588
label_736:
;
return NULL;

}

ImmT  translator_priv0print_val_init(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT * ___nl__im_ptr__4 = NULL;
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
bool  ___nl__bool__20 = false;
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
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT * ___nl__im_ptr__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT * ___nl__im_ptr__46 = NULL;
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
ImmT * ___nl__im_ptr__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__string__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
INT  ___nl__int__67 = 0;
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
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
ImmT * ___nl__im_ptr__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT * ___nl__im_ptr__101 = NULL;
ImmT  ___nl__im__102 = NULL;
INT  ___nl__int__103 = 0;
INT  ___nl__int__104 = 0;
INT  ___nl__int__105 = 0;
bool  ___nl__bool__106 = false;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT * ___nl__im_ptr__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT * ___nl__im_ptr__119 = NULL;
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
INT  ___nl__int__123 = 0;
INT  ___nl__int__124 = 0;
INT  ___nl__int__125 = 0;
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
INT  ___nl__int__136 = 0;
INT  ___nl__int__137 = 0;
INT  ___nl__int__138 = 0;
bool  ___nl__bool__139 = false;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT * ___nl__im_ptr__147 = NULL;
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
INT  ___nl__int__158 = 0;
INT  ___nl__int__159 = 0;
INT  ___nl__int__160 = 0;
bool  ___nl__bool__161 = false;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT * ___nl__im_ptr__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
bool  ___nl__bool__177 = false;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
#line 1592
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 1592
___nl__im_ptr__4 = &((*___ref___rec__2).debug0field);
#line 1592
c_rt_lib0copy(&___nl__im__5, ___nl__im__3);
#line 1592
c_rt_lib0hash_set_value_dec(___nl__im_ptr__4, ___get_global_string_const(560), ___nl__im__5);
#line 1592
___nl__im_ptr__4 = NULL;
#line 1592
c_rt_lib0clear(&___nl__im__3);
#line 1592
c_rt_lib0clear(&___nl__im__5);
#line 1593
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1593
___nl__im_ptr__10 = &((*___ref___rec__2).logic0field);
#line 1593
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1593
___nl__im_ptr__10 = NULL;
#line 1593
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(429)));
#line 1593
c_rt_lib0clear(&___nl__im__9);
#line 1593
___nl__bool__6 = tct0is_own_type(___nl__im__7, ___nl__im__8);
#line 1593
c_rt_lib0clear(&___nl__im__7);
#line 1593
c_rt_lib0clear(&___nl__im__8);
#line 1593
___nl__bool__6 = !___nl__bool__6;
#line 1593
___nl__bool__6 = !___nl__bool__6;
#line 1593
if(___nl__bool__6){ goto label_25;}
#line 1594
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 1595
c_rt_lib0clear(&___nl__im__0);
#line 1595
c_rt_lib0clear(&___nl__im__1);
#line 1595
//clear ___nl__bool__6;
#line 1595
return NULL;
#line 1596
goto label_25;
#line 1596
label_25:
;
#line 1596
//clear ___nl__bool__6;
#line 1597
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(241)));
#line 1597
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(243));
#line 1597
if(___nl__bool__12){ goto label_65;}
#line 1599
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(419));
#line 1599
if(___nl__bool__12){ goto label_72;}
#line 1601
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(33));
#line 1601
if(___nl__bool__12){ goto label_78;}
#line 1603
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1109));
#line 1603
if(___nl__bool__12){ goto label_85;}
#line 1605
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1110));
#line 1605
if(___nl__bool__12){ goto label_91;}
#line 1607
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(572));
#line 1607
if(___nl__bool__12){ goto label_97;}
#line 1628
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(516));
#line 1628
if(___nl__bool__12){ goto label_192;}
#line 1630
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1107));
#line 1630
if(___nl__bool__12){ goto label_198;}
#line 1632
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(254));
#line 1632
if(___nl__bool__12){ goto label_204;}
#line 1634
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1111));
#line 1634
if(___nl__bool__12){ goto label_210;}
#line 1636
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1068));
#line 1636
if(___nl__bool__12){ goto label_216;}
#line 1638
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(250));
#line 1638
if(___nl__bool__12){ goto label_222;}
#line 1646
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(251));
#line 1646
if(___nl__bool__12){ goto label_277;}
#line 1672
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1088));
#line 1672
if(___nl__bool__12){ goto label_450;}
#line 1674
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1112));
#line 1674
if(___nl__bool__12){ goto label_454;}
#line 1676
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1113));
#line 1676
if(___nl__bool__12){ goto label_460;}
#line 1678
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1114));
#line 1678
if(___nl__bool__12){ goto label_466;}
#line 1678
c_rt_lib0move(&___nl__im__13,___get_global_string_const(15));
#line 1678
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__11));
#line 1678
nl_die_arg(___nl__im__13);
#line 1597
label_65:
;
#line 1597
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(243)));
#line 1597
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1598
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__14));
#line 1598
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1598
c_rt_lib0clear(&___nl__im__16);
#line 1599
goto label_472;
#line 1599
label_72:
;
#line 1599
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(419)));
#line 1599
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1600
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1600
nl_die_arg(___nl__im__19);
#line 1601
goto label_472;
#line 1601
label_78:
;
#line 1601
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(33)));
#line 1601
___nl__bool__20 = c_rt_lib0check_true_native(___nl__im__21);
#line 1602
c_rt_lib0move(&___nl__im__22, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1602
c_rt_lib0delete(translator_priv0load_const(___nl__im__22, ___nl__im__1, ___ref___rec__2));
#line 1602
c_rt_lib0clear(&___nl__im__22);
#line 1603
goto label_472;
#line 1603
label_85:
;
#line 1603
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1109)));
#line 1603
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1604
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 1604
nl_die_arg(___nl__im__25);
#line 1605
goto label_472;
#line 1605
label_91:
;
#line 1605
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1110)));
#line 1605
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1606
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 1606
nl_die_arg(___nl__im__28);
#line 1607
goto label_472;
#line 1607
label_97:
;
#line 1607
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(572)));
#line 1607
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1610
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(516)));
#line 1610
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(241)));
#line 1610
c_rt_lib0clear(&___nl__im__35);
#line 1610
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__34, ___get_global_string_const(1088));
#line 1610
c_rt_lib0clear(&___nl__im__34);
#line 1610
___nl__bool__33 = !___nl__bool__33;
#line 1610
if(___nl__bool__33){ goto label_110;}
#line 1611
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(365)));
#line 1612
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(8)));
#line 1613
goto label_172;
#line 1613
label_110:
;
#line 1614
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1614
___nl__im_ptr__41 = &((*___ref___rec__2).logic0field);
#line 1614
c_rt_lib0copy(&___nl__im__40, (*___nl__im_ptr__41));
#line 1614
___nl__im_ptr__41 = NULL;
#line 1614
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(429)));
#line 1614
c_rt_lib0clear(&___nl__im__40);
#line 1614
c_rt_lib0move(&___nl__im__37, translator_priv0unwrap_ref(___nl__im__38, ___nl__im__39));
#line 1614
c_rt_lib0clear(&___nl__im__38);
#line 1614
c_rt_lib0clear(&___nl__im__39);
#line 1614
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1614
___nl__im_ptr__46 = &((*___ref___rec__2).logic0field);
#line 1614
c_rt_lib0copy(&___nl__im__45, (*___nl__im_ptr__46));
#line 1614
___nl__im_ptr__46 = NULL;
#line 1614
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(429)));
#line 1614
c_rt_lib0clear(&___nl__im__45);
#line 1614
c_rt_lib0move(&___nl__im__42, translator_priv0unwrap_ref(___nl__im__43, ___nl__im__44));
#line 1614
c_rt_lib0clear(&___nl__im__43);
#line 1614
c_rt_lib0clear(&___nl__im__44);
#line 1614
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__42, ___get_global_string_const(13)));
#line 1614
c_rt_lib0clear(&___nl__im__37);
#line 1614
c_rt_lib0clear(&___nl__im__42);
#line 1615
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(185)));
#line 1615
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value(___nl__im__36, ___nl__im__48));
#line 1615
c_rt_lib0clear(&___nl__im__48);
#line 1615
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(185)));
#line 1615
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value(___nl__im__36, ___nl__im__50));
#line 1615
c_rt_lib0clear(&___nl__im__50);
#line 1615
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__49, ___get_global_string_const(27)));
#line 1615
c_rt_lib0clear(&___nl__im__47);
#line 1615
c_rt_lib0clear(&___nl__im__49);
#line 1616
___nl__im_ptr__55 = &((*___ref___rec__2).logic0field);
#line 1616
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 1616
___nl__im_ptr__55 = NULL;
#line 1616
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(429)));
#line 1616
c_rt_lib0clear(&___nl__im__54);
#line 1616
c_rt_lib0move(&___nl__im__52, translator_priv0var_type_to_reg_type(___nl__im__32, ___nl__im__53));
#line 1616
c_rt_lib0clear(&___nl__im__53);
#line 1616
c_rt_lib0move(&___nl__im__51, translator_priv0new_register(___ref___rec__2, ___nl__im__52));
#line 1616
c_rt_lib0clear(&___nl__im__52);
#line 1617
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(516)));
#line 1617
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__56, ___nl__im__51, ___ref___rec__2));
#line 1617
c_rt_lib0clear(&___nl__im__56);
#line 1618
___nl__bool__57 = false;
#line 1618
___nl__im_ptr__58 = &((*___ref___rec__2).logic0field);
#line 1618
c_rt_lib0move(&___nl__im__59,___get_global_string_const(1415));
#line 1618
c_rt_lib0move(&___nl__im__59, c_rt_lib0get_ref_hash((*___nl__im_ptr__58), ___nl__im__59));
#line 1618
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(240)));
#line 1618
___nl__int__61 = getIntFromImm(___nl__im__62);
#line 1618
c_rt_lib0clear(&___nl__im__62);
#line 1618
c_rt_lib0move(&___nl__im__60, c_rt_lib0bool_to_nl_native(___nl__bool__57));
#line 1618
c_rt_lib0array_set(&___nl__im__59, ___nl__int__61, ___nl__im__60);
#line 1618
c_rt_lib0move(&___nl__string__63,___get_global_string_const(1415));
#line 1618
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__58, ___nl__string__63, ___nl__im__59));
#line 1618
___nl__im_ptr__58 = NULL;
#line 1618
//clear ___nl__bool__57;
#line 1618
c_rt_lib0clear(&___nl__im__59);
#line 1618
c_rt_lib0clear(&___nl__im__60);
#line 1618
//clear ___nl__int__61;
#line 1618
c_rt_lib0clear(&___nl__string__63);
#line 1619
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(294), ___nl__im__51));
#line 1620
goto label_172;
#line 1620
label_172:
;
#line 1620
//clear ___nl__bool__33;
#line 1620
c_rt_lib0clear(&___nl__im__36);
#line 1620
c_rt_lib0clear(&___nl__im__51);
#line 1624
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(185)));
#line 1625
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1625
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(185)));
#line 1625
___nl__int__67 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__68, ___nl__im__69);
#line 1625
c_rt_lib0clear(&___nl__im__68);
#line 1625
c_rt_lib0clear(&___nl__im__69);
#line 1625
c_rt_lib0move(&___nl__im__70, c_rt_lib0int_new(___nl__int__67));
#line 1625
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(5, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__31, ___get_global_string_const(571), ___nl__im__66, ___get_global_string_const(576), ___nl__im__70, ___get_global_string_const(591), ___nl__im__32));
#line 1625
c_rt_lib0clear(&___nl__im__66);
#line 1625
//clear ___nl__int__67;
#line 1625
c_rt_lib0clear(&___nl__im__70);
#line 1625
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(265), ___nl__im__65));
#line 1625
c_rt_lib0clear(&___nl__im__65);
#line 1625
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__64));
#line 1625
c_rt_lib0clear(&___nl__im__64);
#line 1628
goto label_472;
#line 1628
label_192:
;
#line 1628
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(516)));
#line 1628
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 1629
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 1629
nl_die_arg(___nl__im__73);
#line 1630
goto label_472;
#line 1630
label_198:
;
#line 1630
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1107)));
#line 1630
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 1631
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_mk(0));
#line 1631
nl_die_arg(___nl__im__76);
#line 1632
goto label_472;
#line 1632
label_204:
;
#line 1632
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(254)));
#line 1632
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 1633
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_mk(0));
#line 1633
nl_die_arg(___nl__im__79);
#line 1634
goto label_472;
#line 1634
label_210:
;
#line 1634
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1111)));
#line 1634
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1635
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 1635
nl_die_arg(___nl__im__82);
#line 1636
goto label_472;
#line 1636
label_216:
;
#line 1636
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1068)));
#line 1636
c_rt_lib0copy(&___nl__im__83, ___nl__im__84);
#line 1637
c_rt_lib0move(&___nl__im__85, c_rt_lib0array_mk(0));
#line 1637
nl_die_arg(___nl__im__85);
#line 1638
goto label_472;
#line 1638
label_222:
;
#line 1638
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(250)));
#line 1638
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 1639
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(0));
#line 1639
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__90));
#line 1639
c_rt_lib0clear(&___nl__im__90);
#line 1639
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__89));
#line 1639
c_rt_lib0clear(&___nl__im__89);
#line 1639
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__88));
#line 1639
c_rt_lib0clear(&___nl__im__88);
#line 1640
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1640
___nl__im_ptr__96 = &((*___ref___rec__2).logic0field);
#line 1640
c_rt_lib0copy(&___nl__im__95, (*___nl__im_ptr__96));
#line 1640
___nl__im_ptr__96 = NULL;
#line 1640
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__95, ___get_global_string_const(429)));
#line 1640
c_rt_lib0clear(&___nl__im__95);
#line 1640
c_rt_lib0move(&___nl__im__92, translator_priv0unwrap_ref(___nl__im__93, ___nl__im__94));
#line 1640
c_rt_lib0clear(&___nl__im__93);
#line 1640
c_rt_lib0clear(&___nl__im__94);
#line 1640
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1640
___nl__im_ptr__101 = &((*___ref___rec__2).logic0field);
#line 1640
c_rt_lib0copy(&___nl__im__100, (*___nl__im_ptr__101));
#line 1640
___nl__im_ptr__101 = NULL;
#line 1640
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_string_const(429)));
#line 1640
c_rt_lib0clear(&___nl__im__100);
#line 1640
c_rt_lib0move(&___nl__im__97, translator_priv0unwrap_ref(___nl__im__98, ___nl__im__99));
#line 1640
c_rt_lib0clear(&___nl__im__98);
#line 1640
c_rt_lib0clear(&___nl__im__99);
#line 1640
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__97, ___get_global_string_const(2)));
#line 1640
c_rt_lib0clear(&___nl__im__92);
#line 1640
c_rt_lib0clear(&___nl__im__97);
#line 1641
___nl__int__103 = 0;
#line 1641
___nl__int__104 = 1;
#line 1641
___nl__int__105 = c_rt_lib0array_len(___nl__im__86);
#line 1641
label_256:
;
#line 1641
___nl__bool__106 = ___nl__int__103 >= ___nl__int__105;
#line 1641
if(___nl__bool__106){ goto label_275;}
#line 1641
c_rt_lib0move(&___nl__im__107, c_rt_lib0array_get(___nl__im__86, ___nl__int__103));
#line 1641
c_rt_lib0copy(&___nl__im__102, ___nl__im__107);
#line 1642
___nl__im_ptr__112 = &((*___ref___rec__2).logic0field);
#line 1642
c_rt_lib0copy(&___nl__im__111, (*___nl__im_ptr__112));
#line 1642
___nl__im_ptr__112 = NULL;
#line 1642
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_string_const(429)));
#line 1642
c_rt_lib0clear(&___nl__im__111);
#line 1642
c_rt_lib0move(&___nl__im__109, translator_priv0var_type_to_reg_type(___nl__im__91, ___nl__im__110));
#line 1642
c_rt_lib0clear(&___nl__im__110);
#line 1642
c_rt_lib0move(&___nl__im__108, translator_priv0new_register(___ref___rec__2, ___nl__im__109));
#line 1642
c_rt_lib0clear(&___nl__im__109);
#line 1643
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__102, ___nl__im__108, ___ref___rec__2));
#line 1644
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__108, ___ref___rec__2));
#line 1644
c_rt_lib0clear(&___nl__im__102);
#line 1645
___nl__int__103 = ___nl__int__103 + ___nl__int__104;
#line 1645
goto label_256;
#line 1645
label_275:
;
#line 1646
goto label_472;
#line 1646
label_277:
;
#line 1646
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(251)));
#line 1646
c_rt_lib0copy(&___nl__im__113, ___nl__im__114);
#line 1647
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 1647
___nl__im_ptr__119 = &((*___ref___rec__2).logic0field);
#line 1647
c_rt_lib0copy(&___nl__im__118, (*___nl__im_ptr__119));
#line 1647
___nl__im_ptr__119 = NULL;
#line 1647
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__118, ___get_global_string_const(429)));
#line 1647
c_rt_lib0clear(&___nl__im__118);
#line 1647
c_rt_lib0move(&___nl__im__115, translator_priv0unwrap_ref(___nl__im__116, ___nl__im__117));
#line 1647
c_rt_lib0clear(&___nl__im__116);
#line 1647
c_rt_lib0clear(&___nl__im__117);
#line 1648
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__115, ___get_global_string_const(6));
#line 1648
___nl__bool__120 = !___nl__bool__120;
#line 1648
if(___nl__bool__120){ goto label_361;}
#line 1649
c_rt_lib0move(&___nl__im__121, c_rt_lib0array_mk(0));
#line 1650
___nl__int__123 = 0;
#line 1650
___nl__int__124 = 1;
#line 1650
___nl__int__125 = c_rt_lib0array_len(___nl__im__113);
#line 1650
label_296:
;
#line 1650
___nl__bool__126 = ___nl__int__123 >= ___nl__int__125;
#line 1650
if(___nl__bool__126){ goto label_315;}
#line 1650
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_get(___nl__im__113, ___nl__int__123));
#line 1650
c_rt_lib0copy(&___nl__im__122, ___nl__im__127);
#line 1650
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(586)));
#line 1650
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(241)));
#line 1650
c_rt_lib0clear(&___nl__im__130);
#line 1650
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(586)));
#line 1650
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_string_const(241)));
#line 1650
c_rt_lib0clear(&___nl__im__132);
#line 1650
c_rt_lib0move(&___nl__im__128, c_rt_lib0priv_as(___nl__im__131, ___get_global_string_const(1110)));
#line 1650
c_rt_lib0clear(&___nl__im__129);
#line 1650
c_rt_lib0clear(&___nl__im__131);
#line 1650
c_rt_lib0array_push(&___nl__im__121, ___nl__im__128);
#line 1650
c_rt_lib0clear(&___nl__im__128);
#line 1650
c_rt_lib0clear(&___nl__im__122);
#line 1650
___nl__int__123 = ___nl__int__123 + ___nl__int__124;
#line 1650
goto label_296;
#line 1650
label_315:
;
#line 1651
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(790), ___nl__im__121));
#line 1651
c_rt_lib0move(&___nl__im__133, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__134));
#line 1651
c_rt_lib0clear(&___nl__im__134);
#line 1651
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__133));
#line 1651
c_rt_lib0clear(&___nl__im__133);
#line 1652
___nl__int__136 = 0;
#line 1652
___nl__int__137 = 1;
#line 1652
___nl__int__138 = c_rt_lib0array_len(___nl__im__113);
#line 1652
label_324:
;
#line 1652
___nl__bool__139 = ___nl__int__136 >= ___nl__int__138;
#line 1652
if(___nl__bool__139){ goto label_359;}
#line 1652
c_rt_lib0move(&___nl__im__140, c_rt_lib0array_get(___nl__im__113, ___nl__int__136));
#line 1652
c_rt_lib0copy(&___nl__im__135, ___nl__im__140);
#line 1653
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(245)));
#line 1653
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_string_const(110)));
#line 1653
c_rt_lib0clear(&___nl__im__144);
#line 1653
___nl__im_ptr__147 = &((*___ref___rec__2).logic0field);
#line 1653
c_rt_lib0copy(&___nl__im__146, (*___nl__im_ptr__147));
#line 1653
___nl__im_ptr__147 = NULL;
#line 1653
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(429)));
#line 1653
c_rt_lib0clear(&___nl__im__146);
#line 1653
c_rt_lib0move(&___nl__im__142, translator_priv0var_type_to_reg_type(___nl__im__143, ___nl__im__145));
#line 1653
c_rt_lib0clear(&___nl__im__143);
#line 1653
c_rt_lib0clear(&___nl__im__145);
#line 1653
c_rt_lib0move(&___nl__im__141, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__142));
#line 1653
c_rt_lib0clear(&___nl__im__142);
#line 1654
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(586)));
#line 1654
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(241)));
#line 1654
c_rt_lib0clear(&___nl__im__150);
#line 1654
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(586)));
#line 1654
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__152, ___get_global_string_const(241)));
#line 1654
c_rt_lib0clear(&___nl__im__152);
#line 1654
c_rt_lib0move(&___nl__im__148, c_rt_lib0priv_as(___nl__im__151, ___get_global_string_const(1110)));
#line 1654
c_rt_lib0clear(&___nl__im__149);
#line 1654
c_rt_lib0clear(&___nl__im__151);
#line 1655
c_rt_lib0delete(translator_priv0use_field(___nl__im__141, ___nl__im__1, ___nl__im__148, ___ref___rec__2));
#line 1656
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(245)));
#line 1656
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__153, ___nl__im__141, ___ref___rec__2));
#line 1656
c_rt_lib0clear(&___nl__im__153);
#line 1657
c_rt_lib0delete(translator_priv0release_field(___nl__im__141, ___nl__im__1, ___nl__im__148, ___ref___rec__2));
#line 1657
c_rt_lib0clear(&___nl__im__135);
#line 1658
___nl__int__136 = ___nl__int__136 + ___nl__int__137;
#line 1658
goto label_324;
#line 1658
label_359:
;
#line 1659
goto label_423;
#line 1659
label_361:
;
#line 1659
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__115, ___get_global_string_const(4));
#line 1659
___nl__bool__120 = !___nl__bool__120;
#line 1659
if(___nl__bool__120){ goto label_419;}
#line 1660
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_mk(0));
#line 1660
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_mk(2, ___get_global_string_const(244), ___nl__im__1, ___get_global_string_const(78), ___nl__im__156));
#line 1660
c_rt_lib0clear(&___nl__im__156);
#line 1660
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_arg(___get_global_string_const(251), ___nl__im__155));
#line 1660
c_rt_lib0clear(&___nl__im__155);
#line 1660
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__154));
#line 1660
c_rt_lib0clear(&___nl__im__154);
#line 1661
___nl__int__158 = 0;
#line 1661
___nl__int__159 = 1;
#line 1661
___nl__int__160 = c_rt_lib0array_len(___nl__im__113);
#line 1661
label_375:
;
#line 1661
___nl__bool__161 = ___nl__int__158 >= ___nl__int__160;
#line 1661
if(___nl__bool__161){ goto label_417;}
#line 1661
c_rt_lib0move(&___nl__im__162, c_rt_lib0array_get(___nl__im__113, ___nl__int__158));
#line 1661
c_rt_lib0copy(&___nl__im__157, ___nl__im__162);
#line 1662
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(245)));
#line 1662
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_string_const(110)));
#line 1662
c_rt_lib0clear(&___nl__im__166);
#line 1662
___nl__im_ptr__169 = &((*___ref___rec__2).logic0field);
#line 1662
c_rt_lib0copy(&___nl__im__168, (*___nl__im_ptr__169));
#line 1662
___nl__im_ptr__169 = NULL;
#line 1662
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(429)));
#line 1662
c_rt_lib0clear(&___nl__im__168);
#line 1662
c_rt_lib0move(&___nl__im__164, translator_priv0var_type_to_reg_type(___nl__im__165, ___nl__im__167));
#line 1662
c_rt_lib0clear(&___nl__im__165);
#line 1662
c_rt_lib0clear(&___nl__im__167);
#line 1662
c_rt_lib0move(&___nl__im__163, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__164));
#line 1662
c_rt_lib0clear(&___nl__im__164);
#line 1663
c_rt_lib0move(&___nl__im__171, c_rt_lib0ov_mk_none(___get_global_string_const(419)));
#line 1663
c_rt_lib0move(&___nl__im__170, translator_priv0new_register(___ref___rec__2, ___nl__im__171));
#line 1663
c_rt_lib0clear(&___nl__im__171);
#line 1664
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(586)));
#line 1664
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__174, ___get_global_string_const(241)));
#line 1664
c_rt_lib0clear(&___nl__im__174);
#line 1664
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(586)));
#line 1664
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__176, ___get_global_string_const(241)));
#line 1664
c_rt_lib0clear(&___nl__im__176);
#line 1664
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__175, ___get_global_string_const(1110)));
#line 1664
c_rt_lib0clear(&___nl__im__173);
#line 1664
c_rt_lib0clear(&___nl__im__175);
#line 1664
c_rt_lib0delete(translator_priv0load_const(___nl__im__172, ___nl__im__170, ___ref___rec__2));
#line 1664
c_rt_lib0clear(&___nl__im__172);
#line 1665
___nl__bool__177 = true;
#line 1665
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__163, ___nl__im__1, ___nl__im__170, ___nl__bool__177, ___ref___rec__2));
#line 1665
//clear ___nl__bool__177;
#line 1666
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(245)));
#line 1666
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__178, ___nl__im__163, ___ref___rec__2));
#line 1666
c_rt_lib0clear(&___nl__im__178);
#line 1667
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__163, ___nl__im__1, ___nl__im__170, ___ref___rec__2));
#line 1667
c_rt_lib0clear(&___nl__im__157);
#line 1668
___nl__int__158 = ___nl__int__158 + ___nl__int__159;
#line 1668
goto label_375;
#line 1668
label_417:
;
#line 1669
goto label_423;
#line 1669
label_419:
;
#line 1670
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_mk(0));
#line 1670
nl_die_arg(___nl__im__179);
#line 1671
goto label_423;
#line 1671
label_423:
;
#line 1671
//clear ___nl__bool__120;
#line 1671
c_rt_lib0clear(&___nl__im__121);
#line 1671
c_rt_lib0clear(&___nl__im__122);
#line 1671
//clear ___nl__int__123;
#line 1671
//clear ___nl__int__124;
#line 1671
//clear ___nl__int__125;
#line 1671
//clear ___nl__bool__126;
#line 1671
c_rt_lib0clear(&___nl__im__127);
#line 1671
c_rt_lib0clear(&___nl__im__135);
#line 1671
//clear ___nl__int__136;
#line 1671
//clear ___nl__int__137;
#line 1671
//clear ___nl__int__138;
#line 1671
//clear ___nl__bool__139;
#line 1671
c_rt_lib0clear(&___nl__im__140);
#line 1671
c_rt_lib0clear(&___nl__im__141);
#line 1671
c_rt_lib0clear(&___nl__im__148);
#line 1671
c_rt_lib0clear(&___nl__im__157);
#line 1671
//clear ___nl__int__158;
#line 1671
//clear ___nl__int__159;
#line 1671
//clear ___nl__int__160;
#line 1671
//clear ___nl__bool__161;
#line 1671
c_rt_lib0clear(&___nl__im__162);
#line 1671
c_rt_lib0clear(&___nl__im__163);
#line 1671
c_rt_lib0clear(&___nl__im__170);
#line 1671
c_rt_lib0clear(&___nl__im__179);
#line 1672
goto label_472;
#line 1672
label_450:
;
#line 1673
c_rt_lib0move(&___nl__im__180, c_rt_lib0array_mk(0));
#line 1673
nl_die_arg(___nl__im__180);
#line 1674
goto label_472;
#line 1674
label_454:
;
#line 1674
c_rt_lib0move(&___nl__im__182, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1112)));
#line 1674
c_rt_lib0copy(&___nl__im__181, ___nl__im__182);
#line 1675
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_mk(0));
#line 1675
nl_die_arg(___nl__im__183);
#line 1676
goto label_472;
#line 1676
label_460:
;
#line 1676
c_rt_lib0move(&___nl__im__185, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1113)));
#line 1676
c_rt_lib0copy(&___nl__im__184, ___nl__im__185);
#line 1677
c_rt_lib0move(&___nl__im__186, c_rt_lib0array_mk(0));
#line 1677
nl_die_arg(___nl__im__186);
#line 1678
goto label_472;
#line 1678
label_466:
;
#line 1678
c_rt_lib0move(&___nl__im__188, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1114)));
#line 1678
c_rt_lib0copy(&___nl__im__187, ___nl__im__188);
#line 1679
c_rt_lib0move(&___nl__im__189, c_rt_lib0array_mk(0));
#line 1679
nl_die_arg(___nl__im__189);
#line 1680
goto label_472;
#line 1680
label_472:
;
#line 1680
c_rt_lib0clear(&___nl__im__0);
#line 1680
c_rt_lib0clear(&___nl__im__1);
#line 1680
c_rt_lib0clear(&___nl__im__11);
#line 1680
//clear ___nl__bool__12;
#line 1680
c_rt_lib0clear(&___nl__im__13);
#line 1680
//clear ___nl__int__14;
#line 1680
c_rt_lib0clear(&___nl__im__15);
#line 1680
c_rt_lib0clear(&___nl__im__17);
#line 1680
c_rt_lib0clear(&___nl__im__18);
#line 1680
c_rt_lib0clear(&___nl__im__19);
#line 1680
//clear ___nl__bool__20;
#line 1680
c_rt_lib0clear(&___nl__im__21);
#line 1680
c_rt_lib0clear(&___nl__im__23);
#line 1680
c_rt_lib0clear(&___nl__im__24);
#line 1680
c_rt_lib0clear(&___nl__im__25);
#line 1680
c_rt_lib0clear(&___nl__im__26);
#line 1680
c_rt_lib0clear(&___nl__im__27);
#line 1680
c_rt_lib0clear(&___nl__im__28);
#line 1680
c_rt_lib0clear(&___nl__im__29);
#line 1680
c_rt_lib0clear(&___nl__im__30);
#line 1680
c_rt_lib0clear(&___nl__im__31);
#line 1680
c_rt_lib0clear(&___nl__im__32);
#line 1680
c_rt_lib0clear(&___nl__im__71);
#line 1680
c_rt_lib0clear(&___nl__im__72);
#line 1680
c_rt_lib0clear(&___nl__im__73);
#line 1680
c_rt_lib0clear(&___nl__im__74);
#line 1680
c_rt_lib0clear(&___nl__im__75);
#line 1680
c_rt_lib0clear(&___nl__im__76);
#line 1680
c_rt_lib0clear(&___nl__im__77);
#line 1680
c_rt_lib0clear(&___nl__im__78);
#line 1680
c_rt_lib0clear(&___nl__im__79);
#line 1680
c_rt_lib0clear(&___nl__im__80);
#line 1680
c_rt_lib0clear(&___nl__im__81);
#line 1680
c_rt_lib0clear(&___nl__im__82);
#line 1680
c_rt_lib0clear(&___nl__im__83);
#line 1680
c_rt_lib0clear(&___nl__im__84);
#line 1680
c_rt_lib0clear(&___nl__im__85);
#line 1680
c_rt_lib0clear(&___nl__im__86);
#line 1680
c_rt_lib0clear(&___nl__im__87);
#line 1680
c_rt_lib0clear(&___nl__im__91);
#line 1680
c_rt_lib0clear(&___nl__im__102);
#line 1680
//clear ___nl__int__103;
#line 1680
//clear ___nl__int__104;
#line 1680
//clear ___nl__int__105;
#line 1680
//clear ___nl__bool__106;
#line 1680
c_rt_lib0clear(&___nl__im__107);
#line 1680
c_rt_lib0clear(&___nl__im__108);
#line 1680
c_rt_lib0clear(&___nl__im__113);
#line 1680
c_rt_lib0clear(&___nl__im__114);
#line 1680
c_rt_lib0clear(&___nl__im__115);
#line 1680
c_rt_lib0clear(&___nl__im__180);
#line 1680
c_rt_lib0clear(&___nl__im__181);
#line 1680
c_rt_lib0clear(&___nl__im__182);
#line 1680
c_rt_lib0clear(&___nl__im__183);
#line 1680
c_rt_lib0clear(&___nl__im__184);
#line 1680
c_rt_lib0clear(&___nl__im__185);
#line 1680
c_rt_lib0clear(&___nl__im__186);
#line 1680
c_rt_lib0clear(&___nl__im__187);
#line 1680
c_rt_lib0clear(&___nl__im__188);
#line 1680
c_rt_lib0clear(&___nl__im__189);
#line 1680
return NULL;
return NULL;

}

tct0meta_type0type translator_priv0unwrap_ref(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 1684
label_0:
;
#line 1684
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1684
___nl__bool__2 = !___nl__bool__2;
#line 1684
if(___nl__bool__2){ goto label_8;}
#line 1685
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1686
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__3));
#line 1686
c_rt_lib0clear(&___nl__im__3);
#line 1687
goto label_0;
#line 1687
label_8:
;
#line 1688
c_rt_lib0clear(&___nl__im__1);
#line 1688
//clear ___nl__bool__2;
#line 1688
c_rt_lib0clear(&___nl__im__3);
#line 1688
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
#line 1692
___nl__int__3 = 0;
#line 1693
___nl__im_ptr__7 = &((*___ref___rec__0).logic0field);
#line 1693
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1693
___nl__im_ptr__7 = NULL;
#line 1693
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(429)));
#line 1693
c_rt_lib0clear(&___nl__im__6);
#line 1693
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__1, ___nl__im__5));
#line 1693
c_rt_lib0clear(&___nl__im__5);
#line 1694
___nl__im_ptr__11 = &((*___ref___rec__0).logic0field);
#line 1694
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 1694
___nl__im_ptr__11 = NULL;
#line 1694
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(429)));
#line 1694
c_rt_lib0clear(&___nl__im__10);
#line 1694
___nl__bool__8 = tct0is_own_type(___nl__im__1, ___nl__im__9);
#line 1694
c_rt_lib0clear(&___nl__im__9);
#line 1694
___nl__bool__8 = !___nl__bool__8;
#line 1694
___nl__bool__8 = !___nl__bool__8;
#line 1694
if(___nl__bool__8){ goto label_27;}
#line 1695
___nl__int__12 = 1;
#line 1695
___nl__int__12 = -___nl__int__12;
#line 1695
c_rt_lib0clear(&___nl__im__1);
#line 1695
c_rt_lib0clear(&___nl__im__2);
#line 1695
//clear ___nl__int__3;
#line 1695
c_rt_lib0clear(&___nl__im__4);
#line 1695
//clear ___nl__bool__8;
#line 1695
return ___nl__int__12;
#line 1696
goto label_27;
#line 1696
label_27:
;
#line 1696
//clear ___nl__bool__8;
#line 1696
//clear ___nl__int__12;
#line 1697
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(13)));
#line 1697
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__13));
#line 1697
label_32:
;
#line 1697
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 1697
if(___nl__bool__15){ goto label_58;}
#line 1697
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 1697
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__13, ___nl__im__14));
#line 1698
___nl__bool__18 = c_rt_lib0eq(___nl__im__14, ___nl__im__2);
#line 1698
___nl__bool__18 = !___nl__bool__18;
#line 1698
if(___nl__bool__18){ goto label_51;}
#line 1698
c_rt_lib0clear(&___nl__im__1);
#line 1698
c_rt_lib0clear(&___nl__im__2);
#line 1698
c_rt_lib0clear(&___nl__im__4);
#line 1698
c_rt_lib0clear(&___nl__im__13);
#line 1698
c_rt_lib0clear(&___nl__im__14);
#line 1698
//clear ___nl__bool__15;
#line 1698
c_rt_lib0clear(&___nl__im__16);
#line 1698
c_rt_lib0clear(&___nl__im__17);
#line 1698
//clear ___nl__bool__18;
#line 1698
return ___nl__int__3;
#line 1698
goto label_51;
#line 1698
label_51:
;
#line 1698
//clear ___nl__bool__18;
#line 1699
___nl__int__19 = 1;
#line 1699
___nl__int__3 = ___nl__int__3 + ___nl__int__19;
#line 1699
//clear ___nl__int__19;
#line 1700
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 1700
goto label_32;
#line 1700
label_58:
;
#line 1701
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1701
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(1421), ___nl__im__4, ___get_global_string_const(216), ___nl__im__5, ___get_global_string_const(1418), ___nl__im__7, ___get_global_string_const(235), ___nl__im__9, ___get_global_string_const(499), ___nl__im__11, ___get_global_string_const(1420), ___nl__im__13));
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


static ImmT ___const__[9];
static int ___const_init__ = 1;
void translator_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}}
ImmT translator_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT translator_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = translator0function_logic_t0cal();
	break;
case 1:
	___const__[1] = translator0loop0cal();
	break;
case 2:
	___const__[2] = translator0loop_label0cal();
	break;
case 3:
	___const__[3] = translator0state_t0cal();
	break;
case 4:
	___const__[4] = translator0string_t0cal();
	break;
case 5:
	___const__[5] = translator0lvalue_values_t0cal();
	break;
case 6:
	___const__[6] = translator0ref_rec_args_t0cal();
	break;
case 7:
	___const__[7] = translator0struct_of_lvalue_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
