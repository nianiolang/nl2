
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "generator_js.h"
#include "array.h"
#include "nl.h"
#include "string.h"
#include "ov.h"
#include "nlasm.h"
#include "ptd.h"
#include "hash.h"
#include "generator_js.h"
#line 1 "generator_js.nl"

static ImmT *__const__f = NULL;
void generator_js_priv0__const__init();
ImmT generator_js_priv0__const__sim(int __nr);
ImmT generator_js_priv0__const__sing(int __nr);

ImmT  generator_js_priv0get_namespace_name();
ImmT  generator_js_priv0print_module_prolog(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0print_module_epilog(ImmT  ___nl__im__0,generator_js0sourcemap_opt0type ___nl__im__1,generator_js0state_t0type* ___ref___im__2);
ImmT  generator_js_priv0print_consts(generator_js0state_t0type* ___ref___im__0);
ImmT  generator_js_priv0get_const_value_aggr(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0get_function_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0get_function_call_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0get_function_call_name_raw(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0escape_string(ImmT  ___nl__im__0);
ImmT  generator_js_priv0get_str_imm(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
bool  generator_js_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0);
ImmT  generator_js_priv0print_function_or_singleton(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0print_singleton(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0print_dyn_function_wrapper(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0print_function(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0get_function_header(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0print_function_registers(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0print_command(nlasm0cmd_t0type ___nl__im__0,nlasm0args_type0type ___nl__im__1,INT * ___ref___int__2,generator_js0state_t0type* ___ref___im__3);
ImmT  generator_js_priv0get_move(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0get_load_const(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,generator_js0state_t0type* ___ref___im__2);
ImmT  generator_js_priv0get_array_push(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0get_array_len(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0get_use_index(nlasm0use_index_t0type ___nl__im__0);
ImmT  generator_js_priv0get_use_hash_index(nlasm0use_hash_index_t0type ___nl__im__0);
ImmT  generator_js_priv0get_hash_init_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0get_hash_next_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0get_hash_get_key_iter(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0get_hash_is_end(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0get_arr(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1);
ImmT  generator_js_priv0imm_call(ImmT  ___nl__im__0);
ImmT  generator_js_priv0get_bin_op(nlasm0bin_op0type ___nl__im__0,INT * ___ref___int__1);
ImmT  generator_js_priv0get_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,nlasm0reg_t0type ___nl__im__3,INT * ___ref___int__4);
ImmT  generator_js_priv0get_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1,INT * ___ref___int__2);
ImmT  generator_js_priv0get_ov_is(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,INT  ___nl__int__3,INT * ___ref___int__4,generator_js0state_t0type* ___ref___im__5);
ImmT  generator_js_priv0process_ref_reg(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,nlasm0reg_t0type ___nl__im__3,INT  ___nl__int__4,INT  ___nl__int__5);
ImmT  generator_js_priv0get_internal_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,INT * ___ref___int__3);
ImmT  generator_js_priv0get_int_call_sim(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  generator_js_priv0get_const_arr(ImmT  ___nl__im__0);
ImmT  generator_js_priv0get_const_hash(ImmT  ___nl__im__0);
ImmT  generator_js_priv0get_const_ov(ImmT  ___nl__im__0);
ImmT  generator_js_priv0get_const_value(ImmT  ___nl__im__0);
ImmT  generator_js_priv0get_goto(INT  ___nl__int__0);
ImmT  generator_js_priv0get_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1);
ImmT  generator_js_priv0get_empty_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1);
ImmT  generator_js_priv0get_register(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0get_register_value(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0get_register_reference(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0reg_suffix(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0get_register_to_assign(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0get_register_value_to_assign(nlasm0reg_t0type ___nl__im__0);
ImmT  generator_js_priv0get_return(nlasm0return0type ___nl__im__0,nlasm0args_type0type ___nl__im__1);
ImmT  generator_js_priv0get_una_op(nlasm0una_op_t0type ___nl__im__0);
ImmT  generator_js_priv0get_im_from_value(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0get_value_from_im(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1);
bool  generator_js_priv0takes_own_arg(nlasm0function_t0type ___nl__im__0);
bool  generator_js_priv0is_own(nlasm0reg_type0type ___nl__im__0);
ImmT  generator_js_priv0print(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0println(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0generate_sourcemap(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0generate_sourcemap_mappings(ImmT  ___nl__im__0);
ImmT  generator_js_priv0number_to_base64_vlq(INT  ___nl__int__0);
ImmT  generator_js_priv0get_base64_vlq_digit(INT * ___ref___int__0,bool  ___nl__bool__1);
ImmT  generator_js_priv0base64_table();


ImmT  generator_js0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_js0state_t");
ImmT  res = generator_js0state_t();
return res;
}
ImmT generator_js0state_t(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(0);
}
ImmT generator_js0state_t0cal() {
generator_js_priv0__const__init();
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
#line 16
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 18
c_rt_lib0move(&___nl__im__6, ptd0ptd_im());
#line 18
c_rt_lib0move(&___nl__im__5, ptd0arr(___nl__im__6));
#line 18
c_rt_lib0clear(&___nl__im__6);
#line 19
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 19
c_rt_lib0move(&___nl__im__7, ptd0hash(___nl__im__8));
#line 19
c_rt_lib0clear(&___nl__im__8);
#line 20
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 20
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_string_const(134), ___nl__im__5, ___get_global_string_const(135), ___nl__im__7, ___get_global_string_const(175), ___nl__im__9));
#line 20
c_rt_lib0clear(&___nl__im__5);
#line 20
c_rt_lib0clear(&___nl__im__7);
#line 20
c_rt_lib0clear(&___nl__im__9);
#line 20
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 20
c_rt_lib0clear(&___nl__im__4);
#line 22
c_rt_lib0move(&___nl__im__10, ptd0string());
#line 23
c_rt_lib0move(&___nl__im__12, c_rt_lib0func_new(generator_js0sourcemap_entry_t0ptr, ___get_global_string_const(734), ___get_global_string_const(735)));
#line 23
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__12));
#line 23
c_rt_lib0move(&___nl__im__11, ptd0arr(___nl__im__12));
#line 23
c_rt_lib0clear(&___nl__im__12);
#line 24
c_rt_lib0move(&___nl__im__13, ptd0int());
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__2, ___get_global_string_const(736), ___nl__im__3, ___get_global_string_const(222), ___nl__im__10, ___get_global_string_const(71), ___nl__im__11, ___get_global_string_const(737), ___nl__im__13));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__10);
#line 24
c_rt_lib0clear(&___nl__im__11);
#line 24
c_rt_lib0clear(&___nl__im__13);
#line 24
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
return ___nl__im__0;
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
return NULL;
return NULL;

}

ImmT  generator_js0sourcemap_opt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_js0sourcemap_opt");
ImmT  res = generator_js0sourcemap_opt();
return res;
}
ImmT generator_js0sourcemap_opt(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(1);
}
ImmT generator_js0sourcemap_opt0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 30
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 31
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 31
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(80), ___nl__im__2, ___get_global_string_const(81), ___nl__im__3));
#line 31
c_rt_lib0clear(&___nl__im__2);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
return ___nl__im__0;
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
return NULL;
return NULL;

}

ImmT  generator_js0sourcemap_entry_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_js0sourcemap_entry_t");
ImmT  res = generator_js0sourcemap_entry_t();
return res;
}
ImmT generator_js0sourcemap_entry_t(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(2);
}
ImmT generator_js0sourcemap_entry_t0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 37
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 38
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 38
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(738), ___nl__im__2, ___get_global_string_const(739), ___nl__im__3));
#line 38
c_rt_lib0clear(&___nl__im__2);
#line 38
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
return ___nl__im__0;
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
return NULL;
return NULL;

}

ImmT generator_js_priv0get_namespace_name(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(3);
}
ImmT generator_js_priv0get_namespace_name0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 43
c_rt_lib0move(&___nl__im__0,___get_global_string_const(740));
#line 43
return ___nl__im__0;
#line 43
c_rt_lib0clear(&___nl__im__0);
#line 43
return NULL;
return NULL;

}

ImmT  generator_js0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "generator_js0generate");
nlasm0result_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
generator_js0sourcemap_opt0type *var2 = &(_tab[2]);
ImmT  res = generator_js0generate(*var0, *var1, *var2);
return res;
}
ImmT  generator_js0generate(nlasm0result_t0type ___nl__im__0,ImmT  ___nl__im__1,generator_js0sourcemap_opt0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_js_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
#line 49
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 50
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 50
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 50
c_rt_lib0move(&___nl__im__8,___get_global_string_const(741));
#line 50
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(134), ___nl__im__6, ___get_global_string_const(135), ___nl__im__7, ___get_global_string_const(175), ___nl__im__8));
#line 50
c_rt_lib0clear(&___nl__im__6);
#line 50
c_rt_lib0clear(&___nl__im__7);
#line 50
c_rt_lib0clear(&___nl__im__8);
#line 51
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 52
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(0));
#line 53
___nl__int__11 = 0;
#line 53
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__11));
#line 53
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__4, ___get_global_string_const(736), ___nl__im__5, ___get_global_string_const(222), ___nl__im__9, ___get_global_string_const(71), ___nl__im__10, ___get_global_string_const(737), ___nl__im__12));
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 53
c_rt_lib0clear(&___nl__im__9);
#line 53
c_rt_lib0clear(&___nl__im__10);
#line 53
//clear ___nl__int__11;
#line 53
c_rt_lib0clear(&___nl__im__12);
#line 56
c_rt_lib0delete(generator_js_priv0print_module_prolog(___nl__im__1, &___nl__im__3));
#line 57
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 57
___nl__int__15 = 0;
#line 57
___nl__int__16 = 1;
#line 57
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 57
label_24:
;
#line 57
___nl__bool__18 = ___nl__int__15 >= ___nl__int__17;
#line 57
if(___nl__bool__18){ goto label_33;}
#line 57
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 57
c_rt_lib0copy(&___nl__im__14, ___nl__im__19);
#line 58
c_rt_lib0delete(generator_js_priv0print_function_or_singleton(___nl__im__14, &___nl__im__3));
#line 58
c_rt_lib0clear(&___nl__im__14);
#line 59
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 59
goto label_24;
#line 59
label_33:
;
#line 60
c_rt_lib0delete(generator_js_priv0print_consts(&___nl__im__3));
#line 61
c_rt_lib0delete(generator_js_priv0print_module_epilog(___nl__im__1, ___nl__im__2, &___nl__im__3));
#line 64
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(66)));
#line 65
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(80));
#line 65
if(___nl__bool__23){ goto label_41;}
#line 65
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 65
goto label_47;
#line 65
label_41:
;
#line 65
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(71)));
#line 65
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(222)));
#line 65
c_rt_lib0move(&___nl__im__22, generator_js_priv0generate_sourcemap(___nl__im__24, ___nl__im__25));
#line 65
c_rt_lib0clear(&___nl__im__24);
#line 65
c_rt_lib0clear(&___nl__im__25);
#line 65
label_47:
;
#line 65
//clear ___nl__bool__23;
#line 65
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_string_const(66), ___nl__im__21, ___get_global_string_const(71), ___nl__im__22));
#line 65
c_rt_lib0clear(&___nl__im__21);
#line 65
c_rt_lib0clear(&___nl__im__22);
#line 65
c_rt_lib0clear(&___nl__im__0);
#line 65
c_rt_lib0clear(&___nl__im__1);
#line 65
c_rt_lib0clear(&___nl__im__2);
#line 65
c_rt_lib0clear(&___nl__im__3);
#line 65
c_rt_lib0clear(&___nl__im__13);
#line 65
c_rt_lib0clear(&___nl__im__14);
#line 65
//clear ___nl__int__15;
#line 65
//clear ___nl__int__16;
#line 65
//clear ___nl__int__17;
#line 65
//clear ___nl__bool__18;
#line 65
c_rt_lib0clear(&___nl__im__19);
#line 65
return ___nl__im__20;
return NULL;

}

ImmT  generator_js_priv0print_module_prolog(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
#line 70
c_rt_lib0move(&___nl__im__4,___get_global_string_const(742));
#line 70
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 70
c_rt_lib0clear(&___nl__im__4);
#line 70
c_rt_lib0move(&___nl__im__5,___get_global_string_const(450));
#line 70
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 70
c_rt_lib0clear(&___nl__im__3);
#line 70
c_rt_lib0clear(&___nl__im__5);
#line 70
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 70
c_rt_lib0clear(&___nl__im__2);
#line 71
c_rt_lib0move(&___nl__im__8,___get_global_string_const(743));
#line 71
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 71
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 71
c_rt_lib0clear(&___nl__im__8);
#line 71
c_rt_lib0clear(&___nl__im__9);
#line 71
c_rt_lib0move(&___nl__im__10,___get_global_string_const(744));
#line 71
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 71
c_rt_lib0clear(&___nl__im__7);
#line 71
c_rt_lib0clear(&___nl__im__10);
#line 71
c_rt_lib0delete(generator_js_priv0println(___nl__im__6, ___ref___im__1));
#line 71
c_rt_lib0clear(&___nl__im__6);
#line 72
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 72
c_rt_lib0move(&___nl__im__15,___get_global_string_const(115));
#line 72
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 72
c_rt_lib0clear(&___nl__im__14);
#line 72
c_rt_lib0clear(&___nl__im__15);
#line 72
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 72
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 72
c_rt_lib0clear(&___nl__im__13);
#line 72
c_rt_lib0clear(&___nl__im__16);
#line 72
c_rt_lib0move(&___nl__im__17,___get_global_string_const(745));
#line 72
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__17));
#line 72
c_rt_lib0clear(&___nl__im__12);
#line 72
c_rt_lib0clear(&___nl__im__17);
#line 72
c_rt_lib0delete(generator_js_priv0println(___nl__im__11, ___ref___im__1));
#line 72
c_rt_lib0clear(&___nl__im__11);
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_module_epilog(ImmT  ___nl__im__0,generator_js0sourcemap_opt0type ___nl__im__1,generator_js0state_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
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
#line 77
c_rt_lib0move(&___nl__im__8,___get_global_string_const(746));
#line 77
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__0));
#line 77
c_rt_lib0clear(&___nl__im__8);
#line 77
c_rt_lib0move(&___nl__im__9,___get_global_string_const(512));
#line 77
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 77
c_rt_lib0clear(&___nl__im__7);
#line 77
c_rt_lib0clear(&___nl__im__9);
#line 77
c_rt_lib0move(&___nl__im__10,___get_global_string_const(477));
#line 77
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 77
c_rt_lib0clear(&___nl__im__6);
#line 77
c_rt_lib0clear(&___nl__im__10);
#line 77
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 77
c_rt_lib0clear(&___nl__im__5);
#line 77
c_rt_lib0move(&___nl__im__11,___get_global_string_const(747));
#line 77
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__11));
#line 77
c_rt_lib0clear(&___nl__im__4);
#line 77
c_rt_lib0clear(&___nl__im__11);
#line 77
c_rt_lib0delete(generator_js_priv0println(___nl__im__3, ___ref___im__2));
#line 77
c_rt_lib0clear(&___nl__im__3);
#line 78
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(80));
#line 78
if(___nl__bool__12){ goto label_26;}
#line 80
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(81));
#line 80
if(___nl__bool__12){ goto label_35;}
#line 80
c_rt_lib0move(&___nl__im__13,___get_global_string_const(15));
#line 80
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__1));
#line 80
nl_die_arg(___nl__im__13);
#line 78
label_26:
;
#line 78
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(80)));
#line 78
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 79
c_rt_lib0move(&___nl__im__17,___get_global_string_const(748));
#line 79
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__14));
#line 79
c_rt_lib0clear(&___nl__im__17);
#line 79
c_rt_lib0delete(generator_js_priv0println(___nl__im__16, ___ref___im__2));
#line 79
c_rt_lib0clear(&___nl__im__16);
#line 80
goto label_37;
#line 80
label_35:
;
#line 81
goto label_37;
#line 81
label_37:
;
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
c_rt_lib0clear(&___nl__im__1);
#line 81
//clear ___nl__bool__12;
#line 81
c_rt_lib0clear(&___nl__im__13);
#line 81
c_rt_lib0clear(&___nl__im__14);
#line 81
c_rt_lib0clear(&___nl__im__15);
#line 81
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_consts(generator_js0state_t0type* ___ref___im__0) {
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
INT  ___nl__int__28 = 0;
#line 85
c_rt_lib0move(&___nl__im__3,___get_global_string_const(742));
#line 85
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(736)));
#line 85
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(175)));
#line 85
c_rt_lib0clear(&___nl__im__5);
#line 85
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 85
c_rt_lib0clear(&___nl__im__3);
#line 85
c_rt_lib0clear(&___nl__im__4);
#line 85
c_rt_lib0move(&___nl__im__6,___get_global_string_const(749));
#line 85
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__6));
#line 85
c_rt_lib0clear(&___nl__im__2);
#line 85
c_rt_lib0clear(&___nl__im__6);
#line 85
c_rt_lib0delete(generator_js_priv0println(___nl__im__1, ___ref___im__0));
#line 85
c_rt_lib0clear(&___nl__im__1);
#line 86
___nl__int__7 = 0;
#line 87
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(736)));
#line 87
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(134)));
#line 87
c_rt_lib0clear(&___nl__im__9);
#line 87
___nl__int__11 = 0;
#line 87
___nl__int__12 = 1;
#line 87
___nl__int__13 = c_rt_lib0array_len(___nl__im__8);
#line 87
label_20:
;
#line 87
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 87
if(___nl__bool__14){ goto label_56;}
#line 87
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__11));
#line 87
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 88
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(736)));
#line 88
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(175)));
#line 88
c_rt_lib0clear(&___nl__im__22);
#line 88
c_rt_lib0move(&___nl__im__23,___get_global_string_const(325));
#line 88
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 88
c_rt_lib0clear(&___nl__im__21);
#line 88
c_rt_lib0clear(&___nl__im__23);
#line 88
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__7));
#line 88
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__string__24));
#line 88
c_rt_lib0clear(&___nl__im__20);
#line 88
c_rt_lib0clear(&___nl__string__24);
#line 88
c_rt_lib0move(&___nl__im__25,___get_global_string_const(526));
#line 88
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__25));
#line 88
c_rt_lib0clear(&___nl__im__19);
#line 88
c_rt_lib0clear(&___nl__im__25);
#line 88
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_const_value(___nl__im__10));
#line 88
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__26));
#line 88
c_rt_lib0clear(&___nl__im__18);
#line 88
c_rt_lib0clear(&___nl__im__26);
#line 88
c_rt_lib0move(&___nl__im__27,___get_global_string_const(450));
#line 88
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__27));
#line 88
c_rt_lib0clear(&___nl__im__17);
#line 88
c_rt_lib0clear(&___nl__im__27);
#line 88
c_rt_lib0delete(generator_js_priv0print(___nl__im__16, ___ref___im__0));
#line 88
c_rt_lib0clear(&___nl__im__16);
#line 89
___nl__int__28 = 1;
#line 89
___nl__int__7 = ___nl__int__7 + ___nl__int__28;
#line 89
//clear ___nl__int__28;
#line 89
c_rt_lib0clear(&___nl__im__10);
#line 90
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 90
goto label_20;
#line 90
label_56:
;
#line 90
//clear ___nl__int__7;
#line 90
c_rt_lib0clear(&___nl__im__8);
#line 90
c_rt_lib0clear(&___nl__im__10);
#line 90
//clear ___nl__int__11;
#line 90
//clear ___nl__int__12;
#line 90
//clear ___nl__int__13;
#line 90
//clear ___nl__bool__14;
#line 90
c_rt_lib0clear(&___nl__im__15);
#line 90
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_const_value_aggr(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__string__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__string__36 = NULL;
ImmT  ___nl__im__37 = NULL;
#line 95
___nl__bool__3 = nl0is_string(___nl__im__0);
#line 95
___nl__bool__3 = !___nl__bool__3;
#line 95
if(___nl__bool__3){ goto label_61;}
#line 96
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 96
c_rt_lib0move(&___nl__im__4, ptd0ensure(___nl__im__5, ___nl__im__0));
#line 96
c_rt_lib0clear(&___nl__im__5);
#line 97
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 97
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(135)));
#line 97
c_rt_lib0clear(&___nl__im__8);
#line 97
___nl__bool__6 = hash0has_key(___nl__im__7, ___nl__im__4);
#line 97
c_rt_lib0clear(&___nl__im__7);
#line 97
___nl__bool__6 = !___nl__bool__6;
#line 97
if(___nl__bool__6){ goto label_21;}
#line 98
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 98
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(135)));
#line 98
c_rt_lib0clear(&___nl__im__10);
#line 98
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__4));
#line 98
___nl__int__2 = getIntFromImm(___nl__im__11);
#line 98
c_rt_lib0clear(&___nl__im__9);
#line 98
c_rt_lib0clear(&___nl__im__11);
#line 99
goto label_58;
#line 99
label_21:
;
#line 100
c_rt_lib0move(&___nl__im__12,___get_global_string_const(736));
#line 100
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__12));
#line 100
c_rt_lib0move(&___nl__im__13,___get_global_string_const(134));
#line 100
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__13));
#line 100
c_rt_lib0array_push(&___nl__im__13, ___nl__im__0);
#line 100
c_rt_lib0move(&___nl__string__14,___get_global_string_const(134));
#line 100
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__14, ___nl__im__13));
#line 100
c_rt_lib0move(&___nl__string__14,___get_global_string_const(736));
#line 100
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__14, ___nl__im__12));
#line 100
c_rt_lib0clear(&___nl__im__12);
#line 100
c_rt_lib0clear(&___nl__im__13);
#line 100
c_rt_lib0clear(&___nl__string__14);
#line 101
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 101
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(134)));
#line 101
c_rt_lib0clear(&___nl__im__17);
#line 101
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 101
c_rt_lib0clear(&___nl__im__16);
#line 101
___nl__int__18 = 1;
#line 101
___nl__int__2 = ___nl__int__15 - ___nl__int__18;
#line 101
//clear ___nl__int__15;
#line 101
//clear ___nl__int__18;
#line 102
c_rt_lib0move(&___nl__im__19,___get_global_string_const(736));
#line 102
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__19));
#line 102
c_rt_lib0move(&___nl__im__20,___get_global_string_const(135));
#line 102
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 102
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__2));
#line 102
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__20, ___nl__im__4, ___nl__im__21));
#line 102
c_rt_lib0move(&___nl__string__22,___get_global_string_const(135));
#line 102
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__22, ___nl__im__20));
#line 102
c_rt_lib0move(&___nl__string__22,___get_global_string_const(736));
#line 102
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__22, ___nl__im__19));
#line 102
c_rt_lib0clear(&___nl__im__19);
#line 102
c_rt_lib0clear(&___nl__im__20);
#line 102
c_rt_lib0clear(&___nl__im__21);
#line 102
c_rt_lib0clear(&___nl__string__22);
#line 103
goto label_58;
#line 103
label_58:
;
#line 103
//clear ___nl__bool__6;
#line 104
goto label_84;
#line 104
label_61:
;
#line 105
c_rt_lib0move(&___nl__im__23,___get_global_string_const(736));
#line 105
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__23));
#line 105
c_rt_lib0move(&___nl__im__24,___get_global_string_const(134));
#line 105
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash(___nl__im__23, ___nl__im__24));
#line 105
c_rt_lib0array_push(&___nl__im__24, ___nl__im__0);
#line 105
c_rt_lib0move(&___nl__string__25,___get_global_string_const(134));
#line 105
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__23, ___nl__string__25, ___nl__im__24));
#line 105
c_rt_lib0move(&___nl__string__25,___get_global_string_const(736));
#line 105
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__25, ___nl__im__23));
#line 105
c_rt_lib0clear(&___nl__im__23);
#line 105
c_rt_lib0clear(&___nl__im__24);
#line 105
c_rt_lib0clear(&___nl__string__25);
#line 106
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 106
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(134)));
#line 106
c_rt_lib0clear(&___nl__im__28);
#line 106
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 106
c_rt_lib0clear(&___nl__im__27);
#line 106
___nl__int__29 = 1;
#line 106
___nl__int__2 = ___nl__int__26 - ___nl__int__29;
#line 106
//clear ___nl__int__26;
#line 106
//clear ___nl__int__29;
#line 107
goto label_84;
#line 107
label_84:
;
#line 107
//clear ___nl__bool__3;
#line 107
c_rt_lib0clear(&___nl__im__4);
#line 108
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(736)));
#line 108
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(175)));
#line 108
c_rt_lib0clear(&___nl__im__34);
#line 108
c_rt_lib0move(&___nl__im__35,___get_global_string_const(325));
#line 108
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 108
c_rt_lib0clear(&___nl__im__33);
#line 108
c_rt_lib0clear(&___nl__im__35);
#line 108
c_rt_lib0move(&___nl__string__36, c_rt_lib0int_to_string(___nl__int__2));
#line 108
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__36));
#line 108
c_rt_lib0clear(&___nl__im__32);
#line 108
c_rt_lib0clear(&___nl__string__36);
#line 108
c_rt_lib0move(&___nl__im__37,___get_global_string_const(326));
#line 108
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__37));
#line 108
c_rt_lib0clear(&___nl__im__31);
#line 108
c_rt_lib0clear(&___nl__im__37);
#line 108
c_rt_lib0clear(&___nl__im__0);
#line 108
//clear ___nl__int__2;
#line 108
return ___nl__im__30;
return NULL;

}

ImmT  generator_js_priv0get_function_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 112
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 112
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(220));
#line 112
if(___nl__bool__3){ goto label_8;}
#line 114
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(475));
#line 114
if(___nl__bool__3){ goto label_23;}
#line 114
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 114
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 114
nl_die_arg(___nl__im__4);
#line 112
label_8:
;
#line 113
c_rt_lib0move(&___nl__im__7,___get_global_string_const(115));
#line 113
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 113
c_rt_lib0clear(&___nl__im__7);
#line 113
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 113
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0clear(&___nl__im__8);
#line 113
c_rt_lib0clear(&___nl__im__0);
#line 113
c_rt_lib0clear(&___nl__im__1);
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
//clear ___nl__bool__3;
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 113
return ___nl__im__5;
#line 114
goto label_37;
#line 114
label_23:
;
#line 115
c_rt_lib0move(&___nl__im__10,___get_global_string_const(750));
#line 115
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 115
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 115
c_rt_lib0clear(&___nl__im__10);
#line 115
c_rt_lib0clear(&___nl__im__11);
#line 115
c_rt_lib0clear(&___nl__im__0);
#line 115
c_rt_lib0clear(&___nl__im__1);
#line 115
c_rt_lib0clear(&___nl__im__2);
#line 115
//clear ___nl__bool__3;
#line 115
c_rt_lib0clear(&___nl__im__4);
#line 115
c_rt_lib0clear(&___nl__im__5);
#line 115
return ___nl__im__9;
#line 116
goto label_37;
#line 116
label_37:
;
#line 116
c_rt_lib0clear(&___nl__im__0);
#line 116
c_rt_lib0clear(&___nl__im__1);
#line 116
c_rt_lib0clear(&___nl__im__2);
#line 116
//clear ___nl__bool__3;
#line 116
c_rt_lib0clear(&___nl__im__4);
#line 116
c_rt_lib0clear(&___nl__im__5);
#line 116
c_rt_lib0clear(&___nl__im__9);
#line 116
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_function_call_name(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 120
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 120
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 120
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(220));
#line 120
if(___nl__bool__4){ goto label_9;}
#line 122
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(475));
#line 122
if(___nl__bool__4){ goto label_12;}
#line 122
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 122
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 122
nl_die_arg(___nl__im__5);
#line 120
label_9:
;
#line 121
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 122
goto label_15;
#line 122
label_12:
;
#line 123
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 124
goto label_15;
#line 124
label_15:
;
#line 125
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 125
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_call_name_raw(___nl__im__7, ___nl__im__2));
#line 125
c_rt_lib0clear(&___nl__im__7);
#line 125
c_rt_lib0clear(&___nl__im__0);
#line 125
c_rt_lib0clear(&___nl__im__1);
#line 125
c_rt_lib0clear(&___nl__im__2);
#line 125
c_rt_lib0clear(&___nl__im__3);
#line 125
//clear ___nl__bool__4;
#line 125
c_rt_lib0clear(&___nl__im__5);
#line 125
return ___nl__im__6;
return NULL;

}

ImmT  generator_js_priv0get_function_call_name_raw(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
#line 129
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 129
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 129
c_rt_lib0clear(&___nl__im__3);
#line 129
___nl__bool__2 = !___nl__bool__2;
#line 129
if(___nl__bool__2){ goto label_13;}
#line 130
c_rt_lib0move(&___nl__im__5,___get_global_string_const(750));
#line 130
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 130
c_rt_lib0clear(&___nl__im__5);
#line 130
c_rt_lib0clear(&___nl__im__0);
#line 130
c_rt_lib0clear(&___nl__im__1);
#line 130
//clear ___nl__bool__2;
#line 130
return ___nl__im__4;
#line 131
goto label_33;
#line 131
label_13:
;
#line 132
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 132
c_rt_lib0move(&___nl__im__11,___get_global_string_const(115));
#line 132
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 132
c_rt_lib0clear(&___nl__im__10);
#line 132
c_rt_lib0clear(&___nl__im__11);
#line 132
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 132
c_rt_lib0clear(&___nl__im__9);
#line 132
c_rt_lib0move(&___nl__im__12,___get_global_string_const(115));
#line 132
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 132
c_rt_lib0clear(&___nl__im__8);
#line 132
c_rt_lib0clear(&___nl__im__12);
#line 132
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 132
c_rt_lib0clear(&___nl__im__7);
#line 132
c_rt_lib0clear(&___nl__im__0);
#line 132
c_rt_lib0clear(&___nl__im__1);
#line 132
//clear ___nl__bool__2;
#line 132
c_rt_lib0clear(&___nl__im__4);
#line 132
return ___nl__im__6;
#line 133
goto label_33;
#line 133
label_33:
;
#line 133
//clear ___nl__bool__2;
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
c_rt_lib0clear(&___nl__im__6);
return NULL;

}

ImmT  generator_js_priv0escape_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
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
#line 137
c_rt_lib0move(&___nl__im__1,___get_global_string_const(114));
#line 137
c_rt_lib0move(&___nl__im__2,___get_global_string_const(334));
#line 137
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 137
c_rt_lib0clear(&___nl__im__1);
#line 137
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0move(&___nl__im__3,___get_global_string_const(290));
#line 138
c_rt_lib0move(&___nl__im__4,___get_global_string_const(335));
#line 138
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 138
c_rt_lib0clear(&___nl__im__3);
#line 138
c_rt_lib0clear(&___nl__im__4);
#line 139
c_rt_lib0move(&___nl__im__5, string0lf());
#line 139
c_rt_lib0move(&___nl__im__6,___get_global_string_const(338));
#line 139
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 139
c_rt_lib0clear(&___nl__im__5);
#line 139
c_rt_lib0clear(&___nl__im__6);
#line 140
c_rt_lib0move(&___nl__im__7, string0r());
#line 140
c_rt_lib0move(&___nl__im__8,___get_global_string_const(339));
#line 140
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 140
c_rt_lib0clear(&___nl__im__7);
#line 140
c_rt_lib0clear(&___nl__im__8);
#line 141
___nl__int__10 = 0;
#line 141
c_rt_lib0move(&___nl__im__9, string0chr(___nl__int__10));
#line 141
//clear ___nl__int__10;
#line 141
c_rt_lib0move(&___nl__im__11,___get_global_string_const(627));
#line 141
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 141
c_rt_lib0clear(&___nl__im__9);
#line 141
c_rt_lib0clear(&___nl__im__11);
#line 142
c_rt_lib0move(&___nl__im__12, string0tab());
#line 142
c_rt_lib0move(&___nl__im__13,___get_global_string_const(621));
#line 142
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__12, ___nl__im__13));
#line 142
c_rt_lib0clear(&___nl__im__12);
#line 142
c_rt_lib0clear(&___nl__im__13);
#line 144
c_rt_lib0move(&___nl__im__16,___get_global_string_const(290));
#line 144
c_rt_lib0move(&___nl__im__18, string0lf());
#line 144
c_rt_lib0move(&___nl__im__19,___get_global_string_const(338));
#line 144
c_rt_lib0move(&___nl__im__17, string0replace(___nl__im__0, ___nl__im__18, ___nl__im__19));
#line 144
c_rt_lib0clear(&___nl__im__18);
#line 144
c_rt_lib0clear(&___nl__im__19);
#line 144
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 144
c_rt_lib0clear(&___nl__im__16);
#line 144
c_rt_lib0clear(&___nl__im__17);
#line 144
c_rt_lib0move(&___nl__im__20,___get_global_string_const(290));
#line 144
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 144
c_rt_lib0clear(&___nl__im__15);
#line 144
c_rt_lib0clear(&___nl__im__20);
#line 144
c_rt_lib0clear(&___nl__im__0);
#line 144
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0get_str_imm(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 148
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_const_value_aggr(___nl__im__0, ___ref___im__1));
#line 148
c_rt_lib0clear(&___nl__im__0);
#line 148
return ___nl__im__2;
return NULL;

}

bool  generator_js_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
bool  ___nl__bool__38 = false;
bool  ___nl__bool__39 = false;
bool  ___nl__bool__40 = false;
#line 152
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 152
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 152
c_rt_lib0clear(&___nl__im__3);
#line 152
___nl__int__4 = 0;
#line 152
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 152
//clear ___nl__int__2;
#line 152
//clear ___nl__int__4;
#line 152
___nl__bool__1 = !___nl__bool__1;
#line 152
if(___nl__bool__1){ goto label_14;}
#line 152
___nl__bool__5 = false;
#line 152
c_rt_lib0clear(&___nl__im__0);
#line 152
//clear ___nl__bool__1;
#line 152
return ___nl__bool__5;
#line 152
goto label_14;
#line 152
label_14:
;
#line 152
//clear ___nl__bool__1;
#line 152
//clear ___nl__bool__5;
#line 153
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 153
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(203));
#line 153
c_rt_lib0clear(&___nl__im__7);
#line 153
___nl__bool__6 = !___nl__bool__6;
#line 153
if(___nl__bool__6){ goto label_27;}
#line 153
___nl__bool__8 = true;
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
//clear ___nl__bool__6;
#line 153
return ___nl__bool__8;
#line 153
goto label_27;
#line 153
label_27:
;
#line 153
//clear ___nl__bool__6;
#line 153
//clear ___nl__bool__8;
#line 154
___nl__bool__9 = false;
#line 155
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(138)));
#line 155
___nl__int__12 = 1;
#line 155
___nl__int__12 = -___nl__int__12;
#line 155
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 155
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(229)));
#line 155
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(215), ___nl__im__11, ___get_global_string_const(228), ___nl__im__13, ___get_global_string_const(361), ___nl__im__14));
#line 155
c_rt_lib0clear(&___nl__im__11);
#line 155
//clear ___nl__int__12;
#line 155
c_rt_lib0clear(&___nl__im__13);
#line 155
c_rt_lib0clear(&___nl__im__14);
#line 156
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 156
___nl__int__17 = 0;
#line 156
___nl__int__18 = 1;
#line 156
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 156
label_45:
;
#line 156
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 156
if(___nl__bool__20){ goto label_209;}
#line 156
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 156
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 157
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(237)));
#line 158
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(243));
#line 158
___nl__bool__23 = !___nl__bool__23;
#line 158
if(___nl__bool__23){ goto label_90;}
#line 159
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(243)));
#line 160
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(279)));
#line 160
c_rt_lib0move(&___nl__im__27,___get_global_string_const(549));
#line 160
___nl__bool__25 = c_rt_lib0eq(___nl__im__26, ___nl__im__27);
#line 160
c_rt_lib0clear(&___nl__im__26);
#line 160
c_rt_lib0clear(&___nl__im__27);
#line 160
___nl__bool__25 = !___nl__bool__25;
#line 160
___nl__bool__25 = !___nl__bool__25;
#line 160
if(___nl__bool__25){ goto label_69;}
#line 160
c_rt_lib0clear(&___nl__im__22);
#line 160
//clear ___nl__bool__23;
#line 160
c_rt_lib0clear(&___nl__im__24);
#line 160
//clear ___nl__bool__25;
#line 160
goto label_206;
#line 160
goto label_69;
#line 160
label_69:
;
#line 160
//clear ___nl__bool__25;
#line 161
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(277)));
#line 161
c_rt_lib0move(&___nl__im__30,___get_global_string_const(415));
#line 161
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 161
c_rt_lib0clear(&___nl__im__29);
#line 161
c_rt_lib0clear(&___nl__im__30);
#line 161
___nl__bool__28 = !___nl__bool__28;
#line 161
___nl__bool__28 = !___nl__bool__28;
#line 161
if(___nl__bool__28){ goto label_85;}
#line 161
c_rt_lib0clear(&___nl__im__22);
#line 161
//clear ___nl__bool__23;
#line 161
c_rt_lib0clear(&___nl__im__24);
#line 161
//clear ___nl__bool__28;
#line 161
goto label_206;
#line 161
goto label_85;
#line 161
label_85:
;
#line 161
//clear ___nl__bool__28;
#line 162
___nl__bool__9 = true;
#line 163
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(233)));
#line 164
goto label_200;
#line 164
label_90:
;
#line 164
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(257));
#line 164
___nl__bool__23 = !___nl__bool__23;
#line 164
if(___nl__bool__23){ goto label_163;}
#line 165
___nl__bool__31 = ___nl__bool__9;
#line 165
___nl__bool__31 = !___nl__bool__31;
#line 165
___nl__bool__31 = !___nl__bool__31;
#line 165
if(___nl__bool__31){ goto label_115;}
#line 165
___nl__bool__32 = false;
#line 165
c_rt_lib0clear(&___nl__im__0);
#line 165
//clear ___nl__bool__9;
#line 165
c_rt_lib0clear(&___nl__im__10);
#line 165
c_rt_lib0clear(&___nl__im__15);
#line 165
c_rt_lib0clear(&___nl__im__16);
#line 165
//clear ___nl__int__17;
#line 165
//clear ___nl__int__18;
#line 165
//clear ___nl__int__19;
#line 165
//clear ___nl__bool__20;
#line 165
c_rt_lib0clear(&___nl__im__21);
#line 165
c_rt_lib0clear(&___nl__im__22);
#line 165
//clear ___nl__bool__23;
#line 165
c_rt_lib0clear(&___nl__im__24);
#line 165
//clear ___nl__bool__31;
#line 165
return ___nl__bool__32;
#line 165
goto label_115;
#line 165
label_115:
;
#line 165
//clear ___nl__bool__31;
#line 165
//clear ___nl__bool__32;
#line 166
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(257)));
#line 167
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(234));
#line 167
___nl__bool__34 = !___nl__bool__34;
#line 167
___nl__bool__34 = !___nl__bool__34;
#line 167
if(___nl__bool__34){ goto label_141;}
#line 167
___nl__bool__35 = false;
#line 167
c_rt_lib0clear(&___nl__im__0);
#line 167
//clear ___nl__bool__9;
#line 167
c_rt_lib0clear(&___nl__im__10);
#line 167
c_rt_lib0clear(&___nl__im__15);
#line 167
c_rt_lib0clear(&___nl__im__16);
#line 167
//clear ___nl__int__17;
#line 167
//clear ___nl__int__18;
#line 167
//clear ___nl__int__19;
#line 167
//clear ___nl__bool__20;
#line 167
c_rt_lib0clear(&___nl__im__21);
#line 167
c_rt_lib0clear(&___nl__im__22);
#line 167
//clear ___nl__bool__23;
#line 167
c_rt_lib0clear(&___nl__im__24);
#line 167
c_rt_lib0clear(&___nl__im__33);
#line 167
//clear ___nl__bool__34;
#line 167
return ___nl__bool__35;
#line 167
goto label_141;
#line 167
label_141:
;
#line 167
//clear ___nl__bool__34;
#line 167
//clear ___nl__bool__35;
#line 168
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(234)));
#line 168
___nl__bool__36 = nlasm0eq_reg(___nl__im__37, ___nl__im__10);
#line 168
c_rt_lib0clear(&___nl__im__37);
#line 168
c_rt_lib0clear(&___nl__im__0);
#line 168
//clear ___nl__bool__9;
#line 168
c_rt_lib0clear(&___nl__im__10);
#line 168
c_rt_lib0clear(&___nl__im__15);
#line 168
c_rt_lib0clear(&___nl__im__16);
#line 168
//clear ___nl__int__17;
#line 168
//clear ___nl__int__18;
#line 168
//clear ___nl__int__19;
#line 168
//clear ___nl__bool__20;
#line 168
c_rt_lib0clear(&___nl__im__21);
#line 168
c_rt_lib0clear(&___nl__im__22);
#line 168
//clear ___nl__bool__23;
#line 168
c_rt_lib0clear(&___nl__im__24);
#line 168
c_rt_lib0clear(&___nl__im__33);
#line 168
return ___nl__bool__36;
#line 169
goto label_200;
#line 169
label_163:
;
#line 169
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(259));
#line 169
___nl__bool__23 = !___nl__bool__23;
#line 169
if(___nl__bool__23){ goto label_168;}
#line 170
goto label_200;
#line 170
label_168:
;
#line 170
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(262));
#line 170
___nl__bool__23 = !___nl__bool__23;
#line 170
if(___nl__bool__23){ goto label_173;}
#line 171
goto label_200;
#line 171
label_173:
;
#line 172
___nl__bool__38 = ___nl__bool__9;
#line 172
___nl__bool__38 = !___nl__bool__38;
#line 172
if(___nl__bool__38){ goto label_196;}
#line 172
___nl__bool__39 = false;
#line 172
c_rt_lib0clear(&___nl__im__0);
#line 172
//clear ___nl__bool__9;
#line 172
c_rt_lib0clear(&___nl__im__10);
#line 172
c_rt_lib0clear(&___nl__im__15);
#line 172
c_rt_lib0clear(&___nl__im__16);
#line 172
//clear ___nl__int__17;
#line 172
//clear ___nl__int__18;
#line 172
//clear ___nl__int__19;
#line 172
//clear ___nl__bool__20;
#line 172
c_rt_lib0clear(&___nl__im__21);
#line 172
c_rt_lib0clear(&___nl__im__22);
#line 172
//clear ___nl__bool__23;
#line 172
c_rt_lib0clear(&___nl__im__24);
#line 172
c_rt_lib0clear(&___nl__im__33);
#line 172
//clear ___nl__bool__36;
#line 172
//clear ___nl__bool__38;
#line 172
return ___nl__bool__39;
#line 172
goto label_196;
#line 172
label_196:
;
#line 172
//clear ___nl__bool__38;
#line 172
//clear ___nl__bool__39;
#line 173
goto label_200;
#line 173
label_200:
;
#line 173
//clear ___nl__bool__23;
#line 173
c_rt_lib0clear(&___nl__im__24);
#line 173
c_rt_lib0clear(&___nl__im__33);
#line 173
//clear ___nl__bool__36;
#line 173
c_rt_lib0clear(&___nl__im__16);
#line 173
label_206:
;
#line 174
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 174
goto label_45;
#line 174
label_209:
;
#line 175
___nl__bool__40 = false;
#line 175
c_rt_lib0clear(&___nl__im__0);
#line 175
//clear ___nl__bool__9;
#line 175
c_rt_lib0clear(&___nl__im__10);
#line 175
c_rt_lib0clear(&___nl__im__15);
#line 175
c_rt_lib0clear(&___nl__im__16);
#line 175
//clear ___nl__int__17;
#line 175
//clear ___nl__int__18;
#line 175
//clear ___nl__int__19;
#line 175
//clear ___nl__bool__20;
#line 175
c_rt_lib0clear(&___nl__im__21);
#line 175
c_rt_lib0clear(&___nl__im__22);
#line 175
return ___nl__bool__40;
return false;

}

ImmT  generator_js_priv0print_function_or_singleton(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
#line 179
___nl__bool__2 = generator_js_priv0is_singleton_use_function(___nl__im__0);
#line 179
___nl__bool__2 = !___nl__bool__2;
#line 179
if(___nl__bool__2){ goto label_5;}
#line 180
c_rt_lib0delete(generator_js_priv0print_singleton(___nl__im__0, ___ref___im__1));
#line 181
goto label_8;
#line 181
label_5:
;
#line 182
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__0, ___ref___im__1));
#line 183
goto label_8;
#line 183
label_8:
;
#line 183
//clear ___nl__bool__2;
#line 185
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 185
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(220));
#line 185
c_rt_lib0clear(&___nl__im__5);
#line 185
___nl__bool__4 = !___nl__bool__3;
#line 185
if(___nl__bool__4){ goto label_17;}
#line 185
___nl__bool__3 = generator_js_priv0takes_own_arg(___nl__im__0);
#line 185
___nl__bool__3 = !___nl__bool__3;
#line 185
label_17:
;
#line 185
//clear ___nl__bool__4;
#line 185
___nl__bool__3 = !___nl__bool__3;
#line 185
if(___nl__bool__3){ goto label_23;}
#line 186
c_rt_lib0delete(generator_js_priv0print_dyn_function_wrapper(___nl__im__0, ___ref___im__1));
#line 187
goto label_23;
#line 187
label_23:
;
#line 187
//clear ___nl__bool__3;
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_singleton(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
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
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
#line 191
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 191
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__3));
#line 191
c_rt_lib0clear(&___nl__im__3);
#line 192
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 193
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(219)));
#line 193
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(475));
#line 193
c_rt_lib0clear(&___nl__im__6);
#line 193
___nl__bool__5 = !___nl__bool__5;
#line 193
if(___nl__bool__5){ goto label_19;}
#line 194
c_rt_lib0move(&___nl__im__8,___get_global_string_const(751));
#line 194
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 194
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 194
c_rt_lib0clear(&___nl__im__8);
#line 194
c_rt_lib0clear(&___nl__im__9);
#line 194
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 194
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(175), ___nl__im__10);
#line 194
c_rt_lib0clear(&___nl__im__7);
#line 194
c_rt_lib0clear(&___nl__im__10);
#line 195
goto label_30;
#line 195
label_19:
;
#line 196
c_rt_lib0move(&___nl__im__12,___get_global_string_const(752));
#line 196
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 196
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 196
c_rt_lib0clear(&___nl__im__12);
#line 196
c_rt_lib0clear(&___nl__im__13);
#line 196
c_rt_lib0copy(&___nl__im__14, ___nl__im__11);
#line 196
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(175), ___nl__im__14);
#line 196
c_rt_lib0clear(&___nl__im__11);
#line 196
c_rt_lib0clear(&___nl__im__14);
#line 197
goto label_30;
#line 197
label_30:
;
#line 197
//clear ___nl__bool__5;
#line 198
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(475)));
#line 198
c_rt_lib0copy(&___nl__im__16, ___nl__im__15);
#line 198
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(219), ___nl__im__16);
#line 198
c_rt_lib0clear(&___nl__im__15);
#line 198
c_rt_lib0clear(&___nl__im__16);
#line 199
c_rt_lib0move(&___nl__im__18,___get_global_string_const(753));
#line 199
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 199
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_function_name(___nl__im__4, ___nl__im__20));
#line 199
c_rt_lib0clear(&___nl__im__20);
#line 199
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 199
c_rt_lib0clear(&___nl__im__18);
#line 199
c_rt_lib0clear(&___nl__im__19);
#line 201
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__4, ___ref___im__1));
#line 202
c_rt_lib0move(&___nl__im__23,___get_global_string_const(742));
#line 202
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__17));
#line 202
c_rt_lib0clear(&___nl__im__23);
#line 202
c_rt_lib0move(&___nl__im__24,___get_global_string_const(450));
#line 202
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 202
c_rt_lib0clear(&___nl__im__22);
#line 202
c_rt_lib0clear(&___nl__im__24);
#line 202
c_rt_lib0delete(generator_js_priv0println(___nl__im__21, ___ref___im__1));
#line 202
c_rt_lib0clear(&___nl__im__21);
#line 203
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 203
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(220));
#line 203
if(___nl__bool__26){ goto label_62;}
#line 205
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(475));
#line 205
if(___nl__bool__26){ goto label_77;}
#line 205
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 205
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 205
nl_die_arg(___nl__im__27);
#line 203
label_62:
;
#line 204
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_namespace_name());
#line 204
c_rt_lib0move(&___nl__im__32,___get_global_string_const(115));
#line 204
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 204
c_rt_lib0clear(&___nl__im__31);
#line 204
c_rt_lib0clear(&___nl__im__32);
#line 204
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__2));
#line 204
c_rt_lib0clear(&___nl__im__30);
#line 204
c_rt_lib0move(&___nl__im__33,___get_global_string_const(754));
#line 204
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 204
c_rt_lib0clear(&___nl__im__29);
#line 204
c_rt_lib0clear(&___nl__im__33);
#line 204
c_rt_lib0delete(generator_js_priv0println(___nl__im__28, ___ref___im__1));
#line 204
c_rt_lib0clear(&___nl__im__28);
#line 205
goto label_88;
#line 205
label_77:
;
#line 206
c_rt_lib0move(&___nl__im__36,___get_global_string_const(755));
#line 206
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__2));
#line 206
c_rt_lib0clear(&___nl__im__36);
#line 206
c_rt_lib0move(&___nl__im__37,___get_global_string_const(756));
#line 206
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__37));
#line 206
c_rt_lib0clear(&___nl__im__35);
#line 206
c_rt_lib0clear(&___nl__im__37);
#line 206
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 206
c_rt_lib0clear(&___nl__im__34);
#line 207
goto label_88;
#line 207
label_88:
;
#line 208
c_rt_lib0move(&___nl__im__40,___get_global_string_const(615));
#line 208
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__17));
#line 208
c_rt_lib0clear(&___nl__im__40);
#line 208
c_rt_lib0move(&___nl__im__41,___get_global_string_const(757));
#line 208
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 208
c_rt_lib0clear(&___nl__im__39);
#line 208
c_rt_lib0clear(&___nl__im__41);
#line 208
c_rt_lib0delete(generator_js_priv0println(___nl__im__38, ___ref___im__1));
#line 208
c_rt_lib0clear(&___nl__im__38);
#line 209
c_rt_lib0move(&___nl__im__45,___get_global_string_const(512));
#line 209
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__17, ___nl__im__45));
#line 209
c_rt_lib0clear(&___nl__im__45);
#line 209
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 209
c_rt_lib0move(&___nl__im__46, generator_js_priv0get_function_call_name(___nl__im__4, ___nl__im__47));
#line 209
c_rt_lib0clear(&___nl__im__47);
#line 209
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 209
c_rt_lib0clear(&___nl__im__44);
#line 209
c_rt_lib0clear(&___nl__im__46);
#line 209
c_rt_lib0move(&___nl__im__48,___get_global_string_const(494));
#line 209
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__48));
#line 209
c_rt_lib0clear(&___nl__im__43);
#line 209
c_rt_lib0clear(&___nl__im__48);
#line 209
c_rt_lib0delete(generator_js_priv0println(___nl__im__42, ___ref___im__1));
#line 209
c_rt_lib0clear(&___nl__im__42);
#line 210
c_rt_lib0move(&___nl__im__49,___get_global_string_const(316));
#line 210
c_rt_lib0delete(generator_js_priv0println(___nl__im__49, ___ref___im__1));
#line 210
c_rt_lib0clear(&___nl__im__49);
#line 211
c_rt_lib0move(&___nl__im__52,___get_global_string_const(518));
#line 211
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__17));
#line 211
c_rt_lib0clear(&___nl__im__52);
#line 211
c_rt_lib0move(&___nl__im__53,___get_global_string_const(450));
#line 211
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__53));
#line 211
c_rt_lib0clear(&___nl__im__51);
#line 211
c_rt_lib0clear(&___nl__im__53);
#line 211
c_rt_lib0delete(generator_js_priv0println(___nl__im__50, ___ref___im__1));
#line 211
c_rt_lib0clear(&___nl__im__50);
#line 212
c_rt_lib0move(&___nl__im__54,___get_global_string_const(316));
#line 212
c_rt_lib0delete(generator_js_priv0println(___nl__im__54, ___ref___im__1));
#line 212
c_rt_lib0clear(&___nl__im__54);
#line 212
c_rt_lib0clear(&___nl__im__0);
#line 212
c_rt_lib0clear(&___nl__im__2);
#line 212
c_rt_lib0clear(&___nl__im__4);
#line 212
c_rt_lib0clear(&___nl__im__17);
#line 212
c_rt_lib0clear(&___nl__im__25);
#line 212
//clear ___nl__bool__26;
#line 212
c_rt_lib0clear(&___nl__im__27);
#line 212
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_dyn_function_wrapper(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
bool  ___nl__bool__11 = false;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
bool  ___nl__bool__28 = false;
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
ImmT  ___nl__string__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__string__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__string__59 = NULL;
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
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
INT  ___nl__int__83 = 0;
INT  ___nl__int__84 = 0;
INT  ___nl__int__85 = 0;
bool  ___nl__bool__86 = false;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
ImmT  ___nl__im__90 = NULL;
ImmT  ___nl__im__91 = NULL;
ImmT  ___nl__im__92 = NULL;
INT  ___nl__int__93 = 0;
INT  ___nl__int__94 = 0;
INT  ___nl__int__95 = 0;
bool  ___nl__bool__96 = false;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
#line 216
___nl__int__2 = 0;
#line 217
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 218
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 219
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 220
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 220
___nl__int__8 = 0;
#line 220
___nl__int__9 = 1;
#line 220
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 220
label_8:
;
#line 220
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 220
if(___nl__bool__11){ goto label_132;}
#line 220
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 220
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 221
___nl__int__14 = 0;
#line 221
___nl__bool__13 = ___nl__int__2 == ___nl__int__14;
#line 221
//clear ___nl__int__14;
#line 221
___nl__bool__13 = !___nl__bool__13;
#line 221
___nl__bool__13 = !___nl__bool__13;
#line 221
if(___nl__bool__13){ goto label_23;}
#line 221
c_rt_lib0move(&___nl__im__15,___get_global_string_const(337));
#line 221
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__15));
#line 221
c_rt_lib0clear(&___nl__im__15);
#line 221
goto label_23;
#line 221
label_23:
;
#line 221
//clear ___nl__bool__13;
#line 222
c_rt_lib0move(&___nl__im__17,___get_global_string_const(288));
#line 222
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__2));
#line 222
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 222
c_rt_lib0clear(&___nl__im__17);
#line 222
c_rt_lib0clear(&___nl__string__18);
#line 222
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__16));
#line 222
c_rt_lib0clear(&___nl__im__16);
#line 223
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(479)));
#line 223
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(215)));
#line 223
c_rt_lib0clear(&___nl__im__21);
#line 223
c_rt_lib0move(&___nl__im__24,___get_global_string_const(758));
#line 223
c_rt_lib0move(&___nl__string__25, c_rt_lib0int_to_string(___nl__int__2));
#line 223
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__string__25));
#line 223
c_rt_lib0clear(&___nl__im__24);
#line 223
c_rt_lib0clear(&___nl__string__25);
#line 223
c_rt_lib0move(&___nl__im__26,___get_global_string_const(331));
#line 223
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 223
c_rt_lib0clear(&___nl__im__23);
#line 223
c_rt_lib0clear(&___nl__im__26);
#line 223
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_value_from_im(___nl__im__20, ___nl__im__22));
#line 223
c_rt_lib0clear(&___nl__im__20);
#line 223
c_rt_lib0clear(&___nl__im__22);
#line 224
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(363)));
#line 224
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(39));
#line 224
if(___nl__bool__28){ goto label_55;}
#line 228
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(234));
#line 228
if(___nl__bool__28){ goto label_106;}
#line 228
c_rt_lib0move(&___nl__im__29,___get_global_string_const(15));
#line 228
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__27));
#line 228
nl_die_arg(___nl__im__29);
#line 224
label_55:
;
#line 225
c_rt_lib0move(&___nl__im__33,___get_global_string_const(759));
#line 225
c_rt_lib0move(&___nl__im__35,___get_global_string_const(39));
#line 225
c_rt_lib0move(&___nl__im__34, generator_js_priv0imm_call(___nl__im__35));
#line 225
c_rt_lib0clear(&___nl__im__35);
#line 225
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 225
c_rt_lib0clear(&___nl__im__33);
#line 225
c_rt_lib0clear(&___nl__im__34);
#line 225
c_rt_lib0move(&___nl__im__36,___get_global_string_const(465));
#line 225
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__36));
#line 225
c_rt_lib0clear(&___nl__im__32);
#line 225
c_rt_lib0clear(&___nl__im__36);
#line 225
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__19));
#line 225
c_rt_lib0clear(&___nl__im__31);
#line 225
c_rt_lib0move(&___nl__im__37,___get_global_string_const(516));
#line 225
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 225
c_rt_lib0clear(&___nl__im__30);
#line 225
c_rt_lib0clear(&___nl__im__37);
#line 226
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(479)));
#line 226
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(215)));
#line 226
c_rt_lib0clear(&___nl__im__40);
#line 226
c_rt_lib0move(&___nl__im__43,___get_global_string_const(288));
#line 226
c_rt_lib0move(&___nl__string__44, c_rt_lib0int_to_string(___nl__int__2));
#line 226
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__string__44));
#line 226
c_rt_lib0clear(&___nl__im__43);
#line 226
c_rt_lib0clear(&___nl__string__44);
#line 226
c_rt_lib0move(&___nl__im__45,___get_global_string_const(760));
#line 226
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 226
c_rt_lib0clear(&___nl__im__42);
#line 226
c_rt_lib0clear(&___nl__im__45);
#line 226
c_rt_lib0move(&___nl__im__38, generator_js_priv0get_im_from_value(___nl__im__39, ___nl__im__41));
#line 226
c_rt_lib0clear(&___nl__im__39);
#line 226
c_rt_lib0clear(&___nl__im__41);
#line 227
c_rt_lib0move(&___nl__im__50,___get_global_string_const(761));
#line 227
c_rt_lib0move(&___nl__string__51, c_rt_lib0int_to_string(___nl__int__2));
#line 227
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__string__51));
#line 227
c_rt_lib0clear(&___nl__im__50);
#line 227
c_rt_lib0clear(&___nl__string__51);
#line 227
c_rt_lib0move(&___nl__im__52,___get_global_string_const(337));
#line 227
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 227
c_rt_lib0clear(&___nl__im__49);
#line 227
c_rt_lib0clear(&___nl__im__52);
#line 227
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__38));
#line 227
c_rt_lib0clear(&___nl__im__48);
#line 227
c_rt_lib0move(&___nl__im__53,___get_global_string_const(516));
#line 227
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__53));
#line 227
c_rt_lib0clear(&___nl__im__47);
#line 227
c_rt_lib0clear(&___nl__im__53);
#line 227
c_rt_lib0array_push(&___nl__im__5, ___nl__im__46);
#line 227
c_rt_lib0clear(&___nl__im__46);
#line 228
goto label_108;
#line 228
label_106:
;
#line 229
goto label_108;
#line 229
label_108:
;
#line 230
c_rt_lib0move(&___nl__im__58,___get_global_string_const(762));
#line 230
c_rt_lib0move(&___nl__string__59, c_rt_lib0int_to_string(___nl__int__2));
#line 230
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__string__59));
#line 230
c_rt_lib0clear(&___nl__im__58);
#line 230
c_rt_lib0clear(&___nl__string__59);
#line 230
c_rt_lib0move(&___nl__im__60,___get_global_string_const(512));
#line 230
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 230
c_rt_lib0clear(&___nl__im__57);
#line 230
c_rt_lib0clear(&___nl__im__60);
#line 230
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__19));
#line 230
c_rt_lib0clear(&___nl__im__56);
#line 230
c_rt_lib0move(&___nl__im__61,___get_global_string_const(450));
#line 230
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__61));
#line 230
c_rt_lib0clear(&___nl__im__55);
#line 230
c_rt_lib0clear(&___nl__im__61);
#line 230
c_rt_lib0array_push(&___nl__im__4, ___nl__im__54);
#line 230
c_rt_lib0clear(&___nl__im__54);
#line 231
___nl__int__62 = 1;
#line 231
___nl__int__2 = ___nl__int__2 + ___nl__int__62;
#line 231
//clear ___nl__int__62;
#line 231
c_rt_lib0clear(&___nl__im__7);
#line 232
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 232
goto label_8;
#line 232
label_132:
;
#line 233
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 233
c_rt_lib0move(&___nl__im__66,___get_global_string_const(763));
#line 233
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 233
c_rt_lib0clear(&___nl__im__65);
#line 233
c_rt_lib0clear(&___nl__im__66);
#line 233
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(175)));
#line 233
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__67));
#line 233
c_rt_lib0clear(&___nl__im__64);
#line 233
c_rt_lib0clear(&___nl__im__67);
#line 234
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 234
c_rt_lib0move(&___nl__im__71, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__72));
#line 234
c_rt_lib0clear(&___nl__im__72);
#line 234
c_rt_lib0move(&___nl__im__73,___get_global_string_const(465));
#line 234
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__73));
#line 234
c_rt_lib0clear(&___nl__im__71);
#line 234
c_rt_lib0clear(&___nl__im__73);
#line 234
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__3));
#line 234
c_rt_lib0clear(&___nl__im__70);
#line 234
c_rt_lib0move(&___nl__im__74,___get_global_string_const(331));
#line 234
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__74));
#line 234
c_rt_lib0clear(&___nl__im__69);
#line 234
c_rt_lib0clear(&___nl__im__74);
#line 236
c_rt_lib0move(&___nl__im__75,___get_global_string_const(36));
#line 236
c_rt_lib0delete(generator_js_priv0println(___nl__im__75, ___ref___im__1));
#line 236
c_rt_lib0clear(&___nl__im__75);
#line 237
c_rt_lib0move(&___nl__im__79, generator_js_priv0get_namespace_name());
#line 237
c_rt_lib0move(&___nl__im__80,___get_global_string_const(115));
#line 237
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__80));
#line 237
c_rt_lib0clear(&___nl__im__79);
#line 237
c_rt_lib0clear(&___nl__im__80);
#line 237
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__63));
#line 237
c_rt_lib0clear(&___nl__im__78);
#line 237
c_rt_lib0move(&___nl__im__81,___get_global_string_const(764));
#line 237
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__81));
#line 237
c_rt_lib0clear(&___nl__im__77);
#line 237
c_rt_lib0clear(&___nl__im__81);
#line 237
c_rt_lib0delete(generator_js_priv0println(___nl__im__76, ___ref___im__1));
#line 237
c_rt_lib0clear(&___nl__im__76);
#line 238
___nl__int__83 = 0;
#line 238
___nl__int__84 = 1;
#line 238
___nl__int__85 = c_rt_lib0array_len(___nl__im__4);
#line 238
label_174:
;
#line 238
___nl__bool__86 = ___nl__int__83 >= ___nl__int__85;
#line 238
if(___nl__bool__86){ goto label_183;}
#line 238
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__4, ___nl__int__83));
#line 238
c_rt_lib0copy(&___nl__im__82, ___nl__im__87);
#line 239
c_rt_lib0delete(generator_js_priv0println(___nl__im__82, ___ref___im__1));
#line 239
c_rt_lib0clear(&___nl__im__82);
#line 240
___nl__int__83 = ___nl__int__83 + ___nl__int__84;
#line 240
goto label_174;
#line 240
label_183:
;
#line 241
c_rt_lib0move(&___nl__im__89,___get_global_string_const(765));
#line 241
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(425)));
#line 241
c_rt_lib0move(&___nl__im__90, generator_js_priv0get_im_from_value(___nl__im__91, ___nl__im__68));
#line 241
c_rt_lib0clear(&___nl__im__91);
#line 241
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__90));
#line 241
c_rt_lib0clear(&___nl__im__89);
#line 241
c_rt_lib0clear(&___nl__im__90);
#line 241
c_rt_lib0delete(generator_js_priv0println(___nl__im__88, ___ref___im__1));
#line 241
c_rt_lib0clear(&___nl__im__88);
#line 242
___nl__int__93 = 0;
#line 242
___nl__int__94 = 1;
#line 242
___nl__int__95 = c_rt_lib0array_len(___nl__im__5);
#line 242
label_196:
;
#line 242
___nl__bool__96 = ___nl__int__93 >= ___nl__int__95;
#line 242
if(___nl__bool__96){ goto label_205;}
#line 242
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__5, ___nl__int__93));
#line 242
c_rt_lib0copy(&___nl__im__92, ___nl__im__97);
#line 243
c_rt_lib0delete(generator_js_priv0println(___nl__im__92, ___ref___im__1));
#line 243
c_rt_lib0clear(&___nl__im__92);
#line 244
___nl__int__93 = ___nl__int__93 + ___nl__int__94;
#line 244
goto label_196;
#line 244
label_205:
;
#line 245
c_rt_lib0move(&___nl__im__98,___get_global_string_const(766));
#line 245
c_rt_lib0delete(generator_js_priv0println(___nl__im__98, ___ref___im__1));
#line 245
c_rt_lib0clear(&___nl__im__98);
#line 246
c_rt_lib0move(&___nl__im__99,___get_global_string_const(316));
#line 246
c_rt_lib0delete(generator_js_priv0println(___nl__im__99, ___ref___im__1));
#line 246
c_rt_lib0clear(&___nl__im__99);
#line 246
c_rt_lib0clear(&___nl__im__0);
#line 246
//clear ___nl__int__2;
#line 246
c_rt_lib0clear(&___nl__im__3);
#line 246
c_rt_lib0clear(&___nl__im__4);
#line 246
c_rt_lib0clear(&___nl__im__5);
#line 246
c_rt_lib0clear(&___nl__im__6);
#line 246
c_rt_lib0clear(&___nl__im__7);
#line 246
//clear ___nl__int__8;
#line 246
//clear ___nl__int__9;
#line 246
//clear ___nl__int__10;
#line 246
//clear ___nl__bool__11;
#line 246
c_rt_lib0clear(&___nl__im__12);
#line 246
c_rt_lib0clear(&___nl__im__19);
#line 246
c_rt_lib0clear(&___nl__im__27);
#line 246
//clear ___nl__bool__28;
#line 246
c_rt_lib0clear(&___nl__im__29);
#line 246
c_rt_lib0clear(&___nl__im__38);
#line 246
c_rt_lib0clear(&___nl__im__63);
#line 246
c_rt_lib0clear(&___nl__im__68);
#line 246
c_rt_lib0clear(&___nl__im__82);
#line 246
//clear ___nl__int__83;
#line 246
//clear ___nl__int__84;
#line 246
//clear ___nl__int__85;
#line 246
//clear ___nl__bool__86;
#line 246
c_rt_lib0clear(&___nl__im__87);
#line 246
c_rt_lib0clear(&___nl__im__92);
#line 246
//clear ___nl__int__93;
#line 246
//clear ___nl__int__94;
#line 246
//clear ___nl__int__95;
#line 246
//clear ___nl__bool__96;
#line 246
c_rt_lib0clear(&___nl__im__97);
#line 246
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_function(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
INT  ___nl__int__24 = 0;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
bool  ___nl__bool__27 = false;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
#line 250
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 250
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 250
c_rt_lib0clear(&___nl__im__2);
#line 251
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(222)));
#line 251
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_function_header(___nl__im__0, ___nl__im__5));
#line 251
c_rt_lib0clear(&___nl__im__5);
#line 251
c_rt_lib0move(&___nl__im__6,___get_global_string_const(544));
#line 251
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 251
c_rt_lib0clear(&___nl__im__4);
#line 251
c_rt_lib0clear(&___nl__im__6);
#line 251
c_rt_lib0delete(generator_js_priv0println(___nl__im__3, ___ref___im__1));
#line 251
c_rt_lib0clear(&___nl__im__3);
#line 252
c_rt_lib0delete(generator_js_priv0print_function_registers(___nl__im__0, ___ref___im__1));
#line 253
c_rt_lib0move(&___nl__im__7,___get_global_string_const(767));
#line 253
c_rt_lib0delete(generator_js_priv0println(___nl__im__7, ___ref___im__1));
#line 253
c_rt_lib0clear(&___nl__im__7);
#line 254
c_rt_lib0move(&___nl__im__8,___get_global_string_const(71));
#line 254
c_rt_lib0move(&___nl__im__8, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__8));
#line 254
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(737)));
#line 254
___nl__int__11 = getIntFromImm(___nl__im__12);
#line 254
c_rt_lib0clear(&___nl__im__12);
#line 254
___nl__int__13 = 1;
#line 254
___nl__int__10 = ___nl__int__11 + ___nl__int__13;
#line 254
//clear ___nl__int__11;
#line 254
//clear ___nl__int__13;
#line 254
c_rt_lib0move(&___nl__im__14, c_rt_lib0int_new(___nl__int__10));
#line 254
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(161)));
#line 254
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 254
c_rt_lib0clear(&___nl__im__16);
#line 254
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__15));
#line 254
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_mk(2, ___get_global_string_const(738), ___nl__im__14, ___get_global_string_const(739), ___nl__im__17));
#line 254
//clear ___nl__int__10;
#line 254
c_rt_lib0clear(&___nl__im__14);
#line 254
//clear ___nl__int__15;
#line 254
c_rt_lib0clear(&___nl__im__17);
#line 254
c_rt_lib0array_push(&___nl__im__8, ___nl__im__9);
#line 254
c_rt_lib0move(&___nl__string__18,___get_global_string_const(71));
#line 254
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__18, ___nl__im__8));
#line 254
c_rt_lib0clear(&___nl__im__8);
#line 254
c_rt_lib0clear(&___nl__im__9);
#line 254
c_rt_lib0clear(&___nl__string__18);
#line 255
c_rt_lib0move(&___nl__im__19,___get_global_string_const(768));
#line 255
c_rt_lib0delete(generator_js_priv0println(___nl__im__19, ___ref___im__1));
#line 255
c_rt_lib0clear(&___nl__im__19);
#line 256
c_rt_lib0move(&___nl__im__20,___get_global_string_const(769));
#line 256
c_rt_lib0delete(generator_js_priv0println(___nl__im__20, ___ref___im__1));
#line 256
c_rt_lib0clear(&___nl__im__20);
#line 257
___nl__int__21 = 0;
#line 258
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 258
___nl__int__24 = 0;
#line 258
___nl__int__25 = 1;
#line 258
___nl__int__26 = c_rt_lib0array_len(___nl__im__22);
#line 258
label_52:
;
#line 258
___nl__bool__27 = ___nl__int__24 >= ___nl__int__26;
#line 258
if(___nl__bool__27){ goto label_63;}
#line 258
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_get(___nl__im__22, ___nl__int__24));
#line 258
c_rt_lib0copy(&___nl__im__23, ___nl__im__28);
#line 259
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 259
c_rt_lib0delete(generator_js_priv0print_command(___nl__im__23, ___nl__im__29, &___nl__int__21, ___ref___im__1));
#line 259
c_rt_lib0clear(&___nl__im__29);
#line 259
c_rt_lib0clear(&___nl__im__23);
#line 260
___nl__int__24 = ___nl__int__24 + ___nl__int__25;
#line 260
goto label_52;
#line 260
label_63:
;
#line 261
c_rt_lib0move(&___nl__im__30,___get_global_string_const(770));
#line 261
c_rt_lib0delete(generator_js_priv0println(___nl__im__30, ___ref___im__1));
#line 261
c_rt_lib0clear(&___nl__im__30);
#line 261
c_rt_lib0clear(&___nl__im__0);
#line 261
//clear ___nl__int__21;
#line 261
c_rt_lib0clear(&___nl__im__22);
#line 261
c_rt_lib0clear(&___nl__im__23);
#line 261
//clear ___nl__int__24;
#line 261
//clear ___nl__int__25;
#line 261
//clear ___nl__int__26;
#line 261
//clear ___nl__bool__27;
#line 261
c_rt_lib0clear(&___nl__im__28);
#line 261
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_function_header(nlasm0function_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
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
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__string__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 266
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(219)));
#line 266
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(220));
#line 266
if(___nl__bool__4){ goto label_8;}
#line 268
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(475));
#line 268
if(___nl__bool__4){ goto label_23;}
#line 268
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 268
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 268
nl_die_arg(___nl__im__5);
#line 266
label_8:
;
#line 267
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_namespace_name());
#line 267
c_rt_lib0move(&___nl__im__9,___get_global_string_const(115));
#line 267
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 267
c_rt_lib0clear(&___nl__im__8);
#line 267
c_rt_lib0clear(&___nl__im__9);
#line 267
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 267
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 267
c_rt_lib0clear(&___nl__im__7);
#line 267
c_rt_lib0clear(&___nl__im__10);
#line 267
c_rt_lib0move(&___nl__im__11,___get_global_string_const(771));
#line 267
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 267
c_rt_lib0clear(&___nl__im__6);
#line 267
c_rt_lib0clear(&___nl__im__11);
#line 268
goto label_34;
#line 268
label_23:
;
#line 269
c_rt_lib0move(&___nl__im__13,___get_global_string_const(755));
#line 269
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 269
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 269
c_rt_lib0clear(&___nl__im__13);
#line 269
c_rt_lib0clear(&___nl__im__14);
#line 269
c_rt_lib0move(&___nl__im__15,___get_global_string_const(465));
#line 269
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 269
c_rt_lib0clear(&___nl__im__12);
#line 269
c_rt_lib0clear(&___nl__im__15);
#line 270
goto label_34;
#line 270
label_34:
;
#line 271
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 271
___nl__int__16 = c_rt_lib0array_len(___nl__im__17);
#line 271
c_rt_lib0clear(&___nl__im__17);
#line 271
___nl__int__18 = 0;
#line 271
___nl__int__19 = 1;
#line 271
label_40:
;
#line 271
___nl__bool__20 = ___nl__int__18 >= ___nl__int__16;
#line 271
if(___nl__bool__20){ goto label_64;}
#line 272
___nl__int__22 = 0;
#line 272
___nl__bool__21 = ___nl__int__18 == ___nl__int__22;
#line 272
//clear ___nl__int__22;
#line 272
___nl__bool__21 = !___nl__bool__21;
#line 272
___nl__bool__21 = !___nl__bool__21;
#line 272
if(___nl__bool__21){ goto label_53;}
#line 272
c_rt_lib0move(&___nl__im__23,___get_global_string_const(337));
#line 272
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 272
c_rt_lib0clear(&___nl__im__23);
#line 272
goto label_53;
#line 272
label_53:
;
#line 272
//clear ___nl__bool__21;
#line 273
c_rt_lib0move(&___nl__im__25,___get_global_string_const(772));
#line 273
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__18));
#line 273
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__26));
#line 273
c_rt_lib0clear(&___nl__im__25);
#line 273
c_rt_lib0clear(&___nl__string__26);
#line 273
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__24));
#line 273
c_rt_lib0clear(&___nl__im__24);
#line 274
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 274
goto label_40;
#line 274
label_64:
;
#line 275
c_rt_lib0move(&___nl__im__27,___get_global_string_const(331));
#line 275
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 275
c_rt_lib0clear(&___nl__im__27);
#line 276
c_rt_lib0clear(&___nl__im__0);
#line 276
c_rt_lib0clear(&___nl__im__1);
#line 276
c_rt_lib0clear(&___nl__im__3);
#line 276
//clear ___nl__bool__4;
#line 276
c_rt_lib0clear(&___nl__im__5);
#line 276
//clear ___nl__int__16;
#line 276
//clear ___nl__int__18;
#line 276
//clear ___nl__int__19;
#line 276
//clear ___nl__bool__20;
#line 276
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0print_function_registers(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
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
ImmT  ___nl__string__21 = NULL;
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
ImmT  ___nl__string__32 = NULL;
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
INT  ___nl__int__43 = 0;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
INT  ___nl__int__46 = 0;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
INT  ___nl__int__55 = 0;
#line 280
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 280
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 280
c_rt_lib0clear(&___nl__im__3);
#line 280
___nl__int__4 = 0;
#line 280
___nl__int__5 = 1;
#line 280
label_5:
;
#line 280
___nl__bool__6 = ___nl__int__4 >= ___nl__int__2;
#line 280
if(___nl__bool__6){ goto label_95;}
#line 281
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 281
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__9, ___nl__int__4));
#line 281
c_rt_lib0clear(&___nl__im__9);
#line 281
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(363)));
#line 281
c_rt_lib0clear(&___nl__im__8);
#line 281
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(234));
#line 281
if(___nl__bool__10){ goto label_20;}
#line 283
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(39));
#line 283
if(___nl__bool__10){ goto label_45;}
#line 283
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 283
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__7));
#line 283
nl_die_arg(___nl__im__11);
#line 281
label_20:
;
#line 282
c_rt_lib0move(&___nl__im__16,___get_global_string_const(742));
#line 282
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 282
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__19, ___nl__int__4));
#line 282
c_rt_lib0clear(&___nl__im__19);
#line 282
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register(___nl__im__18));
#line 282
c_rt_lib0clear(&___nl__im__18);
#line 282
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 282
c_rt_lib0clear(&___nl__im__16);
#line 282
c_rt_lib0clear(&___nl__im__17);
#line 282
c_rt_lib0move(&___nl__im__20,___get_global_string_const(773));
#line 282
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 282
c_rt_lib0clear(&___nl__im__15);
#line 282
c_rt_lib0clear(&___nl__im__20);
#line 282
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__4));
#line 282
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__string__21));
#line 282
c_rt_lib0clear(&___nl__im__14);
#line 282
c_rt_lib0clear(&___nl__string__21);
#line 282
c_rt_lib0move(&___nl__im__22,___get_global_string_const(450));
#line 282
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 282
c_rt_lib0clear(&___nl__im__13);
#line 282
c_rt_lib0clear(&___nl__im__22);
#line 282
c_rt_lib0delete(generator_js_priv0println(___nl__im__12, ___ref___im__1));
#line 282
c_rt_lib0clear(&___nl__im__12);
#line 283
goto label_70;
#line 283
label_45:
;
#line 284
c_rt_lib0move(&___nl__im__27,___get_global_string_const(742));
#line 284
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 284
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_get(___nl__im__30, ___nl__int__4));
#line 284
c_rt_lib0clear(&___nl__im__30);
#line 284
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register(___nl__im__29));
#line 284
c_rt_lib0clear(&___nl__im__29);
#line 284
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 284
c_rt_lib0clear(&___nl__im__27);
#line 284
c_rt_lib0clear(&___nl__im__28);
#line 284
c_rt_lib0move(&___nl__im__31,___get_global_string_const(773));
#line 284
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__31));
#line 284
c_rt_lib0clear(&___nl__im__26);
#line 284
c_rt_lib0clear(&___nl__im__31);
#line 284
c_rt_lib0move(&___nl__string__32, c_rt_lib0int_to_string(___nl__int__4));
#line 284
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__32));
#line 284
c_rt_lib0clear(&___nl__im__25);
#line 284
c_rt_lib0clear(&___nl__string__32);
#line 284
c_rt_lib0move(&___nl__im__33,___get_global_string_const(774));
#line 284
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__33));
#line 284
c_rt_lib0clear(&___nl__im__24);
#line 284
c_rt_lib0clear(&___nl__im__33);
#line 284
c_rt_lib0delete(generator_js_priv0println(___nl__im__23, ___ref___im__1));
#line 284
c_rt_lib0clear(&___nl__im__23);
#line 285
goto label_70;
#line 285
label_70:
;
#line 286
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_namespace_name());
#line 286
c_rt_lib0move(&___nl__im__38,___get_global_string_const(775));
#line 286
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__38));
#line 286
c_rt_lib0clear(&___nl__im__37);
#line 286
c_rt_lib0clear(&___nl__im__38);
#line 286
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 286
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__41, ___nl__int__4));
#line 286
c_rt_lib0clear(&___nl__im__41);
#line 286
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value(___nl__im__40));
#line 286
c_rt_lib0clear(&___nl__im__40);
#line 286
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__39));
#line 286
c_rt_lib0clear(&___nl__im__36);
#line 286
c_rt_lib0clear(&___nl__im__39);
#line 286
c_rt_lib0move(&___nl__im__42,___get_global_string_const(516));
#line 286
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__42));
#line 286
c_rt_lib0clear(&___nl__im__35);
#line 286
c_rt_lib0clear(&___nl__im__42);
#line 286
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 286
c_rt_lib0clear(&___nl__im__34);
#line 286
c_rt_lib0clear(&___nl__im__7);
#line 286
//clear ___nl__bool__10;
#line 286
c_rt_lib0clear(&___nl__im__11);
#line 287
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 287
goto label_5;
#line 287
label_95:
;
#line 288
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 288
___nl__int__43 = c_rt_lib0array_len(___nl__im__44);
#line 288
c_rt_lib0clear(&___nl__im__44);
#line 288
label_99:
;
#line 288
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 288
___nl__int__46 = c_rt_lib0array_len(___nl__im__47);
#line 288
c_rt_lib0clear(&___nl__im__47);
#line 288
___nl__bool__45 = ___nl__int__43 < ___nl__int__46;
#line 288
//clear ___nl__int__46;
#line 288
___nl__bool__45 = !___nl__bool__45;
#line 288
if(___nl__bool__45){ goto label_126;}
#line 289
c_rt_lib0move(&___nl__im__50,___get_global_string_const(742));
#line 289
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(225)));
#line 289
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__53, ___nl__int__43));
#line 289
c_rt_lib0clear(&___nl__im__53);
#line 289
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register(___nl__im__52));
#line 289
c_rt_lib0clear(&___nl__im__52);
#line 289
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 289
c_rt_lib0clear(&___nl__im__50);
#line 289
c_rt_lib0clear(&___nl__im__51);
#line 289
c_rt_lib0move(&___nl__im__54,___get_global_string_const(776));
#line 289
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__54));
#line 289
c_rt_lib0clear(&___nl__im__49);
#line 289
c_rt_lib0clear(&___nl__im__54);
#line 289
c_rt_lib0delete(generator_js_priv0println(___nl__im__48, ___ref___im__1));
#line 289
c_rt_lib0clear(&___nl__im__48);
#line 288
___nl__int__55 = 1;
#line 288
___nl__int__43 = ___nl__int__43 + ___nl__int__55;
#line 288
//clear ___nl__int__55;
#line 290
goto label_99;
#line 290
label_126:
;
#line 290
c_rt_lib0clear(&___nl__im__0);
#line 290
//clear ___nl__int__2;
#line 290
//clear ___nl__int__4;
#line 290
//clear ___nl__int__5;
#line 290
//clear ___nl__bool__6;
#line 290
c_rt_lib0clear(&___nl__im__7);
#line 290
//clear ___nl__bool__10;
#line 290
c_rt_lib0clear(&___nl__im__11);
#line 290
//clear ___nl__int__43;
#line 290
//clear ___nl__bool__45;
#line 290
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_command(nlasm0cmd_t0type ___nl__im__0,nlasm0args_type0type ___nl__im__1,INT * ___ref___int__2,generator_js0state_t0type* ___ref___im__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
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
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
ImmT  ___nl__im__144 = NULL;
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
INT  ___nl__int__171 = 0;
ImmT  ___nl__im__172 = NULL;
ImmT  ___nl__im__173 = NULL;
ImmT  ___nl__im__174 = NULL;
ImmT  ___nl__string__175 = NULL;
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
ImmT  ___nl__im__186 = NULL;
INT  ___nl__int__187 = 0;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
INT  ___nl__int__190 = 0;
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
ImmT  ___nl__im__222 = NULL;
ImmT  ___nl__im__223 = NULL;
ImmT  ___nl__im__224 = NULL;
ImmT  ___nl__im__225 = NULL;
ImmT  ___nl__im__226 = NULL;
ImmT  ___nl__im__227 = NULL;
ImmT  ___nl__im__228 = NULL;
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
INT  ___nl__int__233 = 0;
INT  ___nl__int__234 = 0;
ImmT  ___nl__im__235 = NULL;
INT  ___nl__int__236 = 0;
ImmT  ___nl__im__237 = NULL;
INT  ___nl__int__238 = 0;
ImmT  ___nl__im__239 = NULL;
ImmT  ___nl__im__240 = NULL;
ImmT  ___nl__im__241 = NULL;
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__string__244 = NULL;
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
INT  ___nl__int__255 = 0;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__string__257 = NULL;
ImmT  ___nl__im__258 = NULL;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
ImmT  ___nl__im__261 = NULL;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
ImmT  ___nl__im__271 = NULL;
ImmT  ___nl__im__272 = NULL;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
ImmT  ___nl__im__276 = NULL;
ImmT  ___nl__im__277 = NULL;
ImmT  ___nl__im__278 = NULL;
ImmT  ___nl__im__279 = NULL;
ImmT  ___nl__im__280 = NULL;
ImmT  ___nl__im__281 = NULL;
ImmT  ___nl__im__282 = NULL;
INT  ___nl__int__283 = 0;
INT  ___nl__int__284 = 0;
ImmT  ___nl__im__285 = NULL;
INT  ___nl__int__286 = 0;
ImmT  ___nl__im__287 = NULL;
INT  ___nl__int__288 = 0;
ImmT  ___nl__im__289 = NULL;
ImmT  ___nl__im__290 = NULL;
ImmT  ___nl__im__291 = NULL;
ImmT  ___nl__im__292 = NULL;
ImmT  ___nl__im__293 = NULL;
ImmT  ___nl__string__294 = NULL;
#line 295
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 296
c_rt_lib0move(&___nl__im__6,___get_global_string_const(777));
#line 296
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(231)));
#line 296
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(559)));
#line 296
c_rt_lib0clear(&___nl__im__10);
#line 296
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(560)));
#line 296
c_rt_lib0clear(&___nl__im__9);
#line 296
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(161)));
#line 296
___nl__int__7 = getIntFromImm(___nl__im__11);
#line 296
c_rt_lib0clear(&___nl__im__8);
#line 296
c_rt_lib0clear(&___nl__im__11);
#line 296
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__7));
#line 296
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__string__12));
#line 296
c_rt_lib0clear(&___nl__im__6);
#line 296
//clear ___nl__int__7;
#line 296
c_rt_lib0clear(&___nl__string__12);
#line 296
c_rt_lib0delete(generator_js_priv0println(___nl__im__5, ___ref___im__3));
#line 296
c_rt_lib0clear(&___nl__im__5);
#line 297
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 297
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(240));
#line 297
if(___nl__bool__14){ goto label_96;}
#line 299
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(241));
#line 299
if(___nl__bool__14){ goto label_117;}
#line 301
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(242));
#line 301
if(___nl__bool__14){ goto label_138;}
#line 304
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(243));
#line 304
if(___nl__bool__14){ goto label_159;}
#line 306
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(248));
#line 306
if(___nl__bool__14){ goto label_172;}
#line 309
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(244));
#line 309
if(___nl__bool__14){ goto label_193;}
#line 311
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(245));
#line 311
if(___nl__bool__14){ goto label_198;}
#line 313
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(246));
#line 313
if(___nl__bool__14){ goto label_203;}
#line 315
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(247));
#line 315
if(___nl__bool__14){ goto label_218;}
#line 318
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(257));
#line 318
if(___nl__bool__14){ goto label_249;}
#line 320
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(258));
#line 320
if(___nl__bool__14){ goto label_254;}
#line 322
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(249));
#line 322
if(___nl__bool__14){ goto label_263;}
#line 324
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(235));
#line 324
if(___nl__bool__14){ goto label_272;}
#line 326
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(250));
#line 326
if(___nl__bool__14){ goto label_281;}
#line 329
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(251));
#line 329
if(___nl__bool__14){ goto label_308;}
#line 333
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(252));
#line 333
if(___nl__bool__14){ goto label_339;}
#line 335
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(253));
#line 335
if(___nl__bool__14){ goto label_348;}
#line 337
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(254));
#line 337
if(___nl__bool__14){ goto label_357;}
#line 341
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(255));
#line 341
if(___nl__bool__14){ goto label_390;}
#line 345
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(256));
#line 345
if(___nl__bool__14){ goto label_421;}
#line 347
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(259));
#line 347
if(___nl__bool__14){ goto label_426;}
#line 349
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(260));
#line 349
if(___nl__bool__14){ goto label_439;}
#line 352
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(261));
#line 352
if(___nl__bool__14){ goto label_466;}
#line 354
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(262));
#line 354
if(___nl__bool__14){ goto label_471;}
#line 356
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(263));
#line 356
if(___nl__bool__14){ goto label_480;}
#line 357
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(264));
#line 357
if(___nl__bool__14){ goto label_484;}
#line 360
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(265));
#line 360
if(___nl__bool__14){ goto label_509;}
#line 362
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(266));
#line 362
if(___nl__bool__14){ goto label_520;}
#line 364
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(267));
#line 364
if(___nl__bool__14){ goto label_525;}
#line 366
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(268));
#line 366
if(___nl__bool__14){ goto label_536;}
#line 368
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(269));
#line 368
if(___nl__bool__14){ goto label_541;}
#line 370
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(270));
#line 370
if(___nl__bool__14){ goto label_552;}
#line 376
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(271));
#line 376
if(___nl__bool__14){ goto label_635;}
#line 378
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(272));
#line 378
if(___nl__bool__14){ goto label_646;}
#line 380
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(273));
#line 380
if(___nl__bool__14){ goto label_651;}
#line 382
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(274));
#line 382
if(___nl__bool__14){ goto label_656;}
#line 384
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(275));
#line 384
if(___nl__bool__14){ goto label_661;}
#line 384
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 384
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 384
nl_die_arg(___nl__im__15);
#line 297
label_96:
;
#line 297
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(240)));
#line 297
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 298
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(233)));
#line 298
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 298
c_rt_lib0clear(&___nl__im__20);
#line 298
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(78)));
#line 298
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(233)));
#line 298
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(215)));
#line 298
c_rt_lib0clear(&___nl__im__24);
#line 298
c_rt_lib0move(&___nl__im__21, generator_js_priv0get_arr(___nl__im__22, ___nl__im__23));
#line 298
c_rt_lib0clear(&___nl__im__22);
#line 298
c_rt_lib0clear(&___nl__im__23);
#line 298
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 298
c_rt_lib0clear(&___nl__im__19);
#line 298
c_rt_lib0clear(&___nl__im__21);
#line 298
c_rt_lib0move(&___nl__im__25,___get_global_string_const(450));
#line 298
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 298
c_rt_lib0clear(&___nl__im__18);
#line 298
c_rt_lib0clear(&___nl__im__25);
#line 299
goto label_666;
#line 299
label_117:
;
#line 299
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(241)));
#line 299
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 300
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(233)));
#line 300
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value_to_assign(___nl__im__30));
#line 300
c_rt_lib0clear(&___nl__im__30);
#line 300
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(78)));
#line 300
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(233)));
#line 300
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(215)));
#line 300
c_rt_lib0clear(&___nl__im__34);
#line 300
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_hash(___nl__im__32, ___nl__im__33));
#line 300
c_rt_lib0clear(&___nl__im__32);
#line 300
c_rt_lib0clear(&___nl__im__33);
#line 300
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__31));
#line 300
c_rt_lib0clear(&___nl__im__29);
#line 300
c_rt_lib0clear(&___nl__im__31);
#line 300
c_rt_lib0move(&___nl__im__35,___get_global_string_const(450));
#line 300
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__28, ___nl__im__35));
#line 300
c_rt_lib0clear(&___nl__im__28);
#line 300
c_rt_lib0clear(&___nl__im__35);
#line 301
goto label_666;
#line 301
label_138:
;
#line 301
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(242)));
#line 301
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 302
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(233)));
#line 302
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value_to_assign(___nl__im__40));
#line 302
c_rt_lib0clear(&___nl__im__40);
#line 303
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(778)));
#line 303
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(233)));
#line 303
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(215)));
#line 303
c_rt_lib0clear(&___nl__im__44);
#line 303
c_rt_lib0move(&___nl__im__41, generator_js_priv0get_empty_hash(___nl__im__42, ___nl__im__43));
#line 303
c_rt_lib0clear(&___nl__im__42);
#line 303
c_rt_lib0clear(&___nl__im__43);
#line 303
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 303
c_rt_lib0clear(&___nl__im__39);
#line 303
c_rt_lib0clear(&___nl__im__41);
#line 303
c_rt_lib0move(&___nl__im__45,___get_global_string_const(450));
#line 303
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__45));
#line 303
c_rt_lib0clear(&___nl__im__38);
#line 303
c_rt_lib0clear(&___nl__im__45);
#line 304
goto label_666;
#line 304
label_159:
;
#line 304
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(243)));
#line 304
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 305
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(277)));
#line 305
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(279)));
#line 305
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(276)));
#line 305
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(233)));
#line 305
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_call(___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___ref___int__2));
#line 305
c_rt_lib0clear(&___nl__im__48);
#line 305
c_rt_lib0clear(&___nl__im__49);
#line 305
c_rt_lib0clear(&___nl__im__50);
#line 305
c_rt_lib0clear(&___nl__im__51);
#line 306
goto label_666;
#line 306
label_172:
;
#line 306
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(248)));
#line 306
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 307
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(233)));
#line 307
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value_to_assign(___nl__im__56));
#line 307
c_rt_lib0clear(&___nl__im__56);
#line 308
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(159)));
#line 308
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(175)));
#line 308
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(159), ___nl__im__59, ___get_global_string_const(175), ___nl__im__60));
#line 308
c_rt_lib0clear(&___nl__im__59);
#line 308
c_rt_lib0clear(&___nl__im__60);
#line 308
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_const_hash(___nl__im__58));
#line 308
c_rt_lib0clear(&___nl__im__58);
#line 308
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__57));
#line 308
c_rt_lib0clear(&___nl__im__55);
#line 308
c_rt_lib0clear(&___nl__im__57);
#line 308
c_rt_lib0move(&___nl__im__61,___get_global_string_const(450));
#line 308
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 308
c_rt_lib0clear(&___nl__im__54);
#line 308
c_rt_lib0clear(&___nl__im__61);
#line 309
goto label_666;
#line 309
label_193:
;
#line 309
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(244)));
#line 309
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 310
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_una_op(___nl__im__62));
#line 311
goto label_666;
#line 311
label_198:
;
#line 311
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(245)));
#line 311
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 312
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_bin_op(___nl__im__64, ___ref___int__2));
#line 313
goto label_666;
#line 313
label_203:
;
#line 313
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(246)));
#line 313
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 314
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(233)));
#line 314
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(78)));
#line 314
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(570)));
#line 314
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(575)));
#line 314
___nl__int__71 = getIntFromImm(___nl__im__72);
#line 314
c_rt_lib0clear(&___nl__im__72);
#line 314
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_is(___nl__im__68, ___nl__im__69, ___nl__im__70, ___nl__int__71, ___ref___int__2, ___ref___im__3));
#line 314
c_rt_lib0clear(&___nl__im__68);
#line 314
c_rt_lib0clear(&___nl__im__69);
#line 314
c_rt_lib0clear(&___nl__im__70);
#line 314
//clear ___nl__int__71;
#line 315
goto label_666;
#line 315
label_218:
;
#line 315
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(247)));
#line 315
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 316
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(233)));
#line 316
c_rt_lib0move(&___nl__im__76, generator_js_priv0get_register_value_to_assign(___nl__im__77));
#line 316
c_rt_lib0clear(&___nl__im__77);
#line 316
c_rt_lib0move(&___nl__im__79,___get_global_string_const(280));
#line 316
c_rt_lib0move(&___nl__im__80,___get_global_string_const(247));
#line 317
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(78)));
#line 317
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__83));
#line 317
c_rt_lib0clear(&___nl__im__83);
#line 317
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(570)));
#line 317
c_rt_lib0move(&___nl__im__85, generator_js_priv0get_str_imm(___nl__im__86, ___ref___im__3));
#line 317
c_rt_lib0clear(&___nl__im__86);
#line 317
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__85));
#line 317
c_rt_lib0clear(&___nl__im__85);
#line 317
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(2, ___nl__im__82, ___nl__im__84));
#line 317
c_rt_lib0clear(&___nl__im__82);
#line 317
c_rt_lib0clear(&___nl__im__84);
#line 317
c_rt_lib0move(&___nl__im__78, generator_js_priv0get_internal_call(___nl__im__79, ___nl__im__80, ___nl__im__81, ___ref___int__2));
#line 317
c_rt_lib0clear(&___nl__im__79);
#line 317
c_rt_lib0clear(&___nl__im__80);
#line 317
c_rt_lib0clear(&___nl__im__81);
#line 317
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 317
c_rt_lib0clear(&___nl__im__76);
#line 317
c_rt_lib0clear(&___nl__im__78);
#line 317
c_rt_lib0move(&___nl__im__87,___get_global_string_const(450));
#line 317
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__75, ___nl__im__87));
#line 317
c_rt_lib0clear(&___nl__im__75);
#line 317
c_rt_lib0clear(&___nl__im__87);
#line 318
goto label_666;
#line 318
label_249:
;
#line 318
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(257)));
#line 318
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 319
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_return(___nl__im__88, ___nl__im__1));
#line 320
goto label_666;
#line 320
label_254:
;
#line 320
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(258)));
#line 320
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 321
c_rt_lib0move(&___nl__im__92, generator_js_priv0get_namespace_name());
#line 321
c_rt_lib0move(&___nl__im__93,___get_global_string_const(779));
#line 321
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__92, ___nl__im__93));
#line 321
c_rt_lib0clear(&___nl__im__92);
#line 321
c_rt_lib0clear(&___nl__im__93);
#line 322
goto label_666;
#line 322
label_263:
;
#line 322
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(249)));
#line 322
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 323
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(233)));
#line 323
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(78)));
#line 323
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_move(___nl__im__96, ___nl__im__97, ___ref___int__2));
#line 323
c_rt_lib0clear(&___nl__im__96);
#line 323
c_rt_lib0clear(&___nl__im__97);
#line 324
goto label_666;
#line 324
label_272:
;
#line 324
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(235)));
#line 324
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 325
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(233)));
#line 325
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(234)));
#line 325
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_load_const(___nl__im__100, ___nl__im__101, ___ref___im__3));
#line 325
c_rt_lib0clear(&___nl__im__100);
#line 325
c_rt_lib0clear(&___nl__im__101);
#line 326
goto label_666;
#line 326
label_281:
;
#line 326
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(250)));
#line 326
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 327
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(233)));
#line 327
c_rt_lib0move(&___nl__im__107, generator_js_priv0get_register_value_to_assign(___nl__im__108));
#line 327
c_rt_lib0clear(&___nl__im__108);
#line 328
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(78)));
#line 328
c_rt_lib0move(&___nl__im__109, generator_js_priv0get_register_value(___nl__im__110));
#line 328
c_rt_lib0clear(&___nl__im__110);
#line 328
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 328
c_rt_lib0clear(&___nl__im__107);
#line 328
c_rt_lib0clear(&___nl__im__109);
#line 328
c_rt_lib0move(&___nl__im__111,___get_global_string_const(780));
#line 328
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__111));
#line 328
c_rt_lib0clear(&___nl__im__106);
#line 328
c_rt_lib0clear(&___nl__im__111);
#line 328
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(287)));
#line 328
c_rt_lib0move(&___nl__im__112, generator_js_priv0get_register_value(___nl__im__113));
#line 328
c_rt_lib0clear(&___nl__im__113);
#line 328
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__112));
#line 328
c_rt_lib0clear(&___nl__im__105);
#line 328
c_rt_lib0clear(&___nl__im__112);
#line 328
c_rt_lib0move(&___nl__im__114,___get_global_string_const(516));
#line 328
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__104, ___nl__im__114));
#line 328
c_rt_lib0clear(&___nl__im__104);
#line 328
c_rt_lib0clear(&___nl__im__114);
#line 329
goto label_666;
#line 329
label_308:
;
#line 329
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(251)));
#line 329
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 330
c_rt_lib0move(&___nl__im__118,___get_global_string_const(280));
#line 330
c_rt_lib0move(&___nl__im__119,___get_global_string_const(781));
#line 330
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(78)));
#line 330
c_rt_lib0move(&___nl__im__121, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__122));
#line 330
c_rt_lib0clear(&___nl__im__122);
#line 331
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(287)));
#line 331
c_rt_lib0move(&___nl__im__124, generator_js_priv0get_register_value(___nl__im__125));
#line 331
c_rt_lib0clear(&___nl__im__125);
#line 331
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__124));
#line 331
c_rt_lib0clear(&___nl__im__124);
#line 332
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(234)));
#line 332
c_rt_lib0move(&___nl__im__127, generator_js_priv0get_register_value(___nl__im__128));
#line 332
c_rt_lib0clear(&___nl__im__128);
#line 332
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__127));
#line 332
c_rt_lib0clear(&___nl__im__127);
#line 332
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(3, ___nl__im__121, ___nl__im__123, ___nl__im__126));
#line 332
c_rt_lib0clear(&___nl__im__121);
#line 332
c_rt_lib0clear(&___nl__im__123);
#line 332
c_rt_lib0clear(&___nl__im__126);
#line 332
c_rt_lib0move(&___nl__im__117, generator_js_priv0get_internal_call(___nl__im__118, ___nl__im__119, ___nl__im__120, ___ref___int__2));
#line 332
c_rt_lib0clear(&___nl__im__118);
#line 332
c_rt_lib0clear(&___nl__im__119);
#line 332
c_rt_lib0clear(&___nl__im__120);
#line 332
c_rt_lib0move(&___nl__im__129,___get_global_string_const(450));
#line 332
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__117, ___nl__im__129));
#line 332
c_rt_lib0clear(&___nl__im__117);
#line 332
c_rt_lib0clear(&___nl__im__129);
#line 333
goto label_666;
#line 333
label_339:
;
#line 333
c_rt_lib0move(&___nl__im__131, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(252)));
#line 333
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 334
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(233)));
#line 334
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(234)));
#line 334
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_push(___nl__im__132, ___nl__im__133, ___ref___int__2));
#line 334
c_rt_lib0clear(&___nl__im__132);
#line 334
c_rt_lib0clear(&___nl__im__133);
#line 335
goto label_666;
#line 335
label_348:
;
#line 335
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(253)));
#line 335
c_rt_lib0copy(&___nl__im__134, ___nl__im__135);
#line 336
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(233)));
#line 336
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(78)));
#line 336
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_len(___nl__im__136, ___nl__im__137, ___ref___int__2));
#line 336
c_rt_lib0clear(&___nl__im__136);
#line 336
c_rt_lib0clear(&___nl__im__137);
#line 337
goto label_666;
#line 337
label_357:
;
#line 337
c_rt_lib0move(&___nl__im__139, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(254)));
#line 337
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 338
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(233)));
#line 338
c_rt_lib0move(&___nl__im__141, generator_js_priv0get_register_value_to_assign(___nl__im__142));
#line 338
c_rt_lib0clear(&___nl__im__142);
#line 338
c_rt_lib0move(&___nl__im__144,___get_global_string_const(280));
#line 338
c_rt_lib0move(&___nl__im__145,___get_global_string_const(782));
#line 339
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(78)));
#line 339
c_rt_lib0move(&___nl__im__148, generator_js_priv0get_register_value(___nl__im__149));
#line 339
c_rt_lib0clear(&___nl__im__149);
#line 339
c_rt_lib0move(&___nl__im__147, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__148));
#line 339
c_rt_lib0clear(&___nl__im__148);
#line 339
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(585)));
#line 339
c_rt_lib0move(&___nl__im__151, generator_js_priv0get_str_imm(___nl__im__152, ___ref___im__3));
#line 339
c_rt_lib0clear(&___nl__im__152);
#line 339
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__151));
#line 339
c_rt_lib0clear(&___nl__im__151);
#line 339
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_mk(2, ___nl__im__147, ___nl__im__150));
#line 339
c_rt_lib0clear(&___nl__im__147);
#line 339
c_rt_lib0clear(&___nl__im__150);
#line 339
c_rt_lib0move(&___nl__im__143, generator_js_priv0get_internal_call(___nl__im__144, ___nl__im__145, ___nl__im__146, ___ref___int__2));
#line 339
c_rt_lib0clear(&___nl__im__144);
#line 339
c_rt_lib0clear(&___nl__im__145);
#line 339
c_rt_lib0clear(&___nl__im__146);
#line 339
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__143));
#line 339
c_rt_lib0clear(&___nl__im__141);
#line 339
c_rt_lib0clear(&___nl__im__143);
#line 340
c_rt_lib0move(&___nl__im__153,___get_global_string_const(450));
#line 340
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__140, ___nl__im__153));
#line 340
c_rt_lib0clear(&___nl__im__140);
#line 340
c_rt_lib0clear(&___nl__im__153);
#line 341
goto label_666;
#line 341
label_390:
;
#line 341
c_rt_lib0move(&___nl__im__155, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(255)));
#line 341
c_rt_lib0copy(&___nl__im__154, ___nl__im__155);
#line 342
c_rt_lib0move(&___nl__im__157,___get_global_string_const(280));
#line 342
c_rt_lib0move(&___nl__im__158,___get_global_string_const(783));
#line 342
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(78)));
#line 342
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__161));
#line 342
c_rt_lib0clear(&___nl__im__161);
#line 343
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(585)));
#line 343
c_rt_lib0move(&___nl__im__163, generator_js_priv0get_str_imm(___nl__im__164, ___ref___im__3));
#line 343
c_rt_lib0clear(&___nl__im__164);
#line 343
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__163));
#line 343
c_rt_lib0clear(&___nl__im__163);
#line 343
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(234)));
#line 343
c_rt_lib0move(&___nl__im__166, generator_js_priv0get_register_value(___nl__im__167));
#line 343
c_rt_lib0clear(&___nl__im__167);
#line 343
c_rt_lib0move(&___nl__im__165, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__166));
#line 343
c_rt_lib0clear(&___nl__im__166);
#line 343
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(3, ___nl__im__160, ___nl__im__162, ___nl__im__165));
#line 343
c_rt_lib0clear(&___nl__im__160);
#line 343
c_rt_lib0clear(&___nl__im__162);
#line 343
c_rt_lib0clear(&___nl__im__165);
#line 343
c_rt_lib0move(&___nl__im__156, generator_js_priv0get_internal_call(___nl__im__157, ___nl__im__158, ___nl__im__159, ___ref___int__2));
#line 343
c_rt_lib0clear(&___nl__im__157);
#line 343
c_rt_lib0clear(&___nl__im__158);
#line 343
c_rt_lib0clear(&___nl__im__159);
#line 344
c_rt_lib0move(&___nl__im__168,___get_global_string_const(450));
#line 344
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__156, ___nl__im__168));
#line 344
c_rt_lib0clear(&___nl__im__156);
#line 344
c_rt_lib0clear(&___nl__im__168);
#line 345
goto label_666;
#line 345
label_421:
;
#line 345
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(256)));
#line 345
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 346
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_mk(___nl__im__169, ___ref___im__3, ___ref___int__2));
#line 347
goto label_666;
#line 347
label_426:
;
#line 347
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(259)));
#line 347
___nl__int__171 = getIntFromImm(___nl__im__172);
#line 348
c_rt_lib0move(&___nl__im__174,___get_global_string_const(537));
#line 348
c_rt_lib0move(&___nl__string__175, c_rt_lib0int_to_string(___nl__int__171));
#line 348
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__string__175));
#line 348
c_rt_lib0clear(&___nl__im__174);
#line 348
c_rt_lib0clear(&___nl__string__175);
#line 348
c_rt_lib0move(&___nl__im__176,___get_global_string_const(538));
#line 348
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__173, ___nl__im__176));
#line 348
c_rt_lib0clear(&___nl__im__173);
#line 348
c_rt_lib0clear(&___nl__im__176);
#line 349
goto label_666;
#line 349
label_439:
;
#line 349
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(260)));
#line 349
c_rt_lib0copy(&___nl__im__177, ___nl__im__178);
#line 350
c_rt_lib0move(&___nl__im__182,___get_global_string_const(615));
#line 350
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(78)));
#line 350
c_rt_lib0move(&___nl__im__183, generator_js_priv0get_register_value(___nl__im__184));
#line 350
c_rt_lib0clear(&___nl__im__184);
#line 350
c_rt_lib0move(&___nl__im__181, c_rt_lib0concat_new(___nl__im__182, ___nl__im__183));
#line 350
c_rt_lib0clear(&___nl__im__182);
#line 350
c_rt_lib0clear(&___nl__im__183);
#line 350
c_rt_lib0move(&___nl__im__185,___get_global_string_const(784));
#line 350
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__185));
#line 350
c_rt_lib0clear(&___nl__im__181);
#line 350
c_rt_lib0clear(&___nl__im__185);
#line 350
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(233)));
#line 350
___nl__int__187 = getIntFromImm(___nl__im__188);
#line 350
c_rt_lib0clear(&___nl__im__188);
#line 350
c_rt_lib0move(&___nl__im__186, generator_js_priv0get_goto(___nl__int__187));
#line 350
//clear ___nl__int__187;
#line 350
c_rt_lib0move(&___nl__im__179, c_rt_lib0concat_new(___nl__im__180, ___nl__im__186));
#line 350
c_rt_lib0clear(&___nl__im__180);
#line 350
c_rt_lib0clear(&___nl__im__186);
#line 351
c_rt_lib0move(&___nl__im__189,___get_global_string_const(316));
#line 351
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__179, ___nl__im__189));
#line 351
c_rt_lib0clear(&___nl__im__179);
#line 351
c_rt_lib0clear(&___nl__im__189);
#line 352
goto label_666;
#line 352
label_466:
;
#line 352
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(261)));
#line 352
___nl__int__190 = getIntFromImm(___nl__im__191);
#line 353
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_goto(___nl__int__190));
#line 354
goto label_666;
#line 354
label_471:
;
#line 354
c_rt_lib0move(&___nl__im__193, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(262)));
#line 354
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 355
c_rt_lib0move(&___nl__im__194, generator_js_priv0get_register_to_assign(___nl__im__192));
#line 355
c_rt_lib0move(&___nl__im__195,___get_global_string_const(785));
#line 355
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__194, ___nl__im__195));
#line 355
c_rt_lib0clear(&___nl__im__194);
#line 355
c_rt_lib0clear(&___nl__im__195);
#line 356
goto label_666;
#line 356
label_480:
;
#line 356
c_rt_lib0move(&___nl__im__197, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(263)));
#line 356
c_rt_lib0copy(&___nl__im__196, ___nl__im__197);
#line 357
goto label_666;
#line 357
label_484:
;
#line 357
c_rt_lib0move(&___nl__im__199, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(264)));
#line 357
c_rt_lib0copy(&___nl__im__198, ___nl__im__199);
#line 358
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(369)));
#line 358
c_rt_lib0move(&___nl__im__203, generator_js_priv0get_register_to_assign(___nl__im__204));
#line 358
c_rt_lib0clear(&___nl__im__204);
#line 359
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(368)));
#line 359
c_rt_lib0move(&___nl__im__205, generator_js_priv0get_register_value(___nl__im__206));
#line 359
c_rt_lib0clear(&___nl__im__206);
#line 359
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_new(___nl__im__203, ___nl__im__205));
#line 359
c_rt_lib0clear(&___nl__im__203);
#line 359
c_rt_lib0clear(&___nl__im__205);
#line 359
c_rt_lib0move(&___nl__im__207,___get_global_string_const(115));
#line 359
c_rt_lib0move(&___nl__im__201, c_rt_lib0concat_new(___nl__im__202, ___nl__im__207));
#line 359
c_rt_lib0clear(&___nl__im__202);
#line 359
c_rt_lib0clear(&___nl__im__207);
#line 359
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(613)));
#line 359
c_rt_lib0move(&___nl__im__200, c_rt_lib0concat_new(___nl__im__201, ___nl__im__208));
#line 359
c_rt_lib0clear(&___nl__im__201);
#line 359
c_rt_lib0clear(&___nl__im__208);
#line 359
c_rt_lib0move(&___nl__im__209,___get_global_string_const(450));
#line 359
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__200, ___nl__im__209));
#line 359
c_rt_lib0clear(&___nl__im__200);
#line 359
c_rt_lib0clear(&___nl__im__209);
#line 360
goto label_666;
#line 360
label_509:
;
#line 360
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(265)));
#line 360
c_rt_lib0copy(&___nl__im__210, ___nl__im__211);
#line 361
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__210, ___get_global_string_const(370)));
#line 361
c_rt_lib0move(&___nl__im__212, generator_js_priv0get_register_to_assign(___nl__im__213));
#line 361
c_rt_lib0clear(&___nl__im__213);
#line 361
c_rt_lib0move(&___nl__im__214,___get_global_string_const(786));
#line 361
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__212, ___nl__im__214));
#line 361
c_rt_lib0clear(&___nl__im__212);
#line 361
c_rt_lib0clear(&___nl__im__214);
#line 362
goto label_666;
#line 362
label_520:
;
#line 362
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(266)));
#line 362
c_rt_lib0copy(&___nl__im__215, ___nl__im__216);
#line 363
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_index(___nl__im__215));
#line 364
goto label_666;
#line 364
label_525:
;
#line 364
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(267)));
#line 364
c_rt_lib0copy(&___nl__im__217, ___nl__im__218);
#line 365
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__217, ___get_global_string_const(370)));
#line 365
c_rt_lib0move(&___nl__im__219, generator_js_priv0get_register_to_assign(___nl__im__220));
#line 365
c_rt_lib0clear(&___nl__im__220);
#line 365
c_rt_lib0move(&___nl__im__221,___get_global_string_const(786));
#line 365
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__219, ___nl__im__221));
#line 365
c_rt_lib0clear(&___nl__im__219);
#line 365
c_rt_lib0clear(&___nl__im__221);
#line 366
goto label_666;
#line 366
label_536:
;
#line 366
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(268)));
#line 366
c_rt_lib0copy(&___nl__im__222, ___nl__im__223);
#line 367
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_hash_index(___nl__im__222));
#line 368
goto label_666;
#line 368
label_541:
;
#line 368
c_rt_lib0move(&___nl__im__225, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(269)));
#line 368
c_rt_lib0copy(&___nl__im__224, ___nl__im__225);
#line 369
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_string_const(370)));
#line 369
c_rt_lib0move(&___nl__im__226, generator_js_priv0get_register_to_assign(___nl__im__227));
#line 369
c_rt_lib0clear(&___nl__im__227);
#line 369
c_rt_lib0move(&___nl__im__228,___get_global_string_const(786));
#line 369
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__226, ___nl__im__228));
#line 369
c_rt_lib0clear(&___nl__im__226);
#line 369
c_rt_lib0clear(&___nl__im__228);
#line 370
goto label_666;
#line 370
label_552:
;
#line 370
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(270)));
#line 370
c_rt_lib0copy(&___nl__im__229, ___nl__im__230);
#line 371
c_rt_lib0move(&___nl__im__231,___get_global_string_const(71));
#line 371
c_rt_lib0move(&___nl__im__231, c_rt_lib0get_ref_hash((*___ref___im__3), ___nl__im__231));
#line 371
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec((*___ref___im__3), ___get_global_string_const(737)));
#line 371
___nl__int__234 = getIntFromImm(___nl__im__235);
#line 371
c_rt_lib0clear(&___nl__im__235);
#line 371
___nl__int__236 = 1;
#line 371
___nl__int__233 = ___nl__int__234 + ___nl__int__236;
#line 371
//clear ___nl__int__234;
#line 371
//clear ___nl__int__236;
#line 371
c_rt_lib0move(&___nl__im__237, c_rt_lib0int_new(___nl__int__233));
#line 371
c_rt_lib0move(&___nl__im__241, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(231)));
#line 371
c_rt_lib0move(&___nl__im__240, c_rt_lib0hash_get_value_dec(___nl__im__241, ___get_global_string_const(559)));
#line 371
c_rt_lib0clear(&___nl__im__241);
#line 371
c_rt_lib0move(&___nl__im__239, c_rt_lib0hash_get_value_dec(___nl__im__240, ___get_global_string_const(560)));
#line 371
c_rt_lib0clear(&___nl__im__240);
#line 371
c_rt_lib0move(&___nl__im__242, c_rt_lib0hash_get_value_dec(___nl__im__239, ___get_global_string_const(161)));
#line 371
___nl__int__238 = getIntFromImm(___nl__im__242);
#line 371
c_rt_lib0clear(&___nl__im__239);
#line 371
c_rt_lib0clear(&___nl__im__242);
#line 371
c_rt_lib0move(&___nl__im__243, c_rt_lib0int_new(___nl__int__238));
#line 371
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_mk(2, ___get_global_string_const(738), ___nl__im__237, ___get_global_string_const(739), ___nl__im__243));
#line 371
//clear ___nl__int__233;
#line 371
c_rt_lib0clear(&___nl__im__237);
#line 371
//clear ___nl__int__238;
#line 371
c_rt_lib0clear(&___nl__im__243);
#line 371
c_rt_lib0array_push(&___nl__im__231, ___nl__im__232);
#line 371
c_rt_lib0move(&___nl__string__244,___get_global_string_const(71));
#line 371
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__3, ___nl__string__244, ___nl__im__231));
#line 371
c_rt_lib0clear(&___nl__im__231);
#line 371
c_rt_lib0clear(&___nl__im__232);
#line 371
c_rt_lib0clear(&___nl__string__244);
#line 372
c_rt_lib0move(&___nl__im__251,___get_global_string_const(615));
#line 372
c_rt_lib0move(&___nl__im__253, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(368)));
#line 372
c_rt_lib0move(&___nl__im__252, generator_js_priv0get_register_value(___nl__im__253));
#line 372
c_rt_lib0clear(&___nl__im__253);
#line 372
c_rt_lib0move(&___nl__im__250, c_rt_lib0concat_new(___nl__im__251, ___nl__im__252));
#line 372
c_rt_lib0clear(&___nl__im__251);
#line 372
c_rt_lib0clear(&___nl__im__252);
#line 372
c_rt_lib0move(&___nl__im__254,___get_global_string_const(787));
#line 372
c_rt_lib0move(&___nl__im__249, c_rt_lib0concat_new(___nl__im__250, ___nl__im__254));
#line 372
c_rt_lib0clear(&___nl__im__250);
#line 372
c_rt_lib0clear(&___nl__im__254);
#line 372
c_rt_lib0move(&___nl__im__256, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(575)));
#line 372
___nl__int__255 = getIntFromImm(___nl__im__256);
#line 372
c_rt_lib0clear(&___nl__im__256);
#line 372
c_rt_lib0move(&___nl__string__257, c_rt_lib0int_to_string(___nl__int__255));
#line 372
c_rt_lib0move(&___nl__im__248, c_rt_lib0concat_new(___nl__im__249, ___nl__string__257));
#line 372
c_rt_lib0clear(&___nl__im__249);
#line 372
//clear ___nl__int__255;
#line 372
c_rt_lib0clear(&___nl__string__257);
#line 372
c_rt_lib0move(&___nl__im__258,___get_global_string_const(331));
#line 372
c_rt_lib0move(&___nl__im__247, c_rt_lib0concat_new(___nl__im__248, ___nl__im__258));
#line 372
c_rt_lib0clear(&___nl__im__248);
#line 372
c_rt_lib0clear(&___nl__im__258);
#line 373
c_rt_lib0move(&___nl__im__259, generator_js_priv0get_namespace_name());
#line 373
c_rt_lib0move(&___nl__im__246, c_rt_lib0concat_new(___nl__im__247, ___nl__im__259));
#line 373
c_rt_lib0clear(&___nl__im__247);
#line 373
c_rt_lib0clear(&___nl__im__259);
#line 373
c_rt_lib0move(&___nl__im__260,___get_global_string_const(779));
#line 373
c_rt_lib0move(&___nl__im__245, c_rt_lib0concat_new(___nl__im__246, ___nl__im__260));
#line 373
c_rt_lib0clear(&___nl__im__246);
#line 373
c_rt_lib0clear(&___nl__im__260);
#line 373
c_rt_lib0delete(generator_js_priv0println(___nl__im__245, ___ref___im__3));
#line 373
c_rt_lib0clear(&___nl__im__245);
#line 374
c_rt_lib0move(&___nl__im__264, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(369)));
#line 374
c_rt_lib0move(&___nl__im__263, generator_js_priv0get_register_to_assign(___nl__im__264));
#line 374
c_rt_lib0clear(&___nl__im__264);
#line 375
c_rt_lib0move(&___nl__im__266, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(368)));
#line 375
c_rt_lib0move(&___nl__im__265, generator_js_priv0get_register_value(___nl__im__266));
#line 375
c_rt_lib0clear(&___nl__im__266);
#line 375
c_rt_lib0move(&___nl__im__262, c_rt_lib0concat_new(___nl__im__263, ___nl__im__265));
#line 375
c_rt_lib0clear(&___nl__im__263);
#line 375
c_rt_lib0clear(&___nl__im__265);
#line 375
c_rt_lib0move(&___nl__im__267,___get_global_string_const(788));
#line 375
c_rt_lib0move(&___nl__im__261, c_rt_lib0concat_new(___nl__im__262, ___nl__im__267));
#line 375
c_rt_lib0clear(&___nl__im__262);
#line 375
c_rt_lib0clear(&___nl__im__267);
#line 375
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__261));
#line 375
c_rt_lib0clear(&___nl__im__261);
#line 376
goto label_666;
#line 376
label_635:
;
#line 376
c_rt_lib0move(&___nl__im__269, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(271)));
#line 376
c_rt_lib0copy(&___nl__im__268, ___nl__im__269);
#line 377
c_rt_lib0move(&___nl__im__271, c_rt_lib0hash_get_value_dec(___nl__im__268, ___get_global_string_const(370)));
#line 377
c_rt_lib0move(&___nl__im__270, generator_js_priv0get_register_to_assign(___nl__im__271));
#line 377
c_rt_lib0clear(&___nl__im__271);
#line 377
c_rt_lib0move(&___nl__im__272,___get_global_string_const(786));
#line 377
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__270, ___nl__im__272));
#line 377
c_rt_lib0clear(&___nl__im__270);
#line 377
c_rt_lib0clear(&___nl__im__272);
#line 378
goto label_666;
#line 378
label_646:
;
#line 378
c_rt_lib0move(&___nl__im__274, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(272)));
#line 378
c_rt_lib0copy(&___nl__im__273, ___nl__im__274);
#line 379
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_init_iter(___nl__im__273, ___ref___int__2));
#line 380
goto label_666;
#line 380
label_651:
;
#line 380
c_rt_lib0move(&___nl__im__276, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(273)));
#line 380
c_rt_lib0copy(&___nl__im__275, ___nl__im__276);
#line 381
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_next_iter(___nl__im__275, ___ref___int__2));
#line 382
goto label_666;
#line 382
label_656:
;
#line 382
c_rt_lib0move(&___nl__im__278, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(274)));
#line 382
c_rt_lib0copy(&___nl__im__277, ___nl__im__278);
#line 383
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_get_key_iter(___nl__im__277, ___ref___int__2));
#line 384
goto label_666;
#line 384
label_661:
;
#line 384
c_rt_lib0move(&___nl__im__280, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(275)));
#line 384
c_rt_lib0copy(&___nl__im__279, ___nl__im__280);
#line 385
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_is_end(___nl__im__279, ___ref___int__2));
#line 386
goto label_666;
#line 386
label_666:
;
#line 387
c_rt_lib0move(&___nl__im__281,___get_global_string_const(71));
#line 387
c_rt_lib0move(&___nl__im__281, c_rt_lib0get_ref_hash((*___ref___im__3), ___nl__im__281));
#line 387
c_rt_lib0move(&___nl__im__285, c_rt_lib0hash_get_value_dec((*___ref___im__3), ___get_global_string_const(737)));
#line 387
___nl__int__284 = getIntFromImm(___nl__im__285);
#line 387
c_rt_lib0clear(&___nl__im__285);
#line 387
___nl__int__286 = 1;
#line 387
___nl__int__283 = ___nl__int__284 + ___nl__int__286;
#line 387
//clear ___nl__int__284;
#line 387
//clear ___nl__int__286;
#line 387
c_rt_lib0move(&___nl__im__287, c_rt_lib0int_new(___nl__int__283));
#line 387
c_rt_lib0move(&___nl__im__291, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(231)));
#line 387
c_rt_lib0move(&___nl__im__290, c_rt_lib0hash_get_value_dec(___nl__im__291, ___get_global_string_const(559)));
#line 387
c_rt_lib0clear(&___nl__im__291);
#line 387
c_rt_lib0move(&___nl__im__289, c_rt_lib0hash_get_value_dec(___nl__im__290, ___get_global_string_const(560)));
#line 387
c_rt_lib0clear(&___nl__im__290);
#line 387
c_rt_lib0move(&___nl__im__292, c_rt_lib0hash_get_value_dec(___nl__im__289, ___get_global_string_const(161)));
#line 387
___nl__int__288 = getIntFromImm(___nl__im__292);
#line 387
c_rt_lib0clear(&___nl__im__289);
#line 387
c_rt_lib0clear(&___nl__im__292);
#line 387
c_rt_lib0move(&___nl__im__293, c_rt_lib0int_new(___nl__int__288));
#line 387
c_rt_lib0move(&___nl__im__282, c_rt_lib0hash_mk(2, ___get_global_string_const(738), ___nl__im__287, ___get_global_string_const(739), ___nl__im__293));
#line 387
//clear ___nl__int__283;
#line 387
c_rt_lib0clear(&___nl__im__287);
#line 387
//clear ___nl__int__288;
#line 387
c_rt_lib0clear(&___nl__im__293);
#line 387
c_rt_lib0array_push(&___nl__im__281, ___nl__im__282);
#line 387
c_rt_lib0move(&___nl__string__294,___get_global_string_const(71));
#line 387
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__3, ___nl__string__294, ___nl__im__281));
#line 387
c_rt_lib0clear(&___nl__im__281);
#line 387
c_rt_lib0clear(&___nl__im__282);
#line 387
c_rt_lib0clear(&___nl__string__294);
#line 388
c_rt_lib0delete(generator_js_priv0println(___nl__im__4, ___ref___im__3));
#line 388
c_rt_lib0clear(&___nl__im__0);
#line 388
c_rt_lib0clear(&___nl__im__1);
#line 388
c_rt_lib0clear(&___nl__im__4);
#line 388
c_rt_lib0clear(&___nl__im__13);
#line 388
//clear ___nl__bool__14;
#line 388
c_rt_lib0clear(&___nl__im__15);
#line 388
c_rt_lib0clear(&___nl__im__16);
#line 388
c_rt_lib0clear(&___nl__im__17);
#line 388
c_rt_lib0clear(&___nl__im__26);
#line 388
c_rt_lib0clear(&___nl__im__27);
#line 388
c_rt_lib0clear(&___nl__im__36);
#line 388
c_rt_lib0clear(&___nl__im__37);
#line 388
c_rt_lib0clear(&___nl__im__46);
#line 388
c_rt_lib0clear(&___nl__im__47);
#line 388
c_rt_lib0clear(&___nl__im__52);
#line 388
c_rt_lib0clear(&___nl__im__53);
#line 388
c_rt_lib0clear(&___nl__im__62);
#line 388
c_rt_lib0clear(&___nl__im__63);
#line 388
c_rt_lib0clear(&___nl__im__64);
#line 388
c_rt_lib0clear(&___nl__im__65);
#line 388
c_rt_lib0clear(&___nl__im__66);
#line 388
c_rt_lib0clear(&___nl__im__67);
#line 388
c_rt_lib0clear(&___nl__im__73);
#line 388
c_rt_lib0clear(&___nl__im__74);
#line 388
c_rt_lib0clear(&___nl__im__88);
#line 388
c_rt_lib0clear(&___nl__im__89);
#line 388
c_rt_lib0clear(&___nl__im__90);
#line 388
c_rt_lib0clear(&___nl__im__91);
#line 388
c_rt_lib0clear(&___nl__im__94);
#line 388
c_rt_lib0clear(&___nl__im__95);
#line 388
c_rt_lib0clear(&___nl__im__98);
#line 388
c_rt_lib0clear(&___nl__im__99);
#line 388
c_rt_lib0clear(&___nl__im__102);
#line 388
c_rt_lib0clear(&___nl__im__103);
#line 388
c_rt_lib0clear(&___nl__im__115);
#line 388
c_rt_lib0clear(&___nl__im__116);
#line 388
c_rt_lib0clear(&___nl__im__130);
#line 388
c_rt_lib0clear(&___nl__im__131);
#line 388
c_rt_lib0clear(&___nl__im__134);
#line 388
c_rt_lib0clear(&___nl__im__135);
#line 388
c_rt_lib0clear(&___nl__im__138);
#line 388
c_rt_lib0clear(&___nl__im__139);
#line 388
c_rt_lib0clear(&___nl__im__154);
#line 388
c_rt_lib0clear(&___nl__im__155);
#line 388
c_rt_lib0clear(&___nl__im__169);
#line 388
c_rt_lib0clear(&___nl__im__170);
#line 388
//clear ___nl__int__171;
#line 388
c_rt_lib0clear(&___nl__im__172);
#line 388
c_rt_lib0clear(&___nl__im__177);
#line 388
c_rt_lib0clear(&___nl__im__178);
#line 388
//clear ___nl__int__190;
#line 388
c_rt_lib0clear(&___nl__im__191);
#line 388
c_rt_lib0clear(&___nl__im__192);
#line 388
c_rt_lib0clear(&___nl__im__193);
#line 388
c_rt_lib0clear(&___nl__im__196);
#line 388
c_rt_lib0clear(&___nl__im__197);
#line 388
c_rt_lib0clear(&___nl__im__198);
#line 388
c_rt_lib0clear(&___nl__im__199);
#line 388
c_rt_lib0clear(&___nl__im__210);
#line 388
c_rt_lib0clear(&___nl__im__211);
#line 388
c_rt_lib0clear(&___nl__im__215);
#line 388
c_rt_lib0clear(&___nl__im__216);
#line 388
c_rt_lib0clear(&___nl__im__217);
#line 388
c_rt_lib0clear(&___nl__im__218);
#line 388
c_rt_lib0clear(&___nl__im__222);
#line 388
c_rt_lib0clear(&___nl__im__223);
#line 388
c_rt_lib0clear(&___nl__im__224);
#line 388
c_rt_lib0clear(&___nl__im__225);
#line 388
c_rt_lib0clear(&___nl__im__229);
#line 388
c_rt_lib0clear(&___nl__im__230);
#line 388
c_rt_lib0clear(&___nl__im__268);
#line 388
c_rt_lib0clear(&___nl__im__269);
#line 388
c_rt_lib0clear(&___nl__im__273);
#line 388
c_rt_lib0clear(&___nl__im__274);
#line 388
c_rt_lib0clear(&___nl__im__275);
#line 388
c_rt_lib0clear(&___nl__im__276);
#line 388
c_rt_lib0clear(&___nl__im__277);
#line 388
c_rt_lib0clear(&___nl__im__278);
#line 388
c_rt_lib0clear(&___nl__im__279);
#line 388
c_rt_lib0clear(&___nl__im__280);
#line 388
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_move(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
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
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
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
bool  ___nl__bool__62 = false;
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
#line 392
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 392
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 392
c_rt_lib0clear(&___nl__im__4);
#line 392
___nl__bool__3 = !___nl__bool__3;
#line 392
if(___nl__bool__3){ goto label_11;}
#line 392
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 392
c_rt_lib0clear(&___nl__im__0);
#line 392
c_rt_lib0clear(&___nl__im__1);
#line 392
//clear ___nl__bool__3;
#line 392
return ___nl__im__5;
#line 392
goto label_11;
#line 392
label_11:
;
#line 392
//clear ___nl__bool__3;
#line 392
c_rt_lib0clear(&___nl__im__5);
#line 393
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 393
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(430));
#line 393
c_rt_lib0clear(&___nl__im__8);
#line 393
___nl__bool__7 = !___nl__bool__6;
#line 393
if(___nl__bool__7){ goto label_22;}
#line 393
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 393
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(430));
#line 393
c_rt_lib0clear(&___nl__im__9);
#line 393
label_22:
;
#line 393
//clear ___nl__bool__7;
#line 393
___nl__bool__6 = !___nl__bool__6;
#line 393
if(___nl__bool__6){ goto label_40;}
#line 394
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_to_assign(___nl__im__0));
#line 394
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register(___nl__im__1));
#line 394
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 394
c_rt_lib0clear(&___nl__im__12);
#line 394
c_rt_lib0clear(&___nl__im__13);
#line 394
c_rt_lib0move(&___nl__im__14,___get_global_string_const(450));
#line 394
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 394
c_rt_lib0clear(&___nl__im__11);
#line 394
c_rt_lib0clear(&___nl__im__14);
#line 394
c_rt_lib0clear(&___nl__im__0);
#line 394
c_rt_lib0clear(&___nl__im__1);
#line 394
//clear ___nl__bool__6;
#line 394
return ___nl__im__10;
#line 395
goto label_40;
#line 395
label_40:
;
#line 395
//clear ___nl__bool__6;
#line 395
c_rt_lib0clear(&___nl__im__10);
#line 396
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 396
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(138));
#line 396
if(___nl__bool__16){ goto label_63;}
#line 398
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(413));
#line 398
if(___nl__bool__16){ goto label_80;}
#line 404
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(414));
#line 404
if(___nl__bool__16){ goto label_125;}
#line 406
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(33));
#line 406
if(___nl__bool__16){ goto label_143;}
#line 412
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(567));
#line 412
if(___nl__bool__16){ goto label_198;}
#line 418
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(134));
#line 418
if(___nl__bool__16){ goto label_232;}
#line 424
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(571));
#line 424
if(___nl__bool__16){ goto label_268;}
#line 426
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(135));
#line 426
if(___nl__bool__16){ goto label_274;}
#line 426
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 426
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 426
nl_die_arg(___nl__im__17);
#line 396
label_63:
;
#line 397
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 397
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 397
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__1));
#line 397
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_im_from_value(___nl__im__21, ___nl__im__22));
#line 397
c_rt_lib0clear(&___nl__im__21);
#line 397
c_rt_lib0clear(&___nl__im__22);
#line 397
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 397
c_rt_lib0clear(&___nl__im__19);
#line 397
c_rt_lib0clear(&___nl__im__20);
#line 397
c_rt_lib0clear(&___nl__im__0);
#line 397
c_rt_lib0clear(&___nl__im__1);
#line 397
c_rt_lib0clear(&___nl__im__15);
#line 397
//clear ___nl__bool__16;
#line 397
c_rt_lib0clear(&___nl__im__17);
#line 397
return ___nl__im__18;
#line 398
goto label_280;
#line 398
label_80:
;
#line 399
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 399
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(138));
#line 399
c_rt_lib0clear(&___nl__im__24);
#line 399
___nl__bool__23 = !___nl__bool__23;
#line 399
if(___nl__bool__23){ goto label_104;}
#line 400
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 400
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value(___nl__im__1));
#line 400
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 400
c_rt_lib0clear(&___nl__im__27);
#line 400
c_rt_lib0clear(&___nl__im__28);
#line 400
c_rt_lib0move(&___nl__im__29,___get_global_string_const(789));
#line 400
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 400
c_rt_lib0clear(&___nl__im__26);
#line 400
c_rt_lib0clear(&___nl__im__29);
#line 400
c_rt_lib0clear(&___nl__im__0);
#line 400
c_rt_lib0clear(&___nl__im__1);
#line 400
c_rt_lib0clear(&___nl__im__15);
#line 400
//clear ___nl__bool__16;
#line 400
c_rt_lib0clear(&___nl__im__17);
#line 400
c_rt_lib0clear(&___nl__im__18);
#line 400
//clear ___nl__bool__23;
#line 400
return ___nl__im__25;
#line 401
goto label_120;
#line 401
label_104:
;
#line 402
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 402
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__1));
#line 402
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 402
c_rt_lib0clear(&___nl__im__31);
#line 402
c_rt_lib0clear(&___nl__im__32);
#line 402
c_rt_lib0clear(&___nl__im__0);
#line 402
c_rt_lib0clear(&___nl__im__1);
#line 402
c_rt_lib0clear(&___nl__im__15);
#line 402
//clear ___nl__bool__16;
#line 402
c_rt_lib0clear(&___nl__im__17);
#line 402
c_rt_lib0clear(&___nl__im__18);
#line 402
//clear ___nl__bool__23;
#line 402
c_rt_lib0clear(&___nl__im__25);
#line 402
return ___nl__im__30;
#line 403
goto label_120;
#line 403
label_120:
;
#line 403
//clear ___nl__bool__23;
#line 403
c_rt_lib0clear(&___nl__im__25);
#line 403
c_rt_lib0clear(&___nl__im__30);
#line 404
goto label_280;
#line 404
label_125:
;
#line 405
c_rt_lib0move(&___nl__im__34, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 405
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 405
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_register_value(___nl__im__1));
#line 405
c_rt_lib0move(&___nl__im__35, generator_js_priv0get_im_from_value(___nl__im__36, ___nl__im__37));
#line 405
c_rt_lib0clear(&___nl__im__36);
#line 405
c_rt_lib0clear(&___nl__im__37);
#line 405
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 405
c_rt_lib0clear(&___nl__im__34);
#line 405
c_rt_lib0clear(&___nl__im__35);
#line 405
c_rt_lib0clear(&___nl__im__0);
#line 405
c_rt_lib0clear(&___nl__im__1);
#line 405
c_rt_lib0clear(&___nl__im__15);
#line 405
//clear ___nl__bool__16;
#line 405
c_rt_lib0clear(&___nl__im__17);
#line 405
c_rt_lib0clear(&___nl__im__18);
#line 405
return ___nl__im__33;
#line 406
goto label_280;
#line 406
label_143:
;
#line 407
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 407
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(138));
#line 407
c_rt_lib0clear(&___nl__im__39);
#line 407
___nl__bool__38 = !___nl__bool__38;
#line 407
if(___nl__bool__38){ goto label_176;}
#line 408
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 408
c_rt_lib0move(&___nl__im__44,___get_global_string_const(280));
#line 408
c_rt_lib0move(&___nl__im__45,___get_global_string_const(609));
#line 408
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__1));
#line 408
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__47));
#line 408
c_rt_lib0clear(&___nl__im__47);
#line 408
c_rt_lib0move(&___nl__im__43, generator_js_priv0get_internal_call(___nl__im__44, ___nl__im__45, ___nl__im__46, ___ref___int__2));
#line 408
c_rt_lib0clear(&___nl__im__44);
#line 408
c_rt_lib0clear(&___nl__im__45);
#line 408
c_rt_lib0clear(&___nl__im__46);
#line 408
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 408
c_rt_lib0clear(&___nl__im__42);
#line 408
c_rt_lib0clear(&___nl__im__43);
#line 408
c_rt_lib0move(&___nl__im__48,___get_global_string_const(450));
#line 408
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__48));
#line 408
c_rt_lib0clear(&___nl__im__41);
#line 408
c_rt_lib0clear(&___nl__im__48);
#line 408
c_rt_lib0clear(&___nl__im__0);
#line 408
c_rt_lib0clear(&___nl__im__1);
#line 408
c_rt_lib0clear(&___nl__im__15);
#line 408
//clear ___nl__bool__16;
#line 408
c_rt_lib0clear(&___nl__im__17);
#line 408
c_rt_lib0clear(&___nl__im__18);
#line 408
c_rt_lib0clear(&___nl__im__33);
#line 408
//clear ___nl__bool__38;
#line 408
return ___nl__im__40;
#line 409
goto label_193;
#line 409
label_176:
;
#line 410
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 410
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register_value(___nl__im__1));
#line 410
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 410
c_rt_lib0clear(&___nl__im__50);
#line 410
c_rt_lib0clear(&___nl__im__51);
#line 410
c_rt_lib0clear(&___nl__im__0);
#line 410
c_rt_lib0clear(&___nl__im__1);
#line 410
c_rt_lib0clear(&___nl__im__15);
#line 410
//clear ___nl__bool__16;
#line 410
c_rt_lib0clear(&___nl__im__17);
#line 410
c_rt_lib0clear(&___nl__im__18);
#line 410
c_rt_lib0clear(&___nl__im__33);
#line 410
//clear ___nl__bool__38;
#line 410
c_rt_lib0clear(&___nl__im__40);
#line 410
return ___nl__im__49;
#line 411
goto label_193;
#line 411
label_193:
;
#line 411
//clear ___nl__bool__38;
#line 411
c_rt_lib0clear(&___nl__im__40);
#line 411
c_rt_lib0clear(&___nl__im__49);
#line 412
goto label_280;
#line 412
label_198:
;
#line 412
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(567)));
#line 412
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 413
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 413
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(567));
#line 413
c_rt_lib0clear(&___nl__im__55);
#line 413
___nl__bool__54 = !___nl__bool__54;
#line 413
if(___nl__bool__54){ goto label_223;}
#line 414
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 414
c_rt_lib0move(&___nl__im__58, generator_js_priv0get_register_value(___nl__im__1));
#line 414
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 414
c_rt_lib0clear(&___nl__im__57);
#line 414
c_rt_lib0clear(&___nl__im__58);
#line 414
c_rt_lib0clear(&___nl__im__0);
#line 414
c_rt_lib0clear(&___nl__im__1);
#line 414
c_rt_lib0clear(&___nl__im__15);
#line 414
//clear ___nl__bool__16;
#line 414
c_rt_lib0clear(&___nl__im__17);
#line 414
c_rt_lib0clear(&___nl__im__18);
#line 414
c_rt_lib0clear(&___nl__im__33);
#line 414
c_rt_lib0clear(&___nl__im__52);
#line 414
c_rt_lib0clear(&___nl__im__53);
#line 414
//clear ___nl__bool__54;
#line 414
return ___nl__im__56;
#line 415
goto label_227;
#line 415
label_223:
;
#line 416
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 416
nl_die_arg(___nl__im__59);
#line 417
goto label_227;
#line 417
label_227:
;
#line 417
//clear ___nl__bool__54;
#line 417
c_rt_lib0clear(&___nl__im__56);
#line 417
c_rt_lib0clear(&___nl__im__59);
#line 418
goto label_280;
#line 418
label_232:
;
#line 418
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(134)));
#line 418
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 419
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 419
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(134));
#line 419
c_rt_lib0clear(&___nl__im__63);
#line 419
___nl__bool__62 = !___nl__bool__62;
#line 419
if(___nl__bool__62){ goto label_259;}
#line 420
c_rt_lib0move(&___nl__im__65, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 420
c_rt_lib0move(&___nl__im__66, generator_js_priv0get_register_value(___nl__im__1));
#line 420
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 420
c_rt_lib0clear(&___nl__im__65);
#line 420
c_rt_lib0clear(&___nl__im__66);
#line 420
c_rt_lib0clear(&___nl__im__0);
#line 420
c_rt_lib0clear(&___nl__im__1);
#line 420
c_rt_lib0clear(&___nl__im__15);
#line 420
//clear ___nl__bool__16;
#line 420
c_rt_lib0clear(&___nl__im__17);
#line 420
c_rt_lib0clear(&___nl__im__18);
#line 420
c_rt_lib0clear(&___nl__im__33);
#line 420
c_rt_lib0clear(&___nl__im__52);
#line 420
c_rt_lib0clear(&___nl__im__53);
#line 420
c_rt_lib0clear(&___nl__im__60);
#line 420
c_rt_lib0clear(&___nl__im__61);
#line 420
//clear ___nl__bool__62;
#line 420
return ___nl__im__64;
#line 421
goto label_263;
#line 421
label_259:
;
#line 422
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 422
nl_die_arg(___nl__im__67);
#line 423
goto label_263;
#line 423
label_263:
;
#line 423
//clear ___nl__bool__62;
#line 423
c_rt_lib0clear(&___nl__im__64);
#line 423
c_rt_lib0clear(&___nl__im__67);
#line 424
goto label_280;
#line 424
label_268:
;
#line 424
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(571)));
#line 424
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 425
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 425
nl_die_arg(___nl__im__70);
#line 426
goto label_280;
#line 426
label_274:
;
#line 426
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(135)));
#line 426
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 427
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 427
nl_die_arg(___nl__im__73);
#line 428
goto label_280;
#line 428
label_280:
;
return NULL;

}

ImmT  generator_js_priv0get_load_const(nlasm0reg_t0type ___nl__im__0,ImmT  ___nl__im__1,generator_js0state_t0type* ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
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
ImmT  ___nl__im__37 = NULL;
#line 432
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 432
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 432
if(___nl__bool__4){ goto label_20;}
#line 434
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(413));
#line 434
if(___nl__bool__4){ goto label_37;}
#line 436
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(414));
#line 436
if(___nl__bool__4){ goto label_53;}
#line 438
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 438
if(___nl__bool__4){ goto label_72;}
#line 440
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(567));
#line 440
if(___nl__bool__4){ goto label_99;}
#line 442
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(134));
#line 442
if(___nl__bool__4){ goto label_105;}
#line 444
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(571));
#line 444
if(___nl__bool__4){ goto label_111;}
#line 446
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(135));
#line 446
if(___nl__bool__4){ goto label_117;}
#line 446
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 446
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 446
nl_die_arg(___nl__im__5);
#line 432
label_20:
;
#line 433
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 433
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 433
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 433
c_rt_lib0clear(&___nl__im__8);
#line 433
c_rt_lib0clear(&___nl__im__9);
#line 433
c_rt_lib0move(&___nl__im__10,___get_global_string_const(450));
#line 433
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 433
c_rt_lib0clear(&___nl__im__7);
#line 433
c_rt_lib0clear(&___nl__im__10);
#line 433
c_rt_lib0clear(&___nl__im__0);
#line 433
c_rt_lib0clear(&___nl__im__1);
#line 433
c_rt_lib0clear(&___nl__im__3);
#line 433
//clear ___nl__bool__4;
#line 433
c_rt_lib0clear(&___nl__im__5);
#line 433
return ___nl__im__6;
#line 434
goto label_123;
#line 434
label_37:
;
#line 435
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 435
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 435
c_rt_lib0clear(&___nl__im__13);
#line 435
c_rt_lib0move(&___nl__im__14,___get_global_string_const(450));
#line 435
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 435
c_rt_lib0clear(&___nl__im__12);
#line 435
c_rt_lib0clear(&___nl__im__14);
#line 435
c_rt_lib0clear(&___nl__im__0);
#line 435
c_rt_lib0clear(&___nl__im__1);
#line 435
c_rt_lib0clear(&___nl__im__3);
#line 435
//clear ___nl__bool__4;
#line 435
c_rt_lib0clear(&___nl__im__5);
#line 435
c_rt_lib0clear(&___nl__im__6);
#line 435
return ___nl__im__11;
#line 436
goto label_123;
#line 436
label_53:
;
#line 437
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 437
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 437
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 437
c_rt_lib0clear(&___nl__im__17);
#line 437
c_rt_lib0clear(&___nl__im__18);
#line 437
c_rt_lib0move(&___nl__im__19,___get_global_string_const(450));
#line 437
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 437
c_rt_lib0clear(&___nl__im__16);
#line 437
c_rt_lib0clear(&___nl__im__19);
#line 437
c_rt_lib0clear(&___nl__im__0);
#line 437
c_rt_lib0clear(&___nl__im__1);
#line 437
c_rt_lib0clear(&___nl__im__3);
#line 437
//clear ___nl__bool__4;
#line 437
c_rt_lib0clear(&___nl__im__5);
#line 437
c_rt_lib0clear(&___nl__im__6);
#line 437
c_rt_lib0clear(&___nl__im__11);
#line 437
return ___nl__im__15;
#line 438
goto label_123;
#line 438
label_72:
;
#line 439
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 439
___nl__bool__24 = c_rt_lib0check_true_native(___nl__im__1);
#line 439
if(___nl__bool__24){ goto label_78;}
#line 439
c_rt_lib0move(&___nl__im__23,___get_global_string_const(580));
#line 439
goto label_80;
#line 439
label_78:
;
#line 439
c_rt_lib0move(&___nl__im__23,___get_global_string_const(581));
#line 439
label_80:
;
#line 439
//clear ___nl__bool__24;
#line 439
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 439
c_rt_lib0clear(&___nl__im__22);
#line 439
c_rt_lib0clear(&___nl__im__23);
#line 439
c_rt_lib0move(&___nl__im__25,___get_global_string_const(450));
#line 439
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 439
c_rt_lib0clear(&___nl__im__21);
#line 439
c_rt_lib0clear(&___nl__im__25);
#line 439
c_rt_lib0clear(&___nl__im__0);
#line 439
c_rt_lib0clear(&___nl__im__1);
#line 439
c_rt_lib0clear(&___nl__im__3);
#line 439
//clear ___nl__bool__4;
#line 439
c_rt_lib0clear(&___nl__im__5);
#line 439
c_rt_lib0clear(&___nl__im__6);
#line 439
c_rt_lib0clear(&___nl__im__11);
#line 439
c_rt_lib0clear(&___nl__im__15);
#line 439
return ___nl__im__20;
#line 440
goto label_123;
#line 440
label_99:
;
#line 440
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(567)));
#line 440
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 441
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 441
nl_die_arg(___nl__im__28);
#line 442
goto label_123;
#line 442
label_105:
;
#line 442
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(134)));
#line 442
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 443
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 443
nl_die_arg(___nl__im__31);
#line 444
goto label_123;
#line 444
label_111:
;
#line 444
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(571)));
#line 444
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 445
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 445
nl_die_arg(___nl__im__34);
#line 446
goto label_123;
#line 446
label_117:
;
#line 446
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(135)));
#line 446
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 447
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 447
nl_die_arg(___nl__im__37);
#line 448
goto label_123;
#line 448
label_123:
;
return NULL;

}

ImmT  generator_js_priv0get_array_push(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 452
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 452
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(138));
#line 452
c_rt_lib0clear(&___nl__im__4);
#line 452
___nl__bool__3 = !___nl__bool__3;
#line 452
if(___nl__bool__3){ goto label_25;}
#line 453
c_rt_lib0move(&___nl__im__7,___get_global_string_const(280));
#line 453
c_rt_lib0move(&___nl__im__8,___get_global_string_const(252));
#line 454
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__0));
#line 454
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__1));
#line 454
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__11));
#line 454
c_rt_lib0clear(&___nl__im__10);
#line 454
c_rt_lib0clear(&___nl__im__11);
#line 454
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_internal_call(___nl__im__7, ___nl__im__8, ___nl__im__9, ___ref___int__2));
#line 454
c_rt_lib0clear(&___nl__im__7);
#line 454
c_rt_lib0clear(&___nl__im__8);
#line 454
c_rt_lib0clear(&___nl__im__9);
#line 454
c_rt_lib0move(&___nl__im__12,___get_global_string_const(450));
#line 454
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__12));
#line 454
c_rt_lib0clear(&___nl__im__6);
#line 454
c_rt_lib0clear(&___nl__im__12);
#line 454
c_rt_lib0clear(&___nl__im__0);
#line 454
c_rt_lib0clear(&___nl__im__1);
#line 454
//clear ___nl__bool__3;
#line 454
return ___nl__im__5;
#line 455
goto label_54;
#line 455
label_25:
;
#line 455
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 455
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(134));
#line 455
c_rt_lib0clear(&___nl__im__13);
#line 455
___nl__bool__3 = !___nl__bool__3;
#line 455
if(___nl__bool__3){ goto label_50;}
#line 456
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__0));
#line 456
c_rt_lib0move(&___nl__im__18,___get_global_string_const(790));
#line 456
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 456
c_rt_lib0clear(&___nl__im__17);
#line 456
c_rt_lib0clear(&___nl__im__18);
#line 456
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_reference(___nl__im__1));
#line 456
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 456
c_rt_lib0clear(&___nl__im__16);
#line 456
c_rt_lib0clear(&___nl__im__19);
#line 456
c_rt_lib0move(&___nl__im__20,___get_global_string_const(516));
#line 456
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 456
c_rt_lib0clear(&___nl__im__15);
#line 456
c_rt_lib0clear(&___nl__im__20);
#line 456
c_rt_lib0clear(&___nl__im__0);
#line 456
c_rt_lib0clear(&___nl__im__1);
#line 456
//clear ___nl__bool__3;
#line 456
c_rt_lib0clear(&___nl__im__5);
#line 456
return ___nl__im__14;
#line 457
goto label_54;
#line 457
label_50:
;
#line 458
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 458
nl_die_arg(___nl__im__21);
#line 459
goto label_54;
#line 459
label_54:
;
#line 459
//clear ___nl__bool__3;
#line 459
c_rt_lib0clear(&___nl__im__5);
#line 459
c_rt_lib0clear(&___nl__im__14);
#line 459
c_rt_lib0clear(&___nl__im__21);
return NULL;

}

ImmT  generator_js_priv0get_array_len(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,INT * ___ref___int__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
#line 463
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 463
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(138));
#line 463
c_rt_lib0clear(&___nl__im__4);
#line 463
___nl__bool__3 = !___nl__bool__3;
#line 463
if(___nl__bool__3){ goto label_29;}
#line 464
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 464
c_rt_lib0move(&___nl__im__9,___get_global_string_const(280));
#line 464
c_rt_lib0move(&___nl__im__10,___get_global_string_const(253));
#line 465
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__1));
#line 465
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__13));
#line 465
c_rt_lib0clear(&___nl__im__13);
#line 465
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(1, ___nl__im__12));
#line 465
c_rt_lib0clear(&___nl__im__12);
#line 465
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_internal_call(___nl__im__9, ___nl__im__10, ___nl__im__11, ___ref___int__2));
#line 465
c_rt_lib0clear(&___nl__im__9);
#line 465
c_rt_lib0clear(&___nl__im__10);
#line 465
c_rt_lib0clear(&___nl__im__11);
#line 465
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 465
c_rt_lib0clear(&___nl__im__7);
#line 465
c_rt_lib0clear(&___nl__im__8);
#line 465
c_rt_lib0move(&___nl__im__14,___get_global_string_const(450));
#line 465
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__14));
#line 465
c_rt_lib0clear(&___nl__im__6);
#line 465
c_rt_lib0clear(&___nl__im__14);
#line 465
c_rt_lib0clear(&___nl__im__0);
#line 465
c_rt_lib0clear(&___nl__im__1);
#line 465
//clear ___nl__bool__3;
#line 465
return ___nl__im__5;
#line 466
goto label_54;
#line 466
label_29:
;
#line 466
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 466
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(134));
#line 466
c_rt_lib0clear(&___nl__im__15);
#line 466
___nl__bool__3 = !___nl__bool__3;
#line 466
if(___nl__bool__3){ goto label_50;}
#line 467
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 467
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__1));
#line 467
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 467
c_rt_lib0clear(&___nl__im__18);
#line 467
c_rt_lib0clear(&___nl__im__19);
#line 467
c_rt_lib0move(&___nl__im__20,___get_global_string_const(791));
#line 467
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 467
c_rt_lib0clear(&___nl__im__17);
#line 467
c_rt_lib0clear(&___nl__im__20);
#line 467
c_rt_lib0clear(&___nl__im__0);
#line 467
c_rt_lib0clear(&___nl__im__1);
#line 467
//clear ___nl__bool__3;
#line 467
c_rt_lib0clear(&___nl__im__5);
#line 467
return ___nl__im__16;
#line 468
goto label_54;
#line 468
label_50:
;
#line 469
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 469
nl_die_arg(___nl__im__21);
#line 470
goto label_54;
#line 470
label_54:
;
#line 470
//clear ___nl__bool__3;
#line 470
c_rt_lib0clear(&___nl__im__5);
#line 470
c_rt_lib0clear(&___nl__im__16);
#line 470
c_rt_lib0clear(&___nl__im__21);
return NULL;

}

ImmT  generator_js_priv0get_use_index(nlasm0use_index_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
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
#line 474
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 474
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(215)));
#line 474
c_rt_lib0clear(&___nl__im__3);
#line 474
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(134));
#line 474
c_rt_lib0clear(&___nl__im__2);
#line 474
___nl__bool__1 = !___nl__bool__1;
#line 474
if(___nl__bool__1){ goto label_34;}
#line 475
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(369)));
#line 475
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_to_assign(___nl__im__9));
#line 475
c_rt_lib0clear(&___nl__im__9);
#line 475
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 475
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__11));
#line 475
c_rt_lib0clear(&___nl__im__11);
#line 475
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 475
c_rt_lib0clear(&___nl__im__8);
#line 475
c_rt_lib0clear(&___nl__im__10);
#line 475
c_rt_lib0move(&___nl__im__12,___get_global_string_const(325));
#line 475
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 475
c_rt_lib0clear(&___nl__im__7);
#line 475
c_rt_lib0clear(&___nl__im__12);
#line 476
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(371)));
#line 476
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__14));
#line 476
c_rt_lib0clear(&___nl__im__14);
#line 476
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 476
c_rt_lib0clear(&___nl__im__6);
#line 476
c_rt_lib0clear(&___nl__im__13);
#line 476
c_rt_lib0move(&___nl__im__15,___get_global_string_const(792));
#line 476
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__15));
#line 476
c_rt_lib0clear(&___nl__im__5);
#line 476
c_rt_lib0clear(&___nl__im__15);
#line 476
c_rt_lib0clear(&___nl__im__0);
#line 476
//clear ___nl__bool__1;
#line 476
return ___nl__im__4;
#line 477
goto label_74;
#line 477
label_34:
;
#line 477
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 477
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 477
c_rt_lib0clear(&___nl__im__17);
#line 477
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(138));
#line 477
c_rt_lib0clear(&___nl__im__16);
#line 477
___nl__bool__1 = !___nl__bool__1;
#line 477
if(___nl__bool__1){ goto label_70;}
#line 478
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(369)));
#line 478
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_to_assign(___nl__im__23));
#line 478
c_rt_lib0clear(&___nl__im__23);
#line 478
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 478
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 478
c_rt_lib0clear(&___nl__im__25);
#line 478
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 478
c_rt_lib0clear(&___nl__im__22);
#line 478
c_rt_lib0clear(&___nl__im__24);
#line 479
c_rt_lib0move(&___nl__im__26,___get_global_string_const(780));
#line 479
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 479
c_rt_lib0clear(&___nl__im__21);
#line 479
c_rt_lib0clear(&___nl__im__26);
#line 479
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(371)));
#line 479
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 479
c_rt_lib0clear(&___nl__im__28);
#line 479
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 479
c_rt_lib0clear(&___nl__im__20);
#line 479
c_rt_lib0clear(&___nl__im__27);
#line 479
c_rt_lib0move(&___nl__im__29,___get_global_string_const(516));
#line 479
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 479
c_rt_lib0clear(&___nl__im__19);
#line 479
c_rt_lib0clear(&___nl__im__29);
#line 479
c_rt_lib0clear(&___nl__im__0);
#line 479
//clear ___nl__bool__1;
#line 479
c_rt_lib0clear(&___nl__im__4);
#line 479
return ___nl__im__18;
#line 480
goto label_74;
#line 480
label_70:
;
#line 481
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 481
nl_die_arg(___nl__im__30);
#line 482
goto label_74;
#line 482
label_74:
;
#line 482
//clear ___nl__bool__1;
#line 482
c_rt_lib0clear(&___nl__im__4);
#line 482
c_rt_lib0clear(&___nl__im__18);
#line 482
c_rt_lib0clear(&___nl__im__30);
return NULL;

}

ImmT  generator_js_priv0get_use_hash_index(nlasm0use_hash_index_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 486
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 487
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(371)));
#line 487
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value(___nl__im__4));
#line 487
c_rt_lib0clear(&___nl__im__4);
#line 487
c_rt_lib0move(&___nl__im__5,___get_global_string_const(793));
#line 487
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 487
c_rt_lib0clear(&___nl__im__3);
#line 487
c_rt_lib0clear(&___nl__im__5);
#line 488
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(369)));
#line 488
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_to_assign(___nl__im__11));
#line 488
c_rt_lib0clear(&___nl__im__11);
#line 489
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(368)));
#line 489
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_value(___nl__im__13));
#line 489
c_rt_lib0clear(&___nl__im__13);
#line 489
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__12));
#line 489
c_rt_lib0clear(&___nl__im__10);
#line 489
c_rt_lib0clear(&___nl__im__12);
#line 489
c_rt_lib0move(&___nl__im__14,___get_global_string_const(325));
#line 489
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 489
c_rt_lib0clear(&___nl__im__9);
#line 489
c_rt_lib0clear(&___nl__im__14);
#line 489
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__2));
#line 489
c_rt_lib0clear(&___nl__im__8);
#line 489
c_rt_lib0move(&___nl__im__15,___get_global_string_const(326));
#line 489
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 489
c_rt_lib0clear(&___nl__im__7);
#line 489
c_rt_lib0clear(&___nl__im__15);
#line 489
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 489
c_rt_lib0clear(&___nl__im__6);
#line 490
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(614)));
#line 490
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 490
c_rt_lib0clear(&___nl__im__17);
#line 490
___nl__bool__16 = !___nl__bool__16;
#line 490
if(___nl__bool__16){ goto label_38;}
#line 491
c_rt_lib0move(&___nl__im__18,___get_global_string_const(794));
#line 491
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__18));
#line 491
c_rt_lib0clear(&___nl__im__18);
#line 492
goto label_38;
#line 492
label_38:
;
#line 492
//clear ___nl__bool__16;
#line 493
c_rt_lib0move(&___nl__im__19,___get_global_string_const(450));
#line 493
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__19));
#line 493
c_rt_lib0clear(&___nl__im__19);
#line 494
c_rt_lib0clear(&___nl__im__0);
#line 494
c_rt_lib0clear(&___nl__im__2);
#line 494
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0get_hash_init_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
#line 498
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 498
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 498
c_rt_lib0clear(&___nl__im__4);
#line 498
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 498
c_rt_lib0clear(&___nl__im__3);
#line 498
___nl__bool__2 = !___nl__bool__2;
#line 498
if(___nl__bool__2){ goto label_32;}
#line 499
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 499
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__8));
#line 499
c_rt_lib0clear(&___nl__im__8);
#line 500
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 500
c_rt_lib0move(&___nl__im__11,___get_global_string_const(281));
#line 500
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 500
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 500
c_rt_lib0clear(&___nl__im__14);
#line 500
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 500
c_rt_lib0clear(&___nl__im__13);
#line 500
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 500
c_rt_lib0clear(&___nl__im__10);
#line 500
c_rt_lib0clear(&___nl__im__11);
#line 500
c_rt_lib0clear(&___nl__im__12);
#line 500
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 500
c_rt_lib0clear(&___nl__im__7);
#line 500
c_rt_lib0clear(&___nl__im__9);
#line 500
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 500
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 500
c_rt_lib0clear(&___nl__im__6);
#line 500
c_rt_lib0clear(&___nl__im__15);
#line 500
c_rt_lib0clear(&___nl__im__0);
#line 500
//clear ___nl__bool__2;
#line 500
return ___nl__im__5;
#line 501
goto label_56;
#line 501
label_32:
;
#line 501
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 501
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 501
c_rt_lib0clear(&___nl__im__17);
#line 501
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 501
c_rt_lib0clear(&___nl__im__16);
#line 501
___nl__bool__2 = !___nl__bool__2;
#line 501
if(___nl__bool__2){ goto label_52;}
#line 502
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 502
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 502
c_rt_lib0clear(&___nl__im__20);
#line 502
c_rt_lib0move(&___nl__im__21,___get_global_string_const(20));
#line 502
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 502
c_rt_lib0clear(&___nl__im__19);
#line 502
c_rt_lib0clear(&___nl__im__21);
#line 502
c_rt_lib0clear(&___nl__im__0);
#line 502
//clear ___nl__bool__2;
#line 502
c_rt_lib0clear(&___nl__im__5);
#line 502
return ___nl__im__18;
#line 503
goto label_56;
#line 503
label_52:
;
#line 504
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 504
nl_die_arg(___nl__im__22);
#line 505
goto label_56;
#line 505
label_56:
;
#line 505
//clear ___nl__bool__2;
#line 505
c_rt_lib0clear(&___nl__im__5);
#line 505
c_rt_lib0clear(&___nl__im__18);
#line 505
c_rt_lib0clear(&___nl__im__22);
return NULL;

}

ImmT  generator_js_priv0get_hash_next_iter(nlasm0hash_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
#line 509
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 509
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 509
c_rt_lib0clear(&___nl__im__4);
#line 509
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 509
c_rt_lib0clear(&___nl__im__3);
#line 509
___nl__bool__2 = !___nl__bool__2;
#line 509
if(___nl__bool__2){ goto label_32;}
#line 510
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 510
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 510
c_rt_lib0clear(&___nl__im__8);
#line 511
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 511
c_rt_lib0move(&___nl__im__11,___get_global_string_const(284));
#line 511
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 511
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 511
c_rt_lib0clear(&___nl__im__14);
#line 511
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 511
c_rt_lib0clear(&___nl__im__13);
#line 511
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 511
c_rt_lib0clear(&___nl__im__10);
#line 511
c_rt_lib0clear(&___nl__im__11);
#line 511
c_rt_lib0clear(&___nl__im__12);
#line 511
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 511
c_rt_lib0clear(&___nl__im__7);
#line 511
c_rt_lib0clear(&___nl__im__9);
#line 511
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 511
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 511
c_rt_lib0clear(&___nl__im__6);
#line 511
c_rt_lib0clear(&___nl__im__15);
#line 511
c_rt_lib0clear(&___nl__im__0);
#line 511
//clear ___nl__bool__2;
#line 511
return ___nl__im__5;
#line 512
goto label_56;
#line 512
label_32:
;
#line 512
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 512
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 512
c_rt_lib0clear(&___nl__im__17);
#line 512
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 512
c_rt_lib0clear(&___nl__im__16);
#line 512
___nl__bool__2 = !___nl__bool__2;
#line 512
if(___nl__bool__2){ goto label_52;}
#line 513
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 513
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 513
c_rt_lib0clear(&___nl__im__20);
#line 513
c_rt_lib0move(&___nl__im__21,___get_global_string_const(795));
#line 513
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 513
c_rt_lib0clear(&___nl__im__19);
#line 513
c_rt_lib0clear(&___nl__im__21);
#line 513
c_rt_lib0clear(&___nl__im__0);
#line 513
//clear ___nl__bool__2;
#line 513
c_rt_lib0clear(&___nl__im__5);
#line 513
return ___nl__im__18;
#line 514
goto label_56;
#line 514
label_52:
;
#line 515
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 515
nl_die_arg(___nl__im__22);
#line 516
goto label_56;
#line 516
label_56:
;
#line 516
//clear ___nl__bool__2;
#line 516
c_rt_lib0clear(&___nl__im__5);
#line 516
c_rt_lib0clear(&___nl__im__18);
#line 516
c_rt_lib0clear(&___nl__im__22);
return NULL;

}

ImmT  generator_js_priv0get_hash_get_key_iter(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
#line 520
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 520
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 520
c_rt_lib0clear(&___nl__im__4);
#line 520
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 520
c_rt_lib0clear(&___nl__im__3);
#line 520
___nl__bool__2 = !___nl__bool__2;
#line 520
if(___nl__bool__2){ goto label_32;}
#line 521
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 521
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 521
c_rt_lib0clear(&___nl__im__8);
#line 522
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 522
c_rt_lib0move(&___nl__im__11,___get_global_string_const(283));
#line 522
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 522
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 522
c_rt_lib0clear(&___nl__im__14);
#line 522
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 522
c_rt_lib0clear(&___nl__im__13);
#line 522
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 522
c_rt_lib0clear(&___nl__im__10);
#line 522
c_rt_lib0clear(&___nl__im__11);
#line 522
c_rt_lib0clear(&___nl__im__12);
#line 522
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 522
c_rt_lib0clear(&___nl__im__7);
#line 522
c_rt_lib0clear(&___nl__im__9);
#line 522
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 522
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 522
c_rt_lib0clear(&___nl__im__6);
#line 522
c_rt_lib0clear(&___nl__im__15);
#line 522
c_rt_lib0clear(&___nl__im__0);
#line 522
//clear ___nl__bool__2;
#line 522
return ___nl__im__5;
#line 523
goto label_82;
#line 523
label_32:
;
#line 523
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 523
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 523
c_rt_lib0clear(&___nl__im__17);
#line 523
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 523
c_rt_lib0clear(&___nl__im__16);
#line 523
___nl__bool__2 = !___nl__bool__2;
#line 523
if(___nl__bool__2){ goto label_78;}
#line 524
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 524
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value(___nl__im__19));
#line 524
c_rt_lib0clear(&___nl__im__19);
#line 525
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 525
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_value_to_assign(___nl__im__27));
#line 525
c_rt_lib0clear(&___nl__im__27);
#line 526
c_rt_lib0move(&___nl__im__29,___get_global_string_const(291));
#line 526
c_rt_lib0move(&___nl__im__28, generator_js_priv0imm_call(___nl__im__29));
#line 526
c_rt_lib0clear(&___nl__im__29);
#line 526
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 526
c_rt_lib0clear(&___nl__im__26);
#line 526
c_rt_lib0clear(&___nl__im__28);
#line 526
c_rt_lib0move(&___nl__im__30,___get_global_string_const(796));
#line 526
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 526
c_rt_lib0clear(&___nl__im__25);
#line 526
c_rt_lib0clear(&___nl__im__30);
#line 526
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__18));
#line 526
c_rt_lib0clear(&___nl__im__24);
#line 526
c_rt_lib0move(&___nl__im__31,___get_global_string_const(797));
#line 526
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__31));
#line 526
c_rt_lib0clear(&___nl__im__23);
#line 526
c_rt_lib0clear(&___nl__im__31);
#line 526
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 526
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__33));
#line 526
c_rt_lib0clear(&___nl__im__33);
#line 526
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__32));
#line 526
c_rt_lib0clear(&___nl__im__22);
#line 526
c_rt_lib0clear(&___nl__im__32);
#line 526
c_rt_lib0move(&___nl__im__34,___get_global_string_const(798));
#line 526
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__34));
#line 526
c_rt_lib0clear(&___nl__im__21);
#line 526
c_rt_lib0clear(&___nl__im__34);
#line 526
c_rt_lib0clear(&___nl__im__0);
#line 526
//clear ___nl__bool__2;
#line 526
c_rt_lib0clear(&___nl__im__5);
#line 526
c_rt_lib0clear(&___nl__im__18);
#line 526
return ___nl__im__20;
#line 527
goto label_82;
#line 527
label_78:
;
#line 528
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 528
nl_die_arg(___nl__im__35);
#line 529
goto label_82;
#line 529
label_82:
;
#line 529
//clear ___nl__bool__2;
#line 529
c_rt_lib0clear(&___nl__im__5);
#line 529
c_rt_lib0clear(&___nl__im__18);
#line 529
c_rt_lib0clear(&___nl__im__20);
#line 529
c_rt_lib0clear(&___nl__im__35);
return NULL;

}

ImmT  generator_js_priv0get_hash_is_end(nlasm0hash_dest_iter_t0type ___nl__im__0,INT * ___ref___int__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
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
ImmT  ___nl__im__30 = NULL;
#line 533
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 533
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(215)));
#line 533
c_rt_lib0clear(&___nl__im__4);
#line 533
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(138));
#line 533
c_rt_lib0clear(&___nl__im__3);
#line 533
___nl__bool__2 = !___nl__bool__2;
#line 533
if(___nl__bool__2){ goto label_32;}
#line 534
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 534
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 534
c_rt_lib0clear(&___nl__im__8);
#line 535
c_rt_lib0move(&___nl__im__10,___get_global_string_const(280));
#line 535
c_rt_lib0move(&___nl__im__11,___get_global_string_const(282));
#line 535
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 535
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__14));
#line 535
c_rt_lib0clear(&___nl__im__14);
#line 535
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 535
c_rt_lib0clear(&___nl__im__13);
#line 535
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 535
c_rt_lib0clear(&___nl__im__10);
#line 535
c_rt_lib0clear(&___nl__im__11);
#line 535
c_rt_lib0clear(&___nl__im__12);
#line 535
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 535
c_rt_lib0clear(&___nl__im__7);
#line 535
c_rt_lib0clear(&___nl__im__9);
#line 535
c_rt_lib0move(&___nl__im__15,___get_global_string_const(450));
#line 535
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 535
c_rt_lib0clear(&___nl__im__6);
#line 535
c_rt_lib0clear(&___nl__im__15);
#line 535
c_rt_lib0clear(&___nl__im__0);
#line 535
//clear ___nl__bool__2;
#line 535
return ___nl__im__5;
#line 536
goto label_72;
#line 536
label_32:
;
#line 536
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 536
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(215)));
#line 536
c_rt_lib0clear(&___nl__im__17);
#line 536
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(135));
#line 536
c_rt_lib0clear(&___nl__im__16);
#line 536
___nl__bool__2 = !___nl__bool__2;
#line 536
if(___nl__bool__2){ goto label_68;}
#line 537
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 537
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__23));
#line 537
c_rt_lib0clear(&___nl__im__23);
#line 538
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(372)));
#line 538
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 538
c_rt_lib0clear(&___nl__im__25);
#line 538
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 538
c_rt_lib0clear(&___nl__im__22);
#line 538
c_rt_lib0clear(&___nl__im__24);
#line 538
c_rt_lib0move(&___nl__im__26,___get_global_string_const(799));
#line 538
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 538
c_rt_lib0clear(&___nl__im__21);
#line 538
c_rt_lib0clear(&___nl__im__26);
#line 538
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(135)));
#line 538
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 538
c_rt_lib0clear(&___nl__im__28);
#line 538
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 538
c_rt_lib0clear(&___nl__im__20);
#line 538
c_rt_lib0clear(&___nl__im__27);
#line 538
c_rt_lib0move(&___nl__im__29,___get_global_string_const(800));
#line 538
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 538
c_rt_lib0clear(&___nl__im__19);
#line 538
c_rt_lib0clear(&___nl__im__29);
#line 538
c_rt_lib0clear(&___nl__im__0);
#line 538
//clear ___nl__bool__2;
#line 538
c_rt_lib0clear(&___nl__im__5);
#line 538
return ___nl__im__18;
#line 539
goto label_72;
#line 539
label_68:
;
#line 540
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 540
nl_die_arg(___nl__im__30);
#line 541
goto label_72;
#line 541
label_72:
;
#line 541
//clear ___nl__bool__2;
#line 541
c_rt_lib0clear(&___nl__im__5);
#line 541
c_rt_lib0clear(&___nl__im__18);
#line 541
c_rt_lib0clear(&___nl__im__30);
return NULL;

}

ImmT  generator_js_priv0get_arr(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
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
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 545
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 546
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 546
___nl__bool__3 = !___nl__bool__3;
#line 546
if(___nl__bool__3){ goto label_36;}
#line 547
c_rt_lib0move(&___nl__im__6,___get_global_string_const(134));
#line 547
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 547
c_rt_lib0clear(&___nl__im__6);
#line 547
c_rt_lib0move(&___nl__im__7,___get_global_string_const(801));
#line 547
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 547
c_rt_lib0clear(&___nl__im__5);
#line 547
c_rt_lib0clear(&___nl__im__7);
#line 547
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 547
c_rt_lib0clear(&___nl__im__4);
#line 548
___nl__int__9 = 0;
#line 548
___nl__int__10 = 1;
#line 548
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 548
label_16:
;
#line 548
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 548
if(___nl__bool__12){ goto label_31;}
#line 548
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 548
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 548
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_register_value(___nl__im__8));
#line 548
c_rt_lib0move(&___nl__im__16,___get_global_string_const(323));
#line 548
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 548
c_rt_lib0clear(&___nl__im__15);
#line 548
c_rt_lib0clear(&___nl__im__16);
#line 548
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 548
c_rt_lib0clear(&___nl__im__14);
#line 548
c_rt_lib0clear(&___nl__im__8);
#line 548
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 548
goto label_16;
#line 548
label_31:
;
#line 549
c_rt_lib0move(&___nl__im__17,___get_global_string_const(508));
#line 549
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 549
c_rt_lib0clear(&___nl__im__17);
#line 550
goto label_70;
#line 550
label_36:
;
#line 550
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(134));
#line 550
___nl__bool__3 = !___nl__bool__3;
#line 550
if(___nl__bool__3){ goto label_66;}
#line 551
c_rt_lib0move(&___nl__im__18,___get_global_string_const(325));
#line 551
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 551
c_rt_lib0clear(&___nl__im__18);
#line 552
___nl__int__20 = 0;
#line 552
___nl__int__21 = 1;
#line 552
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 552
label_46:
;
#line 552
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 552
if(___nl__bool__23){ goto label_61;}
#line 552
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 552
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 552
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_reference(___nl__im__19));
#line 552
c_rt_lib0move(&___nl__im__27,___get_global_string_const(323));
#line 552
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 552
c_rt_lib0clear(&___nl__im__26);
#line 552
c_rt_lib0clear(&___nl__im__27);
#line 552
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 552
c_rt_lib0clear(&___nl__im__25);
#line 552
c_rt_lib0clear(&___nl__im__19);
#line 552
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 552
goto label_46;
#line 552
label_61:
;
#line 553
c_rt_lib0move(&___nl__im__28,___get_global_string_const(326));
#line 553
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 553
c_rt_lib0clear(&___nl__im__28);
#line 554
goto label_70;
#line 554
label_66:
;
#line 555
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 555
nl_die_arg(___nl__im__29);
#line 556
goto label_70;
#line 556
label_70:
;
#line 556
//clear ___nl__bool__3;
#line 556
c_rt_lib0clear(&___nl__im__8);
#line 556
//clear ___nl__int__9;
#line 556
//clear ___nl__int__10;
#line 556
//clear ___nl__int__11;
#line 556
//clear ___nl__bool__12;
#line 556
c_rt_lib0clear(&___nl__im__13);
#line 556
c_rt_lib0clear(&___nl__im__19);
#line 556
//clear ___nl__int__20;
#line 556
//clear ___nl__int__21;
#line 556
//clear ___nl__int__22;
#line 556
//clear ___nl__bool__23;
#line 556
c_rt_lib0clear(&___nl__im__24);
#line 556
c_rt_lib0clear(&___nl__im__29);
#line 557
c_rt_lib0clear(&___nl__im__0);
#line 557
c_rt_lib0clear(&___nl__im__1);
#line 557
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0imm_call(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 561
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 561
c_rt_lib0move(&___nl__im__4,___get_global_string_const(802));
#line 561
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 561
c_rt_lib0clear(&___nl__im__3);
#line 561
c_rt_lib0clear(&___nl__im__4);
#line 561
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 561
c_rt_lib0clear(&___nl__im__2);
#line 561
c_rt_lib0clear(&___nl__im__0);
#line 561
return ___nl__im__1;
#line 561
c_rt_lib0clear(&___nl__im__0);
#line 561
c_rt_lib0clear(&___nl__im__1);
#line 561
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_bin_op(nlasm0bin_op0type ___nl__im__0,INT * ___ref___int__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
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
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
#line 565
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 565
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 565
c_rt_lib0clear(&___nl__im__3);
#line 566
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 566
c_rt_lib0move(&___nl__im__6,___get_global_string_const(397));
#line 566
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 566
c_rt_lib0clear(&___nl__im__5);
#line 566
c_rt_lib0clear(&___nl__im__6);
#line 566
if(___nl__bool__4){ goto label_14;}
#line 566
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 566
c_rt_lib0move(&___nl__im__8,___get_global_string_const(387));
#line 566
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 566
c_rt_lib0clear(&___nl__im__7);
#line 566
c_rt_lib0clear(&___nl__im__8);
#line 566
label_14:
;
#line 566
if(___nl__bool__4){ goto label_21;}
#line 566
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 566
c_rt_lib0move(&___nl__im__10,___get_global_string_const(389));
#line 566
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 566
c_rt_lib0clear(&___nl__im__9);
#line 566
c_rt_lib0clear(&___nl__im__10);
#line 566
label_21:
;
#line 566
if(___nl__bool__4){ goto label_28;}
#line 566
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 566
c_rt_lib0move(&___nl__im__12,___get_global_string_const(395));
#line 566
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 566
c_rt_lib0clear(&___nl__im__11);
#line 566
c_rt_lib0clear(&___nl__im__12);
#line 566
label_28:
;
#line 566
if(___nl__bool__4){ goto label_35;}
#line 566
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 566
c_rt_lib0move(&___nl__im__14,___get_global_string_const(391));
#line 566
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 566
c_rt_lib0clear(&___nl__im__13);
#line 566
c_rt_lib0clear(&___nl__im__14);
#line 566
label_35:
;
#line 566
if(___nl__bool__4){ goto label_42;}
#line 567
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 567
c_rt_lib0move(&___nl__im__16,___get_global_string_const(393));
#line 567
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 567
c_rt_lib0clear(&___nl__im__15);
#line 567
c_rt_lib0clear(&___nl__im__16);
#line 567
label_42:
;
#line 567
___nl__bool__4 = !___nl__bool__4;
#line 567
if(___nl__bool__4){ goto label_69;}
#line 568
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 568
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__18));
#line 568
c_rt_lib0clear(&___nl__im__18);
#line 569
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 569
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 569
c_rt_lib0clear(&___nl__im__20);
#line 570
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 570
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 570
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 570
c_rt_lib0clear(&___nl__im__24);
#line 570
c_rt_lib0clear(&___nl__im__25);
#line 570
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__19));
#line 570
c_rt_lib0clear(&___nl__im__23);
#line 570
c_rt_lib0move(&___nl__im__26,___get_global_string_const(450));
#line 570
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 570
c_rt_lib0clear(&___nl__im__22);
#line 570
c_rt_lib0clear(&___nl__im__26);
#line 570
c_rt_lib0clear(&___nl__im__0);
#line 570
c_rt_lib0clear(&___nl__im__2);
#line 570
//clear ___nl__bool__4;
#line 570
c_rt_lib0clear(&___nl__im__17);
#line 570
c_rt_lib0clear(&___nl__im__19);
#line 570
return ___nl__im__21;
#line 571
goto label_181;
#line 571
label_69:
;
#line 571
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 571
c_rt_lib0move(&___nl__im__28,___get_global_string_const(379));
#line 571
___nl__bool__4 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 571
c_rt_lib0clear(&___nl__im__27);
#line 571
c_rt_lib0clear(&___nl__im__28);
#line 571
if(___nl__bool__4){ goto label_81;}
#line 571
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 571
c_rt_lib0move(&___nl__im__30,___get_global_string_const(380));
#line 571
___nl__bool__4 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 571
c_rt_lib0clear(&___nl__im__29);
#line 571
c_rt_lib0clear(&___nl__im__30);
#line 571
label_81:
;
#line 571
___nl__bool__4 = !___nl__bool__4;
#line 571
if(___nl__bool__4){ goto label_105;}
#line 572
c_rt_lib0move(&___nl__im__33,___get_global_string_const(280));
#line 572
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 572
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 572
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 572
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__37));
#line 572
c_rt_lib0clear(&___nl__im__36);
#line 572
c_rt_lib0clear(&___nl__im__37);
#line 572
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_int_call_sim(___nl__im__33, ___nl__im__34, ___nl__im__35));
#line 572
c_rt_lib0clear(&___nl__im__33);
#line 572
c_rt_lib0clear(&___nl__im__34);
#line 572
c_rt_lib0clear(&___nl__im__35);
#line 572
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 572
c_rt_lib0clear(&___nl__im__32);
#line 572
c_rt_lib0clear(&___nl__im__0);
#line 572
c_rt_lib0clear(&___nl__im__2);
#line 572
//clear ___nl__bool__4;
#line 572
c_rt_lib0clear(&___nl__im__17);
#line 572
c_rt_lib0clear(&___nl__im__19);
#line 572
c_rt_lib0clear(&___nl__im__21);
#line 572
return ___nl__im__31;
#line 573
goto label_181;
#line 573
label_105:
;
#line 573
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 573
c_rt_lib0move(&___nl__im__39,___get_global_string_const(115));
#line 573
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 573
c_rt_lib0clear(&___nl__im__38);
#line 573
c_rt_lib0clear(&___nl__im__39);
#line 573
___nl__bool__4 = !___nl__bool__4;
#line 573
if(___nl__bool__4){ goto label_147;}
#line 574
c_rt_lib0move(&___nl__im__43,___get_global_string_const(280));
#line 574
c_rt_lib0move(&___nl__im__44,___get_global_string_const(803));
#line 575
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 575
c_rt_lib0move(&___nl__im__47, generator_js_priv0get_register_value(___nl__im__48));
#line 575
c_rt_lib0clear(&___nl__im__48);
#line 575
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__47));
#line 575
c_rt_lib0clear(&___nl__im__47);
#line 575
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 575
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value(___nl__im__51));
#line 575
c_rt_lib0clear(&___nl__im__51);
#line 575
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__50));
#line 575
c_rt_lib0clear(&___nl__im__50);
#line 575
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__49));
#line 575
c_rt_lib0clear(&___nl__im__46);
#line 575
c_rt_lib0clear(&___nl__im__49);
#line 575
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_internal_call(___nl__im__43, ___nl__im__44, ___nl__im__45, ___ref___int__1));
#line 575
c_rt_lib0clear(&___nl__im__43);
#line 575
c_rt_lib0clear(&___nl__im__44);
#line 575
c_rt_lib0clear(&___nl__im__45);
#line 575
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__2, ___nl__im__42));
#line 575
c_rt_lib0clear(&___nl__im__42);
#line 575
c_rt_lib0move(&___nl__im__52,___get_global_string_const(450));
#line 575
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 575
c_rt_lib0clear(&___nl__im__41);
#line 575
c_rt_lib0clear(&___nl__im__52);
#line 575
c_rt_lib0clear(&___nl__im__0);
#line 575
c_rt_lib0clear(&___nl__im__2);
#line 575
//clear ___nl__bool__4;
#line 575
c_rt_lib0clear(&___nl__im__17);
#line 575
c_rt_lib0clear(&___nl__im__19);
#line 575
c_rt_lib0clear(&___nl__im__21);
#line 575
c_rt_lib0clear(&___nl__im__31);
#line 575
return ___nl__im__40;
#line 576
goto label_181;
#line 576
label_147:
;
#line 577
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(285)));
#line 577
c_rt_lib0move(&___nl__im__53, generator_js_priv0get_register_value(___nl__im__54));
#line 577
c_rt_lib0clear(&___nl__im__54);
#line 578
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(286)));
#line 578
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value(___nl__im__56));
#line 578
c_rt_lib0clear(&___nl__im__56);
#line 579
c_rt_lib0move(&___nl__im__62,___get_global_string_const(804));
#line 579
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__2, ___nl__im__62));
#line 579
c_rt_lib0clear(&___nl__im__62);
#line 579
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__53));
#line 579
c_rt_lib0clear(&___nl__im__61);
#line 579
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 579
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 579
c_rt_lib0clear(&___nl__im__60);
#line 579
c_rt_lib0clear(&___nl__im__63);
#line 579
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__55));
#line 579
c_rt_lib0clear(&___nl__im__59);
#line 579
c_rt_lib0move(&___nl__im__64,___get_global_string_const(516));
#line 579
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__64));
#line 579
c_rt_lib0clear(&___nl__im__58);
#line 579
c_rt_lib0clear(&___nl__im__64);
#line 579
c_rt_lib0clear(&___nl__im__0);
#line 579
c_rt_lib0clear(&___nl__im__2);
#line 579
//clear ___nl__bool__4;
#line 579
c_rt_lib0clear(&___nl__im__17);
#line 579
c_rt_lib0clear(&___nl__im__19);
#line 579
c_rt_lib0clear(&___nl__im__21);
#line 579
c_rt_lib0clear(&___nl__im__31);
#line 579
c_rt_lib0clear(&___nl__im__40);
#line 579
c_rt_lib0clear(&___nl__im__53);
#line 579
c_rt_lib0clear(&___nl__im__55);
#line 579
return ___nl__im__57;
#line 580
goto label_181;
#line 580
label_181:
;
#line 580
//clear ___nl__bool__4;
#line 580
c_rt_lib0clear(&___nl__im__17);
#line 580
c_rt_lib0clear(&___nl__im__19);
#line 580
c_rt_lib0clear(&___nl__im__21);
#line 580
c_rt_lib0clear(&___nl__im__31);
#line 580
c_rt_lib0clear(&___nl__im__40);
#line 580
c_rt_lib0clear(&___nl__im__53);
#line 580
c_rt_lib0clear(&___nl__im__55);
#line 580
c_rt_lib0clear(&___nl__im__57);
return NULL;

}

ImmT  generator_js_priv0get_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,nlasm0reg_t0type ___nl__im__3,INT * ___ref___int__4) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
generator_js_priv0__const__init();
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
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
INT  ___nl__int__22 = 0;
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
ImmT  ___nl__im__34 = NULL;
#line 586
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 586
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 586
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 586
c_rt_lib0clear(&___nl__im__7);
#line 586
c_rt_lib0clear(&___nl__im__8);
#line 586
c_rt_lib0move(&___nl__im__9,___get_global_string_const(465));
#line 586
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 586
c_rt_lib0clear(&___nl__im__6);
#line 586
c_rt_lib0clear(&___nl__im__9);
#line 587
___nl__int__10 = 0;
#line 588
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 589
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 590
___nl__int__14 = 0;
#line 590
___nl__int__15 = 1;
#line 590
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 590
label_15:
;
#line 590
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 590
if(___nl__bool__17){ goto label_58;}
#line 590
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 590
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 591
___nl__int__20 = 0;
#line 591
___nl__bool__19 = ___nl__int__10 == ___nl__int__20;
#line 591
//clear ___nl__int__20;
#line 591
___nl__bool__19 = !___nl__bool__19;
#line 591
___nl__bool__19 = !___nl__bool__19;
#line 591
if(___nl__bool__19){ goto label_30;}
#line 591
c_rt_lib0move(&___nl__im__21,___get_global_string_const(323));
#line 591
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__21));
#line 591
c_rt_lib0clear(&___nl__im__21);
#line 591
goto label_30;
#line 591
label_30:
;
#line 591
//clear ___nl__bool__19;
#line 592
___nl__int__22 = 1;
#line 592
___nl__int__10 = ___nl__int__10 + ___nl__int__22;
#line 592
//clear ___nl__int__22;
#line 593
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(39));
#line 593
if(___nl__bool__23){ goto label_42;}
#line 595
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(234));
#line 595
if(___nl__bool__23){ goto label_47;}
#line 595
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 595
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__13));
#line 595
nl_die_arg(___nl__im__24);
#line 593
label_42:
;
#line 593
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(39)));
#line 593
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 594
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__25, ___nl__int__10, (*___ref___int__4)));
#line 595
goto label_54;
#line 595
label_47:
;
#line 595
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(234)));
#line 595
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 596
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value(___nl__im__27));
#line 596
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__29));
#line 596
c_rt_lib0clear(&___nl__im__29);
#line 597
goto label_54;
#line 597
label_54:
;
#line 597
c_rt_lib0clear(&___nl__im__13);
#line 598
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 598
goto label_15;
#line 598
label_58:
;
#line 599
___nl__int__30 = 1;
#line 599
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__30;
#line 599
//clear ___nl__int__30;
#line 600
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 600
c_rt_lib0move(&___nl__im__34,___get_global_string_const(516));
#line 600
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 600
c_rt_lib0clear(&___nl__im__33);
#line 600
c_rt_lib0clear(&___nl__im__34);
#line 600
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__12));
#line 600
c_rt_lib0clear(&___nl__im__32);
#line 600
c_rt_lib0clear(&___nl__im__0);
#line 600
c_rt_lib0clear(&___nl__im__1);
#line 600
c_rt_lib0clear(&___nl__im__2);
#line 600
c_rt_lib0clear(&___nl__im__3);
#line 600
c_rt_lib0clear(&___nl__im__5);
#line 600
//clear ___nl__int__10;
#line 600
c_rt_lib0clear(&___nl__im__11);
#line 600
c_rt_lib0clear(&___nl__im__12);
#line 600
c_rt_lib0clear(&___nl__im__13);
#line 600
//clear ___nl__int__14;
#line 600
//clear ___nl__int__15;
#line 600
//clear ___nl__int__16;
#line 600
//clear ___nl__bool__17;
#line 600
c_rt_lib0clear(&___nl__im__18);
#line 600
//clear ___nl__bool__23;
#line 600
c_rt_lib0clear(&___nl__im__24);
#line 600
c_rt_lib0clear(&___nl__im__25);
#line 600
c_rt_lib0clear(&___nl__im__26);
#line 600
c_rt_lib0clear(&___nl__im__27);
#line 600
c_rt_lib0clear(&___nl__im__28);
#line 600
return ___nl__im__31;
return NULL;

}

ImmT  generator_js_priv0get_ov_mk(nlasm0ov_mk_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1,INT * ___ref___int__2) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
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
INT  ___nl__int__32 = 0;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__string__34 = NULL;
ImmT  ___nl__im__35 = NULL;
bool  ___nl__bool__36 = false;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
#line 605
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 605
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value_to_assign(___nl__im__4));
#line 605
c_rt_lib0clear(&___nl__im__4);
#line 606
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 606
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(215)));
#line 606
c_rt_lib0clear(&___nl__im__7);
#line 606
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(138));
#line 606
c_rt_lib0clear(&___nl__im__6);
#line 606
___nl__bool__5 = !___nl__bool__5;
#line 606
if(___nl__bool__5){ goto label_73;}
#line 607
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 607
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(288));
#line 607
if(___nl__bool__9){ goto label_18;}
#line 610
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(360));
#line 610
if(___nl__bool__9){ goto label_52;}
#line 610
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 610
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__8));
#line 610
nl_die_arg(___nl__im__10);
#line 607
label_18:
;
#line 607
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(288)));
#line 607
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 608
c_rt_lib0move(&___nl__im__16,___get_global_string_const(280));
#line 608
c_rt_lib0move(&___nl__im__17,___get_global_string_const(588));
#line 609
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 609
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_const_value_aggr(___nl__im__21, ___ref___im__1));
#line 609
c_rt_lib0clear(&___nl__im__21);
#line 609
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__20));
#line 609
c_rt_lib0clear(&___nl__im__20);
#line 609
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__11));
#line 609
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__22));
#line 609
c_rt_lib0clear(&___nl__im__19);
#line 609
c_rt_lib0clear(&___nl__im__22);
#line 609
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_internal_call(___nl__im__16, ___nl__im__17, ___nl__im__18, ___ref___int__2));
#line 609
c_rt_lib0clear(&___nl__im__16);
#line 609
c_rt_lib0clear(&___nl__im__17);
#line 609
c_rt_lib0clear(&___nl__im__18);
#line 609
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__3, ___nl__im__15));
#line 609
c_rt_lib0clear(&___nl__im__15);
#line 609
c_rt_lib0move(&___nl__im__23,___get_global_string_const(450));
#line 609
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 609
c_rt_lib0clear(&___nl__im__14);
#line 609
c_rt_lib0clear(&___nl__im__23);
#line 609
c_rt_lib0clear(&___nl__im__0);
#line 609
c_rt_lib0clear(&___nl__im__3);
#line 609
//clear ___nl__bool__5;
#line 609
c_rt_lib0clear(&___nl__im__8);
#line 609
//clear ___nl__bool__9;
#line 609
c_rt_lib0clear(&___nl__im__10);
#line 609
c_rt_lib0clear(&___nl__im__11);
#line 609
c_rt_lib0clear(&___nl__im__12);
#line 609
return ___nl__im__13;
#line 610
goto label_71;
#line 610
label_52:
;
#line 611
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 611
c_rt_lib0move(&___nl__im__26, ov0mk(___nl__im__27));
#line 611
c_rt_lib0clear(&___nl__im__27);
#line 611
c_rt_lib0move(&___nl__im__25, generator_js_priv0get_const_value_aggr(___nl__im__26, ___ref___im__1));
#line 611
c_rt_lib0clear(&___nl__im__26);
#line 611
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 611
c_rt_lib0clear(&___nl__im__25);
#line 611
c_rt_lib0clear(&___nl__im__0);
#line 611
c_rt_lib0clear(&___nl__im__3);
#line 611
//clear ___nl__bool__5;
#line 611
c_rt_lib0clear(&___nl__im__8);
#line 611
//clear ___nl__bool__9;
#line 611
c_rt_lib0clear(&___nl__im__10);
#line 611
c_rt_lib0clear(&___nl__im__11);
#line 611
c_rt_lib0clear(&___nl__im__12);
#line 611
c_rt_lib0clear(&___nl__im__13);
#line 611
return ___nl__im__24;
#line 612
goto label_71;
#line 612
label_71:
;
#line 613
goto label_137;
#line 613
label_73:
;
#line 613
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 613
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(215)));
#line 613
c_rt_lib0clear(&___nl__im__29);
#line 613
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(571));
#line 613
c_rt_lib0clear(&___nl__im__28);
#line 613
___nl__bool__5 = !___nl__bool__5;
#line 613
if(___nl__bool__5){ goto label_133;}
#line 614
c_rt_lib0move(&___nl__im__31,___get_global_string_const(805));
#line 614
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(575)));
#line 614
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 614
c_rt_lib0clear(&___nl__im__33);
#line 614
c_rt_lib0move(&___nl__string__34, c_rt_lib0int_to_string(___nl__int__32));
#line 614
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__string__34));
#line 614
c_rt_lib0clear(&___nl__im__31);
#line 614
//clear ___nl__int__32;
#line 614
c_rt_lib0clear(&___nl__string__34);
#line 614
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 614
c_rt_lib0clear(&___nl__im__30);
#line 615
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 615
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(288));
#line 615
if(___nl__bool__36){ goto label_100;}
#line 617
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(360));
#line 617
if(___nl__bool__36){ goto label_111;}
#line 617
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 617
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__35));
#line 617
nl_die_arg(___nl__im__37);
#line 615
label_100:
;
#line 615
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(288)));
#line 615
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 616
c_rt_lib0move(&___nl__im__41,___get_global_string_const(806));
#line 616
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_reference(___nl__im__38));
#line 616
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 616
c_rt_lib0clear(&___nl__im__41);
#line 616
c_rt_lib0clear(&___nl__im__42);
#line 616
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 616
c_rt_lib0clear(&___nl__im__40);
#line 617
goto label_113;
#line 617
label_111:
;
#line 618
goto label_113;
#line 618
label_113:
;
#line 619
c_rt_lib0move(&___nl__im__43,___get_global_string_const(316));
#line 619
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 619
c_rt_lib0clear(&___nl__im__43);
#line 620
c_rt_lib0clear(&___nl__im__0);
#line 620
//clear ___nl__bool__5;
#line 620
c_rt_lib0clear(&___nl__im__8);
#line 620
//clear ___nl__bool__9;
#line 620
c_rt_lib0clear(&___nl__im__10);
#line 620
c_rt_lib0clear(&___nl__im__11);
#line 620
c_rt_lib0clear(&___nl__im__12);
#line 620
c_rt_lib0clear(&___nl__im__13);
#line 620
c_rt_lib0clear(&___nl__im__24);
#line 620
c_rt_lib0clear(&___nl__im__35);
#line 620
//clear ___nl__bool__36;
#line 620
c_rt_lib0clear(&___nl__im__37);
#line 620
c_rt_lib0clear(&___nl__im__38);
#line 620
c_rt_lib0clear(&___nl__im__39);
#line 620
return ___nl__im__3;
#line 621
goto label_137;
#line 621
label_133:
;
#line 622
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 622
nl_die_arg(___nl__im__44);
#line 623
goto label_137;
#line 623
label_137:
;
#line 623
//clear ___nl__bool__5;
#line 623
c_rt_lib0clear(&___nl__im__8);
#line 623
//clear ___nl__bool__9;
#line 623
c_rt_lib0clear(&___nl__im__10);
#line 623
c_rt_lib0clear(&___nl__im__11);
#line 623
c_rt_lib0clear(&___nl__im__12);
#line 623
c_rt_lib0clear(&___nl__im__13);
#line 623
c_rt_lib0clear(&___nl__im__24);
#line 623
c_rt_lib0clear(&___nl__im__35);
#line 623
//clear ___nl__bool__36;
#line 623
c_rt_lib0clear(&___nl__im__37);
#line 623
c_rt_lib0clear(&___nl__im__38);
#line 623
c_rt_lib0clear(&___nl__im__39);
#line 623
c_rt_lib0clear(&___nl__im__44);
return NULL;

}

ImmT  generator_js_priv0get_ov_is(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1,ImmT  ___nl__im__2,INT  ___nl__int__3,INT * ___ref___int__4,generator_js0state_t0type* ___ref___im__5) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_js_priv0__const__init();
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
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__string__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 628
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 628
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(138));
#line 628
c_rt_lib0clear(&___nl__im__7);
#line 628
___nl__bool__6 = !___nl__bool__6;
#line 628
if(___nl__bool__6){ goto label_33;}
#line 629
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 629
c_rt_lib0move(&___nl__im__12,___get_global_string_const(280));
#line 629
c_rt_lib0move(&___nl__im__13,___get_global_string_const(246));
#line 630
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(356), ___nl__im__1));
#line 630
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_str_imm(___nl__im__2, ___ref___im__5));
#line 630
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(291), ___nl__im__17));
#line 630
c_rt_lib0clear(&___nl__im__17);
#line 630
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__16));
#line 630
c_rt_lib0clear(&___nl__im__15);
#line 630
c_rt_lib0clear(&___nl__im__16);
#line 630
c_rt_lib0move(&___nl__im__11, generator_js_priv0get_internal_call(___nl__im__12, ___nl__im__13, ___nl__im__14, ___ref___int__4));
#line 630
c_rt_lib0clear(&___nl__im__12);
#line 630
c_rt_lib0clear(&___nl__im__13);
#line 630
c_rt_lib0clear(&___nl__im__14);
#line 630
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 630
c_rt_lib0clear(&___nl__im__10);
#line 630
c_rt_lib0clear(&___nl__im__11);
#line 630
c_rt_lib0move(&___nl__im__18,___get_global_string_const(450));
#line 630
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 630
c_rt_lib0clear(&___nl__im__9);
#line 630
c_rt_lib0clear(&___nl__im__18);
#line 630
c_rt_lib0clear(&___nl__im__0);
#line 630
c_rt_lib0clear(&___nl__im__1);
#line 630
c_rt_lib0clear(&___nl__im__2);
#line 630
//clear ___nl__int__3;
#line 630
//clear ___nl__bool__6;
#line 630
return ___nl__im__8;
#line 631
goto label_64;
#line 631
label_33:
;
#line 631
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 631
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(571));
#line 631
c_rt_lib0clear(&___nl__im__19);
#line 631
___nl__bool__6 = !___nl__bool__6;
#line 631
if(___nl__bool__6){ goto label_60;}
#line 632
c_rt_lib0move(&___nl__im__23, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 632
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__1));
#line 632
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 632
c_rt_lib0clear(&___nl__im__23);
#line 632
c_rt_lib0clear(&___nl__im__24);
#line 632
c_rt_lib0move(&___nl__im__25,___get_global_string_const(807));
#line 632
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 632
c_rt_lib0clear(&___nl__im__22);
#line 632
c_rt_lib0clear(&___nl__im__25);
#line 632
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__3));
#line 632
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__26));
#line 632
c_rt_lib0clear(&___nl__im__21);
#line 632
c_rt_lib0clear(&___nl__string__26);
#line 632
c_rt_lib0clear(&___nl__im__0);
#line 632
c_rt_lib0clear(&___nl__im__1);
#line 632
c_rt_lib0clear(&___nl__im__2);
#line 632
//clear ___nl__int__3;
#line 632
//clear ___nl__bool__6;
#line 632
c_rt_lib0clear(&___nl__im__8);
#line 632
return ___nl__im__20;
#line 633
goto label_64;
#line 633
label_60:
;
#line 634
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 634
nl_die_arg(___nl__im__27);
#line 635
goto label_64;
#line 635
label_64:
;
#line 635
//clear ___nl__bool__6;
#line 635
c_rt_lib0clear(&___nl__im__8);
#line 635
c_rt_lib0clear(&___nl__im__20);
#line 635
c_rt_lib0clear(&___nl__im__27);
return NULL;

}

ImmT  generator_js_priv0process_ref_reg(ImmT * ___ref___im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2,nlasm0reg_t0type ___nl__im__3,INT  ___nl__int__4,INT  ___nl__int__5) {
c_rt_lib0arg_val(___nl__im__3);
generator_js_priv0__const__init();
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__string__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
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
#line 640
c_rt_lib0move(&___nl__im__9,___get_global_string_const(808));
#line 640
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 640
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 640
c_rt_lib0clear(&___nl__im__9);
#line 640
c_rt_lib0clear(&___nl__string__10);
#line 640
c_rt_lib0move(&___nl__im__11,___get_global_string_const(112));
#line 640
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 640
c_rt_lib0clear(&___nl__im__8);
#line 640
c_rt_lib0clear(&___nl__im__11);
#line 640
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 640
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 640
c_rt_lib0clear(&___nl__im__7);
#line 640
c_rt_lib0clear(&___nl__string__12);
#line 641
c_rt_lib0move(&___nl__im__19,___get_global_string_const(742));
#line 641
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 641
c_rt_lib0clear(&___nl__im__19);
#line 641
c_rt_lib0move(&___nl__im__20,___get_global_string_const(809));
#line 641
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 641
c_rt_lib0clear(&___nl__im__18);
#line 641
c_rt_lib0clear(&___nl__im__20);
#line 641
c_rt_lib0move(&___nl__im__22,___get_global_string_const(39));
#line 641
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 641
c_rt_lib0clear(&___nl__im__22);
#line 641
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 641
c_rt_lib0clear(&___nl__im__17);
#line 641
c_rt_lib0clear(&___nl__im__21);
#line 641
c_rt_lib0move(&___nl__im__23,___get_global_string_const(465));
#line 641
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 641
c_rt_lib0clear(&___nl__im__16);
#line 641
c_rt_lib0clear(&___nl__im__23);
#line 641
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__3));
#line 641
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 641
c_rt_lib0clear(&___nl__im__15);
#line 641
c_rt_lib0clear(&___nl__im__24);
#line 641
c_rt_lib0move(&___nl__im__25,___get_global_string_const(516));
#line 641
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 641
c_rt_lib0clear(&___nl__im__14);
#line 641
c_rt_lib0clear(&___nl__im__25);
#line 641
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 641
c_rt_lib0clear(&___nl__im__13);
#line 642
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 643
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 643
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 643
c_rt_lib0clear(&___nl__im__28);
#line 643
c_rt_lib0move(&___nl__im__29,___get_global_string_const(774));
#line 643
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 643
c_rt_lib0clear(&___nl__im__27);
#line 643
c_rt_lib0clear(&___nl__im__29);
#line 643
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 643
c_rt_lib0clear(&___nl__im__26);
#line 644
c_rt_lib0move(&___nl__im__31,___get_global_string_const(776));
#line 644
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 644
c_rt_lib0clear(&___nl__im__31);
#line 644
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 644
c_rt_lib0clear(&___nl__im__30);
#line 644
c_rt_lib0clear(&___nl__im__3);
#line 644
//clear ___nl__int__4;
#line 644
//clear ___nl__int__5;
#line 644
c_rt_lib0clear(&___nl__im__6);
#line 644
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_internal_call(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,INT * ___ref___int__3) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_js_priv0__const__init();
INT  ___nl__int__4 = 0;
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
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
bool  ___nl__bool__26 = false;
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
#line 650
___nl__int__4 = 0;
#line 651
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 652
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 653
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 653
c_rt_lib0move(&___nl__im__13,___get_global_string_const(115));
#line 653
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 653
c_rt_lib0clear(&___nl__im__12);
#line 653
c_rt_lib0clear(&___nl__im__13);
#line 653
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 653
c_rt_lib0clear(&___nl__im__11);
#line 653
c_rt_lib0move(&___nl__im__14,___get_global_string_const(115));
#line 653
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 653
c_rt_lib0clear(&___nl__im__10);
#line 653
c_rt_lib0clear(&___nl__im__14);
#line 653
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 653
c_rt_lib0clear(&___nl__im__9);
#line 653
c_rt_lib0move(&___nl__im__15,___get_global_string_const(465));
#line 653
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 653
c_rt_lib0clear(&___nl__im__8);
#line 653
c_rt_lib0clear(&___nl__im__15);
#line 654
___nl__int__17 = 0;
#line 654
___nl__int__18 = 1;
#line 654
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 654
label_23:
;
#line 654
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 654
if(___nl__bool__20){ goto label_73;}
#line 654
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 654
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 655
___nl__int__23 = 0;
#line 655
___nl__bool__22 = ___nl__int__4 == ___nl__int__23;
#line 655
//clear ___nl__int__23;
#line 655
___nl__bool__22 = !___nl__bool__22;
#line 655
___nl__bool__22 = !___nl__bool__22;
#line 655
if(___nl__bool__22){ goto label_38;}
#line 655
c_rt_lib0move(&___nl__im__24,___get_global_string_const(323));
#line 655
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__24));
#line 655
c_rt_lib0clear(&___nl__im__24);
#line 655
goto label_38;
#line 655
label_38:
;
#line 655
//clear ___nl__bool__22;
#line 656
___nl__int__25 = 1;
#line 656
___nl__int__4 = ___nl__int__4 + ___nl__int__25;
#line 656
//clear ___nl__int__25;
#line 657
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 657
if(___nl__bool__26){ goto label_52;}
#line 659
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(356));
#line 659
if(___nl__bool__26){ goto label_57;}
#line 661
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(291));
#line 661
if(___nl__bool__26){ goto label_64;}
#line 661
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 661
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__16));
#line 661
nl_die_arg(___nl__im__27);
#line 657
label_52:
;
#line 657
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(39)));
#line 657
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 658
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__28, ___nl__int__4, (*___ref___int__3)));
#line 659
goto label_69;
#line 659
label_57:
;
#line 659
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(356)));
#line 659
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 660
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__30));
#line 660
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__32));
#line 660
c_rt_lib0clear(&___nl__im__32);
#line 661
goto label_69;
#line 661
label_64:
;
#line 661
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(291)));
#line 661
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 662
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__33));
#line 663
goto label_69;
#line 663
label_69:
;
#line 663
c_rt_lib0clear(&___nl__im__16);
#line 664
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 664
goto label_23;
#line 664
label_73:
;
#line 665
___nl__int__35 = 1;
#line 665
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__35;
#line 665
//clear ___nl__int__35;
#line 666
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 666
c_rt_lib0move(&___nl__im__39,___get_global_string_const(516));
#line 666
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 666
c_rt_lib0clear(&___nl__im__38);
#line 666
c_rt_lib0clear(&___nl__im__39);
#line 666
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__6));
#line 666
c_rt_lib0clear(&___nl__im__37);
#line 666
c_rt_lib0clear(&___nl__im__0);
#line 666
c_rt_lib0clear(&___nl__im__1);
#line 666
c_rt_lib0clear(&___nl__im__2);
#line 666
//clear ___nl__int__4;
#line 666
c_rt_lib0clear(&___nl__im__5);
#line 666
c_rt_lib0clear(&___nl__im__6);
#line 666
c_rt_lib0clear(&___nl__im__7);
#line 666
c_rt_lib0clear(&___nl__im__16);
#line 666
//clear ___nl__int__17;
#line 666
//clear ___nl__int__18;
#line 666
//clear ___nl__int__19;
#line 666
//clear ___nl__bool__20;
#line 666
c_rt_lib0clear(&___nl__im__21);
#line 666
//clear ___nl__bool__26;
#line 666
c_rt_lib0clear(&___nl__im__27);
#line 666
c_rt_lib0clear(&___nl__im__28);
#line 666
c_rt_lib0clear(&___nl__im__29);
#line 666
c_rt_lib0clear(&___nl__im__30);
#line 666
c_rt_lib0clear(&___nl__im__31);
#line 666
c_rt_lib0clear(&___nl__im__33);
#line 666
c_rt_lib0clear(&___nl__im__34);
#line 666
return ___nl__im__36;
return NULL;

}

ImmT  generator_js_priv0get_int_call_sim(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
generator_js_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
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
#line 670
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 671
___nl__int__5 = 0;
#line 671
___nl__int__6 = 1;
#line 671
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 671
label_4:
;
#line 671
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 671
if(___nl__bool__8){ goto label_15;}
#line 671
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 671
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 672
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__4));
#line 672
c_rt_lib0array_push(&___nl__im__3, ___nl__im__10);
#line 672
c_rt_lib0clear(&___nl__im__10);
#line 672
c_rt_lib0clear(&___nl__im__4);
#line 673
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 673
goto label_4;
#line 673
label_15:
;
#line 674
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_namespace_name());
#line 674
c_rt_lib0move(&___nl__im__19,___get_global_string_const(115));
#line 674
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 674
c_rt_lib0clear(&___nl__im__18);
#line 674
c_rt_lib0clear(&___nl__im__19);
#line 674
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__0));
#line 674
c_rt_lib0clear(&___nl__im__17);
#line 674
c_rt_lib0move(&___nl__im__20,___get_global_string_const(115));
#line 674
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__20));
#line 674
c_rt_lib0clear(&___nl__im__16);
#line 674
c_rt_lib0clear(&___nl__im__20);
#line 674
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 674
c_rt_lib0clear(&___nl__im__15);
#line 674
c_rt_lib0move(&___nl__im__21,___get_global_string_const(465));
#line 674
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 674
c_rt_lib0clear(&___nl__im__14);
#line 674
c_rt_lib0clear(&___nl__im__21);
#line 674
c_rt_lib0move(&___nl__im__23,___get_global_string_const(337));
#line 674
c_rt_lib0move(&___nl__im__22, array0join(___nl__im__23, ___nl__im__3));
#line 674
c_rt_lib0clear(&___nl__im__23);
#line 674
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 674
c_rt_lib0clear(&___nl__im__13);
#line 674
c_rt_lib0clear(&___nl__im__22);
#line 674
c_rt_lib0move(&___nl__im__24,___get_global_string_const(331));
#line 674
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__24));
#line 674
c_rt_lib0clear(&___nl__im__12);
#line 674
c_rt_lib0clear(&___nl__im__24);
#line 674
c_rt_lib0clear(&___nl__im__0);
#line 674
c_rt_lib0clear(&___nl__im__1);
#line 674
c_rt_lib0clear(&___nl__im__2);
#line 674
c_rt_lib0clear(&___nl__im__3);
#line 674
c_rt_lib0clear(&___nl__im__4);
#line 674
//clear ___nl__int__5;
#line 674
//clear ___nl__int__6;
#line 674
//clear ___nl__int__7;
#line 674
//clear ___nl__bool__8;
#line 674
c_rt_lib0clear(&___nl__im__9);
#line 674
return ___nl__im__11;
#line 674
c_rt_lib0clear(&___nl__im__0);
#line 674
c_rt_lib0clear(&___nl__im__1);
#line 674
c_rt_lib0clear(&___nl__im__2);
#line 674
c_rt_lib0clear(&___nl__im__3);
#line 674
c_rt_lib0clear(&___nl__im__4);
#line 674
//clear ___nl__int__5;
#line 674
//clear ___nl__int__6;
#line 674
//clear ___nl__int__7;
#line 674
//clear ___nl__bool__8;
#line 674
c_rt_lib0clear(&___nl__im__9);
#line 674
c_rt_lib0clear(&___nl__im__11);
#line 674
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_const_arr(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 678
c_rt_lib0move(&___nl__im__3,___get_global_string_const(134));
#line 678
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 678
c_rt_lib0clear(&___nl__im__3);
#line 678
c_rt_lib0move(&___nl__im__4,___get_global_string_const(801));
#line 678
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 678
c_rt_lib0clear(&___nl__im__2);
#line 678
c_rt_lib0clear(&___nl__im__4);
#line 679
___nl__int__6 = 0;
#line 679
___nl__int__7 = 1;
#line 679
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 679
label_10:
;
#line 679
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 679
if(___nl__bool__9){ goto label_25;}
#line 679
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 679
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 679
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_const_value(___nl__im__5));
#line 679
c_rt_lib0move(&___nl__im__13,___get_global_string_const(323));
#line 679
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 679
c_rt_lib0clear(&___nl__im__12);
#line 679
c_rt_lib0clear(&___nl__im__13);
#line 679
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__11));
#line 679
c_rt_lib0clear(&___nl__im__11);
#line 679
c_rt_lib0clear(&___nl__im__5);
#line 679
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 679
goto label_10;
#line 679
label_25:
;
#line 680
c_rt_lib0move(&___nl__im__15,___get_global_string_const(508));
#line 680
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__1, ___nl__im__15));
#line 680
c_rt_lib0clear(&___nl__im__15);
#line 680
c_rt_lib0clear(&___nl__im__0);
#line 680
c_rt_lib0clear(&___nl__im__1);
#line 680
c_rt_lib0clear(&___nl__im__5);
#line 680
//clear ___nl__int__6;
#line 680
//clear ___nl__int__7;
#line 680
//clear ___nl__int__8;
#line 680
//clear ___nl__bool__9;
#line 680
c_rt_lib0clear(&___nl__im__10);
#line 680
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0get_const_hash(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
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
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 684
c_rt_lib0move(&___nl__im__3,___get_global_string_const(135));
#line 684
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 684
c_rt_lib0clear(&___nl__im__3);
#line 684
c_rt_lib0move(&___nl__im__4,___get_global_string_const(810));
#line 684
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 684
c_rt_lib0clear(&___nl__im__2);
#line 684
c_rt_lib0clear(&___nl__im__4);
#line 685
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 685
label_8:
;
#line 685
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 685
if(___nl__bool__6){ goto label_34;}
#line 685
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 685
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 685
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 685
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 685
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 685
c_rt_lib0clear(&___nl__im__13);
#line 685
c_rt_lib0clear(&___nl__im__14);
#line 685
c_rt_lib0move(&___nl__im__15,___get_global_string_const(538));
#line 685
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 685
c_rt_lib0clear(&___nl__im__12);
#line 685
c_rt_lib0clear(&___nl__im__15);
#line 685
c_rt_lib0move(&___nl__im__16, generator_js_priv0get_const_value(___nl__im__7));
#line 685
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 685
c_rt_lib0clear(&___nl__im__11);
#line 685
c_rt_lib0clear(&___nl__im__16);
#line 685
c_rt_lib0move(&___nl__im__17,___get_global_string_const(323));
#line 685
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 685
c_rt_lib0clear(&___nl__im__10);
#line 685
c_rt_lib0clear(&___nl__im__17);
#line 685
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 685
c_rt_lib0clear(&___nl__im__9);
#line 685
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 685
goto label_8;
#line 685
label_34:
;
#line 686
c_rt_lib0move(&___nl__im__19,___get_global_string_const(811));
#line 686
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 686
c_rt_lib0clear(&___nl__im__19);
#line 686
c_rt_lib0clear(&___nl__im__0);
#line 686
c_rt_lib0clear(&___nl__im__1);
#line 686
c_rt_lib0clear(&___nl__im__5);
#line 686
//clear ___nl__bool__6;
#line 686
c_rt_lib0clear(&___nl__im__7);
#line 686
c_rt_lib0clear(&___nl__im__8);
#line 686
return ___nl__im__18;
return NULL;

}

ImmT  generator_js_priv0get_const_ov(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
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
#line 690
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 690
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 690
c_rt_lib0clear(&___nl__im__2);
#line 690
___nl__bool__1 = !___nl__bool__1;
#line 690
if(___nl__bool__1){ goto label_36;}
#line 691
c_rt_lib0move(&___nl__im__9,___get_global_string_const(812));
#line 691
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 691
c_rt_lib0clear(&___nl__im__9);
#line 691
c_rt_lib0move(&___nl__im__10,___get_global_string_const(465));
#line 691
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 691
c_rt_lib0clear(&___nl__im__8);
#line 691
c_rt_lib0clear(&___nl__im__10);
#line 691
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 691
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 691
c_rt_lib0clear(&___nl__im__12);
#line 691
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 691
c_rt_lib0clear(&___nl__im__7);
#line 691
c_rt_lib0clear(&___nl__im__11);
#line 691
c_rt_lib0move(&___nl__im__13,___get_global_string_const(337));
#line 691
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 691
c_rt_lib0clear(&___nl__im__6);
#line 691
c_rt_lib0clear(&___nl__im__13);
#line 692
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 692
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_const_value(___nl__im__15));
#line 692
c_rt_lib0clear(&___nl__im__15);
#line 692
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 692
c_rt_lib0clear(&___nl__im__5);
#line 692
c_rt_lib0clear(&___nl__im__14);
#line 692
c_rt_lib0move(&___nl__im__16,___get_global_string_const(331));
#line 692
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 692
c_rt_lib0clear(&___nl__im__4);
#line 692
c_rt_lib0clear(&___nl__im__16);
#line 692
c_rt_lib0clear(&___nl__im__0);
#line 692
//clear ___nl__bool__1;
#line 692
return ___nl__im__3;
#line 693
goto label_59;
#line 693
label_36:
;
#line 694
c_rt_lib0move(&___nl__im__21,___get_global_string_const(812));
#line 694
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 694
c_rt_lib0clear(&___nl__im__21);
#line 694
c_rt_lib0move(&___nl__im__22,___get_global_string_const(465));
#line 694
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 694
c_rt_lib0clear(&___nl__im__20);
#line 694
c_rt_lib0clear(&___nl__im__22);
#line 694
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 694
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 694
c_rt_lib0clear(&___nl__im__24);
#line 694
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 694
c_rt_lib0clear(&___nl__im__19);
#line 694
c_rt_lib0clear(&___nl__im__23);
#line 694
c_rt_lib0move(&___nl__im__25,___get_global_string_const(813));
#line 694
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 694
c_rt_lib0clear(&___nl__im__18);
#line 694
c_rt_lib0clear(&___nl__im__25);
#line 694
c_rt_lib0clear(&___nl__im__0);
#line 694
//clear ___nl__bool__1;
#line 694
c_rt_lib0clear(&___nl__im__3);
#line 694
return ___nl__im__17;
#line 695
goto label_59;
#line 695
label_59:
;
#line 695
//clear ___nl__bool__1;
#line 695
c_rt_lib0clear(&___nl__im__3);
#line 695
c_rt_lib0clear(&___nl__im__17);
return NULL;

}

ImmT  generator_js_priv0get_const_value(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
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
#line 699
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 699
___nl__bool__1 = !___nl__bool__1;
#line 699
if(___nl__bool__1){ goto label_20;}
#line 700
c_rt_lib0move(&___nl__im__6,___get_global_string_const(413));
#line 700
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 700
c_rt_lib0clear(&___nl__im__6);
#line 700
c_rt_lib0move(&___nl__im__7,___get_global_string_const(465));
#line 700
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 700
c_rt_lib0clear(&___nl__im__5);
#line 700
c_rt_lib0clear(&___nl__im__7);
#line 700
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 700
c_rt_lib0clear(&___nl__im__4);
#line 700
c_rt_lib0move(&___nl__im__8,___get_global_string_const(331));
#line 700
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 700
c_rt_lib0clear(&___nl__im__3);
#line 700
c_rt_lib0clear(&___nl__im__8);
#line 700
c_rt_lib0clear(&___nl__im__0);
#line 700
//clear ___nl__bool__1;
#line 700
return ___nl__im__2;
#line 701
goto label_130;
#line 701
label_20:
;
#line 701
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 701
___nl__bool__1 = !___nl__bool__1;
#line 701
if(___nl__bool__1){ goto label_44;}
#line 702
c_rt_lib0move(&___nl__im__13,___get_global_string_const(291));
#line 702
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 702
c_rt_lib0clear(&___nl__im__13);
#line 702
c_rt_lib0move(&___nl__im__14,___get_global_string_const(465));
#line 702
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 702
c_rt_lib0clear(&___nl__im__12);
#line 702
c_rt_lib0clear(&___nl__im__14);
#line 702
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 702
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 702
c_rt_lib0clear(&___nl__im__11);
#line 702
c_rt_lib0clear(&___nl__im__15);
#line 702
c_rt_lib0move(&___nl__im__16,___get_global_string_const(331));
#line 702
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 702
c_rt_lib0clear(&___nl__im__10);
#line 702
c_rt_lib0clear(&___nl__im__16);
#line 702
c_rt_lib0clear(&___nl__im__0);
#line 702
//clear ___nl__bool__1;
#line 702
c_rt_lib0clear(&___nl__im__2);
#line 702
return ___nl__im__9;
#line 703
goto label_130;
#line 703
label_44:
;
#line 703
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 703
___nl__bool__1 = !___nl__bool__1;
#line 703
if(___nl__bool__1){ goto label_55;}
#line 704
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_const_arr(___nl__im__0));
#line 704
c_rt_lib0clear(&___nl__im__0);
#line 704
//clear ___nl__bool__1;
#line 704
c_rt_lib0clear(&___nl__im__2);
#line 704
c_rt_lib0clear(&___nl__im__9);
#line 704
return ___nl__im__17;
#line 705
goto label_130;
#line 705
label_55:
;
#line 705
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 705
___nl__bool__1 = !___nl__bool__1;
#line 705
if(___nl__bool__1){ goto label_67;}
#line 706
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_hash(___nl__im__0));
#line 706
c_rt_lib0clear(&___nl__im__0);
#line 706
//clear ___nl__bool__1;
#line 706
c_rt_lib0clear(&___nl__im__2);
#line 706
c_rt_lib0clear(&___nl__im__9);
#line 706
c_rt_lib0clear(&___nl__im__17);
#line 706
return ___nl__im__18;
#line 707
goto label_130;
#line 707
label_67:
;
#line 707
___nl__bool__1 = nl0is_bool(___nl__im__0);
#line 707
___nl__bool__1 = !___nl__bool__1;
#line 707
if(___nl__bool__1){ goto label_113;}
#line 708
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__0);
#line 708
___nl__bool__19 = !___nl__bool__19;
#line 708
if(___nl__bool__19){ goto label_90;}
#line 709
c_rt_lib0move(&___nl__im__21,___get_global_string_const(280));
#line 709
c_rt_lib0move(&___nl__im__22,___get_global_string_const(814));
#line 709
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 709
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_int_call_sim(___nl__im__21, ___nl__im__22, ___nl__im__23));
#line 709
c_rt_lib0clear(&___nl__im__21);
#line 709
c_rt_lib0clear(&___nl__im__22);
#line 709
c_rt_lib0clear(&___nl__im__23);
#line 709
c_rt_lib0clear(&___nl__im__0);
#line 709
//clear ___nl__bool__1;
#line 709
c_rt_lib0clear(&___nl__im__2);
#line 709
c_rt_lib0clear(&___nl__im__9);
#line 709
c_rt_lib0clear(&___nl__im__17);
#line 709
c_rt_lib0clear(&___nl__im__18);
#line 709
//clear ___nl__bool__19;
#line 709
return ___nl__im__20;
#line 710
goto label_108;
#line 710
label_90:
;
#line 711
c_rt_lib0move(&___nl__im__25,___get_global_string_const(280));
#line 711
c_rt_lib0move(&___nl__im__26,___get_global_string_const(815));
#line 711
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 711
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_int_call_sim(___nl__im__25, ___nl__im__26, ___nl__im__27));
#line 711
c_rt_lib0clear(&___nl__im__25);
#line 711
c_rt_lib0clear(&___nl__im__26);
#line 711
c_rt_lib0clear(&___nl__im__27);
#line 711
c_rt_lib0clear(&___nl__im__0);
#line 711
//clear ___nl__bool__1;
#line 711
c_rt_lib0clear(&___nl__im__2);
#line 711
c_rt_lib0clear(&___nl__im__9);
#line 711
c_rt_lib0clear(&___nl__im__17);
#line 711
c_rt_lib0clear(&___nl__im__18);
#line 711
//clear ___nl__bool__19;
#line 711
c_rt_lib0clear(&___nl__im__20);
#line 711
return ___nl__im__24;
#line 712
goto label_108;
#line 712
label_108:
;
#line 712
//clear ___nl__bool__19;
#line 712
c_rt_lib0clear(&___nl__im__20);
#line 712
c_rt_lib0clear(&___nl__im__24);
#line 713
goto label_130;
#line 713
label_113:
;
#line 713
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 713
___nl__bool__1 = !___nl__bool__1;
#line 713
if(___nl__bool__1){ goto label_126;}
#line 714
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_const_ov(___nl__im__0));
#line 714
c_rt_lib0clear(&___nl__im__0);
#line 714
//clear ___nl__bool__1;
#line 714
c_rt_lib0clear(&___nl__im__2);
#line 714
c_rt_lib0clear(&___nl__im__9);
#line 714
c_rt_lib0clear(&___nl__im__17);
#line 714
c_rt_lib0clear(&___nl__im__18);
#line 714
return ___nl__im__28;
#line 715
goto label_130;
#line 715
label_126:
;
#line 716
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 716
nl_die_arg(___nl__im__29);
#line 717
goto label_130;
#line 717
label_130:
;
#line 717
//clear ___nl__bool__1;
#line 717
c_rt_lib0clear(&___nl__im__2);
#line 717
c_rt_lib0clear(&___nl__im__9);
#line 717
c_rt_lib0clear(&___nl__im__17);
#line 717
c_rt_lib0clear(&___nl__im__18);
#line 717
c_rt_lib0clear(&___nl__im__28);
#line 717
c_rt_lib0clear(&___nl__im__29);
#line 717
c_rt_lib0clear(&___nl__im__0);
#line 717
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_goto(INT  ___nl__int__0) {
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__string__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 721
c_rt_lib0move(&___nl__im__3,___get_global_string_const(816));
#line 721
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 721
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 721
c_rt_lib0clear(&___nl__im__3);
#line 721
c_rt_lib0clear(&___nl__string__4);
#line 721
c_rt_lib0move(&___nl__im__5,___get_global_string_const(817));
#line 721
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 721
c_rt_lib0clear(&___nl__im__2);
#line 721
c_rt_lib0clear(&___nl__im__5);
#line 721
//clear ___nl__int__0;
#line 721
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0get_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
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
bool  ___nl__bool__25 = false;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 726
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 727
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 727
___nl__bool__3 = !___nl__bool__3;
#line 727
if(___nl__bool__3){ goto label_14;}
#line 728
c_rt_lib0move(&___nl__im__6,___get_global_string_const(135));
#line 728
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 728
c_rt_lib0clear(&___nl__im__6);
#line 728
c_rt_lib0move(&___nl__im__7,___get_global_string_const(810));
#line 728
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 728
c_rt_lib0clear(&___nl__im__5);
#line 728
c_rt_lib0clear(&___nl__im__7);
#line 728
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 728
c_rt_lib0clear(&___nl__im__4);
#line 729
goto label_26;
#line 729
label_14:
;
#line 729
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(135));
#line 729
___nl__bool__3 = !___nl__bool__3;
#line 729
if(___nl__bool__3){ goto label_22;}
#line 730
c_rt_lib0move(&___nl__im__8,___get_global_string_const(315));
#line 730
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 730
c_rt_lib0clear(&___nl__im__8);
#line 731
goto label_26;
#line 731
label_22:
;
#line 732
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 732
nl_die_arg(___nl__im__9);
#line 733
goto label_26;
#line 733
label_26:
;
#line 733
//clear ___nl__bool__3;
#line 733
c_rt_lib0clear(&___nl__im__9);
#line 734
___nl__int__11 = 0;
#line 734
___nl__int__12 = 1;
#line 734
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 734
label_32:
;
#line 734
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 734
if(___nl__bool__14){ goto label_59;}
#line 734
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 734
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 734
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(585)));
#line 734
c_rt_lib0move(&___nl__im__19, generator_js_priv0escape_string(___nl__im__20));
#line 734
c_rt_lib0clear(&___nl__im__20);
#line 734
c_rt_lib0move(&___nl__im__21,___get_global_string_const(538));
#line 734
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 734
c_rt_lib0clear(&___nl__im__19);
#line 734
c_rt_lib0clear(&___nl__im__21);
#line 734
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(234)));
#line 734
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__23));
#line 734
c_rt_lib0clear(&___nl__im__23);
#line 734
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__22));
#line 734
c_rt_lib0clear(&___nl__im__18);
#line 734
c_rt_lib0clear(&___nl__im__22);
#line 734
c_rt_lib0move(&___nl__im__24,___get_global_string_const(323));
#line 734
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__24));
#line 734
c_rt_lib0clear(&___nl__im__17);
#line 734
c_rt_lib0clear(&___nl__im__24);
#line 734
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 734
c_rt_lib0clear(&___nl__im__16);
#line 734
c_rt_lib0clear(&___nl__im__10);
#line 734
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 734
goto label_32;
#line 734
label_59:
;
#line 735
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 735
___nl__bool__25 = !___nl__bool__25;
#line 735
if(___nl__bool__25){ goto label_67;}
#line 736
c_rt_lib0move(&___nl__im__26,___get_global_string_const(811));
#line 736
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 736
c_rt_lib0clear(&___nl__im__26);
#line 737
goto label_79;
#line 737
label_67:
;
#line 737
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(135));
#line 737
___nl__bool__25 = !___nl__bool__25;
#line 737
if(___nl__bool__25){ goto label_75;}
#line 738
c_rt_lib0move(&___nl__im__27,___get_global_string_const(316));
#line 738
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 738
c_rt_lib0clear(&___nl__im__27);
#line 739
goto label_79;
#line 739
label_75:
;
#line 740
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 740
nl_die_arg(___nl__im__28);
#line 741
goto label_79;
#line 741
label_79:
;
#line 741
//clear ___nl__bool__25;
#line 741
c_rt_lib0clear(&___nl__im__28);
#line 742
c_rt_lib0clear(&___nl__im__0);
#line 742
c_rt_lib0clear(&___nl__im__1);
#line 742
c_rt_lib0clear(&___nl__im__10);
#line 742
//clear ___nl__int__11;
#line 742
//clear ___nl__int__12;
#line 742
//clear ___nl__int__13;
#line 742
//clear ___nl__bool__14;
#line 742
c_rt_lib0clear(&___nl__im__15);
#line 742
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0get_empty_hash(ImmT  ___nl__im__0,nlasm0reg_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
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
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
#line 746
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 747
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(138));
#line 747
___nl__bool__3 = !___nl__bool__3;
#line 747
if(___nl__bool__3){ goto label_36;}
#line 748
c_rt_lib0move(&___nl__im__6,___get_global_string_const(135));
#line 748
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 748
c_rt_lib0clear(&___nl__im__6);
#line 748
c_rt_lib0move(&___nl__im__7,___get_global_string_const(810));
#line 748
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 748
c_rt_lib0clear(&___nl__im__5);
#line 748
c_rt_lib0clear(&___nl__im__7);
#line 748
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 748
c_rt_lib0clear(&___nl__im__4);
#line 749
___nl__int__9 = 0;
#line 749
___nl__int__10 = 1;
#line 749
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 749
label_16:
;
#line 749
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 749
if(___nl__bool__12){ goto label_31;}
#line 749
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 749
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 749
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__8));
#line 749
c_rt_lib0move(&___nl__im__16,___get_global_string_const(818));
#line 749
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 749
c_rt_lib0clear(&___nl__im__15);
#line 749
c_rt_lib0clear(&___nl__im__16);
#line 749
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 749
c_rt_lib0clear(&___nl__im__14);
#line 749
c_rt_lib0clear(&___nl__im__8);
#line 749
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 749
goto label_16;
#line 749
label_31:
;
#line 750
c_rt_lib0move(&___nl__im__17,___get_global_string_const(811));
#line 750
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 750
c_rt_lib0clear(&___nl__im__17);
#line 751
goto label_70;
#line 751
label_36:
;
#line 751
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(567));
#line 751
___nl__bool__3 = !___nl__bool__3;
#line 751
if(___nl__bool__3){ goto label_66;}
#line 752
c_rt_lib0move(&___nl__im__18,___get_global_string_const(315));
#line 752
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 752
c_rt_lib0clear(&___nl__im__18);
#line 753
___nl__int__20 = 0;
#line 753
___nl__int__21 = 1;
#line 753
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 753
label_46:
;
#line 753
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 753
if(___nl__bool__23){ goto label_61;}
#line 753
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 753
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 753
c_rt_lib0move(&___nl__im__26, generator_js_priv0escape_string(___nl__im__19));
#line 753
c_rt_lib0move(&___nl__im__27,___get_global_string_const(819));
#line 753
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 753
c_rt_lib0clear(&___nl__im__26);
#line 753
c_rt_lib0clear(&___nl__im__27);
#line 753
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 753
c_rt_lib0clear(&___nl__im__25);
#line 753
c_rt_lib0clear(&___nl__im__19);
#line 753
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 753
goto label_46;
#line 753
label_61:
;
#line 754
c_rt_lib0move(&___nl__im__28,___get_global_string_const(316));
#line 754
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 754
c_rt_lib0clear(&___nl__im__28);
#line 755
goto label_70;
#line 755
label_66:
;
#line 756
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 756
nl_die_arg(___nl__im__29);
#line 757
goto label_70;
#line 757
label_70:
;
#line 757
//clear ___nl__bool__3;
#line 757
c_rt_lib0clear(&___nl__im__8);
#line 757
//clear ___nl__int__9;
#line 757
//clear ___nl__int__10;
#line 757
//clear ___nl__int__11;
#line 757
//clear ___nl__bool__12;
#line 757
c_rt_lib0clear(&___nl__im__13);
#line 757
c_rt_lib0clear(&___nl__im__19);
#line 757
//clear ___nl__int__20;
#line 757
//clear ___nl__int__21;
#line 757
//clear ___nl__int__22;
#line 757
//clear ___nl__bool__23;
#line 757
c_rt_lib0clear(&___nl__im__24);
#line 757
c_rt_lib0clear(&___nl__im__29);
#line 758
c_rt_lib0clear(&___nl__im__0);
#line 758
c_rt_lib0clear(&___nl__im__1);
#line 758
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0get_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 762
c_rt_lib0move(&___nl__im__2,___get_global_string_const(433));
#line 762
c_rt_lib0move(&___nl__im__3, generator_js_priv0reg_suffix(___nl__im__0));
#line 762
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__3));
#line 762
c_rt_lib0clear(&___nl__im__2);
#line 762
c_rt_lib0clear(&___nl__im__3);
#line 762
c_rt_lib0clear(&___nl__im__0);
#line 762
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0get_register_value(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 766
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 767
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 767
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(229));
#line 767
if(___nl__bool__3){ goto label_9;}
#line 768
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(430));
#line 768
if(___nl__bool__3){ goto label_11;}
#line 768
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 768
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 768
nl_die_arg(___nl__im__4);
#line 767
label_9:
;
#line 768
goto label_16;
#line 768
label_11:
;
#line 769
c_rt_lib0move(&___nl__im__5,___get_global_string_const(760));
#line 769
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 769
c_rt_lib0clear(&___nl__im__5);
#line 770
goto label_16;
#line 770
label_16:
;
#line 771
c_rt_lib0clear(&___nl__im__0);
#line 771
c_rt_lib0clear(&___nl__im__2);
#line 771
//clear ___nl__bool__3;
#line 771
c_rt_lib0clear(&___nl__im__4);
#line 771
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0get_register_reference(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 775
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 776
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 776
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(229));
#line 776
if(___nl__bool__3){ goto label_9;}
#line 778
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(430));
#line 778
if(___nl__bool__3){ goto label_18;}
#line 778
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 778
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 778
nl_die_arg(___nl__im__4);
#line 776
label_9:
;
#line 777
c_rt_lib0move(&___nl__im__6,___get_global_string_const(820));
#line 777
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 777
c_rt_lib0clear(&___nl__im__6);
#line 777
c_rt_lib0move(&___nl__im__7,___get_global_string_const(316));
#line 777
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 777
c_rt_lib0clear(&___nl__im__5);
#line 777
c_rt_lib0clear(&___nl__im__7);
#line 778
goto label_20;
#line 778
label_18:
;
#line 779
goto label_20;
#line 779
label_20:
;
#line 780
c_rt_lib0clear(&___nl__im__0);
#line 780
c_rt_lib0clear(&___nl__im__2);
#line 780
//clear ___nl__bool__3;
#line 780
c_rt_lib0clear(&___nl__im__4);
#line 780
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0reg_suffix(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
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
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__string__21 = NULL;
#line 785
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(215)));
#line 785
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(138));
#line 785
if(___nl__bool__3){ goto label_20;}
#line 787
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(413));
#line 787
if(___nl__bool__3){ goto label_23;}
#line 789
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 789
if(___nl__bool__3){ goto label_26;}
#line 791
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(414));
#line 791
if(___nl__bool__3){ goto label_29;}
#line 793
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(567));
#line 793
if(___nl__bool__3){ goto label_32;}
#line 795
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(134));
#line 795
if(___nl__bool__3){ goto label_37;}
#line 797
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(571));
#line 797
if(___nl__bool__3){ goto label_42;}
#line 799
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(135));
#line 799
if(___nl__bool__3){ goto label_47;}
#line 799
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 799
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 799
nl_die_arg(___nl__im__4);
#line 785
label_20:
;
#line 786
c_rt_lib0move(&___nl__im__1,___get_global_string_const(138));
#line 787
goto label_52;
#line 787
label_23:
;
#line 788
c_rt_lib0move(&___nl__im__1,___get_global_string_const(413));
#line 789
goto label_52;
#line 789
label_26:
;
#line 790
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 791
goto label_52;
#line 791
label_29:
;
#line 792
c_rt_lib0move(&___nl__im__1,___get_global_string_const(414));
#line 793
goto label_52;
#line 793
label_32:
;
#line 793
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(567)));
#line 793
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 794
c_rt_lib0move(&___nl__im__1,___get_global_string_const(567));
#line 795
goto label_52;
#line 795
label_37:
;
#line 795
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(134)));
#line 795
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 796
c_rt_lib0move(&___nl__im__1,___get_global_string_const(134));
#line 797
goto label_52;
#line 797
label_42:
;
#line 797
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(571)));
#line 797
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 798
c_rt_lib0move(&___nl__im__1,___get_global_string_const(515));
#line 799
goto label_52;
#line 799
label_47:
;
#line 799
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(135)));
#line 799
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 800
c_rt_lib0move(&___nl__im__1,___get_global_string_const(135));
#line 801
goto label_52;
#line 801
label_52:
;
#line 802
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(361)));
#line 802
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(229));
#line 802
if(___nl__bool__14){ goto label_61;}
#line 803
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(430));
#line 803
if(___nl__bool__14){ goto label_63;}
#line 803
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 803
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 803
nl_die_arg(___nl__im__15);
#line 802
label_61:
;
#line 803
goto label_68;
#line 803
label_63:
;
#line 804
c_rt_lib0move(&___nl__im__16,___get_global_string_const(649));
#line 804
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 804
c_rt_lib0clear(&___nl__im__16);
#line 805
goto label_68;
#line 805
label_68:
;
#line 806
c_rt_lib0move(&___nl__im__18,___get_global_string_const(650));
#line 806
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(228)));
#line 806
___nl__int__19 = getIntFromImm(___nl__im__20);
#line 806
c_rt_lib0clear(&___nl__im__20);
#line 806
c_rt_lib0move(&___nl__string__21, c_rt_lib0int_to_string(___nl__int__19));
#line 806
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__string__21));
#line 806
c_rt_lib0clear(&___nl__im__18);
#line 806
//clear ___nl__int__19;
#line 806
c_rt_lib0clear(&___nl__string__21);
#line 806
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 806
c_rt_lib0clear(&___nl__im__17);
#line 807
c_rt_lib0clear(&___nl__im__0);
#line 807
c_rt_lib0clear(&___nl__im__2);
#line 807
//clear ___nl__bool__3;
#line 807
c_rt_lib0clear(&___nl__im__4);
#line 807
c_rt_lib0clear(&___nl__im__5);
#line 807
c_rt_lib0clear(&___nl__im__6);
#line 807
c_rt_lib0clear(&___nl__im__7);
#line 807
c_rt_lib0clear(&___nl__im__8);
#line 807
c_rt_lib0clear(&___nl__im__9);
#line 807
c_rt_lib0clear(&___nl__im__10);
#line 807
c_rt_lib0clear(&___nl__im__11);
#line 807
c_rt_lib0clear(&___nl__im__12);
#line 807
c_rt_lib0clear(&___nl__im__13);
#line 807
//clear ___nl__bool__14;
#line 807
c_rt_lib0clear(&___nl__im__15);
#line 807
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0get_register_to_assign(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 812
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 812
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 812
c_rt_lib0clear(&___nl__im__2);
#line 812
___nl__bool__1 = !___nl__bool__1;
#line 812
if(___nl__bool__1){ goto label_10;}
#line 812
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 812
c_rt_lib0clear(&___nl__im__0);
#line 812
//clear ___nl__bool__1;
#line 812
return ___nl__im__3;
#line 812
goto label_10;
#line 812
label_10:
;
#line 812
//clear ___nl__bool__1;
#line 812
c_rt_lib0clear(&___nl__im__3);
#line 813
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register(___nl__im__0));
#line 813
c_rt_lib0move(&___nl__im__6,___get_global_string_const(512));
#line 813
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 813
c_rt_lib0clear(&___nl__im__5);
#line 813
c_rt_lib0clear(&___nl__im__6);
#line 813
c_rt_lib0clear(&___nl__im__0);
#line 813
return ___nl__im__4;
return NULL;

}

ImmT  generator_js_priv0get_register_value_to_assign(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 817
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 817
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 817
c_rt_lib0clear(&___nl__im__2);
#line 817
___nl__bool__1 = !___nl__bool__1;
#line 817
if(___nl__bool__1){ goto label_10;}
#line 817
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 817
c_rt_lib0clear(&___nl__im__0);
#line 817
//clear ___nl__bool__1;
#line 817
return ___nl__im__3;
#line 817
goto label_10;
#line 817
label_10:
;
#line 817
//clear ___nl__bool__1;
#line 817
c_rt_lib0clear(&___nl__im__3);
#line 818
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register_value(___nl__im__0));
#line 818
c_rt_lib0move(&___nl__im__6,___get_global_string_const(512));
#line 818
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 818
c_rt_lib0clear(&___nl__im__5);
#line 818
c_rt_lib0clear(&___nl__im__6);
#line 818
c_rt_lib0clear(&___nl__im__0);
#line 818
return ___nl__im__4;
return NULL;

}

ImmT  generator_js_priv0get_return(nlasm0return0type ___nl__im__0,nlasm0args_type0type ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__string__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
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
#line 822
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 823
___nl__int__3 = 0;
#line 824
___nl__int__5 = 0;
#line 824
___nl__int__6 = 1;
#line 824
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 824
label_5:
;
#line 824
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 824
if(___nl__bool__8){ goto label_50;}
#line 824
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 824
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 825
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(363)));
#line 825
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 825
if(___nl__bool__11){ goto label_18;}
#line 827
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(234));
#line 827
if(___nl__bool__11){ goto label_41;}
#line 827
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 827
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 827
nl_die_arg(___nl__im__12);
#line 825
label_18:
;
#line 826
c_rt_lib0move(&___nl__im__17,___get_global_string_const(772));
#line 826
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__3));
#line 826
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 826
c_rt_lib0clear(&___nl__im__17);
#line 826
c_rt_lib0clear(&___nl__string__18);
#line 826
c_rt_lib0move(&___nl__im__19,___get_global_string_const(821));
#line 826
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 826
c_rt_lib0clear(&___nl__im__16);
#line 826
c_rt_lib0clear(&___nl__im__19);
#line 826
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(479)));
#line 826
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_register_value(___nl__im__21));
#line 826
c_rt_lib0clear(&___nl__im__21);
#line 826
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 826
c_rt_lib0clear(&___nl__im__15);
#line 826
c_rt_lib0clear(&___nl__im__20);
#line 826
c_rt_lib0move(&___nl__im__22,___get_global_string_const(450));
#line 826
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__22));
#line 826
c_rt_lib0clear(&___nl__im__14);
#line 826
c_rt_lib0clear(&___nl__im__22);
#line 826
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 826
c_rt_lib0clear(&___nl__im__13);
#line 827
goto label_43;
#line 827
label_41:
;
#line 828
goto label_43;
#line 828
label_43:
;
#line 829
___nl__int__23 = 1;
#line 829
___nl__int__3 = ___nl__int__3 + ___nl__int__23;
#line 829
//clear ___nl__int__23;
#line 829
c_rt_lib0clear(&___nl__im__4);
#line 830
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 830
goto label_5;
#line 830
label_50:
;
#line 831
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(234));
#line 831
if(___nl__bool__24){ goto label_58;}
#line 833
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(360));
#line 833
if(___nl__bool__24){ goto label_91;}
#line 833
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 833
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__0));
#line 833
nl_die_arg(___nl__im__25);
#line 831
label_58:
;
#line 831
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(234)));
#line 831
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 832
c_rt_lib0move(&___nl__im__31,___get_global_string_const(518));
#line 832
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__2, ___nl__im__31));
#line 832
c_rt_lib0clear(&___nl__im__31);
#line 832
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__26));
#line 832
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 832
c_rt_lib0clear(&___nl__im__30);
#line 832
c_rt_lib0clear(&___nl__im__32);
#line 832
c_rt_lib0move(&___nl__im__33,___get_global_string_const(450));
#line 832
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 832
c_rt_lib0clear(&___nl__im__29);
#line 832
c_rt_lib0clear(&___nl__im__33);
#line 832
c_rt_lib0clear(&___nl__im__0);
#line 832
c_rt_lib0clear(&___nl__im__1);
#line 832
c_rt_lib0clear(&___nl__im__2);
#line 832
//clear ___nl__int__3;
#line 832
c_rt_lib0clear(&___nl__im__4);
#line 832
//clear ___nl__int__5;
#line 832
//clear ___nl__int__6;
#line 832
//clear ___nl__int__7;
#line 832
//clear ___nl__bool__8;
#line 832
c_rt_lib0clear(&___nl__im__9);
#line 832
c_rt_lib0clear(&___nl__im__10);
#line 832
//clear ___nl__bool__11;
#line 832
c_rt_lib0clear(&___nl__im__12);
#line 832
//clear ___nl__bool__24;
#line 832
c_rt_lib0clear(&___nl__im__25);
#line 832
c_rt_lib0clear(&___nl__im__26);
#line 832
c_rt_lib0clear(&___nl__im__27);
#line 832
return ___nl__im__28;
#line 833
goto label_115;
#line 833
label_91:
;
#line 834
c_rt_lib0move(&___nl__im__35,___get_global_string_const(822));
#line 834
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__2, ___nl__im__35));
#line 834
c_rt_lib0clear(&___nl__im__35);
#line 834
c_rt_lib0clear(&___nl__im__0);
#line 834
c_rt_lib0clear(&___nl__im__1);
#line 834
c_rt_lib0clear(&___nl__im__2);
#line 834
//clear ___nl__int__3;
#line 834
c_rt_lib0clear(&___nl__im__4);
#line 834
//clear ___nl__int__5;
#line 834
//clear ___nl__int__6;
#line 834
//clear ___nl__int__7;
#line 834
//clear ___nl__bool__8;
#line 834
c_rt_lib0clear(&___nl__im__9);
#line 834
c_rt_lib0clear(&___nl__im__10);
#line 834
//clear ___nl__bool__11;
#line 834
c_rt_lib0clear(&___nl__im__12);
#line 834
//clear ___nl__bool__24;
#line 834
c_rt_lib0clear(&___nl__im__25);
#line 834
c_rt_lib0clear(&___nl__im__26);
#line 834
c_rt_lib0clear(&___nl__im__27);
#line 834
c_rt_lib0clear(&___nl__im__28);
#line 834
return ___nl__im__34;
#line 835
goto label_115;
#line 835
label_115:
;
return NULL;

}

ImmT  generator_js_priv0get_una_op(nlasm0una_op_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
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
#line 839
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(233)));
#line 839
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register_value_to_assign(___nl__im__2));
#line 839
c_rt_lib0clear(&___nl__im__2);
#line 840
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(568)));
#line 840
c_rt_lib0move(&___nl__im__5,___get_global_string_const(373));
#line 840
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 840
c_rt_lib0clear(&___nl__im__4);
#line 840
c_rt_lib0clear(&___nl__im__5);
#line 840
___nl__bool__3 = !___nl__bool__3;
#line 840
if(___nl__bool__3){ goto label_24;}
#line 841
c_rt_lib0move(&___nl__im__8,___get_global_string_const(373));
#line 841
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 841
c_rt_lib0clear(&___nl__im__8);
#line 841
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 841
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_register_value(___nl__im__10));
#line 841
c_rt_lib0clear(&___nl__im__10);
#line 841
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 841
c_rt_lib0clear(&___nl__im__7);
#line 841
c_rt_lib0clear(&___nl__im__9);
#line 841
c_rt_lib0clear(&___nl__im__0);
#line 841
c_rt_lib0clear(&___nl__im__1);
#line 841
//clear ___nl__bool__3;
#line 841
return ___nl__im__6;
#line 842
goto label_40;
#line 842
label_24:
;
#line 843
c_rt_lib0move(&___nl__im__13,___get_global_string_const(375));
#line 843
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__1, ___nl__im__13));
#line 843
c_rt_lib0clear(&___nl__im__13);
#line 843
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 843
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_register_value(___nl__im__15));
#line 843
c_rt_lib0clear(&___nl__im__15);
#line 843
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 843
c_rt_lib0clear(&___nl__im__12);
#line 843
c_rt_lib0clear(&___nl__im__14);
#line 843
c_rt_lib0clear(&___nl__im__0);
#line 843
c_rt_lib0clear(&___nl__im__1);
#line 843
//clear ___nl__bool__3;
#line 843
c_rt_lib0clear(&___nl__im__6);
#line 843
return ___nl__im__11;
#line 844
goto label_40;
#line 844
label_40:
;
#line 844
//clear ___nl__bool__3;
#line 844
c_rt_lib0clear(&___nl__im__6);
#line 844
c_rt_lib0clear(&___nl__im__11);
return NULL;

}

ImmT  generator_js_priv0get_im_from_value(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
#line 848
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(138));
#line 848
if(___nl__bool__2){ goto label_19;}
#line 850
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(413));
#line 850
if(___nl__bool__2){ goto label_25;}
#line 852
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 852
if(___nl__bool__2){ goto label_45;}
#line 854
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(414));
#line 854
if(___nl__bool__2){ goto label_64;}
#line 856
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(567));
#line 856
if(___nl__bool__2){ goto label_72;}
#line 858
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(134));
#line 858
if(___nl__bool__2){ goto label_78;}
#line 860
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(571));
#line 860
if(___nl__bool__2){ goto label_84;}
#line 862
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(135));
#line 862
if(___nl__bool__2){ goto label_90;}
#line 862
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 862
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 862
nl_die_arg(___nl__im__3);
#line 848
label_19:
;
#line 849
c_rt_lib0clear(&___nl__im__0);
#line 849
//clear ___nl__bool__2;
#line 849
c_rt_lib0clear(&___nl__im__3);
#line 849
return ___nl__im__1;
#line 850
goto label_96;
#line 850
label_25:
;
#line 851
c_rt_lib0move(&___nl__im__8,___get_global_string_const(413));
#line 851
c_rt_lib0move(&___nl__im__7, generator_js_priv0imm_call(___nl__im__8));
#line 851
c_rt_lib0clear(&___nl__im__8);
#line 851
c_rt_lib0move(&___nl__im__9,___get_global_string_const(465));
#line 851
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 851
c_rt_lib0clear(&___nl__im__7);
#line 851
c_rt_lib0clear(&___nl__im__9);
#line 851
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 851
c_rt_lib0clear(&___nl__im__6);
#line 851
c_rt_lib0move(&___nl__im__10,___get_global_string_const(331));
#line 851
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 851
c_rt_lib0clear(&___nl__im__5);
#line 851
c_rt_lib0clear(&___nl__im__10);
#line 851
c_rt_lib0clear(&___nl__im__0);
#line 851
c_rt_lib0clear(&___nl__im__1);
#line 851
//clear ___nl__bool__2;
#line 851
c_rt_lib0clear(&___nl__im__3);
#line 851
return ___nl__im__4;
#line 852
goto label_96;
#line 852
label_45:
;
#line 853
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 853
c_rt_lib0move(&___nl__im__15,___get_global_string_const(823));
#line 853
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 853
c_rt_lib0clear(&___nl__im__14);
#line 853
c_rt_lib0clear(&___nl__im__15);
#line 853
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 853
c_rt_lib0clear(&___nl__im__13);
#line 853
c_rt_lib0move(&___nl__im__16,___get_global_string_const(331));
#line 853
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 853
c_rt_lib0clear(&___nl__im__12);
#line 853
c_rt_lib0clear(&___nl__im__16);
#line 853
c_rt_lib0clear(&___nl__im__0);
#line 853
c_rt_lib0clear(&___nl__im__1);
#line 853
//clear ___nl__bool__2;
#line 853
c_rt_lib0clear(&___nl__im__3);
#line 853
c_rt_lib0clear(&___nl__im__4);
#line 853
return ___nl__im__11;
#line 854
goto label_96;
#line 854
label_64:
;
#line 855
c_rt_lib0clear(&___nl__im__0);
#line 855
//clear ___nl__bool__2;
#line 855
c_rt_lib0clear(&___nl__im__3);
#line 855
c_rt_lib0clear(&___nl__im__4);
#line 855
c_rt_lib0clear(&___nl__im__11);
#line 855
return ___nl__im__1;
#line 856
goto label_96;
#line 856
label_72:
;
#line 856
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(567)));
#line 856
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 857
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 857
nl_die_arg(___nl__im__19);
#line 858
goto label_96;
#line 858
label_78:
;
#line 858
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(134)));
#line 858
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 859
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 859
nl_die_arg(___nl__im__22);
#line 860
goto label_96;
#line 860
label_84:
;
#line 860
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(571)));
#line 860
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 861
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 861
nl_die_arg(___nl__im__25);
#line 862
goto label_96;
#line 862
label_90:
;
#line 862
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(135)));
#line 862
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 863
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 863
nl_die_arg(___nl__im__28);
#line 864
goto label_96;
#line 864
label_96:
;
return NULL;

}

ImmT  generator_js_priv0get_value_from_im(nlasm0reg_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
#line 868
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(138));
#line 868
if(___nl__bool__2){ goto label_19;}
#line 870
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(413));
#line 870
if(___nl__bool__2){ goto label_25;}
#line 872
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 872
if(___nl__bool__2){ goto label_35;}
#line 874
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(414));
#line 874
if(___nl__bool__2){ goto label_54;}
#line 876
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(567));
#line 876
if(___nl__bool__2){ goto label_62;}
#line 878
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(134));
#line 878
if(___nl__bool__2){ goto label_68;}
#line 880
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(571));
#line 880
if(___nl__bool__2){ goto label_74;}
#line 882
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(135));
#line 882
if(___nl__bool__2){ goto label_80;}
#line 882
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 882
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 882
nl_die_arg(___nl__im__3);
#line 868
label_19:
;
#line 869
c_rt_lib0clear(&___nl__im__0);
#line 869
//clear ___nl__bool__2;
#line 869
c_rt_lib0clear(&___nl__im__3);
#line 869
return ___nl__im__1;
#line 870
goto label_86;
#line 870
label_25:
;
#line 871
c_rt_lib0move(&___nl__im__5,___get_global_string_const(824));
#line 871
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 871
c_rt_lib0clear(&___nl__im__5);
#line 871
c_rt_lib0clear(&___nl__im__0);
#line 871
c_rt_lib0clear(&___nl__im__1);
#line 871
//clear ___nl__bool__2;
#line 871
c_rt_lib0clear(&___nl__im__3);
#line 871
return ___nl__im__4;
#line 872
goto label_86;
#line 872
label_35:
;
#line 873
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 873
c_rt_lib0move(&___nl__im__10,___get_global_string_const(825));
#line 873
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 873
c_rt_lib0clear(&___nl__im__9);
#line 873
c_rt_lib0clear(&___nl__im__10);
#line 873
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 873
c_rt_lib0clear(&___nl__im__8);
#line 873
c_rt_lib0move(&___nl__im__11,___get_global_string_const(331));
#line 873
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 873
c_rt_lib0clear(&___nl__im__7);
#line 873
c_rt_lib0clear(&___nl__im__11);
#line 873
c_rt_lib0clear(&___nl__im__0);
#line 873
c_rt_lib0clear(&___nl__im__1);
#line 873
//clear ___nl__bool__2;
#line 873
c_rt_lib0clear(&___nl__im__3);
#line 873
c_rt_lib0clear(&___nl__im__4);
#line 873
return ___nl__im__6;
#line 874
goto label_86;
#line 874
label_54:
;
#line 875
c_rt_lib0clear(&___nl__im__0);
#line 875
//clear ___nl__bool__2;
#line 875
c_rt_lib0clear(&___nl__im__3);
#line 875
c_rt_lib0clear(&___nl__im__4);
#line 875
c_rt_lib0clear(&___nl__im__6);
#line 875
return ___nl__im__1;
#line 876
goto label_86;
#line 876
label_62:
;
#line 876
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(567)));
#line 876
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 877
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 877
nl_die_arg(___nl__im__14);
#line 878
goto label_86;
#line 878
label_68:
;
#line 878
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(134)));
#line 878
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 879
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 879
nl_die_arg(___nl__im__17);
#line 880
goto label_86;
#line 880
label_74:
;
#line 880
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(571)));
#line 880
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 881
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 881
nl_die_arg(___nl__im__20);
#line 882
goto label_86;
#line 882
label_80:
;
#line 882
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(135)));
#line 882
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 883
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 883
nl_die_arg(___nl__im__23);
#line 884
goto label_86;
#line 884
label_86:
;
return NULL;

}

bool  generator_js_priv0takes_own_arg(nlasm0function_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
bool  ___nl__bool__12 = false;
#line 888
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 888
___nl__int__3 = 0;
#line 888
___nl__int__4 = 1;
#line 888
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 888
label_4:
;
#line 888
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 888
if(___nl__bool__6){ goto label_34;}
#line 888
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 888
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 889
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(479)));
#line 889
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(215)));
#line 889
c_rt_lib0clear(&___nl__im__10);
#line 889
___nl__bool__8 = generator_js_priv0is_own(___nl__im__9);
#line 889
c_rt_lib0clear(&___nl__im__9);
#line 889
___nl__bool__8 = !___nl__bool__8;
#line 889
if(___nl__bool__8){ goto label_28;}
#line 889
___nl__bool__11 = true;
#line 889
c_rt_lib0clear(&___nl__im__0);
#line 889
c_rt_lib0clear(&___nl__im__1);
#line 889
c_rt_lib0clear(&___nl__im__2);
#line 889
//clear ___nl__int__3;
#line 889
//clear ___nl__int__4;
#line 889
//clear ___nl__int__5;
#line 889
//clear ___nl__bool__6;
#line 889
c_rt_lib0clear(&___nl__im__7);
#line 889
//clear ___nl__bool__8;
#line 889
return ___nl__bool__11;
#line 889
goto label_28;
#line 889
label_28:
;
#line 889
//clear ___nl__bool__8;
#line 889
//clear ___nl__bool__11;
#line 889
c_rt_lib0clear(&___nl__im__2);
#line 890
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 890
goto label_4;
#line 890
label_34:
;
#line 891
___nl__bool__12 = false;
#line 891
c_rt_lib0clear(&___nl__im__0);
#line 891
c_rt_lib0clear(&___nl__im__1);
#line 891
c_rt_lib0clear(&___nl__im__2);
#line 891
//clear ___nl__int__3;
#line 891
//clear ___nl__int__4;
#line 891
//clear ___nl__int__5;
#line 891
//clear ___nl__bool__6;
#line 891
c_rt_lib0clear(&___nl__im__7);
#line 891
return ___nl__bool__12;
return false;

}

bool  generator_js_priv0is_own(nlasm0reg_type0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
bool  ___nl__bool__1 = false;
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
bool  ___nl__bool__7 = false;
#line 895
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(138));
#line 895
___nl__bool__1 = !___nl__bool__1;
#line 895
if(___nl__bool__1){ goto label_8;}
#line 895
___nl__bool__2 = false;
#line 895
c_rt_lib0clear(&___nl__im__0);
#line 895
//clear ___nl__bool__1;
#line 895
return ___nl__bool__2;
#line 895
goto label_8;
#line 895
label_8:
;
#line 895
//clear ___nl__bool__1;
#line 895
//clear ___nl__bool__2;
#line 896
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(413));
#line 896
___nl__bool__3 = !___nl__bool__3;
#line 896
if(___nl__bool__3){ goto label_19;}
#line 896
___nl__bool__4 = false;
#line 896
c_rt_lib0clear(&___nl__im__0);
#line 896
//clear ___nl__bool__3;
#line 896
return ___nl__bool__4;
#line 896
goto label_19;
#line 896
label_19:
;
#line 896
//clear ___nl__bool__3;
#line 896
//clear ___nl__bool__4;
#line 897
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 897
___nl__bool__5 = !___nl__bool__5;
#line 897
if(___nl__bool__5){ goto label_30;}
#line 897
___nl__bool__6 = false;
#line 897
c_rt_lib0clear(&___nl__im__0);
#line 897
//clear ___nl__bool__5;
#line 897
return ___nl__bool__6;
#line 897
goto label_30;
#line 897
label_30:
;
#line 897
//clear ___nl__bool__5;
#line 897
//clear ___nl__bool__6;
#line 898
___nl__bool__7 = true;
#line 898
c_rt_lib0clear(&___nl__im__0);
#line 898
return ___nl__bool__7;
return false;

}

ImmT  generator_js_priv0print(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 902
c_rt_lib0move(&___nl__im__2,___get_global_string_const(66));
#line 902
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 902
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 902
c_rt_lib0move(&___nl__string__3,___get_global_string_const(66));
#line 902
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__3, ___nl__im__2));
#line 902
c_rt_lib0clear(&___nl__im__2);
#line 902
c_rt_lib0clear(&___nl__string__3);
#line 902
c_rt_lib0clear(&___nl__im__0);
#line 902
return NULL;
return NULL;

}

ImmT  generator_js_priv0println(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
ImmT  ___nl__string__8 = NULL;
#line 906
c_rt_lib0move(&___nl__im__3, string0lf());
#line 906
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__0, ___nl__im__3));
#line 906
c_rt_lib0clear(&___nl__im__3);
#line 906
c_rt_lib0delete(generator_js_priv0print(___nl__im__2, ___ref___im__1));
#line 906
c_rt_lib0clear(&___nl__im__2);
#line 907
c_rt_lib0move(&___nl__im__4,___get_global_string_const(737));
#line 907
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__4));
#line 907
___nl__int__5 = 1;
#line 907
___nl__int__6 = getIntFromImm(___nl__im__4);
#line 907
___nl__int__7 = ___nl__int__6 + ___nl__int__5;
#line 907
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__7));
#line 907
c_rt_lib0move(&___nl__string__8,___get_global_string_const(737));
#line 907
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__8, ___nl__im__4));
#line 907
c_rt_lib0clear(&___nl__im__4);
#line 907
//clear ___nl__int__5;
#line 907
//clear ___nl__int__6;
#line 907
//clear ___nl__int__7;
#line 907
c_rt_lib0clear(&___nl__string__8);
#line 907
c_rt_lib0clear(&___nl__im__0);
#line 907
return NULL;
return NULL;

}

ImmT  generator_js_priv0generate_sourcemap(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
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
#line 911
c_rt_lib0move(&___nl__im__2, generator_js_priv0generate_sourcemap_mappings(___nl__im__0));
#line 912
c_rt_lib0move(&___nl__im__9,___get_global_string_const(826));
#line 912
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 912
c_rt_lib0clear(&___nl__im__9);
#line 915
c_rt_lib0move(&___nl__im__10,___get_global_string_const(827));
#line 915
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 915
c_rt_lib0clear(&___nl__im__8);
#line 915
c_rt_lib0clear(&___nl__im__10);
#line 915
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__1));
#line 915
c_rt_lib0clear(&___nl__im__7);
#line 916
c_rt_lib0move(&___nl__im__11,___get_global_string_const(828));
#line 916
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 916
c_rt_lib0clear(&___nl__im__6);
#line 916
c_rt_lib0clear(&___nl__im__11);
#line 916
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__2));
#line 916
c_rt_lib0clear(&___nl__im__5);
#line 918
c_rt_lib0move(&___nl__im__12,___get_global_string_const(829));
#line 918
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__12));
#line 918
c_rt_lib0clear(&___nl__im__4);
#line 918
c_rt_lib0clear(&___nl__im__12);
#line 918
c_rt_lib0clear(&___nl__im__0);
#line 918
c_rt_lib0clear(&___nl__im__1);
#line 918
c_rt_lib0clear(&___nl__im__2);
#line 918
return ___nl__im__3;
return NULL;

}

ImmT  generator_js_priv0generate_sourcemap_mappings(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
#line 923
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 924
___nl__int__2 = 1;
#line 925
___nl__int__3 = 1;
#line 926
___nl__int__5 = 0;
#line 926
___nl__int__6 = 1;
#line 926
___nl__int__7 = c_rt_lib0array_len(___nl__im__0);
#line 926
label_6:
;
#line 926
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 926
if(___nl__bool__8){ goto label_50;}
#line 926
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__0, ___nl__int__5));
#line 926
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 927
label_11:
;
#line 927
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(738)));
#line 927
___nl__int__11 = getIntFromImm(___nl__im__12);
#line 927
c_rt_lib0clear(&___nl__im__12);
#line 927
___nl__bool__10 = ___nl__int__2 < ___nl__int__11;
#line 927
//clear ___nl__int__11;
#line 927
___nl__bool__10 = !___nl__bool__10;
#line 927
if(___nl__bool__10){ goto label_26;}
#line 928
c_rt_lib0move(&___nl__im__13,___get_global_string_const(450));
#line 928
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__13));
#line 928
c_rt_lib0clear(&___nl__im__13);
#line 929
___nl__int__14 = 1;
#line 929
___nl__int__2 = ___nl__int__2 + ___nl__int__14;
#line 929
//clear ___nl__int__14;
#line 930
goto label_11;
#line 930
label_26:
;
#line 931
c_rt_lib0move(&___nl__im__17,___get_global_string_const(830));
#line 931
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(739)));
#line 931
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 931
c_rt_lib0clear(&___nl__im__21);
#line 931
___nl__int__19 = ___nl__int__20 - ___nl__int__3;
#line 931
//clear ___nl__int__20;
#line 931
c_rt_lib0move(&___nl__im__18, generator_js_priv0number_to_base64_vlq(___nl__int__19));
#line 931
//clear ___nl__int__19;
#line 931
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 931
c_rt_lib0clear(&___nl__im__17);
#line 931
c_rt_lib0clear(&___nl__im__18);
#line 931
c_rt_lib0move(&___nl__im__22,___get_global_string_const(831));
#line 931
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__22));
#line 931
c_rt_lib0clear(&___nl__im__16);
#line 931
c_rt_lib0clear(&___nl__im__22);
#line 931
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__15));
#line 931
c_rt_lib0clear(&___nl__im__15);
#line 932
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(739)));
#line 932
___nl__int__3 = getIntFromImm(___nl__im__23);
#line 932
c_rt_lib0clear(&___nl__im__23);
#line 932
c_rt_lib0clear(&___nl__im__4);
#line 933
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 933
goto label_6;
#line 933
label_50:
;
#line 934
c_rt_lib0clear(&___nl__im__0);
#line 934
//clear ___nl__int__2;
#line 934
//clear ___nl__int__3;
#line 934
c_rt_lib0clear(&___nl__im__4);
#line 934
//clear ___nl__int__5;
#line 934
//clear ___nl__int__6;
#line 934
//clear ___nl__int__7;
#line 934
//clear ___nl__bool__8;
#line 934
c_rt_lib0clear(&___nl__im__9);
#line 934
//clear ___nl__bool__10;
#line 934
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0number_to_base64_vlq(INT  ___nl__int__0) {
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
#line 938
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 939
___nl__bool__3 = true;
#line 939
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_base64_vlq_digit(&___nl__int__0, ___nl__bool__3));
#line 939
//clear ___nl__bool__3;
#line 939
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 939
c_rt_lib0clear(&___nl__im__2);
#line 940
label_6:
;
#line 940
___nl__int__5 = 0;
#line 940
___nl__bool__4 = ___nl__int__0 > ___nl__int__5;
#line 940
//clear ___nl__int__5;
#line 940
___nl__bool__4 = !___nl__bool__4;
#line 940
if(___nl__bool__4){ goto label_18;}
#line 941
___nl__bool__7 = false;
#line 941
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_base64_vlq_digit(&___nl__int__0, ___nl__bool__7));
#line 941
//clear ___nl__bool__7;
#line 941
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 941
c_rt_lib0clear(&___nl__im__6);
#line 942
goto label_6;
#line 942
label_18:
;
#line 943
//clear ___nl__int__0;
#line 943
//clear ___nl__bool__4;
#line 943
return ___nl__im__1;
#line 943
//clear ___nl__int__0;
#line 943
c_rt_lib0clear(&___nl__im__1);
#line 943
//clear ___nl__bool__4;
#line 943
return NULL;
return NULL;

}

ImmT  generator_js_priv0get_base64_vlq_digit(INT * ___ref___int__0,bool  ___nl__bool__1) {
generator_js_priv0__const__init();
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
#line 949
___nl__int__2 = 0;
#line 952
___nl__bool__3 = ___nl__bool__1;
#line 952
___nl__bool__4 = !___nl__bool__3;
#line 952
if(___nl__bool__4){ goto label_7;}
#line 952
___nl__int__5 = 0;
#line 952
___nl__bool__3 = (*___ref___int__0) < ___nl__int__5;
#line 952
//clear ___nl__int__5;
#line 952
label_7:
;
#line 952
//clear ___nl__bool__4;
#line 952
___nl__bool__3 = !___nl__bool__3;
#line 952
if(___nl__bool__3){ goto label_17;}
#line 953
___nl__int__6 = 1;
#line 953
___nl__int__2 = ___nl__int__2 + ___nl__int__6;
#line 953
//clear ___nl__int__6;
#line 954
(*___ref___int__0) = (*___ref___int__0);
#line 954
(*___ref___int__0) = -(*___ref___int__0);
#line 955
goto label_17;
#line 955
label_17:
;
#line 955
//clear ___nl__bool__3;
#line 958
___nl__bool__7 = ___nl__bool__1;
#line 958
___nl__bool__7 = !___nl__bool__7;
#line 958
if(___nl__bool__7){ goto label_35;}
#line 959
___nl__int__9 = 2;
#line 959
___nl__int__11 = 16;
#line 959
___nl__int__10 = (*___ref___int__0) % ___nl__int__11;
#line 959
//clear ___nl__int__11;
#line 959
___nl__int__8 = ___nl__int__9 * ___nl__int__10;
#line 959
//clear ___nl__int__9;
#line 959
//clear ___nl__int__10;
#line 959
___nl__int__2 = ___nl__int__2 + ___nl__int__8;
#line 959
//clear ___nl__int__8;
#line 960
___nl__int__12 = 16;
#line 960
(*___ref___int__0) = (*___ref___int__0) / ___nl__int__12;
#line 960
//clear ___nl__int__12;
#line 961
goto label_45;
#line 961
label_35:
;
#line 962
___nl__int__14 = 32;
#line 962
___nl__int__13 = (*___ref___int__0) % ___nl__int__14;
#line 962
//clear ___nl__int__14;
#line 962
___nl__int__2 = ___nl__int__2 + ___nl__int__13;
#line 962
//clear ___nl__int__13;
#line 963
___nl__int__15 = 32;
#line 963
(*___ref___int__0) = (*___ref___int__0) / ___nl__int__15;
#line 963
//clear ___nl__int__15;
#line 964
goto label_45;
#line 964
label_45:
;
#line 964
//clear ___nl__bool__7;
#line 967
___nl__int__17 = 0;
#line 967
___nl__bool__16 = (*___ref___int__0) > ___nl__int__17;
#line 967
//clear ___nl__int__17;
#line 967
___nl__bool__16 = !___nl__bool__16;
#line 967
if(___nl__bool__16){ goto label_56;}
#line 968
___nl__int__18 = 32;
#line 968
___nl__int__2 = ___nl__int__2 + ___nl__int__18;
#line 968
//clear ___nl__int__18;
#line 969
goto label_56;
#line 969
label_56:
;
#line 969
//clear ___nl__bool__16;
#line 971
c_rt_lib0move(&___nl__im__20, generator_js_priv0base64_table());
#line 971
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__20, ___nl__int__2));
#line 971
c_rt_lib0clear(&___nl__im__20);
#line 971
//clear ___nl__bool__1;
#line 971
//clear ___nl__int__2;
#line 971
return ___nl__im__19;
return NULL;

}

ImmT generator_js_priv0base64_table(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(4);
}
ImmT generator_js_priv0base64_table0cal() {
generator_js_priv0__const__init();
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
#line 975
c_rt_lib0move(&___nl__im__1,___get_global_string_const(831));
#line 975
c_rt_lib0move(&___nl__im__2,___get_global_string_const(832));
#line 975
c_rt_lib0move(&___nl__im__3,___get_global_string_const(833));
#line 975
c_rt_lib0move(&___nl__im__4,___get_global_string_const(834));
#line 975
c_rt_lib0move(&___nl__im__5,___get_global_string_const(835));
#line 975
c_rt_lib0move(&___nl__im__6,___get_global_string_const(836));
#line 975
c_rt_lib0move(&___nl__im__7,___get_global_string_const(837));
#line 975
c_rt_lib0move(&___nl__im__8,___get_global_string_const(838));
#line 975
c_rt_lib0move(&___nl__im__9,___get_global_string_const(839));
#line 975
c_rt_lib0move(&___nl__im__10,___get_global_string_const(840));
#line 975
c_rt_lib0move(&___nl__im__11,___get_global_string_const(841));
#line 975
c_rt_lib0move(&___nl__im__12,___get_global_string_const(842));
#line 975
c_rt_lib0move(&___nl__im__13,___get_global_string_const(843));
#line 975
c_rt_lib0move(&___nl__im__14,___get_global_string_const(844));
#line 975
c_rt_lib0move(&___nl__im__15,___get_global_string_const(845));
#line 975
c_rt_lib0move(&___nl__im__16,___get_global_string_const(846));
#line 975
c_rt_lib0move(&___nl__im__17,___get_global_string_const(847));
#line 975
c_rt_lib0move(&___nl__im__18,___get_global_string_const(848));
#line 975
c_rt_lib0move(&___nl__im__19,___get_global_string_const(849));
#line 975
c_rt_lib0move(&___nl__im__20,___get_global_string_const(850));
#line 975
c_rt_lib0move(&___nl__im__21,___get_global_string_const(851));
#line 975
c_rt_lib0move(&___nl__im__22,___get_global_string_const(852));
#line 975
c_rt_lib0move(&___nl__im__23,___get_global_string_const(853));
#line 975
c_rt_lib0move(&___nl__im__24,___get_global_string_const(854));
#line 975
c_rt_lib0move(&___nl__im__25,___get_global_string_const(855));
#line 975
c_rt_lib0move(&___nl__im__26,___get_global_string_const(856));
#line 976
c_rt_lib0move(&___nl__im__27,___get_global_string_const(857));
#line 976
c_rt_lib0move(&___nl__im__28,___get_global_string_const(858));
#line 976
c_rt_lib0move(&___nl__im__29,___get_global_string_const(65));
#line 976
c_rt_lib0move(&___nl__im__30,___get_global_string_const(859));
#line 976
c_rt_lib0move(&___nl__im__31,___get_global_string_const(860));
#line 976
c_rt_lib0move(&___nl__im__32,___get_global_string_const(861));
#line 976
c_rt_lib0move(&___nl__im__33,___get_global_string_const(862));
#line 976
c_rt_lib0move(&___nl__im__34,___get_global_string_const(72));
#line 976
c_rt_lib0move(&___nl__im__35,___get_global_string_const(863));
#line 976
c_rt_lib0move(&___nl__im__36,___get_global_string_const(864));
#line 976
c_rt_lib0move(&___nl__im__37,___get_global_string_const(865));
#line 976
c_rt_lib0move(&___nl__im__38,___get_global_string_const(866));
#line 976
c_rt_lib0move(&___nl__im__39,___get_global_string_const(867));
#line 976
c_rt_lib0move(&___nl__im__40,___get_global_string_const(306));
#line 976
c_rt_lib0move(&___nl__im__41,___get_global_string_const(201));
#line 976
c_rt_lib0move(&___nl__im__42,___get_global_string_const(868));
#line 976
c_rt_lib0move(&___nl__im__43,___get_global_string_const(869));
#line 976
c_rt_lib0move(&___nl__im__44,___get_global_string_const(307));
#line 976
c_rt_lib0move(&___nl__im__45,___get_global_string_const(870));
#line 976
c_rt_lib0move(&___nl__im__46,___get_global_string_const(308));
#line 976
c_rt_lib0move(&___nl__im__47,___get_global_string_const(871));
#line 976
c_rt_lib0move(&___nl__im__48,___get_global_string_const(872));
#line 976
c_rt_lib0move(&___nl__im__49,___get_global_string_const(873));
#line 976
c_rt_lib0move(&___nl__im__50,___get_global_string_const(311));
#line 976
c_rt_lib0move(&___nl__im__51,___get_global_string_const(874));
#line 976
c_rt_lib0move(&___nl__im__52,___get_global_string_const(875));
#line 977
c_rt_lib0move(&___nl__im__53,___get_global_string_const(20));
#line 977
c_rt_lib0move(&___nl__im__54,___get_global_string_const(40));
#line 977
c_rt_lib0move(&___nl__im__55,___get_global_string_const(876));
#line 977
c_rt_lib0move(&___nl__im__56,___get_global_string_const(877));
#line 977
c_rt_lib0move(&___nl__im__57,___get_global_string_const(878));
#line 977
c_rt_lib0move(&___nl__im__58,___get_global_string_const(879));
#line 977
c_rt_lib0move(&___nl__im__59,___get_global_string_const(880));
#line 977
c_rt_lib0move(&___nl__im__60,___get_global_string_const(881));
#line 977
c_rt_lib0move(&___nl__im__61,___get_global_string_const(882));
#line 977
c_rt_lib0move(&___nl__im__62,___get_global_string_const(883));
#line 977
c_rt_lib0move(&___nl__im__63,___get_global_string_const(377));
#line 977
c_rt_lib0move(&___nl__im__64,___get_global_string_const(110));
#line 977
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(64, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17, ___nl__im__18, ___nl__im__19, ___nl__im__20, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__im__24, ___nl__im__25, ___nl__im__26, ___nl__im__27, ___nl__im__28, ___nl__im__29, ___nl__im__30, ___nl__im__31, ___nl__im__32, ___nl__im__33, ___nl__im__34, ___nl__im__35, ___nl__im__36, ___nl__im__37, ___nl__im__38, ___nl__im__39, ___nl__im__40, ___nl__im__41, ___nl__im__42, ___nl__im__43, ___nl__im__44, ___nl__im__45, ___nl__im__46, ___nl__im__47, ___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___nl__im__52, ___nl__im__53, ___nl__im__54, ___nl__im__55, ___nl__im__56, ___nl__im__57, ___nl__im__58, ___nl__im__59, ___nl__im__60, ___nl__im__61, ___nl__im__62, ___nl__im__63, ___nl__im__64));
#line 977
c_rt_lib0clear(&___nl__im__1);
#line 977
c_rt_lib0clear(&___nl__im__2);
#line 977
c_rt_lib0clear(&___nl__im__3);
#line 977
c_rt_lib0clear(&___nl__im__4);
#line 977
c_rt_lib0clear(&___nl__im__5);
#line 977
c_rt_lib0clear(&___nl__im__6);
#line 977
c_rt_lib0clear(&___nl__im__7);
#line 977
c_rt_lib0clear(&___nl__im__8);
#line 977
c_rt_lib0clear(&___nl__im__9);
#line 977
c_rt_lib0clear(&___nl__im__10);
#line 977
c_rt_lib0clear(&___nl__im__11);
#line 977
c_rt_lib0clear(&___nl__im__12);
#line 977
c_rt_lib0clear(&___nl__im__13);
#line 977
c_rt_lib0clear(&___nl__im__14);
#line 977
c_rt_lib0clear(&___nl__im__15);
#line 977
c_rt_lib0clear(&___nl__im__16);
#line 977
c_rt_lib0clear(&___nl__im__17);
#line 977
c_rt_lib0clear(&___nl__im__18);
#line 977
c_rt_lib0clear(&___nl__im__19);
#line 977
c_rt_lib0clear(&___nl__im__20);
#line 977
c_rt_lib0clear(&___nl__im__21);
#line 977
c_rt_lib0clear(&___nl__im__22);
#line 977
c_rt_lib0clear(&___nl__im__23);
#line 977
c_rt_lib0clear(&___nl__im__24);
#line 977
c_rt_lib0clear(&___nl__im__25);
#line 977
c_rt_lib0clear(&___nl__im__26);
#line 977
c_rt_lib0clear(&___nl__im__27);
#line 977
c_rt_lib0clear(&___nl__im__28);
#line 977
c_rt_lib0clear(&___nl__im__29);
#line 977
c_rt_lib0clear(&___nl__im__30);
#line 977
c_rt_lib0clear(&___nl__im__31);
#line 977
c_rt_lib0clear(&___nl__im__32);
#line 977
c_rt_lib0clear(&___nl__im__33);
#line 977
c_rt_lib0clear(&___nl__im__34);
#line 977
c_rt_lib0clear(&___nl__im__35);
#line 977
c_rt_lib0clear(&___nl__im__36);
#line 977
c_rt_lib0clear(&___nl__im__37);
#line 977
c_rt_lib0clear(&___nl__im__38);
#line 977
c_rt_lib0clear(&___nl__im__39);
#line 977
c_rt_lib0clear(&___nl__im__40);
#line 977
c_rt_lib0clear(&___nl__im__41);
#line 977
c_rt_lib0clear(&___nl__im__42);
#line 977
c_rt_lib0clear(&___nl__im__43);
#line 977
c_rt_lib0clear(&___nl__im__44);
#line 977
c_rt_lib0clear(&___nl__im__45);
#line 977
c_rt_lib0clear(&___nl__im__46);
#line 977
c_rt_lib0clear(&___nl__im__47);
#line 977
c_rt_lib0clear(&___nl__im__48);
#line 977
c_rt_lib0clear(&___nl__im__49);
#line 977
c_rt_lib0clear(&___nl__im__50);
#line 977
c_rt_lib0clear(&___nl__im__51);
#line 977
c_rt_lib0clear(&___nl__im__52);
#line 977
c_rt_lib0clear(&___nl__im__53);
#line 977
c_rt_lib0clear(&___nl__im__54);
#line 977
c_rt_lib0clear(&___nl__im__55);
#line 977
c_rt_lib0clear(&___nl__im__56);
#line 977
c_rt_lib0clear(&___nl__im__57);
#line 977
c_rt_lib0clear(&___nl__im__58);
#line 977
c_rt_lib0clear(&___nl__im__59);
#line 977
c_rt_lib0clear(&___nl__im__60);
#line 977
c_rt_lib0clear(&___nl__im__61);
#line 977
c_rt_lib0clear(&___nl__im__62);
#line 977
c_rt_lib0clear(&___nl__im__63);
#line 977
c_rt_lib0clear(&___nl__im__64);
#line 977
return ___nl__im__0;
return NULL;

}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void generator_js_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}}
ImmT generator_js_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_js_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_js0state_t0cal();
	break;
case 1:
	___const__[1] = generator_js0sourcemap_opt0cal();
	break;
case 2:
	___const__[2] = generator_js0sourcemap_entry_t0cal();
	break;
case 3:
	___const__[3] = generator_js_priv0get_namespace_name0cal();
	break;
case 4:
	___const__[4] = generator_js_priv0base64_table0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
