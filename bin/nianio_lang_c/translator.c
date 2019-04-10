
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
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
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 19
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__8));
#line 19
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 20
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 20
c_rt_lib0move(&___nl__im__9, ptd0hash(___nl__im__10));
#line 20
c_rt_lib0clear(&___nl__im__10);
#line 20
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(214), ___nl__im__2, ___get_global_string_const(469), ___nl__im__4, ___get_global_string_const(1324), ___nl__im__5, ___get_global_string_const(820), ___nl__im__7, ___get_global_string_const(416), ___nl__im__9));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nlasm0label_t0ptr, ___get_global_string_const(334), ___get_global_string_const(1078)));
#line 25
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_string_const(1325), ___get_global_string_const(1326)));
#line 25
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 25
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 25
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(579), ___nl__im__2, ___get_global_string_const(1327), ___nl__im__3, ___get_global_string_const(1328), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_string_const(1325), ___get_global_string_const(158)));
#line 29
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__2));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_string_const(1325), ___get_global_string_const(158)));
#line 29
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 29
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(980), ___nl__im__2, ___get_global_string_const(981), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_string_const(334), ___get_global_string_const(819)));
#line 35
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_string_const(1325), ___get_global_string_const(1326)));
#line 36
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__4));
#line 37
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_string_const(334), ___get_global_string_const(799)));
#line 38
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_string_const(1325), ___get_global_string_const(1329)));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(1330), ___nl__im__2, ___get_global_string_const(220), ___nl__im__3, ___get_global_string_const(1327), ___nl__im__4, ___get_global_string_const(211), ___nl__im__5, ___get_global_string_const(487), ___nl__im__6, ___get_global_string_const(1329), ___nl__im__7));
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(1042), ___nl__im__6, ___get_global_string_const(1043), ___nl__im__7));
#line 44
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0clear(&___nl__im__7);
#line 44
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 44
c_rt_lib0clear(&___nl__im__5);
#line 44
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(127), ___nl__im__2, ___get_global_string_const(1044), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 49
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__6, ___get_global_string_const(361), ___nl__im__7));
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 50
c_rt_lib0clear(&___nl__im__5);
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 51
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__10));
#line 51
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 51
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__10, ___get_global_string_const(575), ___nl__im__11));
#line 51
c_rt_lib0clear(&___nl__im__10);
#line 51
c_rt_lib0clear(&___nl__im__11);
#line 51
c_rt_lib0move(&___nl__im__8, ptd0rec(___nl__im__9));
#line 51
c_rt_lib0clear(&___nl__im__9);
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 52
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__14));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 52
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__15));
#line 52
c_rt_lib0move(&___nl__im__16, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__14, ___get_global_string_const(1332), ___nl__im__15, ___get_global_string_const(603), ___nl__im__16));
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
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 53
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__19));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 53
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__20));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 53
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__21));
#line 53
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__19, ___get_global_string_const(1332), ___nl__im__20, ___get_global_string_const(361), ___nl__im__21));
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
c_rt_lib0move(&___nl__im__24, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 54
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__24));
#line 54
c_rt_lib0move(&___nl__im__25, ptd0string());
#line 54
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__24, ___get_global_string_const(579), ___nl__im__25));
#line 54
c_rt_lib0clear(&___nl__im__24);
#line 54
c_rt_lib0clear(&___nl__im__25);
#line 54
c_rt_lib0move(&___nl__im__22, ptd0rec(___nl__im__23));
#line 54
c_rt_lib0clear(&___nl__im__23);
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 55
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__28));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 55
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__29));
#line 55
c_rt_lib0move(&___nl__im__30, ptd0string());
#line 55
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__28, ___get_global_string_const(1332), ___nl__im__29, ___get_global_string_const(579), ___nl__im__30));
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
c_rt_lib0move(&___nl__im__33, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 56
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__33));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 56
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__34));
#line 56
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__33, ___get_global_string_const(575), ___nl__im__34));
#line 56
c_rt_lib0clear(&___nl__im__33);
#line 56
c_rt_lib0clear(&___nl__im__34);
#line 56
c_rt_lib0move(&___nl__im__31, ptd0rec(___nl__im__32));
#line 56
c_rt_lib0clear(&___nl__im__32);
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 57
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__37));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 57
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__38));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_string_const(334), ___get_global_string_const(336)));
#line 57
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__39));
#line 57
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__37, ___get_global_string_const(1332), ___nl__im__38, ___get_global_string_const(361), ___nl__im__39));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(9, ___get_global_string_const(218), ___nl__im__3, ___get_global_string_const(361), ___nl__im__4, ___get_global_string_const(575), ___nl__im__8, ___get_global_string_const(253), ___nl__im__12, ___get_global_string_const(255), ___nl__im__17, ___get_global_string_const(1029), ___nl__im__22, ___get_global_string_const(259), ___nl__im__26, ___get_global_string_const(1319), ___nl__im__31, ___get_global_string_const(257), ___nl__im__35));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1042)));
#line 62
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(152)));
#line 62
___nl__int__2 = getIntFromImm(___nl__im__4);
#line 62
c_rt_lib0clear(&___nl__im__3);
#line 62
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__2));
#line 62
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1042)));
#line 62
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(1055)));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(152), ___nl__im__5, ___get_global_string_const(1055), ___nl__im__11));
#line 62
//clear ___nl__int__2;
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
//clear ___nl__int__6;
#line 62
c_rt_lib0clear(&___nl__im__11);
#line 63
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1042)));
#line 63
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(152)));
#line 63
___nl__int__13 = getIntFromImm(___nl__im__15);
#line 63
c_rt_lib0clear(&___nl__im__14);
#line 63
c_rt_lib0clear(&___nl__im__15);
#line 63
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__13));
#line 63
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1042)));
#line 63
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(1055)));
#line 63
___nl__int__17 = getIntFromImm(___nl__im__19);
#line 63
c_rt_lib0clear(&___nl__im__18);
#line 63
c_rt_lib0clear(&___nl__im__19);
#line 63
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__17));
#line 63
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(152), ___nl__im__16, ___get_global_string_const(1055), ___nl__im__20));
#line 63
//clear ___nl__int__13;
#line 63
c_rt_lib0clear(&___nl__im__16);
#line 63
//clear ___nl__int__17;
#line 63
c_rt_lib0clear(&___nl__im__20);
#line 64
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(550), ___nl__im__1, ___get_global_string_const(1042), ___nl__im__12));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 68
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(211), ___nl__im__3, ___get_global_string_const(207), ___nl__im__4, ___get_global_string_const(477), ___nl__im__5));
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
c_rt_lib0hash_set_value_dec(&___nl__im__2, ___get_global_string_const(477), ___nl__im__7);
#line 69
c_rt_lib0clear(&___nl__im__6);
#line 69
c_rt_lib0clear(&___nl__im__7);
#line 70
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(171)));
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
___nl__int__14 = ___nl__int__10 >= ___nl__int__12;
#line 70
___nl__bool__13 = ___nl__int__14;
#line 70
if(___nl__bool__13){ goto label_34;}
#line 70
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__10));
#line 70
c_rt_lib0copy(&___nl__im__9, ___nl__im__15);
#line 71
c_rt_lib0move(&___nl__im__16,___get_global_string_const(477));
#line 71
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__16));
#line 71
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(166)));
#line 71
c_rt_lib0delete(array0push(&___nl__im__16, ___nl__im__17));
#line 71
c_rt_lib0move(&___nl__string__18,___get_global_string_const(477));
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
goto label_16;
#line 72
label_34:
;
#line 73
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(164)));
#line 73
___nl__int__21 = 0;
#line 73
___nl__int__22 = 1;
#line 73
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 73
label_39:
;
#line 73
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 73
___nl__bool__24 = ___nl__int__25;
#line 73
if(___nl__bool__24){ goto label_132;}
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
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_mk(5, ___get_global_string_const(820), ___nl__im__28, ___get_global_string_const(214), ___nl__im__29, ___get_global_string_const(469), ___nl__im__31, ___get_global_string_const(1324), ___nl__im__32, ___get_global_string_const(416), ___nl__im__1));
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
c_rt_lib0move(___nl__im_ptr__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
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
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 88
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(208)));
#line 89
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_mk(0));
#line 90
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 91
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 92
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 93
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(0));
#line 94
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(166)));
#line 95
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(165)));
#line 96
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(0));
#line 96
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(10, ___get_global_string_const(225), ___nl__im__39, ___get_global_string_const(208), ___nl__im__40, ___get_global_string_const(214), ___nl__im__41, ___get_global_string_const(213), ___nl__im__42, ___get_global_string_const(466), ___nl__im__43, ___get_global_string_const(415), ___nl__im__44, ___get_global_string_const(212), ___nl__im__45, ___get_global_string_const(166), ___nl__im__46, ___get_global_string_const(165), ___nl__im__47, ___get_global_string_const(820), ___nl__im__48));
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
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_mk(3, ___get_global_string_const(579), ___nl__im__52, ___get_global_string_const(1327), ___nl__im__27, ___get_global_string_const(1328), ___nl__im__54));
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
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_string_const(579), ___nl__im__57, ___get_global_string_const(1327), ___nl__im__27, ___get_global_string_const(1328), ___nl__im__59));
#line 100
//clear ___nl__int__56;
#line 100
c_rt_lib0clear(&___nl__im__57);
#line 100
//clear ___nl__bool__58;
#line 100
c_rt_lib0clear(&___nl__im__59);
#line 100
c_rt_lib0move(___nl__im_ptr__49, c_rt_lib0hash_mk(2, ___get_global_string_const(980), ___nl__im__50, ___get_global_string_const(981), ___nl__im__55));
#line 100
c_rt_lib0clear(&___nl__im__50);
#line 100
c_rt_lib0clear(&___nl__im__55);
#line 100
___nl__im_ptr__49 = NULL;
#line 103
c_rt_lib0delete(translator_priv0print_fun_def(___nl__im__20, &___nl__rec__33));
#line 104
c_rt_lib0move(&___nl__im__60,___get_global_string_const(207));
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
c_rt_lib0move(&___nl__string__63,___get_global_string_const(207));
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
goto label_39;
#line 105
label_132:
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
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT * ___nl__im_ptr__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT * ___nl__im_ptr__50 = NULL;
ImmT * ___nl__im_ptr__51 = NULL;
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(265)));
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
___nl__int__8 = ___nl__int__4 >= ___nl__int__6;
#line 110
___nl__bool__7 = ___nl__int__8;
#line 110
if(___nl__bool__7){ goto label_84;}
#line 110
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 110
c_rt_lib0copy(&___nl__im__3, ___nl__im__9);
#line 111
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(266)));
#line 111
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(71));
#line 111
if(___nl__bool__11){ goto label_18;}
#line 115
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 115
if(___nl__bool__11){ goto label_49;}
#line 115
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 115
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 115
nl_die_arg(___nl__im__12);
#line 111
label_18:
;
#line 112
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(166)));
#line 112
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(493)));
#line 112
___nl__im_ptr__19 = &((*___ref___rec__1).logic0field);
#line 112
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 112
___nl__im_ptr__19 = NULL;
#line 112
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(416)));
#line 112
c_rt_lib0clear(&___nl__im__18);
#line 112
c_rt_lib0move(&___nl__im__15, translator_priv0var_type_to_reg_type(___nl__im__16, ___nl__im__17));
#line 112
c_rt_lib0clear(&___nl__im__16);
#line 112
c_rt_lib0clear(&___nl__im__17);
#line 112
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 112
c_rt_lib0move(&___nl__im__13, translator_priv0new_declaration(___nl__im__14, ___ref___rec__1, ___nl__im__15, ___nl__im__20));
#line 112
c_rt_lib0clear(&___nl__im__14);
#line 112
c_rt_lib0clear(&___nl__im__15);
#line 112
c_rt_lib0clear(&___nl__im__20);
#line 113
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(223)));
#line 113
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(493)));
#line 113
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(3, ___get_global_string_const(353), ___nl__im__22, ___get_global_string_const(469), ___nl__im__13, ___get_global_string_const(204), ___nl__im__23));
#line 113
c_rt_lib0clear(&___nl__im__22);
#line 113
c_rt_lib0clear(&___nl__im__23);
#line 114
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 114
c_rt_lib0move(&___nl__im__25,___get_global_string_const(213));
#line 114
c_rt_lib0move(&___nl__im__25, c_rt_lib0get_ref_hash((*___nl__im_ptr__24), ___nl__im__25));
#line 114
c_rt_lib0delete(array0push(&___nl__im__25, ___nl__im__21));
#line 114
c_rt_lib0move(&___nl__string__26,___get_global_string_const(213));
#line 114
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__24, ___nl__string__26, ___nl__im__25));
#line 114
___nl__im_ptr__24 = NULL;
#line 114
c_rt_lib0clear(&___nl__im__25);
#line 114
c_rt_lib0clear(&___nl__string__26);
#line 115
goto label_80;
#line 115
label_49:
;
#line 116
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(166)));
#line 116
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(493)));
#line 116
___nl__im_ptr__33 = &((*___ref___rec__1).logic0field);
#line 116
c_rt_lib0copy(&___nl__im__32, (*___nl__im_ptr__33));
#line 116
___nl__im_ptr__33 = NULL;
#line 116
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(416)));
#line 116
c_rt_lib0clear(&___nl__im__32);
#line 116
c_rt_lib0move(&___nl__im__29, translator_priv0var_type_to_reg_type(___nl__im__30, ___nl__im__31));
#line 116
c_rt_lib0clear(&___nl__im__30);
#line 116
c_rt_lib0clear(&___nl__im__31);
#line 116
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 116
c_rt_lib0move(&___nl__im__27, translator_priv0new_declaration(___nl__im__28, ___ref___rec__1, ___nl__im__29, ___nl__im__34));
#line 116
c_rt_lib0clear(&___nl__im__28);
#line 116
c_rt_lib0clear(&___nl__im__29);
#line 116
c_rt_lib0clear(&___nl__im__34);
#line 117
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(39)));
#line 117
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(493)));
#line 117
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(353), ___nl__im__36, ___get_global_string_const(469), ___nl__im__27, ___get_global_string_const(204), ___nl__im__37));
#line 117
c_rt_lib0clear(&___nl__im__36);
#line 117
c_rt_lib0clear(&___nl__im__37);
#line 118
___nl__im_ptr__38 = &((*___ref___rec__1).result0field);
#line 118
c_rt_lib0move(&___nl__im__39,___get_global_string_const(213));
#line 118
c_rt_lib0move(&___nl__im__39, c_rt_lib0get_ref_hash((*___nl__im_ptr__38), ___nl__im__39));
#line 118
c_rt_lib0delete(array0push(&___nl__im__39, ___nl__im__35));
#line 118
c_rt_lib0move(&___nl__string__40,___get_global_string_const(213));
#line 118
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__38, ___nl__string__40, ___nl__im__39));
#line 118
___nl__im_ptr__38 = NULL;
#line 118
c_rt_lib0clear(&___nl__im__39);
#line 118
c_rt_lib0clear(&___nl__string__40);
#line 119
goto label_80;
#line 119
label_80:
;
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 120
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 120
goto label_4;
#line 120
label_84:
;
#line 121
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(466)));
#line 121
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(493)));
#line 121
c_rt_lib0clear(&___nl__im__42);
#line 121
___nl__im_ptr__43 = &((*___ref___rec__1).result0field);
#line 121
c_rt_lib0copy(&___nl__im__44, ___nl__im__41);
#line 121
c_rt_lib0hash_set_value_dec(___nl__im_ptr__43, ___get_global_string_const(466), ___nl__im__44);
#line 121
___nl__im_ptr__43 = NULL;
#line 121
c_rt_lib0clear(&___nl__im__41);
#line 121
c_rt_lib0clear(&___nl__im__44);
#line 122
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(466)));
#line 122
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(493)));
#line 122
c_rt_lib0clear(&___nl__im__47);
#line 122
___nl__im_ptr__50 = &((*___ref___rec__1).logic0field);
#line 122
c_rt_lib0copy(&___nl__im__49, (*___nl__im_ptr__50));
#line 122
___nl__im_ptr__50 = NULL;
#line 122
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(416)));
#line 122
c_rt_lib0clear(&___nl__im__49);
#line 122
c_rt_lib0move(&___nl__im__45, translator_priv0var_type_to_reg_type(___nl__im__46, ___nl__im__48));
#line 122
c_rt_lib0clear(&___nl__im__46);
#line 122
c_rt_lib0clear(&___nl__im__48);
#line 122
___nl__im_ptr__51 = &((*___ref___rec__1).result0field);
#line 122
c_rt_lib0copy(&___nl__im__52, ___nl__im__45);
#line 122
c_rt_lib0hash_set_value_dec(___nl__im_ptr__51, ___get_global_string_const(415), ___nl__im__52);
#line 122
___nl__im_ptr__51 = NULL;
#line 122
c_rt_lib0clear(&___nl__im__45);
#line 122
c_rt_lib0clear(&___nl__im__52);
#line 123
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 123
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__53, ___ref___rec__1));
#line 123
c_rt_lib0clear(&___nl__im__53);
#line 125
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 125
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(220)));
#line 125
c_rt_lib0clear(&___nl__im__58);
#line 125
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_string_const(1042)));
#line 125
c_rt_lib0clear(&___nl__im__57);
#line 125
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 125
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(220)));
#line 125
c_rt_lib0clear(&___nl__im__61);
#line 125
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__60, ___get_global_string_const(1042)));
#line 125
c_rt_lib0clear(&___nl__im__60);
#line 125
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(2, ___get_global_string_const(550), ___nl__im__56, ___get_global_string_const(1042), ___nl__im__59));
#line 125
c_rt_lib0clear(&___nl__im__56);
#line 125
c_rt_lib0clear(&___nl__im__59);
#line 126
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_none(___get_global_string_const(985)));
#line 127
c_rt_lib0move(&___nl__im__63, c_rt_lib0ov_mk_none(___get_global_string_const(14)));
#line 127
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_mk(3, ___get_global_string_const(220), ___nl__im__55, ___get_global_string_const(218), ___nl__im__62, ___get_global_string_const(204), ___nl__im__63));
#line 127
c_rt_lib0clear(&___nl__im__55);
#line 127
c_rt_lib0clear(&___nl__im__62);
#line 127
c_rt_lib0clear(&___nl__im__63);
#line 129
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(466)));
#line 129
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(204)));
#line 129
c_rt_lib0clear(&___nl__im__65);
#line 129
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(204));
#line 129
if(___nl__bool__66){ goto label_143;}
#line 134
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__64, ___get_global_string_const(71));
#line 134
if(___nl__bool__66){ goto label_168;}
#line 134
c_rt_lib0move(&___nl__im__67,___get_global_string_const(15));
#line 134
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(2, ___nl__im__67, ___nl__im__64));
#line 134
nl_die_arg(___nl__im__67);
#line 129
label_143:
;
#line 129
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__64, ___get_global_string_const(204)));
#line 129
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 130
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(466)));
#line 130
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(493)));
#line 130
c_rt_lib0clear(&___nl__im__72);
#line 130
___nl__im_ptr__75 = &((*___ref___rec__1).logic0field);
#line 130
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 130
___nl__im_ptr__75 = NULL;
#line 130
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__74, ___get_global_string_const(416)));
#line 130
c_rt_lib0clear(&___nl__im__74);
#line 130
c_rt_lib0move(&___nl__im__70, translator_priv0unwrap_ref(___nl__im__71, ___nl__im__73));
#line 130
c_rt_lib0clear(&___nl__im__71);
#line 130
c_rt_lib0clear(&___nl__im__73);
#line 131
___nl__bool__76 = c_rt_lib0priv_is(___nl__im__70, ___get_global_string_const(8));
#line 131
if(___nl__bool__76){ goto label_160;}
#line 131
___nl__bool__76 = c_rt_lib0priv_is(___nl__im__70, ___get_global_string_const(0));
#line 131
label_160:
;
#line 131
___nl__bool__76 = !___nl__bool__76;
#line 131
if(___nl__bool__76){ goto label_165;}
#line 132
c_rt_lib0delete(translator_priv0print_return(___nl__im__54, ___ref___rec__1));
#line 133
goto label_165;
#line 133
label_165:
;
#line 133
//clear ___nl__bool__76;
#line 134
goto label_171;
#line 134
label_168:
;
#line 135
c_rt_lib0delete(translator_priv0print_return(___nl__im__54, ___ref___rec__1));
#line 136
goto label_171;
#line 136
label_171:
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
label_4:
;
#line 142
___nl__int__9 = ___nl__int__5 >= ___nl__int__7;
#line 142
___nl__bool__8 = ___nl__int__9;
#line 142
if(___nl__bool__8){ goto label_26;}
#line 142
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 142
c_rt_lib0copy(&___nl__im__4, ___nl__im__10);
#line 143
c_rt_lib0move(&___nl__im__11, translator_priv0calc_val(___nl__im__4, ___ref___rec__2));
#line 144
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 144
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(131));
#line 144
c_rt_lib0clear(&___nl__im__13);
#line 144
___nl__bool__12 = !___nl__bool__12;
#line 144
if(___nl__bool__12){ goto label_20;}
#line 145
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 145
c_rt_lib0move(&___nl__im__11, translator_priv0get_cast(___nl__im__11, ___nl__im__14, ___ref___rec__2));
#line 145
c_rt_lib0clear(&___nl__im__14);
#line 146
goto label_20;
#line 146
label_20:
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
goto label_4;
#line 148
label_26:
;
#line 149
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 149
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(127));
#line 149
c_rt_lib0clear(&___nl__im__16);
#line 149
___nl__bool__15 = !___nl__bool__15;
#line 149
if(___nl__bool__15){ goto label_47;}
#line 150
___nl__int__18 = 0;
#line 150
___nl__int__19 = 1;
#line 150
___nl__int__20 = c_rt_lib0array_len(___nl__im__3);
#line 150
label_35:
;
#line 150
___nl__int__22 = ___nl__int__18 >= ___nl__int__20;
#line 150
___nl__bool__21 = ___nl__int__22;
#line 150
if(___nl__bool__21){ goto label_45;}
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
goto label_35;
#line 152
label_45:
;
#line 153
goto label_63;
#line 153
label_47:
;
#line 153
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 153
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(131));
#line 153
c_rt_lib0clear(&___nl__im__24);
#line 153
___nl__bool__15 = !___nl__bool__15;
#line 153
if(___nl__bool__15){ goto label_59;}
#line 154
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__3));
#line 154
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__26));
#line 154
c_rt_lib0clear(&___nl__im__26);
#line 154
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__25));
#line 154
c_rt_lib0clear(&___nl__im__25);
#line 155
goto label_63;
#line 155
label_59:
;
#line 156
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 156
nl_die_arg(___nl__im__27);
#line 157
goto label_63;
#line 157
label_63:
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
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 163
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(557));
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
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 164
___nl__bool__11 = ___nl__int__12;
#line 164
if(___nl__bool__11){ goto label_148;}
#line 164
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__8));
#line 164
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 165
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 166
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(575)));
#line 166
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(218)));
#line 166
c_rt_lib0clear(&___nl__im__17);
#line 166
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(575)));
#line 166
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(218)));
#line 166
c_rt_lib0clear(&___nl__im__19);
#line 166
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__18, ___get_global_string_const(1007)));
#line 166
c_rt_lib0clear(&___nl__im__16);
#line 166
c_rt_lib0clear(&___nl__im__18);
#line 167
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 167
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(128));
#line 167
c_rt_lib0clear(&___nl__im__21);
#line 167
___nl__bool__20 = !___nl__bool__20;
#line 167
if(___nl__bool__20){ goto label_80;}
#line 168
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 168
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 168
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(128)));
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
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(416)));
#line 168
c_rt_lib0clear(&___nl__im__28);
#line 168
c_rt_lib0move(&___nl__im__23, translator_priv0unwrap_ref(___nl__im__24, ___nl__im__27));
#line 168
c_rt_lib0clear(&___nl__im__24);
#line 168
c_rt_lib0clear(&___nl__im__27);
#line 168
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 168
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 168
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(128)));
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
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(416)));
#line 168
c_rt_lib0clear(&___nl__im__35);
#line 168
c_rt_lib0move(&___nl__im__30, translator_priv0unwrap_ref(___nl__im__31, ___nl__im__34));
#line 168
c_rt_lib0clear(&___nl__im__31);
#line 168
c_rt_lib0clear(&___nl__im__34);
#line 168
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__30, ___get_global_string_const(4)));
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
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(416)));
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
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(416)));
#line 170
c_rt_lib0clear(&___nl__im__41);
#line 170
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__22, ___nl__im__40));
#line 170
c_rt_lib0clear(&___nl__im__40);
#line 171
goto label_132;
#line 171
label_80:
;
#line 171
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 171
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__43, ___get_global_string_const(557));
#line 171
c_rt_lib0clear(&___nl__im__43);
#line 171
___nl__bool__20 = !___nl__bool__20;
#line 171
if(___nl__bool__20){ goto label_132;}
#line 172
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 172
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 172
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__48, ___get_global_string_const(557)));
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
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_string_const(416)));
#line 172
c_rt_lib0clear(&___nl__im__50);
#line 172
c_rt_lib0move(&___nl__im__45, translator_priv0unwrap_ref(___nl__im__46, ___nl__im__49));
#line 172
c_rt_lib0clear(&___nl__im__46);
#line 172
c_rt_lib0clear(&___nl__im__49);
#line 172
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 172
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 172
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__55, ___get_global_string_const(557)));
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
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__57, ___get_global_string_const(416)));
#line 172
c_rt_lib0clear(&___nl__im__57);
#line 172
c_rt_lib0move(&___nl__im__52, translator_priv0unwrap_ref(___nl__im__53, ___nl__im__56));
#line 172
c_rt_lib0clear(&___nl__im__53);
#line 172
c_rt_lib0clear(&___nl__im__56);
#line 172
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__52, ___get_global_string_const(6)));
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
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__62, ___get_global_string_const(416)));
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
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(416)));
#line 174
c_rt_lib0clear(&___nl__im__65);
#line 174
c_rt_lib0move(&___nl__im__14, translator_priv0var_type_to_reg_type(___nl__im__59, ___nl__im__64));
#line 174
c_rt_lib0clear(&___nl__im__64);
#line 175
goto label_132;
#line 175
label_132:
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
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(223)));
#line 176
c_rt_lib0move(&___nl__im__68, translator_priv0calc_val(___nl__im__69, ___ref___rec__2));
#line 176
c_rt_lib0clear(&___nl__im__69);
#line 176
c_rt_lib0move(&___nl__im__67, translator_priv0get_cast(___nl__im__68, ___nl__im__14, ___ref___rec__2));
#line 176
c_rt_lib0clear(&___nl__im__68);
#line 177
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_mk(2, ___get_global_string_const(575), ___nl__im__15, ___get_global_string_const(223), ___nl__im__67));
#line 177
c_rt_lib0delete(array0push(&___nl__im__3, ___nl__im__70));
#line 177
c_rt_lib0clear(&___nl__im__70);
#line 177
c_rt_lib0clear(&___nl__im__7);
#line 178
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 178
goto label_15;
#line 178
label_148:
;
#line 179
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__3));
#line 179
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__72));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(350)));
#line 185
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 185
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(560));
#line 185
c_rt_lib0clear(&___nl__im__6);
#line 185
___nl__bool__5 = !___nl__bool__5;
#line 185
if(___nl__bool__5){ goto label_20;}
#line 186
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 186
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 186
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(560)));
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
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(416)));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
#line 190
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(218)));
#line 190
c_rt_lib0clear(&___nl__im__15);
#line 190
___nl__bool__13 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(985));
#line 190
c_rt_lib0clear(&___nl__im__14);
#line 190
___nl__bool__13 = !___nl__bool__13;
#line 190
___nl__bool__13 = !___nl__bool__13;
#line 190
if(___nl__bool__13){ goto label_71;}
#line 192
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 192
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(560));
#line 192
c_rt_lib0clear(&___nl__im__18);
#line 192
___nl__bool__17 = !___nl__bool__17;
#line 192
if(___nl__bool__17){ goto label_57;}
#line 193
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(13)));
#line 194
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 194
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value(___nl__im__19, ___nl__im__22));
#line 194
c_rt_lib0clear(&___nl__im__22);
#line 194
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
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
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(416)));
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
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
#line 198
c_rt_lib0move(&___nl__im__29, translator_priv0dest_val(___nl__im__30, ___ref___rec__2));
#line 198
c_rt_lib0clear(&___nl__im__30);
#line 198
c_rt_lib0move(&___nl__im__28, translator_priv0get_cast(___nl__im__29, ___nl__im__16, ___ref___rec__2));
#line 198
c_rt_lib0clear(&___nl__im__29);
#line 198
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__28));
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
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 200
___nl__int__31 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__4, ___nl__im__32);
#line 200
c_rt_lib0clear(&___nl__im__32);
#line 201
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 201
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__31));
#line 201
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(505)));
#line 201
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__38, ___get_global_string_const(204)));
#line 201
c_rt_lib0clear(&___nl__im__38);
#line 201
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(5, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(579), ___nl__im__35, ___get_global_string_const(564), ___nl__im__36, ___get_global_string_const(581), ___nl__im__37));
#line 201
c_rt_lib0clear(&___nl__im__35);
#line 201
c_rt_lib0clear(&___nl__im__36);
#line 201
c_rt_lib0clear(&___nl__im__37);
#line 201
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__34));
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(493)));
#line 206
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 206
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 206
___nl__im_ptr__7 = NULL;
#line 206
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(416)));
#line 206
c_rt_lib0clear(&___nl__im__6);
#line 206
c_rt_lib0move(&___nl__im__3, translator_priv0var_type_to_reg_type(___nl__im__4, ___nl__im__5));
#line 206
c_rt_lib0clear(&___nl__im__4);
#line 206
c_rt_lib0clear(&___nl__im__5);
#line 207
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 207
c_rt_lib0move(&___nl__im__8, translator_priv0new_declaration(___nl__im__9, ___ref___rec__1, ___nl__im__3, ___nl__im__2));
#line 207
c_rt_lib0clear(&___nl__im__9);
#line 208
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 208
c_rt_lib0move(&___nl__im__11,___get_global_string_const(820));
#line 208
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 208
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(493)));
#line 208
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(2, ___get_global_string_const(204), ___nl__im__13, ___get_global_string_const(469), ___nl__im__8));
#line 208
c_rt_lib0clear(&___nl__im__13);
#line 208
c_rt_lib0delete(array0push(&___nl__im__11, ___nl__im__12));
#line 208
c_rt_lib0move(&___nl__string__14,___get_global_string_const(820));
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
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 209
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(71));
#line 209
if(___nl__bool__16){ goto label_33;}
#line 210
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(218));
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
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(218)));
#line 210
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 211
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(204)));
#line 211
___nl__im_ptr__24 = &((*___ref___rec__1).logic0field);
#line 211
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 211
___nl__im_ptr__24 = NULL;
#line 211
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(416)));
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(223), ___nl__im__0));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(224), ___nl__im__4));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(1333), ___nl__im__3, ___get_global_string_const(1334), ___nl__im__4, ___get_global_string_const(1335), ___nl__im__5));
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
ImmT  ___nl__im__33 = NULL;
INT  ___nl__int__34 = 0;
ImmT  ___nl__im__35 = NULL;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
bool  ___nl__bool__42 = false;
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
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
ImmT * ___nl__im_ptr__56 = NULL;
ImmT  ___nl__im__57 = NULL;
bool  ___nl__bool__58 = false;
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
ImmT * ___nl__im_ptr__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
bool  ___nl__bool__83 = false;
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
bool  ___nl__bool__94 = false;
bool  ___nl__bool__95 = false;
ImmT  ___nl__im__96 = NULL;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
ImmT  ___nl__im__100 = NULL;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
INT  ___nl__int__104 = 0;
ImmT  ___nl__im__105 = NULL;
INT  ___nl__int__106 = 0;
bool  ___nl__bool__107 = false;
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
INT  ___nl__int__118 = 0;
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
INT  ___nl__int__143 = 0;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
bool  ___nl__bool__146 = false;
bool  ___nl__bool__147 = false;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
bool  ___nl__bool__155 = false;
INT  ___nl__int__156 = 0;
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(265)));
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
if(___nl__bool__13){ goto label_82;}
#line 235
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(265)));
#line 235
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__19, ___nl__int__9));
#line 235
c_rt_lib0clear(&___nl__im__19);
#line 235
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(266)));
#line 235
c_rt_lib0clear(&___nl__im__18);
#line 235
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(39));
#line 235
c_rt_lib0clear(&___nl__im__17);
#line 235
___nl__bool__16 = !___nl__bool__16;
#line 235
___nl__bool__16 = !___nl__bool__16;
#line 235
if(___nl__bool__16){ goto label_33;}
#line 235
//clear ___nl__bool__16;
#line 235
goto label_77;
#line 235
goto label_33;
#line 235
label_33:
;
#line 235
//clear ___nl__bool__16;
#line 236
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(265)));
#line 236
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__22, ___nl__int__9));
#line 236
c_rt_lib0clear(&___nl__im__22);
#line 236
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(223)));
#line 236
c_rt_lib0clear(&___nl__im__21);
#line 237
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__im__20, ___ref___rec__3));
#line 238
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(218)));
#line 238
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(218)));
#line 238
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(505)));
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
if(___nl__bool__23){ goto label_54;}
#line 238
c_rt_lib0clear(&___nl__im__20);
#line 238
//clear ___nl__bool__23;
#line 238
goto label_77;
#line 238
goto label_54;
#line 238
label_54:
;
#line 238
//clear ___nl__bool__23;
#line 239
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(218)));
#line 239
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(218)));
#line 239
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__29, ___get_global_string_const(505)));
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
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__9));
#line 240
c_rt_lib0move(&___nl__im__32, ptd0int_to_string(___nl__im__33));
#line 240
c_rt_lib0clear(&___nl__im__33);
#line 240
___nl__int__34 = 0;
#line 240
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 240
c_rt_lib0delete(hash0set_value(&___nl__im__7, ___nl__im__32, ___nl__im__35));
#line 240
c_rt_lib0clear(&___nl__im__32);
#line 240
//clear ___nl__int__34;
#line 240
c_rt_lib0clear(&___nl__im__35);
#line 240
c_rt_lib0clear(&___nl__im__20);
#line 240
label_77:
;
#line 234
___nl__int__36 = 1;
#line 234
___nl__int__9 = ___nl__int__9 - ___nl__int__36;
#line 234
//clear ___nl__int__36;
#line 241
goto label_12;
#line 241
label_82:
;
#line 242
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 243
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(265)));
#line 243
___nl__int__38 = c_rt_lib0array_len(___nl__im__39);
#line 243
c_rt_lib0clear(&___nl__im__39);
#line 243
___nl__int__40 = 0;
#line 243
___nl__int__41 = 1;
#line 243
label_89:
;
#line 243
___nl__int__43 = ___nl__int__40 >= ___nl__int__38;
#line 243
___nl__bool__42 = ___nl__int__43;
#line 243
if(___nl__bool__42){ goto label_223;}
#line 244
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(265)));
#line 244
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get(___nl__im__45, ___nl__int__40));
#line 244
c_rt_lib0clear(&___nl__im__45);
#line 245
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(266)));
#line 245
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__46, ___get_global_string_const(71));
#line 245
if(___nl__bool__47){ goto label_104;}
#line 249
___nl__bool__47 = c_rt_lib0priv_is(___nl__im__46, ___get_global_string_const(39));
#line 249
if(___nl__bool__47){ goto label_123;}
#line 249
c_rt_lib0move(&___nl__im__48,___get_global_string_const(15));
#line 249
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(2, ___nl__im__48, ___nl__im__46));
#line 249
nl_die_arg(___nl__im__48);
#line 245
label_104:
;
#line 246
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(223)));
#line 246
c_rt_lib0move(&___nl__im__49, translator_priv0calc_val(___nl__im__50, ___ref___rec__3));
#line 246
c_rt_lib0clear(&___nl__im__50);
#line 247
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(1036)));
#line 247
___nl__im_ptr__56 = &((*___ref___rec__3).logic0field);
#line 247
c_rt_lib0copy(&___nl__im__55, (*___nl__im_ptr__56));
#line 247
___nl__im_ptr__56 = NULL;
#line 247
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__55, ___get_global_string_const(416)));
#line 247
c_rt_lib0clear(&___nl__im__55);
#line 247
c_rt_lib0move(&___nl__im__52, translator_priv0var_type_to_reg_type(___nl__im__53, ___nl__im__54));
#line 247
c_rt_lib0clear(&___nl__im__53);
#line 247
c_rt_lib0clear(&___nl__im__54);
#line 247
c_rt_lib0move(&___nl__im__51, translator_priv0get_cast(___nl__im__49, ___nl__im__52, ___ref___rec__3));
#line 247
c_rt_lib0clear(&___nl__im__52);
#line 248
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__51));
#line 248
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__57));
#line 248
c_rt_lib0clear(&___nl__im__57);
#line 249
goto label_211;
#line 249
label_123:
;
#line 250
c_rt_lib0move(&___nl__im__60, c_rt_lib0int_new(___nl__int__40));
#line 250
c_rt_lib0move(&___nl__im__59, ptd0int_to_string(___nl__im__60));
#line 250
c_rt_lib0clear(&___nl__im__60);
#line 250
___nl__bool__58 = hash0has_key(___nl__im__7, ___nl__im__59);
#line 250
c_rt_lib0clear(&___nl__im__59);
#line 250
___nl__bool__58 = !___nl__bool__58;
#line 250
if(___nl__bool__58){ goto label_190;}
#line 251
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(223)));
#line 251
___nl__bool__63 = true;
#line 251
c_rt_lib0move(&___nl__im__61, translator_priv0get_value_of_lvalue(___nl__im__62, ___nl__bool__63, ___ref___rec__3));
#line 251
c_rt_lib0clear(&___nl__im__62);
#line 251
//clear ___nl__bool__63;
#line 252
___nl__int__67 = c_rt_lib0array_len(___nl__im__61);
#line 252
___nl__int__68 = 1;
#line 252
___nl__int__66 = ___nl__int__67 - ___nl__int__68;
#line 252
//clear ___nl__int__67;
#line 252
//clear ___nl__int__68;
#line 252
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_get(___nl__im__61, ___nl__int__66));
#line 252
//clear ___nl__int__66;
#line 252
___nl__int__71 = c_rt_lib0array_len(___nl__im__61);
#line 252
___nl__int__72 = 1;
#line 252
___nl__int__70 = ___nl__int__71 - ___nl__int__72;
#line 252
//clear ___nl__int__71;
#line 252
//clear ___nl__int__72;
#line 252
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__61, ___nl__int__70));
#line 252
//clear ___nl__int__70;
#line 252
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__69, ___get_global_string_const(218)));
#line 252
c_rt_lib0clear(&___nl__im__65);
#line 252
c_rt_lib0clear(&___nl__im__69);
#line 253
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(1036)));
#line 254
___nl__im_ptr__77 = &((*___ref___rec__3).logic0field);
#line 254
c_rt_lib0copy(&___nl__im__76, (*___nl__im_ptr__77));
#line 254
___nl__im_ptr__77 = NULL;
#line 254
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_string_const(416)));
#line 254
c_rt_lib0clear(&___nl__im__76);
#line 254
c_rt_lib0move(&___nl__im__73, translator_priv0var_type_to_reg_type(___nl__im__74, ___nl__im__75));
#line 254
c_rt_lib0clear(&___nl__im__74);
#line 254
c_rt_lib0clear(&___nl__im__75);
#line 255
c_rt_lib0move(&___nl__im__78, translator_priv0get_cast(___nl__im__64, ___nl__im__73, ___ref___rec__3));
#line 256
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__78));
#line 256
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__79));
#line 256
c_rt_lib0clear(&___nl__im__79);
#line 257
c_rt_lib0move(&___nl__im__82, c_rt_lib0int_new(___nl__int__40));
#line 257
c_rt_lib0move(&___nl__im__81, ptd0int_to_string(___nl__im__82));
#line 257
c_rt_lib0clear(&___nl__im__82);
#line 257
c_rt_lib0copy(&___nl__im__80, ___nl__im__61);
#line 257
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__5, ___nl__im__81, ___nl__im__80));
#line 257
c_rt_lib0clear(&___nl__im__80);
#line 257
c_rt_lib0clear(&___nl__im__81);
#line 258
___nl__bool__83 = nlasm0eq_reg(___nl__im__64, ___nl__im__78);
#line 258
___nl__bool__83 = !___nl__bool__83;
#line 258
___nl__bool__83 = !___nl__bool__83;
#line 258
if(___nl__bool__83){ goto label_187;}
#line 259
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_mk(2, ___get_global_string_const(1336), ___nl__im__64, ___get_global_string_const(1337), ___nl__im__78));
#line 259
c_rt_lib0move(&___nl__im__87, c_rt_lib0int_new(___nl__int__40));
#line 259
c_rt_lib0move(&___nl__im__86, ptd0int_to_string(___nl__im__87));
#line 259
c_rt_lib0clear(&___nl__im__87);
#line 259
c_rt_lib0copy(&___nl__im__85, ___nl__im__84);
#line 259
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__6, ___nl__im__86, ___nl__im__85));
#line 259
c_rt_lib0clear(&___nl__im__84);
#line 259
c_rt_lib0clear(&___nl__im__85);
#line 259
c_rt_lib0clear(&___nl__im__86);
#line 260
goto label_187;
#line 260
label_187:
;
#line 260
//clear ___nl__bool__83;
#line 261
goto label_203;
#line 261
label_190:
;
#line 262
c_rt_lib0move(&___nl__im__90, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(223)));
#line 262
c_rt_lib0move(&___nl__im__89, translator_priv0value_type_to_reg_type(___nl__im__90, ___ref___rec__3));
#line 262
c_rt_lib0clear(&___nl__im__90);
#line 262
c_rt_lib0move(&___nl__im__88, translator_priv0new_register(___ref___rec__3, ___nl__im__89));
#line 262
c_rt_lib0clear(&___nl__im__89);
#line 263
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(223)));
#line 263
c_rt_lib0delete(translator_priv0print_val(___nl__im__91, ___nl__im__88, ___ref___rec__3));
#line 263
c_rt_lib0clear(&___nl__im__91);
#line 264
c_rt_lib0move(&___nl__im__92, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__88));
#line 264
c_rt_lib0delete(array0push(&___nl__im__4, ___nl__im__92));
#line 264
c_rt_lib0clear(&___nl__im__92);
#line 265
goto label_203;
#line 265
label_203:
;
#line 265
//clear ___nl__bool__58;
#line 265
c_rt_lib0clear(&___nl__im__61);
#line 265
c_rt_lib0clear(&___nl__im__64);
#line 265
c_rt_lib0clear(&___nl__im__73);
#line 265
c_rt_lib0clear(&___nl__im__78);
#line 265
c_rt_lib0clear(&___nl__im__88);
#line 266
goto label_211;
#line 266
label_211:
;
#line 267
c_rt_lib0move(&___nl__im__93, translator_priv0save_registers(___ref___rec__3));
#line 267
c_rt_lib0delete(array0push(&___nl__im__37, ___nl__im__93));
#line 267
c_rt_lib0clear(&___nl__im__93);
#line 267
c_rt_lib0clear(&___nl__im__44);
#line 267
c_rt_lib0clear(&___nl__im__46);
#line 267
//clear ___nl__bool__47;
#line 267
c_rt_lib0clear(&___nl__im__48);
#line 267
c_rt_lib0clear(&___nl__im__49);
#line 267
c_rt_lib0clear(&___nl__im__51);
#line 268
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 268
goto label_89;
#line 268
label_223:
;
#line 269
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 269
c_rt_lib0move(&___nl__im__97,___get_global_string_const(1338));
#line 269
___nl__bool__94 = c_rt_lib0eq(___nl__im__96, ___nl__im__97);
#line 269
c_rt_lib0clear(&___nl__im__96);
#line 269
c_rt_lib0clear(&___nl__im__97);
#line 269
___nl__bool__95 = !___nl__bool__94;
#line 269
if(___nl__bool__95){ goto label_236;}
#line 269
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 269
c_rt_lib0move(&___nl__im__99,___get_global_string_const(283));
#line 269
___nl__bool__94 = c_rt_lib0eq(___nl__im__98, ___nl__im__99);
#line 269
c_rt_lib0clear(&___nl__im__98);
#line 269
c_rt_lib0clear(&___nl__im__99);
#line 269
label_236:
;
#line 269
//clear ___nl__bool__95;
#line 269
___nl__bool__94 = !___nl__bool__94;
#line 269
if(___nl__bool__94){ goto label_256;}
#line 270
___nl__int__104 = 0;
#line 270
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_get(___nl__im__4, ___nl__int__104));
#line 270
//clear ___nl__int__104;
#line 270
___nl__int__106 = 0;
#line 270
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_get(___nl__im__4, ___nl__int__106));
#line 270
//clear ___nl__int__106;
#line 270
c_rt_lib0move(&___nl__im__102, c_rt_lib0priv_as(___nl__im__105, ___get_global_string_const(39)));
#line 270
c_rt_lib0clear(&___nl__im__103);
#line 270
c_rt_lib0clear(&___nl__im__105);
#line 270
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__102));
#line 270
c_rt_lib0clear(&___nl__im__102);
#line 270
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_string_const(242), ___nl__im__101));
#line 270
c_rt_lib0clear(&___nl__im__101);
#line 270
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__100));
#line 270
c_rt_lib0clear(&___nl__im__100);
#line 271
goto label_349;
#line 271
label_256:
;
#line 271
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 271
c_rt_lib0move(&___nl__im__109,___get_global_string_const(37));
#line 271
___nl__bool__94 = c_rt_lib0eq(___nl__im__108, ___nl__im__109);
#line 271
c_rt_lib0clear(&___nl__im__108);
#line 271
c_rt_lib0clear(&___nl__im__109);
#line 271
___nl__bool__107 = !___nl__bool__94;
#line 271
if(___nl__bool__107){ goto label_269;}
#line 271
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 271
c_rt_lib0move(&___nl__im__111,___get_global_string_const(283));
#line 271
___nl__bool__94 = c_rt_lib0eq(___nl__im__110, ___nl__im__111);
#line 271
c_rt_lib0clear(&___nl__im__110);
#line 271
c_rt_lib0clear(&___nl__im__111);
#line 271
label_269:
;
#line 271
//clear ___nl__bool__107;
#line 271
___nl__bool__94 = !___nl__bool__94;
#line 271
if(___nl__bool__94){ goto label_289;}
#line 272
___nl__int__116 = 0;
#line 272
c_rt_lib0move(&___nl__im__115, c_rt_lib0array_get(___nl__im__4, ___nl__int__116));
#line 272
//clear ___nl__int__116;
#line 272
___nl__int__118 = 0;
#line 272
c_rt_lib0move(&___nl__im__117, c_rt_lib0array_get(___nl__im__4, ___nl__int__118));
#line 272
//clear ___nl__int__118;
#line 272
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__117, ___get_global_string_const(223)));
#line 272
c_rt_lib0clear(&___nl__im__115);
#line 272
c_rt_lib0clear(&___nl__im__117);
#line 272
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__114));
#line 272
c_rt_lib0clear(&___nl__im__114);
#line 272
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_arg(___get_global_string_const(242), ___nl__im__113));
#line 272
c_rt_lib0clear(&___nl__im__113);
#line 272
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__112));
#line 272
c_rt_lib0clear(&___nl__im__112);
#line 273
goto label_349;
#line 273
label_289:
;
#line 273
___nl__bool__94 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(8));
#line 273
___nl__bool__94 = !___nl__bool__94;
#line 273
___nl__bool__119 = !___nl__bool__94;
#line 273
if(___nl__bool__119){ goto label_298;}
#line 273
c_rt_lib0move(&___nl__im__120, nlasm0is_empty(___nl__im__1));
#line 273
___nl__bool__94 = c_rt_lib0check_true_native(___nl__im__120);
#line 273
c_rt_lib0clear(&___nl__im__120);
#line 273
___nl__bool__94 = !___nl__bool__94;
#line 273
label_298:
;
#line 273
//clear ___nl__bool__119;
#line 273
___nl__bool__94 = !___nl__bool__94;
#line 273
if(___nl__bool__94){ goto label_338;}
#line 274
___nl__im_ptr__124 = &((*___ref___rec__3).logic0field);
#line 274
c_rt_lib0copy(&___nl__im__123, (*___nl__im_ptr__124));
#line 274
___nl__im_ptr__124 = NULL;
#line 274
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_string_const(416)));
#line 274
c_rt_lib0clear(&___nl__im__123);
#line 274
c_rt_lib0move(&___nl__im__121, translator_priv0var_type_to_reg_type(___nl__im__2, ___nl__im__122));
#line 274
c_rt_lib0clear(&___nl__im__122);
#line 275
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 275
___nl__bool__125 = nlasm0eq_reg_type(___nl__im__121, ___nl__im__126);
#line 275
c_rt_lib0clear(&___nl__im__126);
#line 275
___nl__bool__125 = !___nl__bool__125;
#line 276
c_rt_lib0copy(&___nl__im__127, ___nl__im__1);
#line 277
___nl__bool__128 = ___nl__bool__125;
#line 277
___nl__bool__128 = !___nl__bool__128;
#line 277
if(___nl__bool__128){ goto label_319;}
#line 277
c_rt_lib0move(&___nl__im__127, translator_priv0new_register(___ref___rec__3, ___nl__im__121));
#line 277
goto label_319;
#line 277
label_319:
;
#line 277
//clear ___nl__bool__128;
#line 278
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 278
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 278
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__127, ___get_global_string_const(266), ___nl__im__131, ___get_global_string_const(268), ___nl__im__132, ___get_global_string_const(265), ___nl__im__4));
#line 278
c_rt_lib0clear(&___nl__im__131);
#line 278
c_rt_lib0clear(&___nl__im__132);
#line 278
c_rt_lib0move(&___nl__im__129, c_rt_lib0ov_mk_arg(___get_global_string_const(232), ___nl__im__130));
#line 278
c_rt_lib0clear(&___nl__im__130);
#line 278
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__129));
#line 278
c_rt_lib0clear(&___nl__im__129);
#line 279
___nl__bool__133 = ___nl__bool__125;
#line 279
___nl__bool__133 = !___nl__bool__133;
#line 279
if(___nl__bool__133){ goto label_335;}
#line 279
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__127, ___ref___rec__3));
#line 279
goto label_335;
#line 279
label_335:
;
#line 279
//clear ___nl__bool__133;
#line 280
goto label_349;
#line 280
label_338:
;
#line 281
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(150)));
#line 281
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(166)));
#line 281
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(266), ___nl__im__136, ___get_global_string_const(268), ___nl__im__137, ___get_global_string_const(265), ___nl__im__4));
#line 281
c_rt_lib0clear(&___nl__im__136);
#line 281
c_rt_lib0clear(&___nl__im__137);
#line 281
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_arg(___get_global_string_const(232), ___nl__im__135));
#line 281
c_rt_lib0clear(&___nl__im__135);
#line 281
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__134));
#line 281
c_rt_lib0clear(&___nl__im__134);
#line 282
goto label_349;
#line 282
label_349:
;
#line 282
//clear ___nl__bool__94;
#line 282
c_rt_lib0clear(&___nl__im__121);
#line 282
//clear ___nl__bool__125;
#line 282
c_rt_lib0clear(&___nl__im__127);
#line 283
___nl__int__139 = c_rt_lib0array_len(___nl__im__37);
#line 283
___nl__int__140 = 1;
#line 283
___nl__int__138 = ___nl__int__139 - ___nl__int__140;
#line 283
//clear ___nl__int__139;
#line 283
//clear ___nl__int__140;
#line 283
label_359:
;
#line 283
___nl__int__142 = 0;
#line 283
___nl__int__143 = ___nl__int__138 >= ___nl__int__142;
#line 283
___nl__bool__141 = ___nl__int__143;
#line 283
//clear ___nl__int__142;
#line 283
//clear ___nl__int__143;
#line 283
___nl__bool__141 = !___nl__bool__141;
#line 283
if(___nl__bool__141){ goto label_410;}
#line 284
c_rt_lib0move(&___nl__im__145, c_rt_lib0int_new(___nl__int__138));
#line 284
c_rt_lib0move(&___nl__im__144, ptd0int_to_string(___nl__im__145));
#line 284
c_rt_lib0clear(&___nl__im__145);
#line 285
___nl__bool__146 = hash0has_key(___nl__im__5, ___nl__im__144);
#line 285
___nl__bool__146 = !___nl__bool__146;
#line 285
___nl__bool__146 = !___nl__bool__146;
#line 285
if(___nl__bool__146){ goto label_378;}
#line 285
c_rt_lib0clear(&___nl__im__144);
#line 285
//clear ___nl__bool__146;
#line 285
goto label_405;
#line 285
goto label_378;
#line 285
label_378:
;
#line 285
//clear ___nl__bool__146;
#line 286
___nl__bool__147 = hash0has_key(___nl__im__6, ___nl__im__144);
#line 286
___nl__bool__147 = !___nl__bool__147;
#line 286
if(___nl__bool__147){ goto label_393;}
#line 287
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__144));
#line 287
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(1336)));
#line 287
c_rt_lib0clear(&___nl__im__149);
#line 287
c_rt_lib0move(&___nl__im__151, c_rt_lib0hash_get_value(___nl__im__6, ___nl__im__144));
#line 287
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__151, ___get_global_string_const(1337)));
#line 287
c_rt_lib0clear(&___nl__im__151);
#line 287
c_rt_lib0delete(translator_priv0move(___nl__im__148, ___nl__im__150, ___ref___rec__3));
#line 287
c_rt_lib0clear(&___nl__im__148);
#line 287
c_rt_lib0clear(&___nl__im__150);
#line 288
goto label_393;
#line 288
label_393:
;
#line 288
//clear ___nl__bool__147;
#line 289
c_rt_lib0move(&___nl__im__154, c_rt_lib0int_new(___nl__int__138));
#line 289
c_rt_lib0move(&___nl__im__153, ptd0int_to_string(___nl__im__154));
#line 289
c_rt_lib0clear(&___nl__im__154);
#line 289
c_rt_lib0move(&___nl__im__152, hash0get_value(___nl__im__5, ___nl__im__153));
#line 289
c_rt_lib0clear(&___nl__im__153);
#line 289
___nl__bool__155 = true;
#line 289
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__152, ___nl__bool__155, ___ref___rec__3));
#line 289
c_rt_lib0clear(&___nl__im__152);
#line 289
//clear ___nl__bool__155;
#line 289
c_rt_lib0clear(&___nl__im__144);
#line 289
label_405:
;
#line 283
___nl__int__156 = 1;
#line 283
___nl__int__138 = ___nl__int__138 - ___nl__int__156;
#line 283
//clear ___nl__int__156;
#line 290
goto label_359;
#line 290
label_410:
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
c_rt_lib0clear(&___nl__im__37);
#line 290
//clear ___nl__int__38;
#line 290
//clear ___nl__int__40;
#line 290
//clear ___nl__int__41;
#line 290
//clear ___nl__bool__42;
#line 290
//clear ___nl__int__43;
#line 290
c_rt_lib0clear(&___nl__im__44);
#line 290
c_rt_lib0clear(&___nl__im__46);
#line 290
//clear ___nl__bool__47;
#line 290
c_rt_lib0clear(&___nl__im__48);
#line 290
c_rt_lib0clear(&___nl__im__49);
#line 290
c_rt_lib0clear(&___nl__im__51);
#line 290
//clear ___nl__int__138;
#line 290
//clear ___nl__bool__141;
#line 290
c_rt_lib0clear(&___nl__im__144);
#line 290
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
#line 294
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 294
___nl__im_ptr__4 = &((*___ref___rec__2).debug0field);
#line 294
c_rt_lib0copy(&___nl__im__5, ___nl__im__3);
#line 294
c_rt_lib0hash_set_value_dec(___nl__im_ptr__4, ___get_global_string_const(549), ___nl__im__5);
#line 294
___nl__im_ptr__4 = NULL;
#line 294
c_rt_lib0clear(&___nl__im__3);
#line 294
c_rt_lib0clear(&___nl__im__5);
#line 295
c_rt_lib0move(&___nl__im__6, translator_priv0save_registers(___ref___rec__2));
#line 296
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 296
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(221));
#line 296
if(___nl__bool__8){ goto label_46;}
#line 298
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(404));
#line 298
if(___nl__bool__8){ goto label_53;}
#line 300
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(33));
#line 300
if(___nl__bool__8){ goto label_60;}
#line 302
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1006));
#line 302
if(___nl__bool__8){ goto label_67;}
#line 304
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1007));
#line 304
if(___nl__bool__8){ goto label_72;}
#line 306
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(560));
#line 306
if(___nl__bool__8){ goto label_77;}
#line 308
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(505));
#line 308
if(___nl__bool__8){ goto label_82;}
#line 310
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1004));
#line 310
if(___nl__bool__8){ goto label_87;}
#line 312
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(234));
#line 312
if(___nl__bool__8){ goto label_92;}
#line 314
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1008));
#line 314
if(___nl__bool__8){ goto label_97;}
#line 316
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(965));
#line 316
if(___nl__bool__8){ goto label_102;}
#line 318
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(229));
#line 318
if(___nl__bool__8){ goto label_109;}
#line 320
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(230));
#line 320
if(___nl__bool__8){ goto label_114;}
#line 322
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(985));
#line 322
if(___nl__bool__8){ goto label_119;}
#line 323
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1009));
#line 323
if(___nl__bool__8){ goto label_121;}
#line 325
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1010));
#line 325
if(___nl__bool__8){ goto label_127;}
#line 327
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(1011));
#line 327
if(___nl__bool__8){ goto label_134;}
#line 327
c_rt_lib0move(&___nl__im__9,___get_global_string_const(15));
#line 327
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__7));
#line 327
nl_die_arg(___nl__im__9);
#line 296
label_46:
;
#line 296
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(221)));
#line 296
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 297
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__10));
#line 297
c_rt_lib0delete(translator_priv0load_const(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 297
c_rt_lib0clear(&___nl__im__12);
#line 298
goto label_141;
#line 298
label_53:
;
#line 298
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(404)));
#line 298
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 299
c_rt_lib0move(&___nl__im__15, translator_priv0make_string(___nl__im__13, ___ref___rec__2));
#line 299
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__1, ___ref___rec__2));
#line 299
c_rt_lib0clear(&___nl__im__15);
#line 300
goto label_141;
#line 300
label_60:
;
#line 300
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(33)));
#line 300
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 301
c_rt_lib0move(&___nl__im__18, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 301
c_rt_lib0delete(translator_priv0load_const(___nl__im__18, ___nl__im__1, ___ref___rec__2));
#line 301
c_rt_lib0clear(&___nl__im__18);
#line 302
goto label_141;
#line 302
label_67:
;
#line 302
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1006)));
#line 302
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 303
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__im__19, ___nl__im__1, ___ref___rec__2));
#line 304
goto label_141;
#line 304
label_72:
;
#line 304
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1007)));
#line 304
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 305
c_rt_lib0delete(translator_priv0load_const(___nl__im__21, ___nl__im__1, ___ref___rec__2));
#line 306
goto label_141;
#line 306
label_77:
;
#line 306
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(560)));
#line 306
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 307
c_rt_lib0delete(translator_priv0print_variant(___nl__im__23, ___nl__im__1, ___ref___rec__2));
#line 308
goto label_141;
#line 308
label_82:
;
#line 308
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(505)));
#line 308
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 309
c_rt_lib0delete(translator_priv0print_variable(___nl__im__25, ___nl__im__1, ___ref___rec__2));
#line 310
goto label_141;
#line 310
label_87:
;
#line 310
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1004)));
#line 310
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 311
c_rt_lib0delete(translator_priv0print_val(___nl__im__27, ___nl__im__1, ___ref___rec__2));
#line 312
goto label_141;
#line 312
label_92:
;
#line 312
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(234)));
#line 312
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 313
c_rt_lib0delete(translator_priv0print_bin_op(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 314
goto label_141;
#line 314
label_97:
;
#line 314
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1008)));
#line 314
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 315
c_rt_lib0delete(translator_priv0print_unary_op(___nl__im__31, ___nl__im__1, ___ref___rec__2));
#line 316
goto label_141;
#line 316
label_102:
;
#line 316
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(965)));
#line 316
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 317
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 317
c_rt_lib0delete(translator_priv0print_fun_val(___nl__im__33, ___nl__im__1, ___nl__im__35, ___ref___rec__2));
#line 317
c_rt_lib0clear(&___nl__im__35);
#line 318
goto label_141;
#line 318
label_109:
;
#line 318
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(229)));
#line 318
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 319
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__im__36, ___nl__im__1, ___ref___rec__2));
#line 320
goto label_141;
#line 320
label_114:
;
#line 320
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(230)));
#line 320
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 321
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__im__38, ___nl__im__1, ___ref___rec__2));
#line 322
goto label_141;
#line 322
label_119:
;
#line 323
goto label_141;
#line 323
label_121:
;
#line 323
c_rt_lib0move(&___nl__im__41, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1009)));
#line 323
c_rt_lib0copy(&___nl__im__40, ___nl__im__41);
#line 324
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(0));
#line 324
nl_die_arg(___nl__im__42);
#line 325
goto label_141;
#line 325
label_127:
;
#line 325
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1010)));
#line 325
c_rt_lib0copy(&___nl__im__43, ___nl__im__44);
#line 326
c_rt_lib0move(&___nl__im__45,___get_global_string_const(1027));
#line 326
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__43, ___nl__im__45, ___nl__im__1, ___ref___rec__2));
#line 326
c_rt_lib0clear(&___nl__im__45);
#line 327
goto label_141;
#line 327
label_134:
;
#line 327
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(1011)));
#line 327
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 328
c_rt_lib0move(&___nl__im__48,___get_global_string_const(189));
#line 328
c_rt_lib0delete(translator_priv0print_post_operator(___nl__im__46, ___nl__im__48, ___nl__im__1, ___ref___rec__2));
#line 328
c_rt_lib0clear(&___nl__im__48);
#line 329
goto label_141;
#line 329
label_141:
;
#line 330
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__6, ___ref___rec__2));
#line 330
c_rt_lib0clear(&___nl__im__0);
#line 330
c_rt_lib0clear(&___nl__im__1);
#line 330
c_rt_lib0clear(&___nl__im__6);
#line 330
c_rt_lib0clear(&___nl__im__7);
#line 330
//clear ___nl__bool__8;
#line 330
c_rt_lib0clear(&___nl__im__9);
#line 330
//clear ___nl__int__10;
#line 330
c_rt_lib0clear(&___nl__im__11);
#line 330
c_rt_lib0clear(&___nl__im__13);
#line 330
c_rt_lib0clear(&___nl__im__14);
#line 330
//clear ___nl__bool__16;
#line 330
c_rt_lib0clear(&___nl__im__17);
#line 330
c_rt_lib0clear(&___nl__im__19);
#line 330
c_rt_lib0clear(&___nl__im__20);
#line 330
c_rt_lib0clear(&___nl__im__21);
#line 330
c_rt_lib0clear(&___nl__im__22);
#line 330
c_rt_lib0clear(&___nl__im__23);
#line 330
c_rt_lib0clear(&___nl__im__24);
#line 330
c_rt_lib0clear(&___nl__im__25);
#line 330
c_rt_lib0clear(&___nl__im__26);
#line 330
c_rt_lib0clear(&___nl__im__27);
#line 330
c_rt_lib0clear(&___nl__im__28);
#line 330
c_rt_lib0clear(&___nl__im__29);
#line 330
c_rt_lib0clear(&___nl__im__30);
#line 330
c_rt_lib0clear(&___nl__im__31);
#line 330
c_rt_lib0clear(&___nl__im__32);
#line 330
c_rt_lib0clear(&___nl__im__33);
#line 330
c_rt_lib0clear(&___nl__im__34);
#line 330
c_rt_lib0clear(&___nl__im__36);
#line 330
c_rt_lib0clear(&___nl__im__37);
#line 330
c_rt_lib0clear(&___nl__im__38);
#line 330
c_rt_lib0clear(&___nl__im__39);
#line 330
c_rt_lib0clear(&___nl__im__40);
#line 330
c_rt_lib0clear(&___nl__im__41);
#line 330
c_rt_lib0clear(&___nl__im__42);
#line 330
c_rt_lib0clear(&___nl__im__43);
#line 330
c_rt_lib0clear(&___nl__im__44);
#line 330
c_rt_lib0clear(&___nl__im__46);
#line 330
c_rt_lib0clear(&___nl__im__47);
#line 330
return NULL;
return NULL;

}

ImmT  translator_priv0print_variable(ImmT  ___nl__im__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
#line 334
c_rt_lib0move(&___nl__im__3, translator_priv0get_var_register(___nl__im__0, ___ref___rec__2));
#line 334
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__3, ___ref___rec__2));
#line 334
c_rt_lib0clear(&___nl__im__3);
#line 334
c_rt_lib0clear(&___nl__im__0);
#line 334
c_rt_lib0clear(&___nl__im__1);
#line 334
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
#line 339
___nl__bool__5 = true;
#line 339
c_rt_lib0move(&___nl__im__4, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__5, ___ref___rec__3));
#line 339
//clear ___nl__bool__5;
#line 340
___nl__int__9 = c_rt_lib0array_len(___nl__im__4);
#line 340
___nl__int__10 = 1;
#line 340
___nl__int__8 = ___nl__int__9 - ___nl__int__10;
#line 340
//clear ___nl__int__9;
#line 340
//clear ___nl__int__10;
#line 340
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__4, ___nl__int__8));
#line 340
//clear ___nl__int__8;
#line 340
___nl__int__13 = c_rt_lib0array_len(___nl__im__4);
#line 340
___nl__int__14 = 1;
#line 340
___nl__int__12 = ___nl__int__13 - ___nl__int__14;
#line 340
//clear ___nl__int__13;
#line 340
//clear ___nl__int__14;
#line 340
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__12));
#line 340
//clear ___nl__int__12;
#line 340
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(218)));
#line 340
c_rt_lib0clear(&___nl__im__7);
#line 340
c_rt_lib0clear(&___nl__im__11);
#line 341
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__6, ___ref___rec__3));
#line 342
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 342
___nl__int__19 = 1;
#line 342
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 342
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(221), ___nl__im__20));
#line 342
//clear ___nl__int__19;
#line 342
c_rt_lib0clear(&___nl__im__20);
#line 342
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 342
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_mk(3, ___get_global_string_const(220), ___nl__im__17, ___get_global_string_const(218), ___nl__im__18, ___get_global_string_const(204), ___nl__im__21));
#line 342
c_rt_lib0clear(&___nl__im__17);
#line 342
c_rt_lib0clear(&___nl__im__18);
#line 342
c_rt_lib0clear(&___nl__im__21);
#line 342
c_rt_lib0move(&___nl__im__15, translator_priv0calc_val(___nl__im__16, ___ref___rec__3));
#line 342
c_rt_lib0clear(&___nl__im__16);
#line 343
c_rt_lib0move(&___nl__im__24,___get_global_string_const(1027));
#line 343
___nl__bool__23 = c_rt_lib0eq(___nl__im__1, ___nl__im__24);
#line 343
c_rt_lib0clear(&___nl__im__24);
#line 343
if(___nl__bool__23){ goto label_40;}
#line 343
c_rt_lib0move(&___nl__im__22,___get_global_string_const(365));
#line 343
goto label_42;
#line 343
label_40:
;
#line 343
c_rt_lib0move(&___nl__im__22,___get_global_string_const(367));
#line 343
label_42:
;
#line 343
//clear ___nl__bool__23;
#line 343
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__6, ___nl__im__6, ___nl__im__15, ___nl__im__22, ___ref___rec__3));
#line 343
c_rt_lib0clear(&___nl__im__22);
#line 344
___nl__bool__25 = true;
#line 344
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__4, ___nl__bool__25, ___ref___rec__3));
#line 344
//clear ___nl__bool__25;
#line 344
c_rt_lib0clear(&___nl__im__0);
#line 344
c_rt_lib0clear(&___nl__im__1);
#line 344
c_rt_lib0clear(&___nl__im__2);
#line 344
c_rt_lib0clear(&___nl__im__4);
#line 344
c_rt_lib0clear(&___nl__im__6);
#line 344
c_rt_lib0clear(&___nl__im__15);
#line 344
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
#line 348
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 348
c_rt_lib0move(&___nl__im__5,___get_global_string_const(363));
#line 348
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 348
c_rt_lib0clear(&___nl__im__4);
#line 348
c_rt_lib0clear(&___nl__im__5);
#line 348
if(___nl__bool__3){ goto label_11;}
#line 348
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 348
c_rt_lib0move(&___nl__im__7,___get_global_string_const(365));
#line 348
___nl__bool__3 = c_rt_lib0eq(___nl__im__6, ___nl__im__7);
#line 348
c_rt_lib0clear(&___nl__im__6);
#line 348
c_rt_lib0clear(&___nl__im__7);
#line 348
label_11:
;
#line 348
if(___nl__bool__3){ goto label_18;}
#line 348
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 348
c_rt_lib0move(&___nl__im__9,___get_global_string_const(367));
#line 348
___nl__bool__3 = c_rt_lib0eq(___nl__im__8, ___nl__im__9);
#line 348
c_rt_lib0clear(&___nl__im__8);
#line 348
c_rt_lib0clear(&___nl__im__9);
#line 348
label_18:
;
#line 348
___nl__bool__3 = !___nl__bool__3;
#line 348
if(___nl__bool__3){ goto label_45;}
#line 349
c_rt_lib0move(&___nl__im__11, nlasm0is_empty(___nl__im__1));
#line 349
___nl__bool__10 = c_rt_lib0check_true_native(___nl__im__11);
#line 349
c_rt_lib0clear(&___nl__im__11);
#line 349
___nl__bool__10 = !___nl__bool__10;
#line 349
if(___nl__bool__10){ goto label_32;}
#line 349
c_rt_lib0clear(&___nl__im__0);
#line 349
c_rt_lib0clear(&___nl__im__1);
#line 349
//clear ___nl__bool__3;
#line 349
//clear ___nl__bool__10;
#line 349
return NULL;
#line 349
goto label_32;
#line 349
label_32:
;
#line 349
//clear ___nl__bool__10;
#line 350
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 350
c_rt_lib0delete(translator_priv0print_val(___nl__im__12, ___nl__im__1, ___ref___rec__2));
#line 350
c_rt_lib0clear(&___nl__im__12);
#line 351
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 351
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__1, ___get_global_string_const(558), ___nl__im__15));
#line 351
c_rt_lib0clear(&___nl__im__15);
#line 351
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(233), ___nl__im__14));
#line 351
c_rt_lib0clear(&___nl__im__14);
#line 351
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__13));
#line 351
c_rt_lib0clear(&___nl__im__13);
#line 352
goto label_179;
#line 352
label_45:
;
#line 352
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 352
c_rt_lib0move(&___nl__im__17,___get_global_string_const(1027));
#line 352
___nl__bool__3 = c_rt_lib0eq(___nl__im__16, ___nl__im__17);
#line 352
c_rt_lib0clear(&___nl__im__16);
#line 352
c_rt_lib0clear(&___nl__im__17);
#line 352
if(___nl__bool__3){ goto label_57;}
#line 352
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 352
c_rt_lib0move(&___nl__im__19,___get_global_string_const(189));
#line 352
___nl__bool__3 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 352
c_rt_lib0clear(&___nl__im__18);
#line 352
c_rt_lib0clear(&___nl__im__19);
#line 352
label_57:
;
#line 352
___nl__bool__3 = !___nl__bool__3;
#line 352
if(___nl__bool__3){ goto label_116;}
#line 353
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 353
___nl__bool__22 = true;
#line 353
c_rt_lib0move(&___nl__im__20, translator_priv0get_value_of_lvalue(___nl__im__21, ___nl__bool__22, ___ref___rec__2));
#line 353
c_rt_lib0clear(&___nl__im__21);
#line 353
//clear ___nl__bool__22;
#line 354
___nl__int__26 = c_rt_lib0array_len(___nl__im__20);
#line 354
___nl__int__27 = 1;
#line 354
___nl__int__25 = ___nl__int__26 - ___nl__int__27;
#line 354
//clear ___nl__int__26;
#line 354
//clear ___nl__int__27;
#line 354
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__20, ___nl__int__25));
#line 354
//clear ___nl__int__25;
#line 354
___nl__int__30 = c_rt_lib0array_len(___nl__im__20);
#line 354
___nl__int__31 = 1;
#line 354
___nl__int__29 = ___nl__int__30 - ___nl__int__31;
#line 354
//clear ___nl__int__30;
#line 354
//clear ___nl__int__31;
#line 354
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__20, ___nl__int__29));
#line 354
//clear ___nl__int__29;
#line 354
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(218)));
#line 354
c_rt_lib0clear(&___nl__im__24);
#line 354
c_rt_lib0clear(&___nl__im__28);
#line 355
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 355
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(220)));
#line 355
c_rt_lib0clear(&___nl__im__35);
#line 355
___nl__int__37 = 1;
#line 355
c_rt_lib0move(&___nl__im__38, c_rt_lib0int_new(___nl__int__37));
#line 355
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(221), ___nl__im__38));
#line 355
//clear ___nl__int__37;
#line 355
c_rt_lib0clear(&___nl__im__38);
#line 355
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 355
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(220), ___nl__im__34, ___get_global_string_const(218), ___nl__im__36, ___get_global_string_const(204), ___nl__im__39));
#line 355
c_rt_lib0clear(&___nl__im__34);
#line 355
c_rt_lib0clear(&___nl__im__36);
#line 355
c_rt_lib0clear(&___nl__im__39);
#line 355
c_rt_lib0move(&___nl__im__32, translator_priv0dest_val(___nl__im__33, ___ref___rec__2));
#line 355
c_rt_lib0clear(&___nl__im__33);
#line 356
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 356
c_rt_lib0move(&___nl__im__43,___get_global_string_const(1027));
#line 356
___nl__bool__41 = c_rt_lib0eq(___nl__im__42, ___nl__im__43);
#line 356
c_rt_lib0clear(&___nl__im__42);
#line 356
c_rt_lib0clear(&___nl__im__43);
#line 356
if(___nl__bool__41){ goto label_105;}
#line 356
c_rt_lib0move(&___nl__im__40,___get_global_string_const(365));
#line 356
goto label_107;
#line 356
label_105:
;
#line 356
c_rt_lib0move(&___nl__im__40,___get_global_string_const(367));
#line 356
label_107:
;
#line 356
//clear ___nl__bool__41;
#line 356
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__23, ___nl__im__23, ___nl__im__32, ___nl__im__40, ___ref___rec__2));
#line 356
c_rt_lib0clear(&___nl__im__40);
#line 357
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__23, ___ref___rec__2));
#line 358
___nl__bool__44 = true;
#line 358
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__20, ___nl__bool__44, ___ref___rec__2));
#line 358
//clear ___nl__bool__44;
#line 359
goto label_179;
#line 359
label_116:
;
#line 359
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 359
c_rt_lib0move(&___nl__im__46,___get_global_string_const(298));
#line 359
___nl__bool__3 = c_rt_lib0eq(___nl__im__45, ___nl__im__46);
#line 359
c_rt_lib0clear(&___nl__im__45);
#line 359
c_rt_lib0clear(&___nl__im__46);
#line 359
___nl__bool__3 = !___nl__bool__3;
#line 359
if(___nl__bool__3){ goto label_175;}
#line 360
c_rt_lib0move(&___nl__im__48, nlasm0is_empty(___nl__im__1));
#line 360
___nl__bool__47 = c_rt_lib0check_true_native(___nl__im__48);
#line 360
c_rt_lib0clear(&___nl__im__48);
#line 360
___nl__bool__47 = !___nl__bool__47;
#line 360
if(___nl__bool__47){ goto label_138;}
#line 360
c_rt_lib0clear(&___nl__im__0);
#line 360
c_rt_lib0clear(&___nl__im__1);
#line 360
//clear ___nl__bool__3;
#line 360
c_rt_lib0clear(&___nl__im__20);
#line 360
c_rt_lib0clear(&___nl__im__23);
#line 360
c_rt_lib0clear(&___nl__im__32);
#line 360
//clear ___nl__bool__47;
#line 360
return NULL;
#line 360
goto label_138;
#line 360
label_138:
;
#line 360
//clear ___nl__bool__47;
#line 361
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 361
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(218)));
#line 361
c_rt_lib0clear(&___nl__im__51);
#line 361
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 361
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(218)));
#line 361
c_rt_lib0clear(&___nl__im__53);
#line 361
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__52, ___get_global_string_const(1009)));
#line 361
c_rt_lib0clear(&___nl__im__50);
#line 361
c_rt_lib0clear(&___nl__im__52);
#line 362
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(150)));
#line 362
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(166)));
#line 362
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(150), ___nl__im__56, ___get_global_string_const(166), ___nl__im__57));
#line 362
c_rt_lib0clear(&___nl__im__56);
#line 362
c_rt_lib0clear(&___nl__im__57);
#line 362
c_rt_lib0move(&___nl__im__54, c_rt_lib0ov_mk_arg(___get_global_string_const(237), ___nl__im__55));
#line 362
c_rt_lib0clear(&___nl__im__55);
#line 362
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__54));
#line 362
c_rt_lib0clear(&___nl__im__54);
#line 363
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__1));
#line 363
c_rt_lib0move(&___nl__im__61,___get_global_string_const(39));
#line 363
___nl__int__62 = 1;
#line 363
___nl__int__62 = -___nl__int__62;
#line 363
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 363
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 363
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_mk(5, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__60, ___get_global_string_const(579), ___nl__im__61, ___get_global_string_const(564), ___nl__im__63, ___get_global_string_const(581), ___nl__im__64));
#line 363
c_rt_lib0clear(&___nl__im__60);
#line 363
c_rt_lib0clear(&___nl__im__61);
#line 363
//clear ___nl__int__62;
#line 363
c_rt_lib0clear(&___nl__im__63);
#line 363
c_rt_lib0clear(&___nl__im__64);
#line 363
c_rt_lib0move(&___nl__im__58, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__59));
#line 363
c_rt_lib0clear(&___nl__im__59);
#line 363
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__58));
#line 363
c_rt_lib0clear(&___nl__im__58);
#line 364
goto label_179;
#line 364
label_175:
;
#line 365
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_mk(0));
#line 365
nl_die_arg(___nl__im__65);
#line 366
goto label_179;
#line 366
label_179:
;
#line 366
//clear ___nl__bool__3;
#line 366
c_rt_lib0clear(&___nl__im__20);
#line 366
c_rt_lib0clear(&___nl__im__23);
#line 366
c_rt_lib0clear(&___nl__im__32);
#line 366
c_rt_lib0clear(&___nl__im__49);
#line 366
c_rt_lib0clear(&___nl__im__65);
#line 366
c_rt_lib0clear(&___nl__im__0);
#line 366
c_rt_lib0clear(&___nl__im__1);
#line 366
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
INT  ___nl__int__108 = 0;
ImmT  ___nl__im__109 = NULL;
bool  ___nl__bool__110 = false;
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
ImmT  ___nl__im__141 = NULL;
INT  ___nl__int__142 = 0;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
bool  ___nl__bool__145 = false;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
bool  ___nl__bool__154 = false;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
bool  ___nl__bool__158 = false;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
bool  ___nl__bool__164 = false;
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
ImmT  ___nl__im__180 = NULL;
INT  ___nl__int__181 = 0;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
bool  ___nl__bool__186 = false;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
ImmT  ___nl__im__190 = NULL;
bool  ___nl__bool__191 = false;
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
INT  ___nl__int__203 = 0;
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
ImmT  ___nl__im__222 = NULL;
bool  ___nl__bool__223 = false;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
INT  ___nl__int__226 = 0;
INT  ___nl__int__227 = 0;
INT  ___nl__int__228 = 0;
ImmT  ___nl__im__229 = NULL;
INT  ___nl__int__230 = 0;
INT  ___nl__int__231 = 0;
INT  ___nl__int__232 = 0;
ImmT  ___nl__im__233 = NULL;
bool  ___nl__bool__234 = false;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
INT  ___nl__int__237 = 0;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
INT  ___nl__int__248 = 0;
ImmT  ___nl__im__249 = NULL;
bool  ___nl__bool__250 = false;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
#line 370
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 370
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 370
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(234)));
#line 370
c_rt_lib0clear(&___nl__im__4);
#line 370
c_rt_lib0clear(&___nl__im__5);
#line 371
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 371
c_rt_lib0move(&___nl__im__8,___get_global_string_const(1015));
#line 371
___nl__bool__6 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 371
c_rt_lib0clear(&___nl__im__7);
#line 371
c_rt_lib0clear(&___nl__im__8);
#line 371
___nl__bool__6 = !___nl__bool__6;
#line 371
if(___nl__bool__6){ goto label_146;}
#line 374
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 374
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(204)));
#line 374
c_rt_lib0clear(&___nl__im__13);
#line 374
___nl__im_ptr__16 = &((*___ref___rec__2).logic0field);
#line 374
c_rt_lib0copy(&___nl__im__15, (*___nl__im_ptr__16));
#line 374
___nl__im_ptr__16 = NULL;
#line 374
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(416)));
#line 374
c_rt_lib0clear(&___nl__im__15);
#line 374
___nl__bool__11 = tct0is_own_type(___nl__im__12, ___nl__im__14);
#line 374
c_rt_lib0clear(&___nl__im__12);
#line 374
c_rt_lib0clear(&___nl__im__14);
#line 374
___nl__bool__11 = !___nl__bool__11;
#line 374
if(___nl__bool__11){ goto label_51;}
#line 375
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 375
___nl__bool__18 = false;
#line 375
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__17, ___nl__bool__18, ___ref___rec__2));
#line 375
c_rt_lib0clear(&___nl__im__17);
#line 375
//clear ___nl__bool__18;
#line 376
___nl__int__21 = c_rt_lib0array_len(___nl__im__9);
#line 376
___nl__int__22 = 1;
#line 376
___nl__int__20 = ___nl__int__21 - ___nl__int__22;
#line 376
//clear ___nl__int__21;
#line 376
//clear ___nl__int__22;
#line 376
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__9, ___nl__int__20));
#line 376
//clear ___nl__int__20;
#line 376
___nl__int__25 = c_rt_lib0array_len(___nl__im__9);
#line 376
___nl__int__26 = 1;
#line 376
___nl__int__24 = ___nl__int__25 - ___nl__int__26;
#line 376
//clear ___nl__int__25;
#line 376
//clear ___nl__int__26;
#line 376
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_get(___nl__im__9, ___nl__int__24));
#line 376
//clear ___nl__int__24;
#line 376
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__23, ___get_global_string_const(218)));
#line 376
c_rt_lib0clear(&___nl__im__19);
#line 376
c_rt_lib0clear(&___nl__im__23);
#line 377
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 377
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__27, ___nl__im__10, ___ref___rec__2));
#line 377
c_rt_lib0clear(&___nl__im__27);
#line 378
goto label_138;
#line 378
label_51:
;
#line 378
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 378
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(218)));
#line 378
c_rt_lib0clear(&___nl__im__29);
#line 378
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(505));
#line 378
c_rt_lib0clear(&___nl__im__28);
#line 378
___nl__bool__11 = !___nl__bool__11;
#line 378
if(___nl__bool__11){ goto label_85;}
#line 379
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 379
___nl__bool__31 = false;
#line 379
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__30, ___nl__bool__31, ___ref___rec__2));
#line 379
c_rt_lib0clear(&___nl__im__30);
#line 379
//clear ___nl__bool__31;
#line 380
___nl__int__34 = c_rt_lib0array_len(___nl__im__9);
#line 380
___nl__int__35 = 1;
#line 380
___nl__int__33 = ___nl__int__34 - ___nl__int__35;
#line 380
//clear ___nl__int__34;
#line 380
//clear ___nl__int__35;
#line 380
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__9, ___nl__int__33));
#line 380
//clear ___nl__int__33;
#line 380
___nl__int__38 = c_rt_lib0array_len(___nl__im__9);
#line 380
___nl__int__39 = 1;
#line 380
___nl__int__37 = ___nl__int__38 - ___nl__int__39;
#line 380
//clear ___nl__int__38;
#line 380
//clear ___nl__int__39;
#line 380
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__9, ___nl__int__37));
#line 380
//clear ___nl__int__37;
#line 380
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__36, ___get_global_string_const(218)));
#line 380
c_rt_lib0clear(&___nl__im__32);
#line 380
c_rt_lib0clear(&___nl__im__36);
#line 381
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 381
c_rt_lib0delete(translator_priv0print_val(___nl__im__40, ___nl__im__10, ___ref___rec__2));
#line 381
c_rt_lib0clear(&___nl__im__40);
#line 382
goto label_138;
#line 382
label_85:
;
#line 383
c_rt_lib0move(&___nl__im__41, nlasm0is_empty(___nl__im__1));
#line 384
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__41);
#line 384
___nl__bool__42 = !___nl__bool__42;
#line 384
if(___nl__bool__42){ goto label_101;}
#line 385
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 385
___nl__int__44 = 1;
#line 385
___nl__int__44 = -___nl__int__44;
#line 385
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__44));
#line 385
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 385
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__43, ___get_global_string_const(217), ___nl__im__45, ___get_global_string_const(351), ___nl__im__46));
#line 385
c_rt_lib0clear(&___nl__im__43);
#line 385
//clear ___nl__int__44;
#line 385
c_rt_lib0clear(&___nl__im__45);
#line 385
c_rt_lib0clear(&___nl__im__46);
#line 386
goto label_101;
#line 386
label_101:
;
#line 386
//clear ___nl__bool__42;
#line 387
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 387
c_rt_lib0move(&___nl__im__47, translator_priv0dest_val(___nl__im__48, ___ref___rec__2));
#line 387
c_rt_lib0clear(&___nl__im__48);
#line 388
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 388
___nl__bool__50 = false;
#line 388
c_rt_lib0move(&___nl__im__9, translator_priv0get_value_of_lvalue(___nl__im__49, ___nl__bool__50, ___ref___rec__2));
#line 388
c_rt_lib0clear(&___nl__im__49);
#line 388
//clear ___nl__bool__50;
#line 389
___nl__int__53 = c_rt_lib0array_len(___nl__im__9);
#line 389
___nl__int__54 = 1;
#line 389
___nl__int__52 = ___nl__int__53 - ___nl__int__54;
#line 389
//clear ___nl__int__53;
#line 389
//clear ___nl__int__54;
#line 389
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get(___nl__im__9, ___nl__int__52));
#line 389
//clear ___nl__int__52;
#line 389
___nl__int__57 = c_rt_lib0array_len(___nl__im__9);
#line 389
___nl__int__58 = 1;
#line 389
___nl__int__56 = ___nl__int__57 - ___nl__int__58;
#line 389
//clear ___nl__int__57;
#line 389
//clear ___nl__int__58;
#line 389
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__9, ___nl__int__56));
#line 389
//clear ___nl__int__56;
#line 389
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__55, ___get_global_string_const(218)));
#line 389
c_rt_lib0clear(&___nl__im__51);
#line 389
c_rt_lib0clear(&___nl__im__55);
#line 390
c_rt_lib0delete(translator_priv0move(___nl__im__10, ___nl__im__47, ___ref___rec__2));
#line 391
___nl__bool__59 = c_rt_lib0check_true_native(___nl__im__41);
#line 391
___nl__bool__59 = !___nl__bool__59;
#line 391
___nl__bool__59 = !___nl__bool__59;
#line 391
if(___nl__bool__59){ goto label_135;}
#line 392
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__10, ___ref___rec__2));
#line 393
goto label_135;
#line 393
label_135:
;
#line 393
//clear ___nl__bool__59;
#line 394
goto label_138;
#line 394
label_138:
;
#line 394
//clear ___nl__bool__11;
#line 394
c_rt_lib0clear(&___nl__im__41);
#line 394
c_rt_lib0clear(&___nl__im__47);
#line 395
___nl__bool__60 = false;
#line 395
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__9, ___nl__bool__60, ___ref___rec__2));
#line 395
//clear ___nl__bool__60;
#line 396
goto label_728;
#line 396
label_146:
;
#line 396
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 396
c_rt_lib0move(&___nl__im__62,___get_global_string_const(1030));
#line 396
___nl__bool__6 = c_rt_lib0eq(___nl__im__61, ___nl__im__62);
#line 396
c_rt_lib0clear(&___nl__im__61);
#line 396
c_rt_lib0clear(&___nl__im__62);
#line 396
___nl__bool__6 = !___nl__bool__6;
#line 396
if(___nl__bool__6){ goto label_184;}
#line 397
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 397
___nl__bool__65 = true;
#line 397
c_rt_lib0move(&___nl__im__63, translator_priv0get_value_of_lvalue(___nl__im__64, ___nl__bool__65, ___ref___rec__2));
#line 397
c_rt_lib0clear(&___nl__im__64);
#line 397
//clear ___nl__bool__65;
#line 398
___nl__int__69 = c_rt_lib0array_len(___nl__im__63);
#line 398
___nl__int__70 = 1;
#line 398
___nl__int__68 = ___nl__int__69 - ___nl__int__70;
#line 398
//clear ___nl__int__69;
#line 398
//clear ___nl__int__70;
#line 398
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get(___nl__im__63, ___nl__int__68));
#line 398
//clear ___nl__int__68;
#line 398
___nl__int__73 = c_rt_lib0array_len(___nl__im__63);
#line 398
___nl__int__74 = 1;
#line 398
___nl__int__72 = ___nl__int__73 - ___nl__int__74;
#line 398
//clear ___nl__int__73;
#line 398
//clear ___nl__int__74;
#line 398
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_get(___nl__im__63, ___nl__int__72));
#line 398
//clear ___nl__int__72;
#line 398
c_rt_lib0move(&___nl__im__66, c_rt_lib0priv_as(___nl__im__71, ___get_global_string_const(218)));
#line 398
c_rt_lib0clear(&___nl__im__67);
#line 398
c_rt_lib0clear(&___nl__im__71);
#line 399
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 399
c_rt_lib0move(&___nl__im__75, translator_priv0calc_val(___nl__im__76, ___ref___rec__2));
#line 399
c_rt_lib0clear(&___nl__im__76);
#line 400
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__66, ___nl__im__75, ___ref___rec__2));
#line 401
___nl__bool__77 = true;
#line 401
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__63, ___nl__bool__77, ___ref___rec__2));
#line 401
//clear ___nl__bool__77;
#line 402
goto label_728;
#line 402
label_184:
;
#line 402
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 402
c_rt_lib0move(&___nl__im__79,___get_global_string_const(1001));
#line 402
___nl__bool__6 = c_rt_lib0eq(___nl__im__78, ___nl__im__79);
#line 402
c_rt_lib0clear(&___nl__im__78);
#line 402
c_rt_lib0clear(&___nl__im__79);
#line 402
if(___nl__bool__6){ goto label_196;}
#line 402
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 402
c_rt_lib0move(&___nl__im__81,___get_global_string_const(1002));
#line 402
___nl__bool__6 = c_rt_lib0eq(___nl__im__80, ___nl__im__81);
#line 402
c_rt_lib0clear(&___nl__im__80);
#line 402
c_rt_lib0clear(&___nl__im__81);
#line 402
label_196:
;
#line 402
if(___nl__bool__6){ goto label_203;}
#line 402
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 402
c_rt_lib0move(&___nl__im__83,___get_global_string_const(576));
#line 402
___nl__bool__6 = c_rt_lib0eq(___nl__im__82, ___nl__im__83);
#line 402
c_rt_lib0clear(&___nl__im__82);
#line 402
c_rt_lib0clear(&___nl__im__83);
#line 402
label_203:
;
#line 402
if(___nl__bool__6){ goto label_210;}
#line 402
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 402
c_rt_lib0move(&___nl__im__85,___get_global_string_const(1003));
#line 402
___nl__bool__6 = c_rt_lib0eq(___nl__im__84, ___nl__im__85);
#line 402
c_rt_lib0clear(&___nl__im__84);
#line 402
c_rt_lib0clear(&___nl__im__85);
#line 402
label_210:
;
#line 402
___nl__bool__6 = !___nl__bool__6;
#line 402
if(___nl__bool__6){ goto label_555;}
#line 403
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 403
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(204)));
#line 403
c_rt_lib0clear(&___nl__im__88);
#line 403
___nl__im_ptr__91 = &((*___ref___rec__2).logic0field);
#line 403
c_rt_lib0copy(&___nl__im__90, (*___nl__im_ptr__91));
#line 403
___nl__im_ptr__91 = NULL;
#line 403
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_string_const(416)));
#line 403
c_rt_lib0clear(&___nl__im__90);
#line 403
___nl__bool__86 = tct0is_own_type(___nl__im__87, ___nl__im__89);
#line 403
c_rt_lib0clear(&___nl__im__87);
#line 403
c_rt_lib0clear(&___nl__im__89);
#line 403
___nl__bool__86 = !___nl__bool__86;
#line 403
if(___nl__bool__86){ goto label_375;}
#line 404
___nl__bool__93 = true;
#line 404
c_rt_lib0move(&___nl__im__92, translator_priv0get_value_of_lvalue(___nl__im__0, ___nl__bool__93, ___ref___rec__2));
#line 404
//clear ___nl__bool__93;
#line 405
___nl__int__97 = c_rt_lib0array_len(___nl__im__92);
#line 405
___nl__int__98 = 1;
#line 405
___nl__int__96 = ___nl__int__97 - ___nl__int__98;
#line 405
//clear ___nl__int__97;
#line 405
//clear ___nl__int__98;
#line 405
c_rt_lib0move(&___nl__im__95, c_rt_lib0array_get(___nl__im__92, ___nl__int__96));
#line 405
//clear ___nl__int__96;
#line 405
___nl__int__101 = c_rt_lib0array_len(___nl__im__92);
#line 405
___nl__int__102 = 1;
#line 405
___nl__int__100 = ___nl__int__101 - ___nl__int__102;
#line 405
//clear ___nl__int__101;
#line 405
//clear ___nl__int__102;
#line 405
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_get(___nl__im__92, ___nl__int__100));
#line 405
//clear ___nl__int__100;
#line 405
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__99, ___get_global_string_const(218)));
#line 405
c_rt_lib0clear(&___nl__im__95);
#line 405
c_rt_lib0clear(&___nl__im__99);
#line 405
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__94, ___ref___rec__2));
#line 405
c_rt_lib0clear(&___nl__im__94);
#line 406
___nl__int__104 = c_rt_lib0array_len(___nl__im__92);
#line 406
___nl__int__105 = 1;
#line 406
___nl__int__103 = ___nl__int__104 - ___nl__int__105;
#line 406
//clear ___nl__int__104;
#line 406
//clear ___nl__int__105;
#line 406
label_253:
;
#line 406
___nl__int__107 = 0;
#line 406
___nl__int__108 = ___nl__int__103 >= ___nl__int__107;
#line 406
___nl__bool__106 = ___nl__int__108;
#line 406
//clear ___nl__int__107;
#line 406
//clear ___nl__int__108;
#line 406
___nl__bool__106 = !___nl__bool__106;
#line 406
if(___nl__bool__106){ goto label_373;}
#line 407
c_rt_lib0move(&___nl__im__109, c_rt_lib0array_get(___nl__im__92, ___nl__int__103));
#line 407
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(218));
#line 407
if(___nl__bool__110){ goto label_283;}
#line 408
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(361));
#line 408
if(___nl__bool__110){ goto label_287;}
#line 409
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(1319));
#line 409
if(___nl__bool__110){ goto label_291;}
#line 410
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(575));
#line 410
if(___nl__bool__110){ goto label_295;}
#line 411
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(1029));
#line 411
if(___nl__bool__110){ goto label_299;}
#line 412
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(253));
#line 412
if(___nl__bool__110){ goto label_303;}
#line 414
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(255));
#line 414
if(___nl__bool__110){ goto label_314;}
#line 416
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(259));
#line 416
if(___nl__bool__110){ goto label_325;}
#line 418
___nl__bool__110 = c_rt_lib0priv_is(___nl__im__109, ___get_global_string_const(257));
#line 418
if(___nl__bool__110){ goto label_336;}
#line 418
c_rt_lib0move(&___nl__im__111,___get_global_string_const(15));
#line 418
c_rt_lib0move(&___nl__im__111, c_rt_lib0array_mk(2, ___nl__im__111, ___nl__im__109));
#line 418
nl_die_arg(___nl__im__111);
#line 407
label_283:
;
#line 407
c_rt_lib0move(&___nl__im__113, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(218)));
#line 407
c_rt_lib0copy(&___nl__im__112, ___nl__im__113);
#line 408
goto label_347;
#line 408
label_287:
;
#line 408
c_rt_lib0move(&___nl__im__115, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(361)));
#line 408
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 409
goto label_347;
#line 409
label_291:
;
#line 409
c_rt_lib0move(&___nl__im__117, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(1319)));
#line 409
c_rt_lib0copy(&___nl__im__116, ___nl__im__117);
#line 410
goto label_347;
#line 410
label_295:
;
#line 410
c_rt_lib0move(&___nl__im__119, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(575)));
#line 410
c_rt_lib0copy(&___nl__im__118, ___nl__im__119);
#line 411
goto label_347;
#line 411
label_299:
;
#line 411
c_rt_lib0move(&___nl__im__121, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(1029)));
#line 411
c_rt_lib0copy(&___nl__im__120, ___nl__im__121);
#line 412
goto label_347;
#line 412
label_303:
;
#line 412
c_rt_lib0move(&___nl__im__123, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(253)));
#line 412
c_rt_lib0copy(&___nl__im__122, ___nl__im__123);
#line 413
c_rt_lib0move(&___nl__im__124, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(1332)));
#line 413
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(1331)));
#line 413
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__122, ___get_global_string_const(603)));
#line 413
c_rt_lib0delete(translator_priv0release_field(___nl__im__124, ___nl__im__125, ___nl__im__126, ___ref___rec__2));
#line 413
c_rt_lib0clear(&___nl__im__124);
#line 413
c_rt_lib0clear(&___nl__im__125);
#line 413
c_rt_lib0clear(&___nl__im__126);
#line 414
goto label_347;
#line 414
label_314:
;
#line 414
c_rt_lib0move(&___nl__im__128, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(255)));
#line 414
c_rt_lib0copy(&___nl__im__127, ___nl__im__128);
#line 415
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__127, ___get_global_string_const(1332)));
#line 415
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__127, ___get_global_string_const(1331)));
#line 415
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__127, ___get_global_string_const(361)));
#line 415
c_rt_lib0delete(translator_priv0release_index(___nl__im__129, ___nl__im__130, ___nl__im__131, ___ref___rec__2));
#line 415
c_rt_lib0clear(&___nl__im__129);
#line 415
c_rt_lib0clear(&___nl__im__130);
#line 415
c_rt_lib0clear(&___nl__im__131);
#line 416
goto label_347;
#line 416
label_325:
;
#line 416
c_rt_lib0move(&___nl__im__133, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(259)));
#line 416
c_rt_lib0copy(&___nl__im__132, ___nl__im__133);
#line 417
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_string_const(1332)));
#line 417
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_string_const(1331)));
#line 417
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_string_const(579)));
#line 417
c_rt_lib0delete(translator_priv0release_variant(___nl__im__134, ___nl__im__135, ___nl__im__136, ___ref___rec__2));
#line 417
c_rt_lib0clear(&___nl__im__134);
#line 417
c_rt_lib0clear(&___nl__im__135);
#line 417
c_rt_lib0clear(&___nl__im__136);
#line 418
goto label_347;
#line 418
label_336:
;
#line 418
c_rt_lib0move(&___nl__im__138, c_rt_lib0priv_as(___nl__im__109, ___get_global_string_const(257)));
#line 418
c_rt_lib0copy(&___nl__im__137, ___nl__im__138);
#line 419
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(1332)));
#line 419
c_rt_lib0move(&___nl__im__140, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(1331)));
#line 419
c_rt_lib0move(&___nl__im__141, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(361)));
#line 419
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__139, ___nl__im__140, ___nl__im__141, ___ref___rec__2));
#line 419
c_rt_lib0clear(&___nl__im__139);
#line 419
c_rt_lib0clear(&___nl__im__140);
#line 419
c_rt_lib0clear(&___nl__im__141);
#line 420
goto label_347;
#line 420
label_347:
;
#line 420
c_rt_lib0clear(&___nl__im__109);
#line 420
//clear ___nl__bool__110;
#line 420
c_rt_lib0clear(&___nl__im__111);
#line 420
c_rt_lib0clear(&___nl__im__112);
#line 420
c_rt_lib0clear(&___nl__im__113);
#line 420
c_rt_lib0clear(&___nl__im__114);
#line 420
c_rt_lib0clear(&___nl__im__115);
#line 420
c_rt_lib0clear(&___nl__im__116);
#line 420
c_rt_lib0clear(&___nl__im__117);
#line 420
c_rt_lib0clear(&___nl__im__118);
#line 420
c_rt_lib0clear(&___nl__im__119);
#line 420
c_rt_lib0clear(&___nl__im__120);
#line 420
c_rt_lib0clear(&___nl__im__121);
#line 420
c_rt_lib0clear(&___nl__im__122);
#line 420
c_rt_lib0clear(&___nl__im__123);
#line 420
c_rt_lib0clear(&___nl__im__127);
#line 420
c_rt_lib0clear(&___nl__im__128);
#line 420
c_rt_lib0clear(&___nl__im__132);
#line 420
c_rt_lib0clear(&___nl__im__133);
#line 420
c_rt_lib0clear(&___nl__im__137);
#line 420
c_rt_lib0clear(&___nl__im__138);
#line 406
___nl__int__142 = 1;
#line 406
___nl__int__103 = ___nl__int__103 - ___nl__int__142;
#line 406
//clear ___nl__int__142;
#line 421
goto label_253;
#line 421
label_373:
;
#line 422
goto label_527;
#line 422
label_375:
;
#line 423
c_rt_lib0move(&___nl__im__144, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 423
c_rt_lib0move(&___nl__im__143, translator_priv0dest_val(___nl__im__144, ___ref___rec__2));
#line 423
c_rt_lib0clear(&___nl__im__144);
#line 424
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 424
c_rt_lib0move(&___nl__im__147,___get_global_string_const(1001));
#line 424
___nl__bool__145 = c_rt_lib0eq(___nl__im__146, ___nl__im__147);
#line 424
c_rt_lib0clear(&___nl__im__146);
#line 424
c_rt_lib0clear(&___nl__im__147);
#line 424
___nl__bool__145 = !___nl__bool__145;
#line 424
if(___nl__bool__145){ goto label_391;}
#line 425
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 425
c_rt_lib0move(&___nl__im__148, translator_priv0calc_val(___nl__im__149, ___ref___rec__2));
#line 425
c_rt_lib0clear(&___nl__im__149);
#line 426
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__im__1, ___nl__im__143, ___nl__im__148, ___ref___rec__2));
#line 427
goto label_513;
#line 427
label_391:
;
#line 427
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 427
c_rt_lib0move(&___nl__im__151,___get_global_string_const(1002));
#line 427
___nl__bool__145 = c_rt_lib0eq(___nl__im__150, ___nl__im__151);
#line 427
c_rt_lib0clear(&___nl__im__150);
#line 427
c_rt_lib0clear(&___nl__im__151);
#line 427
___nl__bool__145 = !___nl__bool__145;
#line 427
if(___nl__bool__145){ goto label_435;}
#line 428
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 428
c_rt_lib0move(&___nl__im__152, translator_priv0calc_val(___nl__im__153, ___ref___rec__2));
#line 428
c_rt_lib0clear(&___nl__im__153);
#line 429
c_rt_lib0move(&___nl__im__155, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 429
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 429
___nl__bool__154 = nlasm0eq_reg_type(___nl__im__155, ___nl__im__156);
#line 429
c_rt_lib0clear(&___nl__im__155);
#line 429
c_rt_lib0clear(&___nl__im__156);
#line 429
___nl__bool__154 = !___nl__bool__154;
#line 430
c_rt_lib0copy(&___nl__im__157, ___nl__im__1);
#line 431
___nl__bool__158 = ___nl__bool__154;
#line 431
___nl__bool__158 = !___nl__bool__158;
#line 431
if(___nl__bool__158){ goto label_416;}
#line 431
c_rt_lib0move(&___nl__im__159, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 431
c_rt_lib0move(&___nl__im__157, translator_priv0new_register(___ref___rec__2, ___nl__im__159));
#line 431
c_rt_lib0clear(&___nl__im__159);
#line 431
goto label_416;
#line 431
label_416:
;
#line 431
//clear ___nl__bool__158;
#line 432
c_rt_lib0move(&___nl__im__160,___get_global_string_const(768));
#line 432
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__143));
#line 432
c_rt_lib0move(&___nl__im__163, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__152));
#line 432
c_rt_lib0move(&___nl__im__161, c_rt_lib0array_mk(2, ___nl__im__162, ___nl__im__163));
#line 432
c_rt_lib0clear(&___nl__im__162);
#line 432
c_rt_lib0clear(&___nl__im__163);
#line 432
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__157, ___nl__im__160, ___nl__im__161, ___ref___rec__2));
#line 432
c_rt_lib0clear(&___nl__im__160);
#line 432
c_rt_lib0clear(&___nl__im__161);
#line 433
___nl__bool__164 = ___nl__bool__154;
#line 433
___nl__bool__164 = !___nl__bool__164;
#line 433
if(___nl__bool__164){ goto label_432;}
#line 433
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__157, ___ref___rec__2));
#line 433
goto label_432;
#line 433
label_432:
;
#line 433
//clear ___nl__bool__164;
#line 434
goto label_513;
#line 434
label_435:
;
#line 434
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 434
c_rt_lib0move(&___nl__im__166,___get_global_string_const(576));
#line 434
___nl__bool__145 = c_rt_lib0eq(___nl__im__165, ___nl__im__166);
#line 434
c_rt_lib0clear(&___nl__im__165);
#line 434
c_rt_lib0clear(&___nl__im__166);
#line 434
___nl__bool__145 = !___nl__bool__145;
#line 434
if(___nl__bool__145){ goto label_454;}
#line 435
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 435
c_rt_lib0move(&___nl__im__168, c_rt_lib0hash_get_value_dec(___nl__im__169, ___get_global_string_const(218)));
#line 435
c_rt_lib0clear(&___nl__im__169);
#line 435
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 435
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__171, ___get_global_string_const(218)));
#line 435
c_rt_lib0clear(&___nl__im__171);
#line 435
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__170, ___get_global_string_const(1007)));
#line 435
c_rt_lib0clear(&___nl__im__168);
#line 435
c_rt_lib0clear(&___nl__im__170);
#line 436
c_rt_lib0delete(translator_priv0print_get_value(___nl__im__1, ___nl__im__143, ___nl__im__167, ___ref___rec__2));
#line 437
goto label_513;
#line 437
label_454:
;
#line 437
c_rt_lib0move(&___nl__im__172, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 437
c_rt_lib0move(&___nl__im__173,___get_global_string_const(1003));
#line 437
___nl__bool__145 = c_rt_lib0eq(___nl__im__172, ___nl__im__173);
#line 437
c_rt_lib0clear(&___nl__im__172);
#line 437
c_rt_lib0clear(&___nl__im__173);
#line 437
___nl__bool__145 = !___nl__bool__145;
#line 437
if(___nl__bool__145){ goto label_509;}
#line 438
c_rt_lib0move(&___nl__im__175, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 438
c_rt_lib0move(&___nl__im__174, translator_priv0dest_val(___nl__im__175, ___ref___rec__2));
#line 438
c_rt_lib0clear(&___nl__im__175);
#line 439
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 439
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__178, ___get_global_string_const(218)));
#line 439
c_rt_lib0clear(&___nl__im__178);
#line 439
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 439
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value_dec(___nl__im__180, ___get_global_string_const(218)));
#line 439
c_rt_lib0clear(&___nl__im__180);
#line 439
c_rt_lib0move(&___nl__im__176, c_rt_lib0priv_as(___nl__im__179, ___get_global_string_const(1007)));
#line 439
c_rt_lib0clear(&___nl__im__177);
#line 439
c_rt_lib0clear(&___nl__im__179);
#line 440
c_rt_lib0move(&___nl__im__183, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 440
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__183, ___get_global_string_const(204)));
#line 440
c_rt_lib0clear(&___nl__im__183);
#line 440
___nl__int__181 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__182, ___nl__im__176);
#line 440
c_rt_lib0clear(&___nl__im__182);
#line 441
c_rt_lib0move(&___nl__im__184, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 442
c_rt_lib0copy(&___nl__im__185, ___nl__im__1);
#line 443
c_rt_lib0move(&___nl__im__187, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 443
___nl__bool__186 = nlasm0eq_reg_type(___nl__im__187, ___nl__im__184);
#line 443
c_rt_lib0clear(&___nl__im__187);
#line 443
___nl__bool__186 = !___nl__bool__186;
#line 443
___nl__bool__186 = !___nl__bool__186;
#line 443
if(___nl__bool__186){ goto label_489;}
#line 444
c_rt_lib0move(&___nl__im__185, translator_priv0new_register(___ref___rec__2, ___nl__im__184));
#line 445
goto label_489;
#line 445
label_489:
;
#line 445
//clear ___nl__bool__186;
#line 446
c_rt_lib0move(&___nl__im__190, c_rt_lib0int_new(___nl__int__181));
#line 446
c_rt_lib0move(&___nl__im__189, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__185, ___get_global_string_const(73), ___nl__im__174, ___get_global_string_const(204), ___nl__im__176, ___get_global_string_const(564), ___nl__im__190));
#line 446
c_rt_lib0clear(&___nl__im__190);
#line 446
c_rt_lib0move(&___nl__im__188, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__189));
#line 446
c_rt_lib0clear(&___nl__im__189);
#line 446
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__188));
#line 446
c_rt_lib0clear(&___nl__im__188);
#line 447
c_rt_lib0move(&___nl__im__192, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 447
___nl__bool__191 = nlasm0eq_reg_type(___nl__im__192, ___nl__im__184);
#line 447
c_rt_lib0clear(&___nl__im__192);
#line 447
___nl__bool__191 = !___nl__bool__191;
#line 447
___nl__bool__191 = !___nl__bool__191;
#line 447
if(___nl__bool__191){ goto label_506;}
#line 448
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__185, ___ref___rec__2));
#line 449
goto label_506;
#line 449
label_506:
;
#line 449
//clear ___nl__bool__191;
#line 450
goto label_513;
#line 450
label_509:
;
#line 451
c_rt_lib0move(&___nl__im__193, c_rt_lib0array_mk(0));
#line 451
nl_die_arg(___nl__im__193);
#line 452
goto label_513;
#line 452
label_513:
;
#line 452
//clear ___nl__bool__145;
#line 452
c_rt_lib0clear(&___nl__im__148);
#line 452
c_rt_lib0clear(&___nl__im__152);
#line 452
//clear ___nl__bool__154;
#line 452
c_rt_lib0clear(&___nl__im__157);
#line 452
c_rt_lib0clear(&___nl__im__167);
#line 452
c_rt_lib0clear(&___nl__im__174);
#line 452
c_rt_lib0clear(&___nl__im__176);
#line 452
//clear ___nl__int__181;
#line 452
c_rt_lib0clear(&___nl__im__184);
#line 452
c_rt_lib0clear(&___nl__im__185);
#line 452
c_rt_lib0clear(&___nl__im__193);
#line 453
goto label_527;
#line 453
label_527:
;
#line 453
//clear ___nl__bool__86;
#line 453
c_rt_lib0clear(&___nl__im__92);
#line 453
//clear ___nl__int__103;
#line 453
//clear ___nl__bool__106;
#line 453
c_rt_lib0clear(&___nl__im__109);
#line 453
//clear ___nl__bool__110;
#line 453
c_rt_lib0clear(&___nl__im__111);
#line 453
c_rt_lib0clear(&___nl__im__112);
#line 453
c_rt_lib0clear(&___nl__im__113);
#line 453
c_rt_lib0clear(&___nl__im__114);
#line 453
c_rt_lib0clear(&___nl__im__115);
#line 453
c_rt_lib0clear(&___nl__im__116);
#line 453
c_rt_lib0clear(&___nl__im__117);
#line 453
c_rt_lib0clear(&___nl__im__118);
#line 453
c_rt_lib0clear(&___nl__im__119);
#line 453
c_rt_lib0clear(&___nl__im__120);
#line 453
c_rt_lib0clear(&___nl__im__121);
#line 453
c_rt_lib0clear(&___nl__im__122);
#line 453
c_rt_lib0clear(&___nl__im__123);
#line 453
c_rt_lib0clear(&___nl__im__127);
#line 453
c_rt_lib0clear(&___nl__im__128);
#line 453
c_rt_lib0clear(&___nl__im__132);
#line 453
c_rt_lib0clear(&___nl__im__133);
#line 453
c_rt_lib0clear(&___nl__im__137);
#line 453
c_rt_lib0clear(&___nl__im__138);
#line 453
c_rt_lib0clear(&___nl__im__143);
#line 454
goto label_728;
#line 454
label_555:
;
#line 454
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 454
c_rt_lib0move(&___nl__im__195,___get_global_string_const(1105));
#line 454
___nl__bool__6 = c_rt_lib0eq(___nl__im__194, ___nl__im__195);
#line 454
c_rt_lib0clear(&___nl__im__194);
#line 454
c_rt_lib0clear(&___nl__im__195);
#line 454
___nl__bool__6 = !___nl__bool__6;
#line 454
if(___nl__bool__6){ goto label_588;}
#line 455
c_rt_lib0move(&___nl__im__197, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 455
c_rt_lib0move(&___nl__im__196, translator_priv0dest_val(___nl__im__197, ___ref___rec__2));
#line 455
c_rt_lib0clear(&___nl__im__197);
#line 456
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 456
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__200, ___get_global_string_const(218)));
#line 456
c_rt_lib0clear(&___nl__im__200);
#line 456
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 456
c_rt_lib0move(&___nl__im__201, c_rt_lib0hash_get_value_dec(___nl__im__202, ___get_global_string_const(218)));
#line 456
c_rt_lib0clear(&___nl__im__202);
#line 456
c_rt_lib0move(&___nl__im__198, c_rt_lib0priv_as(___nl__im__201, ___get_global_string_const(1007)));
#line 456
c_rt_lib0clear(&___nl__im__199);
#line 456
c_rt_lib0clear(&___nl__im__201);
#line 457
c_rt_lib0move(&___nl__im__205, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 457
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__205, ___get_global_string_const(204)));
#line 457
c_rt_lib0clear(&___nl__im__205);
#line 457
___nl__int__203 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__204, ___nl__im__198);
#line 457
c_rt_lib0clear(&___nl__im__204);
#line 458
c_rt_lib0move(&___nl__im__208, c_rt_lib0int_new(___nl__int__203));
#line 458
c_rt_lib0move(&___nl__im__207, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__196, ___get_global_string_const(204), ___nl__im__198, ___get_global_string_const(564), ___nl__im__208));
#line 458
c_rt_lib0clear(&___nl__im__208);
#line 458
c_rt_lib0move(&___nl__im__206, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__207));
#line 458
c_rt_lib0clear(&___nl__im__207);
#line 458
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__206));
#line 458
c_rt_lib0clear(&___nl__im__206);
#line 459
goto label_728;
#line 459
label_588:
;
#line 459
c_rt_lib0move(&___nl__im__209, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 459
c_rt_lib0move(&___nl__im__210,___get_global_string_const(1016));
#line 459
___nl__bool__6 = c_rt_lib0eq(___nl__im__209, ___nl__im__210);
#line 459
c_rt_lib0clear(&___nl__im__209);
#line 459
c_rt_lib0clear(&___nl__im__210);
#line 459
if(___nl__bool__6){ goto label_600;}
#line 459
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 459
c_rt_lib0move(&___nl__im__212,___get_global_string_const(1017));
#line 459
___nl__bool__6 = c_rt_lib0eq(___nl__im__211, ___nl__im__212);
#line 459
c_rt_lib0clear(&___nl__im__211);
#line 459
c_rt_lib0clear(&___nl__im__212);
#line 459
label_600:
;
#line 459
if(___nl__bool__6){ goto label_607;}
#line 459
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 459
c_rt_lib0move(&___nl__im__214,___get_global_string_const(1019));
#line 459
___nl__bool__6 = c_rt_lib0eq(___nl__im__213, ___nl__im__214);
#line 459
c_rt_lib0clear(&___nl__im__213);
#line 459
c_rt_lib0clear(&___nl__im__214);
#line 459
label_607:
;
#line 459
if(___nl__bool__6){ goto label_614;}
#line 459
c_rt_lib0move(&___nl__im__215, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 459
c_rt_lib0move(&___nl__im__216,___get_global_string_const(1018));
#line 459
___nl__bool__6 = c_rt_lib0eq(___nl__im__215, ___nl__im__216);
#line 459
c_rt_lib0clear(&___nl__im__215);
#line 459
c_rt_lib0clear(&___nl__im__216);
#line 459
label_614:
;
#line 459
if(___nl__bool__6){ goto label_621;}
#line 459
c_rt_lib0move(&___nl__im__217, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 459
c_rt_lib0move(&___nl__im__218,___get_global_string_const(1020));
#line 459
___nl__bool__6 = c_rt_lib0eq(___nl__im__217, ___nl__im__218);
#line 459
c_rt_lib0clear(&___nl__im__217);
#line 459
c_rt_lib0clear(&___nl__im__218);
#line 459
label_621:
;
#line 459
___nl__bool__6 = !___nl__bool__6;
#line 459
if(___nl__bool__6){ goto label_657;}
#line 460
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 460
c_rt_lib0move(&___nl__im__219, translator_priv0calc_val(___nl__im__220, ___ref___rec__2));
#line 460
c_rt_lib0clear(&___nl__im__220);
#line 461
c_rt_lib0move(&___nl__im__222, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 461
___nl__bool__223 = true;
#line 461
c_rt_lib0move(&___nl__im__221, translator_priv0get_value_of_lvalue(___nl__im__222, ___nl__bool__223, ___ref___rec__2));
#line 461
c_rt_lib0clear(&___nl__im__222);
#line 461
//clear ___nl__bool__223;
#line 462
___nl__int__227 = c_rt_lib0array_len(___nl__im__221);
#line 462
___nl__int__228 = 1;
#line 462
___nl__int__226 = ___nl__int__227 - ___nl__int__228;
#line 462
//clear ___nl__int__227;
#line 462
//clear ___nl__int__228;
#line 462
c_rt_lib0move(&___nl__im__225, c_rt_lib0array_get(___nl__im__221, ___nl__int__226));
#line 462
//clear ___nl__int__226;
#line 462
___nl__int__231 = c_rt_lib0array_len(___nl__im__221);
#line 462
___nl__int__232 = 1;
#line 462
___nl__int__230 = ___nl__int__231 - ___nl__int__232;
#line 462
//clear ___nl__int__231;
#line 462
//clear ___nl__int__232;
#line 462
c_rt_lib0move(&___nl__im__229, c_rt_lib0array_get(___nl__im__221, ___nl__int__230));
#line 462
//clear ___nl__int__230;
#line 462
c_rt_lib0move(&___nl__im__224, c_rt_lib0priv_as(___nl__im__229, ___get_global_string_const(218)));
#line 462
c_rt_lib0clear(&___nl__im__225);
#line 462
c_rt_lib0clear(&___nl__im__229);
#line 463
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 463
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__224, ___nl__im__224, ___nl__im__219, ___nl__im__233, ___ref___rec__2));
#line 463
c_rt_lib0clear(&___nl__im__233);
#line 464
c_rt_lib0delete(translator_priv0move(___nl__im__1, ___nl__im__224, ___ref___rec__2));
#line 465
___nl__bool__234 = true;
#line 465
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__221, ___nl__bool__234, ___ref___rec__2));
#line 465
//clear ___nl__bool__234;
#line 466
goto label_728;
#line 466
label_657:
;
#line 466
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 466
c_rt_lib0move(&___nl__im__236,___get_global_string_const(934));
#line 466
___nl__bool__6 = c_rt_lib0eq(___nl__im__235, ___nl__im__236);
#line 466
c_rt_lib0clear(&___nl__im__235);
#line 466
c_rt_lib0clear(&___nl__im__236);
#line 466
___nl__bool__6 = !___nl__bool__6;
#line 466
if(___nl__bool__6){ goto label_685;}
#line 467
___nl__int__237 = translator_priv0get_sim_label(___ref___rec__2);
#line 468
c_rt_lib0move(&___nl__im__239, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 468
c_rt_lib0move(&___nl__im__238, translator_priv0new_register(___ref___rec__2, ___nl__im__239));
#line 468
c_rt_lib0clear(&___nl__im__239);
#line 469
c_rt_lib0move(&___nl__im__241, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 469
c_rt_lib0move(&___nl__im__240, translator_priv0def_val(___nl__im__241, ___nl__im__1, ___nl__im__238, ___ref___rec__2));
#line 469
c_rt_lib0clear(&___nl__im__241);
#line 470
c_rt_lib0move(&___nl__im__244,___get_global_string_const(363));
#line 470
c_rt_lib0move(&___nl__im__243, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__238, ___get_global_string_const(73), ___nl__im__240, ___get_global_string_const(558), ___nl__im__244));
#line 470
c_rt_lib0clear(&___nl__im__244);
#line 470
c_rt_lib0move(&___nl__im__242, c_rt_lib0ov_mk_arg(___get_global_string_const(233), ___nl__im__243));
#line 470
c_rt_lib0clear(&___nl__im__243);
#line 470
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__242));
#line 470
c_rt_lib0clear(&___nl__im__242);
#line 471
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__237, ___nl__im__238, ___ref___rec__2));
#line 472
c_rt_lib0move(&___nl__im__245, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 472
c_rt_lib0delete(translator_priv0def_val(___nl__im__245, ___nl__im__1, ___nl__im__238, ___ref___rec__2));
#line 472
c_rt_lib0clear(&___nl__im__245);
#line 473
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__237, ___ref___rec__2));
#line 474
goto label_728;
#line 474
label_685:
;
#line 474
c_rt_lib0move(&___nl__im__246, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 474
c_rt_lib0move(&___nl__im__247,___get_global_string_const(935));
#line 474
___nl__bool__6 = c_rt_lib0eq(___nl__im__246, ___nl__im__247);
#line 474
c_rt_lib0clear(&___nl__im__246);
#line 474
c_rt_lib0clear(&___nl__im__247);
#line 474
___nl__bool__6 = !___nl__bool__6;
#line 474
if(___nl__bool__6){ goto label_717;}
#line 475
___nl__int__248 = translator_priv0get_sim_label(___ref___rec__2);
#line 477
c_rt_lib0move(&___nl__im__251, nlasm0is_empty(___nl__im__1));
#line 477
___nl__bool__250 = c_rt_lib0check_true_native(___nl__im__251);
#line 477
c_rt_lib0clear(&___nl__im__251);
#line 477
___nl__bool__250 = !___nl__bool__250;
#line 477
if(___nl__bool__250){ goto label_703;}
#line 478
c_rt_lib0move(&___nl__im__252, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 478
c_rt_lib0move(&___nl__im__249, translator_priv0new_register(___ref___rec__2, ___nl__im__252));
#line 478
c_rt_lib0clear(&___nl__im__252);
#line 479
goto label_706;
#line 479
label_703:
;
#line 480
c_rt_lib0copy(&___nl__im__249, ___nl__im__1);
#line 481
goto label_706;
#line 481
label_706:
;
#line 481
//clear ___nl__bool__250;
#line 482
c_rt_lib0move(&___nl__im__254, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 482
c_rt_lib0move(&___nl__im__253, translator_priv0def_val(___nl__im__254, ___nl__im__1, ___nl__im__249, ___ref___rec__2));
#line 482
c_rt_lib0clear(&___nl__im__254);
#line 483
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__248, ___nl__im__253, ___ref___rec__2));
#line 484
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 484
c_rt_lib0delete(translator_priv0def_val(___nl__im__255, ___nl__im__1, ___nl__im__249, ___ref___rec__2));
#line 484
c_rt_lib0clear(&___nl__im__255);
#line 485
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__248, ___ref___rec__2));
#line 486
goto label_728;
#line 486
label_717:
;
#line 487
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(274)));
#line 487
c_rt_lib0move(&___nl__im__256, translator_priv0calc_val(___nl__im__257, ___ref___rec__2));
#line 487
c_rt_lib0clear(&___nl__im__257);
#line 488
c_rt_lib0move(&___nl__im__259, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(275)));
#line 488
c_rt_lib0move(&___nl__im__258, translator_priv0calc_val(___nl__im__259, ___ref___rec__2));
#line 488
c_rt_lib0clear(&___nl__im__259);
#line 489
c_rt_lib0move(&___nl__im__260, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(558)));
#line 489
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__1, ___nl__im__256, ___nl__im__258, ___nl__im__260, ___ref___rec__2));
#line 489
c_rt_lib0clear(&___nl__im__260);
#line 490
goto label_728;
#line 490
label_728:
;
#line 490
//clear ___nl__bool__6;
#line 490
c_rt_lib0clear(&___nl__im__9);
#line 490
c_rt_lib0clear(&___nl__im__10);
#line 490
c_rt_lib0clear(&___nl__im__63);
#line 490
c_rt_lib0clear(&___nl__im__66);
#line 490
c_rt_lib0clear(&___nl__im__75);
#line 490
c_rt_lib0clear(&___nl__im__196);
#line 490
c_rt_lib0clear(&___nl__im__198);
#line 490
//clear ___nl__int__203;
#line 490
c_rt_lib0clear(&___nl__im__219);
#line 490
c_rt_lib0clear(&___nl__im__221);
#line 490
c_rt_lib0clear(&___nl__im__224);
#line 490
//clear ___nl__int__237;
#line 490
c_rt_lib0clear(&___nl__im__238);
#line 490
c_rt_lib0clear(&___nl__im__240);
#line 490
//clear ___nl__int__248;
#line 490
c_rt_lib0clear(&___nl__im__249);
#line 490
c_rt_lib0clear(&___nl__im__253);
#line 490
c_rt_lib0clear(&___nl__im__256);
#line 490
c_rt_lib0clear(&___nl__im__258);
#line 490
c_rt_lib0clear(&___nl__im__0);
#line 490
c_rt_lib0clear(&___nl__im__1);
#line 490
c_rt_lib0clear(&___nl__im__3);
#line 490
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
#line 494
___nl__int__3 = 0;
#line 494
___nl__int__4 = 1;
#line 494
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 494
label_3:
;
#line 494
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 494
___nl__bool__6 = ___nl__int__7;
#line 494
if(___nl__bool__6){ goto label_13;}
#line 494
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 494
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 495
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__2, ___ref___rec__1));
#line 495
c_rt_lib0clear(&___nl__im__2);
#line 496
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 496
goto label_3;
#line 496
label_13:
;
#line 496
c_rt_lib0clear(&___nl__im__0);
#line 496
c_rt_lib0clear(&___nl__im__2);
#line 496
//clear ___nl__int__3;
#line 496
//clear ___nl__int__4;
#line 496
//clear ___nl__int__5;
#line 496
//clear ___nl__bool__6;
#line 496
//clear ___nl__int__7;
#line 496
c_rt_lib0clear(&___nl__im__8);
#line 496
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
#line 500
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(723));
#line 500
if(___nl__bool__3){ goto label_9;}
#line 503
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(999));
#line 503
if(___nl__bool__3){ goto label_26;}
#line 504
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1000));
#line 504
if(___nl__bool__3){ goto label_30;}
#line 504
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 504
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__0));
#line 504
nl_die_arg(___nl__im__4);
#line 500
label_9:
;
#line 500
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(723)));
#line 500
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 501
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(166)));
#line 501
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(204)));
#line 501
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(493)));
#line 501
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 501
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(4, ___get_global_string_const(166), ___nl__im__8, ___get_global_string_const(204), ___nl__im__9, ___get_global_string_const(493), ___nl__im__10, ___get_global_string_const(218), ___nl__im__11));
#line 501
c_rt_lib0clear(&___nl__im__8);
#line 501
c_rt_lib0clear(&___nl__im__9);
#line 501
c_rt_lib0clear(&___nl__im__10);
#line 501
c_rt_lib0clear(&___nl__im__11);
#line 502
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 502
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__7, ___ref___rec__2, ___nl__im__12));
#line 502
c_rt_lib0clear(&___nl__im__7);
#line 502
c_rt_lib0clear(&___nl__im__12);
#line 503
goto label_34;
#line 503
label_26:
;
#line 503
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(999)));
#line 503
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 504
goto label_34;
#line 504
label_30:
;
#line 504
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1000)));
#line 504
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 505
goto label_34;
#line 505
label_34:
;
#line 506
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 506
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__2, ___nl__im__18));
#line 506
c_rt_lib0clear(&___nl__im__18);
#line 508
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(723));
#line 508
if(___nl__bool__20){ goto label_47;}
#line 514
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(999));
#line 514
if(___nl__bool__20){ goto label_69;}
#line 516
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1000));
#line 516
if(___nl__bool__20){ goto label_76;}
#line 516
c_rt_lib0move(&___nl__im__21,___get_global_string_const(15));
#line 516
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__0));
#line 516
nl_die_arg(___nl__im__21);
#line 508
label_47:
;
#line 508
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(723)));
#line 508
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 509
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(218)));
#line 509
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(218));
#line 509
if(___nl__bool__25){ goto label_58;}
#line 511
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(71));
#line 511
if(___nl__bool__25){ goto label_63;}
#line 511
c_rt_lib0move(&___nl__im__26,___get_global_string_const(15));
#line 511
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 511
nl_die_arg(___nl__im__26);
#line 509
label_58:
;
#line 509
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__24, ___get_global_string_const(218)));
#line 509
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 510
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__27, ___ref___rec__2));
#line 511
goto label_67;
#line 511
label_63:
;
#line 512
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 512
nl_die_arg(___nl__im__29);
#line 513
goto label_67;
#line 513
label_67:
;
#line 514
goto label_81;
#line 514
label_69:
;
#line 514
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(999)));
#line 514
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 515
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(275)));
#line 515
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__32, ___ref___rec__2));
#line 515
c_rt_lib0clear(&___nl__im__32);
#line 516
goto label_81;
#line 516
label_76:
;
#line 516
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1000)));
#line 516
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 517
c_rt_lib0move(&___nl__im__19, translator_priv0calc_val(___nl__im__33, ___ref___rec__2));
#line 518
goto label_81;
#line 518
label_81:
;
#line 519
___nl__int__35 = translator_priv0get_sim_label(___ref___rec__2);
#line 520
c_rt_lib0move(&___nl__im__38,___get_global_string_const(78));
#line 520
___nl__int__39 = 1;
#line 520
___nl__int__39 = -___nl__int__39;
#line 520
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__39));
#line 520
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__17, ___get_global_string_const(73), ___nl__im__19, ___get_global_string_const(204), ___nl__im__38, ___get_global_string_const(564), ___nl__im__40));
#line 520
c_rt_lib0clear(&___nl__im__38);
#line 520
//clear ___nl__int__39;
#line 520
c_rt_lib0clear(&___nl__im__40);
#line 520
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__37));
#line 520
c_rt_lib0clear(&___nl__im__37);
#line 520
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 520
c_rt_lib0clear(&___nl__im__36);
#line 521
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__35, ___nl__im__17, ___ref___rec__2));
#line 522
___nl__bool__41 = ___nl__bool__1;
#line 522
___nl__bool__41 = !___nl__bool__41;
#line 522
if(___nl__bool__41){ goto label_103;}
#line 523
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__19));
#line 523
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__42, ___ref___rec__2));
#line 523
c_rt_lib0clear(&___nl__im__42);
#line 524
goto label_124;
#line 524
label_103:
;
#line 525
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__19));
#line 525
c_rt_lib0move(&___nl__im__46,___get_global_string_const(176));
#line 525
___nl__int__47 = 1;
#line 525
___nl__int__47 = -___nl__int__47;
#line 525
c_rt_lib0move(&___nl__im__48, c_rt_lib0int_new(___nl__int__47));
#line 525
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 525
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_mk(5, ___get_global_string_const(222), ___nl__im__19, ___get_global_string_const(73), ___nl__im__45, ___get_global_string_const(579), ___nl__im__46, ___get_global_string_const(564), ___nl__im__48, ___get_global_string_const(581), ___nl__im__49));
#line 525
c_rt_lib0clear(&___nl__im__45);
#line 525
c_rt_lib0clear(&___nl__im__46);
#line 525
//clear ___nl__int__47;
#line 525
c_rt_lib0clear(&___nl__im__48);
#line 525
c_rt_lib0clear(&___nl__im__49);
#line 525
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__44));
#line 525
c_rt_lib0clear(&___nl__im__44);
#line 525
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__43));
#line 525
c_rt_lib0clear(&___nl__im__43);
#line 526
c_rt_lib0move(&___nl__im__50, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__19));
#line 526
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__50));
#line 526
c_rt_lib0clear(&___nl__im__50);
#line 527
goto label_124;
#line 527
label_124:
;
#line 527
//clear ___nl__bool__41;
#line 528
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__35, ___ref___rec__2));
#line 529
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(723));
#line 529
if(___nl__bool__51){ goto label_136;}
#line 536
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(999));
#line 536
if(___nl__bool__51){ goto label_176;}
#line 545
___nl__bool__51 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1000));
#line 545
if(___nl__bool__51){ goto label_228;}
#line 545
c_rt_lib0move(&___nl__im__52,___get_global_string_const(15));
#line 545
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(2, ___nl__im__52, ___nl__im__0));
#line 545
nl_die_arg(___nl__im__52);
#line 529
label_136:
;
#line 529
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(723)));
#line 529
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 530
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(166)));
#line 530
c_rt_lib0move(&___nl__im__55, translator_priv0get_var_register(___nl__im__56, ___ref___rec__2));
#line 530
c_rt_lib0clear(&___nl__im__56);
#line 531
___nl__im_ptr__62 = &((*___ref___rec__2).logic0field);
#line 531
c_rt_lib0copy(&___nl__im__61, (*___nl__im_ptr__62));
#line 531
___nl__im_ptr__62 = NULL;
#line 531
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(820)));
#line 531
c_rt_lib0clear(&___nl__im__61);
#line 531
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(166)));
#line 531
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value(___nl__im__60, ___nl__im__63));
#line 531
c_rt_lib0clear(&___nl__im__60);
#line 531
c_rt_lib0clear(&___nl__im__63);
#line 531
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(204)));
#line 531
c_rt_lib0clear(&___nl__im__59);
#line 531
c_rt_lib0move(&___nl__im__57, translator_priv0get_cast(___nl__im__55, ___nl__im__58, ___ref___rec__2));
#line 531
c_rt_lib0clear(&___nl__im__58);
#line 532
c_rt_lib0move(&___nl__im__66,___get_global_string_const(78));
#line 532
___nl__int__67 = 1;
#line 532
___nl__int__67 = -___nl__int__67;
#line 532
c_rt_lib0move(&___nl__im__68, c_rt_lib0int_new(___nl__int__67));
#line 532
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__57, ___get_global_string_const(73), ___nl__im__19, ___get_global_string_const(204), ___nl__im__66, ___get_global_string_const(564), ___nl__im__68));
#line 532
c_rt_lib0clear(&___nl__im__66);
#line 532
//clear ___nl__int__67;
#line 532
c_rt_lib0clear(&___nl__im__68);
#line 532
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__65));
#line 532
c_rt_lib0clear(&___nl__im__65);
#line 532
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__64));
#line 532
c_rt_lib0clear(&___nl__im__64);
#line 533
___nl__bool__69 = nlasm0eq_reg(___nl__im__57, ___nl__im__55);
#line 533
___nl__bool__69 = !___nl__bool__69;
#line 533
___nl__bool__69 = !___nl__bool__69;
#line 533
if(___nl__bool__69){ goto label_173;}
#line 534
c_rt_lib0delete(translator_priv0move(___nl__im__55, ___nl__im__57, ___ref___rec__2));
#line 535
goto label_173;
#line 535
label_173:
;
#line 535
//clear ___nl__bool__69;
#line 536
goto label_232;
#line 536
label_176:
;
#line 536
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(999)));
#line 536
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 537
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__70, ___get_global_string_const(274)));
#line 537
___nl__bool__74 = false;
#line 537
c_rt_lib0move(&___nl__im__72, translator_priv0get_value_of_lvalue(___nl__im__73, ___nl__bool__74, ___ref___rec__2));
#line 537
c_rt_lib0clear(&___nl__im__73);
#line 537
//clear ___nl__bool__74;
#line 538
___nl__int__78 = c_rt_lib0array_len(___nl__im__72);
#line 538
___nl__int__79 = 1;
#line 538
___nl__int__77 = ___nl__int__78 - ___nl__int__79;
#line 538
//clear ___nl__int__78;
#line 538
//clear ___nl__int__79;
#line 538
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__72, ___nl__int__77));
#line 538
//clear ___nl__int__77;
#line 538
___nl__int__82 = c_rt_lib0array_len(___nl__im__72);
#line 538
___nl__int__83 = 1;
#line 538
___nl__int__81 = ___nl__int__82 - ___nl__int__83;
#line 538
//clear ___nl__int__82;
#line 538
//clear ___nl__int__83;
#line 538
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_get(___nl__im__72, ___nl__int__81));
#line 538
//clear ___nl__int__81;
#line 538
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__80, ___get_global_string_const(218)));
#line 538
c_rt_lib0clear(&___nl__im__76);
#line 538
c_rt_lib0clear(&___nl__im__80);
#line 539
c_rt_lib0move(&___nl__im__85, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 539
c_rt_lib0move(&___nl__im__84, translator_priv0get_cast(___nl__im__75, ___nl__im__85, ___ref___rec__2));
#line 539
c_rt_lib0clear(&___nl__im__85);
#line 540
c_rt_lib0move(&___nl__im__88,___get_global_string_const(78));
#line 540
___nl__int__89 = 1;
#line 540
___nl__int__89 = -___nl__int__89;
#line 540
c_rt_lib0move(&___nl__im__90, c_rt_lib0int_new(___nl__int__89));
#line 540
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__84, ___get_global_string_const(73), ___nl__im__19, ___get_global_string_const(204), ___nl__im__88, ___get_global_string_const(564), ___nl__im__90));
#line 540
c_rt_lib0clear(&___nl__im__88);
#line 540
//clear ___nl__int__89;
#line 540
c_rt_lib0clear(&___nl__im__90);
#line 540
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__87));
#line 540
c_rt_lib0clear(&___nl__im__87);
#line 540
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__86));
#line 540
c_rt_lib0clear(&___nl__im__86);
#line 541
___nl__bool__91 = nlasm0eq_reg(___nl__im__75, ___nl__im__84);
#line 541
___nl__bool__91 = !___nl__bool__91;
#line 541
___nl__bool__91 = !___nl__bool__91;
#line 541
if(___nl__bool__91){ goto label_222;}
#line 542
c_rt_lib0delete(translator_priv0move(___nl__im__75, ___nl__im__84, ___ref___rec__2));
#line 543
goto label_222;
#line 543
label_222:
;
#line 543
//clear ___nl__bool__91;
#line 544
___nl__bool__92 = false;
#line 544
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__72, ___nl__bool__92, ___ref___rec__2));
#line 544
//clear ___nl__bool__92;
#line 545
goto label_232;
#line 545
label_228:
;
#line 545
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1000)));
#line 545
c_rt_lib0copy(&___nl__im__93, ___nl__im__94);
#line 546
goto label_232;
#line 546
label_232:
;
#line 546
c_rt_lib0clear(&___nl__im__0);
#line 546
//clear ___nl__bool__1;
#line 546
//clear ___nl__bool__3;
#line 546
c_rt_lib0clear(&___nl__im__4);
#line 546
c_rt_lib0clear(&___nl__im__5);
#line 546
c_rt_lib0clear(&___nl__im__6);
#line 546
c_rt_lib0clear(&___nl__im__13);
#line 546
c_rt_lib0clear(&___nl__im__14);
#line 546
c_rt_lib0clear(&___nl__im__15);
#line 546
c_rt_lib0clear(&___nl__im__16);
#line 546
c_rt_lib0clear(&___nl__im__17);
#line 546
c_rt_lib0clear(&___nl__im__19);
#line 546
//clear ___nl__bool__20;
#line 546
c_rt_lib0clear(&___nl__im__21);
#line 546
c_rt_lib0clear(&___nl__im__22);
#line 546
c_rt_lib0clear(&___nl__im__23);
#line 546
c_rt_lib0clear(&___nl__im__24);
#line 546
//clear ___nl__bool__25;
#line 546
c_rt_lib0clear(&___nl__im__26);
#line 546
c_rt_lib0clear(&___nl__im__27);
#line 546
c_rt_lib0clear(&___nl__im__28);
#line 546
c_rt_lib0clear(&___nl__im__29);
#line 546
c_rt_lib0clear(&___nl__im__30);
#line 546
c_rt_lib0clear(&___nl__im__31);
#line 546
c_rt_lib0clear(&___nl__im__33);
#line 546
c_rt_lib0clear(&___nl__im__34);
#line 546
//clear ___nl__int__35;
#line 546
//clear ___nl__bool__51;
#line 546
c_rt_lib0clear(&___nl__im__52);
#line 546
c_rt_lib0clear(&___nl__im__53);
#line 546
c_rt_lib0clear(&___nl__im__54);
#line 546
c_rt_lib0clear(&___nl__im__55);
#line 546
c_rt_lib0clear(&___nl__im__57);
#line 546
c_rt_lib0clear(&___nl__im__70);
#line 546
c_rt_lib0clear(&___nl__im__71);
#line 546
c_rt_lib0clear(&___nl__im__72);
#line 546
c_rt_lib0clear(&___nl__im__75);
#line 546
c_rt_lib0clear(&___nl__im__84);
#line 546
c_rt_lib0clear(&___nl__im__93);
#line 546
c_rt_lib0clear(&___nl__im__94);
#line 546
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
#line 550
___nl__im_ptr__2 = &((*___ref___rec__1).debug0field);
#line 550
c_rt_lib0copy(&___nl__im__3, ___nl__im__0);
#line 550
c_rt_lib0hash_set_value_dec(___nl__im_ptr__2, ___get_global_string_const(549), ___nl__im__3);
#line 550
___nl__im_ptr__2 = NULL;
#line 550
c_rt_lib0clear(&___nl__im__3);
#line 551
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 551
c_rt_lib0move(&___nl__im__5,___get_global_string_const(809));
#line 551
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_ref_hash((*___nl__im_ptr__4), ___nl__im__5));
#line 551
___nl__int__6 = 1;
#line 551
___nl__int__7 = getIntFromImm(___nl__im__5);
#line 551
___nl__int__8 = ___nl__int__7 + ___nl__int__6;
#line 551
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__8));
#line 551
c_rt_lib0move(&___nl__string__9,___get_global_string_const(809));
#line 551
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__4, ___nl__string__9, ___nl__im__5));
#line 551
___nl__im_ptr__4 = NULL;
#line 551
c_rt_lib0clear(&___nl__im__5);
#line 551
//clear ___nl__int__6;
#line 551
//clear ___nl__int__7;
#line 551
//clear ___nl__int__8;
#line 551
c_rt_lib0clear(&___nl__string__9);
#line 551
c_rt_lib0clear(&___nl__im__0);
#line 551
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
#line 555
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 555
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__2, ___ref___rec__1));
#line 555
c_rt_lib0clear(&___nl__im__2);
#line 556
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 556
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(972));
#line 556
if(___nl__bool__4){ goto label_47;}
#line 558
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(974));
#line 558
if(___nl__bool__4){ goto label_54;}
#line 560
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(158));
#line 560
if(___nl__bool__4){ goto label_59;}
#line 562
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(976));
#line 562
if(___nl__bool__4){ goto label_64;}
#line 564
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(975));
#line 564
if(___nl__bool__4){ goto label_69;}
#line 566
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(977));
#line 566
if(___nl__bool__4){ goto label_74;}
#line 568
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(973));
#line 568
if(___nl__bool__4){ goto label_79;}
#line 570
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(985));
#line 570
if(___nl__bool__4){ goto label_84;}
#line 571
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(218));
#line 571
if(___nl__bool__4){ goto label_86;}
#line 574
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(983));
#line 574
if(___nl__bool__4){ goto label_109;}
#line 576
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(246));
#line 576
if(___nl__bool__4){ goto label_114;}
#line 578
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(982));
#line 578
if(___nl__bool__4){ goto label_119;}
#line 580
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(984));
#line 580
if(___nl__bool__4){ goto label_124;}
#line 582
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(176));
#line 582
if(___nl__bool__4){ goto label_131;}
#line 584
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(980));
#line 584
if(___nl__bool__4){ goto label_138;}
#line 587
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(981));
#line 587
if(___nl__bool__4){ goto label_160;}
#line 590
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(247));
#line 590
if(___nl__bool__4){ goto label_182;}
#line 592
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(252));
#line 592
if(___nl__bool__4){ goto label_189;}
#line 594
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(978));
#line 594
if(___nl__bool__4){ goto label_196;}
#line 596
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(979));
#line 596
if(___nl__bool__4){ goto label_201;}
#line 596
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 596
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 596
nl_die_arg(___nl__im__5);
#line 556
label_47:
;
#line 556
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(972)));
#line 556
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 557
___nl__bool__8 = false;
#line 557
c_rt_lib0delete(translator_priv0print_if(___nl__im__6, ___nl__bool__8, ___ref___rec__1));
#line 557
//clear ___nl__bool__8;
#line 558
goto label_206;
#line 558
label_54:
;
#line 558
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(974)));
#line 558
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 559
c_rt_lib0delete(translator_priv0print_fora(___nl__im__9, ___ref___rec__1));
#line 560
goto label_206;
#line 560
label_59:
;
#line 560
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(158)));
#line 560
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 561
c_rt_lib0delete(translator_priv0print_loop(___nl__im__11, ___ref___rec__1));
#line 562
goto label_206;
#line 562
label_64:
;
#line 562
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(976)));
#line 562
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 563
c_rt_lib0delete(translator_priv0print_rep(___nl__im__13, ___ref___rec__1));
#line 564
goto label_206;
#line 564
label_69:
;
#line 564
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(975)));
#line 564
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 565
c_rt_lib0delete(translator_priv0print_forh(___nl__im__15, ___ref___rec__1));
#line 566
goto label_206;
#line 566
label_74:
;
#line 566
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(977)));
#line 566
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 567
c_rt_lib0delete(translator_priv0print_while(___nl__im__17, ___ref___rec__1));
#line 568
goto label_206;
#line 568
label_79:
;
#line 568
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(973)));
#line 568
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 569
c_rt_lib0delete(translator_priv0print_for(___nl__im__19, ___ref___rec__1));
#line 570
goto label_206;
#line 570
label_84:
;
#line 571
goto label_206;
#line 571
label_86:
;
#line 571
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(218)));
#line 571
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 572
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(204)));
#line 572
___nl__im_ptr__27 = &((*___ref___rec__1).logic0field);
#line 572
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 572
___nl__im_ptr__27 = NULL;
#line 572
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(416)));
#line 572
c_rt_lib0clear(&___nl__im__26);
#line 572
c_rt_lib0move(&___nl__im__23, translator_priv0var_type_to_reg_type(___nl__im__24, ___nl__im__25));
#line 572
c_rt_lib0clear(&___nl__im__24);
#line 572
c_rt_lib0clear(&___nl__im__25);
#line 573
___nl__int__29 = 1;
#line 573
___nl__int__29 = -___nl__int__29;
#line 573
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 573
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 573
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__23, ___get_global_string_const(217), ___nl__im__30, ___get_global_string_const(351), ___nl__im__31));
#line 573
//clear ___nl__int__29;
#line 573
c_rt_lib0clear(&___nl__im__30);
#line 573
c_rt_lib0clear(&___nl__im__31);
#line 573
c_rt_lib0delete(translator_priv0print_val(___nl__im__21, ___nl__im__28, ___ref___rec__1));
#line 573
c_rt_lib0clear(&___nl__im__28);
#line 574
goto label_206;
#line 574
label_109:
;
#line 574
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(983)));
#line 574
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 575
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__im__32, ___ref___rec__1));
#line 576
goto label_206;
#line 576
label_114:
;
#line 576
c_rt_lib0move(&___nl__im__35, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(246)));
#line 576
c_rt_lib0copy(&___nl__im__34, ___nl__im__35);
#line 577
c_rt_lib0delete(translator_priv0print_return(___nl__im__34, ___ref___rec__1));
#line 578
goto label_206;
#line 578
label_119:
;
#line 578
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(982)));
#line 578
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 579
c_rt_lib0delete(translator_priv0print_match(___nl__im__36, ___ref___rec__1));
#line 580
goto label_206;
#line 580
label_124:
;
#line 580
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(984)));
#line 580
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 581
___nl__bool__40 = true;
#line 581
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__38, ___nl__bool__40, ___ref___rec__1));
#line 581
//clear ___nl__bool__40;
#line 582
goto label_206;
#line 582
label_131:
;
#line 582
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(176)));
#line 582
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 583
___nl__bool__43 = false;
#line 583
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__im__41, ___nl__bool__43, ___ref___rec__1));
#line 583
//clear ___nl__bool__43;
#line 584
goto label_206;
#line 584
label_138:
;
#line 585
___nl__bool__44 = true;
#line 585
___nl__im_ptr__45 = &((*___ref___rec__1).loop_label0field);
#line 585
c_rt_lib0move(&___nl__im__46,___get_global_string_const(980));
#line 585
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_ref_hash((*___nl__im_ptr__45), ___nl__im__46));
#line 585
c_rt_lib0move(&___nl__im__47, c_rt_lib0bool_to_nl_native(___nl__bool__44));
#line 585
c_rt_lib0hash_set_value_dec(&___nl__im__46, ___get_global_string_const(1328), ___nl__im__47);
#line 585
c_rt_lib0move(&___nl__string__48,___get_global_string_const(980));
#line 585
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__45, ___nl__string__48, ___nl__im__46));
#line 585
___nl__im_ptr__45 = NULL;
#line 585
//clear ___nl__bool__44;
#line 585
c_rt_lib0clear(&___nl__im__46);
#line 585
c_rt_lib0clear(&___nl__im__47);
#line 585
c_rt_lib0clear(&___nl__string__48);
#line 586
___nl__im_ptr__51 = &((*___ref___rec__1).loop_label0field);
#line 586
c_rt_lib0copy(&___nl__im__50, (*___nl__im_ptr__51));
#line 586
___nl__im_ptr__51 = NULL;
#line 586
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__50, ___get_global_string_const(980)));
#line 586
c_rt_lib0clear(&___nl__im__50);
#line 586
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__49));
#line 586
c_rt_lib0clear(&___nl__im__49);
#line 587
goto label_206;
#line 587
label_160:
;
#line 588
___nl__bool__52 = true;
#line 588
___nl__im_ptr__53 = &((*___ref___rec__1).loop_label0field);
#line 588
c_rt_lib0move(&___nl__im__54,___get_global_string_const(981));
#line 588
c_rt_lib0move(&___nl__im__54, c_rt_lib0get_ref_hash((*___nl__im_ptr__53), ___nl__im__54));
#line 588
c_rt_lib0move(&___nl__im__55, c_rt_lib0bool_to_nl_native(___nl__bool__52));
#line 588
c_rt_lib0hash_set_value_dec(&___nl__im__54, ___get_global_string_const(1328), ___nl__im__55);
#line 588
c_rt_lib0move(&___nl__string__56,___get_global_string_const(981));
#line 588
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__53, ___nl__string__56, ___nl__im__54));
#line 588
___nl__im_ptr__53 = NULL;
#line 588
//clear ___nl__bool__52;
#line 588
c_rt_lib0clear(&___nl__im__54);
#line 588
c_rt_lib0clear(&___nl__im__55);
#line 588
c_rt_lib0clear(&___nl__string__56);
#line 589
___nl__im_ptr__59 = &((*___ref___rec__1).loop_label0field);
#line 589
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 589
___nl__im_ptr__59 = NULL;
#line 589
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__58, ___get_global_string_const(981)));
#line 589
c_rt_lib0clear(&___nl__im__58);
#line 589
c_rt_lib0delete(translator_priv0print_loop_break(___ref___rec__1, ___nl__im__57));
#line 589
c_rt_lib0clear(&___nl__im__57);
#line 590
goto label_206;
#line 590
label_182:
;
#line 590
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(247)));
#line 590
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 591
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 591
c_rt_lib0delete(translator_priv0print_die(___nl__im__60, ___nl__im__62, ___ref___rec__1));
#line 591
c_rt_lib0clear(&___nl__im__62);
#line 592
goto label_206;
#line 592
label_189:
;
#line 592
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(252)));
#line 592
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 593
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 593
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__63, ___ref___rec__1, ___nl__im__65));
#line 593
c_rt_lib0clear(&___nl__im__65);
#line 594
goto label_206;
#line 594
label_196:
;
#line 594
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(978)));
#line 594
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 595
c_rt_lib0delete(translator_priv0print_if_mod(___nl__im__66, ___ref___rec__1));
#line 596
goto label_206;
#line 596
label_201:
;
#line 596
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(979)));
#line 596
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 597
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__im__68, ___ref___rec__1));
#line 598
goto label_206;
#line 598
label_206:
;
#line 598
c_rt_lib0clear(&___nl__im__0);
#line 598
c_rt_lib0clear(&___nl__im__3);
#line 598
//clear ___nl__bool__4;
#line 598
c_rt_lib0clear(&___nl__im__5);
#line 598
c_rt_lib0clear(&___nl__im__6);
#line 598
c_rt_lib0clear(&___nl__im__7);
#line 598
c_rt_lib0clear(&___nl__im__9);
#line 598
c_rt_lib0clear(&___nl__im__10);
#line 598
c_rt_lib0clear(&___nl__im__11);
#line 598
c_rt_lib0clear(&___nl__im__12);
#line 598
c_rt_lib0clear(&___nl__im__13);
#line 598
c_rt_lib0clear(&___nl__im__14);
#line 598
c_rt_lib0clear(&___nl__im__15);
#line 598
c_rt_lib0clear(&___nl__im__16);
#line 598
c_rt_lib0clear(&___nl__im__17);
#line 598
c_rt_lib0clear(&___nl__im__18);
#line 598
c_rt_lib0clear(&___nl__im__19);
#line 598
c_rt_lib0clear(&___nl__im__20);
#line 598
c_rt_lib0clear(&___nl__im__21);
#line 598
c_rt_lib0clear(&___nl__im__22);
#line 598
c_rt_lib0clear(&___nl__im__23);
#line 598
c_rt_lib0clear(&___nl__im__32);
#line 598
c_rt_lib0clear(&___nl__im__33);
#line 598
c_rt_lib0clear(&___nl__im__34);
#line 598
c_rt_lib0clear(&___nl__im__35);
#line 598
c_rt_lib0clear(&___nl__im__36);
#line 598
c_rt_lib0clear(&___nl__im__37);
#line 598
c_rt_lib0clear(&___nl__im__38);
#line 598
c_rt_lib0clear(&___nl__im__39);
#line 598
c_rt_lib0clear(&___nl__im__41);
#line 598
c_rt_lib0clear(&___nl__im__42);
#line 598
c_rt_lib0clear(&___nl__im__60);
#line 598
c_rt_lib0clear(&___nl__im__61);
#line 598
c_rt_lib0clear(&___nl__im__63);
#line 598
c_rt_lib0clear(&___nl__im__64);
#line 598
c_rt_lib0clear(&___nl__im__66);
#line 598
c_rt_lib0clear(&___nl__im__67);
#line 598
c_rt_lib0clear(&___nl__im__68);
#line 598
c_rt_lib0clear(&___nl__im__69);
#line 598
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
#line 602
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(1327)));
#line 602
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__2, ___ref___rec__0));
#line 602
c_rt_lib0clear(&___nl__im__2);
#line 603
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(579)));
#line 603
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 603
c_rt_lib0clear(&___nl__im__5);
#line 603
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 603
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__6));
#line 603
//clear ___nl__int__4;
#line 603
c_rt_lib0clear(&___nl__im__6);
#line 603
c_rt_lib0delete(translator_priv0print(___ref___rec__0, ___nl__im__3));
#line 603
c_rt_lib0clear(&___nl__im__3);
#line 603
c_rt_lib0clear(&___nl__im__1);
#line 603
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
#line 608
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 609
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 610
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 611
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 611
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(220)));
#line 611
c_rt_lib0clear(&___nl__im__8);
#line 611
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(985)));
#line 611
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__7, ___get_global_string_const(226), ___nl__im__9));
#line 611
c_rt_lib0clear(&___nl__im__7);
#line 611
c_rt_lib0clear(&___nl__im__9);
#line 611
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(986), ___nl__im__3, ___get_global_string_const(972), ___nl__im__4, ___get_global_string_const(987), ___nl__im__5, ___get_global_string_const(988), ___nl__im__6));
#line 611
c_rt_lib0clear(&___nl__im__3);
#line 611
c_rt_lib0clear(&___nl__im__4);
#line 611
c_rt_lib0clear(&___nl__im__5);
#line 611
c_rt_lib0clear(&___nl__im__6);
#line 613
___nl__bool__10 = true;
#line 613
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__10, ___ref___rec__1));
#line 613
//clear ___nl__bool__10;
#line 613
c_rt_lib0clear(&___nl__im__0);
#line 613
c_rt_lib0clear(&___nl__im__2);
#line 613
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
#line 620
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 620
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(220)));
#line 620
c_rt_lib0clear(&___nl__im__5);
#line 623
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 623
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(220)));
#line 623
c_rt_lib0clear(&___nl__im__10);
#line 624
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 624
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(1004), ___nl__im__12));
#line 624
c_rt_lib0clear(&___nl__im__12);
#line 625
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 625
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(3, ___get_global_string_const(220), ___nl__im__9, ___get_global_string_const(218), ___nl__im__11, ___get_global_string_const(204), ___nl__im__13));
#line 625
c_rt_lib0clear(&___nl__im__9);
#line 625
c_rt_lib0clear(&___nl__im__11);
#line 625
c_rt_lib0clear(&___nl__im__13);
#line 627
c_rt_lib0move(&___nl__im__14,___get_global_string_const(363));
#line 627
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(2, ___get_global_string_const(223), ___nl__im__8, ___get_global_string_const(558), ___nl__im__14));
#line 627
c_rt_lib0clear(&___nl__im__8);
#line 627
c_rt_lib0clear(&___nl__im__14);
#line 627
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(1008), ___nl__im__7));
#line 627
c_rt_lib0clear(&___nl__im__7);
#line 629
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(11)));
#line 629
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(3, ___get_global_string_const(220), ___nl__im__4, ___get_global_string_const(218), ___nl__im__6, ___get_global_string_const(204), ___nl__im__15));
#line 629
c_rt_lib0clear(&___nl__im__4);
#line 629
c_rt_lib0clear(&___nl__im__6);
#line 629
c_rt_lib0clear(&___nl__im__15);
#line 631
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 632
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 633
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 633
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(220)));
#line 633
c_rt_lib0clear(&___nl__im__20);
#line 633
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(985)));
#line 633
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_mk(2, ___get_global_string_const(220), ___nl__im__19, ___get_global_string_const(226), ___nl__im__21));
#line 633
c_rt_lib0clear(&___nl__im__19);
#line 633
c_rt_lib0clear(&___nl__im__21);
#line 633
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(4, ___get_global_string_const(986), ___nl__im__3, ___get_global_string_const(972), ___nl__im__16, ___get_global_string_const(987), ___nl__im__17, ___get_global_string_const(988), ___nl__im__18));
#line 633
c_rt_lib0clear(&___nl__im__3);
#line 633
c_rt_lib0clear(&___nl__im__16);
#line 633
c_rt_lib0clear(&___nl__im__17);
#line 633
c_rt_lib0clear(&___nl__im__18);
#line 635
___nl__bool__22 = true;
#line 635
c_rt_lib0delete(translator_priv0print_if(___nl__im__2, ___nl__bool__22, ___ref___rec__1));
#line 635
//clear ___nl__bool__22;
#line 635
c_rt_lib0clear(&___nl__im__0);
#line 635
c_rt_lib0clear(&___nl__im__2);
#line 635
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
#line 639
c_rt_lib0move(&___nl__im__3, translator_priv0save_registers(___ref___rec__2));
#line 640
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__2);
#line 641
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 642
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 642
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__2, ___nl__im__7));
#line 642
c_rt_lib0clear(&___nl__im__7);
#line 643
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 643
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__6, ___ref___rec__2));
#line 643
c_rt_lib0clear(&___nl__im__8);
#line 644
c_rt_lib0move(&___nl__im__11,___get_global_string_const(363));
#line 644
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__6, ___get_global_string_const(73), ___nl__im__6, ___get_global_string_const(558), ___nl__im__11));
#line 644
c_rt_lib0clear(&___nl__im__11);
#line 644
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(233), ___nl__im__10));
#line 644
c_rt_lib0clear(&___nl__im__10);
#line 644
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 644
c_rt_lib0clear(&___nl__im__9);
#line 645
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 646
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(972)));
#line 646
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__12, ___ref___rec__2));
#line 646
c_rt_lib0clear(&___nl__im__12);
#line 647
___nl__bool__13 = ___nl__bool__1;
#line 647
___nl__bool__13 = !___nl__bool__13;
#line 647
___nl__bool__13 = !___nl__bool__13;
#line 647
if(___nl__bool__13){ goto label_32;}
#line 647
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(972)));
#line 647
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(220)));
#line 647
c_rt_lib0clear(&___nl__im__16);
#line 647
c_rt_lib0move(&___nl__im__14, translator0last_debug_char(___nl__im__15));
#line 647
c_rt_lib0clear(&___nl__im__15);
#line 647
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__14, ___ref___rec__2));
#line 647
c_rt_lib0clear(&___nl__im__14);
#line 647
goto label_32;
#line 647
label_32:
;
#line 647
//clear ___nl__bool__13;
#line 648
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__4));
#line 648
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__18));
#line 648
c_rt_lib0clear(&___nl__im__18);
#line 648
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__17));
#line 648
c_rt_lib0clear(&___nl__im__17);
#line 649
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 650
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(987)));
#line 650
___nl__int__21 = 0;
#line 650
___nl__int__22 = 1;
#line 650
___nl__int__23 = c_rt_lib0array_len(___nl__im__19);
#line 650
label_44:
;
#line 650
___nl__int__25 = ___nl__int__21 >= ___nl__int__23;
#line 650
___nl__bool__24 = ___nl__int__25;
#line 650
if(___nl__bool__24){ goto label_84;}
#line 650
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__19, ___nl__int__21));
#line 650
c_rt_lib0copy(&___nl__im__20, ___nl__im__26);
#line 651
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(220)));
#line 651
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__27, ___ref___rec__2));
#line 651
c_rt_lib0clear(&___nl__im__27);
#line 652
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__2);
#line 653
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(986)));
#line 653
c_rt_lib0delete(translator_priv0print_val(___nl__im__28, ___nl__im__6, ___ref___rec__2));
#line 653
c_rt_lib0clear(&___nl__im__28);
#line 654
c_rt_lib0move(&___nl__im__31,___get_global_string_const(363));
#line 654
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__6, ___get_global_string_const(73), ___nl__im__6, ___get_global_string_const(558), ___nl__im__31));
#line 654
c_rt_lib0clear(&___nl__im__31);
#line 654
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_arg(___get_global_string_const(233), ___nl__im__30));
#line 654
c_rt_lib0clear(&___nl__im__30);
#line 654
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__29));
#line 654
c_rt_lib0clear(&___nl__im__29);
#line 655
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__6, ___ref___rec__2));
#line 656
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(226)));
#line 656
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__32, ___ref___rec__2));
#line 656
c_rt_lib0clear(&___nl__im__32);
#line 657
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(226)));
#line 657
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(220)));
#line 657
c_rt_lib0clear(&___nl__im__35);
#line 657
c_rt_lib0move(&___nl__im__33, translator0last_debug_char(___nl__im__34));
#line 657
c_rt_lib0clear(&___nl__im__34);
#line 657
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__33, ___ref___rec__2));
#line 657
c_rt_lib0clear(&___nl__im__33);
#line 658
c_rt_lib0move(&___nl__im__37, c_rt_lib0int_new(___nl__int__4));
#line 658
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__37));
#line 658
c_rt_lib0clear(&___nl__im__37);
#line 658
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__36));
#line 658
c_rt_lib0clear(&___nl__im__36);
#line 659
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__2));
#line 659
c_rt_lib0clear(&___nl__im__20);
#line 660
___nl__int__21 = ___nl__int__21 + ___nl__int__22;
#line 660
goto label_44;
#line 660
label_84:
;
#line 661
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(988)));
#line 661
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(226)));
#line 661
c_rt_lib0clear(&___nl__im__40);
#line 661
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(985));
#line 661
c_rt_lib0clear(&___nl__im__39);
#line 661
___nl__bool__38 = !___nl__bool__38;
#line 661
___nl__bool__38 = !___nl__bool__38;
#line 661
if(___nl__bool__38){ goto label_109;}
#line 662
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(988)));
#line 662
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__41, ___ref___rec__2));
#line 662
c_rt_lib0clear(&___nl__im__41);
#line 663
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(988)));
#line 663
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(220)));
#line 663
c_rt_lib0clear(&___nl__im__44);
#line 663
c_rt_lib0move(&___nl__im__42, translator0last_debug_char(___nl__im__43));
#line 663
c_rt_lib0clear(&___nl__im__43);
#line 663
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__42, ___ref___rec__2));
#line 663
c_rt_lib0clear(&___nl__im__42);
#line 664
c_rt_lib0move(&___nl__im__46, c_rt_lib0int_new(___nl__int__4));
#line 664
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__46));
#line 664
c_rt_lib0clear(&___nl__im__46);
#line 664
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__45));
#line 664
c_rt_lib0clear(&___nl__im__45);
#line 665
goto label_109;
#line 665
label_109:
;
#line 665
//clear ___nl__bool__38;
#line 666
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__2));
#line 667
c_rt_lib0delete(translator_priv0restore_registers(___nl__im__3, ___ref___rec__2));
#line 667
c_rt_lib0clear(&___nl__im__0);
#line 667
//clear ___nl__bool__1;
#line 667
c_rt_lib0clear(&___nl__im__3);
#line 667
//clear ___nl__int__4;
#line 667
//clear ___nl__int__5;
#line 667
c_rt_lib0clear(&___nl__im__6);
#line 667
c_rt_lib0clear(&___nl__im__19);
#line 667
c_rt_lib0clear(&___nl__im__20);
#line 667
//clear ___nl__int__21;
#line 667
//clear ___nl__int__22;
#line 667
//clear ___nl__int__23;
#line 667
//clear ___nl__bool__24;
#line 667
//clear ___nl__int__25;
#line 667
c_rt_lib0clear(&___nl__im__26);
#line 667
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
#line 674
c_rt_lib0move(&___nl__im__6,___get_global_string_const(269));
#line 674
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__0, ___get_global_string_const(266), ___nl__im__6, ___get_global_string_const(268), ___nl__im__1, ___get_global_string_const(265), ___nl__im__2));
#line 674
c_rt_lib0clear(&___nl__im__6);
#line 674
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(232), ___nl__im__5));
#line 674
c_rt_lib0clear(&___nl__im__5);
#line 674
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 674
c_rt_lib0clear(&___nl__im__4);
#line 674
c_rt_lib0clear(&___nl__im__0);
#line 674
c_rt_lib0clear(&___nl__im__1);
#line 674
c_rt_lib0clear(&___nl__im__2);
#line 674
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
#line 678
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 678
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 678
___nl__im_ptr__4 = NULL;
#line 679
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__0));
#line 680
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__1));
#line 680
___nl__bool__8 = false;
#line 680
c_rt_lib0move(&___nl__im__9, c_rt_lib0bool_to_nl_native(___nl__bool__8));
#line 680
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(579), ___nl__im__7, ___get_global_string_const(1327), ___nl__im__5, ___get_global_string_const(1328), ___nl__im__9));
#line 680
c_rt_lib0clear(&___nl__im__7);
#line 680
//clear ___nl__bool__8;
#line 680
c_rt_lib0clear(&___nl__im__9);
#line 680
___nl__im_ptr__10 = &((*___ref___rec__0).loop_label0field);
#line 680
c_rt_lib0copy(&___nl__im__11, ___nl__im__6);
#line 680
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_string_const(980), ___nl__im__11);
#line 680
___nl__im_ptr__10 = NULL;
#line 680
c_rt_lib0clear(&___nl__im__6);
#line 680
c_rt_lib0clear(&___nl__im__11);
#line 681
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__2));
#line 681
___nl__bool__14 = false;
#line 681
c_rt_lib0move(&___nl__im__15, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 681
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(579), ___nl__im__13, ___get_global_string_const(1327), ___nl__im__5, ___get_global_string_const(1328), ___nl__im__15));
#line 681
c_rt_lib0clear(&___nl__im__13);
#line 681
//clear ___nl__bool__14;
#line 681
c_rt_lib0clear(&___nl__im__15);
#line 681
___nl__im_ptr__16 = &((*___ref___rec__0).loop_label0field);
#line 681
c_rt_lib0copy(&___nl__im__17, ___nl__im__12);
#line 681
c_rt_lib0hash_set_value_dec(___nl__im_ptr__16, ___get_global_string_const(981), ___nl__im__17);
#line 681
___nl__im_ptr__16 = NULL;
#line 681
c_rt_lib0clear(&___nl__im__12);
#line 681
c_rt_lib0clear(&___nl__im__17);
#line 682
//clear ___nl__int__1;
#line 682
//clear ___nl__int__2;
#line 682
c_rt_lib0clear(&___nl__im__5);
#line 682
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
#line 686
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 686
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 686
___nl__im_ptr__4 = NULL;
#line 686
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(980)));
#line 686
c_rt_lib0clear(&___nl__im__3);
#line 686
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1328)));
#line 686
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__5);
#line 686
c_rt_lib0clear(&___nl__im__2);
#line 686
c_rt_lib0clear(&___nl__im__5);
#line 686
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
#line 690
___nl__im_ptr__4 = &((*___ref___rec__0).loop_label0field);
#line 690
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 690
___nl__im_ptr__4 = NULL;
#line 690
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(981)));
#line 690
c_rt_lib0clear(&___nl__im__3);
#line 690
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(1328)));
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

ImmT  translator_priv0print_fora(nast0fora_t0type ___nl__im__0,translator0state_t0type* ___ref___rec__1) {
c_rt_lib0arg_val(___nl__im__0);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT * ___nl__im_ptr__7 = NULL;
#line 694
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 694
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(204)));
#line 694
c_rt_lib0clear(&___nl__im__4);
#line 694
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 694
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 694
___nl__im_ptr__7 = NULL;
#line 694
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(416)));
#line 694
c_rt_lib0clear(&___nl__im__6);
#line 694
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 694
c_rt_lib0clear(&___nl__im__3);
#line 694
c_rt_lib0clear(&___nl__im__5);
#line 694
___nl__bool__2 = !___nl__bool__2;
#line 694
if(___nl__bool__2){ goto label_15;}
#line 695
c_rt_lib0delete(translator_priv0print_own_fora(___nl__im__0, ___ref___rec__1));
#line 696
goto label_18;
#line 696
label_15:
;
#line 697
c_rt_lib0delete(translator_priv0print_ptd_fora(___nl__im__0, ___ref___rec__1));
#line 698
goto label_18;
#line 698
label_18:
;
#line 698
//clear ___nl__bool__2;
#line 698
c_rt_lib0clear(&___nl__im__0);
#line 698
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
#line 702
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 702
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 702
___nl__im_ptr__4 = NULL;
#line 702
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(549)));
#line 702
c_rt_lib0clear(&___nl__im__3);
#line 703
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 703
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 703
c_rt_lib0clear(&___nl__im__6);
#line 704
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(362)));
#line 704
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 704
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 704
c_rt_lib0clear(&___nl__im__8);
#line 704
c_rt_lib0clear(&___nl__im__9);
#line 705
___nl__int__10 = translator_priv0get_sim_label(___ref___rec__1);
#line 706
___nl__int__11 = translator_priv0get_sim_label(___ref___rec__1);
#line 707
___nl__int__12 = translator_priv0get_sim_label(___ref___rec__1);
#line 708
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 708
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 708
c_rt_lib0clear(&___nl__im__14);
#line 709
___nl__int__15 = 0;
#line 709
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__15));
#line 709
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__13, ___ref___rec__1));
#line 709
//clear ___nl__int__15;
#line 709
c_rt_lib0clear(&___nl__im__16);
#line 710
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 710
c_rt_lib0move(&___nl__im__17, translator_priv0new_register(___ref___rec__1, ___nl__im__18));
#line 710
c_rt_lib0clear(&___nl__im__18);
#line 711
___nl__int__19 = 1;
#line 711
c_rt_lib0move(&___nl__im__20, c_rt_lib0int_new(___nl__int__19));
#line 711
c_rt_lib0delete(translator_priv0load_const(___nl__im__20, ___nl__im__17, ___ref___rec__1));
#line 711
//clear ___nl__int__19;
#line 711
c_rt_lib0clear(&___nl__im__20);
#line 712
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 712
c_rt_lib0move(&___nl__im__21, translator_priv0new_register(___ref___rec__1, ___nl__im__22));
#line 712
c_rt_lib0clear(&___nl__im__22);
#line 713
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__21, ___get_global_string_const(73), ___nl__im__5));
#line 713
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(242), ___nl__im__24));
#line 713
c_rt_lib0clear(&___nl__im__24);
#line 713
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__23));
#line 713
c_rt_lib0clear(&___nl__im__23);
#line 714
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 714
c_rt_lib0move(&___nl__im__25, translator_priv0new_register(___ref___rec__1, ___nl__im__26));
#line 714
c_rt_lib0clear(&___nl__im__26);
#line 715
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__12, ___ref___rec__1));
#line 716
c_rt_lib0move(&___nl__im__27,___get_global_string_const(387));
#line 716
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__25, ___nl__im__13, ___nl__im__21, ___nl__im__27, ___ref___rec__1));
#line 716
c_rt_lib0clear(&___nl__im__27);
#line 717
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__10, ___nl__im__25, ___ref___rec__1));
#line 718
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 718
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 718
c_rt_lib0clear(&___nl__im__29);
#line 719
c_rt_lib0delete(translator_priv0use_index(___nl__im__28, ___nl__im__5, ___nl__im__13, ___ref___rec__1));
#line 720
c_rt_lib0delete(translator_priv0move(___nl__im__7, ___nl__im__28, ___ref___rec__1));
#line 721
c_rt_lib0move(&___nl__im__30, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__10, ___nl__int__11));
#line 722
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 722
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__31, ___ref___rec__1));
#line 722
c_rt_lib0clear(&___nl__im__31);
#line 723
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__7, ___ref___rec__1));
#line 724
___nl__bool__32 = translator_priv0continue_used(___ref___rec__1);
#line 724
___nl__bool__32 = !___nl__bool__32;
#line 724
if(___nl__bool__32){ goto label_63;}
#line 724
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__11, ___ref___rec__1));
#line 724
goto label_63;
#line 724
label_63:
;
#line 724
//clear ___nl__bool__32;
#line 725
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1054)));
#line 725
___nl__bool__33 = c_rt_lib0check_true_native(___nl__im__34);
#line 725
c_rt_lib0clear(&___nl__im__34);
#line 725
___nl__bool__33 = !___nl__bool__33;
#line 725
___nl__bool__33 = !___nl__bool__33;
#line 725
if(___nl__bool__33){ goto label_75;}
#line 725
c_rt_lib0move(&___nl__im__35, translator0last_debug_char(___nl__im__2));
#line 725
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__35, ___ref___rec__1));
#line 725
c_rt_lib0clear(&___nl__im__35);
#line 725
goto label_75;
#line 725
label_75:
;
#line 725
//clear ___nl__bool__33;
#line 726
c_rt_lib0move(&___nl__im__38,___get_global_string_const(367));
#line 726
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__13, ___get_global_string_const(274), ___nl__im__13, ___get_global_string_const(275), ___nl__im__17, ___get_global_string_const(558), ___nl__im__38));
#line 726
c_rt_lib0clear(&___nl__im__38);
#line 726
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(234), ___nl__im__37));
#line 726
c_rt_lib0clear(&___nl__im__37);
#line 726
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__36));
#line 726
c_rt_lib0clear(&___nl__im__36);
#line 727
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__12));
#line 727
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__40));
#line 727
c_rt_lib0clear(&___nl__im__40);
#line 727
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__39));
#line 727
c_rt_lib0clear(&___nl__im__39);
#line 728
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__10, ___ref___rec__1));
#line 729
___nl__im_ptr__41 = &((*___ref___rec__1).loop_label0field);
#line 729
c_rt_lib0copy(___nl__im_ptr__41, ___nl__im__30);
#line 729
___nl__im_ptr__41 = NULL;
#line 729
c_rt_lib0clear(&___nl__im__0);
#line 729
c_rt_lib0clear(&___nl__im__2);
#line 729
c_rt_lib0clear(&___nl__im__5);
#line 729
c_rt_lib0clear(&___nl__im__7);
#line 729
//clear ___nl__int__10;
#line 729
//clear ___nl__int__11;
#line 729
//clear ___nl__int__12;
#line 729
c_rt_lib0clear(&___nl__im__13);
#line 729
c_rt_lib0clear(&___nl__im__17);
#line 729
c_rt_lib0clear(&___nl__im__21);
#line 729
c_rt_lib0clear(&___nl__im__25);
#line 729
c_rt_lib0clear(&___nl__im__28);
#line 729
c_rt_lib0clear(&___nl__im__30);
#line 729
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
#line 733
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 733
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 733
___nl__im_ptr__4 = NULL;
#line 733
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(549)));
#line 733
c_rt_lib0clear(&___nl__im__3);
#line 734
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(37)));
#line 734
___nl__bool__7 = true;
#line 734
c_rt_lib0move(&___nl__im__5, translator_priv0get_value_of_lvalue(___nl__im__6, ___nl__bool__7, ___ref___rec__1));
#line 734
c_rt_lib0clear(&___nl__im__6);
#line 734
//clear ___nl__bool__7;
#line 735
___nl__int__11 = c_rt_lib0array_len(___nl__im__5);
#line 735
___nl__int__12 = 1;
#line 735
___nl__int__10 = ___nl__int__11 - ___nl__int__12;
#line 735
//clear ___nl__int__11;
#line 735
//clear ___nl__int__12;
#line 735
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__5, ___nl__int__10));
#line 735
//clear ___nl__int__10;
#line 735
___nl__int__15 = c_rt_lib0array_len(___nl__im__5);
#line 735
___nl__int__16 = 1;
#line 735
___nl__int__14 = ___nl__int__15 - ___nl__int__16;
#line 735
//clear ___nl__int__15;
#line 735
//clear ___nl__int__16;
#line 735
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__5, ___nl__int__14));
#line 735
//clear ___nl__int__14;
#line 735
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(218)));
#line 735
c_rt_lib0clear(&___nl__im__9);
#line 735
c_rt_lib0clear(&___nl__im__13);
#line 736
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(362)));
#line 736
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(420)));
#line 736
c_rt_lib0move(&___nl__im__17, translator_priv0print_var_decl(___nl__im__18, ___ref___rec__1, ___nl__im__19));
#line 736
c_rt_lib0clear(&___nl__im__18);
#line 736
c_rt_lib0clear(&___nl__im__19);
#line 737
___nl__int__20 = translator_priv0get_sim_label(___ref___rec__1);
#line 738
___nl__int__21 = translator_priv0get_sim_label(___ref___rec__1);
#line 739
___nl__int__22 = translator_priv0get_sim_label(___ref___rec__1);
#line 740
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 740
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 740
c_rt_lib0clear(&___nl__im__24);
#line 741
___nl__int__25 = 0;
#line 741
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 741
c_rt_lib0delete(translator_priv0load_const(___nl__im__26, ___nl__im__23, ___ref___rec__1));
#line 741
//clear ___nl__int__25;
#line 741
c_rt_lib0clear(&___nl__im__26);
#line 742
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 742
c_rt_lib0move(&___nl__im__27, translator_priv0new_register(___ref___rec__1, ___nl__im__28));
#line 742
c_rt_lib0clear(&___nl__im__28);
#line 743
___nl__int__29 = 1;
#line 743
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 743
c_rt_lib0delete(translator_priv0load_const(___nl__im__30, ___nl__im__27, ___ref___rec__1));
#line 743
//clear ___nl__int__29;
#line 743
c_rt_lib0clear(&___nl__im__30);
#line 744
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 744
c_rt_lib0move(&___nl__im__31, translator_priv0new_register(___ref___rec__1, ___nl__im__32));
#line 744
c_rt_lib0clear(&___nl__im__32);
#line 745
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__31, ___get_global_string_const(73), ___nl__im__8));
#line 745
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_arg(___get_global_string_const(242), ___nl__im__34));
#line 745
c_rt_lib0clear(&___nl__im__34);
#line 745
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__33));
#line 745
c_rt_lib0clear(&___nl__im__33);
#line 746
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 746
c_rt_lib0move(&___nl__im__35, translator_priv0new_register(___ref___rec__1, ___nl__im__36));
#line 746
c_rt_lib0clear(&___nl__im__36);
#line 747
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__22, ___ref___rec__1));
#line 748
c_rt_lib0move(&___nl__im__37,___get_global_string_const(387));
#line 748
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__35, ___nl__im__23, ___nl__im__31, ___nl__im__37, ___ref___rec__1));
#line 748
c_rt_lib0clear(&___nl__im__37);
#line 749
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__20, ___nl__im__35, ___ref___rec__1));
#line 750
c_rt_lib0copy(&___nl__im__38, ___nl__im__17);
#line 751
c_rt_lib0delete(translator_priv0use_index(___nl__im__38, ___nl__im__8, ___nl__im__23, ___ref___rec__1));
#line 752
c_rt_lib0move(&___nl__im__39, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__20, ___nl__int__21));
#line 753
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 753
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__40, ___ref___rec__1));
#line 753
c_rt_lib0clear(&___nl__im__40);
#line 754
___nl__bool__41 = translator_priv0continue_used(___ref___rec__1);
#line 754
___nl__bool__41 = !___nl__bool__41;
#line 754
if(___nl__bool__41){ goto label_78;}
#line 754
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__21, ___ref___rec__1));
#line 754
goto label_78;
#line 754
label_78:
;
#line 754
//clear ___nl__bool__41;
#line 755
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1054)));
#line 755
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__43);
#line 755
c_rt_lib0clear(&___nl__im__43);
#line 755
___nl__bool__42 = !___nl__bool__42;
#line 755
___nl__bool__42 = !___nl__bool__42;
#line 755
if(___nl__bool__42){ goto label_90;}
#line 755
c_rt_lib0move(&___nl__im__44, translator0last_debug_char(___nl__im__2));
#line 755
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__44, ___ref___rec__1));
#line 755
c_rt_lib0clear(&___nl__im__44);
#line 755
goto label_90;
#line 755
label_90:
;
#line 755
//clear ___nl__bool__42;
#line 756
c_rt_lib0move(&___nl__im__47,___get_global_string_const(367));
#line 756
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__23, ___get_global_string_const(274), ___nl__im__23, ___get_global_string_const(275), ___nl__im__27, ___get_global_string_const(558), ___nl__im__47));
#line 756
c_rt_lib0clear(&___nl__im__47);
#line 756
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(234), ___nl__im__46));
#line 756
c_rt_lib0clear(&___nl__im__46);
#line 756
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__45));
#line 756
c_rt_lib0clear(&___nl__im__45);
#line 757
c_rt_lib0move(&___nl__im__49, c_rt_lib0int_new(___nl__int__22));
#line 757
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__49));
#line 757
c_rt_lib0clear(&___nl__im__49);
#line 757
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__48));
#line 757
c_rt_lib0clear(&___nl__im__48);
#line 758
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__20, ___ref___rec__1));
#line 759
___nl__bool__50 = false;
#line 759
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__5, ___nl__bool__50, ___ref___rec__1));
#line 759
//clear ___nl__bool__50;
#line 760
___nl__im_ptr__51 = &((*___ref___rec__1).loop_label0field);
#line 760
c_rt_lib0copy(___nl__im_ptr__51, ___nl__im__39);
#line 760
___nl__im_ptr__51 = NULL;
#line 760
c_rt_lib0clear(&___nl__im__0);
#line 760
c_rt_lib0clear(&___nl__im__2);
#line 760
c_rt_lib0clear(&___nl__im__5);
#line 760
c_rt_lib0clear(&___nl__im__8);
#line 760
c_rt_lib0clear(&___nl__im__17);
#line 760
//clear ___nl__int__20;
#line 760
//clear ___nl__int__21;
#line 760
//clear ___nl__int__22;
#line 760
c_rt_lib0clear(&___nl__im__23);
#line 760
c_rt_lib0clear(&___nl__im__27);
#line 760
c_rt_lib0clear(&___nl__im__31);
#line 760
c_rt_lib0clear(&___nl__im__35);
#line 760
c_rt_lib0clear(&___nl__im__38);
#line 760
c_rt_lib0clear(&___nl__im__39);
#line 760
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
#line 764
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 765
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 766
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 767
c_rt_lib0move(&___nl__im__4, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 768
c_rt_lib0move(&___nl__im__5, translator_priv0save_registers(___ref___rec__1));
#line 769
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__0, ___ref___rec__1));
#line 770
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__5, ___ref___rec__1));
#line 771
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 771
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__6, ___ref___rec__1));
#line 771
c_rt_lib0clear(&___nl__im__6);
#line 772
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__3));
#line 772
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__8));
#line 772
c_rt_lib0clear(&___nl__im__8);
#line 772
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__7));
#line 772
c_rt_lib0clear(&___nl__im__7);
#line 773
___nl__bool__9 = translator_priv0break_used(___ref___rec__1);
#line 773
___nl__bool__9 = !___nl__bool__9;
#line 773
if(___nl__bool__9){ goto label_20;}
#line 773
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 773
goto label_20;
#line 773
label_20:
;
#line 773
//clear ___nl__bool__9;
#line 774
___nl__im_ptr__10 = &((*___ref___rec__1).loop_label0field);
#line 774
c_rt_lib0copy(___nl__im_ptr__10, ___nl__im__4);
#line 774
___nl__im_ptr__10 = NULL;
#line 774
c_rt_lib0clear(&___nl__im__0);
#line 774
//clear ___nl__int__2;
#line 774
//clear ___nl__int__3;
#line 774
c_rt_lib0clear(&___nl__im__4);
#line 774
c_rt_lib0clear(&___nl__im__5);
#line 774
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
#line 778
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 779
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 780
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 781
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(991)));
#line 781
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__6, ___ref___rec__1));
#line 781
c_rt_lib0clear(&___nl__im__6);
#line 782
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(362)));
#line 782
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 782
c_rt_lib0move(&___nl__im__7, translator_priv0print_var_decl(___nl__im__8, ___ref___rec__1, ___nl__im__9));
#line 782
c_rt_lib0clear(&___nl__im__8);
#line 782
c_rt_lib0clear(&___nl__im__9);
#line 783
___nl__int__10 = 0;
#line 783
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__10));
#line 783
c_rt_lib0delete(translator_priv0load_const(___nl__im__11, ___nl__im__7, ___ref___rec__1));
#line 783
//clear ___nl__int__10;
#line 783
c_rt_lib0clear(&___nl__im__11);
#line 784
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 784
c_rt_lib0move(&___nl__im__12, translator_priv0new_register(___ref___rec__1, ___nl__im__13));
#line 784
c_rt_lib0clear(&___nl__im__13);
#line 785
___nl__int__14 = 1;
#line 785
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 785
c_rt_lib0delete(translator_priv0load_const(___nl__im__15, ___nl__im__12, ___ref___rec__1));
#line 785
//clear ___nl__int__14;
#line 785
c_rt_lib0clear(&___nl__im__15);
#line 786
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 786
c_rt_lib0move(&___nl__im__16, translator_priv0new_register(___ref___rec__1, ___nl__im__17));
#line 786
c_rt_lib0clear(&___nl__im__17);
#line 787
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 788
c_rt_lib0move(&___nl__im__18,___get_global_string_const(387));
#line 788
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__im__16, ___nl__im__7, ___nl__im__5, ___nl__im__18, ___ref___rec__1));
#line 788
c_rt_lib0clear(&___nl__im__18);
#line 789
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__16, ___ref___rec__1));
#line 790
c_rt_lib0move(&___nl__im__19, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 791
c_rt_lib0move(&___nl__im__20, translator_priv0save_registers(___ref___rec__1));
#line 792
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 792
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__21, ___ref___rec__1));
#line 792
c_rt_lib0clear(&___nl__im__21);
#line 793
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__20, ___ref___rec__1));
#line 794
___nl__bool__22 = translator_priv0continue_used(___ref___rec__1);
#line 794
___nl__bool__22 = !___nl__bool__22;
#line 794
if(___nl__bool__22){ goto label_43;}
#line 794
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 794
goto label_43;
#line 794
label_43:
;
#line 794
//clear ___nl__bool__22;
#line 795
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1054)));
#line 795
___nl__bool__23 = c_rt_lib0check_true_native(___nl__im__24);
#line 795
c_rt_lib0clear(&___nl__im__24);
#line 795
___nl__bool__23 = !___nl__bool__23;
#line 795
___nl__bool__23 = !___nl__bool__23;
#line 795
if(___nl__bool__23){ goto label_59;}
#line 795
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 795
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(220)));
#line 795
c_rt_lib0clear(&___nl__im__27);
#line 795
c_rt_lib0move(&___nl__im__25, translator0last_debug_char(___nl__im__26));
#line 795
c_rt_lib0clear(&___nl__im__26);
#line 795
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__25, ___ref___rec__1));
#line 795
c_rt_lib0clear(&___nl__im__25);
#line 795
goto label_59;
#line 795
label_59:
;
#line 795
//clear ___nl__bool__23;
#line 796
c_rt_lib0move(&___nl__im__30,___get_global_string_const(367));
#line 796
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__7, ___get_global_string_const(274), ___nl__im__7, ___get_global_string_const(275), ___nl__im__12, ___get_global_string_const(558), ___nl__im__30));
#line 796
c_rt_lib0clear(&___nl__im__30);
#line 796
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(234), ___nl__im__29));
#line 796
c_rt_lib0clear(&___nl__im__29);
#line 796
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__28));
#line 796
c_rt_lib0clear(&___nl__im__28);
#line 797
c_rt_lib0move(&___nl__im__32, c_rt_lib0int_new(___nl__int__4));
#line 797
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__32));
#line 797
c_rt_lib0clear(&___nl__im__32);
#line 797
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__31));
#line 797
c_rt_lib0clear(&___nl__im__31);
#line 798
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 799
___nl__im_ptr__33 = &((*___ref___rec__1).loop_label0field);
#line 799
c_rt_lib0copy(___nl__im_ptr__33, ___nl__im__19);
#line 799
___nl__im_ptr__33 = NULL;
#line 799
c_rt_lib0clear(&___nl__im__0);
#line 799
//clear ___nl__int__2;
#line 799
//clear ___nl__int__3;
#line 799
//clear ___nl__int__4;
#line 799
c_rt_lib0clear(&___nl__im__5);
#line 799
c_rt_lib0clear(&___nl__im__7);
#line 799
c_rt_lib0clear(&___nl__im__12);
#line 799
c_rt_lib0clear(&___nl__im__16);
#line 799
c_rt_lib0clear(&___nl__im__19);
#line 799
c_rt_lib0clear(&___nl__im__20);
#line 799
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
#line 803
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 803
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(204)));
#line 803
c_rt_lib0clear(&___nl__im__4);
#line 803
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 803
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 803
___nl__im_ptr__7 = NULL;
#line 803
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(416)));
#line 803
c_rt_lib0clear(&___nl__im__6);
#line 803
___nl__bool__2 = tct0is_own_type(___nl__im__3, ___nl__im__5);
#line 803
c_rt_lib0clear(&___nl__im__3);
#line 803
c_rt_lib0clear(&___nl__im__5);
#line 803
___nl__bool__2 = !___nl__bool__2;
#line 803
if(___nl__bool__2){ goto label_15;}
#line 804
c_rt_lib0delete(translator_priv0print_own_forh(___nl__im__0, ___ref___rec__1));
#line 805
goto label_18;
#line 805
label_15:
;
#line 806
c_rt_lib0delete(translator_priv0print_ptd_forh(___nl__im__0, ___ref___rec__1));
#line 807
goto label_18;
#line 807
label_18:
;
#line 807
//clear ___nl__bool__2;
#line 807
c_rt_lib0clear(&___nl__im__0);
#line 807
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
#line 811
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 811
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 811
___nl__im_ptr__4 = NULL;
#line 811
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(549)));
#line 811
c_rt_lib0clear(&___nl__im__3);
#line 812
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 813
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 814
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 815
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 815
c_rt_lib0move(&___nl__im__8, translator_priv0calc_val(___nl__im__9, ___ref___rec__1));
#line 815
c_rt_lib0clear(&___nl__im__9);
#line 816
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(575)));
#line 816
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 816
c_rt_lib0move(&___nl__im__10, translator_priv0print_var_decl(___nl__im__11, ___ref___rec__1, ___nl__im__12));
#line 816
c_rt_lib0clear(&___nl__im__11);
#line 816
c_rt_lib0clear(&___nl__im__12);
#line 817
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 817
c_rt_lib0move(&___nl__im__13, translator_priv0new_register(___ref___rec__1, ___nl__im__14));
#line 817
c_rt_lib0clear(&___nl__im__14);
#line 818
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 818
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 818
c_rt_lib0move(&___nl__im__15, translator_priv0print_var_decl(___nl__im__16, ___ref___rec__1, ___nl__im__17));
#line 818
c_rt_lib0clear(&___nl__im__16);
#line 818
c_rt_lib0clear(&___nl__im__17);
#line 819
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 819
c_rt_lib0move(&___nl__im__18, translator_priv0new_register(___ref___rec__1, ___nl__im__19));
#line 819
c_rt_lib0clear(&___nl__im__19);
#line 820
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_mk(2, ___get_global_string_const(362), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 820
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(261), ___nl__im__21));
#line 820
c_rt_lib0clear(&___nl__im__21);
#line 820
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 820
c_rt_lib0clear(&___nl__im__20);
#line 821
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 822
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__13, ___get_global_string_const(362), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 822
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(264), ___nl__im__23));
#line 822
c_rt_lib0clear(&___nl__im__23);
#line 822
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__22));
#line 822
c_rt_lib0clear(&___nl__im__22);
#line 823
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__13, ___ref___rec__1));
#line 824
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__10, ___get_global_string_const(362), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 824
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__25));
#line 824
c_rt_lib0clear(&___nl__im__25);
#line 824
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 824
c_rt_lib0clear(&___nl__im__24);
#line 826
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 826
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(204)));
#line 826
___nl__bool__26 = nlasm0eq_reg_type(___nl__im__27, ___nl__im__28);
#line 826
c_rt_lib0clear(&___nl__im__27);
#line 826
c_rt_lib0clear(&___nl__im__28);
#line 826
___nl__bool__26 = !___nl__bool__26;
#line 827
c_rt_lib0copy(&___nl__im__29, ___nl__im__15);
#line 828
___nl__bool__30 = ___nl__bool__26;
#line 828
___nl__bool__30 = !___nl__bool__30;
#line 828
if(___nl__bool__30){ goto label_58;}
#line 828
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 828
c_rt_lib0move(&___nl__im__29, translator_priv0new_register(___ref___rec__1, ___nl__im__31));
#line 828
c_rt_lib0clear(&___nl__im__31);
#line 828
goto label_58;
#line 828
label_58:
;
#line 828
//clear ___nl__bool__30;
#line 829
c_rt_lib0move(&___nl__im__32,___get_global_string_const(768));
#line 829
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__8));
#line 829
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__10));
#line 829
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__35));
#line 829
c_rt_lib0clear(&___nl__im__34);
#line 829
c_rt_lib0clear(&___nl__im__35);
#line 829
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__29, ___nl__im__32, ___nl__im__33, ___ref___rec__1));
#line 829
c_rt_lib0clear(&___nl__im__32);
#line 829
c_rt_lib0clear(&___nl__im__33);
#line 830
___nl__bool__36 = ___nl__bool__26;
#line 830
___nl__bool__36 = !___nl__bool__36;
#line 830
if(___nl__bool__36){ goto label_74;}
#line 830
c_rt_lib0delete(translator_priv0move(___nl__im__15, ___nl__im__29, ___ref___rec__1));
#line 830
goto label_74;
#line 830
label_74:
;
#line 830
//clear ___nl__bool__36;
#line 832
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 833
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 834
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 834
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 834
c_rt_lib0clear(&___nl__im__39);
#line 835
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 836
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 836
___nl__bool__40 = !___nl__bool__40;
#line 836
if(___nl__bool__40){ goto label_87;}
#line 836
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 836
goto label_87;
#line 836
label_87:
;
#line 836
//clear ___nl__bool__40;
#line 837
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1054)));
#line 837
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 837
c_rt_lib0clear(&___nl__im__42);
#line 837
___nl__bool__41 = !___nl__bool__41;
#line 837
___nl__bool__41 = !___nl__bool__41;
#line 837
if(___nl__bool__41){ goto label_99;}
#line 837
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 837
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 837
c_rt_lib0clear(&___nl__im__43);
#line 837
goto label_99;
#line 837
label_99:
;
#line 837
//clear ___nl__bool__41;
#line 838
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(362), ___nl__im__18, ___get_global_string_const(128), ___nl__im__8));
#line 838
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(262), ___nl__im__45));
#line 838
c_rt_lib0clear(&___nl__im__45);
#line 838
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 838
c_rt_lib0clear(&___nl__im__44);
#line 839
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 839
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__47));
#line 839
c_rt_lib0clear(&___nl__im__47);
#line 839
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 839
c_rt_lib0clear(&___nl__im__46);
#line 840
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 841
___nl__im_ptr__48 = &((*___ref___rec__1).loop_label0field);
#line 841
c_rt_lib0copy(___nl__im_ptr__48, ___nl__im__37);
#line 841
___nl__im_ptr__48 = NULL;
#line 841
c_rt_lib0clear(&___nl__im__0);
#line 841
c_rt_lib0clear(&___nl__im__2);
#line 841
//clear ___nl__int__5;
#line 841
//clear ___nl__int__6;
#line 841
//clear ___nl__int__7;
#line 841
c_rt_lib0clear(&___nl__im__8);
#line 841
c_rt_lib0clear(&___nl__im__10);
#line 841
c_rt_lib0clear(&___nl__im__13);
#line 841
c_rt_lib0clear(&___nl__im__15);
#line 841
c_rt_lib0clear(&___nl__im__18);
#line 841
//clear ___nl__bool__26;
#line 841
c_rt_lib0clear(&___nl__im__29);
#line 841
c_rt_lib0clear(&___nl__im__37);
#line 841
c_rt_lib0clear(&___nl__im__38);
#line 841
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
#line 845
___nl__im_ptr__4 = &((*___ref___rec__1).debug0field);
#line 845
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 845
___nl__im_ptr__4 = NULL;
#line 845
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(549)));
#line 845
c_rt_lib0clear(&___nl__im__3);
#line 846
___nl__int__5 = translator_priv0get_sim_label(___ref___rec__1);
#line 847
___nl__int__6 = translator_priv0get_sim_label(___ref___rec__1);
#line 848
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__1);
#line 849
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(128)));
#line 849
___nl__bool__10 = true;
#line 849
c_rt_lib0move(&___nl__im__8, translator_priv0get_value_of_lvalue(___nl__im__9, ___nl__bool__10, ___ref___rec__1));
#line 849
c_rt_lib0clear(&___nl__im__9);
#line 849
//clear ___nl__bool__10;
#line 850
___nl__int__14 = c_rt_lib0array_len(___nl__im__8);
#line 850
___nl__int__15 = 1;
#line 850
___nl__int__13 = ___nl__int__14 - ___nl__int__15;
#line 850
//clear ___nl__int__14;
#line 850
//clear ___nl__int__15;
#line 850
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__8, ___nl__int__13));
#line 850
//clear ___nl__int__13;
#line 850
___nl__int__18 = c_rt_lib0array_len(___nl__im__8);
#line 850
___nl__int__19 = 1;
#line 850
___nl__int__17 = ___nl__int__18 - ___nl__int__19;
#line 850
//clear ___nl__int__18;
#line 850
//clear ___nl__int__19;
#line 850
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__8, ___nl__int__17));
#line 850
//clear ___nl__int__17;
#line 850
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(218)));
#line 850
c_rt_lib0clear(&___nl__im__12);
#line 850
c_rt_lib0clear(&___nl__im__16);
#line 851
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(575)));
#line 851
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 851
c_rt_lib0move(&___nl__im__20, translator_priv0print_var_decl(___nl__im__21, ___ref___rec__1, ___nl__im__22));
#line 851
c_rt_lib0clear(&___nl__im__21);
#line 851
c_rt_lib0clear(&___nl__im__22);
#line 852
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 852
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__1, ___nl__im__24));
#line 852
c_rt_lib0clear(&___nl__im__24);
#line 853
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 853
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_none(___get_global_string_const(420)));
#line 853
c_rt_lib0move(&___nl__im__25, translator_priv0print_var_decl(___nl__im__26, ___ref___rec__1, ___nl__im__27));
#line 853
c_rt_lib0clear(&___nl__im__26);
#line 853
c_rt_lib0clear(&___nl__im__27);
#line 854
c_rt_lib0move(&___nl__im__29, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 854
c_rt_lib0move(&___nl__im__28, translator_priv0new_register(___ref___rec__1, ___nl__im__29));
#line 854
c_rt_lib0clear(&___nl__im__29);
#line 855
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_mk(2, ___get_global_string_const(362), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 855
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_arg(___get_global_string_const(261), ___nl__im__31));
#line 855
c_rt_lib0clear(&___nl__im__31);
#line 855
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__30));
#line 855
c_rt_lib0clear(&___nl__im__30);
#line 856
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__1));
#line 857
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__23, ___get_global_string_const(362), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 857
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(264), ___nl__im__33));
#line 857
c_rt_lib0clear(&___nl__im__33);
#line 857
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 857
c_rt_lib0clear(&___nl__im__32);
#line 858
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__5, ___nl__im__23, ___ref___rec__1));
#line 859
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__20, ___get_global_string_const(362), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 859
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(263), ___nl__im__35));
#line 859
c_rt_lib0clear(&___nl__im__35);
#line 859
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__34));
#line 859
c_rt_lib0clear(&___nl__im__34);
#line 861
___nl__bool__36 = false;
#line 861
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___nl__bool__36, ___ref___rec__1));
#line 861
//clear ___nl__bool__36;
#line 863
c_rt_lib0move(&___nl__im__37, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__5, ___nl__int__6));
#line 864
c_rt_lib0move(&___nl__im__38, translator_priv0save_registers(___ref___rec__1));
#line 865
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 865
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__39, ___ref___rec__1));
#line 865
c_rt_lib0clear(&___nl__im__39);
#line 866
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__38, ___ref___rec__1));
#line 867
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__25, ___nl__im__11, ___nl__im__20, ___ref___rec__1));
#line 868
___nl__bool__40 = translator_priv0continue_used(___ref___rec__1);
#line 868
___nl__bool__40 = !___nl__bool__40;
#line 868
if(___nl__bool__40){ goto label_78;}
#line 868
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__6, ___ref___rec__1));
#line 868
goto label_78;
#line 868
label_78:
;
#line 868
//clear ___nl__bool__40;
#line 869
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1054)));
#line 869
___nl__bool__41 = c_rt_lib0check_true_native(___nl__im__42);
#line 869
c_rt_lib0clear(&___nl__im__42);
#line 869
___nl__bool__41 = !___nl__bool__41;
#line 869
___nl__bool__41 = !___nl__bool__41;
#line 869
if(___nl__bool__41){ goto label_90;}
#line 869
c_rt_lib0move(&___nl__im__43, translator0last_debug_char(___nl__im__2));
#line 869
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__43, ___ref___rec__1));
#line 869
c_rt_lib0clear(&___nl__im__43);
#line 869
goto label_90;
#line 869
label_90:
;
#line 869
//clear ___nl__bool__41;
#line 870
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_mk(2, ___get_global_string_const(362), ___nl__im__28, ___get_global_string_const(128), ___nl__im__11));
#line 870
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_arg(___get_global_string_const(262), ___nl__im__45));
#line 870
c_rt_lib0clear(&___nl__im__45);
#line 870
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__44));
#line 870
c_rt_lib0clear(&___nl__im__44);
#line 871
c_rt_lib0move(&___nl__im__47, c_rt_lib0int_new(___nl__int__7));
#line 871
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__47));
#line 871
c_rt_lib0clear(&___nl__im__47);
#line 871
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__46));
#line 871
c_rt_lib0clear(&___nl__im__46);
#line 872
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__5, ___ref___rec__1));
#line 873
___nl__bool__48 = false;
#line 873
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__im__8, ___nl__bool__48, ___ref___rec__1));
#line 873
//clear ___nl__bool__48;
#line 874
___nl__im_ptr__49 = &((*___ref___rec__1).loop_label0field);
#line 874
c_rt_lib0copy(___nl__im_ptr__49, ___nl__im__37);
#line 874
___nl__im_ptr__49 = NULL;
#line 874
c_rt_lib0clear(&___nl__im__0);
#line 874
c_rt_lib0clear(&___nl__im__2);
#line 874
//clear ___nl__int__5;
#line 874
//clear ___nl__int__6;
#line 874
//clear ___nl__int__7;
#line 874
c_rt_lib0clear(&___nl__im__8);
#line 874
c_rt_lib0clear(&___nl__im__11);
#line 874
c_rt_lib0clear(&___nl__im__20);
#line 874
c_rt_lib0clear(&___nl__im__23);
#line 874
c_rt_lib0clear(&___nl__im__25);
#line 874
c_rt_lib0clear(&___nl__im__28);
#line 874
c_rt_lib0clear(&___nl__im__37);
#line 874
c_rt_lib0clear(&___nl__im__38);
#line 874
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
#line 878
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 879
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 880
___nl__im_ptr__6 = &((*___ref___rec__1).debug0field);
#line 880
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 880
___nl__im_ptr__6 = NULL;
#line 880
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(549)));
#line 880
c_rt_lib0clear(&___nl__im__5);
#line 881
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 882
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 882
c_rt_lib0move(&___nl__im__7, translator_priv0calc_val(___nl__im__8, ___ref___rec__1));
#line 882
c_rt_lib0clear(&___nl__im__8);
#line 883
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 883
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__7, ___nl__im__10, ___ref___rec__1));
#line 883
c_rt_lib0clear(&___nl__im__10);
#line 884
c_rt_lib0move(&___nl__im__13,___get_global_string_const(363));
#line 884
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__9, ___get_global_string_const(73), ___nl__im__9, ___get_global_string_const(558), ___nl__im__13));
#line 884
c_rt_lib0clear(&___nl__im__13);
#line 884
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(233), ___nl__im__12));
#line 884
c_rt_lib0clear(&___nl__im__12);
#line 884
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__11));
#line 884
c_rt_lib0clear(&___nl__im__11);
#line 885
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__9, ___ref___rec__1));
#line 886
c_rt_lib0move(&___nl__im__14, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__3));
#line 887
c_rt_lib0move(&___nl__im__15, translator_priv0save_registers(___ref___rec__1));
#line 888
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 888
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__16, ___ref___rec__1));
#line 888
c_rt_lib0clear(&___nl__im__16);
#line 889
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__15, ___ref___rec__1));
#line 890
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1054)));
#line 890
___nl__bool__17 = c_rt_lib0check_true_native(___nl__im__18);
#line 890
c_rt_lib0clear(&___nl__im__18);
#line 890
___nl__bool__17 = !___nl__bool__17;
#line 890
___nl__bool__17 = !___nl__bool__17;
#line 890
if(___nl__bool__17){ goto label_38;}
#line 890
c_rt_lib0move(&___nl__im__19, translator0last_debug_char(___nl__im__4));
#line 890
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__19, ___ref___rec__1));
#line 890
c_rt_lib0clear(&___nl__im__19);
#line 890
goto label_38;
#line 890
label_38:
;
#line 890
//clear ___nl__bool__17;
#line 891
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__3));
#line 891
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__21));
#line 891
c_rt_lib0clear(&___nl__im__21);
#line 891
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__20));
#line 891
c_rt_lib0clear(&___nl__im__20);
#line 892
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 893
___nl__im_ptr__22 = &((*___ref___rec__1).loop_label0field);
#line 893
c_rt_lib0copy(___nl__im_ptr__22, ___nl__im__14);
#line 893
___nl__im_ptr__22 = NULL;
#line 893
c_rt_lib0clear(&___nl__im__0);
#line 893
//clear ___nl__int__2;
#line 893
//clear ___nl__int__3;
#line 893
c_rt_lib0clear(&___nl__im__4);
#line 893
c_rt_lib0clear(&___nl__im__7);
#line 893
c_rt_lib0clear(&___nl__im__9);
#line 893
c_rt_lib0clear(&___nl__im__14);
#line 893
c_rt_lib0clear(&___nl__im__15);
#line 893
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
#line 897
___nl__int__2 = translator_priv0get_sim_label(___ref___rec__1);
#line 898
___nl__int__3 = translator_priv0get_sim_label(___ref___rec__1);
#line 899
___nl__int__4 = translator_priv0get_sim_label(___ref___rec__1);
#line 900
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(989)));
#line 900
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(218));
#line 900
if(___nl__bool__6){ goto label_11;}
#line 902
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(252));
#line 902
if(___nl__bool__6){ goto label_27;}
#line 902
c_rt_lib0move(&___nl__im__7,___get_global_string_const(15));
#line 902
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 902
nl_die_arg(___nl__im__7);
#line 900
label_11:
;
#line 900
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(218)));
#line 900
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 901
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 901
___nl__int__12 = 1;
#line 901
___nl__int__12 = -___nl__int__12;
#line 901
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 901
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 901
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__11, ___get_global_string_const(217), ___nl__im__13, ___get_global_string_const(351), ___nl__im__14));
#line 901
c_rt_lib0clear(&___nl__im__11);
#line 901
//clear ___nl__int__12;
#line 901
c_rt_lib0clear(&___nl__im__13);
#line 901
c_rt_lib0clear(&___nl__im__14);
#line 901
c_rt_lib0delete(translator_priv0print_val(___nl__im__8, ___nl__im__10, ___ref___rec__1));
#line 901
c_rt_lib0clear(&___nl__im__10);
#line 902
goto label_34;
#line 902
label_27:
;
#line 902
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__5, ___get_global_string_const(252)));
#line 902
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 903
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 903
c_rt_lib0delete(translator_priv0print_var_decl(___nl__im__15, ___ref___rec__1, ___nl__im__17));
#line 903
c_rt_lib0clear(&___nl__im__17);
#line 904
goto label_34;
#line 904
label_34:
;
#line 905
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__3, ___ref___rec__1));
#line 906
___nl__bool__18 = false;
#line 907
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 907
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(218)));
#line 907
c_rt_lib0clear(&___nl__im__21);
#line 907
___nl__bool__19 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(985));
#line 907
c_rt_lib0clear(&___nl__im__20);
#line 907
___nl__bool__19 = !___nl__bool__19;
#line 907
___nl__bool__19 = !___nl__bool__19;
#line 907
if(___nl__bool__19){ goto label_58;}
#line 908
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(986)));
#line 908
c_rt_lib0move(&___nl__im__22, translator_priv0calc_val(___nl__im__23, ___ref___rec__1));
#line 908
c_rt_lib0clear(&___nl__im__23);
#line 909
c_rt_lib0move(&___nl__im__26,___get_global_string_const(363));
#line 909
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__22, ___get_global_string_const(73), ___nl__im__22, ___get_global_string_const(558), ___nl__im__26));
#line 909
c_rt_lib0clear(&___nl__im__26);
#line 909
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(233), ___nl__im__25));
#line 909
c_rt_lib0clear(&___nl__im__25);
#line 909
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 909
c_rt_lib0clear(&___nl__im__24);
#line 910
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__2, ___nl__im__22, ___ref___rec__1));
#line 911
___nl__bool__18 = true;
#line 912
goto label_58;
#line 912
label_58:
;
#line 912
//clear ___nl__bool__19;
#line 912
c_rt_lib0clear(&___nl__im__22);
#line 913
c_rt_lib0move(&___nl__im__27, translator_priv0save_loop_break(___ref___rec__1, ___nl__int__2, ___nl__int__4));
#line 914
c_rt_lib0move(&___nl__im__28, translator_priv0save_registers(___ref___rec__1));
#line 915
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 915
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__29, ___ref___rec__1));
#line 915
c_rt_lib0clear(&___nl__im__29);
#line 916
c_rt_lib0delete(translator_priv0restore_registers_only_clear(___nl__im__28, ___ref___rec__1));
#line 917
___nl__bool__30 = translator_priv0continue_used(___ref___rec__1);
#line 917
___nl__bool__30 = !___nl__bool__30;
#line 917
if(___nl__bool__30){ goto label_72;}
#line 917
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__4, ___ref___rec__1));
#line 917
goto label_72;
#line 917
label_72:
;
#line 917
//clear ___nl__bool__30;
#line 918
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(362)));
#line 918
c_rt_lib0move(&___nl__im__33, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 918
___nl__int__34 = 1;
#line 918
___nl__int__34 = -___nl__int__34;
#line 918
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__34));
#line 918
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 918
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__33, ___get_global_string_const(217), ___nl__im__35, ___get_global_string_const(351), ___nl__im__36));
#line 918
c_rt_lib0clear(&___nl__im__33);
#line 918
//clear ___nl__int__34;
#line 918
c_rt_lib0clear(&___nl__im__35);
#line 918
c_rt_lib0clear(&___nl__im__36);
#line 918
c_rt_lib0delete(translator_priv0print_val(___nl__im__31, ___nl__im__32, ___ref___rec__1));
#line 918
c_rt_lib0clear(&___nl__im__31);
#line 918
c_rt_lib0clear(&___nl__im__32);
#line 919
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 919
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(220)));
#line 919
c_rt_lib0clear(&___nl__im__39);
#line 919
c_rt_lib0move(&___nl__im__37, translator0last_debug_char(___nl__im__38));
#line 919
c_rt_lib0clear(&___nl__im__38);
#line 919
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__37, ___ref___rec__1));
#line 919
c_rt_lib0clear(&___nl__im__37);
#line 920
c_rt_lib0move(&___nl__im__41, c_rt_lib0int_new(___nl__int__3));
#line 920
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__41));
#line 920
c_rt_lib0clear(&___nl__im__41);
#line 920
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__40));
#line 920
c_rt_lib0clear(&___nl__im__40);
#line 921
___nl__bool__42 = ___nl__bool__18;
#line 921
if(___nl__bool__42){ goto label_103;}
#line 921
___nl__bool__42 = translator_priv0break_used(___ref___rec__1);
#line 921
label_103:
;
#line 921
___nl__bool__42 = !___nl__bool__42;
#line 921
if(___nl__bool__42){ goto label_108;}
#line 921
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__2, ___ref___rec__1));
#line 921
goto label_108;
#line 921
label_108:
;
#line 921
//clear ___nl__bool__42;
#line 922
___nl__im_ptr__43 = &((*___ref___rec__1).loop_label0field);
#line 922
c_rt_lib0copy(___nl__im_ptr__43, ___nl__im__27);
#line 922
___nl__im_ptr__43 = NULL;
#line 922
c_rt_lib0clear(&___nl__im__0);
#line 922
//clear ___nl__int__2;
#line 922
//clear ___nl__int__3;
#line 922
//clear ___nl__int__4;
#line 922
c_rt_lib0clear(&___nl__im__5);
#line 922
//clear ___nl__bool__6;
#line 922
c_rt_lib0clear(&___nl__im__7);
#line 922
c_rt_lib0clear(&___nl__im__8);
#line 922
c_rt_lib0clear(&___nl__im__9);
#line 922
c_rt_lib0clear(&___nl__im__15);
#line 922
c_rt_lib0clear(&___nl__im__16);
#line 922
//clear ___nl__bool__18;
#line 922
c_rt_lib0clear(&___nl__im__27);
#line 922
c_rt_lib0clear(&___nl__im__28);
#line 922
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
#line 926
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 927
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 927
c_rt_lib0move(&___nl__im__3, translator_priv0calc_val(___nl__im__4, ___ref___rec__1));
#line 927
c_rt_lib0clear(&___nl__im__4);
#line 928
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 928
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__1, ___nl__im__6));
#line 928
c_rt_lib0clear(&___nl__im__6);
#line 929
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 929
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 929
c_rt_lib0clear(&___nl__im__8);
#line 930
___nl__int__9 = translator_priv0get_sim_label(___ref___rec__1);
#line 931
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(994)));
#line 931
___nl__int__12 = 0;
#line 931
___nl__int__13 = 1;
#line 931
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 931
label_15:
;
#line 931
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 931
___nl__bool__15 = ___nl__int__16;
#line 931
if(___nl__bool__15){ goto label_52;}
#line 931
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 931
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 932
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(220)));
#line 932
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__18, ___ref___rec__1));
#line 932
c_rt_lib0clear(&___nl__im__18);
#line 933
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 933
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(204)));
#line 933
c_rt_lib0clear(&___nl__im__21);
#line 933
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(560)));
#line 933
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(166)));
#line 933
c_rt_lib0clear(&___nl__im__23);
#line 933
___nl__int__19 = translator_priv0get_label_number(___ref___rec__1, ___nl__im__20, ___nl__im__22);
#line 933
c_rt_lib0clear(&___nl__im__20);
#line 933
c_rt_lib0clear(&___nl__im__22);
#line 934
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(560)));
#line 934
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(166)));
#line 934
c_rt_lib0clear(&___nl__im__27);
#line 934
c_rt_lib0move(&___nl__im__28, c_rt_lib0int_new(___nl__int__19));
#line 934
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__5, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(204), ___nl__im__26, ___get_global_string_const(564), ___nl__im__28));
#line 934
c_rt_lib0clear(&___nl__im__26);
#line 934
c_rt_lib0clear(&___nl__im__28);
#line 934
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_arg(___get_global_string_const(235), ___nl__im__25));
#line 934
c_rt_lib0clear(&___nl__im__25);
#line 934
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__24));
#line 934
c_rt_lib0clear(&___nl__im__24);
#line 935
___nl__int__29 = translator_priv0get_sim_label(___ref___rec__1);
#line 936
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__29, ___nl__im__5, ___ref___rec__1));
#line 937
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 937
c_rt_lib0delete(array0push(&___nl__im__2, ___nl__im__30));
#line 937
c_rt_lib0clear(&___nl__im__30);
#line 937
c_rt_lib0clear(&___nl__im__11);
#line 938
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 938
goto label_15;
#line 938
label_52:
;
#line 939
c_rt_lib0move(&___nl__im__31,___get_global_string_const(15));
#line 939
c_rt_lib0delete(translator_priv0load_const(___nl__im__31, ___nl__im__7, ___ref___rec__1));
#line 939
c_rt_lib0clear(&___nl__im__31);
#line 940
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__3));
#line 940
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__7, ___get_global_string_const(73), ___nl__im__34));
#line 940
c_rt_lib0clear(&___nl__im__34);
#line 940
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__33));
#line 940
c_rt_lib0clear(&___nl__im__33);
#line 940
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__32));
#line 940
c_rt_lib0clear(&___nl__im__32);
#line 941
c_rt_lib0move(&___nl__im__35, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__7));
#line 941
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__35));
#line 941
c_rt_lib0clear(&___nl__im__35);
#line 942
___nl__int__36 = 0;
#line 944
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(994)));
#line 944
___nl__int__40 = 0;
#line 944
___nl__int__41 = 1;
#line 944
___nl__int__42 = c_rt_lib0array_len(___nl__im__38);
#line 944
label_71:
;
#line 944
___nl__int__44 = ___nl__int__40 >= ___nl__int__42;
#line 944
___nl__bool__43 = ___nl__int__44;
#line 944
if(___nl__bool__43){ goto label_241;}
#line 944
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_get(___nl__im__38, ___nl__int__40));
#line 944
c_rt_lib0copy(&___nl__im__39, ___nl__im__45);
#line 945
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(226)));
#line 945
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(220)));
#line 945
c_rt_lib0clear(&___nl__im__47);
#line 945
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__46, ___ref___rec__1));
#line 945
c_rt_lib0clear(&___nl__im__46);
#line 946
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get(___nl__im__2, ___nl__int__36));
#line 946
___nl__int__48 = getIntFromImm(___nl__im__49);
#line 946
c_rt_lib0clear(&___nl__im__49);
#line 946
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__48, ___ref___rec__1));
#line 946
//clear ___nl__int__48;
#line 947
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(560)));
#line 947
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(218)));
#line 947
c_rt_lib0clear(&___nl__im__51);
#line 947
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(218));
#line 947
if(___nl__bool__52){ goto label_97;}
#line 959
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(71));
#line 959
if(___nl__bool__52){ goto label_172;}
#line 959
c_rt_lib0move(&___nl__im__53,___get_global_string_const(15));
#line 959
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_mk(2, ___nl__im__53, ___nl__im__50));
#line 959
nl_die_arg(___nl__im__53);
#line 947
label_97:
;
#line 947
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(218)));
#line 947
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 948
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(266)));
#line 948
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_string_const(71));
#line 948
if(___nl__bool__57){ goto label_108;}
#line 955
___nl__bool__57 = c_rt_lib0priv_is(___nl__im__56, ___get_global_string_const(39));
#line 955
if(___nl__bool__57){ goto label_158;}
#line 955
c_rt_lib0move(&___nl__im__58,___get_global_string_const(15));
#line 955
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__56));
#line 955
nl_die_arg(___nl__im__58);
#line 948
label_108:
;
#line 949
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(491)));
#line 949
c_rt_lib0move(&___nl__im__60, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 949
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__59, ___ref___rec__1, ___nl__im__60));
#line 949
c_rt_lib0clear(&___nl__im__59);
#line 949
c_rt_lib0clear(&___nl__im__60);
#line 950
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 950
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(204)));
#line 950
c_rt_lib0clear(&___nl__im__63);
#line 950
___nl__im_ptr__66 = &((*___ref___rec__1).logic0field);
#line 950
c_rt_lib0copy(&___nl__im__65, (*___nl__im_ptr__66));
#line 950
___nl__im_ptr__66 = NULL;
#line 950
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__65, ___get_global_string_const(416)));
#line 950
c_rt_lib0clear(&___nl__im__65);
#line 950
___nl__bool__61 = tct0is_own_type(___nl__im__62, ___nl__im__64);
#line 950
c_rt_lib0clear(&___nl__im__62);
#line 950
c_rt_lib0clear(&___nl__im__64);
#line 950
___nl__bool__61 = !___nl__bool__61;
#line 951
c_rt_lib0copy(&___nl__im__67, ___nl__im__37);
#line 952
___nl__bool__68 = ___nl__bool__61;
#line 952
___nl__bool__68 = !___nl__bool__68;
#line 952
if(___nl__bool__68){ goto label_134;}
#line 952
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 952
c_rt_lib0move(&___nl__im__67, translator_priv0new_register(___ref___rec__1, ___nl__im__69));
#line 952
c_rt_lib0clear(&___nl__im__69);
#line 952
goto label_134;
#line 952
label_134:
;
#line 952
//clear ___nl__bool__68;
#line 953
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(560)));
#line 953
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(166)));
#line 953
c_rt_lib0clear(&___nl__im__73);
#line 953
___nl__int__74 = 1;
#line 953
___nl__int__74 = -___nl__int__74;
#line 953
c_rt_lib0move(&___nl__im__75, c_rt_lib0int_new(___nl__int__74));
#line 953
c_rt_lib0move(&___nl__im__71, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__67, ___get_global_string_const(73), ___nl__im__3, ___get_global_string_const(204), ___nl__im__72, ___get_global_string_const(564), ___nl__im__75));
#line 953
c_rt_lib0clear(&___nl__im__72);
#line 953
//clear ___nl__int__74;
#line 953
c_rt_lib0clear(&___nl__im__75);
#line 953
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__71));
#line 953
c_rt_lib0clear(&___nl__im__71);
#line 953
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__70));
#line 953
c_rt_lib0clear(&___nl__im__70);
#line 954
___nl__bool__76 = ___nl__bool__61;
#line 954
___nl__bool__76 = !___nl__bool__76;
#line 954
if(___nl__bool__76){ goto label_155;}
#line 954
c_rt_lib0delete(translator_priv0move(___nl__im__37, ___nl__im__67, ___ref___rec__1));
#line 954
goto label_155;
#line 954
label_155:
;
#line 954
//clear ___nl__bool__76;
#line 955
goto label_170;
#line 955
label_158:
;
#line 956
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(491)));
#line 956
c_rt_lib0move(&___nl__im__78, c_rt_lib0ov_mk_none(___get_global_string_const(420)));
#line 956
c_rt_lib0move(&___nl__im__37, translator_priv0print_var_decl(___nl__im__77, ___ref___rec__1, ___nl__im__78));
#line 956
c_rt_lib0clear(&___nl__im__77);
#line 956
c_rt_lib0clear(&___nl__im__78);
#line 957
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(560)));
#line 957
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(166)));
#line 957
c_rt_lib0clear(&___nl__im__80);
#line 957
c_rt_lib0delete(translator_priv0use_variant(___nl__im__37, ___nl__im__3, ___nl__im__79, ___ref___rec__1));
#line 957
c_rt_lib0clear(&___nl__im__79);
#line 958
goto label_170;
#line 958
label_170:
;
#line 959
goto label_184;
#line 959
label_172:
;
#line 960
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 960
___nl__int__82 = 1;
#line 960
___nl__int__82 = -___nl__int__82;
#line 960
c_rt_lib0move(&___nl__im__83, c_rt_lib0int_new(___nl__int__82));
#line 960
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 960
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__81, ___get_global_string_const(217), ___nl__im__83, ___get_global_string_const(351), ___nl__im__84));
#line 960
c_rt_lib0clear(&___nl__im__81);
#line 960
//clear ___nl__int__82;
#line 960
c_rt_lib0clear(&___nl__im__83);
#line 960
c_rt_lib0clear(&___nl__im__84);
#line 961
goto label_184;
#line 961
label_184:
;
#line 962
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(226)));
#line 962
c_rt_lib0delete(translator_priv0print_cmd(___nl__im__85, ___ref___rec__1));
#line 962
c_rt_lib0clear(&___nl__im__85);
#line 963
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(560)));
#line 963
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__87, ___get_global_string_const(218)));
#line 963
c_rt_lib0clear(&___nl__im__87);
#line 963
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_string_const(218));
#line 963
if(___nl__bool__88){ goto label_198;}
#line 968
___nl__bool__88 = c_rt_lib0priv_is(___nl__im__86, ___get_global_string_const(71));
#line 968
if(___nl__bool__88){ goto label_220;}
#line 968
c_rt_lib0move(&___nl__im__89,___get_global_string_const(15));
#line 968
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_mk(2, ___nl__im__89, ___nl__im__86));
#line 968
nl_die_arg(___nl__im__89);
#line 963
label_198:
;
#line 963
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__86, ___get_global_string_const(218)));
#line 963
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 964
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__90, ___get_global_string_const(266)));
#line 964
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_string_const(71));
#line 964
if(___nl__bool__93){ goto label_209;}
#line 965
___nl__bool__93 = c_rt_lib0priv_is(___nl__im__92, ___get_global_string_const(39));
#line 965
if(___nl__bool__93){ goto label_211;}
#line 965
c_rt_lib0move(&___nl__im__94,___get_global_string_const(15));
#line 965
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_mk(2, ___nl__im__94, ___nl__im__92));
#line 965
nl_die_arg(___nl__im__94);
#line 964
label_209:
;
#line 965
goto label_218;
#line 965
label_211:
;
#line 966
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(560)));
#line 966
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value_dec(___nl__im__96, ___get_global_string_const(166)));
#line 966
c_rt_lib0clear(&___nl__im__96);
#line 966
c_rt_lib0delete(translator_priv0release_variant(___nl__im__37, ___nl__im__3, ___nl__im__95, ___ref___rec__1));
#line 966
c_rt_lib0clear(&___nl__im__95);
#line 967
goto label_218;
#line 967
label_218:
;
#line 968
goto label_222;
#line 968
label_220:
;
#line 969
goto label_222;
#line 969
label_222:
;
#line 970
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(226)));
#line 970
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__99, ___get_global_string_const(220)));
#line 970
c_rt_lib0clear(&___nl__im__99);
#line 970
c_rt_lib0move(&___nl__im__97, translator0last_debug_char(___nl__im__98));
#line 970
c_rt_lib0clear(&___nl__im__98);
#line 970
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__im__97, ___ref___rec__1));
#line 970
c_rt_lib0clear(&___nl__im__97);
#line 971
c_rt_lib0move(&___nl__im__101, c_rt_lib0int_new(___nl__int__9));
#line 971
c_rt_lib0move(&___nl__im__100, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__101));
#line 971
c_rt_lib0clear(&___nl__im__101);
#line 971
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__100));
#line 971
c_rt_lib0clear(&___nl__im__100);
#line 972
___nl__int__102 = 1;
#line 972
___nl__int__36 = ___nl__int__36 + ___nl__int__102;
#line 972
//clear ___nl__int__102;
#line 972
c_rt_lib0clear(&___nl__im__39);
#line 973
___nl__int__40 = ___nl__int__40 + ___nl__int__41;
#line 973
goto label_71;
#line 973
label_241:
;
#line 974
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__9, ___ref___rec__1));
#line 974
c_rt_lib0clear(&___nl__im__0);
#line 974
c_rt_lib0clear(&___nl__im__2);
#line 974
c_rt_lib0clear(&___nl__im__3);
#line 974
c_rt_lib0clear(&___nl__im__5);
#line 974
c_rt_lib0clear(&___nl__im__7);
#line 974
//clear ___nl__int__9;
#line 974
c_rt_lib0clear(&___nl__im__10);
#line 974
c_rt_lib0clear(&___nl__im__11);
#line 974
//clear ___nl__int__12;
#line 974
//clear ___nl__int__13;
#line 974
//clear ___nl__int__14;
#line 974
//clear ___nl__bool__15;
#line 974
//clear ___nl__int__16;
#line 974
c_rt_lib0clear(&___nl__im__17);
#line 974
//clear ___nl__int__19;
#line 974
//clear ___nl__int__29;
#line 974
//clear ___nl__int__36;
#line 974
c_rt_lib0clear(&___nl__im__37);
#line 974
c_rt_lib0clear(&___nl__im__38);
#line 974
c_rt_lib0clear(&___nl__im__39);
#line 974
//clear ___nl__int__40;
#line 974
//clear ___nl__int__41;
#line 974
//clear ___nl__int__42;
#line 974
//clear ___nl__bool__43;
#line 974
//clear ___nl__int__44;
#line 974
c_rt_lib0clear(&___nl__im__45);
#line 974
c_rt_lib0clear(&___nl__im__50);
#line 974
//clear ___nl__bool__52;
#line 974
c_rt_lib0clear(&___nl__im__53);
#line 974
c_rt_lib0clear(&___nl__im__54);
#line 974
c_rt_lib0clear(&___nl__im__55);
#line 974
c_rt_lib0clear(&___nl__im__56);
#line 974
//clear ___nl__bool__57;
#line 974
c_rt_lib0clear(&___nl__im__58);
#line 974
//clear ___nl__bool__61;
#line 974
c_rt_lib0clear(&___nl__im__67);
#line 974
c_rt_lib0clear(&___nl__im__86);
#line 974
//clear ___nl__bool__88;
#line 974
c_rt_lib0clear(&___nl__im__89);
#line 974
c_rt_lib0clear(&___nl__im__90);
#line 974
c_rt_lib0clear(&___nl__im__91);
#line 974
c_rt_lib0clear(&___nl__im__92);
#line 974
//clear ___nl__bool__93;
#line 974
c_rt_lib0clear(&___nl__im__94);
#line 974
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
#line 978
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 978
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 978
c_rt_lib0clear(&___nl__im__4);
#line 978
___nl__bool__3 = !___nl__bool__3;
#line 978
if(___nl__bool__3){ goto label_10;}
#line 978
c_rt_lib0clear(&___nl__im__0);
#line 978
c_rt_lib0clear(&___nl__im__1);
#line 978
//clear ___nl__bool__3;
#line 978
return NULL;
#line 978
goto label_10;
#line 978
label_10:
;
#line 978
//clear ___nl__bool__3;
#line 979
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__0, ___get_global_string_const(73), ___nl__im__1));
#line 979
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(238), ___nl__im__6));
#line 979
c_rt_lib0clear(&___nl__im__6);
#line 979
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__5));
#line 979
c_rt_lib0clear(&___nl__im__5);
#line 979
c_rt_lib0clear(&___nl__im__0);
#line 979
c_rt_lib0clear(&___nl__im__1);
#line 979
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
#line 983
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(359), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(603), ___nl__im__2));
#line 983
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__5));
#line 983
c_rt_lib0clear(&___nl__im__5);
#line 983
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 983
c_rt_lib0clear(&___nl__im__4);
#line 983
c_rt_lib0clear(&___nl__im__0);
#line 983
c_rt_lib0clear(&___nl__im__1);
#line 983
c_rt_lib0clear(&___nl__im__2);
#line 983
return NULL;

}

ImmT  translator_priv0release_field(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 987
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(360), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(603), ___nl__im__2));
#line 987
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(254), ___nl__im__5));
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

ImmT  translator_priv0use_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 991
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 991
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 991
c_rt_lib0clear(&___nl__im__5);
#line 992
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(359), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(361), ___nl__im__4));
#line 992
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__7));
#line 992
c_rt_lib0clear(&___nl__im__7);
#line 992
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 992
c_rt_lib0clear(&___nl__im__6);
#line 992
c_rt_lib0clear(&___nl__im__0);
#line 992
c_rt_lib0clear(&___nl__im__1);
#line 992
c_rt_lib0clear(&___nl__im__2);
#line 992
c_rt_lib0clear(&___nl__im__4);
#line 992
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
#line 996
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 996
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 996
c_rt_lib0clear(&___nl__im__5);
#line 997
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(360), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(361), ___nl__im__4));
#line 997
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(256), ___nl__im__7));
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

ImmT  translator_priv0use_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,bool  ___nl__bool__3,translator0state_t0type* ___ref___rec__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 1002
c_rt_lib0move(&___nl__im__7, c_rt_lib0bool_to_nl_native(___nl__bool__3));
#line 1002
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(4, ___get_global_string_const(359), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(361), ___nl__im__2, ___get_global_string_const(604), ___nl__im__7));
#line 1002
c_rt_lib0clear(&___nl__im__7);
#line 1002
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__6));
#line 1002
c_rt_lib0clear(&___nl__im__6);
#line 1002
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__5));
#line 1002
c_rt_lib0clear(&___nl__im__5);
#line 1002
c_rt_lib0clear(&___nl__im__0);
#line 1002
c_rt_lib0clear(&___nl__im__1);
#line 1002
c_rt_lib0clear(&___nl__im__2);
#line 1002
//clear ___nl__bool__3;
#line 1002
return NULL;

}

ImmT  translator_priv0release_hash_index(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,nlasm0reg_t0type ___nl__im__2,translator0state_t0type* ___ref___rec__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
translator_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1006
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(360), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(361), ___nl__im__2));
#line 1006
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(258), ___nl__im__5));
#line 1006
c_rt_lib0clear(&___nl__im__5);
#line 1006
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1006
c_rt_lib0clear(&___nl__im__4);
#line 1006
c_rt_lib0clear(&___nl__im__0);
#line 1006
c_rt_lib0clear(&___nl__im__1);
#line 1006
c_rt_lib0clear(&___nl__im__2);
#line 1006
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
#line 1009
___nl__int__4 = 1;
#line 1009
___nl__int__4 = -___nl__int__4;
#line 1010
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1010
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(560));
#line 1010
c_rt_lib0clear(&___nl__im__6);
#line 1010
___nl__bool__5 = !___nl__bool__5;
#line 1010
if(___nl__bool__5){ goto label_15;}
#line 1010
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1010
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1010
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(560)));
#line 1010
c_rt_lib0clear(&___nl__im__8);
#line 1010
c_rt_lib0clear(&___nl__im__9);
#line 1010
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1010
c_rt_lib0clear(&___nl__im__7);
#line 1010
goto label_15;
#line 1010
label_15:
;
#line 1010
//clear ___nl__bool__5;
#line 1011
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1011
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_string_const(359), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(579), ___nl__im__2, ___get_global_string_const(564), ___nl__im__12));
#line 1011
c_rt_lib0clear(&___nl__im__12);
#line 1011
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__11));
#line 1011
c_rt_lib0clear(&___nl__im__11);
#line 1011
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1011
c_rt_lib0clear(&___nl__im__10);
#line 1011
c_rt_lib0clear(&___nl__im__0);
#line 1011
c_rt_lib0clear(&___nl__im__1);
#line 1011
c_rt_lib0clear(&___nl__im__2);
#line 1011
//clear ___nl__int__4;
#line 1011
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
#line 1015
___nl__int__4 = 1;
#line 1015
___nl__int__4 = -___nl__int__4;
#line 1016
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1016
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(560));
#line 1016
c_rt_lib0clear(&___nl__im__6);
#line 1016
___nl__bool__5 = !___nl__bool__5;
#line 1016
if(___nl__bool__5){ goto label_15;}
#line 1016
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1016
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1016
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(560)));
#line 1016
c_rt_lib0clear(&___nl__im__8);
#line 1016
c_rt_lib0clear(&___nl__im__9);
#line 1016
___nl__int__4 = translator_priv0get_label_number(___ref___rec__3, ___nl__im__7, ___nl__im__2);
#line 1016
c_rt_lib0clear(&___nl__im__7);
#line 1016
goto label_15;
#line 1016
label_15:
;
#line 1016
//clear ___nl__bool__5;
#line 1017
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__4));
#line 1017
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(4, ___get_global_string_const(360), ___nl__im__0, ___get_global_string_const(358), ___nl__im__1, ___get_global_string_const(579), ___nl__im__2, ___get_global_string_const(564), ___nl__im__12));
#line 1017
c_rt_lib0clear(&___nl__im__12);
#line 1017
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(260), ___nl__im__11));
#line 1017
c_rt_lib0clear(&___nl__im__11);
#line 1017
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__10));
#line 1017
c_rt_lib0clear(&___nl__im__10);
#line 1017
c_rt_lib0clear(&___nl__im__0);
#line 1017
c_rt_lib0clear(&___nl__im__1);
#line 1017
c_rt_lib0clear(&___nl__im__2);
#line 1017
//clear ___nl__int__4;
#line 1017
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
#line 1022
c_rt_lib0copy(&___nl__im__5, ___nl__im__1);
#line 1023
c_rt_lib0copy(&___nl__im__6, ___nl__im__2);
#line 1024
c_rt_lib0copy(&___nl__im__7, ___nl__im__0);
#line 1025
___nl__bool__8 = false;
#line 1026
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 1027
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 1028
c_rt_lib0move(&___nl__im__12,___get_global_string_const(110));
#line 1028
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__12);
#line 1028
c_rt_lib0clear(&___nl__im__12);
#line 1028
if(___nl__bool__11){ goto label_13;}
#line 1028
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1020));
#line 1028
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__13);
#line 1028
c_rt_lib0clear(&___nl__im__13);
#line 1028
label_13:
;
#line 1028
if(___nl__bool__11){ goto label_18;}
#line 1028
c_rt_lib0move(&___nl__im__14,___get_global_string_const(369));
#line 1028
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__14);
#line 1028
c_rt_lib0clear(&___nl__im__14);
#line 1028
label_18:
;
#line 1028
if(___nl__bool__11){ goto label_23;}
#line 1028
c_rt_lib0move(&___nl__im__15,___get_global_string_const(370));
#line 1028
___nl__bool__11 = c_rt_lib0eq(___nl__im__3, ___nl__im__15);
#line 1028
c_rt_lib0clear(&___nl__im__15);
#line 1028
label_23:
;
#line 1028
___nl__bool__11 = !___nl__bool__11;
#line 1028
if(___nl__bool__11){ goto label_45;}
#line 1029
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_none(___get_global_string_const(404)));
#line 1030
c_rt_lib0move(&___nl__im__17,___get_global_string_const(110));
#line 1030
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__17);
#line 1030
c_rt_lib0clear(&___nl__im__17);
#line 1030
if(___nl__bool__16){ goto label_34;}
#line 1030
c_rt_lib0move(&___nl__im__18,___get_global_string_const(1020));
#line 1030
___nl__bool__16 = c_rt_lib0eq(___nl__im__3, ___nl__im__18);
#line 1030
c_rt_lib0clear(&___nl__im__18);
#line 1030
label_34:
;
#line 1030
___nl__bool__16 = !___nl__bool__16;
#line 1030
if(___nl__bool__16){ goto label_39;}
#line 1031
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(404)));
#line 1032
goto label_42;
#line 1032
label_39:
;
#line 1033
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1034
goto label_42;
#line 1034
label_42:
;
#line 1034
//clear ___nl__bool__16;
#line 1035
goto label_45;
#line 1035
label_45:
;
#line 1035
//clear ___nl__bool__11;
#line 1036
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1036
___nl__bool__19 = nlasm0eq_reg_type(___nl__im__20, ___nl__im__9);
#line 1036
c_rt_lib0clear(&___nl__im__20);
#line 1036
___nl__bool__19 = !___nl__bool__19;
#line 1036
___nl__bool__19 = !___nl__bool__19;
#line 1036
if(___nl__bool__19){ goto label_56;}
#line 1037
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1038
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__1, ___ref___rec__4));
#line 1039
goto label_56;
#line 1039
label_56:
;
#line 1039
//clear ___nl__bool__19;
#line 1040
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(204)));
#line 1040
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__22, ___nl__im__9);
#line 1040
c_rt_lib0clear(&___nl__im__22);
#line 1040
___nl__bool__21 = !___nl__bool__21;
#line 1040
___nl__bool__21 = !___nl__bool__21;
#line 1040
if(___nl__bool__21){ goto label_67;}
#line 1041
c_rt_lib0move(&___nl__im__6, translator_priv0new_register(___ref___rec__4, ___nl__im__9));
#line 1042
c_rt_lib0delete(translator_priv0move(___nl__im__6, ___nl__im__2, ___ref___rec__4));
#line 1043
goto label_67;
#line 1043
label_67:
;
#line 1043
//clear ___nl__bool__21;
#line 1044
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1044
___nl__bool__23 = nlasm0eq_reg_type(___nl__im__24, ___nl__im__10);
#line 1044
c_rt_lib0clear(&___nl__im__24);
#line 1044
___nl__bool__23 = !___nl__bool__23;
#line 1044
___nl__bool__23 = !___nl__bool__23;
#line 1044
if(___nl__bool__23){ goto label_78;}
#line 1045
c_rt_lib0move(&___nl__im__7, translator_priv0new_register(___ref___rec__4, ___nl__im__10));
#line 1046
___nl__bool__8 = true;
#line 1047
goto label_78;
#line 1047
label_78:
;
#line 1047
//clear ___nl__bool__23;
#line 1048
c_rt_lib0move(&___nl__im__26,___get_global_string_const(367));
#line 1048
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__26);
#line 1048
c_rt_lib0clear(&___nl__im__26);
#line 1048
if(___nl__bool__25){ goto label_87;}
#line 1048
c_rt_lib0move(&___nl__im__27,___get_global_string_const(1016));
#line 1048
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__27);
#line 1048
c_rt_lib0clear(&___nl__im__27);
#line 1048
label_87:
;
#line 1048
___nl__bool__25 = !___nl__bool__25;
#line 1048
if(___nl__bool__25){ goto label_92;}
#line 1049
c_rt_lib0move(&___nl__im__3,___get_global_string_const(367));
#line 1050
goto label_144;
#line 1050
label_92:
;
#line 1050
c_rt_lib0move(&___nl__im__28,___get_global_string_const(365));
#line 1050
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__28);
#line 1050
c_rt_lib0clear(&___nl__im__28);
#line 1050
if(___nl__bool__25){ goto label_100;}
#line 1050
c_rt_lib0move(&___nl__im__29,___get_global_string_const(1017));
#line 1050
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__29);
#line 1050
c_rt_lib0clear(&___nl__im__29);
#line 1050
label_100:
;
#line 1050
___nl__bool__25 = !___nl__bool__25;
#line 1050
if(___nl__bool__25){ goto label_105;}
#line 1051
c_rt_lib0move(&___nl__im__3,___get_global_string_const(365));
#line 1052
goto label_144;
#line 1052
label_105:
;
#line 1052
c_rt_lib0move(&___nl__im__30,___get_global_string_const(373));
#line 1052
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__30);
#line 1052
c_rt_lib0clear(&___nl__im__30);
#line 1052
if(___nl__bool__25){ goto label_113;}
#line 1052
c_rt_lib0move(&___nl__im__31,___get_global_string_const(1018));
#line 1052
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__31);
#line 1052
c_rt_lib0clear(&___nl__im__31);
#line 1052
label_113:
;
#line 1052
___nl__bool__25 = !___nl__bool__25;
#line 1052
if(___nl__bool__25){ goto label_118;}
#line 1053
c_rt_lib0move(&___nl__im__3,___get_global_string_const(373));
#line 1054
goto label_144;
#line 1054
label_118:
;
#line 1054
c_rt_lib0move(&___nl__im__32,___get_global_string_const(105));
#line 1054
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__32);
#line 1054
c_rt_lib0clear(&___nl__im__32);
#line 1054
if(___nl__bool__25){ goto label_126;}
#line 1054
c_rt_lib0move(&___nl__im__33,___get_global_string_const(1019));
#line 1054
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__33);
#line 1054
c_rt_lib0clear(&___nl__im__33);
#line 1054
label_126:
;
#line 1054
___nl__bool__25 = !___nl__bool__25;
#line 1054
if(___nl__bool__25){ goto label_131;}
#line 1055
c_rt_lib0move(&___nl__im__3,___get_global_string_const(105));
#line 1056
goto label_144;
#line 1056
label_131:
;
#line 1056
c_rt_lib0move(&___nl__im__34,___get_global_string_const(110));
#line 1056
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__34);
#line 1056
c_rt_lib0clear(&___nl__im__34);
#line 1056
if(___nl__bool__25){ goto label_139;}
#line 1056
c_rt_lib0move(&___nl__im__35,___get_global_string_const(1020));
#line 1056
___nl__bool__25 = c_rt_lib0eq(___nl__im__3, ___nl__im__35);
#line 1056
c_rt_lib0clear(&___nl__im__35);
#line 1056
label_139:
;
#line 1056
___nl__bool__25 = !___nl__bool__25;
#line 1056
if(___nl__bool__25){ goto label_144;}
#line 1057
c_rt_lib0move(&___nl__im__3,___get_global_string_const(110));
#line 1058
goto label_144;
#line 1058
label_144:
;
#line 1058
//clear ___nl__bool__25;
#line 1059
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__7, ___get_global_string_const(274), ___nl__im__5, ___get_global_string_const(275), ___nl__im__6, ___get_global_string_const(558), ___nl__im__3));
#line 1059
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(234), ___nl__im__37));
#line 1059
c_rt_lib0clear(&___nl__im__37);
#line 1059
c_rt_lib0delete(translator_priv0print(___ref___rec__4, ___nl__im__36));
#line 1059
c_rt_lib0clear(&___nl__im__36);
#line 1060
___nl__bool__38 = ___nl__bool__8;
#line 1060
___nl__bool__38 = !___nl__bool__38;
#line 1060
if(___nl__bool__38){ goto label_156;}
#line 1061
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__7, ___ref___rec__4));
#line 1062
goto label_156;
#line 1062
label_156:
;
#line 1062
//clear ___nl__bool__38;
#line 1062
c_rt_lib0clear(&___nl__im__0);
#line 1062
c_rt_lib0clear(&___nl__im__1);
#line 1062
c_rt_lib0clear(&___nl__im__2);
#line 1062
c_rt_lib0clear(&___nl__im__3);
#line 1062
c_rt_lib0clear(&___nl__im__5);
#line 1062
c_rt_lib0clear(&___nl__im__6);
#line 1062
c_rt_lib0clear(&___nl__im__7);
#line 1062
//clear ___nl__bool__8;
#line 1062
c_rt_lib0clear(&___nl__im__9);
#line 1062
c_rt_lib0clear(&___nl__im__10);
#line 1062
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
#line 1066
___nl__im_ptr__4 = &((*___ref___rec__0).debug0field);
#line 1066
c_rt_lib0copy(&___nl__im__3, (*___nl__im_ptr__4));
#line 1066
___nl__im_ptr__4 = NULL;
#line 1066
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(71)));
#line 1066
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(226), ___nl__im__1, ___get_global_string_const(220), ___nl__im__3, ___get_global_string_const(225), ___nl__im__5));
#line 1066
c_rt_lib0clear(&___nl__im__3);
#line 1066
c_rt_lib0clear(&___nl__im__5);
#line 1067
___nl__im_ptr__6 = &((*___ref___rec__0).result0field);
#line 1067
c_rt_lib0move(&___nl__im__7,___get_global_string_const(212));
#line 1067
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___nl__im_ptr__6), ___nl__im__7));
#line 1067
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__2));
#line 1067
c_rt_lib0move(&___nl__string__8,___get_global_string_const(212));
#line 1067
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__6, ___nl__string__8, ___nl__im__7));
#line 1067
___nl__im_ptr__6 = NULL;
#line 1067
c_rt_lib0clear(&___nl__im__7);
#line 1067
c_rt_lib0clear(&___nl__string__8);
#line 1068
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(0));
#line 1068
___nl__im_ptr__10 = &((*___ref___rec__0).debug0field);
#line 1068
c_rt_lib0copy(&___nl__im__11, ___nl__im__9);
#line 1068
c_rt_lib0hash_set_value_dec(___nl__im_ptr__10, ___get_global_string_const(833), ___nl__im__11);
#line 1068
___nl__im_ptr__10 = NULL;
#line 1068
c_rt_lib0clear(&___nl__im__9);
#line 1068
c_rt_lib0clear(&___nl__im__11);
#line 1068
c_rt_lib0clear(&___nl__im__1);
#line 1068
c_rt_lib0clear(&___nl__im__2);
#line 1068
return NULL;
return NULL;

}

ImmT  translator_priv0print_if_goto(nlasm0label_t0type ___nl__int__0,nlasm0reg_t0type ___nl__im__1,translator0state_t0type* ___ref___rec__2) {
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 1072
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 1072
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__5, ___get_global_string_const(73), ___nl__im__1));
#line 1072
c_rt_lib0clear(&___nl__im__5);
#line 1072
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(249), ___nl__im__4));
#line 1072
c_rt_lib0clear(&___nl__im__4);
#line 1072
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__3));
#line 1072
c_rt_lib0clear(&___nl__im__3);
#line 1072
//clear ___nl__int__0;
#line 1072
c_rt_lib0clear(&___nl__im__1);
#line 1072
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
#line 1077
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 1077
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__2, ___nl__im__5, ___ref___rec__3));
#line 1077
c_rt_lib0clear(&___nl__im__5);
#line 1079
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1079
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(131));
#line 1079
c_rt_lib0clear(&___nl__im__8);
#line 1079
___nl__bool__7 = !___nl__bool__7;
#line 1079
if(___nl__bool__7){ goto label_10;}
#line 1080
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1081
goto label_42;
#line 1081
label_10:
;
#line 1081
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1081
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(127));
#line 1081
c_rt_lib0clear(&___nl__im__9);
#line 1081
___nl__bool__7 = !___nl__bool__7;
#line 1081
if(___nl__bool__7){ goto label_38;}
#line 1082
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1082
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1082
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(127)));
#line 1082
c_rt_lib0clear(&___nl__im__12);
#line 1082
c_rt_lib0clear(&___nl__im__13);
#line 1082
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1082
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1082
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(127)));
#line 1082
c_rt_lib0clear(&___nl__im__15);
#line 1082
c_rt_lib0clear(&___nl__im__16);
#line 1082
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(2)));
#line 1082
c_rt_lib0clear(&___nl__im__11);
#line 1082
c_rt_lib0clear(&___nl__im__14);
#line 1082
___nl__im_ptr__19 = &((*___ref___rec__3).logic0field);
#line 1082
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 1082
___nl__im_ptr__19 = NULL;
#line 1082
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(416)));
#line 1082
c_rt_lib0clear(&___nl__im__18);
#line 1082
c_rt_lib0move(&___nl__im__6, translator_priv0var_type_to_reg_type(___nl__im__10, ___nl__im__17));
#line 1082
c_rt_lib0clear(&___nl__im__10);
#line 1082
c_rt_lib0clear(&___nl__im__17);
#line 1083
goto label_42;
#line 1083
label_38:
;
#line 1084
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1084
nl_die_arg(___nl__im__20);
#line 1085
goto label_42;
#line 1085
label_42:
;
#line 1085
//clear ___nl__bool__7;
#line 1085
c_rt_lib0clear(&___nl__im__20);
#line 1086
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1086
___nl__bool__21 = nlasm0eq_reg_type(___nl__im__6, ___nl__im__22);
#line 1086
c_rt_lib0clear(&___nl__im__22);
#line 1086
___nl__bool__21 = !___nl__bool__21;
#line 1087
c_rt_lib0copy(&___nl__im__23, ___nl__im__0);
#line 1088
___nl__bool__24 = ___nl__bool__21;
#line 1088
___nl__bool__24 = !___nl__bool__24;
#line 1088
if(___nl__bool__24){ goto label_55;}
#line 1088
c_rt_lib0move(&___nl__im__23, translator_priv0new_register(___ref___rec__3, ___nl__im__6));
#line 1088
goto label_55;
#line 1088
label_55:
;
#line 1088
//clear ___nl__bool__24;
#line 1089
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__23, ___get_global_string_const(73), ___nl__im__1, ___get_global_string_const(276), ___nl__im__4));
#line 1089
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(239), ___nl__im__26));
#line 1089
c_rt_lib0clear(&___nl__im__26);
#line 1089
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__25));
#line 1089
c_rt_lib0clear(&___nl__im__25);
#line 1090
___nl__bool__27 = ___nl__bool__21;
#line 1090
___nl__bool__27 = !___nl__bool__27;
#line 1090
if(___nl__bool__27){ goto label_67;}
#line 1090
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__23, ___ref___rec__3));
#line 1090
goto label_67;
#line 1090
label_67:
;
#line 1090
//clear ___nl__bool__27;
#line 1090
c_rt_lib0clear(&___nl__im__0);
#line 1090
c_rt_lib0clear(&___nl__im__1);
#line 1090
c_rt_lib0clear(&___nl__im__2);
#line 1090
c_rt_lib0clear(&___nl__im__4);
#line 1090
c_rt_lib0clear(&___nl__im__6);
#line 1090
//clear ___nl__bool__21;
#line 1090
c_rt_lib0clear(&___nl__im__23);
#line 1090
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
#line 1095
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 1095
c_rt_lib0move(&___nl__im__4, translator_priv0get_cast(___nl__im__1, ___nl__im__5, ___ref___rec__3));
#line 1095
c_rt_lib0clear(&___nl__im__5);
#line 1096
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(73), ___nl__im__0, ___get_global_string_const(276), ___nl__im__4, ___get_global_string_const(223), ___nl__im__2));
#line 1096
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(240), ___nl__im__7));
#line 1096
c_rt_lib0clear(&___nl__im__7);
#line 1096
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__6));
#line 1096
c_rt_lib0clear(&___nl__im__6);
#line 1096
c_rt_lib0clear(&___nl__im__0);
#line 1096
c_rt_lib0clear(&___nl__im__1);
#line 1096
c_rt_lib0clear(&___nl__im__2);
#line 1096
c_rt_lib0clear(&___nl__im__4);
#line 1096
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
#line 1100
c_rt_lib0copy(&___nl__im__3, ___nl__im__1);
#line 1101
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1101
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(131));
#line 1101
c_rt_lib0clear(&___nl__im__5);
#line 1101
___nl__bool__4 = !___nl__bool__4;
#line 1101
if(___nl__bool__4){ goto label_10;}
#line 1102
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1102
c_rt_lib0move(&___nl__im__3, translator_priv0get_cast(___nl__im__1, ___nl__im__6, ___ref___rec__2));
#line 1102
c_rt_lib0clear(&___nl__im__6);
#line 1103
goto label_10;
#line 1103
label_10:
;
#line 1103
//clear ___nl__bool__4;
#line 1104
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1104
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(131));
#line 1104
c_rt_lib0clear(&___nl__im__9);
#line 1104
___nl__bool__7 = !___nl__bool__7;
#line 1104
___nl__bool__8 = !___nl__bool__7;
#line 1104
if(___nl__bool__8){ goto label_22;}
#line 1104
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1104
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(404));
#line 1104
c_rt_lib0clear(&___nl__im__10);
#line 1104
___nl__bool__7 = !___nl__bool__7;
#line 1104
label_22:
;
#line 1104
//clear ___nl__bool__8;
#line 1104
___nl__bool__7 = !___nl__bool__7;
#line 1104
if(___nl__bool__7){ goto label_44;}
#line 1105
___nl__bool__11 = false;
#line 1105
___nl__im_ptr__12 = &((*___ref___rec__2).logic0field);
#line 1105
c_rt_lib0move(&___nl__im__13,___get_global_string_const(1324));
#line 1105
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1105
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(217)));
#line 1105
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 1105
c_rt_lib0clear(&___nl__im__16);
#line 1105
c_rt_lib0move(&___nl__im__14, c_rt_lib0bool_to_nl_native(___nl__bool__11));
#line 1105
c_rt_lib0array_set(&___nl__im__13, ___nl__int__15, ___nl__im__14);
#line 1105
c_rt_lib0move(&___nl__string__17,___get_global_string_const(1324));
#line 1105
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1105
___nl__im_ptr__12 = NULL;
#line 1105
//clear ___nl__bool__11;
#line 1105
c_rt_lib0clear(&___nl__im__13);
#line 1105
c_rt_lib0clear(&___nl__im__14);
#line 1105
//clear ___nl__int__15;
#line 1105
c_rt_lib0clear(&___nl__string__17);
#line 1106
goto label_44;
#line 1106
label_44:
;
#line 1106
//clear ___nl__bool__7;
#line 1107
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__0, ___get_global_string_const(223), ___nl__im__3));
#line 1107
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(241), ___nl__im__19));
#line 1107
c_rt_lib0clear(&___nl__im__19);
#line 1107
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__18));
#line 1107
c_rt_lib0clear(&___nl__im__18);
#line 1107
c_rt_lib0clear(&___nl__im__0);
#line 1107
c_rt_lib0clear(&___nl__im__1);
#line 1107
c_rt_lib0clear(&___nl__im__3);
#line 1107
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
#line 1113
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1113
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(131));
#line 1113
c_rt_lib0clear(&___nl__im__6);
#line 1113
___nl__bool__5 = !___nl__bool__5;
#line 1113
if(___nl__bool__5){ goto label_7;}
#line 1114
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1115
goto label_61;
#line 1115
label_7:
;
#line 1115
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1115
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(128));
#line 1115
c_rt_lib0clear(&___nl__im__7);
#line 1115
___nl__bool__5 = !___nl__bool__5;
#line 1115
if(___nl__bool__5){ goto label_57;}
#line 1116
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1116
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1116
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(128)));
#line 1116
c_rt_lib0clear(&___nl__im__11);
#line 1116
c_rt_lib0clear(&___nl__im__12);
#line 1116
___nl__im_ptr__15 = &((*___ref___rec__3).logic0field);
#line 1116
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1116
___nl__im_ptr__15 = NULL;
#line 1116
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(416)));
#line 1116
c_rt_lib0clear(&___nl__im__14);
#line 1116
c_rt_lib0move(&___nl__im__9, translator_priv0unwrap_ref(___nl__im__10, ___nl__im__13));
#line 1116
c_rt_lib0clear(&___nl__im__10);
#line 1116
c_rt_lib0clear(&___nl__im__13);
#line 1116
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1116
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(204)));
#line 1116
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(128)));
#line 1116
c_rt_lib0clear(&___nl__im__18);
#line 1116
c_rt_lib0clear(&___nl__im__19);
#line 1116
___nl__im_ptr__22 = &((*___ref___rec__3).logic0field);
#line 1116
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1116
___nl__im_ptr__22 = NULL;
#line 1116
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(416)));
#line 1116
c_rt_lib0clear(&___nl__im__21);
#line 1116
c_rt_lib0move(&___nl__im__16, translator_priv0unwrap_ref(___nl__im__17, ___nl__im__20));
#line 1116
c_rt_lib0clear(&___nl__im__17);
#line 1116
c_rt_lib0clear(&___nl__im__20);
#line 1116
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(4)));
#line 1116
c_rt_lib0clear(&___nl__im__9);
#line 1116
c_rt_lib0clear(&___nl__im__16);
#line 1117
___nl__im_ptr__25 = &((*___ref___rec__3).logic0field);
#line 1117
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1117
___nl__im_ptr__25 = NULL;
#line 1117
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(416)));
#line 1117
c_rt_lib0clear(&___nl__im__24);
#line 1117
c_rt_lib0move(&___nl__im__8, translator_priv0unwrap_ref(___nl__im__8, ___nl__im__23));
#line 1117
c_rt_lib0clear(&___nl__im__23);
#line 1118
___nl__im_ptr__28 = &((*___ref___rec__3).logic0field);
#line 1118
c_rt_lib0copy(&___nl__im__27, (*___nl__im_ptr__28));
#line 1118
___nl__im_ptr__28 = NULL;
#line 1118
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(416)));
#line 1118
c_rt_lib0clear(&___nl__im__27);
#line 1118
c_rt_lib0move(&___nl__im__4, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__26));
#line 1118
c_rt_lib0clear(&___nl__im__26);
#line 1119
goto label_61;
#line 1119
label_57:
;
#line 1120
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1120
nl_die_arg(___nl__im__29);
#line 1121
goto label_61;
#line 1121
label_61:
;
#line 1121
//clear ___nl__bool__5;
#line 1121
c_rt_lib0clear(&___nl__im__8);
#line 1121
c_rt_lib0clear(&___nl__im__29);
#line 1122
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1122
___nl__bool__30 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__31);
#line 1122
c_rt_lib0clear(&___nl__im__31);
#line 1122
___nl__bool__30 = !___nl__bool__30;
#line 1123
c_rt_lib0copy(&___nl__im__32, ___nl__im__0);
#line 1124
___nl__bool__33 = ___nl__bool__30;
#line 1124
___nl__bool__33 = !___nl__bool__33;
#line 1124
if(___nl__bool__33){ goto label_75;}
#line 1124
c_rt_lib0move(&___nl__im__32, translator_priv0new_register(___ref___rec__3, ___nl__im__4));
#line 1124
goto label_75;
#line 1124
label_75:
;
#line 1124
//clear ___nl__bool__33;
#line 1125
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_mk(3, ___get_global_string_const(222), ___nl__im__32, ___get_global_string_const(73), ___nl__im__1, ___get_global_string_const(575), ___nl__im__2));
#line 1125
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(243), ___nl__im__35));
#line 1125
c_rt_lib0clear(&___nl__im__35);
#line 1125
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__34));
#line 1125
c_rt_lib0clear(&___nl__im__34);
#line 1126
___nl__bool__36 = ___nl__bool__30;
#line 1126
___nl__bool__36 = !___nl__bool__36;
#line 1126
if(___nl__bool__36){ goto label_87;}
#line 1126
c_rt_lib0delete(translator_priv0move(___nl__im__0, ___nl__im__32, ___ref___rec__3));
#line 1126
goto label_87;
#line 1126
label_87:
;
#line 1126
//clear ___nl__bool__36;
#line 1126
c_rt_lib0clear(&___nl__im__0);
#line 1126
c_rt_lib0clear(&___nl__im__1);
#line 1126
c_rt_lib0clear(&___nl__im__2);
#line 1126
c_rt_lib0clear(&___nl__im__4);
#line 1126
//clear ___nl__bool__30;
#line 1126
c_rt_lib0clear(&___nl__im__32);
#line 1126
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
#line 1130
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(73), ___nl__im__0, ___get_global_string_const(575), ___nl__im__1, ___get_global_string_const(223), ___nl__im__2));
#line 1130
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(244), ___nl__im__5));
#line 1130
c_rt_lib0clear(&___nl__im__5);
#line 1130
c_rt_lib0delete(translator_priv0print(___ref___rec__3, ___nl__im__4));
#line 1130
c_rt_lib0clear(&___nl__im__4);
#line 1130
c_rt_lib0clear(&___nl__im__0);
#line 1130
c_rt_lib0clear(&___nl__im__1);
#line 1130
c_rt_lib0clear(&___nl__im__2);
#line 1130
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
#line 1135
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1031)));
#line 1135
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__3));
#line 1137
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 1137
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 1138
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1031)));
#line 1138
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 1138
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__6, ___get_global_string_const(361), ___nl__im__7));
#line 1138
c_rt_lib0clear(&___nl__im__6);
#line 1138
c_rt_lib0clear(&___nl__im__7);
#line 1138
c_rt_lib0move(&___nl__im__4, ptd0rec(___nl__im__5));
#line 1138
c_rt_lib0clear(&___nl__im__5);
#line 1140
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 1142
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 1142
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 1143
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 1143
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__11, ___get_global_string_const(603), ___nl__im__12));
#line 1143
c_rt_lib0clear(&___nl__im__11);
#line 1143
c_rt_lib0clear(&___nl__im__12);
#line 1143
c_rt_lib0move(&___nl__im__9, ptd0rec(___nl__im__10));
#line 1143
c_rt_lib0clear(&___nl__im__10);
#line 1145
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1031)));
#line 1145
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__13));
#line 1147
c_rt_lib0move(&___nl__im__16, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 1147
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__16));
#line 1148
c_rt_lib0move(&___nl__im__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_string_const(45), ___get_global_string_const(1031)));
#line 1148
c_rt_lib0move(&___nl__im__17, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__17));
#line 1148
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__16, ___get_global_string_const(361), ___nl__im__17));
#line 1148
c_rt_lib0clear(&___nl__im__16);
#line 1148
c_rt_lib0clear(&___nl__im__17);
#line 1148
c_rt_lib0move(&___nl__im__14, ptd0rec(___nl__im__15));
#line 1148
c_rt_lib0clear(&___nl__im__15);
#line 1150
c_rt_lib0move(&___nl__im__18, ptd0string());
#line 1152
c_rt_lib0move(&___nl__im__21, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 1152
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__21));
#line 1153
c_rt_lib0move(&___nl__im__22, ptd0string());
#line 1153
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__21, ___get_global_string_const(579), ___nl__im__22));
#line 1153
c_rt_lib0clear(&___nl__im__21);
#line 1153
c_rt_lib0clear(&___nl__im__22);
#line 1153
c_rt_lib0move(&___nl__im__19, ptd0rec(___nl__im__20));
#line 1153
c_rt_lib0clear(&___nl__im__20);
#line 1153
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(8, ___get_global_string_const(361), ___nl__im__3, ___get_global_string_const(255), ___nl__im__4, ___get_global_string_const(575), ___nl__im__8, ___get_global_string_const(253), ___nl__im__9, ___get_global_string_const(1319), ___nl__im__13, ___get_global_string_const(257), ___nl__im__14, ___get_global_string_const(1029), ___nl__im__18, ___get_global_string_const(259), ___nl__im__19));
#line 1153
c_rt_lib0clear(&___nl__im__3);
#line 1153
c_rt_lib0clear(&___nl__im__4);
#line 1153
c_rt_lib0clear(&___nl__im__8);
#line 1153
c_rt_lib0clear(&___nl__im__9);
#line 1153
c_rt_lib0clear(&___nl__im__13);
#line 1153
c_rt_lib0clear(&___nl__im__14);
#line 1153
c_rt_lib0clear(&___nl__im__18);
#line 1153
c_rt_lib0clear(&___nl__im__19);
#line 1153
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 1153
c_rt_lib0clear(&___nl__im__2);
#line 1153
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 1153
c_rt_lib0clear(&___nl__im__1);
#line 1153
return ___nl__im__0;
#line 1153
c_rt_lib0clear(&___nl__im__0);
#line 1153
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
#line 1159
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(0));
#line 1160
label_1:
;
#line 1160
___nl__bool__3 = true;
#line 1160
___nl__bool__3 = !___nl__bool__3;
#line 1160
if(___nl__bool__3){ goto label_308;}
#line 1161
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(218)));
#line 1161
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(234));
#line 1161
c_rt_lib0clear(&___nl__im__5);
#line 1161
___nl__bool__4 = !___nl__bool__4;
#line 1161
if(___nl__bool__4){ goto label_283;}
#line 1162
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(218)));
#line 1162
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(218)));
#line 1162
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(234)));
#line 1162
c_rt_lib0clear(&___nl__im__7);
#line 1162
c_rt_lib0clear(&___nl__im__8);
#line 1163
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(558)));
#line 1164
c_rt_lib0move(&___nl__im__11,___get_global_string_const(1001));
#line 1164
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__11);
#line 1164
c_rt_lib0clear(&___nl__im__11);
#line 1164
if(___nl__bool__10){ goto label_23;}
#line 1164
c_rt_lib0move(&___nl__im__12,___get_global_string_const(1002));
#line 1164
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__12);
#line 1164
c_rt_lib0clear(&___nl__im__12);
#line 1164
label_23:
;
#line 1164
if(___nl__bool__10){ goto label_28;}
#line 1164
c_rt_lib0move(&___nl__im__13,___get_global_string_const(576));
#line 1164
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__13);
#line 1164
c_rt_lib0clear(&___nl__im__13);
#line 1164
label_28:
;
#line 1164
if(___nl__bool__10){ goto label_33;}
#line 1164
c_rt_lib0move(&___nl__im__14,___get_global_string_const(1003));
#line 1164
___nl__bool__10 = c_rt_lib0eq(___nl__im__9, ___nl__im__14);
#line 1164
c_rt_lib0clear(&___nl__im__14);
#line 1164
label_33:
;
#line 1164
___nl__bool__10 = !___nl__bool__10;
#line 1164
___nl__bool__10 = !___nl__bool__10;
#line 1164
if(___nl__bool__10){ goto label_40;}
#line 1164
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1164
nl_die_arg(___nl__im__15);
#line 1164
goto label_40;
#line 1164
label_40:
;
#line 1164
//clear ___nl__bool__10;
#line 1164
c_rt_lib0clear(&___nl__im__15);
#line 1165
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 1166
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(558)));
#line 1166
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1001));
#line 1166
___nl__bool__17 = c_rt_lib0eq(___nl__im__18, ___nl__im__19);
#line 1166
c_rt_lib0clear(&___nl__im__18);
#line 1166
c_rt_lib0clear(&___nl__im__19);
#line 1166
___nl__bool__17 = !___nl__bool__17;
#line 1166
if(___nl__bool__17){ goto label_85;}
#line 1167
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(274)));
#line 1167
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(204)));
#line 1167
c_rt_lib0clear(&___nl__im__22);
#line 1167
___nl__im_ptr__25 = &((*___ref___rec__1).logic0field);
#line 1167
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1167
___nl__im_ptr__25 = NULL;
#line 1167
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(416)));
#line 1167
c_rt_lib0clear(&___nl__im__24);
#line 1167
c_rt_lib0move(&___nl__im__20, translator_priv0unwrap_ref(___nl__im__21, ___nl__im__23));
#line 1167
c_rt_lib0clear(&___nl__im__21);
#line 1167
c_rt_lib0clear(&___nl__im__23);
#line 1168
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(2));
#line 1168
___nl__bool__26 = !___nl__bool__26;
#line 1168
if(___nl__bool__26){ goto label_75;}
#line 1170
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(2)));
#line 1171
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1171
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__29, ___get_global_string_const(361), ___nl__im__30));
#line 1171
c_rt_lib0clear(&___nl__im__29);
#line 1171
c_rt_lib0clear(&___nl__im__30);
#line 1171
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__28));
#line 1171
c_rt_lib0clear(&___nl__im__28);
#line 1171
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__27));
#line 1171
c_rt_lib0clear(&___nl__im__27);
#line 1173
goto label_82;
#line 1173
label_75:
;
#line 1174
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1174
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(361), ___nl__im__32));
#line 1174
c_rt_lib0clear(&___nl__im__32);
#line 1174
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__31));
#line 1174
c_rt_lib0clear(&___nl__im__31);
#line 1175
goto label_82;
#line 1175
label_82:
;
#line 1175
//clear ___nl__bool__26;
#line 1176
goto label_271;
#line 1176
label_85:
;
#line 1176
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(558)));
#line 1176
c_rt_lib0move(&___nl__im__34,___get_global_string_const(1002));
#line 1176
___nl__bool__17 = c_rt_lib0eq(___nl__im__33, ___nl__im__34);
#line 1176
c_rt_lib0clear(&___nl__im__33);
#line 1176
c_rt_lib0clear(&___nl__im__34);
#line 1176
___nl__bool__17 = !___nl__bool__17;
#line 1176
if(___nl__bool__17){ goto label_127;}
#line 1177
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(274)));
#line 1177
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__37, ___get_global_string_const(204)));
#line 1177
c_rt_lib0clear(&___nl__im__37);
#line 1177
___nl__im_ptr__40 = &((*___ref___rec__1).logic0field);
#line 1177
c_rt_lib0copy(&___nl__im__39, (*___nl__im_ptr__40));
#line 1177
___nl__im_ptr__40 = NULL;
#line 1177
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__39, ___get_global_string_const(416)));
#line 1177
c_rt_lib0clear(&___nl__im__39);
#line 1177
c_rt_lib0move(&___nl__im__35, translator_priv0unwrap_ref(___nl__im__36, ___nl__im__38));
#line 1177
c_rt_lib0clear(&___nl__im__36);
#line 1177
c_rt_lib0clear(&___nl__im__38);
#line 1178
___nl__bool__41 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(4));
#line 1178
___nl__bool__41 = !___nl__bool__41;
#line 1178
if(___nl__bool__41){ goto label_117;}
#line 1180
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(4)));
#line 1181
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1181
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__44, ___get_global_string_const(361), ___nl__im__45));
#line 1181
c_rt_lib0clear(&___nl__im__44);
#line 1181
c_rt_lib0clear(&___nl__im__45);
#line 1181
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__43));
#line 1181
c_rt_lib0clear(&___nl__im__43);
#line 1181
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__42));
#line 1181
c_rt_lib0clear(&___nl__im__42);
#line 1183
goto label_124;
#line 1183
label_117:
;
#line 1184
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1184
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(1319), ___nl__im__47));
#line 1184
c_rt_lib0clear(&___nl__im__47);
#line 1184
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__46));
#line 1184
c_rt_lib0clear(&___nl__im__46);
#line 1185
goto label_124;
#line 1185
label_124:
;
#line 1185
//clear ___nl__bool__41;
#line 1186
goto label_271;
#line 1186
label_127:
;
#line 1186
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(558)));
#line 1186
c_rt_lib0move(&___nl__im__49,___get_global_string_const(576));
#line 1186
___nl__bool__17 = c_rt_lib0eq(___nl__im__48, ___nl__im__49);
#line 1186
c_rt_lib0clear(&___nl__im__48);
#line 1186
c_rt_lib0clear(&___nl__im__49);
#line 1186
___nl__bool__17 = !___nl__bool__17;
#line 1186
if(___nl__bool__17){ goto label_201;}
#line 1187
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(274)));
#line 1187
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(204)));
#line 1187
c_rt_lib0clear(&___nl__im__52);
#line 1187
___nl__im_ptr__55 = &((*___ref___rec__1).logic0field);
#line 1187
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 1187
___nl__im_ptr__55 = NULL;
#line 1187
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(416)));
#line 1187
c_rt_lib0clear(&___nl__im__54);
#line 1187
c_rt_lib0move(&___nl__im__50, translator_priv0unwrap_ref(___nl__im__51, ___nl__im__53));
#line 1187
c_rt_lib0clear(&___nl__im__51);
#line 1187
c_rt_lib0clear(&___nl__im__53);
#line 1188
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(6));
#line 1188
___nl__bool__56 = !___nl__bool__56;
#line 1188
if(___nl__bool__56){ goto label_168;}
#line 1189
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1189
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__59, ___get_global_string_const(218)));
#line 1189
c_rt_lib0clear(&___nl__im__59);
#line 1189
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1189
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__61, ___get_global_string_const(218)));
#line 1189
c_rt_lib0clear(&___nl__im__61);
#line 1189
c_rt_lib0move(&___nl__im__57, c_rt_lib0priv_as(___nl__im__60, ___get_global_string_const(1007)));
#line 1189
c_rt_lib0clear(&___nl__im__58);
#line 1189
c_rt_lib0clear(&___nl__im__60);
#line 1191
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(6)));
#line 1191
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value(___nl__im__65, ___nl__im__57));
#line 1191
c_rt_lib0clear(&___nl__im__65);
#line 1191
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__64, ___get_global_string_const(603), ___nl__im__57));
#line 1191
c_rt_lib0clear(&___nl__im__64);
#line 1191
c_rt_lib0move(&___nl__im__62, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__63));
#line 1191
c_rt_lib0clear(&___nl__im__63);
#line 1191
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__62));
#line 1191
c_rt_lib0clear(&___nl__im__62);
#line 1194
goto label_197;
#line 1194
label_168:
;
#line 1194
___nl__bool__56 = c_rt_lib0priv_is(___nl__im__50, ___get_global_string_const(4));
#line 1194
___nl__bool__56 = !___nl__bool__56;
#line 1194
if(___nl__bool__56){ goto label_182;}
#line 1196
c_rt_lib0move(&___nl__im__68, c_rt_lib0priv_as(___nl__im__50, ___get_global_string_const(4)));
#line 1197
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1197
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__68, ___get_global_string_const(361), ___nl__im__69));
#line 1197
c_rt_lib0clear(&___nl__im__68);
#line 1197
c_rt_lib0clear(&___nl__im__69);
#line 1197
c_rt_lib0move(&___nl__im__66, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__67));
#line 1197
c_rt_lib0clear(&___nl__im__67);
#line 1197
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__66));
#line 1197
c_rt_lib0clear(&___nl__im__66);
#line 1199
goto label_197;
#line 1199
label_182:
;
#line 1200
c_rt_lib0move(&___nl__im__73, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1200
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(218)));
#line 1200
c_rt_lib0clear(&___nl__im__73);
#line 1200
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1200
c_rt_lib0move(&___nl__im__74, c_rt_lib0hash_get_value_dec(___nl__im__75, ___get_global_string_const(218)));
#line 1200
c_rt_lib0clear(&___nl__im__75);
#line 1200
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__74, ___get_global_string_const(1007)));
#line 1200
c_rt_lib0clear(&___nl__im__72);
#line 1200
c_rt_lib0clear(&___nl__im__74);
#line 1200
c_rt_lib0move(&___nl__im__70, c_rt_lib0ov_mk_arg(___get_global_string_const(575), ___nl__im__71));
#line 1200
c_rt_lib0clear(&___nl__im__71);
#line 1200
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__70));
#line 1200
c_rt_lib0clear(&___nl__im__70);
#line 1201
goto label_197;
#line 1201
label_197:
;
#line 1201
//clear ___nl__bool__56;
#line 1201
c_rt_lib0clear(&___nl__im__57);
#line 1202
goto label_271;
#line 1202
label_201:
;
#line 1202
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(558)));
#line 1202
c_rt_lib0move(&___nl__im__77,___get_global_string_const(1003));
#line 1202
___nl__bool__17 = c_rt_lib0eq(___nl__im__76, ___nl__im__77);
#line 1202
c_rt_lib0clear(&___nl__im__76);
#line 1202
c_rt_lib0clear(&___nl__im__77);
#line 1202
___nl__bool__17 = !___nl__bool__17;
#line 1202
if(___nl__bool__17){ goto label_267;}
#line 1203
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(274)));
#line 1203
c_rt_lib0move(&___nl__im__79, c_rt_lib0hash_get_value_dec(___nl__im__80, ___get_global_string_const(204)));
#line 1203
c_rt_lib0clear(&___nl__im__80);
#line 1203
___nl__im_ptr__83 = &((*___ref___rec__1).logic0field);
#line 1203
c_rt_lib0copy(&___nl__im__82, (*___nl__im_ptr__83));
#line 1203
___nl__im_ptr__83 = NULL;
#line 1203
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(416)));
#line 1203
c_rt_lib0clear(&___nl__im__82);
#line 1203
c_rt_lib0move(&___nl__im__78, translator_priv0unwrap_ref(___nl__im__79, ___nl__im__81));
#line 1203
c_rt_lib0clear(&___nl__im__79);
#line 1203
c_rt_lib0clear(&___nl__im__81);
#line 1204
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1204
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value_dec(___nl__im__86, ___get_global_string_const(218)));
#line 1204
c_rt_lib0clear(&___nl__im__86);
#line 1204
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(275)));
#line 1204
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_get_value_dec(___nl__im__88, ___get_global_string_const(218)));
#line 1204
c_rt_lib0clear(&___nl__im__88);
#line 1204
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__87, ___get_global_string_const(1007)));
#line 1204
c_rt_lib0clear(&___nl__im__85);
#line 1204
c_rt_lib0clear(&___nl__im__87);
#line 1205
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(13));
#line 1205
___nl__bool__89 = !___nl__bool__89;
#line 1205
if(___nl__bool__89){ goto label_248;}
#line 1207
c_rt_lib0move(&___nl__im__94, c_rt_lib0priv_as(___nl__im__78, ___get_global_string_const(13)));
#line 1207
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value(___nl__im__94, ___nl__im__84));
#line 1207
c_rt_lib0clear(&___nl__im__94);
#line 1207
c_rt_lib0move(&___nl__im__96, c_rt_lib0priv_as(___nl__im__78, ___get_global_string_const(13)));
#line 1207
c_rt_lib0move(&___nl__im__95, c_rt_lib0hash_get_value(___nl__im__96, ___nl__im__84));
#line 1207
c_rt_lib0clear(&___nl__im__96);
#line 1207
c_rt_lib0move(&___nl__im__92, c_rt_lib0priv_as(___nl__im__95, ___get_global_string_const(27)));
#line 1207
c_rt_lib0clear(&___nl__im__93);
#line 1207
c_rt_lib0clear(&___nl__im__95);
#line 1207
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_mk(2, ___get_global_string_const(1339), ___nl__im__92, ___get_global_string_const(579), ___nl__im__84));
#line 1207
c_rt_lib0clear(&___nl__im__92);
#line 1207
c_rt_lib0move(&___nl__im__90, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__91));
#line 1207
c_rt_lib0clear(&___nl__im__91);
#line 1207
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__90));
#line 1207
c_rt_lib0clear(&___nl__im__90);
#line 1210
goto label_263;
#line 1210
label_248:
;
#line 1210
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(12));
#line 1210
if(___nl__bool__89){ goto label_252;}
#line 1210
___nl__bool__89 = c_rt_lib0priv_is(___nl__im__78, ___get_global_string_const(0));
#line 1210
label_252:
;
#line 1210
___nl__bool__89 = !___nl__bool__89;
#line 1210
if(___nl__bool__89){ goto label_259;}
#line 1211
c_rt_lib0move(&___nl__im__97, c_rt_lib0ov_mk_arg(___get_global_string_const(1029), ___nl__im__84));
#line 1211
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(1, ___nl__im__97));
#line 1211
c_rt_lib0clear(&___nl__im__97);
#line 1212
goto label_263;
#line 1212
label_259:
;
#line 1213
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(0));
#line 1213
nl_die_arg(___nl__im__98);
#line 1214
goto label_263;
#line 1214
label_263:
;
#line 1214
//clear ___nl__bool__89;
#line 1214
c_rt_lib0clear(&___nl__im__98);
#line 1215
goto label_271;
#line 1215
label_267:
;
#line 1216
c_rt_lib0move(&___nl__im__99, c_rt_lib0array_mk(0));
#line 1216
nl_die_arg(___nl__im__99);
#line 1217
goto label_271;
#line 1217
label_271:
;
#line 1217
//clear ___nl__bool__17;
#line 1217
c_rt_lib0clear(&___nl__im__20);
#line 1217
c_rt_lib0clear(&___nl__im__35);
#line 1217
c_rt_lib0clear(&___nl__im__50);
#line 1217
c_rt_lib0clear(&___nl__im__78);
#line 1217
c_rt_lib0clear(&___nl__im__84);
#line 1217
c_rt_lib0clear(&___nl__im__99);
#line 1218
c_rt_lib0delete(array0append(&___nl__im__16, ___nl__im__2));
#line 1219
c_rt_lib0copy(&___nl__im__2, ___nl__im__16);
#line 1220
c_rt_lib0move(___ref___im__0, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(274)));
#line 1221
goto label_302;
#line 1221
label_283:
;
#line 1221
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(218)));
#line 1221
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__100, ___get_global_string_const(1004));
#line 1221
c_rt_lib0clear(&___nl__im__100);
#line 1221
___nl__bool__4 = !___nl__bool__4;
#line 1221
if(___nl__bool__4){ goto label_295;}
#line 1222
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(218)));
#line 1222
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(218)));
#line 1222
c_rt_lib0move(___ref___im__0, c_rt_lib0priv_as(___nl__im__102, ___get_global_string_const(1004)));
#line 1222
c_rt_lib0clear(&___nl__im__101);
#line 1222
c_rt_lib0clear(&___nl__im__102);
#line 1223
goto label_302;
#line 1223
label_295:
;
#line 1224
//clear ___nl__bool__4;
#line 1224
c_rt_lib0clear(&___nl__im__6);
#line 1224
c_rt_lib0clear(&___nl__im__9);
#line 1224
c_rt_lib0clear(&___nl__im__16);
#line 1224
goto label_308;
#line 1225
goto label_302;
#line 1225
label_302:
;
#line 1225
//clear ___nl__bool__4;
#line 1225
c_rt_lib0clear(&___nl__im__6);
#line 1225
c_rt_lib0clear(&___nl__im__9);
#line 1225
c_rt_lib0clear(&___nl__im__16);
#line 1226
goto label_1;
#line 1226
label_308:
;
#line 1227
//clear ___nl__bool__3;
#line 1227
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
#line 1232
c_rt_lib0move(&___nl__im__3, translator_priv0get_struct_of_lvalue(&___nl__im__0, ___ref___rec__2));
#line 1233
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1233
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1233
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__6, ___get_global_string_const(505)));
#line 1233
c_rt_lib0clear(&___nl__im__5);
#line 1233
c_rt_lib0clear(&___nl__im__6);
#line 1234
c_rt_lib0move(&___nl__im__8, translator_priv0get_var_register(___nl__im__4, ___ref___rec__2));
#line 1234
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(1, ___nl__im__8));
#line 1234
c_rt_lib0clear(&___nl__im__8);
#line 1235
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1236
___nl__int__10 = c_rt_lib0array_len(___nl__im__3);
#line 1236
___nl__int__11 = 0;
#line 1236
___nl__int__12 = 1;
#line 1236
label_13:
;
#line 1236
___nl__int__14 = ___nl__int__11 >= ___nl__int__10;
#line 1236
___nl__bool__13 = ___nl__int__14;
#line 1236
if(___nl__bool__13){ goto label_488;}
#line 1237
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__3, ___nl__int__11));
#line 1237
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(361));
#line 1237
if(___nl__bool__16){ goto label_37;}
#line 1243
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(255));
#line 1243
if(___nl__bool__16){ goto label_103;}
#line 1249
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(1319));
#line 1249
if(___nl__bool__16){ goto label_144;}
#line 1255
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(575));
#line 1255
if(___nl__bool__16){ goto label_213;}
#line 1264
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(253));
#line 1264
if(___nl__bool__16){ goto label_296;}
#line 1269
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(1029));
#line 1269
if(___nl__bool__16){ goto label_338;}
#line 1273
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(259));
#line 1273
if(___nl__bool__16){ goto label_372;}
#line 1278
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(257));
#line 1278
if(___nl__bool__16){ goto label_414;}
#line 1278
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 1278
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1278
nl_die_arg(___nl__im__17);
#line 1237
label_37:
;
#line 1237
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(361)));
#line 1237
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1238
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1238
c_rt_lib0move(&___nl__im__20, translator_priv0new_register(___ref___rec__2, ___nl__im__21));
#line 1238
c_rt_lib0clear(&___nl__im__21);
#line 1238
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__20));
#line 1238
c_rt_lib0clear(&___nl__im__20);
#line 1239
c_rt_lib0move(&___nl__im__23, translator_priv0calc_val(___nl__im__18, ___ref___rec__2));
#line 1239
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
#line 1239
c_rt_lib0move(&___nl__im__22, translator_priv0get_cast(___nl__im__23, ___nl__im__24, ___ref___rec__2));
#line 1239
c_rt_lib0clear(&___nl__im__23);
#line 1239
c_rt_lib0clear(&___nl__im__24);
#line 1240
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1240
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__27, ___get_global_string_const(361), ___nl__im__22));
#line 1240
c_rt_lib0clear(&___nl__im__27);
#line 1240
c_rt_lib0move(&___nl__im__25, c_rt_lib0ov_mk_arg(___get_global_string_const(361), ___nl__im__26));
#line 1240
c_rt_lib0clear(&___nl__im__26);
#line 1240
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__25));
#line 1240
c_rt_lib0clear(&___nl__im__25);
#line 1241
___nl__bool__28 = ___nl__bool__1;
#line 1241
___nl__bool__28 = !___nl__bool__28;
#line 1241
___nl__bool__29 = !___nl__bool__28;
#line 1241
if(___nl__bool__29){ goto label_70;}
#line 1241
___nl__int__31 = c_rt_lib0array_len(___nl__im__3);
#line 1241
___nl__int__32 = 1;
#line 1241
___nl__int__30 = ___nl__int__31 - ___nl__int__32;
#line 1241
//clear ___nl__int__31;
#line 1241
//clear ___nl__int__32;
#line 1241
___nl__int__33 = ___nl__int__11 == ___nl__int__30;
#line 1241
___nl__bool__28 = ___nl__int__33;
#line 1241
//clear ___nl__int__30;
#line 1241
//clear ___nl__int__33;
#line 1241
label_70:
;
#line 1241
//clear ___nl__bool__29;
#line 1241
___nl__bool__28 = !___nl__bool__28;
#line 1241
if(___nl__bool__28){ goto label_83;}
#line 1241
c_rt_lib0clear(&___nl__im__15);
#line 1241
//clear ___nl__bool__16;
#line 1241
c_rt_lib0clear(&___nl__im__17);
#line 1241
c_rt_lib0clear(&___nl__im__18);
#line 1241
c_rt_lib0clear(&___nl__im__19);
#line 1241
c_rt_lib0clear(&___nl__im__22);
#line 1241
//clear ___nl__bool__28;
#line 1241
goto label_488;
#line 1241
goto label_83;
#line 1241
label_83:
;
#line 1241
//clear ___nl__bool__28;
#line 1242
___nl__int__36 = 1;
#line 1242
___nl__int__35 = ___nl__int__11 + ___nl__int__36;
#line 1242
//clear ___nl__int__36;
#line 1242
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get(___nl__im__7, ___nl__int__35));
#line 1242
//clear ___nl__int__35;
#line 1242
c_rt_lib0move(&___nl__im__37,___get_global_string_const(1340));
#line 1242
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1242
c_rt_lib0move(&___nl__im__39, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__40));
#line 1242
c_rt_lib0clear(&___nl__im__40);
#line 1242
c_rt_lib0move(&___nl__im__41, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__22));
#line 1242
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_mk(2, ___nl__im__39, ___nl__im__41));
#line 1242
c_rt_lib0clear(&___nl__im__39);
#line 1242
c_rt_lib0clear(&___nl__im__41);
#line 1242
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__34, ___nl__im__37, ___nl__im__38, ___ref___rec__2));
#line 1242
c_rt_lib0clear(&___nl__im__34);
#line 1242
c_rt_lib0clear(&___nl__im__37);
#line 1242
c_rt_lib0clear(&___nl__im__38);
#line 1243
goto label_458;
#line 1243
label_103:
;
#line 1243
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(255)));
#line 1243
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 1244
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(1339)));
#line 1244
___nl__im_ptr__48 = &((*___ref___rec__2).logic0field);
#line 1244
c_rt_lib0copy(&___nl__im__47, (*___nl__im_ptr__48));
#line 1244
___nl__im_ptr__48 = NULL;
#line 1244
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(416)));
#line 1244
c_rt_lib0clear(&___nl__im__47);
#line 1244
c_rt_lib0move(&___nl__im__44, translator_priv0var_type_to_reg_type(___nl__im__45, ___nl__im__46));
#line 1244
c_rt_lib0clear(&___nl__im__45);
#line 1244
c_rt_lib0clear(&___nl__im__46);
#line 1245
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(361)));
#line 1245
c_rt_lib0move(&___nl__im__49, translator_priv0calc_val(___nl__im__50, ___ref___rec__2));
#line 1245
c_rt_lib0clear(&___nl__im__50);
#line 1246
c_rt_lib0move(&___nl__im__51, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__44));
#line 1246
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__51));
#line 1246
c_rt_lib0clear(&___nl__im__51);
#line 1247
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1247
___nl__int__57 = 1;
#line 1247
___nl__int__56 = ___nl__int__11 + ___nl__int__57;
#line 1247
//clear ___nl__int__57;
#line 1247
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get(___nl__im__7, ___nl__int__56));
#line 1247
//clear ___nl__int__56;
#line 1247
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__54, ___get_global_string_const(1332), ___nl__im__55, ___get_global_string_const(361), ___nl__im__49));
#line 1247
c_rt_lib0clear(&___nl__im__54);
#line 1247
c_rt_lib0clear(&___nl__im__55);
#line 1247
c_rt_lib0move(&___nl__im__52, c_rt_lib0ov_mk_arg(___get_global_string_const(255), ___nl__im__53));
#line 1247
c_rt_lib0clear(&___nl__im__53);
#line 1247
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__52));
#line 1247
c_rt_lib0clear(&___nl__im__52);
#line 1248
___nl__int__60 = 1;
#line 1248
___nl__int__59 = ___nl__int__11 + ___nl__int__60;
#line 1248
//clear ___nl__int__60;
#line 1248
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_get(___nl__im__7, ___nl__int__59));
#line 1248
//clear ___nl__int__59;
#line 1248
c_rt_lib0move(&___nl__im__61, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1248
c_rt_lib0delete(translator_priv0use_index(___nl__im__58, ___nl__im__61, ___nl__im__49, ___ref___rec__2));
#line 1248
c_rt_lib0clear(&___nl__im__58);
#line 1248
c_rt_lib0clear(&___nl__im__61);
#line 1249
goto label_458;
#line 1249
label_144:
;
#line 1249
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(1319)));
#line 1249
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 1250
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1250
c_rt_lib0move(&___nl__im__64, translator_priv0new_register(___ref___rec__2, ___nl__im__65));
#line 1250
c_rt_lib0clear(&___nl__im__65);
#line 1250
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__64));
#line 1250
c_rt_lib0clear(&___nl__im__64);
#line 1251
c_rt_lib0move(&___nl__im__66, translator_priv0calc_val(___nl__im__62, ___ref___rec__2));
#line 1252
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1252
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__69, ___get_global_string_const(575), ___nl__im__66));
#line 1252
c_rt_lib0clear(&___nl__im__69);
#line 1252
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_string_const(1319), ___nl__im__68));
#line 1252
c_rt_lib0clear(&___nl__im__68);
#line 1252
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__67));
#line 1252
c_rt_lib0clear(&___nl__im__67);
#line 1253
___nl__bool__70 = ___nl__bool__1;
#line 1253
___nl__bool__70 = !___nl__bool__70;
#line 1253
___nl__bool__71 = !___nl__bool__70;
#line 1253
if(___nl__bool__71){ goto label_173;}
#line 1253
___nl__int__73 = c_rt_lib0array_len(___nl__im__3);
#line 1253
___nl__int__74 = 1;
#line 1253
___nl__int__72 = ___nl__int__73 - ___nl__int__74;
#line 1253
//clear ___nl__int__73;
#line 1253
//clear ___nl__int__74;
#line 1253
___nl__int__75 = ___nl__int__11 == ___nl__int__72;
#line 1253
___nl__bool__70 = ___nl__int__75;
#line 1253
//clear ___nl__int__72;
#line 1253
//clear ___nl__int__75;
#line 1253
label_173:
;
#line 1253
//clear ___nl__bool__71;
#line 1253
___nl__bool__70 = !___nl__bool__70;
#line 1253
if(___nl__bool__70){ goto label_193;}
#line 1253
c_rt_lib0clear(&___nl__im__15);
#line 1253
//clear ___nl__bool__16;
#line 1253
c_rt_lib0clear(&___nl__im__17);
#line 1253
c_rt_lib0clear(&___nl__im__18);
#line 1253
c_rt_lib0clear(&___nl__im__19);
#line 1253
c_rt_lib0clear(&___nl__im__22);
#line 1253
c_rt_lib0clear(&___nl__im__42);
#line 1253
c_rt_lib0clear(&___nl__im__43);
#line 1253
c_rt_lib0clear(&___nl__im__44);
#line 1253
c_rt_lib0clear(&___nl__im__49);
#line 1253
c_rt_lib0clear(&___nl__im__62);
#line 1253
c_rt_lib0clear(&___nl__im__63);
#line 1253
c_rt_lib0clear(&___nl__im__66);
#line 1253
//clear ___nl__bool__70;
#line 1253
goto label_488;
#line 1253
goto label_193;
#line 1253
label_193:
;
#line 1253
//clear ___nl__bool__70;
#line 1254
___nl__int__78 = 1;
#line 1254
___nl__int__77 = ___nl__int__11 + ___nl__int__78;
#line 1254
//clear ___nl__int__78;
#line 1254
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_get(___nl__im__7, ___nl__int__77));
#line 1254
//clear ___nl__int__77;
#line 1254
c_rt_lib0move(&___nl__im__79,___get_global_string_const(1341));
#line 1254
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1254
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__82));
#line 1254
c_rt_lib0clear(&___nl__im__82);
#line 1254
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__66));
#line 1254
c_rt_lib0move(&___nl__im__80, c_rt_lib0array_mk(2, ___nl__im__81, ___nl__im__83));
#line 1254
c_rt_lib0clear(&___nl__im__81);
#line 1254
c_rt_lib0clear(&___nl__im__83);
#line 1254
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__76, ___nl__im__79, ___nl__im__80, ___ref___rec__2));
#line 1254
c_rt_lib0clear(&___nl__im__76);
#line 1254
c_rt_lib0clear(&___nl__im__79);
#line 1254
c_rt_lib0clear(&___nl__im__80);
#line 1255
goto label_458;
#line 1255
label_213:
;
#line 1255
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(575)));
#line 1255
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1256
c_rt_lib0move(&___nl__im__87, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1256
c_rt_lib0move(&___nl__im__86, translator_priv0new_register(___ref___rec__2, ___nl__im__87));
#line 1256
c_rt_lib0clear(&___nl__im__87);
#line 1256
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__86));
#line 1256
c_rt_lib0clear(&___nl__im__86);
#line 1257
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1257
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__90, ___get_global_string_const(575), ___nl__im__84));
#line 1257
c_rt_lib0clear(&___nl__im__90);
#line 1257
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_string_const(575), ___nl__im__89));
#line 1257
c_rt_lib0clear(&___nl__im__89);
#line 1257
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__88));
#line 1257
c_rt_lib0clear(&___nl__im__88);
#line 1258
___nl__bool__91 = ___nl__bool__1;
#line 1258
___nl__bool__91 = !___nl__bool__91;
#line 1258
___nl__bool__92 = !___nl__bool__91;
#line 1258
if(___nl__bool__92){ goto label_241;}
#line 1258
___nl__int__94 = c_rt_lib0array_len(___nl__im__3);
#line 1258
___nl__int__95 = 1;
#line 1258
___nl__int__93 = ___nl__int__94 - ___nl__int__95;
#line 1258
//clear ___nl__int__94;
#line 1258
//clear ___nl__int__95;
#line 1258
___nl__int__96 = ___nl__int__11 == ___nl__int__93;
#line 1258
___nl__bool__91 = ___nl__int__96;
#line 1258
//clear ___nl__int__93;
#line 1258
//clear ___nl__int__96;
#line 1258
label_241:
;
#line 1258
//clear ___nl__bool__92;
#line 1258
___nl__bool__91 = !___nl__bool__91;
#line 1258
if(___nl__bool__91){ goto label_263;}
#line 1258
c_rt_lib0clear(&___nl__im__15);
#line 1258
//clear ___nl__bool__16;
#line 1258
c_rt_lib0clear(&___nl__im__17);
#line 1258
c_rt_lib0clear(&___nl__im__18);
#line 1258
c_rt_lib0clear(&___nl__im__19);
#line 1258
c_rt_lib0clear(&___nl__im__22);
#line 1258
c_rt_lib0clear(&___nl__im__42);
#line 1258
c_rt_lib0clear(&___nl__im__43);
#line 1258
c_rt_lib0clear(&___nl__im__44);
#line 1258
c_rt_lib0clear(&___nl__im__49);
#line 1258
c_rt_lib0clear(&___nl__im__62);
#line 1258
c_rt_lib0clear(&___nl__im__63);
#line 1258
c_rt_lib0clear(&___nl__im__66);
#line 1258
c_rt_lib0clear(&___nl__im__84);
#line 1258
c_rt_lib0clear(&___nl__im__85);
#line 1258
//clear ___nl__bool__91;
#line 1258
goto label_488;
#line 1258
goto label_263;
#line 1258
label_263:
;
#line 1258
//clear ___nl__bool__91;
#line 1259
___nl__int__99 = 1;
#line 1259
___nl__int__98 = ___nl__int__11 + ___nl__int__99;
#line 1259
//clear ___nl__int__99;
#line 1259
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__7, ___nl__int__98));
#line 1259
//clear ___nl__int__98;
#line 1259
c_rt_lib0delete(translator_priv0load_const(___nl__im__84, ___nl__im__97, ___ref___rec__2));
#line 1259
c_rt_lib0clear(&___nl__im__97);
#line 1260
___nl__int__102 = 1;
#line 1260
___nl__int__101 = ___nl__int__11 + ___nl__int__102;
#line 1260
//clear ___nl__int__102;
#line 1260
c_rt_lib0move(&___nl__im__100, c_rt_lib0array_get(___nl__im__7, ___nl__int__101));
#line 1260
//clear ___nl__int__101;
#line 1260
c_rt_lib0move(&___nl__im__103,___get_global_string_const(1341));
#line 1261
c_rt_lib0move(&___nl__im__106, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1261
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__106));
#line 1261
c_rt_lib0clear(&___nl__im__106);
#line 1262
___nl__int__110 = 1;
#line 1262
___nl__int__109 = ___nl__int__11 + ___nl__int__110;
#line 1262
//clear ___nl__int__110;
#line 1262
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_get(___nl__im__7, ___nl__int__109));
#line 1262
//clear ___nl__int__109;
#line 1262
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__108));
#line 1262
c_rt_lib0clear(&___nl__im__108);
#line 1262
c_rt_lib0move(&___nl__im__104, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__107));
#line 1262
c_rt_lib0clear(&___nl__im__105);
#line 1262
c_rt_lib0clear(&___nl__im__107);
#line 1262
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__100, ___nl__im__103, ___nl__im__104, ___ref___rec__2));
#line 1262
c_rt_lib0clear(&___nl__im__100);
#line 1262
c_rt_lib0clear(&___nl__im__103);
#line 1262
c_rt_lib0clear(&___nl__im__104);
#line 1264
goto label_458;
#line 1264
label_296:
;
#line 1264
c_rt_lib0move(&___nl__im__112, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(253)));
#line 1264
c_rt_lib0copy(&___nl__im__111, ___nl__im__112);
#line 1265
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_string_const(1339)));
#line 1265
___nl__im_ptr__117 = &((*___ref___rec__2).logic0field);
#line 1265
c_rt_lib0copy(&___nl__im__116, (*___nl__im_ptr__117));
#line 1265
___nl__im_ptr__117 = NULL;
#line 1265
c_rt_lib0move(&___nl__im__115, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(416)));
#line 1265
c_rt_lib0clear(&___nl__im__116);
#line 1265
c_rt_lib0move(&___nl__im__113, translator_priv0var_type_to_reg_type(___nl__im__114, ___nl__im__115));
#line 1265
c_rt_lib0clear(&___nl__im__114);
#line 1265
c_rt_lib0clear(&___nl__im__115);
#line 1266
c_rt_lib0move(&___nl__im__118, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__113));
#line 1266
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__118));
#line 1266
c_rt_lib0clear(&___nl__im__118);
#line 1267
c_rt_lib0move(&___nl__im__121, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1267
___nl__int__124 = 1;
#line 1267
___nl__int__123 = ___nl__int__11 + ___nl__int__124;
#line 1267
//clear ___nl__int__124;
#line 1267
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_get(___nl__im__7, ___nl__int__123));
#line 1267
//clear ___nl__int__123;
#line 1267
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_string_const(603)));
#line 1267
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__121, ___get_global_string_const(1332), ___nl__im__122, ___get_global_string_const(603), ___nl__im__125));
#line 1267
c_rt_lib0clear(&___nl__im__121);
#line 1267
c_rt_lib0clear(&___nl__im__122);
#line 1267
c_rt_lib0clear(&___nl__im__125);
#line 1267
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_string_const(253), ___nl__im__120));
#line 1267
c_rt_lib0clear(&___nl__im__120);
#line 1267
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__119));
#line 1267
c_rt_lib0clear(&___nl__im__119);
#line 1268
___nl__int__128 = 1;
#line 1268
___nl__int__127 = ___nl__int__11 + ___nl__int__128;
#line 1268
//clear ___nl__int__128;
#line 1268
c_rt_lib0move(&___nl__im__126, c_rt_lib0array_get(___nl__im__7, ___nl__int__127));
#line 1268
//clear ___nl__int__127;
#line 1268
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1268
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__111, ___get_global_string_const(603)));
#line 1268
c_rt_lib0delete(translator_priv0use_field(___nl__im__126, ___nl__im__129, ___nl__im__130, ___ref___rec__2));
#line 1268
c_rt_lib0clear(&___nl__im__126);
#line 1268
c_rt_lib0clear(&___nl__im__129);
#line 1268
c_rt_lib0clear(&___nl__im__130);
#line 1269
goto label_458;
#line 1269
label_338:
;
#line 1269
c_rt_lib0move(&___nl__im__132, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(1029)));
#line 1269
c_rt_lib0copy(&___nl__im__131, ___nl__im__132);
#line 1270
c_rt_lib0move(&___nl__im__134, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1270
c_rt_lib0move(&___nl__im__133, translator_priv0new_register(___ref___rec__2, ___nl__im__134));
#line 1270
c_rt_lib0clear(&___nl__im__134);
#line 1270
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__133));
#line 1270
c_rt_lib0clear(&___nl__im__133);
#line 1271
c_rt_lib0move(&___nl__im__137, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1271
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_mk(2, ___get_global_string_const(218), ___nl__im__137, ___get_global_string_const(579), ___nl__im__131));
#line 1271
c_rt_lib0clear(&___nl__im__137);
#line 1271
c_rt_lib0move(&___nl__im__135, c_rt_lib0ov_mk_arg(___get_global_string_const(1029), ___nl__im__136));
#line 1271
c_rt_lib0clear(&___nl__im__136);
#line 1271
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__135));
#line 1271
c_rt_lib0clear(&___nl__im__135);
#line 1272
___nl__int__142 = 1;
#line 1272
___nl__int__141 = ___nl__int__11 + ___nl__int__142;
#line 1272
//clear ___nl__int__142;
#line 1272
c_rt_lib0move(&___nl__im__140, c_rt_lib0array_get(___nl__im__7, ___nl__int__141));
#line 1272
//clear ___nl__int__141;
#line 1272
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1272
___nl__int__144 = 1;
#line 1272
___nl__int__144 = -___nl__int__144;
#line 1272
c_rt_lib0move(&___nl__im__145, c_rt_lib0int_new(___nl__int__144));
#line 1272
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_mk(4, ___get_global_string_const(222), ___nl__im__140, ___get_global_string_const(73), ___nl__im__143, ___get_global_string_const(204), ___nl__im__131, ___get_global_string_const(564), ___nl__im__145));
#line 1272
c_rt_lib0clear(&___nl__im__140);
#line 1272
c_rt_lib0clear(&___nl__im__143);
#line 1272
//clear ___nl__int__144;
#line 1272
c_rt_lib0clear(&___nl__im__145);
#line 1272
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_string_const(236), ___nl__im__139));
#line 1272
c_rt_lib0clear(&___nl__im__139);
#line 1272
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__138));
#line 1272
c_rt_lib0clear(&___nl__im__138);
#line 1273
goto label_458;
#line 1273
label_372:
;
#line 1273
c_rt_lib0move(&___nl__im__147, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(259)));
#line 1273
c_rt_lib0copy(&___nl__im__146, ___nl__im__147);
#line 1274
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(1339)));
#line 1274
___nl__im_ptr__152 = &((*___ref___rec__2).logic0field);
#line 1274
c_rt_lib0copy(&___nl__im__151, (*___nl__im_ptr__152));
#line 1274
___nl__im_ptr__152 = NULL;
#line 1274
c_rt_lib0move(&___nl__im__150, c_rt_lib0hash_get_value_dec(___nl__im__151, ___get_global_string_const(416)));
#line 1274
c_rt_lib0clear(&___nl__im__151);
#line 1274
c_rt_lib0move(&___nl__im__148, translator_priv0var_type_to_reg_type(___nl__im__149, ___nl__im__150));
#line 1274
c_rt_lib0clear(&___nl__im__149);
#line 1274
c_rt_lib0clear(&___nl__im__150);
#line 1275
c_rt_lib0move(&___nl__im__153, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__148));
#line 1275
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__153));
#line 1275
c_rt_lib0clear(&___nl__im__153);
#line 1276
c_rt_lib0move(&___nl__im__156, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1276
___nl__int__159 = 1;
#line 1276
___nl__int__158 = ___nl__int__11 + ___nl__int__159;
#line 1276
//clear ___nl__int__159;
#line 1276
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_get(___nl__im__7, ___nl__int__158));
#line 1276
//clear ___nl__int__158;
#line 1276
c_rt_lib0move(&___nl__im__160, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(579)));
#line 1276
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__156, ___get_global_string_const(1332), ___nl__im__157, ___get_global_string_const(579), ___nl__im__160));
#line 1276
c_rt_lib0clear(&___nl__im__156);
#line 1276
c_rt_lib0clear(&___nl__im__157);
#line 1276
c_rt_lib0clear(&___nl__im__160);
#line 1276
c_rt_lib0move(&___nl__im__154, c_rt_lib0ov_mk_arg(___get_global_string_const(259), ___nl__im__155));
#line 1276
c_rt_lib0clear(&___nl__im__155);
#line 1276
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__154));
#line 1276
c_rt_lib0clear(&___nl__im__154);
#line 1277
___nl__int__163 = 1;
#line 1277
___nl__int__162 = ___nl__int__11 + ___nl__int__163;
#line 1277
//clear ___nl__int__163;
#line 1277
c_rt_lib0move(&___nl__im__161, c_rt_lib0array_get(___nl__im__7, ___nl__int__162));
#line 1277
//clear ___nl__int__162;
#line 1277
c_rt_lib0move(&___nl__im__164, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1277
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__146, ___get_global_string_const(579)));
#line 1277
c_rt_lib0delete(translator_priv0use_variant(___nl__im__161, ___nl__im__164, ___nl__im__165, ___ref___rec__2));
#line 1277
c_rt_lib0clear(&___nl__im__161);
#line 1277
c_rt_lib0clear(&___nl__im__164);
#line 1277
c_rt_lib0clear(&___nl__im__165);
#line 1278
goto label_458;
#line 1278
label_414:
;
#line 1278
c_rt_lib0move(&___nl__im__167, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(257)));
#line 1278
c_rt_lib0copy(&___nl__im__166, ___nl__im__167);
#line 1279
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_string_const(1339)));
#line 1279
___nl__im_ptr__172 = &((*___ref___rec__2).logic0field);
#line 1279
c_rt_lib0copy(&___nl__im__171, (*___nl__im_ptr__172));
#line 1279
___nl__im_ptr__172 = NULL;
#line 1279
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__171, ___get_global_string_const(416)));
#line 1279
c_rt_lib0clear(&___nl__im__171);
#line 1279
c_rt_lib0move(&___nl__im__168, translator_priv0var_type_to_reg_type(___nl__im__169, ___nl__im__170));
#line 1279
c_rt_lib0clear(&___nl__im__169);
#line 1279
c_rt_lib0clear(&___nl__im__170);
#line 1280
c_rt_lib0move(&___nl__im__174, c_rt_lib0hash_get_value_dec(___nl__im__166, ___get_global_string_const(361)));
#line 1280
c_rt_lib0move(&___nl__im__173, translator_priv0calc_val(___nl__im__174, ___ref___rec__2));
#line 1280
c_rt_lib0clear(&___nl__im__174);
#line 1281
c_rt_lib0move(&___nl__im__175, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__168));
#line 1281
c_rt_lib0delete(array0push(&___nl__im__7, ___nl__im__175));
#line 1281
c_rt_lib0clear(&___nl__im__175);
#line 1282
c_rt_lib0move(&___nl__im__178, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1282
___nl__int__181 = 1;
#line 1282
___nl__int__180 = ___nl__int__11 + ___nl__int__181;
#line 1282
//clear ___nl__int__181;
#line 1282
c_rt_lib0move(&___nl__im__179, c_rt_lib0array_get(___nl__im__7, ___nl__int__180));
#line 1282
//clear ___nl__int__180;
#line 1282
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_mk(3, ___get_global_string_const(1331), ___nl__im__178, ___get_global_string_const(1332), ___nl__im__179, ___get_global_string_const(361), ___nl__im__173));
#line 1282
c_rt_lib0clear(&___nl__im__178);
#line 1282
c_rt_lib0clear(&___nl__im__179);
#line 1282
c_rt_lib0move(&___nl__im__176, c_rt_lib0ov_mk_arg(___get_global_string_const(257), ___nl__im__177));
#line 1282
c_rt_lib0clear(&___nl__im__177);
#line 1282
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__176));
#line 1282
c_rt_lib0clear(&___nl__im__176);
#line 1283
___nl__int__184 = 1;
#line 1283
___nl__int__183 = ___nl__int__11 + ___nl__int__184;
#line 1283
//clear ___nl__int__184;
#line 1283
c_rt_lib0move(&___nl__im__182, c_rt_lib0array_get(___nl__im__7, ___nl__int__183));
#line 1283
//clear ___nl__int__183;
#line 1283
c_rt_lib0move(&___nl__im__185, c_rt_lib0array_get(___nl__im__7, ___nl__int__11));
#line 1283
___nl__bool__186 = ___nl__bool__1;
#line 1283
___nl__bool__186 = !___nl__bool__186;
#line 1283
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__182, ___nl__im__185, ___nl__im__173, ___nl__bool__186, ___ref___rec__2));
#line 1283
c_rt_lib0clear(&___nl__im__182);
#line 1283
c_rt_lib0clear(&___nl__im__185);
#line 1283
//clear ___nl__bool__186;
#line 1284
goto label_458;
#line 1284
label_458:
;
#line 1284
c_rt_lib0clear(&___nl__im__15);
#line 1284
//clear ___nl__bool__16;
#line 1284
c_rt_lib0clear(&___nl__im__17);
#line 1284
c_rt_lib0clear(&___nl__im__18);
#line 1284
c_rt_lib0clear(&___nl__im__19);
#line 1284
c_rt_lib0clear(&___nl__im__22);
#line 1284
c_rt_lib0clear(&___nl__im__42);
#line 1284
c_rt_lib0clear(&___nl__im__43);
#line 1284
c_rt_lib0clear(&___nl__im__44);
#line 1284
c_rt_lib0clear(&___nl__im__49);
#line 1284
c_rt_lib0clear(&___nl__im__62);
#line 1284
c_rt_lib0clear(&___nl__im__63);
#line 1284
c_rt_lib0clear(&___nl__im__66);
#line 1284
c_rt_lib0clear(&___nl__im__84);
#line 1284
c_rt_lib0clear(&___nl__im__85);
#line 1284
c_rt_lib0clear(&___nl__im__111);
#line 1284
c_rt_lib0clear(&___nl__im__112);
#line 1284
c_rt_lib0clear(&___nl__im__113);
#line 1284
c_rt_lib0clear(&___nl__im__131);
#line 1284
c_rt_lib0clear(&___nl__im__132);
#line 1284
c_rt_lib0clear(&___nl__im__146);
#line 1284
c_rt_lib0clear(&___nl__im__147);
#line 1284
c_rt_lib0clear(&___nl__im__148);
#line 1284
c_rt_lib0clear(&___nl__im__166);
#line 1284
c_rt_lib0clear(&___nl__im__167);
#line 1284
c_rt_lib0clear(&___nl__im__168);
#line 1284
c_rt_lib0clear(&___nl__im__173);
#line 1285
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1285
goto label_13;
#line 1285
label_488:
;
#line 1286
___nl__int__190 = c_rt_lib0array_len(___nl__im__7);
#line 1286
___nl__int__191 = 1;
#line 1286
___nl__int__189 = ___nl__int__190 - ___nl__int__191;
#line 1286
//clear ___nl__int__190;
#line 1286
//clear ___nl__int__191;
#line 1286
c_rt_lib0move(&___nl__im__188, c_rt_lib0array_get(___nl__im__7, ___nl__int__189));
#line 1286
//clear ___nl__int__189;
#line 1286
c_rt_lib0move(&___nl__im__187, c_rt_lib0ov_mk_arg(___get_global_string_const(218), ___nl__im__188));
#line 1286
c_rt_lib0clear(&___nl__im__188);
#line 1286
c_rt_lib0delete(array0push(&___nl__im__9, ___nl__im__187));
#line 1286
c_rt_lib0clear(&___nl__im__187);
#line 1287
c_rt_lib0clear(&___nl__im__0);
#line 1287
//clear ___nl__bool__1;
#line 1287
c_rt_lib0clear(&___nl__im__3);
#line 1287
c_rt_lib0clear(&___nl__im__4);
#line 1287
c_rt_lib0clear(&___nl__im__7);
#line 1287
//clear ___nl__int__10;
#line 1287
//clear ___nl__int__11;
#line 1287
//clear ___nl__int__12;
#line 1287
//clear ___nl__bool__13;
#line 1287
//clear ___nl__int__14;
#line 1287
c_rt_lib0clear(&___nl__im__15);
#line 1287
//clear ___nl__bool__16;
#line 1287
c_rt_lib0clear(&___nl__im__17);
#line 1287
c_rt_lib0clear(&___nl__im__18);
#line 1287
c_rt_lib0clear(&___nl__im__19);
#line 1287
c_rt_lib0clear(&___nl__im__22);
#line 1287
c_rt_lib0clear(&___nl__im__42);
#line 1287
c_rt_lib0clear(&___nl__im__43);
#line 1287
c_rt_lib0clear(&___nl__im__44);
#line 1287
c_rt_lib0clear(&___nl__im__49);
#line 1287
c_rt_lib0clear(&___nl__im__62);
#line 1287
c_rt_lib0clear(&___nl__im__63);
#line 1287
c_rt_lib0clear(&___nl__im__66);
#line 1287
c_rt_lib0clear(&___nl__im__84);
#line 1287
c_rt_lib0clear(&___nl__im__85);
#line 1287
c_rt_lib0clear(&___nl__im__111);
#line 1287
c_rt_lib0clear(&___nl__im__112);
#line 1287
c_rt_lib0clear(&___nl__im__113);
#line 1287
c_rt_lib0clear(&___nl__im__131);
#line 1287
c_rt_lib0clear(&___nl__im__132);
#line 1287
c_rt_lib0clear(&___nl__im__146);
#line 1287
c_rt_lib0clear(&___nl__im__147);
#line 1287
c_rt_lib0clear(&___nl__im__148);
#line 1287
c_rt_lib0clear(&___nl__im__166);
#line 1287
c_rt_lib0clear(&___nl__im__167);
#line 1287
c_rt_lib0clear(&___nl__im__168);
#line 1287
c_rt_lib0clear(&___nl__im__173);
#line 1287
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
#line 1292
___nl__int__3 = c_rt_lib0array_len(___nl__im__0);
#line 1293
___nl__int__7 = 1;
#line 1293
___nl__int__6 = ___nl__int__3 - ___nl__int__7;
#line 1293
//clear ___nl__int__7;
#line 1293
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 1293
//clear ___nl__int__6;
#line 1293
___nl__int__10 = 1;
#line 1293
___nl__int__9 = ___nl__int__3 - ___nl__int__10;
#line 1293
//clear ___nl__int__10;
#line 1293
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 1293
//clear ___nl__int__9;
#line 1293
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(218)));
#line 1293
c_rt_lib0clear(&___nl__im__5);
#line 1293
c_rt_lib0clear(&___nl__im__8);
#line 1294
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1294
___nl__int__13 = 1;
#line 1294
___nl__int__13 = -___nl__int__13;
#line 1294
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__13));
#line 1294
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 1294
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__12, ___get_global_string_const(217), ___nl__im__14, ___get_global_string_const(351), ___nl__im__15));
#line 1294
c_rt_lib0clear(&___nl__im__12);
#line 1294
//clear ___nl__int__13;
#line 1294
c_rt_lib0clear(&___nl__im__14);
#line 1294
c_rt_lib0clear(&___nl__im__15);
#line 1295
___nl__int__17 = 2;
#line 1295
___nl__int__16 = ___nl__int__3 - ___nl__int__17;
#line 1295
//clear ___nl__int__17;
#line 1295
label_27:
;
#line 1295
___nl__int__19 = 0;
#line 1295
___nl__int__20 = ___nl__int__16 >= ___nl__int__19;
#line 1295
___nl__bool__18 = ___nl__int__20;
#line 1295
//clear ___nl__int__19;
#line 1295
//clear ___nl__int__20;
#line 1295
___nl__bool__18 = !___nl__bool__18;
#line 1295
if(___nl__bool__18){ goto label_358;}
#line 1296
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__0, ___nl__int__16));
#line 1296
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(218));
#line 1296
if(___nl__bool__22){ goto label_57;}
#line 1298
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(361));
#line 1298
if(___nl__bool__22){ goto label_63;}
#line 1305
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(255));
#line 1305
if(___nl__bool__22){ goto label_119;}
#line 1307
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(1319));
#line 1307
if(___nl__bool__22){ goto label_130;}
#line 1314
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(575));
#line 1314
if(___nl__bool__22){ goto label_207;}
#line 1323
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(253));
#line 1323
if(___nl__bool__22){ goto label_275;}
#line 1325
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(1029));
#line 1325
if(___nl__bool__22){ goto label_286;}
#line 1328
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(259));
#line 1328
if(___nl__bool__22){ goto label_309;}
#line 1330
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(257));
#line 1330
if(___nl__bool__22){ goto label_320;}
#line 1330
c_rt_lib0move(&___nl__im__23,___get_global_string_const(15));
#line 1330
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__21));
#line 1330
nl_die_arg(___nl__im__23);
#line 1296
label_57:
;
#line 1296
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(218)));
#line 1296
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1297
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 1297
nl_die_arg(___nl__im__26);
#line 1298
goto label_331;
#line 1298
label_63:
;
#line 1298
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(361)));
#line 1298
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 1299
___nl__bool__29 = ___nl__bool__1;
#line 1299
___nl__bool__29 = !___nl__bool__29;
#line 1299
___nl__bool__30 = !___nl__bool__29;
#line 1299
if(___nl__bool__30){ goto label_77;}
#line 1299
___nl__int__32 = 2;
#line 1299
___nl__int__31 = ___nl__int__3 - ___nl__int__32;
#line 1299
//clear ___nl__int__32;
#line 1299
___nl__int__33 = ___nl__int__16 == ___nl__int__31;
#line 1299
___nl__bool__29 = ___nl__int__33;
#line 1299
//clear ___nl__int__31;
#line 1299
//clear ___nl__int__33;
#line 1299
label_77:
;
#line 1299
//clear ___nl__bool__30;
#line 1299
___nl__bool__29 = !___nl__bool__29;
#line 1299
if(___nl__bool__29){ goto label_87;}
#line 1300
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(218)));
#line 1300
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(361)));
#line 1300
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__im__34, ___nl__im__35, ___nl__im__4, ___ref___rec__2));
#line 1300
c_rt_lib0clear(&___nl__im__34);
#line 1300
c_rt_lib0clear(&___nl__im__35);
#line 1301
goto label_115;
#line 1301
label_87:
;
#line 1302
c_rt_lib0move(&___nl__im__37, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1302
___nl__int__38 = 1;
#line 1302
___nl__int__38 = -___nl__int__38;
#line 1302
c_rt_lib0move(&___nl__im__39, c_rt_lib0int_new(___nl__int__38));
#line 1302
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 1302
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__37, ___get_global_string_const(217), ___nl__im__39, ___get_global_string_const(351), ___nl__im__40));
#line 1302
c_rt_lib0clear(&___nl__im__37);
#line 1302
//clear ___nl__int__38;
#line 1302
c_rt_lib0clear(&___nl__im__39);
#line 1302
c_rt_lib0clear(&___nl__im__40);
#line 1302
c_rt_lib0move(&___nl__im__41,___get_global_string_const(767));
#line 1302
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(218)));
#line 1302
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__44));
#line 1302
c_rt_lib0clear(&___nl__im__44);
#line 1302
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(361)));
#line 1302
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__46));
#line 1302
c_rt_lib0clear(&___nl__im__46);
#line 1302
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__4));
#line 1302
c_rt_lib0move(&___nl__im__42, c_rt_lib0array_mk(3, ___nl__im__43, ___nl__im__45, ___nl__im__47));
#line 1302
c_rt_lib0clear(&___nl__im__43);
#line 1302
c_rt_lib0clear(&___nl__im__45);
#line 1302
c_rt_lib0clear(&___nl__im__47);
#line 1302
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__36, ___nl__im__41, ___nl__im__42, ___ref___rec__2));
#line 1302
c_rt_lib0clear(&___nl__im__36);
#line 1302
c_rt_lib0clear(&___nl__im__41);
#line 1302
c_rt_lib0clear(&___nl__im__42);
#line 1303
goto label_115;
#line 1303
label_115:
;
#line 1303
//clear ___nl__bool__29;
#line 1304
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(218)));
#line 1305
goto label_331;
#line 1305
label_119:
;
#line 1305
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(255)));
#line 1305
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 1306
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(1332)));
#line 1306
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(1331)));
#line 1306
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(361)));
#line 1306
c_rt_lib0delete(translator_priv0release_index(___nl__im__50, ___nl__im__51, ___nl__im__52, ___ref___rec__2));
#line 1306
c_rt_lib0clear(&___nl__im__50);
#line 1306
c_rt_lib0clear(&___nl__im__51);
#line 1306
c_rt_lib0clear(&___nl__im__52);
#line 1307
goto label_331;
#line 1307
label_130:
;
#line 1307
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(1319)));
#line 1307
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 1308
___nl__bool__55 = ___nl__bool__1;
#line 1308
___nl__bool__55 = !___nl__bool__55;
#line 1308
___nl__bool__56 = !___nl__bool__55;
#line 1308
if(___nl__bool__56){ goto label_144;}
#line 1308
___nl__int__58 = 2;
#line 1308
___nl__int__57 = ___nl__int__3 - ___nl__int__58;
#line 1308
//clear ___nl__int__58;
#line 1308
___nl__int__59 = ___nl__int__16 == ___nl__int__57;
#line 1308
___nl__bool__55 = ___nl__int__59;
#line 1308
//clear ___nl__int__57;
#line 1308
//clear ___nl__int__59;
#line 1308
label_144:
;
#line 1308
//clear ___nl__bool__56;
#line 1308
___nl__bool__55 = !___nl__bool__55;
#line 1308
if(___nl__bool__55){ goto label_175;}
#line 1309
c_rt_lib0move(&___nl__im__61, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1309
___nl__int__62 = 1;
#line 1309
___nl__int__62 = -___nl__int__62;
#line 1309
c_rt_lib0move(&___nl__im__63, c_rt_lib0int_new(___nl__int__62));
#line 1309
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 1309
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__61, ___get_global_string_const(217), ___nl__im__63, ___get_global_string_const(351), ___nl__im__64));
#line 1309
c_rt_lib0clear(&___nl__im__61);
#line 1309
//clear ___nl__int__62;
#line 1309
c_rt_lib0clear(&___nl__im__63);
#line 1309
c_rt_lib0clear(&___nl__im__64);
#line 1309
c_rt_lib0move(&___nl__im__65,___get_global_string_const(769));
#line 1309
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(218)));
#line 1309
c_rt_lib0move(&___nl__im__67, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__68));
#line 1309
c_rt_lib0clear(&___nl__im__68);
#line 1309
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(575)));
#line 1309
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__70));
#line 1309
c_rt_lib0clear(&___nl__im__70);
#line 1309
c_rt_lib0move(&___nl__im__71, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__4));
#line 1309
c_rt_lib0move(&___nl__im__66, c_rt_lib0array_mk(3, ___nl__im__67, ___nl__im__69, ___nl__im__71));
#line 1309
c_rt_lib0clear(&___nl__im__67);
#line 1309
c_rt_lib0clear(&___nl__im__69);
#line 1309
c_rt_lib0clear(&___nl__im__71);
#line 1309
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__60, ___nl__im__65, ___nl__im__66, ___ref___rec__2));
#line 1309
c_rt_lib0clear(&___nl__im__60);
#line 1309
c_rt_lib0clear(&___nl__im__65);
#line 1309
c_rt_lib0clear(&___nl__im__66);
#line 1310
goto label_203;
#line 1310
label_175:
;
#line 1311
c_rt_lib0move(&___nl__im__73, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1311
___nl__int__74 = 1;
#line 1311
___nl__int__74 = -___nl__int__74;
#line 1311
c_rt_lib0move(&___nl__im__75, c_rt_lib0int_new(___nl__int__74));
#line 1311
c_rt_lib0move(&___nl__im__76, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 1311
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__73, ___get_global_string_const(217), ___nl__im__75, ___get_global_string_const(351), ___nl__im__76));
#line 1311
c_rt_lib0clear(&___nl__im__73);
#line 1311
//clear ___nl__int__74;
#line 1311
c_rt_lib0clear(&___nl__im__75);
#line 1311
c_rt_lib0clear(&___nl__im__76);
#line 1311
c_rt_lib0move(&___nl__im__77,___get_global_string_const(1342));
#line 1311
c_rt_lib0move(&___nl__im__80, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(218)));
#line 1311
c_rt_lib0move(&___nl__im__79, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__80));
#line 1311
c_rt_lib0clear(&___nl__im__80);
#line 1311
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(575)));
#line 1311
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__82));
#line 1311
c_rt_lib0clear(&___nl__im__82);
#line 1311
c_rt_lib0move(&___nl__im__83, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__4));
#line 1311
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(3, ___nl__im__79, ___nl__im__81, ___nl__im__83));
#line 1311
c_rt_lib0clear(&___nl__im__79);
#line 1311
c_rt_lib0clear(&___nl__im__81);
#line 1311
c_rt_lib0clear(&___nl__im__83);
#line 1311
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__72, ___nl__im__77, ___nl__im__78, ___ref___rec__2));
#line 1311
c_rt_lib0clear(&___nl__im__72);
#line 1311
c_rt_lib0clear(&___nl__im__77);
#line 1311
c_rt_lib0clear(&___nl__im__78);
#line 1312
goto label_203;
#line 1312
label_203:
;
#line 1312
//clear ___nl__bool__55;
#line 1313
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__53, ___get_global_string_const(218)));
#line 1314
goto label_331;
#line 1314
label_207:
;
#line 1314
c_rt_lib0move(&___nl__im__85, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(575)));
#line 1314
c_rt_lib0copy(&___nl__im__84, ___nl__im__85);
#line 1315
___nl__bool__86 = ___nl__bool__1;
#line 1315
___nl__bool__86 = !___nl__bool__86;
#line 1315
___nl__bool__87 = !___nl__bool__86;
#line 1315
if(___nl__bool__87){ goto label_221;}
#line 1315
___nl__int__89 = 2;
#line 1315
___nl__int__88 = ___nl__int__3 - ___nl__int__89;
#line 1315
//clear ___nl__int__89;
#line 1315
___nl__int__90 = ___nl__int__16 == ___nl__int__88;
#line 1315
___nl__bool__86 = ___nl__int__90;
#line 1315
//clear ___nl__int__88;
#line 1315
//clear ___nl__int__90;
#line 1315
label_221:
;
#line 1315
//clear ___nl__bool__87;
#line 1315
___nl__bool__86 = !___nl__bool__86;
#line 1315
if(___nl__bool__86){ goto label_231;}
#line 1316
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(218)));
#line 1316
c_rt_lib0move(&___nl__im__92, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(575)));
#line 1316
c_rt_lib0delete(translator_priv0print_set_value(___nl__im__91, ___nl__im__92, ___nl__im__4, ___ref___rec__2));
#line 1316
c_rt_lib0clear(&___nl__im__91);
#line 1316
c_rt_lib0clear(&___nl__im__92);
#line 1317
goto label_271;
#line 1317
label_231:
;
#line 1318
c_rt_lib0move(&___nl__im__94, nlasm0is_empty(___nl__im__11));
#line 1318
___nl__bool__93 = c_rt_lib0check_true_native(___nl__im__94);
#line 1318
c_rt_lib0clear(&___nl__im__94);
#line 1318
___nl__bool__93 = !___nl__bool__93;
#line 1318
if(___nl__bool__93){ goto label_241;}
#line 1318
c_rt_lib0move(&___nl__im__95, c_rt_lib0ov_mk_none(___get_global_string_const(404)));
#line 1318
c_rt_lib0move(&___nl__im__11, translator_priv0new_register(___ref___rec__2, ___nl__im__95));
#line 1318
c_rt_lib0clear(&___nl__im__95);
#line 1318
goto label_241;
#line 1318
label_241:
;
#line 1318
//clear ___nl__bool__93;
#line 1319
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(575)));
#line 1319
c_rt_lib0delete(translator_priv0load_const(___nl__im__96, ___nl__im__11, ___ref___rec__2));
#line 1319
c_rt_lib0clear(&___nl__im__96);
#line 1320
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1320
___nl__int__99 = 1;
#line 1320
___nl__int__99 = -___nl__int__99;
#line 1320
c_rt_lib0move(&___nl__im__100, c_rt_lib0int_new(___nl__int__99));
#line 1320
c_rt_lib0move(&___nl__im__101, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 1320
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__98, ___get_global_string_const(217), ___nl__im__100, ___get_global_string_const(351), ___nl__im__101));
#line 1320
c_rt_lib0clear(&___nl__im__98);
#line 1320
//clear ___nl__int__99;
#line 1320
c_rt_lib0clear(&___nl__im__100);
#line 1320
c_rt_lib0clear(&___nl__im__101);
#line 1320
c_rt_lib0move(&___nl__im__102,___get_global_string_const(1342));
#line 1320
c_rt_lib0move(&___nl__im__105, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(218)));
#line 1320
c_rt_lib0move(&___nl__im__104, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__105));
#line 1320
c_rt_lib0clear(&___nl__im__105);
#line 1320
c_rt_lib0move(&___nl__im__106, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__11));
#line 1320
c_rt_lib0move(&___nl__im__107, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__4));
#line 1320
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_mk(3, ___nl__im__104, ___nl__im__106, ___nl__im__107));
#line 1320
c_rt_lib0clear(&___nl__im__104);
#line 1320
c_rt_lib0clear(&___nl__im__106);
#line 1320
c_rt_lib0clear(&___nl__im__107);
#line 1320
c_rt_lib0delete(translator_priv0print_call_base(___nl__im__97, ___nl__im__102, ___nl__im__103, ___ref___rec__2));
#line 1320
c_rt_lib0clear(&___nl__im__97);
#line 1320
c_rt_lib0clear(&___nl__im__102);
#line 1320
c_rt_lib0clear(&___nl__im__103);
#line 1321
goto label_271;
#line 1321
label_271:
;
#line 1321
//clear ___nl__bool__86;
#line 1322
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(218)));
#line 1323
goto label_331;
#line 1323
label_275:
;
#line 1323
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(253)));
#line 1323
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 1324
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(1332)));
#line 1324
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(1331)));
#line 1324
c_rt_lib0move(&___nl__im__112, c_rt_lib0hash_get_value_dec(___nl__im__108, ___get_global_string_const(603)));
#line 1324
c_rt_lib0delete(translator_priv0release_field(___nl__im__110, ___nl__im__111, ___nl__im__112, ___ref___rec__2));
#line 1324
c_rt_lib0clear(&___nl__im__110);
#line 1324
c_rt_lib0clear(&___nl__im__111);
#line 1324
c_rt_lib0clear(&___nl__im__112);
#line 1325
goto label_331;
#line 1325
label_286:
;
#line 1325
c_rt_lib0move(&___nl__im__114, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(1029)));
#line 1325
c_rt_lib0copy(&___nl__im__113, ___nl__im__114);
#line 1326
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_string_const(218)));
#line 1326
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__4));
#line 1326
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_string_const(579)));
#line 1326
___nl__int__120 = 1;
#line 1326
___nl__int__120 = -___nl__int__120;
#line 1326
c_rt_lib0move(&___nl__im__121, c_rt_lib0int_new(___nl__int__120));
#line 1326
c_rt_lib0move(&___nl__im__122, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 1326
c_rt_lib0move(&___nl__im__116, c_rt_lib0hash_mk(5, ___get_global_string_const(222), ___nl__im__117, ___get_global_string_const(73), ___nl__im__118, ___get_global_string_const(579), ___nl__im__119, ___get_global_string_const(564), ___nl__im__121, ___get_global_string_const(581), ___nl__im__122));
#line 1326
c_rt_lib0clear(&___nl__im__117);
#line 1326
c_rt_lib0clear(&___nl__im__118);
#line 1326
c_rt_lib0clear(&___nl__im__119);
#line 1326
//clear ___nl__int__120;
#line 1326
c_rt_lib0clear(&___nl__im__121);
#line 1326
c_rt_lib0clear(&___nl__im__122);
#line 1326
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__116));
#line 1326
c_rt_lib0clear(&___nl__im__116);
#line 1326
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__115));
#line 1326
c_rt_lib0clear(&___nl__im__115);
#line 1327
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__113, ___get_global_string_const(218)));
#line 1328
goto label_331;
#line 1328
label_309:
;
#line 1328
c_rt_lib0move(&___nl__im__124, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(259)));
#line 1328
c_rt_lib0copy(&___nl__im__123, ___nl__im__124);
#line 1329
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_string_const(1332)));
#line 1329
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_string_const(1331)));
#line 1329
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_string_const(579)));
#line 1329
c_rt_lib0delete(translator_priv0release_variant(___nl__im__125, ___nl__im__126, ___nl__im__127, ___ref___rec__2));
#line 1329
c_rt_lib0clear(&___nl__im__125);
#line 1329
c_rt_lib0clear(&___nl__im__126);
#line 1329
c_rt_lib0clear(&___nl__im__127);
#line 1330
goto label_331;
#line 1330
label_320:
;
#line 1330
c_rt_lib0move(&___nl__im__129, c_rt_lib0priv_as(___nl__im__21, ___get_global_string_const(257)));
#line 1330
c_rt_lib0copy(&___nl__im__128, ___nl__im__129);
#line 1331
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(1332)));
#line 1331
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(1331)));
#line 1331
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__128, ___get_global_string_const(361)));
#line 1331
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__130, ___nl__im__131, ___nl__im__132, ___ref___rec__2));
#line 1331
c_rt_lib0clear(&___nl__im__130);
#line 1331
c_rt_lib0clear(&___nl__im__131);
#line 1331
c_rt_lib0clear(&___nl__im__132);
#line 1332
goto label_331;
#line 1332
label_331:
;
#line 1332
c_rt_lib0clear(&___nl__im__21);
#line 1332
//clear ___nl__bool__22;
#line 1332
c_rt_lib0clear(&___nl__im__23);
#line 1332
c_rt_lib0clear(&___nl__im__24);
#line 1332
c_rt_lib0clear(&___nl__im__25);
#line 1332
c_rt_lib0clear(&___nl__im__26);
#line 1332
c_rt_lib0clear(&___nl__im__27);
#line 1332
c_rt_lib0clear(&___nl__im__28);
#line 1332
c_rt_lib0clear(&___nl__im__48);
#line 1332
c_rt_lib0clear(&___nl__im__49);
#line 1332
c_rt_lib0clear(&___nl__im__53);
#line 1332
c_rt_lib0clear(&___nl__im__54);
#line 1332
c_rt_lib0clear(&___nl__im__84);
#line 1332
c_rt_lib0clear(&___nl__im__85);
#line 1332
c_rt_lib0clear(&___nl__im__108);
#line 1332
c_rt_lib0clear(&___nl__im__109);
#line 1332
c_rt_lib0clear(&___nl__im__113);
#line 1332
c_rt_lib0clear(&___nl__im__114);
#line 1332
c_rt_lib0clear(&___nl__im__123);
#line 1332
c_rt_lib0clear(&___nl__im__124);
#line 1332
c_rt_lib0clear(&___nl__im__128);
#line 1332
c_rt_lib0clear(&___nl__im__129);
#line 1295
___nl__int__133 = 1;
#line 1295
___nl__int__16 = ___nl__int__16 - ___nl__int__133;
#line 1295
//clear ___nl__int__133;
#line 1333
goto label_27;
#line 1333
label_358:
;
#line 1333
c_rt_lib0clear(&___nl__im__0);
#line 1333
//clear ___nl__bool__1;
#line 1333
//clear ___nl__int__3;
#line 1333
c_rt_lib0clear(&___nl__im__4);
#line 1333
c_rt_lib0clear(&___nl__im__11);
#line 1333
//clear ___nl__int__16;
#line 1333
//clear ___nl__bool__18;
#line 1333
c_rt_lib0clear(&___nl__im__21);
#line 1333
//clear ___nl__bool__22;
#line 1333
c_rt_lib0clear(&___nl__im__23);
#line 1333
c_rt_lib0clear(&___nl__im__24);
#line 1333
c_rt_lib0clear(&___nl__im__25);
#line 1333
c_rt_lib0clear(&___nl__im__26);
#line 1333
c_rt_lib0clear(&___nl__im__27);
#line 1333
c_rt_lib0clear(&___nl__im__28);
#line 1333
c_rt_lib0clear(&___nl__im__48);
#line 1333
c_rt_lib0clear(&___nl__im__49);
#line 1333
c_rt_lib0clear(&___nl__im__53);
#line 1333
c_rt_lib0clear(&___nl__im__54);
#line 1333
c_rt_lib0clear(&___nl__im__84);
#line 1333
c_rt_lib0clear(&___nl__im__85);
#line 1333
c_rt_lib0clear(&___nl__im__108);
#line 1333
c_rt_lib0clear(&___nl__im__109);
#line 1333
c_rt_lib0clear(&___nl__im__113);
#line 1333
c_rt_lib0clear(&___nl__im__114);
#line 1333
c_rt_lib0clear(&___nl__im__123);
#line 1333
c_rt_lib0clear(&___nl__im__124);
#line 1333
c_rt_lib0clear(&___nl__im__128);
#line 1333
c_rt_lib0clear(&___nl__im__129);
#line 1333
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
#line 1337
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 1338
___nl__int__3 = 0;
#line 1339
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(127)));
#line 1339
___nl__int__6 = 0;
#line 1339
___nl__int__7 = 1;
#line 1339
___nl__int__8 = c_rt_lib0array_len(___nl__im__4);
#line 1339
label_6:
;
#line 1339
___nl__int__10 = ___nl__int__6 >= ___nl__int__8;
#line 1339
___nl__bool__9 = ___nl__int__10;
#line 1339
if(___nl__bool__9){ goto label_32;}
#line 1339
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__4, ___nl__int__6));
#line 1339
c_rt_lib0copy(&___nl__im__5, ___nl__im__11);
#line 1340
___nl__int__13 = 0;
#line 1340
___nl__int__14 = ___nl__int__3 > ___nl__int__13;
#line 1340
___nl__bool__12 = ___nl__int__14;
#line 1340
//clear ___nl__int__13;
#line 1340
//clear ___nl__int__14;
#line 1340
___nl__bool__12 = !___nl__bool__12;
#line 1340
if(___nl__bool__12){ goto label_23;}
#line 1340
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1340
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 1340
c_rt_lib0clear(&___nl__im__15);
#line 1340
goto label_23;
#line 1340
label_23:
;
#line 1340
//clear ___nl__bool__12;
#line 1341
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__5));
#line 1342
___nl__int__16 = 1;
#line 1342
___nl__int__3 = ___nl__int__3 + ___nl__int__16;
#line 1342
//clear ___nl__int__16;
#line 1342
c_rt_lib0clear(&___nl__im__5);
#line 1343
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1343
goto label_6;
#line 1343
label_32:
;
#line 1344
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1044)));
#line 1344
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(1043));
#line 1344
if(___nl__bool__18){ goto label_41;}
#line 1346
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(1042));
#line 1346
if(___nl__bool__18){ goto label_46;}
#line 1346
c_rt_lib0move(&___nl__im__19,___get_global_string_const(15));
#line 1346
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__17));
#line 1346
nl_die_arg(___nl__im__19);
#line 1344
label_41:
;
#line 1345
c_rt_lib0move(&___nl__im__20, string0lf());
#line 1345
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__20));
#line 1345
c_rt_lib0clear(&___nl__im__20);
#line 1346
goto label_48;
#line 1346
label_46:
;
#line 1347
goto label_48;
#line 1347
label_48:
;
#line 1348
c_rt_lib0clear(&___nl__im__0);
#line 1348
//clear ___nl__int__3;
#line 1348
c_rt_lib0clear(&___nl__im__4);
#line 1348
c_rt_lib0clear(&___nl__im__5);
#line 1348
//clear ___nl__int__6;
#line 1348
//clear ___nl__int__7;
#line 1348
//clear ___nl__int__8;
#line 1348
//clear ___nl__bool__9;
#line 1348
//clear ___nl__int__10;
#line 1348
c_rt_lib0clear(&___nl__im__11);
#line 1348
c_rt_lib0clear(&___nl__im__17);
#line 1348
//clear ___nl__bool__18;
#line 1348
c_rt_lib0clear(&___nl__im__19);
#line 1348
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
#line 1352
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(558)));
#line 1352
c_rt_lib0move(&___nl__im__5,___get_global_string_const(1026));
#line 1352
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 1352
c_rt_lib0clear(&___nl__im__4);
#line 1352
c_rt_lib0clear(&___nl__im__5);
#line 1352
___nl__bool__3 = !___nl__bool__3;
#line 1352
___nl__bool__3 = !___nl__bool__3;
#line 1352
if(___nl__bool__3){ goto label_11;}
#line 1352
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 1352
nl_die_arg(___nl__im__6);
#line 1352
goto label_11;
#line 1352
label_11:
;
#line 1352
//clear ___nl__bool__3;
#line 1352
c_rt_lib0clear(&___nl__im__6);
#line 1353
___nl__int__7 = translator_priv0get_sim_label(___ref___rec__2);
#line 1354
___nl__int__8 = translator_priv0get_sim_label(___ref___rec__2);
#line 1355
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1012)));
#line 1355
c_rt_lib0move(&___nl__im__10, translator_priv0dest_val(___nl__im__11, ___ref___rec__2));
#line 1355
c_rt_lib0clear(&___nl__im__11);
#line 1355
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1355
c_rt_lib0move(&___nl__im__9, translator_priv0get_cast(___nl__im__10, ___nl__im__12, ___ref___rec__2));
#line 1355
c_rt_lib0clear(&___nl__im__10);
#line 1355
c_rt_lib0clear(&___nl__im__12);
#line 1356
c_rt_lib0delete(translator_priv0print_if_goto(___nl__int__8, ___nl__im__9, ___ref___rec__2));
#line 1357
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1014)));
#line 1357
c_rt_lib0delete(translator_priv0print_val(___nl__im__13, ___nl__im__1, ___ref___rec__2));
#line 1357
c_rt_lib0clear(&___nl__im__13);
#line 1358
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__7));
#line 1358
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(250), ___nl__im__15));
#line 1358
c_rt_lib0clear(&___nl__im__15);
#line 1358
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__14));
#line 1358
c_rt_lib0clear(&___nl__im__14);
#line 1359
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__8, ___ref___rec__2));
#line 1360
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(1013)));
#line 1360
c_rt_lib0delete(translator_priv0print_val(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1360
c_rt_lib0clear(&___nl__im__16);
#line 1361
c_rt_lib0delete(translator_priv0print_sim_label(___nl__int__7, ___ref___rec__2));
#line 1361
c_rt_lib0clear(&___nl__im__0);
#line 1361
c_rt_lib0clear(&___nl__im__1);
#line 1361
//clear ___nl__int__7;
#line 1361
//clear ___nl__int__8;
#line 1361
c_rt_lib0clear(&___nl__im__9);
#line 1361
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
#line 1365
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1365
c_rt_lib0move(&___nl__im__3, translator_priv0new_register(___ref___rec__2, ___nl__im__4));
#line 1365
c_rt_lib0clear(&___nl__im__4);
#line 1366
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__0));
#line 1366
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(0)));
#line 1366
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(1), ___nl__im__8));
#line 1366
c_rt_lib0clear(&___nl__im__8);
#line 1366
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(220), ___nl__im__1, ___get_global_string_const(218), ___nl__im__6, ___get_global_string_const(204), ___nl__im__7));
#line 1366
c_rt_lib0clear(&___nl__im__6);
#line 1366
c_rt_lib0clear(&___nl__im__7);
#line 1366
c_rt_lib0delete(translator_priv0print_val(___nl__im__5, ___nl__im__3, ___ref___rec__2));
#line 1366
c_rt_lib0clear(&___nl__im__5);
#line 1367
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(247), ___nl__im__3));
#line 1367
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__9));
#line 1367
c_rt_lib0clear(&___nl__im__9);
#line 1367
c_rt_lib0clear(&___nl__im__0);
#line 1367
c_rt_lib0clear(&___nl__im__1);
#line 1367
c_rt_lib0clear(&___nl__im__3);
#line 1367
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
#line 1371
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_string_const(350)));
#line 1372
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1372
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(985));
#line 1372
c_rt_lib0clear(&___nl__im__4);
#line 1372
___nl__bool__3 = !___nl__bool__3;
#line 1372
___nl__bool__3 = !___nl__bool__3;
#line 1372
if(___nl__bool__3){ goto label_25;}
#line 1373
c_rt_lib0move(&___nl__im__5, translator_priv0calc_val(___nl__im__0, ___ref___rec__1));
#line 1374
___nl__im_ptr__10 = &((*___ref___rec__1).result0field);
#line 1374
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1374
___nl__im_ptr__10 = NULL;
#line 1374
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(466)));
#line 1374
c_rt_lib0clear(&___nl__im__9);
#line 1374
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1374
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1374
___nl__im_ptr__13 = NULL;
#line 1374
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(416)));
#line 1374
c_rt_lib0clear(&___nl__im__12);
#line 1374
c_rt_lib0move(&___nl__im__7, translator_priv0var_type_to_reg_type(___nl__im__8, ___nl__im__11));
#line 1374
c_rt_lib0clear(&___nl__im__8);
#line 1374
c_rt_lib0clear(&___nl__im__11);
#line 1374
c_rt_lib0move(&___nl__im__6, translator_priv0get_cast(___nl__im__5, ___nl__im__7, ___ref___rec__1));
#line 1374
c_rt_lib0clear(&___nl__im__7);
#line 1375
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__6));
#line 1376
goto label_25;
#line 1376
label_25:
;
#line 1376
//clear ___nl__bool__3;
#line 1376
c_rt_lib0clear(&___nl__im__5);
#line 1376
c_rt_lib0clear(&___nl__im__6);
#line 1377
c_rt_lib0delete(translator_priv0print_safe_return(___nl__im__2, ___ref___rec__1));
#line 1377
c_rt_lib0clear(&___nl__im__0);
#line 1377
c_rt_lib0clear(&___nl__im__2);
#line 1377
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
#line 1381
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1381
___nl__int__4 = 1;
#line 1381
___nl__int__4 = -___nl__int__4;
#line 1381
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__4));
#line 1381
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 1381
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__3, ___get_global_string_const(217), ___nl__im__5, ___get_global_string_const(351), ___nl__im__6));
#line 1381
c_rt_lib0clear(&___nl__im__3);
#line 1381
//clear ___nl__int__4;
#line 1381
c_rt_lib0clear(&___nl__im__5);
#line 1381
c_rt_lib0clear(&___nl__im__6);
#line 1382
___nl__im_ptr__9 = &((*___ref___rec__1).result0field);
#line 1382
c_rt_lib0copy(&___nl__im__8, (*___nl__im_ptr__9));
#line 1382
___nl__im_ptr__9 = NULL;
#line 1382
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(213)));
#line 1382
c_rt_lib0clear(&___nl__im__8);
#line 1383
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(223));
#line 1383
___nl__bool__10 = !___nl__bool__10;
#line 1383
if(___nl__bool__10){ goto label_66;}
#line 1384
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(223)));
#line 1385
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(217)));
#line 1385
___nl__int__13 = getIntFromImm(___nl__im__14);
#line 1385
c_rt_lib0clear(&___nl__im__14);
#line 1385
___nl__int__15 = c_rt_lib0array_len(___nl__im__7);
#line 1385
___nl__int__16 = ___nl__int__13 < ___nl__int__15;
#line 1385
___nl__bool__11 = ___nl__int__16;
#line 1385
//clear ___nl__int__13;
#line 1385
//clear ___nl__int__15;
#line 1385
//clear ___nl__int__16;
#line 1385
___nl__bool__12 = !___nl__bool__11;
#line 1385
if(___nl__bool__12){ goto label_39;}
#line 1385
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(217)));
#line 1385
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 1385
c_rt_lib0clear(&___nl__im__20);
#line 1385
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__7, ___nl__int__19));
#line 1385
//clear ___nl__int__19;
#line 1385
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(353)));
#line 1385
c_rt_lib0clear(&___nl__im__18);
#line 1385
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__17, ___get_global_string_const(39));
#line 1385
c_rt_lib0clear(&___nl__im__17);
#line 1385
label_39:
;
#line 1385
//clear ___nl__bool__12;
#line 1385
___nl__bool__11 = !___nl__bool__11;
#line 1385
if(___nl__bool__11){ goto label_63;}
#line 1386
___nl__im_ptr__24 = &((*___ref___rec__1).result0field);
#line 1386
c_rt_lib0copy(&___nl__im__23, (*___nl__im_ptr__24));
#line 1386
___nl__im_ptr__24 = NULL;
#line 1386
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(466)));
#line 1386
c_rt_lib0clear(&___nl__im__23);
#line 1386
___nl__im_ptr__27 = &((*___ref___rec__1).logic0field);
#line 1386
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 1386
___nl__im_ptr__27 = NULL;
#line 1386
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(416)));
#line 1386
c_rt_lib0clear(&___nl__im__26);
#line 1386
c_rt_lib0move(&___nl__im__21, translator_priv0var_type_to_reg_type(___nl__im__22, ___nl__im__25));
#line 1386
c_rt_lib0clear(&___nl__im__22);
#line 1386
c_rt_lib0clear(&___nl__im__25);
#line 1386
c_rt_lib0move(&___nl__im__2, translator_priv0new_register(___ref___rec__1, ___nl__im__21));
#line 1386
c_rt_lib0clear(&___nl__im__21);
#line 1387
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(223)));
#line 1387
c_rt_lib0delete(translator_priv0move(___nl__im__2, ___nl__im__28, ___ref___rec__1));
#line 1387
c_rt_lib0clear(&___nl__im__28);
#line 1388
c_rt_lib0move(&___nl__im__0, c_rt_lib0ov_mk_arg(___get_global_string_const(223), ___nl__im__2));
#line 1389
goto label_63;
#line 1389
label_63:
;
#line 1389
//clear ___nl__bool__11;
#line 1390
goto label_66;
#line 1390
label_66:
;
#line 1390
//clear ___nl__bool__10;
#line 1391
___nl__im_ptr__31 = &((*___ref___rec__1).logic0field);
#line 1391
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 1391
___nl__im_ptr__31 = NULL;
#line 1391
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__30, ___get_global_string_const(214)));
#line 1391
c_rt_lib0clear(&___nl__im__30);
#line 1391
___nl__int__33 = 0;
#line 1391
___nl__int__34 = 1;
#line 1391
___nl__int__35 = c_rt_lib0array_len(___nl__im__29);
#line 1391
label_76:
;
#line 1391
___nl__int__37 = ___nl__int__33 >= ___nl__int__35;
#line 1391
___nl__bool__36 = ___nl__int__37;
#line 1391
if(___nl__bool__36){ goto label_134;}
#line 1391
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get(___nl__im__29, ___nl__int__33));
#line 1391
c_rt_lib0copy(&___nl__im__32, ___nl__im__38);
#line 1392
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(217)));
#line 1392
___nl__int__41 = getIntFromImm(___nl__im__42);
#line 1392
c_rt_lib0clear(&___nl__im__42);
#line 1392
___nl__int__43 = c_rt_lib0array_len(___nl__im__7);
#line 1392
___nl__int__44 = ___nl__int__41 < ___nl__int__43;
#line 1392
___nl__bool__39 = ___nl__int__44;
#line 1392
//clear ___nl__int__41;
#line 1392
//clear ___nl__int__43;
#line 1392
//clear ___nl__int__44;
#line 1392
___nl__bool__40 = !___nl__bool__39;
#line 1392
if(___nl__bool__40){ goto label_102;}
#line 1392
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(217)));
#line 1392
___nl__int__47 = getIntFromImm(___nl__im__48);
#line 1392
c_rt_lib0clear(&___nl__im__48);
#line 1392
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_get(___nl__im__7, ___nl__int__47));
#line 1392
//clear ___nl__int__47;
#line 1392
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(353)));
#line 1392
c_rt_lib0clear(&___nl__im__46);
#line 1392
___nl__bool__39 = c_rt_lib0priv_is(___nl__im__45, ___get_global_string_const(39));
#line 1392
c_rt_lib0clear(&___nl__im__45);
#line 1392
label_102:
;
#line 1392
//clear ___nl__bool__40;
#line 1392
___nl__bool__39 = !___nl__bool__39;
#line 1392
if(___nl__bool__39){ goto label_109;}
#line 1392
//clear ___nl__bool__39;
#line 1392
goto label_131;
#line 1392
goto label_109;
#line 1392
label_109:
;
#line 1392
//clear ___nl__bool__39;
#line 1393
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__32, ___get_global_string_const(217)));
#line 1393
___nl__int__50 = getIntFromImm(___nl__im__51);
#line 1393
c_rt_lib0clear(&___nl__im__51);
#line 1393
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(217)));
#line 1393
___nl__int__52 = getIntFromImm(___nl__im__53);
#line 1393
c_rt_lib0clear(&___nl__im__53);
#line 1393
___nl__int__54 = ___nl__int__50 == ___nl__int__52;
#line 1393
___nl__bool__49 = ___nl__int__54;
#line 1393
//clear ___nl__int__50;
#line 1393
//clear ___nl__int__52;
#line 1393
//clear ___nl__int__54;
#line 1393
___nl__bool__49 = !___nl__bool__49;
#line 1393
if(___nl__bool__49){ goto label_127;}
#line 1393
//clear ___nl__bool__49;
#line 1393
goto label_131;
#line 1393
goto label_127;
#line 1393
label_127:
;
#line 1393
//clear ___nl__bool__49;
#line 1394
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__32, ___ref___rec__1));
#line 1394
c_rt_lib0clear(&___nl__im__32);
#line 1394
label_131:
;
#line 1395
___nl__int__33 = ___nl__int__33 + ___nl__int__34;
#line 1395
goto label_76;
#line 1395
label_134:
;
#line 1396
c_rt_lib0move(&___nl__im__55, c_rt_lib0ov_mk_arg(___get_global_string_const(246), ___nl__im__0));
#line 1396
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__55));
#line 1396
c_rt_lib0clear(&___nl__im__55);
#line 1396
c_rt_lib0clear(&___nl__im__0);
#line 1396
c_rt_lib0clear(&___nl__im__2);
#line 1396
c_rt_lib0clear(&___nl__im__7);
#line 1396
c_rt_lib0clear(&___nl__im__29);
#line 1396
c_rt_lib0clear(&___nl__im__32);
#line 1396
//clear ___nl__int__33;
#line 1396
//clear ___nl__int__34;
#line 1396
//clear ___nl__int__35;
#line 1396
//clear ___nl__bool__36;
#line 1396
//clear ___nl__int__37;
#line 1396
c_rt_lib0clear(&___nl__im__38);
#line 1396
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
#line 1400
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1400
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(505));
#line 1400
c_rt_lib0clear(&___nl__im__3);
#line 1400
___nl__bool__2 = !___nl__bool__2;
#line 1400
if(___nl__bool__2){ goto label_16;}
#line 1401
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1401
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1401
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__7, ___get_global_string_const(505)));
#line 1401
c_rt_lib0clear(&___nl__im__6);
#line 1401
c_rt_lib0clear(&___nl__im__7);
#line 1401
c_rt_lib0move(&___nl__im__4, translator_priv0get_var_register(___nl__im__5, ___ref___rec__1));
#line 1401
c_rt_lib0clear(&___nl__im__5);
#line 1401
c_rt_lib0clear(&___nl__im__0);
#line 1401
//clear ___nl__bool__2;
#line 1401
return ___nl__im__4;
#line 1402
goto label_16;
#line 1402
label_16:
;
#line 1402
//clear ___nl__bool__2;
#line 1402
c_rt_lib0clear(&___nl__im__4);
#line 1403
c_rt_lib0move(&___nl__im__8, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1404
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1405
label_21:
;
#line 1405
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(7));
#line 1405
___nl__bool__10 = !___nl__bool__10;
#line 1405
if(___nl__bool__10){ goto label_35;}
#line 1406
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1406
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1406
___nl__im_ptr__13 = NULL;
#line 1406
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(416)));
#line 1406
c_rt_lib0clear(&___nl__im__12);
#line 1406
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(7)));
#line 1406
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value(___nl__im__11, ___nl__im__14));
#line 1406
c_rt_lib0clear(&___nl__im__11);
#line 1406
c_rt_lib0clear(&___nl__im__14);
#line 1407
goto label_21;
#line 1407
label_35:
;
#line 1409
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1409
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(234));
#line 1409
c_rt_lib0clear(&___nl__im__18);
#line 1409
___nl__bool__17 = !___nl__bool__16;
#line 1409
if(___nl__bool__17){ goto label_50;}
#line 1409
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1409
___nl__im_ptr__22 = &((*___ref___rec__1).logic0field);
#line 1409
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1409
___nl__im_ptr__22 = NULL;
#line 1409
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(416)));
#line 1409
c_rt_lib0clear(&___nl__im__21);
#line 1409
___nl__bool__16 = tct0is_own_type(___nl__im__19, ___nl__im__20);
#line 1409
c_rt_lib0clear(&___nl__im__19);
#line 1409
c_rt_lib0clear(&___nl__im__20);
#line 1409
label_50:
;
#line 1409
//clear ___nl__bool__17;
#line 1409
___nl__bool__16 = !___nl__bool__16;
#line 1409
if(___nl__bool__16){ goto label_56;}
#line 1410
c_rt_lib0move(&___nl__im__15, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__8));
#line 1411
goto label_59;
#line 1411
label_56:
;
#line 1412
c_rt_lib0move(&___nl__im__15, translator_priv0new_register(___ref___rec__1, ___nl__im__8));
#line 1413
goto label_59;
#line 1413
label_59:
;
#line 1413
//clear ___nl__bool__16;
#line 1414
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__15, ___ref___rec__1));
#line 1415
c_rt_lib0clear(&___nl__im__0);
#line 1415
c_rt_lib0clear(&___nl__im__8);
#line 1415
c_rt_lib0clear(&___nl__im__9);
#line 1415
//clear ___nl__bool__10;
#line 1415
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
#line 1420
c_rt_lib0move(&___nl__im__5, nlasm0is_empty(___nl__im__1));
#line 1420
___nl__bool__4 = c_rt_lib0check_true_native(___nl__im__5);
#line 1420
c_rt_lib0clear(&___nl__im__5);
#line 1420
___nl__bool__4 = !___nl__bool__4;
#line 1420
if(___nl__bool__4){ goto label_7;}
#line 1420
c_rt_lib0copy(&___nl__im__1, ___nl__im__2);
#line 1420
goto label_7;
#line 1420
label_7:
;
#line 1420
//clear ___nl__bool__4;
#line 1421
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__3));
#line 1422
c_rt_lib0clear(&___nl__im__0);
#line 1422
c_rt_lib0clear(&___nl__im__2);
#line 1422
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
#line 1426
c_rt_lib0move(&___nl__im__2, translator_priv0value_type_to_reg_type(___nl__im__0, ___ref___rec__1));
#line 1427
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1427
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(505));
#line 1427
c_rt_lib0clear(&___nl__im__4);
#line 1427
___nl__bool__3 = !___nl__bool__3;
#line 1427
if(___nl__bool__3){ goto label_18;}
#line 1428
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1428
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1428
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(505)));
#line 1428
c_rt_lib0clear(&___nl__im__7);
#line 1428
c_rt_lib0clear(&___nl__im__8);
#line 1428
c_rt_lib0move(&___nl__im__5, translator_priv0get_var_register(___nl__im__6, ___ref___rec__1));
#line 1428
c_rt_lib0clear(&___nl__im__6);
#line 1428
c_rt_lib0clear(&___nl__im__0);
#line 1428
c_rt_lib0clear(&___nl__im__2);
#line 1428
//clear ___nl__bool__3;
#line 1428
return ___nl__im__5;
#line 1429
goto label_18;
#line 1429
label_18:
;
#line 1429
//clear ___nl__bool__3;
#line 1429
c_rt_lib0clear(&___nl__im__5);
#line 1432
c_rt_lib0move(&___nl__im__9, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1433
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1433
___nl__im_ptr__14 = &((*___ref___rec__1).logic0field);
#line 1433
c_rt_lib0copy(&___nl__im__13, (*___nl__im_ptr__14));
#line 1433
___nl__im_ptr__14 = NULL;
#line 1433
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(416)));
#line 1433
c_rt_lib0clear(&___nl__im__13);
#line 1433
___nl__bool__10 = tct0is_own_type(___nl__im__11, ___nl__im__12);
#line 1433
c_rt_lib0clear(&___nl__im__11);
#line 1433
c_rt_lib0clear(&___nl__im__12);
#line 1433
___nl__bool__10 = !___nl__bool__10;
#line 1433
if(___nl__bool__10){ goto label_35;}
#line 1434
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1435
goto label_38;
#line 1435
label_35:
;
#line 1436
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__9, ___ref___rec__1));
#line 1437
goto label_38;
#line 1437
label_38:
;
#line 1437
//clear ___nl__bool__10;
#line 1439
c_rt_lib0clear(&___nl__im__0);
#line 1439
c_rt_lib0clear(&___nl__im__2);
#line 1439
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
#line 1443
___nl__im_ptr__5 = &((*___ref___rec__1).logic0field);
#line 1443
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1443
___nl__im_ptr__5 = NULL;
#line 1443
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(820)));
#line 1443
c_rt_lib0clear(&___nl__im__4);
#line 1443
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__0));
#line 1443
c_rt_lib0clear(&___nl__im__3);
#line 1443
c_rt_lib0clear(&___nl__im__0);
#line 1443
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
#line 1449
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(218));
#line 1449
if(___nl__bool__5){ goto label_7;}
#line 1451
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(420));
#line 1451
if(___nl__bool__5){ goto label_10;}
#line 1451
c_rt_lib0move(&___nl__im__6,___get_global_string_const(15));
#line 1451
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__3));
#line 1451
nl_die_arg(___nl__im__6);
#line 1449
label_7:
;
#line 1450
c_rt_lib0move(&___nl__im__4, translator_priv0new_register(___ref___rec__1, ___nl__im__2));
#line 1451
goto label_13;
#line 1451
label_10:
;
#line 1452
c_rt_lib0move(&___nl__im__4, translator_priv0new_reference_register(___ref___rec__1, ___nl__im__2));
#line 1453
goto label_13;
#line 1453
label_13:
;
#line 1454
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1454
c_rt_lib0move(&___nl__im__8,___get_global_string_const(820));
#line 1454
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___nl__im_ptr__7), ___nl__im__8));
#line 1454
c_rt_lib0delete(hash0set_value(&___nl__im__8, ___nl__im__0, ___nl__im__4));
#line 1454
c_rt_lib0move(&___nl__string__9,___get_global_string_const(820));
#line 1454
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__7, ___nl__string__9, ___nl__im__8));
#line 1454
___nl__im_ptr__7 = NULL;
#line 1454
c_rt_lib0clear(&___nl__im__8);
#line 1454
c_rt_lib0clear(&___nl__string__9);
#line 1455
___nl__im_ptr__10 = &((*___ref___rec__1).debug0field);
#line 1455
c_rt_lib0move(&___nl__im__11,___get_global_string_const(833));
#line 1455
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___nl__im_ptr__10), ___nl__im__11));
#line 1455
c_rt_lib0delete(hash0set_value(&___nl__im__11, ___nl__im__0, ___nl__im__4));
#line 1455
c_rt_lib0move(&___nl__string__12,___get_global_string_const(833));
#line 1455
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__10, ___nl__string__12, ___nl__im__11));
#line 1455
___nl__im_ptr__10 = NULL;
#line 1455
c_rt_lib0clear(&___nl__im__11);
#line 1455
c_rt_lib0clear(&___nl__string__12);
#line 1456
c_rt_lib0clear(&___nl__im__0);
#line 1456
c_rt_lib0clear(&___nl__im__2);
#line 1456
c_rt_lib0clear(&___nl__im__3);
#line 1456
//clear ___nl__bool__5;
#line 1456
c_rt_lib0clear(&___nl__im__6);
#line 1456
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
#line 1460
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1460
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1460
___nl__im_ptr__5 = NULL;
#line 1460
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(214)));
#line 1460
c_rt_lib0clear(&___nl__im__4);
#line 1460
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1460
c_rt_lib0clear(&___nl__im__3);
#line 1461
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1461
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(218)));
#line 1461
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__1, ___get_global_string_const(217), ___nl__im__7, ___get_global_string_const(351), ___nl__im__8));
#line 1461
c_rt_lib0clear(&___nl__im__7);
#line 1461
c_rt_lib0clear(&___nl__im__8);
#line 1462
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1462
c_rt_lib0move(&___nl__im__10,___get_global_string_const(214));
#line 1462
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1462
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1462
c_rt_lib0move(&___nl__string__11,___get_global_string_const(214));
#line 1462
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__9, ___nl__string__11, ___nl__im__10));
#line 1462
___nl__im_ptr__9 = NULL;
#line 1462
c_rt_lib0clear(&___nl__im__10);
#line 1462
c_rt_lib0clear(&___nl__string__11);
#line 1463
___nl__im_ptr__12 = &((*___ref___rec__0).logic0field);
#line 1463
c_rt_lib0move(&___nl__im__13,___get_global_string_const(469));
#line 1463
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___nl__im_ptr__12), ___nl__im__13));
#line 1463
___nl__int__14 = 1;
#line 1463
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 1463
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 1463
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 1463
c_rt_lib0move(&___nl__string__17,___get_global_string_const(469));
#line 1463
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__12, ___nl__string__17, ___nl__im__13));
#line 1463
___nl__im_ptr__12 = NULL;
#line 1463
c_rt_lib0clear(&___nl__im__13);
#line 1463
//clear ___nl__int__14;
#line 1463
//clear ___nl__int__15;
#line 1463
//clear ___nl__int__16;
#line 1463
c_rt_lib0clear(&___nl__string__17);
#line 1464
___nl__im_ptr__18 = &((*___ref___rec__0).logic0field);
#line 1464
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1324));
#line 1464
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1464
___nl__bool__20 = true;
#line 1464
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1464
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1464
c_rt_lib0move(&___nl__string__22,___get_global_string_const(1324));
#line 1464
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__18, ___nl__string__22, ___nl__im__19));
#line 1464
___nl__im_ptr__18 = NULL;
#line 1464
c_rt_lib0clear(&___nl__im__19);
#line 1464
c_rt_lib0clear(&___nl__im__21);
#line 1464
c_rt_lib0clear(&___nl__string__22);
#line 1465
___nl__im_ptr__23 = &((*___ref___rec__0).result0field);
#line 1465
c_rt_lib0move(&___nl__im__24,___get_global_string_const(214));
#line 1465
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1465
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1465
c_rt_lib0move(&___nl__string__25,___get_global_string_const(214));
#line 1465
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__23, ___nl__string__25, ___nl__im__24));
#line 1465
___nl__im_ptr__23 = NULL;
#line 1465
c_rt_lib0clear(&___nl__im__24);
#line 1465
c_rt_lib0clear(&___nl__string__25);
#line 1466
___nl__im_ptr__29 = &((*___ref___rec__0).logic0field);
#line 1466
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1466
___nl__im_ptr__29 = NULL;
#line 1466
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(214)));
#line 1466
c_rt_lib0clear(&___nl__im__28);
#line 1466
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__27, ___nl__int__2));
#line 1466
c_rt_lib0clear(&___nl__im__27);
#line 1466
c_rt_lib0clear(&___nl__im__1);
#line 1466
//clear ___nl__int__2;
#line 1466
c_rt_lib0clear(&___nl__im__6);
#line 1466
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
#line 1470
___nl__im_ptr__5 = &((*___ref___rec__0).logic0field);
#line 1470
c_rt_lib0copy(&___nl__im__4, (*___nl__im_ptr__5));
#line 1470
___nl__im_ptr__5 = NULL;
#line 1470
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(214)));
#line 1470
c_rt_lib0clear(&___nl__im__4);
#line 1470
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 1470
c_rt_lib0clear(&___nl__im__3);
#line 1471
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__2));
#line 1471
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_none(___get_global_string_const(420)));
#line 1471
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_mk(3, ___get_global_string_const(204), ___nl__im__1, ___get_global_string_const(217), ___nl__im__7, ___get_global_string_const(351), ___nl__im__8));
#line 1471
c_rt_lib0clear(&___nl__im__7);
#line 1471
c_rt_lib0clear(&___nl__im__8);
#line 1472
___nl__im_ptr__9 = &((*___ref___rec__0).logic0field);
#line 1472
c_rt_lib0move(&___nl__im__10,___get_global_string_const(214));
#line 1472
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___nl__im_ptr__9), ___nl__im__10));
#line 1472
c_rt_lib0array_push(&___nl__im__10, ___nl__im__6);
#line 1472
c_rt_lib0move(&___nl__string__11,___get_global_string_const(214));
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
c_rt_lib0move(&___nl__im__13,___get_global_string_const(469));
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
c_rt_lib0move(&___nl__string__17,___get_global_string_const(469));
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
c_rt_lib0move(&___nl__im__19,___get_global_string_const(1324));
#line 1474
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___nl__im_ptr__18), ___nl__im__19));
#line 1474
___nl__bool__20 = true;
#line 1474
c_rt_lib0move(&___nl__im__21, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1474
c_rt_lib0array_push(&___nl__im__19, ___nl__im__21);
#line 1474
c_rt_lib0move(&___nl__string__22,___get_global_string_const(1324));
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
c_rt_lib0move(&___nl__im__24,___get_global_string_const(214));
#line 1475
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash((*___nl__im_ptr__23), ___nl__im__24));
#line 1475
c_rt_lib0array_push(&___nl__im__24, ___nl__im__6);
#line 1475
c_rt_lib0move(&___nl__string__25,___get_global_string_const(214));
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
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(214)));
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

translator0function_logic_t0type translator_priv0save_registers(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT * ___nl__im_ptr__2 = NULL;
#line 1480
___nl__im_ptr__2 = &((*___ref___rec__0).logic0field);
#line 1480
c_rt_lib0copy(&___nl__im__1, (*___nl__im_ptr__2));
#line 1480
___nl__im_ptr__2 = NULL;
#line 1480
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
#line 1484
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(351)));
#line 1484
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(218));
#line 1484
if(___nl__bool__3){ goto label_8;}
#line 1486
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(420));
#line 1486
if(___nl__bool__3){ goto label_31;}
#line 1486
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 1486
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1486
nl_die_arg(___nl__im__4);
#line 1484
label_8:
;
#line 1485
___nl__im_ptr__8 = &((*___ref___rec__1).logic0field);
#line 1485
c_rt_lib0copy(&___nl__im__7, (*___nl__im_ptr__8));
#line 1485
___nl__im_ptr__8 = NULL;
#line 1485
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(1324)));
#line 1485
c_rt_lib0clear(&___nl__im__7);
#line 1485
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(217)));
#line 1485
___nl__int__9 = getIntFromImm(___nl__im__10);
#line 1485
c_rt_lib0clear(&___nl__im__10);
#line 1485
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__6, ___nl__int__9));
#line 1485
___nl__bool__5 = c_rt_lib0check_true_native(___nl__im__11);
#line 1485
c_rt_lib0clear(&___nl__im__6);
#line 1485
//clear ___nl__int__9;
#line 1485
c_rt_lib0clear(&___nl__im__11);
#line 1485
___nl__bool__5 = !___nl__bool__5;
#line 1485
if(___nl__bool__5){ goto label_28;}
#line 1485
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(251), ___nl__im__0));
#line 1485
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__12));
#line 1485
c_rt_lib0clear(&___nl__im__12);
#line 1485
goto label_28;
#line 1485
label_28:
;
#line 1485
//clear ___nl__bool__5;
#line 1486
goto label_33;
#line 1486
label_31:
;
#line 1487
goto label_33;
#line 1487
label_33:
;
#line 1487
c_rt_lib0clear(&___nl__im__0);
#line 1487
c_rt_lib0clear(&___nl__im__2);
#line 1487
//clear ___nl__bool__3;
#line 1487
c_rt_lib0clear(&___nl__im__4);
#line 1487
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
#line 1491
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(469)));
#line 1491
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1491
c_rt_lib0clear(&___nl__im__3);
#line 1491
label_3:
;
#line 1491
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1491
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1491
___nl__im_ptr__7 = NULL;
#line 1491
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(469)));
#line 1491
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1491
c_rt_lib0clear(&___nl__im__6);
#line 1491
c_rt_lib0clear(&___nl__im__8);
#line 1491
___nl__int__9 = ___nl__int__2 < ___nl__int__5;
#line 1491
___nl__bool__4 = ___nl__int__9;
#line 1491
//clear ___nl__int__5;
#line 1491
//clear ___nl__int__9;
#line 1491
___nl__bool__4 = !___nl__bool__4;
#line 1491
if(___nl__bool__4){ goto label_30;}
#line 1492
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1492
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1492
___nl__im_ptr__13 = NULL;
#line 1492
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(214)));
#line 1492
c_rt_lib0clear(&___nl__im__12);
#line 1492
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__11, ___nl__int__2));
#line 1492
c_rt_lib0clear(&___nl__im__11);
#line 1492
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__10, ___ref___rec__1));
#line 1492
c_rt_lib0clear(&___nl__im__10);
#line 1491
___nl__int__14 = 1;
#line 1491
___nl__int__2 = ___nl__int__2 + ___nl__int__14;
#line 1491
//clear ___nl__int__14;
#line 1493
goto label_3;
#line 1493
label_30:
;
#line 1493
c_rt_lib0clear(&___nl__im__0);
#line 1493
//clear ___nl__int__2;
#line 1493
//clear ___nl__bool__4;
#line 1493
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
bool  ___nl__bool__14 = false;
ImmT * ___nl__im_ptr__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
INT  ___nl__int__19 = 0;
#line 1497
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(469)));
#line 1497
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 1497
c_rt_lib0clear(&___nl__im__3);
#line 1497
label_3:
;
#line 1497
___nl__im_ptr__7 = &((*___ref___rec__1).logic0field);
#line 1497
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1497
___nl__im_ptr__7 = NULL;
#line 1497
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(469)));
#line 1497
___nl__int__5 = getIntFromImm(___nl__im__8);
#line 1497
c_rt_lib0clear(&___nl__im__6);
#line 1497
c_rt_lib0clear(&___nl__im__8);
#line 1497
___nl__int__9 = ___nl__int__2 < ___nl__int__5;
#line 1497
___nl__bool__4 = ___nl__int__9;
#line 1497
//clear ___nl__int__5;
#line 1497
//clear ___nl__int__9;
#line 1497
___nl__bool__4 = !___nl__bool__4;
#line 1497
if(___nl__bool__4){ goto label_43;}
#line 1498
___nl__im_ptr__13 = &((*___ref___rec__1).logic0field);
#line 1498
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 1498
___nl__im_ptr__13 = NULL;
#line 1498
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__12, ___get_global_string_const(214)));
#line 1498
c_rt_lib0clear(&___nl__im__12);
#line 1498
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__11, ___nl__int__2));
#line 1498
c_rt_lib0clear(&___nl__im__11);
#line 1498
c_rt_lib0delete(translator_priv0undef_reg(___nl__im__10, ___ref___rec__1));
#line 1498
c_rt_lib0clear(&___nl__im__10);
#line 1499
___nl__bool__14 = false;
#line 1499
___nl__im_ptr__15 = &((*___ref___rec__1).logic0field);
#line 1499
c_rt_lib0move(&___nl__im__16,___get_global_string_const(1324));
#line 1499
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash((*___nl__im_ptr__15), ___nl__im__16));
#line 1499
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__14));
#line 1499
c_rt_lib0array_set(&___nl__im__16, ___nl__int__2, ___nl__im__17);
#line 1499
c_rt_lib0move(&___nl__string__18,___get_global_string_const(1324));
#line 1499
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__15, ___nl__string__18, ___nl__im__16));
#line 1499
___nl__im_ptr__15 = NULL;
#line 1499
//clear ___nl__bool__14;
#line 1499
c_rt_lib0clear(&___nl__im__16);
#line 1499
c_rt_lib0clear(&___nl__im__17);
#line 1499
c_rt_lib0clear(&___nl__string__18);
#line 1497
___nl__int__19 = 1;
#line 1497
___nl__int__2 = ___nl__int__2 + ___nl__int__19;
#line 1497
//clear ___nl__int__19;
#line 1500
goto label_3;
#line 1500
label_43:
;
#line 1500
c_rt_lib0clear(&___nl__im__0);
#line 1500
//clear ___nl__int__2;
#line 1500
//clear ___nl__bool__4;
#line 1500
return NULL;
return NULL;

}

ImmT  translator_priv0print_sim_label(nlasm0label_t0type ___nl__int__0,translator0state_t0type* ___ref___rec__1) {
translator_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 1504
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 1504
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(248), ___nl__im__3));
#line 1504
c_rt_lib0clear(&___nl__im__3);
#line 1504
c_rt_lib0delete(translator_priv0print(___ref___rec__1, ___nl__im__2));
#line 1504
c_rt_lib0clear(&___nl__im__2);
#line 1504
//clear ___nl__int__0;
#line 1504
return NULL;
return NULL;

}

nlasm0label_t0type translator_priv0get_sim_label(translator0state_t0type* ___ref___rec__0) {
translator_priv0__const__init();
INT * ___nl__int_ptr__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT * ___nl__int_ptr__4 = NULL;
#line 1508
___nl__int_ptr__1 = &((*___ref___rec__0).label_nr0field);
#line 1508
___nl__int__2 = 1;
#line 1508
(*___nl__int_ptr__1) = (*___nl__int_ptr__1) + ___nl__int__2;
#line 1508
___nl__int_ptr__1 = NULL;
#line 1508
//clear ___nl__int__2;
#line 1509
___nl__int_ptr__4 = &((*___ref___rec__0).label_nr0field);
#line 1509
___nl__int__3 = (*___nl__int_ptr__4);
#line 1509
___nl__int_ptr__4 = NULL;
#line 1509
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
#line 1513
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1513
___nl__im_ptr__6 = &((*___ref___rec__1).logic0field);
#line 1513
c_rt_lib0copy(&___nl__im__5, (*___nl__im_ptr__6));
#line 1513
___nl__im_ptr__6 = NULL;
#line 1513
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(416)));
#line 1513
c_rt_lib0clear(&___nl__im__5);
#line 1513
c_rt_lib0move(&___nl__im__2, translator_priv0var_type_to_reg_type(___nl__im__3, ___nl__im__4));
#line 1513
c_rt_lib0clear(&___nl__im__3);
#line 1513
c_rt_lib0clear(&___nl__im__4);
#line 1513
c_rt_lib0clear(&___nl__im__0);
#line 1513
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
#line 1517
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1517
___nl__bool__3 = nlasm0eq_reg_type(___nl__im__4, ___nl__im__1);
#line 1517
c_rt_lib0clear(&___nl__im__4);
#line 1517
___nl__bool__3 = !___nl__bool__3;
#line 1517
if(___nl__bool__3){ goto label_9;}
#line 1518
c_rt_lib0clear(&___nl__im__1);
#line 1518
//clear ___nl__bool__3;
#line 1518
return ___nl__im__0;
#line 1519
goto label_9;
#line 1519
label_9:
;
#line 1519
//clear ___nl__bool__3;
#line 1521
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(351)));
#line 1521
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(218));
#line 1521
if(___nl__bool__7){ goto label_19;}
#line 1523
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(420));
#line 1523
if(___nl__bool__7){ goto label_22;}
#line 1523
c_rt_lib0move(&___nl__im__8,___get_global_string_const(15));
#line 1523
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(2, ___nl__im__8, ___nl__im__6));
#line 1523
nl_die_arg(___nl__im__8);
#line 1521
label_19:
;
#line 1522
c_rt_lib0move(&___nl__im__5, translator_priv0new_register(___ref___rec__2, ___nl__im__1));
#line 1523
goto label_25;
#line 1523
label_22:
;
#line 1524
c_rt_lib0move(&___nl__im__5, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__1));
#line 1525
goto label_25;
#line 1525
label_25:
;
#line 1526
c_rt_lib0delete(translator_priv0move(___nl__im__5, ___nl__im__0, ___ref___rec__2));
#line 1527
c_rt_lib0clear(&___nl__im__0);
#line 1527
c_rt_lib0clear(&___nl__im__1);
#line 1527
c_rt_lib0clear(&___nl__im__6);
#line 1527
//clear ___nl__bool__7;
#line 1527
c_rt_lib0clear(&___nl__im__8);
#line 1527
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
#line 1531
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1531
if(___nl__bool__2){ goto label_33;}
#line 1533
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1533
if(___nl__bool__2){ goto label_45;}
#line 1535
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1535
if(___nl__bool__2){ goto label_60;}
#line 1537
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1537
if(___nl__bool__2){ goto label_78;}
#line 1539
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1539
if(___nl__bool__2){ goto label_99;}
#line 1541
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1541
if(___nl__bool__2){ goto label_123;}
#line 1543
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1543
if(___nl__bool__2){ goto label_150;}
#line 1545
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1545
if(___nl__bool__2){ goto label_180;}
#line 1547
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1547
if(___nl__bool__2){ goto label_213;}
#line 1562
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1562
if(___nl__bool__2){ goto label_511;}
#line 1564
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 1564
if(___nl__bool__2){ goto label_546;}
#line 1566
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 1566
if(___nl__bool__2){ goto label_582;}
#line 1568
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1568
if(___nl__bool__2){ goto label_619;}
#line 1570
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 1570
if(___nl__bool__2){ goto label_657;}
#line 1572
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1572
if(___nl__bool__2){ goto label_696;}
#line 1572
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 1572
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1572
nl_die_arg(___nl__im__3);
#line 1531
label_33:
;
#line 1531
c_rt_lib0move(&___nl__im__5, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1531
c_rt_lib0copy(&___nl__im__4, ___nl__im__5);
#line 1532
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1532
c_rt_lib0clear(&___nl__im__0);
#line 1532
c_rt_lib0clear(&___nl__im__1);
#line 1532
//clear ___nl__bool__2;
#line 1532
c_rt_lib0clear(&___nl__im__3);
#line 1532
c_rt_lib0clear(&___nl__im__4);
#line 1532
c_rt_lib0clear(&___nl__im__5);
#line 1532
return ___nl__im__6;
#line 1533
goto label_736;
#line 1533
label_45:
;
#line 1533
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1533
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1534
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(557), ___nl__im__0));
#line 1534
c_rt_lib0clear(&___nl__im__0);
#line 1534
c_rt_lib0clear(&___nl__im__1);
#line 1534
//clear ___nl__bool__2;
#line 1534
c_rt_lib0clear(&___nl__im__3);
#line 1534
c_rt_lib0clear(&___nl__im__4);
#line 1534
c_rt_lib0clear(&___nl__im__5);
#line 1534
c_rt_lib0clear(&___nl__im__6);
#line 1534
c_rt_lib0clear(&___nl__im__7);
#line 1534
c_rt_lib0clear(&___nl__im__8);
#line 1534
return ___nl__im__9;
#line 1535
goto label_736;
#line 1535
label_60:
;
#line 1535
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1535
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1536
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
#line 1536
c_rt_lib0clear(&___nl__im__0);
#line 1536
c_rt_lib0clear(&___nl__im__1);
#line 1536
//clear ___nl__bool__2;
#line 1536
c_rt_lib0clear(&___nl__im__3);
#line 1536
c_rt_lib0clear(&___nl__im__4);
#line 1536
c_rt_lib0clear(&___nl__im__5);
#line 1536
c_rt_lib0clear(&___nl__im__6);
#line 1536
c_rt_lib0clear(&___nl__im__7);
#line 1536
c_rt_lib0clear(&___nl__im__8);
#line 1536
c_rt_lib0clear(&___nl__im__9);
#line 1536
c_rt_lib0clear(&___nl__im__10);
#line 1536
c_rt_lib0clear(&___nl__im__11);
#line 1536
return ___nl__im__12;
#line 1537
goto label_736;
#line 1537
label_78:
;
#line 1537
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1537
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1538
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(128), ___nl__im__0));
#line 1538
c_rt_lib0clear(&___nl__im__0);
#line 1538
c_rt_lib0clear(&___nl__im__1);
#line 1538
//clear ___nl__bool__2;
#line 1538
c_rt_lib0clear(&___nl__im__3);
#line 1538
c_rt_lib0clear(&___nl__im__4);
#line 1538
c_rt_lib0clear(&___nl__im__5);
#line 1538
c_rt_lib0clear(&___nl__im__6);
#line 1538
c_rt_lib0clear(&___nl__im__7);
#line 1538
c_rt_lib0clear(&___nl__im__8);
#line 1538
c_rt_lib0clear(&___nl__im__9);
#line 1538
c_rt_lib0clear(&___nl__im__10);
#line 1538
c_rt_lib0clear(&___nl__im__11);
#line 1538
c_rt_lib0clear(&___nl__im__12);
#line 1538
c_rt_lib0clear(&___nl__im__13);
#line 1538
c_rt_lib0clear(&___nl__im__14);
#line 1538
return ___nl__im__15;
#line 1539
goto label_736;
#line 1539
label_99:
;
#line 1539
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1539
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1540
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__18;
#line 1541
goto label_736;
#line 1541
label_123:
;
#line 1541
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1541
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 1542
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(127), ___nl__im__0));
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
return ___nl__im__21;
#line 1543
goto label_736;
#line 1543
label_150:
;
#line 1543
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(12)));
#line 1543
c_rt_lib0copy(&___nl__im__22, ___nl__im__23);
#line 1544
c_rt_lib0move(&___nl__im__24, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__24;
#line 1545
goto label_736;
#line 1545
label_180:
;
#line 1545
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1545
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1546
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(560), ___nl__im__0));
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
return ___nl__im__27;
#line 1547
goto label_736;
#line 1547
label_213:
;
#line 1547
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1547
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 1548
c_rt_lib0move(&___nl__im__31,___get_global_string_const(32));
#line 1548
___nl__bool__30 = c_rt_lib0eq(___nl__im__28, ___nl__im__31);
#line 1548
c_rt_lib0clear(&___nl__im__31);
#line 1548
___nl__bool__30 = !___nl__bool__30;
#line 1548
if(___nl__bool__30){ goto label_255;}
#line 1549
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
#line 1549
c_rt_lib0clear(&___nl__im__0);
#line 1549
c_rt_lib0clear(&___nl__im__1);
#line 1549
//clear ___nl__bool__2;
#line 1549
c_rt_lib0clear(&___nl__im__3);
#line 1549
c_rt_lib0clear(&___nl__im__4);
#line 1549
c_rt_lib0clear(&___nl__im__5);
#line 1549
c_rt_lib0clear(&___nl__im__6);
#line 1549
c_rt_lib0clear(&___nl__im__7);
#line 1549
c_rt_lib0clear(&___nl__im__8);
#line 1549
c_rt_lib0clear(&___nl__im__9);
#line 1549
c_rt_lib0clear(&___nl__im__10);
#line 1549
c_rt_lib0clear(&___nl__im__11);
#line 1549
c_rt_lib0clear(&___nl__im__12);
#line 1549
c_rt_lib0clear(&___nl__im__13);
#line 1549
c_rt_lib0clear(&___nl__im__14);
#line 1549
c_rt_lib0clear(&___nl__im__15);
#line 1549
c_rt_lib0clear(&___nl__im__16);
#line 1549
c_rt_lib0clear(&___nl__im__17);
#line 1549
c_rt_lib0clear(&___nl__im__18);
#line 1549
c_rt_lib0clear(&___nl__im__19);
#line 1549
c_rt_lib0clear(&___nl__im__20);
#line 1549
c_rt_lib0clear(&___nl__im__21);
#line 1549
c_rt_lib0clear(&___nl__im__22);
#line 1549
c_rt_lib0clear(&___nl__im__23);
#line 1549
c_rt_lib0clear(&___nl__im__24);
#line 1549
c_rt_lib0clear(&___nl__im__25);
#line 1549
c_rt_lib0clear(&___nl__im__26);
#line 1549
c_rt_lib0clear(&___nl__im__27);
#line 1549
c_rt_lib0clear(&___nl__im__28);
#line 1549
c_rt_lib0clear(&___nl__im__29);
#line 1549
//clear ___nl__bool__30;
#line 1549
return ___nl__im__32;
#line 1550
goto label_470;
#line 1550
label_255:
;
#line 1550
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1550
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(6));
#line 1550
c_rt_lib0clear(&___nl__im__33);
#line 1550
___nl__bool__30 = !___nl__bool__30;
#line 1550
if(___nl__bool__30){ goto label_296;}
#line 1551
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(557), ___nl__im__0));
#line 1551
c_rt_lib0clear(&___nl__im__0);
#line 1551
c_rt_lib0clear(&___nl__im__1);
#line 1551
//clear ___nl__bool__2;
#line 1551
c_rt_lib0clear(&___nl__im__3);
#line 1551
c_rt_lib0clear(&___nl__im__4);
#line 1551
c_rt_lib0clear(&___nl__im__5);
#line 1551
c_rt_lib0clear(&___nl__im__6);
#line 1551
c_rt_lib0clear(&___nl__im__7);
#line 1551
c_rt_lib0clear(&___nl__im__8);
#line 1551
c_rt_lib0clear(&___nl__im__9);
#line 1551
c_rt_lib0clear(&___nl__im__10);
#line 1551
c_rt_lib0clear(&___nl__im__11);
#line 1551
c_rt_lib0clear(&___nl__im__12);
#line 1551
c_rt_lib0clear(&___nl__im__13);
#line 1551
c_rt_lib0clear(&___nl__im__14);
#line 1551
c_rt_lib0clear(&___nl__im__15);
#line 1551
c_rt_lib0clear(&___nl__im__16);
#line 1551
c_rt_lib0clear(&___nl__im__17);
#line 1551
c_rt_lib0clear(&___nl__im__18);
#line 1551
c_rt_lib0clear(&___nl__im__19);
#line 1551
c_rt_lib0clear(&___nl__im__20);
#line 1551
c_rt_lib0clear(&___nl__im__21);
#line 1551
c_rt_lib0clear(&___nl__im__22);
#line 1551
c_rt_lib0clear(&___nl__im__23);
#line 1551
c_rt_lib0clear(&___nl__im__24);
#line 1551
c_rt_lib0clear(&___nl__im__25);
#line 1551
c_rt_lib0clear(&___nl__im__26);
#line 1551
c_rt_lib0clear(&___nl__im__27);
#line 1551
c_rt_lib0clear(&___nl__im__28);
#line 1551
c_rt_lib0clear(&___nl__im__29);
#line 1551
//clear ___nl__bool__30;
#line 1551
c_rt_lib0clear(&___nl__im__32);
#line 1551
return ___nl__im__34;
#line 1552
goto label_470;
#line 1552
label_296:
;
#line 1552
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1552
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(2));
#line 1552
c_rt_lib0clear(&___nl__im__35);
#line 1552
___nl__bool__30 = !___nl__bool__30;
#line 1552
if(___nl__bool__30){ goto label_338;}
#line 1553
c_rt_lib0move(&___nl__im__36, c_rt_lib0ov_mk_arg(___get_global_string_const(127), ___nl__im__0));
#line 1553
c_rt_lib0clear(&___nl__im__0);
#line 1553
c_rt_lib0clear(&___nl__im__1);
#line 1553
//clear ___nl__bool__2;
#line 1553
c_rt_lib0clear(&___nl__im__3);
#line 1553
c_rt_lib0clear(&___nl__im__4);
#line 1553
c_rt_lib0clear(&___nl__im__5);
#line 1553
c_rt_lib0clear(&___nl__im__6);
#line 1553
c_rt_lib0clear(&___nl__im__7);
#line 1553
c_rt_lib0clear(&___nl__im__8);
#line 1553
c_rt_lib0clear(&___nl__im__9);
#line 1553
c_rt_lib0clear(&___nl__im__10);
#line 1553
c_rt_lib0clear(&___nl__im__11);
#line 1553
c_rt_lib0clear(&___nl__im__12);
#line 1553
c_rt_lib0clear(&___nl__im__13);
#line 1553
c_rt_lib0clear(&___nl__im__14);
#line 1553
c_rt_lib0clear(&___nl__im__15);
#line 1553
c_rt_lib0clear(&___nl__im__16);
#line 1553
c_rt_lib0clear(&___nl__im__17);
#line 1553
c_rt_lib0clear(&___nl__im__18);
#line 1553
c_rt_lib0clear(&___nl__im__19);
#line 1553
c_rt_lib0clear(&___nl__im__20);
#line 1553
c_rt_lib0clear(&___nl__im__21);
#line 1553
c_rt_lib0clear(&___nl__im__22);
#line 1553
c_rt_lib0clear(&___nl__im__23);
#line 1553
c_rt_lib0clear(&___nl__im__24);
#line 1553
c_rt_lib0clear(&___nl__im__25);
#line 1553
c_rt_lib0clear(&___nl__im__26);
#line 1553
c_rt_lib0clear(&___nl__im__27);
#line 1553
c_rt_lib0clear(&___nl__im__28);
#line 1553
c_rt_lib0clear(&___nl__im__29);
#line 1553
//clear ___nl__bool__30;
#line 1553
c_rt_lib0clear(&___nl__im__32);
#line 1553
c_rt_lib0clear(&___nl__im__34);
#line 1553
return ___nl__im__36;
#line 1554
goto label_470;
#line 1554
label_338:
;
#line 1554
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1554
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__37, ___get_global_string_const(13));
#line 1554
c_rt_lib0clear(&___nl__im__37);
#line 1554
___nl__bool__30 = !___nl__bool__30;
#line 1554
if(___nl__bool__30){ goto label_381;}
#line 1555
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(560), ___nl__im__0));
#line 1555
c_rt_lib0clear(&___nl__im__0);
#line 1555
c_rt_lib0clear(&___nl__im__1);
#line 1555
//clear ___nl__bool__2;
#line 1555
c_rt_lib0clear(&___nl__im__3);
#line 1555
c_rt_lib0clear(&___nl__im__4);
#line 1555
c_rt_lib0clear(&___nl__im__5);
#line 1555
c_rt_lib0clear(&___nl__im__6);
#line 1555
c_rt_lib0clear(&___nl__im__7);
#line 1555
c_rt_lib0clear(&___nl__im__8);
#line 1555
c_rt_lib0clear(&___nl__im__9);
#line 1555
c_rt_lib0clear(&___nl__im__10);
#line 1555
c_rt_lib0clear(&___nl__im__11);
#line 1555
c_rt_lib0clear(&___nl__im__12);
#line 1555
c_rt_lib0clear(&___nl__im__13);
#line 1555
c_rt_lib0clear(&___nl__im__14);
#line 1555
c_rt_lib0clear(&___nl__im__15);
#line 1555
c_rt_lib0clear(&___nl__im__16);
#line 1555
c_rt_lib0clear(&___nl__im__17);
#line 1555
c_rt_lib0clear(&___nl__im__18);
#line 1555
c_rt_lib0clear(&___nl__im__19);
#line 1555
c_rt_lib0clear(&___nl__im__20);
#line 1555
c_rt_lib0clear(&___nl__im__21);
#line 1555
c_rt_lib0clear(&___nl__im__22);
#line 1555
c_rt_lib0clear(&___nl__im__23);
#line 1555
c_rt_lib0clear(&___nl__im__24);
#line 1555
c_rt_lib0clear(&___nl__im__25);
#line 1555
c_rt_lib0clear(&___nl__im__26);
#line 1555
c_rt_lib0clear(&___nl__im__27);
#line 1555
c_rt_lib0clear(&___nl__im__28);
#line 1555
c_rt_lib0clear(&___nl__im__29);
#line 1555
//clear ___nl__bool__30;
#line 1555
c_rt_lib0clear(&___nl__im__32);
#line 1555
c_rt_lib0clear(&___nl__im__34);
#line 1555
c_rt_lib0clear(&___nl__im__36);
#line 1555
return ___nl__im__38;
#line 1556
goto label_470;
#line 1556
label_381:
;
#line 1556
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1556
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(4));
#line 1556
c_rt_lib0clear(&___nl__im__39);
#line 1556
___nl__bool__30 = !___nl__bool__30;
#line 1556
if(___nl__bool__30){ goto label_425;}
#line 1557
c_rt_lib0move(&___nl__im__40, c_rt_lib0ov_mk_arg(___get_global_string_const(128), ___nl__im__0));
#line 1557
c_rt_lib0clear(&___nl__im__0);
#line 1557
c_rt_lib0clear(&___nl__im__1);
#line 1557
//clear ___nl__bool__2;
#line 1557
c_rt_lib0clear(&___nl__im__3);
#line 1557
c_rt_lib0clear(&___nl__im__4);
#line 1557
c_rt_lib0clear(&___nl__im__5);
#line 1557
c_rt_lib0clear(&___nl__im__6);
#line 1557
c_rt_lib0clear(&___nl__im__7);
#line 1557
c_rt_lib0clear(&___nl__im__8);
#line 1557
c_rt_lib0clear(&___nl__im__9);
#line 1557
c_rt_lib0clear(&___nl__im__10);
#line 1557
c_rt_lib0clear(&___nl__im__11);
#line 1557
c_rt_lib0clear(&___nl__im__12);
#line 1557
c_rt_lib0clear(&___nl__im__13);
#line 1557
c_rt_lib0clear(&___nl__im__14);
#line 1557
c_rt_lib0clear(&___nl__im__15);
#line 1557
c_rt_lib0clear(&___nl__im__16);
#line 1557
c_rt_lib0clear(&___nl__im__17);
#line 1557
c_rt_lib0clear(&___nl__im__18);
#line 1557
c_rt_lib0clear(&___nl__im__19);
#line 1557
c_rt_lib0clear(&___nl__im__20);
#line 1557
c_rt_lib0clear(&___nl__im__21);
#line 1557
c_rt_lib0clear(&___nl__im__22);
#line 1557
c_rt_lib0clear(&___nl__im__23);
#line 1557
c_rt_lib0clear(&___nl__im__24);
#line 1557
c_rt_lib0clear(&___nl__im__25);
#line 1557
c_rt_lib0clear(&___nl__im__26);
#line 1557
c_rt_lib0clear(&___nl__im__27);
#line 1557
c_rt_lib0clear(&___nl__im__28);
#line 1557
c_rt_lib0clear(&___nl__im__29);
#line 1557
//clear ___nl__bool__30;
#line 1557
c_rt_lib0clear(&___nl__im__32);
#line 1557
c_rt_lib0clear(&___nl__im__34);
#line 1557
c_rt_lib0clear(&___nl__im__36);
#line 1557
c_rt_lib0clear(&___nl__im__38);
#line 1557
return ___nl__im__40;
#line 1558
goto label_470;
#line 1558
label_425:
;
#line 1558
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__28));
#line 1558
___nl__bool__30 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(9));
#line 1558
c_rt_lib0clear(&___nl__im__41);
#line 1558
___nl__bool__30 = !___nl__bool__30;
#line 1558
if(___nl__bool__30){ goto label_470;}
#line 1559
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
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
c_rt_lib0clear(&___nl__im__32);
#line 1559
c_rt_lib0clear(&___nl__im__34);
#line 1559
c_rt_lib0clear(&___nl__im__36);
#line 1559
c_rt_lib0clear(&___nl__im__38);
#line 1559
c_rt_lib0clear(&___nl__im__40);
#line 1559
return ___nl__im__42;
#line 1560
goto label_470;
#line 1560
label_470:
;
#line 1560
//clear ___nl__bool__30;
#line 1560
c_rt_lib0clear(&___nl__im__32);
#line 1560
c_rt_lib0clear(&___nl__im__34);
#line 1560
c_rt_lib0clear(&___nl__im__36);
#line 1560
c_rt_lib0clear(&___nl__im__38);
#line 1560
c_rt_lib0clear(&___nl__im__40);
#line 1560
c_rt_lib0clear(&___nl__im__42);
#line 1561
c_rt_lib0move(&___nl__im__43, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
return ___nl__im__43;
#line 1562
goto label_736;
#line 1562
label_511:
;
#line 1563
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(403)));
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
c_rt_lib0clear(&___nl__im__43);
#line 1563
return ___nl__im__44;
#line 1564
goto label_736;
#line 1564
label_546:
;
#line 1565
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__43);
#line 1565
c_rt_lib0clear(&___nl__im__44);
#line 1565
return ___nl__im__45;
#line 1566
goto label_736;
#line 1566
label_582:
;
#line 1567
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_none(___get_global_string_const(33)));
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
c_rt_lib0clear(&___nl__im__43);
#line 1567
c_rt_lib0clear(&___nl__im__44);
#line 1567
c_rt_lib0clear(&___nl__im__45);
#line 1567
return ___nl__im__46;
#line 1568
goto label_736;
#line 1568
label_619:
;
#line 1569
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__43);
#line 1569
c_rt_lib0clear(&___nl__im__44);
#line 1569
c_rt_lib0clear(&___nl__im__45);
#line 1569
c_rt_lib0clear(&___nl__im__46);
#line 1569
return ___nl__im__47;
#line 1570
goto label_736;
#line 1570
label_657:
;
#line 1571
c_rt_lib0move(&___nl__im__48, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__43);
#line 1571
c_rt_lib0clear(&___nl__im__44);
#line 1571
c_rt_lib0clear(&___nl__im__45);
#line 1571
c_rt_lib0clear(&___nl__im__46);
#line 1571
c_rt_lib0clear(&___nl__im__47);
#line 1571
return ___nl__im__48;
#line 1572
goto label_736;
#line 1572
label_696:
;
#line 1573
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_none(___get_global_string_const(131)));
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
c_rt_lib0clear(&___nl__im__44);
#line 1573
c_rt_lib0clear(&___nl__im__45);
#line 1573
c_rt_lib0clear(&___nl__im__46);
#line 1573
c_rt_lib0clear(&___nl__im__47);
#line 1573
c_rt_lib0clear(&___nl__im__48);
#line 1573
return ___nl__im__49;
#line 1574
goto label_736;
#line 1574
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
INT  ___nl__int__107 = 0;
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
ImmT  ___nl__im__119 = NULL;
ImmT * ___nl__im_ptr__120 = NULL;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
INT  ___nl__int__124 = 0;
INT  ___nl__int__125 = 0;
INT  ___nl__int__126 = 0;
bool  ___nl__bool__127 = false;
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
INT  ___nl__int__138 = 0;
INT  ___nl__int__139 = 0;
INT  ___nl__int__140 = 0;
bool  ___nl__bool__141 = false;
INT  ___nl__int__142 = 0;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
ImmT  ___nl__im__145 = NULL;
ImmT  ___nl__im__146 = NULL;
ImmT  ___nl__im__147 = NULL;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT * ___nl__im_ptr__150 = NULL;
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
INT  ___nl__int__162 = 0;
INT  ___nl__int__163 = 0;
bool  ___nl__bool__164 = false;
INT  ___nl__int__165 = 0;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
ImmT * ___nl__im_ptr__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__im__175 = NULL;
ImmT  ___nl__im__176 = NULL;
ImmT  ___nl__im__177 = NULL;
ImmT  ___nl__im__178 = NULL;
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
bool  ___nl__bool__181 = false;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
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
#line 1578
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(220)));
#line 1578
___nl__im_ptr__4 = &((*___ref___rec__2).debug0field);
#line 1578
c_rt_lib0copy(&___nl__im__5, ___nl__im__3);
#line 1578
c_rt_lib0hash_set_value_dec(___nl__im_ptr__4, ___get_global_string_const(549), ___nl__im__5);
#line 1578
___nl__im_ptr__4 = NULL;
#line 1578
c_rt_lib0clear(&___nl__im__3);
#line 1578
c_rt_lib0clear(&___nl__im__5);
#line 1579
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1579
___nl__im_ptr__10 = &((*___ref___rec__2).logic0field);
#line 1579
c_rt_lib0copy(&___nl__im__9, (*___nl__im_ptr__10));
#line 1579
___nl__im_ptr__10 = NULL;
#line 1579
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(416)));
#line 1579
c_rt_lib0clear(&___nl__im__9);
#line 1579
___nl__bool__6 = tct0is_own_type(___nl__im__7, ___nl__im__8);
#line 1579
c_rt_lib0clear(&___nl__im__7);
#line 1579
c_rt_lib0clear(&___nl__im__8);
#line 1579
___nl__bool__6 = !___nl__bool__6;
#line 1579
___nl__bool__6 = !___nl__bool__6;
#line 1579
if(___nl__bool__6){ goto label_25;}
#line 1580
c_rt_lib0delete(translator_priv0print_val(___nl__im__0, ___nl__im__1, ___ref___rec__2));
#line 1581
c_rt_lib0clear(&___nl__im__0);
#line 1581
c_rt_lib0clear(&___nl__im__1);
#line 1581
//clear ___nl__bool__6;
#line 1581
return NULL;
#line 1582
goto label_25;
#line 1582
label_25:
;
#line 1582
//clear ___nl__bool__6;
#line 1583
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1583
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(221));
#line 1583
if(___nl__bool__12){ goto label_65;}
#line 1585
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(404));
#line 1585
if(___nl__bool__12){ goto label_72;}
#line 1587
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(33));
#line 1587
if(___nl__bool__12){ goto label_78;}
#line 1589
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1006));
#line 1589
if(___nl__bool__12){ goto label_85;}
#line 1591
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1007));
#line 1591
if(___nl__bool__12){ goto label_91;}
#line 1593
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(560));
#line 1593
if(___nl__bool__12){ goto label_97;}
#line 1614
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(505));
#line 1614
if(___nl__bool__12){ goto label_192;}
#line 1616
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1004));
#line 1616
if(___nl__bool__12){ goto label_198;}
#line 1618
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(234));
#line 1618
if(___nl__bool__12){ goto label_204;}
#line 1620
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1008));
#line 1620
if(___nl__bool__12){ goto label_210;}
#line 1622
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(965));
#line 1622
if(___nl__bool__12){ goto label_216;}
#line 1624
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(229));
#line 1624
if(___nl__bool__12){ goto label_222;}
#line 1632
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(230));
#line 1632
if(___nl__bool__12){ goto label_278;}
#line 1658
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(985));
#line 1658
if(___nl__bool__12){ goto label_457;}
#line 1660
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1009));
#line 1660
if(___nl__bool__12){ goto label_461;}
#line 1662
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1010));
#line 1662
if(___nl__bool__12){ goto label_467;}
#line 1664
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__11, ___get_global_string_const(1011));
#line 1664
if(___nl__bool__12){ goto label_473;}
#line 1664
c_rt_lib0move(&___nl__im__13,___get_global_string_const(15));
#line 1664
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__11));
#line 1664
nl_die_arg(___nl__im__13);
#line 1583
label_65:
;
#line 1583
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(221)));
#line 1583
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 1584
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__14));
#line 1584
c_rt_lib0delete(translator_priv0load_const(___nl__im__16, ___nl__im__1, ___ref___rec__2));
#line 1584
c_rt_lib0clear(&___nl__im__16);
#line 1585
goto label_479;
#line 1585
label_72:
;
#line 1585
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(404)));
#line 1585
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1586
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1586
nl_die_arg(___nl__im__19);
#line 1587
goto label_479;
#line 1587
label_78:
;
#line 1587
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(33)));
#line 1587
___nl__bool__20 = c_rt_lib0check_true_native(___nl__im__21);
#line 1588
c_rt_lib0move(&___nl__im__22, c_rt_lib0bool_to_nl_native(___nl__bool__20));
#line 1588
c_rt_lib0delete(translator_priv0load_const(___nl__im__22, ___nl__im__1, ___ref___rec__2));
#line 1588
c_rt_lib0clear(&___nl__im__22);
#line 1589
goto label_479;
#line 1589
label_85:
;
#line 1589
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1006)));
#line 1589
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1590
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 1590
nl_die_arg(___nl__im__25);
#line 1591
goto label_479;
#line 1591
label_91:
;
#line 1591
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1007)));
#line 1591
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1592
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 1592
nl_die_arg(___nl__im__28);
#line 1593
goto label_479;
#line 1593
label_97:
;
#line 1593
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(560)));
#line 1593
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1596
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(505)));
#line 1596
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__35, ___get_global_string_const(218)));
#line 1596
c_rt_lib0clear(&___nl__im__35);
#line 1596
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__34, ___get_global_string_const(985));
#line 1596
c_rt_lib0clear(&___nl__im__34);
#line 1596
___nl__bool__33 = !___nl__bool__33;
#line 1596
if(___nl__bool__33){ goto label_110;}
#line 1597
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_none(___get_global_string_const(350)));
#line 1598
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_none(___get_global_string_const(8)));
#line 1599
goto label_172;
#line 1599
label_110:
;
#line 1600
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1600
___nl__im_ptr__41 = &((*___ref___rec__2).logic0field);
#line 1600
c_rt_lib0copy(&___nl__im__40, (*___nl__im_ptr__41));
#line 1600
___nl__im_ptr__41 = NULL;
#line 1600
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(416)));
#line 1600
c_rt_lib0clear(&___nl__im__40);
#line 1600
c_rt_lib0move(&___nl__im__37, translator_priv0unwrap_ref(___nl__im__38, ___nl__im__39));
#line 1600
c_rt_lib0clear(&___nl__im__38);
#line 1600
c_rt_lib0clear(&___nl__im__39);
#line 1600
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1600
___nl__im_ptr__46 = &((*___ref___rec__2).logic0field);
#line 1600
c_rt_lib0copy(&___nl__im__45, (*___nl__im_ptr__46));
#line 1600
___nl__im_ptr__46 = NULL;
#line 1600
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__45, ___get_global_string_const(416)));
#line 1600
c_rt_lib0clear(&___nl__im__45);
#line 1600
c_rt_lib0move(&___nl__im__42, translator_priv0unwrap_ref(___nl__im__43, ___nl__im__44));
#line 1600
c_rt_lib0clear(&___nl__im__43);
#line 1600
c_rt_lib0clear(&___nl__im__44);
#line 1600
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__42, ___get_global_string_const(13)));
#line 1600
c_rt_lib0clear(&___nl__im__37);
#line 1600
c_rt_lib0clear(&___nl__im__42);
#line 1601
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(166)));
#line 1601
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value(___nl__im__36, ___nl__im__48));
#line 1601
c_rt_lib0clear(&___nl__im__48);
#line 1601
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(166)));
#line 1601
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value(___nl__im__36, ___nl__im__50));
#line 1601
c_rt_lib0clear(&___nl__im__50);
#line 1601
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__49, ___get_global_string_const(27)));
#line 1601
c_rt_lib0clear(&___nl__im__47);
#line 1601
c_rt_lib0clear(&___nl__im__49);
#line 1602
___nl__im_ptr__55 = &((*___ref___rec__2).logic0field);
#line 1602
c_rt_lib0copy(&___nl__im__54, (*___nl__im_ptr__55));
#line 1602
___nl__im_ptr__55 = NULL;
#line 1602
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__54, ___get_global_string_const(416)));
#line 1602
c_rt_lib0clear(&___nl__im__54);
#line 1602
c_rt_lib0move(&___nl__im__52, translator_priv0var_type_to_reg_type(___nl__im__32, ___nl__im__53));
#line 1602
c_rt_lib0clear(&___nl__im__53);
#line 1602
c_rt_lib0move(&___nl__im__51, translator_priv0new_register(___ref___rec__2, ___nl__im__52));
#line 1602
c_rt_lib0clear(&___nl__im__52);
#line 1603
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(505)));
#line 1603
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__56, ___nl__im__51, ___ref___rec__2));
#line 1603
c_rt_lib0clear(&___nl__im__56);
#line 1604
___nl__bool__57 = false;
#line 1604
___nl__im_ptr__58 = &((*___ref___rec__2).logic0field);
#line 1604
c_rt_lib0move(&___nl__im__59,___get_global_string_const(1324));
#line 1604
c_rt_lib0move(&___nl__im__59, c_rt_lib0get_ref_hash((*___nl__im_ptr__58), ___nl__im__59));
#line 1604
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__51, ___get_global_string_const(217)));
#line 1604
___nl__int__61 = getIntFromImm(___nl__im__62);
#line 1604
c_rt_lib0clear(&___nl__im__62);
#line 1604
c_rt_lib0move(&___nl__im__60, c_rt_lib0bool_to_nl_native(___nl__bool__57));
#line 1604
c_rt_lib0array_set(&___nl__im__59, ___nl__int__61, ___nl__im__60);
#line 1604
c_rt_lib0move(&___nl__string__63,___get_global_string_const(1324));
#line 1604
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__58, ___nl__string__63, ___nl__im__59));
#line 1604
___nl__im_ptr__58 = NULL;
#line 1604
//clear ___nl__bool__57;
#line 1604
c_rt_lib0clear(&___nl__im__59);
#line 1604
c_rt_lib0clear(&___nl__im__60);
#line 1604
//clear ___nl__int__61;
#line 1604
c_rt_lib0clear(&___nl__string__63);
#line 1605
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(277), ___nl__im__51));
#line 1606
goto label_172;
#line 1606
label_172:
;
#line 1606
//clear ___nl__bool__33;
#line 1606
c_rt_lib0clear(&___nl__im__36);
#line 1606
c_rt_lib0clear(&___nl__im__51);
#line 1610
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(166)));
#line 1611
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1611
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(166)));
#line 1611
___nl__int__67 = translator_priv0get_label_number(___ref___rec__2, ___nl__im__68, ___nl__im__69);
#line 1611
c_rt_lib0clear(&___nl__im__68);
#line 1611
c_rt_lib0clear(&___nl__im__69);
#line 1611
c_rt_lib0move(&___nl__im__70, c_rt_lib0int_new(___nl__int__67));
#line 1611
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_mk(5, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__31, ___get_global_string_const(579), ___nl__im__66, ___get_global_string_const(564), ___nl__im__70, ___get_global_string_const(581), ___nl__im__32));
#line 1611
c_rt_lib0clear(&___nl__im__66);
#line 1611
//clear ___nl__int__67;
#line 1611
c_rt_lib0clear(&___nl__im__70);
#line 1611
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(245), ___nl__im__65));
#line 1611
c_rt_lib0clear(&___nl__im__65);
#line 1611
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__64));
#line 1611
c_rt_lib0clear(&___nl__im__64);
#line 1614
goto label_479;
#line 1614
label_192:
;
#line 1614
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(505)));
#line 1614
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 1615
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 1615
nl_die_arg(___nl__im__73);
#line 1616
goto label_479;
#line 1616
label_198:
;
#line 1616
c_rt_lib0move(&___nl__im__75, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1004)));
#line 1616
c_rt_lib0copy(&___nl__im__74, ___nl__im__75);
#line 1617
c_rt_lib0move(&___nl__im__76, c_rt_lib0array_mk(0));
#line 1617
nl_die_arg(___nl__im__76);
#line 1618
goto label_479;
#line 1618
label_204:
;
#line 1618
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(234)));
#line 1618
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 1619
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_mk(0));
#line 1619
nl_die_arg(___nl__im__79);
#line 1620
goto label_479;
#line 1620
label_210:
;
#line 1620
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1008)));
#line 1620
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1621
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(0));
#line 1621
nl_die_arg(___nl__im__82);
#line 1622
goto label_479;
#line 1622
label_216:
;
#line 1622
c_rt_lib0move(&___nl__im__84, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(965)));
#line 1622
c_rt_lib0copy(&___nl__im__83, ___nl__im__84);
#line 1623
c_rt_lib0move(&___nl__im__85, c_rt_lib0array_mk(0));
#line 1623
nl_die_arg(___nl__im__85);
#line 1624
goto label_479;
#line 1624
label_222:
;
#line 1624
c_rt_lib0move(&___nl__im__87, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(229)));
#line 1624
c_rt_lib0copy(&___nl__im__86, ___nl__im__87);
#line 1625
c_rt_lib0move(&___nl__im__90, c_rt_lib0array_mk(0));
#line 1625
c_rt_lib0move(&___nl__im__89, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__90));
#line 1625
c_rt_lib0clear(&___nl__im__90);
#line 1625
c_rt_lib0move(&___nl__im__88, c_rt_lib0ov_mk_arg(___get_global_string_const(229), ___nl__im__89));
#line 1625
c_rt_lib0clear(&___nl__im__89);
#line 1625
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__88));
#line 1625
c_rt_lib0clear(&___nl__im__88);
#line 1626
c_rt_lib0move(&___nl__im__93, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1626
___nl__im_ptr__96 = &((*___ref___rec__2).logic0field);
#line 1626
c_rt_lib0copy(&___nl__im__95, (*___nl__im_ptr__96));
#line 1626
___nl__im_ptr__96 = NULL;
#line 1626
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__95, ___get_global_string_const(416)));
#line 1626
c_rt_lib0clear(&___nl__im__95);
#line 1626
c_rt_lib0move(&___nl__im__92, translator_priv0unwrap_ref(___nl__im__93, ___nl__im__94));
#line 1626
c_rt_lib0clear(&___nl__im__93);
#line 1626
c_rt_lib0clear(&___nl__im__94);
#line 1626
c_rt_lib0move(&___nl__im__98, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1626
___nl__im_ptr__101 = &((*___ref___rec__2).logic0field);
#line 1626
c_rt_lib0copy(&___nl__im__100, (*___nl__im_ptr__101));
#line 1626
___nl__im_ptr__101 = NULL;
#line 1626
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__100, ___get_global_string_const(416)));
#line 1626
c_rt_lib0clear(&___nl__im__100);
#line 1626
c_rt_lib0move(&___nl__im__97, translator_priv0unwrap_ref(___nl__im__98, ___nl__im__99));
#line 1626
c_rt_lib0clear(&___nl__im__98);
#line 1626
c_rt_lib0clear(&___nl__im__99);
#line 1626
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__97, ___get_global_string_const(2)));
#line 1626
c_rt_lib0clear(&___nl__im__92);
#line 1626
c_rt_lib0clear(&___nl__im__97);
#line 1627
___nl__int__103 = 0;
#line 1627
___nl__int__104 = 1;
#line 1627
___nl__int__105 = c_rt_lib0array_len(___nl__im__86);
#line 1627
label_256:
;
#line 1627
___nl__int__107 = ___nl__int__103 >= ___nl__int__105;
#line 1627
___nl__bool__106 = ___nl__int__107;
#line 1627
if(___nl__bool__106){ goto label_276;}
#line 1627
c_rt_lib0move(&___nl__im__108, c_rt_lib0array_get(___nl__im__86, ___nl__int__103));
#line 1627
c_rt_lib0copy(&___nl__im__102, ___nl__im__108);
#line 1628
___nl__im_ptr__113 = &((*___ref___rec__2).logic0field);
#line 1628
c_rt_lib0copy(&___nl__im__112, (*___nl__im_ptr__113));
#line 1628
___nl__im_ptr__113 = NULL;
#line 1628
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__112, ___get_global_string_const(416)));
#line 1628
c_rt_lib0clear(&___nl__im__112);
#line 1628
c_rt_lib0move(&___nl__im__110, translator_priv0var_type_to_reg_type(___nl__im__91, ___nl__im__111));
#line 1628
c_rt_lib0clear(&___nl__im__111);
#line 1628
c_rt_lib0move(&___nl__im__109, translator_priv0new_register(___ref___rec__2, ___nl__im__110));
#line 1628
c_rt_lib0clear(&___nl__im__110);
#line 1629
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__102, ___nl__im__109, ___ref___rec__2));
#line 1630
c_rt_lib0delete(translator_priv0print_array_push(___nl__im__1, ___nl__im__109, ___ref___rec__2));
#line 1630
c_rt_lib0clear(&___nl__im__102);
#line 1631
___nl__int__103 = ___nl__int__103 + ___nl__int__104;
#line 1631
goto label_256;
#line 1631
label_276:
;
#line 1632
goto label_479;
#line 1632
label_278:
;
#line 1632
c_rt_lib0move(&___nl__im__115, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(230)));
#line 1632
c_rt_lib0copy(&___nl__im__114, ___nl__im__115);
#line 1633
c_rt_lib0move(&___nl__im__117, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(204)));
#line 1633
___nl__im_ptr__120 = &((*___ref___rec__2).logic0field);
#line 1633
c_rt_lib0copy(&___nl__im__119, (*___nl__im_ptr__120));
#line 1633
___nl__im_ptr__120 = NULL;
#line 1633
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__119, ___get_global_string_const(416)));
#line 1633
c_rt_lib0clear(&___nl__im__119);
#line 1633
c_rt_lib0move(&___nl__im__116, translator_priv0unwrap_ref(___nl__im__117, ___nl__im__118));
#line 1633
c_rt_lib0clear(&___nl__im__117);
#line 1633
c_rt_lib0clear(&___nl__im__118);
#line 1634
___nl__bool__121 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(6));
#line 1634
___nl__bool__121 = !___nl__bool__121;
#line 1634
if(___nl__bool__121){ goto label_364;}
#line 1635
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_mk(0));
#line 1636
___nl__int__124 = 0;
#line 1636
___nl__int__125 = 1;
#line 1636
___nl__int__126 = c_rt_lib0array_len(___nl__im__114);
#line 1636
label_297:
;
#line 1636
___nl__int__128 = ___nl__int__124 >= ___nl__int__126;
#line 1636
___nl__bool__127 = ___nl__int__128;
#line 1636
if(___nl__bool__127){ goto label_317;}
#line 1636
c_rt_lib0move(&___nl__im__129, c_rt_lib0array_get(___nl__im__114, ___nl__int__124));
#line 1636
c_rt_lib0copy(&___nl__im__123, ___nl__im__129);
#line 1636
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_string_const(575)));
#line 1636
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__132, ___get_global_string_const(218)));
#line 1636
c_rt_lib0clear(&___nl__im__132);
#line 1636
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__123, ___get_global_string_const(575)));
#line 1636
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(218)));
#line 1636
c_rt_lib0clear(&___nl__im__134);
#line 1636
c_rt_lib0move(&___nl__im__130, c_rt_lib0priv_as(___nl__im__133, ___get_global_string_const(1007)));
#line 1636
c_rt_lib0clear(&___nl__im__131);
#line 1636
c_rt_lib0clear(&___nl__im__133);
#line 1636
c_rt_lib0array_push(&___nl__im__122, ___nl__im__130);
#line 1636
c_rt_lib0clear(&___nl__im__130);
#line 1636
c_rt_lib0clear(&___nl__im__123);
#line 1636
___nl__int__124 = ___nl__int__124 + ___nl__int__125;
#line 1636
goto label_297;
#line 1636
label_317:
;
#line 1637
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(764), ___nl__im__122));
#line 1637
c_rt_lib0move(&___nl__im__135, c_rt_lib0ov_mk_arg(___get_global_string_const(231), ___nl__im__136));
#line 1637
c_rt_lib0clear(&___nl__im__136);
#line 1637
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__135));
#line 1637
c_rt_lib0clear(&___nl__im__135);
#line 1638
___nl__int__138 = 0;
#line 1638
___nl__int__139 = 1;
#line 1638
___nl__int__140 = c_rt_lib0array_len(___nl__im__114);
#line 1638
label_326:
;
#line 1638
___nl__int__142 = ___nl__int__138 >= ___nl__int__140;
#line 1638
___nl__bool__141 = ___nl__int__142;
#line 1638
if(___nl__bool__141){ goto label_362;}
#line 1638
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_get(___nl__im__114, ___nl__int__138));
#line 1638
c_rt_lib0copy(&___nl__im__137, ___nl__im__143);
#line 1639
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(223)));
#line 1639
c_rt_lib0move(&___nl__im__146, c_rt_lib0hash_get_value_dec(___nl__im__147, ___get_global_string_const(204)));
#line 1639
c_rt_lib0clear(&___nl__im__147);
#line 1639
___nl__im_ptr__150 = &((*___ref___rec__2).logic0field);
#line 1639
c_rt_lib0copy(&___nl__im__149, (*___nl__im_ptr__150));
#line 1639
___nl__im_ptr__150 = NULL;
#line 1639
c_rt_lib0move(&___nl__im__148, c_rt_lib0hash_get_value_dec(___nl__im__149, ___get_global_string_const(416)));
#line 1639
c_rt_lib0clear(&___nl__im__149);
#line 1639
c_rt_lib0move(&___nl__im__145, translator_priv0var_type_to_reg_type(___nl__im__146, ___nl__im__148));
#line 1639
c_rt_lib0clear(&___nl__im__146);
#line 1639
c_rt_lib0clear(&___nl__im__148);
#line 1639
c_rt_lib0move(&___nl__im__144, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__145));
#line 1639
c_rt_lib0clear(&___nl__im__145);
#line 1640
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(575)));
#line 1640
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__153, ___get_global_string_const(218)));
#line 1640
c_rt_lib0clear(&___nl__im__153);
#line 1640
c_rt_lib0move(&___nl__im__155, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(575)));
#line 1640
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__155, ___get_global_string_const(218)));
#line 1640
c_rt_lib0clear(&___nl__im__155);
#line 1640
c_rt_lib0move(&___nl__im__151, c_rt_lib0priv_as(___nl__im__154, ___get_global_string_const(1007)));
#line 1640
c_rt_lib0clear(&___nl__im__152);
#line 1640
c_rt_lib0clear(&___nl__im__154);
#line 1641
c_rt_lib0delete(translator_priv0use_field(___nl__im__144, ___nl__im__1, ___nl__im__151, ___ref___rec__2));
#line 1642
c_rt_lib0move(&___nl__im__156, c_rt_lib0hash_get_value_dec(___nl__im__137, ___get_global_string_const(223)));
#line 1642
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__156, ___nl__im__144, ___ref___rec__2));
#line 1642
c_rt_lib0clear(&___nl__im__156);
#line 1643
c_rt_lib0delete(translator_priv0release_field(___nl__im__144, ___nl__im__1, ___nl__im__151, ___ref___rec__2));
#line 1643
c_rt_lib0clear(&___nl__im__137);
#line 1644
___nl__int__138 = ___nl__int__138 + ___nl__int__139;
#line 1644
goto label_326;
#line 1644
label_362:
;
#line 1645
goto label_427;
#line 1645
label_364:
;
#line 1645
___nl__bool__121 = c_rt_lib0priv_is(___nl__im__116, ___get_global_string_const(4));
#line 1645
___nl__bool__121 = !___nl__bool__121;
#line 1645
if(___nl__bool__121){ goto label_423;}
#line 1646
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(0));
#line 1646
c_rt_lib0move(&___nl__im__158, c_rt_lib0hash_mk(2, ___get_global_string_const(222), ___nl__im__1, ___get_global_string_const(73), ___nl__im__159));
#line 1646
c_rt_lib0clear(&___nl__im__159);
#line 1646
c_rt_lib0move(&___nl__im__157, c_rt_lib0ov_mk_arg(___get_global_string_const(230), ___nl__im__158));
#line 1646
c_rt_lib0clear(&___nl__im__158);
#line 1646
c_rt_lib0delete(translator_priv0print(___ref___rec__2, ___nl__im__157));
#line 1646
c_rt_lib0clear(&___nl__im__157);
#line 1647
___nl__int__161 = 0;
#line 1647
___nl__int__162 = 1;
#line 1647
___nl__int__163 = c_rt_lib0array_len(___nl__im__114);
#line 1647
label_378:
;
#line 1647
___nl__int__165 = ___nl__int__161 >= ___nl__int__163;
#line 1647
___nl__bool__164 = ___nl__int__165;
#line 1647
if(___nl__bool__164){ goto label_421;}
#line 1647
c_rt_lib0move(&___nl__im__166, c_rt_lib0array_get(___nl__im__114, ___nl__int__161));
#line 1647
c_rt_lib0copy(&___nl__im__160, ___nl__im__166);
#line 1648
c_rt_lib0move(&___nl__im__170, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_string_const(223)));
#line 1648
c_rt_lib0move(&___nl__im__169, c_rt_lib0hash_get_value_dec(___nl__im__170, ___get_global_string_const(204)));
#line 1648
c_rt_lib0clear(&___nl__im__170);
#line 1648
___nl__im_ptr__173 = &((*___ref___rec__2).logic0field);
#line 1648
c_rt_lib0copy(&___nl__im__172, (*___nl__im_ptr__173));
#line 1648
___nl__im_ptr__173 = NULL;
#line 1648
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__172, ___get_global_string_const(416)));
#line 1648
c_rt_lib0clear(&___nl__im__172);
#line 1648
c_rt_lib0move(&___nl__im__168, translator_priv0var_type_to_reg_type(___nl__im__169, ___nl__im__171));
#line 1648
c_rt_lib0clear(&___nl__im__169);
#line 1648
c_rt_lib0clear(&___nl__im__171);
#line 1648
c_rt_lib0move(&___nl__im__167, translator_priv0new_reference_register(___ref___rec__2, ___nl__im__168));
#line 1648
c_rt_lib0clear(&___nl__im__168);
#line 1649
c_rt_lib0move(&___nl__im__175, c_rt_lib0ov_mk_none(___get_global_string_const(404)));
#line 1649
c_rt_lib0move(&___nl__im__174, translator_priv0new_register(___ref___rec__2, ___nl__im__175));
#line 1649
c_rt_lib0clear(&___nl__im__175);
#line 1650
c_rt_lib0move(&___nl__im__178, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_string_const(575)));
#line 1650
c_rt_lib0move(&___nl__im__177, c_rt_lib0hash_get_value_dec(___nl__im__178, ___get_global_string_const(218)));
#line 1650
c_rt_lib0clear(&___nl__im__178);
#line 1650
c_rt_lib0move(&___nl__im__180, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_string_const(575)));
#line 1650
c_rt_lib0move(&___nl__im__179, c_rt_lib0hash_get_value_dec(___nl__im__180, ___get_global_string_const(218)));
#line 1650
c_rt_lib0clear(&___nl__im__180);
#line 1650
c_rt_lib0move(&___nl__im__176, c_rt_lib0priv_as(___nl__im__179, ___get_global_string_const(1007)));
#line 1650
c_rt_lib0clear(&___nl__im__177);
#line 1650
c_rt_lib0clear(&___nl__im__179);
#line 1650
c_rt_lib0delete(translator_priv0load_const(___nl__im__176, ___nl__im__174, ___ref___rec__2));
#line 1650
c_rt_lib0clear(&___nl__im__176);
#line 1651
___nl__bool__181 = true;
#line 1651
c_rt_lib0delete(translator_priv0use_hash_index(___nl__im__167, ___nl__im__1, ___nl__im__174, ___nl__bool__181, ___ref___rec__2));
#line 1651
//clear ___nl__bool__181;
#line 1652
c_rt_lib0move(&___nl__im__182, c_rt_lib0hash_get_value_dec(___nl__im__160, ___get_global_string_const(223)));
#line 1652
c_rt_lib0delete(translator_priv0print_val_init(___nl__im__182, ___nl__im__167, ___ref___rec__2));
#line 1652
c_rt_lib0clear(&___nl__im__182);
#line 1653
c_rt_lib0delete(translator_priv0release_hash_index(___nl__im__167, ___nl__im__1, ___nl__im__174, ___ref___rec__2));
#line 1653
c_rt_lib0clear(&___nl__im__160);
#line 1654
___nl__int__161 = ___nl__int__161 + ___nl__int__162;
#line 1654
goto label_378;
#line 1654
label_421:
;
#line 1655
goto label_427;
#line 1655
label_423:
;
#line 1656
c_rt_lib0move(&___nl__im__183, c_rt_lib0array_mk(0));
#line 1656
nl_die_arg(___nl__im__183);
#line 1657
goto label_427;
#line 1657
label_427:
;
#line 1657
//clear ___nl__bool__121;
#line 1657
c_rt_lib0clear(&___nl__im__122);
#line 1657
c_rt_lib0clear(&___nl__im__123);
#line 1657
//clear ___nl__int__124;
#line 1657
//clear ___nl__int__125;
#line 1657
//clear ___nl__int__126;
#line 1657
//clear ___nl__bool__127;
#line 1657
//clear ___nl__int__128;
#line 1657
c_rt_lib0clear(&___nl__im__129);
#line 1657
c_rt_lib0clear(&___nl__im__137);
#line 1657
//clear ___nl__int__138;
#line 1657
//clear ___nl__int__139;
#line 1657
//clear ___nl__int__140;
#line 1657
//clear ___nl__bool__141;
#line 1657
//clear ___nl__int__142;
#line 1657
c_rt_lib0clear(&___nl__im__143);
#line 1657
c_rt_lib0clear(&___nl__im__144);
#line 1657
c_rt_lib0clear(&___nl__im__151);
#line 1657
c_rt_lib0clear(&___nl__im__160);
#line 1657
//clear ___nl__int__161;
#line 1657
//clear ___nl__int__162;
#line 1657
//clear ___nl__int__163;
#line 1657
//clear ___nl__bool__164;
#line 1657
//clear ___nl__int__165;
#line 1657
c_rt_lib0clear(&___nl__im__166);
#line 1657
c_rt_lib0clear(&___nl__im__167);
#line 1657
c_rt_lib0clear(&___nl__im__174);
#line 1657
c_rt_lib0clear(&___nl__im__183);
#line 1658
goto label_479;
#line 1658
label_457:
;
#line 1659
c_rt_lib0move(&___nl__im__184, c_rt_lib0array_mk(0));
#line 1659
nl_die_arg(___nl__im__184);
#line 1660
goto label_479;
#line 1660
label_461:
;
#line 1660
c_rt_lib0move(&___nl__im__186, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1009)));
#line 1660
c_rt_lib0copy(&___nl__im__185, ___nl__im__186);
#line 1661
c_rt_lib0move(&___nl__im__187, c_rt_lib0array_mk(0));
#line 1661
nl_die_arg(___nl__im__187);
#line 1662
goto label_479;
#line 1662
label_467:
;
#line 1662
c_rt_lib0move(&___nl__im__189, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1010)));
#line 1662
c_rt_lib0copy(&___nl__im__188, ___nl__im__189);
#line 1663
c_rt_lib0move(&___nl__im__190, c_rt_lib0array_mk(0));
#line 1663
nl_die_arg(___nl__im__190);
#line 1664
goto label_479;
#line 1664
label_473:
;
#line 1664
c_rt_lib0move(&___nl__im__192, c_rt_lib0priv_as(___nl__im__11, ___get_global_string_const(1011)));
#line 1664
c_rt_lib0copy(&___nl__im__191, ___nl__im__192);
#line 1665
c_rt_lib0move(&___nl__im__193, c_rt_lib0array_mk(0));
#line 1665
nl_die_arg(___nl__im__193);
#line 1666
goto label_479;
#line 1666
label_479:
;
#line 1666
c_rt_lib0clear(&___nl__im__0);
#line 1666
c_rt_lib0clear(&___nl__im__1);
#line 1666
c_rt_lib0clear(&___nl__im__11);
#line 1666
//clear ___nl__bool__12;
#line 1666
c_rt_lib0clear(&___nl__im__13);
#line 1666
//clear ___nl__int__14;
#line 1666
c_rt_lib0clear(&___nl__im__15);
#line 1666
c_rt_lib0clear(&___nl__im__17);
#line 1666
c_rt_lib0clear(&___nl__im__18);
#line 1666
c_rt_lib0clear(&___nl__im__19);
#line 1666
//clear ___nl__bool__20;
#line 1666
c_rt_lib0clear(&___nl__im__21);
#line 1666
c_rt_lib0clear(&___nl__im__23);
#line 1666
c_rt_lib0clear(&___nl__im__24);
#line 1666
c_rt_lib0clear(&___nl__im__25);
#line 1666
c_rt_lib0clear(&___nl__im__26);
#line 1666
c_rt_lib0clear(&___nl__im__27);
#line 1666
c_rt_lib0clear(&___nl__im__28);
#line 1666
c_rt_lib0clear(&___nl__im__29);
#line 1666
c_rt_lib0clear(&___nl__im__30);
#line 1666
c_rt_lib0clear(&___nl__im__31);
#line 1666
c_rt_lib0clear(&___nl__im__32);
#line 1666
c_rt_lib0clear(&___nl__im__71);
#line 1666
c_rt_lib0clear(&___nl__im__72);
#line 1666
c_rt_lib0clear(&___nl__im__73);
#line 1666
c_rt_lib0clear(&___nl__im__74);
#line 1666
c_rt_lib0clear(&___nl__im__75);
#line 1666
c_rt_lib0clear(&___nl__im__76);
#line 1666
c_rt_lib0clear(&___nl__im__77);
#line 1666
c_rt_lib0clear(&___nl__im__78);
#line 1666
c_rt_lib0clear(&___nl__im__79);
#line 1666
c_rt_lib0clear(&___nl__im__80);
#line 1666
c_rt_lib0clear(&___nl__im__81);
#line 1666
c_rt_lib0clear(&___nl__im__82);
#line 1666
c_rt_lib0clear(&___nl__im__83);
#line 1666
c_rt_lib0clear(&___nl__im__84);
#line 1666
c_rt_lib0clear(&___nl__im__85);
#line 1666
c_rt_lib0clear(&___nl__im__86);
#line 1666
c_rt_lib0clear(&___nl__im__87);
#line 1666
c_rt_lib0clear(&___nl__im__91);
#line 1666
c_rt_lib0clear(&___nl__im__102);
#line 1666
//clear ___nl__int__103;
#line 1666
//clear ___nl__int__104;
#line 1666
//clear ___nl__int__105;
#line 1666
//clear ___nl__bool__106;
#line 1666
//clear ___nl__int__107;
#line 1666
c_rt_lib0clear(&___nl__im__108);
#line 1666
c_rt_lib0clear(&___nl__im__109);
#line 1666
c_rt_lib0clear(&___nl__im__114);
#line 1666
c_rt_lib0clear(&___nl__im__115);
#line 1666
c_rt_lib0clear(&___nl__im__116);
#line 1666
c_rt_lib0clear(&___nl__im__184);
#line 1666
c_rt_lib0clear(&___nl__im__185);
#line 1666
c_rt_lib0clear(&___nl__im__186);
#line 1666
c_rt_lib0clear(&___nl__im__187);
#line 1666
c_rt_lib0clear(&___nl__im__188);
#line 1666
c_rt_lib0clear(&___nl__im__189);
#line 1666
c_rt_lib0clear(&___nl__im__190);
#line 1666
c_rt_lib0clear(&___nl__im__191);
#line 1666
c_rt_lib0clear(&___nl__im__192);
#line 1666
c_rt_lib0clear(&___nl__im__193);
#line 1666
return NULL;
return NULL;

}

tct0meta_type0type translator_priv0unwrap_ref(tct0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
translator_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 1670
label_0:
;
#line 1670
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1670
___nl__bool__2 = !___nl__bool__2;
#line 1670
if(___nl__bool__2){ goto label_8;}
#line 1671
c_rt_lib0move(&___nl__im__3, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1672
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__3));
#line 1672
c_rt_lib0clear(&___nl__im__3);
#line 1673
goto label_0;
#line 1673
label_8:
;
#line 1674
c_rt_lib0clear(&___nl__im__1);
#line 1674
//clear ___nl__bool__2;
#line 1674
c_rt_lib0clear(&___nl__im__3);
#line 1674
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
#line 1678
___nl__int__3 = 0;
#line 1679
___nl__im_ptr__7 = &((*___ref___rec__0).logic0field);
#line 1679
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1679
___nl__im_ptr__7 = NULL;
#line 1679
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__6, ___get_global_string_const(416)));
#line 1679
c_rt_lib0clear(&___nl__im__6);
#line 1679
c_rt_lib0move(&___nl__im__4, translator_priv0unwrap_ref(___nl__im__1, ___nl__im__5));
#line 1679
c_rt_lib0clear(&___nl__im__5);
#line 1680
___nl__im_ptr__11 = &((*___ref___rec__0).logic0field);
#line 1680
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 1680
___nl__im_ptr__11 = NULL;
#line 1680
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(416)));
#line 1680
c_rt_lib0clear(&___nl__im__10);
#line 1680
___nl__bool__8 = tct0is_own_type(___nl__im__1, ___nl__im__9);
#line 1680
c_rt_lib0clear(&___nl__im__9);
#line 1680
___nl__bool__8 = !___nl__bool__8;
#line 1680
___nl__bool__8 = !___nl__bool__8;
#line 1680
if(___nl__bool__8){ goto label_27;}
#line 1681
___nl__int__12 = 1;
#line 1681
___nl__int__12 = -___nl__int__12;
#line 1681
c_rt_lib0clear(&___nl__im__1);
#line 1681
c_rt_lib0clear(&___nl__im__2);
#line 1681
//clear ___nl__int__3;
#line 1681
c_rt_lib0clear(&___nl__im__4);
#line 1681
//clear ___nl__bool__8;
#line 1681
return ___nl__int__12;
#line 1682
goto label_27;
#line 1682
label_27:
;
#line 1682
//clear ___nl__bool__8;
#line 1682
//clear ___nl__int__12;
#line 1683
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(13)));
#line 1683
c_rt_lib0move(&___nl__im__17, c_rt_lib0init_iter(___nl__im__13));
#line 1683
label_32:
;
#line 1683
___nl__bool__15 = c_rt_lib0is_end_hash(___nl__im__17);
#line 1683
if(___nl__bool__15){ goto label_58;}
#line 1683
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_key_iter(___nl__im__17));
#line 1683
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value(___nl__im__13, ___nl__im__14));
#line 1684
___nl__bool__18 = c_rt_lib0eq(___nl__im__14, ___nl__im__2);
#line 1684
___nl__bool__18 = !___nl__bool__18;
#line 1684
if(___nl__bool__18){ goto label_51;}
#line 1684
c_rt_lib0clear(&___nl__im__1);
#line 1684
c_rt_lib0clear(&___nl__im__2);
#line 1684
c_rt_lib0clear(&___nl__im__4);
#line 1684
c_rt_lib0clear(&___nl__im__13);
#line 1684
c_rt_lib0clear(&___nl__im__14);
#line 1684
//clear ___nl__bool__15;
#line 1684
c_rt_lib0clear(&___nl__im__16);
#line 1684
c_rt_lib0clear(&___nl__im__17);
#line 1684
//clear ___nl__bool__18;
#line 1684
return ___nl__int__3;
#line 1684
goto label_51;
#line 1684
label_51:
;
#line 1684
//clear ___nl__bool__18;
#line 1685
___nl__int__19 = 1;
#line 1685
___nl__int__3 = ___nl__int__3 + ___nl__int__19;
#line 1685
//clear ___nl__int__19;
#line 1686
c_rt_lib0move(&___nl__im__17, c_rt_lib0next_iter(___nl__im__17));
#line 1686
goto label_32;
#line 1686
label_58:
;
#line 1687
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1687
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(6, ___get_global_string_const(1330), ___nl__im__4, ___get_global_string_const(220), ___nl__im__5, ___get_global_string_const(1327), ___nl__im__7, ___get_global_string_const(211), ___nl__im__9, ___get_global_string_const(487), ___nl__im__11, ___get_global_string_const(1329), ___nl__im__13));
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
