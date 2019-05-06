
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 19
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 19
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 20
c_rt_lib0move(&___nl__im__9, ptd0hash(___nl__im__10));
#line 20
c_rt_lib0clear(&___nl__im__10);
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(216), ___nl__im__2, ___get_global_string_const(471), ___nl__im__4, ___get_global_string_const(1344), ___nl__im__5, ___get_global_string_const(841), ___nl__im__7, ___get_global_string_const(418), ___nl__im__9));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_string_const(336), ___get_global_string_const(1098)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_string_const(1345), ___get_global_string_const(1346)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 25
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(562), ___nl__im__2, ___get_global_string_const(1347), ___nl__im__3, ___get_global_string_const(1348), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_string_const(1345), ___get_global_string_const(160)));
#line 29
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_string_const(1345), ___get_global_string_const(160)));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 29
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(1001), ___nl__im__2, ___get_global_string_const(1002), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_string_const(336), ___get_global_string_const(840)));
#line 35
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_string_const(1345), ___get_global_string_const(1346)));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 37
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_string_const(336), ___get_global_string_const(820)));
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_string_const(1345), ___get_global_string_const(1349)));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(1350), ___nl__im__2, ___get_global_string_const(222), ___nl__im__3, ___get_global_string_const(1347), ___nl__im__4, ___get_global_string_const(213), ___nl__im__5, ___get_global_string_const(489), ___nl__im__6, ___get_global_string_const(1349), ___nl__im__7));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(1062), ___nl__im__6, ___get_global_string_const(1063), ___nl__im__7));
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0clear(&___nl__im__7);
#line 44
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__2, ___get_global_string_const(1064), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 49
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__6, ___get_global_string_const(363), ___nl__im__7));
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 51
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 51
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__10, ___get_global_string_const(577), ___nl__im__11));
#line 51
c_rt_lib0clear(&___nl__im__10);
#line 51
c_rt_lib0clear(&___nl__im__11);
#line 51
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 51
c_rt_lib0clear(&___nl__im__9);
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__14));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 52
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__14, ___get_global_string_const(1352), ___nl__im__15, ___get_global_string_const(605), ___nl__im__16));
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
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 53
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__19));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__21));
#line 53
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__19, ___get_global_string_const(1352), ___nl__im__20, ___get_global_string_const(363), ___nl__im__21));
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
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__24));
#line 54
c_rt_lib0move(&___nl__im__25, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__24, ___get_global_string_const(562), ___nl__im__25));
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__28));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__29));
#line 55
c_rt_lib0move(&___nl__im__30, ptd0string());
#line 55
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__28, ___get_global_string_const(1352), ___nl__im__29, ___get_global_string_const(562), ___nl__im__30));
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
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 56
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__33));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__34));
#line 56
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__33, ___get_global_string_const(577), ___nl__im__34));
#line 56
c_rt_lib0clear(&___nl__im__33);
#line 56
c_rt_lib0clear(&___nl__im__34);
#line 56
c_rt_lib0move(&___nl__im__31, ptd0rec(___nl__im__32));
#line 56
c_rt_lib0clear(&___nl__im__32);
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__37));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__38));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(336), ___get_global_string_const(338)));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__39));
#line 57
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__37, ___get_global_string_const(1352), ___nl__im__38, ___get_global_string_const(363), ___nl__im__39));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(9, ___get_global_string_const(220), ___nl__im__3, ___get_global_string_const(363), ___nl__im__4, ___get_global_string_const(577), ___nl__im__8, ___get_global_string_const(255), ___nl__im__12, ___get_global_string_const(257), ___nl__im__17, ___get_global_string_const(1049), ___nl__im__22, ___get_global_string_const(261), ___nl__im__26, ___get_global_string_const(1339), ___nl__im__31, ___get_global_string_const(259), ___nl__im__35));
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
#line 62
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1062)));
#line 62
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(154)));
#line 62
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__2));
#line 62
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1062)));
#line 62
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1075)));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(154), ___nl__im__5, ___get_global_string_const(1075), ___nl__im__11));
#line 62
//clear ___nl__int__2;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
//clear ___nl__int__6;
#line 62
c_rt_lib0clear(&___nl__im__11);
#line 63
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1062)));
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(154)));
#line 63
___nl__int__13 = getIntFromImm(___nl__im__15);
#line 63
c_rt_lib0clear(&___nl__im__14);
#line 63
c_rt_lib0clear(&___nl__im__15);
#line 63
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__13));
#line 63
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1062)));
#line 63
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1075)));
#line 63
___nl__int__17 = getIntFromImm(___nl__im__19);
#line 63
c_rt_lib0clear(&___nl__im__18);
#line 63
c_rt_lib0clear(&___nl__im__19);
#line 63
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__17));
#line 63
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(154), ___nl__im__16, ___get_global_string_const(1075), ___nl__im__20));
#line 63
//clear ___nl__int__13;
#line 63
c_rt_lib0clear(&___nl__im__16);
#line 63
//clear ___nl__int__17;
#line 63
c_rt_lib0clear(&___nl__im__20);
#line 64
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(552), ___nl__im__1, ___get_global_string_const(1062), ___nl__im__12));
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
translator0state_t0type ___nl__rec__31 = {};
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
ImmT * ___nl__im_ptr__47 = NULL;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT * ___nl__im_ptr__60 = NULL;
ImmT  ___nl__string__61 = NULL;
#line 68
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 68
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(213), ___nl__im__3, ___get_global_string_const(209), ___nl__im__4, ___get_global_string_const(479), ___nl__im__5));
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
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(479), ___nl__im__7);
#line 69
c_rt_lib0clear(&___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(173)));
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
c_rt_lib0move(&___nl__im__15,___get_global_string_const(479));
#line 71
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__15));
#line 71
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(168)));
#line 71
c_rt_lib0delete(array0push(&___nl__im__15, ___nl__im__16));
#line 71
c_rt_lib0move(&___nl__string__17,___get_global_string_const(479));
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
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
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
if(___nl__bool__23){ goto label_130;}
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
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(5, ___get_global_string_const(841), ___nl__im__26, ___get_global_string_const(216), ___nl__im__27, ___get_global_string_const(471), ___nl__im__29, ___get_global_string_const(1344), ___nl__im__30, ___get_global_string_const(418), ___nl__im__1));
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
c_rt_lib0move(___nl__im_ptr__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
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
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 88
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(210)));
#line 89
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 90
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(0));
#line 91
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 92
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 93
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_mk(0));
#line 94
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(168)));
#line 95
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(167)));
#line 96
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(0));
#line 96
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_mk(10, ___get_global_string_const(227), ___nl__im__37, ___get_global_string_const(210), ___nl__im__38, ___get_global_string_const(216), ___nl__im__39, ___get_global_string_const(215), ___nl__im__40, ___get_global_string_const(468), ___nl__im__41, ___get_global_string_const(417), ___nl__im__42, ___get_global_string_const(214), ___nl__im__43, ___get_global_string_const(168), ___nl__im__44, ___get_global_string_const(167), ___nl__im__45, ___get_global_string_const(841), ___nl__im__46));
#line 96
c_rt_lib0clear(&___nl__im__37);
#line 96
c_rt_lib0clear(&___nl__im__38);
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
___nl__im_ptr__36 = NULL;
#line 96
___nl__im_ptr__47 = &(___nl__rec__31.loop_label0field);
#line 99
___nl__int__49 = 1;
#line 99
___nl__int__49 = -___nl__int__49;
#line 99
c_rt_lib0move(&___nl__im__50, c_rt_lib0int_new(___nl__int__49));
#line 99
___nl__bool__51 = false;
#line 99
c_rt_lib0move(&___nl__im__52, c_rt_lib0bool_to_nl_native(___nl__bool__51));
#line 99
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(3, ___get_global_string_const(562), ___nl__im__50, ___get_global_string_const(1347), ___nl__im__25, ___get_global_string_const(1348), ___nl__im__52));
#line 99
//clear ___nl__int__49;
#line 99
c_rt_lib0clear(&___nl__im__50);
#line 99
//clear ___nl__bool__51;
#line 99
c_rt_lib0clear(&___nl__im__52);
#line 100
___nl__int__54 = 1;
#line 100
___nl__int__54 = -___nl__int__54;
#line 100
c_rt_lib0move(&___nl__im__55, c_rt_lib0int_new(___nl__int__54));
#line 100
___nl__bool__56 = false;
#line 100
c_rt_lib0move(&___nl__im__57, c_rt_lib0bool_to_nl_native(___nl__bool__56));
#line 100
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(3, ___get_global_string_const(562), ___nl__im__55, ___get_global_string_const(1347), ___nl__im__25, ___get_global_string_const(1348), ___nl__im__57));
#line 100
//clear ___nl__int__54;
#line 100
c_rt_lib0clear(&___nl__im__55);
#line 100
//clear ___nl__bool__56;
#line 100
c_rt_lib0clear(&___nl__im__57);
#line 100
c_rt_lib0move(___nl__im_ptr__47, c_rt_lib0hash_mk(2, ___get_global_string_const(1001), ___nl__im__48, ___get_global_string_const(1002), ___nl__im__53));
#line 100
c_rt_lib0clear(&___nl__im__48);
#line 100
c_rt_lib0clear(&___nl__im__53);
#line 100
___nl__im_ptr__47 = NULL;
#line 103
c_rt_lib0delete(translator_priv0print_fun_def(___nl__im__19, &___nl__rec__31));
#line 104
c_rt_lib0move(&___nl__im__58,___get_global_string_const(209));
#line 104
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__58));
#line 104
___nl__im_ptr__60 = &(___nl__rec__31.result0field);
#line 104
c_rt_lib0copy(&___nl__im__59, (*___nl__im_ptr__60));
#line 104
___nl__im_ptr__60 = NULL;
#line 104
c_rt_lib0delete(array0push(&___nl__im__58, ___nl__im__59));
#line 104
c_rt_lib0move(&___nl__string__61,___get_global_string_const(209));
#line 104
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__61, ___nl__im__58));
#line 104
c_rt_lib0clear(&___nl__im__58);
#line 104
c_rt_lib0clear(&___nl__im__59);
#line 104
c_rt_lib0clear(&___nl__string__61);
#line 104
c_rt_lib0clear(&___nl__im__19);
#line 105
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 105
goto label_38;
#line 105
label_130:
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
c_rt_lib0clear(&___nl__im__14);
#line 106
c_rt_lib0clear(&___nl__im__18);
#line 106
c_rt_lib0clear(&___nl__im__19);
#line 106
//clear ___nl__int__20;
#line 106
//clear ___nl__int__21;
#line 106
//clear ___nl__int__22;
#line 106
//clear ___nl__bool__23;
#line 106
c_rt_lib0clear(&___nl__im__24);
#line 106
c_rt_lib0clear(&___nl__im__25);
#line 106
translator0state_t0type0clean(___nl__rec__31);;
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
ImmT * ___nl__im_ptr__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT * ___nl__im_ptr__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT * ___nl__im_ptr__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__string__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT * ___nl__im_ptr__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT * ___nl__im_ptr__49 = NULL;
ImmT * ___nl__im_ptr__50 = NULL;
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
bool  ___nl__bool__65 = false;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT * ___nl__im_ptr__74 = NULL;
bool  ___nl__bool__75 = false;
#line 110
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(267)));
#line 110
___nl__int__4 = 0;
#line 110
___nl__int__5 = 1;
#line 110
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 110
label_4:
;
#line 110
___nl__bool__7 = ___nl__int__4 >= ___nl__int__6;
#line 110
if(___nl__bool__7){ goto label_83;}
#line 110
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 110
c_rt_lib0copy(&___nl__im__3, ___nl__im__8);
#line 111
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(268)));
#line 111
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(71));
#line 111
if(___nl__bool__10){ goto label_17;}
#line 115
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(39));
#line 115
if(___nl__bool__10){ goto label_48;}
#line 115
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 115
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__9));
#line 115
nl_die_arg(___nl__im__11);
#line 111
label_17:
;
#line 112
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(168)));
#line 112
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(495)));
#line 112
___nl__im_ptr__18 = &((*___ref___rec__1).logic0field);
#line 112
c_rt_lib0copy(&___nl__im__17, (*___nl__im_ptr__18));
#line 112
___nl__im_ptr__18 = NULL;
#line 112
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(418)));
#line 112
c_rt_lib0clear(&___nl__im__17);
#line 112
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__15, ___nl__im__16));
#line 112
c_rt_lib0clear(&___nl__im__15);
#line 112
c_rt_lib0clear(&___nl__im__16);
#line 112
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 112
c_rt_lib0move(&___nl__im__12, translator_priv0new_declaration(___nl__im__13, ___ref___rec__1, ___nl__im__14, ___nl__im__19));
#line 112
c_rt_lib0clear(&___nl__im__13);
#line 112
c_rt_lib0clear(&___nl__im__14);
#line 112
c_rt_lib0clear(&___nl__im__19);
#line 113
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(225)));
#line 113
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(495)));
#line 113
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(3, ___get_global_string_const(355), ___nl__im__21, ___get_global_string_const(471), ___nl__im__12, ___get_global_string_const(206), ___nl__im__22));
#line 113
c_rt_lib0clear(&___nl__im__21);
#line 113
c_rt_lib0clear(&___nl__im__22);
#line 114
___nl__im_ptr__23 = &((*___ref___rec__1).result0field);
#line 114
c_rt_lib0move(&___nl__im__24,___get_global_string_const(215));
#line 114
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 114
c_rt_lib0delete(array0push(&___nl__im__24, ___nl__im__20));
#line 114
c_rt_lib0move(&___nl__string__25,___get_global_string_const(215));
#line 114
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 114
___nl__im_ptr__23 = NULL;
#line 114
c_rt_lib0clear(&___nl__im__24);
#line 114
c_rt_lib0clear(&___nl__string__25);
#line 115
goto label_79;
#line 115
label_48:
;
#line 116
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(168)));
#line 116
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(495)));
#line 116
___nl__im_ptr__32 = &((*___ref___rec__1).logic0field);
#line 116
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 116
___nl__im_ptr__32 = NULL;
#line 116
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(418)));
#line 116
c_rt_lib0clear(&___nl__im__31);
#line 116
c_rt_lib0move(&___nl__im__28, translator_priv0var_type_to_reg_type(___nl__im__29, ___nl__im__30));
#line 116
c_rt_lib0clear(&___nl__im__29);
#line 116
c_rt_lib0clear(&___nl__im__30);
#line 116
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 116
c_rt_lib0move(&___nl__im__26, translator_priv0new_declaration(___nl__im__27, ___ref___rec__1, ___nl__im__28, ___nl__im__33));
#line 116
c_rt_lib0clear(&___nl__im__27);
#line 116
c_rt_lib0clear(&___nl__im__28);
#line 116
c_rt_lib0clear(&___nl__im__33);
#line 117
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 117
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(495)));
#line 117
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(3, ___get_global_string_const(355), ___nl__im__35, ___get_global_string_const(471), ___nl__im__26, ___get_global_string_const(206), ___nl__im__36));
#line 117
c_rt_lib0clear(&___nl__im__35);
#line 117
c_rt_lib0clear(&___nl__im__36);
#line 118
___nl__im_ptr__37 = &((*___ref___rec__1).result0field);
#line 118
c_rt_lib0move(&___nl__im__38,___get_global_string_const(215));
#line 118
c_rt_lib0move(&___nl__im__38, c_rt_lib0get_ref_hash((*___nl__im_ptr__37), ___nl__im__38));
#line 118
c_rt_lib0delete(array0push(&___nl__im__38, ___nl__im__34));
#line 118
c_rt_lib0move(&___nl__string__39,___get_global_string_const(215));
#line 118
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__37, ___nl__string__39, ___nl__im__38));
#line 118
___nl__im_ptr__37 = NULL;
#line 118
c_rt_lib0clear(&___nl__im__38);
#line 118
c_rt_lib0clear(&___nl__string__39);
#line 119
goto label_79;
#line 119
label_79:
;
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 120
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 120
goto label_4;
#line 120
label_83:
;
#line 121
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(468)));
#line 121
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(495)));
#line 121
c_rt_lib0clear(&___nl__im__41);
#line 121
___nl__im_ptr__42 = &((*___ref___rec__1).result0field);
#line 121
c_rt_lib0copy(&___nl__im__43, ___nl__im__40);
#line 121
c_rt_lib0hash_set_value_dec(___nl__im_ptr__42, ___get_global_string_const(468), ___nl__im__43);
#line 121
___nl__im_ptr__42 = NULL;
#line 121
c_rt_lib0clear(&___nl__im__40);
#line 121
c_rt_lib0clear(&___nl__im__43);
#line 122
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(468)));
#line 122
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(495)));
#line 122
c_rt_lib0clear(&___nl__im__46);
#line 122
___nl__im_ptr__49 = &((*___ref___rec__1).logic0field);
#line 122
c_rt_lib0copy(&___nl__im__48, (*___nl__im_ptr__49));
#line 122
___nl__im_ptr__49 = NULL;
#line 122
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(418)));
#line 122
c_rt_lib0clear(&___nl__im__48);
#line 122
c_rt_lib0move(&___nl__im__44, translator_priv0var_type_to_reg_type(___nl__im__45, ___nl__im__47));
#line 122
c_rt_lib0clear(&___nl__im__45);
#line 122
c_rt_lib0clear(&___nl__im__47);
#line 122
___nl__im_ptr__50 = &((*___ref___rec__1).result0field);
#line 122
c_rt_lib0copy(&___nl__im__51, ___nl__im__44);
#line 122
c_rt_lib0hash_set_value_dec(___nl__im_ptr__50, ___get_global_string_const(417), ___nl__im__51);
#line 122
___nl__im_ptr__50 = NULL;
#line 122
c_rt_lib0clear(&___nl__im__44);
#line 122
c_rt_lib0clear(&___nl__im__51);
#line 123
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 123
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__52, ___ref___rec__1));
#line 123
c_rt_lib0clear(&___nl__im__52);
#line 125
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 125
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_string_const(222)));
#line 125
c_rt_lib0clear(&___nl__im__57);
#line 125
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(1062)));
#line 125
c_rt_lib0clear(&___nl__im__56);
#line 125
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 125
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(222)));
#line 125
c_rt_lib0clear(&___nl__im__60);
#line 125
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(1062)));
#line 125
c_rt_lib0clear(&___nl__im__59);
#line 125
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(2, ___get_global_string_const(552), ___nl__im__55, ___get_global_string_const(1062), ___nl__im__58));
#line 125
c_rt_lib0clear(&___nl__im__55);
#line 125
c_rt_lib0clear(&___nl__im__58);
#line 126
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(1006)));
#line 127
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_string_const(14)));
#line 127
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__54, ___get_global_string_const(220), ___nl__im__61, ___get_global_string_const(206), ___nl__im__62));
#line 127
c_rt_lib0clear(&___nl__im__54);
#line 127
c_rt_lib0clear(&___nl__im__61);
#line 127
c_rt_lib0clear(&___nl__im__62);
#line 129
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(468)));
#line 129
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(206)));
#line 129
c_rt_lib0clear(&___nl__im__64);
#line 129
___nl__bool__65 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(206));
#line 129
if(___nl__bool__65){ goto label_142;}
#line 134
___nl__bool__65 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(71));
#line 134
if(___nl__bool__65){ goto label_167;}
#line 134
c_rt_lib0move(&___nl__im__66,___get_global_string_const(15));
#line 134
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(2, ___nl__im__66, ___nl__im__63));
#line 134
nl_die_arg(___nl__im__66);
#line 129
label_142:
;
#line 129
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__63, ___get_global_string_const(206)));
#line 129
c_rt_lib0copy(&___nl__im__67, ___nl__im__68);
#line 130
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(468)));
#line 130
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_string_const(495)));
#line 130
c_rt_lib0clear(&___nl__im__71);
#line 130
___nl__im_ptr__74 = &((*___ref___rec__1).logic0field);
#line 130
c_rt_lib0copy(&___nl__im__73, (*___nl__im_ptr__74));
#line 130
___nl__im_ptr__74 = NULL;
#line 130
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(418)));
#line 130
c_rt_lib0clear(&___nl__im__73);
#line 130
c_rt_lib0move(&___nl__im__69, translator_priv0unwrap_ref(___nl__im__70, ___nl__im__72));
#line 130
c_rt_lib0clear(&___nl__im__70);
#line 130
c_rt_lib0clear(&___nl__im__72);
#line 131
___nl__bool__75 = c_rt_lib0priv_is(___nl__im__69, ___get_global_string_const(8));
#line 131
if(___nl__bool__75){ goto label_159;}
#line 131
___nl__bool__75 = c_rt_lib0priv_is(___nl__im__69, ___get_global_string_const(0));
#line 131
label_159:
;
#line 131
___nl__bool__75 = !___nl__bool__75;
#line 131
if(___nl__bool__75){ goto label_164;}
#line 132
c_rt_lib0delete(translator_priv0print_return(___nl__im__53, ___ref___rec__1));
#line 133
goto label_164;
#line 133
label_164:
;
#line 133
//clear ___nl__bool__75;
#line 134
goto label_170;
#line 134
label_167:
;
#line 135
c_rt_lib0delete(translator_priv0print_return(___nl__im__53, ___ref___rec__1));
#line 136
goto label_170;
#line 136
label_170:
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
c_rt_lib0clear(&___nl__im__8);
#line 136
c_rt_lib0clear(&___nl__im__9);
#line 136
//clear ___nl__bool__10;
#line 136
c_rt_lib0clear(&___nl__im__11);
#line 136
c_rt_lib0clear(&___nl__im__12);
#line 136
c_rt_lib0clear(&___nl__im__20);
#line 136
c_rt_lib0clear(&___nl__im__26);
#line 136
c_rt_lib0clear(&___nl__im__34);
#line 136
c_rt_lib0clear(&___nl__im__53);
#line 136
c_rt_lib0clear(&___nl__im__63);
#line 136
//clear ___nl__bool__65;
#line 136
c_rt_lib0clear(&___nl__im__66);
#line 136
c_rt_lib0clear(&___nl__im__67);
#line 136
c_rt_lib0clear(&___nl__im__68);
#line 136
c_rt_lib0clear(&___nl__im__69);
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
#line 141
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 142
___nl__int__5 = 0;
#line 142
___nl__int__6 = 1;
#line 142
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 142
label_4:
;
#line 142
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 142
if(___nl__bool__8){ goto label_25;}
#line 142
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 142
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 143
c_rt_lib0move(&___nl__im__10, translator_priv0calc_val(___nl__im__4, ___ref___rec__2));
#line 144
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 144
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(131));
#line 144
c_rt_lib0clear(&___nl__im__12);
#line 144
___nl__bool__11 = !___nl__bool__11;
#line 144
if(___nl__bool__11){ goto label_19;}
#line 145
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 145
c_rt_lib0move(&___nl__im__10, translator_priv0get_cast(___nl__im__10, ___nl__im__13, ___ref___rec__2));
#line 145
c_rt_lib0clear(&___nl__im__13);
#line 146
goto label_19;
#line 146
label_19:
;
#line 146
//clear ___nl__bool__11;
#line 147
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__10));
#line 147
c_rt_lib0clear(&___nl__im__4);
#line 148
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 148
goto label_4;
#line 148
label_25:
;
#line 149
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 149
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(127));
#line 149
c_rt_lib0clear(&___nl__im__15);
#line 149
___nl__bool__14 = !___nl__bool__14;
#line 149
if(___nl__bool__14){ goto label_45;}
#line 150
___nl__int__17 = 0;
#line 150
___nl__int__18 = 1;
#line 150
___nl__int__19 = c_rt_lib0array_len(___nl__im__3);
#line 150
label_34:
;
#line 150
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 150
if(___nl__bool__20){ goto label_43;}
#line 150
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__3, ___nl__int__17));
#line 150
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 151
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__16, ___ref___rec__2));
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 152
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 152
goto label_34;
#line 152
label_43:
;
#line 153
goto label_61;
#line 153
label_45:
;
#line 153
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 153
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(131));
#line 153
c_rt_lib0clear(&___nl__im__22);
#line 153
___nl__bool__14 = !___nl__bool__14;
#line 153
if(___nl__bool__14){ goto label_57;}
#line 154
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__3));
#line 154
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(231), ___nl__im__24));
#line 154
c_rt_lib0clear(&___nl__im__24);
#line 154
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__23));
#line 154
c_rt_lib0clear(&___nl__im__23);
#line 155
goto label_61;
#line 155
label_57:
;
#line 156
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 156
nl_die_arg(___nl__im__25);
#line 157
goto label_61;
#line 157
label_61:
;
#line 157
//clear ___nl__bool__14;
#line 157
c_rt_lib0clear(&___nl__im__16);
#line 157
//clear ___nl__int__17;
#line 157
//clear ___nl__int__18;
#line 157
//clear ___nl__int__19;
#line 157
//clear ___nl__bool__20;
#line 157
c_rt_lib0clear(&___nl__im__21);
#line 157
c_rt_lib0clear(&___nl__im__25);
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
c_rt_lib0clear(&___nl__im__9);
#line 157
c_rt_lib0clear(&___nl__im__10);
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
#line 162
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 163
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 163
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(559));
#line 163
c_rt_lib0clear(&___nl__im__5);
#line 163
___nl__bool__4 = !___nl__bool__4;
#line 163
if(___nl__bool__4){ goto label_9;}
#line 163
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 163
nl_die_arg(___nl__im__6);
#line 163
goto label_9;
#line 163
label_9:
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
label_15:
;
#line 164
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 164
if(___nl__bool__11){ goto label_147;}
#line 164
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 164
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 165
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 166
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(577)));
#line 166
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(220)));
#line 166
c_rt_lib0clear(&___nl__im__16);
#line 166
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(577)));
#line 166
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(220)));
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 166
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__17, ___get_global_string_const(1028)));
#line 166
c_rt_lib0clear(&___nl__im__15);
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 167
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 167
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(128));
#line 167
c_rt_lib0clear(&___nl__im__20);
#line 167
___nl__bool__19 = !___nl__bool__19;
#line 167
if(___nl__bool__19){ goto label_79;}
#line 168
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 168
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 168
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(128)));
#line 168
c_rt_lib0clear(&___nl__im__24);
#line 168
c_rt_lib0clear(&___nl__im__25);
#line 168
___nl__im_ptr__28 = &((*___ref___rec__2).logic0field);
#line 168
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 168
___nl__im_ptr__28 = NULL;
#line 168
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(418)));
#line 168
c_rt_lib0clear(&___nl__im__27);
#line 168
c_rt_lib0move(&___nl__im__22, translator_priv0unwrap_ref(___nl__im__23, ___nl__im__26));
#line 168
c_rt_lib0clear(&___nl__im__23);
#line 168
c_rt_lib0clear(&___nl__im__26);
#line 168
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 168
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 168
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(128)));
#line 168
c_rt_lib0clear(&___nl__im__31);
#line 168
c_rt_lib0clear(&___nl__im__32);
#line 168
___nl__im_ptr__35 = &((*___ref___rec__2).logic0field);
#line 168
c_rt_lib0copy(&___nl__im__34, (*___nl__im_ptr__35));
#line 168
___nl__im_ptr__35 = NULL;
#line 168
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(418)));
#line 168
c_rt_lib0clear(&___nl__im__34);
#line 168
c_rt_lib0move(&___nl__im__29, translator_priv0unwrap_ref(___nl__im__30, ___nl__im__33));
#line 168
c_rt_lib0clear(&___nl__im__30);
#line 168
c_rt_lib0clear(&___nl__im__33);
#line 168
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__29, ___get_global_string_const(4)));
#line 168
c_rt_lib0clear(&___nl__im__22);
#line 168
c_rt_lib0clear(&___nl__im__29);
#line 169
___nl__im_ptr__38 = &((*___ref___rec__2).logic0field);
#line 169
c_rt_lib0copy(&___nl__im__37, (*___nl__im_ptr__38));
#line 169
___nl__im_ptr__38 = NULL;
#line 169
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(418)));
#line 169
c_rt_lib0clear(&___nl__im__37);
#line 169
c_rt_lib0move(&___nl__im__21, translator_priv0unwrap_ref(___nl__im__21, ___nl__im__36));
#line 169
c_rt_lib0clear(&___nl__im__36);
#line 170
___nl__im_ptr__41 = &((*___ref___rec__2).logic0field);
#line 170
c_rt_lib0copy(&___nl__im__40, (*___nl__im_ptr__41));
#line 170
___nl__im_ptr__41 = NULL;
#line 170
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(418)));
#line 170
c_rt_lib0clear(&___nl__im__40);
#line 170
c_rt_lib0move(&___nl__im__13, translator_priv0var_type_to_reg_type(___nl__im__21, ___nl__im__39));
#line 170
c_rt_lib0clear(&___nl__im__39);
#line 171
goto label_131;
#line 171
label_79:
;
#line 171
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 171
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__42, ___get_global_string_const(559));
#line 171
c_rt_lib0clear(&___nl__im__42);
#line 171
___nl__bool__19 = !___nl__bool__19;
#line 171
if(___nl__bool__19){ goto label_131;}
#line 172
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 172
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 172
c_rt_lib0move(&___nl__im__45, c_rt_lib0priv_as(___nl__im__47, ___get_global_string_const(559)));
#line 172
c_rt_lib0clear(&___nl__im__46);
#line 172
c_rt_lib0clear(&___nl__im__47);
#line 172
___nl__im_ptr__50 = &((*___ref___rec__2).logic0field);
#line 172
c_rt_lib0copy(&___nl__im__49, (*___nl__im_ptr__50));
#line 172
___nl__im_ptr__50 = NULL;
#line 172
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(418)));
#line 172
c_rt_lib0clear(&___nl__im__49);
#line 172
c_rt_lib0move(&___nl__im__44, translator_priv0unwrap_ref(___nl__im__45, ___nl__im__48));
#line 172
c_rt_lib0clear(&___nl__im__45);
#line 172
c_rt_lib0clear(&___nl__im__48);
#line 172
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 172
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 172
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__54, ___get_global_string_const(559)));
#line 172
c_rt_lib0clear(&___nl__im__53);
#line 172
c_rt_lib0clear(&___nl__im__54);
#line 172
___nl__im_ptr__57 = &((*___ref___rec__2).logic0field);
#line 172
c_rt_lib0copy(&___nl__im__56, (*___nl__im_ptr__57));
#line 172
___nl__im_ptr__57 = NULL;
#line 172
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_string_const(418)));
#line 172
c_rt_lib0clear(&___nl__im__56);
#line 172
c_rt_lib0move(&___nl__im__51, translator_priv0unwrap_ref(___nl__im__52, ___nl__im__55));
#line 172
c_rt_lib0clear(&___nl__im__52);
#line 172
c_rt_lib0clear(&___nl__im__55);
#line 172
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__51, ___get_global_string_const(6)));
#line 172
c_rt_lib0clear(&___nl__im__44);
#line 172
c_rt_lib0clear(&___nl__im__51);
#line 173
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value(___nl__im__43, ___nl__im__14));
#line 173
___nl__im_ptr__62 = &((*___ref___rec__2).logic0field);
#line 173
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 173
___nl__im_ptr__62 = NULL;
#line 173
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(418)));
#line 173
c_rt_lib0clear(&___nl__im__61);
#line 173
c_rt_lib0move(&___nl__im__58, translator_priv0unwrap_ref(___nl__im__59, ___nl__im__60));
#line 173
c_rt_lib0clear(&___nl__im__59);
#line 173
c_rt_lib0clear(&___nl__im__60);
#line 174
___nl__im_ptr__65 = &((*___ref___rec__2).logic0field);
#line 174
c_rt_lib0copy(&___nl__im__64, (*___nl__im_ptr__65));
#line 174
___nl__im_ptr__65 = NULL;
#line 174
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_string_const(418)));
#line 174
c_rt_lib0clear(&___nl__im__64);
#line 174
c_rt_lib0move(&___nl__im__13, translator_priv0var_type_to_reg_type(___nl__im__58, ___nl__im__63));
#line 174
c_rt_lib0clear(&___nl__im__63);
#line 175
goto label_131;
#line 175
label_131:
;
#line 175
//clear ___nl__bool__19;
#line 175
c_rt_lib0clear(&___nl__im__21);
#line 175
c_rt_lib0clear(&___nl__im__43);
#line 175
c_rt_lib0clear(&___nl__im__58);
#line 176
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(225)));
#line 176
c_rt_lib0move(&___nl__im__67, translator_priv0calc_val(___nl__im__68, ___ref___rec__2));
#line 176
c_rt_lib0clear(&___nl__im__68);
#line 176
c_rt_lib0move(&___nl__im__66, translator_priv0get_cast(___nl__im__67, ___nl__im__13, ___ref___rec__2));
#line 176
c_rt_lib0clear(&___nl__im__67);
#line 177
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(2, ___get_global_string_const(577), ___nl__im__14, ___get_global_string_const(225), ___nl__im__66));
#line 177
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__69));
#line 177
c_rt_lib0clear(&___nl__im__69);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 178
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 178
goto label_15;
#line 178
label_147:
;
#line 179
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__3));
#line 179
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(232), ___nl__im__71));
#line 179
c_rt_lib0clear(&___nl__im__71);
#line 179
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__70));
#line 179
c_rt_lib0clear(&___nl__im__70);
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
c_rt_lib0clear(&___nl__im__12);
#line 179
c_rt_lib0clear(&___nl__im__13);
#line 179
c_rt_lib0clear(&___nl__im__14);
#line 179
c_rt_lib0clear(&___nl__im__66);
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(352)));
#line 185
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 185
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(563));
#line 185
c_rt_lib0clear(&___nl__im__6);
#line 185
___nl__bool__5 = !___nl__bool__5;
#line 185
if(___nl__bool__5){ goto label_20;}
#line 186
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 186
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 186
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(563)));
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
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(418)));
#line 186
c_rt_lib0clear(&___nl__im__11);
#line 186
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__7, ___nl__im__10));
#line 186
c_rt_lib0clear(&___nl__im__7);
#line 186
c_rt_lib0clear(&___nl__im__10);
#line 187
goto label_23;
#line 187
label_20:
;
#line 188
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 189
goto label_23;
#line 189
label_23:
;
#line 189
//clear ___nl__bool__5;
#line 190
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(507)));
#line 190
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(220)));
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1006));
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
___nl__bool__13 = !___nl__bool__13;
#line 190
___nl__bool__13 = !___nl__bool__13;
#line 190
if(___nl__bool__13){ goto label_71;}
#line 192
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 192
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(563));
#line 192
c_rt_lib0clear(&___nl__im__18);
#line 192
___nl__bool__17 = !___nl__bool__17;
#line 192
if(___nl__bool__17){ goto label_57;}
#line 193
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(13)));
#line 194
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 194
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__22));
#line 194
c_rt_lib0clear(&___nl__im__22);
#line 194
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 194
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__24));
#line 194
c_rt_lib0clear(&___nl__im__24);
#line 194
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__23, ___get_global_string_const(27)));
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
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(418)));
#line 194
c_rt_lib0clear(&___nl__im__26);
#line 194
c_rt_lib0move(&___nl__im__16, translator_priv0var_type_to_reg_type(___nl__im__20, ___nl__im__25));
#line 194
c_rt_lib0clear(&___nl__im__20);
#line 194
c_rt_lib0clear(&___nl__im__25);
#line 195
goto label_60;
#line 195
label_57:
;
#line 196
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 197
goto label_60;
#line 197
label_60:
;
#line 197
//clear ___nl__bool__17;
#line 197
c_rt_lib0clear(&___nl__im__19);
#line 198
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(507)));
#line 198
c_rt_lib0move(&___nl__im__29, translator_priv0dest_val(___nl__im__30, ___ref___rec__2));
#line 198
c_rt_lib0clear(&___nl__im__30);
#line 198
c_rt_lib0move(&___nl__im__28, translator_priv0get_cast(___nl__im__29, ___nl__im__16, ___ref___rec__2));
#line 198
c_rt_lib0clear(&___nl__im__29);
#line 198
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__28));
#line 198
c_rt_lib0clear(&___nl__im__28);
#line 199
goto label_71;
#line 199
label_71:
;
#line 199
//clear ___nl__bool__13;
#line 199
c_rt_lib0clear(&___nl__im__16);
#line 200
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 200
___nl__int__31 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__4, ___nl__im__32);
#line 200
c_rt_lib0clear(&___nl__im__32);
#line 201
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 201
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__31));
#line 201
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(507)));
#line 201
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(206)));
#line 201
c_rt_lib0clear(&___nl__im__38);
#line 201
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(5, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(562), ___nl__im__35, ___get_global_string_const(567), ___nl__im__36, ___get_global_string_const(582), ___nl__im__37));
#line 201
c_rt_lib0clear(&___nl__im__35);
#line 201
c_rt_lib0clear(&___nl__im__36);
#line 201
c_rt_lib0clear(&___nl__im__37);
#line 201
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__34));
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(495)));
#line 206
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 206
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 206
___nl__im_ptr__7 = NULL;
#line 206
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(418)));
#line 206
c_rt_lib0clear(&___nl__im__6);
#line 206
c_rt_lib0move(&___nl__im__3, translator_priv0var_type_to_reg_type(___nl__im__4, ___nl__im__5));
#line 206
c_rt_lib0clear(&___nl__im__4);
#line 206
c_rt_lib0clear(&___nl__im__5);
#line 207
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 207
c_rt_lib0move(&___nl__im__8, translator_priv0new_declaration(___nl__im__9, ___ref___rec__1, ___nl__im__3, ___nl__im__2));
#line 207
c_rt_lib0clear(&___nl__im__9);
#line 208
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 208
c_rt_lib0move(&___nl__im__11,___get_global_string_const(841));
#line 208
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 208
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(495)));
#line 208
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(206), ___nl__im__13, ___get_global_string_const(471), ___nl__im__8));
#line 208
c_rt_lib0clear(&___nl__im__13);
#line 208
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 208
c_rt_lib0move(&___nl__string__14,___get_global_string_const(841));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 209
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(71));
#line 209
if(___nl__bool__16){ goto label_33;}
#line 210
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(220));
#line 210
if(___nl__bool__16){ goto label_35;}
#line 210
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 210
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 210
nl_die_arg(___nl__im__17);
#line 209
label_33:
;
#line 210
goto label_57;
#line 210
label_35:
;
#line 210
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(220)));
#line 210
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 211
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(206)));
#line 211
___nl__im_ptr__24 = &((*___ref___rec__1).logic0field);
#line 211
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 211
___nl__im_ptr__24 = NULL;
#line 211
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(418)));
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
if(___nl__bool__20){ goto label_51;}
#line 212
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 213
goto label_54;
#line 213
label_51:
;
#line 214
c_rt_lib0delete(translator_priv0print_val(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 215
goto label_54;
#line 215
label_54:
;
#line 215
//clear ___nl__bool__20;
#line 216
goto label_57;
#line 216
label_57:
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(225), ___nl__im__0));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(226), ___nl__im__4));
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
#line 225
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 225
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 225
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 225
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(1353), ___nl__im__3, ___get_global_string_const(1354), ___nl__im__4, ___get_global_string_const(1355), ___nl__im__5));
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
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT * ___nl__im_ptr__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
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
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
bool  ___nl__bool__92 = false;
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
ImmT  ___nl__im__103 = NULL;
INT  ___nl__int__104 = 0;
bool  ___nl__bool__105 = false;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
bool  ___nl__bool__111 = false;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
bool  ___nl__bool__114 = false;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
INT  ___nl__int__119 = 0;
ImmT  ___nl__im__120 = NULL;
INT  ___nl__int__121 = 0;
bool  ___nl__bool__122 = false;
bool  ___nl__bool__123 = false;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT * ___nl__im_ptr__128 = NULL;
bool  ___nl__bool__129 = false;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
bool  ___nl__bool__132 = false;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
bool  ___nl__bool__137 = false;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
INT  ___nl__int__142 = 0;
INT  ___nl__int__143 = 0;
INT  ___nl__int__144 = 0;
bool  ___nl__bool__145 = false;
INT  ___nl__int__146 = 0;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
bool  ___nl__bool__149 = false;
bool  ___nl__bool__150 = false;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
bool  ___nl__bool__158 = false;
INT  ___nl__int__159 = 0;
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(267)));
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
label_12:
;
#line 234
___nl__int__14 = 0;
#line 234
___nl__bool__13 = ___nl__int__9 >= ___nl__int__14;
#line 234
//clear ___nl__int__14;
#line 234
___nl__bool__13 = !___nl__bool__13;
#line 234
if(___nl__bool__13){ goto label_80;}
#line 235
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(267)));
#line 235
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__18, ___nl__int__9));
#line 235
c_rt_lib0clear(&___nl__im__18);
#line 235
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(268)));
#line 235
c_rt_lib0clear(&___nl__im__17);
#line 235
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 235
c_rt_lib0clear(&___nl__im__16);
#line 235
___nl__bool__15 = !___nl__bool__15;
#line 235
___nl__bool__15 = !___nl__bool__15;
#line 235
if(___nl__bool__15){ goto label_31;}
#line 235
//clear ___nl__bool__15;
#line 235
goto label_75;
#line 235
goto label_31;
#line 235
label_31:
;
#line 235
//clear ___nl__bool__15;
#line 236
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(267)));
#line 236
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__21, ___nl__int__9));
#line 236
c_rt_lib0clear(&___nl__im__21);
#line 236
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(225)));
#line 236
c_rt_lib0clear(&___nl__im__20);
#line 237
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__im__19, ___ref___rec__3));
#line 238
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(220)));
#line 238
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(220)));
#line 238
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__25, ___get_global_string_const(507)));
#line 238
c_rt_lib0clear(&___nl__im__24);
#line 238
c_rt_lib0clear(&___nl__im__25);
#line 238
___nl__bool__22 = hash0has_key(___nl__im__8, ___nl__im__23);
#line 238
c_rt_lib0clear(&___nl__im__23);
#line 238
___nl__bool__22 = !___nl__bool__22;
#line 238
if(___nl__bool__22){ goto label_52;}
#line 238
c_rt_lib0clear(&___nl__im__19);
#line 238
//clear ___nl__bool__22;
#line 238
goto label_75;
#line 238
goto label_52;
#line 238
label_52:
;
#line 238
//clear ___nl__bool__22;
#line 239
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(220)));
#line 239
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(220)));
#line 239
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(507)));
#line 239
c_rt_lib0clear(&___nl__im__27);
#line 239
c_rt_lib0clear(&___nl__im__28);
#line 239
___nl__int__29 = 0;
#line 239
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 239
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__26, ___nl__im__30));
#line 239
c_rt_lib0clear(&___nl__im__26);
#line 239
//clear ___nl__int__29;
#line 239
c_rt_lib0clear(&___nl__im__30);
#line 240
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__9));
#line 240
c_rt_lib0move(&___nl__im__31, ptd0int_to_string(___nl__im__32));
#line 240
c_rt_lib0clear(&___nl__im__32);
#line 240
___nl__int__33 = 0;
#line 240
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__33));
#line 240
c_rt_lib0delete(hash0set_value(&___nl__im__7, ___nl__im__31, ___nl__im__34));
#line 240
c_rt_lib0clear(&___nl__im__31);
#line 240
//clear ___nl__int__33;
#line 240
c_rt_lib0clear(&___nl__im__34);
#line 240
c_rt_lib0clear(&___nl__im__19);
#line 240
label_75:
;
#line 234
___nl__int__35 = 1;
#line 234
___nl__int__9 = ___nl__int__9 - ___nl__int__35;
#line 234
//clear ___nl__int__35;
#line 241
goto label_12;
#line 241
label_80:
;
#line 242
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 243
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(267)));
#line 243
___nl__int__37 = c_rt_lib0array_len(___nl__im__38);
#line 243
c_rt_lib0clear(&___nl__im__38);
#line 243
___nl__int__39 = 0;
#line 243
___nl__int__40 = 1;
#line 243
label_87:
;
#line 243
___nl__bool__41 = ___nl__int__39 >= ___nl__int__37;
#line 243
if(___nl__bool__41){ goto label_220;}
#line 244
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(267)));
#line 244
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_get(___nl__im__43, ___nl__int__39));
#line 244
c_rt_lib0clear(&___nl__im__43);
#line 245
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(268)));
#line 245
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(71));
#line 245
if(___nl__bool__45){ goto label_101;}
#line 249
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__44, ___get_global_string_const(39));
#line 249
if(___nl__bool__45){ goto label_120;}
#line 249
c_rt_lib0move(&___nl__im__46,___get_global_string_const(15));
#line 249
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__44));
#line 249
nl_die_arg(___nl__im__46);
#line 245
label_101:
;
#line 246
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(225)));
#line 246
c_rt_lib0move(&___nl__im__47, translator_priv0calc_val(___nl__im__48, ___ref___rec__3));
#line 246
c_rt_lib0clear(&___nl__im__48);
#line 247
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(1056)));
#line 247
___nl__im_ptr__54 = &((*___ref___rec__3).logic0field);
#line 247
c_rt_lib0copy(&___nl__im__53, (*___nl__im_ptr__54));
#line 247
___nl__im_ptr__54 = NULL;
#line 247
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(418)));
#line 247
c_rt_lib0clear(&___nl__im__53);
#line 247
c_rt_lib0move(&___nl__im__50, translator_priv0var_type_to_reg_type(___nl__im__51, ___nl__im__52));
#line 247
c_rt_lib0clear(&___nl__im__51);
#line 247
c_rt_lib0clear(&___nl__im__52);
#line 247
c_rt_lib0move(&___nl__im__49, translator_priv0get_cast(___nl__im__47, ___nl__im__50, ___ref___rec__3));
#line 247
c_rt_lib0clear(&___nl__im__50);
#line 248
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__49));
#line 248
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__55));
#line 248
c_rt_lib0clear(&___nl__im__55);
#line 249
goto label_208;
#line 249
label_120:
;
#line 250
c_rt_lib0move(&___nl__im__58, c_rt_lib0int_new(___nl__int__39));
#line 250
c_rt_lib0move(&___nl__im__57, ptd0int_to_string(___nl__im__58));
#line 250
c_rt_lib0clear(&___nl__im__58);
#line 250
___nl__bool__56 = hash0has_key(___nl__im__7, ___nl__im__57);
#line 250
c_rt_lib0clear(&___nl__im__57);
#line 250
___nl__bool__56 = !___nl__bool__56;
#line 250
if(___nl__bool__56){ goto label_187;}
#line 251
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(225)));
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
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__67, ___get_global_string_const(220)));
#line 252
c_rt_lib0clear(&___nl__im__63);
#line 252
c_rt_lib0clear(&___nl__im__67);
#line 253
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(1056)));
#line 254
___nl__im_ptr__75 = &((*___ref___rec__3).logic0field);
#line 254
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 254
___nl__im_ptr__75 = NULL;
#line 254
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(418)));
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
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__76));
#line 256
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__77));
#line 256
c_rt_lib0clear(&___nl__im__77);
#line 257
c_rt_lib0move(&___nl__im__80, c_rt_lib0int_new(___nl__int__39));
#line 257
c_rt_lib0move(&___nl__im__79, ptd0int_to_string(___nl__im__80));
#line 257
c_rt_lib0clear(&___nl__im__80);
#line 257
c_rt_lib0copy(&___nl__im__78, ___nl__im__59);
#line 257
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__79, ___nl__im__78));
#line 257
c_rt_lib0clear(&___nl__im__78);
#line 257
c_rt_lib0clear(&___nl__im__79);
#line 258
___nl__bool__81 = nlasm0eq_reg(___nl__im__62, ___nl__im__76);
#line 258
___nl__bool__81 = !___nl__bool__81;
#line 258
___nl__bool__81 = !___nl__bool__81;
#line 258
if(___nl__bool__81){ goto label_184;}
#line 259
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_mk(2, ___get_global_string_const(1356), ___nl__im__62, ___get_global_string_const(1357), ___nl__im__76));
#line 259
c_rt_lib0move(&___nl__im__85, c_rt_lib0int_new(___nl__int__39));
#line 259
c_rt_lib0move(&___nl__im__84, ptd0int_to_string(___nl__im__85));
#line 259
c_rt_lib0clear(&___nl__im__85);
#line 259
c_rt_lib0copy(&___nl__im__83, ___nl__im__82);
#line 259
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__84, ___nl__im__83));
#line 259
c_rt_lib0clear(&___nl__im__82);
#line 259
c_rt_lib0clear(&___nl__im__83);
#line 259
c_rt_lib0clear(&___nl__im__84);
#line 260
goto label_184;
#line 260
label_184:
;
#line 260
//clear ___nl__bool__81;
#line 261
goto label_200;
#line 261
label_187:
;
#line 262
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(225)));
#line 262
c_rt_lib0move(&___nl__im__87, translator_priv0value_type_to_reg_type(___nl__im__88, ___ref___rec__3));
#line 262
c_rt_lib0clear(&___nl__im__88);
#line 262
c_rt_lib0move(&___nl__im__86, translator_priv0new_register(___ref___rec__3, ___nl__im__87));
#line 262
c_rt_lib0clear(&___nl__im__87);
#line 263
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(225)));
#line 263
c_rt_lib0delete(translator_priv0print_val(___nl__im__89, ___nl__im__86, ___ref___rec__3));
#line 263
c_rt_lib0clear(&___nl__im__89);
#line 264
c_rt_lib0move(&___nl__im__90, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__86));
#line 264
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__90));
#line 264
c_rt_lib0clear(&___nl__im__90);
#line 265
goto label_200;
#line 265
label_200:
;
#line 265
//clear ___nl__bool__56;
#line 265
c_rt_lib0clear(&___nl__im__59);
#line 265
c_rt_lib0clear(&___nl__im__62);
#line 265
c_rt_lib0clear(&___nl__im__71);
#line 265
c_rt_lib0clear(&___nl__im__76);
#line 265
c_rt_lib0clear(&___nl__im__86);
#line 266
goto label_208;
#line 266
label_208:
;
#line 267
c_rt_lib0move(&___nl__im__91, translator_priv0save_registers(___ref___rec__3));
#line 267
c_rt_lib0delete(array0push(&___nl__im__36, ___nl__im__91));
#line 267
c_rt_lib0clear(&___nl__im__91);
#line 267
c_rt_lib0clear(&___nl__im__42);
#line 267
c_rt_lib0clear(&___nl__im__44);
#line 267
//clear ___nl__bool__45;
#line 267
c_rt_lib0clear(&___nl__im__46);
#line 267
c_rt_lib0clear(&___nl__im__47);
#line 267
c_rt_lib0clear(&___nl__im__49);
#line 268
___nl__int__39 = ___nl__int__39 + ___nl__int__40;
#line 268
goto label_87;
#line 268
label_220:
;
#line 269
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(152)));
#line 269
c_rt_lib0move(&___nl__im__95,___get_global_string_const(1358));
#line 269
___nl__bool__92 = c_rt_lib0eq(___nl__im__94, ___nl__im__95);
#line 269
c_rt_lib0clear(&___nl__im__94);
#line 269
c_rt_lib0clear(&___nl__im__95);
#line 269
___nl__bool__93 = !___nl__bool__92;
#line 269
if(___nl__bool__93){ goto label_233;}
#line 269
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 269
c_rt_lib0move(&___nl__im__97,___get_global_string_const(285));
#line 269
___nl__bool__92 = c_rt_lib0eq(___nl__im__96, ___nl__im__97);
#line 269
c_rt_lib0clear(&___nl__im__96);
#line 269
c_rt_lib0clear(&___nl__im__97);
#line 269
label_233:
;
#line 269
//clear ___nl__bool__93;
#line 269
___nl__bool__92 = !___nl__bool__92;
#line 269
if(___nl__bool__92){ goto label_253;}
#line 270
___nl__int__102 = 0;
#line 270
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_get(___nl__im__4, ___nl__int__102));
#line 270
//clear ___nl__int__102;
#line 270
___nl__int__104 = 0;
#line 270
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_get(___nl__im__4, ___nl__int__104));
#line 270
//clear ___nl__int__104;
#line 270
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__103, ___get_global_string_const(39)));
#line 270
c_rt_lib0clear(&___nl__im__101);
#line 270
c_rt_lib0clear(&___nl__im__103);
#line 270
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__100));
#line 270
c_rt_lib0clear(&___nl__im__100);
#line 270
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(244), ___nl__im__99));
#line 270
c_rt_lib0clear(&___nl__im__99);
#line 270
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__98));
#line 270
c_rt_lib0clear(&___nl__im__98);
#line 271
goto label_366;
#line 271
label_253:
;
#line 271
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(152)));
#line 271
c_rt_lib0move(&___nl__im__107,___get_global_string_const(37));
#line 271
___nl__bool__92 = c_rt_lib0eq(___nl__im__106, ___nl__im__107);
#line 271
c_rt_lib0clear(&___nl__im__106);
#line 271
c_rt_lib0clear(&___nl__im__107);
#line 271
___nl__bool__105 = !___nl__bool__92;
#line 271
if(___nl__bool__105){ goto label_266;}
#line 271
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 271
c_rt_lib0move(&___nl__im__109,___get_global_string_const(285));
#line 271
___nl__bool__92 = c_rt_lib0eq(___nl__im__108, ___nl__im__109);
#line 271
c_rt_lib0clear(&___nl__im__108);
#line 271
c_rt_lib0clear(&___nl__im__109);
#line 271
label_266:
;
#line 271
//clear ___nl__bool__105;
#line 271
___nl__bool__92 = !___nl__bool__92;
#line 271
if(___nl__bool__92){ goto label_306;}
#line 272
c_rt_lib0move(&___nl__im__110, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 273
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 273
___nl__bool__111 = nlasm0eq_reg_type(___nl__im__110, ___nl__im__112);
#line 273
c_rt_lib0clear(&___nl__im__112);
#line 273
___nl__bool__111 = !___nl__bool__111;
#line 274
c_rt_lib0copy(&___nl__im__113, ___nl__im__1);
#line 275
___nl__bool__114 = ___nl__bool__111;
#line 275
___nl__bool__114 = !___nl__bool__114;
#line 275
if(___nl__bool__114){ goto label_281;}
#line 275
c_rt_lib0move(&___nl__im__113, translator_priv0new_register(___ref___rec__3, ___nl__im__110));
#line 275
goto label_281;
#line 275
label_281:
;
#line 275
//clear ___nl__bool__114;
#line 276
___nl__int__119 = 0;
#line 276
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_get(___nl__im__4, ___nl__int__119));
#line 276
//clear ___nl__int__119;
#line 276
___nl__int__121 = 0;
#line 276
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_get(___nl__im__4, ___nl__int__121));
#line 276
//clear ___nl__int__121;
#line 276
c_rt_lib0move(&___nl__im__117, c_rt_lib0priv_as(___nl__im__120, ___get_global_string_const(225)));
#line 276
c_rt_lib0clear(&___nl__im__118);
#line 276
c_rt_lib0clear(&___nl__im__120);
#line 276
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__113, ___get_global_string_const(73), ___nl__im__117));
#line 276
c_rt_lib0clear(&___nl__im__117);
#line 276
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(244), ___nl__im__116));
#line 276
c_rt_lib0clear(&___nl__im__116);
#line 276
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__115));
#line 276
c_rt_lib0clear(&___nl__im__115);
#line 277
___nl__bool__122 = ___nl__bool__111;
#line 277
___nl__bool__122 = !___nl__bool__122;
#line 277
if(___nl__bool__122){ goto label_303;}
#line 277
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__113, ___ref___rec__3));
#line 277
goto label_303;
#line 277
label_303:
;
#line 277
//clear ___nl__bool__122;
#line 278
goto label_366;
#line 278
label_306:
;
#line 278
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(8));
#line 278
___nl__bool__92 = !___nl__bool__92;
#line 278
___nl__bool__123 = !___nl__bool__92;
#line 278
if(___nl__bool__123){ goto label_315;}
#line 278
c_rt_lib0move(&___nl__im__124, nlasm0is_empty(___nl__im__1));
#line 278
___nl__bool__92 = c_rt_lib0check_true_native(___nl__im__124);
#line 278
c_rt_lib0clear(&___nl__im__124);
#line 278
___nl__bool__92 = !___nl__bool__92;
#line 278
label_315:
;
#line 278
//clear ___nl__bool__123;
#line 278
___nl__bool__92 = !___nl__bool__92;
#line 278
if(___nl__bool__92){ goto label_355;}
#line 279
___nl__im_ptr__128 = &((*___ref___rec__3).logic0field);
#line 279
c_rt_lib0copy(&___nl__im__127, (*___nl__im_ptr__128));
#line 279
___nl__im_ptr__128 = NULL;
#line 279
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__127, ___get_global_string_const(418)));
#line 279
c_rt_lib0clear(&___nl__im__127);
#line 279
c_rt_lib0move(&___nl__im__125, translator_priv0var_type_to_reg_type(___nl__im__2, ___nl__im__126));
#line 279
c_rt_lib0clear(&___nl__im__126);
#line 280
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 280
___nl__bool__129 = nlasm0eq_reg_type(___nl__im__125, ___nl__im__130);
#line 280
c_rt_lib0clear(&___nl__im__130);
#line 280
___nl__bool__129 = !___nl__bool__129;
#line 281
c_rt_lib0copy(&___nl__im__131, ___nl__im__1);
#line 282
___nl__bool__132 = ___nl__bool__129;
#line 282
___nl__bool__132 = !___nl__bool__132;
#line 282
if(___nl__bool__132){ goto label_336;}
#line 282
c_rt_lib0move(&___nl__im__131, translator_priv0new_register(___ref___rec__3, ___nl__im__125));
#line 282
goto label_336;
#line 282
label_336:
;
#line 282
//clear ___nl__bool__132;
#line 283
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(152)));
#line 283
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 283
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__131, ___get_global_string_const(268), ___nl__im__135, ___get_global_string_const(270), ___nl__im__136, ___get_global_string_const(267), ___nl__im__4));
#line 283
c_rt_lib0clear(&___nl__im__135);
#line 283
c_rt_lib0clear(&___nl__im__136);
#line 283
c_rt_lib0move(&___nl__im__133, c_rt_lib0ov_mk_arg(___get_global_string_const(234), ___nl__im__134));
#line 283
c_rt_lib0clear(&___nl__im__134);
#line 283
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__133));
#line 283
c_rt_lib0clear(&___nl__im__133);
#line 284
___nl__bool__137 = ___nl__bool__129;
#line 284
___nl__bool__137 = !___nl__bool__137;
#line 284
if(___nl__bool__137){ goto label_352;}
#line 284
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__131, ___ref___rec__3));
#line 284
goto label_352;
#line 284
label_352:
;
#line 284
//clear ___nl__bool__137;
#line 285
goto label_366;
#line 285
label_355:
;
#line 286
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(152)));
#line 286
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 286
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(268), ___nl__im__140, ___get_global_string_const(270), ___nl__im__141, ___get_global_string_const(267), ___nl__im__4));
#line 286
c_rt_lib0clear(&___nl__im__140);
#line 286
c_rt_lib0clear(&___nl__im__141);
#line 286
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_string_const(234), ___nl__im__139));
#line 286
c_rt_lib0clear(&___nl__im__139);
#line 286
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__138));
#line 286
c_rt_lib0clear(&___nl__im__138);
#line 287
goto label_366;
#line 287
label_366:
;
#line 287
//clear ___nl__bool__92;
#line 287
c_rt_lib0clear(&___nl__im__110);
#line 287
//clear ___nl__bool__111;
#line 287
c_rt_lib0clear(&___nl__im__113);
#line 287
c_rt_lib0clear(&___nl__im__125);
#line 287
//clear ___nl__bool__129;
#line 287
c_rt_lib0clear(&___nl__im__131);
#line 288
___nl__int__143 = c_rt_lib0array_len(___nl__im__36);
#line 288
___nl__int__144 = 1;
#line 288
___nl__int__142 = ___nl__int__143 - ___nl__int__144;
#line 288
//clear ___nl__int__143;
#line 288
//clear ___nl__int__144;
#line 288
label_379:
;
#line 288
___nl__int__146 = 0;
#line 288
___nl__bool__145 = ___nl__int__142 >= ___nl__int__146;
#line 288
//clear ___nl__int__146;
#line 288
___nl__bool__145 = !___nl__bool__145;
#line 288
if(___nl__bool__145){ goto label_428;}
#line 289
c_rt_lib0move(&___nl__im__148, c_rt_lib0int_new(___nl__int__142));
#line 289
c_rt_lib0move(&___nl__im__147, ptd0int_to_string(___nl__im__148));
#line 289
c_rt_lib0clear(&___nl__im__148);
#line 290
___nl__bool__149 = hash0has_key(___nl__im__5, ___nl__im__147);
#line 290
___nl__bool__149 = !___nl__bool__149;
#line 290
___nl__bool__149 = !___nl__bool__149;
#line 290
if(___nl__bool__149){ goto label_396;}
#line 290
c_rt_lib0clear(&___nl__im__147);
#line 290
//clear ___nl__bool__149;
#line 290
goto label_423;
#line 290
goto label_396;
#line 290
label_396:
;
#line 290
//clear ___nl__bool__149;
#line 291
___nl__bool__150 = hash0has_key(___nl__im__6, ___nl__im__147);
#line 291
___nl__bool__150 = !___nl__bool__150;
#line 291
if(___nl__bool__150){ goto label_411;}
#line 292
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__147));
#line 292
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__152, ___get_global_string_const(1356)));
#line 292
c_rt_lib0clear(&___nl__im__152);
#line 292
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__147));
#line 292
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(1357)));
#line 292
c_rt_lib0clear(&___nl__im__154);
#line 292
c_rt_lib0delete(translator_priv0move(___nl__im__151, ___nl__im__153, ___ref___rec__3));
#line 292
c_rt_lib0clear(&___nl__im__151);
#line 292
c_rt_lib0clear(&___nl__im__153);
#line 293
goto label_411;
#line 293
label_411:
;
#line 293
//clear ___nl__bool__150;
#line 294
c_rt_lib0move(&___nl__im__157, c_rt_lib0int_new(___nl__int__142));
#line 294
c_rt_lib0move(&___nl__im__156, ptd0int_to_string(___nl__im__157));
#line 294
c_rt_lib0clear(&___nl__im__157);
#line 294
c_rt_lib0move(&___nl__im__155, hash0get_value(___nl__im__5, ___nl__im__156));
#line 294
c_rt_lib0clear(&___nl__im__156);
#line 294
___nl__bool__158 = true;
#line 294
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__155, ___nl__bool__158, ___ref___rec__3));
#line 294
c_rt_lib0clear(&___nl__im__155);
#line 294
//clear ___nl__bool__158;
#line 294
c_rt_lib0clear(&___nl__im__147);
#line 294
label_423:
;
#line 288
___nl__int__159 = 1;
#line 288
___nl__int__142 = ___nl__int__142 - ___nl__int__159;
#line 288
//clear ___nl__int__159;
#line 295
goto label_379;
#line 295
label_428:
;
#line 295
c_rt_lib0clear(&___nl__im__0);
#line 295
c_rt_lib0clear(&___nl__im__1);
#line 295
c_rt_lib0clear(&___nl__im__2);
#line 295
c_rt_lib0clear(&___nl__im__4);
#line 295
c_rt_lib0clear(&___nl__im__5);
#line 295
c_rt_lib0clear(&___nl__im__6);
#line 295
c_rt_lib0clear(&___nl__im__7);
#line 295
c_rt_lib0clear(&___nl__im__8);
#line 295
//clear ___nl__int__9;
#line 295
//clear ___nl__bool__13;
#line 295
c_rt_lib0clear(&___nl__im__19);
#line 295
c_rt_lib0clear(&___nl__im__36);
#line 295
//clear ___nl__int__37;
#line 295
//clear ___nl__int__39;
#line 295
//clear ___nl__int__40;
#line 295
//clear ___nl__bool__41;
#line 295
c_rt_lib0clear(&___nl__im__42);
#line 295
c_rt_lib0clear(&___nl__im__44);
#line 295
//clear ___nl__bool__45;
#line 295
c_rt_lib0clear(&___nl__im__46);
#line 295
c_rt_lib0clear(&___nl__im__47);
#line 295
c_rt_lib0clear(&___nl__im__49);
#line 295
//clear ___nl__int__142;
#line 295
//clear ___nl__bool__145;
#line 295
c_rt_lib0clear(&___nl__im__147);
#line 295
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
#line 299
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 299
___nl__im_ptr__4 = &((*___ref___rec__2).debug0field);
#line 299
c_rt_lib0copy(&___nl__im__5, ___nl__im__3);
#line 299
c_rt_lib0hash_set_value_dec(___nl__im_ptr__4, ___get_global_string_const(551), ___nl__im__5);
#line 299
___nl__im_ptr__4 = NULL;
#line 299
c_rt_lib0clear(&___nl__im__3);
#line 299
c_rt_lib0clear(&___nl__im__5);
#line 300
c_rt_lib0move(&___nl__im__6, translator_priv0save_registers(___ref___rec__2));
#line 301
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 301
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(223));
#line 301
if(___nl__bool__8){ goto label_46;}
#line 303
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(406));
#line 303
if(___nl__bool__8){ goto label_53;}
#line 305
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(33));
#line 305
if(___nl__bool__8){ goto label_60;}
#line 307
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1027));
#line 307
if(___nl__bool__8){ goto label_67;}
#line 309
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1028));
#line 309
if(___nl__bool__8){ goto label_72;}
#line 311
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(563));
#line 311
if(___nl__bool__8){ goto label_77;}
#line 313
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(507));
#line 313
if(___nl__bool__8){ goto label_82;}
#line 315
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1025));
#line 315
if(___nl__bool__8){ goto label_87;}
#line 317
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(236));
#line 317
if(___nl__bool__8){ goto label_92;}
#line 319
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1029));
#line 319
if(___nl__bool__8){ goto label_97;}
#line 321
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(986));
#line 321
if(___nl__bool__8){ goto label_102;}
#line 323
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(231));
#line 323
if(___nl__bool__8){ goto label_109;}
#line 325
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(232));
#line 325
if(___nl__bool__8){ goto label_114;}
#line 327
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1006));
#line 327
if(___nl__bool__8){ goto label_119;}
#line 328
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1030));
#line 328
if(___nl__bool__8){ goto label_121;}
#line 330
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1031));
#line 330
if(___nl__bool__8){ goto label_127;}
#line 332
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1032));
#line 332
if(___nl__bool__8){ goto label_134;}
#line 332
c_rt_lib0move(&___nl__im__9,___get_global_string_const(15));
#line 332
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 332
nl_die_arg(___nl__im__9);
#line 301
label_46:
;
#line 301
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(223)));
#line 301
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 302
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__10));
#line 302
c_rt_lib0delete(translator_priv0load_const(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 302
c_rt_lib0clear(&___nl__im__12);
#line 303
goto label_141;
#line 303
label_53:
;
#line 303
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(406)));
#line 303
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 304
c_rt_lib0move(&___nl__im__15, translator_priv0make_string(___nl__im__13, ___ref___rec__2));
#line 304
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__1, ___ref___rec__2));
#line 304
c_rt_lib0clear(&___nl__im__15);
#line 305
goto label_141;
#line 305
label_60:
;
#line 305
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(33)));
#line 305
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 306
c_rt_lib0move(&___nl__im__18, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 306
c_rt_lib0delete(translator_priv0load_const(___nl__im__18, ___nl__im__1, ___ref___rec__2));
#line 306
c_rt_lib0clear(&___nl__im__18);
#line 307
goto label_141;
#line 307
label_67:
;
#line 307
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1027)));
#line 307
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 308
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__im__19, ___nl__im__1, ___ref___rec__2));
#line 309
goto label_141;
#line 309
label_72:
;
#line 309
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1028)));
#line 309
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 310
c_rt_lib0delete(translator_priv0load_const(___nl__im__21, ___nl__im__1, ___ref___rec__2));
#line 311
goto label_141;
#line 311
label_77:
;
#line 311
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(563)));
#line 311
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 312
c_rt_lib0delete(translator_priv0print_variant(___nl__im__23, ___nl__im__1, ___ref___rec__2));
#line 313
goto label_141;
#line 313
label_82:
;
#line 313
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(507)));
#line 313
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 314
c_rt_lib0delete(translator_priv0print_variable(___nl__im__25, ___nl__im__1, ___ref___rec__2));
#line 315
goto label_141;
#line 315
label_87:
;
#line 315
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1025)));
#line 315
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 316
c_rt_lib0delete(translator_priv0print_val(___nl__im__27, ___nl__im__1, ___ref___rec__2));
#line 317
goto label_141;
#line 317
label_92:
;
#line 317
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(236)));
#line 317
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 318
c_rt_lib0delete(translator_priv0print_bin_op(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 319
goto label_141;
#line 319
label_97:
;
#line 319
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1029)));
#line 319
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 320
c_rt_lib0delete(translator_priv0print_unary_op(___nl__im__31, ___nl__im__1, ___ref___rec__2));
#line 321
goto label_141;
#line 321
label_102:
;
#line 321
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(986)));
#line 321
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 322
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 322
c_rt_lib0delete(translator_priv0print_fun_val(___nl__im__33, ___nl__im__1, ___nl__im__35, ___ref___rec__2));
#line 322
c_rt_lib0clear(&___nl__im__35);
#line 323
goto label_141;
#line 323
label_109:
;
#line 323
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(231)));
#line 323
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 324
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__im__36, ___nl__im__1, ___ref___rec__2));
#line 325
goto label_141;
#line 325
label_114:
;
#line 325
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(232)));
#line 325
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 326
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__im__38, ___nl__im__1, ___ref___rec__2));
#line 327
goto label_141;
#line 327
label_119:
;
#line 328
goto label_141;
#line 328
label_121:
;
#line 328
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1030)));
#line 328
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 329
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 329
nl_die_arg(___nl__im__42);
#line 330
goto label_141;
#line 330
label_127:
;
#line 330
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1031)));
#line 330
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 331
c_rt_lib0move(&___nl__im__45,___get_global_string_const(781));
#line 331
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__43, ___nl__im__45, ___nl__im__1, ___ref___rec__2));
#line 331
c_rt_lib0clear(&___nl__im__45);
#line 332
goto label_141;
#line 332
label_134:
;
#line 332
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1032)));
#line 332
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 333
c_rt_lib0move(&___nl__im__48,___get_global_string_const(191));
#line 333
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__46, ___nl__im__48, ___nl__im__1, ___ref___rec__2));
#line 333
c_rt_lib0clear(&___nl__im__48);
#line 334
goto label_141;
#line 334
label_141:
;
#line 335
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__6, ___ref___rec__2));
#line 335
c_rt_lib0clear(&___nl__im__0);
#line 335
c_rt_lib0clear(&___nl__im__1);
#line 335
c_rt_lib0clear(&___nl__im__6);
#line 335
c_rt_lib0clear(&___nl__im__7);
#line 335
//clear ___nl__bool__8;
#line 335
c_rt_lib0clear(&___nl__im__9);
#line 335
//clear ___nl__int__10;
#line 335
c_rt_lib0clear(&___nl__im__11);
#line 335
c_rt_lib0clear(&___nl__im__13);
#line 335
c_rt_lib0clear(&___nl__im__14);
#line 335
//clear ___nl__bool__16;
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__19);
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0clear(&___nl__im__22);
#line 335
c_rt_lib0clear(&___nl__im__23);
#line 335
c_rt_lib0clear(&___nl__im__24);
#line 335
c_rt_lib0clear(&___nl__im__25);
#line 335
c_rt_lib0clear(&___nl__im__26);
#line 335
c_rt_lib0clear(&___nl__im__27);
#line 335
c_rt_lib0clear(&___nl__im__28);
#line 335
c_rt_lib0clear(&___nl__im__29);
#line 335
c_rt_lib0clear(&___nl__im__30);
#line 335
c_rt_lib0clear(&___nl__im__31);
#line 335
c_rt_lib0clear(&___nl__im__32);
#line 335
c_rt_lib0clear(&___nl__im__33);
#line 335
c_rt_lib0clear(&___nl__im__34);
#line 335
c_rt_lib0clear(&___nl__im__36);
#line 335
c_rt_lib0clear(&___nl__im__37);
#line 335
c_rt_lib0clear(&___nl__im__38);
#line 335
c_rt_lib0clear(&___nl__im__39);
#line 335
c_rt_lib0clear(&___nl__im__40);
#line 335
c_rt_lib0clear(&___nl__im__41);
#line 335
c_rt_lib0clear(&___nl__im__42);
#line 335
c_rt_lib0clear(&___nl__im__43);
#line 335
c_rt_lib0clear(&___nl__im__44);
#line 335
c_rt_lib0clear(&___nl__im__46);
#line 335
c_rt_lib0clear(&___nl__im__47);
#line 335
return NULL;
return NULL;

}

ImmT  translator_priv0print_variable(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 339
c_rt_lib0move(&___nl__im__3, translator_priv0get_var_register(___nl__im__0, ___ref___rec__2));
#line 339
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__3, ___ref___rec__2));
#line 339
c_rt_lib0clear(&___nl__im__3);
#line 339
c_rt_lib0clear(&___nl__im__0);
#line 339
c_rt_lib0clear(&___nl__im__1);
#line 339
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
#line 344
___nl__bool__5 = true;
#line 344
c_rt_lib0move(&___nl__im__4, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__5, ___ref___rec__3));
#line 344
//clear ___nl__bool__5;
#line 345
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 345
___nl__int__10 = 1;
#line 345
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 345
//clear ___nl__int__9;
#line 345
//clear ___nl__int__10;
#line 345
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__4, ___nl__int__8));
#line 345
//clear ___nl__int__8;
#line 345
___nl__int__13 = c_rt_lib0array_len(___nl__im__4);
#line 345
___nl__int__14 = 1;
#line 345
___nl__int__12 = ___nl__int__13 - ___nl__int__14;
#line 345
//clear ___nl__int__13;
#line 345
//clear ___nl__int__14;
#line 345
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__12));
#line 345
//clear ___nl__int__12;
#line 345
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(220)));
#line 345
c_rt_lib0clear(&___nl__im__7);
#line 345
c_rt_lib0clear(&___nl__im__11);
#line 346
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__6, ___ref___rec__3));
#line 347
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 347
___nl__int__19 = 1;
#line 347
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 347
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__20));
#line 347
//clear ___nl__int__19;
#line 347
c_rt_lib0clear(&___nl__im__20);
#line 347
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 347
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__17, ___get_global_string_const(220), ___nl__im__18, ___get_global_string_const(206), ___nl__im__21));
#line 347
c_rt_lib0clear(&___nl__im__17);
#line 347
c_rt_lib0clear(&___nl__im__18);
#line 347
c_rt_lib0clear(&___nl__im__21);
#line 347
c_rt_lib0move(&___nl__im__15, translator_priv0calc_val(___nl__im__16, ___ref___rec__3));
#line 347
c_rt_lib0clear(&___nl__im__16);
#line 348
c_rt_lib0move(&___nl__im__24,___get_global_string_const(781));
#line 348
___nl__bool__23 = c_rt_lib0eq(___nl__im__1, ___nl__im__24);
#line 348
c_rt_lib0clear(&___nl__im__24);
#line 348
if(___nl__bool__23){ goto label_40;}
#line 348
c_rt_lib0move(&___nl__im__22,___get_global_string_const(367));
#line 348
goto label_42;
#line 348
label_40:
;
#line 348
c_rt_lib0move(&___nl__im__22,___get_global_string_const(369));
#line 348
label_42:
;
#line 348
//clear ___nl__bool__23;
#line 348
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__6, ___nl__im__6, ___nl__im__15, ___nl__im__22, ___ref___rec__3));
#line 348
c_rt_lib0clear(&___nl__im__22);
#line 349
___nl__bool__25 = true;
#line 349
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__4, ___nl__bool__25, ___ref___rec__3));
#line 349
//clear ___nl__bool__25;
#line 349
c_rt_lib0clear(&___nl__im__0);
#line 349
c_rt_lib0clear(&___nl__im__1);
#line 349
c_rt_lib0clear(&___nl__im__2);
#line 349
c_rt_lib0clear(&___nl__im__4);
#line 349
c_rt_lib0clear(&___nl__im__6);
#line 349
c_rt_lib0clear(&___nl__im__15);
#line 349
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
#line 353
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 353
c_rt_lib0move(&___nl__im__5,___get_global_string_const(365));
#line 353
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 353
c_rt_lib0clear(&___nl__im__4);
#line 353
c_rt_lib0clear(&___nl__im__5);
#line 353
if(___nl__bool__3){ goto label_11;}
#line 353
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 353
c_rt_lib0move(&___nl__im__7,___get_global_string_const(367));
#line 353
___nl__bool__3 = c_rt_lib0eq(___nl__im__6, ___nl__im__7);
#line 353
c_rt_lib0clear(&___nl__im__6);
#line 353
c_rt_lib0clear(&___nl__im__7);
#line 353
label_11:
;
#line 353
if(___nl__bool__3){ goto label_18;}
#line 353
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 353
c_rt_lib0move(&___nl__im__9,___get_global_string_const(369));
#line 353
___nl__bool__3 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 353
c_rt_lib0clear(&___nl__im__8);
#line 353
c_rt_lib0clear(&___nl__im__9);
#line 353
label_18:
;
#line 353
___nl__bool__3 = !___nl__bool__3;
#line 353
if(___nl__bool__3){ goto label_45;}
#line 354
c_rt_lib0move(&___nl__im__11, nlasm0is_empty(___nl__im__1));
#line 354
___nl__bool__10 = c_rt_lib0check_true_native(___nl__im__11);
#line 354
c_rt_lib0clear(&___nl__im__11);
#line 354
___nl__bool__10 = !___nl__bool__10;
#line 354
if(___nl__bool__10){ goto label_32;}
#line 354
c_rt_lib0clear(&___nl__im__0);
#line 354
c_rt_lib0clear(&___nl__im__1);
#line 354
//clear ___nl__bool__3;
#line 354
//clear ___nl__bool__10;
#line 354
return NULL;
#line 354
goto label_32;
#line 354
label_32:
;
#line 354
//clear ___nl__bool__10;
#line 355
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 355
c_rt_lib0delete(translator_priv0print_val(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 355
c_rt_lib0clear(&___nl__im__12);
#line 356
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 356
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__1, ___get_global_string_const(560), ___nl__im__15));
#line 356
c_rt_lib0clear(&___nl__im__15);
#line 356
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__14));
#line 356
c_rt_lib0clear(&___nl__im__14);
#line 356
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__13));
#line 356
c_rt_lib0clear(&___nl__im__13);
#line 357
goto label_179;
#line 357
label_45:
;
#line 357
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 357
c_rt_lib0move(&___nl__im__17,___get_global_string_const(781));
#line 357
___nl__bool__3 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 357
c_rt_lib0clear(&___nl__im__16);
#line 357
c_rt_lib0clear(&___nl__im__17);
#line 357
if(___nl__bool__3){ goto label_57;}
#line 357
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 357
c_rt_lib0move(&___nl__im__19,___get_global_string_const(191));
#line 357
___nl__bool__3 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 357
c_rt_lib0clear(&___nl__im__18);
#line 357
c_rt_lib0clear(&___nl__im__19);
#line 357
label_57:
;
#line 357
___nl__bool__3 = !___nl__bool__3;
#line 357
if(___nl__bool__3){ goto label_116;}
#line 358
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 358
___nl__bool__22 = true;
#line 358
c_rt_lib0move(&___nl__im__20, translator_priv0get_value_of_lvalue(___nl__im__21, ___nl__bool__22, ___ref___rec__2));
#line 358
c_rt_lib0clear(&___nl__im__21);
#line 358
//clear ___nl__bool__22;
#line 359
___nl__int__26 = c_rt_lib0array_len(___nl__im__20);
#line 359
___nl__int__27 = 1;
#line 359
___nl__int__25 = ___nl__int__26 - ___nl__int__27;
#line 359
//clear ___nl__int__26;
#line 359
//clear ___nl__int__27;
#line 359
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__20, ___nl__int__25));
#line 359
//clear ___nl__int__25;
#line 359
___nl__int__30 = c_rt_lib0array_len(___nl__im__20);
#line 359
___nl__int__31 = 1;
#line 359
___nl__int__29 = ___nl__int__30 - ___nl__int__31;
#line 359
//clear ___nl__int__30;
#line 359
//clear ___nl__int__31;
#line 359
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__20, ___nl__int__29));
#line 359
//clear ___nl__int__29;
#line 359
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(220)));
#line 359
c_rt_lib0clear(&___nl__im__24);
#line 359
c_rt_lib0clear(&___nl__im__28);
#line 360
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 360
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(222)));
#line 360
c_rt_lib0clear(&___nl__im__35);
#line 360
___nl__int__37 = 1;
#line 360
c_rt_lib0move(&___nl__im__38, c_rt_lib0int_new(___nl__int__37));
#line 360
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__38));
#line 360
//clear ___nl__int__37;
#line 360
c_rt_lib0clear(&___nl__im__38);
#line 360
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 360
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__34, ___get_global_string_const(220), ___nl__im__36, ___get_global_string_const(206), ___nl__im__39));
#line 360
c_rt_lib0clear(&___nl__im__34);
#line 360
c_rt_lib0clear(&___nl__im__36);
#line 360
c_rt_lib0clear(&___nl__im__39);
#line 360
c_rt_lib0move(&___nl__im__32, translator_priv0dest_val(___nl__im__33, ___ref___rec__2));
#line 360
c_rt_lib0clear(&___nl__im__33);
#line 361
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 361
c_rt_lib0move(&___nl__im__43,___get_global_string_const(781));
#line 361
___nl__bool__41 = c_rt_lib0eq(___nl__im__42, ___nl__im__43);
#line 361
c_rt_lib0clear(&___nl__im__42);
#line 361
c_rt_lib0clear(&___nl__im__43);
#line 361
if(___nl__bool__41){ goto label_105;}
#line 361
c_rt_lib0move(&___nl__im__40,___get_global_string_const(367));
#line 361
goto label_107;
#line 361
label_105:
;
#line 361
c_rt_lib0move(&___nl__im__40,___get_global_string_const(369));
#line 361
label_107:
;
#line 361
//clear ___nl__bool__41;
#line 361
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__23, ___nl__im__23, ___nl__im__32, ___nl__im__40, ___ref___rec__2));
#line 361
c_rt_lib0clear(&___nl__im__40);
#line 362
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__23, ___ref___rec__2));
#line 363
___nl__bool__44 = true;
#line 363
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__20, ___nl__bool__44, ___ref___rec__2));
#line 363
//clear ___nl__bool__44;
#line 364
goto label_179;
#line 364
label_116:
;
#line 364
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 364
c_rt_lib0move(&___nl__im__46,___get_global_string_const(300));
#line 364
___nl__bool__3 = c_rt_lib0eq(___nl__im__45, ___nl__im__46);
#line 364
c_rt_lib0clear(&___nl__im__45);
#line 364
c_rt_lib0clear(&___nl__im__46);
#line 364
___nl__bool__3 = !___nl__bool__3;
#line 364
if(___nl__bool__3){ goto label_175;}
#line 365
c_rt_lib0move(&___nl__im__48, nlasm0is_empty(___nl__im__1));
#line 365
___nl__bool__47 = c_rt_lib0check_true_native(___nl__im__48);
#line 365
c_rt_lib0clear(&___nl__im__48);
#line 365
___nl__bool__47 = !___nl__bool__47;
#line 365
if(___nl__bool__47){ goto label_138;}
#line 365
c_rt_lib0clear(&___nl__im__0);
#line 365
c_rt_lib0clear(&___nl__im__1);
#line 365
//clear ___nl__bool__3;
#line 365
c_rt_lib0clear(&___nl__im__20);
#line 365
c_rt_lib0clear(&___nl__im__23);
#line 365
c_rt_lib0clear(&___nl__im__32);
#line 365
//clear ___nl__bool__47;
#line 365
return NULL;
#line 365
goto label_138;
#line 365
label_138:
;
#line 365
//clear ___nl__bool__47;
#line 366
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 366
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(220)));
#line 366
c_rt_lib0clear(&___nl__im__51);
#line 366
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 366
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(220)));
#line 366
c_rt_lib0clear(&___nl__im__53);
#line 366
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__52, ___get_global_string_const(1030)));
#line 366
c_rt_lib0clear(&___nl__im__50);
#line 366
c_rt_lib0clear(&___nl__im__52);
#line 367
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(152)));
#line 367
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(168)));
#line 367
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(152), ___nl__im__56, ___get_global_string_const(168), ___nl__im__57));
#line 367
c_rt_lib0clear(&___nl__im__56);
#line 367
c_rt_lib0clear(&___nl__im__57);
#line 367
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_string_const(239), ___nl__im__55));
#line 367
c_rt_lib0clear(&___nl__im__55);
#line 367
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__54));
#line 367
c_rt_lib0clear(&___nl__im__54);
#line 368
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__1));
#line 368
c_rt_lib0move(&___nl__im__61,___get_global_string_const(39));
#line 368
___nl__int__62 = 1;
#line 368
___nl__int__62 = -___nl__int__62;
#line 368
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 368
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 368
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_mk(5, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__60, ___get_global_string_const(562), ___nl__im__61, ___get_global_string_const(567), ___nl__im__63, ___get_global_string_const(582), ___nl__im__64));
#line 368
c_rt_lib0clear(&___nl__im__60);
#line 368
c_rt_lib0clear(&___nl__im__61);
#line 368
//clear ___nl__int__62;
#line 368
c_rt_lib0clear(&___nl__im__63);
#line 368
c_rt_lib0clear(&___nl__im__64);
#line 368
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__59));
#line 368
c_rt_lib0clear(&___nl__im__59);
#line 368
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__58));
#line 368
c_rt_lib0clear(&___nl__im__58);
#line 369
goto label_179;
#line 369
label_175:
;
#line 370
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_mk(0));
#line 370
nl_die_arg(___nl__im__65);
#line 371
goto label_179;
#line 371
label_179:
;
#line 371
//clear ___nl__bool__3;
#line 371
c_rt_lib0clear(&___nl__im__20);
#line 371
c_rt_lib0clear(&___nl__im__23);
#line 371
c_rt_lib0clear(&___nl__im__32);
#line 371
c_rt_lib0clear(&___nl__im__49);
#line 371
c_rt_lib0clear(&___nl__im__65);
#line 371
c_rt_lib0clear(&___nl__im__0);
#line 371
c_rt_lib0clear(&___nl__im__1);
#line 371
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT * ___nl__im_ptr__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
INT  ___nl__int__38 = 0;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
bool  ___nl__bool__59 = false;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
bool  ___nl__bool__65 = false;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
INT  ___nl__int__72 = 0;
INT  ___nl__int__73 = 0;
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
bool  ___nl__bool__77 = false;
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
ImmT * ___nl__im_ptr__91 = NULL;
ImmT  ___nl__im__92 = NULL;
bool  ___nl__bool__93 = false;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
INT  ___nl__int__96 = 0;
INT  ___nl__int__97 = 0;
INT  ___nl__int__98 = 0;
ImmT  ___nl__im__99 = NULL;
INT  ___nl__int__100 = 0;
INT  ___nl__int__101 = 0;
INT  ___nl__int__102 = 0;
INT  ___nl__int__103 = 0;
INT  ___nl__int__104 = 0;
INT  ___nl__int__105 = 0;
bool  ___nl__bool__106 = false;
INT  ___nl__int__107 = 0;
ImmT  ___nl__im__108 = NULL;
bool  ___nl__bool__109 = false;
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
ImmT  ___nl__im__136 = NULL;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
INT  ___nl__int__141 = 0;
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
bool  ___nl__bool__153 = false;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
bool  ___nl__bool__157 = false;
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
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
INT  ___nl__int__180 = 0;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
bool  ___nl__bool__185 = false;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
bool  ___nl__bool__190 = false;
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
INT  ___nl__int__202 = 0;
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
ImmT  ___nl__im__217 = NULL;
ImmT  ___nl__im__218 = NULL;
ImmT  ___nl__im__219 = NULL;
ImmT  ___nl__im__220 = NULL;
ImmT  ___nl__im__221 = NULL;
bool  ___nl__bool__222 = false;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
INT  ___nl__int__225 = 0;
INT  ___nl__int__226 = 0;
INT  ___nl__int__227 = 0;
ImmT  ___nl__im__228 = NULL;
INT  ___nl__int__229 = 0;
INT  ___nl__int__230 = 0;
INT  ___nl__int__231 = 0;
ImmT  ___nl__im__232 = NULL;
bool  ___nl__bool__233 = false;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
INT  ___nl__int__236 = 0;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
INT  ___nl__int__247 = 0;
ImmT  ___nl__im__248 = NULL;
bool  ___nl__bool__249 = false;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
#line 375
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 375
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 375
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(236)));
#line 375
c_rt_lib0clear(&___nl__im__4);
#line 375
c_rt_lib0clear(&___nl__im__5);
#line 376
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 376
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1036));
#line 376
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 376
c_rt_lib0clear(&___nl__im__7);
#line 376
c_rt_lib0clear(&___nl__im__8);
#line 376
___nl__bool__6 = !___nl__bool__6;
#line 376
if(___nl__bool__6){ goto label_146;}
#line 379
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 379
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(206)));
#line 379
c_rt_lib0clear(&___nl__im__13);
#line 379
___nl__im_ptr__16 = &((*___ref___rec__2).logic0field);
#line 379
c_rt_lib0copy(&___nl__im__15, (*___nl__im_ptr__16));
#line 379
___nl__im_ptr__16 = NULL;
#line 379
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(418)));
#line 379
c_rt_lib0clear(&___nl__im__15);
#line 379
___nl__bool__11 = tct0is_own_type(___nl__im__12, ___nl__im__14);
#line 379
c_rt_lib0clear(&___nl__im__12);
#line 379
c_rt_lib0clear(&___nl__im__14);
#line 379
___nl__bool__11 = !___nl__bool__11;
#line 379
if(___nl__bool__11){ goto label_51;}
#line 380
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 380
___nl__bool__18 = false;
#line 380
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__17, ___nl__bool__18, ___ref___rec__2));
#line 380
c_rt_lib0clear(&___nl__im__17);
#line 380
//clear ___nl__bool__18;
#line 381
___nl__int__21 = c_rt_lib0array_len(___nl__im__9);
#line 381
___nl__int__22 = 1;
#line 381
___nl__int__20 = ___nl__int__21 - ___nl__int__22;
#line 381
//clear ___nl__int__21;
#line 381
//clear ___nl__int__22;
#line 381
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__9, ___nl__int__20));
#line 381
//clear ___nl__int__20;
#line 381
___nl__int__25 = c_rt_lib0array_len(___nl__im__9);
#line 381
___nl__int__26 = 1;
#line 381
___nl__int__24 = ___nl__int__25 - ___nl__int__26;
#line 381
//clear ___nl__int__25;
#line 381
//clear ___nl__int__26;
#line 381
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__9, ___nl__int__24));
#line 381
//clear ___nl__int__24;
#line 381
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__23, ___get_global_string_const(220)));
#line 381
c_rt_lib0clear(&___nl__im__19);
#line 381
c_rt_lib0clear(&___nl__im__23);
#line 382
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 382
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__27, ___nl__im__10, ___ref___rec__2));
#line 382
c_rt_lib0clear(&___nl__im__27);
#line 383
goto label_138;
#line 383
label_51:
;
#line 383
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 383
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(220)));
#line 383
c_rt_lib0clear(&___nl__im__29);
#line 383
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(507));
#line 383
c_rt_lib0clear(&___nl__im__28);
#line 383
___nl__bool__11 = !___nl__bool__11;
#line 383
if(___nl__bool__11){ goto label_85;}
#line 384
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 384
___nl__bool__31 = false;
#line 384
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__30, ___nl__bool__31, ___ref___rec__2));
#line 384
c_rt_lib0clear(&___nl__im__30);
#line 384
//clear ___nl__bool__31;
#line 385
___nl__int__34 = c_rt_lib0array_len(___nl__im__9);
#line 385
___nl__int__35 = 1;
#line 385
___nl__int__33 = ___nl__int__34 - ___nl__int__35;
#line 385
//clear ___nl__int__34;
#line 385
//clear ___nl__int__35;
#line 385
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__9, ___nl__int__33));
#line 385
//clear ___nl__int__33;
#line 385
___nl__int__38 = c_rt_lib0array_len(___nl__im__9);
#line 385
___nl__int__39 = 1;
#line 385
___nl__int__37 = ___nl__int__38 - ___nl__int__39;
#line 385
//clear ___nl__int__38;
#line 385
//clear ___nl__int__39;
#line 385
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__9, ___nl__int__37));
#line 385
//clear ___nl__int__37;
#line 385
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__36, ___get_global_string_const(220)));
#line 385
c_rt_lib0clear(&___nl__im__32);
#line 385
c_rt_lib0clear(&___nl__im__36);
#line 386
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 386
c_rt_lib0delete(translator_priv0print_val(___nl__im__40, ___nl__im__10, ___ref___rec__2));
#line 386
c_rt_lib0clear(&___nl__im__40);
#line 387
goto label_138;
#line 387
label_85:
;
#line 388
c_rt_lib0move(&___nl__im__41, nlasm0is_empty(___nl__im__1));
#line 389
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__41);
#line 389
___nl__bool__42 = !___nl__bool__42;
#line 389
if(___nl__bool__42){ goto label_101;}
#line 390
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 390
___nl__int__44 = 1;
#line 390
___nl__int__44 = -___nl__int__44;
#line 390
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__44));
#line 390
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 390
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__43, ___get_global_string_const(219), ___nl__im__45, ___get_global_string_const(353), ___nl__im__46));
#line 390
c_rt_lib0clear(&___nl__im__43);
#line 390
//clear ___nl__int__44;
#line 390
c_rt_lib0clear(&___nl__im__45);
#line 390
c_rt_lib0clear(&___nl__im__46);
#line 391
goto label_101;
#line 391
label_101:
;
#line 391
//clear ___nl__bool__42;
#line 392
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 392
c_rt_lib0move(&___nl__im__47, translator_priv0dest_val(___nl__im__48, ___ref___rec__2));
#line 392
c_rt_lib0clear(&___nl__im__48);
#line 393
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 393
___nl__bool__50 = false;
#line 393
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__49, ___nl__bool__50, ___ref___rec__2));
#line 393
c_rt_lib0clear(&___nl__im__49);
#line 393
//clear ___nl__bool__50;
#line 394
___nl__int__53 = c_rt_lib0array_len(___nl__im__9);
#line 394
___nl__int__54 = 1;
#line 394
___nl__int__52 = ___nl__int__53 - ___nl__int__54;
#line 394
//clear ___nl__int__53;
#line 394
//clear ___nl__int__54;
#line 394
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__9, ___nl__int__52));
#line 394
//clear ___nl__int__52;
#line 394
___nl__int__57 = c_rt_lib0array_len(___nl__im__9);
#line 394
___nl__int__58 = 1;
#line 394
___nl__int__56 = ___nl__int__57 - ___nl__int__58;
#line 394
//clear ___nl__int__57;
#line 394
//clear ___nl__int__58;
#line 394
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__9, ___nl__int__56));
#line 394
//clear ___nl__int__56;
#line 394
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__55, ___get_global_string_const(220)));
#line 394
c_rt_lib0clear(&___nl__im__51);
#line 394
c_rt_lib0clear(&___nl__im__55);
#line 395
c_rt_lib0delete(translator_priv0move(___nl__im__10, ___nl__im__47, ___ref___rec__2));
#line 396
___nl__bool__59 = c_rt_lib0check_true_native(___nl__im__41);
#line 396
___nl__bool__59 = !___nl__bool__59;
#line 396
___nl__bool__59 = !___nl__bool__59;
#line 396
if(___nl__bool__59){ goto label_135;}
#line 397
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__10, ___ref___rec__2));
#line 398
goto label_135;
#line 398
label_135:
;
#line 398
//clear ___nl__bool__59;
#line 399
goto label_138;
#line 399
label_138:
;
#line 399
//clear ___nl__bool__11;
#line 399
c_rt_lib0clear(&___nl__im__41);
#line 399
c_rt_lib0clear(&___nl__im__47);
#line 400
___nl__bool__60 = false;
#line 400
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__9, ___nl__bool__60, ___ref___rec__2));
#line 400
//clear ___nl__bool__60;
#line 401
goto label_726;
#line 401
label_146:
;
#line 401
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 401
c_rt_lib0move(&___nl__im__62,___get_global_string_const(1050));
#line 401
___nl__bool__6 = c_rt_lib0eq(___nl__im__61, ___nl__im__62);
#line 401
c_rt_lib0clear(&___nl__im__61);
#line 401
c_rt_lib0clear(&___nl__im__62);
#line 401
___nl__bool__6 = !___nl__bool__6;
#line 401
if(___nl__bool__6){ goto label_184;}
#line 402
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 402
___nl__bool__65 = true;
#line 402
c_rt_lib0move(&___nl__im__63, translator_priv0get_value_of_lvalue(___nl__im__64, ___nl__bool__65, ___ref___rec__2));
#line 402
c_rt_lib0clear(&___nl__im__64);
#line 402
//clear ___nl__bool__65;
#line 403
___nl__int__69 = c_rt_lib0array_len(___nl__im__63);
#line 403
___nl__int__70 = 1;
#line 403
___nl__int__68 = ___nl__int__69 - ___nl__int__70;
#line 403
//clear ___nl__int__69;
#line 403
//clear ___nl__int__70;
#line 403
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__63, ___nl__int__68));
#line 403
//clear ___nl__int__68;
#line 403
___nl__int__73 = c_rt_lib0array_len(___nl__im__63);
#line 403
___nl__int__74 = 1;
#line 403
___nl__int__72 = ___nl__int__73 - ___nl__int__74;
#line 403
//clear ___nl__int__73;
#line 403
//clear ___nl__int__74;
#line 403
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_get(___nl__im__63, ___nl__int__72));
#line 403
//clear ___nl__int__72;
#line 403
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__71, ___get_global_string_const(220)));
#line 403
c_rt_lib0clear(&___nl__im__67);
#line 403
c_rt_lib0clear(&___nl__im__71);
#line 404
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 404
c_rt_lib0move(&___nl__im__75, translator_priv0calc_val(___nl__im__76, ___ref___rec__2));
#line 404
c_rt_lib0clear(&___nl__im__76);
#line 405
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__66, ___nl__im__75, ___ref___rec__2));
#line 406
___nl__bool__77 = true;
#line 406
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__63, ___nl__bool__77, ___ref___rec__2));
#line 406
//clear ___nl__bool__77;
#line 407
goto label_726;
#line 407
label_184:
;
#line 407
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 407
c_rt_lib0move(&___nl__im__79,___get_global_string_const(1022));
#line 407
___nl__bool__6 = c_rt_lib0eq(___nl__im__78, ___nl__im__79);
#line 407
c_rt_lib0clear(&___nl__im__78);
#line 407
c_rt_lib0clear(&___nl__im__79);
#line 407
if(___nl__bool__6){ goto label_196;}
#line 407
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 407
c_rt_lib0move(&___nl__im__81,___get_global_string_const(1023));
#line 407
___nl__bool__6 = c_rt_lib0eq(___nl__im__80, ___nl__im__81);
#line 407
c_rt_lib0clear(&___nl__im__80);
#line 407
c_rt_lib0clear(&___nl__im__81);
#line 407
label_196:
;
#line 407
if(___nl__bool__6){ goto label_203;}
#line 407
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 407
c_rt_lib0move(&___nl__im__83,___get_global_string_const(578));
#line 407
___nl__bool__6 = c_rt_lib0eq(___nl__im__82, ___nl__im__83);
#line 407
c_rt_lib0clear(&___nl__im__82);
#line 407
c_rt_lib0clear(&___nl__im__83);
#line 407
label_203:
;
#line 407
if(___nl__bool__6){ goto label_210;}
#line 407
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 407
c_rt_lib0move(&___nl__im__85,___get_global_string_const(1024));
#line 407
___nl__bool__6 = c_rt_lib0eq(___nl__im__84, ___nl__im__85);
#line 407
c_rt_lib0clear(&___nl__im__84);
#line 407
c_rt_lib0clear(&___nl__im__85);
#line 407
label_210:
;
#line 407
___nl__bool__6 = !___nl__bool__6;
#line 407
if(___nl__bool__6){ goto label_553;}
#line 408
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 408
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(206)));
#line 408
c_rt_lib0clear(&___nl__im__88);
#line 408
___nl__im_ptr__91 = &((*___ref___rec__2).logic0field);
#line 408
c_rt_lib0copy(&___nl__im__90, (*___nl__im_ptr__91));
#line 408
___nl__im_ptr__91 = NULL;
#line 408
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_string_const(418)));
#line 408
c_rt_lib0clear(&___nl__im__90);
#line 408
___nl__bool__86 = tct0is_own_type(___nl__im__87, ___nl__im__89);
#line 408
c_rt_lib0clear(&___nl__im__87);
#line 408
c_rt_lib0clear(&___nl__im__89);
#line 408
___nl__bool__86 = !___nl__bool__86;
#line 408
if(___nl__bool__86){ goto label_373;}
#line 409
___nl__bool__93 = true;
#line 409
c_rt_lib0move(&___nl__im__92, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__93, ___ref___rec__2));
#line 409
//clear ___nl__bool__93;
#line 410
___nl__int__97 = c_rt_lib0array_len(___nl__im__92);
#line 410
___nl__int__98 = 1;
#line 410
___nl__int__96 = ___nl__int__97 - ___nl__int__98;
#line 410
//clear ___nl__int__97;
#line 410
//clear ___nl__int__98;
#line 410
c_rt_lib0move(&___nl__im__95, c_rt_lib0array_get(___nl__im__92, ___nl__int__96));
#line 410
//clear ___nl__int__96;
#line 410
___nl__int__101 = c_rt_lib0array_len(___nl__im__92);
#line 410
___nl__int__102 = 1;
#line 410
___nl__int__100 = ___nl__int__101 - ___nl__int__102;
#line 410
//clear ___nl__int__101;
#line 410
//clear ___nl__int__102;
#line 410
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_get(___nl__im__92, ___nl__int__100));
#line 410
//clear ___nl__int__100;
#line 410
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__99, ___get_global_string_const(220)));
#line 410
c_rt_lib0clear(&___nl__im__95);
#line 410
c_rt_lib0clear(&___nl__im__99);
#line 410
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__94, ___ref___rec__2));
#line 410
c_rt_lib0clear(&___nl__im__94);
#line 411
___nl__int__104 = c_rt_lib0array_len(___nl__im__92);
#line 411
___nl__int__105 = 1;
#line 411
___nl__int__103 = ___nl__int__104 - ___nl__int__105;
#line 411
//clear ___nl__int__104;
#line 411
//clear ___nl__int__105;
#line 411
label_253:
;
#line 411
___nl__int__107 = 0;
#line 411
___nl__bool__106 = ___nl__int__103 >= ___nl__int__107;
#line 411
//clear ___nl__int__107;
#line 411
___nl__bool__106 = !___nl__bool__106;
#line 411
if(___nl__bool__106){ goto label_371;}
#line 412
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_get(___nl__im__92, ___nl__int__103));
#line 412
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(220));
#line 412
if(___nl__bool__109){ goto label_281;}
#line 413
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(363));
#line 413
if(___nl__bool__109){ goto label_285;}
#line 414
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(1339));
#line 414
if(___nl__bool__109){ goto label_289;}
#line 415
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(577));
#line 415
if(___nl__bool__109){ goto label_293;}
#line 416
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(1049));
#line 416
if(___nl__bool__109){ goto label_297;}
#line 417
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(255));
#line 417
if(___nl__bool__109){ goto label_301;}
#line 419
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(257));
#line 419
if(___nl__bool__109){ goto label_312;}
#line 421
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(261));
#line 421
if(___nl__bool__109){ goto label_323;}
#line 423
___nl__bool__109 = c_rt_lib0priv_is(___nl__im__108, ___get_global_string_const(259));
#line 423
if(___nl__bool__109){ goto label_334;}
#line 423
c_rt_lib0move(&___nl__im__110,___get_global_string_const(15));
#line 423
c_rt_lib0move(&___nl__im__110, c_rt_lib0array_mk(2, ___nl__im__110, ___nl__im__108));
#line 423
nl_die_arg(___nl__im__110);
#line 412
label_281:
;
#line 412
c_rt_lib0move(&___nl__im__112, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(220)));
#line 412
c_rt_lib0copy(&___nl__im__111, ___nl__im__112);
#line 413
goto label_345;
#line 413
label_285:
;
#line 413
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(363)));
#line 413
c_rt_lib0copy(&___nl__im__113, ___nl__im__114);
#line 414
goto label_345;
#line 414
label_289:
;
#line 414
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(1339)));
#line 414
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 415
goto label_345;
#line 415
label_293:
;
#line 415
c_rt_lib0move(&___nl__im__118, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(577)));
#line 415
c_rt_lib0copy(&___nl__im__117, ___nl__im__118);
#line 416
goto label_345;
#line 416
label_297:
;
#line 416
c_rt_lib0move(&___nl__im__120, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(1049)));
#line 416
c_rt_lib0copy(&___nl__im__119, ___nl__im__120);
#line 417
goto label_345;
#line 417
label_301:
;
#line 417
c_rt_lib0move(&___nl__im__122, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(255)));
#line 417
c_rt_lib0copy(&___nl__im__121, ___nl__im__122);
#line 418
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(1352)));
#line 418
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(1351)));
#line 418
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__121, ___get_global_string_const(605)));
#line 418
c_rt_lib0delete(translator_priv0release_field(___nl__im__123, ___nl__im__124, ___nl__im__125, ___ref___rec__2));
#line 418
c_rt_lib0clear(&___nl__im__123);
#line 418
c_rt_lib0clear(&___nl__im__124);
#line 418
c_rt_lib0clear(&___nl__im__125);
#line 419
goto label_345;
#line 419
label_312:
;
#line 419
c_rt_lib0move(&___nl__im__127, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(257)));
#line 419
c_rt_lib0copy(&___nl__im__126, ___nl__im__127);
#line 420
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(1352)));
#line 420
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(1351)));
#line 420
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__126, ___get_global_string_const(363)));
#line 420
c_rt_lib0delete(translator_priv0release_index(___nl__im__128, ___nl__im__129, ___nl__im__130, ___ref___rec__2));
#line 420
c_rt_lib0clear(&___nl__im__128);
#line 420
c_rt_lib0clear(&___nl__im__129);
#line 420
c_rt_lib0clear(&___nl__im__130);
#line 421
goto label_345;
#line 421
label_323:
;
#line 421
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(261)));
#line 421
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 422
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(1352)));
#line 422
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(1351)));
#line 422
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__131, ___get_global_string_const(562)));
#line 422
c_rt_lib0delete(translator_priv0release_variant(___nl__im__133, ___nl__im__134, ___nl__im__135, ___ref___rec__2));
#line 422
c_rt_lib0clear(&___nl__im__133);
#line 422
c_rt_lib0clear(&___nl__im__134);
#line 422
c_rt_lib0clear(&___nl__im__135);
#line 423
goto label_345;
#line 423
label_334:
;
#line 423
c_rt_lib0move(&___nl__im__137, c_rt_lib0priv_as(___nl__im__108, ___get_global_string_const(259)));
#line 423
c_rt_lib0copy(&___nl__im__136, ___nl__im__137);
#line 424
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__136, ___get_global_string_const(1352)));
#line 424
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__136, ___get_global_string_const(1351)));
#line 424
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__136, ___get_global_string_const(363)));
#line 424
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__138, ___nl__im__139, ___nl__im__140, ___ref___rec__2));
#line 424
c_rt_lib0clear(&___nl__im__138);
#line 424
c_rt_lib0clear(&___nl__im__139);
#line 424
c_rt_lib0clear(&___nl__im__140);
#line 425
goto label_345;
#line 425
label_345:
;
#line 425
c_rt_lib0clear(&___nl__im__108);
#line 425
//clear ___nl__bool__109;
#line 425
c_rt_lib0clear(&___nl__im__110);
#line 425
c_rt_lib0clear(&___nl__im__111);
#line 425
c_rt_lib0clear(&___nl__im__112);
#line 425
c_rt_lib0clear(&___nl__im__113);
#line 425
c_rt_lib0clear(&___nl__im__114);
#line 425
c_rt_lib0clear(&___nl__im__115);
#line 425
c_rt_lib0clear(&___nl__im__116);
#line 425
c_rt_lib0clear(&___nl__im__117);
#line 425
c_rt_lib0clear(&___nl__im__118);
#line 425
c_rt_lib0clear(&___nl__im__119);
#line 425
c_rt_lib0clear(&___nl__im__120);
#line 425
c_rt_lib0clear(&___nl__im__121);
#line 425
c_rt_lib0clear(&___nl__im__122);
#line 425
c_rt_lib0clear(&___nl__im__126);
#line 425
c_rt_lib0clear(&___nl__im__127);
#line 425
c_rt_lib0clear(&___nl__im__131);
#line 425
c_rt_lib0clear(&___nl__im__132);
#line 425
c_rt_lib0clear(&___nl__im__136);
#line 425
c_rt_lib0clear(&___nl__im__137);
#line 411
___nl__int__141 = 1;
#line 411
___nl__int__103 = ___nl__int__103 - ___nl__int__141;
#line 411
//clear ___nl__int__141;
#line 426
goto label_253;
#line 426
label_371:
;
#line 427
goto label_525;
#line 427
label_373:
;
#line 428
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 428
c_rt_lib0move(&___nl__im__142, translator_priv0dest_val(___nl__im__143, ___ref___rec__2));
#line 428
c_rt_lib0clear(&___nl__im__143);
#line 429
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 429
c_rt_lib0move(&___nl__im__146,___get_global_string_const(1022));
#line 429
___nl__bool__144 = c_rt_lib0eq(___nl__im__145, ___nl__im__146);
#line 429
c_rt_lib0clear(&___nl__im__145);
#line 429
c_rt_lib0clear(&___nl__im__146);
#line 429
___nl__bool__144 = !___nl__bool__144;
#line 429
if(___nl__bool__144){ goto label_389;}
#line 430
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 430
c_rt_lib0move(&___nl__im__147, translator_priv0calc_val(___nl__im__148, ___ref___rec__2));
#line 430
c_rt_lib0clear(&___nl__im__148);
#line 431
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__im__1, ___nl__im__142, ___nl__im__147, ___ref___rec__2));
#line 432
goto label_511;
#line 432
label_389:
;
#line 432
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 432
c_rt_lib0move(&___nl__im__150,___get_global_string_const(1023));
#line 432
___nl__bool__144 = c_rt_lib0eq(___nl__im__149, ___nl__im__150);
#line 432
c_rt_lib0clear(&___nl__im__149);
#line 432
c_rt_lib0clear(&___nl__im__150);
#line 432
___nl__bool__144 = !___nl__bool__144;
#line 432
if(___nl__bool__144){ goto label_433;}
#line 433
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 433
c_rt_lib0move(&___nl__im__151, translator_priv0calc_val(___nl__im__152, ___ref___rec__2));
#line 433
c_rt_lib0clear(&___nl__im__152);
#line 434
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 434
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 434
___nl__bool__153 = nlasm0eq_reg_type(___nl__im__154, ___nl__im__155);
#line 434
c_rt_lib0clear(&___nl__im__154);
#line 434
c_rt_lib0clear(&___nl__im__155);
#line 434
___nl__bool__153 = !___nl__bool__153;
#line 435
c_rt_lib0copy(&___nl__im__156, ___nl__im__1);
#line 436
___nl__bool__157 = ___nl__bool__153;
#line 436
___nl__bool__157 = !___nl__bool__157;
#line 436
if(___nl__bool__157){ goto label_414;}
#line 436
c_rt_lib0move(&___nl__im__158, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 436
c_rt_lib0move(&___nl__im__156, translator_priv0new_register(___ref___rec__2, ___nl__im__158));
#line 436
c_rt_lib0clear(&___nl__im__158);
#line 436
goto label_414;
#line 436
label_414:
;
#line 436
//clear ___nl__bool__157;
#line 437
c_rt_lib0move(&___nl__im__159,___get_global_string_const(768));
#line 437
c_rt_lib0move(&___nl__im__161, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__142));
#line 437
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__151));
#line 437
c_rt_lib0move(&___nl__im__160, c_rt_lib0array_mk(2, ___nl__im__161, ___nl__im__162));
#line 437
c_rt_lib0clear(&___nl__im__161);
#line 437
c_rt_lib0clear(&___nl__im__162);
#line 437
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__156, ___nl__im__159, ___nl__im__160, ___ref___rec__2));
#line 437
c_rt_lib0clear(&___nl__im__159);
#line 437
c_rt_lib0clear(&___nl__im__160);
#line 438
___nl__bool__163 = ___nl__bool__153;
#line 438
___nl__bool__163 = !___nl__bool__163;
#line 438
if(___nl__bool__163){ goto label_430;}
#line 438
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__156, ___ref___rec__2));
#line 438
goto label_430;
#line 438
label_430:
;
#line 438
//clear ___nl__bool__163;
#line 439
goto label_511;
#line 439
label_433:
;
#line 439
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 439
c_rt_lib0move(&___nl__im__165,___get_global_string_const(578));
#line 439
___nl__bool__144 = c_rt_lib0eq(___nl__im__164, ___nl__im__165);
#line 439
c_rt_lib0clear(&___nl__im__164);
#line 439
c_rt_lib0clear(&___nl__im__165);
#line 439
___nl__bool__144 = !___nl__bool__144;
#line 439
if(___nl__bool__144){ goto label_452;}
#line 440
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 440
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(220)));
#line 440
c_rt_lib0clear(&___nl__im__168);
#line 440
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 440
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__170, ___get_global_string_const(220)));
#line 440
c_rt_lib0clear(&___nl__im__170);
#line 440
c_rt_lib0move(&___nl__im__166, c_rt_lib0priv_as(___nl__im__169, ___get_global_string_const(1028)));
#line 440
c_rt_lib0clear(&___nl__im__167);
#line 440
c_rt_lib0clear(&___nl__im__169);
#line 441
c_rt_lib0delete(translator_priv0print_get_value(___nl__im__1, ___nl__im__142, ___nl__im__166, ___ref___rec__2));
#line 442
goto label_511;
#line 442
label_452:
;
#line 442
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 442
c_rt_lib0move(&___nl__im__172,___get_global_string_const(1024));
#line 442
___nl__bool__144 = c_rt_lib0eq(___nl__im__171, ___nl__im__172);
#line 442
c_rt_lib0clear(&___nl__im__171);
#line 442
c_rt_lib0clear(&___nl__im__172);
#line 442
___nl__bool__144 = !___nl__bool__144;
#line 442
if(___nl__bool__144){ goto label_507;}
#line 443
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 443
c_rt_lib0move(&___nl__im__173, translator_priv0dest_val(___nl__im__174, ___ref___rec__2));
#line 443
c_rt_lib0clear(&___nl__im__174);
#line 444
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 444
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(220)));
#line 444
c_rt_lib0clear(&___nl__im__177);
#line 444
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 444
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec(___nl__im__179, ___get_global_string_const(220)));
#line 444
c_rt_lib0clear(&___nl__im__179);
#line 444
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__178, ___get_global_string_const(1028)));
#line 444
c_rt_lib0clear(&___nl__im__176);
#line 444
c_rt_lib0clear(&___nl__im__178);
#line 445
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 445
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__182, ___get_global_string_const(206)));
#line 445
c_rt_lib0clear(&___nl__im__182);
#line 445
___nl__int__180 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__181, ___nl__im__175);
#line 445
c_rt_lib0clear(&___nl__im__181);
#line 446
c_rt_lib0move(&___nl__im__183, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 447
c_rt_lib0copy(&___nl__im__184, ___nl__im__1);
#line 448
c_rt_lib0move(&___nl__im__186, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 448
___nl__bool__185 = nlasm0eq_reg_type(___nl__im__186, ___nl__im__183);
#line 448
c_rt_lib0clear(&___nl__im__186);
#line 448
___nl__bool__185 = !___nl__bool__185;
#line 448
___nl__bool__185 = !___nl__bool__185;
#line 448
if(___nl__bool__185){ goto label_487;}
#line 449
c_rt_lib0move(&___nl__im__184, translator_priv0new_register(___ref___rec__2, ___nl__im__183));
#line 450
goto label_487;
#line 450
label_487:
;
#line 450
//clear ___nl__bool__185;
#line 451
c_rt_lib0move(&___nl__im__189, c_rt_lib0int_new(___nl__int__180));
#line 451
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__184, ___get_global_string_const(73), ___nl__im__173, ___get_global_string_const(562), ___nl__im__175, ___get_global_string_const(567), ___nl__im__189));
#line 451
c_rt_lib0clear(&___nl__im__189);
#line 451
c_rt_lib0move(&___nl__im__187, c_rt_lib0ov_mk_arg(___get_global_string_const(238), ___nl__im__188));
#line 451
c_rt_lib0clear(&___nl__im__188);
#line 451
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__187));
#line 451
c_rt_lib0clear(&___nl__im__187);
#line 452
c_rt_lib0move(&___nl__im__191, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 452
___nl__bool__190 = nlasm0eq_reg_type(___nl__im__191, ___nl__im__183);
#line 452
c_rt_lib0clear(&___nl__im__191);
#line 452
___nl__bool__190 = !___nl__bool__190;
#line 452
___nl__bool__190 = !___nl__bool__190;
#line 452
if(___nl__bool__190){ goto label_504;}
#line 453
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__184, ___ref___rec__2));
#line 454
goto label_504;
#line 454
label_504:
;
#line 454
//clear ___nl__bool__190;
#line 455
goto label_511;
#line 455
label_507:
;
#line 456
c_rt_lib0move(&___nl__im__192, c_rt_lib0array_mk(0));
#line 456
nl_die_arg(___nl__im__192);
#line 457
goto label_511;
#line 457
label_511:
;
#line 457
//clear ___nl__bool__144;
#line 457
c_rt_lib0clear(&___nl__im__147);
#line 457
c_rt_lib0clear(&___nl__im__151);
#line 457
//clear ___nl__bool__153;
#line 457
c_rt_lib0clear(&___nl__im__156);
#line 457
c_rt_lib0clear(&___nl__im__166);
#line 457
c_rt_lib0clear(&___nl__im__173);
#line 457
c_rt_lib0clear(&___nl__im__175);
#line 457
//clear ___nl__int__180;
#line 457
c_rt_lib0clear(&___nl__im__183);
#line 457
c_rt_lib0clear(&___nl__im__184);
#line 457
c_rt_lib0clear(&___nl__im__192);
#line 458
goto label_525;
#line 458
label_525:
;
#line 458
//clear ___nl__bool__86;
#line 458
c_rt_lib0clear(&___nl__im__92);
#line 458
//clear ___nl__int__103;
#line 458
//clear ___nl__bool__106;
#line 458
c_rt_lib0clear(&___nl__im__108);
#line 458
//clear ___nl__bool__109;
#line 458
c_rt_lib0clear(&___nl__im__110);
#line 458
c_rt_lib0clear(&___nl__im__111);
#line 458
c_rt_lib0clear(&___nl__im__112);
#line 458
c_rt_lib0clear(&___nl__im__113);
#line 458
c_rt_lib0clear(&___nl__im__114);
#line 458
c_rt_lib0clear(&___nl__im__115);
#line 458
c_rt_lib0clear(&___nl__im__116);
#line 458
c_rt_lib0clear(&___nl__im__117);
#line 458
c_rt_lib0clear(&___nl__im__118);
#line 458
c_rt_lib0clear(&___nl__im__119);
#line 458
c_rt_lib0clear(&___nl__im__120);
#line 458
c_rt_lib0clear(&___nl__im__121);
#line 458
c_rt_lib0clear(&___nl__im__122);
#line 458
c_rt_lib0clear(&___nl__im__126);
#line 458
c_rt_lib0clear(&___nl__im__127);
#line 458
c_rt_lib0clear(&___nl__im__131);
#line 458
c_rt_lib0clear(&___nl__im__132);
#line 458
c_rt_lib0clear(&___nl__im__136);
#line 458
c_rt_lib0clear(&___nl__im__137);
#line 458
c_rt_lib0clear(&___nl__im__142);
#line 459
goto label_726;
#line 459
label_553:
;
#line 459
c_rt_lib0move(&___nl__im__193, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 459
c_rt_lib0move(&___nl__im__194,___get_global_string_const(1125));
#line 459
___nl__bool__6 = c_rt_lib0eq(___nl__im__193, ___nl__im__194);
#line 459
c_rt_lib0clear(&___nl__im__193);
#line 459
c_rt_lib0clear(&___nl__im__194);
#line 459
___nl__bool__6 = !___nl__bool__6;
#line 459
if(___nl__bool__6){ goto label_586;}
#line 460
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 460
c_rt_lib0move(&___nl__im__195, translator_priv0dest_val(___nl__im__196, ___ref___rec__2));
#line 460
c_rt_lib0clear(&___nl__im__196);
#line 461
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 461
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__199, ___get_global_string_const(220)));
#line 461
c_rt_lib0clear(&___nl__im__199);
#line 461
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 461
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__201, ___get_global_string_const(220)));
#line 461
c_rt_lib0clear(&___nl__im__201);
#line 461
c_rt_lib0move(&___nl__im__197, c_rt_lib0priv_as(___nl__im__200, ___get_global_string_const(1028)));
#line 461
c_rt_lib0clear(&___nl__im__198);
#line 461
c_rt_lib0clear(&___nl__im__200);
#line 462
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 462
c_rt_lib0move(&___nl__im__203, c_rt_lib0hash_get_value_dec(___nl__im__204, ___get_global_string_const(206)));
#line 462
c_rt_lib0clear(&___nl__im__204);
#line 462
___nl__int__202 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__203, ___nl__im__197);
#line 462
c_rt_lib0clear(&___nl__im__203);
#line 463
c_rt_lib0move(&___nl__im__207, c_rt_lib0int_new(___nl__int__202));
#line 463
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__195, ___get_global_string_const(562), ___nl__im__197, ___get_global_string_const(567), ___nl__im__207));
#line 463
c_rt_lib0clear(&___nl__im__207);
#line 463
c_rt_lib0move(&___nl__im__205, c_rt_lib0ov_mk_arg(___get_global_string_const(237), ___nl__im__206));
#line 463
c_rt_lib0clear(&___nl__im__206);
#line 463
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__205));
#line 463
c_rt_lib0clear(&___nl__im__205);
#line 464
goto label_726;
#line 464
label_586:
;
#line 464
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 464
c_rt_lib0move(&___nl__im__209,___get_global_string_const(1037));
#line 464
___nl__bool__6 = c_rt_lib0eq(___nl__im__208, ___nl__im__209);
#line 464
c_rt_lib0clear(&___nl__im__208);
#line 464
c_rt_lib0clear(&___nl__im__209);
#line 464
if(___nl__bool__6){ goto label_598;}
#line 464
c_rt_lib0move(&___nl__im__210, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 464
c_rt_lib0move(&___nl__im__211,___get_global_string_const(1038));
#line 464
___nl__bool__6 = c_rt_lib0eq(___nl__im__210, ___nl__im__211);
#line 464
c_rt_lib0clear(&___nl__im__210);
#line 464
c_rt_lib0clear(&___nl__im__211);
#line 464
label_598:
;
#line 464
if(___nl__bool__6){ goto label_605;}
#line 464
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 464
c_rt_lib0move(&___nl__im__213,___get_global_string_const(1040));
#line 464
___nl__bool__6 = c_rt_lib0eq(___nl__im__212, ___nl__im__213);
#line 464
c_rt_lib0clear(&___nl__im__212);
#line 464
c_rt_lib0clear(&___nl__im__213);
#line 464
label_605:
;
#line 464
if(___nl__bool__6){ goto label_612;}
#line 464
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 464
c_rt_lib0move(&___nl__im__215,___get_global_string_const(1039));
#line 464
___nl__bool__6 = c_rt_lib0eq(___nl__im__214, ___nl__im__215);
#line 464
c_rt_lib0clear(&___nl__im__214);
#line 464
c_rt_lib0clear(&___nl__im__215);
#line 464
label_612:
;
#line 464
if(___nl__bool__6){ goto label_619;}
#line 464
c_rt_lib0move(&___nl__im__216, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 464
c_rt_lib0move(&___nl__im__217,___get_global_string_const(1041));
#line 464
___nl__bool__6 = c_rt_lib0eq(___nl__im__216, ___nl__im__217);
#line 464
c_rt_lib0clear(&___nl__im__216);
#line 464
c_rt_lib0clear(&___nl__im__217);
#line 464
label_619:
;
#line 464
___nl__bool__6 = !___nl__bool__6;
#line 464
if(___nl__bool__6){ goto label_655;}
#line 465
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 465
c_rt_lib0move(&___nl__im__218, translator_priv0calc_val(___nl__im__219, ___ref___rec__2));
#line 465
c_rt_lib0clear(&___nl__im__219);
#line 466
c_rt_lib0move(&___nl__im__221, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 466
___nl__bool__222 = true;
#line 466
c_rt_lib0move(&___nl__im__220, translator_priv0get_value_of_lvalue(___nl__im__221, ___nl__bool__222, ___ref___rec__2));
#line 466
c_rt_lib0clear(&___nl__im__221);
#line 466
//clear ___nl__bool__222;
#line 467
___nl__int__226 = c_rt_lib0array_len(___nl__im__220);
#line 467
___nl__int__227 = 1;
#line 467
___nl__int__225 = ___nl__int__226 - ___nl__int__227;
#line 467
//clear ___nl__int__226;
#line 467
//clear ___nl__int__227;
#line 467
c_rt_lib0move(&___nl__im__224, c_rt_lib0array_get(___nl__im__220, ___nl__int__225));
#line 467
//clear ___nl__int__225;
#line 467
___nl__int__230 = c_rt_lib0array_len(___nl__im__220);
#line 467
___nl__int__231 = 1;
#line 467
___nl__int__229 = ___nl__int__230 - ___nl__int__231;
#line 467
//clear ___nl__int__230;
#line 467
//clear ___nl__int__231;
#line 467
c_rt_lib0move(&___nl__im__228, c_rt_lib0array_get(___nl__im__220, ___nl__int__229));
#line 467
//clear ___nl__int__229;
#line 467
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__228, ___get_global_string_const(220)));
#line 467
c_rt_lib0clear(&___nl__im__224);
#line 467
c_rt_lib0clear(&___nl__im__228);
#line 468
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 468
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__223, ___nl__im__223, ___nl__im__218, ___nl__im__232, ___ref___rec__2));
#line 468
c_rt_lib0clear(&___nl__im__232);
#line 469
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__223, ___ref___rec__2));
#line 470
___nl__bool__233 = true;
#line 470
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__220, ___nl__bool__233, ___ref___rec__2));
#line 470
//clear ___nl__bool__233;
#line 471
goto label_726;
#line 471
label_655:
;
#line 471
c_rt_lib0move(&___nl__im__234, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 471
c_rt_lib0move(&___nl__im__235,___get_global_string_const(955));
#line 471
___nl__bool__6 = c_rt_lib0eq(___nl__im__234, ___nl__im__235);
#line 471
c_rt_lib0clear(&___nl__im__234);
#line 471
c_rt_lib0clear(&___nl__im__235);
#line 471
___nl__bool__6 = !___nl__bool__6;
#line 471
if(___nl__bool__6){ goto label_683;}
#line 472
___nl__int__236 = translator_priv0get_sim_label(___ref___rec__2);
#line 473
c_rt_lib0move(&___nl__im__238, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 473
c_rt_lib0move(&___nl__im__237, translator_priv0new_register(___ref___rec__2, ___nl__im__238));
#line 473
c_rt_lib0clear(&___nl__im__238);
#line 474
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 474
c_rt_lib0move(&___nl__im__239, translator_priv0def_val(___nl__im__240, ___nl__im__1, ___nl__im__237, ___ref___rec__2));
#line 474
c_rt_lib0clear(&___nl__im__240);
#line 475
c_rt_lib0move(&___nl__im__243,___get_global_string_const(365));
#line 475
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__237, ___get_global_string_const(73), ___nl__im__239, ___get_global_string_const(560), ___nl__im__243));
#line 475
c_rt_lib0clear(&___nl__im__243);
#line 475
c_rt_lib0move(&___nl__im__241, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__242));
#line 475
c_rt_lib0clear(&___nl__im__242);
#line 475
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__241));
#line 475
c_rt_lib0clear(&___nl__im__241);
#line 476
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__236, ___nl__im__237, ___ref___rec__2));
#line 477
c_rt_lib0move(&___nl__im__244, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 477
c_rt_lib0delete(translator_priv0def_val(___nl__im__244, ___nl__im__1, ___nl__im__237, ___ref___rec__2));
#line 477
c_rt_lib0clear(&___nl__im__244);
#line 478
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__236, ___ref___rec__2));
#line 479
goto label_726;
#line 479
label_683:
;
#line 479
c_rt_lib0move(&___nl__im__245, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 479
c_rt_lib0move(&___nl__im__246,___get_global_string_const(956));
#line 479
___nl__bool__6 = c_rt_lib0eq(___nl__im__245, ___nl__im__246);
#line 479
c_rt_lib0clear(&___nl__im__245);
#line 479
c_rt_lib0clear(&___nl__im__246);
#line 479
___nl__bool__6 = !___nl__bool__6;
#line 479
if(___nl__bool__6){ goto label_715;}
#line 480
___nl__int__247 = translator_priv0get_sim_label(___ref___rec__2);
#line 482
c_rt_lib0move(&___nl__im__250, nlasm0is_empty(___nl__im__1));
#line 482
___nl__bool__249 = c_rt_lib0check_true_native(___nl__im__250);
#line 482
c_rt_lib0clear(&___nl__im__250);
#line 482
___nl__bool__249 = !___nl__bool__249;
#line 482
if(___nl__bool__249){ goto label_701;}
#line 483
c_rt_lib0move(&___nl__im__251, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 483
c_rt_lib0move(&___nl__im__248, translator_priv0new_register(___ref___rec__2, ___nl__im__251));
#line 483
c_rt_lib0clear(&___nl__im__251);
#line 484
goto label_704;
#line 484
label_701:
;
#line 485
c_rt_lib0copy(&___nl__im__248, ___nl__im__1);
#line 486
goto label_704;
#line 486
label_704:
;
#line 486
//clear ___nl__bool__249;
#line 487
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 487
c_rt_lib0move(&___nl__im__252, translator_priv0def_val(___nl__im__253, ___nl__im__1, ___nl__im__248, ___ref___rec__2));
#line 487
c_rt_lib0clear(&___nl__im__253);
#line 488
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__247, ___nl__im__252, ___ref___rec__2));
#line 489
c_rt_lib0move(&___nl__im__254, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 489
c_rt_lib0delete(translator_priv0def_val(___nl__im__254, ___nl__im__1, ___nl__im__248, ___ref___rec__2));
#line 489
c_rt_lib0clear(&___nl__im__254);
#line 490
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__247, ___ref___rec__2));
#line 491
goto label_726;
#line 491
label_715:
;
#line 492
c_rt_lib0move(&___nl__im__256, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(276)));
#line 492
c_rt_lib0move(&___nl__im__255, translator_priv0calc_val(___nl__im__256, ___ref___rec__2));
#line 492
c_rt_lib0clear(&___nl__im__256);
#line 493
c_rt_lib0move(&___nl__im__258, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(277)));
#line 493
c_rt_lib0move(&___nl__im__257, translator_priv0calc_val(___nl__im__258, ___ref___rec__2));
#line 493
c_rt_lib0clear(&___nl__im__258);
#line 494
c_rt_lib0move(&___nl__im__259, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(560)));
#line 494
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__1, ___nl__im__255, ___nl__im__257, ___nl__im__259, ___ref___rec__2));
#line 494
c_rt_lib0clear(&___nl__im__259);
#line 495
goto label_726;
#line 495
label_726:
;
#line 495
//clear ___nl__bool__6;
#line 495
c_rt_lib0clear(&___nl__im__9);
#line 495
c_rt_lib0clear(&___nl__im__10);
#line 495
c_rt_lib0clear(&___nl__im__63);
#line 495
c_rt_lib0clear(&___nl__im__66);
#line 495
c_rt_lib0clear(&___nl__im__75);
#line 495
c_rt_lib0clear(&___nl__im__195);
#line 495
c_rt_lib0clear(&___nl__im__197);
#line 495
//clear ___nl__int__202;
#line 495
c_rt_lib0clear(&___nl__im__218);
#line 495
c_rt_lib0clear(&___nl__im__220);
#line 495
c_rt_lib0clear(&___nl__im__223);
#line 495
//clear ___nl__int__236;
#line 495
c_rt_lib0clear(&___nl__im__237);
#line 495
c_rt_lib0clear(&___nl__im__239);
#line 495
//clear ___nl__int__247;
#line 495
c_rt_lib0clear(&___nl__im__248);
#line 495
c_rt_lib0clear(&___nl__im__252);
#line 495
c_rt_lib0clear(&___nl__im__255);
#line 495
c_rt_lib0clear(&___nl__im__257);
#line 495
c_rt_lib0clear(&___nl__im__0);
#line 495
c_rt_lib0clear(&___nl__im__1);
#line 495
c_rt_lib0clear(&___nl__im__3);
#line 495
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
#line 499
___nl__int__3 = 0;
#line 499
___nl__int__4 = 1;
#line 499
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 499
label_3:
;
#line 499
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 499
if(___nl__bool__6){ goto label_12;}
#line 499
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 499
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 500
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__2, ___ref___rec__1));
#line 500
c_rt_lib0clear(&___nl__im__2);
#line 501
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 501
goto label_3;
#line 501
label_12:
;
#line 501
c_rt_lib0clear(&___nl__im__0);
#line 501
c_rt_lib0clear(&___nl__im__2);
#line 501
//clear ___nl__int__3;
#line 501
//clear ___nl__int__4;
#line 501
//clear ___nl__int__5;
#line 501
//clear ___nl__bool__6;
#line 501
c_rt_lib0clear(&___nl__im__7);
#line 501
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
#line 505
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(724));
#line 505
if(___nl__bool__3){ goto label_9;}
#line 508
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1020));
#line 508
if(___nl__bool__3){ goto label_26;}
#line 509
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1021));
#line 509
if(___nl__bool__3){ goto label_30;}
#line 509
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 509
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 509
nl_die_arg(___nl__im__4);
#line 505
label_9:
;
#line 505
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(724)));
#line 505
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 506
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(168)));
#line 506
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(206)));
#line 506
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(495)));
#line 506
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 506
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_string_const(168), ___nl__im__8, ___get_global_string_const(206), ___nl__im__9, ___get_global_string_const(495), ___nl__im__10, ___get_global_string_const(220), ___nl__im__11));
#line 506
c_rt_lib0clear(&___nl__im__8);
#line 506
c_rt_lib0clear(&___nl__im__9);
#line 506
c_rt_lib0clear(&___nl__im__10);
#line 506
c_rt_lib0clear(&___nl__im__11);
#line 507
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 507
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__7, ___ref___rec__2, ___nl__im__12));
#line 507
c_rt_lib0clear(&___nl__im__7);
#line 507
c_rt_lib0clear(&___nl__im__12);
#line 508
goto label_34;
#line 508
label_26:
;
#line 508
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1020)));
#line 508
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 509
goto label_34;
#line 509
label_30:
;
#line 509
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1021)));
#line 509
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 510
goto label_34;
#line 510
label_34:
;
#line 511
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 511
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__2, ___nl__im__18));
#line 511
c_rt_lib0clear(&___nl__im__18);
#line 513
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(724));
#line 513
if(___nl__bool__20){ goto label_47;}
#line 519
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1020));
#line 519
if(___nl__bool__20){ goto label_69;}
#line 521
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1021));
#line 521
if(___nl__bool__20){ goto label_76;}
#line 521
c_rt_lib0move(&___nl__im__21,___get_global_string_const(15));
#line 521
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__0));
#line 521
nl_die_arg(___nl__im__21);
#line 513
label_47:
;
#line 513
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(724)));
#line 513
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 514
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(220)));
#line 514
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(220));
#line 514
if(___nl__bool__25){ goto label_58;}
#line 516
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(71));
#line 516
if(___nl__bool__25){ goto label_63;}
#line 516
c_rt_lib0move(&___nl__im__26,___get_global_string_const(15));
#line 516
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 516
nl_die_arg(___nl__im__26);
#line 514
label_58:
;
#line 514
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(220)));
#line 514
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 515
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__27, ___ref___rec__2));
#line 516
goto label_67;
#line 516
label_63:
;
#line 517
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 517
nl_die_arg(___nl__im__29);
#line 518
goto label_67;
#line 518
label_67:
;
#line 519
goto label_81;
#line 519
label_69:
;
#line 519
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1020)));
#line 519
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 520
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(277)));
#line 520
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__32, ___ref___rec__2));
#line 520
c_rt_lib0clear(&___nl__im__32);
#line 521
goto label_81;
#line 521
label_76:
;
#line 521
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1021)));
#line 521
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 522
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__33, ___ref___rec__2));
#line 523
goto label_81;
#line 523
label_81:
;
#line 524
___nl__int__35 = translator_priv0get_sim_label(___ref___rec__2);
#line 525
c_rt_lib0move(&___nl__im__38,___get_global_string_const(78));
#line 525
___nl__int__39 = 1;
#line 525
___nl__int__39 = -___nl__int__39;
#line 525
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__39));
#line 525
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__17, ___get_global_string_const(73), ___nl__im__19, ___get_global_string_const(562), ___nl__im__38, ___get_global_string_const(567), ___nl__im__40));
#line 525
c_rt_lib0clear(&___nl__im__38);
#line 525
//clear ___nl__int__39;
#line 525
c_rt_lib0clear(&___nl__im__40);
#line 525
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(237), ___nl__im__37));
#line 525
c_rt_lib0clear(&___nl__im__37);
#line 525
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 525
c_rt_lib0clear(&___nl__im__36);
#line 526
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__35, ___nl__im__17, ___ref___rec__2));
#line 527
___nl__bool__41 = ___nl__bool__1;
#line 527
___nl__bool__41 = !___nl__bool__41;
#line 527
if(___nl__bool__41){ goto label_103;}
#line 528
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__19));
#line 528
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__42, ___ref___rec__2));
#line 528
c_rt_lib0clear(&___nl__im__42);
#line 529
goto label_124;
#line 529
label_103:
;
#line 530
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__19));
#line 530
c_rt_lib0move(&___nl__im__46,___get_global_string_const(178));
#line 530
___nl__int__47 = 1;
#line 530
___nl__int__47 = -___nl__int__47;
#line 530
c_rt_lib0move(&___nl__im__48, c_rt_lib0int_new(___nl__int__47));
#line 530
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 530
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(5, ___get_global_string_const(224), ___nl__im__19, ___get_global_string_const(73), ___nl__im__45, ___get_global_string_const(562), ___nl__im__46, ___get_global_string_const(567), ___nl__im__48, ___get_global_string_const(582), ___nl__im__49));
#line 530
c_rt_lib0clear(&___nl__im__45);
#line 530
c_rt_lib0clear(&___nl__im__46);
#line 530
//clear ___nl__int__47;
#line 530
c_rt_lib0clear(&___nl__im__48);
#line 530
c_rt_lib0clear(&___nl__im__49);
#line 530
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__44));
#line 530
c_rt_lib0clear(&___nl__im__44);
#line 530
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__43));
#line 530
c_rt_lib0clear(&___nl__im__43);
#line 531
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_string_const(249), ___nl__im__19));
#line 531
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__50));
#line 531
c_rt_lib0clear(&___nl__im__50);
#line 532
goto label_124;
#line 532
label_124:
;
#line 532
//clear ___nl__bool__41;
#line 533
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__35, ___ref___rec__2));
#line 534
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(724));
#line 534
if(___nl__bool__51){ goto label_136;}
#line 541
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1020));
#line 541
if(___nl__bool__51){ goto label_176;}
#line 550
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1021));
#line 550
if(___nl__bool__51){ goto label_228;}
#line 550
c_rt_lib0move(&___nl__im__52,___get_global_string_const(15));
#line 550
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__0));
#line 550
nl_die_arg(___nl__im__52);
#line 534
label_136:
;
#line 534
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(724)));
#line 534
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 535
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(168)));
#line 535
c_rt_lib0move(&___nl__im__55, translator_priv0get_var_register(___nl__im__56, ___ref___rec__2));
#line 535
c_rt_lib0clear(&___nl__im__56);
#line 536
___nl__im_ptr__62 = &((*___ref___rec__2).logic0field);
#line 536
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 536
___nl__im_ptr__62 = NULL;
#line 536
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(841)));
#line 536
c_rt_lib0clear(&___nl__im__61);
#line 536
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(168)));
#line 536
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value(___nl__im__60, ___nl__im__63));
#line 536
c_rt_lib0clear(&___nl__im__60);
#line 536
c_rt_lib0clear(&___nl__im__63);
#line 536
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(206)));
#line 536
c_rt_lib0clear(&___nl__im__59);
#line 536
c_rt_lib0move(&___nl__im__57, translator_priv0get_cast(___nl__im__55, ___nl__im__58, ___ref___rec__2));
#line 536
c_rt_lib0clear(&___nl__im__58);
#line 537
c_rt_lib0move(&___nl__im__66,___get_global_string_const(78));
#line 537
___nl__int__67 = 1;
#line 537
___nl__int__67 = -___nl__int__67;
#line 537
c_rt_lib0move(&___nl__im__68, c_rt_lib0int_new(___nl__int__67));
#line 537
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__57, ___get_global_string_const(73), ___nl__im__19, ___get_global_string_const(562), ___nl__im__66, ___get_global_string_const(567), ___nl__im__68));
#line 537
c_rt_lib0clear(&___nl__im__66);
#line 537
//clear ___nl__int__67;
#line 537
c_rt_lib0clear(&___nl__im__68);
#line 537
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(238), ___nl__im__65));
#line 537
c_rt_lib0clear(&___nl__im__65);
#line 537
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__64));
#line 537
c_rt_lib0clear(&___nl__im__64);
#line 538
___nl__bool__69 = nlasm0eq_reg(___nl__im__57, ___nl__im__55);
#line 538
___nl__bool__69 = !___nl__bool__69;
#line 538
___nl__bool__69 = !___nl__bool__69;
#line 538
if(___nl__bool__69){ goto label_173;}
#line 539
c_rt_lib0delete(translator_priv0move(___nl__im__55, ___nl__im__57, ___ref___rec__2));
#line 540
goto label_173;
#line 540
label_173:
;
#line 540
//clear ___nl__bool__69;
#line 541
goto label_232;
#line 541
label_176:
;
#line 541
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1020)));
#line 541
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 542
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(276)));
#line 542
___nl__bool__74 = false;
#line 542
c_rt_lib0move(&___nl__im__72, translator_priv0get_value_of_lvalue(___nl__im__73, ___nl__bool__74, ___ref___rec__2));
#line 542
c_rt_lib0clear(&___nl__im__73);
#line 542
//clear ___nl__bool__74;
#line 543
___nl__int__78 = c_rt_lib0array_len(___nl__im__72);
#line 543
___nl__int__79 = 1;
#line 543
___nl__int__77 = ___nl__int__78 - ___nl__int__79;
#line 543
//clear ___nl__int__78;
#line 543
//clear ___nl__int__79;
#line 543
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__72, ___nl__int__77));
#line 543
//clear ___nl__int__77;
#line 543
___nl__int__82 = c_rt_lib0array_len(___nl__im__72);
#line 543
___nl__int__83 = 1;
#line 543
___nl__int__81 = ___nl__int__82 - ___nl__int__83;
#line 543
//clear ___nl__int__82;
#line 543
//clear ___nl__int__83;
#line 543
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_get(___nl__im__72, ___nl__int__81));
#line 543
//clear ___nl__int__81;
#line 543
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__80, ___get_global_string_const(220)));
#line 543
c_rt_lib0clear(&___nl__im__76);
#line 543
c_rt_lib0clear(&___nl__im__80);
#line 544
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 544
c_rt_lib0move(&___nl__im__84, translator_priv0get_cast(___nl__im__75, ___nl__im__85, ___ref___rec__2));
#line 544
c_rt_lib0clear(&___nl__im__85);
#line 545
c_rt_lib0move(&___nl__im__88,___get_global_string_const(78));
#line 545
___nl__int__89 = 1;
#line 545
___nl__int__89 = -___nl__int__89;
#line 545
c_rt_lib0move(&___nl__im__90, c_rt_lib0int_new(___nl__int__89));
#line 545
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__84, ___get_global_string_const(73), ___nl__im__19, ___get_global_string_const(562), ___nl__im__88, ___get_global_string_const(567), ___nl__im__90));
#line 545
c_rt_lib0clear(&___nl__im__88);
#line 545
//clear ___nl__int__89;
#line 545
c_rt_lib0clear(&___nl__im__90);
#line 545
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_string_const(238), ___nl__im__87));
#line 545
c_rt_lib0clear(&___nl__im__87);
#line 545
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__86));
#line 545
c_rt_lib0clear(&___nl__im__86);
#line 546
___nl__bool__91 = nlasm0eq_reg(___nl__im__75, ___nl__im__84);
#line 546
___nl__bool__91 = !___nl__bool__91;
#line 546
___nl__bool__91 = !___nl__bool__91;
#line 546
if(___nl__bool__91){ goto label_222;}
#line 547
c_rt_lib0delete(translator_priv0move(___nl__im__75, ___nl__im__84, ___ref___rec__2));
#line 548
goto label_222;
#line 548
label_222:
;
#line 548
//clear ___nl__bool__91;
#line 549
___nl__bool__92 = false;
#line 549
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__72, ___nl__bool__92, ___ref___rec__2));
#line 549
//clear ___nl__bool__92;
#line 550
goto label_232;
#line 550
label_228:
;
#line 550
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1021)));
#line 550
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 551
goto label_232;
#line 551
label_232:
;
#line 551
c_rt_lib0clear(&___nl__im__0);
#line 551
//clear ___nl__bool__1;
#line 551
//clear ___nl__bool__3;
#line 551
c_rt_lib0clear(&___nl__im__4);
#line 551
c_rt_lib0clear(&___nl__im__5);
#line 551
c_rt_lib0clear(&___nl__im__6);
#line 551
c_rt_lib0clear(&___nl__im__13);
#line 551
c_rt_lib0clear(&___nl__im__14);
#line 551
c_rt_lib0clear(&___nl__im__15);
#line 551
c_rt_lib0clear(&___nl__im__16);
#line 551
c_rt_lib0clear(&___nl__im__17);
#line 551
c_rt_lib0clear(&___nl__im__19);
#line 551
//clear ___nl__bool__20;
#line 551
c_rt_lib0clear(&___nl__im__21);
#line 551
c_rt_lib0clear(&___nl__im__22);
#line 551
c_rt_lib0clear(&___nl__im__23);
#line 551
c_rt_lib0clear(&___nl__im__24);
#line 551
//clear ___nl__bool__25;
#line 551
c_rt_lib0clear(&___nl__im__26);
#line 551
c_rt_lib0clear(&___nl__im__27);
#line 551
c_rt_lib0clear(&___nl__im__28);
#line 551
c_rt_lib0clear(&___nl__im__29);
#line 551
c_rt_lib0clear(&___nl__im__30);
#line 551
c_rt_lib0clear(&___nl__im__31);
#line 551
c_rt_lib0clear(&___nl__im__33);
#line 551
c_rt_lib0clear(&___nl__im__34);
#line 551
//clear ___nl__int__35;
#line 551
//clear ___nl__bool__51;
#line 551
c_rt_lib0clear(&___nl__im__52);
#line 551
c_rt_lib0clear(&___nl__im__53);
#line 551
c_rt_lib0clear(&___nl__im__54);
#line 551
c_rt_lib0clear(&___nl__im__55);
#line 551
c_rt_lib0clear(&___nl__im__57);
#line 551
c_rt_lib0clear(&___nl__im__70);
#line 551
c_rt_lib0clear(&___nl__im__71);
#line 551
c_rt_lib0clear(&___nl__im__72);
#line 551
c_rt_lib0clear(&___nl__im__75);
#line 551
c_rt_lib0clear(&___nl__im__84);
#line 551
c_rt_lib0clear(&___nl__im__93);
#line 551
c_rt_lib0clear(&___nl__im__94);
#line 551
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
#line 555
___nl__im_ptr__2 = &((*___ref___rec__1).debug0field);
#line 555
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 555
c_rt_lib0hash_set_value_dec(___nl__im_ptr__2, ___get_global_string_const(551), ___nl__im__3);
#line 555
___nl__im_ptr__2 = NULL;
#line 555
c_rt_lib0clear(&___nl__im__3);
#line 556
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 556
c_rt_lib0move(&___nl__im__5,___get_global_string_const(830));
#line 556
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___nl__im_ptr__4), ___nl__im__5));
#line 556
___nl__int__6 = 1;
#line 556
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 556
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 556
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 556
c_rt_lib0move(&___nl__string__9,___get_global_string_const(830));
#line 556
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__4, ___nl__string__9, ___nl__im__5));
#line 556
___nl__im_ptr__4 = NULL;
#line 556
c_rt_lib0clear(&___nl__im__5);
#line 556
//clear ___nl__int__6;
#line 556
//clear ___nl__int__7;
#line 556
//clear ___nl__int__8;
#line 556
c_rt_lib0clear(&___nl__string__9);
#line 556
c_rt_lib0clear(&___nl__im__0);
#line 556
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
bool  ___nl__bool__44 = false;
ImmT * ___nl__im_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__string__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT * ___nl__im_ptr__51 = NULL;
bool  ___nl__bool__52 = false;
ImmT * ___nl__im_ptr__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
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
#line 560
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 560
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__2, ___ref___rec__1));
#line 560
c_rt_lib0clear(&___nl__im__2);
#line 561
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 561
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(993));
#line 561
if(___nl__bool__4){ goto label_47;}
#line 563
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(995));
#line 563
if(___nl__bool__4){ goto label_54;}
#line 565
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(160));
#line 565
if(___nl__bool__4){ goto label_59;}
#line 567
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(997));
#line 567
if(___nl__bool__4){ goto label_64;}
#line 569
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(996));
#line 569
if(___nl__bool__4){ goto label_69;}
#line 571
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(998));
#line 571
if(___nl__bool__4){ goto label_74;}
#line 573
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(994));
#line 573
if(___nl__bool__4){ goto label_79;}
#line 575
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1006));
#line 575
if(___nl__bool__4){ goto label_84;}
#line 576
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(220));
#line 576
if(___nl__bool__4){ goto label_86;}
#line 579
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1004));
#line 579
if(___nl__bool__4){ goto label_109;}
#line 581
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(248));
#line 581
if(___nl__bool__4){ goto label_114;}
#line 583
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1003));
#line 583
if(___nl__bool__4){ goto label_119;}
#line 585
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1005));
#line 585
if(___nl__bool__4){ goto label_124;}
#line 587
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(178));
#line 587
if(___nl__bool__4){ goto label_131;}
#line 589
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1001));
#line 589
if(___nl__bool__4){ goto label_138;}
#line 592
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1002));
#line 592
if(___nl__bool__4){ goto label_160;}
#line 595
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(249));
#line 595
if(___nl__bool__4){ goto label_182;}
#line 597
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(254));
#line 597
if(___nl__bool__4){ goto label_189;}
#line 599
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(999));
#line 599
if(___nl__bool__4){ goto label_196;}
#line 601
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(1000));
#line 601
if(___nl__bool__4){ goto label_201;}
#line 601
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 601
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 601
nl_die_arg(___nl__im__5);
#line 561
label_47:
;
#line 561
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(993)));
#line 561
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 562
___nl__bool__8 = false;
#line 562
c_rt_lib0delete(translator_priv0print_if(___nl__im__6, ___nl__bool__8, ___ref___rec__1));
#line 562
//clear ___nl__bool__8;
#line 563
goto label_206;
#line 563
label_54:
;
#line 563
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(995)));
#line 563
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 564
c_rt_lib0delete(translator_priv0print_fora(___nl__im__9, ___ref___rec__1));
#line 565
goto label_206;
#line 565
label_59:
;
#line 565
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(160)));
#line 565
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 566
c_rt_lib0delete(translator_priv0print_loop(___nl__im__11, ___ref___rec__1));
#line 567
goto label_206;
#line 567
label_64:
;
#line 567
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(997)));
#line 567
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 568
c_rt_lib0delete(translator_priv0print_rep(___nl__im__13, ___ref___rec__1));
#line 569
goto label_206;
#line 569
label_69:
;
#line 569
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(996)));
#line 569
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 570
c_rt_lib0delete(translator_priv0print_forh(___nl__im__15, ___ref___rec__1));
#line 571
goto label_206;
#line 571
label_74:
;
#line 571
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(998)));
#line 571
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 572
c_rt_lib0delete(translator_priv0print_while(___nl__im__17, ___ref___rec__1));
#line 573
goto label_206;
#line 573
label_79:
;
#line 573
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(994)));
#line 573
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 574
c_rt_lib0delete(translator_priv0print_for(___nl__im__19, ___ref___rec__1));
#line 575
goto label_206;
#line 575
label_84:
;
#line 576
goto label_206;
#line 576
label_86:
;
#line 576
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(220)));
#line 576
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 577
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(206)));
#line 577
___nl__im_ptr__27 = &((*___ref___rec__1).logic0field);
#line 577
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 577
___nl__im_ptr__27 = NULL;
#line 577
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(418)));
#line 577
c_rt_lib0clear(&___nl__im__26);
#line 577
c_rt_lib0move(&___nl__im__23, translator_priv0var_type_to_reg_type(___nl__im__24, ___nl__im__25));
#line 577
c_rt_lib0clear(&___nl__im__24);
#line 577
c_rt_lib0clear(&___nl__im__25);
#line 578
___nl__int__29 = 1;
#line 578
___nl__int__29 = -___nl__int__29;
#line 578
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 578
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 578
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__23, ___get_global_string_const(219), ___nl__im__30, ___get_global_string_const(353), ___nl__im__31));
#line 578
//clear ___nl__int__29;
#line 578
c_rt_lib0clear(&___nl__im__30);
#line 578
c_rt_lib0clear(&___nl__im__31);
#line 578
c_rt_lib0delete(translator_priv0print_val(___nl__im__21, ___nl__im__28, ___ref___rec__1));
#line 578
c_rt_lib0clear(&___nl__im__28);
#line 579
goto label_206;
#line 579
label_109:
;
#line 579
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1004)));
#line 579
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 580
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__im__32, ___ref___rec__1));
#line 581
goto label_206;
#line 581
label_114:
;
#line 581
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(248)));
#line 581
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 582
c_rt_lib0delete(translator_priv0print_return(___nl__im__34, ___ref___rec__1));
#line 583
goto label_206;
#line 583
label_119:
;
#line 583
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1003)));
#line 583
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 584
c_rt_lib0delete(translator_priv0print_match(___nl__im__36, ___ref___rec__1));
#line 585
goto label_206;
#line 585
label_124:
;
#line 585
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1005)));
#line 585
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 586
___nl__bool__40 = true;
#line 586
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__38, ___nl__bool__40, ___ref___rec__1));
#line 586
//clear ___nl__bool__40;
#line 587
goto label_206;
#line 587
label_131:
;
#line 587
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(178)));
#line 587
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 588
___nl__bool__43 = false;
#line 588
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__41, ___nl__bool__43, ___ref___rec__1));
#line 588
//clear ___nl__bool__43;
#line 589
goto label_206;
#line 589
label_138:
;
#line 590
___nl__bool__44 = true;
#line 590
___nl__im_ptr__45 = &((*___ref___rec__1).loop_label0field);
#line 590
c_rt_lib0move(&___nl__im__46,___get_global_string_const(1001));
#line 590
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_ref_hash((*___nl__im_ptr__45), ___nl__im__46));
#line 590
c_rt_lib0move(&___nl__im__47, c_rt_lib0bool_to_nl_native(___nl__bool__44));
#line 590
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_string_const(1348), ___nl__im__47);
#line 590
c_rt_lib0move(&___nl__string__48,___get_global_string_const(1001));
#line 590
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__45, ___nl__string__48, ___nl__im__46));
#line 590
___nl__im_ptr__45 = NULL;
#line 590
//clear ___nl__bool__44;
#line 590
c_rt_lib0clear(&___nl__im__46);
#line 590
c_rt_lib0clear(&___nl__im__47);
#line 590
c_rt_lib0clear(&___nl__string__48);
#line 591
___nl__im_ptr__51 = &((*___ref___rec__1).loop_label0field);
#line 591
c_rt_lib0copy(&___nl__im__50, (*___nl__im_ptr__51));
#line 591
___nl__im_ptr__51 = NULL;
#line 591
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_string_const(1001)));
#line 591
c_rt_lib0clear(&___nl__im__50);
#line 591
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__49));
#line 591
c_rt_lib0clear(&___nl__im__49);
#line 592
goto label_206;
#line 592
label_160:
;
#line 593
___nl__bool__52 = true;
#line 593
___nl__im_ptr__53 = &((*___ref___rec__1).loop_label0field);
#line 593
c_rt_lib0move(&___nl__im__54,___get_global_string_const(1002));
#line 593
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_ref_hash((*___nl__im_ptr__53), ___nl__im__54));
#line 593
c_rt_lib0move(&___nl__im__55, c_rt_lib0bool_to_nl_native(___nl__bool__52));
#line 593
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_string_const(1348), ___nl__im__55);
#line 593
c_rt_lib0move(&___nl__string__56,___get_global_string_const(1002));
#line 593
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__53, ___nl__string__56, ___nl__im__54));
#line 593
___nl__im_ptr__53 = NULL;
#line 593
//clear ___nl__bool__52;
#line 593
c_rt_lib0clear(&___nl__im__54);
#line 593
c_rt_lib0clear(&___nl__im__55);
#line 593
c_rt_lib0clear(&___nl__string__56);
#line 594
___nl__im_ptr__59 = &((*___ref___rec__1).loop_label0field);
#line 594
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 594
___nl__im_ptr__59 = NULL;
#line 594
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(1002)));
#line 594
c_rt_lib0clear(&___nl__im__58);
#line 594
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__57));
#line 594
c_rt_lib0clear(&___nl__im__57);
#line 595
goto label_206;
#line 595
label_182:
;
#line 595
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(249)));
#line 595
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 596
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 596
c_rt_lib0delete(translator_priv0print_die(___nl__im__60, ___nl__im__62, ___ref___rec__1));
#line 596
c_rt_lib0clear(&___nl__im__62);
#line 597
goto label_206;
#line 597
label_189:
;
#line 597
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(254)));
#line 597
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 598
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 598
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__63, ___ref___rec__1, ___nl__im__65));
#line 598
c_rt_lib0clear(&___nl__im__65);
#line 599
goto label_206;
#line 599
label_196:
;
#line 599
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(999)));
#line 599
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 600
c_rt_lib0delete(translator_priv0print_if_mod(___nl__im__66, ___ref___rec__1));
#line 601
goto label_206;
#line 601
label_201:
;
#line 601
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(1000)));
#line 601
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 602
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__im__68, ___ref___rec__1));
#line 603
goto label_206;
#line 603
label_206:
;
#line 603
c_rt_lib0clear(&___nl__im__0);
#line 603
c_rt_lib0clear(&___nl__im__3);
#line 603
//clear ___nl__bool__4;
#line 603
c_rt_lib0clear(&___nl__im__5);
#line 603
c_rt_lib0clear(&___nl__im__6);
#line 603
c_rt_lib0clear(&___nl__im__7);
#line 603
c_rt_lib0clear(&___nl__im__9);
#line 603
c_rt_lib0clear(&___nl__im__10);
#line 603
c_rt_lib0clear(&___nl__im__11);
#line 603
c_rt_lib0clear(&___nl__im__12);
#line 603
c_rt_lib0clear(&___nl__im__13);
#line 603
c_rt_lib0clear(&___nl__im__14);
#line 603
c_rt_lib0clear(&___nl__im__15);
#line 603
c_rt_lib0clear(&___nl__im__16);
#line 603
c_rt_lib0clear(&___nl__im__17);
#line 603
c_rt_lib0clear(&___nl__im__18);
#line 603
c_rt_lib0clear(&___nl__im__19);
#line 603
c_rt_lib0clear(&___nl__im__20);
#line 603
c_rt_lib0clear(&___nl__im__21);
#line 603
c_rt_lib0clear(&___nl__im__22);
#line 603
c_rt_lib0clear(&___nl__im__23);
#line 603
c_rt_lib0clear(&___nl__im__32);
#line 603
c_rt_lib0clear(&___nl__im__33);
#line 603
c_rt_lib0clear(&___nl__im__34);
#line 603
c_rt_lib0clear(&___nl__im__35);
#line 603
c_rt_lib0clear(&___nl__im__36);
#line 603
c_rt_lib0clear(&___nl__im__37);
#line 603
c_rt_lib0clear(&___nl__im__38);
#line 603
c_rt_lib0clear(&___nl__im__39);
#line 603
c_rt_lib0clear(&___nl__im__41);
#line 603
c_rt_lib0clear(&___nl__im__42);
#line 603
c_rt_lib0clear(&___nl__im__60);
#line 603
c_rt_lib0clear(&___nl__im__61);
#line 603
c_rt_lib0clear(&___nl__im__63);
#line 603
c_rt_lib0clear(&___nl__im__64);
#line 603
c_rt_lib0clear(&___nl__im__66);
#line 603
c_rt_lib0clear(&___nl__im__67);
#line 603
c_rt_lib0clear(&___nl__im__68);
#line 603
c_rt_lib0clear(&___nl__im__69);
#line 603
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
#line 607
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1347)));
#line 607
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__2, ___ref___rec__0));
#line 607
c_rt_lib0clear(&___nl__im__2);
#line 608
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(562)));
#line 608
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 608
c_rt_lib0clear(&___nl__im__5);
#line 608
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 608
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__6));
#line 608
//clear ___nl__int__4;
#line 608
c_rt_lib0clear(&___nl__im__6);
#line 608
c_rt_lib0delete(translator_priv0print(___ref___rec__0, ___nl__im__3));
#line 608
c_rt_lib0clear(&___nl__im__3);
#line 608
c_rt_lib0clear(&___nl__im__1);
#line 608
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
#line 613
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 614
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 615
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 616
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 616
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(222)));
#line 616
c_rt_lib0clear(&___nl__im__8);
#line 616
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(1006)));
#line 616
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__7, ___get_global_string_const(228), ___nl__im__9));
#line 616
c_rt_lib0clear(&___nl__im__7);
#line 616
c_rt_lib0clear(&___nl__im__9);
#line 616
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(1007), ___nl__im__3, ___get_global_string_const(993), ___nl__im__4, ___get_global_string_const(1008), ___nl__im__5, ___get_global_string_const(1009), ___nl__im__6));
#line 616
c_rt_lib0clear(&___nl__im__3);
#line 616
c_rt_lib0clear(&___nl__im__4);
#line 616
c_rt_lib0clear(&___nl__im__5);
#line 616
c_rt_lib0clear(&___nl__im__6);
#line 618
___nl__bool__10 = true;
#line 618
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__10, ___ref___rec__1));
#line 618
//clear ___nl__bool__10;
#line 618
c_rt_lib0clear(&___nl__im__0);
#line 618
c_rt_lib0clear(&___nl__im__2);
#line 618
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
#line 625
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 625
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(222)));
#line 625
c_rt_lib0clear(&___nl__im__5);
#line 628
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 628
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(222)));
#line 628
c_rt_lib0clear(&___nl__im__10);
#line 629
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 629
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(1025), ___nl__im__12));
#line 629
c_rt_lib0clear(&___nl__im__12);
#line 630
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 630
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__9, ___get_global_string_const(220), ___nl__im__11, ___get_global_string_const(206), ___nl__im__13));
#line 630
c_rt_lib0clear(&___nl__im__9);
#line 630
c_rt_lib0clear(&___nl__im__11);
#line 630
c_rt_lib0clear(&___nl__im__13);
#line 632
c_rt_lib0move(&___nl__im__14,___get_global_string_const(365));
#line 632
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_string_const(225), ___nl__im__8, ___get_global_string_const(560), ___nl__im__14));
#line 632
c_rt_lib0clear(&___nl__im__8);
#line 632
c_rt_lib0clear(&___nl__im__14);
#line 632
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(1029), ___nl__im__7));
#line 632
c_rt_lib0clear(&___nl__im__7);
#line 634
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 634
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__4, ___get_global_string_const(220), ___nl__im__6, ___get_global_string_const(206), ___nl__im__15));
#line 634
c_rt_lib0clear(&___nl__im__4);
#line 634
c_rt_lib0clear(&___nl__im__6);
#line 634
c_rt_lib0clear(&___nl__im__15);
#line 636
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 637
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 638
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 638
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(222)));
#line 638
c_rt_lib0clear(&___nl__im__20);
#line 638
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(1006)));
#line 638
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__19, ___get_global_string_const(228), ___nl__im__21));
#line 638
c_rt_lib0clear(&___nl__im__19);
#line 638
c_rt_lib0clear(&___nl__im__21);
#line 638
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(1007), ___nl__im__3, ___get_global_string_const(993), ___nl__im__16, ___get_global_string_const(1008), ___nl__im__17, ___get_global_string_const(1009), ___nl__im__18));
#line 638
c_rt_lib0clear(&___nl__im__3);
#line 638
c_rt_lib0clear(&___nl__im__16);
#line 638
c_rt_lib0clear(&___nl__im__17);
#line 638
c_rt_lib0clear(&___nl__im__18);
#line 640
___nl__bool__22 = true;
#line 640
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__22, ___ref___rec__1));
#line 640
//clear ___nl__bool__22;
#line 640
c_rt_lib0clear(&___nl__im__0);
#line 640
c_rt_lib0clear(&___nl__im__2);
#line 640
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
#line 644
c_rt_lib0move(&___nl__im__3, translator_priv0save_registers(___ref___rec__2));
#line 645
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__2);
#line 646
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 647
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 647
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__2, ___nl__im__7));
#line 647
c_rt_lib0clear(&___nl__im__7);
#line 648
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 648
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__6, ___ref___rec__2));
#line 648
c_rt_lib0clear(&___nl__im__8);
#line 649
c_rt_lib0move(&___nl__im__11,___get_global_string_const(365));
#line 649
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__6, ___get_global_string_const(73), ___nl__im__6, ___get_global_string_const(560), ___nl__im__11));
#line 649
c_rt_lib0clear(&___nl__im__11);
#line 649
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__10));
#line 649
c_rt_lib0clear(&___nl__im__10);
#line 649
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 649
c_rt_lib0clear(&___nl__im__9);
#line 650
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 651
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(993)));
#line 651
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__12, ___ref___rec__2));
#line 651
c_rt_lib0clear(&___nl__im__12);
#line 652
___nl__bool__13 = ___nl__bool__1;
#line 652
___nl__bool__13 = !___nl__bool__13;
#line 652
___nl__bool__13 = !___nl__bool__13;
#line 652
if(___nl__bool__13){ goto label_32;}
#line 652
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(993)));
#line 652
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(222)));
#line 652
c_rt_lib0clear(&___nl__im__16);
#line 652
c_rt_lib0move(&___nl__im__14, translator0last_debug_char(___nl__im__15));
#line 652
c_rt_lib0clear(&___nl__im__15);
#line 652
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__14, ___ref___rec__2));
#line 652
c_rt_lib0clear(&___nl__im__14);
#line 652
goto label_32;
#line 652
label_32:
;
#line 652
//clear ___nl__bool__13;
#line 653
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__4));
#line 653
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__18));
#line 653
c_rt_lib0clear(&___nl__im__18);
#line 653
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__17));
#line 653
c_rt_lib0clear(&___nl__im__17);
#line 654
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 655
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1008)));
#line 655
___nl__int__21 = 0;
#line 655
___nl__int__22 = 1;
#line 655
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 655
label_44:
;
#line 655
___nl__bool__24 = ___nl__int__21 >= ___nl__int__23;
#line 655
if(___nl__bool__24){ goto label_83;}
#line 655
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 655
c_rt_lib0copy(&___nl__im__20, ___nl__im__25);
#line 656
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(222)));
#line 656
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__26, ___ref___rec__2));
#line 656
c_rt_lib0clear(&___nl__im__26);
#line 657
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 658
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(1007)));
#line 658
c_rt_lib0delete(translator_priv0print_val(___nl__im__27, ___nl__im__6, ___ref___rec__2));
#line 658
c_rt_lib0clear(&___nl__im__27);
#line 659
c_rt_lib0move(&___nl__im__30,___get_global_string_const(365));
#line 659
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__6, ___get_global_string_const(73), ___nl__im__6, ___get_global_string_const(560), ___nl__im__30));
#line 659
c_rt_lib0clear(&___nl__im__30);
#line 659
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__29));
#line 659
c_rt_lib0clear(&___nl__im__29);
#line 659
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__28));
#line 659
c_rt_lib0clear(&___nl__im__28);
#line 660
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 661
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(228)));
#line 661
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__31, ___ref___rec__2));
#line 661
c_rt_lib0clear(&___nl__im__31);
#line 662
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(228)));
#line 662
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(222)));
#line 662
c_rt_lib0clear(&___nl__im__34);
#line 662
c_rt_lib0move(&___nl__im__32, translator0last_debug_char(___nl__im__33));
#line 662
c_rt_lib0clear(&___nl__im__33);
#line 662
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__32, ___ref___rec__2));
#line 662
c_rt_lib0clear(&___nl__im__32);
#line 663
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__4));
#line 663
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__36));
#line 663
c_rt_lib0clear(&___nl__im__36);
#line 663
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__35));
#line 663
c_rt_lib0clear(&___nl__im__35);
#line 664
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 664
c_rt_lib0clear(&___nl__im__20);
#line 665
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 665
goto label_44;
#line 665
label_83:
;
#line 666
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1009)));
#line 666
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(228)));
#line 666
c_rt_lib0clear(&___nl__im__39);
#line 666
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(1006));
#line 666
c_rt_lib0clear(&___nl__im__38);
#line 666
___nl__bool__37 = !___nl__bool__37;
#line 666
___nl__bool__37 = !___nl__bool__37;
#line 666
if(___nl__bool__37){ goto label_108;}
#line 667
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1009)));
#line 667
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__40, ___ref___rec__2));
#line 667
c_rt_lib0clear(&___nl__im__40);
#line 668
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1009)));
#line 668
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_string_const(222)));
#line 668
c_rt_lib0clear(&___nl__im__43);
#line 668
c_rt_lib0move(&___nl__im__41, translator0last_debug_char(___nl__im__42));
#line 668
c_rt_lib0clear(&___nl__im__42);
#line 668
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__41, ___ref___rec__2));
#line 668
c_rt_lib0clear(&___nl__im__41);
#line 669
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__4));
#line 669
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__45));
#line 669
c_rt_lib0clear(&___nl__im__45);
#line 669
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__44));
#line 669
c_rt_lib0clear(&___nl__im__44);
#line 670
goto label_108;
#line 670
label_108:
;
#line 670
//clear ___nl__bool__37;
#line 671
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__2));
#line 672
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__3, ___ref___rec__2));
#line 672
c_rt_lib0clear(&___nl__im__0);
#line 672
//clear ___nl__bool__1;
#line 672
c_rt_lib0clear(&___nl__im__3);
#line 672
//clear ___nl__int__4;
#line 672
//clear ___nl__int__5;
#line 672
c_rt_lib0clear(&___nl__im__6);
#line 672
c_rt_lib0clear(&___nl__im__19);
#line 672
c_rt_lib0clear(&___nl__im__20);
#line 672
//clear ___nl__int__21;
#line 672
//clear ___nl__int__22;
#line 672
//clear ___nl__int__23;
#line 672
//clear ___nl__bool__24;
#line 672
c_rt_lib0clear(&___nl__im__25);
#line 672
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
#line 679
c_rt_lib0move(&___nl__im__6,___get_global_string_const(271));
#line 679
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__0, ___get_global_string_const(268), ___nl__im__6, ___get_global_string_const(270), ___nl__im__1, ___get_global_string_const(267), ___nl__im__2));
#line 679
c_rt_lib0clear(&___nl__im__6);
#line 679
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(234), ___nl__im__5));
#line 679
c_rt_lib0clear(&___nl__im__5);
#line 679
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 679
c_rt_lib0clear(&___nl__im__4);
#line 679
c_rt_lib0clear(&___nl__im__0);
#line 679
c_rt_lib0clear(&___nl__im__1);
#line 679
c_rt_lib0clear(&___nl__im__2);
#line 679
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
#line 683
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 683
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 683
___nl__im_ptr__4 = NULL;
#line 684
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__0));
#line 685
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__1));
#line 685
___nl__bool__8 = false;
#line 685
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__8));
#line 685
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(562), ___nl__im__7, ___get_global_string_const(1347), ___nl__im__5, ___get_global_string_const(1348), ___nl__im__9));
#line 685
c_rt_lib0clear(&___nl__im__7);
#line 685
//clear ___nl__bool__8;
#line 685
c_rt_lib0clear(&___nl__im__9);
#line 685
___nl__im_ptr__10 = &((*___ref___rec__0).loop_label0field);
#line 685
c_rt_lib0copy(&___nl__im__11, ___nl__im__6);
#line 685
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_string_const(1001), ___nl__im__11);
#line 685
___nl__im_ptr__10 = NULL;
#line 685
c_rt_lib0clear(&___nl__im__6);
#line 685
c_rt_lib0clear(&___nl__im__11);
#line 686
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__2));
#line 686
___nl__bool__14 = false;
#line 686
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 686
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(562), ___nl__im__13, ___get_global_string_const(1347), ___nl__im__5, ___get_global_string_const(1348), ___nl__im__15));
#line 686
c_rt_lib0clear(&___nl__im__13);
#line 686
//clear ___nl__bool__14;
#line 686
c_rt_lib0clear(&___nl__im__15);
#line 686
___nl__im_ptr__16 = &((*___ref___rec__0).loop_label0field);
#line 686
c_rt_lib0copy(&___nl__im__17, ___nl__im__12);
#line 686
c_rt_lib0hash_set_value_dec(___nl__im_ptr__16, ___get_global_string_const(1002), ___nl__im__17);
#line 686
___nl__im_ptr__16 = NULL;
#line 686
c_rt_lib0clear(&___nl__im__12);
#line 686
c_rt_lib0clear(&___nl__im__17);
#line 687
//clear ___nl__int__1;
#line 687
//clear ___nl__int__2;
#line 687
c_rt_lib0clear(&___nl__im__5);
#line 687
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
#line 691
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 691
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 691
___nl__im_ptr__4 = NULL;
#line 691
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(1001)));
#line 691
c_rt_lib0clear(&___nl__im__3);
#line 691
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1348)));
#line 691
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__5);
#line 691
c_rt_lib0clear(&___nl__im__2);
#line 691
c_rt_lib0clear(&___nl__im__5);
#line 691
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
#line 695
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 695
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 695
___nl__im_ptr__4 = NULL;
#line 695
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(1002)));
#line 695
c_rt_lib0clear(&___nl__im__3);
#line 695
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1348)));
#line 695
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__5);
#line 695
c_rt_lib0clear(&___nl__im__2);
#line 695
c_rt_lib0clear(&___nl__im__5);
#line 695
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
#line 699
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 699
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 699
c_rt_lib0clear(&___nl__im__4);
#line 699
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 699
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 699
___nl__im_ptr__7 = NULL;
#line 699
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(418)));
#line 699
c_rt_lib0clear(&___nl__im__6);
#line 699
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 699
c_rt_lib0clear(&___nl__im__3);
#line 699
c_rt_lib0clear(&___nl__im__5);
#line 699
___nl__bool__2 = !___nl__bool__2;
#line 699
if(___nl__bool__2){ goto label_15;}
#line 700
c_rt_lib0delete(translator_priv0print_own_fora(___nl__im__0, ___ref___rec__1));
#line 701
goto label_18;
#line 701
label_15:
;
#line 702
c_rt_lib0delete(translator_priv0print_ptd_fora(___nl__im__0, ___ref___rec__1));
#line 703
goto label_18;
#line 703
label_18:
;
#line 703
//clear ___nl__bool__2;
#line 703
c_rt_lib0clear(&___nl__im__0);
#line 703
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
#line 707
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 707
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 707
___nl__im_ptr__4 = NULL;
#line 707
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(551)));
#line 707
c_rt_lib0clear(&___nl__im__3);
#line 708
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 708
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 708
c_rt_lib0clear(&___nl__im__6);
#line 709
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 709
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 709
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 709
c_rt_lib0clear(&___nl__im__8);
#line 709
c_rt_lib0clear(&___nl__im__9);
#line 710
___nl__int__10 = translator_priv0get_sim_label(___ref___rec__1);
#line 711
___nl__int__11 = translator_priv0get_sim_label(___ref___rec__1);
#line 712
___nl__int__12 = translator_priv0get_sim_label(___ref___rec__1);
#line 713
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 713
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 713
c_rt_lib0clear(&___nl__im__14);
#line 714
___nl__int__15 = 0;
#line 714
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 714
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__13, ___ref___rec__1));
#line 714
//clear ___nl__int__15;
#line 714
c_rt_lib0clear(&___nl__im__16);
#line 715
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 715
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__1, ___nl__im__18));
#line 715
c_rt_lib0clear(&___nl__im__18);
#line 716
___nl__int__19 = 1;
#line 716
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 716
c_rt_lib0delete(translator_priv0load_const(___nl__im__20, ___nl__im__17, ___ref___rec__1));
#line 716
//clear ___nl__int__19;
#line 716
c_rt_lib0clear(&___nl__im__20);
#line 717
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 717
c_rt_lib0move(&___nl__im__21, translator_priv0new_register(___ref___rec__1, ___nl__im__22));
#line 717
c_rt_lib0clear(&___nl__im__22);
#line 718
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__21, ___get_global_string_const(73), ___nl__im__5));
#line 718
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(244), ___nl__im__24));
#line 718
c_rt_lib0clear(&___nl__im__24);
#line 718
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__23));
#line 718
c_rt_lib0clear(&___nl__im__23);
#line 719
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 719
c_rt_lib0move(&___nl__im__25, translator_priv0new_register(___ref___rec__1, ___nl__im__26));
#line 719
c_rt_lib0clear(&___nl__im__26);
#line 720
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__12, ___ref___rec__1));
#line 721
c_rt_lib0move(&___nl__im__27,___get_global_string_const(389));
#line 721
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__25, ___nl__im__13, ___nl__im__21, ___nl__im__27, ___ref___rec__1));
#line 721
c_rt_lib0clear(&___nl__im__27);
#line 722
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__10, ___nl__im__25, ___ref___rec__1));
#line 723
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 723
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 723
c_rt_lib0clear(&___nl__im__29);
#line 724
c_rt_lib0delete(translator_priv0use_index(___nl__im__28, ___nl__im__5, ___nl__im__13, ___ref___rec__1));
#line 725
c_rt_lib0delete(translator_priv0move(___nl__im__7, ___nl__im__28, ___ref___rec__1));
#line 726
c_rt_lib0move(&___nl__im__30, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__10, ___nl__int__11));
#line 727
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 727
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__31, ___ref___rec__1));
#line 727
c_rt_lib0clear(&___nl__im__31);
#line 728
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__7, ___ref___rec__1));
#line 729
___nl__bool__32 = translator_priv0continue_used(___ref___rec__1);
#line 729
___nl__bool__32 = !___nl__bool__32;
#line 729
if(___nl__bool__32){ goto label_63;}
#line 729
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__11, ___ref___rec__1));
#line 729
goto label_63;
#line 729
label_63:
;
#line 729
//clear ___nl__bool__32;
#line 730
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1074)));
#line 730
___nl__bool__33 = c_rt_lib0check_true_native(___nl__im__34);
#line 730
c_rt_lib0clear(&___nl__im__34);
#line 730
___nl__bool__33 = !___nl__bool__33;
#line 730
___nl__bool__33 = !___nl__bool__33;
#line 730
if(___nl__bool__33){ goto label_75;}
#line 730
c_rt_lib0move(&___nl__im__35, translator0last_debug_char(___nl__im__2));
#line 730
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__35, ___ref___rec__1));
#line 730
c_rt_lib0clear(&___nl__im__35);
#line 730
goto label_75;
#line 730
label_75:
;
#line 730
//clear ___nl__bool__33;
#line 731
c_rt_lib0move(&___nl__im__38,___get_global_string_const(369));
#line 731
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__13, ___get_global_string_const(276), ___nl__im__13, ___get_global_string_const(277), ___nl__im__17, ___get_global_string_const(560), ___nl__im__38));
#line 731
c_rt_lib0clear(&___nl__im__38);
#line 731
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__37));
#line 731
c_rt_lib0clear(&___nl__im__37);
#line 731
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__36));
#line 731
c_rt_lib0clear(&___nl__im__36);
#line 732
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__12));
#line 732
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__40));
#line 732
c_rt_lib0clear(&___nl__im__40);
#line 732
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__39));
#line 732
c_rt_lib0clear(&___nl__im__39);
#line 733
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__10, ___ref___rec__1));
#line 734
___nl__im_ptr__41 = &((*___ref___rec__1).loop_label0field);
#line 734
c_rt_lib0copy(___nl__im_ptr__41, ___nl__im__30);
#line 734
___nl__im_ptr__41 = NULL;
#line 734
c_rt_lib0clear(&___nl__im__0);
#line 734
c_rt_lib0clear(&___nl__im__2);
#line 734
c_rt_lib0clear(&___nl__im__5);
#line 734
c_rt_lib0clear(&___nl__im__7);
#line 734
//clear ___nl__int__10;
#line 734
//clear ___nl__int__11;
#line 734
//clear ___nl__int__12;
#line 734
c_rt_lib0clear(&___nl__im__13);
#line 734
c_rt_lib0clear(&___nl__im__17);
#line 734
c_rt_lib0clear(&___nl__im__21);
#line 734
c_rt_lib0clear(&___nl__im__25);
#line 734
c_rt_lib0clear(&___nl__im__28);
#line 734
c_rt_lib0clear(&___nl__im__30);
#line 734
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
#line 738
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 738
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 738
___nl__im_ptr__4 = NULL;
#line 738
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(551)));
#line 738
c_rt_lib0clear(&___nl__im__3);
#line 739
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 739
___nl__bool__7 = true;
#line 739
c_rt_lib0move(&___nl__im__5, translator_priv0get_value_of_lvalue(___nl__im__6, ___nl__bool__7, ___ref___rec__1));
#line 739
c_rt_lib0clear(&___nl__im__6);
#line 739
//clear ___nl__bool__7;
#line 740
___nl__int__11 = c_rt_lib0array_len(___nl__im__5);
#line 740
___nl__int__12 = 1;
#line 740
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 740
//clear ___nl__int__11;
#line 740
//clear ___nl__int__12;
#line 740
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 740
//clear ___nl__int__10;
#line 740
___nl__int__15 = c_rt_lib0array_len(___nl__im__5);
#line 740
___nl__int__16 = 1;
#line 740
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 740
//clear ___nl__int__15;
#line 740
//clear ___nl__int__16;
#line 740
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__5, ___nl__int__14));
#line 740
//clear ___nl__int__14;
#line 740
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(220)));
#line 740
c_rt_lib0clear(&___nl__im__9);
#line 740
c_rt_lib0clear(&___nl__im__13);
#line 741
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 741
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(422)));
#line 741
c_rt_lib0move(&___nl__im__17, translator_priv0print_var_decl(___nl__im__18, ___ref___rec__1, ___nl__im__19));
#line 741
c_rt_lib0clear(&___nl__im__18);
#line 741
c_rt_lib0clear(&___nl__im__19);
#line 742
___nl__int__20 = translator_priv0get_sim_label(___ref___rec__1);
#line 743
___nl__int__21 = translator_priv0get_sim_label(___ref___rec__1);
#line 744
___nl__int__22 = translator_priv0get_sim_label(___ref___rec__1);
#line 745
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 745
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 745
c_rt_lib0clear(&___nl__im__24);
#line 746
___nl__int__25 = 0;
#line 746
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 746
c_rt_lib0delete(translator_priv0load_const(___nl__im__26, ___nl__im__23, ___ref___rec__1));
#line 746
//clear ___nl__int__25;
#line 746
c_rt_lib0clear(&___nl__im__26);
#line 747
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 747
c_rt_lib0move(&___nl__im__27, translator_priv0new_register(___ref___rec__1, ___nl__im__28));
#line 747
c_rt_lib0clear(&___nl__im__28);
#line 748
___nl__int__29 = 1;
#line 748
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 748
c_rt_lib0delete(translator_priv0load_const(___nl__im__30, ___nl__im__27, ___ref___rec__1));
#line 748
//clear ___nl__int__29;
#line 748
c_rt_lib0clear(&___nl__im__30);
#line 749
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 749
c_rt_lib0move(&___nl__im__31, translator_priv0new_register(___ref___rec__1, ___nl__im__32));
#line 749
c_rt_lib0clear(&___nl__im__32);
#line 750
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__31, ___get_global_string_const(73), ___nl__im__8));
#line 750
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(244), ___nl__im__34));
#line 750
c_rt_lib0clear(&___nl__im__34);
#line 750
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__33));
#line 750
c_rt_lib0clear(&___nl__im__33);
#line 751
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 751
c_rt_lib0move(&___nl__im__35, translator_priv0new_register(___ref___rec__1, ___nl__im__36));
#line 751
c_rt_lib0clear(&___nl__im__36);
#line 752
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__22, ___ref___rec__1));
#line 753
c_rt_lib0move(&___nl__im__37,___get_global_string_const(389));
#line 753
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__35, ___nl__im__23, ___nl__im__31, ___nl__im__37, ___ref___rec__1));
#line 753
c_rt_lib0clear(&___nl__im__37);
#line 754
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__20, ___nl__im__35, ___ref___rec__1));
#line 755
c_rt_lib0copy(&___nl__im__38, ___nl__im__17);
#line 756
c_rt_lib0delete(translator_priv0use_index(___nl__im__38, ___nl__im__8, ___nl__im__23, ___ref___rec__1));
#line 757
c_rt_lib0move(&___nl__im__39, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__20, ___nl__int__21));
#line 758
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 758
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__40, ___ref___rec__1));
#line 758
c_rt_lib0clear(&___nl__im__40);
#line 759
___nl__bool__41 = translator_priv0continue_used(___ref___rec__1);
#line 759
___nl__bool__41 = !___nl__bool__41;
#line 759
if(___nl__bool__41){ goto label_78;}
#line 759
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__21, ___ref___rec__1));
#line 759
goto label_78;
#line 759
label_78:
;
#line 759
//clear ___nl__bool__41;
#line 760
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1074)));
#line 760
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__43);
#line 760
c_rt_lib0clear(&___nl__im__43);
#line 760
___nl__bool__42 = !___nl__bool__42;
#line 760
___nl__bool__42 = !___nl__bool__42;
#line 760
if(___nl__bool__42){ goto label_90;}
#line 760
c_rt_lib0move(&___nl__im__44, translator0last_debug_char(___nl__im__2));
#line 760
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__44, ___ref___rec__1));
#line 760
c_rt_lib0clear(&___nl__im__44);
#line 760
goto label_90;
#line 760
label_90:
;
#line 760
//clear ___nl__bool__42;
#line 761
c_rt_lib0move(&___nl__im__47,___get_global_string_const(369));
#line 761
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__23, ___get_global_string_const(276), ___nl__im__23, ___get_global_string_const(277), ___nl__im__27, ___get_global_string_const(560), ___nl__im__47));
#line 761
c_rt_lib0clear(&___nl__im__47);
#line 761
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__46));
#line 761
c_rt_lib0clear(&___nl__im__46);
#line 761
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__45));
#line 761
c_rt_lib0clear(&___nl__im__45);
#line 762
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__22));
#line 762
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__49));
#line 762
c_rt_lib0clear(&___nl__im__49);
#line 762
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__48));
#line 762
c_rt_lib0clear(&___nl__im__48);
#line 763
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__20, ___ref___rec__1));
#line 764
___nl__bool__50 = false;
#line 764
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__5, ___nl__bool__50, ___ref___rec__1));
#line 764
//clear ___nl__bool__50;
#line 765
___nl__im_ptr__51 = &((*___ref___rec__1).loop_label0field);
#line 765
c_rt_lib0copy(___nl__im_ptr__51, ___nl__im__39);
#line 765
___nl__im_ptr__51 = NULL;
#line 765
c_rt_lib0clear(&___nl__im__0);
#line 765
c_rt_lib0clear(&___nl__im__2);
#line 765
c_rt_lib0clear(&___nl__im__5);
#line 765
c_rt_lib0clear(&___nl__im__8);
#line 765
c_rt_lib0clear(&___nl__im__17);
#line 765
//clear ___nl__int__20;
#line 765
//clear ___nl__int__21;
#line 765
//clear ___nl__int__22;
#line 765
c_rt_lib0clear(&___nl__im__23);
#line 765
c_rt_lib0clear(&___nl__im__27);
#line 765
c_rt_lib0clear(&___nl__im__31);
#line 765
c_rt_lib0clear(&___nl__im__35);
#line 765
c_rt_lib0clear(&___nl__im__38);
#line 765
c_rt_lib0clear(&___nl__im__39);
#line 765
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
#line 769
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 770
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 771
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 772
c_rt_lib0move(&___nl__im__4, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 773
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__1));
#line 774
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__0, ___ref___rec__1));
#line 775
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__5, ___ref___rec__1));
#line 776
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 776
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__6, ___ref___rec__1));
#line 776
c_rt_lib0clear(&___nl__im__6);
#line 777
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__3));
#line 777
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__8));
#line 777
c_rt_lib0clear(&___nl__im__8);
#line 777
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__7));
#line 777
c_rt_lib0clear(&___nl__im__7);
#line 778
___nl__bool__9 = translator_priv0break_used(___ref___rec__1);
#line 778
___nl__bool__9 = !___nl__bool__9;
#line 778
if(___nl__bool__9){ goto label_20;}
#line 778
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 778
goto label_20;
#line 778
label_20:
;
#line 778
//clear ___nl__bool__9;
#line 779
___nl__im_ptr__10 = &((*___ref___rec__1).loop_label0field);
#line 779
c_rt_lib0copy(___nl__im_ptr__10, ___nl__im__4);
#line 779
___nl__im_ptr__10 = NULL;
#line 779
c_rt_lib0clear(&___nl__im__0);
#line 779
//clear ___nl__int__2;
#line 779
//clear ___nl__int__3;
#line 779
c_rt_lib0clear(&___nl__im__4);
#line 779
c_rt_lib0clear(&___nl__im__5);
#line 779
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
#line 783
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 784
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 785
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 786
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1012)));
#line 786
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 786
c_rt_lib0clear(&___nl__im__6);
#line 787
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 787
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 787
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 787
c_rt_lib0clear(&___nl__im__8);
#line 787
c_rt_lib0clear(&___nl__im__9);
#line 788
___nl__int__10 = 0;
#line 788
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 788
c_rt_lib0delete(translator_priv0load_const(___nl__im__11, ___nl__im__7, ___ref___rec__1));
#line 788
//clear ___nl__int__10;
#line 788
c_rt_lib0clear(&___nl__im__11);
#line 789
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 789
c_rt_lib0move(&___nl__im__12, translator_priv0new_register(___ref___rec__1, ___nl__im__13));
#line 789
c_rt_lib0clear(&___nl__im__13);
#line 790
___nl__int__14 = 1;
#line 790
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 790
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__12, ___ref___rec__1));
#line 790
//clear ___nl__int__14;
#line 790
c_rt_lib0clear(&___nl__im__15);
#line 791
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 791
c_rt_lib0move(&___nl__im__16, translator_priv0new_register(___ref___rec__1, ___nl__im__17));
#line 791
c_rt_lib0clear(&___nl__im__17);
#line 792
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 793
c_rt_lib0move(&___nl__im__18,___get_global_string_const(389));
#line 793
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__16, ___nl__im__7, ___nl__im__5, ___nl__im__18, ___ref___rec__1));
#line 793
c_rt_lib0clear(&___nl__im__18);
#line 794
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__16, ___ref___rec__1));
#line 795
c_rt_lib0move(&___nl__im__19, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 796
c_rt_lib0move(&___nl__im__20, translator_priv0save_registers(___ref___rec__1));
#line 797
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 797
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__21, ___ref___rec__1));
#line 797
c_rt_lib0clear(&___nl__im__21);
#line 798
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__20, ___ref___rec__1));
#line 799
___nl__bool__22 = translator_priv0continue_used(___ref___rec__1);
#line 799
___nl__bool__22 = !___nl__bool__22;
#line 799
if(___nl__bool__22){ goto label_43;}
#line 799
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 799
goto label_43;
#line 799
label_43:
;
#line 799
//clear ___nl__bool__22;
#line 800
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1074)));
#line 800
___nl__bool__23 = c_rt_lib0check_true_native(___nl__im__24);
#line 800
c_rt_lib0clear(&___nl__im__24);
#line 800
___nl__bool__23 = !___nl__bool__23;
#line 800
___nl__bool__23 = !___nl__bool__23;
#line 800
if(___nl__bool__23){ goto label_59;}
#line 800
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 800
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(222)));
#line 800
c_rt_lib0clear(&___nl__im__27);
#line 800
c_rt_lib0move(&___nl__im__25, translator0last_debug_char(___nl__im__26));
#line 800
c_rt_lib0clear(&___nl__im__26);
#line 800
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__25, ___ref___rec__1));
#line 800
c_rt_lib0clear(&___nl__im__25);
#line 800
goto label_59;
#line 800
label_59:
;
#line 800
//clear ___nl__bool__23;
#line 801
c_rt_lib0move(&___nl__im__30,___get_global_string_const(369));
#line 801
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__7, ___get_global_string_const(276), ___nl__im__7, ___get_global_string_const(277), ___nl__im__12, ___get_global_string_const(560), ___nl__im__30));
#line 801
c_rt_lib0clear(&___nl__im__30);
#line 801
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__29));
#line 801
c_rt_lib0clear(&___nl__im__29);
#line 801
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__28));
#line 801
c_rt_lib0clear(&___nl__im__28);
#line 802
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__4));
#line 802
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__32));
#line 802
c_rt_lib0clear(&___nl__im__32);
#line 802
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__31));
#line 802
c_rt_lib0clear(&___nl__im__31);
#line 803
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 804
___nl__im_ptr__33 = &((*___ref___rec__1).loop_label0field);
#line 804
c_rt_lib0copy(___nl__im_ptr__33, ___nl__im__19);
#line 804
___nl__im_ptr__33 = NULL;
#line 804
c_rt_lib0clear(&___nl__im__0);
#line 804
//clear ___nl__int__2;
#line 804
//clear ___nl__int__3;
#line 804
//clear ___nl__int__4;
#line 804
c_rt_lib0clear(&___nl__im__5);
#line 804
c_rt_lib0clear(&___nl__im__7);
#line 804
c_rt_lib0clear(&___nl__im__12);
#line 804
c_rt_lib0clear(&___nl__im__16);
#line 804
c_rt_lib0clear(&___nl__im__19);
#line 804
c_rt_lib0clear(&___nl__im__20);
#line 804
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
#line 808
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 808
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(206)));
#line 808
c_rt_lib0clear(&___nl__im__4);
#line 808
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 808
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 808
___nl__im_ptr__7 = NULL;
#line 808
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(418)));
#line 808
c_rt_lib0clear(&___nl__im__6);
#line 808
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 808
c_rt_lib0clear(&___nl__im__3);
#line 808
c_rt_lib0clear(&___nl__im__5);
#line 808
___nl__bool__2 = !___nl__bool__2;
#line 808
if(___nl__bool__2){ goto label_15;}
#line 809
c_rt_lib0delete(translator_priv0print_own_forh(___nl__im__0, ___ref___rec__1));
#line 810
goto label_18;
#line 810
label_15:
;
#line 811
c_rt_lib0delete(translator_priv0print_ptd_forh(___nl__im__0, ___ref___rec__1));
#line 812
goto label_18;
#line 812
label_18:
;
#line 812
//clear ___nl__bool__2;
#line 812
c_rt_lib0clear(&___nl__im__0);
#line 812
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
#line 816
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 816
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 816
___nl__im_ptr__4 = NULL;
#line 816
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(551)));
#line 816
c_rt_lib0clear(&___nl__im__3);
#line 817
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 818
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 819
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 820
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 820
c_rt_lib0move(&___nl__im__8, translator_priv0calc_val(___nl__im__9, ___ref___rec__1));
#line 820
c_rt_lib0clear(&___nl__im__9);
#line 821
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(577)));
#line 821
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 821
c_rt_lib0move(&___nl__im__10, translator_priv0print_var_decl(___nl__im__11, ___ref___rec__1, ___nl__im__12));
#line 821
c_rt_lib0clear(&___nl__im__11);
#line 821
c_rt_lib0clear(&___nl__im__12);
#line 822
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 822
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 822
c_rt_lib0clear(&___nl__im__14);
#line 823
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 823
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 823
c_rt_lib0move(&___nl__im__15, translator_priv0print_var_decl(___nl__im__16, ___ref___rec__1, ___nl__im__17));
#line 823
c_rt_lib0clear(&___nl__im__16);
#line 823
c_rt_lib0clear(&___nl__im__17);
#line 824
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 824
c_rt_lib0move(&___nl__im__18, translator_priv0new_register(___ref___rec__1, ___nl__im__19));
#line 824
c_rt_lib0clear(&___nl__im__19);
#line 825
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(364), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 825
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__21));
#line 825
c_rt_lib0clear(&___nl__im__21);
#line 825
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 825
c_rt_lib0clear(&___nl__im__20);
#line 826
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 827
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__13, ___get_global_string_const(364), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 827
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(266), ___nl__im__23));
#line 827
c_rt_lib0clear(&___nl__im__23);
#line 827
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__22));
#line 827
c_rt_lib0clear(&___nl__im__22);
#line 828
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__13, ___ref___rec__1));
#line 829
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__10, ___get_global_string_const(364), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 829
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(265), ___nl__im__25));
#line 829
c_rt_lib0clear(&___nl__im__25);
#line 829
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 829
c_rt_lib0clear(&___nl__im__24);
#line 831
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 831
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(206)));
#line 831
___nl__bool__26 = nlasm0eq_reg_type(___nl__im__27, ___nl__im__28);
#line 831
c_rt_lib0clear(&___nl__im__27);
#line 831
c_rt_lib0clear(&___nl__im__28);
#line 831
___nl__bool__26 = !___nl__bool__26;
#line 832
c_rt_lib0copy(&___nl__im__29, ___nl__im__15);
#line 833
___nl__bool__30 = ___nl__bool__26;
#line 833
___nl__bool__30 = !___nl__bool__30;
#line 833
if(___nl__bool__30){ goto label_58;}
#line 833
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 833
c_rt_lib0move(&___nl__im__29, translator_priv0new_register(___ref___rec__1, ___nl__im__31));
#line 833
c_rt_lib0clear(&___nl__im__31);
#line 833
goto label_58;
#line 833
label_58:
;
#line 833
//clear ___nl__bool__30;
#line 834
c_rt_lib0move(&___nl__im__32,___get_global_string_const(768));
#line 834
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__8));
#line 834
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__10));
#line 834
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__35));
#line 834
c_rt_lib0clear(&___nl__im__34);
#line 834
c_rt_lib0clear(&___nl__im__35);
#line 834
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__29, ___nl__im__32, ___nl__im__33, ___ref___rec__1));
#line 834
c_rt_lib0clear(&___nl__im__32);
#line 834
c_rt_lib0clear(&___nl__im__33);
#line 835
___nl__bool__36 = ___nl__bool__26;
#line 835
___nl__bool__36 = !___nl__bool__36;
#line 835
if(___nl__bool__36){ goto label_74;}
#line 835
c_rt_lib0delete(translator_priv0move(___nl__im__15, ___nl__im__29, ___ref___rec__1));
#line 835
goto label_74;
#line 835
label_74:
;
#line 835
//clear ___nl__bool__36;
#line 837
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 838
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 839
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 839
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 839
c_rt_lib0clear(&___nl__im__39);
#line 840
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 841
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 841
___nl__bool__40 = !___nl__bool__40;
#line 841
if(___nl__bool__40){ goto label_87;}
#line 841
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 841
goto label_87;
#line 841
label_87:
;
#line 841
//clear ___nl__bool__40;
#line 842
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1074)));
#line 842
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 842
c_rt_lib0clear(&___nl__im__42);
#line 842
___nl__bool__41 = !___nl__bool__41;
#line 842
___nl__bool__41 = !___nl__bool__41;
#line 842
if(___nl__bool__41){ goto label_99;}
#line 842
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 842
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 842
c_rt_lib0clear(&___nl__im__43);
#line 842
goto label_99;
#line 842
label_99:
;
#line 842
//clear ___nl__bool__41;
#line 843
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(364), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 843
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(264), ___nl__im__45));
#line 843
c_rt_lib0clear(&___nl__im__45);
#line 843
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 843
c_rt_lib0clear(&___nl__im__44);
#line 844
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 844
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__47));
#line 844
c_rt_lib0clear(&___nl__im__47);
#line 844
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 844
c_rt_lib0clear(&___nl__im__46);
#line 845
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 846
___nl__im_ptr__48 = &((*___ref___rec__1).loop_label0field);
#line 846
c_rt_lib0copy(___nl__im_ptr__48, ___nl__im__37);
#line 846
___nl__im_ptr__48 = NULL;
#line 846
c_rt_lib0clear(&___nl__im__0);
#line 846
c_rt_lib0clear(&___nl__im__2);
#line 846
//clear ___nl__int__5;
#line 846
//clear ___nl__int__6;
#line 846
//clear ___nl__int__7;
#line 846
c_rt_lib0clear(&___nl__im__8);
#line 846
c_rt_lib0clear(&___nl__im__10);
#line 846
c_rt_lib0clear(&___nl__im__13);
#line 846
c_rt_lib0clear(&___nl__im__15);
#line 846
c_rt_lib0clear(&___nl__im__18);
#line 846
//clear ___nl__bool__26;
#line 846
c_rt_lib0clear(&___nl__im__29);
#line 846
c_rt_lib0clear(&___nl__im__37);
#line 846
c_rt_lib0clear(&___nl__im__38);
#line 846
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
#line 850
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 850
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 850
___nl__im_ptr__4 = NULL;
#line 850
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(551)));
#line 850
c_rt_lib0clear(&___nl__im__3);
#line 851
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 852
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 853
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 854
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 854
___nl__bool__10 = true;
#line 854
c_rt_lib0move(&___nl__im__8, translator_priv0get_value_of_lvalue(___nl__im__9, ___nl__bool__10, ___ref___rec__1));
#line 854
c_rt_lib0clear(&___nl__im__9);
#line 854
//clear ___nl__bool__10;
#line 855
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 855
___nl__int__15 = 1;
#line 855
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 855
//clear ___nl__int__14;
#line 855
//clear ___nl__int__15;
#line 855
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__8, ___nl__int__13));
#line 855
//clear ___nl__int__13;
#line 855
___nl__int__18 = c_rt_lib0array_len(___nl__im__8);
#line 855
___nl__int__19 = 1;
#line 855
___nl__int__17 = ___nl__int__18 - ___nl__int__19;
#line 855
//clear ___nl__int__18;
#line 855
//clear ___nl__int__19;
#line 855
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 855
//clear ___nl__int__17;
#line 855
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(220)));
#line 855
c_rt_lib0clear(&___nl__im__12);
#line 855
c_rt_lib0clear(&___nl__im__16);
#line 856
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(577)));
#line 856
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 856
c_rt_lib0move(&___nl__im__20, translator_priv0print_var_decl(___nl__im__21, ___ref___rec__1, ___nl__im__22));
#line 856
c_rt_lib0clear(&___nl__im__21);
#line 856
c_rt_lib0clear(&___nl__im__22);
#line 857
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 857
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 857
c_rt_lib0clear(&___nl__im__24);
#line 858
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 858
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(422)));
#line 858
c_rt_lib0move(&___nl__im__25, translator_priv0print_var_decl(___nl__im__26, ___ref___rec__1, ___nl__im__27));
#line 858
c_rt_lib0clear(&___nl__im__26);
#line 858
c_rt_lib0clear(&___nl__im__27);
#line 859
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 859
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 859
c_rt_lib0clear(&___nl__im__29);
#line 860
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_string_const(364), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 860
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__31));
#line 860
c_rt_lib0clear(&___nl__im__31);
#line 860
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__30));
#line 860
c_rt_lib0clear(&___nl__im__30);
#line 861
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 862
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__23, ___get_global_string_const(364), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 862
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(266), ___nl__im__33));
#line 862
c_rt_lib0clear(&___nl__im__33);
#line 862
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 862
c_rt_lib0clear(&___nl__im__32);
#line 863
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__23, ___ref___rec__1));
#line 864
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__20, ___get_global_string_const(364), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 864
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(265), ___nl__im__35));
#line 864
c_rt_lib0clear(&___nl__im__35);
#line 864
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 864
c_rt_lib0clear(&___nl__im__34);
#line 866
___nl__bool__36 = false;
#line 866
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___nl__bool__36, ___ref___rec__1));
#line 866
//clear ___nl__bool__36;
#line 868
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 869
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 870
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 870
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 870
c_rt_lib0clear(&___nl__im__39);
#line 871
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 872
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___ref___rec__1));
#line 873
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 873
___nl__bool__40 = !___nl__bool__40;
#line 873
if(___nl__bool__40){ goto label_78;}
#line 873
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 873
goto label_78;
#line 873
label_78:
;
#line 873
//clear ___nl__bool__40;
#line 874
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1074)));
#line 874
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 874
c_rt_lib0clear(&___nl__im__42);
#line 874
___nl__bool__41 = !___nl__bool__41;
#line 874
___nl__bool__41 = !___nl__bool__41;
#line 874
if(___nl__bool__41){ goto label_90;}
#line 874
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 874
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 874
c_rt_lib0clear(&___nl__im__43);
#line 874
goto label_90;
#line 874
label_90:
;
#line 874
//clear ___nl__bool__41;
#line 875
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(364), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 875
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(264), ___nl__im__45));
#line 875
c_rt_lib0clear(&___nl__im__45);
#line 875
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 875
c_rt_lib0clear(&___nl__im__44);
#line 876
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 876
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__47));
#line 876
c_rt_lib0clear(&___nl__im__47);
#line 876
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 876
c_rt_lib0clear(&___nl__im__46);
#line 877
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 878
___nl__bool__48 = false;
#line 878
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__8, ___nl__bool__48, ___ref___rec__1));
#line 878
//clear ___nl__bool__48;
#line 879
___nl__im_ptr__49 = &((*___ref___rec__1).loop_label0field);
#line 879
c_rt_lib0copy(___nl__im_ptr__49, ___nl__im__37);
#line 879
___nl__im_ptr__49 = NULL;
#line 879
c_rt_lib0clear(&___nl__im__0);
#line 879
c_rt_lib0clear(&___nl__im__2);
#line 879
//clear ___nl__int__5;
#line 879
//clear ___nl__int__6;
#line 879
//clear ___nl__int__7;
#line 879
c_rt_lib0clear(&___nl__im__8);
#line 879
c_rt_lib0clear(&___nl__im__11);
#line 879
c_rt_lib0clear(&___nl__im__20);
#line 879
c_rt_lib0clear(&___nl__im__23);
#line 879
c_rt_lib0clear(&___nl__im__25);
#line 879
c_rt_lib0clear(&___nl__im__28);
#line 879
c_rt_lib0clear(&___nl__im__37);
#line 879
c_rt_lib0clear(&___nl__im__38);
#line 879
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
#line 883
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 884
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 885
___nl__im_ptr__6 = &((*___ref___rec__1).debug0field);
#line 885
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 885
___nl__im_ptr__6 = NULL;
#line 885
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(551)));
#line 885
c_rt_lib0clear(&___nl__im__5);
#line 886
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 887
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 887
c_rt_lib0move(&___nl__im__7, translator_priv0calc_val(___nl__im__8, ___ref___rec__1));
#line 887
c_rt_lib0clear(&___nl__im__8);
#line 888
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 888
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__7, ___nl__im__10, ___ref___rec__1));
#line 888
c_rt_lib0clear(&___nl__im__10);
#line 889
c_rt_lib0move(&___nl__im__13,___get_global_string_const(365));
#line 889
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__9, ___get_global_string_const(73), ___nl__im__9, ___get_global_string_const(560), ___nl__im__13));
#line 889
c_rt_lib0clear(&___nl__im__13);
#line 889
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__12));
#line 889
c_rt_lib0clear(&___nl__im__12);
#line 889
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__11));
#line 889
c_rt_lib0clear(&___nl__im__11);
#line 890
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__9, ___ref___rec__1));
#line 891
c_rt_lib0move(&___nl__im__14, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 892
c_rt_lib0move(&___nl__im__15, translator_priv0save_registers(___ref___rec__1));
#line 893
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 893
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__16, ___ref___rec__1));
#line 893
c_rt_lib0clear(&___nl__im__16);
#line 894
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__15, ___ref___rec__1));
#line 895
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1074)));
#line 895
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 895
c_rt_lib0clear(&___nl__im__18);
#line 895
___nl__bool__17 = !___nl__bool__17;
#line 895
___nl__bool__17 = !___nl__bool__17;
#line 895
if(___nl__bool__17){ goto label_38;}
#line 895
c_rt_lib0move(&___nl__im__19, translator0last_debug_char(___nl__im__4));
#line 895
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__19, ___ref___rec__1));
#line 895
c_rt_lib0clear(&___nl__im__19);
#line 895
goto label_38;
#line 895
label_38:
;
#line 895
//clear ___nl__bool__17;
#line 896
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__3));
#line 896
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__21));
#line 896
c_rt_lib0clear(&___nl__im__21);
#line 896
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 896
c_rt_lib0clear(&___nl__im__20);
#line 897
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 898
___nl__im_ptr__22 = &((*___ref___rec__1).loop_label0field);
#line 898
c_rt_lib0copy(___nl__im_ptr__22, ___nl__im__14);
#line 898
___nl__im_ptr__22 = NULL;
#line 898
c_rt_lib0clear(&___nl__im__0);
#line 898
//clear ___nl__int__2;
#line 898
//clear ___nl__int__3;
#line 898
c_rt_lib0clear(&___nl__im__4);
#line 898
c_rt_lib0clear(&___nl__im__7);
#line 898
c_rt_lib0clear(&___nl__im__9);
#line 898
c_rt_lib0clear(&___nl__im__14);
#line 898
c_rt_lib0clear(&___nl__im__15);
#line 898
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
#line 902
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 903
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 904
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 905
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1010)));
#line 905
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(220));
#line 905
if(___nl__bool__6){ goto label_11;}
#line 907
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(254));
#line 907
if(___nl__bool__6){ goto label_27;}
#line 907
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 907
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 907
nl_die_arg(___nl__im__7);
#line 905
label_11:
;
#line 905
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(220)));
#line 905
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 906
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 906
___nl__int__12 = 1;
#line 906
___nl__int__12 = -___nl__int__12;
#line 906
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 906
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 906
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__11, ___get_global_string_const(219), ___nl__im__13, ___get_global_string_const(353), ___nl__im__14));
#line 906
c_rt_lib0clear(&___nl__im__11);
#line 906
//clear ___nl__int__12;
#line 906
c_rt_lib0clear(&___nl__im__13);
#line 906
c_rt_lib0clear(&___nl__im__14);
#line 906
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__10, ___ref___rec__1));
#line 906
c_rt_lib0clear(&___nl__im__10);
#line 907
goto label_34;
#line 907
label_27:
;
#line 907
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(254)));
#line 907
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 908
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 908
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__15, ___ref___rec__1, ___nl__im__17));
#line 908
c_rt_lib0clear(&___nl__im__17);
#line 909
goto label_34;
#line 909
label_34:
;
#line 910
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 911
___nl__bool__18 = false;
#line 912
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 912
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(220)));
#line 912
c_rt_lib0clear(&___nl__im__21);
#line 912
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(1006));
#line 912
c_rt_lib0clear(&___nl__im__20);
#line 912
___nl__bool__19 = !___nl__bool__19;
#line 912
___nl__bool__19 = !___nl__bool__19;
#line 912
if(___nl__bool__19){ goto label_58;}
#line 913
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1007)));
#line 913
c_rt_lib0move(&___nl__im__22, translator_priv0calc_val(___nl__im__23, ___ref___rec__1));
#line 913
c_rt_lib0clear(&___nl__im__23);
#line 914
c_rt_lib0move(&___nl__im__26,___get_global_string_const(365));
#line 914
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__22, ___get_global_string_const(73), ___nl__im__22, ___get_global_string_const(560), ___nl__im__26));
#line 914
c_rt_lib0clear(&___nl__im__26);
#line 914
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__25));
#line 914
c_rt_lib0clear(&___nl__im__25);
#line 914
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 914
c_rt_lib0clear(&___nl__im__24);
#line 915
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__22, ___ref___rec__1));
#line 916
___nl__bool__18 = true;
#line 917
goto label_58;
#line 917
label_58:
;
#line 917
//clear ___nl__bool__19;
#line 917
c_rt_lib0clear(&___nl__im__22);
#line 918
c_rt_lib0move(&___nl__im__27, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__4));
#line 919
c_rt_lib0move(&___nl__im__28, translator_priv0save_registers(___ref___rec__1));
#line 920
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 920
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__29, ___ref___rec__1));
#line 920
c_rt_lib0clear(&___nl__im__29);
#line 921
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__28, ___ref___rec__1));
#line 922
___nl__bool__30 = translator_priv0continue_used(___ref___rec__1);
#line 922
___nl__bool__30 = !___nl__bool__30;
#line 922
if(___nl__bool__30){ goto label_72;}
#line 922
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 922
goto label_72;
#line 922
label_72:
;
#line 922
//clear ___nl__bool__30;
#line 923
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(364)));
#line 923
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 923
___nl__int__34 = 1;
#line 923
___nl__int__34 = -___nl__int__34;
#line 923
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 923
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 923
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__33, ___get_global_string_const(219), ___nl__im__35, ___get_global_string_const(353), ___nl__im__36));
#line 923
c_rt_lib0clear(&___nl__im__33);
#line 923
//clear ___nl__int__34;
#line 923
c_rt_lib0clear(&___nl__im__35);
#line 923
c_rt_lib0clear(&___nl__im__36);
#line 923
c_rt_lib0delete(translator_priv0print_val(___nl__im__31, ___nl__im__32, ___ref___rec__1));
#line 923
c_rt_lib0clear(&___nl__im__31);
#line 923
c_rt_lib0clear(&___nl__im__32);
#line 924
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 924
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(222)));
#line 924
c_rt_lib0clear(&___nl__im__39);
#line 924
c_rt_lib0move(&___nl__im__37, translator0last_debug_char(___nl__im__38));
#line 924
c_rt_lib0clear(&___nl__im__38);
#line 924
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__37, ___ref___rec__1));
#line 924
c_rt_lib0clear(&___nl__im__37);
#line 925
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__3));
#line 925
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__41));
#line 925
c_rt_lib0clear(&___nl__im__41);
#line 925
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__40));
#line 925
c_rt_lib0clear(&___nl__im__40);
#line 926
___nl__bool__42 = ___nl__bool__18;
#line 926
if(___nl__bool__42){ goto label_103;}
#line 926
___nl__bool__42 = translator_priv0break_used(___ref___rec__1);
#line 926
label_103:
;
#line 926
___nl__bool__42 = !___nl__bool__42;
#line 926
if(___nl__bool__42){ goto label_108;}
#line 926
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 926
goto label_108;
#line 926
label_108:
;
#line 926
//clear ___nl__bool__42;
#line 927
___nl__im_ptr__43 = &((*___ref___rec__1).loop_label0field);
#line 927
c_rt_lib0copy(___nl__im_ptr__43, ___nl__im__27);
#line 927
___nl__im_ptr__43 = NULL;
#line 927
c_rt_lib0clear(&___nl__im__0);
#line 927
//clear ___nl__int__2;
#line 927
//clear ___nl__int__3;
#line 927
//clear ___nl__int__4;
#line 927
c_rt_lib0clear(&___nl__im__5);
#line 927
//clear ___nl__bool__6;
#line 927
c_rt_lib0clear(&___nl__im__7);
#line 927
c_rt_lib0clear(&___nl__im__8);
#line 927
c_rt_lib0clear(&___nl__im__9);
#line 927
c_rt_lib0clear(&___nl__im__15);
#line 927
c_rt_lib0clear(&___nl__im__16);
#line 927
//clear ___nl__bool__18;
#line 927
c_rt_lib0clear(&___nl__im__27);
#line 927
c_rt_lib0clear(&___nl__im__28);
#line 927
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
#line 931
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 932
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 932
c_rt_lib0move(&___nl__im__3, translator_priv0calc_val(___nl__im__4, ___ref___rec__1));
#line 932
c_rt_lib0clear(&___nl__im__4);
#line 933
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 933
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__1, ___nl__im__6));
#line 933
c_rt_lib0clear(&___nl__im__6);
#line 934
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 934
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 934
c_rt_lib0clear(&___nl__im__8);
#line 935
___nl__int__9 = translator_priv0get_sim_label(___ref___rec__1);
#line 936
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1015)));
#line 936
___nl__int__12 = 0;
#line 936
___nl__int__13 = 1;
#line 936
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 936
label_15:
;
#line 936
___nl__bool__15 = ___nl__int__12 >= ___nl__int__14;
#line 936
if(___nl__bool__15){ goto label_51;}
#line 936
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 936
c_rt_lib0copy(&___nl__im__11, ___nl__im__16);
#line 937
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(222)));
#line 937
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__17, ___ref___rec__1));
#line 937
c_rt_lib0clear(&___nl__im__17);
#line 938
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 938
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(206)));
#line 938
c_rt_lib0clear(&___nl__im__20);
#line 938
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(563)));
#line 938
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(168)));
#line 938
c_rt_lib0clear(&___nl__im__22);
#line 938
___nl__int__18 = translator_priv0get_label_number(___ref___rec__1, ___nl__im__19, ___nl__im__21);
#line 938
c_rt_lib0clear(&___nl__im__19);
#line 938
c_rt_lib0clear(&___nl__im__21);
#line 939
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(563)));
#line 939
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(168)));
#line 939
c_rt_lib0clear(&___nl__im__26);
#line 939
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__18));
#line 939
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__5, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(562), ___nl__im__25, ___get_global_string_const(567), ___nl__im__27));
#line 939
c_rt_lib0clear(&___nl__im__25);
#line 939
c_rt_lib0clear(&___nl__im__27);
#line 939
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(237), ___nl__im__24));
#line 939
c_rt_lib0clear(&___nl__im__24);
#line 939
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__23));
#line 939
c_rt_lib0clear(&___nl__im__23);
#line 940
___nl__int__28 = translator_priv0get_sim_label(___ref___rec__1);
#line 941
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__28, ___nl__im__5, ___ref___rec__1));
#line 942
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__28));
#line 942
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__29));
#line 942
c_rt_lib0clear(&___nl__im__29);
#line 942
c_rt_lib0clear(&___nl__im__11);
#line 943
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 943
goto label_15;
#line 943
label_51:
;
#line 944
c_rt_lib0move(&___nl__im__30,___get_global_string_const(15));
#line 944
c_rt_lib0delete(translator_priv0load_const(___nl__im__30, ___nl__im__7, ___ref___rec__1));
#line 944
c_rt_lib0clear(&___nl__im__30);
#line 945
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__3));
#line 945
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__7, ___get_global_string_const(73), ___nl__im__33));
#line 945
c_rt_lib0clear(&___nl__im__33);
#line 945
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(231), ___nl__im__32));
#line 945
c_rt_lib0clear(&___nl__im__32);
#line 945
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__31));
#line 945
c_rt_lib0clear(&___nl__im__31);
#line 946
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(249), ___nl__im__7));
#line 946
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 946
c_rt_lib0clear(&___nl__im__34);
#line 947
___nl__int__35 = 0;
#line 949
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1015)));
#line 949
___nl__int__39 = 0;
#line 949
___nl__int__40 = 1;
#line 949
___nl__int__41 = c_rt_lib0array_len(___nl__im__37);
#line 949
label_70:
;
#line 949
___nl__bool__42 = ___nl__int__39 >= ___nl__int__41;
#line 949
if(___nl__bool__42){ goto label_239;}
#line 949
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__37, ___nl__int__39));
#line 949
c_rt_lib0copy(&___nl__im__38, ___nl__im__43);
#line 950
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(228)));
#line 950
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(222)));
#line 950
c_rt_lib0clear(&___nl__im__45);
#line 950
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__44, ___ref___rec__1));
#line 950
c_rt_lib0clear(&___nl__im__44);
#line 951
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__2, ___nl__int__35));
#line 951
___nl__int__46 = getIntFromImm(___nl__im__47);
#line 951
c_rt_lib0clear(&___nl__im__47);
#line 951
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__46, ___ref___rec__1));
#line 951
//clear ___nl__int__46;
#line 952
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(563)));
#line 952
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(220)));
#line 952
c_rt_lib0clear(&___nl__im__49);
#line 952
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(220));
#line 952
if(___nl__bool__50){ goto label_95;}
#line 964
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(71));
#line 964
if(___nl__bool__50){ goto label_170;}
#line 964
c_rt_lib0move(&___nl__im__51,___get_global_string_const(15));
#line 964
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_mk(2, ___nl__im__51, ___nl__im__48));
#line 964
nl_die_arg(___nl__im__51);
#line 952
label_95:
;
#line 952
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__48, ___get_global_string_const(220)));
#line 952
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 953
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(268)));
#line 953
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__54, ___get_global_string_const(71));
#line 953
if(___nl__bool__55){ goto label_106;}
#line 960
___nl__bool__55 = c_rt_lib0priv_is(___nl__im__54, ___get_global_string_const(39));
#line 960
if(___nl__bool__55){ goto label_156;}
#line 960
c_rt_lib0move(&___nl__im__56,___get_global_string_const(15));
#line 960
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(2, ___nl__im__56, ___nl__im__54));
#line 960
nl_die_arg(___nl__im__56);
#line 953
label_106:
;
#line 954
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(493)));
#line 954
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 954
c_rt_lib0move(&___nl__im__36, translator_priv0print_var_decl(___nl__im__57, ___ref___rec__1, ___nl__im__58));
#line 954
c_rt_lib0clear(&___nl__im__57);
#line 954
c_rt_lib0clear(&___nl__im__58);
#line 955
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 955
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(206)));
#line 955
c_rt_lib0clear(&___nl__im__61);
#line 955
___nl__im_ptr__64 = &((*___ref___rec__1).logic0field);
#line 955
c_rt_lib0copy(&___nl__im__63, (*___nl__im_ptr__64));
#line 955
___nl__im_ptr__64 = NULL;
#line 955
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(418)));
#line 955
c_rt_lib0clear(&___nl__im__63);
#line 955
___nl__bool__59 = tct0is_own_type(___nl__im__60, ___nl__im__62);
#line 955
c_rt_lib0clear(&___nl__im__60);
#line 955
c_rt_lib0clear(&___nl__im__62);
#line 955
___nl__bool__59 = !___nl__bool__59;
#line 956
c_rt_lib0copy(&___nl__im__65, ___nl__im__36);
#line 957
___nl__bool__66 = ___nl__bool__59;
#line 957
___nl__bool__66 = !___nl__bool__66;
#line 957
if(___nl__bool__66){ goto label_132;}
#line 957
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 957
c_rt_lib0move(&___nl__im__65, translator_priv0new_register(___ref___rec__1, ___nl__im__67));
#line 957
c_rt_lib0clear(&___nl__im__67);
#line 957
goto label_132;
#line 957
label_132:
;
#line 957
//clear ___nl__bool__66;
#line 958
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(563)));
#line 958
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_string_const(168)));
#line 958
c_rt_lib0clear(&___nl__im__71);
#line 958
___nl__int__72 = 1;
#line 958
___nl__int__72 = -___nl__int__72;
#line 958
c_rt_lib0move(&___nl__im__73, c_rt_lib0int_new(___nl__int__72));
#line 958
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__65, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(562), ___nl__im__70, ___get_global_string_const(567), ___nl__im__73));
#line 958
c_rt_lib0clear(&___nl__im__70);
#line 958
//clear ___nl__int__72;
#line 958
c_rt_lib0clear(&___nl__im__73);
#line 958
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(238), ___nl__im__69));
#line 958
c_rt_lib0clear(&___nl__im__69);
#line 958
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__68));
#line 958
c_rt_lib0clear(&___nl__im__68);
#line 959
___nl__bool__74 = ___nl__bool__59;
#line 959
___nl__bool__74 = !___nl__bool__74;
#line 959
if(___nl__bool__74){ goto label_153;}
#line 959
c_rt_lib0delete(translator_priv0move(___nl__im__36, ___nl__im__65, ___ref___rec__1));
#line 959
goto label_153;
#line 959
label_153:
;
#line 959
//clear ___nl__bool__74;
#line 960
goto label_168;
#line 960
label_156:
;
#line 961
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(493)));
#line 961
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_string_const(422)));
#line 961
c_rt_lib0move(&___nl__im__36, translator_priv0print_var_decl(___nl__im__75, ___ref___rec__1, ___nl__im__76));
#line 961
c_rt_lib0clear(&___nl__im__75);
#line 961
c_rt_lib0clear(&___nl__im__76);
#line 962
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(563)));
#line 962
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(168)));
#line 962
c_rt_lib0clear(&___nl__im__78);
#line 962
c_rt_lib0delete(translator_priv0use_variant(___nl__im__36, ___nl__im__3, ___nl__im__77, ___ref___rec__1));
#line 962
c_rt_lib0clear(&___nl__im__77);
#line 963
goto label_168;
#line 963
label_168:
;
#line 964
goto label_182;
#line 964
label_170:
;
#line 965
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 965
___nl__int__80 = 1;
#line 965
___nl__int__80 = -___nl__int__80;
#line 965
c_rt_lib0move(&___nl__im__81, c_rt_lib0int_new(___nl__int__80));
#line 965
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 965
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__79, ___get_global_string_const(219), ___nl__im__81, ___get_global_string_const(353), ___nl__im__82));
#line 965
c_rt_lib0clear(&___nl__im__79);
#line 965
//clear ___nl__int__80;
#line 965
c_rt_lib0clear(&___nl__im__81);
#line 965
c_rt_lib0clear(&___nl__im__82);
#line 966
goto label_182;
#line 966
label_182:
;
#line 967
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(228)));
#line 967
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__83, ___ref___rec__1));
#line 967
c_rt_lib0clear(&___nl__im__83);
#line 968
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(563)));
#line 968
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_string_const(220)));
#line 968
c_rt_lib0clear(&___nl__im__85);
#line 968
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_string_const(220));
#line 968
if(___nl__bool__86){ goto label_196;}
#line 973
___nl__bool__86 = c_rt_lib0priv_is(___nl__im__84, ___get_global_string_const(71));
#line 973
if(___nl__bool__86){ goto label_218;}
#line 973
c_rt_lib0move(&___nl__im__87,___get_global_string_const(15));
#line 973
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_mk(2, ___nl__im__87, ___nl__im__84));
#line 973
nl_die_arg(___nl__im__87);
#line 968
label_196:
;
#line 968
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__84, ___get_global_string_const(220)));
#line 968
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 969
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(268)));
#line 969
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__90, ___get_global_string_const(71));
#line 969
if(___nl__bool__91){ goto label_207;}
#line 970
___nl__bool__91 = c_rt_lib0priv_is(___nl__im__90, ___get_global_string_const(39));
#line 970
if(___nl__bool__91){ goto label_209;}
#line 970
c_rt_lib0move(&___nl__im__92,___get_global_string_const(15));
#line 970
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_mk(2, ___nl__im__92, ___nl__im__90));
#line 970
nl_die_arg(___nl__im__92);
#line 969
label_207:
;
#line 970
goto label_216;
#line 970
label_209:
;
#line 971
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(563)));
#line 971
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(168)));
#line 971
c_rt_lib0clear(&___nl__im__94);
#line 971
c_rt_lib0delete(translator_priv0release_variant(___nl__im__36, ___nl__im__3, ___nl__im__93, ___ref___rec__1));
#line 971
c_rt_lib0clear(&___nl__im__93);
#line 972
goto label_216;
#line 972
label_216:
;
#line 973
goto label_220;
#line 973
label_218:
;
#line 974
goto label_220;
#line 974
label_220:
;
#line 975
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(228)));
#line 975
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__97, ___get_global_string_const(222)));
#line 975
c_rt_lib0clear(&___nl__im__97);
#line 975
c_rt_lib0move(&___nl__im__95, translator0last_debug_char(___nl__im__96));
#line 975
c_rt_lib0clear(&___nl__im__96);
#line 975
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__95, ___ref___rec__1));
#line 975
c_rt_lib0clear(&___nl__im__95);
#line 976
c_rt_lib0move(&___nl__im__99, c_rt_lib0int_new(___nl__int__9));
#line 976
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__99));
#line 976
c_rt_lib0clear(&___nl__im__99);
#line 976
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__98));
#line 976
c_rt_lib0clear(&___nl__im__98);
#line 977
___nl__int__100 = 1;
#line 977
___nl__int__35 = ___nl__int__35 + ___nl__int__100;
#line 977
//clear ___nl__int__100;
#line 977
c_rt_lib0clear(&___nl__im__38);
#line 978
___nl__int__39 = ___nl__int__39 + ___nl__int__40;
#line 978
goto label_70;
#line 978
label_239:
;
#line 979
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__9, ___ref___rec__1));
#line 979
c_rt_lib0clear(&___nl__im__0);
#line 979
c_rt_lib0clear(&___nl__im__2);
#line 979
c_rt_lib0clear(&___nl__im__3);
#line 979
c_rt_lib0clear(&___nl__im__5);
#line 979
c_rt_lib0clear(&___nl__im__7);
#line 979
//clear ___nl__int__9;
#line 979
c_rt_lib0clear(&___nl__im__10);
#line 979
c_rt_lib0clear(&___nl__im__11);
#line 979
//clear ___nl__int__12;
#line 979
//clear ___nl__int__13;
#line 979
//clear ___nl__int__14;
#line 979
//clear ___nl__bool__15;
#line 979
c_rt_lib0clear(&___nl__im__16);
#line 979
//clear ___nl__int__18;
#line 979
//clear ___nl__int__28;
#line 979
//clear ___nl__int__35;
#line 979
c_rt_lib0clear(&___nl__im__36);
#line 979
c_rt_lib0clear(&___nl__im__37);
#line 979
c_rt_lib0clear(&___nl__im__38);
#line 979
//clear ___nl__int__39;
#line 979
//clear ___nl__int__40;
#line 979
//clear ___nl__int__41;
#line 979
//clear ___nl__bool__42;
#line 979
c_rt_lib0clear(&___nl__im__43);
#line 979
c_rt_lib0clear(&___nl__im__48);
#line 979
//clear ___nl__bool__50;
#line 979
c_rt_lib0clear(&___nl__im__51);
#line 979
c_rt_lib0clear(&___nl__im__52);
#line 979
c_rt_lib0clear(&___nl__im__53);
#line 979
c_rt_lib0clear(&___nl__im__54);
#line 979
//clear ___nl__bool__55;
#line 979
c_rt_lib0clear(&___nl__im__56);
#line 979
//clear ___nl__bool__59;
#line 979
c_rt_lib0clear(&___nl__im__65);
#line 979
c_rt_lib0clear(&___nl__im__84);
#line 979
//clear ___nl__bool__86;
#line 979
c_rt_lib0clear(&___nl__im__87);
#line 979
c_rt_lib0clear(&___nl__im__88);
#line 979
c_rt_lib0clear(&___nl__im__89);
#line 979
c_rt_lib0clear(&___nl__im__90);
#line 979
//clear ___nl__bool__91;
#line 979
c_rt_lib0clear(&___nl__im__92);
#line 979
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
#line 983
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 983
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 983
c_rt_lib0clear(&___nl__im__4);
#line 983
___nl__bool__3 = !___nl__bool__3;
#line 983
if(___nl__bool__3){ goto label_10;}
#line 983
c_rt_lib0clear(&___nl__im__0);
#line 983
c_rt_lib0clear(&___nl__im__1);
#line 983
//clear ___nl__bool__3;
#line 983
return NULL;
#line 983
goto label_10;
#line 983
label_10:
;
#line 983
//clear ___nl__bool__3;
#line 984
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__0, ___get_global_string_const(73), ___nl__im__1));
#line 984
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(240), ___nl__im__6));
#line 984
c_rt_lib0clear(&___nl__im__6);
#line 984
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__5));
#line 984
c_rt_lib0clear(&___nl__im__5);
#line 984
c_rt_lib0clear(&___nl__im__0);
#line 984
c_rt_lib0clear(&___nl__im__1);
#line 984
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
#line 988
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(361), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(605), ___nl__im__2));
#line 988
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__5));
#line 988
c_rt_lib0clear(&___nl__im__5);
#line 988
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 988
c_rt_lib0clear(&___nl__im__4);
#line 988
c_rt_lib0clear(&___nl__im__0);
#line 988
c_rt_lib0clear(&___nl__im__1);
#line 988
c_rt_lib0clear(&___nl__im__2);
#line 988
return NULL;

}

ImmT  translator_priv0release_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 992
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(362), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(605), ___nl__im__2));
#line 992
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(256), ___nl__im__5));
#line 992
c_rt_lib0clear(&___nl__im__5);
#line 992
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 992
c_rt_lib0clear(&___nl__im__4);
#line 992
c_rt_lib0clear(&___nl__im__0);
#line 992
c_rt_lib0clear(&___nl__im__1);
#line 992
c_rt_lib0clear(&___nl__im__2);
#line 992
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
#line 996
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 996
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 996
c_rt_lib0clear(&___nl__im__5);
#line 997
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(361), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(363), ___nl__im__4));
#line 997
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__7));
#line 997
c_rt_lib0clear(&___nl__im__7);
#line 997
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 997
c_rt_lib0clear(&___nl__im__6);
#line 997
c_rt_lib0clear(&___nl__im__0);
#line 997
c_rt_lib0clear(&___nl__im__1);
#line 997
c_rt_lib0clear(&___nl__im__2);
#line 997
c_rt_lib0clear(&___nl__im__4);
#line 997
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
#line 1001
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 1001
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1001
c_rt_lib0clear(&___nl__im__5);
#line 1002
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(362), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(363), ___nl__im__4));
#line 1002
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(258), ___nl__im__7));
#line 1002
c_rt_lib0clear(&___nl__im__7);
#line 1002
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1002
c_rt_lib0clear(&___nl__im__6);
#line 1002
c_rt_lib0clear(&___nl__im__0);
#line 1002
c_rt_lib0clear(&___nl__im__1);
#line 1002
c_rt_lib0clear(&___nl__im__2);
#line 1002
c_rt_lib0clear(&___nl__im__4);
#line 1002
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
#line 1007
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 1007
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_string_const(361), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(363), ___nl__im__2, ___get_global_string_const(606), ___nl__im__7));
#line 1007
c_rt_lib0clear(&___nl__im__7);
#line 1007
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__6));
#line 1007
c_rt_lib0clear(&___nl__im__6);
#line 1007
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__5));
#line 1007
c_rt_lib0clear(&___nl__im__5);
#line 1007
c_rt_lib0clear(&___nl__im__0);
#line 1007
c_rt_lib0clear(&___nl__im__1);
#line 1007
c_rt_lib0clear(&___nl__im__2);
#line 1007
//clear ___nl__bool__3;
#line 1007
return NULL;

}

ImmT  translator_priv0release_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1011
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(362), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(363), ___nl__im__2));
#line 1011
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(260), ___nl__im__5));
#line 1011
c_rt_lib0clear(&___nl__im__5);
#line 1011
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1011
c_rt_lib0clear(&___nl__im__4);
#line 1011
c_rt_lib0clear(&___nl__im__0);
#line 1011
c_rt_lib0clear(&___nl__im__1);
#line 1011
c_rt_lib0clear(&___nl__im__2);
#line 1011
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
#line 1014
___nl__int__4 = 1;
#line 1014
___nl__int__4 = -___nl__int__4;
#line 1015
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1015
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(563));
#line 1015
c_rt_lib0clear(&___nl__im__6);
#line 1015
___nl__bool__5 = !___nl__bool__5;
#line 1015
if(___nl__bool__5){ goto label_15;}
#line 1015
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1015
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1015
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(563)));
#line 1015
c_rt_lib0clear(&___nl__im__8);
#line 1015
c_rt_lib0clear(&___nl__im__9);
#line 1015
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1015
c_rt_lib0clear(&___nl__im__7);
#line 1015
goto label_15;
#line 1015
label_15:
;
#line 1015
//clear ___nl__bool__5;
#line 1016
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1016
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_string_const(361), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(562), ___nl__im__2, ___get_global_string_const(567), ___nl__im__12));
#line 1016
c_rt_lib0clear(&___nl__im__12);
#line 1016
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(261), ___nl__im__11));
#line 1016
c_rt_lib0clear(&___nl__im__11);
#line 1016
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1016
c_rt_lib0clear(&___nl__im__10);
#line 1016
c_rt_lib0clear(&___nl__im__0);
#line 1016
c_rt_lib0clear(&___nl__im__1);
#line 1016
c_rt_lib0clear(&___nl__im__2);
#line 1016
//clear ___nl__int__4;
#line 1016
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
#line 1020
___nl__int__4 = 1;
#line 1020
___nl__int__4 = -___nl__int__4;
#line 1021
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1021
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(563));
#line 1021
c_rt_lib0clear(&___nl__im__6);
#line 1021
___nl__bool__5 = !___nl__bool__5;
#line 1021
if(___nl__bool__5){ goto label_15;}
#line 1021
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1021
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1021
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(563)));
#line 1021
c_rt_lib0clear(&___nl__im__8);
#line 1021
c_rt_lib0clear(&___nl__im__9);
#line 1021
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1021
c_rt_lib0clear(&___nl__im__7);
#line 1021
goto label_15;
#line 1021
label_15:
;
#line 1021
//clear ___nl__bool__5;
#line 1022
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1022
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_string_const(362), ___nl__im__0, ___get_global_string_const(360), ___nl__im__1, ___get_global_string_const(562), ___nl__im__2, ___get_global_string_const(567), ___nl__im__12));
#line 1022
c_rt_lib0clear(&___nl__im__12);
#line 1022
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(262), ___nl__im__11));
#line 1022
c_rt_lib0clear(&___nl__im__11);
#line 1022
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1022
c_rt_lib0clear(&___nl__im__10);
#line 1022
c_rt_lib0clear(&___nl__im__0);
#line 1022
c_rt_lib0clear(&___nl__im__1);
#line 1022
c_rt_lib0clear(&___nl__im__2);
#line 1022
//clear ___nl__int__4;
#line 1022
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
#line 1027
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 1028
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 1029
c_rt_lib0copy(&___nl__im__7, ___nl__im__0);
#line 1030
___nl__bool__8 = false;
#line 1031
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 1032
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 1033
c_rt_lib0move(&___nl__im__12,___get_global_string_const(110));
#line 1033
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__12);
#line 1033
c_rt_lib0clear(&___nl__im__12);
#line 1033
if(___nl__bool__11){ goto label_13;}
#line 1033
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1041));
#line 1033
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__13);
#line 1033
c_rt_lib0clear(&___nl__im__13);
#line 1033
label_13:
;
#line 1033
if(___nl__bool__11){ goto label_18;}
#line 1033
c_rt_lib0move(&___nl__im__14,___get_global_string_const(371));
#line 1033
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__14);
#line 1033
c_rt_lib0clear(&___nl__im__14);
#line 1033
label_18:
;
#line 1033
if(___nl__bool__11){ goto label_23;}
#line 1033
c_rt_lib0move(&___nl__im__15,___get_global_string_const(372));
#line 1033
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__15);
#line 1033
c_rt_lib0clear(&___nl__im__15);
#line 1033
label_23:
;
#line 1033
___nl__bool__11 = !___nl__bool__11;
#line 1033
if(___nl__bool__11){ goto label_45;}
#line 1034
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(406)));
#line 1035
c_rt_lib0move(&___nl__im__17,___get_global_string_const(110));
#line 1035
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__17);
#line 1035
c_rt_lib0clear(&___nl__im__17);
#line 1035
if(___nl__bool__16){ goto label_34;}
#line 1035
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1041));
#line 1035
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__18);
#line 1035
c_rt_lib0clear(&___nl__im__18);
#line 1035
label_34:
;
#line 1035
___nl__bool__16 = !___nl__bool__16;
#line 1035
if(___nl__bool__16){ goto label_39;}
#line 1036
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(406)));
#line 1037
goto label_42;
#line 1037
label_39:
;
#line 1038
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1039
goto label_42;
#line 1039
label_42:
;
#line 1039
//clear ___nl__bool__16;
#line 1040
goto label_45;
#line 1040
label_45:
;
#line 1040
//clear ___nl__bool__11;
#line 1041
c_rt_lib0move(&___nl__im__20,___get_global_string_const(381));
#line 1041
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__20);
#line 1041
c_rt_lib0clear(&___nl__im__20);
#line 1041
if(___nl__bool__19){ goto label_54;}
#line 1041
c_rt_lib0move(&___nl__im__21,___get_global_string_const(379));
#line 1041
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__21);
#line 1041
c_rt_lib0clear(&___nl__im__21);
#line 1041
label_54:
;
#line 1041
if(___nl__bool__19){ goto label_59;}
#line 1041
c_rt_lib0move(&___nl__im__22,___get_global_string_const(387));
#line 1041
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__22);
#line 1041
c_rt_lib0clear(&___nl__im__22);
#line 1041
label_59:
;
#line 1041
if(___nl__bool__19){ goto label_64;}
#line 1041
c_rt_lib0move(&___nl__im__23,___get_global_string_const(389));
#line 1041
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__23);
#line 1041
c_rt_lib0clear(&___nl__im__23);
#line 1041
label_64:
;
#line 1041
if(___nl__bool__19){ goto label_69;}
#line 1042
c_rt_lib0move(&___nl__im__24,___get_global_string_const(383));
#line 1042
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__24);
#line 1042
c_rt_lib0clear(&___nl__im__24);
#line 1042
label_69:
;
#line 1042
if(___nl__bool__19){ goto label_74;}
#line 1042
c_rt_lib0move(&___nl__im__25,___get_global_string_const(385));
#line 1042
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__25);
#line 1042
c_rt_lib0clear(&___nl__im__25);
#line 1042
label_74:
;
#line 1042
___nl__bool__19 = !___nl__bool__19;
#line 1042
if(___nl__bool__19){ goto label_79;}
#line 1043
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1044
goto label_79;
#line 1044
label_79:
;
#line 1044
//clear ___nl__bool__19;
#line 1045
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1045
___nl__bool__26 = nlasm0eq_reg_type(___nl__im__27, ___nl__im__9);
#line 1045
c_rt_lib0clear(&___nl__im__27);
#line 1045
___nl__bool__26 = !___nl__bool__26;
#line 1045
___nl__bool__26 = !___nl__bool__26;
#line 1045
if(___nl__bool__26){ goto label_90;}
#line 1046
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1047
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__1, ___ref___rec__4));
#line 1048
goto label_90;
#line 1048
label_90:
;
#line 1048
//clear ___nl__bool__26;
#line 1049
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(206)));
#line 1049
___nl__bool__28 = nlasm0eq_reg_type(___nl__im__29, ___nl__im__9);
#line 1049
c_rt_lib0clear(&___nl__im__29);
#line 1049
___nl__bool__28 = !___nl__bool__28;
#line 1049
___nl__bool__28 = !___nl__bool__28;
#line 1049
if(___nl__bool__28){ goto label_101;}
#line 1050
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1051
c_rt_lib0delete(translator_priv0move(___nl__im__6, ___nl__im__2, ___ref___rec__4));
#line 1052
goto label_101;
#line 1052
label_101:
;
#line 1052
//clear ___nl__bool__28;
#line 1053
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1053
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__31, ___nl__im__10);
#line 1053
c_rt_lib0clear(&___nl__im__31);
#line 1053
___nl__bool__30 = !___nl__bool__30;
#line 1053
___nl__bool__30 = !___nl__bool__30;
#line 1053
if(___nl__bool__30){ goto label_112;}
#line 1054
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__4, ___nl__im__10));
#line 1055
___nl__bool__8 = true;
#line 1056
goto label_112;
#line 1056
label_112:
;
#line 1056
//clear ___nl__bool__30;
#line 1057
c_rt_lib0move(&___nl__im__33,___get_global_string_const(369));
#line 1057
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__33);
#line 1057
c_rt_lib0clear(&___nl__im__33);
#line 1057
if(___nl__bool__32){ goto label_121;}
#line 1057
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1037));
#line 1057
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__34);
#line 1057
c_rt_lib0clear(&___nl__im__34);
#line 1057
label_121:
;
#line 1057
___nl__bool__32 = !___nl__bool__32;
#line 1057
if(___nl__bool__32){ goto label_126;}
#line 1058
c_rt_lib0move(&___nl__im__3,___get_global_string_const(369));
#line 1059
goto label_178;
#line 1059
label_126:
;
#line 1059
c_rt_lib0move(&___nl__im__35,___get_global_string_const(367));
#line 1059
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__35);
#line 1059
c_rt_lib0clear(&___nl__im__35);
#line 1059
if(___nl__bool__32){ goto label_134;}
#line 1059
c_rt_lib0move(&___nl__im__36,___get_global_string_const(1038));
#line 1059
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__36);
#line 1059
c_rt_lib0clear(&___nl__im__36);
#line 1059
label_134:
;
#line 1059
___nl__bool__32 = !___nl__bool__32;
#line 1059
if(___nl__bool__32){ goto label_139;}
#line 1060
c_rt_lib0move(&___nl__im__3,___get_global_string_const(367));
#line 1061
goto label_178;
#line 1061
label_139:
;
#line 1061
c_rt_lib0move(&___nl__im__37,___get_global_string_const(375));
#line 1061
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__37);
#line 1061
c_rt_lib0clear(&___nl__im__37);
#line 1061
if(___nl__bool__32){ goto label_147;}
#line 1061
c_rt_lib0move(&___nl__im__38,___get_global_string_const(1039));
#line 1061
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__38);
#line 1061
c_rt_lib0clear(&___nl__im__38);
#line 1061
label_147:
;
#line 1061
___nl__bool__32 = !___nl__bool__32;
#line 1061
if(___nl__bool__32){ goto label_152;}
#line 1062
c_rt_lib0move(&___nl__im__3,___get_global_string_const(375));
#line 1063
goto label_178;
#line 1063
label_152:
;
#line 1063
c_rt_lib0move(&___nl__im__39,___get_global_string_const(105));
#line 1063
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__39);
#line 1063
c_rt_lib0clear(&___nl__im__39);
#line 1063
if(___nl__bool__32){ goto label_160;}
#line 1063
c_rt_lib0move(&___nl__im__40,___get_global_string_const(1040));
#line 1063
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__40);
#line 1063
c_rt_lib0clear(&___nl__im__40);
#line 1063
label_160:
;
#line 1063
___nl__bool__32 = !___nl__bool__32;
#line 1063
if(___nl__bool__32){ goto label_165;}
#line 1064
c_rt_lib0move(&___nl__im__3,___get_global_string_const(105));
#line 1065
goto label_178;
#line 1065
label_165:
;
#line 1065
c_rt_lib0move(&___nl__im__41,___get_global_string_const(110));
#line 1065
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__41);
#line 1065
c_rt_lib0clear(&___nl__im__41);
#line 1065
if(___nl__bool__32){ goto label_173;}
#line 1065
c_rt_lib0move(&___nl__im__42,___get_global_string_const(1041));
#line 1065
___nl__bool__32 = c_rt_lib0eq(___nl__im__3, ___nl__im__42);
#line 1065
c_rt_lib0clear(&___nl__im__42);
#line 1065
label_173:
;
#line 1065
___nl__bool__32 = !___nl__bool__32;
#line 1065
if(___nl__bool__32){ goto label_178;}
#line 1066
c_rt_lib0move(&___nl__im__3,___get_global_string_const(110));
#line 1067
goto label_178;
#line 1067
label_178:
;
#line 1067
//clear ___nl__bool__32;
#line 1068
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__7, ___get_global_string_const(276), ___nl__im__5, ___get_global_string_const(277), ___nl__im__6, ___get_global_string_const(560), ___nl__im__3));
#line 1068
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__44));
#line 1068
c_rt_lib0clear(&___nl__im__44);
#line 1068
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__43));
#line 1068
c_rt_lib0clear(&___nl__im__43);
#line 1069
___nl__bool__45 = ___nl__bool__8;
#line 1069
___nl__bool__45 = !___nl__bool__45;
#line 1069
if(___nl__bool__45){ goto label_190;}
#line 1070
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__7, ___ref___rec__4));
#line 1071
goto label_190;
#line 1071
label_190:
;
#line 1071
//clear ___nl__bool__45;
#line 1071
c_rt_lib0clear(&___nl__im__0);
#line 1071
c_rt_lib0clear(&___nl__im__1);
#line 1071
c_rt_lib0clear(&___nl__im__2);
#line 1071
c_rt_lib0clear(&___nl__im__3);
#line 1071
c_rt_lib0clear(&___nl__im__5);
#line 1071
c_rt_lib0clear(&___nl__im__6);
#line 1071
c_rt_lib0clear(&___nl__im__7);
#line 1071
//clear ___nl__bool__8;
#line 1071
c_rt_lib0clear(&___nl__im__9);
#line 1071
c_rt_lib0clear(&___nl__im__10);
#line 1071
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
#line 1075
___nl__im_ptr__4 = &((*___ref___rec__0).debug0field);
#line 1075
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 1075
___nl__im_ptr__4 = NULL;
#line 1075
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 1075
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(228), ___nl__im__1, ___get_global_string_const(222), ___nl__im__3, ___get_global_string_const(227), ___nl__im__5));
#line 1075
c_rt_lib0clear(&___nl__im__3);
#line 1075
c_rt_lib0clear(&___nl__im__5);
#line 1076
___nl__im_ptr__6 = &((*___ref___rec__0).result0field);
#line 1076
c_rt_lib0move(&___nl__im__7,___get_global_string_const(214));
#line 1076
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___nl__im_ptr__6), ___nl__im__7));
#line 1076
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__2));
#line 1076
c_rt_lib0move(&___nl__string__8,___get_global_string_const(214));
#line 1076
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__6, ___nl__string__8, ___nl__im__7));
#line 1076
___nl__im_ptr__6 = NULL;
#line 1076
c_rt_lib0clear(&___nl__im__7);
#line 1076
c_rt_lib0clear(&___nl__string__8);
#line 1077
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 1077
___nl__im_ptr__10 = &((*___ref___rec__0).debug0field);
#line 1077
c_rt_lib0copy(&___nl__im__11, ___nl__im__9);
#line 1077
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_string_const(854), ___nl__im__11);
#line 1077
___nl__im_ptr__10 = NULL;
#line 1077
c_rt_lib0clear(&___nl__im__9);
#line 1077
c_rt_lib0clear(&___nl__im__11);
#line 1077
c_rt_lib0clear(&___nl__im__1);
#line 1077
c_rt_lib0clear(&___nl__im__2);
#line 1077
return NULL;
return NULL;

}

ImmT  translator_priv0print_if_goto(nlasm0label_t0type ___nl__int__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1081
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 1081
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__5, ___get_global_string_const(73), ___nl__im__1));
#line 1081
c_rt_lib0clear(&___nl__im__5);
#line 1081
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(251), ___nl__im__4));
#line 1081
c_rt_lib0clear(&___nl__im__4);
#line 1081
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 1081
c_rt_lib0clear(&___nl__im__3);
#line 1081
//clear ___nl__int__0;
#line 1081
c_rt_lib0clear(&___nl__im__1);
#line 1081
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
#line 1086
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 1086
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1086
c_rt_lib0clear(&___nl__im__5);
#line 1088
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1088
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(131));
#line 1088
c_rt_lib0clear(&___nl__im__8);
#line 1088
___nl__bool__7 = !___nl__bool__7;
#line 1088
if(___nl__bool__7){ goto label_10;}
#line 1089
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1090
goto label_42;
#line 1090
label_10:
;
#line 1090
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1090
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(127));
#line 1090
c_rt_lib0clear(&___nl__im__9);
#line 1090
___nl__bool__7 = !___nl__bool__7;
#line 1090
if(___nl__bool__7){ goto label_38;}
#line 1091
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1091
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1091
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(127)));
#line 1091
c_rt_lib0clear(&___nl__im__12);
#line 1091
c_rt_lib0clear(&___nl__im__13);
#line 1091
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1091
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1091
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(127)));
#line 1091
c_rt_lib0clear(&___nl__im__15);
#line 1091
c_rt_lib0clear(&___nl__im__16);
#line 1091
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(2)));
#line 1091
c_rt_lib0clear(&___nl__im__11);
#line 1091
c_rt_lib0clear(&___nl__im__14);
#line 1091
___nl__im_ptr__19 = &((*___ref___rec__3).logic0field);
#line 1091
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 1091
___nl__im_ptr__19 = NULL;
#line 1091
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(418)));
#line 1091
c_rt_lib0clear(&___nl__im__18);
#line 1091
c_rt_lib0move(&___nl__im__6, translator_priv0var_type_to_reg_type(___nl__im__10, ___nl__im__17));
#line 1091
c_rt_lib0clear(&___nl__im__10);
#line 1091
c_rt_lib0clear(&___nl__im__17);
#line 1092
goto label_42;
#line 1092
label_38:
;
#line 1093
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1093
nl_die_arg(___nl__im__20);
#line 1094
goto label_42;
#line 1094
label_42:
;
#line 1094
//clear ___nl__bool__7;
#line 1094
c_rt_lib0clear(&___nl__im__20);
#line 1095
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1095
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__6, ___nl__im__22);
#line 1095
c_rt_lib0clear(&___nl__im__22);
#line 1095
___nl__bool__21 = !___nl__bool__21;
#line 1096
c_rt_lib0copy(&___nl__im__23, ___nl__im__0);
#line 1097
___nl__bool__24 = ___nl__bool__21;
#line 1097
___nl__bool__24 = !___nl__bool__24;
#line 1097
if(___nl__bool__24){ goto label_55;}
#line 1097
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__3, ___nl__im__6));
#line 1097
goto label_55;
#line 1097
label_55:
;
#line 1097
//clear ___nl__bool__24;
#line 1098
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__23, ___get_global_string_const(73), ___nl__im__1, ___get_global_string_const(278), ___nl__im__4));
#line 1098
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(241), ___nl__im__26));
#line 1098
c_rt_lib0clear(&___nl__im__26);
#line 1098
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__25));
#line 1098
c_rt_lib0clear(&___nl__im__25);
#line 1099
___nl__bool__27 = ___nl__bool__21;
#line 1099
___nl__bool__27 = !___nl__bool__27;
#line 1099
if(___nl__bool__27){ goto label_67;}
#line 1099
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__23, ___ref___rec__3));
#line 1099
goto label_67;
#line 1099
label_67:
;
#line 1099
//clear ___nl__bool__27;
#line 1099
c_rt_lib0clear(&___nl__im__0);
#line 1099
c_rt_lib0clear(&___nl__im__1);
#line 1099
c_rt_lib0clear(&___nl__im__2);
#line 1099
c_rt_lib0clear(&___nl__im__4);
#line 1099
c_rt_lib0clear(&___nl__im__6);
#line 1099
//clear ___nl__bool__21;
#line 1099
c_rt_lib0clear(&___nl__im__23);
#line 1099
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
#line 1104
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 1104
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__1, ___nl__im__5, ___ref___rec__3));
#line 1104
c_rt_lib0clear(&___nl__im__5);
#line 1105
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(73), ___nl__im__0, ___get_global_string_const(278), ___nl__im__4, ___get_global_string_const(225), ___nl__im__2));
#line 1105
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(242), ___nl__im__7));
#line 1105
c_rt_lib0clear(&___nl__im__7);
#line 1105
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1105
c_rt_lib0clear(&___nl__im__6);
#line 1105
c_rt_lib0clear(&___nl__im__0);
#line 1105
c_rt_lib0clear(&___nl__im__1);
#line 1105
c_rt_lib0clear(&___nl__im__2);
#line 1105
c_rt_lib0clear(&___nl__im__4);
#line 1105
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
bool  ___nl__bool__11 = false;
ImmT * ___nl__im_ptr__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__string__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 1109
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 1110
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1110
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(131));
#line 1110
c_rt_lib0clear(&___nl__im__5);
#line 1110
___nl__bool__4 = !___nl__bool__4;
#line 1110
if(___nl__bool__4){ goto label_10;}
#line 1111
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1111
c_rt_lib0move(&___nl__im__3, translator_priv0get_cast(___nl__im__1, ___nl__im__6, ___ref___rec__2));
#line 1111
c_rt_lib0clear(&___nl__im__6);
#line 1112
goto label_10;
#line 1112
label_10:
;
#line 1112
//clear ___nl__bool__4;
#line 1113
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1113
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(131));
#line 1113
c_rt_lib0clear(&___nl__im__9);
#line 1113
___nl__bool__7 = !___nl__bool__7;
#line 1113
___nl__bool__8 = !___nl__bool__7;
#line 1113
if(___nl__bool__8){ goto label_22;}
#line 1113
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1113
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(406));
#line 1113
c_rt_lib0clear(&___nl__im__10);
#line 1113
___nl__bool__7 = !___nl__bool__7;
#line 1113
label_22:
;
#line 1113
//clear ___nl__bool__8;
#line 1113
___nl__bool__7 = !___nl__bool__7;
#line 1113
if(___nl__bool__7){ goto label_44;}
#line 1114
___nl__bool__11 = false;
#line 1114
___nl__im_ptr__12 = &((*___ref___rec__2).logic0field);
#line 1114
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1344));
#line 1114
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1114
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(219)));
#line 1114
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 1114
c_rt_lib0clear(&___nl__im__16);
#line 1114
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 1114
c_rt_lib0array_set(&___nl__im__13, ___nl__int__15, ___nl__im__14);
#line 1114
c_rt_lib0move(&___nl__string__17,___get_global_string_const(1344));
#line 1114
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1114
___nl__im_ptr__12 = NULL;
#line 1114
//clear ___nl__bool__11;
#line 1114
c_rt_lib0clear(&___nl__im__13);
#line 1114
c_rt_lib0clear(&___nl__im__14);
#line 1114
//clear ___nl__int__15;
#line 1114
c_rt_lib0clear(&___nl__string__17);
#line 1115
goto label_44;
#line 1115
label_44:
;
#line 1115
//clear ___nl__bool__7;
#line 1116
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__0, ___get_global_string_const(225), ___nl__im__3));
#line 1116
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(243), ___nl__im__19));
#line 1116
c_rt_lib0clear(&___nl__im__19);
#line 1116
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__18));
#line 1116
c_rt_lib0clear(&___nl__im__18);
#line 1116
c_rt_lib0clear(&___nl__im__0);
#line 1116
c_rt_lib0clear(&___nl__im__1);
#line 1116
c_rt_lib0clear(&___nl__im__3);
#line 1116
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
#line 1122
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1122
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(131));
#line 1122
c_rt_lib0clear(&___nl__im__6);
#line 1122
___nl__bool__5 = !___nl__bool__5;
#line 1122
if(___nl__bool__5){ goto label_7;}
#line 1123
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1124
goto label_61;
#line 1124
label_7:
;
#line 1124
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1124
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(128));
#line 1124
c_rt_lib0clear(&___nl__im__7);
#line 1124
___nl__bool__5 = !___nl__bool__5;
#line 1124
if(___nl__bool__5){ goto label_57;}
#line 1125
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1125
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1125
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(128)));
#line 1125
c_rt_lib0clear(&___nl__im__11);
#line 1125
c_rt_lib0clear(&___nl__im__12);
#line 1125
___nl__im_ptr__15 = &((*___ref___rec__3).logic0field);
#line 1125
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1125
___nl__im_ptr__15 = NULL;
#line 1125
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(418)));
#line 1125
c_rt_lib0clear(&___nl__im__14);
#line 1125
c_rt_lib0move(&___nl__im__9, translator_priv0unwrap_ref(___nl__im__10, ___nl__im__13));
#line 1125
c_rt_lib0clear(&___nl__im__10);
#line 1125
c_rt_lib0clear(&___nl__im__13);
#line 1125
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1125
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(206)));
#line 1125
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(128)));
#line 1125
c_rt_lib0clear(&___nl__im__18);
#line 1125
c_rt_lib0clear(&___nl__im__19);
#line 1125
___nl__im_ptr__22 = &((*___ref___rec__3).logic0field);
#line 1125
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1125
___nl__im_ptr__22 = NULL;
#line 1125
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(418)));
#line 1125
c_rt_lib0clear(&___nl__im__21);
#line 1125
c_rt_lib0move(&___nl__im__16, translator_priv0unwrap_ref(___nl__im__17, ___nl__im__20));
#line 1125
c_rt_lib0clear(&___nl__im__17);
#line 1125
c_rt_lib0clear(&___nl__im__20);
#line 1125
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(4)));
#line 1125
c_rt_lib0clear(&___nl__im__9);
#line 1125
c_rt_lib0clear(&___nl__im__16);
#line 1126
___nl__im_ptr__25 = &((*___ref___rec__3).logic0field);
#line 1126
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1126
___nl__im_ptr__25 = NULL;
#line 1126
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(418)));
#line 1126
c_rt_lib0clear(&___nl__im__24);
#line 1126
c_rt_lib0move(&___nl__im__8, translator_priv0unwrap_ref(___nl__im__8, ___nl__im__23));
#line 1126
c_rt_lib0clear(&___nl__im__23);
#line 1127
___nl__im_ptr__28 = &((*___ref___rec__3).logic0field);
#line 1127
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1127
___nl__im_ptr__28 = NULL;
#line 1127
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(418)));
#line 1127
c_rt_lib0clear(&___nl__im__27);
#line 1127
c_rt_lib0move(&___nl__im__4, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__26));
#line 1127
c_rt_lib0clear(&___nl__im__26);
#line 1128
goto label_61;
#line 1128
label_57:
;
#line 1129
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1129
nl_die_arg(___nl__im__29);
#line 1130
goto label_61;
#line 1130
label_61:
;
#line 1130
//clear ___nl__bool__5;
#line 1130
c_rt_lib0clear(&___nl__im__8);
#line 1130
c_rt_lib0clear(&___nl__im__29);
#line 1131
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1131
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__31);
#line 1131
c_rt_lib0clear(&___nl__im__31);
#line 1131
___nl__bool__30 = !___nl__bool__30;
#line 1132
c_rt_lib0copy(&___nl__im__32, ___nl__im__0);
#line 1133
___nl__bool__33 = ___nl__bool__30;
#line 1133
___nl__bool__33 = !___nl__bool__33;
#line 1133
if(___nl__bool__33){ goto label_75;}
#line 1133
c_rt_lib0move(&___nl__im__32, translator_priv0new_register(___ref___rec__3, ___nl__im__4));
#line 1133
goto label_75;
#line 1133
label_75:
;
#line 1133
//clear ___nl__bool__33;
#line 1134
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(224), ___nl__im__32, ___get_global_string_const(73), ___nl__im__1, ___get_global_string_const(577), ___nl__im__2));
#line 1134
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__35));
#line 1134
c_rt_lib0clear(&___nl__im__35);
#line 1134
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__34));
#line 1134
c_rt_lib0clear(&___nl__im__34);
#line 1135
___nl__bool__36 = ___nl__bool__30;
#line 1135
___nl__bool__36 = !___nl__bool__36;
#line 1135
if(___nl__bool__36){ goto label_87;}
#line 1135
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__32, ___ref___rec__3));
#line 1135
goto label_87;
#line 1135
label_87:
;
#line 1135
//clear ___nl__bool__36;
#line 1135
c_rt_lib0clear(&___nl__im__0);
#line 1135
c_rt_lib0clear(&___nl__im__1);
#line 1135
c_rt_lib0clear(&___nl__im__2);
#line 1135
c_rt_lib0clear(&___nl__im__4);
#line 1135
//clear ___nl__bool__30;
#line 1135
c_rt_lib0clear(&___nl__im__32);
#line 1135
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
#line 1139
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(73), ___nl__im__0, ___get_global_string_const(577), ___nl__im__1, ___get_global_string_const(225), ___nl__im__2));
#line 1139
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(246), ___nl__im__5));
#line 1139
c_rt_lib0clear(&___nl__im__5);
#line 1139
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1139
c_rt_lib0clear(&___nl__im__4);
#line 1139
c_rt_lib0clear(&___nl__im__0);
#line 1139
c_rt_lib0clear(&___nl__im__1);
#line 1139
c_rt_lib0clear(&___nl__im__2);
#line 1139
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
#line 1144
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1051)));
#line 1144
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 1146
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 1146
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 1147
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1051)));
#line 1147
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 1147
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__6, ___get_global_string_const(363), ___nl__im__7));
#line 1147
c_rt_lib0clear(&___nl__im__6);
#line 1147
c_rt_lib0clear(&___nl__im__7);
#line 1147
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 1147
c_rt_lib0clear(&___nl__im__5);
#line 1149
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 1151
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 1151
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 1152
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 1152
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__11, ___get_global_string_const(605), ___nl__im__12));
#line 1152
c_rt_lib0clear(&___nl__im__11);
#line 1152
c_rt_lib0clear(&___nl__im__12);
#line 1152
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 1152
c_rt_lib0clear(&___nl__im__10);
#line 1154
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1051)));
#line 1154
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 1156
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 1156
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 1157
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1051)));
#line 1157
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__17));
#line 1157
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__16, ___get_global_string_const(363), ___nl__im__17));
#line 1157
c_rt_lib0clear(&___nl__im__16);
#line 1157
c_rt_lib0clear(&___nl__im__17);
#line 1157
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 1157
c_rt_lib0clear(&___nl__im__15);
#line 1159
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 1161
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(409), ___get_global_string_const(305)));
#line 1161
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__21));
#line 1162
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 1162
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__21, ___get_global_string_const(562), ___nl__im__22));
#line 1162
c_rt_lib0clear(&___nl__im__21);
#line 1162
c_rt_lib0clear(&___nl__im__22);
#line 1162
c_rt_lib0move(&___nl__im__19, ptd0rec(___nl__im__20));
#line 1162
c_rt_lib0clear(&___nl__im__20);
#line 1162
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_string_const(363), ___nl__im__3, ___get_global_string_const(257), ___nl__im__4, ___get_global_string_const(577), ___nl__im__8, ___get_global_string_const(255), ___nl__im__9, ___get_global_string_const(1339), ___nl__im__13, ___get_global_string_const(259), ___nl__im__14, ___get_global_string_const(1049), ___nl__im__18, ___get_global_string_const(261), ___nl__im__19));
#line 1162
c_rt_lib0clear(&___nl__im__3);
#line 1162
c_rt_lib0clear(&___nl__im__4);
#line 1162
c_rt_lib0clear(&___nl__im__8);
#line 1162
c_rt_lib0clear(&___nl__im__9);
#line 1162
c_rt_lib0clear(&___nl__im__13);
#line 1162
c_rt_lib0clear(&___nl__im__14);
#line 1162
c_rt_lib0clear(&___nl__im__18);
#line 1162
c_rt_lib0clear(&___nl__im__19);
#line 1162
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 1162
c_rt_lib0clear(&___nl__im__2);
#line 1162
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 1162
c_rt_lib0clear(&___nl__im__1);
#line 1162
return ___nl__im__0;
#line 1162
c_rt_lib0clear(&___nl__im__0);
#line 1162
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
#line 1168
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 1169
label_1:
;
#line 1169
___nl__bool__3 = true;
#line 1169
___nl__bool__3 = !___nl__bool__3;
#line 1169
if(___nl__bool__3){ goto label_308;}
#line 1170
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(220)));
#line 1170
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(236));
#line 1170
c_rt_lib0clear(&___nl__im__5);
#line 1170
___nl__bool__4 = !___nl__bool__4;
#line 1170
if(___nl__bool__4){ goto label_283;}
#line 1171
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(220)));
#line 1171
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(220)));
#line 1171
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(236)));
#line 1171
c_rt_lib0clear(&___nl__im__7);
#line 1171
c_rt_lib0clear(&___nl__im__8);
#line 1172
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(560)));
#line 1173
c_rt_lib0move(&___nl__im__11,___get_global_string_const(1022));
#line 1173
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 1173
c_rt_lib0clear(&___nl__im__11);
#line 1173
if(___nl__bool__10){ goto label_23;}
#line 1173
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1023));
#line 1173
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__12);
#line 1173
c_rt_lib0clear(&___nl__im__12);
#line 1173
label_23:
;
#line 1173
if(___nl__bool__10){ goto label_28;}
#line 1173
c_rt_lib0move(&___nl__im__13,___get_global_string_const(578));
#line 1173
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__13);
#line 1173
c_rt_lib0clear(&___nl__im__13);
#line 1173
label_28:
;
#line 1173
if(___nl__bool__10){ goto label_33;}
#line 1173
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1024));
#line 1173
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__14);
#line 1173
c_rt_lib0clear(&___nl__im__14);
#line 1173
label_33:
;
#line 1173
___nl__bool__10 = !___nl__bool__10;
#line 1173
___nl__bool__10 = !___nl__bool__10;
#line 1173
if(___nl__bool__10){ goto label_40;}
#line 1173
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1173
nl_die_arg(___nl__im__15);
#line 1173
goto label_40;
#line 1173
label_40:
;
#line 1173
//clear ___nl__bool__10;
#line 1173
c_rt_lib0clear(&___nl__im__15);
#line 1174
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 1175
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(560)));
#line 1175
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1022));
#line 1175
___nl__bool__17 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 1175
c_rt_lib0clear(&___nl__im__18);
#line 1175
c_rt_lib0clear(&___nl__im__19);
#line 1175
___nl__bool__17 = !___nl__bool__17;
#line 1175
if(___nl__bool__17){ goto label_85;}
#line 1176
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(276)));
#line 1176
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(206)));
#line 1176
c_rt_lib0clear(&___nl__im__22);
#line 1176
___nl__im_ptr__25 = &((*___ref___rec__1).logic0field);
#line 1176
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1176
___nl__im_ptr__25 = NULL;
#line 1176
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(418)));
#line 1176
c_rt_lib0clear(&___nl__im__24);
#line 1176
c_rt_lib0move(&___nl__im__20, translator_priv0unwrap_ref(___nl__im__21, ___nl__im__23));
#line 1176
c_rt_lib0clear(&___nl__im__21);
#line 1176
c_rt_lib0clear(&___nl__im__23);
#line 1177
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(2));
#line 1177
___nl__bool__26 = !___nl__bool__26;
#line 1177
if(___nl__bool__26){ goto label_75;}
#line 1179
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(2)));
#line 1180
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1180
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__29, ___get_global_string_const(363), ___nl__im__30));
#line 1180
c_rt_lib0clear(&___nl__im__29);
#line 1180
c_rt_lib0clear(&___nl__im__30);
#line 1180
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__28));
#line 1180
c_rt_lib0clear(&___nl__im__28);
#line 1180
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__27));
#line 1180
c_rt_lib0clear(&___nl__im__27);
#line 1182
goto label_82;
#line 1182
label_75:
;
#line 1183
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1183
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(363), ___nl__im__32));
#line 1183
c_rt_lib0clear(&___nl__im__32);
#line 1183
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__31));
#line 1183
c_rt_lib0clear(&___nl__im__31);
#line 1184
goto label_82;
#line 1184
label_82:
;
#line 1184
//clear ___nl__bool__26;
#line 1185
goto label_271;
#line 1185
label_85:
;
#line 1185
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(560)));
#line 1185
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1023));
#line 1185
___nl__bool__17 = c_rt_lib0eq(___nl__im__33, ___nl__im__34);
#line 1185
c_rt_lib0clear(&___nl__im__33);
#line 1185
c_rt_lib0clear(&___nl__im__34);
#line 1185
___nl__bool__17 = !___nl__bool__17;
#line 1185
if(___nl__bool__17){ goto label_127;}
#line 1186
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(276)));
#line 1186
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(206)));
#line 1186
c_rt_lib0clear(&___nl__im__37);
#line 1186
___nl__im_ptr__40 = &((*___ref___rec__1).logic0field);
#line 1186
c_rt_lib0copy(&___nl__im__39, (*___nl__im_ptr__40));
#line 1186
___nl__im_ptr__40 = NULL;
#line 1186
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(418)));
#line 1186
c_rt_lib0clear(&___nl__im__39);
#line 1186
c_rt_lib0move(&___nl__im__35, translator_priv0unwrap_ref(___nl__im__36, ___nl__im__38));
#line 1186
c_rt_lib0clear(&___nl__im__36);
#line 1186
c_rt_lib0clear(&___nl__im__38);
#line 1187
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(4));
#line 1187
___nl__bool__41 = !___nl__bool__41;
#line 1187
if(___nl__bool__41){ goto label_117;}
#line 1189
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(4)));
#line 1190
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1190
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__44, ___get_global_string_const(363), ___nl__im__45));
#line 1190
c_rt_lib0clear(&___nl__im__44);
#line 1190
c_rt_lib0clear(&___nl__im__45);
#line 1190
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__43));
#line 1190
c_rt_lib0clear(&___nl__im__43);
#line 1190
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__42));
#line 1190
c_rt_lib0clear(&___nl__im__42);
#line 1192
goto label_124;
#line 1192
label_117:
;
#line 1193
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1193
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(1339), ___nl__im__47));
#line 1193
c_rt_lib0clear(&___nl__im__47);
#line 1193
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__46));
#line 1193
c_rt_lib0clear(&___nl__im__46);
#line 1194
goto label_124;
#line 1194
label_124:
;
#line 1194
//clear ___nl__bool__41;
#line 1195
goto label_271;
#line 1195
label_127:
;
#line 1195
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(560)));
#line 1195
c_rt_lib0move(&___nl__im__49,___get_global_string_const(578));
#line 1195
___nl__bool__17 = c_rt_lib0eq(___nl__im__48, ___nl__im__49);
#line 1195
c_rt_lib0clear(&___nl__im__48);
#line 1195
c_rt_lib0clear(&___nl__im__49);
#line 1195
___nl__bool__17 = !___nl__bool__17;
#line 1195
if(___nl__bool__17){ goto label_201;}
#line 1196
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(276)));
#line 1196
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(206)));
#line 1196
c_rt_lib0clear(&___nl__im__52);
#line 1196
___nl__im_ptr__55 = &((*___ref___rec__1).logic0field);
#line 1196
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 1196
___nl__im_ptr__55 = NULL;
#line 1196
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(418)));
#line 1196
c_rt_lib0clear(&___nl__im__54);
#line 1196
c_rt_lib0move(&___nl__im__50, translator_priv0unwrap_ref(___nl__im__51, ___nl__im__53));
#line 1196
c_rt_lib0clear(&___nl__im__51);
#line 1196
c_rt_lib0clear(&___nl__im__53);
#line 1197
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(6));
#line 1197
___nl__bool__56 = !___nl__bool__56;
#line 1197
if(___nl__bool__56){ goto label_168;}
#line 1198
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1198
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(220)));
#line 1198
c_rt_lib0clear(&___nl__im__59);
#line 1198
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1198
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(220)));
#line 1198
c_rt_lib0clear(&___nl__im__61);
#line 1198
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__60, ___get_global_string_const(1028)));
#line 1198
c_rt_lib0clear(&___nl__im__58);
#line 1198
c_rt_lib0clear(&___nl__im__60);
#line 1200
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(6)));
#line 1200
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__65, ___nl__im__57));
#line 1200
c_rt_lib0clear(&___nl__im__65);
#line 1200
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__64, ___get_global_string_const(605), ___nl__im__57));
#line 1200
c_rt_lib0clear(&___nl__im__64);
#line 1200
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__63));
#line 1200
c_rt_lib0clear(&___nl__im__63);
#line 1200
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__62));
#line 1200
c_rt_lib0clear(&___nl__im__62);
#line 1203
goto label_197;
#line 1203
label_168:
;
#line 1203
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(4));
#line 1203
___nl__bool__56 = !___nl__bool__56;
#line 1203
if(___nl__bool__56){ goto label_182;}
#line 1205
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(4)));
#line 1206
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1206
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__68, ___get_global_string_const(363), ___nl__im__69));
#line 1206
c_rt_lib0clear(&___nl__im__68);
#line 1206
c_rt_lib0clear(&___nl__im__69);
#line 1206
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__67));
#line 1206
c_rt_lib0clear(&___nl__im__67);
#line 1206
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__66));
#line 1206
c_rt_lib0clear(&___nl__im__66);
#line 1208
goto label_197;
#line 1208
label_182:
;
#line 1209
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1209
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(220)));
#line 1209
c_rt_lib0clear(&___nl__im__73);
#line 1209
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1209
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_string_const(220)));
#line 1209
c_rt_lib0clear(&___nl__im__75);
#line 1209
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__74, ___get_global_string_const(1028)));
#line 1209
c_rt_lib0clear(&___nl__im__72);
#line 1209
c_rt_lib0clear(&___nl__im__74);
#line 1209
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(577), ___nl__im__71));
#line 1209
c_rt_lib0clear(&___nl__im__71);
#line 1209
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__70));
#line 1209
c_rt_lib0clear(&___nl__im__70);
#line 1210
goto label_197;
#line 1210
label_197:
;
#line 1210
//clear ___nl__bool__56;
#line 1210
c_rt_lib0clear(&___nl__im__57);
#line 1211
goto label_271;
#line 1211
label_201:
;
#line 1211
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(560)));
#line 1211
c_rt_lib0move(&___nl__im__77,___get_global_string_const(1024));
#line 1211
___nl__bool__17 = c_rt_lib0eq(___nl__im__76, ___nl__im__77);
#line 1211
c_rt_lib0clear(&___nl__im__76);
#line 1211
c_rt_lib0clear(&___nl__im__77);
#line 1211
___nl__bool__17 = !___nl__bool__17;
#line 1211
if(___nl__bool__17){ goto label_267;}
#line 1212
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(276)));
#line 1212
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(206)));
#line 1212
c_rt_lib0clear(&___nl__im__80);
#line 1212
___nl__im_ptr__83 = &((*___ref___rec__1).logic0field);
#line 1212
c_rt_lib0copy(&___nl__im__82, (*___nl__im_ptr__83));
#line 1212
___nl__im_ptr__83 = NULL;
#line 1212
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(418)));
#line 1212
c_rt_lib0clear(&___nl__im__82);
#line 1212
c_rt_lib0move(&___nl__im__78, translator_priv0unwrap_ref(___nl__im__79, ___nl__im__81));
#line 1212
c_rt_lib0clear(&___nl__im__79);
#line 1212
c_rt_lib0clear(&___nl__im__81);
#line 1213
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1213
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(220)));
#line 1213
c_rt_lib0clear(&___nl__im__86);
#line 1213
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(277)));
#line 1213
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(220)));
#line 1213
c_rt_lib0clear(&___nl__im__88);
#line 1213
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(1028)));
#line 1213
c_rt_lib0clear(&___nl__im__85);
#line 1213
c_rt_lib0clear(&___nl__im__87);
#line 1214
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(13));
#line 1214
___nl__bool__89 = !___nl__bool__89;
#line 1214
if(___nl__bool__89){ goto label_248;}
#line 1216
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__78, ___get_global_string_const(13)));
#line 1216
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value(___nl__im__94, ___nl__im__84));
#line 1216
c_rt_lib0clear(&___nl__im__94);
#line 1216
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__78, ___get_global_string_const(13)));
#line 1216
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value(___nl__im__96, ___nl__im__84));
#line 1216
c_rt_lib0clear(&___nl__im__96);
#line 1216
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__95, ___get_global_string_const(27)));
#line 1216
c_rt_lib0clear(&___nl__im__93);
#line 1216
c_rt_lib0clear(&___nl__im__95);
#line 1216
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(2, ___get_global_string_const(1359), ___nl__im__92, ___get_global_string_const(562), ___nl__im__84));
#line 1216
c_rt_lib0clear(&___nl__im__92);
#line 1216
c_rt_lib0move(&___nl__im__90, c_rt_lib0ov_mk_arg(___get_global_string_const(261), ___nl__im__91));
#line 1216
c_rt_lib0clear(&___nl__im__91);
#line 1216
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__90));
#line 1216
c_rt_lib0clear(&___nl__im__90);
#line 1219
goto label_263;
#line 1219
label_248:
;
#line 1219
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(12));
#line 1219
if(___nl__bool__89){ goto label_252;}
#line 1219
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(0));
#line 1219
label_252:
;
#line 1219
___nl__bool__89 = !___nl__bool__89;
#line 1219
if(___nl__bool__89){ goto label_259;}
#line 1220
c_rt_lib0move(&___nl__im__97, c_rt_lib0ov_mk_arg(___get_global_string_const(1049), ___nl__im__84));
#line 1220
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__97));
#line 1220
c_rt_lib0clear(&___nl__im__97);
#line 1221
goto label_263;
#line 1221
label_259:
;
#line 1222
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(0));
#line 1222
nl_die_arg(___nl__im__98);
#line 1223
goto label_263;
#line 1223
label_263:
;
#line 1223
//clear ___nl__bool__89;
#line 1223
c_rt_lib0clear(&___nl__im__98);
#line 1224
goto label_271;
#line 1224
label_267:
;
#line 1225
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(0));
#line 1225
nl_die_arg(___nl__im__99);
#line 1226
goto label_271;
#line 1226
label_271:
;
#line 1226
//clear ___nl__bool__17;
#line 1226
c_rt_lib0clear(&___nl__im__20);
#line 1226
c_rt_lib0clear(&___nl__im__35);
#line 1226
c_rt_lib0clear(&___nl__im__50);
#line 1226
c_rt_lib0clear(&___nl__im__78);
#line 1226
c_rt_lib0clear(&___nl__im__84);
#line 1226
c_rt_lib0clear(&___nl__im__99);
#line 1227
c_rt_lib0delete(array0append(&___nl__im__16, ___nl__im__2));
#line 1228
c_rt_lib0copy(&___nl__im__2, ___nl__im__16);
#line 1229
c_rt_lib0move(___ref___im__0, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(276)));
#line 1230
goto label_302;
#line 1230
label_283:
;
#line 1230
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(220)));
#line 1230
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(1025));
#line 1230
c_rt_lib0clear(&___nl__im__100);
#line 1230
___nl__bool__4 = !___nl__bool__4;
#line 1230
if(___nl__bool__4){ goto label_295;}
#line 1231
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(220)));
#line 1231
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(220)));
#line 1231
c_rt_lib0move(___ref___im__0, c_rt_lib0priv_as(___nl__im__102, ___get_global_string_const(1025)));
#line 1231
c_rt_lib0clear(&___nl__im__101);
#line 1231
c_rt_lib0clear(&___nl__im__102);
#line 1232
goto label_302;
#line 1232
label_295:
;
#line 1233
//clear ___nl__bool__4;
#line 1233
c_rt_lib0clear(&___nl__im__6);
#line 1233
c_rt_lib0clear(&___nl__im__9);
#line 1233
c_rt_lib0clear(&___nl__im__16);
#line 1233
goto label_308;
#line 1234
goto label_302;
#line 1234
label_302:
;
#line 1234
//clear ___nl__bool__4;
#line 1234
c_rt_lib0clear(&___nl__im__6);
#line 1234
c_rt_lib0clear(&___nl__im__9);
#line 1234
c_rt_lib0clear(&___nl__im__16);
#line 1235
goto label_1;
#line 1235
label_308:
;
#line 1236
//clear ___nl__bool__3;
#line 1236
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
#line 1241
c_rt_lib0move(&___nl__im__3, translator_priv0get_struct_of_lvalue(&___nl__im__0, ___ref___rec__2));
#line 1242
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1242
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1242
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(507)));
#line 1242
c_rt_lib0clear(&___nl__im__5);
#line 1242
c_rt_lib0clear(&___nl__im__6);
#line 1243
c_rt_lib0move(&___nl__im__8, translator_priv0get_var_register(___nl__im__4, ___ref___rec__2));
#line 1243
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(1, ___nl__im__8));
#line 1243
c_rt_lib0clear(&___nl__im__8);
#line 1244
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1245
___nl__int__10 = c_rt_lib0array_len(___nl__im__3);
#line 1245
___nl__int__11 = 0;
#line 1245
___nl__int__12 = 1;
#line 1245
label_13:
;
#line 1245
___nl__bool__13 = ___nl__int__11 >= ___nl__int__10;
#line 1245
if(___nl__bool__13){ goto label_492;}
#line 1246
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__3, ___nl__int__11));
#line 1246
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(363));
#line 1246
if(___nl__bool__15){ goto label_36;}
#line 1252
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(257));
#line 1252
if(___nl__bool__15){ goto label_100;}
#line 1258
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1339));
#line 1258
if(___nl__bool__15){ goto label_141;}
#line 1264
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(577));
#line 1264
if(___nl__bool__15){ goto label_208;}
#line 1273
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(255));
#line 1273
if(___nl__bool__15){ goto label_289;}
#line 1278
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(1049));
#line 1278
if(___nl__bool__15){ goto label_331;}
#line 1282
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(261));
#line 1282
if(___nl__bool__15){ goto label_365;}
#line 1287
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(259));
#line 1287
if(___nl__bool__15){ goto label_407;}
#line 1287
c_rt_lib0move(&___nl__im__16,___get_global_string_const(15));
#line 1287
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 1287
nl_die_arg(___nl__im__16);
#line 1246
label_36:
;
#line 1246
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(363)));
#line 1246
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1247
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1247
c_rt_lib0move(&___nl__im__19, translator_priv0new_register(___ref___rec__2, ___nl__im__20));
#line 1247
c_rt_lib0clear(&___nl__im__20);
#line 1247
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__19));
#line 1247
c_rt_lib0clear(&___nl__im__19);
#line 1248
c_rt_lib0move(&___nl__im__22, translator_priv0calc_val(___nl__im__17, ___ref___rec__2));
#line 1248
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
#line 1248
c_rt_lib0move(&___nl__im__21, translator_priv0get_cast(___nl__im__22, ___nl__im__23, ___ref___rec__2));
#line 1248
c_rt_lib0clear(&___nl__im__22);
#line 1248
c_rt_lib0clear(&___nl__im__23);
#line 1249
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1249
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__26, ___get_global_string_const(363), ___nl__im__21));
#line 1249
c_rt_lib0clear(&___nl__im__26);
#line 1249
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(363), ___nl__im__25));
#line 1249
c_rt_lib0clear(&___nl__im__25);
#line 1249
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__24));
#line 1249
c_rt_lib0clear(&___nl__im__24);
#line 1250
___nl__bool__27 = ___nl__bool__1;
#line 1250
___nl__bool__27 = !___nl__bool__27;
#line 1250
___nl__bool__28 = !___nl__bool__27;
#line 1250
if(___nl__bool__28){ goto label_67;}
#line 1250
___nl__int__30 = c_rt_lib0array_len(___nl__im__3);
#line 1250
___nl__int__31 = 1;
#line 1250
___nl__int__29 = ___nl__int__30 - ___nl__int__31;
#line 1250
//clear ___nl__int__30;
#line 1250
//clear ___nl__int__31;
#line 1250
___nl__bool__27 = ___nl__int__11 == ___nl__int__29;
#line 1250
//clear ___nl__int__29;
#line 1250
label_67:
;
#line 1250
//clear ___nl__bool__28;
#line 1250
___nl__bool__27 = !___nl__bool__27;
#line 1250
if(___nl__bool__27){ goto label_80;}
#line 1250
c_rt_lib0clear(&___nl__im__14);
#line 1250
//clear ___nl__bool__15;
#line 1250
c_rt_lib0clear(&___nl__im__16);
#line 1250
c_rt_lib0clear(&___nl__im__17);
#line 1250
c_rt_lib0clear(&___nl__im__18);
#line 1250
c_rt_lib0clear(&___nl__im__21);
#line 1250
//clear ___nl__bool__27;
#line 1250
goto label_492;
#line 1250
goto label_80;
#line 1250
label_80:
;
#line 1250
//clear ___nl__bool__27;
#line 1251
___nl__int__34 = 1;
#line 1251
___nl__int__33 = ___nl__int__11 + ___nl__int__34;
#line 1251
//clear ___nl__int__34;
#line 1251
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__7, ___nl__int__33));
#line 1251
//clear ___nl__int__33;
#line 1251
c_rt_lib0move(&___nl__im__35,___get_global_string_const(1360));
#line 1251
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1251
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__38));
#line 1251
c_rt_lib0clear(&___nl__im__38);
#line 1251
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__21));
#line 1251
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__39));
#line 1251
c_rt_lib0clear(&___nl__im__37);
#line 1251
c_rt_lib0clear(&___nl__im__39);
#line 1251
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__32, ___nl__im__35, ___nl__im__36, ___ref___rec__2));
#line 1251
c_rt_lib0clear(&___nl__im__32);
#line 1251
c_rt_lib0clear(&___nl__im__35);
#line 1251
c_rt_lib0clear(&___nl__im__36);
#line 1252
goto label_461;
#line 1252
label_100:
;
#line 1252
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(257)));
#line 1252
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 1253
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(1359)));
#line 1253
___nl__im_ptr__46 = &((*___ref___rec__2).logic0field);
#line 1253
c_rt_lib0copy(&___nl__im__45, (*___nl__im_ptr__46));
#line 1253
___nl__im_ptr__46 = NULL;
#line 1253
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(418)));
#line 1253
c_rt_lib0clear(&___nl__im__45);
#line 1253
c_rt_lib0move(&___nl__im__42, translator_priv0var_type_to_reg_type(___nl__im__43, ___nl__im__44));
#line 1253
c_rt_lib0clear(&___nl__im__43);
#line 1253
c_rt_lib0clear(&___nl__im__44);
#line 1254
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(363)));
#line 1254
c_rt_lib0move(&___nl__im__47, translator_priv0calc_val(___nl__im__48, ___ref___rec__2));
#line 1254
c_rt_lib0clear(&___nl__im__48);
#line 1255
c_rt_lib0move(&___nl__im__49, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__42));
#line 1255
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__49));
#line 1255
c_rt_lib0clear(&___nl__im__49);
#line 1256
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1256
___nl__int__55 = 1;
#line 1256
___nl__int__54 = ___nl__int__11 + ___nl__int__55;
#line 1256
//clear ___nl__int__55;
#line 1256
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get(___nl__im__7, ___nl__int__54));
#line 1256
//clear ___nl__int__54;
#line 1256
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__52, ___get_global_string_const(1352), ___nl__im__53, ___get_global_string_const(363), ___nl__im__47));
#line 1256
c_rt_lib0clear(&___nl__im__52);
#line 1256
c_rt_lib0clear(&___nl__im__53);
#line 1256
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__51));
#line 1256
c_rt_lib0clear(&___nl__im__51);
#line 1256
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__50));
#line 1256
c_rt_lib0clear(&___nl__im__50);
#line 1257
___nl__int__58 = 1;
#line 1257
___nl__int__57 = ___nl__int__11 + ___nl__int__58;
#line 1257
//clear ___nl__int__58;
#line 1257
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_get(___nl__im__7, ___nl__int__57));
#line 1257
//clear ___nl__int__57;
#line 1257
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1257
c_rt_lib0delete(translator_priv0use_index(___nl__im__56, ___nl__im__59, ___nl__im__47, ___ref___rec__2));
#line 1257
c_rt_lib0clear(&___nl__im__56);
#line 1257
c_rt_lib0clear(&___nl__im__59);
#line 1258
goto label_461;
#line 1258
label_141:
;
#line 1258
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(1339)));
#line 1258
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 1259
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1259
c_rt_lib0move(&___nl__im__62, translator_priv0new_register(___ref___rec__2, ___nl__im__63));
#line 1259
c_rt_lib0clear(&___nl__im__63);
#line 1259
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__62));
#line 1259
c_rt_lib0clear(&___nl__im__62);
#line 1260
c_rt_lib0move(&___nl__im__64, translator_priv0calc_val(___nl__im__60, ___ref___rec__2));
#line 1261
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1261
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__67, ___get_global_string_const(577), ___nl__im__64));
#line 1261
c_rt_lib0clear(&___nl__im__67);
#line 1261
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_string_const(1339), ___nl__im__66));
#line 1261
c_rt_lib0clear(&___nl__im__66);
#line 1261
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__65));
#line 1261
c_rt_lib0clear(&___nl__im__65);
#line 1262
___nl__bool__68 = ___nl__bool__1;
#line 1262
___nl__bool__68 = !___nl__bool__68;
#line 1262
___nl__bool__69 = !___nl__bool__68;
#line 1262
if(___nl__bool__69){ goto label_168;}
#line 1262
___nl__int__71 = c_rt_lib0array_len(___nl__im__3);
#line 1262
___nl__int__72 = 1;
#line 1262
___nl__int__70 = ___nl__int__71 - ___nl__int__72;
#line 1262
//clear ___nl__int__71;
#line 1262
//clear ___nl__int__72;
#line 1262
___nl__bool__68 = ___nl__int__11 == ___nl__int__70;
#line 1262
//clear ___nl__int__70;
#line 1262
label_168:
;
#line 1262
//clear ___nl__bool__69;
#line 1262
___nl__bool__68 = !___nl__bool__68;
#line 1262
if(___nl__bool__68){ goto label_188;}
#line 1262
c_rt_lib0clear(&___nl__im__14);
#line 1262
//clear ___nl__bool__15;
#line 1262
c_rt_lib0clear(&___nl__im__16);
#line 1262
c_rt_lib0clear(&___nl__im__17);
#line 1262
c_rt_lib0clear(&___nl__im__18);
#line 1262
c_rt_lib0clear(&___nl__im__21);
#line 1262
c_rt_lib0clear(&___nl__im__40);
#line 1262
c_rt_lib0clear(&___nl__im__41);
#line 1262
c_rt_lib0clear(&___nl__im__42);
#line 1262
c_rt_lib0clear(&___nl__im__47);
#line 1262
c_rt_lib0clear(&___nl__im__60);
#line 1262
c_rt_lib0clear(&___nl__im__61);
#line 1262
c_rt_lib0clear(&___nl__im__64);
#line 1262
//clear ___nl__bool__68;
#line 1262
goto label_492;
#line 1262
goto label_188;
#line 1262
label_188:
;
#line 1262
//clear ___nl__bool__68;
#line 1263
___nl__int__75 = 1;
#line 1263
___nl__int__74 = ___nl__int__11 + ___nl__int__75;
#line 1263
//clear ___nl__int__75;
#line 1263
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_get(___nl__im__7, ___nl__int__74));
#line 1263
//clear ___nl__int__74;
#line 1263
c_rt_lib0move(&___nl__im__76,___get_global_string_const(1361));
#line 1263
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1263
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__79));
#line 1263
c_rt_lib0clear(&___nl__im__79);
#line 1263
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__64));
#line 1263
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_mk(2, ___nl__im__78, ___nl__im__80));
#line 1263
c_rt_lib0clear(&___nl__im__78);
#line 1263
c_rt_lib0clear(&___nl__im__80);
#line 1263
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__73, ___nl__im__76, ___nl__im__77, ___ref___rec__2));
#line 1263
c_rt_lib0clear(&___nl__im__73);
#line 1263
c_rt_lib0clear(&___nl__im__76);
#line 1263
c_rt_lib0clear(&___nl__im__77);
#line 1264
goto label_461;
#line 1264
label_208:
;
#line 1264
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(577)));
#line 1264
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 1265
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1265
c_rt_lib0move(&___nl__im__83, translator_priv0new_register(___ref___rec__2, ___nl__im__84));
#line 1265
c_rt_lib0clear(&___nl__im__84);
#line 1265
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__83));
#line 1265
c_rt_lib0clear(&___nl__im__83);
#line 1266
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1266
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__87, ___get_global_string_const(577), ___nl__im__81));
#line 1266
c_rt_lib0clear(&___nl__im__87);
#line 1266
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_arg(___get_global_string_const(577), ___nl__im__86));
#line 1266
c_rt_lib0clear(&___nl__im__86);
#line 1266
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__85));
#line 1266
c_rt_lib0clear(&___nl__im__85);
#line 1267
___nl__bool__88 = ___nl__bool__1;
#line 1267
___nl__bool__88 = !___nl__bool__88;
#line 1267
___nl__bool__89 = !___nl__bool__88;
#line 1267
if(___nl__bool__89){ goto label_234;}
#line 1267
___nl__int__91 = c_rt_lib0array_len(___nl__im__3);
#line 1267
___nl__int__92 = 1;
#line 1267
___nl__int__90 = ___nl__int__91 - ___nl__int__92;
#line 1267
//clear ___nl__int__91;
#line 1267
//clear ___nl__int__92;
#line 1267
___nl__bool__88 = ___nl__int__11 == ___nl__int__90;
#line 1267
//clear ___nl__int__90;
#line 1267
label_234:
;
#line 1267
//clear ___nl__bool__89;
#line 1267
___nl__bool__88 = !___nl__bool__88;
#line 1267
if(___nl__bool__88){ goto label_256;}
#line 1267
c_rt_lib0clear(&___nl__im__14);
#line 1267
//clear ___nl__bool__15;
#line 1267
c_rt_lib0clear(&___nl__im__16);
#line 1267
c_rt_lib0clear(&___nl__im__17);
#line 1267
c_rt_lib0clear(&___nl__im__18);
#line 1267
c_rt_lib0clear(&___nl__im__21);
#line 1267
c_rt_lib0clear(&___nl__im__40);
#line 1267
c_rt_lib0clear(&___nl__im__41);
#line 1267
c_rt_lib0clear(&___nl__im__42);
#line 1267
c_rt_lib0clear(&___nl__im__47);
#line 1267
c_rt_lib0clear(&___nl__im__60);
#line 1267
c_rt_lib0clear(&___nl__im__61);
#line 1267
c_rt_lib0clear(&___nl__im__64);
#line 1267
c_rt_lib0clear(&___nl__im__81);
#line 1267
c_rt_lib0clear(&___nl__im__82);
#line 1267
//clear ___nl__bool__88;
#line 1267
goto label_492;
#line 1267
goto label_256;
#line 1267
label_256:
;
#line 1267
//clear ___nl__bool__88;
#line 1268
___nl__int__95 = 1;
#line 1268
___nl__int__94 = ___nl__int__11 + ___nl__int__95;
#line 1268
//clear ___nl__int__95;
#line 1268
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_get(___nl__im__7, ___nl__int__94));
#line 1268
//clear ___nl__int__94;
#line 1268
c_rt_lib0delete(translator_priv0load_const(___nl__im__81, ___nl__im__93, ___ref___rec__2));
#line 1268
c_rt_lib0clear(&___nl__im__93);
#line 1269
___nl__int__98 = 1;
#line 1269
___nl__int__97 = ___nl__int__11 + ___nl__int__98;
#line 1269
//clear ___nl__int__98;
#line 1269
c_rt_lib0move(&___nl__im__96, c_rt_lib0array_get(___nl__im__7, ___nl__int__97));
#line 1269
//clear ___nl__int__97;
#line 1269
c_rt_lib0move(&___nl__im__99,___get_global_string_const(1361));
#line 1270
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1270
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__102));
#line 1270
c_rt_lib0clear(&___nl__im__102);
#line 1271
___nl__int__106 = 1;
#line 1271
___nl__int__105 = ___nl__int__11 + ___nl__int__106;
#line 1271
//clear ___nl__int__106;
#line 1271
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_get(___nl__im__7, ___nl__int__105));
#line 1271
//clear ___nl__int__105;
#line 1271
c_rt_lib0move(&___nl__im__103, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__104));
#line 1271
c_rt_lib0clear(&___nl__im__104);
#line 1271
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_mk(2, ___nl__im__101, ___nl__im__103));
#line 1271
c_rt_lib0clear(&___nl__im__101);
#line 1271
c_rt_lib0clear(&___nl__im__103);
#line 1271
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__96, ___nl__im__99, ___nl__im__100, ___ref___rec__2));
#line 1271
c_rt_lib0clear(&___nl__im__96);
#line 1271
c_rt_lib0clear(&___nl__im__99);
#line 1271
c_rt_lib0clear(&___nl__im__100);
#line 1273
goto label_461;
#line 1273
label_289:
;
#line 1273
c_rt_lib0move(&___nl__im__108, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(255)));
#line 1273
c_rt_lib0copy(&___nl__im__107, ___nl__im__108);
#line 1274
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(1359)));
#line 1274
___nl__im_ptr__113 = &((*___ref___rec__2).logic0field);
#line 1274
c_rt_lib0copy(&___nl__im__112, (*___nl__im_ptr__113));
#line 1274
___nl__im_ptr__113 = NULL;
#line 1274
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(418)));
#line 1274
c_rt_lib0clear(&___nl__im__112);
#line 1274
c_rt_lib0move(&___nl__im__109, translator_priv0var_type_to_reg_type(___nl__im__110, ___nl__im__111));
#line 1274
c_rt_lib0clear(&___nl__im__110);
#line 1274
c_rt_lib0clear(&___nl__im__111);
#line 1275
c_rt_lib0move(&___nl__im__114, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__109));
#line 1275
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__114));
#line 1275
c_rt_lib0clear(&___nl__im__114);
#line 1276
c_rt_lib0move(&___nl__im__117, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1276
___nl__int__120 = 1;
#line 1276
___nl__int__119 = ___nl__int__11 + ___nl__int__120;
#line 1276
//clear ___nl__int__120;
#line 1276
c_rt_lib0move(&___nl__im__118, c_rt_lib0array_get(___nl__im__7, ___nl__int__119));
#line 1276
//clear ___nl__int__119;
#line 1276
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(605)));
#line 1276
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__117, ___get_global_string_const(1352), ___nl__im__118, ___get_global_string_const(605), ___nl__im__121));
#line 1276
c_rt_lib0clear(&___nl__im__117);
#line 1276
c_rt_lib0clear(&___nl__im__118);
#line 1276
c_rt_lib0clear(&___nl__im__121);
#line 1276
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__116));
#line 1276
c_rt_lib0clear(&___nl__im__116);
#line 1276
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__115));
#line 1276
c_rt_lib0clear(&___nl__im__115);
#line 1277
___nl__int__124 = 1;
#line 1277
___nl__int__123 = ___nl__int__11 + ___nl__int__124;
#line 1277
//clear ___nl__int__124;
#line 1277
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_get(___nl__im__7, ___nl__int__123));
#line 1277
//clear ___nl__int__123;
#line 1277
c_rt_lib0move(&___nl__im__125, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1277
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__107, ___get_global_string_const(605)));
#line 1277
c_rt_lib0delete(translator_priv0use_field(___nl__im__122, ___nl__im__125, ___nl__im__126, ___ref___rec__2));
#line 1277
c_rt_lib0clear(&___nl__im__122);
#line 1277
c_rt_lib0clear(&___nl__im__125);
#line 1277
c_rt_lib0clear(&___nl__im__126);
#line 1278
goto label_461;
#line 1278
label_331:
;
#line 1278
c_rt_lib0move(&___nl__im__128, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(1049)));
#line 1278
c_rt_lib0copy(&___nl__im__127, ___nl__im__128);
#line 1279
c_rt_lib0move(&___nl__im__130, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1279
c_rt_lib0move(&___nl__im__129, translator_priv0new_register(___ref___rec__2, ___nl__im__130));
#line 1279
c_rt_lib0clear(&___nl__im__130);
#line 1279
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__129));
#line 1279
c_rt_lib0clear(&___nl__im__129);
#line 1280
c_rt_lib0move(&___nl__im__133, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1280
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__133, ___get_global_string_const(562), ___nl__im__127));
#line 1280
c_rt_lib0clear(&___nl__im__133);
#line 1280
c_rt_lib0move(&___nl__im__131, c_rt_lib0ov_mk_arg(___get_global_string_const(1049), ___nl__im__132));
#line 1280
c_rt_lib0clear(&___nl__im__132);
#line 1280
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__131));
#line 1280
c_rt_lib0clear(&___nl__im__131);
#line 1281
___nl__int__138 = 1;
#line 1281
___nl__int__137 = ___nl__int__11 + ___nl__int__138;
#line 1281
//clear ___nl__int__138;
#line 1281
c_rt_lib0move(&___nl__im__136, c_rt_lib0array_get(___nl__im__7, ___nl__int__137));
#line 1281
//clear ___nl__int__137;
#line 1281
c_rt_lib0move(&___nl__im__139, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1281
___nl__int__140 = 1;
#line 1281
___nl__int__140 = -___nl__int__140;
#line 1281
c_rt_lib0move(&___nl__im__141, c_rt_lib0int_new(___nl__int__140));
#line 1281
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_mk(4, ___get_global_string_const(224), ___nl__im__136, ___get_global_string_const(73), ___nl__im__139, ___get_global_string_const(562), ___nl__im__127, ___get_global_string_const(567), ___nl__im__141));
#line 1281
c_rt_lib0clear(&___nl__im__136);
#line 1281
c_rt_lib0clear(&___nl__im__139);
#line 1281
//clear ___nl__int__140;
#line 1281
c_rt_lib0clear(&___nl__im__141);
#line 1281
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_arg(___get_global_string_const(238), ___nl__im__135));
#line 1281
c_rt_lib0clear(&___nl__im__135);
#line 1281
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__134));
#line 1281
c_rt_lib0clear(&___nl__im__134);
#line 1282
goto label_461;
#line 1282
label_365:
;
#line 1282
c_rt_lib0move(&___nl__im__143, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(261)));
#line 1282
c_rt_lib0copy(&___nl__im__142, ___nl__im__143);
#line 1283
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_string_const(1359)));
#line 1283
___nl__im_ptr__148 = &((*___ref___rec__2).logic0field);
#line 1283
c_rt_lib0copy(&___nl__im__147, (*___nl__im_ptr__148));
#line 1283
___nl__im_ptr__148 = NULL;
#line 1283
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__147, ___get_global_string_const(418)));
#line 1283
c_rt_lib0clear(&___nl__im__147);
#line 1283
c_rt_lib0move(&___nl__im__144, translator_priv0var_type_to_reg_type(___nl__im__145, ___nl__im__146));
#line 1283
c_rt_lib0clear(&___nl__im__145);
#line 1283
c_rt_lib0clear(&___nl__im__146);
#line 1284
c_rt_lib0move(&___nl__im__149, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__144));
#line 1284
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__149));
#line 1284
c_rt_lib0clear(&___nl__im__149);
#line 1285
c_rt_lib0move(&___nl__im__152, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1285
___nl__int__155 = 1;
#line 1285
___nl__int__154 = ___nl__int__11 + ___nl__int__155;
#line 1285
//clear ___nl__int__155;
#line 1285
c_rt_lib0move(&___nl__im__153, c_rt_lib0array_get(___nl__im__7, ___nl__int__154));
#line 1285
//clear ___nl__int__154;
#line 1285
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_string_const(562)));
#line 1285
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__152, ___get_global_string_const(1352), ___nl__im__153, ___get_global_string_const(562), ___nl__im__156));
#line 1285
c_rt_lib0clear(&___nl__im__152);
#line 1285
c_rt_lib0clear(&___nl__im__153);
#line 1285
c_rt_lib0clear(&___nl__im__156);
#line 1285
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(261), ___nl__im__151));
#line 1285
c_rt_lib0clear(&___nl__im__151);
#line 1285
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__150));
#line 1285
c_rt_lib0clear(&___nl__im__150);
#line 1286
___nl__int__159 = 1;
#line 1286
___nl__int__158 = ___nl__int__11 + ___nl__int__159;
#line 1286
//clear ___nl__int__159;
#line 1286
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_get(___nl__im__7, ___nl__int__158));
#line 1286
//clear ___nl__int__158;
#line 1286
c_rt_lib0move(&___nl__im__160, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1286
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_string_const(562)));
#line 1286
c_rt_lib0delete(translator_priv0use_variant(___nl__im__157, ___nl__im__160, ___nl__im__161, ___ref___rec__2));
#line 1286
c_rt_lib0clear(&___nl__im__157);
#line 1286
c_rt_lib0clear(&___nl__im__160);
#line 1286
c_rt_lib0clear(&___nl__im__161);
#line 1287
goto label_461;
#line 1287
label_407:
;
#line 1287
c_rt_lib0move(&___nl__im__163, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(259)));
#line 1287
c_rt_lib0copy(&___nl__im__162, ___nl__im__163);
#line 1288
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_string_const(1359)));
#line 1288
___nl__im_ptr__168 = &((*___ref___rec__2).logic0field);
#line 1288
c_rt_lib0copy(&___nl__im__167, (*___nl__im_ptr__168));
#line 1288
___nl__im_ptr__168 = NULL;
#line 1288
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__167, ___get_global_string_const(418)));
#line 1288
c_rt_lib0clear(&___nl__im__167);
#line 1288
c_rt_lib0move(&___nl__im__164, translator_priv0var_type_to_reg_type(___nl__im__165, ___nl__im__166));
#line 1288
c_rt_lib0clear(&___nl__im__165);
#line 1288
c_rt_lib0clear(&___nl__im__166);
#line 1289
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__162, ___get_global_string_const(363)));
#line 1289
c_rt_lib0move(&___nl__im__169, translator_priv0calc_val(___nl__im__170, ___ref___rec__2));
#line 1289
c_rt_lib0clear(&___nl__im__170);
#line 1290
c_rt_lib0move(&___nl__im__171, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__164));
#line 1290
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__171));
#line 1290
c_rt_lib0clear(&___nl__im__171);
#line 1291
c_rt_lib0move(&___nl__im__174, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1291
___nl__int__177 = 1;
#line 1291
___nl__int__176 = ___nl__int__11 + ___nl__int__177;
#line 1291
//clear ___nl__int__177;
#line 1291
c_rt_lib0move(&___nl__im__175, c_rt_lib0array_get(___nl__im__7, ___nl__int__176));
#line 1291
//clear ___nl__int__176;
#line 1291
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_mk(3, ___get_global_string_const(1351), ___nl__im__174, ___get_global_string_const(1352), ___nl__im__175, ___get_global_string_const(363), ___nl__im__169));
#line 1291
c_rt_lib0clear(&___nl__im__174);
#line 1291
c_rt_lib0clear(&___nl__im__175);
#line 1291
c_rt_lib0move(&___nl__im__172, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__173));
#line 1291
c_rt_lib0clear(&___nl__im__173);
#line 1291
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__172));
#line 1291
c_rt_lib0clear(&___nl__im__172);
#line 1292
___nl__bool__178 = ___nl__bool__1;
#line 1292
___nl__bool__178 = !___nl__bool__178;
#line 1292
___nl__bool__179 = !___nl__bool__178;
#line 1292
if(___nl__bool__179){ goto label_449;}
#line 1292
___nl__int__181 = c_rt_lib0array_len(___nl__im__3);
#line 1292
___nl__int__182 = 1;
#line 1292
___nl__int__180 = ___nl__int__181 - ___nl__int__182;
#line 1292
//clear ___nl__int__181;
#line 1292
//clear ___nl__int__182;
#line 1292
___nl__bool__178 = ___nl__int__11 == ___nl__int__180;
#line 1292
//clear ___nl__int__180;
#line 1292
label_449:
;
#line 1292
//clear ___nl__bool__179;
#line 1293
___nl__int__185 = 1;
#line 1293
___nl__int__184 = ___nl__int__11 + ___nl__int__185;
#line 1293
//clear ___nl__int__185;
#line 1293
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_get(___nl__im__7, ___nl__int__184));
#line 1293
//clear ___nl__int__184;
#line 1293
c_rt_lib0move(&___nl__im__186, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1293
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__183, ___nl__im__186, ___nl__im__169, ___nl__bool__178, ___ref___rec__2));
#line 1293
c_rt_lib0clear(&___nl__im__183);
#line 1293
c_rt_lib0clear(&___nl__im__186);
#line 1294
goto label_461;
#line 1294
label_461:
;
#line 1294
c_rt_lib0clear(&___nl__im__14);
#line 1294
//clear ___nl__bool__15;
#line 1294
c_rt_lib0clear(&___nl__im__16);
#line 1294
c_rt_lib0clear(&___nl__im__17);
#line 1294
c_rt_lib0clear(&___nl__im__18);
#line 1294
c_rt_lib0clear(&___nl__im__21);
#line 1294
c_rt_lib0clear(&___nl__im__40);
#line 1294
c_rt_lib0clear(&___nl__im__41);
#line 1294
c_rt_lib0clear(&___nl__im__42);
#line 1294
c_rt_lib0clear(&___nl__im__47);
#line 1294
c_rt_lib0clear(&___nl__im__60);
#line 1294
c_rt_lib0clear(&___nl__im__61);
#line 1294
c_rt_lib0clear(&___nl__im__64);
#line 1294
c_rt_lib0clear(&___nl__im__81);
#line 1294
c_rt_lib0clear(&___nl__im__82);
#line 1294
c_rt_lib0clear(&___nl__im__107);
#line 1294
c_rt_lib0clear(&___nl__im__108);
#line 1294
c_rt_lib0clear(&___nl__im__109);
#line 1294
c_rt_lib0clear(&___nl__im__127);
#line 1294
c_rt_lib0clear(&___nl__im__128);
#line 1294
c_rt_lib0clear(&___nl__im__142);
#line 1294
c_rt_lib0clear(&___nl__im__143);
#line 1294
c_rt_lib0clear(&___nl__im__144);
#line 1294
c_rt_lib0clear(&___nl__im__162);
#line 1294
c_rt_lib0clear(&___nl__im__163);
#line 1294
c_rt_lib0clear(&___nl__im__164);
#line 1294
c_rt_lib0clear(&___nl__im__169);
#line 1294
//clear ___nl__bool__178;
#line 1295
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1295
goto label_13;
#line 1295
label_492:
;
#line 1296
___nl__int__190 = c_rt_lib0array_len(___nl__im__7);
#line 1296
___nl__int__191 = 1;
#line 1296
___nl__int__189 = ___nl__int__190 - ___nl__int__191;
#line 1296
//clear ___nl__int__190;
#line 1296
//clear ___nl__int__191;
#line 1296
c_rt_lib0move(&___nl__im__188, c_rt_lib0array_get(___nl__im__7, ___nl__int__189));
#line 1296
//clear ___nl__int__189;
#line 1296
c_rt_lib0move(&___nl__im__187, c_rt_lib0ov_mk_arg(___get_global_string_const(220), ___nl__im__188));
#line 1296
c_rt_lib0clear(&___nl__im__188);
#line 1296
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__187));
#line 1296
c_rt_lib0clear(&___nl__im__187);
#line 1297
c_rt_lib0clear(&___nl__im__0);
#line 1297
//clear ___nl__bool__1;
#line 1297
c_rt_lib0clear(&___nl__im__3);
#line 1297
c_rt_lib0clear(&___nl__im__4);
#line 1297
c_rt_lib0clear(&___nl__im__7);
#line 1297
//clear ___nl__int__10;
#line 1297
//clear ___nl__int__11;
#line 1297
//clear ___nl__int__12;
#line 1297
//clear ___nl__bool__13;
#line 1297
c_rt_lib0clear(&___nl__im__14);
#line 1297
//clear ___nl__bool__15;
#line 1297
c_rt_lib0clear(&___nl__im__16);
#line 1297
c_rt_lib0clear(&___nl__im__17);
#line 1297
c_rt_lib0clear(&___nl__im__18);
#line 1297
c_rt_lib0clear(&___nl__im__21);
#line 1297
c_rt_lib0clear(&___nl__im__40);
#line 1297
c_rt_lib0clear(&___nl__im__41);
#line 1297
c_rt_lib0clear(&___nl__im__42);
#line 1297
c_rt_lib0clear(&___nl__im__47);
#line 1297
c_rt_lib0clear(&___nl__im__60);
#line 1297
c_rt_lib0clear(&___nl__im__61);
#line 1297
c_rt_lib0clear(&___nl__im__64);
#line 1297
c_rt_lib0clear(&___nl__im__81);
#line 1297
c_rt_lib0clear(&___nl__im__82);
#line 1297
c_rt_lib0clear(&___nl__im__107);
#line 1297
c_rt_lib0clear(&___nl__im__108);
#line 1297
c_rt_lib0clear(&___nl__im__109);
#line 1297
c_rt_lib0clear(&___nl__im__127);
#line 1297
c_rt_lib0clear(&___nl__im__128);
#line 1297
c_rt_lib0clear(&___nl__im__142);
#line 1297
c_rt_lib0clear(&___nl__im__143);
#line 1297
c_rt_lib0clear(&___nl__im__144);
#line 1297
c_rt_lib0clear(&___nl__im__162);
#line 1297
c_rt_lib0clear(&___nl__im__163);
#line 1297
c_rt_lib0clear(&___nl__im__164);
#line 1297
c_rt_lib0clear(&___nl__im__169);
#line 1297
//clear ___nl__bool__178;
#line 1297
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
#line 1302
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 1303
___nl__int__7 = 1;
#line 1303
___nl__int__6 = ___nl__int__3 - ___nl__int__7;
#line 1303
//clear ___nl__int__7;
#line 1303
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 1303
//clear ___nl__int__6;
#line 1303
___nl__int__10 = 1;
#line 1303
___nl__int__9 = ___nl__int__3 - ___nl__int__10;
#line 1303
//clear ___nl__int__10;
#line 1303
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 1303
//clear ___nl__int__9;
#line 1303
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(220)));
#line 1303
c_rt_lib0clear(&___nl__im__5);
#line 1303
c_rt_lib0clear(&___nl__im__8);
#line 1304
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1304
___nl__int__13 = 1;
#line 1304
___nl__int__13 = -___nl__int__13;
#line 1304
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 1304
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 1304
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__12, ___get_global_string_const(219), ___nl__im__14, ___get_global_string_const(353), ___nl__im__15));
#line 1304
c_rt_lib0clear(&___nl__im__12);
#line 1304
//clear ___nl__int__13;
#line 1304
c_rt_lib0clear(&___nl__im__14);
#line 1304
c_rt_lib0clear(&___nl__im__15);
#line 1305
___nl__int__17 = 2;
#line 1305
___nl__int__16 = ___nl__int__3 - ___nl__int__17;
#line 1305
//clear ___nl__int__17;
#line 1305
label_27:
;
#line 1305
___nl__int__19 = 0;
#line 1305
___nl__bool__18 = ___nl__int__16 >= ___nl__int__19;
#line 1305
//clear ___nl__int__19;
#line 1305
___nl__bool__18 = !___nl__bool__18;
#line 1305
if(___nl__bool__18){ goto label_350;}
#line 1306
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 1306
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(220));
#line 1306
if(___nl__bool__21){ goto label_55;}
#line 1308
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(363));
#line 1308
if(___nl__bool__21){ goto label_61;}
#line 1315
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(257));
#line 1315
if(___nl__bool__21){ goto label_115;}
#line 1317
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(1339));
#line 1317
if(___nl__bool__21){ goto label_126;}
#line 1324
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(577));
#line 1324
if(___nl__bool__21){ goto label_201;}
#line 1333
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(255));
#line 1333
if(___nl__bool__21){ goto label_267;}
#line 1335
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(1049));
#line 1335
if(___nl__bool__21){ goto label_278;}
#line 1338
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(261));
#line 1338
if(___nl__bool__21){ goto label_301;}
#line 1340
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(259));
#line 1340
if(___nl__bool__21){ goto label_312;}
#line 1340
c_rt_lib0move(&___nl__im__22,___get_global_string_const(15));
#line 1340
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__20));
#line 1340
nl_die_arg(___nl__im__22);
#line 1306
label_55:
;
#line 1306
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(220)));
#line 1306
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1307
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 1307
nl_die_arg(___nl__im__25);
#line 1308
goto label_323;
#line 1308
label_61:
;
#line 1308
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(363)));
#line 1308
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1309
___nl__bool__28 = ___nl__bool__1;
#line 1309
___nl__bool__28 = !___nl__bool__28;
#line 1309
___nl__bool__29 = !___nl__bool__28;
#line 1309
if(___nl__bool__29){ goto label_73;}
#line 1309
___nl__int__31 = 2;
#line 1309
___nl__int__30 = ___nl__int__3 - ___nl__int__31;
#line 1309
//clear ___nl__int__31;
#line 1309
___nl__bool__28 = ___nl__int__16 == ___nl__int__30;
#line 1309
//clear ___nl__int__30;
#line 1309
label_73:
;
#line 1309
//clear ___nl__bool__29;
#line 1309
___nl__bool__28 = !___nl__bool__28;
#line 1309
if(___nl__bool__28){ goto label_83;}
#line 1310
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(220)));
#line 1310
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(363)));
#line 1310
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__im__32, ___nl__im__33, ___nl__im__4, ___ref___rec__2));
#line 1310
c_rt_lib0clear(&___nl__im__32);
#line 1310
c_rt_lib0clear(&___nl__im__33);
#line 1311
goto label_111;
#line 1311
label_83:
;
#line 1312
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1312
___nl__int__36 = 1;
#line 1312
___nl__int__36 = -___nl__int__36;
#line 1312
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__36));
#line 1312
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 1312
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__35, ___get_global_string_const(219), ___nl__im__37, ___get_global_string_const(353), ___nl__im__38));
#line 1312
c_rt_lib0clear(&___nl__im__35);
#line 1312
//clear ___nl__int__36;
#line 1312
c_rt_lib0clear(&___nl__im__37);
#line 1312
c_rt_lib0clear(&___nl__im__38);
#line 1312
c_rt_lib0move(&___nl__im__39,___get_global_string_const(767));
#line 1312
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(220)));
#line 1312
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__42));
#line 1312
c_rt_lib0clear(&___nl__im__42);
#line 1312
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(363)));
#line 1312
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__44));
#line 1312
c_rt_lib0clear(&___nl__im__44);
#line 1312
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__4));
#line 1312
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(3, ___nl__im__41, ___nl__im__43, ___nl__im__45));
#line 1312
c_rt_lib0clear(&___nl__im__41);
#line 1312
c_rt_lib0clear(&___nl__im__43);
#line 1312
c_rt_lib0clear(&___nl__im__45);
#line 1312
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__34, ___nl__im__39, ___nl__im__40, ___ref___rec__2));
#line 1312
c_rt_lib0clear(&___nl__im__34);
#line 1312
c_rt_lib0clear(&___nl__im__39);
#line 1312
c_rt_lib0clear(&___nl__im__40);
#line 1313
goto label_111;
#line 1313
label_111:
;
#line 1313
//clear ___nl__bool__28;
#line 1314
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(220)));
#line 1315
goto label_323;
#line 1315
label_115:
;
#line 1315
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(257)));
#line 1315
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 1316
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(1352)));
#line 1316
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(1351)));
#line 1316
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(363)));
#line 1316
c_rt_lib0delete(translator_priv0release_index(___nl__im__48, ___nl__im__49, ___nl__im__50, ___ref___rec__2));
#line 1316
c_rt_lib0clear(&___nl__im__48);
#line 1316
c_rt_lib0clear(&___nl__im__49);
#line 1316
c_rt_lib0clear(&___nl__im__50);
#line 1317
goto label_323;
#line 1317
label_126:
;
#line 1317
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(1339)));
#line 1317
c_rt_lib0copy(&___nl__im__51, ___nl__im__52);
#line 1318
___nl__bool__53 = ___nl__bool__1;
#line 1318
___nl__bool__53 = !___nl__bool__53;
#line 1318
___nl__bool__54 = !___nl__bool__53;
#line 1318
if(___nl__bool__54){ goto label_138;}
#line 1318
___nl__int__56 = 2;
#line 1318
___nl__int__55 = ___nl__int__3 - ___nl__int__56;
#line 1318
//clear ___nl__int__56;
#line 1318
___nl__bool__53 = ___nl__int__16 == ___nl__int__55;
#line 1318
//clear ___nl__int__55;
#line 1318
label_138:
;
#line 1318
//clear ___nl__bool__54;
#line 1318
___nl__bool__53 = !___nl__bool__53;
#line 1318
if(___nl__bool__53){ goto label_169;}
#line 1319
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1319
___nl__int__59 = 1;
#line 1319
___nl__int__59 = -___nl__int__59;
#line 1319
c_rt_lib0move(&___nl__im__60, c_rt_lib0int_new(___nl__int__59));
#line 1319
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 1319
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__58, ___get_global_string_const(219), ___nl__im__60, ___get_global_string_const(353), ___nl__im__61));
#line 1319
c_rt_lib0clear(&___nl__im__58);
#line 1319
//clear ___nl__int__59;
#line 1319
c_rt_lib0clear(&___nl__im__60);
#line 1319
c_rt_lib0clear(&___nl__im__61);
#line 1319
c_rt_lib0move(&___nl__im__62,___get_global_string_const(769));
#line 1319
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(220)));
#line 1319
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__65));
#line 1319
c_rt_lib0clear(&___nl__im__65);
#line 1319
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(577)));
#line 1319
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__67));
#line 1319
c_rt_lib0clear(&___nl__im__67);
#line 1319
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__4));
#line 1319
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_mk(3, ___nl__im__64, ___nl__im__66, ___nl__im__68));
#line 1319
c_rt_lib0clear(&___nl__im__64);
#line 1319
c_rt_lib0clear(&___nl__im__66);
#line 1319
c_rt_lib0clear(&___nl__im__68);
#line 1319
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__57, ___nl__im__62, ___nl__im__63, ___ref___rec__2));
#line 1319
c_rt_lib0clear(&___nl__im__57);
#line 1319
c_rt_lib0clear(&___nl__im__62);
#line 1319
c_rt_lib0clear(&___nl__im__63);
#line 1320
goto label_197;
#line 1320
label_169:
;
#line 1321
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1321
___nl__int__71 = 1;
#line 1321
___nl__int__71 = -___nl__int__71;
#line 1321
c_rt_lib0move(&___nl__im__72, c_rt_lib0int_new(___nl__int__71));
#line 1321
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 1321
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__70, ___get_global_string_const(219), ___nl__im__72, ___get_global_string_const(353), ___nl__im__73));
#line 1321
c_rt_lib0clear(&___nl__im__70);
#line 1321
//clear ___nl__int__71;
#line 1321
c_rt_lib0clear(&___nl__im__72);
#line 1321
c_rt_lib0clear(&___nl__im__73);
#line 1321
c_rt_lib0move(&___nl__im__74,___get_global_string_const(1362));
#line 1321
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(220)));
#line 1321
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__77));
#line 1321
c_rt_lib0clear(&___nl__im__77);
#line 1321
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(577)));
#line 1321
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__79));
#line 1321
c_rt_lib0clear(&___nl__im__79);
#line 1321
c_rt_lib0move(&___nl__im__80, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__4));
#line 1321
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(3, ___nl__im__76, ___nl__im__78, ___nl__im__80));
#line 1321
c_rt_lib0clear(&___nl__im__76);
#line 1321
c_rt_lib0clear(&___nl__im__78);
#line 1321
c_rt_lib0clear(&___nl__im__80);
#line 1321
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__69, ___nl__im__74, ___nl__im__75, ___ref___rec__2));
#line 1321
c_rt_lib0clear(&___nl__im__69);
#line 1321
c_rt_lib0clear(&___nl__im__74);
#line 1321
c_rt_lib0clear(&___nl__im__75);
#line 1322
goto label_197;
#line 1322
label_197:
;
#line 1322
//clear ___nl__bool__53;
#line 1323
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(220)));
#line 1324
goto label_323;
#line 1324
label_201:
;
#line 1324
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(577)));
#line 1324
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 1325
___nl__bool__83 = ___nl__bool__1;
#line 1325
___nl__bool__83 = !___nl__bool__83;
#line 1325
___nl__bool__84 = !___nl__bool__83;
#line 1325
if(___nl__bool__84){ goto label_213;}
#line 1325
___nl__int__86 = 2;
#line 1325
___nl__int__85 = ___nl__int__3 - ___nl__int__86;
#line 1325
//clear ___nl__int__86;
#line 1325
___nl__bool__83 = ___nl__int__16 == ___nl__int__85;
#line 1325
//clear ___nl__int__85;
#line 1325
label_213:
;
#line 1325
//clear ___nl__bool__84;
#line 1325
___nl__bool__83 = !___nl__bool__83;
#line 1325
if(___nl__bool__83){ goto label_223;}
#line 1326
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(220)));
#line 1326
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(577)));
#line 1326
c_rt_lib0delete(translator_priv0print_set_value(___nl__im__87, ___nl__im__88, ___nl__im__4, ___ref___rec__2));
#line 1326
c_rt_lib0clear(&___nl__im__87);
#line 1326
c_rt_lib0clear(&___nl__im__88);
#line 1327
goto label_263;
#line 1327
label_223:
;
#line 1328
c_rt_lib0move(&___nl__im__90, nlasm0is_empty(___nl__im__11));
#line 1328
___nl__bool__89 = c_rt_lib0check_true_native(___nl__im__90);
#line 1328
c_rt_lib0clear(&___nl__im__90);
#line 1328
___nl__bool__89 = !___nl__bool__89;
#line 1328
if(___nl__bool__89){ goto label_233;}
#line 1328
c_rt_lib0move(&___nl__im__91, c_rt_lib0ov_mk_none(___get_global_string_const(406)));
#line 1328
c_rt_lib0move(&___nl__im__11, translator_priv0new_register(___ref___rec__2, ___nl__im__91));
#line 1328
c_rt_lib0clear(&___nl__im__91);
#line 1328
goto label_233;
#line 1328
label_233:
;
#line 1328
//clear ___nl__bool__89;
#line 1329
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(577)));
#line 1329
c_rt_lib0delete(translator_priv0load_const(___nl__im__92, ___nl__im__11, ___ref___rec__2));
#line 1329
c_rt_lib0clear(&___nl__im__92);
#line 1330
c_rt_lib0move(&___nl__im__94, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1330
___nl__int__95 = 1;
#line 1330
___nl__int__95 = -___nl__int__95;
#line 1330
c_rt_lib0move(&___nl__im__96, c_rt_lib0int_new(___nl__int__95));
#line 1330
c_rt_lib0move(&___nl__im__97, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 1330
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__94, ___get_global_string_const(219), ___nl__im__96, ___get_global_string_const(353), ___nl__im__97));
#line 1330
c_rt_lib0clear(&___nl__im__94);
#line 1330
//clear ___nl__int__95;
#line 1330
c_rt_lib0clear(&___nl__im__96);
#line 1330
c_rt_lib0clear(&___nl__im__97);
#line 1330
c_rt_lib0move(&___nl__im__98,___get_global_string_const(1362));
#line 1330
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(220)));
#line 1330
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__101));
#line 1330
c_rt_lib0clear(&___nl__im__101);
#line 1330
c_rt_lib0move(&___nl__im__102, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__11));
#line 1330
c_rt_lib0move(&___nl__im__103, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__4));
#line 1330
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(3, ___nl__im__100, ___nl__im__102, ___nl__im__103));
#line 1330
c_rt_lib0clear(&___nl__im__100);
#line 1330
c_rt_lib0clear(&___nl__im__102);
#line 1330
c_rt_lib0clear(&___nl__im__103);
#line 1330
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__93, ___nl__im__98, ___nl__im__99, ___ref___rec__2));
#line 1330
c_rt_lib0clear(&___nl__im__93);
#line 1330
c_rt_lib0clear(&___nl__im__98);
#line 1330
c_rt_lib0clear(&___nl__im__99);
#line 1331
goto label_263;
#line 1331
label_263:
;
#line 1331
//clear ___nl__bool__83;
#line 1332
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__81, ___get_global_string_const(220)));
#line 1333
goto label_323;
#line 1333
label_267:
;
#line 1333
c_rt_lib0move(&___nl__im__105, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(255)));
#line 1333
c_rt_lib0copy(&___nl__im__104, ___nl__im__105);
#line 1334
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_string_const(1352)));
#line 1334
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_string_const(1351)));
#line 1334
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_string_const(605)));
#line 1334
c_rt_lib0delete(translator_priv0release_field(___nl__im__106, ___nl__im__107, ___nl__im__108, ___ref___rec__2));
#line 1334
c_rt_lib0clear(&___nl__im__106);
#line 1334
c_rt_lib0clear(&___nl__im__107);
#line 1334
c_rt_lib0clear(&___nl__im__108);
#line 1335
goto label_323;
#line 1335
label_278:
;
#line 1335
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(1049)));
#line 1335
c_rt_lib0copy(&___nl__im__109, ___nl__im__110);
#line 1336
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(220)));
#line 1336
c_rt_lib0move(&___nl__im__114, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__4));
#line 1336
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(562)));
#line 1336
___nl__int__116 = 1;
#line 1336
___nl__int__116 = -___nl__int__116;
#line 1336
c_rt_lib0move(&___nl__im__117, c_rt_lib0int_new(___nl__int__116));
#line 1336
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 1336
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_mk(5, ___get_global_string_const(224), ___nl__im__113, ___get_global_string_const(73), ___nl__im__114, ___get_global_string_const(562), ___nl__im__115, ___get_global_string_const(567), ___nl__im__117, ___get_global_string_const(582), ___nl__im__118));
#line 1336
c_rt_lib0clear(&___nl__im__113);
#line 1336
c_rt_lib0clear(&___nl__im__114);
#line 1336
c_rt_lib0clear(&___nl__im__115);
#line 1336
//clear ___nl__int__116;
#line 1336
c_rt_lib0clear(&___nl__im__117);
#line 1336
c_rt_lib0clear(&___nl__im__118);
#line 1336
c_rt_lib0move(&___nl__im__111, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__112));
#line 1336
c_rt_lib0clear(&___nl__im__112);
#line 1336
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__111));
#line 1336
c_rt_lib0clear(&___nl__im__111);
#line 1337
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__109, ___get_global_string_const(220)));
#line 1338
goto label_323;
#line 1338
label_301:
;
#line 1338
c_rt_lib0move(&___nl__im__120, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(261)));
#line 1338
c_rt_lib0copy(&___nl__im__119, ___nl__im__120);
#line 1339
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(1352)));
#line 1339
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(1351)));
#line 1339
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(562)));
#line 1339
c_rt_lib0delete(translator_priv0release_variant(___nl__im__121, ___nl__im__122, ___nl__im__123, ___ref___rec__2));
#line 1339
c_rt_lib0clear(&___nl__im__121);
#line 1339
c_rt_lib0clear(&___nl__im__122);
#line 1339
c_rt_lib0clear(&___nl__im__123);
#line 1340
goto label_323;
#line 1340
label_312:
;
#line 1340
c_rt_lib0move(&___nl__im__125, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(259)));
#line 1340
c_rt_lib0copy(&___nl__im__124, ___nl__im__125);
#line 1341
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(1352)));
#line 1341
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(1351)));
#line 1341
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__124, ___get_global_string_const(363)));
#line 1341
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__126, ___nl__im__127, ___nl__im__128, ___ref___rec__2));
#line 1341
c_rt_lib0clear(&___nl__im__126);
#line 1341
c_rt_lib0clear(&___nl__im__127);
#line 1341
c_rt_lib0clear(&___nl__im__128);
#line 1342
goto label_323;
#line 1342
label_323:
;
#line 1342
c_rt_lib0clear(&___nl__im__20);
#line 1342
//clear ___nl__bool__21;
#line 1342
c_rt_lib0clear(&___nl__im__22);
#line 1342
c_rt_lib0clear(&___nl__im__23);
#line 1342
c_rt_lib0clear(&___nl__im__24);
#line 1342
c_rt_lib0clear(&___nl__im__25);
#line 1342
c_rt_lib0clear(&___nl__im__26);
#line 1342
c_rt_lib0clear(&___nl__im__27);
#line 1342
c_rt_lib0clear(&___nl__im__46);
#line 1342
c_rt_lib0clear(&___nl__im__47);
#line 1342
c_rt_lib0clear(&___nl__im__51);
#line 1342
c_rt_lib0clear(&___nl__im__52);
#line 1342
c_rt_lib0clear(&___nl__im__81);
#line 1342
c_rt_lib0clear(&___nl__im__82);
#line 1342
c_rt_lib0clear(&___nl__im__104);
#line 1342
c_rt_lib0clear(&___nl__im__105);
#line 1342
c_rt_lib0clear(&___nl__im__109);
#line 1342
c_rt_lib0clear(&___nl__im__110);
#line 1342
c_rt_lib0clear(&___nl__im__119);
#line 1342
c_rt_lib0clear(&___nl__im__120);
#line 1342
c_rt_lib0clear(&___nl__im__124);
#line 1342
c_rt_lib0clear(&___nl__im__125);
#line 1305
___nl__int__129 = 1;
#line 1305
___nl__int__16 = ___nl__int__16 - ___nl__int__129;
#line 1305
//clear ___nl__int__129;
#line 1343
goto label_27;
#line 1343
label_350:
;
#line 1343
c_rt_lib0clear(&___nl__im__0);
#line 1343
//clear ___nl__bool__1;
#line 1343
//clear ___nl__int__3;
#line 1343
c_rt_lib0clear(&___nl__im__4);
#line 1343
c_rt_lib0clear(&___nl__im__11);
#line 1343
//clear ___nl__int__16;
#line 1343
//clear ___nl__bool__18;
#line 1343
c_rt_lib0clear(&___nl__im__20);
#line 1343
//clear ___nl__bool__21;
#line 1343
c_rt_lib0clear(&___nl__im__22);
#line 1343
c_rt_lib0clear(&___nl__im__23);
#line 1343
c_rt_lib0clear(&___nl__im__24);
#line 1343
c_rt_lib0clear(&___nl__im__25);
#line 1343
c_rt_lib0clear(&___nl__im__26);
#line 1343
c_rt_lib0clear(&___nl__im__27);
#line 1343
c_rt_lib0clear(&___nl__im__46);
#line 1343
c_rt_lib0clear(&___nl__im__47);
#line 1343
c_rt_lib0clear(&___nl__im__51);
#line 1343
c_rt_lib0clear(&___nl__im__52);
#line 1343
c_rt_lib0clear(&___nl__im__81);
#line 1343
c_rt_lib0clear(&___nl__im__82);
#line 1343
c_rt_lib0clear(&___nl__im__104);
#line 1343
c_rt_lib0clear(&___nl__im__105);
#line 1343
c_rt_lib0clear(&___nl__im__109);
#line 1343
c_rt_lib0clear(&___nl__im__110);
#line 1343
c_rt_lib0clear(&___nl__im__119);
#line 1343
c_rt_lib0clear(&___nl__im__120);
#line 1343
c_rt_lib0clear(&___nl__im__124);
#line 1343
c_rt_lib0clear(&___nl__im__125);
#line 1343
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
#line 1347
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 1348
___nl__int__3 = 0;
#line 1349
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(127)));
#line 1349
___nl__int__6 = 0;
#line 1349
___nl__int__7 = 1;
#line 1349
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 1349
label_6:
;
#line 1349
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 1349
if(___nl__bool__9){ goto label_29;}
#line 1349
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 1349
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 1350
___nl__int__12 = 0;
#line 1350
___nl__bool__11 = ___nl__int__3 > ___nl__int__12;
#line 1350
//clear ___nl__int__12;
#line 1350
___nl__bool__11 = !___nl__bool__11;
#line 1350
if(___nl__bool__11){ goto label_20;}
#line 1350
c_rt_lib0move(&___nl__im__13, string0lf());
#line 1350
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 1350
c_rt_lib0clear(&___nl__im__13);
#line 1350
goto label_20;
#line 1350
label_20:
;
#line 1350
//clear ___nl__bool__11;
#line 1351
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__5));
#line 1352
___nl__int__14 = 1;
#line 1352
___nl__int__3 = ___nl__int__3 + ___nl__int__14;
#line 1352
//clear ___nl__int__14;
#line 1352
c_rt_lib0clear(&___nl__im__5);
#line 1353
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1353
goto label_6;
#line 1353
label_29:
;
#line 1354
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1064)));
#line 1354
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(1063));
#line 1354
if(___nl__bool__16){ goto label_38;}
#line 1356
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(1062));
#line 1356
if(___nl__bool__16){ goto label_43;}
#line 1356
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 1356
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1356
nl_die_arg(___nl__im__17);
#line 1354
label_38:
;
#line 1355
c_rt_lib0move(&___nl__im__18, string0lf());
#line 1355
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 1355
c_rt_lib0clear(&___nl__im__18);
#line 1356
goto label_45;
#line 1356
label_43:
;
#line 1357
goto label_45;
#line 1357
label_45:
;
#line 1358
c_rt_lib0clear(&___nl__im__0);
#line 1358
//clear ___nl__int__3;
#line 1358
c_rt_lib0clear(&___nl__im__4);
#line 1358
c_rt_lib0clear(&___nl__im__5);
#line 1358
//clear ___nl__int__6;
#line 1358
//clear ___nl__int__7;
#line 1358
//clear ___nl__int__8;
#line 1358
//clear ___nl__bool__9;
#line 1358
c_rt_lib0clear(&___nl__im__10);
#line 1358
c_rt_lib0clear(&___nl__im__15);
#line 1358
//clear ___nl__bool__16;
#line 1358
c_rt_lib0clear(&___nl__im__17);
#line 1358
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
#line 1362
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(560)));
#line 1362
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1047));
#line 1362
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 1362
c_rt_lib0clear(&___nl__im__4);
#line 1362
c_rt_lib0clear(&___nl__im__5);
#line 1362
___nl__bool__3 = !___nl__bool__3;
#line 1362
___nl__bool__3 = !___nl__bool__3;
#line 1362
if(___nl__bool__3){ goto label_11;}
#line 1362
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 1362
nl_die_arg(___nl__im__6);
#line 1362
goto label_11;
#line 1362
label_11:
;
#line 1362
//clear ___nl__bool__3;
#line 1362
c_rt_lib0clear(&___nl__im__6);
#line 1363
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__2);
#line 1364
___nl__int__8 = translator_priv0get_sim_label(___ref___rec__2);
#line 1365
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1033)));
#line 1365
c_rt_lib0move(&___nl__im__10, translator_priv0dest_val(___nl__im__11, ___ref___rec__2));
#line 1365
c_rt_lib0clear(&___nl__im__11);
#line 1365
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1365
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__10, ___nl__im__12, ___ref___rec__2));
#line 1365
c_rt_lib0clear(&___nl__im__10);
#line 1365
c_rt_lib0clear(&___nl__im__12);
#line 1366
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__8, ___nl__im__9, ___ref___rec__2));
#line 1367
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1035)));
#line 1367
c_rt_lib0delete(translator_priv0print_val(___nl__im__13, ___nl__im__1, ___ref___rec__2));
#line 1367
c_rt_lib0clear(&___nl__im__13);
#line 1368
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__7));
#line 1368
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(252), ___nl__im__15));
#line 1368
c_rt_lib0clear(&___nl__im__15);
#line 1368
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__14));
#line 1368
c_rt_lib0clear(&___nl__im__14);
#line 1369
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__8, ___ref___rec__2));
#line 1370
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1034)));
#line 1370
c_rt_lib0delete(translator_priv0print_val(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1370
c_rt_lib0clear(&___nl__im__16);
#line 1371
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__2));
#line 1371
c_rt_lib0clear(&___nl__im__0);
#line 1371
c_rt_lib0clear(&___nl__im__1);
#line 1371
//clear ___nl__int__7;
#line 1371
//clear ___nl__int__8;
#line 1371
c_rt_lib0clear(&___nl__im__9);
#line 1371
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
#line 1375
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1375
c_rt_lib0move(&___nl__im__3, translator_priv0new_register(___ref___rec__2, ___nl__im__4));
#line 1375
c_rt_lib0clear(&___nl__im__4);
#line 1376
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(231), ___nl__im__0));
#line 1376
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 1376
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(1), ___nl__im__8));
#line 1376
c_rt_lib0clear(&___nl__im__8);
#line 1376
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(220), ___nl__im__6, ___get_global_string_const(206), ___nl__im__7));
#line 1376
c_rt_lib0clear(&___nl__im__6);
#line 1376
c_rt_lib0clear(&___nl__im__7);
#line 1376
c_rt_lib0delete(translator_priv0print_val(___nl__im__5, ___nl__im__3, ___ref___rec__2));
#line 1376
c_rt_lib0clear(&___nl__im__5);
#line 1377
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(249), ___nl__im__3));
#line 1377
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 1377
c_rt_lib0clear(&___nl__im__9);
#line 1377
c_rt_lib0clear(&___nl__im__0);
#line 1377
c_rt_lib0clear(&___nl__im__1);
#line 1377
c_rt_lib0clear(&___nl__im__3);
#line 1377
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
#line 1381
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(352)));
#line 1382
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1382
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(1006));
#line 1382
c_rt_lib0clear(&___nl__im__4);
#line 1382
___nl__bool__3 = !___nl__bool__3;
#line 1382
___nl__bool__3 = !___nl__bool__3;
#line 1382
if(___nl__bool__3){ goto label_25;}
#line 1383
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__0, ___ref___rec__1));
#line 1384
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 1384
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1384
___nl__im_ptr__10 = NULL;
#line 1384
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(468)));
#line 1384
c_rt_lib0clear(&___nl__im__9);
#line 1384
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1384
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1384
___nl__im_ptr__13 = NULL;
#line 1384
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(418)));
#line 1384
c_rt_lib0clear(&___nl__im__12);
#line 1384
c_rt_lib0move(&___nl__im__7, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__11));
#line 1384
c_rt_lib0clear(&___nl__im__8);
#line 1384
c_rt_lib0clear(&___nl__im__11);
#line 1384
c_rt_lib0move(&___nl__im__6, translator_priv0get_cast(___nl__im__5, ___nl__im__7, ___ref___rec__1));
#line 1384
c_rt_lib0clear(&___nl__im__7);
#line 1385
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__6));
#line 1386
goto label_25;
#line 1386
label_25:
;
#line 1386
//clear ___nl__bool__3;
#line 1386
c_rt_lib0clear(&___nl__im__5);
#line 1386
c_rt_lib0clear(&___nl__im__6);
#line 1387
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__2, ___ref___rec__1));
#line 1387
c_rt_lib0clear(&___nl__im__0);
#line 1387
c_rt_lib0clear(&___nl__im__2);
#line 1387
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
#line 1391
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1391
___nl__int__4 = 1;
#line 1391
___nl__int__4 = -___nl__int__4;
#line 1391
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__4));
#line 1391
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 1391
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__3, ___get_global_string_const(219), ___nl__im__5, ___get_global_string_const(353), ___nl__im__6));
#line 1391
c_rt_lib0clear(&___nl__im__3);
#line 1391
//clear ___nl__int__4;
#line 1391
c_rt_lib0clear(&___nl__im__5);
#line 1391
c_rt_lib0clear(&___nl__im__6);
#line 1392
___nl__im_ptr__9 = &((*___ref___rec__1).result0field);
#line 1392
c_rt_lib0copy(&___nl__im__8, (*___nl__im_ptr__9));
#line 1392
___nl__im_ptr__9 = NULL;
#line 1392
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(215)));
#line 1392
c_rt_lib0clear(&___nl__im__8);
#line 1393
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(225));
#line 1393
___nl__bool__10 = !___nl__bool__10;
#line 1393
if(___nl__bool__10){ goto label_64;}
#line 1394
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(225)));
#line 1395
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(219)));
#line 1395
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 1395
c_rt_lib0clear(&___nl__im__14);
#line 1395
___nl__int__15 = c_rt_lib0array_len(___nl__im__7);
#line 1395
___nl__bool__11 = ___nl__int__13 < ___nl__int__15;
#line 1395
//clear ___nl__int__13;
#line 1395
//clear ___nl__int__15;
#line 1395
___nl__bool__12 = !___nl__bool__11;
#line 1395
if(___nl__bool__12){ goto label_37;}
#line 1395
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(219)));
#line 1395
___nl__int__18 = getIntFromImm(___nl__im__19);
#line 1395
c_rt_lib0clear(&___nl__im__19);
#line 1395
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__7, ___nl__int__18));
#line 1395
//clear ___nl__int__18;
#line 1395
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(355)));
#line 1395
c_rt_lib0clear(&___nl__im__17);
#line 1395
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 1395
c_rt_lib0clear(&___nl__im__16);
#line 1395
label_37:
;
#line 1395
//clear ___nl__bool__12;
#line 1395
___nl__bool__11 = !___nl__bool__11;
#line 1395
if(___nl__bool__11){ goto label_61;}
#line 1396
___nl__im_ptr__23 = &((*___ref___rec__1).result0field);
#line 1396
c_rt_lib0copy(&___nl__im__22, (*___nl__im_ptr__23));
#line 1396
___nl__im_ptr__23 = NULL;
#line 1396
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(468)));
#line 1396
c_rt_lib0clear(&___nl__im__22);
#line 1396
___nl__im_ptr__26 = &((*___ref___rec__1).logic0field);
#line 1396
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 1396
___nl__im_ptr__26 = NULL;
#line 1396
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(418)));
#line 1396
c_rt_lib0clear(&___nl__im__25);
#line 1396
c_rt_lib0move(&___nl__im__20, translator_priv0var_type_to_reg_type(___nl__im__21, ___nl__im__24));
#line 1396
c_rt_lib0clear(&___nl__im__21);
#line 1396
c_rt_lib0clear(&___nl__im__24);
#line 1396
c_rt_lib0move(&___nl__im__2, translator_priv0new_register(___ref___rec__1, ___nl__im__20));
#line 1396
c_rt_lib0clear(&___nl__im__20);
#line 1397
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(225)));
#line 1397
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__27, ___ref___rec__1));
#line 1397
c_rt_lib0clear(&___nl__im__27);
#line 1398
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_arg(___get_global_string_const(225), ___nl__im__2));
#line 1399
goto label_61;
#line 1399
label_61:
;
#line 1399
//clear ___nl__bool__11;
#line 1400
goto label_64;
#line 1400
label_64:
;
#line 1400
//clear ___nl__bool__10;
#line 1401
___nl__im_ptr__30 = &((*___ref___rec__1).logic0field);
#line 1401
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 1401
___nl__im_ptr__30 = NULL;
#line 1401
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(216)));
#line 1401
c_rt_lib0clear(&___nl__im__29);
#line 1401
___nl__int__32 = 0;
#line 1401
___nl__int__33 = 1;
#line 1401
___nl__int__34 = c_rt_lib0array_len(___nl__im__28);
#line 1401
label_74:
;
#line 1401
___nl__bool__35 = ___nl__int__32 >= ___nl__int__34;
#line 1401
if(___nl__bool__35){ goto label_127;}
#line 1401
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__28, ___nl__int__32));
#line 1401
c_rt_lib0copy(&___nl__im__31, ___nl__im__36);
#line 1402
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(219)));
#line 1402
___nl__int__39 = getIntFromImm(___nl__im__40);
#line 1402
c_rt_lib0clear(&___nl__im__40);
#line 1402
___nl__int__41 = c_rt_lib0array_len(___nl__im__7);
#line 1402
___nl__bool__37 = ___nl__int__39 < ___nl__int__41;
#line 1402
//clear ___nl__int__39;
#line 1402
//clear ___nl__int__41;
#line 1402
___nl__bool__38 = !___nl__bool__37;
#line 1402
if(___nl__bool__38){ goto label_97;}
#line 1402
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(219)));
#line 1402
___nl__int__44 = getIntFromImm(___nl__im__45);
#line 1402
c_rt_lib0clear(&___nl__im__45);
#line 1402
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__7, ___nl__int__44));
#line 1402
//clear ___nl__int__44;
#line 1402
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_string_const(355)));
#line 1402
c_rt_lib0clear(&___nl__im__43);
#line 1402
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__42, ___get_global_string_const(39));
#line 1402
c_rt_lib0clear(&___nl__im__42);
#line 1402
label_97:
;
#line 1402
//clear ___nl__bool__38;
#line 1402
___nl__bool__37 = !___nl__bool__37;
#line 1402
if(___nl__bool__37){ goto label_104;}
#line 1402
//clear ___nl__bool__37;
#line 1402
goto label_124;
#line 1402
goto label_104;
#line 1402
label_104:
;
#line 1402
//clear ___nl__bool__37;
#line 1403
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(219)));
#line 1403
___nl__int__47 = getIntFromImm(___nl__im__48);
#line 1403
c_rt_lib0clear(&___nl__im__48);
#line 1403
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(219)));
#line 1403
___nl__int__49 = getIntFromImm(___nl__im__50);
#line 1403
c_rt_lib0clear(&___nl__im__50);
#line 1403
___nl__bool__46 = ___nl__int__47 == ___nl__int__49;
#line 1403
//clear ___nl__int__47;
#line 1403
//clear ___nl__int__49;
#line 1403
___nl__bool__46 = !___nl__bool__46;
#line 1403
if(___nl__bool__46){ goto label_120;}
#line 1403
//clear ___nl__bool__46;
#line 1403
goto label_124;
#line 1403
goto label_120;
#line 1403
label_120:
;
#line 1403
//clear ___nl__bool__46;
#line 1404
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__31, ___ref___rec__1));
#line 1404
c_rt_lib0clear(&___nl__im__31);
#line 1404
label_124:
;
#line 1405
___nl__int__32 = ___nl__int__32 + ___nl__int__33;
#line 1405
goto label_74;
#line 1405
label_127:
;
#line 1406
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_arg(___get_global_string_const(248), ___nl__im__0));
#line 1406
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__51));
#line 1406
c_rt_lib0clear(&___nl__im__51);
#line 1406
c_rt_lib0clear(&___nl__im__0);
#line 1406
c_rt_lib0clear(&___nl__im__2);
#line 1406
c_rt_lib0clear(&___nl__im__7);
#line 1406
c_rt_lib0clear(&___nl__im__28);
#line 1406
c_rt_lib0clear(&___nl__im__31);
#line 1406
//clear ___nl__int__32;
#line 1406
//clear ___nl__int__33;
#line 1406
//clear ___nl__int__34;
#line 1406
//clear ___nl__bool__35;
#line 1406
c_rt_lib0clear(&___nl__im__36);
#line 1406
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
#line 1410
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1410
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(507));
#line 1410
c_rt_lib0clear(&___nl__im__3);
#line 1410
___nl__bool__2 = !___nl__bool__2;
#line 1410
if(___nl__bool__2){ goto label_16;}
#line 1411
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1411
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1411
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(507)));
#line 1411
c_rt_lib0clear(&___nl__im__6);
#line 1411
c_rt_lib0clear(&___nl__im__7);
#line 1411
c_rt_lib0move(&___nl__im__4, translator_priv0get_var_register(___nl__im__5, ___ref___rec__1));
#line 1411
c_rt_lib0clear(&___nl__im__5);
#line 1411
c_rt_lib0clear(&___nl__im__0);
#line 1411
//clear ___nl__bool__2;
#line 1411
return ___nl__im__4;
#line 1412
goto label_16;
#line 1412
label_16:
;
#line 1412
//clear ___nl__bool__2;
#line 1412
c_rt_lib0clear(&___nl__im__4);
#line 1413
c_rt_lib0move(&___nl__im__8, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1414
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1415
label_21:
;
#line 1415
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(7));
#line 1415
___nl__bool__10 = !___nl__bool__10;
#line 1415
if(___nl__bool__10){ goto label_35;}
#line 1416
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1416
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1416
___nl__im_ptr__13 = NULL;
#line 1416
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(418)));
#line 1416
c_rt_lib0clear(&___nl__im__12);
#line 1416
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(7)));
#line 1416
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__11, ___nl__im__14));
#line 1416
c_rt_lib0clear(&___nl__im__11);
#line 1416
c_rt_lib0clear(&___nl__im__14);
#line 1417
goto label_21;
#line 1417
label_35:
;
#line 1419
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1419
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(236));
#line 1419
c_rt_lib0clear(&___nl__im__18);
#line 1419
___nl__bool__17 = !___nl__bool__16;
#line 1419
if(___nl__bool__17){ goto label_50;}
#line 1419
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1419
___nl__im_ptr__22 = &((*___ref___rec__1).logic0field);
#line 1419
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1419
___nl__im_ptr__22 = NULL;
#line 1419
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(418)));
#line 1419
c_rt_lib0clear(&___nl__im__21);
#line 1419
___nl__bool__16 = tct0is_own_type(___nl__im__19, ___nl__im__20);
#line 1419
c_rt_lib0clear(&___nl__im__19);
#line 1419
c_rt_lib0clear(&___nl__im__20);
#line 1419
label_50:
;
#line 1419
//clear ___nl__bool__17;
#line 1419
___nl__bool__16 = !___nl__bool__16;
#line 1419
if(___nl__bool__16){ goto label_56;}
#line 1420
c_rt_lib0move(&___nl__im__15, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__8));
#line 1421
goto label_59;
#line 1421
label_56:
;
#line 1422
c_rt_lib0move(&___nl__im__15, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 1423
goto label_59;
#line 1423
label_59:
;
#line 1423
//clear ___nl__bool__16;
#line 1424
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__15, ___ref___rec__1));
#line 1425
c_rt_lib0clear(&___nl__im__0);
#line 1425
c_rt_lib0clear(&___nl__im__8);
#line 1425
c_rt_lib0clear(&___nl__im__9);
#line 1425
//clear ___nl__bool__10;
#line 1425
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
#line 1430
c_rt_lib0move(&___nl__im__5, nlasm0is_empty(___nl__im__1));
#line 1430
___nl__bool__4 = c_rt_lib0check_true_native(___nl__im__5);
#line 1430
c_rt_lib0clear(&___nl__im__5);
#line 1430
___nl__bool__4 = !___nl__bool__4;
#line 1430
if(___nl__bool__4){ goto label_7;}
#line 1430
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 1430
goto label_7;
#line 1430
label_7:
;
#line 1430
//clear ___nl__bool__4;
#line 1431
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__3));
#line 1432
c_rt_lib0clear(&___nl__im__0);
#line 1432
c_rt_lib0clear(&___nl__im__2);
#line 1432
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
#line 1436
c_rt_lib0move(&___nl__im__2, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1437
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1437
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(507));
#line 1437
c_rt_lib0clear(&___nl__im__4);
#line 1437
___nl__bool__3 = !___nl__bool__3;
#line 1437
if(___nl__bool__3){ goto label_18;}
#line 1438
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1438
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1438
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(507)));
#line 1438
c_rt_lib0clear(&___nl__im__7);
#line 1438
c_rt_lib0clear(&___nl__im__8);
#line 1438
c_rt_lib0move(&___nl__im__5, translator_priv0get_var_register(___nl__im__6, ___ref___rec__1));
#line 1438
c_rt_lib0clear(&___nl__im__6);
#line 1438
c_rt_lib0clear(&___nl__im__0);
#line 1438
c_rt_lib0clear(&___nl__im__2);
#line 1438
//clear ___nl__bool__3;
#line 1438
return ___nl__im__5;
#line 1439
goto label_18;
#line 1439
label_18:
;
#line 1439
//clear ___nl__bool__3;
#line 1439
c_rt_lib0clear(&___nl__im__5);
#line 1442
c_rt_lib0move(&___nl__im__9, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1443
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1443
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1443
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1443
___nl__im_ptr__14 = NULL;
#line 1443
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(418)));
#line 1443
c_rt_lib0clear(&___nl__im__13);
#line 1443
___nl__bool__10 = tct0is_own_type(___nl__im__11, ___nl__im__12);
#line 1443
c_rt_lib0clear(&___nl__im__11);
#line 1443
c_rt_lib0clear(&___nl__im__12);
#line 1443
___nl__bool__10 = !___nl__bool__10;
#line 1443
if(___nl__bool__10){ goto label_35;}
#line 1444
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1445
goto label_38;
#line 1445
label_35:
;
#line 1446
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1447
goto label_38;
#line 1447
label_38:
;
#line 1447
//clear ___nl__bool__10;
#line 1449
c_rt_lib0clear(&___nl__im__0);
#line 1449
c_rt_lib0clear(&___nl__im__2);
#line 1449
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
#line 1453
___nl__im_ptr__5 = &((*___ref___rec__1).logic0field);
#line 1453
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1453
___nl__im_ptr__5 = NULL;
#line 1453
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(841)));
#line 1453
c_rt_lib0clear(&___nl__im__4);
#line 1453
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__0));
#line 1453
c_rt_lib0clear(&___nl__im__3);
#line 1453
c_rt_lib0clear(&___nl__im__0);
#line 1453
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
#line 1459
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(220));
#line 1459
if(___nl__bool__5){ goto label_7;}
#line 1461
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(422));
#line 1461
if(___nl__bool__5){ goto label_10;}
#line 1461
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 1461
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__3));
#line 1461
nl_die_arg(___nl__im__6);
#line 1459
label_7:
;
#line 1460
c_rt_lib0move(&___nl__im__4, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1461
goto label_13;
#line 1461
label_10:
;
#line 1462
c_rt_lib0move(&___nl__im__4, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__2));
#line 1463
goto label_13;
#line 1463
label_13:
;
#line 1464
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1464
c_rt_lib0move(&___nl__im__8,___get_global_string_const(841));
#line 1464
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___nl__im_ptr__7), ___nl__im__8));
#line 1464
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__0, ___nl__im__4));
#line 1464
c_rt_lib0move(&___nl__string__9,___get_global_string_const(841));
#line 1464
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__7, ___nl__string__9, ___nl__im__8));
#line 1464
___nl__im_ptr__7 = NULL;
#line 1464
c_rt_lib0clear(&___nl__im__8);
#line 1464
c_rt_lib0clear(&___nl__string__9);
#line 1465
___nl__im_ptr__10 = &((*___ref___rec__1).debug0field);
#line 1465
c_rt_lib0move(&___nl__im__11,___get_global_string_const(854));
#line 1465
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 1465
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__0, ___nl__im__4));
#line 1465
c_rt_lib0move(&___nl__string__12,___get_global_string_const(854));
#line 1465
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__12, ___nl__im__11));
#line 1465
___nl__im_ptr__10 = NULL;
#line 1465
c_rt_lib0clear(&___nl__im__11);
#line 1465
c_rt_lib0clear(&___nl__string__12);
#line 1466
c_rt_lib0clear(&___nl__im__0);
#line 1466
c_rt_lib0clear(&___nl__im__2);
#line 1466
c_rt_lib0clear(&___nl__im__3);
#line 1466
//clear ___nl__bool__5;
#line 1466
c_rt_lib0clear(&___nl__im__6);
#line 1466
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
#line 1470
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1470
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1470
___nl__im_ptr__5 = NULL;
#line 1470
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(216)));
#line 1470
c_rt_lib0clear(&___nl__im__4);
#line 1470
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1470
c_rt_lib0clear(&___nl__im__3);
#line 1471
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1471
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(220)));
#line 1471
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__1, ___get_global_string_const(219), ___nl__im__7, ___get_global_string_const(353), ___nl__im__8));
#line 1471
c_rt_lib0clear(&___nl__im__7);
#line 1471
c_rt_lib0clear(&___nl__im__8);
#line 1472
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1472
c_rt_lib0move(&___nl__im__10,___get_global_string_const(216));
#line 1472
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1472
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1472
c_rt_lib0move(&___nl__string__11,___get_global_string_const(216));
#line 1472
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1472
___nl__im_ptr__9 = NULL;
#line 1472
c_rt_lib0clear(&___nl__im__10);
#line 1472
c_rt_lib0clear(&___nl__string__11);
#line 1473
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1473
c_rt_lib0move(&___nl__im__13,___get_global_string_const(471));
#line 1473
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1473
___nl__int__14 = 1;
#line 1473
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1473
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1473
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1473
c_rt_lib0move(&___nl__string__17,___get_global_string_const(471));
#line 1473
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1473
___nl__im_ptr__12 = NULL;
#line 1473
c_rt_lib0clear(&___nl__im__13);
#line 1473
//clear ___nl__int__14;
#line 1473
//clear ___nl__int__15;
#line 1473
//clear ___nl__int__16;
#line 1473
c_rt_lib0clear(&___nl__string__17);
#line 1474
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1474
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1344));
#line 1474
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1474
___nl__bool__20 = true;
#line 1474
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1474
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1474
c_rt_lib0move(&___nl__string__22,___get_global_string_const(1344));
#line 1474
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1474
___nl__im_ptr__18 = NULL;
#line 1474
c_rt_lib0clear(&___nl__im__19);
#line 1474
c_rt_lib0clear(&___nl__im__21);
#line 1474
c_rt_lib0clear(&___nl__string__22);
#line 1475
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1475
c_rt_lib0move(&___nl__im__24,___get_global_string_const(216));
#line 1475
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1475
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1475
c_rt_lib0move(&___nl__string__25,___get_global_string_const(216));
#line 1475
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1475
___nl__im_ptr__23 = NULL;
#line 1475
c_rt_lib0clear(&___nl__im__24);
#line 1475
c_rt_lib0clear(&___nl__string__25);
#line 1476
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1476
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1476
___nl__im_ptr__29 = NULL;
#line 1476
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(216)));
#line 1476
c_rt_lib0clear(&___nl__im__28);
#line 1476
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1476
c_rt_lib0clear(&___nl__im__27);
#line 1476
c_rt_lib0clear(&___nl__im__1);
#line 1476
//clear ___nl__int__2;
#line 1476
c_rt_lib0clear(&___nl__im__6);
#line 1476
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
#line 1480
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1480
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1480
___nl__im_ptr__5 = NULL;
#line 1480
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(216)));
#line 1480
c_rt_lib0clear(&___nl__im__4);
#line 1480
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1480
c_rt_lib0clear(&___nl__im__3);
#line 1481
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1481
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(422)));
#line 1481
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(206), ___nl__im__1, ___get_global_string_const(219), ___nl__im__7, ___get_global_string_const(353), ___nl__im__8));
#line 1481
c_rt_lib0clear(&___nl__im__7);
#line 1481
c_rt_lib0clear(&___nl__im__8);
#line 1482
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1482
c_rt_lib0move(&___nl__im__10,___get_global_string_const(216));
#line 1482
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1482
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1482
c_rt_lib0move(&___nl__string__11,___get_global_string_const(216));
#line 1482
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1482
___nl__im_ptr__9 = NULL;
#line 1482
c_rt_lib0clear(&___nl__im__10);
#line 1482
c_rt_lib0clear(&___nl__string__11);
#line 1483
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1483
c_rt_lib0move(&___nl__im__13,___get_global_string_const(471));
#line 1483
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1483
___nl__int__14 = 1;
#line 1483
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1483
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1483
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1483
c_rt_lib0move(&___nl__string__17,___get_global_string_const(471));
#line 1483
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1483
___nl__im_ptr__12 = NULL;
#line 1483
c_rt_lib0clear(&___nl__im__13);
#line 1483
//clear ___nl__int__14;
#line 1483
//clear ___nl__int__15;
#line 1483
//clear ___nl__int__16;
#line 1483
c_rt_lib0clear(&___nl__string__17);
#line 1484
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1484
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1344));
#line 1484
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1484
___nl__bool__20 = true;
#line 1484
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1484
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1484
c_rt_lib0move(&___nl__string__22,___get_global_string_const(1344));
#line 1484
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1484
___nl__im_ptr__18 = NULL;
#line 1484
c_rt_lib0clear(&___nl__im__19);
#line 1484
c_rt_lib0clear(&___nl__im__21);
#line 1484
c_rt_lib0clear(&___nl__string__22);
#line 1485
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1485
c_rt_lib0move(&___nl__im__24,___get_global_string_const(216));
#line 1485
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1485
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1485
c_rt_lib0move(&___nl__string__25,___get_global_string_const(216));
#line 1485
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1485
___nl__im_ptr__23 = NULL;
#line 1485
c_rt_lib0clear(&___nl__im__24);
#line 1485
c_rt_lib0clear(&___nl__string__25);
#line 1486
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1486
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1486
___nl__im_ptr__29 = NULL;
#line 1486
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(216)));
#line 1486
c_rt_lib0clear(&___nl__im__28);
#line 1486
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1486
c_rt_lib0clear(&___nl__im__27);
#line 1486
c_rt_lib0clear(&___nl__im__1);
#line 1486
//clear ___nl__int__2;
#line 1486
c_rt_lib0clear(&___nl__im__6);
#line 1486
return ___nl__im__26;
return NULL;

}

translator0function_logic_t0type translator_priv0save_registers(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 1490
___nl__im_ptr__2 = &((*___ref___rec__0).logic0field);
#line 1490
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 1490
___nl__im_ptr__2 = NULL;
#line 1490
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
#line 1494
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 1494
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 1494
if(___nl__bool__3){ goto label_8;}
#line 1496
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(422));
#line 1496
if(___nl__bool__3){ goto label_31;}
#line 1496
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 1496
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1496
nl_die_arg(___nl__im__4);
#line 1494
label_8:
;
#line 1495
___nl__im_ptr__8 = &((*___ref___rec__1).logic0field);
#line 1495
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1495
___nl__im_ptr__8 = NULL;
#line 1495
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(1344)));
#line 1495
c_rt_lib0clear(&___nl__im__7);
#line 1495
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 1495
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 1495
c_rt_lib0clear(&___nl__im__10);
#line 1495
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__9));
#line 1495
___nl__bool__5 = c_rt_lib0check_true_native(___nl__im__11);
#line 1495
c_rt_lib0clear(&___nl__im__6);
#line 1495
//clear ___nl__int__9;
#line 1495
c_rt_lib0clear(&___nl__im__11);
#line 1495
___nl__bool__5 = !___nl__bool__5;
#line 1495
if(___nl__bool__5){ goto label_28;}
#line 1495
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__0));
#line 1495
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__12));
#line 1495
c_rt_lib0clear(&___nl__im__12);
#line 1495
goto label_28;
#line 1495
label_28:
;
#line 1495
//clear ___nl__bool__5;
#line 1496
goto label_33;
#line 1496
label_31:
;
#line 1497
goto label_33;
#line 1497
label_33:
;
#line 1497
c_rt_lib0clear(&___nl__im__0);
#line 1497
c_rt_lib0clear(&___nl__im__2);
#line 1497
//clear ___nl__bool__3;
#line 1497
c_rt_lib0clear(&___nl__im__4);
#line 1497
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
#line 1501
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(471)));
#line 1501
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1501
c_rt_lib0clear(&___nl__im__3);
#line 1501
label_3:
;
#line 1501
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1501
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1501
___nl__im_ptr__7 = NULL;
#line 1501
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(471)));
#line 1501
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1501
c_rt_lib0clear(&___nl__im__6);
#line 1501
c_rt_lib0clear(&___nl__im__8);
#line 1501
___nl__bool__4 = ___nl__int__2 < ___nl__int__5;
#line 1501
//clear ___nl__int__5;
#line 1501
___nl__bool__4 = !___nl__bool__4;
#line 1501
if(___nl__bool__4){ goto label_28;}
#line 1502
___nl__im_ptr__12 = &((*___ref___rec__1).logic0field);
#line 1502
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 1502
___nl__im_ptr__12 = NULL;
#line 1502
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(216)));
#line 1502
c_rt_lib0clear(&___nl__im__11);
#line 1502
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__10, ___nl__int__2));
#line 1502
c_rt_lib0clear(&___nl__im__10);
#line 1502
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__9, ___ref___rec__1));
#line 1502
c_rt_lib0clear(&___nl__im__9);
#line 1501
___nl__int__13 = 1;
#line 1501
___nl__int__2 = ___nl__int__2 + ___nl__int__13;
#line 1501
//clear ___nl__int__13;
#line 1503
goto label_3;
#line 1503
label_28:
;
#line 1503
c_rt_lib0clear(&___nl__im__0);
#line 1503
//clear ___nl__int__2;
#line 1503
//clear ___nl__bool__4;
#line 1503
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
#line 1507
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(471)));
#line 1507
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1507
c_rt_lib0clear(&___nl__im__3);
#line 1507
label_3:
;
#line 1507
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1507
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1507
___nl__im_ptr__7 = NULL;
#line 1507
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(471)));
#line 1507
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1507
c_rt_lib0clear(&___nl__im__6);
#line 1507
c_rt_lib0clear(&___nl__im__8);
#line 1507
___nl__bool__4 = ___nl__int__2 < ___nl__int__5;
#line 1507
//clear ___nl__int__5;
#line 1507
___nl__bool__4 = !___nl__bool__4;
#line 1507
if(___nl__bool__4){ goto label_41;}
#line 1508
___nl__im_ptr__12 = &((*___ref___rec__1).logic0field);
#line 1508
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 1508
___nl__im_ptr__12 = NULL;
#line 1508
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(216)));
#line 1508
c_rt_lib0clear(&___nl__im__11);
#line 1508
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__10, ___nl__int__2));
#line 1508
c_rt_lib0clear(&___nl__im__10);
#line 1508
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__9, ___ref___rec__1));
#line 1508
c_rt_lib0clear(&___nl__im__9);
#line 1509
___nl__bool__13 = false;
#line 1509
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1509
c_rt_lib0move(&___nl__im__15,___get_global_string_const(1344));
#line 1509
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___nl__im_ptr__14), ___nl__im__15));
#line 1509
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__13));
#line 1509
c_rt_lib0array_set(&___nl__im__15, ___nl__int__2, ___nl__im__16);
#line 1509
c_rt_lib0move(&___nl__string__17,___get_global_string_const(1344));
#line 1509
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__14, ___nl__string__17, ___nl__im__15));
#line 1509
___nl__im_ptr__14 = NULL;
#line 1509
//clear ___nl__bool__13;
#line 1509
c_rt_lib0clear(&___nl__im__15);
#line 1509
c_rt_lib0clear(&___nl__im__16);
#line 1509
c_rt_lib0clear(&___nl__string__17);
#line 1507
___nl__int__18 = 1;
#line 1507
___nl__int__2 = ___nl__int__2 + ___nl__int__18;
#line 1507
//clear ___nl__int__18;
#line 1510
goto label_3;
#line 1510
label_41:
;
#line 1510
c_rt_lib0clear(&___nl__im__0);
#line 1510
//clear ___nl__int__2;
#line 1510
//clear ___nl__bool__4;
#line 1510
return NULL;
return NULL;

}

ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1) {
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 1514
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 1514
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__3));
#line 1514
c_rt_lib0clear(&___nl__im__3);
#line 1514
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__2));
#line 1514
c_rt_lib0clear(&___nl__im__2);
#line 1514
//clear ___nl__int__0;
#line 1514
return NULL;
return NULL;

}

nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
INT * ___nl__int_ptr__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT * ___nl__int_ptr__4 = NULL;
#line 1518
___nl__int_ptr__1 = &((*___ref___rec__0).label_nr0field);
#line 1518
___nl__int__2 = 1;
#line 1518
(*___nl__int_ptr__1) = (*___nl__int_ptr__1) + ___nl__int__2;
#line 1518
___nl__int_ptr__1 = NULL;
#line 1518
//clear ___nl__int__2;
#line 1519
___nl__int_ptr__4 = &((*___ref___rec__0).label_nr0field);
#line 1519
___nl__int__3 = (*___nl__int_ptr__4);
#line 1519
___nl__int_ptr__4 = NULL;
#line 1519
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
#line 1523
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1523
___nl__im_ptr__6 = &((*___ref___rec__1).logic0field);
#line 1523
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1523
___nl__im_ptr__6 = NULL;
#line 1523
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(418)));
#line 1523
c_rt_lib0clear(&___nl__im__5);
#line 1523
c_rt_lib0move(&___nl__im__2, translator_priv0var_type_to_reg_type(___nl__im__3, ___nl__im__4));
#line 1523
c_rt_lib0clear(&___nl__im__3);
#line 1523
c_rt_lib0clear(&___nl__im__4);
#line 1523
c_rt_lib0clear(&___nl__im__0);
#line 1523
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
#line 1527
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1527
___nl__bool__3 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__1);
#line 1527
c_rt_lib0clear(&___nl__im__4);
#line 1527
___nl__bool__3 = !___nl__bool__3;
#line 1527
if(___nl__bool__3){ goto label_9;}
#line 1528
c_rt_lib0clear(&___nl__im__1);
#line 1528
//clear ___nl__bool__3;
#line 1528
return ___nl__im__0;
#line 1529
goto label_9;
#line 1529
label_9:
;
#line 1529
//clear ___nl__bool__3;
#line 1531
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(353)));
#line 1531
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(220));
#line 1531
if(___nl__bool__7){ goto label_19;}
#line 1533
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(422));
#line 1533
if(___nl__bool__7){ goto label_22;}
#line 1533
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 1533
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 1533
nl_die_arg(___nl__im__8);
#line 1531
label_19:
;
#line 1532
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__2, ___nl__im__1));
#line 1533
goto label_25;
#line 1533
label_22:
;
#line 1534
c_rt_lib0move(&___nl__im__5, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__1));
#line 1535
goto label_25;
#line 1535
label_25:
;
#line 1536
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__0, ___ref___rec__2));
#line 1537
c_rt_lib0clear(&___nl__im__0);
#line 1537
c_rt_lib0clear(&___nl__im__1);
#line 1537
c_rt_lib0clear(&___nl__im__6);
#line 1537
//clear ___nl__bool__7;
#line 1537
c_rt_lib0clear(&___nl__im__8);
#line 1537
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
#line 1541
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1541
if(___nl__bool__2){ goto label_33;}
#line 1543
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1543
if(___nl__bool__2){ goto label_45;}
#line 1545
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1545
if(___nl__bool__2){ goto label_60;}
#line 1547
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1547
if(___nl__bool__2){ goto label_78;}
#line 1549
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1549
if(___nl__bool__2){ goto label_99;}
#line 1551
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1551
if(___nl__bool__2){ goto label_123;}
#line 1553
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1553
if(___nl__bool__2){ goto label_150;}
#line 1555
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1555
if(___nl__bool__2){ goto label_180;}
#line 1557
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1557
if(___nl__bool__2){ goto label_213;}
#line 1572
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1572
if(___nl__bool__2){ goto label_511;}
#line 1574
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 1574
if(___nl__bool__2){ goto label_546;}
#line 1576
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 1576
if(___nl__bool__2){ goto label_582;}
#line 1578
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1578
if(___nl__bool__2){ goto label_619;}
#line 1580
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 1580
if(___nl__bool__2){ goto label_657;}
#line 1582
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1582
if(___nl__bool__2){ goto label_696;}
#line 1582
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1582
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1582
nl_die_arg(___nl__im__3);
#line 1541
label_33:
;
#line 1541
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1541
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1542
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__6;
#line 1543
goto label_736;
#line 1543
label_45:
;
#line 1543
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1543
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1544
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(559), ___nl__im__0));
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
return ___nl__im__9;
#line 1545
goto label_736;
#line 1545
label_60:
;
#line 1545
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1545
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1546
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__12;
#line 1547
goto label_736;
#line 1547
label_78:
;
#line 1547
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1547
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1548
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(128), ___nl__im__0));
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
return ___nl__im__15;
#line 1549
goto label_736;
#line 1549
label_99:
;
#line 1549
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1549
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1550
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__18;
#line 1551
goto label_736;
#line 1551
label_123:
;
#line 1551
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1551
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1552
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(127), ___nl__im__0));
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
return ___nl__im__21;
#line 1553
goto label_736;
#line 1553
label_150:
;
#line 1553
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 1553
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 1554
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__24;
#line 1555
goto label_736;
#line 1555
label_180:
;
#line 1555
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1555
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1556
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(563), ___nl__im__0));
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
return ___nl__im__27;
#line 1557
goto label_736;
#line 1557
label_213:
;
#line 1557
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1557
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1558
c_rt_lib0move(&___nl__im__31,___get_global_string_const(32));
#line 1558
___nl__bool__30 = c_rt_lib0eq(___nl__im__28, ___nl__im__31);
#line 1558
c_rt_lib0clear(&___nl__im__31);
#line 1558
___nl__bool__30 = !___nl__bool__30;
#line 1558
if(___nl__bool__30){ goto label_255;}
#line 1559
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1559
c_rt_lib0clear(&___nl__im__0);
#line 1559
c_rt_lib0clear(&___nl__im__1);
#line 1559
//clear ___nl__bool__2;
#line 1559
c_rt_lib0clear(&___nl__im__3);
#line 1559
c_rt_lib0clear(&___nl__im__4);
#line 1559
c_rt_lib0clear(&___nl__im__5);
#line 1559
c_rt_lib0clear(&___nl__im__6);
#line 1559
c_rt_lib0clear(&___nl__im__7);
#line 1559
c_rt_lib0clear(&___nl__im__8);
#line 1559
c_rt_lib0clear(&___nl__im__9);
#line 1559
c_rt_lib0clear(&___nl__im__10);
#line 1559
c_rt_lib0clear(&___nl__im__11);
#line 1559
c_rt_lib0clear(&___nl__im__12);
#line 1559
c_rt_lib0clear(&___nl__im__13);
#line 1559
c_rt_lib0clear(&___nl__im__14);
#line 1559
c_rt_lib0clear(&___nl__im__15);
#line 1559
c_rt_lib0clear(&___nl__im__16);
#line 1559
c_rt_lib0clear(&___nl__im__17);
#line 1559
c_rt_lib0clear(&___nl__im__18);
#line 1559
c_rt_lib0clear(&___nl__im__19);
#line 1559
c_rt_lib0clear(&___nl__im__20);
#line 1559
c_rt_lib0clear(&___nl__im__21);
#line 1559
c_rt_lib0clear(&___nl__im__22);
#line 1559
c_rt_lib0clear(&___nl__im__23);
#line 1559
c_rt_lib0clear(&___nl__im__24);
#line 1559
c_rt_lib0clear(&___nl__im__25);
#line 1559
c_rt_lib0clear(&___nl__im__26);
#line 1559
c_rt_lib0clear(&___nl__im__27);
#line 1559
c_rt_lib0clear(&___nl__im__28);
#line 1559
c_rt_lib0clear(&___nl__im__29);
#line 1559
//clear ___nl__bool__30;
#line 1559
return ___nl__im__32;
#line 1560
goto label_470;
#line 1560
label_255:
;
#line 1560
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1560
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(6));
#line 1560
c_rt_lib0clear(&___nl__im__33);
#line 1560
___nl__bool__30 = !___nl__bool__30;
#line 1560
if(___nl__bool__30){ goto label_296;}
#line 1561
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(559), ___nl__im__0));
#line 1561
c_rt_lib0clear(&___nl__im__0);
#line 1561
c_rt_lib0clear(&___nl__im__1);
#line 1561
//clear ___nl__bool__2;
#line 1561
c_rt_lib0clear(&___nl__im__3);
#line 1561
c_rt_lib0clear(&___nl__im__4);
#line 1561
c_rt_lib0clear(&___nl__im__5);
#line 1561
c_rt_lib0clear(&___nl__im__6);
#line 1561
c_rt_lib0clear(&___nl__im__7);
#line 1561
c_rt_lib0clear(&___nl__im__8);
#line 1561
c_rt_lib0clear(&___nl__im__9);
#line 1561
c_rt_lib0clear(&___nl__im__10);
#line 1561
c_rt_lib0clear(&___nl__im__11);
#line 1561
c_rt_lib0clear(&___nl__im__12);
#line 1561
c_rt_lib0clear(&___nl__im__13);
#line 1561
c_rt_lib0clear(&___nl__im__14);
#line 1561
c_rt_lib0clear(&___nl__im__15);
#line 1561
c_rt_lib0clear(&___nl__im__16);
#line 1561
c_rt_lib0clear(&___nl__im__17);
#line 1561
c_rt_lib0clear(&___nl__im__18);
#line 1561
c_rt_lib0clear(&___nl__im__19);
#line 1561
c_rt_lib0clear(&___nl__im__20);
#line 1561
c_rt_lib0clear(&___nl__im__21);
#line 1561
c_rt_lib0clear(&___nl__im__22);
#line 1561
c_rt_lib0clear(&___nl__im__23);
#line 1561
c_rt_lib0clear(&___nl__im__24);
#line 1561
c_rt_lib0clear(&___nl__im__25);
#line 1561
c_rt_lib0clear(&___nl__im__26);
#line 1561
c_rt_lib0clear(&___nl__im__27);
#line 1561
c_rt_lib0clear(&___nl__im__28);
#line 1561
c_rt_lib0clear(&___nl__im__29);
#line 1561
//clear ___nl__bool__30;
#line 1561
c_rt_lib0clear(&___nl__im__32);
#line 1561
return ___nl__im__34;
#line 1562
goto label_470;
#line 1562
label_296:
;
#line 1562
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1562
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(2));
#line 1562
c_rt_lib0clear(&___nl__im__35);
#line 1562
___nl__bool__30 = !___nl__bool__30;
#line 1562
if(___nl__bool__30){ goto label_338;}
#line 1563
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(127), ___nl__im__0));
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
c_rt_lib0clear(&___nl__im__32);
#line 1563
c_rt_lib0clear(&___nl__im__34);
#line 1563
return ___nl__im__36;
#line 1564
goto label_470;
#line 1564
label_338:
;
#line 1564
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1564
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__37, ___get_global_string_const(13));
#line 1564
c_rt_lib0clear(&___nl__im__37);
#line 1564
___nl__bool__30 = !___nl__bool__30;
#line 1564
if(___nl__bool__30){ goto label_381;}
#line 1565
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(563), ___nl__im__0));
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
c_rt_lib0clear(&___nl__im__34);
#line 1565
c_rt_lib0clear(&___nl__im__36);
#line 1565
return ___nl__im__38;
#line 1566
goto label_470;
#line 1566
label_381:
;
#line 1566
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1566
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(4));
#line 1566
c_rt_lib0clear(&___nl__im__39);
#line 1566
___nl__bool__30 = !___nl__bool__30;
#line 1566
if(___nl__bool__30){ goto label_425;}
#line 1567
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(128), ___nl__im__0));
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
c_rt_lib0clear(&___nl__im__36);
#line 1567
c_rt_lib0clear(&___nl__im__38);
#line 1567
return ___nl__im__40;
#line 1568
goto label_470;
#line 1568
label_425:
;
#line 1568
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1568
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(9));
#line 1568
c_rt_lib0clear(&___nl__im__41);
#line 1568
___nl__bool__30 = !___nl__bool__30;
#line 1568
if(___nl__bool__30){ goto label_470;}
#line 1569
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
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
c_rt_lib0clear(&___nl__im__38);
#line 1569
c_rt_lib0clear(&___nl__im__40);
#line 1569
return ___nl__im__42;
#line 1570
goto label_470;
#line 1570
label_470:
;
#line 1570
//clear ___nl__bool__30;
#line 1570
c_rt_lib0clear(&___nl__im__32);
#line 1570
c_rt_lib0clear(&___nl__im__34);
#line 1570
c_rt_lib0clear(&___nl__im__36);
#line 1570
c_rt_lib0clear(&___nl__im__38);
#line 1570
c_rt_lib0clear(&___nl__im__40);
#line 1570
c_rt_lib0clear(&___nl__im__42);
#line 1571
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__43;
#line 1572
goto label_736;
#line 1572
label_511:
;
#line 1573
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(405)));
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
c_rt_lib0clear(&___nl__im__43);
#line 1573
return ___nl__im__44;
#line 1574
goto label_736;
#line 1574
label_546:
;
#line 1575
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__43);
#line 1575
c_rt_lib0clear(&___nl__im__44);
#line 1575
return ___nl__im__45;
#line 1576
goto label_736;
#line 1576
label_582:
;
#line 1577
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
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
c_rt_lib0clear(&___nl__im__44);
#line 1577
c_rt_lib0clear(&___nl__im__45);
#line 1577
return ___nl__im__46;
#line 1578
goto label_736;
#line 1578
label_619:
;
#line 1579
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__45);
#line 1579
c_rt_lib0clear(&___nl__im__46);
#line 1579
return ___nl__im__47;
#line 1580
goto label_736;
#line 1580
label_657:
;
#line 1581
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__46);
#line 1581
c_rt_lib0clear(&___nl__im__47);
#line 1581
return ___nl__im__48;
#line 1582
goto label_736;
#line 1582
label_696:
;
#line 1583
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__47);
#line 1583
c_rt_lib0clear(&___nl__im__48);
#line 1583
return ___nl__im__49;
#line 1584
goto label_736;
#line 1584
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
#line 1588
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 1588
___nl__im_ptr__4 = &((*___ref___rec__2).debug0field);
#line 1588
c_rt_lib0copy(&___nl__im__5, ___nl__im__3);
#line 1588
c_rt_lib0hash_set_value_dec(___nl__im_ptr__4, ___get_global_string_const(551), ___nl__im__5);
#line 1588
___nl__im_ptr__4 = NULL;
#line 1588
c_rt_lib0clear(&___nl__im__3);
#line 1588
c_rt_lib0clear(&___nl__im__5);
#line 1589
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1589
___nl__im_ptr__10 = &((*___ref___rec__2).logic0field);
#line 1589
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1589
___nl__im_ptr__10 = NULL;
#line 1589
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(418)));
#line 1589
c_rt_lib0clear(&___nl__im__9);
#line 1589
___nl__bool__6 = tct0is_own_type(___nl__im__7, ___nl__im__8);
#line 1589
c_rt_lib0clear(&___nl__im__7);
#line 1589
c_rt_lib0clear(&___nl__im__8);
#line 1589
___nl__bool__6 = !___nl__bool__6;
#line 1589
___nl__bool__6 = !___nl__bool__6;
#line 1589
if(___nl__bool__6){ goto label_25;}
#line 1590
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 1591
c_rt_lib0clear(&___nl__im__0);
#line 1591
c_rt_lib0clear(&___nl__im__1);
#line 1591
//clear ___nl__bool__6;
#line 1591
return NULL;
#line 1592
goto label_25;
#line 1592
label_25:
;
#line 1592
//clear ___nl__bool__6;
#line 1593
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1593
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(223));
#line 1593
if(___nl__bool__12){ goto label_65;}
#line 1595
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(406));
#line 1595
if(___nl__bool__12){ goto label_72;}
#line 1597
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(33));
#line 1597
if(___nl__bool__12){ goto label_78;}
#line 1599
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1027));
#line 1599
if(___nl__bool__12){ goto label_85;}
#line 1601
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1028));
#line 1601
if(___nl__bool__12){ goto label_91;}
#line 1603
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(563));
#line 1603
if(___nl__bool__12){ goto label_97;}
#line 1624
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(507));
#line 1624
if(___nl__bool__12){ goto label_192;}
#line 1626
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1025));
#line 1626
if(___nl__bool__12){ goto label_198;}
#line 1628
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(236));
#line 1628
if(___nl__bool__12){ goto label_204;}
#line 1630
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1029));
#line 1630
if(___nl__bool__12){ goto label_210;}
#line 1632
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(986));
#line 1632
if(___nl__bool__12){ goto label_216;}
#line 1634
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(231));
#line 1634
if(___nl__bool__12){ goto label_222;}
#line 1642
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(232));
#line 1642
if(___nl__bool__12){ goto label_277;}
#line 1668
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1006));
#line 1668
if(___nl__bool__12){ goto label_450;}
#line 1670
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1030));
#line 1670
if(___nl__bool__12){ goto label_454;}
#line 1672
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1031));
#line 1672
if(___nl__bool__12){ goto label_460;}
#line 1674
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1032));
#line 1674
if(___nl__bool__12){ goto label_466;}
#line 1674
c_rt_lib0move(&___nl__im__13,___get_global_string_const(15));
#line 1674
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__11));
#line 1674
nl_die_arg(___nl__im__13);
#line 1593
label_65:
;
#line 1593
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(223)));
#line 1593
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1594
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__14));
#line 1594
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1594
c_rt_lib0clear(&___nl__im__16);
#line 1595
goto label_472;
#line 1595
label_72:
;
#line 1595
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(406)));
#line 1595
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1596
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1596
nl_die_arg(___nl__im__19);
#line 1597
goto label_472;
#line 1597
label_78:
;
#line 1597
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(33)));
#line 1597
___nl__bool__20 = c_rt_lib0check_true_native(___nl__im__21);
#line 1598
c_rt_lib0move(&___nl__im__22, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1598
c_rt_lib0delete(translator_priv0load_const(___nl__im__22, ___nl__im__1, ___ref___rec__2));
#line 1598
c_rt_lib0clear(&___nl__im__22);
#line 1599
goto label_472;
#line 1599
label_85:
;
#line 1599
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1027)));
#line 1599
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1600
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 1600
nl_die_arg(___nl__im__25);
#line 1601
goto label_472;
#line 1601
label_91:
;
#line 1601
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1028)));
#line 1601
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1602
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 1602
nl_die_arg(___nl__im__28);
#line 1603
goto label_472;
#line 1603
label_97:
;
#line 1603
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(563)));
#line 1603
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1606
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(507)));
#line 1606
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(220)));
#line 1606
c_rt_lib0clear(&___nl__im__35);
#line 1606
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__34, ___get_global_string_const(1006));
#line 1606
c_rt_lib0clear(&___nl__im__34);
#line 1606
___nl__bool__33 = !___nl__bool__33;
#line 1606
if(___nl__bool__33){ goto label_110;}
#line 1607
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(352)));
#line 1608
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(8)));
#line 1609
goto label_172;
#line 1609
label_110:
;
#line 1610
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1610
___nl__im_ptr__41 = &((*___ref___rec__2).logic0field);
#line 1610
c_rt_lib0copy(&___nl__im__40, (*___nl__im_ptr__41));
#line 1610
___nl__im_ptr__41 = NULL;
#line 1610
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(418)));
#line 1610
c_rt_lib0clear(&___nl__im__40);
#line 1610
c_rt_lib0move(&___nl__im__37, translator_priv0unwrap_ref(___nl__im__38, ___nl__im__39));
#line 1610
c_rt_lib0clear(&___nl__im__38);
#line 1610
c_rt_lib0clear(&___nl__im__39);
#line 1610
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1610
___nl__im_ptr__46 = &((*___ref___rec__2).logic0field);
#line 1610
c_rt_lib0copy(&___nl__im__45, (*___nl__im_ptr__46));
#line 1610
___nl__im_ptr__46 = NULL;
#line 1610
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(418)));
#line 1610
c_rt_lib0clear(&___nl__im__45);
#line 1610
c_rt_lib0move(&___nl__im__42, translator_priv0unwrap_ref(___nl__im__43, ___nl__im__44));
#line 1610
c_rt_lib0clear(&___nl__im__43);
#line 1610
c_rt_lib0clear(&___nl__im__44);
#line 1610
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__42, ___get_global_string_const(13)));
#line 1610
c_rt_lib0clear(&___nl__im__37);
#line 1610
c_rt_lib0clear(&___nl__im__42);
#line 1611
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(168)));
#line 1611
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value(___nl__im__36, ___nl__im__48));
#line 1611
c_rt_lib0clear(&___nl__im__48);
#line 1611
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(168)));
#line 1611
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value(___nl__im__36, ___nl__im__50));
#line 1611
c_rt_lib0clear(&___nl__im__50);
#line 1611
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__49, ___get_global_string_const(27)));
#line 1611
c_rt_lib0clear(&___nl__im__47);
#line 1611
c_rt_lib0clear(&___nl__im__49);
#line 1612
___nl__im_ptr__55 = &((*___ref___rec__2).logic0field);
#line 1612
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 1612
___nl__im_ptr__55 = NULL;
#line 1612
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(418)));
#line 1612
c_rt_lib0clear(&___nl__im__54);
#line 1612
c_rt_lib0move(&___nl__im__52, translator_priv0var_type_to_reg_type(___nl__im__32, ___nl__im__53));
#line 1612
c_rt_lib0clear(&___nl__im__53);
#line 1612
c_rt_lib0move(&___nl__im__51, translator_priv0new_register(___ref___rec__2, ___nl__im__52));
#line 1612
c_rt_lib0clear(&___nl__im__52);
#line 1613
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(507)));
#line 1613
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__56, ___nl__im__51, ___ref___rec__2));
#line 1613
c_rt_lib0clear(&___nl__im__56);
#line 1614
___nl__bool__57 = false;
#line 1614
___nl__im_ptr__58 = &((*___ref___rec__2).logic0field);
#line 1614
c_rt_lib0move(&___nl__im__59,___get_global_string_const(1344));
#line 1614
c_rt_lib0move(&___nl__im__59, c_rt_lib0get_ref_hash((*___nl__im_ptr__58), ___nl__im__59));
#line 1614
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(219)));
#line 1614
___nl__int__61 = getIntFromImm(___nl__im__62);
#line 1614
c_rt_lib0clear(&___nl__im__62);
#line 1614
c_rt_lib0move(&___nl__im__60, c_rt_lib0bool_to_nl_native(___nl__bool__57));
#line 1614
c_rt_lib0array_set(&___nl__im__59, ___nl__int__61, ___nl__im__60);
#line 1614
c_rt_lib0move(&___nl__string__63,___get_global_string_const(1344));
#line 1614
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__58, ___nl__string__63, ___nl__im__59));
#line 1614
___nl__im_ptr__58 = NULL;
#line 1614
//clear ___nl__bool__57;
#line 1614
c_rt_lib0clear(&___nl__im__59);
#line 1614
c_rt_lib0clear(&___nl__im__60);
#line 1614
//clear ___nl__int__61;
#line 1614
c_rt_lib0clear(&___nl__string__63);
#line 1615
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(279), ___nl__im__51));
#line 1616
goto label_172;
#line 1616
label_172:
;
#line 1616
//clear ___nl__bool__33;
#line 1616
c_rt_lib0clear(&___nl__im__36);
#line 1616
c_rt_lib0clear(&___nl__im__51);
#line 1620
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(168)));
#line 1621
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1621
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(168)));
#line 1621
___nl__int__67 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__68, ___nl__im__69);
#line 1621
c_rt_lib0clear(&___nl__im__68);
#line 1621
c_rt_lib0clear(&___nl__im__69);
#line 1621
c_rt_lib0move(&___nl__im__70, c_rt_lib0int_new(___nl__int__67));
#line 1621
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(5, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__31, ___get_global_string_const(562), ___nl__im__66, ___get_global_string_const(567), ___nl__im__70, ___get_global_string_const(582), ___nl__im__32));
#line 1621
c_rt_lib0clear(&___nl__im__66);
#line 1621
//clear ___nl__int__67;
#line 1621
c_rt_lib0clear(&___nl__im__70);
#line 1621
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__65));
#line 1621
c_rt_lib0clear(&___nl__im__65);
#line 1621
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__64));
#line 1621
c_rt_lib0clear(&___nl__im__64);
#line 1624
goto label_472;
#line 1624
label_192:
;
#line 1624
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(507)));
#line 1624
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 1625
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 1625
nl_die_arg(___nl__im__73);
#line 1626
goto label_472;
#line 1626
label_198:
;
#line 1626
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1025)));
#line 1626
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 1627
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_mk(0));
#line 1627
nl_die_arg(___nl__im__76);
#line 1628
goto label_472;
#line 1628
label_204:
;
#line 1628
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(236)));
#line 1628
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 1629
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_mk(0));
#line 1629
nl_die_arg(___nl__im__79);
#line 1630
goto label_472;
#line 1630
label_210:
;
#line 1630
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1029)));
#line 1630
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1631
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 1631
nl_die_arg(___nl__im__82);
#line 1632
goto label_472;
#line 1632
label_216:
;
#line 1632
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(986)));
#line 1632
c_rt_lib0copy(&___nl__im__83, ___nl__im__84);
#line 1633
c_rt_lib0move(&___nl__im__85, c_rt_lib0array_mk(0));
#line 1633
nl_die_arg(___nl__im__85);
#line 1634
goto label_472;
#line 1634
label_222:
;
#line 1634
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(231)));
#line 1634
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 1635
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(0));
#line 1635
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__90));
#line 1635
c_rt_lib0clear(&___nl__im__90);
#line 1635
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_string_const(231), ___nl__im__89));
#line 1635
c_rt_lib0clear(&___nl__im__89);
#line 1635
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__88));
#line 1635
c_rt_lib0clear(&___nl__im__88);
#line 1636
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1636
___nl__im_ptr__96 = &((*___ref___rec__2).logic0field);
#line 1636
c_rt_lib0copy(&___nl__im__95, (*___nl__im_ptr__96));
#line 1636
___nl__im_ptr__96 = NULL;
#line 1636
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__95, ___get_global_string_const(418)));
#line 1636
c_rt_lib0clear(&___nl__im__95);
#line 1636
c_rt_lib0move(&___nl__im__92, translator_priv0unwrap_ref(___nl__im__93, ___nl__im__94));
#line 1636
c_rt_lib0clear(&___nl__im__93);
#line 1636
c_rt_lib0clear(&___nl__im__94);
#line 1636
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1636
___nl__im_ptr__101 = &((*___ref___rec__2).logic0field);
#line 1636
c_rt_lib0copy(&___nl__im__100, (*___nl__im_ptr__101));
#line 1636
___nl__im_ptr__101 = NULL;
#line 1636
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_string_const(418)));
#line 1636
c_rt_lib0clear(&___nl__im__100);
#line 1636
c_rt_lib0move(&___nl__im__97, translator_priv0unwrap_ref(___nl__im__98, ___nl__im__99));
#line 1636
c_rt_lib0clear(&___nl__im__98);
#line 1636
c_rt_lib0clear(&___nl__im__99);
#line 1636
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__97, ___get_global_string_const(2)));
#line 1636
c_rt_lib0clear(&___nl__im__92);
#line 1636
c_rt_lib0clear(&___nl__im__97);
#line 1637
___nl__int__103 = 0;
#line 1637
___nl__int__104 = 1;
#line 1637
___nl__int__105 = c_rt_lib0array_len(___nl__im__86);
#line 1637
label_256:
;
#line 1637
___nl__bool__106 = ___nl__int__103 >= ___nl__int__105;
#line 1637
if(___nl__bool__106){ goto label_275;}
#line 1637
c_rt_lib0move(&___nl__im__107, c_rt_lib0array_get(___nl__im__86, ___nl__int__103));
#line 1637
c_rt_lib0copy(&___nl__im__102, ___nl__im__107);
#line 1638
___nl__im_ptr__112 = &((*___ref___rec__2).logic0field);
#line 1638
c_rt_lib0copy(&___nl__im__111, (*___nl__im_ptr__112));
#line 1638
___nl__im_ptr__112 = NULL;
#line 1638
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_string_const(418)));
#line 1638
c_rt_lib0clear(&___nl__im__111);
#line 1638
c_rt_lib0move(&___nl__im__109, translator_priv0var_type_to_reg_type(___nl__im__91, ___nl__im__110));
#line 1638
c_rt_lib0clear(&___nl__im__110);
#line 1638
c_rt_lib0move(&___nl__im__108, translator_priv0new_register(___ref___rec__2, ___nl__im__109));
#line 1638
c_rt_lib0clear(&___nl__im__109);
#line 1639
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__102, ___nl__im__108, ___ref___rec__2));
#line 1640
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__108, ___ref___rec__2));
#line 1640
c_rt_lib0clear(&___nl__im__102);
#line 1641
___nl__int__103 = ___nl__int__103 + ___nl__int__104;
#line 1641
goto label_256;
#line 1641
label_275:
;
#line 1642
goto label_472;
#line 1642
label_277:
;
#line 1642
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(232)));
#line 1642
c_rt_lib0copy(&___nl__im__113, ___nl__im__114);
#line 1643
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(206)));
#line 1643
___nl__im_ptr__119 = &((*___ref___rec__2).logic0field);
#line 1643
c_rt_lib0copy(&___nl__im__118, (*___nl__im_ptr__119));
#line 1643
___nl__im_ptr__119 = NULL;
#line 1643
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__118, ___get_global_string_const(418)));
#line 1643
c_rt_lib0clear(&___nl__im__118);
#line 1643
c_rt_lib0move(&___nl__im__115, translator_priv0unwrap_ref(___nl__im__116, ___nl__im__117));
#line 1643
c_rt_lib0clear(&___nl__im__116);
#line 1643
c_rt_lib0clear(&___nl__im__117);
#line 1644
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__115, ___get_global_string_const(6));
#line 1644
___nl__bool__120 = !___nl__bool__120;
#line 1644
if(___nl__bool__120){ goto label_361;}
#line 1645
c_rt_lib0move(&___nl__im__121, c_rt_lib0array_mk(0));
#line 1646
___nl__int__123 = 0;
#line 1646
___nl__int__124 = 1;
#line 1646
___nl__int__125 = c_rt_lib0array_len(___nl__im__113);
#line 1646
label_296:
;
#line 1646
___nl__bool__126 = ___nl__int__123 >= ___nl__int__125;
#line 1646
if(___nl__bool__126){ goto label_315;}
#line 1646
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_get(___nl__im__113, ___nl__int__123));
#line 1646
c_rt_lib0copy(&___nl__im__122, ___nl__im__127);
#line 1646
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(577)));
#line 1646
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(220)));
#line 1646
c_rt_lib0clear(&___nl__im__130);
#line 1646
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(577)));
#line 1646
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_string_const(220)));
#line 1646
c_rt_lib0clear(&___nl__im__132);
#line 1646
c_rt_lib0move(&___nl__im__128, c_rt_lib0priv_as(___nl__im__131, ___get_global_string_const(1028)));
#line 1646
c_rt_lib0clear(&___nl__im__129);
#line 1646
c_rt_lib0clear(&___nl__im__131);
#line 1646
c_rt_lib0array_push(&___nl__im__121, ___nl__im__128);
#line 1646
c_rt_lib0clear(&___nl__im__128);
#line 1646
c_rt_lib0clear(&___nl__im__122);
#line 1646
___nl__int__123 = ___nl__int__123 + ___nl__int__124;
#line 1646
goto label_296;
#line 1646
label_315:
;
#line 1647
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(764), ___nl__im__121));
#line 1647
c_rt_lib0move(&___nl__im__133, c_rt_lib0ov_mk_arg(___get_global_string_const(233), ___nl__im__134));
#line 1647
c_rt_lib0clear(&___nl__im__134);
#line 1647
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__133));
#line 1647
c_rt_lib0clear(&___nl__im__133);
#line 1648
___nl__int__136 = 0;
#line 1648
___nl__int__137 = 1;
#line 1648
___nl__int__138 = c_rt_lib0array_len(___nl__im__113);
#line 1648
label_324:
;
#line 1648
___nl__bool__139 = ___nl__int__136 >= ___nl__int__138;
#line 1648
if(___nl__bool__139){ goto label_359;}
#line 1648
c_rt_lib0move(&___nl__im__140, c_rt_lib0array_get(___nl__im__113, ___nl__int__136));
#line 1648
c_rt_lib0copy(&___nl__im__135, ___nl__im__140);
#line 1649
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(225)));
#line 1649
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_string_const(206)));
#line 1649
c_rt_lib0clear(&___nl__im__144);
#line 1649
___nl__im_ptr__147 = &((*___ref___rec__2).logic0field);
#line 1649
c_rt_lib0copy(&___nl__im__146, (*___nl__im_ptr__147));
#line 1649
___nl__im_ptr__147 = NULL;
#line 1649
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(418)));
#line 1649
c_rt_lib0clear(&___nl__im__146);
#line 1649
c_rt_lib0move(&___nl__im__142, translator_priv0var_type_to_reg_type(___nl__im__143, ___nl__im__145));
#line 1649
c_rt_lib0clear(&___nl__im__143);
#line 1649
c_rt_lib0clear(&___nl__im__145);
#line 1649
c_rt_lib0move(&___nl__im__141, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__142));
#line 1649
c_rt_lib0clear(&___nl__im__142);
#line 1650
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(577)));
#line 1650
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(220)));
#line 1650
c_rt_lib0clear(&___nl__im__150);
#line 1650
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(577)));
#line 1650
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__152, ___get_global_string_const(220)));
#line 1650
c_rt_lib0clear(&___nl__im__152);
#line 1650
c_rt_lib0move(&___nl__im__148, c_rt_lib0priv_as(___nl__im__151, ___get_global_string_const(1028)));
#line 1650
c_rt_lib0clear(&___nl__im__149);
#line 1650
c_rt_lib0clear(&___nl__im__151);
#line 1651
c_rt_lib0delete(translator_priv0use_field(___nl__im__141, ___nl__im__1, ___nl__im__148, ___ref___rec__2));
#line 1652
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__135, ___get_global_string_const(225)));
#line 1652
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__153, ___nl__im__141, ___ref___rec__2));
#line 1652
c_rt_lib0clear(&___nl__im__153);
#line 1653
c_rt_lib0delete(translator_priv0release_field(___nl__im__141, ___nl__im__1, ___nl__im__148, ___ref___rec__2));
#line 1653
c_rt_lib0clear(&___nl__im__135);
#line 1654
___nl__int__136 = ___nl__int__136 + ___nl__int__137;
#line 1654
goto label_324;
#line 1654
label_359:
;
#line 1655
goto label_423;
#line 1655
label_361:
;
#line 1655
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__115, ___get_global_string_const(4));
#line 1655
___nl__bool__120 = !___nl__bool__120;
#line 1655
if(___nl__bool__120){ goto label_419;}
#line 1656
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_mk(0));
#line 1656
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_mk(2, ___get_global_string_const(224), ___nl__im__1, ___get_global_string_const(73), ___nl__im__156));
#line 1656
c_rt_lib0clear(&___nl__im__156);
#line 1656
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_arg(___get_global_string_const(232), ___nl__im__155));
#line 1656
c_rt_lib0clear(&___nl__im__155);
#line 1656
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__154));
#line 1656
c_rt_lib0clear(&___nl__im__154);
#line 1657
___nl__int__158 = 0;
#line 1657
___nl__int__159 = 1;
#line 1657
___nl__int__160 = c_rt_lib0array_len(___nl__im__113);
#line 1657
label_375:
;
#line 1657
___nl__bool__161 = ___nl__int__158 >= ___nl__int__160;
#line 1657
if(___nl__bool__161){ goto label_417;}
#line 1657
c_rt_lib0move(&___nl__im__162, c_rt_lib0array_get(___nl__im__113, ___nl__int__158));
#line 1657
c_rt_lib0copy(&___nl__im__157, ___nl__im__162);
#line 1658
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(225)));
#line 1658
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_string_const(206)));
#line 1658
c_rt_lib0clear(&___nl__im__166);
#line 1658
___nl__im_ptr__169 = &((*___ref___rec__2).logic0field);
#line 1658
c_rt_lib0copy(&___nl__im__168, (*___nl__im_ptr__169));
#line 1658
___nl__im_ptr__169 = NULL;
#line 1658
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__168, ___get_global_string_const(418)));
#line 1658
c_rt_lib0clear(&___nl__im__168);
#line 1658
c_rt_lib0move(&___nl__im__164, translator_priv0var_type_to_reg_type(___nl__im__165, ___nl__im__167));
#line 1658
c_rt_lib0clear(&___nl__im__165);
#line 1658
c_rt_lib0clear(&___nl__im__167);
#line 1658
c_rt_lib0move(&___nl__im__163, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__164));
#line 1658
c_rt_lib0clear(&___nl__im__164);
#line 1659
c_rt_lib0move(&___nl__im__171, c_rt_lib0ov_mk_none(___get_global_string_const(406)));
#line 1659
c_rt_lib0move(&___nl__im__170, translator_priv0new_register(___ref___rec__2, ___nl__im__171));
#line 1659
c_rt_lib0clear(&___nl__im__171);
#line 1660
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(577)));
#line 1660
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__174, ___get_global_string_const(220)));
#line 1660
c_rt_lib0clear(&___nl__im__174);
#line 1660
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(577)));
#line 1660
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__176, ___get_global_string_const(220)));
#line 1660
c_rt_lib0clear(&___nl__im__176);
#line 1660
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__175, ___get_global_string_const(1028)));
#line 1660
c_rt_lib0clear(&___nl__im__173);
#line 1660
c_rt_lib0clear(&___nl__im__175);
#line 1660
c_rt_lib0delete(translator_priv0load_const(___nl__im__172, ___nl__im__170, ___ref___rec__2));
#line 1660
c_rt_lib0clear(&___nl__im__172);
#line 1661
___nl__bool__177 = true;
#line 1661
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__163, ___nl__im__1, ___nl__im__170, ___nl__bool__177, ___ref___rec__2));
#line 1661
//clear ___nl__bool__177;
#line 1662
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec(___nl__im__157, ___get_global_string_const(225)));
#line 1662
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__178, ___nl__im__163, ___ref___rec__2));
#line 1662
c_rt_lib0clear(&___nl__im__178);
#line 1663
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__163, ___nl__im__1, ___nl__im__170, ___ref___rec__2));
#line 1663
c_rt_lib0clear(&___nl__im__157);
#line 1664
___nl__int__158 = ___nl__int__158 + ___nl__int__159;
#line 1664
goto label_375;
#line 1664
label_417:
;
#line 1665
goto label_423;
#line 1665
label_419:
;
#line 1666
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_mk(0));
#line 1666
nl_die_arg(___nl__im__179);
#line 1667
goto label_423;
#line 1667
label_423:
;
#line 1667
//clear ___nl__bool__120;
#line 1667
c_rt_lib0clear(&___nl__im__121);
#line 1667
c_rt_lib0clear(&___nl__im__122);
#line 1667
//clear ___nl__int__123;
#line 1667
//clear ___nl__int__124;
#line 1667
//clear ___nl__int__125;
#line 1667
//clear ___nl__bool__126;
#line 1667
c_rt_lib0clear(&___nl__im__127);
#line 1667
c_rt_lib0clear(&___nl__im__135);
#line 1667
//clear ___nl__int__136;
#line 1667
//clear ___nl__int__137;
#line 1667
//clear ___nl__int__138;
#line 1667
//clear ___nl__bool__139;
#line 1667
c_rt_lib0clear(&___nl__im__140);
#line 1667
c_rt_lib0clear(&___nl__im__141);
#line 1667
c_rt_lib0clear(&___nl__im__148);
#line 1667
c_rt_lib0clear(&___nl__im__157);
#line 1667
//clear ___nl__int__158;
#line 1667
//clear ___nl__int__159;
#line 1667
//clear ___nl__int__160;
#line 1667
//clear ___nl__bool__161;
#line 1667
c_rt_lib0clear(&___nl__im__162);
#line 1667
c_rt_lib0clear(&___nl__im__163);
#line 1667
c_rt_lib0clear(&___nl__im__170);
#line 1667
c_rt_lib0clear(&___nl__im__179);
#line 1668
goto label_472;
#line 1668
label_450:
;
#line 1669
c_rt_lib0move(&___nl__im__180, c_rt_lib0array_mk(0));
#line 1669
nl_die_arg(___nl__im__180);
#line 1670
goto label_472;
#line 1670
label_454:
;
#line 1670
c_rt_lib0move(&___nl__im__182, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1030)));
#line 1670
c_rt_lib0copy(&___nl__im__181, ___nl__im__182);
#line 1671
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_mk(0));
#line 1671
nl_die_arg(___nl__im__183);
#line 1672
goto label_472;
#line 1672
label_460:
;
#line 1672
c_rt_lib0move(&___nl__im__185, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1031)));
#line 1672
c_rt_lib0copy(&___nl__im__184, ___nl__im__185);
#line 1673
c_rt_lib0move(&___nl__im__186, c_rt_lib0array_mk(0));
#line 1673
nl_die_arg(___nl__im__186);
#line 1674
goto label_472;
#line 1674
label_466:
;
#line 1674
c_rt_lib0move(&___nl__im__188, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1032)));
#line 1674
c_rt_lib0copy(&___nl__im__187, ___nl__im__188);
#line 1675
c_rt_lib0move(&___nl__im__189, c_rt_lib0array_mk(0));
#line 1675
nl_die_arg(___nl__im__189);
#line 1676
goto label_472;
#line 1676
label_472:
;
#line 1676
c_rt_lib0clear(&___nl__im__0);
#line 1676
c_rt_lib0clear(&___nl__im__1);
#line 1676
c_rt_lib0clear(&___nl__im__11);
#line 1676
//clear ___nl__bool__12;
#line 1676
c_rt_lib0clear(&___nl__im__13);
#line 1676
//clear ___nl__int__14;
#line 1676
c_rt_lib0clear(&___nl__im__15);
#line 1676
c_rt_lib0clear(&___nl__im__17);
#line 1676
c_rt_lib0clear(&___nl__im__18);
#line 1676
c_rt_lib0clear(&___nl__im__19);
#line 1676
//clear ___nl__bool__20;
#line 1676
c_rt_lib0clear(&___nl__im__21);
#line 1676
c_rt_lib0clear(&___nl__im__23);
#line 1676
c_rt_lib0clear(&___nl__im__24);
#line 1676
c_rt_lib0clear(&___nl__im__25);
#line 1676
c_rt_lib0clear(&___nl__im__26);
#line 1676
c_rt_lib0clear(&___nl__im__27);
#line 1676
c_rt_lib0clear(&___nl__im__28);
#line 1676
c_rt_lib0clear(&___nl__im__29);
#line 1676
c_rt_lib0clear(&___nl__im__30);
#line 1676
c_rt_lib0clear(&___nl__im__31);
#line 1676
c_rt_lib0clear(&___nl__im__32);
#line 1676
c_rt_lib0clear(&___nl__im__71);
#line 1676
c_rt_lib0clear(&___nl__im__72);
#line 1676
c_rt_lib0clear(&___nl__im__73);
#line 1676
c_rt_lib0clear(&___nl__im__74);
#line 1676
c_rt_lib0clear(&___nl__im__75);
#line 1676
c_rt_lib0clear(&___nl__im__76);
#line 1676
c_rt_lib0clear(&___nl__im__77);
#line 1676
c_rt_lib0clear(&___nl__im__78);
#line 1676
c_rt_lib0clear(&___nl__im__79);
#line 1676
c_rt_lib0clear(&___nl__im__80);
#line 1676
c_rt_lib0clear(&___nl__im__81);
#line 1676
c_rt_lib0clear(&___nl__im__82);
#line 1676
c_rt_lib0clear(&___nl__im__83);
#line 1676
c_rt_lib0clear(&___nl__im__84);
#line 1676
c_rt_lib0clear(&___nl__im__85);
#line 1676
c_rt_lib0clear(&___nl__im__86);
#line 1676
c_rt_lib0clear(&___nl__im__87);
#line 1676
c_rt_lib0clear(&___nl__im__91);
#line 1676
c_rt_lib0clear(&___nl__im__102);
#line 1676
//clear ___nl__int__103;
#line 1676
//clear ___nl__int__104;
#line 1676
//clear ___nl__int__105;
#line 1676
//clear ___nl__bool__106;
#line 1676
c_rt_lib0clear(&___nl__im__107);
#line 1676
c_rt_lib0clear(&___nl__im__108);
#line 1676
c_rt_lib0clear(&___nl__im__113);
#line 1676
c_rt_lib0clear(&___nl__im__114);
#line 1676
c_rt_lib0clear(&___nl__im__115);
#line 1676
c_rt_lib0clear(&___nl__im__180);
#line 1676
c_rt_lib0clear(&___nl__im__181);
#line 1676
c_rt_lib0clear(&___nl__im__182);
#line 1676
c_rt_lib0clear(&___nl__im__183);
#line 1676
c_rt_lib0clear(&___nl__im__184);
#line 1676
c_rt_lib0clear(&___nl__im__185);
#line 1676
c_rt_lib0clear(&___nl__im__186);
#line 1676
c_rt_lib0clear(&___nl__im__187);
#line 1676
c_rt_lib0clear(&___nl__im__188);
#line 1676
c_rt_lib0clear(&___nl__im__189);
#line 1676
return NULL;
return NULL;

}

tct0meta_type0type translator_priv0unwrap_ref(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 1680
label_0:
;
#line 1680
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1680
___nl__bool__2 = !___nl__bool__2;
#line 1680
if(___nl__bool__2){ goto label_8;}
#line 1681
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1682
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__3));
#line 1682
c_rt_lib0clear(&___nl__im__3);
#line 1683
goto label_0;
#line 1683
label_8:
;
#line 1684
c_rt_lib0clear(&___nl__im__1);
#line 1684
//clear ___nl__bool__2;
#line 1684
c_rt_lib0clear(&___nl__im__3);
#line 1684
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
#line 1688
___nl__int__3 = 0;
#line 1689
___nl__im_ptr__7 = &((*___ref___rec__0).logic0field);
#line 1689
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1689
___nl__im_ptr__7 = NULL;
#line 1689
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(418)));
#line 1689
c_rt_lib0clear(&___nl__im__6);
#line 1689
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__1, ___nl__im__5));
#line 1689
c_rt_lib0clear(&___nl__im__5);
#line 1690
___nl__im_ptr__11 = &((*___ref___rec__0).logic0field);
#line 1690
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 1690
___nl__im_ptr__11 = NULL;
#line 1690
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(418)));
#line 1690
c_rt_lib0clear(&___nl__im__10);
#line 1690
___nl__bool__8 = tct0is_own_type(___nl__im__1, ___nl__im__9);
#line 1690
c_rt_lib0clear(&___nl__im__9);
#line 1690
___nl__bool__8 = !___nl__bool__8;
#line 1690
___nl__bool__8 = !___nl__bool__8;
#line 1690
if(___nl__bool__8){ goto label_27;}
#line 1691
___nl__int__12 = 1;
#line 1691
___nl__int__12 = -___nl__int__12;
#line 1691
c_rt_lib0clear(&___nl__im__1);
#line 1691
c_rt_lib0clear(&___nl__im__2);
#line 1691
//clear ___nl__int__3;
#line 1691
c_rt_lib0clear(&___nl__im__4);
#line 1691
//clear ___nl__bool__8;
#line 1691
return ___nl__int__12;
#line 1692
goto label_27;
#line 1692
label_27:
;
#line 1692
//clear ___nl__bool__8;
#line 1692
//clear ___nl__int__12;
#line 1693
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(13)));
#line 1693
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__13));
#line 1693
label_32:
;
#line 1693
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 1693
if(___nl__bool__15){ goto label_58;}
#line 1693
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 1693
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__13, ___nl__im__14));
#line 1694
___nl__bool__18 = c_rt_lib0eq(___nl__im__14, ___nl__im__2);
#line 1694
___nl__bool__18 = !___nl__bool__18;
#line 1694
if(___nl__bool__18){ goto label_51;}
#line 1694
c_rt_lib0clear(&___nl__im__1);
#line 1694
c_rt_lib0clear(&___nl__im__2);
#line 1694
c_rt_lib0clear(&___nl__im__4);
#line 1694
c_rt_lib0clear(&___nl__im__13);
#line 1694
c_rt_lib0clear(&___nl__im__14);
#line 1694
//clear ___nl__bool__15;
#line 1694
c_rt_lib0clear(&___nl__im__16);
#line 1694
c_rt_lib0clear(&___nl__im__17);
#line 1694
//clear ___nl__bool__18;
#line 1694
return ___nl__int__3;
#line 1694
goto label_51;
#line 1694
label_51:
;
#line 1694
//clear ___nl__bool__18;
#line 1695
___nl__int__19 = 1;
#line 1695
___nl__int__3 = ___nl__int__3 + ___nl__int__19;
#line 1695
//clear ___nl__int__19;
#line 1696
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 1696
goto label_32;
#line 1696
label_58:
;
#line 1697
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1697
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(1350), ___nl__im__4, ___get_global_string_const(222), ___nl__im__5, ___get_global_string_const(1347), ___nl__im__7, ___get_global_string_const(213), ___nl__im__9, ___get_global_string_const(489), ___nl__im__11, ___get_global_string_const(1349), ___nl__im__13));
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
