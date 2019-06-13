
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
ImmT  generator_js_priv0print_module_epilog(ImmT  ___nl__im__0,generator_js0sourcemap_opt_t0type ___nl__im__1,generator_js0state_t0type* ___ref___im__2);
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
ImmT  generator_js_priv0print_sourcemap_line_marker(INT  ___nl__int__0,generator_js0state_t0type* ___ref___im__1);
ImmT  generator_js_priv0print_sourcemap_line_marker_with_symbol(INT  ___nl__int__0,INT  ___nl__int__1,INT  ___nl__int__2,ImmT  ___nl__im__3,generator_js0state_t0type* ___ref___im__4);
ImmT  generator_js_priv0generate_sourcemap(generator_js0sourcemap_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  generator_js_priv0generate_sourcemap_mappings(ImmT  ___nl__im__0);
ImmT  generator_js_priv0mapping_to_base64_vlq(INT  ___nl__int__0,INT  ___nl__int__1,INT  ___nl__int__2);
ImmT  generator_js_priv0mapping_with_name_to_base64_vlq(INT  ___nl__int__0,INT  ___nl__int__1,INT  ___nl__int__2,INT  ___nl__int__3);
ImmT  generator_js_priv0numbers_to_base64_vlq(ImmT  ___nl__im__0);
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_string_const(142), ___nl__im__5, ___get_global_string_const(143), ___nl__im__7, ___get_global_string_const(185), ___nl__im__9));
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
c_rt_lib0move(&___nl__im__11, c_rt_lib0func_new(generator_js0sourcemap_t0ptr, ___get_global_string_const(738), ___get_global_string_const(739)));
#line 23
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__11));
#line 24
c_rt_lib0move(&___nl__im__12, ptd0int());
#line 24
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__2, ___get_global_string_const(740), ___nl__im__3, ___get_global_string_const(235), ___nl__im__10, ___get_global_string_const(71), ___nl__im__11, ___get_global_string_const(741), ___nl__im__12));
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__10);
#line 24
c_rt_lib0clear(&___nl__im__11);
#line 24
c_rt_lib0clear(&___nl__im__12);
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

ImmT  generator_js0sourcemap_opt_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_js0sourcemap_opt_t");
ImmT  res = generator_js0sourcemap_opt_t();
return res;
}
ImmT generator_js0sourcemap_opt_t(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(1);
}
ImmT generator_js0sourcemap_opt_t0cal() {
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

ImmT  generator_js0sourcemap_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_js0sourcemap_t");
ImmT  res = generator_js0sourcemap_t();
return res;
}
ImmT generator_js0sourcemap_t(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(2);
}
ImmT generator_js0sourcemap_t0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 37
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 37
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 37
c_rt_lib0clear(&___nl__im__3);
#line 38
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 38
c_rt_lib0move(&___nl__im__4, ptd0hash(___nl__im__5));
#line 38
c_rt_lib0clear(&___nl__im__5);
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(generator_js0sourcemap_entry_t0ptr, ___get_global_string_const(738), ___get_global_string_const(742)));
#line 39
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__7));
#line 39
c_rt_lib0move(&___nl__im__6, ptd0arr(___nl__im__7));
#line 39
c_rt_lib0clear(&___nl__im__7);
#line 39
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(743), ___nl__im__2, ___get_global_string_const(744), ___nl__im__4, ___get_global_string_const(745), ___nl__im__6));
#line 39
c_rt_lib0clear(&___nl__im__2);
#line 39
c_rt_lib0clear(&___nl__im__4);
#line 39
c_rt_lib0clear(&___nl__im__6);
#line 39
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
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

ImmT  generator_js0sourcemap_entry_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_js0sourcemap_entry_t");
ImmT  res = generator_js0sourcemap_entry_t();
return res;
}
ImmT generator_js0sourcemap_entry_t(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(3);
}
ImmT generator_js0sourcemap_entry_t0cal() {
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
#line 45
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 46
c_rt_lib0move(&___nl__im__3, ptd0int());
#line 49
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 50
c_rt_lib0move(&___nl__im__9, ptd0int());
#line 51
c_rt_lib0move(&___nl__im__10, ptd0int());
#line 51
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(3, ___get_global_string_const(562), ___nl__im__8, ___get_global_string_const(746), ___nl__im__9, ___get_global_string_const(747), ___nl__im__10));
#line 51
c_rt_lib0clear(&___nl__im__8);
#line 51
c_rt_lib0clear(&___nl__im__9);
#line 51
c_rt_lib0clear(&___nl__im__10);
#line 51
c_rt_lib0move(&___nl__im__6, ptd0rec(___nl__im__7));
#line 51
c_rt_lib0clear(&___nl__im__7);
#line 53
c_rt_lib0move(&___nl__im__11, ptd0none());
#line 53
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_string_const(80), ___nl__im__6, ___get_global_string_const(81), ___nl__im__11));
#line 53
c_rt_lib0clear(&___nl__im__6);
#line 53
c_rt_lib0clear(&___nl__im__11);
#line 53
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 53
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(748), ___nl__im__2, ___get_global_string_const(749), ___nl__im__3, ___get_global_string_const(750), ___nl__im__4));
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 53
c_rt_lib0clear(&___nl__im__3);
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
return ___nl__im__0;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
return NULL;
return NULL;

}

ImmT generator_js_priv0get_namespace_name(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(4);
}
ImmT generator_js_priv0get_namespace_name0cal() {
generator_js_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
#line 59
c_rt_lib0move(&___nl__im__0,___get_global_string_const(312));
#line 59
return ___nl__im__0;
#line 59
c_rt_lib0clear(&___nl__im__0);
#line 59
return NULL;
return NULL;

}

ImmT  generator_js0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "generator_js0generate");
nlasm0result_t0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
generator_js0sourcemap_opt_t0type *var2 = &(_tab[2]);
ImmT  res = generator_js0generate(*var0, *var1, *var2);
return res;
}
ImmT  generator_js0generate(nlasm0result_t0type ___nl__im__0,ImmT  ___nl__im__1,generator_js0sourcemap_opt_t0type ___nl__im__2) {
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
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 65
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 66
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(0));
#line 66
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_mk(0));
#line 66
c_rt_lib0move(&___nl__im__8,___get_global_string_const(65));
#line 66
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_string_const(142), ___nl__im__6, ___get_global_string_const(143), ___nl__im__7, ___get_global_string_const(185), ___nl__im__8));
#line 66
c_rt_lib0clear(&___nl__im__6);
#line 66
c_rt_lib0clear(&___nl__im__7);
#line 66
c_rt_lib0clear(&___nl__im__8);
#line 67
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(235)));
#line 68
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(0));
#line 68
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 68
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(743), ___nl__im__11, ___get_global_string_const(744), ___nl__im__12, ___get_global_string_const(745), ___nl__im__13));
#line 68
c_rt_lib0clear(&___nl__im__11);
#line 68
c_rt_lib0clear(&___nl__im__12);
#line 68
c_rt_lib0clear(&___nl__im__13);
#line 69
___nl__int__14 = 0;
#line 69
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__14));
#line 69
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(5, ___get_global_string_const(66), ___nl__im__4, ___get_global_string_const(740), ___nl__im__5, ___get_global_string_const(235), ___nl__im__9, ___get_global_string_const(71), ___nl__im__10, ___get_global_string_const(741), ___nl__im__15));
#line 69
c_rt_lib0clear(&___nl__im__4);
#line 69
c_rt_lib0clear(&___nl__im__5);
#line 69
c_rt_lib0clear(&___nl__im__9);
#line 69
c_rt_lib0clear(&___nl__im__10);
#line 69
//clear ___nl__int__14;
#line 69
c_rt_lib0clear(&___nl__im__15);
#line 72
c_rt_lib0delete(generator_js_priv0print_module_prolog(___nl__im__1, &___nl__im__3));
#line 73
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(222)));
#line 73
___nl__int__18 = 0;
#line 73
___nl__int__19 = 1;
#line 73
___nl__int__20 = c_rt_lib0array_len(___nl__im__16);
#line 73
label_30:
;
#line 73
___nl__bool__21 = ___nl__int__18 >= ___nl__int__20;
#line 73
if(___nl__bool__21){ goto label_39;}
#line 73
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__16, ___nl__int__18));
#line 73
c_rt_lib0copy(&___nl__im__17, ___nl__im__22);
#line 74
c_rt_lib0delete(generator_js_priv0print_function_or_singleton(___nl__im__17, &___nl__im__3));
#line 74
c_rt_lib0clear(&___nl__im__17);
#line 75
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 75
goto label_30;
#line 75
label_39:
;
#line 76
c_rt_lib0delete(generator_js_priv0print_consts(&___nl__im__3));
#line 77
c_rt_lib0delete(generator_js_priv0print_module_epilog(___nl__im__1, ___nl__im__2, &___nl__im__3));
#line 80
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(66)));
#line 81
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(80));
#line 81
if(___nl__bool__26){ goto label_47;}
#line 81
c_rt_lib0move(&___nl__im__25,___get_global_string_const(36));
#line 81
goto label_53;
#line 81
label_47:
;
#line 81
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(71)));
#line 81
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(235)));
#line 81
c_rt_lib0move(&___nl__im__25, generator_js_priv0generate_sourcemap(___nl__im__27, ___nl__im__28));
#line 81
c_rt_lib0clear(&___nl__im__27);
#line 81
c_rt_lib0clear(&___nl__im__28);
#line 81
label_53:
;
#line 81
//clear ___nl__bool__26;
#line 81
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(2, ___get_global_string_const(66), ___nl__im__24, ___get_global_string_const(71), ___nl__im__25));
#line 81
c_rt_lib0clear(&___nl__im__24);
#line 81
c_rt_lib0clear(&___nl__im__25);
#line 81
c_rt_lib0clear(&___nl__im__0);
#line 81
c_rt_lib0clear(&___nl__im__1);
#line 81
c_rt_lib0clear(&___nl__im__2);
#line 81
c_rt_lib0clear(&___nl__im__3);
#line 81
c_rt_lib0clear(&___nl__im__16);
#line 81
c_rt_lib0clear(&___nl__im__17);
#line 81
//clear ___nl__int__18;
#line 81
//clear ___nl__int__19;
#line 81
//clear ___nl__int__20;
#line 81
//clear ___nl__bool__21;
#line 81
c_rt_lib0clear(&___nl__im__22);
#line 81
return ___nl__im__23;
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
#line 86
c_rt_lib0move(&___nl__im__4,___get_global_string_const(751));
#line 86
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 86
c_rt_lib0clear(&___nl__im__4);
#line 86
c_rt_lib0move(&___nl__im__5,___get_global_string_const(454));
#line 86
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 86
c_rt_lib0clear(&___nl__im__3);
#line 86
c_rt_lib0clear(&___nl__im__5);
#line 86
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 86
c_rt_lib0clear(&___nl__im__2);
#line 87
c_rt_lib0move(&___nl__im__8,___get_global_string_const(752));
#line 87
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 87
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 87
c_rt_lib0clear(&___nl__im__8);
#line 87
c_rt_lib0clear(&___nl__im__9);
#line 87
c_rt_lib0move(&___nl__im__10,___get_global_string_const(753));
#line 87
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 87
c_rt_lib0clear(&___nl__im__7);
#line 87
c_rt_lib0clear(&___nl__im__10);
#line 87
c_rt_lib0delete(generator_js_priv0println(___nl__im__6, ___ref___im__1));
#line 87
c_rt_lib0clear(&___nl__im__6);
#line 88
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 88
c_rt_lib0move(&___nl__im__15,___get_global_string_const(123));
#line 88
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 88
c_rt_lib0clear(&___nl__im__14);
#line 88
c_rt_lib0clear(&___nl__im__15);
#line 88
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(235)));
#line 88
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 88
c_rt_lib0clear(&___nl__im__13);
#line 88
c_rt_lib0clear(&___nl__im__16);
#line 88
c_rt_lib0move(&___nl__im__17,___get_global_string_const(754));
#line 88
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__17));
#line 88
c_rt_lib0clear(&___nl__im__12);
#line 88
c_rt_lib0clear(&___nl__im__17);
#line 88
c_rt_lib0delete(generator_js_priv0println(___nl__im__11, ___ref___im__1));
#line 88
c_rt_lib0clear(&___nl__im__11);
#line 89
c_rt_lib0move(&___nl__im__24,___get_global_string_const(618));
#line 89
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__0));
#line 89
c_rt_lib0clear(&___nl__im__24);
#line 89
c_rt_lib0move(&___nl__im__25,___get_global_string_const(755));
#line 89
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 89
c_rt_lib0clear(&___nl__im__23);
#line 89
c_rt_lib0clear(&___nl__im__25);
#line 89
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__0));
#line 89
c_rt_lib0clear(&___nl__im__22);
#line 90
c_rt_lib0move(&___nl__im__26,___get_global_string_const(756));
#line 90
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 90
c_rt_lib0clear(&___nl__im__21);
#line 90
c_rt_lib0clear(&___nl__im__26);
#line 90
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__0));
#line 90
c_rt_lib0clear(&___nl__im__20);
#line 90
c_rt_lib0move(&___nl__im__27,___get_global_string_const(757));
#line 90
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__27));
#line 90
c_rt_lib0clear(&___nl__im__19);
#line 90
c_rt_lib0clear(&___nl__im__27);
#line 90
c_rt_lib0delete(generator_js_priv0println(___nl__im__18, ___ref___im__1));
#line 90
c_rt_lib0clear(&___nl__im__18);
#line 91
c_rt_lib0move(&___nl__im__34,___get_global_string_const(618));
#line 91
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__0));
#line 91
c_rt_lib0clear(&___nl__im__34);
#line 91
c_rt_lib0move(&___nl__im__35,___get_global_string_const(758));
#line 91
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 91
c_rt_lib0clear(&___nl__im__33);
#line 91
c_rt_lib0clear(&___nl__im__35);
#line 91
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__0));
#line 91
c_rt_lib0clear(&___nl__im__32);
#line 92
c_rt_lib0move(&___nl__im__36,___get_global_string_const(756));
#line 92
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__36));
#line 92
c_rt_lib0clear(&___nl__im__31);
#line 92
c_rt_lib0clear(&___nl__im__36);
#line 92
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__0));
#line 92
c_rt_lib0clear(&___nl__im__30);
#line 92
c_rt_lib0move(&___nl__im__37,___get_global_string_const(757));
#line 92
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__37));
#line 92
c_rt_lib0clear(&___nl__im__29);
#line 92
c_rt_lib0clear(&___nl__im__37);
#line 92
c_rt_lib0delete(generator_js_priv0println(___nl__im__28, ___ref___im__1));
#line 92
c_rt_lib0clear(&___nl__im__28);
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_module_epilog(ImmT  ___nl__im__0,generator_js0sourcemap_opt_t0type ___nl__im__1,generator_js0state_t0type* ___ref___im__2) {
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
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
#line 97
c_rt_lib0move(&___nl__im__7,___get_global_string_const(759));
#line 97
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 97
c_rt_lib0clear(&___nl__im__7);
#line 97
c_rt_lib0move(&___nl__im__8,___get_global_string_const(756));
#line 97
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 97
c_rt_lib0clear(&___nl__im__6);
#line 97
c_rt_lib0clear(&___nl__im__8);
#line 97
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 97
c_rt_lib0clear(&___nl__im__5);
#line 97
c_rt_lib0move(&___nl__im__9,___get_global_string_const(760));
#line 97
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 97
c_rt_lib0clear(&___nl__im__4);
#line 97
c_rt_lib0clear(&___nl__im__9);
#line 97
c_rt_lib0delete(generator_js_priv0println(___nl__im__3, ___ref___im__2));
#line 97
c_rt_lib0clear(&___nl__im__3);
#line 98
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(80));
#line 98
if(___nl__bool__10){ goto label_22;}
#line 100
___nl__bool__10 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(81));
#line 100
if(___nl__bool__10){ goto label_31;}
#line 100
c_rt_lib0move(&___nl__im__11,___get_global_string_const(15));
#line 100
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__11, ___nl__im__1));
#line 100
nl_die_arg(___nl__im__11);
#line 98
label_22:
;
#line 98
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(80)));
#line 98
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 99
c_rt_lib0move(&___nl__im__15,___get_global_string_const(761));
#line 99
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__12));
#line 99
c_rt_lib0clear(&___nl__im__15);
#line 99
c_rt_lib0delete(generator_js_priv0println(___nl__im__14, ___ref___im__2));
#line 99
c_rt_lib0clear(&___nl__im__14);
#line 100
goto label_33;
#line 100
label_31:
;
#line 101
goto label_33;
#line 101
label_33:
;
#line 101
c_rt_lib0clear(&___nl__im__0);
#line 101
c_rt_lib0clear(&___nl__im__1);
#line 101
//clear ___nl__bool__10;
#line 101
c_rt_lib0clear(&___nl__im__11);
#line 101
c_rt_lib0clear(&___nl__im__12);
#line 101
c_rt_lib0clear(&___nl__im__13);
#line 101
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
#line 105
c_rt_lib0move(&___nl__im__3,___get_global_string_const(751));
#line 105
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(740)));
#line 105
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(185)));
#line 105
c_rt_lib0clear(&___nl__im__5);
#line 105
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 105
c_rt_lib0clear(&___nl__im__3);
#line 105
c_rt_lib0clear(&___nl__im__4);
#line 105
c_rt_lib0move(&___nl__im__6,___get_global_string_const(762));
#line 105
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__6));
#line 105
c_rt_lib0clear(&___nl__im__2);
#line 105
c_rt_lib0clear(&___nl__im__6);
#line 105
c_rt_lib0delete(generator_js_priv0println(___nl__im__1, ___ref___im__0));
#line 105
c_rt_lib0clear(&___nl__im__1);
#line 106
___nl__int__7 = 0;
#line 107
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(740)));
#line 107
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(142)));
#line 107
c_rt_lib0clear(&___nl__im__9);
#line 107
___nl__int__11 = 0;
#line 107
___nl__int__12 = 1;
#line 107
___nl__int__13 = c_rt_lib0array_len(___nl__im__8);
#line 107
label_20:
;
#line 107
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 107
if(___nl__bool__14){ goto label_56;}
#line 107
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__8, ___nl__int__11));
#line 107
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 108
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(740)));
#line 108
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(185)));
#line 108
c_rt_lib0clear(&___nl__im__22);
#line 108
c_rt_lib0move(&___nl__im__23,___get_global_string_const(330));
#line 108
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 108
c_rt_lib0clear(&___nl__im__21);
#line 108
c_rt_lib0clear(&___nl__im__23);
#line 108
c_rt_lib0move(&___nl__string__24, c_rt_lib0int_to_string(___nl__int__7));
#line 108
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__string__24));
#line 108
c_rt_lib0clear(&___nl__im__20);
#line 108
c_rt_lib0clear(&___nl__string__24);
#line 108
c_rt_lib0move(&___nl__im__25,___get_global_string_const(528));
#line 108
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__25));
#line 108
c_rt_lib0clear(&___nl__im__19);
#line 108
c_rt_lib0clear(&___nl__im__25);
#line 108
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_const_value(___nl__im__10));
#line 108
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__26));
#line 108
c_rt_lib0clear(&___nl__im__18);
#line 108
c_rt_lib0clear(&___nl__im__26);
#line 108
c_rt_lib0move(&___nl__im__27,___get_global_string_const(454));
#line 108
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__27));
#line 108
c_rt_lib0clear(&___nl__im__17);
#line 108
c_rt_lib0clear(&___nl__im__27);
#line 108
c_rt_lib0delete(generator_js_priv0print(___nl__im__16, ___ref___im__0));
#line 108
c_rt_lib0clear(&___nl__im__16);
#line 109
___nl__int__28 = 1;
#line 109
___nl__int__7 = ___nl__int__7 + ___nl__int__28;
#line 109
//clear ___nl__int__28;
#line 109
c_rt_lib0clear(&___nl__im__10);
#line 110
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 110
goto label_20;
#line 110
label_56:
;
#line 110
//clear ___nl__int__7;
#line 110
c_rt_lib0clear(&___nl__im__8);
#line 110
c_rt_lib0clear(&___nl__im__10);
#line 110
//clear ___nl__int__11;
#line 110
//clear ___nl__int__12;
#line 110
//clear ___nl__int__13;
#line 110
//clear ___nl__bool__14;
#line 110
c_rt_lib0clear(&___nl__im__15);
#line 110
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
#line 115
___nl__bool__3 = nl0is_string(___nl__im__0);
#line 115
___nl__bool__3 = !___nl__bool__3;
#line 115
if(___nl__bool__3){ goto label_61;}
#line 116
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 116
c_rt_lib0move(&___nl__im__4, ptd0ensure(___nl__im__5, ___nl__im__0));
#line 116
c_rt_lib0clear(&___nl__im__5);
#line 117
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(740)));
#line 117
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(143)));
#line 117
c_rt_lib0clear(&___nl__im__8);
#line 117
___nl__bool__6 = hash0has_key(___nl__im__7, ___nl__im__4);
#line 117
c_rt_lib0clear(&___nl__im__7);
#line 117
___nl__bool__6 = !___nl__bool__6;
#line 117
if(___nl__bool__6){ goto label_21;}
#line 118
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(740)));
#line 118
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(143)));
#line 118
c_rt_lib0clear(&___nl__im__10);
#line 118
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__4));
#line 118
___nl__int__2 = getIntFromImm(___nl__im__11);
#line 118
c_rt_lib0clear(&___nl__im__9);
#line 118
c_rt_lib0clear(&___nl__im__11);
#line 119
goto label_58;
#line 119
label_21:
;
#line 120
c_rt_lib0move(&___nl__im__12,___get_global_string_const(740));
#line 120
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__12));
#line 120
c_rt_lib0move(&___nl__im__13,___get_global_string_const(142));
#line 120
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__13));
#line 120
c_rt_lib0array_push(&___nl__im__13, ___nl__im__0);
#line 120
c_rt_lib0move(&___nl__string__14,___get_global_string_const(142));
#line 120
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__14, ___nl__im__13));
#line 120
c_rt_lib0move(&___nl__string__14,___get_global_string_const(740));
#line 120
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__14, ___nl__im__12));
#line 120
c_rt_lib0clear(&___nl__im__12);
#line 120
c_rt_lib0clear(&___nl__im__13);
#line 120
c_rt_lib0clear(&___nl__string__14);
#line 121
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(740)));
#line 121
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(142)));
#line 121
c_rt_lib0clear(&___nl__im__17);
#line 121
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 121
c_rt_lib0clear(&___nl__im__16);
#line 121
___nl__int__18 = 1;
#line 121
___nl__int__2 = ___nl__int__15 - ___nl__int__18;
#line 121
//clear ___nl__int__15;
#line 121
//clear ___nl__int__18;
#line 122
c_rt_lib0move(&___nl__im__19,___get_global_string_const(740));
#line 122
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__19));
#line 122
c_rt_lib0move(&___nl__im__20,___get_global_string_const(143));
#line 122
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 122
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__2));
#line 122
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__20, ___nl__im__4, ___nl__im__21));
#line 122
c_rt_lib0move(&___nl__string__22,___get_global_string_const(143));
#line 122
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__22, ___nl__im__20));
#line 122
c_rt_lib0move(&___nl__string__22,___get_global_string_const(740));
#line 122
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__22, ___nl__im__19));
#line 122
c_rt_lib0clear(&___nl__im__19);
#line 122
c_rt_lib0clear(&___nl__im__20);
#line 122
c_rt_lib0clear(&___nl__im__21);
#line 122
c_rt_lib0clear(&___nl__string__22);
#line 123
goto label_58;
#line 123
label_58:
;
#line 123
//clear ___nl__bool__6;
#line 124
goto label_84;
#line 124
label_61:
;
#line 125
c_rt_lib0move(&___nl__im__23,___get_global_string_const(740));
#line 125
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__23));
#line 125
c_rt_lib0move(&___nl__im__24,___get_global_string_const(142));
#line 125
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash(___nl__im__23, ___nl__im__24));
#line 125
c_rt_lib0array_push(&___nl__im__24, ___nl__im__0);
#line 125
c_rt_lib0move(&___nl__string__25,___get_global_string_const(142));
#line 125
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__23, ___nl__string__25, ___nl__im__24));
#line 125
c_rt_lib0move(&___nl__string__25,___get_global_string_const(740));
#line 125
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__25, ___nl__im__23));
#line 125
c_rt_lib0clear(&___nl__im__23);
#line 125
c_rt_lib0clear(&___nl__im__24);
#line 125
c_rt_lib0clear(&___nl__string__25);
#line 126
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(740)));
#line 126
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(142)));
#line 126
c_rt_lib0clear(&___nl__im__28);
#line 126
___nl__int__26 = c_rt_lib0array_len(___nl__im__27);
#line 126
c_rt_lib0clear(&___nl__im__27);
#line 126
___nl__int__29 = 1;
#line 126
___nl__int__2 = ___nl__int__26 - ___nl__int__29;
#line 126
//clear ___nl__int__26;
#line 126
//clear ___nl__int__29;
#line 127
goto label_84;
#line 127
label_84:
;
#line 127
//clear ___nl__bool__3;
#line 127
c_rt_lib0clear(&___nl__im__4);
#line 128
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(740)));
#line 128
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(185)));
#line 128
c_rt_lib0clear(&___nl__im__34);
#line 128
c_rt_lib0move(&___nl__im__35,___get_global_string_const(330));
#line 128
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 128
c_rt_lib0clear(&___nl__im__33);
#line 128
c_rt_lib0clear(&___nl__im__35);
#line 128
c_rt_lib0move(&___nl__string__36, c_rt_lib0int_to_string(___nl__int__2));
#line 128
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__string__36));
#line 128
c_rt_lib0clear(&___nl__im__32);
#line 128
c_rt_lib0clear(&___nl__string__36);
#line 128
c_rt_lib0move(&___nl__im__37,___get_global_string_const(331));
#line 128
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__37));
#line 128
c_rt_lib0clear(&___nl__im__31);
#line 128
c_rt_lib0clear(&___nl__im__37);
#line 128
c_rt_lib0clear(&___nl__im__0);
#line 128
//clear ___nl__int__2;
#line 128
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
#line 132
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(232)));
#line 132
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(233));
#line 132
if(___nl__bool__3){ goto label_8;}
#line 134
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(479));
#line 134
if(___nl__bool__3){ goto label_23;}
#line 134
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 134
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 134
nl_die_arg(___nl__im__4);
#line 132
label_8:
;
#line 133
c_rt_lib0move(&___nl__im__7,___get_global_string_const(123));
#line 133
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__1, ___nl__im__7));
#line 133
c_rt_lib0clear(&___nl__im__7);
#line 133
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 133
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 133
c_rt_lib0clear(&___nl__im__6);
#line 133
c_rt_lib0clear(&___nl__im__8);
#line 133
c_rt_lib0clear(&___nl__im__0);
#line 133
c_rt_lib0clear(&___nl__im__1);
#line 133
c_rt_lib0clear(&___nl__im__2);
#line 133
//clear ___nl__bool__3;
#line 133
c_rt_lib0clear(&___nl__im__4);
#line 133
return ___nl__im__5;
#line 134
goto label_37;
#line 134
label_23:
;
#line 135
c_rt_lib0move(&___nl__im__10,___get_global_string_const(763));
#line 135
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 135
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 135
c_rt_lib0clear(&___nl__im__10);
#line 135
c_rt_lib0clear(&___nl__im__11);
#line 135
c_rt_lib0clear(&___nl__im__0);
#line 135
c_rt_lib0clear(&___nl__im__1);
#line 135
c_rt_lib0clear(&___nl__im__2);
#line 135
//clear ___nl__bool__3;
#line 135
c_rt_lib0clear(&___nl__im__4);
#line 135
c_rt_lib0clear(&___nl__im__5);
#line 135
return ___nl__im__9;
#line 136
goto label_37;
#line 136
label_37:
;
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
c_rt_lib0clear(&___nl__im__1);
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
//clear ___nl__bool__3;
#line 136
c_rt_lib0clear(&___nl__im__4);
#line 136
c_rt_lib0clear(&___nl__im__5);
#line 136
c_rt_lib0clear(&___nl__im__9);
#line 136
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
#line 140
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 140
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(232)));
#line 140
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(233));
#line 140
if(___nl__bool__4){ goto label_9;}
#line 142
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(479));
#line 142
if(___nl__bool__4){ goto label_12;}
#line 142
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 142
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 142
nl_die_arg(___nl__im__5);
#line 140
label_9:
;
#line 141
c_rt_lib0copy(&___nl__im__2, ___nl__im__1);
#line 142
goto label_15;
#line 142
label_12:
;
#line 143
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 144
goto label_15;
#line 144
label_15:
;
#line 145
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 145
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_call_name_raw(___nl__im__7, ___nl__im__2));
#line 145
c_rt_lib0clear(&___nl__im__7);
#line 145
c_rt_lib0clear(&___nl__im__0);
#line 145
c_rt_lib0clear(&___nl__im__1);
#line 145
c_rt_lib0clear(&___nl__im__2);
#line 145
c_rt_lib0clear(&___nl__im__3);
#line 145
//clear ___nl__bool__4;
#line 145
c_rt_lib0clear(&___nl__im__5);
#line 145
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
#line 149
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 149
___nl__bool__2 = c_rt_lib0eq(___nl__im__1, ___nl__im__3);
#line 149
c_rt_lib0clear(&___nl__im__3);
#line 149
___nl__bool__2 = !___nl__bool__2;
#line 149
if(___nl__bool__2){ goto label_13;}
#line 150
c_rt_lib0move(&___nl__im__5,___get_global_string_const(763));
#line 150
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__0));
#line 150
c_rt_lib0clear(&___nl__im__5);
#line 150
c_rt_lib0clear(&___nl__im__0);
#line 150
c_rt_lib0clear(&___nl__im__1);
#line 150
//clear ___nl__bool__2;
#line 150
return ___nl__im__4;
#line 151
goto label_33;
#line 151
label_13:
;
#line 152
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_namespace_name());
#line 152
c_rt_lib0move(&___nl__im__11,___get_global_string_const(123));
#line 152
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 152
c_rt_lib0clear(&___nl__im__10);
#line 152
c_rt_lib0clear(&___nl__im__11);
#line 152
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 152
c_rt_lib0clear(&___nl__im__9);
#line 152
c_rt_lib0move(&___nl__im__12,___get_global_string_const(123));
#line 152
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__12));
#line 152
c_rt_lib0clear(&___nl__im__8);
#line 152
c_rt_lib0clear(&___nl__im__12);
#line 152
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 152
c_rt_lib0clear(&___nl__im__7);
#line 152
c_rt_lib0clear(&___nl__im__0);
#line 152
c_rt_lib0clear(&___nl__im__1);
#line 152
//clear ___nl__bool__2;
#line 152
c_rt_lib0clear(&___nl__im__4);
#line 152
return ___nl__im__6;
#line 153
goto label_33;
#line 153
label_33:
;
#line 153
//clear ___nl__bool__2;
#line 153
c_rt_lib0clear(&___nl__im__4);
#line 153
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
#line 157
c_rt_lib0move(&___nl__im__1,___get_global_string_const(122));
#line 157
c_rt_lib0move(&___nl__im__2,___get_global_string_const(340));
#line 157
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 157
c_rt_lib0clear(&___nl__im__1);
#line 157
c_rt_lib0clear(&___nl__im__2);
#line 158
c_rt_lib0move(&___nl__im__3,___get_global_string_const(296));
#line 158
c_rt_lib0move(&___nl__im__4,___get_global_string_const(341));
#line 158
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 158
c_rt_lib0clear(&___nl__im__3);
#line 158
c_rt_lib0clear(&___nl__im__4);
#line 159
c_rt_lib0move(&___nl__im__5, string0lf());
#line 159
c_rt_lib0move(&___nl__im__6,___get_global_string_const(344));
#line 159
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__6);
#line 160
c_rt_lib0move(&___nl__im__7, string0r());
#line 160
c_rt_lib0move(&___nl__im__8,___get_global_string_const(345));
#line 160
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 160
c_rt_lib0clear(&___nl__im__7);
#line 160
c_rt_lib0clear(&___nl__im__8);
#line 161
___nl__int__10 = 0;
#line 161
c_rt_lib0move(&___nl__im__9, string0chr(___nl__int__10));
#line 161
//clear ___nl__int__10;
#line 161
c_rt_lib0move(&___nl__im__11,___get_global_string_const(630));
#line 161
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__11));
#line 161
c_rt_lib0clear(&___nl__im__9);
#line 161
c_rt_lib0clear(&___nl__im__11);
#line 162
c_rt_lib0move(&___nl__im__12, string0tab());
#line 162
c_rt_lib0move(&___nl__im__13,___get_global_string_const(624));
#line 162
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__12, ___nl__im__13));
#line 162
c_rt_lib0clear(&___nl__im__12);
#line 162
c_rt_lib0clear(&___nl__im__13);
#line 164
c_rt_lib0move(&___nl__im__16,___get_global_string_const(296));
#line 164
c_rt_lib0move(&___nl__im__18, string0lf());
#line 164
c_rt_lib0move(&___nl__im__19,___get_global_string_const(344));
#line 164
c_rt_lib0move(&___nl__im__17, string0replace(___nl__im__0, ___nl__im__18, ___nl__im__19));
#line 164
c_rt_lib0clear(&___nl__im__18);
#line 164
c_rt_lib0clear(&___nl__im__19);
#line 164
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 164
c_rt_lib0clear(&___nl__im__16);
#line 164
c_rt_lib0clear(&___nl__im__17);
#line 164
c_rt_lib0move(&___nl__im__20,___get_global_string_const(296));
#line 164
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 164
c_rt_lib0clear(&___nl__im__15);
#line 164
c_rt_lib0clear(&___nl__im__20);
#line 164
c_rt_lib0clear(&___nl__im__0);
#line 164
return ___nl__im__14;
return NULL;

}

ImmT  generator_js_priv0get_str_imm(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
#line 168
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_const_value_aggr(___nl__im__0, ___ref___im__1));
#line 168
c_rt_lib0clear(&___nl__im__0);
#line 168
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
#line 172
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 172
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 172
c_rt_lib0clear(&___nl__im__3);
#line 172
___nl__int__4 = 0;
#line 172
___nl__bool__1 = ___nl__int__2 > ___nl__int__4;
#line 172
//clear ___nl__int__2;
#line 172
//clear ___nl__int__4;
#line 172
___nl__bool__1 = !___nl__bool__1;
#line 172
if(___nl__bool__1){ goto label_14;}
#line 172
___nl__bool__5 = false;
#line 172
c_rt_lib0clear(&___nl__im__0);
#line 172
//clear ___nl__bool__1;
#line 172
return ___nl__bool__5;
#line 172
goto label_14;
#line 172
label_14:
;
#line 172
//clear ___nl__bool__1;
#line 172
//clear ___nl__bool__5;
#line 173
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(247)));
#line 173
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(209));
#line 173
c_rt_lib0clear(&___nl__im__7);
#line 173
___nl__bool__6 = !___nl__bool__6;
#line 173
if(___nl__bool__6){ goto label_27;}
#line 173
___nl__bool__8 = true;
#line 173
c_rt_lib0clear(&___nl__im__0);
#line 173
//clear ___nl__bool__6;
#line 173
return ___nl__bool__8;
#line 173
goto label_27;
#line 173
label_27:
;
#line 173
//clear ___nl__bool__6;
#line 173
//clear ___nl__bool__8;
#line 174
___nl__bool__9 = false;
#line 175
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(146)));
#line 175
___nl__int__12 = 1;
#line 175
___nl__int__12 = -___nl__int__12;
#line 175
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__12));
#line 175
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_none(___get_global_string_const(241)));
#line 175
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_mk(3, ___get_global_string_const(110), ___nl__im__11, ___get_global_string_const(240), ___nl__im__13, ___get_global_string_const(367), ___nl__im__14));
#line 175
c_rt_lib0clear(&___nl__im__11);
#line 175
//clear ___nl__int__12;
#line 175
c_rt_lib0clear(&___nl__im__13);
#line 175
c_rt_lib0clear(&___nl__im__14);
#line 176
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 176
___nl__int__17 = 0;
#line 176
___nl__int__18 = 1;
#line 176
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 176
label_45:
;
#line 176
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 176
if(___nl__bool__20){ goto label_209;}
#line 176
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 176
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 177
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(224)));
#line 178
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(225));
#line 178
___nl__bool__23 = !___nl__bool__23;
#line 178
if(___nl__bool__23){ goto label_90;}
#line 179
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(225)));
#line 180
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(226)));
#line 180
c_rt_lib0move(&___nl__im__27,___get_global_string_const(551));
#line 180
___nl__bool__25 = c_rt_lib0eq(___nl__im__26, ___nl__im__27);
#line 180
c_rt_lib0clear(&___nl__im__26);
#line 180
c_rt_lib0clear(&___nl__im__27);
#line 180
___nl__bool__25 = !___nl__bool__25;
#line 180
___nl__bool__25 = !___nl__bool__25;
#line 180
if(___nl__bool__25){ goto label_69;}
#line 180
c_rt_lib0clear(&___nl__im__22);
#line 180
//clear ___nl__bool__23;
#line 180
c_rt_lib0clear(&___nl__im__24);
#line 180
//clear ___nl__bool__25;
#line 180
goto label_206;
#line 180
goto label_69;
#line 180
label_69:
;
#line 180
//clear ___nl__bool__25;
#line 181
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(111)));
#line 181
c_rt_lib0move(&___nl__im__30,___get_global_string_const(421));
#line 181
___nl__bool__28 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 181
c_rt_lib0clear(&___nl__im__29);
#line 181
c_rt_lib0clear(&___nl__im__30);
#line 181
___nl__bool__28 = !___nl__bool__28;
#line 181
___nl__bool__28 = !___nl__bool__28;
#line 181
if(___nl__bool__28){ goto label_85;}
#line 181
c_rt_lib0clear(&___nl__im__22);
#line 181
//clear ___nl__bool__23;
#line 181
c_rt_lib0clear(&___nl__im__24);
#line 181
//clear ___nl__bool__28;
#line 181
goto label_206;
#line 181
goto label_85;
#line 181
label_85:
;
#line 181
//clear ___nl__bool__28;
#line 182
___nl__bool__9 = true;
#line 183
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(244)));
#line 184
goto label_200;
#line 184
label_90:
;
#line 184
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(266));
#line 184
___nl__bool__23 = !___nl__bool__23;
#line 184
if(___nl__bool__23){ goto label_163;}
#line 185
___nl__bool__31 = ___nl__bool__9;
#line 185
___nl__bool__31 = !___nl__bool__31;
#line 185
___nl__bool__31 = !___nl__bool__31;
#line 185
if(___nl__bool__31){ goto label_115;}
#line 185
___nl__bool__32 = false;
#line 185
c_rt_lib0clear(&___nl__im__0);
#line 185
//clear ___nl__bool__9;
#line 185
c_rt_lib0clear(&___nl__im__10);
#line 185
c_rt_lib0clear(&___nl__im__15);
#line 185
c_rt_lib0clear(&___nl__im__16);
#line 185
//clear ___nl__int__17;
#line 185
//clear ___nl__int__18;
#line 185
//clear ___nl__int__19;
#line 185
//clear ___nl__bool__20;
#line 185
c_rt_lib0clear(&___nl__im__21);
#line 185
c_rt_lib0clear(&___nl__im__22);
#line 185
//clear ___nl__bool__23;
#line 185
c_rt_lib0clear(&___nl__im__24);
#line 185
//clear ___nl__bool__31;
#line 185
return ___nl__bool__32;
#line 185
goto label_115;
#line 185
label_115:
;
#line 185
//clear ___nl__bool__31;
#line 185
//clear ___nl__bool__32;
#line 186
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(266)));
#line 187
___nl__bool__34 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(245));
#line 187
___nl__bool__34 = !___nl__bool__34;
#line 187
___nl__bool__34 = !___nl__bool__34;
#line 187
if(___nl__bool__34){ goto label_141;}
#line 187
___nl__bool__35 = false;
#line 187
c_rt_lib0clear(&___nl__im__0);
#line 187
//clear ___nl__bool__9;
#line 187
c_rt_lib0clear(&___nl__im__10);
#line 187
c_rt_lib0clear(&___nl__im__15);
#line 187
c_rt_lib0clear(&___nl__im__16);
#line 187
//clear ___nl__int__17;
#line 187
//clear ___nl__int__18;
#line 187
//clear ___nl__int__19;
#line 187
//clear ___nl__bool__20;
#line 187
c_rt_lib0clear(&___nl__im__21);
#line 187
c_rt_lib0clear(&___nl__im__22);
#line 187
//clear ___nl__bool__23;
#line 187
c_rt_lib0clear(&___nl__im__24);
#line 187
c_rt_lib0clear(&___nl__im__33);
#line 187
//clear ___nl__bool__34;
#line 187
return ___nl__bool__35;
#line 187
goto label_141;
#line 187
label_141:
;
#line 187
//clear ___nl__bool__34;
#line 187
//clear ___nl__bool__35;
#line 188
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__33, ___get_global_string_const(245)));
#line 188
___nl__bool__36 = nlasm0eq_reg(___nl__im__37, ___nl__im__10);
#line 188
c_rt_lib0clear(&___nl__im__37);
#line 188
c_rt_lib0clear(&___nl__im__0);
#line 188
//clear ___nl__bool__9;
#line 188
c_rt_lib0clear(&___nl__im__10);
#line 188
c_rt_lib0clear(&___nl__im__15);
#line 188
c_rt_lib0clear(&___nl__im__16);
#line 188
//clear ___nl__int__17;
#line 188
//clear ___nl__int__18;
#line 188
//clear ___nl__int__19;
#line 188
//clear ___nl__bool__20;
#line 188
c_rt_lib0clear(&___nl__im__21);
#line 188
c_rt_lib0clear(&___nl__im__22);
#line 188
//clear ___nl__bool__23;
#line 188
c_rt_lib0clear(&___nl__im__24);
#line 188
c_rt_lib0clear(&___nl__im__33);
#line 188
return ___nl__bool__36;
#line 189
goto label_200;
#line 189
label_163:
;
#line 189
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(268));
#line 189
___nl__bool__23 = !___nl__bool__23;
#line 189
if(___nl__bool__23){ goto label_168;}
#line 190
goto label_200;
#line 190
label_168:
;
#line 190
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(271));
#line 190
___nl__bool__23 = !___nl__bool__23;
#line 190
if(___nl__bool__23){ goto label_173;}
#line 191
goto label_200;
#line 191
label_173:
;
#line 192
___nl__bool__38 = ___nl__bool__9;
#line 192
___nl__bool__38 = !___nl__bool__38;
#line 192
if(___nl__bool__38){ goto label_196;}
#line 192
___nl__bool__39 = false;
#line 192
c_rt_lib0clear(&___nl__im__0);
#line 192
//clear ___nl__bool__9;
#line 192
c_rt_lib0clear(&___nl__im__10);
#line 192
c_rt_lib0clear(&___nl__im__15);
#line 192
c_rt_lib0clear(&___nl__im__16);
#line 192
//clear ___nl__int__17;
#line 192
//clear ___nl__int__18;
#line 192
//clear ___nl__int__19;
#line 192
//clear ___nl__bool__20;
#line 192
c_rt_lib0clear(&___nl__im__21);
#line 192
c_rt_lib0clear(&___nl__im__22);
#line 192
//clear ___nl__bool__23;
#line 192
c_rt_lib0clear(&___nl__im__24);
#line 192
c_rt_lib0clear(&___nl__im__33);
#line 192
//clear ___nl__bool__36;
#line 192
//clear ___nl__bool__38;
#line 192
return ___nl__bool__39;
#line 192
goto label_196;
#line 192
label_196:
;
#line 192
//clear ___nl__bool__38;
#line 192
//clear ___nl__bool__39;
#line 193
goto label_200;
#line 193
label_200:
;
#line 193
//clear ___nl__bool__23;
#line 193
c_rt_lib0clear(&___nl__im__24);
#line 193
c_rt_lib0clear(&___nl__im__33);
#line 193
//clear ___nl__bool__36;
#line 193
c_rt_lib0clear(&___nl__im__16);
#line 193
label_206:
;
#line 194
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 194
goto label_45;
#line 194
label_209:
;
#line 195
___nl__bool__40 = false;
#line 195
c_rt_lib0clear(&___nl__im__0);
#line 195
//clear ___nl__bool__9;
#line 195
c_rt_lib0clear(&___nl__im__10);
#line 195
c_rt_lib0clear(&___nl__im__15);
#line 195
c_rt_lib0clear(&___nl__im__16);
#line 195
//clear ___nl__int__17;
#line 195
//clear ___nl__int__18;
#line 195
//clear ___nl__int__19;
#line 195
//clear ___nl__bool__20;
#line 195
c_rt_lib0clear(&___nl__im__21);
#line 195
c_rt_lib0clear(&___nl__im__22);
#line 195
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
#line 199
___nl__bool__2 = generator_js_priv0is_singleton_use_function(___nl__im__0);
#line 199
___nl__bool__2 = !___nl__bool__2;
#line 199
if(___nl__bool__2){ goto label_5;}
#line 200
c_rt_lib0delete(generator_js_priv0print_singleton(___nl__im__0, ___ref___im__1));
#line 201
goto label_8;
#line 201
label_5:
;
#line 202
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__0, ___ref___im__1));
#line 203
goto label_8;
#line 203
label_8:
;
#line 203
//clear ___nl__bool__2;
#line 205
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(232)));
#line 205
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(233));
#line 205
c_rt_lib0clear(&___nl__im__5);
#line 205
___nl__bool__4 = !___nl__bool__3;
#line 205
if(___nl__bool__4){ goto label_17;}
#line 205
___nl__bool__3 = generator_js_priv0takes_own_arg(___nl__im__0);
#line 205
___nl__bool__3 = !___nl__bool__3;
#line 205
label_17:
;
#line 205
//clear ___nl__bool__4;
#line 205
___nl__bool__3 = !___nl__bool__3;
#line 205
if(___nl__bool__3){ goto label_23;}
#line 206
c_rt_lib0delete(generator_js_priv0print_dyn_function_wrapper(___nl__im__0, ___ref___im__1));
#line 207
goto label_23;
#line 207
label_23:
;
#line 207
//clear ___nl__bool__3;
#line 207
c_rt_lib0clear(&___nl__im__0);
#line 207
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
#line 211
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(235)));
#line 211
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__3));
#line 211
c_rt_lib0clear(&___nl__im__3);
#line 212
c_rt_lib0copy(&___nl__im__4, ___nl__im__0);
#line 213
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(232)));
#line 213
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(479));
#line 213
c_rt_lib0clear(&___nl__im__6);
#line 213
___nl__bool__5 = !___nl__bool__5;
#line 213
if(___nl__bool__5){ goto label_19;}
#line 214
c_rt_lib0move(&___nl__im__8,___get_global_string_const(764));
#line 214
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 214
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 214
c_rt_lib0clear(&___nl__im__8);
#line 214
c_rt_lib0clear(&___nl__im__9);
#line 214
c_rt_lib0copy(&___nl__im__10, ___nl__im__7);
#line 214
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(185), ___nl__im__10);
#line 214
c_rt_lib0clear(&___nl__im__7);
#line 214
c_rt_lib0clear(&___nl__im__10);
#line 215
goto label_30;
#line 215
label_19:
;
#line 216
c_rt_lib0move(&___nl__im__12,___get_global_string_const(765));
#line 216
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 216
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 216
c_rt_lib0clear(&___nl__im__12);
#line 216
c_rt_lib0clear(&___nl__im__13);
#line 216
c_rt_lib0copy(&___nl__im__14, ___nl__im__11);
#line 216
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(185), ___nl__im__14);
#line 216
c_rt_lib0clear(&___nl__im__11);
#line 216
c_rt_lib0clear(&___nl__im__14);
#line 217
goto label_30;
#line 217
label_30:
;
#line 217
//clear ___nl__bool__5;
#line 218
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(479)));
#line 218
c_rt_lib0copy(&___nl__im__16, ___nl__im__15);
#line 218
c_rt_lib0hash_set_value_dec(&___nl__im__4, ___get_global_string_const(232), ___nl__im__16);
#line 218
c_rt_lib0clear(&___nl__im__15);
#line 218
c_rt_lib0clear(&___nl__im__16);
#line 219
c_rt_lib0move(&___nl__im__18,___get_global_string_const(766));
#line 219
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(235)));
#line 219
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_function_name(___nl__im__4, ___nl__im__20));
#line 219
c_rt_lib0clear(&___nl__im__20);
#line 219
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 219
c_rt_lib0clear(&___nl__im__18);
#line 219
c_rt_lib0clear(&___nl__im__19);
#line 221
c_rt_lib0delete(generator_js_priv0print_function(___nl__im__4, ___ref___im__1));
#line 222
c_rt_lib0move(&___nl__im__23,___get_global_string_const(751));
#line 222
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__17));
#line 222
c_rt_lib0clear(&___nl__im__23);
#line 222
c_rt_lib0move(&___nl__im__24,___get_global_string_const(454));
#line 222
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 222
c_rt_lib0clear(&___nl__im__22);
#line 222
c_rt_lib0clear(&___nl__im__24);
#line 222
c_rt_lib0delete(generator_js_priv0println(___nl__im__21, ___ref___im__1));
#line 222
c_rt_lib0clear(&___nl__im__21);
#line 223
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(232)));
#line 223
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(233));
#line 223
if(___nl__bool__26){ goto label_62;}
#line 225
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(479));
#line 225
if(___nl__bool__26){ goto label_77;}
#line 225
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 225
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__25));
#line 225
nl_die_arg(___nl__im__27);
#line 223
label_62:
;
#line 224
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_namespace_name());
#line 224
c_rt_lib0move(&___nl__im__32,___get_global_string_const(123));
#line 224
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 224
c_rt_lib0clear(&___nl__im__31);
#line 224
c_rt_lib0clear(&___nl__im__32);
#line 224
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__2));
#line 224
c_rt_lib0clear(&___nl__im__30);
#line 224
c_rt_lib0move(&___nl__im__33,___get_global_string_const(767));
#line 224
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 224
c_rt_lib0clear(&___nl__im__29);
#line 224
c_rt_lib0clear(&___nl__im__33);
#line 224
c_rt_lib0delete(generator_js_priv0println(___nl__im__28, ___ref___im__1));
#line 224
c_rt_lib0clear(&___nl__im__28);
#line 225
goto label_88;
#line 225
label_77:
;
#line 226
c_rt_lib0move(&___nl__im__36,___get_global_string_const(768));
#line 226
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__2));
#line 226
c_rt_lib0clear(&___nl__im__36);
#line 226
c_rt_lib0move(&___nl__im__37,___get_global_string_const(769));
#line 226
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__37));
#line 226
c_rt_lib0clear(&___nl__im__35);
#line 226
c_rt_lib0clear(&___nl__im__37);
#line 226
c_rt_lib0delete(generator_js_priv0println(___nl__im__34, ___ref___im__1));
#line 226
c_rt_lib0clear(&___nl__im__34);
#line 227
goto label_88;
#line 227
label_88:
;
#line 228
c_rt_lib0move(&___nl__im__40,___get_global_string_const(618));
#line 228
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__17));
#line 228
c_rt_lib0clear(&___nl__im__40);
#line 228
c_rt_lib0move(&___nl__im__41,___get_global_string_const(770));
#line 228
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 228
c_rt_lib0clear(&___nl__im__39);
#line 228
c_rt_lib0clear(&___nl__im__41);
#line 228
c_rt_lib0delete(generator_js_priv0println(___nl__im__38, ___ref___im__1));
#line 228
c_rt_lib0clear(&___nl__im__38);
#line 229
c_rt_lib0move(&___nl__im__45,___get_global_string_const(756));
#line 229
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__17, ___nl__im__45));
#line 229
c_rt_lib0clear(&___nl__im__45);
#line 229
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(235)));
#line 229
c_rt_lib0move(&___nl__im__46, generator_js_priv0get_function_call_name(___nl__im__4, ___nl__im__47));
#line 229
c_rt_lib0clear(&___nl__im__47);
#line 229
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__46));
#line 229
c_rt_lib0clear(&___nl__im__44);
#line 229
c_rt_lib0clear(&___nl__im__46);
#line 229
c_rt_lib0move(&___nl__im__48,___get_global_string_const(497));
#line 229
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__48));
#line 229
c_rt_lib0clear(&___nl__im__43);
#line 229
c_rt_lib0clear(&___nl__im__48);
#line 229
c_rt_lib0delete(generator_js_priv0println(___nl__im__42, ___ref___im__1));
#line 229
c_rt_lib0clear(&___nl__im__42);
#line 230
c_rt_lib0move(&___nl__im__49,___get_global_string_const(321));
#line 230
c_rt_lib0delete(generator_js_priv0println(___nl__im__49, ___ref___im__1));
#line 230
c_rt_lib0clear(&___nl__im__49);
#line 231
c_rt_lib0move(&___nl__im__52,___get_global_string_const(520));
#line 231
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__17));
#line 231
c_rt_lib0clear(&___nl__im__52);
#line 231
c_rt_lib0move(&___nl__im__53,___get_global_string_const(454));
#line 231
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__53));
#line 231
c_rt_lib0clear(&___nl__im__51);
#line 231
c_rt_lib0clear(&___nl__im__53);
#line 231
c_rt_lib0delete(generator_js_priv0println(___nl__im__50, ___ref___im__1));
#line 231
c_rt_lib0clear(&___nl__im__50);
#line 232
c_rt_lib0move(&___nl__im__54,___get_global_string_const(321));
#line 232
c_rt_lib0delete(generator_js_priv0println(___nl__im__54, ___ref___im__1));
#line 232
c_rt_lib0clear(&___nl__im__54);
#line 232
c_rt_lib0clear(&___nl__im__0);
#line 232
c_rt_lib0clear(&___nl__im__2);
#line 232
c_rt_lib0clear(&___nl__im__4);
#line 232
c_rt_lib0clear(&___nl__im__17);
#line 232
c_rt_lib0clear(&___nl__im__25);
#line 232
//clear ___nl__bool__26;
#line 232
c_rt_lib0clear(&___nl__im__27);
#line 232
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
#line 236
___nl__int__2 = 0;
#line 237
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 238
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(0));
#line 239
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 240
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 240
___nl__int__8 = 0;
#line 240
___nl__int__9 = 1;
#line 240
___nl__int__10 = c_rt_lib0array_len(___nl__im__6);
#line 240
label_8:
;
#line 240
___nl__bool__11 = ___nl__int__8 >= ___nl__int__10;
#line 240
if(___nl__bool__11){ goto label_132;}
#line 240
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 240
c_rt_lib0copy(&___nl__im__7, ___nl__im__12);
#line 241
___nl__int__14 = 0;
#line 241
___nl__bool__13 = ___nl__int__2 == ___nl__int__14;
#line 241
//clear ___nl__int__14;
#line 241
___nl__bool__13 = !___nl__bool__13;
#line 241
___nl__bool__13 = !___nl__bool__13;
#line 241
if(___nl__bool__13){ goto label_23;}
#line 241
c_rt_lib0move(&___nl__im__15,___get_global_string_const(343));
#line 241
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__15));
#line 241
c_rt_lib0clear(&___nl__im__15);
#line 241
goto label_23;
#line 241
label_23:
;
#line 241
//clear ___nl__bool__13;
#line 242
c_rt_lib0move(&___nl__im__17,___get_global_string_const(294));
#line 242
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__2));
#line 242
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 242
c_rt_lib0clear(&___nl__im__17);
#line 242
c_rt_lib0clear(&___nl__string__18);
#line 242
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__16));
#line 242
c_rt_lib0clear(&___nl__im__16);
#line 243
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(482)));
#line 243
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(110)));
#line 243
c_rt_lib0clear(&___nl__im__21);
#line 243
c_rt_lib0move(&___nl__im__24,___get_global_string_const(771));
#line 243
c_rt_lib0move(&___nl__string__25, c_rt_lib0int_to_string(___nl__int__2));
#line 243
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__string__25));
#line 243
c_rt_lib0clear(&___nl__im__24);
#line 243
c_rt_lib0clear(&___nl__string__25);
#line 243
c_rt_lib0move(&___nl__im__26,___get_global_string_const(336));
#line 243
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 243
c_rt_lib0clear(&___nl__im__23);
#line 243
c_rt_lib0clear(&___nl__im__26);
#line 243
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_value_from_im(___nl__im__20, ___nl__im__22));
#line 243
c_rt_lib0clear(&___nl__im__20);
#line 243
c_rt_lib0clear(&___nl__im__22);
#line 244
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(369)));
#line 244
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(39));
#line 244
if(___nl__bool__28){ goto label_55;}
#line 248
___nl__bool__28 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(245));
#line 248
if(___nl__bool__28){ goto label_106;}
#line 248
c_rt_lib0move(&___nl__im__29,___get_global_string_const(15));
#line 248
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(2, ___nl__im__29, ___nl__im__27));
#line 248
nl_die_arg(___nl__im__29);
#line 244
label_55:
;
#line 245
c_rt_lib0move(&___nl__im__33,___get_global_string_const(772));
#line 245
c_rt_lib0move(&___nl__im__35,___get_global_string_const(39));
#line 245
c_rt_lib0move(&___nl__im__34, generator_js_priv0imm_call(___nl__im__35));
#line 245
c_rt_lib0clear(&___nl__im__35);
#line 245
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 245
c_rt_lib0clear(&___nl__im__33);
#line 245
c_rt_lib0clear(&___nl__im__34);
#line 245
c_rt_lib0move(&___nl__im__36,___get_global_string_const(469));
#line 245
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__36));
#line 245
c_rt_lib0clear(&___nl__im__32);
#line 245
c_rt_lib0clear(&___nl__im__36);
#line 245
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__19));
#line 245
c_rt_lib0clear(&___nl__im__31);
#line 245
c_rt_lib0move(&___nl__im__37,___get_global_string_const(518));
#line 245
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__30, ___nl__im__37));
#line 245
c_rt_lib0clear(&___nl__im__30);
#line 245
c_rt_lib0clear(&___nl__im__37);
#line 246
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(482)));
#line 246
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(110)));
#line 246
c_rt_lib0clear(&___nl__im__40);
#line 246
c_rt_lib0move(&___nl__im__43,___get_global_string_const(294));
#line 246
c_rt_lib0move(&___nl__string__44, c_rt_lib0int_to_string(___nl__int__2));
#line 246
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__string__44));
#line 246
c_rt_lib0clear(&___nl__im__43);
#line 246
c_rt_lib0clear(&___nl__string__44);
#line 246
c_rt_lib0move(&___nl__im__45,___get_global_string_const(773));
#line 246
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 246
c_rt_lib0clear(&___nl__im__42);
#line 246
c_rt_lib0clear(&___nl__im__45);
#line 246
c_rt_lib0move(&___nl__im__38, generator_js_priv0get_im_from_value(___nl__im__39, ___nl__im__41));
#line 246
c_rt_lib0clear(&___nl__im__39);
#line 246
c_rt_lib0clear(&___nl__im__41);
#line 247
c_rt_lib0move(&___nl__im__50,___get_global_string_const(774));
#line 247
c_rt_lib0move(&___nl__string__51, c_rt_lib0int_to_string(___nl__int__2));
#line 247
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__string__51));
#line 247
c_rt_lib0clear(&___nl__im__50);
#line 247
c_rt_lib0clear(&___nl__string__51);
#line 247
c_rt_lib0move(&___nl__im__52,___get_global_string_const(343));
#line 247
c_rt_lib0move(&___nl__im__48, c_rt_lib0concat_new(___nl__im__49, ___nl__im__52));
#line 247
c_rt_lib0clear(&___nl__im__49);
#line 247
c_rt_lib0clear(&___nl__im__52);
#line 247
c_rt_lib0move(&___nl__im__47, c_rt_lib0concat_new(___nl__im__48, ___nl__im__38));
#line 247
c_rt_lib0clear(&___nl__im__48);
#line 247
c_rt_lib0move(&___nl__im__53,___get_global_string_const(518));
#line 247
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__53));
#line 247
c_rt_lib0clear(&___nl__im__47);
#line 247
c_rt_lib0clear(&___nl__im__53);
#line 247
c_rt_lib0array_push(&___nl__im__5, ___nl__im__46);
#line 247
c_rt_lib0clear(&___nl__im__46);
#line 248
goto label_108;
#line 248
label_106:
;
#line 249
goto label_108;
#line 249
label_108:
;
#line 250
c_rt_lib0move(&___nl__im__58,___get_global_string_const(775));
#line 250
c_rt_lib0move(&___nl__string__59, c_rt_lib0int_to_string(___nl__int__2));
#line 250
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__string__59));
#line 250
c_rt_lib0clear(&___nl__im__58);
#line 250
c_rt_lib0clear(&___nl__string__59);
#line 250
c_rt_lib0move(&___nl__im__60,___get_global_string_const(756));
#line 250
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 250
c_rt_lib0clear(&___nl__im__57);
#line 250
c_rt_lib0clear(&___nl__im__60);
#line 250
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__19));
#line 250
c_rt_lib0clear(&___nl__im__56);
#line 250
c_rt_lib0move(&___nl__im__61,___get_global_string_const(454));
#line 250
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__61));
#line 250
c_rt_lib0clear(&___nl__im__55);
#line 250
c_rt_lib0clear(&___nl__im__61);
#line 250
c_rt_lib0array_push(&___nl__im__4, ___nl__im__54);
#line 250
c_rt_lib0clear(&___nl__im__54);
#line 251
___nl__int__62 = 1;
#line 251
___nl__int__2 = ___nl__int__2 + ___nl__int__62;
#line 251
//clear ___nl__int__62;
#line 251
c_rt_lib0clear(&___nl__im__7);
#line 252
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 252
goto label_8;
#line 252
label_132:
;
#line 253
c_rt_lib0move(&___nl__im__65, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(235)));
#line 253
c_rt_lib0move(&___nl__im__66,___get_global_string_const(776));
#line 253
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 253
c_rt_lib0clear(&___nl__im__65);
#line 253
c_rt_lib0clear(&___nl__im__66);
#line 253
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(185)));
#line 253
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__67));
#line 253
c_rt_lib0clear(&___nl__im__64);
#line 253
c_rt_lib0clear(&___nl__im__67);
#line 254
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(235)));
#line 254
c_rt_lib0move(&___nl__im__71, generator_js_priv0get_function_call_name(___nl__im__0, ___nl__im__72));
#line 254
c_rt_lib0clear(&___nl__im__72);
#line 254
c_rt_lib0move(&___nl__im__73,___get_global_string_const(469));
#line 254
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__73));
#line 254
c_rt_lib0clear(&___nl__im__71);
#line 254
c_rt_lib0clear(&___nl__im__73);
#line 254
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__3));
#line 254
c_rt_lib0clear(&___nl__im__70);
#line 254
c_rt_lib0move(&___nl__im__74,___get_global_string_const(336));
#line 254
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__74));
#line 254
c_rt_lib0clear(&___nl__im__69);
#line 254
c_rt_lib0clear(&___nl__im__74);
#line 256
c_rt_lib0move(&___nl__im__75,___get_global_string_const(36));
#line 256
c_rt_lib0delete(generator_js_priv0println(___nl__im__75, ___ref___im__1));
#line 256
c_rt_lib0clear(&___nl__im__75);
#line 257
c_rt_lib0move(&___nl__im__79, generator_js_priv0get_namespace_name());
#line 257
c_rt_lib0move(&___nl__im__80,___get_global_string_const(123));
#line 257
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__80));
#line 257
c_rt_lib0clear(&___nl__im__79);
#line 257
c_rt_lib0clear(&___nl__im__80);
#line 257
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__63));
#line 257
c_rt_lib0clear(&___nl__im__78);
#line 257
c_rt_lib0move(&___nl__im__81,___get_global_string_const(777));
#line 257
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__81));
#line 257
c_rt_lib0clear(&___nl__im__77);
#line 257
c_rt_lib0clear(&___nl__im__81);
#line 257
c_rt_lib0delete(generator_js_priv0println(___nl__im__76, ___ref___im__1));
#line 257
c_rt_lib0clear(&___nl__im__76);
#line 258
___nl__int__83 = 0;
#line 258
___nl__int__84 = 1;
#line 258
___nl__int__85 = c_rt_lib0array_len(___nl__im__4);
#line 258
label_174:
;
#line 258
___nl__bool__86 = ___nl__int__83 >= ___nl__int__85;
#line 258
if(___nl__bool__86){ goto label_183;}
#line 258
c_rt_lib0move(&___nl__im__87, c_rt_lib0array_get(___nl__im__4, ___nl__int__83));
#line 258
c_rt_lib0copy(&___nl__im__82, ___nl__im__87);
#line 259
c_rt_lib0delete(generator_js_priv0println(___nl__im__82, ___ref___im__1));
#line 259
c_rt_lib0clear(&___nl__im__82);
#line 260
___nl__int__83 = ___nl__int__83 + ___nl__int__84;
#line 260
goto label_174;
#line 260
label_183:
;
#line 261
c_rt_lib0move(&___nl__im__89,___get_global_string_const(778));
#line 261
c_rt_lib0move(&___nl__im__91, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(429)));
#line 261
c_rt_lib0move(&___nl__im__90, generator_js_priv0get_im_from_value(___nl__im__91, ___nl__im__68));
#line 261
c_rt_lib0clear(&___nl__im__91);
#line 261
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__90));
#line 261
c_rt_lib0clear(&___nl__im__89);
#line 261
c_rt_lib0clear(&___nl__im__90);
#line 261
c_rt_lib0delete(generator_js_priv0println(___nl__im__88, ___ref___im__1));
#line 261
c_rt_lib0clear(&___nl__im__88);
#line 262
___nl__int__93 = 0;
#line 262
___nl__int__94 = 1;
#line 262
___nl__int__95 = c_rt_lib0array_len(___nl__im__5);
#line 262
label_196:
;
#line 262
___nl__bool__96 = ___nl__int__93 >= ___nl__int__95;
#line 262
if(___nl__bool__96){ goto label_205;}
#line 262
c_rt_lib0move(&___nl__im__97, c_rt_lib0array_get(___nl__im__5, ___nl__int__93));
#line 262
c_rt_lib0copy(&___nl__im__92, ___nl__im__97);
#line 263
c_rt_lib0delete(generator_js_priv0println(___nl__im__92, ___ref___im__1));
#line 263
c_rt_lib0clear(&___nl__im__92);
#line 264
___nl__int__93 = ___nl__int__93 + ___nl__int__94;
#line 264
goto label_196;
#line 264
label_205:
;
#line 265
c_rt_lib0move(&___nl__im__98,___get_global_string_const(779));
#line 265
c_rt_lib0delete(generator_js_priv0println(___nl__im__98, ___ref___im__1));
#line 265
c_rt_lib0clear(&___nl__im__98);
#line 266
c_rt_lib0move(&___nl__im__99,___get_global_string_const(321));
#line 266
c_rt_lib0delete(generator_js_priv0println(___nl__im__99, ___ref___im__1));
#line 266
c_rt_lib0clear(&___nl__im__99);
#line 266
c_rt_lib0clear(&___nl__im__0);
#line 266
//clear ___nl__int__2;
#line 266
c_rt_lib0clear(&___nl__im__3);
#line 266
c_rt_lib0clear(&___nl__im__4);
#line 266
c_rt_lib0clear(&___nl__im__5);
#line 266
c_rt_lib0clear(&___nl__im__6);
#line 266
c_rt_lib0clear(&___nl__im__7);
#line 266
//clear ___nl__int__8;
#line 266
//clear ___nl__int__9;
#line 266
//clear ___nl__int__10;
#line 266
//clear ___nl__bool__11;
#line 266
c_rt_lib0clear(&___nl__im__12);
#line 266
c_rt_lib0clear(&___nl__im__19);
#line 266
c_rt_lib0clear(&___nl__im__27);
#line 266
//clear ___nl__bool__28;
#line 266
c_rt_lib0clear(&___nl__im__29);
#line 266
c_rt_lib0clear(&___nl__im__38);
#line 266
c_rt_lib0clear(&___nl__im__63);
#line 266
c_rt_lib0clear(&___nl__im__68);
#line 266
c_rt_lib0clear(&___nl__im__82);
#line 266
//clear ___nl__int__83;
#line 266
//clear ___nl__int__84;
#line 266
//clear ___nl__int__85;
#line 266
//clear ___nl__bool__86;
#line 266
c_rt_lib0clear(&___nl__im__87);
#line 266
c_rt_lib0clear(&___nl__im__92);
#line 266
//clear ___nl__int__93;
#line 266
//clear ___nl__int__94;
#line 266
//clear ___nl__int__95;
#line 266
//clear ___nl__bool__96;
#line 266
c_rt_lib0clear(&___nl__im__97);
#line 266
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_function(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
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
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
#line 270
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 270
c_rt_lib0delete(generator_js_priv0println(___nl__im__2, ___ref___im__1));
#line 270
c_rt_lib0clear(&___nl__im__2);
#line 271
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 271
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 271
c_rt_lib0clear(&___nl__im__4);
#line 271
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__3, ___ref___im__1));
#line 271
//clear ___nl__int__3;
#line 272
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(235)));
#line 272
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_function_header(___nl__im__0, ___nl__im__7));
#line 272
c_rt_lib0clear(&___nl__im__7);
#line 272
c_rt_lib0move(&___nl__im__8,___get_global_string_const(546));
#line 272
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__8));
#line 272
c_rt_lib0clear(&___nl__im__6);
#line 272
c_rt_lib0clear(&___nl__im__8);
#line 272
c_rt_lib0delete(generator_js_priv0println(___nl__im__5, ___ref___im__1));
#line 272
c_rt_lib0clear(&___nl__im__5);
#line 273
c_rt_lib0delete(generator_js_priv0print_function_registers(___nl__im__0, ___ref___im__1));
#line 274
c_rt_lib0move(&___nl__im__9,___get_global_string_const(780));
#line 274
c_rt_lib0delete(generator_js_priv0println(___nl__im__9, ___ref___im__1));
#line 274
c_rt_lib0clear(&___nl__im__9);
#line 275
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 275
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 275
c_rt_lib0clear(&___nl__im__11);
#line 275
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__10, ___ref___im__1));
#line 275
//clear ___nl__int__10;
#line 276
c_rt_lib0move(&___nl__im__12,___get_global_string_const(781));
#line 276
c_rt_lib0delete(generator_js_priv0println(___nl__im__12, ___ref___im__1));
#line 276
c_rt_lib0clear(&___nl__im__12);
#line 277
c_rt_lib0move(&___nl__im__13,___get_global_string_const(782));
#line 277
c_rt_lib0delete(generator_js_priv0println(___nl__im__13, ___ref___im__1));
#line 277
c_rt_lib0clear(&___nl__im__13);
#line 278
___nl__int__14 = 0;
#line 279
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(223)));
#line 279
___nl__int__17 = 0;
#line 279
___nl__int__18 = 1;
#line 279
___nl__int__19 = c_rt_lib0array_len(___nl__im__15);
#line 279
label_37:
;
#line 279
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 279
if(___nl__bool__20){ goto label_48;}
#line 279
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__15, ___nl__int__17));
#line 279
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 280
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 280
c_rt_lib0delete(generator_js_priv0print_command(___nl__im__16, ___nl__im__22, &___nl__int__14, ___ref___im__1));
#line 280
c_rt_lib0clear(&___nl__im__22);
#line 280
c_rt_lib0clear(&___nl__im__16);
#line 281
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 281
goto label_37;
#line 281
label_48:
;
#line 282
c_rt_lib0move(&___nl__im__23,___get_global_string_const(783));
#line 282
c_rt_lib0delete(generator_js_priv0println(___nl__im__23, ___ref___im__1));
#line 282
c_rt_lib0clear(&___nl__im__23);
#line 282
c_rt_lib0clear(&___nl__im__0);
#line 282
//clear ___nl__int__14;
#line 282
c_rt_lib0clear(&___nl__im__15);
#line 282
c_rt_lib0clear(&___nl__im__16);
#line 282
//clear ___nl__int__17;
#line 282
//clear ___nl__int__18;
#line 282
//clear ___nl__int__19;
#line 282
//clear ___nl__bool__20;
#line 282
c_rt_lib0clear(&___nl__im__21);
#line 282
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
#line 287
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(232)));
#line 287
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(233));
#line 287
if(___nl__bool__4){ goto label_8;}
#line 289
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(479));
#line 289
if(___nl__bool__4){ goto label_23;}
#line 289
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 289
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 289
nl_die_arg(___nl__im__5);
#line 287
label_8:
;
#line 288
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_namespace_name());
#line 288
c_rt_lib0move(&___nl__im__9,___get_global_string_const(123));
#line 288
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 288
c_rt_lib0clear(&___nl__im__8);
#line 288
c_rt_lib0clear(&___nl__im__9);
#line 288
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 288
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 288
c_rt_lib0clear(&___nl__im__7);
#line 288
c_rt_lib0clear(&___nl__im__10);
#line 288
c_rt_lib0move(&___nl__im__11,___get_global_string_const(784));
#line 288
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 288
c_rt_lib0clear(&___nl__im__6);
#line 288
c_rt_lib0clear(&___nl__im__11);
#line 289
goto label_34;
#line 289
label_23:
;
#line 290
c_rt_lib0move(&___nl__im__13,___get_global_string_const(768));
#line 290
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 290
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 290
c_rt_lib0clear(&___nl__im__13);
#line 290
c_rt_lib0clear(&___nl__im__14);
#line 290
c_rt_lib0move(&___nl__im__15,___get_global_string_const(469));
#line 290
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 290
c_rt_lib0clear(&___nl__im__12);
#line 290
c_rt_lib0clear(&___nl__im__15);
#line 291
goto label_34;
#line 291
label_34:
;
#line 292
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 292
___nl__int__16 = c_rt_lib0array_len(___nl__im__17);
#line 292
c_rt_lib0clear(&___nl__im__17);
#line 292
___nl__int__18 = 0;
#line 292
___nl__int__19 = 1;
#line 292
label_40:
;
#line 292
___nl__bool__20 = ___nl__int__18 >= ___nl__int__16;
#line 292
if(___nl__bool__20){ goto label_64;}
#line 293
___nl__int__22 = 0;
#line 293
___nl__bool__21 = ___nl__int__18 == ___nl__int__22;
#line 293
//clear ___nl__int__22;
#line 293
___nl__bool__21 = !___nl__bool__21;
#line 293
___nl__bool__21 = !___nl__bool__21;
#line 293
if(___nl__bool__21){ goto label_53;}
#line 293
c_rt_lib0move(&___nl__im__23,___get_global_string_const(343));
#line 293
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 293
c_rt_lib0clear(&___nl__im__23);
#line 293
goto label_53;
#line 293
label_53:
;
#line 293
//clear ___nl__bool__21;
#line 294
c_rt_lib0move(&___nl__im__25,___get_global_string_const(785));
#line 294
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__18));
#line 294
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__26));
#line 294
c_rt_lib0clear(&___nl__im__25);
#line 294
c_rt_lib0clear(&___nl__string__26);
#line 294
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__24));
#line 294
c_rt_lib0clear(&___nl__im__24);
#line 295
___nl__int__18 = ___nl__int__18 + ___nl__int__19;
#line 295
goto label_40;
#line 295
label_64:
;
#line 296
c_rt_lib0move(&___nl__im__27,___get_global_string_const(336));
#line 296
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 296
c_rt_lib0clear(&___nl__im__27);
#line 297
c_rt_lib0clear(&___nl__im__0);
#line 297
c_rt_lib0clear(&___nl__im__1);
#line 297
c_rt_lib0clear(&___nl__im__3);
#line 297
//clear ___nl__bool__4;
#line 297
c_rt_lib0clear(&___nl__im__5);
#line 297
//clear ___nl__int__16;
#line 297
//clear ___nl__int__18;
#line 297
//clear ___nl__int__19;
#line 297
//clear ___nl__bool__20;
#line 297
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0print_function_registers(nlasm0function_t0type ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
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
ImmT  ___nl__string__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__string__36 = NULL;
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
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
bool  ___nl__bool__50 = false;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
bool  ___nl__bool__57 = false;
INT  ___nl__int__58 = 0;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
INT  ___nl__int__65 = 0;
INT  ___nl__int__66 = 0;
INT  ___nl__int__67 = 0;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
INT  ___nl__int__73 = 0;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
INT  ___nl__int__77 = 0;
#line 301
c_rt_lib0move(&___nl__im__2,___get_global_string_const(751));
#line 302
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 302
___nl__int__3 = c_rt_lib0array_len(___nl__im__4);
#line 302
c_rt_lib0clear(&___nl__im__4);
#line 302
___nl__int__5 = 0;
#line 302
___nl__int__6 = 1;
#line 302
label_6:
;
#line 302
___nl__bool__7 = ___nl__int__5 >= ___nl__int__3;
#line 302
if(___nl__bool__7){ goto label_103;}
#line 303
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 303
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__10, ___nl__int__5));
#line 303
c_rt_lib0clear(&___nl__im__10);
#line 303
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register(___nl__im__9));
#line 303
c_rt_lib0clear(&___nl__im__9);
#line 305
___nl__int__11 = string0length(___nl__im__2);
#line 306
___nl__int__13 = string0length(___nl__im__8);
#line 306
___nl__int__12 = ___nl__int__11 + ___nl__int__13;
#line 306
//clear ___nl__int__13;
#line 307
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 307
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 307
c_rt_lib0clear(&___nl__im__15);
#line 308
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 308
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__18, ___nl__int__5));
#line 308
c_rt_lib0clear(&___nl__im__18);
#line 308
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(185)));
#line 308
c_rt_lib0clear(&___nl__im__17);
#line 308
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker_with_symbol(___nl__int__14, ___nl__int__11, ___nl__int__12, ___nl__im__16, ___ref___im__1));
#line 308
//clear ___nl__int__14;
#line 308
c_rt_lib0clear(&___nl__im__16);
#line 310
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 310
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_get(___nl__im__21, ___nl__int__5));
#line 310
c_rt_lib0clear(&___nl__im__21);
#line 310
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(369)));
#line 310
c_rt_lib0clear(&___nl__im__20);
#line 310
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(245));
#line 310
if(___nl__bool__22){ goto label_41;}
#line 312
___nl__bool__22 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(39));
#line 312
if(___nl__bool__22){ goto label_58;}
#line 312
c_rt_lib0move(&___nl__im__23,___get_global_string_const(15));
#line 312
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__19));
#line 312
nl_die_arg(___nl__im__23);
#line 310
label_41:
;
#line 311
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 311
c_rt_lib0move(&___nl__im__28,___get_global_string_const(786));
#line 311
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 311
c_rt_lib0clear(&___nl__im__27);
#line 311
c_rt_lib0clear(&___nl__im__28);
#line 311
c_rt_lib0move(&___nl__string__29, c_rt_lib0int_to_string(___nl__int__5));
#line 311
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__string__29));
#line 311
c_rt_lib0clear(&___nl__im__26);
#line 311
c_rt_lib0clear(&___nl__string__29);
#line 311
c_rt_lib0move(&___nl__im__30,___get_global_string_const(454));
#line 311
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 311
c_rt_lib0clear(&___nl__im__25);
#line 311
c_rt_lib0clear(&___nl__im__30);
#line 311
c_rt_lib0delete(generator_js_priv0println(___nl__im__24, ___ref___im__1));
#line 311
c_rt_lib0clear(&___nl__im__24);
#line 312
goto label_75;
#line 312
label_58:
;
#line 313
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__2, ___nl__im__8));
#line 313
c_rt_lib0move(&___nl__im__35,___get_global_string_const(786));
#line 313
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 313
c_rt_lib0clear(&___nl__im__34);
#line 313
c_rt_lib0clear(&___nl__im__35);
#line 313
c_rt_lib0move(&___nl__string__36, c_rt_lib0int_to_string(___nl__int__5));
#line 313
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__string__36));
#line 313
c_rt_lib0clear(&___nl__im__33);
#line 313
c_rt_lib0clear(&___nl__string__36);
#line 313
c_rt_lib0move(&___nl__im__37,___get_global_string_const(787));
#line 313
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__37));
#line 313
c_rt_lib0clear(&___nl__im__32);
#line 313
c_rt_lib0clear(&___nl__im__37);
#line 313
c_rt_lib0delete(generator_js_priv0println(___nl__im__31, ___ref___im__1));
#line 313
c_rt_lib0clear(&___nl__im__31);
#line 314
goto label_75;
#line 314
label_75:
;
#line 315
c_rt_lib0move(&___nl__im__41, generator_js_priv0get_namespace_name());
#line 315
c_rt_lib0move(&___nl__im__42,___get_global_string_const(788));
#line 315
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 315
c_rt_lib0clear(&___nl__im__41);
#line 315
c_rt_lib0clear(&___nl__im__42);
#line 315
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 315
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_get(___nl__im__45, ___nl__int__5));
#line 315
c_rt_lib0clear(&___nl__im__45);
#line 315
c_rt_lib0move(&___nl__im__43, generator_js_priv0get_register_value(___nl__im__44));
#line 315
c_rt_lib0clear(&___nl__im__44);
#line 315
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__43));
#line 315
c_rt_lib0clear(&___nl__im__40);
#line 315
c_rt_lib0clear(&___nl__im__43);
#line 315
c_rt_lib0move(&___nl__im__46,___get_global_string_const(518));
#line 315
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__46));
#line 315
c_rt_lib0clear(&___nl__im__39);
#line 315
c_rt_lib0clear(&___nl__im__46);
#line 315
c_rt_lib0delete(generator_js_priv0println(___nl__im__38, ___ref___im__1));
#line 315
c_rt_lib0clear(&___nl__im__38);
#line 315
c_rt_lib0clear(&___nl__im__8);
#line 315
//clear ___nl__int__11;
#line 315
//clear ___nl__int__12;
#line 315
c_rt_lib0clear(&___nl__im__19);
#line 315
//clear ___nl__bool__22;
#line 315
c_rt_lib0clear(&___nl__im__23);
#line 316
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 316
goto label_6;
#line 316
label_103:
;
#line 317
___nl__int__47 = 0;
#line 318
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 318
___nl__int__48 = c_rt_lib0array_len(___nl__im__49);
#line 318
c_rt_lib0clear(&___nl__im__49);
#line 318
label_108:
;
#line 318
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 318
___nl__int__51 = c_rt_lib0array_len(___nl__im__52);
#line 318
c_rt_lib0clear(&___nl__im__52);
#line 318
___nl__bool__50 = ___nl__int__48 < ___nl__int__51;
#line 318
//clear ___nl__int__51;
#line 318
___nl__bool__50 = !___nl__bool__50;
#line 318
if(___nl__bool__50){ goto label_178;}
#line 319
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 319
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_get(___nl__im__55, ___nl__int__48));
#line 319
c_rt_lib0clear(&___nl__im__55);
#line 319
c_rt_lib0move(&___nl__im__53, generator_js_priv0get_register(___nl__im__54));
#line 319
c_rt_lib0clear(&___nl__im__54);
#line 321
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(789)));
#line 321
___nl__int__58 = c_rt_lib0array_len(___nl__im__59);
#line 321
c_rt_lib0clear(&___nl__im__59);
#line 321
___nl__bool__56 = ___nl__int__47 < ___nl__int__58;
#line 321
//clear ___nl__int__58;
#line 321
___nl__bool__57 = !___nl__bool__56;
#line 321
if(___nl__bool__57){ goto label_139;}
#line 322
c_rt_lib0move(&___nl__im__61, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(237)));
#line 322
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get(___nl__im__61, ___nl__int__48));
#line 322
c_rt_lib0clear(&___nl__im__61);
#line 322
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(789)));
#line 322
c_rt_lib0move(&___nl__im__63, c_rt_lib0array_get(___nl__im__64, ___nl__int__47));
#line 322
c_rt_lib0clear(&___nl__im__64);
#line 322
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__63, ___get_global_string_const(482)));
#line 322
c_rt_lib0clear(&___nl__im__63);
#line 322
___nl__bool__56 = nlasm0eq_reg(___nl__im__60, ___nl__im__62);
#line 322
c_rt_lib0clear(&___nl__im__60);
#line 322
c_rt_lib0clear(&___nl__im__62);
#line 322
label_139:
;
#line 322
//clear ___nl__bool__57;
#line 322
___nl__bool__56 = !___nl__bool__56;
#line 322
if(___nl__bool__56){ goto label_162;}
#line 323
___nl__int__65 = string0length(___nl__im__2);
#line 324
___nl__int__67 = string0length(___nl__im__53);
#line 324
___nl__int__66 = ___nl__int__65 + ___nl__int__67;
#line 324
//clear ___nl__int__67;
#line 325
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(168)));
#line 325
___nl__int__68 = getIntFromImm(___nl__im__69);
#line 325
c_rt_lib0clear(&___nl__im__69);
#line 326
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(789)));
#line 326
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_get(___nl__im__72, ___nl__int__47));
#line 326
c_rt_lib0clear(&___nl__im__72);
#line 326
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__71, ___get_global_string_const(185)));
#line 326
c_rt_lib0clear(&___nl__im__71);
#line 326
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker_with_symbol(___nl__int__68, ___nl__int__65, ___nl__int__66, ___nl__im__70, ___ref___im__1));
#line 326
//clear ___nl__int__68;
#line 326
c_rt_lib0clear(&___nl__im__70);
#line 327
___nl__int__73 = 1;
#line 327
___nl__int__47 = ___nl__int__47 + ___nl__int__73;
#line 327
//clear ___nl__int__73;
#line 328
goto label_162;
#line 328
label_162:
;
#line 328
//clear ___nl__bool__56;
#line 328
//clear ___nl__int__65;
#line 328
//clear ___nl__int__66;
#line 329
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__2, ___nl__im__53));
#line 329
c_rt_lib0move(&___nl__im__76,___get_global_string_const(790));
#line 329
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__76));
#line 329
c_rt_lib0clear(&___nl__im__75);
#line 329
c_rt_lib0clear(&___nl__im__76);
#line 329
c_rt_lib0delete(generator_js_priv0println(___nl__im__74, ___ref___im__1));
#line 329
c_rt_lib0clear(&___nl__im__74);
#line 329
c_rt_lib0clear(&___nl__im__53);
#line 318
___nl__int__77 = 1;
#line 318
___nl__int__48 = ___nl__int__48 + ___nl__int__77;
#line 318
//clear ___nl__int__77;
#line 330
goto label_108;
#line 330
label_178:
;
#line 330
c_rt_lib0clear(&___nl__im__0);
#line 330
c_rt_lib0clear(&___nl__im__2);
#line 330
//clear ___nl__int__3;
#line 330
//clear ___nl__int__5;
#line 330
//clear ___nl__int__6;
#line 330
//clear ___nl__bool__7;
#line 330
c_rt_lib0clear(&___nl__im__8);
#line 330
//clear ___nl__int__11;
#line 330
//clear ___nl__int__12;
#line 330
c_rt_lib0clear(&___nl__im__19);
#line 330
//clear ___nl__bool__22;
#line 330
c_rt_lib0clear(&___nl__im__23);
#line 330
//clear ___nl__int__47;
#line 330
//clear ___nl__int__48;
#line 330
//clear ___nl__bool__50;
#line 330
c_rt_lib0clear(&___nl__im__53);
#line 330
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
ImmT  ___nl__im__242 = NULL;
ImmT  ___nl__im__243 = NULL;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
INT  ___nl__int__246 = 0;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__string__248 = NULL;
ImmT  ___nl__im__249 = NULL;
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
INT  ___nl__int__272 = 0;
ImmT  ___nl__im__273 = NULL;
ImmT  ___nl__im__274 = NULL;
ImmT  ___nl__im__275 = NULL;
ImmT  ___nl__im__276 = NULL;
#line 335
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 336
c_rt_lib0move(&___nl__im__6,___get_global_string_const(791));
#line 336
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 336
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(561)));
#line 336
c_rt_lib0clear(&___nl__im__10);
#line 336
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(562)));
#line 336
c_rt_lib0clear(&___nl__im__9);
#line 336
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(168)));
#line 336
___nl__int__7 = getIntFromImm(___nl__im__11);
#line 336
c_rt_lib0clear(&___nl__im__8);
#line 336
c_rt_lib0clear(&___nl__im__11);
#line 336
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__7));
#line 336
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__string__12));
#line 336
c_rt_lib0clear(&___nl__im__6);
#line 336
//clear ___nl__int__7;
#line 336
c_rt_lib0clear(&___nl__string__12);
#line 336
c_rt_lib0delete(generator_js_priv0println(___nl__im__5, ___ref___im__3));
#line 336
c_rt_lib0clear(&___nl__im__5);
#line 337
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(224)));
#line 337
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(250));
#line 337
if(___nl__bool__14){ goto label_96;}
#line 339
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(251));
#line 339
if(___nl__bool__14){ goto label_117;}
#line 341
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(252));
#line 341
if(___nl__bool__14){ goto label_138;}
#line 344
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(225));
#line 344
if(___nl__bool__14){ goto label_159;}
#line 346
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(257));
#line 346
if(___nl__bool__14){ goto label_172;}
#line 349
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(253));
#line 349
if(___nl__bool__14){ goto label_193;}
#line 351
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(254));
#line 351
if(___nl__bool__14){ goto label_198;}
#line 353
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(255));
#line 353
if(___nl__bool__14){ goto label_203;}
#line 355
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(256));
#line 355
if(___nl__bool__14){ goto label_218;}
#line 358
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(266));
#line 358
if(___nl__bool__14){ goto label_249;}
#line 360
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(267));
#line 360
if(___nl__bool__14){ goto label_254;}
#line 362
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(258));
#line 362
if(___nl__bool__14){ goto label_263;}
#line 364
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(246));
#line 364
if(___nl__bool__14){ goto label_272;}
#line 366
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(259));
#line 366
if(___nl__bool__14){ goto label_281;}
#line 369
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(260));
#line 369
if(___nl__bool__14){ goto label_308;}
#line 373
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(261));
#line 373
if(___nl__bool__14){ goto label_339;}
#line 375
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(262));
#line 375
if(___nl__bool__14){ goto label_348;}
#line 377
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(263));
#line 377
if(___nl__bool__14){ goto label_357;}
#line 381
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(264));
#line 381
if(___nl__bool__14){ goto label_390;}
#line 385
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(265));
#line 385
if(___nl__bool__14){ goto label_421;}
#line 387
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(268));
#line 387
if(___nl__bool__14){ goto label_426;}
#line 389
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(269));
#line 389
if(___nl__bool__14){ goto label_439;}
#line 392
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(270));
#line 392
if(___nl__bool__14){ goto label_466;}
#line 394
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(271));
#line 394
if(___nl__bool__14){ goto label_471;}
#line 396
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(272));
#line 396
if(___nl__bool__14){ goto label_480;}
#line 397
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(273));
#line 397
if(___nl__bool__14){ goto label_484;}
#line 400
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(274));
#line 400
if(___nl__bool__14){ goto label_509;}
#line 402
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(275));
#line 402
if(___nl__bool__14){ goto label_520;}
#line 404
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(276));
#line 404
if(___nl__bool__14){ goto label_525;}
#line 406
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(277));
#line 406
if(___nl__bool__14){ goto label_536;}
#line 408
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(278));
#line 408
if(___nl__bool__14){ goto label_541;}
#line 410
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(279));
#line 410
if(___nl__bool__14){ goto label_552;}
#line 416
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(280));
#line 416
if(___nl__bool__14){ goto label_615;}
#line 418
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(281));
#line 418
if(___nl__bool__14){ goto label_626;}
#line 420
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(282));
#line 420
if(___nl__bool__14){ goto label_631;}
#line 422
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(283));
#line 422
if(___nl__bool__14){ goto label_636;}
#line 424
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(284));
#line 424
if(___nl__bool__14){ goto label_641;}
#line 424
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 424
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 424
nl_die_arg(___nl__im__15);
#line 337
label_96:
;
#line 337
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(250)));
#line 337
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 338
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(244)));
#line 338
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 338
c_rt_lib0clear(&___nl__im__20);
#line 338
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(78)));
#line 338
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(244)));
#line 338
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__24, ___get_global_string_const(110)));
#line 338
c_rt_lib0clear(&___nl__im__24);
#line 338
c_rt_lib0move(&___nl__im__21, generator_js_priv0get_arr(___nl__im__22, ___nl__im__23));
#line 338
c_rt_lib0clear(&___nl__im__22);
#line 338
c_rt_lib0clear(&___nl__im__23);
#line 338
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 338
c_rt_lib0clear(&___nl__im__19);
#line 338
c_rt_lib0clear(&___nl__im__21);
#line 338
c_rt_lib0move(&___nl__im__25,___get_global_string_const(454));
#line 338
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 338
c_rt_lib0clear(&___nl__im__18);
#line 338
c_rt_lib0clear(&___nl__im__25);
#line 339
goto label_646;
#line 339
label_117:
;
#line 339
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(251)));
#line 339
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 340
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(244)));
#line 340
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value_to_assign(___nl__im__30));
#line 340
c_rt_lib0clear(&___nl__im__30);
#line 340
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(78)));
#line 340
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(244)));
#line 340
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(110)));
#line 340
c_rt_lib0clear(&___nl__im__34);
#line 340
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_hash(___nl__im__32, ___nl__im__33));
#line 340
c_rt_lib0clear(&___nl__im__32);
#line 340
c_rt_lib0clear(&___nl__im__33);
#line 340
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__31));
#line 340
c_rt_lib0clear(&___nl__im__29);
#line 340
c_rt_lib0clear(&___nl__im__31);
#line 340
c_rt_lib0move(&___nl__im__35,___get_global_string_const(454));
#line 340
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__28, ___nl__im__35));
#line 340
c_rt_lib0clear(&___nl__im__28);
#line 340
c_rt_lib0clear(&___nl__im__35);
#line 341
goto label_646;
#line 341
label_138:
;
#line 341
c_rt_lib0move(&___nl__im__37, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(252)));
#line 341
c_rt_lib0copy(&___nl__im__36, ___nl__im__37);
#line 342
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(244)));
#line 342
c_rt_lib0move(&___nl__im__39, generator_js_priv0get_register_value_to_assign(___nl__im__40));
#line 342
c_rt_lib0clear(&___nl__im__40);
#line 343
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(792)));
#line 343
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(244)));
#line 343
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__44, ___get_global_string_const(110)));
#line 343
c_rt_lib0clear(&___nl__im__44);
#line 343
c_rt_lib0move(&___nl__im__41, generator_js_priv0get_empty_hash(___nl__im__42, ___nl__im__43));
#line 343
c_rt_lib0clear(&___nl__im__42);
#line 343
c_rt_lib0clear(&___nl__im__43);
#line 343
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__41));
#line 343
c_rt_lib0clear(&___nl__im__39);
#line 343
c_rt_lib0clear(&___nl__im__41);
#line 343
c_rt_lib0move(&___nl__im__45,___get_global_string_const(454));
#line 343
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__45));
#line 343
c_rt_lib0clear(&___nl__im__38);
#line 343
c_rt_lib0clear(&___nl__im__45);
#line 344
goto label_646;
#line 344
label_159:
;
#line 344
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(225)));
#line 344
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 345
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(111)));
#line 345
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(226)));
#line 345
c_rt_lib0move(&___nl__im__50, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(113)));
#line 345
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(244)));
#line 345
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_call(___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___ref___int__2));
#line 345
c_rt_lib0clear(&___nl__im__48);
#line 345
c_rt_lib0clear(&___nl__im__49);
#line 345
c_rt_lib0clear(&___nl__im__50);
#line 345
c_rt_lib0clear(&___nl__im__51);
#line 346
goto label_646;
#line 346
label_172:
;
#line 346
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(257)));
#line 346
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 347
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(244)));
#line 347
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value_to_assign(___nl__im__56));
#line 347
c_rt_lib0clear(&___nl__im__56);
#line 348
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(166)));
#line 348
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(185)));
#line 348
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_mk(2, ___get_global_string_const(166), ___nl__im__59, ___get_global_string_const(185), ___nl__im__60));
#line 348
c_rt_lib0clear(&___nl__im__59);
#line 348
c_rt_lib0clear(&___nl__im__60);
#line 348
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_const_hash(___nl__im__58));
#line 348
c_rt_lib0clear(&___nl__im__58);
#line 348
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__57));
#line 348
c_rt_lib0clear(&___nl__im__55);
#line 348
c_rt_lib0clear(&___nl__im__57);
#line 348
c_rt_lib0move(&___nl__im__61,___get_global_string_const(454));
#line 348
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__54, ___nl__im__61));
#line 348
c_rt_lib0clear(&___nl__im__54);
#line 348
c_rt_lib0clear(&___nl__im__61);
#line 349
goto label_646;
#line 349
label_193:
;
#line 349
c_rt_lib0move(&___nl__im__63, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(253)));
#line 349
c_rt_lib0copy(&___nl__im__62, ___nl__im__63);
#line 350
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_una_op(___nl__im__62));
#line 351
goto label_646;
#line 351
label_198:
;
#line 351
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(254)));
#line 351
c_rt_lib0copy(&___nl__im__64, ___nl__im__65);
#line 352
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_bin_op(___nl__im__64, ___ref___int__2));
#line 353
goto label_646;
#line 353
label_203:
;
#line 353
c_rt_lib0move(&___nl__im__67, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(255)));
#line 353
c_rt_lib0copy(&___nl__im__66, ___nl__im__67);
#line 354
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(244)));
#line 354
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(78)));
#line 354
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(572)));
#line 354
c_rt_lib0move(&___nl__im__72, c_rt_lib0hash_get_value_dec(___nl__im__66, ___get_global_string_const(577)));
#line 354
___nl__int__71 = getIntFromImm(___nl__im__72);
#line 354
c_rt_lib0clear(&___nl__im__72);
#line 354
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_is(___nl__im__68, ___nl__im__69, ___nl__im__70, ___nl__int__71, ___ref___int__2, ___ref___im__3));
#line 354
c_rt_lib0clear(&___nl__im__68);
#line 354
c_rt_lib0clear(&___nl__im__69);
#line 354
c_rt_lib0clear(&___nl__im__70);
#line 354
//clear ___nl__int__71;
#line 355
goto label_646;
#line 355
label_218:
;
#line 355
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(256)));
#line 355
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 356
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(244)));
#line 356
c_rt_lib0move(&___nl__im__76, generator_js_priv0get_register_value_to_assign(___nl__im__77));
#line 356
c_rt_lib0clear(&___nl__im__77);
#line 356
c_rt_lib0move(&___nl__im__79,___get_global_string_const(286));
#line 356
c_rt_lib0move(&___nl__im__80,___get_global_string_const(256));
#line 357
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(78)));
#line 357
c_rt_lib0move(&___nl__im__82, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__83));
#line 357
c_rt_lib0clear(&___nl__im__83);
#line 357
c_rt_lib0move(&___nl__im__86, c_rt_lib0hash_get_value_dec(___nl__im__73, ___get_global_string_const(572)));
#line 357
c_rt_lib0move(&___nl__im__85, generator_js_priv0get_str_imm(___nl__im__86, ___ref___im__3));
#line 357
c_rt_lib0clear(&___nl__im__86);
#line 357
c_rt_lib0move(&___nl__im__84, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__85));
#line 357
c_rt_lib0clear(&___nl__im__85);
#line 357
c_rt_lib0move(&___nl__im__81, c_rt_lib0array_mk(2, ___nl__im__82, ___nl__im__84));
#line 357
c_rt_lib0clear(&___nl__im__82);
#line 357
c_rt_lib0clear(&___nl__im__84);
#line 357
c_rt_lib0move(&___nl__im__78, generator_js_priv0get_internal_call(___nl__im__79, ___nl__im__80, ___nl__im__81, ___ref___int__2));
#line 357
c_rt_lib0clear(&___nl__im__79);
#line 357
c_rt_lib0clear(&___nl__im__80);
#line 357
c_rt_lib0clear(&___nl__im__81);
#line 357
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__78));
#line 357
c_rt_lib0clear(&___nl__im__76);
#line 357
c_rt_lib0clear(&___nl__im__78);
#line 357
c_rt_lib0move(&___nl__im__87,___get_global_string_const(454));
#line 357
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__75, ___nl__im__87));
#line 357
c_rt_lib0clear(&___nl__im__75);
#line 357
c_rt_lib0clear(&___nl__im__87);
#line 358
goto label_646;
#line 358
label_249:
;
#line 358
c_rt_lib0move(&___nl__im__89, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(266)));
#line 358
c_rt_lib0copy(&___nl__im__88, ___nl__im__89);
#line 359
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_return(___nl__im__88, ___nl__im__1));
#line 360
goto label_646;
#line 360
label_254:
;
#line 360
c_rt_lib0move(&___nl__im__91, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(267)));
#line 360
c_rt_lib0copy(&___nl__im__90, ___nl__im__91);
#line 361
c_rt_lib0move(&___nl__im__92, generator_js_priv0get_namespace_name());
#line 361
c_rt_lib0move(&___nl__im__93,___get_global_string_const(793));
#line 361
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__92, ___nl__im__93));
#line 361
c_rt_lib0clear(&___nl__im__92);
#line 361
c_rt_lib0clear(&___nl__im__93);
#line 362
goto label_646;
#line 362
label_263:
;
#line 362
c_rt_lib0move(&___nl__im__95, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(258)));
#line 362
c_rt_lib0copy(&___nl__im__94, ___nl__im__95);
#line 363
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(244)));
#line 363
c_rt_lib0move(&___nl__im__97, c_rt_lib0hash_get_value_dec(___nl__im__94, ___get_global_string_const(78)));
#line 363
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_move(___nl__im__96, ___nl__im__97, ___ref___int__2));
#line 363
c_rt_lib0clear(&___nl__im__96);
#line 363
c_rt_lib0clear(&___nl__im__97);
#line 364
goto label_646;
#line 364
label_272:
;
#line 364
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(246)));
#line 364
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 365
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(244)));
#line 365
c_rt_lib0move(&___nl__im__101, c_rt_lib0hash_get_value_dec(___nl__im__98, ___get_global_string_const(245)));
#line 365
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_load_const(___nl__im__100, ___nl__im__101, ___ref___im__3));
#line 365
c_rt_lib0clear(&___nl__im__100);
#line 365
c_rt_lib0clear(&___nl__im__101);
#line 366
goto label_646;
#line 366
label_281:
;
#line 366
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(259)));
#line 366
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 367
c_rt_lib0move(&___nl__im__108, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(244)));
#line 367
c_rt_lib0move(&___nl__im__107, generator_js_priv0get_register_value_to_assign(___nl__im__108));
#line 367
c_rt_lib0clear(&___nl__im__108);
#line 368
c_rt_lib0move(&___nl__im__110, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(78)));
#line 368
c_rt_lib0move(&___nl__im__109, generator_js_priv0get_register_value(___nl__im__110));
#line 368
c_rt_lib0clear(&___nl__im__110);
#line 368
c_rt_lib0move(&___nl__im__106, c_rt_lib0concat_new(___nl__im__107, ___nl__im__109));
#line 368
c_rt_lib0clear(&___nl__im__107);
#line 368
c_rt_lib0clear(&___nl__im__109);
#line 368
c_rt_lib0move(&___nl__im__111,___get_global_string_const(794));
#line 368
c_rt_lib0move(&___nl__im__105, c_rt_lib0concat_new(___nl__im__106, ___nl__im__111));
#line 368
c_rt_lib0clear(&___nl__im__106);
#line 368
c_rt_lib0clear(&___nl__im__111);
#line 368
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__102, ___get_global_string_const(293)));
#line 368
c_rt_lib0move(&___nl__im__112, generator_js_priv0get_register_value(___nl__im__113));
#line 368
c_rt_lib0clear(&___nl__im__113);
#line 368
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__112));
#line 368
c_rt_lib0clear(&___nl__im__105);
#line 368
c_rt_lib0clear(&___nl__im__112);
#line 368
c_rt_lib0move(&___nl__im__114,___get_global_string_const(518));
#line 368
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__104, ___nl__im__114));
#line 368
c_rt_lib0clear(&___nl__im__104);
#line 368
c_rt_lib0clear(&___nl__im__114);
#line 369
goto label_646;
#line 369
label_308:
;
#line 369
c_rt_lib0move(&___nl__im__116, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(260)));
#line 369
c_rt_lib0copy(&___nl__im__115, ___nl__im__116);
#line 370
c_rt_lib0move(&___nl__im__118,___get_global_string_const(286));
#line 370
c_rt_lib0move(&___nl__im__119,___get_global_string_const(795));
#line 370
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(78)));
#line 370
c_rt_lib0move(&___nl__im__121, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__122));
#line 370
c_rt_lib0clear(&___nl__im__122);
#line 371
c_rt_lib0move(&___nl__im__125, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(293)));
#line 371
c_rt_lib0move(&___nl__im__124, generator_js_priv0get_register_value(___nl__im__125));
#line 371
c_rt_lib0clear(&___nl__im__125);
#line 371
c_rt_lib0move(&___nl__im__123, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__124));
#line 371
c_rt_lib0clear(&___nl__im__124);
#line 372
c_rt_lib0move(&___nl__im__128, c_rt_lib0hash_get_value_dec(___nl__im__115, ___get_global_string_const(245)));
#line 372
c_rt_lib0move(&___nl__im__127, generator_js_priv0get_register_value(___nl__im__128));
#line 372
c_rt_lib0clear(&___nl__im__128);
#line 372
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__127));
#line 372
c_rt_lib0clear(&___nl__im__127);
#line 372
c_rt_lib0move(&___nl__im__120, c_rt_lib0array_mk(3, ___nl__im__121, ___nl__im__123, ___nl__im__126));
#line 372
c_rt_lib0clear(&___nl__im__121);
#line 372
c_rt_lib0clear(&___nl__im__123);
#line 372
c_rt_lib0clear(&___nl__im__126);
#line 372
c_rt_lib0move(&___nl__im__117, generator_js_priv0get_internal_call(___nl__im__118, ___nl__im__119, ___nl__im__120, ___ref___int__2));
#line 372
c_rt_lib0clear(&___nl__im__118);
#line 372
c_rt_lib0clear(&___nl__im__119);
#line 372
c_rt_lib0clear(&___nl__im__120);
#line 372
c_rt_lib0move(&___nl__im__129,___get_global_string_const(454));
#line 372
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__117, ___nl__im__129));
#line 372
c_rt_lib0clear(&___nl__im__117);
#line 372
c_rt_lib0clear(&___nl__im__129);
#line 373
goto label_646;
#line 373
label_339:
;
#line 373
c_rt_lib0move(&___nl__im__131, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(261)));
#line 373
c_rt_lib0copy(&___nl__im__130, ___nl__im__131);
#line 374
c_rt_lib0move(&___nl__im__132, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(244)));
#line 374
c_rt_lib0move(&___nl__im__133, c_rt_lib0hash_get_value_dec(___nl__im__130, ___get_global_string_const(245)));
#line 374
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_push(___nl__im__132, ___nl__im__133, ___ref___int__2));
#line 374
c_rt_lib0clear(&___nl__im__132);
#line 374
c_rt_lib0clear(&___nl__im__133);
#line 375
goto label_646;
#line 375
label_348:
;
#line 375
c_rt_lib0move(&___nl__im__135, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(262)));
#line 375
c_rt_lib0copy(&___nl__im__134, ___nl__im__135);
#line 376
c_rt_lib0move(&___nl__im__136, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(244)));
#line 376
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec(___nl__im__134, ___get_global_string_const(78)));
#line 376
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_array_len(___nl__im__136, ___nl__im__137, ___ref___int__2));
#line 376
c_rt_lib0clear(&___nl__im__136);
#line 376
c_rt_lib0clear(&___nl__im__137);
#line 377
goto label_646;
#line 377
label_357:
;
#line 377
c_rt_lib0move(&___nl__im__139, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(263)));
#line 377
c_rt_lib0copy(&___nl__im__138, ___nl__im__139);
#line 378
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(244)));
#line 378
c_rt_lib0move(&___nl__im__141, generator_js_priv0get_register_value_to_assign(___nl__im__142));
#line 378
c_rt_lib0clear(&___nl__im__142);
#line 378
c_rt_lib0move(&___nl__im__144,___get_global_string_const(286));
#line 378
c_rt_lib0move(&___nl__im__145,___get_global_string_const(796));
#line 379
c_rt_lib0move(&___nl__im__149, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(78)));
#line 379
c_rt_lib0move(&___nl__im__148, generator_js_priv0get_register_value(___nl__im__149));
#line 379
c_rt_lib0clear(&___nl__im__149);
#line 379
c_rt_lib0move(&___nl__im__147, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__148));
#line 379
c_rt_lib0clear(&___nl__im__148);
#line 379
c_rt_lib0move(&___nl__im__152, c_rt_lib0hash_get_value_dec(___nl__im__138, ___get_global_string_const(587)));
#line 379
c_rt_lib0move(&___nl__im__151, generator_js_priv0get_str_imm(___nl__im__152, ___ref___im__3));
#line 379
c_rt_lib0clear(&___nl__im__152);
#line 379
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__151));
#line 379
c_rt_lib0clear(&___nl__im__151);
#line 379
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_mk(2, ___nl__im__147, ___nl__im__150));
#line 379
c_rt_lib0clear(&___nl__im__147);
#line 379
c_rt_lib0clear(&___nl__im__150);
#line 379
c_rt_lib0move(&___nl__im__143, generator_js_priv0get_internal_call(___nl__im__144, ___nl__im__145, ___nl__im__146, ___ref___int__2));
#line 379
c_rt_lib0clear(&___nl__im__144);
#line 379
c_rt_lib0clear(&___nl__im__145);
#line 379
c_rt_lib0clear(&___nl__im__146);
#line 379
c_rt_lib0move(&___nl__im__140, c_rt_lib0concat_new(___nl__im__141, ___nl__im__143));
#line 379
c_rt_lib0clear(&___nl__im__141);
#line 379
c_rt_lib0clear(&___nl__im__143);
#line 380
c_rt_lib0move(&___nl__im__153,___get_global_string_const(454));
#line 380
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__140, ___nl__im__153));
#line 380
c_rt_lib0clear(&___nl__im__140);
#line 380
c_rt_lib0clear(&___nl__im__153);
#line 381
goto label_646;
#line 381
label_390:
;
#line 381
c_rt_lib0move(&___nl__im__155, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(264)));
#line 381
c_rt_lib0copy(&___nl__im__154, ___nl__im__155);
#line 382
c_rt_lib0move(&___nl__im__157,___get_global_string_const(286));
#line 382
c_rt_lib0move(&___nl__im__158,___get_global_string_const(797));
#line 382
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(78)));
#line 382
c_rt_lib0move(&___nl__im__160, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__161));
#line 382
c_rt_lib0clear(&___nl__im__161);
#line 383
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(587)));
#line 383
c_rt_lib0move(&___nl__im__163, generator_js_priv0get_str_imm(___nl__im__164, ___ref___im__3));
#line 383
c_rt_lib0clear(&___nl__im__164);
#line 383
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__163));
#line 383
c_rt_lib0clear(&___nl__im__163);
#line 383
c_rt_lib0move(&___nl__im__167, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(245)));
#line 383
c_rt_lib0move(&___nl__im__166, generator_js_priv0get_register_value(___nl__im__167));
#line 383
c_rt_lib0clear(&___nl__im__167);
#line 383
c_rt_lib0move(&___nl__im__165, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__166));
#line 383
c_rt_lib0clear(&___nl__im__166);
#line 383
c_rt_lib0move(&___nl__im__159, c_rt_lib0array_mk(3, ___nl__im__160, ___nl__im__162, ___nl__im__165));
#line 383
c_rt_lib0clear(&___nl__im__160);
#line 383
c_rt_lib0clear(&___nl__im__162);
#line 383
c_rt_lib0clear(&___nl__im__165);
#line 383
c_rt_lib0move(&___nl__im__156, generator_js_priv0get_internal_call(___nl__im__157, ___nl__im__158, ___nl__im__159, ___ref___int__2));
#line 383
c_rt_lib0clear(&___nl__im__157);
#line 383
c_rt_lib0clear(&___nl__im__158);
#line 383
c_rt_lib0clear(&___nl__im__159);
#line 384
c_rt_lib0move(&___nl__im__168,___get_global_string_const(454));
#line 384
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__156, ___nl__im__168));
#line 384
c_rt_lib0clear(&___nl__im__156);
#line 384
c_rt_lib0clear(&___nl__im__168);
#line 385
goto label_646;
#line 385
label_421:
;
#line 385
c_rt_lib0move(&___nl__im__170, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(265)));
#line 385
c_rt_lib0copy(&___nl__im__169, ___nl__im__170);
#line 386
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_ov_mk(___nl__im__169, ___ref___im__3, ___ref___int__2));
#line 387
goto label_646;
#line 387
label_426:
;
#line 387
c_rt_lib0move(&___nl__im__172, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(268)));
#line 387
___nl__int__171 = getIntFromImm(___nl__im__172);
#line 388
c_rt_lib0move(&___nl__im__174,___get_global_string_const(539));
#line 388
c_rt_lib0move(&___nl__string__175, c_rt_lib0int_to_string(___nl__int__171));
#line 388
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__string__175));
#line 388
c_rt_lib0clear(&___nl__im__174);
#line 388
c_rt_lib0clear(&___nl__string__175);
#line 388
c_rt_lib0move(&___nl__im__176,___get_global_string_const(540));
#line 388
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__173, ___nl__im__176));
#line 388
c_rt_lib0clear(&___nl__im__173);
#line 388
c_rt_lib0clear(&___nl__im__176);
#line 389
goto label_646;
#line 389
label_439:
;
#line 389
c_rt_lib0move(&___nl__im__178, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(269)));
#line 389
c_rt_lib0copy(&___nl__im__177, ___nl__im__178);
#line 390
c_rt_lib0move(&___nl__im__182,___get_global_string_const(618));
#line 390
c_rt_lib0move(&___nl__im__184, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(78)));
#line 390
c_rt_lib0move(&___nl__im__183, generator_js_priv0get_register_value(___nl__im__184));
#line 390
c_rt_lib0clear(&___nl__im__184);
#line 390
c_rt_lib0move(&___nl__im__181, c_rt_lib0concat_new(___nl__im__182, ___nl__im__183));
#line 390
c_rt_lib0clear(&___nl__im__182);
#line 390
c_rt_lib0clear(&___nl__im__183);
#line 390
c_rt_lib0move(&___nl__im__185,___get_global_string_const(798));
#line 390
c_rt_lib0move(&___nl__im__180, c_rt_lib0concat_new(___nl__im__181, ___nl__im__185));
#line 390
c_rt_lib0clear(&___nl__im__181);
#line 390
c_rt_lib0clear(&___nl__im__185);
#line 390
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__177, ___get_global_string_const(244)));
#line 390
___nl__int__187 = getIntFromImm(___nl__im__188);
#line 390
c_rt_lib0clear(&___nl__im__188);
#line 390
c_rt_lib0move(&___nl__im__186, generator_js_priv0get_goto(___nl__int__187));
#line 390
//clear ___nl__int__187;
#line 390
c_rt_lib0move(&___nl__im__179, c_rt_lib0concat_new(___nl__im__180, ___nl__im__186));
#line 390
c_rt_lib0clear(&___nl__im__180);
#line 390
c_rt_lib0clear(&___nl__im__186);
#line 391
c_rt_lib0move(&___nl__im__189,___get_global_string_const(321));
#line 391
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__179, ___nl__im__189));
#line 391
c_rt_lib0clear(&___nl__im__179);
#line 391
c_rt_lib0clear(&___nl__im__189);
#line 392
goto label_646;
#line 392
label_466:
;
#line 392
c_rt_lib0move(&___nl__im__191, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(270)));
#line 392
___nl__int__190 = getIntFromImm(___nl__im__191);
#line 393
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_goto(___nl__int__190));
#line 394
goto label_646;
#line 394
label_471:
;
#line 394
c_rt_lib0move(&___nl__im__193, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(271)));
#line 394
c_rt_lib0copy(&___nl__im__192, ___nl__im__193);
#line 395
c_rt_lib0move(&___nl__im__194, generator_js_priv0get_register_to_assign(___nl__im__192));
#line 395
c_rt_lib0move(&___nl__im__195,___get_global_string_const(799));
#line 395
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__194, ___nl__im__195));
#line 395
c_rt_lib0clear(&___nl__im__194);
#line 395
c_rt_lib0clear(&___nl__im__195);
#line 396
goto label_646;
#line 396
label_480:
;
#line 396
c_rt_lib0move(&___nl__im__197, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(272)));
#line 396
c_rt_lib0copy(&___nl__im__196, ___nl__im__197);
#line 397
goto label_646;
#line 397
label_484:
;
#line 397
c_rt_lib0move(&___nl__im__199, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(273)));
#line 397
c_rt_lib0copy(&___nl__im__198, ___nl__im__199);
#line 398
c_rt_lib0move(&___nl__im__204, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(375)));
#line 398
c_rt_lib0move(&___nl__im__203, generator_js_priv0get_register_to_assign(___nl__im__204));
#line 398
c_rt_lib0clear(&___nl__im__204);
#line 399
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(374)));
#line 399
c_rt_lib0move(&___nl__im__205, generator_js_priv0get_register_value(___nl__im__206));
#line 399
c_rt_lib0clear(&___nl__im__206);
#line 399
c_rt_lib0move(&___nl__im__202, c_rt_lib0concat_new(___nl__im__203, ___nl__im__205));
#line 399
c_rt_lib0clear(&___nl__im__203);
#line 399
c_rt_lib0clear(&___nl__im__205);
#line 399
c_rt_lib0move(&___nl__im__207,___get_global_string_const(123));
#line 399
c_rt_lib0move(&___nl__im__201, c_rt_lib0concat_new(___nl__im__202, ___nl__im__207));
#line 399
c_rt_lib0clear(&___nl__im__202);
#line 399
c_rt_lib0clear(&___nl__im__207);
#line 399
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__198, ___get_global_string_const(616)));
#line 399
c_rt_lib0move(&___nl__im__200, c_rt_lib0concat_new(___nl__im__201, ___nl__im__208));
#line 399
c_rt_lib0clear(&___nl__im__201);
#line 399
c_rt_lib0clear(&___nl__im__208);
#line 399
c_rt_lib0move(&___nl__im__209,___get_global_string_const(454));
#line 399
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__200, ___nl__im__209));
#line 399
c_rt_lib0clear(&___nl__im__200);
#line 399
c_rt_lib0clear(&___nl__im__209);
#line 400
goto label_646;
#line 400
label_509:
;
#line 400
c_rt_lib0move(&___nl__im__211, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(274)));
#line 400
c_rt_lib0copy(&___nl__im__210, ___nl__im__211);
#line 401
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__210, ___get_global_string_const(376)));
#line 401
c_rt_lib0move(&___nl__im__212, generator_js_priv0get_register_to_assign(___nl__im__213));
#line 401
c_rt_lib0clear(&___nl__im__213);
#line 401
c_rt_lib0move(&___nl__im__214,___get_global_string_const(799));
#line 401
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__212, ___nl__im__214));
#line 401
c_rt_lib0clear(&___nl__im__212);
#line 401
c_rt_lib0clear(&___nl__im__214);
#line 402
goto label_646;
#line 402
label_520:
;
#line 402
c_rt_lib0move(&___nl__im__216, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(275)));
#line 402
c_rt_lib0copy(&___nl__im__215, ___nl__im__216);
#line 403
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_index(___nl__im__215));
#line 404
goto label_646;
#line 404
label_525:
;
#line 404
c_rt_lib0move(&___nl__im__218, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(276)));
#line 404
c_rt_lib0copy(&___nl__im__217, ___nl__im__218);
#line 405
c_rt_lib0move(&___nl__im__220, c_rt_lib0hash_get_value_dec(___nl__im__217, ___get_global_string_const(376)));
#line 405
c_rt_lib0move(&___nl__im__219, generator_js_priv0get_register_to_assign(___nl__im__220));
#line 405
c_rt_lib0clear(&___nl__im__220);
#line 405
c_rt_lib0move(&___nl__im__221,___get_global_string_const(799));
#line 405
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__219, ___nl__im__221));
#line 405
c_rt_lib0clear(&___nl__im__219);
#line 405
c_rt_lib0clear(&___nl__im__221);
#line 406
goto label_646;
#line 406
label_536:
;
#line 406
c_rt_lib0move(&___nl__im__223, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(277)));
#line 406
c_rt_lib0copy(&___nl__im__222, ___nl__im__223);
#line 407
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_use_hash_index(___nl__im__222));
#line 408
goto label_646;
#line 408
label_541:
;
#line 408
c_rt_lib0move(&___nl__im__225, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(278)));
#line 408
c_rt_lib0copy(&___nl__im__224, ___nl__im__225);
#line 409
c_rt_lib0move(&___nl__im__227, c_rt_lib0hash_get_value_dec(___nl__im__224, ___get_global_string_const(376)));
#line 409
c_rt_lib0move(&___nl__im__226, generator_js_priv0get_register_to_assign(___nl__im__227));
#line 409
c_rt_lib0clear(&___nl__im__227);
#line 409
c_rt_lib0move(&___nl__im__228,___get_global_string_const(799));
#line 409
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__226, ___nl__im__228));
#line 409
c_rt_lib0clear(&___nl__im__226);
#line 409
c_rt_lib0clear(&___nl__im__228);
#line 410
goto label_646;
#line 410
label_552:
;
#line 410
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(279)));
#line 410
c_rt_lib0copy(&___nl__im__229, ___nl__im__230);
#line 411
c_rt_lib0move(&___nl__im__234, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 411
c_rt_lib0move(&___nl__im__233, c_rt_lib0hash_get_value_dec(___nl__im__234, ___get_global_string_const(561)));
#line 411
c_rt_lib0clear(&___nl__im__234);
#line 411
c_rt_lib0move(&___nl__im__232, c_rt_lib0hash_get_value_dec(___nl__im__233, ___get_global_string_const(562)));
#line 411
c_rt_lib0clear(&___nl__im__233);
#line 411
c_rt_lib0move(&___nl__im__235, c_rt_lib0hash_get_value_dec(___nl__im__232, ___get_global_string_const(168)));
#line 411
___nl__int__231 = getIntFromImm(___nl__im__235);
#line 411
c_rt_lib0clear(&___nl__im__232);
#line 411
c_rt_lib0clear(&___nl__im__235);
#line 411
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__231, ___ref___im__3));
#line 411
//clear ___nl__int__231;
#line 412
c_rt_lib0move(&___nl__im__242,___get_global_string_const(618));
#line 412
c_rt_lib0move(&___nl__im__244, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(374)));
#line 412
c_rt_lib0move(&___nl__im__243, generator_js_priv0get_register_value(___nl__im__244));
#line 412
c_rt_lib0clear(&___nl__im__244);
#line 412
c_rt_lib0move(&___nl__im__241, c_rt_lib0concat_new(___nl__im__242, ___nl__im__243));
#line 412
c_rt_lib0clear(&___nl__im__242);
#line 412
c_rt_lib0clear(&___nl__im__243);
#line 412
c_rt_lib0move(&___nl__im__245,___get_global_string_const(800));
#line 412
c_rt_lib0move(&___nl__im__240, c_rt_lib0concat_new(___nl__im__241, ___nl__im__245));
#line 412
c_rt_lib0clear(&___nl__im__241);
#line 412
c_rt_lib0clear(&___nl__im__245);
#line 412
c_rt_lib0move(&___nl__im__247, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(577)));
#line 412
___nl__int__246 = getIntFromImm(___nl__im__247);
#line 412
c_rt_lib0clear(&___nl__im__247);
#line 412
c_rt_lib0move(&___nl__string__248, c_rt_lib0int_to_string(___nl__int__246));
#line 412
c_rt_lib0move(&___nl__im__239, c_rt_lib0concat_new(___nl__im__240, ___nl__string__248));
#line 412
c_rt_lib0clear(&___nl__im__240);
#line 412
//clear ___nl__int__246;
#line 412
c_rt_lib0clear(&___nl__string__248);
#line 412
c_rt_lib0move(&___nl__im__249,___get_global_string_const(336));
#line 412
c_rt_lib0move(&___nl__im__238, c_rt_lib0concat_new(___nl__im__239, ___nl__im__249));
#line 412
c_rt_lib0clear(&___nl__im__239);
#line 412
c_rt_lib0clear(&___nl__im__249);
#line 413
c_rt_lib0move(&___nl__im__250, generator_js_priv0get_namespace_name());
#line 413
c_rt_lib0move(&___nl__im__237, c_rt_lib0concat_new(___nl__im__238, ___nl__im__250));
#line 413
c_rt_lib0clear(&___nl__im__238);
#line 413
c_rt_lib0clear(&___nl__im__250);
#line 413
c_rt_lib0move(&___nl__im__251,___get_global_string_const(793));
#line 413
c_rt_lib0move(&___nl__im__236, c_rt_lib0concat_new(___nl__im__237, ___nl__im__251));
#line 413
c_rt_lib0clear(&___nl__im__237);
#line 413
c_rt_lib0clear(&___nl__im__251);
#line 413
c_rt_lib0delete(generator_js_priv0println(___nl__im__236, ___ref___im__3));
#line 413
c_rt_lib0clear(&___nl__im__236);
#line 414
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(375)));
#line 414
c_rt_lib0move(&___nl__im__254, generator_js_priv0get_register_to_assign(___nl__im__255));
#line 414
c_rt_lib0clear(&___nl__im__255);
#line 415
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__229, ___get_global_string_const(374)));
#line 415
c_rt_lib0move(&___nl__im__256, generator_js_priv0get_register_value(___nl__im__257));
#line 415
c_rt_lib0clear(&___nl__im__257);
#line 415
c_rt_lib0move(&___nl__im__253, c_rt_lib0concat_new(___nl__im__254, ___nl__im__256));
#line 415
c_rt_lib0clear(&___nl__im__254);
#line 415
c_rt_lib0clear(&___nl__im__256);
#line 415
c_rt_lib0move(&___nl__im__258,___get_global_string_const(801));
#line 415
c_rt_lib0move(&___nl__im__252, c_rt_lib0concat_new(___nl__im__253, ___nl__im__258));
#line 415
c_rt_lib0clear(&___nl__im__253);
#line 415
c_rt_lib0clear(&___nl__im__258);
#line 415
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__252));
#line 415
c_rt_lib0clear(&___nl__im__252);
#line 416
goto label_646;
#line 416
label_615:
;
#line 416
c_rt_lib0move(&___nl__im__260, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(280)));
#line 416
c_rt_lib0copy(&___nl__im__259, ___nl__im__260);
#line 417
c_rt_lib0move(&___nl__im__262, c_rt_lib0hash_get_value_dec(___nl__im__259, ___get_global_string_const(376)));
#line 417
c_rt_lib0move(&___nl__im__261, generator_js_priv0get_register_to_assign(___nl__im__262));
#line 417
c_rt_lib0clear(&___nl__im__262);
#line 417
c_rt_lib0move(&___nl__im__263,___get_global_string_const(799));
#line 417
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__261, ___nl__im__263));
#line 417
c_rt_lib0clear(&___nl__im__261);
#line 417
c_rt_lib0clear(&___nl__im__263);
#line 418
goto label_646;
#line 418
label_626:
;
#line 418
c_rt_lib0move(&___nl__im__265, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(281)));
#line 418
c_rt_lib0copy(&___nl__im__264, ___nl__im__265);
#line 419
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_init_iter(___nl__im__264, ___ref___int__2));
#line 420
goto label_646;
#line 420
label_631:
;
#line 420
c_rt_lib0move(&___nl__im__267, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(282)));
#line 420
c_rt_lib0copy(&___nl__im__266, ___nl__im__267);
#line 421
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_next_iter(___nl__im__266, ___ref___int__2));
#line 422
goto label_646;
#line 422
label_636:
;
#line 422
c_rt_lib0move(&___nl__im__269, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(283)));
#line 422
c_rt_lib0copy(&___nl__im__268, ___nl__im__269);
#line 423
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_get_key_iter(___nl__im__268, ___ref___int__2));
#line 424
goto label_646;
#line 424
label_641:
;
#line 424
c_rt_lib0move(&___nl__im__271, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(284)));
#line 424
c_rt_lib0copy(&___nl__im__270, ___nl__im__271);
#line 425
c_rt_lib0move(&___nl__im__4, generator_js_priv0get_hash_is_end(___nl__im__270, ___ref___int__2));
#line 426
goto label_646;
#line 426
label_646:
;
#line 427
c_rt_lib0move(&___nl__im__275, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(216)));
#line 427
c_rt_lib0move(&___nl__im__274, c_rt_lib0hash_get_value_dec(___nl__im__275, ___get_global_string_const(561)));
#line 427
c_rt_lib0clear(&___nl__im__275);
#line 427
c_rt_lib0move(&___nl__im__273, c_rt_lib0hash_get_value_dec(___nl__im__274, ___get_global_string_const(562)));
#line 427
c_rt_lib0clear(&___nl__im__274);
#line 427
c_rt_lib0move(&___nl__im__276, c_rt_lib0hash_get_value_dec(___nl__im__273, ___get_global_string_const(168)));
#line 427
___nl__int__272 = getIntFromImm(___nl__im__276);
#line 427
c_rt_lib0clear(&___nl__im__273);
#line 427
c_rt_lib0clear(&___nl__im__276);
#line 427
c_rt_lib0delete(generator_js_priv0print_sourcemap_line_marker(___nl__int__272, ___ref___im__3));
#line 427
//clear ___nl__int__272;
#line 428
c_rt_lib0delete(generator_js_priv0println(___nl__im__4, ___ref___im__3));
#line 428
c_rt_lib0clear(&___nl__im__0);
#line 428
c_rt_lib0clear(&___nl__im__1);
#line 428
c_rt_lib0clear(&___nl__im__4);
#line 428
c_rt_lib0clear(&___nl__im__13);
#line 428
//clear ___nl__bool__14;
#line 428
c_rt_lib0clear(&___nl__im__15);
#line 428
c_rt_lib0clear(&___nl__im__16);
#line 428
c_rt_lib0clear(&___nl__im__17);
#line 428
c_rt_lib0clear(&___nl__im__26);
#line 428
c_rt_lib0clear(&___nl__im__27);
#line 428
c_rt_lib0clear(&___nl__im__36);
#line 428
c_rt_lib0clear(&___nl__im__37);
#line 428
c_rt_lib0clear(&___nl__im__46);
#line 428
c_rt_lib0clear(&___nl__im__47);
#line 428
c_rt_lib0clear(&___nl__im__52);
#line 428
c_rt_lib0clear(&___nl__im__53);
#line 428
c_rt_lib0clear(&___nl__im__62);
#line 428
c_rt_lib0clear(&___nl__im__63);
#line 428
c_rt_lib0clear(&___nl__im__64);
#line 428
c_rt_lib0clear(&___nl__im__65);
#line 428
c_rt_lib0clear(&___nl__im__66);
#line 428
c_rt_lib0clear(&___nl__im__67);
#line 428
c_rt_lib0clear(&___nl__im__73);
#line 428
c_rt_lib0clear(&___nl__im__74);
#line 428
c_rt_lib0clear(&___nl__im__88);
#line 428
c_rt_lib0clear(&___nl__im__89);
#line 428
c_rt_lib0clear(&___nl__im__90);
#line 428
c_rt_lib0clear(&___nl__im__91);
#line 428
c_rt_lib0clear(&___nl__im__94);
#line 428
c_rt_lib0clear(&___nl__im__95);
#line 428
c_rt_lib0clear(&___nl__im__98);
#line 428
c_rt_lib0clear(&___nl__im__99);
#line 428
c_rt_lib0clear(&___nl__im__102);
#line 428
c_rt_lib0clear(&___nl__im__103);
#line 428
c_rt_lib0clear(&___nl__im__115);
#line 428
c_rt_lib0clear(&___nl__im__116);
#line 428
c_rt_lib0clear(&___nl__im__130);
#line 428
c_rt_lib0clear(&___nl__im__131);
#line 428
c_rt_lib0clear(&___nl__im__134);
#line 428
c_rt_lib0clear(&___nl__im__135);
#line 428
c_rt_lib0clear(&___nl__im__138);
#line 428
c_rt_lib0clear(&___nl__im__139);
#line 428
c_rt_lib0clear(&___nl__im__154);
#line 428
c_rt_lib0clear(&___nl__im__155);
#line 428
c_rt_lib0clear(&___nl__im__169);
#line 428
c_rt_lib0clear(&___nl__im__170);
#line 428
//clear ___nl__int__171;
#line 428
c_rt_lib0clear(&___nl__im__172);
#line 428
c_rt_lib0clear(&___nl__im__177);
#line 428
c_rt_lib0clear(&___nl__im__178);
#line 428
//clear ___nl__int__190;
#line 428
c_rt_lib0clear(&___nl__im__191);
#line 428
c_rt_lib0clear(&___nl__im__192);
#line 428
c_rt_lib0clear(&___nl__im__193);
#line 428
c_rt_lib0clear(&___nl__im__196);
#line 428
c_rt_lib0clear(&___nl__im__197);
#line 428
c_rt_lib0clear(&___nl__im__198);
#line 428
c_rt_lib0clear(&___nl__im__199);
#line 428
c_rt_lib0clear(&___nl__im__210);
#line 428
c_rt_lib0clear(&___nl__im__211);
#line 428
c_rt_lib0clear(&___nl__im__215);
#line 428
c_rt_lib0clear(&___nl__im__216);
#line 428
c_rt_lib0clear(&___nl__im__217);
#line 428
c_rt_lib0clear(&___nl__im__218);
#line 428
c_rt_lib0clear(&___nl__im__222);
#line 428
c_rt_lib0clear(&___nl__im__223);
#line 428
c_rt_lib0clear(&___nl__im__224);
#line 428
c_rt_lib0clear(&___nl__im__225);
#line 428
c_rt_lib0clear(&___nl__im__229);
#line 428
c_rt_lib0clear(&___nl__im__230);
#line 428
c_rt_lib0clear(&___nl__im__259);
#line 428
c_rt_lib0clear(&___nl__im__260);
#line 428
c_rt_lib0clear(&___nl__im__264);
#line 428
c_rt_lib0clear(&___nl__im__265);
#line 428
c_rt_lib0clear(&___nl__im__266);
#line 428
c_rt_lib0clear(&___nl__im__267);
#line 428
c_rt_lib0clear(&___nl__im__268);
#line 428
c_rt_lib0clear(&___nl__im__269);
#line 428
c_rt_lib0clear(&___nl__im__270);
#line 428
c_rt_lib0clear(&___nl__im__271);
#line 428
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
#line 432
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__0));
#line 432
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 432
c_rt_lib0clear(&___nl__im__4);
#line 432
___nl__bool__3 = !___nl__bool__3;
#line 432
if(___nl__bool__3){ goto label_11;}
#line 432
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 432
c_rt_lib0clear(&___nl__im__0);
#line 432
c_rt_lib0clear(&___nl__im__1);
#line 432
//clear ___nl__bool__3;
#line 432
return ___nl__im__5;
#line 432
goto label_11;
#line 432
label_11:
;
#line 432
//clear ___nl__bool__3;
#line 432
c_rt_lib0clear(&___nl__im__5);
#line 433
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(367)));
#line 433
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(434));
#line 433
c_rt_lib0clear(&___nl__im__8);
#line 433
___nl__bool__7 = !___nl__bool__6;
#line 433
if(___nl__bool__7){ goto label_22;}
#line 433
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(367)));
#line 433
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(434));
#line 433
c_rt_lib0clear(&___nl__im__9);
#line 433
label_22:
;
#line 433
//clear ___nl__bool__7;
#line 433
___nl__bool__6 = !___nl__bool__6;
#line 433
if(___nl__bool__6){ goto label_40;}
#line 434
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_to_assign(___nl__im__0));
#line 434
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register(___nl__im__1));
#line 434
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 434
c_rt_lib0clear(&___nl__im__12);
#line 434
c_rt_lib0clear(&___nl__im__13);
#line 434
c_rt_lib0move(&___nl__im__14,___get_global_string_const(454));
#line 434
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 434
c_rt_lib0clear(&___nl__im__11);
#line 434
c_rt_lib0clear(&___nl__im__14);
#line 434
c_rt_lib0clear(&___nl__im__0);
#line 434
c_rt_lib0clear(&___nl__im__1);
#line 434
//clear ___nl__bool__6;
#line 434
return ___nl__im__10;
#line 435
goto label_40;
#line 435
label_40:
;
#line 435
//clear ___nl__bool__6;
#line 435
c_rt_lib0clear(&___nl__im__10);
#line 436
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 436
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(146));
#line 436
if(___nl__bool__16){ goto label_63;}
#line 438
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(419));
#line 438
if(___nl__bool__16){ goto label_80;}
#line 444
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(420));
#line 444
if(___nl__bool__16){ goto label_125;}
#line 446
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(33));
#line 446
if(___nl__bool__16){ goto label_143;}
#line 452
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(569));
#line 452
if(___nl__bool__16){ goto label_198;}
#line 458
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(142));
#line 458
if(___nl__bool__16){ goto label_232;}
#line 464
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(573));
#line 464
if(___nl__bool__16){ goto label_268;}
#line 466
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(143));
#line 466
if(___nl__bool__16){ goto label_274;}
#line 466
c_rt_lib0move(&___nl__im__17,___get_global_string_const(15));
#line 466
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 466
nl_die_arg(___nl__im__17);
#line 436
label_63:
;
#line 437
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 437
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 437
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__1));
#line 437
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_im_from_value(___nl__im__21, ___nl__im__22));
#line 437
c_rt_lib0clear(&___nl__im__21);
#line 437
c_rt_lib0clear(&___nl__im__22);
#line 437
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 437
c_rt_lib0clear(&___nl__im__19);
#line 437
c_rt_lib0clear(&___nl__im__20);
#line 437
c_rt_lib0clear(&___nl__im__0);
#line 437
c_rt_lib0clear(&___nl__im__1);
#line 437
c_rt_lib0clear(&___nl__im__15);
#line 437
//clear ___nl__bool__16;
#line 437
c_rt_lib0clear(&___nl__im__17);
#line 437
return ___nl__im__18;
#line 438
goto label_280;
#line 438
label_80:
;
#line 439
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 439
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(146));
#line 439
c_rt_lib0clear(&___nl__im__24);
#line 439
___nl__bool__23 = !___nl__bool__23;
#line 439
if(___nl__bool__23){ goto label_104;}
#line 440
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 440
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value(___nl__im__1));
#line 440
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 440
c_rt_lib0clear(&___nl__im__27);
#line 440
c_rt_lib0clear(&___nl__im__28);
#line 440
c_rt_lib0move(&___nl__im__29,___get_global_string_const(802));
#line 440
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__29));
#line 440
c_rt_lib0clear(&___nl__im__26);
#line 440
c_rt_lib0clear(&___nl__im__29);
#line 440
c_rt_lib0clear(&___nl__im__0);
#line 440
c_rt_lib0clear(&___nl__im__1);
#line 440
c_rt_lib0clear(&___nl__im__15);
#line 440
//clear ___nl__bool__16;
#line 440
c_rt_lib0clear(&___nl__im__17);
#line 440
c_rt_lib0clear(&___nl__im__18);
#line 440
//clear ___nl__bool__23;
#line 440
return ___nl__im__25;
#line 441
goto label_120;
#line 441
label_104:
;
#line 442
c_rt_lib0move(&___nl__im__31, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 442
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__1));
#line 442
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 442
c_rt_lib0clear(&___nl__im__31);
#line 442
c_rt_lib0clear(&___nl__im__32);
#line 442
c_rt_lib0clear(&___nl__im__0);
#line 442
c_rt_lib0clear(&___nl__im__1);
#line 442
c_rt_lib0clear(&___nl__im__15);
#line 442
//clear ___nl__bool__16;
#line 442
c_rt_lib0clear(&___nl__im__17);
#line 442
c_rt_lib0clear(&___nl__im__18);
#line 442
//clear ___nl__bool__23;
#line 442
c_rt_lib0clear(&___nl__im__25);
#line 442
return ___nl__im__30;
#line 443
goto label_120;
#line 443
label_120:
;
#line 443
//clear ___nl__bool__23;
#line 443
c_rt_lib0clear(&___nl__im__25);
#line 443
c_rt_lib0clear(&___nl__im__30);
#line 444
goto label_280;
#line 444
label_125:
;
#line 445
c_rt_lib0move(&___nl__im__34, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 445
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 445
c_rt_lib0move(&___nl__im__37, generator_js_priv0get_register_value(___nl__im__1));
#line 445
c_rt_lib0move(&___nl__im__35, generator_js_priv0get_im_from_value(___nl__im__36, ___nl__im__37));
#line 445
c_rt_lib0clear(&___nl__im__36);
#line 445
c_rt_lib0clear(&___nl__im__37);
#line 445
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__35));
#line 445
c_rt_lib0clear(&___nl__im__34);
#line 445
c_rt_lib0clear(&___nl__im__35);
#line 445
c_rt_lib0clear(&___nl__im__0);
#line 445
c_rt_lib0clear(&___nl__im__1);
#line 445
c_rt_lib0clear(&___nl__im__15);
#line 445
//clear ___nl__bool__16;
#line 445
c_rt_lib0clear(&___nl__im__17);
#line 445
c_rt_lib0clear(&___nl__im__18);
#line 445
return ___nl__im__33;
#line 446
goto label_280;
#line 446
label_143:
;
#line 447
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 447
___nl__bool__38 = c_rt_lib0priv_is(___nl__im__39, ___get_global_string_const(146));
#line 447
c_rt_lib0clear(&___nl__im__39);
#line 447
___nl__bool__38 = !___nl__bool__38;
#line 447
if(___nl__bool__38){ goto label_176;}
#line 448
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 448
c_rt_lib0move(&___nl__im__44,___get_global_string_const(286));
#line 448
c_rt_lib0move(&___nl__im__45,___get_global_string_const(612));
#line 448
c_rt_lib0move(&___nl__im__47, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__1));
#line 448
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__47));
#line 448
c_rt_lib0clear(&___nl__im__47);
#line 448
c_rt_lib0move(&___nl__im__43, generator_js_priv0get_internal_call(___nl__im__44, ___nl__im__45, ___nl__im__46, ___ref___int__2));
#line 448
c_rt_lib0clear(&___nl__im__44);
#line 448
c_rt_lib0clear(&___nl__im__45);
#line 448
c_rt_lib0clear(&___nl__im__46);
#line 448
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__43));
#line 448
c_rt_lib0clear(&___nl__im__42);
#line 448
c_rt_lib0clear(&___nl__im__43);
#line 448
c_rt_lib0move(&___nl__im__48,___get_global_string_const(454));
#line 448
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__48));
#line 448
c_rt_lib0clear(&___nl__im__41);
#line 448
c_rt_lib0clear(&___nl__im__48);
#line 448
c_rt_lib0clear(&___nl__im__0);
#line 448
c_rt_lib0clear(&___nl__im__1);
#line 448
c_rt_lib0clear(&___nl__im__15);
#line 448
//clear ___nl__bool__16;
#line 448
c_rt_lib0clear(&___nl__im__17);
#line 448
c_rt_lib0clear(&___nl__im__18);
#line 448
c_rt_lib0clear(&___nl__im__33);
#line 448
//clear ___nl__bool__38;
#line 448
return ___nl__im__40;
#line 449
goto label_193;
#line 449
label_176:
;
#line 450
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 450
c_rt_lib0move(&___nl__im__51, generator_js_priv0get_register_value(___nl__im__1));
#line 450
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__51));
#line 450
c_rt_lib0clear(&___nl__im__50);
#line 450
c_rt_lib0clear(&___nl__im__51);
#line 450
c_rt_lib0clear(&___nl__im__0);
#line 450
c_rt_lib0clear(&___nl__im__1);
#line 450
c_rt_lib0clear(&___nl__im__15);
#line 450
//clear ___nl__bool__16;
#line 450
c_rt_lib0clear(&___nl__im__17);
#line 450
c_rt_lib0clear(&___nl__im__18);
#line 450
c_rt_lib0clear(&___nl__im__33);
#line 450
//clear ___nl__bool__38;
#line 450
c_rt_lib0clear(&___nl__im__40);
#line 450
return ___nl__im__49;
#line 451
goto label_193;
#line 451
label_193:
;
#line 451
//clear ___nl__bool__38;
#line 451
c_rt_lib0clear(&___nl__im__40);
#line 451
c_rt_lib0clear(&___nl__im__49);
#line 452
goto label_280;
#line 452
label_198:
;
#line 452
c_rt_lib0move(&___nl__im__53, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(569)));
#line 452
c_rt_lib0copy(&___nl__im__52, ___nl__im__53);
#line 453
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 453
___nl__bool__54 = c_rt_lib0priv_is(___nl__im__55, ___get_global_string_const(569));
#line 453
c_rt_lib0clear(&___nl__im__55);
#line 453
___nl__bool__54 = !___nl__bool__54;
#line 453
if(___nl__bool__54){ goto label_223;}
#line 454
c_rt_lib0move(&___nl__im__57, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 454
c_rt_lib0move(&___nl__im__58, generator_js_priv0get_register_value(___nl__im__1));
#line 454
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__58));
#line 454
c_rt_lib0clear(&___nl__im__57);
#line 454
c_rt_lib0clear(&___nl__im__58);
#line 454
c_rt_lib0clear(&___nl__im__0);
#line 454
c_rt_lib0clear(&___nl__im__1);
#line 454
c_rt_lib0clear(&___nl__im__15);
#line 454
//clear ___nl__bool__16;
#line 454
c_rt_lib0clear(&___nl__im__17);
#line 454
c_rt_lib0clear(&___nl__im__18);
#line 454
c_rt_lib0clear(&___nl__im__33);
#line 454
c_rt_lib0clear(&___nl__im__52);
#line 454
c_rt_lib0clear(&___nl__im__53);
#line 454
//clear ___nl__bool__54;
#line 454
return ___nl__im__56;
#line 455
goto label_227;
#line 455
label_223:
;
#line 456
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 456
nl_die_arg(___nl__im__59);
#line 457
goto label_227;
#line 457
label_227:
;
#line 457
//clear ___nl__bool__54;
#line 457
c_rt_lib0clear(&___nl__im__56);
#line 457
c_rt_lib0clear(&___nl__im__59);
#line 458
goto label_280;
#line 458
label_232:
;
#line 458
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(142)));
#line 458
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 459
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 459
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(142));
#line 459
c_rt_lib0clear(&___nl__im__63);
#line 459
___nl__bool__62 = !___nl__bool__62;
#line 459
if(___nl__bool__62){ goto label_259;}
#line 460
c_rt_lib0move(&___nl__im__65, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 460
c_rt_lib0move(&___nl__im__66, generator_js_priv0get_register_value(___nl__im__1));
#line 460
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 460
c_rt_lib0clear(&___nl__im__65);
#line 460
c_rt_lib0clear(&___nl__im__66);
#line 460
c_rt_lib0clear(&___nl__im__0);
#line 460
c_rt_lib0clear(&___nl__im__1);
#line 460
c_rt_lib0clear(&___nl__im__15);
#line 460
//clear ___nl__bool__16;
#line 460
c_rt_lib0clear(&___nl__im__17);
#line 460
c_rt_lib0clear(&___nl__im__18);
#line 460
c_rt_lib0clear(&___nl__im__33);
#line 460
c_rt_lib0clear(&___nl__im__52);
#line 460
c_rt_lib0clear(&___nl__im__53);
#line 460
c_rt_lib0clear(&___nl__im__60);
#line 460
c_rt_lib0clear(&___nl__im__61);
#line 460
//clear ___nl__bool__62;
#line 460
return ___nl__im__64;
#line 461
goto label_263;
#line 461
label_259:
;
#line 462
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_mk(0));
#line 462
nl_die_arg(___nl__im__67);
#line 463
goto label_263;
#line 463
label_263:
;
#line 463
//clear ___nl__bool__62;
#line 463
c_rt_lib0clear(&___nl__im__64);
#line 463
c_rt_lib0clear(&___nl__im__67);
#line 464
goto label_280;
#line 464
label_268:
;
#line 464
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(573)));
#line 464
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 465
c_rt_lib0move(&___nl__im__70, c_rt_lib0array_mk(0));
#line 465
nl_die_arg(___nl__im__70);
#line 466
goto label_280;
#line 466
label_274:
;
#line 466
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(143)));
#line 466
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 467
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(0));
#line 467
nl_die_arg(___nl__im__73);
#line 468
goto label_280;
#line 468
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
#line 472
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 472
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(146));
#line 472
if(___nl__bool__4){ goto label_20;}
#line 474
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(419));
#line 474
if(___nl__bool__4){ goto label_37;}
#line 476
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(420));
#line 476
if(___nl__bool__4){ goto label_53;}
#line 478
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(33));
#line 478
if(___nl__bool__4){ goto label_72;}
#line 480
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(569));
#line 480
if(___nl__bool__4){ goto label_99;}
#line 482
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(142));
#line 482
if(___nl__bool__4){ goto label_105;}
#line 484
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(573));
#line 484
if(___nl__bool__4){ goto label_111;}
#line 486
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(143));
#line 486
if(___nl__bool__4){ goto label_117;}
#line 486
c_rt_lib0move(&___nl__im__5,___get_global_string_const(15));
#line 486
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 486
nl_die_arg(___nl__im__5);
#line 472
label_20:
;
#line 473
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 473
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 473
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 473
c_rt_lib0clear(&___nl__im__8);
#line 473
c_rt_lib0clear(&___nl__im__9);
#line 473
c_rt_lib0move(&___nl__im__10,___get_global_string_const(454));
#line 473
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 473
c_rt_lib0clear(&___nl__im__7);
#line 473
c_rt_lib0clear(&___nl__im__10);
#line 473
c_rt_lib0clear(&___nl__im__0);
#line 473
c_rt_lib0clear(&___nl__im__1);
#line 473
c_rt_lib0clear(&___nl__im__3);
#line 473
//clear ___nl__bool__4;
#line 473
c_rt_lib0clear(&___nl__im__5);
#line 473
return ___nl__im__6;
#line 474
goto label_123;
#line 474
label_37:
;
#line 475
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 475
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 475
c_rt_lib0clear(&___nl__im__13);
#line 475
c_rt_lib0move(&___nl__im__14,___get_global_string_const(454));
#line 475
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 475
c_rt_lib0clear(&___nl__im__12);
#line 475
c_rt_lib0clear(&___nl__im__14);
#line 475
c_rt_lib0clear(&___nl__im__0);
#line 475
c_rt_lib0clear(&___nl__im__1);
#line 475
c_rt_lib0clear(&___nl__im__3);
#line 475
//clear ___nl__bool__4;
#line 475
c_rt_lib0clear(&___nl__im__5);
#line 475
c_rt_lib0clear(&___nl__im__6);
#line 475
return ___nl__im__11;
#line 476
goto label_123;
#line 476
label_53:
;
#line 477
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 477
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_value_aggr(___nl__im__1, ___ref___im__2));
#line 477
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 477
c_rt_lib0clear(&___nl__im__17);
#line 477
c_rt_lib0clear(&___nl__im__18);
#line 477
c_rt_lib0move(&___nl__im__19,___get_global_string_const(454));
#line 477
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 477
c_rt_lib0clear(&___nl__im__16);
#line 477
c_rt_lib0clear(&___nl__im__19);
#line 477
c_rt_lib0clear(&___nl__im__0);
#line 477
c_rt_lib0clear(&___nl__im__1);
#line 477
c_rt_lib0clear(&___nl__im__3);
#line 477
//clear ___nl__bool__4;
#line 477
c_rt_lib0clear(&___nl__im__5);
#line 477
c_rt_lib0clear(&___nl__im__6);
#line 477
c_rt_lib0clear(&___nl__im__11);
#line 477
return ___nl__im__15;
#line 478
goto label_123;
#line 478
label_72:
;
#line 479
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 479
___nl__bool__24 = c_rt_lib0check_true_native(___nl__im__1);
#line 479
if(___nl__bool__24){ goto label_78;}
#line 479
c_rt_lib0move(&___nl__im__23,___get_global_string_const(582));
#line 479
goto label_80;
#line 479
label_78:
;
#line 479
c_rt_lib0move(&___nl__im__23,___get_global_string_const(583));
#line 479
label_80:
;
#line 479
//clear ___nl__bool__24;
#line 479
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 479
c_rt_lib0clear(&___nl__im__22);
#line 479
c_rt_lib0clear(&___nl__im__23);
#line 479
c_rt_lib0move(&___nl__im__25,___get_global_string_const(454));
#line 479
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__25));
#line 479
c_rt_lib0clear(&___nl__im__21);
#line 479
c_rt_lib0clear(&___nl__im__25);
#line 479
c_rt_lib0clear(&___nl__im__0);
#line 479
c_rt_lib0clear(&___nl__im__1);
#line 479
c_rt_lib0clear(&___nl__im__3);
#line 479
//clear ___nl__bool__4;
#line 479
c_rt_lib0clear(&___nl__im__5);
#line 479
c_rt_lib0clear(&___nl__im__6);
#line 479
c_rt_lib0clear(&___nl__im__11);
#line 479
c_rt_lib0clear(&___nl__im__15);
#line 479
return ___nl__im__20;
#line 480
goto label_123;
#line 480
label_99:
;
#line 480
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(569)));
#line 480
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 481
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 481
nl_die_arg(___nl__im__28);
#line 482
goto label_123;
#line 482
label_105:
;
#line 482
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(142)));
#line 482
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 483
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 483
nl_die_arg(___nl__im__31);
#line 484
goto label_123;
#line 484
label_111:
;
#line 484
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(573)));
#line 484
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 485
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 485
nl_die_arg(___nl__im__34);
#line 486
goto label_123;
#line 486
label_117:
;
#line 486
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(143)));
#line 486
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 487
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 487
nl_die_arg(___nl__im__37);
#line 488
goto label_123;
#line 488
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
#line 492
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 492
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(146));
#line 492
c_rt_lib0clear(&___nl__im__4);
#line 492
___nl__bool__3 = !___nl__bool__3;
#line 492
if(___nl__bool__3){ goto label_25;}
#line 493
c_rt_lib0move(&___nl__im__7,___get_global_string_const(286));
#line 493
c_rt_lib0move(&___nl__im__8,___get_global_string_const(261));
#line 494
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__0));
#line 494
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__1));
#line 494
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__11));
#line 494
c_rt_lib0clear(&___nl__im__10);
#line 494
c_rt_lib0clear(&___nl__im__11);
#line 494
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_internal_call(___nl__im__7, ___nl__im__8, ___nl__im__9, ___ref___int__2));
#line 494
c_rt_lib0clear(&___nl__im__7);
#line 494
c_rt_lib0clear(&___nl__im__8);
#line 494
c_rt_lib0clear(&___nl__im__9);
#line 494
c_rt_lib0move(&___nl__im__12,___get_global_string_const(454));
#line 494
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__12));
#line 494
c_rt_lib0clear(&___nl__im__6);
#line 494
c_rt_lib0clear(&___nl__im__12);
#line 494
c_rt_lib0clear(&___nl__im__0);
#line 494
c_rt_lib0clear(&___nl__im__1);
#line 494
//clear ___nl__bool__3;
#line 494
return ___nl__im__5;
#line 495
goto label_54;
#line 495
label_25:
;
#line 495
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 495
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(142));
#line 495
c_rt_lib0clear(&___nl__im__13);
#line 495
___nl__bool__3 = !___nl__bool__3;
#line 495
if(___nl__bool__3){ goto label_50;}
#line 496
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__0));
#line 496
c_rt_lib0move(&___nl__im__18,___get_global_string_const(803));
#line 496
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 496
c_rt_lib0clear(&___nl__im__17);
#line 496
c_rt_lib0clear(&___nl__im__18);
#line 496
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_reference(___nl__im__1));
#line 496
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 496
c_rt_lib0clear(&___nl__im__16);
#line 496
c_rt_lib0clear(&___nl__im__19);
#line 496
c_rt_lib0move(&___nl__im__20,___get_global_string_const(518));
#line 496
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 496
c_rt_lib0clear(&___nl__im__15);
#line 496
c_rt_lib0clear(&___nl__im__20);
#line 496
c_rt_lib0clear(&___nl__im__0);
#line 496
c_rt_lib0clear(&___nl__im__1);
#line 496
//clear ___nl__bool__3;
#line 496
c_rt_lib0clear(&___nl__im__5);
#line 496
return ___nl__im__14;
#line 497
goto label_54;
#line 497
label_50:
;
#line 498
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 498
nl_die_arg(___nl__im__21);
#line 499
goto label_54;
#line 499
label_54:
;
#line 499
//clear ___nl__bool__3;
#line 499
c_rt_lib0clear(&___nl__im__5);
#line 499
c_rt_lib0clear(&___nl__im__14);
#line 499
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
#line 503
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 503
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(146));
#line 503
c_rt_lib0clear(&___nl__im__4);
#line 503
___nl__bool__3 = !___nl__bool__3;
#line 503
if(___nl__bool__3){ goto label_29;}
#line 504
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 504
c_rt_lib0move(&___nl__im__9,___get_global_string_const(286));
#line 504
c_rt_lib0move(&___nl__im__10,___get_global_string_const(262));
#line 505
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__1));
#line 505
c_rt_lib0move(&___nl__im__12, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__13));
#line 505
c_rt_lib0clear(&___nl__im__13);
#line 505
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(1, ___nl__im__12));
#line 505
c_rt_lib0clear(&___nl__im__12);
#line 505
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_internal_call(___nl__im__9, ___nl__im__10, ___nl__im__11, ___ref___int__2));
#line 505
c_rt_lib0clear(&___nl__im__9);
#line 505
c_rt_lib0clear(&___nl__im__10);
#line 505
c_rt_lib0clear(&___nl__im__11);
#line 505
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 505
c_rt_lib0clear(&___nl__im__7);
#line 505
c_rt_lib0clear(&___nl__im__8);
#line 505
c_rt_lib0move(&___nl__im__14,___get_global_string_const(454));
#line 505
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__14));
#line 505
c_rt_lib0clear(&___nl__im__6);
#line 505
c_rt_lib0clear(&___nl__im__14);
#line 505
c_rt_lib0clear(&___nl__im__0);
#line 505
c_rt_lib0clear(&___nl__im__1);
#line 505
//clear ___nl__bool__3;
#line 505
return ___nl__im__5;
#line 506
goto label_54;
#line 506
label_29:
;
#line 506
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 506
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(142));
#line 506
c_rt_lib0clear(&___nl__im__15);
#line 506
___nl__bool__3 = !___nl__bool__3;
#line 506
if(___nl__bool__3){ goto label_50;}
#line 507
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 507
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__1));
#line 507
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 507
c_rt_lib0clear(&___nl__im__18);
#line 507
c_rt_lib0clear(&___nl__im__19);
#line 507
c_rt_lib0move(&___nl__im__20,___get_global_string_const(804));
#line 507
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 507
c_rt_lib0clear(&___nl__im__17);
#line 507
c_rt_lib0clear(&___nl__im__20);
#line 507
c_rt_lib0clear(&___nl__im__0);
#line 507
c_rt_lib0clear(&___nl__im__1);
#line 507
//clear ___nl__bool__3;
#line 507
c_rt_lib0clear(&___nl__im__5);
#line 507
return ___nl__im__16;
#line 508
goto label_54;
#line 508
label_50:
;
#line 509
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 509
nl_die_arg(___nl__im__21);
#line 510
goto label_54;
#line 510
label_54:
;
#line 510
//clear ___nl__bool__3;
#line 510
c_rt_lib0clear(&___nl__im__5);
#line 510
c_rt_lib0clear(&___nl__im__16);
#line 510
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
#line 514
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(374)));
#line 514
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__3, ___get_global_string_const(110)));
#line 514
c_rt_lib0clear(&___nl__im__3);
#line 514
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(142));
#line 514
c_rt_lib0clear(&___nl__im__2);
#line 514
___nl__bool__1 = !___nl__bool__1;
#line 514
if(___nl__bool__1){ goto label_34;}
#line 515
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(375)));
#line 515
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_register_to_assign(___nl__im__9));
#line 515
c_rt_lib0clear(&___nl__im__9);
#line 515
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(374)));
#line 515
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__11));
#line 515
c_rt_lib0clear(&___nl__im__11);
#line 515
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 515
c_rt_lib0clear(&___nl__im__8);
#line 515
c_rt_lib0clear(&___nl__im__10);
#line 515
c_rt_lib0move(&___nl__im__12,___get_global_string_const(330));
#line 515
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__12));
#line 515
c_rt_lib0clear(&___nl__im__7);
#line 515
c_rt_lib0clear(&___nl__im__12);
#line 516
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(377)));
#line 516
c_rt_lib0move(&___nl__im__13, generator_js_priv0get_register_value(___nl__im__14));
#line 516
c_rt_lib0clear(&___nl__im__14);
#line 516
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 516
c_rt_lib0clear(&___nl__im__6);
#line 516
c_rt_lib0clear(&___nl__im__13);
#line 516
c_rt_lib0move(&___nl__im__15,___get_global_string_const(805));
#line 516
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__15));
#line 516
c_rt_lib0clear(&___nl__im__5);
#line 516
c_rt_lib0clear(&___nl__im__15);
#line 516
c_rt_lib0clear(&___nl__im__0);
#line 516
//clear ___nl__bool__1;
#line 516
return ___nl__im__4;
#line 517
goto label_74;
#line 517
label_34:
;
#line 517
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(374)));
#line 517
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(110)));
#line 517
c_rt_lib0clear(&___nl__im__17);
#line 517
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(146));
#line 517
c_rt_lib0clear(&___nl__im__16);
#line 517
___nl__bool__1 = !___nl__bool__1;
#line 517
if(___nl__bool__1){ goto label_70;}
#line 518
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(375)));
#line 518
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_to_assign(___nl__im__23));
#line 518
c_rt_lib0clear(&___nl__im__23);
#line 518
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(374)));
#line 518
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 518
c_rt_lib0clear(&___nl__im__25);
#line 518
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 518
c_rt_lib0clear(&___nl__im__22);
#line 518
c_rt_lib0clear(&___nl__im__24);
#line 519
c_rt_lib0move(&___nl__im__26,___get_global_string_const(794));
#line 519
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 519
c_rt_lib0clear(&___nl__im__21);
#line 519
c_rt_lib0clear(&___nl__im__26);
#line 519
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(377)));
#line 519
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 519
c_rt_lib0clear(&___nl__im__28);
#line 519
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 519
c_rt_lib0clear(&___nl__im__20);
#line 519
c_rt_lib0clear(&___nl__im__27);
#line 519
c_rt_lib0move(&___nl__im__29,___get_global_string_const(518));
#line 519
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 519
c_rt_lib0clear(&___nl__im__19);
#line 519
c_rt_lib0clear(&___nl__im__29);
#line 519
c_rt_lib0clear(&___nl__im__0);
#line 519
//clear ___nl__bool__1;
#line 519
c_rt_lib0clear(&___nl__im__4);
#line 519
return ___nl__im__18;
#line 520
goto label_74;
#line 520
label_70:
;
#line 521
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 521
nl_die_arg(___nl__im__30);
#line 522
goto label_74;
#line 522
label_74:
;
#line 522
//clear ___nl__bool__1;
#line 522
c_rt_lib0clear(&___nl__im__4);
#line 522
c_rt_lib0clear(&___nl__im__18);
#line 522
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
#line 526
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 527
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(377)));
#line 527
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value(___nl__im__4));
#line 527
c_rt_lib0clear(&___nl__im__4);
#line 527
c_rt_lib0move(&___nl__im__5,___get_global_string_const(806));
#line 527
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__5));
#line 527
c_rt_lib0clear(&___nl__im__3);
#line 527
c_rt_lib0clear(&___nl__im__5);
#line 528
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(375)));
#line 528
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_to_assign(___nl__im__11));
#line 528
c_rt_lib0clear(&___nl__im__11);
#line 529
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(374)));
#line 529
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_register_value(___nl__im__13));
#line 529
c_rt_lib0clear(&___nl__im__13);
#line 529
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__12));
#line 529
c_rt_lib0clear(&___nl__im__10);
#line 529
c_rt_lib0clear(&___nl__im__12);
#line 529
c_rt_lib0move(&___nl__im__14,___get_global_string_const(330));
#line 529
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 529
c_rt_lib0clear(&___nl__im__9);
#line 529
c_rt_lib0clear(&___nl__im__14);
#line 529
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__2));
#line 529
c_rt_lib0clear(&___nl__im__8);
#line 529
c_rt_lib0move(&___nl__im__15,___get_global_string_const(331));
#line 529
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 529
c_rt_lib0clear(&___nl__im__7);
#line 529
c_rt_lib0clear(&___nl__im__15);
#line 529
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 529
c_rt_lib0clear(&___nl__im__6);
#line 530
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(617)));
#line 530
___nl__bool__16 = c_rt_lib0check_true_native(___nl__im__17);
#line 530
c_rt_lib0clear(&___nl__im__17);
#line 530
___nl__bool__16 = !___nl__bool__16;
#line 530
if(___nl__bool__16){ goto label_38;}
#line 531
c_rt_lib0move(&___nl__im__18,___get_global_string_const(807));
#line 531
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__18));
#line 531
c_rt_lib0clear(&___nl__im__18);
#line 532
goto label_38;
#line 532
label_38:
;
#line 532
//clear ___nl__bool__16;
#line 533
c_rt_lib0move(&___nl__im__19,___get_global_string_const(454));
#line 533
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__19));
#line 533
c_rt_lib0clear(&___nl__im__19);
#line 534
c_rt_lib0clear(&___nl__im__0);
#line 534
c_rt_lib0clear(&___nl__im__2);
#line 534
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
#line 538
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 538
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 538
c_rt_lib0clear(&___nl__im__4);
#line 538
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(146));
#line 538
c_rt_lib0clear(&___nl__im__3);
#line 538
___nl__bool__2 = !___nl__bool__2;
#line 538
if(___nl__bool__2){ goto label_32;}
#line 539
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 539
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__8));
#line 539
c_rt_lib0clear(&___nl__im__8);
#line 540
c_rt_lib0move(&___nl__im__10,___get_global_string_const(286));
#line 540
c_rt_lib0move(&___nl__im__11,___get_global_string_const(287));
#line 540
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 540
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__14));
#line 540
c_rt_lib0clear(&___nl__im__14);
#line 540
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 540
c_rt_lib0clear(&___nl__im__13);
#line 540
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 540
c_rt_lib0clear(&___nl__im__10);
#line 540
c_rt_lib0clear(&___nl__im__11);
#line 540
c_rt_lib0clear(&___nl__im__12);
#line 540
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 540
c_rt_lib0clear(&___nl__im__7);
#line 540
c_rt_lib0clear(&___nl__im__9);
#line 540
c_rt_lib0move(&___nl__im__15,___get_global_string_const(454));
#line 540
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 540
c_rt_lib0clear(&___nl__im__6);
#line 540
c_rt_lib0clear(&___nl__im__15);
#line 540
c_rt_lib0clear(&___nl__im__0);
#line 540
//clear ___nl__bool__2;
#line 540
return ___nl__im__5;
#line 541
goto label_56;
#line 541
label_32:
;
#line 541
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 541
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(110)));
#line 541
c_rt_lib0clear(&___nl__im__17);
#line 541
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(143));
#line 541
c_rt_lib0clear(&___nl__im__16);
#line 541
___nl__bool__2 = !___nl__bool__2;
#line 541
if(___nl__bool__2){ goto label_52;}
#line 542
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 542
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value_to_assign(___nl__im__20));
#line 542
c_rt_lib0clear(&___nl__im__20);
#line 542
c_rt_lib0move(&___nl__im__21,___get_global_string_const(20));
#line 542
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 542
c_rt_lib0clear(&___nl__im__19);
#line 542
c_rt_lib0clear(&___nl__im__21);
#line 542
c_rt_lib0clear(&___nl__im__0);
#line 542
//clear ___nl__bool__2;
#line 542
c_rt_lib0clear(&___nl__im__5);
#line 542
return ___nl__im__18;
#line 543
goto label_56;
#line 543
label_52:
;
#line 544
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 544
nl_die_arg(___nl__im__22);
#line 545
goto label_56;
#line 545
label_56:
;
#line 545
//clear ___nl__bool__2;
#line 545
c_rt_lib0clear(&___nl__im__5);
#line 545
c_rt_lib0clear(&___nl__im__18);
#line 545
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
#line 549
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 549
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 549
c_rt_lib0clear(&___nl__im__4);
#line 549
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(146));
#line 549
c_rt_lib0clear(&___nl__im__3);
#line 549
___nl__bool__2 = !___nl__bool__2;
#line 549
if(___nl__bool__2){ goto label_32;}
#line 550
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 550
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 550
c_rt_lib0clear(&___nl__im__8);
#line 551
c_rt_lib0move(&___nl__im__10,___get_global_string_const(286));
#line 551
c_rt_lib0move(&___nl__im__11,___get_global_string_const(290));
#line 551
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 551
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__14));
#line 551
c_rt_lib0clear(&___nl__im__14);
#line 551
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 551
c_rt_lib0clear(&___nl__im__13);
#line 551
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 551
c_rt_lib0clear(&___nl__im__10);
#line 551
c_rt_lib0clear(&___nl__im__11);
#line 551
c_rt_lib0clear(&___nl__im__12);
#line 551
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 551
c_rt_lib0clear(&___nl__im__7);
#line 551
c_rt_lib0clear(&___nl__im__9);
#line 551
c_rt_lib0move(&___nl__im__15,___get_global_string_const(454));
#line 551
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 551
c_rt_lib0clear(&___nl__im__6);
#line 551
c_rt_lib0clear(&___nl__im__15);
#line 551
c_rt_lib0clear(&___nl__im__0);
#line 551
//clear ___nl__bool__2;
#line 551
return ___nl__im__5;
#line 552
goto label_56;
#line 552
label_32:
;
#line 552
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 552
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(110)));
#line 552
c_rt_lib0clear(&___nl__im__17);
#line 552
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(143));
#line 552
c_rt_lib0clear(&___nl__im__16);
#line 552
___nl__bool__2 = !___nl__bool__2;
#line 552
if(___nl__bool__2){ goto label_52;}
#line 553
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 553
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 553
c_rt_lib0clear(&___nl__im__20);
#line 553
c_rt_lib0move(&___nl__im__21,___get_global_string_const(808));
#line 553
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 553
c_rt_lib0clear(&___nl__im__19);
#line 553
c_rt_lib0clear(&___nl__im__21);
#line 553
c_rt_lib0clear(&___nl__im__0);
#line 553
//clear ___nl__bool__2;
#line 553
c_rt_lib0clear(&___nl__im__5);
#line 553
return ___nl__im__18;
#line 554
goto label_56;
#line 554
label_52:
;
#line 555
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 555
nl_die_arg(___nl__im__22);
#line 556
goto label_56;
#line 556
label_56:
;
#line 556
//clear ___nl__bool__2;
#line 556
c_rt_lib0clear(&___nl__im__5);
#line 556
c_rt_lib0clear(&___nl__im__18);
#line 556
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
#line 560
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 560
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 560
c_rt_lib0clear(&___nl__im__4);
#line 560
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(146));
#line 560
c_rt_lib0clear(&___nl__im__3);
#line 560
___nl__bool__2 = !___nl__bool__2;
#line 560
if(___nl__bool__2){ goto label_32;}
#line 561
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 561
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 561
c_rt_lib0clear(&___nl__im__8);
#line 562
c_rt_lib0move(&___nl__im__10,___get_global_string_const(286));
#line 562
c_rt_lib0move(&___nl__im__11,___get_global_string_const(289));
#line 562
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 562
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__14));
#line 562
c_rt_lib0clear(&___nl__im__14);
#line 562
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 562
c_rt_lib0clear(&___nl__im__13);
#line 562
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 562
c_rt_lib0clear(&___nl__im__10);
#line 562
c_rt_lib0clear(&___nl__im__11);
#line 562
c_rt_lib0clear(&___nl__im__12);
#line 562
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 562
c_rt_lib0clear(&___nl__im__7);
#line 562
c_rt_lib0clear(&___nl__im__9);
#line 562
c_rt_lib0move(&___nl__im__15,___get_global_string_const(454));
#line 562
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 562
c_rt_lib0clear(&___nl__im__6);
#line 562
c_rt_lib0clear(&___nl__im__15);
#line 562
c_rt_lib0clear(&___nl__im__0);
#line 562
//clear ___nl__bool__2;
#line 562
return ___nl__im__5;
#line 563
goto label_82;
#line 563
label_32:
;
#line 563
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 563
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(110)));
#line 563
c_rt_lib0clear(&___nl__im__17);
#line 563
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(143));
#line 563
c_rt_lib0clear(&___nl__im__16);
#line 563
___nl__bool__2 = !___nl__bool__2;
#line 563
if(___nl__bool__2){ goto label_78;}
#line 564
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 564
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_register_value(___nl__im__19));
#line 564
c_rt_lib0clear(&___nl__im__19);
#line 565
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 565
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_value_to_assign(___nl__im__27));
#line 565
c_rt_lib0clear(&___nl__im__27);
#line 566
c_rt_lib0move(&___nl__im__29,___get_global_string_const(297));
#line 566
c_rt_lib0move(&___nl__im__28, generator_js_priv0imm_call(___nl__im__29));
#line 566
c_rt_lib0clear(&___nl__im__29);
#line 566
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 566
c_rt_lib0clear(&___nl__im__26);
#line 566
c_rt_lib0clear(&___nl__im__28);
#line 566
c_rt_lib0move(&___nl__im__30,___get_global_string_const(809));
#line 566
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__30));
#line 566
c_rt_lib0clear(&___nl__im__25);
#line 566
c_rt_lib0clear(&___nl__im__30);
#line 566
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__18));
#line 566
c_rt_lib0clear(&___nl__im__24);
#line 566
c_rt_lib0move(&___nl__im__31,___get_global_string_const(810));
#line 566
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__31));
#line 566
c_rt_lib0clear(&___nl__im__23);
#line 566
c_rt_lib0clear(&___nl__im__31);
#line 566
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 566
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__33));
#line 566
c_rt_lib0clear(&___nl__im__33);
#line 566
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__32));
#line 566
c_rt_lib0clear(&___nl__im__22);
#line 566
c_rt_lib0clear(&___nl__im__32);
#line 566
c_rt_lib0move(&___nl__im__34,___get_global_string_const(811));
#line 566
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__34));
#line 566
c_rt_lib0clear(&___nl__im__21);
#line 566
c_rt_lib0clear(&___nl__im__34);
#line 566
c_rt_lib0clear(&___nl__im__0);
#line 566
//clear ___nl__bool__2;
#line 566
c_rt_lib0clear(&___nl__im__5);
#line 566
c_rt_lib0clear(&___nl__im__18);
#line 566
return ___nl__im__20;
#line 567
goto label_82;
#line 567
label_78:
;
#line 568
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(0));
#line 568
nl_die_arg(___nl__im__35);
#line 569
goto label_82;
#line 569
label_82:
;
#line 569
//clear ___nl__bool__2;
#line 569
c_rt_lib0clear(&___nl__im__5);
#line 569
c_rt_lib0clear(&___nl__im__18);
#line 569
c_rt_lib0clear(&___nl__im__20);
#line 569
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
#line 573
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 573
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(110)));
#line 573
c_rt_lib0clear(&___nl__im__4);
#line 573
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(146));
#line 573
c_rt_lib0clear(&___nl__im__3);
#line 573
___nl__bool__2 = !___nl__bool__2;
#line 573
if(___nl__bool__2){ goto label_32;}
#line 574
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 574
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_to_assign(___nl__im__8));
#line 574
c_rt_lib0clear(&___nl__im__8);
#line 575
c_rt_lib0move(&___nl__im__10,___get_global_string_const(286));
#line 575
c_rt_lib0move(&___nl__im__11,___get_global_string_const(288));
#line 575
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 575
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__14));
#line 575
c_rt_lib0clear(&___nl__im__14);
#line 575
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 575
c_rt_lib0clear(&___nl__im__13);
#line 575
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_internal_call(___nl__im__10, ___nl__im__11, ___nl__im__12, ___ref___int__1));
#line 575
c_rt_lib0clear(&___nl__im__10);
#line 575
c_rt_lib0clear(&___nl__im__11);
#line 575
c_rt_lib0clear(&___nl__im__12);
#line 575
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 575
c_rt_lib0clear(&___nl__im__7);
#line 575
c_rt_lib0clear(&___nl__im__9);
#line 575
c_rt_lib0move(&___nl__im__15,___get_global_string_const(454));
#line 575
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__15));
#line 575
c_rt_lib0clear(&___nl__im__6);
#line 575
c_rt_lib0clear(&___nl__im__15);
#line 575
c_rt_lib0clear(&___nl__im__0);
#line 575
//clear ___nl__bool__2;
#line 575
return ___nl__im__5;
#line 576
goto label_72;
#line 576
label_32:
;
#line 576
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 576
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(110)));
#line 576
c_rt_lib0clear(&___nl__im__17);
#line 576
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(143));
#line 576
c_rt_lib0clear(&___nl__im__16);
#line 576
___nl__bool__2 = !___nl__bool__2;
#line 576
if(___nl__bool__2){ goto label_68;}
#line 577
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 577
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value_to_assign(___nl__im__23));
#line 577
c_rt_lib0clear(&___nl__im__23);
#line 578
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(378)));
#line 578
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__25));
#line 578
c_rt_lib0clear(&___nl__im__25);
#line 578
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__24));
#line 578
c_rt_lib0clear(&___nl__im__22);
#line 578
c_rt_lib0clear(&___nl__im__24);
#line 578
c_rt_lib0move(&___nl__im__26,___get_global_string_const(812));
#line 578
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 578
c_rt_lib0clear(&___nl__im__21);
#line 578
c_rt_lib0clear(&___nl__im__26);
#line 578
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(143)));
#line 578
c_rt_lib0move(&___nl__im__27, generator_js_priv0get_register_value(___nl__im__28));
#line 578
c_rt_lib0clear(&___nl__im__28);
#line 578
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 578
c_rt_lib0clear(&___nl__im__20);
#line 578
c_rt_lib0clear(&___nl__im__27);
#line 578
c_rt_lib0move(&___nl__im__29,___get_global_string_const(813));
#line 578
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__29));
#line 578
c_rt_lib0clear(&___nl__im__19);
#line 578
c_rt_lib0clear(&___nl__im__29);
#line 578
c_rt_lib0clear(&___nl__im__0);
#line 578
//clear ___nl__bool__2;
#line 578
c_rt_lib0clear(&___nl__im__5);
#line 578
return ___nl__im__18;
#line 579
goto label_72;
#line 579
label_68:
;
#line 580
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(0));
#line 580
nl_die_arg(___nl__im__30);
#line 581
goto label_72;
#line 581
label_72:
;
#line 581
//clear ___nl__bool__2;
#line 581
c_rt_lib0clear(&___nl__im__5);
#line 581
c_rt_lib0clear(&___nl__im__18);
#line 581
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
#line 585
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 586
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(146));
#line 586
___nl__bool__3 = !___nl__bool__3;
#line 586
if(___nl__bool__3){ goto label_36;}
#line 587
c_rt_lib0move(&___nl__im__6,___get_global_string_const(142));
#line 587
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 587
c_rt_lib0clear(&___nl__im__6);
#line 587
c_rt_lib0move(&___nl__im__7,___get_global_string_const(814));
#line 587
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 587
c_rt_lib0clear(&___nl__im__5);
#line 587
c_rt_lib0clear(&___nl__im__7);
#line 587
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 587
c_rt_lib0clear(&___nl__im__4);
#line 588
___nl__int__9 = 0;
#line 588
___nl__int__10 = 1;
#line 588
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 588
label_16:
;
#line 588
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 588
if(___nl__bool__12){ goto label_31;}
#line 588
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 588
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 588
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_register_value(___nl__im__8));
#line 588
c_rt_lib0move(&___nl__im__16,___get_global_string_const(328));
#line 588
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 588
c_rt_lib0clear(&___nl__im__15);
#line 588
c_rt_lib0clear(&___nl__im__16);
#line 588
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 588
c_rt_lib0clear(&___nl__im__14);
#line 588
c_rt_lib0clear(&___nl__im__8);
#line 588
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 588
goto label_16;
#line 588
label_31:
;
#line 589
c_rt_lib0move(&___nl__im__17,___get_global_string_const(510));
#line 589
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 589
c_rt_lib0clear(&___nl__im__17);
#line 590
goto label_70;
#line 590
label_36:
;
#line 590
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(142));
#line 590
___nl__bool__3 = !___nl__bool__3;
#line 590
if(___nl__bool__3){ goto label_66;}
#line 591
c_rt_lib0move(&___nl__im__18,___get_global_string_const(330));
#line 591
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 591
c_rt_lib0clear(&___nl__im__18);
#line 592
___nl__int__20 = 0;
#line 592
___nl__int__21 = 1;
#line 592
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 592
label_46:
;
#line 592
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 592
if(___nl__bool__23){ goto label_61;}
#line 592
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 592
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 592
c_rt_lib0move(&___nl__im__26, generator_js_priv0get_register_reference(___nl__im__19));
#line 592
c_rt_lib0move(&___nl__im__27,___get_global_string_const(328));
#line 592
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 592
c_rt_lib0clear(&___nl__im__26);
#line 592
c_rt_lib0clear(&___nl__im__27);
#line 592
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 592
c_rt_lib0clear(&___nl__im__25);
#line 592
c_rt_lib0clear(&___nl__im__19);
#line 592
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 592
goto label_46;
#line 592
label_61:
;
#line 593
c_rt_lib0move(&___nl__im__28,___get_global_string_const(331));
#line 593
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 593
c_rt_lib0clear(&___nl__im__28);
#line 594
goto label_70;
#line 594
label_66:
;
#line 595
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 595
nl_die_arg(___nl__im__29);
#line 596
goto label_70;
#line 596
label_70:
;
#line 596
//clear ___nl__bool__3;
#line 596
c_rt_lib0clear(&___nl__im__8);
#line 596
//clear ___nl__int__9;
#line 596
//clear ___nl__int__10;
#line 596
//clear ___nl__int__11;
#line 596
//clear ___nl__bool__12;
#line 596
c_rt_lib0clear(&___nl__im__13);
#line 596
c_rt_lib0clear(&___nl__im__19);
#line 596
//clear ___nl__int__20;
#line 596
//clear ___nl__int__21;
#line 596
//clear ___nl__int__22;
#line 596
//clear ___nl__bool__23;
#line 596
c_rt_lib0clear(&___nl__im__24);
#line 596
c_rt_lib0clear(&___nl__im__29);
#line 597
c_rt_lib0clear(&___nl__im__0);
#line 597
c_rt_lib0clear(&___nl__im__1);
#line 597
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
#line 601
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_namespace_name());
#line 601
c_rt_lib0move(&___nl__im__4,___get_global_string_const(815));
#line 601
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 601
c_rt_lib0clear(&___nl__im__3);
#line 601
c_rt_lib0clear(&___nl__im__4);
#line 601
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__0));
#line 601
c_rt_lib0clear(&___nl__im__2);
#line 601
c_rt_lib0clear(&___nl__im__0);
#line 601
return ___nl__im__1;
#line 601
c_rt_lib0clear(&___nl__im__0);
#line 601
c_rt_lib0clear(&___nl__im__1);
#line 601
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
#line 605
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 605
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 605
c_rt_lib0clear(&___nl__im__3);
#line 606
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 606
c_rt_lib0move(&___nl__im__6,___get_global_string_const(403));
#line 606
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 606
c_rt_lib0clear(&___nl__im__5);
#line 606
c_rt_lib0clear(&___nl__im__6);
#line 606
if(___nl__bool__4){ goto label_14;}
#line 606
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 606
c_rt_lib0move(&___nl__im__8,___get_global_string_const(393));
#line 606
___nl__bool__4 = c_rt_lib0eq(___nl__im__7, ___nl__im__8);
#line 606
c_rt_lib0clear(&___nl__im__7);
#line 606
c_rt_lib0clear(&___nl__im__8);
#line 606
label_14:
;
#line 606
if(___nl__bool__4){ goto label_21;}
#line 606
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 606
c_rt_lib0move(&___nl__im__10,___get_global_string_const(395));
#line 606
___nl__bool__4 = c_rt_lib0eq(___nl__im__9, ___nl__im__10);
#line 606
c_rt_lib0clear(&___nl__im__9);
#line 606
c_rt_lib0clear(&___nl__im__10);
#line 606
label_21:
;
#line 606
if(___nl__bool__4){ goto label_28;}
#line 606
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 606
c_rt_lib0move(&___nl__im__12,___get_global_string_const(401));
#line 606
___nl__bool__4 = c_rt_lib0eq(___nl__im__11, ___nl__im__12);
#line 606
c_rt_lib0clear(&___nl__im__11);
#line 606
c_rt_lib0clear(&___nl__im__12);
#line 606
label_28:
;
#line 606
if(___nl__bool__4){ goto label_35;}
#line 606
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 606
c_rt_lib0move(&___nl__im__14,___get_global_string_const(397));
#line 606
___nl__bool__4 = c_rt_lib0eq(___nl__im__13, ___nl__im__14);
#line 606
c_rt_lib0clear(&___nl__im__13);
#line 606
c_rt_lib0clear(&___nl__im__14);
#line 606
label_35:
;
#line 606
if(___nl__bool__4){ goto label_42;}
#line 607
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 607
c_rt_lib0move(&___nl__im__16,___get_global_string_const(399));
#line 607
___nl__bool__4 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 607
c_rt_lib0clear(&___nl__im__15);
#line 607
c_rt_lib0clear(&___nl__im__16);
#line 607
label_42:
;
#line 607
___nl__bool__4 = !___nl__bool__4;
#line 607
if(___nl__bool__4){ goto label_69;}
#line 608
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(291)));
#line 608
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_register_value(___nl__im__18));
#line 608
c_rt_lib0clear(&___nl__im__18);
#line 609
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(292)));
#line 609
c_rt_lib0move(&___nl__im__19, generator_js_priv0get_register_value(___nl__im__20));
#line 609
c_rt_lib0clear(&___nl__im__20);
#line 610
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__2, ___nl__im__17));
#line 610
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 610
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 610
c_rt_lib0clear(&___nl__im__24);
#line 610
c_rt_lib0clear(&___nl__im__25);
#line 610
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__19));
#line 610
c_rt_lib0clear(&___nl__im__23);
#line 610
c_rt_lib0move(&___nl__im__26,___get_global_string_const(454));
#line 610
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 610
c_rt_lib0clear(&___nl__im__22);
#line 610
c_rt_lib0clear(&___nl__im__26);
#line 610
c_rt_lib0clear(&___nl__im__0);
#line 610
c_rt_lib0clear(&___nl__im__2);
#line 610
//clear ___nl__bool__4;
#line 610
c_rt_lib0clear(&___nl__im__17);
#line 610
c_rt_lib0clear(&___nl__im__19);
#line 610
return ___nl__im__21;
#line 611
goto label_181;
#line 611
label_69:
;
#line 611
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 611
c_rt_lib0move(&___nl__im__28,___get_global_string_const(385));
#line 611
___nl__bool__4 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 611
c_rt_lib0clear(&___nl__im__27);
#line 611
c_rt_lib0clear(&___nl__im__28);
#line 611
if(___nl__bool__4){ goto label_81;}
#line 611
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 611
c_rt_lib0move(&___nl__im__30,___get_global_string_const(386));
#line 611
___nl__bool__4 = c_rt_lib0eq(___nl__im__29, ___nl__im__30);
#line 611
c_rt_lib0clear(&___nl__im__29);
#line 611
c_rt_lib0clear(&___nl__im__30);
#line 611
label_81:
;
#line 611
___nl__bool__4 = !___nl__bool__4;
#line 611
if(___nl__bool__4){ goto label_105;}
#line 612
c_rt_lib0move(&___nl__im__33,___get_global_string_const(286));
#line 612
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 612
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(291)));
#line 612
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(292)));
#line 612
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_mk(2, ___nl__im__36, ___nl__im__37));
#line 612
c_rt_lib0clear(&___nl__im__36);
#line 612
c_rt_lib0clear(&___nl__im__37);
#line 612
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_int_call_sim(___nl__im__33, ___nl__im__34, ___nl__im__35));
#line 612
c_rt_lib0clear(&___nl__im__33);
#line 612
c_rt_lib0clear(&___nl__im__34);
#line 612
c_rt_lib0clear(&___nl__im__35);
#line 612
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__2, ___nl__im__32));
#line 612
c_rt_lib0clear(&___nl__im__32);
#line 612
c_rt_lib0clear(&___nl__im__0);
#line 612
c_rt_lib0clear(&___nl__im__2);
#line 612
//clear ___nl__bool__4;
#line 612
c_rt_lib0clear(&___nl__im__17);
#line 612
c_rt_lib0clear(&___nl__im__19);
#line 612
c_rt_lib0clear(&___nl__im__21);
#line 612
return ___nl__im__31;
#line 613
goto label_181;
#line 613
label_105:
;
#line 613
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 613
c_rt_lib0move(&___nl__im__39,___get_global_string_const(123));
#line 613
___nl__bool__4 = c_rt_lib0eq(___nl__im__38, ___nl__im__39);
#line 613
c_rt_lib0clear(&___nl__im__38);
#line 613
c_rt_lib0clear(&___nl__im__39);
#line 613
___nl__bool__4 = !___nl__bool__4;
#line 613
if(___nl__bool__4){ goto label_147;}
#line 614
c_rt_lib0move(&___nl__im__43,___get_global_string_const(286));
#line 614
c_rt_lib0move(&___nl__im__44,___get_global_string_const(816));
#line 615
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(291)));
#line 615
c_rt_lib0move(&___nl__im__47, generator_js_priv0get_register_value(___nl__im__48));
#line 615
c_rt_lib0clear(&___nl__im__48);
#line 615
c_rt_lib0move(&___nl__im__46, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__47));
#line 615
c_rt_lib0clear(&___nl__im__47);
#line 615
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(292)));
#line 615
c_rt_lib0move(&___nl__im__50, generator_js_priv0get_register_value(___nl__im__51));
#line 615
c_rt_lib0clear(&___nl__im__51);
#line 615
c_rt_lib0move(&___nl__im__49, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__50));
#line 615
c_rt_lib0clear(&___nl__im__50);
#line 615
c_rt_lib0move(&___nl__im__45, c_rt_lib0array_mk(2, ___nl__im__46, ___nl__im__49));
#line 615
c_rt_lib0clear(&___nl__im__46);
#line 615
c_rt_lib0clear(&___nl__im__49);
#line 615
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_internal_call(___nl__im__43, ___nl__im__44, ___nl__im__45, ___ref___int__1));
#line 615
c_rt_lib0clear(&___nl__im__43);
#line 615
c_rt_lib0clear(&___nl__im__44);
#line 615
c_rt_lib0clear(&___nl__im__45);
#line 615
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__2, ___nl__im__42));
#line 615
c_rt_lib0clear(&___nl__im__42);
#line 615
c_rt_lib0move(&___nl__im__52,___get_global_string_const(454));
#line 615
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__52));
#line 615
c_rt_lib0clear(&___nl__im__41);
#line 615
c_rt_lib0clear(&___nl__im__52);
#line 615
c_rt_lib0clear(&___nl__im__0);
#line 615
c_rt_lib0clear(&___nl__im__2);
#line 615
//clear ___nl__bool__4;
#line 615
c_rt_lib0clear(&___nl__im__17);
#line 615
c_rt_lib0clear(&___nl__im__19);
#line 615
c_rt_lib0clear(&___nl__im__21);
#line 615
c_rt_lib0clear(&___nl__im__31);
#line 615
return ___nl__im__40;
#line 616
goto label_181;
#line 616
label_147:
;
#line 617
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(291)));
#line 617
c_rt_lib0move(&___nl__im__53, generator_js_priv0get_register_value(___nl__im__54));
#line 617
c_rt_lib0clear(&___nl__im__54);
#line 618
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(292)));
#line 618
c_rt_lib0move(&___nl__im__55, generator_js_priv0get_register_value(___nl__im__56));
#line 618
c_rt_lib0clear(&___nl__im__56);
#line 619
c_rt_lib0move(&___nl__im__62,___get_global_string_const(817));
#line 619
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__2, ___nl__im__62));
#line 619
c_rt_lib0clear(&___nl__im__62);
#line 619
c_rt_lib0move(&___nl__im__60, c_rt_lib0concat_new(___nl__im__61, ___nl__im__53));
#line 619
c_rt_lib0clear(&___nl__im__61);
#line 619
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 619
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__63));
#line 619
c_rt_lib0clear(&___nl__im__60);
#line 619
c_rt_lib0clear(&___nl__im__63);
#line 619
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__55));
#line 619
c_rt_lib0clear(&___nl__im__59);
#line 619
c_rt_lib0move(&___nl__im__64,___get_global_string_const(518));
#line 619
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__64));
#line 619
c_rt_lib0clear(&___nl__im__58);
#line 619
c_rt_lib0clear(&___nl__im__64);
#line 619
c_rt_lib0clear(&___nl__im__0);
#line 619
c_rt_lib0clear(&___nl__im__2);
#line 619
//clear ___nl__bool__4;
#line 619
c_rt_lib0clear(&___nl__im__17);
#line 619
c_rt_lib0clear(&___nl__im__19);
#line 619
c_rt_lib0clear(&___nl__im__21);
#line 619
c_rt_lib0clear(&___nl__im__31);
#line 619
c_rt_lib0clear(&___nl__im__40);
#line 619
c_rt_lib0clear(&___nl__im__53);
#line 619
c_rt_lib0clear(&___nl__im__55);
#line 619
return ___nl__im__57;
#line 620
goto label_181;
#line 620
label_181:
;
#line 620
//clear ___nl__bool__4;
#line 620
c_rt_lib0clear(&___nl__im__17);
#line 620
c_rt_lib0clear(&___nl__im__19);
#line 620
c_rt_lib0clear(&___nl__im__21);
#line 620
c_rt_lib0clear(&___nl__im__31);
#line 620
c_rt_lib0clear(&___nl__im__40);
#line 620
c_rt_lib0clear(&___nl__im__53);
#line 620
c_rt_lib0clear(&___nl__im__55);
#line 620
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
#line 626
c_rt_lib0move(&___nl__im__7, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 626
c_rt_lib0move(&___nl__im__8, generator_js_priv0get_function_call_name_raw(___nl__im__1, ___nl__im__0));
#line 626
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 626
c_rt_lib0clear(&___nl__im__7);
#line 626
c_rt_lib0clear(&___nl__im__8);
#line 626
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 626
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 626
c_rt_lib0clear(&___nl__im__6);
#line 626
c_rt_lib0clear(&___nl__im__9);
#line 627
___nl__int__10 = 0;
#line 628
c_rt_lib0move(&___nl__im__11,___get_global_string_const(36));
#line 629
c_rt_lib0move(&___nl__im__12,___get_global_string_const(36));
#line 630
___nl__int__14 = 0;
#line 630
___nl__int__15 = 1;
#line 630
___nl__int__16 = c_rt_lib0array_len(___nl__im__2);
#line 630
label_15:
;
#line 630
___nl__bool__17 = ___nl__int__14 >= ___nl__int__16;
#line 630
if(___nl__bool__17){ goto label_58;}
#line 630
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_get(___nl__im__2, ___nl__int__14));
#line 630
c_rt_lib0copy(&___nl__im__13, ___nl__im__18);
#line 631
___nl__int__20 = 0;
#line 631
___nl__bool__19 = ___nl__int__10 == ___nl__int__20;
#line 631
//clear ___nl__int__20;
#line 631
___nl__bool__19 = !___nl__bool__19;
#line 631
___nl__bool__19 = !___nl__bool__19;
#line 631
if(___nl__bool__19){ goto label_30;}
#line 631
c_rt_lib0move(&___nl__im__21,___get_global_string_const(328));
#line 631
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__21));
#line 631
c_rt_lib0clear(&___nl__im__21);
#line 631
goto label_30;
#line 631
label_30:
;
#line 631
//clear ___nl__bool__19;
#line 632
___nl__int__22 = 1;
#line 632
___nl__int__10 = ___nl__int__10 + ___nl__int__22;
#line 632
//clear ___nl__int__22;
#line 633
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(39));
#line 633
if(___nl__bool__23){ goto label_42;}
#line 635
___nl__bool__23 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(245));
#line 635
if(___nl__bool__23){ goto label_47;}
#line 635
c_rt_lib0move(&___nl__im__24,___get_global_string_const(15));
#line 635
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__13));
#line 635
nl_die_arg(___nl__im__24);
#line 633
label_42:
;
#line 633
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(39)));
#line 633
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 634
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__11, &___nl__im__5, &___nl__im__12, ___nl__im__25, ___nl__int__10, (*___ref___int__4)));
#line 635
goto label_54;
#line 635
label_47:
;
#line 635
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(245)));
#line 635
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 636
c_rt_lib0move(&___nl__im__29, generator_js_priv0get_register_value(___nl__im__27));
#line 636
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__29));
#line 636
c_rt_lib0clear(&___nl__im__29);
#line 637
goto label_54;
#line 637
label_54:
;
#line 637
c_rt_lib0clear(&___nl__im__13);
#line 638
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 638
goto label_15;
#line 638
label_58:
;
#line 639
___nl__int__30 = 1;
#line 639
(*___ref___int__4) = (*___ref___int__4) + ___nl__int__30;
#line 639
//clear ___nl__int__30;
#line 640
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__11, ___nl__im__5));
#line 640
c_rt_lib0move(&___nl__im__34,___get_global_string_const(518));
#line 640
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 640
c_rt_lib0clear(&___nl__im__33);
#line 640
c_rt_lib0clear(&___nl__im__34);
#line 640
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__12));
#line 640
c_rt_lib0clear(&___nl__im__32);
#line 640
c_rt_lib0clear(&___nl__im__0);
#line 640
c_rt_lib0clear(&___nl__im__1);
#line 640
c_rt_lib0clear(&___nl__im__2);
#line 640
c_rt_lib0clear(&___nl__im__3);
#line 640
c_rt_lib0clear(&___nl__im__5);
#line 640
//clear ___nl__int__10;
#line 640
c_rt_lib0clear(&___nl__im__11);
#line 640
c_rt_lib0clear(&___nl__im__12);
#line 640
c_rt_lib0clear(&___nl__im__13);
#line 640
//clear ___nl__int__14;
#line 640
//clear ___nl__int__15;
#line 640
//clear ___nl__int__16;
#line 640
//clear ___nl__bool__17;
#line 640
c_rt_lib0clear(&___nl__im__18);
#line 640
//clear ___nl__bool__23;
#line 640
c_rt_lib0clear(&___nl__im__24);
#line 640
c_rt_lib0clear(&___nl__im__25);
#line 640
c_rt_lib0clear(&___nl__im__26);
#line 640
c_rt_lib0clear(&___nl__im__27);
#line 640
c_rt_lib0clear(&___nl__im__28);
#line 640
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
#line 645
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 645
c_rt_lib0move(&___nl__im__3, generator_js_priv0get_register_value_to_assign(___nl__im__4));
#line 645
c_rt_lib0clear(&___nl__im__4);
#line 646
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 646
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(110)));
#line 646
c_rt_lib0clear(&___nl__im__7);
#line 646
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(146));
#line 646
c_rt_lib0clear(&___nl__im__6);
#line 646
___nl__bool__5 = !___nl__bool__5;
#line 646
if(___nl__bool__5){ goto label_73;}
#line 647
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 647
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(294));
#line 647
if(___nl__bool__9){ goto label_18;}
#line 650
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(366));
#line 650
if(___nl__bool__9){ goto label_52;}
#line 650
c_rt_lib0move(&___nl__im__10,___get_global_string_const(15));
#line 650
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__8));
#line 650
nl_die_arg(___nl__im__10);
#line 647
label_18:
;
#line 647
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__8, ___get_global_string_const(294)));
#line 647
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 648
c_rt_lib0move(&___nl__im__16,___get_global_string_const(286));
#line 648
c_rt_lib0move(&___nl__im__17,___get_global_string_const(590));
#line 649
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(572)));
#line 649
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_const_value_aggr(___nl__im__21, ___ref___im__1));
#line 649
c_rt_lib0clear(&___nl__im__21);
#line 649
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__20));
#line 649
c_rt_lib0clear(&___nl__im__20);
#line 649
c_rt_lib0move(&___nl__im__22, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__11));
#line 649
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(2, ___nl__im__19, ___nl__im__22));
#line 649
c_rt_lib0clear(&___nl__im__19);
#line 649
c_rt_lib0clear(&___nl__im__22);
#line 649
c_rt_lib0move(&___nl__im__15, generator_js_priv0get_internal_call(___nl__im__16, ___nl__im__17, ___nl__im__18, ___ref___int__2));
#line 649
c_rt_lib0clear(&___nl__im__16);
#line 649
c_rt_lib0clear(&___nl__im__17);
#line 649
c_rt_lib0clear(&___nl__im__18);
#line 649
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__3, ___nl__im__15));
#line 649
c_rt_lib0clear(&___nl__im__15);
#line 649
c_rt_lib0move(&___nl__im__23,___get_global_string_const(454));
#line 649
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 649
c_rt_lib0clear(&___nl__im__14);
#line 649
c_rt_lib0clear(&___nl__im__23);
#line 649
c_rt_lib0clear(&___nl__im__0);
#line 649
c_rt_lib0clear(&___nl__im__3);
#line 649
//clear ___nl__bool__5;
#line 649
c_rt_lib0clear(&___nl__im__8);
#line 649
//clear ___nl__bool__9;
#line 649
c_rt_lib0clear(&___nl__im__10);
#line 649
c_rt_lib0clear(&___nl__im__11);
#line 649
c_rt_lib0clear(&___nl__im__12);
#line 649
return ___nl__im__13;
#line 650
goto label_71;
#line 650
label_52:
;
#line 651
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(572)));
#line 651
c_rt_lib0move(&___nl__im__26, ov0mk(___nl__im__27));
#line 651
c_rt_lib0clear(&___nl__im__27);
#line 651
c_rt_lib0move(&___nl__im__25, generator_js_priv0get_const_value_aggr(___nl__im__26, ___ref___im__1));
#line 651
c_rt_lib0clear(&___nl__im__26);
#line 651
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__3, ___nl__im__25));
#line 651
c_rt_lib0clear(&___nl__im__25);
#line 651
c_rt_lib0clear(&___nl__im__0);
#line 651
c_rt_lib0clear(&___nl__im__3);
#line 651
//clear ___nl__bool__5;
#line 651
c_rt_lib0clear(&___nl__im__8);
#line 651
//clear ___nl__bool__9;
#line 651
c_rt_lib0clear(&___nl__im__10);
#line 651
c_rt_lib0clear(&___nl__im__11);
#line 651
c_rt_lib0clear(&___nl__im__12);
#line 651
c_rt_lib0clear(&___nl__im__13);
#line 651
return ___nl__im__24;
#line 652
goto label_71;
#line 652
label_71:
;
#line 653
goto label_137;
#line 653
label_73:
;
#line 653
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 653
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(110)));
#line 653
c_rt_lib0clear(&___nl__im__29);
#line 653
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__28, ___get_global_string_const(573));
#line 653
c_rt_lib0clear(&___nl__im__28);
#line 653
___nl__bool__5 = !___nl__bool__5;
#line 653
if(___nl__bool__5){ goto label_133;}
#line 654
c_rt_lib0move(&___nl__im__31,___get_global_string_const(818));
#line 654
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(577)));
#line 654
___nl__int__32 = getIntFromImm(___nl__im__33);
#line 654
c_rt_lib0clear(&___nl__im__33);
#line 654
c_rt_lib0move(&___nl__string__34, c_rt_lib0int_to_string(___nl__int__32));
#line 654
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__string__34));
#line 654
c_rt_lib0clear(&___nl__im__31);
#line 654
//clear ___nl__int__32;
#line 654
c_rt_lib0clear(&___nl__string__34);
#line 654
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__30));
#line 654
c_rt_lib0clear(&___nl__im__30);
#line 655
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 655
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(294));
#line 655
if(___nl__bool__36){ goto label_100;}
#line 657
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(366));
#line 657
if(___nl__bool__36){ goto label_111;}
#line 657
c_rt_lib0move(&___nl__im__37,___get_global_string_const(15));
#line 657
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__35));
#line 657
nl_die_arg(___nl__im__37);
#line 655
label_100:
;
#line 655
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__35, ___get_global_string_const(294)));
#line 655
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 656
c_rt_lib0move(&___nl__im__41,___get_global_string_const(819));
#line 656
c_rt_lib0move(&___nl__im__42, generator_js_priv0get_register_reference(___nl__im__38));
#line 656
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 656
c_rt_lib0clear(&___nl__im__41);
#line 656
c_rt_lib0clear(&___nl__im__42);
#line 656
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__40));
#line 656
c_rt_lib0clear(&___nl__im__40);
#line 657
goto label_113;
#line 657
label_111:
;
#line 658
goto label_113;
#line 658
label_113:
;
#line 659
c_rt_lib0move(&___nl__im__43,___get_global_string_const(321));
#line 659
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__43));
#line 659
c_rt_lib0clear(&___nl__im__43);
#line 660
c_rt_lib0clear(&___nl__im__0);
#line 660
//clear ___nl__bool__5;
#line 660
c_rt_lib0clear(&___nl__im__8);
#line 660
//clear ___nl__bool__9;
#line 660
c_rt_lib0clear(&___nl__im__10);
#line 660
c_rt_lib0clear(&___nl__im__11);
#line 660
c_rt_lib0clear(&___nl__im__12);
#line 660
c_rt_lib0clear(&___nl__im__13);
#line 660
c_rt_lib0clear(&___nl__im__24);
#line 660
c_rt_lib0clear(&___nl__im__35);
#line 660
//clear ___nl__bool__36;
#line 660
c_rt_lib0clear(&___nl__im__37);
#line 660
c_rt_lib0clear(&___nl__im__38);
#line 660
c_rt_lib0clear(&___nl__im__39);
#line 660
return ___nl__im__3;
#line 661
goto label_137;
#line 661
label_133:
;
#line 662
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(0));
#line 662
nl_die_arg(___nl__im__44);
#line 663
goto label_137;
#line 663
label_137:
;
#line 663
//clear ___nl__bool__5;
#line 663
c_rt_lib0clear(&___nl__im__8);
#line 663
//clear ___nl__bool__9;
#line 663
c_rt_lib0clear(&___nl__im__10);
#line 663
c_rt_lib0clear(&___nl__im__11);
#line 663
c_rt_lib0clear(&___nl__im__12);
#line 663
c_rt_lib0clear(&___nl__im__13);
#line 663
c_rt_lib0clear(&___nl__im__24);
#line 663
c_rt_lib0clear(&___nl__im__35);
#line 663
//clear ___nl__bool__36;
#line 663
c_rt_lib0clear(&___nl__im__37);
#line 663
c_rt_lib0clear(&___nl__im__38);
#line 663
c_rt_lib0clear(&___nl__im__39);
#line 663
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
#line 668
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 668
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(146));
#line 668
c_rt_lib0clear(&___nl__im__7);
#line 668
___nl__bool__6 = !___nl__bool__6;
#line 668
if(___nl__bool__6){ goto label_33;}
#line 669
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 669
c_rt_lib0move(&___nl__im__12,___get_global_string_const(286));
#line 669
c_rt_lib0move(&___nl__im__13,___get_global_string_const(255));
#line 670
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(362), ___nl__im__1));
#line 670
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_str_imm(___nl__im__2, ___ref___im__5));
#line 670
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(297), ___nl__im__17));
#line 670
c_rt_lib0clear(&___nl__im__17);
#line 670
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__16));
#line 670
c_rt_lib0clear(&___nl__im__15);
#line 670
c_rt_lib0clear(&___nl__im__16);
#line 670
c_rt_lib0move(&___nl__im__11, generator_js_priv0get_internal_call(___nl__im__12, ___nl__im__13, ___nl__im__14, ___ref___int__4));
#line 670
c_rt_lib0clear(&___nl__im__12);
#line 670
c_rt_lib0clear(&___nl__im__13);
#line 670
c_rt_lib0clear(&___nl__im__14);
#line 670
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 670
c_rt_lib0clear(&___nl__im__10);
#line 670
c_rt_lib0clear(&___nl__im__11);
#line 670
c_rt_lib0move(&___nl__im__18,___get_global_string_const(454));
#line 670
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 670
c_rt_lib0clear(&___nl__im__9);
#line 670
c_rt_lib0clear(&___nl__im__18);
#line 670
c_rt_lib0clear(&___nl__im__0);
#line 670
c_rt_lib0clear(&___nl__im__1);
#line 670
c_rt_lib0clear(&___nl__im__2);
#line 670
//clear ___nl__int__3;
#line 670
//clear ___nl__bool__6;
#line 670
return ___nl__im__8;
#line 671
goto label_64;
#line 671
label_33:
;
#line 671
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(110)));
#line 671
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(573));
#line 671
c_rt_lib0clear(&___nl__im__19);
#line 671
___nl__bool__6 = !___nl__bool__6;
#line 671
if(___nl__bool__6){ goto label_60;}
#line 672
c_rt_lib0move(&___nl__im__23, generator_js_priv0get_register_value_to_assign(___nl__im__0));
#line 672
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__1));
#line 672
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 672
c_rt_lib0clear(&___nl__im__23);
#line 672
c_rt_lib0clear(&___nl__im__24);
#line 672
c_rt_lib0move(&___nl__im__25,___get_global_string_const(820));
#line 672
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 672
c_rt_lib0clear(&___nl__im__22);
#line 672
c_rt_lib0clear(&___nl__im__25);
#line 672
c_rt_lib0move(&___nl__string__26, c_rt_lib0int_to_string(___nl__int__3));
#line 672
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__string__26));
#line 672
c_rt_lib0clear(&___nl__im__21);
#line 672
c_rt_lib0clear(&___nl__string__26);
#line 672
c_rt_lib0clear(&___nl__im__0);
#line 672
c_rt_lib0clear(&___nl__im__1);
#line 672
c_rt_lib0clear(&___nl__im__2);
#line 672
//clear ___nl__int__3;
#line 672
//clear ___nl__bool__6;
#line 672
c_rt_lib0clear(&___nl__im__8);
#line 672
return ___nl__im__20;
#line 673
goto label_64;
#line 673
label_60:
;
#line 674
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 674
nl_die_arg(___nl__im__27);
#line 675
goto label_64;
#line 675
label_64:
;
#line 675
//clear ___nl__bool__6;
#line 675
c_rt_lib0clear(&___nl__im__8);
#line 675
c_rt_lib0clear(&___nl__im__20);
#line 675
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
#line 680
c_rt_lib0move(&___nl__im__9,___get_global_string_const(821));
#line 680
c_rt_lib0move(&___nl__string__10, c_rt_lib0int_to_string(___nl__int__5));
#line 680
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__10));
#line 680
c_rt_lib0clear(&___nl__im__9);
#line 680
c_rt_lib0clear(&___nl__string__10);
#line 680
c_rt_lib0move(&___nl__im__11,___get_global_string_const(120));
#line 680
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__11));
#line 680
c_rt_lib0clear(&___nl__im__8);
#line 680
c_rt_lib0clear(&___nl__im__11);
#line 680
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__4));
#line 680
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__string__12));
#line 680
c_rt_lib0clear(&___nl__im__7);
#line 680
c_rt_lib0clear(&___nl__string__12);
#line 681
c_rt_lib0move(&___nl__im__19,___get_global_string_const(751));
#line 681
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 681
c_rt_lib0clear(&___nl__im__19);
#line 681
c_rt_lib0move(&___nl__im__20,___get_global_string_const(822));
#line 681
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__20));
#line 681
c_rt_lib0clear(&___nl__im__18);
#line 681
c_rt_lib0clear(&___nl__im__20);
#line 681
c_rt_lib0move(&___nl__im__22,___get_global_string_const(39));
#line 681
c_rt_lib0move(&___nl__im__21, generator_js_priv0imm_call(___nl__im__22));
#line 681
c_rt_lib0clear(&___nl__im__22);
#line 681
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__21));
#line 681
c_rt_lib0clear(&___nl__im__17);
#line 681
c_rt_lib0clear(&___nl__im__21);
#line 681
c_rt_lib0move(&___nl__im__23,___get_global_string_const(469));
#line 681
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__23));
#line 681
c_rt_lib0clear(&___nl__im__16);
#line 681
c_rt_lib0clear(&___nl__im__23);
#line 681
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_register_value(___nl__im__3));
#line 681
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__24));
#line 681
c_rt_lib0clear(&___nl__im__15);
#line 681
c_rt_lib0clear(&___nl__im__24);
#line 681
c_rt_lib0move(&___nl__im__25,___get_global_string_const(518));
#line 681
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__25));
#line 681
c_rt_lib0clear(&___nl__im__14);
#line 681
c_rt_lib0clear(&___nl__im__25);
#line 681
c_rt_lib0move(___ref___im__0, c_rt_lib0concat_add((*___ref___im__0), ___nl__im__13));
#line 681
c_rt_lib0clear(&___nl__im__13);
#line 682
c_rt_lib0move(___ref___im__1, c_rt_lib0concat_add((*___ref___im__1), ___nl__im__6));
#line 683
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_register_value_to_assign(___nl__im__3));
#line 683
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__6));
#line 683
c_rt_lib0clear(&___nl__im__28);
#line 683
c_rt_lib0move(&___nl__im__29,___get_global_string_const(787));
#line 683
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__29));
#line 683
c_rt_lib0clear(&___nl__im__27);
#line 683
c_rt_lib0clear(&___nl__im__29);
#line 683
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__26));
#line 683
c_rt_lib0clear(&___nl__im__26);
#line 684
c_rt_lib0move(&___nl__im__31,___get_global_string_const(790));
#line 684
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__6, ___nl__im__31));
#line 684
c_rt_lib0clear(&___nl__im__31);
#line 684
c_rt_lib0move(___ref___im__2, c_rt_lib0concat_add((*___ref___im__2), ___nl__im__30));
#line 684
c_rt_lib0clear(&___nl__im__30);
#line 684
c_rt_lib0clear(&___nl__im__3);
#line 684
//clear ___nl__int__4;
#line 684
//clear ___nl__int__5;
#line 684
c_rt_lib0clear(&___nl__im__6);
#line 684
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
#line 690
___nl__int__4 = 0;
#line 691
c_rt_lib0move(&___nl__im__5,___get_global_string_const(36));
#line 692
c_rt_lib0move(&___nl__im__6,___get_global_string_const(36));
#line 693
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_namespace_name());
#line 693
c_rt_lib0move(&___nl__im__13,___get_global_string_const(123));
#line 693
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 693
c_rt_lib0clear(&___nl__im__12);
#line 693
c_rt_lib0clear(&___nl__im__13);
#line 693
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__0));
#line 693
c_rt_lib0clear(&___nl__im__11);
#line 693
c_rt_lib0move(&___nl__im__14,___get_global_string_const(123));
#line 693
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 693
c_rt_lib0clear(&___nl__im__10);
#line 693
c_rt_lib0clear(&___nl__im__14);
#line 693
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 693
c_rt_lib0clear(&___nl__im__9);
#line 693
c_rt_lib0move(&___nl__im__15,___get_global_string_const(469));
#line 693
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__15));
#line 693
c_rt_lib0clear(&___nl__im__8);
#line 693
c_rt_lib0clear(&___nl__im__15);
#line 694
___nl__int__17 = 0;
#line 694
___nl__int__18 = 1;
#line 694
___nl__int__19 = c_rt_lib0array_len(___nl__im__2);
#line 694
label_23:
;
#line 694
___nl__bool__20 = ___nl__int__17 >= ___nl__int__19;
#line 694
if(___nl__bool__20){ goto label_73;}
#line 694
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__2, ___nl__int__17));
#line 694
c_rt_lib0copy(&___nl__im__16, ___nl__im__21);
#line 695
___nl__int__23 = 0;
#line 695
___nl__bool__22 = ___nl__int__4 == ___nl__int__23;
#line 695
//clear ___nl__int__23;
#line 695
___nl__bool__22 = !___nl__bool__22;
#line 695
___nl__bool__22 = !___nl__bool__22;
#line 695
if(___nl__bool__22){ goto label_38;}
#line 695
c_rt_lib0move(&___nl__im__24,___get_global_string_const(328));
#line 695
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__24));
#line 695
c_rt_lib0clear(&___nl__im__24);
#line 695
goto label_38;
#line 695
label_38:
;
#line 695
//clear ___nl__bool__22;
#line 696
___nl__int__25 = 1;
#line 696
___nl__int__4 = ___nl__int__4 + ___nl__int__25;
#line 696
//clear ___nl__int__25;
#line 697
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(39));
#line 697
if(___nl__bool__26){ goto label_52;}
#line 699
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(362));
#line 699
if(___nl__bool__26){ goto label_57;}
#line 701
___nl__bool__26 = c_rt_lib0priv_is(___nl__im__16, ___get_global_string_const(297));
#line 701
if(___nl__bool__26){ goto label_64;}
#line 701
c_rt_lib0move(&___nl__im__27,___get_global_string_const(15));
#line 701
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(2, ___nl__im__27, ___nl__im__16));
#line 701
nl_die_arg(___nl__im__27);
#line 697
label_52:
;
#line 697
c_rt_lib0move(&___nl__im__29, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(39)));
#line 697
c_rt_lib0copy(&___nl__im__28, ___nl__im__29);
#line 698
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__im__5, &___nl__im__7, &___nl__im__6, ___nl__im__28, ___nl__int__4, (*___ref___int__3)));
#line 699
goto label_69;
#line 699
label_57:
;
#line 699
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(362)));
#line 699
c_rt_lib0copy(&___nl__im__30, ___nl__im__31);
#line 700
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__30));
#line 700
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__32));
#line 700
c_rt_lib0clear(&___nl__im__32);
#line 701
goto label_69;
#line 701
label_64:
;
#line 701
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(297)));
#line 701
c_rt_lib0copy(&___nl__im__33, ___nl__im__34);
#line 702
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_add(___nl__im__7, ___nl__im__33));
#line 703
goto label_69;
#line 703
label_69:
;
#line 703
c_rt_lib0clear(&___nl__im__16);
#line 704
___nl__int__17 = ___nl__int__17 + ___nl__int__18;
#line 704
goto label_23;
#line 704
label_73:
;
#line 705
___nl__int__35 = 1;
#line 705
(*___ref___int__3) = (*___ref___int__3) + ___nl__int__35;
#line 705
//clear ___nl__int__35;
#line 706
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 706
c_rt_lib0move(&___nl__im__39,___get_global_string_const(518));
#line 706
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__39));
#line 706
c_rt_lib0clear(&___nl__im__38);
#line 706
c_rt_lib0clear(&___nl__im__39);
#line 706
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__6));
#line 706
c_rt_lib0clear(&___nl__im__37);
#line 706
c_rt_lib0clear(&___nl__im__0);
#line 706
c_rt_lib0clear(&___nl__im__1);
#line 706
c_rt_lib0clear(&___nl__im__2);
#line 706
//clear ___nl__int__4;
#line 706
c_rt_lib0clear(&___nl__im__5);
#line 706
c_rt_lib0clear(&___nl__im__6);
#line 706
c_rt_lib0clear(&___nl__im__7);
#line 706
c_rt_lib0clear(&___nl__im__16);
#line 706
//clear ___nl__int__17;
#line 706
//clear ___nl__int__18;
#line 706
//clear ___nl__int__19;
#line 706
//clear ___nl__bool__20;
#line 706
c_rt_lib0clear(&___nl__im__21);
#line 706
//clear ___nl__bool__26;
#line 706
c_rt_lib0clear(&___nl__im__27);
#line 706
c_rt_lib0clear(&___nl__im__28);
#line 706
c_rt_lib0clear(&___nl__im__29);
#line 706
c_rt_lib0clear(&___nl__im__30);
#line 706
c_rt_lib0clear(&___nl__im__31);
#line 706
c_rt_lib0clear(&___nl__im__33);
#line 706
c_rt_lib0clear(&___nl__im__34);
#line 706
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
#line 710
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(0));
#line 711
___nl__int__5 = 0;
#line 711
___nl__int__6 = 1;
#line 711
___nl__int__7 = c_rt_lib0array_len(___nl__im__2);
#line 711
label_4:
;
#line 711
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 711
if(___nl__bool__8){ goto label_15;}
#line 711
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__2, ___nl__int__5));
#line 711
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 712
c_rt_lib0move(&___nl__im__10, generator_js_priv0get_register_value(___nl__im__4));
#line 712
c_rt_lib0array_push(&___nl__im__3, ___nl__im__10);
#line 712
c_rt_lib0clear(&___nl__im__10);
#line 712
c_rt_lib0clear(&___nl__im__4);
#line 713
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 713
goto label_4;
#line 713
label_15:
;
#line 714
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_namespace_name());
#line 714
c_rt_lib0move(&___nl__im__19,___get_global_string_const(123));
#line 714
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 714
c_rt_lib0clear(&___nl__im__18);
#line 714
c_rt_lib0clear(&___nl__im__19);
#line 714
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__0));
#line 714
c_rt_lib0clear(&___nl__im__17);
#line 714
c_rt_lib0move(&___nl__im__20,___get_global_string_const(123));
#line 714
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__20));
#line 714
c_rt_lib0clear(&___nl__im__16);
#line 714
c_rt_lib0clear(&___nl__im__20);
#line 714
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__1));
#line 714
c_rt_lib0clear(&___nl__im__15);
#line 714
c_rt_lib0move(&___nl__im__21,___get_global_string_const(469));
#line 714
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__21));
#line 714
c_rt_lib0clear(&___nl__im__14);
#line 714
c_rt_lib0clear(&___nl__im__21);
#line 714
c_rt_lib0move(&___nl__im__23,___get_global_string_const(343));
#line 714
c_rt_lib0move(&___nl__im__22, array0join(___nl__im__23, ___nl__im__3));
#line 714
c_rt_lib0clear(&___nl__im__23);
#line 714
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__22));
#line 714
c_rt_lib0clear(&___nl__im__13);
#line 714
c_rt_lib0clear(&___nl__im__22);
#line 714
c_rt_lib0move(&___nl__im__24,___get_global_string_const(336));
#line 714
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__24));
#line 714
c_rt_lib0clear(&___nl__im__12);
#line 714
c_rt_lib0clear(&___nl__im__24);
#line 714
c_rt_lib0clear(&___nl__im__0);
#line 714
c_rt_lib0clear(&___nl__im__1);
#line 714
c_rt_lib0clear(&___nl__im__2);
#line 714
c_rt_lib0clear(&___nl__im__3);
#line 714
c_rt_lib0clear(&___nl__im__4);
#line 714
//clear ___nl__int__5;
#line 714
//clear ___nl__int__6;
#line 714
//clear ___nl__int__7;
#line 714
//clear ___nl__bool__8;
#line 714
c_rt_lib0clear(&___nl__im__9);
#line 714
return ___nl__im__11;
#line 714
c_rt_lib0clear(&___nl__im__0);
#line 714
c_rt_lib0clear(&___nl__im__1);
#line 714
c_rt_lib0clear(&___nl__im__2);
#line 714
c_rt_lib0clear(&___nl__im__3);
#line 714
c_rt_lib0clear(&___nl__im__4);
#line 714
//clear ___nl__int__5;
#line 714
//clear ___nl__int__6;
#line 714
//clear ___nl__int__7;
#line 714
//clear ___nl__bool__8;
#line 714
c_rt_lib0clear(&___nl__im__9);
#line 714
c_rt_lib0clear(&___nl__im__11);
#line 714
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
#line 718
c_rt_lib0move(&___nl__im__3,___get_global_string_const(142));
#line 718
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 718
c_rt_lib0clear(&___nl__im__3);
#line 718
c_rt_lib0move(&___nl__im__4,___get_global_string_const(814));
#line 718
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 718
c_rt_lib0clear(&___nl__im__2);
#line 718
c_rt_lib0clear(&___nl__im__4);
#line 719
___nl__int__6 = 0;
#line 719
___nl__int__7 = 1;
#line 719
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 719
label_10:
;
#line 719
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 719
if(___nl__bool__9){ goto label_25;}
#line 719
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 719
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 719
c_rt_lib0move(&___nl__im__12, generator_js_priv0get_const_value(___nl__im__5));
#line 719
c_rt_lib0move(&___nl__im__13,___get_global_string_const(328));
#line 719
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 719
c_rt_lib0clear(&___nl__im__12);
#line 719
c_rt_lib0clear(&___nl__im__13);
#line 719
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__11));
#line 719
c_rt_lib0clear(&___nl__im__11);
#line 719
c_rt_lib0clear(&___nl__im__5);
#line 719
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 719
goto label_10;
#line 719
label_25:
;
#line 720
c_rt_lib0move(&___nl__im__15,___get_global_string_const(510));
#line 720
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__1, ___nl__im__15));
#line 720
c_rt_lib0clear(&___nl__im__15);
#line 720
c_rt_lib0clear(&___nl__im__0);
#line 720
c_rt_lib0clear(&___nl__im__1);
#line 720
c_rt_lib0clear(&___nl__im__5);
#line 720
//clear ___nl__int__6;
#line 720
//clear ___nl__int__7;
#line 720
//clear ___nl__int__8;
#line 720
//clear ___nl__bool__9;
#line 720
c_rt_lib0clear(&___nl__im__10);
#line 720
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
#line 724
c_rt_lib0move(&___nl__im__3,___get_global_string_const(143));
#line 724
c_rt_lib0move(&___nl__im__2, generator_js_priv0imm_call(___nl__im__3));
#line 724
c_rt_lib0clear(&___nl__im__3);
#line 724
c_rt_lib0move(&___nl__im__4,___get_global_string_const(823));
#line 724
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__4));
#line 724
c_rt_lib0clear(&___nl__im__2);
#line 724
c_rt_lib0clear(&___nl__im__4);
#line 725
c_rt_lib0move(&___nl__im__8, c_rt_lib0init_iter(___nl__im__0));
#line 725
label_8:
;
#line 725
___nl__bool__6 = c_rt_lib0is_end_hash(___nl__im__8);
#line 725
if(___nl__bool__6){ goto label_34;}
#line 725
c_rt_lib0move(&___nl__im__5, c_rt_lib0get_key_iter(___nl__im__8));
#line 725
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__5));
#line 725
c_rt_lib0move(&___nl__im__13,___get_global_string_const(36));
#line 725
c_rt_lib0move(&___nl__im__14, generator_js_priv0escape_string(___nl__im__5));
#line 725
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 725
c_rt_lib0clear(&___nl__im__13);
#line 725
c_rt_lib0clear(&___nl__im__14);
#line 725
c_rt_lib0move(&___nl__im__15,___get_global_string_const(540));
#line 725
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__15));
#line 725
c_rt_lib0clear(&___nl__im__12);
#line 725
c_rt_lib0clear(&___nl__im__15);
#line 725
c_rt_lib0move(&___nl__im__16, generator_js_priv0get_const_value(___nl__im__7));
#line 725
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__16));
#line 725
c_rt_lib0clear(&___nl__im__11);
#line 725
c_rt_lib0clear(&___nl__im__16);
#line 725
c_rt_lib0move(&___nl__im__17,___get_global_string_const(328));
#line 725
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 725
c_rt_lib0clear(&___nl__im__10);
#line 725
c_rt_lib0clear(&___nl__im__17);
#line 725
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__9));
#line 725
c_rt_lib0clear(&___nl__im__9);
#line 725
c_rt_lib0move(&___nl__im__8, c_rt_lib0next_iter(___nl__im__8));
#line 725
goto label_8;
#line 725
label_34:
;
#line 726
c_rt_lib0move(&___nl__im__19,___get_global_string_const(824));
#line 726
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__1, ___nl__im__19));
#line 726
c_rt_lib0clear(&___nl__im__19);
#line 726
c_rt_lib0clear(&___nl__im__0);
#line 726
c_rt_lib0clear(&___nl__im__1);
#line 726
c_rt_lib0clear(&___nl__im__5);
#line 726
//clear ___nl__bool__6;
#line 726
c_rt_lib0clear(&___nl__im__7);
#line 726
c_rt_lib0clear(&___nl__im__8);
#line 726
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
#line 730
c_rt_lib0move(&___nl__im__2, ov0has_value(___nl__im__0));
#line 730
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 730
c_rt_lib0clear(&___nl__im__2);
#line 730
___nl__bool__1 = !___nl__bool__1;
#line 730
if(___nl__bool__1){ goto label_36;}
#line 731
c_rt_lib0move(&___nl__im__9,___get_global_string_const(825));
#line 731
c_rt_lib0move(&___nl__im__8, generator_js_priv0imm_call(___nl__im__9));
#line 731
c_rt_lib0clear(&___nl__im__9);
#line 731
c_rt_lib0move(&___nl__im__10,___get_global_string_const(469));
#line 731
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 731
c_rt_lib0clear(&___nl__im__8);
#line 731
c_rt_lib0clear(&___nl__im__10);
#line 731
c_rt_lib0move(&___nl__im__12, ov0get_element(___nl__im__0));
#line 731
c_rt_lib0move(&___nl__im__11, generator_js_priv0escape_string(___nl__im__12));
#line 731
c_rt_lib0clear(&___nl__im__12);
#line 731
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 731
c_rt_lib0clear(&___nl__im__7);
#line 731
c_rt_lib0clear(&___nl__im__11);
#line 731
c_rt_lib0move(&___nl__im__13,___get_global_string_const(343));
#line 731
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__13));
#line 731
c_rt_lib0clear(&___nl__im__6);
#line 731
c_rt_lib0clear(&___nl__im__13);
#line 732
c_rt_lib0move(&___nl__im__15, ov0get_value(___nl__im__0));
#line 732
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_const_value(___nl__im__15));
#line 732
c_rt_lib0clear(&___nl__im__15);
#line 732
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__14));
#line 732
c_rt_lib0clear(&___nl__im__5);
#line 732
c_rt_lib0clear(&___nl__im__14);
#line 732
c_rt_lib0move(&___nl__im__16,___get_global_string_const(336));
#line 732
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__16));
#line 732
c_rt_lib0clear(&___nl__im__4);
#line 732
c_rt_lib0clear(&___nl__im__16);
#line 732
c_rt_lib0clear(&___nl__im__0);
#line 732
//clear ___nl__bool__1;
#line 732
return ___nl__im__3;
#line 733
goto label_59;
#line 733
label_36:
;
#line 734
c_rt_lib0move(&___nl__im__21,___get_global_string_const(825));
#line 734
c_rt_lib0move(&___nl__im__20, generator_js_priv0imm_call(___nl__im__21));
#line 734
c_rt_lib0clear(&___nl__im__21);
#line 734
c_rt_lib0move(&___nl__im__22,___get_global_string_const(469));
#line 734
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__22));
#line 734
c_rt_lib0clear(&___nl__im__20);
#line 734
c_rt_lib0clear(&___nl__im__22);
#line 734
c_rt_lib0move(&___nl__im__24, ov0get_element(___nl__im__0));
#line 734
c_rt_lib0move(&___nl__im__23, generator_js_priv0escape_string(___nl__im__24));
#line 734
c_rt_lib0clear(&___nl__im__24);
#line 734
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 734
c_rt_lib0clear(&___nl__im__19);
#line 734
c_rt_lib0clear(&___nl__im__23);
#line 734
c_rt_lib0move(&___nl__im__25,___get_global_string_const(826));
#line 734
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 734
c_rt_lib0clear(&___nl__im__18);
#line 734
c_rt_lib0clear(&___nl__im__25);
#line 734
c_rt_lib0clear(&___nl__im__0);
#line 734
//clear ___nl__bool__1;
#line 734
c_rt_lib0clear(&___nl__im__3);
#line 734
return ___nl__im__17;
#line 735
goto label_59;
#line 735
label_59:
;
#line 735
//clear ___nl__bool__1;
#line 735
c_rt_lib0clear(&___nl__im__3);
#line 735
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
#line 739
___nl__bool__1 = nl0is_int(___nl__im__0);
#line 739
___nl__bool__1 = !___nl__bool__1;
#line 739
if(___nl__bool__1){ goto label_20;}
#line 740
c_rt_lib0move(&___nl__im__6,___get_global_string_const(419));
#line 740
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 740
c_rt_lib0clear(&___nl__im__6);
#line 740
c_rt_lib0move(&___nl__im__7,___get_global_string_const(469));
#line 740
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 740
c_rt_lib0clear(&___nl__im__5);
#line 740
c_rt_lib0clear(&___nl__im__7);
#line 740
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__0));
#line 740
c_rt_lib0clear(&___nl__im__4);
#line 740
c_rt_lib0move(&___nl__im__8,___get_global_string_const(336));
#line 740
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 740
c_rt_lib0clear(&___nl__im__3);
#line 740
c_rt_lib0clear(&___nl__im__8);
#line 740
c_rt_lib0clear(&___nl__im__0);
#line 740
//clear ___nl__bool__1;
#line 740
return ___nl__im__2;
#line 741
goto label_130;
#line 741
label_20:
;
#line 741
___nl__bool__1 = nl0is_string(___nl__im__0);
#line 741
___nl__bool__1 = !___nl__bool__1;
#line 741
if(___nl__bool__1){ goto label_44;}
#line 742
c_rt_lib0move(&___nl__im__13,___get_global_string_const(297));
#line 742
c_rt_lib0move(&___nl__im__12, generator_js_priv0imm_call(___nl__im__13));
#line 742
c_rt_lib0clear(&___nl__im__13);
#line 742
c_rt_lib0move(&___nl__im__14,___get_global_string_const(469));
#line 742
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 742
c_rt_lib0clear(&___nl__im__12);
#line 742
c_rt_lib0clear(&___nl__im__14);
#line 742
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__0));
#line 742
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__15));
#line 742
c_rt_lib0clear(&___nl__im__11);
#line 742
c_rt_lib0clear(&___nl__im__15);
#line 742
c_rt_lib0move(&___nl__im__16,___get_global_string_const(336));
#line 742
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__16));
#line 742
c_rt_lib0clear(&___nl__im__10);
#line 742
c_rt_lib0clear(&___nl__im__16);
#line 742
c_rt_lib0clear(&___nl__im__0);
#line 742
//clear ___nl__bool__1;
#line 742
c_rt_lib0clear(&___nl__im__2);
#line 742
return ___nl__im__9;
#line 743
goto label_130;
#line 743
label_44:
;
#line 743
___nl__bool__1 = nl0is_array(___nl__im__0);
#line 743
___nl__bool__1 = !___nl__bool__1;
#line 743
if(___nl__bool__1){ goto label_55;}
#line 744
c_rt_lib0move(&___nl__im__17, generator_js_priv0get_const_arr(___nl__im__0));
#line 744
c_rt_lib0clear(&___nl__im__0);
#line 744
//clear ___nl__bool__1;
#line 744
c_rt_lib0clear(&___nl__im__2);
#line 744
c_rt_lib0clear(&___nl__im__9);
#line 744
return ___nl__im__17;
#line 745
goto label_130;
#line 745
label_55:
;
#line 745
___nl__bool__1 = nl0is_hash(___nl__im__0);
#line 745
___nl__bool__1 = !___nl__bool__1;
#line 745
if(___nl__bool__1){ goto label_67;}
#line 746
c_rt_lib0move(&___nl__im__18, generator_js_priv0get_const_hash(___nl__im__0));
#line 746
c_rt_lib0clear(&___nl__im__0);
#line 746
//clear ___nl__bool__1;
#line 746
c_rt_lib0clear(&___nl__im__2);
#line 746
c_rt_lib0clear(&___nl__im__9);
#line 746
c_rt_lib0clear(&___nl__im__17);
#line 746
return ___nl__im__18;
#line 747
goto label_130;
#line 747
label_67:
;
#line 747
___nl__bool__1 = nl0is_bool(___nl__im__0);
#line 747
___nl__bool__1 = !___nl__bool__1;
#line 747
if(___nl__bool__1){ goto label_113;}
#line 748
___nl__bool__19 = c_rt_lib0check_true_native(___nl__im__0);
#line 748
___nl__bool__19 = !___nl__bool__19;
#line 748
if(___nl__bool__19){ goto label_90;}
#line 749
c_rt_lib0move(&___nl__im__21,___get_global_string_const(286));
#line 749
c_rt_lib0move(&___nl__im__22,___get_global_string_const(827));
#line 749
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 749
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_int_call_sim(___nl__im__21, ___nl__im__22, ___nl__im__23));
#line 749
c_rt_lib0clear(&___nl__im__21);
#line 749
c_rt_lib0clear(&___nl__im__22);
#line 749
c_rt_lib0clear(&___nl__im__23);
#line 749
c_rt_lib0clear(&___nl__im__0);
#line 749
//clear ___nl__bool__1;
#line 749
c_rt_lib0clear(&___nl__im__2);
#line 749
c_rt_lib0clear(&___nl__im__9);
#line 749
c_rt_lib0clear(&___nl__im__17);
#line 749
c_rt_lib0clear(&___nl__im__18);
#line 749
//clear ___nl__bool__19;
#line 749
return ___nl__im__20;
#line 750
goto label_108;
#line 750
label_90:
;
#line 751
c_rt_lib0move(&___nl__im__25,___get_global_string_const(286));
#line 751
c_rt_lib0move(&___nl__im__26,___get_global_string_const(828));
#line 751
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 751
c_rt_lib0move(&___nl__im__24, generator_js_priv0get_int_call_sim(___nl__im__25, ___nl__im__26, ___nl__im__27));
#line 751
c_rt_lib0clear(&___nl__im__25);
#line 751
c_rt_lib0clear(&___nl__im__26);
#line 751
c_rt_lib0clear(&___nl__im__27);
#line 751
c_rt_lib0clear(&___nl__im__0);
#line 751
//clear ___nl__bool__1;
#line 751
c_rt_lib0clear(&___nl__im__2);
#line 751
c_rt_lib0clear(&___nl__im__9);
#line 751
c_rt_lib0clear(&___nl__im__17);
#line 751
c_rt_lib0clear(&___nl__im__18);
#line 751
//clear ___nl__bool__19;
#line 751
c_rt_lib0clear(&___nl__im__20);
#line 751
return ___nl__im__24;
#line 752
goto label_108;
#line 752
label_108:
;
#line 752
//clear ___nl__bool__19;
#line 752
c_rt_lib0clear(&___nl__im__20);
#line 752
c_rt_lib0clear(&___nl__im__24);
#line 753
goto label_130;
#line 753
label_113:
;
#line 753
___nl__bool__1 = nl0is_variant(___nl__im__0);
#line 753
___nl__bool__1 = !___nl__bool__1;
#line 753
if(___nl__bool__1){ goto label_126;}
#line 754
c_rt_lib0move(&___nl__im__28, generator_js_priv0get_const_ov(___nl__im__0));
#line 754
c_rt_lib0clear(&___nl__im__0);
#line 754
//clear ___nl__bool__1;
#line 754
c_rt_lib0clear(&___nl__im__2);
#line 754
c_rt_lib0clear(&___nl__im__9);
#line 754
c_rt_lib0clear(&___nl__im__17);
#line 754
c_rt_lib0clear(&___nl__im__18);
#line 754
return ___nl__im__28;
#line 755
goto label_130;
#line 755
label_126:
;
#line 756
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 756
nl_die_arg(___nl__im__29);
#line 757
goto label_130;
#line 757
label_130:
;
#line 757
//clear ___nl__bool__1;
#line 757
c_rt_lib0clear(&___nl__im__2);
#line 757
c_rt_lib0clear(&___nl__im__9);
#line 757
c_rt_lib0clear(&___nl__im__17);
#line 757
c_rt_lib0clear(&___nl__im__18);
#line 757
c_rt_lib0clear(&___nl__im__28);
#line 757
c_rt_lib0clear(&___nl__im__29);
#line 757
c_rt_lib0clear(&___nl__im__0);
#line 757
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
#line 761
c_rt_lib0move(&___nl__im__3,___get_global_string_const(829));
#line 761
c_rt_lib0move(&___nl__string__4, c_rt_lib0int_to_string(___nl__int__0));
#line 761
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__string__4));
#line 761
c_rt_lib0clear(&___nl__im__3);
#line 761
c_rt_lib0clear(&___nl__string__4);
#line 761
c_rt_lib0move(&___nl__im__5,___get_global_string_const(830));
#line 761
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 761
c_rt_lib0clear(&___nl__im__2);
#line 761
c_rt_lib0clear(&___nl__im__5);
#line 761
//clear ___nl__int__0;
#line 761
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
#line 766
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 767
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(146));
#line 767
___nl__bool__3 = !___nl__bool__3;
#line 767
if(___nl__bool__3){ goto label_14;}
#line 768
c_rt_lib0move(&___nl__im__6,___get_global_string_const(143));
#line 768
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 768
c_rt_lib0clear(&___nl__im__6);
#line 768
c_rt_lib0move(&___nl__im__7,___get_global_string_const(823));
#line 768
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 768
c_rt_lib0clear(&___nl__im__5);
#line 768
c_rt_lib0clear(&___nl__im__7);
#line 768
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 768
c_rt_lib0clear(&___nl__im__4);
#line 769
goto label_26;
#line 769
label_14:
;
#line 769
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(143));
#line 769
___nl__bool__3 = !___nl__bool__3;
#line 769
if(___nl__bool__3){ goto label_22;}
#line 770
c_rt_lib0move(&___nl__im__8,___get_global_string_const(320));
#line 770
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__8));
#line 770
c_rt_lib0clear(&___nl__im__8);
#line 771
goto label_26;
#line 771
label_22:
;
#line 772
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 772
nl_die_arg(___nl__im__9);
#line 773
goto label_26;
#line 773
label_26:
;
#line 773
//clear ___nl__bool__3;
#line 773
c_rt_lib0clear(&___nl__im__9);
#line 774
___nl__int__11 = 0;
#line 774
___nl__int__12 = 1;
#line 774
___nl__int__13 = c_rt_lib0array_len(___nl__im__0);
#line 774
label_32:
;
#line 774
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 774
if(___nl__bool__14){ goto label_59;}
#line 774
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__0, ___nl__int__11));
#line 774
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 774
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(587)));
#line 774
c_rt_lib0move(&___nl__im__19, generator_js_priv0escape_string(___nl__im__20));
#line 774
c_rt_lib0clear(&___nl__im__20);
#line 774
c_rt_lib0move(&___nl__im__21,___get_global_string_const(540));
#line 774
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 774
c_rt_lib0clear(&___nl__im__19);
#line 774
c_rt_lib0clear(&___nl__im__21);
#line 774
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(245)));
#line 774
c_rt_lib0move(&___nl__im__22, generator_js_priv0get_register_value(___nl__im__23));
#line 774
c_rt_lib0clear(&___nl__im__23);
#line 774
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__22));
#line 774
c_rt_lib0clear(&___nl__im__18);
#line 774
c_rt_lib0clear(&___nl__im__22);
#line 774
c_rt_lib0move(&___nl__im__24,___get_global_string_const(328));
#line 774
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__24));
#line 774
c_rt_lib0clear(&___nl__im__17);
#line 774
c_rt_lib0clear(&___nl__im__24);
#line 774
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 774
c_rt_lib0clear(&___nl__im__16);
#line 774
c_rt_lib0clear(&___nl__im__10);
#line 774
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 774
goto label_32;
#line 774
label_59:
;
#line 775
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(146));
#line 775
___nl__bool__25 = !___nl__bool__25;
#line 775
if(___nl__bool__25){ goto label_67;}
#line 776
c_rt_lib0move(&___nl__im__26,___get_global_string_const(824));
#line 776
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__26));
#line 776
c_rt_lib0clear(&___nl__im__26);
#line 777
goto label_79;
#line 777
label_67:
;
#line 777
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(143));
#line 777
___nl__bool__25 = !___nl__bool__25;
#line 777
if(___nl__bool__25){ goto label_75;}
#line 778
c_rt_lib0move(&___nl__im__27,___get_global_string_const(321));
#line 778
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 778
c_rt_lib0clear(&___nl__im__27);
#line 779
goto label_79;
#line 779
label_75:
;
#line 780
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 780
nl_die_arg(___nl__im__28);
#line 781
goto label_79;
#line 781
label_79:
;
#line 781
//clear ___nl__bool__25;
#line 781
c_rt_lib0clear(&___nl__im__28);
#line 782
c_rt_lib0clear(&___nl__im__0);
#line 782
c_rt_lib0clear(&___nl__im__1);
#line 782
c_rt_lib0clear(&___nl__im__10);
#line 782
//clear ___nl__int__11;
#line 782
//clear ___nl__int__12;
#line 782
//clear ___nl__int__13;
#line 782
//clear ___nl__bool__14;
#line 782
c_rt_lib0clear(&___nl__im__15);
#line 782
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
#line 786
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 787
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(146));
#line 787
___nl__bool__3 = !___nl__bool__3;
#line 787
if(___nl__bool__3){ goto label_36;}
#line 788
c_rt_lib0move(&___nl__im__6,___get_global_string_const(143));
#line 788
c_rt_lib0move(&___nl__im__5, generator_js_priv0imm_call(___nl__im__6));
#line 788
c_rt_lib0clear(&___nl__im__6);
#line 788
c_rt_lib0move(&___nl__im__7,___get_global_string_const(823));
#line 788
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 788
c_rt_lib0clear(&___nl__im__5);
#line 788
c_rt_lib0clear(&___nl__im__7);
#line 788
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__4));
#line 788
c_rt_lib0clear(&___nl__im__4);
#line 789
___nl__int__9 = 0;
#line 789
___nl__int__10 = 1;
#line 789
___nl__int__11 = c_rt_lib0array_len(___nl__im__0);
#line 789
label_16:
;
#line 789
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 789
if(___nl__bool__12){ goto label_31;}
#line 789
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__0, ___nl__int__9));
#line 789
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 789
c_rt_lib0move(&___nl__im__15, generator_js_priv0escape_string(___nl__im__8));
#line 789
c_rt_lib0move(&___nl__im__16,___get_global_string_const(831));
#line 789
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 789
c_rt_lib0clear(&___nl__im__15);
#line 789
c_rt_lib0clear(&___nl__im__16);
#line 789
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__14));
#line 789
c_rt_lib0clear(&___nl__im__14);
#line 789
c_rt_lib0clear(&___nl__im__8);
#line 789
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 789
goto label_16;
#line 789
label_31:
;
#line 790
c_rt_lib0move(&___nl__im__17,___get_global_string_const(824));
#line 790
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__17));
#line 790
c_rt_lib0clear(&___nl__im__17);
#line 791
goto label_70;
#line 791
label_36:
;
#line 791
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(569));
#line 791
___nl__bool__3 = !___nl__bool__3;
#line 791
if(___nl__bool__3){ goto label_66;}
#line 792
c_rt_lib0move(&___nl__im__18,___get_global_string_const(320));
#line 792
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 792
c_rt_lib0clear(&___nl__im__18);
#line 793
___nl__int__20 = 0;
#line 793
___nl__int__21 = 1;
#line 793
___nl__int__22 = c_rt_lib0array_len(___nl__im__0);
#line 793
label_46:
;
#line 793
___nl__bool__23 = ___nl__int__20 >= ___nl__int__22;
#line 793
if(___nl__bool__23){ goto label_61;}
#line 793
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get(___nl__im__0, ___nl__int__20));
#line 793
c_rt_lib0copy(&___nl__im__19, ___nl__im__24);
#line 793
c_rt_lib0move(&___nl__im__26, generator_js_priv0escape_string(___nl__im__19));
#line 793
c_rt_lib0move(&___nl__im__27,___get_global_string_const(832));
#line 793
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 793
c_rt_lib0clear(&___nl__im__26);
#line 793
c_rt_lib0clear(&___nl__im__27);
#line 793
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 793
c_rt_lib0clear(&___nl__im__25);
#line 793
c_rt_lib0clear(&___nl__im__19);
#line 793
___nl__int__20 = ___nl__int__20 + ___nl__int__21;
#line 793
goto label_46;
#line 793
label_61:
;
#line 794
c_rt_lib0move(&___nl__im__28,___get_global_string_const(321));
#line 794
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 794
c_rt_lib0clear(&___nl__im__28);
#line 795
goto label_70;
#line 795
label_66:
;
#line 796
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 796
nl_die_arg(___nl__im__29);
#line 797
goto label_70;
#line 797
label_70:
;
#line 797
//clear ___nl__bool__3;
#line 797
c_rt_lib0clear(&___nl__im__8);
#line 797
//clear ___nl__int__9;
#line 797
//clear ___nl__int__10;
#line 797
//clear ___nl__int__11;
#line 797
//clear ___nl__bool__12;
#line 797
c_rt_lib0clear(&___nl__im__13);
#line 797
c_rt_lib0clear(&___nl__im__19);
#line 797
//clear ___nl__int__20;
#line 797
//clear ___nl__int__21;
#line 797
//clear ___nl__int__22;
#line 797
//clear ___nl__bool__23;
#line 797
c_rt_lib0clear(&___nl__im__24);
#line 797
c_rt_lib0clear(&___nl__im__29);
#line 798
c_rt_lib0clear(&___nl__im__0);
#line 798
c_rt_lib0clear(&___nl__im__1);
#line 798
return ___nl__im__2;
return NULL;

}

ImmT  generator_js_priv0get_register(nlasm0reg_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
#line 802
c_rt_lib0move(&___nl__im__1, generator_js_priv0reg_suffix(___nl__im__0));
#line 802
c_rt_lib0clear(&___nl__im__0);
#line 802
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
#line 806
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 807
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(367)));
#line 807
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(241));
#line 807
if(___nl__bool__3){ goto label_9;}
#line 808
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(434));
#line 808
if(___nl__bool__3){ goto label_11;}
#line 808
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 808
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 808
nl_die_arg(___nl__im__4);
#line 807
label_9:
;
#line 808
goto label_16;
#line 808
label_11:
;
#line 809
c_rt_lib0move(&___nl__im__5,___get_global_string_const(773));
#line 809
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__5));
#line 809
c_rt_lib0clear(&___nl__im__5);
#line 810
goto label_16;
#line 810
label_16:
;
#line 811
c_rt_lib0clear(&___nl__im__0);
#line 811
c_rt_lib0clear(&___nl__im__2);
#line 811
//clear ___nl__bool__3;
#line 811
c_rt_lib0clear(&___nl__im__4);
#line 811
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
#line 815
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register(___nl__im__0));
#line 816
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(367)));
#line 816
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(241));
#line 816
if(___nl__bool__3){ goto label_9;}
#line 818
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(434));
#line 818
if(___nl__bool__3){ goto label_18;}
#line 818
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 818
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 818
nl_die_arg(___nl__im__4);
#line 816
label_9:
;
#line 817
c_rt_lib0move(&___nl__im__6,___get_global_string_const(833));
#line 817
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 817
c_rt_lib0clear(&___nl__im__6);
#line 817
c_rt_lib0move(&___nl__im__7,___get_global_string_const(321));
#line 817
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 817
c_rt_lib0clear(&___nl__im__5);
#line 817
c_rt_lib0clear(&___nl__im__7);
#line 818
goto label_20;
#line 818
label_18:
;
#line 819
goto label_20;
#line 819
label_20:
;
#line 820
c_rt_lib0clear(&___nl__im__0);
#line 820
c_rt_lib0clear(&___nl__im__2);
#line 820
//clear ___nl__bool__3;
#line 820
c_rt_lib0clear(&___nl__im__4);
#line 820
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
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
#line 825
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(110)));
#line 825
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(146));
#line 825
if(___nl__bool__3){ goto label_20;}
#line 827
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(419));
#line 827
if(___nl__bool__3){ goto label_23;}
#line 829
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(33));
#line 829
if(___nl__bool__3){ goto label_26;}
#line 831
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(420));
#line 831
if(___nl__bool__3){ goto label_29;}
#line 833
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(569));
#line 833
if(___nl__bool__3){ goto label_32;}
#line 835
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(142));
#line 835
if(___nl__bool__3){ goto label_37;}
#line 837
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(573));
#line 837
if(___nl__bool__3){ goto label_42;}
#line 839
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(143));
#line 839
if(___nl__bool__3){ goto label_47;}
#line 839
c_rt_lib0move(&___nl__im__4,___get_global_string_const(15));
#line 839
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 839
nl_die_arg(___nl__im__4);
#line 825
label_20:
;
#line 826
c_rt_lib0move(&___nl__im__1,___get_global_string_const(146));
#line 827
goto label_52;
#line 827
label_23:
;
#line 828
c_rt_lib0move(&___nl__im__1,___get_global_string_const(419));
#line 829
goto label_52;
#line 829
label_26:
;
#line 830
c_rt_lib0move(&___nl__im__1,___get_global_string_const(33));
#line 831
goto label_52;
#line 831
label_29:
;
#line 832
c_rt_lib0move(&___nl__im__1,___get_global_string_const(420));
#line 833
goto label_52;
#line 833
label_32:
;
#line 833
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(569)));
#line 833
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 834
c_rt_lib0move(&___nl__im__1,___get_global_string_const(569));
#line 835
goto label_52;
#line 835
label_37:
;
#line 835
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(142)));
#line 835
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 836
c_rt_lib0move(&___nl__im__1,___get_global_string_const(142));
#line 837
goto label_52;
#line 837
label_42:
;
#line 837
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(573)));
#line 837
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 838
c_rt_lib0move(&___nl__im__1,___get_global_string_const(517));
#line 839
goto label_52;
#line 839
label_47:
;
#line 839
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(143)));
#line 839
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 840
c_rt_lib0move(&___nl__im__1,___get_global_string_const(143));
#line 841
goto label_52;
#line 841
label_52:
;
#line 842
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(367)));
#line 842
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(241));
#line 842
if(___nl__bool__14){ goto label_61;}
#line 843
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(434));
#line 843
if(___nl__bool__14){ goto label_63;}
#line 843
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 843
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 843
nl_die_arg(___nl__im__15);
#line 842
label_61:
;
#line 843
goto label_68;
#line 843
label_63:
;
#line 844
c_rt_lib0move(&___nl__im__16,___get_global_string_const(653));
#line 844
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 844
c_rt_lib0clear(&___nl__im__16);
#line 845
goto label_68;
#line 845
label_68:
;
#line 846
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(240)));
#line 846
___nl__int__18 = getIntFromImm(___nl__im__19);
#line 846
c_rt_lib0clear(&___nl__im__19);
#line 846
c_rt_lib0move(&___nl__im__17, ptd0int_to_string(___nl__int__18));
#line 846
//clear ___nl__int__18;
#line 846
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 846
c_rt_lib0clear(&___nl__im__17);
#line 847
c_rt_lib0clear(&___nl__im__0);
#line 847
c_rt_lib0clear(&___nl__im__2);
#line 847
//clear ___nl__bool__3;
#line 847
c_rt_lib0clear(&___nl__im__4);
#line 847
c_rt_lib0clear(&___nl__im__5);
#line 847
c_rt_lib0clear(&___nl__im__6);
#line 847
c_rt_lib0clear(&___nl__im__7);
#line 847
c_rt_lib0clear(&___nl__im__8);
#line 847
c_rt_lib0clear(&___nl__im__9);
#line 847
c_rt_lib0clear(&___nl__im__10);
#line 847
c_rt_lib0clear(&___nl__im__11);
#line 847
c_rt_lib0clear(&___nl__im__12);
#line 847
c_rt_lib0clear(&___nl__im__13);
#line 847
//clear ___nl__bool__14;
#line 847
c_rt_lib0clear(&___nl__im__15);
#line 847
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
#line 852
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 852
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 852
c_rt_lib0clear(&___nl__im__2);
#line 852
___nl__bool__1 = !___nl__bool__1;
#line 852
if(___nl__bool__1){ goto label_10;}
#line 852
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 852
c_rt_lib0clear(&___nl__im__0);
#line 852
//clear ___nl__bool__1;
#line 852
return ___nl__im__3;
#line 852
goto label_10;
#line 852
label_10:
;
#line 852
//clear ___nl__bool__1;
#line 852
c_rt_lib0clear(&___nl__im__3);
#line 853
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register(___nl__im__0));
#line 853
c_rt_lib0move(&___nl__im__6,___get_global_string_const(756));
#line 853
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 853
c_rt_lib0clear(&___nl__im__5);
#line 853
c_rt_lib0clear(&___nl__im__6);
#line 853
c_rt_lib0clear(&___nl__im__0);
#line 853
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
#line 857
c_rt_lib0move(&___nl__im__2, nlasm0is_empty(___nl__im__0));
#line 857
___nl__bool__1 = c_rt_lib0check_true_native(___nl__im__2);
#line 857
c_rt_lib0clear(&___nl__im__2);
#line 857
___nl__bool__1 = !___nl__bool__1;
#line 857
if(___nl__bool__1){ goto label_10;}
#line 857
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 857
c_rt_lib0clear(&___nl__im__0);
#line 857
//clear ___nl__bool__1;
#line 857
return ___nl__im__3;
#line 857
goto label_10;
#line 857
label_10:
;
#line 857
//clear ___nl__bool__1;
#line 857
c_rt_lib0clear(&___nl__im__3);
#line 858
c_rt_lib0move(&___nl__im__5, generator_js_priv0get_register_value(___nl__im__0));
#line 858
c_rt_lib0move(&___nl__im__6,___get_global_string_const(756));
#line 858
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 858
c_rt_lib0clear(&___nl__im__5);
#line 858
c_rt_lib0clear(&___nl__im__6);
#line 858
c_rt_lib0clear(&___nl__im__0);
#line 858
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
#line 862
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 863
___nl__int__3 = 0;
#line 864
___nl__int__5 = 0;
#line 864
___nl__int__6 = 1;
#line 864
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 864
label_5:
;
#line 864
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 864
if(___nl__bool__8){ goto label_50;}
#line 864
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 864
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 865
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(369)));
#line 865
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(39));
#line 865
if(___nl__bool__11){ goto label_18;}
#line 867
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(245));
#line 867
if(___nl__bool__11){ goto label_41;}
#line 867
c_rt_lib0move(&___nl__im__12,___get_global_string_const(15));
#line 867
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 867
nl_die_arg(___nl__im__12);
#line 865
label_18:
;
#line 866
c_rt_lib0move(&___nl__im__17,___get_global_string_const(785));
#line 866
c_rt_lib0move(&___nl__string__18, c_rt_lib0int_to_string(___nl__int__3));
#line 866
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__string__18));
#line 866
c_rt_lib0clear(&___nl__im__17);
#line 866
c_rt_lib0clear(&___nl__string__18);
#line 866
c_rt_lib0move(&___nl__im__19,___get_global_string_const(834));
#line 866
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 866
c_rt_lib0clear(&___nl__im__16);
#line 866
c_rt_lib0clear(&___nl__im__19);
#line 866
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(482)));
#line 866
c_rt_lib0move(&___nl__im__20, generator_js_priv0get_register_value(___nl__im__21));
#line 866
c_rt_lib0clear(&___nl__im__21);
#line 866
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__20));
#line 866
c_rt_lib0clear(&___nl__im__15);
#line 866
c_rt_lib0clear(&___nl__im__20);
#line 866
c_rt_lib0move(&___nl__im__22,___get_global_string_const(454));
#line 866
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__22));
#line 866
c_rt_lib0clear(&___nl__im__14);
#line 866
c_rt_lib0clear(&___nl__im__22);
#line 866
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__13));
#line 866
c_rt_lib0clear(&___nl__im__13);
#line 867
goto label_43;
#line 867
label_41:
;
#line 868
goto label_43;
#line 868
label_43:
;
#line 869
___nl__int__23 = 1;
#line 869
___nl__int__3 = ___nl__int__3 + ___nl__int__23;
#line 869
//clear ___nl__int__23;
#line 869
c_rt_lib0clear(&___nl__im__4);
#line 870
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 870
goto label_5;
#line 870
label_50:
;
#line 871
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(245));
#line 871
if(___nl__bool__24){ goto label_58;}
#line 873
___nl__bool__24 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(366));
#line 873
if(___nl__bool__24){ goto label_91;}
#line 873
c_rt_lib0move(&___nl__im__25,___get_global_string_const(15));
#line 873
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__0));
#line 873
nl_die_arg(___nl__im__25);
#line 871
label_58:
;
#line 871
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(245)));
#line 871
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 872
c_rt_lib0move(&___nl__im__31,___get_global_string_const(520));
#line 872
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__2, ___nl__im__31));
#line 872
c_rt_lib0clear(&___nl__im__31);
#line 872
c_rt_lib0move(&___nl__im__32, generator_js_priv0get_register_value(___nl__im__26));
#line 872
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__32));
#line 872
c_rt_lib0clear(&___nl__im__30);
#line 872
c_rt_lib0clear(&___nl__im__32);
#line 872
c_rt_lib0move(&___nl__im__33,___get_global_string_const(454));
#line 872
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__33));
#line 872
c_rt_lib0clear(&___nl__im__29);
#line 872
c_rt_lib0clear(&___nl__im__33);
#line 872
c_rt_lib0clear(&___nl__im__0);
#line 872
c_rt_lib0clear(&___nl__im__1);
#line 872
c_rt_lib0clear(&___nl__im__2);
#line 872
//clear ___nl__int__3;
#line 872
c_rt_lib0clear(&___nl__im__4);
#line 872
//clear ___nl__int__5;
#line 872
//clear ___nl__int__6;
#line 872
//clear ___nl__int__7;
#line 872
//clear ___nl__bool__8;
#line 872
c_rt_lib0clear(&___nl__im__9);
#line 872
c_rt_lib0clear(&___nl__im__10);
#line 872
//clear ___nl__bool__11;
#line 872
c_rt_lib0clear(&___nl__im__12);
#line 872
//clear ___nl__bool__24;
#line 872
c_rt_lib0clear(&___nl__im__25);
#line 872
c_rt_lib0clear(&___nl__im__26);
#line 872
c_rt_lib0clear(&___nl__im__27);
#line 872
return ___nl__im__28;
#line 873
goto label_115;
#line 873
label_91:
;
#line 874
c_rt_lib0move(&___nl__im__35,___get_global_string_const(835));
#line 874
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__2, ___nl__im__35));
#line 874
c_rt_lib0clear(&___nl__im__35);
#line 874
c_rt_lib0clear(&___nl__im__0);
#line 874
c_rt_lib0clear(&___nl__im__1);
#line 874
c_rt_lib0clear(&___nl__im__2);
#line 874
//clear ___nl__int__3;
#line 874
c_rt_lib0clear(&___nl__im__4);
#line 874
//clear ___nl__int__5;
#line 874
//clear ___nl__int__6;
#line 874
//clear ___nl__int__7;
#line 874
//clear ___nl__bool__8;
#line 874
c_rt_lib0clear(&___nl__im__9);
#line 874
c_rt_lib0clear(&___nl__im__10);
#line 874
//clear ___nl__bool__11;
#line 874
c_rt_lib0clear(&___nl__im__12);
#line 874
//clear ___nl__bool__24;
#line 874
c_rt_lib0clear(&___nl__im__25);
#line 874
c_rt_lib0clear(&___nl__im__26);
#line 874
c_rt_lib0clear(&___nl__im__27);
#line 874
c_rt_lib0clear(&___nl__im__28);
#line 874
return ___nl__im__34;
#line 875
goto label_115;
#line 875
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
#line 879
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(244)));
#line 879
c_rt_lib0move(&___nl__im__1, generator_js_priv0get_register_value_to_assign(___nl__im__2));
#line 879
c_rt_lib0clear(&___nl__im__2);
#line 880
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(570)));
#line 880
c_rt_lib0move(&___nl__im__5,___get_global_string_const(379));
#line 880
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__5);
#line 880
c_rt_lib0clear(&___nl__im__4);
#line 880
c_rt_lib0clear(&___nl__im__5);
#line 880
___nl__bool__3 = !___nl__bool__3;
#line 880
if(___nl__bool__3){ goto label_24;}
#line 881
c_rt_lib0move(&___nl__im__8,___get_global_string_const(379));
#line 881
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 881
c_rt_lib0clear(&___nl__im__8);
#line 881
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 881
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_register_value(___nl__im__10));
#line 881
c_rt_lib0clear(&___nl__im__10);
#line 881
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 881
c_rt_lib0clear(&___nl__im__7);
#line 881
c_rt_lib0clear(&___nl__im__9);
#line 881
c_rt_lib0clear(&___nl__im__0);
#line 881
c_rt_lib0clear(&___nl__im__1);
#line 881
//clear ___nl__bool__3;
#line 881
return ___nl__im__6;
#line 882
goto label_40;
#line 882
label_24:
;
#line 883
c_rt_lib0move(&___nl__im__13,___get_global_string_const(381));
#line 883
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__1, ___nl__im__13));
#line 883
c_rt_lib0clear(&___nl__im__13);
#line 883
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(78)));
#line 883
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_register_value(___nl__im__15));
#line 883
c_rt_lib0clear(&___nl__im__15);
#line 883
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 883
c_rt_lib0clear(&___nl__im__12);
#line 883
c_rt_lib0clear(&___nl__im__14);
#line 883
c_rt_lib0clear(&___nl__im__0);
#line 883
c_rt_lib0clear(&___nl__im__1);
#line 883
//clear ___nl__bool__3;
#line 883
c_rt_lib0clear(&___nl__im__6);
#line 883
return ___nl__im__11;
#line 884
goto label_40;
#line 884
label_40:
;
#line 884
//clear ___nl__bool__3;
#line 884
c_rt_lib0clear(&___nl__im__6);
#line 884
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
#line 888
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(146));
#line 888
if(___nl__bool__2){ goto label_19;}
#line 890
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(419));
#line 890
if(___nl__bool__2){ goto label_25;}
#line 892
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 892
if(___nl__bool__2){ goto label_45;}
#line 894
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(420));
#line 894
if(___nl__bool__2){ goto label_64;}
#line 896
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(569));
#line 896
if(___nl__bool__2){ goto label_72;}
#line 898
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(142));
#line 898
if(___nl__bool__2){ goto label_78;}
#line 900
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(573));
#line 900
if(___nl__bool__2){ goto label_84;}
#line 902
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(143));
#line 902
if(___nl__bool__2){ goto label_90;}
#line 902
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 902
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 902
nl_die_arg(___nl__im__3);
#line 888
label_19:
;
#line 889
c_rt_lib0clear(&___nl__im__0);
#line 889
//clear ___nl__bool__2;
#line 889
c_rt_lib0clear(&___nl__im__3);
#line 889
return ___nl__im__1;
#line 890
goto label_96;
#line 890
label_25:
;
#line 891
c_rt_lib0move(&___nl__im__8,___get_global_string_const(419));
#line 891
c_rt_lib0move(&___nl__im__7, generator_js_priv0imm_call(___nl__im__8));
#line 891
c_rt_lib0clear(&___nl__im__8);
#line 891
c_rt_lib0move(&___nl__im__9,___get_global_string_const(469));
#line 891
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 891
c_rt_lib0clear(&___nl__im__7);
#line 891
c_rt_lib0clear(&___nl__im__9);
#line 891
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 891
c_rt_lib0clear(&___nl__im__6);
#line 891
c_rt_lib0move(&___nl__im__10,___get_global_string_const(336));
#line 891
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 891
c_rt_lib0clear(&___nl__im__5);
#line 891
c_rt_lib0clear(&___nl__im__10);
#line 891
c_rt_lib0clear(&___nl__im__0);
#line 891
c_rt_lib0clear(&___nl__im__1);
#line 891
//clear ___nl__bool__2;
#line 891
c_rt_lib0clear(&___nl__im__3);
#line 891
return ___nl__im__4;
#line 892
goto label_96;
#line 892
label_45:
;
#line 893
c_rt_lib0move(&___nl__im__14, generator_js_priv0get_namespace_name());
#line 893
c_rt_lib0move(&___nl__im__15,___get_global_string_const(836));
#line 893
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 893
c_rt_lib0clear(&___nl__im__14);
#line 893
c_rt_lib0clear(&___nl__im__15);
#line 893
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 893
c_rt_lib0clear(&___nl__im__13);
#line 893
c_rt_lib0move(&___nl__im__16,___get_global_string_const(336));
#line 893
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 893
c_rt_lib0clear(&___nl__im__12);
#line 893
c_rt_lib0clear(&___nl__im__16);
#line 893
c_rt_lib0clear(&___nl__im__0);
#line 893
c_rt_lib0clear(&___nl__im__1);
#line 893
//clear ___nl__bool__2;
#line 893
c_rt_lib0clear(&___nl__im__3);
#line 893
c_rt_lib0clear(&___nl__im__4);
#line 893
return ___nl__im__11;
#line 894
goto label_96;
#line 894
label_64:
;
#line 895
c_rt_lib0clear(&___nl__im__0);
#line 895
//clear ___nl__bool__2;
#line 895
c_rt_lib0clear(&___nl__im__3);
#line 895
c_rt_lib0clear(&___nl__im__4);
#line 895
c_rt_lib0clear(&___nl__im__11);
#line 895
return ___nl__im__1;
#line 896
goto label_96;
#line 896
label_72:
;
#line 896
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(569)));
#line 896
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 897
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 897
nl_die_arg(___nl__im__19);
#line 898
goto label_96;
#line 898
label_78:
;
#line 898
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(142)));
#line 898
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 899
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 899
nl_die_arg(___nl__im__22);
#line 900
goto label_96;
#line 900
label_84:
;
#line 900
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(573)));
#line 900
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 901
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_mk(0));
#line 901
nl_die_arg(___nl__im__25);
#line 902
goto label_96;
#line 902
label_90:
;
#line 902
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(143)));
#line 902
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 903
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 903
nl_die_arg(___nl__im__28);
#line 904
goto label_96;
#line 904
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
#line 908
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(146));
#line 908
if(___nl__bool__2){ goto label_19;}
#line 910
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(419));
#line 910
if(___nl__bool__2){ goto label_25;}
#line 912
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 912
if(___nl__bool__2){ goto label_35;}
#line 914
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(420));
#line 914
if(___nl__bool__2){ goto label_54;}
#line 916
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(569));
#line 916
if(___nl__bool__2){ goto label_62;}
#line 918
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(142));
#line 918
if(___nl__bool__2){ goto label_68;}
#line 920
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(573));
#line 920
if(___nl__bool__2){ goto label_74;}
#line 922
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(143));
#line 922
if(___nl__bool__2){ goto label_80;}
#line 922
c_rt_lib0move(&___nl__im__3,___get_global_string_const(15));
#line 922
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 922
nl_die_arg(___nl__im__3);
#line 908
label_19:
;
#line 909
c_rt_lib0clear(&___nl__im__0);
#line 909
//clear ___nl__bool__2;
#line 909
c_rt_lib0clear(&___nl__im__3);
#line 909
return ___nl__im__1;
#line 910
goto label_86;
#line 910
label_25:
;
#line 911
c_rt_lib0move(&___nl__im__5,___get_global_string_const(837));
#line 911
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__1, ___nl__im__5));
#line 911
c_rt_lib0clear(&___nl__im__5);
#line 911
c_rt_lib0clear(&___nl__im__0);
#line 911
c_rt_lib0clear(&___nl__im__1);
#line 911
//clear ___nl__bool__2;
#line 911
c_rt_lib0clear(&___nl__im__3);
#line 911
return ___nl__im__4;
#line 912
goto label_86;
#line 912
label_35:
;
#line 913
c_rt_lib0move(&___nl__im__9, generator_js_priv0get_namespace_name());
#line 913
c_rt_lib0move(&___nl__im__10,___get_global_string_const(838));
#line 913
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__10));
#line 913
c_rt_lib0clear(&___nl__im__9);
#line 913
c_rt_lib0clear(&___nl__im__10);
#line 913
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__1));
#line 913
c_rt_lib0clear(&___nl__im__8);
#line 913
c_rt_lib0move(&___nl__im__11,___get_global_string_const(336));
#line 913
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 913
c_rt_lib0clear(&___nl__im__7);
#line 913
c_rt_lib0clear(&___nl__im__11);
#line 913
c_rt_lib0clear(&___nl__im__0);
#line 913
c_rt_lib0clear(&___nl__im__1);
#line 913
//clear ___nl__bool__2;
#line 913
c_rt_lib0clear(&___nl__im__3);
#line 913
c_rt_lib0clear(&___nl__im__4);
#line 913
return ___nl__im__6;
#line 914
goto label_86;
#line 914
label_54:
;
#line 915
c_rt_lib0clear(&___nl__im__0);
#line 915
//clear ___nl__bool__2;
#line 915
c_rt_lib0clear(&___nl__im__3);
#line 915
c_rt_lib0clear(&___nl__im__4);
#line 915
c_rt_lib0clear(&___nl__im__6);
#line 915
return ___nl__im__1;
#line 916
goto label_86;
#line 916
label_62:
;
#line 916
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(569)));
#line 916
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 917
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_mk(0));
#line 917
nl_die_arg(___nl__im__14);
#line 918
goto label_86;
#line 918
label_68:
;
#line 918
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(142)));
#line 918
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 919
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 919
nl_die_arg(___nl__im__17);
#line 920
goto label_86;
#line 920
label_74:
;
#line 920
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(573)));
#line 920
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 921
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 921
nl_die_arg(___nl__im__20);
#line 922
goto label_86;
#line 922
label_80:
;
#line 922
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(143)));
#line 922
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 923
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 923
nl_die_arg(___nl__im__23);
#line 924
goto label_86;
#line 924
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
#line 928
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(236)));
#line 928
___nl__int__3 = 0;
#line 928
___nl__int__4 = 1;
#line 928
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 928
label_4:
;
#line 928
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 928
if(___nl__bool__6){ goto label_34;}
#line 928
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 928
c_rt_lib0copy(&___nl__im__2, ___nl__im__7);
#line 929
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(482)));
#line 929
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(110)));
#line 929
c_rt_lib0clear(&___nl__im__10);
#line 929
___nl__bool__8 = generator_js_priv0is_own(___nl__im__9);
#line 929
c_rt_lib0clear(&___nl__im__9);
#line 929
___nl__bool__8 = !___nl__bool__8;
#line 929
if(___nl__bool__8){ goto label_28;}
#line 929
___nl__bool__11 = true;
#line 929
c_rt_lib0clear(&___nl__im__0);
#line 929
c_rt_lib0clear(&___nl__im__1);
#line 929
c_rt_lib0clear(&___nl__im__2);
#line 929
//clear ___nl__int__3;
#line 929
//clear ___nl__int__4;
#line 929
//clear ___nl__int__5;
#line 929
//clear ___nl__bool__6;
#line 929
c_rt_lib0clear(&___nl__im__7);
#line 929
//clear ___nl__bool__8;
#line 929
return ___nl__bool__11;
#line 929
goto label_28;
#line 929
label_28:
;
#line 929
//clear ___nl__bool__8;
#line 929
//clear ___nl__bool__11;
#line 929
c_rt_lib0clear(&___nl__im__2);
#line 930
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 930
goto label_4;
#line 930
label_34:
;
#line 931
___nl__bool__12 = false;
#line 931
c_rt_lib0clear(&___nl__im__0);
#line 931
c_rt_lib0clear(&___nl__im__1);
#line 931
c_rt_lib0clear(&___nl__im__2);
#line 931
//clear ___nl__int__3;
#line 931
//clear ___nl__int__4;
#line 931
//clear ___nl__int__5;
#line 931
//clear ___nl__bool__6;
#line 931
c_rt_lib0clear(&___nl__im__7);
#line 931
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
#line 935
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(146));
#line 935
___nl__bool__1 = !___nl__bool__1;
#line 935
if(___nl__bool__1){ goto label_8;}
#line 935
___nl__bool__2 = false;
#line 935
c_rt_lib0clear(&___nl__im__0);
#line 935
//clear ___nl__bool__1;
#line 935
return ___nl__bool__2;
#line 935
goto label_8;
#line 935
label_8:
;
#line 935
//clear ___nl__bool__1;
#line 935
//clear ___nl__bool__2;
#line 936
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(419));
#line 936
___nl__bool__3 = !___nl__bool__3;
#line 936
if(___nl__bool__3){ goto label_19;}
#line 936
___nl__bool__4 = false;
#line 936
c_rt_lib0clear(&___nl__im__0);
#line 936
//clear ___nl__bool__3;
#line 936
return ___nl__bool__4;
#line 936
goto label_19;
#line 936
label_19:
;
#line 936
//clear ___nl__bool__3;
#line 936
//clear ___nl__bool__4;
#line 937
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(33));
#line 937
___nl__bool__5 = !___nl__bool__5;
#line 937
if(___nl__bool__5){ goto label_30;}
#line 937
___nl__bool__6 = false;
#line 937
c_rt_lib0clear(&___nl__im__0);
#line 937
//clear ___nl__bool__5;
#line 937
return ___nl__bool__6;
#line 937
goto label_30;
#line 937
label_30:
;
#line 937
//clear ___nl__bool__5;
#line 937
//clear ___nl__bool__6;
#line 938
___nl__bool__7 = true;
#line 938
c_rt_lib0clear(&___nl__im__0);
#line 938
return ___nl__bool__7;
return false;

}

ImmT  generator_js_priv0print(ImmT  ___nl__im__0,generator_js0state_t0type* ___ref___im__1) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 942
c_rt_lib0move(&___nl__im__2,___get_global_string_const(66));
#line 942
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 942
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__0));
#line 942
c_rt_lib0move(&___nl__string__3,___get_global_string_const(66));
#line 942
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__3, ___nl__im__2));
#line 942
c_rt_lib0clear(&___nl__im__2);
#line 942
c_rt_lib0clear(&___nl__string__3);
#line 942
c_rt_lib0clear(&___nl__im__0);
#line 942
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
#line 946
c_rt_lib0move(&___nl__im__3, string0lf());
#line 946
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__0, ___nl__im__3));
#line 946
c_rt_lib0clear(&___nl__im__3);
#line 946
c_rt_lib0delete(generator_js_priv0print(___nl__im__2, ___ref___im__1));
#line 946
c_rt_lib0clear(&___nl__im__2);
#line 947
c_rt_lib0move(&___nl__im__4,___get_global_string_const(741));
#line 947
c_rt_lib0move(&___nl__im__4, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__4));
#line 947
___nl__int__5 = 1;
#line 947
___nl__int__6 = getIntFromImm(___nl__im__4);
#line 947
___nl__int__7 = ___nl__int__6 + ___nl__int__5;
#line 947
c_rt_lib0move(&___nl__im__4, c_rt_lib0int_new(___nl__int__7));
#line 947
c_rt_lib0move(&___nl__string__8,___get_global_string_const(741));
#line 947
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__8, ___nl__im__4));
#line 947
c_rt_lib0clear(&___nl__im__4);
#line 947
//clear ___nl__int__5;
#line 947
//clear ___nl__int__6;
#line 947
//clear ___nl__int__7;
#line 947
c_rt_lib0clear(&___nl__string__8);
#line 947
c_rt_lib0clear(&___nl__im__0);
#line 947
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_sourcemap_line_marker(INT  ___nl__int__0,generator_js0state_t0type* ___ref___im__1) {
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
#line 951
c_rt_lib0move(&___nl__im__2,___get_global_string_const(71));
#line 951
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__1), ___nl__im__2));
#line 951
c_rt_lib0move(&___nl__im__3,___get_global_string_const(745));
#line 951
c_rt_lib0move(&___nl__im__3, c_rt_lib0get_ref_hash(___nl__im__2, ___nl__im__3));
#line 951
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__1), ___get_global_string_const(741)));
#line 951
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 951
c_rt_lib0clear(&___nl__im__7);
#line 951
___nl__int__8 = 1;
#line 951
___nl__int__5 = ___nl__int__6 + ___nl__int__8;
#line 951
//clear ___nl__int__6;
#line 951
//clear ___nl__int__8;
#line 951
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__5));
#line 951
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__0));
#line 951
c_rt_lib0move(&___nl__im__11, c_rt_lib0ov_mk_none(___get_global_string_const(81)));
#line 951
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_string_const(748), ___nl__im__9, ___get_global_string_const(749), ___nl__im__10, ___get_global_string_const(750), ___nl__im__11));
#line 951
//clear ___nl__int__5;
#line 951
c_rt_lib0clear(&___nl__im__9);
#line 951
c_rt_lib0clear(&___nl__im__10);
#line 951
c_rt_lib0clear(&___nl__im__11);
#line 951
c_rt_lib0array_push(&___nl__im__3, ___nl__im__4);
#line 951
c_rt_lib0move(&___nl__string__12,___get_global_string_const(745));
#line 951
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__2, ___nl__string__12, ___nl__im__3));
#line 951
c_rt_lib0move(&___nl__string__12,___get_global_string_const(71));
#line 951
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__1, ___nl__string__12, ___nl__im__2));
#line 951
c_rt_lib0clear(&___nl__im__2);
#line 951
c_rt_lib0clear(&___nl__im__3);
#line 951
c_rt_lib0clear(&___nl__im__4);
#line 951
c_rt_lib0clear(&___nl__string__12);
#line 951
//clear ___nl__int__0;
#line 951
return NULL;
return NULL;

}

ImmT  generator_js_priv0print_sourcemap_line_marker_with_symbol(INT  ___nl__int__0,INT  ___nl__int__1,INT  ___nl__int__2,ImmT  ___nl__im__3,generator_js0state_t0type* ___ref___im__4) {
c_rt_lib0arg_val(___nl__im__3);
generator_js_priv0__const__init();
INT  ___nl__int__5 = 0;
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
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__string__37 = NULL;
#line 957
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(71)));
#line 957
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(744)));
#line 957
c_rt_lib0clear(&___nl__im__8);
#line 957
___nl__bool__6 = hash0has_key(___nl__im__7, ___nl__im__3);
#line 957
c_rt_lib0clear(&___nl__im__7);
#line 957
___nl__bool__6 = !___nl__bool__6;
#line 957
if(___nl__bool__6){ goto label_15;}
#line 958
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(71)));
#line 958
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(744)));
#line 958
c_rt_lib0clear(&___nl__im__10);
#line 958
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value(___nl__im__9, ___nl__im__3));
#line 958
___nl__int__5 = getIntFromImm(___nl__im__11);
#line 958
c_rt_lib0clear(&___nl__im__9);
#line 958
c_rt_lib0clear(&___nl__im__11);
#line 959
goto label_52;
#line 959
label_15:
;
#line 960
c_rt_lib0move(&___nl__im__12,___get_global_string_const(71));
#line 960
c_rt_lib0move(&___nl__im__12, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__12));
#line 960
c_rt_lib0move(&___nl__im__13,___get_global_string_const(743));
#line 960
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash(___nl__im__12, ___nl__im__13));
#line 960
c_rt_lib0array_push(&___nl__im__13, ___nl__im__3);
#line 960
c_rt_lib0move(&___nl__string__14,___get_global_string_const(743));
#line 960
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__12, ___nl__string__14, ___nl__im__13));
#line 960
c_rt_lib0move(&___nl__string__14,___get_global_string_const(71));
#line 960
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__14, ___nl__im__12));
#line 960
c_rt_lib0clear(&___nl__im__12);
#line 960
c_rt_lib0clear(&___nl__im__13);
#line 960
c_rt_lib0clear(&___nl__string__14);
#line 961
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(71)));
#line 961
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(743)));
#line 961
c_rt_lib0clear(&___nl__im__17);
#line 961
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 961
c_rt_lib0clear(&___nl__im__16);
#line 961
___nl__int__18 = 1;
#line 961
___nl__int__5 = ___nl__int__15 - ___nl__int__18;
#line 961
//clear ___nl__int__15;
#line 961
//clear ___nl__int__18;
#line 962
c_rt_lib0move(&___nl__im__19,___get_global_string_const(71));
#line 962
c_rt_lib0move(&___nl__im__19, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__19));
#line 962
c_rt_lib0move(&___nl__im__20,___get_global_string_const(744));
#line 962
c_rt_lib0move(&___nl__im__20, c_rt_lib0get_ref_hash(___nl__im__19, ___nl__im__20));
#line 962
c_rt_lib0move(&___nl__im__21, c_rt_lib0int_new(___nl__int__5));
#line 962
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__im__20, ___nl__im__3, ___nl__im__21));
#line 962
c_rt_lib0move(&___nl__string__22,___get_global_string_const(744));
#line 962
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__19, ___nl__string__22, ___nl__im__20));
#line 962
c_rt_lib0move(&___nl__string__22,___get_global_string_const(71));
#line 962
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__22, ___nl__im__19));
#line 962
c_rt_lib0clear(&___nl__im__19);
#line 962
c_rt_lib0clear(&___nl__im__20);
#line 962
c_rt_lib0clear(&___nl__im__21);
#line 962
c_rt_lib0clear(&___nl__string__22);
#line 963
goto label_52;
#line 963
label_52:
;
#line 963
//clear ___nl__bool__6;
#line 964
c_rt_lib0move(&___nl__im__23,___get_global_string_const(71));
#line 964
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__4), ___nl__im__23));
#line 964
c_rt_lib0move(&___nl__im__24,___get_global_string_const(745));
#line 964
c_rt_lib0move(&___nl__im__24, c_rt_lib0get_ref_hash(___nl__im__23, ___nl__im__24));
#line 965
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec((*___ref___im__4), ___get_global_string_const(741)));
#line 965
___nl__int__27 = getIntFromImm(___nl__im__28);
#line 965
c_rt_lib0clear(&___nl__im__28);
#line 965
___nl__int__29 = 1;
#line 965
___nl__int__26 = ___nl__int__27 + ___nl__int__29;
#line 965
//clear ___nl__int__27;
#line 965
//clear ___nl__int__29;
#line 965
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__26));
#line 965
c_rt_lib0move(&___nl__im__31, c_rt_lib0int_new(___nl__int__0));
#line 967
c_rt_lib0move(&___nl__im__34, c_rt_lib0int_new(___nl__int__1));
#line 967
c_rt_lib0move(&___nl__im__35, c_rt_lib0int_new(___nl__int__2));
#line 967
c_rt_lib0move(&___nl__im__36, c_rt_lib0int_new(___nl__int__5));
#line 967
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_mk(3, ___get_global_string_const(562), ___nl__im__34, ___get_global_string_const(746), ___nl__im__35, ___get_global_string_const(747), ___nl__im__36));
#line 967
c_rt_lib0clear(&___nl__im__34);
#line 967
c_rt_lib0clear(&___nl__im__35);
#line 967
c_rt_lib0clear(&___nl__im__36);
#line 967
c_rt_lib0move(&___nl__im__32, c_rt_lib0ov_mk_arg(___get_global_string_const(80), ___nl__im__33));
#line 967
c_rt_lib0clear(&___nl__im__33);
#line 967
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_mk(3, ___get_global_string_const(748), ___nl__im__30, ___get_global_string_const(749), ___nl__im__31, ___get_global_string_const(750), ___nl__im__32));
#line 967
//clear ___nl__int__26;
#line 967
c_rt_lib0clear(&___nl__im__30);
#line 967
c_rt_lib0clear(&___nl__im__31);
#line 967
c_rt_lib0clear(&___nl__im__32);
#line 967
c_rt_lib0array_push(&___nl__im__24, ___nl__im__25);
#line 967
c_rt_lib0move(&___nl__string__37,___get_global_string_const(745));
#line 967
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__23, ___nl__string__37, ___nl__im__24));
#line 967
c_rt_lib0move(&___nl__string__37,___get_global_string_const(71));
#line 967
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__4, ___nl__string__37, ___nl__im__23));
#line 967
c_rt_lib0clear(&___nl__im__23);
#line 967
c_rt_lib0clear(&___nl__im__24);
#line 967
c_rt_lib0clear(&___nl__im__25);
#line 967
c_rt_lib0clear(&___nl__string__37);
#line 967
//clear ___nl__int__0;
#line 967
//clear ___nl__int__1;
#line 967
//clear ___nl__int__2;
#line 967
c_rt_lib0clear(&___nl__im__3);
#line 967
//clear ___nl__int__5;
#line 967
return NULL;
return NULL;

}

ImmT  generator_js_priv0generate_sourcemap(generator_js0sourcemap_t0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_js_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
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
#line 976
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(745)));
#line 976
c_rt_lib0move(&___nl__im__2, generator_js_priv0generate_sourcemap_mappings(___nl__im__3));
#line 976
c_rt_lib0clear(&___nl__im__3);
#line 977
c_rt_lib0move(&___nl__im__4,___get_global_string_const(36));
#line 978
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(743)));
#line 978
___nl__int__5 = c_rt_lib0array_len(___nl__im__6);
#line 978
c_rt_lib0clear(&___nl__im__6);
#line 978
___nl__int__7 = 0;
#line 978
___nl__int__8 = 1;
#line 978
label_9:
;
#line 978
___nl__bool__9 = ___nl__int__7 >= ___nl__int__5;
#line 978
if(___nl__bool__9){ goto label_38;}
#line 979
___nl__int__11 = 0;
#line 979
___nl__bool__10 = ___nl__int__7 != ___nl__int__11;
#line 979
//clear ___nl__int__11;
#line 979
___nl__bool__10 = !___nl__bool__10;
#line 979
if(___nl__bool__10){ goto label_21;}
#line 980
c_rt_lib0move(&___nl__im__12,___get_global_string_const(328));
#line 980
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 980
c_rt_lib0clear(&___nl__im__12);
#line 981
goto label_21;
#line 981
label_21:
;
#line 981
//clear ___nl__bool__10;
#line 982
c_rt_lib0move(&___nl__im__15,___get_global_string_const(296));
#line 982
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(743)));
#line 982
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_get(___nl__im__17, ___nl__int__7));
#line 982
c_rt_lib0clear(&___nl__im__17);
#line 982
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 982
c_rt_lib0clear(&___nl__im__15);
#line 982
c_rt_lib0clear(&___nl__im__16);
#line 982
c_rt_lib0move(&___nl__im__18,___get_global_string_const(296));
#line 982
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__18));
#line 982
c_rt_lib0clear(&___nl__im__14);
#line 982
c_rt_lib0clear(&___nl__im__18);
#line 982
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__13));
#line 982
c_rt_lib0clear(&___nl__im__13);
#line 983
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 983
goto label_9;
#line 983
label_38:
;
#line 984
c_rt_lib0move(&___nl__im__27,___get_global_string_const(839));
#line 984
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__1));
#line 984
c_rt_lib0clear(&___nl__im__27);
#line 986
c_rt_lib0move(&___nl__im__28,___get_global_string_const(840));
#line 986
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__28));
#line 986
c_rt_lib0clear(&___nl__im__26);
#line 986
c_rt_lib0clear(&___nl__im__28);
#line 986
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__1));
#line 986
c_rt_lib0clear(&___nl__im__25);
#line 987
c_rt_lib0move(&___nl__im__29,___get_global_string_const(841));
#line 987
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__29));
#line 987
c_rt_lib0clear(&___nl__im__24);
#line 987
c_rt_lib0clear(&___nl__im__29);
#line 987
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__4));
#line 987
c_rt_lib0clear(&___nl__im__23);
#line 988
c_rt_lib0move(&___nl__im__30,___get_global_string_const(842));
#line 988
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__30));
#line 988
c_rt_lib0clear(&___nl__im__22);
#line 988
c_rt_lib0clear(&___nl__im__30);
#line 988
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__2));
#line 988
c_rt_lib0clear(&___nl__im__21);
#line 989
c_rt_lib0move(&___nl__im__31,___get_global_string_const(843));
#line 989
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__31));
#line 989
c_rt_lib0clear(&___nl__im__20);
#line 989
c_rt_lib0clear(&___nl__im__31);
#line 989
c_rt_lib0clear(&___nl__im__0);
#line 989
c_rt_lib0clear(&___nl__im__1);
#line 989
c_rt_lib0clear(&___nl__im__2);
#line 989
c_rt_lib0clear(&___nl__im__4);
#line 989
//clear ___nl__int__5;
#line 989
//clear ___nl__int__7;
#line 989
//clear ___nl__int__8;
#line 989
//clear ___nl__bool__9;
#line 989
return ___nl__im__19;
return NULL;

}

ImmT  generator_js_priv0generate_sourcemap_mappings(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
bool  ___nl__bool__11 = false;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
#line 994
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 995
___nl__int__2 = 1;
#line 996
___nl__int__3 = 1;
#line 997
___nl__int__4 = 0;
#line 998
___nl__int__6 = 0;
#line 998
___nl__int__7 = 1;
#line 998
___nl__int__8 = c_rt_lib0array_len(___nl__im__0);
#line 998
label_7:
;
#line 998
___nl__bool__9 = ___nl__int__6 >= ___nl__int__8;
#line 998
if(___nl__bool__9){ goto label_98;}
#line 998
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_get(___nl__im__0, ___nl__int__6));
#line 998
c_rt_lib0copy(&___nl__im__5, ___nl__im__10);
#line 999
label_12:
;
#line 999
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(748)));
#line 999
___nl__int__12 = getIntFromImm(___nl__im__13);
#line 999
c_rt_lib0clear(&___nl__im__13);
#line 999
___nl__bool__11 = ___nl__int__2 < ___nl__int__12;
#line 999
//clear ___nl__int__12;
#line 999
___nl__bool__11 = !___nl__bool__11;
#line 999
if(___nl__bool__11){ goto label_27;}
#line 1000
c_rt_lib0move(&___nl__im__14,___get_global_string_const(454));
#line 1000
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__14));
#line 1000
c_rt_lib0clear(&___nl__im__14);
#line 1001
___nl__int__15 = 1;
#line 1001
___nl__int__2 = ___nl__int__2 + ___nl__int__15;
#line 1001
//clear ___nl__int__15;
#line 1002
goto label_12;
#line 1002
label_27:
;
#line 1003
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(749)));
#line 1003
___nl__int__17 = getIntFromImm(___nl__im__18);
#line 1003
c_rt_lib0clear(&___nl__im__18);
#line 1003
___nl__int__16 = ___nl__int__17 - ___nl__int__3;
#line 1003
//clear ___nl__int__17;
#line 1004
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(750)));
#line 1004
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(81));
#line 1004
if(___nl__bool__20){ goto label_41;}
#line 1006
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(80));
#line 1006
if(___nl__bool__20){ goto label_50;}
#line 1006
c_rt_lib0move(&___nl__im__21,___get_global_string_const(15));
#line 1006
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__21, ___nl__im__19));
#line 1006
nl_die_arg(___nl__im__21);
#line 1004
label_41:
;
#line 1005
___nl__int__23 = 0;
#line 1005
___nl__int__24 = 0;
#line 1005
c_rt_lib0move(&___nl__im__22, generator_js_priv0mapping_to_base64_vlq(___nl__int__23, ___nl__int__16, ___nl__int__24));
#line 1005
//clear ___nl__int__23;
#line 1005
//clear ___nl__int__24;
#line 1005
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__22));
#line 1005
c_rt_lib0clear(&___nl__im__22);
#line 1006
goto label_91;
#line 1006
label_50:
;
#line 1006
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(80)));
#line 1006
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1007
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(747)));
#line 1007
___nl__int__28 = getIntFromImm(___nl__im__29);
#line 1007
c_rt_lib0clear(&___nl__im__29);
#line 1007
___nl__int__27 = ___nl__int__28 - ___nl__int__4;
#line 1007
//clear ___nl__int__28;
#line 1008
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(562)));
#line 1008
___nl__int__31 = getIntFromImm(___nl__im__32);
#line 1008
c_rt_lib0clear(&___nl__im__32);
#line 1008
___nl__int__33 = 0;
#line 1008
c_rt_lib0move(&___nl__im__30, generator_js_priv0mapping_with_name_to_base64_vlq(___nl__int__31, ___nl__int__16, ___nl__int__33, ___nl__int__27));
#line 1008
//clear ___nl__int__31;
#line 1008
//clear ___nl__int__33;
#line 1009
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(746)));
#line 1009
___nl__int__36 = getIntFromImm(___nl__im__37);
#line 1009
c_rt_lib0clear(&___nl__im__37);
#line 1009
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(562)));
#line 1009
___nl__int__38 = getIntFromImm(___nl__im__39);
#line 1009
c_rt_lib0clear(&___nl__im__39);
#line 1009
___nl__int__35 = ___nl__int__36 - ___nl__int__38;
#line 1009
//clear ___nl__int__36;
#line 1009
//clear ___nl__int__38;
#line 1009
___nl__int__40 = 0;
#line 1009
___nl__int__41 = 0;
#line 1009
c_rt_lib0move(&___nl__im__34, generator_js_priv0mapping_to_base64_vlq(___nl__int__35, ___nl__int__40, ___nl__int__41));
#line 1009
//clear ___nl__int__35;
#line 1009
//clear ___nl__int__40;
#line 1009
//clear ___nl__int__41;
#line 1010
c_rt_lib0move(&___nl__im__44,___get_global_string_const(328));
#line 1010
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__30, ___nl__im__44));
#line 1010
c_rt_lib0clear(&___nl__im__44);
#line 1010
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__34));
#line 1010
c_rt_lib0clear(&___nl__im__43);
#line 1010
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__42));
#line 1010
c_rt_lib0clear(&___nl__im__42);
#line 1011
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(747)));
#line 1011
___nl__int__4 = getIntFromImm(___nl__im__45);
#line 1011
c_rt_lib0clear(&___nl__im__45);
#line 1012
goto label_91;
#line 1012
label_91:
;
#line 1013
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__5, ___get_global_string_const(749)));
#line 1013
___nl__int__3 = getIntFromImm(___nl__im__46);
#line 1013
c_rt_lib0clear(&___nl__im__46);
#line 1013
c_rt_lib0clear(&___nl__im__5);
#line 1014
___nl__int__6 = ___nl__int__6 + ___nl__int__7;
#line 1014
goto label_7;
#line 1014
label_98:
;
#line 1015
c_rt_lib0clear(&___nl__im__0);
#line 1015
//clear ___nl__int__2;
#line 1015
//clear ___nl__int__3;
#line 1015
//clear ___nl__int__4;
#line 1015
c_rt_lib0clear(&___nl__im__5);
#line 1015
//clear ___nl__int__6;
#line 1015
//clear ___nl__int__7;
#line 1015
//clear ___nl__int__8;
#line 1015
//clear ___nl__bool__9;
#line 1015
c_rt_lib0clear(&___nl__im__10);
#line 1015
//clear ___nl__bool__11;
#line 1015
//clear ___nl__int__16;
#line 1015
c_rt_lib0clear(&___nl__im__19);
#line 1015
//clear ___nl__bool__20;
#line 1015
c_rt_lib0clear(&___nl__im__21);
#line 1015
c_rt_lib0clear(&___nl__im__25);
#line 1015
c_rt_lib0clear(&___nl__im__26);
#line 1015
//clear ___nl__int__27;
#line 1015
c_rt_lib0clear(&___nl__im__30);
#line 1015
c_rt_lib0clear(&___nl__im__34);
#line 1015
return ___nl__im__1;
return NULL;

}

ImmT  generator_js_priv0mapping_to_base64_vlq(INT  ___nl__int__0,INT  ___nl__int__1,INT  ___nl__int__2) {
generator_js_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 1019
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__0));
#line 1019
___nl__int__6 = 0;
#line 1019
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 1019
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__1));
#line 1019
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__2));
#line 1019
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(4, ___nl__im__5, ___nl__im__7, ___nl__im__8, ___nl__im__9));
#line 1019
c_rt_lib0clear(&___nl__im__5);
#line 1019
//clear ___nl__int__6;
#line 1019
c_rt_lib0clear(&___nl__im__7);
#line 1019
c_rt_lib0clear(&___nl__im__8);
#line 1019
c_rt_lib0clear(&___nl__im__9);
#line 1019
c_rt_lib0move(&___nl__im__3, generator_js_priv0numbers_to_base64_vlq(___nl__im__4));
#line 1019
c_rt_lib0clear(&___nl__im__4);
#line 1019
//clear ___nl__int__0;
#line 1019
//clear ___nl__int__1;
#line 1019
//clear ___nl__int__2;
#line 1019
return ___nl__im__3;
return NULL;

}

ImmT  generator_js_priv0mapping_with_name_to_base64_vlq(INT  ___nl__int__0,INT  ___nl__int__1,INT  ___nl__int__2,INT  ___nl__int__3) {
generator_js_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
#line 1024
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__0));
#line 1024
___nl__int__7 = 0;
#line 1024
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 1024
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__1));
#line 1024
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__2));
#line 1024
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__3));
#line 1024
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(5, ___nl__im__6, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11));
#line 1024
c_rt_lib0clear(&___nl__im__6);
#line 1024
//clear ___nl__int__7;
#line 1024
c_rt_lib0clear(&___nl__im__8);
#line 1024
c_rt_lib0clear(&___nl__im__9);
#line 1024
c_rt_lib0clear(&___nl__im__10);
#line 1024
c_rt_lib0clear(&___nl__im__11);
#line 1024
c_rt_lib0move(&___nl__im__4, generator_js_priv0numbers_to_base64_vlq(___nl__im__5));
#line 1024
c_rt_lib0clear(&___nl__im__5);
#line 1024
//clear ___nl__int__0;
#line 1024
//clear ___nl__int__1;
#line 1024
//clear ___nl__int__2;
#line 1024
//clear ___nl__int__3;
#line 1024
return ___nl__im__4;
return NULL;

}

ImmT  generator_js_priv0numbers_to_base64_vlq(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_js_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
INT  ___nl__int__2 = 0;
INT  ___nl__int__3 = 0;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 1028
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 1029
___nl__int__3 = 0;
#line 1029
___nl__int__4 = 1;
#line 1029
___nl__int__5 = c_rt_lib0array_len(___nl__im__0);
#line 1029
label_4:
;
#line 1029
___nl__bool__6 = ___nl__int__3 >= ___nl__int__5;
#line 1029
if(___nl__bool__6){ goto label_15;}
#line 1029
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_get(___nl__im__0, ___nl__int__3));
#line 1029
___nl__int__2 = getIntFromImm(___nl__im__7);
#line 1030
c_rt_lib0move(&___nl__im__8, generator_js_priv0number_to_base64_vlq(___nl__int__2));
#line 1030
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__8));
#line 1030
c_rt_lib0clear(&___nl__im__8);
#line 1030
//clear ___nl__int__2;
#line 1031
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 1031
goto label_4;
#line 1031
label_15:
;
#line 1032
c_rt_lib0clear(&___nl__im__0);
#line 1032
//clear ___nl__int__2;
#line 1032
//clear ___nl__int__3;
#line 1032
//clear ___nl__int__4;
#line 1032
//clear ___nl__int__5;
#line 1032
//clear ___nl__bool__6;
#line 1032
c_rt_lib0clear(&___nl__im__7);
#line 1032
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
#line 1036
c_rt_lib0move(&___nl__im__1,___get_global_string_const(36));
#line 1037
___nl__bool__3 = true;
#line 1037
c_rt_lib0move(&___nl__im__2, generator_js_priv0get_base64_vlq_digit(&___nl__int__0, ___nl__bool__3));
#line 1037
//clear ___nl__bool__3;
#line 1037
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 1037
c_rt_lib0clear(&___nl__im__2);
#line 1038
label_6:
;
#line 1038
___nl__int__5 = 0;
#line 1038
___nl__bool__4 = ___nl__int__0 > ___nl__int__5;
#line 1038
//clear ___nl__int__5;
#line 1038
___nl__bool__4 = !___nl__bool__4;
#line 1038
if(___nl__bool__4){ goto label_18;}
#line 1039
___nl__bool__7 = false;
#line 1039
c_rt_lib0move(&___nl__im__6, generator_js_priv0get_base64_vlq_digit(&___nl__int__0, ___nl__bool__7));
#line 1039
//clear ___nl__bool__7;
#line 1039
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__6));
#line 1039
c_rt_lib0clear(&___nl__im__6);
#line 1040
goto label_6;
#line 1040
label_18:
;
#line 1041
//clear ___nl__int__0;
#line 1041
//clear ___nl__bool__4;
#line 1041
return ___nl__im__1;
#line 1041
//clear ___nl__int__0;
#line 1041
c_rt_lib0clear(&___nl__im__1);
#line 1041
//clear ___nl__bool__4;
#line 1041
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
#line 1047
___nl__int__2 = 0;
#line 1050
___nl__bool__3 = ___nl__bool__1;
#line 1050
___nl__bool__4 = !___nl__bool__3;
#line 1050
if(___nl__bool__4){ goto label_7;}
#line 1050
___nl__int__5 = 0;
#line 1050
___nl__bool__3 = (*___ref___int__0) < ___nl__int__5;
#line 1050
//clear ___nl__int__5;
#line 1050
label_7:
;
#line 1050
//clear ___nl__bool__4;
#line 1050
___nl__bool__3 = !___nl__bool__3;
#line 1050
if(___nl__bool__3){ goto label_17;}
#line 1051
___nl__int__6 = 1;
#line 1051
___nl__int__2 = ___nl__int__2 + ___nl__int__6;
#line 1051
//clear ___nl__int__6;
#line 1052
(*___ref___int__0) = (*___ref___int__0);
#line 1052
(*___ref___int__0) = -(*___ref___int__0);
#line 1053
goto label_17;
#line 1053
label_17:
;
#line 1053
//clear ___nl__bool__3;
#line 1056
___nl__bool__7 = ___nl__bool__1;
#line 1056
___nl__bool__7 = !___nl__bool__7;
#line 1056
if(___nl__bool__7){ goto label_35;}
#line 1057
___nl__int__9 = 2;
#line 1057
___nl__int__11 = 16;
#line 1057
___nl__int__10 = (*___ref___int__0) % ___nl__int__11;
#line 1057
//clear ___nl__int__11;
#line 1057
___nl__int__8 = ___nl__int__9 * ___nl__int__10;
#line 1057
//clear ___nl__int__9;
#line 1057
//clear ___nl__int__10;
#line 1057
___nl__int__2 = ___nl__int__2 + ___nl__int__8;
#line 1057
//clear ___nl__int__8;
#line 1058
___nl__int__12 = 16;
#line 1058
(*___ref___int__0) = (*___ref___int__0) / ___nl__int__12;
#line 1058
//clear ___nl__int__12;
#line 1059
goto label_45;
#line 1059
label_35:
;
#line 1060
___nl__int__14 = 32;
#line 1060
___nl__int__13 = (*___ref___int__0) % ___nl__int__14;
#line 1060
//clear ___nl__int__14;
#line 1060
___nl__int__2 = ___nl__int__2 + ___nl__int__13;
#line 1060
//clear ___nl__int__13;
#line 1061
___nl__int__15 = 32;
#line 1061
(*___ref___int__0) = (*___ref___int__0) / ___nl__int__15;
#line 1061
//clear ___nl__int__15;
#line 1062
goto label_45;
#line 1062
label_45:
;
#line 1062
//clear ___nl__bool__7;
#line 1065
___nl__int__17 = 0;
#line 1065
___nl__bool__16 = (*___ref___int__0) > ___nl__int__17;
#line 1065
//clear ___nl__int__17;
#line 1065
___nl__bool__16 = !___nl__bool__16;
#line 1065
if(___nl__bool__16){ goto label_56;}
#line 1066
___nl__int__18 = 32;
#line 1066
___nl__int__2 = ___nl__int__2 + ___nl__int__18;
#line 1066
//clear ___nl__int__18;
#line 1067
goto label_56;
#line 1067
label_56:
;
#line 1067
//clear ___nl__bool__16;
#line 1069
c_rt_lib0move(&___nl__im__20, generator_js_priv0base64_table());
#line 1069
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__20, ___nl__int__2));
#line 1069
c_rt_lib0clear(&___nl__im__20);
#line 1069
//clear ___nl__bool__1;
#line 1069
//clear ___nl__int__2;
#line 1069
return ___nl__im__19;
return NULL;

}

ImmT generator_js_priv0base64_table(){
generator_js_priv0__const__init();
return generator_js_priv0__const__sing(5);
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
#line 1073
c_rt_lib0move(&___nl__im__1,___get_global_string_const(844));
#line 1073
c_rt_lib0move(&___nl__im__2,___get_global_string_const(845));
#line 1073
c_rt_lib0move(&___nl__im__3,___get_global_string_const(846));
#line 1073
c_rt_lib0move(&___nl__im__4,___get_global_string_const(847));
#line 1073
c_rt_lib0move(&___nl__im__5,___get_global_string_const(848));
#line 1073
c_rt_lib0move(&___nl__im__6,___get_global_string_const(849));
#line 1073
c_rt_lib0move(&___nl__im__7,___get_global_string_const(850));
#line 1073
c_rt_lib0move(&___nl__im__8,___get_global_string_const(851));
#line 1073
c_rt_lib0move(&___nl__im__9,___get_global_string_const(852));
#line 1073
c_rt_lib0move(&___nl__im__10,___get_global_string_const(853));
#line 1073
c_rt_lib0move(&___nl__im__11,___get_global_string_const(854));
#line 1073
c_rt_lib0move(&___nl__im__12,___get_global_string_const(855));
#line 1073
c_rt_lib0move(&___nl__im__13,___get_global_string_const(856));
#line 1073
c_rt_lib0move(&___nl__im__14,___get_global_string_const(857));
#line 1073
c_rt_lib0move(&___nl__im__15,___get_global_string_const(858));
#line 1073
c_rt_lib0move(&___nl__im__16,___get_global_string_const(859));
#line 1073
c_rt_lib0move(&___nl__im__17,___get_global_string_const(860));
#line 1073
c_rt_lib0move(&___nl__im__18,___get_global_string_const(861));
#line 1073
c_rt_lib0move(&___nl__im__19,___get_global_string_const(862));
#line 1073
c_rt_lib0move(&___nl__im__20,___get_global_string_const(863));
#line 1073
c_rt_lib0move(&___nl__im__21,___get_global_string_const(864));
#line 1073
c_rt_lib0move(&___nl__im__22,___get_global_string_const(865));
#line 1073
c_rt_lib0move(&___nl__im__23,___get_global_string_const(866));
#line 1073
c_rt_lib0move(&___nl__im__24,___get_global_string_const(867));
#line 1073
c_rt_lib0move(&___nl__im__25,___get_global_string_const(868));
#line 1073
c_rt_lib0move(&___nl__im__26,___get_global_string_const(869));
#line 1074
c_rt_lib0move(&___nl__im__27,___get_global_string_const(870));
#line 1074
c_rt_lib0move(&___nl__im__28,___get_global_string_const(871));
#line 1074
c_rt_lib0move(&___nl__im__29,___get_global_string_const(65));
#line 1074
c_rt_lib0move(&___nl__im__30,___get_global_string_const(872));
#line 1074
c_rt_lib0move(&___nl__im__31,___get_global_string_const(873));
#line 1074
c_rt_lib0move(&___nl__im__32,___get_global_string_const(874));
#line 1074
c_rt_lib0move(&___nl__im__33,___get_global_string_const(875));
#line 1074
c_rt_lib0move(&___nl__im__34,___get_global_string_const(72));
#line 1074
c_rt_lib0move(&___nl__im__35,___get_global_string_const(876));
#line 1074
c_rt_lib0move(&___nl__im__36,___get_global_string_const(877));
#line 1074
c_rt_lib0move(&___nl__im__37,___get_global_string_const(878));
#line 1074
c_rt_lib0move(&___nl__im__38,___get_global_string_const(879));
#line 1074
c_rt_lib0move(&___nl__im__39,___get_global_string_const(880));
#line 1074
c_rt_lib0move(&___nl__im__40,___get_global_string_const(312));
#line 1074
c_rt_lib0move(&___nl__im__41,___get_global_string_const(207));
#line 1074
c_rt_lib0move(&___nl__im__42,___get_global_string_const(881));
#line 1074
c_rt_lib0move(&___nl__im__43,___get_global_string_const(882));
#line 1074
c_rt_lib0move(&___nl__im__44,___get_global_string_const(313));
#line 1074
c_rt_lib0move(&___nl__im__45,___get_global_string_const(883));
#line 1074
c_rt_lib0move(&___nl__im__46,___get_global_string_const(314));
#line 1074
c_rt_lib0move(&___nl__im__47,___get_global_string_const(884));
#line 1074
c_rt_lib0move(&___nl__im__48,___get_global_string_const(885));
#line 1074
c_rt_lib0move(&___nl__im__49,___get_global_string_const(886));
#line 1074
c_rt_lib0move(&___nl__im__50,___get_global_string_const(317));
#line 1074
c_rt_lib0move(&___nl__im__51,___get_global_string_const(887));
#line 1074
c_rt_lib0move(&___nl__im__52,___get_global_string_const(888));
#line 1075
c_rt_lib0move(&___nl__im__53,___get_global_string_const(20));
#line 1075
c_rt_lib0move(&___nl__im__54,___get_global_string_const(40));
#line 1075
c_rt_lib0move(&___nl__im__55,___get_global_string_const(889));
#line 1075
c_rt_lib0move(&___nl__im__56,___get_global_string_const(890));
#line 1075
c_rt_lib0move(&___nl__im__57,___get_global_string_const(891));
#line 1075
c_rt_lib0move(&___nl__im__58,___get_global_string_const(892));
#line 1075
c_rt_lib0move(&___nl__im__59,___get_global_string_const(893));
#line 1075
c_rt_lib0move(&___nl__im__60,___get_global_string_const(894));
#line 1075
c_rt_lib0move(&___nl__im__61,___get_global_string_const(895));
#line 1075
c_rt_lib0move(&___nl__im__62,___get_global_string_const(896));
#line 1075
c_rt_lib0move(&___nl__im__63,___get_global_string_const(383));
#line 1075
c_rt_lib0move(&___nl__im__64,___get_global_string_const(118));
#line 1075
c_rt_lib0move(&___nl__im__0, c_rt_lib0array_mk(64, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__im__4, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16, ___nl__im__17, ___nl__im__18, ___nl__im__19, ___nl__im__20, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__im__24, ___nl__im__25, ___nl__im__26, ___nl__im__27, ___nl__im__28, ___nl__im__29, ___nl__im__30, ___nl__im__31, ___nl__im__32, ___nl__im__33, ___nl__im__34, ___nl__im__35, ___nl__im__36, ___nl__im__37, ___nl__im__38, ___nl__im__39, ___nl__im__40, ___nl__im__41, ___nl__im__42, ___nl__im__43, ___nl__im__44, ___nl__im__45, ___nl__im__46, ___nl__im__47, ___nl__im__48, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___nl__im__52, ___nl__im__53, ___nl__im__54, ___nl__im__55, ___nl__im__56, ___nl__im__57, ___nl__im__58, ___nl__im__59, ___nl__im__60, ___nl__im__61, ___nl__im__62, ___nl__im__63, ___nl__im__64));
#line 1075
c_rt_lib0clear(&___nl__im__1);
#line 1075
c_rt_lib0clear(&___nl__im__2);
#line 1075
c_rt_lib0clear(&___nl__im__3);
#line 1075
c_rt_lib0clear(&___nl__im__4);
#line 1075
c_rt_lib0clear(&___nl__im__5);
#line 1075
c_rt_lib0clear(&___nl__im__6);
#line 1075
c_rt_lib0clear(&___nl__im__7);
#line 1075
c_rt_lib0clear(&___nl__im__8);
#line 1075
c_rt_lib0clear(&___nl__im__9);
#line 1075
c_rt_lib0clear(&___nl__im__10);
#line 1075
c_rt_lib0clear(&___nl__im__11);
#line 1075
c_rt_lib0clear(&___nl__im__12);
#line 1075
c_rt_lib0clear(&___nl__im__13);
#line 1075
c_rt_lib0clear(&___nl__im__14);
#line 1075
c_rt_lib0clear(&___nl__im__15);
#line 1075
c_rt_lib0clear(&___nl__im__16);
#line 1075
c_rt_lib0clear(&___nl__im__17);
#line 1075
c_rt_lib0clear(&___nl__im__18);
#line 1075
c_rt_lib0clear(&___nl__im__19);
#line 1075
c_rt_lib0clear(&___nl__im__20);
#line 1075
c_rt_lib0clear(&___nl__im__21);
#line 1075
c_rt_lib0clear(&___nl__im__22);
#line 1075
c_rt_lib0clear(&___nl__im__23);
#line 1075
c_rt_lib0clear(&___nl__im__24);
#line 1075
c_rt_lib0clear(&___nl__im__25);
#line 1075
c_rt_lib0clear(&___nl__im__26);
#line 1075
c_rt_lib0clear(&___nl__im__27);
#line 1075
c_rt_lib0clear(&___nl__im__28);
#line 1075
c_rt_lib0clear(&___nl__im__29);
#line 1075
c_rt_lib0clear(&___nl__im__30);
#line 1075
c_rt_lib0clear(&___nl__im__31);
#line 1075
c_rt_lib0clear(&___nl__im__32);
#line 1075
c_rt_lib0clear(&___nl__im__33);
#line 1075
c_rt_lib0clear(&___nl__im__34);
#line 1075
c_rt_lib0clear(&___nl__im__35);
#line 1075
c_rt_lib0clear(&___nl__im__36);
#line 1075
c_rt_lib0clear(&___nl__im__37);
#line 1075
c_rt_lib0clear(&___nl__im__38);
#line 1075
c_rt_lib0clear(&___nl__im__39);
#line 1075
c_rt_lib0clear(&___nl__im__40);
#line 1075
c_rt_lib0clear(&___nl__im__41);
#line 1075
c_rt_lib0clear(&___nl__im__42);
#line 1075
c_rt_lib0clear(&___nl__im__43);
#line 1075
c_rt_lib0clear(&___nl__im__44);
#line 1075
c_rt_lib0clear(&___nl__im__45);
#line 1075
c_rt_lib0clear(&___nl__im__46);
#line 1075
c_rt_lib0clear(&___nl__im__47);
#line 1075
c_rt_lib0clear(&___nl__im__48);
#line 1075
c_rt_lib0clear(&___nl__im__49);
#line 1075
c_rt_lib0clear(&___nl__im__50);
#line 1075
c_rt_lib0clear(&___nl__im__51);
#line 1075
c_rt_lib0clear(&___nl__im__52);
#line 1075
c_rt_lib0clear(&___nl__im__53);
#line 1075
c_rt_lib0clear(&___nl__im__54);
#line 1075
c_rt_lib0clear(&___nl__im__55);
#line 1075
c_rt_lib0clear(&___nl__im__56);
#line 1075
c_rt_lib0clear(&___nl__im__57);
#line 1075
c_rt_lib0clear(&___nl__im__58);
#line 1075
c_rt_lib0clear(&___nl__im__59);
#line 1075
c_rt_lib0clear(&___nl__im__60);
#line 1075
c_rt_lib0clear(&___nl__im__61);
#line 1075
c_rt_lib0clear(&___nl__im__62);
#line 1075
c_rt_lib0clear(&___nl__im__63);
#line 1075
c_rt_lib0clear(&___nl__im__64);
#line 1075
return ___nl__im__0;
return NULL;

}


static ImmT ___const__[7];
static int ___const_init__ = 1;
void generator_js_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[6];


for(int i=0;i<6;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 6);
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
	___const__[1] = generator_js0sourcemap_opt_t0cal();
	break;
case 2:
	___const__[2] = generator_js0sourcemap_t0cal();
	break;
case 3:
	___const__[3] = generator_js0sourcemap_entry_t0cal();
	break;
case 4:
	___const__[4] = generator_js_priv0get_namespace_name0cal();
	break;
case 5:
	___const__[5] = generator_js_priv0base64_table0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
