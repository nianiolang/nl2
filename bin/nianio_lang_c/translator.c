
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
#line 16
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 19
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 19
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 20
c_rt_lib0move(&___nl__im__9, ptd0hash(___nl__im__10));
#line 20
c_rt_lib0clear(&___nl__im__10);
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(214), ___nl__im__2, ___get_global_const(430), ___nl__im__4, ___get_global_const(1225), ___nl__im__5, ___get_global_const(719), ___nl__im__7, ___get_global_const(387), ___nl__im__9));
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
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_const(311), ___get_global_const(974)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1226), ___get_global_const(1227)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(533), ___nl__im__2, ___get_global_const(1228), ___nl__im__3));
#line 25
c_rt_lib0clear(&___nl__im__2);
#line 25
c_rt_lib0clear(&___nl__im__3);
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1226), ___get_global_const(158)));
#line 29
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1226), ___get_global_const(158)));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 29
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(876), ___nl__im__2, ___get_global_const(877), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(311), ___get_global_const(718)));
#line 35
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1226), ___get_global_const(1227)));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 37
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(311), ___get_global_const(698)));
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_const(1226), ___get_global_const(1229)));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_const(1230), ___nl__im__2, ___get_global_const(220), ___nl__im__3, ___get_global_const(1228), ___nl__im__4, ___get_global_const(211), ___nl__im__5, ___get_global_const(447), ___nl__im__6, ___get_global_const(1229), ___nl__im__7));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(938), ___nl__im__6, ___get_global_const(939), ___nl__im__7));
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0clear(&___nl__im__7);
#line 44
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__im__2, ___get_global_const(940), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 49
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__6, ___get_global_const(563), ___nl__im__7));
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__10));
#line 51
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 51
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__10, ___get_global_const(370), ___nl__im__11));
#line 51
c_rt_lib0clear(&___nl__im__10);
#line 51
c_rt_lib0clear(&___nl__im__11);
#line 51
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 51
c_rt_lib0clear(&___nl__im__9);
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__14));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__15));
#line 52
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__14, ___get_global_const(1232), ___nl__im__15, ___get_global_const(561), ___nl__im__16));
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
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 53
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 53
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__19, ___get_global_const(1232), ___nl__im__20, ___get_global_const(563), ___nl__im__21));
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
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__24));
#line 54
c_rt_lib0move(&___nl__im__25, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__24, ___get_global_const(533), ___nl__im__25));
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__28));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__29));
#line 55
c_rt_lib0move(&___nl__im__30, ptd0string());
#line 55
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__28, ___get_global_const(1232), ___nl__im__29, ___get_global_const(533), ___nl__im__30));
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
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 56
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__33));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__34));
#line 56
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__33, ___get_global_const(370), ___nl__im__34));
#line 56
c_rt_lib0clear(&___nl__im__33);
#line 56
c_rt_lib0clear(&___nl__im__34);
#line 56
c_rt_lib0move(&___nl__im__31, ptd0rec(___nl__im__32));
#line 56
c_rt_lib0clear(&___nl__im__32);
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__37));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__38));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(311), ___get_global_const(313)));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__39));
#line 57
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__37, ___get_global_const(1232), ___nl__im__38, ___get_global_const(563), ___nl__im__39));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(9, ___get_global_const(218), ___nl__im__3, ___get_global_const(563), ___nl__im__4, ___get_global_const(370), ___nl__im__8, ___get_global_const(252), ___nl__im__12, ___get_global_const(254), ___nl__im__17, ___get_global_const(925), ___nl__im__22, ___get_global_const(258), ___nl__im__26, ___get_global_const(1220), ___nl__im__31, ___get_global_const(256), ___nl__im__35));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(938)));
#line 62
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(152)));
#line 62
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__2));
#line 62
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(938)));
#line 62
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(951)));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__im__5, ___get_global_const(951), ___nl__im__11));
#line 62
//clear ___nl__int__2;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
//clear ___nl__int__6;
#line 62
c_rt_lib0clear(&___nl__im__11);
#line 63
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(938)));
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(152)));
#line 63
___nl__int__13 = getIntFromImm(___nl__im__15);
#line 63
c_rt_lib0clear(&___nl__im__14);
#line 63
c_rt_lib0clear(&___nl__im__15);
#line 63
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__13));
#line 63
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(938)));
#line 63
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(951)));
#line 63
___nl__int__17 = getIntFromImm(___nl__im__19);
#line 63
c_rt_lib0clear(&___nl__im__18);
#line 63
c_rt_lib0clear(&___nl__im__19);
#line 63
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__17));
#line 63
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__im__16, ___get_global_const(951), ___nl__im__20));
#line 63
//clear ___nl__int__13;
#line 63
c_rt_lib0clear(&___nl__im__16);
#line 63
//clear ___nl__int__17;
#line 63
c_rt_lib0clear(&___nl__im__20);
#line 64
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__1, ___get_global_const(938), ___nl__im__12));
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__1);
#line 64
c_rt_lib0clear(&___nl__im__12);
#line 64
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
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT * ___nl__im_ptr__57 = NULL;
ImmT  ___nl__string__58 = NULL;
#line 68
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 68
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(211), ___nl__im__3, ___get_global_const(207), ___nl__im__4, ___get_global_const(437), ___nl__im__5));
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
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_const(437), ___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(171)));
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
c_rt_lib0move(&___nl__im__16,___get_global_const(437));
#line 71
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 71
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(166)));
#line 71
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 71
c_rt_lib0move(&___nl__string__18,___get_global_const(437));
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
#line 71
label_2:
;
#line 72
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 72
goto label_3;
#line 72
label_1:
;
#line 73
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(164)));
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
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(5, ___get_global_const(719), ___nl__im__28, ___get_global_const(214), ___nl__im__29, ___get_global_const(430), ___nl__im__31, ___get_global_const(1225), ___nl__im__32, ___get_global_const(387), ___nl__im__1));
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
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
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
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 88
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(208)));
#line 89
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 90
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 91
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 92
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 93
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(166)));
#line 94
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(165)));
#line 95
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(0));
#line 95
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(9, ___get_global_const(225), ___nl__im__39, ___get_global_const(208), ___nl__im__40, ___get_global_const(214), ___nl__im__41, ___get_global_const(213), ___nl__im__42, ___get_global_const(386), ___nl__im__43, ___get_global_const(212), ___nl__im__44, ___get_global_const(166), ___nl__im__45, ___get_global_const(165), ___nl__im__46, ___get_global_const(719), ___nl__im__47));
#line 95
c_rt_lib0clear(&___nl__im__39);
#line 95
c_rt_lib0clear(&___nl__im__40);
#line 95
c_rt_lib0clear(&___nl__im__41);
#line 95
c_rt_lib0clear(&___nl__im__42);
#line 95
c_rt_lib0clear(&___nl__im__43);
#line 95
c_rt_lib0clear(&___nl__im__44);
#line 95
c_rt_lib0clear(&___nl__im__45);
#line 95
c_rt_lib0clear(&___nl__im__46);
#line 95
c_rt_lib0clear(&___nl__im__47);
#line 95
___nl__im_ptr__38 = NULL;
#line 95
___nl__im_ptr__48 = &(___nl__rec__33.loop_label0field);
#line 97
___nl__int__50 = 1;
#line 97
___nl__int__50 = -___nl__int__50;
#line 97
c_rt_lib0move(&___nl__im__51, c_rt_lib0int_new(___nl__int__50));
#line 97
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_mk(2, ___get_global_const(533), ___nl__im__51, ___get_global_const(1228), ___nl__im__27));
#line 97
//clear ___nl__int__50;
#line 97
c_rt_lib0clear(&___nl__im__51);
#line 97
___nl__int__53 = 1;
#line 97
___nl__int__53 = -___nl__int__53;
#line 97
c_rt_lib0move(&___nl__im__54, c_rt_lib0int_new(___nl__int__53));
#line 97
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_mk(2, ___get_global_const(533), ___nl__im__54, ___get_global_const(1228), ___nl__im__27));
#line 97
//clear ___nl__int__53;
#line 97
c_rt_lib0clear(&___nl__im__54);
#line 97
c_rt_lib0move(___nl__im_ptr__48, c_rt_lib0hash_mk(2, ___get_global_const(876), ___nl__im__49, ___get_global_const(877), ___nl__im__52));
#line 97
c_rt_lib0clear(&___nl__im__49);
#line 97
c_rt_lib0clear(&___nl__im__52);
#line 97
___nl__im_ptr__48 = NULL;
#line 99
c_rt_lib0delete(translator_priv0print_fun_def(___nl__im__20, &___nl__rec__33));
#line 100
c_rt_lib0move(&___nl__im__55,___get_global_const(207));
#line 100
c_rt_lib0move(&___nl__im__55, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__55));
#line 100
___nl__im_ptr__57 = &(___nl__rec__33.result0field);
#line 100
c_rt_lib0copy(&___nl__im__56, (*___nl__im_ptr__57));
#line 100
___nl__im_ptr__57 = NULL;
#line 100
c_rt_lib0delete(array0push(&___nl__im__55, ___nl__im__56));
#line 100
c_rt_lib0move(&___nl__string__58,___get_global_const(207));
#line 100
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__58, ___nl__im__55));
#line 100
c_rt_lib0clear(&___nl__im__55);
#line 100
c_rt_lib0clear(&___nl__im__56);
#line 100
c_rt_lib0clear(&___nl__string__58);
#line 100
c_rt_lib0clear(&___nl__im__20);
#line 100
label_5:
;
#line 101
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 101
goto label_6;
#line 101
label_4:
;
#line 102
c_rt_lib0clear(&___nl__im__0);
#line 102
c_rt_lib0clear(&___nl__im__1);
#line 102
c_rt_lib0clear(&___nl__im__8);
#line 102
c_rt_lib0clear(&___nl__im__9);
#line 102
//clear ___nl__int__10;
#line 102
//clear ___nl__int__11;
#line 102
//clear ___nl__int__12;
#line 102
//clear ___nl__bool__13;
#line 102
//clear ___nl__int__14;
#line 102
c_rt_lib0clear(&___nl__im__15);
#line 102
c_rt_lib0clear(&___nl__im__19);
#line 102
c_rt_lib0clear(&___nl__im__20);
#line 102
//clear ___nl__int__21;
#line 102
//clear ___nl__int__22;
#line 102
//clear ___nl__int__23;
#line 102
//clear ___nl__bool__24;
#line 102
//clear ___nl__int__25;
#line 102
c_rt_lib0clear(&___nl__im__26);
#line 102
c_rt_lib0clear(&___nl__im__27);
#line 102
translator0state_t0type0clean(___nl__rec__33);;
#line 102
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
#line 106
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(264)));
#line 106
___nl__int__4 = 0;
#line 106
___nl__int__5 = 1;
#line 106
___nl__int__6 = c_rt_lib0array_len(___nl__im__2);
#line 106
label_3:
;
#line 106
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 106
___nl__bool__7 = ___nl__int__8;
#line 106
if(___nl__bool__7){ goto label_1;}
#line 106
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 106
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 107
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(265)));
#line 107
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(73));
#line 107
if(___nl__bool__11){ goto label_5;}
#line 111
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_const(40));
#line 111
if(___nl__bool__11){ goto label_6;}
#line 111
c_rt_lib0move(&___nl__im__12,___get_global_const(16));
#line 111
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 111
nl_die_arg(___nl__im__12);
#line 107
label_5:
;
#line 108
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(166)));
#line 108
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(453)));
#line 108
___nl__im_ptr__19 = &((*___ref___rec__1).logic0field);
#line 108
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 108
___nl__im_ptr__19 = NULL;
#line 108
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(387)));
#line 108
c_rt_lib0clear(&___nl__im__18);
#line 108
c_rt_lib0move(&___nl__im__15, translator_priv0var_type_to_reg_type(___nl__im__16, ___nl__im__17));
#line 108
c_rt_lib0clear(&___nl__im__16);
#line 108
c_rt_lib0clear(&___nl__im__17);
#line 108
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 108
c_rt_lib0move(&___nl__im__13, translator_priv0new_declaration(___nl__im__14, ___ref___rec__1, ___nl__im__15, ___nl__im__20));
#line 108
c_rt_lib0clear(&___nl__im__14);
#line 108
c_rt_lib0clear(&___nl__im__15);
#line 108
c_rt_lib0clear(&___nl__im__20);
#line 109
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(223)));
#line 109
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(453)));
#line 109
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(3, ___get_global_const(331), ___nl__im__22, ___get_global_const(430), ___nl__im__13, ___get_global_const(204), ___nl__im__23));
#line 109
c_rt_lib0clear(&___nl__im__22);
#line 109
c_rt_lib0clear(&___nl__im__23);
#line 110
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 110
c_rt_lib0move(&___nl__im__25,___get_global_const(213));
#line 110
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___nl__im_ptr__24), ___nl__im__25));
#line 110
c_rt_lib0delete(array0push(&___nl__im__25, ___nl__im__21));
#line 110
c_rt_lib0move(&___nl__string__26,___get_global_const(213));
#line 110
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__24, ___nl__string__26, ___nl__im__25));
#line 110
___nl__im_ptr__24 = NULL;
#line 110
c_rt_lib0clear(&___nl__im__25);
#line 110
c_rt_lib0clear(&___nl__string__26);
#line 111
goto label_4;
#line 111
label_6:
;
#line 112
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(166)));
#line 112
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(453)));
#line 112
___nl__im_ptr__33 = &((*___ref___rec__1).logic0field);
#line 112
c_rt_lib0copy(&___nl__im__32, (*___nl__im_ptr__33));
#line 112
___nl__im_ptr__33 = NULL;
#line 112
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(387)));
#line 112
c_rt_lib0clear(&___nl__im__32);
#line 112
c_rt_lib0move(&___nl__im__29, translator_priv0var_type_to_reg_type(___nl__im__30, ___nl__im__31));
#line 112
c_rt_lib0clear(&___nl__im__30);
#line 112
c_rt_lib0clear(&___nl__im__31);
#line 112
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 112
c_rt_lib0move(&___nl__im__27, translator_priv0new_declaration(___nl__im__28, ___ref___rec__1, ___nl__im__29, ___nl__im__34));
#line 112
c_rt_lib0clear(&___nl__im__28);
#line 112
c_rt_lib0clear(&___nl__im__29);
#line 112
c_rt_lib0clear(&___nl__im__34);
#line 113
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(40)));
#line 113
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(453)));
#line 113
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(331), ___nl__im__36, ___get_global_const(430), ___nl__im__27, ___get_global_const(204), ___nl__im__37));
#line 113
c_rt_lib0clear(&___nl__im__36);
#line 113
c_rt_lib0clear(&___nl__im__37);
#line 114
___nl__im_ptr__38 = &((*___ref___rec__1).result0field);
#line 114
c_rt_lib0move(&___nl__im__39,___get_global_const(213));
#line 114
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___nl__im_ptr__38), ___nl__im__39));
#line 114
c_rt_lib0delete(array0push(&___nl__im__39, ___nl__im__35));
#line 114
c_rt_lib0move(&___nl__string__40,___get_global_const(213));
#line 114
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__38, ___nl__string__40, ___nl__im__39));
#line 114
___nl__im_ptr__38 = NULL;
#line 114
c_rt_lib0clear(&___nl__im__39);
#line 114
c_rt_lib0clear(&___nl__string__40);
#line 115
goto label_4;
#line 115
label_4:
;
#line 115
c_rt_lib0clear(&___nl__im__3);
#line 115
label_2:
;
#line 116
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 116
goto label_3;
#line 116
label_1:
;
#line 117
___nl__im_ptr__41 = &((*___ref___rec__1).result0field);
#line 117
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(386)));
#line 117
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(453)));
#line 117
c_rt_lib0clear(&___nl__im__44);
#line 117
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 117
c_rt_lib0hash_set_value_dec(___nl__im_ptr__41, ___get_global_const(386), ___nl__im__42);
#line 117
___nl__im_ptr__41 = NULL;
#line 117
c_rt_lib0clear(&___nl__im__42);
#line 117
c_rt_lib0clear(&___nl__im__43);
#line 118
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 118
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__45, ___ref___rec__1));
#line 118
c_rt_lib0clear(&___nl__im__45);
#line 120
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 120
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(220)));
#line 120
c_rt_lib0clear(&___nl__im__50);
#line 120
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(938)));
#line 120
c_rt_lib0clear(&___nl__im__49);
#line 120
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 120
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(220)));
#line 120
c_rt_lib0clear(&___nl__im__53);
#line 120
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(938)));
#line 120
c_rt_lib0clear(&___nl__im__52);
#line 120
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_mk(2, ___get_global_const(505), ___nl__im__48, ___get_global_const(938), ___nl__im__51));
#line 120
c_rt_lib0clear(&___nl__im__48);
#line 120
c_rt_lib0clear(&___nl__im__51);
#line 121
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_none(___get_global_const(881)));
#line 122
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_none(___get_global_const(15)));
#line 122
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__47, ___get_global_const(218), ___nl__im__54, ___get_global_const(204), ___nl__im__55));
#line 122
c_rt_lib0clear(&___nl__im__47);
#line 122
c_rt_lib0clear(&___nl__im__54);
#line 122
c_rt_lib0clear(&___nl__im__55);
#line 124
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(386)));
#line 124
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(204)));
#line 124
c_rt_lib0clear(&___nl__im__57);
#line 124
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(204));
#line 124
if(___nl__bool__58){ goto label_8;}
#line 129
___nl__bool__58 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(73));
#line 129
if(___nl__bool__58){ goto label_9;}
#line 129
c_rt_lib0move(&___nl__im__59,___get_global_const(16));
#line 129
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(2, ___nl__im__59, ___nl__im__56));
#line 129
nl_die_arg(___nl__im__59);
#line 124
label_8:
;
#line 124
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__56, ___get_global_const(204)));
#line 124
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 125
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(386)));
#line 125
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_const(453)));
#line 125
c_rt_lib0clear(&___nl__im__64);
#line 125
___nl__im_ptr__67 = &((*___ref___rec__1).logic0field);
#line 125
c_rt_lib0copy(&___nl__im__66, (*___nl__im_ptr__67));
#line 125
___nl__im_ptr__67 = NULL;
#line 125
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_const(387)));
#line 125
c_rt_lib0clear(&___nl__im__66);
#line 125
c_rt_lib0move(&___nl__im__62, translator_priv0unwrap_ref(___nl__im__63, ___nl__im__65));
#line 125
c_rt_lib0clear(&___nl__im__63);
#line 125
c_rt_lib0clear(&___nl__im__65);
#line 126
___nl__bool__68 = c_rt_lib0priv_is(___nl__im__62, ___get_global_const(8));
#line 126
if(___nl__bool__68){ goto label_12;}
#line 126
___nl__bool__68 = c_rt_lib0priv_is(___nl__im__62, ___get_global_const(0));
#line 126
label_12:
;
#line 126
//clear ___nl__bool__69;
#line 126
___nl__bool__68 = !___nl__bool__68;
#line 126
if(___nl__bool__68){ goto label_11;}
#line 127
c_rt_lib0delete(translator_priv0print_return(___nl__im__46, ___ref___rec__1));
#line 128
goto label_10;
#line 128
label_11:
;
#line 128
label_10:
;
#line 128
//clear ___nl__bool__68;
#line 129
goto label_7;
#line 129
label_9:
;
#line 130
c_rt_lib0delete(translator_priv0print_return(___nl__im__46, ___ref___rec__1));
#line 131
goto label_7;
#line 131
label_7:
;
#line 131
c_rt_lib0clear(&___nl__im__0);
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
//clear ___nl__int__4;
#line 131
//clear ___nl__int__5;
#line 131
//clear ___nl__int__6;
#line 131
//clear ___nl__bool__7;
#line 131
//clear ___nl__int__8;
#line 131
c_rt_lib0clear(&___nl__im__9);
#line 131
c_rt_lib0clear(&___nl__im__10);
#line 131
//clear ___nl__bool__11;
#line 131
c_rt_lib0clear(&___nl__im__12);
#line 131
c_rt_lib0clear(&___nl__im__13);
#line 131
c_rt_lib0clear(&___nl__im__21);
#line 131
c_rt_lib0clear(&___nl__im__27);
#line 131
c_rt_lib0clear(&___nl__im__35);
#line 131
c_rt_lib0clear(&___nl__im__46);
#line 131
c_rt_lib0clear(&___nl__im__56);
#line 131
//clear ___nl__bool__58;
#line 131
c_rt_lib0clear(&___nl__im__59);
#line 131
c_rt_lib0clear(&___nl__im__60);
#line 131
c_rt_lib0clear(&___nl__im__61);
#line 131
c_rt_lib0clear(&___nl__im__62);
#line 131
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
#line 136
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 137
___nl__int__5 = 0;
#line 137
___nl__int__6 = 1;
#line 137
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 137
label_3:
;
#line 137
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 137
___nl__bool__8 = ___nl__int__9;
#line 137
if(___nl__bool__8){ goto label_1;}
#line 137
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 137
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 138
c_rt_lib0move(&___nl__im__11, translator_priv0calc_val(___nl__im__4, ___ref___rec__2));
#line 139
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 139
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__13, ___get_global_const(328));
#line 139
c_rt_lib0clear(&___nl__im__13);
#line 139
___nl__bool__12 = !___nl__bool__12;
#line 139
if(___nl__bool__12){ goto label_5;}
#line 140
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 140
c_rt_lib0move(&___nl__im__11, translator_priv0get_cast(___nl__im__11, ___nl__im__14, ___ref___rec__2));
#line 140
c_rt_lib0clear(&___nl__im__14);
#line 141
goto label_4;
#line 141
label_5:
;
#line 141
label_4:
;
#line 141
//clear ___nl__bool__12;
#line 142
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__11));
#line 142
c_rt_lib0clear(&___nl__im__4);
#line 142
label_2:
;
#line 143
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 143
goto label_3;
#line 143
label_1:
;
#line 144
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 144
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_const(128));
#line 144
c_rt_lib0clear(&___nl__im__16);
#line 144
___nl__bool__15 = !___nl__bool__15;
#line 144
if(___nl__bool__15){ goto label_7;}
#line 145
___nl__int__18 = 0;
#line 145
___nl__int__19 = 1;
#line 145
___nl__int__20 = c_rt_lib0array_len(___nl__im__3);
#line 145
label_10:
;
#line 145
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 145
___nl__bool__21 = ___nl__int__22;
#line 145
if(___nl__bool__21){ goto label_8;}
#line 145
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__3, ___nl__int__18));
#line 145
c_rt_lib0copy(&___nl__im__17, ___nl__im__23);
#line 146
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__17, ___ref___rec__2));
#line 146
c_rt_lib0clear(&___nl__im__17);
#line 146
label_9:
;
#line 147
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 147
goto label_10;
#line 147
label_8:
;
#line 148
goto label_6;
#line 148
label_7:
;
#line 148
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 148
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(328));
#line 148
c_rt_lib0clear(&___nl__im__24);
#line 148
___nl__bool__15 = !___nl__bool__15;
#line 148
if(___nl__bool__15){ goto label_11;}
#line 149
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__3));
#line 149
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__im__26));
#line 149
c_rt_lib0clear(&___nl__im__26);
#line 149
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__25));
#line 149
c_rt_lib0clear(&___nl__im__25);
#line 150
goto label_6;
#line 150
label_11:
;
#line 151
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 151
nl_die_arg(___nl__im__27);
#line 152
goto label_6;
#line 152
label_6:
;
#line 152
//clear ___nl__bool__15;
#line 152
c_rt_lib0clear(&___nl__im__17);
#line 152
//clear ___nl__int__18;
#line 152
//clear ___nl__int__19;
#line 152
//clear ___nl__int__20;
#line 152
//clear ___nl__bool__21;
#line 152
//clear ___nl__int__22;
#line 152
c_rt_lib0clear(&___nl__im__23);
#line 152
c_rt_lib0clear(&___nl__im__27);
#line 152
c_rt_lib0clear(&___nl__im__0);
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
c_rt_lib0clear(&___nl__im__3);
#line 152
c_rt_lib0clear(&___nl__im__4);
#line 152
//clear ___nl__int__5;
#line 152
//clear ___nl__int__6;
#line 152
//clear ___nl__int__7;
#line 152
//clear ___nl__bool__8;
#line 152
//clear ___nl__int__9;
#line 152
c_rt_lib0clear(&___nl__im__10);
#line 152
c_rt_lib0clear(&___nl__im__11);
#line 152
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
#line 157
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 158
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 158
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(512));
#line 158
c_rt_lib0clear(&___nl__im__5);
#line 158
___nl__bool__4 = !___nl__bool__4;
#line 158
if(___nl__bool__4){ goto label_2;}
#line 158
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 158
nl_die_arg(___nl__im__6);
#line 158
goto label_1;
#line 158
label_2:
;
#line 158
label_1:
;
#line 158
//clear ___nl__bool__4;
#line 158
c_rt_lib0clear(&___nl__im__6);
#line 159
___nl__int__8 = 0;
#line 159
___nl__int__9 = 1;
#line 159
___nl__int__10 = c_rt_lib0array_len(___nl__im__0);
#line 159
label_5:
;
#line 159
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 159
___nl__bool__11 = ___nl__int__12;
#line 159
if(___nl__bool__11){ goto label_3;}
#line 159
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 159
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 160
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 161
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(370)));
#line 161
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_const(218)));
#line 161
c_rt_lib0clear(&___nl__im__17);
#line 161
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(370)));
#line 161
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_const(218)));
#line 161
c_rt_lib0clear(&___nl__im__19);
#line 161
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(903)));
#line 161
c_rt_lib0clear(&___nl__im__16);
#line 161
c_rt_lib0clear(&___nl__im__18);
#line 162
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 162
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(129));
#line 162
c_rt_lib0clear(&___nl__im__21);
#line 162
___nl__bool__20 = !___nl__bool__20;
#line 162
if(___nl__bool__20){ goto label_7;}
#line 163
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 163
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 163
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(129)));
#line 163
c_rt_lib0clear(&___nl__im__25);
#line 163
c_rt_lib0clear(&___nl__im__26);
#line 163
___nl__im_ptr__29 = &((*___ref___rec__2).logic0field);
#line 163
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 163
___nl__im_ptr__29 = NULL;
#line 163
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(387)));
#line 163
c_rt_lib0clear(&___nl__im__28);
#line 163
c_rt_lib0move(&___nl__im__23, translator_priv0unwrap_ref(___nl__im__24, ___nl__im__27));
#line 163
c_rt_lib0clear(&___nl__im__24);
#line 163
c_rt_lib0clear(&___nl__im__27);
#line 163
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 163
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 163
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__33, ___get_global_const(129)));
#line 163
c_rt_lib0clear(&___nl__im__32);
#line 163
c_rt_lib0clear(&___nl__im__33);
#line 163
___nl__im_ptr__36 = &((*___ref___rec__2).logic0field);
#line 163
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 163
___nl__im_ptr__36 = NULL;
#line 163
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(387)));
#line 163
c_rt_lib0clear(&___nl__im__35);
#line 163
c_rt_lib0move(&___nl__im__30, translator_priv0unwrap_ref(___nl__im__31, ___nl__im__34));
#line 163
c_rt_lib0clear(&___nl__im__31);
#line 163
c_rt_lib0clear(&___nl__im__34);
#line 163
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__30, ___get_global_const(4)));
#line 163
c_rt_lib0clear(&___nl__im__23);
#line 163
c_rt_lib0clear(&___nl__im__30);
#line 164
___nl__im_ptr__39 = &((*___ref___rec__2).logic0field);
#line 164
c_rt_lib0copy(&___nl__im__38, (*___nl__im_ptr__39));
#line 164
___nl__im_ptr__39 = NULL;
#line 164
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(387)));
#line 164
c_rt_lib0clear(&___nl__im__38);
#line 164
c_rt_lib0move(&___nl__im__22, translator_priv0unwrap_ref(___nl__im__22, ___nl__im__37));
#line 164
c_rt_lib0clear(&___nl__im__37);
#line 165
___nl__im_ptr__42 = &((*___ref___rec__2).logic0field);
#line 165
c_rt_lib0copy(&___nl__im__41, (*___nl__im_ptr__42));
#line 165
___nl__im_ptr__42 = NULL;
#line 165
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(387)));
#line 165
c_rt_lib0clear(&___nl__im__41);
#line 165
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__22, ___nl__im__40));
#line 165
c_rt_lib0clear(&___nl__im__40);
#line 166
goto label_6;
#line 166
label_7:
;
#line 166
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 166
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__43, ___get_global_const(512));
#line 166
c_rt_lib0clear(&___nl__im__43);
#line 166
___nl__bool__20 = !___nl__bool__20;
#line 166
if(___nl__bool__20){ goto label_8;}
#line 167
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 167
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 167
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__48, ___get_global_const(512)));
#line 167
c_rt_lib0clear(&___nl__im__47);
#line 167
c_rt_lib0clear(&___nl__im__48);
#line 167
___nl__im_ptr__51 = &((*___ref___rec__2).logic0field);
#line 167
c_rt_lib0copy(&___nl__im__50, (*___nl__im_ptr__51));
#line 167
___nl__im_ptr__51 = NULL;
#line 167
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_const(387)));
#line 167
c_rt_lib0clear(&___nl__im__50);
#line 167
c_rt_lib0move(&___nl__im__45, translator_priv0unwrap_ref(___nl__im__46, ___nl__im__49));
#line 167
c_rt_lib0clear(&___nl__im__46);
#line 167
c_rt_lib0clear(&___nl__im__49);
#line 167
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 167
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 167
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__55, ___get_global_const(512)));
#line 167
c_rt_lib0clear(&___nl__im__54);
#line 167
c_rt_lib0clear(&___nl__im__55);
#line 167
___nl__im_ptr__58 = &((*___ref___rec__2).logic0field);
#line 167
c_rt_lib0copy(&___nl__im__57, (*___nl__im_ptr__58));
#line 167
___nl__im_ptr__58 = NULL;
#line 167
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(387)));
#line 167
c_rt_lib0clear(&___nl__im__57);
#line 167
c_rt_lib0move(&___nl__im__52, translator_priv0unwrap_ref(___nl__im__53, ___nl__im__56));
#line 167
c_rt_lib0clear(&___nl__im__53);
#line 167
c_rt_lib0clear(&___nl__im__56);
#line 167
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__52, ___get_global_const(6)));
#line 167
c_rt_lib0clear(&___nl__im__45);
#line 167
c_rt_lib0clear(&___nl__im__52);
#line 168
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__44, ___nl__im__15));
#line 168
___nl__im_ptr__63 = &((*___ref___rec__2).logic0field);
#line 168
c_rt_lib0copy(&___nl__im__62, (*___nl__im_ptr__63));
#line 168
___nl__im_ptr__63 = NULL;
#line 168
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_const(387)));
#line 168
c_rt_lib0clear(&___nl__im__62);
#line 168
c_rt_lib0move(&___nl__im__59, translator_priv0unwrap_ref(___nl__im__60, ___nl__im__61));
#line 168
c_rt_lib0clear(&___nl__im__60);
#line 168
c_rt_lib0clear(&___nl__im__61);
#line 169
___nl__im_ptr__66 = &((*___ref___rec__2).logic0field);
#line 169
c_rt_lib0copy(&___nl__im__65, (*___nl__im_ptr__66));
#line 169
___nl__im_ptr__66 = NULL;
#line 169
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(387)));
#line 169
c_rt_lib0clear(&___nl__im__65);
#line 169
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__59, ___nl__im__64));
#line 169
c_rt_lib0clear(&___nl__im__64);
#line 170
goto label_6;
#line 170
label_8:
;
#line 170
label_6:
;
#line 170
//clear ___nl__bool__20;
#line 170
c_rt_lib0clear(&___nl__im__22);
#line 170
c_rt_lib0clear(&___nl__im__44);
#line 170
c_rt_lib0clear(&___nl__im__59);
#line 171
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(223)));
#line 171
c_rt_lib0move(&___nl__im__68, translator_priv0calc_val(___nl__im__69, ___ref___rec__2));
#line 171
c_rt_lib0clear(&___nl__im__69);
#line 171
c_rt_lib0move(&___nl__im__67, translator_priv0get_cast(___nl__im__68, ___nl__im__14, ___ref___rec__2));
#line 171
c_rt_lib0clear(&___nl__im__68);
#line 172
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(2, ___get_global_const(370), ___nl__im__15, ___get_global_const(223), ___nl__im__67));
#line 172
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__70));
#line 172
c_rt_lib0clear(&___nl__im__70);
#line 172
c_rt_lib0clear(&___nl__im__7);
#line 172
label_4:
;
#line 173
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 173
goto label_5;
#line 173
label_3:
;
#line 174
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__3));
#line 174
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__72));
#line 174
c_rt_lib0clear(&___nl__im__72);
#line 174
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__71));
#line 174
c_rt_lib0clear(&___nl__im__71);
#line 174
c_rt_lib0clear(&___nl__im__0);
#line 174
c_rt_lib0clear(&___nl__im__1);
#line 174
c_rt_lib0clear(&___nl__im__3);
#line 174
c_rt_lib0clear(&___nl__im__7);
#line 174
//clear ___nl__int__8;
#line 174
//clear ___nl__int__9;
#line 174
//clear ___nl__int__10;
#line 174
//clear ___nl__bool__11;
#line 174
//clear ___nl__int__12;
#line 174
c_rt_lib0clear(&___nl__im__13);
#line 174
c_rt_lib0clear(&___nl__im__14);
#line 174
c_rt_lib0clear(&___nl__im__15);
#line 174
c_rt_lib0clear(&___nl__im__67);
#line 174
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
#line 178
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(327)));
#line 180
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 180
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(516));
#line 180
c_rt_lib0clear(&___nl__im__6);
#line 180
___nl__bool__5 = !___nl__bool__5;
#line 180
if(___nl__bool__5){ goto label_2;}
#line 181
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 181
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 181
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(516)));
#line 181
c_rt_lib0clear(&___nl__im__8);
#line 181
c_rt_lib0clear(&___nl__im__9);
#line 181
___nl__im_ptr__12 = &((*___ref___rec__2).logic0field);
#line 181
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 181
___nl__im_ptr__12 = NULL;
#line 181
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(387)));
#line 181
c_rt_lib0clear(&___nl__im__11);
#line 181
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__7, ___nl__im__10));
#line 181
c_rt_lib0clear(&___nl__im__7);
#line 181
c_rt_lib0clear(&___nl__im__10);
#line 182
goto label_1;
#line 182
label_2:
;
#line 183
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 184
goto label_1;
#line 184
label_1:
;
#line 184
//clear ___nl__bool__5;
#line 185
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(462)));
#line 185
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(218)));
#line 185
c_rt_lib0clear(&___nl__im__15);
#line 185
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_const(881));
#line 185
c_rt_lib0clear(&___nl__im__14);
#line 185
___nl__bool__13 = !___nl__bool__13;
#line 185
___nl__bool__13 = !___nl__bool__13;
#line 185
if(___nl__bool__13){ goto label_4;}
#line 187
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 187
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(516));
#line 187
c_rt_lib0clear(&___nl__im__18);
#line 187
___nl__bool__17 = !___nl__bool__17;
#line 187
if(___nl__bool__17){ goto label_6;}
#line 188
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(14)));
#line 189
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 189
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__22));
#line 189
c_rt_lib0clear(&___nl__im__22);
#line 189
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 189
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__24));
#line 189
c_rt_lib0clear(&___nl__im__24);
#line 189
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__23, ___get_global_const(28)));
#line 189
c_rt_lib0clear(&___nl__im__21);
#line 189
c_rt_lib0clear(&___nl__im__23);
#line 189
___nl__im_ptr__27 = &((*___ref___rec__2).logic0field);
#line 189
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 189
___nl__im_ptr__27 = NULL;
#line 189
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(387)));
#line 189
c_rt_lib0clear(&___nl__im__26);
#line 189
c_rt_lib0move(&___nl__im__16, translator_priv0var_type_to_reg_type(___nl__im__20, ___nl__im__25));
#line 189
c_rt_lib0clear(&___nl__im__20);
#line 189
c_rt_lib0clear(&___nl__im__25);
#line 190
goto label_5;
#line 190
label_6:
;
#line 191
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 192
goto label_5;
#line 192
label_5:
;
#line 192
//clear ___nl__bool__17;
#line 192
c_rt_lib0clear(&___nl__im__19);
#line 193
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(462)));
#line 193
c_rt_lib0move(&___nl__im__29, translator_priv0dest_val(___nl__im__30, ___ref___rec__2));
#line 193
c_rt_lib0clear(&___nl__im__30);
#line 193
c_rt_lib0move(&___nl__im__28, translator_priv0get_cast(___nl__im__29, ___nl__im__16, ___ref___rec__2));
#line 193
c_rt_lib0clear(&___nl__im__29);
#line 193
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(276), ___nl__im__28));
#line 193
c_rt_lib0clear(&___nl__im__28);
#line 194
goto label_3;
#line 194
label_4:
;
#line 194
label_3:
;
#line 194
//clear ___nl__bool__13;
#line 194
c_rt_lib0clear(&___nl__im__16);
#line 195
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 195
___nl__int__31 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__4, ___nl__im__32);
#line 195
c_rt_lib0clear(&___nl__im__32);
#line 196
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 196
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__31));
#line 196
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(462)));
#line 196
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(204)));
#line 196
c_rt_lib0clear(&___nl__im__38);
#line 196
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(5, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__3, ___get_global_const(533), ___nl__im__35, ___get_global_const(520), ___nl__im__36, ___get_global_const(538), ___nl__im__37));
#line 196
c_rt_lib0clear(&___nl__im__35);
#line 196
c_rt_lib0clear(&___nl__im__36);
#line 196
c_rt_lib0clear(&___nl__im__37);
#line 196
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_const(244), ___nl__im__34));
#line 196
c_rt_lib0clear(&___nl__im__34);
#line 196
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__33));
#line 196
c_rt_lib0clear(&___nl__im__33);
#line 196
c_rt_lib0clear(&___nl__im__0);
#line 196
c_rt_lib0clear(&___nl__im__1);
#line 196
c_rt_lib0clear(&___nl__im__3);
#line 196
c_rt_lib0clear(&___nl__im__4);
#line 196
//clear ___nl__int__31;
#line 196
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
#line 201
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(453)));
#line 201
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 201
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 201
___nl__im_ptr__7 = NULL;
#line 201
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(387)));
#line 201
c_rt_lib0clear(&___nl__im__6);
#line 201
c_rt_lib0move(&___nl__im__3, translator_priv0var_type_to_reg_type(___nl__im__4, ___nl__im__5));
#line 201
c_rt_lib0clear(&___nl__im__4);
#line 201
c_rt_lib0clear(&___nl__im__5);
#line 202
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 202
c_rt_lib0move(&___nl__im__8, translator_priv0new_declaration(___nl__im__9, ___ref___rec__1, ___nl__im__3, ___nl__im__2));
#line 202
c_rt_lib0clear(&___nl__im__9);
#line 203
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 203
c_rt_lib0move(&___nl__im__11,___get_global_const(719));
#line 203
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 203
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(453)));
#line 203
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(204), ___nl__im__13, ___get_global_const(430), ___nl__im__8));
#line 203
c_rt_lib0clear(&___nl__im__13);
#line 203
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 203
c_rt_lib0move(&___nl__string__14,___get_global_const(719));
#line 203
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__14, ___nl__im__11));
#line 203
___nl__im_ptr__10 = NULL;
#line 203
c_rt_lib0clear(&___nl__im__11);
#line 203
c_rt_lib0clear(&___nl__im__12);
#line 203
c_rt_lib0clear(&___nl__string__14);
#line 204
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 204
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(73));
#line 204
if(___nl__bool__16){ goto label_2;}
#line 205
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(218));
#line 205
if(___nl__bool__16){ goto label_3;}
#line 205
c_rt_lib0move(&___nl__im__17,___get_global_const(16));
#line 205
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 205
nl_die_arg(___nl__im__17);
#line 204
label_2:
;
#line 205
goto label_1;
#line 205
label_3:
;
#line 205
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(218)));
#line 205
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 206
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(204)));
#line 206
___nl__im_ptr__24 = &((*___ref___rec__1).logic0field);
#line 206
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 206
___nl__im_ptr__24 = NULL;
#line 206
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(387)));
#line 206
c_rt_lib0clear(&___nl__im__23);
#line 206
___nl__bool__20 = tct0is_own_type(___nl__im__21, ___nl__im__22);
#line 206
c_rt_lib0clear(&___nl__im__21);
#line 206
c_rt_lib0clear(&___nl__im__22);
#line 206
___nl__bool__20 = !___nl__bool__20;
#line 206
if(___nl__bool__20){ goto label_5;}
#line 207
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 208
goto label_4;
#line 208
label_5:
;
#line 209
c_rt_lib0delete(translator_priv0print_val(___nl__im__18, ___nl__im__8, ___ref___rec__1));
#line 210
goto label_4;
#line 210
label_4:
;
#line 210
//clear ___nl__bool__20;
#line 211
goto label_1;
#line 211
label_1:
;
#line 212
c_rt_lib0clear(&___nl__im__0);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__3);
#line 212
c_rt_lib0clear(&___nl__im__15);
#line 212
//clear ___nl__bool__16;
#line 212
c_rt_lib0clear(&___nl__im__17);
#line 212
c_rt_lib0clear(&___nl__im__18);
#line 212
c_rt_lib0clear(&___nl__im__19);
#line 212
return ___nl__im__8;
}

ImmT  translator_priv0load_const(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 216
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__1, ___get_global_const(223), ___nl__im__0));
#line 216
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__im__4));
#line 216
c_rt_lib0clear(&___nl__im__4);
#line 216
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 216
c_rt_lib0clear(&___nl__im__3);
#line 216
c_rt_lib0clear(&___nl__im__0);
#line 216
c_rt_lib0clear(&___nl__im__1);
#line 216
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
#line 220
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 220
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 220
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 220
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(1233), ___nl__im__3, ___get_global_const(1234), ___nl__im__4, ___get_global_const(1235), ___nl__im__5));
#line 220
c_rt_lib0clear(&___nl__im__3);
#line 220
c_rt_lib0clear(&___nl__im__4);
#line 220
c_rt_lib0clear(&___nl__im__5);
#line 220
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 220
c_rt_lib0clear(&___nl__im__2);
#line 220
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 220
c_rt_lib0clear(&___nl__im__1);
#line 220
return ___nl__im__0;
#line 220
c_rt_lib0clear(&___nl__im__0);
#line 220
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
#line 224
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 225
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(0));
#line 226
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(0));
#line 227
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 228
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(0));
#line 229
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(264)));
#line 229
___nl__int__10 = c_rt_lib0array_len(___nl__im__11);
#line 229
c_rt_lib0clear(&___nl__im__11);
#line 229
___nl__int__12 = 1;
#line 229
___nl__int__9 = ___nl__int__10 - ___nl__int__12;
#line 229
//clear ___nl__int__10;
#line 229
//clear ___nl__int__12;
#line 229
label_2:
;
#line 229
___nl__int__14 = 0;
#line 229
___nl__int__15 = ___nl__int__9 >= ___nl__int__14;
#line 229
___nl__bool__13 = ___nl__int__15;
#line 229
//clear ___nl__int__14;
#line 229
//clear ___nl__int__15;
#line 229
___nl__bool__13 = !___nl__bool__13;
#line 229
if(___nl__bool__13){ goto label_1;}
#line 230
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(264)));
#line 230
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__19, ___nl__int__9));
#line 230
c_rt_lib0clear(&___nl__im__19);
#line 230
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(265)));
#line 230
c_rt_lib0clear(&___nl__im__18);
#line 230
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(40));
#line 230
c_rt_lib0clear(&___nl__im__17);
#line 230
___nl__bool__16 = !___nl__bool__16;
#line 230
___nl__bool__16 = !___nl__bool__16;
#line 230
if(___nl__bool__16){ goto label_5;}
#line 230
goto label_3;
#line 230
goto label_4;
#line 230
label_5:
;
#line 230
label_4:
;
#line 230
//clear ___nl__bool__16;
#line 231
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(264)));
#line 231
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__22, ___nl__int__9));
#line 231
c_rt_lib0clear(&___nl__im__22);
#line 231
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(223)));
#line 231
c_rt_lib0clear(&___nl__im__21);
#line 232
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__im__20, ___ref___rec__3));
#line 233
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(218)));
#line 233
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(218)));
#line 233
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_const(462)));
#line 233
c_rt_lib0clear(&___nl__im__25);
#line 233
c_rt_lib0clear(&___nl__im__26);
#line 233
___nl__bool__23 = hash0has_key(___nl__im__8, ___nl__im__24);
#line 233
c_rt_lib0clear(&___nl__im__24);
#line 233
___nl__bool__23 = !___nl__bool__23;
#line 233
if(___nl__bool__23){ goto label_7;}
#line 233
goto label_3;
#line 233
goto label_6;
#line 233
label_7:
;
#line 233
label_6:
;
#line 233
//clear ___nl__bool__23;
#line 234
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(218)));
#line 234
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(218)));
#line 234
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__29, ___get_global_const(462)));
#line 234
c_rt_lib0clear(&___nl__im__28);
#line 234
c_rt_lib0clear(&___nl__im__29);
#line 234
___nl__int__30 = 0;
#line 234
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__30));
#line 234
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__27, ___nl__im__31));
#line 234
c_rt_lib0clear(&___nl__im__27);
#line 234
//clear ___nl__int__30;
#line 234
c_rt_lib0clear(&___nl__im__31);
#line 235
c_rt_lib0move(&___nl__im__32, ptd0int_to_string(___nl__int__9));
#line 235
___nl__int__33 = 0;
#line 235
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__33));
#line 235
c_rt_lib0delete(hash0set_value(&___nl__im__7, ___nl__im__32, ___nl__im__34));
#line 235
c_rt_lib0clear(&___nl__im__32);
#line 235
//clear ___nl__int__33;
#line 235
c_rt_lib0clear(&___nl__im__34);
#line 235
c_rt_lib0clear(&___nl__im__20);
#line 235
label_3:
;
#line 229
___nl__int__35 = 1;
#line 229
___nl__int__9 = ___nl__int__9 - ___nl__int__35;
#line 229
//clear ___nl__int__35;
#line 236
goto label_2;
#line 236
label_1:
;
#line 237
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(0));
#line 238
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(264)));
#line 238
___nl__int__37 = c_rt_lib0array_len(___nl__im__38);
#line 238
c_rt_lib0clear(&___nl__im__38);
#line 238
___nl__int__39 = 0;
#line 238
___nl__int__40 = 1;
#line 238
label_10:
;
#line 238
___nl__int__42 = ___nl__int__39 >= ___nl__int__37;
#line 238
___nl__bool__41 = ___nl__int__42;
#line 238
if(___nl__bool__41){ goto label_8;}
#line 239
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(264)));
#line 239
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get(___nl__im__44, ___nl__int__39));
#line 239
c_rt_lib0clear(&___nl__im__44);
#line 240
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(265)));
#line 240
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(73));
#line 240
if(___nl__bool__46){ goto label_12;}
#line 244
___nl__bool__46 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(40));
#line 244
if(___nl__bool__46){ goto label_13;}
#line 244
c_rt_lib0move(&___nl__im__47,___get_global_const(16));
#line 244
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(2, ___nl__im__47, ___nl__im__45));
#line 244
nl_die_arg(___nl__im__47);
#line 240
label_12:
;
#line 241
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(223)));
#line 241
c_rt_lib0move(&___nl__im__48, translator_priv0calc_val(___nl__im__49, ___ref___rec__3));
#line 241
c_rt_lib0clear(&___nl__im__49);
#line 242
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(932)));
#line 242
___nl__im_ptr__55 = &((*___ref___rec__3).logic0field);
#line 242
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 242
___nl__im_ptr__55 = NULL;
#line 242
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(387)));
#line 242
c_rt_lib0clear(&___nl__im__54);
#line 242
c_rt_lib0move(&___nl__im__51, translator_priv0var_type_to_reg_type(___nl__im__52, ___nl__im__53));
#line 242
c_rt_lib0clear(&___nl__im__52);
#line 242
c_rt_lib0clear(&___nl__im__53);
#line 242
c_rt_lib0move(&___nl__im__50, translator_priv0get_cast(___nl__im__48, ___nl__im__51, ___ref___rec__3));
#line 242
c_rt_lib0clear(&___nl__im__51);
#line 243
c_rt_lib0move(&___nl__im__56, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__50));
#line 243
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__56));
#line 243
c_rt_lib0clear(&___nl__im__56);
#line 244
goto label_11;
#line 244
label_13:
;
#line 245
c_rt_lib0move(&___nl__im__58, ptd0int_to_string(___nl__int__39));
#line 245
___nl__bool__57 = hash0has_key(___nl__im__7, ___nl__im__58);
#line 245
c_rt_lib0clear(&___nl__im__58);
#line 245
___nl__bool__57 = !___nl__bool__57;
#line 245
if(___nl__bool__57){ goto label_15;}
#line 246
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(223)));
#line 246
___nl__bool__61 = true;
#line 246
c_rt_lib0move(&___nl__im__59, translator_priv0get_value_of_lvalue(___nl__im__60, ___nl__bool__61, ___ref___rec__3));
#line 246
c_rt_lib0clear(&___nl__im__60);
#line 246
//clear ___nl__bool__61;
#line 247
___nl__int__65 = c_rt_lib0array_len(___nl__im__59);
#line 247
___nl__int__66 = 1;
#line 247
___nl__int__64 = ___nl__int__65 - ___nl__int__66;
#line 247
//clear ___nl__int__65;
#line 247
//clear ___nl__int__66;
#line 247
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_get(___nl__im__59, ___nl__int__64));
#line 247
//clear ___nl__int__64;
#line 247
___nl__int__69 = c_rt_lib0array_len(___nl__im__59);
#line 247
___nl__int__70 = 1;
#line 247
___nl__int__68 = ___nl__int__69 - ___nl__int__70;
#line 247
//clear ___nl__int__69;
#line 247
//clear ___nl__int__70;
#line 247
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__59, ___nl__int__68));
#line 247
//clear ___nl__int__68;
#line 247
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__67, ___get_global_const(218)));
#line 247
c_rt_lib0clear(&___nl__im__63);
#line 247
c_rt_lib0clear(&___nl__im__67);
#line 248
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(932)));
#line 249
___nl__im_ptr__75 = &((*___ref___rec__3).logic0field);
#line 249
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 249
___nl__im_ptr__75 = NULL;
#line 249
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_const(387)));
#line 249
c_rt_lib0clear(&___nl__im__74);
#line 249
c_rt_lib0move(&___nl__im__71, translator_priv0var_type_to_reg_type(___nl__im__72, ___nl__im__73));
#line 249
c_rt_lib0clear(&___nl__im__72);
#line 249
c_rt_lib0clear(&___nl__im__73);
#line 250
c_rt_lib0move(&___nl__im__76, translator_priv0get_cast(___nl__im__62, ___nl__im__71, ___ref___rec__3));
#line 251
c_rt_lib0move(&___nl__im__77, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__76));
#line 251
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__77));
#line 251
c_rt_lib0clear(&___nl__im__77);
#line 252
c_rt_lib0move(&___nl__im__79, ptd0int_to_string(___nl__int__39));
#line 252
c_rt_lib0copy(&___nl__im__78, ___nl__im__59);
#line 252
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__79, ___nl__im__78));
#line 252
c_rt_lib0clear(&___nl__im__78);
#line 252
c_rt_lib0clear(&___nl__im__79);
#line 253
___nl__bool__80 = nlasm0eq_reg(___nl__im__62, ___nl__im__76);
#line 253
___nl__bool__80 = !___nl__bool__80;
#line 253
___nl__bool__80 = !___nl__bool__80;
#line 253
if(___nl__bool__80){ goto label_17;}
#line 254
c_rt_lib0move(&___nl__im__82, ptd0int_to_string(___nl__int__39));
#line 254
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_mk(2, ___get_global_const(1236), ___nl__im__62, ___get_global_const(1237), ___nl__im__76));
#line 254
c_rt_lib0copy(&___nl__im__81, ___nl__im__83);
#line 254
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__82, ___nl__im__81));
#line 254
c_rt_lib0clear(&___nl__im__81);
#line 254
c_rt_lib0clear(&___nl__im__82);
#line 254
c_rt_lib0clear(&___nl__im__83);
#line 255
goto label_16;
#line 255
label_17:
;
#line 255
label_16:
;
#line 255
//clear ___nl__bool__80;
#line 256
goto label_14;
#line 256
label_15:
;
#line 257
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(223)));
#line 257
c_rt_lib0move(&___nl__im__85, translator_priv0value_type_to_reg_type(___nl__im__86, ___ref___rec__3));
#line 257
c_rt_lib0clear(&___nl__im__86);
#line 257
c_rt_lib0move(&___nl__im__84, translator_priv0new_register(___ref___rec__3, ___nl__im__85));
#line 257
c_rt_lib0clear(&___nl__im__85);
#line 258
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__43, ___get_global_const(223)));
#line 258
c_rt_lib0delete(translator_priv0print_val(___nl__im__87, ___nl__im__84, ___ref___rec__3));
#line 258
c_rt_lib0clear(&___nl__im__87);
#line 259
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__84));
#line 259
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__88));
#line 259
c_rt_lib0clear(&___nl__im__88);
#line 260
goto label_14;
#line 260
label_14:
;
#line 260
//clear ___nl__bool__57;
#line 260
c_rt_lib0clear(&___nl__im__59);
#line 260
c_rt_lib0clear(&___nl__im__62);
#line 260
c_rt_lib0clear(&___nl__im__71);
#line 260
c_rt_lib0clear(&___nl__im__76);
#line 260
c_rt_lib0clear(&___nl__im__84);
#line 261
goto label_11;
#line 261
label_11:
;
#line 262
c_rt_lib0move(&___nl__im__89, translator_priv0save_registers(___ref___rec__3));
#line 262
c_rt_lib0delete(array0push(&___nl__im__36, ___nl__im__89));
#line 262
c_rt_lib0clear(&___nl__im__89);
#line 262
c_rt_lib0clear(&___nl__im__43);
#line 262
c_rt_lib0clear(&___nl__im__45);
#line 262
//clear ___nl__bool__46;
#line 262
c_rt_lib0clear(&___nl__im__47);
#line 262
c_rt_lib0clear(&___nl__im__48);
#line 262
c_rt_lib0clear(&___nl__im__50);
#line 262
label_9:
;
#line 263
___nl__int__39 = ___nl__int__39 + ___nl__int__40;
#line 263
goto label_10;
#line 263
label_8:
;
#line 264
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(150)));
#line 264
c_rt_lib0move(&___nl__im__93,___get_global_const(1238));
#line 264
___nl__bool__90 = c_rt_lib0eq(___nl__im__92, ___nl__im__93);
#line 264
c_rt_lib0clear(&___nl__im__92);
#line 264
c_rt_lib0clear(&___nl__im__93);
#line 264
___nl__bool__91 = !___nl__bool__90;
#line 264
if(___nl__bool__91){ goto label_20;}
#line 264
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 264
c_rt_lib0move(&___nl__im__95,___get_global_const(282));
#line 264
___nl__bool__90 = c_rt_lib0eq(___nl__im__94, ___nl__im__95);
#line 264
c_rt_lib0clear(&___nl__im__94);
#line 264
c_rt_lib0clear(&___nl__im__95);
#line 264
label_20:
;
#line 264
//clear ___nl__bool__91;
#line 264
___nl__bool__90 = !___nl__bool__90;
#line 264
if(___nl__bool__90){ goto label_19;}
#line 265
___nl__int__100 = 0;
#line 265
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_get(___nl__im__4, ___nl__int__100));
#line 265
//clear ___nl__int__100;
#line 265
___nl__int__102 = 0;
#line 265
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_get(___nl__im__4, ___nl__int__102));
#line 265
//clear ___nl__int__102;
#line 265
c_rt_lib0move(&___nl__im__98, c_rt_lib0priv_as(___nl__im__101, ___get_global_const(40)));
#line 265
c_rt_lib0clear(&___nl__im__99);
#line 265
c_rt_lib0clear(&___nl__im__101);
#line 265
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__98));
#line 265
c_rt_lib0clear(&___nl__im__98);
#line 265
c_rt_lib0move(&___nl__im__96, c_rt_lib0ov_mk_arg(___get_global_const(241), ___nl__im__97));
#line 265
c_rt_lib0clear(&___nl__im__97);
#line 265
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__96));
#line 265
c_rt_lib0clear(&___nl__im__96);
#line 266
goto label_18;
#line 266
label_19:
;
#line 266
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(150)));
#line 266
c_rt_lib0move(&___nl__im__105,___get_global_const(38));
#line 266
___nl__bool__90 = c_rt_lib0eq(___nl__im__104, ___nl__im__105);
#line 266
c_rt_lib0clear(&___nl__im__104);
#line 266
c_rt_lib0clear(&___nl__im__105);
#line 266
___nl__bool__103 = !___nl__bool__90;
#line 266
if(___nl__bool__103){ goto label_22;}
#line 266
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 266
c_rt_lib0move(&___nl__im__107,___get_global_const(282));
#line 266
___nl__bool__90 = c_rt_lib0eq(___nl__im__106, ___nl__im__107);
#line 266
c_rt_lib0clear(&___nl__im__106);
#line 266
c_rt_lib0clear(&___nl__im__107);
#line 266
label_22:
;
#line 266
//clear ___nl__bool__103;
#line 266
___nl__bool__90 = !___nl__bool__90;
#line 266
if(___nl__bool__90){ goto label_21;}
#line 267
___nl__int__112 = 0;
#line 267
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_get(___nl__im__4, ___nl__int__112));
#line 267
//clear ___nl__int__112;
#line 267
___nl__int__114 = 0;
#line 267
c_rt_lib0move(&___nl__im__113, c_rt_lib0array_get(___nl__im__4, ___nl__int__114));
#line 267
//clear ___nl__int__114;
#line 267
c_rt_lib0move(&___nl__im__110, c_rt_lib0priv_as(___nl__im__113, ___get_global_const(223)));
#line 267
c_rt_lib0clear(&___nl__im__111);
#line 267
c_rt_lib0clear(&___nl__im__113);
#line 267
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__110));
#line 267
c_rt_lib0clear(&___nl__im__110);
#line 267
c_rt_lib0move(&___nl__im__108, c_rt_lib0ov_mk_arg(___get_global_const(241), ___nl__im__109));
#line 267
c_rt_lib0clear(&___nl__im__109);
#line 267
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__108));
#line 267
c_rt_lib0clear(&___nl__im__108);
#line 268
goto label_18;
#line 268
label_21:
;
#line 268
___nl__bool__90 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(8));
#line 268
___nl__bool__90 = !___nl__bool__90;
#line 268
___nl__bool__90 = !___nl__bool__90;
#line 268
if(___nl__bool__90){ goto label_23;}
#line 269
___nl__im_ptr__118 = &((*___ref___rec__3).logic0field);
#line 269
c_rt_lib0copy(&___nl__im__117, (*___nl__im_ptr__118));
#line 269
___nl__im_ptr__118 = NULL;
#line 269
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_get_value_dec(___nl__im__117, ___get_global_const(387)));
#line 269
c_rt_lib0clear(&___nl__im__117);
#line 269
c_rt_lib0move(&___nl__im__115, translator_priv0var_type_to_reg_type(___nl__im__2, ___nl__im__116));
#line 269
c_rt_lib0clear(&___nl__im__116);
#line 270
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 270
___nl__bool__119 = nlasm0eq_reg_type(___nl__im__115, ___nl__im__120);
#line 270
c_rt_lib0clear(&___nl__im__120);
#line 270
___nl__bool__119 = !___nl__bool__119;
#line 271
c_rt_lib0copy(&___nl__im__121, ___nl__im__1);
#line 272
___nl__bool__122 = ___nl__bool__119;
#line 272
___nl__bool__122 = !___nl__bool__122;
#line 272
if(___nl__bool__122){ goto label_25;}
#line 272
c_rt_lib0move(&___nl__im__121, translator_priv0new_register(___ref___rec__3, ___nl__im__115));
#line 272
goto label_24;
#line 272
label_25:
;
#line 272
label_24:
;
#line 272
//clear ___nl__bool__122;
#line 273
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(150)));
#line 273
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 273
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__121, ___get_global_const(265), ___nl__im__125, ___get_global_const(267), ___nl__im__126, ___get_global_const(264), ___nl__im__4));
#line 273
c_rt_lib0clear(&___nl__im__125);
#line 273
c_rt_lib0clear(&___nl__im__126);
#line 273
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__124));
#line 273
c_rt_lib0clear(&___nl__im__124);
#line 273
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__123));
#line 273
c_rt_lib0clear(&___nl__im__123);
#line 274
___nl__bool__127 = ___nl__bool__119;
#line 274
___nl__bool__127 = !___nl__bool__127;
#line 274
if(___nl__bool__127){ goto label_27;}
#line 274
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__121, ___ref___rec__3));
#line 274
goto label_26;
#line 274
label_27:
;
#line 274
label_26:
;
#line 274
//clear ___nl__bool__127;
#line 275
goto label_18;
#line 275
label_23:
;
#line 276
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(150)));
#line 276
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(166)));
#line 276
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__1, ___get_global_const(265), ___nl__im__130, ___get_global_const(267), ___nl__im__131, ___get_global_const(264), ___nl__im__4));
#line 276
c_rt_lib0clear(&___nl__im__130);
#line 276
c_rt_lib0clear(&___nl__im__131);
#line 276
c_rt_lib0move(&___nl__im__128, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__129));
#line 276
c_rt_lib0clear(&___nl__im__129);
#line 276
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__128));
#line 276
c_rt_lib0clear(&___nl__im__128);
#line 277
goto label_18;
#line 277
label_18:
;
#line 277
//clear ___nl__bool__90;
#line 277
c_rt_lib0clear(&___nl__im__115);
#line 277
//clear ___nl__bool__119;
#line 277
c_rt_lib0clear(&___nl__im__121);
#line 278
___nl__int__133 = c_rt_lib0array_len(___nl__im__36);
#line 278
___nl__int__134 = 1;
#line 278
___nl__int__132 = ___nl__int__133 - ___nl__int__134;
#line 278
//clear ___nl__int__133;
#line 278
//clear ___nl__int__134;
#line 278
label_29:
;
#line 278
___nl__int__136 = 0;
#line 278
___nl__int__137 = ___nl__int__132 >= ___nl__int__136;
#line 278
___nl__bool__135 = ___nl__int__137;
#line 278
//clear ___nl__int__136;
#line 278
//clear ___nl__int__137;
#line 278
___nl__bool__135 = !___nl__bool__135;
#line 278
if(___nl__bool__135){ goto label_28;}
#line 279
c_rt_lib0move(&___nl__im__138, ptd0int_to_string(___nl__int__132));
#line 280
___nl__bool__139 = hash0has_key(___nl__im__5, ___nl__im__138);
#line 280
___nl__bool__139 = !___nl__bool__139;
#line 280
___nl__bool__139 = !___nl__bool__139;
#line 280
if(___nl__bool__139){ goto label_32;}
#line 280
goto label_30;
#line 280
goto label_31;
#line 280
label_32:
;
#line 280
label_31:
;
#line 280
//clear ___nl__bool__139;
#line 281
___nl__bool__140 = hash0has_key(___nl__im__6, ___nl__im__138);
#line 281
___nl__bool__140 = !___nl__bool__140;
#line 281
if(___nl__bool__140){ goto label_34;}
#line 282
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__138));
#line 282
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__142, ___get_global_const(1236)));
#line 282
c_rt_lib0clear(&___nl__im__142);
#line 282
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__138));
#line 282
c_rt_lib0move(&___nl__im__143, c_rt_lib0hash_get_value_dec(___nl__im__144, ___get_global_const(1237)));
#line 282
c_rt_lib0clear(&___nl__im__144);
#line 282
c_rt_lib0delete(translator_priv0move(___nl__im__141, ___nl__im__143, ___ref___rec__3));
#line 282
c_rt_lib0clear(&___nl__im__141);
#line 282
c_rt_lib0clear(&___nl__im__143);
#line 283
goto label_33;
#line 283
label_34:
;
#line 283
label_33:
;
#line 283
//clear ___nl__bool__140;
#line 284
c_rt_lib0move(&___nl__im__146, ptd0int_to_string(___nl__int__132));
#line 284
c_rt_lib0move(&___nl__im__145, hash0get_value(___nl__im__5, ___nl__im__146));
#line 284
c_rt_lib0clear(&___nl__im__146);
#line 284
___nl__bool__147 = true;
#line 284
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__145, ___nl__bool__147, ___ref___rec__3));
#line 284
c_rt_lib0clear(&___nl__im__145);
#line 284
//clear ___nl__bool__147;
#line 284
c_rt_lib0clear(&___nl__im__138);
#line 284
label_30:
;
#line 278
___nl__int__148 = 1;
#line 278
___nl__int__132 = ___nl__int__132 - ___nl__int__148;
#line 278
//clear ___nl__int__148;
#line 285
goto label_29;
#line 285
label_28:
;
#line 285
c_rt_lib0clear(&___nl__im__0);
#line 285
c_rt_lib0clear(&___nl__im__1);
#line 285
c_rt_lib0clear(&___nl__im__2);
#line 285
c_rt_lib0clear(&___nl__im__4);
#line 285
c_rt_lib0clear(&___nl__im__5);
#line 285
c_rt_lib0clear(&___nl__im__6);
#line 285
c_rt_lib0clear(&___nl__im__7);
#line 285
c_rt_lib0clear(&___nl__im__8);
#line 285
//clear ___nl__int__9;
#line 285
//clear ___nl__bool__13;
#line 285
c_rt_lib0clear(&___nl__im__20);
#line 285
c_rt_lib0clear(&___nl__im__36);
#line 285
//clear ___nl__int__37;
#line 285
//clear ___nl__int__39;
#line 285
//clear ___nl__int__40;
#line 285
//clear ___nl__bool__41;
#line 285
//clear ___nl__int__42;
#line 285
c_rt_lib0clear(&___nl__im__43);
#line 285
c_rt_lib0clear(&___nl__im__45);
#line 285
//clear ___nl__bool__46;
#line 285
c_rt_lib0clear(&___nl__im__47);
#line 285
c_rt_lib0clear(&___nl__im__48);
#line 285
c_rt_lib0clear(&___nl__im__50);
#line 285
//clear ___nl__int__132;
#line 285
//clear ___nl__bool__135;
#line 285
c_rt_lib0clear(&___nl__im__138);
#line 285
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
#line 289
___nl__im_ptr__3 = &((*___ref___rec__2).debug0field);
#line 289
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 289
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 289
c_rt_lib0hash_set_value_dec(___nl__im_ptr__3, ___get_global_const(504), ___nl__im__4);
#line 289
___nl__im_ptr__3 = NULL;
#line 289
c_rt_lib0clear(&___nl__im__4);
#line 289
c_rt_lib0clear(&___nl__im__5);
#line 290
c_rt_lib0move(&___nl__im__6, translator_priv0save_registers(___ref___rec__2));
#line 291
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 291
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(221));
#line 291
if(___nl__bool__8){ goto label_2;}
#line 293
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(526));
#line 293
if(___nl__bool__8){ goto label_3;}
#line 295
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(902));
#line 295
if(___nl__bool__8){ goto label_4;}
#line 297
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(903));
#line 297
if(___nl__bool__8){ goto label_5;}
#line 299
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(516));
#line 299
if(___nl__bool__8){ goto label_6;}
#line 301
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(462));
#line 301
if(___nl__bool__8){ goto label_7;}
#line 303
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(900));
#line 303
if(___nl__bool__8){ goto label_8;}
#line 305
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(233));
#line 305
if(___nl__bool__8){ goto label_9;}
#line 307
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(904));
#line 307
if(___nl__bool__8){ goto label_10;}
#line 309
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(861));
#line 309
if(___nl__bool__8){ goto label_11;}
#line 311
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(229));
#line 311
if(___nl__bool__8){ goto label_12;}
#line 313
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(230));
#line 313
if(___nl__bool__8){ goto label_13;}
#line 315
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(881));
#line 315
if(___nl__bool__8){ goto label_14;}
#line 316
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(905));
#line 316
if(___nl__bool__8){ goto label_15;}
#line 318
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(906));
#line 318
if(___nl__bool__8){ goto label_16;}
#line 320
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(907));
#line 320
if(___nl__bool__8){ goto label_17;}
#line 320
c_rt_lib0move(&___nl__im__9,___get_global_const(16));
#line 320
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 320
nl_die_arg(___nl__im__9);
#line 291
label_2:
;
#line 291
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(221)));
#line 291
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 292
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__10));
#line 292
c_rt_lib0delete(translator_priv0load_const(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 292
c_rt_lib0clear(&___nl__im__12);
#line 293
goto label_1;
#line 293
label_3:
;
#line 293
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(526)));
#line 293
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 294
c_rt_lib0move(&___nl__im__15, translator_priv0make_string(___nl__im__13, ___ref___rec__2));
#line 294
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__1, ___ref___rec__2));
#line 294
c_rt_lib0clear(&___nl__im__15);
#line 295
goto label_1;
#line 295
label_4:
;
#line 295
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(902)));
#line 295
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 296
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 297
goto label_1;
#line 297
label_5:
;
#line 297
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(903)));
#line 297
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 298
c_rt_lib0delete(translator_priv0load_const(___nl__im__18, ___nl__im__1, ___ref___rec__2));
#line 299
goto label_1;
#line 299
label_6:
;
#line 299
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(516)));
#line 299
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 300
c_rt_lib0delete(translator_priv0print_variant(___nl__im__20, ___nl__im__1, ___ref___rec__2));
#line 301
goto label_1;
#line 301
label_7:
;
#line 301
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(462)));
#line 301
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 302
c_rt_lib0delete(translator_priv0print_variable(___nl__im__22, ___nl__im__1, ___ref___rec__2));
#line 303
goto label_1;
#line 303
label_8:
;
#line 303
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(900)));
#line 303
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 304
c_rt_lib0delete(translator_priv0print_val(___nl__im__24, ___nl__im__1, ___ref___rec__2));
#line 305
goto label_1;
#line 305
label_9:
;
#line 305
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(233)));
#line 305
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 306
c_rt_lib0delete(translator_priv0print_bin_op(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 307
goto label_1;
#line 307
label_10:
;
#line 307
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(904)));
#line 307
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 308
c_rt_lib0delete(translator_priv0print_unary_op(___nl__im__28, ___nl__im__1, ___ref___rec__2));
#line 309
goto label_1;
#line 309
label_11:
;
#line 309
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(861)));
#line 309
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 310
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 310
c_rt_lib0delete(translator_priv0print_fun_val(___nl__im__30, ___nl__im__1, ___nl__im__32, ___ref___rec__2));
#line 310
c_rt_lib0clear(&___nl__im__32);
#line 311
goto label_1;
#line 311
label_12:
;
#line 311
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(229)));
#line 311
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 312
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__im__33, ___nl__im__1, ___ref___rec__2));
#line 313
goto label_1;
#line 313
label_13:
;
#line 313
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(230)));
#line 313
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 314
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__im__35, ___nl__im__1, ___ref___rec__2));
#line 315
goto label_1;
#line 315
label_14:
;
#line 316
goto label_1;
#line 316
label_15:
;
#line 316
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(905)));
#line 316
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 317
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 317
nl_die_arg(___nl__im__39);
#line 318
goto label_1;
#line 318
label_16:
;
#line 318
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(906)));
#line 318
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 319
c_rt_lib0move(&___nl__im__42,___get_global_const(923));
#line 319
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__40, ___nl__im__42, ___nl__im__1, ___ref___rec__2));
#line 319
c_rt_lib0clear(&___nl__im__42);
#line 320
goto label_1;
#line 320
label_17:
;
#line 320
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(907)));
#line 320
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 321
c_rt_lib0move(&___nl__im__45,___get_global_const(189));
#line 321
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__43, ___nl__im__45, ___nl__im__1, ___ref___rec__2));
#line 321
c_rt_lib0clear(&___nl__im__45);
#line 322
goto label_1;
#line 322
label_1:
;
#line 323
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__6, ___ref___rec__2));
#line 323
c_rt_lib0clear(&___nl__im__0);
#line 323
c_rt_lib0clear(&___nl__im__1);
#line 323
c_rt_lib0clear(&___nl__im__6);
#line 323
c_rt_lib0clear(&___nl__im__7);
#line 323
//clear ___nl__bool__8;
#line 323
c_rt_lib0clear(&___nl__im__9);
#line 323
//clear ___nl__int__10;
#line 323
c_rt_lib0clear(&___nl__im__11);
#line 323
c_rt_lib0clear(&___nl__im__13);
#line 323
c_rt_lib0clear(&___nl__im__14);
#line 323
c_rt_lib0clear(&___nl__im__16);
#line 323
c_rt_lib0clear(&___nl__im__17);
#line 323
c_rt_lib0clear(&___nl__im__18);
#line 323
c_rt_lib0clear(&___nl__im__19);
#line 323
c_rt_lib0clear(&___nl__im__20);
#line 323
c_rt_lib0clear(&___nl__im__21);
#line 323
c_rt_lib0clear(&___nl__im__22);
#line 323
c_rt_lib0clear(&___nl__im__23);
#line 323
c_rt_lib0clear(&___nl__im__24);
#line 323
c_rt_lib0clear(&___nl__im__25);
#line 323
c_rt_lib0clear(&___nl__im__26);
#line 323
c_rt_lib0clear(&___nl__im__27);
#line 323
c_rt_lib0clear(&___nl__im__28);
#line 323
c_rt_lib0clear(&___nl__im__29);
#line 323
c_rt_lib0clear(&___nl__im__30);
#line 323
c_rt_lib0clear(&___nl__im__31);
#line 323
c_rt_lib0clear(&___nl__im__33);
#line 323
c_rt_lib0clear(&___nl__im__34);
#line 323
c_rt_lib0clear(&___nl__im__35);
#line 323
c_rt_lib0clear(&___nl__im__36);
#line 323
c_rt_lib0clear(&___nl__im__37);
#line 323
c_rt_lib0clear(&___nl__im__38);
#line 323
c_rt_lib0clear(&___nl__im__39);
#line 323
c_rt_lib0clear(&___nl__im__40);
#line 323
c_rt_lib0clear(&___nl__im__41);
#line 323
c_rt_lib0clear(&___nl__im__43);
#line 323
c_rt_lib0clear(&___nl__im__44);
#line 323
return NULL;
}

ImmT  translator_priv0print_variable(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 327
c_rt_lib0move(&___nl__im__3, translator_priv0get_var_register(___nl__im__0, ___ref___rec__2));
#line 327
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__3, ___ref___rec__2));
#line 327
c_rt_lib0clear(&___nl__im__3);
#line 327
c_rt_lib0clear(&___nl__im__0);
#line 327
c_rt_lib0clear(&___nl__im__1);
#line 327
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
#line 332
___nl__bool__5 = true;
#line 332
c_rt_lib0move(&___nl__im__4, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__5, ___ref___rec__3));
#line 332
//clear ___nl__bool__5;
#line 333
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 333
___nl__int__10 = 1;
#line 333
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 333
//clear ___nl__int__9;
#line 333
//clear ___nl__int__10;
#line 333
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__4, ___nl__int__8));
#line 333
//clear ___nl__int__8;
#line 333
___nl__int__13 = c_rt_lib0array_len(___nl__im__4);
#line 333
___nl__int__14 = 1;
#line 333
___nl__int__12 = ___nl__int__13 - ___nl__int__14;
#line 333
//clear ___nl__int__13;
#line 333
//clear ___nl__int__14;
#line 333
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__12));
#line 333
//clear ___nl__int__12;
#line 333
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__11, ___get_global_const(218)));
#line 333
c_rt_lib0clear(&___nl__im__7);
#line 333
c_rt_lib0clear(&___nl__im__11);
#line 334
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__6, ___ref___rec__3));
#line 335
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 335
___nl__int__19 = 1;
#line 335
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 335
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__im__20));
#line 335
//clear ___nl__int__19;
#line 335
c_rt_lib0clear(&___nl__im__20);
#line 335
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 335
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__17, ___get_global_const(218), ___nl__im__18, ___get_global_const(204), ___nl__im__21));
#line 335
c_rt_lib0clear(&___nl__im__17);
#line 335
c_rt_lib0clear(&___nl__im__18);
#line 335
c_rt_lib0clear(&___nl__im__21);
#line 335
c_rt_lib0move(&___nl__im__15, translator_priv0calc_val(___nl__im__16, ___ref___rec__3));
#line 335
c_rt_lib0clear(&___nl__im__16);
#line 336
c_rt_lib0move(&___nl__im__24,___get_global_const(923));
#line 336
___nl__bool__23 = c_rt_lib0eq(___nl__im__1, ___nl__im__24);
#line 336
c_rt_lib0clear(&___nl__im__24);
#line 336
if(___nl__bool__23){ goto label_2;}
#line 336
c_rt_lib0move(&___nl__im__22,___get_global_const(338));
#line 336
goto label_1;
#line 336
label_2:
;
#line 336
c_rt_lib0move(&___nl__im__22,___get_global_const(340));
#line 336
label_1:
;
#line 336
//clear ___nl__bool__23;
#line 336
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__6, ___nl__im__6, ___nl__im__15, ___nl__im__22, ___ref___rec__3));
#line 336
c_rt_lib0clear(&___nl__im__22);
#line 337
___nl__bool__25 = true;
#line 337
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__4, ___nl__bool__25, ___ref___rec__3));
#line 337
//clear ___nl__bool__25;
#line 337
c_rt_lib0clear(&___nl__im__0);
#line 337
c_rt_lib0clear(&___nl__im__1);
#line 337
c_rt_lib0clear(&___nl__im__2);
#line 337
c_rt_lib0clear(&___nl__im__4);
#line 337
c_rt_lib0clear(&___nl__im__6);
#line 337
c_rt_lib0clear(&___nl__im__15);
#line 337
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
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
#line 341
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 341
c_rt_lib0move(&___nl__im__7,___get_global_const(336));
#line 341
___nl__bool__3 = c_rt_lib0eq(___nl__im__6, ___nl__im__7);
#line 341
c_rt_lib0clear(&___nl__im__6);
#line 341
c_rt_lib0clear(&___nl__im__7);
#line 341
if(___nl__bool__3){ goto label_4;}
#line 341
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 341
c_rt_lib0move(&___nl__im__9,___get_global_const(338));
#line 341
___nl__bool__3 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 341
c_rt_lib0clear(&___nl__im__8);
#line 341
c_rt_lib0clear(&___nl__im__9);
#line 341
label_4:
;
#line 341
//clear ___nl__bool__5;
#line 341
if(___nl__bool__3){ goto label_3;}
#line 341
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 341
c_rt_lib0move(&___nl__im__11,___get_global_const(340));
#line 341
___nl__bool__3 = c_rt_lib0eq(___nl__im__10, ___nl__im__11);
#line 341
c_rt_lib0clear(&___nl__im__10);
#line 341
c_rt_lib0clear(&___nl__im__11);
#line 341
label_3:
;
#line 341
//clear ___nl__bool__4;
#line 341
___nl__bool__3 = !___nl__bool__3;
#line 341
if(___nl__bool__3){ goto label_2;}
#line 342
c_rt_lib0move(&___nl__im__13, nlasm0is_empty(___nl__im__1));
#line 342
___nl__bool__12 = c_rt_lib0check_true_native(___nl__im__13);
#line 342
c_rt_lib0clear(&___nl__im__13);
#line 342
___nl__bool__12 = !___nl__bool__12;
#line 342
if(___nl__bool__12){ goto label_6;}
#line 342
c_rt_lib0clear(&___nl__im__0);
#line 342
c_rt_lib0clear(&___nl__im__1);
#line 342
//clear ___nl__bool__3;
#line 342
//clear ___nl__bool__12;
#line 342
return NULL;
#line 342
goto label_5;
#line 342
label_6:
;
#line 342
label_5:
;
#line 342
//clear ___nl__bool__12;
#line 343
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 343
c_rt_lib0delete(translator_priv0print_val(___nl__im__14, ___nl__im__1, ___ref___rec__2));
#line 343
c_rt_lib0clear(&___nl__im__14);
#line 344
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 344
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__1, ___get_global_const(513), ___nl__im__17));
#line 344
c_rt_lib0clear(&___nl__im__17);
#line 344
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__16));
#line 344
c_rt_lib0clear(&___nl__im__16);
#line 344
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__15));
#line 344
c_rt_lib0clear(&___nl__im__15);
#line 345
goto label_1;
#line 345
label_2:
;
#line 345
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 345
c_rt_lib0move(&___nl__im__20,___get_global_const(923));
#line 345
___nl__bool__3 = c_rt_lib0eq(___nl__im__19, ___nl__im__20);
#line 345
c_rt_lib0clear(&___nl__im__19);
#line 345
c_rt_lib0clear(&___nl__im__20);
#line 345
if(___nl__bool__3){ goto label_8;}
#line 345
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 345
c_rt_lib0move(&___nl__im__22,___get_global_const(189));
#line 345
___nl__bool__3 = c_rt_lib0eq(___nl__im__21, ___nl__im__22);
#line 345
c_rt_lib0clear(&___nl__im__21);
#line 345
c_rt_lib0clear(&___nl__im__22);
#line 345
label_8:
;
#line 345
//clear ___nl__bool__18;
#line 345
___nl__bool__3 = !___nl__bool__3;
#line 345
if(___nl__bool__3){ goto label_7;}
#line 346
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 346
___nl__bool__25 = true;
#line 346
c_rt_lib0move(&___nl__im__23, translator_priv0get_value_of_lvalue(___nl__im__24, ___nl__bool__25, ___ref___rec__2));
#line 346
c_rt_lib0clear(&___nl__im__24);
#line 346
//clear ___nl__bool__25;
#line 347
___nl__int__29 = c_rt_lib0array_len(___nl__im__23);
#line 347
___nl__int__30 = 1;
#line 347
___nl__int__28 = ___nl__int__29 - ___nl__int__30;
#line 347
//clear ___nl__int__29;
#line 347
//clear ___nl__int__30;
#line 347
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__23, ___nl__int__28));
#line 347
//clear ___nl__int__28;
#line 347
___nl__int__33 = c_rt_lib0array_len(___nl__im__23);
#line 347
___nl__int__34 = 1;
#line 347
___nl__int__32 = ___nl__int__33 - ___nl__int__34;
#line 347
//clear ___nl__int__33;
#line 347
//clear ___nl__int__34;
#line 347
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__23, ___nl__int__32));
#line 347
//clear ___nl__int__32;
#line 347
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__31, ___get_global_const(218)));
#line 347
c_rt_lib0clear(&___nl__im__27);
#line 347
c_rt_lib0clear(&___nl__im__31);
#line 348
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 348
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_const(220)));
#line 348
c_rt_lib0clear(&___nl__im__38);
#line 348
___nl__int__40 = 1;
#line 348
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__40));
#line 348
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__im__41));
#line 348
//clear ___nl__int__40;
#line 348
c_rt_lib0clear(&___nl__im__41);
#line 348
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(10)));
#line 348
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__37, ___get_global_const(218), ___nl__im__39, ___get_global_const(204), ___nl__im__42));
#line 348
c_rt_lib0clear(&___nl__im__37);
#line 348
c_rt_lib0clear(&___nl__im__39);
#line 348
c_rt_lib0clear(&___nl__im__42);
#line 348
c_rt_lib0move(&___nl__im__35, translator_priv0dest_val(___nl__im__36, ___ref___rec__2));
#line 348
c_rt_lib0clear(&___nl__im__36);
#line 349
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 349
c_rt_lib0move(&___nl__im__46,___get_global_const(923));
#line 349
___nl__bool__44 = c_rt_lib0eq(___nl__im__45, ___nl__im__46);
#line 349
c_rt_lib0clear(&___nl__im__45);
#line 349
c_rt_lib0clear(&___nl__im__46);
#line 349
if(___nl__bool__44){ goto label_10;}
#line 349
c_rt_lib0move(&___nl__im__43,___get_global_const(338));
#line 349
goto label_9;
#line 349
label_10:
;
#line 349
c_rt_lib0move(&___nl__im__43,___get_global_const(340));
#line 349
label_9:
;
#line 349
//clear ___nl__bool__44;
#line 349
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__26, ___nl__im__26, ___nl__im__35, ___nl__im__43, ___ref___rec__2));
#line 349
c_rt_lib0clear(&___nl__im__43);
#line 350
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__26, ___ref___rec__2));
#line 351
___nl__bool__47 = true;
#line 351
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__23, ___nl__bool__47, ___ref___rec__2));
#line 351
//clear ___nl__bool__47;
#line 352
goto label_1;
#line 352
label_7:
;
#line 352
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 352
c_rt_lib0move(&___nl__im__49,___get_global_const(305));
#line 352
___nl__bool__3 = c_rt_lib0eq(___nl__im__48, ___nl__im__49);
#line 352
c_rt_lib0clear(&___nl__im__48);
#line 352
c_rt_lib0clear(&___nl__im__49);
#line 352
___nl__bool__3 = !___nl__bool__3;
#line 352
if(___nl__bool__3){ goto label_11;}
#line 353
c_rt_lib0move(&___nl__im__51, nlasm0is_empty(___nl__im__1));
#line 353
___nl__bool__50 = c_rt_lib0check_true_native(___nl__im__51);
#line 353
c_rt_lib0clear(&___nl__im__51);
#line 353
___nl__bool__50 = !___nl__bool__50;
#line 353
if(___nl__bool__50){ goto label_13;}
#line 353
c_rt_lib0clear(&___nl__im__0);
#line 353
c_rt_lib0clear(&___nl__im__1);
#line 353
//clear ___nl__bool__3;
#line 353
c_rt_lib0clear(&___nl__im__23);
#line 353
c_rt_lib0clear(&___nl__im__26);
#line 353
c_rt_lib0clear(&___nl__im__35);
#line 353
//clear ___nl__bool__50;
#line 353
return NULL;
#line 353
goto label_12;
#line 353
label_13:
;
#line 353
label_12:
;
#line 353
//clear ___nl__bool__50;
#line 354
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 354
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(218)));
#line 354
c_rt_lib0clear(&___nl__im__54);
#line 354
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 354
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__56, ___get_global_const(218)));
#line 354
c_rt_lib0clear(&___nl__im__56);
#line 354
c_rt_lib0move(&___nl__im__52, c_rt_lib0priv_as(___nl__im__55, ___get_global_const(905)));
#line 354
c_rt_lib0clear(&___nl__im__53);
#line 354
c_rt_lib0clear(&___nl__im__55);
#line 355
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(150)));
#line 355
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_const(166)));
#line 355
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__1, ___get_global_const(150), ___nl__im__59, ___get_global_const(166), ___nl__im__60));
#line 355
c_rt_lib0clear(&___nl__im__59);
#line 355
c_rt_lib0clear(&___nl__im__60);
#line 355
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__im__58));
#line 355
c_rt_lib0clear(&___nl__im__58);
#line 355
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__57));
#line 355
c_rt_lib0clear(&___nl__im__57);
#line 356
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_arg(___get_global_const(276), ___nl__im__1));
#line 356
c_rt_lib0move(&___nl__im__64,___get_global_const(40));
#line 356
___nl__int__65 = 1;
#line 356
___nl__int__65 = -___nl__int__65;
#line 356
c_rt_lib0move(&___nl__im__66, c_rt_lib0int_new(___nl__int__65));
#line 356
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 356
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_mk(5, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__63, ___get_global_const(533), ___nl__im__64, ___get_global_const(520), ___nl__im__66, ___get_global_const(538), ___nl__im__67));
#line 356
c_rt_lib0clear(&___nl__im__63);
#line 356
c_rt_lib0clear(&___nl__im__64);
#line 356
//clear ___nl__int__65;
#line 356
c_rt_lib0clear(&___nl__im__66);
#line 356
c_rt_lib0clear(&___nl__im__67);
#line 356
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_arg(___get_global_const(244), ___nl__im__62));
#line 356
c_rt_lib0clear(&___nl__im__62);
#line 356
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__61));
#line 356
c_rt_lib0clear(&___nl__im__61);
#line 357
goto label_1;
#line 357
label_11:
;
#line 358
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_mk(0));
#line 358
nl_die_arg(___nl__im__68);
#line 359
goto label_1;
#line 359
label_1:
;
#line 359
//clear ___nl__bool__3;
#line 359
c_rt_lib0clear(&___nl__im__23);
#line 359
c_rt_lib0clear(&___nl__im__26);
#line 359
c_rt_lib0clear(&___nl__im__35);
#line 359
c_rt_lib0clear(&___nl__im__52);
#line 359
c_rt_lib0clear(&___nl__im__68);
#line 359
c_rt_lib0clear(&___nl__im__0);
#line 359
c_rt_lib0clear(&___nl__im__1);
#line 359
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
bool  ___nl__bool__58 = false;
bool  ___nl__bool__59 = false;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT * ___nl__im_ptr__74 = NULL;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
ImmT  ___nl__im__82 = NULL;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
INT  ___nl__int__86 = 0;
INT  ___nl__int__87 = 0;
INT  ___nl__int__88 = 0;
bool  ___nl__bool__89 = false;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
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
INT  ___nl__int__125 = 0;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
bool  ___nl__bool__128 = false;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
bool  ___nl__bool__137 = false;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
bool  ___nl__bool__141 = false;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
bool  ___nl__bool__147 = false;
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
ImmT  ___nl__im__163 = NULL;
INT  ___nl__int__164 = 0;
ImmT  ___nl__im__165 = NULL;
ImmT  ___nl__im__166 = NULL;
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
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
INT  ___nl__int__186 = 0;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
ImmT  ___nl__im__191 = NULL;
bool  ___nl__bool__192 = false;
bool  ___nl__bool__193 = false;
bool  ___nl__bool__194 = false;
bool  ___nl__bool__195 = false;
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
ImmT  ___nl__im__209 = NULL;
bool  ___nl__bool__210 = false;
ImmT  ___nl__im__211 = NULL;
ImmT  ___nl__im__212 = NULL;
INT  ___nl__int__213 = 0;
INT  ___nl__int__214 = 0;
INT  ___nl__int__215 = 0;
ImmT  ___nl__im__216 = NULL;
INT  ___nl__int__217 = 0;
INT  ___nl__int__218 = 0;
INT  ___nl__int__219 = 0;
ImmT  ___nl__im__220 = NULL;
bool  ___nl__bool__221 = false;
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
INT  ___nl__int__224 = 0;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
INT  ___nl__int__235 = 0;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
#line 363
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 363
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 363
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(233)));
#line 363
c_rt_lib0clear(&___nl__im__4);
#line 363
c_rt_lib0clear(&___nl__im__5);
#line 364
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 364
c_rt_lib0move(&___nl__im__8,___get_global_const(911));
#line 364
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 364
c_rt_lib0clear(&___nl__im__7);
#line 364
c_rt_lib0clear(&___nl__im__8);
#line 364
___nl__bool__6 = !___nl__bool__6;
#line 364
if(___nl__bool__6){ goto label_2;}
#line 365
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 365
___nl__bool__11 = false;
#line 365
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__10, ___nl__bool__11, ___ref___rec__2));
#line 365
c_rt_lib0clear(&___nl__im__10);
#line 365
//clear ___nl__bool__11;
#line 366
___nl__int__15 = c_rt_lib0array_len(___nl__im__9);
#line 366
___nl__int__16 = 1;
#line 366
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 366
//clear ___nl__int__15;
#line 366
//clear ___nl__int__16;
#line 366
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__9, ___nl__int__14));
#line 366
//clear ___nl__int__14;
#line 366
___nl__int__19 = c_rt_lib0array_len(___nl__im__9);
#line 366
___nl__int__20 = 1;
#line 366
___nl__int__18 = ___nl__int__19 - ___nl__int__20;
#line 366
//clear ___nl__int__19;
#line 366
//clear ___nl__int__20;
#line 366
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__9, ___nl__int__18));
#line 366
//clear ___nl__int__18;
#line 366
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__17, ___get_global_const(218)));
#line 366
c_rt_lib0clear(&___nl__im__13);
#line 366
c_rt_lib0clear(&___nl__im__17);
#line 367
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 367
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(204)));
#line 367
c_rt_lib0clear(&___nl__im__23);
#line 367
___nl__im_ptr__26 = &((*___ref___rec__2).logic0field);
#line 367
c_rt_lib0copy(&___nl__im__25, (*___nl__im_ptr__26));
#line 367
___nl__im_ptr__26 = NULL;
#line 367
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(387)));
#line 367
c_rt_lib0clear(&___nl__im__25);
#line 367
___nl__bool__21 = tct0is_own_type(___nl__im__22, ___nl__im__24);
#line 367
c_rt_lib0clear(&___nl__im__22);
#line 367
c_rt_lib0clear(&___nl__im__24);
#line 367
___nl__bool__21 = !___nl__bool__21;
#line 367
if(___nl__bool__21){ goto label_4;}
#line 368
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 368
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__27, ___nl__im__12, ___ref___rec__2));
#line 368
c_rt_lib0clear(&___nl__im__27);
#line 369
goto label_3;
#line 369
label_4:
;
#line 369
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 369
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_const(218)));
#line 369
c_rt_lib0clear(&___nl__im__29);
#line 369
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__28, ___get_global_const(462));
#line 369
c_rt_lib0clear(&___nl__im__28);
#line 369
___nl__bool__21 = !___nl__bool__21;
#line 369
if(___nl__bool__21){ goto label_5;}
#line 370
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 370
c_rt_lib0delete(translator_priv0print_val(___nl__im__30, ___nl__im__12, ___ref___rec__2));
#line 370
c_rt_lib0clear(&___nl__im__30);
#line 371
goto label_3;
#line 371
label_5:
;
#line 372
c_rt_lib0move(&___nl__im__31, nlasm0is_empty(___nl__im__1));
#line 373
___nl__bool__32 = c_rt_lib0check_true_native(___nl__im__31);
#line 373
___nl__bool__32 = !___nl__bool__32;
#line 373
if(___nl__bool__32){ goto label_7;}
#line 374
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 374
___nl__int__34 = 1;
#line 374
___nl__int__34 = -___nl__int__34;
#line 374
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 374
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 374
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__33, ___get_global_const(217), ___nl__im__35, ___get_global_const(329), ___nl__im__36));
#line 374
c_rt_lib0clear(&___nl__im__33);
#line 374
//clear ___nl__int__34;
#line 374
c_rt_lib0clear(&___nl__im__35);
#line 374
c_rt_lib0clear(&___nl__im__36);
#line 375
goto label_6;
#line 375
label_7:
;
#line 375
label_6:
;
#line 375
//clear ___nl__bool__32;
#line 376
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 376
c_rt_lib0move(&___nl__im__37, translator_priv0dest_val(___nl__im__38, ___ref___rec__2));
#line 376
c_rt_lib0clear(&___nl__im__38);
#line 377
c_rt_lib0delete(translator_priv0move(___nl__im__12, ___nl__im__37, ___ref___rec__2));
#line 378
___nl__bool__39 = c_rt_lib0check_true_native(___nl__im__31);
#line 378
___nl__bool__39 = !___nl__bool__39;
#line 378
___nl__bool__39 = !___nl__bool__39;
#line 378
if(___nl__bool__39){ goto label_9;}
#line 379
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__12, ___ref___rec__2));
#line 380
goto label_8;
#line 380
label_9:
;
#line 380
label_8:
;
#line 380
//clear ___nl__bool__39;
#line 381
goto label_3;
#line 381
label_3:
;
#line 381
//clear ___nl__bool__21;
#line 381
c_rt_lib0clear(&___nl__im__31);
#line 381
c_rt_lib0clear(&___nl__im__37);
#line 382
___nl__bool__40 = false;
#line 382
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__9, ___nl__bool__40, ___ref___rec__2));
#line 382
//clear ___nl__bool__40;
#line 383
goto label_1;
#line 383
label_2:
;
#line 383
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 383
c_rt_lib0move(&___nl__im__42,___get_global_const(926));
#line 383
___nl__bool__6 = c_rt_lib0eq(___nl__im__41, ___nl__im__42);
#line 383
c_rt_lib0clear(&___nl__im__41);
#line 383
c_rt_lib0clear(&___nl__im__42);
#line 383
___nl__bool__6 = !___nl__bool__6;
#line 383
if(___nl__bool__6){ goto label_10;}
#line 384
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 384
___nl__bool__45 = true;
#line 384
c_rt_lib0move(&___nl__im__43, translator_priv0get_value_of_lvalue(___nl__im__44, ___nl__bool__45, ___ref___rec__2));
#line 384
c_rt_lib0clear(&___nl__im__44);
#line 384
//clear ___nl__bool__45;
#line 385
___nl__int__49 = c_rt_lib0array_len(___nl__im__43);
#line 385
___nl__int__50 = 1;
#line 385
___nl__int__48 = ___nl__int__49 - ___nl__int__50;
#line 385
//clear ___nl__int__49;
#line 385
//clear ___nl__int__50;
#line 385
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_get(___nl__im__43, ___nl__int__48));
#line 385
//clear ___nl__int__48;
#line 385
___nl__int__53 = c_rt_lib0array_len(___nl__im__43);
#line 385
___nl__int__54 = 1;
#line 385
___nl__int__52 = ___nl__int__53 - ___nl__int__54;
#line 385
//clear ___nl__int__53;
#line 385
//clear ___nl__int__54;
#line 385
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__43, ___nl__int__52));
#line 385
//clear ___nl__int__52;
#line 385
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__51, ___get_global_const(218)));
#line 385
c_rt_lib0clear(&___nl__im__47);
#line 385
c_rt_lib0clear(&___nl__im__51);
#line 386
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 386
c_rt_lib0move(&___nl__im__55, translator_priv0calc_val(___nl__im__56, ___ref___rec__2));
#line 386
c_rt_lib0clear(&___nl__im__56);
#line 387
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__46, ___nl__im__55, ___ref___rec__2));
#line 388
___nl__bool__57 = true;
#line 388
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__43, ___nl__bool__57, ___ref___rec__2));
#line 388
//clear ___nl__bool__57;
#line 389
goto label_1;
#line 389
label_10:
;
#line 389
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 389
c_rt_lib0move(&___nl__im__62,___get_global_const(897));
#line 389
___nl__bool__6 = c_rt_lib0eq(___nl__im__61, ___nl__im__62);
#line 389
c_rt_lib0clear(&___nl__im__61);
#line 389
c_rt_lib0clear(&___nl__im__62);
#line 389
if(___nl__bool__6){ goto label_14;}
#line 389
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 389
c_rt_lib0move(&___nl__im__64,___get_global_const(898));
#line 389
___nl__bool__6 = c_rt_lib0eq(___nl__im__63, ___nl__im__64);
#line 389
c_rt_lib0clear(&___nl__im__63);
#line 389
c_rt_lib0clear(&___nl__im__64);
#line 389
label_14:
;
#line 389
//clear ___nl__bool__60;
#line 389
if(___nl__bool__6){ goto label_13;}
#line 389
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 389
c_rt_lib0move(&___nl__im__66,___get_global_const(531));
#line 389
___nl__bool__6 = c_rt_lib0eq(___nl__im__65, ___nl__im__66);
#line 389
c_rt_lib0clear(&___nl__im__65);
#line 389
c_rt_lib0clear(&___nl__im__66);
#line 389
label_13:
;
#line 389
//clear ___nl__bool__59;
#line 389
if(___nl__bool__6){ goto label_12;}
#line 389
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 389
c_rt_lib0move(&___nl__im__68,___get_global_const(899));
#line 389
___nl__bool__6 = c_rt_lib0eq(___nl__im__67, ___nl__im__68);
#line 389
c_rt_lib0clear(&___nl__im__67);
#line 389
c_rt_lib0clear(&___nl__im__68);
#line 389
label_12:
;
#line 389
//clear ___nl__bool__58;
#line 389
___nl__bool__6 = !___nl__bool__6;
#line 389
if(___nl__bool__6){ goto label_11;}
#line 390
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 390
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_const(204)));
#line 390
c_rt_lib0clear(&___nl__im__71);
#line 390
___nl__im_ptr__74 = &((*___ref___rec__2).logic0field);
#line 390
c_rt_lib0copy(&___nl__im__73, (*___nl__im_ptr__74));
#line 390
___nl__im_ptr__74 = NULL;
#line 390
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_const(387)));
#line 390
c_rt_lib0clear(&___nl__im__73);
#line 390
___nl__bool__69 = tct0is_own_type(___nl__im__70, ___nl__im__72);
#line 390
c_rt_lib0clear(&___nl__im__70);
#line 390
c_rt_lib0clear(&___nl__im__72);
#line 390
___nl__bool__69 = !___nl__bool__69;
#line 390
if(___nl__bool__69){ goto label_16;}
#line 391
___nl__bool__76 = true;
#line 391
c_rt_lib0move(&___nl__im__75, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__76, ___ref___rec__2));
#line 391
//clear ___nl__bool__76;
#line 392
___nl__int__80 = c_rt_lib0array_len(___nl__im__75);
#line 392
___nl__int__81 = 1;
#line 392
___nl__int__79 = ___nl__int__80 - ___nl__int__81;
#line 392
//clear ___nl__int__80;
#line 392
//clear ___nl__int__81;
#line 392
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_get(___nl__im__75, ___nl__int__79));
#line 392
//clear ___nl__int__79;
#line 392
___nl__int__84 = c_rt_lib0array_len(___nl__im__75);
#line 392
___nl__int__85 = 1;
#line 392
___nl__int__83 = ___nl__int__84 - ___nl__int__85;
#line 392
//clear ___nl__int__84;
#line 392
//clear ___nl__int__85;
#line 392
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_get(___nl__im__75, ___nl__int__83));
#line 392
//clear ___nl__int__83;
#line 392
c_rt_lib0move(&___nl__im__77, c_rt_lib0priv_as(___nl__im__82, ___get_global_const(218)));
#line 392
c_rt_lib0clear(&___nl__im__78);
#line 392
c_rt_lib0clear(&___nl__im__82);
#line 392
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__77, ___ref___rec__2));
#line 392
c_rt_lib0clear(&___nl__im__77);
#line 393
___nl__int__87 = c_rt_lib0array_len(___nl__im__75);
#line 393
___nl__int__88 = 1;
#line 393
___nl__int__86 = ___nl__int__87 - ___nl__int__88;
#line 393
//clear ___nl__int__87;
#line 393
//clear ___nl__int__88;
#line 393
label_18:
;
#line 393
___nl__int__90 = 0;
#line 393
___nl__int__91 = ___nl__int__86 >= ___nl__int__90;
#line 393
___nl__bool__89 = ___nl__int__91;
#line 393
//clear ___nl__int__90;
#line 393
//clear ___nl__int__91;
#line 393
___nl__bool__89 = !___nl__bool__89;
#line 393
if(___nl__bool__89){ goto label_17;}
#line 394
c_rt_lib0move(&___nl__im__92, c_rt_lib0array_get(___nl__im__75, ___nl__int__86));
#line 394
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(218));
#line 394
if(___nl__bool__93){ goto label_21;}
#line 395
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(563));
#line 395
if(___nl__bool__93){ goto label_22;}
#line 396
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(1220));
#line 396
if(___nl__bool__93){ goto label_23;}
#line 397
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(370));
#line 397
if(___nl__bool__93){ goto label_24;}
#line 398
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(925));
#line 398
if(___nl__bool__93){ goto label_25;}
#line 399
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(252));
#line 399
if(___nl__bool__93){ goto label_26;}
#line 401
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(254));
#line 401
if(___nl__bool__93){ goto label_27;}
#line 403
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(258));
#line 403
if(___nl__bool__93){ goto label_28;}
#line 405
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(256));
#line 405
if(___nl__bool__93){ goto label_29;}
#line 405
c_rt_lib0move(&___nl__im__94,___get_global_const(16));
#line 405
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_mk(2, ___nl__im__94, ___nl__im__92));
#line 405
nl_die_arg(___nl__im__94);
#line 394
label_21:
;
#line 394
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(218)));
#line 394
c_rt_lib0copy(&___nl__im__95, ___nl__im__96);
#line 395
goto label_20;
#line 395
label_22:
;
#line 395
c_rt_lib0move(&___nl__im__98, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(563)));
#line 395
c_rt_lib0copy(&___nl__im__97, ___nl__im__98);
#line 396
goto label_20;
#line 396
label_23:
;
#line 396
c_rt_lib0move(&___nl__im__100, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(1220)));
#line 396
c_rt_lib0copy(&___nl__im__99, ___nl__im__100);
#line 397
goto label_20;
#line 397
label_24:
;
#line 397
c_rt_lib0move(&___nl__im__102, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(370)));
#line 397
c_rt_lib0copy(&___nl__im__101, ___nl__im__102);
#line 398
goto label_20;
#line 398
label_25:
;
#line 398
c_rt_lib0move(&___nl__im__104, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(925)));
#line 398
c_rt_lib0copy(&___nl__im__103, ___nl__im__104);
#line 399
goto label_20;
#line 399
label_26:
;
#line 399
c_rt_lib0move(&___nl__im__106, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(252)));
#line 399
c_rt_lib0copy(&___nl__im__105, ___nl__im__106);
#line 400
c_rt_lib0move(&___nl__im__107, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(1232)));
#line 400
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(1231)));
#line 400
c_rt_lib0move(&___nl__im__109, c_rt_lib0hash_get_value_dec(___nl__im__105, ___get_global_const(561)));
#line 400
c_rt_lib0delete(translator_priv0release_field(___nl__im__107, ___nl__im__108, ___nl__im__109, ___ref___rec__2));
#line 400
c_rt_lib0clear(&___nl__im__107);
#line 400
c_rt_lib0clear(&___nl__im__108);
#line 400
c_rt_lib0clear(&___nl__im__109);
#line 401
goto label_20;
#line 401
label_27:
;
#line 401
c_rt_lib0move(&___nl__im__111, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(254)));
#line 401
c_rt_lib0copy(&___nl__im__110, ___nl__im__111);
#line 402
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_const(1232)));
#line 402
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_const(1231)));
#line 402
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_const(563)));
#line 402
c_rt_lib0delete(translator_priv0release_index(___nl__im__112, ___nl__im__113, ___nl__im__114, ___ref___rec__2));
#line 402
c_rt_lib0clear(&___nl__im__112);
#line 402
c_rt_lib0clear(&___nl__im__113);
#line 402
c_rt_lib0clear(&___nl__im__114);
#line 403
goto label_20;
#line 403
label_28:
;
#line 403
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(258)));
#line 403
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 404
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_const(1232)));
#line 404
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_const(1231)));
#line 404
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_const(533)));
#line 404
c_rt_lib0delete(translator_priv0release_variant(___nl__im__117, ___nl__im__118, ___nl__im__119, ___ref___rec__2));
#line 404
c_rt_lib0clear(&___nl__im__117);
#line 404
c_rt_lib0clear(&___nl__im__118);
#line 404
c_rt_lib0clear(&___nl__im__119);
#line 405
goto label_20;
#line 405
label_29:
;
#line 405
c_rt_lib0move(&___nl__im__121, c_rt_lib0priv_as(___nl__im__92, ___get_global_const(256)));
#line 405
c_rt_lib0copy(&___nl__im__120, ___nl__im__121);
#line 406
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__120, ___get_global_const(1232)));
#line 406
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__120, ___get_global_const(1231)));
#line 406
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__120, ___get_global_const(563)));
#line 406
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__122, ___nl__im__123, ___nl__im__124, ___ref___rec__2));
#line 406
c_rt_lib0clear(&___nl__im__122);
#line 406
c_rt_lib0clear(&___nl__im__123);
#line 406
c_rt_lib0clear(&___nl__im__124);
#line 407
goto label_20;
#line 407
label_20:
;
#line 407
c_rt_lib0clear(&___nl__im__92);
#line 407
//clear ___nl__bool__93;
#line 407
c_rt_lib0clear(&___nl__im__94);
#line 407
c_rt_lib0clear(&___nl__im__95);
#line 407
c_rt_lib0clear(&___nl__im__96);
#line 407
c_rt_lib0clear(&___nl__im__97);
#line 407
c_rt_lib0clear(&___nl__im__98);
#line 407
c_rt_lib0clear(&___nl__im__99);
#line 407
c_rt_lib0clear(&___nl__im__100);
#line 407
c_rt_lib0clear(&___nl__im__101);
#line 407
c_rt_lib0clear(&___nl__im__102);
#line 407
c_rt_lib0clear(&___nl__im__103);
#line 407
c_rt_lib0clear(&___nl__im__104);
#line 407
c_rt_lib0clear(&___nl__im__105);
#line 407
c_rt_lib0clear(&___nl__im__106);
#line 407
c_rt_lib0clear(&___nl__im__110);
#line 407
c_rt_lib0clear(&___nl__im__111);
#line 407
c_rt_lib0clear(&___nl__im__115);
#line 407
c_rt_lib0clear(&___nl__im__116);
#line 407
c_rt_lib0clear(&___nl__im__120);
#line 407
c_rt_lib0clear(&___nl__im__121);
#line 407
label_19:
;
#line 393
___nl__int__125 = 1;
#line 393
___nl__int__86 = ___nl__int__86 - ___nl__int__125;
#line 393
//clear ___nl__int__125;
#line 408
goto label_18;
#line 408
label_17:
;
#line 409
goto label_15;
#line 409
label_16:
;
#line 410
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 410
c_rt_lib0move(&___nl__im__126, translator_priv0dest_val(___nl__im__127, ___ref___rec__2));
#line 410
c_rt_lib0clear(&___nl__im__127);
#line 411
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 411
c_rt_lib0move(&___nl__im__130,___get_global_const(897));
#line 411
___nl__bool__128 = c_rt_lib0eq(___nl__im__129, ___nl__im__130);
#line 411
c_rt_lib0clear(&___nl__im__129);
#line 411
c_rt_lib0clear(&___nl__im__130);
#line 411
___nl__bool__128 = !___nl__bool__128;
#line 411
if(___nl__bool__128){ goto label_31;}
#line 412
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 412
c_rt_lib0move(&___nl__im__131, translator_priv0calc_val(___nl__im__132, ___ref___rec__2));
#line 412
c_rt_lib0clear(&___nl__im__132);
#line 413
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__im__1, ___nl__im__126, ___nl__im__131, ___ref___rec__2));
#line 414
goto label_30;
#line 414
label_31:
;
#line 414
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 414
c_rt_lib0move(&___nl__im__134,___get_global_const(898));
#line 414
___nl__bool__128 = c_rt_lib0eq(___nl__im__133, ___nl__im__134);
#line 414
c_rt_lib0clear(&___nl__im__133);
#line 414
c_rt_lib0clear(&___nl__im__134);
#line 414
___nl__bool__128 = !___nl__bool__128;
#line 414
if(___nl__bool__128){ goto label_32;}
#line 415
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 415
c_rt_lib0move(&___nl__im__135, translator_priv0calc_val(___nl__im__136, ___ref___rec__2));
#line 415
c_rt_lib0clear(&___nl__im__136);
#line 416
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 416
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 416
___nl__bool__137 = nlasm0eq_reg_type(___nl__im__138, ___nl__im__139);
#line 416
c_rt_lib0clear(&___nl__im__138);
#line 416
c_rt_lib0clear(&___nl__im__139);
#line 416
___nl__bool__137 = !___nl__bool__137;
#line 417
c_rt_lib0copy(&___nl__im__140, ___nl__im__1);
#line 418
___nl__bool__141 = ___nl__bool__137;
#line 418
___nl__bool__141 = !___nl__bool__141;
#line 418
if(___nl__bool__141){ goto label_34;}
#line 418
c_rt_lib0move(&___nl__im__142, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 418
c_rt_lib0move(&___nl__im__140, translator_priv0new_register(___ref___rec__2, ___nl__im__142));
#line 418
c_rt_lib0clear(&___nl__im__142);
#line 418
goto label_33;
#line 418
label_34:
;
#line 418
label_33:
;
#line 418
//clear ___nl__bool__141;
#line 419
c_rt_lib0move(&___nl__im__143,___get_global_const(1239));
#line 419
c_rt_lib0move(&___nl__im__145, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__126));
#line 419
c_rt_lib0move(&___nl__im__146, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__135));
#line 419
c_rt_lib0move(&___nl__im__144, c_rt_lib0array_mk(2, ___nl__im__145, ___nl__im__146));
#line 419
c_rt_lib0clear(&___nl__im__145);
#line 419
c_rt_lib0clear(&___nl__im__146);
#line 419
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__140, ___nl__im__143, ___nl__im__144, ___ref___rec__2));
#line 419
c_rt_lib0clear(&___nl__im__143);
#line 419
c_rt_lib0clear(&___nl__im__144);
#line 420
___nl__bool__147 = ___nl__bool__137;
#line 420
___nl__bool__147 = !___nl__bool__147;
#line 420
if(___nl__bool__147){ goto label_36;}
#line 420
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__140, ___ref___rec__2));
#line 420
goto label_35;
#line 420
label_36:
;
#line 420
label_35:
;
#line 420
//clear ___nl__bool__147;
#line 421
goto label_30;
#line 421
label_32:
;
#line 421
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 421
c_rt_lib0move(&___nl__im__149,___get_global_const(531));
#line 421
___nl__bool__128 = c_rt_lib0eq(___nl__im__148, ___nl__im__149);
#line 421
c_rt_lib0clear(&___nl__im__148);
#line 421
c_rt_lib0clear(&___nl__im__149);
#line 421
___nl__bool__128 = !___nl__bool__128;
#line 421
if(___nl__bool__128){ goto label_37;}
#line 422
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 422
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value_dec(___nl__im__152, ___get_global_const(218)));
#line 422
c_rt_lib0clear(&___nl__im__152);
#line 422
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 422
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_const(218)));
#line 422
c_rt_lib0clear(&___nl__im__154);
#line 422
c_rt_lib0move(&___nl__im__150, c_rt_lib0priv_as(___nl__im__153, ___get_global_const(903)));
#line 422
c_rt_lib0clear(&___nl__im__151);
#line 422
c_rt_lib0clear(&___nl__im__153);
#line 423
c_rt_lib0delete(translator_priv0print_get_value(___nl__im__1, ___nl__im__126, ___nl__im__150, ___ref___rec__2));
#line 424
goto label_30;
#line 424
label_37:
;
#line 424
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 424
c_rt_lib0move(&___nl__im__156,___get_global_const(899));
#line 424
___nl__bool__128 = c_rt_lib0eq(___nl__im__155, ___nl__im__156);
#line 424
c_rt_lib0clear(&___nl__im__155);
#line 424
c_rt_lib0clear(&___nl__im__156);
#line 424
___nl__bool__128 = !___nl__bool__128;
#line 424
if(___nl__bool__128){ goto label_38;}
#line 425
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 425
c_rt_lib0move(&___nl__im__157, translator_priv0dest_val(___nl__im__158, ___ref___rec__2));
#line 425
c_rt_lib0clear(&___nl__im__158);
#line 426
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 426
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__161, ___get_global_const(218)));
#line 426
c_rt_lib0clear(&___nl__im__161);
#line 426
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 426
c_rt_lib0move(&___nl__im__162, c_rt_lib0hash_get_value_dec(___nl__im__163, ___get_global_const(218)));
#line 426
c_rt_lib0clear(&___nl__im__163);
#line 426
c_rt_lib0move(&___nl__im__159, c_rt_lib0priv_as(___nl__im__162, ___get_global_const(903)));
#line 426
c_rt_lib0clear(&___nl__im__160);
#line 426
c_rt_lib0clear(&___nl__im__162);
#line 427
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 427
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_const(204)));
#line 427
c_rt_lib0clear(&___nl__im__166);
#line 427
___nl__int__164 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__165, ___nl__im__159);
#line 427
c_rt_lib0clear(&___nl__im__165);
#line 428
c_rt_lib0move(&___nl__im__167, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 429
c_rt_lib0copy(&___nl__im__168, ___nl__im__1);
#line 430
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 430
___nl__bool__169 = nlasm0eq_reg_type(___nl__im__170, ___nl__im__167);
#line 430
c_rt_lib0clear(&___nl__im__170);
#line 430
___nl__bool__169 = !___nl__bool__169;
#line 430
___nl__bool__169 = !___nl__bool__169;
#line 430
if(___nl__bool__169){ goto label_40;}
#line 431
c_rt_lib0move(&___nl__im__168, translator_priv0new_register(___ref___rec__2, ___nl__im__167));
#line 432
goto label_39;
#line 432
label_40:
;
#line 432
label_39:
;
#line 432
//clear ___nl__bool__169;
#line 433
c_rt_lib0move(&___nl__im__173, c_rt_lib0int_new(___nl__int__164));
#line 433
c_rt_lib0move(&___nl__im__172, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__168, ___get_global_const(75), ___nl__im__157, ___get_global_const(204), ___nl__im__159, ___get_global_const(520), ___nl__im__173));
#line 433
c_rt_lib0clear(&___nl__im__173);
#line 433
c_rt_lib0move(&___nl__im__171, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__172));
#line 433
c_rt_lib0clear(&___nl__im__172);
#line 433
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__171));
#line 433
c_rt_lib0clear(&___nl__im__171);
#line 434
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 434
___nl__bool__174 = nlasm0eq_reg_type(___nl__im__175, ___nl__im__167);
#line 434
c_rt_lib0clear(&___nl__im__175);
#line 434
___nl__bool__174 = !___nl__bool__174;
#line 434
___nl__bool__174 = !___nl__bool__174;
#line 434
if(___nl__bool__174){ goto label_42;}
#line 435
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__168, ___ref___rec__2));
#line 436
goto label_41;
#line 436
label_42:
;
#line 436
label_41:
;
#line 436
//clear ___nl__bool__174;
#line 437
goto label_30;
#line 437
label_38:
;
#line 438
c_rt_lib0move(&___nl__im__176, c_rt_lib0array_mk(0));
#line 438
nl_die_arg(___nl__im__176);
#line 439
goto label_30;
#line 439
label_30:
;
#line 439
//clear ___nl__bool__128;
#line 439
c_rt_lib0clear(&___nl__im__131);
#line 439
c_rt_lib0clear(&___nl__im__135);
#line 439
//clear ___nl__bool__137;
#line 439
c_rt_lib0clear(&___nl__im__140);
#line 439
c_rt_lib0clear(&___nl__im__150);
#line 439
c_rt_lib0clear(&___nl__im__157);
#line 439
c_rt_lib0clear(&___nl__im__159);
#line 439
//clear ___nl__int__164;
#line 439
c_rt_lib0clear(&___nl__im__167);
#line 439
c_rt_lib0clear(&___nl__im__168);
#line 439
c_rt_lib0clear(&___nl__im__176);
#line 440
goto label_15;
#line 440
label_15:
;
#line 440
//clear ___nl__bool__69;
#line 440
c_rt_lib0clear(&___nl__im__75);
#line 440
//clear ___nl__int__86;
#line 440
//clear ___nl__bool__89;
#line 440
c_rt_lib0clear(&___nl__im__92);
#line 440
//clear ___nl__bool__93;
#line 440
c_rt_lib0clear(&___nl__im__94);
#line 440
c_rt_lib0clear(&___nl__im__95);
#line 440
c_rt_lib0clear(&___nl__im__96);
#line 440
c_rt_lib0clear(&___nl__im__97);
#line 440
c_rt_lib0clear(&___nl__im__98);
#line 440
c_rt_lib0clear(&___nl__im__99);
#line 440
c_rt_lib0clear(&___nl__im__100);
#line 440
c_rt_lib0clear(&___nl__im__101);
#line 440
c_rt_lib0clear(&___nl__im__102);
#line 440
c_rt_lib0clear(&___nl__im__103);
#line 440
c_rt_lib0clear(&___nl__im__104);
#line 440
c_rt_lib0clear(&___nl__im__105);
#line 440
c_rt_lib0clear(&___nl__im__106);
#line 440
c_rt_lib0clear(&___nl__im__110);
#line 440
c_rt_lib0clear(&___nl__im__111);
#line 440
c_rt_lib0clear(&___nl__im__115);
#line 440
c_rt_lib0clear(&___nl__im__116);
#line 440
c_rt_lib0clear(&___nl__im__120);
#line 440
c_rt_lib0clear(&___nl__im__121);
#line 440
c_rt_lib0clear(&___nl__im__126);
#line 441
goto label_1;
#line 441
label_11:
;
#line 441
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 441
c_rt_lib0move(&___nl__im__178,___get_global_const(1001));
#line 441
___nl__bool__6 = c_rt_lib0eq(___nl__im__177, ___nl__im__178);
#line 441
c_rt_lib0clear(&___nl__im__177);
#line 441
c_rt_lib0clear(&___nl__im__178);
#line 441
___nl__bool__6 = !___nl__bool__6;
#line 441
if(___nl__bool__6){ goto label_43;}
#line 442
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 442
c_rt_lib0move(&___nl__im__179, translator_priv0dest_val(___nl__im__180, ___ref___rec__2));
#line 442
c_rt_lib0clear(&___nl__im__180);
#line 443
c_rt_lib0move(&___nl__im__183, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 443
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_const(218)));
#line 443
c_rt_lib0clear(&___nl__im__183);
#line 443
c_rt_lib0move(&___nl__im__185, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 443
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_const(218)));
#line 443
c_rt_lib0clear(&___nl__im__185);
#line 443
c_rt_lib0move(&___nl__im__181, c_rt_lib0priv_as(___nl__im__184, ___get_global_const(903)));
#line 443
c_rt_lib0clear(&___nl__im__182);
#line 443
c_rt_lib0clear(&___nl__im__184);
#line 444
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 444
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_get_value_dec(___nl__im__188, ___get_global_const(204)));
#line 444
c_rt_lib0clear(&___nl__im__188);
#line 444
___nl__int__186 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__187, ___nl__im__181);
#line 444
c_rt_lib0clear(&___nl__im__187);
#line 445
c_rt_lib0move(&___nl__im__191, c_rt_lib0int_new(___nl__int__186));
#line 445
c_rt_lib0move(&___nl__im__190, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__179, ___get_global_const(204), ___nl__im__181, ___get_global_const(520), ___nl__im__191));
#line 445
c_rt_lib0clear(&___nl__im__191);
#line 445
c_rt_lib0move(&___nl__im__189, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__190));
#line 445
c_rt_lib0clear(&___nl__im__190);
#line 445
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__189));
#line 445
c_rt_lib0clear(&___nl__im__189);
#line 446
goto label_1;
#line 446
label_43:
;
#line 446
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 446
c_rt_lib0move(&___nl__im__197,___get_global_const(912));
#line 446
___nl__bool__6 = c_rt_lib0eq(___nl__im__196, ___nl__im__197);
#line 446
c_rt_lib0clear(&___nl__im__196);
#line 446
c_rt_lib0clear(&___nl__im__197);
#line 446
if(___nl__bool__6){ goto label_48;}
#line 446
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 446
c_rt_lib0move(&___nl__im__199,___get_global_const(913));
#line 446
___nl__bool__6 = c_rt_lib0eq(___nl__im__198, ___nl__im__199);
#line 446
c_rt_lib0clear(&___nl__im__198);
#line 446
c_rt_lib0clear(&___nl__im__199);
#line 446
label_48:
;
#line 446
//clear ___nl__bool__195;
#line 446
if(___nl__bool__6){ goto label_47;}
#line 446
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 446
c_rt_lib0move(&___nl__im__201,___get_global_const(915));
#line 446
___nl__bool__6 = c_rt_lib0eq(___nl__im__200, ___nl__im__201);
#line 446
c_rt_lib0clear(&___nl__im__200);
#line 446
c_rt_lib0clear(&___nl__im__201);
#line 446
label_47:
;
#line 446
//clear ___nl__bool__194;
#line 446
if(___nl__bool__6){ goto label_46;}
#line 446
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 446
c_rt_lib0move(&___nl__im__203,___get_global_const(914));
#line 446
___nl__bool__6 = c_rt_lib0eq(___nl__im__202, ___nl__im__203);
#line 446
c_rt_lib0clear(&___nl__im__202);
#line 446
c_rt_lib0clear(&___nl__im__203);
#line 446
label_46:
;
#line 446
//clear ___nl__bool__193;
#line 446
if(___nl__bool__6){ goto label_45;}
#line 446
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 446
c_rt_lib0move(&___nl__im__205,___get_global_const(916));
#line 446
___nl__bool__6 = c_rt_lib0eq(___nl__im__204, ___nl__im__205);
#line 446
c_rt_lib0clear(&___nl__im__204);
#line 446
c_rt_lib0clear(&___nl__im__205);
#line 446
label_45:
;
#line 446
//clear ___nl__bool__192;
#line 446
___nl__bool__6 = !___nl__bool__6;
#line 446
if(___nl__bool__6){ goto label_44;}
#line 447
c_rt_lib0move(&___nl__im__207, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 447
c_rt_lib0move(&___nl__im__206, translator_priv0calc_val(___nl__im__207, ___ref___rec__2));
#line 447
c_rt_lib0clear(&___nl__im__207);
#line 448
c_rt_lib0move(&___nl__im__209, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 448
___nl__bool__210 = true;
#line 448
c_rt_lib0move(&___nl__im__208, translator_priv0get_value_of_lvalue(___nl__im__209, ___nl__bool__210, ___ref___rec__2));
#line 448
c_rt_lib0clear(&___nl__im__209);
#line 448
//clear ___nl__bool__210;
#line 449
___nl__int__214 = c_rt_lib0array_len(___nl__im__208);
#line 449
___nl__int__215 = 1;
#line 449
___nl__int__213 = ___nl__int__214 - ___nl__int__215;
#line 449
//clear ___nl__int__214;
#line 449
//clear ___nl__int__215;
#line 449
c_rt_lib0move(&___nl__im__212, c_rt_lib0array_get(___nl__im__208, ___nl__int__213));
#line 449
//clear ___nl__int__213;
#line 449
___nl__int__218 = c_rt_lib0array_len(___nl__im__208);
#line 449
___nl__int__219 = 1;
#line 449
___nl__int__217 = ___nl__int__218 - ___nl__int__219;
#line 449
//clear ___nl__int__218;
#line 449
//clear ___nl__int__219;
#line 449
c_rt_lib0move(&___nl__im__216, c_rt_lib0array_get(___nl__im__208, ___nl__int__217));
#line 449
//clear ___nl__int__217;
#line 449
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__216, ___get_global_const(218)));
#line 449
c_rt_lib0clear(&___nl__im__212);
#line 449
c_rt_lib0clear(&___nl__im__216);
#line 450
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 450
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__211, ___nl__im__211, ___nl__im__206, ___nl__im__220, ___ref___rec__2));
#line 450
c_rt_lib0clear(&___nl__im__220);
#line 451
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__211, ___ref___rec__2));
#line 452
___nl__bool__221 = true;
#line 452
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__208, ___nl__bool__221, ___ref___rec__2));
#line 452
//clear ___nl__bool__221;
#line 453
goto label_1;
#line 453
label_44:
;
#line 453
c_rt_lib0move(&___nl__im__222, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 453
c_rt_lib0move(&___nl__im__223,___get_global_const(830));
#line 453
___nl__bool__6 = c_rt_lib0eq(___nl__im__222, ___nl__im__223);
#line 453
c_rt_lib0clear(&___nl__im__222);
#line 453
c_rt_lib0clear(&___nl__im__223);
#line 453
___nl__bool__6 = !___nl__bool__6;
#line 453
if(___nl__bool__6){ goto label_49;}
#line 454
___nl__int__224 = translator_priv0get_sim_label(___ref___rec__2);
#line 455
c_rt_lib0move(&___nl__im__226, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 455
c_rt_lib0move(&___nl__im__225, translator_priv0new_register(___ref___rec__2, ___nl__im__226));
#line 455
c_rt_lib0clear(&___nl__im__226);
#line 456
c_rt_lib0move(&___nl__im__228, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 456
c_rt_lib0move(&___nl__im__227, translator_priv0def_val(___nl__im__228, ___nl__im__1, ___nl__im__225, ___ref___rec__2));
#line 456
c_rt_lib0clear(&___nl__im__228);
#line 457
c_rt_lib0move(&___nl__im__231,___get_global_const(336));
#line 457
c_rt_lib0move(&___nl__im__230, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__225, ___get_global_const(75), ___nl__im__227, ___get_global_const(513), ___nl__im__231));
#line 457
c_rt_lib0clear(&___nl__im__231);
#line 457
c_rt_lib0move(&___nl__im__229, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__230));
#line 457
c_rt_lib0clear(&___nl__im__230);
#line 457
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__229));
#line 457
c_rt_lib0clear(&___nl__im__229);
#line 458
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__224, ___nl__im__225, ___ref___rec__2));
#line 459
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 459
c_rt_lib0delete(translator_priv0def_val(___nl__im__232, ___nl__im__1, ___nl__im__225, ___ref___rec__2));
#line 459
c_rt_lib0clear(&___nl__im__232);
#line 460
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__224, ___ref___rec__2));
#line 461
goto label_1;
#line 461
label_49:
;
#line 461
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 461
c_rt_lib0move(&___nl__im__234,___get_global_const(831));
#line 461
___nl__bool__6 = c_rt_lib0eq(___nl__im__233, ___nl__im__234);
#line 461
c_rt_lib0clear(&___nl__im__233);
#line 461
c_rt_lib0clear(&___nl__im__234);
#line 461
___nl__bool__6 = !___nl__bool__6;
#line 461
if(___nl__bool__6){ goto label_50;}
#line 462
___nl__int__235 = translator_priv0get_sim_label(___ref___rec__2);
#line 463
c_rt_lib0move(&___nl__im__237, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 463
c_rt_lib0move(&___nl__im__236, translator_priv0new_register(___ref___rec__2, ___nl__im__237));
#line 463
c_rt_lib0clear(&___nl__im__237);
#line 464
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 464
c_rt_lib0move(&___nl__im__238, translator_priv0def_val(___nl__im__239, ___nl__im__1, ___nl__im__236, ___ref___rec__2));
#line 464
c_rt_lib0clear(&___nl__im__239);
#line 465
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__235, ___nl__im__238, ___ref___rec__2));
#line 466
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 466
c_rt_lib0delete(translator_priv0def_val(___nl__im__240, ___nl__im__1, ___nl__im__236, ___ref___rec__2));
#line 466
c_rt_lib0clear(&___nl__im__240);
#line 467
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__235, ___ref___rec__2));
#line 468
goto label_1;
#line 468
label_50:
;
#line 469
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(273)));
#line 469
c_rt_lib0move(&___nl__im__241, translator_priv0calc_val(___nl__im__242, ___ref___rec__2));
#line 469
c_rt_lib0clear(&___nl__im__242);
#line 470
c_rt_lib0move(&___nl__im__244, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(274)));
#line 470
c_rt_lib0move(&___nl__im__243, translator_priv0calc_val(___nl__im__244, ___ref___rec__2));
#line 470
c_rt_lib0clear(&___nl__im__244);
#line 471
c_rt_lib0move(&___nl__im__245, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(513)));
#line 471
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__1, ___nl__im__241, ___nl__im__243, ___nl__im__245, ___ref___rec__2));
#line 471
c_rt_lib0clear(&___nl__im__245);
#line 472
goto label_1;
#line 472
label_1:
;
#line 472
//clear ___nl__bool__6;
#line 472
c_rt_lib0clear(&___nl__im__9);
#line 472
c_rt_lib0clear(&___nl__im__12);
#line 472
c_rt_lib0clear(&___nl__im__43);
#line 472
c_rt_lib0clear(&___nl__im__46);
#line 472
c_rt_lib0clear(&___nl__im__55);
#line 472
c_rt_lib0clear(&___nl__im__179);
#line 472
c_rt_lib0clear(&___nl__im__181);
#line 472
//clear ___nl__int__186;
#line 472
c_rt_lib0clear(&___nl__im__206);
#line 472
c_rt_lib0clear(&___nl__im__208);
#line 472
c_rt_lib0clear(&___nl__im__211);
#line 472
//clear ___nl__int__224;
#line 472
c_rt_lib0clear(&___nl__im__225);
#line 472
c_rt_lib0clear(&___nl__im__227);
#line 472
//clear ___nl__int__235;
#line 472
c_rt_lib0clear(&___nl__im__236);
#line 472
c_rt_lib0clear(&___nl__im__238);
#line 472
c_rt_lib0clear(&___nl__im__241);
#line 472
c_rt_lib0clear(&___nl__im__243);
#line 472
c_rt_lib0clear(&___nl__im__0);
#line 472
c_rt_lib0clear(&___nl__im__1);
#line 472
c_rt_lib0clear(&___nl__im__3);
#line 472
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
#line 476
___nl__int__3 = 0;
#line 476
___nl__int__4 = 1;
#line 476
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 476
label_3:
;
#line 476
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 476
___nl__bool__6 = ___nl__int__7;
#line 476
if(___nl__bool__6){ goto label_1;}
#line 476
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 476
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 477
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__2, ___ref___rec__1));
#line 477
c_rt_lib0clear(&___nl__im__2);
#line 477
label_2:
;
#line 478
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 478
goto label_3;
#line 478
label_1:
;
#line 478
c_rt_lib0clear(&___nl__im__0);
#line 478
c_rt_lib0clear(&___nl__im__2);
#line 478
//clear ___nl__int__3;
#line 478
//clear ___nl__int__4;
#line 478
//clear ___nl__int__5;
#line 478
//clear ___nl__bool__6;
#line 478
//clear ___nl__int__7;
#line 478
c_rt_lib0clear(&___nl__im__8);
#line 478
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
INT  ___nl__int__60 = 0;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
INT  ___nl__int__71 = 0;
ImmT  ___nl__im__72 = NULL;
INT  ___nl__int__73 = 0;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
INT  ___nl__int__79 = 0;
ImmT  ___nl__im__80 = NULL;
bool  ___nl__bool__81 = false;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
#line 482
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(687));
#line 482
if(___nl__bool__3){ goto label_2;}
#line 484
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(895));
#line 484
if(___nl__bool__3){ goto label_3;}
#line 485
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(896));
#line 485
if(___nl__bool__3){ goto label_4;}
#line 485
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 485
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 485
nl_die_arg(___nl__im__4);
#line 482
label_2:
;
#line 482
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(687)));
#line 482
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 483
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(166)));
#line 483
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(204)));
#line 483
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 483
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 483
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_const(166), ___nl__im__8, ___get_global_const(204), ___nl__im__9, ___get_global_const(453), ___nl__im__10, ___get_global_const(218), ___nl__im__11));
#line 483
c_rt_lib0clear(&___nl__im__8);
#line 483
c_rt_lib0clear(&___nl__im__9);
#line 483
c_rt_lib0clear(&___nl__im__10);
#line 483
c_rt_lib0clear(&___nl__im__11);
#line 483
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 483
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__7, ___ref___rec__2, ___nl__im__12));
#line 483
c_rt_lib0clear(&___nl__im__7);
#line 483
c_rt_lib0clear(&___nl__im__12);
#line 484
goto label_1;
#line 484
label_3:
;
#line 484
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(895)));
#line 484
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 485
goto label_1;
#line 485
label_4:
;
#line 485
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(896)));
#line 485
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 486
goto label_1;
#line 486
label_1:
;
#line 487
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 487
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__2, ___nl__im__18));
#line 487
c_rt_lib0clear(&___nl__im__18);
#line 489
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(687));
#line 489
if(___nl__bool__20){ goto label_6;}
#line 495
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(895));
#line 495
if(___nl__bool__20){ goto label_7;}
#line 497
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(896));
#line 497
if(___nl__bool__20){ goto label_8;}
#line 497
c_rt_lib0move(&___nl__im__21,___get_global_const(16));
#line 497
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__0));
#line 497
nl_die_arg(___nl__im__21);
#line 489
label_6:
;
#line 489
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(687)));
#line 489
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 490
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_const(218)));
#line 490
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(218));
#line 490
if(___nl__bool__25){ goto label_10;}
#line 492
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_const(73));
#line 492
if(___nl__bool__25){ goto label_11;}
#line 492
c_rt_lib0move(&___nl__im__26,___get_global_const(16));
#line 492
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 492
nl_die_arg(___nl__im__26);
#line 490
label_10:
;
#line 490
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__24, ___get_global_const(218)));
#line 490
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 491
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__27, ___ref___rec__2));
#line 492
goto label_9;
#line 492
label_11:
;
#line 493
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 493
nl_die_arg(___nl__im__29);
#line 494
goto label_9;
#line 494
label_9:
;
#line 495
goto label_5;
#line 495
label_7:
;
#line 495
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(895)));
#line 495
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 496
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(274)));
#line 496
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__32, ___ref___rec__2));
#line 496
c_rt_lib0clear(&___nl__im__32);
#line 497
goto label_5;
#line 497
label_8:
;
#line 497
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(896)));
#line 497
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 498
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__33, ___ref___rec__2));
#line 499
goto label_5;
#line 499
label_5:
;
#line 500
___nl__int__35 = translator_priv0get_sim_label(___ref___rec__2);
#line 501
c_rt_lib0move(&___nl__im__38,___get_global_const(80));
#line 501
___nl__int__39 = 1;
#line 501
___nl__int__39 = -___nl__int__39;
#line 501
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__39));
#line 501
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__17, ___get_global_const(75), ___nl__im__19, ___get_global_const(204), ___nl__im__38, ___get_global_const(520), ___nl__im__40));
#line 501
c_rt_lib0clear(&___nl__im__38);
#line 501
//clear ___nl__int__39;
#line 501
c_rt_lib0clear(&___nl__im__40);
#line 501
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__37));
#line 501
c_rt_lib0clear(&___nl__im__37);
#line 501
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 501
c_rt_lib0clear(&___nl__im__36);
#line 502
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__35, ___nl__im__17, ___ref___rec__2));
#line 503
___nl__bool__41 = ___nl__bool__1;
#line 503
___nl__bool__41 = !___nl__bool__41;
#line 503
if(___nl__bool__41){ goto label_13;}
#line 504
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__19));
#line 504
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__42, ___ref___rec__2));
#line 504
c_rt_lib0clear(&___nl__im__42);
#line 505
goto label_12;
#line 505
label_13:
;
#line 506
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(276), ___nl__im__19));
#line 506
c_rt_lib0move(&___nl__im__46,___get_global_const(176));
#line 506
___nl__int__47 = 1;
#line 506
___nl__int__47 = -___nl__int__47;
#line 506
c_rt_lib0move(&___nl__im__48, c_rt_lib0int_new(___nl__int__47));
#line 506
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 506
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(5, ___get_global_const(222), ___nl__im__19, ___get_global_const(75), ___nl__im__45, ___get_global_const(533), ___nl__im__46, ___get_global_const(520), ___nl__im__48, ___get_global_const(538), ___nl__im__49));
#line 506
c_rt_lib0clear(&___nl__im__45);
#line 506
c_rt_lib0clear(&___nl__im__46);
#line 506
//clear ___nl__int__47;
#line 506
c_rt_lib0clear(&___nl__im__48);
#line 506
c_rt_lib0clear(&___nl__im__49);
#line 506
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(244), ___nl__im__44));
#line 506
c_rt_lib0clear(&___nl__im__44);
#line 506
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__43));
#line 506
c_rt_lib0clear(&___nl__im__43);
#line 507
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__19));
#line 507
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__50));
#line 507
c_rt_lib0clear(&___nl__im__50);
#line 508
goto label_12;
#line 508
label_12:
;
#line 508
//clear ___nl__bool__41;
#line 509
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__35, ___ref___rec__2));
#line 510
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(687));
#line 510
if(___nl__bool__51){ goto label_15;}
#line 512
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(895));
#line 512
if(___nl__bool__51){ goto label_16;}
#line 517
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(896));
#line 517
if(___nl__bool__51){ goto label_17;}
#line 517
c_rt_lib0move(&___nl__im__52,___get_global_const(16));
#line 517
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__0));
#line 517
nl_die_arg(___nl__im__52);
#line 510
label_15:
;
#line 510
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(687)));
#line 510
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 511
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(166)));
#line 511
c_rt_lib0move(&___nl__im__57, translator_priv0get_var_register(___nl__im__58, ___ref___rec__2));
#line 511
c_rt_lib0clear(&___nl__im__58);
#line 511
c_rt_lib0move(&___nl__im__59,___get_global_const(80));
#line 511
___nl__int__60 = 1;
#line 511
___nl__int__60 = -___nl__int__60;
#line 511
c_rt_lib0move(&___nl__im__61, c_rt_lib0int_new(___nl__int__60));
#line 511
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__57, ___get_global_const(75), ___nl__im__19, ___get_global_const(204), ___nl__im__59, ___get_global_const(520), ___nl__im__61));
#line 511
c_rt_lib0clear(&___nl__im__57);
#line 511
c_rt_lib0clear(&___nl__im__59);
#line 511
//clear ___nl__int__60;
#line 511
c_rt_lib0clear(&___nl__im__61);
#line 511
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__56));
#line 511
c_rt_lib0clear(&___nl__im__56);
#line 511
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__55));
#line 511
c_rt_lib0clear(&___nl__im__55);
#line 512
goto label_14;
#line 512
label_16:
;
#line 512
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(895)));
#line 512
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 513
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_const(273)));
#line 513
___nl__bool__66 = false;
#line 513
c_rt_lib0move(&___nl__im__64, translator_priv0get_value_of_lvalue(___nl__im__65, ___nl__bool__66, ___ref___rec__2));
#line 513
c_rt_lib0clear(&___nl__im__65);
#line 513
//clear ___nl__bool__66;
#line 514
___nl__int__70 = c_rt_lib0array_len(___nl__im__64);
#line 514
___nl__int__71 = 1;
#line 514
___nl__int__69 = ___nl__int__70 - ___nl__int__71;
#line 514
//clear ___nl__int__70;
#line 514
//clear ___nl__int__71;
#line 514
c_rt_lib0move(&___nl__im__68, c_rt_lib0array_get(___nl__im__64, ___nl__int__69));
#line 514
//clear ___nl__int__69;
#line 514
___nl__int__74 = c_rt_lib0array_len(___nl__im__64);
#line 514
___nl__int__75 = 1;
#line 514
___nl__int__73 = ___nl__int__74 - ___nl__int__75;
#line 514
//clear ___nl__int__74;
#line 514
//clear ___nl__int__75;
#line 514
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_get(___nl__im__64, ___nl__int__73));
#line 514
//clear ___nl__int__73;
#line 514
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__72, ___get_global_const(218)));
#line 514
c_rt_lib0clear(&___nl__im__68);
#line 514
c_rt_lib0clear(&___nl__im__72);
#line 515
c_rt_lib0move(&___nl__im__78,___get_global_const(80));
#line 515
___nl__int__79 = 1;
#line 515
___nl__int__79 = -___nl__int__79;
#line 515
c_rt_lib0move(&___nl__im__80, c_rt_lib0int_new(___nl__int__79));
#line 515
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__67, ___get_global_const(75), ___nl__im__19, ___get_global_const(204), ___nl__im__78, ___get_global_const(520), ___nl__im__80));
#line 515
c_rt_lib0clear(&___nl__im__78);
#line 515
//clear ___nl__int__79;
#line 515
c_rt_lib0clear(&___nl__im__80);
#line 515
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__77));
#line 515
c_rt_lib0clear(&___nl__im__77);
#line 515
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__76));
#line 515
c_rt_lib0clear(&___nl__im__76);
#line 516
___nl__bool__81 = false;
#line 516
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__64, ___nl__bool__81, ___ref___rec__2));
#line 516
//clear ___nl__bool__81;
#line 517
goto label_14;
#line 517
label_17:
;
#line 517
c_rt_lib0move(&___nl__im__83, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(896)));
#line 517
c_rt_lib0copy(&___nl__im__82, ___nl__im__83);
#line 518
goto label_14;
#line 518
label_14:
;
#line 518
c_rt_lib0clear(&___nl__im__0);
#line 518
//clear ___nl__bool__1;
#line 518
//clear ___nl__bool__3;
#line 518
c_rt_lib0clear(&___nl__im__4);
#line 518
c_rt_lib0clear(&___nl__im__5);
#line 518
c_rt_lib0clear(&___nl__im__6);
#line 518
c_rt_lib0clear(&___nl__im__13);
#line 518
c_rt_lib0clear(&___nl__im__14);
#line 518
c_rt_lib0clear(&___nl__im__15);
#line 518
c_rt_lib0clear(&___nl__im__16);
#line 518
c_rt_lib0clear(&___nl__im__17);
#line 518
c_rt_lib0clear(&___nl__im__19);
#line 518
//clear ___nl__bool__20;
#line 518
c_rt_lib0clear(&___nl__im__21);
#line 518
c_rt_lib0clear(&___nl__im__22);
#line 518
c_rt_lib0clear(&___nl__im__23);
#line 518
c_rt_lib0clear(&___nl__im__24);
#line 518
//clear ___nl__bool__25;
#line 518
c_rt_lib0clear(&___nl__im__26);
#line 518
c_rt_lib0clear(&___nl__im__27);
#line 518
c_rt_lib0clear(&___nl__im__28);
#line 518
c_rt_lib0clear(&___nl__im__29);
#line 518
c_rt_lib0clear(&___nl__im__30);
#line 518
c_rt_lib0clear(&___nl__im__31);
#line 518
c_rt_lib0clear(&___nl__im__33);
#line 518
c_rt_lib0clear(&___nl__im__34);
#line 518
//clear ___nl__int__35;
#line 518
//clear ___nl__bool__51;
#line 518
c_rt_lib0clear(&___nl__im__52);
#line 518
c_rt_lib0clear(&___nl__im__53);
#line 518
c_rt_lib0clear(&___nl__im__54);
#line 518
c_rt_lib0clear(&___nl__im__62);
#line 518
c_rt_lib0clear(&___nl__im__63);
#line 518
c_rt_lib0clear(&___nl__im__64);
#line 518
c_rt_lib0clear(&___nl__im__67);
#line 518
c_rt_lib0clear(&___nl__im__82);
#line 518
c_rt_lib0clear(&___nl__im__83);
#line 518
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
#line 522
___nl__im_ptr__2 = &((*___ref___rec__1).debug0field);
#line 522
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 522
c_rt_lib0hash_set_value_dec(___nl__im_ptr__2, ___get_global_const(504), ___nl__im__3);
#line 522
___nl__im_ptr__2 = NULL;
#line 522
c_rt_lib0clear(&___nl__im__3);
#line 523
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 523
c_rt_lib0move(&___nl__im__5,___get_global_const(708));
#line 523
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___nl__im_ptr__4), ___nl__im__5));
#line 523
___nl__int__6 = 1;
#line 523
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 523
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 523
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 523
c_rt_lib0move(&___nl__string__9,___get_global_const(708));
#line 523
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__4, ___nl__string__9, ___nl__im__5));
#line 523
___nl__im_ptr__4 = NULL;
#line 523
c_rt_lib0clear(&___nl__im__5);
#line 523
//clear ___nl__int__6;
#line 523
//clear ___nl__int__7;
#line 523
//clear ___nl__int__8;
#line 523
c_rt_lib0clear(&___nl__string__9);
#line 523
c_rt_lib0clear(&___nl__im__0);
#line 523
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
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT * ___nl__im_ptr__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT * ___nl__im_ptr__45 = NULL;
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
#line 527
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 527
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__2, ___ref___rec__1));
#line 527
c_rt_lib0clear(&___nl__im__2);
#line 528
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 528
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(868));
#line 528
if(___nl__bool__4){ goto label_2;}
#line 530
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(870));
#line 530
if(___nl__bool__4){ goto label_3;}
#line 532
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(158));
#line 532
if(___nl__bool__4){ goto label_4;}
#line 534
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(872));
#line 534
if(___nl__bool__4){ goto label_5;}
#line 536
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(871));
#line 536
if(___nl__bool__4){ goto label_6;}
#line 538
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(873));
#line 538
if(___nl__bool__4){ goto label_7;}
#line 540
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(869));
#line 540
if(___nl__bool__4){ goto label_8;}
#line 542
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(881));
#line 542
if(___nl__bool__4){ goto label_9;}
#line 543
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(218));
#line 543
if(___nl__bool__4){ goto label_10;}
#line 545
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(879));
#line 545
if(___nl__bool__4){ goto label_11;}
#line 547
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(245));
#line 547
if(___nl__bool__4){ goto label_12;}
#line 549
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(878));
#line 549
if(___nl__bool__4){ goto label_13;}
#line 551
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(880));
#line 551
if(___nl__bool__4){ goto label_14;}
#line 553
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(176));
#line 553
if(___nl__bool__4){ goto label_15;}
#line 555
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(876));
#line 555
if(___nl__bool__4){ goto label_16;}
#line 557
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(877));
#line 557
if(___nl__bool__4){ goto label_17;}
#line 559
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(246));
#line 559
if(___nl__bool__4){ goto label_18;}
#line 561
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(251));
#line 561
if(___nl__bool__4){ goto label_19;}
#line 563
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(874));
#line 563
if(___nl__bool__4){ goto label_20;}
#line 565
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(875));
#line 565
if(___nl__bool__4){ goto label_21;}
#line 565
c_rt_lib0move(&___nl__im__5,___get_global_const(16));
#line 565
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 565
nl_die_arg(___nl__im__5);
#line 528
label_2:
;
#line 528
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(868)));
#line 528
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 529
___nl__bool__8 = false;
#line 529
c_rt_lib0delete(translator_priv0print_if(___nl__im__6, ___nl__bool__8, ___ref___rec__1));
#line 529
//clear ___nl__bool__8;
#line 530
goto label_1;
#line 530
label_3:
;
#line 530
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(870)));
#line 530
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 531
c_rt_lib0delete(translator_priv0print_fora(___nl__im__9, ___ref___rec__1));
#line 532
goto label_1;
#line 532
label_4:
;
#line 532
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(158)));
#line 532
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 533
c_rt_lib0delete(translator_priv0print_loop(___nl__im__11, ___ref___rec__1));
#line 534
goto label_1;
#line 534
label_5:
;
#line 534
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(872)));
#line 534
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 535
c_rt_lib0delete(translator_priv0print_rep(___nl__im__13, ___ref___rec__1));
#line 536
goto label_1;
#line 536
label_6:
;
#line 536
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(871)));
#line 536
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 537
c_rt_lib0delete(translator_priv0print_forh(___nl__im__15, ___ref___rec__1));
#line 538
goto label_1;
#line 538
label_7:
;
#line 538
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(873)));
#line 538
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 539
c_rt_lib0delete(translator_priv0print_while(___nl__im__17, ___ref___rec__1));
#line 540
goto label_1;
#line 540
label_8:
;
#line 540
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(869)));
#line 540
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 541
c_rt_lib0delete(translator_priv0print_for(___nl__im__19, ___ref___rec__1));
#line 542
goto label_1;
#line 542
label_9:
;
#line 543
goto label_1;
#line 543
label_10:
;
#line 543
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(218)));
#line 543
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 544
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 544
___nl__int__25 = 1;
#line 544
___nl__int__25 = -___nl__int__25;
#line 544
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 544
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 544
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__24, ___get_global_const(217), ___nl__im__26, ___get_global_const(329), ___nl__im__27));
#line 544
c_rt_lib0clear(&___nl__im__24);
#line 544
//clear ___nl__int__25;
#line 544
c_rt_lib0clear(&___nl__im__26);
#line 544
c_rt_lib0clear(&___nl__im__27);
#line 544
c_rt_lib0delete(translator_priv0print_val(___nl__im__21, ___nl__im__23, ___ref___rec__1));
#line 544
c_rt_lib0clear(&___nl__im__23);
#line 545
goto label_1;
#line 545
label_11:
;
#line 545
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(879)));
#line 545
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 546
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__im__28, ___ref___rec__1));
#line 547
goto label_1;
#line 547
label_12:
;
#line 547
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(245)));
#line 547
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 548
c_rt_lib0delete(translator_priv0print_return(___nl__im__30, ___ref___rec__1));
#line 549
goto label_1;
#line 549
label_13:
;
#line 549
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(878)));
#line 549
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 550
c_rt_lib0delete(translator_priv0print_match(___nl__im__32, ___ref___rec__1));
#line 551
goto label_1;
#line 551
label_14:
;
#line 551
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(880)));
#line 551
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 552
___nl__bool__36 = true;
#line 552
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__34, ___nl__bool__36, ___ref___rec__1));
#line 552
//clear ___nl__bool__36;
#line 553
goto label_1;
#line 553
label_15:
;
#line 553
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(176)));
#line 553
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 554
___nl__bool__39 = false;
#line 554
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__37, ___nl__bool__39, ___ref___rec__1));
#line 554
//clear ___nl__bool__39;
#line 555
goto label_1;
#line 555
label_16:
;
#line 556
___nl__im_ptr__42 = &((*___ref___rec__1).loop_label0field);
#line 556
c_rt_lib0copy(&___nl__im__41, (*___nl__im_ptr__42));
#line 556
___nl__im_ptr__42 = NULL;
#line 556
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_const(876)));
#line 556
c_rt_lib0clear(&___nl__im__41);
#line 556
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__40));
#line 556
c_rt_lib0clear(&___nl__im__40);
#line 557
goto label_1;
#line 557
label_17:
;
#line 558
___nl__im_ptr__45 = &((*___ref___rec__1).loop_label0field);
#line 558
c_rt_lib0copy(&___nl__im__44, (*___nl__im_ptr__45));
#line 558
___nl__im_ptr__45 = NULL;
#line 558
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(877)));
#line 558
c_rt_lib0clear(&___nl__im__44);
#line 558
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__43));
#line 558
c_rt_lib0clear(&___nl__im__43);
#line 559
goto label_1;
#line 559
label_18:
;
#line 559
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(246)));
#line 559
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 560
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 560
c_rt_lib0delete(translator_priv0print_die(___nl__im__46, ___nl__im__48, ___ref___rec__1));
#line 560
c_rt_lib0clear(&___nl__im__48);
#line 561
goto label_1;
#line 561
label_19:
;
#line 561
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(251)));
#line 561
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 562
c_rt_lib0move(&___nl__im__51, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 562
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__49, ___ref___rec__1, ___nl__im__51));
#line 562
c_rt_lib0clear(&___nl__im__51);
#line 563
goto label_1;
#line 563
label_20:
;
#line 563
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(874)));
#line 563
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 564
c_rt_lib0delete(translator_priv0print_if_mod(___nl__im__52, ___ref___rec__1));
#line 565
goto label_1;
#line 565
label_21:
;
#line 565
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__3, ___get_global_const(875)));
#line 565
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 566
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__im__54, ___ref___rec__1));
#line 567
goto label_1;
#line 567
label_1:
;
#line 567
c_rt_lib0clear(&___nl__im__0);
#line 567
c_rt_lib0clear(&___nl__im__3);
#line 567
//clear ___nl__bool__4;
#line 567
c_rt_lib0clear(&___nl__im__5);
#line 567
c_rt_lib0clear(&___nl__im__6);
#line 567
c_rt_lib0clear(&___nl__im__7);
#line 567
c_rt_lib0clear(&___nl__im__9);
#line 567
c_rt_lib0clear(&___nl__im__10);
#line 567
c_rt_lib0clear(&___nl__im__11);
#line 567
c_rt_lib0clear(&___nl__im__12);
#line 567
c_rt_lib0clear(&___nl__im__13);
#line 567
c_rt_lib0clear(&___nl__im__14);
#line 567
c_rt_lib0clear(&___nl__im__15);
#line 567
c_rt_lib0clear(&___nl__im__16);
#line 567
c_rt_lib0clear(&___nl__im__17);
#line 567
c_rt_lib0clear(&___nl__im__18);
#line 567
c_rt_lib0clear(&___nl__im__19);
#line 567
c_rt_lib0clear(&___nl__im__20);
#line 567
c_rt_lib0clear(&___nl__im__21);
#line 567
c_rt_lib0clear(&___nl__im__22);
#line 567
c_rt_lib0clear(&___nl__im__28);
#line 567
c_rt_lib0clear(&___nl__im__29);
#line 567
c_rt_lib0clear(&___nl__im__30);
#line 567
c_rt_lib0clear(&___nl__im__31);
#line 567
c_rt_lib0clear(&___nl__im__32);
#line 567
c_rt_lib0clear(&___nl__im__33);
#line 567
c_rt_lib0clear(&___nl__im__34);
#line 567
c_rt_lib0clear(&___nl__im__35);
#line 567
c_rt_lib0clear(&___nl__im__37);
#line 567
c_rt_lib0clear(&___nl__im__38);
#line 567
c_rt_lib0clear(&___nl__im__46);
#line 567
c_rt_lib0clear(&___nl__im__47);
#line 567
c_rt_lib0clear(&___nl__im__49);
#line 567
c_rt_lib0clear(&___nl__im__50);
#line 567
c_rt_lib0clear(&___nl__im__52);
#line 567
c_rt_lib0clear(&___nl__im__53);
#line 567
c_rt_lib0clear(&___nl__im__54);
#line 567
c_rt_lib0clear(&___nl__im__55);
#line 567
return NULL;
}

ImmT  translator_priv0print_loop_break(translator0state_t0type* ___ref___rec__0,translator0loop0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 571
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(533)));
#line 571
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 571
c_rt_lib0clear(&___nl__im__4);
#line 571
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 571
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__5));
#line 571
//clear ___nl__int__3;
#line 571
c_rt_lib0clear(&___nl__im__5);
#line 571
c_rt_lib0delete(translator_priv0print(___ref___rec__0, ___nl__im__2));
#line 571
c_rt_lib0clear(&___nl__im__2);
#line 571
c_rt_lib0clear(&___nl__im__1);
#line 571
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
#line 576
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 577
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 578
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 579
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 579
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(220)));
#line 579
c_rt_lib0clear(&___nl__im__8);
#line 579
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(881)));
#line 579
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(220), ___nl__im__7, ___get_global_const(226), ___nl__im__9));
#line 579
c_rt_lib0clear(&___nl__im__7);
#line 579
c_rt_lib0clear(&___nl__im__9);
#line 579
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(882), ___nl__im__3, ___get_global_const(868), ___nl__im__4, ___get_global_const(883), ___nl__im__5, ___get_global_const(884), ___nl__im__6));
#line 579
c_rt_lib0clear(&___nl__im__3);
#line 579
c_rt_lib0clear(&___nl__im__4);
#line 579
c_rt_lib0clear(&___nl__im__5);
#line 579
c_rt_lib0clear(&___nl__im__6);
#line 581
___nl__bool__10 = true;
#line 581
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__10, ___ref___rec__1));
#line 581
//clear ___nl__bool__10;
#line 581
c_rt_lib0clear(&___nl__im__0);
#line 581
c_rt_lib0clear(&___nl__im__2);
#line 581
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
#line 588
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 588
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(220)));
#line 588
c_rt_lib0clear(&___nl__im__5);
#line 591
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 591
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(220)));
#line 591
c_rt_lib0clear(&___nl__im__10);
#line 592
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 592
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(900), ___nl__im__12));
#line 592
c_rt_lib0clear(&___nl__im__12);
#line 593
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 593
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__9, ___get_global_const(218), ___nl__im__11, ___get_global_const(204), ___nl__im__13));
#line 593
c_rt_lib0clear(&___nl__im__9);
#line 593
c_rt_lib0clear(&___nl__im__11);
#line 593
c_rt_lib0clear(&___nl__im__13);
#line 595
c_rt_lib0move(&___nl__im__14,___get_global_const(336));
#line 595
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_const(223), ___nl__im__8, ___get_global_const(513), ___nl__im__14));
#line 595
c_rt_lib0clear(&___nl__im__8);
#line 595
c_rt_lib0clear(&___nl__im__14);
#line 595
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(904), ___nl__im__7));
#line 595
c_rt_lib0clear(&___nl__im__7);
#line 597
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(12)));
#line 597
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__4, ___get_global_const(218), ___nl__im__6, ___get_global_const(204), ___nl__im__15));
#line 597
c_rt_lib0clear(&___nl__im__4);
#line 597
c_rt_lib0clear(&___nl__im__6);
#line 597
c_rt_lib0clear(&___nl__im__15);
#line 599
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 600
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 601
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 601
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(220)));
#line 601
c_rt_lib0clear(&___nl__im__20);
#line 601
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(881)));
#line 601
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_const(220), ___nl__im__19, ___get_global_const(226), ___nl__im__21));
#line 601
c_rt_lib0clear(&___nl__im__19);
#line 601
c_rt_lib0clear(&___nl__im__21);
#line 601
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_const(882), ___nl__im__3, ___get_global_const(868), ___nl__im__16, ___get_global_const(883), ___nl__im__17, ___get_global_const(884), ___nl__im__18));
#line 601
c_rt_lib0clear(&___nl__im__3);
#line 601
c_rt_lib0clear(&___nl__im__16);
#line 601
c_rt_lib0clear(&___nl__im__17);
#line 601
c_rt_lib0clear(&___nl__im__18);
#line 603
___nl__bool__22 = true;
#line 603
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__22, ___ref___rec__1));
#line 603
//clear ___nl__bool__22;
#line 603
c_rt_lib0clear(&___nl__im__0);
#line 603
c_rt_lib0clear(&___nl__im__2);
#line 603
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
#line 607
c_rt_lib0move(&___nl__im__3, translator_priv0save_registers(___ref___rec__2));
#line 608
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__2);
#line 609
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 610
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 610
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__2, ___nl__im__7));
#line 610
c_rt_lib0clear(&___nl__im__7);
#line 611
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 611
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__6, ___ref___rec__2));
#line 611
c_rt_lib0clear(&___nl__im__8);
#line 612
c_rt_lib0move(&___nl__im__11,___get_global_const(336));
#line 612
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__6, ___get_global_const(75), ___nl__im__6, ___get_global_const(513), ___nl__im__11));
#line 612
c_rt_lib0clear(&___nl__im__11);
#line 612
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__10));
#line 612
c_rt_lib0clear(&___nl__im__10);
#line 612
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 612
c_rt_lib0clear(&___nl__im__9);
#line 613
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 614
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(868)));
#line 614
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__12, ___ref___rec__2));
#line 614
c_rt_lib0clear(&___nl__im__12);
#line 615
___nl__bool__13 = ___nl__bool__1;
#line 615
___nl__bool__13 = !___nl__bool__13;
#line 615
___nl__bool__13 = !___nl__bool__13;
#line 615
if(___nl__bool__13){ goto label_2;}
#line 615
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(868)));
#line 615
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_const(220)));
#line 615
c_rt_lib0clear(&___nl__im__16);
#line 615
c_rt_lib0move(&___nl__im__14, translator0last_debug_char(___nl__im__15));
#line 615
c_rt_lib0clear(&___nl__im__15);
#line 615
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__14, ___ref___rec__2));
#line 615
c_rt_lib0clear(&___nl__im__14);
#line 615
goto label_1;
#line 615
label_2:
;
#line 615
label_1:
;
#line 615
//clear ___nl__bool__13;
#line 616
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__4));
#line 616
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__18));
#line 616
c_rt_lib0clear(&___nl__im__18);
#line 616
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__17));
#line 616
c_rt_lib0clear(&___nl__im__17);
#line 617
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 618
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(883)));
#line 618
___nl__int__21 = 0;
#line 618
___nl__int__22 = 1;
#line 618
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 618
label_5:
;
#line 618
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 618
___nl__bool__24 = ___nl__int__25;
#line 618
if(___nl__bool__24){ goto label_3;}
#line 618
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 618
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 619
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(220)));
#line 619
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__27, ___ref___rec__2));
#line 619
c_rt_lib0clear(&___nl__im__27);
#line 620
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 621
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(882)));
#line 621
c_rt_lib0delete(translator_priv0print_val(___nl__im__28, ___nl__im__6, ___ref___rec__2));
#line 621
c_rt_lib0clear(&___nl__im__28);
#line 622
c_rt_lib0move(&___nl__im__31,___get_global_const(336));
#line 622
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__6, ___get_global_const(75), ___nl__im__6, ___get_global_const(513), ___nl__im__31));
#line 622
c_rt_lib0clear(&___nl__im__31);
#line 622
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__30));
#line 622
c_rt_lib0clear(&___nl__im__30);
#line 622
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__29));
#line 622
c_rt_lib0clear(&___nl__im__29);
#line 623
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 624
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(226)));
#line 624
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__32, ___ref___rec__2));
#line 624
c_rt_lib0clear(&___nl__im__32);
#line 625
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(226)));
#line 625
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_const(220)));
#line 625
c_rt_lib0clear(&___nl__im__35);
#line 625
c_rt_lib0move(&___nl__im__33, translator0last_debug_char(___nl__im__34));
#line 625
c_rt_lib0clear(&___nl__im__34);
#line 625
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__33, ___ref___rec__2));
#line 625
c_rt_lib0clear(&___nl__im__33);
#line 626
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__4));
#line 626
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__37));
#line 626
c_rt_lib0clear(&___nl__im__37);
#line 626
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 626
c_rt_lib0clear(&___nl__im__36);
#line 627
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 627
c_rt_lib0clear(&___nl__im__20);
#line 627
label_4:
;
#line 628
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 628
goto label_5;
#line 628
label_3:
;
#line 629
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(884)));
#line 629
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(226)));
#line 629
c_rt_lib0clear(&___nl__im__40);
#line 629
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(881));
#line 629
c_rt_lib0clear(&___nl__im__39);
#line 629
___nl__bool__38 = !___nl__bool__38;
#line 629
___nl__bool__38 = !___nl__bool__38;
#line 629
if(___nl__bool__38){ goto label_7;}
#line 630
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(884)));
#line 630
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__41, ___ref___rec__2));
#line 630
c_rt_lib0clear(&___nl__im__41);
#line 631
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(884)));
#line 631
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(220)));
#line 631
c_rt_lib0clear(&___nl__im__44);
#line 631
c_rt_lib0move(&___nl__im__42, translator0last_debug_char(___nl__im__43));
#line 631
c_rt_lib0clear(&___nl__im__43);
#line 631
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__42, ___ref___rec__2));
#line 631
c_rt_lib0clear(&___nl__im__42);
#line 632
c_rt_lib0move(&___nl__im__46, c_rt_lib0int_new(___nl__int__4));
#line 632
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__46));
#line 632
c_rt_lib0clear(&___nl__im__46);
#line 632
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__45));
#line 632
c_rt_lib0clear(&___nl__im__45);
#line 633
goto label_6;
#line 633
label_7:
;
#line 633
label_6:
;
#line 633
//clear ___nl__bool__38;
#line 634
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__2));
#line 635
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__3, ___ref___rec__2));
#line 635
c_rt_lib0clear(&___nl__im__0);
#line 635
//clear ___nl__bool__1;
#line 635
c_rt_lib0clear(&___nl__im__3);
#line 635
//clear ___nl__int__4;
#line 635
//clear ___nl__int__5;
#line 635
c_rt_lib0clear(&___nl__im__6);
#line 635
c_rt_lib0clear(&___nl__im__19);
#line 635
c_rt_lib0clear(&___nl__im__20);
#line 635
//clear ___nl__int__21;
#line 635
//clear ___nl__int__22;
#line 635
//clear ___nl__int__23;
#line 635
//clear ___nl__bool__24;
#line 635
//clear ___nl__int__25;
#line 635
c_rt_lib0clear(&___nl__im__26);
#line 635
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
#line 642
c_rt_lib0move(&___nl__im__6,___get_global_const(268));
#line 642
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__0, ___get_global_const(265), ___nl__im__6, ___get_global_const(267), ___nl__im__1, ___get_global_const(264), ___nl__im__2));
#line 642
c_rt_lib0clear(&___nl__im__6);
#line 642
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__im__5));
#line 642
c_rt_lib0clear(&___nl__im__5);
#line 642
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 642
c_rt_lib0clear(&___nl__im__4);
#line 642
c_rt_lib0clear(&___nl__im__0);
#line 642
c_rt_lib0clear(&___nl__im__1);
#line 642
c_rt_lib0clear(&___nl__im__2);
#line 642
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
#line 646
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 646
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 646
___nl__im_ptr__4 = NULL;
#line 647
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__0));
#line 648
___nl__im_ptr__6 = &((*___ref___rec__0).loop_label0field);
#line 648
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__1));
#line 648
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_const(533), ___nl__im__9, ___get_global_const(1228), ___nl__im__5));
#line 648
c_rt_lib0clear(&___nl__im__9);
#line 648
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 648
c_rt_lib0hash_set_value_dec(___nl__im_ptr__6, ___get_global_const(876), ___nl__im__7);
#line 648
___nl__im_ptr__6 = NULL;
#line 648
c_rt_lib0clear(&___nl__im__7);
#line 648
c_rt_lib0clear(&___nl__im__8);
#line 649
___nl__im_ptr__10 = &((*___ref___rec__0).loop_label0field);
#line 649
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__2));
#line 649
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_const(533), ___nl__im__13, ___get_global_const(1228), ___nl__im__5));
#line 649
c_rt_lib0clear(&___nl__im__13);
#line 649
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 649
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_const(877), ___nl__im__11);
#line 649
___nl__im_ptr__10 = NULL;
#line 649
c_rt_lib0clear(&___nl__im__11);
#line 649
c_rt_lib0clear(&___nl__im__12);
#line 650
//clear ___nl__int__1;
#line 650
//clear ___nl__int__2;
#line 650
c_rt_lib0clear(&___nl__im__5);
#line 650
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
#line 654
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 654
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 654
___nl__im_ptr__4 = NULL;
#line 654
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(504)));
#line 654
c_rt_lib0clear(&___nl__im__3);
#line 655
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(38)));
#line 655
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 655
c_rt_lib0clear(&___nl__im__6);
#line 657
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(204)));
#line 657
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(328));
#line 657
c_rt_lib0clear(&___nl__im__9);
#line 657
___nl__bool__8 = !___nl__bool__8;
#line 657
if(___nl__bool__8){ goto label_2;}
#line 658
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(568)));
#line 658
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 658
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__10, ___ref___rec__1, ___nl__im__11));
#line 658
c_rt_lib0clear(&___nl__im__10);
#line 658
c_rt_lib0clear(&___nl__im__11);
#line 659
goto label_1;
#line 659
label_2:
;
#line 659
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(204)));
#line 659
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__12, ___get_global_const(128));
#line 659
c_rt_lib0clear(&___nl__im__12);
#line 659
___nl__bool__8 = !___nl__bool__8;
#line 659
if(___nl__bool__8){ goto label_3;}
#line 660
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(568)));
#line 660
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(391)));
#line 660
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__13, ___ref___rec__1, ___nl__im__14));
#line 660
c_rt_lib0clear(&___nl__im__13);
#line 660
c_rt_lib0clear(&___nl__im__14);
#line 661
goto label_1;
#line 661
label_3:
;
#line 662
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 662
nl_die_arg(___nl__im__15);
#line 663
goto label_1;
#line 663
label_1:
;
#line 663
//clear ___nl__bool__8;
#line 663
c_rt_lib0clear(&___nl__im__15);
#line 664
___nl__int__16 = translator_priv0get_sim_label(___ref___rec__1);
#line 665
___nl__int__17 = translator_priv0get_sim_label(___ref___rec__1);
#line 666
___nl__int__18 = translator_priv0get_sim_label(___ref___rec__1);
#line 667
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 667
c_rt_lib0move(&___nl__im__19, translator_priv0new_register(___ref___rec__1, ___nl__im__20));
#line 667
c_rt_lib0clear(&___nl__im__20);
#line 668
___nl__int__21 = 0;
#line 668
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 668
c_rt_lib0delete(translator_priv0load_const(___nl__im__22, ___nl__im__19, ___ref___rec__1));
#line 668
//clear ___nl__int__21;
#line 668
c_rt_lib0clear(&___nl__im__22);
#line 669
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 669
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 669
c_rt_lib0clear(&___nl__im__24);
#line 670
___nl__int__25 = 1;
#line 670
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 670
c_rt_lib0delete(translator_priv0load_const(___nl__im__26, ___nl__im__23, ___ref___rec__1));
#line 670
//clear ___nl__int__25;
#line 670
c_rt_lib0clear(&___nl__im__26);
#line 671
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 671
c_rt_lib0move(&___nl__im__27, translator_priv0new_register(___ref___rec__1, ___nl__im__28));
#line 671
c_rt_lib0clear(&___nl__im__28);
#line 672
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__27, ___get_global_const(75), ___nl__im__5));
#line 672
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_const(241), ___nl__im__30));
#line 672
c_rt_lib0clear(&___nl__im__30);
#line 672
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__29));
#line 672
c_rt_lib0clear(&___nl__im__29);
#line 673
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 673
c_rt_lib0move(&___nl__im__31, translator_priv0new_register(___ref___rec__1, ___nl__im__32));
#line 673
c_rt_lib0clear(&___nl__im__32);
#line 674
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__18, ___ref___rec__1));
#line 675
c_rt_lib0move(&___nl__im__33,___get_global_const(360));
#line 675
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__31, ___nl__im__19, ___nl__im__27, ___nl__im__33, ___ref___rec__1));
#line 675
c_rt_lib0clear(&___nl__im__33);
#line 676
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__16, ___nl__im__31, ___ref___rec__1));
#line 678
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(204)));
#line 678
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__36, ___get_global_const(328));
#line 678
c_rt_lib0clear(&___nl__im__36);
#line 678
___nl__bool__35 = !___nl__bool__35;
#line 678
if(___nl__bool__35){ goto label_5;}
#line 679
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 679
c_rt_lib0move(&___nl__im__34, translator_priv0new_register(___ref___rec__1, ___nl__im__37));
#line 679
c_rt_lib0clear(&___nl__im__37);
#line 680
c_rt_lib0delete(translator_priv0use_index(___nl__im__34, ___nl__im__5, ___nl__im__19, ___ref___rec__1));
#line 681
c_rt_lib0delete(translator_priv0move(___nl__im__7, ___nl__im__34, ___ref___rec__1));
#line 682
goto label_4;
#line 682
label_5:
;
#line 682
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(204)));
#line 682
___nl__bool__35 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(128));
#line 682
c_rt_lib0clear(&___nl__im__38);
#line 682
___nl__bool__35 = !___nl__bool__35;
#line 682
if(___nl__bool__35){ goto label_6;}
#line 683
c_rt_lib0copy(&___nl__im__34, ___nl__im__7);
#line 684
c_rt_lib0delete(translator_priv0use_index(___nl__im__7, ___nl__im__5, ___nl__im__19, ___ref___rec__1));
#line 685
goto label_4;
#line 685
label_6:
;
#line 686
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_mk(0));
#line 686
nl_die_arg(___nl__im__39);
#line 687
goto label_4;
#line 687
label_4:
;
#line 687
//clear ___nl__bool__35;
#line 687
c_rt_lib0clear(&___nl__im__39);
#line 688
c_rt_lib0move(&___nl__im__40, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__16, ___nl__int__17));
#line 689
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 689
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__41, ___ref___rec__1));
#line 689
c_rt_lib0clear(&___nl__im__41);
#line 690
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(204)));
#line 690
___nl__bool__42 = c_rt_lib0priv_is(___nl__im__43, ___get_global_const(328));
#line 690
c_rt_lib0clear(&___nl__im__43);
#line 690
___nl__bool__42 = !___nl__bool__42;
#line 690
if(___nl__bool__42){ goto label_8;}
#line 691
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__7, ___ref___rec__1));
#line 692
goto label_7;
#line 692
label_8:
;
#line 692
label_7:
;
#line 692
//clear ___nl__bool__42;
#line 693
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__17, ___ref___rec__1));
#line 694
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(950)));
#line 694
___nl__bool__44 = c_rt_lib0check_true_native(___nl__im__45);
#line 694
c_rt_lib0clear(&___nl__im__45);
#line 694
___nl__bool__44 = !___nl__bool__44;
#line 694
___nl__bool__44 = !___nl__bool__44;
#line 694
if(___nl__bool__44){ goto label_10;}
#line 694
c_rt_lib0move(&___nl__im__46, translator0last_debug_char(___nl__im__2));
#line 694
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__46, ___ref___rec__1));
#line 694
c_rt_lib0clear(&___nl__im__46);
#line 694
goto label_9;
#line 694
label_10:
;
#line 694
label_9:
;
#line 694
//clear ___nl__bool__44;
#line 695
c_rt_lib0move(&___nl__im__49,___get_global_const(340));
#line 695
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__19, ___get_global_const(273), ___nl__im__19, ___get_global_const(274), ___nl__im__23, ___get_global_const(513), ___nl__im__49));
#line 695
c_rt_lib0clear(&___nl__im__49);
#line 695
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__48));
#line 695
c_rt_lib0clear(&___nl__im__48);
#line 695
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__47));
#line 695
c_rt_lib0clear(&___nl__im__47);
#line 696
c_rt_lib0move(&___nl__im__51, c_rt_lib0int_new(___nl__int__18));
#line 696
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__51));
#line 696
c_rt_lib0clear(&___nl__im__51);
#line 696
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__50));
#line 696
c_rt_lib0clear(&___nl__im__50);
#line 697
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__16, ___ref___rec__1));
#line 698
___nl__im_ptr__52 = &((*___ref___rec__1).loop_label0field);
#line 698
c_rt_lib0copy(___nl__im_ptr__52, ___nl__im__40);
#line 698
___nl__im_ptr__52 = NULL;
#line 698
c_rt_lib0clear(&___nl__im__0);
#line 698
c_rt_lib0clear(&___nl__im__2);
#line 698
c_rt_lib0clear(&___nl__im__5);
#line 698
c_rt_lib0clear(&___nl__im__7);
#line 698
//clear ___nl__int__16;
#line 698
//clear ___nl__int__17;
#line 698
//clear ___nl__int__18;
#line 698
c_rt_lib0clear(&___nl__im__19);
#line 698
c_rt_lib0clear(&___nl__im__23);
#line 698
c_rt_lib0clear(&___nl__im__27);
#line 698
c_rt_lib0clear(&___nl__im__31);
#line 698
c_rt_lib0clear(&___nl__im__34);
#line 698
c_rt_lib0clear(&___nl__im__40);
#line 698
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
ImmT * ___nl__im_ptr__9 = NULL;
#line 702
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 703
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 704
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 705
c_rt_lib0move(&___nl__im__4, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 706
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__1));
#line 707
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__0, ___ref___rec__1));
#line 708
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__5, ___ref___rec__1));
#line 709
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 709
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__6, ___ref___rec__1));
#line 709
c_rt_lib0clear(&___nl__im__6);
#line 710
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__3));
#line 710
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__8));
#line 710
c_rt_lib0clear(&___nl__im__8);
#line 710
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__7));
#line 710
c_rt_lib0clear(&___nl__im__7);
#line 711
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 712
___nl__im_ptr__9 = &((*___ref___rec__1).loop_label0field);
#line 712
c_rt_lib0copy(___nl__im_ptr__9, ___nl__im__4);
#line 712
___nl__im_ptr__9 = NULL;
#line 712
c_rt_lib0clear(&___nl__im__0);
#line 712
//clear ___nl__int__2;
#line 712
//clear ___nl__int__3;
#line 712
c_rt_lib0clear(&___nl__im__4);
#line 712
c_rt_lib0clear(&___nl__im__5);
#line 712
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
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT * ___nl__im_ptr__32 = NULL;
#line 716
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 717
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 718
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 719
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(887)));
#line 719
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 719
c_rt_lib0clear(&___nl__im__6);
#line 720
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(568)));
#line 720
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 720
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 720
c_rt_lib0clear(&___nl__im__8);
#line 720
c_rt_lib0clear(&___nl__im__9);
#line 721
___nl__int__10 = 0;
#line 721
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 721
c_rt_lib0delete(translator_priv0load_const(___nl__im__11, ___nl__im__7, ___ref___rec__1));
#line 721
//clear ___nl__int__10;
#line 721
c_rt_lib0clear(&___nl__im__11);
#line 722
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 722
c_rt_lib0move(&___nl__im__12, translator_priv0new_register(___ref___rec__1, ___nl__im__13));
#line 722
c_rt_lib0clear(&___nl__im__13);
#line 723
___nl__int__14 = 1;
#line 723
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 723
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__12, ___ref___rec__1));
#line 723
//clear ___nl__int__14;
#line 723
c_rt_lib0clear(&___nl__im__15);
#line 724
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 724
c_rt_lib0move(&___nl__im__16, translator_priv0new_register(___ref___rec__1, ___nl__im__17));
#line 724
c_rt_lib0clear(&___nl__im__17);
#line 725
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 726
c_rt_lib0move(&___nl__im__18,___get_global_const(360));
#line 726
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__16, ___nl__im__7, ___nl__im__5, ___nl__im__18, ___ref___rec__1));
#line 726
c_rt_lib0clear(&___nl__im__18);
#line 727
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__16, ___ref___rec__1));
#line 728
c_rt_lib0move(&___nl__im__19, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 729
c_rt_lib0move(&___nl__im__20, translator_priv0save_registers(___ref___rec__1));
#line 730
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 730
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__21, ___ref___rec__1));
#line 730
c_rt_lib0clear(&___nl__im__21);
#line 731
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__20, ___ref___rec__1));
#line 732
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 733
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(950)));
#line 733
___nl__bool__22 = c_rt_lib0check_true_native(___nl__im__23);
#line 733
c_rt_lib0clear(&___nl__im__23);
#line 733
___nl__bool__22 = !___nl__bool__22;
#line 733
___nl__bool__22 = !___nl__bool__22;
#line 733
if(___nl__bool__22){ goto label_2;}
#line 733
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 733
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(220)));
#line 733
c_rt_lib0clear(&___nl__im__26);
#line 733
c_rt_lib0move(&___nl__im__24, translator0last_debug_char(___nl__im__25));
#line 733
c_rt_lib0clear(&___nl__im__25);
#line 733
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__24, ___ref___rec__1));
#line 733
c_rt_lib0clear(&___nl__im__24);
#line 733
goto label_1;
#line 733
label_2:
;
#line 733
label_1:
;
#line 733
//clear ___nl__bool__22;
#line 734
c_rt_lib0move(&___nl__im__29,___get_global_const(340));
#line 734
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__7, ___get_global_const(273), ___nl__im__7, ___get_global_const(274), ___nl__im__12, ___get_global_const(513), ___nl__im__29));
#line 734
c_rt_lib0clear(&___nl__im__29);
#line 734
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__28));
#line 734
c_rt_lib0clear(&___nl__im__28);
#line 734
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__27));
#line 734
c_rt_lib0clear(&___nl__im__27);
#line 735
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__4));
#line 735
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__31));
#line 735
c_rt_lib0clear(&___nl__im__31);
#line 735
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__30));
#line 735
c_rt_lib0clear(&___nl__im__30);
#line 736
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 737
___nl__im_ptr__32 = &((*___ref___rec__1).loop_label0field);
#line 737
c_rt_lib0copy(___nl__im_ptr__32, ___nl__im__19);
#line 737
___nl__im_ptr__32 = NULL;
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
c_rt_lib0clear(&___nl__im__20);
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(129)));
#line 741
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(204)));
#line 741
c_rt_lib0clear(&___nl__im__4);
#line 741
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 741
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 741
___nl__im_ptr__7 = NULL;
#line 741
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(387)));
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
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT * ___nl__im_ptr__47 = NULL;
#line 749
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 749
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 749
___nl__im_ptr__4 = NULL;
#line 749
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(504)));
#line 749
c_rt_lib0clear(&___nl__im__3);
#line 750
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 751
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 752
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 753
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(129)));
#line 753
c_rt_lib0move(&___nl__im__8, translator_priv0calc_val(___nl__im__9, ___ref___rec__1));
#line 753
c_rt_lib0clear(&___nl__im__9);
#line 754
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(370)));
#line 754
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(218)));
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
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 756
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 756
c_rt_lib0move(&___nl__im__15, translator_priv0print_var_decl(___nl__im__16, ___ref___rec__1, ___nl__im__17));
#line 756
c_rt_lib0clear(&___nl__im__16);
#line 756
c_rt_lib0clear(&___nl__im__17);
#line 757
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 757
c_rt_lib0move(&___nl__im__18, translator_priv0new_register(___ref___rec__1, ___nl__im__19));
#line 757
c_rt_lib0clear(&___nl__im__19);
#line 758
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_const(568), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 758
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(260), ___nl__im__21));
#line 758
c_rt_lib0clear(&___nl__im__21);
#line 758
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 758
c_rt_lib0clear(&___nl__im__20);
#line 759
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 760
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__13, ___get_global_const(568), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 760
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_const(263), ___nl__im__23));
#line 760
c_rt_lib0clear(&___nl__im__23);
#line 760
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__22));
#line 760
c_rt_lib0clear(&___nl__im__22);
#line 761
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__13, ___ref___rec__1));
#line 762
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__10, ___get_global_const(568), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 762
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(262), ___nl__im__25));
#line 762
c_rt_lib0clear(&___nl__im__25);
#line 762
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 762
c_rt_lib0clear(&___nl__im__24);
#line 764
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 764
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_const(204)));
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
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(328)));
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
c_rt_lib0move(&___nl__im__32,___get_global_const(1239));
#line 767
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__8));
#line 767
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__10));
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
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 772
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 772
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 772
c_rt_lib0clear(&___nl__im__39);
#line 773
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 774
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 775
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(950)));
#line 775
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__41);
#line 775
c_rt_lib0clear(&___nl__im__41);
#line 775
___nl__bool__40 = !___nl__bool__40;
#line 775
___nl__bool__40 = !___nl__bool__40;
#line 775
if(___nl__bool__40){ goto label_6;}
#line 775
c_rt_lib0move(&___nl__im__42, translator0last_debug_char(___nl__im__2));
#line 775
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__42, ___ref___rec__1));
#line 775
c_rt_lib0clear(&___nl__im__42);
#line 775
goto label_5;
#line 775
label_6:
;
#line 775
label_5:
;
#line 775
//clear ___nl__bool__40;
#line 776
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(2, ___get_global_const(568), ___nl__im__18, ___get_global_const(129), ___nl__im__8));
#line 776
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(261), ___nl__im__44));
#line 776
c_rt_lib0clear(&___nl__im__44);
#line 776
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__43));
#line 776
c_rt_lib0clear(&___nl__im__43);
#line 777
c_rt_lib0move(&___nl__im__46, c_rt_lib0int_new(___nl__int__7));
#line 777
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__46));
#line 777
c_rt_lib0clear(&___nl__im__46);
#line 777
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__45));
#line 777
c_rt_lib0clear(&___nl__im__45);
#line 778
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 779
___nl__im_ptr__47 = &((*___ref___rec__1).loop_label0field);
#line 779
c_rt_lib0copy(___nl__im_ptr__47, ___nl__im__37);
#line 779
___nl__im_ptr__47 = NULL;
#line 779
c_rt_lib0clear(&___nl__im__0);
#line 779
c_rt_lib0clear(&___nl__im__2);
#line 779
//clear ___nl__int__5;
#line 779
//clear ___nl__int__6;
#line 779
//clear ___nl__int__7;
#line 779
c_rt_lib0clear(&___nl__im__8);
#line 779
c_rt_lib0clear(&___nl__im__10);
#line 779
c_rt_lib0clear(&___nl__im__13);
#line 779
c_rt_lib0clear(&___nl__im__15);
#line 779
c_rt_lib0clear(&___nl__im__18);
#line 779
//clear ___nl__bool__26;
#line 779
c_rt_lib0clear(&___nl__im__29);
#line 779
c_rt_lib0clear(&___nl__im__37);
#line 779
c_rt_lib0clear(&___nl__im__38);
#line 779
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
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
bool  ___nl__bool__47 = false;
ImmT * ___nl__im_ptr__48 = NULL;
#line 783
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 783
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 783
___nl__im_ptr__4 = NULL;
#line 783
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_const(504)));
#line 783
c_rt_lib0clear(&___nl__im__3);
#line 784
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 785
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 786
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 787
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(129)));
#line 787
___nl__bool__10 = true;
#line 787
c_rt_lib0move(&___nl__im__8, translator_priv0get_value_of_lvalue(___nl__im__9, ___nl__bool__10, ___ref___rec__1));
#line 787
c_rt_lib0clear(&___nl__im__9);
#line 787
//clear ___nl__bool__10;
#line 788
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 788
___nl__int__15 = 1;
#line 788
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 788
//clear ___nl__int__14;
#line 788
//clear ___nl__int__15;
#line 788
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__8, ___nl__int__13));
#line 788
//clear ___nl__int__13;
#line 788
___nl__int__18 = c_rt_lib0array_len(___nl__im__8);
#line 788
___nl__int__19 = 1;
#line 788
___nl__int__17 = ___nl__int__18 - ___nl__int__19;
#line 788
//clear ___nl__int__18;
#line 788
//clear ___nl__int__19;
#line 788
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 788
//clear ___nl__int__17;
#line 788
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(218)));
#line 788
c_rt_lib0clear(&___nl__im__12);
#line 788
c_rt_lib0clear(&___nl__im__16);
#line 789
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(370)));
#line 789
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 789
c_rt_lib0move(&___nl__im__20, translator_priv0print_var_decl(___nl__im__21, ___ref___rec__1, ___nl__im__22));
#line 789
c_rt_lib0clear(&___nl__im__21);
#line 789
c_rt_lib0clear(&___nl__im__22);
#line 790
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 790
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 790
c_rt_lib0clear(&___nl__im__24);
#line 791
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 791
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_const(391)));
#line 791
c_rt_lib0move(&___nl__im__25, translator_priv0print_var_decl(___nl__im__26, ___ref___rec__1, ___nl__im__27));
#line 791
c_rt_lib0clear(&___nl__im__26);
#line 791
c_rt_lib0clear(&___nl__im__27);
#line 792
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 792
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 792
c_rt_lib0clear(&___nl__im__29);
#line 793
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_const(568), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 793
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(260), ___nl__im__31));
#line 793
c_rt_lib0clear(&___nl__im__31);
#line 793
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__30));
#line 793
c_rt_lib0clear(&___nl__im__30);
#line 794
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 795
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__23, ___get_global_const(568), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 795
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(263), ___nl__im__33));
#line 795
c_rt_lib0clear(&___nl__im__33);
#line 795
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 795
c_rt_lib0clear(&___nl__im__32);
#line 796
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__23, ___ref___rec__1));
#line 797
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__20, ___get_global_const(568), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 797
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(262), ___nl__im__35));
#line 797
c_rt_lib0clear(&___nl__im__35);
#line 797
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 797
c_rt_lib0clear(&___nl__im__34);
#line 799
___nl__bool__36 = false;
#line 799
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___nl__bool__36, ___ref___rec__1));
#line 799
//clear ___nl__bool__36;
#line 801
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 802
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 803
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 803
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 803
c_rt_lib0clear(&___nl__im__39);
#line 804
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 805
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___ref___rec__1));
#line 806
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 807
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(950)));
#line 807
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__41);
#line 807
c_rt_lib0clear(&___nl__im__41);
#line 807
___nl__bool__40 = !___nl__bool__40;
#line 807
___nl__bool__40 = !___nl__bool__40;
#line 807
if(___nl__bool__40){ goto label_2;}
#line 807
c_rt_lib0move(&___nl__im__42, translator0last_debug_char(___nl__im__2));
#line 807
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__42, ___ref___rec__1));
#line 807
c_rt_lib0clear(&___nl__im__42);
#line 807
goto label_1;
#line 807
label_2:
;
#line 807
label_1:
;
#line 807
//clear ___nl__bool__40;
#line 808
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(2, ___get_global_const(568), ___nl__im__28, ___get_global_const(129), ___nl__im__11));
#line 808
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(261), ___nl__im__44));
#line 808
c_rt_lib0clear(&___nl__im__44);
#line 808
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__43));
#line 808
c_rt_lib0clear(&___nl__im__43);
#line 809
c_rt_lib0move(&___nl__im__46, c_rt_lib0int_new(___nl__int__7));
#line 809
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__46));
#line 809
c_rt_lib0clear(&___nl__im__46);
#line 809
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__45));
#line 809
c_rt_lib0clear(&___nl__im__45);
#line 810
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 811
___nl__bool__47 = false;
#line 811
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__8, ___nl__bool__47, ___ref___rec__1));
#line 811
//clear ___nl__bool__47;
#line 812
___nl__im_ptr__48 = &((*___ref___rec__1).loop_label0field);
#line 812
c_rt_lib0copy(___nl__im_ptr__48, ___nl__im__37);
#line 812
___nl__im_ptr__48 = NULL;
#line 812
c_rt_lib0clear(&___nl__im__0);
#line 812
c_rt_lib0clear(&___nl__im__2);
#line 812
//clear ___nl__int__5;
#line 812
//clear ___nl__int__6;
#line 812
//clear ___nl__int__7;
#line 812
c_rt_lib0clear(&___nl__im__8);
#line 812
c_rt_lib0clear(&___nl__im__11);
#line 812
c_rt_lib0clear(&___nl__im__20);
#line 812
c_rt_lib0clear(&___nl__im__23);
#line 812
c_rt_lib0clear(&___nl__im__25);
#line 812
c_rt_lib0clear(&___nl__im__28);
#line 812
c_rt_lib0clear(&___nl__im__37);
#line 812
c_rt_lib0clear(&___nl__im__38);
#line 812
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
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT * ___nl__im_ptr__20 = NULL;
#line 816
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 817
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 818
___nl__im_ptr__6 = &((*___ref___rec__1).debug0field);
#line 818
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 818
___nl__im_ptr__6 = NULL;
#line 818
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(504)));
#line 818
c_rt_lib0clear(&___nl__im__5);
#line 819
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 820
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 820
c_rt_lib0move(&___nl__im__7, translator_priv0calc_val(___nl__im__8, ___ref___rec__1));
#line 820
c_rt_lib0clear(&___nl__im__8);
#line 821
c_rt_lib0move(&___nl__im__11,___get_global_const(336));
#line 821
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__7, ___get_global_const(75), ___nl__im__7, ___get_global_const(513), ___nl__im__11));
#line 821
c_rt_lib0clear(&___nl__im__11);
#line 821
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__10));
#line 821
c_rt_lib0clear(&___nl__im__10);
#line 821
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__9));
#line 821
c_rt_lib0clear(&___nl__im__9);
#line 822
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__7, ___ref___rec__1));
#line 823
c_rt_lib0move(&___nl__im__12, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 824
c_rt_lib0move(&___nl__im__13, translator_priv0save_registers(___ref___rec__1));
#line 825
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 825
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__14, ___ref___rec__1));
#line 825
c_rt_lib0clear(&___nl__im__14);
#line 826
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__13, ___ref___rec__1));
#line 827
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(950)));
#line 827
___nl__bool__15 = c_rt_lib0check_true_native(___nl__im__16);
#line 827
c_rt_lib0clear(&___nl__im__16);
#line 827
___nl__bool__15 = !___nl__bool__15;
#line 827
___nl__bool__15 = !___nl__bool__15;
#line 827
if(___nl__bool__15){ goto label_2;}
#line 827
c_rt_lib0move(&___nl__im__17, translator0last_debug_char(___nl__im__4));
#line 827
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__17, ___ref___rec__1));
#line 827
c_rt_lib0clear(&___nl__im__17);
#line 827
goto label_1;
#line 827
label_2:
;
#line 827
label_1:
;
#line 827
//clear ___nl__bool__15;
#line 828
c_rt_lib0move(&___nl__im__19, c_rt_lib0int_new(___nl__int__3));
#line 828
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__19));
#line 828
c_rt_lib0clear(&___nl__im__19);
#line 828
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__18));
#line 828
c_rt_lib0clear(&___nl__im__18);
#line 829
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 830
___nl__im_ptr__20 = &((*___ref___rec__1).loop_label0field);
#line 830
c_rt_lib0copy(___nl__im_ptr__20, ___nl__im__12);
#line 830
___nl__im_ptr__20 = NULL;
#line 830
c_rt_lib0clear(&___nl__im__0);
#line 830
//clear ___nl__int__2;
#line 830
//clear ___nl__int__3;
#line 830
c_rt_lib0clear(&___nl__im__4);
#line 830
c_rt_lib0clear(&___nl__im__7);
#line 830
c_rt_lib0clear(&___nl__im__12);
#line 830
c_rt_lib0clear(&___nl__im__13);
#line 830
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
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT * ___nl__im_ptr__40 = NULL;
#line 834
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 835
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 836
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 837
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(885)));
#line 837
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(218));
#line 837
if(___nl__bool__6){ goto label_2;}
#line 839
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(251));
#line 839
if(___nl__bool__6){ goto label_3;}
#line 839
c_rt_lib0move(&___nl__im__7,___get_global_const(16));
#line 839
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 839
nl_die_arg(___nl__im__7);
#line 837
label_2:
;
#line 837
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(218)));
#line 837
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 838
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 838
___nl__int__12 = 1;
#line 838
___nl__int__12 = -___nl__int__12;
#line 838
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 838
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 838
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__11, ___get_global_const(217), ___nl__im__13, ___get_global_const(329), ___nl__im__14));
#line 838
c_rt_lib0clear(&___nl__im__11);
#line 838
//clear ___nl__int__12;
#line 838
c_rt_lib0clear(&___nl__im__13);
#line 838
c_rt_lib0clear(&___nl__im__14);
#line 838
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__10, ___ref___rec__1));
#line 838
c_rt_lib0clear(&___nl__im__10);
#line 839
goto label_1;
#line 839
label_3:
;
#line 839
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__5, ___get_global_const(251)));
#line 839
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 840
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 840
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__15, ___ref___rec__1, ___nl__im__17));
#line 840
c_rt_lib0clear(&___nl__im__17);
#line 841
goto label_1;
#line 841
label_1:
;
#line 842
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 843
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 843
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_const(218)));
#line 843
c_rt_lib0clear(&___nl__im__20);
#line 843
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_const(881));
#line 843
c_rt_lib0clear(&___nl__im__19);
#line 843
___nl__bool__18 = !___nl__bool__18;
#line 843
___nl__bool__18 = !___nl__bool__18;
#line 843
if(___nl__bool__18){ goto label_5;}
#line 844
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(882)));
#line 844
c_rt_lib0move(&___nl__im__21, translator_priv0calc_val(___nl__im__22, ___ref___rec__1));
#line 844
c_rt_lib0clear(&___nl__im__22);
#line 845
c_rt_lib0move(&___nl__im__25,___get_global_const(336));
#line 845
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__21, ___get_global_const(75), ___nl__im__21, ___get_global_const(513), ___nl__im__25));
#line 845
c_rt_lib0clear(&___nl__im__25);
#line 845
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__im__24));
#line 845
c_rt_lib0clear(&___nl__im__24);
#line 845
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__23));
#line 845
c_rt_lib0clear(&___nl__im__23);
#line 846
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__21, ___ref___rec__1));
#line 847
goto label_4;
#line 847
label_5:
;
#line 847
label_4:
;
#line 847
//clear ___nl__bool__18;
#line 847
c_rt_lib0clear(&___nl__im__21);
#line 848
c_rt_lib0move(&___nl__im__26, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__4));
#line 849
c_rt_lib0move(&___nl__im__27, translator_priv0save_registers(___ref___rec__1));
#line 850
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 850
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__28, ___ref___rec__1));
#line 850
c_rt_lib0clear(&___nl__im__28);
#line 851
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__27, ___ref___rec__1));
#line 852
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 853
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(568)));
#line 853
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 853
___nl__int__32 = 1;
#line 853
___nl__int__32 = -___nl__int__32;
#line 853
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__32));
#line 853
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 853
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__31, ___get_global_const(217), ___nl__im__33, ___get_global_const(329), ___nl__im__34));
#line 853
c_rt_lib0clear(&___nl__im__31);
#line 853
//clear ___nl__int__32;
#line 853
c_rt_lib0clear(&___nl__im__33);
#line 853
c_rt_lib0clear(&___nl__im__34);
#line 853
c_rt_lib0delete(translator_priv0print_val(___nl__im__29, ___nl__im__30, ___ref___rec__1));
#line 853
c_rt_lib0clear(&___nl__im__29);
#line 853
c_rt_lib0clear(&___nl__im__30);
#line 854
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(226)));
#line 854
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_const(220)));
#line 854
c_rt_lib0clear(&___nl__im__37);
#line 854
c_rt_lib0move(&___nl__im__35, translator0last_debug_char(___nl__im__36));
#line 854
c_rt_lib0clear(&___nl__im__36);
#line 854
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__35, ___ref___rec__1));
#line 854
c_rt_lib0clear(&___nl__im__35);
#line 855
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__3));
#line 855
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__39));
#line 855
c_rt_lib0clear(&___nl__im__39);
#line 855
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__38));
#line 855
c_rt_lib0clear(&___nl__im__38);
#line 856
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 857
___nl__im_ptr__40 = &((*___ref___rec__1).loop_label0field);
#line 857
c_rt_lib0copy(___nl__im_ptr__40, ___nl__im__26);
#line 857
___nl__im_ptr__40 = NULL;
#line 857
c_rt_lib0clear(&___nl__im__0);
#line 857
//clear ___nl__int__2;
#line 857
//clear ___nl__int__3;
#line 857
//clear ___nl__int__4;
#line 857
c_rt_lib0clear(&___nl__im__5);
#line 857
//clear ___nl__bool__6;
#line 857
c_rt_lib0clear(&___nl__im__7);
#line 857
c_rt_lib0clear(&___nl__im__8);
#line 857
c_rt_lib0clear(&___nl__im__9);
#line 857
c_rt_lib0clear(&___nl__im__15);
#line 857
c_rt_lib0clear(&___nl__im__16);
#line 857
c_rt_lib0clear(&___nl__im__26);
#line 857
c_rt_lib0clear(&___nl__im__27);
#line 857
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
#line 861
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 862
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 862
c_rt_lib0move(&___nl__im__3, translator_priv0calc_val(___nl__im__4, ___ref___rec__1));
#line 862
c_rt_lib0clear(&___nl__im__4);
#line 863
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 863
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__1, ___nl__im__6));
#line 863
c_rt_lib0clear(&___nl__im__6);
#line 864
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 864
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 864
c_rt_lib0clear(&___nl__im__8);
#line 865
___nl__int__9 = translator_priv0get_sim_label(___ref___rec__1);
#line 866
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(890)));
#line 866
___nl__int__12 = 0;
#line 866
___nl__int__13 = 1;
#line 866
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 866
label_3:
;
#line 866
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 866
___nl__bool__15 = ___nl__int__16;
#line 866
if(___nl__bool__15){ goto label_1;}
#line 866
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 866
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 867
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(220)));
#line 867
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__18, ___ref___rec__1));
#line 867
c_rt_lib0clear(&___nl__im__18);
#line 868
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 868
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(204)));
#line 868
c_rt_lib0clear(&___nl__im__21);
#line 868
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(516)));
#line 868
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(166)));
#line 868
c_rt_lib0clear(&___nl__im__23);
#line 868
___nl__int__19 = translator_priv0get_label_number(___ref___rec__1, ___nl__im__20, ___nl__im__22);
#line 868
c_rt_lib0clear(&___nl__im__20);
#line 868
c_rt_lib0clear(&___nl__im__22);
#line 869
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_const(516)));
#line 869
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(166)));
#line 869
c_rt_lib0clear(&___nl__im__27);
#line 869
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__19));
#line 869
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__5, ___get_global_const(75), ___nl__im__3, ___get_global_const(204), ___nl__im__26, ___get_global_const(520), ___nl__im__28));
#line 869
c_rt_lib0clear(&___nl__im__26);
#line 869
c_rt_lib0clear(&___nl__im__28);
#line 869
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__im__25));
#line 869
c_rt_lib0clear(&___nl__im__25);
#line 869
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 869
c_rt_lib0clear(&___nl__im__24);
#line 870
___nl__int__29 = translator_priv0get_sim_label(___ref___rec__1);
#line 871
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__29, ___nl__im__5, ___ref___rec__1));
#line 872
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 872
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__30));
#line 872
c_rt_lib0clear(&___nl__im__30);
#line 872
c_rt_lib0clear(&___nl__im__11);
#line 872
label_2:
;
#line 873
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 873
goto label_3;
#line 873
label_1:
;
#line 874
c_rt_lib0move(&___nl__im__31,___get_global_const(16));
#line 874
c_rt_lib0delete(translator_priv0load_const(___nl__im__31, ___nl__im__7, ___ref___rec__1));
#line 874
c_rt_lib0clear(&___nl__im__31);
#line 875
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__3));
#line 875
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__7, ___get_global_const(75), ___nl__im__34));
#line 875
c_rt_lib0clear(&___nl__im__34);
#line 875
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__im__33));
#line 875
c_rt_lib0clear(&___nl__im__33);
#line 875
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 875
c_rt_lib0clear(&___nl__im__32);
#line 876
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__7));
#line 876
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__35));
#line 876
c_rt_lib0clear(&___nl__im__35);
#line 877
___nl__int__36 = 0;
#line 879
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(890)));
#line 879
___nl__int__40 = 0;
#line 879
___nl__int__41 = 1;
#line 879
___nl__int__42 = c_rt_lib0array_len(___nl__im__38);
#line 879
label_6:
;
#line 879
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 879
___nl__bool__43 = ___nl__int__44;
#line 879
if(___nl__bool__43){ goto label_4;}
#line 879
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__38, ___nl__int__40));
#line 879
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 880
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(226)));
#line 880
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(220)));
#line 880
c_rt_lib0clear(&___nl__im__47);
#line 880
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__46, ___ref___rec__1));
#line 880
c_rt_lib0clear(&___nl__im__46);
#line 881
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__2, ___nl__int__36));
#line 881
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 881
c_rt_lib0clear(&___nl__im__49);
#line 881
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__48, ___ref___rec__1));
#line 881
//clear ___nl__int__48;
#line 882
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(516)));
#line 882
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_const(218)));
#line 882
c_rt_lib0clear(&___nl__im__51);
#line 882
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(218));
#line 882
if(___nl__bool__52){ goto label_8;}
#line 894
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_const(73));
#line 894
if(___nl__bool__52){ goto label_9;}
#line 894
c_rt_lib0move(&___nl__im__53,___get_global_const(16));
#line 894
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(2, ___nl__im__53, ___nl__im__50));
#line 894
nl_die_arg(___nl__im__53);
#line 882
label_8:
;
#line 882
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__50, ___get_global_const(218)));
#line 882
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 883
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(265)));
#line 883
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(73));
#line 883
if(___nl__bool__57){ goto label_11;}
#line 890
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_const(40));
#line 890
if(___nl__bool__57){ goto label_12;}
#line 890
c_rt_lib0move(&___nl__im__58,___get_global_const(16));
#line 890
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__56));
#line 890
nl_die_arg(___nl__im__58);
#line 883
label_11:
;
#line 884
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(451)));
#line 884
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 884
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__59, ___ref___rec__1, ___nl__im__60));
#line 884
c_rt_lib0clear(&___nl__im__59);
#line 884
c_rt_lib0clear(&___nl__im__60);
#line 885
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(223)));
#line 885
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_const(204)));
#line 885
c_rt_lib0clear(&___nl__im__63);
#line 885
___nl__im_ptr__66 = &((*___ref___rec__1).logic0field);
#line 885
c_rt_lib0copy(&___nl__im__65, (*___nl__im_ptr__66));
#line 885
___nl__im_ptr__66 = NULL;
#line 885
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_const(387)));
#line 885
c_rt_lib0clear(&___nl__im__65);
#line 885
___nl__bool__61 = tct0is_own_type(___nl__im__62, ___nl__im__64);
#line 885
c_rt_lib0clear(&___nl__im__62);
#line 885
c_rt_lib0clear(&___nl__im__64);
#line 885
___nl__bool__61 = !___nl__bool__61;
#line 886
c_rt_lib0copy(&___nl__im__67, ___nl__im__37);
#line 887
___nl__bool__68 = ___nl__bool__61;
#line 887
___nl__bool__68 = !___nl__bool__68;
#line 887
if(___nl__bool__68){ goto label_14;}
#line 887
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 887
c_rt_lib0move(&___nl__im__67, translator_priv0new_register(___ref___rec__1, ___nl__im__69));
#line 887
c_rt_lib0clear(&___nl__im__69);
#line 887
goto label_13;
#line 887
label_14:
;
#line 887
label_13:
;
#line 887
//clear ___nl__bool__68;
#line 888
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(516)));
#line 888
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_const(166)));
#line 888
c_rt_lib0clear(&___nl__im__73);
#line 888
___nl__int__74 = 1;
#line 888
___nl__int__74 = -___nl__int__74;
#line 888
c_rt_lib0move(&___nl__im__75, c_rt_lib0int_new(___nl__int__74));
#line 888
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__67, ___get_global_const(75), ___nl__im__3, ___get_global_const(204), ___nl__im__72, ___get_global_const(520), ___nl__im__75));
#line 888
c_rt_lib0clear(&___nl__im__72);
#line 888
//clear ___nl__int__74;
#line 888
c_rt_lib0clear(&___nl__im__75);
#line 888
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__71));
#line 888
c_rt_lib0clear(&___nl__im__71);
#line 888
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__70));
#line 888
c_rt_lib0clear(&___nl__im__70);
#line 889
___nl__bool__76 = ___nl__bool__61;
#line 889
___nl__bool__76 = !___nl__bool__76;
#line 889
if(___nl__bool__76){ goto label_16;}
#line 889
c_rt_lib0delete(translator_priv0move(___nl__im__37, ___nl__im__67, ___ref___rec__1));
#line 889
goto label_15;
#line 889
label_16:
;
#line 889
label_15:
;
#line 889
//clear ___nl__bool__76;
#line 890
goto label_10;
#line 890
label_12:
;
#line 891
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_const(451)));
#line 891
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_none(___get_global_const(391)));
#line 891
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__77, ___ref___rec__1, ___nl__im__78));
#line 891
c_rt_lib0clear(&___nl__im__77);
#line 891
c_rt_lib0clear(&___nl__im__78);
#line 892
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(516)));
#line 892
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_const(166)));
#line 892
c_rt_lib0clear(&___nl__im__80);
#line 892
c_rt_lib0delete(translator_priv0use_variant(___nl__im__37, ___nl__im__3, ___nl__im__79, ___ref___rec__1));
#line 892
c_rt_lib0clear(&___nl__im__79);
#line 893
goto label_10;
#line 893
label_10:
;
#line 894
goto label_7;
#line 894
label_9:
;
#line 895
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 895
___nl__int__82 = 1;
#line 895
___nl__int__82 = -___nl__int__82;
#line 895
c_rt_lib0move(&___nl__im__83, c_rt_lib0int_new(___nl__int__82));
#line 895
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 895
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__81, ___get_global_const(217), ___nl__im__83, ___get_global_const(329), ___nl__im__84));
#line 895
c_rt_lib0clear(&___nl__im__81);
#line 895
//clear ___nl__int__82;
#line 895
c_rt_lib0clear(&___nl__im__83);
#line 895
c_rt_lib0clear(&___nl__im__84);
#line 896
goto label_7;
#line 896
label_7:
;
#line 897
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(226)));
#line 897
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__85, ___ref___rec__1));
#line 897
c_rt_lib0clear(&___nl__im__85);
#line 898
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(516)));
#line 898
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__87, ___get_global_const(218)));
#line 898
c_rt_lib0clear(&___nl__im__87);
#line 898
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(218));
#line 898
if(___nl__bool__88){ goto label_18;}
#line 903
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_const(73));
#line 903
if(___nl__bool__88){ goto label_19;}
#line 903
c_rt_lib0move(&___nl__im__89,___get_global_const(16));
#line 903
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(2, ___nl__im__89, ___nl__im__86));
#line 903
nl_die_arg(___nl__im__89);
#line 898
label_18:
;
#line 898
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__86, ___get_global_const(218)));
#line 898
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 899
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_const(265)));
#line 899
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(73));
#line 899
if(___nl__bool__93){ goto label_21;}
#line 900
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_const(40));
#line 900
if(___nl__bool__93){ goto label_22;}
#line 900
c_rt_lib0move(&___nl__im__94,___get_global_const(16));
#line 900
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_mk(2, ___nl__im__94, ___nl__im__92));
#line 900
nl_die_arg(___nl__im__94);
#line 899
label_21:
;
#line 900
goto label_20;
#line 900
label_22:
;
#line 901
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(516)));
#line 901
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_const(166)));
#line 901
c_rt_lib0clear(&___nl__im__96);
#line 901
c_rt_lib0delete(translator_priv0release_variant(___nl__im__37, ___nl__im__3, ___nl__im__95, ___ref___rec__1));
#line 901
c_rt_lib0clear(&___nl__im__95);
#line 902
goto label_20;
#line 902
label_20:
;
#line 903
goto label_17;
#line 903
label_19:
;
#line 904
goto label_17;
#line 904
label_17:
;
#line 905
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(226)));
#line 905
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(220)));
#line 905
c_rt_lib0clear(&___nl__im__99);
#line 905
c_rt_lib0move(&___nl__im__97, translator0last_debug_char(___nl__im__98));
#line 905
c_rt_lib0clear(&___nl__im__98);
#line 905
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__97, ___ref___rec__1));
#line 905
c_rt_lib0clear(&___nl__im__97);
#line 906
c_rt_lib0move(&___nl__im__101, c_rt_lib0int_new(___nl__int__9));
#line 906
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__101));
#line 906
c_rt_lib0clear(&___nl__im__101);
#line 906
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__100));
#line 906
c_rt_lib0clear(&___nl__im__100);
#line 907
___nl__int__102 = 1;
#line 907
___nl__int__36 = ___nl__int__36 + ___nl__int__102;
#line 907
//clear ___nl__int__102;
#line 907
c_rt_lib0clear(&___nl__im__39);
#line 907
label_5:
;
#line 908
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 908
goto label_6;
#line 908
label_4:
;
#line 909
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__9, ___ref___rec__1));
#line 909
c_rt_lib0clear(&___nl__im__0);
#line 909
c_rt_lib0clear(&___nl__im__2);
#line 909
c_rt_lib0clear(&___nl__im__3);
#line 909
c_rt_lib0clear(&___nl__im__5);
#line 909
c_rt_lib0clear(&___nl__im__7);
#line 909
//clear ___nl__int__9;
#line 909
c_rt_lib0clear(&___nl__im__10);
#line 909
c_rt_lib0clear(&___nl__im__11);
#line 909
//clear ___nl__int__12;
#line 909
//clear ___nl__int__13;
#line 909
//clear ___nl__int__14;
#line 909
//clear ___nl__bool__15;
#line 909
//clear ___nl__int__16;
#line 909
c_rt_lib0clear(&___nl__im__17);
#line 909
//clear ___nl__int__19;
#line 909
//clear ___nl__int__29;
#line 909
//clear ___nl__int__36;
#line 909
c_rt_lib0clear(&___nl__im__37);
#line 909
c_rt_lib0clear(&___nl__im__38);
#line 909
c_rt_lib0clear(&___nl__im__39);
#line 909
//clear ___nl__int__40;
#line 909
//clear ___nl__int__41;
#line 909
//clear ___nl__int__42;
#line 909
//clear ___nl__bool__43;
#line 909
//clear ___nl__int__44;
#line 909
c_rt_lib0clear(&___nl__im__45);
#line 909
c_rt_lib0clear(&___nl__im__50);
#line 909
//clear ___nl__bool__52;
#line 909
c_rt_lib0clear(&___nl__im__53);
#line 909
c_rt_lib0clear(&___nl__im__54);
#line 909
c_rt_lib0clear(&___nl__im__55);
#line 909
c_rt_lib0clear(&___nl__im__56);
#line 909
//clear ___nl__bool__57;
#line 909
c_rt_lib0clear(&___nl__im__58);
#line 909
//clear ___nl__bool__61;
#line 909
c_rt_lib0clear(&___nl__im__67);
#line 909
c_rt_lib0clear(&___nl__im__86);
#line 909
//clear ___nl__bool__88;
#line 909
c_rt_lib0clear(&___nl__im__89);
#line 909
c_rt_lib0clear(&___nl__im__90);
#line 909
c_rt_lib0clear(&___nl__im__91);
#line 909
c_rt_lib0clear(&___nl__im__92);
#line 909
//clear ___nl__bool__93;
#line 909
c_rt_lib0clear(&___nl__im__94);
#line 909
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
#line 913
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 913
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 913
c_rt_lib0clear(&___nl__im__4);
#line 913
___nl__bool__3 = !___nl__bool__3;
#line 913
if(___nl__bool__3){ goto label_2;}
#line 913
c_rt_lib0clear(&___nl__im__0);
#line 913
c_rt_lib0clear(&___nl__im__1);
#line 913
//clear ___nl__bool__3;
#line 913
return NULL;
#line 913
goto label_1;
#line 913
label_2:
;
#line 913
label_1:
;
#line 913
//clear ___nl__bool__3;
#line 914
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__0, ___get_global_const(75), ___nl__im__1));
#line 914
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(237), ___nl__im__6));
#line 914
c_rt_lib0clear(&___nl__im__6);
#line 914
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__5));
#line 914
c_rt_lib0clear(&___nl__im__5);
#line 914
c_rt_lib0clear(&___nl__im__0);
#line 914
c_rt_lib0clear(&___nl__im__1);
#line 914
return NULL;
}

ImmT  translator_priv0use_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 918
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(559), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(561), ___nl__im__2));
#line 918
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__5));
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

ImmT  translator_priv0release_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 922
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(545), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(561), ___nl__im__2));
#line 922
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(253), ___nl__im__5));
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

ImmT  translator_priv0use_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 926
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 926
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 926
c_rt_lib0clear(&___nl__im__5);
#line 927
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(559), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(563), ___nl__im__4));
#line 927
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(254), ___nl__im__7));
#line 927
c_rt_lib0clear(&___nl__im__7);
#line 927
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 927
c_rt_lib0clear(&___nl__im__6);
#line 927
c_rt_lib0clear(&___nl__im__0);
#line 927
c_rt_lib0clear(&___nl__im__1);
#line 927
c_rt_lib0clear(&___nl__im__2);
#line 927
c_rt_lib0clear(&___nl__im__4);
#line 927
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
#line 931
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 931
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 931
c_rt_lib0clear(&___nl__im__5);
#line 932
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(545), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(563), ___nl__im__4));
#line 932
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(255), ___nl__im__7));
#line 932
c_rt_lib0clear(&___nl__im__7);
#line 932
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 932
c_rt_lib0clear(&___nl__im__6);
#line 932
c_rt_lib0clear(&___nl__im__0);
#line 932
c_rt_lib0clear(&___nl__im__1);
#line 932
c_rt_lib0clear(&___nl__im__2);
#line 932
c_rt_lib0clear(&___nl__im__4);
#line 932
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
#line 937
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 937
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_const(559), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(563), ___nl__im__2, ___get_global_const(564), ___nl__im__7));
#line 937
c_rt_lib0clear(&___nl__im__7);
#line 937
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(256), ___nl__im__6));
#line 937
c_rt_lib0clear(&___nl__im__6);
#line 937
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__5));
#line 937
c_rt_lib0clear(&___nl__im__5);
#line 937
c_rt_lib0clear(&___nl__im__0);
#line 937
c_rt_lib0clear(&___nl__im__1);
#line 937
c_rt_lib0clear(&___nl__im__2);
#line 937
//clear ___nl__bool__3;
#line 937
return NULL;
}

ImmT  translator_priv0release_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 941
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(545), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(563), ___nl__im__2));
#line 941
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(257), ___nl__im__5));
#line 941
c_rt_lib0clear(&___nl__im__5);
#line 941
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 941
c_rt_lib0clear(&___nl__im__4);
#line 941
c_rt_lib0clear(&___nl__im__0);
#line 941
c_rt_lib0clear(&___nl__im__1);
#line 941
c_rt_lib0clear(&___nl__im__2);
#line 941
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
#line 944
___nl__int__4 = 1;
#line 944
___nl__int__4 = -___nl__int__4;
#line 945
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 945
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(516));
#line 945
c_rt_lib0clear(&___nl__im__6);
#line 945
___nl__bool__5 = !___nl__bool__5;
#line 945
if(___nl__bool__5){ goto label_2;}
#line 945
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 945
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 945
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(516)));
#line 945
c_rt_lib0clear(&___nl__im__8);
#line 945
c_rt_lib0clear(&___nl__im__9);
#line 945
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 945
c_rt_lib0clear(&___nl__im__7);
#line 945
goto label_1;
#line 945
label_2:
;
#line 945
label_1:
;
#line 945
//clear ___nl__bool__5;
#line 946
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 946
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(559), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(533), ___nl__im__2, ___get_global_const(520), ___nl__im__12));
#line 946
c_rt_lib0clear(&___nl__im__12);
#line 946
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(258), ___nl__im__11));
#line 946
c_rt_lib0clear(&___nl__im__11);
#line 946
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 946
c_rt_lib0clear(&___nl__im__10);
#line 946
c_rt_lib0clear(&___nl__im__0);
#line 946
c_rt_lib0clear(&___nl__im__1);
#line 946
c_rt_lib0clear(&___nl__im__2);
#line 946
//clear ___nl__int__4;
#line 946
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
#line 950
___nl__int__4 = 1;
#line 950
___nl__int__4 = -___nl__int__4;
#line 951
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 951
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(516));
#line 951
c_rt_lib0clear(&___nl__im__6);
#line 951
___nl__bool__5 = !___nl__bool__5;
#line 951
if(___nl__bool__5){ goto label_2;}
#line 951
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 951
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 951
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(516)));
#line 951
c_rt_lib0clear(&___nl__im__8);
#line 951
c_rt_lib0clear(&___nl__im__9);
#line 951
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 951
c_rt_lib0clear(&___nl__im__7);
#line 951
goto label_1;
#line 951
label_2:
;
#line 951
label_1:
;
#line 951
//clear ___nl__bool__5;
#line 952
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 952
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_const(545), ___nl__im__0, ___get_global_const(558), ___nl__im__1, ___get_global_const(533), ___nl__im__2, ___get_global_const(520), ___nl__im__12));
#line 952
c_rt_lib0clear(&___nl__im__12);
#line 952
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_const(259), ___nl__im__11));
#line 952
c_rt_lib0clear(&___nl__im__11);
#line 952
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 952
c_rt_lib0clear(&___nl__im__10);
#line 952
c_rt_lib0clear(&___nl__im__0);
#line 952
c_rt_lib0clear(&___nl__im__1);
#line 952
c_rt_lib0clear(&___nl__im__2);
#line 952
//clear ___nl__int__4;
#line 952
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
#line 957
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 958
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 959
c_rt_lib0copy(&___nl__im__7, ___nl__im__0);
#line 960
___nl__bool__8 = false;
#line 961
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 962
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 963
c_rt_lib0move(&___nl__im__15,___get_global_const(112));
#line 963
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__15);
#line 963
c_rt_lib0clear(&___nl__im__15);
#line 963
if(___nl__bool__11){ goto label_5;}
#line 963
c_rt_lib0move(&___nl__im__16,___get_global_const(916));
#line 963
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__16);
#line 963
c_rt_lib0clear(&___nl__im__16);
#line 963
label_5:
;
#line 963
//clear ___nl__bool__14;
#line 963
if(___nl__bool__11){ goto label_4;}
#line 963
c_rt_lib0move(&___nl__im__17,___get_global_const(342));
#line 963
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__17);
#line 963
c_rt_lib0clear(&___nl__im__17);
#line 963
label_4:
;
#line 963
//clear ___nl__bool__13;
#line 963
if(___nl__bool__11){ goto label_3;}
#line 963
c_rt_lib0move(&___nl__im__18,___get_global_const(343));
#line 963
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__18);
#line 963
c_rt_lib0clear(&___nl__im__18);
#line 963
label_3:
;
#line 963
//clear ___nl__bool__12;
#line 963
___nl__bool__11 = !___nl__bool__11;
#line 963
if(___nl__bool__11){ goto label_2;}
#line 964
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_const(526)));
#line 965
c_rt_lib0move(&___nl__im__21,___get_global_const(112));
#line 965
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__21);
#line 965
c_rt_lib0clear(&___nl__im__21);
#line 965
if(___nl__bool__19){ goto label_8;}
#line 965
c_rt_lib0move(&___nl__im__22,___get_global_const(916));
#line 965
___nl__bool__19 = c_rt_lib0eq(___nl__im__3, ___nl__im__22);
#line 965
c_rt_lib0clear(&___nl__im__22);
#line 965
label_8:
;
#line 965
//clear ___nl__bool__20;
#line 965
___nl__bool__19 = !___nl__bool__19;
#line 965
if(___nl__bool__19){ goto label_7;}
#line 966
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(526)));
#line 967
goto label_6;
#line 967
label_7:
;
#line 968
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 969
goto label_6;
#line 969
label_6:
;
#line 969
//clear ___nl__bool__19;
#line 970
goto label_1;
#line 970
label_2:
;
#line 970
label_1:
;
#line 970
//clear ___nl__bool__11;
#line 971
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 971
___nl__bool__23 = nlasm0eq_reg_type(___nl__im__24, ___nl__im__9);
#line 971
c_rt_lib0clear(&___nl__im__24);
#line 971
___nl__bool__23 = !___nl__bool__23;
#line 971
___nl__bool__23 = !___nl__bool__23;
#line 971
if(___nl__bool__23){ goto label_10;}
#line 972
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 973
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__1, ___ref___rec__4));
#line 974
goto label_9;
#line 974
label_10:
;
#line 974
label_9:
;
#line 974
//clear ___nl__bool__23;
#line 975
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(204)));
#line 975
___nl__bool__25 = nlasm0eq_reg_type(___nl__im__26, ___nl__im__9);
#line 975
c_rt_lib0clear(&___nl__im__26);
#line 975
___nl__bool__25 = !___nl__bool__25;
#line 975
___nl__bool__25 = !___nl__bool__25;
#line 975
if(___nl__bool__25){ goto label_12;}
#line 976
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 977
c_rt_lib0delete(translator_priv0move(___nl__im__6, ___nl__im__2, ___ref___rec__4));
#line 978
goto label_11;
#line 978
label_12:
;
#line 978
label_11:
;
#line 978
//clear ___nl__bool__25;
#line 979
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 979
___nl__bool__27 = nlasm0eq_reg_type(___nl__im__28, ___nl__im__10);
#line 979
c_rt_lib0clear(&___nl__im__28);
#line 979
___nl__bool__27 = !___nl__bool__27;
#line 979
___nl__bool__27 = !___nl__bool__27;
#line 979
if(___nl__bool__27){ goto label_14;}
#line 980
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__4, ___nl__im__10));
#line 981
___nl__bool__8 = true;
#line 982
goto label_13;
#line 982
label_14:
;
#line 982
label_13:
;
#line 982
//clear ___nl__bool__27;
#line 983
c_rt_lib0move(&___nl__im__31,___get_global_const(340));
#line 983
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__31);
#line 983
c_rt_lib0clear(&___nl__im__31);
#line 983
if(___nl__bool__29){ goto label_17;}
#line 983
c_rt_lib0move(&___nl__im__32,___get_global_const(912));
#line 983
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__32);
#line 983
c_rt_lib0clear(&___nl__im__32);
#line 983
label_17:
;
#line 983
//clear ___nl__bool__30;
#line 983
___nl__bool__29 = !___nl__bool__29;
#line 983
if(___nl__bool__29){ goto label_16;}
#line 984
c_rt_lib0move(&___nl__im__3,___get_global_const(340));
#line 985
goto label_15;
#line 985
label_16:
;
#line 985
c_rt_lib0move(&___nl__im__34,___get_global_const(338));
#line 985
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__34);
#line 985
c_rt_lib0clear(&___nl__im__34);
#line 985
if(___nl__bool__29){ goto label_19;}
#line 985
c_rt_lib0move(&___nl__im__35,___get_global_const(913));
#line 985
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__35);
#line 985
c_rt_lib0clear(&___nl__im__35);
#line 985
label_19:
;
#line 985
//clear ___nl__bool__33;
#line 985
___nl__bool__29 = !___nl__bool__29;
#line 985
if(___nl__bool__29){ goto label_18;}
#line 986
c_rt_lib0move(&___nl__im__3,___get_global_const(338));
#line 987
goto label_15;
#line 987
label_18:
;
#line 987
c_rt_lib0move(&___nl__im__37,___get_global_const(346));
#line 987
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__37);
#line 987
c_rt_lib0clear(&___nl__im__37);
#line 987
if(___nl__bool__29){ goto label_21;}
#line 987
c_rt_lib0move(&___nl__im__38,___get_global_const(914));
#line 987
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__38);
#line 987
c_rt_lib0clear(&___nl__im__38);
#line 987
label_21:
;
#line 987
//clear ___nl__bool__36;
#line 987
___nl__bool__29 = !___nl__bool__29;
#line 987
if(___nl__bool__29){ goto label_20;}
#line 988
c_rt_lib0move(&___nl__im__3,___get_global_const(346));
#line 989
goto label_15;
#line 989
label_20:
;
#line 989
c_rt_lib0move(&___nl__im__40,___get_global_const(107));
#line 989
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__40);
#line 989
c_rt_lib0clear(&___nl__im__40);
#line 989
if(___nl__bool__29){ goto label_23;}
#line 989
c_rt_lib0move(&___nl__im__41,___get_global_const(915));
#line 989
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__41);
#line 989
c_rt_lib0clear(&___nl__im__41);
#line 989
label_23:
;
#line 989
//clear ___nl__bool__39;
#line 989
___nl__bool__29 = !___nl__bool__29;
#line 989
if(___nl__bool__29){ goto label_22;}
#line 990
c_rt_lib0move(&___nl__im__3,___get_global_const(107));
#line 991
goto label_15;
#line 991
label_22:
;
#line 991
c_rt_lib0move(&___nl__im__43,___get_global_const(112));
#line 991
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__43);
#line 991
c_rt_lib0clear(&___nl__im__43);
#line 991
if(___nl__bool__29){ goto label_25;}
#line 991
c_rt_lib0move(&___nl__im__44,___get_global_const(916));
#line 991
___nl__bool__29 = c_rt_lib0eq(___nl__im__3, ___nl__im__44);
#line 991
c_rt_lib0clear(&___nl__im__44);
#line 991
label_25:
;
#line 991
//clear ___nl__bool__42;
#line 991
___nl__bool__29 = !___nl__bool__29;
#line 991
if(___nl__bool__29){ goto label_24;}
#line 992
c_rt_lib0move(&___nl__im__3,___get_global_const(112));
#line 993
goto label_15;
#line 993
label_24:
;
#line 993
label_15:
;
#line 993
//clear ___nl__bool__29;
#line 994
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__7, ___get_global_const(273), ___nl__im__5, ___get_global_const(274), ___nl__im__6, ___get_global_const(513), ___nl__im__3));
#line 994
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__im__46));
#line 994
c_rt_lib0clear(&___nl__im__46);
#line 994
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__45));
#line 994
c_rt_lib0clear(&___nl__im__45);
#line 995
___nl__bool__47 = ___nl__bool__8;
#line 995
___nl__bool__47 = !___nl__bool__47;
#line 995
if(___nl__bool__47){ goto label_27;}
#line 996
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__7, ___ref___rec__4));
#line 997
goto label_26;
#line 997
label_27:
;
#line 997
label_26:
;
#line 997
//clear ___nl__bool__47;
#line 997
c_rt_lib0clear(&___nl__im__0);
#line 997
c_rt_lib0clear(&___nl__im__1);
#line 997
c_rt_lib0clear(&___nl__im__2);
#line 997
c_rt_lib0clear(&___nl__im__3);
#line 997
c_rt_lib0clear(&___nl__im__5);
#line 997
c_rt_lib0clear(&___nl__im__6);
#line 997
c_rt_lib0clear(&___nl__im__7);
#line 997
//clear ___nl__bool__8;
#line 997
c_rt_lib0clear(&___nl__im__9);
#line 997
c_rt_lib0clear(&___nl__im__10);
#line 997
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
#line 1001
___nl__im_ptr__4 = &((*___ref___rec__0).debug0field);
#line 1001
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 1001
___nl__im_ptr__4 = NULL;
#line 1001
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(73)));
#line 1001
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(226), ___nl__im__1, ___get_global_const(220), ___nl__im__3, ___get_global_const(225), ___nl__im__5));
#line 1001
c_rt_lib0clear(&___nl__im__3);
#line 1001
c_rt_lib0clear(&___nl__im__5);
#line 1002
___nl__im_ptr__6 = &((*___ref___rec__0).result0field);
#line 1002
c_rt_lib0move(&___nl__im__7,___get_global_const(212));
#line 1002
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___nl__im_ptr__6), ___nl__im__7));
#line 1002
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__2));
#line 1002
c_rt_lib0move(&___nl__string__8,___get_global_const(212));
#line 1002
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__6, ___nl__string__8, ___nl__im__7));
#line 1002
___nl__im_ptr__6 = NULL;
#line 1002
c_rt_lib0clear(&___nl__im__7);
#line 1002
c_rt_lib0clear(&___nl__string__8);
#line 1003
___nl__im_ptr__9 = &((*___ref___rec__0).debug0field);
#line 1003
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(0));
#line 1003
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1003
c_rt_lib0hash_set_value_dec(___nl__im_ptr__9, ___get_global_const(732), ___nl__im__10);
#line 1003
___nl__im_ptr__9 = NULL;
#line 1003
c_rt_lib0clear(&___nl__im__10);
#line 1003
c_rt_lib0clear(&___nl__im__11);
#line 1003
c_rt_lib0clear(&___nl__im__1);
#line 1003
c_rt_lib0clear(&___nl__im__2);
#line 1003
return NULL;
}

ImmT  translator_priv0print_if_goto(nlasm0label_t0type ___nl__int__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1007
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 1007
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__5, ___get_global_const(75), ___nl__im__1));
#line 1007
c_rt_lib0clear(&___nl__im__5);
#line 1007
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(248), ___nl__im__4));
#line 1007
c_rt_lib0clear(&___nl__im__4);
#line 1007
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 1007
c_rt_lib0clear(&___nl__im__3);
#line 1007
//clear ___nl__int__0;
#line 1007
c_rt_lib0clear(&___nl__im__1);
#line 1007
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
#line 1012
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 1012
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1012
c_rt_lib0clear(&___nl__im__5);
#line 1014
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1014
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_const(328));
#line 1014
c_rt_lib0clear(&___nl__im__8);
#line 1014
___nl__bool__7 = !___nl__bool__7;
#line 1014
if(___nl__bool__7){ goto label_2;}
#line 1015
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1016
goto label_1;
#line 1016
label_2:
;
#line 1016
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1016
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(128));
#line 1016
c_rt_lib0clear(&___nl__im__9);
#line 1016
___nl__bool__7 = !___nl__bool__7;
#line 1016
if(___nl__bool__7){ goto label_3;}
#line 1017
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1017
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1017
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_const(128)));
#line 1017
c_rt_lib0clear(&___nl__im__12);
#line 1017
c_rt_lib0clear(&___nl__im__13);
#line 1017
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1017
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1017
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(128)));
#line 1017
c_rt_lib0clear(&___nl__im__15);
#line 1017
c_rt_lib0clear(&___nl__im__16);
#line 1017
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__14, ___get_global_const(2)));
#line 1017
c_rt_lib0clear(&___nl__im__11);
#line 1017
c_rt_lib0clear(&___nl__im__14);
#line 1017
___nl__im_ptr__19 = &((*___ref___rec__3).logic0field);
#line 1017
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 1017
___nl__im_ptr__19 = NULL;
#line 1017
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(387)));
#line 1017
c_rt_lib0clear(&___nl__im__18);
#line 1017
c_rt_lib0move(&___nl__im__6, translator_priv0var_type_to_reg_type(___nl__im__10, ___nl__im__17));
#line 1017
c_rt_lib0clear(&___nl__im__10);
#line 1017
c_rt_lib0clear(&___nl__im__17);
#line 1018
goto label_1;
#line 1018
label_3:
;
#line 1019
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1019
nl_die_arg(___nl__im__20);
#line 1020
goto label_1;
#line 1020
label_1:
;
#line 1020
//clear ___nl__bool__7;
#line 1020
c_rt_lib0clear(&___nl__im__20);
#line 1021
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1021
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__6, ___nl__im__22);
#line 1021
c_rt_lib0clear(&___nl__im__22);
#line 1021
___nl__bool__21 = !___nl__bool__21;
#line 1022
c_rt_lib0copy(&___nl__im__23, ___nl__im__0);
#line 1023
___nl__bool__24 = ___nl__bool__21;
#line 1023
___nl__bool__24 = !___nl__bool__24;
#line 1023
if(___nl__bool__24){ goto label_5;}
#line 1023
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__3, ___nl__im__6));
#line 1023
goto label_4;
#line 1023
label_5:
;
#line 1023
label_4:
;
#line 1023
//clear ___nl__bool__24;
#line 1024
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__23, ___get_global_const(75), ___nl__im__1, ___get_global_const(275), ___nl__im__4));
#line 1024
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__im__26));
#line 1024
c_rt_lib0clear(&___nl__im__26);
#line 1024
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__25));
#line 1024
c_rt_lib0clear(&___nl__im__25);
#line 1025
___nl__bool__27 = ___nl__bool__21;
#line 1025
___nl__bool__27 = !___nl__bool__27;
#line 1025
if(___nl__bool__27){ goto label_7;}
#line 1025
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__23, ___ref___rec__3));
#line 1025
goto label_6;
#line 1025
label_7:
;
#line 1025
label_6:
;
#line 1025
//clear ___nl__bool__27;
#line 1025
c_rt_lib0clear(&___nl__im__0);
#line 1025
c_rt_lib0clear(&___nl__im__1);
#line 1025
c_rt_lib0clear(&___nl__im__2);
#line 1025
c_rt_lib0clear(&___nl__im__4);
#line 1025
c_rt_lib0clear(&___nl__im__6);
#line 1025
//clear ___nl__bool__21;
#line 1025
c_rt_lib0clear(&___nl__im__23);
#line 1025
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
#line 1030
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 1030
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__1, ___nl__im__5, ___ref___rec__3));
#line 1030
c_rt_lib0clear(&___nl__im__5);
#line 1031
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_const(75), ___nl__im__0, ___get_global_const(275), ___nl__im__4, ___get_global_const(223), ___nl__im__2));
#line 1031
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__im__7));
#line 1031
c_rt_lib0clear(&___nl__im__7);
#line 1031
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1031
c_rt_lib0clear(&___nl__im__6);
#line 1031
c_rt_lib0clear(&___nl__im__0);
#line 1031
c_rt_lib0clear(&___nl__im__1);
#line 1031
c_rt_lib0clear(&___nl__im__2);
#line 1031
c_rt_lib0clear(&___nl__im__4);
#line 1031
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
#line 1035
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 1036
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1036
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(328));
#line 1036
c_rt_lib0clear(&___nl__im__5);
#line 1036
___nl__bool__4 = !___nl__bool__4;
#line 1036
if(___nl__bool__4){ goto label_2;}
#line 1037
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1037
c_rt_lib0move(&___nl__im__3, translator_priv0get_cast(___nl__im__1, ___nl__im__6, ___ref___rec__2));
#line 1037
c_rt_lib0clear(&___nl__im__6);
#line 1038
goto label_1;
#line 1038
label_2:
;
#line 1038
label_1:
;
#line 1038
//clear ___nl__bool__4;
#line 1039
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__0, ___get_global_const(223), ___nl__im__3));
#line 1039
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(240), ___nl__im__8));
#line 1039
c_rt_lib0clear(&___nl__im__8);
#line 1039
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__7));
#line 1039
c_rt_lib0clear(&___nl__im__7);
#line 1039
c_rt_lib0clear(&___nl__im__0);
#line 1039
c_rt_lib0clear(&___nl__im__1);
#line 1039
c_rt_lib0clear(&___nl__im__3);
#line 1039
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
#line 1045
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1045
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(328));
#line 1045
c_rt_lib0clear(&___nl__im__6);
#line 1045
___nl__bool__5 = !___nl__bool__5;
#line 1045
if(___nl__bool__5){ goto label_2;}
#line 1046
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1047
goto label_1;
#line 1047
label_2:
;
#line 1047
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1047
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_const(129));
#line 1047
c_rt_lib0clear(&___nl__im__7);
#line 1047
___nl__bool__5 = !___nl__bool__5;
#line 1047
if(___nl__bool__5){ goto label_3;}
#line 1048
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1048
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1048
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_const(129)));
#line 1048
c_rt_lib0clear(&___nl__im__11);
#line 1048
c_rt_lib0clear(&___nl__im__12);
#line 1048
___nl__im_ptr__15 = &((*___ref___rec__3).logic0field);
#line 1048
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1048
___nl__im_ptr__15 = NULL;
#line 1048
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_const(387)));
#line 1048
c_rt_lib0clear(&___nl__im__14);
#line 1048
c_rt_lib0move(&___nl__im__9, translator_priv0unwrap_ref(___nl__im__10, ___nl__im__13));
#line 1048
c_rt_lib0clear(&___nl__im__10);
#line 1048
c_rt_lib0clear(&___nl__im__13);
#line 1048
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1048
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(204)));
#line 1048
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_const(129)));
#line 1048
c_rt_lib0clear(&___nl__im__18);
#line 1048
c_rt_lib0clear(&___nl__im__19);
#line 1048
___nl__im_ptr__22 = &((*___ref___rec__3).logic0field);
#line 1048
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1048
___nl__im_ptr__22 = NULL;
#line 1048
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(387)));
#line 1048
c_rt_lib0clear(&___nl__im__21);
#line 1048
c_rt_lib0move(&___nl__im__16, translator_priv0unwrap_ref(___nl__im__17, ___nl__im__20));
#line 1048
c_rt_lib0clear(&___nl__im__17);
#line 1048
c_rt_lib0clear(&___nl__im__20);
#line 1048
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__16, ___get_global_const(4)));
#line 1048
c_rt_lib0clear(&___nl__im__9);
#line 1048
c_rt_lib0clear(&___nl__im__16);
#line 1049
___nl__im_ptr__25 = &((*___ref___rec__3).logic0field);
#line 1049
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1049
___nl__im_ptr__25 = NULL;
#line 1049
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_const(387)));
#line 1049
c_rt_lib0clear(&___nl__im__24);
#line 1049
c_rt_lib0move(&___nl__im__8, translator_priv0unwrap_ref(___nl__im__8, ___nl__im__23));
#line 1049
c_rt_lib0clear(&___nl__im__23);
#line 1050
___nl__im_ptr__28 = &((*___ref___rec__3).logic0field);
#line 1050
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1050
___nl__im_ptr__28 = NULL;
#line 1050
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(387)));
#line 1050
c_rt_lib0clear(&___nl__im__27);
#line 1050
c_rt_lib0move(&___nl__im__4, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__26));
#line 1050
c_rt_lib0clear(&___nl__im__26);
#line 1051
goto label_1;
#line 1051
label_3:
;
#line 1052
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1052
nl_die_arg(___nl__im__29);
#line 1053
goto label_1;
#line 1053
label_1:
;
#line 1053
//clear ___nl__bool__5;
#line 1053
c_rt_lib0clear(&___nl__im__8);
#line 1053
c_rt_lib0clear(&___nl__im__29);
#line 1054
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1054
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__31);
#line 1054
c_rt_lib0clear(&___nl__im__31);
#line 1054
___nl__bool__30 = !___nl__bool__30;
#line 1055
c_rt_lib0copy(&___nl__im__32, ___nl__im__0);
#line 1056
___nl__bool__33 = ___nl__bool__30;
#line 1056
___nl__bool__33 = !___nl__bool__33;
#line 1056
if(___nl__bool__33){ goto label_5;}
#line 1056
c_rt_lib0move(&___nl__im__32, translator_priv0new_register(___ref___rec__3, ___nl__im__4));
#line 1056
goto label_4;
#line 1056
label_5:
;
#line 1056
label_4:
;
#line 1056
//clear ___nl__bool__33;
#line 1057
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__im__32, ___get_global_const(75), ___nl__im__1, ___get_global_const(370), ___nl__im__2));
#line 1057
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__im__35));
#line 1057
c_rt_lib0clear(&___nl__im__35);
#line 1057
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__34));
#line 1057
c_rt_lib0clear(&___nl__im__34);
#line 1058
___nl__bool__36 = ___nl__bool__30;
#line 1058
___nl__bool__36 = !___nl__bool__36;
#line 1058
if(___nl__bool__36){ goto label_7;}
#line 1058
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__32, ___ref___rec__3));
#line 1058
goto label_6;
#line 1058
label_7:
;
#line 1058
label_6:
;
#line 1058
//clear ___nl__bool__36;
#line 1058
c_rt_lib0clear(&___nl__im__0);
#line 1058
c_rt_lib0clear(&___nl__im__1);
#line 1058
c_rt_lib0clear(&___nl__im__2);
#line 1058
c_rt_lib0clear(&___nl__im__4);
#line 1058
//clear ___nl__bool__30;
#line 1058
c_rt_lib0clear(&___nl__im__32);
#line 1058
return NULL;
}

ImmT  translator_priv0print_set_value(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1062
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(75), ___nl__im__0, ___get_global_const(370), ___nl__im__1, ___get_global_const(223), ___nl__im__2));
#line 1062
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(243), ___nl__im__5));
#line 1062
c_rt_lib0clear(&___nl__im__5);
#line 1062
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1062
c_rt_lib0clear(&___nl__im__4);
#line 1062
c_rt_lib0clear(&___nl__im__0);
#line 1062
c_rt_lib0clear(&___nl__im__1);
#line 1062
c_rt_lib0clear(&___nl__im__2);
#line 1062
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
#line 1067
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(927)));
#line 1067
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 1069
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 1069
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 1070
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(927)));
#line 1070
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 1070
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__6, ___get_global_const(563), ___nl__im__7));
#line 1070
c_rt_lib0clear(&___nl__im__6);
#line 1070
c_rt_lib0clear(&___nl__im__7);
#line 1070
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 1070
c_rt_lib0clear(&___nl__im__5);
#line 1072
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 1074
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 1074
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__11));
#line 1075
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 1075
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__11, ___get_global_const(561), ___nl__im__12));
#line 1075
c_rt_lib0clear(&___nl__im__11);
#line 1075
c_rt_lib0clear(&___nl__im__12);
#line 1075
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 1075
c_rt_lib0clear(&___nl__im__10);
#line 1077
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(927)));
#line 1077
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__13));
#line 1079
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 1079
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__16));
#line 1080
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(46), ___get_global_const(927)));
#line 1080
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__17));
#line 1080
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__16, ___get_global_const(563), ___nl__im__17));
#line 1080
c_rt_lib0clear(&___nl__im__16);
#line 1080
c_rt_lib0clear(&___nl__im__17);
#line 1080
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 1080
c_rt_lib0clear(&___nl__im__15);
#line 1082
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 1084
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(375), ___get_global_const(376)));
#line 1084
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__21));
#line 1085
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 1085
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__21, ___get_global_const(533), ___nl__im__22));
#line 1085
c_rt_lib0clear(&___nl__im__21);
#line 1085
c_rt_lib0clear(&___nl__im__22);
#line 1085
c_rt_lib0move(&___nl__im__19, ptd0rec(___nl__im__20));
#line 1085
c_rt_lib0clear(&___nl__im__20);
#line 1085
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_const(563), ___nl__im__3, ___get_global_const(254), ___nl__im__4, ___get_global_const(370), ___nl__im__8, ___get_global_const(252), ___nl__im__9, ___get_global_const(1220), ___nl__im__13, ___get_global_const(256), ___nl__im__14, ___get_global_const(925), ___nl__im__18, ___get_global_const(258), ___nl__im__19));
#line 1085
c_rt_lib0clear(&___nl__im__3);
#line 1085
c_rt_lib0clear(&___nl__im__4);
#line 1085
c_rt_lib0clear(&___nl__im__8);
#line 1085
c_rt_lib0clear(&___nl__im__9);
#line 1085
c_rt_lib0clear(&___nl__im__13);
#line 1085
c_rt_lib0clear(&___nl__im__14);
#line 1085
c_rt_lib0clear(&___nl__im__18);
#line 1085
c_rt_lib0clear(&___nl__im__19);
#line 1085
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 1085
c_rt_lib0clear(&___nl__im__2);
#line 1085
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 1085
c_rt_lib0clear(&___nl__im__1);
#line 1085
return ___nl__im__0;
#line 1085
c_rt_lib0clear(&___nl__im__0);
#line 1085
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
#line 1091
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 1092
label_2:
;
#line 1092
___nl__bool__3 = true;
#line 1092
___nl__bool__3 = !___nl__bool__3;
#line 1092
if(___nl__bool__3){ goto label_1;}
#line 1093
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(218)));
#line 1093
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_const(233));
#line 1093
c_rt_lib0clear(&___nl__im__5);
#line 1093
___nl__bool__4 = !___nl__bool__4;
#line 1093
if(___nl__bool__4){ goto label_4;}
#line 1094
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(218)));
#line 1094
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(218)));
#line 1094
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(233)));
#line 1094
c_rt_lib0clear(&___nl__im__7);
#line 1094
c_rt_lib0clear(&___nl__im__8);
#line 1095
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(513)));
#line 1096
c_rt_lib0move(&___nl__im__14,___get_global_const(897));
#line 1096
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__14);
#line 1096
c_rt_lib0clear(&___nl__im__14);
#line 1096
if(___nl__bool__10){ goto label_9;}
#line 1096
c_rt_lib0move(&___nl__im__15,___get_global_const(898));
#line 1096
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__15);
#line 1096
c_rt_lib0clear(&___nl__im__15);
#line 1096
label_9:
;
#line 1096
//clear ___nl__bool__13;
#line 1096
if(___nl__bool__10){ goto label_8;}
#line 1096
c_rt_lib0move(&___nl__im__16,___get_global_const(531));
#line 1096
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__16);
#line 1096
c_rt_lib0clear(&___nl__im__16);
#line 1096
label_8:
;
#line 1096
//clear ___nl__bool__12;
#line 1096
if(___nl__bool__10){ goto label_7;}
#line 1096
c_rt_lib0move(&___nl__im__17,___get_global_const(899));
#line 1096
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__17);
#line 1096
c_rt_lib0clear(&___nl__im__17);
#line 1096
label_7:
;
#line 1096
//clear ___nl__bool__11;
#line 1096
___nl__bool__10 = !___nl__bool__10;
#line 1096
___nl__bool__10 = !___nl__bool__10;
#line 1096
if(___nl__bool__10){ goto label_6;}
#line 1096
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 1096
nl_die_arg(___nl__im__18);
#line 1096
goto label_5;
#line 1096
label_6:
;
#line 1096
label_5:
;
#line 1096
//clear ___nl__bool__10;
#line 1096
c_rt_lib0clear(&___nl__im__18);
#line 1097
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1098
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(513)));
#line 1098
c_rt_lib0move(&___nl__im__22,___get_global_const(897));
#line 1098
___nl__bool__20 = c_rt_lib0eq(___nl__im__21, ___nl__im__22);
#line 1098
c_rt_lib0clear(&___nl__im__21);
#line 1098
c_rt_lib0clear(&___nl__im__22);
#line 1098
___nl__bool__20 = !___nl__bool__20;
#line 1098
if(___nl__bool__20){ goto label_11;}
#line 1099
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(273)));
#line 1099
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_const(204)));
#line 1099
c_rt_lib0clear(&___nl__im__25);
#line 1099
___nl__im_ptr__28 = &((*___ref___rec__1).logic0field);
#line 1099
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1099
___nl__im_ptr__28 = NULL;
#line 1099
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(387)));
#line 1099
c_rt_lib0clear(&___nl__im__27);
#line 1099
c_rt_lib0move(&___nl__im__23, translator_priv0unwrap_ref(___nl__im__24, ___nl__im__26));
#line 1099
c_rt_lib0clear(&___nl__im__24);
#line 1099
c_rt_lib0clear(&___nl__im__26);
#line 1100
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__23, ___get_global_const(2));
#line 1100
___nl__bool__29 = !___nl__bool__29;
#line 1100
if(___nl__bool__29){ goto label_13;}
#line 1102
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__23, ___get_global_const(2)));
#line 1103
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1103
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__32, ___get_global_const(563), ___nl__im__33));
#line 1103
c_rt_lib0clear(&___nl__im__32);
#line 1103
c_rt_lib0clear(&___nl__im__33);
#line 1103
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_const(254), ___nl__im__31));
#line 1103
c_rt_lib0clear(&___nl__im__31);
#line 1103
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__30));
#line 1103
c_rt_lib0clear(&___nl__im__30);
#line 1105
goto label_12;
#line 1105
label_13:
;
#line 1106
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1106
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(563), ___nl__im__35));
#line 1106
c_rt_lib0clear(&___nl__im__35);
#line 1106
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__34));
#line 1106
c_rt_lib0clear(&___nl__im__34);
#line 1107
goto label_12;
#line 1107
label_12:
;
#line 1107
//clear ___nl__bool__29;
#line 1108
goto label_10;
#line 1108
label_11:
;
#line 1108
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(513)));
#line 1108
c_rt_lib0move(&___nl__im__37,___get_global_const(898));
#line 1108
___nl__bool__20 = c_rt_lib0eq(___nl__im__36, ___nl__im__37);
#line 1108
c_rt_lib0clear(&___nl__im__36);
#line 1108
c_rt_lib0clear(&___nl__im__37);
#line 1108
___nl__bool__20 = !___nl__bool__20;
#line 1108
if(___nl__bool__20){ goto label_14;}
#line 1109
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(273)));
#line 1109
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_const(204)));
#line 1109
c_rt_lib0clear(&___nl__im__40);
#line 1109
___nl__im_ptr__43 = &((*___ref___rec__1).logic0field);
#line 1109
c_rt_lib0copy(&___nl__im__42, (*___nl__im_ptr__43));
#line 1109
___nl__im_ptr__43 = NULL;
#line 1109
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(387)));
#line 1109
c_rt_lib0clear(&___nl__im__42);
#line 1109
c_rt_lib0move(&___nl__im__38, translator_priv0unwrap_ref(___nl__im__39, ___nl__im__41));
#line 1109
c_rt_lib0clear(&___nl__im__39);
#line 1109
c_rt_lib0clear(&___nl__im__41);
#line 1110
___nl__bool__44 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(4));
#line 1110
___nl__bool__44 = !___nl__bool__44;
#line 1110
if(___nl__bool__44){ goto label_16;}
#line 1112
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__38, ___get_global_const(4)));
#line 1113
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1113
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__47, ___get_global_const(563), ___nl__im__48));
#line 1113
c_rt_lib0clear(&___nl__im__47);
#line 1113
c_rt_lib0clear(&___nl__im__48);
#line 1113
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(256), ___nl__im__46));
#line 1113
c_rt_lib0clear(&___nl__im__46);
#line 1113
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__45));
#line 1113
c_rt_lib0clear(&___nl__im__45);
#line 1115
goto label_15;
#line 1115
label_16:
;
#line 1116
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1116
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_const(1220), ___nl__im__50));
#line 1116
c_rt_lib0clear(&___nl__im__50);
#line 1116
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__49));
#line 1116
c_rt_lib0clear(&___nl__im__49);
#line 1117
goto label_15;
#line 1117
label_15:
;
#line 1117
//clear ___nl__bool__44;
#line 1118
goto label_10;
#line 1118
label_14:
;
#line 1118
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(513)));
#line 1118
c_rt_lib0move(&___nl__im__52,___get_global_const(531));
#line 1118
___nl__bool__20 = c_rt_lib0eq(___nl__im__51, ___nl__im__52);
#line 1118
c_rt_lib0clear(&___nl__im__51);
#line 1118
c_rt_lib0clear(&___nl__im__52);
#line 1118
___nl__bool__20 = !___nl__bool__20;
#line 1118
if(___nl__bool__20){ goto label_17;}
#line 1119
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(273)));
#line 1119
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(204)));
#line 1119
c_rt_lib0clear(&___nl__im__55);
#line 1119
___nl__im_ptr__58 = &((*___ref___rec__1).logic0field);
#line 1119
c_rt_lib0copy(&___nl__im__57, (*___nl__im_ptr__58));
#line 1119
___nl__im_ptr__58 = NULL;
#line 1119
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_const(387)));
#line 1119
c_rt_lib0clear(&___nl__im__57);
#line 1119
c_rt_lib0move(&___nl__im__53, translator_priv0unwrap_ref(___nl__im__54, ___nl__im__56));
#line 1119
c_rt_lib0clear(&___nl__im__54);
#line 1119
c_rt_lib0clear(&___nl__im__56);
#line 1120
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__53, ___get_global_const(6));
#line 1120
___nl__bool__59 = !___nl__bool__59;
#line 1120
if(___nl__bool__59){ goto label_19;}
#line 1121
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1121
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_const(218)));
#line 1121
c_rt_lib0clear(&___nl__im__62);
#line 1121
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1121
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__64, ___get_global_const(218)));
#line 1121
c_rt_lib0clear(&___nl__im__64);
#line 1121
c_rt_lib0move(&___nl__im__60, c_rt_lib0priv_as(___nl__im__63, ___get_global_const(903)));
#line 1121
c_rt_lib0clear(&___nl__im__61);
#line 1121
c_rt_lib0clear(&___nl__im__63);
#line 1123
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__53, ___get_global_const(6)));
#line 1123
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value(___nl__im__68, ___nl__im__60));
#line 1123
c_rt_lib0clear(&___nl__im__68);
#line 1123
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__67, ___get_global_const(561), ___nl__im__60));
#line 1123
c_rt_lib0clear(&___nl__im__67);
#line 1123
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__66));
#line 1123
c_rt_lib0clear(&___nl__im__66);
#line 1123
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__65));
#line 1123
c_rt_lib0clear(&___nl__im__65);
#line 1126
goto label_18;
#line 1126
label_19:
;
#line 1126
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__53, ___get_global_const(4));
#line 1126
___nl__bool__59 = !___nl__bool__59;
#line 1126
if(___nl__bool__59){ goto label_20;}
#line 1128
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__53, ___get_global_const(4)));
#line 1129
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1129
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__71, ___get_global_const(563), ___nl__im__72));
#line 1129
c_rt_lib0clear(&___nl__im__71);
#line 1129
c_rt_lib0clear(&___nl__im__72);
#line 1129
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_arg(___get_global_const(256), ___nl__im__70));
#line 1129
c_rt_lib0clear(&___nl__im__70);
#line 1129
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__69));
#line 1129
c_rt_lib0clear(&___nl__im__69);
#line 1131
goto label_18;
#line 1131
label_20:
;
#line 1132
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1132
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_const(218)));
#line 1132
c_rt_lib0clear(&___nl__im__76);
#line 1132
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1132
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_const(218)));
#line 1132
c_rt_lib0clear(&___nl__im__78);
#line 1132
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__77, ___get_global_const(903)));
#line 1132
c_rt_lib0clear(&___nl__im__75);
#line 1132
c_rt_lib0clear(&___nl__im__77);
#line 1132
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_arg(___get_global_const(370), ___nl__im__74));
#line 1132
c_rt_lib0clear(&___nl__im__74);
#line 1132
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__73));
#line 1132
c_rt_lib0clear(&___nl__im__73);
#line 1133
goto label_18;
#line 1133
label_18:
;
#line 1133
//clear ___nl__bool__59;
#line 1133
c_rt_lib0clear(&___nl__im__60);
#line 1134
goto label_10;
#line 1134
label_17:
;
#line 1134
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(513)));
#line 1134
c_rt_lib0move(&___nl__im__80,___get_global_const(899));
#line 1134
___nl__bool__20 = c_rt_lib0eq(___nl__im__79, ___nl__im__80);
#line 1134
c_rt_lib0clear(&___nl__im__79);
#line 1134
c_rt_lib0clear(&___nl__im__80);
#line 1134
___nl__bool__20 = !___nl__bool__20;
#line 1134
if(___nl__bool__20){ goto label_21;}
#line 1135
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(273)));
#line 1135
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__83, ___get_global_const(204)));
#line 1135
c_rt_lib0clear(&___nl__im__83);
#line 1135
___nl__im_ptr__86 = &((*___ref___rec__1).logic0field);
#line 1135
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 1135
___nl__im_ptr__86 = NULL;
#line 1135
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__85, ___get_global_const(387)));
#line 1135
c_rt_lib0clear(&___nl__im__85);
#line 1135
c_rt_lib0move(&___nl__im__81, translator_priv0unwrap_ref(___nl__im__82, ___nl__im__84));
#line 1135
c_rt_lib0clear(&___nl__im__82);
#line 1135
c_rt_lib0clear(&___nl__im__84);
#line 1136
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1136
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_const(218)));
#line 1136
c_rt_lib0clear(&___nl__im__89);
#line 1136
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(274)));
#line 1136
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__91, ___get_global_const(218)));
#line 1136
c_rt_lib0clear(&___nl__im__91);
#line 1136
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__90, ___get_global_const(903)));
#line 1136
c_rt_lib0clear(&___nl__im__88);
#line 1136
c_rt_lib0clear(&___nl__im__90);
#line 1137
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(14));
#line 1137
___nl__bool__92 = !___nl__bool__92;
#line 1137
if(___nl__bool__92){ goto label_23;}
#line 1139
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__81, ___get_global_const(14)));
#line 1139
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value(___nl__im__97, ___nl__im__87));
#line 1139
c_rt_lib0clear(&___nl__im__97);
#line 1139
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__81, ___get_global_const(14)));
#line 1139
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value(___nl__im__99, ___nl__im__87));
#line 1139
c_rt_lib0clear(&___nl__im__99);
#line 1139
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__98, ___get_global_const(28)));
#line 1139
c_rt_lib0clear(&___nl__im__96);
#line 1139
c_rt_lib0clear(&___nl__im__98);
#line 1139
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_mk(2, ___get_global_const(1240), ___nl__im__95, ___get_global_const(533), ___nl__im__87));
#line 1139
c_rt_lib0clear(&___nl__im__95);
#line 1139
c_rt_lib0move(&___nl__im__93, c_rt_lib0ov_mk_arg(___get_global_const(258), ___nl__im__94));
#line 1139
c_rt_lib0clear(&___nl__im__94);
#line 1139
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__93));
#line 1139
c_rt_lib0clear(&___nl__im__93);
#line 1142
goto label_22;
#line 1142
label_23:
;
#line 1142
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(13));
#line 1142
if(___nl__bool__92){ goto label_25;}
#line 1142
___nl__bool__92 = c_rt_lib0priv_is(___nl__im__81, ___get_global_const(0));
#line 1142
label_25:
;
#line 1142
//clear ___nl__bool__100;
#line 1142
___nl__bool__92 = !___nl__bool__92;
#line 1142
if(___nl__bool__92){ goto label_24;}
#line 1143
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_arg(___get_global_const(925), ___nl__im__87));
#line 1143
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(1, ___nl__im__101));
#line 1143
c_rt_lib0clear(&___nl__im__101);
#line 1144
goto label_22;
#line 1144
label_24:
;
#line 1145
c_rt_lib0move(&___nl__im__102, c_rt_lib0array_mk(0));
#line 1145
nl_die_arg(___nl__im__102);
#line 1146
goto label_22;
#line 1146
label_22:
;
#line 1146
//clear ___nl__bool__92;
#line 1146
c_rt_lib0clear(&___nl__im__102);
#line 1147
goto label_10;
#line 1147
label_21:
;
#line 1148
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(0));
#line 1148
nl_die_arg(___nl__im__103);
#line 1149
goto label_10;
#line 1149
label_10:
;
#line 1149
//clear ___nl__bool__20;
#line 1149
c_rt_lib0clear(&___nl__im__23);
#line 1149
c_rt_lib0clear(&___nl__im__38);
#line 1149
c_rt_lib0clear(&___nl__im__53);
#line 1149
c_rt_lib0clear(&___nl__im__81);
#line 1149
c_rt_lib0clear(&___nl__im__87);
#line 1149
c_rt_lib0clear(&___nl__im__103);
#line 1150
c_rt_lib0delete(array0append(&___nl__im__19, ___nl__im__2));
#line 1151
c_rt_lib0copy(&___nl__im__2, ___nl__im__19);
#line 1152
c_rt_lib0move(___ref___im__0, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(273)));
#line 1153
goto label_3;
#line 1153
label_4:
;
#line 1153
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(218)));
#line 1153
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__104, ___get_global_const(900));
#line 1153
c_rt_lib0clear(&___nl__im__104);
#line 1153
___nl__bool__4 = !___nl__bool__4;
#line 1153
if(___nl__bool__4){ goto label_26;}
#line 1154
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(218)));
#line 1154
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_const(218)));
#line 1154
c_rt_lib0move(___ref___im__0, c_rt_lib0priv_as(___nl__im__106, ___get_global_const(900)));
#line 1154
c_rt_lib0clear(&___nl__im__105);
#line 1154
c_rt_lib0clear(&___nl__im__106);
#line 1155
goto label_3;
#line 1155
label_26:
;
#line 1156
goto label_1;
#line 1157
goto label_3;
#line 1157
label_3:
;
#line 1157
//clear ___nl__bool__4;
#line 1157
c_rt_lib0clear(&___nl__im__6);
#line 1157
c_rt_lib0clear(&___nl__im__9);
#line 1157
c_rt_lib0clear(&___nl__im__19);
#line 1158
goto label_2;
#line 1158
label_1:
;
#line 1159
//clear ___nl__bool__3;
#line 1159
return ___nl__im__2;
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
#line 1164
c_rt_lib0move(&___nl__im__3, translator_priv0get_struct_of_lvalue(&___nl__im__0, ___ref___rec__2));
#line 1165
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1165
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1165
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_const(462)));
#line 1165
c_rt_lib0clear(&___nl__im__5);
#line 1165
c_rt_lib0clear(&___nl__im__6);
#line 1166
c_rt_lib0move(&___nl__im__8, translator_priv0get_var_register(___nl__im__4, ___ref___rec__2));
#line 1166
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(1, ___nl__im__8));
#line 1166
c_rt_lib0clear(&___nl__im__8);
#line 1167
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1168
___nl__int__10 = c_rt_lib0array_len(___nl__im__3);
#line 1168
___nl__int__11 = 0;
#line 1168
___nl__int__12 = 1;
#line 1168
label_3:
;
#line 1168
___nl__int__14 = ___nl__int__11 >= ___nl__int__10;
#line 1168
___nl__bool__13 = ___nl__int__14;
#line 1168
if(___nl__bool__13){ goto label_1;}
#line 1169
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__3, ___nl__int__11));
#line 1169
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(563));
#line 1169
if(___nl__bool__16){ goto label_5;}
#line 1175
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(254));
#line 1175
if(___nl__bool__16){ goto label_6;}
#line 1181
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(1220));
#line 1181
if(___nl__bool__16){ goto label_7;}
#line 1187
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(370));
#line 1187
if(___nl__bool__16){ goto label_8;}
#line 1196
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(252));
#line 1196
if(___nl__bool__16){ goto label_9;}
#line 1201
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(925));
#line 1201
if(___nl__bool__16){ goto label_10;}
#line 1205
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(258));
#line 1205
if(___nl__bool__16){ goto label_11;}
#line 1210
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_const(256));
#line 1210
if(___nl__bool__16){ goto label_12;}
#line 1210
c_rt_lib0move(&___nl__im__17,___get_global_const(16));
#line 1210
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1210
nl_die_arg(___nl__im__17);
#line 1169
label_5:
;
#line 1169
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(563)));
#line 1169
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1170
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1170
c_rt_lib0move(&___nl__im__20, translator_priv0new_register(___ref___rec__2, ___nl__im__21));
#line 1170
c_rt_lib0clear(&___nl__im__21);
#line 1170
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__20));
#line 1170
c_rt_lib0clear(&___nl__im__20);
#line 1171
c_rt_lib0move(&___nl__im__23, translator_priv0calc_val(___nl__im__18, ___ref___rec__2));
#line 1171
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 1171
c_rt_lib0move(&___nl__im__22, translator_priv0get_cast(___nl__im__23, ___nl__im__24, ___ref___rec__2));
#line 1171
c_rt_lib0clear(&___nl__im__23);
#line 1171
c_rt_lib0clear(&___nl__im__24);
#line 1172
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1172
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__27, ___get_global_const(563), ___nl__im__22));
#line 1172
c_rt_lib0clear(&___nl__im__27);
#line 1172
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_const(563), ___nl__im__26));
#line 1172
c_rt_lib0clear(&___nl__im__26);
#line 1172
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__25));
#line 1172
c_rt_lib0clear(&___nl__im__25);
#line 1173
___nl__bool__28 = ___nl__bool__1;
#line 1173
___nl__bool__28 = !___nl__bool__28;
#line 1173
___nl__bool__29 = !___nl__bool__28;
#line 1173
if(___nl__bool__29){ goto label_15;}
#line 1173
___nl__int__31 = c_rt_lib0array_len(___nl__im__3);
#line 1173
___nl__int__32 = 1;
#line 1173
___nl__int__30 = ___nl__int__31 - ___nl__int__32;
#line 1173
//clear ___nl__int__31;
#line 1173
//clear ___nl__int__32;
#line 1173
___nl__int__33 = ___nl__int__11 == ___nl__int__30;
#line 1173
___nl__bool__28 = ___nl__int__33;
#line 1173
//clear ___nl__int__30;
#line 1173
//clear ___nl__int__33;
#line 1173
label_15:
;
#line 1173
//clear ___nl__bool__29;
#line 1173
___nl__bool__28 = !___nl__bool__28;
#line 1173
if(___nl__bool__28){ goto label_14;}
#line 1173
goto label_1;
#line 1173
goto label_13;
#line 1173
label_14:
;
#line 1173
label_13:
;
#line 1173
//clear ___nl__bool__28;
#line 1174
___nl__int__36 = 1;
#line 1174
___nl__int__35 = ___nl__int__11 + ___nl__int__36;
#line 1174
//clear ___nl__int__36;
#line 1174
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__7, ___nl__int__35));
#line 1174
//clear ___nl__int__35;
#line 1174
c_rt_lib0move(&___nl__im__37,___get_global_const(1241));
#line 1174
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1174
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__40));
#line 1174
c_rt_lib0clear(&___nl__im__40);
#line 1174
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__22));
#line 1174
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(2, ___nl__im__39, ___nl__im__41));
#line 1174
c_rt_lib0clear(&___nl__im__39);
#line 1174
c_rt_lib0clear(&___nl__im__41);
#line 1174
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__34, ___nl__im__37, ___nl__im__38, ___ref___rec__2));
#line 1174
c_rt_lib0clear(&___nl__im__34);
#line 1174
c_rt_lib0clear(&___nl__im__37);
#line 1174
c_rt_lib0clear(&___nl__im__38);
#line 1175
goto label_4;
#line 1175
label_6:
;
#line 1175
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(254)));
#line 1175
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 1176
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(1240)));
#line 1176
___nl__im_ptr__48 = &((*___ref___rec__2).logic0field);
#line 1176
c_rt_lib0copy(&___nl__im__47, (*___nl__im_ptr__48));
#line 1176
___nl__im_ptr__48 = NULL;
#line 1176
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_const(387)));
#line 1176
c_rt_lib0clear(&___nl__im__47);
#line 1176
c_rt_lib0move(&___nl__im__44, translator_priv0var_type_to_reg_type(___nl__im__45, ___nl__im__46));
#line 1176
c_rt_lib0clear(&___nl__im__45);
#line 1176
c_rt_lib0clear(&___nl__im__46);
#line 1177
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_const(563)));
#line 1177
c_rt_lib0move(&___nl__im__49, translator_priv0calc_val(___nl__im__50, ___ref___rec__2));
#line 1177
c_rt_lib0clear(&___nl__im__50);
#line 1178
c_rt_lib0move(&___nl__im__51, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__44));
#line 1178
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__51));
#line 1178
c_rt_lib0clear(&___nl__im__51);
#line 1179
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1179
___nl__int__57 = 1;
#line 1179
___nl__int__56 = ___nl__int__11 + ___nl__int__57;
#line 1179
//clear ___nl__int__57;
#line 1179
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__7, ___nl__int__56));
#line 1179
//clear ___nl__int__56;
#line 1179
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__54, ___get_global_const(1232), ___nl__im__55, ___get_global_const(563), ___nl__im__49));
#line 1179
c_rt_lib0clear(&___nl__im__54);
#line 1179
c_rt_lib0clear(&___nl__im__55);
#line 1179
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_const(254), ___nl__im__53));
#line 1179
c_rt_lib0clear(&___nl__im__53);
#line 1179
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__52));
#line 1179
c_rt_lib0clear(&___nl__im__52);
#line 1180
___nl__int__60 = 1;
#line 1180
___nl__int__59 = ___nl__int__11 + ___nl__int__60;
#line 1180
//clear ___nl__int__60;
#line 1180
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_get(___nl__im__7, ___nl__int__59));
#line 1180
//clear ___nl__int__59;
#line 1180
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1180
c_rt_lib0delete(translator_priv0use_index(___nl__im__58, ___nl__im__61, ___nl__im__49, ___ref___rec__2));
#line 1180
c_rt_lib0clear(&___nl__im__58);
#line 1180
c_rt_lib0clear(&___nl__im__61);
#line 1181
goto label_4;
#line 1181
label_7:
;
#line 1181
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(1220)));
#line 1181
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 1182
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1182
c_rt_lib0move(&___nl__im__64, translator_priv0new_register(___ref___rec__2, ___nl__im__65));
#line 1182
c_rt_lib0clear(&___nl__im__65);
#line 1182
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__64));
#line 1182
c_rt_lib0clear(&___nl__im__64);
#line 1183
c_rt_lib0move(&___nl__im__66, translator_priv0calc_val(___nl__im__62, ___ref___rec__2));
#line 1184
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1184
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__69, ___get_global_const(370), ___nl__im__66));
#line 1184
c_rt_lib0clear(&___nl__im__69);
#line 1184
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(1220), ___nl__im__68));
#line 1184
c_rt_lib0clear(&___nl__im__68);
#line 1184
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__67));
#line 1184
c_rt_lib0clear(&___nl__im__67);
#line 1185
___nl__bool__70 = ___nl__bool__1;
#line 1185
___nl__bool__70 = !___nl__bool__70;
#line 1185
___nl__bool__71 = !___nl__bool__70;
#line 1185
if(___nl__bool__71){ goto label_18;}
#line 1185
___nl__int__73 = c_rt_lib0array_len(___nl__im__3);
#line 1185
___nl__int__74 = 1;
#line 1185
___nl__int__72 = ___nl__int__73 - ___nl__int__74;
#line 1185
//clear ___nl__int__73;
#line 1185
//clear ___nl__int__74;
#line 1185
___nl__int__75 = ___nl__int__11 == ___nl__int__72;
#line 1185
___nl__bool__70 = ___nl__int__75;
#line 1185
//clear ___nl__int__72;
#line 1185
//clear ___nl__int__75;
#line 1185
label_18:
;
#line 1185
//clear ___nl__bool__71;
#line 1185
___nl__bool__70 = !___nl__bool__70;
#line 1185
if(___nl__bool__70){ goto label_17;}
#line 1185
goto label_1;
#line 1185
goto label_16;
#line 1185
label_17:
;
#line 1185
label_16:
;
#line 1185
//clear ___nl__bool__70;
#line 1186
___nl__int__78 = 1;
#line 1186
___nl__int__77 = ___nl__int__11 + ___nl__int__78;
#line 1186
//clear ___nl__int__78;
#line 1186
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__7, ___nl__int__77));
#line 1186
//clear ___nl__int__77;
#line 1186
c_rt_lib0move(&___nl__im__79,___get_global_const(1242));
#line 1186
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1186
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__82));
#line 1186
c_rt_lib0clear(&___nl__im__82);
#line 1186
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__66));
#line 1186
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_mk(2, ___nl__im__81, ___nl__im__83));
#line 1186
c_rt_lib0clear(&___nl__im__81);
#line 1186
c_rt_lib0clear(&___nl__im__83);
#line 1186
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__76, ___nl__im__79, ___nl__im__80, ___ref___rec__2));
#line 1186
c_rt_lib0clear(&___nl__im__76);
#line 1186
c_rt_lib0clear(&___nl__im__79);
#line 1186
c_rt_lib0clear(&___nl__im__80);
#line 1187
goto label_4;
#line 1187
label_8:
;
#line 1187
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(370)));
#line 1187
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1188
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1188
c_rt_lib0move(&___nl__im__86, translator_priv0new_register(___ref___rec__2, ___nl__im__87));
#line 1188
c_rt_lib0clear(&___nl__im__87);
#line 1188
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__86));
#line 1188
c_rt_lib0clear(&___nl__im__86);
#line 1189
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1189
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__90, ___get_global_const(370), ___nl__im__84));
#line 1189
c_rt_lib0clear(&___nl__im__90);
#line 1189
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_const(370), ___nl__im__89));
#line 1189
c_rt_lib0clear(&___nl__im__89);
#line 1189
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__88));
#line 1189
c_rt_lib0clear(&___nl__im__88);
#line 1190
___nl__bool__91 = ___nl__bool__1;
#line 1190
___nl__bool__91 = !___nl__bool__91;
#line 1190
___nl__bool__92 = !___nl__bool__91;
#line 1190
if(___nl__bool__92){ goto label_21;}
#line 1190
___nl__int__94 = c_rt_lib0array_len(___nl__im__3);
#line 1190
___nl__int__95 = 1;
#line 1190
___nl__int__93 = ___nl__int__94 - ___nl__int__95;
#line 1190
//clear ___nl__int__94;
#line 1190
//clear ___nl__int__95;
#line 1190
___nl__int__96 = ___nl__int__11 == ___nl__int__93;
#line 1190
___nl__bool__91 = ___nl__int__96;
#line 1190
//clear ___nl__int__93;
#line 1190
//clear ___nl__int__96;
#line 1190
label_21:
;
#line 1190
//clear ___nl__bool__92;
#line 1190
___nl__bool__91 = !___nl__bool__91;
#line 1190
if(___nl__bool__91){ goto label_20;}
#line 1190
goto label_1;
#line 1190
goto label_19;
#line 1190
label_20:
;
#line 1190
label_19:
;
#line 1190
//clear ___nl__bool__91;
#line 1191
___nl__int__99 = 1;
#line 1191
___nl__int__98 = ___nl__int__11 + ___nl__int__99;
#line 1191
//clear ___nl__int__99;
#line 1191
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__7, ___nl__int__98));
#line 1191
//clear ___nl__int__98;
#line 1191
c_rt_lib0delete(translator_priv0load_const(___nl__im__84, ___nl__im__97, ___ref___rec__2));
#line 1191
c_rt_lib0clear(&___nl__im__97);
#line 1192
___nl__int__102 = 1;
#line 1192
___nl__int__101 = ___nl__int__11 + ___nl__int__102;
#line 1192
//clear ___nl__int__102;
#line 1192
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_get(___nl__im__7, ___nl__int__101));
#line 1192
//clear ___nl__int__101;
#line 1192
c_rt_lib0move(&___nl__im__103,___get_global_const(1242));
#line 1193
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1193
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__106));
#line 1193
c_rt_lib0clear(&___nl__im__106);
#line 1194
___nl__int__110 = 1;
#line 1194
___nl__int__109 = ___nl__int__11 + ___nl__int__110;
#line 1194
//clear ___nl__int__110;
#line 1194
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_get(___nl__im__7, ___nl__int__109));
#line 1194
//clear ___nl__int__109;
#line 1194
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__108));
#line 1194
c_rt_lib0clear(&___nl__im__108);
#line 1194
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__107));
#line 1194
c_rt_lib0clear(&___nl__im__105);
#line 1194
c_rt_lib0clear(&___nl__im__107);
#line 1194
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__100, ___nl__im__103, ___nl__im__104, ___ref___rec__2));
#line 1194
c_rt_lib0clear(&___nl__im__100);
#line 1194
c_rt_lib0clear(&___nl__im__103);
#line 1194
c_rt_lib0clear(&___nl__im__104);
#line 1196
goto label_4;
#line 1196
label_9:
;
#line 1196
c_rt_lib0move(&___nl__im__112, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(252)));
#line 1196
c_rt_lib0copy(&___nl__im__111, ___nl__im__112);
#line 1197
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(1240)));
#line 1197
___nl__im_ptr__117 = &((*___ref___rec__2).logic0field);
#line 1197
c_rt_lib0copy(&___nl__im__116, (*___nl__im_ptr__117));
#line 1197
___nl__im_ptr__117 = NULL;
#line 1197
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_const(387)));
#line 1197
c_rt_lib0clear(&___nl__im__116);
#line 1197
c_rt_lib0move(&___nl__im__113, translator_priv0var_type_to_reg_type(___nl__im__114, ___nl__im__115));
#line 1197
c_rt_lib0clear(&___nl__im__114);
#line 1197
c_rt_lib0clear(&___nl__im__115);
#line 1198
c_rt_lib0move(&___nl__im__118, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__113));
#line 1198
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__118));
#line 1198
c_rt_lib0clear(&___nl__im__118);
#line 1199
c_rt_lib0move(&___nl__im__121, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1199
___nl__int__124 = 1;
#line 1199
___nl__int__123 = ___nl__int__11 + ___nl__int__124;
#line 1199
//clear ___nl__int__124;
#line 1199
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_get(___nl__im__7, ___nl__int__123));
#line 1199
//clear ___nl__int__123;
#line 1199
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(561)));
#line 1199
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__121, ___get_global_const(1232), ___nl__im__122, ___get_global_const(561), ___nl__im__125));
#line 1199
c_rt_lib0clear(&___nl__im__121);
#line 1199
c_rt_lib0clear(&___nl__im__122);
#line 1199
c_rt_lib0clear(&___nl__im__125);
#line 1199
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_const(252), ___nl__im__120));
#line 1199
c_rt_lib0clear(&___nl__im__120);
#line 1199
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__119));
#line 1199
c_rt_lib0clear(&___nl__im__119);
#line 1200
___nl__int__128 = 1;
#line 1200
___nl__int__127 = ___nl__int__11 + ___nl__int__128;
#line 1200
//clear ___nl__int__128;
#line 1200
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_get(___nl__im__7, ___nl__int__127));
#line 1200
//clear ___nl__int__127;
#line 1200
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1200
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_const(561)));
#line 1200
c_rt_lib0delete(translator_priv0use_field(___nl__im__126, ___nl__im__129, ___nl__im__130, ___ref___rec__2));
#line 1200
c_rt_lib0clear(&___nl__im__126);
#line 1200
c_rt_lib0clear(&___nl__im__129);
#line 1200
c_rt_lib0clear(&___nl__im__130);
#line 1201
goto label_4;
#line 1201
label_10:
;
#line 1201
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(925)));
#line 1201
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 1202
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1202
c_rt_lib0move(&___nl__im__133, translator_priv0new_register(___ref___rec__2, ___nl__im__134));
#line 1202
c_rt_lib0clear(&___nl__im__134);
#line 1202
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__133));
#line 1202
c_rt_lib0clear(&___nl__im__133);
#line 1203
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1203
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_mk(2, ___get_global_const(218), ___nl__im__137, ___get_global_const(533), ___nl__im__131));
#line 1203
c_rt_lib0clear(&___nl__im__137);
#line 1203
c_rt_lib0move(&___nl__im__135, c_rt_lib0ov_mk_arg(___get_global_const(925), ___nl__im__136));
#line 1203
c_rt_lib0clear(&___nl__im__136);
#line 1203
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__135));
#line 1203
c_rt_lib0clear(&___nl__im__135);
#line 1204
___nl__int__142 = 1;
#line 1204
___nl__int__141 = ___nl__int__11 + ___nl__int__142;
#line 1204
//clear ___nl__int__142;
#line 1204
c_rt_lib0move(&___nl__im__140, c_rt_lib0array_get(___nl__im__7, ___nl__int__141));
#line 1204
//clear ___nl__int__141;
#line 1204
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1204
___nl__int__144 = 1;
#line 1204
___nl__int__144 = -___nl__int__144;
#line 1204
c_rt_lib0move(&___nl__im__145, c_rt_lib0int_new(___nl__int__144));
#line 1204
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_mk(4, ___get_global_const(222), ___nl__im__140, ___get_global_const(75), ___nl__im__143, ___get_global_const(204), ___nl__im__131, ___get_global_const(520), ___nl__im__145));
#line 1204
c_rt_lib0clear(&___nl__im__140);
#line 1204
c_rt_lib0clear(&___nl__im__143);
#line 1204
//clear ___nl__int__144;
#line 1204
c_rt_lib0clear(&___nl__im__145);
#line 1204
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__im__139));
#line 1204
c_rt_lib0clear(&___nl__im__139);
#line 1204
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__138));
#line 1204
c_rt_lib0clear(&___nl__im__138);
#line 1205
goto label_4;
#line 1205
label_11:
;
#line 1205
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(258)));
#line 1205
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 1206
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_const(1240)));
#line 1206
___nl__im_ptr__152 = &((*___ref___rec__2).logic0field);
#line 1206
c_rt_lib0copy(&___nl__im__151, (*___nl__im_ptr__152));
#line 1206
___nl__im_ptr__152 = NULL;
#line 1206
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__151, ___get_global_const(387)));
#line 1206
c_rt_lib0clear(&___nl__im__151);
#line 1206
c_rt_lib0move(&___nl__im__148, translator_priv0var_type_to_reg_type(___nl__im__149, ___nl__im__150));
#line 1206
c_rt_lib0clear(&___nl__im__149);
#line 1206
c_rt_lib0clear(&___nl__im__150);
#line 1207
c_rt_lib0move(&___nl__im__153, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__148));
#line 1207
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__153));
#line 1207
c_rt_lib0clear(&___nl__im__153);
#line 1208
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1208
___nl__int__159 = 1;
#line 1208
___nl__int__158 = ___nl__int__11 + ___nl__int__159;
#line 1208
//clear ___nl__int__159;
#line 1208
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_get(___nl__im__7, ___nl__int__158));
#line 1208
//clear ___nl__int__158;
#line 1208
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_const(533)));
#line 1208
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__156, ___get_global_const(1232), ___nl__im__157, ___get_global_const(533), ___nl__im__160));
#line 1208
c_rt_lib0clear(&___nl__im__156);
#line 1208
c_rt_lib0clear(&___nl__im__157);
#line 1208
c_rt_lib0clear(&___nl__im__160);
#line 1208
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_arg(___get_global_const(258), ___nl__im__155));
#line 1208
c_rt_lib0clear(&___nl__im__155);
#line 1208
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__154));
#line 1208
c_rt_lib0clear(&___nl__im__154);
#line 1209
___nl__int__163 = 1;
#line 1209
___nl__int__162 = ___nl__int__11 + ___nl__int__163;
#line 1209
//clear ___nl__int__163;
#line 1209
c_rt_lib0move(&___nl__im__161, c_rt_lib0array_get(___nl__im__7, ___nl__int__162));
#line 1209
//clear ___nl__int__162;
#line 1209
c_rt_lib0move(&___nl__im__164, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1209
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_const(533)));
#line 1209
c_rt_lib0delete(translator_priv0use_variant(___nl__im__161, ___nl__im__164, ___nl__im__165, ___ref___rec__2));
#line 1209
c_rt_lib0clear(&___nl__im__161);
#line 1209
c_rt_lib0clear(&___nl__im__164);
#line 1209
c_rt_lib0clear(&___nl__im__165);
#line 1210
goto label_4;
#line 1210
label_12:
;
#line 1210
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__15, ___get_global_const(256)));
#line 1210
c_rt_lib0copy(&___nl__im__166, ___nl__im__167);
#line 1211
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_const(1240)));
#line 1211
___nl__im_ptr__172 = &((*___ref___rec__2).logic0field);
#line 1211
c_rt_lib0copy(&___nl__im__171, (*___nl__im_ptr__172));
#line 1211
___nl__im_ptr__172 = NULL;
#line 1211
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__171, ___get_global_const(387)));
#line 1211
c_rt_lib0clear(&___nl__im__171);
#line 1211
c_rt_lib0move(&___nl__im__168, translator_priv0var_type_to_reg_type(___nl__im__169, ___nl__im__170));
#line 1211
c_rt_lib0clear(&___nl__im__169);
#line 1211
c_rt_lib0clear(&___nl__im__170);
#line 1212
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_const(563)));
#line 1212
c_rt_lib0move(&___nl__im__173, translator_priv0calc_val(___nl__im__174, ___ref___rec__2));
#line 1212
c_rt_lib0clear(&___nl__im__174);
#line 1213
c_rt_lib0move(&___nl__im__175, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__168));
#line 1213
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__175));
#line 1213
c_rt_lib0clear(&___nl__im__175);
#line 1214
c_rt_lib0move(&___nl__im__178, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1214
___nl__int__181 = 1;
#line 1214
___nl__int__180 = ___nl__int__11 + ___nl__int__181;
#line 1214
//clear ___nl__int__181;
#line 1214
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_get(___nl__im__7, ___nl__int__180));
#line 1214
//clear ___nl__int__180;
#line 1214
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_mk(3, ___get_global_const(1231), ___nl__im__178, ___get_global_const(1232), ___nl__im__179, ___get_global_const(563), ___nl__im__173));
#line 1214
c_rt_lib0clear(&___nl__im__178);
#line 1214
c_rt_lib0clear(&___nl__im__179);
#line 1214
c_rt_lib0move(&___nl__im__176, c_rt_lib0ov_mk_arg(___get_global_const(256), ___nl__im__177));
#line 1214
c_rt_lib0clear(&___nl__im__177);
#line 1214
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__176));
#line 1214
c_rt_lib0clear(&___nl__im__176);
#line 1215
___nl__int__184 = 1;
#line 1215
___nl__int__183 = ___nl__int__11 + ___nl__int__184;
#line 1215
//clear ___nl__int__184;
#line 1215
c_rt_lib0move(&___nl__im__182, c_rt_lib0array_get(___nl__im__7, ___nl__int__183));
#line 1215
//clear ___nl__int__183;
#line 1215
c_rt_lib0move(&___nl__im__185, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1215
___nl__bool__186 = ___nl__bool__1;
#line 1215
___nl__bool__186 = !___nl__bool__186;
#line 1215
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__182, ___nl__im__185, ___nl__im__173, ___nl__bool__186, ___ref___rec__2));
#line 1215
c_rt_lib0clear(&___nl__im__182);
#line 1215
c_rt_lib0clear(&___nl__im__185);
#line 1215
//clear ___nl__bool__186;
#line 1216
goto label_4;
#line 1216
label_4:
;
#line 1216
c_rt_lib0clear(&___nl__im__15);
#line 1216
//clear ___nl__bool__16;
#line 1216
c_rt_lib0clear(&___nl__im__17);
#line 1216
c_rt_lib0clear(&___nl__im__18);
#line 1216
c_rt_lib0clear(&___nl__im__19);
#line 1216
c_rt_lib0clear(&___nl__im__22);
#line 1216
c_rt_lib0clear(&___nl__im__42);
#line 1216
c_rt_lib0clear(&___nl__im__43);
#line 1216
c_rt_lib0clear(&___nl__im__44);
#line 1216
c_rt_lib0clear(&___nl__im__49);
#line 1216
c_rt_lib0clear(&___nl__im__62);
#line 1216
c_rt_lib0clear(&___nl__im__63);
#line 1216
c_rt_lib0clear(&___nl__im__66);
#line 1216
c_rt_lib0clear(&___nl__im__84);
#line 1216
c_rt_lib0clear(&___nl__im__85);
#line 1216
c_rt_lib0clear(&___nl__im__111);
#line 1216
c_rt_lib0clear(&___nl__im__112);
#line 1216
c_rt_lib0clear(&___nl__im__113);
#line 1216
c_rt_lib0clear(&___nl__im__131);
#line 1216
c_rt_lib0clear(&___nl__im__132);
#line 1216
c_rt_lib0clear(&___nl__im__146);
#line 1216
c_rt_lib0clear(&___nl__im__147);
#line 1216
c_rt_lib0clear(&___nl__im__148);
#line 1216
c_rt_lib0clear(&___nl__im__166);
#line 1216
c_rt_lib0clear(&___nl__im__167);
#line 1216
c_rt_lib0clear(&___nl__im__168);
#line 1216
c_rt_lib0clear(&___nl__im__173);
#line 1216
label_2:
;
#line 1217
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1217
goto label_3;
#line 1217
label_1:
;
#line 1218
___nl__int__190 = c_rt_lib0array_len(___nl__im__7);
#line 1218
___nl__int__191 = 1;
#line 1218
___nl__int__189 = ___nl__int__190 - ___nl__int__191;
#line 1218
//clear ___nl__int__190;
#line 1218
//clear ___nl__int__191;
#line 1218
c_rt_lib0move(&___nl__im__188, c_rt_lib0array_get(___nl__im__7, ___nl__int__189));
#line 1218
//clear ___nl__int__189;
#line 1218
c_rt_lib0move(&___nl__im__187, c_rt_lib0ov_mk_arg(___get_global_const(218), ___nl__im__188));
#line 1218
c_rt_lib0clear(&___nl__im__188);
#line 1218
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__187));
#line 1218
c_rt_lib0clear(&___nl__im__187);
#line 1219
c_rt_lib0clear(&___nl__im__0);
#line 1219
//clear ___nl__bool__1;
#line 1219
c_rt_lib0clear(&___nl__im__3);
#line 1219
c_rt_lib0clear(&___nl__im__4);
#line 1219
c_rt_lib0clear(&___nl__im__7);
#line 1219
//clear ___nl__int__10;
#line 1219
//clear ___nl__int__11;
#line 1219
//clear ___nl__int__12;
#line 1219
//clear ___nl__bool__13;
#line 1219
//clear ___nl__int__14;
#line 1219
c_rt_lib0clear(&___nl__im__15);
#line 1219
//clear ___nl__bool__16;
#line 1219
c_rt_lib0clear(&___nl__im__17);
#line 1219
c_rt_lib0clear(&___nl__im__18);
#line 1219
c_rt_lib0clear(&___nl__im__19);
#line 1219
c_rt_lib0clear(&___nl__im__22);
#line 1219
c_rt_lib0clear(&___nl__im__42);
#line 1219
c_rt_lib0clear(&___nl__im__43);
#line 1219
c_rt_lib0clear(&___nl__im__44);
#line 1219
c_rt_lib0clear(&___nl__im__49);
#line 1219
c_rt_lib0clear(&___nl__im__62);
#line 1219
c_rt_lib0clear(&___nl__im__63);
#line 1219
c_rt_lib0clear(&___nl__im__66);
#line 1219
c_rt_lib0clear(&___nl__im__84);
#line 1219
c_rt_lib0clear(&___nl__im__85);
#line 1219
c_rt_lib0clear(&___nl__im__111);
#line 1219
c_rt_lib0clear(&___nl__im__112);
#line 1219
c_rt_lib0clear(&___nl__im__113);
#line 1219
c_rt_lib0clear(&___nl__im__131);
#line 1219
c_rt_lib0clear(&___nl__im__132);
#line 1219
c_rt_lib0clear(&___nl__im__146);
#line 1219
c_rt_lib0clear(&___nl__im__147);
#line 1219
c_rt_lib0clear(&___nl__im__148);
#line 1219
c_rt_lib0clear(&___nl__im__166);
#line 1219
c_rt_lib0clear(&___nl__im__167);
#line 1219
c_rt_lib0clear(&___nl__im__168);
#line 1219
c_rt_lib0clear(&___nl__im__173);
#line 1219
return ___nl__im__9;
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
#line 1224
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 1225
___nl__int__7 = 1;
#line 1225
___nl__int__6 = ___nl__int__3 - ___nl__int__7;
#line 1225
//clear ___nl__int__7;
#line 1225
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 1225
//clear ___nl__int__6;
#line 1225
___nl__int__10 = 1;
#line 1225
___nl__int__9 = ___nl__int__3 - ___nl__int__10;
#line 1225
//clear ___nl__int__10;
#line 1225
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 1225
//clear ___nl__int__9;
#line 1225
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(218)));
#line 1225
c_rt_lib0clear(&___nl__im__5);
#line 1225
c_rt_lib0clear(&___nl__im__8);
#line 1226
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1226
___nl__int__13 = 1;
#line 1226
___nl__int__13 = -___nl__int__13;
#line 1226
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 1226
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 1226
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__12, ___get_global_const(217), ___nl__im__14, ___get_global_const(329), ___nl__im__15));
#line 1226
c_rt_lib0clear(&___nl__im__12);
#line 1226
//clear ___nl__int__13;
#line 1226
c_rt_lib0clear(&___nl__im__14);
#line 1226
c_rt_lib0clear(&___nl__im__15);
#line 1227
___nl__int__17 = 2;
#line 1227
___nl__int__16 = ___nl__int__3 - ___nl__int__17;
#line 1227
//clear ___nl__int__17;
#line 1227
label_2:
;
#line 1227
___nl__int__19 = 0;
#line 1227
___nl__int__20 = ___nl__int__16 >= ___nl__int__19;
#line 1227
___nl__bool__18 = ___nl__int__20;
#line 1227
//clear ___nl__int__19;
#line 1227
//clear ___nl__int__20;
#line 1227
___nl__bool__18 = !___nl__bool__18;
#line 1227
if(___nl__bool__18){ goto label_1;}
#line 1228
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 1228
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(218));
#line 1228
if(___nl__bool__22){ goto label_5;}
#line 1230
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(563));
#line 1230
if(___nl__bool__22){ goto label_6;}
#line 1237
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(254));
#line 1237
if(___nl__bool__22){ goto label_7;}
#line 1239
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(1220));
#line 1239
if(___nl__bool__22){ goto label_8;}
#line 1246
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(370));
#line 1246
if(___nl__bool__22){ goto label_9;}
#line 1255
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(252));
#line 1255
if(___nl__bool__22){ goto label_10;}
#line 1257
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(925));
#line 1257
if(___nl__bool__22){ goto label_11;}
#line 1260
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(258));
#line 1260
if(___nl__bool__22){ goto label_12;}
#line 1262
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_const(256));
#line 1262
if(___nl__bool__22){ goto label_13;}
#line 1262
c_rt_lib0move(&___nl__im__23,___get_global_const(16));
#line 1262
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__21));
#line 1262
nl_die_arg(___nl__im__23);
#line 1228
label_5:
;
#line 1228
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(218)));
#line 1228
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1229
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 1229
nl_die_arg(___nl__im__26);
#line 1230
goto label_4;
#line 1230
label_6:
;
#line 1230
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(563)));
#line 1230
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 1231
___nl__bool__29 = ___nl__bool__1;
#line 1231
___nl__bool__29 = !___nl__bool__29;
#line 1231
___nl__bool__30 = !___nl__bool__29;
#line 1231
if(___nl__bool__30){ goto label_16;}
#line 1231
___nl__int__32 = 2;
#line 1231
___nl__int__31 = ___nl__int__3 - ___nl__int__32;
#line 1231
//clear ___nl__int__32;
#line 1231
___nl__int__33 = ___nl__int__16 == ___nl__int__31;
#line 1231
___nl__bool__29 = ___nl__int__33;
#line 1231
//clear ___nl__int__31;
#line 1231
//clear ___nl__int__33;
#line 1231
label_16:
;
#line 1231
//clear ___nl__bool__30;
#line 1231
___nl__bool__29 = !___nl__bool__29;
#line 1231
if(___nl__bool__29){ goto label_15;}
#line 1232
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(218)));
#line 1232
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(563)));
#line 1232
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__im__34, ___nl__im__35, ___nl__im__4, ___ref___rec__2));
#line 1232
c_rt_lib0clear(&___nl__im__34);
#line 1232
c_rt_lib0clear(&___nl__im__35);
#line 1233
goto label_14;
#line 1233
label_15:
;
#line 1234
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1234
___nl__int__38 = 1;
#line 1234
___nl__int__38 = -___nl__int__38;
#line 1234
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__38));
#line 1234
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 1234
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__37, ___get_global_const(217), ___nl__im__39, ___get_global_const(329), ___nl__im__40));
#line 1234
c_rt_lib0clear(&___nl__im__37);
#line 1234
//clear ___nl__int__38;
#line 1234
c_rt_lib0clear(&___nl__im__39);
#line 1234
c_rt_lib0clear(&___nl__im__40);
#line 1234
c_rt_lib0move(&___nl__im__41,___get_global_const(1243));
#line 1234
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(218)));
#line 1234
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__44));
#line 1234
c_rt_lib0clear(&___nl__im__44);
#line 1234
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(563)));
#line 1234
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__46));
#line 1234
c_rt_lib0clear(&___nl__im__46);
#line 1234
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__4));
#line 1234
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(3, ___nl__im__43, ___nl__im__45, ___nl__im__47));
#line 1234
c_rt_lib0clear(&___nl__im__43);
#line 1234
c_rt_lib0clear(&___nl__im__45);
#line 1234
c_rt_lib0clear(&___nl__im__47);
#line 1234
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__36, ___nl__im__41, ___nl__im__42, ___ref___rec__2));
#line 1234
c_rt_lib0clear(&___nl__im__36);
#line 1234
c_rt_lib0clear(&___nl__im__41);
#line 1234
c_rt_lib0clear(&___nl__im__42);
#line 1235
goto label_14;
#line 1235
label_14:
;
#line 1235
//clear ___nl__bool__29;
#line 1236
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_const(218)));
#line 1237
goto label_4;
#line 1237
label_7:
;
#line 1237
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(254)));
#line 1237
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 1238
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(1232)));
#line 1238
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(1231)));
#line 1238
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_const(563)));
#line 1238
c_rt_lib0delete(translator_priv0release_index(___nl__im__50, ___nl__im__51, ___nl__im__52, ___ref___rec__2));
#line 1238
c_rt_lib0clear(&___nl__im__50);
#line 1238
c_rt_lib0clear(&___nl__im__51);
#line 1238
c_rt_lib0clear(&___nl__im__52);
#line 1239
goto label_4;
#line 1239
label_8:
;
#line 1239
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(1220)));
#line 1239
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 1240
___nl__bool__55 = ___nl__bool__1;
#line 1240
___nl__bool__55 = !___nl__bool__55;
#line 1240
___nl__bool__56 = !___nl__bool__55;
#line 1240
if(___nl__bool__56){ goto label_19;}
#line 1240
___nl__int__58 = 2;
#line 1240
___nl__int__57 = ___nl__int__3 - ___nl__int__58;
#line 1240
//clear ___nl__int__58;
#line 1240
___nl__int__59 = ___nl__int__16 == ___nl__int__57;
#line 1240
___nl__bool__55 = ___nl__int__59;
#line 1240
//clear ___nl__int__57;
#line 1240
//clear ___nl__int__59;
#line 1240
label_19:
;
#line 1240
//clear ___nl__bool__56;
#line 1240
___nl__bool__55 = !___nl__bool__55;
#line 1240
if(___nl__bool__55){ goto label_18;}
#line 1241
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1241
___nl__int__62 = 1;
#line 1241
___nl__int__62 = -___nl__int__62;
#line 1241
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 1241
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 1241
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__61, ___get_global_const(217), ___nl__im__63, ___get_global_const(329), ___nl__im__64));
#line 1241
c_rt_lib0clear(&___nl__im__61);
#line 1241
//clear ___nl__int__62;
#line 1241
c_rt_lib0clear(&___nl__im__63);
#line 1241
c_rt_lib0clear(&___nl__im__64);
#line 1241
c_rt_lib0move(&___nl__im__65,___get_global_const(1244));
#line 1241
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(218)));
#line 1241
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__68));
#line 1241
c_rt_lib0clear(&___nl__im__68);
#line 1241
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(370)));
#line 1241
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__70));
#line 1241
c_rt_lib0clear(&___nl__im__70);
#line 1241
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__4));
#line 1241
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(3, ___nl__im__67, ___nl__im__69, ___nl__im__71));
#line 1241
c_rt_lib0clear(&___nl__im__67);
#line 1241
c_rt_lib0clear(&___nl__im__69);
#line 1241
c_rt_lib0clear(&___nl__im__71);
#line 1241
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__60, ___nl__im__65, ___nl__im__66, ___ref___rec__2));
#line 1241
c_rt_lib0clear(&___nl__im__60);
#line 1241
c_rt_lib0clear(&___nl__im__65);
#line 1241
c_rt_lib0clear(&___nl__im__66);
#line 1242
goto label_17;
#line 1242
label_18:
;
#line 1243
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1243
___nl__int__74 = 1;
#line 1243
___nl__int__74 = -___nl__int__74;
#line 1243
c_rt_lib0move(&___nl__im__75, c_rt_lib0int_new(___nl__int__74));
#line 1243
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 1243
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__73, ___get_global_const(217), ___nl__im__75, ___get_global_const(329), ___nl__im__76));
#line 1243
c_rt_lib0clear(&___nl__im__73);
#line 1243
//clear ___nl__int__74;
#line 1243
c_rt_lib0clear(&___nl__im__75);
#line 1243
c_rt_lib0clear(&___nl__im__76);
#line 1243
c_rt_lib0move(&___nl__im__77,___get_global_const(1245));
#line 1243
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(218)));
#line 1243
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__80));
#line 1243
c_rt_lib0clear(&___nl__im__80);
#line 1243
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(370)));
#line 1243
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__82));
#line 1243
c_rt_lib0clear(&___nl__im__82);
#line 1243
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__4));
#line 1243
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(3, ___nl__im__79, ___nl__im__81, ___nl__im__83));
#line 1243
c_rt_lib0clear(&___nl__im__79);
#line 1243
c_rt_lib0clear(&___nl__im__81);
#line 1243
c_rt_lib0clear(&___nl__im__83);
#line 1243
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__72, ___nl__im__77, ___nl__im__78, ___ref___rec__2));
#line 1243
c_rt_lib0clear(&___nl__im__72);
#line 1243
c_rt_lib0clear(&___nl__im__77);
#line 1243
c_rt_lib0clear(&___nl__im__78);
#line 1244
goto label_17;
#line 1244
label_17:
;
#line 1244
//clear ___nl__bool__55;
#line 1245
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_const(218)));
#line 1246
goto label_4;
#line 1246
label_9:
;
#line 1246
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(370)));
#line 1246
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1247
___nl__bool__86 = ___nl__bool__1;
#line 1247
___nl__bool__86 = !___nl__bool__86;
#line 1247
___nl__bool__87 = !___nl__bool__86;
#line 1247
if(___nl__bool__87){ goto label_22;}
#line 1247
___nl__int__89 = 2;
#line 1247
___nl__int__88 = ___nl__int__3 - ___nl__int__89;
#line 1247
//clear ___nl__int__89;
#line 1247
___nl__int__90 = ___nl__int__16 == ___nl__int__88;
#line 1247
___nl__bool__86 = ___nl__int__90;
#line 1247
//clear ___nl__int__88;
#line 1247
//clear ___nl__int__90;
#line 1247
label_22:
;
#line 1247
//clear ___nl__bool__87;
#line 1247
___nl__bool__86 = !___nl__bool__86;
#line 1247
if(___nl__bool__86){ goto label_21;}
#line 1248
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(218)));
#line 1248
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(370)));
#line 1248
c_rt_lib0delete(translator_priv0print_set_value(___nl__im__91, ___nl__im__92, ___nl__im__4, ___ref___rec__2));
#line 1248
c_rt_lib0clear(&___nl__im__91);
#line 1248
c_rt_lib0clear(&___nl__im__92);
#line 1249
goto label_20;
#line 1249
label_21:
;
#line 1250
c_rt_lib0move(&___nl__im__94, nlasm0is_empty(___nl__im__11));
#line 1250
___nl__bool__93 = c_rt_lib0check_true_native(___nl__im__94);
#line 1250
c_rt_lib0clear(&___nl__im__94);
#line 1250
___nl__bool__93 = !___nl__bool__93;
#line 1250
if(___nl__bool__93){ goto label_24;}
#line 1250
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_const(526)));
#line 1250
c_rt_lib0move(&___nl__im__11, translator_priv0new_register(___ref___rec__2, ___nl__im__95));
#line 1250
c_rt_lib0clear(&___nl__im__95);
#line 1250
goto label_23;
#line 1250
label_24:
;
#line 1250
label_23:
;
#line 1250
//clear ___nl__bool__93;
#line 1251
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(370)));
#line 1251
c_rt_lib0delete(translator_priv0load_const(___nl__im__96, ___nl__im__11, ___ref___rec__2));
#line 1251
c_rt_lib0clear(&___nl__im__96);
#line 1252
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1252
___nl__int__99 = 1;
#line 1252
___nl__int__99 = -___nl__int__99;
#line 1252
c_rt_lib0move(&___nl__im__100, c_rt_lib0int_new(___nl__int__99));
#line 1252
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 1252
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__98, ___get_global_const(217), ___nl__im__100, ___get_global_const(329), ___nl__im__101));
#line 1252
c_rt_lib0clear(&___nl__im__98);
#line 1252
//clear ___nl__int__99;
#line 1252
c_rt_lib0clear(&___nl__im__100);
#line 1252
c_rt_lib0clear(&___nl__im__101);
#line 1252
c_rt_lib0move(&___nl__im__102,___get_global_const(1245));
#line 1252
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(218)));
#line 1252
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__105));
#line 1252
c_rt_lib0clear(&___nl__im__105);
#line 1252
c_rt_lib0move(&___nl__im__106, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__11));
#line 1252
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__4));
#line 1252
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(3, ___nl__im__104, ___nl__im__106, ___nl__im__107));
#line 1252
c_rt_lib0clear(&___nl__im__104);
#line 1252
c_rt_lib0clear(&___nl__im__106);
#line 1252
c_rt_lib0clear(&___nl__im__107);
#line 1252
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__97, ___nl__im__102, ___nl__im__103, ___ref___rec__2));
#line 1252
c_rt_lib0clear(&___nl__im__97);
#line 1252
c_rt_lib0clear(&___nl__im__102);
#line 1252
c_rt_lib0clear(&___nl__im__103);
#line 1253
goto label_20;
#line 1253
label_20:
;
#line 1253
//clear ___nl__bool__86;
#line 1254
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_const(218)));
#line 1255
goto label_4;
#line 1255
label_10:
;
#line 1255
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(252)));
#line 1255
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 1256
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(1232)));
#line 1256
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(1231)));
#line 1256
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_const(561)));
#line 1256
c_rt_lib0delete(translator_priv0release_field(___nl__im__110, ___nl__im__111, ___nl__im__112, ___ref___rec__2));
#line 1256
c_rt_lib0clear(&___nl__im__110);
#line 1256
c_rt_lib0clear(&___nl__im__111);
#line 1256
c_rt_lib0clear(&___nl__im__112);
#line 1257
goto label_4;
#line 1257
label_11:
;
#line 1257
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(925)));
#line 1257
c_rt_lib0copy(&___nl__im__113, ___nl__im__114);
#line 1258
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_const(218)));
#line 1258
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_const(276), ___nl__im__4));
#line 1258
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_const(533)));
#line 1258
___nl__int__120 = 1;
#line 1258
___nl__int__120 = -___nl__int__120;
#line 1258
c_rt_lib0move(&___nl__im__121, c_rt_lib0int_new(___nl__int__120));
#line 1258
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 1258
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_mk(5, ___get_global_const(222), ___nl__im__117, ___get_global_const(75), ___nl__im__118, ___get_global_const(533), ___nl__im__119, ___get_global_const(520), ___nl__im__121, ___get_global_const(538), ___nl__im__122));
#line 1258
c_rt_lib0clear(&___nl__im__117);
#line 1258
c_rt_lib0clear(&___nl__im__118);
#line 1258
c_rt_lib0clear(&___nl__im__119);
#line 1258
//clear ___nl__int__120;
#line 1258
c_rt_lib0clear(&___nl__im__121);
#line 1258
c_rt_lib0clear(&___nl__im__122);
#line 1258
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_const(244), ___nl__im__116));
#line 1258
c_rt_lib0clear(&___nl__im__116);
#line 1258
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__115));
#line 1258
c_rt_lib0clear(&___nl__im__115);
#line 1259
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_const(218)));
#line 1260
goto label_4;
#line 1260
label_12:
;
#line 1260
c_rt_lib0move(&___nl__im__124, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(258)));
#line 1260
c_rt_lib0copy(&___nl__im__123, ___nl__im__124);
#line 1261
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(1232)));
#line 1261
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(1231)));
#line 1261
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(533)));
#line 1261
c_rt_lib0delete(translator_priv0release_variant(___nl__im__125, ___nl__im__126, ___nl__im__127, ___ref___rec__2));
#line 1261
c_rt_lib0clear(&___nl__im__125);
#line 1261
c_rt_lib0clear(&___nl__im__126);
#line 1261
c_rt_lib0clear(&___nl__im__127);
#line 1262
goto label_4;
#line 1262
label_13:
;
#line 1262
c_rt_lib0move(&___nl__im__129, c_rt_lib0priv_as(___nl__im__21, ___get_global_const(256)));
#line 1262
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 1263
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_const(1232)));
#line 1263
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_const(1231)));
#line 1263
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_const(563)));
#line 1263
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__130, ___nl__im__131, ___nl__im__132, ___ref___rec__2));
#line 1263
c_rt_lib0clear(&___nl__im__130);
#line 1263
c_rt_lib0clear(&___nl__im__131);
#line 1263
c_rt_lib0clear(&___nl__im__132);
#line 1264
goto label_4;
#line 1264
label_4:
;
#line 1264
c_rt_lib0clear(&___nl__im__21);
#line 1264
//clear ___nl__bool__22;
#line 1264
c_rt_lib0clear(&___nl__im__23);
#line 1264
c_rt_lib0clear(&___nl__im__24);
#line 1264
c_rt_lib0clear(&___nl__im__25);
#line 1264
c_rt_lib0clear(&___nl__im__26);
#line 1264
c_rt_lib0clear(&___nl__im__27);
#line 1264
c_rt_lib0clear(&___nl__im__28);
#line 1264
c_rt_lib0clear(&___nl__im__48);
#line 1264
c_rt_lib0clear(&___nl__im__49);
#line 1264
c_rt_lib0clear(&___nl__im__53);
#line 1264
c_rt_lib0clear(&___nl__im__54);
#line 1264
c_rt_lib0clear(&___nl__im__84);
#line 1264
c_rt_lib0clear(&___nl__im__85);
#line 1264
c_rt_lib0clear(&___nl__im__108);
#line 1264
c_rt_lib0clear(&___nl__im__109);
#line 1264
c_rt_lib0clear(&___nl__im__113);
#line 1264
c_rt_lib0clear(&___nl__im__114);
#line 1264
c_rt_lib0clear(&___nl__im__123);
#line 1264
c_rt_lib0clear(&___nl__im__124);
#line 1264
c_rt_lib0clear(&___nl__im__128);
#line 1264
c_rt_lib0clear(&___nl__im__129);
#line 1264
label_3:
;
#line 1227
___nl__int__133 = 1;
#line 1227
___nl__int__16 = ___nl__int__16 - ___nl__int__133;
#line 1227
//clear ___nl__int__133;
#line 1265
goto label_2;
#line 1265
label_1:
;
#line 1265
c_rt_lib0clear(&___nl__im__0);
#line 1265
//clear ___nl__bool__1;
#line 1265
//clear ___nl__int__3;
#line 1265
c_rt_lib0clear(&___nl__im__4);
#line 1265
c_rt_lib0clear(&___nl__im__11);
#line 1265
//clear ___nl__int__16;
#line 1265
//clear ___nl__bool__18;
#line 1265
c_rt_lib0clear(&___nl__im__21);
#line 1265
//clear ___nl__bool__22;
#line 1265
c_rt_lib0clear(&___nl__im__23);
#line 1265
c_rt_lib0clear(&___nl__im__24);
#line 1265
c_rt_lib0clear(&___nl__im__25);
#line 1265
c_rt_lib0clear(&___nl__im__26);
#line 1265
c_rt_lib0clear(&___nl__im__27);
#line 1265
c_rt_lib0clear(&___nl__im__28);
#line 1265
c_rt_lib0clear(&___nl__im__48);
#line 1265
c_rt_lib0clear(&___nl__im__49);
#line 1265
c_rt_lib0clear(&___nl__im__53);
#line 1265
c_rt_lib0clear(&___nl__im__54);
#line 1265
c_rt_lib0clear(&___nl__im__84);
#line 1265
c_rt_lib0clear(&___nl__im__85);
#line 1265
c_rt_lib0clear(&___nl__im__108);
#line 1265
c_rt_lib0clear(&___nl__im__109);
#line 1265
c_rt_lib0clear(&___nl__im__113);
#line 1265
c_rt_lib0clear(&___nl__im__114);
#line 1265
c_rt_lib0clear(&___nl__im__123);
#line 1265
c_rt_lib0clear(&___nl__im__124);
#line 1265
c_rt_lib0clear(&___nl__im__128);
#line 1265
c_rt_lib0clear(&___nl__im__129);
#line 1265
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
#line 1269
c_rt_lib0move(&___nl__im__2,___get_global_const(37));
#line 1270
___nl__int__3 = 0;
#line 1271
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(128)));
#line 1271
___nl__int__6 = 0;
#line 1271
___nl__int__7 = 1;
#line 1271
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 1271
label_3:
;
#line 1271
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 1271
___nl__bool__9 = ___nl__int__10;
#line 1271
if(___nl__bool__9){ goto label_1;}
#line 1271
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 1271
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 1272
___nl__int__13 = 0;
#line 1272
___nl__int__14 = ___nl__int__3 > ___nl__int__13;
#line 1272
___nl__bool__12 = ___nl__int__14;
#line 1272
//clear ___nl__int__13;
#line 1272
//clear ___nl__int__14;
#line 1272
___nl__bool__12 = !___nl__bool__12;
#line 1272
if(___nl__bool__12){ goto label_5;}
#line 1272
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1272
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 1272
c_rt_lib0clear(&___nl__im__15);
#line 1272
goto label_4;
#line 1272
label_5:
;
#line 1272
label_4:
;
#line 1272
//clear ___nl__bool__12;
#line 1273
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__5));
#line 1274
___nl__int__16 = 1;
#line 1274
___nl__int__3 = ___nl__int__3 + ___nl__int__16;
#line 1274
//clear ___nl__int__16;
#line 1274
c_rt_lib0clear(&___nl__im__5);
#line 1274
label_2:
;
#line 1275
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1275
goto label_3;
#line 1275
label_1:
;
#line 1276
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(940)));
#line 1276
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(939));
#line 1276
if(___nl__bool__18){ goto label_7;}
#line 1278
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(938));
#line 1278
if(___nl__bool__18){ goto label_8;}
#line 1278
c_rt_lib0move(&___nl__im__19,___get_global_const(16));
#line 1278
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__17));
#line 1278
nl_die_arg(___nl__im__19);
#line 1276
label_7:
;
#line 1277
c_rt_lib0move(&___nl__im__20, string0lf());
#line 1277
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__20));
#line 1277
c_rt_lib0clear(&___nl__im__20);
#line 1278
goto label_6;
#line 1278
label_8:
;
#line 1279
goto label_6;
#line 1279
label_6:
;
#line 1280
c_rt_lib0clear(&___nl__im__0);
#line 1280
//clear ___nl__int__3;
#line 1280
c_rt_lib0clear(&___nl__im__4);
#line 1280
c_rt_lib0clear(&___nl__im__5);
#line 1280
//clear ___nl__int__6;
#line 1280
//clear ___nl__int__7;
#line 1280
//clear ___nl__int__8;
#line 1280
//clear ___nl__bool__9;
#line 1280
//clear ___nl__int__10;
#line 1280
c_rt_lib0clear(&___nl__im__11);
#line 1280
c_rt_lib0clear(&___nl__im__17);
#line 1280
//clear ___nl__bool__18;
#line 1280
c_rt_lib0clear(&___nl__im__19);
#line 1280
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
#line 1284
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(513)));
#line 1284
c_rt_lib0move(&___nl__im__5,___get_global_const(922));
#line 1284
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 1284
c_rt_lib0clear(&___nl__im__4);
#line 1284
c_rt_lib0clear(&___nl__im__5);
#line 1284
___nl__bool__3 = !___nl__bool__3;
#line 1284
___nl__bool__3 = !___nl__bool__3;
#line 1284
if(___nl__bool__3){ goto label_2;}
#line 1284
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 1284
nl_die_arg(___nl__im__6);
#line 1284
goto label_1;
#line 1284
label_2:
;
#line 1284
label_1:
;
#line 1284
//clear ___nl__bool__3;
#line 1284
c_rt_lib0clear(&___nl__im__6);
#line 1285
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__2);
#line 1286
___nl__int__8 = translator_priv0get_sim_label(___ref___rec__2);
#line 1287
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(908)));
#line 1287
c_rt_lib0move(&___nl__im__9, translator_priv0dest_val(___nl__im__10, ___ref___rec__2));
#line 1287
c_rt_lib0clear(&___nl__im__10);
#line 1288
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__8, ___nl__im__9, ___ref___rec__2));
#line 1289
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(910)));
#line 1289
c_rt_lib0delete(translator_priv0print_val(___nl__im__11, ___nl__im__1, ___ref___rec__2));
#line 1289
c_rt_lib0clear(&___nl__im__11);
#line 1290
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__7));
#line 1290
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(249), ___nl__im__13));
#line 1290
c_rt_lib0clear(&___nl__im__13);
#line 1290
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__12));
#line 1290
c_rt_lib0clear(&___nl__im__12);
#line 1291
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__8, ___ref___rec__2));
#line 1292
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(909)));
#line 1292
c_rt_lib0delete(translator_priv0print_val(___nl__im__14, ___nl__im__1, ___ref___rec__2));
#line 1292
c_rt_lib0clear(&___nl__im__14);
#line 1293
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__2));
#line 1293
c_rt_lib0clear(&___nl__im__0);
#line 1293
c_rt_lib0clear(&___nl__im__1);
#line 1293
//clear ___nl__int__7;
#line 1293
//clear ___nl__int__8;
#line 1293
c_rt_lib0clear(&___nl__im__9);
#line 1293
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
#line 1297
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1297
c_rt_lib0move(&___nl__im__3, translator_priv0new_register(___ref___rec__2, ___nl__im__4));
#line 1297
c_rt_lib0clear(&___nl__im__4);
#line 1298
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__im__0));
#line 1298
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(0)));
#line 1298
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(1), ___nl__im__8));
#line 1298
c_rt_lib0clear(&___nl__im__8);
#line 1298
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(220), ___nl__im__1, ___get_global_const(218), ___nl__im__6, ___get_global_const(204), ___nl__im__7));
#line 1298
c_rt_lib0clear(&___nl__im__6);
#line 1298
c_rt_lib0clear(&___nl__im__7);
#line 1298
c_rt_lib0delete(translator_priv0print_val(___nl__im__5, ___nl__im__3, ___ref___rec__2));
#line 1298
c_rt_lib0clear(&___nl__im__5);
#line 1299
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(246), ___nl__im__3));
#line 1299
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 1299
c_rt_lib0clear(&___nl__im__9);
#line 1299
c_rt_lib0clear(&___nl__im__0);
#line 1299
c_rt_lib0clear(&___nl__im__1);
#line 1299
c_rt_lib0clear(&___nl__im__3);
#line 1299
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
#line 1303
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(327)));
#line 1304
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1304
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(881));
#line 1304
c_rt_lib0clear(&___nl__im__4);
#line 1304
___nl__bool__3 = !___nl__bool__3;
#line 1304
___nl__bool__3 = !___nl__bool__3;
#line 1304
if(___nl__bool__3){ goto label_2;}
#line 1305
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__0, ___ref___rec__1));
#line 1306
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 1306
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1306
___nl__im_ptr__10 = NULL;
#line 1306
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(386)));
#line 1306
c_rt_lib0clear(&___nl__im__9);
#line 1306
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1306
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1306
___nl__im_ptr__13 = NULL;
#line 1306
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(387)));
#line 1306
c_rt_lib0clear(&___nl__im__12);
#line 1306
c_rt_lib0move(&___nl__im__7, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__11));
#line 1306
c_rt_lib0clear(&___nl__im__8);
#line 1306
c_rt_lib0clear(&___nl__im__11);
#line 1306
c_rt_lib0move(&___nl__im__6, translator_priv0get_cast(___nl__im__5, ___nl__im__7, ___ref___rec__1));
#line 1306
c_rt_lib0clear(&___nl__im__7);
#line 1307
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__6));
#line 1308
goto label_1;
#line 1308
label_2:
;
#line 1308
label_1:
;
#line 1308
//clear ___nl__bool__3;
#line 1308
c_rt_lib0clear(&___nl__im__5);
#line 1308
c_rt_lib0clear(&___nl__im__6);
#line 1309
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__2, ___ref___rec__1));
#line 1309
c_rt_lib0clear(&___nl__im__0);
#line 1309
c_rt_lib0clear(&___nl__im__2);
#line 1309
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
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
INT  ___nl__int__48 = 0;
bool  ___nl__bool__49 = false;
ImmT  ___nl__im__50 = NULL;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
INT  ___nl__int__53 = 0;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
#line 1313
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1313
___nl__int__4 = 1;
#line 1313
___nl__int__4 = -___nl__int__4;
#line 1313
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__4));
#line 1313
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 1313
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__3, ___get_global_const(217), ___nl__im__5, ___get_global_const(329), ___nl__im__6));
#line 1313
c_rt_lib0clear(&___nl__im__3);
#line 1313
//clear ___nl__int__4;
#line 1313
c_rt_lib0clear(&___nl__im__5);
#line 1313
c_rt_lib0clear(&___nl__im__6);
#line 1314
___nl__im_ptr__9 = &((*___ref___rec__1).result0field);
#line 1314
c_rt_lib0copy(&___nl__im__8, (*___nl__im_ptr__9));
#line 1314
___nl__im_ptr__9 = NULL;
#line 1314
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_const(213)));
#line 1314
c_rt_lib0clear(&___nl__im__8);
#line 1315
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(223));
#line 1315
___nl__bool__10 = !___nl__bool__10;
#line 1315
if(___nl__bool__10){ goto label_2;}
#line 1316
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(223)));
#line 1317
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(217)));
#line 1317
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 1317
c_rt_lib0clear(&___nl__im__14);
#line 1317
___nl__int__15 = c_rt_lib0array_len(___nl__im__7);
#line 1317
___nl__int__16 = ___nl__int__13 < ___nl__int__15;
#line 1317
___nl__bool__11 = ___nl__int__16;
#line 1317
//clear ___nl__int__13;
#line 1317
//clear ___nl__int__15;
#line 1317
//clear ___nl__int__16;
#line 1317
___nl__bool__12 = !___nl__bool__11;
#line 1317
if(___nl__bool__12){ goto label_5;}
#line 1317
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(217)));
#line 1317
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 1317
c_rt_lib0clear(&___nl__im__20);
#line 1317
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__7, ___nl__int__19));
#line 1317
//clear ___nl__int__19;
#line 1317
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_const(331)));
#line 1317
c_rt_lib0clear(&___nl__im__18);
#line 1317
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__17, ___get_global_const(40));
#line 1317
c_rt_lib0clear(&___nl__im__17);
#line 1317
label_5:
;
#line 1317
//clear ___nl__bool__12;
#line 1317
___nl__bool__11 = !___nl__bool__11;
#line 1317
if(___nl__bool__11){ goto label_4;}
#line 1318
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 1318
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 1318
___nl__im_ptr__24 = NULL;
#line 1318
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_const(386)));
#line 1318
c_rt_lib0clear(&___nl__im__23);
#line 1318
___nl__im_ptr__27 = &((*___ref___rec__1).logic0field);
#line 1318
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 1318
___nl__im_ptr__27 = NULL;
#line 1318
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_const(387)));
#line 1318
c_rt_lib0clear(&___nl__im__26);
#line 1318
c_rt_lib0move(&___nl__im__21, translator_priv0var_type_to_reg_type(___nl__im__22, ___nl__im__25));
#line 1318
c_rt_lib0clear(&___nl__im__22);
#line 1318
c_rt_lib0clear(&___nl__im__25);
#line 1318
c_rt_lib0move(&___nl__im__2, translator_priv0new_register(___ref___rec__1, ___nl__im__21));
#line 1318
c_rt_lib0clear(&___nl__im__21);
#line 1319
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(223)));
#line 1319
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__28, ___ref___rec__1));
#line 1319
c_rt_lib0clear(&___nl__im__28);
#line 1320
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__im__2));
#line 1321
goto label_3;
#line 1321
label_4:
;
#line 1321
label_3:
;
#line 1321
//clear ___nl__bool__11;
#line 1322
goto label_1;
#line 1322
label_2:
;
#line 1322
label_1:
;
#line 1322
//clear ___nl__bool__10;
#line 1323
___nl__im_ptr__31 = &((*___ref___rec__1).logic0field);
#line 1323
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 1323
___nl__im_ptr__31 = NULL;
#line 1323
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_const(214)));
#line 1323
c_rt_lib0clear(&___nl__im__30);
#line 1323
___nl__int__33 = 0;
#line 1323
___nl__int__34 = 1;
#line 1323
___nl__int__35 = c_rt_lib0array_len(___nl__im__29);
#line 1323
label_8:
;
#line 1323
___nl__int__37 = ___nl__int__33 >= ___nl__int__35;
#line 1323
___nl__bool__36 = ___nl__int__37;
#line 1323
if(___nl__bool__36){ goto label_6;}
#line 1323
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__29, ___nl__int__33));
#line 1323
c_rt_lib0copy(&___nl__im__32, ___nl__im__38);
#line 1324
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(217)));
#line 1324
___nl__int__42 = c_rt_lib0array_len(___nl__im__7);
#line 1324
___nl__int__43 = getIntFromImm(___nl__im__41);
#line 1324
___nl__int__44 = ___nl__int__43 < ___nl__int__42;
#line 1324
___nl__bool__39 = ___nl__int__44;
#line 1324
c_rt_lib0clear(&___nl__im__41);
#line 1324
//clear ___nl__int__42;
#line 1324
//clear ___nl__int__43;
#line 1324
//clear ___nl__int__44;
#line 1324
___nl__bool__40 = !___nl__bool__39;
#line 1324
if(___nl__bool__40){ goto label_11;}
#line 1324
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(217)));
#line 1324
___nl__int__48 = getIntFromImm(___nl__im__47);
#line 1324
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__7, ___nl__int__48));
#line 1324
c_rt_lib0clear(&___nl__im__47);
#line 1324
//clear ___nl__int__48;
#line 1324
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_const(331)));
#line 1324
c_rt_lib0clear(&___nl__im__46);
#line 1324
___nl__bool__39 = c_rt_lib0priv_is(___nl__im__45, ___get_global_const(40));
#line 1324
c_rt_lib0clear(&___nl__im__45);
#line 1324
label_11:
;
#line 1324
//clear ___nl__bool__40;
#line 1324
___nl__bool__39 = !___nl__bool__39;
#line 1324
if(___nl__bool__39){ goto label_10;}
#line 1324
goto label_7;
#line 1324
goto label_9;
#line 1324
label_10:
;
#line 1324
label_9:
;
#line 1324
//clear ___nl__bool__39;
#line 1325
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_const(217)));
#line 1325
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_const(217)));
#line 1325
___nl__int__51 = getIntFromImm(___nl__im__52);
#line 1325
c_rt_lib0clear(&___nl__im__52);
#line 1325
___nl__int__53 = getIntFromImm(___nl__im__50);
#line 1325
___nl__int__54 = ___nl__int__53 == ___nl__int__51;
#line 1325
___nl__bool__49 = ___nl__int__54;
#line 1325
c_rt_lib0clear(&___nl__im__50);
#line 1325
//clear ___nl__int__51;
#line 1325
//clear ___nl__int__53;
#line 1325
//clear ___nl__int__54;
#line 1325
___nl__bool__49 = !___nl__bool__49;
#line 1325
if(___nl__bool__49){ goto label_13;}
#line 1325
goto label_7;
#line 1325
goto label_12;
#line 1325
label_13:
;
#line 1325
label_12:
;
#line 1325
//clear ___nl__bool__49;
#line 1326
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__32, ___ref___rec__1));
#line 1326
c_rt_lib0clear(&___nl__im__32);
#line 1326
label_7:
;
#line 1327
___nl__int__33 = ___nl__int__33 + ___nl__int__34;
#line 1327
goto label_8;
#line 1327
label_6:
;
#line 1328
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_const(245), ___nl__im__0));
#line 1328
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__55));
#line 1328
c_rt_lib0clear(&___nl__im__55);
#line 1328
c_rt_lib0clear(&___nl__im__0);
#line 1328
c_rt_lib0clear(&___nl__im__2);
#line 1328
c_rt_lib0clear(&___nl__im__7);
#line 1328
c_rt_lib0clear(&___nl__im__29);
#line 1328
c_rt_lib0clear(&___nl__im__32);
#line 1328
//clear ___nl__int__33;
#line 1328
//clear ___nl__int__34;
#line 1328
//clear ___nl__int__35;
#line 1328
//clear ___nl__bool__36;
#line 1328
//clear ___nl__int__37;
#line 1328
c_rt_lib0clear(&___nl__im__38);
#line 1328
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
#line 1332
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1332
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(462));
#line 1332
c_rt_lib0clear(&___nl__im__3);
#line 1332
___nl__bool__2 = !___nl__bool__2;
#line 1332
if(___nl__bool__2){ goto label_2;}
#line 1333
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1333
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1333
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_const(462)));
#line 1333
c_rt_lib0clear(&___nl__im__6);
#line 1333
c_rt_lib0clear(&___nl__im__7);
#line 1333
c_rt_lib0move(&___nl__im__4, translator_priv0get_var_register(___nl__im__5, ___ref___rec__1));
#line 1333
c_rt_lib0clear(&___nl__im__5);
#line 1333
c_rt_lib0clear(&___nl__im__0);
#line 1333
//clear ___nl__bool__2;
#line 1333
return ___nl__im__4;
#line 1334
goto label_1;
#line 1334
label_2:
;
#line 1334
label_1:
;
#line 1334
//clear ___nl__bool__2;
#line 1334
c_rt_lib0clear(&___nl__im__4);
#line 1335
c_rt_lib0move(&___nl__im__8, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1336
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1337
label_4:
;
#line 1337
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_const(7));
#line 1337
___nl__bool__10 = !___nl__bool__10;
#line 1337
if(___nl__bool__10){ goto label_3;}
#line 1338
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1338
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1338
___nl__im_ptr__13 = NULL;
#line 1338
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(387)));
#line 1338
c_rt_lib0clear(&___nl__im__12);
#line 1338
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_const(7)));
#line 1338
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__11, ___nl__im__14));
#line 1338
c_rt_lib0clear(&___nl__im__11);
#line 1338
c_rt_lib0clear(&___nl__im__14);
#line 1339
goto label_4;
#line 1339
label_3:
;
#line 1341
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1341
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(233));
#line 1341
c_rt_lib0clear(&___nl__im__18);
#line 1341
___nl__bool__17 = !___nl__bool__16;
#line 1341
if(___nl__bool__17){ goto label_7;}
#line 1341
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1341
___nl__im_ptr__22 = &((*___ref___rec__1).logic0field);
#line 1341
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1341
___nl__im_ptr__22 = NULL;
#line 1341
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_const(387)));
#line 1341
c_rt_lib0clear(&___nl__im__21);
#line 1341
___nl__bool__16 = tct0is_own_type(___nl__im__19, ___nl__im__20);
#line 1341
c_rt_lib0clear(&___nl__im__19);
#line 1341
c_rt_lib0clear(&___nl__im__20);
#line 1341
label_7:
;
#line 1341
//clear ___nl__bool__17;
#line 1341
___nl__bool__16 = !___nl__bool__16;
#line 1341
if(___nl__bool__16){ goto label_6;}
#line 1342
c_rt_lib0move(&___nl__im__15, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__8));
#line 1343
goto label_5;
#line 1343
label_6:
;
#line 1344
c_rt_lib0move(&___nl__im__15, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 1345
goto label_5;
#line 1345
label_5:
;
#line 1345
//clear ___nl__bool__16;
#line 1346
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__15, ___ref___rec__1));
#line 1347
c_rt_lib0clear(&___nl__im__0);
#line 1347
c_rt_lib0clear(&___nl__im__8);
#line 1347
c_rt_lib0clear(&___nl__im__9);
#line 1347
//clear ___nl__bool__10;
#line 1347
return ___nl__im__15;
}

nlasm0reg_t0type translator_priv0def_val(nast0value_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
#line 1352
c_rt_lib0move(&___nl__im__5, nlasm0is_empty(___nl__im__1));
#line 1352
___nl__bool__4 = c_rt_lib0check_true_native(___nl__im__5);
#line 1352
c_rt_lib0clear(&___nl__im__5);
#line 1352
___nl__bool__4 = !___nl__bool__4;
#line 1352
if(___nl__bool__4){ goto label_2;}
#line 1352
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 1352
goto label_1;
#line 1352
label_2:
;
#line 1352
label_1:
;
#line 1352
//clear ___nl__bool__4;
#line 1353
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__3));
#line 1354
c_rt_lib0clear(&___nl__im__0);
#line 1354
c_rt_lib0clear(&___nl__im__2);
#line 1354
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
#line 1358
c_rt_lib0move(&___nl__im__2, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1359
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1359
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_const(462));
#line 1359
c_rt_lib0clear(&___nl__im__4);
#line 1359
___nl__bool__3 = !___nl__bool__3;
#line 1359
if(___nl__bool__3){ goto label_2;}
#line 1360
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1360
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1360
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_const(462)));
#line 1360
c_rt_lib0clear(&___nl__im__7);
#line 1360
c_rt_lib0clear(&___nl__im__8);
#line 1360
c_rt_lib0move(&___nl__im__5, translator_priv0get_var_register(___nl__im__6, ___ref___rec__1));
#line 1360
c_rt_lib0clear(&___nl__im__6);
#line 1360
c_rt_lib0clear(&___nl__im__0);
#line 1360
c_rt_lib0clear(&___nl__im__2);
#line 1360
//clear ___nl__bool__3;
#line 1360
return ___nl__im__5;
#line 1361
goto label_1;
#line 1361
label_2:
;
#line 1361
label_1:
;
#line 1361
//clear ___nl__bool__3;
#line 1361
c_rt_lib0clear(&___nl__im__5);
#line 1364
c_rt_lib0move(&___nl__im__9, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1365
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1365
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1365
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1365
___nl__im_ptr__14 = NULL;
#line 1365
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_const(387)));
#line 1365
c_rt_lib0clear(&___nl__im__13);
#line 1365
___nl__bool__10 = tct0is_own_type(___nl__im__11, ___nl__im__12);
#line 1365
c_rt_lib0clear(&___nl__im__11);
#line 1365
c_rt_lib0clear(&___nl__im__12);
#line 1365
___nl__bool__10 = !___nl__bool__10;
#line 1365
if(___nl__bool__10){ goto label_4;}
#line 1366
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1367
goto label_3;
#line 1367
label_4:
;
#line 1368
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1369
goto label_3;
#line 1369
label_3:
;
#line 1369
//clear ___nl__bool__10;
#line 1371
c_rt_lib0clear(&___nl__im__0);
#line 1371
c_rt_lib0clear(&___nl__im__2);
#line 1371
return ___nl__im__9;
}

nlasm0reg_t0type translator_priv0get_var_register(ImmT  ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT * ___nl__im_ptr__5 = NULL;
#line 1375
___nl__im_ptr__5 = &((*___ref___rec__1).logic0field);
#line 1375
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1375
___nl__im_ptr__5 = NULL;
#line 1375
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(719)));
#line 1375
c_rt_lib0clear(&___nl__im__4);
#line 1375
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__0));
#line 1375
c_rt_lib0clear(&___nl__im__3);
#line 1375
c_rt_lib0clear(&___nl__im__0);
#line 1375
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
#line 1381
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(218));
#line 1381
if(___nl__bool__5){ goto label_2;}
#line 1383
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_const(391));
#line 1383
if(___nl__bool__5){ goto label_3;}
#line 1383
c_rt_lib0move(&___nl__im__6,___get_global_const(16));
#line 1383
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__3));
#line 1383
nl_die_arg(___nl__im__6);
#line 1381
label_2:
;
#line 1382
c_rt_lib0move(&___nl__im__4, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1383
goto label_1;
#line 1383
label_3:
;
#line 1384
c_rt_lib0move(&___nl__im__4, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__2));
#line 1385
goto label_1;
#line 1385
label_1:
;
#line 1386
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1386
c_rt_lib0move(&___nl__im__8,___get_global_const(719));
#line 1386
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___nl__im_ptr__7), ___nl__im__8));
#line 1386
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__0, ___nl__im__4));
#line 1386
c_rt_lib0move(&___nl__string__9,___get_global_const(719));
#line 1386
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__7, ___nl__string__9, ___nl__im__8));
#line 1386
___nl__im_ptr__7 = NULL;
#line 1386
c_rt_lib0clear(&___nl__im__8);
#line 1386
c_rt_lib0clear(&___nl__string__9);
#line 1387
___nl__im_ptr__10 = &((*___ref___rec__1).debug0field);
#line 1387
c_rt_lib0move(&___nl__im__11,___get_global_const(732));
#line 1387
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 1387
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__0, ___nl__im__4));
#line 1387
c_rt_lib0move(&___nl__string__12,___get_global_const(732));
#line 1387
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__12, ___nl__im__11));
#line 1387
___nl__im_ptr__10 = NULL;
#line 1387
c_rt_lib0clear(&___nl__im__11);
#line 1387
c_rt_lib0clear(&___nl__string__12);
#line 1388
c_rt_lib0clear(&___nl__im__0);
#line 1388
c_rt_lib0clear(&___nl__im__2);
#line 1388
c_rt_lib0clear(&___nl__im__3);
#line 1388
//clear ___nl__bool__5;
#line 1388
c_rt_lib0clear(&___nl__im__6);
#line 1388
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
#line 1392
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1392
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1392
___nl__im_ptr__5 = NULL;
#line 1392
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(214)));
#line 1392
c_rt_lib0clear(&___nl__im__4);
#line 1392
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1392
c_rt_lib0clear(&___nl__im__3);
#line 1393
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1393
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(218)));
#line 1393
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__1, ___get_global_const(217), ___nl__im__7, ___get_global_const(329), ___nl__im__8));
#line 1393
c_rt_lib0clear(&___nl__im__7);
#line 1393
c_rt_lib0clear(&___nl__im__8);
#line 1394
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1394
c_rt_lib0move(&___nl__im__10,___get_global_const(214));
#line 1394
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1394
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1394
c_rt_lib0move(&___nl__string__11,___get_global_const(214));
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
c_rt_lib0move(&___nl__im__13,___get_global_const(430));
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
c_rt_lib0move(&___nl__string__17,___get_global_const(430));
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
c_rt_lib0move(&___nl__im__19,___get_global_const(1225));
#line 1396
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1396
___nl__bool__20 = true;
#line 1396
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1396
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1396
c_rt_lib0move(&___nl__string__22,___get_global_const(1225));
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
c_rt_lib0move(&___nl__im__24,___get_global_const(214));
#line 1397
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1397
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1397
c_rt_lib0move(&___nl__string__25,___get_global_const(214));
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
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(214)));
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
#line 1402
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1402
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1402
___nl__im_ptr__5 = NULL;
#line 1402
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_const(214)));
#line 1402
c_rt_lib0clear(&___nl__im__4);
#line 1402
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1402
c_rt_lib0clear(&___nl__im__3);
#line 1403
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1403
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_const(391)));
#line 1403
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_const(204), ___nl__im__1, ___get_global_const(217), ___nl__im__7, ___get_global_const(329), ___nl__im__8));
#line 1403
c_rt_lib0clear(&___nl__im__7);
#line 1403
c_rt_lib0clear(&___nl__im__8);
#line 1404
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1404
c_rt_lib0move(&___nl__im__10,___get_global_const(214));
#line 1404
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1404
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1404
c_rt_lib0move(&___nl__string__11,___get_global_const(214));
#line 1404
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1404
___nl__im_ptr__9 = NULL;
#line 1404
c_rt_lib0clear(&___nl__im__10);
#line 1404
c_rt_lib0clear(&___nl__string__11);
#line 1405
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1405
c_rt_lib0move(&___nl__im__13,___get_global_const(430));
#line 1405
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1405
___nl__int__14 = 1;
#line 1405
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1405
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1405
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1405
c_rt_lib0move(&___nl__string__17,___get_global_const(430));
#line 1405
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1405
___nl__im_ptr__12 = NULL;
#line 1405
c_rt_lib0clear(&___nl__im__13);
#line 1405
//clear ___nl__int__14;
#line 1405
//clear ___nl__int__15;
#line 1405
//clear ___nl__int__16;
#line 1405
c_rt_lib0clear(&___nl__string__17);
#line 1406
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1406
c_rt_lib0move(&___nl__im__19,___get_global_const(1225));
#line 1406
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1406
___nl__bool__20 = true;
#line 1406
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1406
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1406
c_rt_lib0move(&___nl__string__22,___get_global_const(1225));
#line 1406
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1406
___nl__im_ptr__18 = NULL;
#line 1406
c_rt_lib0clear(&___nl__im__19);
#line 1406
//clear ___nl__bool__20;
#line 1406
c_rt_lib0clear(&___nl__im__21);
#line 1406
c_rt_lib0clear(&___nl__string__22);
#line 1407
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1407
c_rt_lib0move(&___nl__im__24,___get_global_const(214));
#line 1407
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1407
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1407
c_rt_lib0move(&___nl__string__25,___get_global_const(214));
#line 1407
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1407
___nl__im_ptr__23 = NULL;
#line 1407
c_rt_lib0clear(&___nl__im__24);
#line 1407
c_rt_lib0clear(&___nl__string__25);
#line 1408
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1408
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1408
___nl__im_ptr__29 = NULL;
#line 1408
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_const(214)));
#line 1408
c_rt_lib0clear(&___nl__im__28);
#line 1408
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1408
c_rt_lib0clear(&___nl__im__27);
#line 1408
c_rt_lib0clear(&___nl__im__1);
#line 1408
//clear ___nl__int__2;
#line 1408
c_rt_lib0clear(&___nl__im__6);
#line 1408
return ___nl__im__26;
}

translator0function_logic_t0type translator_priv0save_registers(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 1412
___nl__im_ptr__2 = &((*___ref___rec__0).logic0field);
#line 1412
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 1412
___nl__im_ptr__2 = NULL;
#line 1412
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
#line 1416
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(329)));
#line 1416
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(218));
#line 1416
if(___nl__bool__3){ goto label_2;}
#line 1418
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_const(391));
#line 1418
if(___nl__bool__3){ goto label_3;}
#line 1418
c_rt_lib0move(&___nl__im__4,___get_global_const(16));
#line 1418
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1418
nl_die_arg(___nl__im__4);
#line 1416
label_2:
;
#line 1417
___nl__im_ptr__8 = &((*___ref___rec__1).logic0field);
#line 1417
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1417
___nl__im_ptr__8 = NULL;
#line 1417
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_const(1225)));
#line 1417
c_rt_lib0clear(&___nl__im__7);
#line 1417
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(217)));
#line 1417
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 1417
c_rt_lib0clear(&___nl__im__10);
#line 1417
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__9));
#line 1417
___nl__bool__5 = c_rt_lib0check_true_native(___nl__im__11);
#line 1417
c_rt_lib0clear(&___nl__im__6);
#line 1417
//clear ___nl__int__9;
#line 1417
c_rt_lib0clear(&___nl__im__11);
#line 1417
___nl__bool__5 = !___nl__bool__5;
#line 1417
if(___nl__bool__5){ goto label_5;}
#line 1417
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_const(250), ___nl__im__0));
#line 1417
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__12));
#line 1417
c_rt_lib0clear(&___nl__im__12);
#line 1417
goto label_4;
#line 1417
label_5:
;
#line 1417
label_4:
;
#line 1417
//clear ___nl__bool__5;
#line 1418
goto label_1;
#line 1418
label_3:
;
#line 1419
goto label_1;
#line 1419
label_1:
;
#line 1419
c_rt_lib0clear(&___nl__im__0);
#line 1419
c_rt_lib0clear(&___nl__im__2);
#line 1419
//clear ___nl__bool__3;
#line 1419
c_rt_lib0clear(&___nl__im__4);
#line 1419
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
#line 1423
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(430)));
#line 1423
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1423
c_rt_lib0clear(&___nl__im__3);
#line 1423
label_2:
;
#line 1423
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1423
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1423
___nl__im_ptr__7 = NULL;
#line 1423
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(430)));
#line 1423
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1423
c_rt_lib0clear(&___nl__im__6);
#line 1423
c_rt_lib0clear(&___nl__im__8);
#line 1423
___nl__int__9 = ___nl__int__2 < ___nl__int__5;
#line 1423
___nl__bool__4 = ___nl__int__9;
#line 1423
//clear ___nl__int__5;
#line 1423
//clear ___nl__int__9;
#line 1423
___nl__bool__4 = !___nl__bool__4;
#line 1423
if(___nl__bool__4){ goto label_1;}
#line 1424
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1424
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1424
___nl__im_ptr__13 = NULL;
#line 1424
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(214)));
#line 1424
c_rt_lib0clear(&___nl__im__12);
#line 1424
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__11, ___nl__int__2));
#line 1424
c_rt_lib0clear(&___nl__im__11);
#line 1424
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__10, ___ref___rec__1));
#line 1424
c_rt_lib0clear(&___nl__im__10);
#line 1424
label_3:
;
#line 1423
___nl__int__14 = 1;
#line 1423
___nl__int__2 = ___nl__int__2 + ___nl__int__14;
#line 1423
//clear ___nl__int__14;
#line 1425
goto label_2;
#line 1425
label_1:
;
#line 1425
c_rt_lib0clear(&___nl__im__0);
#line 1425
//clear ___nl__int__2;
#line 1425
//clear ___nl__bool__4;
#line 1425
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
#line 1429
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(430)));
#line 1429
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1429
c_rt_lib0clear(&___nl__im__3);
#line 1429
label_2:
;
#line 1429
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1429
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1429
___nl__im_ptr__7 = NULL;
#line 1429
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(430)));
#line 1429
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1429
c_rt_lib0clear(&___nl__im__6);
#line 1429
c_rt_lib0clear(&___nl__im__8);
#line 1429
___nl__int__9 = ___nl__int__2 < ___nl__int__5;
#line 1429
___nl__bool__4 = ___nl__int__9;
#line 1429
//clear ___nl__int__5;
#line 1429
//clear ___nl__int__9;
#line 1429
___nl__bool__4 = !___nl__bool__4;
#line 1429
if(___nl__bool__4){ goto label_1;}
#line 1430
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1430
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1430
___nl__im_ptr__13 = NULL;
#line 1430
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_const(214)));
#line 1430
c_rt_lib0clear(&___nl__im__12);
#line 1430
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__11, ___nl__int__2));
#line 1430
c_rt_lib0clear(&___nl__im__11);
#line 1430
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__10, ___ref___rec__1));
#line 1430
c_rt_lib0clear(&___nl__im__10);
#line 1431
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1431
c_rt_lib0move(&___nl__im__15,___get_global_const(1225));
#line 1431
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___nl__im_ptr__14), ___nl__im__15));
#line 1431
___nl__bool__17 = false;
#line 1431
c_rt_lib0move(&___nl__im__16, c_rt_lib0bool_to_nl_native(___nl__bool__17));
#line 1431
c_rt_lib0array_set(&___nl__im__15, ___nl__int__2, ___nl__im__16);
#line 1431
c_rt_lib0move(&___nl__string__18,___get_global_const(1225));
#line 1431
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__14, ___nl__string__18, ___nl__im__15));
#line 1431
___nl__im_ptr__14 = NULL;
#line 1431
c_rt_lib0clear(&___nl__im__15);
#line 1431
c_rt_lib0clear(&___nl__im__16);
#line 1431
//clear ___nl__bool__17;
#line 1431
c_rt_lib0clear(&___nl__string__18);
#line 1431
label_3:
;
#line 1429
___nl__int__19 = 1;
#line 1429
___nl__int__2 = ___nl__int__2 + ___nl__int__19;
#line 1429
//clear ___nl__int__19;
#line 1432
goto label_2;
#line 1432
label_1:
;
#line 1432
c_rt_lib0clear(&___nl__im__0);
#line 1432
//clear ___nl__int__2;
#line 1432
//clear ___nl__bool__4;
#line 1432
return NULL;
}

ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1) {
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 1436
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 1436
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(247), ___nl__im__3));
#line 1436
c_rt_lib0clear(&___nl__im__3);
#line 1436
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__2));
#line 1436
c_rt_lib0clear(&___nl__im__2);
#line 1436
//clear ___nl__int__0;
#line 1436
return NULL;
}

nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
INT * ___nl__int_ptr__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT * ___nl__int_ptr__4 = NULL;
#line 1440
___nl__int_ptr__1 = &((*___ref___rec__0).label_nr0field);
#line 1440
___nl__int__2 = 1;
#line 1440
(*___nl__int_ptr__1) = (*___nl__int_ptr__1) + ___nl__int__2;
#line 1440
___nl__int_ptr__1 = NULL;
#line 1440
//clear ___nl__int__2;
#line 1441
___nl__int_ptr__4 = &((*___ref___rec__0).label_nr0field);
#line 1441
___nl__int__3 = (*___nl__int_ptr__4);
#line 1441
___nl__int_ptr__4 = NULL;
#line 1441
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
#line 1445
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1445
___nl__im_ptr__6 = &((*___ref___rec__1).logic0field);
#line 1445
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1445
___nl__im_ptr__6 = NULL;
#line 1445
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_const(387)));
#line 1445
c_rt_lib0clear(&___nl__im__5);
#line 1445
c_rt_lib0move(&___nl__im__2, translator_priv0var_type_to_reg_type(___nl__im__3, ___nl__im__4));
#line 1445
c_rt_lib0clear(&___nl__im__3);
#line 1445
c_rt_lib0clear(&___nl__im__4);
#line 1445
c_rt_lib0clear(&___nl__im__0);
#line 1445
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
#line 1449
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1449
___nl__bool__3 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__1);
#line 1449
c_rt_lib0clear(&___nl__im__4);
#line 1449
___nl__bool__3 = !___nl__bool__3;
#line 1449
if(___nl__bool__3){ goto label_2;}
#line 1450
c_rt_lib0clear(&___nl__im__1);
#line 1450
//clear ___nl__bool__3;
#line 1450
return ___nl__im__0;
#line 1451
goto label_1;
#line 1451
label_2:
;
#line 1451
label_1:
;
#line 1451
//clear ___nl__bool__3;
#line 1453
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(329)));
#line 1453
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(218));
#line 1453
if(___nl__bool__7){ goto label_4;}
#line 1455
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_const(391));
#line 1455
if(___nl__bool__7){ goto label_5;}
#line 1455
c_rt_lib0move(&___nl__im__8,___get_global_const(16));
#line 1455
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 1455
nl_die_arg(___nl__im__8);
#line 1453
label_4:
;
#line 1454
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__2, ___nl__im__1));
#line 1455
goto label_3;
#line 1455
label_5:
;
#line 1456
c_rt_lib0move(&___nl__im__5, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__1));
#line 1457
goto label_3;
#line 1457
label_3:
;
#line 1458
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__0, ___ref___rec__2));
#line 1459
c_rt_lib0clear(&___nl__im__0);
#line 1459
c_rt_lib0clear(&___nl__im__1);
#line 1459
c_rt_lib0clear(&___nl__im__6);
#line 1459
//clear ___nl__bool__7;
#line 1459
c_rt_lib0clear(&___nl__im__8);
#line 1459
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
#line 1463
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(5));
#line 1463
if(___nl__bool__2){ goto label_2;}
#line 1465
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(6));
#line 1465
if(___nl__bool__2){ goto label_3;}
#line 1467
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(3));
#line 1467
if(___nl__bool__2){ goto label_4;}
#line 1469
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(4));
#line 1469
if(___nl__bool__2){ goto label_5;}
#line 1471
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(1));
#line 1471
if(___nl__bool__2){ goto label_6;}
#line 1473
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(2));
#line 1473
if(___nl__bool__2){ goto label_7;}
#line 1475
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(13));
#line 1475
if(___nl__bool__2){ goto label_8;}
#line 1477
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(14));
#line 1477
if(___nl__bool__2){ goto label_9;}
#line 1479
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 1479
if(___nl__bool__2){ goto label_10;}
#line 1494
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(9));
#line 1494
if(___nl__bool__2){ goto label_11;}
#line 1496
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(10));
#line 1496
if(___nl__bool__2){ goto label_12;}
#line 1498
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(11));
#line 1498
if(___nl__bool__2){ goto label_13;}
#line 1500
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(12));
#line 1500
if(___nl__bool__2){ goto label_14;}
#line 1502
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(15));
#line 1502
if(___nl__bool__2){ goto label_15;}
#line 1504
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(8));
#line 1504
if(___nl__bool__2){ goto label_16;}
#line 1506
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(0));
#line 1506
if(___nl__bool__2){ goto label_17;}
#line 1506
c_rt_lib0move(&___nl__im__3,___get_global_const(16));
#line 1506
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1506
nl_die_arg(___nl__im__3);
#line 1463
label_2:
;
#line 1463
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(5)));
#line 1463
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1464
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1464
c_rt_lib0clear(&___nl__im__0);
#line 1464
c_rt_lib0clear(&___nl__im__1);
#line 1464
//clear ___nl__bool__2;
#line 1464
c_rt_lib0clear(&___nl__im__3);
#line 1464
c_rt_lib0clear(&___nl__im__4);
#line 1464
c_rt_lib0clear(&___nl__im__5);
#line 1464
return ___nl__im__6;
#line 1465
goto label_1;
#line 1465
label_3:
;
#line 1465
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(6)));
#line 1465
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1466
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_const(512), ___nl__im__0));
#line 1466
c_rt_lib0clear(&___nl__im__0);
#line 1466
c_rt_lib0clear(&___nl__im__1);
#line 1466
//clear ___nl__bool__2;
#line 1466
c_rt_lib0clear(&___nl__im__3);
#line 1466
c_rt_lib0clear(&___nl__im__4);
#line 1466
c_rt_lib0clear(&___nl__im__5);
#line 1466
c_rt_lib0clear(&___nl__im__6);
#line 1466
c_rt_lib0clear(&___nl__im__7);
#line 1466
c_rt_lib0clear(&___nl__im__8);
#line 1466
return ___nl__im__9;
#line 1467
goto label_1;
#line 1467
label_4:
;
#line 1467
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(3)));
#line 1467
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1468
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1468
c_rt_lib0clear(&___nl__im__0);
#line 1468
c_rt_lib0clear(&___nl__im__1);
#line 1468
//clear ___nl__bool__2;
#line 1468
c_rt_lib0clear(&___nl__im__3);
#line 1468
c_rt_lib0clear(&___nl__im__4);
#line 1468
c_rt_lib0clear(&___nl__im__5);
#line 1468
c_rt_lib0clear(&___nl__im__6);
#line 1468
c_rt_lib0clear(&___nl__im__7);
#line 1468
c_rt_lib0clear(&___nl__im__8);
#line 1468
c_rt_lib0clear(&___nl__im__9);
#line 1468
c_rt_lib0clear(&___nl__im__10);
#line 1468
c_rt_lib0clear(&___nl__im__11);
#line 1468
return ___nl__im__12;
#line 1469
goto label_1;
#line 1469
label_5:
;
#line 1469
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(4)));
#line 1469
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1470
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_const(129), ___nl__im__0));
#line 1470
c_rt_lib0clear(&___nl__im__0);
#line 1470
c_rt_lib0clear(&___nl__im__1);
#line 1470
//clear ___nl__bool__2;
#line 1470
c_rt_lib0clear(&___nl__im__3);
#line 1470
c_rt_lib0clear(&___nl__im__4);
#line 1470
c_rt_lib0clear(&___nl__im__5);
#line 1470
c_rt_lib0clear(&___nl__im__6);
#line 1470
c_rt_lib0clear(&___nl__im__7);
#line 1470
c_rt_lib0clear(&___nl__im__8);
#line 1470
c_rt_lib0clear(&___nl__im__9);
#line 1470
c_rt_lib0clear(&___nl__im__10);
#line 1470
c_rt_lib0clear(&___nl__im__11);
#line 1470
c_rt_lib0clear(&___nl__im__12);
#line 1470
c_rt_lib0clear(&___nl__im__13);
#line 1470
c_rt_lib0clear(&___nl__im__14);
#line 1470
return ___nl__im__15;
#line 1471
goto label_1;
#line 1471
label_6:
;
#line 1471
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(1)));
#line 1471
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1472
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1472
c_rt_lib0clear(&___nl__im__0);
#line 1472
c_rt_lib0clear(&___nl__im__1);
#line 1472
//clear ___nl__bool__2;
#line 1472
c_rt_lib0clear(&___nl__im__3);
#line 1472
c_rt_lib0clear(&___nl__im__4);
#line 1472
c_rt_lib0clear(&___nl__im__5);
#line 1472
c_rt_lib0clear(&___nl__im__6);
#line 1472
c_rt_lib0clear(&___nl__im__7);
#line 1472
c_rt_lib0clear(&___nl__im__8);
#line 1472
c_rt_lib0clear(&___nl__im__9);
#line 1472
c_rt_lib0clear(&___nl__im__10);
#line 1472
c_rt_lib0clear(&___nl__im__11);
#line 1472
c_rt_lib0clear(&___nl__im__12);
#line 1472
c_rt_lib0clear(&___nl__im__13);
#line 1472
c_rt_lib0clear(&___nl__im__14);
#line 1472
c_rt_lib0clear(&___nl__im__15);
#line 1472
c_rt_lib0clear(&___nl__im__16);
#line 1472
c_rt_lib0clear(&___nl__im__17);
#line 1472
return ___nl__im__18;
#line 1473
goto label_1;
#line 1473
label_7:
;
#line 1473
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(2)));
#line 1473
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1474
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_const(128), ___nl__im__0));
#line 1474
c_rt_lib0clear(&___nl__im__0);
#line 1474
c_rt_lib0clear(&___nl__im__1);
#line 1474
//clear ___nl__bool__2;
#line 1474
c_rt_lib0clear(&___nl__im__3);
#line 1474
c_rt_lib0clear(&___nl__im__4);
#line 1474
c_rt_lib0clear(&___nl__im__5);
#line 1474
c_rt_lib0clear(&___nl__im__6);
#line 1474
c_rt_lib0clear(&___nl__im__7);
#line 1474
c_rt_lib0clear(&___nl__im__8);
#line 1474
c_rt_lib0clear(&___nl__im__9);
#line 1474
c_rt_lib0clear(&___nl__im__10);
#line 1474
c_rt_lib0clear(&___nl__im__11);
#line 1474
c_rt_lib0clear(&___nl__im__12);
#line 1474
c_rt_lib0clear(&___nl__im__13);
#line 1474
c_rt_lib0clear(&___nl__im__14);
#line 1474
c_rt_lib0clear(&___nl__im__15);
#line 1474
c_rt_lib0clear(&___nl__im__16);
#line 1474
c_rt_lib0clear(&___nl__im__17);
#line 1474
c_rt_lib0clear(&___nl__im__18);
#line 1474
c_rt_lib0clear(&___nl__im__19);
#line 1474
c_rt_lib0clear(&___nl__im__20);
#line 1474
return ___nl__im__21;
#line 1475
goto label_1;
#line 1475
label_8:
;
#line 1475
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(13)));
#line 1475
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 1476
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1476
c_rt_lib0clear(&___nl__im__0);
#line 1476
c_rt_lib0clear(&___nl__im__1);
#line 1476
//clear ___nl__bool__2;
#line 1476
c_rt_lib0clear(&___nl__im__3);
#line 1476
c_rt_lib0clear(&___nl__im__4);
#line 1476
c_rt_lib0clear(&___nl__im__5);
#line 1476
c_rt_lib0clear(&___nl__im__6);
#line 1476
c_rt_lib0clear(&___nl__im__7);
#line 1476
c_rt_lib0clear(&___nl__im__8);
#line 1476
c_rt_lib0clear(&___nl__im__9);
#line 1476
c_rt_lib0clear(&___nl__im__10);
#line 1476
c_rt_lib0clear(&___nl__im__11);
#line 1476
c_rt_lib0clear(&___nl__im__12);
#line 1476
c_rt_lib0clear(&___nl__im__13);
#line 1476
c_rt_lib0clear(&___nl__im__14);
#line 1476
c_rt_lib0clear(&___nl__im__15);
#line 1476
c_rt_lib0clear(&___nl__im__16);
#line 1476
c_rt_lib0clear(&___nl__im__17);
#line 1476
c_rt_lib0clear(&___nl__im__18);
#line 1476
c_rt_lib0clear(&___nl__im__19);
#line 1476
c_rt_lib0clear(&___nl__im__20);
#line 1476
c_rt_lib0clear(&___nl__im__21);
#line 1476
c_rt_lib0clear(&___nl__im__22);
#line 1476
c_rt_lib0clear(&___nl__im__23);
#line 1476
return ___nl__im__24;
#line 1477
goto label_1;
#line 1477
label_9:
;
#line 1477
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(14)));
#line 1477
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1478
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_const(516), ___nl__im__0));
#line 1478
c_rt_lib0clear(&___nl__im__0);
#line 1478
c_rt_lib0clear(&___nl__im__1);
#line 1478
//clear ___nl__bool__2;
#line 1478
c_rt_lib0clear(&___nl__im__3);
#line 1478
c_rt_lib0clear(&___nl__im__4);
#line 1478
c_rt_lib0clear(&___nl__im__5);
#line 1478
c_rt_lib0clear(&___nl__im__6);
#line 1478
c_rt_lib0clear(&___nl__im__7);
#line 1478
c_rt_lib0clear(&___nl__im__8);
#line 1478
c_rt_lib0clear(&___nl__im__9);
#line 1478
c_rt_lib0clear(&___nl__im__10);
#line 1478
c_rt_lib0clear(&___nl__im__11);
#line 1478
c_rt_lib0clear(&___nl__im__12);
#line 1478
c_rt_lib0clear(&___nl__im__13);
#line 1478
c_rt_lib0clear(&___nl__im__14);
#line 1478
c_rt_lib0clear(&___nl__im__15);
#line 1478
c_rt_lib0clear(&___nl__im__16);
#line 1478
c_rt_lib0clear(&___nl__im__17);
#line 1478
c_rt_lib0clear(&___nl__im__18);
#line 1478
c_rt_lib0clear(&___nl__im__19);
#line 1478
c_rt_lib0clear(&___nl__im__20);
#line 1478
c_rt_lib0clear(&___nl__im__21);
#line 1478
c_rt_lib0clear(&___nl__im__22);
#line 1478
c_rt_lib0clear(&___nl__im__23);
#line 1478
c_rt_lib0clear(&___nl__im__24);
#line 1478
c_rt_lib0clear(&___nl__im__25);
#line 1478
c_rt_lib0clear(&___nl__im__26);
#line 1478
return ___nl__im__27;
#line 1479
goto label_1;
#line 1479
label_10:
;
#line 1479
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 1479
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1480
c_rt_lib0move(&___nl__im__31,___get_global_const(33));
#line 1480
___nl__bool__30 = c_rt_lib0eq(___nl__im__28, ___nl__im__31);
#line 1480
c_rt_lib0clear(&___nl__im__31);
#line 1480
___nl__bool__30 = !___nl__bool__30;
#line 1480
if(___nl__bool__30){ goto label_19;}
#line 1481
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_const(34)));
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
//clear ___nl__bool__30;
#line 1481
return ___nl__im__32;
#line 1482
goto label_18;
#line 1482
label_19:
;
#line 1482
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1482
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__33, ___get_global_const(6));
#line 1482
c_rt_lib0clear(&___nl__im__33);
#line 1482
___nl__bool__30 = !___nl__bool__30;
#line 1482
if(___nl__bool__30){ goto label_20;}
#line 1483
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_const(512), ___nl__im__0));
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
//clear ___nl__bool__30;
#line 1483
c_rt_lib0clear(&___nl__im__32);
#line 1483
return ___nl__im__34;
#line 1484
goto label_18;
#line 1484
label_20:
;
#line 1484
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1484
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__35, ___get_global_const(2));
#line 1484
c_rt_lib0clear(&___nl__im__35);
#line 1484
___nl__bool__30 = !___nl__bool__30;
#line 1484
if(___nl__bool__30){ goto label_21;}
#line 1485
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_const(128), ___nl__im__0));
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
//clear ___nl__bool__30;
#line 1485
c_rt_lib0clear(&___nl__im__32);
#line 1485
c_rt_lib0clear(&___nl__im__34);
#line 1485
return ___nl__im__36;
#line 1486
goto label_18;
#line 1486
label_21:
;
#line 1486
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1486
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__37, ___get_global_const(14));
#line 1486
c_rt_lib0clear(&___nl__im__37);
#line 1486
___nl__bool__30 = !___nl__bool__30;
#line 1486
if(___nl__bool__30){ goto label_22;}
#line 1487
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_const(516), ___nl__im__0));
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
//clear ___nl__bool__30;
#line 1487
c_rt_lib0clear(&___nl__im__32);
#line 1487
c_rt_lib0clear(&___nl__im__34);
#line 1487
c_rt_lib0clear(&___nl__im__36);
#line 1487
return ___nl__im__38;
#line 1488
goto label_18;
#line 1488
label_22:
;
#line 1488
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1488
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__39, ___get_global_const(4));
#line 1488
c_rt_lib0clear(&___nl__im__39);
#line 1488
___nl__bool__30 = !___nl__bool__30;
#line 1488
if(___nl__bool__30){ goto label_23;}
#line 1489
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_const(129), ___nl__im__0));
#line 1489
c_rt_lib0clear(&___nl__im__0);
#line 1489
c_rt_lib0clear(&___nl__im__1);
#line 1489
//clear ___nl__bool__2;
#line 1489
c_rt_lib0clear(&___nl__im__3);
#line 1489
c_rt_lib0clear(&___nl__im__4);
#line 1489
c_rt_lib0clear(&___nl__im__5);
#line 1489
c_rt_lib0clear(&___nl__im__6);
#line 1489
c_rt_lib0clear(&___nl__im__7);
#line 1489
c_rt_lib0clear(&___nl__im__8);
#line 1489
c_rt_lib0clear(&___nl__im__9);
#line 1489
c_rt_lib0clear(&___nl__im__10);
#line 1489
c_rt_lib0clear(&___nl__im__11);
#line 1489
c_rt_lib0clear(&___nl__im__12);
#line 1489
c_rt_lib0clear(&___nl__im__13);
#line 1489
c_rt_lib0clear(&___nl__im__14);
#line 1489
c_rt_lib0clear(&___nl__im__15);
#line 1489
c_rt_lib0clear(&___nl__im__16);
#line 1489
c_rt_lib0clear(&___nl__im__17);
#line 1489
c_rt_lib0clear(&___nl__im__18);
#line 1489
c_rt_lib0clear(&___nl__im__19);
#line 1489
c_rt_lib0clear(&___nl__im__20);
#line 1489
c_rt_lib0clear(&___nl__im__21);
#line 1489
c_rt_lib0clear(&___nl__im__22);
#line 1489
c_rt_lib0clear(&___nl__im__23);
#line 1489
c_rt_lib0clear(&___nl__im__24);
#line 1489
c_rt_lib0clear(&___nl__im__25);
#line 1489
c_rt_lib0clear(&___nl__im__26);
#line 1489
c_rt_lib0clear(&___nl__im__27);
#line 1489
c_rt_lib0clear(&___nl__im__28);
#line 1489
c_rt_lib0clear(&___nl__im__29);
#line 1489
//clear ___nl__bool__30;
#line 1489
c_rt_lib0clear(&___nl__im__32);
#line 1489
c_rt_lib0clear(&___nl__im__34);
#line 1489
c_rt_lib0clear(&___nl__im__36);
#line 1489
c_rt_lib0clear(&___nl__im__38);
#line 1489
return ___nl__im__40;
#line 1490
goto label_18;
#line 1490
label_23:
;
#line 1490
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1490
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__41, ___get_global_const(10));
#line 1490
c_rt_lib0clear(&___nl__im__41);
#line 1490
___nl__bool__30 = !___nl__bool__30;
#line 1490
if(___nl__bool__30){ goto label_24;}
#line 1491
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_const(514)));
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
//clear ___nl__bool__30;
#line 1491
c_rt_lib0clear(&___nl__im__32);
#line 1491
c_rt_lib0clear(&___nl__im__34);
#line 1491
c_rt_lib0clear(&___nl__im__36);
#line 1491
c_rt_lib0clear(&___nl__im__38);
#line 1491
c_rt_lib0clear(&___nl__im__40);
#line 1491
return ___nl__im__42;
#line 1492
goto label_18;
#line 1492
label_24:
;
#line 1492
label_18:
;
#line 1492
//clear ___nl__bool__30;
#line 1492
c_rt_lib0clear(&___nl__im__32);
#line 1492
c_rt_lib0clear(&___nl__im__34);
#line 1492
c_rt_lib0clear(&___nl__im__36);
#line 1492
c_rt_lib0clear(&___nl__im__38);
#line 1492
c_rt_lib0clear(&___nl__im__40);
#line 1492
c_rt_lib0clear(&___nl__im__42);
#line 1493
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1493
c_rt_lib0clear(&___nl__im__0);
#line 1493
c_rt_lib0clear(&___nl__im__1);
#line 1493
//clear ___nl__bool__2;
#line 1493
c_rt_lib0clear(&___nl__im__3);
#line 1493
c_rt_lib0clear(&___nl__im__4);
#line 1493
c_rt_lib0clear(&___nl__im__5);
#line 1493
c_rt_lib0clear(&___nl__im__6);
#line 1493
c_rt_lib0clear(&___nl__im__7);
#line 1493
c_rt_lib0clear(&___nl__im__8);
#line 1493
c_rt_lib0clear(&___nl__im__9);
#line 1493
c_rt_lib0clear(&___nl__im__10);
#line 1493
c_rt_lib0clear(&___nl__im__11);
#line 1493
c_rt_lib0clear(&___nl__im__12);
#line 1493
c_rt_lib0clear(&___nl__im__13);
#line 1493
c_rt_lib0clear(&___nl__im__14);
#line 1493
c_rt_lib0clear(&___nl__im__15);
#line 1493
c_rt_lib0clear(&___nl__im__16);
#line 1493
c_rt_lib0clear(&___nl__im__17);
#line 1493
c_rt_lib0clear(&___nl__im__18);
#line 1493
c_rt_lib0clear(&___nl__im__19);
#line 1493
c_rt_lib0clear(&___nl__im__20);
#line 1493
c_rt_lib0clear(&___nl__im__21);
#line 1493
c_rt_lib0clear(&___nl__im__22);
#line 1493
c_rt_lib0clear(&___nl__im__23);
#line 1493
c_rt_lib0clear(&___nl__im__24);
#line 1493
c_rt_lib0clear(&___nl__im__25);
#line 1493
c_rt_lib0clear(&___nl__im__26);
#line 1493
c_rt_lib0clear(&___nl__im__27);
#line 1493
c_rt_lib0clear(&___nl__im__28);
#line 1493
c_rt_lib0clear(&___nl__im__29);
#line 1493
return ___nl__im__43;
#line 1494
goto label_1;
#line 1494
label_11:
;
#line 1495
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1495
c_rt_lib0clear(&___nl__im__0);
#line 1495
c_rt_lib0clear(&___nl__im__1);
#line 1495
//clear ___nl__bool__2;
#line 1495
c_rt_lib0clear(&___nl__im__3);
#line 1495
c_rt_lib0clear(&___nl__im__4);
#line 1495
c_rt_lib0clear(&___nl__im__5);
#line 1495
c_rt_lib0clear(&___nl__im__6);
#line 1495
c_rt_lib0clear(&___nl__im__7);
#line 1495
c_rt_lib0clear(&___nl__im__8);
#line 1495
c_rt_lib0clear(&___nl__im__9);
#line 1495
c_rt_lib0clear(&___nl__im__10);
#line 1495
c_rt_lib0clear(&___nl__im__11);
#line 1495
c_rt_lib0clear(&___nl__im__12);
#line 1495
c_rt_lib0clear(&___nl__im__13);
#line 1495
c_rt_lib0clear(&___nl__im__14);
#line 1495
c_rt_lib0clear(&___nl__im__15);
#line 1495
c_rt_lib0clear(&___nl__im__16);
#line 1495
c_rt_lib0clear(&___nl__im__17);
#line 1495
c_rt_lib0clear(&___nl__im__18);
#line 1495
c_rt_lib0clear(&___nl__im__19);
#line 1495
c_rt_lib0clear(&___nl__im__20);
#line 1495
c_rt_lib0clear(&___nl__im__21);
#line 1495
c_rt_lib0clear(&___nl__im__22);
#line 1495
c_rt_lib0clear(&___nl__im__23);
#line 1495
c_rt_lib0clear(&___nl__im__24);
#line 1495
c_rt_lib0clear(&___nl__im__25);
#line 1495
c_rt_lib0clear(&___nl__im__26);
#line 1495
c_rt_lib0clear(&___nl__im__27);
#line 1495
c_rt_lib0clear(&___nl__im__28);
#line 1495
c_rt_lib0clear(&___nl__im__29);
#line 1495
c_rt_lib0clear(&___nl__im__43);
#line 1495
return ___nl__im__44;
#line 1496
goto label_1;
#line 1496
label_12:
;
#line 1497
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_const(514)));
#line 1497
c_rt_lib0clear(&___nl__im__0);
#line 1497
c_rt_lib0clear(&___nl__im__1);
#line 1497
//clear ___nl__bool__2;
#line 1497
c_rt_lib0clear(&___nl__im__3);
#line 1497
c_rt_lib0clear(&___nl__im__4);
#line 1497
c_rt_lib0clear(&___nl__im__5);
#line 1497
c_rt_lib0clear(&___nl__im__6);
#line 1497
c_rt_lib0clear(&___nl__im__7);
#line 1497
c_rt_lib0clear(&___nl__im__8);
#line 1497
c_rt_lib0clear(&___nl__im__9);
#line 1497
c_rt_lib0clear(&___nl__im__10);
#line 1497
c_rt_lib0clear(&___nl__im__11);
#line 1497
c_rt_lib0clear(&___nl__im__12);
#line 1497
c_rt_lib0clear(&___nl__im__13);
#line 1497
c_rt_lib0clear(&___nl__im__14);
#line 1497
c_rt_lib0clear(&___nl__im__15);
#line 1497
c_rt_lib0clear(&___nl__im__16);
#line 1497
c_rt_lib0clear(&___nl__im__17);
#line 1497
c_rt_lib0clear(&___nl__im__18);
#line 1497
c_rt_lib0clear(&___nl__im__19);
#line 1497
c_rt_lib0clear(&___nl__im__20);
#line 1497
c_rt_lib0clear(&___nl__im__21);
#line 1497
c_rt_lib0clear(&___nl__im__22);
#line 1497
c_rt_lib0clear(&___nl__im__23);
#line 1497
c_rt_lib0clear(&___nl__im__24);
#line 1497
c_rt_lib0clear(&___nl__im__25);
#line 1497
c_rt_lib0clear(&___nl__im__26);
#line 1497
c_rt_lib0clear(&___nl__im__27);
#line 1497
c_rt_lib0clear(&___nl__im__28);
#line 1497
c_rt_lib0clear(&___nl__im__29);
#line 1497
c_rt_lib0clear(&___nl__im__43);
#line 1497
c_rt_lib0clear(&___nl__im__44);
#line 1497
return ___nl__im__45;
#line 1498
goto label_1;
#line 1498
label_13:
;
#line 1499
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1499
c_rt_lib0clear(&___nl__im__0);
#line 1499
c_rt_lib0clear(&___nl__im__1);
#line 1499
//clear ___nl__bool__2;
#line 1499
c_rt_lib0clear(&___nl__im__3);
#line 1499
c_rt_lib0clear(&___nl__im__4);
#line 1499
c_rt_lib0clear(&___nl__im__5);
#line 1499
c_rt_lib0clear(&___nl__im__6);
#line 1499
c_rt_lib0clear(&___nl__im__7);
#line 1499
c_rt_lib0clear(&___nl__im__8);
#line 1499
c_rt_lib0clear(&___nl__im__9);
#line 1499
c_rt_lib0clear(&___nl__im__10);
#line 1499
c_rt_lib0clear(&___nl__im__11);
#line 1499
c_rt_lib0clear(&___nl__im__12);
#line 1499
c_rt_lib0clear(&___nl__im__13);
#line 1499
c_rt_lib0clear(&___nl__im__14);
#line 1499
c_rt_lib0clear(&___nl__im__15);
#line 1499
c_rt_lib0clear(&___nl__im__16);
#line 1499
c_rt_lib0clear(&___nl__im__17);
#line 1499
c_rt_lib0clear(&___nl__im__18);
#line 1499
c_rt_lib0clear(&___nl__im__19);
#line 1499
c_rt_lib0clear(&___nl__im__20);
#line 1499
c_rt_lib0clear(&___nl__im__21);
#line 1499
c_rt_lib0clear(&___nl__im__22);
#line 1499
c_rt_lib0clear(&___nl__im__23);
#line 1499
c_rt_lib0clear(&___nl__im__24);
#line 1499
c_rt_lib0clear(&___nl__im__25);
#line 1499
c_rt_lib0clear(&___nl__im__26);
#line 1499
c_rt_lib0clear(&___nl__im__27);
#line 1499
c_rt_lib0clear(&___nl__im__28);
#line 1499
c_rt_lib0clear(&___nl__im__29);
#line 1499
c_rt_lib0clear(&___nl__im__43);
#line 1499
c_rt_lib0clear(&___nl__im__44);
#line 1499
c_rt_lib0clear(&___nl__im__45);
#line 1499
return ___nl__im__46;
#line 1500
goto label_1;
#line 1500
label_14:
;
#line 1501
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 1501
c_rt_lib0clear(&___nl__im__0);
#line 1501
c_rt_lib0clear(&___nl__im__1);
#line 1501
//clear ___nl__bool__2;
#line 1501
c_rt_lib0clear(&___nl__im__3);
#line 1501
c_rt_lib0clear(&___nl__im__4);
#line 1501
c_rt_lib0clear(&___nl__im__5);
#line 1501
c_rt_lib0clear(&___nl__im__6);
#line 1501
c_rt_lib0clear(&___nl__im__7);
#line 1501
c_rt_lib0clear(&___nl__im__8);
#line 1501
c_rt_lib0clear(&___nl__im__9);
#line 1501
c_rt_lib0clear(&___nl__im__10);
#line 1501
c_rt_lib0clear(&___nl__im__11);
#line 1501
c_rt_lib0clear(&___nl__im__12);
#line 1501
c_rt_lib0clear(&___nl__im__13);
#line 1501
c_rt_lib0clear(&___nl__im__14);
#line 1501
c_rt_lib0clear(&___nl__im__15);
#line 1501
c_rt_lib0clear(&___nl__im__16);
#line 1501
c_rt_lib0clear(&___nl__im__17);
#line 1501
c_rt_lib0clear(&___nl__im__18);
#line 1501
c_rt_lib0clear(&___nl__im__19);
#line 1501
c_rt_lib0clear(&___nl__im__20);
#line 1501
c_rt_lib0clear(&___nl__im__21);
#line 1501
c_rt_lib0clear(&___nl__im__22);
#line 1501
c_rt_lib0clear(&___nl__im__23);
#line 1501
c_rt_lib0clear(&___nl__im__24);
#line 1501
c_rt_lib0clear(&___nl__im__25);
#line 1501
c_rt_lib0clear(&___nl__im__26);
#line 1501
c_rt_lib0clear(&___nl__im__27);
#line 1501
c_rt_lib0clear(&___nl__im__28);
#line 1501
c_rt_lib0clear(&___nl__im__29);
#line 1501
c_rt_lib0clear(&___nl__im__43);
#line 1501
c_rt_lib0clear(&___nl__im__44);
#line 1501
c_rt_lib0clear(&___nl__im__45);
#line 1501
c_rt_lib0clear(&___nl__im__46);
#line 1501
return ___nl__im__47;
#line 1502
goto label_1;
#line 1502
label_15:
;
#line 1503
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1503
c_rt_lib0clear(&___nl__im__0);
#line 1503
c_rt_lib0clear(&___nl__im__1);
#line 1503
//clear ___nl__bool__2;
#line 1503
c_rt_lib0clear(&___nl__im__3);
#line 1503
c_rt_lib0clear(&___nl__im__4);
#line 1503
c_rt_lib0clear(&___nl__im__5);
#line 1503
c_rt_lib0clear(&___nl__im__6);
#line 1503
c_rt_lib0clear(&___nl__im__7);
#line 1503
c_rt_lib0clear(&___nl__im__8);
#line 1503
c_rt_lib0clear(&___nl__im__9);
#line 1503
c_rt_lib0clear(&___nl__im__10);
#line 1503
c_rt_lib0clear(&___nl__im__11);
#line 1503
c_rt_lib0clear(&___nl__im__12);
#line 1503
c_rt_lib0clear(&___nl__im__13);
#line 1503
c_rt_lib0clear(&___nl__im__14);
#line 1503
c_rt_lib0clear(&___nl__im__15);
#line 1503
c_rt_lib0clear(&___nl__im__16);
#line 1503
c_rt_lib0clear(&___nl__im__17);
#line 1503
c_rt_lib0clear(&___nl__im__18);
#line 1503
c_rt_lib0clear(&___nl__im__19);
#line 1503
c_rt_lib0clear(&___nl__im__20);
#line 1503
c_rt_lib0clear(&___nl__im__21);
#line 1503
c_rt_lib0clear(&___nl__im__22);
#line 1503
c_rt_lib0clear(&___nl__im__23);
#line 1503
c_rt_lib0clear(&___nl__im__24);
#line 1503
c_rt_lib0clear(&___nl__im__25);
#line 1503
c_rt_lib0clear(&___nl__im__26);
#line 1503
c_rt_lib0clear(&___nl__im__27);
#line 1503
c_rt_lib0clear(&___nl__im__28);
#line 1503
c_rt_lib0clear(&___nl__im__29);
#line 1503
c_rt_lib0clear(&___nl__im__43);
#line 1503
c_rt_lib0clear(&___nl__im__44);
#line 1503
c_rt_lib0clear(&___nl__im__45);
#line 1503
c_rt_lib0clear(&___nl__im__46);
#line 1503
c_rt_lib0clear(&___nl__im__47);
#line 1503
return ___nl__im__48;
#line 1504
goto label_1;
#line 1504
label_16:
;
#line 1505
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(0));
#line 1505
nl_die_arg(___nl__im__49);
#line 1506
goto label_1;
#line 1506
label_17:
;
#line 1507
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_none(___get_global_const(328)));
#line 1507
c_rt_lib0clear(&___nl__im__0);
#line 1507
c_rt_lib0clear(&___nl__im__1);
#line 1507
//clear ___nl__bool__2;
#line 1507
c_rt_lib0clear(&___nl__im__3);
#line 1507
c_rt_lib0clear(&___nl__im__4);
#line 1507
c_rt_lib0clear(&___nl__im__5);
#line 1507
c_rt_lib0clear(&___nl__im__6);
#line 1507
c_rt_lib0clear(&___nl__im__7);
#line 1507
c_rt_lib0clear(&___nl__im__8);
#line 1507
c_rt_lib0clear(&___nl__im__9);
#line 1507
c_rt_lib0clear(&___nl__im__10);
#line 1507
c_rt_lib0clear(&___nl__im__11);
#line 1507
c_rt_lib0clear(&___nl__im__12);
#line 1507
c_rt_lib0clear(&___nl__im__13);
#line 1507
c_rt_lib0clear(&___nl__im__14);
#line 1507
c_rt_lib0clear(&___nl__im__15);
#line 1507
c_rt_lib0clear(&___nl__im__16);
#line 1507
c_rt_lib0clear(&___nl__im__17);
#line 1507
c_rt_lib0clear(&___nl__im__18);
#line 1507
c_rt_lib0clear(&___nl__im__19);
#line 1507
c_rt_lib0clear(&___nl__im__20);
#line 1507
c_rt_lib0clear(&___nl__im__21);
#line 1507
c_rt_lib0clear(&___nl__im__22);
#line 1507
c_rt_lib0clear(&___nl__im__23);
#line 1507
c_rt_lib0clear(&___nl__im__24);
#line 1507
c_rt_lib0clear(&___nl__im__25);
#line 1507
c_rt_lib0clear(&___nl__im__26);
#line 1507
c_rt_lib0clear(&___nl__im__27);
#line 1507
c_rt_lib0clear(&___nl__im__28);
#line 1507
c_rt_lib0clear(&___nl__im__29);
#line 1507
c_rt_lib0clear(&___nl__im__43);
#line 1507
c_rt_lib0clear(&___nl__im__44);
#line 1507
c_rt_lib0clear(&___nl__im__45);
#line 1507
c_rt_lib0clear(&___nl__im__46);
#line 1507
c_rt_lib0clear(&___nl__im__47);
#line 1507
c_rt_lib0clear(&___nl__im__48);
#line 1507
c_rt_lib0clear(&___nl__im__49);
#line 1507
return ___nl__im__50;
#line 1508
goto label_1;
#line 1508
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
#line 1512
___nl__im_ptr__3 = &((*___ref___rec__2).debug0field);
#line 1512
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(220)));
#line 1512
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1512
c_rt_lib0hash_set_value_dec(___nl__im_ptr__3, ___get_global_const(504), ___nl__im__4);
#line 1512
___nl__im_ptr__3 = NULL;
#line 1512
c_rt_lib0clear(&___nl__im__4);
#line 1512
c_rt_lib0clear(&___nl__im__5);
#line 1513
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1513
___nl__im_ptr__10 = &((*___ref___rec__2).logic0field);
#line 1513
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1513
___nl__im_ptr__10 = NULL;
#line 1513
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_const(387)));
#line 1513
c_rt_lib0clear(&___nl__im__9);
#line 1513
___nl__bool__6 = tct0is_own_type(___nl__im__7, ___nl__im__8);
#line 1513
c_rt_lib0clear(&___nl__im__7);
#line 1513
c_rt_lib0clear(&___nl__im__8);
#line 1513
___nl__bool__6 = !___nl__bool__6;
#line 1513
___nl__bool__6 = !___nl__bool__6;
#line 1513
if(___nl__bool__6){ goto label_2;}
#line 1514
___nl__im_ptr__11 = &((*___ref___rec__2).logic0field);
#line 1514
c_rt_lib0move(&___nl__im__12,___get_global_const(1225));
#line 1514
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___nl__im_ptr__11), ___nl__im__12));
#line 1514
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_const(217)));
#line 1514
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1514
c_rt_lib0clear(&___nl__im__15);
#line 1514
___nl__bool__16 = false;
#line 1514
c_rt_lib0move(&___nl__im__13, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 1514
c_rt_lib0array_set(&___nl__im__12, ___nl__int__14, ___nl__im__13);
#line 1514
c_rt_lib0move(&___nl__string__17,___get_global_const(1225));
#line 1514
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__11, ___nl__string__17, ___nl__im__12));
#line 1514
___nl__im_ptr__11 = NULL;
#line 1514
c_rt_lib0clear(&___nl__im__12);
#line 1514
c_rt_lib0clear(&___nl__im__13);
#line 1514
//clear ___nl__int__14;
#line 1514
//clear ___nl__bool__16;
#line 1514
c_rt_lib0clear(&___nl__string__17);
#line 1515
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 1516
c_rt_lib0clear(&___nl__im__0);
#line 1516
c_rt_lib0clear(&___nl__im__1);
#line 1516
//clear ___nl__bool__6;
#line 1516
return NULL;
#line 1517
goto label_1;
#line 1517
label_2:
;
#line 1517
label_1:
;
#line 1517
//clear ___nl__bool__6;
#line 1518
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(218)));
#line 1518
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(221));
#line 1518
if(___nl__bool__19){ goto label_4;}
#line 1520
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(526));
#line 1520
if(___nl__bool__19){ goto label_5;}
#line 1522
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(902));
#line 1522
if(___nl__bool__19){ goto label_6;}
#line 1524
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(903));
#line 1524
if(___nl__bool__19){ goto label_7;}
#line 1526
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(516));
#line 1526
if(___nl__bool__19){ goto label_8;}
#line 1548
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(462));
#line 1548
if(___nl__bool__19){ goto label_9;}
#line 1550
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(900));
#line 1550
if(___nl__bool__19){ goto label_10;}
#line 1552
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(233));
#line 1552
if(___nl__bool__19){ goto label_11;}
#line 1554
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(904));
#line 1554
if(___nl__bool__19){ goto label_12;}
#line 1556
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(861));
#line 1556
if(___nl__bool__19){ goto label_13;}
#line 1558
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(229));
#line 1558
if(___nl__bool__19){ goto label_14;}
#line 1567
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(230));
#line 1567
if(___nl__bool__19){ goto label_15;}
#line 1590
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(881));
#line 1590
if(___nl__bool__19){ goto label_16;}
#line 1592
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(905));
#line 1592
if(___nl__bool__19){ goto label_17;}
#line 1594
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(906));
#line 1594
if(___nl__bool__19){ goto label_18;}
#line 1596
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__18, ___get_global_const(907));
#line 1596
if(___nl__bool__19){ goto label_19;}
#line 1596
c_rt_lib0move(&___nl__im__20,___get_global_const(16));
#line 1596
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(2, ___nl__im__20, ___nl__im__18));
#line 1596
nl_die_arg(___nl__im__20);
#line 1518
label_4:
;
#line 1518
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(221)));
#line 1518
___nl__int__21 = getIntFromImm(___nl__im__22);
#line 1519
c_rt_lib0move(&___nl__im__23, c_rt_lib0int_new(___nl__int__21));
#line 1519
c_rt_lib0delete(translator_priv0load_const(___nl__im__23, ___nl__im__1, ___ref___rec__2));
#line 1519
c_rt_lib0clear(&___nl__im__23);
#line 1520
goto label_3;
#line 1520
label_5:
;
#line 1520
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(526)));
#line 1520
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1521
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 1521
nl_die_arg(___nl__im__26);
#line 1522
goto label_3;
#line 1522
label_6:
;
#line 1522
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(902)));
#line 1522
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 1523
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1523
nl_die_arg(___nl__im__29);
#line 1524
goto label_3;
#line 1524
label_7:
;
#line 1524
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(903)));
#line 1524
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 1525
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 1525
nl_die_arg(___nl__im__32);
#line 1526
goto label_3;
#line 1526
label_8:
;
#line 1526
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(516)));
#line 1526
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 1529
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(462)));
#line 1529
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_const(218)));
#line 1529
c_rt_lib0clear(&___nl__im__39);
#line 1529
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_const(881));
#line 1529
c_rt_lib0clear(&___nl__im__38);
#line 1529
___nl__bool__37 = !___nl__bool__37;
#line 1529
if(___nl__bool__37){ goto label_21;}
#line 1530
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_none(___get_global_const(327)));
#line 1531
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_const(8)));
#line 1532
goto label_20;
#line 1532
label_21:
;
#line 1533
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1533
___nl__im_ptr__45 = &((*___ref___rec__2).logic0field);
#line 1533
c_rt_lib0copy(&___nl__im__44, (*___nl__im_ptr__45));
#line 1533
___nl__im_ptr__45 = NULL;
#line 1533
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_const(387)));
#line 1533
c_rt_lib0clear(&___nl__im__44);
#line 1533
c_rt_lib0move(&___nl__im__41, translator_priv0unwrap_ref(___nl__im__42, ___nl__im__43));
#line 1533
c_rt_lib0clear(&___nl__im__42);
#line 1533
c_rt_lib0clear(&___nl__im__43);
#line 1533
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1533
___nl__im_ptr__50 = &((*___ref___rec__2).logic0field);
#line 1533
c_rt_lib0copy(&___nl__im__49, (*___nl__im_ptr__50));
#line 1533
___nl__im_ptr__50 = NULL;
#line 1533
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_const(387)));
#line 1533
c_rt_lib0clear(&___nl__im__49);
#line 1533
c_rt_lib0move(&___nl__im__46, translator_priv0unwrap_ref(___nl__im__47, ___nl__im__48));
#line 1533
c_rt_lib0clear(&___nl__im__47);
#line 1533
c_rt_lib0clear(&___nl__im__48);
#line 1533
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__46, ___get_global_const(14)));
#line 1533
c_rt_lib0clear(&___nl__im__41);
#line 1533
c_rt_lib0clear(&___nl__im__46);
#line 1534
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(166)));
#line 1534
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value(___nl__im__40, ___nl__im__52));
#line 1534
c_rt_lib0clear(&___nl__im__52);
#line 1534
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(166)));
#line 1534
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value(___nl__im__40, ___nl__im__54));
#line 1534
c_rt_lib0clear(&___nl__im__54);
#line 1534
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__53, ___get_global_const(28)));
#line 1534
c_rt_lib0clear(&___nl__im__51);
#line 1534
c_rt_lib0clear(&___nl__im__53);
#line 1536
___nl__im_ptr__59 = &((*___ref___rec__2).logic0field);
#line 1536
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 1536
___nl__im_ptr__59 = NULL;
#line 1536
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_const(387)));
#line 1536
c_rt_lib0clear(&___nl__im__58);
#line 1536
c_rt_lib0move(&___nl__im__56, translator_priv0var_type_to_reg_type(___nl__im__36, ___nl__im__57));
#line 1536
c_rt_lib0clear(&___nl__im__57);
#line 1536
c_rt_lib0move(&___nl__im__55, translator_priv0new_register(___ref___rec__2, ___nl__im__56));
#line 1536
c_rt_lib0clear(&___nl__im__56);
#line 1537
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(462)));
#line 1537
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__60, ___nl__im__55, ___ref___rec__2));
#line 1537
c_rt_lib0clear(&___nl__im__60);
#line 1538
___nl__im_ptr__61 = &((*___ref___rec__2).logic0field);
#line 1538
c_rt_lib0move(&___nl__im__62,___get_global_const(1225));
#line 1538
c_rt_lib0move(&___nl__im__62, c_rt_lib0get_ref_hash((*___nl__im_ptr__61), ___nl__im__62));
#line 1538
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_const(217)));
#line 1538
___nl__int__64 = getIntFromImm(___nl__im__65);
#line 1538
c_rt_lib0clear(&___nl__im__65);
#line 1538
___nl__bool__66 = false;
#line 1538
c_rt_lib0move(&___nl__im__63, c_rt_lib0bool_to_nl_native(___nl__bool__66));
#line 1538
c_rt_lib0array_set(&___nl__im__62, ___nl__int__64, ___nl__im__63);
#line 1538
c_rt_lib0move(&___nl__string__67,___get_global_const(1225));
#line 1538
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__61, ___nl__string__67, ___nl__im__62));
#line 1538
___nl__im_ptr__61 = NULL;
#line 1538
c_rt_lib0clear(&___nl__im__62);
#line 1538
c_rt_lib0clear(&___nl__im__63);
#line 1538
//clear ___nl__int__64;
#line 1538
//clear ___nl__bool__66;
#line 1538
c_rt_lib0clear(&___nl__string__67);
#line 1539
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_const(276), ___nl__im__55));
#line 1540
goto label_20;
#line 1540
label_20:
;
#line 1540
//clear ___nl__bool__37;
#line 1540
c_rt_lib0clear(&___nl__im__40);
#line 1540
c_rt_lib0clear(&___nl__im__55);
#line 1544
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(166)));
#line 1545
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1545
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__33, ___get_global_const(166)));
#line 1545
___nl__int__71 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__72, ___nl__im__73);
#line 1545
c_rt_lib0clear(&___nl__im__72);
#line 1545
c_rt_lib0clear(&___nl__im__73);
#line 1545
c_rt_lib0move(&___nl__im__74, c_rt_lib0int_new(___nl__int__71));
#line 1545
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_mk(5, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__35, ___get_global_const(533), ___nl__im__70, ___get_global_const(520), ___nl__im__74, ___get_global_const(538), ___nl__im__36));
#line 1545
c_rt_lib0clear(&___nl__im__70);
#line 1545
//clear ___nl__int__71;
#line 1545
c_rt_lib0clear(&___nl__im__74);
#line 1545
c_rt_lib0move(&___nl__im__68, c_rt_lib0ov_mk_arg(___get_global_const(244), ___nl__im__69));
#line 1545
c_rt_lib0clear(&___nl__im__69);
#line 1545
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__68));
#line 1545
c_rt_lib0clear(&___nl__im__68);
#line 1548
goto label_3;
#line 1548
label_9:
;
#line 1548
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(462)));
#line 1548
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 1549
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_mk(0));
#line 1549
nl_die_arg(___nl__im__77);
#line 1550
goto label_3;
#line 1550
label_10:
;
#line 1550
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(900)));
#line 1550
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 1551
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_mk(0));
#line 1551
nl_die_arg(___nl__im__80);
#line 1552
goto label_3;
#line 1552
label_11:
;
#line 1552
c_rt_lib0move(&___nl__im__82, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(233)));
#line 1552
c_rt_lib0copy(&___nl__im__81, ___nl__im__82);
#line 1553
c_rt_lib0move(&___nl__im__83, c_rt_lib0array_mk(0));
#line 1553
nl_die_arg(___nl__im__83);
#line 1554
goto label_3;
#line 1554
label_12:
;
#line 1554
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(904)));
#line 1554
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1555
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(0));
#line 1555
nl_die_arg(___nl__im__86);
#line 1556
goto label_3;
#line 1556
label_13:
;
#line 1556
c_rt_lib0move(&___nl__im__88, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(861)));
#line 1556
c_rt_lib0copy(&___nl__im__87, ___nl__im__88);
#line 1557
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(0));
#line 1557
nl_die_arg(___nl__im__89);
#line 1558
goto label_3;
#line 1558
label_14:
;
#line 1558
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(229)));
#line 1558
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 1559
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_mk(0));
#line 1559
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__94));
#line 1559
c_rt_lib0clear(&___nl__im__94);
#line 1559
c_rt_lib0move(&___nl__im__92, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__im__93));
#line 1559
c_rt_lib0clear(&___nl__im__93);
#line 1559
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__92));
#line 1559
c_rt_lib0clear(&___nl__im__92);
#line 1560
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1560
___nl__im_ptr__100 = &((*___ref___rec__2).logic0field);
#line 1560
c_rt_lib0copy(&___nl__im__99, (*___nl__im_ptr__100));
#line 1560
___nl__im_ptr__100 = NULL;
#line 1560
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_const(387)));
#line 1560
c_rt_lib0clear(&___nl__im__99);
#line 1560
c_rt_lib0move(&___nl__im__96, translator_priv0unwrap_ref(___nl__im__97, ___nl__im__98));
#line 1560
c_rt_lib0clear(&___nl__im__97);
#line 1560
c_rt_lib0clear(&___nl__im__98);
#line 1560
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1560
___nl__im_ptr__105 = &((*___ref___rec__2).logic0field);
#line 1560
c_rt_lib0copy(&___nl__im__104, (*___nl__im_ptr__105));
#line 1560
___nl__im_ptr__105 = NULL;
#line 1560
c_rt_lib0move(&___nl__im__103, c_rt_lib0hash_get_value_dec(___nl__im__104, ___get_global_const(387)));
#line 1560
c_rt_lib0clear(&___nl__im__104);
#line 1560
c_rt_lib0move(&___nl__im__101, translator_priv0unwrap_ref(___nl__im__102, ___nl__im__103));
#line 1560
c_rt_lib0clear(&___nl__im__102);
#line 1560
c_rt_lib0clear(&___nl__im__103);
#line 1560
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__101, ___get_global_const(2)));
#line 1560
c_rt_lib0clear(&___nl__im__96);
#line 1560
c_rt_lib0clear(&___nl__im__101);
#line 1561
___nl__int__107 = 0;
#line 1561
___nl__int__108 = 1;
#line 1561
___nl__int__109 = c_rt_lib0array_len(___nl__im__90);
#line 1561
label_24:
;
#line 1561
___nl__int__111 = ___nl__int__107 >= ___nl__int__109;
#line 1561
___nl__bool__110 = ___nl__int__111;
#line 1561
if(___nl__bool__110){ goto label_22;}
#line 1561
c_rt_lib0move(&___nl__im__112, c_rt_lib0array_get(___nl__im__90, ___nl__int__107));
#line 1561
c_rt_lib0copy(&___nl__im__106, ___nl__im__112);
#line 1563
___nl__im_ptr__117 = &((*___ref___rec__2).logic0field);
#line 1563
c_rt_lib0copy(&___nl__im__116, (*___nl__im_ptr__117));
#line 1563
___nl__im_ptr__117 = NULL;
#line 1563
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_const(387)));
#line 1563
c_rt_lib0clear(&___nl__im__116);
#line 1563
c_rt_lib0move(&___nl__im__114, translator_priv0var_type_to_reg_type(___nl__im__95, ___nl__im__115));
#line 1563
c_rt_lib0clear(&___nl__im__115);
#line 1563
c_rt_lib0move(&___nl__im__113, translator_priv0new_register(___ref___rec__2, ___nl__im__114));
#line 1563
c_rt_lib0clear(&___nl__im__114);
#line 1564
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__106, ___nl__im__113, ___ref___rec__2));
#line 1565
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__113, ___ref___rec__2));
#line 1565
c_rt_lib0clear(&___nl__im__106);
#line 1565
label_23:
;
#line 1566
___nl__int__107 = ___nl__int__107 + ___nl__int__108;
#line 1566
goto label_24;
#line 1566
label_22:
;
#line 1567
goto label_3;
#line 1567
label_15:
;
#line 1567
c_rt_lib0move(&___nl__im__119, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(230)));
#line 1567
c_rt_lib0copy(&___nl__im__118, ___nl__im__119);
#line 1568
c_rt_lib0move(&___nl__im__121, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_const(204)));
#line 1568
___nl__im_ptr__124 = &((*___ref___rec__2).logic0field);
#line 1568
c_rt_lib0copy(&___nl__im__123, (*___nl__im_ptr__124));
#line 1568
___nl__im_ptr__124 = NULL;
#line 1568
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_const(387)));
#line 1568
c_rt_lib0clear(&___nl__im__123);
#line 1568
c_rt_lib0move(&___nl__im__120, translator_priv0unwrap_ref(___nl__im__121, ___nl__im__122));
#line 1568
c_rt_lib0clear(&___nl__im__121);
#line 1568
c_rt_lib0clear(&___nl__im__122);
#line 1569
c_rt_lib0move(&___nl__im__127, c_rt_lib0array_mk(0));
#line 1569
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_mk(2, ___get_global_const(222), ___nl__im__1, ___get_global_const(75), ___nl__im__127));
#line 1569
c_rt_lib0clear(&___nl__im__127);
#line 1569
c_rt_lib0move(&___nl__im__125, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__im__126));
#line 1569
c_rt_lib0clear(&___nl__im__126);
#line 1569
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__125));
#line 1569
c_rt_lib0clear(&___nl__im__125);
#line 1570
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__120, ___get_global_const(6));
#line 1570
___nl__bool__128 = !___nl__bool__128;
#line 1570
if(___nl__bool__128){ goto label_26;}
#line 1571
___nl__int__130 = 0;
#line 1571
___nl__int__131 = 1;
#line 1571
___nl__int__132 = c_rt_lib0array_len(___nl__im__118);
#line 1571
label_29:
;
#line 1571
___nl__int__134 = ___nl__int__130 >= ___nl__int__132;
#line 1571
___nl__bool__133 = ___nl__int__134;
#line 1571
if(___nl__bool__133){ goto label_27;}
#line 1571
c_rt_lib0move(&___nl__im__135, c_rt_lib0array_get(___nl__im__118, ___nl__int__130));
#line 1571
c_rt_lib0copy(&___nl__im__129, ___nl__im__135);
#line 1572
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(223)));
#line 1572
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__139, ___get_global_const(204)));
#line 1572
c_rt_lib0clear(&___nl__im__139);
#line 1572
___nl__im_ptr__142 = &((*___ref___rec__2).logic0field);
#line 1572
c_rt_lib0copy(&___nl__im__141, (*___nl__im_ptr__142));
#line 1572
___nl__im_ptr__142 = NULL;
#line 1572
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__141, ___get_global_const(387)));
#line 1572
c_rt_lib0clear(&___nl__im__141);
#line 1572
c_rt_lib0move(&___nl__im__137, translator_priv0var_type_to_reg_type(___nl__im__138, ___nl__im__140));
#line 1572
c_rt_lib0clear(&___nl__im__138);
#line 1572
c_rt_lib0clear(&___nl__im__140);
#line 1572
c_rt_lib0move(&___nl__im__136, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__137));
#line 1572
c_rt_lib0clear(&___nl__im__137);
#line 1573
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(370)));
#line 1573
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__145, ___get_global_const(218)));
#line 1573
c_rt_lib0clear(&___nl__im__145);
#line 1573
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(370)));
#line 1573
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__147, ___get_global_const(218)));
#line 1573
c_rt_lib0clear(&___nl__im__147);
#line 1573
c_rt_lib0move(&___nl__im__143, c_rt_lib0priv_as(___nl__im__146, ___get_global_const(903)));
#line 1573
c_rt_lib0clear(&___nl__im__144);
#line 1573
c_rt_lib0clear(&___nl__im__146);
#line 1574
c_rt_lib0delete(translator_priv0use_field(___nl__im__136, ___nl__im__1, ___nl__im__143, ___ref___rec__2));
#line 1575
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__129, ___get_global_const(223)));
#line 1575
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__148, ___nl__im__136, ___ref___rec__2));
#line 1575
c_rt_lib0clear(&___nl__im__148);
#line 1576
c_rt_lib0delete(translator_priv0release_field(___nl__im__136, ___nl__im__1, ___nl__im__143, ___ref___rec__2));
#line 1576
c_rt_lib0clear(&___nl__im__129);
#line 1576
label_28:
;
#line 1577
___nl__int__130 = ___nl__int__130 + ___nl__int__131;
#line 1577
goto label_29;
#line 1577
label_27:
;
#line 1578
goto label_25;
#line 1578
label_26:
;
#line 1578
___nl__bool__128 = c_rt_lib0priv_is(___nl__im__120, ___get_global_const(4));
#line 1578
___nl__bool__128 = !___nl__bool__128;
#line 1578
if(___nl__bool__128){ goto label_30;}
#line 1579
___nl__int__150 = 0;
#line 1579
___nl__int__151 = 1;
#line 1579
___nl__int__152 = c_rt_lib0array_len(___nl__im__118);
#line 1579
label_33:
;
#line 1579
___nl__int__154 = ___nl__int__150 >= ___nl__int__152;
#line 1579
___nl__bool__153 = ___nl__int__154;
#line 1579
if(___nl__bool__153){ goto label_31;}
#line 1579
c_rt_lib0move(&___nl__im__155, c_rt_lib0array_get(___nl__im__118, ___nl__int__150));
#line 1579
c_rt_lib0copy(&___nl__im__149, ___nl__im__155);
#line 1580
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(223)));
#line 1580
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_get_value_dec(___nl__im__159, ___get_global_const(204)));
#line 1580
c_rt_lib0clear(&___nl__im__159);
#line 1580
___nl__im_ptr__162 = &((*___ref___rec__2).logic0field);
#line 1580
c_rt_lib0copy(&___nl__im__161, (*___nl__im_ptr__162));
#line 1580
___nl__im_ptr__162 = NULL;
#line 1580
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__161, ___get_global_const(387)));
#line 1580
c_rt_lib0clear(&___nl__im__161);
#line 1580
c_rt_lib0move(&___nl__im__157, translator_priv0var_type_to_reg_type(___nl__im__158, ___nl__im__160));
#line 1580
c_rt_lib0clear(&___nl__im__158);
#line 1580
c_rt_lib0clear(&___nl__im__160);
#line 1580
c_rt_lib0move(&___nl__im__156, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__157));
#line 1580
c_rt_lib0clear(&___nl__im__157);
#line 1581
c_rt_lib0move(&___nl__im__164, c_rt_lib0ov_mk_none(___get_global_const(526)));
#line 1581
c_rt_lib0move(&___nl__im__163, translator_priv0new_register(___ref___rec__2, ___nl__im__164));
#line 1581
c_rt_lib0clear(&___nl__im__164);
#line 1582
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(370)));
#line 1582
c_rt_lib0move(&___nl__im__166, c_rt_lib0hash_get_value_dec(___nl__im__167, ___get_global_const(218)));
#line 1582
c_rt_lib0clear(&___nl__im__167);
#line 1582
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(370)));
#line 1582
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__169, ___get_global_const(218)));
#line 1582
c_rt_lib0clear(&___nl__im__169);
#line 1582
c_rt_lib0move(&___nl__im__165, c_rt_lib0priv_as(___nl__im__168, ___get_global_const(903)));
#line 1582
c_rt_lib0clear(&___nl__im__166);
#line 1582
c_rt_lib0clear(&___nl__im__168);
#line 1582
c_rt_lib0delete(translator_priv0load_const(___nl__im__165, ___nl__im__163, ___ref___rec__2));
#line 1582
c_rt_lib0clear(&___nl__im__165);
#line 1583
___nl__bool__170 = true;
#line 1583
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__156, ___nl__im__1, ___nl__im__163, ___nl__bool__170, ___ref___rec__2));
#line 1583
//clear ___nl__bool__170;
#line 1584
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_const(223)));
#line 1584
c_rt_lib0delete(translator_priv0print_own_val_init(___nl__im__171, ___nl__im__156, ___ref___rec__2));
#line 1584
c_rt_lib0clear(&___nl__im__171);
#line 1585
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__156, ___nl__im__1, ___nl__im__163, ___ref___rec__2));
#line 1585
c_rt_lib0clear(&___nl__im__149);
#line 1585
label_32:
;
#line 1586
___nl__int__150 = ___nl__int__150 + ___nl__int__151;
#line 1586
goto label_33;
#line 1586
label_31:
;
#line 1587
goto label_25;
#line 1587
label_30:
;
#line 1588
c_rt_lib0move(&___nl__im__172, c_rt_lib0array_mk(0));
#line 1588
nl_die_arg(___nl__im__172);
#line 1589
goto label_25;
#line 1589
label_25:
;
#line 1589
//clear ___nl__bool__128;
#line 1589
c_rt_lib0clear(&___nl__im__129);
#line 1589
//clear ___nl__int__130;
#line 1589
//clear ___nl__int__131;
#line 1589
//clear ___nl__int__132;
#line 1589
//clear ___nl__bool__133;
#line 1589
//clear ___nl__int__134;
#line 1589
c_rt_lib0clear(&___nl__im__135);
#line 1589
c_rt_lib0clear(&___nl__im__136);
#line 1589
c_rt_lib0clear(&___nl__im__143);
#line 1589
c_rt_lib0clear(&___nl__im__149);
#line 1589
//clear ___nl__int__150;
#line 1589
//clear ___nl__int__151;
#line 1589
//clear ___nl__int__152;
#line 1589
//clear ___nl__bool__153;
#line 1589
//clear ___nl__int__154;
#line 1589
c_rt_lib0clear(&___nl__im__155);
#line 1589
c_rt_lib0clear(&___nl__im__156);
#line 1589
c_rt_lib0clear(&___nl__im__163);
#line 1589
c_rt_lib0clear(&___nl__im__172);
#line 1590
goto label_3;
#line 1590
label_16:
;
#line 1591
c_rt_lib0move(&___nl__im__173, c_rt_lib0array_mk(0));
#line 1591
nl_die_arg(___nl__im__173);
#line 1592
goto label_3;
#line 1592
label_17:
;
#line 1592
c_rt_lib0move(&___nl__im__175, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(905)));
#line 1592
c_rt_lib0copy(&___nl__im__174, ___nl__im__175);
#line 1593
c_rt_lib0move(&___nl__im__176, c_rt_lib0array_mk(0));
#line 1593
nl_die_arg(___nl__im__176);
#line 1594
goto label_3;
#line 1594
label_18:
;
#line 1594
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(906)));
#line 1594
c_rt_lib0copy(&___nl__im__177, ___nl__im__178);
#line 1595
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_mk(0));
#line 1595
nl_die_arg(___nl__im__179);
#line 1596
goto label_3;
#line 1596
label_19:
;
#line 1596
c_rt_lib0move(&___nl__im__181, c_rt_lib0priv_as(___nl__im__18, ___get_global_const(907)));
#line 1596
c_rt_lib0copy(&___nl__im__180, ___nl__im__181);
#line 1597
c_rt_lib0move(&___nl__im__182, c_rt_lib0array_mk(0));
#line 1597
nl_die_arg(___nl__im__182);
#line 1598
goto label_3;
#line 1598
label_3:
;
#line 1598
c_rt_lib0clear(&___nl__im__0);
#line 1598
c_rt_lib0clear(&___nl__im__1);
#line 1598
c_rt_lib0clear(&___nl__im__18);
#line 1598
//clear ___nl__bool__19;
#line 1598
c_rt_lib0clear(&___nl__im__20);
#line 1598
//clear ___nl__int__21;
#line 1598
c_rt_lib0clear(&___nl__im__22);
#line 1598
c_rt_lib0clear(&___nl__im__24);
#line 1598
c_rt_lib0clear(&___nl__im__25);
#line 1598
c_rt_lib0clear(&___nl__im__26);
#line 1598
c_rt_lib0clear(&___nl__im__27);
#line 1598
c_rt_lib0clear(&___nl__im__28);
#line 1598
c_rt_lib0clear(&___nl__im__29);
#line 1598
c_rt_lib0clear(&___nl__im__30);
#line 1598
c_rt_lib0clear(&___nl__im__31);
#line 1598
c_rt_lib0clear(&___nl__im__32);
#line 1598
c_rt_lib0clear(&___nl__im__33);
#line 1598
c_rt_lib0clear(&___nl__im__34);
#line 1598
c_rt_lib0clear(&___nl__im__35);
#line 1598
c_rt_lib0clear(&___nl__im__36);
#line 1598
c_rt_lib0clear(&___nl__im__75);
#line 1598
c_rt_lib0clear(&___nl__im__76);
#line 1598
c_rt_lib0clear(&___nl__im__77);
#line 1598
c_rt_lib0clear(&___nl__im__78);
#line 1598
c_rt_lib0clear(&___nl__im__79);
#line 1598
c_rt_lib0clear(&___nl__im__80);
#line 1598
c_rt_lib0clear(&___nl__im__81);
#line 1598
c_rt_lib0clear(&___nl__im__82);
#line 1598
c_rt_lib0clear(&___nl__im__83);
#line 1598
c_rt_lib0clear(&___nl__im__84);
#line 1598
c_rt_lib0clear(&___nl__im__85);
#line 1598
c_rt_lib0clear(&___nl__im__86);
#line 1598
c_rt_lib0clear(&___nl__im__87);
#line 1598
c_rt_lib0clear(&___nl__im__88);
#line 1598
c_rt_lib0clear(&___nl__im__89);
#line 1598
c_rt_lib0clear(&___nl__im__90);
#line 1598
c_rt_lib0clear(&___nl__im__91);
#line 1598
c_rt_lib0clear(&___nl__im__95);
#line 1598
c_rt_lib0clear(&___nl__im__106);
#line 1598
//clear ___nl__int__107;
#line 1598
//clear ___nl__int__108;
#line 1598
//clear ___nl__int__109;
#line 1598
//clear ___nl__bool__110;
#line 1598
//clear ___nl__int__111;
#line 1598
c_rt_lib0clear(&___nl__im__112);
#line 1598
c_rt_lib0clear(&___nl__im__113);
#line 1598
c_rt_lib0clear(&___nl__im__118);
#line 1598
c_rt_lib0clear(&___nl__im__119);
#line 1598
c_rt_lib0clear(&___nl__im__120);
#line 1598
c_rt_lib0clear(&___nl__im__173);
#line 1598
c_rt_lib0clear(&___nl__im__174);
#line 1598
c_rt_lib0clear(&___nl__im__175);
#line 1598
c_rt_lib0clear(&___nl__im__176);
#line 1598
c_rt_lib0clear(&___nl__im__177);
#line 1598
c_rt_lib0clear(&___nl__im__178);
#line 1598
c_rt_lib0clear(&___nl__im__179);
#line 1598
c_rt_lib0clear(&___nl__im__180);
#line 1598
c_rt_lib0clear(&___nl__im__181);
#line 1598
c_rt_lib0clear(&___nl__im__182);
#line 1598
return NULL;
}

tct0meta_type0type translator_priv0unwrap_ref(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 1602
label_2:
;
#line 1602
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_const(7));
#line 1602
___nl__bool__2 = !___nl__bool__2;
#line 1602
if(___nl__bool__2){ goto label_1;}
#line 1603
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_const(7)));
#line 1604
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__3));
#line 1604
c_rt_lib0clear(&___nl__im__3);
#line 1605
goto label_2;
#line 1605
label_1:
;
#line 1606
c_rt_lib0clear(&___nl__im__1);
#line 1606
//clear ___nl__bool__2;
#line 1606
c_rt_lib0clear(&___nl__im__3);
#line 1606
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
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
#line 1610
___nl__int__3 = 0;
#line 1611
___nl__im_ptr__7 = &((*___ref___rec__0).logic0field);
#line 1611
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1611
___nl__im_ptr__7 = NULL;
#line 1611
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_const(387)));
#line 1611
c_rt_lib0clear(&___nl__im__6);
#line 1611
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__1, ___nl__im__5));
#line 1611
c_rt_lib0clear(&___nl__im__5);
#line 1612
___nl__im_ptr__11 = &((*___ref___rec__0).logic0field);
#line 1612
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 1612
___nl__im_ptr__11 = NULL;
#line 1612
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_const(387)));
#line 1612
c_rt_lib0clear(&___nl__im__10);
#line 1612
___nl__bool__8 = tct0is_own_type(___nl__im__1, ___nl__im__9);
#line 1612
c_rt_lib0clear(&___nl__im__9);
#line 1612
___nl__bool__8 = !___nl__bool__8;
#line 1612
___nl__bool__8 = !___nl__bool__8;
#line 1612
if(___nl__bool__8){ goto label_2;}
#line 1613
___nl__int__12 = 1;
#line 1613
___nl__int__12 = -___nl__int__12;
#line 1613
c_rt_lib0clear(&___nl__im__1);
#line 1613
c_rt_lib0clear(&___nl__im__2);
#line 1613
//clear ___nl__int__3;
#line 1613
c_rt_lib0clear(&___nl__im__4);
#line 1613
//clear ___nl__bool__8;
#line 1613
return ___nl__int__12;
#line 1614
goto label_1;
#line 1614
label_2:
;
#line 1614
label_1:
;
#line 1614
//clear ___nl__bool__8;
#line 1614
//clear ___nl__int__12;
#line 1615
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_const(14)));
#line 1615
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__13));
#line 1615
label_5:
;
#line 1615
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 1615
if(___nl__bool__15){ goto label_3;}
#line 1615
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 1615
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__13, ___nl__im__14));
#line 1616
___nl__bool__18 = c_rt_lib0eq(___nl__im__14, ___nl__im__2);
#line 1616
___nl__bool__18 = !___nl__bool__18;
#line 1616
if(___nl__bool__18){ goto label_7;}
#line 1616
c_rt_lib0clear(&___nl__im__1);
#line 1616
c_rt_lib0clear(&___nl__im__2);
#line 1616
c_rt_lib0clear(&___nl__im__4);
#line 1616
c_rt_lib0clear(&___nl__im__13);
#line 1616
c_rt_lib0clear(&___nl__im__14);
#line 1616
//clear ___nl__bool__15;
#line 1616
c_rt_lib0clear(&___nl__im__16);
#line 1616
c_rt_lib0clear(&___nl__im__17);
#line 1616
//clear ___nl__bool__18;
#line 1616
return ___nl__int__3;
#line 1616
goto label_6;
#line 1616
label_7:
;
#line 1616
label_6:
;
#line 1616
//clear ___nl__bool__18;
#line 1617
___nl__int__19 = 1;
#line 1617
___nl__int__3 = ___nl__int__3 + ___nl__int__19;
#line 1617
//clear ___nl__int__19;
#line 1617
label_4:
;
#line 1618
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 1618
goto label_5;
#line 1618
label_3:
;
#line 1619
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1619
nl_die_arg(___nl__im__20);
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_const(1230), ___nl__im__4, ___get_global_const(220), ___nl__im__5, ___get_global_const(1228), ___nl__im__7, ___get_global_const(211), ___nl__im__9, ___get_global_const(447), ___nl__im__11, ___get_global_const(1229), ___nl__im__13));
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
